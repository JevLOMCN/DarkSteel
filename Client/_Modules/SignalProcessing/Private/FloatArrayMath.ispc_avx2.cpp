// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 79

// ArraySum___un_3C_Cunf_3E_REFunfCuni_avx2 @ 140a1b5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum___un_3C_Cunf_3E_REFunfCuni_avx2
               (longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    auVar9 = *param_4;
    if ((int)param_3 < 1) goto LAB_140a1b63f;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = auVar8._0_4_ + *pfVar1;
      auVar6._4_4_ = auVar8._4_4_ + pfVar1[1];
      auVar6._8_4_ = auVar8._8_4_ + pfVar1[2];
      auVar6._12_4_ = auVar8._12_4_ + pfVar1[3];
      auVar6._16_4_ = auVar8._16_4_ + pfVar1[4];
      auVar6._20_4_ = auVar8._20_4_ + pfVar1[5];
      auVar6._24_4_ = auVar8._24_4_ + pfVar1[6];
      auVar6._28_4_ = auVar8._28_4_ + pfVar1[7];
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar9 = *param_4;
    auVar7 = auVar6;
    if ((int)param_3 <= (int)uVar4) goto LAB_140a1b63f;
  }
  iVar3 = (int)uVar4;
  auVar10._4_4_ = iVar3;
  auVar10._0_4_ = iVar3;
  auVar10._8_4_ = iVar3;
  auVar10._12_4_ = iVar3;
  auVar10._16_4_ = iVar3;
  auVar10._20_4_ = iVar3;
  auVar10._24_4_ = iVar3;
  auVar10._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar10,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar11._4_4_ = param_3;
  auVar11._0_4_ = param_3;
  auVar11._8_4_ = param_3;
  auVar11._12_4_ = param_3;
  auVar11._16_4_ = param_3;
  auVar11._20_4_ = param_3;
  auVar11._24_4_ = param_3;
  auVar11._28_4_ = param_3;
  auVar10 = vpcmpgtd_avx2(auVar11,auVar6);
  auVar6 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar12._4_4_ = __real_80000000;
  auVar12._0_4_ = __real_80000000;
  auVar12._8_4_ = __real_80000000;
  auVar12._12_4_ = __real_80000000;
  auVar12._16_4_ = __real_80000000;
  auVar12._20_4_ = __real_80000000;
  auVar12._24_4_ = __real_80000000;
  auVar12._28_4_ = __real_80000000;
  auVar10 = vblendvps_avx(auVar12,auVar6,auVar10);
  auVar6._0_4_ = auVar7._0_4_ + auVar10._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar10._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar10._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar10._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar10._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar10._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar10._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar10._28_4_;
LAB_140a1b63f:
  auVar9 = vpcmpeqd_avx2(auVar9,ZEXT1232(ZEXT812(0)));
  auVar9 = vpandn_avx2(auVar9,auVar6);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = auVar9._0_4_ + auVar9._16_4_;
  return;
}

// ArraySum2___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1b680

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum2___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar21 = 0;
    do {
      uVar23 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar23);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar23);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar23);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar5 + fVar12;
      pfVar3[2] = fVar6 + fVar13;
      pfVar3[3] = fVar7 + fVar14;
      pfVar3[4] = fVar8 + fVar15;
      pfVar3[5] = fVar9 + fVar16;
      pfVar3[6] = fVar10 + fVar17;
      pfVar3[7] = fVar11 + fVar18;
      uVar21 = uVar21 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_4;
  auVar26._0_4_ = param_4;
  auVar26._8_4_ = param_4;
  auVar26._12_4_ = param_4;
  auVar26._16_4_ = param_4;
  auVar26._20_4_ = param_4;
  auVar26._24_4_ = param_4;
  auVar26._28_4_ = param_4;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ + auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ + auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ + auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ + auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ + auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ + auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ + auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ + auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_3 + lVar22) = auVar25;
  return;
}

// ArrayMean___un_3C_Cunf_3E_REFunfCuni_avx2 @ 140a1b8c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMean___un_3C_Cunf_3E_REFunfCuni_avx2
               (longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    auVar9 = *param_4;
    if ((int)param_3 < 1) goto LAB_140a1b94f;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = auVar8._0_4_ + *pfVar1;
      auVar6._4_4_ = auVar8._4_4_ + pfVar1[1];
      auVar6._8_4_ = auVar8._8_4_ + pfVar1[2];
      auVar6._12_4_ = auVar8._12_4_ + pfVar1[3];
      auVar6._16_4_ = auVar8._16_4_ + pfVar1[4];
      auVar6._20_4_ = auVar8._20_4_ + pfVar1[5];
      auVar6._24_4_ = auVar8._24_4_ + pfVar1[6];
      auVar6._28_4_ = auVar8._28_4_ + pfVar1[7];
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar9 = *param_4;
    auVar7 = auVar6;
    if ((int)param_3 <= (int)uVar4) goto LAB_140a1b94f;
  }
  iVar3 = (int)uVar4;
  auVar10._4_4_ = iVar3;
  auVar10._0_4_ = iVar3;
  auVar10._8_4_ = iVar3;
  auVar10._12_4_ = iVar3;
  auVar10._16_4_ = iVar3;
  auVar10._20_4_ = iVar3;
  auVar10._24_4_ = iVar3;
  auVar10._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar10,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar11._4_4_ = param_3;
  auVar11._0_4_ = param_3;
  auVar11._8_4_ = param_3;
  auVar11._12_4_ = param_3;
  auVar11._16_4_ = param_3;
  auVar11._20_4_ = param_3;
  auVar11._24_4_ = param_3;
  auVar11._28_4_ = param_3;
  auVar10 = vpcmpgtd_avx2(auVar11,auVar6);
  auVar6 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar12._4_4_ = __real_80000000;
  auVar12._0_4_ = __real_80000000;
  auVar12._8_4_ = __real_80000000;
  auVar12._12_4_ = __real_80000000;
  auVar12._16_4_ = __real_80000000;
  auVar12._20_4_ = __real_80000000;
  auVar12._24_4_ = __real_80000000;
  auVar12._28_4_ = __real_80000000;
  auVar10 = vblendvps_avx(auVar12,auVar6,auVar10);
  auVar6._0_4_ = auVar7._0_4_ + auVar10._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar10._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar10._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar10._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar10._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar10._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar10._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar10._28_4_;
LAB_140a1b94f:
  auVar9 = vpcmpeqd_avx2(auVar9,ZEXT1232(ZEXT812(0)));
  auVar9 = vpandn_avx2(auVar9,auVar6);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = (auVar9._0_4_ + auVar9._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMeanSquared___un_3C_Cunf_3E_REFunfCuni_avx2 @ 140a1b9a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanSquared___un_3C_Cunf_3E_REFunfCuni_avx2
               (longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    auVar9 = *param_4;
    if ((int)param_3 < 1) goto LAB_140a1ba38;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = *pfVar1 * *pfVar1 + auVar8._0_4_;
      auVar6._4_4_ = pfVar1[1] * pfVar1[1] + auVar8._4_4_;
      auVar6._8_4_ = pfVar1[2] * pfVar1[2] + auVar8._8_4_;
      auVar6._12_4_ = pfVar1[3] * pfVar1[3] + auVar8._12_4_;
      auVar6._16_4_ = pfVar1[4] * pfVar1[4] + auVar8._16_4_;
      auVar6._20_4_ = pfVar1[5] * pfVar1[5] + auVar8._20_4_;
      auVar6._24_4_ = pfVar1[6] * pfVar1[6] + auVar8._24_4_;
      auVar6._28_4_ = pfVar1[7] * pfVar1[7] + auVar8._28_4_;
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar9 = *param_4;
    auVar7 = auVar6;
    if ((int)param_3 <= (int)uVar4) goto LAB_140a1ba38;
  }
  iVar3 = (int)uVar4;
  auVar10._4_4_ = iVar3;
  auVar10._0_4_ = iVar3;
  auVar10._8_4_ = iVar3;
  auVar10._12_4_ = iVar3;
  auVar10._16_4_ = iVar3;
  auVar10._20_4_ = iVar3;
  auVar10._24_4_ = iVar3;
  auVar10._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar10,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar11._4_4_ = param_3;
  auVar11._0_4_ = param_3;
  auVar11._8_4_ = param_3;
  auVar11._12_4_ = param_3;
  auVar11._16_4_ = param_3;
  auVar11._20_4_ = param_3;
  auVar11._24_4_ = param_3;
  auVar11._28_4_ = param_3;
  auVar10 = vpcmpgtd_avx2(auVar11,auVar6);
  auVar6 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar12._0_4_ = auVar6._0_4_ * auVar6._0_4_;
  auVar12._4_4_ = auVar6._4_4_ * auVar6._4_4_;
  auVar12._8_4_ = auVar6._8_4_ * auVar6._8_4_;
  auVar12._12_4_ = auVar6._12_4_ * auVar6._12_4_;
  auVar12._16_4_ = auVar6._16_4_ * auVar6._16_4_;
  auVar12._20_4_ = auVar6._20_4_ * auVar6._20_4_;
  auVar12._24_4_ = auVar6._24_4_ * auVar6._24_4_;
  auVar12._28_4_ = auVar6._28_4_ * auVar6._28_4_;
  auVar13._4_4_ = __real_80000000;
  auVar13._0_4_ = __real_80000000;
  auVar13._8_4_ = __real_80000000;
  auVar13._12_4_ = __real_80000000;
  auVar13._16_4_ = __real_80000000;
  auVar13._20_4_ = __real_80000000;
  auVar13._24_4_ = __real_80000000;
  auVar13._28_4_ = __real_80000000;
  auVar10 = vblendvps_avx(auVar13,auVar12,auVar10);
  auVar6._0_4_ = auVar7._0_4_ + auVar10._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar10._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar10._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar10._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar10._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar10._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar10._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar10._28_4_;
LAB_140a1ba38:
  auVar9 = vpcmpeqd_avx2(auVar9,ZEXT1232(ZEXT812(0)));
  auVar9 = vpandn_avx2(auVar9,auVar6);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = (auVar9._0_4_ + auVar9._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMax___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1ba80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMax___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [32];
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  
  uVar2 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar2 = param_4;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar6 = (ulonglong)uVar7;
      auVar8 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + uVar6),
                          *(undefined1 (*) [32])(param_2 + uVar6));
      *(undefined1 (*) [32])(param_3 + uVar6) = auVar8;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar8._4_4_ = iVar3;
  auVar8._0_4_ = iVar3;
  auVar8._8_4_ = iVar3;
  auVar8._12_4_ = iVar3;
  auVar8._16_4_ = iVar3;
  auVar8._20_4_ = iVar3;
  auVar8._24_4_ = iVar3;
  auVar8._28_4_ = iVar3;
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9._4_4_ = param_4;
  auVar9._0_4_ = param_4;
  auVar9._8_4_ = param_4;
  auVar9._12_4_ = param_4;
  auVar9._16_4_ = param_4;
  auVar9._20_4_ = param_4;
  auVar9._24_4_ = param_4;
  auVar9._28_4_ = param_4;
  auVar1 = vpcmpgtd_avx2(auVar9,auVar8);
  lVar5 = (longlong)(iVar3 << 2);
  auVar8 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar9 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vmaxps_avx(auVar8,auVar9);
  auVar8 = vmaskmovps_avx(auVar1,auVar8);
  *(undefined1 (*) [32])(param_3 + lVar5) = auVar8;
  return;
}

// ArrayMeanFilter___un_3C_Cunf_3E_CuniCuniun_3C_unf_3E_CunfCuni_avx2 @ 140a1be60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanFilter___un_3C_Cunf_3E_CuniCuniun_3C_unf_3E_CunfCuni_avx2
               (longlong param_1,int param_2,uint param_3,longlong param_4,float param_5,int param_6
               ,undefined1 (*param_7) [32])

{
  float *pfVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  ulonglong uVar40;
  int iVar41;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
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
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  
  iVar35 = _UNK_150b50afc;
  iVar25 = _UNK_150b50af8;
  iVar24 = _UNK_150b50af4;
  iVar23 = _UNK_150b50af0;
  iVar22 = _UNK_150b50aec;
  iVar21 = _UNK_150b50ae8;
  iVar38 = _UNK_150b50ae4;
  iVar34 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar47 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
  uVar36 = param_3 + 1;
  iVar39 = param_2 - param_3;
  iVar27 = iVar39 + -1;
  auVar47 = auVar47 & ~*param_7;
  uVar26 = ~param_3;
  if ((((((((SUB321(auVar47 >> 0x1f,0) & 1) == 0 && (SUB321(auVar47 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar47 >> 0x5f,0) & 1) == 0) && SUB321(auVar47 >> 0x7f,0) == '\0') &&
        (SUB321(auVar47 >> 0x9f,0) & 1) == 0) && SUB321(auVar47 >> 0xbf,0) == '\0') &&
      (SUB321(auVar47 >> 0xdf,0) & 1) == 0) && -1 < auVar47[0x1f]) {
    uVar29 = (uVar36 - param_2) + param_6;
    uVar32 = uVar36;
    if ((int)uVar36 < (int)uVar29) {
      uVar32 = uVar29;
    }
    if (iVar39 < param_6) {
      uVar30 = param_3 + 8;
      if (-1 < (int)uVar36) {
        uVar30 = uVar36;
      }
      iVar33 = uVar36 - (uVar30 & 0xfffffff8);
      iVar41 = 0;
      if (iVar33 < (int)uVar36) {
        uVar30 = param_3 - iVar33;
        if (uVar30 < 8) {
          iVar41 = 0;
        }
        else {
          uVar37 = (uVar30 >> 3) + 1 & 0xfffffffe;
          iVar33 = iVar39 * 4 + 0x1c;
          uVar31 = 0;
          auVar69._4_4_ = __real_3f800000;
          auVar69._0_4_ = __real_3f800000;
          auVar69._8_4_ = __real_3f800000;
          auVar69._12_4_ = __real_3f800000;
          auVar69._16_4_ = __real_3f800000;
          auVar69._20_4_ = __real_3f800000;
          auVar69._24_4_ = __real_3f800000;
          auVar69._28_4_ = __real_3f800000;
          iVar41 = 0;
          do {
            iVar2 = iVar41 + iVar39;
            auVar11._0_4_ = iVar2 + iVar34;
            auVar11._4_4_ = iVar2 + iVar38;
            auVar11._8_4_ = iVar2 + iVar21;
            auVar11._12_4_ = iVar2 + iVar22;
            auVar11._16_4_ = iVar2 + iVar23;
            auVar11._20_4_ = iVar2 + iVar24;
            auVar11._24_4_ = iVar2 + iVar25;
            auVar11._28_4_ = iVar2 + iVar35;
            auVar47 = vcvtdq2ps_avx(auVar11);
            auVar47 = vmaxps_avx(auVar69,auVar47);
            auVar47 = vdivps_avx(*(undefined1 (*) [32])
                                  (param_1 + (int)(uVar31 + param_2 * 4 + param_3 * -4 + -4)),
                                 auVar47);
            *(undefined1 (*) [32])(param_4 + (ulonglong)uVar31) = auVar47;
            iVar2 = iVar41 + 8 + iVar39;
            auVar12._0_4_ = iVar2 + iVar34;
            auVar12._4_4_ = iVar2 + iVar38;
            auVar12._8_4_ = iVar2 + iVar21;
            auVar12._12_4_ = iVar2 + iVar22;
            auVar12._16_4_ = iVar2 + iVar23;
            auVar12._20_4_ = iVar2 + iVar24;
            auVar12._24_4_ = iVar2 + iVar25;
            auVar12._28_4_ = iVar2 + iVar35;
            auVar47 = vcvtdq2ps_avx(auVar12);
            auVar47 = vmaxps_avx(auVar69,auVar47);
            auVar47 = vdivps_avx(*(undefined1 (*) [32])(param_1 + iVar33),auVar47);
            *(undefined1 (*) [32])(param_4 + (ulonglong)(uVar31 + 0x20)) = auVar47;
            iVar41 = iVar41 + 0x10;
            iVar33 = iVar33 + 0x40;
            uVar31 = uVar31 + 0x40;
            uVar37 = uVar37 - 2;
          } while (uVar37 != 0);
        }
        if ((uVar30 & 8) == 0) {
          iVar34 = iVar41 + iVar39;
          auVar13._0_4_ =
               iVar34 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
          auVar13._4_4_ = iVar34 + _UNK_150b50ae4;
          auVar13._8_4_ = iVar34 + _UNK_150b50ae8;
          auVar13._12_4_ = iVar34 + _UNK_150b50aec;
          auVar13._16_4_ = iVar34 + _UNK_150b50af0;
          auVar13._20_4_ = iVar34 + _UNK_150b50af4;
          auVar13._24_4_ = iVar34 + _UNK_150b50af8;
          auVar13._28_4_ = iVar34 + _UNK_150b50afc;
          auVar47 = vcvtdq2ps_avx(auVar13);
          auVar57._4_4_ = __real_3f800000;
          auVar57._0_4_ = __real_3f800000;
          auVar57._8_4_ = __real_3f800000;
          auVar57._12_4_ = __real_3f800000;
          auVar57._16_4_ = __real_3f800000;
          auVar57._20_4_ = __real_3f800000;
          auVar57._24_4_ = __real_3f800000;
          auVar57._28_4_ = __real_3f800000;
          auVar47 = vmaxps_avx(auVar57,auVar47);
          auVar47 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (iVar27 + iVar41) * 4),auVar47);
          *(undefined1 (*) [32])(param_4 + (ulonglong)(uint)(iVar41 * 4)) = auVar47;
          iVar41 = iVar41 + 8;
        }
      }
      if (iVar41 <= (int)param_3) {
        auVar48._4_4_ = iVar41;
        auVar48._0_4_ = iVar41;
        auVar48._8_4_ = iVar41;
        auVar48._12_4_ = iVar41;
        auVar48._16_4_ = iVar41;
        auVar48._20_4_ = iVar41;
        auVar48._24_4_ = iVar41;
        auVar48._28_4_ = iVar41;
        auVar20._4_4_ = _UNK_150b50ae4;
        auVar20._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
        auVar20._8_4_ = _UNK_150b50ae8;
        auVar20._12_4_ = _UNK_150b50aec;
        auVar20._16_4_ = _UNK_150b50af0;
        auVar20._20_4_ = _UNK_150b50af4;
        auVar20._24_4_ = _UNK_150b50af8;
        auVar20._28_4_ = _UNK_150b50afc;
        auVar47 = vpor_avx2(auVar48,auVar20);
        auVar58._4_4_ = uVar36;
        auVar58._0_4_ = uVar36;
        auVar58._8_4_ = uVar36;
        auVar58._12_4_ = uVar36;
        auVar58._16_4_ = uVar36;
        auVar58._20_4_ = uVar36;
        auVar58._24_4_ = uVar36;
        auVar58._28_4_ = uVar36;
        auVar56 = vpcmpgtd_avx2(auVar58,auVar47);
        auVar60 = vmaskmovps_avx(auVar56,*(undefined1 (*) [32])(param_1 + (iVar41 + iVar27) * 4));
        auVar14._0_4_ = auVar47._0_4_ + iVar39;
        auVar14._4_4_ = auVar47._4_4_ + iVar39;
        auVar14._8_4_ = auVar47._8_4_ + iVar39;
        auVar14._12_4_ = auVar47._12_4_ + iVar39;
        auVar14._16_4_ = auVar47._16_4_ + iVar39;
        auVar14._20_4_ = auVar47._20_4_ + iVar39;
        auVar14._24_4_ = auVar47._24_4_ + iVar39;
        auVar14._28_4_ = auVar47._28_4_ + iVar39;
        auVar47 = vcvtdq2ps_avx(auVar14);
        auVar72._4_4_ = __real_3f800000;
        auVar72._0_4_ = __real_3f800000;
        auVar72._8_4_ = __real_3f800000;
        auVar72._12_4_ = __real_3f800000;
        auVar72._16_4_ = __real_3f800000;
        auVar72._20_4_ = __real_3f800000;
        auVar72._24_4_ = __real_3f800000;
        auVar72._28_4_ = __real_3f800000;
        auVar47 = vmaxps_avx(auVar72,auVar47);
        auVar47 = vdivps_avx(auVar60,auVar47);
        auVar47 = vmaskmovps_avx(auVar56,auVar47);
        *(undefined1 (*) [32])(param_4 + iVar41 * 4) = auVar47;
      }
      auVar49._0_4_ = (float)param_2;
      uVar31 = uVar32 - uVar36;
      uVar30 = uVar31 + 7;
      if (-1 < (int)uVar31) {
        uVar30 = uVar31;
      }
      iVar34 = ((uVar30 & 0xfffffff8) - uVar31) + uVar32;
      uVar40 = (ulonglong)uVar36;
      if ((int)uVar36 < iVar34) {
        auVar59._4_4_ = auVar49._0_4_;
        auVar59._0_4_ = auVar49._0_4_;
        auVar59._8_4_ = auVar49._0_4_;
        auVar59._12_4_ = auVar49._0_4_;
        auVar59._16_4_ = auVar49._0_4_;
        auVar59._20_4_ = auVar49._0_4_;
        auVar59._24_4_ = auVar49._0_4_;
        auVar59._28_4_ = auVar49._0_4_;
        uVar40 = (ulonglong)(int)uVar36;
        iVar38 = 0;
        do {
          auVar47 = vsubps_avx(*(undefined1 (*) [32])(param_1 + (param_2 * 4 + iVar38)),
                               *(undefined1 (*) [32])(param_1 + iVar38));
          auVar47 = vdivps_avx(auVar47,auVar59);
          *(undefined1 (*) [32])(param_4 + (int)(param_3 * 4 + 4 + iVar38)) = auVar47;
          uVar40 = uVar40 + 8;
          iVar38 = iVar38 + 0x20;
        } while ((longlong)uVar40 < (longlong)iVar34);
      }
      iVar34 = (int)uVar40;
      if ((int)uVar32 <= iVar34) goto LAB_140a1c668;
      auVar15._0_4_ =
           iVar34 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar15._4_4_ = iVar34 + _UNK_150b50ae4;
      auVar15._8_4_ = iVar34 + _UNK_150b50ae8;
      auVar15._12_4_ = iVar34 + _UNK_150b50aec;
      auVar15._16_4_ = iVar34 + _UNK_150b50af0;
      auVar15._20_4_ = iVar34 + _UNK_150b50af4;
      auVar15._24_4_ = iVar34 + _UNK_150b50af8;
      auVar15._28_4_ = iVar34 + _UNK_150b50afc;
      auVar70._4_4_ = uVar32;
      auVar70._0_4_ = uVar32;
      auVar70._8_4_ = uVar32;
      auVar70._12_4_ = uVar32;
      auVar70._16_4_ = uVar32;
      auVar70._20_4_ = uVar32;
      auVar70._24_4_ = uVar32;
      auVar70._28_4_ = uVar32;
      auVar60 = vpcmpgtd_avx2(auVar70,auVar15);
      auVar47 = vmaskmovps_avx(auVar60,*(undefined1 (*) [32])(param_1 + (iVar27 + iVar34) * 4));
      iVar27 = iVar34 * 4;
      auVar56 = vmaskmovps_avx(auVar60,*(undefined1 (*) [32])
                                        (param_1 + (int)((iVar34 + uVar26) * 4)));
      auVar47 = vsubps_avx(auVar47,auVar56);
      auVar49._4_4_ = auVar49._0_4_;
      auVar49._8_4_ = auVar49._0_4_;
      auVar49._12_4_ = auVar49._0_4_;
      auVar49._16_4_ = auVar49._0_4_;
      auVar49._20_4_ = auVar49._0_4_;
      auVar49._24_4_ = auVar49._0_4_;
      auVar49._28_4_ = auVar49._0_4_;
      auVar47 = vdivps_avx(auVar47,auVar49);
    }
    else {
      auVar47._0_4_ = param_5 / (float)param_6;
      uVar30 = uVar32 + 7;
      if (-1 < (int)uVar32) {
        uVar30 = uVar32;
      }
      if ((int)(uVar30 & 0xfffffff8) < 1) {
        uVar40 = 0;
        if ((int)uVar32 < 1) goto LAB_140a1c668;
      }
      else {
        uVar31 = 0;
        uVar40 = 0;
        do {
          pfVar1 = (float *)(param_4 + (ulonglong)uVar31);
          *pfVar1 = auVar47._0_4_;
          pfVar1[1] = auVar47._0_4_;
          pfVar1[2] = auVar47._0_4_;
          pfVar1[3] = auVar47._0_4_;
          pfVar1[4] = auVar47._0_4_;
          pfVar1[5] = auVar47._0_4_;
          pfVar1[6] = auVar47._0_4_;
          pfVar1[7] = auVar47._0_4_;
          uVar40 = uVar40 + 8;
          uVar31 = uVar31 + 0x20;
        } while (uVar40 < (uVar30 & 0xfffffff8));
        if ((int)uVar32 <= (int)uVar40) goto LAB_140a1c668;
      }
      iVar27 = (int)uVar40;
      auVar56._4_4_ = iVar27;
      auVar56._0_4_ = iVar27;
      auVar56._8_4_ = iVar27;
      auVar56._12_4_ = iVar27;
      auVar56._16_4_ = iVar27;
      auVar56._20_4_ = iVar27;
      auVar56._24_4_ = iVar27;
      auVar56._28_4_ = iVar27;
      auVar60._4_4_ = _UNK_150b50ae4;
      auVar60._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar60._8_4_ = _UNK_150b50ae8;
      auVar60._12_4_ = _UNK_150b50aec;
      auVar60._16_4_ = _UNK_150b50af0;
      auVar60._20_4_ = _UNK_150b50af4;
      auVar60._24_4_ = _UNK_150b50af8;
      auVar60._28_4_ = _UNK_150b50afc;
      auVar60 = vpor_avx2(auVar56,auVar60);
      auVar68._4_4_ = uVar32;
      auVar68._0_4_ = uVar32;
      auVar68._8_4_ = uVar32;
      auVar68._12_4_ = uVar32;
      auVar68._16_4_ = uVar32;
      auVar68._20_4_ = uVar32;
      auVar68._24_4_ = uVar32;
      auVar68._28_4_ = uVar32;
      auVar60 = vpcmpgtd_avx2(auVar68,auVar60);
      iVar27 = iVar27 << 2;
      auVar47._4_4_ = auVar47._0_4_;
      auVar47._8_4_ = auVar47._0_4_;
      auVar47._12_4_ = auVar47._0_4_;
      auVar47._16_4_ = auVar47._0_4_;
      auVar47._20_4_ = auVar47._0_4_;
      auVar47._24_4_ = auVar47._0_4_;
      auVar47._28_4_ = auVar47._0_4_;
    }
    auVar47 = vmaskmovps_avx(auVar60,auVar47);
    *(undefined1 (*) [32])(param_4 + iVar27) = auVar47;
LAB_140a1c668:
    iVar25 = _UNK_150d5a7fc;
    iVar24 = _UNK_150d5a7f8;
    iVar23 = _UNK_150d5a7f4;
    iVar22 = _UNK_150d5a7f0;
    iVar21 = _UNK_150d5a7ec;
    iVar38 = _UNK_150d5a7e8;
    iVar34 = _UNK_150d5a7e4;
    iVar27 = ___ymm_fffffff9fffffffafffffffbfffffffcfffffffdfffffffeffffffff00000000;
    uVar31 = param_6 - uVar32;
    uVar30 = uVar31 + 7;
    if (-1 < (int)uVar31) {
      uVar30 = uVar31;
    }
    iVar35 = ((uVar30 & 0xfffffff8) - uVar31) + param_6;
    if ((int)uVar32 < iVar35) {
      auVar50._4_4_ = param_5;
      auVar50._0_4_ = param_5;
      auVar50._8_4_ = param_5;
      auVar50._12_4_ = param_5;
      auVar50._16_4_ = param_5;
      auVar50._20_4_ = param_5;
      auVar50._24_4_ = param_5;
      auVar50._28_4_ = param_5;
      uVar32 = uVar36;
      if ((int)uVar36 < (int)uVar29) {
        uVar32 = uVar29;
      }
      lVar28 = (longlong)(int)uVar32;
      iVar39 = uVar32 * 4;
      do {
        auVar60 = vsubps_avx(auVar50,*(undefined1 (*) [32])(param_1 + (int)(uVar26 * 4 + iVar39)));
        auVar3 = vpsubd_avx(ZEXT416(param_6 + param_3),ZEXT416(uVar32));
        iVar33 = auVar3._0_4_;
        auVar16._0_4_ = iVar33 + iVar27;
        auVar16._4_4_ = iVar33 + iVar34;
        auVar16._8_4_ = iVar33 + iVar38;
        auVar16._12_4_ = iVar33 + iVar21;
        auVar16._16_4_ = iVar33 + iVar22;
        auVar16._20_4_ = iVar33 + iVar23;
        auVar16._24_4_ = iVar33 + iVar24;
        auVar16._28_4_ = iVar33 + iVar25;
        auVar47 = vcvtdq2ps_avx(auVar16);
        auVar47 = vdivps_avx(auVar60,auVar47);
        *(undefined1 (*) [32])(param_4 + iVar39) = auVar47;
        lVar28 = lVar28 + 8;
        iVar39 = iVar39 + 0x20;
        uVar32 = uVar32 + 8;
      } while (lVar28 < iVar35);
    }
    if (param_6 <= (int)uVar32) {
      return;
    }
    auVar17._0_4_ = uVar32 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
    ;
    auVar17._4_4_ = uVar32 + _UNK_150b50ae4;
    auVar17._8_4_ = uVar32 + _UNK_150b50ae8;
    auVar17._12_4_ = uVar32 + _UNK_150b50aec;
    auVar17._16_4_ = uVar32 + _UNK_150b50af0;
    auVar17._20_4_ = uVar32 + _UNK_150b50af4;
    auVar17._24_4_ = uVar32 + _UNK_150b50af8;
    auVar17._28_4_ = uVar32 + _UNK_150b50afc;
    auVar61._4_4_ = param_6;
    auVar61._0_4_ = param_6;
    auVar61._8_4_ = param_6;
    auVar61._12_4_ = param_6;
    auVar61._16_4_ = param_6;
    auVar61._20_4_ = param_6;
    auVar61._24_4_ = param_6;
    auVar61._28_4_ = param_6;
    auVar56 = vpcmpgtd_avx2(auVar61,auVar17);
    auVar47 = vmaskmovps_avx(auVar56,*(undefined1 (*) [32])(param_1 + (int)((uVar26 + uVar32) * 4)))
    ;
    auVar43._4_4_ = param_5;
    auVar43._0_4_ = param_5;
    auVar43._8_4_ = param_5;
    auVar43._12_4_ = param_5;
    auVar43._16_4_ = param_5;
    auVar43._20_4_ = param_5;
    auVar43._24_4_ = param_5;
    auVar43._28_4_ = param_5;
    auVar60 = vsubps_avx(auVar43,auVar47);
    param_6 = param_6 + param_3;
    auVar62._4_4_ = param_6;
    auVar62._0_4_ = param_6;
    auVar62._8_4_ = param_6;
    auVar62._12_4_ = param_6;
    auVar62._16_4_ = param_6;
    auVar62._20_4_ = param_6;
    auVar62._24_4_ = param_6;
    auVar62._28_4_ = param_6;
    auVar47 = vpsubd_avx2(auVar62,auVar17);
    auVar47 = vcvtdq2ps_avx(auVar47);
    auVar47 = vdivps_avx(auVar60,auVar47);
    auVar47 = vmaskmovps_avx(auVar56,auVar47);
    *(undefined1 (*) [32])(param_4 + (int)(uVar32 * 4)) = auVar47;
    return;
  }
  uVar29 = (param_3 - param_2) + param_6 + 1;
  uVar32 = uVar36;
  if ((int)uVar36 < (int)uVar29) {
    uVar32 = uVar29;
  }
  if (iVar39 < param_6) {
    uVar30 = param_3 + 8;
    if (-1 < (int)uVar36) {
      uVar30 = uVar36;
    }
    iVar33 = uVar36 - (uVar30 & 0xfffffff8);
    iVar41 = 0;
    if (iVar33 < (int)uVar36) {
      uVar30 = param_3 - iVar33;
      if (uVar30 < 8) {
        iVar41 = 0;
      }
      else {
        uVar37 = (uVar30 >> 3) + 1 & 0xfffffffe;
        iVar33 = iVar39 * 4 + 0x1c;
        uVar31 = 0;
        auVar64._4_4_ = __real_3f800000;
        auVar64._0_4_ = __real_3f800000;
        auVar64._8_4_ = __real_3f800000;
        auVar64._12_4_ = __real_3f800000;
        auVar64._16_4_ = __real_3f800000;
        auVar64._20_4_ = __real_3f800000;
        auVar64._24_4_ = __real_3f800000;
        auVar64._28_4_ = __real_3f800000;
        iVar41 = 0;
        do {
          iVar2 = iVar41 + iVar39;
          auVar4._0_4_ = iVar2 + iVar34;
          auVar4._4_4_ = iVar2 + iVar38;
          auVar4._8_4_ = iVar2 + iVar21;
          auVar4._12_4_ = iVar2 + iVar22;
          auVar4._16_4_ = iVar2 + iVar23;
          auVar4._20_4_ = iVar2 + iVar24;
          auVar4._24_4_ = iVar2 + iVar25;
          auVar4._28_4_ = iVar2 + iVar35;
          auVar47 = vcvtdq2ps_avx(auVar4);
          auVar47 = vmaxps_avx(auVar64,auVar47);
          auVar47 = vdivps_avx(*(undefined1 (*) [32])
                                (param_1 + (int)(uVar31 + param_2 * 4 + param_3 * -4 + -4)),auVar47)
          ;
          *(undefined1 (*) [32])(param_4 + (ulonglong)uVar31) = auVar47;
          iVar2 = iVar41 + 8 + iVar39;
          auVar5._0_4_ = iVar2 + iVar34;
          auVar5._4_4_ = iVar2 + iVar38;
          auVar5._8_4_ = iVar2 + iVar21;
          auVar5._12_4_ = iVar2 + iVar22;
          auVar5._16_4_ = iVar2 + iVar23;
          auVar5._20_4_ = iVar2 + iVar24;
          auVar5._24_4_ = iVar2 + iVar25;
          auVar5._28_4_ = iVar2 + iVar35;
          auVar47 = vcvtdq2ps_avx(auVar5);
          auVar47 = vmaxps_avx(auVar64,auVar47);
          auVar47 = vdivps_avx(*(undefined1 (*) [32])(param_1 + iVar33),auVar47);
          *(undefined1 (*) [32])(param_4 + (ulonglong)(uVar31 + 0x20)) = auVar47;
          iVar41 = iVar41 + 0x10;
          iVar33 = iVar33 + 0x40;
          uVar31 = uVar31 + 0x40;
          uVar37 = uVar37 - 2;
        } while (uVar37 != 0);
      }
      if ((uVar30 & 8) == 0) {
        iVar34 = iVar41 + iVar39;
        auVar6._0_4_ = iVar34 + 
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
        auVar6._4_4_ = iVar34 + _UNK_150b50ae4;
        auVar6._8_4_ = iVar34 + _UNK_150b50ae8;
        auVar6._12_4_ = iVar34 + _UNK_150b50aec;
        auVar6._16_4_ = iVar34 + _UNK_150b50af0;
        auVar6._20_4_ = iVar34 + _UNK_150b50af4;
        auVar6._24_4_ = iVar34 + _UNK_150b50af8;
        auVar6._28_4_ = iVar34 + _UNK_150b50afc;
        auVar47 = vcvtdq2ps_avx(auVar6);
        auVar71._4_4_ = __real_3f800000;
        auVar71._0_4_ = __real_3f800000;
        auVar71._8_4_ = __real_3f800000;
        auVar71._12_4_ = __real_3f800000;
        auVar71._16_4_ = __real_3f800000;
        auVar71._20_4_ = __real_3f800000;
        auVar71._24_4_ = __real_3f800000;
        auVar71._28_4_ = __real_3f800000;
        auVar47 = vmaxps_avx(auVar71,auVar47);
        auVar47 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (iVar27 + iVar41) * 4),auVar47);
        *(undefined1 (*) [32])(param_4 + (ulonglong)(uint)(iVar41 * 4)) = auVar47;
        iVar41 = iVar41 + 8;
      }
    }
    if (iVar41 <= (int)param_3) {
      auVar52._4_4_ = iVar41;
      auVar52._0_4_ = iVar41;
      auVar52._8_4_ = iVar41;
      auVar52._12_4_ = iVar41;
      auVar52._16_4_ = iVar41;
      auVar52._20_4_ = iVar41;
      auVar52._24_4_ = iVar41;
      auVar52._28_4_ = iVar41;
      auVar18._4_4_ = _UNK_150b50ae4;
      auVar18._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar18._8_4_ = _UNK_150b50ae8;
      auVar18._12_4_ = _UNK_150b50aec;
      auVar18._16_4_ = _UNK_150b50af0;
      auVar18._20_4_ = _UNK_150b50af4;
      auVar18._24_4_ = _UNK_150b50af8;
      auVar18._28_4_ = _UNK_150b50afc;
      auVar47 = vpor_avx2(auVar52,auVar18);
      auVar65._4_4_ = uVar36;
      auVar65._0_4_ = uVar36;
      auVar65._8_4_ = uVar36;
      auVar65._12_4_ = uVar36;
      auVar65._16_4_ = uVar36;
      auVar65._20_4_ = uVar36;
      auVar65._24_4_ = uVar36;
      auVar65._28_4_ = uVar36;
      auVar56 = vpcmpgtd_avx2(auVar65,auVar47);
      auVar60 = vmaskmovps_avx(auVar56,*(undefined1 (*) [32])(param_1 + (iVar41 + iVar27) * 4));
      auVar7._0_4_ = auVar47._0_4_ + iVar39;
      auVar7._4_4_ = auVar47._4_4_ + iVar39;
      auVar7._8_4_ = auVar47._8_4_ + iVar39;
      auVar7._12_4_ = auVar47._12_4_ + iVar39;
      auVar7._16_4_ = auVar47._16_4_ + iVar39;
      auVar7._20_4_ = auVar47._20_4_ + iVar39;
      auVar7._24_4_ = auVar47._24_4_ + iVar39;
      auVar7._28_4_ = auVar47._28_4_ + iVar39;
      auVar47 = vcvtdq2ps_avx(auVar7);
      auVar53._4_4_ = __real_3f800000;
      auVar53._0_4_ = __real_3f800000;
      auVar53._8_4_ = __real_3f800000;
      auVar53._12_4_ = __real_3f800000;
      auVar53._16_4_ = __real_3f800000;
      auVar53._20_4_ = __real_3f800000;
      auVar53._24_4_ = __real_3f800000;
      auVar53._28_4_ = __real_3f800000;
      auVar47 = vmaxps_avx(auVar53,auVar47);
      auVar47 = vdivps_avx(auVar60,auVar47);
      auVar47 = vmaskmovps_avx(auVar56,auVar47);
      *(undefined1 (*) [32])(param_4 + iVar41 * 4) = auVar47;
    }
    auVar45._0_4_ = (float)param_2;
    uVar31 = uVar32 - uVar36;
    uVar30 = uVar31 + 7;
    if (-1 < (int)uVar31) {
      uVar30 = uVar31;
    }
    iVar34 = ((uVar30 & 0xfffffff8) - uVar31) + uVar32;
    uVar40 = (ulonglong)uVar36;
    if ((int)uVar36 < iVar34) {
      auVar54._4_4_ = auVar45._0_4_;
      auVar54._0_4_ = auVar45._0_4_;
      auVar54._8_4_ = auVar45._0_4_;
      auVar54._12_4_ = auVar45._0_4_;
      auVar54._16_4_ = auVar45._0_4_;
      auVar54._20_4_ = auVar45._0_4_;
      auVar54._24_4_ = auVar45._0_4_;
      auVar54._28_4_ = auVar45._0_4_;
      uVar40 = (ulonglong)(int)uVar36;
      iVar38 = 0;
      do {
        auVar47 = vsubps_avx(*(undefined1 (*) [32])(param_1 + (param_2 * 4 + iVar38)),
                             *(undefined1 (*) [32])(param_1 + iVar38));
        auVar47 = vdivps_avx(auVar47,auVar54);
        *(undefined1 (*) [32])(param_4 + (int)(param_3 * 4 + 4 + iVar38)) = auVar47;
        uVar40 = uVar40 + 8;
        iVar38 = iVar38 + 0x20;
      } while ((longlong)uVar40 < (longlong)iVar34);
    }
    iVar34 = (int)uVar40;
    if ((int)uVar32 <= iVar34) goto LAB_140a1c2c8;
    auVar8._0_4_ = iVar34 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar8._4_4_ = iVar34 + _UNK_150b50ae4;
    auVar8._8_4_ = iVar34 + _UNK_150b50ae8;
    auVar8._12_4_ = iVar34 + _UNK_150b50aec;
    auVar8._16_4_ = iVar34 + _UNK_150b50af0;
    auVar8._20_4_ = iVar34 + _UNK_150b50af4;
    auVar8._24_4_ = iVar34 + _UNK_150b50af8;
    auVar8._28_4_ = iVar34 + _UNK_150b50afc;
    auVar66._4_4_ = uVar32;
    auVar66._0_4_ = uVar32;
    auVar66._8_4_ = uVar32;
    auVar66._12_4_ = uVar32;
    auVar66._16_4_ = uVar32;
    auVar66._20_4_ = uVar32;
    auVar66._24_4_ = uVar32;
    auVar66._28_4_ = uVar32;
    auVar47 = vpcmpgtd_avx2(auVar66,auVar8);
    auVar60 = vmaskmovps_avx(auVar47,*(undefined1 (*) [32])(param_1 + (iVar27 + iVar34) * 4));
    iVar27 = iVar34 * 4;
    auVar56 = vmaskmovps_avx(auVar47,*(undefined1 (*) [32])(param_1 + (int)((iVar34 + uVar26) * 4)))
    ;
    auVar60 = vsubps_avx(auVar60,auVar56);
    auVar45._4_4_ = auVar45._0_4_;
    auVar45._8_4_ = auVar45._0_4_;
    auVar45._12_4_ = auVar45._0_4_;
    auVar45._16_4_ = auVar45._0_4_;
    auVar45._20_4_ = auVar45._0_4_;
    auVar45._24_4_ = auVar45._0_4_;
    auVar45._28_4_ = auVar45._0_4_;
    auVar44 = vdivps_avx(auVar60,auVar45);
  }
  else {
    auVar44._0_4_ = param_5 / (float)param_6;
    uVar30 = uVar32 + 7;
    if (-1 < (int)uVar32) {
      uVar30 = uVar32;
    }
    if ((int)(uVar30 & 0xfffffff8) < 1) {
      uVar40 = 0;
      if ((int)uVar32 < 1) goto LAB_140a1c2c8;
    }
    else {
      uVar31 = 0;
      uVar40 = 0;
      do {
        pfVar1 = (float *)(param_4 + (ulonglong)uVar31);
        *pfVar1 = auVar44._0_4_;
        pfVar1[1] = auVar44._0_4_;
        pfVar1[2] = auVar44._0_4_;
        pfVar1[3] = auVar44._0_4_;
        pfVar1[4] = auVar44._0_4_;
        pfVar1[5] = auVar44._0_4_;
        pfVar1[6] = auVar44._0_4_;
        pfVar1[7] = auVar44._0_4_;
        uVar40 = uVar40 + 8;
        uVar31 = uVar31 + 0x20;
      } while (uVar40 < (uVar30 & 0xfffffff8));
      if ((int)uVar32 <= (int)uVar40) goto LAB_140a1c2c8;
    }
    iVar27 = (int)uVar40;
    auVar51._4_4_ = iVar27;
    auVar51._0_4_ = iVar27;
    auVar51._8_4_ = iVar27;
    auVar51._12_4_ = iVar27;
    auVar51._16_4_ = iVar27;
    auVar51._20_4_ = iVar27;
    auVar51._24_4_ = iVar27;
    auVar51._28_4_ = iVar27;
    auVar19._4_4_ = _UNK_150b50ae4;
    auVar19._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar19._8_4_ = _UNK_150b50ae8;
    auVar19._12_4_ = _UNK_150b50aec;
    auVar19._16_4_ = _UNK_150b50af0;
    auVar19._20_4_ = _UNK_150b50af4;
    auVar19._24_4_ = _UNK_150b50af8;
    auVar19._28_4_ = _UNK_150b50afc;
    auVar47 = vpor_avx2(auVar51,auVar19);
    auVar63._4_4_ = uVar32;
    auVar63._0_4_ = uVar32;
    auVar63._8_4_ = uVar32;
    auVar63._12_4_ = uVar32;
    auVar63._16_4_ = uVar32;
    auVar63._20_4_ = uVar32;
    auVar63._24_4_ = uVar32;
    auVar63._28_4_ = uVar32;
    auVar47 = vpcmpgtd_avx2(auVar63,auVar47);
    iVar27 = iVar27 << 2;
    auVar44._4_4_ = auVar44._0_4_;
    auVar44._8_4_ = auVar44._0_4_;
    auVar44._12_4_ = auVar44._0_4_;
    auVar44._16_4_ = auVar44._0_4_;
    auVar44._20_4_ = auVar44._0_4_;
    auVar44._24_4_ = auVar44._0_4_;
    auVar44._28_4_ = auVar44._0_4_;
  }
  auVar47 = vmaskmovps_avx(auVar47,auVar44);
  *(undefined1 (*) [32])(param_4 + iVar27) = auVar47;
LAB_140a1c2c8:
  iVar25 = _UNK_150d5a7fc;
  iVar24 = _UNK_150d5a7f8;
  iVar23 = _UNK_150d5a7f4;
  iVar22 = _UNK_150d5a7f0;
  iVar21 = _UNK_150d5a7ec;
  iVar38 = _UNK_150d5a7e8;
  iVar34 = _UNK_150d5a7e4;
  iVar27 = ___ymm_fffffff9fffffffafffffffbfffffffcfffffffdfffffffeffffffff00000000;
  uVar31 = param_6 - uVar32;
  uVar30 = uVar31 + 7;
  if (-1 < (int)uVar31) {
    uVar30 = uVar31;
  }
  iVar35 = ((uVar30 & 0xfffffff8) - uVar31) + param_6;
  if ((int)uVar32 < iVar35) {
    auVar67._4_4_ = param_5;
    auVar67._0_4_ = param_5;
    auVar67._8_4_ = param_5;
    auVar67._12_4_ = param_5;
    auVar67._16_4_ = param_5;
    auVar67._20_4_ = param_5;
    auVar67._24_4_ = param_5;
    auVar67._28_4_ = param_5;
    uVar32 = uVar36;
    if ((int)uVar36 < (int)uVar29) {
      uVar32 = uVar29;
    }
    lVar28 = (longlong)(int)uVar32;
    iVar39 = uVar32 * 4;
    do {
      auVar60 = vsubps_avx(auVar67,*(undefined1 (*) [32])(param_1 + (int)(uVar26 * 4 + iVar39)));
      auVar3 = vpsubd_avx(ZEXT416(param_6 + param_3),ZEXT416(uVar32));
      iVar33 = auVar3._0_4_;
      auVar9._0_4_ = iVar33 + iVar27;
      auVar9._4_4_ = iVar33 + iVar34;
      auVar9._8_4_ = iVar33 + iVar38;
      auVar9._12_4_ = iVar33 + iVar21;
      auVar9._16_4_ = iVar33 + iVar22;
      auVar9._20_4_ = iVar33 + iVar23;
      auVar9._24_4_ = iVar33 + iVar24;
      auVar9._28_4_ = iVar33 + iVar25;
      auVar47 = vcvtdq2ps_avx(auVar9);
      auVar47 = vdivps_avx(auVar60,auVar47);
      *(undefined1 (*) [32])(param_4 + iVar39) = auVar47;
      lVar28 = lVar28 + 8;
      iVar39 = iVar39 + 0x20;
      uVar32 = uVar32 + 8;
    } while (lVar28 < iVar35);
  }
  if ((int)uVar32 < param_6) {
    auVar10._0_4_ = uVar32 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
    ;
    auVar10._4_4_ = uVar32 + _UNK_150b50ae4;
    auVar10._8_4_ = uVar32 + _UNK_150b50ae8;
    auVar10._12_4_ = uVar32 + _UNK_150b50aec;
    auVar10._16_4_ = uVar32 + _UNK_150b50af0;
    auVar10._20_4_ = uVar32 + _UNK_150b50af4;
    auVar10._24_4_ = uVar32 + _UNK_150b50af8;
    auVar10._28_4_ = uVar32 + _UNK_150b50afc;
    auVar55._4_4_ = param_6;
    auVar55._0_4_ = param_6;
    auVar55._8_4_ = param_6;
    auVar55._12_4_ = param_6;
    auVar55._16_4_ = param_6;
    auVar55._20_4_ = param_6;
    auVar55._24_4_ = param_6;
    auVar55._28_4_ = param_6;
    auVar56 = vpcmpgtd_avx2(auVar55,auVar10);
    auVar42._4_4_ = param_5;
    auVar42._0_4_ = param_5;
    auVar42._8_4_ = param_5;
    auVar42._12_4_ = param_5;
    auVar42._16_4_ = param_5;
    auVar42._20_4_ = param_5;
    auVar42._24_4_ = param_5;
    auVar42._28_4_ = param_5;
    auVar47 = vmaskmovps_avx(auVar56,*(undefined1 (*) [32])(param_1 + (int)((uVar26 + uVar32) * 4)))
    ;
    auVar60 = vsubps_avx(auVar42,auVar47);
    param_6 = param_6 + param_3;
    auVar46._4_4_ = param_6;
    auVar46._0_4_ = param_6;
    auVar46._8_4_ = param_6;
    auVar46._12_4_ = param_6;
    auVar46._16_4_ = param_6;
    auVar46._20_4_ = param_6;
    auVar46._24_4_ = param_6;
    auVar46._28_4_ = param_6;
    auVar47 = vpsubd_avx2(auVar46,auVar10);
    auVar47 = vcvtdq2ps_avx(auVar47);
    auVar47 = vdivps_avx(auVar60,auVar47);
    auVar47 = vmaskmovps_avx(auVar56,auVar47);
    *(undefined1 (*) [32])(param_4 + (int)(uVar32 * 4)) = auVar47;
  }
  return;
}

// ArrayGetEuclideanNorm___un_3C_Cunf_3E_REFunfCuni_avx2 @ 140a1c790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetEuclideanNorm___un_3C_Cunf_3E_REFunfCuni_avx2
               (longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    auVar9 = *param_4;
    if ((int)param_3 < 1) goto LAB_140a1c828;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = *pfVar1 * *pfVar1 + auVar8._0_4_;
      auVar6._4_4_ = pfVar1[1] * pfVar1[1] + auVar8._4_4_;
      auVar6._8_4_ = pfVar1[2] * pfVar1[2] + auVar8._8_4_;
      auVar6._12_4_ = pfVar1[3] * pfVar1[3] + auVar8._12_4_;
      auVar6._16_4_ = pfVar1[4] * pfVar1[4] + auVar8._16_4_;
      auVar6._20_4_ = pfVar1[5] * pfVar1[5] + auVar8._20_4_;
      auVar6._24_4_ = pfVar1[6] * pfVar1[6] + auVar8._24_4_;
      auVar6._28_4_ = pfVar1[7] * pfVar1[7] + auVar8._28_4_;
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar9 = *param_4;
    auVar7 = auVar6;
    if ((int)param_3 <= (int)uVar4) goto LAB_140a1c828;
  }
  iVar3 = (int)uVar4;
  auVar10._4_4_ = iVar3;
  auVar10._0_4_ = iVar3;
  auVar10._8_4_ = iVar3;
  auVar10._12_4_ = iVar3;
  auVar10._16_4_ = iVar3;
  auVar10._20_4_ = iVar3;
  auVar10._24_4_ = iVar3;
  auVar10._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar10,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar11._4_4_ = param_3;
  auVar11._0_4_ = param_3;
  auVar11._8_4_ = param_3;
  auVar11._12_4_ = param_3;
  auVar11._16_4_ = param_3;
  auVar11._20_4_ = param_3;
  auVar11._24_4_ = param_3;
  auVar11._28_4_ = param_3;
  auVar10 = vpcmpgtd_avx2(auVar11,auVar6);
  auVar6 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar12._0_4_ = auVar6._0_4_ * auVar6._0_4_;
  auVar12._4_4_ = auVar6._4_4_ * auVar6._4_4_;
  auVar12._8_4_ = auVar6._8_4_ * auVar6._8_4_;
  auVar12._12_4_ = auVar6._12_4_ * auVar6._12_4_;
  auVar12._16_4_ = auVar6._16_4_ * auVar6._16_4_;
  auVar12._20_4_ = auVar6._20_4_ * auVar6._20_4_;
  auVar12._24_4_ = auVar6._24_4_ * auVar6._24_4_;
  auVar12._28_4_ = auVar6._28_4_ * auVar6._28_4_;
  auVar13._4_4_ = __real_80000000;
  auVar13._0_4_ = __real_80000000;
  auVar13._8_4_ = __real_80000000;
  auVar13._12_4_ = __real_80000000;
  auVar13._16_4_ = __real_80000000;
  auVar13._20_4_ = __real_80000000;
  auVar13._24_4_ = __real_80000000;
  auVar13._28_4_ = __real_80000000;
  auVar10 = vblendvps_avx(auVar13,auVar12,auVar10);
  auVar6._0_4_ = auVar7._0_4_ + auVar10._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar10._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar10._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar10._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar10._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar10._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar10._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar10._28_4_;
LAB_140a1c828:
  auVar9 = vpcmpeqd_avx2(auVar9,ZEXT1232(ZEXT812(0)));
  auVar9 = vpandn_avx2(auVar9,auVar6);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = SQRT(auVar9._0_4_ + auVar9._16_4_);
  return;
}

// ArrayMultiply___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1cea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiply___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar21 = 0;
    do {
      uVar23 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar23);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar23);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar23);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar5 * fVar12;
      pfVar3[2] = fVar6 * fVar13;
      pfVar3[3] = fVar7 * fVar14;
      pfVar3[4] = fVar8 * fVar15;
      pfVar3[5] = fVar9 * fVar16;
      pfVar3[6] = fVar10 * fVar17;
      pfVar3[7] = fVar11 * fVar18;
      uVar21 = uVar21 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_4;
  auVar26._0_4_ = param_4;
  auVar26._8_4_ = param_4;
  auVar26._12_4_ = param_4;
  auVar26._16_4_ = param_4;
  auVar26._20_4_ = param_4;
  auVar26._24_4_ = param_4;
  auVar26._28_4_ = param_4;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ * auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_3 + lVar22) = auVar25;
  return;
}

// ArrayComplexMultiplyInPlace___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1cfd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyInPlace___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 in_ZMM1 [64];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  float fVar25;
  
  fVar20 = __real_3f800000bf800000._4_4_;
  fVar19 = (float)__real_3f800000bf800000;
  auVar2 = *param_4;
  auVar6 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  uVar7 = param_3 & 0xfffffff8;
  auVar6 = auVar6 & ~auVar2;
  if ((((((((SUB321(auVar6 >> 0x1f,0) & 1) != 0 || (SUB321(auVar6 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar6 >> 0x5f,0) & 1) != 0) || SUB321(auVar6 >> 0x7f,0) != '\0') ||
        (SUB321(auVar6 >> 0x9f,0) & 1) != 0) || SUB321(auVar6 >> 0xbf,0) != '\0') ||
      (SUB321(auVar6 >> 0xdf,0) & 1) != 0) || auVar6[0x1f] < '\0') {
    if (0 < (int)uVar7) {
      uVar12 = (uVar7 - 1 >> 3) + 1;
      uVar10 = uVar12 & 3;
      if (uVar7 < 0x19) {
        iVar11 = 0;
      }
      else {
        uVar12 = uVar12 & 0xfffffffc;
        uVar13 = 0;
        iVar11 = 0;
        do {
          uVar9 = (ulonglong)uVar13;
          auVar6 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + uVar9));
          auVar5 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_2 + uVar9));
          auVar3 = vmovsldup_avx(auVar6);
          auVar6 = vmovshdup_avx(auVar6);
          auVar4 = vshufps_avx(auVar5,auVar5,0xb1);
          auVar14._0_4_ = auVar5._0_4_ * auVar3._0_4_ + auVar6._0_4_ * auVar4._0_4_ * fVar19;
          auVar14._4_4_ = auVar5._4_4_ * auVar3._4_4_ + auVar6._4_4_ * auVar4._4_4_ * fVar20;
          auVar14._8_4_ = auVar5._8_4_ * auVar3._8_4_ + auVar6._8_4_ * auVar4._8_4_ * fVar19;
          auVar14._12_4_ = auVar5._12_4_ * auVar3._12_4_ + auVar6._12_4_ * auVar4._12_4_ * fVar20;
          auVar14._16_4_ = auVar5._16_4_ * auVar3._16_4_ + auVar6._16_4_ * auVar4._16_4_ * fVar19;
          auVar14._20_4_ = auVar5._20_4_ * auVar3._20_4_ + auVar6._20_4_ * auVar4._20_4_ * fVar20;
          auVar14._24_4_ = auVar5._24_4_ * auVar3._24_4_ + auVar6._24_4_ * auVar4._24_4_ * fVar19;
          auVar14._28_4_ = auVar5._28_4_ * auVar3._28_4_ + auVar6._28_4_ * auVar4._28_4_ * fVar20;
          auVar6 = vmaskmovps_avx(auVar2,auVar14);
          *(undefined1 (*) [32])(param_2 + uVar9) = auVar6;
          auVar6 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + 0x20 + uVar9));
          auVar5 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_2 + 0x20 + uVar9));
          auVar3 = vmovsldup_avx(auVar6);
          auVar6 = vmovshdup_avx(auVar6);
          auVar4 = vshufps_avx(auVar5,auVar5,0xb1);
          auVar15._0_4_ = auVar5._0_4_ * auVar3._0_4_ + auVar6._0_4_ * auVar4._0_4_ * fVar19;
          auVar15._4_4_ = auVar5._4_4_ * auVar3._4_4_ + auVar6._4_4_ * auVar4._4_4_ * fVar20;
          auVar15._8_4_ = auVar5._8_4_ * auVar3._8_4_ + auVar6._8_4_ * auVar4._8_4_ * fVar19;
          auVar15._12_4_ = auVar5._12_4_ * auVar3._12_4_ + auVar6._12_4_ * auVar4._12_4_ * fVar20;
          auVar15._16_4_ = auVar5._16_4_ * auVar3._16_4_ + auVar6._16_4_ * auVar4._16_4_ * fVar19;
          auVar15._20_4_ = auVar5._20_4_ * auVar3._20_4_ + auVar6._20_4_ * auVar4._20_4_ * fVar20;
          auVar15._24_4_ = auVar5._24_4_ * auVar3._24_4_ + auVar6._24_4_ * auVar4._24_4_ * fVar19;
          auVar15._28_4_ = auVar5._28_4_ * auVar3._28_4_ + auVar6._28_4_ * auVar4._28_4_ * fVar20;
          auVar6 = vmaskmovps_avx(auVar2,auVar15);
          *(undefined1 (*) [32])(param_2 + 0x20 + uVar9) = auVar6;
          auVar6 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + 0x40 + uVar9));
          auVar5 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_2 + 0x40 + uVar9));
          auVar3 = vmovsldup_avx(auVar6);
          auVar6 = vmovshdup_avx(auVar6);
          auVar4 = vshufps_avx(auVar5,auVar5,0xb1);
          auVar16._0_4_ = auVar5._0_4_ * auVar3._0_4_ + auVar6._0_4_ * auVar4._0_4_ * fVar19;
          auVar16._4_4_ = auVar5._4_4_ * auVar3._4_4_ + auVar6._4_4_ * auVar4._4_4_ * fVar20;
          auVar16._8_4_ = auVar5._8_4_ * auVar3._8_4_ + auVar6._8_4_ * auVar4._8_4_ * fVar19;
          auVar16._12_4_ = auVar5._12_4_ * auVar3._12_4_ + auVar6._12_4_ * auVar4._12_4_ * fVar20;
          auVar16._16_4_ = auVar5._16_4_ * auVar3._16_4_ + auVar6._16_4_ * auVar4._16_4_ * fVar19;
          auVar16._20_4_ = auVar5._20_4_ * auVar3._20_4_ + auVar6._20_4_ * auVar4._20_4_ * fVar20;
          auVar16._24_4_ = auVar5._24_4_ * auVar3._24_4_ + auVar6._24_4_ * auVar4._24_4_ * fVar19;
          auVar16._28_4_ = auVar5._28_4_ * auVar3._28_4_ + auVar6._28_4_ * auVar4._28_4_ * fVar20;
          auVar6 = vmaskmovps_avx(auVar2,auVar16);
          *(undefined1 (*) [32])(param_2 + 0x40 + uVar9) = auVar6;
          auVar6 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + 0x60 + uVar9));
          auVar5 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_2 + 0x60 + uVar9));
          auVar3 = vmovsldup_avx(auVar6);
          auVar6 = vmovshdup_avx(auVar6);
          auVar4 = vshufps_avx(auVar5,auVar5,0xb1);
          auVar17._0_4_ = auVar5._0_4_ * auVar3._0_4_ + auVar6._0_4_ * auVar4._0_4_ * fVar19;
          auVar17._4_4_ = auVar5._4_4_ * auVar3._4_4_ + auVar6._4_4_ * auVar4._4_4_ * fVar20;
          auVar17._8_4_ = auVar5._8_4_ * auVar3._8_4_ + auVar6._8_4_ * auVar4._8_4_ * fVar19;
          auVar17._12_4_ = auVar5._12_4_ * auVar3._12_4_ + auVar6._12_4_ * auVar4._12_4_ * fVar20;
          auVar17._16_4_ = auVar5._16_4_ * auVar3._16_4_ + auVar6._16_4_ * auVar4._16_4_ * fVar19;
          auVar17._20_4_ = auVar5._20_4_ * auVar3._20_4_ + auVar6._20_4_ * auVar4._20_4_ * fVar20;
          auVar17._24_4_ = auVar5._24_4_ * auVar3._24_4_ + auVar6._24_4_ * auVar4._24_4_ * fVar19;
          auVar17._28_4_ = auVar5._28_4_ * auVar3._28_4_ + auVar6._28_4_ * auVar4._28_4_ * fVar20;
          auVar6 = vmaskmovps_avx(auVar2,auVar17);
          *(undefined1 (*) [32])(param_2 + 0x60 + uVar9) = auVar6;
          iVar11 = iVar11 + 0x20;
          uVar13 = uVar13 + 0x80;
          uVar12 = uVar12 - 4;
        } while (uVar12 != 0);
      }
      fVar20 = __real_3f800000bf800000._4_4_;
      fVar19 = (float)__real_3f800000bf800000;
      if (uVar10 != 0) {
        uVar12 = iVar11 << 2;
        do {
          uVar9 = (ulonglong)uVar12;
          auVar6 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + uVar9));
          auVar5 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_2 + uVar9));
          auVar3 = vmovsldup_avx(auVar6);
          auVar6 = vmovshdup_avx(auVar6);
          auVar4 = vshufps_avx(auVar5,auVar5,0xb1);
          auVar18._0_4_ = auVar5._0_4_ * auVar3._0_4_ + auVar6._0_4_ * auVar4._0_4_ * fVar19;
          auVar18._4_4_ = auVar5._4_4_ * auVar3._4_4_ + auVar6._4_4_ * auVar4._4_4_ * fVar20;
          auVar18._8_4_ = auVar5._8_4_ * auVar3._8_4_ + auVar6._8_4_ * auVar4._8_4_ * fVar19;
          auVar18._12_4_ = auVar5._12_4_ * auVar3._12_4_ + auVar6._12_4_ * auVar4._12_4_ * fVar20;
          auVar18._16_4_ = auVar5._16_4_ * auVar3._16_4_ + auVar6._16_4_ * auVar4._16_4_ * fVar19;
          auVar18._20_4_ = auVar5._20_4_ * auVar3._20_4_ + auVar6._20_4_ * auVar4._20_4_ * fVar20;
          auVar18._24_4_ = auVar5._24_4_ * auVar3._24_4_ + auVar6._24_4_ * auVar4._24_4_ * fVar19;
          auVar18._28_4_ = auVar5._28_4_ * auVar3._28_4_ + auVar6._28_4_ * auVar4._28_4_ * fVar20;
          auVar6 = vmaskmovps_avx(auVar2,auVar18);
          *(undefined1 (*) [32])(param_2 + uVar9) = auVar6;
          uVar12 = uVar12 + 0x20;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
    lVar8 = (longlong)(int)uVar7;
    do {
      fVar19 = *(float *)(param_1 + lVar8 * 4);
      fVar20 = *(float *)(param_1 + 4 + lVar8 * 4);
      fVar21 = *(float *)(param_2 + lVar8 * 4);
      fVar22 = *(float *)(param_2 + 4 + lVar8 * 4);
      *(float *)(param_2 + lVar8 * 4) = fVar19 * fVar21 - fVar20 * fVar22;
      *(float *)(param_2 + 4 + lVar8 * 4) = fVar21 * fVar20 + fVar19 * fVar22;
      lVar8 = lVar8 + 2;
    } while (lVar8 < (int)param_3);
    return;
  }
  if (0 < (int)uVar7) {
    uVar10 = uVar7 - 1;
    if (uVar10 == 7) {
      uVar9 = 0;
    }
    else {
      uVar13 = (uVar10 >> 3) + 1 & 0xfffffffe;
      uVar12 = 0;
      do {
        uVar9 = (ulonglong)uVar12;
        auVar2 = *(undefined1 (*) [32])(param_2 + uVar9);
        auVar3 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
        auVar6 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
        auVar4 = vshufps_avx(auVar2,auVar2,0xb1);
        pfVar1 = (float *)(param_2 + uVar9);
        *pfVar1 = auVar2._0_4_ * auVar3._0_4_ + auVar6._0_4_ * auVar4._0_4_ * fVar19;
        pfVar1[1] = auVar2._4_4_ * auVar3._4_4_ + auVar6._4_4_ * auVar4._4_4_ * fVar20;
        pfVar1[2] = auVar2._8_4_ * auVar3._8_4_ + auVar6._8_4_ * auVar4._8_4_ * fVar19;
        pfVar1[3] = auVar2._12_4_ * auVar3._12_4_ + auVar6._12_4_ * auVar4._12_4_ * fVar20;
        pfVar1[4] = auVar2._16_4_ * auVar3._16_4_ + auVar6._16_4_ * auVar4._16_4_ * fVar19;
        pfVar1[5] = auVar2._20_4_ * auVar3._20_4_ + auVar6._20_4_ * auVar4._20_4_ * fVar20;
        pfVar1[6] = auVar2._24_4_ * auVar3._24_4_ + auVar6._24_4_ * auVar4._24_4_ * fVar19;
        pfVar1[7] = auVar2._28_4_ * auVar3._28_4_ + auVar6._28_4_ * auVar4._28_4_ * fVar20;
        auVar2 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar9);
        auVar6 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar9);
        auVar3 = vmovsldup_avx(auVar2);
        auVar2 = vmovshdup_avx(auVar2);
        auVar4 = vshufps_avx(auVar6,auVar6,0xb1);
        pfVar1 = (float *)(param_2 + 0x20 + uVar9);
        *pfVar1 = auVar6._0_4_ * auVar3._0_4_ + auVar2._0_4_ * auVar4._0_4_ * fVar19;
        pfVar1[1] = auVar6._4_4_ * auVar3._4_4_ + auVar2._4_4_ * auVar4._4_4_ * fVar20;
        pfVar1[2] = auVar6._8_4_ * auVar3._8_4_ + auVar2._8_4_ * auVar4._8_4_ * fVar19;
        pfVar1[3] = auVar6._12_4_ * auVar3._12_4_ + auVar2._12_4_ * auVar4._12_4_ * fVar20;
        pfVar1[4] = auVar6._16_4_ * auVar3._16_4_ + auVar2._16_4_ * auVar4._16_4_ * fVar19;
        pfVar1[5] = auVar6._20_4_ * auVar3._20_4_ + auVar2._20_4_ * auVar4._20_4_ * fVar20;
        pfVar1[6] = auVar6._24_4_ * auVar3._24_4_ + auVar2._24_4_ * auVar4._24_4_ * fVar19;
        pfVar1[7] = auVar6._28_4_ * auVar3._28_4_ + auVar2._28_4_ * auVar4._28_4_ * fVar20;
        uVar12 = uVar12 + 0x40;
        uVar13 = uVar13 - 2;
      } while (uVar13 != 0);
      if ((uVar10 & 8) != 0) goto LAB_140a1d27f;
      uVar9 = (ulonglong)uVar12;
    }
    auVar2 = *(undefined1 (*) [32])(param_2 + uVar9);
    auVar6 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
    auVar4 = vshufps_avx(auVar2,auVar2,0xb1);
    fVar19 = auVar6._4_4_ * auVar4._4_4_ * _UNK_150d5a824;
    fVar20 = auVar6._8_4_ * auVar4._8_4_ * _UNK_150d5a828;
    fVar21 = auVar6._12_4_ * auVar4._12_4_ * _UNK_150d5a82c;
    fVar22 = auVar6._16_4_ * auVar4._16_4_ * _UNK_150d5a830;
    fVar23 = auVar6._20_4_ * auVar4._20_4_ * _UNK_150d5a834;
    fVar24 = auVar6._24_4_ * auVar4._24_4_ * _UNK_150d5a838;
    fVar25 = auVar6._28_4_ * auVar4._28_4_ * _UNK_150d5a83c;
    auVar3 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
    pfVar1 = (float *)(param_2 + uVar9);
    *pfVar1 = auVar2._0_4_ * auVar3._0_4_ +
              auVar6._0_4_ * auVar4._0_4_ *
              ___ymm_3f800000bf8000003f800000bf8000003f800000bf8000003f800000bf800000;
    pfVar1[1] = auVar2._4_4_ * auVar3._4_4_ + fVar19;
    pfVar1[2] = auVar2._8_4_ * auVar3._8_4_ + fVar20;
    pfVar1[3] = auVar2._12_4_ * auVar3._12_4_ + fVar21;
    pfVar1[4] = auVar2._16_4_ * auVar3._16_4_ + fVar22;
    pfVar1[5] = auVar2._20_4_ * auVar3._20_4_ + fVar23;
    pfVar1[6] = auVar2._24_4_ * auVar3._24_4_ + fVar24;
    pfVar1[7] = auVar2._28_4_ * auVar3._28_4_ + fVar25;
  }
LAB_140a1d27f:
  if ((int)uVar7 < (int)param_3) {
    lVar8 = (longlong)(int)uVar7;
    do {
      fVar19 = *(float *)(param_1 + lVar8 * 4);
      fVar20 = *(float *)(param_1 + 4 + lVar8 * 4);
      fVar21 = *(float *)(param_2 + lVar8 * 4);
      fVar22 = *(float *)(param_2 + 4 + lVar8 * 4);
      *(float *)(param_2 + lVar8 * 4) = fVar19 * fVar21 - fVar20 * fVar22;
      *(float *)(param_2 + 4 + lVar8 * 4) = fVar21 * fVar20 + fVar19 * fVar22;
      lVar8 = lVar8 + 2;
    } while (lVar8 < (int)param_3);
  }
  return;
}

// ArrayComplexMultiplyAdd___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1d2e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyAdd___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  
  fVar15 = __real_3f800000bf800000._4_4_;
  fVar14 = (float)__real_3f800000bf800000;
  uVar16 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar16 = param_4;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar21 = 0;
    uVar18 = 0;
    do {
      uVar20 = (ulonglong)uVar21;
      auVar22 = *(undefined1 (*) [32])(param_2 + uVar20);
      auVar3 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar20));
      auVar23 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar20));
      auVar4 = vshufps_avx(auVar22,auVar22,0xb1);
      pfVar1 = (float *)(param_3 + uVar20);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar10 = pfVar1[4];
      fVar11 = pfVar1[5];
      fVar12 = pfVar1[6];
      fVar13 = pfVar1[7];
      pfVar2 = (float *)(param_3 + uVar20);
      *pfVar2 = auVar22._0_4_ * auVar3._0_4_ + auVar23._0_4_ * auVar4._0_4_ * fVar14 + *pfVar1;
      pfVar2[1] = auVar22._4_4_ * auVar3._4_4_ + auVar23._4_4_ * auVar4._4_4_ * fVar15 + fVar7;
      pfVar2[2] = auVar22._8_4_ * auVar3._8_4_ + auVar23._8_4_ * auVar4._8_4_ * fVar14 + fVar8;
      pfVar2[3] = auVar22._12_4_ * auVar3._12_4_ + auVar23._12_4_ * auVar4._12_4_ * fVar15 + fVar9;
      pfVar2[4] = auVar22._16_4_ * auVar3._16_4_ + auVar23._16_4_ * auVar4._16_4_ * fVar14 + fVar10;
      pfVar2[5] = auVar22._20_4_ * auVar3._20_4_ + auVar23._20_4_ * auVar4._20_4_ * fVar15 + fVar11;
      pfVar2[6] = auVar22._24_4_ * auVar3._24_4_ + auVar23._24_4_ * auVar4._24_4_ * fVar14 + fVar12;
      pfVar2[7] = auVar22._28_4_ * auVar3._28_4_ + auVar23._28_4_ * auVar4._28_4_ * fVar15 + fVar13;
      uVar18 = uVar18 + 8;
      uVar21 = uVar21 + 0x20;
    } while (uVar18 < (uVar16 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar22._4_4_ = iVar17;
  auVar22._0_4_ = iVar17;
  auVar22._8_4_ = iVar17;
  auVar22._12_4_ = iVar17;
  auVar22._16_4_ = iVar17;
  auVar22._20_4_ = iVar17;
  auVar22._24_4_ = iVar17;
  auVar22._28_4_ = iVar17;
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar23._4_4_ = param_4;
  auVar23._0_4_ = param_4;
  auVar23._8_4_ = param_4;
  auVar23._12_4_ = param_4;
  auVar23._16_4_ = param_4;
  auVar23._20_4_ = param_4;
  auVar23._24_4_ = param_4;
  auVar23._28_4_ = param_4;
  auVar6 = vpcmpgtd_avx2(auVar23,auVar22);
  lVar19 = (longlong)(iVar17 << 2);
  auVar22 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_1 + lVar19));
  auVar4 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_2 + lVar19));
  auVar23 = vmovsldup_avx(auVar22);
  auVar22 = vmovshdup_avx(auVar22);
  auVar3 = vshufps_avx(auVar4,auVar4,0xb1);
  auVar5 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_3 + lVar19));
  auVar24._0_4_ =
       auVar5._0_4_ +
       auVar4._0_4_ * auVar23._0_4_ +
       auVar22._0_4_ * auVar3._0_4_ *
       ___ymm_3f800000bf8000003f800000bf8000003f800000bf8000003f800000bf800000;
  auVar24._4_4_ =
       auVar5._4_4_ + auVar4._4_4_ * auVar23._4_4_ + auVar22._4_4_ * auVar3._4_4_ * _UNK_150d5a824;
  auVar24._8_4_ =
       auVar5._8_4_ + auVar4._8_4_ * auVar23._8_4_ + auVar22._8_4_ * auVar3._8_4_ * _UNK_150d5a828;
  auVar24._12_4_ =
       auVar5._12_4_ +
       auVar4._12_4_ * auVar23._12_4_ + auVar22._12_4_ * auVar3._12_4_ * _UNK_150d5a82c;
  auVar24._16_4_ =
       auVar5._16_4_ +
       auVar4._16_4_ * auVar23._16_4_ + auVar22._16_4_ * auVar3._16_4_ * _UNK_150d5a830;
  auVar24._20_4_ =
       auVar5._20_4_ +
       auVar4._20_4_ * auVar23._20_4_ + auVar22._20_4_ * auVar3._20_4_ * _UNK_150d5a834;
  auVar24._24_4_ =
       auVar5._24_4_ +
       auVar4._24_4_ * auVar23._24_4_ + auVar22._24_4_ * auVar3._24_4_ * _UNK_150d5a838;
  auVar24._28_4_ =
       auVar5._28_4_ +
       auVar4._28_4_ * auVar23._28_4_ + auVar22._28_4_ * auVar3._28_4_ * _UNK_150d5a83c;
  auVar22 = vmaskmovps_avx(auVar6,auVar24);
  *(undefined1 (*) [32])(param_3 + lVar19) = auVar22;
  return;
}

// ArrayLerpAddInPlace___un_3C_Cunf_3E_CunfCunfun_3C_unf_3E_Cuni_avx2 @ 140a1d6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpAddInPlace___un_3C_Cunf_3E_CunfCunfun_3C_unf_3E_Cuni_avx2
               (longlong param_1,float param_2,float param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar31 [32];
  
  auVar28 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar27._0_4_ = (float)(int)(param_5 - 1);
  auVar27._4_12_ = in_ZMM3._4_12_;
  auVar27 = vmaxss_avx(auVar27,ZEXT416(__real_3f800000));
  fVar26 = (param_3 - param_2) / auVar27._0_4_;
  uVar20 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar20 = param_5;
  }
  if ((int)(uVar20 & 0xfffffff8) < 1) {
    uVar23 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar23 = 0;
    do {
      uVar21 = (undefined4)uVar23;
      auVar31._4_4_ = uVar21;
      auVar31._0_4_ = uVar21;
      auVar31._8_4_ = uVar21;
      auVar31._12_4_ = uVar21;
      auVar31._16_4_ = uVar21;
      auVar31._20_4_ = uVar21;
      auVar31._24_4_ = uVar21;
      auVar31._28_4_ = uVar21;
      auVar31 = vpor_avx2(auVar31,auVar28);
      auVar31 = vcvtdq2ps_avx(auVar31);
      uVar25 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar25);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_4 + uVar25);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_4 + uVar25);
      *pfVar3 = (fVar26 * auVar31._0_4_ + param_2) * *pfVar1 + *pfVar2;
      pfVar3[1] = (fVar26 * auVar31._4_4_ + param_2) * fVar12 + fVar4;
      pfVar3[2] = (fVar26 * auVar31._8_4_ + param_2) * fVar13 + fVar5;
      pfVar3[3] = (fVar26 * auVar31._12_4_ + param_2) * fVar14 + fVar6;
      pfVar3[4] = (fVar26 * auVar31._16_4_ + param_2) * fVar15 + fVar7;
      pfVar3[5] = (fVar26 * auVar31._20_4_ + param_2) * fVar16 + fVar8;
      pfVar3[6] = (fVar26 * auVar31._24_4_ + param_2) * fVar17 + fVar9;
      pfVar3[7] = (fVar26 * auVar31._28_4_ + param_2) * fVar18 + fVar10;
      uVar23 = uVar23 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar23 < (uVar20 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar23) {
      return;
    }
  }
  iVar22 = (int)uVar23;
  auVar28._4_4_ = iVar22;
  auVar28._0_4_ = iVar22;
  auVar28._8_4_ = iVar22;
  auVar28._12_4_ = iVar22;
  auVar28._16_4_ = iVar22;
  auVar28._20_4_ = iVar22;
  auVar28._24_4_ = iVar22;
  auVar28._28_4_ = iVar22;
  auVar28 = vpor_avx2(auVar28,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar30._4_4_ = param_5;
  auVar30._0_4_ = param_5;
  auVar30._8_4_ = param_5;
  auVar30._12_4_ = param_5;
  auVar30._16_4_ = param_5;
  auVar30._20_4_ = param_5;
  auVar30._24_4_ = param_5;
  auVar30._28_4_ = param_5;
  auVar11 = vpcmpgtd_avx2(auVar30,auVar28);
  auVar28 = vcvtdq2ps_avx(auVar28);
  lVar19 = (longlong)(iVar22 << 2);
  auVar31 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar19));
  auVar30 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_4 + lVar19));
  auVar29._0_4_ = (auVar28._0_4_ * fVar26 + param_2) * auVar31._0_4_ + auVar30._0_4_;
  auVar29._4_4_ = (auVar28._4_4_ * fVar26 + param_2) * auVar31._4_4_ + auVar30._4_4_;
  auVar29._8_4_ = (auVar28._8_4_ * fVar26 + param_2) * auVar31._8_4_ + auVar30._8_4_;
  auVar29._12_4_ = (auVar28._12_4_ * fVar26 + param_2) * auVar31._12_4_ + auVar30._12_4_;
  auVar29._16_4_ = (auVar28._16_4_ * fVar26 + param_2) * auVar31._16_4_ + auVar30._16_4_;
  auVar29._20_4_ = (auVar28._20_4_ * fVar26 + param_2) * auVar31._20_4_ + auVar30._20_4_;
  auVar29._24_4_ = (auVar28._24_4_ * fVar26 + param_2) * auVar31._24_4_ + auVar30._24_4_;
  auVar29._28_4_ = (auVar28._28_4_ * fVar26 + param_2) * auVar31._28_4_ + auVar30._28_4_;
  auVar28 = vmaskmovps_avx(auVar11,auVar29);
  *(undefined1 (*) [32])(param_4 + lVar19) = auVar28;
  return;
}

// ArraySubtract___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1d7c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtract___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [32];
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  
  uVar2 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar2 = param_4;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar6 = (ulonglong)uVar7;
      auVar8 = vsubps_avx(*(undefined1 (*) [32])(param_1 + uVar6),
                          *(undefined1 (*) [32])(param_2 + uVar6));
      *(undefined1 (*) [32])(param_3 + uVar6) = auVar8;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar8._4_4_ = iVar3;
  auVar8._0_4_ = iVar3;
  auVar8._8_4_ = iVar3;
  auVar8._12_4_ = iVar3;
  auVar8._16_4_ = iVar3;
  auVar8._20_4_ = iVar3;
  auVar8._24_4_ = iVar3;
  auVar8._28_4_ = iVar3;
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9._4_4_ = param_4;
  auVar9._0_4_ = param_4;
  auVar9._8_4_ = param_4;
  auVar9._12_4_ = param_4;
  auVar9._16_4_ = param_4;
  auVar9._20_4_ = param_4;
  auVar9._24_4_ = param_4;
  auVar9._28_4_ = param_4;
  auVar1 = vpcmpgtd_avx2(auVar9,auVar8);
  lVar5 = (longlong)(iVar3 << 2);
  auVar8 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar9 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar9);
  auVar8 = vmaskmovps_avx(auVar1,auVar8);
  *(undefined1 (*) [32])(param_3 + lVar5) = auVar8;
  return;
}

// ArrayMagnitudeToDecibelInPlace___un_3C_unf_3E_CunfCuni_avx2 @ 140a1dd30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMagnitudeToDecibelInPlace___un_3C_unf_3E_CunfCuni_avx2
               (longlong param_1,float param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [32];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  float fVar36;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar37 [32];
  float fVar45;
  undefined1 auVar38 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar48 [32];
  float fVar57;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  
  fVar12 = __real_3f317218;
  fVar11 = __real_3f000010;
  fVar10 = __real_3eaaa11c;
  fVar9 = __real_3e80fb87;
  fVar45 = __real_3e33a0af;
  fVar44 = __real_3eaf548d;
  fVar43 = __real_bf198181;
  fVar42 = __real_3ffe0193;
  fVar41 = __real_c01f5af7;
  fVar40 = __real_3fdfe28e;
  uVar8 = __real_807fffff;
  iVar16 = __real_ffffff82;
  fVar39 = __real_410af967;
  uVar7 = __real_3f000000;
  fVar36 = __real_3f800000;
  auVar46 = in_ZMM2._0_32_;
  uVar13 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar13 = param_3;
  }
  fVar18 = (param_2 * __real_40135d8e) / __real_41a00000;
  auVar22 = ZEXT416((uint)(fVar18 * __real_3fb8aa3b));
  auVar22 = vroundss_avx(auVar22,auVar22,9);
  fVar21 = auVar22._0_4_;
  iVar14 = (int)fVar21;
  fVar19 = __real_7f800000;
  if (iVar14 < 0x80) {
    fVar19 = fVar21 * __real_b5bfbe8e + fVar21 * __real_bf317200 + fVar18;
    auVar46 = ZEXT432((uint)__real_3f800000);
    fVar19 = (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * __real_39907835 +
                                                                         __real_3aaaf7b5) +
                                                               __real_3c09475d) + __real_3d2a9d49) +
                                           __real_3e2aab20) + __real_3efffffd) + __real_3f800000) +
             __real_3f800000) * (float)(iVar14 * 0x800000 + 0x3f800000);
  }
  auVar46 = vpcmpeqd_avx2(auVar46,auVar46);
  fVar18 = 0.0;
  if (-0x7f < iVar14) {
    fVar18 = fVar19;
  }
  uVar13 = uVar13 & 0xfffffff8;
  auVar46 = auVar46 & ~*param_4;
  if ((((((((SUB321(auVar46 >> 0x1f,0) & 1) == 0 && (SUB321(auVar46 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar46 >> 0x5f,0) & 1) == 0) && SUB321(auVar46 >> 0x7f,0) == '\0') &&
        (SUB321(auVar46 >> 0x9f,0) & 1) == 0) && SUB321(auVar46 >> 0xbf,0) == '\0') &&
      (SUB321(auVar46 >> 0xdf,0) & 1) == 0) && -1 < auVar46[0x1f]) {
    if ((int)uVar13 < 1) goto LAB_140a1e39c;
    uVar15 = 0;
    auVar29._4_4_ = __real_3f800000;
    auVar29._0_4_ = __real_3f800000;
    auVar29._8_4_ = __real_3f800000;
    auVar29._12_4_ = __real_3f800000;
    auVar29._16_4_ = __real_3f800000;
    auVar29._20_4_ = __real_3f800000;
    auVar29._24_4_ = __real_3f800000;
    auVar29._28_4_ = __real_3f800000;
    uVar17 = 0;
    auVar46._4_4_ = __real_7fc00000;
    auVar46._0_4_ = __real_7fc00000;
    auVar46._8_4_ = __real_7fc00000;
    auVar46._12_4_ = __real_7fc00000;
    auVar46._16_4_ = __real_7fc00000;
    auVar46._20_4_ = __real_7fc00000;
    auVar46._24_4_ = __real_7fc00000;
    auVar46._28_4_ = __real_7fc00000;
    auVar27._4_4_ = __real_ff800000;
    auVar27._0_4_ = __real_ff800000;
    auVar27._8_4_ = __real_ff800000;
    auVar27._12_4_ = __real_ff800000;
    auVar27._16_4_ = __real_ff800000;
    auVar27._20_4_ = __real_ff800000;
    auVar27._24_4_ = __real_ff800000;
    auVar27._28_4_ = __real_ff800000;
    do {
      auVar33._4_4_ = fVar18;
      auVar33._0_4_ = fVar18;
      auVar33._8_4_ = fVar18;
      auVar33._12_4_ = fVar18;
      auVar33._16_4_ = fVar18;
      auVar33._20_4_ = fVar18;
      auVar33._24_4_ = fVar18;
      auVar33._28_4_ = fVar18;
      auVar23 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15),auVar33);
      auVar33 = vcmpps_avx(auVar23,ZEXT832(0),2);
      auVar2 = vblendvps_avx(auVar23,auVar29,auVar33);
      auVar50._0_4_ = auVar2._0_4_ & uVar8;
      auVar50._4_4_ = auVar2._4_4_ & uVar8;
      auVar50._8_4_ = auVar2._8_4_ & uVar8;
      auVar50._12_4_ = auVar2._12_4_ & uVar8;
      auVar50._16_4_ = auVar2._16_4_ & uVar8;
      auVar50._20_4_ = auVar2._20_4_ & uVar8;
      auVar50._24_4_ = auVar2._24_4_ & uVar8;
      auVar50._28_4_ = auVar2._28_4_ & uVar8;
      auVar47._4_4_ = uVar7;
      auVar47._0_4_ = uVar7;
      auVar47._8_4_ = uVar7;
      auVar47._12_4_ = uVar7;
      auVar47._16_4_ = uVar7;
      auVar47._20_4_ = uVar7;
      auVar47._24_4_ = uVar7;
      auVar47._28_4_ = uVar7;
      auVar47 = vsubps_avx(auVar29,auVar50 | auVar47);
      fVar19 = auVar47._0_4_;
      fVar21 = auVar47._4_4_;
      fVar52 = auVar47._8_4_;
      fVar53 = auVar47._12_4_;
      fVar54 = auVar47._16_4_;
      fVar55 = auVar47._20_4_;
      fVar56 = auVar47._24_4_;
      fVar57 = auVar47._28_4_;
      auVar47 = vpsrad_avx2(auVar2,0x17);
      auVar2._0_4_ = auVar47._0_4_ + iVar16;
      auVar2._4_4_ = auVar47._4_4_ + iVar16;
      auVar2._8_4_ = auVar47._8_4_ + iVar16;
      auVar2._12_4_ = auVar47._12_4_ + iVar16;
      auVar2._16_4_ = auVar47._16_4_ + iVar16;
      auVar2._20_4_ = auVar47._20_4_ + iVar16;
      auVar2._24_4_ = auVar47._24_4_ + iVar16;
      auVar2._28_4_ = auVar47._28_4_ + iVar16;
      auVar2 = vcvtdq2ps_avx(auVar2);
      auVar51._0_4_ =
           fVar12 * auVar2._0_4_ -
           fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 
                                                  (fVar19 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar51._4_4_ =
           fVar12 * auVar2._4_4_ -
           fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * 
                                                  (fVar21 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar51._8_4_ =
           fVar12 * auVar2._8_4_ -
           fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * 
                                                  (fVar52 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar51._12_4_ =
           fVar12 * auVar2._12_4_ -
           fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * 
                                                  (fVar53 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar51._16_4_ =
           fVar12 * auVar2._16_4_ -
           fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * 
                                                  (fVar54 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar51._20_4_ =
           fVar12 * auVar2._20_4_ -
           fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * 
                                                  (fVar55 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar51._24_4_ =
           fVar12 * auVar2._24_4_ -
           fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * 
                                                  (fVar56 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar51._28_4_ =
           fVar12 * auVar2._28_4_ -
           fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * 
                                                  (fVar57 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar2 = vcmpps_avx(auVar23,ZEXT832(0),1);
      auVar2 = vblendvps_avx(auVar27,auVar46,auVar2);
      auVar2 = vblendvps_avx(auVar51,auVar2,auVar33);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar15);
      *pfVar1 = auVar2._0_4_ * fVar39;
      pfVar1[1] = auVar2._4_4_ * fVar39;
      pfVar1[2] = auVar2._8_4_ * fVar39;
      pfVar1[3] = auVar2._12_4_ * fVar39;
      pfVar1[4] = auVar2._16_4_ * fVar39;
      pfVar1[5] = auVar2._20_4_ * fVar39;
      pfVar1[6] = auVar2._24_4_ * fVar39;
      pfVar1[7] = auVar2._28_4_ * fVar39;
      uVar17 = uVar17 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar17 < uVar13);
  }
  else {
    if ((int)uVar13 < 1) {
LAB_140a1e39c:
      iVar16 = 0;
      if ((int)param_3 < 1) {
        return;
      }
      goto LAB_140a1e1e9;
    }
    uVar15 = 0;
    auVar28._4_4_ = __real_3f800000;
    auVar28._0_4_ = __real_3f800000;
    auVar28._8_4_ = __real_3f800000;
    auVar28._12_4_ = __real_3f800000;
    auVar28._16_4_ = __real_3f800000;
    auVar28._20_4_ = __real_3f800000;
    auVar28._24_4_ = __real_3f800000;
    auVar28._28_4_ = __real_3f800000;
    uVar17 = 0;
    auVar23._4_4_ = __real_7fc00000;
    auVar23._0_4_ = __real_7fc00000;
    auVar23._8_4_ = __real_7fc00000;
    auVar23._12_4_ = __real_7fc00000;
    auVar23._16_4_ = __real_7fc00000;
    auVar23._20_4_ = __real_7fc00000;
    auVar23._24_4_ = __real_7fc00000;
    auVar23._28_4_ = __real_7fc00000;
    auVar26._4_4_ = __real_ff800000;
    auVar26._0_4_ = __real_ff800000;
    auVar26._8_4_ = __real_ff800000;
    auVar26._12_4_ = __real_ff800000;
    auVar26._16_4_ = __real_ff800000;
    auVar26._20_4_ = __real_ff800000;
    auVar26._24_4_ = __real_ff800000;
    auVar26._28_4_ = __real_ff800000;
    do {
      auVar6._4_4_ = fVar18;
      auVar6._0_4_ = fVar18;
      auVar6._8_4_ = fVar18;
      auVar6._12_4_ = fVar18;
      auVar6._16_4_ = fVar18;
      auVar6._20_4_ = fVar18;
      auVar6._24_4_ = fVar18;
      auVar6._28_4_ = fVar18;
      auVar29 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15),auVar6);
      auVar27 = vcmpps_avx(auVar29,ZEXT832(0),2);
      auVar46 = vblendvps_avx(auVar29,auVar28,auVar27);
      auVar48._0_4_ = auVar46._0_4_ & uVar8;
      auVar48._4_4_ = auVar46._4_4_ & uVar8;
      auVar48._8_4_ = auVar46._8_4_ & uVar8;
      auVar48._12_4_ = auVar46._12_4_ & uVar8;
      auVar48._16_4_ = auVar46._16_4_ & uVar8;
      auVar48._20_4_ = auVar46._20_4_ & uVar8;
      auVar48._24_4_ = auVar46._24_4_ & uVar8;
      auVar48._28_4_ = auVar46._28_4_ & uVar8;
      auVar5._4_4_ = uVar7;
      auVar5._0_4_ = uVar7;
      auVar5._8_4_ = uVar7;
      auVar5._12_4_ = uVar7;
      auVar5._16_4_ = uVar7;
      auVar5._20_4_ = uVar7;
      auVar5._24_4_ = uVar7;
      auVar5._28_4_ = uVar7;
      auVar2 = vsubps_avx(auVar28,auVar48 | auVar5);
      fVar19 = auVar2._0_4_;
      fVar21 = auVar2._4_4_;
      fVar52 = auVar2._8_4_;
      fVar53 = auVar2._12_4_;
      fVar54 = auVar2._16_4_;
      fVar55 = auVar2._20_4_;
      fVar56 = auVar2._24_4_;
      fVar57 = auVar2._28_4_;
      auVar46 = vpsrad_avx2(auVar46,0x17);
      auVar3._0_4_ = auVar46._0_4_ + iVar16;
      auVar3._4_4_ = auVar46._4_4_ + iVar16;
      auVar3._8_4_ = auVar46._8_4_ + iVar16;
      auVar3._12_4_ = auVar46._12_4_ + iVar16;
      auVar3._16_4_ = auVar46._16_4_ + iVar16;
      auVar3._20_4_ = auVar46._20_4_ + iVar16;
      auVar3._24_4_ = auVar46._24_4_ + iVar16;
      auVar3._28_4_ = auVar46._28_4_ + iVar16;
      auVar46 = vcvtdq2ps_avx(auVar3);
      auVar49._0_4_ =
           fVar12 * auVar46._0_4_ -
           fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 
                                                  (fVar19 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar49._4_4_ =
           fVar12 * auVar46._4_4_ -
           fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * 
                                                  (fVar21 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar49._8_4_ =
           fVar12 * auVar46._8_4_ -
           fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * 
                                                  (fVar52 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar49._12_4_ =
           fVar12 * auVar46._12_4_ -
           fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * 
                                                  (fVar53 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar49._16_4_ =
           fVar12 * auVar46._16_4_ -
           fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * 
                                                  (fVar54 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar49._20_4_ =
           fVar12 * auVar46._20_4_ -
           fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * 
                                                  (fVar55 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar49._24_4_ =
           fVar12 * auVar46._24_4_ -
           fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * 
                                                  (fVar56 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar49._28_4_ =
           fVar12 * auVar46._28_4_ -
           fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * 
                                                  (fVar57 * fVar40 + fVar41) + fVar42) + fVar43) +
                                                  fVar44) + fVar45) + fVar9) + fVar10) + fVar11) +
                    fVar36);
      auVar46 = vcmpps_avx(auVar29,ZEXT832(0),1);
      auVar46 = vblendvps_avx(auVar26,auVar23,auVar46);
      auVar46 = vblendvps_avx(auVar49,auVar46,auVar27);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar15);
      *pfVar1 = auVar46._0_4_ * fVar39;
      pfVar1[1] = auVar46._4_4_ * fVar39;
      pfVar1[2] = auVar46._8_4_ * fVar39;
      pfVar1[3] = auVar46._12_4_ * fVar39;
      pfVar1[4] = auVar46._16_4_ * fVar39;
      pfVar1[5] = auVar46._20_4_ * fVar39;
      pfVar1[6] = auVar46._24_4_ * fVar39;
      pfVar1[7] = auVar46._28_4_ * fVar39;
      uVar17 = uVar17 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar17 < uVar13);
  }
  iVar16 = (int)uVar17;
  if ((int)param_3 <= iVar16) {
    return;
  }
LAB_140a1e1e9:
  auVar20._4_4_ = iVar16;
  auVar20._0_4_ = iVar16;
  auVar20._8_4_ = iVar16;
  auVar20._12_4_ = iVar16;
  auVar20._16_4_ = iVar16;
  auVar20._20_4_ = iVar16;
  auVar20._24_4_ = iVar16;
  auVar20._28_4_ = iVar16;
  auVar46 = vpor_avx2(auVar20,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar24._4_4_ = param_3;
  auVar24._0_4_ = param_3;
  auVar24._8_4_ = param_3;
  auVar24._12_4_ = param_3;
  auVar24._16_4_ = param_3;
  auVar24._20_4_ = param_3;
  auVar24._24_4_ = param_3;
  auVar24._28_4_ = param_3;
  auVar2 = vpcmpgtd_avx2(auVar24,auVar46);
  auVar46 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + (iVar16 << 2)));
  auVar30._4_4_ = fVar18;
  auVar30._0_4_ = fVar18;
  auVar30._8_4_ = fVar18;
  auVar30._12_4_ = fVar18;
  auVar30._16_4_ = fVar18;
  auVar30._20_4_ = fVar18;
  auVar30._24_4_ = fVar18;
  auVar30._28_4_ = fVar18;
  auVar46 = vmaxps_avx(auVar46,auVar30);
  auVar27 = vcmpps_avx(auVar46,ZEXT832(0) << 0x20,1);
  auVar29 = vcmpps_avx(auVar46,ZEXT832(0) << 0x20,2);
  auVar31._4_4_ = __real_3f800000;
  auVar31._0_4_ = __real_3f800000;
  auVar31._8_4_ = __real_3f800000;
  auVar31._12_4_ = __real_3f800000;
  auVar31._16_4_ = __real_3f800000;
  auVar31._20_4_ = __real_3f800000;
  auVar31._24_4_ = __real_3f800000;
  auVar31._28_4_ = __real_3f800000;
  auVar46 = vblendvps_avx(auVar46,auVar31,auVar29);
  auVar33 = vpsrad_avx2(auVar46,0x17);
  auVar4._0_4_ = auVar33._0_4_ + __real_ffffff82;
  auVar4._4_4_ = auVar33._4_4_ + __real_ffffff82;
  auVar4._8_4_ = auVar33._8_4_ + __real_ffffff82;
  auVar4._12_4_ = auVar33._12_4_ + __real_ffffff82;
  auVar4._16_4_ = auVar33._16_4_ + __real_ffffff82;
  auVar4._20_4_ = auVar33._20_4_ + __real_ffffff82;
  auVar4._24_4_ = auVar33._24_4_ + __real_ffffff82;
  auVar4._28_4_ = auVar33._28_4_ + __real_ffffff82;
  auVar34._0_4_ = auVar46._0_4_ & __real_807fffff;
  auVar34._4_4_ = auVar46._4_4_ & __real_807fffff;
  auVar34._8_4_ = auVar46._8_4_ & __real_807fffff;
  auVar34._12_4_ = auVar46._12_4_ & __real_807fffff;
  auVar34._16_4_ = auVar46._16_4_ & __real_807fffff;
  auVar34._20_4_ = auVar46._20_4_ & __real_807fffff;
  auVar34._24_4_ = auVar46._24_4_ & __real_807fffff;
  auVar34._28_4_ = auVar46._28_4_ & __real_807fffff;
  auVar37._4_4_ = __real_3f000000;
  auVar37._0_4_ = __real_3f000000;
  auVar37._8_4_ = __real_3f000000;
  auVar37._12_4_ = __real_3f000000;
  auVar37._16_4_ = __real_3f000000;
  auVar37._20_4_ = __real_3f000000;
  auVar37._24_4_ = __real_3f000000;
  auVar37._28_4_ = __real_3f000000;
  auVar46 = vsubps_avx(auVar31,auVar34 | auVar37);
  auVar35._4_4_ = __real_7fc00000;
  auVar35._0_4_ = __real_7fc00000;
  auVar35._8_4_ = __real_7fc00000;
  auVar35._12_4_ = __real_7fc00000;
  auVar35._16_4_ = __real_7fc00000;
  auVar35._20_4_ = __real_7fc00000;
  auVar35._24_4_ = __real_7fc00000;
  auVar35._28_4_ = __real_7fc00000;
  auVar46 = vblendvps_avx(auVar35,auVar46,auVar2);
  fVar36 = auVar46._0_4_;
  fVar39 = auVar46._4_4_;
  fVar40 = auVar46._8_4_;
  fVar41 = auVar46._12_4_;
  fVar42 = auVar46._16_4_;
  fVar43 = auVar46._20_4_;
  fVar44 = auVar46._24_4_;
  fVar45 = auVar46._28_4_;
  auVar46 = vcvtdq2ps_avx(auVar4);
  auVar38._0_4_ =
       auVar46._0_4_ * __real_3f317218 -
       fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (
                                                  fVar36 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._4_4_ =
       auVar46._4_4_ * __real_3f317218 -
       fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (
                                                  fVar39 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._8_4_ =
       auVar46._8_4_ * __real_3f317218 -
       fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (
                                                  fVar40 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._12_4_ =
       auVar46._12_4_ * __real_3f317218 -
       fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (
                                                  fVar41 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._16_4_ =
       auVar46._16_4_ * __real_3f317218 -
       fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (
                                                  fVar42 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._20_4_ =
       auVar46._20_4_ * __real_3f317218 -
       fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (
                                                  fVar43 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._24_4_ =
       auVar46._24_4_ * __real_3f317218 -
       fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (
                                                  fVar44 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._28_4_ =
       auVar46._28_4_ * __real_3f317218 -
       fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (
                                                  fVar45 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar32._4_4_ = __real_ff800000;
  auVar32._0_4_ = __real_ff800000;
  auVar32._8_4_ = __real_ff800000;
  auVar32._12_4_ = __real_ff800000;
  auVar32._16_4_ = __real_ff800000;
  auVar32._20_4_ = __real_ff800000;
  auVar32._24_4_ = __real_ff800000;
  auVar32._28_4_ = __real_ff800000;
  auVar46 = vblendvps_avx(auVar32,auVar35,auVar27);
  auVar46 = vblendvps_avx(auVar38,auVar46,auVar29);
  auVar25._0_4_ = auVar46._0_4_ * __real_410af967;
  auVar25._4_4_ = auVar46._4_4_ * __real_410af967;
  auVar25._8_4_ = auVar46._8_4_ * __real_410af967;
  auVar25._12_4_ = auVar46._12_4_ * __real_410af967;
  auVar25._16_4_ = auVar46._16_4_ * __real_410af967;
  auVar25._20_4_ = auVar46._20_4_ * __real_410af967;
  auVar25._24_4_ = auVar46._24_4_ * __real_410af967;
  auVar25._28_4_ = auVar46._28_4_ * __real_410af967;
  auVar46 = vmaskmovps_avx(auVar2,auVar25);
  *(undefined1 (*) [32])(param_1 + (iVar16 << 2)) = auVar46;
  return;
}

// ArrayPowerToDecibelInPlace___un_3C_unf_3E_CunfCuni_avx2 @ 140a1e3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPowerToDecibelInPlace___un_3C_unf_3E_CunfCuni_avx2
               (longlong param_1,float param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [32];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  float fVar36;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar37 [32];
  float fVar45;
  undefined1 auVar38 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar48 [32];
  float fVar57;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  
  fVar12 = __real_408af967;
  fVar11 = __real_3f317218;
  fVar10 = __real_3f000010;
  fVar9 = __real_3eaaa11c;
  fVar45 = __real_3e80fb87;
  fVar44 = __real_3e33a0af;
  fVar43 = __real_3eaf548d;
  fVar42 = __real_bf198181;
  fVar41 = __real_3ffe0193;
  fVar40 = __real_c01f5af7;
  fVar39 = __real_3fdfe28e;
  uVar8 = __real_807fffff;
  iVar16 = __real_ffffff82;
  uVar7 = __real_3f000000;
  fVar36 = __real_3f800000;
  auVar46 = in_ZMM2._0_32_;
  uVar13 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar13 = param_3;
  }
  fVar18 = (param_2 * __real_40135d8e) / __real_41200000;
  auVar22 = ZEXT416((uint)(fVar18 * __real_3fb8aa3b));
  auVar22 = vroundss_avx(auVar22,auVar22,9);
  fVar21 = auVar22._0_4_;
  iVar14 = (int)fVar21;
  fVar19 = __real_7f800000;
  if (iVar14 < 0x80) {
    fVar19 = fVar21 * __real_b5bfbe8e + fVar21 * __real_bf317200 + fVar18;
    auVar46 = ZEXT432((uint)__real_3f800000);
    fVar19 = (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * __real_39907835 +
                                                                         __real_3aaaf7b5) +
                                                               __real_3c09475d) + __real_3d2a9d49) +
                                           __real_3e2aab20) + __real_3efffffd) + __real_3f800000) +
             __real_3f800000) * (float)(iVar14 * 0x800000 + 0x3f800000);
  }
  auVar46 = vpcmpeqd_avx2(auVar46,auVar46);
  fVar18 = 0.0;
  if (-0x7f < iVar14) {
    fVar18 = fVar19;
  }
  uVar13 = uVar13 & 0xfffffff8;
  auVar46 = auVar46 & ~*param_4;
  if ((((((((SUB321(auVar46 >> 0x1f,0) & 1) == 0 && (SUB321(auVar46 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar46 >> 0x5f,0) & 1) == 0) && SUB321(auVar46 >> 0x7f,0) == '\0') &&
        (SUB321(auVar46 >> 0x9f,0) & 1) == 0) && SUB321(auVar46 >> 0xbf,0) == '\0') &&
      (SUB321(auVar46 >> 0xdf,0) & 1) == 0) && -1 < auVar46[0x1f]) {
    if ((int)uVar13 < 1) goto LAB_140a1ea1c;
    uVar15 = 0;
    auVar29._4_4_ = __real_3f800000;
    auVar29._0_4_ = __real_3f800000;
    auVar29._8_4_ = __real_3f800000;
    auVar29._12_4_ = __real_3f800000;
    auVar29._16_4_ = __real_3f800000;
    auVar29._20_4_ = __real_3f800000;
    auVar29._24_4_ = __real_3f800000;
    auVar29._28_4_ = __real_3f800000;
    uVar17 = 0;
    auVar46._4_4_ = __real_7fc00000;
    auVar46._0_4_ = __real_7fc00000;
    auVar46._8_4_ = __real_7fc00000;
    auVar46._12_4_ = __real_7fc00000;
    auVar46._16_4_ = __real_7fc00000;
    auVar46._20_4_ = __real_7fc00000;
    auVar46._24_4_ = __real_7fc00000;
    auVar46._28_4_ = __real_7fc00000;
    auVar27._4_4_ = __real_ff800000;
    auVar27._0_4_ = __real_ff800000;
    auVar27._8_4_ = __real_ff800000;
    auVar27._12_4_ = __real_ff800000;
    auVar27._16_4_ = __real_ff800000;
    auVar27._20_4_ = __real_ff800000;
    auVar27._24_4_ = __real_ff800000;
    auVar27._28_4_ = __real_ff800000;
    do {
      auVar33._4_4_ = fVar18;
      auVar33._0_4_ = fVar18;
      auVar33._8_4_ = fVar18;
      auVar33._12_4_ = fVar18;
      auVar33._16_4_ = fVar18;
      auVar33._20_4_ = fVar18;
      auVar33._24_4_ = fVar18;
      auVar33._28_4_ = fVar18;
      auVar23 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15),auVar33);
      auVar33 = vcmpps_avx(auVar23,ZEXT832(0),2);
      auVar2 = vblendvps_avx(auVar23,auVar29,auVar33);
      auVar50._0_4_ = auVar2._0_4_ & uVar8;
      auVar50._4_4_ = auVar2._4_4_ & uVar8;
      auVar50._8_4_ = auVar2._8_4_ & uVar8;
      auVar50._12_4_ = auVar2._12_4_ & uVar8;
      auVar50._16_4_ = auVar2._16_4_ & uVar8;
      auVar50._20_4_ = auVar2._20_4_ & uVar8;
      auVar50._24_4_ = auVar2._24_4_ & uVar8;
      auVar50._28_4_ = auVar2._28_4_ & uVar8;
      auVar47._4_4_ = uVar7;
      auVar47._0_4_ = uVar7;
      auVar47._8_4_ = uVar7;
      auVar47._12_4_ = uVar7;
      auVar47._16_4_ = uVar7;
      auVar47._20_4_ = uVar7;
      auVar47._24_4_ = uVar7;
      auVar47._28_4_ = uVar7;
      auVar47 = vsubps_avx(auVar29,auVar50 | auVar47);
      fVar19 = auVar47._0_4_;
      fVar21 = auVar47._4_4_;
      fVar52 = auVar47._8_4_;
      fVar53 = auVar47._12_4_;
      fVar54 = auVar47._16_4_;
      fVar55 = auVar47._20_4_;
      fVar56 = auVar47._24_4_;
      fVar57 = auVar47._28_4_;
      auVar47 = vpsrad_avx2(auVar2,0x17);
      auVar2._0_4_ = auVar47._0_4_ + iVar16;
      auVar2._4_4_ = auVar47._4_4_ + iVar16;
      auVar2._8_4_ = auVar47._8_4_ + iVar16;
      auVar2._12_4_ = auVar47._12_4_ + iVar16;
      auVar2._16_4_ = auVar47._16_4_ + iVar16;
      auVar2._20_4_ = auVar47._20_4_ + iVar16;
      auVar2._24_4_ = auVar47._24_4_ + iVar16;
      auVar2._28_4_ = auVar47._28_4_ + iVar16;
      auVar2 = vcvtdq2ps_avx(auVar2);
      auVar51._0_4_ =
           fVar11 * auVar2._0_4_ -
           fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 
                                                  (fVar19 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar51._4_4_ =
           fVar11 * auVar2._4_4_ -
           fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * 
                                                  (fVar21 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar51._8_4_ =
           fVar11 * auVar2._8_4_ -
           fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * 
                                                  (fVar52 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar51._12_4_ =
           fVar11 * auVar2._12_4_ -
           fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * 
                                                  (fVar53 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar51._16_4_ =
           fVar11 * auVar2._16_4_ -
           fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * 
                                                  (fVar54 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar51._20_4_ =
           fVar11 * auVar2._20_4_ -
           fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * 
                                                  (fVar55 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar51._24_4_ =
           fVar11 * auVar2._24_4_ -
           fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * 
                                                  (fVar56 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar51._28_4_ =
           fVar11 * auVar2._28_4_ -
           fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * 
                                                  (fVar57 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar2 = vcmpps_avx(auVar23,ZEXT832(0),1);
      auVar2 = vblendvps_avx(auVar27,auVar46,auVar2);
      auVar2 = vblendvps_avx(auVar51,auVar2,auVar33);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar15);
      *pfVar1 = auVar2._0_4_ * fVar12;
      pfVar1[1] = auVar2._4_4_ * fVar12;
      pfVar1[2] = auVar2._8_4_ * fVar12;
      pfVar1[3] = auVar2._12_4_ * fVar12;
      pfVar1[4] = auVar2._16_4_ * fVar12;
      pfVar1[5] = auVar2._20_4_ * fVar12;
      pfVar1[6] = auVar2._24_4_ * fVar12;
      pfVar1[7] = auVar2._28_4_ * fVar12;
      uVar17 = uVar17 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar17 < uVar13);
  }
  else {
    if ((int)uVar13 < 1) {
LAB_140a1ea1c:
      iVar16 = 0;
      if ((int)param_3 < 1) {
        return;
      }
      goto LAB_140a1e869;
    }
    uVar15 = 0;
    auVar28._4_4_ = __real_3f800000;
    auVar28._0_4_ = __real_3f800000;
    auVar28._8_4_ = __real_3f800000;
    auVar28._12_4_ = __real_3f800000;
    auVar28._16_4_ = __real_3f800000;
    auVar28._20_4_ = __real_3f800000;
    auVar28._24_4_ = __real_3f800000;
    auVar28._28_4_ = __real_3f800000;
    uVar17 = 0;
    auVar23._4_4_ = __real_7fc00000;
    auVar23._0_4_ = __real_7fc00000;
    auVar23._8_4_ = __real_7fc00000;
    auVar23._12_4_ = __real_7fc00000;
    auVar23._16_4_ = __real_7fc00000;
    auVar23._20_4_ = __real_7fc00000;
    auVar23._24_4_ = __real_7fc00000;
    auVar23._28_4_ = __real_7fc00000;
    auVar26._4_4_ = __real_ff800000;
    auVar26._0_4_ = __real_ff800000;
    auVar26._8_4_ = __real_ff800000;
    auVar26._12_4_ = __real_ff800000;
    auVar26._16_4_ = __real_ff800000;
    auVar26._20_4_ = __real_ff800000;
    auVar26._24_4_ = __real_ff800000;
    auVar26._28_4_ = __real_ff800000;
    do {
      auVar6._4_4_ = fVar18;
      auVar6._0_4_ = fVar18;
      auVar6._8_4_ = fVar18;
      auVar6._12_4_ = fVar18;
      auVar6._16_4_ = fVar18;
      auVar6._20_4_ = fVar18;
      auVar6._24_4_ = fVar18;
      auVar6._28_4_ = fVar18;
      auVar29 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar15),auVar6);
      auVar27 = vcmpps_avx(auVar29,ZEXT832(0),2);
      auVar46 = vblendvps_avx(auVar29,auVar28,auVar27);
      auVar48._0_4_ = auVar46._0_4_ & uVar8;
      auVar48._4_4_ = auVar46._4_4_ & uVar8;
      auVar48._8_4_ = auVar46._8_4_ & uVar8;
      auVar48._12_4_ = auVar46._12_4_ & uVar8;
      auVar48._16_4_ = auVar46._16_4_ & uVar8;
      auVar48._20_4_ = auVar46._20_4_ & uVar8;
      auVar48._24_4_ = auVar46._24_4_ & uVar8;
      auVar48._28_4_ = auVar46._28_4_ & uVar8;
      auVar5._4_4_ = uVar7;
      auVar5._0_4_ = uVar7;
      auVar5._8_4_ = uVar7;
      auVar5._12_4_ = uVar7;
      auVar5._16_4_ = uVar7;
      auVar5._20_4_ = uVar7;
      auVar5._24_4_ = uVar7;
      auVar5._28_4_ = uVar7;
      auVar2 = vsubps_avx(auVar28,auVar48 | auVar5);
      fVar19 = auVar2._0_4_;
      fVar21 = auVar2._4_4_;
      fVar52 = auVar2._8_4_;
      fVar53 = auVar2._12_4_;
      fVar54 = auVar2._16_4_;
      fVar55 = auVar2._20_4_;
      fVar56 = auVar2._24_4_;
      fVar57 = auVar2._28_4_;
      auVar46 = vpsrad_avx2(auVar46,0x17);
      auVar3._0_4_ = auVar46._0_4_ + iVar16;
      auVar3._4_4_ = auVar46._4_4_ + iVar16;
      auVar3._8_4_ = auVar46._8_4_ + iVar16;
      auVar3._12_4_ = auVar46._12_4_ + iVar16;
      auVar3._16_4_ = auVar46._16_4_ + iVar16;
      auVar3._20_4_ = auVar46._20_4_ + iVar16;
      auVar3._24_4_ = auVar46._24_4_ + iVar16;
      auVar3._28_4_ = auVar46._28_4_ + iVar16;
      auVar46 = vcvtdq2ps_avx(auVar3);
      auVar49._0_4_ =
           fVar11 * auVar46._0_4_ -
           fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 
                                                  (fVar19 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar49._4_4_ =
           fVar11 * auVar46._4_4_ -
           fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * (fVar21 * 
                                                  (fVar21 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar49._8_4_ =
           fVar11 * auVar46._8_4_ -
           fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * (fVar52 * 
                                                  (fVar52 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar49._12_4_ =
           fVar11 * auVar46._12_4_ -
           fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * (fVar53 * 
                                                  (fVar53 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar49._16_4_ =
           fVar11 * auVar46._16_4_ -
           fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * (fVar54 * 
                                                  (fVar54 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar49._20_4_ =
           fVar11 * auVar46._20_4_ -
           fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * (fVar55 * 
                                                  (fVar55 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar49._24_4_ =
           fVar11 * auVar46._24_4_ -
           fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * (fVar56 * 
                                                  (fVar56 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar49._28_4_ =
           fVar11 * auVar46._28_4_ -
           fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * (fVar57 * 
                                                  (fVar57 * fVar39 + fVar40) + fVar41) + fVar42) +
                                                  fVar43) + fVar44) + fVar45) + fVar9) + fVar10) +
                    fVar36);
      auVar46 = vcmpps_avx(auVar29,ZEXT832(0),1);
      auVar46 = vblendvps_avx(auVar26,auVar23,auVar46);
      auVar46 = vblendvps_avx(auVar49,auVar46,auVar27);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar15);
      *pfVar1 = auVar46._0_4_ * fVar12;
      pfVar1[1] = auVar46._4_4_ * fVar12;
      pfVar1[2] = auVar46._8_4_ * fVar12;
      pfVar1[3] = auVar46._12_4_ * fVar12;
      pfVar1[4] = auVar46._16_4_ * fVar12;
      pfVar1[5] = auVar46._20_4_ * fVar12;
      pfVar1[6] = auVar46._24_4_ * fVar12;
      pfVar1[7] = auVar46._28_4_ * fVar12;
      uVar17 = uVar17 + 8;
      uVar15 = uVar15 + 0x20;
    } while (uVar17 < uVar13);
  }
  iVar16 = (int)uVar17;
  if ((int)param_3 <= iVar16) {
    return;
  }
LAB_140a1e869:
  auVar20._4_4_ = iVar16;
  auVar20._0_4_ = iVar16;
  auVar20._8_4_ = iVar16;
  auVar20._12_4_ = iVar16;
  auVar20._16_4_ = iVar16;
  auVar20._20_4_ = iVar16;
  auVar20._24_4_ = iVar16;
  auVar20._28_4_ = iVar16;
  auVar46 = vpor_avx2(auVar20,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar24._4_4_ = param_3;
  auVar24._0_4_ = param_3;
  auVar24._8_4_ = param_3;
  auVar24._12_4_ = param_3;
  auVar24._16_4_ = param_3;
  auVar24._20_4_ = param_3;
  auVar24._24_4_ = param_3;
  auVar24._28_4_ = param_3;
  auVar2 = vpcmpgtd_avx2(auVar24,auVar46);
  auVar46 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + (iVar16 << 2)));
  auVar30._4_4_ = fVar18;
  auVar30._0_4_ = fVar18;
  auVar30._8_4_ = fVar18;
  auVar30._12_4_ = fVar18;
  auVar30._16_4_ = fVar18;
  auVar30._20_4_ = fVar18;
  auVar30._24_4_ = fVar18;
  auVar30._28_4_ = fVar18;
  auVar46 = vmaxps_avx(auVar46,auVar30);
  auVar27 = vcmpps_avx(auVar46,ZEXT832(0) << 0x20,1);
  auVar29 = vcmpps_avx(auVar46,ZEXT832(0) << 0x20,2);
  auVar31._4_4_ = __real_3f800000;
  auVar31._0_4_ = __real_3f800000;
  auVar31._8_4_ = __real_3f800000;
  auVar31._12_4_ = __real_3f800000;
  auVar31._16_4_ = __real_3f800000;
  auVar31._20_4_ = __real_3f800000;
  auVar31._24_4_ = __real_3f800000;
  auVar31._28_4_ = __real_3f800000;
  auVar46 = vblendvps_avx(auVar46,auVar31,auVar29);
  auVar33 = vpsrad_avx2(auVar46,0x17);
  auVar4._0_4_ = auVar33._0_4_ + __real_ffffff82;
  auVar4._4_4_ = auVar33._4_4_ + __real_ffffff82;
  auVar4._8_4_ = auVar33._8_4_ + __real_ffffff82;
  auVar4._12_4_ = auVar33._12_4_ + __real_ffffff82;
  auVar4._16_4_ = auVar33._16_4_ + __real_ffffff82;
  auVar4._20_4_ = auVar33._20_4_ + __real_ffffff82;
  auVar4._24_4_ = auVar33._24_4_ + __real_ffffff82;
  auVar4._28_4_ = auVar33._28_4_ + __real_ffffff82;
  auVar34._0_4_ = auVar46._0_4_ & __real_807fffff;
  auVar34._4_4_ = auVar46._4_4_ & __real_807fffff;
  auVar34._8_4_ = auVar46._8_4_ & __real_807fffff;
  auVar34._12_4_ = auVar46._12_4_ & __real_807fffff;
  auVar34._16_4_ = auVar46._16_4_ & __real_807fffff;
  auVar34._20_4_ = auVar46._20_4_ & __real_807fffff;
  auVar34._24_4_ = auVar46._24_4_ & __real_807fffff;
  auVar34._28_4_ = auVar46._28_4_ & __real_807fffff;
  auVar37._4_4_ = __real_3f000000;
  auVar37._0_4_ = __real_3f000000;
  auVar37._8_4_ = __real_3f000000;
  auVar37._12_4_ = __real_3f000000;
  auVar37._16_4_ = __real_3f000000;
  auVar37._20_4_ = __real_3f000000;
  auVar37._24_4_ = __real_3f000000;
  auVar37._28_4_ = __real_3f000000;
  auVar46 = vsubps_avx(auVar31,auVar34 | auVar37);
  auVar35._4_4_ = __real_7fc00000;
  auVar35._0_4_ = __real_7fc00000;
  auVar35._8_4_ = __real_7fc00000;
  auVar35._12_4_ = __real_7fc00000;
  auVar35._16_4_ = __real_7fc00000;
  auVar35._20_4_ = __real_7fc00000;
  auVar35._24_4_ = __real_7fc00000;
  auVar35._28_4_ = __real_7fc00000;
  auVar46 = vblendvps_avx(auVar35,auVar46,auVar2);
  fVar36 = auVar46._0_4_;
  fVar39 = auVar46._4_4_;
  fVar40 = auVar46._8_4_;
  fVar41 = auVar46._12_4_;
  fVar42 = auVar46._16_4_;
  fVar43 = auVar46._20_4_;
  fVar44 = auVar46._24_4_;
  fVar45 = auVar46._28_4_;
  auVar46 = vcvtdq2ps_avx(auVar4);
  auVar38._0_4_ =
       auVar46._0_4_ * __real_3f317218 -
       fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (
                                                  fVar36 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._4_4_ =
       auVar46._4_4_ * __real_3f317218 -
       fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (
                                                  fVar39 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._8_4_ =
       auVar46._8_4_ * __real_3f317218 -
       fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (
                                                  fVar40 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._12_4_ =
       auVar46._12_4_ * __real_3f317218 -
       fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (
                                                  fVar41 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._16_4_ =
       auVar46._16_4_ * __real_3f317218 -
       fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (fVar42 * (
                                                  fVar42 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._20_4_ =
       auVar46._20_4_ * __real_3f317218 -
       fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (
                                                  fVar43 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._24_4_ =
       auVar46._24_4_ * __real_3f317218 -
       fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (
                                                  fVar44 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar38._28_4_ =
       auVar46._28_4_ * __real_3f317218 -
       fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (
                                                  fVar45 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar32._4_4_ = __real_ff800000;
  auVar32._0_4_ = __real_ff800000;
  auVar32._8_4_ = __real_ff800000;
  auVar32._12_4_ = __real_ff800000;
  auVar32._16_4_ = __real_ff800000;
  auVar32._20_4_ = __real_ff800000;
  auVar32._24_4_ = __real_ff800000;
  auVar32._28_4_ = __real_ff800000;
  auVar46 = vblendvps_avx(auVar32,auVar35,auVar27);
  auVar46 = vblendvps_avx(auVar38,auVar46,auVar29);
  auVar25._0_4_ = auVar46._0_4_ * __real_408af967;
  auVar25._4_4_ = auVar46._4_4_ * __real_408af967;
  auVar25._8_4_ = auVar46._8_4_ * __real_408af967;
  auVar25._12_4_ = auVar46._12_4_ * __real_408af967;
  auVar25._16_4_ = auVar46._16_4_ * __real_408af967;
  auVar25._20_4_ = auVar46._20_4_ * __real_408af967;
  auVar25._24_4_ = auVar46._24_4_ * __real_408af967;
  auVar25._28_4_ = auVar46._28_4_ * __real_408af967;
  auVar46 = vmaskmovps_avx(auVar2,auVar25);
  *(undefined1 (*) [32])(param_1 + (iVar16 << 2)) = auVar46;
  return;
}

// ArrayComplexToPowerInterleaved___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1ea30

void ArrayComplexToPowerInterleaved___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 in_ZMM1 [64];
  
  auVar6 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  uVar9 = param_3 & 0xfffffff8;
  auVar6 = auVar6 & ~*param_4;
  if ((((((((SUB321(auVar6 >> 0x1f,0) & 1) == 0 && (SUB321(auVar6 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar6 >> 0x5f,0) & 1) == 0) && SUB321(auVar6 >> 0x7f,0) == '\0') &&
        (SUB321(auVar6 >> 0x9f,0) & 1) == 0) && SUB321(auVar6 >> 0xbf,0) == '\0') &&
      (SUB321(auVar6 >> 0xdf,0) & 1) == 0) && -1 < auVar6[0x1f]) {
    if (0 < (int)uVar9) {
      uVar13 = 0;
      uVar14 = 0;
      do {
        auVar6 = *(undefined1 (*) [32])(param_1 + uVar13 * 2);
        auVar4 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar13 * 2);
        auVar5 = vshufps_avx(auVar6,auVar4,0x88);
        auVar5 = vpermpd_avx2(auVar5,0xd8);
        auVar6 = vshufps_avx(auVar6,auVar4,0xdd);
        auVar6 = vpermpd_avx2(auVar6,0xd8);
        pfVar1 = (float *)(param_2 + (uVar13 & 0xffffffff));
        *pfVar1 = auVar5._0_4_ * auVar5._0_4_ + auVar6._0_4_ * auVar6._0_4_;
        pfVar1[1] = auVar5._4_4_ * auVar5._4_4_ + auVar6._4_4_ * auVar6._4_4_;
        pfVar1[2] = auVar5._8_4_ * auVar5._8_4_ + auVar6._8_4_ * auVar6._8_4_;
        pfVar1[3] = auVar5._12_4_ * auVar5._12_4_ + auVar6._12_4_ * auVar6._12_4_;
        pfVar1[4] = auVar5._16_4_ * auVar5._16_4_ + auVar6._16_4_ * auVar6._16_4_;
        pfVar1[5] = auVar5._20_4_ * auVar5._20_4_ + auVar6._20_4_ * auVar6._20_4_;
        pfVar1[6] = auVar5._24_4_ * auVar5._24_4_ + auVar6._24_4_ * auVar6._24_4_;
        pfVar1[7] = auVar5._28_4_ * auVar5._28_4_ + auVar6._28_4_ * auVar6._28_4_;
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
        iVar8 = (int)lVar10 * 2;
        lVar10 = 0;
        do {
          iVar7 = (int)lVar10;
          fVar2 = *(float *)(param_1 + (longlong)(iVar8 + iVar7) * 4);
          fVar3 = *(float *)(param_1 + (longlong)(iVar8 + iVar7 + 1) * 4);
          *(float *)(param_2 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
          fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 2 + iVar7) * 4);
          fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 3 + iVar7) * 4);
          *(float *)(param_2 + 4 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
          fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 4 + iVar7) * 4);
          fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 5 + iVar7) * 4);
          *(float *)(param_2 + 8 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
          fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 6 + iVar7) * 4);
          fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 7 + iVar7) * 4);
          *(float *)(param_2 + 0xc + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
          lVar10 = lVar10 + 8;
          lVar12 = lVar12 + -4;
        } while (lVar12 != 0);
      }
    }
  }
  else {
    if (0 < (int)uVar9) {
      uVar13 = 0;
      uVar14 = 0;
      do {
        auVar6 = *(undefined1 (*) [32])(param_1 + uVar13 * 2);
        auVar4 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar13 * 2);
        auVar5 = vshufps_avx(auVar6,auVar4,0x88);
        auVar5 = vpermpd_avx2(auVar5,0xd8);
        auVar6 = vshufps_avx(auVar6,auVar4,0xdd);
        auVar6 = vpermpd_avx2(auVar6,0xd8);
        pfVar1 = (float *)(param_2 + (uVar13 & 0xffffffff));
        *pfVar1 = auVar5._0_4_ * auVar5._0_4_ + auVar6._0_4_ * auVar6._0_4_;
        pfVar1[1] = auVar5._4_4_ * auVar5._4_4_ + auVar6._4_4_ * auVar6._4_4_;
        pfVar1[2] = auVar5._8_4_ * auVar5._8_4_ + auVar6._8_4_ * auVar6._8_4_;
        pfVar1[3] = auVar5._12_4_ * auVar5._12_4_ + auVar6._12_4_ * auVar6._12_4_;
        pfVar1[4] = auVar5._16_4_ * auVar5._16_4_ + auVar6._16_4_ * auVar6._16_4_;
        pfVar1[5] = auVar5._20_4_ * auVar5._20_4_ + auVar6._20_4_ * auVar6._20_4_;
        pfVar1[6] = auVar5._24_4_ * auVar5._24_4_ + auVar6._24_4_ * auVar6._24_4_;
        pfVar1[7] = auVar5._28_4_ * auVar5._28_4_ + auVar6._28_4_ * auVar6._28_4_;
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
        iVar8 = (int)lVar10 * 2;
        lVar10 = 0;
        do {
          iVar7 = (int)lVar10;
          fVar2 = *(float *)(param_1 + (longlong)(iVar8 + iVar7) * 4);
          fVar3 = *(float *)(param_1 + (longlong)(iVar8 + iVar7 + 1) * 4);
          *(float *)(param_2 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
          fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 2 + iVar7) * 4);
          fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 3 + iVar7) * 4);
          *(float *)(param_2 + 4 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
          fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 4 + iVar7) * 4);
          fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 5 + iVar7) * 4);
          *(float *)(param_2 + 8 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
          fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 6 + iVar7) * 4);
          fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 7 + iVar7) * 4);
          *(float *)(param_2 + 0xc + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
          lVar10 = lVar10 + 8;
          lVar12 = lVar12 + -4;
        } while (lVar12 != 0);
      }
    }
  }
  return;
}

// ArrayComplexToPower___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1eda0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPower___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar21 = 0;
    do {
      uVar23 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar23);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar23);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar23);
      *pfVar3 = *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2;
      pfVar3[1] = fVar5 * fVar5 + fVar12 * fVar12;
      pfVar3[2] = fVar6 * fVar6 + fVar13 * fVar13;
      pfVar3[3] = fVar7 * fVar7 + fVar14 * fVar14;
      pfVar3[4] = fVar8 * fVar8 + fVar15 * fVar15;
      pfVar3[5] = fVar9 * fVar9 + fVar16 * fVar16;
      pfVar3[6] = fVar10 * fVar10 + fVar17 * fVar17;
      pfVar3[7] = fVar11 * fVar11 + fVar18 * fVar18;
      uVar21 = uVar21 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_4;
  auVar26._0_4_ = param_4;
  auVar26._8_4_ = param_4;
  auVar26._12_4_ = param_4;
  auVar26._16_4_ = param_4;
  auVar26._20_4_ = param_4;
  auVar26._24_4_ = param_4;
  auVar26._28_4_ = param_4;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ * auVar25._0_4_ + auVar26._0_4_ * auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * auVar25._4_4_ + auVar26._4_4_ * auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * auVar25._8_4_ + auVar26._8_4_ * auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * auVar25._12_4_ + auVar26._12_4_ * auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * auVar25._16_4_ + auVar26._16_4_ * auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * auVar25._20_4_ + auVar26._20_4_ * auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * auVar25._24_4_ + auVar26._24_4_ * auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * auVar25._28_4_ + auVar26._28_4_ * auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_3 + lVar22) = auVar25;
  return;
}

// ArrayWeightedSumTwoGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_Cunfun_3C_unf_3E_Cuni_avx2 @ 140a1f040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumTwoGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_Cunfun_3C_unf_3E_Cuni_avx2
               (longlong param_1,float param_2,longlong param_3,float param_4,longlong param_5,
               uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar21 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar21 = param_6;
  }
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar23 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar23 = 0;
    do {
      uVar20 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_3 + uVar20);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_1 + uVar20);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_5 + uVar20);
      *pfVar3 = param_2 * *pfVar2 + param_4 * *pfVar1;
      pfVar3[1] = param_2 * fVar4 + param_4 * fVar12;
      pfVar3[2] = param_2 * fVar5 + param_4 * fVar13;
      pfVar3[3] = param_2 * fVar6 + param_4 * fVar14;
      pfVar3[4] = param_2 * fVar7 + param_4 * fVar15;
      pfVar3[5] = param_2 * fVar8 + param_4 * fVar16;
      pfVar3[6] = param_2 * fVar9 + param_4 * fVar17;
      pfVar3[7] = param_2 * fVar10 + param_4 * fVar18;
      uVar23 = uVar23 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar23 < (uVar21 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar23) {
      return;
    }
  }
  iVar22 = (int)uVar23;
  auVar25._4_4_ = iVar22;
  auVar25._0_4_ = iVar22;
  auVar25._8_4_ = iVar22;
  auVar25._12_4_ = iVar22;
  auVar25._16_4_ = iVar22;
  auVar25._20_4_ = iVar22;
  auVar25._24_4_ = iVar22;
  auVar25._28_4_ = iVar22;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_6;
  auVar26._0_4_ = param_6;
  auVar26._8_4_ = param_6;
  auVar26._12_4_ = param_6;
  auVar26._16_4_ = param_6;
  auVar26._20_4_ = param_6;
  auVar26._24_4_ = param_6;
  auVar26._28_4_ = param_6;
  auVar11 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar19 = (longlong)(iVar22 << 2);
  auVar25 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar19));
  auVar26 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_3 + lVar19));
  auVar27._0_4_ = auVar25._0_4_ * param_2 + param_4 * auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * param_2 + param_4 * auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * param_2 + param_4 * auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * param_2 + param_4 * auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * param_2 + param_4 * auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * param_2 + param_4 * auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * param_2 + param_4 * auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * param_2 + param_4 * auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar11,auVar27);
  *(undefined1 (*) [32])(param_5 + lVar19) = auVar25;
  return;
}

// ArrayWeightedSumOneGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2 @ 140a1f110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumOneGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx2
               (longlong param_1,float param_2,longlong param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar20 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar20 = param_5;
  }
  if ((int)(uVar20 & 0xfffffff8) < 1) {
    uVar22 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    do {
      uVar23 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar23);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_3 + uVar23);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_4 + uVar23);
      *pfVar3 = param_2 * *pfVar1 + *pfVar2;
      pfVar3[1] = param_2 * fVar12 + fVar4;
      pfVar3[2] = param_2 * fVar13 + fVar5;
      pfVar3[3] = param_2 * fVar14 + fVar6;
      pfVar3[4] = param_2 * fVar15 + fVar7;
      pfVar3[5] = param_2 * fVar16 + fVar8;
      pfVar3[6] = param_2 * fVar17 + fVar9;
      pfVar3[7] = param_2 * fVar18 + fVar10;
      uVar22 = uVar22 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar22 < (uVar20 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar22) {
      return;
    }
  }
  iVar21 = (int)uVar22;
  auVar25._4_4_ = iVar21;
  auVar25._0_4_ = iVar21;
  auVar25._8_4_ = iVar21;
  auVar25._12_4_ = iVar21;
  auVar25._16_4_ = iVar21;
  auVar25._20_4_ = iVar21;
  auVar25._24_4_ = iVar21;
  auVar25._28_4_ = iVar21;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_5;
  auVar26._0_4_ = param_5;
  auVar26._8_4_ = param_5;
  auVar26._12_4_ = param_5;
  auVar26._16_4_ = param_5;
  auVar26._20_4_ = param_5;
  auVar26._24_4_ = param_5;
  auVar26._28_4_ = param_5;
  auVar11 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar19 = (longlong)(iVar21 << 2);
  auVar25 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar19));
  auVar26 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_3 + lVar19));
  auVar27._0_4_ = auVar25._0_4_ * param_2 + auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * param_2 + auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * param_2 + auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * param_2 + auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * param_2 + auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * param_2 + auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * param_2 + auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * param_2 + auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar11,auVar27);
  *(undefined1 (*) [32])(param_4 + lVar19) = auVar25;
  return;
}

// ArrayMixInWithDelta___un_3C_Cunf_3E_un_3C_unf_3E_CuniCunfCunf_avx2 @ 140a1f4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithDelta___un_3C_Cunf_3E_un_3C_unf_3E_CuniCunfCunf_avx2
               (longlong param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  
  auVar27 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  fVar26 = (param_5 - param_4) / (float)(int)param_3;
  uVar19 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar19 = param_3;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar22 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    do {
      uVar20 = (undefined4)uVar22;
      auVar30._4_4_ = uVar20;
      auVar30._0_4_ = uVar20;
      auVar30._8_4_ = uVar20;
      auVar30._12_4_ = uVar20;
      auVar30._16_4_ = uVar20;
      auVar30._20_4_ = uVar20;
      auVar30._24_4_ = uVar20;
      auVar30._28_4_ = uVar20;
      auVar30 = vpor_avx2(auVar30,auVar27);
      auVar30 = vcvtdq2ps_avx(auVar30);
      uVar25 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar25);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar25);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar25);
      *pfVar3 = (fVar26 * auVar30._0_4_ + param_4) * *pfVar1 + *pfVar2;
      pfVar3[1] = (fVar26 * auVar30._4_4_ + param_4) * fVar12 + fVar4;
      pfVar3[2] = (fVar26 * auVar30._8_4_ + param_4) * fVar13 + fVar5;
      pfVar3[3] = (fVar26 * auVar30._12_4_ + param_4) * fVar14 + fVar6;
      pfVar3[4] = (fVar26 * auVar30._16_4_ + param_4) * fVar15 + fVar7;
      pfVar3[5] = (fVar26 * auVar30._20_4_ + param_4) * fVar16 + fVar8;
      pfVar3[6] = (fVar26 * auVar30._24_4_ + param_4) * fVar17 + fVar9;
      pfVar3[7] = (fVar26 * auVar30._28_4_ + param_4) * fVar18 + fVar10;
      uVar22 = uVar22 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar22 < (uVar19 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar22) {
      return;
    }
  }
  iVar21 = (int)uVar22;
  auVar27._4_4_ = iVar21;
  auVar27._0_4_ = iVar21;
  auVar27._8_4_ = iVar21;
  auVar27._12_4_ = iVar21;
  auVar27._16_4_ = iVar21;
  auVar27._20_4_ = iVar21;
  auVar27._24_4_ = iVar21;
  auVar27._28_4_ = iVar21;
  auVar27 = vpor_avx2(auVar27,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar29._4_4_ = param_3;
  auVar29._0_4_ = param_3;
  auVar29._8_4_ = param_3;
  auVar29._12_4_ = param_3;
  auVar29._16_4_ = param_3;
  auVar29._20_4_ = param_3;
  auVar29._24_4_ = param_3;
  auVar29._28_4_ = param_3;
  auVar11 = vpcmpgtd_avx2(auVar29,auVar27);
  auVar27 = vcvtdq2ps_avx(auVar27);
  lVar23 = (longlong)(iVar21 << 2);
  auVar30 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar23));
  auVar29 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_2 + lVar23));
  auVar28._0_4_ = (auVar27._0_4_ * fVar26 + param_4) * auVar30._0_4_ + auVar29._0_4_;
  auVar28._4_4_ = (auVar27._4_4_ * fVar26 + param_4) * auVar30._4_4_ + auVar29._4_4_;
  auVar28._8_4_ = (auVar27._8_4_ * fVar26 + param_4) * auVar30._8_4_ + auVar29._8_4_;
  auVar28._12_4_ = (auVar27._12_4_ * fVar26 + param_4) * auVar30._12_4_ + auVar29._12_4_;
  auVar28._16_4_ = (auVar27._16_4_ * fVar26 + param_4) * auVar30._16_4_ + auVar29._16_4_;
  auVar28._20_4_ = (auVar27._20_4_ * fVar26 + param_4) * auVar30._20_4_ + auVar29._20_4_;
  auVar28._24_4_ = (auVar27._24_4_ * fVar26 + param_4) * auVar30._24_4_ + auVar29._24_4_;
  auVar28._28_4_ = (auVar27._28_4_ * fVar26 + param_4) * auVar30._28_4_ + auVar29._28_4_;
  auVar27 = vmaskmovps_avx(auVar11,auVar28);
  *(undefined1 (*) [32])(param_2 + lVar23) = auVar27;
  return;
}

// TransformArrayRow___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_CuniCuni_avx2 @ 140a1f5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformArrayRow___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_CuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
               undefined1 (*param_6) [32])

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [64];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  
  uVar4 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar4 = param_5;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar8 = ZEXT1632(ZEXT816(0));
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar10 = *param_6;
    if ((int)param_5 < 1) goto LAB_140a1f640;
  }
  else {
    auVar9 = ZEXT864(0);
    uVar3 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar3);
      pfVar2 = (float *)(param_2 + (ulonglong)uVar3);
      auVar7._0_4_ = *pfVar1 * *pfVar2 + auVar9._0_4_;
      auVar7._4_4_ = pfVar1[1] * pfVar2[1] + auVar9._4_4_;
      auVar7._8_4_ = pfVar1[2] * pfVar2[2] + auVar9._8_4_;
      auVar7._12_4_ = pfVar1[3] * pfVar2[3] + auVar9._12_4_;
      auVar7._16_4_ = pfVar1[4] * pfVar2[4] + auVar9._16_4_;
      auVar7._20_4_ = pfVar1[5] * pfVar2[5] + auVar9._20_4_;
      auVar7._24_4_ = pfVar1[6] * pfVar2[6] + auVar9._24_4_;
      auVar7._28_4_ = pfVar1[7] * pfVar2[7] + auVar9._28_4_;
      auVar9 = ZEXT3264(auVar7);
      uVar6 = uVar6 + 8;
      uVar3 = uVar3 + 0x20;
    } while (uVar6 < (uVar4 & 0xfffffff8));
    auVar10 = *param_6;
    auVar8 = auVar7;
    if ((int)param_5 <= (int)uVar6) goto LAB_140a1f640;
  }
  iVar5 = (int)uVar6;
  auVar11._4_4_ = iVar5;
  auVar11._0_4_ = iVar5;
  auVar11._8_4_ = iVar5;
  auVar11._12_4_ = iVar5;
  auVar11._16_4_ = iVar5;
  auVar11._20_4_ = iVar5;
  auVar11._24_4_ = iVar5;
  auVar11._28_4_ = iVar5;
  auVar7 = vpor_avx2(auVar11,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar12._4_4_ = param_5;
  auVar12._0_4_ = param_5;
  auVar12._8_4_ = param_5;
  auVar12._12_4_ = param_5;
  auVar12._16_4_ = param_5;
  auVar12._20_4_ = param_5;
  auVar12._24_4_ = param_5;
  auVar12._28_4_ = param_5;
  auVar12 = vpcmpgtd_avx2(auVar12,auVar7);
  auVar7 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + (iVar5 << 2)));
  auVar11 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_2 + (iVar5 << 2)));
  auVar13._0_4_ = auVar7._0_4_ * auVar11._0_4_;
  auVar13._4_4_ = auVar7._4_4_ * auVar11._4_4_;
  auVar13._8_4_ = auVar7._8_4_ * auVar11._8_4_;
  auVar13._12_4_ = auVar7._12_4_ * auVar11._12_4_;
  auVar13._16_4_ = auVar7._16_4_ * auVar11._16_4_;
  auVar13._20_4_ = auVar7._20_4_ * auVar11._20_4_;
  auVar13._24_4_ = auVar7._24_4_ * auVar11._24_4_;
  auVar13._28_4_ = auVar7._28_4_ * auVar11._28_4_;
  auVar14._4_4_ = __real_80000000;
  auVar14._0_4_ = __real_80000000;
  auVar14._8_4_ = __real_80000000;
  auVar14._12_4_ = __real_80000000;
  auVar14._16_4_ = __real_80000000;
  auVar14._20_4_ = __real_80000000;
  auVar14._24_4_ = __real_80000000;
  auVar14._28_4_ = __real_80000000;
  auVar11 = vblendvps_avx(auVar14,auVar13,auVar12);
  auVar7._0_4_ = auVar8._0_4_ + auVar11._0_4_;
  auVar7._4_4_ = auVar8._4_4_ + auVar11._4_4_;
  auVar7._8_4_ = auVar8._8_4_ + auVar11._8_4_;
  auVar7._12_4_ = auVar8._12_4_ + auVar11._12_4_;
  auVar7._16_4_ = auVar8._16_4_ + auVar11._16_4_;
  auVar7._20_4_ = auVar8._20_4_ + auVar11._20_4_;
  auVar7._24_4_ = auVar8._24_4_ + auVar11._24_4_;
  auVar7._28_4_ = auVar8._28_4_ + auVar11._28_4_;
LAB_140a1f640:
  auVar10 = vpcmpeqd_avx2(auVar10,ZEXT1232(ZEXT812(0)));
  auVar10 = vpandn_avx2(auVar10,auVar7);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  auVar10 = vhaddps_avx(auVar10,auVar10);
  *(float *)(param_3 + (longlong)param_4 * 4) =
       auVar10._0_4_ + auVar10._16_4_ + *(float *)(param_3 + (longlong)param_4 * 4);
  return;
}

// ArrayAPFLongDelayProcess___un_3C_Cunf_3E_un_3C_Cunf_3E_Cuniun_3C_unf_3E_un_3C_unf_3E_Cunf_avx2 @ 140a1f950

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAPFLongDelayProcess___un_3C_Cunf_3E_un_3C_Cunf_3E_Cuniun_3C_unf_3E_un_3C_unf_3E_Cunf_avx2
               (longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
               float param_6)

{
  float *pfVar1;
  undefined1 auVar2 [32];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auVar17 [32];
  float fVar18;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar14 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar14 = param_3;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar16 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    fVar18 = (float)((uint)param_6 ^ __real_80000000);
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = (ulonglong)uVar11;
      pfVar1 = (float *)(param_2 + uVar12);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar7 = pfVar1[4];
      fVar8 = pfVar1[5];
      fVar9 = pfVar1[6];
      fVar10 = pfVar1[7];
      pfVar1 = (float *)(param_1 + uVar12);
      fVar22 = param_6 * fVar3 + *pfVar1;
      fVar23 = param_6 * fVar4 + pfVar1[1];
      fVar24 = param_6 * fVar5 + pfVar1[2];
      fVar25 = param_6 * fVar6 + pfVar1[3];
      fVar26 = param_6 * fVar7 + pfVar1[4];
      fVar27 = param_6 * fVar8 + pfVar1[5];
      fVar28 = param_6 * fVar9 + pfVar1[6];
      fVar29 = param_6 * fVar10 + pfVar1[7];
      pfVar1 = (float *)(param_5 + uVar12);
      *pfVar1 = fVar22;
      pfVar1[1] = fVar23;
      pfVar1[2] = fVar24;
      pfVar1[3] = fVar25;
      pfVar1[4] = fVar26;
      pfVar1[5] = fVar27;
      pfVar1[6] = fVar28;
      pfVar1[7] = fVar29;
      pfVar1 = (float *)(param_4 + uVar12);
      *pfVar1 = fVar18 * fVar22 + fVar3;
      pfVar1[1] = fVar18 * fVar23 + fVar4;
      pfVar1[2] = fVar18 * fVar24 + fVar5;
      pfVar1[3] = fVar18 * fVar25 + fVar6;
      pfVar1[4] = fVar18 * fVar26 + fVar7;
      pfVar1[5] = fVar18 * fVar27 + fVar8;
      pfVar1[6] = fVar18 * fVar28 + fVar9;
      pfVar1[7] = fVar18 * fVar29 + fVar10;
      uVar16 = uVar16 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar16 < (uVar14 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar16) {
      return;
    }
  }
  iVar15 = (int)uVar16;
  auVar17._4_4_ = iVar15;
  auVar17._0_4_ = iVar15;
  auVar17._8_4_ = iVar15;
  auVar17._12_4_ = iVar15;
  auVar17._16_4_ = iVar15;
  auVar17._20_4_ = iVar15;
  auVar17._24_4_ = iVar15;
  auVar17._28_4_ = iVar15;
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar19._4_4_ = param_3;
  auVar19._0_4_ = param_3;
  auVar19._8_4_ = param_3;
  auVar19._12_4_ = param_3;
  auVar19._16_4_ = param_3;
  auVar19._20_4_ = param_3;
  auVar19._24_4_ = param_3;
  auVar19._28_4_ = param_3;
  auVar2 = vpcmpgtd_avx2(auVar19,auVar17);
  lVar13 = (longlong)(iVar15 << 2);
  auVar19 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_2 + lVar13));
  auVar17 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + lVar13));
  auVar20._0_4_ = param_6 * auVar19._0_4_ + auVar17._0_4_;
  auVar20._4_4_ = param_6 * auVar19._4_4_ + auVar17._4_4_;
  auVar20._8_4_ = param_6 * auVar19._8_4_ + auVar17._8_4_;
  auVar20._12_4_ = param_6 * auVar19._12_4_ + auVar17._12_4_;
  auVar20._16_4_ = param_6 * auVar19._16_4_ + auVar17._16_4_;
  auVar20._20_4_ = param_6 * auVar19._20_4_ + auVar17._20_4_;
  auVar20._24_4_ = param_6 * auVar19._24_4_ + auVar17._24_4_;
  auVar20._28_4_ = param_6 * auVar19._28_4_ + auVar17._28_4_;
  auVar17 = vmaskmovps_avx(auVar2,auVar20);
  *(undefined1 (*) [32])(param_5 + lVar13) = auVar17;
  auVar17 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_5 + lVar13));
  auVar21._0_4_ = -(param_6 * auVar17._0_4_) + auVar19._0_4_;
  auVar21._4_4_ = -(param_6 * auVar17._4_4_) + auVar19._4_4_;
  auVar21._8_4_ = -(param_6 * auVar17._8_4_) + auVar19._8_4_;
  auVar21._12_4_ = -(param_6 * auVar17._12_4_) + auVar19._12_4_;
  auVar21._16_4_ = -(param_6 * auVar17._16_4_) + auVar19._16_4_;
  auVar21._20_4_ = -(param_6 * auVar17._20_4_) + auVar19._20_4_;
  auVar21._24_4_ = -(param_6 * auVar17._24_4_) + auVar19._24_4_;
  auVar21._28_4_ = -(param_6 * auVar17._28_4_) + auVar19._28_4_;
  auVar17 = vmaskmovps_avx(auVar2,auVar21);
  *(undefined1 (*) [32])(param_4 + lVar13) = auVar17;
  return;
}

// ArrayLerpFractionalDelay___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cuni_3E_Cuniun_3C_unf_3E_Cunf_avx2 @ 140a1fa40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpFractionalDelay___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cuni_3E_Cuniun_3C_unf_3E_Cunf_avx2
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,uint param_5
               ,longlong param_6,undefined4 param_7)

{
  float *pfVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar5 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar5 = param_5;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar9._4_4_ = param_7;
    auVar9._0_4_ = param_7;
    auVar9._8_4_ = param_7;
    auVar9._12_4_ = param_7;
    auVar9._16_4_ = param_7;
    auVar9._20_4_ = param_7;
    auVar9._24_4_ = param_7;
    auVar9._28_4_ = param_7;
    uVar3 = 0;
    auVar12._4_4_ = __real_3f800000;
    auVar12._0_4_ = __real_3f800000;
    auVar12._8_4_ = __real_3f800000;
    auVar12._12_4_ = __real_3f800000;
    auVar12._16_4_ = __real_3f800000;
    auVar12._20_4_ = __real_3f800000;
    auVar12._24_4_ = __real_3f800000;
    auVar12._28_4_ = __real_3f800000;
    uVar7 = 0;
    do {
      uVar4 = (ulonglong)uVar3;
      auVar13 = vmaxps_avx(*(undefined1 (*) [32])(param_2 + uVar4),ZEXT1232(ZEXT812(0)));
      auVar10 = vminps_avx(auVar13,auVar9);
      auVar8 = vroundps_avx(auVar10,9);
      auVar15._0_4_ = (int)auVar8._0_4_;
      auVar15._4_4_ = (int)auVar8._4_4_;
      auVar15._8_4_ = (int)auVar8._8_4_;
      auVar15._12_4_ = (int)auVar8._12_4_;
      auVar15._16_4_ = (int)auVar8._16_4_;
      auVar15._20_4_ = (int)auVar8._20_4_;
      auVar15._24_4_ = (int)auVar8._24_4_;
      auVar15._28_4_ = (int)auVar8._28_4_;
      auVar13 = *(undefined1 (*) [32])(param_4 + uVar4);
      auVar15 = vpsubd_avx2(auVar13,auVar15);
      vpslld_avx2(auVar15,2);
      auVar13 = vpcmpeqd_avx2(auVar13,auVar13);
      auVar15 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar13);
      auVar13 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar16 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar13);
      auVar13 = vsubps_avx(auVar10,auVar8);
      auVar10 = vsubps_avx(auVar12,auVar13);
      pfVar1 = (float *)(param_6 + uVar4);
      *pfVar1 = auVar10._0_4_ * auVar16._0_4_ + auVar15._0_4_ * auVar13._0_4_;
      pfVar1[1] = auVar10._4_4_ * auVar16._4_4_ + auVar15._4_4_ * auVar13._4_4_;
      pfVar1[2] = auVar10._8_4_ * auVar16._8_4_ + auVar15._8_4_ * auVar13._8_4_;
      pfVar1[3] = auVar10._12_4_ * auVar16._12_4_ + auVar15._12_4_ * auVar13._12_4_;
      pfVar1[4] = auVar10._16_4_ * auVar16._16_4_ + auVar15._16_4_ * auVar13._16_4_;
      pfVar1[5] = auVar10._20_4_ * auVar16._20_4_ + auVar15._20_4_ * auVar13._20_4_;
      pfVar1[6] = auVar10._24_4_ * auVar16._24_4_ + auVar15._24_4_ * auVar13._24_4_;
      pfVar1[7] = auVar10._28_4_ * auVar16._28_4_ + auVar15._28_4_ * auVar13._28_4_;
      uVar7 = uVar7 + 8;
      uVar3 = uVar3 + 0x20;
    } while (uVar7 < (uVar5 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar7) {
      return;
    }
  }
  iVar6 = (int)uVar7;
  auVar10._4_4_ = iVar6;
  auVar10._0_4_ = iVar6;
  auVar10._8_4_ = iVar6;
  auVar10._12_4_ = iVar6;
  auVar10._16_4_ = iVar6;
  auVar10._20_4_ = iVar6;
  auVar10._24_4_ = iVar6;
  auVar10._28_4_ = iVar6;
  auVar9 = vpor_avx2(auVar10,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar16._4_4_ = param_5;
  auVar16._0_4_ = param_5;
  auVar16._8_4_ = param_5;
  auVar16._12_4_ = param_5;
  auVar16._16_4_ = param_5;
  auVar16._20_4_ = param_5;
  auVar16._24_4_ = param_5;
  auVar16._28_4_ = param_5;
  auVar10 = vpcmpgtd_avx2(auVar16,auVar9);
  lVar2 = (longlong)(iVar6 << 2);
  auVar9 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_2 + lVar2));
  auVar9 = vmaxps_avx(auVar9,ZEXT1232(ZEXT812(0)));
  auVar13._4_4_ = param_7;
  auVar13._0_4_ = param_7;
  auVar13._8_4_ = param_7;
  auVar13._12_4_ = param_7;
  auVar13._16_4_ = param_7;
  auVar13._20_4_ = param_7;
  auVar13._24_4_ = param_7;
  auVar13._28_4_ = param_7;
  auVar9 = vminps_avx(auVar9,auVar13);
  auVar12 = vroundps_avx(auVar9,9);
  auVar13 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_4 + lVar2));
  auVar14._0_4_ = (int)auVar12._0_4_;
  auVar14._4_4_ = (int)auVar12._4_4_;
  auVar14._8_4_ = (int)auVar12._8_4_;
  auVar14._12_4_ = (int)auVar12._12_4_;
  auVar14._16_4_ = (int)auVar12._16_4_;
  auVar14._20_4_ = (int)auVar12._20_4_;
  auVar14._24_4_ = (int)auVar12._24_4_;
  auVar14._28_4_ = (int)auVar12._28_4_;
  auVar13 = vpsubd_avx2(auVar13,auVar14);
  vpslld_avx2(auVar13,2);
  auVar15 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar10);
  auVar9 = vsubps_avx(auVar9,auVar12);
  auVar13 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar10);
  auVar11._4_4_ = __real_3f800000;
  auVar11._0_4_ = __real_3f800000;
  auVar11._8_4_ = __real_3f800000;
  auVar11._12_4_ = __real_3f800000;
  auVar11._16_4_ = __real_3f800000;
  auVar11._20_4_ = __real_3f800000;
  auVar11._24_4_ = __real_3f800000;
  auVar11._28_4_ = __real_3f800000;
  auVar12 = vsubps_avx(auVar11,auVar9);
  auVar8._0_4_ = auVar12._0_4_ * auVar15._0_4_ + auVar9._0_4_ * auVar13._0_4_;
  auVar8._4_4_ = auVar12._4_4_ * auVar15._4_4_ + auVar9._4_4_ * auVar13._4_4_;
  auVar8._8_4_ = auVar12._8_4_ * auVar15._8_4_ + auVar9._8_4_ * auVar13._8_4_;
  auVar8._12_4_ = auVar12._12_4_ * auVar15._12_4_ + auVar9._12_4_ * auVar13._12_4_;
  auVar8._16_4_ = auVar12._16_4_ * auVar15._16_4_ + auVar9._16_4_ * auVar13._16_4_;
  auVar8._20_4_ = auVar12._20_4_ * auVar15._20_4_ + auVar9._20_4_ * auVar13._20_4_;
  auVar8._24_4_ = auVar12._24_4_ * auVar15._24_4_ + auVar9._24_4_ * auVar13._24_4_;
  auVar8._28_4_ = auVar12._28_4_ * auVar15._28_4_ + auVar9._28_4_ * auVar13._28_4_;
  auVar9 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_6 + lVar2) = auVar9;
  return;
}

// ArraySum_avx2 @ 140a1fcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum_avx2(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    if ((int)param_3 < 1) goto LAB_140a1fd2c;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = auVar8._0_4_ + *pfVar1;
      auVar6._4_4_ = auVar8._4_4_ + pfVar1[1];
      auVar6._8_4_ = auVar8._8_4_ + pfVar1[2];
      auVar6._12_4_ = auVar8._12_4_ + pfVar1[3];
      auVar6._16_4_ = auVar8._16_4_ + pfVar1[4];
      auVar6._20_4_ = auVar8._20_4_ + pfVar1[5];
      auVar6._24_4_ = auVar8._24_4_ + pfVar1[6];
      auVar6._28_4_ = auVar8._28_4_ + pfVar1[7];
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar7 = auVar6;
    if ((int)param_3 <= (int)uVar4) goto LAB_140a1fd2c;
  }
  iVar3 = (int)uVar4;
  auVar9._4_4_ = iVar3;
  auVar9._0_4_ = iVar3;
  auVar9._8_4_ = iVar3;
  auVar9._12_4_ = iVar3;
  auVar9._16_4_ = iVar3;
  auVar9._20_4_ = iVar3;
  auVar9._24_4_ = iVar3;
  auVar9._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_3;
  auVar10._0_4_ = param_3;
  auVar10._8_4_ = param_3;
  auVar10._12_4_ = param_3;
  auVar10._16_4_ = param_3;
  auVar10._20_4_ = param_3;
  auVar10._24_4_ = param_3;
  auVar10._28_4_ = param_3;
  auVar9 = vpcmpgtd_avx2(auVar10,auVar6);
  auVar6 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar11._4_4_ = __real_80000000;
  auVar11._0_4_ = __real_80000000;
  auVar11._8_4_ = __real_80000000;
  auVar11._12_4_ = __real_80000000;
  auVar11._16_4_ = __real_80000000;
  auVar11._20_4_ = __real_80000000;
  auVar11._24_4_ = __real_80000000;
  auVar11._28_4_ = __real_80000000;
  auVar9 = vblendvps_avx(auVar11,auVar6,auVar9);
  auVar6._0_4_ = auVar7._0_4_ + auVar9._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar9._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar9._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar9._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar9._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar9._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar9._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar9._28_4_;
LAB_140a1fd2c:
  auVar7 = vhaddps_avx(auVar6,auVar6);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  *param_2 = auVar7._0_4_ + auVar7._16_4_;
  return;
}

// ArraySum2_avx2 @ 140a1fd60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum2_avx2(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar21 = 0;
    do {
      uVar23 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar23);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar23);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar23);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar5 + fVar12;
      pfVar3[2] = fVar6 + fVar13;
      pfVar3[3] = fVar7 + fVar14;
      pfVar3[4] = fVar8 + fVar15;
      pfVar3[5] = fVar9 + fVar16;
      pfVar3[6] = fVar10 + fVar17;
      pfVar3[7] = fVar11 + fVar18;
      uVar21 = uVar21 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_4;
  auVar26._0_4_ = param_4;
  auVar26._8_4_ = param_4;
  auVar26._12_4_ = param_4;
  auVar26._16_4_ = param_4;
  auVar26._20_4_ = param_4;
  auVar26._24_4_ = param_4;
  auVar26._28_4_ = param_4;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ + auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ + auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ + auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ + auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ + auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ + auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ + auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ + auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_3 + lVar22) = auVar25;
  return;
}

// ArrayCumulativeSum_avx2 @ 140a1fdf0

void ArrayCumulativeSum_avx2(longlong param_1,longlong param_2,uint param_3)

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

// ArrayMean_avx2 @ 140a1fec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMean_avx2(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    if ((int)param_3 < 1) goto LAB_140a1ff3c;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = auVar8._0_4_ + *pfVar1;
      auVar6._4_4_ = auVar8._4_4_ + pfVar1[1];
      auVar6._8_4_ = auVar8._8_4_ + pfVar1[2];
      auVar6._12_4_ = auVar8._12_4_ + pfVar1[3];
      auVar6._16_4_ = auVar8._16_4_ + pfVar1[4];
      auVar6._20_4_ = auVar8._20_4_ + pfVar1[5];
      auVar6._24_4_ = auVar8._24_4_ + pfVar1[6];
      auVar6._28_4_ = auVar8._28_4_ + pfVar1[7];
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar7 = auVar6;
    if ((int)param_3 <= (int)uVar4) goto LAB_140a1ff3c;
  }
  iVar3 = (int)uVar4;
  auVar9._4_4_ = iVar3;
  auVar9._0_4_ = iVar3;
  auVar9._8_4_ = iVar3;
  auVar9._12_4_ = iVar3;
  auVar9._16_4_ = iVar3;
  auVar9._20_4_ = iVar3;
  auVar9._24_4_ = iVar3;
  auVar9._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_3;
  auVar10._0_4_ = param_3;
  auVar10._8_4_ = param_3;
  auVar10._12_4_ = param_3;
  auVar10._16_4_ = param_3;
  auVar10._20_4_ = param_3;
  auVar10._24_4_ = param_3;
  auVar10._28_4_ = param_3;
  auVar9 = vpcmpgtd_avx2(auVar10,auVar6);
  auVar6 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar11._4_4_ = __real_80000000;
  auVar11._0_4_ = __real_80000000;
  auVar11._8_4_ = __real_80000000;
  auVar11._12_4_ = __real_80000000;
  auVar11._16_4_ = __real_80000000;
  auVar11._20_4_ = __real_80000000;
  auVar11._24_4_ = __real_80000000;
  auVar11._28_4_ = __real_80000000;
  auVar9 = vblendvps_avx(auVar11,auVar6,auVar9);
  auVar6._0_4_ = auVar7._0_4_ + auVar9._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar9._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar9._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar9._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar9._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar9._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar9._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar9._28_4_;
LAB_140a1ff3c:
  auVar7 = vhaddps_avx(auVar6,auVar6);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  *param_2 = (auVar7._0_4_ + auVar7._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMeanSquared_avx2 @ 140a1ff70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanSquared_avx2(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    if ((int)param_3 < 1) goto LAB_140a1fff5;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = *pfVar1 * *pfVar1 + auVar8._0_4_;
      auVar6._4_4_ = pfVar1[1] * pfVar1[1] + auVar8._4_4_;
      auVar6._8_4_ = pfVar1[2] * pfVar1[2] + auVar8._8_4_;
      auVar6._12_4_ = pfVar1[3] * pfVar1[3] + auVar8._12_4_;
      auVar6._16_4_ = pfVar1[4] * pfVar1[4] + auVar8._16_4_;
      auVar6._20_4_ = pfVar1[5] * pfVar1[5] + auVar8._20_4_;
      auVar6._24_4_ = pfVar1[6] * pfVar1[6] + auVar8._24_4_;
      auVar6._28_4_ = pfVar1[7] * pfVar1[7] + auVar8._28_4_;
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar7 = auVar6;
    if ((int)param_3 <= (int)uVar4) goto LAB_140a1fff5;
  }
  iVar3 = (int)uVar4;
  auVar9._4_4_ = iVar3;
  auVar9._0_4_ = iVar3;
  auVar9._8_4_ = iVar3;
  auVar9._12_4_ = iVar3;
  auVar9._16_4_ = iVar3;
  auVar9._20_4_ = iVar3;
  auVar9._24_4_ = iVar3;
  auVar9._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_3;
  auVar10._0_4_ = param_3;
  auVar10._8_4_ = param_3;
  auVar10._12_4_ = param_3;
  auVar10._16_4_ = param_3;
  auVar10._20_4_ = param_3;
  auVar10._24_4_ = param_3;
  auVar10._28_4_ = param_3;
  auVar9 = vpcmpgtd_avx2(auVar10,auVar6);
  auVar6 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar11._0_4_ = auVar6._0_4_ * auVar6._0_4_;
  auVar11._4_4_ = auVar6._4_4_ * auVar6._4_4_;
  auVar11._8_4_ = auVar6._8_4_ * auVar6._8_4_;
  auVar11._12_4_ = auVar6._12_4_ * auVar6._12_4_;
  auVar11._16_4_ = auVar6._16_4_ * auVar6._16_4_;
  auVar11._20_4_ = auVar6._20_4_ * auVar6._20_4_;
  auVar11._24_4_ = auVar6._24_4_ * auVar6._24_4_;
  auVar11._28_4_ = auVar6._28_4_ * auVar6._28_4_;
  auVar12._4_4_ = __real_80000000;
  auVar12._0_4_ = __real_80000000;
  auVar12._8_4_ = __real_80000000;
  auVar12._12_4_ = __real_80000000;
  auVar12._16_4_ = __real_80000000;
  auVar12._20_4_ = __real_80000000;
  auVar12._24_4_ = __real_80000000;
  auVar12._28_4_ = __real_80000000;
  auVar9 = vblendvps_avx(auVar12,auVar11,auVar9);
  auVar6._0_4_ = auVar7._0_4_ + auVar9._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar9._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar9._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar9._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar9._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar9._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar9._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar9._28_4_;
LAB_140a1fff5:
  auVar7 = vhaddps_avx(auVar6,auVar6);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  *param_2 = (auVar7._0_4_ + auVar7._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMax_avx2 @ 140a20030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMax_avx2(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [32];
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  
  uVar2 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar2 = param_4;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar6 = (ulonglong)uVar7;
      auVar8 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + uVar6),
                          *(undefined1 (*) [32])(param_2 + uVar6));
      *(undefined1 (*) [32])(param_3 + uVar6) = auVar8;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar8._4_4_ = iVar3;
  auVar8._0_4_ = iVar3;
  auVar8._8_4_ = iVar3;
  auVar8._12_4_ = iVar3;
  auVar8._16_4_ = iVar3;
  auVar8._20_4_ = iVar3;
  auVar8._24_4_ = iVar3;
  auVar8._28_4_ = iVar3;
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9._4_4_ = param_4;
  auVar9._0_4_ = param_4;
  auVar9._8_4_ = param_4;
  auVar9._12_4_ = param_4;
  auVar9._16_4_ = param_4;
  auVar9._20_4_ = param_4;
  auVar9._24_4_ = param_4;
  auVar9._28_4_ = param_4;
  auVar1 = vpcmpgtd_avx2(auVar9,auVar8);
  lVar5 = (longlong)(iVar3 << 2);
  auVar8 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar9 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vmaxps_avx(auVar8,auVar9);
  auVar8 = vmaskmovps_avx(auVar1,auVar8);
  *(undefined1 (*) [32])(param_3 + lVar5) = auVar8;
  return;
}

// ArrayMaxAbsValue_avx2 @ 140a200c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMaxAbsValue_avx2(longlong param_1,uint param_2)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar4 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar10 = ZEXT832(0);
    if ((int)param_2 < 1) goto LAB_140a20152;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar7);
      auVar10._0_4_ = __real_7fffffff & *puVar1;
      auVar10._4_4_ = __real_7fffffff & puVar1[1];
      auVar10._8_4_ = __real_7fffffff & puVar1[2];
      auVar10._12_4_ = __real_7fffffff & puVar1[3];
      auVar10._16_4_ = __real_7fffffff & puVar1[4];
      auVar10._20_4_ = __real_7fffffff & puVar1[5];
      auVar10._24_4_ = __real_7fffffff & puVar1[6];
      auVar10._28_4_ = __real_7fffffff & puVar1[7];
      auVar10 = vmaxps_avx(auVar10,auVar8._0_32_);
      auVar8 = ZEXT3264(auVar10);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar4 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar6) goto LAB_140a20152;
  }
  iVar5 = (int)uVar6;
  auVar9._4_4_ = iVar5;
  auVar9._0_4_ = iVar5;
  auVar9._8_4_ = iVar5;
  auVar9._12_4_ = iVar5;
  auVar9._16_4_ = iVar5;
  auVar9._20_4_ = iVar5;
  auVar9._24_4_ = iVar5;
  auVar9._28_4_ = iVar5;
  auVar9 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar11._4_4_ = param_2;
  auVar11._0_4_ = param_2;
  auVar11._8_4_ = param_2;
  auVar11._12_4_ = param_2;
  auVar11._16_4_ = param_2;
  auVar11._20_4_ = param_2;
  auVar11._24_4_ = param_2;
  auVar11._28_4_ = param_2;
  auVar11 = vpcmpgtd_avx2(auVar11,auVar9);
  auVar9 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + (iVar5 << 2)));
  auVar12._0_4_ = auVar9._0_4_ & __real_7fffffff;
  auVar12._4_4_ = auVar9._4_4_ & __real_7fffffff;
  auVar12._8_4_ = auVar9._8_4_ & __real_7fffffff;
  auVar12._12_4_ = auVar9._12_4_ & __real_7fffffff;
  auVar12._16_4_ = auVar9._16_4_ & __real_7fffffff;
  auVar12._20_4_ = auVar9._20_4_ & __real_7fffffff;
  auVar12._24_4_ = auVar9._24_4_ & __real_7fffffff;
  auVar12._28_4_ = auVar9._28_4_ & __real_7fffffff;
  auVar9 = vmaxps_avx(auVar12,auVar10);
  auVar10 = vblendvps_avx(auVar10,auVar9,auVar11);
LAB_140a20152:
  auVar2 = vmaxps_avx(auVar10._16_16_,auVar10._0_16_);
  auVar3 = vshufpd_avx(auVar2,auVar2,1);
  auVar2 = vmaxps_avx(auVar3,auVar2);
  auVar3 = vmovshdup_avx(auVar2);
  vmaxss_avx(auVar3,auVar2);
  return;
}

// ArrayGetMagnitude_avx2 @ 140a20180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetMagnitude_avx2(longlong param_1,uint param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    if ((int)param_2 < 1) goto LAB_140a20203;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = *pfVar1 * *pfVar1 + auVar8._0_4_;
      auVar6._4_4_ = pfVar1[1] * pfVar1[1] + auVar8._4_4_;
      auVar6._8_4_ = pfVar1[2] * pfVar1[2] + auVar8._8_4_;
      auVar6._12_4_ = pfVar1[3] * pfVar1[3] + auVar8._12_4_;
      auVar6._16_4_ = pfVar1[4] * pfVar1[4] + auVar8._16_4_;
      auVar6._20_4_ = pfVar1[5] * pfVar1[5] + auVar8._20_4_;
      auVar6._24_4_ = pfVar1[6] * pfVar1[6] + auVar8._24_4_;
      auVar6._28_4_ = pfVar1[7] * pfVar1[7] + auVar8._28_4_;
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar7 = auVar6;
    if ((int)param_2 <= (int)uVar4) goto LAB_140a20203;
  }
  iVar3 = (int)uVar4;
  auVar9._4_4_ = iVar3;
  auVar9._0_4_ = iVar3;
  auVar9._8_4_ = iVar3;
  auVar9._12_4_ = iVar3;
  auVar9._16_4_ = iVar3;
  auVar9._20_4_ = iVar3;
  auVar9._24_4_ = iVar3;
  auVar9._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_2;
  auVar10._0_4_ = param_2;
  auVar10._8_4_ = param_2;
  auVar10._12_4_ = param_2;
  auVar10._16_4_ = param_2;
  auVar10._20_4_ = param_2;
  auVar10._24_4_ = param_2;
  auVar10._28_4_ = param_2;
  auVar9 = vpcmpgtd_avx2(auVar10,auVar6);
  auVar6 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar11._0_4_ = auVar6._0_4_ * auVar6._0_4_;
  auVar11._4_4_ = auVar6._4_4_ * auVar6._4_4_;
  auVar11._8_4_ = auVar6._8_4_ * auVar6._8_4_;
  auVar11._12_4_ = auVar6._12_4_ * auVar6._12_4_;
  auVar11._16_4_ = auVar6._16_4_ * auVar6._16_4_;
  auVar11._20_4_ = auVar6._20_4_ * auVar6._20_4_;
  auVar11._24_4_ = auVar6._24_4_ * auVar6._24_4_;
  auVar11._28_4_ = auVar6._28_4_ * auVar6._28_4_;
  auVar12._4_4_ = __real_80000000;
  auVar12._0_4_ = __real_80000000;
  auVar12._8_4_ = __real_80000000;
  auVar12._12_4_ = __real_80000000;
  auVar12._16_4_ = __real_80000000;
  auVar12._20_4_ = __real_80000000;
  auVar12._24_4_ = __real_80000000;
  auVar12._28_4_ = __real_80000000;
  auVar9 = vblendvps_avx(auVar12,auVar11,auVar9);
  auVar6._0_4_ = auVar7._0_4_ + auVar9._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar9._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar9._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar9._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar9._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar9._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar9._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar9._28_4_;
LAB_140a20203:
  auVar7 = vhaddps_avx(auVar6,auVar6);
  vhaddps_avx(auVar7,auVar7);
  return;
}

// ArrayGetAverageValue_avx2 @ 140a20230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetAverageValue_avx2(longlong param_1,uint param_2)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    if ((int)param_2 < 1) goto LAB_140a202aa;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = auVar8._0_4_ + *pfVar1;
      auVar6._4_4_ = auVar8._4_4_ + pfVar1[1];
      auVar6._8_4_ = auVar8._8_4_ + pfVar1[2];
      auVar6._12_4_ = auVar8._12_4_ + pfVar1[3];
      auVar6._16_4_ = auVar8._16_4_ + pfVar1[4];
      auVar6._20_4_ = auVar8._20_4_ + pfVar1[5];
      auVar6._24_4_ = auVar8._24_4_ + pfVar1[6];
      auVar6._28_4_ = auVar8._28_4_ + pfVar1[7];
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar7 = auVar6;
    if ((int)param_2 <= (int)uVar4) goto LAB_140a202aa;
  }
  iVar3 = (int)uVar4;
  auVar9._4_4_ = iVar3;
  auVar9._0_4_ = iVar3;
  auVar9._8_4_ = iVar3;
  auVar9._12_4_ = iVar3;
  auVar9._16_4_ = iVar3;
  auVar9._20_4_ = iVar3;
  auVar9._24_4_ = iVar3;
  auVar9._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_2;
  auVar10._0_4_ = param_2;
  auVar10._8_4_ = param_2;
  auVar10._12_4_ = param_2;
  auVar10._16_4_ = param_2;
  auVar10._20_4_ = param_2;
  auVar10._24_4_ = param_2;
  auVar10._28_4_ = param_2;
  auVar9 = vpcmpgtd_avx2(auVar10,auVar6);
  auVar6 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar11._4_4_ = __real_80000000;
  auVar11._0_4_ = __real_80000000;
  auVar11._8_4_ = __real_80000000;
  auVar11._12_4_ = __real_80000000;
  auVar11._16_4_ = __real_80000000;
  auVar11._20_4_ = __real_80000000;
  auVar11._24_4_ = __real_80000000;
  auVar11._28_4_ = __real_80000000;
  auVar9 = vblendvps_avx(auVar11,auVar6,auVar9);
  auVar6._0_4_ = auVar7._0_4_ + auVar9._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar9._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar9._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar9._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar9._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar9._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar9._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar9._28_4_;
LAB_140a202aa:
  auVar7 = vhaddps_avx(auVar6,auVar6);
  vhaddps_avx(auVar7,auVar7);
  return;
}

// ArrayGetAverageAbsValue_avx2 @ 140a202e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetAverageAbsValue_avx2(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    if ((int)param_2 < 1) goto LAB_140a2037b;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = auVar8._0_4_ + (float)(__real_7fffffff & *puVar1);
      auVar6._4_4_ = auVar8._4_4_ + (float)(__real_7fffffff & puVar1[1]);
      auVar6._8_4_ = auVar8._8_4_ + (float)(__real_7fffffff & puVar1[2]);
      auVar6._12_4_ = auVar8._12_4_ + (float)(__real_7fffffff & puVar1[3]);
      auVar6._16_4_ = auVar8._16_4_ + (float)(__real_7fffffff & puVar1[4]);
      auVar6._20_4_ = auVar8._20_4_ + (float)(__real_7fffffff & puVar1[5]);
      auVar6._24_4_ = auVar8._24_4_ + (float)(__real_7fffffff & puVar1[6]);
      auVar6._28_4_ = auVar8._28_4_ + (float)(__real_7fffffff & puVar1[7]);
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar7 = auVar6;
    if ((int)param_2 <= (int)uVar4) goto LAB_140a2037b;
  }
  iVar3 = (int)uVar4;
  auVar9._4_4_ = iVar3;
  auVar9._0_4_ = iVar3;
  auVar9._8_4_ = iVar3;
  auVar9._12_4_ = iVar3;
  auVar9._16_4_ = iVar3;
  auVar9._20_4_ = iVar3;
  auVar9._24_4_ = iVar3;
  auVar9._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_2;
  auVar10._0_4_ = param_2;
  auVar10._8_4_ = param_2;
  auVar10._12_4_ = param_2;
  auVar10._16_4_ = param_2;
  auVar10._20_4_ = param_2;
  auVar10._24_4_ = param_2;
  auVar10._28_4_ = param_2;
  auVar9 = vpcmpgtd_avx2(auVar10,auVar6);
  auVar6 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar11._0_4_ = auVar6._0_4_ & __real_7fffffff;
  auVar11._4_4_ = auVar6._4_4_ & __real_7fffffff;
  auVar11._8_4_ = auVar6._8_4_ & __real_7fffffff;
  auVar11._12_4_ = auVar6._12_4_ & __real_7fffffff;
  auVar11._16_4_ = auVar6._16_4_ & __real_7fffffff;
  auVar11._20_4_ = auVar6._20_4_ & __real_7fffffff;
  auVar11._24_4_ = auVar6._24_4_ & __real_7fffffff;
  auVar11._28_4_ = auVar6._28_4_ & __real_7fffffff;
  auVar12._4_4_ = __real_80000000;
  auVar12._0_4_ = __real_80000000;
  auVar12._8_4_ = __real_80000000;
  auVar12._12_4_ = __real_80000000;
  auVar12._16_4_ = __real_80000000;
  auVar12._20_4_ = __real_80000000;
  auVar12._24_4_ = __real_80000000;
  auVar12._28_4_ = __real_80000000;
  auVar9 = vblendvps_avx(auVar12,auVar11,auVar9);
  auVar6._0_4_ = auVar7._0_4_ + auVar9._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar9._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar9._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar9._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar9._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar9._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar9._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar9._28_4_;
LAB_140a2037b:
  auVar7 = vhaddps_avx(auVar6,auVar6);
  vhaddps_avx(auVar7,auVar7);
  return;
}

// ArrayMeanFilter_avx2 @ 140a203b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanFilter_avx2
               (longlong param_1,int param_2,uint param_3,longlong param_4,float param_5,int param_6
               )

{
  float *pfVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  int iVar48;
  
  iVar17 = _UNK_150b50afc;
  iVar16 = _UNK_150b50af8;
  iVar15 = _UNK_150b50af4;
  iVar14 = _UNK_150b50af0;
  iVar13 = _UNK_150b50aec;
  iVar12 = _UNK_150b50ae8;
  iVar28 = _UNK_150b50ae4;
  iVar21 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  uVar23 = param_3 + 1;
  uVar24 = (uVar23 - param_2) + param_6;
  uVar27 = uVar23;
  if ((int)uVar23 < (int)uVar24) {
    uVar27 = uVar24;
  }
  uVar18 = ~param_3;
  iVar20 = param_2 - param_3;
  if (iVar20 < param_6) {
    iVar25 = iVar20 + -1;
    uVar22 = param_3 + 8;
    if (-1 < (int)uVar23) {
      uVar22 = uVar23;
    }
    iVar30 = uVar23 - (uVar22 & 0xfffffff8);
    iVar48 = 0;
    if (iVar30 < (int)uVar23) {
      uVar22 = param_3 - iVar30;
      if (uVar22 < 8) {
        iVar48 = 0;
      }
      else {
        uVar31 = (uVar22 >> 3) + 1 & 0xfffffffe;
        iVar30 = iVar20 * 4 + 0x1c;
        uVar26 = 0;
        auVar43._4_4_ = __real_3f800000;
        auVar43._0_4_ = __real_3f800000;
        auVar43._8_4_ = __real_3f800000;
        auVar43._12_4_ = __real_3f800000;
        auVar43._16_4_ = __real_3f800000;
        auVar43._20_4_ = __real_3f800000;
        auVar43._24_4_ = __real_3f800000;
        auVar43._28_4_ = __real_3f800000;
        iVar48 = 0;
        do {
          iVar2 = iVar48 + iVar20;
          auVar4._0_4_ = iVar2 + iVar21;
          auVar4._4_4_ = iVar2 + iVar28;
          auVar4._8_4_ = iVar2 + iVar12;
          auVar4._12_4_ = iVar2 + iVar13;
          auVar4._16_4_ = iVar2 + iVar14;
          auVar4._20_4_ = iVar2 + iVar15;
          auVar4._24_4_ = iVar2 + iVar16;
          auVar4._28_4_ = iVar2 + iVar17;
          auVar33 = vcvtdq2ps_avx(auVar4);
          auVar33 = vmaxps_avx(auVar43,auVar33);
          auVar33 = vdivps_avx(*(undefined1 (*) [32])
                                (param_1 + (int)(uVar26 + param_2 * 4 + param_3 * -4 + -4)),auVar33)
          ;
          *(undefined1 (*) [32])(param_4 + (ulonglong)uVar26) = auVar33;
          iVar2 = iVar48 + 8 + iVar20;
          auVar5._0_4_ = iVar2 + iVar21;
          auVar5._4_4_ = iVar2 + iVar28;
          auVar5._8_4_ = iVar2 + iVar12;
          auVar5._12_4_ = iVar2 + iVar13;
          auVar5._16_4_ = iVar2 + iVar14;
          auVar5._20_4_ = iVar2 + iVar15;
          auVar5._24_4_ = iVar2 + iVar16;
          auVar5._28_4_ = iVar2 + iVar17;
          auVar33 = vcvtdq2ps_avx(auVar5);
          auVar33 = vmaxps_avx(auVar43,auVar33);
          auVar33 = vdivps_avx(*(undefined1 (*) [32])(param_1 + iVar30),auVar33);
          *(undefined1 (*) [32])(param_4 + (ulonglong)(uVar26 + 0x20)) = auVar33;
          iVar48 = iVar48 + 0x10;
          iVar30 = iVar30 + 0x40;
          uVar26 = uVar26 + 0x40;
          uVar31 = uVar31 - 2;
        } while (uVar31 != 0);
      }
      if ((uVar22 & 8) == 0) {
        iVar21 = iVar48 + iVar20;
        auVar6._0_4_ = iVar21 + 
                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
        auVar6._4_4_ = iVar21 + _UNK_150b50ae4;
        auVar6._8_4_ = iVar21 + _UNK_150b50ae8;
        auVar6._12_4_ = iVar21 + _UNK_150b50aec;
        auVar6._16_4_ = iVar21 + _UNK_150b50af0;
        auVar6._20_4_ = iVar21 + _UNK_150b50af4;
        auVar6._24_4_ = iVar21 + _UNK_150b50af8;
        auVar6._28_4_ = iVar21 + _UNK_150b50afc;
        auVar33 = vcvtdq2ps_avx(auVar6);
        auVar47._4_4_ = __real_3f800000;
        auVar47._0_4_ = __real_3f800000;
        auVar47._8_4_ = __real_3f800000;
        auVar47._12_4_ = __real_3f800000;
        auVar47._16_4_ = __real_3f800000;
        auVar47._20_4_ = __real_3f800000;
        auVar47._24_4_ = __real_3f800000;
        auVar47._28_4_ = __real_3f800000;
        auVar33 = vmaxps_avx(auVar47,auVar33);
        auVar33 = vdivps_avx(*(undefined1 (*) [32])(param_1 + (iVar25 + iVar48) * 4),auVar33);
        *(undefined1 (*) [32])(param_4 + (ulonglong)(uint)(iVar48 * 4)) = auVar33;
        iVar48 = iVar48 + 8;
      }
    }
    if (iVar48 <= (int)param_3) {
      auVar37._4_4_ = iVar48;
      auVar37._0_4_ = iVar48;
      auVar37._8_4_ = iVar48;
      auVar37._12_4_ = iVar48;
      auVar37._16_4_ = iVar48;
      auVar37._20_4_ = iVar48;
      auVar37._24_4_ = iVar48;
      auVar37._28_4_ = iVar48;
      auVar11._4_4_ = _UNK_150b50ae4;
      auVar11._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
      auVar11._8_4_ = _UNK_150b50ae8;
      auVar11._12_4_ = _UNK_150b50aec;
      auVar11._16_4_ = _UNK_150b50af0;
      auVar11._20_4_ = _UNK_150b50af4;
      auVar11._24_4_ = _UNK_150b50af8;
      auVar11._28_4_ = _UNK_150b50afc;
      auVar33 = vpor_avx2(auVar37,auVar11);
      auVar44._4_4_ = uVar23;
      auVar44._0_4_ = uVar23;
      auVar44._8_4_ = uVar23;
      auVar44._12_4_ = uVar23;
      auVar44._16_4_ = uVar23;
      auVar44._20_4_ = uVar23;
      auVar44._24_4_ = uVar23;
      auVar44._28_4_ = uVar23;
      auVar36 = vpcmpgtd_avx2(auVar44,auVar33);
      auVar40 = vmaskmovps_avx(auVar36,*(undefined1 (*) [32])(param_1 + (iVar48 + iVar25) * 4));
      auVar7._0_4_ = auVar33._0_4_ + iVar20;
      auVar7._4_4_ = auVar33._4_4_ + iVar20;
      auVar7._8_4_ = auVar33._8_4_ + iVar20;
      auVar7._12_4_ = auVar33._12_4_ + iVar20;
      auVar7._16_4_ = auVar33._16_4_ + iVar20;
      auVar7._20_4_ = auVar33._20_4_ + iVar20;
      auVar7._24_4_ = auVar33._24_4_ + iVar20;
      auVar7._28_4_ = auVar33._28_4_ + iVar20;
      auVar33 = vcvtdq2ps_avx(auVar7);
      auVar38._4_4_ = __real_3f800000;
      auVar38._0_4_ = __real_3f800000;
      auVar38._8_4_ = __real_3f800000;
      auVar38._12_4_ = __real_3f800000;
      auVar38._16_4_ = __real_3f800000;
      auVar38._20_4_ = __real_3f800000;
      auVar38._24_4_ = __real_3f800000;
      auVar38._28_4_ = __real_3f800000;
      auVar33 = vmaxps_avx(auVar38,auVar33);
      auVar33 = vdivps_avx(auVar40,auVar33);
      auVar33 = vmaskmovps_avx(auVar36,auVar33);
      *(undefined1 (*) [32])(param_4 + iVar48 * 4) = auVar33;
    }
    auVar34._0_4_ = (float)param_2;
    uVar26 = uVar27 - uVar23;
    uVar22 = uVar26 + 7;
    if (-1 < (int)uVar26) {
      uVar22 = uVar26;
    }
    iVar21 = ((uVar22 & 0xfffffff8) - uVar26) + uVar27;
    uVar29 = (ulonglong)uVar23;
    if ((int)uVar23 < iVar21) {
      auVar39._4_4_ = auVar34._0_4_;
      auVar39._0_4_ = auVar34._0_4_;
      auVar39._8_4_ = auVar34._0_4_;
      auVar39._12_4_ = auVar34._0_4_;
      auVar39._16_4_ = auVar34._0_4_;
      auVar39._20_4_ = auVar34._0_4_;
      auVar39._24_4_ = auVar34._0_4_;
      auVar39._28_4_ = auVar34._0_4_;
      uVar29 = (ulonglong)(int)uVar23;
      iVar28 = 0;
      do {
        auVar33 = vsubps_avx(*(undefined1 (*) [32])(param_1 + (param_2 * 4 + iVar28)),
                             *(undefined1 (*) [32])(param_1 + iVar28));
        auVar33 = vdivps_avx(auVar33,auVar39);
        *(undefined1 (*) [32])(param_4 + (int)(param_3 * 4 + 4 + iVar28)) = auVar33;
        uVar29 = uVar29 + 8;
        iVar28 = iVar28 + 0x20;
      } while ((longlong)uVar29 < (longlong)iVar21);
    }
    iVar28 = (int)uVar29;
    if ((int)uVar27 <= iVar28) goto LAB_140a2074a;
    auVar8._0_4_ = iVar28 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar8._4_4_ = iVar28 + _UNK_150b50ae4;
    auVar8._8_4_ = iVar28 + _UNK_150b50ae8;
    auVar8._12_4_ = iVar28 + _UNK_150b50aec;
    auVar8._16_4_ = iVar28 + _UNK_150b50af0;
    auVar8._20_4_ = iVar28 + _UNK_150b50af4;
    auVar8._24_4_ = iVar28 + _UNK_150b50af8;
    auVar8._28_4_ = iVar28 + _UNK_150b50afc;
    auVar45._4_4_ = uVar27;
    auVar45._0_4_ = uVar27;
    auVar45._8_4_ = uVar27;
    auVar45._12_4_ = uVar27;
    auVar45._16_4_ = uVar27;
    auVar45._20_4_ = uVar27;
    auVar45._24_4_ = uVar27;
    auVar45._28_4_ = uVar27;
    auVar40 = vpcmpgtd_avx2(auVar45,auVar8);
    auVar33 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_1 + (iVar25 + iVar28) * 4));
    iVar21 = iVar28 * 4;
    auVar36 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_1 + (int)((iVar28 + uVar18) * 4)))
    ;
    auVar33 = vsubps_avx(auVar33,auVar36);
    auVar34._4_4_ = auVar34._0_4_;
    auVar34._8_4_ = auVar34._0_4_;
    auVar34._12_4_ = auVar34._0_4_;
    auVar34._16_4_ = auVar34._0_4_;
    auVar34._20_4_ = auVar34._0_4_;
    auVar34._24_4_ = auVar34._0_4_;
    auVar34._28_4_ = auVar34._0_4_;
    auVar33 = vdivps_avx(auVar33,auVar34);
  }
  else {
    auVar33._0_4_ = param_5 / (float)param_6;
    uVar22 = uVar27 + 7;
    if (-1 < (int)uVar27) {
      uVar22 = uVar27;
    }
    if ((int)(uVar22 & 0xfffffff8) < 1) {
      uVar29 = 0;
      if ((int)uVar27 < 1) goto LAB_140a2074a;
    }
    else {
      uVar26 = 0;
      uVar29 = 0;
      do {
        pfVar1 = (float *)(param_4 + (ulonglong)uVar26);
        *pfVar1 = auVar33._0_4_;
        pfVar1[1] = auVar33._0_4_;
        pfVar1[2] = auVar33._0_4_;
        pfVar1[3] = auVar33._0_4_;
        pfVar1[4] = auVar33._0_4_;
        pfVar1[5] = auVar33._0_4_;
        pfVar1[6] = auVar33._0_4_;
        pfVar1[7] = auVar33._0_4_;
        uVar29 = uVar29 + 8;
        uVar26 = uVar26 + 0x20;
      } while (uVar29 < (uVar22 & 0xfffffff8));
      if ((int)uVar27 <= (int)uVar29) goto LAB_140a2074a;
    }
    iVar21 = (int)uVar29;
    auVar36._4_4_ = iVar21;
    auVar36._0_4_ = iVar21;
    auVar36._8_4_ = iVar21;
    auVar36._12_4_ = iVar21;
    auVar36._16_4_ = iVar21;
    auVar36._20_4_ = iVar21;
    auVar36._24_4_ = iVar21;
    auVar36._28_4_ = iVar21;
    auVar40._4_4_ = _UNK_150b50ae4;
    auVar40._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar40._8_4_ = _UNK_150b50ae8;
    auVar40._12_4_ = _UNK_150b50aec;
    auVar40._16_4_ = _UNK_150b50af0;
    auVar40._20_4_ = _UNK_150b50af4;
    auVar40._24_4_ = _UNK_150b50af8;
    auVar40._28_4_ = _UNK_150b50afc;
    auVar40 = vpor_avx2(auVar36,auVar40);
    auVar42._4_4_ = uVar27;
    auVar42._0_4_ = uVar27;
    auVar42._8_4_ = uVar27;
    auVar42._12_4_ = uVar27;
    auVar42._16_4_ = uVar27;
    auVar42._20_4_ = uVar27;
    auVar42._24_4_ = uVar27;
    auVar42._28_4_ = uVar27;
    auVar40 = vpcmpgtd_avx2(auVar42,auVar40);
    iVar21 = iVar21 << 2;
    auVar33._4_4_ = auVar33._0_4_;
    auVar33._8_4_ = auVar33._0_4_;
    auVar33._12_4_ = auVar33._0_4_;
    auVar33._16_4_ = auVar33._0_4_;
    auVar33._20_4_ = auVar33._0_4_;
    auVar33._24_4_ = auVar33._0_4_;
    auVar33._28_4_ = auVar33._0_4_;
  }
  auVar33 = vmaskmovps_avx(auVar40,auVar33);
  *(undefined1 (*) [32])(param_4 + iVar21) = auVar33;
LAB_140a2074a:
  iVar17 = _UNK_150d5a7fc;
  iVar16 = _UNK_150d5a7f8;
  iVar15 = _UNK_150d5a7f4;
  iVar14 = _UNK_150d5a7f0;
  iVar13 = _UNK_150d5a7ec;
  iVar12 = _UNK_150d5a7e8;
  iVar28 = _UNK_150d5a7e4;
  iVar21 = ___ymm_fffffff9fffffffafffffffbfffffffcfffffffdfffffffeffffffff00000000;
  uVar26 = param_6 - uVar27;
  uVar22 = uVar26 + 7;
  if (-1 < (int)uVar26) {
    uVar22 = uVar26;
  }
  iVar20 = ((uVar22 & 0xfffffff8) - uVar26) + param_6;
  if ((int)uVar27 < iVar20) {
    auVar46._4_4_ = param_5;
    auVar46._0_4_ = param_5;
    auVar46._8_4_ = param_5;
    auVar46._12_4_ = param_5;
    auVar46._16_4_ = param_5;
    auVar46._20_4_ = param_5;
    auVar46._24_4_ = param_5;
    auVar46._28_4_ = param_5;
    uVar27 = uVar23;
    if ((int)uVar23 < (int)uVar24) {
      uVar27 = uVar24;
    }
    lVar19 = (longlong)(int)uVar27;
    iVar25 = uVar27 * 4;
    do {
      auVar40 = vsubps_avx(auVar46,*(undefined1 (*) [32])(param_1 + (int)(uVar18 * 4 + iVar25)));
      auVar3 = vpsubd_avx(ZEXT416(param_6 + param_3),ZEXT416(uVar27));
      iVar48 = auVar3._0_4_;
      auVar9._0_4_ = iVar48 + iVar21;
      auVar9._4_4_ = iVar48 + iVar28;
      auVar9._8_4_ = iVar48 + iVar12;
      auVar9._12_4_ = iVar48 + iVar13;
      auVar9._16_4_ = iVar48 + iVar14;
      auVar9._20_4_ = iVar48 + iVar15;
      auVar9._24_4_ = iVar48 + iVar16;
      auVar9._28_4_ = iVar48 + iVar17;
      auVar33 = vcvtdq2ps_avx(auVar9);
      auVar33 = vdivps_avx(auVar40,auVar33);
      *(undefined1 (*) [32])(param_4 + iVar25) = auVar33;
      lVar19 = lVar19 + 8;
      iVar25 = iVar25 + 0x20;
      uVar27 = uVar27 + 8;
    } while (lVar19 < iVar20);
  }
  if ((int)uVar27 < param_6) {
    auVar10._0_4_ = uVar27 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
    ;
    auVar10._4_4_ = uVar27 + _UNK_150b50ae4;
    auVar10._8_4_ = uVar27 + _UNK_150b50ae8;
    auVar10._12_4_ = uVar27 + _UNK_150b50aec;
    auVar10._16_4_ = uVar27 + _UNK_150b50af0;
    auVar10._20_4_ = uVar27 + _UNK_150b50af4;
    auVar10._24_4_ = uVar27 + _UNK_150b50af8;
    auVar10._28_4_ = uVar27 + _UNK_150b50afc;
    auVar41._4_4_ = param_6;
    auVar41._0_4_ = param_6;
    auVar41._8_4_ = param_6;
    auVar41._12_4_ = param_6;
    auVar41._16_4_ = param_6;
    auVar41._20_4_ = param_6;
    auVar41._24_4_ = param_6;
    auVar41._28_4_ = param_6;
    auVar36 = vpcmpgtd_avx2(auVar41,auVar10);
    auVar32._4_4_ = param_5;
    auVar32._0_4_ = param_5;
    auVar32._8_4_ = param_5;
    auVar32._12_4_ = param_5;
    auVar32._16_4_ = param_5;
    auVar32._20_4_ = param_5;
    auVar32._24_4_ = param_5;
    auVar32._28_4_ = param_5;
    auVar33 = vmaskmovps_avx(auVar36,*(undefined1 (*) [32])(param_1 + (int)((uVar18 + uVar27) * 4)))
    ;
    auVar40 = vsubps_avx(auVar32,auVar33);
    param_6 = param_6 + param_3;
    auVar35._4_4_ = param_6;
    auVar35._0_4_ = param_6;
    auVar35._8_4_ = param_6;
    auVar35._12_4_ = param_6;
    auVar35._16_4_ = param_6;
    auVar35._20_4_ = param_6;
    auVar35._24_4_ = param_6;
    auVar35._28_4_ = param_6;
    auVar33 = vpsubd_avx2(auVar35,auVar10);
    auVar33 = vcvtdq2ps_avx(auVar33);
    auVar33 = vdivps_avx(auVar40,auVar33);
    auVar33 = vmaskmovps_avx(auVar36,auVar33);
    *(undefined1 (*) [32])(param_4 + (int)(uVar27 * 4)) = auVar33;
  }
  return;
}

// ArrayGetEuclideanNorm_avx2 @ 140a20860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetEuclideanNorm_avx2(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    auVar7 = ZEXT1632(ZEXT816(0));
    auVar6 = ZEXT1632(ZEXT816(0));
    if ((int)param_3 < 1) goto LAB_140a208e5;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      auVar6._0_4_ = *pfVar1 * *pfVar1 + auVar8._0_4_;
      auVar6._4_4_ = pfVar1[1] * pfVar1[1] + auVar8._4_4_;
      auVar6._8_4_ = pfVar1[2] * pfVar1[2] + auVar8._8_4_;
      auVar6._12_4_ = pfVar1[3] * pfVar1[3] + auVar8._12_4_;
      auVar6._16_4_ = pfVar1[4] * pfVar1[4] + auVar8._16_4_;
      auVar6._20_4_ = pfVar1[5] * pfVar1[5] + auVar8._20_4_;
      auVar6._24_4_ = pfVar1[6] * pfVar1[6] + auVar8._24_4_;
      auVar6._28_4_ = pfVar1[7] * pfVar1[7] + auVar8._28_4_;
      auVar8 = ZEXT3264(auVar6);
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    auVar7 = auVar6;
    if ((int)param_3 <= (int)uVar4) goto LAB_140a208e5;
  }
  iVar3 = (int)uVar4;
  auVar9._4_4_ = iVar3;
  auVar9._0_4_ = iVar3;
  auVar9._8_4_ = iVar3;
  auVar9._12_4_ = iVar3;
  auVar9._16_4_ = iVar3;
  auVar9._20_4_ = iVar3;
  auVar9._24_4_ = iVar3;
  auVar9._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_3;
  auVar10._0_4_ = param_3;
  auVar10._8_4_ = param_3;
  auVar10._12_4_ = param_3;
  auVar10._16_4_ = param_3;
  auVar10._20_4_ = param_3;
  auVar10._24_4_ = param_3;
  auVar10._28_4_ = param_3;
  auVar9 = vpcmpgtd_avx2(auVar10,auVar6);
  auVar6 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar11._0_4_ = auVar6._0_4_ * auVar6._0_4_;
  auVar11._4_4_ = auVar6._4_4_ * auVar6._4_4_;
  auVar11._8_4_ = auVar6._8_4_ * auVar6._8_4_;
  auVar11._12_4_ = auVar6._12_4_ * auVar6._12_4_;
  auVar11._16_4_ = auVar6._16_4_ * auVar6._16_4_;
  auVar11._20_4_ = auVar6._20_4_ * auVar6._20_4_;
  auVar11._24_4_ = auVar6._24_4_ * auVar6._24_4_;
  auVar11._28_4_ = auVar6._28_4_ * auVar6._28_4_;
  auVar12._4_4_ = __real_80000000;
  auVar12._0_4_ = __real_80000000;
  auVar12._8_4_ = __real_80000000;
  auVar12._12_4_ = __real_80000000;
  auVar12._16_4_ = __real_80000000;
  auVar12._20_4_ = __real_80000000;
  auVar12._24_4_ = __real_80000000;
  auVar12._28_4_ = __real_80000000;
  auVar9 = vblendvps_avx(auVar12,auVar11,auVar9);
  auVar6._0_4_ = auVar7._0_4_ + auVar9._0_4_;
  auVar6._4_4_ = auVar7._4_4_ + auVar9._4_4_;
  auVar6._8_4_ = auVar7._8_4_ + auVar9._8_4_;
  auVar6._12_4_ = auVar7._12_4_ + auVar9._12_4_;
  auVar6._16_4_ = auVar7._16_4_ + auVar9._16_4_;
  auVar6._20_4_ = auVar7._20_4_ + auVar9._20_4_;
  auVar6._24_4_ = auVar7._24_4_ + auVar9._24_4_;
  auVar6._28_4_ = auVar7._28_4_ + auVar9._28_4_;
LAB_140a208e5:
  auVar7 = vhaddps_avx(auVar6,auVar6);
  auVar7 = vhaddps_avx(auVar7,auVar7);
  *param_2 = SQRT(auVar7._0_4_ + auVar7._16_4_);
  return;
}

// ArrayAbs_avx2 @ 140a20910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAbs_avx2(longlong param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar10 = __real_7fffffff;
  uVar11 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar11 = param_3;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[4];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = (uint *)(param_2 + (ulonglong)uVar14);
      *puVar2 = uVar10 & *puVar1;
      puVar2[1] = uVar10 & uVar3;
      puVar2[2] = uVar10 & uVar4;
      puVar2[3] = uVar10 & uVar5;
      puVar2[4] = uVar10 & uVar6;
      puVar2[5] = uVar10 & uVar7;
      puVar2[6] = uVar10 & uVar8;
      puVar2[7] = uVar10 & uVar9;
      uVar13 = uVar13 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar13 < (uVar11 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar15._4_4_ = iVar12;
  auVar15._0_4_ = iVar12;
  auVar15._8_4_ = iVar12;
  auVar15._12_4_ = iVar12;
  auVar15._16_4_ = iVar12;
  auVar15._20_4_ = iVar12;
  auVar15._24_4_ = iVar12;
  auVar15._28_4_ = iVar12;
  auVar15 = vpor_avx2(auVar15,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar16._4_4_ = param_3;
  auVar16._0_4_ = param_3;
  auVar16._8_4_ = param_3;
  auVar16._12_4_ = param_3;
  auVar16._16_4_ = param_3;
  auVar16._20_4_ = param_3;
  auVar16._24_4_ = param_3;
  auVar16._28_4_ = param_3;
  auVar16 = vpcmpgtd_avx2(auVar16,auVar15);
  auVar15 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_1 + (iVar12 << 2)));
  auVar17._0_4_ = auVar15._0_4_ & __real_7fffffff;
  auVar17._4_4_ = auVar15._4_4_ & __real_7fffffff;
  auVar17._8_4_ = auVar15._8_4_ & __real_7fffffff;
  auVar17._12_4_ = auVar15._12_4_ & __real_7fffffff;
  auVar17._16_4_ = auVar15._16_4_ & __real_7fffffff;
  auVar17._20_4_ = auVar15._20_4_ & __real_7fffffff;
  auVar17._24_4_ = auVar15._24_4_ & __real_7fffffff;
  auVar17._28_4_ = auVar15._28_4_ & __real_7fffffff;
  auVar15 = vmaskmovps_avx(auVar16,auVar17);
  *(undefined1 (*) [32])(param_2 + (iVar12 << 2)) = auVar15;
  return;
}

// ArrayAbsInPlace_avx2 @ 140a209b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAbsInPlace_avx2(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  
  uVar10 = __real_7fffffff;
  uVar11 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar11 = param_2;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar14);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      uVar6 = puVar1[4];
      uVar7 = puVar1[5];
      uVar8 = puVar1[6];
      uVar9 = puVar1[7];
      puVar2 = (uint *)(param_1 + (ulonglong)uVar14);
      *puVar2 = uVar10 & *puVar1;
      puVar2[1] = uVar10 & uVar3;
      puVar2[2] = uVar10 & uVar4;
      puVar2[3] = uVar10 & uVar5;
      puVar2[4] = uVar10 & uVar6;
      puVar2[5] = uVar10 & uVar7;
      puVar2[6] = uVar10 & uVar8;
      puVar2[7] = uVar10 & uVar9;
      uVar13 = uVar13 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar13 < (uVar11 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar15._4_4_ = iVar12;
  auVar15._0_4_ = iVar12;
  auVar15._8_4_ = iVar12;
  auVar15._12_4_ = iVar12;
  auVar15._16_4_ = iVar12;
  auVar15._20_4_ = iVar12;
  auVar15._24_4_ = iVar12;
  auVar15._28_4_ = iVar12;
  auVar15 = vpor_avx2(auVar15,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar16._4_4_ = param_2;
  auVar16._0_4_ = param_2;
  auVar16._8_4_ = param_2;
  auVar16._12_4_ = param_2;
  auVar16._16_4_ = param_2;
  auVar16._20_4_ = param_2;
  auVar16._24_4_ = param_2;
  auVar16._28_4_ = param_2;
  auVar16 = vpcmpgtd_avx2(auVar16,auVar15);
  auVar15 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_1 + (iVar12 << 2)));
  auVar17._0_4_ = auVar15._0_4_ & __real_7fffffff;
  auVar17._4_4_ = auVar15._4_4_ & __real_7fffffff;
  auVar17._8_4_ = auVar15._8_4_ & __real_7fffffff;
  auVar17._12_4_ = auVar15._12_4_ & __real_7fffffff;
  auVar17._16_4_ = auVar15._16_4_ & __real_7fffffff;
  auVar17._20_4_ = auVar15._20_4_ & __real_7fffffff;
  auVar17._24_4_ = auVar15._24_4_ & __real_7fffffff;
  auVar17._28_4_ = auVar15._28_4_ & __real_7fffffff;
  auVar15 = vmaskmovps_avx(auVar16,auVar17);
  *(undefined1 (*) [32])(param_1 + (iVar12 << 2)) = auVar15;
  return;
}

// ArrayClampMinInPlace_avx2 @ 140a20a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampMinInPlace_avx2(longlong param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  
  uVar1 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  if ((int)(uVar1 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar5._4_4_ = param_2;
    auVar5._0_4_ = param_2;
    auVar5._8_4_ = param_2;
    auVar5._12_4_ = param_2;
    auVar5._16_4_ = param_2;
    auVar5._20_4_ = param_2;
    auVar5._24_4_ = param_2;
    auVar5._28_4_ = param_2;
    uVar4 = 0;
    uVar3 = 0;
    do {
      auVar6 = vmaxps_avx(auVar5,*(undefined1 (*) [32])(param_1 + (ulonglong)uVar4));
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar4) = auVar6;
      uVar3 = uVar3 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar3 < (uVar1 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar3) {
      return;
    }
  }
  iVar2 = (int)uVar3;
  auVar6._4_4_ = iVar2;
  auVar6._0_4_ = iVar2;
  auVar6._8_4_ = iVar2;
  auVar6._12_4_ = iVar2;
  auVar6._16_4_ = iVar2;
  auVar6._20_4_ = iVar2;
  auVar6._24_4_ = iVar2;
  auVar6._28_4_ = iVar2;
  auVar5 = vpor_avx2(auVar6,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar8._4_4_ = param_3;
  auVar8._0_4_ = param_3;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = param_3;
  auVar8._16_4_ = param_3;
  auVar8._20_4_ = param_3;
  auVar8._24_4_ = param_3;
  auVar8._28_4_ = param_3;
  auVar6 = vpcmpgtd_avx2(auVar8,auVar5);
  auVar7._4_4_ = param_2;
  auVar7._0_4_ = param_2;
  auVar7._8_4_ = param_2;
  auVar7._12_4_ = param_2;
  auVar7._16_4_ = param_2;
  auVar7._20_4_ = param_2;
  auVar7._24_4_ = param_2;
  auVar7._28_4_ = param_2;
  auVar5 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_1 + (iVar2 << 2)));
  auVar5 = vmaxps_avx(auVar7,auVar5);
  auVar5 = vmaskmovps_avx(auVar6,auVar5);
  *(undefined1 (*) [32])(param_1 + (iVar2 << 2)) = auVar5;
  return;
}

// ArrayClampMaxInPlace_avx2 @ 140a20ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampMaxInPlace_avx2(longlong param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  
  uVar1 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  if ((int)(uVar1 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar5._4_4_ = param_2;
    auVar5._0_4_ = param_2;
    auVar5._8_4_ = param_2;
    auVar5._12_4_ = param_2;
    auVar5._16_4_ = param_2;
    auVar5._20_4_ = param_2;
    auVar5._24_4_ = param_2;
    auVar5._28_4_ = param_2;
    uVar4 = 0;
    uVar3 = 0;
    do {
      auVar6 = vminps_avx(auVar5,*(undefined1 (*) [32])(param_1 + (ulonglong)uVar4));
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar4) = auVar6;
      uVar3 = uVar3 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar3 < (uVar1 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar3) {
      return;
    }
  }
  iVar2 = (int)uVar3;
  auVar6._4_4_ = iVar2;
  auVar6._0_4_ = iVar2;
  auVar6._8_4_ = iVar2;
  auVar6._12_4_ = iVar2;
  auVar6._16_4_ = iVar2;
  auVar6._20_4_ = iVar2;
  auVar6._24_4_ = iVar2;
  auVar6._28_4_ = iVar2;
  auVar5 = vpor_avx2(auVar6,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar8._4_4_ = param_3;
  auVar8._0_4_ = param_3;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = param_3;
  auVar8._16_4_ = param_3;
  auVar8._20_4_ = param_3;
  auVar8._24_4_ = param_3;
  auVar8._28_4_ = param_3;
  auVar6 = vpcmpgtd_avx2(auVar8,auVar5);
  auVar7._4_4_ = param_2;
  auVar7._0_4_ = param_2;
  auVar7._8_4_ = param_2;
  auVar7._12_4_ = param_2;
  auVar7._16_4_ = param_2;
  auVar7._20_4_ = param_2;
  auVar7._24_4_ = param_2;
  auVar7._28_4_ = param_2;
  auVar5 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_1 + (iVar2 << 2)));
  auVar5 = vminps_avx(auVar7,auVar5);
  auVar5 = vmaskmovps_avx(auVar6,auVar5);
  *(undefined1 (*) [32])(param_1 + (iVar2 << 2)) = auVar5;
  return;
}

// ArrayClampInPlace_avx2 @ 140a20b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampInPlace_avx2(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  
  uVar1 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar1 = param_4;
  }
  if ((int)(uVar1 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar5._4_4_ = param_2;
    auVar5._0_4_ = param_2;
    auVar5._8_4_ = param_2;
    auVar5._12_4_ = param_2;
    auVar5._16_4_ = param_2;
    auVar5._20_4_ = param_2;
    auVar5._24_4_ = param_2;
    auVar5._28_4_ = param_2;
    auVar9._4_4_ = param_3;
    auVar9._0_4_ = param_3;
    auVar9._8_4_ = param_3;
    auVar9._12_4_ = param_3;
    auVar9._16_4_ = param_3;
    auVar9._20_4_ = param_3;
    auVar9._24_4_ = param_3;
    auVar9._28_4_ = param_3;
    uVar4 = 0;
    uVar3 = 0;
    do {
      auVar6 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar4),auVar5);
      auVar6 = vminps_avx(auVar6,auVar9);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar4) = auVar6;
      uVar3 = uVar3 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar3 < (uVar1 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar3) {
      return;
    }
  }
  iVar2 = (int)uVar3;
  auVar6._4_4_ = iVar2;
  auVar6._0_4_ = iVar2;
  auVar6._8_4_ = iVar2;
  auVar6._12_4_ = iVar2;
  auVar6._16_4_ = iVar2;
  auVar6._20_4_ = iVar2;
  auVar6._24_4_ = iVar2;
  auVar6._28_4_ = iVar2;
  auVar5 = vpor_avx2(auVar6,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_4;
  auVar10._0_4_ = param_4;
  auVar10._8_4_ = param_4;
  auVar10._12_4_ = param_4;
  auVar10._16_4_ = param_4;
  auVar10._20_4_ = param_4;
  auVar10._24_4_ = param_4;
  auVar10._28_4_ = param_4;
  auVar9 = vpcmpgtd_avx2(auVar10,auVar5);
  auVar5 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar2 << 2)));
  auVar7._4_4_ = param_2;
  auVar7._0_4_ = param_2;
  auVar7._8_4_ = param_2;
  auVar7._12_4_ = param_2;
  auVar7._16_4_ = param_2;
  auVar7._20_4_ = param_2;
  auVar7._24_4_ = param_2;
  auVar7._28_4_ = param_2;
  auVar5 = vmaxps_avx(auVar5,auVar7);
  auVar8._4_4_ = param_3;
  auVar8._0_4_ = param_3;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = param_3;
  auVar8._16_4_ = param_3;
  auVar8._20_4_ = param_3;
  auVar8._24_4_ = param_3;
  auVar8._28_4_ = param_3;
  auVar5 = vminps_avx(auVar5,auVar8);
  auVar5 = vmaskmovps_avx(auVar9,auVar5);
  *(undefined1 (*) [32])(param_1 + (iVar2 << 2)) = auVar5;
  return;
}

// ArrayMinMaxNormalize_avx2 @ 140a20c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMinMaxNormalize_avx2(undefined4 *param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  float fVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  uVar2 = *param_1;
  auVar12._4_4_ = uVar2;
  auVar12._0_4_ = uVar2;
  auVar12._8_4_ = uVar2;
  auVar12._12_4_ = uVar2;
  auVar12._16_4_ = uVar2;
  auVar12._20_4_ = uVar2;
  auVar12._24_4_ = uVar2;
  auVar12._28_4_ = uVar2;
  uVar10 = param_3 + 6;
  if (-1 < (int)(param_3 - 1)) {
    uVar10 = param_3 - 1;
  }
  uVar10 = uVar10 & 0xfffffff8 | 1;
  uVar9 = 1;
  auVar13 = auVar12;
  if ((int)uVar10 < 2) {
    if ((int)param_3 < 2) goto LAB_140a20cb5;
  }
  else {
    uVar9 = 1;
    uVar11 = 4;
    do {
      auVar12 = vmaxps_avx(auVar12,*(undefined1 (*) [32])((longlong)param_1 + (ulonglong)uVar11));
      auVar13 = vminps_avx(auVar13,*(undefined1 (*) [32])((longlong)param_1 + (ulonglong)uVar11));
      uVar9 = uVar9 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar9 < uVar10);
    if ((int)param_3 <= (int)uVar9) goto LAB_140a20cb5;
  }
  iVar8 = (int)uVar9;
  auVar4._0_4_ = iVar8 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar4._4_4_ = iVar8 + _UNK_150b50ae4;
  auVar4._8_4_ = iVar8 + _UNK_150b50ae8;
  auVar4._12_4_ = iVar8 + _UNK_150b50aec;
  auVar4._16_4_ = iVar8 + _UNK_150b50af0;
  auVar4._20_4_ = iVar8 + _UNK_150b50af4;
  auVar4._24_4_ = iVar8 + _UNK_150b50af8;
  auVar4._28_4_ = iVar8 + _UNK_150b50afc;
  auVar18._4_4_ = param_3;
  auVar18._0_4_ = param_3;
  auVar18._8_4_ = param_3;
  auVar18._12_4_ = param_3;
  auVar18._16_4_ = param_3;
  auVar18._20_4_ = param_3;
  auVar18._24_4_ = param_3;
  auVar18._28_4_ = param_3;
  auVar16 = vpcmpgtd_avx2(auVar18,auVar4);
  auVar18 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])
                                    ((longlong)param_1 + (longlong)(iVar8 << 2)));
  auVar4 = vmaxps_avx(auVar12,auVar18);
  auVar12 = vblendvps_avx(auVar12,auVar4,auVar16);
  auVar4 = vminps_avx(auVar13,auVar18);
  auVar13 = vblendvps_avx(auVar13,auVar4,auVar16);
LAB_140a20cb5:
  auVar3 = vmaxps_avx(auVar12._16_16_,auVar12._0_16_);
  auVar5 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vmaxps_avx(auVar5,auVar3);
  auVar5 = vmovshdup_avx(auVar3);
  auVar3 = vmaxss_avx(auVar5,auVar3);
  auVar5 = vminps_avx(auVar13._16_16_,auVar13._0_16_);
  auVar6 = vshufpd_avx(auVar5,auVar5,1);
  auVar5 = vminps_avx(auVar6,auVar5);
  auVar6 = vmovshdup_avx(auVar5);
  auVar5 = vminss_avx(auVar5,auVar6);
  auVar13._0_4_ = auVar5._0_4_;
  auVar3 = vmaxss_avx(ZEXT416((uint)(auVar3._0_4_ - auVar13._0_4_)),ZEXT416(__real_322bcc77));
  fVar15 = __real_3f800000 / auVar3._0_4_;
  uVar10 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar10 = param_3;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar16._4_4_ = auVar13._0_4_;
    auVar16._0_4_ = auVar13._0_4_;
    auVar16._8_4_ = auVar13._0_4_;
    auVar16._12_4_ = auVar13._0_4_;
    auVar16._16_4_ = auVar13._0_4_;
    auVar16._20_4_ = auVar13._0_4_;
    auVar16._24_4_ = auVar13._0_4_;
    auVar16._28_4_ = auVar13._0_4_;
    uVar11 = 0;
    uVar9 = 0;
    do {
      auVar12 = vsubps_avx(*(undefined1 (*) [32])((longlong)param_1 + (ulonglong)uVar11),auVar16);
      pfVar1 = (float *)(param_2 + (ulonglong)uVar11);
      *pfVar1 = fVar15 * auVar12._0_4_;
      pfVar1[1] = fVar15 * auVar12._4_4_;
      pfVar1[2] = fVar15 * auVar12._8_4_;
      pfVar1[3] = fVar15 * auVar12._12_4_;
      pfVar1[4] = fVar15 * auVar12._16_4_;
      pfVar1[5] = fVar15 * auVar12._20_4_;
      pfVar1[6] = fVar15 * auVar12._24_4_;
      pfVar1[7] = fVar15 * auVar12._28_4_;
      uVar9 = uVar9 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar9 < (uVar10 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar9) {
      return;
    }
  }
  iVar8 = (int)uVar9;
  auVar17._4_4_ = iVar8;
  auVar17._0_4_ = iVar8;
  auVar17._8_4_ = iVar8;
  auVar17._12_4_ = iVar8;
  auVar17._16_4_ = iVar8;
  auVar17._20_4_ = iVar8;
  auVar17._24_4_ = iVar8;
  auVar17._28_4_ = iVar8;
  auVar7._4_4_ = _UNK_150b50ae4;
  auVar7._0_4_ = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar7._8_4_ = _UNK_150b50ae8;
  auVar7._12_4_ = _UNK_150b50aec;
  auVar7._16_4_ = _UNK_150b50af0;
  auVar7._20_4_ = _UNK_150b50af4;
  auVar7._24_4_ = _UNK_150b50af8;
  auVar7._28_4_ = _UNK_150b50afc;
  auVar12 = vpor_avx2(auVar17,auVar7);
  auVar19._4_4_ = param_3;
  auVar19._0_4_ = param_3;
  auVar19._8_4_ = param_3;
  auVar19._12_4_ = param_3;
  auVar19._16_4_ = param_3;
  auVar19._20_4_ = param_3;
  auVar19._24_4_ = param_3;
  auVar19._28_4_ = param_3;
  auVar4 = vpcmpgtd_avx2(auVar19,auVar12);
  auVar12 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])((longlong)param_1 + (longlong)(iVar8 << 2))
                          );
  auVar13._4_4_ = auVar13._0_4_;
  auVar13._8_4_ = auVar13._0_4_;
  auVar13._12_4_ = auVar13._0_4_;
  auVar13._16_4_ = auVar13._0_4_;
  auVar13._20_4_ = auVar13._0_4_;
  auVar13._24_4_ = auVar13._0_4_;
  auVar13._28_4_ = auVar13._0_4_;
  auVar12 = vsubps_avx(auVar12,auVar13);
  auVar14._0_4_ = fVar15 * auVar12._0_4_;
  auVar14._4_4_ = fVar15 * auVar12._4_4_;
  auVar14._8_4_ = fVar15 * auVar12._8_4_;
  auVar14._12_4_ = fVar15 * auVar12._12_4_;
  auVar14._16_4_ = fVar15 * auVar12._16_4_;
  auVar14._20_4_ = fVar15 * auVar12._20_4_;
  auVar14._24_4_ = fVar15 * auVar12._24_4_;
  auVar14._28_4_ = fVar15 * auVar12._28_4_;
  auVar12 = vmaskmovps_avx(auVar4,auVar14);
  *(undefined1 (*) [32])(param_2 + (iVar8 << 2)) = auVar12;
  return;
}

// ArrayMultiply_avx2 @ 140a20dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiply_avx2(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar21 = 0;
    do {
      uVar23 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar23);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar23);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar23);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar5 * fVar12;
      pfVar3[2] = fVar6 * fVar13;
      pfVar3[3] = fVar7 * fVar14;
      pfVar3[4] = fVar8 * fVar15;
      pfVar3[5] = fVar9 * fVar16;
      pfVar3[6] = fVar10 * fVar17;
      pfVar3[7] = fVar11 * fVar18;
      uVar21 = uVar21 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_4;
  auVar26._0_4_ = param_4;
  auVar26._8_4_ = param_4;
  auVar26._12_4_ = param_4;
  auVar26._16_4_ = param_4;
  auVar26._20_4_ = param_4;
  auVar26._24_4_ = param_4;
  auVar26._28_4_ = param_4;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ * auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_3 + lVar22) = auVar25;
  return;
}

// ArrayMultiplyInPlace_avx2 @ 140a20e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyInPlace_avx2(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar19 = param_3;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar23 = 0;
    uVar21 = 0;
    do {
      uVar24 = (ulonglong)uVar23;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar24);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar24);
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar5 * fVar12;
      pfVar3[2] = fVar6 * fVar13;
      pfVar3[3] = fVar7 * fVar14;
      pfVar3[4] = fVar8 * fVar15;
      pfVar3[5] = fVar9 * fVar16;
      pfVar3[6] = fVar10 * fVar17;
      pfVar3[7] = fVar11 * fVar18;
      uVar21 = uVar21 + 8;
      uVar23 = uVar23 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_3;
  auVar26._0_4_ = param_3;
  auVar26._8_4_ = param_3;
  auVar26._12_4_ = param_3;
  auVar26._16_4_ = param_3;
  auVar26._20_4_ = param_3;
  auVar26._24_4_ = param_3;
  auVar26._28_4_ = param_3;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ * auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_2 + lVar22) = auVar25;
  return;
}

// ArrayComplexMultiplyInPlace_avx2 @ 140a20ef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyInPlace_avx2(longlong param_1,longlong param_2,uint param_3)

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
        auVar5 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
        auVar4 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
        auVar6 = vshufps_avx(auVar3,auVar3,0xb1);
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
        auVar5 = vmovsldup_avx(auVar3);
        auVar3 = vmovshdup_avx(auVar3);
        auVar6 = vshufps_avx(auVar4,auVar4,0xb1);
        pfVar2 = (float *)(param_2 + 0x20 + uVar9);
        *pfVar2 = auVar4._0_4_ * auVar5._0_4_ + auVar3._0_4_ * auVar6._0_4_ * fVar12;
        pfVar2[1] = auVar4._4_4_ * auVar5._4_4_ + auVar3._4_4_ * auVar6._4_4_ * fVar13;
        pfVar2[2] = auVar4._8_4_ * auVar5._8_4_ + auVar3._8_4_ * auVar6._8_4_ * fVar12;
        pfVar2[3] = auVar4._12_4_ * auVar5._12_4_ + auVar3._12_4_ * auVar6._12_4_ * fVar13;
        pfVar2[4] = auVar4._16_4_ * auVar5._16_4_ + auVar3._16_4_ * auVar6._16_4_ * fVar12;
        pfVar2[5] = auVar4._20_4_ * auVar5._20_4_ + auVar3._20_4_ * auVar6._20_4_ * fVar13;
        pfVar2[6] = auVar4._24_4_ * auVar5._24_4_ + auVar3._24_4_ * auVar6._24_4_ * fVar12;
        pfVar2[7] = auVar4._28_4_ * auVar5._28_4_ + auVar3._28_4_ * auVar6._28_4_ * fVar13;
        uVar10 = uVar10 + 0x40;
        uVar11 = uVar11 - 2;
      } while (uVar11 != 0);
      if ((uVar1 & 8) != 0) goto LAB_140a20fcf;
      uVar9 = (ulonglong)uVar10;
    }
    auVar3 = *(undefined1 (*) [32])(param_2 + uVar9);
    auVar4 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
    auVar6 = vshufps_avx(auVar3,auVar3,0xb1);
    fVar12 = auVar4._4_4_ * auVar6._4_4_ * _UNK_150d5a824;
    fVar13 = auVar4._8_4_ * auVar6._8_4_ * _UNK_150d5a828;
    fVar14 = auVar4._12_4_ * auVar6._12_4_ * _UNK_150d5a82c;
    fVar15 = auVar4._16_4_ * auVar6._16_4_ * _UNK_150d5a830;
    fVar16 = auVar4._20_4_ * auVar6._20_4_ * _UNK_150d5a834;
    fVar17 = auVar4._24_4_ * auVar6._24_4_ * _UNK_150d5a838;
    fVar18 = auVar4._28_4_ * auVar6._28_4_ * _UNK_150d5a83c;
    auVar5 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar9));
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
LAB_140a20fcf:
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

// ArrayComplexMultiplyAdd_avx2 @ 140a21030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyAdd_avx2(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  
  fVar15 = __real_3f800000bf800000._4_4_;
  fVar14 = (float)__real_3f800000bf800000;
  uVar16 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar16 = param_4;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar18 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar21 = 0;
    uVar18 = 0;
    do {
      uVar20 = (ulonglong)uVar21;
      auVar22 = *(undefined1 (*) [32])(param_2 + uVar20);
      auVar3 = vmovsldup_avx(*(undefined1 (*) [32])(param_1 + uVar20));
      auVar23 = vmovshdup_avx(*(undefined1 (*) [32])(param_1 + uVar20));
      auVar4 = vshufps_avx(auVar22,auVar22,0xb1);
      pfVar1 = (float *)(param_3 + uVar20);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar10 = pfVar1[4];
      fVar11 = pfVar1[5];
      fVar12 = pfVar1[6];
      fVar13 = pfVar1[7];
      pfVar2 = (float *)(param_3 + uVar20);
      *pfVar2 = auVar22._0_4_ * auVar3._0_4_ + auVar23._0_4_ * auVar4._0_4_ * fVar14 + *pfVar1;
      pfVar2[1] = auVar22._4_4_ * auVar3._4_4_ + auVar23._4_4_ * auVar4._4_4_ * fVar15 + fVar7;
      pfVar2[2] = auVar22._8_4_ * auVar3._8_4_ + auVar23._8_4_ * auVar4._8_4_ * fVar14 + fVar8;
      pfVar2[3] = auVar22._12_4_ * auVar3._12_4_ + auVar23._12_4_ * auVar4._12_4_ * fVar15 + fVar9;
      pfVar2[4] = auVar22._16_4_ * auVar3._16_4_ + auVar23._16_4_ * auVar4._16_4_ * fVar14 + fVar10;
      pfVar2[5] = auVar22._20_4_ * auVar3._20_4_ + auVar23._20_4_ * auVar4._20_4_ * fVar15 + fVar11;
      pfVar2[6] = auVar22._24_4_ * auVar3._24_4_ + auVar23._24_4_ * auVar4._24_4_ * fVar14 + fVar12;
      pfVar2[7] = auVar22._28_4_ * auVar3._28_4_ + auVar23._28_4_ * auVar4._28_4_ * fVar15 + fVar13;
      uVar18 = uVar18 + 8;
      uVar21 = uVar21 + 0x20;
    } while (uVar18 < (uVar16 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar18) {
      return;
    }
  }
  iVar17 = (int)uVar18;
  auVar22._4_4_ = iVar17;
  auVar22._0_4_ = iVar17;
  auVar22._8_4_ = iVar17;
  auVar22._12_4_ = iVar17;
  auVar22._16_4_ = iVar17;
  auVar22._20_4_ = iVar17;
  auVar22._24_4_ = iVar17;
  auVar22._28_4_ = iVar17;
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar23._4_4_ = param_4;
  auVar23._0_4_ = param_4;
  auVar23._8_4_ = param_4;
  auVar23._12_4_ = param_4;
  auVar23._16_4_ = param_4;
  auVar23._20_4_ = param_4;
  auVar23._24_4_ = param_4;
  auVar23._28_4_ = param_4;
  auVar6 = vpcmpgtd_avx2(auVar23,auVar22);
  lVar19 = (longlong)(iVar17 << 2);
  auVar22 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_1 + lVar19));
  auVar4 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_2 + lVar19));
  auVar23 = vmovsldup_avx(auVar22);
  auVar22 = vmovshdup_avx(auVar22);
  auVar3 = vshufps_avx(auVar4,auVar4,0xb1);
  auVar5 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_3 + lVar19));
  auVar24._0_4_ =
       auVar5._0_4_ +
       auVar4._0_4_ * auVar23._0_4_ +
       auVar22._0_4_ * auVar3._0_4_ *
       ___ymm_3f800000bf8000003f800000bf8000003f800000bf8000003f800000bf800000;
  auVar24._4_4_ =
       auVar5._4_4_ + auVar4._4_4_ * auVar23._4_4_ + auVar22._4_4_ * auVar3._4_4_ * _UNK_150d5a824;
  auVar24._8_4_ =
       auVar5._8_4_ + auVar4._8_4_ * auVar23._8_4_ + auVar22._8_4_ * auVar3._8_4_ * _UNK_150d5a828;
  auVar24._12_4_ =
       auVar5._12_4_ +
       auVar4._12_4_ * auVar23._12_4_ + auVar22._12_4_ * auVar3._12_4_ * _UNK_150d5a82c;
  auVar24._16_4_ =
       auVar5._16_4_ +
       auVar4._16_4_ * auVar23._16_4_ + auVar22._16_4_ * auVar3._16_4_ * _UNK_150d5a830;
  auVar24._20_4_ =
       auVar5._20_4_ +
       auVar4._20_4_ * auVar23._20_4_ + auVar22._20_4_ * auVar3._20_4_ * _UNK_150d5a834;
  auVar24._24_4_ =
       auVar5._24_4_ +
       auVar4._24_4_ * auVar23._24_4_ + auVar22._24_4_ * auVar3._24_4_ * _UNK_150d5a838;
  auVar24._28_4_ =
       auVar5._28_4_ +
       auVar4._28_4_ * auVar23._28_4_ + auVar22._28_4_ * auVar3._28_4_ * _UNK_150d5a83c;
  auVar22 = vmaskmovps_avx(auVar6,auVar24);
  *(undefined1 (*) [32])(param_3 + lVar19) = auVar22;
  return;
}

// ArrayMultiplyByConstant_avx2 @ 140a21120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyByConstant_avx2(longlong param_1,float param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar10 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar10 = param_4;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_3 + (ulonglong)uVar13);
      *pfVar2 = param_2 * *pfVar1;
      pfVar2[1] = param_2 * fVar3;
      pfVar2[2] = param_2 * fVar4;
      pfVar2[3] = param_2 * fVar5;
      pfVar2[4] = param_2 * fVar6;
      pfVar2[5] = param_2 * fVar7;
      pfVar2[6] = param_2 * fVar8;
      pfVar2[7] = param_2 * fVar9;
      uVar12 = uVar12 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar12 < (uVar10 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar14._4_4_ = iVar11;
  auVar14._0_4_ = iVar11;
  auVar14._8_4_ = iVar11;
  auVar14._12_4_ = iVar11;
  auVar14._16_4_ = iVar11;
  auVar14._20_4_ = iVar11;
  auVar14._24_4_ = iVar11;
  auVar14._28_4_ = iVar11;
  auVar14 = vpor_avx2(auVar14,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar16._4_4_ = param_4;
  auVar16._0_4_ = param_4;
  auVar16._8_4_ = param_4;
  auVar16._12_4_ = param_4;
  auVar16._16_4_ = param_4;
  auVar16._20_4_ = param_4;
  auVar16._24_4_ = param_4;
  auVar16._28_4_ = param_4;
  auVar16 = vpcmpgtd_avx2(auVar16,auVar14);
  auVar14 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_1 + (iVar11 << 2)));
  auVar15._0_4_ = param_2 * auVar14._0_4_;
  auVar15._4_4_ = param_2 * auVar14._4_4_;
  auVar15._8_4_ = param_2 * auVar14._8_4_;
  auVar15._12_4_ = param_2 * auVar14._12_4_;
  auVar15._16_4_ = param_2 * auVar14._16_4_;
  auVar15._20_4_ = param_2 * auVar14._20_4_;
  auVar15._24_4_ = param_2 * auVar14._24_4_;
  auVar15._28_4_ = param_2 * auVar14._28_4_;
  auVar14 = vmaskmovps_avx(auVar16,auVar15);
  *(undefined1 (*) [32])(param_3 + (iVar11 << 2)) = auVar14;
  return;
}

// ArrayMultiplyByConstantInPlace_avx2 @ 140a211b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyByConstantInPlace_avx2(longlong param_1,uint param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar10 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar10 = param_2;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar13);
      *pfVar2 = param_3 * *pfVar1;
      pfVar2[1] = param_3 * fVar3;
      pfVar2[2] = param_3 * fVar4;
      pfVar2[3] = param_3 * fVar5;
      pfVar2[4] = param_3 * fVar6;
      pfVar2[5] = param_3 * fVar7;
      pfVar2[6] = param_3 * fVar8;
      pfVar2[7] = param_3 * fVar9;
      uVar12 = uVar12 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar12 < (uVar10 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar14._4_4_ = iVar11;
  auVar14._0_4_ = iVar11;
  auVar14._8_4_ = iVar11;
  auVar14._12_4_ = iVar11;
  auVar14._16_4_ = iVar11;
  auVar14._20_4_ = iVar11;
  auVar14._24_4_ = iVar11;
  auVar14._28_4_ = iVar11;
  auVar14 = vpor_avx2(auVar14,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar15._4_4_ = param_2;
  auVar15._0_4_ = param_2;
  auVar15._8_4_ = param_2;
  auVar15._12_4_ = param_2;
  auVar15._16_4_ = param_2;
  auVar15._20_4_ = param_2;
  auVar15._24_4_ = param_2;
  auVar15._28_4_ = param_2;
  auVar15 = vpcmpgtd_avx2(auVar15,auVar14);
  auVar14 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + (iVar11 << 2)));
  auVar16._0_4_ = param_3 * auVar14._0_4_;
  auVar16._4_4_ = param_3 * auVar14._4_4_;
  auVar16._8_4_ = param_3 * auVar14._8_4_;
  auVar16._12_4_ = param_3 * auVar14._12_4_;
  auVar16._16_4_ = param_3 * auVar14._16_4_;
  auVar16._20_4_ = param_3 * auVar14._20_4_;
  auVar16._24_4_ = param_3 * auVar14._24_4_;
  auVar16._28_4_ = param_3 * auVar14._28_4_;
  auVar14 = vmaskmovps_avx(auVar15,auVar16);
  *(undefined1 (*) [32])(param_1 + (iVar11 << 2)) = auVar14;
  return;
}

// ArrayAddInPlace_avx2 @ 140a21240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAddInPlace_avx2(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar19 = param_3;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar23 = 0;
    uVar21 = 0;
    do {
      uVar24 = (ulonglong)uVar23;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar24);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar24);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar5 + fVar12;
      pfVar3[2] = fVar6 + fVar13;
      pfVar3[3] = fVar7 + fVar14;
      pfVar3[4] = fVar8 + fVar15;
      pfVar3[5] = fVar9 + fVar16;
      pfVar3[6] = fVar10 + fVar17;
      pfVar3[7] = fVar11 + fVar18;
      uVar21 = uVar21 + 8;
      uVar23 = uVar23 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_3;
  auVar26._0_4_ = param_3;
  auVar26._8_4_ = param_3;
  auVar26._12_4_ = param_3;
  auVar26._16_4_ = param_3;
  auVar26._20_4_ = param_3;
  auVar26._24_4_ = param_3;
  auVar26._28_4_ = param_3;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ + auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ + auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ + auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ + auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ + auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ + auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ + auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ + auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_2 + lVar22) = auVar25;
  return;
}

// ArrayAddConstantInplace_avx2 @ 140a212e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAddConstantInplace_avx2(longlong param_1,uint param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar10 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar10 = param_2;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar13);
      *pfVar2 = param_3 + *pfVar1;
      pfVar2[1] = param_3 + fVar3;
      pfVar2[2] = param_3 + fVar4;
      pfVar2[3] = param_3 + fVar5;
      pfVar2[4] = param_3 + fVar6;
      pfVar2[5] = param_3 + fVar7;
      pfVar2[6] = param_3 + fVar8;
      pfVar2[7] = param_3 + fVar9;
      uVar12 = uVar12 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar12 < (uVar10 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar14._4_4_ = iVar11;
  auVar14._0_4_ = iVar11;
  auVar14._8_4_ = iVar11;
  auVar14._12_4_ = iVar11;
  auVar14._16_4_ = iVar11;
  auVar14._20_4_ = iVar11;
  auVar14._24_4_ = iVar11;
  auVar14._28_4_ = iVar11;
  auVar14 = vpor_avx2(auVar14,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar15._4_4_ = param_2;
  auVar15._0_4_ = param_2;
  auVar15._8_4_ = param_2;
  auVar15._12_4_ = param_2;
  auVar15._16_4_ = param_2;
  auVar15._20_4_ = param_2;
  auVar15._24_4_ = param_2;
  auVar15._28_4_ = param_2;
  auVar15 = vpcmpgtd_avx2(auVar15,auVar14);
  auVar14 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + (iVar11 << 2)));
  auVar16._0_4_ = param_3 + auVar14._0_4_;
  auVar16._4_4_ = param_3 + auVar14._4_4_;
  auVar16._8_4_ = param_3 + auVar14._8_4_;
  auVar16._12_4_ = param_3 + auVar14._12_4_;
  auVar16._16_4_ = param_3 + auVar14._16_4_;
  auVar16._20_4_ = param_3 + auVar14._20_4_;
  auVar16._24_4_ = param_3 + auVar14._24_4_;
  auVar16._28_4_ = param_3 + auVar14._28_4_;
  auVar14 = vmaskmovps_avx(auVar15,auVar16);
  *(undefined1 (*) [32])(param_1 + (iVar11 << 2)) = auVar14;
  return;
}

// ArrayMultiplyAddInPlace_avx2 @ 140a21370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyAddInPlace_avx2(longlong param_1,float param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar23 = 0;
    uVar21 = 0;
    do {
      uVar24 = (ulonglong)uVar23;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_3 + uVar24);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar24);
      *pfVar3 = param_2 * *pfVar1 + *pfVar2;
      pfVar3[1] = param_2 * fVar12 + fVar4;
      pfVar3[2] = param_2 * fVar13 + fVar5;
      pfVar3[3] = param_2 * fVar14 + fVar6;
      pfVar3[4] = param_2 * fVar15 + fVar7;
      pfVar3[5] = param_2 * fVar16 + fVar8;
      pfVar3[6] = param_2 * fVar17 + fVar9;
      pfVar3[7] = param_2 * fVar18 + fVar10;
      uVar21 = uVar21 + 8;
      uVar23 = uVar23 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_4;
  auVar26._0_4_ = param_4;
  auVar26._8_4_ = param_4;
  auVar26._12_4_ = param_4;
  auVar26._16_4_ = param_4;
  auVar26._20_4_ = param_4;
  auVar26._24_4_ = param_4;
  auVar26._28_4_ = param_4;
  auVar11 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_3 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ * param_2 + auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * param_2 + auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * param_2 + auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * param_2 + auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * param_2 + auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * param_2 + auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * param_2 + auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * param_2 + auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar11,auVar27);
  *(undefined1 (*) [32])(param_3 + lVar22) = auVar25;
  return;
}

// ArrayLerpAddInPlace_avx2 @ 140a21410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpAddInPlace_avx2
               (longlong param_1,float param_2,float param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  uint uVar20;
  undefined4 uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar31 [32];
  
  auVar28 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar27._0_4_ = (float)(int)(param_5 - 1);
  auVar27._4_12_ = in_ZMM3._4_12_;
  auVar27 = vmaxss_avx(auVar27,ZEXT416(__real_3f800000));
  fVar26 = (param_3 - param_2) / auVar27._0_4_;
  uVar20 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar20 = param_5;
  }
  if ((int)(uVar20 & 0xfffffff8) < 1) {
    uVar23 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar23 = 0;
    do {
      uVar21 = (undefined4)uVar23;
      auVar31._4_4_ = uVar21;
      auVar31._0_4_ = uVar21;
      auVar31._8_4_ = uVar21;
      auVar31._12_4_ = uVar21;
      auVar31._16_4_ = uVar21;
      auVar31._20_4_ = uVar21;
      auVar31._24_4_ = uVar21;
      auVar31._28_4_ = uVar21;
      auVar31 = vpor_avx2(auVar31,auVar28);
      auVar31 = vcvtdq2ps_avx(auVar31);
      uVar25 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar25);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_4 + uVar25);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_4 + uVar25);
      *pfVar3 = (fVar26 * auVar31._0_4_ + param_2) * *pfVar1 + *pfVar2;
      pfVar3[1] = (fVar26 * auVar31._4_4_ + param_2) * fVar12 + fVar4;
      pfVar3[2] = (fVar26 * auVar31._8_4_ + param_2) * fVar13 + fVar5;
      pfVar3[3] = (fVar26 * auVar31._12_4_ + param_2) * fVar14 + fVar6;
      pfVar3[4] = (fVar26 * auVar31._16_4_ + param_2) * fVar15 + fVar7;
      pfVar3[5] = (fVar26 * auVar31._20_4_ + param_2) * fVar16 + fVar8;
      pfVar3[6] = (fVar26 * auVar31._24_4_ + param_2) * fVar17 + fVar9;
      pfVar3[7] = (fVar26 * auVar31._28_4_ + param_2) * fVar18 + fVar10;
      uVar23 = uVar23 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar23 < (uVar20 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar23) {
      return;
    }
  }
  iVar22 = (int)uVar23;
  auVar28._4_4_ = iVar22;
  auVar28._0_4_ = iVar22;
  auVar28._8_4_ = iVar22;
  auVar28._12_4_ = iVar22;
  auVar28._16_4_ = iVar22;
  auVar28._20_4_ = iVar22;
  auVar28._24_4_ = iVar22;
  auVar28._28_4_ = iVar22;
  auVar28 = vpor_avx2(auVar28,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar30._4_4_ = param_5;
  auVar30._0_4_ = param_5;
  auVar30._8_4_ = param_5;
  auVar30._12_4_ = param_5;
  auVar30._16_4_ = param_5;
  auVar30._20_4_ = param_5;
  auVar30._24_4_ = param_5;
  auVar30._28_4_ = param_5;
  auVar11 = vpcmpgtd_avx2(auVar30,auVar28);
  auVar28 = vcvtdq2ps_avx(auVar28);
  lVar19 = (longlong)(iVar22 << 2);
  auVar31 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar19));
  auVar30 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_4 + lVar19));
  auVar29._0_4_ = (auVar28._0_4_ * fVar26 + param_2) * auVar31._0_4_ + auVar30._0_4_;
  auVar29._4_4_ = (auVar28._4_4_ * fVar26 + param_2) * auVar31._4_4_ + auVar30._4_4_;
  auVar29._8_4_ = (auVar28._8_4_ * fVar26 + param_2) * auVar31._8_4_ + auVar30._8_4_;
  auVar29._12_4_ = (auVar28._12_4_ * fVar26 + param_2) * auVar31._12_4_ + auVar30._12_4_;
  auVar29._16_4_ = (auVar28._16_4_ * fVar26 + param_2) * auVar31._16_4_ + auVar30._16_4_;
  auVar29._20_4_ = (auVar28._20_4_ * fVar26 + param_2) * auVar31._20_4_ + auVar30._20_4_;
  auVar29._24_4_ = (auVar28._24_4_ * fVar26 + param_2) * auVar31._24_4_ + auVar30._24_4_;
  auVar29._28_4_ = (auVar28._28_4_ * fVar26 + param_2) * auVar31._28_4_ + auVar30._28_4_;
  auVar28 = vmaskmovps_avx(auVar11,auVar29);
  *(undefined1 (*) [32])(param_4 + lVar19) = auVar28;
  return;
}

// ArraySubtract_avx2 @ 140a21510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtract_avx2(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [32];
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  
  uVar2 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar2 = param_4;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar6 = (ulonglong)uVar7;
      auVar8 = vsubps_avx(*(undefined1 (*) [32])(param_1 + uVar6),
                          *(undefined1 (*) [32])(param_2 + uVar6));
      *(undefined1 (*) [32])(param_3 + uVar6) = auVar8;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar8._4_4_ = iVar3;
  auVar8._0_4_ = iVar3;
  auVar8._8_4_ = iVar3;
  auVar8._12_4_ = iVar3;
  auVar8._16_4_ = iVar3;
  auVar8._20_4_ = iVar3;
  auVar8._24_4_ = iVar3;
  auVar8._28_4_ = iVar3;
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9._4_4_ = param_4;
  auVar9._0_4_ = param_4;
  auVar9._8_4_ = param_4;
  auVar9._12_4_ = param_4;
  auVar9._16_4_ = param_4;
  auVar9._20_4_ = param_4;
  auVar9._24_4_ = param_4;
  auVar9._28_4_ = param_4;
  auVar1 = vpcmpgtd_avx2(auVar9,auVar8);
  lVar5 = (longlong)(iVar3 << 2);
  auVar8 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar9 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar9);
  auVar8 = vmaskmovps_avx(auVar1,auVar8);
  *(undefined1 (*) [32])(param_3 + lVar5) = auVar8;
  return;
}

// ArraySubtractInPlace1_avx2 @ 140a215a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractInPlace1_avx2(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [32];
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar8 = vsubps_avx(*(undefined1 (*) [32])(param_1 + uVar7),
                          *(undefined1 (*) [32])(param_2 + uVar7));
      *(undefined1 (*) [32])(param_2 + uVar7) = auVar8;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar8._4_4_ = iVar3;
  auVar8._0_4_ = iVar3;
  auVar8._8_4_ = iVar3;
  auVar8._12_4_ = iVar3;
  auVar8._16_4_ = iVar3;
  auVar8._20_4_ = iVar3;
  auVar8._24_4_ = iVar3;
  auVar8._28_4_ = iVar3;
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9._4_4_ = param_3;
  auVar9._0_4_ = param_3;
  auVar9._8_4_ = param_3;
  auVar9._12_4_ = param_3;
  auVar9._16_4_ = param_3;
  auVar9._20_4_ = param_3;
  auVar9._24_4_ = param_3;
  auVar9._28_4_ = param_3;
  auVar1 = vpcmpgtd_avx2(auVar9,auVar8);
  lVar5 = (longlong)(iVar3 << 2);
  auVar8 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar9 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar9);
  auVar8 = vmaskmovps_avx(auVar1,auVar8);
  *(undefined1 (*) [32])(param_2 + lVar5) = auVar8;
  return;
}

// ArraySubtractInPlace2_avx2 @ 140a21640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractInPlace2_avx2(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [32];
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar8 = vsubps_avx(*(undefined1 (*) [32])(param_1 + uVar7),
                          *(undefined1 (*) [32])(param_2 + uVar7));
      *(undefined1 (*) [32])(param_1 + uVar7) = auVar8;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar8._4_4_ = iVar3;
  auVar8._0_4_ = iVar3;
  auVar8._8_4_ = iVar3;
  auVar8._12_4_ = iVar3;
  auVar8._16_4_ = iVar3;
  auVar8._20_4_ = iVar3;
  auVar8._24_4_ = iVar3;
  auVar8._28_4_ = iVar3;
  auVar8 = vpor_avx2(auVar8,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9._4_4_ = param_3;
  auVar9._0_4_ = param_3;
  auVar9._8_4_ = param_3;
  auVar9._12_4_ = param_3;
  auVar9._16_4_ = param_3;
  auVar9._20_4_ = param_3;
  auVar9._24_4_ = param_3;
  auVar9._28_4_ = param_3;
  auVar1 = vpcmpgtd_avx2(auVar9,auVar8);
  lVar5 = (longlong)(iVar3 << 2);
  auVar8 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar9 = vmaskmovps_avx(auVar1,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar9);
  auVar8 = vmaskmovps_avx(auVar1,auVar8);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArraySubtractByConstantInPlace_avx2 @ 140a216e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractByConstantInPlace_avx2(longlong param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  
  uVar1 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar1 = param_3;
  }
  if ((int)(uVar1 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar5._4_4_ = param_2;
    auVar5._0_4_ = param_2;
    auVar5._8_4_ = param_2;
    auVar5._12_4_ = param_2;
    auVar5._16_4_ = param_2;
    auVar5._20_4_ = param_2;
    auVar5._24_4_ = param_2;
    auVar5._28_4_ = param_2;
    uVar4 = 0;
    uVar3 = 0;
    do {
      auVar6 = vsubps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar4),auVar5);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar4) = auVar6;
      uVar3 = uVar3 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar3 < (uVar1 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar3) {
      return;
    }
  }
  iVar2 = (int)uVar3;
  auVar6._4_4_ = iVar2;
  auVar6._0_4_ = iVar2;
  auVar6._8_4_ = iVar2;
  auVar6._12_4_ = iVar2;
  auVar6._16_4_ = iVar2;
  auVar6._20_4_ = iVar2;
  auVar6._24_4_ = iVar2;
  auVar6._28_4_ = iVar2;
  auVar5 = vpor_avx2(auVar6,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar8._4_4_ = param_3;
  auVar8._0_4_ = param_3;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = param_3;
  auVar8._16_4_ = param_3;
  auVar8._20_4_ = param_3;
  auVar8._24_4_ = param_3;
  auVar8._28_4_ = param_3;
  auVar6 = vpcmpgtd_avx2(auVar8,auVar5);
  auVar7._4_4_ = param_2;
  auVar7._0_4_ = param_2;
  auVar7._8_4_ = param_2;
  auVar7._12_4_ = param_2;
  auVar7._16_4_ = param_2;
  auVar7._20_4_ = param_2;
  auVar7._24_4_ = param_2;
  auVar7._28_4_ = param_2;
  auVar5 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_1 + (iVar2 << 2)));
  auVar5 = vsubps_avx(auVar5,auVar7);
  auVar5 = vmaskmovps_avx(auVar6,auVar5);
  *(undefined1 (*) [32])(param_1 + (iVar2 << 2)) = auVar5;
  return;
}

// ArraySquare_avx2 @ 140a21770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySquare_avx2(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar10 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar10 = param_3;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_2 + (ulonglong)uVar13);
      *pfVar2 = *pfVar1 * *pfVar1;
      pfVar2[1] = fVar3 * fVar3;
      pfVar2[2] = fVar4 * fVar4;
      pfVar2[3] = fVar5 * fVar5;
      pfVar2[4] = fVar6 * fVar6;
      pfVar2[5] = fVar7 * fVar7;
      pfVar2[6] = fVar8 * fVar8;
      pfVar2[7] = fVar9 * fVar9;
      uVar12 = uVar12 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar12 < (uVar10 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar14._4_4_ = iVar11;
  auVar14._0_4_ = iVar11;
  auVar14._8_4_ = iVar11;
  auVar14._12_4_ = iVar11;
  auVar14._16_4_ = iVar11;
  auVar14._20_4_ = iVar11;
  auVar14._24_4_ = iVar11;
  auVar14._28_4_ = iVar11;
  auVar14 = vpor_avx2(auVar14,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar15._4_4_ = param_3;
  auVar15._0_4_ = param_3;
  auVar15._8_4_ = param_3;
  auVar15._12_4_ = param_3;
  auVar15._16_4_ = param_3;
  auVar15._20_4_ = param_3;
  auVar15._24_4_ = param_3;
  auVar15._28_4_ = param_3;
  auVar15 = vpcmpgtd_avx2(auVar15,auVar14);
  auVar14 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + (iVar11 << 2)));
  auVar16._0_4_ = auVar14._0_4_ * auVar14._0_4_;
  auVar16._4_4_ = auVar14._4_4_ * auVar14._4_4_;
  auVar16._8_4_ = auVar14._8_4_ * auVar14._8_4_;
  auVar16._12_4_ = auVar14._12_4_ * auVar14._12_4_;
  auVar16._16_4_ = auVar14._16_4_ * auVar14._16_4_;
  auVar16._20_4_ = auVar14._20_4_ * auVar14._20_4_;
  auVar16._24_4_ = auVar14._24_4_ * auVar14._24_4_;
  auVar16._28_4_ = auVar14._28_4_ * auVar14._28_4_;
  auVar14 = vmaskmovps_avx(auVar15,auVar16);
  *(undefined1 (*) [32])(param_2 + (iVar11 << 2)) = auVar14;
  return;
}

// ArraySquareInPlace_avx2 @ 140a21800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySquareInPlace_avx2(longlong param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar10 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar10 = param_2;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar13);
      *pfVar2 = *pfVar1 * *pfVar1;
      pfVar2[1] = fVar3 * fVar3;
      pfVar2[2] = fVar4 * fVar4;
      pfVar2[3] = fVar5 * fVar5;
      pfVar2[4] = fVar6 * fVar6;
      pfVar2[5] = fVar7 * fVar7;
      pfVar2[6] = fVar8 * fVar8;
      pfVar2[7] = fVar9 * fVar9;
      uVar12 = uVar12 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar12 < (uVar10 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar14._4_4_ = iVar11;
  auVar14._0_4_ = iVar11;
  auVar14._8_4_ = iVar11;
  auVar14._12_4_ = iVar11;
  auVar14._16_4_ = iVar11;
  auVar14._20_4_ = iVar11;
  auVar14._24_4_ = iVar11;
  auVar14._28_4_ = iVar11;
  auVar14 = vpor_avx2(auVar14,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar15._4_4_ = param_2;
  auVar15._0_4_ = param_2;
  auVar15._8_4_ = param_2;
  auVar15._12_4_ = param_2;
  auVar15._16_4_ = param_2;
  auVar15._20_4_ = param_2;
  auVar15._24_4_ = param_2;
  auVar15._28_4_ = param_2;
  auVar15 = vpcmpgtd_avx2(auVar15,auVar14);
  auVar14 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + (iVar11 << 2)));
  auVar16._0_4_ = auVar14._0_4_ * auVar14._0_4_;
  auVar16._4_4_ = auVar14._4_4_ * auVar14._4_4_;
  auVar16._8_4_ = auVar14._8_4_ * auVar14._8_4_;
  auVar16._12_4_ = auVar14._12_4_ * auVar14._12_4_;
  auVar16._16_4_ = auVar14._16_4_ * auVar14._16_4_;
  auVar16._20_4_ = auVar14._20_4_ * auVar14._20_4_;
  auVar16._24_4_ = auVar14._24_4_ * auVar14._24_4_;
  auVar16._28_4_ = auVar14._28_4_ * auVar14._28_4_;
  auVar14 = vmaskmovps_avx(auVar15,auVar16);
  *(undefined1 (*) [32])(param_1 + (iVar11 << 2)) = auVar14;
  return;
}

// ArraySqrtInPlace_avx2 @ 140a21890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySqrtInPlace_avx2(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  
  uVar1 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  if ((int)(uVar1 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar4 = 0;
    uVar3 = 0;
    do {
      auVar5 = vsqrtps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar4));
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar4) = auVar5;
      uVar3 = uVar3 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar3 < (uVar1 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar3) {
      return;
    }
  }
  iVar2 = (int)uVar3;
  auVar5._4_4_ = iVar2;
  auVar5._0_4_ = iVar2;
  auVar5._8_4_ = iVar2;
  auVar5._12_4_ = iVar2;
  auVar5._16_4_ = iVar2;
  auVar5._20_4_ = iVar2;
  auVar5._24_4_ = iVar2;
  auVar5._28_4_ = iVar2;
  auVar5 = vpor_avx2(auVar5,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar6._4_4_ = param_2;
  auVar6._0_4_ = param_2;
  auVar6._8_4_ = param_2;
  auVar6._12_4_ = param_2;
  auVar6._16_4_ = param_2;
  auVar6._20_4_ = param_2;
  auVar6._24_4_ = param_2;
  auVar6._28_4_ = param_2;
  auVar6 = vpcmpgtd_avx2(auVar6,auVar5);
  auVar5 = vmaskmovps_avx(auVar6,*(undefined1 (*) [32])(param_1 + (iVar2 << 2)));
  auVar5 = vsqrtps_avx(auVar5);
  auVar5 = vmaskmovps_avx(auVar6,auVar5);
  *(undefined1 (*) [32])(param_1 + (iVar2 << 2)) = auVar5;
  return;
}

// ArrayComplexConjugate_avx2 @ 140a21920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexConjugate_avx2(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  
  uVar1 = __real_80000000;
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    do {
      auVar6 = *(undefined1 (*) [32])(param_1 + (ulonglong)uVar5);
      auVar8._0_4_ = auVar6._0_4_ ^ uVar1;
      auVar8._4_4_ = auVar6._4_4_ ^ uVar1;
      auVar8._8_4_ = auVar6._8_4_ ^ uVar1;
      auVar8._12_4_ = auVar6._12_4_ ^ uVar1;
      auVar8._16_4_ = auVar6._16_4_ ^ uVar1;
      auVar8._20_4_ = auVar6._20_4_ ^ uVar1;
      auVar8._24_4_ = auVar6._24_4_ ^ uVar1;
      auVar8._28_4_ = auVar6._28_4_ ^ uVar1;
      auVar6 = vblendps_avx(auVar6,auVar8,0xaa);
      *(undefined1 (*) [32])(param_2 + (ulonglong)uVar5) = auVar6;
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar6._4_4_ = iVar3;
  auVar6._0_4_ = iVar3;
  auVar6._8_4_ = iVar3;
  auVar6._12_4_ = iVar3;
  auVar6._16_4_ = iVar3;
  auVar6._20_4_ = iVar3;
  auVar6._24_4_ = iVar3;
  auVar6._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar6,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar7._4_4_ = param_3;
  auVar7._0_4_ = param_3;
  auVar7._8_4_ = param_3;
  auVar7._12_4_ = param_3;
  auVar7._16_4_ = param_3;
  auVar7._20_4_ = param_3;
  auVar7._24_4_ = param_3;
  auVar7._28_4_ = param_3;
  auVar8 = vpcmpgtd_avx2(auVar7,auVar6);
  auVar6 = vmaskmovps_avx(auVar8,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar9._0_4_ = auVar6._0_4_ ^ __real_80000000;
  auVar9._4_4_ = auVar6._4_4_ ^ __real_80000000;
  auVar9._8_4_ = auVar6._8_4_ ^ __real_80000000;
  auVar9._12_4_ = auVar6._12_4_ ^ __real_80000000;
  auVar9._16_4_ = auVar6._16_4_ ^ __real_80000000;
  auVar9._20_4_ = auVar6._20_4_ ^ __real_80000000;
  auVar9._24_4_ = auVar6._24_4_ ^ __real_80000000;
  auVar9._28_4_ = auVar6._28_4_ ^ __real_80000000;
  auVar6 = vblendps_avx(auVar6,auVar9,0xaa);
  auVar6 = vmaskmovps_avx(auVar8,auVar6);
  *(undefined1 (*) [32])(param_2 + (iVar3 << 2)) = auVar6;
  return;
}

// ArrayComplexConjugateInPlace_avx2 @ 140a219d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexConjugateInPlace_avx2(longlong param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  
  uVar1 = __real_80000000;
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    do {
      auVar6 = *(undefined1 (*) [32])(param_1 + (ulonglong)uVar5);
      auVar8._0_4_ = auVar6._0_4_ ^ uVar1;
      auVar8._4_4_ = auVar6._4_4_ ^ uVar1;
      auVar8._8_4_ = auVar6._8_4_ ^ uVar1;
      auVar8._12_4_ = auVar6._12_4_ ^ uVar1;
      auVar8._16_4_ = auVar6._16_4_ ^ uVar1;
      auVar8._20_4_ = auVar6._20_4_ ^ uVar1;
      auVar8._24_4_ = auVar6._24_4_ ^ uVar1;
      auVar8._28_4_ = auVar6._28_4_ ^ uVar1;
      auVar6 = vblendps_avx(auVar6,auVar8,0xaa);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar5) = auVar6;
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar6._4_4_ = iVar3;
  auVar6._0_4_ = iVar3;
  auVar6._8_4_ = iVar3;
  auVar6._12_4_ = iVar3;
  auVar6._16_4_ = iVar3;
  auVar6._20_4_ = iVar3;
  auVar6._24_4_ = iVar3;
  auVar6._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar6,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar7._4_4_ = param_2;
  auVar7._0_4_ = param_2;
  auVar7._8_4_ = param_2;
  auVar7._12_4_ = param_2;
  auVar7._16_4_ = param_2;
  auVar7._20_4_ = param_2;
  auVar7._24_4_ = param_2;
  auVar7._28_4_ = param_2;
  auVar8 = vpcmpgtd_avx2(auVar7,auVar6);
  auVar6 = vmaskmovps_avx(auVar8,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar9._0_4_ = auVar6._0_4_ ^ __real_80000000;
  auVar9._4_4_ = auVar6._4_4_ ^ __real_80000000;
  auVar9._8_4_ = auVar6._8_4_ ^ __real_80000000;
  auVar9._12_4_ = auVar6._12_4_ ^ __real_80000000;
  auVar9._16_4_ = auVar6._16_4_ ^ __real_80000000;
  auVar9._20_4_ = auVar6._20_4_ ^ __real_80000000;
  auVar9._24_4_ = auVar6._24_4_ ^ __real_80000000;
  auVar9._28_4_ = auVar6._28_4_ ^ __real_80000000;
  auVar6 = vblendps_avx(auVar6,auVar9,0xaa);
  auVar6 = vmaskmovps_avx(auVar8,auVar6);
  *(undefined1 (*) [32])(param_1 + (iVar3 << 2)) = auVar6;
  return;
}

// ArrayMagnitudeToDecibelInPlace_avx2 @ 140a21a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMagnitudeToDecibelInPlace_avx2(longlong param_1,float param_2,uint param_3)

{
  float *pfVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [32];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar32 [32];
  float fVar40;
  undefined1 auVar33 [32];
  undefined1 auVar41 [32];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar42 [32];
  float fVar49;
  undefined1 auVar43 [32];
  
  fVar10 = __real_3f317218;
  fVar9 = __real_3f000010;
  fVar8 = __real_3eaaa11c;
  fVar7 = __real_3e80fb87;
  fVar6 = __real_3e33a0af;
  fVar40 = __real_3eaf548d;
  fVar39 = __real_bf198181;
  fVar38 = __real_3ffe0193;
  fVar37 = __real_c01f5af7;
  fVar36 = __real_3fdfe28e;
  uVar5 = __real_807fffff;
  iVar14 = __real_ffffff82;
  fVar35 = __real_410af967;
  uVar4 = __real_3f000000;
  fVar34 = __real_3f800000;
  fVar16 = (param_2 * __real_40135d8e) / __real_41a00000;
  auVar20 = ZEXT416((uint)(fVar16 * __real_3fb8aa3b));
  auVar20 = vroundss_avx(auVar20,auVar20,9);
  fVar19 = auVar20._0_4_;
  iVar11 = (int)fVar19;
  fVar17 = __real_7f800000;
  if (iVar11 < 0x80) {
    fVar17 = fVar19 * __real_b5bfbe8e + fVar19 * __real_bf317200 + fVar16;
    fVar17 = (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * __real_39907835 +
                                                                         __real_3aaaf7b5) +
                                                               __real_3c09475d) + __real_3d2a9d49) +
                                           __real_3e2aab20) + __real_3efffffd) + __real_3f800000) +
             __real_3f800000) * (float)(iVar11 * 0x800000 + 0x3f800000);
  }
  fVar16 = 0.0;
  if (-0x7f < iVar11) {
    fVar16 = fVar17;
  }
  uVar12 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    auVar25._4_4_ = __real_3f800000;
    auVar25._0_4_ = __real_3f800000;
    auVar25._8_4_ = __real_3f800000;
    auVar25._12_4_ = __real_3f800000;
    auVar25._16_4_ = __real_3f800000;
    auVar25._20_4_ = __real_3f800000;
    auVar25._24_4_ = __real_3f800000;
    auVar25._28_4_ = __real_3f800000;
    uVar15 = 0;
    auVar21._4_4_ = __real_7fc00000;
    auVar21._0_4_ = __real_7fc00000;
    auVar21._8_4_ = __real_7fc00000;
    auVar21._12_4_ = __real_7fc00000;
    auVar21._16_4_ = __real_7fc00000;
    auVar21._20_4_ = __real_7fc00000;
    auVar21._24_4_ = __real_7fc00000;
    auVar21._28_4_ = __real_7fc00000;
    auVar24._4_4_ = __real_ff800000;
    auVar24._0_4_ = __real_ff800000;
    auVar24._8_4_ = __real_ff800000;
    auVar24._12_4_ = __real_ff800000;
    auVar24._16_4_ = __real_ff800000;
    auVar24._20_4_ = __real_ff800000;
    auVar24._24_4_ = __real_ff800000;
    auVar24._28_4_ = __real_ff800000;
    do {
      auVar29._4_4_ = fVar16;
      auVar29._0_4_ = fVar16;
      auVar29._8_4_ = fVar16;
      auVar29._12_4_ = fVar16;
      auVar29._16_4_ = fVar16;
      auVar29._20_4_ = fVar16;
      auVar29._24_4_ = fVar16;
      auVar29._28_4_ = fVar16;
      auVar3 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar13),auVar29);
      auVar29 = vcmpps_avx(auVar3,ZEXT1232(ZEXT812(0)),2);
      auVar2 = vblendvps_avx(auVar3,auVar25,auVar29);
      auVar42._0_4_ = auVar2._0_4_ & uVar5;
      auVar42._4_4_ = auVar2._4_4_ & uVar5;
      auVar42._8_4_ = auVar2._8_4_ & uVar5;
      auVar42._12_4_ = auVar2._12_4_ & uVar5;
      auVar42._16_4_ = auVar2._16_4_ & uVar5;
      auVar42._20_4_ = auVar2._20_4_ & uVar5;
      auVar42._24_4_ = auVar2._24_4_ & uVar5;
      auVar42._28_4_ = auVar2._28_4_ & uVar5;
      auVar41._4_4_ = uVar4;
      auVar41._0_4_ = uVar4;
      auVar41._8_4_ = uVar4;
      auVar41._12_4_ = uVar4;
      auVar41._16_4_ = uVar4;
      auVar41._20_4_ = uVar4;
      auVar41._24_4_ = uVar4;
      auVar41._28_4_ = uVar4;
      auVar41 = vsubps_avx(auVar25,auVar42 | auVar41);
      fVar17 = auVar41._0_4_;
      fVar19 = auVar41._4_4_;
      fVar44 = auVar41._8_4_;
      fVar45 = auVar41._12_4_;
      fVar46 = auVar41._16_4_;
      fVar47 = auVar41._20_4_;
      fVar48 = auVar41._24_4_;
      fVar49 = auVar41._28_4_;
      auVar41 = vpsrad_avx2(auVar2,0x17);
      auVar2._0_4_ = auVar41._0_4_ + iVar14;
      auVar2._4_4_ = auVar41._4_4_ + iVar14;
      auVar2._8_4_ = auVar41._8_4_ + iVar14;
      auVar2._12_4_ = auVar41._12_4_ + iVar14;
      auVar2._16_4_ = auVar41._16_4_ + iVar14;
      auVar2._20_4_ = auVar41._20_4_ + iVar14;
      auVar2._24_4_ = auVar41._24_4_ + iVar14;
      auVar2._28_4_ = auVar41._28_4_ + iVar14;
      auVar2 = vcvtdq2ps_avx(auVar2);
      auVar43._0_4_ =
           fVar10 * auVar2._0_4_ -
           fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * 
                                                  (fVar17 * fVar36 + fVar37) + fVar38) + fVar39) +
                                                  fVar40) + fVar6) + fVar7) + fVar8) + fVar9) +
                    fVar34);
      auVar43._4_4_ =
           fVar10 * auVar2._4_4_ -
           fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 
                                                  (fVar19 * fVar36 + fVar37) + fVar38) + fVar39) +
                                                  fVar40) + fVar6) + fVar7) + fVar8) + fVar9) +
                    fVar34);
      auVar43._8_4_ =
           fVar10 * auVar2._8_4_ -
           fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * 
                                                  (fVar44 * fVar36 + fVar37) + fVar38) + fVar39) +
                                                  fVar40) + fVar6) + fVar7) + fVar8) + fVar9) +
                    fVar34);
      auVar43._12_4_ =
           fVar10 * auVar2._12_4_ -
           fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * 
                                                  (fVar45 * fVar36 + fVar37) + fVar38) + fVar39) +
                                                  fVar40) + fVar6) + fVar7) + fVar8) + fVar9) +
                    fVar34);
      auVar43._16_4_ =
           fVar10 * auVar2._16_4_ -
           fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * 
                                                  (fVar46 * fVar36 + fVar37) + fVar38) + fVar39) +
                                                  fVar40) + fVar6) + fVar7) + fVar8) + fVar9) +
                    fVar34);
      auVar43._20_4_ =
           fVar10 * auVar2._20_4_ -
           fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * 
                                                  (fVar47 * fVar36 + fVar37) + fVar38) + fVar39) +
                                                  fVar40) + fVar6) + fVar7) + fVar8) + fVar9) +
                    fVar34);
      auVar43._24_4_ =
           fVar10 * auVar2._24_4_ -
           fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * 
                                                  (fVar48 * fVar36 + fVar37) + fVar38) + fVar39) +
                                                  fVar40) + fVar6) + fVar7) + fVar8) + fVar9) +
                    fVar34);
      auVar43._28_4_ =
           fVar10 * auVar2._28_4_ -
           fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * 
                                                  (fVar49 * fVar36 + fVar37) + fVar38) + fVar39) +
                                                  fVar40) + fVar6) + fVar7) + fVar8) + fVar9) +
                    fVar34);
      auVar2 = vcmpps_avx(auVar3,ZEXT1232(ZEXT812(0)),1);
      auVar2 = vblendvps_avx(auVar24,auVar21,auVar2);
      auVar2 = vblendvps_avx(auVar43,auVar2,auVar29);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      *pfVar1 = auVar2._0_4_ * fVar35;
      pfVar1[1] = auVar2._4_4_ * fVar35;
      pfVar1[2] = auVar2._8_4_ * fVar35;
      pfVar1[3] = auVar2._12_4_ * fVar35;
      pfVar1[4] = auVar2._16_4_ * fVar35;
      pfVar1[5] = auVar2._20_4_ * fVar35;
      pfVar1[6] = auVar2._24_4_ * fVar35;
      pfVar1[7] = auVar2._28_4_ * fVar35;
      uVar15 = uVar15 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar15 < (uVar12 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar15) {
      return;
    }
  }
  iVar14 = (int)uVar15;
  auVar18._4_4_ = iVar14;
  auVar18._0_4_ = iVar14;
  auVar18._8_4_ = iVar14;
  auVar18._12_4_ = iVar14;
  auVar18._16_4_ = iVar14;
  auVar18._20_4_ = iVar14;
  auVar18._24_4_ = iVar14;
  auVar18._28_4_ = iVar14;
  auVar21 = vpor_avx2(auVar18,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar22._4_4_ = param_3;
  auVar22._0_4_ = param_3;
  auVar22._8_4_ = param_3;
  auVar22._12_4_ = param_3;
  auVar22._16_4_ = param_3;
  auVar22._20_4_ = param_3;
  auVar22._24_4_ = param_3;
  auVar22._28_4_ = param_3;
  auVar2 = vpcmpgtd_avx2(auVar22,auVar21);
  auVar21 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + (iVar14 << 2)));
  auVar26._4_4_ = fVar16;
  auVar26._0_4_ = fVar16;
  auVar26._8_4_ = fVar16;
  auVar26._12_4_ = fVar16;
  auVar26._16_4_ = fVar16;
  auVar26._20_4_ = fVar16;
  auVar26._24_4_ = fVar16;
  auVar26._28_4_ = fVar16;
  auVar21 = vmaxps_avx(auVar21,auVar26);
  auVar24 = vcmpps_avx(auVar21,ZEXT1232(ZEXT812(0)),1);
  auVar25 = vcmpps_avx(auVar21,ZEXT1232(ZEXT812(0)),2);
  auVar27._4_4_ = __real_3f800000;
  auVar27._0_4_ = __real_3f800000;
  auVar27._8_4_ = __real_3f800000;
  auVar27._12_4_ = __real_3f800000;
  auVar27._16_4_ = __real_3f800000;
  auVar27._20_4_ = __real_3f800000;
  auVar27._24_4_ = __real_3f800000;
  auVar27._28_4_ = __real_3f800000;
  auVar21 = vblendvps_avx(auVar21,auVar27,auVar25);
  auVar29 = vpsrad_avx2(auVar21,0x17);
  auVar3._0_4_ = auVar29._0_4_ + __real_ffffff82;
  auVar3._4_4_ = auVar29._4_4_ + __real_ffffff82;
  auVar3._8_4_ = auVar29._8_4_ + __real_ffffff82;
  auVar3._12_4_ = auVar29._12_4_ + __real_ffffff82;
  auVar3._16_4_ = auVar29._16_4_ + __real_ffffff82;
  auVar3._20_4_ = auVar29._20_4_ + __real_ffffff82;
  auVar3._24_4_ = auVar29._24_4_ + __real_ffffff82;
  auVar3._28_4_ = auVar29._28_4_ + __real_ffffff82;
  auVar30._0_4_ = auVar21._0_4_ & __real_807fffff;
  auVar30._4_4_ = auVar21._4_4_ & __real_807fffff;
  auVar30._8_4_ = auVar21._8_4_ & __real_807fffff;
  auVar30._12_4_ = auVar21._12_4_ & __real_807fffff;
  auVar30._16_4_ = auVar21._16_4_ & __real_807fffff;
  auVar30._20_4_ = auVar21._20_4_ & __real_807fffff;
  auVar30._24_4_ = auVar21._24_4_ & __real_807fffff;
  auVar30._28_4_ = auVar21._28_4_ & __real_807fffff;
  auVar32._4_4_ = __real_3f000000;
  auVar32._0_4_ = __real_3f000000;
  auVar32._8_4_ = __real_3f000000;
  auVar32._12_4_ = __real_3f000000;
  auVar32._16_4_ = __real_3f000000;
  auVar32._20_4_ = __real_3f000000;
  auVar32._24_4_ = __real_3f000000;
  auVar32._28_4_ = __real_3f000000;
  auVar21 = vsubps_avx(auVar27,auVar30 | auVar32);
  auVar31._4_4_ = __real_7fc00000;
  auVar31._0_4_ = __real_7fc00000;
  auVar31._8_4_ = __real_7fc00000;
  auVar31._12_4_ = __real_7fc00000;
  auVar31._16_4_ = __real_7fc00000;
  auVar31._20_4_ = __real_7fc00000;
  auVar31._24_4_ = __real_7fc00000;
  auVar31._28_4_ = __real_7fc00000;
  auVar21 = vblendvps_avx(auVar31,auVar21,auVar2);
  fVar17 = auVar21._0_4_;
  fVar34 = auVar21._4_4_;
  fVar35 = auVar21._8_4_;
  fVar36 = auVar21._12_4_;
  fVar37 = auVar21._16_4_;
  fVar38 = auVar21._20_4_;
  fVar39 = auVar21._24_4_;
  fVar40 = auVar21._28_4_;
  auVar21 = vcvtdq2ps_avx(auVar3);
  auVar33._0_4_ =
       auVar21._0_4_ * __real_3f317218 -
       fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (
                                                  fVar17 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._4_4_ =
       auVar21._4_4_ * __real_3f317218 -
       fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (
                                                  fVar34 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._8_4_ =
       auVar21._8_4_ * __real_3f317218 -
       fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (
                                                  fVar35 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._12_4_ =
       auVar21._12_4_ * __real_3f317218 -
       fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (
                                                  fVar36 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._16_4_ =
       auVar21._16_4_ * __real_3f317218 -
       fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (
                                                  fVar37 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._20_4_ =
       auVar21._20_4_ * __real_3f317218 -
       fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (
                                                  fVar38 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._24_4_ =
       auVar21._24_4_ * __real_3f317218 -
       fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (
                                                  fVar39 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._28_4_ =
       auVar21._28_4_ * __real_3f317218 -
       fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (
                                                  fVar40 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar28._4_4_ = __real_ff800000;
  auVar28._0_4_ = __real_ff800000;
  auVar28._8_4_ = __real_ff800000;
  auVar28._12_4_ = __real_ff800000;
  auVar28._16_4_ = __real_ff800000;
  auVar28._20_4_ = __real_ff800000;
  auVar28._24_4_ = __real_ff800000;
  auVar28._28_4_ = __real_ff800000;
  auVar21 = vblendvps_avx(auVar28,auVar31,auVar24);
  auVar21 = vblendvps_avx(auVar33,auVar21,auVar25);
  auVar23._0_4_ = auVar21._0_4_ * __real_410af967;
  auVar23._4_4_ = auVar21._4_4_ * __real_410af967;
  auVar23._8_4_ = auVar21._8_4_ * __real_410af967;
  auVar23._12_4_ = auVar21._12_4_ * __real_410af967;
  auVar23._16_4_ = auVar21._16_4_ * __real_410af967;
  auVar23._20_4_ = auVar21._20_4_ * __real_410af967;
  auVar23._24_4_ = auVar21._24_4_ * __real_410af967;
  auVar23._28_4_ = auVar21._28_4_ * __real_410af967;
  auVar21 = vmaskmovps_avx(auVar2,auVar23);
  *(undefined1 (*) [32])(param_1 + (iVar14 << 2)) = auVar21;
  return;
}

// ArrayPowerToDecibelInPlace_avx2 @ 140a21f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPowerToDecibelInPlace_avx2(longlong param_1,float param_2,uint param_3)

{
  float *pfVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined4 uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [32];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
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
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar32 [32];
  float fVar40;
  undefined1 auVar33 [32];
  undefined1 auVar41 [32];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar42 [32];
  float fVar49;
  undefined1 auVar43 [32];
  
  fVar10 = __real_408af967;
  fVar9 = __real_3f317218;
  fVar8 = __real_3f000010;
  fVar7 = __real_3eaaa11c;
  fVar6 = __real_3e80fb87;
  fVar40 = __real_3e33a0af;
  fVar39 = __real_3eaf548d;
  fVar38 = __real_bf198181;
  fVar37 = __real_3ffe0193;
  fVar36 = __real_c01f5af7;
  fVar35 = __real_3fdfe28e;
  uVar5 = __real_807fffff;
  iVar14 = __real_ffffff82;
  uVar4 = __real_3f000000;
  fVar34 = __real_3f800000;
  fVar16 = (param_2 * __real_40135d8e) / __real_41200000;
  auVar20 = ZEXT416((uint)(fVar16 * __real_3fb8aa3b));
  auVar20 = vroundss_avx(auVar20,auVar20,9);
  fVar19 = auVar20._0_4_;
  iVar11 = (int)fVar19;
  fVar17 = __real_7f800000;
  if (iVar11 < 0x80) {
    fVar17 = fVar19 * __real_b5bfbe8e + fVar19 * __real_bf317200 + fVar16;
    fVar17 = (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * __real_39907835 +
                                                                         __real_3aaaf7b5) +
                                                               __real_3c09475d) + __real_3d2a9d49) +
                                           __real_3e2aab20) + __real_3efffffd) + __real_3f800000) +
             __real_3f800000) * (float)(iVar11 * 0x800000 + 0x3f800000);
  }
  fVar16 = 0.0;
  if (-0x7f < iVar11) {
    fVar16 = fVar17;
  }
  uVar12 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    auVar25._4_4_ = __real_3f800000;
    auVar25._0_4_ = __real_3f800000;
    auVar25._8_4_ = __real_3f800000;
    auVar25._12_4_ = __real_3f800000;
    auVar25._16_4_ = __real_3f800000;
    auVar25._20_4_ = __real_3f800000;
    auVar25._24_4_ = __real_3f800000;
    auVar25._28_4_ = __real_3f800000;
    uVar15 = 0;
    auVar21._4_4_ = __real_7fc00000;
    auVar21._0_4_ = __real_7fc00000;
    auVar21._8_4_ = __real_7fc00000;
    auVar21._12_4_ = __real_7fc00000;
    auVar21._16_4_ = __real_7fc00000;
    auVar21._20_4_ = __real_7fc00000;
    auVar21._24_4_ = __real_7fc00000;
    auVar21._28_4_ = __real_7fc00000;
    auVar24._4_4_ = __real_ff800000;
    auVar24._0_4_ = __real_ff800000;
    auVar24._8_4_ = __real_ff800000;
    auVar24._12_4_ = __real_ff800000;
    auVar24._16_4_ = __real_ff800000;
    auVar24._20_4_ = __real_ff800000;
    auVar24._24_4_ = __real_ff800000;
    auVar24._28_4_ = __real_ff800000;
    do {
      auVar29._4_4_ = fVar16;
      auVar29._0_4_ = fVar16;
      auVar29._8_4_ = fVar16;
      auVar29._12_4_ = fVar16;
      auVar29._16_4_ = fVar16;
      auVar29._20_4_ = fVar16;
      auVar29._24_4_ = fVar16;
      auVar29._28_4_ = fVar16;
      auVar3 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar13),auVar29);
      auVar29 = vcmpps_avx(auVar3,ZEXT1232(ZEXT812(0)),2);
      auVar2 = vblendvps_avx(auVar3,auVar25,auVar29);
      auVar42._0_4_ = auVar2._0_4_ & uVar5;
      auVar42._4_4_ = auVar2._4_4_ & uVar5;
      auVar42._8_4_ = auVar2._8_4_ & uVar5;
      auVar42._12_4_ = auVar2._12_4_ & uVar5;
      auVar42._16_4_ = auVar2._16_4_ & uVar5;
      auVar42._20_4_ = auVar2._20_4_ & uVar5;
      auVar42._24_4_ = auVar2._24_4_ & uVar5;
      auVar42._28_4_ = auVar2._28_4_ & uVar5;
      auVar41._4_4_ = uVar4;
      auVar41._0_4_ = uVar4;
      auVar41._8_4_ = uVar4;
      auVar41._12_4_ = uVar4;
      auVar41._16_4_ = uVar4;
      auVar41._20_4_ = uVar4;
      auVar41._24_4_ = uVar4;
      auVar41._28_4_ = uVar4;
      auVar41 = vsubps_avx(auVar25,auVar42 | auVar41);
      fVar17 = auVar41._0_4_;
      fVar19 = auVar41._4_4_;
      fVar44 = auVar41._8_4_;
      fVar45 = auVar41._12_4_;
      fVar46 = auVar41._16_4_;
      fVar47 = auVar41._20_4_;
      fVar48 = auVar41._24_4_;
      fVar49 = auVar41._28_4_;
      auVar41 = vpsrad_avx2(auVar2,0x17);
      auVar2._0_4_ = auVar41._0_4_ + iVar14;
      auVar2._4_4_ = auVar41._4_4_ + iVar14;
      auVar2._8_4_ = auVar41._8_4_ + iVar14;
      auVar2._12_4_ = auVar41._12_4_ + iVar14;
      auVar2._16_4_ = auVar41._16_4_ + iVar14;
      auVar2._20_4_ = auVar41._20_4_ + iVar14;
      auVar2._24_4_ = auVar41._24_4_ + iVar14;
      auVar2._28_4_ = auVar41._28_4_ + iVar14;
      auVar2 = vcvtdq2ps_avx(auVar2);
      auVar43._0_4_ =
           fVar9 * auVar2._0_4_ -
           fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * 
                                                  (fVar17 * fVar35 + fVar36) + fVar37) + fVar38) +
                                                  fVar39) + fVar40) + fVar6) + fVar7) + fVar8) +
                    fVar34);
      auVar43._4_4_ =
           fVar9 * auVar2._4_4_ -
           fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * (fVar19 * 
                                                  (fVar19 * fVar35 + fVar36) + fVar37) + fVar38) +
                                                  fVar39) + fVar40) + fVar6) + fVar7) + fVar8) +
                    fVar34);
      auVar43._8_4_ =
           fVar9 * auVar2._8_4_ -
           fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * 
                                                  (fVar44 * fVar35 + fVar36) + fVar37) + fVar38) +
                                                  fVar39) + fVar40) + fVar6) + fVar7) + fVar8) +
                    fVar34);
      auVar43._12_4_ =
           fVar9 * auVar2._12_4_ -
           fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * 
                                                  (fVar45 * fVar35 + fVar36) + fVar37) + fVar38) +
                                                  fVar39) + fVar40) + fVar6) + fVar7) + fVar8) +
                    fVar34);
      auVar43._16_4_ =
           fVar9 * auVar2._16_4_ -
           fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * 
                                                  (fVar46 * fVar35 + fVar36) + fVar37) + fVar38) +
                                                  fVar39) + fVar40) + fVar6) + fVar7) + fVar8) +
                    fVar34);
      auVar43._20_4_ =
           fVar9 * auVar2._20_4_ -
           fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * 
                                                  (fVar47 * fVar35 + fVar36) + fVar37) + fVar38) +
                                                  fVar39) + fVar40) + fVar6) + fVar7) + fVar8) +
                    fVar34);
      auVar43._24_4_ =
           fVar9 * auVar2._24_4_ -
           fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * 
                                                  (fVar48 * fVar35 + fVar36) + fVar37) + fVar38) +
                                                  fVar39) + fVar40) + fVar6) + fVar7) + fVar8) +
                    fVar34);
      auVar43._28_4_ =
           fVar9 * auVar2._28_4_ -
           fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * (fVar49 * 
                                                  (fVar49 * fVar35 + fVar36) + fVar37) + fVar38) +
                                                  fVar39) + fVar40) + fVar6) + fVar7) + fVar8) +
                    fVar34);
      auVar2 = vcmpps_avx(auVar3,ZEXT1232(ZEXT812(0)),1);
      auVar2 = vblendvps_avx(auVar24,auVar21,auVar2);
      auVar2 = vblendvps_avx(auVar43,auVar2,auVar29);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      *pfVar1 = auVar2._0_4_ * fVar10;
      pfVar1[1] = auVar2._4_4_ * fVar10;
      pfVar1[2] = auVar2._8_4_ * fVar10;
      pfVar1[3] = auVar2._12_4_ * fVar10;
      pfVar1[4] = auVar2._16_4_ * fVar10;
      pfVar1[5] = auVar2._20_4_ * fVar10;
      pfVar1[6] = auVar2._24_4_ * fVar10;
      pfVar1[7] = auVar2._28_4_ * fVar10;
      uVar15 = uVar15 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar15 < (uVar12 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar15) {
      return;
    }
  }
  iVar14 = (int)uVar15;
  auVar18._4_4_ = iVar14;
  auVar18._0_4_ = iVar14;
  auVar18._8_4_ = iVar14;
  auVar18._12_4_ = iVar14;
  auVar18._16_4_ = iVar14;
  auVar18._20_4_ = iVar14;
  auVar18._24_4_ = iVar14;
  auVar18._28_4_ = iVar14;
  auVar21 = vpor_avx2(auVar18,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar22._4_4_ = param_3;
  auVar22._0_4_ = param_3;
  auVar22._8_4_ = param_3;
  auVar22._12_4_ = param_3;
  auVar22._16_4_ = param_3;
  auVar22._20_4_ = param_3;
  auVar22._24_4_ = param_3;
  auVar22._28_4_ = param_3;
  auVar2 = vpcmpgtd_avx2(auVar22,auVar21);
  auVar21 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + (iVar14 << 2)));
  auVar26._4_4_ = fVar16;
  auVar26._0_4_ = fVar16;
  auVar26._8_4_ = fVar16;
  auVar26._12_4_ = fVar16;
  auVar26._16_4_ = fVar16;
  auVar26._20_4_ = fVar16;
  auVar26._24_4_ = fVar16;
  auVar26._28_4_ = fVar16;
  auVar21 = vmaxps_avx(auVar21,auVar26);
  auVar24 = vcmpps_avx(auVar21,ZEXT1232(ZEXT812(0)),1);
  auVar25 = vcmpps_avx(auVar21,ZEXT1232(ZEXT812(0)),2);
  auVar27._4_4_ = __real_3f800000;
  auVar27._0_4_ = __real_3f800000;
  auVar27._8_4_ = __real_3f800000;
  auVar27._12_4_ = __real_3f800000;
  auVar27._16_4_ = __real_3f800000;
  auVar27._20_4_ = __real_3f800000;
  auVar27._24_4_ = __real_3f800000;
  auVar27._28_4_ = __real_3f800000;
  auVar21 = vblendvps_avx(auVar21,auVar27,auVar25);
  auVar29 = vpsrad_avx2(auVar21,0x17);
  auVar3._0_4_ = auVar29._0_4_ + __real_ffffff82;
  auVar3._4_4_ = auVar29._4_4_ + __real_ffffff82;
  auVar3._8_4_ = auVar29._8_4_ + __real_ffffff82;
  auVar3._12_4_ = auVar29._12_4_ + __real_ffffff82;
  auVar3._16_4_ = auVar29._16_4_ + __real_ffffff82;
  auVar3._20_4_ = auVar29._20_4_ + __real_ffffff82;
  auVar3._24_4_ = auVar29._24_4_ + __real_ffffff82;
  auVar3._28_4_ = auVar29._28_4_ + __real_ffffff82;
  auVar30._0_4_ = auVar21._0_4_ & __real_807fffff;
  auVar30._4_4_ = auVar21._4_4_ & __real_807fffff;
  auVar30._8_4_ = auVar21._8_4_ & __real_807fffff;
  auVar30._12_4_ = auVar21._12_4_ & __real_807fffff;
  auVar30._16_4_ = auVar21._16_4_ & __real_807fffff;
  auVar30._20_4_ = auVar21._20_4_ & __real_807fffff;
  auVar30._24_4_ = auVar21._24_4_ & __real_807fffff;
  auVar30._28_4_ = auVar21._28_4_ & __real_807fffff;
  auVar32._4_4_ = __real_3f000000;
  auVar32._0_4_ = __real_3f000000;
  auVar32._8_4_ = __real_3f000000;
  auVar32._12_4_ = __real_3f000000;
  auVar32._16_4_ = __real_3f000000;
  auVar32._20_4_ = __real_3f000000;
  auVar32._24_4_ = __real_3f000000;
  auVar32._28_4_ = __real_3f000000;
  auVar21 = vsubps_avx(auVar27,auVar30 | auVar32);
  auVar31._4_4_ = __real_7fc00000;
  auVar31._0_4_ = __real_7fc00000;
  auVar31._8_4_ = __real_7fc00000;
  auVar31._12_4_ = __real_7fc00000;
  auVar31._16_4_ = __real_7fc00000;
  auVar31._20_4_ = __real_7fc00000;
  auVar31._24_4_ = __real_7fc00000;
  auVar31._28_4_ = __real_7fc00000;
  auVar21 = vblendvps_avx(auVar31,auVar21,auVar2);
  fVar17 = auVar21._0_4_;
  fVar34 = auVar21._4_4_;
  fVar35 = auVar21._8_4_;
  fVar36 = auVar21._12_4_;
  fVar37 = auVar21._16_4_;
  fVar38 = auVar21._20_4_;
  fVar39 = auVar21._24_4_;
  fVar40 = auVar21._28_4_;
  auVar21 = vcvtdq2ps_avx(auVar3);
  auVar33._0_4_ =
       auVar21._0_4_ * __real_3f317218 -
       fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (fVar17 * (
                                                  fVar17 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._4_4_ =
       auVar21._4_4_ * __real_3f317218 -
       fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (fVar34 * (
                                                  fVar34 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._8_4_ =
       auVar21._8_4_ * __real_3f317218 -
       fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (fVar35 * (
                                                  fVar35 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._12_4_ =
       auVar21._12_4_ * __real_3f317218 -
       fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (
                                                  fVar36 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._16_4_ =
       auVar21._16_4_ * __real_3f317218 -
       fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (
                                                  fVar37 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._20_4_ =
       auVar21._20_4_ * __real_3f317218 -
       fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (
                                                  fVar38 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._24_4_ =
       auVar21._24_4_ * __real_3f317218 -
       fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (
                                                  fVar39 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar33._28_4_ =
       auVar21._28_4_ * __real_3f317218 -
       fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (
                                                  fVar40 * __real_3fdfe28e + __real_c01f5af7) +
                                                  __real_3ffe0193) + __real_bf198181) +
                                                  __real_3eaf548d) + __real_3e33a0af) +
                                              __real_3e80fb87) + __real_3eaaa11c) + __real_3f000010)
                + __real_3f800000);
  auVar28._4_4_ = __real_ff800000;
  auVar28._0_4_ = __real_ff800000;
  auVar28._8_4_ = __real_ff800000;
  auVar28._12_4_ = __real_ff800000;
  auVar28._16_4_ = __real_ff800000;
  auVar28._20_4_ = __real_ff800000;
  auVar28._24_4_ = __real_ff800000;
  auVar28._28_4_ = __real_ff800000;
  auVar21 = vblendvps_avx(auVar28,auVar31,auVar24);
  auVar21 = vblendvps_avx(auVar33,auVar21,auVar25);
  auVar23._0_4_ = auVar21._0_4_ * __real_408af967;
  auVar23._4_4_ = auVar21._4_4_ * __real_408af967;
  auVar23._8_4_ = auVar21._8_4_ * __real_408af967;
  auVar23._12_4_ = auVar21._12_4_ * __real_408af967;
  auVar23._16_4_ = auVar21._16_4_ * __real_408af967;
  auVar23._20_4_ = auVar21._20_4_ * __real_408af967;
  auVar23._24_4_ = auVar21._24_4_ * __real_408af967;
  auVar23._28_4_ = auVar21._28_4_ * __real_408af967;
  auVar21 = vmaskmovps_avx(auVar2,auVar23);
  *(undefined1 (*) [32])(param_1 + (iVar14 << 2)) = auVar21;
  return;
}

// ArrayComplexToPowerInterleaved_avx2 @ 140a223e0

void ArrayComplexToPowerInterleaved_avx2(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar9 = param_3 & 0xfffffff8;
  if (0 < (int)uVar9) {
    uVar13 = 0;
    uVar14 = 0;
    do {
      auVar4 = *(undefined1 (*) [32])(param_1 + uVar13 * 2);
      auVar5 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar13 * 2);
      auVar6 = vshufps_avx(auVar4,auVar5,0x88);
      auVar6 = vpermpd_avx2(auVar6,0xd8);
      auVar4 = vshufps_avx(auVar4,auVar5,0xdd);
      auVar4 = vpermpd_avx2(auVar4,0xd8);
      pfVar1 = (float *)(param_2 + (uVar13 & 0xffffffff));
      *pfVar1 = auVar6._0_4_ * auVar6._0_4_ + auVar4._0_4_ * auVar4._0_4_;
      pfVar1[1] = auVar6._4_4_ * auVar6._4_4_ + auVar4._4_4_ * auVar4._4_4_;
      pfVar1[2] = auVar6._8_4_ * auVar6._8_4_ + auVar4._8_4_ * auVar4._8_4_;
      pfVar1[3] = auVar6._12_4_ * auVar6._12_4_ + auVar4._12_4_ * auVar4._12_4_;
      pfVar1[4] = auVar6._16_4_ * auVar6._16_4_ + auVar4._16_4_ * auVar4._16_4_;
      pfVar1[5] = auVar6._20_4_ * auVar6._20_4_ + auVar4._20_4_ * auVar4._20_4_;
      pfVar1[6] = auVar6._24_4_ * auVar6._24_4_ + auVar4._24_4_ * auVar4._24_4_;
      pfVar1[7] = auVar6._28_4_ * auVar6._28_4_ + auVar4._28_4_ * auVar4._28_4_;
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
      iVar8 = (int)lVar10 * 2;
      lVar10 = 0;
      do {
        iVar7 = (int)lVar10;
        fVar2 = *(float *)(param_1 + (longlong)(iVar8 + iVar7) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar8 + iVar7 + 1) * 4);
        *(float *)(param_2 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 2 + iVar7) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 3 + iVar7) * 4);
        *(float *)(param_2 + 4 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 4 + iVar7) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 5 + iVar7) * 4);
        *(float *)(param_2 + 8 + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        fVar2 = *(float *)(param_1 + (longlong)(iVar8 + 6 + iVar7) * 4);
        fVar3 = *(float *)(param_1 + (longlong)(iVar8 + 7 + iVar7) * 4);
        *(float *)(param_2 + 0xc + lVar10 * 2) = fVar2 * fVar2 + fVar3 * fVar3;
        lVar10 = lVar10 + 8;
        lVar12 = lVar12 + -4;
      } while (lVar12 != 0);
    }
  }
  return;
}

// ArrayComplexToPower_avx2 @ 140a225a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPower_avx2(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar19 = param_4;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar21 = 0;
    do {
      uVar23 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar23);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar23);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_3 + uVar23);
      *pfVar3 = *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2;
      pfVar3[1] = fVar5 * fVar5 + fVar12 * fVar12;
      pfVar3[2] = fVar6 * fVar6 + fVar13 * fVar13;
      pfVar3[3] = fVar7 * fVar7 + fVar14 * fVar14;
      pfVar3[4] = fVar8 * fVar8 + fVar15 * fVar15;
      pfVar3[5] = fVar9 * fVar9 + fVar16 * fVar16;
      pfVar3[6] = fVar10 * fVar10 + fVar17 * fVar17;
      pfVar3[7] = fVar11 * fVar11 + fVar18 * fVar18;
      uVar21 = uVar21 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_4;
  auVar26._0_4_ = param_4;
  auVar26._8_4_ = param_4;
  auVar26._12_4_ = param_4;
  auVar26._16_4_ = param_4;
  auVar26._20_4_ = param_4;
  auVar26._24_4_ = param_4;
  auVar26._28_4_ = param_4;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ * auVar25._0_4_ + auVar26._0_4_ * auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * auVar25._4_4_ + auVar26._4_4_ * auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * auVar25._8_4_ + auVar26._8_4_ * auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * auVar25._12_4_ + auVar26._12_4_ * auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * auVar25._16_4_ + auVar26._16_4_ * auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * auVar25._20_4_ + auVar26._20_4_ * auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * auVar25._24_4_ + auVar26._24_4_ * auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * auVar25._28_4_ + auVar26._28_4_ * auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_3 + lVar22) = auVar25;
  return;
}

// ArrayUnderflowClamp_avx2 @ 140a22640

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayUnderflowClamp_avx2(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar5 = 0;
    auVar6._4_4_ = __real_80800000;
    auVar6._0_4_ = __real_80800000;
    auVar6._8_4_ = __real_80800000;
    auVar6._12_4_ = __real_80800000;
    auVar6._16_4_ = __real_80800000;
    auVar6._20_4_ = __real_80800000;
    auVar6._24_4_ = __real_80800000;
    auVar6._28_4_ = __real_80800000;
    auVar8._4_4_ = __real_00800000;
    auVar8._0_4_ = __real_00800000;
    auVar8._8_4_ = __real_00800000;
    auVar8._12_4_ = __real_00800000;
    auVar8._16_4_ = __real_00800000;
    auVar8._20_4_ = __real_00800000;
    auVar8._24_4_ = __real_00800000;
    auVar8._28_4_ = __real_00800000;
    uVar4 = 0;
    do {
      auVar7 = *(undefined1 (*) [32])(param_1 + (ulonglong)uVar5);
      auVar9 = vcmpps_avx(auVar6,auVar7,1);
      auVar10 = vcmpps_avx(auVar7,auVar8,1);
      puVar1 = (uint *)(param_1 + (ulonglong)uVar5);
      *puVar1 = ~(auVar10._0_4_ & auVar9._0_4_) & auVar7._0_4_;
      puVar1[1] = ~(auVar10._4_4_ & auVar9._4_4_) & auVar7._4_4_;
      puVar1[2] = ~(auVar10._8_4_ & auVar9._8_4_) & auVar7._8_4_;
      puVar1[3] = ~(auVar10._12_4_ & auVar9._12_4_) & auVar7._12_4_;
      puVar1[4] = ~(auVar10._16_4_ & auVar9._16_4_) & auVar7._16_4_;
      puVar1[5] = ~(auVar10._20_4_ & auVar9._20_4_) & auVar7._20_4_;
      puVar1[6] = ~(auVar10._24_4_ & auVar9._24_4_) & auVar7._24_4_;
      puVar1[7] = ~(auVar10._28_4_ & auVar9._28_4_) & auVar7._28_4_;
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar7._4_4_ = iVar3;
  auVar7._0_4_ = iVar3;
  auVar7._8_4_ = iVar3;
  auVar7._12_4_ = iVar3;
  auVar7._16_4_ = iVar3;
  auVar7._20_4_ = iVar3;
  auVar7._24_4_ = iVar3;
  auVar7._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar7,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar9._4_4_ = param_2;
  auVar9._0_4_ = param_2;
  auVar9._8_4_ = param_2;
  auVar9._12_4_ = param_2;
  auVar9._16_4_ = param_2;
  auVar9._20_4_ = param_2;
  auVar9._24_4_ = param_2;
  auVar9._28_4_ = param_2;
  auVar9 = vpcmpgtd_avx2(auVar9,auVar6);
  auVar7 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar11._4_4_ = __real_80800000;
  auVar11._0_4_ = __real_80800000;
  auVar11._8_4_ = __real_80800000;
  auVar11._12_4_ = __real_80800000;
  auVar11._16_4_ = __real_80800000;
  auVar11._20_4_ = __real_80800000;
  auVar11._24_4_ = __real_80800000;
  auVar11._28_4_ = __real_80800000;
  auVar6 = vcmpps_avx(auVar11,auVar7,1);
  auVar12._4_4_ = __real_00800000;
  auVar12._0_4_ = __real_00800000;
  auVar12._8_4_ = __real_00800000;
  auVar12._12_4_ = __real_00800000;
  auVar12._16_4_ = __real_00800000;
  auVar12._20_4_ = __real_00800000;
  auVar12._24_4_ = __real_00800000;
  auVar12._28_4_ = __real_00800000;
  auVar8 = vcmpps_avx(auVar7,auVar12,1);
  auVar10._0_4_ = ~(auVar8._0_4_ & auVar6._0_4_) & auVar7._0_4_;
  auVar10._4_4_ = ~(auVar8._4_4_ & auVar6._4_4_) & auVar7._4_4_;
  auVar10._8_4_ = ~(auVar8._8_4_ & auVar6._8_4_) & auVar7._8_4_;
  auVar10._12_4_ = ~(auVar8._12_4_ & auVar6._12_4_) & auVar7._12_4_;
  auVar10._16_4_ = ~(auVar8._16_4_ & auVar6._16_4_) & auVar7._16_4_;
  auVar10._20_4_ = ~(auVar8._20_4_ & auVar6._20_4_) & auVar7._20_4_;
  auVar10._24_4_ = ~(auVar8._24_4_ & auVar6._24_4_) & auVar7._24_4_;
  auVar10._28_4_ = ~(auVar8._28_4_ & auVar6._28_4_) & auVar7._28_4_;
  auVar6 = vmaskmovps_avx(auVar9,auVar10);
  *(undefined1 (*) [32])(param_1 + (iVar3 << 2)) = auVar6;
  return;
}

// ArrayRangeClamp_avx2 @ 140a22710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayRangeClamp_avx2(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  
  uVar1 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar1 = param_2;
  }
  if ((int)(uVar1 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar5._4_4_ = param_3;
    auVar5._0_4_ = param_3;
    auVar5._8_4_ = param_3;
    auVar5._12_4_ = param_3;
    auVar5._16_4_ = param_3;
    auVar5._20_4_ = param_3;
    auVar5._24_4_ = param_3;
    auVar5._28_4_ = param_3;
    auVar7._4_4_ = param_4;
    auVar7._0_4_ = param_4;
    auVar7._8_4_ = param_4;
    auVar7._12_4_ = param_4;
    auVar7._16_4_ = param_4;
    auVar7._20_4_ = param_4;
    auVar7._24_4_ = param_4;
    auVar7._28_4_ = param_4;
    uVar4 = 0;
    uVar3 = 0;
    do {
      auVar6 = vmaxps_avx(*(undefined1 (*) [32])(param_1 + (ulonglong)uVar4),auVar5);
      auVar6 = vminps_avx(auVar6,auVar7);
      *(undefined1 (*) [32])(param_1 + (ulonglong)uVar4) = auVar6;
      uVar3 = uVar3 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar3 < (uVar1 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar3) {
      return;
    }
  }
  iVar2 = (int)uVar3;
  auVar6._4_4_ = iVar2;
  auVar6._0_4_ = iVar2;
  auVar6._8_4_ = iVar2;
  auVar6._12_4_ = iVar2;
  auVar6._16_4_ = iVar2;
  auVar6._20_4_ = iVar2;
  auVar6._24_4_ = iVar2;
  auVar6._28_4_ = iVar2;
  auVar5 = vpor_avx2(auVar6,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar8._4_4_ = param_2;
  auVar8._0_4_ = param_2;
  auVar8._8_4_ = param_2;
  auVar8._12_4_ = param_2;
  auVar8._16_4_ = param_2;
  auVar8._20_4_ = param_2;
  auVar8._24_4_ = param_2;
  auVar8._28_4_ = param_2;
  auVar7 = vpcmpgtd_avx2(auVar8,auVar5);
  auVar5 = vmaskmovps_avx(auVar7,*(undefined1 (*) [32])(param_1 + (iVar2 << 2)));
  auVar9._4_4_ = param_3;
  auVar9._0_4_ = param_3;
  auVar9._8_4_ = param_3;
  auVar9._12_4_ = param_3;
  auVar9._16_4_ = param_3;
  auVar9._20_4_ = param_3;
  auVar9._24_4_ = param_3;
  auVar9._28_4_ = param_3;
  auVar5 = vmaxps_avx(auVar5,auVar9);
  auVar10._4_4_ = param_4;
  auVar10._0_4_ = param_4;
  auVar10._8_4_ = param_4;
  auVar10._12_4_ = param_4;
  auVar10._16_4_ = param_4;
  auVar10._20_4_ = param_4;
  auVar10._24_4_ = param_4;
  auVar10._28_4_ = param_4;
  auVar5 = vminps_avx(auVar5,auVar10);
  auVar5 = vmaskmovps_avx(auVar7,auVar5);
  *(undefined1 (*) [32])(param_1 + (iVar2 << 2)) = auVar5;
  return;
}

// ArraySetToConstantInplace_avx2 @ 140a227c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySetToConstantInplace_avx2(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  if ((int)(uVar2 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar5 = 0;
    uVar4 = 0;
    do {
      puVar1 = (undefined4 *)(param_1 + (ulonglong)uVar5);
      *puVar1 = param_3;
      puVar1[1] = param_3;
      puVar1[2] = param_3;
      puVar1[3] = param_3;
      puVar1[4] = param_3;
      puVar1[5] = param_3;
      puVar1[6] = param_3;
      puVar1[7] = param_3;
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar2 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar6._4_4_ = iVar3;
  auVar6._0_4_ = iVar3;
  auVar6._8_4_ = iVar3;
  auVar6._12_4_ = iVar3;
  auVar6._16_4_ = iVar3;
  auVar6._20_4_ = iVar3;
  auVar6._24_4_ = iVar3;
  auVar6._28_4_ = iVar3;
  auVar6 = vpor_avx2(auVar6,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar7._4_4_ = param_2;
  auVar7._0_4_ = param_2;
  auVar7._8_4_ = param_2;
  auVar7._12_4_ = param_2;
  auVar7._16_4_ = param_2;
  auVar7._20_4_ = param_2;
  auVar7._24_4_ = param_2;
  auVar7._28_4_ = param_2;
  auVar6 = vpcmpgtd_avx2(auVar7,auVar6);
  auVar8._4_4_ = param_3;
  auVar8._0_4_ = param_3;
  auVar8._8_4_ = param_3;
  auVar8._12_4_ = param_3;
  auVar8._16_4_ = param_3;
  auVar8._20_4_ = param_3;
  auVar8._24_4_ = param_3;
  auVar8._28_4_ = param_3;
  auVar6 = vmaskmovps_avx(auVar6,auVar8);
  *(undefined1 (*) [32])(param_1 + (iVar3 << 2)) = auVar6;
  return;
}

// ArrayWeightedSumTwoGain_avx2 @ 140a22840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumTwoGain_avx2
               (longlong param_1,float param_2,longlong param_3,float param_4,longlong param_5,
               uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar21 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar21 = param_6;
  }
  if ((int)(uVar21 & 0xfffffff8) < 1) {
    uVar23 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar23 = 0;
    do {
      uVar20 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_3 + uVar20);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_1 + uVar20);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_5 + uVar20);
      *pfVar3 = param_2 * *pfVar2 + param_4 * *pfVar1;
      pfVar3[1] = param_2 * fVar4 + param_4 * fVar12;
      pfVar3[2] = param_2 * fVar5 + param_4 * fVar13;
      pfVar3[3] = param_2 * fVar6 + param_4 * fVar14;
      pfVar3[4] = param_2 * fVar7 + param_4 * fVar15;
      pfVar3[5] = param_2 * fVar8 + param_4 * fVar16;
      pfVar3[6] = param_2 * fVar9 + param_4 * fVar17;
      pfVar3[7] = param_2 * fVar10 + param_4 * fVar18;
      uVar23 = uVar23 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar23 < (uVar21 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar23) {
      return;
    }
  }
  iVar22 = (int)uVar23;
  auVar25._4_4_ = iVar22;
  auVar25._0_4_ = iVar22;
  auVar25._8_4_ = iVar22;
  auVar25._12_4_ = iVar22;
  auVar25._16_4_ = iVar22;
  auVar25._20_4_ = iVar22;
  auVar25._24_4_ = iVar22;
  auVar25._28_4_ = iVar22;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_6;
  auVar26._0_4_ = param_6;
  auVar26._8_4_ = param_6;
  auVar26._12_4_ = param_6;
  auVar26._16_4_ = param_6;
  auVar26._20_4_ = param_6;
  auVar26._24_4_ = param_6;
  auVar26._28_4_ = param_6;
  auVar11 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar19 = (longlong)(iVar22 << 2);
  auVar25 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar19));
  auVar26 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_3 + lVar19));
  auVar27._0_4_ = auVar25._0_4_ * param_2 + param_4 * auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * param_2 + param_4 * auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * param_2 + param_4 * auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * param_2 + param_4 * auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * param_2 + param_4 * auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * param_2 + param_4 * auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * param_2 + param_4 * auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * param_2 + param_4 * auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar11,auVar27);
  *(undefined1 (*) [32])(param_5 + lVar19) = auVar25;
  return;
}

// ArrayWeightedSumOneGain_avx2 @ 140a22910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumOneGain_avx2
               (longlong param_1,float param_2,longlong param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar20 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar20 = param_5;
  }
  if ((int)(uVar20 & 0xfffffff8) < 1) {
    uVar22 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    do {
      uVar23 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar23);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_3 + uVar23);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_4 + uVar23);
      *pfVar3 = param_2 * *pfVar1 + *pfVar2;
      pfVar3[1] = param_2 * fVar12 + fVar4;
      pfVar3[2] = param_2 * fVar13 + fVar5;
      pfVar3[3] = param_2 * fVar14 + fVar6;
      pfVar3[4] = param_2 * fVar15 + fVar7;
      pfVar3[5] = param_2 * fVar16 + fVar8;
      pfVar3[6] = param_2 * fVar17 + fVar9;
      pfVar3[7] = param_2 * fVar18 + fVar10;
      uVar22 = uVar22 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar22 < (uVar20 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar22) {
      return;
    }
  }
  iVar21 = (int)uVar22;
  auVar25._4_4_ = iVar21;
  auVar25._0_4_ = iVar21;
  auVar25._8_4_ = iVar21;
  auVar25._12_4_ = iVar21;
  auVar25._16_4_ = iVar21;
  auVar25._20_4_ = iVar21;
  auVar25._24_4_ = iVar21;
  auVar25._28_4_ = iVar21;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_5;
  auVar26._0_4_ = param_5;
  auVar26._8_4_ = param_5;
  auVar26._12_4_ = param_5;
  auVar26._16_4_ = param_5;
  auVar26._20_4_ = param_5;
  auVar26._24_4_ = param_5;
  auVar26._28_4_ = param_5;
  auVar11 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar19 = (longlong)(iVar21 << 2);
  auVar25 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar19));
  auVar26 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_3 + lVar19));
  auVar27._0_4_ = auVar25._0_4_ * param_2 + auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * param_2 + auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * param_2 + auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * param_2 + auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * param_2 + auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * param_2 + auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * param_2 + auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * param_2 + auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar11,auVar27);
  *(undefined1 (*) [32])(param_4 + lVar19) = auVar25;
  return;
}

// ArrayFade_avx2 @ 140a229b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade_avx2(longlong param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  auVar17 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  fVar15 = (param_4 - param_3) / (float)(int)param_2;
  uVar10 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar10 = param_2;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar11 = (undefined4)uVar13;
      auVar19._4_4_ = uVar11;
      auVar19._0_4_ = uVar11;
      auVar19._8_4_ = uVar11;
      auVar19._12_4_ = uVar11;
      auVar19._16_4_ = uVar11;
      auVar19._20_4_ = uVar11;
      auVar19._24_4_ = uVar11;
      auVar19._28_4_ = uVar11;
      auVar19 = vpor_avx2(auVar19,auVar17);
      auVar19 = vcvtdq2ps_avx(auVar19);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar14);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar14);
      *pfVar2 = (fVar15 * auVar19._0_4_ + param_3) * *pfVar1;
      pfVar2[1] = (fVar15 * auVar19._4_4_ + param_3) * fVar3;
      pfVar2[2] = (fVar15 * auVar19._8_4_ + param_3) * fVar4;
      pfVar2[3] = (fVar15 * auVar19._12_4_ + param_3) * fVar5;
      pfVar2[4] = (fVar15 * auVar19._16_4_ + param_3) * fVar6;
      pfVar2[5] = (fVar15 * auVar19._20_4_ + param_3) * fVar7;
      pfVar2[6] = (fVar15 * auVar19._24_4_ + param_3) * fVar8;
      pfVar2[7] = (fVar15 * auVar19._28_4_ + param_3) * fVar9;
      uVar13 = uVar13 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar13 < (uVar10 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar17._4_4_ = iVar12;
  auVar17._0_4_ = iVar12;
  auVar17._8_4_ = iVar12;
  auVar17._12_4_ = iVar12;
  auVar17._16_4_ = iVar12;
  auVar17._20_4_ = iVar12;
  auVar17._24_4_ = iVar12;
  auVar17._28_4_ = iVar12;
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18._4_4_ = param_2;
  auVar18._0_4_ = param_2;
  auVar18._8_4_ = param_2;
  auVar18._12_4_ = param_2;
  auVar18._16_4_ = param_2;
  auVar18._20_4_ = param_2;
  auVar18._24_4_ = param_2;
  auVar18._28_4_ = param_2;
  auVar18 = vpcmpgtd_avx2(auVar18,auVar17);
  auVar17 = vcvtdq2ps_avx(auVar17);
  auVar19 = vmaskmovps_avx(auVar18,*(undefined1 (*) [32])(param_1 + (iVar12 << 2)));
  auVar16._0_4_ = (auVar17._0_4_ * fVar15 + param_3) * auVar19._0_4_;
  auVar16._4_4_ = (auVar17._4_4_ * fVar15 + param_3) * auVar19._4_4_;
  auVar16._8_4_ = (auVar17._8_4_ * fVar15 + param_3) * auVar19._8_4_;
  auVar16._12_4_ = (auVar17._12_4_ * fVar15 + param_3) * auVar19._12_4_;
  auVar16._16_4_ = (auVar17._16_4_ * fVar15 + param_3) * auVar19._16_4_;
  auVar16._20_4_ = (auVar17._20_4_ * fVar15 + param_3) * auVar19._20_4_;
  auVar16._24_4_ = (auVar17._24_4_ * fVar15 + param_3) * auVar19._24_4_;
  auVar16._28_4_ = (auVar17._28_4_ * fVar15 + param_3) * auVar19._28_4_;
  auVar17 = vmaskmovps_avx(auVar18,auVar16);
  *(undefined1 (*) [32])(param_1 + (iVar12 << 2)) = auVar17;
  return;
}

// ArrayFade2_avx2 @ 140a22a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade2_avx2(longlong param_1,uint param_2,float param_3,float param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  auVar17 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  fVar15 = (param_4 - param_3) / (float)(int)param_2;
  uVar10 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar10 = param_2;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    do {
      uVar11 = (undefined4)uVar13;
      auVar19._4_4_ = uVar11;
      auVar19._0_4_ = uVar11;
      auVar19._8_4_ = uVar11;
      auVar19._12_4_ = uVar11;
      auVar19._16_4_ = uVar11;
      auVar19._20_4_ = uVar11;
      auVar19._24_4_ = uVar11;
      auVar19._28_4_ = uVar11;
      auVar19 = vpor_avx2(auVar19,auVar17);
      auVar19 = vcvtdq2ps_avx(auVar19);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar14);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_5 + (ulonglong)uVar14);
      *pfVar2 = (fVar15 * auVar19._0_4_ + param_3) * *pfVar1;
      pfVar2[1] = (fVar15 * auVar19._4_4_ + param_3) * fVar3;
      pfVar2[2] = (fVar15 * auVar19._8_4_ + param_3) * fVar4;
      pfVar2[3] = (fVar15 * auVar19._12_4_ + param_3) * fVar5;
      pfVar2[4] = (fVar15 * auVar19._16_4_ + param_3) * fVar6;
      pfVar2[5] = (fVar15 * auVar19._20_4_ + param_3) * fVar7;
      pfVar2[6] = (fVar15 * auVar19._24_4_ + param_3) * fVar8;
      pfVar2[7] = (fVar15 * auVar19._28_4_ + param_3) * fVar9;
      uVar13 = uVar13 + 8;
      uVar14 = uVar14 + 0x20;
    } while (uVar13 < (uVar10 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar17._4_4_ = iVar12;
  auVar17._0_4_ = iVar12;
  auVar17._8_4_ = iVar12;
  auVar17._12_4_ = iVar12;
  auVar17._16_4_ = iVar12;
  auVar17._20_4_ = iVar12;
  auVar17._24_4_ = iVar12;
  auVar17._28_4_ = iVar12;
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18._4_4_ = param_2;
  auVar18._0_4_ = param_2;
  auVar18._8_4_ = param_2;
  auVar18._12_4_ = param_2;
  auVar18._16_4_ = param_2;
  auVar18._20_4_ = param_2;
  auVar18._24_4_ = param_2;
  auVar18._28_4_ = param_2;
  auVar18 = vpcmpgtd_avx2(auVar18,auVar17);
  auVar17 = vcvtdq2ps_avx(auVar17);
  auVar19 = vmaskmovps_avx(auVar18,*(undefined1 (*) [32])(param_1 + (iVar12 << 2)));
  auVar16._0_4_ = (auVar17._0_4_ * fVar15 + param_3) * auVar19._0_4_;
  auVar16._4_4_ = (auVar17._4_4_ * fVar15 + param_3) * auVar19._4_4_;
  auVar16._8_4_ = (auVar17._8_4_ * fVar15 + param_3) * auVar19._8_4_;
  auVar16._12_4_ = (auVar17._12_4_ * fVar15 + param_3) * auVar19._12_4_;
  auVar16._16_4_ = (auVar17._16_4_ * fVar15 + param_3) * auVar19._16_4_;
  auVar16._20_4_ = (auVar17._20_4_ * fVar15 + param_3) * auVar19._20_4_;
  auVar16._24_4_ = (auVar17._24_4_ * fVar15 + param_3) * auVar19._24_4_;
  auVar16._28_4_ = (auVar17._28_4_ * fVar15 + param_3) * auVar19._28_4_;
  auVar17 = vmaskmovps_avx(auVar18,auVar16);
  *(undefined1 (*) [32])(param_5 + (iVar12 << 2)) = auVar17;
  return;
}

// ArrayMixInWithGain_avx2 @ 140a22b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithGain_avx2(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar19 = param_3;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar23 = 0;
    uVar21 = 0;
    do {
      uVar24 = (ulonglong)uVar23;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar24);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar24);
      *pfVar3 = param_4 * *pfVar1 + *pfVar2;
      pfVar3[1] = param_4 * fVar12 + fVar4;
      pfVar3[2] = param_4 * fVar13 + fVar5;
      pfVar3[3] = param_4 * fVar14 + fVar6;
      pfVar3[4] = param_4 * fVar15 + fVar7;
      pfVar3[5] = param_4 * fVar16 + fVar8;
      pfVar3[6] = param_4 * fVar17 + fVar9;
      pfVar3[7] = param_4 * fVar18 + fVar10;
      uVar21 = uVar21 + 8;
      uVar23 = uVar23 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_3;
  auVar26._0_4_ = param_3;
  auVar26._8_4_ = param_3;
  auVar26._12_4_ = param_3;
  auVar26._16_4_ = param_3;
  auVar26._20_4_ = param_3;
  auVar26._24_4_ = param_3;
  auVar26._28_4_ = param_3;
  auVar11 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ * param_4 + auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ * param_4 + auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ * param_4 + auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ * param_4 + auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ * param_4 + auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ * param_4 + auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ * param_4 + auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ * param_4 + auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar11,auVar27);
  *(undefined1 (*) [32])(param_2 + lVar22) = auVar25;
  return;
}

// ArrayMixIn_avx2 @ 140a22c00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixIn_avx2(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  
  uVar19 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar19 = param_3;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar23 = 0;
    uVar21 = 0;
    do {
      uVar24 = (ulonglong)uVar23;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      fVar8 = pfVar1[4];
      fVar9 = pfVar1[5];
      fVar10 = pfVar1[6];
      fVar11 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar24);
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      fVar15 = pfVar2[4];
      fVar16 = pfVar2[5];
      fVar17 = pfVar2[6];
      fVar18 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar24);
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar5 + fVar12;
      pfVar3[2] = fVar6 + fVar13;
      pfVar3[3] = fVar7 + fVar14;
      pfVar3[4] = fVar8 + fVar15;
      pfVar3[5] = fVar9 + fVar16;
      pfVar3[6] = fVar10 + fVar17;
      pfVar3[7] = fVar11 + fVar18;
      uVar21 = uVar21 + 8;
      uVar23 = uVar23 + 0x20;
    } while (uVar21 < (uVar19 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar21) {
      return;
    }
  }
  iVar20 = (int)uVar21;
  auVar25._4_4_ = iVar20;
  auVar25._0_4_ = iVar20;
  auVar25._8_4_ = iVar20;
  auVar25._12_4_ = iVar20;
  auVar25._16_4_ = iVar20;
  auVar25._20_4_ = iVar20;
  auVar25._24_4_ = iVar20;
  auVar25._28_4_ = iVar20;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_3;
  auVar26._0_4_ = param_3;
  auVar26._8_4_ = param_3;
  auVar26._12_4_ = param_3;
  auVar26._16_4_ = param_3;
  auVar26._20_4_ = param_3;
  auVar26._24_4_ = param_3;
  auVar26._28_4_ = param_3;
  auVar4 = vpcmpgtd_avx2(auVar26,auVar25);
  lVar22 = (longlong)(iVar20 << 2);
  auVar25 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_1 + lVar22));
  auVar26 = vmaskmovps_avx(auVar4,*(undefined1 (*) [32])(param_2 + lVar22));
  auVar27._0_4_ = auVar25._0_4_ + auVar26._0_4_;
  auVar27._4_4_ = auVar25._4_4_ + auVar26._4_4_;
  auVar27._8_4_ = auVar25._8_4_ + auVar26._8_4_;
  auVar27._12_4_ = auVar25._12_4_ + auVar26._12_4_;
  auVar27._16_4_ = auVar25._16_4_ + auVar26._16_4_;
  auVar27._20_4_ = auVar25._20_4_ + auVar26._20_4_;
  auVar27._24_4_ = auVar25._24_4_ + auVar26._24_4_;
  auVar27._28_4_ = auVar25._28_4_ + auVar26._28_4_;
  auVar25 = vmaskmovps_avx(auVar4,auVar27);
  *(undefined1 (*) [32])(param_2 + lVar22) = auVar25;
  return;
}

// ArrayMixInWithDelta_avx2 @ 140a22ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithDelta_avx2
               (longlong param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [32];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  
  auVar27 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  fVar26 = (param_5 - param_4) / (float)(int)param_3;
  uVar19 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar19 = param_3;
  }
  if ((int)(uVar19 & 0xfffffff8) < 1) {
    uVar22 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar24 = 0;
    uVar22 = 0;
    do {
      uVar20 = (undefined4)uVar22;
      auVar30._4_4_ = uVar20;
      auVar30._0_4_ = uVar20;
      auVar30._8_4_ = uVar20;
      auVar30._12_4_ = uVar20;
      auVar30._16_4_ = uVar20;
      auVar30._20_4_ = uVar20;
      auVar30._24_4_ = uVar20;
      auVar30._28_4_ = uVar20;
      auVar30 = vpor_avx2(auVar30,auVar27);
      auVar30 = vcvtdq2ps_avx(auVar30);
      uVar25 = (ulonglong)uVar24;
      pfVar1 = (float *)(param_1 + uVar25);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      fVar15 = pfVar1[4];
      fVar16 = pfVar1[5];
      fVar17 = pfVar1[6];
      fVar18 = pfVar1[7];
      pfVar2 = (float *)(param_2 + uVar25);
      fVar4 = pfVar2[1];
      fVar5 = pfVar2[2];
      fVar6 = pfVar2[3];
      fVar7 = pfVar2[4];
      fVar8 = pfVar2[5];
      fVar9 = pfVar2[6];
      fVar10 = pfVar2[7];
      pfVar3 = (float *)(param_2 + uVar25);
      *pfVar3 = (fVar26 * auVar30._0_4_ + param_4) * *pfVar1 + *pfVar2;
      pfVar3[1] = (fVar26 * auVar30._4_4_ + param_4) * fVar12 + fVar4;
      pfVar3[2] = (fVar26 * auVar30._8_4_ + param_4) * fVar13 + fVar5;
      pfVar3[3] = (fVar26 * auVar30._12_4_ + param_4) * fVar14 + fVar6;
      pfVar3[4] = (fVar26 * auVar30._16_4_ + param_4) * fVar15 + fVar7;
      pfVar3[5] = (fVar26 * auVar30._20_4_ + param_4) * fVar16 + fVar8;
      pfVar3[6] = (fVar26 * auVar30._24_4_ + param_4) * fVar17 + fVar9;
      pfVar3[7] = (fVar26 * auVar30._28_4_ + param_4) * fVar18 + fVar10;
      uVar22 = uVar22 + 8;
      uVar24 = uVar24 + 0x20;
    } while (uVar22 < (uVar19 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar22) {
      return;
    }
  }
  iVar21 = (int)uVar22;
  auVar27._4_4_ = iVar21;
  auVar27._0_4_ = iVar21;
  auVar27._8_4_ = iVar21;
  auVar27._12_4_ = iVar21;
  auVar27._16_4_ = iVar21;
  auVar27._20_4_ = iVar21;
  auVar27._24_4_ = iVar21;
  auVar27._28_4_ = iVar21;
  auVar27 = vpor_avx2(auVar27,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar29._4_4_ = param_3;
  auVar29._0_4_ = param_3;
  auVar29._8_4_ = param_3;
  auVar29._12_4_ = param_3;
  auVar29._16_4_ = param_3;
  auVar29._20_4_ = param_3;
  auVar29._24_4_ = param_3;
  auVar29._28_4_ = param_3;
  auVar11 = vpcmpgtd_avx2(auVar29,auVar27);
  auVar27 = vcvtdq2ps_avx(auVar27);
  lVar23 = (longlong)(iVar21 << 2);
  auVar30 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar23));
  auVar29 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_2 + lVar23));
  auVar28._0_4_ = (auVar27._0_4_ * fVar26 + param_4) * auVar30._0_4_ + auVar29._0_4_;
  auVar28._4_4_ = (auVar27._4_4_ * fVar26 + param_4) * auVar30._4_4_ + auVar29._4_4_;
  auVar28._8_4_ = (auVar27._8_4_ * fVar26 + param_4) * auVar30._8_4_ + auVar29._8_4_;
  auVar28._12_4_ = (auVar27._12_4_ * fVar26 + param_4) * auVar30._12_4_ + auVar29._12_4_;
  auVar28._16_4_ = (auVar27._16_4_ * fVar26 + param_4) * auVar30._16_4_ + auVar29._16_4_;
  auVar28._20_4_ = (auVar27._20_4_ * fVar26 + param_4) * auVar30._20_4_ + auVar29._20_4_;
  auVar28._24_4_ = (auVar27._24_4_ * fVar26 + param_4) * auVar30._24_4_ + auVar29._24_4_;
  auVar28._28_4_ = (auVar27._28_4_ * fVar26 + param_4) * auVar30._28_4_ + auVar29._28_4_;
  auVar27 = vmaskmovps_avx(auVar11,auVar28);
  *(undefined1 (*) [32])(param_2 + lVar23) = auVar27;
  return;
}

// TransformArrayRow_avx2 @ 140a22da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformArrayRow_avx2
               (longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [64];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar4 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar4 = param_5;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar8 = ZEXT1632(ZEXT816(0));
    auVar7 = ZEXT1632(ZEXT816(0));
    if ((int)param_5 < 1) goto LAB_140a22e3b;
  }
  else {
    auVar9 = ZEXT864(0);
    uVar3 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar3);
      pfVar2 = (float *)(param_2 + (ulonglong)uVar3);
      auVar7._0_4_ = *pfVar1 * *pfVar2 + auVar9._0_4_;
      auVar7._4_4_ = pfVar1[1] * pfVar2[1] + auVar9._4_4_;
      auVar7._8_4_ = pfVar1[2] * pfVar2[2] + auVar9._8_4_;
      auVar7._12_4_ = pfVar1[3] * pfVar2[3] + auVar9._12_4_;
      auVar7._16_4_ = pfVar1[4] * pfVar2[4] + auVar9._16_4_;
      auVar7._20_4_ = pfVar1[5] * pfVar2[5] + auVar9._20_4_;
      auVar7._24_4_ = pfVar1[6] * pfVar2[6] + auVar9._24_4_;
      auVar7._28_4_ = pfVar1[7] * pfVar2[7] + auVar9._28_4_;
      auVar9 = ZEXT3264(auVar7);
      uVar6 = uVar6 + 8;
      uVar3 = uVar3 + 0x20;
    } while (uVar6 < (uVar4 & 0xfffffff8));
    auVar8 = auVar7;
    if ((int)param_5 <= (int)uVar6) goto LAB_140a22e3b;
  }
  iVar5 = (int)uVar6;
  auVar10._4_4_ = iVar5;
  auVar10._0_4_ = iVar5;
  auVar10._8_4_ = iVar5;
  auVar10._12_4_ = iVar5;
  auVar10._16_4_ = iVar5;
  auVar10._20_4_ = iVar5;
  auVar10._24_4_ = iVar5;
  auVar10._28_4_ = iVar5;
  auVar7 = vpor_avx2(auVar10,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar11._4_4_ = param_5;
  auVar11._0_4_ = param_5;
  auVar11._8_4_ = param_5;
  auVar11._12_4_ = param_5;
  auVar11._16_4_ = param_5;
  auVar11._20_4_ = param_5;
  auVar11._24_4_ = param_5;
  auVar11._28_4_ = param_5;
  auVar11 = vpcmpgtd_avx2(auVar11,auVar7);
  auVar7 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + (iVar5 << 2)));
  auVar10 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_2 + (iVar5 << 2)));
  auVar12._0_4_ = auVar7._0_4_ * auVar10._0_4_;
  auVar12._4_4_ = auVar7._4_4_ * auVar10._4_4_;
  auVar12._8_4_ = auVar7._8_4_ * auVar10._8_4_;
  auVar12._12_4_ = auVar7._12_4_ * auVar10._12_4_;
  auVar12._16_4_ = auVar7._16_4_ * auVar10._16_4_;
  auVar12._20_4_ = auVar7._20_4_ * auVar10._20_4_;
  auVar12._24_4_ = auVar7._24_4_ * auVar10._24_4_;
  auVar12._28_4_ = auVar7._28_4_ * auVar10._28_4_;
  auVar13._4_4_ = __real_80000000;
  auVar13._0_4_ = __real_80000000;
  auVar13._8_4_ = __real_80000000;
  auVar13._12_4_ = __real_80000000;
  auVar13._16_4_ = __real_80000000;
  auVar13._20_4_ = __real_80000000;
  auVar13._24_4_ = __real_80000000;
  auVar13._28_4_ = __real_80000000;
  auVar10 = vblendvps_avx(auVar13,auVar12,auVar11);
  auVar7._0_4_ = auVar8._0_4_ + auVar10._0_4_;
  auVar7._4_4_ = auVar8._4_4_ + auVar10._4_4_;
  auVar7._8_4_ = auVar8._8_4_ + auVar10._8_4_;
  auVar7._12_4_ = auVar8._12_4_ + auVar10._12_4_;
  auVar7._16_4_ = auVar8._16_4_ + auVar10._16_4_;
  auVar7._20_4_ = auVar8._20_4_ + auVar10._20_4_;
  auVar7._24_4_ = auVar8._24_4_ + auVar10._24_4_;
  auVar7._28_4_ = auVar8._28_4_ + auVar10._28_4_;
LAB_140a22e3b:
  auVar8 = vhaddps_avx(auVar7,auVar7);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  *(float *)(param_3 + (longlong)param_4 * 4) =
       auVar8._0_4_ + auVar8._16_4_ + *(float *)(param_3 + (longlong)param_4 * 4);
  return;
}

// ArrayFloatToPcm16_avx2 @ 140a22e70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFloatToPcm16_avx2(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar10 [32];
  undefined1 auVar12 [32];
  
  fVar2 = __real_46fffe00;
  uVar6 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      auVar11._0_4_ = (int)(fVar2 * *pfVar1);
      auVar11._4_4_ = (int)(fVar2 * pfVar1[1]);
      auVar11._8_4_ = (int)(fVar2 * pfVar1[2]);
      auVar11._12_4_ = (int)(fVar2 * pfVar1[3]);
      auVar12._16_4_ = (int)(fVar2 * pfVar1[4]);
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = (int)(fVar2 * pfVar1[5]);
      auVar12._24_4_ = (int)(fVar2 * pfVar1[6]);
      auVar12._28_4_ = (int)(fVar2 * pfVar1[7]);
      auVar11 = vpackssdw_avx(auVar11,auVar12._16_16_);
      *(undefined1 (*) [16])(param_2 + uVar4 * 2) = auVar11;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar6 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar9._4_4_ = iVar3;
  auVar9._0_4_ = iVar3;
  auVar9._8_4_ = iVar3;
  auVar9._12_4_ = iVar3;
  auVar9._16_4_ = iVar3;
  auVar9._20_4_ = iVar3;
  auVar9._24_4_ = iVar3;
  auVar9._28_4_ = iVar3;
  auVar12 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                     );
  auVar13._4_4_ = param_3;
  auVar13._0_4_ = param_3;
  auVar13._8_4_ = param_3;
  auVar13._12_4_ = param_3;
  auVar13._16_4_ = param_3;
  auVar13._20_4_ = param_3;
  auVar13._24_4_ = param_3;
  auVar13._28_4_ = param_3;
  auVar9 = vpcmpgtd_avx2(auVar13,auVar12);
  auVar12 = vmaskmovps_avx(auVar9,*(undefined1 (*) [32])(param_1 + (iVar3 << 2)));
  auVar8._0_4_ = (int)(auVar12._0_4_ * __real_46fffe00);
  auVar8._4_4_ = (int)(auVar12._4_4_ * __real_46fffe00);
  auVar8._8_4_ = (int)(auVar12._8_4_ * __real_46fffe00);
  auVar8._12_4_ = (int)(auVar12._12_4_ * __real_46fffe00);
  auVar10._16_4_ = (int)(auVar12._16_4_ * __real_46fffe00);
  auVar10._0_16_ = auVar8;
  auVar10._20_4_ = (int)(auVar12._20_4_ * __real_46fffe00);
  auVar10._24_4_ = (int)(auVar12._24_4_ * __real_46fffe00);
  auVar10._28_4_ = (int)(auVar12._28_4_ * __real_46fffe00);
  auVar11 = vpackssdw_avx(auVar8,auVar10._16_16_);
  lVar5 = (longlong)(iVar3 * 2);
  uVar6 = vmovmskps_avx(auVar9);
  if ((uVar6 & 1) != 0) {
    *(short *)(param_2 + lVar5) = auVar11._0_2_;
  }
  if ((uVar6 & 2) != 0) {
    *(short *)(param_2 + 2 + lVar5) = auVar11._2_2_;
  }
  if ((uVar6 & 4) != 0) {
    *(short *)(param_2 + 4 + lVar5) = auVar11._4_2_;
  }
  if ((uVar6 & 8) != 0) {
    *(short *)(param_2 + 6 + lVar5) = auVar11._6_2_;
  }
  if ((uVar6 & 0x10) != 0) {
    *(short *)(param_2 + 8 + lVar5) = auVar11._8_2_;
  }
  if ((uVar6 & 0x20) != 0) {
    *(short *)(param_2 + 10 + lVar5) = auVar11._10_2_;
  }
  if ((uVar6 & 0x40) != 0) {
    *(short *)(param_2 + 0xc + lVar5) = auVar11._12_2_;
  }
  if (-1 < (char)uVar6) {
    return;
  }
  *(short *)(param_2 + 0xe + lVar5) = auVar11._14_2_;
  return;
}

// ArrayPcm16ToFloat_avx2 @ 140a22fd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPcm16ToFloat_avx2(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  undefined2 uVar2;
  float fVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  undefined1 auVar12 [32];
  undefined1 auVar11 [32];
  
  fVar3 = __real_38000100;
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    do {
      auVar9 = vpmovsxwd_avx2(*(undefined1 (*) [16])(param_1 + uVar7 * 2));
      auVar9 = vcvtdq2ps_avx(auVar9);
      pfVar1 = (float *)(param_2 + (ulonglong)uVar8);
      *pfVar1 = auVar9._0_4_ * fVar3;
      pfVar1[1] = auVar9._4_4_ * fVar3;
      pfVar1[2] = auVar9._8_4_ * fVar3;
      pfVar1[3] = auVar9._12_4_ * fVar3;
      pfVar1[4] = auVar9._16_4_ * fVar3;
      pfVar1[5] = auVar9._20_4_ * fVar3;
      pfVar1[6] = auVar9._24_4_ * fVar3;
      pfVar1[7] = auVar9._28_4_ * fVar3;
      uVar7 = uVar7 + 8;
      uVar8 = uVar8 + 0x20;
    } while (uVar7 < (uVar5 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
  }
  iVar6 = (int)uVar7;
  auVar9._4_4_ = iVar6;
  auVar9._0_4_ = iVar6;
  auVar9._8_4_ = iVar6;
  auVar9._12_4_ = iVar6;
  auVar9._16_4_ = iVar6;
  auVar9._20_4_ = iVar6;
  auVar9._24_4_ = iVar6;
  auVar9._28_4_ = iVar6;
  auVar9 = vpor_avx2(auVar9,___ymm_0000000700000006000000050000000400000003000000020000000100000000)
  ;
  auVar10._4_4_ = param_3;
  auVar10._0_4_ = param_3;
  auVar10._8_4_ = param_3;
  auVar10._12_4_ = param_3;
  auVar11._16_4_ = param_3;
  auVar11._0_16_ = auVar10;
  auVar11._20_4_ = param_3;
  auVar11._24_4_ = param_3;
  auVar11._28_4_ = param_3;
  auVar9 = vpcmpgtd_avx2(auVar11,auVar9);
  uVar5 = vmovmskps_avx(auVar9);
  if ((~(byte)uVar5 & 0x81) == 0) {
    auVar10 = *(undefined1 (*) [16])(param_1 + iVar6 * 2);
  }
  else {
    puVar4 = (undefined2 *)(param_1 + iVar6 * 2);
    if ((uVar5 & 1) != 0) {
      uVar2 = *puVar4;
      auVar10._2_2_ = uVar2;
      auVar10._0_2_ = uVar2;
      auVar10._4_2_ = uVar2;
      auVar10._6_2_ = uVar2;
      auVar10._8_2_ = uVar2;
      auVar10._10_2_ = uVar2;
      auVar10._12_2_ = uVar2;
      auVar10._14_2_ = uVar2;
    }
    if ((uVar5 & 2) != 0) {
      auVar10 = vpinsrw_avx(auVar10,(uint)(ushort)puVar4[1],1);
    }
    if ((uVar5 & 4) != 0) {
      auVar10 = vpinsrw_avx(auVar10,(uint)(ushort)puVar4[2],2);
    }
    if ((uVar5 & 8) != 0) {
      auVar10 = vpinsrw_avx(auVar10,(uint)(ushort)puVar4[3],3);
    }
    if ((uVar5 & 0x10) != 0) {
      auVar10 = vpinsrw_avx(auVar10,(uint)(ushort)puVar4[4],4);
    }
    if ((uVar5 & 0x20) != 0) {
      auVar10 = vpinsrw_avx(auVar10,(uint)(ushort)puVar4[5],5);
    }
    if ((uVar5 & 0x40) != 0) {
      auVar10 = vpinsrw_avx(auVar10,(uint)(ushort)puVar4[6],6);
    }
    if ((uVar5 & 0x80) != 0) {
      auVar10 = vpinsrw_avx(auVar10,(uint)(ushort)puVar4[7],7);
    }
  }
  auVar11 = vpmovsxwd_avx2(auVar10);
  auVar11 = vcvtdq2ps_avx(auVar11);
  auVar12._0_4_ = auVar11._0_4_ * __real_38000100;
  auVar12._4_4_ = auVar11._4_4_ * __real_38000100;
  auVar12._8_4_ = auVar11._8_4_ * __real_38000100;
  auVar12._12_4_ = auVar11._12_4_ * __real_38000100;
  auVar12._16_4_ = auVar11._16_4_ * __real_38000100;
  auVar12._20_4_ = auVar11._20_4_ * __real_38000100;
  auVar12._24_4_ = auVar11._24_4_ * __real_38000100;
  auVar12._28_4_ = auVar11._28_4_ * __real_38000100;
  auVar9 = vmaskmovps_avx(auVar9,auVar12);
  *(undefined1 (*) [32])(param_2 + iVar6 * 4) = auVar9;
  return;
}

// ArrayAPFLongDelayProcess_avx2 @ 140a23130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAPFLongDelayProcess_avx2
               (longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
               float param_6)

{
  float *pfVar1;
  undefined1 auVar2 [32];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auVar17 [32];
  float fVar18;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar14 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar14 = param_3;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar16 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    fVar18 = (float)((uint)param_6 ^ __real_80000000);
    uVar11 = 0;
    uVar16 = 0;
    do {
      uVar12 = (ulonglong)uVar11;
      pfVar1 = (float *)(param_2 + uVar12);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      fVar7 = pfVar1[4];
      fVar8 = pfVar1[5];
      fVar9 = pfVar1[6];
      fVar10 = pfVar1[7];
      pfVar1 = (float *)(param_1 + uVar12);
      fVar22 = param_6 * fVar3 + *pfVar1;
      fVar23 = param_6 * fVar4 + pfVar1[1];
      fVar24 = param_6 * fVar5 + pfVar1[2];
      fVar25 = param_6 * fVar6 + pfVar1[3];
      fVar26 = param_6 * fVar7 + pfVar1[4];
      fVar27 = param_6 * fVar8 + pfVar1[5];
      fVar28 = param_6 * fVar9 + pfVar1[6];
      fVar29 = param_6 * fVar10 + pfVar1[7];
      pfVar1 = (float *)(param_5 + uVar12);
      *pfVar1 = fVar22;
      pfVar1[1] = fVar23;
      pfVar1[2] = fVar24;
      pfVar1[3] = fVar25;
      pfVar1[4] = fVar26;
      pfVar1[5] = fVar27;
      pfVar1[6] = fVar28;
      pfVar1[7] = fVar29;
      pfVar1 = (float *)(param_4 + uVar12);
      *pfVar1 = fVar18 * fVar22 + fVar3;
      pfVar1[1] = fVar18 * fVar23 + fVar4;
      pfVar1[2] = fVar18 * fVar24 + fVar5;
      pfVar1[3] = fVar18 * fVar25 + fVar6;
      pfVar1[4] = fVar18 * fVar26 + fVar7;
      pfVar1[5] = fVar18 * fVar27 + fVar8;
      pfVar1[6] = fVar18 * fVar28 + fVar9;
      pfVar1[7] = fVar18 * fVar29 + fVar10;
      uVar16 = uVar16 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar16 < (uVar14 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar16) {
      return;
    }
  }
  iVar15 = (int)uVar16;
  auVar17._4_4_ = iVar15;
  auVar17._0_4_ = iVar15;
  auVar17._8_4_ = iVar15;
  auVar17._12_4_ = iVar15;
  auVar17._16_4_ = iVar15;
  auVar17._20_4_ = iVar15;
  auVar17._24_4_ = iVar15;
  auVar17._28_4_ = iVar15;
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar19._4_4_ = param_3;
  auVar19._0_4_ = param_3;
  auVar19._8_4_ = param_3;
  auVar19._12_4_ = param_3;
  auVar19._16_4_ = param_3;
  auVar19._20_4_ = param_3;
  auVar19._24_4_ = param_3;
  auVar19._28_4_ = param_3;
  auVar2 = vpcmpgtd_avx2(auVar19,auVar17);
  lVar13 = (longlong)(iVar15 << 2);
  auVar19 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_2 + lVar13));
  auVar17 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_1 + lVar13));
  auVar20._0_4_ = param_6 * auVar19._0_4_ + auVar17._0_4_;
  auVar20._4_4_ = param_6 * auVar19._4_4_ + auVar17._4_4_;
  auVar20._8_4_ = param_6 * auVar19._8_4_ + auVar17._8_4_;
  auVar20._12_4_ = param_6 * auVar19._12_4_ + auVar17._12_4_;
  auVar20._16_4_ = param_6 * auVar19._16_4_ + auVar17._16_4_;
  auVar20._20_4_ = param_6 * auVar19._20_4_ + auVar17._20_4_;
  auVar20._24_4_ = param_6 * auVar19._24_4_ + auVar17._24_4_;
  auVar20._28_4_ = param_6 * auVar19._28_4_ + auVar17._28_4_;
  auVar17 = vmaskmovps_avx(auVar2,auVar20);
  *(undefined1 (*) [32])(param_5 + lVar13) = auVar17;
  auVar17 = vmaskmovps_avx(auVar2,*(undefined1 (*) [32])(param_5 + lVar13));
  auVar21._0_4_ = -(param_6 * auVar17._0_4_) + auVar19._0_4_;
  auVar21._4_4_ = -(param_6 * auVar17._4_4_) + auVar19._4_4_;
  auVar21._8_4_ = -(param_6 * auVar17._8_4_) + auVar19._8_4_;
  auVar21._12_4_ = -(param_6 * auVar17._12_4_) + auVar19._12_4_;
  auVar21._16_4_ = -(param_6 * auVar17._16_4_) + auVar19._16_4_;
  auVar21._20_4_ = -(param_6 * auVar17._20_4_) + auVar19._20_4_;
  auVar21._24_4_ = -(param_6 * auVar17._24_4_) + auVar19._24_4_;
  auVar21._28_4_ = -(param_6 * auVar17._28_4_) + auVar19._28_4_;
  auVar17 = vmaskmovps_avx(auVar2,auVar21);
  *(undefined1 (*) [32])(param_4 + lVar13) = auVar17;
  return;
}

// ArrayLerpFractionalDelay_avx2 @ 140a23220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpFractionalDelay_avx2
               (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,uint param_5
               ,longlong param_6,undefined4 param_7)

{
  float *pfVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar5 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar5 = param_5;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar9._4_4_ = param_7;
    auVar9._0_4_ = param_7;
    auVar9._8_4_ = param_7;
    auVar9._12_4_ = param_7;
    auVar9._16_4_ = param_7;
    auVar9._20_4_ = param_7;
    auVar9._24_4_ = param_7;
    auVar9._28_4_ = param_7;
    uVar3 = 0;
    auVar12._4_4_ = __real_3f800000;
    auVar12._0_4_ = __real_3f800000;
    auVar12._8_4_ = __real_3f800000;
    auVar12._12_4_ = __real_3f800000;
    auVar12._16_4_ = __real_3f800000;
    auVar12._20_4_ = __real_3f800000;
    auVar12._24_4_ = __real_3f800000;
    auVar12._28_4_ = __real_3f800000;
    uVar7 = 0;
    do {
      uVar4 = (ulonglong)uVar3;
      auVar13 = vmaxps_avx(*(undefined1 (*) [32])(param_2 + uVar4),ZEXT1232(ZEXT812(0)));
      auVar10 = vminps_avx(auVar13,auVar9);
      auVar8 = vroundps_avx(auVar10,9);
      auVar15._0_4_ = (int)auVar8._0_4_;
      auVar15._4_4_ = (int)auVar8._4_4_;
      auVar15._8_4_ = (int)auVar8._8_4_;
      auVar15._12_4_ = (int)auVar8._12_4_;
      auVar15._16_4_ = (int)auVar8._16_4_;
      auVar15._20_4_ = (int)auVar8._20_4_;
      auVar15._24_4_ = (int)auVar8._24_4_;
      auVar15._28_4_ = (int)auVar8._28_4_;
      auVar13 = *(undefined1 (*) [32])(param_4 + uVar4);
      auVar15 = vpsubd_avx2(auVar13,auVar15);
      vpslld_avx2(auVar15,2);
      auVar13 = vpcmpeqd_avx2(auVar13,auVar13);
      auVar15 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar13);
      auVar13 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar16 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar13);
      auVar13 = vsubps_avx(auVar10,auVar8);
      auVar10 = vsubps_avx(auVar12,auVar13);
      pfVar1 = (float *)(param_6 + uVar4);
      *pfVar1 = auVar10._0_4_ * auVar16._0_4_ + auVar15._0_4_ * auVar13._0_4_;
      pfVar1[1] = auVar10._4_4_ * auVar16._4_4_ + auVar15._4_4_ * auVar13._4_4_;
      pfVar1[2] = auVar10._8_4_ * auVar16._8_4_ + auVar15._8_4_ * auVar13._8_4_;
      pfVar1[3] = auVar10._12_4_ * auVar16._12_4_ + auVar15._12_4_ * auVar13._12_4_;
      pfVar1[4] = auVar10._16_4_ * auVar16._16_4_ + auVar15._16_4_ * auVar13._16_4_;
      pfVar1[5] = auVar10._20_4_ * auVar16._20_4_ + auVar15._20_4_ * auVar13._20_4_;
      pfVar1[6] = auVar10._24_4_ * auVar16._24_4_ + auVar15._24_4_ * auVar13._24_4_;
      pfVar1[7] = auVar10._28_4_ * auVar16._28_4_ + auVar15._28_4_ * auVar13._28_4_;
      uVar7 = uVar7 + 8;
      uVar3 = uVar3 + 0x20;
    } while (uVar7 < (uVar5 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar7) {
      return;
    }
  }
  iVar6 = (int)uVar7;
  auVar10._4_4_ = iVar6;
  auVar10._0_4_ = iVar6;
  auVar10._8_4_ = iVar6;
  auVar10._12_4_ = iVar6;
  auVar10._16_4_ = iVar6;
  auVar10._20_4_ = iVar6;
  auVar10._24_4_ = iVar6;
  auVar10._28_4_ = iVar6;
  auVar9 = vpor_avx2(auVar10,___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    );
  auVar16._4_4_ = param_5;
  auVar16._0_4_ = param_5;
  auVar16._8_4_ = param_5;
  auVar16._12_4_ = param_5;
  auVar16._16_4_ = param_5;
  auVar16._20_4_ = param_5;
  auVar16._24_4_ = param_5;
  auVar16._28_4_ = param_5;
  auVar10 = vpcmpgtd_avx2(auVar16,auVar9);
  lVar2 = (longlong)(iVar6 << 2);
  auVar9 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_2 + lVar2));
  auVar9 = vmaxps_avx(auVar9,ZEXT1232(ZEXT812(0)));
  auVar13._4_4_ = param_7;
  auVar13._0_4_ = param_7;
  auVar13._8_4_ = param_7;
  auVar13._12_4_ = param_7;
  auVar13._16_4_ = param_7;
  auVar13._20_4_ = param_7;
  auVar13._24_4_ = param_7;
  auVar13._28_4_ = param_7;
  auVar9 = vminps_avx(auVar9,auVar13);
  auVar12 = vroundps_avx(auVar9,9);
  auVar13 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_4 + lVar2));
  auVar14._0_4_ = (int)auVar12._0_4_;
  auVar14._4_4_ = (int)auVar12._4_4_;
  auVar14._8_4_ = (int)auVar12._8_4_;
  auVar14._12_4_ = (int)auVar12._12_4_;
  auVar14._16_4_ = (int)auVar12._16_4_;
  auVar14._20_4_ = (int)auVar12._20_4_;
  auVar14._24_4_ = (int)auVar12._24_4_;
  auVar14._28_4_ = (int)auVar12._28_4_;
  auVar13 = vpsubd_avx2(auVar13,auVar14);
  vpslld_avx2(auVar13,2);
  auVar15 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar10);
  auVar9 = vsubps_avx(auVar9,auVar12);
  auVar13 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar10);
  auVar11._4_4_ = __real_3f800000;
  auVar11._0_4_ = __real_3f800000;
  auVar11._8_4_ = __real_3f800000;
  auVar11._12_4_ = __real_3f800000;
  auVar11._16_4_ = __real_3f800000;
  auVar11._20_4_ = __real_3f800000;
  auVar11._24_4_ = __real_3f800000;
  auVar11._28_4_ = __real_3f800000;
  auVar12 = vsubps_avx(auVar11,auVar9);
  auVar8._0_4_ = auVar12._0_4_ * auVar15._0_4_ + auVar9._0_4_ * auVar13._0_4_;
  auVar8._4_4_ = auVar12._4_4_ * auVar15._4_4_ + auVar9._4_4_ * auVar13._4_4_;
  auVar8._8_4_ = auVar12._8_4_ * auVar15._8_4_ + auVar9._8_4_ * auVar13._8_4_;
  auVar8._12_4_ = auVar12._12_4_ * auVar15._12_4_ + auVar9._12_4_ * auVar13._12_4_;
  auVar8._16_4_ = auVar12._16_4_ * auVar15._16_4_ + auVar9._16_4_ * auVar13._16_4_;
  auVar8._20_4_ = auVar12._20_4_ * auVar15._20_4_ + auVar9._20_4_ * auVar13._20_4_;
  auVar8._24_4_ = auVar12._24_4_ * auVar15._24_4_ + auVar9._24_4_ * auVar13._24_4_;
  auVar8._28_4_ = auVar12._28_4_ * auVar15._28_4_ + auVar9._28_4_ * auVar13._28_4_;
  auVar9 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_6 + lVar2) = auVar9;
  return;
}

// ArrayScaledComplexConjugate_avx2 @ 140a233f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayScaledComplexConjugate_avx2(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  auVar14._4_4_ = param_4;
  auVar14._0_4_ = param_4;
  auVar14._8_4_ = param_4;
  auVar14._12_4_ = param_4;
  auVar14._16_4_ = param_4;
  auVar14._20_4_ = param_4;
  auVar14._24_4_ = param_4;
  auVar14._28_4_ = param_4;
  auVar16._0_4_ = param_4 ^ __real_80000000;
  auVar16._4_4_ = auVar16._0_4_;
  auVar16._8_4_ = auVar16._0_4_;
  auVar16._12_4_ = auVar16._0_4_;
  auVar16._16_4_ = auVar16._0_4_;
  auVar16._20_4_ = auVar16._0_4_;
  auVar16._24_4_ = auVar16._0_4_;
  auVar16._28_4_ = auVar16._0_4_;
  auVar14 = vunpcklps_avx(auVar14,auVar16);
  uVar10 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar10 = param_2;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      fVar6 = pfVar1[4];
      fVar7 = pfVar1[5];
      fVar8 = pfVar1[6];
      fVar9 = pfVar1[7];
      pfVar2 = (float *)(param_3 + (ulonglong)uVar13);
      *pfVar2 = auVar14._0_4_ * *pfVar1;
      pfVar2[1] = auVar14._4_4_ * fVar3;
      pfVar2[2] = auVar14._8_4_ * fVar4;
      pfVar2[3] = auVar14._12_4_ * fVar5;
      pfVar2[4] = auVar14._16_4_ * fVar6;
      pfVar2[5] = auVar14._20_4_ * fVar7;
      pfVar2[6] = auVar14._24_4_ * fVar8;
      pfVar2[7] = auVar14._28_4_ * fVar9;
      uVar12 = uVar12 + 8;
      uVar13 = uVar13 + 0x20;
    } while (uVar12 < (uVar10 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar17._4_4_ = iVar11;
  auVar17._0_4_ = iVar11;
  auVar17._8_4_ = iVar11;
  auVar17._12_4_ = iVar11;
  auVar17._16_4_ = iVar11;
  auVar17._20_4_ = iVar11;
  auVar17._24_4_ = iVar11;
  auVar17._28_4_ = iVar11;
  auVar16 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18._4_4_ = param_2;
  auVar18._0_4_ = param_2;
  auVar18._8_4_ = param_2;
  auVar18._12_4_ = param_2;
  auVar18._16_4_ = param_2;
  auVar18._20_4_ = param_2;
  auVar18._24_4_ = param_2;
  auVar18._28_4_ = param_2;
  auVar17 = vpcmpgtd_avx2(auVar18,auVar16);
  auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_1 + (iVar11 << 2)));
  auVar15._0_4_ = auVar14._0_4_ * auVar16._0_4_;
  auVar15._4_4_ = auVar14._4_4_ * auVar16._4_4_;
  auVar15._8_4_ = auVar14._8_4_ * auVar16._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * auVar16._12_4_;
  auVar15._16_4_ = auVar14._16_4_ * auVar16._16_4_;
  auVar15._20_4_ = auVar14._20_4_ * auVar16._20_4_;
  auVar15._24_4_ = auVar14._24_4_ * auVar16._24_4_;
  auVar15._28_4_ = auVar14._28_4_ * auVar16._28_4_;
  auVar14 = vmaskmovps_avx(auVar17,auVar15);
  *(undefined1 (*) [32])(param_3 + (iVar11 << 2)) = auVar14;
  return;
}

