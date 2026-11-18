// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_inner_prod_aligned_scale @ 14f88be40

int silk_inner_prod_aligned_scale(longlong param_1,short *param_2,byte param_3,int param_4)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  lVar4 = (longlong)param_4;
  if (0 < lVar4) {
    param_1 = param_1 - (longlong)param_2;
    do {
      sVar2 = *param_2;
      psVar1 = (short *)(param_1 + (longlong)param_2);
      param_2 = param_2 + 1;
      iVar3 = iVar3 + ((int)*psVar1 * (int)sVar2 >> (param_3 & 0x1f));
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return iVar3;
}

