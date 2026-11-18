// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CharacterAI
// Functions: 2

// StartupModule @ 14e9b5b90

void __thiscall FCharacterAIModule::StartupModule(FCharacterAIModule *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (GConfig == (FConfigCacheIni *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GConfig",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\CharacterAI\\Source\\CharacterAI\\Private\\CharacterAIModule.cpp"
                       ,0xf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ShutdownModule @ 14e9b5bd0

void __thiscall FCharacterAIModule::ShutdownModule(FCharacterAIModule *this)

{
  return;
}

