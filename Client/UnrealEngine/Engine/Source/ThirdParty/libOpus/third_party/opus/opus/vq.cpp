// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 9

// alg_quant @ 14f883494

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void alg_quant(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
              undefined8 param_6,undefined4 param_7,int param_8,undefined4 param_9)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined8 auStack_70 [5];
  int aiStack_48 [4];
  ulonglong local_38 [4];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)local_38;
  if (param_3 < 1) {
    auStack_70[0] = 0x14f8834ea;
    celt_fatal("assertion failed: K>0\nalg_quant() needs at least one pulse",
               "../../../third_party/opus/src/celt/vq.c",0x152);
  }
  if (param_2 < 2) {
    auStack_70[0] = 0x14f883508;
    celt_fatal("assertion failed: N>1\nalg_quant() needs at least two dimensions",
               "../../../third_party/opus/src/celt/vq.c",0x153);
  }
  uVar4 = (longlong)(param_2 + 3) * 4;
  uVar3 = uVar4 + 0xf;
  if (uVar3 <= uVar4) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x14f88352e;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  *(undefined4 *)((longlong)aiStack_48 + lVar2 + 8) = param_4;
  lVar1 = (longlong)local_38 + lVar2;
  *(int *)((longlong)aiStack_48 + lVar2) = param_3;
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x14f883553;
  exp_rotation(param_1,param_2,1,param_5);
  *(undefined4 *)((longlong)aiStack_48 + lVar2) = param_9;
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x14f88356e;
  uVar5 = op_pvq_search_sse2(param_1,lVar1,param_3,param_2);
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x14f883582;
  encode_pulses(lVar1,param_2,param_3,param_6);
  if (param_8 != 0) {
    *(undefined4 *)((longlong)aiStack_48 + lVar2) = param_7;
    *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x14f8835a4;
    FUN_14f883a14(lVar1,param_1,param_2,uVar5);
    *(undefined4 *)((longlong)aiStack_48 + lVar2 + 8) = param_4;
    *(int *)((longlong)aiStack_48 + lVar2) = param_3;
    *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x14f8835bf;
    exp_rotation(param_1,param_2,0xffffffff,param_5);
  }
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x14f8835cd;
  FUN_14f883990(lVar1,param_2,param_5);
  *(undefined8 *)((longlong)auStack_70 + lVar2) = 0x14f8835d9;
  return;
}

// alg_unquant @ 14f8835fc

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void alg_unquant(undefined8 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined8 param_6,undefined4 param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined8 auStack_60 [5];
  int aiStack_38 [4];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)local_28;
  if (param_3 < 1) {
    auStack_60[0] = 0x14f88364f;
    celt_fatal("assertion failed: K>0\nalg_unquant() needs at least one pulse",
               "../../../third_party/opus/src/celt/vq.c",0x173);
  }
  if (param_2 < 2) {
    auStack_60[0] = 0x14f88366d;
    celt_fatal("assertion failed: N>1\nalg_unquant() needs at least two dimensions",
               "../../../third_party/opus/src/celt/vq.c",0x174);
  }
  uVar3 = (longlong)param_2 * 4 + 0xf;
  if (uVar3 <= (ulonglong)((longlong)param_2 * 4)) {
    uVar3 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x14f883693;
  lVar2 = -(uVar3 & 0xfffffffffffffff0);
  lVar1 = (longlong)local_28 + lVar2;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f8836ac;
  uVar4 = decode_pulses(lVar1,param_2,param_3,param_6);
  *(undefined4 *)((longlong)aiStack_38 + lVar2) = param_7;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f8836c8;
  FUN_14f883a14(lVar1,param_1,param_2,uVar4);
  *(undefined4 *)((longlong)aiStack_38 + lVar2 + 8) = param_4;
  *(int *)((longlong)aiStack_38 + lVar2) = param_3;
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f8836e3;
  exp_rotation(param_1,param_2,0xffffffff,param_5);
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f8836f1;
  FUN_14f883990(lVar1,param_2,param_5);
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f8836fd;
  return;
}

// exp_rotation @ 14f88371c

