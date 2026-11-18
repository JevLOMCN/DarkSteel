// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Check @ 148b286d0

void __cdecl `UEngine::PerformError'::__l416::FAudio::Check(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Crashing the audio thread via check(0) at your request\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\UnrealEngine.cpp"
                     ,0x2db1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  DebugDummyWorkAfterFailure();
  return;
}

// GPF @ 148b3d640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `UEngine::PerformError'::__l412::FAudio::GPF(void)

{
  _DAT_00000003 = 0x7b;
  return;
}

