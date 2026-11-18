// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 8

// StaticClass @ 14d4a1740

UClass * __cdecl UStateTreeConsiderationBlueprintBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeConsiderationBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeConsiderationBlueprintBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeConsiderationBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeConsiderationBlueprintBase>,local_res8,
               UStateTreeNodeBlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.InnerSingleton;
}

// UStateTreeConsiderationBlueprintBase @ 14d4b2620

UStateTreeConsiderationBlueprintBase * __thiscall
UStateTreeConsiderationBlueprintBase::UStateTreeConsiderationBlueprintBase
          (UStateTreeConsiderationBlueprintBase *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&___7UStateTreeConsiderationBlueprintBase__6B_;
  return this;
}

// UStateTreeConsiderationBlueprintBase @ 14d4b2670

UStateTreeConsiderationBlueprintBase * __thiscall
UStateTreeConsiderationBlueprintBase::UStateTreeConsiderationBlueprintBase
          (UStateTreeConsiderationBlueprintBase *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  UClass *pUVar4;
  FName *pFVar5;
  UFunction *pUVar6;
  UStateTreeConsiderationBlueprintBase *pUVar7;
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
  this->_padding_ = (longlong)&___7UStateTreeConsiderationBlueprintBase__6B_;
  pUVar4 = GetPrivateStaticClass();
  pFVar5 = ::FName::FName(&local_res8,0xf,L"ReceiveGetScore",FNAME_Add);
  pUVar6 = UClass::FindFunctionByName((UClass *)this->_padding_,*pFVar5,IncludeSuper);
  if (pUVar6 == (UFunction *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1455618344223768614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Public\\BlueprintNodeHelpers.h"
                       ,0x26,"Function");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UStateTreeConsiderationBlueprintBase *)(*pcVar1)();
      return pUVar7;
    }
  }
  else if ((UClass *)pUVar6->_padding_ != pUVar4) {
    bVar3 = 1;
    goto LAB_14d4b271a;
  }
  bVar3 = 0;
LAB_14d4b271a:
  this->bHasGetScore = '\0';
  this->field_0x68 = this->field_0x68 | bVar3;
  return this;
}

// ~UStateTreeConsiderationBlueprintBase @ 14d4b3e30

void __thiscall
UStateTreeConsiderationBlueprintBase::~UStateTreeConsiderationBlueprintBase
          (UStateTreeConsiderationBlueprintBase *this)

{
  this->_padding_ = (longlong)&___7UStateTreeConsiderationBlueprintBase__6B_;
  UStateTreeNodeBlueprintBase::~UStateTreeNodeBlueprintBase((UStateTreeNodeBlueprintBase *)this);
  return;
}

// GetPrivateStaticClass @ 14d4bf030

UClass * __cdecl UStateTreeConsiderationBlueprintBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/StateTreeModule",L"StateTreeConsiderationBlueprintBase",
               &Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.InnerSingleton,
               StaticRegisterNativesUStateTreeConsiderationBlueprintBase,0x70,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UStateTreeConsiderationBlueprintBase>,
               InternalVTableHelperCtorCaller<UStateTreeConsiderationBlueprintBase>,local_res8,
               UStateTreeNodeBlueprintBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStateTreeConsiderationBlueprintBase.InnerSingleton;
}

// GetScore @ 14d4bf4c0

float __thiscall
UStateTreeConsiderationBlueprintBase::GetScore
          (UStateTreeConsiderationBlueprintBase *this,FStateTreeExecutionContext *param_1)

{
  UFunction *pUVar1;
  float local_res8 [8];
  
  if (this->bHasGetScore != 0) {
    UStateTreeNodeBlueprintBase::SetCachedInstanceDataFromContext
              ((UStateTreeNodeBlueprintBase *)this,param_1);
    local_res8[0] = 0.0;
    pUVar1 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_UStateTreeConsiderationBlueprintBase_ReceiveGetScore);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
    UStateTreeNodeBlueprintBase::ClearCachedInstanceData((UStateTreeNodeBlueprintBase *)this);
    return local_res8[0];
  }
  return 0.0;
}

// ReceiveGetScore @ 14d4ccf60

float __thiscall
UStateTreeConsiderationBlueprintBase::ReceiveGetScore(UStateTreeConsiderationBlueprintBase *this)

{
  UFunction *pUVar1;
  float local_res8 [8];
  
  local_res8[0] = 0.0;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UStateTreeConsiderationBlueprintBase_ReceiveGetScore);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_res8);
  return local_res8[0];
}

// StaticRegisterNativesUStateTreeConsiderationBlueprintBase @ 14d4d1020

void __cdecl
UStateTreeConsiderationBlueprintBase::StaticRegisterNativesUStateTreeConsiderationBlueprintBase
          (void)

{
  return;
}

