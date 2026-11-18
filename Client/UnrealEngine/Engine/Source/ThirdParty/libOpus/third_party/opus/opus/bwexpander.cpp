// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_bwexpander @ 14f892728

void silk_bwexpander(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = param_3 + -0x10000;
  lVar1 = (longlong)param_2 + -1;
  lVar2 = 0;
  if (0 < lVar1) {
    do {
      *(short *)(param_1 + lVar2 * 2) =
           (short)((*(short *)(param_1 + lVar2 * 2) * param_3 >> 0xf) + 1 >> 1);
      lVar2 = lVar2 + 1;
      param_3 = param_3 + ((iVar3 * param_3 >> 0xf) + 1 >> 1);
    } while (lVar2 < lVar1);
  }
  *(short *)(param_1 + lVar1 * 2) =
       (short)((*(short *)(param_1 + lVar1 * 2) * param_3 >> 0xf) + 1 >> 1);
  return;
}

