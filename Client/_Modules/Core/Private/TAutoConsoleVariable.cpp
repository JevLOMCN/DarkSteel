// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 4

// TAutoConsoleVariable<int> @ 141619d40

TAutoConsoleVariable<int> * __thiscall
TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
          (TAutoConsoleVariable<int> *this,wchar_t *param_1,int *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  TAutoConsoleVariable<int> *pTVar3;
  IConsoleObject *pIVar4;
  TConsoleVariableData<int> *pTVar5;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAutoConsoleVariable<int> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x18))
                     (IConsoleManager::Singleton,param_1,*param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_H__6B_;
  pTVar5 = (TConsoleVariableData<int> *)(**(code **)(*(longlong *)this->_padding_ + 0x68))();
  this->Ref = pTVar5;
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_H__6B_;
  return this;
}

// TAutoConsoleVariable<float> @ 141619e10

TAutoConsoleVariable<float> * __thiscall
TAutoConsoleVariable<float>::TAutoConsoleVariable<float>
          (TAutoConsoleVariable<float> *this,wchar_t *param_1,float *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  TAutoConsoleVariable<float> *pTVar3;
  IConsoleObject *pIVar4;
  TConsoleVariableData<float> *pTVar5;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAutoConsoleVariable<float> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x10))
                     (IConsoleManager::Singleton,param_1,*param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_M__6B_;
  pTVar5 = (TConsoleVariableData<float> *)(**(code **)(*(longlong *)this->_padding_ + 0x70))();
  this->Ref = pTVar5;
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_M__6B_;
  return this;
}

// TAutoConsoleVariable<FString> @ 141619ee0

TAutoConsoleVariable<FString> * __thiscall
TAutoConsoleVariable<FString>::TAutoConsoleVariable<FString>
          (TAutoConsoleVariable<FString> *this,wchar_t *param_1,FString *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  TAutoConsoleVariable<FString> *pTVar3;
  IConsoleObject *pIVar4;
  TConsoleVariableData<FString> *pTVar5;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAutoConsoleVariable<FString> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)*IConsoleManager::Singleton)
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_VFString____6B_;
  pTVar5 = (TConsoleVariableData<FString> *)(**(code **)(*(longlong *)this->_padding_ + 0x78))();
  this->Ref = pTVar5;
  this->_padding_ = (longlong)&___7__TAutoConsoleVariable_VFString____6B_;
  return this;
}

// TAutoConsoleVariable<bool> @ 141619fb0

TAutoConsoleVariable<bool> * __thiscall
TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
          (TAutoConsoleVariable<bool> *this,wchar_t *param_1,bool *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  TAutoConsoleVariable<bool> *pTVar3;
  IConsoleObject *pIVar4;
  TConsoleVariableData<bool> *pTVar5;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TAutoConsoleVariable<bool> *)(*pcVar1)();
        return pTVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x20))
                     (IConsoleManager::Singleton,param_1,*param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  this->_padding_ = (longlong)vftable;
  pTVar5 = (TConsoleVariableData<bool> *)(**(code **)(*(longlong *)this->_padding_ + 0x60))();
  this->Ref = pTVar5;
  this->_padding_ = (longlong)vftable;
  return this;
}

