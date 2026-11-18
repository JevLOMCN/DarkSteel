// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FAutoConsoleVariableShadow @ 14161ceb0

FAutoConsoleVariableShadow * __thiscall
FAutoConsoleVariableShadow::FAutoConsoleVariableShadow
          (FAutoConsoleVariableShadow *this,wchar_t *param_1,wchar_t *param_2,
          EShadowCVarBehavior param_3)

{
  code *pcVar1;
  IConsoleManager *this_00;
  bool bVar2;
  FAutoConsoleVariableShadow *pFVar3;
  undefined8 *puVar4;
  IConsoleObject *pIVar5;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAutoConsoleVariableShadow *)(*pcVar1)();
    return pFVar3;
  }
  this_00 = IConsoleManager::Singleton;
  puVar4 = ::operator_new(0x58);
  pIVar5 = (IConsoleObject *)(puVar4 + 8);
  if (puVar4 == (undefined8 *)0x0) {
    pIVar5 = (IConsoleObject *)0x0;
  }
  else {
    *puVar4 = &___7FConsoleObjectShadowData__6B_;
    ::FString::FString((FString *)(puVar4 + 1),param_2);
    ::FString::FString((FString *)(puVar4 + 3),(wchar_t *)0x0);
    ::FString::FString((FString *)(puVar4 + 5),L"");
    *(byte *)((longlong)puVar4 + 0x3a) = *(byte *)((longlong)puVar4 + 0x3a) & 0xf0;
    *puVar4 = &FConsoleVariableShadow::_vftable__for__FConsoleObjectShadowData__;
    *(EShadowCVarBehavior *)(puVar4 + 7) = param_3;
    puVar4[8] = &FConsoleVariableShadow::_vftable__for__IConsoleVariable__;
    *(undefined1 *)((longlong)puVar4 + 0x39) = 0;
    *(undefined4 *)(puVar4 + 9) = 0;
    puVar4[10] = 0;
  }
  FConsoleManager::AddShadowConsoleObject((FConsoleManager *)this_00,param_1,pIVar5);
  return this;
}

