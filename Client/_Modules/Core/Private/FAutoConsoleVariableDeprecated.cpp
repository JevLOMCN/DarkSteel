// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FAutoConsoleVariableDeprecated @ 14161c6c0

FAutoConsoleVariableDeprecated * __thiscall
FAutoConsoleVariableDeprecated::FAutoConsoleVariableDeprecated
          (FAutoConsoleVariableDeprecated *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          EShadowCVarBehavior param_4,EShadowCVarBehavior param_5,wchar_t *param_6)

{
  code *pcVar1;
  IConsoleManager *this_00;
  bool bVar2;
  FAutoConsoleVariableDeprecated *pFVar3;
  FConsoleVariableShadow *pFVar4;
  FConsoleVariableShadow *pFVar5;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FAutoConsoleVariableDeprecated *)(*pcVar1)();
    return pFVar3;
  }
  this_00 = IConsoleManager::Singleton;
  pFVar4 = ::operator_new(0x58);
  pFVar5 = (FConsoleVariableShadow *)0x0;
  if (pFVar4 != (FConsoleVariableShadow *)0x0) {
    pFVar5 = FConsoleVariableShadow::FConsoleVariableShadow
                       (pFVar4,param_2,param_5,param_4,true,param_3,param_6);
  }
  pFVar4 = (FConsoleVariableShadow *)&pFVar5->_padding_;
  if (pFVar5 == (FConsoleVariableShadow *)0x0) {
    pFVar4 = (FConsoleVariableShadow *)0x0;
  }
  FConsoleManager::AddShadowConsoleObject
            ((FConsoleManager *)this_00,param_1,(IConsoleObject *)pFVar4);
  return this;
}

