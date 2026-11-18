// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_autocorrelation_FLP @ 14f88c3d4

void silk_autocorrelation_FLP(longlong param_1,longlong param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  
  iVar2 = 0;
  iVar1 = param_3;
  if (param_4 <= param_3) {
    iVar1 = param_4;
  }
  if (0 < iVar1) {
    lVar3 = 0;
    do {
      dVar4 = (double)silk_inner_product_FLP(param_2,param_2 + (longlong)iVar2 * 4,param_3);
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
      *(float *)(param_1 + lVar3 * 4) = (float)dVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar1);
  }
  return;
}

