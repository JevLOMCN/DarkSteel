// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_bwexpander_FLP @ 14f88c1e4

void silk_bwexpander_FLP(longlong param_1,int param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = 0;
  lVar2 = (longlong)param_2 + -1;
  fVar3 = param_3;
  fVar4 = param_3;
  if (0 < lVar2) {
    do {
      fVar4 = fVar3 * param_3;
      *(float *)(param_1 + lVar1 * 4) = fVar3 * *(float *)(param_1 + lVar1 * 4);
      lVar1 = lVar1 + 1;
      fVar3 = fVar4;
    } while (lVar1 < lVar2);
  }
  *(float *)(param_1 + lVar2 * 4) = fVar4 * *(float *)(param_1 + lVar2 * 4);
  return;
}

