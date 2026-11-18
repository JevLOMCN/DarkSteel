// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b4ac1d0

UClass * __cdecl UDS_InputTriggerHold::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputTriggerHold.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputTriggerHold",
               &Z_Registration_Info_UClass_UDS_InputTriggerHold.InnerSingleton,
               StaticRegisterNativesUDS_InputTriggerHold,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UDS_InputTriggerHold>,
               InternalVTableHelperCtorCaller<UDS_InputTriggerHold>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputTriggerHold.InnerSingleton;
}

// UDS_InputTriggerHold @ 14b4b2eb0

UDS_InputTriggerHold * __thiscall
UDS_InputTriggerHold::UDS_InputTriggerHold(UDS_InputTriggerHold *this,FVTableHelper *param_1)

{
  UInputTrigger::UInputTrigger((UInputTrigger *)this,param_1);
  this->bTriggered = false;
  this->_padding_ = (longlong)&___7UDS_InputTriggerHold__6B_;
  this->HoldTimeThreshold = 1.0;
  this->bIsOneShot = false;
  this->bAffectedByTimeDilation = false;
  this->HeldDuration = 0.0;
  return this;
}

// UDS_InputTriggerHold @ 14b4b2ef0

UDS_InputTriggerHold * __thiscall
UDS_InputTriggerHold::UDS_InputTriggerHold(UDS_InputTriggerHold *this,FObjectInitializer *param_1)

{
  UInputTrigger::UInputTrigger((UInputTrigger *)this,param_1);
  this->bTriggered = false;
  this->_padding_ = (longlong)&___7UDS_InputTriggerHold__6B_;
  this->HoldTimeThreshold = 1.0;
  this->bIsOneShot = false;
  this->bAffectedByTimeDilation = false;
  this->HeldDuration = 0.0;
  return this;
}

// ~UDS_InputTriggerHold @ 14b4b3d40

void __thiscall UDS_InputTriggerHold::~UDS_InputTriggerHold(UDS_InputTriggerHold *this)

{
  this->_padding_ = (longlong)&___7UDS_InputTriggerHold__6B_;
  UInputTrigger::~UInputTrigger((UInputTrigger *)this);
  return;
}

// GetDebugState @ 14b4b63b0

FString * __thiscall
UDS_InputTriggerHold::GetDebugState(UDS_InputTriggerHold *this,FString *__return_storage_ptr__)

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

// GetPrivateStaticClass @ 14b4b7ef0

UClass * __cdecl UDS_InputTriggerHold::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputTriggerHold.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputTriggerHold",
               &Z_Registration_Info_UClass_UDS_InputTriggerHold.InnerSingleton,
               StaticRegisterNativesUDS_InputTriggerHold,0x60,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Input",
               InternalConstructor<UDS_InputTriggerHold>,
               InternalVTableHelperCtorCaller<UDS_InputTriggerHold>,local_res8,
               UInputTrigger::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputTriggerHold.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14b4b8070

ETriggerEventsSupported __thiscall
UDS_InputTriggerHold::GetSupportedTriggerEvents(UDS_InputTriggerHold *this)

{
  return Ongoing;
}

// StaticRegisterNativesUDS_InputTriggerHold @ 14b4b86b0

void __cdecl UDS_InputTriggerHold::StaticRegisterNativesUDS_InputTriggerHold(void)

{
  return;
}

// CalculateHeldDuration @ 14b99c300

float __thiscall
UDS_InputTriggerHold::CalculateHeldDuration
          (UDS_InputTriggerHold *this,UEnhancedPlayerInput *param_1,float param_2)

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

// UpdateState_Implementation @ 14b9c9f60

ETriggerState __thiscall
UDS_InputTriggerHold::UpdateState_Implementation
          (UDS_InputTriggerHold *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EInputActionValueType EVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  ETriggerState EVar8;
  float fVar9;
  
  EVar4 = param_2->ValueType;
  EVar8 = None;
  if ((EVar4 == Boolean) || (EVar4 == Axis1D)) {
    dVar1 = (param_2->Value).field0_0x0._s_0.X;
    fVar9 = (float)(dVar1 * dVar1);
  }
  else if (EVar4 == Axis2D) {
    dVar1 = (param_2->Value).field0_0x0._s_0.Y;
    dVar2 = (param_2->Value).field0_0x0._s_0.X;
    fVar9 = (float)(dVar1 * dVar1 + dVar2 * dVar2);
  }
  else if (EVar4 == Axis3D) {
    dVar1 = (param_2->Value).field0_0x0._s_0.Y;
    dVar2 = (param_2->Value).field0_0x0._s_0.X;
    dVar3 = (param_2->Value).field0_0x0._s_0.Z;
    fVar9 = (float)(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\EnhancedInput\\Source\\EnhancedInput\\Public\\InputActionValue.h"
                       ,0x9b,L"Unsupported value type for input action value!");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      EVar8 = (*pcVar6)();
      return EVar8;
    }
    fVar9 = 0.0;
  }
  if (fVar9 < *(float *)&this->_padding_ * *(float *)&this->_padding_) {
    this->HeldDuration = 0.0;
    fVar9 = 0.0;
  }
  else {
    EVar8 = Ongoing;
    fVar9 = __real_3f800000;
    if (param_1 != (UEnhancedPlayerInput *)0x0) {
      fVar9 = UEnhancedPlayerInput::GetEffectiveTimeDilation(param_1);
    }
    if (this->bAffectedByTimeDilation != false) {
      param_3 = fVar9 * param_3;
    }
    fVar9 = param_3 + this->HeldDuration;
    this->HeldDuration = fVar9;
  }
  bVar5 = this->HoldTimeThreshold <= fVar9;
  bVar7 = this->bTriggered;
  this->bTriggered = bVar5;
  if (bVar5) {
    if ((bVar7 == false) || (this->bIsOneShot == false)) {
      EVar8 = Triggered;
    }
    else {
      EVar8 = None;
    }
  }
  return EVar8;
}

