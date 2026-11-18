// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// FAutoConsoleVariable @ 14161c080

FAutoConsoleVariable * __thiscall
FAutoConsoleVariable::FAutoConsoleVariable
          (FAutoConsoleVariable *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariable *pFVar3;
  IConsoleObject *pIVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAutoConsoleVariable *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 8))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariable__6B_;
  (**(code **)(**(longlong **)&this->field_0x8 + 0xe0))(*(longlong **)&this->field_0x8,param_4);
  return this;
}

// FAutoConsoleVariable @ 14161c150

FAutoConsoleVariable * __thiscall
FAutoConsoleVariable::FAutoConsoleVariable
          (FAutoConsoleVariable *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariable *pFVar3;
  IConsoleObject *pIVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAutoConsoleVariable *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 8))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariable__6B_;
  return this;
}

// FAutoConsoleVariable @ 14161c210

FAutoConsoleVariable * __thiscall
FAutoConsoleVariable::FAutoConsoleVariable
          (FAutoConsoleVariable *this,wchar_t *param_1,int param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariable *pFVar3;
  IConsoleObject *pIVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAutoConsoleVariable *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x18))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariable__6B_;
  (**(code **)(**(longlong **)&this->field_0x8 + 0xe0))(*(longlong **)&this->field_0x8,param_4);
  return this;
}

// FAutoConsoleVariable @ 14161c2e0

FAutoConsoleVariable * __thiscall
FAutoConsoleVariable::FAutoConsoleVariable
          (FAutoConsoleVariable *this,wchar_t *param_1,int param_2,wchar_t *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariable *pFVar3;
  IConsoleObject *pIVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAutoConsoleVariable *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x18))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariable__6B_;
  return this;
}

// FAutoConsoleVariable @ 14161c3a0

FAutoConsoleVariable * __thiscall
FAutoConsoleVariable::FAutoConsoleVariable
          (FAutoConsoleVariable *this,wchar_t *param_1,float param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariable *pFVar3;
  IConsoleObject *pIVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAutoConsoleVariable *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x10))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariable__6B_;
  (**(code **)(**(longlong **)&this->field_0x8 + 0xe0))(*(longlong **)&this->field_0x8,param_4);
  return this;
}

// FAutoConsoleVariable @ 14161c470

FAutoConsoleVariable * __thiscall
FAutoConsoleVariable::FAutoConsoleVariable
          (FAutoConsoleVariable *this,wchar_t *param_1,float param_2,wchar_t *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariable *pFVar3;
  IConsoleObject *pIVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAutoConsoleVariable *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x10))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariable__6B_;
  return this;
}

// FAutoConsoleVariable @ 14161c530

FAutoConsoleVariable * __thiscall
FAutoConsoleVariable::FAutoConsoleVariable
          (FAutoConsoleVariable *this,wchar_t *param_1,bool param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariable *pFVar3;
  IConsoleObject *pIVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAutoConsoleVariable *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x20))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariable__6B_;
  (**(code **)(**(longlong **)&this->field_0x8 + 0xe0))(*(longlong **)&this->field_0x8,param_4);
  return this;
}

// FAutoConsoleVariable @ 14161c600

FAutoConsoleVariable * __thiscall
FAutoConsoleVariable::FAutoConsoleVariable
          (FAutoConsoleVariable *this,wchar_t *param_1,bool param_2,wchar_t *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariable *pFVar3;
  IConsoleObject *pIVar4;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FAutoConsoleVariable *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x20))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariable__6B_;
  return this;
}

