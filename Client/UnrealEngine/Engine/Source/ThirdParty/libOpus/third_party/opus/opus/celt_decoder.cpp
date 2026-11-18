// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 10

// FUN_14f8743e8 @ 14f8743e8

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f8743e8(longlong *param_1,int param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  void *pvVar3;
  byte bVar4;
  undefined4 uVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 *puVar17;
  uint uVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  int iVar22;
  float *pfVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  ulonglong uVar28;
  double dVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_1290;
  undefined1 auStack_1288 [32];
  int aiStack_1268 [2];
  longlong lStack_1260;
  uint auStack_1258 [6];
  undefined8 local_1240;
  undefined4 local_1238 [8];
  undefined4 local_1218 [24];
  undefined1 auStack_11b8 [3976];
  undefined8 uStack_230;
  undefined1 auStack_228 [32];
  int aiStack_208 [20];
  int local_1b8;
  int local_1b4;
  int local_1b0;
  ulonglong local_1a8;
  int local_1a0;
  undefined1 *local_198;
  float *local_190;
  longlong local_188;
  ulonglong local_180;
  undefined1 *local_178;
  void *local_170;
  longlong *local_168;
  size_t local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118 [4];
  float local_f8 [28];
  ulonglong local_88;
  
  fVar31 = __real_3f800000;
  local_88 = __security_cookie.value ^ (ulonglong)&local_1b8;
  lVar2 = *param_1;
  uVar18 = *(uint *)((longlong)param_1 + 0xc);
  uVar28 = (ulonglong)param_2;
  lVar15 = 0;
  local_138 = (longlong)(int)uVar18;
  local_150 = *(longlong *)(lVar2 + 0x20);
  iVar8 = *(int *)(lVar2 + 4);
  lVar24 = (longlong)iVar8;
  local_1b8 = *(int *)(lVar2 + 8);
  local_128 = uVar28 * 4;
  local_148 = uVar28 * -4 + 0x2000;
  iVar22 = 0;
  local_178 = (undefined1 *)CONCAT44(local_178._4_4_,param_2);
  local_170 = (void *)CONCAT44(local_170._4_4_,uVar18);
  local_198 = (undefined1 *)CONCAT44(local_198._4_4_,iVar8);
  do {
    lVar9 = (longlong)iVar22;
    iVar22 = iVar22 + iVar8 + 0x800;
    lVar9 = (longlong)param_1 + (lVar9 + 0x18) * 4;
    local_118[lVar15 + 2] = lVar9;
    local_118[lVar15] = local_148 + lVar9;
    lVar15 = lVar15 + 1;
  } while (lVar15 < local_138);
  local_1a0 = (int)param_1[7];
  iVar22 = (int)param_1[3];
  lVar15 = (longlong)iVar22;
  local_190 = (float *)CONCAT44(local_190._4_4_,iVar22);
  local_130 = (longlong)param_1 + ((longlong)(int)((iVar8 + 0x800) * uVar18) + 0x18) * 4;
  local_158 = local_130 + (longlong)(int)(uVar18 * 0x18) * 4;
  local_140 = local_158 + (longlong)(local_1b8 * 2) * 0xc;
  local_1b0 = param_3;
  local_1a8 = uVar28;
  local_168 = param_1;
  local_160 = lVar2;
  if (((local_1a0 < 5) && (iVar22 == 0)) && (*(int *)((longlong)param_1 + 0x3c) == 0)) {
    if (local_1a0 == 0) {
      uStack_230 = 0x14f874556;
      iVar22 = FUN_14f875cd0(local_118 + 2,uVar18,(int)param_1[5]);
      *(int *)((longlong)param_1 + 0x34) = iVar22;
      fVar34 = fVar31;
    }
    else {
      iVar22 = *(int *)((longlong)param_1 + 0x34);
      fVar34 = __real_3f4ccccd;
    }
    iVar14 = 0x400;
    if (iVar22 * 2 < 0x400) {
      iVar14 = iVar22 * 2;
    }
    uVar28 = lVar24 * 4 + 0xf;
    if (uVar28 <= (ulonglong)(lVar24 * 4)) {
      uVar28 = 0xffffffffffffff0;
    }
    uStack_230 = 0x14f8745a9;
    lVar15 = -(uVar28 & 0xfffffffffffffff0);
    local_140 = (longlong)&local_1b8 + lVar15;
    local_1b4 = iVar14;
    *(undefined8 *)(auStack_228 + lVar15 + -8) = 0x14f8745bf;
    lVar9 = (longlong)iVar14;
    local_120 = lVar9 * 4;
    uVar28 = local_120 + 0xf;
    if (uVar28 <= local_120) {
      uVar28 = 0xffffffffffffff0;
    }
    *(undefined8 *)((longlong)&uStack_1290 + lVar15) = 0x14f8745ee;
    local_190 = *(float **)(lVar2 + 0x48);
    local_198 = auStack_11b8 + lVar15;
    lVar2 = -(uVar28 & 0xfffffffffffffff0);
    puVar17 = auStack_1288 + lVar2 + lVar15;
    local_118[0] = lVar9 >> 1;
    local_170 = (void *)((longlong)local_1218 + lVar2 + lVar15);
    local_180 = 0;
    local_158 = (longlong)iVar22;
    puVar12 = (undefined4 *)((longlong)local_1218 + lVar15);
    local_178 = local_198 + lVar9 * -4 + 0x1000;
    local_160 = (longlong)(0x800 - param_2) << 2;
    local_1b0 = param_2 + iVar8;
    lVar9 = (longlong)local_1b0;
    local_150 = 0x7ff - local_1a8;
    local_188 = (longlong)(iVar8 / 2);
    local_1b8 = 0;
    do {
      iVar22 = local_1b8;
      pvVar3 = (void *)local_118[local_180 + 2];
      fVar33 = 0.0;
      lVar20 = 0x418;
      do {
        *puVar12 = *(undefined4 *)
                    ((longlong)pvVar3 + (0x1000 - (longlong)local_198) + (longlong)puVar12);
        puVar12 = puVar12 + 1;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      if (local_1a0 == 0) {
        *(int *)((longlong)auStack_1258 + lVar2 + lVar15) = (int)param_1[5];
        *(undefined4 *)((longlong)&lStack_1260 + lVar2 + lVar15) = 0x400;
        *(undefined4 *)((longlong)aiStack_1268 + lVar2 + lVar15) = 0x18;
        *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f8746d8;
        _celt_autocorr(local_198,local_f8,local_190,iVar8);
        pfVar19 = local_f8;
        local_f8[0] = local_f8[0] * __real_3f800347;
        iVar14 = 1;
        do {
          pfVar19 = pfVar19 + 1;
          iVar7 = iVar14 + 1;
          *pfVar19 = *pfVar19 - *pfVar19 * ___real_388637be * (float)iVar14 * (float)iVar14;
          iVar14 = iVar7;
        } while (iVar7 < 0x19);
        *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f87474d;
        _celt_lpc(local_130 + (longlong)iVar22 * 4,local_f8,0x18);
        iVar14 = local_1b4;
      }
      lVar20 = local_130 + (longlong)iVar22 * 4;
      *(int *)((longlong)&lStack_1260 + lVar2 + lVar15) = (int)param_1[5];
      *(undefined4 *)((longlong)aiStack_1268 + lVar2 + lVar15) = 0x18;
      *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f874780;
      celt_fir_c(local_178,lVar20,local_170,iVar14);
      *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f874794;
      memcpy(local_178,local_170,local_120);
      fVar32 = fVar31;
      if (local_118[0] < 1) {
LAB_14f8747e3:
        fVar30 = fVar32;
        fVar32 = fVar30;
      }
      else {
        pfVar19 = (float *)(local_198 + (0x200 - local_118[0]) * 8);
        lVar10 = local_118[0];
        fVar30 = fVar31;
        do {
          pfVar23 = pfVar19 + local_118[0];
          fVar1 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          fVar30 = fVar30 + *pfVar23 * *pfVar23;
          fVar32 = fVar32 + fVar1 * fVar1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        if (fVar32 <= fVar30) goto LAB_14f8747e3;
      }
      *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f8747f6;
      dVar29 = sqrt((double)(fVar30 / fVar32));
      *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f874813;
      memmove(pvVar3,(void *)(local_128 + (longlong)pvVar3),local_160);
      lVar10 = 0;
      fVar32 = (float)dVar29 * fVar34;
      if (0 < lVar9) {
        pfVar19 = (float *)(local_198 + (0x400 - local_158) * 4);
        pfVar23 = (float *)((longlong)pvVar3 + (0x800 - local_1a8) * 4);
        pfVar21 = (float *)((longlong)pvVar3 + ((0x800 - local_158) - local_1a8) * 4);
        lVar11 = lVar9;
        do {
          if (local_158 <= lVar10) {
            lVar10 = lVar10 - local_158;
            fVar32 = fVar32 * (float)dVar29;
            pfVar19 = pfVar19 + -local_158;
            pfVar21 = pfVar21 + -local_158;
          }
          lVar10 = lVar10 + 1;
          fVar30 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          *pfVar23 = fVar32 * fVar30;
          pfVar23 = pfVar23 + 1;
          fVar30 = *pfVar21;
          pfVar21 = pfVar21 + 1;
          fVar33 = fVar33 + fVar30 * fVar30;
          lVar11 = lVar11 + -1;
        } while (lVar11 != 0);
      }
      lVar10 = 0;
      pfVar19 = (float *)((longlong)pvVar3 + local_150 * 4);
      do {
        fVar32 = *pfVar19;
        pfVar19 = pfVar19 + -1;
        local_f8[lVar10] = fVar32;
        lVar10 = lVar10 + 1;
      } while (lVar10 < 0x18);
      *(int *)((longlong)auStack_1258 + lVar2 + lVar15) = (int)param_1[5];
      *(float **)((longlong)&lStack_1260 + lVar2 + lVar15) = local_f8;
      *(undefined4 *)((longlong)aiStack_1268 + lVar2 + lVar15) = 0x18;
      *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f8748eb;
      celt_iir(local_148 + (longlong)pvVar3,lVar20,local_148 + (longlong)pvVar3,local_1b0);
      uVar28 = local_1a8;
      fVar32 = 0.0;
      if (0 < lVar9) {
        pfVar19 = (float *)((longlong)pvVar3 + (0x800 - local_1a8) * 4);
        lVar20 = lVar9;
        do {
          fVar30 = *pfVar19;
          pfVar19 = pfVar19 + 1;
          fVar32 = fVar32 + fVar30 * fVar30;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      if (fVar32 * __real_3e4ccccd < fVar33) {
        if (fVar33 < fVar32) {
          *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f874973;
          dVar29 = sqrt((double)((fVar33 + fVar31) / (fVar32 + fVar31)));
          if (0 < iVar8) {
            pfVar19 = (float *)((longlong)pvVar3 + (0x800 - uVar28) * 4);
            lVar20 = lVar24;
            do {
              *pfVar19 = (fVar31 - (fVar31 - (float)dVar29) *
                                   *(float *)((longlong)local_190 +
                                              ((uVar28 * 4 + -0x2000) - (longlong)pvVar3) +
                                             (longlong)pfVar19)) * *pfVar19;
              pfVar19 = pfVar19 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (lVar24 < lVar9) {
            pfVar19 = (float *)((longlong)pvVar3 + ((lVar24 - uVar28) + 0x800) * 4);
            lVar20 = lVar9 - lVar24;
            do {
              *pfVar19 = (float)dVar29 * *pfVar19;
              pfVar19 = pfVar19 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
        }
      }
      else if (0 < lVar9) {
        *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f87494b;
        memset((void *)((longlong)pvVar3 + (0x800 - local_1a8) * 4),0,lVar9 << 2);
      }
      lVar11 = local_140;
      lVar20 = param_1[10];
      uVar18 = *(uint *)(param_1 + 9);
      lVar10 = param_1[8];
      *(int *)((longlong)local_1238 + lVar2 + lVar15 + 8) = (int)param_1[5];
      *(undefined4 *)((longlong)local_1238 + lVar2 + lVar15) = 0;
      *(undefined8 *)((longlong)&local_1240 + lVar2 + lVar15) = 0;
      *(int *)((longlong)auStack_1258 + lVar2 + lVar15 + 0x10) = (int)lVar20;
      *(int *)((longlong)auStack_1258 + lVar2 + lVar15 + 8) = (int)lVar20;
      *(uint *)((longlong)auStack_1258 + lVar2 + lVar15) =
           uVar18 ^ __xmm_80000000800000008000000080000000;
      *(uint *)((longlong)&lStack_1260 + lVar2 + lVar15) =
           uVar18 ^ __xmm_80000000800000008000000080000000;
      *(int *)((longlong)aiStack_1268 + lVar2 + lVar15) = iVar8;
      *(undefined8 *)((longlong)&uStack_1290 + lVar2 + lVar15) = 0x14f874a49;
      comb_filter(local_140,(longlong)pvVar3 + 0x2000,(int)lVar10,(int)lVar10);
      lVar20 = 0;
      if (0 < local_188) {
        pfVar19 = local_190;
        do {
          lVar10 = lVar24 - lVar20;
          lVar20 = lVar20 + 1;
          *(float *)((longlong)pvVar3 + (0x2000 - (longlong)local_190) + (longlong)pfVar19) =
               local_190[lVar10 + -1] *
               *(float *)((lVar11 - (longlong)local_190) + (longlong)pfVar19) +
               *(float *)(lVar11 + -4 + lVar10 * 4) * *pfVar19;
          pfVar19 = pfVar19 + 1;
          param_1 = local_168;
        } while (lVar20 < local_188);
      }
      local_1b8 = local_1b8 + 0x18;
      local_180 = local_180 + 1;
      puVar12 = (undefined4 *)(local_198 + -0x60);
      iVar14 = local_1b4;
    } while ((longlong)local_180 < local_138);
  }
  else {
    iVar8 = *(int *)((longlong)param_1 + 0x1c);
    iVar14 = *(int *)(lVar2 + 0xc);
    iVar7 = iVar8;
    if (iVar14 <= iVar8) {
      iVar7 = iVar14;
    }
    if ((iVar22 <= iVar7) && (iVar22 = iVar14, iVar8 < iVar14)) {
      iVar22 = iVar8;
    }
    uVar13 = (longlong)(int)(param_2 * uVar18) * 4;
    uVar16 = uVar13 + 0xf;
    if (uVar16 <= uVar13) {
      uVar16 = 0xffffffffffffff0;
    }
    uStack_230 = 0x14f874b1e;
    lVar2 = -(uVar16 & 0xfffffffffffffff0);
    puVar17 = auStack_228 + lVar2;
    local_188 = (longlong)&local_1b8 + lVar2;
    fVar31 = __real_3f000000;
    if (local_1a0 == 0) {
      fVar31 = __real_3fc00000;
    }
    iVar14 = 0;
    iVar7 = 0;
    do {
      if (lVar15 < iVar8) {
        pfVar19 = (float *)(local_158 + (iVar7 + lVar15) * 4);
        lVar24 = iVar8 - lVar15;
        do {
          fVar34 = *(float *)((local_140 - local_158) + (longlong)pfVar19);
          if (fVar34 <= *pfVar19 - fVar31) {
            fVar34 = *pfVar19 - fVar31;
          }
          *pfVar19 = fVar34;
          pfVar19 = pfVar19 + 1;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
      }
      iVar14 = iVar14 + 1;
      iVar7 = iVar7 + local_1b8;
    } while (iVar14 < (int)uVar18);
    local_1b8 = *(int *)((longlong)param_1 + 0x2c);
    local_148 = lVar15;
    iVar8 = local_1b8;
    if (0 < (int)uVar18) {
      local_1b4 = 0;
      local_180 = (ulonglong)uVar18;
      do {
        lVar24 = local_188;
        if (lVar15 < iVar22) {
          local_1a8 = CONCAT44(local_1a8._4_4_,(int)param_1[5]);
          iVar14 = local_1b4;
          do {
            iVar7 = (int)*(short *)(local_150 + lVar15 * 2);
            iVar26 = *(short *)(local_150 + 2 + lVar15 * 2) - iVar7;
            bVar4 = (byte)local_1b0 & 0x1f;
            iVar27 = iVar26 << bVar4;
            iVar25 = (iVar7 << ((byte)local_1b0 & 0x1f)) + iVar14;
            lVar9 = (longlong)iVar27;
            iVar7 = local_1b8;
            local_138 = lVar9;
            if (0 < iVar26 << bVar4) {
              pfVar19 = (float *)((longlong)iVar25 * 4 + lVar24);
              do {
                *(undefined8 *)(auStack_228 + lVar2 + -8) = 0x14f874c22;
                iVar8 = celt_lcg_rand(iVar8);
                *pfVar19 = (float)(iVar8 >> 0x14);
                pfVar19 = pfVar19 + 1;
                lVar9 = lVar9 + -1;
                iVar14 = local_1b4;
                iVar7 = iVar8;
              } while (lVar9 != 0);
            }
            local_1b8 = iVar7;
            uVar28 = local_1a8 & 0xffffffff;
            *(undefined8 *)(auStack_228 + lVar2 + -8) = 0x14f874c64;
            renormalise_vector((longlong)iVar25 * 4 + lVar24,iVar27,__real_3f800000,uVar28);
            lVar15 = lVar15 + 1;
            iVar8 = local_1b8;
          } while (lVar15 < iVar22);
          uVar28 = (ulonglong)local_178 & 0xffffffff;
          param_1 = local_168;
          lVar15 = local_148;
        }
        param_2 = (int)uVar28;
        local_1b4 = local_1b4 + param_2;
        local_180 = local_180 - 1;
      } while (local_180 != 0);
      local_180 = 0;
      uVar18 = (uint)local_170;
    }
    lVar15 = local_128;
    lVar24 = 0;
    iVar14 = (int)local_198 >> 1;
    *(int *)((longlong)param_1 + 0x2c) = iVar8;
    do {
      pvVar3 = (void *)local_118[lVar24 + 2];
      *(undefined8 *)(auStack_228 + lVar2 + -8) = 0x14f874cd8;
      memmove(pvVar3,(void *)((longlong)pvVar3 + lVar15),(longlong)((iVar14 - param_2) + 0x800) << 2
             );
      lVar20 = local_158;
      sVar6 = local_160;
      param_1 = local_168;
      lVar9 = local_188;
      lVar24 = lVar24 + 1;
    } while (lVar24 < (int)uVar18);
    uVar5 = local_190._0_4_;
    *(int *)((longlong)aiStack_208 + lVar2 + 0x40) = (int)local_168[5];
    *(undefined4 *)((longlong)aiStack_208 + lVar2 + 0x38) = 0;
    *(undefined4 *)((longlong)aiStack_208 + lVar2 + 0x30) =
         *(undefined4 *)((longlong)param_1 + 0x14);
    *(int *)((longlong)aiStack_208 + lVar2 + 0x28) = local_1b0;
    *(undefined4 *)((longlong)aiStack_208 + lVar2 + 0x20) = 0;
    *(uint *)((longlong)aiStack_208 + lVar2 + 0x18) = uVar18;
    *(uint *)((longlong)aiStack_208 + lVar2 + 0x10) = uVar18;
    *(int *)((longlong)aiStack_208 + lVar2 + 8) = iVar22;
    *(undefined4 *)((longlong)aiStack_208 + lVar2) = uVar5;
    *(undefined8 *)(auStack_228 + lVar2 + -8) = 0x14f874d30;
    FUN_14f875d6c(sVar6,lVar9,local_118,lVar20);
  }
  *(int *)(param_1 + 7) = local_1a0 + 1;
  *(undefined8 *)(puVar17 + -8) = 0x14f874d47;
  return;
}

// celt_decode_with_ec @ 14f874d88

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong celt_decode_with_ec(longlong *param_1,longlong param_2,uint param_3,longlong param_4,
                             int param_5,undefined1 *param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  float *pfVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  int *piVar23;
  undefined1 *puVar24;
  int iVar25;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  undefined4 uVar31;
  size_t sVar32;
  undefined4 uVar33;
  longlong lVar34;
  int iVar35;
  int iVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  undefined8 uStack_280;
  undefined1 auStack_278 [32];
  longlong local_258;
  undefined1 *local_250;
  longlong *local_248;
  longlong local_240;
  longlong lStack_238;
  uint auStack_230 [2];
  longlong lStack_228;
  longlong lStack_220;
  longlong lStack_218;
  longlong lStack_210;
  int aiStack_208 [2];
  undefined8 uStack_200;
  undefined8 local_1f8;
  int local_1f0 [4];
  longlong local_1e0;
  undefined4 local_1d8 [8];
  int local_1b8;
  int iStack_1b4;
  int local_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  float *local_198;
  uint local_190;
  int iStack_18c;
  int local_188;
  int local_184;
  undefined4 local_180;
  int local_17c;
  int local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  uint uStack_15c;
  longlong local_158;
  int local_150;
  float *local_148;
  undefined4 local_140;
  uint local_13c;
  int local_138;
  longlong local_130;
  longlong local_128;
  float *local_120;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  longlong *local_100;
  longlong local_f8;
  longlong local_f0;
  size_t local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0 [4];
  longlong local_a0;
  longlong local_98;
  longlong alStack_90 [2];
  undefined1 local_80 [56];
  ulonglong local_48;
  
  puVar24 = auStack_278;
  local_48 = __security_cookie.value ^ (ulonglong)&local_1b8;
  iVar30 = *(int *)((longlong)param_1 + 0xc);
  iVar36 = 0;
  local_1b8 = (int)param_1[2];
  local_168 = 0;
  local_164 = 0;
  local_150 = 0;
  uStack_280 = 0x14f874e0d;
  local_190 = param_3;
  local_17c = iVar30;
  local_100 = param_1;
  local_c8 = param_4;
  validate_celt_decoder();
  lVar20 = *param_1;
  param_5 = param_5 * *(int *)((longlong)param_1 + 0x14);
  local_1b0 = *(int *)((longlong)param_1 + 0x1c);
  local_c0[2] = *(longlong *)(lVar20 + 0x20);
  iVar11 = *(int *)(lVar20 + 4) + 0x800;
  iStack_1b4 = (int)param_1[3];
  local_188 = *(int *)(lVar20 + 4);
  local_1a0 = *(int *)(lVar20 + 8);
  local_d0 = lVar20;
  iVar25 = *(int *)(lVar20 + 0x28);
  local_f0 = (longlong)(*(int *)(lVar20 + 8) * 2);
  local_198 = (float *)((longlong)param_1 +
                       ((longlong)(iVar11 * iVar30) + (longlong)(iVar30 * 0x18) + 0x18) * 4);
  local_e8 = local_f0 * 4;
  local_120 = local_198 + local_f0;
  local_148 = local_198 + local_f0 * 2;
  if (-1 < iVar25) {
    do {
      if (*(int *)(lVar20 + 0x30) << ((byte)iVar36 & 0x1f) == param_5) break;
      iVar36 = iVar36 + 1;
    } while (iVar36 <= iVar25);
  }
  local_170 = CONCAT44(local_170._4_4_,iVar36);
  if (iVar36 <= iVar25) {
    uStack_15c = 1 << ((byte)iVar36 & 0x1f);
    if ((param_3 < 0x4fc) && (param_4 != 0)) {
      lVar21 = 0;
      iVar25 = *(int *)(lVar20 + 0x30) * uStack_15c;
      local_130 = (longlong)iVar30;
      iStack_1a4 = iVar25;
      iVar29 = 0;
      local_f8 = (longlong)iVar25 * 4;
      do {
        lVar13 = (longlong)iVar29;
        iVar29 = iVar29 + iVar11;
        lVar13 = (longlong)param_1 + (lVar13 + 0x18) * 4;
        alStack_90[lVar21] = lVar13;
        local_c0[lVar21] = lVar13 + (longlong)iVar25 * -4 + 0x2000;
        lVar21 = lVar21 + 1;
      } while (lVar21 < iVar30);
      local_138 = *(int *)(lVar20 + 0xc);
      if (local_1b0 <= *(int *)(lVar20 + 0xc)) {
        local_138 = local_1b0;
      }
      if ((param_2 == 0) || ((int)param_3 < 2)) {
        uStack_280 = 0x14f875b0a;
        FUN_14f8743e8(param_1,iVar25,iVar36);
        local_248 = param_1 + 0xb;
        local_250 = (undefined1 *)(lVar20 + 0x10);
        local_240._0_4_ = param_7;
        local_258._0_4_ = *(undefined4 *)((longlong)param_1 + 0x14);
        uStack_280 = 0x14f875b48;
        FUN_14f8761e4(local_c0,local_c8,iVar25,local_17c);
        puVar24 = auStack_278;
      }
      else {
        *(uint *)((longlong)param_1 + 0x3c) = (uint)((int)param_1[7] != 0);
        if (param_6 == (undefined1 *)0x0) {
          uStack_280 = 0x14f874fa9;
          ec_dec_init(local_80,param_2,param_3);
          param_6 = local_80;
        }
        local_128 = (longlong)local_1a0;
        if ((local_1b8 == 1) && (pfVar14 = local_198, lVar21 = local_128, 0 < local_128)) {
          do {
            fVar39 = *pfVar14;
            if (*pfVar14 <= pfVar14[local_128]) {
              fVar39 = pfVar14[local_128];
            }
            *pfVar14 = fVar39;
            lVar21 = lVar21 + -1;
            pfVar14 = pfVar14 + 1;
          } while (lVar21 != 0);
        }
        uVar17 = *(uint *)(param_6 + 0x20);
        iVar30 = param_3 * 8;
        iVar11 = 0x1f;
        if (uVar17 != 0) {
          for (; uVar17 >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        iVar25 = (*(int *)(param_6 + 0x18) - iVar11) + -1;
        iStack_19c = iVar30;
        if (iVar25 < iVar30) {
          if (iVar25 == 1) {
            uStack_280 = 0x14f875027;
            iStack_18c = ec_dec_bit_logp(param_6,(*(int *)(param_6 + 0x18) - iVar11) + 0xd);
            uVar17 = *(uint *)(param_6 + 0x20);
          }
          else {
            iStack_18c = 0;
          }
          if (iStack_18c != 0) goto LAB_14f87503a;
        }
        else {
          iStack_18c = 1;
LAB_14f87503a:
          iVar11 = 0x1f;
          if (uVar17 != 0) {
            for (; uVar17 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          *(int *)(param_6 + 0x18) = iVar11 + 1 + iVar30;
          iVar25 = iVar30;
        }
        local_d8 = 2;
        fVar39 = 0.0;
        local_184 = 0;
        local_180 = 0;
        iStack_1ac = 6;
        if ((iStack_1b4 == 0) && (iVar25 + 0x10 <= iVar30)) {
          uStack_280 = 0x14f875087;
          iVar11 = ec_dec_bit_logp(param_6,1);
          fVar39 = 0.0;
          if (iVar11 != 0) {
            uStack_280 = 0x14f875096;
            iVar11 = ec_dec_uint(param_6,6);
            uStack_280 = 0x14f8750a3;
            iVar25 = ec_dec_bits(param_6,iVar11 + 4);
            local_184 = (0x10 << ((byte)iVar11 & 0x1f)) + iVar25 + -1;
            uStack_280 = 0x14f8750bf;
            iVar25 = ec_dec_bits(param_6,3);
            iVar11 = 0x1f;
            if (*(uint *)(param_6 + 0x20) != 0) {
              for (; *(uint *)(param_6 + 0x20) >> iVar11 == 0; iVar11 = iVar11 + -1) {
              }
            }
            if (*(int *)(param_6 + 0x18) - iVar11 < iVar30) {
              uStack_280 = 0x14f8750e2;
              local_180 = ec_dec_icdf(param_6,&DAT_15350ff70,2);
            }
            fVar39 = (float)(iVar25 + 1) * ___real_3dc00000;
          }
          iVar11 = 0x1f;
          if (*(uint *)(param_6 + 0x20) != 0) {
            for (; *(uint *)(param_6 + 0x20) >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          iVar25 = (*(int *)(param_6 + 0x18) - iVar11) + -1;
        }
        if ((iVar36 < 1) || (iVar30 < iVar25 + 3)) {
          local_1a8 = 0;
        }
        else {
          uStack_280 = 0x14f87511c;
          local_1a8 = ec_dec_bit_logp(param_6,3);
          iVar11 = 0x1f;
          if (*(uint *)(param_6 + 0x20) != 0) {
            for (; *(uint *)(param_6 + 0x20) >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          iVar25 = (*(int *)(param_6 + 0x18) - iVar11) + -1;
        }
        local_13c = -(uint)(local_1a8 != 0) & uStack_15c;
        if (iVar30 < iVar25 + 3) {
          local_258._0_4_ = 0;
        }
        else {
          uStack_280 = 0x14f875151;
          local_258._0_4_ = ec_dec_bit_logp(param_6,3);
        }
        iVar11 = local_1b8;
        local_248 = (longlong *)CONCAT44(local_248._4_4_,local_1b8);
        uStack_280 = 0x14f87517d;
        local_250 = param_6;
        local_240._0_4_ = iVar36;
        unquant_coarse_energy(lVar20,iStack_1b4,local_1b0,local_198);
        iVar35 = local_1a8;
        iVar29 = local_1b0;
        iVar25 = iStack_1b4;
        uVar37 = local_128 * 4;
        uVar15 = uVar37 + 0xf;
        if (uVar15 <= uVar37) {
          uVar15 = 0xffffffffffffff0;
        }
        uStack_280 = 0x14f8751ae;
        lVar21 = -(uVar15 & 0xfffffffffffffff0);
        local_118 = uVar37;
        *(undefined1 **)((longlong)&local_250 + lVar21) = param_6;
        local_a0 = (longlong)&local_1b8 + lVar21;
        *(int *)((longlong)&local_258 + lVar21) = iVar36;
        *(undefined8 *)(auStack_278 + lVar21 + -8) = 0x14f8751dc;
        FUN_14f876670(iVar25,iVar29,iVar35,(longlong)&local_1b8 + lVar21);
        iVar25 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar25 == 0; iVar25 = iVar25 + -1) {
          }
        }
        local_160 = 2;
        if ((*(int *)(param_6 + 0x18) - iVar25) + 3 <= iVar30) {
          *(undefined8 *)(auStack_278 + lVar21 + -8) = 0x14f875209;
          local_160 = ec_dec_icdf(param_6,&DAT_15350ff6c,5);
        }
        uVar15 = uVar37 + 0xf;
        if (uVar15 <= uVar37) {
          uVar15 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_278 + lVar21 + -8) = 0x14f875228;
        lVar4 = -(uVar15 & 0xfffffffffffffff0);
        lVar13 = (longlong)&local_1b8 + lVar4 + lVar21;
        local_110 = lVar13;
        *(undefined8 *)(auStack_278 + lVar4 + lVar21 + -8) = 0x14f87524b;
        init_caps(lVar20,lVar13,iVar36,iVar11);
        uVar15 = uVar37 + 0xf;
        if (uVar15 <= uVar37) {
          uVar15 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_278 + lVar4 + lVar21 + -8) = 0x14f875267;
        lVar13 = -(uVar15 & 0xfffffffffffffff0);
        iVar30 = param_3 << 6;
        local_108 = (longlong)&local_1b8 + lVar13 + lVar4 + lVar21;
        *(undefined8 *)(auStack_278 + lVar13 + lVar4 + lVar21 + -8) = 0x14f875285;
        iVar11 = ec_tell_frac(param_6);
        lVar34 = (longlong)local_1b0;
        local_158 = (longlong)iStack_1b4;
        local_e0 = lVar34;
        local_98 = local_158;
        if (local_158 < lVar34) {
          piVar23 = (int *)(local_108 + local_158 * 4);
          local_c0[3] = local_110 - local_108;
          do {
            lVar20 = local_c0[3];
            iVar29 = ((int)*(short *)(local_c0[2] + 2 + local_158 * 2) -
                     (int)*(short *)(local_c0[2] + local_158 * 2)) * local_1b8 <<
                     ((byte)iVar36 & 0x1f);
            iVar25 = iVar29;
            if (iVar29 < 0x30) {
              iVar25 = 0x30;
            }
            if (iVar29 << 3 < iVar25) {
              iVar25 = iVar29 << 3;
            }
            iVar35 = 0;
            lVar28 = local_158;
            local_178 = iVar25;
            iVar29 = iStack_1ac;
            if (iVar11 + iStack_1ac * 8 < iVar30) {
              do {
                if (*(int *)(lVar20 + (longlong)piVar23) <= iVar35) break;
                *(undefined8 *)(auStack_278 + lVar13 + lVar4 + lVar21 + -8) = 0x14f87532b;
                iVar36 = ec_dec_bit_logp(param_6,iVar29);
                *(undefined8 *)(auStack_278 + lVar13 + lVar4 + lVar21 + -8) = 0x14f875335;
                iVar11 = ec_tell_frac(param_6);
                if (iVar36 == 0) break;
                iVar35 = iVar35 + iVar25;
                iVar30 = iVar30 - iVar25;
                iVar29 = 1;
              } while (iVar11 + 8 < iVar30);
              lVar28 = local_158;
              lVar34 = local_e0;
              iVar36 = (int)local_170;
            }
            *piVar23 = iVar35;
            if ((0 < iVar35) && (iStack_1ac = iStack_1ac + -1, iStack_1ac < 2)) {
              iStack_1ac = 2;
            }
            local_158 = lVar28 + 1;
            piVar23 = piVar23 + 1;
            lVar20 = local_d0;
            uVar37 = local_118;
          } while (local_158 < lVar34);
        }
        uVar15 = uVar37 + 0xf;
        if (uVar15 <= uVar37) {
          uVar15 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_278 + lVar13 + lVar4 + lVar21 + -8) = 0x14f8753bf;
        lVar34 = -(uVar15 & 0xfffffffffffffff0);
        local_158 = (longlong)&local_1b8 + lVar34 + lVar13 + lVar4 + lVar21;
        if (iVar30 < iVar11 + 0x30) {
          uVar12 = 5;
        }
        else {
          *(undefined8 *)(auStack_278 + lVar34 + lVar13 + lVar4 + lVar21 + -8) = 0x14f8753ec;
          uVar12 = ec_dec_icdf(param_6,&DAT_15350ff60);
        }
        iVar30 = local_190 * 0x40;
        local_190 = iVar30;
        *(undefined8 *)(auStack_278 + lVar34 + lVar13 + lVar4 + lVar21 + -8) = 0x14f875408;
        iVar11 = ec_tell_frac(param_6);
        iVar30 = iVar30 - iVar11;
        if (((local_1a8 == 0) || (iVar36 < 2)) || (iVar11 = 8, iVar30 <= iVar36 * 8 + 0x10)) {
          iVar11 = 0;
        }
        uVar15 = uVar37 + 0xf;
        if (uVar15 <= uVar37) {
          uVar15 = 0xffffffffffffff0;
        }
        iStack_1ac = iVar11;
        *(undefined8 *)(auStack_278 + lVar34 + lVar13 + lVar4 + lVar21 + -8) = 0x14f875453;
        lVar5 = -(uVar15 & 0xfffffffffffffff0);
        uVar15 = uVar37 + 0xf;
        lVar28 = (longlong)&local_1b8 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21;
        if (uVar15 <= uVar37) {
          uVar15 = 0xffffffffffffff0;
        }
        local_170 = lVar28;
        *(undefined8 *)(auStack_278 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) = 0x14f875477;
        lVar8 = local_108;
        lVar26 = local_158;
        iVar25 = local_1b8;
        lVar6 = -(uVar15 & 0xfffffffffffffff0);
        *(undefined4 *)((longlong)local_1f0 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + 8)
             = 0;
        lVar7 = (longlong)&local_1b8 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21;
        *(undefined4 *)((longlong)local_1f0 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = 0;
        *(undefined4 *)((longlong)&local_1f8 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = 0
        ;
        iVar29 = local_1b0;
        *(undefined1 **)((longlong)&uStack_200 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             param_6;
        *(int *)((longlong)aiStack_208 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iVar36;
        *(int *)((longlong)&lStack_210 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iVar25;
        *(longlong *)((longlong)&lStack_218 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar7;
        *(longlong *)((longlong)&lStack_220 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar26;
        *(longlong *)((longlong)&lStack_228 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar28;
        iVar25 = iStack_1b4;
        local_118 = lVar7;
        *(undefined4 **)((longlong)auStack_230 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             &local_140;
        *(int *)((longlong)&lStack_238 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             (iVar30 + -1) - iVar11;
        *(undefined4 **)((longlong)&local_240 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             &local_164;
        *(undefined4 **)((longlong)&local_248 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             &local_168;
        lVar28 = local_110;
        *(undefined4 *)((longlong)&local_250 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             uVar12;
        *(longlong *)((longlong)&local_258 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar28;
        *(undefined8 *)(auStack_278 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
             0x14f87550d;
        local_178 = clt_compute_allocation(lVar20,iVar25,iVar29,lVar8);
        pfVar14 = local_198;
        iVar30 = local_1b0;
        iVar11 = iStack_1b4;
        *(int *)((longlong)&local_248 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             local_1b8;
        *(undefined1 **)((longlong)&local_250 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             param_6;
        *(longlong *)((longlong)&local_258 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar26;
        *(undefined8 *)(auStack_278 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
             0x14f875534;
        unquant_fine_energy(lVar20,iVar11,iVar30,pfVar14);
        lVar7 = local_f8;
        lVar28 = local_130;
        lVar26 = 0;
        iVar11 = local_188 / 2 - iStack_1a4;
        do {
          pvVar3 = (void *)alStack_90[lVar26];
          *(undefined8 *)(auStack_278 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
               0x14f87556f;
          memmove(pvVar3,(void *)((longlong)pvVar3 + lVar7),(longlong)(iVar11 + 0x800) << 2);
          param_1 = local_100;
          iVar30 = local_1b8;
          lVar26 = lVar26 + 1;
        } while (lVar26 < lVar28);
        local_1a0 = local_1a0 * local_1b8;
        uVar37 = (ulonglong)local_1a0;
        uVar15 = uVar37 + 0xf;
        if (uVar15 <= uVar37) {
          uVar15 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_278 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
             0x14f8755ae;
        lVar7 = -(uVar15 & 0xfffffffffffffff0);
        lVar28 = (longlong)&local_1b8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21;
        uVar18 = (longlong)(iStack_1a4 * iVar30) * 4;
        uVar15 = uVar18 + 0xf;
        if (uVar15 <= uVar18) {
          uVar15 = 0xffffffffffffff0;
        }
        *(undefined8 *)(auStack_278 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8)
             = 0x14f8755dc;
        iVar11 = local_1b0;
        lVar8 = -(uVar15 & 0xfffffffffffffff0);
        puVar24 = auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21;
        iVar25 = local_190 - iStack_1ac;
        lVar26 = (longlong)&local_1b8 +
                 lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21;
        lVar19 = 0;
        if (iVar30 == 2) {
          lVar19 = local_f8 + lVar26;
        }
        *(undefined4 *)
         ((longlong)local_1d8 +
         lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + 0x10) =
             *(undefined4 *)((longlong)param_1 + 0x24);
        *(int *)((longlong)local_1d8 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + 8) =
             (int)param_1[5];
        *(undefined4 *)
         ((longlong)local_1d8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             0;
        iVar30 = local_178;
        *(longlong *)
         ((longlong)&local_1e0 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             (longlong)param_1 + 0x2c;
        *(int *)((longlong)local_1f0 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + 8) = iVar30;
        *(int *)((longlong)local_1f0 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iVar36;
        *(undefined1 **)
         ((longlong)&local_1f8 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             param_6;
        *(undefined4 *)
         ((longlong)&uStack_200 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
             = local_140;
        lVar9 = local_a0;
        *(int *)((longlong)aiStack_208 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iVar25;
        iVar30 = iStack_1b4;
        *(longlong *)
         ((longlong)&lStack_210 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
             = lVar9;
        *(undefined4 *)
         ((longlong)&lStack_218 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
             = local_168;
        *(undefined4 *)
         ((longlong)&lStack_220 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
             = local_164;
        *(undefined4 *)
         ((longlong)&lStack_228 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
             = local_160;
        *(uint *)((longlong)auStack_230 +
                 lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_13c;
        *(longlong *)
         ((longlong)&lStack_238 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
             = local_170;
        *(undefined8 *)
         ((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             0;
        *(longlong *)
         ((longlong)&local_248 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar28;
        *(longlong *)
         ((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar19;
        *(longlong *)
         ((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar26;
        *(undefined8 *)
         (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
             0x14f8756a9;
        quant_all_bands(0,lVar20,iVar30,iVar11);
        if (iStack_1ac != 0) {
          *(undefined8 *)
           (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
               0x14f8756bc;
          local_150 = ec_dec_bits(param_6,1);
        }
        uVar15 = local_118;
        pfVar14 = local_198;
        iVar30 = local_1b0;
        iVar11 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        iVar25 = iStack_19c - *(int *)(param_6 + 0x18);
        *(int *)((longlong)&lStack_238 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_1b8;
        *(undefined1 **)
         ((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             param_6;
        *(int *)((longlong)&local_248 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             iVar11 + iVar25 + 1;
        iVar11 = iStack_1b4;
        *(ulonglong *)
         ((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             uVar15;
        *(longlong *)
         ((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             local_158;
        *(undefined8 *)
         (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
             0x14f875705;
        unquant_energy_finalise(lVar20,iVar11,iVar30,pfVar14);
        if (local_150 != 0) {
          *(int *)((longlong)&lStack_210 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
               (int)param_1[5];
          *(undefined4 *)
           ((longlong)&lStack_218 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21
           ) = *(undefined4 *)((longlong)param_1 + 0x2c);
          *(longlong *)
           ((longlong)&lStack_220 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21
           ) = local_170;
          *(float **)
           ((longlong)&lStack_228 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21
           ) = local_148;
          *(float **)
           ((longlong)auStack_230 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21
           ) = local_120;
          *(float **)
           ((longlong)&lStack_238 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21
           ) = local_198;
          *(int *)((longlong)&local_240 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_1b0;
          *(int *)((longlong)&local_248 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iStack_1b4;
          *(int *)((longlong)&local_250 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iStack_1a4;
          *(int *)((longlong)&local_258 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_1b8;
          *(undefined8 *)
           (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
               0x14f87576d;
          anti_collapse(lVar20,lVar26,lVar28,iVar36);
        }
        iVar11 = iStack_18c;
        pfVar14 = local_198;
        if ((iStack_18c != 0) && (pfVar27 = local_198, 0 < local_1a0)) {
          for (; uVar37 != 0; uVar37 = uVar37 - 1) {
            *pfVar27 = -28.0;
            pfVar27 = pfVar27 + 1;
          }
        }
        *(int *)((longlong)&lStack_218 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = (int)param_1[5];
        uVar12 = *(undefined4 *)((longlong)param_1 + 0x14);
        *(int *)((longlong)&lStack_220 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iVar11;
        *(undefined4 *)
         ((longlong)&lStack_228 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
             = uVar12;
        iVar11 = local_1a8;
        *(int *)((longlong)auStack_230 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iVar36;
        *(int *)((longlong)&lStack_238 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iVar11;
        *(int *)((longlong)&local_240 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_17c;
        *(int *)((longlong)&local_248 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_1b8;
        *(int *)((longlong)&local_250 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_138;
        *(int *)((longlong)&local_258 +
                lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = iStack_1b4;
        *(undefined8 *)
         (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
             0x14f8757dd;
        FUN_14f875d6c(lVar20,lVar26,local_c0,pfVar14);
        uVar12 = local_180;
        iVar11 = iStack_1a4;
        lVar28 = 0;
        do {
          lVar26 = param_1[9];
          uVar33 = 0xf;
          if (0xf < (int)param_1[8]) {
            uVar33 = (int)param_1[8];
          }
          lVar19 = local_c0[lVar28];
          uVar1 = *(undefined4 *)((longlong)param_1 + 0x4c);
          uVar31 = 0xf;
          if (0xf < *(int *)((longlong)param_1 + 0x44)) {
            uVar31 = *(undefined4 *)((longlong)param_1 + 0x44);
          }
          *(int *)((longlong)&lStack_220 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
               (int)param_1[5];
          *(int *)((longlong)&lStack_228 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_188;
          *(undefined8 *)
           ((longlong)auStack_230 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21
           ) = *(undefined8 *)(lVar20 + 0x48);
          *(int *)((longlong)&lStack_238 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
               (int)param_1[10];
          *(undefined4 *)
           ((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
               = *(undefined4 *)((longlong)param_1 + 0x54);
          uVar2 = *(undefined4 *)(lVar20 + 0x30);
          *(int *)((longlong)&local_248 +
                  lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = (int)lVar26;
          *(undefined4 *)
           ((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
               = uVar1;
          *(undefined4 *)
           ((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21)
               = uVar2;
          *(undefined4 *)(param_1 + 8) = uVar33;
          *(undefined4 *)((longlong)param_1 + 0x44) = uVar31;
          *(undefined8 *)
           (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
               0x14f875864;
          comb_filter(lVar19,lVar19);
          iVar30 = local_184;
          if (iVar36 != 0) {
            iVar25 = *(int *)(lVar20 + 0x30);
            lVar26 = param_1[9];
            lVar9 = param_1[8];
            lVar19 = lVar19 + (longlong)*(int *)(lVar20 + 0x30) * 4;
            *(int *)((longlong)&lStack_220 +
                    lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
                 (int)param_1[5];
            *(int *)((longlong)&lStack_228 +
                    lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = local_188;
            *(undefined8 *)
             ((longlong)auStack_230 +
             lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
                 *(undefined8 *)(lVar20 + 0x48);
            lVar10 = param_1[10];
            *(undefined4 *)
             ((longlong)&lStack_238 +
             lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = uVar12;
            *(int *)((longlong)&local_240 +
                    lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = (int)lVar10;
            *(float *)((longlong)&local_248 +
                      lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = fVar39;
            *(int *)((longlong)&local_250 +
                    lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) = (int)lVar26;
            *(int *)((longlong)&local_258 +
                    lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
                 iVar11 - iVar25;
            *(undefined8 *)
             (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
                 0x14f8758c5;
            comb_filter(lVar19,lVar19,(int)lVar9,iVar30);
          }
          lVar26 = local_128;
          pfVar14 = local_198;
          lVar28 = lVar28 + 1;
        } while (lVar28 < local_130);
        *(int *)((longlong)param_1 + 0x44) = (int)param_1[8];
        *(int *)((longlong)param_1 + 0x4c) = (int)param_1[9];
        lVar20 = param_1[10];
        *(undefined4 *)(param_1 + 10) = uVar12;
        *(float *)(param_1 + 9) = fVar39;
        *(int *)((longlong)param_1 + 0x54) = (int)lVar20;
        *(int *)(param_1 + 8) = iVar30;
        if (iVar36 != 0) {
          *(undefined4 *)((longlong)param_1 + 0x54) = local_180;
          *(float *)((longlong)param_1 + 0x4c) = fVar39;
          *(int *)((longlong)param_1 + 0x44) = iVar30;
        }
        if (local_1b8 == 1) {
          sVar32 = local_128 * 4;
          pfVar27 = local_198 + local_128;
          *(undefined8 *)
           (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
               0x14f875938;
          memcpy(pfVar27,pfVar14,sVar32);
        }
        sVar32 = local_e8;
        pfVar27 = local_148;
        pfVar22 = pfVar27;
        if (local_1a8 == 0) {
          pvVar3 = (void *)(local_e8 + (longlong)pfVar14);
          *(undefined8 *)
           (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
               0x14f875958;
          memcpy(pfVar27,pvVar3,sVar32);
          *(undefined8 *)
           (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
               0x14f875967;
          memcpy((void *)(sVar32 + (longlong)pfVar14),pfVar14,sVar32);
          fVar39 = __real_3f800000;
          if ((int)param_1[7] < 10) {
            fVar39 = (float)(int)uStack_15c * __real_3a83126f;
          }
          if (0 < local_f0) {
            lVar20 = 0;
            do {
              lVar28 = lVar20 + local_f0;
              fVar38 = fVar39 + pfVar27[lVar28];
              if (pfVar14[lVar20] <= fVar39 + pfVar27[lVar28]) {
                fVar38 = pfVar14[lVar20];
              }
              lVar20 = lVar20 + 1;
              pfVar27[lVar28] = fVar38;
            } while (lVar20 < local_f0);
          }
        }
        else {
          pfVar16 = local_120;
          lVar20 = local_f0;
          if (0 < local_f0) {
            do {
              fVar39 = *pfVar16;
              if (*(float *)((longlong)pfVar16 - local_e8) <= *pfVar16) {
                fVar39 = *(float *)((longlong)pfVar16 - local_e8);
              }
              *pfVar16 = fVar39;
              lVar20 = lVar20 + -1;
              pfVar16 = pfVar16 + 1;
            } while (lVar20 != 0);
          }
        }
        do {
          iVar30 = local_17c;
          iVar11 = iStack_1a4;
          if (0 < local_98) {
            pfVar16 = pfVar22;
            lVar20 = local_98;
            do {
              *(undefined4 *)(((longlong)pfVar14 - (longlong)pfVar27) + (longlong)pfVar16) = 0;
              *pfVar16 = -28.0;
              *(undefined4 *)(((longlong)local_120 - (longlong)pfVar27) + (longlong)pfVar16) =
                   0xc1e00000;
              pfVar16 = pfVar16 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          if (local_e0 < lVar26) {
            pfVar16 = pfVar22 + local_e0;
            lVar20 = lVar26 - local_e0;
            do {
              *(undefined4 *)((longlong)pfVar16 + ((longlong)pfVar14 - (longlong)pfVar27)) = 0;
              *pfVar16 = -28.0;
              *(undefined4 *)((longlong)pfVar16 + ((longlong)local_120 - (longlong)pfVar27)) =
                   0xc1e00000;
              pfVar16 = pfVar16 + 1;
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
          }
          local_d8 = local_d8 + -1;
          pfVar22 = pfVar22 + lVar26;
        } while (local_d8 != 0);
        lVar20 = local_d0 + 0x10;
        *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_6 + 0x20);
        *(undefined4 *)
         ((longlong)&local_240 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             param_7;
        uVar12 = *(undefined4 *)((longlong)param_1 + 0x14);
        *(longlong **)
         ((longlong)&local_248 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             param_1 + 0xb;
        *(longlong *)
         ((longlong)&local_250 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             lVar20;
        lVar20 = local_c8;
        *(undefined4 *)
         ((longlong)&local_258 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21) =
             uVar12;
        *(undefined8 *)
         (auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21 + -8) =
             0x14f875ad3;
        FUN_14f8761e4(local_c0,lVar20,iVar11,iVar30);
        iVar11 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar11 == 0; iVar11 = iVar11 + -1) {
          }
        }
        iVar30 = *(int *)(param_6 + 0x18);
        *(undefined4 *)(param_1 + 7) = 0;
        if (iStack_19c < (iVar30 - iVar11) + -1) {
          uVar15 = 0xfffffffd;
          goto LAB_14f875b57;
        }
        puVar24 = auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21;
        if (*(int *)(param_6 + 0x30) != 0) {
          *(undefined4 *)(param_1 + 6) = 1;
          puVar24 = auStack_278 + lVar8 + lVar7 + lVar6 + lVar5 + lVar34 + lVar13 + lVar4 + lVar21;
        }
      }
      uVar15 = (longlong)param_5 / (longlong)*(int *)((longlong)param_1 + 0x14) & 0xffffffff;
      goto LAB_14f875b57;
    }
  }
  uVar15 = 0xffffffff;
LAB_14f875b57:
  *(undefined8 *)(puVar24 + -8) = 0x14f875b66;
  return uVar15;
}

// celt_decoder_get_size @ 14f875b9c

int celt_decoder_get_size(int param_1)

{
  longlong lVar1;
  
  lVar1 = opus_custom_mode_create(48000,0x3c0,0);
  return ((*(int *)(lVar1 + 4) + 0x818) * param_1 + *(int *)(lVar1 + 8) * 8) * 4 + 100;
}

// celt_decoder_init @ 14f875bdc

int celt_decoder_init(longlong *param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = opus_custom_mode_create(48000,0x3c0,0);
  if (param_3 < 3) {
    if (param_1 == (longlong *)0x0) {
      iVar2 = -7;
    }
    else {
      memset(param_1,0,
             (longlong)
             (int)(((*(int *)(lVar3 + 4) + 0x818) * param_3 + *(int *)(lVar3 + 8) * 8) * 4 + 100));
      *param_1 = lVar3;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar3 + 4);
      *(uint *)((longlong)param_1 + 0xc) = param_3;
      *(uint *)(param_1 + 2) = param_3;
      *(undefined8 *)((longlong)param_1 + 0x14) = 1;
      uVar1 = *(undefined4 *)(lVar3 + 0xc);
      *(uint *)((longlong)param_1 + 0x24) = (uint)(param_3 == 1);
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar1;
      *(undefined4 *)(param_1 + 4) = 1;
      uVar1 = opus_select_arch();
      *(undefined4 *)(param_1 + 5) = uVar1;
      opus_custom_decoder_ctl(param_1,0xfbc);
      iVar2 = resampling_factor(param_2);
      *(int *)((longlong)param_1 + 0x14) = iVar2;
      iVar2 = (iVar2 != 0) - 1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

// FUN_14f875cd0 @ 14f875cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_14f875cd0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_1018 [1440];
  undefined1 local_a78 [2600];
  undefined8 uStack_50;
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)local_18;
  uStack_50 = 0x14f875cfe;
  pitch_downsample(param_1,local_1018,0x800,param_2,param_3);
  pitch_search(local_a78,local_1018,0x530,0x26c,local_18,param_3);
  return 0x2d0 - local_18[0];
}

// FUN_14f875d6c @ 14f875d6c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f875d6c(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
                  undefined4 param_5,undefined4 param_6,int param_7,int param_8,int param_9,
                  int param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong lVar4;
  float fVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  size_t _Size;
  int iVar16;
  int iVar17;
  float *_Src;
  float *pfVar18;
  void *_Dst;
  undefined8 auStack_d0 [5];
  int aiStack_a8 [12];
  float local_78;
  int local_74;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  longlong local_58;
  longlong local_50;
  float *local_48;
  longlong *local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_78;
  local_68 = *(int *)(param_1 + 8);
  iVar14 = *(int *)(param_1 + 4);
  bVar3 = (byte)param_10 & 0x1f;
  fVar13 = (float)((int)*(float *)(param_1 + 0x30) << bVar3);
  _Size = (longlong)(int)fVar13 * 4;
  uVar8 = _Size + 0xf;
  if (uVar8 <= _Size) {
    uVar8 = 0xffffffffffffff0;
  }
  auStack_d0[0] = 0x14f875dfc;
  lVar4 = -(uVar8 & 0xfffffffffffffff0);
  iVar16 = 1 << ((byte)param_10 & 0x1f);
  _Src = (float *)((longlong)&local_78 + lVar4);
  iVar17 = 1;
  if (param_9 != 0) {
    iVar17 = iVar16;
  }
  fVar5 = *(float *)(param_1 + 0x30);
  local_70 = *(int *)(param_1 + 0x28);
  if (param_9 == 0) {
    fVar5 = fVar13;
    local_70 = *(int *)(param_1 + 0x28) - param_10;
  }
  local_78 = fVar5;
  local_74 = iVar14;
  local_6c = fVar13;
  local_5c = iVar16;
  local_58 = param_4;
  local_50 = param_2;
  local_48 = _Src;
  local_40 = param_3;
  if (param_8 == 2) {
    if (param_7 == 1) {
      *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x20) = param_12;
      *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_11;
      *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar16;
      *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 8) = param_6;
      *(undefined4 *)((longlong)aiStack_a8 + lVar4) = param_5;
      *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f875e9d;
      denormalise_bands(param_1,param_2,_Src,param_4);
      _Dst = (void *)(param_3[1] + (longlong)(local_74 / 2) * 4);
      *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f875ebe;
      memcpy(_Dst,_Src,_Size);
      fVar13 = local_78;
      iVar14 = 0 << bVar3;
      if (0 < iVar17) {
        do {
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          lVar11 = *param_3;
          *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_13;
          iVar16 = local_70;
          *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar17;
          *(int *)((longlong)aiStack_a8 + lVar4 + 8) = iVar16;
          *(int *)((longlong)aiStack_a8 + lVar4) = local_74;
          *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f875f04;
          clt_mdct_backward_c(param_1 + 0x50,_Dst,lVar11 + (longlong)((int)fVar13 * iVar14) * 4,
                              uVar2);
          iVar14 = iVar14 + 1;
          _Dst = (void *)((longlong)_Dst + 4);
        } while (iVar14 < iVar17);
      }
      iVar14 = 0;
      if (0 < iVar17) {
        do {
          uVar2 = *(undefined8 *)(param_1 + 0x48);
          lVar11 = param_3[1];
          *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_13;
          iVar16 = local_70;
          *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar17;
          *(int *)((longlong)aiStack_a8 + lVar4 + 8) = iVar16;
          *(int *)((longlong)aiStack_a8 + lVar4) = local_74;
          *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f875f57;
          clt_mdct_backward_c(param_1 + 0x50,_Src,lVar11 + (longlong)((int)fVar13 * iVar14) * 4,
                              uVar2);
          iVar14 = iVar14 + 1;
          _Src = _Src + 1;
        } while (iVar14 < iVar17);
      }
      goto LAB_14f87619c;
    }
  }
  else if ((param_8 == 1) && (param_7 == 2)) {
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x20) = param_12;
    lVar11 = *param_3;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_11;
    *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar16;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 8) = param_6;
    lVar1 = local_50;
    local_48 = (float *)(lVar11 + (longlong)(iVar14 / 2) * 4);
    *(undefined4 *)((longlong)aiStack_a8 + lVar4) = param_5;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f875fd8;
    denormalise_bands(param_1,lVar1,_Src,param_4);
    lVar1 = local_50;
    lVar11 = local_58;
    lVar9 = (longlong)local_68;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x20) = param_12;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_11;
    lVar12 = (longlong)(int)local_6c;
    *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = local_5c;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 8) = param_6;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4) = param_5;
    pfVar18 = local_48;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f876017;
    denormalise_bands(param_1,lVar1 + lVar12 * 4,pfVar18,lVar11 + lVar9 * 4);
    lVar11 = (longlong)(int)local_6c;
    if (0 < (int)local_6c) {
      pfVar10 = _Src;
      do {
        *pfVar10 = *(float *)(((longlong)pfVar18 - (longlong)_Src) + (longlong)pfVar10) *
                   __real_3f000000 + *pfVar10 * __real_3f000000;
        pfVar10 = pfVar10 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    plVar7 = local_40;
    fVar13 = local_78;
    iVar14 = 0;
    if (0 < iVar17) {
      do {
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        lVar11 = *plVar7;
        *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_13;
        iVar16 = local_70;
        *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar17;
        *(int *)((longlong)aiStack_a8 + lVar4 + 8) = iVar16;
        *(int *)((longlong)aiStack_a8 + lVar4) = local_74;
        *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8760a1;
        clt_mdct_backward_c(param_1 + 0x50,_Src,lVar11 + (longlong)((int)fVar13 * iVar14) * 4,uVar2)
        ;
        iVar14 = iVar14 + 1;
        _Src = _Src + 1;
      } while (iVar14 < iVar17);
    }
    goto LAB_14f87619c;
  }
  local_78 = 0.0;
  local_64 = 0;
  local_60 = 0;
  do {
    iVar14 = local_5c;
    fVar15 = local_78;
    lVar11 = local_58 + (longlong)local_64 * 4;
    lVar1 = local_50 + (longlong)local_60 * 4;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x20) = param_12;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_11;
    *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar14;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 8) = param_6;
    *(undefined4 *)((longlong)aiStack_a8 + lVar4) = param_5;
    *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f87610d;
    denormalise_bands(param_1,lVar1,_Src,lVar11);
    iVar14 = local_74;
    local_40 = (longlong *)((ulonglong)local_40 & 0xffffffff00000000);
    plVar7 = local_40;
    pfVar18 = _Src;
    if (0 < iVar17) {
      local_40._0_4_ = 0;
      iVar16 = (int)local_40;
      local_40 = plVar7;
      do {
        uVar2 = *(undefined8 *)(param_1 + 0x48);
        lVar11 = *param_3;
        *(undefined4 *)((longlong)aiStack_a8 + lVar4 + 0x18) = param_13;
        iVar6 = local_70;
        *(int *)((longlong)aiStack_a8 + lVar4 + 0x10) = iVar17;
        *(int *)((longlong)aiStack_a8 + lVar4 + 8) = iVar6;
        *(int *)((longlong)aiStack_a8 + lVar4) = iVar14;
        *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f876159;
        clt_mdct_backward_c(param_1 + 0x50,_Src,lVar11 + (longlong)((int)fVar5 * iVar16) * 4,uVar2);
        iVar16 = iVar16 + 1;
        _Src = _Src + 1;
        pfVar18 = local_48;
        fVar13 = local_6c;
        fVar15 = local_78;
      } while (iVar16 < iVar17);
    }
    local_78 = (float)((int)fVar15 + 1);
    param_3 = param_3 + 1;
    local_64 = local_64 + local_68;
    local_60 = local_60 + (int)fVar13;
    _Src = pfVar18;
  } while ((int)local_78 < param_8);
LAB_14f87619c:
  lVar11 = 0;
  do {
    lVar11 = lVar11 + 1;
  } while (lVar11 < param_8);
  *(undefined8 *)((longlong)auStack_d0 + lVar4) = 0x14f8761b9;
  return;
}

// FUN_14f8761e4 @ 14f8761e4

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f8761e4(longlong *param_1,longlong param_2,uint param_3,int param_4,int param_5,
                  float *param_6,float *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  float *pfVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_58 [32];
  float local_38 [2];
  longlong local_30;
  float *local_28;
  ulonglong local_20;
  
  fVar2 = __real_0da24260;
  puVar9 = auStack_58;
  local_20 = __security_cookie.value ^ (ulonglong)local_38;
  lVar8 = 0;
  lVar11 = (longlong)param_4;
  lVar10 = (longlong)(int)param_3;
  local_30 = param_2;
  if ((param_5 == 1) && (param_4 == 2)) {
    if (param_8 == 0) {
      pfVar5 = (float *)param_1[1];
      fVar1 = *param_6;
      fVar16 = *param_7;
      fVar13 = param_7[1];
      if (0 < (int)param_3) {
        lVar11 = *param_1 - (longlong)pfVar5;
        do {
          pfVar4 = (float *)(lVar11 + (longlong)pfVar5);
          fVar14 = *pfVar5;
          pfVar5 = pfVar5 + 1;
          fVar15 = *pfVar4 + fVar2 + fVar16;
          fVar13 = fVar14 + fVar2 + fVar13;
          fVar16 = fVar15 * fVar1;
          fVar14 = fVar13 * __real_38000000;
          *(float *)(param_2 + lVar8 * 8) = fVar15 * __real_38000000;
          fVar13 = fVar13 * fVar1;
          *(float *)(param_2 + 4 + lVar8 * 8) = fVar14;
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar10);
      }
      *param_7 = fVar16;
      param_7[1] = fVar13;
      goto LAB_14f87643b;
    }
LAB_14f8762d4:
    celt_fatal("assertion failed: accum==0","../../../third_party/opus/src/celt/celt_decoder.c",
               0x117);
  }
  else if (param_8 != 0) goto LAB_14f8762d4;
  fVar1 = __real_38000000;
  fVar2 = __real_0da24260;
  uVar6 = lVar10 * 4 + 0xf;
  if (uVar6 <= (ulonglong)(lVar10 * 4)) {
    uVar6 = 0xffffffffffffff0;
  }
  puVar9 = auStack_58 + -(uVar6 & 0xfffffffffffffff0);
  fVar16 = *param_6;
  local_28 = (float *)((longlong)local_38 + -(uVar6 & 0xfffffffffffffff0));
  uVar6 = (longlong)(int)param_3 / (longlong)param_5 & 0xffffffff;
  local_38[0] = (float)((longlong)(int)param_3 / (longlong)param_5);
  local_30 = local_30 - (longlong)param_7;
  lVar12 = lVar8;
  do {
    pfVar5 = (float *)(local_30 + (longlong)param_7);
    fVar13 = *param_7;
    pfVar4 = (float *)param_1[lVar8];
    fVar14 = (float)uVar6;
    if (param_5 < 2) {
      pfVar7 = pfVar5;
      uVar6 = (ulonglong)param_3;
      if (0 < (int)param_3) {
        do {
          fVar14 = *pfVar4;
          pfVar4 = pfVar4 + 1;
          fVar14 = fVar14 + fVar2 + fVar13;
          fVar13 = fVar14 * fVar16;
          *pfVar7 = fVar14 * fVar1;
          uVar6 = uVar6 - 1;
          pfVar7 = pfVar7 + lVar11;
          fVar14 = local_38[0];
        } while (uVar6 != 0);
      }
      *param_7 = fVar13;
      if ((int)lVar12 != 0) goto LAB_14f8763ec;
    }
    else {
      if (0 < (int)param_3) {
        lVar3 = (longlong)pfVar4 - (longlong)local_28;
        pfVar4 = local_28;
        lVar12 = lVar10;
        do {
          fVar13 = *(float *)(lVar3 + (longlong)pfVar4) + fVar2 + fVar13;
          *pfVar4 = fVar13;
          pfVar4 = pfVar4 + 1;
          fVar13 = fVar13 * fVar16;
          lVar12 = lVar12 + -1;
          fVar14 = local_38[0];
        } while (lVar12 != 0);
      }
      *param_7 = fVar13;
      lVar12 = 1;
LAB_14f8763ec:
      if (0 < (int)fVar14) {
        uVar6 = (ulonglong)(uint)local_38[0];
        pfVar4 = local_28;
        do {
          fVar13 = *pfVar4;
          pfVar4 = pfVar4 + param_5;
          *pfVar5 = fVar13 * fVar1;
          pfVar5 = pfVar5 + lVar11;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    lVar8 = lVar8 + 1;
    param_7 = param_7 + 1;
    uVar6 = (ulonglong)(uint)local_38[0];
  } while (lVar8 < lVar11);
LAB_14f87643b:
  *(undefined8 *)(puVar9 + -8) = 0x14f876447;
  return;
}

// opus_custom_decoder_ctl @ 14f876468

undefined8 opus_custom_decoder_ctl(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint local_res18;
  
  local_res18 = (uint)param_3;
  if (param_2 < 0x2718) {
    if (param_2 == 0x2717) {
      if (param_3 != (longlong *)0x0) {
        *(int *)param_3 = (int)param_1[6];
        *(undefined4 *)(param_1 + 6) = 0;
        goto LAB_14f876658;
      }
    }
    else if (param_2 == 0xfbb) {
      if (param_3 != (longlong *)0x0) {
        iVar3 = (int)param_1[1] / *(int *)((longlong)param_1 + 0x14);
        goto LAB_14f8765c7;
      }
    }
    else {
      if (param_2 == 0xfbc) {
        iVar3 = *(int *)((longlong)param_1 + 0xc);
        iVar1 = *(int *)(*param_1 + 8);
        lVar5 = (longlong)(iVar1 * 2);
        puVar4 = (undefined4 *)
                 ((longlong)param_1 +
                 ((longlong)(iVar3 * 0x18) + 0x18 + lVar5 + ((int)param_1[1] + 0x800) * iVar3) * 4);
        memset((void *)((longlong)param_1 + 0x2c),0,
               (longlong)(((*(int *)(*param_1 + 4) + 0x818) * iVar3 + iVar1 * 8) * 4 + 100) - 0x2c);
        iVar3 = 0;
        if (0 < *(int *)(*param_1 + 8) * 2) {
          do {
            puVar4[lVar5] = 0xc1e00000;
            iVar3 = iVar3 + 1;
            *puVar4 = 0xc1e00000;
            puVar4 = puVar4 + 1;
          } while (iVar3 < *(int *)(*param_1 + 8) * 2);
        }
        *(undefined4 *)((longlong)param_1 + 0x3c) = 1;
        goto LAB_14f876658;
      }
      if (param_2 == 0xfbf) {
        if (param_3 != (longlong *)0x0) {
          iVar3 = *(int *)((longlong)param_1 + 0x2c);
LAB_14f8765c7:
          *(int *)param_3 = iVar3;
          goto LAB_14f876658;
        }
      }
      else if (param_2 == 0xfc1) {
        if (param_3 != (longlong *)0x0) {
          iVar3 = (int)param_1[8];
          goto LAB_14f8765c7;
        }
      }
      else if (param_2 == 0xfce) {
        if (local_res18 < 2) {
          *(uint *)((longlong)param_1 + 0x24) = local_res18;
          goto LAB_14f876658;
        }
      }
      else {
        if (param_2 != 0xfcf) {
          return 0xfffffffb;
        }
        if (param_3 != (longlong *)0x0) {
          iVar3 = *(int *)((longlong)param_1 + 0x24);
          goto LAB_14f8765c7;
        }
      }
    }
LAB_14f87665c:
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 == 0x2718) {
      if (1 < local_res18 - 1) goto LAB_14f87665c;
      *(uint *)(param_1 + 2) = local_res18;
    }
    else if (param_2 == 0x271a) {
      if (((int)local_res18 < 0) || (*(int *)(*param_1 + 8) <= (int)local_res18))
      goto LAB_14f87665c;
      *(uint *)(param_1 + 3) = local_res18;
    }
    else if (param_2 == 0x271c) {
      if (((int)local_res18 < 1) || (*(int *)(*param_1 + 8) < (int)local_res18)) goto LAB_14f87665c;
      *(uint *)((longlong)param_1 + 0x1c) = local_res18;
    }
    else if (param_2 == 0x271f) {
      if (param_3 == (longlong *)0x0) goto LAB_14f87665c;
      *param_3 = *param_1;
    }
    else {
      if (param_2 != 0x2720) {
        return 0xfffffffb;
      }
      *(uint *)(param_1 + 4) = local_res18;
    }
LAB_14f876658:
    uVar2 = 0;
  }
  return uVar2;
}

// FUN_14f876670 @ 14f876670

void FUN_14f876670(int param_1,int param_2,int param_3,longlong param_4,int param_5,longlong param_6
                  )

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint local_res8;
  
  lVar8 = (longlong)param_2;
  lVar4 = (longlong)param_1;
  iVar7 = 0x1f;
  if (*(uint *)(param_6 + 0x20) != 0) {
    for (; *(uint *)(param_6 + 0x20) >> iVar7 == 0; iVar7 = iVar7 + -1) {
    }
  }
  iVar7 = *(int *)(param_6 + 0x18) - iVar7;
  uVar5 = *(int *)(param_6 + 8) * 8;
  iVar6 = iVar7 + -1;
  uVar1 = 0;
  iVar2 = (-(uint)(param_3 != 0) & 0xfffffffe) + 4;
  if ((param_5 < 1) || (uVar10 = 1, uVar5 < (uint)(iVar7 + iVar2))) {
    uVar10 = 0;
  }
  local_res8 = 0;
  uVar3 = 0;
  if (lVar4 < lVar8) {
    lVar9 = lVar4;
    uVar3 = uVar1;
    do {
      if ((uint)(iVar2 + iVar6) <= uVar5 - uVar10) {
        uVar1 = ec_dec_bit_logp(param_6);
        uVar1 = local_res8 ^ uVar1;
        iVar7 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar6 = (*(int *)(param_6 + 0x18) - iVar7) + -1;
        uVar3 = uVar3 | uVar1;
        local_res8 = uVar1;
      }
      *(uint *)(param_4 + lVar9 * 4) = uVar1;
      iVar2 = 5 - (uint)(param_3 != 0);
      lVar9 = lVar9 + 1;
    } while (lVar9 < lVar8);
  }
  uVar1 = 0;
  if ((uVar10 != 0) &&
     (lVar9 = (longlong)(int)(uVar3 + param_3 * 4) + (longlong)param_5 * 8, uVar1 = 0,
     (&tf_select_table)[lVar9] != (&DAT_15350e5ea)[lVar9])) {
    uVar1 = ec_dec_bit_logp(param_6,1);
  }
  if (lVar4 < lVar8) {
    do {
      *(int *)(param_4 + lVar4 * 4) =
           (int)(char)(&tf_select_table)
                      [(longlong)(int)(*(int *)(param_4 + lVar4 * 4) + (uVar1 + param_3 * 2) * 2) +
                       (longlong)param_5 * 8];
      lVar4 = lVar4 + 1;
    } while (lVar4 < lVar8);
  }
  return;
}

// validate_celt_decoder @ 14f8767e8

void validate_celt_decoder(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = opus_custom_mode_create(48000,0x3c0,0);
  if (*param_1 != lVar2) {
    celt_fatal("assertion failed: st->mode == opus_custom_mode_create(48000, 960, NULL)",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x76);
  }
  if ((int)param_1[1] != 0x78) {
    celt_fatal("assertion failed: st->overlap == 120",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x77);
  }
  if (1 < *(int *)((longlong)param_1 + 0xc) - 1U) {
    celt_fatal("assertion failed: st->channels == 1 || st->channels == 2",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x79);
  }
  if (1 < (int)param_1[2] - 1U) {
    celt_fatal("assertion failed: st->stream_channels == 1 || st->stream_channels == 2",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x7a);
  }
  if (*(int *)((longlong)param_1 + 0x14) < 1) {
    celt_fatal("assertion failed: st->downsample > 0",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x7b);
  }
  iVar3 = (int)param_1[3];
  if ((iVar3 != 0) && (iVar3 != 0x11)) {
    celt_fatal("assertion failed: st->start == 0 || st->start == 17",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x7c);
    iVar3 = (int)param_1[3];
  }
  iVar1 = *(int *)((longlong)param_1 + 0x1c);
  if (iVar1 <= iVar3) {
    celt_fatal("assertion failed: st->start < st->end",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x7d);
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
  }
  if (0x15 < iVar1) {
    celt_fatal("assertion failed: st->end <= 21","../../../third_party/opus/src/celt/celt_decoder.c"
               ,0x7e);
  }
  iVar3 = (int)param_1[5];
  if (iVar3 < 0) {
    celt_fatal("assertion failed: st->arch >= 0","../../../third_party/opus/src/celt/celt_decoder.c"
               ,0x80);
    iVar3 = (int)param_1[5];
  }
  if (7 < iVar3) {
    celt_fatal("assertion failed: st->arch <= OPUS_ARCHMASK",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x81);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if (0x2d0 < iVar3) {
    celt_fatal("assertion failed: st->last_pitch_index <= PLC_PITCH_LAG_MAX",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x83);
    iVar3 = *(int *)((longlong)param_1 + 0x34);
  }
  if ((iVar3 < 100) && (iVar3 != 0)) {
    celt_fatal("assertion failed: st->last_pitch_index >= PLC_PITCH_LAG_MIN || st->last_pitch_index == 0"
               ,"../../../third_party/opus/src/celt/celt_decoder.c",0x84);
  }
  iVar3 = (int)param_1[8];
  if (0x3ff < iVar3) {
    celt_fatal("assertion failed: st->postfilter_period < MAX_PERIOD",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x85);
    iVar3 = (int)param_1[8];
  }
  if ((iVar3 < 0xf) && (iVar3 != 0)) {
    celt_fatal("assertion failed: st->postfilter_period >= COMBFILTER_MINPERIOD || st->postfilter_period == 0"
               ,"../../../third_party/opus/src/celt/celt_decoder.c",0x86);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x44);
  if (0x3ff < iVar3) {
    celt_fatal("assertion failed: st->postfilter_period_old < MAX_PERIOD",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x87);
    iVar3 = *(int *)((longlong)param_1 + 0x44);
  }
  if ((iVar3 < 0xf) && (iVar3 != 0)) {
    celt_fatal("assertion failed: st->postfilter_period_old >= COMBFILTER_MINPERIOD || st->postfilter_period_old == 0"
               ,"../../../third_party/opus/src/celt/celt_decoder.c",0x88);
  }
  iVar3 = (int)param_1[10];
  if (2 < iVar3) {
    celt_fatal("assertion failed: st->postfilter_tapset <= 2",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x89);
    iVar3 = (int)param_1[10];
  }
  if (iVar3 < 0) {
    celt_fatal("assertion failed: st->postfilter_tapset >= 0",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x8a);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x54);
  if (2 < iVar3) {
    celt_fatal("assertion failed: st->postfilter_tapset_old <= 2",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x8b);
    iVar3 = *(int *)((longlong)param_1 + 0x54);
  }
  if (iVar3 < 0) {
    celt_fatal("assertion failed: st->postfilter_tapset_old >= 0",
               "../../../third_party/opus/src/celt/celt_decoder.c",0x8c);
  }
  return;
}

