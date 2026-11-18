// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 5

// silk_A2NLSF_FLP @ 14f8883b4

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_A2NLSF_FLP(float param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  float local_68;
  int local_58 [16];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar1 = 0;
  if (0 < param_3) {
    do {
      param_1 = *(float *)(param_2 + lVar1 * 4) * __real_47800000;
      local_58[lVar1] = (int)ROUND(param_1);
      lVar1 = lVar1 + 1;
      local_68 = param_1;
    } while (lVar1 < param_3);
  }
  silk_A2NLSF(param_1,local_58);
  return;
}

// silk_NLSF2A_FLP @ 14f888424

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_NLSF2A_FLP(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  short local_48 [16];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_68;
  silk_NLSF2A(local_48,param_2,param_3);
  lVar1 = 0;
  if (0 < param_3) {
    do {
      *(float *)(param_1 + lVar1 * 4) = (float)(int)local_48[lVar1] * __real_39800000;
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_3);
  }
  return;
}

// silk_NSQ_wrapper_FLP @ 14f888490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void silk_NSQ_wrapper_FLP
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
               undefined8 param_5,longlong param_6)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  longlong lVar11;
  uint auStack_6a4 [4];
  int aiStack_694 [4];
  int aiStack_684 [105];
  undefined8 uStack_4e0;
  undefined1 auStack_4d8 [32];
  undefined8 local_4b8;
  undefined2 *local_4b0;
  undefined2 *local_4a8;
  undefined2 *local_4a0;
  undefined1 *local_498;
  undefined1 *local_490;
  undefined1 *local_488;
  int *local_480;
  longlong local_478;
  int local_470;
  int local_468;
  float local_458;
  float local_450;
  undefined8 local_448;
  int local_440 [4];
  undefined1 local_430 [16];
  undefined1 local_420 [16];
  undefined1 local_410 [16];
  undefined2 local_400 [20];
  undefined2 local_3d8 [32];
  undefined2 local_398 [96];
  undefined2 local_2d8 [320];
  ulonglong local_58;
  
  local_4b0 = local_3d8;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  iVar3 = *(int *)(param_1 + 0x11e4);
  lVar8 = (longlong)iVar3;
  local_448 = param_5;
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x121c);
    pfVar6 = (float *)(param_2 + 0xf4);
    puVar5 = local_398;
    lVar9 = lVar8;
    do {
      pfVar7 = pfVar6;
      puVar10 = puVar5;
      lVar11 = (longlong)iVar4;
      if (0 < (longlong)iVar4) {
        do {
          *puVar10 = (short)(int)ROUND(*pfVar7 * ___real_46000000);
          lVar11 = lVar11 + -1;
          pfVar7 = pfVar7 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar11 != 0);
      }
      puVar5 = puVar5 + 0x18;
      pfVar6 = pfVar6 + 0x18;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    lVar9 = lVar8;
    pfVar6 = (float *)(param_2 + 0x274);
    do {
      local_450 = pfVar6[4] * __real_46800000;
      fVar1 = pfVar6[8];
      fVar2 = pfVar6[0xc];
      *(uint *)((longlong)pfVar6 + ((longlong)auStack_6a4 - param_2)) =
           (int)ROUND(local_450) << 0x10 | (int)ROUND(*pfVar6 * __real_46800000) & 0xffffU;
      *(int *)((longlong)pfVar6 + ((longlong)aiStack_694 - param_2)) =
           (int)ROUND(fVar1 * __real_46800000);
      *(int *)((longlong)pfVar6 + ((longlong)aiStack_684 - param_2)) =
           (int)ROUND(fVar2 * __real_46800000);
      lVar9 = lVar9 + -1;
      pfVar6 = pfVar6 + 1;
    } while (lVar9 != 0);
  }
  local_458 = *(float *)(param_2 + 0x2b4) * __real_44800000;
  local_470 = (int)ROUND(local_458);
  if (0 < iVar3 * 5) {
    lVar9 = 0;
    pfVar6 = (float *)(param_2 + 0x90);
    do {
      local_458 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      local_458 = local_458 * __real_46800000;
      local_400[lVar9] = (short)(int)ROUND(local_458);
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar3 * 5);
  }
  iVar3 = *(int *)(param_1 + 0x1220);
  pfVar6 = (float *)(param_2 + 0x10);
  lVar9 = 2;
  puVar5 = local_4b0;
  do {
    pfVar7 = pfVar6;
    puVar10 = puVar5;
    lVar11 = (longlong)iVar3;
    if (0 < (longlong)iVar3) {
      do {
        local_458 = *pfVar7 * __real_45800000;
        *puVar10 = (short)(int)ROUND(local_458);
        lVar11 = lVar11 + -1;
        pfVar7 = pfVar7 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar11 != 0);
    }
    puVar5 = puVar5 + 0x10;
    pfVar6 = pfVar6 + 0x10;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  if (0 < lVar8) {
    lVar9 = 0;
    do {
      local_458 = *(float *)(param_2 + lVar9 * 4) * __real_47800000;
      local_440[lVar9] = (int)ROUND(local_458);
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar8);
  }
  if (*(char *)(param_3 + 0x1d) == '\x02') {
    local_468 = (int)(short)(&silk_LTPScales_table_Q14)[*(char *)(param_3 + 0x21)];
  }
  else {
    local_468 = 0;
  }
  iVar3 = *(int *)(param_1 + 0x11e8);
  if (0 < (longlong)iVar3) {
    lVar8 = 0;
    do {
      local_458 = *(float *)(param_6 + lVar8 * 4);
      local_2d8[lVar8] = (short)(int)ROUND(local_458);
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar3);
  }
  if ((*(int *)(param_1 + 0x1214) < 2) && (*(int *)(param_1 + 0x1240) < 1)) {
    local_478 = param_2 + 0xe4;
    local_480 = local_440;
    local_488 = local_430;
    local_490 = local_420;
    local_498 = local_410;
    local_4a0 = local_398;
    local_4a8 = local_400;
    local_4b8 = local_448;
    uStack_4e0 = 0x14f88878a;
    silk_NSQ_c(param_1,param_4,param_3,local_2d8);
  }
  else {
    local_478 = param_2 + 0xe4;
    local_480 = local_440;
    local_488 = local_430;
    local_490 = local_420;
    local_498 = local_410;
    local_4a0 = local_398;
    local_4a8 = local_400;
    local_4b8 = local_448;
    uStack_4e0 = 0x14f8887fe;
    silk_NSQ_del_dec_c(param_1,param_4,param_3,local_2d8);
  }
  return;
}

