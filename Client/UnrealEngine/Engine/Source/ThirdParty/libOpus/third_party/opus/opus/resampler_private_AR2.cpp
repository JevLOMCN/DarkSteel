// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_resampler_private_AR2 @ 14f88bcb4

void silk_resampler_private_AR2
               (int *param_1,longlong param_2,longlong param_3,short *param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  if (0 < (longlong)param_5) {
    do {
      iVar1 = *(short *)(param_3 + lVar3 * 2) * 0x100 + *param_1;
      *(int *)(param_2 + lVar3 * 4) = iVar1;
      lVar3 = lVar3 + 1;
      lVar2 = (longlong)(iVar1 * 4);
      *param_1 = (int)((ulonglong)(*param_4 * lVar2) >> 0x10) + param_1[1];
      param_1[1] = (int)((ulonglong)(param_4[1] * lVar2) >> 0x10);
    } while (lVar3 < param_5);
  }
  return;
}

