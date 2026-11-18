// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 8

// amp2Log2 @ 14f87d46c

void amp2Log2(longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
             int param_6)

{
  float *pfVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  uVar6 = (ulonglong)(int)param_2;
  iVar8 = 0;
  uVar7 = uVar6;
  do {
    iVar9 = 0;
    lVar5 = 0;
    if (0 < (longlong)uVar6) {
      do {
        lVar4 = (longlong)(*(int *)(param_1 + 8) * iVar8 + iVar9);
        dVar10 = log((double)*(float *)(param_4 + lVar4 * 4));
        iVar9 = iVar9 + 1;
        pfVar1 = (float *)(&eMeans + lVar5);
        lVar5 = lVar5 + 1;
        *(float *)(param_5 + lVar4 * 4) = (float)(dVar10 * __real_3ff71547652b82fe) - *pfVar1;
      } while (lVar5 < (longlong)uVar6);
      uVar7 = (ulonglong)param_2;
    }
    uVar2 = (uint)uVar7;
    uVar3 = uVar7 & 0xffffffff;
    while ((int)uVar2 < param_3) {
      iVar9 = (int)uVar3;
      uVar2 = iVar9 + 1;
      uVar3 = (ulonglong)uVar2;
      *(undefined4 *)(param_5 + (longlong)(*(int *)(param_1 + 8) * iVar8 + iVar9) * 4) = 0xc1600000;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < param_6);
  return;
}

// quant_coarse_energy @ 14f87d55c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void quant_coarse_energy(longlong param_1,int param_2,int param_3,int param_4,longlong param_5,
                        void *param_6,uint param_7,void *param_8,longlong *param_9,int param_10,
                        int param_11,int param_12,int param_13,float *param_14,int param_15,
                        int param_16,int param_17)

