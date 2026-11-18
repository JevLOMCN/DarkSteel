// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EnhancedInput
// Functions: 17

// StaticClass @ 14a6b7340

UClass * __cdecl UInputTrigger::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTrigger.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTrigger",
               &Z_Registration_Info_UClass_UInputTrigger.InnerSingleton,
               StaticRegisterNativesUInputTrigger,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Input",InternalConstructor<UInputTrigger>,
               InternalVTableHelperCtorCaller<UInputTrigger>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTrigger.InnerSingleton;
}

// UInputTrigger @ 14a6cd130

UInputTrigger * __thiscall UInputTrigger::UInputTrigger(UInputTrigger *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->ActuationThreshold = 0.5;
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  this->bShouldAlwaysTick = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastValue).Value.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastValue).Value.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastValue).Value.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastValue).ValueType = Boolean;
  return this;
}

// UInputTrigger @ 14a6cd180

UInputTrigger * __thiscall
UInputTrigger::UInputTrigger(UInputTrigger *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->ActuationThreshold = 0.5;
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  this->bShouldAlwaysTick = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastValue).Value.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastValue).Value.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastValue).Value.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastValue).ValueType = Boolean;
  return this;
}

// ~UInputTrigger @ 14a6cfa60

void __thiscall UInputTrigger::~UInputTrigger(UInputTrigger *this)

{
  this->_padding_ = (longlong)&___7UInputTrigger__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetDebugState @ 14a6decf0

FString * __thiscall
UInputTrigger::GetDebugState(UInputTrigger *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a6e1a80

UClass * __cdecl UInputTrigger::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInputTrigger.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/EnhancedInput",L"InputTrigger",
               &Z_Registration_Info_UClass_UInputTrigger.InnerSingleton,
               StaticRegisterNativesUInputTrigger,0x50,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig|CLASS_Abstract,CASTCLASS_None,
               L"Input",InternalConstructor<UInputTrigger>,
               InternalVTableHelperCtorCaller<UInputTrigger>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInputTrigger.InnerSingleton;
}

// GetSupportedTriggerEvents @ 14a6e2700

ETriggerEventsSupported __thiscall UInputTrigger::GetSupportedTriggerEvents(UInputTrigger *this)

{
  return Instant;
}

// GetTriggerType @ 14a6e27f0

ETriggerType __thiscall UInputTrigger::GetTriggerType(UInputTrigger *this)

{
  ETriggerType EVar1;
  UFunction *this_00;
  UClass *pUVar2;
  ETriggerType local_res10 [24];
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UInputTrigger_GetTriggerType);
  pUVar2 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar2->ClassFlags & CLASS_Native) == CLASS_None) {
    local_res10[0] = Explicit;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,local_res10);
    return local_res10[0];
  }
                    /* WARNING: Could not recover jumptable at 0x00014a6e2851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)(this->_padding_ + 0x2b0))(this);
  return EVar1;
}

// GetTriggerType_Implementation @ 14a6e2860

ETriggerType __thiscall UInputTrigger::GetTriggerType_Implementation(UInputTrigger *this)

{
  return Explicit;
}

// IsBlocking @ 14a6e5800

bool __thiscall UInputTrigger::IsBlocking(UInputTrigger *this,ETriggerState param_1)

{
  return false;
}

// IsSupportedTriggerEvent @ 14a6e5c30

bool __cdecl
UInputTrigger::IsSupportedTriggerEvent(ETriggerEventsSupported param_1,ETriggerEvent param_2)

{
  if (param_1 == All) {
    return true;
  }
  if (param_1 != None) {
    switch(param_2) {
    case Triggered:
    case Completed:
      return (param_1 & All) != None;
    case Started:
    case Ongoing:
      return (param_1 & (Ongoing|Uninterruptible)) != None;
    case Canceled:
      return (bool)(param_1 >> 2 & 1);
    }
  }
  return false;
}

// StaticRegisterNativesUInputTrigger @ 14a6fb6e0

void __cdecl UInputTrigger::StaticRegisterNativesUInputTrigger(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UInputTrigger_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateState @ 14a700190

ETriggerState __thiscall
UInputTrigger::UpdateState
          (UInputTrigger *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  UFunction *this_00;
  UClass *pUVar4;
  UEnhancedPlayerInput *local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  ETriggerState local_1c;
  
  this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UInputTrigger_UpdateState);
  pUVar4 = UField::GetOwnerClass((UField *)this_00);
  local_48 = (UEnhancedPlayerInput *)(param_2->Value).field0_0x0._s_0.X;
  uStack_40 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 8);
  uStack_3c = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0xc);
  uStack_38 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x10);
  uStack_34 = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 0x14);
  uStack_30 = *(undefined4 *)&param_2->ValueType;
  uStack_2c = *(undefined4 *)&param_2->field_0x1c;
  if ((pUVar4->ClassFlags & CLASS_Native) == CLASS_None) {
    local_1c = None;
    local_48 = param_1;
    uVar1 = uStack_40;
    uStack_40 = *(undefined4 *)&(param_2->Value).field0_0x0;
    uVar2 = uStack_3c;
    uStack_3c = *(undefined4 *)((longlong)&(param_2->Value).field0_0x0 + 4);
    uVar3 = uStack_38;
    uStack_38 = uVar1;
    uVar1 = uStack_34;
    uStack_34 = uVar2;
    uStack_28 = uStack_30;
    uStack_30 = uVar3;
    uStack_24 = uStack_2c;
    uStack_2c = uVar1;
    local_20 = param_3;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_48);
  }
  else {
    local_1c = (**(code **)(this->_padding_ + 0x2b8))(this,param_1,&local_48,param_3);
  }
  return local_1c;
}

// UpdateState_Implementation @ 14a700260

ETriggerState __thiscall
UInputTrigger::UpdateState_Implementation
          (UInputTrigger *this,UEnhancedPlayerInput *param_1,FInputActionValue *param_2,
          float param_3)

{
  ETriggerState EVar1;
  float fVar2;
  
  fVar2 = FInputActionValue::GetMagnitudeSq(param_2);
  EVar1 = None;
  if (this->ActuationThreshold * this->ActuationThreshold <= fVar2) {
    EVar1 = Triggered;
  }
  return EVar1;
}

// execGetTriggerType @ 14a7055b0

void __cdecl UInputTrigger::execGetTriggerType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2b0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsActuated @ 14a7060d0

void __cdecl UInputTrigger::execIsActuated(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector<double>_u_0 *this;
  float fVar2;
  TVector<double>_u_0 local_28;
  undefined1 local_10;
  
  local_10 = 0;
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  this = &local_28;
  if ((TVector<double>_u_0 *)param_2->MostRecentPropertyAddress != (TVector<double>_u_0 *)0x0) {
    this = (TVector<double>_u_0 *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar2 = FInputActionValue::GetMagnitudeSq((FInputActionValue *)&this->_s_0);
  *(bool *)param_3 = *(float *)(param_1 + 1) * *(float *)(param_1 + 1) <= fVar2;
  return;
}

// execUpdateState @ 14a708fe0

void __cdecl UInputTrigger::execUpdateState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  uStack_40 = uStack_40 & 0xffffff00;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res10,&local_38,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