void exp_rotation(longlong param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar4 = 0;
  uVar5 = (ulonglong)param_4;
  if ((param_5 * 2 < (int)param_2) && (param_6 != 0)) {
    fVar9 = (float)(int)param_2 /
            (float)(int)(*(int *)("assertion failed: overlap>=0" + (longlong)param_6 * 4 + 0x1c) *
                         param_5 + param_2);
    fVar9 = fVar9 * fVar9 * __real_3f000000;
    dVar7 = cos((double)(fVar9 * __real_3fc90fdb));
    fVar10 = (float)dVar7;
    dVar7 = cos((double)((__real_3f800000 - fVar9) * __real_3fc90fdb));
    uVar2 = __xmm_80000000800000008000000080000000;
    fVar9 = (float)dVar7;
    if ((int)(param_4 * 8) <= (int)param_2) {
      iVar3 = param_4 * 2;
      iVar4 = 1;
      while (((int)param_4 >> 2) + iVar3 < (int)param_2) {
        iVar3 = (iVar4 + 2) * (iVar4 + 1) * param_4;
        iVar4 = iVar4 + 1;
      }
    }
    uVar1 = (ulonglong)param_2 / (ulonglong)param_4;
    if (0 < (int)param_4) {
      do {
        if (param_3 < 0) {
          if (iVar4 != 0) {
            FUN_14f8838d4(param_1,uVar1,iVar4,fVar9,fVar10);
          }
          fVar8 = fVar10;
          fVar6 = fVar9;
          iVar3 = 1;
LAB_14f88388f:
          FUN_14f8838d4(param_1,uVar1,iVar3,fVar8,fVar6);
        }
        else {
          FUN_14f8838d4(param_1,uVar1,1,fVar10,(uint)fVar9 ^ uVar2);
          if (iVar4 != 0) {
            fVar6 = (float)((uint)fVar10 ^ uVar2);
            fVar8 = fVar9;
            iVar3 = iVar4;
            goto LAB_14f88388f;
          }
        }
        param_1 = param_1 + (longlong)(int)uVar1 * 4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
  }
  return;
}

// FUN_14f8838d4 @ 14f8838d4

void FUN_14f8838d4(float *param_1,int param_2,int param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  
  fVar6 = (float)((uint)param_5 ^ __xmm_80000000800000008000000080000000);
  if (0 < param_2 - param_3) {
    uVar5 = (ulonglong)(uint)(param_2 - param_3);
    pfVar4 = param_1;
    do {
      fVar1 = *pfVar4;
      fVar2 = pfVar4[param_3];
      pfVar4[param_3] = fVar2 * param_4 + fVar1 * param_5;
      *pfVar4 = fVar1 * param_4 + fVar2 * fVar6;
      pfVar4 = pfVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar3 = param_2 + param_3 * -2 + -1;
  param_1 = param_1 + iVar3;
  if (-1 < iVar3) {
    do {
      fVar1 = *param_1;
      fVar2 = param_1[param_3];
      param_1[param_3] = fVar2 * param_4 + fVar1 * param_5;
      *param_1 = fVar1 * param_4 + fVar2 * fVar6;
      param_1 = param_1 + -1;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  return;
}

// FUN_14f883990 @ 14f883990

uint FUN_14f883990(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if ((int)param_3 < 2) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    iVar3 = 0;
    iVar6 = 0;
    do {
      uVar5 = 0;
      lVar2 = 0;
      puVar4 = (uint *)(param_1 + (longlong)iVar3 * 4);
      do {
        uVar5 = uVar5 | *puVar4;
        lVar2 = lVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar2 < (int)(param_2 / param_3));
      iVar7 = iVar6 + 1;
      iVar3 = iVar3 + param_2 / param_3;
      uVar1 = uVar1 | (uint)(uVar5 != 0) << ((byte)iVar6 & 0x1f);
      iVar6 = iVar7;
    } while (iVar7 < (int)param_3);
  }
  return uVar1;
}

// FUN_14f883a14 @ 14f883a14

void FUN_14f883a14(longlong param_1,float *param_2,int param_3,float param_4,float param_5)

{
  longlong lVar1;
  double dVar2;
  float fVar3;
  
  dVar2 = sqrt((double)param_4);
  lVar1 = 0;
  param_1 = param_1 - (longlong)param_2;
  fVar3 = __real_3f800000 / (float)dVar2;
  do {
    lVar1 = lVar1 + 1;
    *param_2 = (float)*(int *)(param_1 + (longlong)param_2) * fVar3 * param_5;
    param_2 = param_2 + 1;
  } while (lVar1 < param_3);
  return;
}

// op_pvq_search_c @ 14f883a88

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float op_pvq_search_c(float *param_1,uint *param_2,uint param_3,int param_4)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 auStack_b0 [5];
  float local_88 [4];
  uint *local_78;
  float *local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)local_88;
  lVar16 = (longlong)param_4;
  local_70 = param_1;
  local_78 = param_2;
  uVar9 = lVar16 * 4;
  uVar6 = uVar9 + 0xf;
  if (uVar6 <= uVar9) {
    uVar6 = 0xffffffffffffff0;
  }
  auStack_b0[0] = 0x14f883b0b;
  lVar2 = -(uVar6 & 0xfffffffffffffff0);
  uVar6 = uVar9 + 0xf;
  pfVar1 = (float *)((longlong)local_88 + lVar2);
  if (uVar6 <= uVar9) {
    uVar6 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_b0 + lVar2) = 0x14f883b28;
  lVar3 = -(uVar6 & 0xfffffffffffffff0);
  lVar7 = 0;
  fVar19 = 0.0;
  lVar8 = (longlong)local_88 + lVar3 + lVar2;
  local_68 = lVar8;
  pfVar10 = param_1;
  lVar15 = lVar7;
  do {
    fVar17 = 0.0;
    lVar15 = lVar15 + 1;
    *(uint *)((lVar8 - (longlong)param_1) + (longlong)pfVar10) =
         (uint)(*pfVar10 <= 0.0 && *pfVar10 != 0.0);
    *pfVar10 = (float)(double)CONCAT44((uint)((ulonglong)(double)*pfVar10 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84((double)*pfVar10,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    *(undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)pfVar10) = 0;
    *(undefined4 *)(((longlong)pfVar1 - (longlong)param_1) + (longlong)pfVar10) = 0;
    pfVar10 = pfVar10 + 1;
  } while (lVar15 < lVar16);
  fVar20 = fVar17;
  if (param_4 >> 1 < (int)param_3) {
    do {
      fVar19 = fVar19 + param_1[lVar7];
      lVar7 = lVar7 + 1;
    } while (lVar7 < lVar16);
    if ((fVar19 <= __real_26901d7d) || (__real_42800000 <= fVar19)) {
      *param_1 = 1.0;
      lVar8 = 1;
      do {
        param_1[lVar8] = 0.0;
        lVar8 = lVar8 + 1;
        fVar19 = __real_3f800000;
      } while (lVar8 < lVar16);
    }
    local_88[0] = 0.0;
    iVar14 = 0;
    lVar15 = (longlong)param_1 - (longlong)pfVar1;
    fVar19 = __real_3f800000 / fVar19;
    lVar16 = (longlong)param_2 - (longlong)pfVar1;
    fVar22 = (float)(int)param_3 + __real_3f4ccccd;
    pfVar10 = pfVar1;
    do {
      fVar21 = *(float *)(lVar15 + (longlong)pfVar10);
      *(undefined8 *)((longlong)auStack_b0 + lVar3 + lVar2) = 0x14f883c2b;
      dVar18 = floor((double)(fVar22 * fVar19 * fVar21));
      iVar14 = iVar14 + 1;
      *(int *)(lVar16 + (longlong)pfVar10) = (int)dVar18;
      fVar21 = (float)(int)dVar18;
      *pfVar10 = fVar21;
      fVar17 = fVar21 * fVar21 + fVar17;
      fVar20 = fVar21 * *(float *)(lVar15 + (longlong)pfVar10) + fVar20;
      *pfVar10 = fVar21 + fVar21;
      param_3 = param_3 - *(int *)(lVar16 + (longlong)pfVar10);
      pfVar10 = pfVar10 + 1;
      param_2 = local_78;
      lVar8 = local_68;
      param_1 = local_70;
    } while (iVar14 < param_4);
  }
  uVar6 = 0;
  if (param_4 + 3 < (int)param_3) {
    fVar22 = (float)(int)param_3;
    fVar19 = *pfVar1;
    *param_2 = *param_2 + param_3;
    param_3 = 0;
    fVar17 = fVar22 * fVar22 + fVar17 + fVar22 * fVar19;
  }
  if (0 < (int)param_3) {
    uVar9 = (ulonglong)param_3;
    do {
      fVar17 = fVar17 + __real_3f800000;
      uVar12 = 1;
      iVar14 = 1;
      fVar22 = fVar17 + *pfVar1;
      fVar19 = (fVar20 + *param_1) * (fVar20 + *param_1);
      uVar11 = uVar6;
      do {
        fVar21 = (fVar20 + param_1[uVar12]) * (fVar20 + param_1[uVar12]);
        uVar4 = uVar12;
        fVar5 = fVar17 + pfVar1[uVar12];
        if (fVar22 * fVar21 <= fVar19 * (fVar17 + pfVar1[uVar12])) {
          uVar4 = uVar11;
          fVar21 = fVar19;
          fVar5 = fVar22;
        }
        fVar22 = fVar5;
        fVar19 = fVar21;
        uVar11 = uVar4;
        iVar14 = iVar14 + 1;
        uVar12 = uVar12 + 1;
      } while (iVar14 < param_4);
      fVar20 = fVar20 + param_1[uVar11];
      fVar17 = pfVar1[uVar11] + fVar17;
      pfVar1[uVar11] = pfVar1[uVar11] + __real_40000000;
      param_2[uVar11] = param_2[uVar11] + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  lVar8 = lVar8 - (longlong)param_2;
  do {
    uVar13 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar13;
    *param_2 = (-*(int *)(lVar8 + (longlong)param_2) ^ *param_2) +
               *(int *)(lVar8 + (longlong)param_2);
    param_2 = param_2 + 1;
  } while ((int)uVar13 < param_4);
  *(undefined8 *)((longlong)auStack_b0 + lVar3 + lVar2) = 0x14f883d8e;
  return fVar17;
}

// renormalise_vector @ 14f883dc4

void renormalise_vector(float *param_1,uint param_2,float param_3)

{
  ulonglong uVar1;
  float fVar2;
  double dVar3;
  
  uVar1 = (ulonglong)param_2;
  fVar2 = (float)celt_inner_prod_sse(param_1,param_1,param_2);
  dVar3 = sqrt((double)(fVar2 + __real_26901d7d));
  fVar2 = __real_3f800000 / (float)dVar3;
  if (0 < (int)param_2) {
    do {
      *param_1 = fVar2 * param_3 * *param_1;
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

// stereo_itheta @ 14f883e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int stereo_itheta(longlong param_1,float *param_2,int param_3,uint param_4)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = __real_26901d7d;
  if (param_3 == 0) {
    fVar3 = (float)celt_inner_prod_sse(param_1,param_1,param_4);
    fVar3 = fVar3 + fVar6;
    fVar7 = (float)celt_inner_prod_sse(param_2,param_2,param_4);
    fVar7 = fVar7 + fVar6;
  }
  else {
    fVar7 = __real_26901d7d;
    fVar3 = __real_26901d7d;
    if (0 < (int)param_4) {
      param_1 = param_1 - (longlong)param_2;
      uVar1 = (ulonglong)param_4;
      do {
        fVar6 = *(float *)(param_1 + (longlong)param_2);
        fVar2 = fVar6 + *param_2;
        fVar6 = fVar6 - *param_2;
        param_2 = param_2 + 1;
        fVar3 = fVar2 * fVar2 + fVar3;
        fVar7 = fVar6 * fVar6 + fVar7;
        uVar1 = uVar1 - 1;
      } while (uVar1 != 0);
    }
  }
  dVar5 = sqrt((double)fVar3);
  fVar2 = (float)dVar5;
  dVar5 = sqrt((double)fVar7);
  fVar7 = (float)dVar5;
  fVar6 = fVar2 * fVar2;
  fVar3 = fVar7 * fVar7;
  if (__real_219392ef <= fVar3 + fVar6) {
    if (fVar3 <= fVar6) {
      fVar8 = __real_3fc90fdb;
      if (fVar7 < 0.0) {
        fVar8 = __real_bfc90fdb;
      }
      fVar4 = __real_bfc90fdb;
      if (0.0 <= fVar7 * fVar2) {
        fVar4 = __real_3fc90fdb;
      }
      fVar4 = (((fVar3 * ___real_3edcf805 + fVar6) * fVar7 * fVar2) /
               ((fVar3 * ___real_3f2db121 + fVar6) * (fVar3 * ___real_3db00965 + fVar6)) + fVar8) -
              fVar4;
    }
    else {
      fVar4 = __real_3fc90fdb;
      if (fVar7 < 0.0) {
        fVar4 = __real_bfc90fdb;
      }
      fVar4 = fVar4 - ((fVar6 * ___real_3edcf805 + fVar3) * fVar7 * fVar2) /
                      ((fVar6 * ___real_3f2db121 + fVar3) * (fVar6 * ___real_3db00965 + fVar3));
    }
  }
  else {
    fVar4 = 0.0;
  }
  dVar5 = floor((double)(fVar4 * ___real_4622f987 + __real_3f000000));
  return (int)dVar5;
}

