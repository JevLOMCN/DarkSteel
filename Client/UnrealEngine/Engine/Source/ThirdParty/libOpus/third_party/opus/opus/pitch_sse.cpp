// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 4

// celt_inner_prod_sse @ 14f86aaf4

float celt_inner_prod_sse(longlong param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar7 = 0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  if (0 < param_3 + -3) {
    uVar6 = (param_3 - 4U >> 2) + 1;
    uVar9 = (ulonglong)uVar6;
    iVar7 = uVar6 * 4;
    pfVar8 = param_2;
    do {
      pfVar1 = (float *)((param_1 - (longlong)param_2) + (longlong)pfVar8);
      fVar2 = *pfVar8;
      pfVar3 = pfVar8 + 1;
      pfVar4 = pfVar8 + 2;
      pfVar5 = pfVar8 + 3;
      pfVar8 = pfVar8 + 4;
      fVar11 = fVar11 + *pfVar1 * fVar2;
      fVar12 = fVar12 + pfVar1[1] * *pfVar3;
      fVar13 = fVar13 + pfVar1[2] * *pfVar4;
      fVar14 = fVar14 + pfVar1[3] * *pfVar5;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar10 = (longlong)iVar7;
  fVar11 = fVar11 + fVar13 + fVar12 + fVar14;
  if (lVar10 < param_3) {
    pfVar8 = param_2 + lVar10;
    lVar10 = param_3 - lVar10;
    do {
      pfVar1 = (float *)((longlong)pfVar8 + (param_1 - (longlong)param_2));
      fVar12 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar11 = *pfVar1 * fVar12 + fVar11;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  return fVar11;
}

// comb_filter_const_sse @ 14f86ab9c

void comb_filter_const_sse
               (float *param_1,longlong param_2,int param_3,int param_4,float param_5,float param_6,
               float param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  pfVar1 = (float *)(param_2 + (longlong)(-2 - param_3) * 4);
  if (0 < param_4 + -3) {
    lVar11 = ((longlong)(-2 - param_3) * 4 + 0x10) - (longlong)param_1;
    lVar9 = param_2 - (longlong)param_1;
    uVar10 = (ulonglong)((param_4 - 4U >> 2) + 1);
    fVar12 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar14 = pfVar1[2];
    fVar15 = pfVar1[3];
    do {
      pfVar1 = (float *)(lVar11 + param_2 + (longlong)param_1);
      fVar2 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar1 = (float *)(lVar9 + (longlong)param_1);
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *param_1 = *pfVar1 + fVar14 * param_5 +
                 (fVar15 + fVar13) * param_6 + (fVar2 + fVar12) * param_7;
      param_1[1] = fVar6 + fVar15 * param_5 +
                   (fVar2 + fVar14) * param_6 + (fVar3 + fVar13) * param_7;
      param_1[2] = fVar7 + fVar2 * param_5 + (fVar3 + fVar15) * param_6 + (fVar4 + fVar14) * param_7
      ;
      param_1[3] = fVar8 + fVar3 * param_5 + (fVar4 + fVar2) * param_6 + (fVar5 + fVar15) * param_7;
      param_1 = param_1 + 4;
      uVar10 = uVar10 - 1;
      fVar12 = fVar2;
      fVar13 = fVar3;
      fVar14 = fVar4;
      fVar15 = fVar5;
    } while (uVar10 != 0);
  }
  return;
}

// dual_inner_prod_sse @ 14f86ac58

void dual_inner_prod_sse(longlong param_1,float *param_2,longlong param_3,int param_4,float *param_5
                        ,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  ulonglong uVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar6 = 0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  if (0 < param_4 + -3) {
    uVar3 = (param_4 - 4U >> 2) + 1;
    uVar4 = (ulonglong)uVar3;
    iVar6 = uVar3 * 4;
    pfVar5 = param_2;
    do {
      pfVar1 = (float *)((param_1 - (longlong)param_2) + (longlong)pfVar5);
      fVar8 = fVar8 + *pfVar5 * *pfVar1;
      fVar9 = fVar9 + pfVar5[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar5[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar5[3] * pfVar1[3];
      pfVar2 = (float *)((param_3 - (longlong)param_2) + (longlong)pfVar5);
      pfVar5 = pfVar5 + 4;
      fVar12 = fVar12 + *pfVar2 * *pfVar1;
      fVar13 = fVar13 + pfVar2[1] * pfVar1[1];
      fVar14 = fVar14 + pfVar2[2] * pfVar1[2];
      fVar15 = fVar15 + pfVar2[3] * pfVar1[3];
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  lVar7 = (longlong)iVar6;
  *param_5 = fVar8 + fVar10 + fVar9 + fVar11;
  *param_6 = fVar12 + fVar14 + fVar13 + fVar15;
  if (lVar7 < param_4) {
    pfVar5 = (float *)(param_1 + lVar7 * 4);
    lVar7 = param_4 - lVar7;
    do {
      *param_5 = *(float *)(((longlong)param_2 - param_1) + (longlong)pfVar5) * *pfVar5 + *param_5;
      pfVar1 = (float *)((param_3 - param_1) + (longlong)pfVar5);
      fVar8 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      *param_6 = *pfVar1 * fVar8 + *param_6;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}

// xcorr_kernel_sse @ 14f86ad48

void xcorr_kernel_sse(float *param_1,longlong param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  ulonglong uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar14 = *param_3;
  fVar15 = param_3[1];
  fVar16 = param_3[2];
  fVar17 = param_3[3];
  iVar12 = 0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  fVar21 = 0.0;
  if (0 < param_4 + -3) {
    uVar9 = (param_4 - 4U >> 2) + 1;
    uVar10 = (ulonglong)uVar9;
    iVar12 = uVar9 * 4;
    pfVar11 = param_1;
    do {
      fVar3 = *pfVar11;
      fVar4 = pfVar11[1];
      fVar5 = pfVar11[2];
      fVar6 = pfVar11[3];
      pfVar1 = (float *)((param_2 - (longlong)param_1) + (longlong)pfVar11);
      fVar7 = pfVar1[2];
      pfVar2 = (float *)((param_2 - (longlong)param_1) + 0xc + (longlong)pfVar11);
      fVar8 = pfVar2[1];
      pfVar11 = pfVar11 + 4;
      fVar14 = fVar14 + fVar3 * *pfVar1 + fVar7 * fVar5;
      fVar15 = fVar15 + fVar3 * pfVar1[1] + pfVar1[3] * fVar5;
      fVar16 = fVar16 + fVar3 * fVar7 + fVar8 * fVar5;
      fVar17 = fVar17 + fVar3 * pfVar1[3] + pfVar2[2] * fVar5;
      fVar18 = fVar18 + pfVar1[1] * fVar4 + fVar6 * *pfVar2;
      fVar19 = fVar19 + fVar7 * fVar4 + fVar6 * fVar8;
      fVar20 = fVar20 + *pfVar2 * fVar4 + fVar6 * pfVar2[2];
      fVar21 = fVar21 + fVar8 * fVar4 + fVar6 * pfVar2[3];
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  if (iVar12 < param_4) {
    iVar13 = iVar12 + 1;
    fVar3 = param_1[iVar12];
    pfVar11 = (float *)(param_2 + (longlong)iVar12 * 4);
    fVar14 = fVar14 + fVar3 * *pfVar11;
    fVar15 = fVar15 + fVar3 * pfVar11[1];
    fVar16 = fVar16 + fVar3 * pfVar11[2];
    fVar17 = fVar17 + fVar3 * pfVar11[3];
    if (iVar13 < param_4) {
      iVar12 = iVar12 + 2;
      fVar3 = param_1[iVar13];
      pfVar11 = (float *)(param_2 + (longlong)iVar13 * 4);
      fVar18 = fVar18 + fVar3 * *pfVar11;
      fVar19 = fVar19 + fVar3 * pfVar11[1];
      fVar20 = fVar20 + fVar3 * pfVar11[2];
      fVar21 = fVar21 + fVar3 * pfVar11[3];
      if (iVar12 < param_4) {
        fVar3 = param_1[iVar12];
        pfVar11 = (float *)(param_2 + (longlong)iVar12 * 4);
        fVar14 = fVar14 + fVar3 * *pfVar11;
        fVar15 = fVar15 + fVar3 * pfVar11[1];
        fVar16 = fVar16 + fVar3 * pfVar11[2];
        fVar17 = fVar17 + fVar3 * pfVar11[3];
      }
    }
  }
  *param_3 = fVar18 + fVar14;
  param_3[1] = fVar19 + fVar15;
  param_3[2] = fVar20 + fVar16;
  param_3[3] = fVar21 + fVar17;
  return;
}

