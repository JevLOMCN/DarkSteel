// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_sigm_Q15 @ 14f8924fc

int silk_sigm_Q15(uint param_1)

{
  if (-1 < (int)param_1) {
    if (0xbf < (int)param_1) {
      return 0x7fff;
    }
    return (int)*(short *)(&DAT_15351a400 + ((longlong)(int)param_1 >> 5) * 4) * (param_1 & 0x1f) +
           *(int *)(&DAT_15351a418 + ((longlong)(int)param_1 >> 5) * 4);
  }
  param_1 = -param_1;
  if (0xbf < (int)param_1) {
    return 0;
  }
  return *(int *)(&DAT_15351a430 + ((longlong)(int)param_1 >> 5) * 4) -
         (int)*(short *)(&DAT_15351a400 + ((longlong)(int)param_1 >> 5) * 4) * (param_1 & 0x1f);
}

