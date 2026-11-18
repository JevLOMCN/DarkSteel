// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// OodleCore_Enter @ 14f32ef80

int __cdecl oo2::OodleCore_Enter(void)

{
  if (s_OodleCore_Enter_done == 0) {
    rrCPUx86_detect(2);
    s_OodleCore_Enter_done = 1;
  }
  return 1;
}

