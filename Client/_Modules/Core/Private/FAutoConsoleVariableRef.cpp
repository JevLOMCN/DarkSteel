// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// ~FAutoConsoleVariableRef @ 141480cb0

void __thiscall FAutoConsoleVariableRef::~FAutoConsoleVariableRef(FAutoConsoleVariableRef *this)

{
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)this);
  return;
}

// FAutoConsoleVariableRef @ 14161c7b0

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,int *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x40))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  (**(code **)(**(longlong **)&this->field_0x8 + 0xe0))(*(longlong **)&this->field_0x8,param_4);
  return this;
}

// FAutoConsoleVariableRef @ 14161c880

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,int *param_2,wchar_t *param_3,uint param_4
          )

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x40))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  return this;
}

// FAutoConsoleVariableRef @ 14161c940

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,float *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x38))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  (**(code **)(**(longlong **)&this->field_0x8 + 0xe0))(*(longlong **)&this->field_0x8,param_4);
  return this;
}

// FAutoConsoleVariableRef @ 14161ca10

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,float *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x38))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  return this;
}

// FAutoConsoleVariableRef @ 14161cad0

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,FName *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x28))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  return this;
}

// FAutoConsoleVariableRef @ 14161cb90

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,FString *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x30))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  (**(code **)(**(longlong **)&this->field_0x8 + 0xe0))(*(longlong **)&this->field_0x8,param_4);
  return this;
}

// FAutoConsoleVariableRef @ 14161cc60

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,FString *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x30))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  return this;
}

// FAutoConsoleVariableRef @ 14161cd20

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,bool *param_2,wchar_t *param_3,
          TDelegate<void___cdecl(IConsoleVariable_*),FDefaultDelegateUserPolicy> *param_4,
          uint param_5)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x48))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_5);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  (**(code **)(**(longlong **)&this->field_0x8 + 0xe0))(*(longlong **)&this->field_0x8,param_4);
  return this;
}

// FAutoConsoleVariableRef @ 14161cdf0

FAutoConsoleVariableRef * __thiscall
FAutoConsoleVariableRef::FAutoConsoleVariableRef
          (FAutoConsoleVariableRef *this,wchar_t *param_1,bool *param_2,wchar_t *param_3,
          uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleVariableRef *pFVar3;
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
        pFVar3 = (FAutoConsoleVariableRef *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x48))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleVariableRef__6B_;
  return this;
}