{
  uint uVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  int iVar26;
  ulonglong _Size;
  int iVar27;
  float *pfVar28;
  void *pvVar29;
  undefined1 *puVar30;
  size_t _Size_00;
  longlong lVar31;
  float fVar32;
  float fVar33;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [32];
  undefined8 uStack_178;
  uint auStack_170 [4];
  longlong alStack_160 [3];
  int local_148 [6];
  float local_130 [2];
  int local_128 [4];
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  void *local_100;
  void *local_f8;
  ulonglong local_f0;
  void *local_e8;
  void *local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)&local_118;
  lVar31 = (longlong)param_2;
  iVar27 = 0;
  local_108 = 0;
  if ((param_13 != 0) ||
     (((param_15 == 0 && (iVar26 = (param_3 - param_2) * param_10, (float)(iVar26 * 2) < *param_14))
      && (iVar26 < param_12)))) {
    local_118 = 1;
  }
  else {
    local_118 = 0;
  }
  local_104 = (int)(((float)param_7 * *param_14 * (float)param_16) / (float)(param_10 << 9));
  fVar33 = 0.0;
  iVar26 = iVar27;
  do {
    if (lVar31 < param_4) {
      pfVar28 = (float *)((iVar26 + lVar31) * 4 + (longlong)param_6);
      lVar24 = param_4 - lVar31;
      do {
        fVar32 = *(float *)((param_5 - (longlong)param_6) + (longlong)pfVar28) - *pfVar28;
        pfVar28 = pfVar28 + 1;
        fVar33 = fVar32 * fVar32 + fVar33;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    iVar27 = iVar27 + 1;
    iVar26 = iVar26 + *(int *)(param_1 + 8);
  } while (iVar27 < param_10);
  fVar32 = __real_43480000;
  if (fVar33 <= __real_43480000) {
    fVar32 = fVar33;
  }
  iVar27 = 0x1f;
  if (*(uint *)(param_9 + 4) != 0) {
    for (; *(uint *)(param_9 + 4) >> iVar27 == 0; iVar27 = iVar27 + -1) {
    }
  }
  iVar27 = (int)param_9[3] - iVar27;
  iVar26 = iVar27 + -1;
  uVar1 = iVar27 + 2;
  local_10c = 0;
  if (uVar1 <= param_7) {
    local_10c = param_15;
  }
  iVar27 = 0;
  if (uVar1 <= param_7) {
    iVar27 = local_118;
  }
  fVar33 = __real_41800000;
  if ((10 < param_3 - param_2) && ((float)param_12 * __real_3e000000 <= __real_41800000)) {
    fVar33 = (float)param_12 * __real_3e000000;
  }
  if (param_17 != 0) {
    fVar33 = __real_40400000;
  }
  lVar24 = *param_9;
  lVar12 = param_9[1];
  lVar17 = param_9[2];
  uVar7 = *(undefined4 *)((longlong)param_9 + 0x14);
  lVar18 = param_9[3];
  uVar1 = *(uint *)((longlong)param_9 + 0x1c);
  lVar13 = param_9[4];
  lVar14 = param_9[5];
  lVar31 = param_9[6];
  _Size_00 = (longlong)(*(int *)(param_1 + 8) * param_10) * 4;
  uVar25 = _Size_00 + 0xf;
  if (uVar25 <= _Size_00) {
    uVar25 = 0xffffffffffffff0;
  }
  uStack_1a0 = 0x14f87d7a5;
  lVar4 = -(uVar25 & 0xfffffffffffffff0);
  uVar25 = _Size_00 + 0xf;
  if (uVar25 <= _Size_00) {
    uVar25 = 0xffffffffffffff0;
  }
  local_114 = param_3;
  local_110 = param_2;
  local_100 = (void *)((longlong)&local_118 + lVar4);
  *(undefined8 *)(auStack_198 + lVar4 + -8) = 0x14f87d7c9;
  lVar5 = -(uVar25 & 0xfffffffffffffff0);
  puVar30 = auStack_198 + lVar5 + lVar4;
  local_f8 = (void *)((longlong)&local_118 + lVar5 + lVar4);
  *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x14f87d7e4;
  memcpy((void *)((longlong)&local_118 + lVar4),param_6,_Size_00);
  iVar21 = local_110;
  iVar9 = local_114;
  if ((local_10c != 0) || (iVar27 != 0)) {
    *(int *)((longlong)local_128 + lVar5 + lVar4) = param_17;
    pvVar29 = local_f8;
    *(float *)((longlong)local_130 + lVar5 + lVar4) = fVar33;
    *(undefined4 *)((longlong)local_148 + lVar5 + lVar4 + 0x10) = 1;
    *(int *)((longlong)local_148 + lVar5 + lVar4 + 8) = param_11;
    *(int *)((longlong)local_148 + lVar5 + lVar4) = param_10;
    *(longlong **)((longlong)alStack_160 + lVar5 + lVar4 + 0x10) = param_9;
    *(void **)((longlong)alStack_160 + lVar5 + lVar4 + 8) = pvVar29;
    *(undefined **)((longlong)alStack_160 + lVar5 + lVar4) =
         &DAT_15351430a + (longlong)param_11 * 0x54;
    *(int *)((longlong)auStack_170 + lVar5 + lVar4 + 8) = iVar26;
    *(uint *)((longlong)auStack_170 + lVar5 + lVar4) = param_7;
    *(void **)((longlong)&uStack_178 + lVar5 + lVar4) = local_100;
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x14f87d86e;
    local_108 = FUN_14f87db04(param_1,iVar21,iVar9,param_5);
  }
  pvVar29 = local_100;
  if (iVar27 == 0) {
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x14f87d881;
    local_118 = ec_tell_frac(param_9);
    lVar19 = param_9[2];
    uVar8 = *(undefined4 *)((longlong)param_9 + 0x14);
    lVar20 = param_9[3];
    iVar9 = *(int *)((longlong)param_9 + 0x1c);
    lVar10 = *param_9;
    lVar11 = param_9[1];
    lVar15 = param_9[4];
    lVar16 = param_9[5];
    lVar3 = param_9[6];
    pvVar29 = (void *)((ulonglong)uVar1 + lVar10);
    uVar23 = iVar9 - uVar1;
    _Size = (ulonglong)uVar23;
    uVar25 = (ulonglong)uVar23 + 0xf;
    if (uVar25 <= _Size) {
      uVar25 = 0xffffffffffffff0;
    }
    local_f0 = _Size;
    local_e0 = pvVar29;
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x14f87d8eb;
    lVar6 = -(uVar25 & 0xfffffffffffffff0);
    pvVar2 = (void *)((longlong)&local_118 + lVar6 + lVar5 + lVar4);
    local_e8 = pvVar2;
    *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x14f87d905;
    memcpy(pvVar2,pvVar29,_Size);
    iVar22 = local_110;
    iVar21 = local_114;
    *param_9 = lVar24;
    param_9[1] = lVar12;
    *(int *)(param_9 + 2) = (int)lVar17;
    *(undefined4 *)((longlong)param_9 + 0x14) = uVar7;
    *(int *)(param_9 + 3) = (int)lVar18;
    *(uint *)((longlong)param_9 + 0x1c) = uVar1;
    param_9[4] = lVar13;
    param_9[5] = lVar14;
    param_9[6] = lVar31;
    *(int *)((longlong)local_128 + lVar6 + lVar5 + lVar4) = param_17;
    *(float *)((longlong)local_130 + lVar6 + lVar5 + lVar4) = fVar33;
    *(undefined4 *)((longlong)local_148 + lVar6 + lVar5 + lVar4 + 0x10) = 0;
    *(int *)((longlong)local_148 + lVar6 + lVar5 + lVar4 + 8) = param_11;
    *(int *)((longlong)local_148 + lVar6 + lVar5 + lVar4) = param_10;
    *(longlong **)((longlong)alStack_160 + lVar6 + lVar5 + lVar4 + 0x10) = param_9;
    *(void **)((longlong)alStack_160 + lVar6 + lVar5 + lVar4 + 8) = param_8;
    *(undefined **)((longlong)alStack_160 + lVar6 + lVar5 + lVar4) =
         &DAT_1535142e0 + (longlong)param_11 * 0x54;
    *(int *)((longlong)auStack_170 + lVar6 + lVar5 + lVar4 + 8) = iVar26;
    *(uint *)((longlong)auStack_170 + lVar6 + lVar5 + lVar4) = param_7;
    *(void **)((longlong)&uStack_178 + lVar6 + lVar5 + lVar4) = param_6;
    *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x14f87d993;
    iVar26 = FUN_14f87db04(param_1,iVar22,iVar21,param_5);
    puVar30 = auStack_198 + lVar6 + lVar5 + lVar4;
    if (local_10c == 0) goto LAB_14f87da5c;
    if (local_108 < iVar26) {
LAB_14f87d9bc:
      pvVar2 = local_e0;
      pvVar29 = local_e8;
      uVar25 = local_f0;
      *param_9 = lVar10;
      param_9[1] = lVar11;
      *(int *)(param_9 + 2) = (int)lVar19;
      *(undefined4 *)((longlong)param_9 + 0x14) = uVar8;
      *(int *)(param_9 + 3) = (int)lVar20;
      *(int *)((longlong)param_9 + 0x1c) = iVar9;
      param_9[4] = lVar15;
      param_9[5] = lVar16;
      param_9[6] = lVar3;
      *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x14f87d9e1;
      memcpy(pvVar2,pvVar29,uVar25);
      pvVar29 = local_100;
      iVar27 = *(int *)(param_1 + 8);
      *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x14f87d9fb;
      memcpy(param_6,pvVar29,(longlong)(iVar27 * param_10) << 2);
      pvVar29 = local_f8;
      iVar27 = *(int *)(param_1 + 8);
      *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x14f87da19;
      memcpy(param_8,pvVar29,(longlong)(iVar27 * param_10) << 2);
      iVar27 = 1;
      puVar30 = auStack_198 + lVar6 + lVar5 + lVar4;
      goto LAB_14f87da5c;
    }
    puVar30 = auStack_198 + lVar6 + lVar5 + lVar4;
    if (local_108 == iVar26) {
      *(undefined8 *)(auStack_198 + lVar6 + lVar5 + lVar4 + -8) = 0x14f87d9b0;
      iVar27 = ec_tell_frac(param_9);
      puVar30 = auStack_198 + lVar6 + lVar5 + lVar4;
      if (local_118 < iVar27 + local_104) goto LAB_14f87d9bc;
    }
  }
  else {
    iVar26 = *(int *)(param_1 + 8);
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x14f87da3e;
    memcpy(param_6,pvVar29,(longlong)(iVar26 * param_10) << 2);
    pvVar29 = local_f8;
    iVar26 = *(int *)(param_1 + 8);
    *(undefined8 *)(auStack_198 + lVar5 + lVar4 + -8) = 0x14f87da5c;
    memcpy(param_8,pvVar29,(longlong)(iVar26 * param_10) << 2);
LAB_14f87da5c:
    if (iVar27 != 0) goto LAB_14f87da80;
  }
  fVar32 = *(float *)(&DAT_153514438 + (longlong)param_11 * 4) *
           *(float *)(&DAT_153514438 + (longlong)param_11 * 4) * *param_14 + fVar32;
LAB_14f87da80:
  *param_14 = fVar32;
  *(undefined8 *)(puVar30 + -8) = 0x14f87da92;
  return;
}

// FUN_14f87db04 @ 14f87db04

int FUN_14f87db04(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                 int param_6,uint param_7,longlong param_8,longlong param_9,longlong param_10,
                 int param_11,int param_12,int param_13,float param_14,int param_15)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_b8;
  undefined4 local_b4;
  float *local_b0;
  
  iVar8 = param_13;
  lVar7 = param_10;
  iVar14 = 0;
  local_b8 = 0.0;
  local_b4 = 0;
  fVar20 = 0.0;
  if ((int)(param_7 + 3) <= param_6) {
    ec_enc_bit_logp(param_10,param_13,3);
  }
  fVar5 = __real_c1100000;
  iVar4 = param_2;
  fVar19 = __real_3e199800;
  if (iVar8 == 0) {
    fVar20 = *(float *)(&DAT_153514438 + (longlong)param_12 * 4);
    fVar19 = *(float *)(&DAT_153514448 + (longlong)param_12 * 4);
  }
  for (; iVar4 < param_3; iVar4 = iVar4 + 1) {
    param_13 = 0;
    iVar8 = (param_3 - iVar4) * param_11;
    local_b0 = &local_b8;
    do {
      lVar13 = (longlong)(param_13 * *(int *)(param_1 + 8) + iVar4);
      fVar17 = *(float *)(param_5 + lVar13 * 4);
      fVar16 = *(float *)(param_4 + lVar13 * 4);
      if (fVar17 < fVar5) {
        fVar17 = fVar5;
      }
      fVar1 = *local_b0;
      fVar18 = (fVar16 - fVar17 * fVar20) - fVar1;
      dVar15 = floor((double)(fVar18 + __real_3f000000));
      param_7 = (uint)dVar15;
      fVar2 = *(float *)(param_5 + lVar13 * 4);
      fVar3 = __real_c1e00000;
      if (__real_c1e00000 <= fVar2) {
        fVar3 = fVar2;
      }
      if ((((int)param_7 < 0) && (fVar16 < fVar3 - param_14)) &&
         (param_7 = (int)((fVar3 - param_14) - fVar16) + param_7, 0 < (int)param_7)) {
        param_7 = 0;
      }
      uVar6 = param_7;
      iVar9 = 0x1f;
      if (*(uint *)(lVar7 + 0x20) != 0) {
        for (; *(uint *)(lVar7 + 0x20) >> iVar9 == 0; iVar9 = iVar9 + -1) {
        }
      }
      iVar11 = (iVar9 - *(int *)(lVar7 + 0x18)) + 1;
      iVar9 = param_6 + iVar8 * -3 + iVar11;
      if ((iVar4 != param_2) && (iVar9 < 0x1e)) {
        if ((iVar9 < 0x18) && (1 < (int)param_7)) {
          param_7 = 1;
        }
        if ((iVar9 < 0x10) && ((int)param_7 < -1)) {
          param_7 = 0xffffffff;
        }
      }
      uVar12 = param_7;
      if (((param_15 != 0) && (1 < iVar4)) && (uVar12 = 0, (int)param_7 < 0)) {
        uVar12 = param_7;
      }
      param_7 = uVar12;
      iVar11 = iVar11 + param_6;
      if (iVar11 < 0xf) {
        if (iVar11 < 2) {
          if (iVar11 < 1) {
            param_7 = 0xffffffff;
          }
          else {
            if (0 < (int)param_7) {
              param_7 = 0;
            }
            ec_enc_bit_logp(lVar7,-param_7);
          }
        }
        else {
          uVar12 = 1;
          if ((int)param_7 < 1) {
            uVar12 = param_7;
          }
          uVar10 = (ulonglong)uVar12;
          if ((int)uVar12 < -1) {
            uVar10 = 0xffffffff;
          }
          param_7 = (uint)uVar10;
          ec_enc_icdf(lVar7,-(int)(uVar10 >> 0x1f) ^ param_7 * 2,&DAT_153514430,2);
        }
      }
      else {
        iVar9 = 0x14;
        if (iVar4 < 0x14) {
          iVar9 = iVar4;
        }
        ec_laplace_encode(lVar7,&param_7,(ulonglong)*(byte *)(iVar9 * 2 + param_8) << 7,
                          (ulonglong)*(byte *)((longlong)(iVar9 * 2) + 1 + param_8) << 6);
      }
      *(float *)(param_9 + (longlong)(param_13 * *(int *)(param_1 + 8) + iVar4) * 4) =
           fVar18 - (float)(int)param_7;
      uVar12 = (int)(uVar6 - param_7) >> 0x1f;
      iVar14 = iVar14 + ((uVar6 - param_7 ^ uVar12) - uVar12);
      fVar16 = (float)(int)param_7;
      *(float *)(param_5 + (longlong)(param_13 * *(int *)(param_1 + 8) + iVar4) * 4) =
           fVar1 + fVar17 * fVar20 + fVar16;
      param_13 = param_13 + 1;
      *local_b0 = (fVar1 + fVar16) - fVar16 * fVar19;
      local_b0 = local_b0 + 1;
    } while (param_13 < param_11);
  }
  if (param_15 != 0) {
    iVar14 = 0;
  }
  return iVar14;
}

