// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_bwexpander_32 @ 14f893d1c

void silk_bwexpander_32(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = param_3 + -0x10000;
  lVar1 = (longlong)param_2 + -1;
  lVar2 = 0;
  if (0 < lVar1) {
    do {
      *(int *)(param_1 + lVar2 * 4) =
           (int)((ulonglong)((longlong)*(int *)(param_1 + lVar2 * 4) * (longlong)param_3) >> 0x10);
      lVar2 = lVar2 + 1;
      param_3 = param_3 + ((iVar3 * param_3 >> 0xf) + 1 >> 1);
    } while (lVar2 < lVar1);
  }
  *(int *)(param_1 + lVar1 * 4) =
       (int)((ulonglong)((longlong)*(int *)(param_1 + lVar1 * 4) * (longlong)param_3) >> 0x10);
  return;
}