// silk_process_NLSFs_FLP @ 14f888828

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_process_NLSFs_FLP(longlong param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  short asStack_88 [16];
  undefined1 local_68 [64];
  ulonglong local_28;
  
  psVar4 = asStack_88;
  local_28 = __security_cookie.value ^ (ulonglong)asStack_88;
  silk_process_NLSFs(param_1,local_68);
  iVar1 = *(int *)(param_1 + 0x1220);
  lVar6 = 2;
  do {
    psVar4 = psVar4 + 0x10;
    iVar5 = 0;
    pfVar2 = param_2;
    psVar3 = psVar4;
    if (0 < iVar1) {
      do {
        iVar5 = iVar5 + 1;
        *pfVar2 = (float)(int)*psVar3 * __real_39800000;
        iVar1 = *(int *)(param_1 + 0x1220);
        pfVar2 = pfVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (iVar5 < iVar1);
    }
    param_2 = param_2 + 0x10;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

// silk_quant_LTP_gains_FLP @ 14f8888c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_quant_LTP_gains_FLP
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               float *param_5,longlong param_6,longlong param_7,undefined4 param_8,int param_9,
               undefined4 param_10)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_2a8 [32];
  float *local_288;
  int *local_280;
  int *local_278;
  undefined4 local_270;
  int local_268;
  undefined4 local_260;
  float local_258 [4];
  int local_248 [20];
  int local_1f8 [100];
  short local_68 [20];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  lVar2 = 0;
  lVar1 = lVar2;
  if (0 < param_9 * 0x19) {
    do {
      local_258[0] = *(float *)(param_6 + lVar1 * 4) * __real_48000000;
      local_1f8[lVar1] = (int)ROUND(local_258[0]);
      lVar1 = lVar1 + 1;
    } while (lVar1 < param_9 * 0x19);
  }
  lVar3 = (longlong)(param_9 * 5);
  lVar1 = lVar2;
  if (0 < param_9 * 5) {
    do {
      local_258[0] = *(float *)(param_7 + lVar1 * 4) * __real_48000000;
      local_248[lVar1] = (int)ROUND(local_258[0]);
      lVar1 = lVar1 + 1;
    } while (lVar1 < lVar3);
  }
  local_260 = param_10;
  local_268 = param_9;
  local_270 = param_8;
  local_278 = local_248;
  local_280 = local_1f8;
  local_288 = local_258;
  silk_quant_LTP_gains(local_68,param_2,param_3,param_4);
  if (0 < lVar3) {
    do {
      *(float *)(param_1 + lVar2 * 4) = (float)(int)local_68[lVar2] * __real_38800000;
      lVar2 = lVar2 + 1;
    } while (lVar2 < lVar3);
  }
  *param_5 = (float)(int)local_258[0] * __real_3c000000;
  return;
}

