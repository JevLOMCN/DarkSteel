// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_residual_energy_FLP @ 14f88e724

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_residual_energy_FLP
               (float *param_1,longlong param_2,longlong param_3,float *param_4,int param_5,
               int param_6,int param_7)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  double dVar4;
  undefined1 auStack_398 [32];
  int local_378;
  longlong local_368;
  undefined1 local_358 [768];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  local_378 = param_7;
  puVar1 = local_358 + (longlong)param_7 * 4;
  iVar3 = (param_7 + param_5) * 2;
  local_368 = param_3;
  silk_LPC_analysis_filter_FLP(local_358,param_3,param_2,iVar3);
  fVar2 = *param_4;
  dVar4 = (double)silk_energy_FLP(puVar1,param_5);
  *param_1 = (float)(dVar4 * (double)(fVar2 * fVar2));
  fVar2 = param_4[1];
  dVar4 = (double)silk_energy_FLP(puVar1 + (longlong)(param_7 + param_5) * 4,param_5);
  param_1[1] = (float)(dVar4 * (double)(fVar2 * fVar2));
  if (param_6 == 4) {
    local_378 = param_7;
    silk_LPC_analysis_filter_FLP(local_358,local_368 + 0x40,(longlong)iVar3 * 4 + param_2,iVar3);
    fVar2 = param_4[2];
    dVar4 = (double)silk_energy_FLP(puVar1,param_5);
    param_1[2] = (float)(dVar4 * (double)(fVar2 * fVar2));
    fVar2 = param_4[3];
    dVar4 = (double)silk_energy_FLP(puVar1 + (longlong)(param_7 + param_5) * 4,param_5);
    param_1[3] = (float)(dVar4 * (double)(fVar2 * fVar2));
  }
  return;
}

// silk_residual_energy_covar_FLP @ 14f88e898

undefined8
silk_residual_energy_covar_FLP
          (float *param_1,float *param_2,float *param_3,undefined8 param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar13 = (undefined4)((ulonglong)param_4 >> 0x20);
  if ((int)param_5 < 0) {
    celt_fatal("assertion failed: D >= 0",
               "../../../third_party/opus/src/silk/float/residual_energy_FLP.c",0x32);
  }
  iVar6 = 0;
  fVar16 = (param_2[(longlong)(int)(param_5 * param_5) + -1] + *param_2) * __real_322bcc77;
  do {
    fVar14 = 0.0;
    if (0 < (int)param_5) {
      pfVar4 = param_3;
      lVar10 = (longlong)(int)param_5;
      do {
        pfVar12 = (float *)(((longlong)param_1 - (longlong)param_3) + (longlong)pfVar4);
        fVar15 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        fVar14 = fVar14 + *pfVar12 * fVar15;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    fVar14 = (float)param_4 - (fVar14 + fVar14);
    if (0 < (int)param_5) {
      iVar7 = 0;
      pfVar4 = param_1;
      uVar8 = param_5;
      iVar3 = 0;
      do {
        iVar9 = iVar3 + 1;
        fVar15 = 0.0;
        if (iVar9 < (int)param_5) {
          pfVar12 = param_2 + (int)(iVar3 + uVar8);
          uVar5 = (ulonglong)(param_5 - iVar9);
          pfVar11 = pfVar4;
          do {
            pfVar11 = pfVar11 + 1;
            fVar1 = *pfVar12;
            pfVar12 = pfVar12 + (int)param_5;
            fVar15 = fVar15 + fVar1 * *pfVar11;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        fVar1 = *pfVar4;
        lVar10 = (longlong)iVar7;
        uVar8 = uVar8 + param_5;
        iVar7 = iVar7 + param_5 + 1;
        fVar2 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        fVar14 = fVar14 + (fVar1 * param_2[lVar10] + fVar15 + fVar15) * fVar2;
        iVar3 = iVar9;
      } while (iVar9 < (int)param_5);
    }
    if (__real_00000000 < fVar14) break;
    if (0 < (int)param_5) {
      pfVar4 = param_2;
      uVar5 = (ulonglong)param_5;
      do {
        *pfVar4 = fVar16 + *pfVar4;
        pfVar4 = pfVar4 + (int)(param_5 + 1);
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    fVar16 = fVar16 + fVar16;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  if (iVar6 == 10) {
    uVar13 = 0;
    fVar14 = __real_3f800000;
  }
  return CONCAT44(uVar13,fVar14);
}

