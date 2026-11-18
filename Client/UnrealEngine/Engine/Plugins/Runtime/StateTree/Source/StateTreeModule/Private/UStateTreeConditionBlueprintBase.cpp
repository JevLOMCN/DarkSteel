// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 8

// StaticClass @ 14d49ffc0

UClass * __cdecl UStateTreeConditionBlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeConditionBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeConditionBlueprintBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeConditionBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeConditionBlueprintBase>,local_res8,
               UStateTreeNodeBlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.InnerSingleton;
}

// UStateTreeConditionBlueprintBase @ 14d4b2500

UStateTreeConditionBlueprintBase * __thiscall
UStateTreeConditionBlueprintBase::UStateTreeConditionBlueprintBase
          (UStateTreeConditionBlueprintBase *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UStateTreeConditionBlueprintBase__6B_;
  return this;
}

// UStateTreeConditionBlueprintBase @ 14d4b2550

UStateTreeConditionBlueprintBase * __thiscall
UStateTreeConditionBlueprintBase::UStateTreeConditionBlueprintBase
          (UStateTreeConditionBlueprintBase *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  UClass *pUVar4;
  FName *pFVar5;
  UFunction *pUVar6;
  UStateTreeConditionBlueprintBase *pUVar7;
  FName local_res8;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined2 *)&this->_padding_ = 0xffff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UStateTreeConditionBlueprintBase__6B_;
  pUVar4 = GetPrivateStaticClass();
  pFVar5 = ::FName::FName(&local_res8,L"ReceiveTestCondition");
  pUVar6 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar5,IncludeSuper);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UStateTreeConditionBlueprintBase *)(*pcVar1)();
      return pUVar7;
    }
  }
  else if ((UClass *)pUVar6->_padding_ != pUVar4) {
    bVar3 = 1;
    goto LAB_14d4b25ef;
  }
  bVar3 = 0;
LAB_14d4b25ef:
  this->bHasTestCondition = '\0';
  this->field_0x68 = this->field_0x68 | bVar3;
  return this;
}

// ~UStateTreeConditionBlueprintBase @ 14d4b3e10

void __thiscall
UStateTreeConditionBlueprintBase::~UStateTreeConditionBlueprintBase
          (UStateTreeConditionBlueprintBase *this)

{
  this->_padding_ = (longlong)&___7UStateTreeConditionBlueprintBase__6B_;
  UStateTreeNodeBlueprintBase::~UStateTreeNodeBlueprintBase((UStateTreeNodeBlueprintBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d4bef70

UClass * __cdecl UStateTreeConditionBlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeConditionBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeConditionBlueprintBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeConditionBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeConditionBlueprintBase>,local_res8,
               UStateTreeNodeBlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeConditionBlueprintBase.InnerSingleton;
}

// ReceiveTestCondition @ 14d4cd130

bool __thiscall
UStateTreeConditionBlueprintBase::ReceiveTestCondition(UStateTreeConditionBlueprintBase *this)

{
  UFunction *pUVar1;
  char local_res8 [32];
  
  local_res8[0] = '\0';
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeConditionBlueprintBase_ReceiveTestCondition);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0] != '\0';
}

// StaticRegisterNativesUStateTreeConditionBlueprintBase @ 14d4d1010

void __cdecl
UStateTreeConditionBlueprintBase::StaticRegisterNativesUStateTreeConditionBlueprintBase(void)

{
  return;
}

// TestCondition @ 14d4d1680

bool __thiscall
UStateTreeConditionBlueprintBase::TestCondition
          (UStateTreeConditionBlueprintBase *this,FStateTreeExecutionContext *param_1)

{
  UFunction *pUVar1;
  char local_res8 [32];
  
  if (this->bHasTestCondition != 0) {
    UStateTreeNodeBlueprintBase::SetCachedInstanceDataFromContext
              ((UStateTreeNodeBlueprintBase *)this,param_1);
    local_res8[0] = '\0';
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeConditionBlueprintBase_ReceiveTestCondition);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
    UStateTreeNodeBlueprintBase::ClearCachedInstanceData((UStateTreeNodeBlueprintBase *)this);
    return local_res8[0] != '\0';
  }
  return false;
}

