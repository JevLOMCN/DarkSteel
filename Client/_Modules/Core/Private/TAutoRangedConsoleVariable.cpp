// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// TAutoRangedConsoleVariable<int> @ 14161a080

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

TAutoRangedConsoleVariable<int> * __thiscall
TAutoRangedConsoleVariable<int>::TAutoRangedConsoleVariable<int>
          (TAutoRangedConsoleVariable<int> *this,wchar_t *param_1,int param_2,int param_3,
          int param_4,wchar_t *param_5,uint param_6,IConsoleVariable *param_7)

{
  code *pcVar1;
  IConsoleManager *this_00;
  bool bVar2;
  TAutoRangedConsoleVariable<int> *pTVar3;
  FRangedConsoleVariable<int> *this_01;
  FRangedConsoleVariable<int> *pFVar4;
  IConsoleObject *pIVar5;
  undefined8 uVar6;
  FString local_38;
  
  pFVar4 = (FRangedConsoleVariable<int> *)0x0;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TAutoRangedConsoleVariable<int> *)(*pcVar1)();
    return pTVar3;
  }
  this_00 = IConsoleManager::Singleton;
  this_01 = ::operator_new(0xd8);
  if (this_01 != (FRangedConsoleVariable<int> *)0x0) {
    ::FString::FString(&local_38,param_1);
    pFVar4 = FRangedConsoleVariable<int>::FRangedConsoleVariable<int>
                       (this_01,&local_38,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  pIVar5 = FConsoleManager::AddConsoleObject
                     ((FConsoleManager *)this_00,param_1,(IConsoleObject *)pFVar4);
  pIVar5 = (IConsoleObject *)(**(code **)(pIVar5->_padding_ + 0x38))(pIVar5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar5);
  *(undefined ***)this = &___7__TAutoConsoleVariable_H__6B_;
  uVar6 = (**(code **)(**(longlong **)&this->field_0x8 + 0x68))();
  *(undefined8 *)&this->field_0x10 = uVar6;
  if ((this_01 != (FRangedConsoleVariable<int> *)0x0) &&
     (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &___7__TAutoRangedConsoleVariable_H__6B_;
  return this;
}

// TAutoRangedConsoleVariable<float> @ 14161a1e0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

TAutoRangedConsoleVariable<float> * __thiscall
TAutoRangedConsoleVariable<float>::TAutoRangedConsoleVariable<float>
          (TAutoRangedConsoleVariable<float> *this,wchar_t *param_1,float param_2,float param_3,
          float param_4,wchar_t *param_5,uint param_6,IConsoleVariable *param_7)

{
  code *pcVar1;
  IConsoleManager *this_00;
  bool bVar2;
  TAutoRangedConsoleVariable<float> *pTVar3;
  FRangedConsoleVariable<float> *this_01;
  FRangedConsoleVariable<float> *pFVar4;
  IConsoleObject *pIVar5;
  undefined8 uVar6;
  FString local_48 [3];
  
  pFVar4 = (FRangedConsoleVariable<float> *)0x0;
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TAutoRangedConsoleVariable<float> *)(*pcVar1)();
    return pTVar3;
  }
  this_00 = IConsoleManager::Singleton;
  this_01 = ::operator_new(0xd8);
  if (this_01 != (FRangedConsoleVariable<float> *)0x0) {
    ::FString::FString(local_48,param_1);
    pFVar4 = FRangedConsoleVariable<float>::FRangedConsoleVariable<float>
                       (this_01,local_48,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  pIVar5 = FConsoleManager::AddConsoleObject
                     ((FConsoleManager *)this_00,param_1,(IConsoleObject *)pFVar4);
  pIVar5 = (IConsoleObject *)(**(code **)(pIVar5->_padding_ + 0x38))(pIVar5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar5);
  *(undefined ***)this = &___7__TAutoConsoleVariable_M__6B_;
  uVar6 = (**(code **)(**(longlong **)&this->field_0x8 + 0x70))();
  *(undefined8 *)&this->field_0x10 = uVar6;
  if ((this_01 != (FRangedConsoleVariable<float> *)0x0) &&
     (local_48[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48[0].Data.AllocatorInstance.Data);
  }
  *(undefined ***)this = &___7__TAutoRangedConsoleVariable_M__6B_;
  return this;
}

