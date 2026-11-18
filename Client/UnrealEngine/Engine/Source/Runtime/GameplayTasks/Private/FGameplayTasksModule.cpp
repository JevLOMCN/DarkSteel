// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTasks
// Functions: 2

// StartupModule @ 146ceaa60

void __thiscall FGameplayTasksModule::StartupModule(FGameplayTasksModule *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (GConfig == (FConfigCacheIni *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GConfig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTasks\\Private\\GameplayTasksModule.cpp"
                       ,0x10,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ShutdownModule @ 146ceaaa0

void __thiscall FGameplayTasksModule::ShutdownModule(FGameplayTasksModule *this)

{
  return;
}

