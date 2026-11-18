// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 20

// anti_collapse @ 14f879d04

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void anti_collapse(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6,int param_7,int param_8,longlong param_9,longlong param_10,
                  longlong param_11,longlong param_12,uint param_13,undefined4 param_14)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  longlong local_68;
  
  uVar11 = (ulonglong)param_7;
  if (param_7 < param_8) {
    bVar5 = (byte)param_4;
    iVar16 = 1 << (bVar5 & 0x1f);
    piVar6 = (int *)(param_12 + uVar11 * 4);
    iVar14 = param_5 * param_7;
    local_68 = uVar11 * 2;
    do {
      uVar12 = (int)*(short *)(local_68 + 2 + *(longlong *)(param_1 + 0x20)) -
               (int)*(short *)(local_68 + *(longlong *)(param_1 + 0x20));
      dVar18 = exp((double)((float)(int)((*piVar6 + 1U) / uVar12 >> (bVar5 & 0x1f)) *
                           ___real_be000000) * ___real_3fe62e42fefa39ef);
      iVar3 = uVar12 << (bVar5 & 0x1f);
      fVar20 = (float)dVar18 * __real_3f000000;
      dVar18 = sqrt((double)iVar3);
      iVar13 = 0;
      param_7 = 0;
      fVar21 = __real_3f800000 / (float)dVar18;
      do {
        bVar2 = false;
        iVar10 = (int)uVar11;
        lVar9 = (longlong)(*(int *)(param_1 + 8) * iVar13 + iVar10);
        fVar17 = *(float *)(param_10 + lVar9 * 4);
        fVar19 = *(float *)(param_11 + lVar9 * 4);
        if (param_5 == 1) {
          lVar7 = (longlong)(*(int *)(param_1 + 8) + iVar10);
          fVar1 = *(float *)(param_10 + lVar7 * 4);
          if (fVar17 <= fVar1) {
            fVar17 = fVar1;
          }
          fVar1 = *(float *)(param_11 + lVar7 * 4);
          if (fVar19 <= fVar1) {
            fVar19 = fVar1;
          }
        }
        if (fVar19 <= fVar17) {
          fVar17 = fVar19;
        }
        fVar17 = *(float *)(param_9 + lVar9 * 4) - fVar17;
        fVar19 = 0.0;
        if (0.0 <= fVar17) {
          fVar19 = fVar17;
        }
        dVar18 = exp((double)(float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000) *
                     ___real_3fe62e42fefa39ef);
        fVar17 = (float)dVar18 + (float)dVar18;
        if (param_4 == 3) {
          fVar17 = fVar17 * __real_3fb504f3;
        }
        fVar19 = fVar20;
        if (fVar17 <= fVar20) {
          fVar19 = fVar17;
        }
        iVar15 = 0;
        fVar19 = fVar19 * fVar21;
        lVar9 = param_2 + ((longlong)
                           ((int)*(short *)(local_68 + *(longlong *)(param_1 + 0x20)) <<
                           (bVar5 & 0x1f)) + (longlong)param_7) * 4;
        if (0 < iVar16) {
          do {
            if ((*(byte *)((iVar14 + iVar13) + param_3) & (byte)(1 << ((byte)iVar15 & 0x1f))) == 0)
            {
              iVar8 = 0;
              if (0 < (int)uVar12) {
                do {
                  param_13 = param_13 * 0x19660d + 0x3c6ef35f;
                  fVar17 = fVar19;
                  if ((param_13 >> 0xf & 1) == 0) {
                    fVar17 = (float)((uint)fVar19 ^ __xmm_80000000800000008000000080000000);
                  }
                  iVar4 = iVar8 << (bVar5 & 0x1f);
                  iVar8 = iVar8 + 1;
                  *(float *)(lVar9 + (longlong)(iVar4 + iVar15) * 4) = fVar17;
                } while (iVar8 < (int)uVar12);
              }
              bVar2 = true;
            }
            iVar15 = iVar15 + 1;
          } while (iVar15 < iVar16);
          if (bVar2) {
            renormalise_vector(lVar9,iVar3,__real_3f800000,param_14);
          }
        }
        iVar13 = iVar13 + 1;
        param_7 = param_7 + param_6;
      } while (iVar13 < param_5);
      uVar11 = (ulonglong)(iVar10 + 1U);
      piVar6 = piVar6 + 1;
      iVar14 = iVar14 + param_5;
      local_68 = local_68 + 2;
    } while ((int)(iVar10 + 1U) < param_8);
  }
  return;
}

// bitexact_log2tan @ 14f87a06c

