// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_scale_copy_vector_FLP @ 14f88e158

void silk_scale_copy_vector_FLP(float *param_1,longlong param_2,float param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_4 & 0xfffc) != 0) {
    lVar2 = ((ulonglong)(param_4 & 0xfffc) - 1 >> 2) + 1;
    iVar4 = (int)lVar2 << 2;
    pfVar3 = param_1;
    do {
      lVar1 = 4;
      do {
        *pfVar3 = param_3 * *(float *)((param_2 - (longlong)param_1) + (longlong)pfVar3);
        pfVar3 = pfVar3 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  lVar2 = (longlong)iVar4;
  if (lVar2 < (int)param_4) {
    pfVar3 = param_1 + lVar2;
    lVar2 = (int)param_4 - lVar2;
    do {
      *pfVar3 = param_3 * *(float *)((longlong)pfVar3 + (param_2 - (longlong)param_1));
      pfVar3 = pfVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

