// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FAutoConsoleCommand @ 14161b6f0

FAutoConsoleCommand * __thiscall
FAutoConsoleCommand::FAutoConsoleCommand
          (FAutoConsoleCommand *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(FOutputDevice_&),FDefaultDelegateUserPolicy> *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleCommand *pFVar3;
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
        pFVar3 = (FAutoConsoleCommand *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x78))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleCommand__6B_;
  return this;
}

// FAutoConsoleCommand @ 14161b7b0

FAutoConsoleCommand * __thiscall
FAutoConsoleCommand::FAutoConsoleCommand
          (FAutoConsoleCommand *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleCommand *pFVar3;
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
        pFVar3 = (FAutoConsoleCommand *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xa0))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleCommand__6B_;
  return this;
}

// FAutoConsoleCommand @ 14161b870

FAutoConsoleCommand * __thiscall
FAutoConsoleCommand::FAutoConsoleCommand
          (FAutoConsoleCommand *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,FOutputDevice_&),FDefaultDelegateUserPolicy>
          *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleCommand *pFVar3;
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
        pFVar3 = (FAutoConsoleCommand *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x88))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleCommand__6B_;
  return this;
}

// FAutoConsoleCommand @ 14161b930

FAutoConsoleCommand * __thiscall
FAutoConsoleCommand::FAutoConsoleCommand
          (FAutoConsoleCommand *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&,UWorld_*,FOutputDevice_&),FDefaultDelegateUserPolicy>
          *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleCommand *pFVar3;
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
        pFVar3 = (FAutoConsoleCommand *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x80))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleCommand__6B_;
  return this;
}

// FAutoConsoleCommand @ 14161b9f0

FAutoConsoleCommand * __thiscall
FAutoConsoleCommand::FAutoConsoleCommand
          (FAutoConsoleCommand *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleCommand *pFVar3;
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
        pFVar3 = (FAutoConsoleCommand *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0x98))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleCommand__6B_;
  return this;
}

// FAutoConsoleCommand @ 14161bab0

FAutoConsoleCommand * __thiscall
FAutoConsoleCommand::FAutoConsoleCommand
          (FAutoConsoleCommand *this,wchar_t *param_1,wchar_t *param_2,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  FAutoConsoleCommand *pFVar3;
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
        pFVar3 = (FAutoConsoleCommand *)(*pcVar1)();
        return pFVar3;
      }
    }
  }
  pIVar4 = (IConsoleObject *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xa8))
                     (IConsoleManager::Singleton,param_1,param_2,param_3,param_4);
  FAutoConsoleObject::FAutoConsoleObject((FAutoConsoleObject *)this,pIVar4);
  *(undefined ***)this = &___7FAutoConsoleCommand__6B_;
  return this;
}

