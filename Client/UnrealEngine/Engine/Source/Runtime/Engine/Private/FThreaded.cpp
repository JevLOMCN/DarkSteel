// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Checks @ 148b299d0

void __cdecl `UEngine::PerformError'::__l32::FThreaded::Checks(void)

{
  code *pcVar1;
  bool bVar2;
  
  FGenericCrashContext::SetCrashTrigger(Debug);
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("CrashingTheWorkerThreadAtYourRequest",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                     ,0x2b9a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DebugDummyWorkAfterFailure();
  return;
}