// quant_energy_finalise @ 14f87deb4

void quant_energy_finalise
               (longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,int param_8,undefined8 param_9,int param_10)

{
  float *pfVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  int local_78;
  
  uVar4 = (ulonglong)(int)param_2;
  local_78 = 0;
  uVar6 = uVar4;
  iVar10 = param_8;
  do {
    uVar9 = uVar6 & 0xffffffff;
    if ((longlong)uVar4 < (longlong)param_3) {
      piVar7 = (int *)(param_6 + uVar4 * 4);
      uVar6 = uVar4;
      do {
        if (iVar10 < param_10) break;
        iVar8 = (int)uVar9;
        if ((*piVar7 < 8) && (*(int *)((param_7 - param_6) + (longlong)piVar7) == local_78)) {
          iVar11 = 0;
          iVar10 = param_8;
          do {
            pfVar1 = (float *)(param_5 + (longlong)(*(int *)(param_1 + 8) * iVar11 + iVar8) * 4);
            bVar2 = 0.0 < *pfVar1 || *pfVar1 == 0.0;
            ec_enc_bits(param_9,bVar2,1);
            iVar10 = iVar10 + -1;
            lVar5 = (longlong)(*(int *)(param_1 + 8) * iVar11 + iVar8);
            fVar12 = (float)(1 << (0xdU - (char)*piVar7 & 0x1f)) * ((float)bVar2 - __real_3f000000)
                     * __real_38800000;
            *(float *)(param_4 + lVar5 * 4) = fVar12 + *(float *)(param_4 + lVar5 * 4);
            iVar3 = *(int *)(param_1 + 8) * iVar11;
            iVar11 = iVar11 + 1;
            lVar5 = (longlong)(iVar3 + iVar8);
            *(float *)(param_5 + lVar5 * 4) = *(float *)(param_5 + lVar5 * 4) - fVar12;
            param_8 = iVar10;
          } while (iVar11 < param_10);
        }
        uVar6 = uVar6 + 1;
        uVar9 = (ulonglong)(iVar8 + 1);
        piVar7 = piVar7 + 1;
      } while ((longlong)uVar6 < (longlong)param_3);
      uVar6 = (ulonglong)param_2;
    }
    local_78 = local_78 + 1;
    if (1 < local_78) {
      return;
    }
  } while( true );
}

