// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AITestSuite
// Functions: 1

// ConditionallyBreakOnTestFail @ 147050a20

void __cdecl UE::AITestSuite::ConditionallyBreakOnTestFail(void)

{
  code *pcVar1;
  bool bVar2;
  
  if (bBreakOnTestFail) {
    bVar2 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

