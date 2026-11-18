// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 12

// StaticClass @ 14d4a3380

UClass * __cdecl UStateTreeEvaluatorBlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeEvaluatorBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeEvaluatorBlueprintBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeEvaluatorBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeEvaluatorBlueprintBase>,local_res8,
               UStateTreeNodeBlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.InnerSingleton;
}

// UStateTreeEvaluatorBlueprintBase @ 14d4b2740

UStateTreeEvaluatorBlueprintBase * __thiscall
UStateTreeEvaluatorBlueprintBase::UStateTreeEvaluatorBlueprintBase
          (UStateTreeEvaluatorBlueprintBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStateTreeEvaluatorBlueprintBase__6B_;
  return this;
}

// UStateTreeEvaluatorBlueprintBase @ 14d4b2790

UStateTreeEvaluatorBlueprintBase * __thiscall
UStateTreeEvaluatorBlueprintBase::UStateTreeEvaluatorBlueprintBase
          (UStateTreeEvaluatorBlueprintBase *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  UClass *pUVar4;
  FName *pFVar5;
  UFunction *pUVar6;
  UStateTreeEvaluatorBlueprintBase *pUVar7;
  FName local_res8 [2];
  FName local_res18;
  FName local_res20;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStateTreeEvaluatorBlueprintBase__6B_;
  pUVar4 = GetPrivateStaticClass();
  pFVar5 = ::FName::FName(local_res8,L"ReceiveTreeStart");
  pUVar6 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar5,IncludeSuper);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UStateTreeEvaluatorBlueprintBase *)(*pcVar1)();
      return pUVar7;
    }
LAB_14d4b282f:
    bVar3 = 0;
  }
  else {
    if ((UClass *)pUVar6->_padding_ == pUVar4) goto LAB_14d4b282f;
    bVar3 = 1;
  }
  this->bHasTreeStart = '\0';
  this->field_0x68 = this->field_0x68 | bVar3;
  pUVar4 = GetPrivateStaticClass();
  pFVar5 = ::FName::FName(&local_res18,L"ReceiveTreeStop");
  pUVar6 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar5,IncludeSuper);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UStateTreeEvaluatorBlueprintBase *)(*pcVar1)();
      return pUVar7;
    }
LAB_14d4b2892:
    bVar3 = 0;
  }
  else {
    if ((UClass *)pUVar6->_padding_ == pUVar4) goto LAB_14d4b2892;
    bVar3 = 2;
  }
  this->bHasTreeStop = '\0';
  this->field_0x68 = this->field_0x68 | bVar3;
  pUVar4 = GetPrivateStaticClass();
  pFVar5 = ::FName::FName(&local_res20,L"ReceiveTick");
  pUVar6 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar5,IncludeSuper);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UStateTreeEvaluatorBlueprintBase *)(*pcVar1)();
      return pUVar7;
    }
  }
  else if ((UClass *)pUVar6->_padding_ != pUVar4) {
    bVar3 = 4;
    goto LAB_14d4b28f3;
  }
  bVar3 = 0;
LAB_14d4b28f3:
  this->bHasTick = '\0';
  this->field_0x68 = this->field_0x68 | bVar3;
  return this;
}

// ~UStateTreeEvaluatorBlueprintBase @ 14d4b3e50

void __thiscall
UStateTreeEvaluatorBlueprintBase::~UStateTreeEvaluatorBlueprintBase
          (UStateTreeEvaluatorBlueprintBase *this)

{
  this->_padding_ = (longlong)&___7UStateTreeEvaluatorBlueprintBase__6B_;
  UStateTreeNodeBlueprintBase::~UStateTreeNodeBlueprintBase((UStateTreeNodeBlueprintBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d4bf0f0

UClass * __cdecl UStateTreeEvaluatorBlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeEvaluatorBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeEvaluatorBlueprintBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeEvaluatorBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeEvaluatorBlueprintBase>,local_res8,
               UStateTreeNodeBlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeEvaluatorBlueprintBase.InnerSingleton;
}

// ReceiveTick @ 14d4cd180

void __thiscall
UStateTreeEvaluatorBlueprintBase::ReceiveTick(UStateTreeEvaluatorBlueprintBase *this,float param_1)

{
  UFunction *pUVar1;
  float local_res10 [6];
  
  local_res10[0] = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTick);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res10);
  return;
}

// ReceiveTreeStart @ 14d4cd210

void __thiscall
UStateTreeEvaluatorBlueprintBase::ReceiveTreeStart(UStateTreeEvaluatorBlueprintBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d4cd23d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// ReceiveTreeStop @ 14d4cd250

void __thiscall
UStateTreeEvaluatorBlueprintBase::ReceiveTreeStop(UStateTreeEvaluatorBlueprintBase *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop);
  UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d4cd27d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesUStateTreeEvaluatorBlueprintBase @ 14d4d1030

void __cdecl
UStateTreeEvaluatorBlueprintBase::StaticRegisterNativesUStateTreeEvaluatorBlueprintBase(void)

{
  return;
}

// Tick @ 14d4d17d0

void __thiscall
UStateTreeEvaluatorBlueprintBase::Tick
          (UStateTreeEvaluatorBlueprintBase *this,FStateTreeExecutionContext *param_1,float param_2)

{
  UFunction *pUVar1;
  float local_res8 [8];
  
  if (this->bHasTick != '\0') {
    local_res8[0] = param_2;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  }
  return;
}

// TreeStart @ 14d4d2d80

void __thiscall
UStateTreeEvaluatorBlueprintBase::TreeStart
          (UStateTreeEvaluatorBlueprintBase *this,FStateTreeExecutionContext *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UFunction *pUVar1;
  
  UStateTreeNodeBlueprintBase::SetCachedInstanceDataFromContext
            ((UStateTreeNodeBlueprintBase *)this,param_1);
  if (this->bHasTreeStart != 0) {
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStart);
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x260);
                    /* WARNING: Could not recover jumptable at 0x00014d4d2dbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,pUVar1,0,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// TreeStop @ 14d4d2dd0

void __thiscall
UStateTreeEvaluatorBlueprintBase::TreeStop
          (UStateTreeEvaluatorBlueprintBase *this,FStateTreeExecutionContext *param_1)

{
  UFunction *pUVar1;
  
  if (this->bHasTreeStop != '\0') {
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeEvaluatorBlueprintBase_ReceiveTreeStop);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,0);
  }
  UStateTreeNodeBlueprintBase::ClearCachedInstanceData((UStateTreeNodeBlueprintBase *)this);
  return;
}

