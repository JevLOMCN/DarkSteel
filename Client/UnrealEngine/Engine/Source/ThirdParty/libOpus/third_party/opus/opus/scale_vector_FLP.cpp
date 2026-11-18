// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_scale_vector_FLP @ 14f893a34

void silk_scale_vector_FLP(float *param_1,float param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_3 & 0xfffc) != 0) {
    lVar1 = ((ulonglong)(param_3 & 0xfffc) - 1 >> 2) + 1;
    iVar4 = (int)lVar1 << 2;
    pfVar3 = param_1;
    do {
      lVar2 = 4;
      do {
        *pfVar3 = param_2 * *pfVar3;
        pfVar3 = pfVar3 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  for (lVar1 = (longlong)iVar4; lVar1 < (int)param_3; lVar1 = lVar1 + 1) {
    param_1[lVar1] = param_2 * param_1[lVar1];
  }
  return;
}

