// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_k2a_FLP @ 14f88c344

void silk_k2a_FLP(longlong param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = (longlong)param_3;
  if (0 < param_3) {
    iVar6 = 1;
    lVar4 = param_1 - (longlong)param_2;
    do {
      fVar1 = *param_2;
      lVar8 = 0;
      if (0 < (longlong)iVar6 >> 1) {
        pfVar5 = (float *)(lVar4 + -4 + (longlong)param_2);
        do {
          fVar2 = *pfVar5;
          fVar3 = *(float *)(param_1 + lVar8 * 4);
          *(float *)(param_1 + lVar8 * 4) = fVar2 * fVar1 + fVar3;
          lVar8 = lVar8 + 1;
          *pfVar5 = fVar3 * fVar1 + fVar2;
          pfVar5 = pfVar5 + -1;
        } while (lVar8 < (longlong)iVar6 >> 1);
      }
      iVar6 = iVar6 + 1;
      *(uint *)(lVar4 + (longlong)param_2) = (uint)fVar1 ^ __xmm_80000000800000008000000080000000;
      param_2 = param_2 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