int bitexact_log2tan(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  iVar2 = 0x1f;
  if (param_2 != 0) {
    for (; param_2 >> iVar2 == 0; iVar2 = iVar2 + -1) {
    }
  }
  iVar4 = (int)(short)((short)param_2 << (0xfU - (char)(iVar2 + 1) & 0x1f));
  iVar3 = (int)(short)((short)param_1 << (0xfU - (char)(iVar1 + 1) & 0x1f));
  return ((iVar1 + 1) - (iVar2 + 1)) * 0x800 +
         (((short)((short)(iVar3 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar3 + 0x4000 >> 0xf) -
         ((short)((short)(iVar4 * -0xa25 + 0x4000 >> 0xf) + 0x1efc) * iVar4 + 0x4000 >> 0xf));
}

// celt_lcg_rand @ 14f87a10c

int celt_lcg_rand(int param_1)

{
  return param_1 * 0x19660d + 0x3c6ef35f;
}

// compute_band_energies @ 14f87a120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_band_energies
               (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
               byte param_6)

{
  longlong lVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  
  psVar3 = *(short **)(param_1 + 0x20);
  iVar7 = 0;
  iVar2 = *(int *)(param_1 + 0x30);
  iVar6 = 0;
  do {
    iVar8 = 0;
    psVar5 = psVar3;
    if (0 < param_4) {
      do {
        lVar1 = param_2 + (longlong)(((int)*psVar5 << (param_6 & 0x1f)) + iVar6) * 4;
        fVar9 = (float)celt_inner_prod_sse(lVar1,lVar1,
                                           (int)psVar5[1] - (int)*psVar5 << (param_6 & 0x1f));
        dVar10 = sqrt((double)(fVar9 + ___real_129e74d2));
        iVar4 = *(int *)(param_1 + 8) * iVar7 + iVar8;
        iVar8 = iVar8 + 1;
        *(float *)(param_3 + (longlong)iVar4 * 4) = (float)dVar10;
        psVar5 = psVar5 + 1;
      } while (iVar8 < param_4);
    }
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + (iVar2 << (param_6 & 0x1f));
  } while (iVar7 < param_5);
  return;
}

// FUN_14f87a204 @ 14f87a204

void FUN_14f87a204(int *param_1,undefined4 *param_2,longlong param_3,float *param_4,uint param_5,
                  int *param_6,byte param_7,int param_8,int param_9,int param_10,uint *param_11)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  short sVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  
  lVar1 = *(longlong *)(param_1 + 2);
  uVar14 = (ulonglong)param_5;
  iVar17 = 0;
  iVar11 = *param_1;
  iVar15 = param_1[4];
  uVar7 = 0;
  iVar22 = param_1[5];
  uVar10 = 0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  iVar8 = (int)*(short *)(*(longlong *)(lVar1 + 0x40) + (longlong)iVar15 * 2) + param_9 * 8;
  if ((param_10 == 0) || (iVar20 = 0x10, param_5 != 2)) {
    iVar20 = 4;
  }
  iVar19 = param_5 * 2 + -1;
  if ((param_10 != 0) && (param_5 == 2)) {
    iVar19 = 2;
  }
  uVar6 = (iVar19 * ((iVar8 >> 1) - iVar20) + *param_6) / iVar19;
  uVar13 = (*param_6 - iVar8) - 0x20;
  if ((int)uVar13 < (int)uVar6) {
    uVar6 = uVar13;
  }
  if (0x40 < (int)uVar6) {
    uVar6 = 0x40;
  }
  if ((int)uVar6 < 4) {
    uVar13 = 1;
  }
  else {
    uVar13 = ((int)(short)(&DAT_1535141d0)[uVar6 & 7] >> (0xeU - (char)((int)uVar6 >> 3) & 0x1f)) +
             1U & 0xfffffffe;
    if (0x100 < (int)uVar13) {
      celt_fatal("assertion failed: qn <= 256","../../../third_party/opus/src/celt/bands.c",0x29d);
    }
  }
  if ((param_10 != 0) && (iVar22 <= iVar15)) {
    uVar13 = 1;
  }
  if (iVar11 != 0) {
    uVar7 = stereo_itheta(param_3,param_4,param_10,uVar14,param_1[0xf]);
  }
  iVar8 = ec_tell_frac(uVar2);
  if (uVar13 == 1) {
    uVar16 = uVar10;
    if (param_10 != 0) {
      if (iVar11 != 0) {
        if (((0x2000 < (int)uVar7) && (uVar10 = 0, param_1[0x11] == 0)) &&
           (uVar10 = 1, pfVar12 = param_4, 0 < (int)param_5)) {
          do {
            *pfVar12 = (float)((uint)*pfVar12 ^ __xmm_80000000800000008000000080000000);
            uVar14 = uVar14 - 1;
            pfVar12 = pfVar12 + 1;
          } while (uVar14 != 0);
        }
        FUN_14f87aea0(lVar1,param_3,param_4,uVar3,iVar15,param_5);
      }
      if ((*param_6 < 0x11) || (param_1[10] < 0x11)) {
        uVar10 = 0;
      }
      else if (iVar11 == 0) {
        uVar10 = ec_dec_bit_logp(uVar2,2);
      }
      else {
        ec_enc_bit_logp(uVar2,uVar10,2);
      }
      uVar7 = 0;
      uVar16 = 0;
      if (param_1[0x11] == 0) {
        uVar16 = uVar10;
      }
    }
    goto LAB_14f87a8c0;
  }
  if (iVar11 == 0) {
LAB_14f87a5dd:
    uVar6 = uVar7;
    if (param_10 == 0) goto LAB_14f87a548;
LAB_14f87a5ea:
    uVar6 = uVar7;
    if ((int)param_5 < 3) goto LAB_14f87a548;
    iVar19 = (int)uVar13 / 2;
    iVar20 = (iVar19 + 1) * 3;
    iVar22 = iVar19 + iVar20;
    if (iVar11 == 0) {
      iVar9 = ec_decode(uVar2,iVar22);
      if (iVar9 < iVar20) {
        uVar7 = iVar9 / 3;
      }
      else {
        uVar7 = iVar9 + (iVar19 + 1) * -3 + 1 + iVar19;
      }
      iVar9 = uVar7 + iVar19 * 2;
      iVar20 = iVar9 + 3;
      if ((int)uVar7 <= iVar19) {
        iVar20 = (uVar7 + 1) * 3;
      }
      iVar9 = iVar9 + 2;
      if ((int)uVar7 <= iVar19) {
        iVar9 = uVar7 * 3;
      }
      goto LAB_14f87a6f4;
    }
    iVar20 = uVar7 + (iVar20 - iVar19);
    if ((int)uVar7 <= iVar19) {
      iVar20 = (uVar7 + 1) * 3;
    }
    iVar9 = uVar7 + (iVar19 + 1) * 2;
    if ((int)uVar7 <= iVar19) {
      iVar9 = uVar7 * 3;
    }
LAB_14f87a5bc:
    ec_encode(uVar2,iVar9,iVar20,iVar22);
  }
  else {
    if ((param_10 != 0) && (param_1[0x10] != 0)) {
      iVar22 = 0x7fff;
      if ((int)uVar7 < 0x2001) {
        iVar22 = -0x7fff;
      }
      uVar7 = (int)(uVar7 * uVar13 + iVar22 / (int)uVar13) >> 0xe;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      if ((int)uVar13 <= (int)uVar7) {
        uVar7 = uVar13 - 1;
      }
      if (-1 < param_1[0x10]) {
        uVar7 = uVar7 + 1;
      }
      goto LAB_14f87a5dd;
    }
    uVar7 = (int)(uVar7 * uVar13 + 0x2000) >> 0xe;
    if (param_10 != 0) goto LAB_14f87a5ea;
    uVar6 = uVar7;
    if (((param_1[0x12] != 0) && (0 < (int)uVar7)) && ((int)uVar7 < (int)uVar13)) {
      sVar5 = (short)((uVar7 << 0xe) / uVar13);
      sVar18 = (short)((int)sVar5 * (int)sVar5 + 0x1000 >> 0xd);
      iVar22 = (int)sVar18;
      sVar5 = (short)((int)(short)(0x4000 - sVar5) * (int)(short)(0x4000 - sVar5) + 0x1000 >> 0xd);
      iVar20 = (int)sVar5;
      sVar5 = bitexact_log2tan((int)(short)(((short)((short)((short)((short)((short)(iVar20 * -0x272
                                                                                     + 0x4000 >> 0xf
                                                                                    ) + 0x2055) *
                                                                     iVar20 + 0x4000 >> 0xf) +
                                                            -0x1de3) * iVar20 + 0x4000 >> 0xf) -
                                            sVar5) + -0x8000),
                               (int)(short)(((short)((short)((short)((short)((short)(iVar22 * -0x272
                                                                                     + 0x4000 >> 0xf
                                                                                    ) + 0x2055) *
                                                                     iVar22 + 0x4000 >> 0xf) +
                                                            -0x1de3) * iVar22 + 0x4000 >> 0xf) -
                                            sVar18) + -0x8000));
      iVar22 = (int)sVar5 * (int)(short)((short)param_5 * 0x80 + -0x80) + 0x4000 >> 0xf;
      uVar6 = uVar13;
      if ((iVar22 <= *param_6) && (uVar6 = uVar7, iVar22 < -*param_6)) {
        uVar7 = 0;
        goto LAB_14f87a5dd;
      }
    }
LAB_14f87a548:
    uVar7 = uVar6;
    if ((param_8 < 2) && (param_10 == 0)) {
      iVar19 = (int)uVar13 >> 1;
      iVar20 = iVar19 + 1;
      iVar22 = iVar20 * iVar20;
      if (iVar11 != 0) {
        uVar21 = uVar13 - uVar6;
        iVar9 = iVar22 - ((int)((uVar21 + 2) * (uVar21 + 1)) >> 1);
        if ((int)uVar6 <= iVar19) {
          iVar9 = (int)((uVar6 + 1) * uVar6) >> 1;
          uVar21 = uVar6;
        }
        iVar20 = uVar21 + 1 + iVar9;
        goto LAB_14f87a5bc;
      }
      iVar9 = ec_decode(uVar2);
      if (iVar9 < iVar19 * iVar20 >> 1) {
        iVar20 = isqrt32(iVar9 * 8 + 1);
        uVar7 = iVar20 - 1U >> 1;
        iVar20 = uVar7 + 1;
        iVar9 = (int)(iVar20 * uVar7) >> 1;
      }
      else {
        iVar20 = isqrt32((iVar22 - iVar9) * 8 + -7);
        uVar7 = (uVar13 * 2 + 2) - iVar20 >> 1;
        iVar20 = (uVar13 - uVar7) + 1;
        iVar9 = iVar22 - ((int)(((uVar13 - uVar7) + 2) * iVar20) >> 1);
      }
      iVar20 = iVar9 + iVar20;
LAB_14f87a6f4:
      ec_dec_update(uVar2,iVar9,iVar20,iVar22);
    }
    else if (iVar11 == 0) {
      uVar7 = ec_dec_uint(uVar2);
    }
    else {
      ec_enc_uint(uVar2,uVar6,uVar13 + 1);
    }
  }
  uVar16 = 0;
  if ((int)uVar7 < 0) {
    celt_fatal("assertion failed: itheta>=0","../../../third_party/opus/src/celt/bands.c",0x346);
  }
  fVar4 = __real_3f3504f3;
  uVar7 = (uVar7 << 0xe) / uVar13;
  if ((iVar11 != 0) && (param_10 != 0)) {
    if (uVar7 == 0) {
      FUN_14f87aea0(lVar1,param_3,param_4,uVar3,iVar15,param_5);
    }
    else if (0 < (int)param_5) {
      param_3 = param_3 - (longlong)param_4;
      do {
        fVar23 = *param_4 * fVar4;
        fVar24 = *(float *)(param_3 + (longlong)param_4) * fVar4;
        *(float *)(param_3 + (longlong)param_4) = fVar23 + fVar24;
        *param_4 = fVar23 - fVar24;
        param_4 = param_4 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
  }
LAB_14f87a8c0:
  iVar11 = ec_tell_frac(uVar2);
  *param_6 = *param_6 - (iVar11 - iVar8);
  if (uVar7 == 0) {
    iVar22 = 0x7fff;
    iVar15 = -0x4000;
    *param_11 = *param_11 & (1 << (param_7 & 0x1f)) - 1U;
  }
  else {
    iVar15 = 0x4000;
    if (uVar7 == 0x4000) {
      iVar22 = 0;
      iVar17 = 0x7fff;
      *param_11 = *param_11 & (1 << (param_7 & 0x1f)) + -1 << (param_7 & 0x1f);
    }
    else {
      sVar5 = (short)uVar7;
      sVar18 = (short)((int)sVar5 * (int)sVar5 + 0x1000 >> 0xd);
      iVar15 = (int)sVar18;
      iVar22 = (int)(short)(((short)((short)((short)((short)((short)(iVar15 * -0x272 + 0x4000 >> 0xf
                                                                    ) + 0x2055) * iVar15 + 0x4000 >>
                                                    0xf) + -0x1de3) * iVar15 + 0x4000 >> 0xf) -
                            sVar18) + -0x8000);
      sVar5 = (short)((int)(short)(0x4000 - sVar5) * (int)(short)(0x4000 - sVar5) + 0x1000 >> 0xd);
      iVar15 = (int)sVar5;
      iVar17 = (int)(short)(((short)((short)((short)((short)((short)(iVar15 * -0x272 + 0x4000 >> 0xf
                                                                    ) + 0x2055) * iVar15 + 0x4000 >>
                                                    0xf) + -0x1de3) * iVar15 + 0x4000 >> 0xf) -
                            sVar5) + -0x8000);
      sVar5 = bitexact_log2tan(iVar17,iVar22);
      iVar15 = (int)sVar5 * (int)(short)((short)param_5 * 0x80 + -0x80) + 0x4000 >> 0xf;
    }
  }
  param_2[4] = uVar7;
  *param_2 = uVar16;
  param_2[1] = iVar22;
  param_2[2] = iVar17;
  param_2[3] = iVar15;
  param_2[5] = iVar11 - iVar8;
  return;
}

// FUN_14f87aa58 @ 14f87aa58

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f87aa58(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *_Src;
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  size_t _Size;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 auStack_60 [5];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)local_38;
  lVar6 = (longlong)(int)param_3;
  _Size = (longlong)(int)(param_2 * param_3) * 4;
  uVar4 = _Size + 0xf;
  if (uVar4 <= _Size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x14f87aab8;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  _Src = (undefined4 *)((longlong)local_38 + lVar2);
  if ((int)param_3 < 1) {
    *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f87aade;
    celt_fatal("assertion failed: stride>0","../../../third_party/opus/src/celt/bands.c");
  }
  if (param_4 == 0) {
    if (0 < (int)param_3) {
      uVar4 = (ulonglong)param_3;
      puVar7 = param_1;
      puVar10 = _Src;
      do {
        uVar5 = (ulonglong)param_2;
        puVar13 = puVar10;
        puVar14 = puVar7;
        if (0 < (int)param_2) {
          do {
            *puVar13 = *puVar14;
            uVar5 = uVar5 - 1;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + lVar6;
          } while (uVar5 != 0);
        }
        puVar10 = puVar10 + (int)param_2;
        puVar7 = puVar7 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    iVar8 = 0;
    piVar9 = (int *)("assertion failed: C*ebits[j]<<BITRES == bits[j]" + lVar6 * 4 + 0x28);
    lVar12 = lVar6;
    if (0 < (int)param_3) {
      do {
        iVar11 = 0;
        if (0 < (int)param_2) {
          puVar7 = param_1 + iVar8;
          do {
            iVar3 = *piVar9 * param_2 + iVar11;
            iVar11 = iVar11 + 1;
            uVar1 = *puVar7;
            puVar7 = puVar7 + lVar6;
            _Src[iVar3] = uVar1;
          } while (iVar11 < (int)param_2);
        }
        iVar8 = iVar8 + 1;
        piVar9 = piVar9 + 1;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
  }
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f87aba1;
  memcpy(param_1,_Src,_Size);
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f87abad;
  return;
}

// denormalise_bands @ 14f87abd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void denormalise_bands(longlong param_1,longlong param_2,float *param_3,longlong param_4,int param_5
                      ,int param_6,int param_7,int param_8,int param_9)

{
  short sVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar8 = *(int *)(param_1 + 0x30) * param_7;
  iVar4 = *(short *)(lVar2 + (longlong)param_6 * 2) * param_7;
  if ((param_8 != 1) && (param_8 = iVar8 / param_8, param_8 <= iVar4)) {
    iVar4 = param_8;
  }
  iVar5 = 0;
  if (param_9 == 0) {
    iVar5 = param_5;
  }
  lVar7 = (longlong)iVar5;
  iVar6 = 0;
  if (param_9 == 0) {
    iVar6 = param_6;
  }
  iVar10 = 0;
  if (param_9 == 0) {
    iVar10 = iVar4;
  }
  iVar4 = *(short *)(lVar2 + lVar7 * 2) * param_7;
  pfVar3 = (float *)(param_2 + (longlong)iVar4 * 4);
  pfVar9 = param_3;
  if (0 < iVar4) {
    memset(param_3,0,(longlong)iVar4 * 4);
    pfVar9 = param_3 + iVar4;
  }
  for (; lVar7 < iVar6; lVar7 = lVar7 + 1) {
    sVar1 = *(short *)(lVar2 + 2 + lVar7 * 2);
    iVar4 = *(short *)(lVar2 + lVar7 * 2) * param_7;
    fVar13 = *(float *)(param_4 + lVar7 * 4) + (float)(&eMeans)[lVar7];
    fVar11 = __real_42000000;
    if (fVar13 <= __real_42000000) {
      fVar11 = fVar13;
    }
    dVar12 = exp((double)fVar11 * ___real_3fe62e42fefa39ef);
    do {
      iVar4 = iVar4 + 1;
      fVar11 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      *pfVar9 = (float)dVar12 * fVar11;
      pfVar9 = pfVar9 + 1;
    } while (iVar4 < sVar1 * param_7);
  }
  if (iVar6 < iVar5) {
    celt_fatal("assertion failed: start <= end","../../../third_party/opus/src/celt/bands.c",0x107);
  }
  memset(param_3 + iVar10,0,(longlong)(iVar8 - iVar10) << 2);
  return;
}

// haar1 @ 14f87adb0

void haar1(float *param_1,int param_2,uint param_3)

{
  float fVar1;
  float *pfVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = __real_3f3504f3;
  if (0 < (int)param_3) {
    uVar4 = (ulonglong)param_3;
    do {
      if (0 < param_2 >> 1) {
        uVar3 = (ulonglong)(uint)(param_2 >> 1);
        pfVar5 = param_1 + (int)param_3;
        pfVar2 = param_1;
        do {
          fVar6 = *pfVar5 * fVar1;
          fVar7 = *pfVar2 * fVar1;
          *pfVar2 = fVar6 + fVar7;
          pfVar2 = pfVar2 + (int)(param_3 * 2);
          *pfVar5 = fVar7 - fVar6;
          pfVar5 = pfVar5 + (int)(param_3 * 2);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      param_1 = param_1 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}

// hysteresis_decision @ 14f87ae34

ulonglong hysteresis_decision(float param_1,longlong param_2,longlong param_3,int param_4,
                             uint param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = 0;
  uVar5 = uVar2;
  if (0 < param_4) {
    do {
      if (param_1 < *(float *)(param_2 + uVar2 * 4)) break;
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar2 = uVar2 + 1;
    } while ((longlong)uVar2 < (longlong)param_4);
  }
  lVar3 = (longlong)(int)param_5;
  iVar4 = (int)uVar5;
  iVar1 = iVar4 - param_5;
  if ((int)param_5 < iVar4) {
    if (param_1 < *(float *)(param_2 + lVar3 * 4) + *(float *)(param_3 + lVar3 * 4)) {
      uVar5 = (ulonglong)param_5;
    }
    iVar4 = (int)uVar5;
    iVar1 = iVar4 - param_5;
  }
  if ((SBORROW4(iVar4,param_5) != iVar1 < 0) &&
     (*(float *)(param_2 + -4 + lVar3 * 4) - *(float *)(param_3 + -4 + lVar3 * 4) < param_1)) {
    uVar5 = (ulonglong)param_5;
  }
  return uVar5;
}

// FUN_14f87aea0 @ 14f87aea0

void FUN_14f87aea0(longlong param_1,float *param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  
  fVar1 = *(float *)(param_4 + (longlong)param_5 * 4);
  fVar2 = *(float *)(param_4 + (longlong)(*(int *)(param_1 + 8) + param_5) * 4);
  dVar4 = sqrt((double)(fVar1 * fVar1 + __real_26901d7d + fVar2 * fVar2));
  lVar3 = (longlong)param_6;
  fVar5 = (float)dVar4 + __real_26901d7d;
  if (0 < lVar3) {
    param_3 = param_3 - (longlong)param_2;
    do {
      *param_2 = (fVar1 / fVar5) * *param_2 +
                 (fVar2 / fVar5) * *(float *)(param_3 + (longlong)param_2);
      param_2 = param_2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// FUN_14f87af5c @ 14f87af5c

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f87af5c(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  undefined4 *_Src;
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  size_t _Size;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  undefined8 auStack_60 [5];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)local_38;
  _Size = (longlong)(int)(param_2 * param_3) * 4;
  uVar4 = _Size + 0xf;
  if (uVar4 <= _Size) {
    uVar4 = 0xffffffffffffff0;
  }
  auStack_60[0] = 0x14f87afb7;
  lVar2 = -(uVar4 & 0xfffffffffffffff0);
  _Src = (undefined4 *)((longlong)local_38 + lVar2);
  if (param_4 == 0) {
    if (0 < (int)param_3) {
      uVar4 = (ulonglong)param_3;
      puVar8 = _Src;
      puVar10 = param_1;
      do {
        if (0 < (int)param_2) {
          puVar12 = puVar10;
          uVar13 = (ulonglong)param_2;
          puVar14 = puVar8;
          do {
            uVar1 = *puVar12;
            puVar12 = puVar12 + 1;
            *puVar14 = uVar1;
            puVar14 = puVar14 + (int)param_3;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        puVar10 = puVar10 + (int)param_2;
        puVar8 = puVar8 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  else {
    lVar5 = (longlong)(int)param_3;
    iVar6 = 0;
    piVar7 = (int *)("assertion failed: C*ebits[j]<<BITRES == bits[j]" + lVar5 * 4 + 0x28);
    lVar11 = lVar5;
    if (0 < lVar5) {
      do {
        iVar9 = 0;
        if (0 < (int)param_2) {
          puVar8 = _Src + iVar6;
          do {
            iVar3 = *piVar7 * param_2 + iVar9;
            iVar9 = iVar9 + 1;
            *puVar8 = param_1[iVar3];
            puVar8 = puVar8 + lVar5;
          } while (iVar9 < (int)param_2);
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f87b07e;
  memcpy(param_1,_Src,_Size);
  *(undefined8 *)((longlong)auStack_60 + lVar2) = 0x14f87b08a;
  return;
}

// normalise_bands @ 14f87b0ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void normalise_bands(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                    ,int param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  
  iVar1 = *(int *)(param_1 + 0x30);
  iVar8 = 0;
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar9 = 0;
  do {
    lVar6 = 0;
    if (0 < (longlong)param_5) {
      iVar4 = *(int *)(param_1 + 8) * iVar8;
      do {
        lVar5 = (longlong)(*(short *)(lVar2 + lVar6 * 2) * param_7);
        fVar10 = __real_3f800000 / (*(float *)(param_4 + (longlong)iVar4 * 4) + ___real_129e74d2);
        lVar7 = (longlong)(*(short *)(lVar2 + 2 + lVar6 * 2) * param_7);
        if (lVar5 < lVar7) {
          pfVar3 = (float *)(param_3 + (iVar9 + lVar5) * 4);
          lVar7 = lVar7 - lVar5;
          do {
            *pfVar3 = fVar10 * *(float *)((param_2 - param_3) + (longlong)pfVar3);
            pfVar3 = pfVar3 + 1;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        iVar4 = iVar4 + 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 < param_5);
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + iVar1 * param_7;
  } while (iVar8 < param_6);
  return;
}

// quant_all_bands @ 14f87b1a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void quant_all_bands(int param_1,longlong param_2,uint param_3,float param_4,longlong param_5,
                    longlong param_6,longlong param_7,longlong param_8,longlong param_9,int param_10
                    ,int param_11,int param_12,uint param_13,longlong param_14,int param_15,
                    int param_16,longlong *param_17,undefined4 param_18,int param_19,
                    undefined4 *param_20,int param_21,undefined4 param_22,uint param_23)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  size_t _Size;
  float *pfVar24;
  float *pfVar25;
  ulonglong uVar26;
  short *psVar27;
  longlong lVar28;
  int iVar29;
  int iVar30;
  longlong lVar31;
  void *pvVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  float *pfVar36;
  longlong lVar37;
  int iVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  float *pfVar42;
  int iVar43;
  size_t sVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 auStack_8a0 [5];
  int aiStack_878 [2];
  longlong lStack_870;
  longlong lStack_868;
  longlong lStack_860;
  longlong alStack_858 [2];
  uint auStack_848 [4];
  float local_838;
  int local_834;
  uint local_830;
  int local_82c;
  int local_828;
  float *local_820;
  ulonglong local_818;
  float *local_810;
  int local_808;
  uint local_804;
  size_t local_800;
  float *local_7f8;
  int local_7f0;
  uint uStack_7ec;
  longlong *local_7e8;
  float *local_7e0;
  longlong local_7d8;
  longlong local_7d0;
  float *local_7c8;
  void *local_7c0;
  void *local_7b8;
  longlong local_7b0;
  int *local_7a8;
  undefined8 local_798;
  longlong lStack_790;
  longlong local_788;
  undefined8 uStack_780;
  longlong *local_778;
  undefined8 uStack_770;
  longlong local_768;
  undefined8 uStack_760;
  ulonglong local_758;
  ulonglong uStack_750;
  uint local_748;
  int local_744;
  int local_740;
  longlong local_738;
  longlong local_730;
  longlong local_728;
  longlong local_720;
  longlong local_718;
  short *local_710;
  int local_708;
  longlong local_700;
  longlong local_6f8;
  void *local_6f0;
  void *local_6e8;
  void *local_6e0;
  longlong local_6d8;
  float *local_6d0;
  undefined4 *local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  void *local_6b0;
  longlong local_6a8;
  ulonglong local_6a0;
  longlong local_698;
  longlong lStack_690;
  undefined8 local_688;
  longlong lStack_680;
  longlong local_678;
  undefined8 uStack_670;
  longlong *local_668;
  undefined8 uStack_660;
  longlong local_658;
  undefined8 uStack_650;
  ulonglong local_648;
  ulonglong uStack_640;
  undefined8 local_638;
  longlong lStack_630;
  longlong local_628;
  undefined8 uStack_620;
  longlong *local_618;
  undefined8 uStack_610;
  longlong local_608;
  undefined8 uStack_600;
  ulonglong local_5f8;
  ulonglong uStack_5f0;
  undefined1 local_5e8 [1280];
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)&local_838;
  local_718 = param_7;
  local_6c0 = param_5;
  local_6f8 = param_8;
  local_738 = param_14;
  local_7e8 = param_17;
  local_6c8 = param_20;
  local_728 = *(longlong *)(param_2 + 0x20);
  uVar40 = (param_6 != 0) + 1;
  local_700 = param_6;
  local_7f8 = (float *)CONCAT44(local_7f8._4_4_,1);
  bVar15 = false;
  if ((((param_1 == 0) || (param_6 == 0)) || (param_12 != 0)) || (param_21 < 8)) {
    local_720 = 0;
  }
  else {
    bVar15 = true;
    local_720 = 1;
  }
  if ((param_1 == 0) || (local_82c = 0, bVar15)) {
    local_82c = 1;
  }
  iVar21 = local_82c;
  iVar43 = 1 << ((byte)param_18 & 0x1f);
  local_7b0 = (longlong)(int)param_3;
  iVar30 = 1;
  if (param_10 != 0) {
    iVar30 = iVar43;
  }
  local_710 = (short *)(local_728 + local_7b0 * 2);
  iVar38 = (int)*(short *)(local_728 + -2 + (longlong)*(int *)(param_2 + 8) * 2);
  local_7f0 = *local_710 * iVar43;
  iVar29 = iVar38 * iVar43;
  uVar26 = (longlong)(int)((iVar29 - local_7f0) * uVar40) * 4;
  uVar23 = uVar26 + 0xf;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  auStack_8a0[0] = 0x14f87b383;
  lVar1 = -(uVar23 & 0xfffffffffffffff0);
  local_7d0 = (longlong)local_7f0;
  pfVar42 = (float *)((longlong)&local_838 + lVar1);
  local_7e0 = pfVar42 + (iVar29 - local_7d0);
  if ((param_1 == 0) || (local_82c == 0)) {
    iVar38 = 0;
  }
  else {
    iVar38 = (*(short *)(local_728 + (longlong)*(int *)(param_2 + 8) * 2) - iVar38) * iVar43;
  }
  uVar26 = (longlong)iVar38 * 4;
  uVar23 = uVar26 + 0xf;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  local_838 = param_4;
  local_834 = iVar30;
  local_808 = iVar43;
  local_804 = param_3;
  local_7d8 = param_2;
  local_748 = uVar40;
  local_6d0 = pfVar42;
  *(undefined8 *)((longlong)auStack_8a0 + lVar1) = 0x14f87b3f4;
  lVar2 = -(uVar23 & 0xfffffffffffffff0);
  local_818 = (longlong)&local_838 + lVar2 + lVar1;
  if ((param_1 == 0) || (iVar21 == 0)) {
    local_818 = local_6c0 + (longlong)iVar29 * 4;
  }
  uVar23 = uVar26 + 0xf;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar2 + lVar1) = 0x14f87b42d;
  lVar3 = -(uVar23 & 0xfffffffffffffff0);
  local_7b8 = (void *)((longlong)&local_838 + lVar3 + lVar2 + lVar1);
  uVar23 = uVar26 + 0xf;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar3 + lVar2 + lVar1) = 0x14f87b451;
  lVar4 = -(uVar23 & 0xfffffffffffffff0);
  local_7c0 = (void *)((longlong)&local_838 + lVar4 + lVar3 + lVar2 + lVar1);
  uVar23 = uVar26 + 0xf;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar4 + lVar3 + lVar2 + lVar1) = 0x14f87b472;
  lVar5 = -(uVar23 & 0xfffffffffffffff0);
  local_6f0 = (void *)((longlong)&local_838 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1);
  uVar23 = uVar26 + 0xf;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) = 0x14f87b496;
  lVar6 = -(uVar23 & 0xfffffffffffffff0);
  local_6e8 = (void *)((longlong)&local_838 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1);
  uVar23 = uVar26 + 0xf;
  if (uVar23 <= uVar26) {
    uVar23 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_8a0 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
       0x14f87b4ba;
  local_830 = 0;
  lVar7 = -(uVar23 & 0xfffffffffffffff0);
  uVar23 = (ulonglong)(int)local_804;
  local_6e0 = (void *)((longlong)&local_838 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
  ;
  local_778 = local_7e8;
  local_788 = (ulonglong)param_13 << 0x20;
  lStack_790 = local_7d8;
  local_768 = local_6f8;
  local_798 = CONCAT44(iVar21,param_1);
  uStack_760._0_4_ = *local_6c8;
  uStack_780 = CONCAT44(uStack_780._4_4_,param_11);
  local_758 = (ulonglong)param_23 << 0x20;
  uStack_760 = CONCAT44(param_22,(undefined4)uStack_760);
  uStack_750 = CONCAT44(uStack_750._4_4_,(uint)(1 < iVar30));
  if ((int)local_804 < (int)local_838) {
    local_730 = 0;
    local_738 = local_738 - local_6f8;
    local_708 = param_19 + -1;
    param_19 = param_19 - local_804;
    local_7a8 = (int *)(param_9 + uVar23 * 4);
    local_6a0 = (ulonglong)uVar40;
    uStack_7ec = local_804 + 1;
    local_6d8 = (longlong)(int)(uStack_7ec * uVar40);
    local_6a8 = local_718 + ((int)(local_804 * uVar40) - local_6d8);
    local_6b8 = local_6f8 - param_9;
    uVar40 = local_804;
    do {
      local_800 = CONCAT44(local_800._4_4_,0xffffffff);
      iVar21 = *local_710 * iVar43;
      local_788 = CONCAT44(local_788._4_4_,uVar40);
      lVar33 = (longlong)iVar21;
      local_7c8 = (float *)CONCAT44(local_7c8._4_4_,iVar21);
      local_810 = (float *)(local_6c0 + lVar33 * 4);
      iVar21 = ((int)local_710[1] - (int)*local_710) * iVar43;
      local_820 = (float *)(-(ulonglong)(local_700 != 0) & local_700 + lVar33 * 4);
      local_828 = iVar21;
      if (iVar21 < 1) {
        *(undefined8 *)
         ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             0x14f87b661;
        celt_fatal("assertion failed: N > 0","../../../third_party/opus/src/celt/bands.c",0x5d7);
      }
      plVar18 = local_7e8;
      *(undefined8 *)((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
           = 0x14f87b66a;
      local_740 = ec_tell_frac(plVar18);
      lVar31 = local_7d8;
      pfVar36 = local_7e0;
      iVar30 = local_7f0;
      local_744 = param_16 - local_740;
      if (uVar40 == (uint)uVar23) {
        local_744 = param_16;
      }
      iVar29 = param_15 - local_740;
      uStack_770 = CONCAT44(uStack_770._4_4_,iVar29 + -1);
      if (local_708 < (int)uVar40) {
LAB_14f87b6f4:
        iVar41 = 0;
      }
      else {
        iVar38 = param_19;
        if (3 < param_19) {
          iVar38 = 3;
        }
        iVar41 = *local_7a8 + local_744 / iVar38;
        iVar38 = iVar29;
        if (iVar41 <= iVar29) {
          iVar38 = iVar41;
        }
        if (iVar38 < 0x4000) {
          iVar22 = iVar29;
          if (iVar41 <= iVar29) {
            iVar22 = iVar41;
          }
          if (iVar22 < 0) goto LAB_14f87b6f4;
          if (0x3fff < iVar38) goto LAB_14f87b6e6;
          if (iVar29 < iVar41) {
            iVar41 = iVar29;
          }
        }
        else {
LAB_14f87b6e6:
          iVar41 = 0x3fff;
        }
      }
      if (local_82c == 0) {
LAB_14f87b72c:
        if (uVar40 == uStack_7ec) {
          *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_12;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar43;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87b754;
          FUN_14f87cf60(lVar31,pfVar42,pfVar36);
        }
      }
      else if ((local_7f0 <= (int)local_7c8 - iVar21) || (uVar40 == uStack_7ec)) {
        if (((int)local_7f8 != 0) || (local_830 == 0)) {
          local_730 = local_7b0;
          local_830 = uVar40;
        }
        goto LAB_14f87b72c;
      }
      iVar29 = local_834;
      uVar8 = __real_3f800000;
      pfVar36 = (float *)((longlong)local_7a8 + local_6b8);
      local_7f8 = pfVar36;
      uStack_780 = CONCAT44(*(int *)((longlong)pfVar36 + local_738),(undefined4)uStack_780);
      if (*(int *)(local_7d8 + 0xc) <= (int)uVar40) {
        local_810 = pfVar42;
        if (local_700 != 0) {
          local_820 = pfVar42;
        }
        local_818 = 0;
      }
      pfVar25 = local_820;
      if (uVar40 == (int)local_838 - 1U) {
        local_818 = -(ulonglong)(local_720 != 0) & local_818;
      }
      if ((local_830 == 0) ||
         (((param_11 == 3 && (local_834 < 2)) && (-1 < *(int *)((longlong)pfVar36 + local_738))))) {
        uVar34 = (1 << ((byte)local_834 & 0x1f)) - 1;
        uVar39 = uVar34;
      }
      else {
        psVar27 = (short *)(local_728 + local_730 * 2);
        iVar22 = (*psVar27 * iVar43 - iVar21) - iVar30;
        iVar38 = 0;
        if (-1 < iVar22) {
          iVar38 = iVar22;
        }
        local_800 = CONCAT44(local_800._4_4_,iVar38);
        uVar35 = local_830;
        do {
          psVar27 = psVar27 + -1;
          uVar35 = uVar35 - 1;
        } while (iVar38 + iVar30 < *psVar27 * iVar43);
        iVar22 = local_830 - 1;
        lVar31 = local_730 + -1;
        do {
          iVar22 = iVar22 + 1;
          lVar31 = lVar31 + 1;
          if (local_7b0 <= lVar31) break;
        } while (*(short *)(local_728 + lVar31 * 2) * iVar43 < iVar38 + iVar21 + iVar30);
        uVar34 = 0;
        uVar39 = 0;
        iVar30 = uVar35 * local_748;
        do {
          lVar31 = (longlong)iVar30;
          uVar35 = uVar35 + 1;
          iVar30 = iVar30 + local_748;
          uVar39 = uVar39 | *(byte *)(lVar31 + local_718);
          uVar34 = uVar34 | *(byte *)((longlong)iVar30 + -1 + local_718);
          pfVar42 = local_6d0;
          iVar43 = local_808;
          iVar21 = local_828;
        } while ((int)uVar35 < iVar22);
      }
      if (param_12 == 0) {
LAB_14f87ba41:
        pvVar32 = local_7b8;
        pfVar24 = local_810;
        iVar30 = (int)local_800;
        if (pfVar25 == (float *)0x0) {
          if (uVar40 == (int)local_838 - 1U) {
            pfVar36 = (float *)0x0;
          }
          else {
            pfVar36 = pfVar42 + (lVar33 - local_7d0);
          }
          lVar33 = (longlong)(int)local_800;
          *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               uVar34 | uVar39;
          pfVar25 = (float *)0x0;
          if (iVar30 != -1) {
            pfVar25 = pfVar42 + lVar33;
          }
          *(ulonglong *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
               local_818;
          *(undefined4 *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               __real_3f800000;
          *(float **)((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar36;
          pfVar42 = local_810;
          *(undefined4 *)
           ((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_18;
          *(float **)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar25;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar29;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87c0f7;
          uVar19 = FUN_14f87c100(&local_798,pfVar42,iVar21,iVar41);
          uVar20 = uVar19;
        }
        else if ((local_720 == 0) || ((int)param_13 <= (int)uVar40)) {
          local_758 = local_758 & 0xffffffff00000000;
          if (uVar40 == (int)local_838 - 1U) {
            pfVar36 = (float *)0x0;
          }
          else {
            pfVar36 = pfVar42 + (lVar33 - local_7d0);
          }
          lVar33 = (longlong)(int)local_800;
          *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               uVar34 | uVar39;
          pfVar24 = (float *)0x0;
          if (iVar30 != -1) {
            pfVar24 = pfVar42 + lVar33;
          }
          *(ulonglong *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
               local_818;
          *(float **)((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar36;
          pfVar42 = local_810;
          *(undefined4 *)
           ((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_18;
          *(float **)((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar24;
          *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar29;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar41;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87c07b;
          uVar19 = FUN_14f87c564(&local_798,pfVar42,pfVar25,iVar21);
          uVar20 = uVar19;
        }
        else {
          sVar44 = (longlong)iVar21 << 2;
          lVar31 = (longlong)(int)(*(int *)(local_7d8 + 8) + uVar40);
          fVar49 = *(float *)(local_6f8 + lVar31 * 4);
          fVar50 = *pfVar36;
          if (fVar49 <= *pfVar36) {
            fVar50 = fVar49;
          }
          fVar49 = fVar50 / __real_40400000 + *(float *)(local_6f8 + lVar31 * 4);
          fVar50 = fVar50 / __real_40400000 + *pfVar36;
          local_698 = local_7e8[4];
          lStack_690 = local_7e8[5];
          lVar31 = *local_7e8;
          lVar28 = local_7e8[1];
          lVar16 = local_7e8[2];
          uVar8 = *(undefined4 *)((longlong)local_7e8 + 0x14);
          lVar17 = local_7e8[3];
          iVar43 = *(int *)((longlong)local_7e8 + 0x1c);
          local_7f8 = (float *)local_7e8[6];
          local_688 = local_798;
          lStack_680 = lStack_790;
          local_678 = local_788;
          uStack_670 = uStack_780;
          local_668 = local_778;
          uStack_660 = uStack_770;
          local_658 = local_768;
          uStack_650 = uStack_760;
          local_648 = local_758;
          uStack_640 = uStack_750;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bb1b;
          memcpy(pvVar32,pfVar24,sVar44);
          pvVar32 = local_7c0;
          pfVar36 = local_820;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bb2b;
          memcpy(pvVar32,pfVar36,sVar44);
          local_758 = CONCAT44(local_758._4_4_,0xffffffff);
          if (uVar40 == (int)local_838 - 1U) {
            pfVar36 = (float *)0x0;
            lVar33 = lVar33 - local_7d0;
          }
          else {
            lVar33 = lVar33 - local_7d0;
            pfVar36 = pfVar42 + lVar33;
          }
          iVar30 = (int)local_800;
          lVar37 = (longlong)(int)local_800;
          *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               uVar34 | uVar39;
          pfVar25 = local_820;
          local_7c8 = (float *)0x0;
          if (iVar30 != -1) {
            local_7c8 = pfVar42 + lVar37;
          }
          *(ulonglong *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
               local_818;
          *(float **)((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar36;
          pfVar36 = local_810;
          *(undefined4 *)
           ((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_18;
          *(float **)((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = local_7c8;
          *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               local_834;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar41;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bba5;
          local_828 = FUN_14f87c564(&local_798,pfVar36,pfVar25,iVar21);
          pvVar32 = local_7c0;
          pfVar36 = local_820;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bbb8;
          fVar45 = (float)celt_inner_prod_sse(pvVar32,pfVar36,iVar21);
          pvVar32 = local_7b8;
          pfVar36 = local_810;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bbd2;
          fVar46 = (float)celt_inner_prod_sse(pvVar32,pfVar36,iVar21);
          pvVar32 = local_6f0;
          pfVar36 = local_810;
          lVar9 = *local_7e8;
          lVar10 = local_7e8[1];
          lVar11 = local_7e8[2];
          lVar12 = local_7e8[3];
          lVar13 = local_7e8[4];
          lVar14 = local_7e8[5];
          lVar37 = local_7e8[6];
          local_638 = local_798;
          lStack_630 = lStack_790;
          local_628 = local_788;
          uStack_620 = uStack_780;
          local_618 = local_778;
          uStack_610 = uStack_770;
          local_608 = local_768;
          uStack_600 = uStack_760;
          local_5f8 = local_758;
          uStack_5f0 = uStack_750;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bc51;
          memcpy(pvVar32,pfVar36,sVar44);
          pvVar32 = local_6e8;
          pfVar36 = local_820;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bc64;
          memcpy(pvVar32,pfVar36,sVar44);
          pvVar32 = local_6e0;
          if (uVar40 != (int)local_838 - 1U) {
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x14f87bc80;
            memcpy(pvVar32,pfVar42 + lVar33,sVar44);
          }
          pvVar32 = (void *)(iVar43 + lVar31);
          _Size = (size_t)((int)lVar28 - iVar43);
          local_800 = _Size;
          local_6b0 = pvVar32;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bcc5;
          memcpy(local_5e8,pvVar32,_Size);
          pvVar32 = local_7b8;
          pfVar36 = local_810;
          *local_7e8 = lVar31;
          local_7e8[1] = lVar28;
          *(int *)(local_7e8 + 2) = (int)lVar16;
          *(undefined4 *)((longlong)local_7e8 + 0x14) = uVar8;
          *(int *)(local_7e8 + 3) = (int)lVar17;
          *(int *)((longlong)local_7e8 + 0x1c) = iVar43;
          local_7e8[4] = local_698;
          local_7e8[5] = lStack_690;
          local_7e8[6] = (longlong)local_7f8;
          local_798 = local_688;
          lStack_790 = lStack_680;
          local_788 = local_678;
          uStack_780 = uStack_670;
          local_778 = local_668;
          uStack_770 = uStack_660;
          local_768 = local_658;
          uStack_760 = uStack_650;
          local_758 = local_648;
          uStack_750 = uStack_640;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bd40;
          memcpy(pfVar36,pvVar32,sVar44);
          pvVar32 = local_7c0;
          pfVar36 = local_820;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bd50;
          memcpy(pfVar36,pvVar32,sVar44);
          lVar31 = local_7d8;
          pfVar36 = local_7e0;
          uVar35 = local_804;
          if (uVar40 == uStack_7ec) {
            *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
                 = param_12;
            *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
                 = local_808;
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x14f87bd7a;
            FUN_14f87cf60(lVar31,pfVar42,pfVar36,uVar35);
          }
          fVar47 = local_838;
          *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               uVar34 | uVar39;
          pfVar25 = local_810;
          pfVar36 = local_820;
          local_758 = CONCAT44(local_758._4_4_,1);
          pfVar24 = (float *)0x0;
          if (uVar40 != (int)fVar47 - 1U) {
            pfVar24 = pfVar42 + lVar33;
          }
          local_7f8 = pfVar42 + lVar33;
          *(ulonglong *)
           ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
               local_818;
          *(float **)((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = pfVar24;
          *(undefined4 *)
           ((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               param_18;
          *(float **)((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1)
               = local_7c8;
          *(int *)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               local_834;
          *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               iVar41;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bdeb;
          iVar43 = FUN_14f87c564(&local_798,pfVar25,pfVar36,iVar21);
          pvVar32 = local_7c0;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87bdfd;
          fVar47 = (float)celt_inner_prod_sse(pvVar32,pfVar36,iVar21);
          pvVar32 = local_7b8;
          *(undefined8 *)
           ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
               0x14f87be16;
          fVar48 = (float)celt_inner_prod_sse(pvVar32,pfVar25,iVar21);
          pvVar32 = local_6f0;
          iVar30 = local_828;
          if (fVar48 * fVar50 + fVar47 * fVar49 <= fVar46 * fVar50 + fVar45 * fVar49) {
            *local_7e8 = lVar9;
            local_7e8[1] = lVar10;
            local_798 = local_638;
            lStack_790 = lStack_630;
            local_7e8[2] = lVar11;
            local_7e8[3] = lVar12;
            local_778 = local_618;
            uStack_770 = uStack_610;
            local_788 = local_628;
            uStack_780 = uStack_620;
            local_7e8[4] = lVar13;
            local_7e8[5] = lVar14;
            local_758 = local_5f8;
            uStack_750 = uStack_5f0;
            local_7e8[6] = lVar37;
            local_768 = local_608;
            uStack_760 = uStack_600;
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x14f87be9d;
            memcpy(pfVar25,pvVar32,sVar44);
            pvVar32 = local_6e8;
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x14f87beaf;
            memcpy(pfVar36,pvVar32,sVar44);
            pvVar32 = local_6e0;
            pfVar42 = local_7f8;
            if (uVar40 != (int)local_838 - 1U) {
              *(undefined8 *)
               ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                   0x14f87becb;
              memcpy(pfVar42,pvVar32,sVar44);
            }
            pvVar32 = local_6b0;
            sVar44 = local_800;
            *(undefined8 *)
             ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
                 0x14f87bee2;
            memcpy(pvVar32,local_5e8,sVar44);
            iVar43 = iVar30;
          }
          uVar19 = (undefined1)iVar43;
          iVar43 = local_808;
          uVar20 = uVar19;
        }
      }
      else {
        if (uVar40 == param_13) {
          param_12 = 0;
          if (local_82c != 0) {
            lVar31 = (longlong)((int)local_7c8 - local_7f0);
            if (0 < (int)local_7c8 - local_7f0) {
              lVar28 = (longlong)local_7e0 - (longlong)pfVar42;
              pfVar24 = pfVar42;
              do {
                *pfVar24 = (*(float *)(lVar28 + (longlong)pfVar24) + *pfVar24) * __real_3f000000;
                pfVar24 = pfVar24 + 1;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              goto LAB_14f87b940;
            }
          }
          goto LAB_14f87ba41;
        }
LAB_14f87b940:
        if (param_12 == 0) goto LAB_14f87ba41;
        lVar33 = lVar33 - local_7d0;
        if (uVar40 == (int)local_838 - 1U) {
          pfVar36 = (float *)0x0;
        }
        else {
          pfVar36 = pfVar42 + lVar33;
        }
        iVar30 = (int)local_800;
        lVar31 = (longlong)(int)local_800;
        *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             uVar39;
        pfVar25 = local_810;
        pfVar24 = (float *)0x0;
        if (iVar30 != -1) {
          pfVar24 = pfVar42 + lVar31;
        }
        local_828 = iVar41 / 2;
        *(ulonglong *)
         ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
             local_818;
        *(undefined4 *)
         ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             __real_3f800000;
        *(float **)((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             pfVar36;
        *(undefined4 *)
         ((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) = param_18;
        iVar30 = local_834;
        *(float **)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             pfVar24;
        *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             iVar30;
        *(undefined8 *)
         ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             0x14f87b9c9;
        uVar19 = FUN_14f87c100(&local_798,pfVar25,iVar21,iVar41 / 2);
        pfVar42 = local_7e0;
        iVar30 = local_828;
        if (uVar40 == (int)local_838 - 1U) {
          pfVar36 = (float *)0x0;
        }
        else {
          pfVar36 = local_7e0 + lVar33;
        }
        iVar29 = (int)local_800;
        lVar33 = (longlong)(int)local_800;
        *(uint *)((longlong)auStack_848 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             uVar34;
        pfVar25 = (float *)0x0;
        if (iVar29 != -1) {
          pfVar25 = pfVar42 + lVar33;
        }
        *(ulonglong *)
         ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1 + 8) =
             local_818;
        *(undefined4 *)
         ((longlong)alStack_858 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) = uVar8;
        *(float **)((longlong)&lStack_860 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             pfVar36;
        pfVar42 = local_820;
        *(undefined4 *)
         ((longlong)&lStack_868 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) = param_18;
        iVar29 = local_834;
        *(float **)((longlong)&lStack_870 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             pfVar25;
        *(int *)((longlong)aiStack_878 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             iVar29;
        *(undefined8 *)
         ((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
             0x14f87ba3c;
        uVar20 = FUN_14f87c100(&local_798,pfVar42,iVar21,iVar30);
      }
      *(undefined1 *)(local_6a8 + local_6d8) = uVar19;
      *(undefined1 *)(local_718 + -1 + local_6d8) = uVar20;
      param_16 = *local_7a8 + local_744 + local_740;
      uVar23 = (ulonglong)local_804;
      local_6d8 = local_6d8 + local_6a0;
      uStack_750 = uStack_750 & 0xffffffff00000000;
      local_7a8 = local_7a8 + 1;
      param_19 = param_19 + -1;
      uVar40 = uVar40 + 1;
      local_7b0 = local_7b0 + 1;
      local_710 = local_710 + 1;
      local_7f8 = (float *)CONCAT44(local_7f8._4_4_,(uint)(iVar21 * 8 < iVar41));
      pfVar42 = local_6d0;
    } while ((int)uVar40 < (int)local_838);
  }
  *local_6c8 = (undefined4)uStack_760;
  *(undefined8 *)((longlong)auStack_8a0 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1) =
       0x14f87bfa1;
  return;
}

// FUN_14f87c100 @ 14f87c100

ulonglong FUN_14f87c100(int *param_1,longlong param_2,uint param_3,undefined8 param_4,uint param_5,
                       void *param_6,undefined4 param_7,float *param_8,undefined4 param_9,
                       void *param_10,uint param_11)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  double dVar15;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar16;
  uint local_50;
  int local_4c;
  
  iVar9 = *param_1;
  iVar10 = param_1[7];
  bVar14 = param_5 == 1;
  local_50 = 0;
  if (param_3 == 1) {
    uVar4 = FUN_14f87c478(param_1,param_2,0,param_4,param_8);
  }
  else {
    iVar7 = iVar10;
    if (iVar10 < 1) {
      iVar7 = 0;
    }
    if (((param_10 != (void *)0x0) && (param_6 != (void *)0x0)) &&
       ((iVar7 != 0 ||
        (((((ulonglong)param_3 / (ulonglong)param_5 & 1) == 0 && (iVar10 < 0)) || (1 < (int)param_5)
         ))))) {
      memcpy(param_10,param_6,(longlong)(int)param_3 << 2);
      param_6 = param_10;
    }
    local_4c = 0;
    if (0 < iVar7) {
      do {
        iVar2 = 1 << ((byte)local_4c & 0x1f);
        iVar12 = (int)param_3 >> ((byte)local_4c & 0x1f);
        if (iVar9 != 0) {
          haar1(param_2,iVar12,iVar2);
        }
        if (param_6 != (void *)0x0) {
          haar1(param_6,iVar12,iVar2);
        }
        local_4c = local_4c + 1;
        param_11 = (uint)(byte)(&DAT_153514220)[(longlong)(int)param_11 >> 4] << 2 |
                   (uint)(byte)(&DAT_153514220)[param_11 & 0xf];
      } while (local_4c < iVar7);
    }
    uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
    bVar5 = (byte)iVar7;
    iVar2 = (int)param_5 >> (bVar5 & 0x1f);
    uVar8 = (int)((ulonglong)param_3 / (ulonglong)param_5) << (bVar5 & 0x1f);
    for (; ((uVar8 & 1) == 0 &&
           (uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20), iVar10 < 0));
        iVar10 = iVar10 + 1) {
      if (iVar9 != 0) {
        haar1(param_2,uVar8,iVar2);
      }
      if (param_6 != (void *)0x0) {
        haar1(param_6,uVar8,iVar2);
      }
      uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
      local_50 = local_50 + 1;
      uVar8 = (int)uVar8 >> 1;
      bVar6 = (byte)iVar2;
      iVar2 = iVar2 * 2;
      param_11 = param_11 | param_11 << (bVar6 & 0x1f);
    }
    if (1 < iVar2) {
      iVar10 = iVar2 << (bVar5 & 0x1f);
      iVar12 = (int)uVar8 >> (bVar5 & 0x1f);
      if (iVar9 != 0) {
        FUN_14f87aa58(param_2,iVar12,iVar10,bVar14);
      }
      if (param_6 != (void *)0x0) {
        FUN_14f87aa58(param_6,iVar12,iVar10,bVar14);
      }
    }
    lVar11 = (longlong)(int)param_3;
    uVar3 = FUN_14f87ca04(param_1,param_2,param_3,(int)param_4,CONCAT44(uVar16,iVar2),param_6,
                          param_7,param_9,param_11);
    uVar4 = (ulonglong)uVar3;
    if (param_1[1] != 0) {
      if (1 < iVar2) {
        FUN_14f87af5c(param_2,(int)uVar8 >> (bVar5 & 0x1f),iVar2 << (bVar5 & 0x1f),bVar14);
      }
      if (0 < (int)local_50) {
        uVar13 = (ulonglong)local_50;
        do {
          iVar2 = iVar2 >> 1;
          uVar8 = uVar8 * 2;
          uVar4 = (ulonglong)((uint)uVar4 | (uint)uVar4 >> ((byte)iVar2 & 0x1f));
          haar1(param_2,uVar8,iVar2);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      uVar8 = (uint)uVar4;
      iVar9 = 0;
      if (0 < iVar7) {
        do {
          pbVar1 = &DAT_153514230 + uVar4;
          uVar4 = (ulonglong)*pbVar1;
          uVar8 = (uint)*pbVar1;
          haar1(param_2,(int)param_3 >> ((byte)iVar9 & 0x1f),1 << ((byte)iVar9 & 0x1f));
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar7);
      }
      if (param_8 != (float *)0x0) {
        dVar15 = sqrt((double)(int)param_3);
        if (0 < (int)param_3) {
          param_2 = param_2 - (longlong)param_8;
          do {
            *param_8 = (float)dVar15 * *(float *)(param_2 + (longlong)param_8);
            param_8 = param_8 + 1;
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
      }
      uVar4 = (ulonglong)(uVar8 & (1 << ((byte)(iVar2 << (bVar5 & 0x1f)) & 0x1f)) - 1U);
    }
  }
  return uVar4;
}

// FUN_14f87c478 @ 14f87c478

void FUN_14f87c478(int *param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = 0;
  iVar1 = *param_1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  pfVar5 = param_2;
  do {
    uVar4 = 0;
    if (7 < param_1[10]) {
      if (iVar1 == 0) {
        uVar4 = ec_dec_bits(uVar2,1);
      }
      else {
        bVar3 = *pfVar5 <= 0.0 && *pfVar5 != 0.0;
        uVar4 = (uint)bVar3;
        ec_enc_bits(uVar2,bVar3,1);
      }
      param_1[10] = param_1[10] + -8;
    }
    if (param_1[1] != 0) {
      fVar7 = __real_3f800000;
      if (uVar4 != 0) {
        fVar7 = __real_bf800000;
      }
      *pfVar5 = fVar7;
    }
    iVar6 = iVar6 + 1;
    pfVar5 = param_3;
  } while (iVar6 < (int)((param_3 != (float *)0x0) + 1));
  if (param_5 != (float *)0x0) {
    *param_5 = *param_2;
  }
  return;
}

// FUN_14f87c564 @ 14f87c564

ulonglong FUN_14f87c564(int *param_1,float *param_2,float *param_3,int param_4,int param_5,
                       undefined4 param_6,undefined8 param_7,undefined4 param_8,undefined8 param_9,
                       undefined8 param_10,int param_11)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  uint local_res20;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 uVar15;
  undefined4 uVar18;
  undefined8 uVar16;
  undefined4 uVar19;
  undefined8 uVar17;
  undefined8 uVar20;
  undefined4 *puVar21;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  uint local_68;
  int local_64;
  undefined4 uVar22;
  
  iVar6 = param_11;
  uVar19 = param_6;
  iVar11 = *param_1;
  uVar16 = *(undefined8 *)(param_1 + 8);
  if (param_4 == 1) {
    uVar7 = FUN_14f87c478(param_1,param_2,param_3,param_5,param_9);
  }
  else {
    puVar21 = &param_11;
    uVar15 = CONCAT44((int)((ulonglong)in_stack_ffffffffffffff28 >> 0x20),param_4);
    FUN_14f87a204(param_1,&local_78,param_2,param_3,uVar15,&param_5,param_6,param_6,param_8,1,
                  puVar21);
    uVar18 = (undefined4)((ulonglong)uVar15 >> 0x20);
    uVar22 = (undefined4)((ulonglong)puVar21 >> 0x20);
    fVar14 = (float)local_74 * __real_38000000;
    fVar13 = (float)local_70 * __real_38000000;
    if (param_4 == 2) {
      iVar8 = 0;
      uVar5 = 0;
      if ((local_68 & 0xffffbfff) != 0) {
        iVar8 = 8;
      }
      iVar4 = param_5 - iVar8;
      param_1[10] = param_1[10] - (local_64 + iVar8);
      pfVar9 = param_3;
      pfVar10 = param_2;
      if (0x2000 < (int)local_68) {
        pfVar9 = param_2;
        pfVar10 = param_3;
      }
      if (iVar8 != 0) {
        if (iVar11 == 0) {
          uVar5 = ec_dec_bits(uVar16,1);
        }
        else {
          bVar3 = pfVar9[1] * *pfVar10 - pfVar10[1] * *pfVar9 < 0.0;
          uVar5 = (uint)bVar3;
          ec_enc_bits(uVar16,bVar3,1);
        }
      }
      iVar11 = uVar5 * -2 + 1;
      uVar16 = CONCAT44(uVar18,uVar19);
      uVar5 = FUN_14f87c100(param_1,pfVar10,2,iVar4,uVar16,param_7,param_8,param_9,__real_3f800000,
                            param_10,CONCAT44(uVar22,iVar6));
      uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
      uVar7 = (ulonglong)uVar5;
      *pfVar9 = (float)-iVar11 * pfVar10[1];
      pfVar9[1] = (float)iVar11 * *pfVar10;
      if (param_1[1] == 0) {
        return uVar7;
      }
      *param_2 = fVar14 * *param_2;
      param_2[1] = fVar14 * param_2[1];
      fVar1 = *param_3;
      *param_3 = fVar13 * fVar1;
      param_3[1] = fVar13 * param_3[1];
      fVar2 = *param_2;
      *param_2 = fVar2 - fVar13 * fVar1;
      *param_3 = fVar2 + *param_3;
      fVar13 = param_2[1];
      param_2[1] = fVar13 - param_3[1];
      param_3[1] = fVar13 + param_3[1];
    }
    else {
      iVar6 = (param_5 - local_6c) / 2;
      iVar11 = iVar6;
      if (param_5 < iVar6) {
        iVar11 = param_5;
      }
      iVar8 = 0;
      if ((-1 < iVar11) && (iVar8 = iVar6, param_5 < iVar6)) {
        iVar8 = param_5;
      }
      iVar6 = param_5 - iVar8;
      param_1[10] = param_1[10] - local_64;
      iVar11 = param_1[10];
      if (iVar8 < iVar6) {
        uVar16 = CONCAT44(uVar18,param_6);
        local_res20 = FUN_14f87c100(param_1,param_3,param_4,iVar6,uVar16,0,param_8,0,fVar13,0,
                                    CONCAT44(uVar22,param_11 >> ((byte)param_6 & 0x1f)));
        uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
        iVar6 = (param_1[10] - iVar11) + iVar6;
        pfVar10 = param_2;
        uVar16 = param_7;
        uVar15 = param_9;
        fVar13 = __real_3f800000;
        uVar20 = param_10;
        iVar11 = param_11;
        if ((0x18 < iVar6) && (local_68 != 0x4000)) {
          iVar8 = iVar8 + -0x18 + iVar6;
        }
      }
      else {
        uVar16 = CONCAT44(uVar18,param_6);
        local_res20 = FUN_14f87c100(param_1,param_2,param_4,iVar8,uVar16,param_7,param_8,param_9,
                                    __real_3f800000,param_10,CONCAT44(uVar22,param_11));
        uVar19 = (undefined4)((ulonglong)uVar16 >> 0x20);
        iVar8 = (param_1[10] - iVar11) + iVar8;
        if ((0x18 < iVar8) && (local_68 != 0)) {
          iVar6 = iVar6 + -0x18 + iVar8;
        }
        pfVar10 = param_3;
        iVar8 = iVar6;
        uVar16 = 0;
        uVar15 = 0;
        uVar20 = 0;
        iVar11 = param_11 >> ((byte)param_6 & 0x1f);
      }
      uVar17 = CONCAT44(uVar19,param_6);
      uVar5 = FUN_14f87c100(param_1,pfVar10,param_4,iVar8,uVar17,uVar16,param_8,uVar15,fVar13,uVar20
                            ,iVar11);
      uVar19 = (undefined4)((ulonglong)uVar17 >> 0x20);
      uVar7 = (ulonglong)(local_res20 | uVar5);
    }
    lVar12 = 0;
    if (param_1[1] != 0) {
      if (param_4 != 2) {
        FUN_14f87d314(param_2,param_3,fVar14,param_4,CONCAT44(uVar19,param_1[0xf]));
      }
      if ((local_78 != 0) && (0 < param_4)) {
        do {
          param_3[lVar12] = (float)((uint)param_3[lVar12] ^ __xmm_80000000800000008000000080000000);
          lVar12 = lVar12 + 1;
        } while (lVar12 < param_4);
      }
    }
  }
  return uVar7;
}

// FUN_14f87ca04 @ 14f87ca04

uint FUN_14f87ca04(int *param_1,float *param_2,int param_3,uint param_4,int param_5,longlong param_6
                  ,int param_7,float param_8,uint param_9)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  byte *pbVar11;
  float *pfVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  uint local_res20 [2];
  undefined1 local_70 [4];
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int local_5c;
  
  uVar8 = 0;
  lVar16 = (longlong)param_3;
  uVar3 = 0xffffffff;
  lVar9 = *(longlong *)(param_1 + 2);
  pbVar11 = (byte *)((longlong)
                     *(short *)(*(longlong *)(lVar9 + 0x88) +
                               (longlong)((param_7 + 1) * *(int *)(lVar9 + 8) + param_1[4]) * 2) +
                    *(longlong *)(lVar9 + 0x90));
  local_res20[0] = param_4;
  if (((param_7 == -1) || ((int)param_4 <= (int)(pbVar11[*pbVar11] + 0xc))) || (param_3 < 3)) {
    uVar13 = (ulonglong)*pbVar11;
    iVar14 = param_4 - 1;
    lVar9 = 6;
    uVar10 = uVar8;
    do {
      uVar2 = (int)((int)uVar10 + 1 + (uint)uVar13) >> 1;
      if ((int)(uint)pbVar11[(int)uVar2] < iVar14) {
        uVar10 = (ulonglong)uVar2;
        uVar2 = (uint)uVar13;
      }
      uVar13 = (ulonglong)(int)uVar2;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    if ((int)uVar10 != 0) {
      uVar3 = (uint)pbVar11[(int)uVar10];
    }
    if ((int)((uint)pbVar11[uVar13] - iVar14) < (int)(iVar14 - uVar3)) {
      uVar10 = (ulonglong)uVar2;
    }
    uVar3 = (uint)uVar10;
    lVar9 = (longlong)(int)uVar3;
    uVar13 = uVar8;
    if (uVar3 != 0) {
      uVar13 = (ulonglong)(pbVar11[lVar9] + 1);
    }
    iVar14 = param_1[10] - (int)uVar13;
    param_1[10] = iVar14;
    if (iVar14 < 0) {
      lVar1 = *(longlong *)(param_1 + 2);
      do {
        uVar3 = (uint)uVar10;
        if (lVar9 < 1) break;
        iVar14 = iVar14 + (int)uVar13;
        uVar3 = uVar3 - 1;
        uVar10 = (ulonglong)uVar3;
        param_1[10] = iVar14;
        lVar9 = lVar9 + -1;
        uVar13 = uVar8;
        if (lVar9 != 0) {
          uVar13 = (ulonglong)
                   (*(byte *)(*(short *)(*(longlong *)(lVar1 + 0x88) +
                                        (longlong)((param_7 + 1) * *(int *)(lVar1 + 8) + param_1[4])
                                        * 2) + lVar9 + *(longlong *)(lVar1 + 0x90)) + 1);
        }
        iVar14 = iVar14 - (int)uVar13;
        param_1[10] = iVar14;
      } while (iVar14 < 0);
    }
    if (uVar3 == 0) {
      uVar3 = 0;
      if (param_1[1] != 0) {
        uVar3 = (1 << ((byte)param_5 & 0x1f)) - 1;
        uVar2 = param_9 & uVar3;
        if (uVar2 == 0) {
          memset(param_2,0,lVar16 << 2);
          uVar3 = 0;
        }
        else {
          if (param_6 == 0) {
            if (0 < param_3) {
              do {
                iVar14 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
                param_1[0xe] = iVar14;
                param_2[uVar8] = (float)(iVar14 >> 0x14);
                uVar8 = uVar8 + 1;
              } while ((longlong)uVar8 < lVar16);
            }
          }
          else {
            uVar3 = uVar2;
            if (0 < param_3) {
              pfVar12 = param_2;
              do {
                fVar17 = __real_3b800000;
                uVar2 = param_1[0xe] * 0x19660d + 0x3c6ef35f;
                param_1[0xe] = uVar2;
                if ((uVar2 >> 0xf & 1) == 0) {
                  fVar17 = __real_bb800000;
                }
                *pfVar12 = fVar17 + *(float *)((param_6 - (longlong)param_2) + (longlong)pfVar12);
                pfVar12 = pfVar12 + 1;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          renormalise_vector(param_2,param_3,param_8,param_1[0xf]);
        }
      }
    }
    else {
      uVar2 = (uVar3 & 7) + 8 << ((char)((int)uVar3 >> 3) - 1U & 0x1f);
      if ((int)uVar3 < 8) {
        uVar2 = uVar3;
      }
      if (*param_1 == 0) {
        uVar3 = alg_unquant(param_2,param_3,uVar2,param_1[6],param_5,*(undefined8 *)(param_1 + 8),
                            param_8);
      }
      else {
        uVar3 = alg_quant(param_2,param_3,uVar2,param_1[6],param_5,*(undefined8 *)(param_1 + 8),
                          param_8,param_1[1],param_1[0xf]);
      }
    }
  }
  else {
    param_7 = param_7 + -1;
    param_3 = param_3 >> 1;
    pfVar12 = param_2 + param_3;
    if (param_5 == 1) {
      param_9 = param_9 & 1 | param_9 * 2;
    }
    iVar14 = param_5 + 1 >> 1;
    FUN_14f87a204(param_1,local_70,param_2,pfVar12,param_3,local_res20,iVar14,param_5,param_7,0,
                  &param_9);
    fVar17 = (float)local_6c * __real_38000000;
    fVar18 = (float)local_68 * __real_38000000;
    if ((1 < param_5) && ((local_60 & 0x3fff) != 0)) {
      if ((int)local_60 < 0x2001) {
        local_64 = ((param_3 << 3) >> (5U - (char)param_7 & 0x1f)) + local_64;
        if (0 < local_64) {
          local_64 = 0;
        }
      }
      else {
        local_64 = local_64 - (local_64 >> (4U - (char)param_7 & 0x1f));
      }
    }
    uVar2 = (int)(local_res20[0] - local_64) / 2;
    uVar3 = uVar2;
    if ((int)local_res20[0] < (int)uVar2) {
      uVar3 = local_res20[0];
    }
    if ((-1 < (int)uVar3) && (uVar8 = (ulonglong)uVar2, (int)local_res20[0] < (int)uVar2)) {
      uVar8 = (ulonglong)local_res20[0];
    }
    iVar7 = (int)uVar8;
    iVar15 = local_res20[0] - iVar7;
    param_1[10] = param_1[10] - local_5c;
    iVar6 = param_1[10];
    uVar10 = -(ulonglong)(param_6 != 0) & param_6 + (longlong)param_3 * 4;
    bVar5 = (byte)(param_5 >> 1);
    if (iVar7 < iVar15) {
      iVar4 = FUN_14f87ca04(param_1,pfVar12,param_3,iVar15,iVar14,uVar10,param_7,fVar18 * param_8,
                            (int)param_9 >> ((byte)iVar14 & 0x1f));
      iVar6 = (iVar15 - iVar6) + param_1[10];
      uVar3 = iVar4 << (bVar5 & 0x1f);
      if ((0x18 < iVar6) && (local_60 != 0x4000)) {
        iVar7 = iVar7 + -0x18 + iVar6;
      }
      uVar2 = FUN_14f87ca04(param_1,param_2,param_3,iVar7,iVar14,param_6,param_7,fVar17 * param_8,
                            param_9);
    }
    else {
      uVar3 = FUN_14f87ca04(param_1,param_2,param_3,uVar8,iVar14,param_6,param_7,fVar17 * param_8,
                            param_9);
      iVar6 = (iVar7 - iVar6) + param_1[10];
      if ((0x18 < iVar6) && (local_60 != 0)) {
        iVar15 = iVar15 + -0x18 + iVar6;
      }
      iVar14 = FUN_14f87ca04(param_1,pfVar12,param_3,iVar15,iVar14,uVar10,param_7,fVar18 * param_8,
                             (int)param_9 >> ((byte)iVar14 & 0x1f));
      uVar2 = iVar14 << (bVar5 & 0x1f);
    }
    uVar3 = uVar3 | uVar2;
  }
  return uVar3;
}

// FUN_14f87cf60 @ 14f87cf60

void FUN_14f87cf60(longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
                  int param_6)

{
  longlong lVar1;
  int iVar2;
  size_t _Size;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x20);
  lVar1 = (longlong)param_4;
  iVar3 = (int)*(short *)(lVar4 + 2 + lVar1 * 2);
  iVar2 = (iVar3 - *(short *)(lVar4 + lVar1 * 2)) * param_5;
  param_5 = (*(short *)(lVar4 + 4 + lVar1 * 2) - iVar3) * param_5;
  lVar4 = (longlong)(iVar2 * 2 - param_5);
  _Size = (longlong)(param_5 - iVar2) << 2;
  memcpy((void *)(param_2 + (longlong)iVar2 * 4),(void *)(param_2 + lVar4 * 4),_Size);
  if (param_6 != 0) {
    memcpy((void *)(param_3 + (longlong)iVar2 * 4),(void *)(param_3 + lVar4 * 4),_Size);
  }
  return;
}

// spreading_decision @ 14f87d00c

undefined1
spreading_decision(longlong param_1,longlong param_2,int *param_3,int param_4,int *param_5,
                  uint *param_6,int param_7,uint param_8,int param_9,int param_10,int *param_11)

{
  short sVar1;
  short *psVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  short *psVar16;
  float fVar17;
  int local_78;
  int local_74;
  
  uVar7 = (ulonglong)(int)param_8;
  iVar8 = 0;
  psVar2 = *(short **)(param_1 + 0x20);
  uVar15 = 0;
  uVar9 = 0;
  if ((int)param_8 < 1) {
    celt_fatal("assertion failed: end>0","../../../third_party/opus/src/celt/bands.c",0x1e9);
  }
  uVar3 = 0;
  if (8 < ((int)psVar2[uVar7] - (int)psVar2[uVar7 - 1]) * param_10) {
    local_74 = 0;
    local_78 = 0;
    do {
      iVar12 = 0;
      if (0 < (int)uVar7) {
        piVar14 = param_11;
        psVar16 = psVar2;
        do {
          sVar1 = *psVar16;
          iVar13 = 0;
          psVar16 = psVar16 + 1;
          iVar5 = 0;
          uVar11 = ((int)*psVar16 - (int)sVar1) * param_10;
          pfVar10 = (float *)(param_2 + ((longlong)(sVar1 * param_10) + (longlong)local_74) * 4);
          if (8 < (int)uVar11) {
            iVar4 = 0;
            if (0 < (int)uVar11) {
              uVar7 = (ulonglong)uVar11;
              do {
                fVar17 = *pfVar10;
                pfVar10 = pfVar10 + 1;
                fVar17 = fVar17 * fVar17 * (float)(int)uVar11;
                iVar6 = iVar13 + 1;
                if (__real_3e800000 <= fVar17) {
                  iVar6 = iVar13;
                }
                iVar13 = iVar6;
                iVar6 = iVar5 + 1;
                if (__real_3d800000 <= fVar17) {
                  iVar6 = iVar5;
                }
                iVar5 = iVar6;
                iVar6 = iVar4 + 1;
                if (__real_3c800000 <= fVar17) {
                  iVar6 = iVar4;
                }
                iVar4 = iVar6;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
              uVar7 = (ulonglong)param_8;
            }
            if (*(int *)(param_1 + 8) + -4 < iVar12) {
              uVar9 = uVar9 + (uint)((iVar5 + iVar13) * 0x20) / uVar11;
            }
            iVar6 = 0;
            if ((int)uVar11 <= iVar4 * 2) {
              iVar6 = *piVar14;
            }
            iVar4 = 0;
            if ((int)uVar11 <= iVar5 * 2) {
              iVar4 = *piVar14;
            }
            iVar5 = 0;
            if ((int)uVar11 <= iVar13 * 2) {
              iVar5 = *piVar14;
            }
            iVar8 = iVar8 + iVar5 + iVar6 + iVar4;
            uVar15 = uVar15 + *piVar14;
          }
          iVar12 = iVar12 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar12 < (int)uVar7);
      }
      local_78 = local_78 + 1;
      local_74 = local_74 + *(int *)(param_1 + 0x30) * param_10;
    } while (local_78 < param_9);
    uVar3 = 2;
    if (param_7 != 0) {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar9 / (uint)((((int)uVar7 - *(int *)(param_1 + 8)) + 4) * param_9);
      }
      iVar12 = (int)(*param_5 + uVar11) >> 1;
      *param_5 = iVar12;
      if (*param_6 == 2) {
        iVar12 = iVar12 + 4;
      }
      else if (*param_6 == 0) {
        iVar12 = iVar12 + -4;
      }
      if (iVar12 < 0x17) {
        *param_6 = (uint)(0x12 < iVar12);
      }
      else {
        *param_6 = 2;
      }
    }
    if ((int)uVar15 < 1) {
      celt_fatal("assertion failed: nbBands>0","../../../third_party/opus/src/celt/bands.c",0x221);
    }
    if (iVar8 < 0) {
      celt_fatal("assertion failed: sum>=0","../../../third_party/opus/src/celt/bands.c",0x222);
    }
    iVar8 = (int)((uint)(iVar8 << 8) / uVar15 + *param_3) >> 1;
    *param_3 = iVar8;
    iVar8 = (iVar8 + 0x96) * 3 + param_4 * -0x80 >> 2;
    if (iVar8 < 0x50) {
      uVar3 = 3;
    }
    else if (0xff < iVar8) {
      uVar3 = iVar8 < 0x180;
    }
  }
  return uVar3;
}

// FUN_14f87d314 @ 14f87d314

void FUN_14f87d314(void *param_1,float *param_2,float param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res18 [4];
  float local_58 [20];
  
  local_res18[0] = 0.0;
  local_58[0] = 0.0;
  lVar1 = (longlong)param_4;
  dual_inner_prod_sse(param_2,param_1,param_2,param_4,local_res18,local_58);
  fVar3 = param_3 * param_3 + local_58[0];
  fVar7 = local_res18[0] * param_3 + local_res18[0] * param_3;
  fVar5 = fVar3 - fVar7;
  fVar7 = fVar7 + fVar3;
  if ((fVar7 < __real_3a1d4952) || (fVar5 < __real_3a1d4952)) {
    memcpy(param_2,param_1,lVar1 << 2);
  }
  else {
    dVar4 = sqrt((double)fVar5);
    fVar3 = __real_3f800000;
    fVar5 = __real_3f800000 / (float)dVar4;
    dVar4 = sqrt((double)fVar7);
    if (0 < param_4) {
      lVar2 = (longlong)param_1 - (longlong)param_2;
      do {
        fVar7 = *param_2;
        fVar6 = param_3 * *(float *)(lVar2 + (longlong)param_2);
        *(float *)(lVar2 + (longlong)param_2) = (fVar6 - fVar7) * fVar5;
        *param_2 = (fVar7 + fVar6) * (fVar3 / (float)dVar4);
        param_2 = param_2 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
    }
  }
  return;
}

