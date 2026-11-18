// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __CheckForDebuggerJustMyCode @ 15015c9c8

void __cdecl __CheckForDebuggerJustMyCode(uchar *param_1)

{
  if ((*param_1 != '\0') && (__DebuggerCurrentSteppingThreadId != 0)) {
    GetCurrentThreadId();
  }
  return;
}

