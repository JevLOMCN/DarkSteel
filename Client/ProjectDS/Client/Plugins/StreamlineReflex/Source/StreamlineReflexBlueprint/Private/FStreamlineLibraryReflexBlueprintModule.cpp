// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StreamlineReflexBlueprint
// Functions: 2

// StartupModule @ 14de8c230

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FStreamlineLibraryReflexBlueprintModule::StartupModule
          (FStreamlineLibraryReflexBlueprintModule *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  EStreamlineFeatureSupport EVar4;
  longlong *plVar5;
  
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
  plVar5 = (longlong *)
           (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                     (IConsoleManager::Singleton,L"r.Streamline.InitializePlugin",1);
  if (plVar5 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar5 + 0xc0))(plVar5);
    if (cVar3 == '\0') {
      if (4 < (byte)LogStreamlineReflexBlueprint._0_1_) {
        UE::Logging::Private::BasicLog<5>
                  (&::LOG_Static,(FLogCategoryBase *)&LogStreamlineReflexBlueprint);
        return;
      }
      return;
    }
  }
  EVar4 = UStreamlineLibraryReflex::QueryReflexSupport();
  UStreamlineLibrary::RegisterFeatureSupport(Reflex,EVar4);
  return;
}

// ShutdownModule @ 14de8c2f0

void __thiscall
FStreamlineLibraryReflexBlueprintModule::ShutdownModule
          (FStreamlineLibraryReflexBlueprintModule *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014de8c363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xc0))(plVar3,*(code **)(*plVar3 + 0xc0));
    return;
  }
  return;
}

