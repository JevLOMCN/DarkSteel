// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_corrMatrix_FLP @ 14f893aa0

void silk_corrMatrix_FLP(longlong param_1,int param_2,int param_3,float *param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  float *local_res8;
  int local_res18;
  ulonglong local_res20;
  
  iVar14 = param_3 + -1;
  pfVar2 = (float *)(param_1 + (longlong)iVar14 * 4);
  dVar15 = (double)silk_energy_FLP(pfVar2,param_2);
  *param_4 = (float)dVar15;
  if (1 < param_3) {
    uVar12 = (ulonglong)(param_3 - 1);
    pfVar8 = pfVar2 + (longlong)param_2 + -1;
    pfVar5 = param_4;
    pfVar10 = pfVar2;
    do {
      pfVar10 = pfVar10 + -1;
      pfVar5 = pfVar5 + (param_3 + 1);
      fVar4 = *pfVar8;
      pfVar8 = pfVar8 + -1;
      dVar15 = dVar15 + (double)(*pfVar10 * *pfVar10 - fVar4 * fVar4);
      *pfVar5 = (float)dVar15;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  param_1 = param_1 + (longlong)(param_3 + -2) * 4;
  if (1 < param_3) {
    local_res18 = param_3 * 2;
    lVar6 = param_1 - (longlong)pfVar2;
    local_res8 = param_4 + (param_3 + 2);
    local_res20 = (ulonglong)(param_3 - 1);
    pfVar8 = param_4;
    pfVar5 = param_4;
    do {
      pfVar5 = pfVar5 + param_3;
      pfVar8 = pfVar8 + 1;
      dVar15 = (double)silk_inner_product_FLP(pfVar2,param_1,param_2);
      iVar11 = 1;
      *pfVar5 = (float)dVar15;
      *pfVar8 = (float)dVar15;
      if (1 < iVar14) {
        pfVar10 = pfVar2 + (longlong)param_2 + -1;
        pfVar7 = local_res8;
        iVar13 = local_res18;
        pfVar9 = pfVar2;
        do {
          pfVar9 = pfVar9 + -1;
          iVar1 = iVar13 + iVar11;
          iVar11 = iVar11 + 1;
          iVar13 = iVar13 + param_3;
          pfVar3 = (float *)((longlong)pfVar10 + lVar6);
          fVar4 = *pfVar10;
          pfVar10 = pfVar10 + -1;
          dVar15 = dVar15 + (double)(*(float *)((longlong)pfVar9 + lVar6) * *pfVar9 -
                                    *pfVar3 * fVar4);
          param_4[iVar1] = (float)dVar15;
          *pfVar7 = (float)dVar15;
          pfVar7 = pfVar7 + (param_3 + 1);
        } while (iVar11 < iVar14);
      }
      param_1 = param_1 + -4;
      local_res18 = local_res18 + param_3;
      lVar6 = lVar6 + -4;
      local_res8 = local_res8 + 1;
      iVar14 = iVar14 + -1;
      local_res20 = local_res20 - 1;
    } while (local_res20 != 0);
  }
  return;
}

// silk_corrVector_FLP @ 14f893c9c

void silk_corrVector_FLP(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,
                        longlong param_5)

{
  longlong lVar1;
  double dVar2;
  
  if (0 < param_4) {
    lVar1 = 0;
    param_1 = param_1 + (longlong)(param_4 + -1) * 4;
    do {
      dVar2 = (double)silk_inner_product_FLP(param_1,param_2,param_3);
      param_1 = param_1 + -4;
      *(float *)(param_5 + lVar1 * 4) = (float)dVar2;
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_4);
  }
  return;
}