// quant_fine_energy @ 14f87e090

void quant_fine_energy(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                      longlong param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  double dVar10;
  float fVar11;
  
  uVar8 = (ulonglong)param_2;
  if (param_2 < param_3) {
    piVar6 = (int *)(param_6 + uVar8 * 4);
    do {
      iVar7 = (int)uVar8;
      if (0 < *piVar6) {
        iVar9 = 0;
        iVar2 = (int)(short)(1 << ((byte)*piVar6 & 0x1f));
        iVar1 = iVar2 + -1;
        do {
          dVar10 = floor((double)((*(float *)(param_5 +
                                             (longlong)(*(int *)(param_1 + 8) * iVar9 + iVar7) * 4)
                                  + __real_3f000000) * (float)iVar2));
          iVar3 = iVar1;
          if ((int)dVar10 <= iVar1) {
            iVar3 = (int)dVar10;
          }
          iVar5 = 0;
          if (-1 < iVar3) {
            iVar5 = iVar3;
          }
          ec_enc_bits(param_7,iVar5,*piVar6);
          lVar4 = (longlong)(*(int *)(param_1 + 8) * iVar9 + iVar7);
          fVar11 = (float)(1 << (0xeU - (char)*piVar6 & 0x1f)) * ((float)iVar5 + __real_3f000000) *
                   __real_38800000 - __real_3f000000;
          *(float *)(param_4 + lVar4 * 4) = fVar11 + *(float *)(param_4 + lVar4 * 4);
          iVar3 = *(int *)(param_1 + 8) * iVar9;
          iVar9 = iVar9 + 1;
          lVar4 = (longlong)(iVar3 + iVar7);
          *(float *)(param_5 + lVar4 * 4) = *(float *)(param_5 + lVar4 * 4) - fVar11;
        } while (iVar9 < param_8);
      }
      uVar8 = (ulonglong)(iVar7 + 1U);
      piVar6 = piVar6 + 1;
    } while ((int)(iVar7 + 1U) < param_3);
  }
  return;
}

