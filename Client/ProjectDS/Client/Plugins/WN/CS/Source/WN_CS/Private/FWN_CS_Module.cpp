// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 4

// StartupModule @ 14a69e1d0

/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FWN_CS_Module::StartupModule(FWN_CS_Module *this)

{
  code *pcVar1;
  bool bVar2;
  IConsoleVariable *pIVar3;
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar3 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"a.Budget.Enabled",1);
  IConsoleVariable::Set<int>(pIVar3,1,ECVF_SetByCode,(FName)0x0);
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  pIVar3 = (IConsoleVariable *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"a.Budget.AutoCalculatedSignificanceMaxDistance",1
                     );
  IConsoleVariable::Set<int>(pIVar3,0x3200,ECVF_SetByCode,(FName)0x0);
  return;
}

// PreUnloadCallback @ 14a69e2d0

void __thiscall FWN_CS_Module::PreUnloadCallback(FWN_CS_Module *this)

{
  return;
}

// PostLoadCallback @ 14a69e2e0

void __thiscall FWN_CS_Module::PostLoadCallback(FWN_CS_Module *this)

{
  return;
}

// ShutdownModule @ 14a69e2f0

void __thiscall FWN_CS_Module::ShutdownModule(FWN_CS_Module *this)

{
  return;
}

