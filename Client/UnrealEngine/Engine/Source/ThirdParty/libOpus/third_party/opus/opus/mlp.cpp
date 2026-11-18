// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 4

// compute_dense @ 14f882714

void compute_dense(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  
  lVar2 = param_1[2];
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  lVar5 = (longlong)iVar1;
  lVar4 = 0;
  lVar3 = lVar4;
  if (0 < iVar1) {
    do {
      *(float *)(param_2 + lVar3 * 4) = (float)(int)*(char *)(*param_1 + lVar3);
      lVar3 = lVar3 + 1;
    } while (lVar3 < lVar5);
  }
  FUN_14f882af4(param_2,param_1[1],lVar5,(int)lVar2,iVar1,param_3);
  lVar2 = lVar4;
  if (0 < lVar5) {
    do {
      *(float *)(param_2 + lVar2 * 4) = *(float *)(param_2 + lVar2 * 4) * __real_3c000000;
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar5);
    if (0 < lVar5) {
      if ((int)param_1[3] == 0) {
        do {
          uVar7 = FUN_14f882b74();
          *(undefined4 *)(param_2 + lVar4 * 4) = uVar7;
          lVar4 = lVar4 + 1;
        } while (lVar4 < lVar5);
      }
      else {
        do {
          fVar6 = (float)FUN_14f882b74(*(float *)(param_2 + lVar4 * 4) * __real_3f000000);
          *(float *)(param_2 + lVar4 * 4) = fVar6 * __real_3f000000 + __real_3f000000;
          lVar4 = lVar4 + 1;
        } while (lVar4 < lVar5);
      }
    }
  }
  return;
}

// compute_gru @ 14f882808

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void compute_gru(longlong *param_1,void *param_2,undefined8 param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_2b8 [32];
  int local_298;
  float *local_290;
  undefined4 local_288;
  undefined8 local_280;
  longlong local_278;
  longlong local_270;
  float local_268 [32];
  float local_1e8 [32];
  float local_168 [32];
  float local_e8 [32];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  iVar3 = *(int *)((longlong)param_1 + 0x1c);
  lVar9 = (longlong)iVar3;
  lVar7 = 0;
  local_288 = (undefined4)param_1[3];
  iVar4 = iVar3 * 3;
  if (0 < iVar3) {
    lVar8 = *param_1;
    lVar6 = lVar7;
    do {
      local_1e8[lVar6] = (float)(int)*(char *)(lVar8 + lVar6);
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar9);
  }
  local_278 = param_1[1];
  local_298 = iVar4;
  local_290 = (float *)param_3;
  local_280 = param_3;
  FUN_14f882af4(local_1e8,local_278,iVar3);
  local_270 = param_1[2];
  local_298 = iVar4;
  local_290 = param_2;
  FUN_14f882af4(local_1e8,local_270,iVar3,iVar3);
  fVar5 = __real_3c000000;
  fVar2 = __real_3f000000;
  lVar8 = lVar7;
  if (0 < iVar3) {
    do {
      fVar10 = (float)FUN_14f882b74(local_1e8[lVar8] * fVar5 * fVar2);
      local_1e8[lVar8] = fVar10 * fVar2 + fVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar9);
    lVar8 = *param_1;
    lVar6 = lVar7;
    do {
      local_268[lVar6] = (float)(int)*(char *)(lVar8 + lVar9 + lVar6);
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar9);
  }
  local_290 = (float *)local_280;
  local_298 = iVar4;
  FUN_14f882af4(local_268,param_1[1] + lVar9,iVar3,(int)param_1[3]);
  local_298 = iVar4;
  local_290 = param_2;
  FUN_14f882af4(local_268,param_1[2] + lVar9,iVar3,iVar3);
  lVar8 = lVar7;
  if (0 < iVar3) {
    do {
      fVar10 = (float)FUN_14f882b74(local_268[lVar8] * fVar5 * fVar2);
      local_268[lVar8] = fVar10 * fVar2 + fVar2;
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar9);
    lVar8 = *param_1;
    lVar6 = lVar7;
    do {
      local_168[lVar6] = (float)(int)*(char *)(lVar8 + lVar9 * 2 + lVar6);
      lVar6 = lVar6 + 1;
    } while (lVar6 < lVar9);
    lVar8 = lVar7;
    do {
      local_e8[lVar8] =
           *(float *)(((longlong)param_2 - (longlong)local_268) + (longlong)(local_268 + lVar8)) *
           local_268[lVar8];
      lVar8 = lVar8 + 1;
    } while (lVar8 < lVar9);
  }
  local_290 = (float *)local_280;
  local_298 = iVar4;
  FUN_14f882af4(local_168,local_278 + iVar3 * 2,iVar3,local_288);
  local_290 = local_e8;
  local_298 = iVar4;
  FUN_14f882af4(local_168,local_270 + iVar3 * 2,iVar3,iVar3);
  if (0 < iVar3) {
    do {
      pfVar1 = (float *)((longlong)param_2 + lVar7 * 4);
      fVar2 = *(float *)(((longlong)local_1e8 - (longlong)param_2) + (longlong)pfVar1);
      fVar10 = (float)FUN_14f882b74(local_168[lVar7] * fVar5);
      local_168[lVar7] = fVar10 * (__real_3f800000 - fVar2) + fVar2 * *pfVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar9);
    memcpy(param_2,local_168,lVar9 << 2);
  }
  return;
}

// FUN_14f882af4 @ 14f882af4

void FUN_14f882af4(float *param_1,longlong param_2,int param_3,uint param_4,int param_5,
                  float *param_6)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  
  if (0 < param_3) {
    lVar6 = (longlong)param_3;
    iVar7 = 0;
    do {
      if (0 < (int)param_4) {
        fVar8 = *param_1;
        pcVar3 = (char *)(iVar7 + param_2);
        uVar4 = (ulonglong)param_4;
        pfVar5 = param_6;
        do {
          cVar2 = *pcVar3;
          pcVar3 = pcVar3 + param_5;
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar8 = fVar8 + (float)(int)cVar2 * fVar1;
          *param_1 = fVar8;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      iVar7 = iVar7 + 1;
      param_1 = param_1 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// FUN_14f882b74 @ 14f882b74

float FUN_14f882b74(float param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  fVar2 = __real_3f800000;
  fVar4 = __real_3f800000;
  if ((param_1 < __real_41000000) && (fVar4 = __real_bf800000, __real_c1000000 < param_1)) {
    if (NAN(param_1)) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = __real_3f800000;
      if (param_1 < 0.0) {
        param_1 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
        fVar4 = __real_bf800000;
      }
      dVar3 = floor((double)(param_1 * __real_41c80000 + __real_3f000000));
      fVar1 = *(float *)(&DAT_153514ea0 + (longlong)(int)dVar3 * 4);
      param_1 = param_1 - (float)(int)dVar3 * __real_3d23d70a;
      fVar4 = ((fVar2 - fVar1 * fVar1) * param_1 * (fVar2 - fVar1 * param_1) + fVar1) * fVar4;
    }
  }
  return fVar4;
}