// unquant_coarse_energy @ 14f87e208

void unquant_coarse_energy
               (longlong param_1,int param_2,int param_3,longlong param_4,int param_5,
               longlong param_6,int param_7,int param_8)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_58 [12];
  
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  lVar7 = (longlong)param_8;
  fVar13 = 0.0;
  lVar1 = (longlong)param_5 + lVar7 * 2;
  fVar12 = __real_3e199800;
  if (param_5 == 0) {
    fVar13 = *(float *)(&DAT_153514438 + lVar7 * 4);
    fVar12 = *(float *)(&DAT_153514448 + lVar7 * 4);
  }
  iVar4 = *(int *)(param_6 + 8);
  for (; param_2 < param_3; param_2 = param_2 + 1) {
    pfVar9 = local_58;
    iVar8 = 0;
    do {
      iVar6 = 0x1f;
      if (*(uint *)(param_6 + 0x20) != 0) {
        for (; *(uint *)(param_6 + 0x20) >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = iVar4 * 8 + 1 + (iVar6 - *(int *)(param_6 + 0x18));
      if (iVar6 < 0xf) {
        if (iVar6 < 2) {
          if (iVar6 < 1) {
            uVar5 = 0xffffffff;
          }
          else {
            iVar6 = ec_dec_bit_logp(param_6,1);
            uVar5 = -iVar6;
          }
        }
        else {
          uVar5 = ec_dec_icdf(param_6,&DAT_153514430,2);
          uVar5 = -(uVar5 & 1) ^ (int)uVar5 >> 1;
        }
      }
      else {
        iVar6 = 0x14;
        if (param_2 < 0x14) {
          iVar6 = param_2;
        }
        uVar5 = ec_laplace_decode(param_6,(ulonglong)
                                          (byte)(&DAT_1535142e0)
                                                [(longlong)(iVar6 * 2) + lVar1 * 0x2a] << 7,
                                  (ulonglong)
                                  (byte)(&DAT_1535142e0)[(longlong)(iVar6 * 2) + 1 + lVar1 * 0x2a]
                                  << 6);
      }
      fVar2 = *pfVar9;
      fVar11 = (float)(int)uVar5;
      lVar7 = (longlong)(iVar8 * *(int *)(param_1 + 8) + param_2);
      iVar6 = iVar8 + 1;
      fVar3 = *(float *)(param_4 + lVar7 * 4);
      fVar10 = __real_c1100000;
      if (__real_c1100000 <= fVar3) {
        fVar10 = fVar3;
      }
      *(float *)(param_4 + lVar7 * 4) = fVar10;
      lVar7 = (longlong)(iVar8 * *(int *)(param_1 + 8) + param_2);
      *(float *)(param_4 + lVar7 * 4) = fVar13 * *(float *)(param_4 + lVar7 * 4) + fVar2 + fVar11;
      *pfVar9 = (fVar2 + fVar11) - fVar11 * fVar12;
      pfVar9 = pfVar9 + 1;
      iVar8 = iVar6;
    } while (iVar6 < param_7);
  }
  return;
}

// unquant_energy_finalise @ 14f87e3f0

void unquant_energy_finalise
               (longlong param_1,uint param_2,int param_3,longlong param_4,longlong param_5,
               longlong param_6,int param_7,undefined8 param_8,int param_9)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  uVar2 = (ulonglong)(int)param_2;
  iVar6 = 0;
  uVar5 = uVar2;
  do {
    uVar10 = uVar5 & 0xffffffff;
    if ((longlong)uVar2 < (longlong)param_3) {
      piVar4 = (int *)(param_5 + uVar2 * 4);
      uVar5 = uVar2;
      iVar9 = param_7;
      do {
        if (iVar9 < param_9) break;
        if ((*piVar4 < 8) && (*(int *)((longlong)piVar4 + (param_6 - param_5)) == iVar6)) {
          iVar8 = 0;
          do {
            iVar1 = ec_dec_bits(param_8,1);
            iVar3 = *(int *)(param_1 + 8) * iVar8;
            iVar9 = iVar9 + -1;
            iVar8 = iVar8 + 1;
            lVar7 = (longlong)(iVar3 + (int)uVar10);
            *(float *)(param_4 + lVar7 * 4) =
                 (float)(1 << (0xdU - (char)*piVar4 & 0x1f)) * ((float)iVar1 - __real_3f000000) *
                 __real_38800000 + *(float *)(param_4 + lVar7 * 4);
            param_7 = iVar9;
          } while (iVar8 < param_9);
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while ((longlong)uVar5 < (longlong)param_3);
      uVar5 = (ulonglong)param_2;
    }
    iVar6 = iVar6 + 1;
    if (1 < iVar6) {
      return;
    }
  } while( true );
}

// unquant_fine_energy @ 14f87e554

void unquant_fine_energy(longlong param_1,int param_2,int param_3,longlong param_4,longlong param_5,
                        undefined8 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  
  uVar5 = (ulonglong)param_2;
  if ((longlong)uVar5 < (longlong)param_3) {
    lVar3 = (longlong)param_3 - uVar5;
    piVar6 = (int *)(param_5 + uVar5 * 4);
    do {
      if (0 < *piVar6) {
        iVar4 = 0;
        do {
          iVar1 = ec_dec_bits(param_6,*piVar6);
          iVar2 = *(int *)(param_1 + 8) * iVar4;
          iVar4 = iVar4 + 1;
          lVar7 = (longlong)(iVar2 + (int)uVar5);
          *(float *)(param_4 + lVar7 * 4) =
               ((float)(1 << (0xeU - (char)*piVar6 & 0x1f)) * ((float)iVar1 + __real_3f000000) *
                __real_38800000 - __real_3f000000) + *(float *)(param_4 + lVar7 * 4);
        } while (iVar4 < param_7);
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      piVar6 = piVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

