// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineBlueprint
// Functions: 2

// StartupModule @ 14de85b30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FStreamlineBlueprintModule::StartupModule(FStreamlineBlueprintModule *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  
  if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
      (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  plVar4 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if ((plVar4 != (longlong *)0x0) && (cVar3 = (**(code **)(*plVar4 + 0xc0))(plVar4), cVar3 == '\0'))
  {
    if ((byte)LogStreamlineBlueprint._0_1_ < 5) {
      return;
    }
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogStreamlineBlueprint);
    return;
  }
  if (UStreamlineLibrary::bStreamlineLibraryInitialized == false) {
    UStreamlineLibrary::bStreamlineLibraryInitialized = true;
  }
  return;
}

// ShutdownModule @ 14de85be0

void __thiscall FStreamlineBlueprintModule::ShutdownModule(FStreamlineBlueprintModule *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  
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
  plVar3 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014de85c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xc0))(plVar3,*(code **)(*plVar3 + 0xc0));
    return;
  }
  return;
}

