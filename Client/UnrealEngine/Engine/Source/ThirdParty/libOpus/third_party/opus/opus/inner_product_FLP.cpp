// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_inner_product_FLP @ 14f892d7c

double silk_inner_product_FLP(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  longlong lVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  double dVar13;
  
  iVar10 = 0;
  dVar13 = 0.0;
  if (0 < (longlong)(param_3 + -3)) {
    pfVar11 = (float *)(param_2 + 4);
    lVar12 = param_1 - param_2;
    lVar9 = ((longlong)(param_3 + -3) - 1U >> 2) + 1;
    iVar10 = (int)lVar9 << 2;
    do {
      pfVar5 = (float *)(lVar12 + -4 + (longlong)pfVar11);
      pfVar4 = pfVar11 + -1;
      pfVar3 = (float *)(lVar12 + (longlong)pfVar11);
      fVar8 = *pfVar11;
      pfVar1 = pfVar11 + 1;
      pfVar6 = (float *)(lVar12 + 4 + (longlong)pfVar11);
      pfVar7 = (float *)(lVar12 + 8 + (longlong)pfVar11);
      pfVar2 = pfVar11 + 2;
      pfVar11 = pfVar11 + 4;
      dVar13 = dVar13 + (double)*pfVar5 * (double)*pfVar4 + (double)*pfVar3 * (double)fVar8 +
                        (double)*pfVar6 * (double)*pfVar1 + (double)*pfVar7 * (double)*pfVar2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  lVar9 = (longlong)iVar10;
  if (lVar9 < param_3) {
    pfVar11 = (float *)(param_2 + lVar9 * 4);
    lVar9 = param_3 - lVar9;
    do {
      pfVar4 = (float *)((longlong)pfVar11 + (param_1 - param_2));
      fVar8 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      dVar13 = dVar13 + (double)*pfVar4 * (double)fVar8;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return dVar13;
}

