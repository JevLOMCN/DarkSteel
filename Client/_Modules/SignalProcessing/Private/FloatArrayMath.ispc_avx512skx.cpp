// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 71

// ArraySum2___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a14d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum2___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar43 = param_4;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar44 = 0;
    do {
      uVar46 = (ulonglong)uVar47;
      pfVar1 = (float *)(param_1 + uVar46);
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      fVar18 = pfVar1[4];
      fVar19 = pfVar1[5];
      fVar20 = pfVar1[6];
      fVar21 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar46);
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      fVar25 = pfVar2[4];
      fVar26 = pfVar2[5];
      fVar27 = pfVar2[6];
      fVar28 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar46);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar15 + fVar22;
      pfVar3[2] = fVar16 + fVar23;
      pfVar3[3] = fVar17 + fVar24;
      pfVar3[4] = fVar18 + fVar25;
      pfVar3[5] = fVar19 + fVar26;
      pfVar3[6] = fVar20 + fVar27;
      pfVar3[7] = fVar21 + fVar28;
      uVar44 = uVar44 + 8;
      uVar47 = uVar47 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar46 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar7 = (byte)uVar46;
  piVar5 = (int *)(param_2 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_3 + lVar45);
  bVar8 = (bool)((byte)(uVar46 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar46 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar46 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar46 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar46 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar46 >> 6) & 1);
  bVar14 = SUB81(uVar46 >> 7,0);
  *puVar6 = (uint)(bVar7 & 1) *
            (int)((float)((uint)(bVar7 & 1) * *piVar4) + (float)((uint)(bVar7 & 1) * *piVar5)) |
            (uint)!(bool)(bVar7 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 *
              (int)((float)((uint)((byte)(uVar46 >> 1) & 1) * iVar29) +
                   (float)((uint)((byte)(uVar46 >> 1) & 1) * iVar36)) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 *
              (int)((float)((uint)((byte)(uVar46 >> 2) & 1) * iVar30) +
                   (float)((uint)((byte)(uVar46 >> 2) & 1) * iVar37)) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 *
              (int)((float)((uint)((byte)(uVar46 >> 3) & 1) * iVar31) +
                   (float)((uint)((byte)(uVar46 >> 3) & 1) * iVar38)) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 *
              (int)((float)((uint)((byte)(uVar46 >> 4) & 1) * iVar32) +
                   (float)((uint)((byte)(uVar46 >> 4) & 1) * iVar39)) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 *
              (int)((float)((uint)((byte)(uVar46 >> 5) & 1) * iVar33) +
                   (float)((uint)((byte)(uVar46 >> 5) & 1) * iVar40)) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 *
              (int)((float)((uint)((byte)(uVar46 >> 6) & 1) * iVar34) +
                   (float)((uint)((byte)(uVar46 >> 6) & 1) * iVar41)) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 *
              (int)((float)((uint)(byte)(uVar46 >> 7) * iVar35) +
                   (float)((uint)(byte)(uVar46 >> 7) * iVar42)) | (uint)!bVar14 * puVar6[7];
  return;
}

// ArrayMax___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a15050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMax___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar11 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar12 = 0;
    do {
      uVar14 = (ulonglong)uVar15;
      auVar16 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + uVar14),
                           *(undefined1 (*) [32])(param_2 + uVar14));
      *(undefined1 (*) [32])(param_3 + uVar14) = auVar16;
      uVar12 = uVar12 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar12 < (uVar11 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar12) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar14 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar13 = (longlong)((int)uVar12 << 2);
  piVar1 = (int *)(param_1 + lVar13);
  bVar3 = (byte)uVar14;
  auVar16._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar16._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar16._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar16._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar16._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar16._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar16._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar16._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  piVar1 = (int *)(param_2 + lVar13);
  auVar17._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  auVar16 = vmaxps_avx(auVar16,auVar17);
  puVar2 = (uint *)(param_3 + lVar13);
  bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar14 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar14 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar14 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar14 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar14 >> 6) & 1);
  bVar10 = SUB81(uVar14 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayMeanFilter___un_3C_Cunf_3E_CuniCuniun_3C_unf_3E_CunfCuni_avx512skx @ 140a15400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanFilter___un_3C_Cunf_3E_CuniCuniun_3C_unf_3E_CunfCuni_avx512skx
               (longlong param_1,int param_2,uint param_3,longlong param_4,float param_5,int param_6
               )

{
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  ulonglong uVar44;
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 in_ZMM16 [64];
  
  iVar27 = _UNK_150b50afc;
  iVar26 = _UNK_150b50af8;
  iVar25 = _UNK_150b50af4;
  iVar24 = _UNK_150b50af0;
  iVar23 = _UNK_150b50aec;
  iVar22 = _UNK_150b50ae8;
  iVar43 = _UNK_150b50ae4;
  iVar29 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  uVar33 = param_3 + 1;
  uVar34 = (uVar33 - param_2) + param_6;
  uVar37 = uVar33;
  if ((int)uVar33 < (int)uVar34) {
    uVar37 = uVar34;
  }
  uVar41 = ~param_3;
  iVar40 = param_2 - param_3;
  if (iVar40 < param_6) {
    iVar35 = iVar40 + -1;
    uVar38 = param_3 + 8;
    if (-1 < (int)uVar33) {
      uVar38 = uVar33;
    }
    iVar28 = uVar33 - (uVar38 & 0xfffffff8);
    iVar42 = 0;
    if (iVar28 < (int)uVar33) {
      uVar38 = param_3 - iVar28;
      if (uVar38 < 8) {
        iVar42 = 0;
      }
      else {
        uVar39 = (uVar38 >> 3) + 1 & 0xfffffffe;
        iVar28 = param_2 * 4 + param_3 * -4;
        uVar36 = 0x20;
        uVar32 = 0;
        auVar45._4_4_ = __real_3f800000;
        auVar45._0_4_ = __real_3f800000;
        auVar45._8_4_ = __real_3f800000;
        auVar45._12_4_ = __real_3f800000;
        auVar45._16_4_ = __real_3f800000;
        auVar45._20_4_ = __real_3f800000;
        auVar45._24_4_ = __real_3f800000;
        auVar45._28_4_ = __real_3f800000;
        iVar42 = 0;
        do {
          iVar12 = iVar42 + iVar40;
          auVar13._0_4_ = iVar12 + iVar29;
          auVar13._4_4_ = iVar12 + iVar43;
          auVar13._8_4_ = iVar12 + iVar22;
          auVar13._12_4_ = iVar12 + iVar23;
          auVar13._16_4_ = iVar12 + iVar24;
          auVar13._20_4_ = iVar12 + iVar25;
          auVar13._24_4_ = iVar12 + iVar26;
          auVar13._28_4_ = iVar12 + iVar27;
          auVar46 = vcvtdq2ps_avx(auVar13);
          auVar46 = vmaxps_avx(auVar45,auVar46);
          auVar46 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (int)(uVar36 + iVar28 + -0x24)),
                               auVar46);
          *(undefined1 (*) [32])(param_4 + (ulonglong)uVar32) = auVar46;
          iVar12 = iVar42 + 8 + iVar40;
          auVar14._0_4_ = iVar12 + iVar29;
          auVar14._4_4_ = iVar12 + iVar43;
          auVar14._8_4_ = iVar12 + iVar22;
          auVar14._12_4_ = iVar12 + iVar23;
          auVar14._16_4_ = iVar12 + iVar24;
          auVar14._20_4_ = iVar12 + iVar25;
          auVar14._24_4_ = iVar12 + iVar26;
          auVar14._28_4_ = iVar12 + iVar27;
          auVar46 = vcvtdq2ps_avx(auVar14);
          auVar46 = vmaxps_avx(auVar45,auVar46);
          auVar46 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (int)(iVar28 + -4 + uVar36)),auVar46
                              );
          *(undefined1 (*) [32])(param_4 + (ulonglong)uVar36) = auVar46;
          iVar42 = iVar42 + 0x10;
          uVar36 = uVar36 + 0x40;
          uVar32 = uVar32 + 0x40;
          uVar39 = uVar39 - 2;
        } while (uVar39 != 0);
      }
      if ((uVar38 & 8) == 0) {
        iVar40 = iVar42 + iVar40;
        auVar15._0_4_ =
             iVar40 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
        auVar15._4_4_ = iVar40 + _UNK_150b50ae4;
        auVar15._8_4_ = iVar40 + _UNK_150b50ae8;
        auVar15._12_4_ = iVar40 + _UNK_150b50aec;
        auVar15._16_4_ = iVar40 + _UNK_150b50af0;
        auVar15._20_4_ = iVar40 + _UNK_150b50af4;
        auVar15._24_4_ = iVar40 + _UNK_150b50af8;
        auVar15._28_4_ = iVar40 + _UNK_150b50afc;
        auVar55._4_4_ = __real_3f800000;
        auVar55._0_4_ = __real_3f800000;
        auVar55._8_4_ = __real_3f800000;
        auVar55._12_4_ = __real_3f800000;
        auVar55._16_4_ = __real_3f800000;
        auVar55._20_4_ = __real_3f800000;
        auVar55._24_4_ = __real_3f800000;
        auVar55._28_4_ = __real_3f800000;
        auVar46 = vcvtdq2ps_avx(auVar15);
        auVar46 = vmaxps_avx(auVar55,auVar46);
        auVar46 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (iVar35 + iVar42) * 4),auVar46);
        *(undefined1 (*) [32])(param_4 + (ulonglong)(uint)(iVar42 * 4)) = auVar46;
        iVar42 = iVar42 + 8;
      }
    }
    if (iVar42 <= (int)param_3) {
      auVar46 = vpbroadcastd_avx512vl();
      auVar21._4_4_ = _UNK_150b50ae4;
      auVar21._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar21._8_4_ = _UNK_150b50ae8;
      auVar21._12_4_ = _UNK_150b50aec;
      auVar21._16_4_ = _UNK_150b50af0;
      auVar21._20_4_ = _UNK_150b50af4;
      auVar21._24_4_ = _UNK_150b50af8;
      auVar21._28_4_ = _UNK_150b50afc;
      auVar46 = vpor_avx2(auVar46,auVar21);
      auVar47 = vpbroadcastd_avx512vl();
      uVar31 = vpcmpgtd_avx512vl(auVar47,auVar46);
      piVar2 = (int *)(param_1 + (iVar42 + iVar35) * 4);
      auVar48._4_4_ = (uint)((byte)(uVar31 >> 1) & 1) * piVar2[1];
      auVar48._0_4_ = (uint)((byte)uVar31 & 1) * *piVar2;
      auVar48._8_4_ = (uint)((byte)(uVar31 >> 2) & 1) * piVar2[2];
      auVar48._12_4_ = (uint)((byte)(uVar31 >> 3) & 1) * piVar2[3];
      auVar48._16_4_ = (uint)((byte)(uVar31 >> 4) & 1) * piVar2[4];
      auVar48._20_4_ = (uint)((byte)(uVar31 >> 5) & 1) * piVar2[5];
      auVar48._24_4_ = (uint)((byte)(uVar31 >> 6) & 1) * piVar2[6];
      auVar48._28_4_ = (uint)(byte)(uVar31 >> 7) * piVar2[7];
      auVar47 = vpbroadcastd_avx512vl();
      auVar16._0_4_ = auVar46._0_4_ + auVar47._0_4_;
      auVar16._4_4_ = auVar46._4_4_ + auVar47._4_4_;
      auVar16._8_4_ = auVar46._8_4_ + auVar47._8_4_;
      auVar16._12_4_ = auVar46._12_4_ + auVar47._12_4_;
      auVar16._16_4_ = auVar46._16_4_ + auVar47._16_4_;
      auVar16._20_4_ = auVar46._20_4_ + auVar47._20_4_;
      auVar16._24_4_ = auVar46._24_4_ + auVar47._24_4_;
      auVar16._28_4_ = auVar46._28_4_ + auVar47._28_4_;
      auVar58._4_4_ = __real_3f800000;
      auVar58._0_4_ = __real_3f800000;
      auVar58._8_4_ = __real_3f800000;
      auVar58._12_4_ = __real_3f800000;
      auVar58._16_4_ = __real_3f800000;
      auVar58._20_4_ = __real_3f800000;
      auVar58._24_4_ = __real_3f800000;
      auVar58._28_4_ = __real_3f800000;
      auVar46 = vcvtdq2ps_avx(auVar16);
      auVar46 = vmaxps_avx(auVar58,auVar46);
      auVar46 = vdivps_avx(auVar48,auVar46);
      puVar3 = (uint *)(param_4 + iVar42 * 4);
      bVar4 = (bool)((byte)uVar31 & 1);
      bVar5 = (bool)((byte)(uVar31 >> 1) & 1);
      bVar6 = (bool)((byte)(uVar31 >> 2) & 1);
      bVar7 = (bool)((byte)(uVar31 >> 3) & 1);
      bVar8 = (bool)((byte)(uVar31 >> 4) & 1);
      bVar9 = (bool)((byte)(uVar31 >> 5) & 1);
      bVar10 = (bool)((byte)(uVar31 >> 6) & 1);
      bVar11 = SUB81(uVar31 >> 7,0);
      *puVar3 = (uint)bVar4 * auVar46._0_4_ | (uint)!bVar4 * *puVar3;
      puVar3[1] = (uint)bVar5 * auVar46._4_4_ | (uint)!bVar5 * puVar3[1];
      puVar3[2] = (uint)bVar6 * auVar46._8_4_ | (uint)!bVar6 * puVar3[2];
      puVar3[3] = (uint)bVar7 * auVar46._12_4_ | (uint)!bVar7 * puVar3[3];
      puVar3[4] = (uint)bVar8 * auVar46._16_4_ | (uint)!bVar8 * puVar3[4];
      puVar3[5] = (uint)bVar9 * auVar46._20_4_ | (uint)!bVar9 * puVar3[5];
      puVar3[6] = (uint)bVar10 * auVar46._24_4_ | (uint)!bVar10 * puVar3[6];
      puVar3[7] = (uint)bVar11 * auVar46._28_4_ | (uint)!bVar11 * puVar3[7];
    }
    auVar20 = vcvtsi2ss_avx512f(in_ZMM16._0_16_,param_2);
    uVar36 = uVar37 - uVar33;
    uVar38 = uVar36 + 7;
    if (-1 < (int)uVar36) {
      uVar38 = uVar36;
    }
    iVar29 = ((uVar38 & 0xfffffff8) - uVar36) + uVar37;
    uVar31 = (ulonglong)uVar33;
    auVar53._0_4_ = auVar20._0_4_;
    if ((int)uVar33 < iVar29) {
      auVar56._4_4_ = auVar53._0_4_;
      auVar56._0_4_ = auVar53._0_4_;
      auVar56._8_4_ = auVar53._0_4_;
      auVar56._12_4_ = auVar53._0_4_;
      auVar56._16_4_ = auVar53._0_4_;
      auVar56._20_4_ = auVar53._0_4_;
      auVar56._24_4_ = auVar53._0_4_;
      auVar56._28_4_ = auVar53._0_4_;
      uVar31 = (ulonglong)(int)uVar33;
      iVar43 = 0;
      do {
        auVar46 = vsubps_avx(*(undefined1 (*) [32])(param_1 + (param_2 * 4 + iVar43)),
                             *(undefined1 (*) [32])(param_1 + iVar43));
        auVar46 = vdivps_avx(auVar46,auVar56);
        *(undefined1 (*) [32])(param_4 + (int)(param_3 * 4 + 4 + iVar43)) = auVar46;
        uVar31 = uVar31 + 8;
        iVar43 = iVar43 + 0x20;
      } while ((longlong)uVar31 < (longlong)iVar29);
    }
    iVar43 = (int)uVar31;
    if ((int)uVar37 <= iVar43) goto LAB_140a1578b;
    auVar46 = vpbroadcastd_avx512vl();
    auVar17._0_4_ =
         auVar46._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar17._4_4_ = auVar46._4_4_ + _UNK_150b50ae4;
    auVar17._8_4_ = auVar46._8_4_ + _UNK_150b50ae8;
    auVar17._12_4_ = auVar46._12_4_ + _UNK_150b50aec;
    auVar17._16_4_ = auVar46._16_4_ + _UNK_150b50af0;
    auVar17._20_4_ = auVar46._20_4_ + _UNK_150b50af4;
    auVar17._24_4_ = auVar46._24_4_ + _UNK_150b50af8;
    auVar17._28_4_ = auVar46._28_4_ + _UNK_150b50afc;
    auVar46 = vpbroadcastd_avx512vl();
    uVar44 = vpcmpgtd_avx512vl(auVar46,auVar17);
    piVar2 = (int *)(param_1 + (iVar35 + iVar43) * 4);
    auVar49._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * piVar2[1];
    auVar49._0_4_ = (uint)((byte)uVar44 & 1) * *piVar2;
    auVar49._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * piVar2[2];
    auVar49._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * piVar2[3];
    auVar49._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * piVar2[4];
    auVar49._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * piVar2[5];
    auVar49._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * piVar2[6];
    auVar49._28_4_ = (uint)(byte)(uVar44 >> 7) * piVar2[7];
    iVar29 = iVar43 * 4;
    piVar2 = (int *)(param_1 + (int)((iVar43 + uVar41) * 4));
    auVar50._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * piVar2[1];
    auVar50._0_4_ = (uint)((byte)uVar44 & 1) * *piVar2;
    auVar50._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * piVar2[2];
    auVar50._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * piVar2[3];
    auVar50._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * piVar2[4];
    auVar50._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * piVar2[5];
    auVar50._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * piVar2[6];
    auVar50._28_4_ = (uint)(byte)(uVar44 >> 7) * piVar2[7];
    auVar46 = vsubps_avx(auVar49,auVar50);
    auVar53._4_4_ = auVar53._0_4_;
    auVar53._8_4_ = auVar53._0_4_;
    auVar53._12_4_ = auVar53._0_4_;
    auVar53._16_4_ = auVar53._0_4_;
    auVar53._20_4_ = auVar53._0_4_;
    auVar53._24_4_ = auVar53._0_4_;
    auVar53._28_4_ = auVar53._0_4_;
    auVar46 = vdivps_avx(auVar46,auVar53);
  }
  else {
    auVar46._0_4_ = param_5 / (float)param_6;
    uVar38 = uVar37 + 7;
    if (-1 < (int)uVar37) {
      uVar38 = uVar37;
    }
    if ((int)(uVar38 & 0xfffffff8) < 1) {
      uVar31 = 0;
      if ((int)uVar37 < 1) goto LAB_140a1578b;
    }
    else {
      uVar36 = 0;
      uVar31 = 0;
      do {
        pfVar1 = (float *)(param_4 + (ulonglong)uVar36);
        *pfVar1 = auVar46._0_4_;
        pfVar1[1] = auVar46._0_4_;
        pfVar1[2] = auVar46._0_4_;
        pfVar1[3] = auVar46._0_4_;
        pfVar1[4] = auVar46._0_4_;
        pfVar1[5] = auVar46._0_4_;
        pfVar1[6] = auVar46._0_4_;
        pfVar1[7] = auVar46._0_4_;
        uVar31 = uVar31 + 8;
        uVar36 = uVar36 + 0x20;
      } while (uVar31 < (uVar38 & 0xfffffff8));
      if ((int)uVar37 <= (int)uVar31) goto LAB_140a1578b;
    }
    auVar45 = vpbroadcastd_avx512vl();
    auVar47._4_4_ = _UNK_150b50ae4;
    auVar47._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar47._8_4_ = _UNK_150b50ae8;
    auVar47._12_4_ = _UNK_150b50aec;
    auVar47._16_4_ = _UNK_150b50af0;
    auVar47._20_4_ = _UNK_150b50af4;
    auVar47._24_4_ = _UNK_150b50af8;
    auVar47._28_4_ = _UNK_150b50afc;
    auVar47 = vpor_avx2(auVar45,auVar47);
    auVar45 = vpbroadcastd_avx512vl();
    uVar44 = vpcmpgtd_avx512vl(auVar45,auVar47);
    iVar29 = (int)uVar31 << 2;
    auVar46._4_4_ = auVar46._0_4_;
    auVar46._8_4_ = auVar46._0_4_;
    auVar46._12_4_ = auVar46._0_4_;
    auVar46._16_4_ = auVar46._0_4_;
    auVar46._20_4_ = auVar46._0_4_;
    auVar46._24_4_ = auVar46._0_4_;
    auVar46._28_4_ = auVar46._0_4_;
  }
  puVar3 = (uint *)(param_4 + iVar29);
  bVar4 = (bool)((byte)uVar44 & 1);
  bVar5 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar6 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar7 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar8 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar9 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar10 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar11 = SUB81(uVar44 >> 7,0);
  *puVar3 = (uint)bVar4 * auVar46._0_4_ | (uint)!bVar4 * *puVar3;
  puVar3[1] = (uint)bVar5 * auVar46._4_4_ | (uint)!bVar5 * puVar3[1];
  puVar3[2] = (uint)bVar6 * auVar46._8_4_ | (uint)!bVar6 * puVar3[2];
  puVar3[3] = (uint)bVar7 * auVar46._12_4_ | (uint)!bVar7 * puVar3[3];
  puVar3[4] = (uint)bVar8 * auVar46._16_4_ | (uint)!bVar8 * puVar3[4];
  puVar3[5] = (uint)bVar9 * auVar46._20_4_ | (uint)!bVar9 * puVar3[5];
  puVar3[6] = (uint)bVar10 * auVar46._24_4_ | (uint)!bVar10 * puVar3[6];
  puVar3[7] = (uint)bVar11 * auVar46._28_4_ | (uint)!bVar11 * puVar3[7];
LAB_140a1578b:
  iVar27 = _UNK_150d5a7fc;
  iVar26 = _UNK_150d5a7f8;
  iVar25 = _UNK_150d5a7f4;
  iVar24 = _UNK_150d5a7f0;
  iVar23 = _UNK_150d5a7ec;
  iVar22 = _UNK_150d5a7e8;
  iVar43 = _UNK_150d5a7e4;
  iVar29 = ___ymm_fffffff9fffffffafffffffbfffffffcfffffffdfffffffeffffffff00000000;
  uVar36 = param_6 - uVar37;
  uVar38 = uVar36 + 7;
  if (-1 < (int)uVar36) {
    uVar38 = uVar36;
  }
  iVar40 = ((uVar38 & 0xfffffff8) - uVar36) + param_6;
  if ((int)uVar37 < iVar40) {
    auVar57._4_4_ = param_5;
    auVar57._0_4_ = param_5;
    auVar57._8_4_ = param_5;
    auVar57._12_4_ = param_5;
    auVar57._16_4_ = param_5;
    auVar57._20_4_ = param_5;
    auVar57._24_4_ = param_5;
    auVar57._28_4_ = param_5;
    uVar37 = uVar33;
    if ((int)uVar33 < (int)uVar34) {
      uVar37 = uVar34;
    }
    lVar30 = (longlong)(int)uVar37;
    iVar35 = uVar37 * 4;
    do {
      auVar47 = vsubps_avx512vl(auVar57,*(undefined1 (*) [32])(param_1 + (int)(uVar41 * 4 + iVar35))
                               );
      auVar20 = vpsubd_avx(ZEXT416(param_6 + param_3),ZEXT416(uVar37));
      iVar28 = auVar20._0_4_;
      auVar18._0_4_ = iVar28 + iVar29;
      auVar18._4_4_ = iVar28 + iVar43;
      auVar18._8_4_ = iVar28 + iVar22;
      auVar18._12_4_ = iVar28 + iVar23;
      auVar18._16_4_ = iVar28 + iVar24;
      auVar18._20_4_ = iVar28 + iVar25;
      auVar18._24_4_ = iVar28 + iVar26;
      auVar18._28_4_ = iVar28 + iVar27;
      auVar46 = vcvtdq2ps_avx(auVar18);
      auVar46 = vdivps_avx512vl(auVar47,auVar46);
      *(undefined1 (*) [32])(param_4 + iVar35) = auVar46;
      lVar30 = lVar30 + 8;
      iVar35 = iVar35 + 0x20;
      uVar37 = uVar37 + 8;
    } while (lVar30 < iVar40);
  }
  if ((int)uVar37 < param_6) {
    auVar46 = vpbroadcastd_avx512vl();
    auVar19._0_4_ =
         auVar46._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar19._4_4_ = auVar46._4_4_ + _UNK_150b50ae4;
    auVar19._8_4_ = auVar46._8_4_ + _UNK_150b50ae8;
    auVar19._12_4_ = auVar46._12_4_ + _UNK_150b50aec;
    auVar19._16_4_ = auVar46._16_4_ + _UNK_150b50af0;
    auVar19._20_4_ = auVar46._20_4_ + _UNK_150b50af4;
    auVar19._24_4_ = auVar46._24_4_ + _UNK_150b50af8;
    auVar19._28_4_ = auVar46._28_4_ + _UNK_150b50afc;
    auVar46 = vpbroadcastd_avx512vl();
    uVar31 = vpcmpgtd_avx512vl(auVar46,auVar19);
    auVar52._4_4_ = param_5;
    auVar52._0_4_ = param_5;
    auVar52._8_4_ = param_5;
    auVar52._12_4_ = param_5;
    auVar52._16_4_ = param_5;
    auVar52._20_4_ = param_5;
    auVar52._24_4_ = param_5;
    auVar52._28_4_ = param_5;
    piVar2 = (int *)(param_1 + (int)((uVar41 + uVar37) * 4));
    auVar51._4_4_ = (uint)((byte)(uVar31 >> 1) & 1) * piVar2[1];
    auVar51._0_4_ = (uint)((byte)uVar31 & 1) * *piVar2;
    auVar51._8_4_ = (uint)((byte)(uVar31 >> 2) & 1) * piVar2[2];
    auVar51._12_4_ = (uint)((byte)(uVar31 >> 3) & 1) * piVar2[3];
    auVar51._16_4_ = (uint)((byte)(uVar31 >> 4) & 1) * piVar2[4];
    auVar51._20_4_ = (uint)((byte)(uVar31 >> 5) & 1) * piVar2[5];
    auVar51._24_4_ = (uint)((byte)(uVar31 >> 6) & 1) * piVar2[6];
    auVar51._28_4_ = (uint)(byte)(uVar31 >> 7) * piVar2[7];
    auVar47 = vsubps_avx(auVar52,auVar51);
    iVar29 = auVar46._0_4_ + param_3;
    auVar54._4_4_ = iVar29;
    auVar54._0_4_ = iVar29;
    auVar54._8_4_ = iVar29;
    auVar54._12_4_ = iVar29;
    auVar54._16_4_ = iVar29;
    auVar54._20_4_ = iVar29;
    auVar54._24_4_ = iVar29;
    auVar54._28_4_ = iVar29;
    auVar46 = vpsubd_avx2(auVar54,auVar19);
    auVar46 = vcvtdq2ps_avx(auVar46);
    auVar46 = vdivps_avx(auVar47,auVar46);
    puVar3 = (uint *)(param_4 + (int)(uVar37 * 4));
    bVar4 = (bool)((byte)uVar31 & 1);
    bVar5 = (bool)((byte)(uVar31 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar31 >> 2) & 1);
    bVar7 = (bool)((byte)(uVar31 >> 3) & 1);
    bVar8 = (bool)((byte)(uVar31 >> 4) & 1);
    bVar9 = (bool)((byte)(uVar31 >> 5) & 1);
    bVar10 = (bool)((byte)(uVar31 >> 6) & 1);
    bVar11 = SUB81(uVar31 >> 7,0);
    *puVar3 = (uint)bVar4 * auVar46._0_4_ | (uint)!bVar4 * *puVar3;
    puVar3[1] = (uint)bVar5 * auVar46._4_4_ | (uint)!bVar5 * puVar3[1];
    puVar3[2] = (uint)bVar6 * auVar46._8_4_ | (uint)!bVar6 * puVar3[2];
    puVar3[3] = (uint)bVar7 * auVar46._12_4_ | (uint)!bVar7 * puVar3[3];
    puVar3[4] = (uint)bVar8 * auVar46._16_4_ | (uint)!bVar8 * puVar3[4];
    puVar3[5] = (uint)bVar9 * auVar46._20_4_ | (uint)!bVar9 * puVar3[5];
    puVar3[6] = (uint)bVar10 * auVar46._24_4_ | (uint)!bVar10 * puVar3[6];
    puVar3[7] = (uint)bVar11 * auVar46._28_4_ | (uint)!bVar11 * puVar3[7];
  }
  return;
}

// ArrayMultiply___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a15e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiply___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar43 = param_4;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar44 = 0;
    do {
      uVar46 = (ulonglong)uVar47;
      pfVar1 = (float *)(param_1 + uVar46);
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      fVar18 = pfVar1[4];
      fVar19 = pfVar1[5];
      fVar20 = pfVar1[6];
      fVar21 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar46);
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      fVar25 = pfVar2[4];
      fVar26 = pfVar2[5];
      fVar27 = pfVar2[6];
      fVar28 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar46);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar15 * fVar22;
      pfVar3[2] = fVar16 * fVar23;
      pfVar3[3] = fVar17 * fVar24;
      pfVar3[4] = fVar18 * fVar25;
      pfVar3[5] = fVar19 * fVar26;
      pfVar3[6] = fVar20 * fVar27;
      pfVar3[7] = fVar21 * fVar28;
      uVar44 = uVar44 + 8;
      uVar47 = uVar47 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar46 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar7 = (byte)uVar46;
  piVar5 = (int *)(param_2 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_3 + lVar45);
  bVar8 = (bool)((byte)(uVar46 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar46 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar46 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar46 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar46 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar46 >> 6) & 1);
  bVar14 = SUB81(uVar46 >> 7,0);
  *puVar6 = (uint)(bVar7 & 1) *
            (int)((float)((uint)(bVar7 & 1) * *piVar4) * (float)((uint)(bVar7 & 1) * *piVar5)) |
            (uint)!(bool)(bVar7 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 *
              (int)((float)((uint)((byte)(uVar46 >> 1) & 1) * iVar29) *
                   (float)((uint)((byte)(uVar46 >> 1) & 1) * iVar36)) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 *
              (int)((float)((uint)((byte)(uVar46 >> 2) & 1) * iVar30) *
                   (float)((uint)((byte)(uVar46 >> 2) & 1) * iVar37)) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 *
              (int)((float)((uint)((byte)(uVar46 >> 3) & 1) * iVar31) *
                   (float)((uint)((byte)(uVar46 >> 3) & 1) * iVar38)) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 *
              (int)((float)((uint)((byte)(uVar46 >> 4) & 1) * iVar32) *
                   (float)((uint)((byte)(uVar46 >> 4) & 1) * iVar39)) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 *
              (int)((float)((uint)((byte)(uVar46 >> 5) & 1) * iVar33) *
                   (float)((uint)((byte)(uVar46 >> 5) & 1) * iVar40)) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 *
              (int)((float)((uint)((byte)(uVar46 >> 6) & 1) * iVar34) *
                   (float)((uint)((byte)(uVar46 >> 6) & 1) * iVar41)) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 *
              (int)((float)((uint)(byte)(uVar46 >> 7) * iVar35) *
                   (float)((uint)(byte)(uVar46 >> 7) * iVar42)) | (uint)!bVar14 * puVar6[7];
  return;
}

// ArrayComplexMultiplyInPlace___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a15f70

void ArrayComplexMultiplyInPlace___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  int *piVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  byte bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar12 = __real_3f800000bf800000._4_4_;
  fVar11 = (float)__real_3f800000bf800000;
  uVar21 = param_3 & 0xfffffff8;
  if (0 < (int)uVar21) {
    auVar29 = vpsllw_avx512vl(*param_4,0xf);
    uVar28 = vpmovw2m_avx512vl(auVar29);
    uVar27 = (uVar21 - 1 >> 3) + 1;
    uVar25 = uVar27 & 3;
    bVar13 = (byte)uVar28;
    if (uVar21 < 0x19) {
      iVar26 = 0;
    }
    else {
      uVar27 = uVar27 & 0xfffffffc;
      iVar26 = (uVar27 - 4 >> 2) * 0x20 + 0x20;
      uVar23 = 0;
      do {
        uVar24 = (ulonglong)uVar23;
        piVar9 = (int *)(param_1 + uVar24);
        auVar30._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar9[1];
        auVar30._0_4_ = (uint)(bVar13 & 1) * *piVar9;
        auVar30._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar9[2];
        auVar30._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar9[3];
        auVar30._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar9[4];
        auVar30._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar9[5];
        auVar30._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar9[6];
        auVar30._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar9[7];
        piVar9 = (int *)(param_2 + uVar24);
        fVar5 = (float)((uint)(bVar13 & 1) * *piVar9);
        fVar1 = (float)((uint)((byte)(uVar28 >> 1) & 1) * piVar9[1]);
        auVar31._4_4_ = fVar1;
        auVar31._0_4_ = fVar5;
        fVar7 = (float)((uint)((byte)(uVar28 >> 2) & 1) * piVar9[2]);
        auVar31._8_4_ = fVar7;
        fVar8 = (float)((uint)((byte)(uVar28 >> 3) & 1) * piVar9[3]);
        auVar31._12_4_ = fVar8;
        fVar6 = (float)((uint)((byte)(uVar28 >> 4) & 1) * piVar9[4]);
        auVar31._16_4_ = fVar6;
        fVar2 = (float)((uint)((byte)(uVar28 >> 5) & 1) * piVar9[5]);
        auVar31._20_4_ = fVar2;
        fVar3 = (float)((uint)((byte)(uVar28 >> 6) & 1) * piVar9[6]);
        auVar31._24_4_ = fVar3;
        fVar4 = (float)((uint)((byte)(uVar28 >> 7) & 1) * piVar9[7]);
        auVar31._28_4_ = fVar4;
        auVar38 = vmovshdup_avx(auVar30);
        auVar31 = vshufps_avx(auVar31,auVar31,0xb1);
        auVar30 = vmovsldup_avx(auVar30);
        puVar10 = (uint *)(param_2 + uVar24);
        bVar14 = (bool)((byte)(uVar28 >> 1) & 1);
        bVar15 = (bool)((byte)(uVar28 >> 2) & 1);
        bVar16 = (bool)((byte)(uVar28 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar28 >> 4) & 1);
        bVar18 = (bool)((byte)(uVar28 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar28 >> 6) & 1);
        bVar20 = (bool)((byte)(uVar28 >> 7) & 1);
        *puVar10 = (uint)(bVar13 & 1) *
                   (int)(fVar5 * auVar30._0_4_ + auVar38._0_4_ * auVar31._0_4_ * fVar11) |
                   (uint)!(bool)(bVar13 & 1) * *puVar10;
        puVar10[1] = (uint)bVar14 *
                     (int)(fVar1 * auVar30._4_4_ + auVar38._4_4_ * auVar31._4_4_ * fVar12) |
                     (uint)!bVar14 * puVar10[1];
        puVar10[2] = (uint)bVar15 *
                     (int)(fVar7 * auVar30._8_4_ + auVar38._8_4_ * auVar31._8_4_ * fVar11) |
                     (uint)!bVar15 * puVar10[2];
        puVar10[3] = (uint)bVar16 *
                     (int)(fVar8 * auVar30._12_4_ + auVar38._12_4_ * auVar31._12_4_ * fVar12) |
                     (uint)!bVar16 * puVar10[3];
        puVar10[4] = (uint)bVar17 *
                     (int)(fVar6 * auVar30._16_4_ + auVar38._16_4_ * auVar31._16_4_ * fVar11) |
                     (uint)!bVar17 * puVar10[4];
        puVar10[5] = (uint)bVar18 *
                     (int)(fVar2 * auVar30._20_4_ + auVar38._20_4_ * auVar31._20_4_ * fVar12) |
                     (uint)!bVar18 * puVar10[5];
        puVar10[6] = (uint)bVar19 *
                     (int)(fVar3 * auVar30._24_4_ + auVar38._24_4_ * auVar31._24_4_ * fVar11) |
                     (uint)!bVar19 * puVar10[6];
        puVar10[7] = (uint)bVar20 *
                     (int)(fVar4 * auVar30._28_4_ + auVar38._28_4_ * auVar31._28_4_ * fVar12) |
                     (uint)!bVar20 * puVar10[7];
        piVar9 = (int *)(param_1 + 0x20 + uVar24);
        auVar32._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar9[1];
        auVar32._0_4_ = (uint)(bVar13 & 1) * *piVar9;
        auVar32._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar9[2];
        auVar32._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar9[3];
        auVar32._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar9[4];
        auVar32._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar9[5];
        auVar32._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar9[6];
        auVar32._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar9[7];
        piVar9 = (int *)(param_2 + 0x20 + uVar24);
        fVar5 = (float)((uint)(bVar13 & 1) * *piVar9);
        fVar1 = (float)((uint)((byte)(uVar28 >> 1) & 1) * piVar9[1]);
        auVar33._4_4_ = fVar1;
        auVar33._0_4_ = fVar5;
        fVar7 = (float)((uint)((byte)(uVar28 >> 2) & 1) * piVar9[2]);
        auVar33._8_4_ = fVar7;
        fVar8 = (float)((uint)((byte)(uVar28 >> 3) & 1) * piVar9[3]);
        auVar33._12_4_ = fVar8;
        fVar6 = (float)((uint)((byte)(uVar28 >> 4) & 1) * piVar9[4]);
        auVar33._16_4_ = fVar6;
        fVar2 = (float)((uint)((byte)(uVar28 >> 5) & 1) * piVar9[5]);
        auVar33._20_4_ = fVar2;
        fVar3 = (float)((uint)((byte)(uVar28 >> 6) & 1) * piVar9[6]);
        auVar33._24_4_ = fVar3;
        fVar4 = (float)((uint)((byte)(uVar28 >> 7) & 1) * piVar9[7]);
        auVar33._28_4_ = fVar4;
        auVar38 = vmovshdup_avx(auVar32);
        auVar31 = vshufps_avx(auVar33,auVar33,0xb1);
        auVar30 = vmovsldup_avx(auVar32);
        puVar10 = (uint *)(param_2 + 0x20 + uVar24);
        bVar14 = (bool)((byte)(uVar28 >> 1) & 1);
        bVar15 = (bool)((byte)(uVar28 >> 2) & 1);
        bVar16 = (bool)((byte)(uVar28 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar28 >> 4) & 1);
        bVar18 = (bool)((byte)(uVar28 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar28 >> 6) & 1);
        bVar20 = (bool)((byte)(uVar28 >> 7) & 1);
        *puVar10 = (uint)(bVar13 & 1) *
                   (int)(fVar5 * auVar30._0_4_ + auVar38._0_4_ * auVar31._0_4_ * fVar11) |
                   (uint)!(bool)(bVar13 & 1) * *puVar10;
        puVar10[1] = (uint)bVar14 *
                     (int)(fVar1 * auVar30._4_4_ + auVar38._4_4_ * auVar31._4_4_ * fVar12) |
                     (uint)!bVar14 * puVar10[1];
        puVar10[2] = (uint)bVar15 *
                     (int)(fVar7 * auVar30._8_4_ + auVar38._8_4_ * auVar31._8_4_ * fVar11) |
                     (uint)!bVar15 * puVar10[2];
        puVar10[3] = (uint)bVar16 *
                     (int)(fVar8 * auVar30._12_4_ + auVar38._12_4_ * auVar31._12_4_ * fVar12) |
                     (uint)!bVar16 * puVar10[3];
        puVar10[4] = (uint)bVar17 *
                     (int)(fVar6 * auVar30._16_4_ + auVar38._16_4_ * auVar31._16_4_ * fVar11) |
                     (uint)!bVar17 * puVar10[4];
        puVar10[5] = (uint)bVar18 *
                     (int)(fVar2 * auVar30._20_4_ + auVar38._20_4_ * auVar31._20_4_ * fVar12) |
                     (uint)!bVar18 * puVar10[5];
        puVar10[6] = (uint)bVar19 *
                     (int)(fVar3 * auVar30._24_4_ + auVar38._24_4_ * auVar31._24_4_ * fVar11) |
                     (uint)!bVar19 * puVar10[6];
        puVar10[7] = (uint)bVar20 *
                     (int)(fVar4 * auVar30._28_4_ + auVar38._28_4_ * auVar31._28_4_ * fVar12) |
                     (uint)!bVar20 * puVar10[7];
        piVar9 = (int *)(param_1 + 0x40 + uVar24);
        auVar34._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar9[1];
        auVar34._0_4_ = (uint)(bVar13 & 1) * *piVar9;
        auVar34._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar9[2];
        auVar34._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar9[3];
        auVar34._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar9[4];
        auVar34._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar9[5];
        auVar34._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar9[6];
        auVar34._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar9[7];
        piVar9 = (int *)(param_2 + 0x40 + uVar24);
        fVar5 = (float)((uint)(bVar13 & 1) * *piVar9);
        fVar1 = (float)((uint)((byte)(uVar28 >> 1) & 1) * piVar9[1]);
        auVar35._4_4_ = fVar1;
        auVar35._0_4_ = fVar5;
        fVar7 = (float)((uint)((byte)(uVar28 >> 2) & 1) * piVar9[2]);
        auVar35._8_4_ = fVar7;
        fVar8 = (float)((uint)((byte)(uVar28 >> 3) & 1) * piVar9[3]);
        auVar35._12_4_ = fVar8;
        fVar6 = (float)((uint)((byte)(uVar28 >> 4) & 1) * piVar9[4]);
        auVar35._16_4_ = fVar6;
        fVar2 = (float)((uint)((byte)(uVar28 >> 5) & 1) * piVar9[5]);
        auVar35._20_4_ = fVar2;
        fVar3 = (float)((uint)((byte)(uVar28 >> 6) & 1) * piVar9[6]);
        auVar35._24_4_ = fVar3;
        fVar4 = (float)((uint)((byte)(uVar28 >> 7) & 1) * piVar9[7]);
        auVar35._28_4_ = fVar4;
        auVar38 = vmovshdup_avx(auVar34);
        auVar31 = vshufps_avx(auVar35,auVar35,0xb1);
        auVar30 = vmovsldup_avx(auVar34);
        puVar10 = (uint *)(param_2 + 0x40 + uVar24);
        bVar14 = (bool)((byte)(uVar28 >> 1) & 1);
        bVar15 = (bool)((byte)(uVar28 >> 2) & 1);
        bVar16 = (bool)((byte)(uVar28 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar28 >> 4) & 1);
        bVar18 = (bool)((byte)(uVar28 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar28 >> 6) & 1);
        bVar20 = (bool)((byte)(uVar28 >> 7) & 1);
        *puVar10 = (uint)(bVar13 & 1) *
                   (int)(fVar5 * auVar30._0_4_ + auVar38._0_4_ * auVar31._0_4_ * fVar11) |
                   (uint)!(bool)(bVar13 & 1) * *puVar10;
        puVar10[1] = (uint)bVar14 *
                     (int)(fVar1 * auVar30._4_4_ + auVar38._4_4_ * auVar31._4_4_ * fVar12) |
                     (uint)!bVar14 * puVar10[1];
        puVar10[2] = (uint)bVar15 *
                     (int)(fVar7 * auVar30._8_4_ + auVar38._8_4_ * auVar31._8_4_ * fVar11) |
                     (uint)!bVar15 * puVar10[2];
        puVar10[3] = (uint)bVar16 *
                     (int)(fVar8 * auVar30._12_4_ + auVar38._12_4_ * auVar31._12_4_ * fVar12) |
                     (uint)!bVar16 * puVar10[3];
        puVar10[4] = (uint)bVar17 *
                     (int)(fVar6 * auVar30._16_4_ + auVar38._16_4_ * auVar31._16_4_ * fVar11) |
                     (uint)!bVar17 * puVar10[4];
        puVar10[5] = (uint)bVar18 *
                     (int)(fVar2 * auVar30._20_4_ + auVar38._20_4_ * auVar31._20_4_ * fVar12) |
                     (uint)!bVar18 * puVar10[5];
        puVar10[6] = (uint)bVar19 *
                     (int)(fVar3 * auVar30._24_4_ + auVar38._24_4_ * auVar31._24_4_ * fVar11) |
                     (uint)!bVar19 * puVar10[6];
        puVar10[7] = (uint)bVar20 *
                     (int)(fVar4 * auVar30._28_4_ + auVar38._28_4_ * auVar31._28_4_ * fVar12) |
                     (uint)!bVar20 * puVar10[7];
        piVar9 = (int *)(param_1 + 0x60 + uVar24);
        auVar36._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar9[1];
        auVar36._0_4_ = (uint)(bVar13 & 1) * *piVar9;
        auVar36._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar9[2];
        auVar36._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar9[3];
        auVar36._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar9[4];
        auVar36._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar9[5];
        auVar36._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar9[6];
        auVar36._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar9[7];
        piVar9 = (int *)(param_2 + 0x60 + uVar24);
        fVar6 = (float)((uint)(bVar13 & 1) * *piVar9);
        fVar2 = (float)((uint)((byte)(uVar28 >> 1) & 1) * piVar9[1]);
        auVar37._4_4_ = fVar2;
        auVar37._0_4_ = fVar6;
        fVar3 = (float)((uint)((byte)(uVar28 >> 2) & 1) * piVar9[2]);
        auVar37._8_4_ = fVar3;
        fVar4 = (float)((uint)((byte)(uVar28 >> 3) & 1) * piVar9[3]);
        auVar37._12_4_ = fVar4;
        fVar5 = (float)((uint)((byte)(uVar28 >> 4) & 1) * piVar9[4]);
        auVar37._16_4_ = fVar5;
        fVar1 = (float)((uint)((byte)(uVar28 >> 5) & 1) * piVar9[5]);
        auVar37._20_4_ = fVar1;
        fVar7 = (float)((uint)((byte)(uVar28 >> 6) & 1) * piVar9[6]);
        auVar37._24_4_ = fVar7;
        fVar8 = (float)((uint)((byte)(uVar28 >> 7) & 1) * piVar9[7]);
        auVar37._28_4_ = fVar8;
        auVar38 = vmovshdup_avx(auVar36);
        auVar31 = vshufps_avx(auVar37,auVar37,0xb1);
        auVar30 = vmovsldup_avx(auVar36);
        puVar10 = (uint *)(param_2 + 0x60 + uVar24);
        bVar14 = (bool)((byte)(uVar28 >> 1) & 1);
        bVar15 = (bool)((byte)(uVar28 >> 2) & 1);
        bVar16 = (bool)((byte)(uVar28 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar28 >> 4) & 1);
        bVar18 = (bool)((byte)(uVar28 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar28 >> 6) & 1);
        bVar20 = (bool)((byte)(uVar28 >> 7) & 1);
        *puVar10 = (uint)(bVar13 & 1) *
                   (int)(fVar6 * auVar30._0_4_ + auVar38._0_4_ * auVar31._0_4_ * fVar11) |
                   (uint)!(bool)(bVar13 & 1) * *puVar10;
        puVar10[1] = (uint)bVar14 *
                     (int)(fVar2 * auVar30._4_4_ + auVar38._4_4_ * auVar31._4_4_ * fVar12) |
                     (uint)!bVar14 * puVar10[1];
        puVar10[2] = (uint)bVar15 *
                     (int)(fVar3 * auVar30._8_4_ + auVar38._8_4_ * auVar31._8_4_ * fVar11) |
                     (uint)!bVar15 * puVar10[2];
        puVar10[3] = (uint)bVar16 *
                     (int)(fVar4 * auVar30._12_4_ + auVar38._12_4_ * auVar31._12_4_ * fVar12) |
                     (uint)!bVar16 * puVar10[3];
        puVar10[4] = (uint)bVar17 *
                     (int)(fVar5 * auVar30._16_4_ + auVar38._16_4_ * auVar31._16_4_ * fVar11) |
                     (uint)!bVar17 * puVar10[4];
        puVar10[5] = (uint)bVar18 *
                     (int)(fVar1 * auVar30._20_4_ + auVar38._20_4_ * auVar31._20_4_ * fVar12) |
                     (uint)!bVar18 * puVar10[5];
        puVar10[6] = (uint)bVar19 *
                     (int)(fVar7 * auVar30._24_4_ + auVar38._24_4_ * auVar31._24_4_ * fVar11) |
                     (uint)!bVar19 * puVar10[6];
        puVar10[7] = (uint)bVar20 *
                     (int)(fVar8 * auVar30._28_4_ + auVar38._28_4_ * auVar31._28_4_ * fVar12) |
                     (uint)!bVar20 * puVar10[7];
        uVar23 = uVar23 + 0x80;
        uVar27 = uVar27 - 4;
      } while (uVar27 != 0);
    }
    fVar12 = __real_3f800000bf800000._4_4_;
    fVar11 = (float)__real_3f800000bf800000;
    if (uVar25 != 0) {
      uVar27 = iVar26 << 2;
      do {
        uVar24 = (ulonglong)uVar27;
        piVar9 = (int *)(param_1 + uVar24);
        auVar38._4_4_ = (uint)((byte)(uVar28 >> 1) & 1) * piVar9[1];
        auVar38._0_4_ = (uint)(bVar13 & 1) * *piVar9;
        auVar38._8_4_ = (uint)((byte)(uVar28 >> 2) & 1) * piVar9[2];
        auVar38._12_4_ = (uint)((byte)(uVar28 >> 3) & 1) * piVar9[3];
        auVar38._16_4_ = (uint)((byte)(uVar28 >> 4) & 1) * piVar9[4];
        auVar38._20_4_ = (uint)((byte)(uVar28 >> 5) & 1) * piVar9[5];
        auVar38._24_4_ = (uint)((byte)(uVar28 >> 6) & 1) * piVar9[6];
        auVar38._28_4_ = (uint)((byte)(uVar28 >> 7) & 1) * piVar9[7];
        piVar9 = (int *)(param_2 + uVar24);
        fVar1 = (float)((uint)(bVar13 & 1) * *piVar9);
        fVar2 = (float)((uint)((byte)(uVar28 >> 1) & 1) * piVar9[1]);
        auVar39._4_4_ = fVar2;
        auVar39._0_4_ = fVar1;
        fVar3 = (float)((uint)((byte)(uVar28 >> 2) & 1) * piVar9[2]);
        auVar39._8_4_ = fVar3;
        fVar4 = (float)((uint)((byte)(uVar28 >> 3) & 1) * piVar9[3]);
        auVar39._12_4_ = fVar4;
        fVar5 = (float)((uint)((byte)(uVar28 >> 4) & 1) * piVar9[4]);
        auVar39._16_4_ = fVar5;
        fVar6 = (float)((uint)((byte)(uVar28 >> 5) & 1) * piVar9[5]);
        auVar39._20_4_ = fVar6;
        fVar7 = (float)((uint)((byte)(uVar28 >> 6) & 1) * piVar9[6]);
        auVar39._24_4_ = fVar7;
        fVar8 = (float)((uint)((byte)(uVar28 >> 7) & 1) * piVar9[7]);
        auVar39._28_4_ = fVar8;
        auVar30 = vmovsldup_avx(auVar38);
        auVar38 = vmovshdup_avx(auVar38);
        auVar31 = vshufps_avx(auVar39,auVar39,0xb1);
        puVar10 = (uint *)(param_2 + uVar24);
        bVar14 = (bool)((byte)(uVar28 >> 1) & 1);
        bVar15 = (bool)((byte)(uVar28 >> 2) & 1);
        bVar16 = (bool)((byte)(uVar28 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar28 >> 4) & 1);
        bVar18 = (bool)((byte)(uVar28 >> 5) & 1);
        bVar19 = (bool)((byte)(uVar28 >> 6) & 1);
        bVar20 = (bool)((byte)(uVar28 >> 7) & 1);
        *puVar10 = (uint)(bVar13 & 1) *
                   (int)(fVar1 * auVar30._0_4_ + auVar38._0_4_ * auVar31._0_4_ * fVar11) |
                   (uint)!(bool)(bVar13 & 1) * *puVar10;
        puVar10[1] = (uint)bVar14 *
                     (int)(fVar2 * auVar30._4_4_ + auVar38._4_4_ * auVar31._4_4_ * fVar12) |
                     (uint)!bVar14 * puVar10[1];
        puVar10[2] = (uint)bVar15 *
                     (int)(fVar3 * auVar30._8_4_ + auVar38._8_4_ * auVar31._8_4_ * fVar11) |
                     (uint)!bVar15 * puVar10[2];
        puVar10[3] = (uint)bVar16 *
                     (int)(fVar4 * auVar30._12_4_ + auVar38._12_4_ * auVar31._12_4_ * fVar12) |
                     (uint)!bVar16 * puVar10[3];
        puVar10[4] = (uint)bVar17 *
                     (int)(fVar5 * auVar30._16_4_ + auVar38._16_4_ * auVar31._16_4_ * fVar11) |
                     (uint)!bVar17 * puVar10[4];
        puVar10[5] = (uint)bVar18 *
                     (int)(fVar6 * auVar30._20_4_ + auVar38._20_4_ * auVar31._20_4_ * fVar12) |
                     (uint)!bVar18 * puVar10[5];
        puVar10[6] = (uint)bVar19 *
                     (int)(fVar7 * auVar30._24_4_ + auVar38._24_4_ * auVar31._24_4_ * fVar11) |
                     (uint)!bVar19 * puVar10[6];
        puVar10[7] = (uint)bVar20 *
                     (int)(fVar8 * auVar30._28_4_ + auVar38._28_4_ * auVar31._28_4_ * fVar12) |
                     (uint)!bVar20 * puVar10[7];
        uVar27 = uVar27 + 0x20;
        uVar25 = uVar25 - 1;
      } while (uVar25 != 0);
    }
  }
  if ((int)uVar21 < (int)param_3) {
    lVar22 = (longlong)(int)uVar21;
    do {
      fVar11 = *(float *)(param_1 + lVar22 * 4);
      fVar12 = *(float *)(param_1 + 4 + lVar22 * 4);
      fVar5 = *(float *)(param_2 + lVar22 * 4);
      fVar1 = *(float *)(param_2 + 4 + lVar22 * 4);
      *(float *)(param_2 + lVar22 * 4) = fVar11 * fVar5 - fVar12 * fVar1;
      *(float *)(param_2 + 4 + lVar22 * 4) = fVar5 * fVar12 + fVar11 * fVar1;
      lVar22 = lVar22 + 2;
    } while (lVar22 < (int)param_3);
  }
  return;
}

// ArrayComplexMultiplyAdd___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a16160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyAdd___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float fVar1;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  uint *puVar12;
  byte bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [32];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = __real_3f800000bf800000._4_4_;
  fVar3 = (float)__real_3f800000bf800000;
  uVar29 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar29 = param_4;
  }
  if ((int)(uVar29 & 0xfffffff8) < 1) {
    uVar30 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar33 = 0;
    uVar30 = 0;
    do {
      uVar32 = (ulonglong)uVar33;
      auVar34 = *(undefined1 (*) [32])(param_2 + uVar32);
      auVar36 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar32));
      auVar35 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar32));
      auVar21 = vshufps_avx(auVar34,auVar34,0xb1);
      pfVar9 = (float *)(param_3 + uVar32);
      fVar5 = pfVar9[1];
      fVar6 = pfVar9[2];
      fVar7 = pfVar9[3];
      fVar8 = pfVar9[4];
      fVar1 = pfVar9[5];
      fVar2 = pfVar9[6];
      fVar37 = pfVar9[7];
      pfVar10 = (float *)(param_3 + uVar32);
      *pfVar10 = auVar34._0_4_ * auVar36._0_4_ + auVar35._0_4_ * auVar21._0_4_ * fVar3 + *pfVar9;
      pfVar10[1] = auVar34._4_4_ * auVar36._4_4_ + auVar35._4_4_ * auVar21._4_4_ * fVar4 + fVar5;
      pfVar10[2] = auVar34._8_4_ * auVar36._8_4_ + auVar35._8_4_ * auVar21._8_4_ * fVar3 + fVar6;
      pfVar10[3] = auVar34._12_4_ * auVar36._12_4_ + auVar35._12_4_ * auVar21._12_4_ * fVar4 + fVar7
      ;
      pfVar10[4] = auVar34._16_4_ * auVar36._16_4_ + auVar35._16_4_ * auVar21._16_4_ * fVar3 + fVar8
      ;
      pfVar10[5] = auVar34._20_4_ * auVar36._20_4_ + auVar35._20_4_ * auVar21._20_4_ * fVar4 + fVar1
      ;
      pfVar10[6] = auVar34._24_4_ * auVar36._24_4_ + auVar35._24_4_ * auVar21._24_4_ * fVar3 + fVar2
      ;
      pfVar10[7] = auVar34._28_4_ * auVar36._28_4_ + auVar35._28_4_ * auVar21._28_4_ * fVar4 +
                   fVar37;
      uVar30 = uVar30 + 8;
      uVar33 = uVar33 + 0x20;
    } while (uVar30 < (uVar29 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar30) {
      return;
    }
  }
  auVar34 = vpbroadcastd_avx512vl();
  auVar34 = vpor_avx2(auVar34,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar35 = vpbroadcastd_avx512vl();
  uVar32 = vpcmpgtd_avx512vl(auVar35,auVar34);
  lVar31 = (longlong)((int)uVar30 << 2);
  piVar11 = (int *)(param_1 + lVar31);
  bVar13 = (byte)uVar32;
  auVar34._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * piVar11[1];
  auVar34._0_4_ = (uint)(bVar13 & 1) * *piVar11;
  auVar34._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * piVar11[2];
  auVar34._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * piVar11[3];
  auVar34._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * piVar11[4];
  auVar34._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * piVar11[5];
  auVar34._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * piVar11[6];
  auVar34._28_4_ = (uint)(byte)(uVar32 >> 7) * piVar11[7];
  piVar11 = (int *)(param_2 + lVar31);
  fVar1 = (float)((uint)(bVar13 & 1) * *piVar11);
  fVar2 = (float)((uint)((byte)(uVar32 >> 1) & 1) * piVar11[1]);
  auVar36._4_4_ = fVar2;
  auVar36._0_4_ = fVar1;
  fVar3 = (float)((uint)((byte)(uVar32 >> 2) & 1) * piVar11[2]);
  auVar36._8_4_ = fVar3;
  fVar4 = (float)((uint)((byte)(uVar32 >> 3) & 1) * piVar11[3]);
  auVar36._12_4_ = fVar4;
  fVar5 = (float)((uint)((byte)(uVar32 >> 4) & 1) * piVar11[4]);
  auVar36._16_4_ = fVar5;
  fVar6 = (float)((uint)((byte)(uVar32 >> 5) & 1) * piVar11[5]);
  auVar36._20_4_ = fVar6;
  fVar7 = (float)((uint)((byte)(uVar32 >> 6) & 1) * piVar11[6]);
  auVar36._24_4_ = fVar7;
  fVar8 = (float)((uint)(byte)(uVar32 >> 7) * piVar11[7]);
  auVar36._28_4_ = fVar8;
  auVar35 = vmovsldup_avx(auVar34);
  auVar34 = vmovshdup_avx(auVar34);
  auVar36 = vshufps_avx(auVar36,auVar36,0xb1);
  fVar37 = auVar34._4_4_ * auVar36._4_4_ * _UNK_150d5a824;
  fVar38 = auVar34._8_4_ * auVar36._8_4_ * _UNK_150d5a828;
  fVar39 = auVar34._12_4_ * auVar36._12_4_ * _UNK_150d5a82c;
  fVar40 = auVar34._16_4_ * auVar36._16_4_ * _UNK_150d5a830;
  fVar41 = auVar34._20_4_ * auVar36._20_4_ * _UNK_150d5a834;
  fVar42 = auVar34._24_4_ * auVar36._24_4_ * _UNK_150d5a838;
  fVar43 = auVar34._28_4_ * auVar36._28_4_ * _UNK_150d5a83c;
  piVar11 = (int *)(param_3 + lVar31);
  iVar22 = piVar11[1];
  iVar23 = piVar11[2];
  iVar24 = piVar11[3];
  iVar25 = piVar11[4];
  iVar26 = piVar11[5];
  iVar27 = piVar11[6];
  iVar28 = piVar11[7];
  puVar12 = (uint *)(param_3 + lVar31);
  bVar14 = (bool)((byte)(uVar32 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar32 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar32 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar32 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar32 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar32 >> 6) & 1);
  bVar20 = SUB81(uVar32 >> 7,0);
  *puVar12 = (uint)(bVar13 & 1) *
             (int)((float)((uint)(bVar13 & 1) * *piVar11) +
                  fVar1 * auVar35._0_4_ +
                  auVar34._0_4_ * auVar36._0_4_ *
                  ___ymm_3f800000bf8000003f800000bf8000003f800000bf8000003f800000bf800000) |
             (uint)!(bool)(bVar13 & 1) * *puVar12;
  puVar12[1] = (uint)bVar14 *
               (int)((float)((uint)((byte)(uVar32 >> 1) & 1) * iVar22) +
                    fVar2 * auVar35._4_4_ + fVar37) | (uint)!bVar14 * puVar12[1];
  puVar12[2] = (uint)bVar15 *
               (int)((float)((uint)((byte)(uVar32 >> 2) & 1) * iVar23) +
                    fVar3 * auVar35._8_4_ + fVar38) | (uint)!bVar15 * puVar12[2];
  puVar12[3] = (uint)bVar16 *
               (int)((float)((uint)((byte)(uVar32 >> 3) & 1) * iVar24) +
                    fVar4 * auVar35._12_4_ + fVar39) | (uint)!bVar16 * puVar12[3];
  puVar12[4] = (uint)bVar17 *
               (int)((float)((uint)((byte)(uVar32 >> 4) & 1) * iVar25) +
                    fVar5 * auVar35._16_4_ + fVar40) | (uint)!bVar17 * puVar12[4];
  puVar12[5] = (uint)bVar18 *
               (int)((float)((uint)((byte)(uVar32 >> 5) & 1) * iVar26) +
                    fVar6 * auVar35._20_4_ + fVar41) | (uint)!bVar18 * puVar12[5];
  puVar12[6] = (uint)bVar19 *
               (int)((float)((uint)((byte)(uVar32 >> 6) & 1) * iVar27) +
                    fVar7 * auVar35._24_4_ + fVar42) | (uint)!bVar19 * puVar12[6];
  puVar12[7] = (uint)bVar20 *
               (int)((float)((uint)(byte)(uVar32 >> 7) * iVar28) + fVar8 * auVar35._28_4_ + fVar43)
               | (uint)!bVar20 * puVar12[7];
  return;
}

// ArraySubtract___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a16620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtract___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar11 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar12 = 0;
    do {
      uVar14 = (ulonglong)uVar15;
      auVar16 = vsubps_avx(*(undefined1 (*) [32])(param_1 + uVar14),
                           *(undefined1 (*) [32])(param_2 + uVar14));
      *(undefined1 (*) [32])(param_3 + uVar14) = auVar16;
      uVar12 = uVar12 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar12 < (uVar11 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar12) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar14 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar13 = (longlong)((int)uVar12 << 2);
  piVar1 = (int *)(param_1 + lVar13);
  bVar3 = (byte)uVar14;
  auVar16._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar16._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar16._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar16._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar16._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar16._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar16._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar16._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  piVar1 = (int *)(param_2 + lVar13);
  auVar17._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  auVar16 = vsubps_avx(auVar16,auVar17);
  puVar2 = (uint *)(param_3 + lVar13);
  bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar14 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar14 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar14 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar14 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar14 >> 6) & 1);
  bVar10 = SUB81(uVar14 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayComplexToPowerInterleaved___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a17270

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPowerInterleaved___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [32];
  int iVar5;
  int iVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  auVar8 = ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001;
  auVar7 = ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000;
  uVar9 = param_3 & 0xfffffff8;
  if (0 < (int)uVar9) {
    uVar13 = 0;
    uVar14 = 0;
    do {
      auVar16 = *(undefined1 (*) [32])(param_1 + uVar13 * 2);
      auVar4 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar13 * 2);
      auVar15 = vpermt2ps_avx512vl(auVar16,auVar7,auVar4);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar8,auVar4);
      pfVar1 = (float *)(param_2 + (uVar13 & 0xffffffff));
      *pfVar1 = auVar15._0_4_ * auVar15._0_4_ + auVar16._0_4_ * auVar16._0_4_;
      pfVar1[1] = auVar15._4_4_ * auVar15._4_4_ + auVar16._4_4_ * auVar16._4_4_;
      pfVar1[2] = auVar15._8_4_ * auVar15._8_4_ + auVar16._8_4_ * auVar16._8_4_;
      pfVar1[3] = auVar15._12_4_ * auVar15._12_4_ + auVar16._12_4_ * auVar16._12_4_;
      pfVar1[4] = auVar15._16_4_ * auVar15._16_4_ + auVar16._16_4_ * auVar16._16_4_;
      pfVar1[5] = auVar15._20_4_ * auVar15._20_4_ + auVar16._20_4_ * auVar16._20_4_;
      pfVar1[6] = auVar15._24_4_ * auVar15._24_4_ + auVar16._24_4_ * auVar16._24_4_;
      pfVar1[7] = auVar15._28_4_ * auVar15._28_4_ + auVar16._28_4_ * auVar16._28_4_;
      uVar14 = uVar14 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar14 < uVar9);
  }
  if ((int)uVar9 < (int)param_3) {
    lVar10 = (longlong)(int)uVar9;
    if ((param_3 & 3) != 0) {
      lVar12 = param_1 + (longlong)(int)(param_3 * 2 & 0xfffffff0) * 4;
      lVar11 = 0;
      do {
        fVar2 = *(float *)(lVar12 + lVar11 * 8);
        fVar3 = *(float *)(lVar12 + 4 + lVar11 * 8);
        *(float *)(param_2 + lVar10 * 4 + lVar11 * 4) = fVar2 * fVar2 + fVar3 * fVar3;
        lVar11 = lVar11 + 1;
      } while ((param_3 & 3) != (uint)lVar11);
      lVar10 = lVar10 + lVar11;
    }
    if (uVar9 - param_3 < 0xfffffffd) {
      lVar12 = (int)param_3 - lVar10;
      param_2 = param_2 + lVar10 * 4;
      iVar6 = (int)lVar10 * 2;
      lVar10 = 0;
      do {
        iVar5 = (int)lVar10;
        fVar2 = *(float *)(param_1 + (longlong)(iVar6 + iVar5) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar6 + iVar5 + 1) * 4);
        *(float *)(param_2 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar6 + 2 + iVar5) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar6 + 3 + iVar5) * 4);
        *(float *)(param_2 + 4 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar6 + 4 + iVar5) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar6 + 5 + iVar5) * 4);
        *(float *)(param_2 + 8 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar6 + 6 + iVar5) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar6 + 7 + iVar5) * 4);
        *(float *)(param_2 + 0xc + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        lVar10 = lVar10 + 8;
        lVar12 = lVar12 + -4;
      } while (lVar12 != 0);
    }
  }
  return;
}

// ArrayComplexToPower___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a17440

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPower___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float fVar1;
  float fVar9;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int *piVar20;
  uint *puVar21;
  byte bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar30 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar30 = param_4;
  }
  if ((int)(uVar30 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar34 = 0;
    uVar31 = 0;
    do {
      uVar33 = (ulonglong)uVar34;
      pfVar17 = (float *)(param_1 + uVar33);
      fVar1 = pfVar17[1];
      fVar2 = pfVar17[2];
      fVar3 = pfVar17[3];
      fVar4 = pfVar17[4];
      fVar5 = pfVar17[5];
      fVar6 = pfVar17[6];
      fVar7 = pfVar17[7];
      pfVar18 = (float *)(param_2 + uVar33);
      fVar8 = pfVar18[1];
      fVar9 = pfVar18[2];
      fVar10 = pfVar18[3];
      fVar11 = pfVar18[4];
      fVar12 = pfVar18[5];
      fVar13 = pfVar18[6];
      fVar14 = pfVar18[7];
      pfVar19 = (float *)(param_3 + uVar33);
      *pfVar19 = *pfVar17 * *pfVar17 + *pfVar18 * *pfVar18;
      pfVar19[1] = fVar1 * fVar1 + fVar8 * fVar8;
      pfVar19[2] = fVar2 * fVar2 + fVar9 * fVar9;
      pfVar19[3] = fVar3 * fVar3 + fVar10 * fVar10;
      pfVar19[4] = fVar4 * fVar4 + fVar11 * fVar11;
      pfVar19[5] = fVar5 * fVar5 + fVar12 * fVar12;
      pfVar19[6] = fVar6 * fVar6 + fVar13 * fVar13;
      pfVar19[7] = fVar7 * fVar7 + fVar14 * fVar14;
      uVar31 = uVar31 + 8;
      uVar34 = uVar34 + 0x20;
    } while (uVar31 < (uVar30 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar31) {
      return;
    }
  }
  auVar35 = vpbroadcastd_avx512vl();
  auVar35 = vpor_avx2(auVar35,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar36 = vpbroadcastd_avx512vl();
  uVar33 = vpcmpgtd_avx512vl(auVar36,auVar35);
  lVar32 = (longlong)((int)uVar31 << 2);
  piVar20 = (int *)(param_1 + lVar32);
  bVar22 = (byte)uVar33;
  fVar1 = (float)((uint)(bVar22 & 1) * *piVar20);
  fVar2 = (float)((uint)((byte)(uVar33 >> 1) & 1) * piVar20[1]);
  fVar3 = (float)((uint)((byte)(uVar33 >> 2) & 1) * piVar20[2]);
  fVar4 = (float)((uint)((byte)(uVar33 >> 3) & 1) * piVar20[3]);
  fVar5 = (float)((uint)((byte)(uVar33 >> 4) & 1) * piVar20[4]);
  fVar6 = (float)((uint)((byte)(uVar33 >> 5) & 1) * piVar20[5]);
  fVar7 = (float)((uint)((byte)(uVar33 >> 6) & 1) * piVar20[6]);
  fVar8 = (float)((uint)(byte)(uVar33 >> 7) * piVar20[7]);
  piVar20 = (int *)(param_2 + lVar32);
  fVar9 = (float)((uint)(bVar22 & 1) * *piVar20);
  fVar10 = (float)((uint)((byte)(uVar33 >> 1) & 1) * piVar20[1]);
  fVar11 = (float)((uint)((byte)(uVar33 >> 2) & 1) * piVar20[2]);
  fVar12 = (float)((uint)((byte)(uVar33 >> 3) & 1) * piVar20[3]);
  fVar13 = (float)((uint)((byte)(uVar33 >> 4) & 1) * piVar20[4]);
  fVar14 = (float)((uint)((byte)(uVar33 >> 5) & 1) * piVar20[5]);
  fVar15 = (float)((uint)((byte)(uVar33 >> 6) & 1) * piVar20[6]);
  fVar16 = (float)((uint)(byte)(uVar33 >> 7) * piVar20[7]);
  puVar21 = (uint *)(param_3 + lVar32);
  bVar23 = (bool)((byte)(uVar33 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar33 >> 2) & 1);
  bVar25 = (bool)((byte)(uVar33 >> 3) & 1);
  bVar26 = (bool)((byte)(uVar33 >> 4) & 1);
  bVar27 = (bool)((byte)(uVar33 >> 5) & 1);
  bVar28 = (bool)((byte)(uVar33 >> 6) & 1);
  bVar29 = SUB81(uVar33 >> 7,0);
  *puVar21 = (uint)(bVar22 & 1) * (int)(fVar1 * fVar1 + fVar9 * fVar9) |
             (uint)!(bool)(bVar22 & 1) * *puVar21;
  puVar21[1] = (uint)bVar23 * (int)(fVar2 * fVar2 + fVar10 * fVar10) | (uint)!bVar23 * puVar21[1];
  puVar21[2] = (uint)bVar24 * (int)(fVar3 * fVar3 + fVar11 * fVar11) | (uint)!bVar24 * puVar21[2];
  puVar21[3] = (uint)bVar25 * (int)(fVar4 * fVar4 + fVar12 * fVar12) | (uint)!bVar25 * puVar21[3];
  puVar21[4] = (uint)bVar26 * (int)(fVar5 * fVar5 + fVar13 * fVar13) | (uint)!bVar26 * puVar21[4];
  puVar21[5] = (uint)bVar27 * (int)(fVar6 * fVar6 + fVar14 * fVar14) | (uint)!bVar27 * puVar21[5];
  puVar21[6] = (uint)bVar28 * (int)(fVar7 * fVar7 + fVar15 * fVar15) | (uint)!bVar28 * puVar21[6];
  puVar21[7] = (uint)bVar29 * (int)(fVar8 * fVar8 + fVar16 * fVar16) | (uint)!bVar29 * puVar21[7];
  return;
}

// ArrayWeightedSumTwoGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_Cunfun_3C_unf_3E_Cuni_avx512skx @ 140a176f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumTwoGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_Cunfun_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,float param_2,longlong param_3,float param_4,longlong param_5,
               uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
  ulonglong uVar44;
  uint uVar45;
  ulonglong uVar46;
  uint uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar45 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar45 = param_6;
  }
  if ((int)(uVar45 & 0xfffffff8) < 1) {
    uVar46 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar46 = 0;
    do {
      uVar44 = (ulonglong)uVar47;
      pfVar1 = (float *)(param_3 + uVar44);
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar24 = pfVar1[3];
      fVar25 = pfVar1[4];
      fVar26 = pfVar1[5];
      fVar27 = pfVar1[6];
      fVar28 = pfVar1[7];
      pfVar2 = (float *)(param_1 + uVar44);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      fVar10 = pfVar2[4];
      fVar11 = pfVar2[5];
      fVar12 = pfVar2[6];
      fVar13 = pfVar2[7];
      pfVar3 = (float *)(param_5 + uVar44);
      *pfVar3 = param_2 * *pfVar2 + param_4 * *pfVar1;
      pfVar3[1] = param_2 * fVar7 + param_4 * fVar22;
      pfVar3[2] = param_2 * fVar8 + param_4 * fVar23;
      pfVar3[3] = param_2 * fVar9 + param_4 * fVar24;
      pfVar3[4] = param_2 * fVar10 + param_4 * fVar25;
      pfVar3[5] = param_2 * fVar11 + param_4 * fVar26;
      pfVar3[6] = param_2 * fVar12 + param_4 * fVar27;
      pfVar3[7] = param_2 * fVar13 + param_4 * fVar28;
      uVar46 = uVar46 + 8;
      uVar47 = uVar47 + 0x20;
    } while (uVar46 < (uVar45 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar46) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar44 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar43 = (longlong)((int)uVar46 << 2);
  piVar4 = (int *)(param_1 + lVar43);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar14 = (byte)uVar44;
  piVar5 = (int *)(param_3 + lVar43);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_5 + lVar43);
  bVar15 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar21 = SUB81(uVar44 >> 7,0);
  *puVar6 = (uint)(bVar14 & 1) *
            (int)((float)((uint)(bVar14 & 1) * *piVar4) * param_2 +
                 param_4 * (float)((uint)(bVar14 & 1) * *piVar5)) |
            (uint)!(bool)(bVar14 & 1) * *puVar6;
  puVar6[1] = (uint)bVar15 *
              (int)((float)((uint)((byte)(uVar44 >> 1) & 1) * iVar29) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 1) & 1) * iVar36)) |
              (uint)!bVar15 * puVar6[1];
  puVar6[2] = (uint)bVar16 *
              (int)((float)((uint)((byte)(uVar44 >> 2) & 1) * iVar30) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 2) & 1) * iVar37)) |
              (uint)!bVar16 * puVar6[2];
  puVar6[3] = (uint)bVar17 *
              (int)((float)((uint)((byte)(uVar44 >> 3) & 1) * iVar31) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 3) & 1) * iVar38)) |
              (uint)!bVar17 * puVar6[3];
  puVar6[4] = (uint)bVar18 *
              (int)((float)((uint)((byte)(uVar44 >> 4) & 1) * iVar32) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 4) & 1) * iVar39)) |
              (uint)!bVar18 * puVar6[4];
  puVar6[5] = (uint)bVar19 *
              (int)((float)((uint)((byte)(uVar44 >> 5) & 1) * iVar33) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 5) & 1) * iVar40)) |
              (uint)!bVar19 * puVar6[5];
  puVar6[6] = (uint)bVar20 *
              (int)((float)((uint)((byte)(uVar44 >> 6) & 1) * iVar34) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 6) & 1) * iVar41)) |
              (uint)!bVar20 * puVar6[6];
  puVar6[7] = (uint)bVar21 *
              (int)((float)((uint)(byte)(uVar44 >> 7) * iVar35) * param_2 +
                   param_4 * (float)((uint)(byte)(uVar44 >> 7) * iVar42)) |
              (uint)!bVar21 * puVar6[7];
  return;
}

// ArrayWeightedSumOneGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx @ 140a177c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumOneGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx512skx
               (longlong param_1,float param_2,longlong param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  uint uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar44 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar44 = param_5;
  }
  if ((int)(uVar44 & 0xfffffff8) < 1) {
    uVar45 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar45 = 0;
    do {
      uVar46 = (ulonglong)uVar47;
      pfVar1 = (float *)(param_1 + uVar46);
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar24 = pfVar1[3];
      fVar25 = pfVar1[4];
      fVar26 = pfVar1[5];
      fVar27 = pfVar1[6];
      fVar28 = pfVar1[7];
      pfVar2 = (float *)(param_3 + uVar46);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      fVar10 = pfVar2[4];
      fVar11 = pfVar2[5];
      fVar12 = pfVar2[6];
      fVar13 = pfVar2[7];
      pfVar3 = (float *)(param_4 + uVar46);
      *pfVar3 = param_2 * *pfVar1 + *pfVar2;
      pfVar3[1] = param_2 * fVar22 + fVar7;
      pfVar3[2] = param_2 * fVar23 + fVar8;
      pfVar3[3] = param_2 * fVar24 + fVar9;
      pfVar3[4] = param_2 * fVar25 + fVar10;
      pfVar3[5] = param_2 * fVar26 + fVar11;
      pfVar3[6] = param_2 * fVar27 + fVar12;
      pfVar3[7] = param_2 * fVar28 + fVar13;
      uVar45 = uVar45 + 8;
      uVar47 = uVar47 + 0x20;
    } while (uVar45 < (uVar44 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar45) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar46 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar43 = (longlong)((int)uVar45 << 2);
  piVar4 = (int *)(param_1 + lVar43);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar14 = (byte)uVar46;
  piVar5 = (int *)(param_3 + lVar43);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_4 + lVar43);
  bVar15 = (bool)((byte)(uVar46 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar46 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar46 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar46 >> 4) & 1);
  bVar19 = (bool)((byte)(uVar46 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar46 >> 6) & 1);
  bVar21 = SUB81(uVar46 >> 7,0);
  *puVar6 = (uint)(bVar14 & 1) *
            (int)((float)((uint)(bVar14 & 1) * *piVar4) * param_2 +
                 (float)((uint)(bVar14 & 1) * *piVar5)) | (uint)!(bool)(bVar14 & 1) * *puVar6;
  puVar6[1] = (uint)bVar15 *
              (int)((float)((uint)((byte)(uVar46 >> 1) & 1) * iVar29) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 1) & 1) * iVar36)) | (uint)!bVar15 * puVar6[1];
  puVar6[2] = (uint)bVar16 *
              (int)((float)((uint)((byte)(uVar46 >> 2) & 1) * iVar30) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 2) & 1) * iVar37)) | (uint)!bVar16 * puVar6[2];
  puVar6[3] = (uint)bVar17 *
              (int)((float)((uint)((byte)(uVar46 >> 3) & 1) * iVar31) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 3) & 1) * iVar38)) | (uint)!bVar17 * puVar6[3];
  puVar6[4] = (uint)bVar18 *
              (int)((float)((uint)((byte)(uVar46 >> 4) & 1) * iVar32) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 4) & 1) * iVar39)) | (uint)!bVar18 * puVar6[4];
  puVar6[5] = (uint)bVar19 *
              (int)((float)((uint)((byte)(uVar46 >> 5) & 1) * iVar33) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 5) & 1) * iVar40)) | (uint)!bVar19 * puVar6[5];
  puVar6[6] = (uint)bVar20 *
              (int)((float)((uint)((byte)(uVar46 >> 6) & 1) * iVar34) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 6) & 1) * iVar41)) | (uint)!bVar20 * puVar6[6];
  puVar6[7] = (uint)bVar21 *
              (int)((float)((uint)(byte)(uVar46 >> 7) * iVar35) * param_2 +
                   (float)((uint)(byte)(uVar46 >> 7) * iVar42)) | (uint)!bVar21 * puVar6[7];
  return;
}

// TransformArrayRow___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_CuniCuni_avx512skx @ 140a17c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformArrayRow___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_CuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
               undefined1 (*param_6) [16])

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [64];
  
  auVar12 = vpsllw_avx512vl(*param_6,0xf);
  uVar9 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar9 = param_5;
  }
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar10 = 0;
    auVar17 = ZEXT832(0);
    uVar11 = vpmovw2m_avx512vl(auVar12);
    if ((int)param_5 < 1) goto LAB_140a17cbd;
  }
  else {
    auVar18 = ZEXT864(0);
    uVar8 = 0;
    uVar10 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar8);
      pfVar2 = (float *)(param_2 + (ulonglong)uVar8);
      auVar17._0_4_ = *pfVar1 * *pfVar2 + auVar18._0_4_;
      auVar17._4_4_ = pfVar1[1] * pfVar2[1] + auVar18._4_4_;
      auVar17._8_4_ = pfVar1[2] * pfVar2[2] + auVar18._8_4_;
      auVar17._12_4_ = pfVar1[3] * pfVar2[3] + auVar18._12_4_;
      auVar17._16_4_ = pfVar1[4] * pfVar2[4] + auVar18._16_4_;
      auVar17._20_4_ = pfVar1[5] * pfVar2[5] + auVar18._20_4_;
      auVar17._24_4_ = pfVar1[6] * pfVar2[6] + auVar18._24_4_;
      auVar17._28_4_ = pfVar1[7] * pfVar2[7] + auVar18._28_4_;
      auVar18 = ZEXT3264(auVar17);
      uVar10 = uVar10 + 8;
      uVar8 = uVar8 + 0x20;
    } while (uVar10 < (uVar9 & 0xfffffff8));
    uVar11 = vpmovw2m_avx512vl(auVar12);
    if ((int)param_5 <= (int)uVar10) goto LAB_140a17cbd;
  }
  auVar13 = vpbroadcastd_avx512vl();
  auVar13 = vpor_avx2(auVar13,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar14 = vpbroadcastd_avx512vl();
  uVar6 = vpcmpgtd_avx512vl(auVar14,auVar13);
  lVar7 = (longlong)((int)uVar10 << 2);
  piVar3 = (int *)(param_1 + lVar7);
  bVar4 = (byte)uVar6;
  auVar13._4_4_ = (uint)((byte)(uVar6 >> 1) & 1) * piVar3[1];
  auVar13._0_4_ = (uint)(bVar4 & 1) * *piVar3;
  auVar13._8_4_ = (uint)((byte)(uVar6 >> 2) & 1) * piVar3[2];
  auVar13._12_4_ = (uint)((byte)(uVar6 >> 3) & 1) * piVar3[3];
  auVar13._16_4_ = (uint)((byte)(uVar6 >> 4) & 1) * piVar3[4];
  auVar13._20_4_ = (uint)((byte)(uVar6 >> 5) & 1) * piVar3[5];
  auVar13._24_4_ = (uint)((byte)(uVar6 >> 6) & 1) * piVar3[6];
  auVar13._28_4_ = (uint)(byte)(uVar6 >> 7) * piVar3[7];
  piVar3 = (int *)(param_2 + lVar7);
  auVar14._4_4_ = (uint)((byte)(uVar6 >> 1) & 1) * piVar3[1];
  auVar14._0_4_ = (uint)(bVar4 & 1) * *piVar3;
  auVar14._8_4_ = (uint)((byte)(uVar6 >> 2) & 1) * piVar3[2];
  auVar14._12_4_ = (uint)((byte)(uVar6 >> 3) & 1) * piVar3[3];
  auVar14._16_4_ = (uint)((byte)(uVar6 >> 4) & 1) * piVar3[4];
  auVar14._20_4_ = (uint)((byte)(uVar6 >> 5) & 1) * piVar3[5];
  auVar14._24_4_ = (uint)((byte)(uVar6 >> 6) & 1) * piVar3[6];
  auVar14._28_4_ = (uint)(byte)(uVar6 >> 7) * piVar3[7];
  auVar13 = vfmadd231ps_avx512vl(auVar17,auVar13,auVar14);
  auVar15._0_4_ = (uint)(bVar4 & 1) * auVar13._0_4_ | (uint)!(bool)(bVar4 & 1) * auVar17._0_4_;
  bVar5 = (bool)((byte)(uVar6 >> 1) & 1);
  auVar15._4_4_ = (uint)bVar5 * auVar13._4_4_ | (uint)!bVar5 * auVar17._4_4_;
  bVar5 = (bool)((byte)(uVar6 >> 2) & 1);
  auVar15._8_4_ = (uint)bVar5 * auVar13._8_4_ | (uint)!bVar5 * auVar17._8_4_;
  bVar5 = (bool)((byte)(uVar6 >> 3) & 1);
  auVar15._12_4_ = (uint)bVar5 * auVar13._12_4_ | (uint)!bVar5 * auVar17._12_4_;
  bVar5 = (bool)((byte)(uVar6 >> 4) & 1);
  auVar15._16_4_ = (uint)bVar5 * auVar13._16_4_ | (uint)!bVar5 * auVar17._16_4_;
  bVar5 = (bool)((byte)(uVar6 >> 5) & 1);
  auVar15._20_4_ = (uint)bVar5 * auVar13._20_4_ | (uint)!bVar5 * auVar17._20_4_;
  bVar5 = (bool)((byte)(uVar6 >> 6) & 1);
  auVar15._24_4_ = (uint)bVar5 * auVar13._24_4_ | (uint)!bVar5 * auVar17._24_4_;
  bVar5 = SUB81(uVar6 >> 7,0);
  auVar15._28_4_ = (uint)bVar5 * auVar13._28_4_ | (uint)!bVar5 * auVar17._28_4_;
  auVar17 = auVar15;
LAB_140a17cbd:
  auVar16._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * auVar17._4_4_;
  auVar16._0_4_ = (uint)((byte)uVar11 & 1) * auVar17._0_4_;
  auVar16._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * auVar17._8_4_;
  auVar16._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * auVar17._12_4_;
  auVar16._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar17._16_4_;
  auVar16._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar17._20_4_;
  auVar16._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar17._24_4_;
  auVar16._28_4_ = (uint)((byte)(uVar11 >> 7) & 1) * auVar17._28_4_;
  auVar17 = vhaddps_avx(auVar16,auVar16);
  auVar17 = vhaddps_avx(auVar17,auVar17);
  *(float *)(param_3 + (longlong)param_4 * 4) =
       auVar17._0_4_ + auVar17._16_4_ + *(float *)(param_3 + (longlong)param_4 * 4);
  return;
}

// ArrayAPFLongDelayProcess___un_3C_Cunf_3E_un_3C_Cunf_3E_Cuniun_3C_unf_3E_un_3C_unf_3E_Cunf_avx512skx @ 140a17f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAPFLongDelayProcess___un_3C_Cunf_3E_un_3C_Cunf_3E_Cuniun_3C_unf_3E_un_3C_unf_3E_Cunf_avx512skx
               (longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
               float param_6)

{
  float fVar1;
  float *pfVar8;
  int *piVar9;
  uint *puVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar30 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar30 = param_3;
  }
  if ((int)(uVar30 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar35._4_4_ = param_6;
    auVar35._0_4_ = param_6;
    auVar35._8_4_ = param_6;
    auVar35._12_4_ = param_6;
    auVar32._4_4_ = __real_80000000;
    auVar32._0_4_ = __real_80000000;
    auVar32._8_4_ = __real_80000000;
    auVar32._12_4_ = __real_80000000;
    auVar32 = vxorps_avx512vl(auVar35,auVar32);
    fVar36 = auVar32._0_4_;
    uVar27 = 0;
    uVar31 = 0;
    do {
      uVar28 = (ulonglong)uVar27;
      pfVar8 = (float *)(param_2 + uVar28);
      fVar1 = *pfVar8;
      fVar2 = pfVar8[1];
      fVar3 = pfVar8[2];
      fVar4 = pfVar8[3];
      fVar5 = pfVar8[4];
      fVar6 = pfVar8[5];
      fVar7 = pfVar8[6];
      fVar19 = pfVar8[7];
      pfVar8 = (float *)(param_1 + uVar28);
      fVar37 = param_6 * fVar1 + *pfVar8;
      fVar38 = param_6 * fVar2 + pfVar8[1];
      fVar39 = param_6 * fVar3 + pfVar8[2];
      fVar40 = param_6 * fVar4 + pfVar8[3];
      fVar41 = param_6 * fVar5 + pfVar8[4];
      fVar42 = param_6 * fVar6 + pfVar8[5];
      fVar43 = param_6 * fVar7 + pfVar8[6];
      fVar44 = param_6 * fVar19 + pfVar8[7];
      pfVar8 = (float *)(param_5 + uVar28);
      *pfVar8 = fVar37;
      pfVar8[1] = fVar38;
      pfVar8[2] = fVar39;
      pfVar8[3] = fVar40;
      pfVar8[4] = fVar41;
      pfVar8[5] = fVar42;
      pfVar8[6] = fVar43;
      pfVar8[7] = fVar44;
      pfVar8 = (float *)(param_4 + uVar28);
      *pfVar8 = fVar36 * fVar37 + fVar1;
      pfVar8[1] = fVar36 * fVar38 + fVar2;
      pfVar8[2] = fVar36 * fVar39 + fVar3;
      pfVar8[3] = fVar36 * fVar40 + fVar4;
      pfVar8[4] = fVar36 * fVar41 + fVar5;
      pfVar8[5] = fVar36 * fVar42 + fVar6;
      pfVar8[6] = fVar36 * fVar43 + fVar7;
      pfVar8[7] = fVar36 * fVar44 + fVar19;
      uVar31 = uVar31 + 8;
      uVar27 = uVar27 + 0x20;
    } while (uVar31 < (uVar30 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar31) {
      return;
    }
  }
  auVar33 = vpbroadcastd_avx512vl();
  auVar33 = vpor_avx2(auVar33,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar34 = vpbroadcastd_avx512vl();
  uVar28 = vpcmpgtd_avx512vl(auVar34,auVar33);
  lVar29 = (longlong)((int)uVar31 << 2);
  piVar9 = (int *)(param_2 + lVar29);
  bVar11 = (byte)uVar28;
  fVar36 = (float)((uint)(bVar11 & 1) * *piVar9);
  fVar1 = (float)((uint)((byte)(uVar28 >> 1) & 1) * piVar9[1]);
  fVar2 = (float)((uint)((byte)(uVar28 >> 2) & 1) * piVar9[2]);
  fVar3 = (float)((uint)((byte)(uVar28 >> 3) & 1) * piVar9[3]);
  fVar4 = (float)((uint)((byte)(uVar28 >> 4) & 1) * piVar9[4]);
  fVar5 = (float)((uint)((byte)(uVar28 >> 5) & 1) * piVar9[5]);
  fVar6 = (float)((uint)((byte)(uVar28 >> 6) & 1) * piVar9[6]);
  fVar7 = (float)((uint)(byte)(uVar28 >> 7) * piVar9[7]);
  piVar9 = (int *)(param_1 + lVar29);
  iVar20 = piVar9[1];
  iVar21 = piVar9[2];
  iVar22 = piVar9[3];
  iVar23 = piVar9[4];
  iVar24 = piVar9[5];
  iVar25 = piVar9[6];
  iVar26 = piVar9[7];
  puVar10 = (uint *)(param_5 + lVar29);
  bVar12 = (bool)((byte)(uVar28 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar28 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar28 >> 3) & 1);
  bVar15 = (bool)((byte)(uVar28 >> 4) & 1);
  bVar16 = (bool)((byte)(uVar28 >> 5) & 1);
  bVar17 = (bool)((byte)(uVar28 >> 6) & 1);
  bVar18 = SUB81(uVar28 >> 7,0);
  *puVar10 = (uint)(bVar11 & 1) * (int)(param_6 * fVar36 + (float)((uint)(bVar11 & 1) * *piVar9)) |
             (uint)!(bool)(bVar11 & 1) * *puVar10;
  puVar10[1] = (uint)bVar12 *
               (int)(param_6 * fVar1 + (float)((uint)((byte)(uVar28 >> 1) & 1) * iVar20)) |
               (uint)!bVar12 * puVar10[1];
  puVar10[2] = (uint)bVar13 *
               (int)(param_6 * fVar2 + (float)((uint)((byte)(uVar28 >> 2) & 1) * iVar21)) |
               (uint)!bVar13 * puVar10[2];
  puVar10[3] = (uint)bVar14 *
               (int)(param_6 * fVar3 + (float)((uint)((byte)(uVar28 >> 3) & 1) * iVar22)) |
               (uint)!bVar14 * puVar10[3];
  puVar10[4] = (uint)bVar15 *
               (int)(param_6 * fVar4 + (float)((uint)((byte)(uVar28 >> 4) & 1) * iVar23)) |
               (uint)!bVar15 * puVar10[4];
  puVar10[5] = (uint)bVar16 *
               (int)(param_6 * fVar5 + (float)((uint)((byte)(uVar28 >> 5) & 1) * iVar24)) |
               (uint)!bVar16 * puVar10[5];
  puVar10[6] = (uint)bVar17 *
               (int)(param_6 * fVar6 + (float)((uint)((byte)(uVar28 >> 6) & 1) * iVar25)) |
               (uint)!bVar17 * puVar10[6];
  puVar10[7] = (uint)bVar18 * (int)(param_6 * fVar7 + (float)((uint)(byte)(uVar28 >> 7) * iVar26)) |
               (uint)!bVar18 * puVar10[7];
  piVar9 = (int *)(param_5 + lVar29);
  iVar20 = piVar9[1];
  iVar21 = piVar9[2];
  iVar22 = piVar9[3];
  iVar23 = piVar9[4];
  iVar24 = piVar9[5];
  iVar25 = piVar9[6];
  iVar26 = piVar9[7];
  puVar10 = (uint *)(param_4 + lVar29);
  bVar12 = (bool)((byte)(uVar28 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar28 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar28 >> 3) & 1);
  bVar15 = (bool)((byte)(uVar28 >> 4) & 1);
  bVar16 = (bool)((byte)(uVar28 >> 5) & 1);
  bVar17 = (bool)((byte)(uVar28 >> 6) & 1);
  bVar18 = SUB81(uVar28 >> 7,0);
  *puVar10 = (uint)(bVar11 & 1) * (int)(-(param_6 * (float)((uint)(bVar11 & 1) * *piVar9)) + fVar36)
             | (uint)!(bool)(bVar11 & 1) * *puVar10;
  puVar10[1] = (uint)bVar12 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 1) & 1) * iVar20)) + fVar1) |
               (uint)!bVar12 * puVar10[1];
  puVar10[2] = (uint)bVar13 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 2) & 1) * iVar21)) + fVar2) |
               (uint)!bVar13 * puVar10[2];
  puVar10[3] = (uint)bVar14 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 3) & 1) * iVar22)) + fVar3) |
               (uint)!bVar14 * puVar10[3];
  puVar10[4] = (uint)bVar15 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 4) & 1) * iVar23)) + fVar4) |
               (uint)!bVar15 * puVar10[4];
  puVar10[5] = (uint)bVar16 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 5) & 1) * iVar24)) + fVar5) |
               (uint)!bVar16 * puVar10[5];
  puVar10[6] = (uint)bVar17 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 6) & 1) * iVar25)) + fVar6) |
               (uint)!bVar17 * puVar10[6];
  puVar10[7] = (uint)bVar18 *
               (int)(-(param_6 * (float)((uint)(byte)(uVar28 >> 7) * iVar26)) + fVar7) |
               (uint)!bVar18 * puVar10[7];
  return;
}

// ArrayLerpFractionalDelay___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cuni_3E_Cuniun_3C_unf_3E_Cunf_avx512skx @ 140a17ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpFractionalDelay___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cuni_3E_Cuniun_3C_unf_3E_Cunf_avx512skx
               (undefined8 param_1,longlong param_2,undefined4 *param_3,longlong param_4,
               uint param_5,longlong param_6,undefined4 param_7)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  longlong unaff_RBX;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [64];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM20 [64];
  
  uVar16 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar16 = param_5;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar17 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar22._4_4_ = param_7;
    auVar22._0_4_ = param_7;
    auVar22._8_4_ = param_7;
    auVar22._12_4_ = param_7;
    auVar22._16_4_ = param_7;
    auVar22._20_4_ = param_7;
    auVar22._24_4_ = param_7;
    auVar22._28_4_ = param_7;
    uVar14 = 0;
    auVar23._4_4_ = __real_3f800000;
    auVar23._0_4_ = __real_3f800000;
    auVar23._8_4_ = __real_3f800000;
    auVar23._12_4_ = __real_3f800000;
    auVar23._16_4_ = __real_3f800000;
    auVar23._20_4_ = __real_3f800000;
    auVar23._24_4_ = __real_3f800000;
    auVar23._28_4_ = __real_3f800000;
    auVar24._4_4_ = __real_00000004;
    auVar24._0_4_ = __real_00000004;
    auVar24._8_4_ = __real_00000004;
    auVar24._12_4_ = __real_00000004;
    auVar24._16_4_ = __real_00000004;
    auVar24._20_4_ = __real_00000004;
    auVar24._24_4_ = __real_00000004;
    auVar24._28_4_ = __real_00000004;
    uVar17 = 0;
    do {
      uVar15 = (ulonglong)uVar14;
      auVar19 = vmaxps_avx(*(undefined1 (*) [32])(param_2 + uVar15),ZEXT1232(ZEXT812(0)));
      auVar19 = vminps_avx(auVar19,auVar22);
      auVar18 = vrndscaleps_avx512vl(auVar19,9);
      auVar19 = vsubps_avx512vl(auVar19,auVar18);
      auVar18 = vcvttps2dq_avx512vl(auVar18);
      auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_4 + uVar15));
      auVar21 = vsubps_avx512vl(auVar23,auVar19);
      auVar18 = vpsubd_avx512vl(auVar20,auVar18);
      auVar18 = vpslld_avx512vl(auVar18,2);
      vpaddd_avx512vl(auVar18,auVar24);
      vxorps_avx512vl(in_ZMM20._0_16_,in_ZMM20._0_16_);
      auVar18 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_RBX));
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + param_6));
      in_ZMM20 = ZEXT3264(auVar20);
      auVar19 = vmulps_avx512vl(auVar19,auVar20);
      auVar19 = vfmadd231ps_avx512vl(auVar19,auVar21,auVar18);
      *(undefined1 (*) [32])(param_6 + uVar15) = auVar19;
      uVar17 = uVar17 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar17 < (uVar16 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar17) {
      return;
    }
  }
  auVar22 = vpbroadcastd_avx512vl();
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar23 = vpbroadcastd_avx512vl();
  uVar15 = vpcmpgtd_avx512vl(auVar23,auVar22);
  lVar13 = (longlong)((int)uVar17 << 2);
  piVar1 = (int *)(param_2 + lVar13);
  bVar3 = (byte)uVar15;
  auVar18._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
  auVar18._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar18._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
  auVar18._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
  auVar18._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
  auVar18._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
  auVar18._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
  auVar18._28_4_ = (uint)(byte)(uVar15 >> 7) * piVar1[7];
  auVar25 = ZEXT1664((undefined1  [16])0x0);
  auVar22 = vmaxps_avx(auVar18,auVar25._0_32_);
  auVar21._4_4_ = param_7;
  auVar21._0_4_ = param_7;
  auVar21._8_4_ = param_7;
  auVar21._12_4_ = param_7;
  auVar21._16_4_ = param_7;
  auVar21._20_4_ = param_7;
  auVar21._24_4_ = param_7;
  auVar21._28_4_ = param_7;
  auVar22 = vminps_avx(auVar22,auVar21);
  auVar23 = vroundps_avx(auVar22,9);
  auVar26._0_4_ = (int)auVar23._0_4_;
  auVar26._4_4_ = (int)auVar23._4_4_;
  auVar26._8_4_ = (int)auVar23._8_4_;
  auVar26._12_4_ = (int)auVar23._12_4_;
  auVar26._16_4_ = (int)auVar23._16_4_;
  auVar26._20_4_ = (int)auVar23._20_4_;
  auVar26._24_4_ = (int)auVar23._24_4_;
  auVar26._28_4_ = (int)auVar23._28_4_;
  auVar24 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_4 + lVar13));
  auVar20._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * auVar24._4_4_;
  auVar20._0_4_ = (uint)(bVar3 & 1) * auVar24._0_4_;
  auVar20._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * auVar24._8_4_;
  auVar20._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * auVar24._12_4_;
  auVar20._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar24._16_4_;
  auVar20._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar24._20_4_;
  auVar20._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar24._24_4_;
  auVar20._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar24._28_4_;
  auVar24 = vpsubd_avx2(auVar20,auVar26);
  auVar24 = vpslld_avx2(auVar24,2);
  auVar19._4_4_ = __real_00000004;
  auVar19._0_4_ = __real_00000004;
  auVar19._8_4_ = __real_00000004;
  auVar19._12_4_ = __real_00000004;
  auVar19._16_4_ = __real_00000004;
  auVar19._20_4_ = __real_00000004;
  auVar19._24_4_ = __real_00000004;
  auVar19._28_4_ = __real_00000004;
  vpaddd_avx512vl(auVar24,auVar19);
  auVar24 = vgatherdps_avx512vl(*param_3);
  auVar27._4_4_ = __real_3f800000;
  auVar27._0_4_ = __real_3f800000;
  auVar27._8_4_ = __real_3f800000;
  auVar27._12_4_ = __real_3f800000;
  auVar27._16_4_ = __real_3f800000;
  auVar27._20_4_ = __real_3f800000;
  auVar27._24_4_ = __real_3f800000;
  auVar27._28_4_ = __real_3f800000;
  auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_RBX));
  bVar5 = (bool)((byte)(uVar15 >> 2) & 1);
  bVar7 = (bool)((byte)(uVar15 >> 3) & 1);
  auVar22 = vsubps_avx(auVar22,auVar23);
  auVar23 = vsubps_avx(auVar27,auVar22);
  puVar2 = (uint *)(param_6 + lVar13);
  bVar4 = (bool)((byte)(uVar15 >> 1) & 1);
  bVar6 = (bool)((byte)(uVar15 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar15 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar15 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar15 >> 6) & 1);
  bVar12 = SUB81(uVar15 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) *
            (int)(auVar23._0_4_ * (float)((uint)(bVar3 & 1) * auVar24._0_4_) +
                 auVar22._0_4_ * (float)((uint)(bVar3 & 1) * auVar19._0_4_)) |
            (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 *
              (int)(auVar23._4_4_ * (float)((uint)((byte)(uVar15 >> 1) & 1) * auVar24._4_4_) +
                   auVar22._4_4_ * (float)((uint)((byte)(uVar15 >> 1) & 1) * auVar19._4_4_)) |
              (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar6 *
              (int)(auVar23._8_4_ * (float)((uint)((byte)(uVar15 >> 2) & 1) * auVar24._8_4_) +
                   auVar22._8_4_ *
                   (float)((uint)bVar5 * auVar19._8_4_ | (uint)!bVar5 * auVar25._8_4_)) |
              (uint)!bVar6 * puVar2[2];
  puVar2[3] = (uint)bVar8 *
              (int)(auVar23._12_4_ * (float)((uint)((byte)(uVar15 >> 3) & 1) * auVar24._12_4_) +
                   auVar22._12_4_ *
                   (float)((uint)bVar7 * auVar19._12_4_ | (uint)!bVar7 * auVar25._12_4_)) |
              (uint)!bVar8 * puVar2[3];
  puVar2[4] = (uint)bVar9 *
              (int)(auVar23._16_4_ * (float)((uint)((byte)(uVar15 >> 4) & 1) * auVar24._16_4_) +
                   auVar22._16_4_ * (float)((uint)((byte)(uVar15 >> 4) & 1) * auVar19._16_4_)) |
              (uint)!bVar9 * puVar2[4];
  puVar2[5] = (uint)bVar10 *
              (int)(auVar23._20_4_ * (float)((uint)((byte)(uVar15 >> 5) & 1) * auVar24._20_4_) +
                   auVar22._20_4_ * (float)((uint)((byte)(uVar15 >> 5) & 1) * auVar19._20_4_)) |
              (uint)!bVar10 * puVar2[5];
  puVar2[6] = (uint)bVar11 *
              (int)(auVar23._24_4_ * (float)((uint)((byte)(uVar15 >> 6) & 1) * auVar24._24_4_) +
                   auVar22._24_4_ * (float)((uint)((byte)(uVar15 >> 6) & 1) * auVar19._24_4_)) |
              (uint)!bVar11 * puVar2[6];
  puVar2[7] = (uint)bVar12 *
              (int)(auVar23._28_4_ * (float)((uint)(byte)(uVar15 >> 7) * auVar24._28_4_) +
                   auVar22._28_4_ * (float)((uint)(byte)(uVar15 >> 7) * auVar19._28_4_)) |
              (uint)!bVar12 * puVar2[7];
  return;
}

// ArraySum_avx512skx @ 140a18230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum_avx512skx(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar10 = ZEXT832(0);
    if ((int)param_3 < 1) goto LAB_140a1829b;
  }
  else {
    auVar11 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      auVar10._0_4_ = auVar11._0_4_ + *pfVar1;
      auVar10._4_4_ = auVar11._4_4_ + pfVar1[1];
      auVar10._8_4_ = auVar11._8_4_ + pfVar1[2];
      auVar10._12_4_ = auVar11._12_4_ + pfVar1[3];
      auVar10._16_4_ = auVar11._16_4_ + pfVar1[4];
      auVar10._20_4_ = auVar11._20_4_ + pfVar1[5];
      auVar10._24_4_ = auVar11._24_4_ + pfVar1[6];
      auVar10._28_4_ = auVar11._28_4_ + pfVar1[7];
      auVar11 = ZEXT3264(auVar10);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar6) goto LAB_140a1829b;
  }
  auVar8 = vpbroadcastd_avx512vl();
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar9,auVar8);
  piVar2 = (int *)(param_1 + ((int)uVar6 << 2));
  auVar8._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * piVar2[1];
  auVar8._0_4_ = (uint)((byte)uVar4 & 1) * *piVar2;
  auVar8._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * piVar2[2];
  auVar8._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * piVar2[3];
  auVar8._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * piVar2[4];
  auVar8._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * piVar2[5];
  auVar8._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * piVar2[6];
  auVar8._28_4_ = (uint)(byte)(uVar4 >> 7) * piVar2[7];
  auVar8 = vaddps_avx512vl(auVar10,auVar8);
  bVar3 = (bool)((byte)uVar4 & 1);
  auVar9._0_4_ = (uint)bVar3 * auVar8._0_4_ | (uint)!bVar3 * auVar10._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar9._4_4_ = (uint)bVar3 * auVar8._4_4_ | (uint)!bVar3 * auVar10._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar9._8_4_ = (uint)bVar3 * auVar8._8_4_ | (uint)!bVar3 * auVar10._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar9._12_4_ = (uint)bVar3 * auVar8._12_4_ | (uint)!bVar3 * auVar10._12_4_;
  bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
  auVar9._16_4_ = (uint)bVar3 * auVar8._16_4_ | (uint)!bVar3 * auVar10._16_4_;
  bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
  auVar9._20_4_ = (uint)bVar3 * auVar8._20_4_ | (uint)!bVar3 * auVar10._20_4_;
  bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
  auVar9._24_4_ = (uint)bVar3 * auVar8._24_4_ | (uint)!bVar3 * auVar10._24_4_;
  bVar3 = SUB81(uVar4 >> 7,0);
  auVar9._28_4_ = (uint)bVar3 * auVar8._28_4_ | (uint)!bVar3 * auVar10._28_4_;
  auVar10 = auVar9;
LAB_140a1829b:
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  *param_2 = auVar10._0_4_ + auVar10._16_4_;
  return;
}

// ArraySum2_avx512skx @ 140a182d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum2_avx512skx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar43 = param_4;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar44 = 0;
    do {
      uVar46 = (ulonglong)uVar47;
      pfVar1 = (float *)(param_1 + uVar46);
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      fVar18 = pfVar1[4];
      fVar19 = pfVar1[5];
      fVar20 = pfVar1[6];
      fVar21 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar46);
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      fVar25 = pfVar2[4];
      fVar26 = pfVar2[5];
      fVar27 = pfVar2[6];
      fVar28 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar46);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar15 + fVar22;
      pfVar3[2] = fVar16 + fVar23;
      pfVar3[3] = fVar17 + fVar24;
      pfVar3[4] = fVar18 + fVar25;
      pfVar3[5] = fVar19 + fVar26;
      pfVar3[6] = fVar20 + fVar27;
      pfVar3[7] = fVar21 + fVar28;
      uVar44 = uVar44 + 8;
      uVar47 = uVar47 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar46 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar7 = (byte)uVar46;
  piVar5 = (int *)(param_2 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_3 + lVar45);
  bVar8 = (bool)((byte)(uVar46 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar46 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar46 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar46 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar46 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar46 >> 6) & 1);
  bVar14 = SUB81(uVar46 >> 7,0);
  *puVar6 = (uint)(bVar7 & 1) *
            (int)((float)((uint)(bVar7 & 1) * *piVar4) + (float)((uint)(bVar7 & 1) * *piVar5)) |
            (uint)!(bool)(bVar7 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 *
              (int)((float)((uint)((byte)(uVar46 >> 1) & 1) * iVar29) +
                   (float)((uint)((byte)(uVar46 >> 1) & 1) * iVar36)) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 *
              (int)((float)((uint)((byte)(uVar46 >> 2) & 1) * iVar30) +
                   (float)((uint)((byte)(uVar46 >> 2) & 1) * iVar37)) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 *
              (int)((float)((uint)((byte)(uVar46 >> 3) & 1) * iVar31) +
                   (float)((uint)((byte)(uVar46 >> 3) & 1) * iVar38)) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 *
              (int)((float)((uint)((byte)(uVar46 >> 4) & 1) * iVar32) +
                   (float)((uint)((byte)(uVar46 >> 4) & 1) * iVar39)) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 *
              (int)((float)((uint)((byte)(uVar46 >> 5) & 1) * iVar33) +
                   (float)((uint)((byte)(uVar46 >> 5) & 1) * iVar40)) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 *
              (int)((float)((uint)((byte)(uVar46 >> 6) & 1) * iVar34) +
                   (float)((uint)((byte)(uVar46 >> 6) & 1) * iVar41)) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 *
              (int)((float)((uint)(byte)(uVar46 >> 7) * iVar35) +
                   (float)((uint)(byte)(uVar46 >> 7) * iVar42)) | (uint)!bVar14 * puVar6[7];
  return;
}

// ArrayCumulativeSum_avx512skx @ 140a18360

void ArrayCumulativeSum_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if (0 < (int)param_3) {
    if (param_3 < 8) {
      fVar3 = 0.0;
      lVar1 = 0;
    }
    else {
      fVar3 = 0.0;
      lVar1 = 0;
      do {
        fVar3 = fVar3 + *(float *)(param_1 + lVar1 * 4);
        *(float *)(param_2 + lVar1 * 4) = fVar3;
        fVar3 = fVar3 + *(float *)(param_1 + 4 + lVar1 * 4);
        *(float *)(param_2 + 4 + lVar1 * 4) = fVar3;
        fVar3 = fVar3 + *(float *)(param_1 + 8 + lVar1 * 4);
        *(float *)(param_2 + 8 + lVar1 * 4) = fVar3;
        fVar3 = fVar3 + *(float *)(param_1 + 0xc + lVar1 * 4);
        *(float *)(param_2 + 0xc + lVar1 * 4) = fVar3;
        fVar3 = fVar3 + *(float *)(param_1 + 0x10 + lVar1 * 4);
        *(float *)(param_2 + 0x10 + lVar1 * 4) = fVar3;
        fVar3 = fVar3 + *(float *)(param_1 + 0x14 + lVar1 * 4);
        *(float *)(param_2 + 0x14 + lVar1 * 4) = fVar3;
        fVar3 = fVar3 + *(float *)(param_1 + 0x18 + lVar1 * 4);
        *(float *)(param_2 + 0x18 + lVar1 * 4) = fVar3;
        fVar3 = fVar3 + *(float *)(param_1 + 0x1c + lVar1 * 4);
        *(float *)(param_2 + 0x1c + lVar1 * 4) = fVar3;
        lVar1 = lVar1 + 8;
      } while ((param_3 & 0x7ffffff8) != (uint)lVar1);
    }
    if ((param_3 & 7) != 0) {
      lVar2 = 0;
      do {
        fVar3 = fVar3 + *(float *)(param_1 + lVar1 * 4 + lVar2 * 4);
        *(float *)(param_2 + lVar1 * 4 + lVar2 * 4) = fVar3;
        lVar2 = lVar2 + 1;
      } while ((param_3 & 7) != (uint)lVar2);
    }
  }
  return;
}

// ArrayMean_avx512skx @ 140a18430

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMean_avx512skx(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar10 = ZEXT832(0);
    if ((int)param_3 < 1) goto LAB_140a1849b;
  }
  else {
    auVar11 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      auVar10._0_4_ = auVar11._0_4_ + *pfVar1;
      auVar10._4_4_ = auVar11._4_4_ + pfVar1[1];
      auVar10._8_4_ = auVar11._8_4_ + pfVar1[2];
      auVar10._12_4_ = auVar11._12_4_ + pfVar1[3];
      auVar10._16_4_ = auVar11._16_4_ + pfVar1[4];
      auVar10._20_4_ = auVar11._20_4_ + pfVar1[5];
      auVar10._24_4_ = auVar11._24_4_ + pfVar1[6];
      auVar10._28_4_ = auVar11._28_4_ + pfVar1[7];
      auVar11 = ZEXT3264(auVar10);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar6) goto LAB_140a1849b;
  }
  auVar8 = vpbroadcastd_avx512vl();
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar9,auVar8);
  piVar2 = (int *)(param_1 + ((int)uVar6 << 2));
  auVar8._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * piVar2[1];
  auVar8._0_4_ = (uint)((byte)uVar4 & 1) * *piVar2;
  auVar8._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * piVar2[2];
  auVar8._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * piVar2[3];
  auVar8._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * piVar2[4];
  auVar8._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * piVar2[5];
  auVar8._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * piVar2[6];
  auVar8._28_4_ = (uint)(byte)(uVar4 >> 7) * piVar2[7];
  auVar8 = vaddps_avx512vl(auVar10,auVar8);
  bVar3 = (bool)((byte)uVar4 & 1);
  auVar9._0_4_ = (uint)bVar3 * auVar8._0_4_ | (uint)!bVar3 * auVar10._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar9._4_4_ = (uint)bVar3 * auVar8._4_4_ | (uint)!bVar3 * auVar10._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar9._8_4_ = (uint)bVar3 * auVar8._8_4_ | (uint)!bVar3 * auVar10._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar9._12_4_ = (uint)bVar3 * auVar8._12_4_ | (uint)!bVar3 * auVar10._12_4_;
  bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
  auVar9._16_4_ = (uint)bVar3 * auVar8._16_4_ | (uint)!bVar3 * auVar10._16_4_;
  bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
  auVar9._20_4_ = (uint)bVar3 * auVar8._20_4_ | (uint)!bVar3 * auVar10._20_4_;
  bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
  auVar9._24_4_ = (uint)bVar3 * auVar8._24_4_ | (uint)!bVar3 * auVar10._24_4_;
  bVar3 = SUB81(uVar4 >> 7,0);
  auVar9._28_4_ = (uint)bVar3 * auVar8._28_4_ | (uint)!bVar3 * auVar10._28_4_;
  auVar10 = auVar9;
LAB_140a1849b:
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  *param_2 = (auVar10._0_4_ + auVar10._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMeanSquared_avx512skx @ 140a184d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanSquared_avx512skx(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar10 = ZEXT832(0);
    if ((int)param_3 < 1) goto LAB_140a18540;
  }
  else {
    auVar11 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      auVar10._0_4_ = *pfVar1 * *pfVar1 + auVar11._0_4_;
      auVar10._4_4_ = pfVar1[1] * pfVar1[1] + auVar11._4_4_;
      auVar10._8_4_ = pfVar1[2] * pfVar1[2] + auVar11._8_4_;
      auVar10._12_4_ = pfVar1[3] * pfVar1[3] + auVar11._12_4_;
      auVar10._16_4_ = pfVar1[4] * pfVar1[4] + auVar11._16_4_;
      auVar10._20_4_ = pfVar1[5] * pfVar1[5] + auVar11._20_4_;
      auVar10._24_4_ = pfVar1[6] * pfVar1[6] + auVar11._24_4_;
      auVar10._28_4_ = pfVar1[7] * pfVar1[7] + auVar11._28_4_;
      auVar11 = ZEXT3264(auVar10);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar6) goto LAB_140a18540;
  }
  auVar8 = vpbroadcastd_avx512vl();
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar9,auVar8);
  piVar2 = (int *)(param_1 + ((int)uVar6 << 2));
  auVar8._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * piVar2[1];
  auVar8._0_4_ = (uint)((byte)uVar4 & 1) * *piVar2;
  auVar8._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * piVar2[2];
  auVar8._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * piVar2[3];
  auVar8._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * piVar2[4];
  auVar8._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * piVar2[5];
  auVar8._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * piVar2[6];
  auVar8._28_4_ = (uint)(byte)(uVar4 >> 7) * piVar2[7];
  auVar8 = vfmadd231ps_avx512vl(auVar10,auVar8,auVar8);
  bVar3 = (bool)((byte)uVar4 & 1);
  auVar9._0_4_ = (uint)bVar3 * auVar8._0_4_ | (uint)!bVar3 * auVar10._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar9._4_4_ = (uint)bVar3 * auVar8._4_4_ | (uint)!bVar3 * auVar10._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar9._8_4_ = (uint)bVar3 * auVar8._8_4_ | (uint)!bVar3 * auVar10._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar9._12_4_ = (uint)bVar3 * auVar8._12_4_ | (uint)!bVar3 * auVar10._12_4_;
  bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
  auVar9._16_4_ = (uint)bVar3 * auVar8._16_4_ | (uint)!bVar3 * auVar10._16_4_;
  bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
  auVar9._20_4_ = (uint)bVar3 * auVar8._20_4_ | (uint)!bVar3 * auVar10._20_4_;
  bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
  auVar9._24_4_ = (uint)bVar3 * auVar8._24_4_ | (uint)!bVar3 * auVar10._24_4_;
  bVar3 = SUB81(uVar4 >> 7,0);
  auVar9._28_4_ = (uint)bVar3 * auVar8._28_4_ | (uint)!bVar3 * auVar10._28_4_;
  auVar10 = auVar9;
LAB_140a18540:
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  *param_2 = (auVar10._0_4_ + auVar10._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMax_avx512skx @ 140a18570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMax_avx512skx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar11 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar12 = 0;
    do {
      uVar14 = (ulonglong)uVar15;
      auVar16 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + uVar14),
                           *(undefined1 (*) [32])(param_2 + uVar14));
      *(undefined1 (*) [32])(param_3 + uVar14) = auVar16;
      uVar12 = uVar12 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar12 < (uVar11 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar12) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar14 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar13 = (longlong)((int)uVar12 << 2);
  piVar1 = (int *)(param_1 + lVar13);
  bVar3 = (byte)uVar14;
  auVar16._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar16._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar16._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar16._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar16._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar16._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar16._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar16._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  piVar1 = (int *)(param_2 + lVar13);
  auVar17._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  auVar16 = vmaxps_avx(auVar16,auVar17);
  puVar2 = (uint *)(param_3 + lVar13);
  bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar14 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar14 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar14 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar14 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar14 >> 6) & 1);
  bVar10 = SUB81(uVar14 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayMaxAbsValue_avx512skx @ 140a18600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMaxAbsValue_avx512skx(longlong param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [64];
  undefined1 auVar14 [32];
  
  uVar7 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar7 = param_2;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar8 = 0;
    auVar14 = ZEXT832(0);
    if ((int)param_2 < 1) goto LAB_140a18688;
  }
  else {
    auVar13 = ZEXT864(0);
    uVar9 = 0;
    uVar8 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar9);
      auVar14._0_4_ = __real_7fffffff & *puVar1;
      auVar14._4_4_ = __real_7fffffff & puVar1[1];
      auVar14._8_4_ = __real_7fffffff & puVar1[2];
      auVar14._12_4_ = __real_7fffffff & puVar1[3];
      auVar14._16_4_ = __real_7fffffff & puVar1[4];
      auVar14._20_4_ = __real_7fffffff & puVar1[5];
      auVar14._24_4_ = __real_7fffffff & puVar1[6];
      auVar14._28_4_ = __real_7fffffff & puVar1[7];
      auVar14 = vmaxps_avx(auVar14,auVar13._0_32_);
      auVar13 = ZEXT3264(auVar14);
      uVar8 = uVar8 + 8;
      uVar9 = uVar9 + 0x20;
    } while (uVar8 < (uVar7 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar8) goto LAB_140a18688;
  }
  auVar10 = vpbroadcastd_avx512vl();
  auVar10 = vpor_avx2(auVar10,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar11 = vpbroadcastd_avx512vl();
  uVar6 = vpcmpgtd_avx512vl(auVar11,auVar10);
  piVar2 = (int *)(param_1 + ((int)uVar8 << 2));
  auVar11._4_4_ = (uint)((byte)(uVar6 >> 1) & 1) * piVar2[1];
  auVar11._0_4_ = (uint)((byte)uVar6 & 1) * *piVar2;
  auVar11._8_4_ = (uint)((byte)(uVar6 >> 2) & 1) * piVar2[2];
  auVar11._12_4_ = (uint)((byte)(uVar6 >> 3) & 1) * piVar2[3];
  auVar11._16_4_ = (uint)((byte)(uVar6 >> 4) & 1) * piVar2[4];
  auVar11._20_4_ = (uint)((byte)(uVar6 >> 5) & 1) * piVar2[5];
  auVar11._24_4_ = (uint)((byte)(uVar6 >> 6) & 1) * piVar2[6];
  auVar11._28_4_ = (uint)(byte)(uVar6 >> 7) * piVar2[7];
  auVar10._4_4_ = __real_7fffffff;
  auVar10._0_4_ = __real_7fffffff;
  auVar10._8_4_ = __real_7fffffff;
  auVar10._12_4_ = __real_7fffffff;
  auVar10._16_4_ = __real_7fffffff;
  auVar10._20_4_ = __real_7fffffff;
  auVar10._24_4_ = __real_7fffffff;
  auVar10._28_4_ = __real_7fffffff;
  auVar10 = vandps_avx512vl(auVar11,auVar10);
  auVar10 = vmaxps_avx512vl(auVar10,auVar14);
  bVar3 = (bool)((byte)uVar6 & 1);
  auVar12._0_4_ = (uint)bVar3 * auVar10._0_4_ | (uint)!bVar3 * auVar14._0_4_;
  bVar3 = (bool)((byte)(uVar6 >> 1) & 1);
  auVar12._4_4_ = (uint)bVar3 * auVar10._4_4_ | (uint)!bVar3 * auVar14._4_4_;
  bVar3 = (bool)((byte)(uVar6 >> 2) & 1);
  auVar12._8_4_ = (uint)bVar3 * auVar10._8_4_ | (uint)!bVar3 * auVar14._8_4_;
  bVar3 = (bool)((byte)(uVar6 >> 3) & 1);
  auVar12._12_4_ = (uint)bVar3 * auVar10._12_4_ | (uint)!bVar3 * auVar14._12_4_;
  bVar3 = (bool)((byte)(uVar6 >> 4) & 1);
  auVar12._16_4_ = (uint)bVar3 * auVar10._16_4_ | (uint)!bVar3 * auVar14._16_4_;
  bVar3 = (bool)((byte)(uVar6 >> 5) & 1);
  auVar12._20_4_ = (uint)bVar3 * auVar10._20_4_ | (uint)!bVar3 * auVar14._20_4_;
  bVar3 = (bool)((byte)(uVar6 >> 6) & 1);
  auVar12._24_4_ = (uint)bVar3 * auVar10._24_4_ | (uint)!bVar3 * auVar14._24_4_;
  bVar3 = SUB81(uVar6 >> 7,0);
  auVar12._28_4_ = (uint)bVar3 * auVar10._28_4_ | (uint)!bVar3 * auVar14._28_4_;
  auVar14 = auVar12;
LAB_140a18688:
  auVar4 = vmaxps_avx(auVar14._16_16_,auVar14._0_16_);
  auVar5 = vshufpd_avx(auVar4,auVar4,1);
  auVar4 = vmaxps_avx(auVar5,auVar4);
  auVar5 = vmovshdup_avx(auVar4);
  vmaxss_avx(auVar5,auVar4);
  return;
}

// ArrayGetMagnitude_avx512skx @ 140a186c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetMagnitude_avx512skx(longlong param_1,uint param_2)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar10 = ZEXT832(0);
    if ((int)param_2 < 1) goto LAB_140a1872f;
  }
  else {
    auVar11 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      auVar10._0_4_ = *pfVar1 * *pfVar1 + auVar11._0_4_;
      auVar10._4_4_ = pfVar1[1] * pfVar1[1] + auVar11._4_4_;
      auVar10._8_4_ = pfVar1[2] * pfVar1[2] + auVar11._8_4_;
      auVar10._12_4_ = pfVar1[3] * pfVar1[3] + auVar11._12_4_;
      auVar10._16_4_ = pfVar1[4] * pfVar1[4] + auVar11._16_4_;
      auVar10._20_4_ = pfVar1[5] * pfVar1[5] + auVar11._20_4_;
      auVar10._24_4_ = pfVar1[6] * pfVar1[6] + auVar11._24_4_;
      auVar10._28_4_ = pfVar1[7] * pfVar1[7] + auVar11._28_4_;
      auVar11 = ZEXT3264(auVar10);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar6) goto LAB_140a1872f;
  }
  auVar8 = vpbroadcastd_avx512vl();
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar9,auVar8);
  piVar2 = (int *)(param_1 + ((int)uVar6 << 2));
  auVar8._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * piVar2[1];
  auVar8._0_4_ = (uint)((byte)uVar4 & 1) * *piVar2;
  auVar8._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * piVar2[2];
  auVar8._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * piVar2[3];
  auVar8._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * piVar2[4];
  auVar8._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * piVar2[5];
  auVar8._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * piVar2[6];
  auVar8._28_4_ = (uint)(byte)(uVar4 >> 7) * piVar2[7];
  auVar8 = vfmadd231ps_avx512vl(auVar10,auVar8,auVar8);
  bVar3 = (bool)((byte)uVar4 & 1);
  auVar9._0_4_ = (uint)bVar3 * auVar8._0_4_ | (uint)!bVar3 * auVar10._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar9._4_4_ = (uint)bVar3 * auVar8._4_4_ | (uint)!bVar3 * auVar10._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar9._8_4_ = (uint)bVar3 * auVar8._8_4_ | (uint)!bVar3 * auVar10._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar9._12_4_ = (uint)bVar3 * auVar8._12_4_ | (uint)!bVar3 * auVar10._12_4_;
  bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
  auVar9._16_4_ = (uint)bVar3 * auVar8._16_4_ | (uint)!bVar3 * auVar10._16_4_;
  bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
  auVar9._20_4_ = (uint)bVar3 * auVar8._20_4_ | (uint)!bVar3 * auVar10._20_4_;
  bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
  auVar9._24_4_ = (uint)bVar3 * auVar8._24_4_ | (uint)!bVar3 * auVar10._24_4_;
  bVar3 = SUB81(uVar4 >> 7,0);
  auVar9._28_4_ = (uint)bVar3 * auVar8._28_4_ | (uint)!bVar3 * auVar10._28_4_;
  auVar10 = auVar9;
LAB_140a1872f:
  auVar10 = vhaddps_avx(auVar10,auVar10);
  vhaddps_avx(auVar10,auVar10);
  return;
}

// ArrayGetAverageValue_avx512skx @ 140a18760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetAverageValue_avx512skx(longlong param_1,uint param_2)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar10 = ZEXT832(0);
    if ((int)param_2 < 1) goto LAB_140a187ca;
  }
  else {
    auVar11 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      auVar10._0_4_ = auVar11._0_4_ + *pfVar1;
      auVar10._4_4_ = auVar11._4_4_ + pfVar1[1];
      auVar10._8_4_ = auVar11._8_4_ + pfVar1[2];
      auVar10._12_4_ = auVar11._12_4_ + pfVar1[3];
      auVar10._16_4_ = auVar11._16_4_ + pfVar1[4];
      auVar10._20_4_ = auVar11._20_4_ + pfVar1[5];
      auVar10._24_4_ = auVar11._24_4_ + pfVar1[6];
      auVar10._28_4_ = auVar11._28_4_ + pfVar1[7];
      auVar11 = ZEXT3264(auVar10);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar6) goto LAB_140a187ca;
  }
  auVar8 = vpbroadcastd_avx512vl();
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar9,auVar8);
  piVar2 = (int *)(param_1 + ((int)uVar6 << 2));
  auVar8._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * piVar2[1];
  auVar8._0_4_ = (uint)((byte)uVar4 & 1) * *piVar2;
  auVar8._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * piVar2[2];
  auVar8._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * piVar2[3];
  auVar8._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * piVar2[4];
  auVar8._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * piVar2[5];
  auVar8._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * piVar2[6];
  auVar8._28_4_ = (uint)(byte)(uVar4 >> 7) * piVar2[7];
  auVar8 = vaddps_avx512vl(auVar10,auVar8);
  bVar3 = (bool)((byte)uVar4 & 1);
  auVar9._0_4_ = (uint)bVar3 * auVar8._0_4_ | (uint)!bVar3 * auVar10._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar9._4_4_ = (uint)bVar3 * auVar8._4_4_ | (uint)!bVar3 * auVar10._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar9._8_4_ = (uint)bVar3 * auVar8._8_4_ | (uint)!bVar3 * auVar10._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar9._12_4_ = (uint)bVar3 * auVar8._12_4_ | (uint)!bVar3 * auVar10._12_4_;
  bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
  auVar9._16_4_ = (uint)bVar3 * auVar8._16_4_ | (uint)!bVar3 * auVar10._16_4_;
  bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
  auVar9._20_4_ = (uint)bVar3 * auVar8._20_4_ | (uint)!bVar3 * auVar10._20_4_;
  bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
  auVar9._24_4_ = (uint)bVar3 * auVar8._24_4_ | (uint)!bVar3 * auVar10._24_4_;
  bVar3 = SUB81(uVar4 >> 7,0);
  auVar9._28_4_ = (uint)bVar3 * auVar8._28_4_ | (uint)!bVar3 * auVar10._28_4_;
  auVar10 = auVar9;
LAB_140a187ca:
  auVar10 = vhaddps_avx(auVar10,auVar10);
  vhaddps_avx(auVar10,auVar10);
  return;
}

// ArrayGetAverageAbsValue_avx512skx @ 140a18800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetAverageAbsValue_avx512skx(longlong param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [64];
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar11 = ZEXT832(0);
    if ((int)param_2 < 1) goto LAB_140a18888;
  }
  else {
    auVar12 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar7);
      auVar11._0_4_ = auVar12._0_4_ + (float)(__real_7fffffff & *puVar1);
      auVar11._4_4_ = auVar12._4_4_ + (float)(__real_7fffffff & puVar1[1]);
      auVar11._8_4_ = auVar12._8_4_ + (float)(__real_7fffffff & puVar1[2]);
      auVar11._12_4_ = auVar12._12_4_ + (float)(__real_7fffffff & puVar1[3]);
      auVar11._16_4_ = auVar12._16_4_ + (float)(__real_7fffffff & puVar1[4]);
      auVar11._20_4_ = auVar12._20_4_ + (float)(__real_7fffffff & puVar1[5]);
      auVar11._24_4_ = auVar12._24_4_ + (float)(__real_7fffffff & puVar1[6]);
      auVar11._28_4_ = auVar12._28_4_ + (float)(__real_7fffffff & puVar1[7]);
      auVar12 = ZEXT3264(auVar11);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar6) goto LAB_140a18888;
  }
  auVar8 = vpbroadcastd_avx512vl();
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar9,auVar8);
  piVar2 = (int *)(param_1 + ((int)uVar6 << 2));
  auVar9._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * piVar2[1];
  auVar9._0_4_ = (uint)((byte)uVar4 & 1) * *piVar2;
  auVar9._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * piVar2[2];
  auVar9._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * piVar2[3];
  auVar9._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * piVar2[4];
  auVar9._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * piVar2[5];
  auVar9._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * piVar2[6];
  auVar9._28_4_ = (uint)(byte)(uVar4 >> 7) * piVar2[7];
  auVar8._4_4_ = __real_7fffffff;
  auVar8._0_4_ = __real_7fffffff;
  auVar8._8_4_ = __real_7fffffff;
  auVar8._12_4_ = __real_7fffffff;
  auVar8._16_4_ = __real_7fffffff;
  auVar8._20_4_ = __real_7fffffff;
  auVar8._24_4_ = __real_7fffffff;
  auVar8._28_4_ = __real_7fffffff;
  auVar8 = vandps_avx512vl(auVar9,auVar8);
  auVar8 = vaddps_avx512vl(auVar11,auVar8);
  bVar3 = (bool)((byte)uVar4 & 1);
  auVar10._0_4_ = (uint)bVar3 * auVar8._0_4_ | (uint)!bVar3 * auVar11._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar10._4_4_ = (uint)bVar3 * auVar8._4_4_ | (uint)!bVar3 * auVar11._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar10._8_4_ = (uint)bVar3 * auVar8._8_4_ | (uint)!bVar3 * auVar11._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar10._12_4_ = (uint)bVar3 * auVar8._12_4_ | (uint)!bVar3 * auVar11._12_4_;
  bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
  auVar10._16_4_ = (uint)bVar3 * auVar8._16_4_ | (uint)!bVar3 * auVar11._16_4_;
  bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
  auVar10._20_4_ = (uint)bVar3 * auVar8._20_4_ | (uint)!bVar3 * auVar11._20_4_;
  bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
  auVar10._24_4_ = (uint)bVar3 * auVar8._24_4_ | (uint)!bVar3 * auVar11._24_4_;
  bVar3 = SUB81(uVar4 >> 7,0);
  auVar10._28_4_ = (uint)bVar3 * auVar8._28_4_ | (uint)!bVar3 * auVar11._28_4_;
  auVar11 = auVar10;
LAB_140a18888:
  auVar11 = vhaddps_avx(auVar11,auVar11);
  vhaddps_avx(auVar11,auVar11);
  return;
}

// ArrayMeanFilter_avx512skx @ 140a188c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanFilter_avx512skx
               (longlong param_1,int param_2,uint param_3,longlong param_4,float param_5,int param_6
               )

{
  float *pfVar1;
  int *piVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  ulonglong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  uint uVar41;
  int iVar42;
  int iVar43;
  ulonglong uVar44;
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 in_ZMM16 [64];
  
  iVar27 = _UNK_150b50afc;
  iVar26 = _UNK_150b50af8;
  iVar25 = _UNK_150b50af4;
  iVar24 = _UNK_150b50af0;
  iVar23 = _UNK_150b50aec;
  iVar22 = _UNK_150b50ae8;
  iVar43 = _UNK_150b50ae4;
  iVar29 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  uVar33 = param_3 + 1;
  uVar34 = (uVar33 - param_2) + param_6;
  uVar37 = uVar33;
  if ((int)uVar33 < (int)uVar34) {
    uVar37 = uVar34;
  }
  uVar41 = ~param_3;
  iVar40 = param_2 - param_3;
  if (iVar40 < param_6) {
    iVar35 = iVar40 + -1;
    uVar38 = param_3 + 8;
    if (-1 < (int)uVar33) {
      uVar38 = uVar33;
    }
    iVar28 = uVar33 - (uVar38 & 0xfffffff8);
    iVar42 = 0;
    if (iVar28 < (int)uVar33) {
      uVar38 = param_3 - iVar28;
      if (uVar38 < 8) {
        iVar42 = 0;
      }
      else {
        uVar39 = (uVar38 >> 3) + 1 & 0xfffffffe;
        iVar28 = param_2 * 4 + param_3 * -4;
        uVar36 = 0x20;
        uVar32 = 0;
        auVar45._4_4_ = __real_3f800000;
        auVar45._0_4_ = __real_3f800000;
        auVar45._8_4_ = __real_3f800000;
        auVar45._12_4_ = __real_3f800000;
        auVar45._16_4_ = __real_3f800000;
        auVar45._20_4_ = __real_3f800000;
        auVar45._24_4_ = __real_3f800000;
        auVar45._28_4_ = __real_3f800000;
        iVar42 = 0;
        do {
          iVar12 = iVar42 + iVar40;
          auVar13._0_4_ = iVar12 + iVar29;
          auVar13._4_4_ = iVar12 + iVar43;
          auVar13._8_4_ = iVar12 + iVar22;
          auVar13._12_4_ = iVar12 + iVar23;
          auVar13._16_4_ = iVar12 + iVar24;
          auVar13._20_4_ = iVar12 + iVar25;
          auVar13._24_4_ = iVar12 + iVar26;
          auVar13._28_4_ = iVar12 + iVar27;
          auVar46 = vcvtdq2ps_avx(auVar13);
          auVar46 = vmaxps_avx(auVar45,auVar46);
          auVar46 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (int)(uVar36 + iVar28 + -0x24)),
                               auVar46);
          *(undefined1 (*) [32])(param_4 + (ulonglong)uVar32) = auVar46;
          iVar12 = iVar42 + 8 + iVar40;
          auVar14._0_4_ = iVar12 + iVar29;
          auVar14._4_4_ = iVar12 + iVar43;
          auVar14._8_4_ = iVar12 + iVar22;
          auVar14._12_4_ = iVar12 + iVar23;
          auVar14._16_4_ = iVar12 + iVar24;
          auVar14._20_4_ = iVar12 + iVar25;
          auVar14._24_4_ = iVar12 + iVar26;
          auVar14._28_4_ = iVar12 + iVar27;
          auVar46 = vcvtdq2ps_avx(auVar14);
          auVar46 = vmaxps_avx(auVar45,auVar46);
          auVar46 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (int)(iVar28 + -4 + uVar36)),auVar46
                              );
          *(undefined1 (*) [32])(param_4 + (ulonglong)uVar36) = auVar46;
          iVar42 = iVar42 + 0x10;
          uVar36 = uVar36 + 0x40;
          uVar32 = uVar32 + 0x40;
          uVar39 = uVar39 - 2;
        } while (uVar39 != 0);
      }
      if ((uVar38 & 8) == 0) {
        iVar40 = iVar42 + iVar40;
        auVar15._0_4_ =
             iVar40 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
        auVar15._4_4_ = iVar40 + _UNK_150b50ae4;
        auVar15._8_4_ = iVar40 + _UNK_150b50ae8;
        auVar15._12_4_ = iVar40 + _UNK_150b50aec;
        auVar15._16_4_ = iVar40 + _UNK_150b50af0;
        auVar15._20_4_ = iVar40 + _UNK_150b50af4;
        auVar15._24_4_ = iVar40 + _UNK_150b50af8;
        auVar15._28_4_ = iVar40 + _UNK_150b50afc;
        auVar55._4_4_ = __real_3f800000;
        auVar55._0_4_ = __real_3f800000;
        auVar55._8_4_ = __real_3f800000;
        auVar55._12_4_ = __real_3f800000;
        auVar55._16_4_ = __real_3f800000;
        auVar55._20_4_ = __real_3f800000;
        auVar55._24_4_ = __real_3f800000;
        auVar55._28_4_ = __real_3f800000;
        auVar46 = vcvtdq2ps_avx(auVar15);
        auVar46 = vmaxps_avx(auVar55,auVar46);
        auVar46 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (iVar35 + iVar42) * 4),auVar46);
        *(undefined1 (*) [32])(param_4 + (ulonglong)(uint)(iVar42 * 4)) = auVar46;
        iVar42 = iVar42 + 8;
      }
    }
    if (iVar42 <= (int)param_3) {
      auVar46 = vpbroadcastd_avx512vl();
      auVar21._4_4_ = _UNK_150b50ae4;
      auVar21._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar21._8_4_ = _UNK_150b50ae8;
      auVar21._12_4_ = _UNK_150b50aec;
      auVar21._16_4_ = _UNK_150b50af0;
      auVar21._20_4_ = _UNK_150b50af4;
      auVar21._24_4_ = _UNK_150b50af8;
      auVar21._28_4_ = _UNK_150b50afc;
      auVar46 = vpor_avx2(auVar46,auVar21);
      auVar47 = vpbroadcastd_avx512vl();
      uVar31 = vpcmpgtd_avx512vl(auVar47,auVar46);
      piVar2 = (int *)(param_1 + (iVar42 + iVar35) * 4);
      auVar48._4_4_ = (uint)((byte)(uVar31 >> 1) & 1) * piVar2[1];
      auVar48._0_4_ = (uint)((byte)uVar31 & 1) * *piVar2;
      auVar48._8_4_ = (uint)((byte)(uVar31 >> 2) & 1) * piVar2[2];
      auVar48._12_4_ = (uint)((byte)(uVar31 >> 3) & 1) * piVar2[3];
      auVar48._16_4_ = (uint)((byte)(uVar31 >> 4) & 1) * piVar2[4];
      auVar48._20_4_ = (uint)((byte)(uVar31 >> 5) & 1) * piVar2[5];
      auVar48._24_4_ = (uint)((byte)(uVar31 >> 6) & 1) * piVar2[6];
      auVar48._28_4_ = (uint)(byte)(uVar31 >> 7) * piVar2[7];
      auVar47 = vpbroadcastd_avx512vl();
      auVar16._0_4_ = auVar46._0_4_ + auVar47._0_4_;
      auVar16._4_4_ = auVar46._4_4_ + auVar47._4_4_;
      auVar16._8_4_ = auVar46._8_4_ + auVar47._8_4_;
      auVar16._12_4_ = auVar46._12_4_ + auVar47._12_4_;
      auVar16._16_4_ = auVar46._16_4_ + auVar47._16_4_;
      auVar16._20_4_ = auVar46._20_4_ + auVar47._20_4_;
      auVar16._24_4_ = auVar46._24_4_ + auVar47._24_4_;
      auVar16._28_4_ = auVar46._28_4_ + auVar47._28_4_;
      auVar58._4_4_ = __real_3f800000;
      auVar58._0_4_ = __real_3f800000;
      auVar58._8_4_ = __real_3f800000;
      auVar58._12_4_ = __real_3f800000;
      auVar58._16_4_ = __real_3f800000;
      auVar58._20_4_ = __real_3f800000;
      auVar58._24_4_ = __real_3f800000;
      auVar58._28_4_ = __real_3f800000;
      auVar46 = vcvtdq2ps_avx(auVar16);
      auVar46 = vmaxps_avx(auVar58,auVar46);
      auVar46 = vdivps_avx(auVar48,auVar46);
      puVar3 = (uint *)(param_4 + iVar42 * 4);
      bVar4 = (bool)((byte)uVar31 & 1);
      bVar5 = (bool)((byte)(uVar31 >> 1) & 1);
      bVar6 = (bool)((byte)(uVar31 >> 2) & 1);
      bVar7 = (bool)((byte)(uVar31 >> 3) & 1);
      bVar8 = (bool)((byte)(uVar31 >> 4) & 1);
      bVar9 = (bool)((byte)(uVar31 >> 5) & 1);
      bVar10 = (bool)((byte)(uVar31 >> 6) & 1);
      bVar11 = SUB81(uVar31 >> 7,0);
      *puVar3 = (uint)bVar4 * auVar46._0_4_ | (uint)!bVar4 * *puVar3;
      puVar3[1] = (uint)bVar5 * auVar46._4_4_ | (uint)!bVar5 * puVar3[1];
      puVar3[2] = (uint)bVar6 * auVar46._8_4_ | (uint)!bVar6 * puVar3[2];
      puVar3[3] = (uint)bVar7 * auVar46._12_4_ | (uint)!bVar7 * puVar3[3];
      puVar3[4] = (uint)bVar8 * auVar46._16_4_ | (uint)!bVar8 * puVar3[4];
      puVar3[5] = (uint)bVar9 * auVar46._20_4_ | (uint)!bVar9 * puVar3[5];
      puVar3[6] = (uint)bVar10 * auVar46._24_4_ | (uint)!bVar10 * puVar3[6];
      puVar3[7] = (uint)bVar11 * auVar46._28_4_ | (uint)!bVar11 * puVar3[7];
    }
    auVar20 = vcvtsi2ss_avx512f(in_ZMM16._0_16_,param_2);
    uVar36 = uVar37 - uVar33;
    uVar38 = uVar36 + 7;
    if (-1 < (int)uVar36) {
      uVar38 = uVar36;
    }
    iVar29 = ((uVar38 & 0xfffffff8) - uVar36) + uVar37;
    uVar31 = (ulonglong)uVar33;
    auVar53._0_4_ = auVar20._0_4_;
    if ((int)uVar33 < iVar29) {
      auVar56._4_4_ = auVar53._0_4_;
      auVar56._0_4_ = auVar53._0_4_;
      auVar56._8_4_ = auVar53._0_4_;
      auVar56._12_4_ = auVar53._0_4_;
      auVar56._16_4_ = auVar53._0_4_;
      auVar56._20_4_ = auVar53._0_4_;
      auVar56._24_4_ = auVar53._0_4_;
      auVar56._28_4_ = auVar53._0_4_;
      uVar31 = (ulonglong)(int)uVar33;
      iVar43 = 0;
      do {
        auVar46 = vsubps_avx(*(undefined1 (*) [32])(param_1 + (param_2 * 4 + iVar43)),
                             *(undefined1 (*) [32])(param_1 + iVar43));
        auVar46 = vdivps_avx(auVar46,auVar56);
        *(undefined1 (*) [32])(param_4 + (int)(param_3 * 4 + 4 + iVar43)) = auVar46;
        uVar31 = uVar31 + 8;
        iVar43 = iVar43 + 0x20;
      } while ((longlong)uVar31 < (longlong)iVar29);
    }
    iVar43 = (int)uVar31;
    if ((int)uVar37 <= iVar43) goto LAB_140a18c4b;
    auVar46 = vpbroadcastd_avx512vl();
    auVar17._0_4_ =
         auVar46._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar17._4_4_ = auVar46._4_4_ + _UNK_150b50ae4;
    auVar17._8_4_ = auVar46._8_4_ + _UNK_150b50ae8;
    auVar17._12_4_ = auVar46._12_4_ + _UNK_150b50aec;
    auVar17._16_4_ = auVar46._16_4_ + _UNK_150b50af0;
    auVar17._20_4_ = auVar46._20_4_ + _UNK_150b50af4;
    auVar17._24_4_ = auVar46._24_4_ + _UNK_150b50af8;
    auVar17._28_4_ = auVar46._28_4_ + _UNK_150b50afc;
    auVar46 = vpbroadcastd_avx512vl();
    uVar44 = vpcmpgtd_avx512vl(auVar46,auVar17);
    piVar2 = (int *)(param_1 + (iVar35 + iVar43) * 4);
    auVar49._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * piVar2[1];
    auVar49._0_4_ = (uint)((byte)uVar44 & 1) * *piVar2;
    auVar49._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * piVar2[2];
    auVar49._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * piVar2[3];
    auVar49._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * piVar2[4];
    auVar49._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * piVar2[5];
    auVar49._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * piVar2[6];
    auVar49._28_4_ = (uint)(byte)(uVar44 >> 7) * piVar2[7];
    iVar29 = iVar43 * 4;
    piVar2 = (int *)(param_1 + (int)((iVar43 + uVar41) * 4));
    auVar50._4_4_ = (uint)((byte)(uVar44 >> 1) & 1) * piVar2[1];
    auVar50._0_4_ = (uint)((byte)uVar44 & 1) * *piVar2;
    auVar50._8_4_ = (uint)((byte)(uVar44 >> 2) & 1) * piVar2[2];
    auVar50._12_4_ = (uint)((byte)(uVar44 >> 3) & 1) * piVar2[3];
    auVar50._16_4_ = (uint)((byte)(uVar44 >> 4) & 1) * piVar2[4];
    auVar50._20_4_ = (uint)((byte)(uVar44 >> 5) & 1) * piVar2[5];
    auVar50._24_4_ = (uint)((byte)(uVar44 >> 6) & 1) * piVar2[6];
    auVar50._28_4_ = (uint)(byte)(uVar44 >> 7) * piVar2[7];
    auVar46 = vsubps_avx(auVar49,auVar50);
    auVar53._4_4_ = auVar53._0_4_;
    auVar53._8_4_ = auVar53._0_4_;
    auVar53._12_4_ = auVar53._0_4_;
    auVar53._16_4_ = auVar53._0_4_;
    auVar53._20_4_ = auVar53._0_4_;
    auVar53._24_4_ = auVar53._0_4_;
    auVar53._28_4_ = auVar53._0_4_;
    auVar46 = vdivps_avx(auVar46,auVar53);
  }
  else {
    auVar46._0_4_ = param_5 / (float)param_6;
    uVar38 = uVar37 + 7;
    if (-1 < (int)uVar37) {
      uVar38 = uVar37;
    }
    if ((int)(uVar38 & 0xfffffff8) < 1) {
      uVar31 = 0;
      if ((int)uVar37 < 1) goto LAB_140a18c4b;
    }
    else {
      uVar36 = 0;
      uVar31 = 0;
      do {
        pfVar1 = (float *)(param_4 + (ulonglong)uVar36);
        *pfVar1 = auVar46._0_4_;
        pfVar1[1] = auVar46._0_4_;
        pfVar1[2] = auVar46._0_4_;
        pfVar1[3] = auVar46._0_4_;
        pfVar1[4] = auVar46._0_4_;
        pfVar1[5] = auVar46._0_4_;
        pfVar1[6] = auVar46._0_4_;
        pfVar1[7] = auVar46._0_4_;
        uVar31 = uVar31 + 8;
        uVar36 = uVar36 + 0x20;
      } while (uVar31 < (uVar38 & 0xfffffff8));
      if ((int)uVar37 <= (int)uVar31) goto LAB_140a18c4b;
    }
    auVar45 = vpbroadcastd_avx512vl();
    auVar47._4_4_ = _UNK_150b50ae4;
    auVar47._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar47._8_4_ = _UNK_150b50ae8;
    auVar47._12_4_ = _UNK_150b50aec;
    auVar47._16_4_ = _UNK_150b50af0;
    auVar47._20_4_ = _UNK_150b50af4;
    auVar47._24_4_ = _UNK_150b50af8;
    auVar47._28_4_ = _UNK_150b50afc;
    auVar47 = vpor_avx2(auVar45,auVar47);
    auVar45 = vpbroadcastd_avx512vl();
    uVar44 = vpcmpgtd_avx512vl(auVar45,auVar47);
    iVar29 = (int)uVar31 << 2;
    auVar46._4_4_ = auVar46._0_4_;
    auVar46._8_4_ = auVar46._0_4_;
    auVar46._12_4_ = auVar46._0_4_;
    auVar46._16_4_ = auVar46._0_4_;
    auVar46._20_4_ = auVar46._0_4_;
    auVar46._24_4_ = auVar46._0_4_;
    auVar46._28_4_ = auVar46._0_4_;
  }
  puVar3 = (uint *)(param_4 + iVar29);
  bVar4 = (bool)((byte)uVar44 & 1);
  bVar5 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar6 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar7 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar8 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar9 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar10 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar11 = SUB81(uVar44 >> 7,0);
  *puVar3 = (uint)bVar4 * auVar46._0_4_ | (uint)!bVar4 * *puVar3;
  puVar3[1] = (uint)bVar5 * auVar46._4_4_ | (uint)!bVar5 * puVar3[1];
  puVar3[2] = (uint)bVar6 * auVar46._8_4_ | (uint)!bVar6 * puVar3[2];
  puVar3[3] = (uint)bVar7 * auVar46._12_4_ | (uint)!bVar7 * puVar3[3];
  puVar3[4] = (uint)bVar8 * auVar46._16_4_ | (uint)!bVar8 * puVar3[4];
  puVar3[5] = (uint)bVar9 * auVar46._20_4_ | (uint)!bVar9 * puVar3[5];
  puVar3[6] = (uint)bVar10 * auVar46._24_4_ | (uint)!bVar10 * puVar3[6];
  puVar3[7] = (uint)bVar11 * auVar46._28_4_ | (uint)!bVar11 * puVar3[7];
LAB_140a18c4b:
  iVar27 = _UNK_150d5a7fc;
  iVar26 = _UNK_150d5a7f8;
  iVar25 = _UNK_150d5a7f4;
  iVar24 = _UNK_150d5a7f0;
  iVar23 = _UNK_150d5a7ec;
  iVar22 = _UNK_150d5a7e8;
  iVar43 = _UNK_150d5a7e4;
  iVar29 = ___ymm_fffffff9fffffffafffffffbfffffffcfffffffdfffffffeffffffff00000000;
  uVar36 = param_6 - uVar37;
  uVar38 = uVar36 + 7;
  if (-1 < (int)uVar36) {
    uVar38 = uVar36;
  }
  iVar40 = ((uVar38 & 0xfffffff8) - uVar36) + param_6;
  if ((int)uVar37 < iVar40) {
    auVar57._4_4_ = param_5;
    auVar57._0_4_ = param_5;
    auVar57._8_4_ = param_5;
    auVar57._12_4_ = param_5;
    auVar57._16_4_ = param_5;
    auVar57._20_4_ = param_5;
    auVar57._24_4_ = param_5;
    auVar57._28_4_ = param_5;
    uVar37 = uVar33;
    if ((int)uVar33 < (int)uVar34) {
      uVar37 = uVar34;
    }
    lVar30 = (longlong)(int)uVar37;
    iVar35 = uVar37 * 4;
    do {
      auVar47 = vsubps_avx512vl(auVar57,*(undefined1 (*) [32])(param_1 + (int)(uVar41 * 4 + iVar35))
                               );
      auVar20 = vpsubd_avx(ZEXT416(param_6 + param_3),ZEXT416(uVar37));
      iVar28 = auVar20._0_4_;
      auVar18._0_4_ = iVar28 + iVar29;
      auVar18._4_4_ = iVar28 + iVar43;
      auVar18._8_4_ = iVar28 + iVar22;
      auVar18._12_4_ = iVar28 + iVar23;
      auVar18._16_4_ = iVar28 + iVar24;
      auVar18._20_4_ = iVar28 + iVar25;
      auVar18._24_4_ = iVar28 + iVar26;
      auVar18._28_4_ = iVar28 + iVar27;
      auVar46 = vcvtdq2ps_avx(auVar18);
      auVar46 = vdivps_avx512vl(auVar47,auVar46);
      *(undefined1 (*) [32])(param_4 + iVar35) = auVar46;
      lVar30 = lVar30 + 8;
      iVar35 = iVar35 + 0x20;
      uVar37 = uVar37 + 8;
    } while (lVar30 < iVar40);
  }
  if ((int)uVar37 < param_6) {
    auVar46 = vpbroadcastd_avx512vl();
    auVar19._0_4_ =
         auVar46._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar19._4_4_ = auVar46._4_4_ + _UNK_150b50ae4;
    auVar19._8_4_ = auVar46._8_4_ + _UNK_150b50ae8;
    auVar19._12_4_ = auVar46._12_4_ + _UNK_150b50aec;
    auVar19._16_4_ = auVar46._16_4_ + _UNK_150b50af0;
    auVar19._20_4_ = auVar46._20_4_ + _UNK_150b50af4;
    auVar19._24_4_ = auVar46._24_4_ + _UNK_150b50af8;
    auVar19._28_4_ = auVar46._28_4_ + _UNK_150b50afc;
    auVar46 = vpbroadcastd_avx512vl();
    uVar31 = vpcmpgtd_avx512vl(auVar46,auVar19);
    auVar52._4_4_ = param_5;
    auVar52._0_4_ = param_5;
    auVar52._8_4_ = param_5;
    auVar52._12_4_ = param_5;
    auVar52._16_4_ = param_5;
    auVar52._20_4_ = param_5;
    auVar52._24_4_ = param_5;
    auVar52._28_4_ = param_5;
    piVar2 = (int *)(param_1 + (int)((uVar41 + uVar37) * 4));
    auVar51._4_4_ = (uint)((byte)(uVar31 >> 1) & 1) * piVar2[1];
    auVar51._0_4_ = (uint)((byte)uVar31 & 1) * *piVar2;
    auVar51._8_4_ = (uint)((byte)(uVar31 >> 2) & 1) * piVar2[2];
    auVar51._12_4_ = (uint)((byte)(uVar31 >> 3) & 1) * piVar2[3];
    auVar51._16_4_ = (uint)((byte)(uVar31 >> 4) & 1) * piVar2[4];
    auVar51._20_4_ = (uint)((byte)(uVar31 >> 5) & 1) * piVar2[5];
    auVar51._24_4_ = (uint)((byte)(uVar31 >> 6) & 1) * piVar2[6];
    auVar51._28_4_ = (uint)(byte)(uVar31 >> 7) * piVar2[7];
    auVar47 = vsubps_avx(auVar52,auVar51);
    iVar29 = auVar46._0_4_ + param_3;
    auVar54._4_4_ = iVar29;
    auVar54._0_4_ = iVar29;
    auVar54._8_4_ = iVar29;
    auVar54._12_4_ = iVar29;
    auVar54._16_4_ = iVar29;
    auVar54._20_4_ = iVar29;
    auVar54._24_4_ = iVar29;
    auVar54._28_4_ = iVar29;
    auVar46 = vpsubd_avx2(auVar54,auVar19);
    auVar46 = vcvtdq2ps_avx(auVar46);
    auVar46 = vdivps_avx(auVar47,auVar46);
    puVar3 = (uint *)(param_4 + (int)(uVar37 * 4));
    bVar4 = (bool)((byte)uVar31 & 1);
    bVar5 = (bool)((byte)(uVar31 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar31 >> 2) & 1);
    bVar7 = (bool)((byte)(uVar31 >> 3) & 1);
    bVar8 = (bool)((byte)(uVar31 >> 4) & 1);
    bVar9 = (bool)((byte)(uVar31 >> 5) & 1);
    bVar10 = (bool)((byte)(uVar31 >> 6) & 1);
    bVar11 = SUB81(uVar31 >> 7,0);
    *puVar3 = (uint)bVar4 * auVar46._0_4_ | (uint)!bVar4 * *puVar3;
    puVar3[1] = (uint)bVar5 * auVar46._4_4_ | (uint)!bVar5 * puVar3[1];
    puVar3[2] = (uint)bVar6 * auVar46._8_4_ | (uint)!bVar6 * puVar3[2];
    puVar3[3] = (uint)bVar7 * auVar46._12_4_ | (uint)!bVar7 * puVar3[3];
    puVar3[4] = (uint)bVar8 * auVar46._16_4_ | (uint)!bVar8 * puVar3[4];
    puVar3[5] = (uint)bVar9 * auVar46._20_4_ | (uint)!bVar9 * puVar3[5];
    puVar3[6] = (uint)bVar10 * auVar46._24_4_ | (uint)!bVar10 * puVar3[6];
    puVar3[7] = (uint)bVar11 * auVar46._28_4_ | (uint)!bVar11 * puVar3[7];
  }
  return;
}

// ArrayGetEuclideanNorm_avx512skx @ 140a18d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetEuclideanNorm_avx512skx(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int *piVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [64];
  
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar10 = ZEXT832(0);
    if ((int)param_3 < 1) goto LAB_140a18dd0;
  }
  else {
    auVar11 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      auVar10._0_4_ = *pfVar1 * *pfVar1 + auVar11._0_4_;
      auVar10._4_4_ = pfVar1[1] * pfVar1[1] + auVar11._4_4_;
      auVar10._8_4_ = pfVar1[2] * pfVar1[2] + auVar11._8_4_;
      auVar10._12_4_ = pfVar1[3] * pfVar1[3] + auVar11._12_4_;
      auVar10._16_4_ = pfVar1[4] * pfVar1[4] + auVar11._16_4_;
      auVar10._20_4_ = pfVar1[5] * pfVar1[5] + auVar11._20_4_;
      auVar10._24_4_ = pfVar1[6] * pfVar1[6] + auVar11._24_4_;
      auVar10._28_4_ = pfVar1[7] * pfVar1[7] + auVar11._28_4_;
      auVar11 = ZEXT3264(auVar10);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar6) goto LAB_140a18dd0;
  }
  auVar8 = vpbroadcastd_avx512vl();
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar9,auVar8);
  piVar2 = (int *)(param_1 + ((int)uVar6 << 2));
  auVar8._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * piVar2[1];
  auVar8._0_4_ = (uint)((byte)uVar4 & 1) * *piVar2;
  auVar8._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * piVar2[2];
  auVar8._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * piVar2[3];
  auVar8._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * piVar2[4];
  auVar8._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * piVar2[5];
  auVar8._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * piVar2[6];
  auVar8._28_4_ = (uint)(byte)(uVar4 >> 7) * piVar2[7];
  auVar8 = vfmadd231ps_avx512vl(auVar10,auVar8,auVar8);
  bVar3 = (bool)((byte)uVar4 & 1);
  auVar9._0_4_ = (uint)bVar3 * auVar8._0_4_ | (uint)!bVar3 * auVar10._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar9._4_4_ = (uint)bVar3 * auVar8._4_4_ | (uint)!bVar3 * auVar10._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar9._8_4_ = (uint)bVar3 * auVar8._8_4_ | (uint)!bVar3 * auVar10._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar9._12_4_ = (uint)bVar3 * auVar8._12_4_ | (uint)!bVar3 * auVar10._12_4_;
  bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
  auVar9._16_4_ = (uint)bVar3 * auVar8._16_4_ | (uint)!bVar3 * auVar10._16_4_;
  bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
  auVar9._20_4_ = (uint)bVar3 * auVar8._20_4_ | (uint)!bVar3 * auVar10._20_4_;
  bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
  auVar9._24_4_ = (uint)bVar3 * auVar8._24_4_ | (uint)!bVar3 * auVar10._24_4_;
  bVar3 = SUB81(uVar4 >> 7,0);
  auVar9._28_4_ = (uint)bVar3 * auVar8._28_4_ | (uint)!bVar3 * auVar10._28_4_;
  auVar10 = auVar9;
LAB_140a18dd0:
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  *param_2 = SQRT(auVar10._0_4_ + auVar10._16_4_);
  return;
}

// ArrayAbs_avx512skx @ 140a18e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAbs_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  
  uVar20 = __real_7fffffff;
  uVar21 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar21 = param_3;
  }
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar22 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar24);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      uVar16 = puVar1[4];
      uVar17 = puVar1[5];
      uVar18 = puVar1[6];
      uVar19 = puVar1[7];
      puVar2 = (uint *)(param_2 + (ulonglong)uVar24);
      *puVar2 = uVar20 & *puVar1;
      puVar2[1] = uVar20 & uVar13;
      puVar2[2] = uVar20 & uVar14;
      puVar2[3] = uVar20 & uVar15;
      puVar2[4] = uVar20 & uVar16;
      puVar2[5] = uVar20 & uVar17;
      puVar2[6] = uVar20 & uVar18;
      puVar2[7] = uVar20 & uVar19;
      uVar22 = uVar22 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar22 < (uVar21 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar22) {
      return;
    }
  }
  auVar25 = vpbroadcastd_avx512vl();
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26 = vpbroadcastd_avx512vl();
  uVar12 = vpcmpgtd_avx512vl(auVar26,auVar25);
  lVar23 = (longlong)((int)uVar22 << 2);
  piVar3 = (int *)(param_1 + lVar23);
  auVar26._4_4_ = (uint)((byte)(uVar12 >> 1) & 1) * piVar3[1];
  auVar26._0_4_ = (uint)((byte)uVar12 & 1) * *piVar3;
  auVar26._8_4_ = (uint)((byte)(uVar12 >> 2) & 1) * piVar3[2];
  auVar26._12_4_ = (uint)((byte)(uVar12 >> 3) & 1) * piVar3[3];
  auVar26._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * piVar3[4];
  auVar26._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * piVar3[5];
  auVar26._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * piVar3[6];
  auVar26._28_4_ = (uint)(byte)(uVar12 >> 7) * piVar3[7];
  auVar25._4_4_ = __real_7fffffff;
  auVar25._0_4_ = __real_7fffffff;
  auVar25._8_4_ = __real_7fffffff;
  auVar25._12_4_ = __real_7fffffff;
  auVar25._16_4_ = __real_7fffffff;
  auVar25._20_4_ = __real_7fffffff;
  auVar25._24_4_ = __real_7fffffff;
  auVar25._28_4_ = __real_7fffffff;
  auVar25 = vandps_avx512vl(auVar26,auVar25);
  puVar1 = (uint *)(param_2 + lVar23);
  bVar4 = (bool)((byte)uVar12 & 1);
  bVar5 = (bool)((byte)(uVar12 >> 1) & 1);
  bVar6 = (bool)((byte)(uVar12 >> 2) & 1);
  bVar7 = (bool)((byte)(uVar12 >> 3) & 1);
  bVar8 = (bool)((byte)(uVar12 >> 4) & 1);
  bVar9 = (bool)((byte)(uVar12 >> 5) & 1);
  bVar10 = (bool)((byte)(uVar12 >> 6) & 1);
  bVar11 = SUB81(uVar12 >> 7,0);
  *puVar1 = (uint)bVar4 * auVar25._0_4_ | (uint)!bVar4 * *puVar1;
  puVar1[1] = (uint)bVar5 * auVar25._4_4_ | (uint)!bVar5 * puVar1[1];
  puVar1[2] = (uint)bVar6 * auVar25._8_4_ | (uint)!bVar6 * puVar1[2];
  puVar1[3] = (uint)bVar7 * auVar25._12_4_ | (uint)!bVar7 * puVar1[3];
  puVar1[4] = (uint)bVar8 * auVar25._16_4_ | (uint)!bVar8 * puVar1[4];
  puVar1[5] = (uint)bVar9 * auVar25._20_4_ | (uint)!bVar9 * puVar1[5];
  puVar1[6] = (uint)bVar10 * auVar25._24_4_ | (uint)!bVar10 * puVar1[6];
  puVar1[7] = (uint)bVar11 * auVar25._28_4_ | (uint)!bVar11 * puVar1[7];
  return;
}

// ArrayAbsInPlace_avx512skx @ 140a18ea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAbsInPlace_avx512skx(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  
  uVar20 = __real_7fffffff;
  uVar21 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar21 = param_2;
  }
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar22 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar24);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      uVar16 = puVar1[4];
      uVar17 = puVar1[5];
      uVar18 = puVar1[6];
      uVar19 = puVar1[7];
      puVar2 = (uint *)(param_1 + (ulonglong)uVar24);
      *puVar2 = uVar20 & *puVar1;
      puVar2[1] = uVar20 & uVar13;
      puVar2[2] = uVar20 & uVar14;
      puVar2[3] = uVar20 & uVar15;
      puVar2[4] = uVar20 & uVar16;
      puVar2[5] = uVar20 & uVar17;
      puVar2[6] = uVar20 & uVar18;
      puVar2[7] = uVar20 & uVar19;
      uVar22 = uVar22 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar22 < (uVar21 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar22) {
      return;
    }
  }
  auVar25 = vpbroadcastd_avx512vl();
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26 = vpbroadcastd_avx512vl();
  uVar12 = vpcmpgtd_avx512vl(auVar26,auVar25);
  lVar23 = (longlong)((int)uVar22 << 2);
  piVar3 = (int *)(param_1 + lVar23);
  auVar26._4_4_ = (uint)((byte)(uVar12 >> 1) & 1) * piVar3[1];
  auVar26._0_4_ = (uint)((byte)uVar12 & 1) * *piVar3;
  auVar26._8_4_ = (uint)((byte)(uVar12 >> 2) & 1) * piVar3[2];
  auVar26._12_4_ = (uint)((byte)(uVar12 >> 3) & 1) * piVar3[3];
  auVar26._16_4_ = (uint)((byte)(uVar12 >> 4) & 1) * piVar3[4];
  auVar26._20_4_ = (uint)((byte)(uVar12 >> 5) & 1) * piVar3[5];
  auVar26._24_4_ = (uint)((byte)(uVar12 >> 6) & 1) * piVar3[6];
  auVar26._28_4_ = (uint)(byte)(uVar12 >> 7) * piVar3[7];
  auVar25._4_4_ = __real_7fffffff;
  auVar25._0_4_ = __real_7fffffff;
  auVar25._8_4_ = __real_7fffffff;
  auVar25._12_4_ = __real_7fffffff;
  auVar25._16_4_ = __real_7fffffff;
  auVar25._20_4_ = __real_7fffffff;
  auVar25._24_4_ = __real_7fffffff;
  auVar25._28_4_ = __real_7fffffff;
  auVar25 = vandps_avx512vl(auVar26,auVar25);
  puVar1 = (uint *)(param_1 + lVar23);
  bVar4 = (bool)((byte)uVar12 & 1);
  bVar5 = (bool)((byte)(uVar12 >> 1) & 1);
  bVar6 = (bool)((byte)(uVar12 >> 2) & 1);
  bVar7 = (bool)((byte)(uVar12 >> 3) & 1);
  bVar8 = (bool)((byte)(uVar12 >> 4) & 1);
  bVar9 = (bool)((byte)(uVar12 >> 5) & 1);
  bVar10 = (bool)((byte)(uVar12 >> 6) & 1);
  bVar11 = SUB81(uVar12 >> 7,0);
  *puVar1 = (uint)bVar4 * auVar25._0_4_ | (uint)!bVar4 * *puVar1;
  puVar1[1] = (uint)bVar5 * auVar25._4_4_ | (uint)!bVar5 * puVar1[1];
  puVar1[2] = (uint)bVar6 * auVar25._8_4_ | (uint)!bVar6 * puVar1[2];
  puVar1[3] = (uint)bVar7 * auVar25._12_4_ | (uint)!bVar7 * puVar1[3];
  puVar1[4] = (uint)bVar8 * auVar25._16_4_ | (uint)!bVar8 * puVar1[4];
  puVar1[5] = (uint)bVar9 * auVar25._20_4_ | (uint)!bVar9 * puVar1[5];
  puVar1[6] = (uint)bVar10 * auVar25._24_4_ | (uint)!bVar10 * puVar1[6];
  puVar1[7] = (uint)bVar11 * auVar25._28_4_ | (uint)!bVar11 * puVar1[7];
  return;
}

// ArrayClampMinInPlace_avx512skx @ 140a18f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampMinInPlace_avx512skx(longlong param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  uVar12 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar16._4_4_ = param_2;
    auVar16._0_4_ = param_2;
    auVar16._8_4_ = param_2;
    auVar16._12_4_ = param_2;
    auVar16._16_4_ = param_2;
    auVar16._20_4_ = param_2;
    auVar16._24_4_ = param_2;
    auVar16._28_4_ = param_2;
    uVar15 = 0;
    uVar13 = 0;
    do {
      auVar17 = vmaxps_avx(auVar16,*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15));
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15) = auVar17;
      uVar13 = uVar13 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar13) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar17,auVar16);
  auVar18._4_4_ = param_2;
  auVar18._0_4_ = param_2;
  auVar18._8_4_ = param_2;
  auVar18._12_4_ = param_2;
  auVar18._16_4_ = param_2;
  auVar18._20_4_ = param_2;
  auVar18._24_4_ = param_2;
  auVar18._28_4_ = param_2;
  lVar14 = (longlong)((int)uVar13 << 2);
  piVar1 = (int *)(param_1 + lVar14);
  auVar17._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar16 = vmaxps_avx(auVar18,auVar17);
  puVar2 = (uint *)(param_1 + lVar14);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar16._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayClampMaxInPlace_avx512skx @ 140a18fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampMaxInPlace_avx512skx(longlong param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  uVar12 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar16._4_4_ = param_2;
    auVar16._0_4_ = param_2;
    auVar16._8_4_ = param_2;
    auVar16._12_4_ = param_2;
    auVar16._16_4_ = param_2;
    auVar16._20_4_ = param_2;
    auVar16._24_4_ = param_2;
    auVar16._28_4_ = param_2;
    uVar15 = 0;
    uVar13 = 0;
    do {
      auVar17 = vminps_avx(auVar16,*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15));
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15) = auVar17;
      uVar13 = uVar13 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar13) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar17,auVar16);
  auVar18._4_4_ = param_2;
  auVar18._0_4_ = param_2;
  auVar18._8_4_ = param_2;
  auVar18._12_4_ = param_2;
  auVar18._16_4_ = param_2;
  auVar18._20_4_ = param_2;
  auVar18._24_4_ = param_2;
  auVar18._28_4_ = param_2;
  lVar14 = (longlong)((int)uVar13 << 2);
  piVar1 = (int *)(param_1 + lVar14);
  auVar17._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar16 = vminps_avx(auVar18,auVar17);
  puVar2 = (uint *)(param_1 + lVar14);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar16._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayClampInPlace_avx512skx @ 140a19050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampInPlace_avx512skx
               (longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  
  uVar12 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar12 = param_4;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar16._4_4_ = param_2;
    auVar16._0_4_ = param_2;
    auVar16._8_4_ = param_2;
    auVar16._12_4_ = param_2;
    auVar16._16_4_ = param_2;
    auVar16._20_4_ = param_2;
    auVar16._24_4_ = param_2;
    auVar16._28_4_ = param_2;
    auVar17._4_4_ = param_3;
    auVar17._0_4_ = param_3;
    auVar17._8_4_ = param_3;
    auVar17._12_4_ = param_3;
    auVar17._16_4_ = param_3;
    auVar17._20_4_ = param_3;
    auVar17._24_4_ = param_3;
    auVar17._28_4_ = param_3;
    uVar15 = 0;
    uVar13 = 0;
    do {
      auVar18 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15),auVar16);
      auVar18 = vminps_avx(auVar18,auVar17);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15) = auVar18;
      uVar13 = uVar13 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar14 = (longlong)((int)uVar13 << 2);
  piVar1 = (int *)(param_1 + lVar14);
  auVar18._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar18._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar18._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar18._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar18._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar18._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar18._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar18._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar19._4_4_ = param_2;
  auVar19._0_4_ = param_2;
  auVar19._8_4_ = param_2;
  auVar19._12_4_ = param_2;
  auVar19._16_4_ = param_2;
  auVar19._20_4_ = param_2;
  auVar19._24_4_ = param_2;
  auVar19._28_4_ = param_2;
  auVar16 = vmaxps_avx(auVar18,auVar19);
  auVar20._4_4_ = param_3;
  auVar20._0_4_ = param_3;
  auVar20._8_4_ = param_3;
  auVar20._12_4_ = param_3;
  auVar20._16_4_ = param_3;
  auVar20._20_4_ = param_3;
  auVar20._24_4_ = param_3;
  auVar20._28_4_ = param_3;
  auVar16 = vminps_avx(auVar16,auVar20);
  puVar2 = (uint *)(param_1 + lVar14);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar16._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayMinMaxNormalize_avx512skx @ 140a19100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMinMaxNormalize_avx512skx(undefined4 *param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  float *pfVar2;
  uint *puVar3;
  undefined4 uVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  undefined1 auVar18 [32];
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  float fVar30;
  undefined1 auVar31 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  
  uVar4 = *param_1;
  auVar26._4_4_ = uVar4;
  auVar26._0_4_ = uVar4;
  auVar26._8_4_ = uVar4;
  auVar26._12_4_ = uVar4;
  auVar26._16_4_ = uVar4;
  auVar26._20_4_ = uVar4;
  auVar26._24_4_ = uVar4;
  auVar26._28_4_ = uVar4;
  uVar21 = param_3 + 6;
  if (-1 < (int)(param_3 - 1)) {
    uVar21 = param_3 - 1;
  }
  uVar21 = uVar21 & 0xfffffff8 | 1;
  uVar19 = 1;
  auVar29 = auVar26;
  if ((int)uVar21 < 2) {
    if ((int)param_3 < 2) goto LAB_140a19199;
  }
  else {
    uVar19 = 1;
    uVar22 = 4;
    do {
      auVar26 = vmaxps_avx(auVar26,*(undefined1 (*) [32])((longlong)param_1 + (ulonglong)uVar22));
      auVar29 = vminps_avx(auVar29,*(undefined1 (*) [32])((longlong)param_1 + (ulonglong)uVar22));
      uVar19 = uVar19 + 8;
      uVar22 = uVar22 + 0x20;
    } while (uVar19 < uVar21);
    if ((int)param_3 <= (int)uVar19) goto LAB_140a19199;
  }
  auVar23 = vpbroadcastd_avx512vl();
  auVar24._0_4_ =
       auVar23._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar24._4_4_ = auVar23._4_4_ + _UNK_150b50ae4;
  auVar24._8_4_ = auVar23._8_4_ + _UNK_150b50ae8;
  auVar24._12_4_ = auVar23._12_4_ + _UNK_150b50aec;
  auVar24._16_4_ = auVar23._16_4_ + _UNK_150b50af0;
  auVar24._20_4_ = auVar23._20_4_ + _UNK_150b50af4;
  auVar24._24_4_ = auVar23._24_4_ + _UNK_150b50af8;
  auVar24._28_4_ = auVar23._28_4_ + _UNK_150b50afc;
  auVar23 = vpbroadcastd_avx512vl();
  uVar17 = vpcmpgtd_avx512vl(auVar23,auVar24);
  piVar1 = (int *)((longlong)param_1 + (longlong)((int)uVar19 << 2));
  bVar5 = (byte)uVar17;
  auVar23._4_4_ = (uint)((byte)(uVar17 >> 1) & 1) * piVar1[1];
  auVar23._0_4_ = (uint)(bVar5 & 1) * *piVar1;
  auVar23._8_4_ = (uint)((byte)(uVar17 >> 2) & 1) * piVar1[2];
  auVar23._12_4_ = (uint)((byte)(uVar17 >> 3) & 1) * piVar1[3];
  auVar23._16_4_ = (uint)((byte)(uVar17 >> 4) & 1) * piVar1[4];
  auVar23._20_4_ = (uint)((byte)(uVar17 >> 5) & 1) * piVar1[5];
  auVar23._24_4_ = (uint)((byte)(uVar17 >> 6) & 1) * piVar1[6];
  auVar23._28_4_ = (uint)(byte)(uVar17 >> 7) * piVar1[7];
  auVar24 = vmaxps_avx512vl(auVar26,auVar23);
  auVar25._0_4_ = (uint)(bVar5 & 1) * auVar24._0_4_ | (uint)!(bool)(bVar5 & 1) * auVar26._0_4_;
  bVar6 = (bool)((byte)(uVar17 >> 1) & 1);
  auVar25._4_4_ = (uint)bVar6 * auVar24._4_4_ | (uint)!bVar6 * auVar26._4_4_;
  bVar6 = (bool)((byte)(uVar17 >> 2) & 1);
  auVar25._8_4_ = (uint)bVar6 * auVar24._8_4_ | (uint)!bVar6 * auVar26._8_4_;
  bVar6 = (bool)((byte)(uVar17 >> 3) & 1);
  auVar25._12_4_ = (uint)bVar6 * auVar24._12_4_ | (uint)!bVar6 * auVar26._12_4_;
  bVar6 = (bool)((byte)(uVar17 >> 4) & 1);
  auVar25._16_4_ = (uint)bVar6 * auVar24._16_4_ | (uint)!bVar6 * auVar26._16_4_;
  bVar6 = (bool)((byte)(uVar17 >> 5) & 1);
  auVar25._20_4_ = (uint)bVar6 * auVar24._20_4_ | (uint)!bVar6 * auVar26._20_4_;
  bVar6 = (bool)((byte)(uVar17 >> 6) & 1);
  auVar25._24_4_ = (uint)bVar6 * auVar24._24_4_ | (uint)!bVar6 * auVar26._24_4_;
  bVar6 = SUB81(uVar17 >> 7,0);
  auVar25._28_4_ = (uint)bVar6 * auVar24._28_4_ | (uint)!bVar6 * auVar26._28_4_;
  auVar26 = vminps_avx512vl(auVar29,auVar23);
  auVar27._0_4_ = (uint)(bVar5 & 1) * auVar26._0_4_ | (uint)!(bool)(bVar5 & 1) * auVar29._0_4_;
  bVar6 = (bool)((byte)(uVar17 >> 1) & 1);
  auVar27._4_4_ = (uint)bVar6 * auVar26._4_4_ | (uint)!bVar6 * auVar29._4_4_;
  bVar6 = (bool)((byte)(uVar17 >> 2) & 1);
  auVar27._8_4_ = (uint)bVar6 * auVar26._8_4_ | (uint)!bVar6 * auVar29._8_4_;
  bVar6 = (bool)((byte)(uVar17 >> 3) & 1);
  auVar27._12_4_ = (uint)bVar6 * auVar26._12_4_ | (uint)!bVar6 * auVar29._12_4_;
  bVar6 = (bool)((byte)(uVar17 >> 4) & 1);
  auVar27._16_4_ = (uint)bVar6 * auVar26._16_4_ | (uint)!bVar6 * auVar29._16_4_;
  bVar6 = (bool)((byte)(uVar17 >> 5) & 1);
  auVar27._20_4_ = (uint)bVar6 * auVar26._20_4_ | (uint)!bVar6 * auVar29._20_4_;
  bVar6 = (bool)((byte)(uVar17 >> 6) & 1);
  auVar27._24_4_ = (uint)bVar6 * auVar26._24_4_ | (uint)!bVar6 * auVar29._24_4_;
  bVar6 = SUB81(uVar17 >> 7,0);
  auVar27._28_4_ = (uint)bVar6 * auVar26._28_4_ | (uint)!bVar6 * auVar29._28_4_;
  auVar26 = auVar25;
  auVar29 = auVar27;
LAB_140a19199:
  auVar14 = vmaxps_avx(auVar26._16_16_,auVar26._0_16_);
  auVar15 = vshufpd_avx(auVar14,auVar14,1);
  auVar14 = vmaxps_avx(auVar15,auVar14);
  auVar15 = vmovshdup_avx(auVar14);
  auVar14 = vmaxss_avx(auVar15,auVar14);
  auVar15 = vminps_avx(auVar29._16_16_,auVar29._0_16_);
  auVar16 = vshufpd_avx(auVar15,auVar15,1);
  auVar15 = vminps_avx(auVar16,auVar15);
  auVar16 = vmovshdup_avx(auVar15);
  auVar15 = vminss_avx(auVar15,auVar16);
  auVar29._0_4_ = auVar15._0_4_;
  auVar14 = vmaxss_avx(ZEXT416((uint)(auVar14._0_4_ - auVar29._0_4_)),ZEXT416(__real_322bcc77));
  fVar30 = __real_3f800000 / auVar14._0_4_;
  uVar21 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar21 = param_3;
  }
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar19 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar31._4_4_ = auVar29._0_4_;
    auVar31._0_4_ = auVar29._0_4_;
    auVar31._8_4_ = auVar29._0_4_;
    auVar31._12_4_ = auVar29._0_4_;
    auVar31._16_4_ = auVar29._0_4_;
    auVar31._20_4_ = auVar29._0_4_;
    auVar31._24_4_ = auVar29._0_4_;
    auVar31._28_4_ = auVar29._0_4_;
    uVar22 = 0;
    uVar19 = 0;
    do {
      auVar26 = vsubps_avx(*(undefined1 (*) [32])((longlong)param_1 + (ulonglong)uVar22),auVar31);
      pfVar2 = (float *)(param_2 + (ulonglong)uVar22);
      *pfVar2 = fVar30 * auVar26._0_4_;
      pfVar2[1] = fVar30 * auVar26._4_4_;
      pfVar2[2] = fVar30 * auVar26._8_4_;
      pfVar2[3] = fVar30 * auVar26._12_4_;
      pfVar2[4] = fVar30 * auVar26._16_4_;
      pfVar2[5] = fVar30 * auVar26._20_4_;
      pfVar2[6] = fVar30 * auVar26._24_4_;
      pfVar2[7] = fVar30 * auVar26._28_4_;
      uVar19 = uVar19 + 8;
      uVar22 = uVar22 + 0x20;
    } while (uVar19 < (uVar21 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar19) {
      return;
    }
  }
  auVar26 = vpbroadcastd_avx512vl();
  auVar18._4_4_ = _UNK_150b50ae4;
  auVar18._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar18._8_4_ = _UNK_150b50ae8;
  auVar18._12_4_ = _UNK_150b50aec;
  auVar18._16_4_ = _UNK_150b50af0;
  auVar18._20_4_ = _UNK_150b50af4;
  auVar18._24_4_ = _UNK_150b50af8;
  auVar18._28_4_ = _UNK_150b50afc;
  auVar26 = vpor_avx2(auVar26,auVar18);
  auVar24 = vpbroadcastd_avx512vl();
  uVar17 = vpcmpgtd_avx512vl(auVar24,auVar26);
  lVar20 = (longlong)((int)uVar19 << 2);
  piVar1 = (int *)((longlong)param_1 + lVar20);
  auVar28._4_4_ = (uint)((byte)(uVar17 >> 1) & 1) * piVar1[1];
  auVar28._0_4_ = (uint)((byte)uVar17 & 1) * *piVar1;
  auVar28._8_4_ = (uint)((byte)(uVar17 >> 2) & 1) * piVar1[2];
  auVar28._12_4_ = (uint)((byte)(uVar17 >> 3) & 1) * piVar1[3];
  auVar28._16_4_ = (uint)((byte)(uVar17 >> 4) & 1) * piVar1[4];
  auVar28._20_4_ = (uint)((byte)(uVar17 >> 5) & 1) * piVar1[5];
  auVar28._24_4_ = (uint)((byte)(uVar17 >> 6) & 1) * piVar1[6];
  auVar28._28_4_ = (uint)(byte)(uVar17 >> 7) * piVar1[7];
  auVar29._4_4_ = auVar29._0_4_;
  auVar29._8_4_ = auVar29._0_4_;
  auVar29._12_4_ = auVar29._0_4_;
  auVar29._16_4_ = auVar29._0_4_;
  auVar29._20_4_ = auVar29._0_4_;
  auVar29._24_4_ = auVar29._0_4_;
  auVar29._28_4_ = auVar29._0_4_;
  auVar26 = vsubps_avx(auVar28,auVar29);
  puVar3 = (uint *)(param_2 + lVar20);
  bVar6 = (bool)((byte)uVar17 & 1);
  bVar7 = (bool)((byte)(uVar17 >> 1) & 1);
  bVar8 = (bool)((byte)(uVar17 >> 2) & 1);
  bVar9 = (bool)((byte)(uVar17 >> 3) & 1);
  bVar10 = (bool)((byte)(uVar17 >> 4) & 1);
  bVar11 = (bool)((byte)(uVar17 >> 5) & 1);
  bVar12 = (bool)((byte)(uVar17 >> 6) & 1);
  bVar13 = SUB81(uVar17 >> 7,0);
  *puVar3 = (uint)bVar6 * (int)(fVar30 * auVar26._0_4_) | (uint)!bVar6 * *puVar3;
  puVar3[1] = (uint)bVar7 * (int)(fVar30 * auVar26._4_4_) | (uint)!bVar7 * puVar3[1];
  puVar3[2] = (uint)bVar8 * (int)(fVar30 * auVar26._8_4_) | (uint)!bVar8 * puVar3[2];
  puVar3[3] = (uint)bVar9 * (int)(fVar30 * auVar26._12_4_) | (uint)!bVar9 * puVar3[3];
  puVar3[4] = (uint)bVar10 * (int)(fVar30 * auVar26._16_4_) | (uint)!bVar10 * puVar3[4];
  puVar3[5] = (uint)bVar11 * (int)(fVar30 * auVar26._20_4_) | (uint)!bVar11 * puVar3[5];
  puVar3[6] = (uint)bVar12 * (int)(fVar30 * auVar26._24_4_) | (uint)!bVar12 * puVar3[6];
  puVar3[7] = (uint)bVar13 * (int)(fVar30 * auVar26._28_4_) | (uint)!bVar13 * puVar3[7];
  return;
}

// ArrayMultiply_avx512skx @ 140a192a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiply_avx512skx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  ulonglong uVar46;
  uint uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar43 = param_4;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar44 = 0;
    do {
      uVar46 = (ulonglong)uVar47;
      pfVar1 = (float *)(param_1 + uVar46);
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      fVar18 = pfVar1[4];
      fVar19 = pfVar1[5];
      fVar20 = pfVar1[6];
      fVar21 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar46);
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      fVar25 = pfVar2[4];
      fVar26 = pfVar2[5];
      fVar27 = pfVar2[6];
      fVar28 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar46);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar15 * fVar22;
      pfVar3[2] = fVar16 * fVar23;
      pfVar3[3] = fVar17 * fVar24;
      pfVar3[4] = fVar18 * fVar25;
      pfVar3[5] = fVar19 * fVar26;
      pfVar3[6] = fVar20 * fVar27;
      pfVar3[7] = fVar21 * fVar28;
      uVar44 = uVar44 + 8;
      uVar47 = uVar47 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar46 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar7 = (byte)uVar46;
  piVar5 = (int *)(param_2 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_3 + lVar45);
  bVar8 = (bool)((byte)(uVar46 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar46 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar46 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar46 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar46 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar46 >> 6) & 1);
  bVar14 = SUB81(uVar46 >> 7,0);
  *puVar6 = (uint)(bVar7 & 1) *
            (int)((float)((uint)(bVar7 & 1) * *piVar4) * (float)((uint)(bVar7 & 1) * *piVar5)) |
            (uint)!(bool)(bVar7 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 *
              (int)((float)((uint)((byte)(uVar46 >> 1) & 1) * iVar29) *
                   (float)((uint)((byte)(uVar46 >> 1) & 1) * iVar36)) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 *
              (int)((float)((uint)((byte)(uVar46 >> 2) & 1) * iVar30) *
                   (float)((uint)((byte)(uVar46 >> 2) & 1) * iVar37)) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 *
              (int)((float)((uint)((byte)(uVar46 >> 3) & 1) * iVar31) *
                   (float)((uint)((byte)(uVar46 >> 3) & 1) * iVar38)) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 *
              (int)((float)((uint)((byte)(uVar46 >> 4) & 1) * iVar32) *
                   (float)((uint)((byte)(uVar46 >> 4) & 1) * iVar39)) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 *
              (int)((float)((uint)((byte)(uVar46 >> 5) & 1) * iVar33) *
                   (float)((uint)((byte)(uVar46 >> 5) & 1) * iVar40)) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 *
              (int)((float)((uint)((byte)(uVar46 >> 6) & 1) * iVar34) *
                   (float)((uint)((byte)(uVar46 >> 6) & 1) * iVar41)) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 *
              (int)((float)((uint)(byte)(uVar46 >> 7) * iVar35) *
                   (float)((uint)(byte)(uVar46 >> 7) * iVar42)) | (uint)!bVar14 * puVar6[7];
  return;
}

// ArrayMultiplyInPlace_avx512skx @ 140a19330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyInPlace_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar43 = param_3;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar46 = 0;
    uVar44 = 0;
    do {
      uVar47 = (ulonglong)uVar46;
      pfVar1 = (float *)(param_1 + uVar47);
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      fVar18 = pfVar1[4];
      fVar19 = pfVar1[5];
      fVar20 = pfVar1[6];
      fVar21 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar47);
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      fVar25 = pfVar2[4];
      fVar26 = pfVar2[5];
      fVar27 = pfVar2[6];
      fVar28 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar47);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar15 * fVar22;
      pfVar3[2] = fVar16 * fVar23;
      pfVar3[3] = fVar17 * fVar24;
      pfVar3[4] = fVar18 * fVar25;
      pfVar3[5] = fVar19 * fVar26;
      pfVar3[6] = fVar20 * fVar27;
      pfVar3[7] = fVar21 * fVar28;
      uVar44 = uVar44 + 8;
      uVar46 = uVar46 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar47 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar7 = (byte)uVar47;
  piVar5 = (int *)(param_2 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_2 + lVar45);
  bVar8 = (bool)((byte)(uVar47 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar47 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar47 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar47 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar47 >> 6) & 1);
  bVar14 = SUB81(uVar47 >> 7,0);
  *puVar6 = (uint)(bVar7 & 1) *
            (int)((float)((uint)(bVar7 & 1) * *piVar4) * (float)((uint)(bVar7 & 1) * *piVar5)) |
            (uint)!(bool)(bVar7 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 *
              (int)((float)((uint)((byte)(uVar47 >> 1) & 1) * iVar29) *
                   (float)((uint)((byte)(uVar47 >> 1) & 1) * iVar36)) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 *
              (int)((float)((uint)((byte)(uVar47 >> 2) & 1) * iVar30) *
                   (float)((uint)((byte)(uVar47 >> 2) & 1) * iVar37)) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 *
              (int)((float)((uint)((byte)(uVar47 >> 3) & 1) * iVar31) *
                   (float)((uint)((byte)(uVar47 >> 3) & 1) * iVar38)) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 *
              (int)((float)((uint)((byte)(uVar47 >> 4) & 1) * iVar32) *
                   (float)((uint)((byte)(uVar47 >> 4) & 1) * iVar39)) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 *
              (int)((float)((uint)((byte)(uVar47 >> 5) & 1) * iVar33) *
                   (float)((uint)((byte)(uVar47 >> 5) & 1) * iVar40)) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 *
              (int)((float)((uint)((byte)(uVar47 >> 6) & 1) * iVar34) *
                   (float)((uint)((byte)(uVar47 >> 6) & 1) * iVar41)) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 *
              (int)((float)((uint)(byte)(uVar47 >> 7) * iVar35) *
                   (float)((uint)(byte)(uVar47 >> 7) * iVar42)) | (uint)!bVar14 * puVar6[7];
  return;
}

// ArrayComplexMultiplyInPlace_avx512skx @ 140a193c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyInPlace_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar13 = __real_3f800000bf800000._4_4_;
  fVar12 = (float)__real_3f800000bf800000;
  uVar7 = param_3 & 0xfffffff8;
  if (0 < (int)uVar7) {
    uVar1 = uVar7 - 1;
    if (uVar1 == 7) {
      uVar9 = 0;
    }
    else {
      uVar11 = (uVar1 >> 3) + 1 & 0xfffffffe;
      uVar10 = 0;
      do {
        uVar9 = (ulonglong)uVar10;
        auVar3 = *(undefined1 (*) [32])(param_2 + uVar9);
        auVar4 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
        auVar6 = vshufps_avx(auVar3,auVar3,0xb1);
        auVar5 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
        pfVar2 = (float *)(param_2 + uVar9);
        *pfVar2 = auVar3._0_4_ * auVar5._0_4_ + auVar4._0_4_ * auVar6._0_4_ * fVar12;
        pfVar2[1] = auVar3._4_4_ * auVar5._4_4_ + auVar4._4_4_ * auVar6._4_4_ * fVar13;
        pfVar2[2] = auVar3._8_4_ * auVar5._8_4_ + auVar4._8_4_ * auVar6._8_4_ * fVar12;
        pfVar2[3] = auVar3._12_4_ * auVar5._12_4_ + auVar4._12_4_ * auVar6._12_4_ * fVar13;
        pfVar2[4] = auVar3._16_4_ * auVar5._16_4_ + auVar4._16_4_ * auVar6._16_4_ * fVar12;
        pfVar2[5] = auVar3._20_4_ * auVar5._20_4_ + auVar4._20_4_ * auVar6._20_4_ * fVar13;
        pfVar2[6] = auVar3._24_4_ * auVar5._24_4_ + auVar4._24_4_ * auVar6._24_4_ * fVar12;
        pfVar2[7] = auVar3._28_4_ * auVar5._28_4_ + auVar4._28_4_ * auVar6._28_4_ * fVar13;
        auVar3 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar9);
        auVar4 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar9);
        auVar5 = vmovshdup_avx(auVar3);
        auVar6 = vshufps_avx(auVar4,auVar4,0xb1);
        auVar3 = vmovsldup_avx(auVar3);
        pfVar2 = (float *)(param_2 + 0x20 + uVar9);
        *pfVar2 = auVar4._0_4_ * auVar3._0_4_ + auVar5._0_4_ * auVar6._0_4_ * fVar12;
        pfVar2[1] = auVar4._4_4_ * auVar3._4_4_ + auVar5._4_4_ * auVar6._4_4_ * fVar13;
        pfVar2[2] = auVar4._8_4_ * auVar3._8_4_ + auVar5._8_4_ * auVar6._8_4_ * fVar12;
        pfVar2[3] = auVar4._12_4_ * auVar3._12_4_ + auVar5._12_4_ * auVar6._12_4_ * fVar13;
        pfVar2[4] = auVar4._16_4_ * auVar3._16_4_ + auVar5._16_4_ * auVar6._16_4_ * fVar12;
        pfVar2[5] = auVar4._20_4_ * auVar3._20_4_ + auVar5._20_4_ * auVar6._20_4_ * fVar13;
        pfVar2[6] = auVar4._24_4_ * auVar3._24_4_ + auVar5._24_4_ * auVar6._24_4_ * fVar12;
        pfVar2[7] = auVar4._28_4_ * auVar3._28_4_ + auVar5._28_4_ * auVar6._28_4_ * fVar13;
        uVar10 = uVar10 + 0x40;
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
      if ((uVar1 & 8) != 0) goto LAB_140a1949f;
      uVar9 = (ulonglong)uVar10;
    }
    auVar3 = *(undefined1 (*) [32])(param_2 + uVar9);
    auVar5 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
    auVar4 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
    auVar6 = vshufps_avx(auVar3,auVar3,0xb1);
    fVar12 = auVar4._4_4_ * auVar6._4_4_ * _UNK_150d5a824;
    fVar13 = auVar4._8_4_ * auVar6._8_4_ * _UNK_150d5a828;
    fVar14 = auVar4._12_4_ * auVar6._12_4_ * _UNK_150d5a82c;
    fVar15 = auVar4._16_4_ * auVar6._16_4_ * _UNK_150d5a830;
    fVar16 = auVar4._20_4_ * auVar6._20_4_ * _UNK_150d5a834;
    fVar17 = auVar4._24_4_ * auVar6._24_4_ * _UNK_150d5a838;
    fVar18 = auVar4._28_4_ * auVar6._28_4_ * _UNK_150d5a83c;
    pfVar2 = (float *)(param_2 + uVar9);
    *pfVar2 = auVar3._0_4_ * auVar5._0_4_ +
              auVar4._0_4_ * auVar6._0_4_ *
              ___ymm_3f800000bf8000003f800000bf8000003f800000bf8000003f800000bf800000;
    pfVar2[1] = auVar3._4_4_ * auVar5._4_4_ + fVar12;
    pfVar2[2] = auVar3._8_4_ * auVar5._8_4_ + fVar13;
    pfVar2[3] = auVar3._12_4_ * auVar5._12_4_ + fVar14;
    pfVar2[4] = auVar3._16_4_ * auVar5._16_4_ + fVar15;
    pfVar2[5] = auVar3._20_4_ * auVar5._20_4_ + fVar16;
    pfVar2[6] = auVar3._24_4_ * auVar5._24_4_ + fVar17;
    pfVar2[7] = auVar3._28_4_ * auVar5._28_4_ + fVar18;
  }
LAB_140a1949f:
  if ((int)uVar7 < (int)param_3) {
    lVar8 = (longlong)(int)uVar7;
    do {
      fVar12 = *(float *)(param_1 + lVar8 * 4);
      fVar13 = *(float *)(param_1 + 4 + lVar8 * 4);
      fVar14 = *(float *)(param_2 + lVar8 * 4);
      fVar15 = *(float *)(param_2 + 4 + lVar8 * 4);
      *(float *)(param_2 + lVar8 * 4) = fVar12 * fVar14 - fVar13 * fVar15;
      *(float *)(param_2 + 4 + lVar8 * 4) = fVar14 * fVar13 + fVar12 * fVar15;
      lVar8 = lVar8 + 2;
    } while (lVar8 < (int)param_3);
  }
  return;
}

// ArrayComplexMultiplyAdd_avx512skx @ 140a19500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyAdd_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float fVar1;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  uint *puVar12;
  byte bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auVar21 [32];
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = __real_3f800000bf800000._4_4_;
  fVar3 = (float)__real_3f800000bf800000;
  uVar29 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar29 = param_4;
  }
  if ((int)(uVar29 & 0xfffffff8) < 1) {
    uVar30 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar33 = 0;
    uVar30 = 0;
    do {
      uVar32 = (ulonglong)uVar33;
      auVar34 = *(undefined1 (*) [32])(param_2 + uVar32);
      auVar36 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar32));
      auVar35 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar32));
      auVar21 = vshufps_avx(auVar34,auVar34,0xb1);
      pfVar9 = (float *)(param_3 + uVar32);
      fVar5 = pfVar9[1];
      fVar6 = pfVar9[2];
      fVar7 = pfVar9[3];
      fVar8 = pfVar9[4];
      fVar1 = pfVar9[5];
      fVar2 = pfVar9[6];
      fVar37 = pfVar9[7];
      pfVar10 = (float *)(param_3 + uVar32);
      *pfVar10 = auVar34._0_4_ * auVar36._0_4_ + auVar35._0_4_ * auVar21._0_4_ * fVar3 + *pfVar9;
      pfVar10[1] = auVar34._4_4_ * auVar36._4_4_ + auVar35._4_4_ * auVar21._4_4_ * fVar4 + fVar5;
      pfVar10[2] = auVar34._8_4_ * auVar36._8_4_ + auVar35._8_4_ * auVar21._8_4_ * fVar3 + fVar6;
      pfVar10[3] = auVar34._12_4_ * auVar36._12_4_ + auVar35._12_4_ * auVar21._12_4_ * fVar4 + fVar7
      ;
      pfVar10[4] = auVar34._16_4_ * auVar36._16_4_ + auVar35._16_4_ * auVar21._16_4_ * fVar3 + fVar8
      ;
      pfVar10[5] = auVar34._20_4_ * auVar36._20_4_ + auVar35._20_4_ * auVar21._20_4_ * fVar4 + fVar1
      ;
      pfVar10[6] = auVar34._24_4_ * auVar36._24_4_ + auVar35._24_4_ * auVar21._24_4_ * fVar3 + fVar2
      ;
      pfVar10[7] = auVar34._28_4_ * auVar36._28_4_ + auVar35._28_4_ * auVar21._28_4_ * fVar4 +
                   fVar37;
      uVar30 = uVar30 + 8;
      uVar33 = uVar33 + 0x20;
    } while (uVar30 < (uVar29 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar30) {
      return;
    }
  }
  auVar34 = vpbroadcastd_avx512vl();
  auVar34 = vpor_avx2(auVar34,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar35 = vpbroadcastd_avx512vl();
  uVar32 = vpcmpgtd_avx512vl(auVar35,auVar34);
  lVar31 = (longlong)((int)uVar30 << 2);
  piVar11 = (int *)(param_1 + lVar31);
  bVar13 = (byte)uVar32;
  auVar34._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * piVar11[1];
  auVar34._0_4_ = (uint)(bVar13 & 1) * *piVar11;
  auVar34._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * piVar11[2];
  auVar34._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * piVar11[3];
  auVar34._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * piVar11[4];
  auVar34._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * piVar11[5];
  auVar34._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * piVar11[6];
  auVar34._28_4_ = (uint)(byte)(uVar32 >> 7) * piVar11[7];
  piVar11 = (int *)(param_2 + lVar31);
  fVar1 = (float)((uint)(bVar13 & 1) * *piVar11);
  fVar2 = (float)((uint)((byte)(uVar32 >> 1) & 1) * piVar11[1]);
  auVar36._4_4_ = fVar2;
  auVar36._0_4_ = fVar1;
  fVar3 = (float)((uint)((byte)(uVar32 >> 2) & 1) * piVar11[2]);
  auVar36._8_4_ = fVar3;
  fVar4 = (float)((uint)((byte)(uVar32 >> 3) & 1) * piVar11[3]);
  auVar36._12_4_ = fVar4;
  fVar5 = (float)((uint)((byte)(uVar32 >> 4) & 1) * piVar11[4]);
  auVar36._16_4_ = fVar5;
  fVar6 = (float)((uint)((byte)(uVar32 >> 5) & 1) * piVar11[5]);
  auVar36._20_4_ = fVar6;
  fVar7 = (float)((uint)((byte)(uVar32 >> 6) & 1) * piVar11[6]);
  auVar36._24_4_ = fVar7;
  fVar8 = (float)((uint)(byte)(uVar32 >> 7) * piVar11[7]);
  auVar36._28_4_ = fVar8;
  auVar35 = vmovsldup_avx(auVar34);
  auVar34 = vmovshdup_avx(auVar34);
  auVar36 = vshufps_avx(auVar36,auVar36,0xb1);
  fVar37 = auVar34._4_4_ * auVar36._4_4_ * _UNK_150d5a824;
  fVar38 = auVar34._8_4_ * auVar36._8_4_ * _UNK_150d5a828;
  fVar39 = auVar34._12_4_ * auVar36._12_4_ * _UNK_150d5a82c;
  fVar40 = auVar34._16_4_ * auVar36._16_4_ * _UNK_150d5a830;
  fVar41 = auVar34._20_4_ * auVar36._20_4_ * _UNK_150d5a834;
  fVar42 = auVar34._24_4_ * auVar36._24_4_ * _UNK_150d5a838;
  fVar43 = auVar34._28_4_ * auVar36._28_4_ * _UNK_150d5a83c;
  piVar11 = (int *)(param_3 + lVar31);
  iVar22 = piVar11[1];
  iVar23 = piVar11[2];
  iVar24 = piVar11[3];
  iVar25 = piVar11[4];
  iVar26 = piVar11[5];
  iVar27 = piVar11[6];
  iVar28 = piVar11[7];
  puVar12 = (uint *)(param_3 + lVar31);
  bVar14 = (bool)((byte)(uVar32 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar32 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar32 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar32 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar32 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar32 >> 6) & 1);
  bVar20 = SUB81(uVar32 >> 7,0);
  *puVar12 = (uint)(bVar13 & 1) *
             (int)((float)((uint)(bVar13 & 1) * *piVar11) +
                  fVar1 * auVar35._0_4_ +
                  auVar34._0_4_ * auVar36._0_4_ *
                  ___ymm_3f800000bf8000003f800000bf8000003f800000bf8000003f800000bf800000) |
             (uint)!(bool)(bVar13 & 1) * *puVar12;
  puVar12[1] = (uint)bVar14 *
               (int)((float)((uint)((byte)(uVar32 >> 1) & 1) * iVar22) +
                    fVar2 * auVar35._4_4_ + fVar37) | (uint)!bVar14 * puVar12[1];
  puVar12[2] = (uint)bVar15 *
               (int)((float)((uint)((byte)(uVar32 >> 2) & 1) * iVar23) +
                    fVar3 * auVar35._8_4_ + fVar38) | (uint)!bVar15 * puVar12[2];
  puVar12[3] = (uint)bVar16 *
               (int)((float)((uint)((byte)(uVar32 >> 3) & 1) * iVar24) +
                    fVar4 * auVar35._12_4_ + fVar39) | (uint)!bVar16 * puVar12[3];
  puVar12[4] = (uint)bVar17 *
               (int)((float)((uint)((byte)(uVar32 >> 4) & 1) * iVar25) +
                    fVar5 * auVar35._16_4_ + fVar40) | (uint)!bVar17 * puVar12[4];
  puVar12[5] = (uint)bVar18 *
               (int)((float)((uint)((byte)(uVar32 >> 5) & 1) * iVar26) +
                    fVar6 * auVar35._20_4_ + fVar41) | (uint)!bVar18 * puVar12[5];
  puVar12[6] = (uint)bVar19 *
               (int)((float)((uint)((byte)(uVar32 >> 6) & 1) * iVar27) +
                    fVar7 * auVar35._24_4_ + fVar42) | (uint)!bVar19 * puVar12[6];
  puVar12[7] = (uint)bVar20 *
               (int)((float)((uint)(byte)(uVar32 >> 7) * iVar28) + fVar8 * auVar35._28_4_ + fVar43)
               | (uint)!bVar20 * puVar12[7];
  return;
}

// ArrayMultiplyByConstant_avx512skx @ 140a195f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyByConstant_avx512skx(longlong param_1,float param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  
  uVar28 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar28 = param_4;
  }
  if ((int)(uVar28 & 0xfffffff8) < 1) {
    uVar29 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar31 = 0;
    uVar29 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      pfVar2 = (float *)(param_3 + (ulonglong)uVar31);
      *pfVar2 = param_2 * *pfVar1;
      pfVar2[1] = param_2 * fVar14;
      pfVar2[2] = param_2 * fVar15;
      pfVar2[3] = param_2 * fVar16;
      pfVar2[4] = param_2 * fVar17;
      pfVar2[5] = param_2 * fVar18;
      pfVar2[6] = param_2 * fVar19;
      pfVar2[7] = param_2 * fVar20;
      uVar29 = uVar29 + 8;
      uVar31 = uVar31 + 0x20;
    } while (uVar29 < (uVar28 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar29) {
      return;
    }
  }
  auVar32 = vpbroadcastd_avx512vl();
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar33 = vpbroadcastd_avx512vl();
  uVar13 = vpcmpgtd_avx512vl(auVar33,auVar32);
  lVar30 = (longlong)((int)uVar29 << 2);
  piVar3 = (int *)(param_1 + lVar30);
  iVar21 = piVar3[1];
  iVar22 = piVar3[2];
  iVar23 = piVar3[3];
  iVar24 = piVar3[4];
  iVar25 = piVar3[5];
  iVar26 = piVar3[6];
  iVar27 = piVar3[7];
  puVar4 = (uint *)(param_3 + lVar30);
  bVar5 = (bool)((byte)uVar13 & 1);
  bVar6 = (bool)((byte)(uVar13 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar13 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar13 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar13 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar13 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar13 >> 6) & 1);
  bVar12 = SUB81(uVar13 >> 7,0);
  *puVar4 = (uint)bVar5 * (int)(param_2 * (float)((uint)((byte)uVar13 & 1) * *piVar3)) |
            (uint)!bVar5 * *puVar4;
  puVar4[1] = (uint)bVar6 * (int)(param_2 * (float)((uint)((byte)(uVar13 >> 1) & 1) * iVar21)) |
              (uint)!bVar6 * puVar4[1];
  puVar4[2] = (uint)bVar7 * (int)(param_2 * (float)((uint)((byte)(uVar13 >> 2) & 1) * iVar22)) |
              (uint)!bVar7 * puVar4[2];
  puVar4[3] = (uint)bVar8 * (int)(param_2 * (float)((uint)((byte)(uVar13 >> 3) & 1) * iVar23)) |
              (uint)!bVar8 * puVar4[3];
  puVar4[4] = (uint)bVar9 * (int)(param_2 * (float)((uint)((byte)(uVar13 >> 4) & 1) * iVar24)) |
              (uint)!bVar9 * puVar4[4];
  puVar4[5] = (uint)bVar10 * (int)(param_2 * (float)((uint)((byte)(uVar13 >> 5) & 1) * iVar25)) |
              (uint)!bVar10 * puVar4[5];
  puVar4[6] = (uint)bVar11 * (int)(param_2 * (float)((uint)((byte)(uVar13 >> 6) & 1) * iVar26)) |
              (uint)!bVar11 * puVar4[6];
  puVar4[7] = (uint)bVar12 * (int)(param_2 * (float)((uint)(byte)(uVar13 >> 7) * iVar27)) |
              (uint)!bVar12 * puVar4[7];
  return;
}

// ArrayMultiplyByConstantInPlace_avx512skx @ 140a19680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyByConstantInPlace_avx512skx(longlong param_1,uint param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  
  uVar28 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar28 = param_2;
  }
  if ((int)(uVar28 & 0xfffffff8) < 1) {
    uVar29 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar31 = 0;
    uVar29 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar31);
      *pfVar2 = param_3 * *pfVar1;
      pfVar2[1] = param_3 * fVar14;
      pfVar2[2] = param_3 * fVar15;
      pfVar2[3] = param_3 * fVar16;
      pfVar2[4] = param_3 * fVar17;
      pfVar2[5] = param_3 * fVar18;
      pfVar2[6] = param_3 * fVar19;
      pfVar2[7] = param_3 * fVar20;
      uVar29 = uVar29 + 8;
      uVar31 = uVar31 + 0x20;
    } while (uVar29 < (uVar28 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar29) {
      return;
    }
  }
  auVar32 = vpbroadcastd_avx512vl();
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar33 = vpbroadcastd_avx512vl();
  uVar13 = vpcmpgtd_avx512vl(auVar33,auVar32);
  lVar30 = (longlong)((int)uVar29 << 2);
  piVar3 = (int *)(param_1 + lVar30);
  iVar21 = piVar3[1];
  iVar22 = piVar3[2];
  iVar23 = piVar3[3];
  iVar24 = piVar3[4];
  iVar25 = piVar3[5];
  iVar26 = piVar3[6];
  iVar27 = piVar3[7];
  puVar4 = (uint *)(param_1 + lVar30);
  bVar5 = (bool)((byte)uVar13 & 1);
  bVar6 = (bool)((byte)(uVar13 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar13 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar13 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar13 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar13 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar13 >> 6) & 1);
  bVar12 = SUB81(uVar13 >> 7,0);
  *puVar4 = (uint)bVar5 * (int)(param_3 * (float)((uint)((byte)uVar13 & 1) * *piVar3)) |
            (uint)!bVar5 * *puVar4;
  puVar4[1] = (uint)bVar6 * (int)(param_3 * (float)((uint)((byte)(uVar13 >> 1) & 1) * iVar21)) |
              (uint)!bVar6 * puVar4[1];
  puVar4[2] = (uint)bVar7 * (int)(param_3 * (float)((uint)((byte)(uVar13 >> 2) & 1) * iVar22)) |
              (uint)!bVar7 * puVar4[2];
  puVar4[3] = (uint)bVar8 * (int)(param_3 * (float)((uint)((byte)(uVar13 >> 3) & 1) * iVar23)) |
              (uint)!bVar8 * puVar4[3];
  puVar4[4] = (uint)bVar9 * (int)(param_3 * (float)((uint)((byte)(uVar13 >> 4) & 1) * iVar24)) |
              (uint)!bVar9 * puVar4[4];
  puVar4[5] = (uint)bVar10 * (int)(param_3 * (float)((uint)((byte)(uVar13 >> 5) & 1) * iVar25)) |
              (uint)!bVar10 * puVar4[5];
  puVar4[6] = (uint)bVar11 * (int)(param_3 * (float)((uint)((byte)(uVar13 >> 6) & 1) * iVar26)) |
              (uint)!bVar11 * puVar4[6];
  puVar4[7] = (uint)bVar12 * (int)(param_3 * (float)((uint)(byte)(uVar13 >> 7) * iVar27)) |
              (uint)!bVar12 * puVar4[7];
  return;
}

// ArrayAddInPlace_avx512skx @ 140a19710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAddInPlace_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar43 = param_3;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar46 = 0;
    uVar44 = 0;
    do {
      uVar47 = (ulonglong)uVar46;
      pfVar1 = (float *)(param_1 + uVar47);
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      fVar18 = pfVar1[4];
      fVar19 = pfVar1[5];
      fVar20 = pfVar1[6];
      fVar21 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar47);
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      fVar25 = pfVar2[4];
      fVar26 = pfVar2[5];
      fVar27 = pfVar2[6];
      fVar28 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar47);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar15 + fVar22;
      pfVar3[2] = fVar16 + fVar23;
      pfVar3[3] = fVar17 + fVar24;
      pfVar3[4] = fVar18 + fVar25;
      pfVar3[5] = fVar19 + fVar26;
      pfVar3[6] = fVar20 + fVar27;
      pfVar3[7] = fVar21 + fVar28;
      uVar44 = uVar44 + 8;
      uVar46 = uVar46 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar47 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar7 = (byte)uVar47;
  piVar5 = (int *)(param_2 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_2 + lVar45);
  bVar8 = (bool)((byte)(uVar47 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar47 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar47 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar47 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar47 >> 6) & 1);
  bVar14 = SUB81(uVar47 >> 7,0);
  *puVar6 = (uint)(bVar7 & 1) *
            (int)((float)((uint)(bVar7 & 1) * *piVar4) + (float)((uint)(bVar7 & 1) * *piVar5)) |
            (uint)!(bool)(bVar7 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 *
              (int)((float)((uint)((byte)(uVar47 >> 1) & 1) * iVar29) +
                   (float)((uint)((byte)(uVar47 >> 1) & 1) * iVar36)) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 *
              (int)((float)((uint)((byte)(uVar47 >> 2) & 1) * iVar30) +
                   (float)((uint)((byte)(uVar47 >> 2) & 1) * iVar37)) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 *
              (int)((float)((uint)((byte)(uVar47 >> 3) & 1) * iVar31) +
                   (float)((uint)((byte)(uVar47 >> 3) & 1) * iVar38)) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 *
              (int)((float)((uint)((byte)(uVar47 >> 4) & 1) * iVar32) +
                   (float)((uint)((byte)(uVar47 >> 4) & 1) * iVar39)) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 *
              (int)((float)((uint)((byte)(uVar47 >> 5) & 1) * iVar33) +
                   (float)((uint)((byte)(uVar47 >> 5) & 1) * iVar40)) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 *
              (int)((float)((uint)((byte)(uVar47 >> 6) & 1) * iVar34) +
                   (float)((uint)((byte)(uVar47 >> 6) & 1) * iVar41)) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 *
              (int)((float)((uint)(byte)(uVar47 >> 7) * iVar35) +
                   (float)((uint)(byte)(uVar47 >> 7) * iVar42)) | (uint)!bVar14 * puVar6[7];
  return;
}

// ArrayAddConstantInplace_avx512skx @ 140a197a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAddConstantInplace_avx512skx(longlong param_1,uint param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  
  uVar28 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar28 = param_2;
  }
  if ((int)(uVar28 & 0xfffffff8) < 1) {
    uVar29 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar31 = 0;
    uVar29 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar31);
      *pfVar2 = param_3 + *pfVar1;
      pfVar2[1] = param_3 + fVar14;
      pfVar2[2] = param_3 + fVar15;
      pfVar2[3] = param_3 + fVar16;
      pfVar2[4] = param_3 + fVar17;
      pfVar2[5] = param_3 + fVar18;
      pfVar2[6] = param_3 + fVar19;
      pfVar2[7] = param_3 + fVar20;
      uVar29 = uVar29 + 8;
      uVar31 = uVar31 + 0x20;
    } while (uVar29 < (uVar28 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar29) {
      return;
    }
  }
  auVar32 = vpbroadcastd_avx512vl();
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar33 = vpbroadcastd_avx512vl();
  uVar13 = vpcmpgtd_avx512vl(auVar33,auVar32);
  lVar30 = (longlong)((int)uVar29 << 2);
  piVar3 = (int *)(param_1 + lVar30);
  iVar21 = piVar3[1];
  iVar22 = piVar3[2];
  iVar23 = piVar3[3];
  iVar24 = piVar3[4];
  iVar25 = piVar3[5];
  iVar26 = piVar3[6];
  iVar27 = piVar3[7];
  puVar4 = (uint *)(param_1 + lVar30);
  bVar5 = (bool)((byte)uVar13 & 1);
  bVar6 = (bool)((byte)(uVar13 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar13 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar13 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar13 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar13 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar13 >> 6) & 1);
  bVar12 = SUB81(uVar13 >> 7,0);
  *puVar4 = (uint)bVar5 * (int)(param_3 + (float)((uint)((byte)uVar13 & 1) * *piVar3)) |
            (uint)!bVar5 * *puVar4;
  puVar4[1] = (uint)bVar6 * (int)(param_3 + (float)((uint)((byte)(uVar13 >> 1) & 1) * iVar21)) |
              (uint)!bVar6 * puVar4[1];
  puVar4[2] = (uint)bVar7 * (int)(param_3 + (float)((uint)((byte)(uVar13 >> 2) & 1) * iVar22)) |
              (uint)!bVar7 * puVar4[2];
  puVar4[3] = (uint)bVar8 * (int)(param_3 + (float)((uint)((byte)(uVar13 >> 3) & 1) * iVar23)) |
              (uint)!bVar8 * puVar4[3];
  puVar4[4] = (uint)bVar9 * (int)(param_3 + (float)((uint)((byte)(uVar13 >> 4) & 1) * iVar24)) |
              (uint)!bVar9 * puVar4[4];
  puVar4[5] = (uint)bVar10 * (int)(param_3 + (float)((uint)((byte)(uVar13 >> 5) & 1) * iVar25)) |
              (uint)!bVar10 * puVar4[5];
  puVar4[6] = (uint)bVar11 * (int)(param_3 + (float)((uint)((byte)(uVar13 >> 6) & 1) * iVar26)) |
              (uint)!bVar11 * puVar4[6];
  puVar4[7] = (uint)bVar12 * (int)(param_3 + (float)((uint)(byte)(uVar13 >> 7) * iVar27)) |
              (uint)!bVar12 * puVar4[7];
  return;
}

// ArrayMultiplyAddInPlace_avx512skx @ 140a19830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyAddInPlace_avx512skx(longlong param_1,float param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar43 = param_4;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar46 = 0;
    uVar44 = 0;
    do {
      uVar47 = (ulonglong)uVar46;
      pfVar1 = (float *)(param_1 + uVar47);
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar24 = pfVar1[3];
      fVar25 = pfVar1[4];
      fVar26 = pfVar1[5];
      fVar27 = pfVar1[6];
      fVar28 = pfVar1[7];
      pfVar2 = (float *)(param_3 + uVar47);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      fVar10 = pfVar2[4];
      fVar11 = pfVar2[5];
      fVar12 = pfVar2[6];
      fVar13 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar47);
      *pfVar3 = param_2 * *pfVar1 + *pfVar2;
      pfVar3[1] = param_2 * fVar22 + fVar7;
      pfVar3[2] = param_2 * fVar23 + fVar8;
      pfVar3[3] = param_2 * fVar24 + fVar9;
      pfVar3[4] = param_2 * fVar25 + fVar10;
      pfVar3[5] = param_2 * fVar26 + fVar11;
      pfVar3[6] = param_2 * fVar27 + fVar12;
      pfVar3[7] = param_2 * fVar28 + fVar13;
      uVar44 = uVar44 + 8;
      uVar46 = uVar46 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar47 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar14 = (byte)uVar47;
  piVar5 = (int *)(param_3 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_3 + lVar45);
  bVar15 = (bool)((byte)(uVar47 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar47 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar47 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar47 >> 4) & 1);
  bVar19 = (bool)((byte)(uVar47 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar47 >> 6) & 1);
  bVar21 = SUB81(uVar47 >> 7,0);
  *puVar6 = (uint)(bVar14 & 1) *
            (int)((float)((uint)(bVar14 & 1) * *piVar4) * param_2 +
                 (float)((uint)(bVar14 & 1) * *piVar5)) | (uint)!(bool)(bVar14 & 1) * *puVar6;
  puVar6[1] = (uint)bVar15 *
              (int)((float)((uint)((byte)(uVar47 >> 1) & 1) * iVar29) * param_2 +
                   (float)((uint)((byte)(uVar47 >> 1) & 1) * iVar36)) | (uint)!bVar15 * puVar6[1];
  puVar6[2] = (uint)bVar16 *
              (int)((float)((uint)((byte)(uVar47 >> 2) & 1) * iVar30) * param_2 +
                   (float)((uint)((byte)(uVar47 >> 2) & 1) * iVar37)) | (uint)!bVar16 * puVar6[2];
  puVar6[3] = (uint)bVar17 *
              (int)((float)((uint)((byte)(uVar47 >> 3) & 1) * iVar31) * param_2 +
                   (float)((uint)((byte)(uVar47 >> 3) & 1) * iVar38)) | (uint)!bVar17 * puVar6[3];
  puVar6[4] = (uint)bVar18 *
              (int)((float)((uint)((byte)(uVar47 >> 4) & 1) * iVar32) * param_2 +
                   (float)((uint)((byte)(uVar47 >> 4) & 1) * iVar39)) | (uint)!bVar18 * puVar6[4];
  puVar6[5] = (uint)bVar19 *
              (int)((float)((uint)((byte)(uVar47 >> 5) & 1) * iVar33) * param_2 +
                   (float)((uint)((byte)(uVar47 >> 5) & 1) * iVar40)) | (uint)!bVar19 * puVar6[5];
  puVar6[6] = (uint)bVar20 *
              (int)((float)((uint)((byte)(uVar47 >> 6) & 1) * iVar34) * param_2 +
                   (float)((uint)((byte)(uVar47 >> 6) & 1) * iVar41)) | (uint)!bVar20 * puVar6[6];
  puVar6[7] = (uint)bVar21 *
              (int)((float)((uint)(byte)(uVar47 >> 7) * iVar35) * param_2 +
                   (float)((uint)(byte)(uVar47 >> 7) * iVar42)) | (uint)!bVar21 * puVar6[7];
  return;
}

// ArrayLerpAddInPlace_avx512skx @ 140a198d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpAddInPlace_avx512skx
               (longlong param_1,float param_2,float param_3,longlong param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar35 [32];
  
  auVar32 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar34._0_4_ = (float)(int)(param_5 - 1);
  auVar34._4_12_ = in_ZMM0._4_12_;
  auVar34 = vmaxss_avx(auVar34,ZEXT416(__real_3f800000));
  fVar33 = (param_3 - param_2) / auVar34._0_4_;
  uVar27 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar27 = param_5;
  }
  if ((int)(uVar27 & 0xfffffff8) < 1) {
    uVar28 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar29 = 0;
    uVar28 = 0;
    do {
      auVar31 = vpbroadcastd_avx512vl();
      auVar31 = vpor_avx2(auVar31,auVar32);
      auVar31 = vcvtdq2ps_avx(auVar31);
      auVar35._0_4_ = fVar33 * auVar31._0_4_ + param_2;
      auVar35._4_4_ = fVar33 * auVar31._4_4_ + param_2;
      auVar35._8_4_ = fVar33 * auVar31._8_4_ + param_2;
      auVar35._12_4_ = fVar33 * auVar31._12_4_ + param_2;
      auVar35._16_4_ = fVar33 * auVar31._16_4_ + param_2;
      auVar35._20_4_ = fVar33 * auVar31._20_4_ + param_2;
      auVar35._24_4_ = fVar33 * auVar31._24_4_ + param_2;
      auVar35._28_4_ = fVar33 * auVar31._28_4_ + param_2;
      uVar30 = (ulonglong)uVar29;
      auVar31 = vfmadd213ps_avx512vl
                          (*(undefined1 (*) [32])(param_1 + uVar30),auVar35,
                           *(undefined1 (*) [32])(param_4 + uVar30));
      *(undefined1 (*) [32])(param_4 + uVar30) = auVar31;
      uVar28 = uVar28 + 8;
      uVar29 = uVar29 + 0x20;
    } while (uVar28 < (uVar27 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar28) {
      return;
    }
  }
  auVar32 = vpbroadcastd_avx512vl();
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar31 = vpbroadcastd_avx512vl();
  uVar30 = vpcmpgtd_avx512vl(auVar31,auVar32);
  auVar32 = vcvtdq2ps_avx(auVar32);
  lVar26 = (longlong)((int)uVar28 << 2);
  piVar1 = (int *)(param_1 + lVar26);
  iVar12 = piVar1[1];
  iVar13 = piVar1[2];
  iVar14 = piVar1[3];
  iVar15 = piVar1[4];
  iVar16 = piVar1[5];
  iVar17 = piVar1[6];
  iVar18 = piVar1[7];
  bVar4 = (byte)uVar30;
  piVar2 = (int *)(param_4 + lVar26);
  iVar19 = piVar2[1];
  iVar20 = piVar2[2];
  iVar21 = piVar2[3];
  iVar22 = piVar2[4];
  iVar23 = piVar2[5];
  iVar24 = piVar2[6];
  iVar25 = piVar2[7];
  puVar3 = (uint *)(param_4 + lVar26);
  bVar5 = (bool)((byte)(uVar30 >> 1) & 1);
  bVar6 = (bool)((byte)(uVar30 >> 2) & 1);
  bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
  bVar8 = (bool)((byte)(uVar30 >> 4) & 1);
  bVar9 = (bool)((byte)(uVar30 >> 5) & 1);
  bVar10 = (bool)((byte)(uVar30 >> 6) & 1);
  bVar11 = SUB81(uVar30 >> 7,0);
  *puVar3 = (uint)(bVar4 & 1) *
            (int)((auVar32._0_4_ * fVar33 + param_2) * (float)((uint)(bVar4 & 1) * *piVar1) +
                 (float)((uint)(bVar4 & 1) * *piVar2)) | (uint)!(bool)(bVar4 & 1) * *puVar3;
  puVar3[1] = (uint)bVar5 *
              (int)((auVar32._4_4_ * fVar33 + param_2) *
                    (float)((uint)((byte)(uVar30 >> 1) & 1) * iVar12) +
                   (float)((uint)((byte)(uVar30 >> 1) & 1) * iVar19)) | (uint)!bVar5 * puVar3[1];
  puVar3[2] = (uint)bVar6 *
              (int)((auVar32._8_4_ * fVar33 + param_2) *
                    (float)((uint)((byte)(uVar30 >> 2) & 1) * iVar13) +
                   (float)((uint)((byte)(uVar30 >> 2) & 1) * iVar20)) | (uint)!bVar6 * puVar3[2];
  puVar3[3] = (uint)bVar7 *
              (int)((auVar32._12_4_ * fVar33 + param_2) *
                    (float)((uint)((byte)(uVar30 >> 3) & 1) * iVar14) +
                   (float)((uint)((byte)(uVar30 >> 3) & 1) * iVar21)) | (uint)!bVar7 * puVar3[3];
  puVar3[4] = (uint)bVar8 *
              (int)((auVar32._16_4_ * fVar33 + param_2) *
                    (float)((uint)((byte)(uVar30 >> 4) & 1) * iVar15) +
                   (float)((uint)((byte)(uVar30 >> 4) & 1) * iVar22)) | (uint)!bVar8 * puVar3[4];
  puVar3[5] = (uint)bVar9 *
              (int)((auVar32._20_4_ * fVar33 + param_2) *
                    (float)((uint)((byte)(uVar30 >> 5) & 1) * iVar16) +
                   (float)((uint)((byte)(uVar30 >> 5) & 1) * iVar23)) | (uint)!bVar9 * puVar3[5];
  puVar3[6] = (uint)bVar10 *
              (int)((auVar32._24_4_ * fVar33 + param_2) *
                    (float)((uint)((byte)(uVar30 >> 6) & 1) * iVar17) +
                   (float)((uint)((byte)(uVar30 >> 6) & 1) * iVar24)) | (uint)!bVar10 * puVar3[6];
  puVar3[7] = (uint)bVar11 *
              (int)((auVar32._28_4_ * fVar33 + param_2) *
                    (float)((uint)(byte)(uVar30 >> 7) * iVar18) +
                   (float)((uint)(byte)(uVar30 >> 7) * iVar25)) | (uint)!bVar11 * puVar3[7];
  return;
}

// ArraySubtract_avx512skx @ 140a199c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtract_avx512skx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar11 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar12 = 0;
    do {
      uVar14 = (ulonglong)uVar15;
      auVar16 = vsubps_avx(*(undefined1 (*) [32])(param_1 + uVar14),
                           *(undefined1 (*) [32])(param_2 + uVar14));
      *(undefined1 (*) [32])(param_3 + uVar14) = auVar16;
      uVar12 = uVar12 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar12 < (uVar11 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar12) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar14 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar13 = (longlong)((int)uVar12 << 2);
  piVar1 = (int *)(param_1 + lVar13);
  bVar3 = (byte)uVar14;
  auVar16._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar16._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar16._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar16._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar16._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar16._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar16._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar16._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  piVar1 = (int *)(param_2 + lVar13);
  auVar17._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  auVar16 = vsubps_avx(auVar16,auVar17);
  puVar2 = (uint *)(param_3 + lVar13);
  bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar14 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar14 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar14 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar14 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar14 >> 6) & 1);
  bVar10 = SUB81(uVar14 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArraySubtractInPlace1_avx512skx @ 140a19a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractInPlace1_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar11 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar11 = param_3;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar12 = 0;
    do {
      uVar15 = (ulonglong)uVar14;
      auVar16 = vsubps_avx(*(undefined1 (*) [32])(param_1 + uVar15),
                           *(undefined1 (*) [32])(param_2 + uVar15));
      *(undefined1 (*) [32])(param_2 + uVar15) = auVar16;
      uVar12 = uVar12 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar12 < (uVar11 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar12) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar15 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar13 = (longlong)((int)uVar12 << 2);
  piVar1 = (int *)(param_1 + lVar13);
  bVar3 = (byte)uVar15;
  auVar16._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
  auVar16._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar16._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
  auVar16._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
  auVar16._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
  auVar16._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
  auVar16._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
  auVar16._28_4_ = (uint)(byte)(uVar15 >> 7) * piVar1[7];
  piVar1 = (int *)(param_2 + lVar13);
  auVar17._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar15 >> 7) * piVar1[7];
  auVar16 = vsubps_avx(auVar16,auVar17);
  puVar2 = (uint *)(param_2 + lVar13);
  bVar4 = (bool)((byte)(uVar15 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar15 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar15 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar15 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar15 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar15 >> 6) & 1);
  bVar10 = SUB81(uVar15 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArraySubtractInPlace2_avx512skx @ 140a19ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractInPlace2_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar11 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar11 = param_3;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar12 = 0;
    do {
      uVar15 = (ulonglong)uVar14;
      auVar16 = vsubps_avx(*(undefined1 (*) [32])(param_1 + uVar15),
                           *(undefined1 (*) [32])(param_2 + uVar15));
      *(undefined1 (*) [32])(param_1 + uVar15) = auVar16;
      uVar12 = uVar12 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar12 < (uVar11 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar12) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar15 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar13 = (longlong)((int)uVar12 << 2);
  piVar1 = (int *)(param_1 + lVar13);
  bVar3 = (byte)uVar15;
  auVar16._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
  auVar16._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar16._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
  auVar16._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
  auVar16._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
  auVar16._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
  auVar16._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
  auVar16._28_4_ = (uint)(byte)(uVar15 >> 7) * piVar1[7];
  piVar1 = (int *)(param_2 + lVar13);
  auVar17._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar15 >> 7) * piVar1[7];
  auVar16 = vsubps_avx(auVar16,auVar17);
  puVar2 = (uint *)(param_1 + lVar13);
  bVar4 = (bool)((byte)(uVar15 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar15 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar15 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar15 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar15 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar15 >> 6) & 1);
  bVar10 = SUB81(uVar15 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArraySubtractByConstantInPlace_avx512skx @ 140a19b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractByConstantInPlace_avx512skx(longlong param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  uVar12 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar16._4_4_ = param_2;
    auVar16._0_4_ = param_2;
    auVar16._8_4_ = param_2;
    auVar16._12_4_ = param_2;
    auVar16._16_4_ = param_2;
    auVar16._20_4_ = param_2;
    auVar16._24_4_ = param_2;
    auVar16._28_4_ = param_2;
    uVar15 = 0;
    uVar13 = 0;
    do {
      auVar17 = vsubps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15),auVar16);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15) = auVar17;
      uVar13 = uVar13 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar13) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar17,auVar16);
  auVar18._4_4_ = param_2;
  auVar18._0_4_ = param_2;
  auVar18._8_4_ = param_2;
  auVar18._12_4_ = param_2;
  auVar18._16_4_ = param_2;
  auVar18._20_4_ = param_2;
  auVar18._24_4_ = param_2;
  auVar18._28_4_ = param_2;
  lVar14 = (longlong)((int)uVar13 << 2);
  piVar1 = (int *)(param_1 + lVar14);
  auVar17._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar17._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar17._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar17._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar17._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar17._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar17._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar17._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar16 = vsubps_avx(auVar17,auVar18);
  puVar2 = (uint *)(param_1 + lVar14);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar16._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArraySquare_avx512skx @ 140a19c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySquare_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  float fVar1;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar22 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar22 = param_3;
  }
  if ((int)(uVar22 & 0xfffffff8) < 1) {
    uVar23 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar25 = 0;
    uVar23 = 0;
    do {
      pfVar9 = (float *)(param_1 + (ulonglong)uVar25);
      fVar1 = pfVar9[1];
      fVar2 = pfVar9[2];
      fVar3 = pfVar9[3];
      fVar4 = pfVar9[4];
      fVar5 = pfVar9[5];
      fVar6 = pfVar9[6];
      fVar7 = pfVar9[7];
      pfVar10 = (float *)(param_2 + (ulonglong)uVar25);
      *pfVar10 = *pfVar9 * *pfVar9;
      pfVar10[1] = fVar1 * fVar1;
      pfVar10[2] = fVar2 * fVar2;
      pfVar10[3] = fVar3 * fVar3;
      pfVar10[4] = fVar4 * fVar4;
      pfVar10[5] = fVar5 * fVar5;
      pfVar10[6] = fVar6 * fVar6;
      pfVar10[7] = fVar7 * fVar7;
      uVar23 = uVar23 + 8;
      uVar25 = uVar25 + 0x20;
    } while (uVar23 < (uVar22 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar23) {
      return;
    }
  }
  auVar26 = vpbroadcastd_avx512vl();
  auVar26 = vpor_avx2(auVar26,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar27 = vpbroadcastd_avx512vl();
  uVar21 = vpcmpgtd_avx512vl(auVar27,auVar26);
  lVar24 = (longlong)((int)uVar23 << 2);
  piVar11 = (int *)(param_1 + lVar24);
  fVar1 = (float)((uint)((byte)uVar21 & 1) * *piVar11);
  fVar2 = (float)((uint)((byte)(uVar21 >> 1) & 1) * piVar11[1]);
  fVar3 = (float)((uint)((byte)(uVar21 >> 2) & 1) * piVar11[2]);
  fVar4 = (float)((uint)((byte)(uVar21 >> 3) & 1) * piVar11[3]);
  fVar5 = (float)((uint)((byte)(uVar21 >> 4) & 1) * piVar11[4]);
  fVar6 = (float)((uint)((byte)(uVar21 >> 5) & 1) * piVar11[5]);
  fVar7 = (float)((uint)((byte)(uVar21 >> 6) & 1) * piVar11[6]);
  fVar8 = (float)((uint)(byte)(uVar21 >> 7) * piVar11[7]);
  puVar12 = (uint *)(param_2 + lVar24);
  bVar13 = (bool)((byte)uVar21 & 1);
  bVar14 = (bool)((byte)(uVar21 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar21 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar21 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar21 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar21 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar21 >> 6) & 1);
  bVar20 = SUB81(uVar21 >> 7,0);
  *puVar12 = (uint)bVar13 * (int)(fVar1 * fVar1) | (uint)!bVar13 * *puVar12;
  puVar12[1] = (uint)bVar14 * (int)(fVar2 * fVar2) | (uint)!bVar14 * puVar12[1];
  puVar12[2] = (uint)bVar15 * (int)(fVar3 * fVar3) | (uint)!bVar15 * puVar12[2];
  puVar12[3] = (uint)bVar16 * (int)(fVar4 * fVar4) | (uint)!bVar16 * puVar12[3];
  puVar12[4] = (uint)bVar17 * (int)(fVar5 * fVar5) | (uint)!bVar17 * puVar12[4];
  puVar12[5] = (uint)bVar18 * (int)(fVar6 * fVar6) | (uint)!bVar18 * puVar12[5];
  puVar12[6] = (uint)bVar19 * (int)(fVar7 * fVar7) | (uint)!bVar19 * puVar12[6];
  puVar12[7] = (uint)bVar20 * (int)(fVar8 * fVar8) | (uint)!bVar20 * puVar12[7];
  return;
}

// ArraySquareInPlace_avx512skx @ 140a19c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySquareInPlace_avx512skx(longlong param_1,uint param_2)

{
  float fVar1;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  uint *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar22 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar22 = param_2;
  }
  if ((int)(uVar22 & 0xfffffff8) < 1) {
    uVar23 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar25 = 0;
    uVar23 = 0;
    do {
      pfVar9 = (float *)(param_1 + (ulonglong)uVar25);
      fVar1 = pfVar9[1];
      fVar2 = pfVar9[2];
      fVar3 = pfVar9[3];
      fVar4 = pfVar9[4];
      fVar5 = pfVar9[5];
      fVar6 = pfVar9[6];
      fVar7 = pfVar9[7];
      pfVar10 = (float *)(param_1 + (ulonglong)uVar25);
      *pfVar10 = *pfVar9 * *pfVar9;
      pfVar10[1] = fVar1 * fVar1;
      pfVar10[2] = fVar2 * fVar2;
      pfVar10[3] = fVar3 * fVar3;
      pfVar10[4] = fVar4 * fVar4;
      pfVar10[5] = fVar5 * fVar5;
      pfVar10[6] = fVar6 * fVar6;
      pfVar10[7] = fVar7 * fVar7;
      uVar23 = uVar23 + 8;
      uVar25 = uVar25 + 0x20;
    } while (uVar23 < (uVar22 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar23) {
      return;
    }
  }
  auVar26 = vpbroadcastd_avx512vl();
  auVar26 = vpor_avx2(auVar26,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar27 = vpbroadcastd_avx512vl();
  uVar21 = vpcmpgtd_avx512vl(auVar27,auVar26);
  lVar24 = (longlong)((int)uVar23 << 2);
  piVar11 = (int *)(param_1 + lVar24);
  fVar1 = (float)((uint)((byte)uVar21 & 1) * *piVar11);
  fVar2 = (float)((uint)((byte)(uVar21 >> 1) & 1) * piVar11[1]);
  fVar3 = (float)((uint)((byte)(uVar21 >> 2) & 1) * piVar11[2]);
  fVar4 = (float)((uint)((byte)(uVar21 >> 3) & 1) * piVar11[3]);
  fVar5 = (float)((uint)((byte)(uVar21 >> 4) & 1) * piVar11[4]);
  fVar6 = (float)((uint)((byte)(uVar21 >> 5) & 1) * piVar11[5]);
  fVar7 = (float)((uint)((byte)(uVar21 >> 6) & 1) * piVar11[6]);
  fVar8 = (float)((uint)(byte)(uVar21 >> 7) * piVar11[7]);
  puVar12 = (uint *)(param_1 + lVar24);
  bVar13 = (bool)((byte)uVar21 & 1);
  bVar14 = (bool)((byte)(uVar21 >> 1) & 1);
  bVar15 = (bool)((byte)(uVar21 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar21 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar21 >> 4) & 1);
  bVar18 = (bool)((byte)(uVar21 >> 5) & 1);
  bVar19 = (bool)((byte)(uVar21 >> 6) & 1);
  bVar20 = SUB81(uVar21 >> 7,0);
  *puVar12 = (uint)bVar13 * (int)(fVar1 * fVar1) | (uint)!bVar13 * *puVar12;
  puVar12[1] = (uint)bVar14 * (int)(fVar2 * fVar2) | (uint)!bVar14 * puVar12[1];
  puVar12[2] = (uint)bVar15 * (int)(fVar3 * fVar3) | (uint)!bVar15 * puVar12[2];
  puVar12[3] = (uint)bVar16 * (int)(fVar4 * fVar4) | (uint)!bVar16 * puVar12[3];
  puVar12[4] = (uint)bVar17 * (int)(fVar5 * fVar5) | (uint)!bVar17 * puVar12[4];
  puVar12[5] = (uint)bVar18 * (int)(fVar6 * fVar6) | (uint)!bVar18 * puVar12[5];
  puVar12[6] = (uint)bVar19 * (int)(fVar7 * fVar7) | (uint)!bVar19 * puVar12[6];
  puVar12[7] = (uint)bVar20 * (int)(fVar8 * fVar8) | (uint)!bVar20 * puVar12[7];
  return;
}

// ArraySqrtInPlace_avx512skx @ 140a19d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySqrtInPlace_avx512skx(longlong param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar12 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar12 = param_2;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar13 = 0;
    do {
      auVar16 = vsqrtps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15));
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15) = auVar16;
      uVar13 = uVar13 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar13) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar14 = (longlong)((int)uVar13 << 2);
  piVar1 = (int *)(param_1 + lVar14);
  auVar16._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar16._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar16._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar16._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar16._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar16._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar16._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar16._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar16 = vsqrtps_avx(auVar16);
  puVar2 = (uint *)(param_1 + lVar14);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar16._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayComplexConjugate_avx512skx @ 140a19db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexConjugate_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  uVar12 = __real_80000000;
  uVar13 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar13 = param_3;
  }
  if ((int)(uVar13 & 0xfffffff8) < 1) {
    uVar14 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    do {
      auVar17 = *(undefined1 (*) [32])(param_1 + (ulonglong)uVar16);
      auVar18._0_4_ = auVar17._0_4_ ^ uVar12;
      auVar18._4_4_ = auVar17._4_4_ ^ uVar12;
      auVar18._8_4_ = auVar17._8_4_ ^ uVar12;
      auVar18._12_4_ = auVar17._12_4_ ^ uVar12;
      auVar18._16_4_ = auVar17._16_4_ ^ uVar12;
      auVar18._20_4_ = auVar17._20_4_ ^ uVar12;
      auVar18._24_4_ = auVar17._24_4_ ^ uVar12;
      auVar18._28_4_ = auVar17._28_4_ ^ uVar12;
      auVar17 = vblendps_avx(auVar17,auVar18,0xaa);
      *(undefined1 (*) [32])(param_2 + (ulonglong)uVar16) = auVar17;
      uVar14 = uVar14 + 8;
      uVar16 = uVar16 + 0x20;
    } while (uVar14 < (uVar13 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar14) {
      return;
    }
  }
  auVar17 = vpbroadcastd_avx512vl();
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar18,auVar17);
  lVar15 = (longlong)((int)uVar14 << 2);
  piVar1 = (int *)(param_1 + lVar15);
  auVar19._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar19._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar19._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar19._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar19._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar19._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar19._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar19._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar17._4_4_ = __real_80000000;
  auVar17._0_4_ = __real_80000000;
  auVar17._8_4_ = __real_80000000;
  auVar17._12_4_ = __real_80000000;
  auVar17._16_4_ = __real_80000000;
  auVar17._20_4_ = __real_80000000;
  auVar17._24_4_ = __real_80000000;
  auVar17._28_4_ = __real_80000000;
  auVar17 = vxorps_avx512vl(auVar19,auVar17);
  auVar17 = vblendps_avx(auVar19,auVar17,0xaa);
  puVar2 = (uint *)(param_2 + lVar15);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar17._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar17._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar17._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar17._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar17._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar17._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar17._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar17._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayComplexConjugateInPlace_avx512skx @ 140a19e60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexConjugateInPlace_avx512skx(longlong param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  uVar12 = __real_80000000;
  uVar13 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar13 = param_2;
  }
  if ((int)(uVar13 & 0xfffffff8) < 1) {
    uVar14 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    do {
      auVar17 = *(undefined1 (*) [32])(param_1 + (ulonglong)uVar16);
      auVar18._0_4_ = auVar17._0_4_ ^ uVar12;
      auVar18._4_4_ = auVar17._4_4_ ^ uVar12;
      auVar18._8_4_ = auVar17._8_4_ ^ uVar12;
      auVar18._12_4_ = auVar17._12_4_ ^ uVar12;
      auVar18._16_4_ = auVar17._16_4_ ^ uVar12;
      auVar18._20_4_ = auVar17._20_4_ ^ uVar12;
      auVar18._24_4_ = auVar17._24_4_ ^ uVar12;
      auVar18._28_4_ = auVar17._28_4_ ^ uVar12;
      auVar17 = vblendps_avx(auVar17,auVar18,0xaa);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar16) = auVar17;
      uVar14 = uVar14 + 8;
      uVar16 = uVar16 + 0x20;
    } while (uVar14 < (uVar13 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar14) {
      return;
    }
  }
  auVar17 = vpbroadcastd_avx512vl();
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar18,auVar17);
  lVar15 = (longlong)((int)uVar14 << 2);
  piVar1 = (int *)(param_1 + lVar15);
  auVar19._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar19._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar19._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar19._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar19._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar19._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar19._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar19._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar17._4_4_ = __real_80000000;
  auVar17._0_4_ = __real_80000000;
  auVar17._8_4_ = __real_80000000;
  auVar17._12_4_ = __real_80000000;
  auVar17._16_4_ = __real_80000000;
  auVar17._20_4_ = __real_80000000;
  auVar17._24_4_ = __real_80000000;
  auVar17._28_4_ = __real_80000000;
  auVar17 = vxorps_avx512vl(auVar19,auVar17);
  auVar17 = vblendps_avx(auVar19,auVar17,0xaa);
  puVar2 = (uint *)(param_1 + lVar15);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar17._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar17._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar17._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar17._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar17._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar17._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar17._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar17._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayMagnitudeToDecibelInPlace_avx512skx @ 140a19f10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMagnitudeToDecibelInPlace_avx512skx(longlong param_1,float param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar41;
  undefined1 auVar42 [32];
  float fVar43;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 in_ZMM26 [64];
  
  fVar15 = __real_3f800000;
  fVar41 = (param_2 * __real_40135d8e) / __real_41a00000;
  auVar21 = ZEXT416((uint)(fVar41 * __real_3fb8aa3b));
  auVar21 = vroundss_avx(auVar21,auVar21,9);
  fVar43 = auVar21._0_4_;
  iVar16 = (int)fVar43;
  fVar41 = fVar43 * __real_b5bfbe8e + fVar43 * __real_bf317200 + fVar41;
  iVar16 = (uint)(-0x7f < iVar16) *
           ((uint)(0x7f < iVar16) * __real_7f800000 +
           (uint)(0x7f >= iVar16) *
           (int)((fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * 
                                                  __real_39907835 + __real_3aaaf7b5) +
                                                  __real_3c09475d) + __real_3d2a9d49) +
                                               __real_3e2aab20) + __real_3efffffd) + __real_3f800000
                           ) + __real_3f800000) * (float)(iVar16 * 0x800000 + 0x3f800000)));
  uVar17 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar17 = param_3;
  }
  if ((int)(uVar17 & 0xfffffff8) < 1) {
    uVar20 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar44._4_4_ = iVar16;
    auVar44._0_4_ = iVar16;
    auVar44._8_4_ = iVar16;
    auVar44._12_4_ = iVar16;
    auVar44._16_4_ = iVar16;
    auVar44._20_4_ = iVar16;
    auVar44._24_4_ = iVar16;
    auVar44._28_4_ = iVar16;
    uVar19 = 0;
    auVar46._4_4_ = __real_3f800000;
    auVar46._0_4_ = __real_3f800000;
    auVar46._8_4_ = __real_3f800000;
    auVar46._12_4_ = __real_3f800000;
    auVar46._16_4_ = __real_3f800000;
    auVar46._20_4_ = __real_3f800000;
    auVar46._24_4_ = __real_3f800000;
    auVar46._28_4_ = __real_3f800000;
    auVar48._4_4_ = __real_ffffff82;
    auVar48._0_4_ = __real_ffffff82;
    auVar48._8_4_ = __real_ffffff82;
    auVar48._12_4_ = __real_ffffff82;
    auVar48._16_4_ = __real_ffffff82;
    auVar48._20_4_ = __real_ffffff82;
    auVar48._24_4_ = __real_ffffff82;
    auVar48._28_4_ = __real_ffffff82;
    auVar51._4_4_ = __real_3f000000;
    auVar51._0_4_ = __real_3f000000;
    auVar51._8_4_ = __real_3f000000;
    auVar51._12_4_ = __real_3f000000;
    auVar51._16_4_ = __real_3f000000;
    auVar51._20_4_ = __real_3f000000;
    auVar51._24_4_ = __real_3f000000;
    auVar51._28_4_ = __real_3f000000;
    auVar52._4_4_ = __real_807fffff;
    auVar52._0_4_ = __real_807fffff;
    auVar52._8_4_ = __real_807fffff;
    auVar52._12_4_ = __real_807fffff;
    auVar52._16_4_ = __real_807fffff;
    auVar52._20_4_ = __real_807fffff;
    auVar52._24_4_ = __real_807fffff;
    auVar52._28_4_ = __real_807fffff;
    auVar22 = vbroadcastss_avx512vl(ZEXT416(__real_3fdfe28e));
    auVar23 = vbroadcastss_avx512vl(ZEXT416(__real_c01f5af7));
    auVar24 = vbroadcastss_avx512vl(ZEXT416(__real_3ffe0193));
    auVar25 = vbroadcastss_avx512vl(ZEXT416(__real_bf198181));
    auVar26 = vbroadcastss_avx512vl(ZEXT416(__real_3eaf548d));
    auVar27 = vbroadcastss_avx512vl(ZEXT416(__real_3e33a0af));
    auVar28 = vbroadcastss_avx512vl(ZEXT416(__real_3e80fb87));
    auVar29 = vbroadcastss_avx512vl(ZEXT416(__real_3eaaa11c));
    auVar30 = vbroadcastss_avx512vl(ZEXT416(__real_3f000010));
    auVar31 = vbroadcastss_avx512vl(ZEXT416(__real_3f317218));
    auVar21 = vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
    auVar32 = vbroadcastss_avx512vl(ZEXT416(__real_ff800000));
    auVar33 = vbroadcastss_avx512vl(ZEXT416(__real_410af967));
    uVar20 = 0;
    do {
      auVar34 = vmaxps_avx512vl(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar19),auVar44);
      uVar13 = vcmpps_avx512vl(auVar34,ZEXT1632(auVar21),1);
      uVar14 = vcmpps_avx512vl(auVar34,ZEXT1632(auVar21),2);
      bVar4 = (bool)((byte)uVar14 & 1);
      auVar35._0_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._0_4_;
      bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
      auVar35._4_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._4_4_;
      bVar4 = (bool)((byte)(uVar14 >> 2) & 1);
      auVar35._8_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._8_4_;
      bVar4 = (bool)((byte)(uVar14 >> 3) & 1);
      auVar35._12_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._12_4_;
      bVar4 = (bool)((byte)(uVar14 >> 4) & 1);
      auVar35._16_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._16_4_;
      bVar4 = (bool)((byte)(uVar14 >> 5) & 1);
      auVar35._20_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._20_4_;
      bVar4 = (bool)((byte)(uVar14 >> 6) & 1);
      auVar35._24_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._24_4_;
      bVar4 = SUB81(uVar14 >> 7,0);
      auVar35._28_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._28_4_;
      auVar34 = vpsrad_avx512vl(auVar35,0x17);
      auVar35 = vpternlogd_avx512vl(auVar35,auVar51,auVar52,0xec);
      auVar35 = vsubps_avx512vl(auVar46,auVar35);
      auVar36 = vfmadd213ps_avx512vl(auVar22,auVar35,auVar23);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar24);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar25);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar26);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar27);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar28);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar29);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar30);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar46);
      auVar34 = vpaddd_avx512vl(auVar34,auVar48);
      auVar37 = vcvtdq2ps_avx512vl(auVar34);
      auVar34 = vmulps_avx512vl(auVar35,auVar36);
      auVar35 = vfmsub231ps_avx512vl(auVar34,auVar37,auVar31);
      auVar34._4_4_ = __real_7fc00000;
      auVar34._0_4_ = __real_7fc00000;
      auVar34._8_4_ = __real_7fc00000;
      auVar34._12_4_ = __real_7fc00000;
      auVar34._16_4_ = __real_7fc00000;
      auVar34._20_4_ = __real_7fc00000;
      auVar34._24_4_ = __real_7fc00000;
      auVar34._28_4_ = __real_7fc00000;
      auVar34 = vblendmps_avx512vl(auVar32,auVar34);
      bVar4 = (bool)((byte)uVar13 & 1);
      bVar6 = (bool)((byte)(uVar13 >> 1) & 1);
      bVar7 = (bool)((byte)(uVar13 >> 2) & 1);
      bVar8 = (bool)((byte)(uVar13 >> 3) & 1);
      bVar9 = (bool)((byte)(uVar13 >> 4) & 1);
      bVar10 = (bool)((byte)(uVar13 >> 5) & 1);
      bVar11 = (bool)((byte)(uVar13 >> 6) & 1);
      bVar12 = SUB81(uVar13 >> 7,0);
      bVar5 = (bool)((byte)uVar14 & 1);
      auVar36._0_4_ =
           (uint)bVar5 * ((uint)bVar4 * auVar34._0_4_ | (uint)!bVar4 * auVar37._0_4_) |
           (uint)!bVar5 * auVar35._0_4_;
      bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
      auVar36._4_4_ =
           (uint)bVar4 * ((uint)bVar6 * auVar34._4_4_ | (uint)!bVar6 * auVar37._4_4_) |
           (uint)!bVar4 * auVar35._4_4_;
      bVar4 = (bool)((byte)(uVar14 >> 2) & 1);
      auVar36._8_4_ =
           (uint)bVar4 * ((uint)bVar7 * auVar34._8_4_ | (uint)!bVar7 * auVar37._8_4_) |
           (uint)!bVar4 * auVar35._8_4_;
      bVar4 = (bool)((byte)(uVar14 >> 3) & 1);
      auVar36._12_4_ =
           (uint)bVar4 * ((uint)bVar8 * auVar34._12_4_ | (uint)!bVar8 * auVar37._12_4_) |
           (uint)!bVar4 * auVar35._12_4_;
      bVar4 = (bool)((byte)(uVar14 >> 4) & 1);
      auVar36._16_4_ =
           (uint)bVar4 * ((uint)bVar9 * auVar34._16_4_ | (uint)!bVar9 * auVar37._16_4_) |
           (uint)!bVar4 * auVar35._16_4_;
      bVar4 = (bool)((byte)(uVar14 >> 5) & 1);
      auVar36._20_4_ =
           (uint)bVar4 * ((uint)bVar10 * auVar34._20_4_ | (uint)!bVar10 * auVar37._20_4_) |
           (uint)!bVar4 * auVar35._20_4_;
      bVar4 = (bool)((byte)(uVar14 >> 6) & 1);
      auVar36._24_4_ =
           (uint)bVar4 * ((uint)bVar11 * auVar34._24_4_ | (uint)!bVar11 * auVar37._24_4_) |
           (uint)!bVar4 * auVar35._24_4_;
      bVar4 = SUB81(uVar14 >> 7,0);
      auVar36._28_4_ =
           (uint)bVar4 * ((uint)bVar12 * auVar34._28_4_ | (uint)!bVar12 * auVar37._28_4_) |
           (uint)!bVar4 * auVar35._28_4_;
      auVar34 = vmulps_avx512vl(auVar36,auVar33);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar19) = auVar34;
      uVar20 = uVar20 + 8;
      uVar19 = uVar19 + 0x20;
    } while (uVar20 < (uVar17 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar20) {
      return;
    }
  }
  auVar22 = vpbroadcastd_avx512vl();
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar23 = vpbroadcastd_avx512vl();
  uVar14 = vpcmpgtd_avx512vl(auVar23,auVar22);
  lVar18 = (longlong)((int)uVar20 << 2);
  piVar1 = (int *)(param_1 + lVar18);
  bVar3 = (byte)uVar14;
  auVar37._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar37._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar37._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar37._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar37._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar37._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar37._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar37._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  auVar42._4_4_ = iVar16;
  auVar42._0_4_ = iVar16;
  auVar42._8_4_ = iVar16;
  auVar42._12_4_ = iVar16;
  auVar42._16_4_ = iVar16;
  auVar42._20_4_ = iVar16;
  auVar42._24_4_ = iVar16;
  auVar42._28_4_ = iVar16;
  auVar22 = vmaxps_avx(auVar37,auVar42);
  uVar20 = vcmpps_avx512vl(auVar22,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  uVar13 = vcmpps_avx512vl(auVar22,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
  auVar45._4_4_ = __real_3f800000;
  auVar45._0_4_ = __real_3f800000;
  auVar45._8_4_ = __real_3f800000;
  auVar45._12_4_ = __real_3f800000;
  auVar45._16_4_ = __real_3f800000;
  auVar45._20_4_ = __real_3f800000;
  auVar45._24_4_ = __real_3f800000;
  auVar45._28_4_ = __real_3f800000;
  bVar4 = (bool)((byte)uVar13 & 1);
  auVar38._0_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._0_4_;
  bVar4 = (bool)((byte)(uVar13 >> 1) & 1);
  auVar38._4_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._4_4_;
  bVar4 = (bool)((byte)(uVar13 >> 2) & 1);
  auVar38._8_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._8_4_;
  bVar4 = (bool)((byte)(uVar13 >> 3) & 1);
  auVar38._12_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._12_4_;
  bVar4 = (bool)((byte)(uVar13 >> 4) & 1);
  auVar38._16_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._16_4_;
  bVar4 = (bool)((byte)(uVar13 >> 5) & 1);
  auVar38._20_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._20_4_;
  bVar4 = (bool)((byte)(uVar13 >> 6) & 1);
  auVar38._24_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._24_4_;
  bVar4 = SUB81(uVar13 >> 7,0);
  auVar38._28_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._28_4_;
  auVar23 = vpsrad_avx2(auVar38,0x17);
  auVar22._4_4_ = __real_ffffff82;
  auVar22._0_4_ = __real_ffffff82;
  auVar22._8_4_ = __real_ffffff82;
  auVar22._12_4_ = __real_ffffff82;
  auVar22._16_4_ = __real_ffffff82;
  auVar22._20_4_ = __real_ffffff82;
  auVar22._24_4_ = __real_ffffff82;
  auVar22._28_4_ = __real_ffffff82;
  auVar22 = vpaddd_avx512vl(auVar23,auVar22);
  auVar49._4_4_ = __real_3f000000;
  auVar49._0_4_ = __real_3f000000;
  auVar49._8_4_ = __real_3f000000;
  auVar49._12_4_ = __real_3f000000;
  auVar49._16_4_ = __real_3f000000;
  auVar49._20_4_ = __real_3f000000;
  auVar49._24_4_ = __real_3f000000;
  auVar49._28_4_ = __real_3f000000;
  auVar23._4_4_ = __real_807fffff;
  auVar23._0_4_ = __real_807fffff;
  auVar23._8_4_ = __real_807fffff;
  auVar23._12_4_ = __real_807fffff;
  auVar23._16_4_ = __real_807fffff;
  auVar23._20_4_ = __real_807fffff;
  auVar23._24_4_ = __real_807fffff;
  auVar23._28_4_ = __real_807fffff;
  auVar23 = vpternlogd_avx512vl(auVar49,auVar38,auVar23,0xf8);
  auVar23 = vsubps_avx512vl(auVar45,auVar23);
  auVar39._0_4_ =
       (float)((uint)(bVar3 & 1) * auVar23._0_4_ | (uint)!(bool)(bVar3 & 1) * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
  auVar39._4_4_ = (float)((uint)bVar4 * auVar23._4_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 2) & 1);
  auVar39._8_4_ = (float)((uint)bVar4 * auVar23._8_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 3) & 1);
  auVar39._12_4_ = (float)((uint)bVar4 * auVar23._12_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 4) & 1);
  auVar39._16_4_ = (float)((uint)bVar4 * auVar23._16_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 5) & 1);
  auVar39._20_4_ = (float)((uint)bVar4 * auVar23._20_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 6) & 1);
  auVar39._24_4_ = (float)((uint)bVar4 * auVar23._24_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = SUB81(uVar14 >> 7,0);
  auVar39._28_4_ = (float)((uint)bVar4 * auVar23._28_4_ | (uint)!bVar4 * __real_7fc00000);
  auVar50._4_4_ = __real_3fdfe28e;
  auVar50._0_4_ = __real_3fdfe28e;
  auVar50._8_4_ = __real_3fdfe28e;
  auVar50._12_4_ = __real_3fdfe28e;
  auVar50._16_4_ = __real_3fdfe28e;
  auVar50._20_4_ = __real_3fdfe28e;
  auVar50._24_4_ = __real_3fdfe28e;
  auVar50._28_4_ = __real_3fdfe28e;
  auVar24._4_4_ = __real_c01f5af7;
  auVar24._0_4_ = __real_c01f5af7;
  auVar24._8_4_ = __real_c01f5af7;
  auVar24._12_4_ = __real_c01f5af7;
  auVar24._16_4_ = __real_c01f5af7;
  auVar24._20_4_ = __real_c01f5af7;
  auVar24._24_4_ = __real_c01f5af7;
  auVar24._28_4_ = __real_c01f5af7;
  auVar23 = vfmadd213ps_avx512vl(auVar50,auVar39,auVar24);
  auVar25._4_4_ = __real_3ffe0193;
  auVar25._0_4_ = __real_3ffe0193;
  auVar25._8_4_ = __real_3ffe0193;
  auVar25._12_4_ = __real_3ffe0193;
  auVar25._16_4_ = __real_3ffe0193;
  auVar25._20_4_ = __real_3ffe0193;
  auVar25._24_4_ = __real_3ffe0193;
  auVar25._28_4_ = __real_3ffe0193;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar25);
  auVar26._4_4_ = __real_bf198181;
  auVar26._0_4_ = __real_bf198181;
  auVar26._8_4_ = __real_bf198181;
  auVar26._12_4_ = __real_bf198181;
  auVar26._16_4_ = __real_bf198181;
  auVar26._20_4_ = __real_bf198181;
  auVar26._24_4_ = __real_bf198181;
  auVar26._28_4_ = __real_bf198181;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar26);
  auVar27._4_4_ = __real_3eaf548d;
  auVar27._0_4_ = __real_3eaf548d;
  auVar27._8_4_ = __real_3eaf548d;
  auVar27._12_4_ = __real_3eaf548d;
  auVar27._16_4_ = __real_3eaf548d;
  auVar27._20_4_ = __real_3eaf548d;
  auVar27._24_4_ = __real_3eaf548d;
  auVar27._28_4_ = __real_3eaf548d;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar27);
  auVar28._4_4_ = __real_3e33a0af;
  auVar28._0_4_ = __real_3e33a0af;
  auVar28._8_4_ = __real_3e33a0af;
  auVar28._12_4_ = __real_3e33a0af;
  auVar28._16_4_ = __real_3e33a0af;
  auVar28._20_4_ = __real_3e33a0af;
  auVar28._24_4_ = __real_3e33a0af;
  auVar28._28_4_ = __real_3e33a0af;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar28);
  auVar29._4_4_ = __real_3e80fb87;
  auVar29._0_4_ = __real_3e80fb87;
  auVar29._8_4_ = __real_3e80fb87;
  auVar29._12_4_ = __real_3e80fb87;
  auVar29._16_4_ = __real_3e80fb87;
  auVar29._20_4_ = __real_3e80fb87;
  auVar29._24_4_ = __real_3e80fb87;
  auVar29._28_4_ = __real_3e80fb87;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar29);
  auVar30._4_4_ = __real_3eaaa11c;
  auVar30._0_4_ = __real_3eaaa11c;
  auVar30._8_4_ = __real_3eaaa11c;
  auVar30._12_4_ = __real_3eaaa11c;
  auVar30._16_4_ = __real_3eaaa11c;
  auVar30._20_4_ = __real_3eaaa11c;
  auVar30._24_4_ = __real_3eaaa11c;
  auVar30._28_4_ = __real_3eaaa11c;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar30);
  auVar31._4_4_ = __real_3f000010;
  auVar31._0_4_ = __real_3f000010;
  auVar31._8_4_ = __real_3f000010;
  auVar31._12_4_ = __real_3f000010;
  auVar31._16_4_ = __real_3f000010;
  auVar31._20_4_ = __real_3f000010;
  auVar31._24_4_ = __real_3f000010;
  auVar31._28_4_ = __real_3f000010;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar31);
  auVar22 = vcvtdq2ps_avx(auVar22);
  auVar47._0_4_ = auVar39._0_4_ * (auVar39._0_4_ * auVar23._0_4_ + __real_3f800000);
  auVar47._4_4_ = auVar39._4_4_ * (auVar39._4_4_ * auVar23._4_4_ + __real_3f800000);
  auVar47._8_4_ = auVar39._8_4_ * (auVar39._8_4_ * auVar23._8_4_ + __real_3f800000);
  auVar47._12_4_ = auVar39._12_4_ * (auVar39._12_4_ * auVar23._12_4_ + __real_3f800000);
  auVar47._16_4_ = auVar39._16_4_ * (auVar39._16_4_ * auVar23._16_4_ + __real_3f800000);
  auVar47._20_4_ = auVar39._20_4_ * (auVar39._20_4_ * auVar23._20_4_ + __real_3f800000);
  auVar47._24_4_ = auVar39._24_4_ * (auVar39._24_4_ * auVar23._24_4_ + __real_3f800000);
  auVar47._28_4_ = auVar39._28_4_ * (auVar39._28_4_ * auVar23._28_4_ + __real_3f800000);
  auVar32._4_4_ = __real_3f317218;
  auVar32._0_4_ = __real_3f317218;
  auVar32._8_4_ = __real_3f317218;
  auVar32._12_4_ = __real_3f317218;
  auVar32._16_4_ = __real_3f317218;
  auVar32._20_4_ = __real_3f317218;
  auVar32._24_4_ = __real_3f317218;
  auVar32._28_4_ = __real_3f317218;
  auVar22 = vfmsub231ps_avx512vl(auVar47,auVar22,auVar32);
  bVar4 = (bool)((byte)uVar20 & 1);
  bVar6 = (bool)((byte)(uVar20 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar20 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar20 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar20 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar20 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar20 >> 6) & 1);
  bVar12 = SUB81(uVar20 >> 7,0);
  bVar5 = (bool)((byte)uVar13 & 1);
  auVar40._0_4_ =
       (uint)bVar5 * ((uint)bVar4 * __real_7fc00000 | !bVar4 * __real_ff800000) |
       (uint)!bVar5 * auVar22._0_4_;
  bVar4 = (bool)((byte)(uVar13 >> 1) & 1);
  auVar40._4_4_ =
       (uint)bVar4 * ((uint)bVar6 * __real_7fc00000 | !bVar6 * __real_ff800000) |
       (uint)!bVar4 * auVar22._4_4_;
  bVar4 = (bool)((byte)(uVar13 >> 2) & 1);
  auVar40._8_4_ =
       (uint)bVar4 * ((uint)bVar7 * __real_7fc00000 | !bVar7 * __real_ff800000) |
       (uint)!bVar4 * auVar22._8_4_;
  bVar4 = (bool)((byte)(uVar13 >> 3) & 1);
  auVar40._12_4_ =
       (uint)bVar4 * ((uint)bVar8 * __real_7fc00000 | !bVar8 * __real_ff800000) |
       (uint)!bVar4 * auVar22._12_4_;
  bVar4 = (bool)((byte)(uVar13 >> 4) & 1);
  auVar40._16_4_ =
       (uint)bVar4 * ((uint)bVar9 * __real_7fc00000 | !bVar9 * __real_ff800000) |
       (uint)!bVar4 * auVar22._16_4_;
  bVar4 = (bool)((byte)(uVar13 >> 5) & 1);
  auVar40._20_4_ =
       (uint)bVar4 * ((uint)bVar10 * __real_7fc00000 | !bVar10 * __real_ff800000) |
       (uint)!bVar4 * auVar22._20_4_;
  bVar4 = (bool)((byte)(uVar13 >> 6) & 1);
  auVar40._24_4_ =
       (uint)bVar4 * ((uint)bVar11 * __real_7fc00000 | !bVar11 * __real_ff800000) |
       (uint)!bVar4 * auVar22._24_4_;
  bVar4 = SUB81(uVar13 >> 7,0);
  auVar40._28_4_ =
       (uint)bVar4 * ((uint)bVar12 * __real_7fc00000 | !bVar12 * __real_ff800000) |
       (uint)!bVar4 * auVar22._28_4_;
  auVar33._4_4_ = __real_410af967;
  auVar33._0_4_ = __real_410af967;
  auVar33._8_4_ = __real_410af967;
  auVar33._12_4_ = __real_410af967;
  auVar33._16_4_ = __real_410af967;
  auVar33._20_4_ = __real_410af967;
  auVar33._24_4_ = __real_410af967;
  auVar33._28_4_ = __real_410af967;
  auVar22 = vmulps_avx512vl(auVar40,auVar33);
  puVar2 = (uint *)(param_1 + lVar18);
  bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar14 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar14 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar14 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar14 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar14 >> 6) & 1);
  bVar10 = SUB81(uVar14 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) * auVar22._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar22._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar22._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar22._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar22._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar22._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar22._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar22._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayPowerToDecibelInPlace_avx512skx @ 140a1a290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPowerToDecibelInPlace_avx512skx(longlong param_1,float param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  float fVar41;
  undefined1 auVar42 [32];
  float fVar43;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 in_ZMM26 [64];
  
  fVar15 = __real_3f800000;
  fVar41 = (param_2 * __real_40135d8e) / __real_41200000;
  auVar21 = ZEXT416((uint)(fVar41 * __real_3fb8aa3b));
  auVar21 = vroundss_avx(auVar21,auVar21,9);
  fVar43 = auVar21._0_4_;
  iVar16 = (int)fVar43;
  fVar41 = fVar43 * __real_b5bfbe8e + fVar43 * __real_bf317200 + fVar41;
  iVar16 = (uint)(-0x7f < iVar16) *
           ((uint)(0x7f < iVar16) * __real_7f800000 +
           (uint)(0x7f >= iVar16) *
           (int)((fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * 
                                                  __real_39907835 + __real_3aaaf7b5) +
                                                  __real_3c09475d) + __real_3d2a9d49) +
                                               __real_3e2aab20) + __real_3efffffd) + __real_3f800000
                           ) + __real_3f800000) * (float)(iVar16 * 0x800000 + 0x3f800000)));
  uVar17 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar17 = param_3;
  }
  if ((int)(uVar17 & 0xfffffff8) < 1) {
    uVar20 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar44._4_4_ = iVar16;
    auVar44._0_4_ = iVar16;
    auVar44._8_4_ = iVar16;
    auVar44._12_4_ = iVar16;
    auVar44._16_4_ = iVar16;
    auVar44._20_4_ = iVar16;
    auVar44._24_4_ = iVar16;
    auVar44._28_4_ = iVar16;
    uVar19 = 0;
    auVar46._4_4_ = __real_3f800000;
    auVar46._0_4_ = __real_3f800000;
    auVar46._8_4_ = __real_3f800000;
    auVar46._12_4_ = __real_3f800000;
    auVar46._16_4_ = __real_3f800000;
    auVar46._20_4_ = __real_3f800000;
    auVar46._24_4_ = __real_3f800000;
    auVar46._28_4_ = __real_3f800000;
    auVar48._4_4_ = __real_ffffff82;
    auVar48._0_4_ = __real_ffffff82;
    auVar48._8_4_ = __real_ffffff82;
    auVar48._12_4_ = __real_ffffff82;
    auVar48._16_4_ = __real_ffffff82;
    auVar48._20_4_ = __real_ffffff82;
    auVar48._24_4_ = __real_ffffff82;
    auVar48._28_4_ = __real_ffffff82;
    auVar51._4_4_ = __real_3f000000;
    auVar51._0_4_ = __real_3f000000;
    auVar51._8_4_ = __real_3f000000;
    auVar51._12_4_ = __real_3f000000;
    auVar51._16_4_ = __real_3f000000;
    auVar51._20_4_ = __real_3f000000;
    auVar51._24_4_ = __real_3f000000;
    auVar51._28_4_ = __real_3f000000;
    auVar52._4_4_ = __real_807fffff;
    auVar52._0_4_ = __real_807fffff;
    auVar52._8_4_ = __real_807fffff;
    auVar52._12_4_ = __real_807fffff;
    auVar52._16_4_ = __real_807fffff;
    auVar52._20_4_ = __real_807fffff;
    auVar52._24_4_ = __real_807fffff;
    auVar52._28_4_ = __real_807fffff;
    auVar22 = vbroadcastss_avx512vl(ZEXT416(__real_3fdfe28e));
    auVar23 = vbroadcastss_avx512vl(ZEXT416(__real_c01f5af7));
    auVar24 = vbroadcastss_avx512vl(ZEXT416(__real_3ffe0193));
    auVar25 = vbroadcastss_avx512vl(ZEXT416(__real_bf198181));
    auVar26 = vbroadcastss_avx512vl(ZEXT416(__real_3eaf548d));
    auVar27 = vbroadcastss_avx512vl(ZEXT416(__real_3e33a0af));
    auVar28 = vbroadcastss_avx512vl(ZEXT416(__real_3e80fb87));
    auVar29 = vbroadcastss_avx512vl(ZEXT416(__real_3eaaa11c));
    auVar30 = vbroadcastss_avx512vl(ZEXT416(__real_3f000010));
    auVar31 = vbroadcastss_avx512vl(ZEXT416(__real_3f317218));
    auVar21 = vxorps_avx512vl(in_ZMM26._0_16_,in_ZMM26._0_16_);
    auVar32 = vbroadcastss_avx512vl(ZEXT416(__real_ff800000));
    auVar33 = vbroadcastss_avx512vl(ZEXT416(__real_408af967));
    uVar20 = 0;
    do {
      auVar34 = vmaxps_avx512vl(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar19),auVar44);
      uVar13 = vcmpps_avx512vl(auVar34,ZEXT1632(auVar21),1);
      uVar14 = vcmpps_avx512vl(auVar34,ZEXT1632(auVar21),2);
      bVar4 = (bool)((byte)uVar14 & 1);
      auVar35._0_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._0_4_;
      bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
      auVar35._4_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._4_4_;
      bVar4 = (bool)((byte)(uVar14 >> 2) & 1);
      auVar35._8_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._8_4_;
      bVar4 = (bool)((byte)(uVar14 >> 3) & 1);
      auVar35._12_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._12_4_;
      bVar4 = (bool)((byte)(uVar14 >> 4) & 1);
      auVar35._16_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._16_4_;
      bVar4 = (bool)((byte)(uVar14 >> 5) & 1);
      auVar35._20_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._20_4_;
      bVar4 = (bool)((byte)(uVar14 >> 6) & 1);
      auVar35._24_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._24_4_;
      bVar4 = SUB81(uVar14 >> 7,0);
      auVar35._28_4_ = (uint)bVar4 * (int)fVar15 | (uint)!bVar4 * auVar34._28_4_;
      auVar34 = vpsrad_avx512vl(auVar35,0x17);
      auVar35 = vpternlogd_avx512vl(auVar35,auVar51,auVar52,0xec);
      auVar35 = vsubps_avx512vl(auVar46,auVar35);
      auVar36 = vfmadd213ps_avx512vl(auVar22,auVar35,auVar23);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar24);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar25);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar26);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar27);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar28);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar29);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar30);
      auVar36 = vfmadd213ps_avx512vl(auVar36,auVar35,auVar46);
      auVar34 = vpaddd_avx512vl(auVar34,auVar48);
      auVar37 = vcvtdq2ps_avx512vl(auVar34);
      auVar34 = vmulps_avx512vl(auVar35,auVar36);
      auVar35 = vfmsub231ps_avx512vl(auVar34,auVar37,auVar31);
      auVar34._4_4_ = __real_7fc00000;
      auVar34._0_4_ = __real_7fc00000;
      auVar34._8_4_ = __real_7fc00000;
      auVar34._12_4_ = __real_7fc00000;
      auVar34._16_4_ = __real_7fc00000;
      auVar34._20_4_ = __real_7fc00000;
      auVar34._24_4_ = __real_7fc00000;
      auVar34._28_4_ = __real_7fc00000;
      auVar34 = vblendmps_avx512vl(auVar32,auVar34);
      bVar4 = (bool)((byte)uVar13 & 1);
      bVar6 = (bool)((byte)(uVar13 >> 1) & 1);
      bVar7 = (bool)((byte)(uVar13 >> 2) & 1);
      bVar8 = (bool)((byte)(uVar13 >> 3) & 1);
      bVar9 = (bool)((byte)(uVar13 >> 4) & 1);
      bVar10 = (bool)((byte)(uVar13 >> 5) & 1);
      bVar11 = (bool)((byte)(uVar13 >> 6) & 1);
      bVar12 = SUB81(uVar13 >> 7,0);
      bVar5 = (bool)((byte)uVar14 & 1);
      auVar36._0_4_ =
           (uint)bVar5 * ((uint)bVar4 * auVar34._0_4_ | (uint)!bVar4 * auVar37._0_4_) |
           (uint)!bVar5 * auVar35._0_4_;
      bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
      auVar36._4_4_ =
           (uint)bVar4 * ((uint)bVar6 * auVar34._4_4_ | (uint)!bVar6 * auVar37._4_4_) |
           (uint)!bVar4 * auVar35._4_4_;
      bVar4 = (bool)((byte)(uVar14 >> 2) & 1);
      auVar36._8_4_ =
           (uint)bVar4 * ((uint)bVar7 * auVar34._8_4_ | (uint)!bVar7 * auVar37._8_4_) |
           (uint)!bVar4 * auVar35._8_4_;
      bVar4 = (bool)((byte)(uVar14 >> 3) & 1);
      auVar36._12_4_ =
           (uint)bVar4 * ((uint)bVar8 * auVar34._12_4_ | (uint)!bVar8 * auVar37._12_4_) |
           (uint)!bVar4 * auVar35._12_4_;
      bVar4 = (bool)((byte)(uVar14 >> 4) & 1);
      auVar36._16_4_ =
           (uint)bVar4 * ((uint)bVar9 * auVar34._16_4_ | (uint)!bVar9 * auVar37._16_4_) |
           (uint)!bVar4 * auVar35._16_4_;
      bVar4 = (bool)((byte)(uVar14 >> 5) & 1);
      auVar36._20_4_ =
           (uint)bVar4 * ((uint)bVar10 * auVar34._20_4_ | (uint)!bVar10 * auVar37._20_4_) |
           (uint)!bVar4 * auVar35._20_4_;
      bVar4 = (bool)((byte)(uVar14 >> 6) & 1);
      auVar36._24_4_ =
           (uint)bVar4 * ((uint)bVar11 * auVar34._24_4_ | (uint)!bVar11 * auVar37._24_4_) |
           (uint)!bVar4 * auVar35._24_4_;
      bVar4 = SUB81(uVar14 >> 7,0);
      auVar36._28_4_ =
           (uint)bVar4 * ((uint)bVar12 * auVar34._28_4_ | (uint)!bVar12 * auVar37._28_4_) |
           (uint)!bVar4 * auVar35._28_4_;
      auVar34 = vmulps_avx512vl(auVar36,auVar33);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar19) = auVar34;
      uVar20 = uVar20 + 8;
      uVar19 = uVar19 + 0x20;
    } while (uVar20 < (uVar17 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar20) {
      return;
    }
  }
  auVar22 = vpbroadcastd_avx512vl();
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar23 = vpbroadcastd_avx512vl();
  uVar14 = vpcmpgtd_avx512vl(auVar23,auVar22);
  lVar18 = (longlong)((int)uVar20 << 2);
  piVar1 = (int *)(param_1 + lVar18);
  bVar3 = (byte)uVar14;
  auVar37._4_4_ = (uint)((byte)(uVar14 >> 1) & 1) * piVar1[1];
  auVar37._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar37._8_4_ = (uint)((byte)(uVar14 >> 2) & 1) * piVar1[2];
  auVar37._12_4_ = (uint)((byte)(uVar14 >> 3) & 1) * piVar1[3];
  auVar37._16_4_ = (uint)((byte)(uVar14 >> 4) & 1) * piVar1[4];
  auVar37._20_4_ = (uint)((byte)(uVar14 >> 5) & 1) * piVar1[5];
  auVar37._24_4_ = (uint)((byte)(uVar14 >> 6) & 1) * piVar1[6];
  auVar37._28_4_ = (uint)(byte)(uVar14 >> 7) * piVar1[7];
  auVar42._4_4_ = iVar16;
  auVar42._0_4_ = iVar16;
  auVar42._8_4_ = iVar16;
  auVar42._12_4_ = iVar16;
  auVar42._16_4_ = iVar16;
  auVar42._20_4_ = iVar16;
  auVar42._24_4_ = iVar16;
  auVar42._28_4_ = iVar16;
  auVar22 = vmaxps_avx(auVar37,auVar42);
  uVar20 = vcmpps_avx512vl(auVar22,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  uVar13 = vcmpps_avx512vl(auVar22,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
  auVar45._4_4_ = __real_3f800000;
  auVar45._0_4_ = __real_3f800000;
  auVar45._8_4_ = __real_3f800000;
  auVar45._12_4_ = __real_3f800000;
  auVar45._16_4_ = __real_3f800000;
  auVar45._20_4_ = __real_3f800000;
  auVar45._24_4_ = __real_3f800000;
  auVar45._28_4_ = __real_3f800000;
  bVar4 = (bool)((byte)uVar13 & 1);
  auVar38._0_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._0_4_;
  bVar4 = (bool)((byte)(uVar13 >> 1) & 1);
  auVar38._4_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._4_4_;
  bVar4 = (bool)((byte)(uVar13 >> 2) & 1);
  auVar38._8_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._8_4_;
  bVar4 = (bool)((byte)(uVar13 >> 3) & 1);
  auVar38._12_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._12_4_;
  bVar4 = (bool)((byte)(uVar13 >> 4) & 1);
  auVar38._16_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._16_4_;
  bVar4 = (bool)((byte)(uVar13 >> 5) & 1);
  auVar38._20_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._20_4_;
  bVar4 = (bool)((byte)(uVar13 >> 6) & 1);
  auVar38._24_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._24_4_;
  bVar4 = SUB81(uVar13 >> 7,0);
  auVar38._28_4_ = (uint)bVar4 * (int)__real_3f800000 | (uint)!bVar4 * auVar22._28_4_;
  auVar23 = vpsrad_avx2(auVar38,0x17);
  auVar22._4_4_ = __real_ffffff82;
  auVar22._0_4_ = __real_ffffff82;
  auVar22._8_4_ = __real_ffffff82;
  auVar22._12_4_ = __real_ffffff82;
  auVar22._16_4_ = __real_ffffff82;
  auVar22._20_4_ = __real_ffffff82;
  auVar22._24_4_ = __real_ffffff82;
  auVar22._28_4_ = __real_ffffff82;
  auVar22 = vpaddd_avx512vl(auVar23,auVar22);
  auVar49._4_4_ = __real_3f000000;
  auVar49._0_4_ = __real_3f000000;
  auVar49._8_4_ = __real_3f000000;
  auVar49._12_4_ = __real_3f000000;
  auVar49._16_4_ = __real_3f000000;
  auVar49._20_4_ = __real_3f000000;
  auVar49._24_4_ = __real_3f000000;
  auVar49._28_4_ = __real_3f000000;
  auVar23._4_4_ = __real_807fffff;
  auVar23._0_4_ = __real_807fffff;
  auVar23._8_4_ = __real_807fffff;
  auVar23._12_4_ = __real_807fffff;
  auVar23._16_4_ = __real_807fffff;
  auVar23._20_4_ = __real_807fffff;
  auVar23._24_4_ = __real_807fffff;
  auVar23._28_4_ = __real_807fffff;
  auVar23 = vpternlogd_avx512vl(auVar49,auVar38,auVar23,0xf8);
  auVar23 = vsubps_avx512vl(auVar45,auVar23);
  auVar39._0_4_ =
       (float)((uint)(bVar3 & 1) * auVar23._0_4_ | (uint)!(bool)(bVar3 & 1) * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
  auVar39._4_4_ = (float)((uint)bVar4 * auVar23._4_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 2) & 1);
  auVar39._8_4_ = (float)((uint)bVar4 * auVar23._8_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 3) & 1);
  auVar39._12_4_ = (float)((uint)bVar4 * auVar23._12_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 4) & 1);
  auVar39._16_4_ = (float)((uint)bVar4 * auVar23._16_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 5) & 1);
  auVar39._20_4_ = (float)((uint)bVar4 * auVar23._20_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = (bool)((byte)(uVar14 >> 6) & 1);
  auVar39._24_4_ = (float)((uint)bVar4 * auVar23._24_4_ | (uint)!bVar4 * __real_7fc00000);
  bVar4 = SUB81(uVar14 >> 7,0);
  auVar39._28_4_ = (float)((uint)bVar4 * auVar23._28_4_ | (uint)!bVar4 * __real_7fc00000);
  auVar50._4_4_ = __real_3fdfe28e;
  auVar50._0_4_ = __real_3fdfe28e;
  auVar50._8_4_ = __real_3fdfe28e;
  auVar50._12_4_ = __real_3fdfe28e;
  auVar50._16_4_ = __real_3fdfe28e;
  auVar50._20_4_ = __real_3fdfe28e;
  auVar50._24_4_ = __real_3fdfe28e;
  auVar50._28_4_ = __real_3fdfe28e;
  auVar24._4_4_ = __real_c01f5af7;
  auVar24._0_4_ = __real_c01f5af7;
  auVar24._8_4_ = __real_c01f5af7;
  auVar24._12_4_ = __real_c01f5af7;
  auVar24._16_4_ = __real_c01f5af7;
  auVar24._20_4_ = __real_c01f5af7;
  auVar24._24_4_ = __real_c01f5af7;
  auVar24._28_4_ = __real_c01f5af7;
  auVar23 = vfmadd213ps_avx512vl(auVar50,auVar39,auVar24);
  auVar25._4_4_ = __real_3ffe0193;
  auVar25._0_4_ = __real_3ffe0193;
  auVar25._8_4_ = __real_3ffe0193;
  auVar25._12_4_ = __real_3ffe0193;
  auVar25._16_4_ = __real_3ffe0193;
  auVar25._20_4_ = __real_3ffe0193;
  auVar25._24_4_ = __real_3ffe0193;
  auVar25._28_4_ = __real_3ffe0193;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar25);
  auVar26._4_4_ = __real_bf198181;
  auVar26._0_4_ = __real_bf198181;
  auVar26._8_4_ = __real_bf198181;
  auVar26._12_4_ = __real_bf198181;
  auVar26._16_4_ = __real_bf198181;
  auVar26._20_4_ = __real_bf198181;
  auVar26._24_4_ = __real_bf198181;
  auVar26._28_4_ = __real_bf198181;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar26);
  auVar27._4_4_ = __real_3eaf548d;
  auVar27._0_4_ = __real_3eaf548d;
  auVar27._8_4_ = __real_3eaf548d;
  auVar27._12_4_ = __real_3eaf548d;
  auVar27._16_4_ = __real_3eaf548d;
  auVar27._20_4_ = __real_3eaf548d;
  auVar27._24_4_ = __real_3eaf548d;
  auVar27._28_4_ = __real_3eaf548d;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar27);
  auVar28._4_4_ = __real_3e33a0af;
  auVar28._0_4_ = __real_3e33a0af;
  auVar28._8_4_ = __real_3e33a0af;
  auVar28._12_4_ = __real_3e33a0af;
  auVar28._16_4_ = __real_3e33a0af;
  auVar28._20_4_ = __real_3e33a0af;
  auVar28._24_4_ = __real_3e33a0af;
  auVar28._28_4_ = __real_3e33a0af;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar28);
  auVar29._4_4_ = __real_3e80fb87;
  auVar29._0_4_ = __real_3e80fb87;
  auVar29._8_4_ = __real_3e80fb87;
  auVar29._12_4_ = __real_3e80fb87;
  auVar29._16_4_ = __real_3e80fb87;
  auVar29._20_4_ = __real_3e80fb87;
  auVar29._24_4_ = __real_3e80fb87;
  auVar29._28_4_ = __real_3e80fb87;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar29);
  auVar30._4_4_ = __real_3eaaa11c;
  auVar30._0_4_ = __real_3eaaa11c;
  auVar30._8_4_ = __real_3eaaa11c;
  auVar30._12_4_ = __real_3eaaa11c;
  auVar30._16_4_ = __real_3eaaa11c;
  auVar30._20_4_ = __real_3eaaa11c;
  auVar30._24_4_ = __real_3eaaa11c;
  auVar30._28_4_ = __real_3eaaa11c;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar30);
  auVar31._4_4_ = __real_3f000010;
  auVar31._0_4_ = __real_3f000010;
  auVar31._8_4_ = __real_3f000010;
  auVar31._12_4_ = __real_3f000010;
  auVar31._16_4_ = __real_3f000010;
  auVar31._20_4_ = __real_3f000010;
  auVar31._24_4_ = __real_3f000010;
  auVar31._28_4_ = __real_3f000010;
  auVar23 = vfmadd213ps_avx512vl(auVar23,auVar39,auVar31);
  auVar22 = vcvtdq2ps_avx(auVar22);
  auVar47._0_4_ = auVar39._0_4_ * (auVar39._0_4_ * auVar23._0_4_ + __real_3f800000);
  auVar47._4_4_ = auVar39._4_4_ * (auVar39._4_4_ * auVar23._4_4_ + __real_3f800000);
  auVar47._8_4_ = auVar39._8_4_ * (auVar39._8_4_ * auVar23._8_4_ + __real_3f800000);
  auVar47._12_4_ = auVar39._12_4_ * (auVar39._12_4_ * auVar23._12_4_ + __real_3f800000);
  auVar47._16_4_ = auVar39._16_4_ * (auVar39._16_4_ * auVar23._16_4_ + __real_3f800000);
  auVar47._20_4_ = auVar39._20_4_ * (auVar39._20_4_ * auVar23._20_4_ + __real_3f800000);
  auVar47._24_4_ = auVar39._24_4_ * (auVar39._24_4_ * auVar23._24_4_ + __real_3f800000);
  auVar47._28_4_ = auVar39._28_4_ * (auVar39._28_4_ * auVar23._28_4_ + __real_3f800000);
  auVar32._4_4_ = __real_3f317218;
  auVar32._0_4_ = __real_3f317218;
  auVar32._8_4_ = __real_3f317218;
  auVar32._12_4_ = __real_3f317218;
  auVar32._16_4_ = __real_3f317218;
  auVar32._20_4_ = __real_3f317218;
  auVar32._24_4_ = __real_3f317218;
  auVar32._28_4_ = __real_3f317218;
  auVar22 = vfmsub231ps_avx512vl(auVar47,auVar22,auVar32);
  bVar4 = (bool)((byte)uVar20 & 1);
  bVar6 = (bool)((byte)(uVar20 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar20 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar20 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar20 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar20 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar20 >> 6) & 1);
  bVar12 = SUB81(uVar20 >> 7,0);
  bVar5 = (bool)((byte)uVar13 & 1);
  auVar40._0_4_ =
       (uint)bVar5 * ((uint)bVar4 * __real_7fc00000 | !bVar4 * __real_ff800000) |
       (uint)!bVar5 * auVar22._0_4_;
  bVar4 = (bool)((byte)(uVar13 >> 1) & 1);
  auVar40._4_4_ =
       (uint)bVar4 * ((uint)bVar6 * __real_7fc00000 | !bVar6 * __real_ff800000) |
       (uint)!bVar4 * auVar22._4_4_;
  bVar4 = (bool)((byte)(uVar13 >> 2) & 1);
  auVar40._8_4_ =
       (uint)bVar4 * ((uint)bVar7 * __real_7fc00000 | !bVar7 * __real_ff800000) |
       (uint)!bVar4 * auVar22._8_4_;
  bVar4 = (bool)((byte)(uVar13 >> 3) & 1);
  auVar40._12_4_ =
       (uint)bVar4 * ((uint)bVar8 * __real_7fc00000 | !bVar8 * __real_ff800000) |
       (uint)!bVar4 * auVar22._12_4_;
  bVar4 = (bool)((byte)(uVar13 >> 4) & 1);
  auVar40._16_4_ =
       (uint)bVar4 * ((uint)bVar9 * __real_7fc00000 | !bVar9 * __real_ff800000) |
       (uint)!bVar4 * auVar22._16_4_;
  bVar4 = (bool)((byte)(uVar13 >> 5) & 1);
  auVar40._20_4_ =
       (uint)bVar4 * ((uint)bVar10 * __real_7fc00000 | !bVar10 * __real_ff800000) |
       (uint)!bVar4 * auVar22._20_4_;
  bVar4 = (bool)((byte)(uVar13 >> 6) & 1);
  auVar40._24_4_ =
       (uint)bVar4 * ((uint)bVar11 * __real_7fc00000 | !bVar11 * __real_ff800000) |
       (uint)!bVar4 * auVar22._24_4_;
  bVar4 = SUB81(uVar13 >> 7,0);
  auVar40._28_4_ =
       (uint)bVar4 * ((uint)bVar12 * __real_7fc00000 | !bVar12 * __real_ff800000) |
       (uint)!bVar4 * auVar22._28_4_;
  auVar33._4_4_ = __real_408af967;
  auVar33._0_4_ = __real_408af967;
  auVar33._8_4_ = __real_408af967;
  auVar33._12_4_ = __real_408af967;
  auVar33._16_4_ = __real_408af967;
  auVar33._20_4_ = __real_408af967;
  auVar33._24_4_ = __real_408af967;
  auVar33._28_4_ = __real_408af967;
  auVar22 = vmulps_avx512vl(auVar40,auVar33);
  puVar2 = (uint *)(param_1 + lVar18);
  bVar4 = (bool)((byte)(uVar14 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar14 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar14 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar14 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar14 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar14 >> 6) & 1);
  bVar10 = SUB81(uVar14 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) * auVar22._0_4_ | (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar22._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar22._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar22._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar22._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar22._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar22._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar22._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayComplexToPowerInterleaved_avx512skx @ 140a1a610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPowerInterleaved_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [32];
  int iVar5;
  int iVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  auVar8 = ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001;
  auVar7 = ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000;
  uVar9 = param_3 & 0xfffffff8;
  if (0 < (int)uVar9) {
    uVar13 = 0;
    uVar14 = 0;
    do {
      auVar16 = *(undefined1 (*) [32])(param_1 + uVar13 * 2);
      auVar4 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar13 * 2);
      auVar15 = vpermt2ps_avx512vl(auVar16,auVar7,auVar4);
      auVar16 = vpermt2ps_avx512vl(auVar16,auVar8,auVar4);
      pfVar1 = (float *)(param_2 + (uVar13 & 0xffffffff));
      *pfVar1 = auVar15._0_4_ * auVar15._0_4_ + auVar16._0_4_ * auVar16._0_4_;
      pfVar1[1] = auVar15._4_4_ * auVar15._4_4_ + auVar16._4_4_ * auVar16._4_4_;
      pfVar1[2] = auVar15._8_4_ * auVar15._8_4_ + auVar16._8_4_ * auVar16._8_4_;
      pfVar1[3] = auVar15._12_4_ * auVar15._12_4_ + auVar16._12_4_ * auVar16._12_4_;
      pfVar1[4] = auVar15._16_4_ * auVar15._16_4_ + auVar16._16_4_ * auVar16._16_4_;
      pfVar1[5] = auVar15._20_4_ * auVar15._20_4_ + auVar16._20_4_ * auVar16._20_4_;
      pfVar1[6] = auVar15._24_4_ * auVar15._24_4_ + auVar16._24_4_ * auVar16._24_4_;
      pfVar1[7] = auVar15._28_4_ * auVar15._28_4_ + auVar16._28_4_ * auVar16._28_4_;
      uVar14 = uVar14 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar14 < uVar9);
  }
  if ((int)uVar9 < (int)param_3) {
    lVar10 = (longlong)(int)uVar9;
    if ((param_3 & 3) != 0) {
      lVar12 = param_1 + (longlong)(int)(param_3 * 2 & 0xfffffff0) * 4;
      lVar11 = 0;
      do {
        fVar2 = *(float *)(lVar12 + lVar11 * 8);
        fVar3 = *(float *)(lVar12 + 4 + lVar11 * 8);
        *(float *)(param_2 + lVar10 * 4 + lVar11 * 4) = fVar2 * fVar2 + fVar3 * fVar3;
        lVar11 = lVar11 + 1;
      } while ((param_3 & 3) != (uint)lVar11);
      lVar10 = lVar10 + lVar11;
    }
    if (uVar9 - param_3 < 0xfffffffd) {
      lVar12 = (int)param_3 - lVar10;
      param_2 = param_2 + lVar10 * 4;
      iVar6 = (int)lVar10 * 2;
      lVar10 = 0;
      do {
        iVar5 = (int)lVar10;
        fVar2 = *(float *)(param_1 + (longlong)(iVar6 + iVar5) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar6 + iVar5 + 1) * 4);
        *(float *)(param_2 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar6 + 2 + iVar5) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar6 + 3 + iVar5) * 4);
        *(float *)(param_2 + 4 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar6 + 4 + iVar5) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar6 + 5 + iVar5) * 4);
        *(float *)(param_2 + 8 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar6 + 6 + iVar5) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar6 + 7 + iVar5) * 4);
        *(float *)(param_2 + 0xc + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        lVar10 = lVar10 + 8;
        lVar12 = lVar12 + -4;
      } while (lVar12 != 0);
    }
  }
  return;
}

// ArrayComplexToPower_avx512skx @ 140a1a7e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPower_avx512skx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float fVar1;
  float fVar9;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  int *piVar20;
  uint *puVar21;
  byte bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  uint uVar34;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar30 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar30 = param_4;
  }
  if ((int)(uVar30 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar34 = 0;
    uVar31 = 0;
    do {
      uVar33 = (ulonglong)uVar34;
      pfVar17 = (float *)(param_1 + uVar33);
      fVar1 = pfVar17[1];
      fVar2 = pfVar17[2];
      fVar3 = pfVar17[3];
      fVar4 = pfVar17[4];
      fVar5 = pfVar17[5];
      fVar6 = pfVar17[6];
      fVar7 = pfVar17[7];
      pfVar18 = (float *)(param_2 + uVar33);
      fVar8 = pfVar18[1];
      fVar9 = pfVar18[2];
      fVar10 = pfVar18[3];
      fVar11 = pfVar18[4];
      fVar12 = pfVar18[5];
      fVar13 = pfVar18[6];
      fVar14 = pfVar18[7];
      pfVar19 = (float *)(param_3 + uVar33);
      *pfVar19 = *pfVar17 * *pfVar17 + *pfVar18 * *pfVar18;
      pfVar19[1] = fVar1 * fVar1 + fVar8 * fVar8;
      pfVar19[2] = fVar2 * fVar2 + fVar9 * fVar9;
      pfVar19[3] = fVar3 * fVar3 + fVar10 * fVar10;
      pfVar19[4] = fVar4 * fVar4 + fVar11 * fVar11;
      pfVar19[5] = fVar5 * fVar5 + fVar12 * fVar12;
      pfVar19[6] = fVar6 * fVar6 + fVar13 * fVar13;
      pfVar19[7] = fVar7 * fVar7 + fVar14 * fVar14;
      uVar31 = uVar31 + 8;
      uVar34 = uVar34 + 0x20;
    } while (uVar31 < (uVar30 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar31) {
      return;
    }
  }
  auVar35 = vpbroadcastd_avx512vl();
  auVar35 = vpor_avx2(auVar35,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar36 = vpbroadcastd_avx512vl();
  uVar33 = vpcmpgtd_avx512vl(auVar36,auVar35);
  lVar32 = (longlong)((int)uVar31 << 2);
  piVar20 = (int *)(param_1 + lVar32);
  bVar22 = (byte)uVar33;
  fVar1 = (float)((uint)(bVar22 & 1) * *piVar20);
  fVar2 = (float)((uint)((byte)(uVar33 >> 1) & 1) * piVar20[1]);
  fVar3 = (float)((uint)((byte)(uVar33 >> 2) & 1) * piVar20[2]);
  fVar4 = (float)((uint)((byte)(uVar33 >> 3) & 1) * piVar20[3]);
  fVar5 = (float)((uint)((byte)(uVar33 >> 4) & 1) * piVar20[4]);
  fVar6 = (float)((uint)((byte)(uVar33 >> 5) & 1) * piVar20[5]);
  fVar7 = (float)((uint)((byte)(uVar33 >> 6) & 1) * piVar20[6]);
  fVar8 = (float)((uint)(byte)(uVar33 >> 7) * piVar20[7]);
  piVar20 = (int *)(param_2 + lVar32);
  fVar9 = (float)((uint)(bVar22 & 1) * *piVar20);
  fVar10 = (float)((uint)((byte)(uVar33 >> 1) & 1) * piVar20[1]);
  fVar11 = (float)((uint)((byte)(uVar33 >> 2) & 1) * piVar20[2]);
  fVar12 = (float)((uint)((byte)(uVar33 >> 3) & 1) * piVar20[3]);
  fVar13 = (float)((uint)((byte)(uVar33 >> 4) & 1) * piVar20[4]);
  fVar14 = (float)((uint)((byte)(uVar33 >> 5) & 1) * piVar20[5]);
  fVar15 = (float)((uint)((byte)(uVar33 >> 6) & 1) * piVar20[6]);
  fVar16 = (float)((uint)(byte)(uVar33 >> 7) * piVar20[7]);
  puVar21 = (uint *)(param_3 + lVar32);
  bVar23 = (bool)((byte)(uVar33 >> 1) & 1);
  bVar24 = (bool)((byte)(uVar33 >> 2) & 1);
  bVar25 = (bool)((byte)(uVar33 >> 3) & 1);
  bVar26 = (bool)((byte)(uVar33 >> 4) & 1);
  bVar27 = (bool)((byte)(uVar33 >> 5) & 1);
  bVar28 = (bool)((byte)(uVar33 >> 6) & 1);
  bVar29 = SUB81(uVar33 >> 7,0);
  *puVar21 = (uint)(bVar22 & 1) * (int)(fVar1 * fVar1 + fVar9 * fVar9) |
             (uint)!(bool)(bVar22 & 1) * *puVar21;
  puVar21[1] = (uint)bVar23 * (int)(fVar2 * fVar2 + fVar10 * fVar10) | (uint)!bVar23 * puVar21[1];
  puVar21[2] = (uint)bVar24 * (int)(fVar3 * fVar3 + fVar11 * fVar11) | (uint)!bVar24 * puVar21[2];
  puVar21[3] = (uint)bVar25 * (int)(fVar4 * fVar4 + fVar12 * fVar12) | (uint)!bVar25 * puVar21[3];
  puVar21[4] = (uint)bVar26 * (int)(fVar5 * fVar5 + fVar13 * fVar13) | (uint)!bVar26 * puVar21[4];
  puVar21[5] = (uint)bVar27 * (int)(fVar6 * fVar6 + fVar14 * fVar14) | (uint)!bVar27 * puVar21[5];
  puVar21[6] = (uint)bVar28 * (int)(fVar7 * fVar7 + fVar15 * fVar15) | (uint)!bVar28 * puVar21[6];
  puVar21[7] = (uint)bVar29 * (int)(fVar8 * fVar8 + fVar16 * fVar16) | (uint)!bVar29 * puVar21[7];
  return;
}

// ArrayUnderflowClamp_avx512skx @ 140a1a880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayUnderflowClamp_avx512skx(longlong param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar24 [32];
  
  uVar12 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar12 = param_2;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    auVar20._4_4_ = __real_80800000;
    auVar20._0_4_ = __real_80800000;
    auVar20._8_4_ = __real_80800000;
    auVar20._12_4_ = __real_80800000;
    auVar20._16_4_ = __real_80800000;
    auVar20._20_4_ = __real_80800000;
    auVar20._24_4_ = __real_80800000;
    auVar20._28_4_ = __real_80800000;
    auVar19 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
    auVar24._4_4_ = __real_00800000;
    auVar24._0_4_ = __real_00800000;
    auVar24._8_4_ = __real_00800000;
    auVar24._12_4_ = __real_00800000;
    auVar24._16_4_ = __real_00800000;
    auVar24._20_4_ = __real_00800000;
    auVar24._24_4_ = __real_00800000;
    auVar24._28_4_ = __real_00800000;
    uVar13 = 0;
    do {
      auVar18 = *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15);
      uVar11 = vcmpps_avx512vl(auVar18,auVar20,0xe);
      auVar16._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * auVar19._4_4_;
      auVar16._0_4_ = (uint)((byte)uVar11 & 1) * auVar19._0_4_;
      auVar16._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * auVar19._8_4_;
      auVar16._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * auVar19._12_4_;
      auVar16._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar19._16_4_;
      auVar16._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar19._20_4_;
      auVar16._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar19._24_4_;
      auVar16._28_4_ = (uint)(byte)(uVar11 >> 7) * auVar19._28_4_;
      uVar11 = vcmpps_avx512vl(auVar18,auVar24,1);
      auVar17._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * auVar19._4_4_;
      auVar17._0_4_ = (uint)((byte)uVar11 & 1) * auVar19._0_4_;
      auVar17._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * auVar19._8_4_;
      auVar17._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * auVar19._12_4_;
      auVar17._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * auVar19._16_4_;
      auVar17._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * auVar19._20_4_;
      auVar17._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * auVar19._24_4_;
      auVar17._28_4_ = (uint)(byte)(uVar11 >> 7) * auVar19._28_4_;
      auVar18 = vpternlogd_avx512vl(auVar17,auVar18,auVar16,0x4c);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15) = auVar18;
      uVar13 = uVar13 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar13) {
      return;
    }
  }
  auVar19 = vpbroadcastd_avx512vl();
  auVar19 = vpor_avx2(auVar19,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar20 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar20,auVar19);
  lVar14 = (longlong)((int)uVar13 << 2);
  piVar1 = (int *)(param_1 + lVar14);
  auVar21._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar21._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar21._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar21._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar21._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar21._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar21._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar21._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar19._4_4_ = __real_80800000;
  auVar19._0_4_ = __real_80800000;
  auVar19._8_4_ = __real_80800000;
  auVar19._12_4_ = __real_80800000;
  auVar19._16_4_ = __real_80800000;
  auVar19._20_4_ = __real_80800000;
  auVar19._24_4_ = __real_80800000;
  auVar19._28_4_ = __real_80800000;
  uVar13 = vcmpps_avx512vl(auVar21,auVar19,0xe);
  auVar19 = vpcmpeqd_avx2(auVar20,auVar20);
  auVar22._4_4_ = (uint)((byte)(uVar13 >> 1) & 1) * auVar19._4_4_;
  auVar22._0_4_ = (uint)((byte)uVar13 & 1) * auVar19._0_4_;
  auVar22._8_4_ = (uint)((byte)(uVar13 >> 2) & 1) * auVar19._8_4_;
  auVar22._12_4_ = (uint)((byte)(uVar13 >> 3) & 1) * auVar19._12_4_;
  auVar22._16_4_ = (uint)((byte)(uVar13 >> 4) & 1) * auVar19._16_4_;
  auVar22._20_4_ = (uint)((byte)(uVar13 >> 5) & 1) * auVar19._20_4_;
  auVar22._24_4_ = (uint)((byte)(uVar13 >> 6) & 1) * auVar19._24_4_;
  auVar22._28_4_ = (uint)(byte)(uVar13 >> 7) * auVar19._28_4_;
  auVar18._4_4_ = __real_00800000;
  auVar18._0_4_ = __real_00800000;
  auVar18._8_4_ = __real_00800000;
  auVar18._12_4_ = __real_00800000;
  auVar18._16_4_ = __real_00800000;
  auVar18._20_4_ = __real_00800000;
  auVar18._24_4_ = __real_00800000;
  auVar18._28_4_ = __real_00800000;
  uVar13 = vcmpps_avx512vl(auVar21,auVar18,1);
  auVar23._4_4_ = (uint)((byte)(uVar13 >> 1) & 1) * auVar19._4_4_;
  auVar23._0_4_ = (uint)((byte)uVar13 & 1) * auVar19._0_4_;
  auVar23._8_4_ = (uint)((byte)(uVar13 >> 2) & 1) * auVar19._8_4_;
  auVar23._12_4_ = (uint)((byte)(uVar13 >> 3) & 1) * auVar19._12_4_;
  auVar23._16_4_ = (uint)((byte)(uVar13 >> 4) & 1) * auVar19._16_4_;
  auVar23._20_4_ = (uint)((byte)(uVar13 >> 5) & 1) * auVar19._20_4_;
  auVar23._24_4_ = (uint)((byte)(uVar13 >> 6) & 1) * auVar19._24_4_;
  auVar23._28_4_ = (uint)(byte)(uVar13 >> 7) * auVar19._28_4_;
  auVar19 = vpternlogd_avx512vl(auVar23,auVar21,auVar22,0x4c);
  puVar2 = (uint *)(param_1 + lVar14);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar19._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar19._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar19._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar19._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar19._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar19._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar19._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar19._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayRangeClamp_avx512skx @ 140a1a960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayRangeClamp_avx512skx(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  
  uVar12 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar12 = param_2;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar16._4_4_ = param_3;
    auVar16._0_4_ = param_3;
    auVar16._8_4_ = param_3;
    auVar16._12_4_ = param_3;
    auVar16._16_4_ = param_3;
    auVar16._20_4_ = param_3;
    auVar16._24_4_ = param_3;
    auVar16._28_4_ = param_3;
    auVar17._4_4_ = param_4;
    auVar17._0_4_ = param_4;
    auVar17._8_4_ = param_4;
    auVar17._12_4_ = param_4;
    auVar17._16_4_ = param_4;
    auVar17._20_4_ = param_4;
    auVar17._24_4_ = param_4;
    auVar17._28_4_ = param_4;
    uVar15 = 0;
    uVar13 = 0;
    do {
      auVar18 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15),auVar16);
      auVar18 = vminps_avx(auVar18,auVar17);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15) = auVar18;
      uVar13 = uVar13 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar13) {
      return;
    }
  }
  auVar16 = vpbroadcastd_avx512vl();
  auVar16 = vpor_avx2(auVar16,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar17 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar17,auVar16);
  lVar14 = (longlong)((int)uVar13 << 2);
  piVar1 = (int *)(param_1 + lVar14);
  auVar18._4_4_ = (uint)((byte)(uVar11 >> 1) & 1) * piVar1[1];
  auVar18._0_4_ = (uint)((byte)uVar11 & 1) * *piVar1;
  auVar18._8_4_ = (uint)((byte)(uVar11 >> 2) & 1) * piVar1[2];
  auVar18._12_4_ = (uint)((byte)(uVar11 >> 3) & 1) * piVar1[3];
  auVar18._16_4_ = (uint)((byte)(uVar11 >> 4) & 1) * piVar1[4];
  auVar18._20_4_ = (uint)((byte)(uVar11 >> 5) & 1) * piVar1[5];
  auVar18._24_4_ = (uint)((byte)(uVar11 >> 6) & 1) * piVar1[6];
  auVar18._28_4_ = (uint)(byte)(uVar11 >> 7) * piVar1[7];
  auVar19._4_4_ = param_3;
  auVar19._0_4_ = param_3;
  auVar19._8_4_ = param_3;
  auVar19._12_4_ = param_3;
  auVar19._16_4_ = param_3;
  auVar19._20_4_ = param_3;
  auVar19._24_4_ = param_3;
  auVar19._28_4_ = param_3;
  auVar16 = vmaxps_avx(auVar18,auVar19);
  auVar20._4_4_ = param_4;
  auVar20._0_4_ = param_4;
  auVar20._8_4_ = param_4;
  auVar20._12_4_ = param_4;
  auVar20._16_4_ = param_4;
  auVar20._20_4_ = param_4;
  auVar20._24_4_ = param_4;
  auVar20._28_4_ = param_4;
  auVar16 = vminps_avx(auVar16,auVar20);
  puVar2 = (uint *)(param_1 + lVar14);
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * auVar16._0_4_ | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * auVar16._4_4_ | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * auVar16._8_4_ | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * auVar16._12_4_ | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * auVar16._16_4_ | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * auVar16._20_4_ | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * auVar16._24_4_ | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * auVar16._28_4_ | (uint)!bVar10 * puVar2[7];
  return;
}

// ArraySetToConstantInplace_avx512skx @ 140a1aa10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySetToConstantInplace_avx512skx(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar12 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar12 = param_2;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    do {
      piVar1 = (int *)(param_1 + (ulonglong)uVar14);
      *piVar1 = param_3;
      piVar1[1] = param_3;
      piVar1[2] = param_3;
      piVar1[3] = param_3;
      piVar1[4] = param_3;
      piVar1[5] = param_3;
      piVar1[6] = param_3;
      piVar1[7] = param_3;
      uVar13 = uVar13 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar13) {
      return;
    }
  }
  auVar15 = vpbroadcastd_avx512vl();
  auVar15 = vpor_avx2(auVar15,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar16 = vpbroadcastd_avx512vl();
  uVar11 = vpcmpgtd_avx512vl(auVar16,auVar15);
  puVar2 = (uint *)(param_1 + ((int)uVar13 << 2));
  bVar3 = (bool)((byte)uVar11 & 1);
  bVar4 = (bool)((byte)(uVar11 >> 1) & 1);
  bVar5 = (bool)((byte)(uVar11 >> 2) & 1);
  bVar6 = (bool)((byte)(uVar11 >> 3) & 1);
  bVar7 = (bool)((byte)(uVar11 >> 4) & 1);
  bVar8 = (bool)((byte)(uVar11 >> 5) & 1);
  bVar9 = (bool)((byte)(uVar11 >> 6) & 1);
  bVar10 = SUB81(uVar11 >> 7,0);
  *puVar2 = (uint)bVar3 * param_3 | (uint)!bVar3 * *puVar2;
  puVar2[1] = (uint)bVar4 * param_3 | (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar5 * param_3 | (uint)!bVar5 * puVar2[2];
  puVar2[3] = (uint)bVar6 * param_3 | (uint)!bVar6 * puVar2[3];
  puVar2[4] = (uint)bVar7 * param_3 | (uint)!bVar7 * puVar2[4];
  puVar2[5] = (uint)bVar8 * param_3 | (uint)!bVar8 * puVar2[5];
  puVar2[6] = (uint)bVar9 * param_3 | (uint)!bVar9 * puVar2[6];
  puVar2[7] = (uint)bVar10 * param_3 | (uint)!bVar10 * puVar2[7];
  return;
}

// ArrayWeightedSumTwoGain_avx512skx @ 140a1aa90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumTwoGain_avx512skx
               (longlong param_1,float param_2,longlong param_3,float param_4,longlong param_5,
               uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
  ulonglong uVar44;
  uint uVar45;
  ulonglong uVar46;
  uint uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar45 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar45 = param_6;
  }
  if ((int)(uVar45 & 0xfffffff8) < 1) {
    uVar46 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar46 = 0;
    do {
      uVar44 = (ulonglong)uVar47;
      pfVar1 = (float *)(param_3 + uVar44);
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar24 = pfVar1[3];
      fVar25 = pfVar1[4];
      fVar26 = pfVar1[5];
      fVar27 = pfVar1[6];
      fVar28 = pfVar1[7];
      pfVar2 = (float *)(param_1 + uVar44);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      fVar10 = pfVar2[4];
      fVar11 = pfVar2[5];
      fVar12 = pfVar2[6];
      fVar13 = pfVar2[7];
      pfVar3 = (float *)(param_5 + uVar44);
      *pfVar3 = param_2 * *pfVar2 + param_4 * *pfVar1;
      pfVar3[1] = param_2 * fVar7 + param_4 * fVar22;
      pfVar3[2] = param_2 * fVar8 + param_4 * fVar23;
      pfVar3[3] = param_2 * fVar9 + param_4 * fVar24;
      pfVar3[4] = param_2 * fVar10 + param_4 * fVar25;
      pfVar3[5] = param_2 * fVar11 + param_4 * fVar26;
      pfVar3[6] = param_2 * fVar12 + param_4 * fVar27;
      pfVar3[7] = param_2 * fVar13 + param_4 * fVar28;
      uVar46 = uVar46 + 8;
      uVar47 = uVar47 + 0x20;
    } while (uVar46 < (uVar45 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar46) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar44 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar43 = (longlong)((int)uVar46 << 2);
  piVar4 = (int *)(param_1 + lVar43);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar14 = (byte)uVar44;
  piVar5 = (int *)(param_3 + lVar43);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_5 + lVar43);
  bVar15 = (bool)((byte)(uVar44 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar44 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar44 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar44 >> 4) & 1);
  bVar19 = (bool)((byte)(uVar44 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar44 >> 6) & 1);
  bVar21 = SUB81(uVar44 >> 7,0);
  *puVar6 = (uint)(bVar14 & 1) *
            (int)((float)((uint)(bVar14 & 1) * *piVar4) * param_2 +
                 param_4 * (float)((uint)(bVar14 & 1) * *piVar5)) |
            (uint)!(bool)(bVar14 & 1) * *puVar6;
  puVar6[1] = (uint)bVar15 *
              (int)((float)((uint)((byte)(uVar44 >> 1) & 1) * iVar29) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 1) & 1) * iVar36)) |
              (uint)!bVar15 * puVar6[1];
  puVar6[2] = (uint)bVar16 *
              (int)((float)((uint)((byte)(uVar44 >> 2) & 1) * iVar30) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 2) & 1) * iVar37)) |
              (uint)!bVar16 * puVar6[2];
  puVar6[3] = (uint)bVar17 *
              (int)((float)((uint)((byte)(uVar44 >> 3) & 1) * iVar31) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 3) & 1) * iVar38)) |
              (uint)!bVar17 * puVar6[3];
  puVar6[4] = (uint)bVar18 *
              (int)((float)((uint)((byte)(uVar44 >> 4) & 1) * iVar32) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 4) & 1) * iVar39)) |
              (uint)!bVar18 * puVar6[4];
  puVar6[5] = (uint)bVar19 *
              (int)((float)((uint)((byte)(uVar44 >> 5) & 1) * iVar33) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 5) & 1) * iVar40)) |
              (uint)!bVar19 * puVar6[5];
  puVar6[6] = (uint)bVar20 *
              (int)((float)((uint)((byte)(uVar44 >> 6) & 1) * iVar34) * param_2 +
                   param_4 * (float)((uint)((byte)(uVar44 >> 6) & 1) * iVar41)) |
              (uint)!bVar20 * puVar6[6];
  puVar6[7] = (uint)bVar21 *
              (int)((float)((uint)(byte)(uVar44 >> 7) * iVar35) * param_2 +
                   param_4 * (float)((uint)(byte)(uVar44 >> 7) * iVar42)) |
              (uint)!bVar21 * puVar6[7];
  return;
}

// ArrayWeightedSumOneGain_avx512skx @ 140a1ab60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumOneGain_avx512skx
               (longlong param_1,float param_2,longlong param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  longlong lVar43;
  uint uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  uint uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar44 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar44 = param_5;
  }
  if ((int)(uVar44 & 0xfffffff8) < 1) {
    uVar45 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar45 = 0;
    do {
      uVar46 = (ulonglong)uVar47;
      pfVar1 = (float *)(param_1 + uVar46);
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar24 = pfVar1[3];
      fVar25 = pfVar1[4];
      fVar26 = pfVar1[5];
      fVar27 = pfVar1[6];
      fVar28 = pfVar1[7];
      pfVar2 = (float *)(param_3 + uVar46);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      fVar10 = pfVar2[4];
      fVar11 = pfVar2[5];
      fVar12 = pfVar2[6];
      fVar13 = pfVar2[7];
      pfVar3 = (float *)(param_4 + uVar46);
      *pfVar3 = param_2 * *pfVar1 + *pfVar2;
      pfVar3[1] = param_2 * fVar22 + fVar7;
      pfVar3[2] = param_2 * fVar23 + fVar8;
      pfVar3[3] = param_2 * fVar24 + fVar9;
      pfVar3[4] = param_2 * fVar25 + fVar10;
      pfVar3[5] = param_2 * fVar26 + fVar11;
      pfVar3[6] = param_2 * fVar27 + fVar12;
      pfVar3[7] = param_2 * fVar28 + fVar13;
      uVar45 = uVar45 + 8;
      uVar47 = uVar47 + 0x20;
    } while (uVar45 < (uVar44 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar45) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar46 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar43 = (longlong)((int)uVar45 << 2);
  piVar4 = (int *)(param_1 + lVar43);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar14 = (byte)uVar46;
  piVar5 = (int *)(param_3 + lVar43);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_4 + lVar43);
  bVar15 = (bool)((byte)(uVar46 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar46 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar46 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar46 >> 4) & 1);
  bVar19 = (bool)((byte)(uVar46 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar46 >> 6) & 1);
  bVar21 = SUB81(uVar46 >> 7,0);
  *puVar6 = (uint)(bVar14 & 1) *
            (int)((float)((uint)(bVar14 & 1) * *piVar4) * param_2 +
                 (float)((uint)(bVar14 & 1) * *piVar5)) | (uint)!(bool)(bVar14 & 1) * *puVar6;
  puVar6[1] = (uint)bVar15 *
              (int)((float)((uint)((byte)(uVar46 >> 1) & 1) * iVar29) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 1) & 1) * iVar36)) | (uint)!bVar15 * puVar6[1];
  puVar6[2] = (uint)bVar16 *
              (int)((float)((uint)((byte)(uVar46 >> 2) & 1) * iVar30) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 2) & 1) * iVar37)) | (uint)!bVar16 * puVar6[2];
  puVar6[3] = (uint)bVar17 *
              (int)((float)((uint)((byte)(uVar46 >> 3) & 1) * iVar31) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 3) & 1) * iVar38)) | (uint)!bVar17 * puVar6[3];
  puVar6[4] = (uint)bVar18 *
              (int)((float)((uint)((byte)(uVar46 >> 4) & 1) * iVar32) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 4) & 1) * iVar39)) | (uint)!bVar18 * puVar6[4];
  puVar6[5] = (uint)bVar19 *
              (int)((float)((uint)((byte)(uVar46 >> 5) & 1) * iVar33) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 5) & 1) * iVar40)) | (uint)!bVar19 * puVar6[5];
  puVar6[6] = (uint)bVar20 *
              (int)((float)((uint)((byte)(uVar46 >> 6) & 1) * iVar34) * param_2 +
                   (float)((uint)((byte)(uVar46 >> 6) & 1) * iVar41)) | (uint)!bVar20 * puVar6[6];
  puVar6[7] = (uint)bVar21 *
              (int)((float)((uint)(byte)(uVar46 >> 7) * iVar35) * param_2 +
                   (float)((uint)(byte)(uVar46 >> 7) * iVar42)) | (uint)!bVar21 * puVar6[7];
  return;
}

// ArrayFade_avx512skx @ 140a1ac00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade_avx512skx(longlong param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar34;
  
  auVar33 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  fVar34 = (param_4 - param_3) / (float)(int)param_2;
  uVar28 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar28 = param_2;
  }
  if ((int)(uVar28 & 0xfffffff8) < 1) {
    uVar29 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar31 = 0;
    uVar29 = 0;
    do {
      auVar32 = vpbroadcastd_avx512vl();
      auVar32 = vpor_avx2(auVar32,auVar33);
      auVar32 = vcvtdq2ps_avx(auVar32);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar31);
      *pfVar2 = (fVar34 * auVar32._0_4_ + param_3) * *pfVar1;
      pfVar2[1] = (fVar34 * auVar32._4_4_ + param_3) * fVar14;
      pfVar2[2] = (fVar34 * auVar32._8_4_ + param_3) * fVar15;
      pfVar2[3] = (fVar34 * auVar32._12_4_ + param_3) * fVar16;
      pfVar2[4] = (fVar34 * auVar32._16_4_ + param_3) * fVar17;
      pfVar2[5] = (fVar34 * auVar32._20_4_ + param_3) * fVar18;
      pfVar2[6] = (fVar34 * auVar32._24_4_ + param_3) * fVar19;
      pfVar2[7] = (fVar34 * auVar32._28_4_ + param_3) * fVar20;
      uVar29 = uVar29 + 8;
      uVar31 = uVar31 + 0x20;
    } while (uVar29 < (uVar28 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar29) {
      return;
    }
  }
  auVar33 = vpbroadcastd_avx512vl();
  auVar33 = vpor_avx2(auVar33,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar32 = vpbroadcastd_avx512vl();
  uVar13 = vpcmpgtd_avx512vl(auVar32,auVar33);
  auVar33 = vcvtdq2ps_avx(auVar33);
  lVar30 = (longlong)((int)uVar29 << 2);
  piVar3 = (int *)(param_1 + lVar30);
  iVar21 = piVar3[1];
  iVar22 = piVar3[2];
  iVar23 = piVar3[3];
  iVar24 = piVar3[4];
  iVar25 = piVar3[5];
  iVar26 = piVar3[6];
  iVar27 = piVar3[7];
  puVar4 = (uint *)(param_1 + lVar30);
  bVar5 = (bool)((byte)uVar13 & 1);
  bVar6 = (bool)((byte)(uVar13 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar13 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar13 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar13 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar13 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar13 >> 6) & 1);
  bVar12 = SUB81(uVar13 >> 7,0);
  *puVar4 = (uint)bVar5 *
            (int)((auVar33._0_4_ * fVar34 + param_3) * (float)((uint)((byte)uVar13 & 1) * *piVar3))
            | (uint)!bVar5 * *puVar4;
  puVar4[1] = (uint)bVar6 *
              (int)((auVar33._4_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 1) & 1) * iVar21)) | (uint)!bVar6 * puVar4[1];
  puVar4[2] = (uint)bVar7 *
              (int)((auVar33._8_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 2) & 1) * iVar22)) | (uint)!bVar7 * puVar4[2];
  puVar4[3] = (uint)bVar8 *
              (int)((auVar33._12_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 3) & 1) * iVar23)) | (uint)!bVar8 * puVar4[3];
  puVar4[4] = (uint)bVar9 *
              (int)((auVar33._16_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 4) & 1) * iVar24)) | (uint)!bVar9 * puVar4[4];
  puVar4[5] = (uint)bVar10 *
              (int)((auVar33._20_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 5) & 1) * iVar25)) | (uint)!bVar10 * puVar4[5];
  puVar4[6] = (uint)bVar11 *
              (int)((auVar33._24_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 6) & 1) * iVar26)) | (uint)!bVar11 * puVar4[6];
  puVar4[7] = (uint)bVar12 *
              (int)((auVar33._28_4_ * fVar34 + param_3) *
                   (float)((uint)(byte)(uVar13 >> 7) * iVar27)) | (uint)!bVar12 * puVar4[7];
  return;
}

// ArrayFade2_avx512skx @ 140a1acd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade2_avx512skx
               (longlong param_1,uint param_2,float param_3,float param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar34;
  
  auVar33 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  fVar34 = (param_4 - param_3) / (float)(int)param_2;
  uVar29 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar29 = param_2;
  }
  if ((int)(uVar29 & 0xfffffff8) < 1) {
    uVar30 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar31 = 0;
    uVar30 = 0;
    do {
      auVar32 = vpbroadcastd_avx512vl();
      auVar32 = vpor_avx2(auVar32,auVar33);
      auVar32 = vcvtdq2ps_avx(auVar32);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      pfVar2 = (float *)(param_5 + (ulonglong)uVar31);
      *pfVar2 = (fVar34 * auVar32._0_4_ + param_3) * *pfVar1;
      pfVar2[1] = (fVar34 * auVar32._4_4_ + param_3) * fVar14;
      pfVar2[2] = (fVar34 * auVar32._8_4_ + param_3) * fVar15;
      pfVar2[3] = (fVar34 * auVar32._12_4_ + param_3) * fVar16;
      pfVar2[4] = (fVar34 * auVar32._16_4_ + param_3) * fVar17;
      pfVar2[5] = (fVar34 * auVar32._20_4_ + param_3) * fVar18;
      pfVar2[6] = (fVar34 * auVar32._24_4_ + param_3) * fVar19;
      pfVar2[7] = (fVar34 * auVar32._28_4_ + param_3) * fVar20;
      uVar30 = uVar30 + 8;
      uVar31 = uVar31 + 0x20;
    } while (uVar30 < (uVar29 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar30) {
      return;
    }
  }
  auVar33 = vpbroadcastd_avx512vl();
  auVar33 = vpor_avx2(auVar33,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar32 = vpbroadcastd_avx512vl();
  uVar13 = vpcmpgtd_avx512vl(auVar32,auVar33);
  auVar33 = vcvtdq2ps_avx(auVar33);
  lVar28 = (longlong)((int)uVar30 << 2);
  piVar3 = (int *)(param_1 + lVar28);
  iVar21 = piVar3[1];
  iVar22 = piVar3[2];
  iVar23 = piVar3[3];
  iVar24 = piVar3[4];
  iVar25 = piVar3[5];
  iVar26 = piVar3[6];
  iVar27 = piVar3[7];
  puVar4 = (uint *)(param_5 + lVar28);
  bVar5 = (bool)((byte)uVar13 & 1);
  bVar6 = (bool)((byte)(uVar13 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar13 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar13 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar13 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar13 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar13 >> 6) & 1);
  bVar12 = SUB81(uVar13 >> 7,0);
  *puVar4 = (uint)bVar5 *
            (int)((auVar33._0_4_ * fVar34 + param_3) * (float)((uint)((byte)uVar13 & 1) * *piVar3))
            | (uint)!bVar5 * *puVar4;
  puVar4[1] = (uint)bVar6 *
              (int)((auVar33._4_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 1) & 1) * iVar21)) | (uint)!bVar6 * puVar4[1];
  puVar4[2] = (uint)bVar7 *
              (int)((auVar33._8_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 2) & 1) * iVar22)) | (uint)!bVar7 * puVar4[2];
  puVar4[3] = (uint)bVar8 *
              (int)((auVar33._12_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 3) & 1) * iVar23)) | (uint)!bVar8 * puVar4[3];
  puVar4[4] = (uint)bVar9 *
              (int)((auVar33._16_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 4) & 1) * iVar24)) | (uint)!bVar9 * puVar4[4];
  puVar4[5] = (uint)bVar10 *
              (int)((auVar33._20_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 5) & 1) * iVar25)) | (uint)!bVar10 * puVar4[5];
  puVar4[6] = (uint)bVar11 *
              (int)((auVar33._24_4_ * fVar34 + param_3) *
                   (float)((uint)((byte)(uVar13 >> 6) & 1) * iVar26)) | (uint)!bVar11 * puVar4[6];
  puVar4[7] = (uint)bVar12 *
              (int)((auVar33._28_4_ * fVar34 + param_3) *
                   (float)((uint)(byte)(uVar13 >> 7) * iVar27)) | (uint)!bVar12 * puVar4[7];
  return;
}

// ArrayMixInWithGain_avx512skx @ 140a1ada0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithGain_avx512skx(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  byte bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar43 = param_3;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar46 = 0;
    uVar44 = 0;
    do {
      uVar47 = (ulonglong)uVar46;
      pfVar1 = (float *)(param_1 + uVar47);
      fVar22 = pfVar1[1];
      fVar23 = pfVar1[2];
      fVar24 = pfVar1[3];
      fVar25 = pfVar1[4];
      fVar26 = pfVar1[5];
      fVar27 = pfVar1[6];
      fVar28 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar47);
      fVar7 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      fVar10 = pfVar2[4];
      fVar11 = pfVar2[5];
      fVar12 = pfVar2[6];
      fVar13 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar47);
      *pfVar3 = param_4 * *pfVar1 + *pfVar2;
      pfVar3[1] = param_4 * fVar22 + fVar7;
      pfVar3[2] = param_4 * fVar23 + fVar8;
      pfVar3[3] = param_4 * fVar24 + fVar9;
      pfVar3[4] = param_4 * fVar25 + fVar10;
      pfVar3[5] = param_4 * fVar26 + fVar11;
      pfVar3[6] = param_4 * fVar27 + fVar12;
      pfVar3[7] = param_4 * fVar28 + fVar13;
      uVar44 = uVar44 + 8;
      uVar46 = uVar46 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar47 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar14 = (byte)uVar47;
  piVar5 = (int *)(param_2 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_2 + lVar45);
  bVar15 = (bool)((byte)(uVar47 >> 1) & 1);
  bVar16 = (bool)((byte)(uVar47 >> 2) & 1);
  bVar17 = (bool)((byte)(uVar47 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar47 >> 4) & 1);
  bVar19 = (bool)((byte)(uVar47 >> 5) & 1);
  bVar20 = (bool)((byte)(uVar47 >> 6) & 1);
  bVar21 = SUB81(uVar47 >> 7,0);
  *puVar6 = (uint)(bVar14 & 1) *
            (int)((float)((uint)(bVar14 & 1) * *piVar4) * param_4 +
                 (float)((uint)(bVar14 & 1) * *piVar5)) | (uint)!(bool)(bVar14 & 1) * *puVar6;
  puVar6[1] = (uint)bVar15 *
              (int)((float)((uint)((byte)(uVar47 >> 1) & 1) * iVar29) * param_4 +
                   (float)((uint)((byte)(uVar47 >> 1) & 1) * iVar36)) | (uint)!bVar15 * puVar6[1];
  puVar6[2] = (uint)bVar16 *
              (int)((float)((uint)((byte)(uVar47 >> 2) & 1) * iVar30) * param_4 +
                   (float)((uint)((byte)(uVar47 >> 2) & 1) * iVar37)) | (uint)!bVar16 * puVar6[2];
  puVar6[3] = (uint)bVar17 *
              (int)((float)((uint)((byte)(uVar47 >> 3) & 1) * iVar31) * param_4 +
                   (float)((uint)((byte)(uVar47 >> 3) & 1) * iVar38)) | (uint)!bVar17 * puVar6[3];
  puVar6[4] = (uint)bVar18 *
              (int)((float)((uint)((byte)(uVar47 >> 4) & 1) * iVar32) * param_4 +
                   (float)((uint)((byte)(uVar47 >> 4) & 1) * iVar39)) | (uint)!bVar18 * puVar6[4];
  puVar6[5] = (uint)bVar19 *
              (int)((float)((uint)((byte)(uVar47 >> 5) & 1) * iVar33) * param_4 +
                   (float)((uint)((byte)(uVar47 >> 5) & 1) * iVar40)) | (uint)!bVar19 * puVar6[5];
  puVar6[6] = (uint)bVar20 *
              (int)((float)((uint)((byte)(uVar47 >> 6) & 1) * iVar34) * param_4 +
                   (float)((uint)((byte)(uVar47 >> 6) & 1) * iVar41)) | (uint)!bVar20 * puVar6[6];
  puVar6[7] = (uint)bVar21 *
              (int)((float)((uint)(byte)(uVar47 >> 7) * iVar35) * param_4 +
                   (float)((uint)(byte)(uVar47 >> 7) * iVar42)) | (uint)!bVar21 * puVar6[7];
  return;
}

// ArrayMixIn_avx512skx @ 140a1ae40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixIn_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  ulonglong uVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  uVar43 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar43 = param_3;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar46 = 0;
    uVar44 = 0;
    do {
      uVar47 = (ulonglong)uVar46;
      pfVar1 = (float *)(param_1 + uVar47);
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      fVar18 = pfVar1[4];
      fVar19 = pfVar1[5];
      fVar20 = pfVar1[6];
      fVar21 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar47);
      fVar22 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar24 = pfVar2[3];
      fVar25 = pfVar2[4];
      fVar26 = pfVar2[5];
      fVar27 = pfVar2[6];
      fVar28 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar47);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar15 + fVar22;
      pfVar3[2] = fVar16 + fVar23;
      pfVar3[3] = fVar17 + fVar24;
      pfVar3[4] = fVar18 + fVar25;
      pfVar3[5] = fVar19 + fVar26;
      pfVar3[6] = fVar20 + fVar27;
      pfVar3[7] = fVar21 + fVar28;
      uVar44 = uVar44 + 8;
      uVar46 = uVar46 + 0x20;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar44) {
      return;
    }
  }
  auVar48 = vpbroadcastd_avx512vl();
  auVar48 = vpor_avx2(auVar48,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar49 = vpbroadcastd_avx512vl();
  uVar47 = vpcmpgtd_avx512vl(auVar49,auVar48);
  lVar45 = (longlong)((int)uVar44 << 2);
  piVar4 = (int *)(param_1 + lVar45);
  iVar29 = piVar4[1];
  iVar30 = piVar4[2];
  iVar31 = piVar4[3];
  iVar32 = piVar4[4];
  iVar33 = piVar4[5];
  iVar34 = piVar4[6];
  iVar35 = piVar4[7];
  bVar7 = (byte)uVar47;
  piVar5 = (int *)(param_2 + lVar45);
  iVar36 = piVar5[1];
  iVar37 = piVar5[2];
  iVar38 = piVar5[3];
  iVar39 = piVar5[4];
  iVar40 = piVar5[5];
  iVar41 = piVar5[6];
  iVar42 = piVar5[7];
  puVar6 = (uint *)(param_2 + lVar45);
  bVar8 = (bool)((byte)(uVar47 >> 1) & 1);
  bVar9 = (bool)((byte)(uVar47 >> 2) & 1);
  bVar10 = (bool)((byte)(uVar47 >> 3) & 1);
  bVar11 = (bool)((byte)(uVar47 >> 4) & 1);
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  bVar13 = (bool)((byte)(uVar47 >> 6) & 1);
  bVar14 = SUB81(uVar47 >> 7,0);
  *puVar6 = (uint)(bVar7 & 1) *
            (int)((float)((uint)(bVar7 & 1) * *piVar4) + (float)((uint)(bVar7 & 1) * *piVar5)) |
            (uint)!(bool)(bVar7 & 1) * *puVar6;
  puVar6[1] = (uint)bVar8 *
              (int)((float)((uint)((byte)(uVar47 >> 1) & 1) * iVar29) +
                   (float)((uint)((byte)(uVar47 >> 1) & 1) * iVar36)) | (uint)!bVar8 * puVar6[1];
  puVar6[2] = (uint)bVar9 *
              (int)((float)((uint)((byte)(uVar47 >> 2) & 1) * iVar30) +
                   (float)((uint)((byte)(uVar47 >> 2) & 1) * iVar37)) | (uint)!bVar9 * puVar6[2];
  puVar6[3] = (uint)bVar10 *
              (int)((float)((uint)((byte)(uVar47 >> 3) & 1) * iVar31) +
                   (float)((uint)((byte)(uVar47 >> 3) & 1) * iVar38)) | (uint)!bVar10 * puVar6[3];
  puVar6[4] = (uint)bVar11 *
              (int)((float)((uint)((byte)(uVar47 >> 4) & 1) * iVar32) +
                   (float)((uint)((byte)(uVar47 >> 4) & 1) * iVar39)) | (uint)!bVar11 * puVar6[4];
  puVar6[5] = (uint)bVar12 *
              (int)((float)((uint)((byte)(uVar47 >> 5) & 1) * iVar33) +
                   (float)((uint)((byte)(uVar47 >> 5) & 1) * iVar40)) | (uint)!bVar12 * puVar6[5];
  puVar6[6] = (uint)bVar13 *
              (int)((float)((uint)((byte)(uVar47 >> 6) & 1) * iVar34) +
                   (float)((uint)((byte)(uVar47 >> 6) & 1) * iVar41)) | (uint)!bVar13 * puVar6[6];
  puVar6[7] = (uint)bVar14 *
              (int)((float)((uint)(byte)(uVar47 >> 7) * iVar35) +
                   (float)((uint)(byte)(uVar47 >> 7) * iVar42)) | (uint)!bVar14 * puVar6[7];
  return;
}

// ArrayMixInWithDelta_avx512skx @ 140a1aed0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithDelta_avx512skx
               (longlong param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  float fVar33;
  undefined1 auVar34 [32];
  
  auVar32 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  fVar33 = (param_5 - param_4) / (float)(int)param_3;
  uVar26 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar26 = param_3;
  }
  if ((int)(uVar26 & 0xfffffff8) < 1) {
    uVar27 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar29 = 0;
    uVar27 = 0;
    do {
      auVar31 = vpbroadcastd_avx512vl();
      auVar31 = vpor_avx2(auVar31,auVar32);
      auVar31 = vcvtdq2ps_avx(auVar31);
      auVar34._0_4_ = fVar33 * auVar31._0_4_ + param_4;
      auVar34._4_4_ = fVar33 * auVar31._4_4_ + param_4;
      auVar34._8_4_ = fVar33 * auVar31._8_4_ + param_4;
      auVar34._12_4_ = fVar33 * auVar31._12_4_ + param_4;
      auVar34._16_4_ = fVar33 * auVar31._16_4_ + param_4;
      auVar34._20_4_ = fVar33 * auVar31._20_4_ + param_4;
      auVar34._24_4_ = fVar33 * auVar31._24_4_ + param_4;
      auVar34._28_4_ = fVar33 * auVar31._28_4_ + param_4;
      uVar30 = (ulonglong)uVar29;
      auVar31 = vfmadd213ps_avx512vl
                          (*(undefined1 (*) [32])(param_1 + uVar30),auVar34,
                           *(undefined1 (*) [32])(param_2 + uVar30));
      *(undefined1 (*) [32])(param_2 + uVar30) = auVar31;
      uVar27 = uVar27 + 8;
      uVar29 = uVar29 + 0x20;
    } while (uVar27 < (uVar26 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar27) {
      return;
    }
  }
  auVar32 = vpbroadcastd_avx512vl();
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar31 = vpbroadcastd_avx512vl();
  uVar30 = vpcmpgtd_avx512vl(auVar31,auVar32);
  auVar32 = vcvtdq2ps_avx(auVar32);
  lVar28 = (longlong)((int)uVar27 << 2);
  piVar1 = (int *)(param_1 + lVar28);
  iVar12 = piVar1[1];
  iVar13 = piVar1[2];
  iVar14 = piVar1[3];
  iVar15 = piVar1[4];
  iVar16 = piVar1[5];
  iVar17 = piVar1[6];
  iVar18 = piVar1[7];
  bVar4 = (byte)uVar30;
  piVar2 = (int *)(param_2 + lVar28);
  iVar19 = piVar2[1];
  iVar20 = piVar2[2];
  iVar21 = piVar2[3];
  iVar22 = piVar2[4];
  iVar23 = piVar2[5];
  iVar24 = piVar2[6];
  iVar25 = piVar2[7];
  puVar3 = (uint *)(param_2 + lVar28);
  bVar5 = (bool)((byte)(uVar30 >> 1) & 1);
  bVar6 = (bool)((byte)(uVar30 >> 2) & 1);
  bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
  bVar8 = (bool)((byte)(uVar30 >> 4) & 1);
  bVar9 = (bool)((byte)(uVar30 >> 5) & 1);
  bVar10 = (bool)((byte)(uVar30 >> 6) & 1);
  bVar11 = SUB81(uVar30 >> 7,0);
  *puVar3 = (uint)(bVar4 & 1) *
            (int)((auVar32._0_4_ * fVar33 + param_4) * (float)((uint)(bVar4 & 1) * *piVar1) +
                 (float)((uint)(bVar4 & 1) * *piVar2)) | (uint)!(bool)(bVar4 & 1) * *puVar3;
  puVar3[1] = (uint)bVar5 *
              (int)((auVar32._4_4_ * fVar33 + param_4) *
                    (float)((uint)((byte)(uVar30 >> 1) & 1) * iVar12) +
                   (float)((uint)((byte)(uVar30 >> 1) & 1) * iVar19)) | (uint)!bVar5 * puVar3[1];
  puVar3[2] = (uint)bVar6 *
              (int)((auVar32._8_4_ * fVar33 + param_4) *
                    (float)((uint)((byte)(uVar30 >> 2) & 1) * iVar13) +
                   (float)((uint)((byte)(uVar30 >> 2) & 1) * iVar20)) | (uint)!bVar6 * puVar3[2];
  puVar3[3] = (uint)bVar7 *
              (int)((auVar32._12_4_ * fVar33 + param_4) *
                    (float)((uint)((byte)(uVar30 >> 3) & 1) * iVar14) +
                   (float)((uint)((byte)(uVar30 >> 3) & 1) * iVar21)) | (uint)!bVar7 * puVar3[3];
  puVar3[4] = (uint)bVar8 *
              (int)((auVar32._16_4_ * fVar33 + param_4) *
                    (float)((uint)((byte)(uVar30 >> 4) & 1) * iVar15) +
                   (float)((uint)((byte)(uVar30 >> 4) & 1) * iVar22)) | (uint)!bVar8 * puVar3[4];
  puVar3[5] = (uint)bVar9 *
              (int)((auVar32._20_4_ * fVar33 + param_4) *
                    (float)((uint)((byte)(uVar30 >> 5) & 1) * iVar16) +
                   (float)((uint)((byte)(uVar30 >> 5) & 1) * iVar23)) | (uint)!bVar9 * puVar3[5];
  puVar3[6] = (uint)bVar10 *
              (int)((auVar32._24_4_ * fVar33 + param_4) *
                    (float)((uint)((byte)(uVar30 >> 6) & 1) * iVar17) +
                   (float)((uint)((byte)(uVar30 >> 6) & 1) * iVar24)) | (uint)!bVar10 * puVar3[6];
  puVar3[7] = (uint)bVar11 *
              (int)((auVar32._28_4_ * fVar33 + param_4) *
                    (float)((uint)(byte)(uVar30 >> 7) * iVar18) +
                   (float)((uint)(byte)(uVar30 >> 7) * iVar25)) | (uint)!bVar11 * puVar3[7];
  return;
}

// TransformArrayRow_avx512skx @ 140a1afc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformArrayRow_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [64];
  
  uVar9 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar9 = param_5;
  }
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar10 = 0;
    auVar14 = ZEXT832(0);
    if ((int)param_5 < 1) goto LAB_140a1b047;
  }
  else {
    auVar15 = ZEXT864(0);
    uVar8 = 0;
    uVar10 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar8);
      pfVar2 = (float *)(param_2 + (ulonglong)uVar8);
      auVar14._0_4_ = *pfVar1 * *pfVar2 + auVar15._0_4_;
      auVar14._4_4_ = pfVar1[1] * pfVar2[1] + auVar15._4_4_;
      auVar14._8_4_ = pfVar1[2] * pfVar2[2] + auVar15._8_4_;
      auVar14._12_4_ = pfVar1[3] * pfVar2[3] + auVar15._12_4_;
      auVar14._16_4_ = pfVar1[4] * pfVar2[4] + auVar15._16_4_;
      auVar14._20_4_ = pfVar1[5] * pfVar2[5] + auVar15._20_4_;
      auVar14._24_4_ = pfVar1[6] * pfVar2[6] + auVar15._24_4_;
      auVar14._28_4_ = pfVar1[7] * pfVar2[7] + auVar15._28_4_;
      auVar15 = ZEXT3264(auVar14);
      uVar10 = uVar10 + 8;
      uVar8 = uVar8 + 0x20;
    } while (uVar10 < (uVar9 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar10) goto LAB_140a1b047;
  }
  auVar11 = vpbroadcastd_avx512vl();
  auVar11 = vpor_avx2(auVar11,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar12 = vpbroadcastd_avx512vl();
  uVar6 = vpcmpgtd_avx512vl(auVar12,auVar11);
  lVar7 = (longlong)((int)uVar10 << 2);
  piVar3 = (int *)(param_1 + lVar7);
  bVar4 = (byte)uVar6;
  auVar11._4_4_ = (uint)((byte)(uVar6 >> 1) & 1) * piVar3[1];
  auVar11._0_4_ = (uint)(bVar4 & 1) * *piVar3;
  auVar11._8_4_ = (uint)((byte)(uVar6 >> 2) & 1) * piVar3[2];
  auVar11._12_4_ = (uint)((byte)(uVar6 >> 3) & 1) * piVar3[3];
  auVar11._16_4_ = (uint)((byte)(uVar6 >> 4) & 1) * piVar3[4];
  auVar11._20_4_ = (uint)((byte)(uVar6 >> 5) & 1) * piVar3[5];
  auVar11._24_4_ = (uint)((byte)(uVar6 >> 6) & 1) * piVar3[6];
  auVar11._28_4_ = (uint)(byte)(uVar6 >> 7) * piVar3[7];
  piVar3 = (int *)(param_2 + lVar7);
  auVar12._4_4_ = (uint)((byte)(uVar6 >> 1) & 1) * piVar3[1];
  auVar12._0_4_ = (uint)(bVar4 & 1) * *piVar3;
  auVar12._8_4_ = (uint)((byte)(uVar6 >> 2) & 1) * piVar3[2];
  auVar12._12_4_ = (uint)((byte)(uVar6 >> 3) & 1) * piVar3[3];
  auVar12._16_4_ = (uint)((byte)(uVar6 >> 4) & 1) * piVar3[4];
  auVar12._20_4_ = (uint)((byte)(uVar6 >> 5) & 1) * piVar3[5];
  auVar12._24_4_ = (uint)((byte)(uVar6 >> 6) & 1) * piVar3[6];
  auVar12._28_4_ = (uint)(byte)(uVar6 >> 7) * piVar3[7];
  auVar11 = vfmadd231ps_avx512vl(auVar14,auVar11,auVar12);
  auVar13._0_4_ = (uint)(bVar4 & 1) * auVar11._0_4_ | (uint)!(bool)(bVar4 & 1) * auVar14._0_4_;
  bVar5 = (bool)((byte)(uVar6 >> 1) & 1);
  auVar13._4_4_ = (uint)bVar5 * auVar11._4_4_ | (uint)!bVar5 * auVar14._4_4_;
  bVar5 = (bool)((byte)(uVar6 >> 2) & 1);
  auVar13._8_4_ = (uint)bVar5 * auVar11._8_4_ | (uint)!bVar5 * auVar14._8_4_;
  bVar5 = (bool)((byte)(uVar6 >> 3) & 1);
  auVar13._12_4_ = (uint)bVar5 * auVar11._12_4_ | (uint)!bVar5 * auVar14._12_4_;
  bVar5 = (bool)((byte)(uVar6 >> 4) & 1);
  auVar13._16_4_ = (uint)bVar5 * auVar11._16_4_ | (uint)!bVar5 * auVar14._16_4_;
  bVar5 = (bool)((byte)(uVar6 >> 5) & 1);
  auVar13._20_4_ = (uint)bVar5 * auVar11._20_4_ | (uint)!bVar5 * auVar14._20_4_;
  bVar5 = (bool)((byte)(uVar6 >> 6) & 1);
  auVar13._24_4_ = (uint)bVar5 * auVar11._24_4_ | (uint)!bVar5 * auVar14._24_4_;
  bVar5 = SUB81(uVar6 >> 7,0);
  auVar13._28_4_ = (uint)bVar5 * auVar11._28_4_ | (uint)!bVar5 * auVar14._28_4_;
  auVar14 = auVar13;
LAB_140a1b047:
  auVar14 = vhaddps_avx(auVar14,auVar14);
  auVar14 = vhaddps_avx(auVar14,auVar14);
  *(float *)(param_3 + (longlong)param_4 * 4) =
       auVar14._0_4_ + auVar14._16_4_ + *(float *)(param_3 + (longlong)param_4 * 4);
  return;
}

// ArrayFloatToPcm16_avx512skx @ 140a1b080

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFloatToPcm16_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  int *piVar2;
  ulonglong uVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  fVar4 = __real_46fffe00;
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar8 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar8);
      auVar10._0_4_ = (int)(fVar4 * *pfVar1);
      auVar10._4_4_ = (int)(fVar4 * pfVar1[1]);
      auVar10._8_4_ = (int)(fVar4 * pfVar1[2]);
      auVar10._12_4_ = (int)(fVar4 * pfVar1[3]);
      auVar10._16_4_ = (int)(fVar4 * pfVar1[4]);
      auVar10._20_4_ = (int)(fVar4 * pfVar1[5]);
      auVar10._24_4_ = (int)(fVar4 * pfVar1[6]);
      auVar10._28_4_ = (int)(fVar4 * pfVar1[7]);
      auVar9 = vpmovdw_avx512vl(auVar10);
      *(undefined1 (*) [16])(param_2 + uVar6 * 2) = auVar9;
      uVar6 = uVar6 + 8;
      uVar8 = uVar8 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar6) {
      return;
    }
  }
  auVar10 = vpbroadcastd_avx512vl();
  auVar10 = vpor_avx2(auVar10,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar11 = vpbroadcastd_avx512vl();
  uVar3 = vpcmpgtd_avx512vl(auVar11,auVar10);
  piVar2 = (int *)(param_1 + ((int)uVar6 << 2));
  auVar12._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * piVar2[1];
  auVar12._0_4_ = (uint)((byte)uVar3 & 1) * *piVar2;
  auVar12._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * piVar2[2];
  auVar12._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * piVar2[3];
  auVar12._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * piVar2[4];
  auVar12._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * piVar2[5];
  auVar12._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * piVar2[6];
  auVar12._28_4_ = (uint)(byte)(uVar3 >> 7) * piVar2[7];
  auVar11._4_4_ = __real_46fffe00;
  auVar11._0_4_ = __real_46fffe00;
  auVar11._8_4_ = __real_46fffe00;
  auVar11._12_4_ = __real_46fffe00;
  auVar11._16_4_ = __real_46fffe00;
  auVar11._20_4_ = __real_46fffe00;
  auVar11._24_4_ = __real_46fffe00;
  auVar11._28_4_ = __real_46fffe00;
  auVar10 = vmulps_avx512vl(auVar12,auVar11);
  auVar13._0_4_ = (int)auVar10._0_4_;
  auVar13._4_4_ = (int)auVar10._4_4_;
  auVar13._8_4_ = (int)auVar10._8_4_;
  auVar13._12_4_ = (int)auVar10._12_4_;
  auVar13._16_4_ = (int)auVar10._16_4_;
  auVar13._20_4_ = (int)auVar10._20_4_;
  auVar13._24_4_ = (int)auVar10._24_4_;
  auVar13._28_4_ = (int)auVar10._28_4_;
  auVar9 = vpmovdw_avx512vl(auVar13);
  lVar7 = (longlong)((int)uVar6 * 2);
  if ((uVar3 & 1) != 0) {
    *(short *)(param_2 + lVar7) = auVar9._0_2_;
  }
  if ((uVar3 & 2) != 0) {
    *(short *)(param_2 + 2 + lVar7) = auVar9._2_2_;
  }
  if ((uVar3 & 4) != 0) {
    *(short *)(param_2 + 4 + lVar7) = auVar9._4_2_;
  }
  if ((uVar3 & 8) != 0) {
    *(short *)(param_2 + 6 + lVar7) = auVar9._6_2_;
  }
  if ((uVar3 & 0x10) != 0) {
    *(undefined2 *)(param_2 + 8 + lVar7) = 0;
  }
  if ((uVar3 & 0x20) != 0) {
    *(undefined2 *)(param_2 + 10 + lVar7) = 0;
  }
  if ((uVar3 & 0x40) != 0) {
    *(undefined2 *)(param_2 + 0xc + lVar7) = 0;
  }
  if (-1 < (char)(byte)uVar3) {
    return;
  }
  *(undefined2 *)(param_2 + 0xe + lVar7) = 0;
  return;
}

// ArrayPcm16ToFloat_avx512skx @ 140a1b1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPcm16ToFloat_avx512skx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  float fVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  byte bVar16;
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar17 [16];
  
  fVar11 = __real_38000100;
  uVar12 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if (0 < (int)param_3) goto LAB_140a1b228;
  }
  else {
    uVar15 = 0;
    uVar13 = 0;
    do {
      auVar19 = vpmovsxwd_avx2(*(undefined1 (*) [16])(param_1 + uVar13 * 2));
      auVar19 = vcvtdq2ps_avx(auVar19);
      pfVar1 = (float *)(param_2 + (ulonglong)uVar15);
      *pfVar1 = auVar19._0_4_ * fVar11;
      pfVar1[1] = auVar19._4_4_ * fVar11;
      pfVar1[2] = auVar19._8_4_ * fVar11;
      pfVar1[3] = auVar19._12_4_ * fVar11;
      pfVar1[4] = auVar19._16_4_ * fVar11;
      pfVar1[5] = auVar19._20_4_ * fVar11;
      pfVar1[6] = auVar19._24_4_ * fVar11;
      pfVar1[7] = auVar19._28_4_ * fVar11;
      uVar13 = uVar13 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)uVar13 < (int)param_3) {
LAB_140a1b228:
      auVar19 = vpbroadcastd_avx512vl();
      auVar19 = vpor_avx2(auVar19,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
      auVar20 = vpbroadcastd_avx512vl();
      uVar10 = vpcmpgtd_avx512vl(auVar20,auVar19);
      pauVar14 = (undefined1 (*) [16])(param_1 + (int)uVar13 * 2);
      bVar16 = (byte)uVar10;
      if ((~bVar16 & 0x81) == 0) {
        auVar18 = *pauVar14;
      }
      else {
        auVar17 = vmovdqu16_avx512vl(*pauVar14);
        auVar18._2_2_ = (ushort)((byte)(uVar10 >> 1) & 1) * auVar17._2_2_;
        auVar18._0_2_ = (ushort)(bVar16 & 1) * auVar17._0_2_;
        auVar18._4_2_ = (ushort)((byte)(uVar10 >> 2) & 1) * auVar17._4_2_;
        auVar18._6_2_ = (ushort)((byte)(uVar10 >> 3) & 1) * auVar17._6_2_;
        auVar18._8_2_ = (ushort)((byte)(uVar10 >> 4) & 1) * auVar17._8_2_;
        auVar18._10_2_ = (ushort)((byte)(uVar10 >> 5) & 1) * auVar17._10_2_;
        auVar18._12_2_ = (ushort)((byte)(uVar10 >> 6) & 1) * auVar17._12_2_;
        auVar18._14_2_ = (ushort)(byte)(uVar10 >> 7) * auVar17._14_2_;
      }
      auVar19 = vpmovsxwd_avx2(auVar18);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar20._4_4_ = __real_38000100;
      auVar20._0_4_ = __real_38000100;
      auVar20._8_4_ = __real_38000100;
      auVar20._12_4_ = __real_38000100;
      auVar20._16_4_ = __real_38000100;
      auVar20._20_4_ = __real_38000100;
      auVar20._24_4_ = __real_38000100;
      auVar20._28_4_ = __real_38000100;
      auVar19 = vmulps_avx512vl(auVar19,auVar20);
      puVar2 = (uint *)(param_2 + (int)uVar13 * 4);
      bVar3 = (bool)((byte)(uVar10 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar10 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar10 >> 3) & 1);
      bVar6 = (bool)((byte)(uVar10 >> 4) & 1);
      bVar7 = (bool)((byte)(uVar10 >> 5) & 1);
      bVar8 = (bool)((byte)(uVar10 >> 6) & 1);
      bVar9 = SUB81(uVar10 >> 7,0);
      *puVar2 = (uint)(bVar16 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar16 & 1) * *puVar2;
      puVar2[1] = (uint)bVar3 * auVar19._4_4_ | (uint)!bVar3 * puVar2[1];
      puVar2[2] = (uint)bVar4 * auVar19._8_4_ | (uint)!bVar4 * puVar2[2];
      puVar2[3] = (uint)bVar5 * auVar19._12_4_ | (uint)!bVar5 * puVar2[3];
      puVar2[4] = (uint)bVar6 * auVar19._16_4_ | (uint)!bVar6 * puVar2[4];
      puVar2[5] = (uint)bVar7 * auVar19._20_4_ | (uint)!bVar7 * puVar2[5];
      puVar2[6] = (uint)bVar8 * auVar19._24_4_ | (uint)!bVar8 * puVar2[6];
      puVar2[7] = (uint)bVar9 * auVar19._28_4_ | (uint)!bVar9 * puVar2[7];
      return;
    }
  }
  return;
}

// ArrayAPFLongDelayProcess_avx512skx @ 140a1b290

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAPFLongDelayProcess_avx512skx
               (longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
               float param_6)

{
  float fVar1;
  float *pfVar8;
  int *piVar9;
  uint *puVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  longlong lVar29;
  uint uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar30 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar30 = param_3;
  }
  if ((int)(uVar30 & 0xfffffff8) < 1) {
    uVar31 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar35._4_4_ = param_6;
    auVar35._0_4_ = param_6;
    auVar35._8_4_ = param_6;
    auVar35._12_4_ = param_6;
    auVar32._4_4_ = __real_80000000;
    auVar32._0_4_ = __real_80000000;
    auVar32._8_4_ = __real_80000000;
    auVar32._12_4_ = __real_80000000;
    auVar32 = vxorps_avx512vl(auVar35,auVar32);
    fVar36 = auVar32._0_4_;
    uVar27 = 0;
    uVar31 = 0;
    do {
      uVar28 = (ulonglong)uVar27;
      pfVar8 = (float *)(param_2 + uVar28);
      fVar1 = *pfVar8;
      fVar2 = pfVar8[1];
      fVar3 = pfVar8[2];
      fVar4 = pfVar8[3];
      fVar5 = pfVar8[4];
      fVar6 = pfVar8[5];
      fVar7 = pfVar8[6];
      fVar19 = pfVar8[7];
      pfVar8 = (float *)(param_1 + uVar28);
      fVar37 = param_6 * fVar1 + *pfVar8;
      fVar38 = param_6 * fVar2 + pfVar8[1];
      fVar39 = param_6 * fVar3 + pfVar8[2];
      fVar40 = param_6 * fVar4 + pfVar8[3];
      fVar41 = param_6 * fVar5 + pfVar8[4];
      fVar42 = param_6 * fVar6 + pfVar8[5];
      fVar43 = param_6 * fVar7 + pfVar8[6];
      fVar44 = param_6 * fVar19 + pfVar8[7];
      pfVar8 = (float *)(param_5 + uVar28);
      *pfVar8 = fVar37;
      pfVar8[1] = fVar38;
      pfVar8[2] = fVar39;
      pfVar8[3] = fVar40;
      pfVar8[4] = fVar41;
      pfVar8[5] = fVar42;
      pfVar8[6] = fVar43;
      pfVar8[7] = fVar44;
      pfVar8 = (float *)(param_4 + uVar28);
      *pfVar8 = fVar36 * fVar37 + fVar1;
      pfVar8[1] = fVar36 * fVar38 + fVar2;
      pfVar8[2] = fVar36 * fVar39 + fVar3;
      pfVar8[3] = fVar36 * fVar40 + fVar4;
      pfVar8[4] = fVar36 * fVar41 + fVar5;
      pfVar8[5] = fVar36 * fVar42 + fVar6;
      pfVar8[6] = fVar36 * fVar43 + fVar7;
      pfVar8[7] = fVar36 * fVar44 + fVar19;
      uVar31 = uVar31 + 8;
      uVar27 = uVar27 + 0x20;
    } while (uVar31 < (uVar30 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar31) {
      return;
    }
  }
  auVar33 = vpbroadcastd_avx512vl();
  auVar33 = vpor_avx2(auVar33,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar34 = vpbroadcastd_avx512vl();
  uVar28 = vpcmpgtd_avx512vl(auVar34,auVar33);
  lVar29 = (longlong)((int)uVar31 << 2);
  piVar9 = (int *)(param_2 + lVar29);
  bVar11 = (byte)uVar28;
  fVar36 = (float)((uint)(bVar11 & 1) * *piVar9);
  fVar1 = (float)((uint)((byte)(uVar28 >> 1) & 1) * piVar9[1]);
  fVar2 = (float)((uint)((byte)(uVar28 >> 2) & 1) * piVar9[2]);
  fVar3 = (float)((uint)((byte)(uVar28 >> 3) & 1) * piVar9[3]);
  fVar4 = (float)((uint)((byte)(uVar28 >> 4) & 1) * piVar9[4]);
  fVar5 = (float)((uint)((byte)(uVar28 >> 5) & 1) * piVar9[5]);
  fVar6 = (float)((uint)((byte)(uVar28 >> 6) & 1) * piVar9[6]);
  fVar7 = (float)((uint)(byte)(uVar28 >> 7) * piVar9[7]);
  piVar9 = (int *)(param_1 + lVar29);
  iVar20 = piVar9[1];
  iVar21 = piVar9[2];
  iVar22 = piVar9[3];
  iVar23 = piVar9[4];
  iVar24 = piVar9[5];
  iVar25 = piVar9[6];
  iVar26 = piVar9[7];
  puVar10 = (uint *)(param_5 + lVar29);
  bVar12 = (bool)((byte)(uVar28 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar28 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar28 >> 3) & 1);
  bVar15 = (bool)((byte)(uVar28 >> 4) & 1);
  bVar16 = (bool)((byte)(uVar28 >> 5) & 1);
  bVar17 = (bool)((byte)(uVar28 >> 6) & 1);
  bVar18 = SUB81(uVar28 >> 7,0);
  *puVar10 = (uint)(bVar11 & 1) * (int)(param_6 * fVar36 + (float)((uint)(bVar11 & 1) * *piVar9)) |
             (uint)!(bool)(bVar11 & 1) * *puVar10;
  puVar10[1] = (uint)bVar12 *
               (int)(param_6 * fVar1 + (float)((uint)((byte)(uVar28 >> 1) & 1) * iVar20)) |
               (uint)!bVar12 * puVar10[1];
  puVar10[2] = (uint)bVar13 *
               (int)(param_6 * fVar2 + (float)((uint)((byte)(uVar28 >> 2) & 1) * iVar21)) |
               (uint)!bVar13 * puVar10[2];
  puVar10[3] = (uint)bVar14 *
               (int)(param_6 * fVar3 + (float)((uint)((byte)(uVar28 >> 3) & 1) * iVar22)) |
               (uint)!bVar14 * puVar10[3];
  puVar10[4] = (uint)bVar15 *
               (int)(param_6 * fVar4 + (float)((uint)((byte)(uVar28 >> 4) & 1) * iVar23)) |
               (uint)!bVar15 * puVar10[4];
  puVar10[5] = (uint)bVar16 *
               (int)(param_6 * fVar5 + (float)((uint)((byte)(uVar28 >> 5) & 1) * iVar24)) |
               (uint)!bVar16 * puVar10[5];
  puVar10[6] = (uint)bVar17 *
               (int)(param_6 * fVar6 + (float)((uint)((byte)(uVar28 >> 6) & 1) * iVar25)) |
               (uint)!bVar17 * puVar10[6];
  puVar10[7] = (uint)bVar18 * (int)(param_6 * fVar7 + (float)((uint)(byte)(uVar28 >> 7) * iVar26)) |
               (uint)!bVar18 * puVar10[7];
  piVar9 = (int *)(param_5 + lVar29);
  iVar20 = piVar9[1];
  iVar21 = piVar9[2];
  iVar22 = piVar9[3];
  iVar23 = piVar9[4];
  iVar24 = piVar9[5];
  iVar25 = piVar9[6];
  iVar26 = piVar9[7];
  puVar10 = (uint *)(param_4 + lVar29);
  bVar12 = (bool)((byte)(uVar28 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar28 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar28 >> 3) & 1);
  bVar15 = (bool)((byte)(uVar28 >> 4) & 1);
  bVar16 = (bool)((byte)(uVar28 >> 5) & 1);
  bVar17 = (bool)((byte)(uVar28 >> 6) & 1);
  bVar18 = SUB81(uVar28 >> 7,0);
  *puVar10 = (uint)(bVar11 & 1) * (int)(-(param_6 * (float)((uint)(bVar11 & 1) * *piVar9)) + fVar36)
             | (uint)!(bool)(bVar11 & 1) * *puVar10;
  puVar10[1] = (uint)bVar12 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 1) & 1) * iVar20)) + fVar1) |
               (uint)!bVar12 * puVar10[1];
  puVar10[2] = (uint)bVar13 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 2) & 1) * iVar21)) + fVar2) |
               (uint)!bVar13 * puVar10[2];
  puVar10[3] = (uint)bVar14 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 3) & 1) * iVar22)) + fVar3) |
               (uint)!bVar14 * puVar10[3];
  puVar10[4] = (uint)bVar15 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 4) & 1) * iVar23)) + fVar4) |
               (uint)!bVar15 * puVar10[4];
  puVar10[5] = (uint)bVar16 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 5) & 1) * iVar24)) + fVar5) |
               (uint)!bVar16 * puVar10[5];
  puVar10[6] = (uint)bVar17 *
               (int)(-(param_6 * (float)((uint)((byte)(uVar28 >> 6) & 1) * iVar25)) + fVar6) |
               (uint)!bVar17 * puVar10[6];
  puVar10[7] = (uint)bVar18 *
               (int)(-(param_6 * (float)((uint)(byte)(uVar28 >> 7) * iVar26)) + fVar7) |
               (uint)!bVar18 * puVar10[7];
  return;
}

// ArrayLerpFractionalDelay_avx512skx @ 140a1b370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpFractionalDelay_avx512skx
               (undefined8 param_1,longlong param_2,undefined4 *param_3,longlong param_4,
               uint param_5,longlong param_6,undefined4 param_7)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  longlong unaff_RBX;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [64];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM20 [64];
  
  uVar16 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar16 = param_5;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar17 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar22._4_4_ = param_7;
    auVar22._0_4_ = param_7;
    auVar22._8_4_ = param_7;
    auVar22._12_4_ = param_7;
    auVar22._16_4_ = param_7;
    auVar22._20_4_ = param_7;
    auVar22._24_4_ = param_7;
    auVar22._28_4_ = param_7;
    uVar14 = 0;
    auVar23._4_4_ = __real_3f800000;
    auVar23._0_4_ = __real_3f800000;
    auVar23._8_4_ = __real_3f800000;
    auVar23._12_4_ = __real_3f800000;
    auVar23._16_4_ = __real_3f800000;
    auVar23._20_4_ = __real_3f800000;
    auVar23._24_4_ = __real_3f800000;
    auVar23._28_4_ = __real_3f800000;
    auVar24._4_4_ = __real_00000004;
    auVar24._0_4_ = __real_00000004;
    auVar24._8_4_ = __real_00000004;
    auVar24._12_4_ = __real_00000004;
    auVar24._16_4_ = __real_00000004;
    auVar24._20_4_ = __real_00000004;
    auVar24._24_4_ = __real_00000004;
    auVar24._28_4_ = __real_00000004;
    uVar17 = 0;
    do {
      uVar15 = (ulonglong)uVar14;
      auVar19 = vmaxps_avx(*(undefined1 (*) [32])(param_2 + uVar15),ZEXT1232(ZEXT812(0)));
      auVar19 = vminps_avx(auVar19,auVar22);
      auVar18 = vrndscaleps_avx512vl(auVar19,9);
      auVar19 = vsubps_avx512vl(auVar19,auVar18);
      auVar18 = vcvttps2dq_avx512vl(auVar18);
      auVar20 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_4 + uVar15));
      auVar21 = vsubps_avx512vl(auVar23,auVar19);
      auVar18 = vpsubd_avx512vl(auVar20,auVar18);
      auVar18 = vpslld_avx512vl(auVar18,2);
      vpaddd_avx512vl(auVar18,auVar24);
      vxorps_avx512vl(in_ZMM20._0_16_,in_ZMM20._0_16_);
      auVar18 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_RBX));
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + param_6));
      in_ZMM20 = ZEXT3264(auVar20);
      auVar19 = vmulps_avx512vl(auVar19,auVar20);
      auVar19 = vfmadd231ps_avx512vl(auVar19,auVar21,auVar18);
      *(undefined1 (*) [32])(param_6 + uVar15) = auVar19;
      uVar17 = uVar17 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar17 < (uVar16 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar17) {
      return;
    }
  }
  auVar22 = vpbroadcastd_avx512vl();
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar23 = vpbroadcastd_avx512vl();
  uVar15 = vpcmpgtd_avx512vl(auVar23,auVar22);
  lVar13 = (longlong)((int)uVar17 << 2);
  piVar1 = (int *)(param_2 + lVar13);
  bVar3 = (byte)uVar15;
  auVar18._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * piVar1[1];
  auVar18._0_4_ = (uint)(bVar3 & 1) * *piVar1;
  auVar18._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * piVar1[2];
  auVar18._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * piVar1[3];
  auVar18._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * piVar1[4];
  auVar18._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * piVar1[5];
  auVar18._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * piVar1[6];
  auVar18._28_4_ = (uint)(byte)(uVar15 >> 7) * piVar1[7];
  auVar25 = ZEXT1664((undefined1  [16])0x0);
  auVar22 = vmaxps_avx(auVar18,auVar25._0_32_);
  auVar21._4_4_ = param_7;
  auVar21._0_4_ = param_7;
  auVar21._8_4_ = param_7;
  auVar21._12_4_ = param_7;
  auVar21._16_4_ = param_7;
  auVar21._20_4_ = param_7;
  auVar21._24_4_ = param_7;
  auVar21._28_4_ = param_7;
  auVar22 = vminps_avx(auVar22,auVar21);
  auVar23 = vroundps_avx(auVar22,9);
  auVar26._0_4_ = (int)auVar23._0_4_;
  auVar26._4_4_ = (int)auVar23._4_4_;
  auVar26._8_4_ = (int)auVar23._8_4_;
  auVar26._12_4_ = (int)auVar23._12_4_;
  auVar26._16_4_ = (int)auVar23._16_4_;
  auVar26._20_4_ = (int)auVar23._20_4_;
  auVar26._24_4_ = (int)auVar23._24_4_;
  auVar26._28_4_ = (int)auVar23._28_4_;
  auVar24 = vmovdqu32_avx512vl(*(undefined1 (*) [32])(param_4 + lVar13));
  auVar20._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * auVar24._4_4_;
  auVar20._0_4_ = (uint)(bVar3 & 1) * auVar24._0_4_;
  auVar20._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * auVar24._8_4_;
  auVar20._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * auVar24._12_4_;
  auVar20._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar24._16_4_;
  auVar20._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar24._20_4_;
  auVar20._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar24._24_4_;
  auVar20._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar24._28_4_;
  auVar24 = vpsubd_avx2(auVar20,auVar26);
  auVar24 = vpslld_avx2(auVar24,2);
  auVar19._4_4_ = __real_00000004;
  auVar19._0_4_ = __real_00000004;
  auVar19._8_4_ = __real_00000004;
  auVar19._12_4_ = __real_00000004;
  auVar19._16_4_ = __real_00000004;
  auVar19._20_4_ = __real_00000004;
  auVar19._24_4_ = __real_00000004;
  auVar19._28_4_ = __real_00000004;
  vpaddd_avx512vl(auVar24,auVar19);
  auVar24 = vgatherdps_avx512vl(*param_3);
  auVar27._4_4_ = __real_3f800000;
  auVar27._0_4_ = __real_3f800000;
  auVar27._8_4_ = __real_3f800000;
  auVar27._12_4_ = __real_3f800000;
  auVar27._16_4_ = __real_3f800000;
  auVar27._20_4_ = __real_3f800000;
  auVar27._24_4_ = __real_3f800000;
  auVar27._28_4_ = __real_3f800000;
  auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_RBX));
  bVar5 = (bool)((byte)(uVar15 >> 2) & 1);
  bVar7 = (bool)((byte)(uVar15 >> 3) & 1);
  auVar22 = vsubps_avx(auVar22,auVar23);
  auVar23 = vsubps_avx(auVar27,auVar22);
  puVar2 = (uint *)(param_6 + lVar13);
  bVar4 = (bool)((byte)(uVar15 >> 1) & 1);
  bVar6 = (bool)((byte)(uVar15 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar15 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar15 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar15 >> 6) & 1);
  bVar12 = SUB81(uVar15 >> 7,0);
  *puVar2 = (uint)(bVar3 & 1) *
            (int)(auVar23._0_4_ * (float)((uint)(bVar3 & 1) * auVar24._0_4_) +
                 auVar22._0_4_ * (float)((uint)(bVar3 & 1) * auVar19._0_4_)) |
            (uint)!(bool)(bVar3 & 1) * *puVar2;
  puVar2[1] = (uint)bVar4 *
              (int)(auVar23._4_4_ * (float)((uint)((byte)(uVar15 >> 1) & 1) * auVar24._4_4_) +
                   auVar22._4_4_ * (float)((uint)((byte)(uVar15 >> 1) & 1) * auVar19._4_4_)) |
              (uint)!bVar4 * puVar2[1];
  puVar2[2] = (uint)bVar6 *
              (int)(auVar23._8_4_ * (float)((uint)((byte)(uVar15 >> 2) & 1) * auVar24._8_4_) +
                   auVar22._8_4_ *
                   (float)((uint)bVar5 * auVar19._8_4_ | (uint)!bVar5 * auVar25._8_4_)) |
              (uint)!bVar6 * puVar2[2];
  puVar2[3] = (uint)bVar8 *
              (int)(auVar23._12_4_ * (float)((uint)((byte)(uVar15 >> 3) & 1) * auVar24._12_4_) +
                   auVar22._12_4_ *
                   (float)((uint)bVar7 * auVar19._12_4_ | (uint)!bVar7 * auVar25._12_4_)) |
              (uint)!bVar8 * puVar2[3];
  puVar2[4] = (uint)bVar9 *
              (int)(auVar23._16_4_ * (float)((uint)((byte)(uVar15 >> 4) & 1) * auVar24._16_4_) +
                   auVar22._16_4_ * (float)((uint)((byte)(uVar15 >> 4) & 1) * auVar19._16_4_)) |
              (uint)!bVar9 * puVar2[4];
  puVar2[5] = (uint)bVar10 *
              (int)(auVar23._20_4_ * (float)((uint)((byte)(uVar15 >> 5) & 1) * auVar24._20_4_) +
                   auVar22._20_4_ * (float)((uint)((byte)(uVar15 >> 5) & 1) * auVar19._20_4_)) |
              (uint)!bVar10 * puVar2[5];
  puVar2[6] = (uint)bVar11 *
              (int)(auVar23._24_4_ * (float)((uint)((byte)(uVar15 >> 6) & 1) * auVar24._24_4_) +
                   auVar22._24_4_ * (float)((uint)((byte)(uVar15 >> 6) & 1) * auVar19._24_4_)) |
              (uint)!bVar11 * puVar2[6];
  puVar2[7] = (uint)bVar12 *
              (int)(auVar23._28_4_ * (float)((uint)(byte)(uVar15 >> 7) * auVar24._28_4_) +
                   auVar22._28_4_ * (float)((uint)(byte)(uVar15 >> 7) * auVar19._28_4_)) |
              (uint)!bVar12 * puVar2[7];
  return;
}

// ArrayScaledComplexConjugate_avx512skx @ 140a1b500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayScaledComplexConjugate_avx512skx
               (longlong param_1,uint param_2,longlong param_3,undefined4 param_4)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [16];
  
  auVar36._4_4_ = param_4;
  auVar36._0_4_ = param_4;
  auVar36._8_4_ = param_4;
  auVar36._12_4_ = param_4;
  auVar33._16_4_ = param_4;
  auVar33._0_16_ = auVar36;
  auVar33._20_4_ = param_4;
  auVar33._24_4_ = param_4;
  auVar33._28_4_ = param_4;
  auVar32._4_4_ = __real_80000000;
  auVar32._0_4_ = __real_80000000;
  auVar32._8_4_ = __real_80000000;
  auVar32._12_4_ = __real_80000000;
  auVar32 = vxorps_avx512vl(auVar36,auVar32);
  auVar33 = vpermi2ps_avx512vl(___ymm_0000000800000006000000080000000400000008000000020000000800000000
                               ,auVar33,ZEXT1632(auVar32));
  uVar28 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar28 = param_2;
  }
  if ((int)(uVar28 & 0xfffffff8) < 1) {
    uVar29 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar31 = 0;
    uVar29 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      fVar17 = pfVar1[4];
      fVar18 = pfVar1[5];
      fVar19 = pfVar1[6];
      fVar20 = pfVar1[7];
      pfVar2 = (float *)(param_3 + (ulonglong)uVar31);
      *pfVar2 = auVar33._0_4_ * *pfVar1;
      pfVar2[1] = auVar33._4_4_ * fVar14;
      pfVar2[2] = auVar33._8_4_ * fVar15;
      pfVar2[3] = auVar33._12_4_ * fVar16;
      pfVar2[4] = auVar33._16_4_ * fVar17;
      pfVar2[5] = auVar33._20_4_ * fVar18;
      pfVar2[6] = auVar33._24_4_ * fVar19;
      pfVar2[7] = auVar33._28_4_ * fVar20;
      uVar29 = uVar29 + 8;
      uVar31 = uVar31 + 0x20;
    } while (uVar29 < (uVar28 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar29) {
      return;
    }
  }
  auVar34 = vpbroadcastd_avx512vl();
  auVar34 = vpor_avx2(auVar34,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar35 = vpbroadcastd_avx512vl();
  uVar13 = vpcmpgtd_avx512vl(auVar35,auVar34);
  lVar30 = (longlong)((int)uVar29 << 2);
  piVar3 = (int *)(param_1 + lVar30);
  iVar21 = piVar3[1];
  iVar22 = piVar3[2];
  iVar23 = piVar3[3];
  iVar24 = piVar3[4];
  iVar25 = piVar3[5];
  iVar26 = piVar3[6];
  iVar27 = piVar3[7];
  puVar4 = (uint *)(param_3 + lVar30);
  bVar5 = (bool)((byte)uVar13 & 1);
  bVar6 = (bool)((byte)(uVar13 >> 1) & 1);
  bVar7 = (bool)((byte)(uVar13 >> 2) & 1);
  bVar8 = (bool)((byte)(uVar13 >> 3) & 1);
  bVar9 = (bool)((byte)(uVar13 >> 4) & 1);
  bVar10 = (bool)((byte)(uVar13 >> 5) & 1);
  bVar11 = (bool)((byte)(uVar13 >> 6) & 1);
  bVar12 = SUB81(uVar13 >> 7,0);
  *puVar4 = (uint)bVar5 * (int)(auVar33._0_4_ * (float)((uint)((byte)uVar13 & 1) * *piVar3)) |
            (uint)!bVar5 * *puVar4;
  puVar4[1] = (uint)bVar6 * (int)(auVar33._4_4_ * (float)((uint)((byte)(uVar13 >> 1) & 1) * iVar21))
              | (uint)!bVar6 * puVar4[1];
  puVar4[2] = (uint)bVar7 * (int)(auVar33._8_4_ * (float)((uint)((byte)(uVar13 >> 2) & 1) * iVar22))
              | (uint)!bVar7 * puVar4[2];
  puVar4[3] = (uint)bVar8 *
              (int)(auVar33._12_4_ * (float)((uint)((byte)(uVar13 >> 3) & 1) * iVar23)) |
              (uint)!bVar8 * puVar4[3];
  puVar4[4] = (uint)bVar9 *
              (int)(auVar33._16_4_ * (float)((uint)((byte)(uVar13 >> 4) & 1) * iVar24)) |
              (uint)!bVar9 * puVar4[4];
  puVar4[5] = (uint)bVar10 *
              (int)(auVar33._20_4_ * (float)((uint)((byte)(uVar13 >> 5) & 1) * iVar25)) |
              (uint)!bVar10 * puVar4[5];
  puVar4[6] = (uint)bVar11 *
              (int)(auVar33._24_4_ * (float)((uint)((byte)(uVar13 >> 6) & 1) * iVar26)) |
              (uint)!bVar11 * puVar4[6];
  puVar4[7] = (uint)bVar12 * (int)(auVar33._28_4_ * (float)((uint)(byte)(uVar13 >> 7) * iVar27)) |
              (uint)!bVar12 * puVar4[7];
  return;
}

