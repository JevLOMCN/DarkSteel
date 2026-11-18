// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 14

// FUN_14f86ae40 @ 14f86ae40

int FUN_14f86ae40(longlong param_1,longlong param_2,longlong param_3,int param_4,byte param_5,
                 int param_6,int param_7,int *param_8,float *param_9,float param_10,int param_11,
                 float param_12,int param_13)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar17 = 0.0;
  fVar16 = __real_40800000;
  if ((63999 < param_13) && (fVar16 = __real_40a00000, param_13 < 80000)) {
    fVar16 = (float)(param_13 + -64000 >> 10) * __real_3d800000 + __real_40800000;
  }
  if (param_6 == 2) {
    fVar13 = 0.0;
    lVar5 = 0;
    do {
      lVar1 = lVar5 + 2;
      iVar2 = (int)*(short *)(lVar5 + *(longlong *)(param_1 + 0x20));
      iVar6 = iVar2 << (param_5 & 0x1f);
      fVar8 = (float)celt_inner_prod_sse(param_2 + (longlong)iVar6 * 4,
                                         param_2 + (longlong)(iVar6 + param_7) * 4,
                                         *(short *)(*(longlong *)(param_1 + 0x20) + lVar1) - iVar2
                                         << (param_5 & 0x1f));
      fVar13 = fVar8 + fVar13;
      lVar5 = lVar1;
    } while (lVar1 < 0x10);
    lVar5 = 8;
    uVar4 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar14 = (uint)((ulonglong)__xmm_7fffffffffffffff7fffffffffffffff >> 0x20);
    fVar8 = (float)(double)CONCAT44((uint)((ulonglong)(double)(fVar13 * __real_3e000000) >> 0x20) &
                                    uVar14,SUB84((double)(fVar13 * __real_3e000000),0) & uVar4);
    fVar13 = __real_3f800000;
    if (fVar8 <= __real_3f800000) {
      fVar13 = fVar8;
    }
    fVar8 = fVar13;
    if (8 < (longlong)param_11) {
      do {
        iVar2 = (int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar5 * 2);
        iVar6 = iVar2 << (param_5 & 0x1f);
        fVar9 = (float)celt_inner_prod_sse(param_2 + (longlong)iVar6 * 4,
                                           param_2 + (longlong)(iVar6 + param_7) * 4,
                                           *(short *)(*(longlong *)(param_1 + 0x20) + 2 + lVar5 * 2)
                                           - iVar2 << (param_5 & 0x1f));
        fVar9 = (float)(double)CONCAT44((uint)((ulonglong)(double)fVar9 >> 0x20) & uVar14,
                                        SUB84((double)fVar9,0) & uVar4);
        if (fVar9 <= fVar8) {
          fVar8 = fVar9;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < param_11);
    }
    fVar9 = __real_3f8020c5;
    fVar11 = (float)(double)CONCAT44((uint)((ulonglong)(double)fVar8 >> 0x20) & uVar14,
                                     SUB84((double)fVar8,0) & uVar4);
    fVar8 = __real_3f800000;
    if (fVar11 <= __real_3f800000) {
      fVar8 = fVar11;
    }
    dVar10 = log((double)(__real_3f8020c5 - fVar13 * fVar13));
    fVar11 = *param_9 + __real_3e800000;
    fVar15 = (float)(dVar10 * __real_3ff71547652b82fe) * __real_3f000000;
    fVar12 = (float)(dVar10 * __real_3ff71547652b82fe) * __real_3f400000;
    fVar13 = __real_c0800000;
    if (__real_c0800000 <= fVar12) {
      fVar13 = fVar12;
    }
    fVar16 = fVar16 + fVar13;
    dVar10 = log((double)(fVar9 - fVar8 * fVar8));
    if (fVar15 <= (float)(dVar10 * __real_3ff71547652b82fe)) {
      fVar15 = (float)(dVar10 * __real_3ff71547652b82fe);
    }
    fVar13 = (float)((uint)(fVar15 * __real_3f000000) ^ __xmm_80000000800000008000000080000000);
    if (fVar13 <= fVar11) {
      fVar11 = fVar13;
    }
    *param_9 = fVar11;
  }
  uVar4 = param_4 - 1;
  iVar2 = 0;
  do {
    if (0 < (int)uVar4) {
      iVar6 = -param_4;
      pfVar7 = (float *)(param_3 + (longlong)(*(int *)(param_1 + 8) * iVar2) * 4);
      uVar3 = (ulonglong)uVar4;
      do {
        iVar6 = iVar6 + 2;
        fVar13 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        fVar17 = fVar17 + (float)iVar6 * fVar13;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < param_6);
  fVar13 = (fVar17 / (float)(int)(uVar4 * param_6) + __real_3f800000) / __real_40c00000;
  fVar17 = __real_40000000;
  if (fVar13 <= __real_40000000) {
    fVar17 = fVar13;
  }
  if (fVar17 < __real_c0000000) {
    fVar17 = __real_c0000000;
  }
  fVar16 = ((fVar16 - fVar17) - param_12) - (param_10 + param_10);
  if (*param_8 != 0) {
    fVar13 = (float)param_8[2] + __real_3d4ccccd + (float)param_8[2] + __real_3d4ccccd;
    fVar17 = __real_40000000;
    if (fVar13 <= __real_40000000) {
      fVar17 = fVar13;
    }
    fVar13 = __real_c0000000;
    if (__real_c0000000 <= fVar17) {
      fVar13 = fVar17;
    }
    fVar16 = fVar16 - fVar13;
  }
  dVar10 = floor((double)(fVar16 + __real_3f000000));
  iVar2 = (int)dVar10;
  if (10 < iVar2) {
    iVar2 = 10;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}

// celt_encode_with_ec @ 14f86b20c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int celt_encode_with_ec(undefined8 *param_1,float *param_2,int param_3,undefined8 param_4,
                       int param_5,undefined1 *param_6)

{
  undefined8 *puVar1;
  longlong lVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  longlong lVar19;
  float fVar20;
  int *piVar21;
  longlong lVar22;
  void *_Src;
  undefined4 *puVar23;
  undefined4 uVar24;
  int iVar25;
  undefined4 uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  short *psVar30;
  float *pfVar31;
  float *pfVar32;
  undefined4 *puVar33;
  byte bVar34;
  byte bVar35;
  int iVar36;
  int iVar37;
  ulonglong uVar38;
  longlong lVar39;
  ulonglong uVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  int iVar44;
  longlong lVar45;
  int iVar46;
  uint uVar47;
  undefined1 *puVar48;
  undefined8 *puVar49;
  int iVar50;
  uint uVar51;
  float fVar52;
  int iVar53;
  int *piVar54;
  void *pvVar55;
  longlong lVar56;
  size_t _Size;
  ulonglong uVar57;
  void *pvVar58;
  ulonglong uVar59;
  uint uVar60;
  uint uVar61;
  longlong lVar62;
  int iVar63;
  uint *puVar64;
  bool bVar65;
  float fVar66;
  undefined4 uVar67;
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  double dVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  undefined8 uStack_330;
  undefined1 auStack_328 [32];
  float afStack_308 [2];
  longlong lStack_300;
  float local_2f8 [2];
  longlong local_2f0;
  float local_2e8 [2];
  longlong local_2e0;
  float local_2d8 [2];
  longlong local_2d0;
  longlong local_2c8;
  float local_2c0 [2];
  uint local_2b8 [2];
  longlong local_2b0;
  float local_2a8 [2];
  undefined8 local_2a0;
  longlong local_298 [2];
  longlong local_288;
  undefined4 auStack_280 [6];
  float local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int iStack_254;
  int local_250;
  uint uStack_24c;
  int local_248;
  int *local_240;
  int local_238;
  int local_234;
  uint local_230;
  int iStack_22c;
  uint local_228;
  int iStack_224;
  ulonglong local_220;
  int local_218;
  float fStack_214;
  int local_210;
  int iStack_20c;
  int local_208;
  uint uStack_204;
  ulonglong local_200;
  float *local_1f8;
  void *local_1f0;
  int local_1e8 [2];
  longlong local_1e0;
  float *local_1d8;
  void *local_1d0;
  undefined4 *local_1c8;
  int local_1c0;
  uint local_1bc;
  float local_1b8 [2];
  ulonglong local_1b0;
  undefined4 local_1a8;
  int local_1a4;
  int local_1a0;
  void *local_198;
  float *local_190;
  int local_188;
  short *local_180;
  undefined4 local_178;
  int local_174;
  undefined4 local_170;
  undefined8 *local_168;
  int local_160;
  ulonglong local_158;
  undefined4 local_150 [2];
  int *local_148;
  int *local_140;
  longlong local_138;
  undefined4 *local_130;
  float *local_128;
  longlong local_120;
  undefined4 *local_118;
  undefined1 local_110 [56];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)&local_268;
  local_1b8[0] = 0.0;
  iVar63 = 0;
  local_168 = param_1;
  local_248 = *(int *)(param_1 + 1);
  fVar76 = 0.0;
  local_240 = (int *)*param_1;
  local_268 = *(float *)((longlong)param_1 + 0xc);
  fVar74 = 0.0;
  local_1bc = 0;
  local_220 = local_220 & 0xffffffff00000000;
  fVar77 = 0.0;
  fVar75 = 0.0;
  iVar53 = local_240[1];
  local_1e8[0] = 0;
  local_180 = *(short **)(local_240 + 8);
  local_25c = *(int *)((longlong)param_1 + 0x24);
  local_258 = *(int *)(param_1 + 5);
  fStack_214 = 0.0;
  local_1d8 = param_2;
  local_260 = 0xf;
  local_178 = 0;
  local_160 = 0;
  iStack_224 = 0;
  iStack_22c = local_240[2];
  if ((1 < param_5) && (param_2 != (float *)0x0)) {
    param_3 = param_3 * *(int *)(param_1 + 4);
    iVar50 = local_240[10];
    local_264 = 0;
    iVar36 = iVar63;
    if (-1 < iVar50) {
      do {
        if (local_240[0xc] << ((byte)iVar36 & 0x1f) == param_3) break;
        iVar36 = iVar36 + 1;
      } while (iVar36 <= iVar50);
      local_264 = iVar36;
    }
    if (local_264 <= iVar50) {
      local_228 = 1 << ((byte)local_264 & 0x1f);
      local_234 = local_240[0xc] * local_228;
      local_190 = (float *)((longlong)param_1 + ((longlong)(iVar53 * local_248) + 0x3f) * 4);
      local_1c8 = (undefined4 *)
                  ((longlong)param_1 + ((longlong)((iVar53 + 0x400) * local_248) + 0x3f) * 4);
      local_120 = (longlong)(local_240[2] * local_248);
      local_158 = local_120 * 4;
      local_128 = (float *)(local_1c8 + local_120);
      local_118 = local_1c8 + local_120 * 2;
      local_130 = local_1c8 + local_120 * 2 + local_120;
      if (param_6 == (undefined1 *)0x0) {
        uStack_24c = 1;
        local_188 = 1;
      }
      else {
        uStack_330 = 0x14f86b42d;
        local_188 = ec_tell_frac(param_6);
        iVar63 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar63 == 0; iVar63 = iVar63 + -1) {
          }
        }
        uStack_24c = (*(int *)(param_6 + 0x18) - iVar63) - 1;
        iVar63 = (*(int *)(param_6 + 0x18) - iVar63) + 3 >> 3;
      }
      uVar47 = uStack_24c;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        uStack_330 = 0x14f86b470;
        celt_fatal("assertion failed: st->signalling==0",
                   "../../../third_party/opus/src/celt/celt_encoder.c",0x60b);
      }
      local_250 = 0x4fb;
      if (param_5 < 0x4fb) {
        local_250 = param_5;
      }
      iVar50 = local_250 - iVar63;
      local_218 = iVar50;
      if ((*(int *)(param_1 + 6) == 0) ||
         (iVar36 = *(int *)((longlong)param_1 + 0x2c), iVar36 == -1)) {
        iVar36 = *(int *)((longlong)param_1 + 0x2c);
        iStack_20c = 0;
        if (iVar36 != -1) {
          iVar46 = iVar36 * param_3 + uVar47;
          if ((int)uVar47 < 2) {
            iVar46 = iVar36 * param_3;
          }
          iVar44 = (iVar46 + *local_240 * 4) / (*local_240 << 3) -
                   (uint)(*(int *)((longlong)param_1 + 0x34) != 0);
          iVar46 = local_250;
          if (iVar44 <= local_250) {
            iVar46 = iVar44;
          }
          if (iVar46 < 2) {
            local_250 = 2;
          }
          else {
            if (iVar44 <= local_250) {
              local_250 = iVar44;
            }
          }
        }
        iStack_254 = local_250 - iVar63;
      }
      else {
        iStack_20c = (iVar36 * param_3 + (*local_240 >> 4)) / (*local_240 >> 3);
        iStack_254 = iStack_20c >> 6;
      }
      iVar46 = local_250;
      local_1c0 = 3 - local_264;
      iVar44 = ((400 >> ((byte)local_264 & 0x1f)) + -0x32) * ((int)local_268 * 0x28 + 0x14);
      local_208 = (local_250 * 400 >> ((byte)(3 - local_264) & 0x1f)) - iVar44;
      if (iVar36 != -1) {
        iVar36 = iVar36 - iVar44;
        if (iVar36 <= local_208) {
          local_208 = iVar36;
        }
      }
      if (param_6 == (undefined1 *)0x0) {
        uStack_330 = 0x14f86b5a2;
        ec_enc_init(local_110,param_4,local_250);
        param_6 = local_110;
      }
      if ((0 < iStack_20c) && (iVar36 = 0, *(int *)(param_1 + 7) != 0)) {
        iVar44 = iStack_20c * 2 - *(int *)((longlong)param_1 + 0xd4) >> 6;
        if (uVar47 == 1) {
          iVar36 = 2;
        }
        iVar25 = iVar44;
        if (iVar44 < iVar36) {
          iVar25 = iVar36;
        }
        iVar37 = iVar50;
        if ((iVar25 < iVar50) && (iVar37 = iVar36, iVar36 <= iVar44)) {
          iVar37 = iVar44;
        }
        if (iVar37 < iVar50) {
          iVar46 = iVar37 + iVar63;
          uStack_330 = 0x14f86b614;
          local_250 = iVar46;
          local_218 = iVar37;
          ec_enc_shrink(param_6,iVar46);
        }
      }
      fVar20 = __real_3f800000;
      uVar51 = iVar46 << 3;
      local_230 = uVar51;
      local_238 = local_240[3];
      if (local_258 <= local_240[3]) {
        local_238 = local_258;
      }
      local_210 = local_234 + iVar53;
      uVar38 = (longlong)((local_234 + iVar53) * local_248) * 4;
      uVar27 = uVar38 + 0xf;
      if (uVar27 <= uVar38) {
        uVar27 = 0xffffffffffffff0;
      }
      uStack_330 = 0x14f86b661;
      lVar6 = -(uVar27 & 0xfffffffffffffff0);
      fVar66 = 0.0;
      fVar73 = 0.0;
      local_1e0 = (longlong)&local_268 + lVar6;
      uVar27 = (longlong)((local_234 - iVar53) * (int)local_268) / (longlong)*(int *)(param_1 + 4);
      iVar50 = (int)uVar27;
      fVar52 = 0.0;
      if (0 < iVar50) {
        uVar38 = uVar27 & 0xffffffff;
        pfVar31 = local_1d8;
        do {
          if (fVar66 <= *pfVar31) {
            fVar66 = *pfVar31;
          }
          if (*pfVar31 <= fVar73) {
            fVar73 = *pfVar31;
          }
          pfVar31 = pfVar31 + 1;
          uVar38 = uVar38 - 1;
          fVar52 = fVar73;
        } while (uVar38 != 0);
      }
      if (fVar66 <= (float)((uint)fVar52 ^ __xmm_80000000800000008000000080000000)) {
        fVar66 = (float)((uint)fVar52 ^ __xmm_80000000800000008000000080000000);
      }
      fVar73 = *(float *)((longlong)param_1 + 0xe4);
      if (*(float *)((longlong)param_1 + 0xe4) <= fVar66) {
        fVar73 = 0.0;
        fVar66 = 0.0;
        fVar52 = 0.0;
        if (0 < iVar50) {
          uVar27 = uVar27 & 0xffffffff;
          pfVar31 = local_1d8;
          do {
            if (fVar73 <= *pfVar31) {
              fVar73 = *pfVar31;
            }
            if (*pfVar31 <= fVar66) {
              fVar66 = *pfVar31;
            }
            pfVar31 = pfVar31 + 1;
            uVar27 = uVar27 - 1;
            fVar52 = fVar66;
          } while (uVar27 != 0);
        }
        if (fVar73 <= (float)((uint)fVar52 ^ __xmm_80000000800000008000000080000000)) {
          fVar73 = (float)((uint)fVar52 ^ __xmm_80000000800000008000000080000000);
        }
      }
      fVar66 = 0.0;
      fVar52 = 0.0;
      pfVar31 = local_1d8 + iVar50;
      uVar27 = (longlong)(iVar53 * (int)local_268) / (longlong)*(int *)(param_1 + 4);
      fVar69 = 0.0;
      if (0 < (int)uVar27) {
        uVar27 = uVar27 & 0xffffffff;
        do {
          if (fVar66 <= *pfVar31) {
            fVar66 = *pfVar31;
          }
          if (*pfVar31 <= fVar52) {
            fVar52 = *pfVar31;
          }
          pfVar31 = pfVar31 + 1;
          uVar27 = uVar27 - 1;
          fVar69 = fVar52;
        } while (uVar27 != 0);
      }
      if (fVar66 <= (float)((uint)fVar69 ^ __xmm_80000000800000008000000080000000)) {
        fVar66 = (float)((uint)fVar69 ^ __xmm_80000000800000008000000080000000);
      }
      if (fVar73 <= fVar66) {
        fVar73 = fVar66;
      }
      *(float *)((longlong)param_1 + 0xe4) = fVar66;
      bVar65 = fVar73 <= fVar20 / (float)(1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f));
      uStack_204 = (uint)bVar65;
      if (uVar47 == 1) {
        *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86b77d;
        ec_enc_bit_logp(param_6,bVar65,0xf);
      }
      else {
        uStack_204 = 0;
      }
      if (uStack_204 != 0) {
        if (0 < iStack_20c) {
          local_218 = 2;
          iVar50 = iVar63 + 2;
          if (iVar46 < iVar63 + 2) {
            iVar50 = iVar46;
          }
          uVar51 = iVar50 << 3;
          iStack_254 = iVar50;
          local_250 = iVar50;
          local_230 = uVar51;
          *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86b7c0;
          ec_enc_shrink(param_6,iVar50);
        }
        iVar63 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar63 == 0; iVar63 = iVar63 + -1) {
          }
        }
        *(uint *)(param_6 + 0x18) = iVar63 + 1 + uVar51;
        uStack_24c = uVar51;
      }
      pfVar31 = local_1d8;
      iVar50 = 0;
      piVar54 = local_240 + 4;
      iVar63 = iVar50;
      do {
        lVar29 = local_1e0;
        iVar36 = local_248;
        if ((*(int *)((longlong)param_1 + 0x14) == 0) || (uVar67 = 1, fVar73 <= __real_47800000)) {
          uVar67 = 0;
        }
        *(undefined4 *)((longlong)&local_2f0 + lVar6) = uVar67;
        iVar46 = local_234;
        *(longlong *)((longlong)local_2f8 + lVar6) = (longlong)param_1 + (longlong)iVar50 * 4 + 0xc4
        ;
        *(int **)((longlong)&lStack_300 + lVar6) = piVar54;
        *(undefined4 *)((longlong)afStack_308 + lVar6) = *(undefined4 *)(param_1 + 4);
        *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86b84b;
        celt_preemphasis(pfVar31 + iVar50,lVar29 + ((longlong)iVar63 + (longlong)iVar53) * 4,iVar46,
                         iVar36);
        pfVar32 = local_190;
        lVar29 = local_1e0;
        iVar25 = local_210;
        iVar44 = local_218;
        iVar46 = local_248;
        uVar47 = uStack_24c;
        iVar36 = local_25c;
        uVar67 = 1;
        iVar50 = iVar50 + 1;
        iVar63 = iVar63 + local_210;
      } while (iVar50 < local_248);
      local_1a8 = 5;
      if ((((((*(int *)((longlong)param_1 + 0x44) == 0) || (local_218 < 4)) &&
            (local_218 <= (int)local_268 * 0xc)) || ((local_25c != 0 || (uStack_204 != 0)))) ||
          (*(int *)(param_1 + 3) != 0)) || (*(int *)((longlong)param_1 + 0x1c) < 5)) {
        uVar67 = 0;
      }
      uVar26 = *(undefined4 *)(param_1 + 0xd);
      *(int **)((longlong)&local_2d0 + lVar6) = (int *)((longlong)param_1 + 0x7c);
      *(int *)((longlong)local_2d8 + lVar6) = iVar44;
      *(undefined4 *)((longlong)&local_2e0 + lVar6) = uVar67;
      *(uint **)((longlong)local_2e8 + lVar6) = &uStack_24c;
      *(float **)((longlong)&local_2f0 + lVar6) = local_1b8;
      *(int **)((longlong)local_2f8 + lVar6) = &local_260;
      iVar53 = local_234;
      *(undefined4 *)((longlong)&lStack_300 + lVar6) = uVar26;
      local_170 = uVar26;
      *(int *)((longlong)afStack_308 + lVar6) = iVar53;
      *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86b918;
      local_1a4 = FUN_14f86ef1c(param_1,lVar29,pfVar32,iVar46);
      uVar51 = local_230;
      local_174 = local_260;
      if (((__real_3ecccccd < local_1b8[0]) || (__real_3ecccccd < *(float *)(param_1 + 0xe))) &&
         ((*(int *)((longlong)param_1 + 0x7c) == 0 ||
          (__real_3fd3333333333333 < (double)*(float *)(param_1 + 0x10))))) {
        if (((double)*(int *)((longlong)param_1 + 0x6c) * ___real_3ff428f5c28f5c29 <
             (double)local_260) ||
           ((double)local_260 <
            (double)*(int *)((longlong)param_1 + 0x6c) * ___real_3fe947ae147ae148)) {
          local_178 = 1;
        }
      }
      local_1a0 = 6;
      if (local_1a4 == 0) {
        if ((iVar36 == 0) && ((int)(uVar47 + 0x10) <= (int)local_230)) {
          *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86b9e5;
          ec_enc_bit_logp(param_6,0,1);
        }
      }
      else {
        *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86ba01;
        ec_enc_bit_logp(param_6,1,1);
        iVar63 = local_260;
        uVar47 = local_260 + 1;
        iVar53 = 0x1f;
        if (uVar47 != 0) {
          for (; uVar47 >> iVar53 == 0; iVar53 = iVar53 + -1) {
          }
        }
        *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86ba17;
        ec_enc_uint(param_6,iVar53 + -4,6);
        *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86ba30;
        ec_enc_bits(param_6,uVar47 - (0x10 << ((char)iVar53 - 4U & 0x1f)),iVar53);
        uVar47 = uStack_24c;
        local_174 = iVar63;
        *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86ba4a;
        ec_enc_bits(param_6,uVar47,3);
        uVar67 = local_170;
        *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86ba68;
        ec_enc_icdf(param_6,uVar67,&DAT_15350f2c0,2);
        iVar25 = local_210;
        uVar51 = local_230;
      }
      iVar63 = local_248;
      iVar53 = *(int *)((longlong)param_1 + 0x1c);
      local_260 = 0;
      uStack_24c = 0;
      if ((iVar53 < 1) || (*(int *)((longlong)param_1 + 0x44) != 0)) {
        iVar50 = (int)local_220;
      }
      else {
        if (((iVar36 == 0) || (0xe < iStack_254)) ||
           (uVar67 = 1, *(int *)((longlong)param_1 + 0xbc) == 2)) {
          uVar67 = 0;
        }
        *(int **)((longlong)local_2f8 + lVar6) = &iStack_224;
        *(undefined4 *)((longlong)&lStack_300 + lVar6) = uVar67;
        *(int **)((longlong)afStack_308 + lVar6) = local_1e8;
        *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86bae7;
        local_260 = FUN_14f86fc6c(lVar29,iVar25,iVar63,&fStack_214);
        iVar53 = *(int *)((longlong)param_1 + 0x1c);
        local_220 = CONCAT44(local_220._4_4_,local_1e8[0]);
        fVar76 = fStack_214;
        iVar50 = local_1e8[0];
      }
      iVar36 = local_264;
      fVar66 = __real_3f000000;
      if (local_264 < 1) {
LAB_14f86bb3e:
        local_260 = 0;
        local_160 = 1;
      }
      else {
        iVar46 = 0x1f;
        if (*(uint *)(param_6 + 0x20) != 0) {
          for (; *(uint *)(param_6 + 0x20) >> iVar46 == 0; iVar46 = iVar46 + -1) {
          }
        }
        if ((int)uVar51 < (*(int *)(param_6 + 0x18) - iVar46) + 2) goto LAB_14f86bb3e;
        uStack_24c = -(uint)(local_260 != 0) & local_228;
      }
      uVar47 = uStack_24c;
      uVar38 = (longlong)(local_234 * iVar63) * 4;
      uVar27 = uVar38 + 0xf;
      if (uVar27 <= uVar38) {
        uVar27 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_328 + lVar6 + -8) = 0x14f86bb7b;
      uVar38 = local_158;
      lVar7 = -(uVar27 & 0xfffffffffffffff0);
      uVar27 = local_158 + 0xf;
      pfVar31 = (float *)((longlong)&local_268 + lVar7 + lVar6);
      if (uVar27 <= local_158) {
        uVar27 = 0xffffffffffffff0;
      }
      local_190 = pfVar31;
      *(undefined8 *)(auStack_328 + lVar7 + lVar6 + -8) = 0x14f86bba9;
      lVar8 = -(uVar27 & 0xfffffffffffffff0);
      local_1f8 = (float *)((longlong)&local_268 + lVar8 + lVar7 + lVar6);
      uVar27 = uVar38 + 0xf;
      if (uVar27 <= uVar38) {
        uVar27 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_328 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86bbcd;
      fVar73 = local_268;
      lVar9 = -(uVar27 & 0xfffffffffffffff0);
      local_1d0 = (void *)((longlong)&local_268 + lVar9 + lVar8 + lVar7 + lVar6);
      local_210 = 8;
      if ((uVar47 == 0) || (iVar53 < 8)) {
        fVar52 = 0.0;
      }
      else {
        fVar52 = 1.4013e-45;
      }
      local_1e8[0] = iStack_22c * (int)local_268;
      local_1b0 = (ulonglong)local_1e8[0];
      uVar27 = local_1b0 * 4 + 0xf;
      if (uVar27 <= local_1b0 * 4) {
        uVar27 = 0xffffffffffffff0;
      }
      fStack_214 = fVar52;
      *(undefined8 *)(auStack_328 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86bc31;
      piVar54 = local_240;
      lVar10 = -(uVar27 & 0xfffffffffffffff0);
      pvVar55 = (void *)((longlong)&local_268 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
      local_198 = pvVar55;
      if (fVar52 != 0.0) {
        *(undefined4 *)((longlong)local_2e8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             *(undefined4 *)((longlong)param_1 + 0x4c);
        *(undefined4 *)((longlong)&local_2f0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             *(undefined4 *)(param_1 + 4);
        iVar53 = local_248;
        *(int *)((longlong)local_2f8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar36;
        *(int *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar53;
        *(float *)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar73;
        *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86bc84;
        FUN_14f86dae4(piVar54,0,lVar29,pfVar31);
        pfVar32 = local_1f8;
        iVar53 = local_238;
        piVar54 = local_240;
        *(undefined4 *)((longlong)local_2f8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
             *(undefined4 *)((longlong)param_1 + 0x4c);
        *(int *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_264;
        *(float *)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar73;
        *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86bcab;
        compute_band_energies(piVar54,pfVar31,pfVar32,iVar53);
        pfVar32 = local_1f8;
        iVar63 = local_238;
        piVar54 = local_240;
        iVar53 = local_258;
        *(float *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar73;
        *(void **)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = pvVar55;
        *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86bcc9;
        amp2Log2(piVar54,iVar63,iVar53,pfVar32);
        uVar27 = local_1b0;
        lVar28 = 0;
        if (0 < (longlong)local_1b0) {
          fVar69 = (float)local_264;
          do {
            *(float *)((longlong)pvVar55 + lVar28 * 4) =
                 fVar69 * fVar66 + *(float *)((longlong)pvVar55 + lVar28 * 4);
            lVar28 = lVar28 + 1;
          } while (lVar28 < (longlong)uVar27);
        }
      }
      piVar54 = local_240;
      uVar47 = uStack_24c;
      *(undefined4 *)((longlong)local_2e8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           *(undefined4 *)((longlong)param_1 + 0x4c);
      *(undefined4 *)((longlong)&local_2f0 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           *(undefined4 *)(param_1 + 4);
      *(int *)((longlong)local_2f8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_264;
      *(int *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_248;
      *(float *)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar73;
      *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86bd2f;
      FUN_14f86dae4(piVar54,uVar47,lVar29,pfVar31);
      if ((NAN(*pfVar31)) || ((fVar73 != 1.4013e-45 && (NAN(pfVar31[local_234]))))) {
        *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86bd70;
        celt_fatal("assertion failed: !celt_isnan(freq[0]) && (C==1 || !celt_isnan(freq[N]))",
                   "../../../third_party/opus/src/celt/celt_encoder.c",0x6c1);
      }
      pfVar32 = local_1f8;
      iVar53 = local_238;
      piVar54 = local_240;
      if (local_248 == 2) {
        if (fVar73 == 1.4013e-45) {
          iVar50 = 0;
        }
        local_220 = CONCAT44(local_220._4_4_,iVar50);
      }
      *(undefined4 *)((longlong)local_2f8 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           *(undefined4 *)((longlong)param_1 + 0x4c);
      *(int *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = local_264;
      *(float *)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar73;
      *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86bdb7;
      compute_band_energies(piVar54,pfVar31,pfVar32,iVar53);
      pvVar58 = local_1d0;
      pfVar32 = local_1f8;
      piVar54 = local_240;
      iVar63 = local_258;
      fVar69 = __real_26901d7d;
      uVar27 = (ulonglong)local_258;
      if ((*(int *)((longlong)param_1 + 0x44) != 0) && (lVar29 = 2, 2 < (longlong)uVar27)) {
        do {
          fVar18 = local_1f8[lVar29];
          if (*local_1f8 * __real_38d1b717 <= local_1f8[lVar29]) {
            fVar18 = *local_1f8 * __real_38d1b717;
          }
          if (fVar18 <= __real_26901d7d) {
            fVar18 = __real_26901d7d;
          }
          local_1f8[lVar29] = fVar18;
          lVar29 = lVar29 + 1;
        } while (lVar29 < (longlong)uVar27);
      }
      local_200 = uVar27;
      *(float *)((longlong)&lStack_300 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = fVar73;
      *(void **)((longlong)afStack_308 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = pvVar58;
      *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86be2e;
      amp2Log2(piVar54,iVar53,iVar63,pfVar32);
      uVar38 = local_1b0 * 4 + 0xf;
      if (uVar38 <= local_1b0 * 4) {
        uVar38 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_328 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86be55;
      lVar29 = -(uVar38 & 0xfffffffffffffff0);
      pvVar58 = (void *)((longlong)&local_268 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
      local_1f0 = pvVar58;
      *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86be75;
      memset(pvVar58,0,uVar27 << 2);
      fVar3 = __real_3e4ccccd;
      fVar18 = __real_3e800000;
      local_1d8 = (float *)(longlong)iStack_22c;
      uVar38 = 0;
      iVar53 = 0;
      if (((local_25c == 0) && (pvVar58 = local_1f0, param_1[0x1e] != 0)) &&
         (*(int *)((longlong)param_1 + 0x44) == 0)) {
        fVar77 = 0.0;
        fVar75 = 0.0;
        uVar47 = *(uint *)(param_1 + 0xc);
        if ((int)*(uint *)(param_1 + 0xc) < 2) {
          uVar47 = 2;
        }
        if ((int)fVar73 < 1) {
LAB_14f86bf94:
          *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
               0x14f86bfad;
          celt_fatal("assertion failed: count>0","../../../third_party/opus/src/celt/celt_encoder.c"
                     ,0x6ea);
        }
        else {
          uVar59 = (ulonglong)(uint)local_268;
          uVar40 = uVar38;
          do {
            if (0 < (int)uVar47) {
              pfVar31 = (float *)(param_1[0x1e] + uVar38);
              psVar30 = local_180;
              uVar57 = (ulonglong)uVar47;
              iVar53 = 1 - uVar47;
              do {
                fVar73 = *pfVar31;
                if (__real_3e800000 <= *pfVar31) {
                  fVar73 = __real_3e800000;
                }
                if (fVar73 <= __real_c0000000) {
                  fVar73 = __real_c0000000;
                }
                if (0.0 < fVar73) {
                  fVar73 = fVar73 * fVar66;
                }
                pfVar31 = pfVar31 + 1;
                iVar63 = (int)psVar30[1] - (int)*psVar30;
                uVar40 = (ulonglong)(uint)((int)uVar40 + iVar63);
                fVar75 = fVar75 + (float)iVar53 * fVar73;
                fVar77 = fVar77 + (float)iVar63 * fVar73;
                uVar57 = uVar57 - 1;
                psVar30 = psVar30 + 1;
                iVar53 = iVar53 + 2;
              } while (uVar57 != 0);
            }
            iVar53 = (int)uVar40;
            uVar38 = uVar38 + (longlong)local_1d8 * 4;
            uVar59 = uVar59 - 1;
          } while (uVar59 != 0);
          param_1 = local_168;
          if (iVar53 < 1) goto LAB_14f86bf94;
        }
        pvVar58 = local_1f0;
        fVar77 = fVar77 / (float)iVar53 + fVar3;
        fVar75 = ((fVar75 * __real_40c00000) /
                 (float)(int)((uVar47 - 1) * (uVar47 + 1) * uVar47 * (int)local_268)) * fVar66;
        if (__real_3cfdf3b6 <= fVar75) {
          fVar75 = __real_3cfdf3b6;
        }
        if (fVar75 <= __real_bcfdf3b6) {
          fVar75 = __real_bcfdf3b6;
        }
        iVar53 = 0;
        lVar28 = (longlong)(int)uVar47;
        psVar30 = local_180;
        while (psVar30 = psVar30 + 1, (int)*psVar30 < (int)local_180[lVar28] / 2) {
          iVar53 = iVar53 + 1;
        }
        iVar63 = 0;
        if (0 < lVar28) {
          pfVar31 = (float *)param_1[0x1e];
          iVar53 = -iVar53;
          lVar39 = (longlong)local_1f0 - (longlong)pfVar31;
          lVar56 = lVar28;
          do {
            auVar68 = ZEXT416((uint)*pfVar31);
            if ((local_268 == 2.8026e-45) && (*pfVar31 <= pfVar31[(longlong)local_1d8])) {
              auVar68 = ZEXT416((uint)pfVar31[(longlong)local_1d8]);
            }
            if (0.0 <= auVar68._0_4_) {
              auVar11._12_4_ = 0;
              auVar11._0_12_ = auVar68._4_12_;
              auVar68 = auVar11 << 0x20;
            }
            fVar73 = auVar68._0_4_ - ((float)iVar53 * fVar75 + fVar77);
            if (fVar18 < fVar73) {
              iVar63 = iVar63 + 1;
              *(float *)(lVar39 + (longlong)pfVar31) = fVar73 - fVar18;
            }
            iVar53 = iVar53 + 1;
            pfVar31 = pfVar31 + 1;
            lVar56 = lVar56 + -1;
          } while (lVar56 != 0);
          if (2 < iVar63) {
            fVar77 = fVar77 + fVar18;
            if (fVar77 <= 0.0) {
              lVar56 = 0;
              do {
                fVar52 = *(float *)((longlong)local_1f0 + lVar56 * 4) - fVar18;
                fVar73 = 0.0;
                if (0.0 <= fVar52) {
                  fVar73 = fVar52;
                }
                *(float *)((longlong)local_1f0 + lVar56 * 4) = fVar73;
                lVar56 = lVar56 + 1;
              } while (lVar56 < lVar28);
            }
            else {
              fVar77 = 0.0;
              fVar75 = 0.0;
              *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
                   0x14f86c0d5;
              memset(pvVar58,0,lVar28 << 2);
            }
          }
        }
        fVar75 = fVar75 * __real_42800000;
        fVar77 = fVar77 + fVar3;
        pvVar55 = local_198;
        pfVar31 = local_190;
        fVar52 = fStack_214;
      }
      _Src = local_1d0;
      iVar53 = *(int *)((longlong)param_1 + 0x44);
      if (iVar53 == 0) {
        if (uStack_24c == 0) {
          fVar73 = 0.0;
        }
        else {
          fVar73 = (float)local_264 * fVar66;
        }
        lVar28 = (longlong)local_25c;
        if (lVar28 < (longlong)local_200) {
          lVar56 = local_200 - lVar28;
          pfVar32 = (float *)((longlong)local_1d0 + lVar28 * 4);
          fVar70 = __real_c1200000;
          do {
            fVar71 = fVar70 - fVar20;
            if (fVar70 - fVar20 <= *pfVar32 - fVar73) {
              fVar71 = *pfVar32 - fVar73;
            }
            fVar70 = fVar71;
            if ((local_268 == 2.8026e-45) && (fVar71 <= pfVar32[(longlong)local_1d8] - fVar73)) {
              fVar70 = pfVar32[(longlong)local_1d8] - fVar73;
            }
            pfVar32 = pfVar32 + 1;
            fVar74 = fVar74 + fVar70;
            lVar56 = lVar56 + -1;
          } while (lVar56 != 0);
        }
        fVar74 = fVar74 / (float)(local_258 - local_25c) - *(float *)(param_1 + 0x1f);
        fVar73 = __real_bfc00000;
        if (__real_bfc00000 <= fVar74) {
          fVar73 = fVar74;
        }
        fVar74 = __real_40400000;
        if (fVar73 <= __real_40400000) {
          fVar74 = fVar73;
        }
        *(float *)(param_1 + 0x1f) = fVar74 * __real_3ca3d70a + *(float *)(param_1 + 0x1f);
      }
      if (fVar52 == 0.0) {
        _Size = local_1b0 << 2;
        *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
             0x14f86c229;
        memcpy(pvVar55,_Src,_Size);
      }
      puVar23 = local_1c8;
      iVar50 = iStack_22c;
      iVar63 = local_258;
      fVar73 = local_268;
      if (0 < local_264) {
        uVar47 = *(uint *)(param_6 + 0x20);
        iVar36 = *(int *)(param_6 + 0x18);
        iVar46 = 0x1f;
        if (uVar47 != 0) {
          for (; uVar47 >> iVar46 == 0; iVar46 = iVar46 + -1) {
          }
        }
        if (((((iVar36 - iVar46) + 2 <= (int)local_230) && (local_260 == 0)) &&
            (4 < *(int *)((longlong)param_1 + 0x1c))) && ((iVar53 == 0 && (local_25c == 0)))) {
          *(float *)((longlong)&lStack_300 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
               local_268;
          *(int *)((longlong)afStack_308 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar63
          ;
          pvVar55 = local_1d0;
          *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
               0x14f86c2b1;
          iVar63 = FUN_14f86ed3c(pvVar55,puVar23,iVar50,0);
          lVar28 = local_1e0;
          uVar51 = local_228;
          iVar53 = local_264;
          if (iVar63 != 0) {
            *(undefined4 *)((longlong)local_2e8 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
                 *(undefined4 *)((longlong)param_1 + 0x4c);
            *(undefined4 *)((longlong)&local_2f0 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
                 = *(undefined4 *)(param_1 + 4);
            iVar63 = local_248;
            *(int *)((longlong)local_2f8 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = iVar53
            ;
            piVar54 = local_240;
            uStack_24c = uVar51;
            *(int *)((longlong)&lStack_300 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
                 iVar63;
            *(float *)((longlong)afStack_308 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
                 fVar73;
            local_260 = 1;
            *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
                 0x14f86c2fc;
            FUN_14f86dae4(piVar54,uVar51,lVar28,pfVar31);
            pfVar32 = local_1f8;
            iVar63 = local_238;
            piVar54 = local_240;
            *(undefined4 *)((longlong)local_2f8 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
                 *(undefined4 *)((longlong)param_1 + 0x4c);
            *(int *)((longlong)&lStack_300 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
                 iVar53;
            *(float *)((longlong)afStack_308 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
                 fVar73;
            *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
                 0x14f86c320;
            compute_band_energies(piVar54,pfVar31,pfVar32,iVar63);
            pvVar55 = local_1d0;
            pfVar32 = local_1f8;
            iVar50 = local_238;
            piVar54 = local_240;
            iVar63 = local_258;
            *(float *)((longlong)&lStack_300 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
                 fVar73;
            *(void **)((longlong)afStack_308 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
                 pvVar55;
            *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
                 0x14f86c345;
            amp2Log2(piVar54,iVar50,iVar63,pfVar32);
            if (0 < (longlong)local_1b0) {
              lVar28 = 0;
              do {
                *(float *)((longlong)local_198 + lVar28 * 4) =
                     (float)iVar53 * fVar66 + *(float *)((longlong)local_198 + lVar28 * 4);
                lVar28 = lVar28 + 1;
              } while (lVar28 < (longlong)local_1b0);
            }
            uVar47 = *(uint *)(param_6 + 0x20);
            iVar36 = *(int *)(param_6 + 0x18);
            fVar76 = fVar3;
          }
        }
        iVar63 = local_260;
        iVar53 = 0x1f;
        if (uVar47 != 0) {
          for (; uVar47 >> iVar53 == 0; iVar53 = iVar53 + -1) {
          }
        }
        if ((iVar36 - iVar53) + 2 <= (int)local_230) {
          *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
               0x14f86c3c1;
          ec_enc_bit_logp(param_6,iVar63,3);
        }
      }
      fVar73 = local_268;
      uVar40 = (longlong)(local_234 * (int)local_268) * 4;
      uVar38 = uVar40 + 0xf;
      if (uVar38 <= uVar40) {
        uVar38 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_328 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86c3f4;
      pfVar32 = local_1f8;
      lVar56 = -(uVar38 & 0xfffffffffffffff0);
      *(uint *)((longlong)local_2f8 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           local_228;
      piVar54 = local_240;
      lVar28 = (longlong)&local_268 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
      *(float *)((longlong)&lStack_300 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           fVar73;
      *(int *)((longlong)afStack_308 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           local_238;
      local_1e0 = lVar28;
      *(undefined8 *)(auStack_328 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86c42b;
      normalise_bands(piVar54,pfVar31,lVar28,pfVar32);
      iVar53 = iStack_254;
      fVar73 = local_268;
      if (((iStack_254 < (int)local_268 * 0xf) || (local_25c != 0)) ||
         ((*(int *)((longlong)param_1 + 0x1c) < 2 || (*(int *)((longlong)param_1 + 0x44) != 0)))) {
        bVar65 = false;
        uVar67 = *(undefined4 *)((longlong)param_1 + 0x44);
      }
      else {
        bVar65 = true;
        uVar67 = 0;
      }
      uVar40 = (longlong)local_1d8 * 4;
      uVar38 = uVar40 + 0xf;
      if (uVar38 <= uVar40) {
        uVar38 = 0xffffffffffffff0;
      }
      *(undefined8 *)(auStack_328 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86c48b;
      lVar28 = -(uVar38 & 0xfffffffffffffff0);
      uVar38 = uVar40 + 0xf;
      piVar54 = (int *)((longlong)&local_268 +
                       lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6);
      if (uVar38 <= uVar40) {
        uVar38 = 0xffffffffffffff0;
      }
      local_148 = piVar54;
      *(undefined8 *)
       (auStack_328 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86c4b2;
      lVar12 = -(uVar38 & 0xfffffffffffffff0);
      uVar38 = uVar40 + 0xf;
      lVar39 = (longlong)&local_268 +
               lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
      if (uVar38 <= uVar40) {
        uVar38 = 0xffffffffffffff0;
      }
      *(undefined8 *)
       (auStack_328 +
       lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86c4d9;
      lVar13 = -(uVar38 & 0xfffffffffffffff0);
      lVar14 = (longlong)&local_268 +
               lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
      *(longlong *)
       ((longlong)&local_288 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = lVar14
      ;
      *(longlong *)
       ((longlong)local_298 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + 8) =
           lVar39;
      local_138 = lVar14;
      *(longlong *)
       ((longlong)local_298 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           (longlong)param_1 + 0x7c;
      *(void **)((longlong)&local_2a0 +
                lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
           = pvVar58;
      *(undefined4 *)
       ((longlong)local_2a8 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) = uVar67
      ;
      pvVar55 = local_1d0;
      *(float **)
       ((longlong)&local_2b0 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           &fStack_214;
      iVar63 = local_264;
      *(int *)((longlong)local_2c0 +
              lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
              8) = iVar53;
      iVar50 = iStack_22c;
      *(int *)((longlong)local_2c0 +
              lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           iVar63;
      *(short **)
       ((longlong)&local_2c8 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           local_180;
      *(undefined4 *)
       ((longlong)&local_2d0 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           *(undefined4 *)(param_1 + 7);
      *(undefined4 *)
       ((longlong)local_2d8 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           *(undefined4 *)(param_1 + 6);
      *(int *)((longlong)&local_2e0 +
              lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           local_260;
      *(undefined8 *)
       ((longlong)local_2e8 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           *(undefined8 *)(local_240 + 0x10);
      *(undefined4 *)
       ((longlong)&local_2f0 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           *(undefined4 *)(param_1 + 8);
      iVar53 = local_258;
      *(int **)((longlong)local_2f8 +
               lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
           = piVar54;
      pvVar58 = local_198;
      *(float *)((longlong)&lStack_300 +
                lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6)
           = fVar73;
      *(int *)((longlong)afStack_308 +
              lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           iVar53;
      *(undefined8 *)
       (auStack_328 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86c588;
      uVar67 = FUN_14f86dffc(pvVar55,pvVar58,iVar50);
      uVar38 = uVar40 + 0xf;
      if (uVar38 <= uVar40) {
        uVar38 = 0xffffffffffffff0;
      }
      *(undefined8 *)
       (auStack_328 +
       lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86c5a7;
      iVar63 = local_238;
      iVar53 = local_260;
      lVar14 = -(uVar38 & 0xfffffffffffffff0);
      piVar54 = (int *)((longlong)&local_268 +
                       lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6);
      local_140 = piVar54;
      if (bVar65) {
        lVar62 = (longlong)local_238;
        *(longlong *)
         ((longlong)local_2d8 +
         lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = lVar39;
        iVar50 = (int)(0x5000 / (longlong)iStack_254) + 2;
        if (iVar50 < 0x50) {
          iVar50 = 0x50;
        }
        *(int *)((longlong)&local_2e0 +
                lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = (int)local_220;
        iVar36 = local_264;
        *(float *)((longlong)local_2e8 +
                  lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6) = fVar76;
        *(int *)((longlong)&local_2f0 +
                lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = iVar36;
        *(int *)((longlong)local_2f8 +
                lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = local_234;
        *(longlong *)
         ((longlong)&lStack_300 +
         lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6) = local_1e0;
        piVar21 = local_240;
        *(int *)((longlong)afStack_308 +
                lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = iVar50;
        *(undefined8 *)
         (auStack_328 +
         lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + 
                                                  lVar6 + -8) = 0x14f86c622;
        uVar26 = FUN_14f86f504(piVar21,iVar63,iVar53,piVar54);
        uVar27 = local_200;
        local_220 = CONCAT44(local_220._4_4_,uVar26);
        for (lVar39 = lVar62; lVar39 < (longlong)uVar27; lVar39 = lVar39 + 1) {
          piVar54[lVar39] = piVar54[lVar62 + -1];
        }
      }
      else {
        if (local_25c == 0) {
LAB_14f86c692:
          if (0 < local_258) {
LAB_14f86c69b:
            for (uVar27 = uVar27 & 0x3fffffffffffffff; uVar27 != 0; uVar27 = uVar27 - 1) {
              *piVar54 = iVar53;
              piVar54 = piVar54 + 1;
            }
          }
        }
        else {
          if (iStack_224 == 0) {
            if ((iStack_254 < 0xf) && (*(int *)((longlong)param_1 + 0xbc) != 2)) {
              if (0 < local_258) {
                *(undefined8 *)
                 (auStack_328 +
                 lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + -8) = 0x14f86c688;
                memset(piVar54,0,uVar27 << 2);
              }
              local_220 = CONCAT44(local_220._4_4_,local_260);
              uVar27 = local_200;
              goto LAB_14f86c6ae;
            }
            goto LAB_14f86c692;
          }
          if (0 < local_258) {
            iVar53 = 1;
            goto LAB_14f86c69b;
          }
        }
        local_220 = local_220 & 0xffffffff00000000;
        uVar27 = local_200;
      }
LAB_14f86c6ae:
      uVar38 = local_1b0 * 4 + 0xf;
      if (uVar38 <= local_1b0 * 4) {
        uVar38 = 0xffffffffffffff0;
      }
      *(undefined8 *)
       (auStack_328 +
       lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6
       + -8) = 0x14f86c6d5;
      puVar49 = local_168;
      pvVar55 = local_1d0;
      iVar50 = local_238;
      iVar63 = local_258;
      iVar53 = local_264;
      local_1f0 = (void *)(longlong)local_25c;
      lVar62 = -(uVar38 & 0xfffffffffffffff0);
      uVar47 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar51 = (uint)((ulonglong)__xmm_7fffffffffffffff7fffffffffffffff >> 0x20);
      iVar46 = 0;
      iVar36 = 0;
      lVar39 = (longlong)&local_268 +
               lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8
                                                                                               + 
                                                  lVar7 + lVar6;
      do {
        if ((longlong)local_1f0 < (longlong)uVar27) {
          pfVar31 = (float *)(((longlong)iVar36 + (longlong)local_1f0) * 4 + (longlong)local_1d0);
          lVar41 = uVar27 - (longlong)local_1f0;
          do {
            pfVar32 = (float *)(((longlong)local_130 - (longlong)local_1d0) + (longlong)pfVar31);
            dVar72 = (double)(*pfVar31 -
                             *(float *)((longlong)pfVar32 +
                                       ((longlong)local_1c8 - (longlong)local_130)));
            if ((float)(double)CONCAT44((uint)((ulonglong)dVar72 >> 0x20) & uVar51,
                                        SUB84(dVar72,0) & uVar47) < __real_40000000) {
              *pfVar31 = *pfVar31 - *pfVar32 * fVar18;
            }
            pfVar31 = pfVar31 + 1;
            lVar41 = lVar41 + -1;
            fVar73 = local_268;
          } while (lVar41 != 0);
        }
        iVar46 = iVar46 + 1;
        iVar36 = iVar36 + iStack_22c;
      } while (iVar46 < (int)fVar73);
      puVar1 = local_168 + 0xb;
      iVar36 = *(int *)((longlong)local_168 + 0x1c);
      local_190 = (float *)lVar39;
      *(undefined4 *)
       ((longlong)local_2a8 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) =
           *(undefined4 *)((longlong)local_168 + 0x44);
      *(undefined4 *)
       ((longlong)&local_2b0 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = *(undefined4 *)((longlong)puVar49 + 0x3c)
      ;
      uVar26 = *(undefined4 *)(puVar49 + 2);
      *(uint *)((longlong)local_2c0 +
               lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8
                                                                                               + 
                                                  lVar7 + lVar6 + 8) = (uint)(3 < iVar36);
      iVar36 = local_25c;
      *(undefined8 **)
       ((longlong)local_2c0 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = puVar1;
      piVar54 = local_240;
      *(undefined4 *)
       ((longlong)&local_2c8 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = uVar26;
      *(int *)((longlong)&local_2d0 +
              lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) = local_218;
      uVar61 = local_230;
      *(int *)((longlong)local_2d8 +
              lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) = iVar53;
      *(float *)((longlong)&local_2e0 +
                lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar73;
      *(undefined1 **)
       ((longlong)local_2e8 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = param_6;
      *(longlong *)
       ((longlong)&local_2f0 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = lVar39;
      *(uint *)((longlong)local_2f8 +
               lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8
                                                                                               + 
                                                  lVar7 + lVar6) = uVar61;
      *(undefined4 **)
       ((longlong)&lStack_300 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6) = local_1c8;
      *(void **)((longlong)afStack_308 +
                lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = pvVar55;
      *(undefined8 *)
       (auStack_328 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6 + -8) = 0x14f86c82b;
      quant_coarse_energy(piVar54,iVar36,iVar63,iVar50);
      piVar54 = local_140;
      uVar38 = local_200;
      iVar63 = 0x1f;
      if (*(uint *)(param_6 + 0x20) != 0) {
        for (; *(uint *)(param_6 + 0x20) >> iVar63 == 0; iVar63 = iVar63 + -1) {
        }
      }
      iVar36 = *(int *)(param_6 + 8);
      iVar46 = (*(int *)(param_6 + 0x18) - iVar63) + -1;
      iVar50 = (-(uint)(local_260 != 0) & 0xfffffffe) + 4;
      if ((iVar53 < 1) ||
         ((uint)(iVar36 * 8) < (uint)(iVar50 + (*(int *)(param_6 + 0x18) - iVar63)))) {
        iVar53 = 0;
        iStack_224 = 0;
      }
      else {
        iVar53 = 1;
        iStack_224 = 1;
      }
      uVar60 = 0;
      uVar61 = 0;
      iVar63 = (int)local_220;
      if ((longlong)local_1f0 < (longlong)uVar27) {
        bVar65 = local_260 != 0;
        pvVar55 = local_1f0;
        uVar60 = 0;
        do {
          if ((uint)(iVar36 * 8 - iVar53) < (uint)(iVar50 + iVar46)) {
            piVar54[(longlong)pvVar55] = uVar61;
          }
          else {
            uVar5 = piVar54[(longlong)pvVar55];
            *(undefined8 *)
             (auStack_328 +
             lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6 +
             -8) = 0x14f86c8c0;
            ec_enc_bit_logp(param_6,uVar61 ^ uVar5);
            iVar63 = 0x1f;
            if (*(uint *)(param_6 + 0x20) != 0) {
              for (; *(uint *)(param_6 + 0x20) >> iVar63 == 0; iVar63 = iVar63 + -1) {
              }
            }
            uVar61 = piVar54[(longlong)pvVar55];
            iVar46 = (*(int *)(param_6 + 0x18) - iVar63) + -1;
            uVar60 = uVar60 | uVar61;
          }
          pvVar55 = (void *)((longlong)pvVar55 + 1);
          iVar50 = 5 - (uint)bVar65;
        } while ((longlong)pvVar55 < (longlong)uVar38);
        puVar49 = local_168;
        iVar63 = (int)local_220;
        iVar53 = iStack_224;
      }
      pvVar55 = local_1f0;
      lVar39 = (longlong)local_264;
      iVar50 = 0;
      if ((iVar53 != 0) &&
         (lVar41 = (longlong)(int)(uVar60 + local_260 * 4) + lVar39 * 8,
         (&tf_select_table)[lVar41] != (&DAT_15350e5ea)[lVar41])) {
        *(undefined8 *)
         (auStack_328 +
         lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + -8) = 0x14f86c940;
        ec_enc_bit_logp(param_6,iVar63,1);
        iVar50 = iVar63;
      }
      uVar61 = local_230;
      fVar73 = local_268;
      pvVar58 = pvVar55;
      if ((longlong)pvVar55 < (longlong)local_200) {
        do {
          local_140[(longlong)pvVar55] =
               (int)(char)(&tf_select_table)
                          [(longlong)(local_140[(longlong)pvVar55] + (local_260 * 2 + iVar50) * 2) +
                           lVar39 * 8];
          pvVar55 = (void *)((longlong)pvVar55 + 1);
          pvVar58 = local_1f0;
        } while ((longlong)pvVar55 < (longlong)local_200);
      }
      uVar26 = 0;
      iVar53 = 0x1f;
      if (*(uint *)(param_6 + 0x20) != 0) {
        for (; *(uint *)(param_6 + 0x20) >> iVar53 == 0; iVar53 = iVar53 + -1) {
        }
      }
      if ((*(int *)(param_6 + 0x18) - iVar53) + 3 <= (int)local_230) {
        if (*(int *)((longlong)puVar49 + 0x44) == 0) {
          if (local_25c == 0) {
            if (((uStack_24c != 0) || (*(int *)((longlong)puVar49 + 0x1c) < 3)) ||
               (local_218 < (int)local_268 * 10)) {
              if (*(int *)((longlong)puVar49 + 0x1c) != 0) goto LAB_14f86c9f0;
              goto LAB_14f86cdf2;
            }
            bVar65 = local_1a4 != 0;
            *(longlong *)
             ((longlong)local_2d8 +
             lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6)
                 = local_138;
            *(uint *)((longlong)&local_2e0 +
                     lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 +
                                                                                             lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6)
                 = local_228;
            iVar53 = local_238;
            *(float *)((longlong)local_2e8 +
                      lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 
                                                  + lVar8 + lVar7 + lVar6) = fVar73;
            uVar26 = *(undefined4 *)((longlong)puVar49 + 0x54);
            *(int *)((longlong)&local_2f0 +
                    lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = iVar53;
            lVar39 = local_1e0;
            *(uint *)((longlong)local_2f8 +
                     lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 +
                                                                                             lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6)
                 = (uint)bVar65;
            *(undefined8 **)
             ((longlong)&lStack_300 +
             lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6)
                 = puVar49 + 0xd;
            piVar54 = local_240;
            *(longlong *)
             ((longlong)afStack_308 +
             lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6)
                 = (longlong)puVar49 + 100;
            *(undefined8 *)
             (auStack_328 +
             lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 +
                                                                                             lVar7 +
                                                                                             lVar6 +
             -8) = 0x14f86cde3;
            uVar26 = spreading_decision(piVar54,lVar39,(longlong)puVar49 + 0x5c,uVar26);
          }
          else {
            if (*(int *)((longlong)puVar49 + 0x1c) == 0) {
LAB_14f86cdf2:
              *(undefined4 *)((longlong)puVar49 + 0x54) = 0;
              goto LAB_14f86c9f8;
            }
            uVar26 = 3;
            if (local_260 != 0) {
LAB_14f86c9f0:
              uVar26 = 2;
            }
          }
          *(undefined4 *)((longlong)puVar49 + 0x54) = uVar26;
        }
        else {
          uVar26 = 2;
          *(undefined4 *)(puVar49 + 0xd) = 0;
          *(undefined4 *)((longlong)puVar49 + 0x54) = 2;
        }
LAB_14f86c9f8:
        *(undefined8 *)
         (auStack_328 +
         lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + 
                                                  lVar7 + lVar6 + -8) = 0x14f86ca0f;
        ec_enc_icdf(param_6,uVar26,&DAT_15350f2bc,5);
      }
      if (*(int *)((longlong)puVar49 + 0x44) != 0) {
        iVar53 = iStack_254 / 3 + (iStack_254 >> 0x1f) +
                 (int)(((longlong)iStack_254 / 3 + ((longlong)iStack_254 >> 0x3f) & 0xffffffffU) >>
                      0x1f);
        if (8 < iVar53) {
          iVar53 = 8;
        }
        *local_148 = iVar53;
      }
      uVar38 = (longlong)local_1d8 * 4;
      uVar27 = uVar38 + 0xf;
      if (uVar27 <= uVar38) {
        uVar27 = 0xffffffffffffff0;
      }
      local_220 = uVar38;
      *(undefined8 *)
       (auStack_328 +
       lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7
                                                                                               + 
                                                  lVar6 + -8) = 0x14f86ca62;
      piVar54 = local_240;
      iVar53 = local_264;
      fVar73 = local_268;
      lVar41 = -(uVar27 & 0xfffffffffffffff0);
      lVar39 = (longlong)&local_268 +
               lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6;
      local_138 = lVar39;
      *(undefined8 *)
       (auStack_328 +
       lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86ca88;
      init_caps(piVar54,lVar39,iVar53,fVar73);
      iVar53 = uVar61 << 3;
      iStack_254 = 0;
      iStack_224 = iVar53;
      *(undefined8 *)
       (auStack_328 +
       lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86ca9e;
      iVar50 = ec_tell_frac(param_6);
      local_228 = iVar50;
      iVar63 = 0;
      if ((longlong)pvVar58 < (longlong)local_200) {
        lVar39 = lVar39 - (longlong)local_148;
        local_198 = pvVar58;
        iVar36 = 0;
        puVar64 = (uint *)(local_148 + (longlong)local_1f0);
        uVar27 = local_200;
        do {
          bVar34 = (byte)local_264 & 0x1f;
          iVar46 = ((int)local_180[(longlong)local_198 + 1] - (int)local_180[(longlong)local_198]) *
                   (int)local_268 << bVar34;
          iVar63 = iVar46;
          if (iVar46 < 0x30) {
            iVar63 = 0x30;
          }
          if (iVar46 << 3 < iVar63) {
            iVar63 = iVar46 << 3;
          }
          uVar60 = 0 << bVar34;
          uVar38 = (ulonglong)uVar60;
          iVar53 = iVar53 - iVar36;
          uVar61 = uVar60;
          iVar46 = local_1a0;
          if (iVar50 + local_1a0 * 8 < iVar53) {
            do {
              if (*(int *)(lVar39 + (longlong)puVar64) <= (int)uVar60) break;
              uVar5 = *puVar64;
              *(undefined8 *)
               (auStack_328 +
               lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86cb46;
              ec_enc_bit_logp(param_6,CONCAT71((int7)(uVar38 >> 8),(int)uVar61 < (int)uVar5),iVar46)
              ;
              *(undefined8 *)
               (auStack_328 +
               lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86cb52;
              iVar50 = ec_tell_frac(param_6);
              if ((int)uVar5 <= (int)uVar61) break;
              iStack_254 = iStack_254 + iVar63;
              uVar61 = uVar61 + 1;
              iVar46 = 1;
              uVar60 = uVar60 + iVar63;
              iVar53 = iVar53 - iVar63;
              uVar38 = 0;
            } while (iVar50 + 8 < iVar53);
            local_228 = iVar50;
            uVar27 = local_200;
            iVar36 = iStack_254;
            if (uVar61 != 0) {
              local_1a0 = local_1a0 + -1;
              if (local_1a0 < 2) {
                local_1a0 = 2;
              }
            }
          }
          pvVar55 = (void *)((longlong)local_198 + 1);
          *puVar64 = uVar60;
          puVar64 = puVar64 + 1;
          local_198 = pvVar55;
          puVar49 = local_168;
          uVar38 = local_220;
          iVar53 = iStack_224;
          iVar63 = iStack_254;
        } while ((longlong)pvVar55 < (longlong)uVar27);
      }
      uVar61 = local_228;
      iVar50 = local_264;
      if (local_268 == 2.8026e-45) {
        if (local_264 != 0) {
          lVar39 = 0xd;
          psVar30 = *(short **)(local_240 + 8);
          fVar73 = fVar69;
          do {
            sVar4 = *psVar30;
            bVar34 = (byte)local_264;
            psVar30 = psVar30 + 1;
            lVar45 = (longlong)((int)sVar4 << (bVar34 & 0x1f));
            lVar42 = (longlong)((int)*psVar30 << (bVar34 & 0x1f));
            if (lVar45 < lVar42) {
              pfVar31 = (float *)(lVar45 * 4 + local_1e0);
              lVar42 = lVar42 - lVar45;
              do {
                fVar52 = pfVar31[local_234];
                fVar3 = *pfVar31;
                fVar70 = *pfVar31;
                fVar71 = *pfVar31;
                pfVar31 = pfVar31 + 1;
                fVar73 = (float)(double)CONCAT44((uint)((ulonglong)(double)fVar52 >> 0x20) & uVar51,
                                                 SUB84((double)fVar52,0) & uVar47) +
                         (float)(double)CONCAT44((uint)((ulonglong)(double)fVar3 >> 0x20) & uVar51,
                                                 SUB84((double)fVar3,0) & uVar47) + fVar73;
                fVar69 = (float)(double)CONCAT44((uint)((ulonglong)(double)(fVar70 - fVar52) >> 0x20
                                                       ) & uVar51,
                                                 SUB84((double)(fVar70 - fVar52),0) & uVar47) +
                         (float)(double)CONCAT44((uint)((ulonglong)(double)(fVar52 + fVar71) >> 0x20
                                                       ) & uVar51,
                                                 SUB84((double)(fVar52 + fVar71),0) & uVar47) +
                         fVar69;
                lVar42 = lVar42 + -1;
              } while (lVar42 != 0);
            }
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
          iVar46 = (int)(*(short **)(local_240 + 8))[0xd] << (bVar34 + 1 & 0x1f);
          iVar36 = 5;
          if (1 < local_264) {
            iVar36 = 0xd;
          }
          local_1bc = (uint)((float)iVar46 * fVar73 <
                            (float)(iVar36 + iVar46) * fVar69 * __real_3f3504f7);
          uVar38 = local_220;
        }
        *(int *)((longlong)afStack_308 +
                lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) =
             *(int *)((longlong)puVar49 + 0xec);
        *(undefined8 *)
         (auStack_328 +
         lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86cd4b;
        iVar44 = hysteresis_decision(0xd,&DAT_15350f2d0,&DAT_15350f330,0x15);
        iVar46 = local_25c;
        if (local_25c <= iVar44) {
          iVar46 = iVar44;
        }
        iVar36 = local_258;
        if ((iVar46 <= local_258) && (iVar36 = iVar44, iVar44 < local_25c)) {
          iVar36 = local_25c;
        }
        *(int *)((longlong)puVar49 + 0xec) = iVar36;
      }
      else {
        iVar36 = *(int *)((longlong)puVar49 + 0xec);
      }
      iVar46 = local_258;
      fVar73 = local_268;
      if ((int)(uVar61 + 0x30) <= iVar53 - iVar63) {
        if ((local_25c < 1) && (*(int *)((longlong)puVar49 + 0x44) == 0)) {
          *(undefined4 *)
           ((longlong)local_2c0 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) =
               *(undefined4 *)((longlong)puVar49 + 0x4c);
          *(int *)((longlong)&local_2c8 +
                  lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = local_208;
          *(float *)((longlong)&local_2d0 +
                    lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar75;
          *(int *)((longlong)local_2d8 +
                  lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = iVar36;
          lVar39 = local_1e0;
          *(float *)((longlong)&local_2e0 +
                    lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar76;
          *(undefined8 **)
           ((longlong)local_2e8 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = puVar49 + 0x1d;
          piVar54 = local_240;
          *(longlong *)
           ((longlong)&local_2f0 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = (longlong)puVar49 + 0x7c;
          *(int *)((longlong)local_2f8 +
                  lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = local_234;
          *(float *)((longlong)&lStack_300 +
                    lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar73;
          pvVar55 = local_1d0;
          *(int *)((longlong)afStack_308 +
                  lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = iVar50;
          *(undefined8 *)
           (auStack_328 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86ce99;
          uVar26 = FUN_14f86ae40(piVar54,lVar39,pvVar55,iVar46);
        }
        else {
          *(undefined4 *)(puVar49 + 0x1d) = 0;
          uVar26 = 5;
        }
        local_1a8 = uVar26;
        *(undefined8 *)
         (auStack_328 +
         lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86ceca;
        ec_enc_icdf(param_6,uVar26,&DAT_15350f2b0);
        *(undefined8 *)
         (auStack_328 +
         lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86ced2;
        uVar61 = ec_tell_frac(param_6);
      }
      piVar54 = local_240;
      fVar75 = local_268;
      if (0 < iStack_20c) {
        bVar34 = (byte)local_1c0;
        local_1a4 = 0x4fb >> (bVar34 & 0x1f);
        bVar35 = (char)local_240[10] - (char)local_264;
        if (local_250 < local_1a4) {
          local_1a4 = local_250;
        }
        if (local_25c == 0) {
          iVar53 = iStack_20c + (int)local_268 * -0x140 + -0xa0;
        }
        else {
          iVar53 = iStack_20c + (int)local_268 * -0x48 + -0x20;
          if (iVar53 < 0) {
            iVar53 = 0;
          }
        }
        iVar50 = *(int *)(puVar49 + 7);
        if (iVar50 != 0) {
          iVar53 = iVar53 + (*(int *)((longlong)puVar49 + 0xdc) >> (bVar35 & 0x1f));
        }
        if (local_25c == 0) {
          lVar39 = puVar49[0x1e];
          uVar26 = *(undefined4 *)(puVar49 + 0x1d);
          *(float *)((longlong)&local_2a0 +
                    lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar74;
          *(float *)((longlong)local_2a8 +
                    lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar77;
          *(uint *)((longlong)&local_2b0 +
                   lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) =
               (uint)(lVar39 != 0);
          *(undefined4 *)
           ((longlong)local_2c0 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + 8) =
               *(undefined4 *)((longlong)puVar49 + 0x44);
          uVar24 = local_178;
          *(undefined4 *)
           ((longlong)local_2c0 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar67;
          *(undefined4 *)
           ((longlong)&local_2c8 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar24;
          fVar74 = fStack_214;
          *(float *)((longlong)&local_2d0 +
                    lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar76;
          *(float *)((longlong)local_2d8 +
                    lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar74;
          uVar67 = *(undefined4 *)((longlong)puVar49 + 0xec);
          *(undefined4 *)
           ((longlong)&local_2e0 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar26;
          *(int *)((longlong)local_2e8 +
                  lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = iVar50;
          *(undefined4 *)
           ((longlong)&local_2f0 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar67;
          uVar67 = *(undefined4 *)(puVar49 + 0xc);
          *(float *)((longlong)local_2f8 +
                    lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 +
                                                                                            lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = fVar75;
          *(undefined4 *)
           ((longlong)&lStack_300 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6) = uVar67;
          *(int *)((longlong)afStack_308 +
                  lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6) = local_208;
          *(undefined8 *)
           (auStack_328 +
           lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86cfe5;
          iVar36 = FUN_14f86dd0c(piVar54,(longlong)puVar49 + 0x7c,iVar53);
        }
        else {
          if (*(int *)(puVar49 + 0x18) < 100) {
            iVar53 = iVar53 + (0x60 >> (bVar34 & 0x1f));
          }
          if (100 < *(int *)(puVar49 + 0x18)) {
            iVar53 = iVar53 - (0x90 >> (bVar34 & 0x1f));
          }
          iVar53 = iVar53 + (int)((fVar76 - fVar18) * __real_43c80000);
          iVar36 = iVar53;
          if ((__real_3f333333 < fVar76) && (iVar36 = 400, 400 < iVar53)) {
            iVar36 = iVar53;
          }
        }
        iVar46 = ((int)(uVar61 + 0x3f + iVar63) >> 6) + 2;
        iVar53 = iVar46;
        if ((local_25c != 0) && (iVar53 = local_188 + 0x167 + iVar63 >> 6, iVar53 < iVar46)) {
          iVar53 = iVar46;
        }
        iVar63 = (int)(iVar36 + uVar61 + 0x20) >> 6;
        if (iVar63 < iVar53) {
          iVar63 = iVar53;
        }
        if (local_1a4 < iVar63) {
          iVar63 = local_1a4;
        }
        iVar53 = iVar63 << 6;
        if (uStack_204 != 0) {
          iVar63 = 2;
          iVar53 = 0x80;
        }
        iVar46 = *(int *)(puVar49 + 0x1c);
        iVar44 = 0;
        if (uStack_204 == 0) {
          iVar44 = (iVar36 + uVar61) - iStack_20c;
        }
        fVar74 = __real_3a83126f;
        if (iVar46 < 0x3ca) {
          *(int *)(puVar49 + 0x1c) = iVar46 + 1;
          fVar74 = fVar20 / (float)(iVar46 + 0x15);
        }
        if ((iVar50 != 0) &&
           (*(int *)((longlong)puVar49 + 0xd4) =
                 *(int *)((longlong)puVar49 + 0xd4) + (iVar53 - iStack_20c), iVar50 != 0)) {
          iVar53 = *(int *)((longlong)puVar49 + 0xd4);
          iVar50 = (int)((float)(((iVar44 << (bVar35 & 0x1f)) - *(int *)(puVar49 + 0x1b)) -
                                *(int *)((longlong)puVar49 + 0xdc)) * fVar74) +
                   *(int *)(puVar49 + 0x1b);
          *(int *)(puVar49 + 0x1b) = iVar50;
          *(int *)((longlong)puVar49 + 0xdc) = -iVar50;
          if (iVar53 < 0) {
            *(undefined4 *)((longlong)puVar49 + 0xd4) = 0;
            iVar53 = -((int)(iVar53 + (iVar53 >> 0x1f & 0x3fU)) >> 6);
            if (uStack_204 != 0) {
              iVar53 = 0;
            }
            iVar63 = iVar63 + iVar53;
          }
        }
        if (local_1a4 < iVar63) {
          iVar63 = local_1a4;
        }
        local_250 = iVar63;
        *(undefined8 *)
         (auStack_328 +
         lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86d172;
        ec_enc_shrink(param_6,iVar63);
      }
      uVar27 = uVar38 + 0xf;
      if (uVar27 <= uVar38) {
        uVar27 = 0xffffffffffffff0;
      }
      *(undefined8 *)
       (auStack_328 +
       lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + 
                                                  lVar8 + lVar7 + lVar6 + -8) = 0x14f86d191;
      lVar42 = -(uVar27 & 0xfffffffffffffff0);
      uVar27 = uVar38 + 0xf;
      lVar39 = (longlong)&local_268 +
               lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + 
                                                  lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
      if (uVar27 <= uVar38) {
        uVar27 = 0xffffffffffffff0;
      }
      *(undefined8 *)
       (auStack_328 +
       lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + lVar10 + 
                                                  lVar9 + lVar8 + lVar7 + lVar6 + -8) = 0x14f86d1b1;
      lVar15 = -(uVar27 & 0xfffffffffffffff0);
      uVar27 = local_220 + 0xf;
      lVar45 = (longlong)&local_268 +
               lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6;
      if (uVar27 <= local_220) {
        uVar27 = 0xffffffffffffff0;
      }
      *(undefined8 *)
       (auStack_328 +
       lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + lVar29 + 
                                                  lVar10 + lVar9 + lVar8 + lVar7 + lVar6 + -8) =
           0x14f86d1d5;
      lVar16 = -(uVar27 & 0xfffffffffffffff0);
      lVar19 = lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
                                                                                             -0x328;
      iVar36 = local_250 * 0x40;
      lVar2 = (longlong)&local_268 +
              lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6;
      *(undefined8 *)
       (auStack_328 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
       -8) = 0x14f86d1ee;
      iVar50 = ec_tell_frac(param_6);
      piVar54 = local_148;
      iVar63 = local_258;
      iVar53 = local_264;
      iVar50 = iVar36 - iVar50;
      if (((local_260 == 0) || (local_264 < 2)) || (iVar50 <= local_264 * 8 + 0x10)) {
        iVar46 = 0;
        local_210 = 0;
      }
      else {
        iVar46 = 8;
      }
      iVar44 = local_258 + -1;
      if (*(int *)((longlong)puVar49 + 0x7c) != 0) {
        if (local_208 < (int)local_268 * 32000) {
          iVar44 = 0xd;
        }
        else if (local_208 < (int)local_268 * 48000) {
          iVar44 = 0x10;
        }
        else if (local_208 < (int)local_268 * 60000) {
          iVar44 = 0x12;
        }
        else {
          iVar44 = ((int)local_268 * 80000 <= local_208) + 0x13;
        }
        if (iVar44 < *(int *)((longlong)puVar49 + 0x9c)) {
          iVar44 = *(int *)((longlong)puVar49 + 0x9c);
        }
      }
      uVar67 = *(undefined4 *)(puVar49 + 0xc);
      if (*(int *)((longlong)puVar49 + 0x44) != 0) {
        iVar44 = 1;
      }
      *(int *)((longlong)local_298 +
              lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = iVar44;
      piVar21 = local_240;
      *(undefined4 *)
       ((longlong)&local_2a0 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           uVar67;
      fVar74 = local_268;
      *(undefined4 *)
       ((longlong)local_2a8 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           1;
      *(undefined1 **)
       ((longlong)&local_2b0 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           param_6;
      *(int *)((longlong)local_2c0 +
              lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
              8) = iVar53;
      *(float *)((longlong)local_2c0 +
                lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = fVar74;
      *(longlong *)
       ((longlong)&local_2c8 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           lVar2;
      *(longlong *)
       ((longlong)&local_2d0 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           lVar39;
      *(longlong *)
       ((longlong)local_2d8 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           lVar45;
      *(undefined4 **)
       ((longlong)&local_2e0 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           local_150;
      *(int *)((longlong)local_2e8 +
              lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = (iVar50 + -1) - iVar46;
      iVar53 = local_25c;
      *(uint **)((longlong)&local_2f0 +
                lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = &local_1bc;
      *(longlong *)
       ((longlong)local_2f8 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           (longlong)puVar49 + 0xec;
      *(undefined4 *)
       ((longlong)&lStack_300 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           local_1a8;
      *(longlong *)
       ((longlong)afStack_308 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           local_138;
      *(undefined8 *)
       (auStack_328 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
       -8) = 0x14f86d324;
      iVar46 = clt_compute_allocation(piVar21,iVar53,iVar63,piVar54);
      puVar23 = local_1c8;
      piVar54 = local_240;
      iVar63 = local_258;
      iVar53 = *(int *)(puVar49 + 0xc);
      iVar50 = iVar46;
      if (iVar53 != 0) {
        iVar44 = iVar53 + -1;
        iVar25 = iVar46;
        if (iVar46 < iVar44) {
          iVar25 = iVar44;
        }
        iVar50 = iVar53 + 1;
        if ((iVar25 <= iVar53 + 1) && (iVar50 = iVar46, iVar46 < iVar44)) {
          iVar50 = iVar44;
        }
      }
      *(float *)((longlong)&local_2f0 +
                lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = local_268;
      pfVar31 = local_190;
      *(undefined1 **)
       ((longlong)local_2f8 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           param_6;
      iVar53 = local_25c;
      *(int *)(puVar49 + 0xc) = iVar50;
      *(longlong *)
       ((longlong)&lStack_300 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           lVar39;
      *(float **)
       ((longlong)afStack_308 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6) =
           pfVar31;
      *(undefined8 *)
       (auStack_328 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
       -8) = 0x14f86d37f;
      quant_fine_energy(piVar54,iVar53,iVar63,puVar23);
      uVar27 = local_1b0 + 0xf;
      if (uVar27 <= local_1b0) {
        uVar27 = 0xffffffffffffff0;
      }
      *(undefined8 *)
       (auStack_328 +
       lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + lVar56 + 
                                                  lVar29 + lVar10 + lVar9 + lVar8 + lVar7 + lVar6 +
       -8) = 0x14f86d3a2;
      lVar22 = local_1e0;
      iVar53 = local_258;
      lVar17 = -(uVar27 & 0xfffffffffffffff0);
      iVar36 = iVar36 - local_210;
      lVar43 = 0;
      if (local_268 == 2.8026e-45) {
        lVar43 = local_1e0 + (longlong)local_234 * 4;
      }
      *(undefined4 *)
       ((longlong)auStack_280 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
       8) = *(undefined4 *)(puVar49 + 9);
      *(undefined4 *)
       ((longlong)auStack_280 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = *(undefined4 *)((longlong)puVar49 + 0x4c);
      *(undefined4 *)
       ((longlong)&local_288 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = *(undefined4 *)((longlong)puVar49 + 0x1c);
      iVar63 = local_264;
      *(undefined8 **)
       ((longlong)local_298 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
       8) = puVar49 + 10;
      *(int *)((longlong)local_298 +
              lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + 
                                                  lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) = iVar46;
      *(int *)((longlong)&local_2a0 +
              lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + 
                                                  lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) = iVar63;
      *(undefined1 **)
       ((longlong)local_2a8 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = param_6;
      *(undefined4 *)
       ((longlong)&local_2b0 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = local_150[0];
      piVar21 = local_140;
      *(int *)((longlong)local_2c0 +
              lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + 
                                                  lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6 + 8) = iVar36;
      piVar54 = local_240;
      *(int **)((longlong)local_2c0 +
               lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + 
                                                  lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) = piVar21;
      *(undefined4 *)
       ((longlong)&local_2c8 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = *(undefined4 *)((longlong)puVar49 + 0xec);
      *(uint *)((longlong)&local_2d0 +
               lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + 
                                                  lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) = local_1bc;
      *(undefined4 *)
       ((longlong)local_2d8 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = *(undefined4 *)((longlong)puVar49 + 0x54);
      *(uint *)((longlong)&local_2e0 +
               lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + 
                                                  lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) = uStack_24c;
      pfVar31 = local_1f8;
      *(longlong *)
       ((longlong)local_2e8 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = lVar45;
      *(float **)
       ((longlong)&local_2f0 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = pfVar31;
      *(longlong *)
       ((longlong)local_2f8 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = (longlong)&local_268 +
             lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28
                                                                                              + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6;
      *(longlong *)
       ((longlong)&lStack_300 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = lVar43;
      *(longlong *)
       ((longlong)afStack_308 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = lVar22;
      iVar63 = local_25c;
      *(undefined8 *)
       (auStack_328 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
       -8) = 0x14f86d48d;
      quant_all_bands(1,piVar54,iVar63,iVar53);
      if (local_210 != 0) {
        iVar53 = *(int *)(puVar49 + 0xf);
        *(undefined8 *)
         (auStack_328 +
         lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
         -8) = 0x14f86d4ab;
        ec_enc_bits(param_6,iVar53 < 2,1);
      }
      puVar23 = local_1c8;
      iVar50 = local_250;
      iVar63 = local_258;
      iVar53 = 0x1f;
      if (*(uint *)(param_6 + 0x20) != 0) {
        for (; *(uint *)(param_6 + 0x20) >> iVar53 == 0; iVar53 = iVar53 + -1) {
        }
      }
      *(float *)((longlong)&local_2e0 +
                lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + 
                                                  lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) = local_268;
      iVar36 = local_25c;
      *(undefined1 **)
       ((longlong)local_2e8 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = param_6;
      *(int *)((longlong)&local_2f0 +
              lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + 
                                                  lVar28 + lVar56 + lVar29 + lVar10 + lVar9 + lVar8 
                                                  + lVar7 + lVar6) =
           (iVar50 * 8 - *(int *)(param_6 + 0x18)) + iVar53 + 1;
      *(longlong *)
       ((longlong)local_2f8 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = lVar2;
      *(longlong *)
       ((longlong)&lStack_300 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = lVar39;
      pfVar31 = local_190;
      *(float **)
       ((longlong)afStack_308 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6)
           = local_190;
      *(undefined8 *)
       (auStack_328 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
       -8) = 0x14f86d4fb;
      quant_energy_finalise(piVar54,iVar36,iVar63,puVar23);
      puVar33 = local_130;
      uVar27 = local_158;
      *(undefined8 *)
       (auStack_328 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
       -8) = 0x14f86d513;
      memset(puVar33,0,uVar27);
      puVar23 = local_1c8;
      pvVar55 = local_1f0;
      uVar38 = local_200;
      uVar27 = local_220;
      fVar74 = __real_bf000000;
      iVar63 = 0;
      iVar53 = iVar63;
      do {
        if ((longlong)local_1f0 < (longlong)local_200) {
          pfVar32 = (float *)(puVar33 + (longlong)iVar63 + (longlong)local_1f0);
          lVar39 = local_200 - (longlong)local_1f0;
          do {
            fVar75 = *(float *)(((longlong)pfVar31 - (longlong)puVar33) + (longlong)pfVar32);
            fVar76 = fVar66;
            if (fVar75 <= fVar66) {
              fVar76 = fVar75;
            }
            if (fVar76 < fVar74) {
              fVar76 = fVar74;
            }
            *pfVar32 = fVar76;
            pfVar32 = pfVar32 + 1;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
        iVar53 = iVar53 + 1;
        iVar63 = iVar63 + iStack_22c;
      } while (iVar53 < (int)local_268);
      if ((uStack_204 != 0) && (0 < local_1e8[0])) {
        puVar33 = local_1c8;
        for (uVar40 = local_1b0 & 0x3fffffffffffffff; uVar40 != 0; uVar40 = uVar40 - 1) {
          *puVar33 = 0xc1e00000;
          puVar33 = puVar33 + 1;
        }
      }
      *(int *)((longlong)puVar49 + 0x6c) = local_174;
      *(undefined4 *)((longlong)puVar49 + 0x74) = local_170;
      *(float *)(puVar49 + 0xe) = local_1b8[0];
      if ((local_248 == 2) && (local_268 == 1.4013e-45)) {
        pvVar58 = (void *)(local_220 + (longlong)local_1c8);
        *(undefined8 *)
         (auStack_328 +
         lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
         -8) = 0x14f86d600;
        memcpy(pvVar58,puVar23,uVar27);
      }
      uVar27 = local_158;
      if (local_260 == 0) {
        pvVar58 = (void *)(local_158 + (longlong)puVar23);
        lVar39 = local_158 * 2;
        *(undefined8 *)
         (auStack_328 +
         lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
         -8) = 0x14f86d620;
        memcpy((void *)((longlong)puVar23 + lVar39),pvVar58,uVar27);
        *(undefined8 *)
         (auStack_328 +
         lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
         -8) = 0x14f86d62f;
        memcpy((void *)(uVar27 + (longlong)puVar23),puVar23,uVar27);
      }
      else {
        pfVar31 = local_128;
        lVar39 = local_120;
        if (0 < local_120) {
          do {
            fVar74 = *pfVar31;
            if (*(float *)((longlong)pfVar31 - local_158) <= *pfVar31) {
              fVar74 = *(float *)((longlong)pfVar31 - local_158);
            }
            *pfVar31 = fVar74;
            lVar39 = lVar39 + -1;
            pfVar31 = pfVar31 + 1;
          } while (lVar39 != 0);
        }
      }
      iVar53 = local_250;
      iVar50 = 0;
      iVar63 = iVar50;
      do {
        if (0 < (longlong)pvVar55) {
          puVar33 = local_118 + iVar50;
          pvVar58 = pvVar55;
          do {
            *(undefined4 *)(((longlong)puVar23 - (longlong)local_118) + (longlong)puVar33) = 0;
            *puVar33 = 0xc1e00000;
            *(undefined4 *)(((longlong)local_128 - (longlong)local_118) + (longlong)puVar33) =
                 0xc1e00000;
            puVar33 = puVar33 + 1;
            pvVar58 = (void *)((longlong)pvVar58 + -1);
          } while (pvVar58 != (void *)0x0);
        }
        if ((longlong)uVar38 < (longlong)local_1d8) {
          puVar33 = local_118 + (longlong)iVar50 + uVar38;
          lVar39 = (longlong)local_1d8 - uVar38;
          do {
            *(undefined4 *)((longlong)puVar33 + ((longlong)puVar23 - (longlong)local_118)) = 0;
            *puVar33 = 0xc1e00000;
            *(undefined4 *)((longlong)puVar33 + ((longlong)local_128 - (longlong)local_118)) =
                 0xc1e00000;
            puVar33 = puVar33 + 1;
            lVar39 = lVar39 + -1;
          } while (lVar39 != 0);
        }
        iVar50 = iVar50 + iStack_22c;
        iVar63 = iVar63 + 1;
      } while (iVar63 < local_248);
      if ((local_260 == 0) && (local_160 == 0)) {
        *(undefined4 *)(local_168 + 0xf) = 0;
      }
      else {
        *(int *)(local_168 + 0xf) = *(int *)(local_168 + 0xf) + 1;
      }
      *(undefined4 *)(puVar49 + 10) = *(undefined4 *)(param_6 + 0x20);
      *(undefined8 *)
       (auStack_328 +
       lVar17 + lVar16 + lVar15 + lVar42 + lVar41 + lVar62 + lVar14 + lVar13 + lVar12 + lVar28 + 
                                                  lVar56 + lVar29 + lVar10 + lVar9 + lVar8 + lVar7 +
                                                                                             lVar6 +
       -8) = 0x14f86d75a;
      ec_enc_done(param_6);
      puVar48 = auStack_328 + lVar17 + lVar19 + 0x328;
      if (*(int *)(param_6 + 0x30) != 0) {
        puVar48 = auStack_328 + lVar17 + lVar19 + 0x328;
        iVar53 = -3;
      }
      goto LAB_14f86d76e;
    }
  }
  puVar48 = auStack_328;
  iVar53 = -1;
LAB_14f86d76e:
  *(undefined8 *)(puVar48 + -8) = 0x14f86d77d;
  return iVar53;
}

// celt_encoder_get_size @ 14f86d7f8

int celt_encoder_get_size(int param_1)

{
  longlong lVar1;
  
  lVar1 = opus_custom_mode_create(48000,0x3c0,0);
  return (*(int *)(lVar1 + 4) + *(int *)(lVar1 + 8) * 4 + 0x400) * param_1 * 4 + 0xfc;
}

// celt_encoder_init @ 14f86d838

undefined8 celt_encoder_init(longlong *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = opus_custom_mode_create(48000,0x3c0,0);
  if (param_3 < 3) {
    if ((param_1 == (longlong *)0x0) || (lVar2 == 0)) {
      uVar3 = 0xfffffff9;
    }
    else {
      memset(param_1,0,
             (longlong)
             (int)((*(int *)(lVar2 + 4) + (*(int *)(lVar2 + 8) + 0x100) * 4) * param_3 * 4 + 0xfc));
      *(undefined4 *)((longlong)param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 4) = 1;
      *param_1 = lVar2;
      *(uint *)(param_1 + 1) = param_3;
      *(uint *)((longlong)param_1 + 0xc) = param_3;
      uVar1 = *(undefined4 *)(lVar2 + 0xc);
      *(undefined4 *)(param_1 + 6) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)(param_1 + 5) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x34) = 1;
      *(undefined4 *)(param_1 + 7) = 1;
      *(undefined4 *)((longlong)param_1 + 0x14) = 1;
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = 5;
      *(undefined4 *)(param_1 + 8) = 0x18;
      opus_custom_encoder_ctl(param_1,0xfbc);
      uVar1 = resampling_factor(param_2);
      *(undefined4 *)(param_1 + 4) = uVar1;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

// celt_preemphasis @ 14f86d940

void celt_preemphasis(float *param_1,float *param_2,uint param_3,int param_4,int param_5,
                     float *param_6,float *param_7,int param_8)

{
  float *pfVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = 0;
  fVar8 = *param_7;
  if (((param_6[1] == __real_00000000) && (param_5 == 1)) && (param_8 == 0)) {
    if (0 < (int)param_3) {
      uVar2 = (ulonglong)param_3;
      do {
        fVar7 = *param_1;
        param_1 = param_1 + param_4;
        fVar6 = fVar7 * __real_47000000 - fVar8;
        fVar8 = fVar7 * __real_47000000 * *param_6;
        *param_2 = fVar6;
        param_2 = param_2 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  else {
    uVar2 = (longlong)(int)param_3 / (longlong)param_5 & 0xffffffff;
    if (param_5 != 1) {
      memset(param_2,0,(longlong)(int)param_3 << 2);
    }
    iVar3 = (int)((longlong)(int)param_3 / (longlong)param_5);
    if (0 < iVar3) {
      pfVar1 = param_2;
      uVar5 = uVar2;
      do {
        fVar7 = *param_1;
        param_1 = param_1 + param_4;
        *pfVar1 = fVar7 * __real_47000000;
        pfVar1 = pfVar1 + param_5;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    fVar7 = __real_c7800000;
    if ((param_8 != 0) && (0 < iVar3)) {
      pfVar1 = param_2;
      do {
        fVar6 = __real_47800000;
        if (*pfVar1 <= __real_47800000) {
          fVar6 = *pfVar1;
        }
        if (fVar6 < fVar7) {
          fVar6 = fVar7;
        }
        *pfVar1 = fVar6;
        pfVar1 = pfVar1 + param_5;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if (0 < (int)param_3) {
      do {
        fVar7 = param_2[lVar4] - fVar8;
        fVar8 = param_2[lVar4] * *param_6;
        param_2[lVar4] = fVar7;
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)param_3);
    }
  }
  *param_7 = fVar8;
  return;
}

// FUN_14f86dae4 @ 14f86dae4

void FUN_14f86dae4(longlong param_1,int param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,int param_7,int param_8,undefined4 param_9)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int local_68;
  int local_64;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar9 = *(int *)(param_1 + 0x28);
  if (param_2 == 0) {
    iVar9 = *(int *)(param_1 + 0x28) - param_7;
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x30) << ((byte)param_7 & 0x1f);
    param_2 = 1;
  }
  local_68 = 0;
  iVar7 = param_2 * iVar1;
  local_64 = 0;
  do {
    iVar8 = 0;
    if (0 < param_2) {
      lVar10 = param_4 + (longlong)local_64 * 4;
      do {
        clt_mdct_forward_c(param_1 + 0x50,
                           param_3 + ((longlong)(iVar1 * iVar8) +
                                     (longlong)((iVar7 + iVar5) * local_68)) * 4,lVar10,
                           *(undefined8 *)(param_1 + 0x48),iVar5,iVar9,param_2,param_9);
        iVar8 = iVar8 + 1;
        lVar10 = lVar10 + 4;
      } while (iVar8 < param_2);
    }
    fVar2 = __real_3f000000;
    local_68 = local_68 + 1;
    local_64 = local_64 + iVar7;
  } while (local_68 < param_6);
  if (((param_6 == 2) && (param_5 == 1)) && (0 < iVar7)) {
    lVar10 = 0;
    iVar5 = iVar7;
    do {
      lVar3 = (longlong)iVar5;
      iVar5 = iVar5 + 1;
      *(float *)(param_4 + lVar10 * 4) =
           *(float *)(param_4 + lVar3 * 4) * fVar2 + *(float *)(param_4 + lVar10 * 4) * fVar2;
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar7);
  }
  if (param_8 != 1) {
    iVar5 = 0;
    iVar9 = 0;
    do {
      iVar8 = (int)((longlong)iVar7 / (longlong)param_8);
      if (0 < iVar8) {
        pfVar6 = (float *)(param_4 + (longlong)iVar9 * 4);
        uVar4 = (longlong)iVar7 / (longlong)param_8 & 0xffffffff;
        do {
          *pfVar6 = (float)param_8 * *pfVar6;
          pfVar6 = pfVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
      memset((void *)(param_4 + (longlong)(param_2 * iVar1 * iVar5 + iVar8) * 4),0,
             (longlong)(iVar7 - iVar8) << 2);
      iVar5 = iVar5 + 1;
      iVar9 = iVar9 + iVar7;
    } while (iVar5 < param_5);
  }
  return;
}

// FUN_14f86dd0c @ 14f86dd0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14f86dd0c(longlong param_1,int *param_2,int param_3,byte param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,float param_10,int param_11,float param_12,
                 int param_13,float param_14,int param_15,int param_16,float param_17,float param_18
                 )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 8);
  if (param_6 != 0) {
    iVar2 = param_6;
  }
  iVar3 = (int)*(short *)(lVar1 + (longlong)iVar2 * 2) << (param_4 & 0x1f);
  if (param_7 == 2) {
    iVar4 = iVar2;
    if (param_8 < iVar2) {
      iVar4 = param_8;
    }
    iVar3 = iVar3 + ((int)*(short *)(lVar1 + (longlong)iVar4 * 2) << (param_4 & 0x1f));
  }
  iVar4 = param_3;
  if ((*param_2 != 0) && ((double)(float)param_2[4] < __real_3fd999999999999a)) {
    iVar4 = param_3 - (int)((__real_3ecccccd - (float)param_2[4]) * (float)(iVar3 << 3));
  }
  if (param_7 == 2) {
    if (param_8 < iVar2) {
      iVar2 = param_8;
    }
    iVar2 = ((int)*(short *)(lVar1 + (longlong)iVar2 * 2) << (param_4 & 0x1f)) - iVar2;
    if (__real_3f800000 <= param_10) {
      param_10 = __real_3f800000;
    }
    fVar5 = (float)iVar4 * (((float)iVar2 * __real_3f4ccccd) / (float)iVar3);
    fVar6 = (param_10 - __real_3dcccccd) * (float)(iVar2 * 8);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    iVar4 = iVar4 - (int)fVar5;
  }
  iVar4 = iVar4 + (param_11 - (0x13 << (param_4 & 0x1f)));
  iVar4 = iVar4 + (int)((param_12 - ___real_3d343958) * (float)iVar4);
  if ((*param_2 != 0) && (param_15 == 0)) {
    fVar5 = 0.0;
    if (0.0 <= (float)param_2[1] - __real_3e19999a) {
      fVar5 = (float)param_2[1] - __real_3e19999a;
    }
    iVar4 = iVar4 - (int)((fVar5 - __real_3df5c28f) * (float)(iVar3 << 3) * __real_bf99999a);
    if (param_13 != 0) {
      iVar4 = iVar4 + (int)((float)(iVar3 << 3) * __real_3f4ccccd);
    }
  }
  if ((param_16 != 0) && (param_15 == 0)) {
    iVar2 = (int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2;
    iVar3 = (int)((float)(iVar3 << 3) * param_17) + iVar4;
    iVar4 = iVar2;
    if (iVar2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  iVar3 = (int)((float)(((int)*(short *)(lVar1 + -4 + (longlong)*(int *)(param_1 + 8) * 2) <<
                        (param_4 & 0x1f)) * param_7 * 8) * param_14);
  iVar2 = iVar4 >> 2;
  if (iVar4 >> 2 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar4 < iVar2) {
    iVar2 = iVar4;
  }
  if (((param_16 == 0) || (param_15 != 0)) && (param_9 != 0)) {
    iVar2 = param_3 - (int)((float)(iVar2 - param_3) * ___real_bf2b851f);
  }
  if ((param_16 == 0) && (param_12 < __real_3e4ccccd)) {
    param_5 = 96000 - param_5;
    if (32000 < param_5) {
      param_5 = 32000;
    }
    if (param_5 < 0) {
      param_5 = 0;
    }
    iVar2 = iVar2 + (int)((float)param_5 * ___real_36500998 * param_18 * (float)iVar2);
  }
  if (param_3 * 2 < iVar2) {
    iVar2 = param_3 * 2;
  }
  return iVar2;
}

// FUN_14f86dffc @ 14f86dffc

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f86dffc(longlong param_1,longlong param_2,int param_3,uint param_4,uint param_5,
                  int param_6,void *param_7,int param_8,longlong param_9,int param_10,int param_11,
                  int param_12,longlong param_13,int param_14,int param_15,float *param_16,
                  int param_17,longlong param_18,int *param_19,longlong param_20,longlong param_21)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  short *psVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  longlong lVar19;
  size_t sVar20;
  ulonglong uVar21;
  undefined4 *puVar22;
  uint uVar23;
  longlong lVar24;
  ulonglong uVar25;
  float *pfVar26;
  longlong lVar27;
  int *piVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 auStack_e0 [4];
  float fStack_bc;
  float local_b8;
  float local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  float *local_a0;
  longlong local_98;
  size_t local_90;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)&local_b8;
  local_b8 = 0.0;
  uVar21 = (longlong)(param_3 * param_6) * 4;
  uVar7 = uVar21 + 0xf;
  if (uVar7 <= uVar21) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_e0[0] = 0x14f86e092;
  lVar3 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = uVar21 + 0xf;
  lVar15 = (longlong)&local_b8 + lVar3;
  if (uVar7 <= uVar21) {
    uVar7 = 0xffffffffffffff0;
  }
  local_b0 = param_4;
  local_a8 = param_3;
  local_98 = param_2;
  local_88 = param_1;
  *(undefined8 *)((longlong)auStack_e0 + lVar3) = 0x14f86e0af;
  lVar4 = -(uVar7 & 0xfffffffffffffff0);
  pfVar9 = (float *)((longlong)&local_b8 + lVar4 + lVar3);
  local_a0 = pfVar9;
  local_90 = (longlong)param_3 << 2;
  *(undefined8 *)((longlong)auStack_e0 + lVar4 + lVar3) = 0x14f86e0d7;
  memset(param_7,0,(longlong)param_3 << 2);
  fVar18 = __real_3f000000;
  lVar29 = (longlong)(int)param_5;
  lVar10 = 0;
  if (0 < (int)param_5) {
    iVar16 = 5;
    pfVar11 = pfVar9;
    do {
      lVar1 = lVar10 * 2;
      lVar10 = lVar10 + 1;
      iVar6 = iVar16 * iVar16;
      iVar16 = iVar16 + 1;
      *pfVar11 = (((float)(int)*(short *)(param_9 + lVar1) * __real_3d800000 + __real_3f000000 +
                  (float)(9 - param_8)) -
                 *(float *)(((longlong)&eMeans - (longlong)pfVar9) + (longlong)pfVar11)) +
                 (float)iVar6 * ___real_3bcb295f;
      pfVar11 = pfVar11 + 1;
    } while (lVar10 < lVar29);
  }
  sVar20 = local_90;
  uVar23 = local_b0;
  iVar16 = 0;
  iVar6 = 0;
  fVar36 = __real_c1ff3333;
  do {
    if (0 < (int)param_5) {
      uVar7 = (ulonglong)param_5;
      pfVar11 = pfVar9;
      do {
        fVar30 = *(float *)((longlong)pfVar11 + ((longlong)iVar6 * 4 - (longlong)pfVar9) + param_1)
                 - *pfVar11;
        if (fVar36 <= fVar30) {
          fVar36 = fVar30;
        }
        pfVar11 = pfVar11 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar16 = iVar16 + 1;
    iVar6 = iVar6 + local_a8;
  } while (iVar16 < param_6);
  uVar7 = local_90 + 0xf;
  if (uVar7 <= local_90) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar4 + lVar3) = 0x14f86e1e7;
  lVar10 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = sVar20 + 0xf;
  pfVar9 = (float *)((longlong)&local_b8 + lVar10 + lVar4 + lVar3);
  if (uVar7 <= sVar20) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar10 + lVar4 + lVar3) = 0x14f86e204;
  pfVar26 = local_a0;
  lVar1 = -(uVar7 & 0xfffffffffffffff0);
  pfVar11 = (float *)((longlong)&local_b8 + lVar1 + lVar10 + lVar4 + lVar3);
  if (0 < (int)param_5) {
    lVar12 = param_1 - (longlong)local_a0;
    lVar19 = (longlong)pfVar9 - (longlong)local_a0;
    pfVar8 = local_a0;
    lVar24 = lVar29;
    do {
      *(float *)(lVar19 + (longlong)pfVar8) = *(float *)(lVar12 + (longlong)pfVar8) - *pfVar8;
      pfVar8 = pfVar8 + 1;
      lVar24 = lVar24 + -1;
      sVar20 = local_90;
    } while (lVar24 != 0);
  }
  if ((param_6 == 2) && (0 < (int)param_5)) {
    pfVar8 = pfVar9;
    lVar24 = lVar29;
    do {
      pfVar2 = (float *)(((longlong)pfVar26 - (longlong)pfVar9) + (longlong)pfVar8);
      fVar33 = *(float *)((longlong)pfVar2 + (sVar20 - (longlong)pfVar26) + param_1) - *pfVar2;
      fVar30 = *pfVar8;
      if (*pfVar8 <= fVar33) {
        fVar30 = fVar33;
      }
      *pfVar8 = fVar30;
      pfVar8 = pfVar8 + 1;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x14f86e29c;
  memcpy(pfVar11,pfVar9,lVar29 << 2);
  fVar30 = __real_40000000;
  if (1 < lVar29) {
    lVar24 = 1;
    do {
      fVar34 = *(float *)((longlong)&fStack_bc + lVar24 * 4 + lVar10 + lVar4 + lVar3) -
               __real_40000000;
      fVar33 = pfVar9[lVar24];
      if (pfVar9[lVar24] <= fVar34) {
        fVar33 = fVar34;
      }
      pfVar9[lVar24] = fVar33;
      lVar24 = lVar24 + 1;
    } while (lVar24 < lVar29);
  }
  lVar24 = (longlong)(int)(param_5 - 2);
  local_80 = lVar24;
  for (; -1 < lVar24; lVar24 = lVar24 + -1) {
    fVar34 = *(float *)((longlong)&local_b4 + lVar24 * 4 + lVar10 + lVar4 + lVar3) - __real_40400000
    ;
    fVar33 = pfVar9[lVar24];
    if (pfVar9[lVar24] <= fVar34) {
      fVar33 = fVar34;
    }
    pfVar9[lVar24] = fVar33;
  }
  if (0 < (int)param_5) {
    uVar7 = (ulonglong)param_5;
    lVar24 = (longlong)pfVar9 - (longlong)pfVar11;
    param_21 = param_21 - (longlong)pfVar11;
    fVar33 = 0.0;
    if (0.0 <= fVar36 - __real_41400000) {
      fVar33 = fVar36 - __real_41400000;
    }
    do {
      fVar36 = *(float *)(lVar24 + (longlong)pfVar11);
      if (fVar36 < fVar33) {
        fVar36 = fVar33;
      }
      fVar34 = *pfVar11;
      *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x14f86e352;
      dVar32 = floor((double)((fVar34 - fVar36) + fVar18));
      iVar16 = -(int)dVar32;
      if ((iVar16 < 0) || (iVar16 < 6)) {
        if (iVar16 < 0) {
          iVar16 = 0;
        }
      }
      else {
        iVar16 = 5;
      }
      *(int *)(param_21 + (longlong)pfVar11) = 0x20 >> ((byte)iVar16 & 0x1f);
      pfVar11 = pfVar11 + 1;
      uVar7 = uVar7 - 1;
      uVar23 = local_b0;
    } while (uVar7 != 0);
  }
  fVar36 = __real_3f800000;
  uVar7 = 0;
  if (((param_15 < 0x33) || (param_14 < 1)) || (param_17 != 0)) {
    if ((int)uVar23 < (int)param_5) {
      puVar22 = (undefined4 *)(param_20 + (longlong)(int)uVar23 * 4);
      for (lVar15 = (longlong)(int)(param_5 - uVar23); lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar22 = 0xd;
        puVar22 = puVar22 + 1;
      }
    }
    goto LAB_14f86e92b;
  }
  local_b4 = 0.0;
  local_ac = 0;
  uVar13 = uVar7;
  uVar21 = uVar7;
  pfVar9 = local_a0;
  do {
    uVar23 = 1;
    iVar16 = (int)uVar7;
    uVar25 = 1;
    pfVar11 = (float *)(lVar15 + (longlong)iVar16 * 4);
    pfVar26 = (float *)(local_98 + (longlong)iVar16 * 4);
    *pfVar11 = *pfVar26;
    if (1 < (int)param_5) {
      lVar24 = lVar15 - local_98;
      pfVar8 = pfVar26;
      fVar33 = local_b4;
      do {
        fVar34 = pfVar8[1];
        fVar31 = *(float *)(lVar24 + (longlong)pfVar8) + __real_3fc00000;
        uVar5 = uVar23;
        uVar13 = uVar25;
        if (fVar34 <= *pfVar8 + fVar18) {
          uVar5 = (uint)fVar33;
          uVar13 = uVar21;
        }
        uVar21 = uVar13;
        fVar33 = (float)uVar5;
        uVar23 = uVar23 + 1;
        uVar25 = uVar25 + 1;
        if (fVar34 <= fVar31) {
          fVar31 = fVar34;
        }
        *(float *)(lVar24 + 4 + (longlong)pfVar8) = fVar31;
        pfVar8 = pfVar8 + 1;
      } while ((int)uVar23 < (int)param_5);
      local_b4 = fVar33;
      uVar13 = (ulonglong)(uint)fVar33;
    }
    iVar6 = (int)uVar13 + -1;
    if (-1 < iVar6) {
      pfVar8 = pfVar11 + (uVar21 - 1);
      lVar24 = lVar15 - local_98;
      lVar12 = local_98 - lVar15;
      do {
        pfVar2 = (float *)((longlong)pfVar8 + lVar12);
        fVar34 = *(float *)(lVar24 + 4 + (longlong)pfVar2) + fVar30;
        fVar33 = *pfVar2;
        if (fVar33 <= fVar34) {
          fVar34 = fVar33;
        }
        fVar33 = *pfVar8;
        if (fVar34 <= *pfVar8) {
          fVar33 = fVar34;
        }
        *pfVar8 = fVar33;
        pfVar8 = pfVar8 + -1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    lVar24 = local_98;
    lVar19 = 2;
    lVar12 = local_80;
    uVar25 = uVar7;
    if (2 < local_80) {
      do {
        iVar6 = (int)uVar7;
        *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x14f86e4b6;
        fVar34 = (float)FUN_14f86e988(lVar24 + (longlong)iVar6 * 4);
        iVar16 = (int)uVar25;
        uVar7 = (ulonglong)(iVar6 + 1);
        fVar33 = pfVar11[lVar19];
        if (pfVar11[lVar19] <= fVar34 - fVar36) {
          fVar33 = fVar34 - fVar36;
        }
        pfVar11[lVar19] = fVar33;
        lVar19 = lVar19 + 1;
        pfVar9 = local_a0;
      } while (lVar19 < lVar12);
    }
    lVar24 = local_98;
    fVar34 = __real_40800000;
    fVar33 = *pfVar26;
    if (fVar33 < pfVar26[1] || fVar33 == pfVar26[1]) {
      fVar31 = pfVar26[1];
      fVar35 = fVar33;
    }
    else {
      fVar35 = pfVar26[1];
      fVar31 = fVar33;
    }
    fVar33 = pfVar26[2];
    if ((fVar33 <= fVar31) && (fVar31 = fVar33, fVar33 <= fVar35)) {
      fVar31 = fVar35;
    }
    fVar31 = fVar31 - fVar36;
    lVar12 = (longlong)(int)(iVar16 + param_5);
    fVar33 = *pfVar11;
    if (*pfVar11 <= fVar31) {
      fVar33 = fVar31;
    }
    fVar35 = pfVar11[1];
    if (pfVar11[1] <= fVar31) {
      fVar35 = fVar31;
    }
    *pfVar11 = fVar33;
    pfVar11[1] = fVar35;
    fVar33 = *(float *)(lVar24 + -0xc + lVar12 * 4);
    fVar35 = *(float *)(lVar24 + -8 + lVar12 * 4);
    fVar31 = fVar33;
    if (fVar35 < fVar33) {
      fVar31 = fVar35;
      fVar35 = fVar33;
    }
    fVar33 = *(float *)(lVar24 + -4 + lVar12 * 4);
    if ((fVar33 <= fVar35) && (fVar35 = fVar33, fVar33 <= fVar31)) {
      fVar35 = fVar31;
    }
    fVar35 = fVar35 - fVar36;
    fVar33 = pfVar11[lVar29 + -2];
    if (pfVar11[lVar29 + -2] <= fVar35) {
      fVar33 = fVar35;
    }
    fVar31 = pfVar11[lVar29 + -1];
    if (pfVar11[lVar29 + -1] <= fVar35) {
      fVar31 = fVar35;
    }
    pfVar11[lVar29 + -2] = fVar33;
    pfVar11[lVar29 + -1] = fVar31;
    if (0 < lVar29) {
      lVar12 = (longlong)pfVar9 - (longlong)pfVar11;
      lVar24 = lVar29;
      do {
        fVar33 = *(float *)(lVar12 + (longlong)pfVar11);
        fVar31 = *pfVar11;
        if (*pfVar11 <= fVar33) {
          fVar31 = fVar33;
        }
        *pfVar11 = fVar31;
        pfVar11 = pfVar11 + 1;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    lVar24 = (longlong)local_a8;
    local_ac = local_ac + 1;
    uVar7 = (ulonglong)(uint)(iVar16 + local_a8);
  } while (local_ac < param_6);
  uVar7 = (ulonglong)(int)local_b0;
  if (param_6 == 2) {
    if ((int)local_b0 < (int)param_5) {
      pfVar9 = (float *)(lVar15 + (lVar24 + uVar7) * 4);
      lVar27 = local_88 - local_90;
      lVar19 = local_88 - lVar15;
      lVar12 = (longlong)(int)(param_5 - local_b0);
      do {
        fVar36 = *pfVar9;
        if (*pfVar9 <= pfVar9[-lVar24] - __real_40800000) {
          fVar36 = pfVar9[-lVar24] - __real_40800000;
        }
        *pfVar9 = fVar36;
        fVar30 = pfVar9[-lVar24];
        if (pfVar9[-lVar24] <= fVar36 - __real_40800000) {
          fVar30 = fVar36 - __real_40800000;
        }
        pfVar9[-lVar24] = fVar30;
        fVar33 = *(float *)(lVar19 + (longlong)pfVar9) - *pfVar9;
        fVar30 = *(float *)((lVar27 - lVar15) + (longlong)pfVar9) - fVar30;
        fVar36 = 0.0;
        if (0.0 <= fVar33) {
          fVar36 = fVar33;
        }
        fVar33 = 0.0;
        if (0.0 <= fVar30) {
          fVar33 = fVar30;
        }
        pfVar9[-lVar24] = (fVar36 + fVar33) * fVar18;
        pfVar9 = pfVar9 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  else if ((longlong)uVar7 < lVar29) {
    lVar12 = local_88 - lVar15;
    pfVar9 = (float *)(lVar15 + uVar7 * 4);
    lVar24 = lVar29 - uVar7;
    do {
      fVar30 = *(float *)((longlong)pfVar9 + lVar12) - *pfVar9;
      fVar36 = 0.0;
      if (0.0 <= fVar30) {
        fVar36 = fVar30;
      }
      *pfVar9 = fVar36;
      pfVar9 = pfVar9 + 1;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
  }
  uVar21 = uVar7;
  if ((longlong)uVar7 < lVar29) {
    pfVar9 = (float *)(lVar15 + uVar7 * 4);
    lVar12 = lVar29 - uVar7;
    lVar24 = lVar12;
    do {
      fVar36 = *(float *)((param_18 - lVar15) + (longlong)pfVar9);
      fVar30 = *pfVar9;
      if (*pfVar9 <= fVar36) {
        fVar30 = fVar36;
      }
      *pfVar9 = fVar30;
      pfVar9 = pfVar9 + 1;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    piVar28 = (int *)(param_20 + uVar7 * 4);
    do {
      fVar36 = *(float *)((longlong)piVar28 + (lVar15 - param_20));
      if (fVar34 <= fVar36) {
        fVar36 = fVar34;
      }
      *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x14f86e702;
      dVar32 = exp((double)fVar36 * ___real_3fe62e42fefa39ef);
      *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x14f86e71e;
      dVar32 = floor((double)((float)dVar32 * __real_41500000 + fVar18));
      *piVar28 = (int)dVar32;
      piVar28 = piVar28 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    uVar21 = (ulonglong)local_b0;
  }
  uVar13 = uVar7;
  if (((param_11 == 0) || (param_12 != 0)) && (param_10 == 0)) {
    uVar25 = uVar7;
    if ((longlong)uVar7 < lVar29) {
      do {
        *(float *)(lVar15 + uVar25 * 4) = *(float *)(lVar15 + uVar25 * 4) * fVar18;
        uVar25 = uVar25 + 1;
      } while ((longlong)uVar25 < lVar29);
      goto joined_r0x00014f86e778;
    }
  }
  else {
joined_r0x00014f86e778:
    for (; (longlong)uVar13 < lVar29; uVar13 = uVar13 + 1) {
      if ((longlong)uVar13 < 8) {
        fVar36 = *(float *)(lVar15 + uVar13 * 4);
        *(float *)(lVar15 + uVar13 * 4) = fVar36 + fVar36;
      }
      if (0xb < (longlong)uVar13) {
        *(float *)(lVar15 + uVar13 * 4) = *(float *)(lVar15 + uVar13 * 4) * fVar18;
      }
    }
  }
  if (*param_19 != 0) {
    uVar23 = param_5;
    if (0x13 < (int)param_5) {
      uVar23 = 0x13;
    }
    for (uVar13 = uVar7; (longlong)uVar13 < (longlong)(int)uVar23; uVar13 = uVar13 + 1) {
      *(float *)(lVar15 + uVar13 * 4) =
           (float)*(byte *)(uVar13 + 0x2c + (longlong)param_19) * __real_3c800000 +
           *(float *)(lVar15 + uVar13 * 4);
    }
  }
  if ((int)uVar21 < (int)param_5) {
    pfVar9 = (float *)(lVar15 + uVar7 * 4);
    psVar14 = (short *)(param_13 + uVar7 * 2);
    do {
      fVar18 = *pfVar9;
      if (fVar34 <= *pfVar9) {
        fVar18 = fVar34;
      }
      *pfVar9 = fVar18;
      iVar16 = ((int)psVar14[1] - (int)*psVar14) * param_6 << ((byte)param_14 & 0x1f);
      if (iVar16 < 6) {
        iVar6 = (int)fVar18;
        iVar16 = iVar6 * iVar16 * 8;
      }
      else if (iVar16 < 0x31) {
        iVar6 = (int)(((float)iVar16 * fVar18) / __real_40c00000);
        iVar16 = iVar6 * 0x30;
      }
      else {
        iVar6 = (int)(fVar18 * __real_41000000);
        iVar16 = iVar6 * iVar16 * 8;
        iVar16 = (int)((iVar16 >> 0x1f & 7U) + iVar16) >> 3;
      }
      if ((param_11 == 0) || ((param_12 != 0 && (param_10 == 0)))) {
        iVar17 = param_15 * 2;
        iVar17 = iVar17 / 3 + (iVar17 >> 0x1f) +
                 (int)(((longlong)iVar17 / 3 + ((longlong)iVar17 >> 0x3f) & 0xffffffffU) >> 0x1f);
        if (iVar17 < iVar16 + (int)local_b8 >> 6) {
          fVar18 = (float)(iVar17 * 0x40);
          *(int *)((longlong)param_7 + (longlong)(int)uVar21 * 4) = (int)fVar18 - (int)local_b8;
          local_b8 = fVar18;
          break;
        }
      }
      local_b8 = (float)((int)local_b8 + iVar16);
      uVar23 = (int)uVar21 + 1;
      uVar21 = (ulonglong)uVar23;
      *(int *)((longlong)pfVar9 + ((longlong)param_7 - lVar15)) = iVar6;
      pfVar9 = pfVar9 + 1;
      psVar14 = psVar14 + 1;
    } while ((int)uVar23 < (int)param_5);
  }
LAB_14f86e92b:
  *param_16 = local_b8;
  *(undefined8 *)((longlong)auStack_e0 + lVar1 + lVar10 + lVar4 + lVar3) = 0x14f86e947;
  return;
}

// FUN_14f86e988 @ 14f86e988

float FUN_14f86e988(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *param_1;
  fVar4 = param_1[2];
  if (fVar3 < param_1[1] || fVar3 == param_1[1]) {
    fVar1 = param_1[1];
  }
  else {
    fVar1 = fVar3;
    fVar3 = param_1[1];
  }
  fVar6 = param_1[3];
  if (fVar6 < param_1[4] || fVar6 == param_1[4]) {
    fVar5 = param_1[4];
  }
  else {
    fVar5 = fVar6;
    fVar6 = param_1[4];
  }
  fVar2 = fVar1;
  if (fVar6 < fVar3) {
    fVar2 = fVar5;
    fVar5 = fVar1;
    fVar6 = fVar3;
  }
  if (fVar4 <= fVar2) {
    if (fVar4 < fVar6) {
      if (fVar6 <= fVar2) {
        fVar2 = fVar6;
      }
      return fVar2;
    }
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
  }
  else {
    if (fVar6 <= fVar2) {
      if (fVar2 <= fVar5) {
        fVar5 = fVar2;
      }
      return fVar5;
    }
    if (fVar6 <= fVar4) {
      fVar4 = fVar6;
    }
  }
  return fVar4;
}

// opus_custom_encoder_ctl @ 14f86ea04

undefined8 opus_custom_encoder_ctl(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  uint local_res18;
  
  local_res18 = (uint)param_3;
  if (param_2 < 0xfd0) {
    if (param_2 == 0xfcf) {
      if (param_3 == (longlong *)0x0) {
        return 0xffffffff;
      }
      uVar6 = (undefined4)param_1[9];
    }
    else {
      if (param_2 < 0xfbd) {
        if (param_2 == 0xfbc) {
          iVar9 = *(int *)(*param_1 + 8);
          iVar1 = *(int *)(*param_1 + 4);
          lVar7 = (longlong)(iVar9 * (int)param_1[1]);
          puVar8 = (undefined4 *)
                   ((longlong)param_1 +
                   ((longlong)((iVar1 + 0x400) * (int)param_1[1]) + 0x3f + lVar7) * 4);
          memset(param_1 + 10,0,
                 (longlong)((iVar1 + (iVar9 + 0x100) * 4) * (int)param_1[1] * 4 + 0xfc) - 0x50);
          iVar9 = 0;
          if (0 < *(int *)(*param_1 + 8) * (int)param_1[1]) {
            do {
              puVar8[lVar7] = 0xc1e00000;
              iVar9 = iVar9 + 1;
              *puVar8 = 0xc1e00000;
              puVar8 = puVar8 + 1;
            } while (iVar9 < *(int *)(*param_1 + 8) * (int)param_1[1]);
          }
          *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
          *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
          *(undefined4 *)((longlong)param_1 + 0x54) = 2;
          *(undefined4 *)((longlong)param_1 + 0x5c) = 0x100;
          *(undefined8 *)((longlong)param_1 + 100) = 0;
          return 0;
        }
        if (param_2 == 0xfa2) {
          if (((int)local_res18 < 0x1f5) && (local_res18 != 0xffffffff)) {
            return 0xffffffff;
          }
          uVar5 = (int)param_1[1] * 260000;
          if ((int)local_res18 < (int)uVar5) {
            uVar5 = local_res18;
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar5;
          return 0;
        }
        if (param_2 == 0xfa6) {
          *(uint *)(param_1 + 6) = local_res18;
          return 0;
        }
        if (param_2 != 0xfaa) {
          if (param_2 == 0xfae) {
            if (local_res18 < 0x65) {
              *(uint *)((longlong)param_1 + 0x3c) = local_res18;
              return 0;
            }
            return 0xffffffff;
          }
          if (param_2 == 0xfb4) {
            *(uint *)(param_1 + 7) = local_res18;
            return 0;
          }
          return 0xfffffffb;
        }
        if (local_res18 < 0xb) {
          *(uint *)((longlong)param_1 + 0x1c) = local_res18;
          return 0;
        }
        return 0xffffffff;
      }
      if (param_2 == 0xfbf) {
        if (param_3 == (longlong *)0x0) {
          return 0xffffffff;
        }
        uVar6 = (undefined4)param_1[10];
      }
      else {
        if (param_2 == 0xfc4) {
          if (local_res18 - 8 < 0x11) {
            *(uint *)(param_1 + 8) = local_res18;
            return 0;
          }
          return 0xffffffff;
        }
        if (param_2 != 0xfc5) {
          if (param_2 != 0xfce) {
            return 0xfffffffb;
          }
          if (local_res18 < 2) {
            *(uint *)(param_1 + 9) = local_res18;
            return 0;
          }
          return 0xffffffff;
        }
        uVar6 = (undefined4)param_1[8];
      }
    }
    *(undefined4 *)param_3 = uVar6;
    return 0;
  }
  if (0x2720 < param_2) {
    if (param_2 == 0x2726) {
      if (param_3 == (longlong *)0x0) {
        return 0;
      }
      lVar7 = param_3[1];
      lVar2 = param_3[2];
      lVar3 = param_3[3];
      *(longlong *)((longlong)param_1 + 0x7c) = *param_3;
      *(longlong *)((longlong)param_1 + 0x84) = lVar7;
      lVar7 = param_3[4];
      lVar4 = param_3[5];
      *(longlong *)((longlong)param_1 + 0x8c) = lVar2;
      *(longlong *)((longlong)param_1 + 0x94) = lVar3;
      lVar2 = param_3[6];
      lVar3 = param_3[7];
      *(longlong *)((longlong)param_1 + 0x9c) = lVar7;
      *(longlong *)((longlong)param_1 + 0xa4) = lVar4;
      *(longlong *)((longlong)param_1 + 0xac) = lVar2;
      *(longlong *)((longlong)param_1 + 0xb4) = lVar3;
      return 0;
    }
    if (param_2 == 0x2728) {
      *(uint *)((longlong)param_1 + 0x44) = local_res18;
      return 0;
    }
    if (param_2 == 0x272a) {
      param_1[0x1e] = (longlong)param_3;
      return 0;
    }
    if (param_2 == 0x272c) {
      if (param_3 == (longlong *)0x0) {
        return 0;
      }
      *(longlong *)((longlong)param_1 + 0xbc) = *param_3;
      return 0;
    }
    return 0xfffffffb;
  }
  if (param_2 == 0x2720) {
    *(uint *)((longlong)param_1 + 0x34) = local_res18;
    return 0;
  }
  if (param_2 == 0x2712) {
    if (local_res18 < 3) {
      *(uint *)(param_1 + 3) = (uint)((int)local_res18 < 2);
      *(uint *)(param_1 + 2) = (uint)(local_res18 == 0);
      return 0;
    }
    return 0xffffffff;
  }
  if (param_2 == 0x2718) {
    if (local_res18 - 1 < 2) {
      *(uint *)((longlong)param_1 + 0xc) = local_res18;
      return 0;
    }
    return 0xffffffff;
  }
  if (param_2 != 0x271a) {
    if (param_2 == 0x271c) {
      if ((int)local_res18 < 1) {
        return 0xffffffff;
      }
      if ((int)local_res18 <= *(int *)(*param_1 + 8)) {
        *(uint *)(param_1 + 5) = local_res18;
        return 0;
      }
      return 0xffffffff;
    }
    if (param_2 != 0x271f) {
      return 0xfffffffb;
    }
    if (param_3 != (longlong *)0x0) {
      *param_3 = *param_1;
      return 0;
    }
    return 0xffffffff;
  }
  if ((int)local_res18 < 0) {
    return 0xffffffff;
  }
  if ((int)local_res18 < *(int *)(*param_1 + 8)) {
    *(uint *)((longlong)param_1 + 0x24) = local_res18;
    return 0;
  }
  return 0xffffffff;
}

// FUN_14f86ed3c @ 14f86ed3c

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool FUN_14f86ed3c(longlong param_1,longlong param_2,int param_3,int param_4,int param_5,int param_6
                  )

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_9c;
  float local_98 [28];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)local_98;
  lVar2 = (longlong)param_4;
  fVar10 = 0.0;
  fVar7 = *(float *)(param_2 + lVar2 * 4);
  iVar5 = param_4 + 1;
  if (param_6 == 1) {
    lVar6 = (longlong)iVar5;
    local_98[lVar2] = fVar7;
    if (lVar6 < param_5) {
      pfVar1 = (float *)(param_2 + lVar6 * 4);
      lVar6 = param_5 - lVar6;
      do {
        fVar7 = *(float *)((longlong)&fStack_9c + -param_2 + (longlong)pfVar1) - __real_3f800000;
        if (fVar7 <= *pfVar1) {
          fVar7 = *pfVar1;
        }
        *(float *)((longlong)local_98 + -param_2 + (longlong)pfVar1) = fVar7;
        pfVar1 = pfVar1 + 1;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  else {
    fVar8 = *(float *)(param_2 + (longlong)(param_4 + param_3) * 4);
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    local_98[lVar2] = fVar7;
    if (iVar5 < param_5) {
      pfVar1 = &fStack_9c + iVar5;
      fVar7 = *pfVar1;
      uVar4 = (ulonglong)(uint)(param_5 - iVar5);
      do {
        fVar8 = *(float *)((param_2 - (longlong)local_98) + 4 + (longlong)pfVar1);
        fVar7 = fVar7 - __real_3f800000;
        fVar9 = *(float *)((((longlong)param_3 * 4 + 4) - (longlong)local_98) + param_2 +
                          (longlong)pfVar1);
        if (fVar8 <= fVar9) {
          fVar8 = fVar9;
        }
        if (fVar7 <= fVar8) {
          fVar7 = fVar8;
        }
        pfVar1 = pfVar1 + 1;
        *pfVar1 = fVar7;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  for (lVar6 = (longlong)(param_5 + -2); lVar2 <= lVar6; lVar6 = lVar6 + -1) {
    fVar7 = local_98[lVar6];
    if (local_98[lVar6] <= local_98[lVar6 + 1] - __real_3f800000) {
      fVar7 = local_98[lVar6 + 1] - __real_3f800000;
    }
    local_98[lVar6] = fVar7;
  }
  iVar5 = 0;
  if (param_4 < 2) {
    param_4 = 2;
  }
  iVar3 = iVar5;
  do {
    if ((longlong)param_4 < (longlong)(param_5 + -1)) {
      lVar2 = (longlong)param_4;
      do {
        fVar7 = 0.0;
        if (0.0 <= local_98[lVar2]) {
          fVar7 = local_98[lVar2];
        }
        fVar8 = *(float *)(param_1 + lVar2 * 4 + (longlong)iVar5 * 4);
        fVar9 = 0.0;
        if (0.0 <= fVar8) {
          fVar9 = fVar8;
        }
        lVar2 = lVar2 + 1;
        fVar8 = 0.0;
        if (0.0 <= fVar9 - fVar7) {
          fVar8 = fVar9 - fVar7;
        }
        fVar10 = fVar8 + fVar10;
      } while (lVar2 < param_5 + -1);
    }
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + param_3;
  } while (iVar3 < param_6);
  return __real_3f800000 < fVar10 / (float)(((param_5 - param_4) + -1) * param_6);
}

// FUN_14f86ef1c @ 14f86ef1c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_14f86ef1c(longlong *param_1,longlong param_2,longlong param_3,int param_4,int param_5,
             undefined4 param_6,int *param_7,float *param_8,int *param_9,int param_10,int param_11,
             int *param_12)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  void *pvVar12;
  uint uVar13;
  longlong lVar14;
  void *pvVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  size_t sVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  uint uVar28;
  double dVar29;
  float fVar30;
  undefined8 uStack_130;
  undefined1 auStack_128 [32];
  ulonglong uStack_108;
  undefined4 auStack_100 [14];
  int local_c8;
  int local_c4;
  int local_c0;
  int iStack_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78 [2];
  void *local_68;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)&local_c8;
  local_80 = *param_1;
  local_98 = (longlong)param_5;
  local_c4 = *(int *)(local_80 + 4);
  lVar14 = (longlong)local_c4;
  uVar20 = (longlong)((param_5 + 0x400) * param_4) * 4;
  uVar11 = uVar20 + 0xf;
  if (uVar11 <= uVar20) {
    uVar11 = 0xffffffffffffff0;
  }
  uStack_130 = 0x14f86efc0;
  plVar16 = local_78;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  puVar17 = auStack_128 + lVar4;
  local_78[0] = (longlong)&local_c8 + lVar4;
  iStack_bc = local_c4 + param_5;
  local_78[1] = (longlong)&local_c8 + lVar4 + (longlong)(param_5 + 0x400) * 4;
  iVar23 = 0;
  iVar24 = 0;
  iVar21 = 0;
  local_c0 = param_4;
  local_a8 = param_2;
  local_a0 = lVar14;
  local_90 = param_1;
  local_88 = param_3;
  do {
    pvVar15 = (void *)*plVar16;
    pvVar12 = (void *)(local_88 + (longlong)iVar21 * 4);
    *(undefined8 *)(auStack_128 + lVar4 + -8) = 0x14f86f014;
    memcpy(pvVar15,pvVar12,0x1000);
    lVar3 = *plVar16;
    sVar19 = local_98 << 2;
    *(undefined8 *)(auStack_128 + lVar4 + -8) = 0x14f86f035;
    memcpy((void *)(lVar3 + 0x1000),(void *)(param_2 + (iVar24 + lVar14) * 4),sVar19);
    plVar7 = local_90;
    fVar6 = __real_3f000000;
    iVar24 = iVar24 + iStack_bc;
    plVar16 = plVar16 + 1;
    iVar23 = iVar23 + 1;
    iVar21 = iVar21 + 0x400;
  } while (iVar23 < param_4);
  iVar21 = 0;
  fVar30 = 0.0;
  if (param_10 == 0) {
    local_c8 = 0xf;
  }
  else {
    uVar20 = (longlong)(param_5 + 0x400 >> 1) * 4;
    uVar11 = uVar20 + 0xf;
    if (uVar11 <= uVar20) {
      uVar11 = 0xffffffffffffff0;
    }
    *(undefined8 *)(auStack_128 + lVar4 + -8) = 0x14f86f0a5;
    iVar23 = local_c0;
    lVar3 = -(uVar11 & 0xfffffffffffffff0);
    puVar17 = auStack_128 + lVar3 + lVar4;
    lVar14 = (longlong)&local_c8 + lVar3 + lVar4;
    *(undefined4 *)((longlong)&uStack_108 + lVar3 + lVar4) =
         *(undefined4 *)((longlong)plVar7 + 0x4c);
    *(undefined8 *)(auStack_128 + lVar3 + lVar4 + -8) = 0x14f86f0c7;
    pitch_downsample(local_78,lVar14,param_5 + 0x400,iVar23);
    *(undefined4 *)((longlong)auStack_100 + lVar3 + lVar4) =
         *(undefined4 *)((longlong)plVar7 + 0x4c);
    *(int **)((longlong)&uStack_108 + lVar3 + lVar4) = &local_c8;
    *(undefined8 *)(auStack_128 + lVar3 + lVar4 + -8) = 0x14f86f0ef;
    pitch_search(&stack0x00000738 + lVar3 + lVar4,lVar14,param_5,0x3d3);
    lVar5 = plVar7[0xe];
    local_c8 = 0x400 - local_c8;
    *(undefined4 *)((longlong)auStack_100 + lVar3 + lVar4 + 0x10) =
         *(undefined4 *)((longlong)plVar7 + 0x4c);
    uVar10 = *(undefined4 *)((longlong)plVar7 + 0x6c);
    *(int *)((longlong)auStack_100 + lVar3 + lVar4 + 8) = (int)lVar5;
    *(undefined4 *)((longlong)auStack_100 + lVar3 + lVar4) = uVar10;
    *(int **)((longlong)&uStack_108 + lVar3 + lVar4) = &local_c8;
    *(undefined8 *)(auStack_128 + lVar3 + lVar4 + -8) = 0x14f86f131;
    fVar26 = (float)remove_doubling(lVar14,0x400,0xf,param_5);
    fVar26 = fVar26 * __real_3f333333;
    if (0x3fe < local_c8) {
      local_c8 = 0x3fe;
    }
    if (2 < *(int *)((longlong)plVar7 + 0x3c)) {
      fVar26 = fVar26 * fVar6;
    }
    if (4 < *(int *)((longlong)plVar7 + 0x3c)) {
      fVar26 = fVar26 * fVar6;
    }
    puVar18 = auStack_128 + lVar3 + lVar4;
    if (*(int *)((longlong)plVar7 + 0x3c) < 9) goto LAB_14f86f175;
  }
  fVar26 = 0.0;
  puVar18 = puVar17;
LAB_14f86f175:
  iVar23 = local_c8;
  if (*param_12 != 0) {
    fVar26 = fVar26 * (float)param_12[10];
  }
  uVar9 = local_c8 - *(int *)((longlong)plVar7 + 0x6c);
  uVar13 = (int)uVar9 >> 0x1f;
  fVar27 = __real_3e4ccccd;
  if (local_c8 < (int)(((uVar9 ^ uVar13) - uVar13) * 10)) {
    fVar27 = __real_3ecccccd;
  }
  if (param_11 < 0x19) {
    fVar27 = fVar27 + __real_3dcccccd;
  }
  if (param_11 < 0x23) {
    fVar27 = fVar27 + __real_3dcccccd;
  }
  fVar1 = *(float *)(plVar7 + 0xe);
  if (__real_3ecccccd < fVar1) {
    fVar27 = fVar27 + __real_bdcccccd;
  }
  if (__real_3f0ccccd < fVar1) {
    fVar27 = fVar27 + __real_bdcccccd;
  }
  if (fVar27 <= __real_3e4ccccd) {
    fVar27 = __real_3e4ccccd;
  }
  if (fVar27 <= fVar26) {
    if ((float)(double)CONCAT44((uint)((ulonglong)(double)(fVar26 - fVar1) >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                SUB84((double)(fVar26 - fVar1),0) &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) < __real_3dcccccd) {
      fVar26 = fVar1;
    }
    *(undefined8 *)(puVar18 + -8) = 0x14f86f24d;
    dVar29 = floor((double)((fVar26 * __real_42000000) / __real_40400000 + fVar6));
    local_b0 = 1;
    local_b4 = (int)dVar29 + -1;
    if (7 < local_b4) {
      local_b4 = 7;
    }
    if (local_b4 < 0) {
      local_b4 = iVar21;
    }
    fVar30 = (float)(local_b4 + 1) * ___real_3dc00000;
  }
  else {
    local_b0 = 0;
    local_b4 = 0;
  }
  uVar9 = __xmm_80000000800000008000000080000000;
  local_90 = (longlong *)(local_a0 << 2);
  local_b8 = 0;
  uVar13 = (uint)fVar30 ^ __xmm_80000000800000008000000080000000;
  plVar16 = local_78;
  iVar24 = iVar21;
  iVar22 = iVar21;
  do {
    plVar8 = local_90;
    iVar25 = *(int *)(local_80 + 0x30) - local_c4;
    uVar10 = 0xf;
    if (0xf < *(int *)((longlong)plVar7 + 0x6c)) {
      uVar10 = *(undefined4 *)((longlong)plVar7 + 0x6c);
    }
    *(undefined4 *)((longlong)plVar7 + 0x6c) = uVar10;
    pvVar12 = (void *)((longlong)plVar7 + ((longlong)iVar22 + 0x3f) * 4);
    pvVar15 = (void *)(local_a8 + (longlong)iVar24 * 4);
    local_68 = pvVar12;
    *(undefined8 *)(puVar18 + -8) = 0x14f86f2e8;
    memcpy(pvVar15,pvVar12,(size_t)plVar8);
    if (iVar25 != 0) {
      uVar10 = *(undefined4 *)((longlong)plVar7 + 0x74);
      lVar4 = *plVar16;
      uVar28 = *(uint *)(plVar7 + 0xe) ^ uVar9;
      uVar2 = *(undefined4 *)((longlong)plVar7 + 0x6c);
      lVar14 = local_a8 + (iVar24 + local_a0) * 4;
      *(undefined4 *)(puVar18 + 0x58) = *(undefined4 *)((longlong)plVar7 + 0x4c);
      *(undefined4 *)(puVar18 + 0x50) = 0;
      *(undefined8 *)(puVar18 + 0x48) = 0;
      *(undefined4 *)(puVar18 + 0x40) = uVar10;
      *(undefined4 *)(puVar18 + 0x38) = uVar10;
      *(uint *)(puVar18 + 0x30) = uVar28;
      *(uint *)(puVar18 + 0x28) = uVar28;
      *(int *)(puVar18 + 0x20) = iVar25;
      *(undefined8 *)(puVar18 + -8) = 0x14f86f34c;
      comb_filter(lVar14,lVar4 + 0x1000,uVar2,uVar2);
      iVar23 = local_c8;
    }
    lVar4 = *plVar16;
    uVar28 = *(uint *)(plVar7 + 0xe);
    lVar14 = local_a8 + (local_a0 + iVar25 + (longlong)iVar24) * 4;
    *(undefined4 *)(puVar18 + 0x58) = *(undefined4 *)((longlong)plVar7 + 0x4c);
    *(int *)(puVar18 + 0x50) = local_c4;
    *(undefined8 *)(puVar18 + 0x48) = *(undefined8 *)(local_80 + 0x48);
    *(undefined4 *)(puVar18 + 0x40) = param_6;
    *(undefined4 *)(puVar18 + 0x38) = *(undefined4 *)((longlong)plVar7 + 0x74);
    *(uint *)(puVar18 + 0x30) = uVar13;
    *(uint *)(puVar18 + 0x28) = uVar28 ^ uVar9;
    *(int *)(puVar18 + 0x20) = param_5 - iVar25;
    uVar10 = *(undefined4 *)((longlong)plVar7 + 0x6c);
    *(undefined8 *)(puVar18 + -8) = 0x14f86f3d1;
    comb_filter(lVar14,lVar4 + 0x1000 + (longlong)iVar25 * 4,uVar10,iVar23);
    pvVar15 = local_68;
    plVar8 = local_90;
    pvVar12 = (void *)(local_a8 + (local_98 + iVar24) * 4);
    *(undefined8 *)(puVar18 + -8) = 0x14f86f3ed;
    memcpy(pvVar15,pvVar12,(size_t)plVar8);
    iVar23 = local_b8;
    lVar14 = (longlong)local_b8;
    pvVar12 = (void *)(local_88 + lVar14 * 4);
    if (param_5 < 0x401) {
      pvVar15 = (void *)(local_88 + (lVar14 + param_5) * 4);
      *(undefined8 *)(puVar18 + -8) = 0x14f86f43d;
      memmove(pvVar12,pvVar15,(longlong)(0x400 - param_5) << 2);
      pvVar15 = (void *)(*plVar16 + 0x1000);
      sVar19 = local_98 << 2;
      pvVar12 = (void *)(local_88 + 0x1000 + (lVar14 - local_98) * 4);
    }
    else {
      sVar19 = 0x1000;
      pvVar15 = (void *)(local_98 * 4 + *plVar16);
    }
    *(undefined8 *)(puVar18 + -8) = 0x14f86f466;
    memcpy(pvVar12,pvVar15,sVar19);
    local_b8 = iVar23 + 0x400;
    iVar24 = iVar24 + iStack_bc;
    iVar22 = iVar22 + local_c4;
    iVar21 = iVar21 + 1;
    plVar16 = plVar16 + 1;
    iVar23 = local_c8;
  } while (iVar21 < local_c0);
  *param_8 = fVar30;
  *param_7 = local_c8;
  *param_9 = local_b4;
  *(undefined8 *)(puVar18 + -8) = 0x14f86f4c5;
  return local_b0;
}

// FUN_14f86f504 @ 14f86f504

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_14f86f504(longlong param_1,uint param_2,int param_3,longlong param_4,int param_5,
                  longlong param_6,int param_7,uint param_8,float param_9,int param_10,int *param_11
                  )

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  void *_Dst;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  void *pvVar25;
  int iVar26;
  int *piVar27;
  ulonglong uVar28;
  int *piVar29;
  longlong lVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 auStack_140 [5];
  uint local_118 [4];
  void *local_108;
  int *local_100;
  longlong local_f8;
  ulonglong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  int local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined *local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)local_118;
  lVar15 = (longlong)(int)param_2;
  fVar34 = __real_be800000;
  if (__real_be800000 <= __real_3f000000 - param_9) {
    fVar34 = __real_3f000000 - param_9;
  }
  uVar28 = (ulonglong)param_2;
  uVar24 = lVar15 * 4;
  fVar34 = fVar34 * __real_3d23d70a;
  uVar11 = uVar24 + 0xf;
  if (uVar11 <= uVar24) {
    uVar11 = 0xffffffffffffff0;
  }
  auStack_140[0] = 0x14f86f5db;
  lVar4 = -(uVar11 & 0xfffffffffffffff0);
  local_100 = (int *)((longlong)local_118 + lVar4);
  bVar14 = (byte)param_8;
  uVar16 = (longlong)
           ((int)*(short *)(*(longlong *)(param_1 + 0x20) + lVar15 * 2) -
            (int)*(short *)(*(longlong *)(param_1 + 0x20) + -2 + lVar15 * 2) << (bVar14 & 0x1f)) * 4
  ;
  uVar11 = uVar16 + 0xf;
  if (uVar11 <= uVar16) {
    uVar11 = 0xffffffffffffff0;
  }
  local_118[2] = param_2;
  local_d8 = param_3;
  local_d0 = param_1;
  local_a0 = param_4;
  *(undefined8 *)((longlong)auStack_140 + lVar4) = 0x14f86f616;
  lVar15 = -(uVar11 & 0xfffffffffffffff0);
  uVar11 = uVar16 + 0xf;
  pvVar25 = (void *)((longlong)local_118 + lVar15 + lVar4);
  if (uVar11 <= uVar16) {
    uVar11 = 0xffffffffffffff0;
  }
  local_108 = pvVar25;
  *(undefined8 *)((longlong)auStack_140 + lVar15 + lVar4) = 0x14f86f637;
  lVar5 = -(uVar11 & 0xfffffffffffffff0);
  local_e0 = (void *)((longlong)local_118 + lVar5 + lVar15 + lVar4);
  uVar11 = uVar24 + 0xf;
  if (uVar11 <= uVar24) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_140 + lVar5 + lVar15 + lVar4) = 0x14f86f658;
  lVar6 = -(uVar11 & 0xfffffffffffffff0);
  local_c0 = (longlong)local_118 + lVar6 + lVar5 + lVar15 + lVar4;
  uVar11 = uVar24 + 0xf;
  if (uVar11 <= uVar24) {
    uVar11 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_140 + lVar6 + lVar5 + lVar15 + lVar4) = 0x14f86f679;
  lVar7 = -(uVar11 & 0xfffffffffffffff0);
  local_e8 = 0;
  local_c8 = (longlong)local_118 + lVar7 + lVar6 + lVar5 + lVar15 + lVar4;
  if (0 < (int)param_2) {
    local_118[3] = param_7 * param_10;
    uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar10 = (uint)((ulonglong)__xmm_7fffffffffffffff7fffffffffffffff >> 0x20);
    local_f8 = 0;
    local_f0 = uVar28;
    do {
      uVar20 = 0;
      local_118[0] = 0;
      iVar18 = (int)*(short *)(local_e8 + *(longlong *)(param_1 + 0x20));
      iVar26 = *(short *)(local_e8 + 2 + *(longlong *)(param_1 + 0x20)) - iVar18;
      local_118[1] = iVar26 << (bVar14 & 0x1f);
      lVar30 = (longlong)(int)local_118[1];
      iVar18 = local_118[3] + (iVar18 << (bVar14 & 0x1f));
      local_e8 = local_e8 + 2;
      *(undefined8 *)((longlong)auStack_140 + lVar7 + lVar6 + lVar5 + lVar15 + lVar4) = 0x14f86f724;
      memcpy(pvVar25,(void *)(param_6 + (longlong)iVar18 * 4),lVar30 << 2);
      _Dst = local_e0;
      pvVar25 = local_108;
      lVar12 = 0;
      fVar32 = 0.0;
      if (0 < lVar30) {
        do {
          lVar1 = lVar12 * 4;
          lVar12 = lVar12 + 1;
          dVar31 = (double)*(float *)((longlong)local_108 + lVar1);
          fVar32 = fVar32 + (float)(double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar10,
                                                    SUB84(dVar31,0) & uVar9);
        } while (lVar12 < lVar30);
      }
      fVar32 = (float)(int)(-(uint)(param_3 != 0) & param_8) * fVar34 * fVar32 + fVar32;
      if ((param_3 != 0) && (iVar26 != 1)) {
        *(undefined8 *)((longlong)auStack_140 + lVar7 + lVar6 + lVar5 + lVar15 + lVar4) =
             0x14f86f77c;
        memcpy(_Dst,pvVar25,lVar30 << 2);
        iVar18 = (int)local_118[1] >> (bVar14 & 0x1f);
        *(undefined8 *)((longlong)auStack_140 + lVar7 + lVar6 + lVar5 + lVar15 + lVar4) =
             0x14f86f794;
        haar1(_Dst,iVar18,1 << (bVar14 & 0x1f));
        lVar12 = 0;
        fVar33 = 0.0;
        if (0 < lVar30) {
          do {
            lVar1 = lVar12 * 4;
            lVar12 = lVar12 + 1;
            dVar31 = (double)*(float *)((longlong)_Dst + lVar1);
            fVar33 = fVar33 + (float)(double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar10,
                                                      SUB84(dVar31,0) & uVar9);
          } while (lVar12 < lVar30);
        }
        fVar33 = (float)(int)(param_8 + 1) * fVar34 * fVar33 + fVar33;
        if (fVar33 < fVar32) {
          uVar20 = 0xffffffff;
          local_118[0] = 0xffffffff;
          fVar32 = fVar33;
        }
      }
      pvVar25 = local_108;
      iVar18 = 0;
      while( true ) {
        if ((param_3 != 0) || (iVar23 = 1, iVar26 == 1)) {
          iVar23 = 0;
        }
        if ((int)(iVar23 + param_8) <= iVar18) break;
        if (param_3 == 0) {
          iVar23 = iVar18 + 1;
        }
        else {
          iVar23 = (param_8 - iVar18) + -1;
        }
        iVar19 = (int)local_118[1] >> ((byte)iVar18 & 0x1f);
        *(undefined8 *)((longlong)auStack_140 + lVar7 + lVar6 + lVar5 + lVar15 + lVar4) =
             0x14f86f831;
        haar1(pvVar25,iVar19,1 << ((byte)iVar18 & 0x1f));
        lVar12 = 0;
        fVar33 = 0.0;
        if (0 < lVar30) {
          do {
            lVar1 = lVar12 * 4;
            lVar12 = lVar12 + 1;
            dVar31 = (double)*(float *)((longlong)pvVar25 + lVar1);
            fVar33 = fVar33 + (float)(double)CONCAT44((uint)((ulonglong)dVar31 >> 0x20) & uVar10,
                                                      SUB84(dVar31,0) & uVar9);
          } while (lVar12 < lVar30);
        }
        fVar33 = (float)iVar23 * fVar34 * fVar33 + fVar33;
        uVar20 = iVar18 + 1;
        if (fVar32 <= fVar33) {
          uVar20 = local_118[0];
          fVar33 = fVar32;
        }
        fVar32 = fVar33;
        iVar18 = iVar18 + 1;
        local_118[0] = uVar20;
      }
      iVar18 = ((-(uint)(param_3 != 0) & 4) - 2) * uVar20;
      *(int *)(local_f8 + (longlong)local_100) = iVar18;
      if ((iVar26 == 1) && ((iVar18 == 0 || (iVar18 == param_8 * -2)))) {
        *(int *)(local_f8 + (longlong)local_100) = iVar18 + -1;
      }
      local_f8 = local_f8 + 4;
      local_f0 = local_f0 - 1;
      param_1 = local_d0;
      pvVar25 = local_108;
    } while (local_f0 != 0);
    uVar28 = (ulonglong)local_118[2];
  }
  piVar27 = (int *)&local_e0;
  local_118[0] = 0;
  lVar12 = (longlong)(int)param_8 * 8;
  iVar18 = *local_100;
  lVar30 = (longlong)(param_3 << 2);
  iVar26 = param_5;
  if (param_3 != 0) {
    iVar26 = 0;
  }
  local_b0 = &DAT_15350e5e9 + (((longlong)param_3 + (longlong)(int)param_8 * 2) * 4 - lVar30);
  local_e8 = 2;
  local_a8 = lVar12;
  do {
    uVar9 = iVar18 + (char)local_b0[lVar30 + -1] * -2;
    uVar20 = (int)uVar9 >> 0x1f;
    uVar10 = iVar18 + (char)local_b0[lVar30] * -2;
    uVar21 = (int)uVar10 >> 0x1f;
    iVar23 = ((uVar9 ^ uVar20) - uVar20) * *param_11;
    iVar19 = ((uVar10 ^ uVar21) - uVar21) * *param_11 + iVar26;
    if (1 < (int)uVar28) {
      uVar11 = (ulonglong)((int)uVar28 - 1);
      piVar29 = param_11;
      do {
        piVar29 = piVar29 + 1;
        iVar3 = *(int *)(((longlong)local_100 - (longlong)param_11) + (longlong)piVar29);
        iVar2 = iVar23 + param_5;
        uVar9 = iVar3 + (char)(&tf_select_table)[lVar30 + lVar12] * -2;
        uVar10 = (int)uVar9 >> 0x1f;
        iVar8 = iVar19 + param_5;
        if (iVar23 < iVar19 + param_5) {
          iVar8 = iVar23;
        }
        uVar20 = iVar3 + (char)(&tf_select_table)[lVar30 + 1 + lVar12] * -2;
        iVar23 = iVar8 + ((uVar9 ^ uVar10) - uVar10) * *piVar29;
        uVar9 = (int)uVar20 >> 0x1f;
        if (iVar2 < iVar19) {
          iVar19 = iVar2;
        }
        iVar19 = iVar19 + ((uVar20 ^ uVar9) - uVar9) * *piVar29;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar28 = (ulonglong)local_118[2];
    }
    uVar9 = (uint)uVar28;
    if (iVar23 < iVar19) {
      iVar19 = iVar23;
    }
    lVar30 = lVar30 + 2;
    *piVar27 = iVar19;
    piVar27 = piVar27 + 1;
    local_e8 = local_e8 + -1;
  } while (local_e8 != 0);
  if (local_e0._4_4_ < (int)local_e0) {
    local_118[0] = (uint)(local_d8 != 0);
  }
  lVar12 = (int)((local_118[0] + local_d8 * 2) * 2) + local_a8;
  uVar10 = iVar18 + (char)(&tf_select_table)[lVar12] * -2;
  uVar20 = (int)uVar10 >> 0x1f;
  uVar22 = iVar18 + (char)(&DAT_15350e5e9)[lVar12] * -2;
  uVar21 = (int)uVar22 >> 0x1f;
  iVar18 = ((uVar10 ^ uVar20) - uVar20) * *param_11;
  iVar26 = ((uVar22 ^ uVar21) - uVar21) * *param_11 + iVar26;
  if (1 < (int)uVar9) {
    uVar11 = (ulonglong)(uVar9 - 1);
    lVar12 = 4;
    local_a8 = local_a8 + ((ulonglong)local_118[0] + (longlong)local_d8 * 2) * 2;
    do {
      iVar23 = iVar26 + param_5;
      iVar19 = iVar18;
      if (iVar23 <= iVar18) {
        iVar19 = iVar23;
      }
      *(uint *)(lVar12 + local_c0) = (uint)(iVar23 <= iVar18);
      iVar18 = iVar18 + param_5;
      iVar23 = iVar18;
      if (iVar26 <= iVar18) {
        iVar23 = iVar26;
      }
      *(uint *)(lVar12 + local_c8) = (uint)(iVar26 <= iVar18);
      piVar27 = (int *)(lVar12 + (longlong)param_11);
      iVar26 = *piVar27;
      lVar12 = lVar12 + 4;
      iVar18 = *(int *)((longlong)piVar27 + ((longlong)local_100 - (longlong)param_11));
      uVar9 = iVar18 + (char)(&tf_select_table)[local_a8] * -2;
      uVar10 = (int)uVar9 >> 0x1f;
      uVar21 = iVar18 + (char)(&DAT_15350e5e9)[local_a8] * -2;
      uVar20 = (int)uVar21 >> 0x1f;
      iVar18 = ((uVar9 ^ uVar10) - uVar10) * iVar26 + iVar19;
      iVar26 = ((uVar21 ^ uVar20) - uVar20) * iVar26 + iVar23;
      uVar11 = uVar11 - 1;
      uVar9 = local_118[2];
    } while (uVar11 != 0);
  }
  *(uint *)(local_a0 + -4 + (longlong)(int)uVar9 * 4) = (uint)(iVar26 <= iVar18);
  lVar12 = (longlong)(int)(uVar9 - 2);
  if (-1 < (int)(uVar9 - 2)) {
    puVar13 = (undefined4 *)(local_c8 + 4 + lVar12 * 4);
    do {
      puVar17 = puVar13;
      if (*(int *)((local_a0 - local_c8) + (longlong)puVar13) != 1) {
        puVar17 = (undefined4 *)((local_c0 - local_c8) + (longlong)puVar13);
      }
      *(undefined4 *)((local_a0 - local_c8) + -4 + (longlong)puVar13) = *puVar17;
      puVar13 = puVar13 + -1;
      lVar12 = lVar12 + -1;
    } while (-1 < lVar12);
  }
  *(undefined8 *)((longlong)auStack_140 + lVar7 + lVar6 + lVar5 + lVar15 + lVar4) = 0x14f86fc10;
  return local_118[0];
}

// FUN_14f86fc6c @ 14f86fc6c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14f86fc6c(longlong param_1,int param_2,int param_3,float *param_4,int *param_5,int param_6,
                  undefined4 *param_7)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  float *pfVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 auStack_f0 [4];
  float fStack_cc;
  float local_c8 [2];
  int local_c0;
  int local_bc;
  int local_b8;
  longlong local_b0;
  longlong local_a8;
  float *local_a0;
  ulonglong local_98 [14];
  
  fVar18 = __real_3d800000;
  local_98[0] = __security_cookie.value ^ (ulonglong)local_c8;
  local_bc = param_3;
  iVar9 = 0;
  local_a0 = param_4;
  uVar10 = (longlong)param_2 * 4;
  local_b0 = (longlong)param_2;
  uVar4 = uVar10 + 0xf;
  if (uVar4 <= uVar10) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_f0[0] = 0x14f86fd0e;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  *param_7 = 0;
  pfVar1 = (float *)((longlong)local_c8 + lVar2);
  if (param_6 != 0) {
    fVar18 = __real_3d000000;
  }
  local_c8[0] = 0.0;
  param_2 = param_2 / 2;
  if (0 < param_3) {
    local_c8[1] = (float)(param_2 + -1);
    local_a8 = (longlong)param_2;
    local_c0 = param_2 + -5;
    local_b8 = (param_2 + -0x11) * 6;
    param_1 = param_1 - (longlong)pfVar1;
    do {
      lVar3 = local_a8;
      fVar8 = local_c8[0];
      fVar17 = 0.0;
      fVar12 = 0.0;
      pfVar5 = pfVar1;
      lVar6 = local_b0;
      if (0 < local_b0) {
        do {
          fVar15 = *(float *)((longlong)pfVar5 + param_1);
          fVar16 = fVar15 + fVar17;
          *pfVar5 = fVar16;
          fVar17 = (fVar16 + fVar12) - (fVar15 + fVar15);
          fVar12 = fVar15 - fVar16 * __real_3f000000;
          lVar6 = lVar6 + -1;
          pfVar5 = pfVar5 + 1;
        } while (lVar6 != 0);
      }
      *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x14f86fddd;
      memset(pfVar1,0,0x30);
      lVar6 = 0;
      fVar17 = 0.0;
      fVar12 = 0.0;
      if (0 < lVar3) {
        do {
          fVar15 = *(float *)((longlong)local_c8 + lVar6 * 8 + lVar2 + 4U);
          fVar15 = fVar15 * fVar15 + pfVar1[lVar6 * 2] * pfVar1[lVar6 * 2];
          fVar17 = fVar17 + fVar15;
          fVar12 = (fVar15 - fVar12) * fVar18 + fVar12;
          pfVar1[lVar6] = fVar12;
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar3);
      }
      fVar15 = 0.0;
      fVar12 = 0.0;
      if (-1 < (int)local_c8[1]) {
        pfVar5 = (float *)((longlong)&fStack_cc + lVar3 * 4 + lVar2);
        fVar16 = local_c8[1];
        do {
          fVar15 = (*pfVar5 - fVar15) * __real_3e000000 + fVar15;
          *pfVar5 = fVar15;
          if (fVar12 <= fVar15) {
            fVar12 = fVar15;
          }
          pfVar5 = pfVar5 + -1;
          fVar16 = (float)((int)fVar16 + -1);
        } while (-1 < (int)fVar16);
      }
      *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x14f86fe83;
      dVar13 = sqrt((double)(fVar12 * fVar17) * __real_3fe0000000000000 * (double)param_2);
      iVar11 = 0;
      fVar12 = (float)param_2 / ((float)dVar13 + __real_26901d7d);
      if (NAN(*pfVar1)) {
        *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x14f86fec2;
        celt_fatal("assertion failed: !celt_isnan(tmp[0])",
                   "../../../third_party/opus/src/celt/celt_encoder.c",0x171);
      }
      if (NAN(fVar12)) {
        *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x14f86fee2;
        celt_fatal("assertion failed: !celt_isnan(norm)",
                   "../../../third_party/opus/src/celt/celt_encoder.c",0x172);
      }
      if (0xc < local_c0) {
        fVar12 = fVar12 * __real_42800000;
        pfVar5 = (float *)((longlong)local_98 + lVar2);
        uVar4 = (ulonglong)((local_c0 - 0xdU >> 2) + 1);
        do {
          fVar8 = *pfVar5;
          *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x14f86ff16;
          dVar14 = floor((double)((fVar8 + __real_26901d7d) * fVar12));
          dVar13 = __real_405fc00000000000;
          if (dVar14 <= __real_405fc00000000000) {
            dVar13 = dVar14;
          }
          if (dVar13 < 0.0) {
            dVar13 = 0.0;
          }
          pfVar5 = pfVar5 + 4;
          iVar11 = iVar11 + (uint)(byte)(&DAT_15350f390)[(int)dVar13];
          uVar4 = uVar4 - 1;
          param_3 = local_bc;
          fVar8 = local_c8[0];
        } while (uVar4 != 0);
      }
      iVar11 = (iVar11 << 8) / local_b8;
      if (iVar9 < iVar11) {
        *param_5 = (int)fVar8;
        iVar9 = iVar11;
      }
      param_1 = param_1 + uVar10;
      local_c8[0] = (float)((int)fVar8 + 1);
    } while ((int)fVar8 + 1 < param_3);
  }
  pfVar1 = local_a0;
  bVar7 = 200 < iVar9;
  if ((param_6 != 0) && (iVar9 - 0xc9U < 399)) {
    bVar7 = false;
    *param_7 = 1;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x14f86ffc7;
  dVar13 = sqrt((double)(iVar9 * 0x1b));
  fVar18 = 0.0;
  if (0.0 <= (float)dVar13 - __real_42280000) {
    fVar18 = (float)dVar13 - __real_42280000;
  }
  fVar8 = __real_43230000;
  if (fVar18 <= __real_43230000) {
    fVar8 = fVar18;
  }
  dVar14 = (double)(fVar8 * ___real_3be21965) - ___real_3fc1cac083126e98;
  dVar13 = 0.0;
  if (0.0 <= dVar14) {
    dVar13 = dVar14;
  }
  *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x14f87000d;
  dVar13 = sqrt(dVar13);
  *pfVar1 = (float)dVar13;
  *(undefined8 *)((longlong)auStack_f0 + lVar2) = 0x14f870027;
  return bVar7;
}

