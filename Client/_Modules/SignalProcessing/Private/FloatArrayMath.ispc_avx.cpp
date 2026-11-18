// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 81

// ArraySum___un_3C_Cunf_3E_REFunfCuni_avx @ 140a23490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum___un_3C_Cunf_3E_REFunfCuni_avx
               (longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar8 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  
  uVar4 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    auVar8 = *param_4;
    if ((int)param_3 < 1) goto LAB_140a23541;
  }
  else {
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    uVar6 = 0;
    uVar5 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar6);
      fVar7 = fVar7 + *pfVar1;
      fVar9 = fVar9 + pfVar1[1];
      fVar10 = fVar10 + pfVar1[2];
      fVar11 = fVar11 + pfVar1[3];
      fVar12 = fVar12 + *pfVar2;
      fVar13 = fVar13 + pfVar2[1];
      fVar14 = fVar14 + pfVar2[2];
      fVar15 = fVar15 + pfVar2[3];
      uVar5 = uVar5 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    auVar8 = *param_4;
    if ((int)param_3 <= (int)uVar5) goto LAB_140a23541;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar16._16_16_ = auVar3;
  auVar16._0_16_ = auVar3;
  auVar18 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar18 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar17._16_16_ = auVar3;
  auVar17._0_16_ = auVar18;
  auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar5 << 2)));
  auVar19._4_4_ = __real_80000000;
  auVar19._0_4_ = __real_80000000;
  auVar19._8_4_ = __real_80000000;
  auVar19._12_4_ = __real_80000000;
  auVar19._16_4_ = __real_80000000;
  auVar19._20_4_ = __real_80000000;
  auVar19._24_4_ = __real_80000000;
  auVar19._28_4_ = __real_80000000;
  auVar16 = vblendvps_avx(auVar19,auVar16,auVar17);
  fVar7 = fVar7 + auVar16._0_4_;
  fVar9 = fVar9 + auVar16._4_4_;
  fVar10 = fVar10 + auVar16._8_4_;
  fVar11 = fVar11 + auVar16._12_4_;
  fVar12 = fVar12 + auVar16._16_4_;
  fVar13 = fVar13 + auVar16._20_4_;
  fVar14 = fVar14 + auVar16._24_4_;
  fVar15 = fVar15 + auVar16._28_4_;
LAB_140a23541:
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  auVar3 = vpcmpeqd_avx(auVar8._16_16_,auVar18);
  auVar18 = vpcmpeqd_avx(auVar8._0_16_,auVar18);
  auVar8._0_4_ = ~auVar18._0_4_ & (uint)fVar7;
  auVar8._4_4_ = ~auVar18._4_4_ & (uint)fVar9;
  auVar8._8_4_ = ~auVar18._8_4_ & (uint)fVar10;
  auVar8._12_4_ = ~auVar18._12_4_ & (uint)fVar11;
  auVar8._16_4_ = ~auVar3._0_4_ & (uint)fVar12;
  auVar8._20_4_ = ~auVar3._4_4_ & (uint)fVar13;
  auVar8._24_4_ = ~auVar3._8_4_ & (uint)fVar14;
  auVar8._28_4_ = ~auVar3._12_4_ & (uint)fVar15;
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  *param_2 = auVar8._0_4_ + auVar8._16_4_;
  return;
}

// ArraySum2___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a23590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum2___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_2 + uVar9);
      pfVar4 = (float *)(param_2 + 0x10 + uVar9);
      auVar11._0_4_ = *pfVar1 + *pfVar2;
      auVar11._4_4_ = pfVar1[1] + pfVar2[1];
      auVar11._8_4_ = pfVar1[2] + pfVar2[2];
      auVar11._12_4_ = pfVar1[3] + pfVar2[3];
      auVar12._16_4_ = *pfVar3 + *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] + pfVar4[1];
      auVar12._24_4_ = pfVar3[2] + pfVar4[2];
      auVar12._28_4_ = pfVar3[3] + pfVar4[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar9) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar9) = auVar11;
      uVar7 = uVar7 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_4),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ + auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ + auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ + auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ + auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ + auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ + auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ + auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ + auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_3 + lVar8) = auVar12;
  return;
}

// ArrayMean___un_3C_Cunf_3E_REFunfCuni_avx @ 140a237c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMean___un_3C_Cunf_3E_REFunfCuni_avx
               (longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar8 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  
  uVar4 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    auVar8 = *param_4;
    if ((int)param_3 < 1) goto LAB_140a23871;
  }
  else {
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    uVar6 = 0;
    uVar5 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar6);
      fVar7 = fVar7 + *pfVar1;
      fVar9 = fVar9 + pfVar1[1];
      fVar10 = fVar10 + pfVar1[2];
      fVar11 = fVar11 + pfVar1[3];
      fVar12 = fVar12 + *pfVar2;
      fVar13 = fVar13 + pfVar2[1];
      fVar14 = fVar14 + pfVar2[2];
      fVar15 = fVar15 + pfVar2[3];
      uVar5 = uVar5 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    auVar8 = *param_4;
    if ((int)param_3 <= (int)uVar5) goto LAB_140a23871;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar16._16_16_ = auVar3;
  auVar16._0_16_ = auVar3;
  auVar18 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar18 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar17._16_16_ = auVar3;
  auVar17._0_16_ = auVar18;
  auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar5 << 2)));
  auVar19._4_4_ = __real_80000000;
  auVar19._0_4_ = __real_80000000;
  auVar19._8_4_ = __real_80000000;
  auVar19._12_4_ = __real_80000000;
  auVar19._16_4_ = __real_80000000;
  auVar19._20_4_ = __real_80000000;
  auVar19._24_4_ = __real_80000000;
  auVar19._28_4_ = __real_80000000;
  auVar16 = vblendvps_avx(auVar19,auVar16,auVar17);
  fVar7 = fVar7 + auVar16._0_4_;
  fVar9 = fVar9 + auVar16._4_4_;
  fVar10 = fVar10 + auVar16._8_4_;
  fVar11 = fVar11 + auVar16._12_4_;
  fVar12 = fVar12 + auVar16._16_4_;
  fVar13 = fVar13 + auVar16._20_4_;
  fVar14 = fVar14 + auVar16._24_4_;
  fVar15 = fVar15 + auVar16._28_4_;
LAB_140a23871:
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  auVar3 = vpcmpeqd_avx(auVar8._16_16_,auVar18);
  auVar18 = vpcmpeqd_avx(auVar8._0_16_,auVar18);
  auVar8._0_4_ = ~auVar18._0_4_ & (uint)fVar7;
  auVar8._4_4_ = ~auVar18._4_4_ & (uint)fVar9;
  auVar8._8_4_ = ~auVar18._8_4_ & (uint)fVar10;
  auVar8._12_4_ = ~auVar18._12_4_ & (uint)fVar11;
  auVar8._16_4_ = ~auVar3._0_4_ & (uint)fVar12;
  auVar8._20_4_ = ~auVar3._4_4_ & (uint)fVar13;
  auVar8._24_4_ = ~auVar3._8_4_ & (uint)fVar14;
  auVar8._28_4_ = ~auVar3._12_4_ & (uint)fVar15;
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  *param_2 = (auVar8._0_4_ + auVar8._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMeanSquared___un_3C_Cunf_3E_REFunfCuni_avx @ 140a238d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanSquared___un_3C_Cunf_3E_REFunfCuni_avx
               (longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar8 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  
  uVar4 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    auVar8 = *param_4;
    if ((int)param_3 < 1) goto LAB_140a23989;
  }
  else {
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    uVar6 = 0;
    uVar5 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar6);
      fVar7 = fVar7 + *pfVar1 * *pfVar1;
      fVar9 = fVar9 + pfVar1[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar1[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar1[3] * pfVar1[3];
      fVar12 = fVar12 + *pfVar2 * *pfVar2;
      fVar13 = fVar13 + pfVar2[1] * pfVar2[1];
      fVar14 = fVar14 + pfVar2[2] * pfVar2[2];
      fVar15 = fVar15 + pfVar2[3] * pfVar2[3];
      uVar5 = uVar5 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    auVar8 = *param_4;
    if ((int)param_3 <= (int)uVar5) goto LAB_140a23989;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar16._16_16_ = auVar3;
  auVar16._0_16_ = auVar3;
  auVar18 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar18 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar17._16_16_ = auVar3;
  auVar17._0_16_ = auVar18;
  auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar5 << 2)));
  auVar19._0_4_ = auVar16._0_4_ * auVar16._0_4_;
  auVar19._4_4_ = auVar16._4_4_ * auVar16._4_4_;
  auVar19._8_4_ = auVar16._8_4_ * auVar16._8_4_;
  auVar19._12_4_ = auVar16._12_4_ * auVar16._12_4_;
  auVar19._16_4_ = auVar16._16_4_ * auVar16._16_4_;
  auVar19._20_4_ = auVar16._20_4_ * auVar16._20_4_;
  auVar19._24_4_ = auVar16._24_4_ * auVar16._24_4_;
  auVar19._28_4_ = auVar16._28_4_ * auVar16._28_4_;
  auVar20._4_4_ = __real_80000000;
  auVar20._0_4_ = __real_80000000;
  auVar20._8_4_ = __real_80000000;
  auVar20._12_4_ = __real_80000000;
  auVar20._16_4_ = __real_80000000;
  auVar20._20_4_ = __real_80000000;
  auVar20._24_4_ = __real_80000000;
  auVar20._28_4_ = __real_80000000;
  auVar16 = vblendvps_avx(auVar20,auVar19,auVar17);
  fVar7 = fVar7 + auVar16._0_4_;
  fVar9 = fVar9 + auVar16._4_4_;
  fVar10 = fVar10 + auVar16._8_4_;
  fVar11 = fVar11 + auVar16._12_4_;
  fVar12 = fVar12 + auVar16._16_4_;
  fVar13 = fVar13 + auVar16._20_4_;
  fVar14 = fVar14 + auVar16._24_4_;
  fVar15 = fVar15 + auVar16._28_4_;
LAB_140a23989:
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  auVar3 = vpcmpeqd_avx(auVar8._16_16_,auVar18);
  auVar18 = vpcmpeqd_avx(auVar8._0_16_,auVar18);
  auVar8._0_4_ = ~auVar18._0_4_ & (uint)fVar7;
  auVar8._4_4_ = ~auVar18._4_4_ & (uint)fVar9;
  auVar8._8_4_ = ~auVar18._8_4_ & (uint)fVar10;
  auVar8._12_4_ = ~auVar18._12_4_ & (uint)fVar11;
  auVar8._16_4_ = ~auVar3._0_4_ & (uint)fVar12;
  auVar8._20_4_ = ~auVar3._4_4_ & (uint)fVar13;
  auVar8._24_4_ = ~auVar3._8_4_ & (uint)fVar14;
  auVar8._28_4_ = ~auVar3._12_4_ & (uint)fVar15;
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  *param_2 = (auVar8._0_4_ + auVar8._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMax___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a239e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMax___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar3 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar3 = param_4;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
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
      auVar8._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar6);
      auVar8._0_16_ = *(undefined1 (*) [16])(param_1 + uVar6);
      auVar11._16_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar6);
      auVar11._0_16_ = *(undefined1 (*) [16])(param_2 + uVar6);
      auVar8 = vmaxps_avx(auVar8,auVar11);
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar6) = auVar8._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar6) = auVar8._0_16_;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_4),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar11 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vmaxps_avx(auVar8,auVar11);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_3 + lVar5) = auVar8;
  return;
}

// ArrayMeanFilter___un_3C_Cunf_3E_CuniCuniun_3C_unf_3E_CunfCuni_avx @ 140a23ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanFilter___un_3C_Cunf_3E_CuniCuniun_3C_unf_3E_CunfCuni_avx
               (longlong param_1,int param_2,uint param_3,longlong param_4,float param_5,
               uint param_6,undefined1 (*param_7) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
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
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 unaff_00001484 [12];
  
  iVar19 = _UNK_150631ebc;
  iVar13 = _UNK_150631eb8;
  iVar12 = _UNK_150631eb4;
  iVar11 = ___xmm_00000007000000060000000500000004;
  iVar10 = _UNK_150631e0c;
  iVar9 = _UNK_150631e08;
  iVar26 = __xmm_00000003000000020000000100000000._4_4_;
  iVar17 = (int)__xmm_00000003000000020000000100000000;
  auVar33 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
  auVar29 = vpcmpgtd_avx(param_7[1],auVar33);
  auVar33 = vpcmpgtd_avx(*param_7,auVar33);
  auVar33 = vpor_avx(auVar33,auVar29);
  uVar25 = param_3 + 1;
  uVar27 = param_2 - param_3;
  iVar15 = uVar27 - 1;
  uVar14 = ~param_3;
  auVar29 = ZEXT416((uint)param_5);
  if ((((SUB161(auVar33 >> 0x1f,0) & 1) == 0 && (SUB161(auVar33 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar33 >> 0x5f,0) & 1) == 0) && -1 < auVar33[0xf]) {
    uVar16 = (uVar25 - param_2) + param_6;
    uVar21 = uVar25;
    if ((int)uVar25 < (int)uVar16) {
      uVar21 = uVar16;
    }
    if ((int)uVar27 < (int)param_6) {
      uVar22 = param_3 + 8;
      if (-1 < (int)uVar25) {
        uVar22 = uVar25;
      }
      if ((int)(uVar22 & 0xfffffff8) < 1) {
        uVar28 = 0;
        if (-1 < (int)param_3) goto LAB_140a24289;
      }
      else {
        uVar18 = 0;
        auVar60._4_4_ = __real_3f800000;
        auVar60._0_4_ = __real_3f800000;
        auVar60._8_4_ = __real_3f800000;
        auVar60._12_4_ = __real_3f800000;
        auVar60._16_4_ = __real_3f800000;
        auVar60._20_4_ = __real_3f800000;
        auVar60._24_4_ = __real_3f800000;
        auVar60._28_4_ = __real_3f800000;
        uVar28 = 0;
        do {
          lVar23 = (longlong)(int)(param_2 * 4 + param_3 * -4 + -4 + uVar18);
          auVar33 = vpshufd_avx(ZEXT416((int)uVar28 + uVar27),0);
          auVar64._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar23);
          auVar64._0_16_ = *(undefined1 (*) [16])(param_1 + lVar23);
          auVar68._4_4_ = auVar33._4_4_ + iVar26;
          auVar68._0_4_ = auVar33._0_4_ + iVar17;
          auVar68._8_4_ = auVar33._8_4_ + iVar9;
          auVar68._12_4_ = auVar33._12_4_ + iVar10;
          auVar68._20_4_ = auVar33._4_4_ + iVar12;
          auVar68._16_4_ = auVar33._0_4_ + iVar11;
          auVar68._24_4_ = auVar33._8_4_ + iVar13;
          auVar68._28_4_ = auVar33._12_4_ + iVar19;
          auVar41 = vcvtdq2ps_avx(auVar68);
          auVar41 = vmaxps_avx(auVar60,auVar41);
          auVar41 = vdivps_avx(auVar64,auVar41);
          *(undefined1 (*) [16])(param_4 + 0x10 + (ulonglong)uVar18) = auVar41._16_16_;
          *(undefined1 (*) [16])(param_4 + (ulonglong)uVar18) = auVar41._0_16_;
          uVar28 = uVar28 + 8;
          uVar18 = uVar18 + 0x20;
        } while (uVar28 < (uVar22 & 0xfffffff8));
        if ((int)uVar28 <= (int)param_3) {
LAB_140a24289:
          uVar22 = (uint)uVar28;
          auVar33 = vpshufd_avx(ZEXT416(uVar22),0);
          auVar36._16_16_ = auVar33;
          auVar36._0_16_ = auVar33;
          auVar36 = auVar36 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
          auVar6 = vpshufd_avx(ZEXT416(uVar25),0);
          auVar33 = vpcmpgtd_avx(auVar6,auVar36._16_16_);
          auVar6 = vpcmpgtd_avx(auVar6,auVar36._0_16_);
          auVar54._16_16_ = auVar33;
          auVar54._0_16_ = auVar6;
          auVar52 = vmaskmovps_avx(auVar54,*(undefined1 (*) [32])
                                            (param_1 + (int)((uVar22 + iVar15) * 4)));
          auVar33 = vpshufd_avx(ZEXT416(uVar27),0);
          auVar37._20_4_ = auVar36._20_4_ + auVar33._4_4_;
          auVar37._16_4_ = auVar36._16_4_ + auVar33._0_4_;
          auVar37._24_4_ = auVar36._24_4_ + auVar33._8_4_;
          auVar37._28_4_ = auVar36._28_4_ + auVar33._12_4_;
          auVar37._4_4_ = auVar36._4_4_ + auVar33._4_4_;
          auVar37._0_4_ = auVar36._0_4_ + auVar33._0_4_;
          auVar37._8_4_ = auVar36._8_4_ + auVar33._8_4_;
          auVar37._12_4_ = auVar36._12_4_ + auVar33._12_4_;
          auVar41 = vcvtdq2ps_avx(auVar37);
          auVar48._4_4_ = __real_3f800000;
          auVar48._0_4_ = __real_3f800000;
          auVar48._8_4_ = __real_3f800000;
          auVar48._12_4_ = __real_3f800000;
          auVar48._16_4_ = __real_3f800000;
          auVar48._20_4_ = __real_3f800000;
          auVar48._24_4_ = __real_3f800000;
          auVar48._28_4_ = __real_3f800000;
          auVar41 = vmaxps_avx(auVar48,auVar41);
          auVar41 = vdivps_avx(auVar52,auVar41);
          auVar41 = vmaskmovps_avx(auVar54,auVar41);
          *(undefined1 (*) [32])(param_4 + (int)(uVar22 * 4)) = auVar41;
        }
      }
      auVar33._0_4_ = (float)param_2;
      auVar33._4_12_ = unaff_00001484;
      uVar22 = uVar21 - uVar25;
      uVar27 = uVar22 + 7;
      if (-1 < (int)uVar22) {
        uVar27 = uVar22;
      }
      iVar17 = ((uVar27 & 0xfffffff8) - uVar22) + uVar21;
      uVar28 = (ulonglong)uVar25;
      if ((int)uVar25 < iVar17) {
        auVar6 = vshufps_avx(auVar33,auVar33,0);
        auVar49._16_16_ = auVar6;
        auVar49._0_16_ = auVar6;
        uVar28 = (ulonglong)(int)uVar25;
        iVar26 = 0;
        do {
          lVar23 = (longlong)(param_2 * 4 + iVar26);
          auVar55._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar23);
          auVar55._0_16_ = *(undefined1 (*) [16])(param_1 + lVar23);
          auVar61._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + (longlong)iVar26);
          auVar61._0_16_ = *(undefined1 (*) [16])(param_1 + iVar26);
          auVar41 = vsubps_avx(auVar55,auVar61);
          auVar41 = vdivps_avx(auVar41,auVar49);
          lVar23 = (longlong)(int)(param_3 * 4 + 4 + iVar26);
          *(undefined1 (*) [16])(param_4 + 0x10 + lVar23) = auVar41._16_16_;
          *(undefined1 (*) [16])(param_4 + lVar23) = auVar41._0_16_;
          uVar28 = uVar28 + 8;
          iVar26 = iVar26 + 0x20;
        } while ((longlong)uVar28 < (longlong)iVar17);
      }
      uVar27 = (uint)uVar28;
      if ((int)uVar21 <= (int)uVar27) goto LAB_140a24707;
      auVar7 = vpshufd_avx(ZEXT416(uVar27),0);
      auVar6._0_4_ = auVar7._0_4_ + (int)__xmm_00000003000000020000000100000000;
      auVar6._4_4_ = auVar7._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
      auVar6._8_4_ = auVar7._8_4_ + _UNK_150631e08;
      auVar6._12_4_ = auVar7._12_4_ + _UNK_150631e0c;
      auVar8._0_4_ = auVar7._0_4_ + ___xmm_00000007000000060000000500000004;
      auVar8._4_4_ = auVar7._4_4_ + _UNK_150631eb4;
      auVar8._8_4_ = auVar7._8_4_ + _UNK_150631eb8;
      auVar8._12_4_ = auVar7._12_4_ + _UNK_150631ebc;
      auVar7 = vpshufd_avx(ZEXT416(uVar21),0);
      auVar8 = vpcmpgtd_avx(auVar7,auVar8);
      auVar6 = vpcmpgtd_avx(auVar7,auVar6);
      auVar50._16_16_ = auVar8;
      auVar50._0_16_ = auVar6;
      auVar41 = vmaskmovps_avx(auVar50,*(undefined1 (*) [32])
                                        (param_1 + (int)((iVar15 + uVar27) * 4)));
      iVar15 = uVar27 * 4;
      auVar52 = vmaskmovps_avx(auVar50,*(undefined1 (*) [32])
                                        (param_1 + (int)((uVar27 + uVar14) * 4)));
      auVar41 = vsubps_avx(auVar41,auVar52);
      auVar33 = vshufps_avx(auVar33,auVar33,0);
      auVar38._16_16_ = auVar33;
      auVar38._0_16_ = auVar33;
      auVar41 = vdivps_avx(auVar41,auVar38);
    }
    else {
      auVar33 = ZEXT416((uint)(param_5 / (float)(int)param_6));
      uVar27 = uVar21 + 7;
      if (-1 < (int)uVar21) {
        uVar27 = uVar21;
      }
      if ((int)(uVar27 & 0xfffffff8) < 1) {
        uVar28 = 0;
        if ((int)uVar21 < 1) goto LAB_140a24707;
      }
      else {
        auVar6 = vshufps_avx(auVar33,auVar33,0);
        uVar22 = 0;
        uVar28 = 0;
        do {
          *(undefined1 (*) [16])(param_4 + 0x10 + (ulonglong)uVar22) = auVar6;
          *(undefined1 (*) [16])(param_4 + (ulonglong)uVar22) = auVar6;
          uVar28 = uVar28 + 8;
          uVar22 = uVar22 + 0x20;
        } while (uVar28 < (uVar27 & 0xfffffff8));
        if ((int)uVar21 <= (int)uVar28) goto LAB_140a24707;
      }
      auVar6 = vpshufd_avx(ZEXT416((uint)uVar28),0);
      auVar52._16_16_ = auVar6;
      auVar52._0_16_ = auVar6;
      auVar8 = vpshufd_avx(ZEXT416(uVar21),0);
      auVar6 = vpcmpgtd_avx(auVar8,SUB3216(auVar52 | 
                                           ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                           ,0x10));
      auVar8 = vpcmpgtd_avx(auVar8,SUB3216(auVar52 | 
                                           ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                           ,0));
      auVar50._16_16_ = auVar6;
      auVar50._0_16_ = auVar8;
      iVar15 = (uint)uVar28 << 2;
      auVar33 = vshufps_avx(auVar33,auVar33,0);
      auVar41._16_16_ = auVar33;
      auVar41._0_16_ = auVar33;
    }
    auVar41 = vmaskmovps_avx(auVar50,auVar41);
    *(undefined1 (*) [32])(param_4 + iVar15) = auVar41;
LAB_140a24707:
    iVar13 = _UNK_150d5a8fc;
    iVar12 = _UNK_150d5a8f8;
    iVar11 = _UNK_150d5a8f4;
    iVar10 = ___xmm_fffffff9fffffffafffffffbfffffffc;
    iVar9 = _UNK_150d5a8ec;
    iVar26 = _UNK_150d5a8e8;
    iVar17 = _UNK_150d5a8e4;
    iVar15 = ___xmm_fffffffdfffffffeffffffff00000000;
    uVar22 = param_6 - uVar21;
    uVar27 = uVar22 + 7;
    if (-1 < (int)uVar22) {
      uVar27 = uVar22;
    }
    iVar19 = ((uVar27 & 0xfffffff8) - uVar22) + param_6;
    if ((int)uVar21 < iVar19) {
      auVar33 = vshufps_avx(auVar29,auVar29,0);
      auVar42._16_16_ = auVar33;
      auVar42._0_16_ = auVar33;
      uVar21 = uVar25;
      if ((int)uVar25 < (int)uVar16) {
        uVar21 = uVar16;
      }
      lVar23 = (longlong)(int)uVar21;
      iVar20 = uVar21 * 4;
      do {
        lVar24 = (longlong)(int)(uVar14 * 4 + iVar20);
        auVar66._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar24);
        auVar66._0_16_ = *(undefined1 (*) [16])(param_1 + lVar24);
        auVar52 = vsubps_avx(auVar42,auVar66);
        auVar33 = vpsubd_avx(ZEXT416(param_6 + param_3),ZEXT416(uVar21));
        auVar33 = vpshufd_avx(auVar33,0);
        auVar69._4_4_ = auVar33._4_4_ + iVar17;
        auVar69._0_4_ = auVar33._0_4_ + iVar15;
        auVar69._8_4_ = auVar33._8_4_ + iVar26;
        auVar69._12_4_ = auVar33._12_4_ + iVar9;
        auVar69._20_4_ = auVar33._4_4_ + iVar11;
        auVar69._16_4_ = auVar33._0_4_ + iVar10;
        auVar69._24_4_ = auVar33._8_4_ + iVar12;
        auVar69._28_4_ = auVar33._12_4_ + iVar13;
        auVar41 = vcvtdq2ps_avx(auVar69);
        auVar41 = vdivps_avx(auVar52,auVar41);
        *(undefined1 (*) [16])(param_4 + 0x10 + (longlong)iVar20) = auVar41._16_16_;
        *(undefined1 (*) [16])(param_4 + iVar20) = auVar41._0_16_;
        lVar23 = lVar23 + 8;
        iVar20 = iVar20 + 0x20;
        uVar21 = uVar21 + 8;
      } while (lVar23 < iVar19);
    }
    if ((int)param_6 <= (int)uVar21) {
      return;
    }
    auVar33 = vpshufd_avx(ZEXT416(uVar21),0);
    auVar7._0_4_ = auVar33._0_4_ + (int)__xmm_00000003000000020000000100000000;
    auVar7._4_4_ = auVar33._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
    auVar7._8_4_ = auVar33._8_4_ + _UNK_150631e08;
    auVar7._12_4_ = auVar33._12_4_ + _UNK_150631e0c;
    auVar5._0_4_ = auVar33._0_4_ + ___xmm_00000007000000060000000500000004;
    auVar5._4_4_ = auVar33._4_4_ + _UNK_150631eb4;
    auVar5._8_4_ = auVar33._8_4_ + _UNK_150631eb8;
    auVar5._12_4_ = auVar33._12_4_ + _UNK_150631ebc;
    auVar6 = vpshufd_avx(ZEXT416(param_6),0);
    auVar33 = vpcmpgtd_avx(auVar6,auVar5);
    auVar6 = vpcmpgtd_avx(auVar6,auVar7);
    auVar62._16_16_ = auVar33;
    auVar62._0_16_ = auVar6;
    auVar33 = vshufps_avx(auVar29,auVar29,0);
    auVar31._16_16_ = auVar33;
    auVar31._0_16_ = auVar33;
    auVar41 = vmaskmovps_avx(auVar62,*(undefined1 (*) [32])(param_1 + (int)((uVar14 + uVar21) * 4)))
    ;
    auVar52 = vsubps_avx(auVar31,auVar41);
    auVar33 = vpshufd_avx(ZEXT416(param_6 + param_3),0);
    auVar29 = vpsubd_avx(auVar33,auVar5);
    auVar33 = vpsubd_avx(auVar33,auVar7);
    auVar43._16_16_ = auVar29;
    auVar43._0_16_ = auVar33;
    auVar41 = vcvtdq2ps_avx(auVar43);
    auVar41 = vdivps_avx(auVar52,auVar41);
    auVar41 = vmaskmovps_avx(auVar62,auVar41);
    *(undefined1 (*) [32])(param_4 + (int)(uVar21 * 4)) = auVar41;
    return;
  }
  uVar16 = (param_3 - param_2) + param_6 + 1;
  uVar21 = uVar25;
  if ((int)uVar25 < (int)uVar16) {
    uVar21 = uVar16;
  }
  if ((int)uVar27 < (int)param_6) {
    uVar22 = param_3 + 8;
    if (-1 < (int)uVar25) {
      uVar22 = uVar25;
    }
    if ((int)(uVar22 & 0xfffffff8) < 1) {
      uVar28 = 0;
      if (-1 < (int)param_3) goto LAB_140a24014;
    }
    else {
      uVar18 = 0;
      auVar57._4_4_ = __real_3f800000;
      auVar57._0_4_ = __real_3f800000;
      auVar57._8_4_ = __real_3f800000;
      auVar57._12_4_ = __real_3f800000;
      auVar57._16_4_ = __real_3f800000;
      auVar57._20_4_ = __real_3f800000;
      auVar57._24_4_ = __real_3f800000;
      auVar57._28_4_ = __real_3f800000;
      uVar28 = 0;
      do {
        lVar23 = (longlong)(int)(param_2 * 4 + param_3 * -4 + -4 + uVar18);
        auVar33 = vpshufd_avx(ZEXT416((int)uVar28 + uVar27),0);
        auVar63._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar23);
        auVar63._0_16_ = *(undefined1 (*) [16])(param_1 + lVar23);
        auVar67._4_4_ = auVar33._4_4_ + iVar26;
        auVar67._0_4_ = auVar33._0_4_ + iVar17;
        auVar67._8_4_ = auVar33._8_4_ + iVar9;
        auVar67._12_4_ = auVar33._12_4_ + iVar10;
        auVar67._20_4_ = auVar33._4_4_ + iVar12;
        auVar67._16_4_ = auVar33._0_4_ + iVar11;
        auVar67._24_4_ = auVar33._8_4_ + iVar13;
        auVar67._28_4_ = auVar33._12_4_ + iVar19;
        auVar41 = vcvtdq2ps_avx(auVar67);
        auVar41 = vmaxps_avx(auVar57,auVar41);
        auVar41 = vdivps_avx(auVar63,auVar41);
        *(undefined1 (*) [16])(param_4 + 0x10 + (ulonglong)uVar18) = auVar41._16_16_;
        *(undefined1 (*) [16])(param_4 + (ulonglong)uVar18) = auVar41._0_16_;
        uVar28 = uVar28 + 8;
        uVar18 = uVar18 + 0x20;
      } while (uVar28 < (uVar22 & 0xfffffff8));
      if ((int)uVar28 <= (int)param_3) {
LAB_140a24014:
        uVar22 = (uint)uVar28;
        auVar33 = vpshufd_avx(ZEXT416(uVar22),0);
        auVar44._16_16_ = auVar33;
        auVar44._0_16_ = auVar33;
        auVar44 = auVar44 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
        auVar6 = vpshufd_avx(ZEXT416(uVar25),0);
        auVar33 = vpcmpgtd_avx(auVar6,auVar44._16_16_);
        auVar6 = vpcmpgtd_avx(auVar6,auVar44._0_16_);
        auVar58._16_16_ = auVar33;
        auVar58._0_16_ = auVar6;
        auVar52 = vmaskmovps_avx(auVar58,*(undefined1 (*) [32])
                                          (param_1 + (int)((uVar22 + iVar15) * 4)));
        auVar33 = vpshufd_avx(ZEXT416(uVar27),0);
        auVar34._20_4_ = auVar44._20_4_ + auVar33._4_4_;
        auVar34._16_4_ = auVar44._16_4_ + auVar33._0_4_;
        auVar34._24_4_ = auVar44._24_4_ + auVar33._8_4_;
        auVar34._28_4_ = auVar44._28_4_ + auVar33._12_4_;
        auVar34._4_4_ = auVar44._4_4_ + auVar33._4_4_;
        auVar34._0_4_ = auVar44._0_4_ + auVar33._0_4_;
        auVar34._8_4_ = auVar44._8_4_ + auVar33._8_4_;
        auVar34._12_4_ = auVar44._12_4_ + auVar33._12_4_;
        auVar41 = vcvtdq2ps_avx(auVar34);
        auVar45._4_4_ = __real_3f800000;
        auVar45._0_4_ = __real_3f800000;
        auVar45._8_4_ = __real_3f800000;
        auVar45._12_4_ = __real_3f800000;
        auVar45._16_4_ = __real_3f800000;
        auVar45._20_4_ = __real_3f800000;
        auVar45._24_4_ = __real_3f800000;
        auVar45._28_4_ = __real_3f800000;
        auVar41 = vmaxps_avx(auVar45,auVar41);
        auVar41 = vdivps_avx(auVar52,auVar41);
        auVar41 = vmaskmovps_avx(auVar58,auVar41);
        *(undefined1 (*) [32])(param_4 + (int)(uVar22 * 4)) = auVar41;
      }
    }
    auVar32._0_4_ = (float)param_2;
    auVar32._4_12_ = unaff_00001484;
    uVar22 = uVar21 - uVar25;
    uVar27 = uVar22 + 7;
    if (-1 < (int)uVar22) {
      uVar27 = uVar22;
    }
    iVar17 = ((uVar27 & 0xfffffff8) - uVar22) + uVar21;
    uVar28 = (ulonglong)uVar25;
    if ((int)uVar25 < iVar17) {
      auVar33 = vshufps_avx(auVar32,auVar32,0);
      auVar46._16_16_ = auVar33;
      auVar46._0_16_ = auVar33;
      uVar28 = (ulonglong)(int)uVar25;
      iVar26 = 0;
      do {
        lVar23 = (longlong)(param_2 * 4 + iVar26);
        auVar53._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar23);
        auVar53._0_16_ = *(undefined1 (*) [16])(param_1 + lVar23);
        auVar59._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + (longlong)iVar26);
        auVar59._0_16_ = *(undefined1 (*) [16])(param_1 + iVar26);
        auVar41 = vsubps_avx(auVar53,auVar59);
        auVar41 = vdivps_avx(auVar41,auVar46);
        lVar23 = (longlong)(int)(param_3 * 4 + 4 + iVar26);
        *(undefined1 (*) [16])(param_4 + 0x10 + lVar23) = auVar41._16_16_;
        *(undefined1 (*) [16])(param_4 + lVar23) = auVar41._0_16_;
        uVar28 = uVar28 + 8;
        iVar26 = iVar26 + 0x20;
      } while ((longlong)uVar28 < (longlong)iVar17);
    }
    uVar27 = (uint)uVar28;
    if ((int)uVar21 <= (int)uVar27) goto LAB_140a24551;
    auVar33 = vpshufd_avx(ZEXT416(uVar27),0);
    auVar1._0_4_ = auVar33._0_4_ + (int)__xmm_00000003000000020000000100000000;
    auVar1._4_4_ = auVar33._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
    auVar1._8_4_ = auVar33._8_4_ + _UNK_150631e08;
    auVar1._12_4_ = auVar33._12_4_ + _UNK_150631e0c;
    auVar2._0_4_ = auVar33._0_4_ + ___xmm_00000007000000060000000500000004;
    auVar2._4_4_ = auVar33._4_4_ + _UNK_150631eb4;
    auVar2._8_4_ = auVar33._8_4_ + _UNK_150631eb8;
    auVar2._12_4_ = auVar33._12_4_ + _UNK_150631ebc;
    auVar6 = vpshufd_avx(ZEXT416(uVar21),0);
    auVar33 = vpcmpgtd_avx(auVar6,auVar2);
    auVar6 = vpcmpgtd_avx(auVar6,auVar1);
    auVar47._16_16_ = auVar33;
    auVar47._0_16_ = auVar6;
    auVar41 = vmaskmovps_avx(auVar47,*(undefined1 (*) [32])(param_1 + (int)((iVar15 + uVar27) * 4)))
    ;
    iVar15 = uVar27 * 4;
    auVar52 = vmaskmovps_avx(auVar47,*(undefined1 (*) [32])(param_1 + (int)((uVar27 + uVar14) * 4)))
    ;
    auVar41 = vsubps_avx(auVar41,auVar52);
    auVar33 = vshufps_avx(auVar32,auVar32,0);
    auVar35._16_16_ = auVar33;
    auVar35._0_16_ = auVar33;
    auVar39 = vdivps_avx(auVar41,auVar35);
  }
  else {
    auVar33 = ZEXT416((uint)(param_5 / (float)(int)param_6));
    uVar27 = uVar21 + 7;
    if (-1 < (int)uVar21) {
      uVar27 = uVar21;
    }
    if ((int)(uVar27 & 0xfffffff8) < 1) {
      uVar28 = 0;
      if ((int)uVar21 < 1) goto LAB_140a24551;
    }
    else {
      auVar6 = vshufps_avx(auVar33,auVar33,0);
      uVar22 = 0;
      uVar28 = 0;
      do {
        *(undefined1 (*) [16])(param_4 + 0x10 + (ulonglong)uVar22) = auVar6;
        *(undefined1 (*) [16])(param_4 + (ulonglong)uVar22) = auVar6;
        uVar28 = uVar28 + 8;
        uVar22 = uVar22 + 0x20;
      } while (uVar28 < (uVar27 & 0xfffffff8));
      if ((int)uVar21 <= (int)uVar28) goto LAB_140a24551;
    }
    auVar6 = vpshufd_avx(ZEXT416((uint)uVar28),0);
    auVar51._16_16_ = auVar6;
    auVar51._0_16_ = auVar6;
    auVar8 = vpshufd_avx(ZEXT416(uVar21),0);
    auVar6 = vpcmpgtd_avx(auVar8,SUB3216(auVar51 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0x10));
    auVar8 = vpcmpgtd_avx(auVar8,SUB3216(auVar51 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
    auVar47._16_16_ = auVar6;
    auVar47._0_16_ = auVar8;
    iVar15 = (uint)uVar28 << 2;
    auVar33 = vshufps_avx(auVar33,auVar33,0);
    auVar39._16_16_ = auVar33;
    auVar39._0_16_ = auVar33;
  }
  auVar41 = vmaskmovps_avx(auVar47,auVar39);
  *(undefined1 (*) [32])(param_4 + iVar15) = auVar41;
LAB_140a24551:
  iVar13 = _UNK_150d5a8fc;
  iVar12 = _UNK_150d5a8f8;
  iVar11 = _UNK_150d5a8f4;
  iVar10 = ___xmm_fffffff9fffffffafffffffbfffffffc;
  iVar9 = _UNK_150d5a8ec;
  iVar26 = _UNK_150d5a8e8;
  iVar17 = _UNK_150d5a8e4;
  iVar15 = ___xmm_fffffffdfffffffeffffffff00000000;
  uVar22 = param_6 - uVar21;
  uVar27 = uVar22 + 7;
  if (-1 < (int)uVar22) {
    uVar27 = uVar22;
  }
  iVar19 = ((uVar27 & 0xfffffff8) - uVar22) + param_6;
  if ((int)uVar21 < iVar19) {
    auVar33 = vshufps_avx(auVar29,auVar29,0);
    auVar56._16_16_ = auVar33;
    auVar56._0_16_ = auVar33;
    uVar21 = uVar25;
    if ((int)uVar25 < (int)uVar16) {
      uVar21 = uVar16;
    }
    lVar23 = (longlong)(int)uVar21;
    iVar20 = uVar21 * 4;
    do {
      lVar24 = (longlong)(int)(uVar14 * 4 + iVar20);
      auVar70._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar24);
      auVar70._0_16_ = *(undefined1 (*) [16])(param_1 + lVar24);
      auVar52 = vsubps_avx(auVar56,auVar70);
      auVar33 = vpsubd_avx(ZEXT416(param_6 + param_3),ZEXT416(uVar21));
      auVar33 = vpshufd_avx(auVar33,0);
      auVar71._4_4_ = auVar33._4_4_ + iVar17;
      auVar71._0_4_ = auVar33._0_4_ + iVar15;
      auVar71._8_4_ = auVar33._8_4_ + iVar26;
      auVar71._12_4_ = auVar33._12_4_ + iVar9;
      auVar71._20_4_ = auVar33._4_4_ + iVar11;
      auVar71._16_4_ = auVar33._0_4_ + iVar10;
      auVar71._24_4_ = auVar33._8_4_ + iVar12;
      auVar71._28_4_ = auVar33._12_4_ + iVar13;
      auVar41 = vcvtdq2ps_avx(auVar71);
      auVar41 = vdivps_avx(auVar52,auVar41);
      *(undefined1 (*) [16])(param_4 + 0x10 + (longlong)iVar20) = auVar41._16_16_;
      *(undefined1 (*) [16])(param_4 + iVar20) = auVar41._0_16_;
      lVar23 = lVar23 + 8;
      iVar20 = iVar20 + 0x20;
      uVar21 = uVar21 + 8;
    } while (lVar23 < iVar19);
  }
  if ((int)uVar21 < (int)param_6) {
    auVar33 = vpshufd_avx(ZEXT416(uVar21),0);
    auVar3._0_4_ = auVar33._0_4_ + (int)__xmm_00000003000000020000000100000000;
    auVar3._4_4_ = auVar33._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
    auVar3._8_4_ = auVar33._8_4_ + _UNK_150631e08;
    auVar3._12_4_ = auVar33._12_4_ + _UNK_150631e0c;
    auVar4._0_4_ = auVar33._0_4_ + ___xmm_00000007000000060000000500000004;
    auVar4._4_4_ = auVar33._4_4_ + _UNK_150631eb4;
    auVar4._8_4_ = auVar33._8_4_ + _UNK_150631eb8;
    auVar4._12_4_ = auVar33._12_4_ + _UNK_150631ebc;
    auVar6 = vpshufd_avx(ZEXT416(param_6),0);
    auVar33 = vpcmpgtd_avx(auVar6,auVar4);
    auVar6 = vpcmpgtd_avx(auVar6,auVar3);
    auVar65._16_16_ = auVar33;
    auVar65._0_16_ = auVar6;
    auVar33 = vshufps_avx(auVar29,auVar29,0);
    auVar41 = vmaskmovps_avx(auVar65,*(undefined1 (*) [32])(param_1 + (int)((uVar14 + uVar21) * 4)))
    ;
    auVar30._16_16_ = auVar33;
    auVar30._0_16_ = auVar33;
    auVar52 = vsubps_avx(auVar30,auVar41);
    auVar33 = vpshufd_avx(ZEXT416(param_6 + param_3),0);
    auVar29 = vpsubd_avx(auVar33,auVar4);
    auVar33 = vpsubd_avx(auVar33,auVar3);
    auVar40._16_16_ = auVar29;
    auVar40._0_16_ = auVar33;
    auVar41 = vcvtdq2ps_avx(auVar40);
    auVar41 = vdivps_avx(auVar52,auVar41);
    auVar41 = vmaskmovps_avx(auVar65,auVar41);
    *(undefined1 (*) [32])(param_4 + (int)(uVar21 * 4)) = auVar41;
  }
  return;
}

// ArrayGetEuclideanNorm___un_3C_Cunf_3E_REFunfCuni_avx @ 140a24890

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetEuclideanNorm___un_3C_Cunf_3E_REFunfCuni_avx
               (longlong param_1,float *param_2,uint param_3,undefined1 (*param_4) [32])

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar8 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  
  uVar4 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    auVar8 = *param_4;
    if ((int)param_3 < 1) goto LAB_140a24949;
  }
  else {
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    uVar6 = 0;
    uVar5 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar6);
      fVar7 = fVar7 + *pfVar1 * *pfVar1;
      fVar9 = fVar9 + pfVar1[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar1[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar1[3] * pfVar1[3];
      fVar12 = fVar12 + *pfVar2 * *pfVar2;
      fVar13 = fVar13 + pfVar2[1] * pfVar2[1];
      fVar14 = fVar14 + pfVar2[2] * pfVar2[2];
      fVar15 = fVar15 + pfVar2[3] * pfVar2[3];
      uVar5 = uVar5 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    auVar8 = *param_4;
    if ((int)param_3 <= (int)uVar5) goto LAB_140a24949;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar16._16_16_ = auVar3;
  auVar16._0_16_ = auVar3;
  auVar18 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar18 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar17._16_16_ = auVar3;
  auVar17._0_16_ = auVar18;
  auVar16 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar5 << 2)));
  auVar19._0_4_ = auVar16._0_4_ * auVar16._0_4_;
  auVar19._4_4_ = auVar16._4_4_ * auVar16._4_4_;
  auVar19._8_4_ = auVar16._8_4_ * auVar16._8_4_;
  auVar19._12_4_ = auVar16._12_4_ * auVar16._12_4_;
  auVar19._16_4_ = auVar16._16_4_ * auVar16._16_4_;
  auVar19._20_4_ = auVar16._20_4_ * auVar16._20_4_;
  auVar19._24_4_ = auVar16._24_4_ * auVar16._24_4_;
  auVar19._28_4_ = auVar16._28_4_ * auVar16._28_4_;
  auVar20._4_4_ = __real_80000000;
  auVar20._0_4_ = __real_80000000;
  auVar20._8_4_ = __real_80000000;
  auVar20._12_4_ = __real_80000000;
  auVar20._16_4_ = __real_80000000;
  auVar20._20_4_ = __real_80000000;
  auVar20._24_4_ = __real_80000000;
  auVar20._28_4_ = __real_80000000;
  auVar16 = vblendvps_avx(auVar20,auVar19,auVar17);
  fVar7 = fVar7 + auVar16._0_4_;
  fVar9 = fVar9 + auVar16._4_4_;
  fVar10 = fVar10 + auVar16._8_4_;
  fVar11 = fVar11 + auVar16._12_4_;
  fVar12 = fVar12 + auVar16._16_4_;
  fVar13 = fVar13 + auVar16._20_4_;
  fVar14 = fVar14 + auVar16._24_4_;
  fVar15 = fVar15 + auVar16._28_4_;
LAB_140a24949:
  auVar18._0_12_ = ZEXT812(0);
  auVar18._12_4_ = 0;
  auVar3 = vpcmpeqd_avx(auVar8._16_16_,auVar18);
  auVar18 = vpcmpeqd_avx(auVar8._0_16_,auVar18);
  auVar8._0_4_ = ~auVar18._0_4_ & (uint)fVar7;
  auVar8._4_4_ = ~auVar18._4_4_ & (uint)fVar9;
  auVar8._8_4_ = ~auVar18._8_4_ & (uint)fVar10;
  auVar8._12_4_ = ~auVar18._12_4_ & (uint)fVar11;
  auVar8._16_4_ = ~auVar3._0_4_ & (uint)fVar12;
  auVar8._20_4_ = ~auVar3._4_4_ & (uint)fVar13;
  auVar8._24_4_ = ~auVar3._8_4_ & (uint)fVar14;
  auVar8._28_4_ = ~auVar3._12_4_ & (uint)fVar15;
  auVar8 = vhaddps_avx(auVar8,auVar8);
  auVar8 = vhaddps_avx(auVar8,auVar8);
  *param_2 = SQRT(auVar8._0_4_ + auVar8._16_4_);
  return;
}

// ArrayMultiply___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a251c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiply___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_2 + uVar9);
      pfVar4 = (float *)(param_2 + 0x10 + uVar9);
      auVar11._0_4_ = *pfVar1 * *pfVar2;
      auVar11._4_4_ = pfVar1[1] * pfVar2[1];
      auVar11._8_4_ = pfVar1[2] * pfVar2[2];
      auVar11._12_4_ = pfVar1[3] * pfVar2[3];
      auVar12._16_4_ = *pfVar3 * *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] * pfVar4[1];
      auVar12._24_4_ = pfVar3[2] * pfVar4[2];
      auVar12._28_4_ = pfVar3[3] * pfVar4[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar9) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar9) = auVar11;
      uVar7 = uVar7 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_4),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ * auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ * auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ * auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ * auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ * auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ * auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ * auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ * auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_3 + lVar8) = auVar12;
  return;
}

// ArrayComplexMultiplyInPlace___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a25360

void ArrayComplexMultiplyInPlace___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [32])

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar16 [32];
  
  fVar2 = __real_3f800000bf800000._4_4_;
  fVar1 = (float)__real_3f800000bf800000;
  auVar15 = *param_4;
  auVar5 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar6 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_4 + 0x10),auVar5);
  auVar5 = vpcmpgtd_avx(auVar15._0_16_,auVar5);
  auVar5 = vpor_avx(auVar5,auVar6);
  uVar9 = param_3 & 0xfffffff8;
  if ((((SUB161(auVar5 >> 0x1f,0) & 1) == 0 && (SUB161(auVar5 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar5 >> 0x5f,0) & 1) == 0) && -1 < auVar5[0xf]) {
    if (0 < (int)uVar9) {
      uVar12 = 0;
      uVar13 = 0;
      do {
        uVar11 = (ulonglong)uVar12;
        auVar15._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar11);
        auVar15._0_16_ = *(undefined1 (*) [16])(param_1 + uVar11);
        auVar5 = *(undefined1 (*) [16])(param_2 + uVar11);
        auVar6 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar11);
        auVar18._16_16_ = auVar6;
        auVar18._0_16_ = auVar5;
        auVar7 = vmovsldup_avx(auVar15);
        auVar15 = vmovshdup_avx(auVar15);
        auVar18 = vshufps_avx(auVar18,auVar18,0xb1);
        auVar14._0_4_ = auVar5._0_4_ * auVar7._0_4_ + auVar15._0_4_ * auVar18._0_4_ * fVar1;
        auVar14._4_4_ = auVar5._4_4_ * auVar7._4_4_ + auVar15._4_4_ * auVar18._4_4_ * fVar2;
        auVar14._8_4_ = auVar5._8_4_ * auVar7._8_4_ + auVar15._8_4_ * auVar18._8_4_ * fVar1;
        auVar14._12_4_ = auVar5._12_4_ * auVar7._12_4_ + auVar15._12_4_ * auVar18._12_4_ * fVar2;
        auVar16._16_4_ = auVar6._0_4_ * auVar7._16_4_ + auVar15._16_4_ * auVar18._16_4_ * fVar1;
        auVar16._0_16_ = auVar14;
        auVar16._20_4_ = auVar6._4_4_ * auVar7._20_4_ + auVar15._20_4_ * auVar18._20_4_ * fVar2;
        auVar16._24_4_ = auVar6._8_4_ * auVar7._24_4_ + auVar15._24_4_ * auVar18._24_4_ * fVar1;
        auVar16._28_4_ = auVar6._12_4_ * auVar7._28_4_ + auVar15._28_4_ * auVar18._28_4_ * fVar2;
        *(undefined1 (*) [16])(param_2 + 0x10 + uVar11) = auVar16._16_16_;
        *(undefined1 (*) [16])(param_2 + uVar11) = auVar14;
        uVar13 = uVar13 + 8;
        uVar12 = uVar12 + 0x20;
      } while (uVar13 < uVar9);
    }
    if ((int)uVar9 < (int)param_3) {
      lVar10 = (longlong)(int)uVar9;
      do {
        fVar1 = *(float *)(param_1 + lVar10 * 4);
        fVar2 = *(float *)(param_1 + 4 + lVar10 * 4);
        fVar3 = *(float *)(param_2 + lVar10 * 4);
        fVar4 = *(float *)(param_2 + 4 + lVar10 * 4);
        *(float *)(param_2 + lVar10 * 4) = fVar1 * fVar3 - fVar2 * fVar4;
        *(float *)(param_2 + 4 + lVar10 * 4) = fVar3 * fVar2 + fVar1 * fVar4;
        lVar10 = lVar10 + 2;
      } while (lVar10 < (int)param_3);
    }
  }
  else {
    if (0 < (int)uVar9) {
      uVar12 = 0;
      uVar13 = 0;
      do {
        uVar11 = (ulonglong)uVar12;
        auVar7 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + uVar11));
        auVar8 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_2 + uVar11));
        auVar18 = vmovsldup_avx(auVar7);
        auVar7 = vmovshdup_avx(auVar7);
        auVar16 = vshufps_avx(auVar8,auVar8,0xb1);
        auVar17._0_4_ = auVar8._0_4_ * auVar18._0_4_ + auVar7._0_4_ * auVar16._0_4_ * fVar1;
        auVar17._4_4_ = auVar8._4_4_ * auVar18._4_4_ + auVar7._4_4_ * auVar16._4_4_ * fVar2;
        auVar17._8_4_ = auVar8._8_4_ * auVar18._8_4_ + auVar7._8_4_ * auVar16._8_4_ * fVar1;
        auVar17._12_4_ = auVar8._12_4_ * auVar18._12_4_ + auVar7._12_4_ * auVar16._12_4_ * fVar2;
        auVar17._16_4_ = auVar8._16_4_ * auVar18._16_4_ + auVar7._16_4_ * auVar16._16_4_ * fVar1;
        auVar17._20_4_ = auVar8._20_4_ * auVar18._20_4_ + auVar7._20_4_ * auVar16._20_4_ * fVar2;
        auVar17._24_4_ = auVar8._24_4_ * auVar18._24_4_ + auVar7._24_4_ * auVar16._24_4_ * fVar1;
        auVar17._28_4_ = auVar8._28_4_ * auVar18._28_4_ + auVar7._28_4_ * auVar16._28_4_ * fVar2;
        auVar7 = vmaskmovps_avx(auVar15,auVar17);
        *(undefined1 (*) [32])(param_2 + uVar11) = auVar7;
        uVar13 = uVar13 + 8;
        uVar12 = uVar12 + 0x20;
      } while (uVar13 < uVar9);
    }
    if ((int)uVar9 < (int)param_3) {
      lVar10 = (longlong)(int)uVar9;
      do {
        fVar1 = *(float *)(param_1 + lVar10 * 4);
        fVar2 = *(float *)(param_1 + 4 + lVar10 * 4);
        fVar3 = *(float *)(param_2 + lVar10 * 4);
        fVar4 = *(float *)(param_2 + 4 + lVar10 * 4);
        *(float *)(param_2 + lVar10 * 4) = fVar1 * fVar3 - fVar2 * fVar4;
        *(float *)(param_2 + 4 + lVar10 * 4) = fVar3 * fVar2 + fVar1 * fVar4;
        lVar10 = lVar10 + 2;
      } while (lVar10 < (int)param_3);
    }
  }
  return;
}

// ArrayComplexMultiplyAdd___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a25520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyAdd___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar17 [32];
  
  fVar7 = __real_3f800000bf800000._4_4_;
  fVar6 = (float)__real_3f800000bf800000;
  uVar8 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar8 = param_4;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar12 = 0;
    uVar9 = 0;
    do {
      uVar11 = (ulonglong)uVar12;
      auVar16._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar11);
      auVar16._0_16_ = *(undefined1 (*) [16])(param_1 + uVar11);
      auVar3 = *(undefined1 (*) [16])(param_2 + uVar11);
      auVar4 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar11);
      auVar19._16_16_ = auVar4;
      auVar19._0_16_ = auVar3;
      auVar13 = vmovsldup_avx(auVar16);
      auVar16 = vmovshdup_avx(auVar16);
      auVar19 = vshufps_avx(auVar19,auVar19,0xb1);
      pfVar1 = (float *)(param_3 + uVar11);
      pfVar2 = (float *)(param_3 + 0x10 + uVar11);
      auVar15._0_4_ = *pfVar1 + auVar3._0_4_ * auVar13._0_4_ + auVar16._0_4_ * auVar19._0_4_ * fVar6
      ;
      auVar15._4_4_ =
           pfVar1[1] + auVar3._4_4_ * auVar13._4_4_ + auVar16._4_4_ * auVar19._4_4_ * fVar7;
      auVar15._8_4_ =
           pfVar1[2] + auVar3._8_4_ * auVar13._8_4_ + auVar16._8_4_ * auVar19._8_4_ * fVar6;
      auVar15._12_4_ =
           pfVar1[3] + auVar3._12_4_ * auVar13._12_4_ + auVar16._12_4_ * auVar19._12_4_ * fVar7;
      auVar17._16_4_ =
           *pfVar2 + auVar4._0_4_ * auVar13._16_4_ + auVar16._16_4_ * auVar19._16_4_ * fVar6;
      auVar17._0_16_ = auVar15;
      auVar17._20_4_ =
           pfVar2[1] + auVar4._4_4_ * auVar13._20_4_ + auVar16._20_4_ * auVar19._20_4_ * fVar7;
      auVar17._24_4_ =
           pfVar2[2] + auVar4._8_4_ * auVar13._24_4_ + auVar16._24_4_ * auVar19._24_4_ * fVar6;
      auVar17._28_4_ =
           pfVar2[3] + auVar4._12_4_ * auVar13._28_4_ + auVar16._28_4_ * auVar19._28_4_ * fVar7;
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar11) = auVar17._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar11) = auVar15;
      uVar9 = uVar9 + 8;
      uVar12 = uVar12 + 0x20;
    } while (uVar9 < (uVar8 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar9) {
      return;
    }
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar9),0);
  auVar13._16_16_ = auVar3;
  auVar13._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_4),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar3;
  auVar14._0_16_ = auVar4;
  lVar10 = (longlong)(int)((uint)uVar9 << 2);
  auVar16 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar10));
  auVar17 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar10));
  auVar13 = vmovsldup_avx(auVar16);
  auVar16 = vmovshdup_avx(auVar16);
  auVar19 = vshufps_avx(auVar17,auVar17,0xb1);
  auVar5 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_3 + lVar10));
  auVar18._0_4_ =
       auVar5._0_4_ +
       auVar17._0_4_ * auVar13._0_4_ +
       auVar16._0_4_ * auVar19._0_4_ *
       ___ymm_3f800000bf8000003f800000bf8000003f800000bf8000003f800000bf800000;
  auVar18._4_4_ =
       auVar5._4_4_ + auVar17._4_4_ * auVar13._4_4_ + auVar16._4_4_ * auVar19._4_4_ * _UNK_150d5a824
  ;
  auVar18._8_4_ =
       auVar5._8_4_ + auVar17._8_4_ * auVar13._8_4_ + auVar16._8_4_ * auVar19._8_4_ * _UNK_150d5a828
  ;
  auVar18._12_4_ =
       auVar5._12_4_ +
       auVar17._12_4_ * auVar13._12_4_ + auVar16._12_4_ * auVar19._12_4_ * _UNK_150d5a82c;
  auVar18._16_4_ =
       auVar5._16_4_ +
       auVar17._16_4_ * auVar13._16_4_ + auVar16._16_4_ * auVar19._16_4_ * _UNK_150d5a830;
  auVar18._20_4_ =
       auVar5._20_4_ +
       auVar17._20_4_ * auVar13._20_4_ + auVar16._20_4_ * auVar19._20_4_ * _UNK_150d5a834;
  auVar18._24_4_ =
       auVar5._24_4_ +
       auVar17._24_4_ * auVar13._24_4_ + auVar16._24_4_ * auVar19._24_4_ * _UNK_150d5a838;
  auVar18._28_4_ =
       auVar5._28_4_ +
       auVar17._28_4_ * auVar13._28_4_ + auVar16._28_4_ * auVar19._28_4_ * _UNK_150d5a83c;
  auVar16 = vmaskmovps_avx(auVar14,auVar18);
  *(undefined1 (*) [32])(param_3 + lVar10) = auVar16;
  return;
}

// ArrayLerpAddInPlace___un_3C_Cunf_3E_CunfCunfun_3C_unf_3E_Cuni_avx @ 140a25a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpAddInPlace___un_3C_Cunf_3E_CunfCunfun_3C_unf_3E_Cuni_avx
               (longlong param_1,undefined8 param_2,float param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  auVar15 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar14._0_4_ = (float)(int)(param_5 - 1);
  auVar14._4_12_ = in_ZMM3._4_12_;
  auVar12 = vmaxss_avx(auVar14,ZEXT416(__real_3f800000));
  auVar12._0_4_ = (param_3 - in_ZMM1._0_4_) / auVar12._0_4_;
  auVar12._4_12_ = SUB6012((undefined1  [60])0x0,0);
  uVar8 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar8 = param_5;
  }
  auVar14 = in_ZMM1._0_16_;
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar5 = vshufps_avx(auVar14,auVar14,0);
    auVar6 = vshufps_avx(auVar12,auVar12,0);
    uVar10 = 0;
    uVar9 = 0;
    do {
      auVar17 = vpshufd_avx(ZEXT416((uint)uVar9),0);
      auVar18._16_16_ = auVar17;
      auVar18._0_16_ = auVar17;
      auVar18 = vcvtdq2ps_avx(auVar18 | auVar15);
      uVar11 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar11);
      pfVar3 = (float *)(param_1 + 0x10 + uVar11);
      pfVar2 = (float *)(param_4 + uVar11);
      pfVar4 = (float *)(param_4 + 0x10 + uVar11);
      auVar17._0_4_ = *pfVar2 + (auVar5._0_4_ + auVar6._0_4_ * auVar18._0_4_) * *pfVar1;
      auVar17._4_4_ = pfVar2[1] + (auVar5._4_4_ + auVar6._4_4_ * auVar18._4_4_) * pfVar1[1];
      auVar17._8_4_ = pfVar2[2] + (auVar5._8_4_ + auVar6._8_4_ * auVar18._8_4_) * pfVar1[2];
      auVar17._12_4_ = pfVar2[3] + (auVar5._12_4_ + auVar6._12_4_ * auVar18._12_4_) * pfVar1[3];
      auVar19._16_4_ = *pfVar4 + (auVar5._0_4_ + auVar6._0_4_ * auVar18._16_4_) * *pfVar3;
      auVar19._0_16_ = auVar17;
      auVar19._20_4_ = pfVar4[1] + (auVar5._4_4_ + auVar6._4_4_ * auVar18._20_4_) * pfVar3[1];
      auVar19._24_4_ = pfVar4[2] + (auVar5._8_4_ + auVar6._8_4_ * auVar18._24_4_) * pfVar3[2];
      auVar19._28_4_ = pfVar4[3] + (auVar5._12_4_ + auVar6._12_4_ * auVar18._28_4_) * pfVar3[3];
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar11) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar11) = auVar17;
      uVar9 = uVar9 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar9 < (uVar8 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar9) {
      return;
    }
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar9),0);
  auVar15._16_16_ = auVar5;
  auVar15._0_16_ = auVar5;
  auVar15 = auVar15 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar6 = vpshufd_avx(ZEXT416(param_5),0);
  auVar5 = vpcmpgtd_avx(auVar6,auVar15._16_16_);
  auVar6 = vpcmpgtd_avx(auVar6,auVar15._0_16_);
  auVar16._16_16_ = auVar5;
  auVar16._0_16_ = auVar6;
  auVar14 = vshufps_avx(auVar14,auVar14,0);
  auVar15 = vcvtdq2ps_avx(auVar15);
  auVar12 = vshufps_avx(auVar12,auVar12,0);
  lVar7 = (longlong)(int)((uint)uVar9 << 2);
  auVar18 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar19 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_4 + lVar7));
  auVar13._0_4_ = auVar19._0_4_ + (auVar14._0_4_ + auVar12._0_4_ * auVar15._0_4_) * auVar18._0_4_;
  auVar13._4_4_ = auVar19._4_4_ + (auVar14._4_4_ + auVar12._4_4_ * auVar15._4_4_) * auVar18._4_4_;
  auVar13._8_4_ = auVar19._8_4_ + (auVar14._8_4_ + auVar12._8_4_ * auVar15._8_4_) * auVar18._8_4_;
  auVar13._12_4_ =
       auVar19._12_4_ + (auVar14._12_4_ + auVar12._12_4_ * auVar15._12_4_) * auVar18._12_4_;
  auVar13._16_4_ =
       auVar19._16_4_ + (auVar14._0_4_ + auVar12._0_4_ * auVar15._16_4_) * auVar18._16_4_;
  auVar13._20_4_ =
       auVar19._20_4_ + (auVar14._4_4_ + auVar12._4_4_ * auVar15._20_4_) * auVar18._20_4_;
  auVar13._24_4_ =
       auVar19._24_4_ + (auVar14._8_4_ + auVar12._8_4_ * auVar15._24_4_) * auVar18._24_4_;
  auVar13._28_4_ =
       auVar19._28_4_ + (auVar14._12_4_ + auVar12._12_4_ * auVar15._28_4_) * auVar18._28_4_;
  auVar15 = vmaskmovps_avx(auVar16,auVar13);
  *(undefined1 (*) [32])(param_4 + lVar7) = auVar15;
  return;
}

// ArraySubtract___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a25be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtract___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar3 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar3 = param_4;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
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
      auVar8._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar6);
      auVar8._0_16_ = *(undefined1 (*) [16])(param_1 + uVar6);
      auVar11._16_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar6);
      auVar11._0_16_ = *(undefined1 (*) [16])(param_2 + uVar6);
      auVar8 = vsubps_avx(auVar8,auVar11);
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar6) = auVar8._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar6) = auVar8._0_16_;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_4),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar11 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar11);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_3 + lVar5) = auVar8;
  return;
}

// ArrayMagnitudeToDecibelInPlace___un_3C_unf_3E_CunfCuni_avx @ 140a262d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMagnitudeToDecibelInPlace___un_3C_unf_3E_CunfCuni_avx
               (longlong param_1,float param_2,uint param_3,undefined1 (*param_4) [16])

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  float fVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  float fVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 in_ZMM3 [64];
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar39 [32];
  float fVar48;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [16];
  
  fVar26 = __real_3f317218;
  fVar25 = __real_3f000010;
  fVar24 = __real_3eaaa11c;
  fVar23 = __real_3e80fb87;
  iVar1 = __real_ffffff82;
  fVar22 = __real_410af967;
  fVar19 = __real_3f800000;
  auVar49 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
  auVar31 = vpcmpgtd_avx(param_4[1],auVar49);
  auVar49 = vpcmpgtd_avx(*param_4,auVar49);
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  fVar9 = (param_2 * __real_40135d8e) / __real_41a00000;
  auVar54 = ZEXT416((uint)(fVar9 * __real_3fb8aa3b));
  auVar54 = vroundss_avx(auVar54,auVar54,9);
  fVar13 = auVar54._0_4_;
  iVar4 = (int)fVar13;
  if (iVar4 < 0x80) {
    fVar9 = fVar9 + fVar13 * __real_bf317200 + fVar13 * __real_b5bfbe8e;
    fVar9 = (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * __real_39907835 +
                                                                  __real_3aaaf7b5) + __real_3c09475d
                                                         ) + __real_3d2a9d49) + __real_3e2aab20) +
                              __real_3efffffd) + __real_3f800000) + __real_3f800000) *
            (float)(iVar4 * 0x800000 + 0x3f800000);
    auVar49 = vpor_avx(auVar49,auVar31);
    auVar31 = SUB6416(ZEXT864(0),0);
  }
  else {
    auVar49 = vpor_avx(auVar49,auVar31);
    auVar31 = SUB6416(ZEXT864(0),0) << 0x20;
    fVar9 = __real_7f800000;
  }
  if (-0x7f < iVar4) {
    auVar31 = ZEXT416((uint)fVar9);
  }
  uVar2 = uVar2 & 0xfffffff8;
  if ((((SUB161(auVar49 >> 0x1f,0) & 1) == 0 && (SUB161(auVar49 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar49 >> 0x5f,0) & 1) == 0) && -1 < auVar49[0xf]) {
    if ((int)uVar2 < 1) goto LAB_140a268f2;
    auVar49 = vshufps_avx(auVar31,auVar31,0);
    auVar11._16_16_ = auVar49;
    auVar11._0_16_ = auVar49;
    uVar5 = 0;
    auVar15._4_4_ = __real_3f800000;
    auVar15._0_4_ = __real_3f800000;
    auVar15._8_4_ = __real_3f800000;
    auVar15._12_4_ = __real_3f800000;
    auVar15._16_4_ = __real_3f800000;
    auVar15._20_4_ = __real_3f800000;
    auVar15._24_4_ = __real_3f800000;
    auVar15._28_4_ = __real_3f800000;
    uVar3 = 0;
    auVar28._4_4_ = __real_ff800000;
    auVar28._0_4_ = __real_ff800000;
    auVar28._8_4_ = __real_ff800000;
    auVar28._12_4_ = __real_ff800000;
    auVar28._16_4_ = __real_ff800000;
    auVar28._20_4_ = __real_ff800000;
    auVar28._24_4_ = __real_ff800000;
    auVar28._28_4_ = __real_ff800000;
    auVar33._4_4_ = __real_7fc00000;
    auVar33._0_4_ = __real_7fc00000;
    auVar33._8_4_ = __real_7fc00000;
    auVar33._12_4_ = __real_7fc00000;
    auVar33._16_4_ = __real_7fc00000;
    auVar33._20_4_ = __real_7fc00000;
    auVar33._24_4_ = __real_7fc00000;
    auVar33._28_4_ = __real_7fc00000;
    do {
      uVar6 = (ulonglong)uVar5;
      auVar37._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar6);
      auVar37._0_16_ = *(undefined1 (*) [16])(param_1 + uVar6);
      auVar10 = vmaxps_avx(auVar37,auVar11);
      auVar38 = vcmpps_avx(auVar10,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
      auVar37 = vblendvps_avx(auVar10,auVar15,auVar38);
      auVar49 = vpsrad_avx(auVar37._0_16_,0x17);
      auVar54 = vpsrad_avx(auVar37._16_16_,0x17);
      auVar52._20_4_ = auVar54._4_4_ + iVar1;
      auVar52._16_4_ = auVar54._0_4_ + iVar1;
      auVar52._24_4_ = auVar54._8_4_ + iVar1;
      auVar52._28_4_ = auVar54._12_4_ + iVar1;
      auVar52._4_4_ = auVar49._4_4_ + iVar1;
      auVar52._0_4_ = auVar49._0_4_ + iVar1;
      auVar52._8_4_ = auVar49._8_4_ + iVar1;
      auVar52._12_4_ = auVar49._12_4_ + iVar1;
      auVar41._0_4_ =
           auVar37._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
      auVar41._4_4_ = auVar37._4_4_ & _UNK_150d5a944;
      auVar41._8_4_ = auVar37._8_4_ & _UNK_150d5a948;
      auVar41._12_4_ = auVar37._12_4_ & _UNK_150d5a94c;
      auVar41._16_4_ = auVar37._16_4_ & _UNK_150d5a950;
      auVar41._20_4_ = auVar37._20_4_ & _UNK_150d5a954;
      auVar41._24_4_ = auVar37._24_4_ & _UNK_150d5a958;
      auVar41._28_4_ = auVar37._28_4_ & _UNK_150d5a95c;
      auVar37 = vsubps_avx(auVar15,auVar41 | 
                                   ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                          );
      fVar9 = auVar37._0_4_;
      fVar13 = auVar37._4_4_;
      fVar43 = auVar37._8_4_;
      fVar44 = auVar37._12_4_;
      fVar45 = auVar37._16_4_;
      fVar46 = auVar37._20_4_;
      fVar47 = auVar37._24_4_;
      fVar48 = auVar37._28_4_;
      auVar42._0_4_ =
           fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) + 
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) + 
                                                  ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                  ) + 
                                                  ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                  ) + 
                                                  ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                                  ) + fVar23) + fVar24) + fVar25) + fVar19);
      auVar42._4_4_ =
           fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * 
                                                  (fVar13 * _UNK_150d5a964 + _UNK_150d5a984) +
                                                  _UNK_150d5a9a4) + _UNK_150d5a9c4) + _UNK_150d5a9e4
                                                  ) + _UNK_150d5aa04) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar42._8_4_ =
           fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * 
                                                  (fVar43 * _UNK_150d5a968 + _UNK_150d5a988) +
                                                  _UNK_150d5a9a8) + _UNK_150d5a9c8) + _UNK_150d5a9e8
                                                  ) + _UNK_150d5aa08) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar42._12_4_ =
           fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * 
                                                  (fVar44 * _UNK_150d5a96c + _UNK_150d5a98c) +
                                                  _UNK_150d5a9ac) + _UNK_150d5a9cc) + _UNK_150d5a9ec
                                                  ) + _UNK_150d5aa0c) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar42._16_4_ =
           fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * 
                                                  (fVar45 * _UNK_150d5a970 + _UNK_150d5a990) +
                                                  _UNK_150d5a9b0) + _UNK_150d5a9d0) + _UNK_150d5a9f0
                                                  ) + _UNK_150d5aa10) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar42._20_4_ =
           fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * 
                                                  (fVar46 * _UNK_150d5a974 + _UNK_150d5a994) +
                                                  _UNK_150d5a9b4) + _UNK_150d5a9d4) + _UNK_150d5a9f4
                                                  ) + _UNK_150d5aa14) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar42._24_4_ =
           fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * 
                                                  (fVar47 * _UNK_150d5a978 + _UNK_150d5a998) +
                                                  _UNK_150d5a9b8) + _UNK_150d5a9d8) + _UNK_150d5a9f8
                                                  ) + _UNK_150d5aa18) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar42._28_4_ =
           fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * 
                                                  (fVar48 * _UNK_150d5a97c + _UNK_150d5a99c) +
                                                  _UNK_150d5a9bc) + _UNK_150d5a9dc) + _UNK_150d5a9fc
                                                  ) + _UNK_150d5aa1c) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar37 = vcvtdq2ps_avx(auVar52);
      auVar53._0_4_ = auVar37._0_4_ * fVar26;
      auVar53._4_4_ = auVar37._4_4_ * fVar26;
      auVar53._8_4_ = auVar37._8_4_ * fVar26;
      auVar53._12_4_ = auVar37._12_4_ * fVar26;
      auVar53._16_4_ = auVar37._16_4_ * fVar26;
      auVar53._20_4_ = auVar37._20_4_ * fVar26;
      auVar53._24_4_ = auVar37._24_4_ * fVar26;
      auVar53._28_4_ = auVar37._28_4_ * fVar26;
      auVar41 = vsubps_avx(auVar53,auVar42);
      auVar37 = vcmpps_avx(auVar10,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
      auVar37 = vblendvps_avx(auVar28,auVar33,auVar37);
      auVar37 = vblendvps_avx(auVar41,auVar37,auVar38);
      auVar49._0_4_ = auVar37._0_4_ * fVar22;
      auVar49._4_4_ = auVar37._4_4_ * fVar22;
      auVar49._8_4_ = auVar37._8_4_ * fVar22;
      auVar49._12_4_ = auVar37._12_4_ * fVar22;
      auVar38._16_4_ = auVar37._16_4_ * fVar22;
      auVar38._0_16_ = auVar49;
      auVar38._20_4_ = auVar37._20_4_ * fVar22;
      auVar38._24_4_ = auVar37._24_4_ * fVar22;
      auVar38._28_4_ = auVar37._28_4_ * fVar22;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar6) = auVar38._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar6) = auVar49;
      uVar3 = uVar3 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar3 < uVar2);
  }
  else {
    if ((int)uVar2 < 1) {
LAB_140a268f2:
      uVar2 = 0;
      if ((int)param_3 < 1) {
        return;
      }
      goto LAB_140a26749;
    }
    auVar49 = vshufps_avx(auVar31,auVar31,0);
    auVar10._16_16_ = auVar49;
    auVar10._0_16_ = auVar49;
    uVar5 = 0;
    auVar14._4_4_ = __real_3f800000;
    auVar14._0_4_ = __real_3f800000;
    auVar14._8_4_ = __real_3f800000;
    auVar14._12_4_ = __real_3f800000;
    auVar14._16_4_ = __real_3f800000;
    auVar14._20_4_ = __real_3f800000;
    auVar14._24_4_ = __real_3f800000;
    auVar14._28_4_ = __real_3f800000;
    uVar3 = 0;
    auVar27._4_4_ = __real_ff800000;
    auVar27._0_4_ = __real_ff800000;
    auVar27._8_4_ = __real_ff800000;
    auVar27._12_4_ = __real_ff800000;
    auVar27._16_4_ = __real_ff800000;
    auVar27._20_4_ = __real_ff800000;
    auVar27._24_4_ = __real_ff800000;
    auVar27._28_4_ = __real_ff800000;
    auVar32._4_4_ = __real_7fc00000;
    auVar32._0_4_ = __real_7fc00000;
    auVar32._8_4_ = __real_7fc00000;
    auVar32._12_4_ = __real_7fc00000;
    auVar32._16_4_ = __real_7fc00000;
    auVar32._20_4_ = __real_7fc00000;
    auVar32._24_4_ = __real_7fc00000;
    auVar32._28_4_ = __real_7fc00000;
    do {
      uVar6 = (ulonglong)uVar5;
      auVar35._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar6);
      auVar35._0_16_ = *(undefined1 (*) [16])(param_1 + uVar6);
      auVar28 = vmaxps_avx(auVar35,auVar10);
      auVar15 = vcmpps_avx(auVar28,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
      auVar11 = vblendvps_avx(auVar28,auVar14,auVar15);
      auVar49 = vpsrad_avx(auVar11._0_16_,0x17);
      auVar54 = vpsrad_avx(auVar11._16_16_,0x17);
      auVar50._20_4_ = auVar54._4_4_ + iVar1;
      auVar50._16_4_ = auVar54._0_4_ + iVar1;
      auVar50._24_4_ = auVar54._8_4_ + iVar1;
      auVar50._28_4_ = auVar54._12_4_ + iVar1;
      auVar50._4_4_ = auVar49._4_4_ + iVar1;
      auVar50._0_4_ = auVar49._0_4_ + iVar1;
      auVar50._8_4_ = auVar49._8_4_ + iVar1;
      auVar50._12_4_ = auVar49._12_4_ + iVar1;
      auVar39._0_4_ =
           auVar11._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
      auVar39._4_4_ = auVar11._4_4_ & _UNK_150d5a944;
      auVar39._8_4_ = auVar11._8_4_ & _UNK_150d5a948;
      auVar39._12_4_ = auVar11._12_4_ & _UNK_150d5a94c;
      auVar39._16_4_ = auVar11._16_4_ & _UNK_150d5a950;
      auVar39._20_4_ = auVar11._20_4_ & _UNK_150d5a954;
      auVar39._24_4_ = auVar11._24_4_ & _UNK_150d5a958;
      auVar39._28_4_ = auVar11._28_4_ & _UNK_150d5a95c;
      auVar11 = vsubps_avx(auVar14,auVar39 | 
                                   ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                          );
      fVar9 = auVar11._0_4_;
      fVar13 = auVar11._4_4_;
      fVar43 = auVar11._8_4_;
      fVar44 = auVar11._12_4_;
      fVar45 = auVar11._16_4_;
      fVar46 = auVar11._20_4_;
      fVar47 = auVar11._24_4_;
      fVar48 = auVar11._28_4_;
      auVar40._0_4_ =
           fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) + 
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) + 
                                                  ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                  ) + 
                                                  ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                  ) + 
                                                  ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                                  ) + fVar23) + fVar24) + fVar25) + fVar19);
      auVar40._4_4_ =
           fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * 
                                                  (fVar13 * _UNK_150d5a964 + _UNK_150d5a984) +
                                                  _UNK_150d5a9a4) + _UNK_150d5a9c4) + _UNK_150d5a9e4
                                                  ) + _UNK_150d5aa04) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar40._8_4_ =
           fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * 
                                                  (fVar43 * _UNK_150d5a968 + _UNK_150d5a988) +
                                                  _UNK_150d5a9a8) + _UNK_150d5a9c8) + _UNK_150d5a9e8
                                                  ) + _UNK_150d5aa08) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar40._12_4_ =
           fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * 
                                                  (fVar44 * _UNK_150d5a96c + _UNK_150d5a98c) +
                                                  _UNK_150d5a9ac) + _UNK_150d5a9cc) + _UNK_150d5a9ec
                                                  ) + _UNK_150d5aa0c) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar40._16_4_ =
           fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * 
                                                  (fVar45 * _UNK_150d5a970 + _UNK_150d5a990) +
                                                  _UNK_150d5a9b0) + _UNK_150d5a9d0) + _UNK_150d5a9f0
                                                  ) + _UNK_150d5aa10) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar40._20_4_ =
           fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * 
                                                  (fVar46 * _UNK_150d5a974 + _UNK_150d5a994) +
                                                  _UNK_150d5a9b4) + _UNK_150d5a9d4) + _UNK_150d5a9f4
                                                  ) + _UNK_150d5aa14) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar40._24_4_ =
           fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * 
                                                  (fVar47 * _UNK_150d5a978 + _UNK_150d5a998) +
                                                  _UNK_150d5a9b8) + _UNK_150d5a9d8) + _UNK_150d5a9f8
                                                  ) + _UNK_150d5aa18) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar40._28_4_ =
           fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * 
                                                  (fVar48 * _UNK_150d5a97c + _UNK_150d5a99c) +
                                                  _UNK_150d5a9bc) + _UNK_150d5a9dc) + _UNK_150d5a9fc
                                                  ) + _UNK_150d5aa1c) + fVar23) + fVar24) + fVar25)
                    + fVar19);
      auVar11 = vcvtdq2ps_avx(auVar50);
      auVar51._0_4_ = auVar11._0_4_ * fVar26;
      auVar51._4_4_ = auVar11._4_4_ * fVar26;
      auVar51._8_4_ = auVar11._8_4_ * fVar26;
      auVar51._12_4_ = auVar11._12_4_ * fVar26;
      auVar51._16_4_ = auVar11._16_4_ * fVar26;
      auVar51._20_4_ = auVar11._20_4_ * fVar26;
      auVar51._24_4_ = auVar11._24_4_ * fVar26;
      auVar51._28_4_ = auVar11._28_4_ * fVar26;
      auVar33 = vsubps_avx(auVar51,auVar40);
      auVar11 = vcmpps_avx(auVar28,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
      auVar11 = vblendvps_avx(auVar27,auVar32,auVar11);
      auVar11 = vblendvps_avx(auVar33,auVar11,auVar15);
      auVar54._0_4_ = auVar11._0_4_ * fVar22;
      auVar54._4_4_ = auVar11._4_4_ * fVar22;
      auVar54._8_4_ = auVar11._8_4_ * fVar22;
      auVar54._12_4_ = auVar11._12_4_ * fVar22;
      auVar36._16_4_ = auVar11._16_4_ * fVar22;
      auVar36._0_16_ = auVar54;
      auVar36._20_4_ = auVar11._20_4_ * fVar22;
      auVar36._24_4_ = auVar11._24_4_ * fVar22;
      auVar36._28_4_ = auVar11._28_4_ * fVar22;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar6) = auVar36._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar6) = auVar54;
      uVar3 = uVar3 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar3 < uVar2);
  }
  uVar2 = (uint)uVar3;
  if ((int)param_3 <= (int)uVar2) {
    return;
  }
LAB_140a26749:
  auVar49 = vpshufd_avx(ZEXT416(uVar2),0);
  auVar7._16_16_ = auVar49;
  auVar7._0_16_ = auVar49;
  auVar54 = vpshufd_avx(ZEXT416(param_3),0);
  auVar49 = vpcmpgtd_avx(auVar54,SUB3216(auVar7 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0x10));
  auVar54 = vpcmpgtd_avx(auVar54,SUB3216(auVar7 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar8._16_16_ = auVar49;
  auVar8._0_16_ = auVar54;
  auVar11 = vmaskmovps_avx(auVar8,*(undefined1 (*) [32])(param_1 + (int)(uVar2 << 2)));
  auVar49 = vshufps_avx(auVar31,auVar31,0);
  auVar16._16_16_ = auVar49;
  auVar16._0_16_ = auVar49;
  auVar11 = vmaxps_avx(auVar11,auVar16);
  auVar28 = vcmpps_avx(auVar11,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  auVar33 = vcmpps_avx(auVar11,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
  auVar17._4_4_ = __real_3f800000;
  auVar17._0_4_ = __real_3f800000;
  auVar17._8_4_ = __real_3f800000;
  auVar17._12_4_ = __real_3f800000;
  auVar17._16_4_ = __real_3f800000;
  auVar17._20_4_ = __real_3f800000;
  auVar17._24_4_ = __real_3f800000;
  auVar17._28_4_ = __real_3f800000;
  auVar11 = vblendvps_avx(auVar11,auVar17,auVar33);
  auVar49 = vpsrad_avx(auVar11._0_16_,0x17);
  auVar20._0_4_ =
       auVar11._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
  auVar20._4_4_ = auVar11._4_4_ & _UNK_150d5a944;
  auVar20._8_4_ = auVar11._8_4_ & _UNK_150d5a948;
  auVar20._12_4_ = auVar11._12_4_ & _UNK_150d5a94c;
  auVar20._16_4_ = auVar11._16_4_ & _UNK_150d5a950;
  auVar20._20_4_ = auVar11._20_4_ & _UNK_150d5a954;
  auVar20._24_4_ = auVar11._24_4_ & _UNK_150d5a958;
  auVar20._28_4_ = auVar11._28_4_ & _UNK_150d5a95c;
  auVar15 = vsubps_avx(auVar17,auVar20 | 
                               ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                      );
  auVar34._4_4_ = __real_7fc00000;
  auVar34._0_4_ = __real_7fc00000;
  auVar34._8_4_ = __real_7fc00000;
  auVar34._12_4_ = __real_7fc00000;
  auVar34._16_4_ = __real_7fc00000;
  auVar34._20_4_ = __real_7fc00000;
  auVar34._24_4_ = __real_7fc00000;
  auVar34._28_4_ = __real_7fc00000;
  auVar15 = vblendvps_avx(auVar34,auVar15,auVar8);
  fVar19 = auVar15._0_4_;
  fVar22 = auVar15._4_4_;
  fVar23 = auVar15._8_4_;
  fVar24 = auVar15._12_4_;
  fVar25 = auVar15._16_4_;
  fVar26 = auVar15._20_4_;
  fVar9 = auVar15._24_4_;
  fVar13 = auVar15._28_4_;
  auVar31 = vpsrad_avx(auVar11._16_16_,0x17);
  auVar29._20_4_ = __real_ffffff82 + auVar31._4_4_;
  auVar29._16_4_ = __real_ffffff82 + auVar31._0_4_;
  auVar29._24_4_ = __real_ffffff82 + auVar31._8_4_;
  auVar29._28_4_ = __real_ffffff82 + auVar31._12_4_;
  auVar29._4_4_ = __real_ffffff82 + auVar49._4_4_;
  auVar29._0_4_ = __real_ffffff82 + auVar49._0_4_;
  auVar29._8_4_ = __real_ffffff82 + auVar49._8_4_;
  auVar29._12_4_ = __real_ffffff82 + auVar49._12_4_;
  auVar11 = vcvtdq2ps_avx(auVar29);
  auVar30._0_4_ =
       auVar11._0_4_ * ___ymm_3f3172183f3172183f3172183f3172183f3172183f3172183f3172183f317218;
  auVar30._4_4_ = auVar11._4_4_ * _UNK_150d5aa84;
  auVar30._8_4_ = auVar11._8_4_ * _UNK_150d5aa88;
  auVar30._12_4_ = auVar11._12_4_ * _UNK_150d5aa8c;
  auVar30._16_4_ = auVar11._16_4_ * _UNK_150d5aa90;
  auVar30._20_4_ = auVar11._20_4_ * _UNK_150d5aa94;
  auVar30._24_4_ = auVar11._24_4_ * _UNK_150d5aa98;
  auVar30._28_4_ = auVar11._28_4_ * _UNK_150d5aa9c;
  auVar18._0_4_ =
       fVar19 * (fVar19 * (fVar19 * (fVar19 * ((((((fVar19 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) * fVar19 +
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) * fVar19 +
                                                 ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                 ) * fVar19 +
                                                ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                ) * fVar19 +
                                               ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                               ) * fVar19 +
                                              ___ymm_3e80fb873e80fb873e80fb873e80fb873e80fb873e80fb873e80fb873e80fb87
                                              ) +
                                    ___ymm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c
                                    ) +
                          ___ymm_3f0000103f0000103f0000103f0000103f0000103f0000103f0000103f000010) +
                __real_3f800000);
  auVar18._4_4_ =
       fVar22 * (fVar22 * (fVar22 * (fVar22 * ((((((fVar22 * _UNK_150d5a964 + _UNK_150d5a984) *
                                                   fVar22 + _UNK_150d5a9a4) * fVar22 +
                                                 _UNK_150d5a9c4) * fVar22 + _UNK_150d5a9e4) * fVar22
                                               + _UNK_150d5aa04) * fVar22 + _UNK_150d5aa24) +
                                    _UNK_150d5aa44) + _UNK_150d5aa64) + __real_3f800000);
  auVar18._8_4_ =
       fVar23 * (fVar23 * (fVar23 * (fVar23 * ((((((fVar23 * _UNK_150d5a968 + _UNK_150d5a988) *
                                                   fVar23 + _UNK_150d5a9a8) * fVar23 +
                                                 _UNK_150d5a9c8) * fVar23 + _UNK_150d5a9e8) * fVar23
                                               + _UNK_150d5aa08) * fVar23 + _UNK_150d5aa28) +
                                    _UNK_150d5aa48) + _UNK_150d5aa68) + __real_3f800000);
  auVar18._12_4_ =
       fVar24 * (fVar24 * (fVar24 * (fVar24 * ((((((fVar24 * _UNK_150d5a96c + _UNK_150d5a98c) *
                                                   fVar24 + _UNK_150d5a9ac) * fVar24 +
                                                 _UNK_150d5a9cc) * fVar24 + _UNK_150d5a9ec) * fVar24
                                               + _UNK_150d5aa0c) * fVar24 + _UNK_150d5aa2c) +
                                    _UNK_150d5aa4c) + _UNK_150d5aa6c) + __real_3f800000);
  auVar18._16_4_ =
       fVar25 * (fVar25 * (fVar25 * (fVar25 * ((((((fVar25 * _UNK_150d5a970 + _UNK_150d5a990) *
                                                   fVar25 + _UNK_150d5a9b0) * fVar25 +
                                                 _UNK_150d5a9d0) * fVar25 + _UNK_150d5a9f0) * fVar25
                                               + _UNK_150d5aa10) * fVar25 + _UNK_150d5aa30) +
                                    _UNK_150d5aa50) + _UNK_150d5aa70) + __real_3f800000);
  auVar18._20_4_ =
       fVar26 * (fVar26 * (fVar26 * (fVar26 * ((((((fVar26 * _UNK_150d5a974 + _UNK_150d5a994) *
                                                   fVar26 + _UNK_150d5a9b4) * fVar26 +
                                                 _UNK_150d5a9d4) * fVar26 + _UNK_150d5a9f4) * fVar26
                                               + _UNK_150d5aa14) * fVar26 + _UNK_150d5aa34) +
                                    _UNK_150d5aa54) + _UNK_150d5aa74) + __real_3f800000);
  auVar18._24_4_ =
       fVar9 * (fVar9 * (fVar9 * (fVar9 * ((((((fVar9 * _UNK_150d5a978 + _UNK_150d5a998) * fVar9 +
                                              _UNK_150d5a9b8) * fVar9 + _UNK_150d5a9d8) * fVar9 +
                                            _UNK_150d5a9f8) * fVar9 + _UNK_150d5aa18) * fVar9 +
                                          _UNK_150d5aa38) + _UNK_150d5aa58) + _UNK_150d5aa78) +
               __real_3f800000);
  auVar18._28_4_ =
       fVar13 * (fVar13 * (fVar13 * (fVar13 * ((((((fVar13 * _UNK_150d5a97c + _UNK_150d5a99c) *
                                                   fVar13 + _UNK_150d5a9bc) * fVar13 +
                                                 _UNK_150d5a9dc) * fVar13 + _UNK_150d5a9fc) * fVar13
                                               + _UNK_150d5aa1c) * fVar13 + _UNK_150d5aa3c) +
                                    _UNK_150d5aa5c) + _UNK_150d5aa7c) + __real_3f800000);
  auVar15 = vsubps_avx(auVar30,auVar18);
  auVar21._4_4_ = __real_ff800000;
  auVar21._0_4_ = __real_ff800000;
  auVar21._8_4_ = __real_ff800000;
  auVar21._12_4_ = __real_ff800000;
  auVar21._16_4_ = __real_ff800000;
  auVar21._20_4_ = __real_ff800000;
  auVar21._24_4_ = __real_ff800000;
  auVar21._28_4_ = __real_ff800000;
  auVar11 = vblendvps_avx(auVar21,auVar34,auVar28);
  auVar11 = vblendvps_avx(auVar15,auVar11,auVar33);
  auVar12._0_4_ =
       auVar11._0_4_ * ___ymm_410af967410af967410af967410af967410af967410af967410af967410af967;
  auVar12._4_4_ = auVar11._4_4_ * _UNK_150d5aac4;
  auVar12._8_4_ = auVar11._8_4_ * _UNK_150d5aac8;
  auVar12._12_4_ = auVar11._12_4_ * _UNK_150d5aacc;
  auVar12._16_4_ = auVar11._16_4_ * _UNK_150d5aad0;
  auVar12._20_4_ = auVar11._20_4_ * _UNK_150d5aad4;
  auVar12._24_4_ = auVar11._24_4_ * _UNK_150d5aad8;
  auVar12._28_4_ = auVar11._28_4_ * _UNK_150d5aadc;
  auVar11 = vmaskmovps_avx(auVar8,auVar12);
  *(undefined1 (*) [32])(param_1 + (int)(uVar2 << 2)) = auVar11;
  return;
}

// ArrayPowerToDecibelInPlace___un_3C_unf_3E_CunfCuni_avx @ 140a26900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPowerToDecibelInPlace___un_3C_unf_3E_CunfCuni_avx
               (longlong param_1,float param_2,uint param_3,undefined1 (*param_4) [16])

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  float fVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  float fVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 in_ZMM3 [64];
  float fVar19;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar39 [32];
  float fVar48;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [16];
  
  fVar26 = __real_408af967;
  fVar25 = __real_3f317218;
  fVar24 = __real_3f000010;
  fVar23 = __real_3eaaa11c;
  fVar22 = __real_3e80fb87;
  iVar1 = __real_ffffff82;
  fVar19 = __real_3f800000;
  auVar49 = vpcmpeqd_avx(in_ZMM3._0_16_,in_ZMM3._0_16_);
  auVar31 = vpcmpgtd_avx(param_4[1],auVar49);
  auVar49 = vpcmpgtd_avx(*param_4,auVar49);
  uVar2 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar2 = param_3;
  }
  fVar9 = (param_2 * __real_40135d8e) / __real_41200000;
  auVar54 = ZEXT416((uint)(fVar9 * __real_3fb8aa3b));
  auVar54 = vroundss_avx(auVar54,auVar54,9);
  fVar13 = auVar54._0_4_;
  iVar4 = (int)fVar13;
  if (iVar4 < 0x80) {
    fVar9 = fVar9 + fVar13 * __real_bf317200 + fVar13 * __real_b5bfbe8e;
    fVar9 = (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * __real_39907835 +
                                                                  __real_3aaaf7b5) + __real_3c09475d
                                                         ) + __real_3d2a9d49) + __real_3e2aab20) +
                              __real_3efffffd) + __real_3f800000) + __real_3f800000) *
            (float)(iVar4 * 0x800000 + 0x3f800000);
    auVar49 = vpor_avx(auVar49,auVar31);
    auVar31 = SUB6416(ZEXT864(0),0);
  }
  else {
    auVar49 = vpor_avx(auVar49,auVar31);
    auVar31 = SUB6416(ZEXT864(0),0) << 0x20;
    fVar9 = __real_7f800000;
  }
  if (-0x7f < iVar4) {
    auVar31 = ZEXT416((uint)fVar9);
  }
  uVar2 = uVar2 & 0xfffffff8;
  if ((((SUB161(auVar49 >> 0x1f,0) & 1) == 0 && (SUB161(auVar49 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar49 >> 0x5f,0) & 1) == 0) && -1 < auVar49[0xf]) {
    if ((int)uVar2 < 1) goto LAB_140a26f22;
    auVar49 = vshufps_avx(auVar31,auVar31,0);
    auVar11._16_16_ = auVar49;
    auVar11._0_16_ = auVar49;
    uVar5 = 0;
    auVar15._4_4_ = __real_3f800000;
    auVar15._0_4_ = __real_3f800000;
    auVar15._8_4_ = __real_3f800000;
    auVar15._12_4_ = __real_3f800000;
    auVar15._16_4_ = __real_3f800000;
    auVar15._20_4_ = __real_3f800000;
    auVar15._24_4_ = __real_3f800000;
    auVar15._28_4_ = __real_3f800000;
    uVar3 = 0;
    auVar28._4_4_ = __real_ff800000;
    auVar28._0_4_ = __real_ff800000;
    auVar28._8_4_ = __real_ff800000;
    auVar28._12_4_ = __real_ff800000;
    auVar28._16_4_ = __real_ff800000;
    auVar28._20_4_ = __real_ff800000;
    auVar28._24_4_ = __real_ff800000;
    auVar28._28_4_ = __real_ff800000;
    auVar33._4_4_ = __real_7fc00000;
    auVar33._0_4_ = __real_7fc00000;
    auVar33._8_4_ = __real_7fc00000;
    auVar33._12_4_ = __real_7fc00000;
    auVar33._16_4_ = __real_7fc00000;
    auVar33._20_4_ = __real_7fc00000;
    auVar33._24_4_ = __real_7fc00000;
    auVar33._28_4_ = __real_7fc00000;
    do {
      uVar6 = (ulonglong)uVar5;
      auVar37._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar6);
      auVar37._0_16_ = *(undefined1 (*) [16])(param_1 + uVar6);
      auVar10 = vmaxps_avx(auVar37,auVar11);
      auVar38 = vcmpps_avx(auVar10,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
      auVar37 = vblendvps_avx(auVar10,auVar15,auVar38);
      auVar49 = vpsrad_avx(auVar37._0_16_,0x17);
      auVar54 = vpsrad_avx(auVar37._16_16_,0x17);
      auVar52._20_4_ = auVar54._4_4_ + iVar1;
      auVar52._16_4_ = auVar54._0_4_ + iVar1;
      auVar52._24_4_ = auVar54._8_4_ + iVar1;
      auVar52._28_4_ = auVar54._12_4_ + iVar1;
      auVar52._4_4_ = auVar49._4_4_ + iVar1;
      auVar52._0_4_ = auVar49._0_4_ + iVar1;
      auVar52._8_4_ = auVar49._8_4_ + iVar1;
      auVar52._12_4_ = auVar49._12_4_ + iVar1;
      auVar41._0_4_ =
           auVar37._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
      auVar41._4_4_ = auVar37._4_4_ & _UNK_150d5a944;
      auVar41._8_4_ = auVar37._8_4_ & _UNK_150d5a948;
      auVar41._12_4_ = auVar37._12_4_ & _UNK_150d5a94c;
      auVar41._16_4_ = auVar37._16_4_ & _UNK_150d5a950;
      auVar41._20_4_ = auVar37._20_4_ & _UNK_150d5a954;
      auVar41._24_4_ = auVar37._24_4_ & _UNK_150d5a958;
      auVar41._28_4_ = auVar37._28_4_ & _UNK_150d5a95c;
      auVar37 = vsubps_avx(auVar15,auVar41 | 
                                   ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                          );
      fVar9 = auVar37._0_4_;
      fVar13 = auVar37._4_4_;
      fVar43 = auVar37._8_4_;
      fVar44 = auVar37._12_4_;
      fVar45 = auVar37._16_4_;
      fVar46 = auVar37._20_4_;
      fVar47 = auVar37._24_4_;
      fVar48 = auVar37._28_4_;
      auVar42._0_4_ =
           fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) + 
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) + 
                                                  ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                  ) + 
                                                  ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                  ) + 
                                                  ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                                  ) + fVar22) + fVar23) + fVar24) + fVar19);
      auVar42._4_4_ =
           fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * 
                                                  (fVar13 * _UNK_150d5a964 + _UNK_150d5a984) +
                                                  _UNK_150d5a9a4) + _UNK_150d5a9c4) + _UNK_150d5a9e4
                                                  ) + _UNK_150d5aa04) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar42._8_4_ =
           fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * 
                                                  (fVar43 * _UNK_150d5a968 + _UNK_150d5a988) +
                                                  _UNK_150d5a9a8) + _UNK_150d5a9c8) + _UNK_150d5a9e8
                                                  ) + _UNK_150d5aa08) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar42._12_4_ =
           fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * 
                                                  (fVar44 * _UNK_150d5a96c + _UNK_150d5a98c) +
                                                  _UNK_150d5a9ac) + _UNK_150d5a9cc) + _UNK_150d5a9ec
                                                  ) + _UNK_150d5aa0c) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar42._16_4_ =
           fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * 
                                                  (fVar45 * _UNK_150d5a970 + _UNK_150d5a990) +
                                                  _UNK_150d5a9b0) + _UNK_150d5a9d0) + _UNK_150d5a9f0
                                                  ) + _UNK_150d5aa10) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar42._20_4_ =
           fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * 
                                                  (fVar46 * _UNK_150d5a974 + _UNK_150d5a994) +
                                                  _UNK_150d5a9b4) + _UNK_150d5a9d4) + _UNK_150d5a9f4
                                                  ) + _UNK_150d5aa14) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar42._24_4_ =
           fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * 
                                                  (fVar47 * _UNK_150d5a978 + _UNK_150d5a998) +
                                                  _UNK_150d5a9b8) + _UNK_150d5a9d8) + _UNK_150d5a9f8
                                                  ) + _UNK_150d5aa18) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar42._28_4_ =
           fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * 
                                                  (fVar48 * _UNK_150d5a97c + _UNK_150d5a99c) +
                                                  _UNK_150d5a9bc) + _UNK_150d5a9dc) + _UNK_150d5a9fc
                                                  ) + _UNK_150d5aa1c) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar37 = vcvtdq2ps_avx(auVar52);
      auVar53._0_4_ = auVar37._0_4_ * fVar25;
      auVar53._4_4_ = auVar37._4_4_ * fVar25;
      auVar53._8_4_ = auVar37._8_4_ * fVar25;
      auVar53._12_4_ = auVar37._12_4_ * fVar25;
      auVar53._16_4_ = auVar37._16_4_ * fVar25;
      auVar53._20_4_ = auVar37._20_4_ * fVar25;
      auVar53._24_4_ = auVar37._24_4_ * fVar25;
      auVar53._28_4_ = auVar37._28_4_ * fVar25;
      auVar41 = vsubps_avx(auVar53,auVar42);
      auVar37 = vcmpps_avx(auVar10,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
      auVar37 = vblendvps_avx(auVar28,auVar33,auVar37);
      auVar37 = vblendvps_avx(auVar41,auVar37,auVar38);
      auVar49._0_4_ = auVar37._0_4_ * fVar26;
      auVar49._4_4_ = auVar37._4_4_ * fVar26;
      auVar49._8_4_ = auVar37._8_4_ * fVar26;
      auVar49._12_4_ = auVar37._12_4_ * fVar26;
      auVar38._16_4_ = auVar37._16_4_ * fVar26;
      auVar38._0_16_ = auVar49;
      auVar38._20_4_ = auVar37._20_4_ * fVar26;
      auVar38._24_4_ = auVar37._24_4_ * fVar26;
      auVar38._28_4_ = auVar37._28_4_ * fVar26;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar6) = auVar38._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar6) = auVar49;
      uVar3 = uVar3 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar3 < uVar2);
  }
  else {
    if ((int)uVar2 < 1) {
LAB_140a26f22:
      uVar2 = 0;
      if ((int)param_3 < 1) {
        return;
      }
      goto LAB_140a26d79;
    }
    auVar49 = vshufps_avx(auVar31,auVar31,0);
    auVar10._16_16_ = auVar49;
    auVar10._0_16_ = auVar49;
    uVar5 = 0;
    auVar14._4_4_ = __real_3f800000;
    auVar14._0_4_ = __real_3f800000;
    auVar14._8_4_ = __real_3f800000;
    auVar14._12_4_ = __real_3f800000;
    auVar14._16_4_ = __real_3f800000;
    auVar14._20_4_ = __real_3f800000;
    auVar14._24_4_ = __real_3f800000;
    auVar14._28_4_ = __real_3f800000;
    uVar3 = 0;
    auVar27._4_4_ = __real_ff800000;
    auVar27._0_4_ = __real_ff800000;
    auVar27._8_4_ = __real_ff800000;
    auVar27._12_4_ = __real_ff800000;
    auVar27._16_4_ = __real_ff800000;
    auVar27._20_4_ = __real_ff800000;
    auVar27._24_4_ = __real_ff800000;
    auVar27._28_4_ = __real_ff800000;
    auVar32._4_4_ = __real_7fc00000;
    auVar32._0_4_ = __real_7fc00000;
    auVar32._8_4_ = __real_7fc00000;
    auVar32._12_4_ = __real_7fc00000;
    auVar32._16_4_ = __real_7fc00000;
    auVar32._20_4_ = __real_7fc00000;
    auVar32._24_4_ = __real_7fc00000;
    auVar32._28_4_ = __real_7fc00000;
    do {
      uVar6 = (ulonglong)uVar5;
      auVar35._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar6);
      auVar35._0_16_ = *(undefined1 (*) [16])(param_1 + uVar6);
      auVar28 = vmaxps_avx(auVar35,auVar10);
      auVar15 = vcmpps_avx(auVar28,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
      auVar11 = vblendvps_avx(auVar28,auVar14,auVar15);
      auVar49 = vpsrad_avx(auVar11._0_16_,0x17);
      auVar54 = vpsrad_avx(auVar11._16_16_,0x17);
      auVar50._20_4_ = auVar54._4_4_ + iVar1;
      auVar50._16_4_ = auVar54._0_4_ + iVar1;
      auVar50._24_4_ = auVar54._8_4_ + iVar1;
      auVar50._28_4_ = auVar54._12_4_ + iVar1;
      auVar50._4_4_ = auVar49._4_4_ + iVar1;
      auVar50._0_4_ = auVar49._0_4_ + iVar1;
      auVar50._8_4_ = auVar49._8_4_ + iVar1;
      auVar50._12_4_ = auVar49._12_4_ + iVar1;
      auVar39._0_4_ =
           auVar11._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
      auVar39._4_4_ = auVar11._4_4_ & _UNK_150d5a944;
      auVar39._8_4_ = auVar11._8_4_ & _UNK_150d5a948;
      auVar39._12_4_ = auVar11._12_4_ & _UNK_150d5a94c;
      auVar39._16_4_ = auVar11._16_4_ & _UNK_150d5a950;
      auVar39._20_4_ = auVar11._20_4_ & _UNK_150d5a954;
      auVar39._24_4_ = auVar11._24_4_ & _UNK_150d5a958;
      auVar39._28_4_ = auVar11._28_4_ & _UNK_150d5a95c;
      auVar11 = vsubps_avx(auVar14,auVar39 | 
                                   ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                          );
      fVar9 = auVar11._0_4_;
      fVar13 = auVar11._4_4_;
      fVar43 = auVar11._8_4_;
      fVar44 = auVar11._12_4_;
      fVar45 = auVar11._16_4_;
      fVar46 = auVar11._20_4_;
      fVar47 = auVar11._24_4_;
      fVar48 = auVar11._28_4_;
      auVar40._0_4_ =
           fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * (fVar9 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) + 
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) + 
                                                  ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                  ) + 
                                                  ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                  ) + 
                                                  ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                                  ) + fVar22) + fVar23) + fVar24) + fVar19);
      auVar40._4_4_ =
           fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * (fVar13 * 
                                                  (fVar13 * _UNK_150d5a964 + _UNK_150d5a984) +
                                                  _UNK_150d5a9a4) + _UNK_150d5a9c4) + _UNK_150d5a9e4
                                                  ) + _UNK_150d5aa04) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar40._8_4_ =
           fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * (fVar43 * 
                                                  (fVar43 * _UNK_150d5a968 + _UNK_150d5a988) +
                                                  _UNK_150d5a9a8) + _UNK_150d5a9c8) + _UNK_150d5a9e8
                                                  ) + _UNK_150d5aa08) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar40._12_4_ =
           fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * (fVar44 * 
                                                  (fVar44 * _UNK_150d5a96c + _UNK_150d5a98c) +
                                                  _UNK_150d5a9ac) + _UNK_150d5a9cc) + _UNK_150d5a9ec
                                                  ) + _UNK_150d5aa0c) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar40._16_4_ =
           fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * (fVar45 * 
                                                  (fVar45 * _UNK_150d5a970 + _UNK_150d5a990) +
                                                  _UNK_150d5a9b0) + _UNK_150d5a9d0) + _UNK_150d5a9f0
                                                  ) + _UNK_150d5aa10) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar40._20_4_ =
           fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * (fVar46 * 
                                                  (fVar46 * _UNK_150d5a974 + _UNK_150d5a994) +
                                                  _UNK_150d5a9b4) + _UNK_150d5a9d4) + _UNK_150d5a9f4
                                                  ) + _UNK_150d5aa14) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar40._24_4_ =
           fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * (fVar47 * 
                                                  (fVar47 * _UNK_150d5a978 + _UNK_150d5a998) +
                                                  _UNK_150d5a9b8) + _UNK_150d5a9d8) + _UNK_150d5a9f8
                                                  ) + _UNK_150d5aa18) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar40._28_4_ =
           fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * (fVar48 * 
                                                  (fVar48 * _UNK_150d5a97c + _UNK_150d5a99c) +
                                                  _UNK_150d5a9bc) + _UNK_150d5a9dc) + _UNK_150d5a9fc
                                                  ) + _UNK_150d5aa1c) + fVar22) + fVar23) + fVar24)
                    + fVar19);
      auVar11 = vcvtdq2ps_avx(auVar50);
      auVar51._0_4_ = auVar11._0_4_ * fVar25;
      auVar51._4_4_ = auVar11._4_4_ * fVar25;
      auVar51._8_4_ = auVar11._8_4_ * fVar25;
      auVar51._12_4_ = auVar11._12_4_ * fVar25;
      auVar51._16_4_ = auVar11._16_4_ * fVar25;
      auVar51._20_4_ = auVar11._20_4_ * fVar25;
      auVar51._24_4_ = auVar11._24_4_ * fVar25;
      auVar51._28_4_ = auVar11._28_4_ * fVar25;
      auVar33 = vsubps_avx(auVar51,auVar40);
      auVar11 = vcmpps_avx(auVar28,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
      auVar11 = vblendvps_avx(auVar27,auVar32,auVar11);
      auVar11 = vblendvps_avx(auVar33,auVar11,auVar15);
      auVar54._0_4_ = auVar11._0_4_ * fVar26;
      auVar54._4_4_ = auVar11._4_4_ * fVar26;
      auVar54._8_4_ = auVar11._8_4_ * fVar26;
      auVar54._12_4_ = auVar11._12_4_ * fVar26;
      auVar36._16_4_ = auVar11._16_4_ * fVar26;
      auVar36._0_16_ = auVar54;
      auVar36._20_4_ = auVar11._20_4_ * fVar26;
      auVar36._24_4_ = auVar11._24_4_ * fVar26;
      auVar36._28_4_ = auVar11._28_4_ * fVar26;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar6) = auVar36._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar6) = auVar54;
      uVar3 = uVar3 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar3 < uVar2);
  }
  uVar2 = (uint)uVar3;
  if ((int)param_3 <= (int)uVar2) {
    return;
  }
LAB_140a26d79:
  auVar49 = vpshufd_avx(ZEXT416(uVar2),0);
  auVar7._16_16_ = auVar49;
  auVar7._0_16_ = auVar49;
  auVar54 = vpshufd_avx(ZEXT416(param_3),0);
  auVar49 = vpcmpgtd_avx(auVar54,SUB3216(auVar7 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0x10));
  auVar54 = vpcmpgtd_avx(auVar54,SUB3216(auVar7 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar8._16_16_ = auVar49;
  auVar8._0_16_ = auVar54;
  auVar11 = vmaskmovps_avx(auVar8,*(undefined1 (*) [32])(param_1 + (int)(uVar2 << 2)));
  auVar49 = vshufps_avx(auVar31,auVar31,0);
  auVar16._16_16_ = auVar49;
  auVar16._0_16_ = auVar49;
  auVar11 = vmaxps_avx(auVar11,auVar16);
  auVar28 = vcmpps_avx(auVar11,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  auVar33 = vcmpps_avx(auVar11,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
  auVar17._4_4_ = __real_3f800000;
  auVar17._0_4_ = __real_3f800000;
  auVar17._8_4_ = __real_3f800000;
  auVar17._12_4_ = __real_3f800000;
  auVar17._16_4_ = __real_3f800000;
  auVar17._20_4_ = __real_3f800000;
  auVar17._24_4_ = __real_3f800000;
  auVar17._28_4_ = __real_3f800000;
  auVar11 = vblendvps_avx(auVar11,auVar17,auVar33);
  auVar49 = vpsrad_avx(auVar11._0_16_,0x17);
  auVar20._0_4_ =
       auVar11._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
  auVar20._4_4_ = auVar11._4_4_ & _UNK_150d5a944;
  auVar20._8_4_ = auVar11._8_4_ & _UNK_150d5a948;
  auVar20._12_4_ = auVar11._12_4_ & _UNK_150d5a94c;
  auVar20._16_4_ = auVar11._16_4_ & _UNK_150d5a950;
  auVar20._20_4_ = auVar11._20_4_ & _UNK_150d5a954;
  auVar20._24_4_ = auVar11._24_4_ & _UNK_150d5a958;
  auVar20._28_4_ = auVar11._28_4_ & _UNK_150d5a95c;
  auVar15 = vsubps_avx(auVar17,auVar20 | 
                               ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                      );
  auVar34._4_4_ = __real_7fc00000;
  auVar34._0_4_ = __real_7fc00000;
  auVar34._8_4_ = __real_7fc00000;
  auVar34._12_4_ = __real_7fc00000;
  auVar34._16_4_ = __real_7fc00000;
  auVar34._20_4_ = __real_7fc00000;
  auVar34._24_4_ = __real_7fc00000;
  auVar34._28_4_ = __real_7fc00000;
  auVar15 = vblendvps_avx(auVar34,auVar15,auVar8);
  fVar19 = auVar15._0_4_;
  fVar22 = auVar15._4_4_;
  fVar23 = auVar15._8_4_;
  fVar24 = auVar15._12_4_;
  fVar25 = auVar15._16_4_;
  fVar26 = auVar15._20_4_;
  fVar9 = auVar15._24_4_;
  fVar13 = auVar15._28_4_;
  auVar31 = vpsrad_avx(auVar11._16_16_,0x17);
  auVar29._20_4_ = __real_ffffff82 + auVar31._4_4_;
  auVar29._16_4_ = __real_ffffff82 + auVar31._0_4_;
  auVar29._24_4_ = __real_ffffff82 + auVar31._8_4_;
  auVar29._28_4_ = __real_ffffff82 + auVar31._12_4_;
  auVar29._4_4_ = __real_ffffff82 + auVar49._4_4_;
  auVar29._0_4_ = __real_ffffff82 + auVar49._0_4_;
  auVar29._8_4_ = __real_ffffff82 + auVar49._8_4_;
  auVar29._12_4_ = __real_ffffff82 + auVar49._12_4_;
  auVar11 = vcvtdq2ps_avx(auVar29);
  auVar30._0_4_ =
       auVar11._0_4_ * ___ymm_3f3172183f3172183f3172183f3172183f3172183f3172183f3172183f317218;
  auVar30._4_4_ = auVar11._4_4_ * _UNK_150d5aa84;
  auVar30._8_4_ = auVar11._8_4_ * _UNK_150d5aa88;
  auVar30._12_4_ = auVar11._12_4_ * _UNK_150d5aa8c;
  auVar30._16_4_ = auVar11._16_4_ * _UNK_150d5aa90;
  auVar30._20_4_ = auVar11._20_4_ * _UNK_150d5aa94;
  auVar30._24_4_ = auVar11._24_4_ * _UNK_150d5aa98;
  auVar30._28_4_ = auVar11._28_4_ * _UNK_150d5aa9c;
  auVar18._0_4_ =
       fVar19 * (fVar19 * (fVar19 * (fVar19 * ((((((fVar19 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) * fVar19 +
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) * fVar19 +
                                                 ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                 ) * fVar19 +
                                                ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                ) * fVar19 +
                                               ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                               ) * fVar19 +
                                              ___ymm_3e80fb873e80fb873e80fb873e80fb873e80fb873e80fb873e80fb873e80fb87
                                              ) +
                                    ___ymm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c
                                    ) +
                          ___ymm_3f0000103f0000103f0000103f0000103f0000103f0000103f0000103f000010) +
                __real_3f800000);
  auVar18._4_4_ =
       fVar22 * (fVar22 * (fVar22 * (fVar22 * ((((((fVar22 * _UNK_150d5a964 + _UNK_150d5a984) *
                                                   fVar22 + _UNK_150d5a9a4) * fVar22 +
                                                 _UNK_150d5a9c4) * fVar22 + _UNK_150d5a9e4) * fVar22
                                               + _UNK_150d5aa04) * fVar22 + _UNK_150d5aa24) +
                                    _UNK_150d5aa44) + _UNK_150d5aa64) + __real_3f800000);
  auVar18._8_4_ =
       fVar23 * (fVar23 * (fVar23 * (fVar23 * ((((((fVar23 * _UNK_150d5a968 + _UNK_150d5a988) *
                                                   fVar23 + _UNK_150d5a9a8) * fVar23 +
                                                 _UNK_150d5a9c8) * fVar23 + _UNK_150d5a9e8) * fVar23
                                               + _UNK_150d5aa08) * fVar23 + _UNK_150d5aa28) +
                                    _UNK_150d5aa48) + _UNK_150d5aa68) + __real_3f800000);
  auVar18._12_4_ =
       fVar24 * (fVar24 * (fVar24 * (fVar24 * ((((((fVar24 * _UNK_150d5a96c + _UNK_150d5a98c) *
                                                   fVar24 + _UNK_150d5a9ac) * fVar24 +
                                                 _UNK_150d5a9cc) * fVar24 + _UNK_150d5a9ec) * fVar24
                                               + _UNK_150d5aa0c) * fVar24 + _UNK_150d5aa2c) +
                                    _UNK_150d5aa4c) + _UNK_150d5aa6c) + __real_3f800000);
  auVar18._16_4_ =
       fVar25 * (fVar25 * (fVar25 * (fVar25 * ((((((fVar25 * _UNK_150d5a970 + _UNK_150d5a990) *
                                                   fVar25 + _UNK_150d5a9b0) * fVar25 +
                                                 _UNK_150d5a9d0) * fVar25 + _UNK_150d5a9f0) * fVar25
                                               + _UNK_150d5aa10) * fVar25 + _UNK_150d5aa30) +
                                    _UNK_150d5aa50) + _UNK_150d5aa70) + __real_3f800000);
  auVar18._20_4_ =
       fVar26 * (fVar26 * (fVar26 * (fVar26 * ((((((fVar26 * _UNK_150d5a974 + _UNK_150d5a994) *
                                                   fVar26 + _UNK_150d5a9b4) * fVar26 +
                                                 _UNK_150d5a9d4) * fVar26 + _UNK_150d5a9f4) * fVar26
                                               + _UNK_150d5aa14) * fVar26 + _UNK_150d5aa34) +
                                    _UNK_150d5aa54) + _UNK_150d5aa74) + __real_3f800000);
  auVar18._24_4_ =
       fVar9 * (fVar9 * (fVar9 * (fVar9 * ((((((fVar9 * _UNK_150d5a978 + _UNK_150d5a998) * fVar9 +
                                              _UNK_150d5a9b8) * fVar9 + _UNK_150d5a9d8) * fVar9 +
                                            _UNK_150d5a9f8) * fVar9 + _UNK_150d5aa18) * fVar9 +
                                          _UNK_150d5aa38) + _UNK_150d5aa58) + _UNK_150d5aa78) +
               __real_3f800000);
  auVar18._28_4_ =
       fVar13 * (fVar13 * (fVar13 * (fVar13 * ((((((fVar13 * _UNK_150d5a97c + _UNK_150d5a99c) *
                                                   fVar13 + _UNK_150d5a9bc) * fVar13 +
                                                 _UNK_150d5a9dc) * fVar13 + _UNK_150d5a9fc) * fVar13
                                               + _UNK_150d5aa1c) * fVar13 + _UNK_150d5aa3c) +
                                    _UNK_150d5aa5c) + _UNK_150d5aa7c) + __real_3f800000);
  auVar15 = vsubps_avx(auVar30,auVar18);
  auVar21._4_4_ = __real_ff800000;
  auVar21._0_4_ = __real_ff800000;
  auVar21._8_4_ = __real_ff800000;
  auVar21._12_4_ = __real_ff800000;
  auVar21._16_4_ = __real_ff800000;
  auVar21._20_4_ = __real_ff800000;
  auVar21._24_4_ = __real_ff800000;
  auVar21._28_4_ = __real_ff800000;
  auVar11 = vblendvps_avx(auVar21,auVar34,auVar28);
  auVar11 = vblendvps_avx(auVar15,auVar11,auVar33);
  auVar12._0_4_ =
       auVar11._0_4_ * ___ymm_408af967408af967408af967408af967408af967408af967408af967408af967;
  auVar12._4_4_ = auVar11._4_4_ * _UNK_150d5aae4;
  auVar12._8_4_ = auVar11._8_4_ * _UNK_150d5aae8;
  auVar12._12_4_ = auVar11._12_4_ * _UNK_150d5aaec;
  auVar12._16_4_ = auVar11._16_4_ * _UNK_150d5aaf0;
  auVar12._20_4_ = auVar11._20_4_ * _UNK_150d5aaf4;
  auVar12._24_4_ = auVar11._24_4_ * _UNK_150d5aaf8;
  auVar12._28_4_ = auVar11._28_4_ * _UNK_150d5aafc;
  auVar11 = vmaskmovps_avx(auVar8,auVar12);
  *(undefined1 (*) [32])(param_1 + (int)(uVar2 << 2)) = auVar11;
  return;
}

// ArrayComplexToPowerInterleaved___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a26f30

void ArrayComplexToPowerInterleaved___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [16])

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [32];
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar15 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  
  auVar12 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  auVar11 = vpcmpgtd_avx(param_4[1],auVar12);
  auVar12 = vpcmpgtd_avx(*param_4,auVar12);
  auVar12 = vpor_avx(auVar12,auVar11);
  uVar6 = param_3 & 0xfffffff8;
  if ((((SUB161(auVar12 >> 0x1f,0) & 1) == 0 && (SUB161(auVar12 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar12 >> 0x5f,0) & 1) == 0) && -1 < auVar12[0xf]) {
    if (0 < (int)uVar6) {
      uVar9 = 0;
      uVar10 = 0;
      do {
        auVar18._16_16_ = *(undefined1 (*) [16])(param_1 + 0x30 + uVar9 * 2);
        auVar18._0_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar9 * 2);
        auVar15._16_16_ = *(undefined1 (*) [16])(param_1 + 0x20 + uVar9 * 2);
        auVar15._0_16_ = *(undefined1 (*) [16])(param_1 + uVar9 * 2);
        auVar3 = vshufps_avx(auVar15,auVar18,0x88);
        auVar15 = vshufps_avx(auVar15,auVar18,0xdd);
        auVar12._0_4_ = auVar3._0_4_ * auVar3._0_4_ + auVar15._0_4_ * auVar15._0_4_;
        auVar12._4_4_ = auVar3._4_4_ * auVar3._4_4_ + auVar15._4_4_ * auVar15._4_4_;
        auVar12._8_4_ = auVar3._8_4_ * auVar3._8_4_ + auVar15._8_4_ * auVar15._8_4_;
        auVar12._12_4_ = auVar3._12_4_ * auVar3._12_4_ + auVar15._12_4_ * auVar15._12_4_;
        auVar16._16_4_ = auVar3._16_4_ * auVar3._16_4_ + auVar15._16_4_ * auVar15._16_4_;
        auVar16._0_16_ = auVar12;
        auVar16._20_4_ = auVar3._20_4_ * auVar3._20_4_ + auVar15._20_4_ * auVar15._20_4_;
        auVar16._24_4_ = auVar3._24_4_ * auVar3._24_4_ + auVar15._24_4_ * auVar15._24_4_;
        auVar16._28_4_ = auVar3._28_4_ * auVar3._28_4_ + auVar15._28_4_ * auVar15._28_4_;
        *(undefined1 (*) [16])(param_2 + 0x10 + (uVar9 & 0xffffffff)) = auVar16._16_16_;
        *(undefined1 (*) [16])(param_2 + (uVar9 & 0xffffffff)) = auVar12;
        uVar10 = uVar10 + 8;
        uVar9 = uVar9 + 0x20;
      } while (uVar10 < uVar6);
    }
    if ((int)uVar6 < (int)param_3) {
      uVar9 = (ulonglong)(int)uVar6;
      if ((param_3 & 1) != 0) {
        fVar1 = *(float *)(param_1 + (longlong)(int)(uVar6 * 2) * 4);
        fVar2 = *(float *)(param_1 + (longlong)(int)(uVar6 * 2 + 1) * 4);
        *(float *)(param_2 + uVar9 * 4) = fVar1 * fVar1 + fVar2 * fVar2;
        uVar9 = uVar9 | 1;
      }
      if (uVar6 != param_3 - 1) {
        lVar7 = (longlong)(int)param_3 - uVar9;
        param_2 = param_2 + uVar9 * 4;
        iVar5 = (int)uVar9 * 2;
        lVar8 = 0;
        do {
          iVar4 = (int)lVar8;
          fVar1 = *(float *)(param_1 + (longlong)(iVar5 + iVar4) * 4);
          fVar2 = *(float *)(param_1 + (longlong)(iVar5 + iVar4 + 1) * 4);
          *(float *)(param_2 + lVar8 * 2) = fVar1 * fVar1 + fVar2 * fVar2;
          fVar1 = *(float *)(param_1 + (longlong)(iVar5 + 2 + iVar4) * 4);
          fVar2 = *(float *)(param_1 + (longlong)(iVar5 + 3 + iVar4) * 4);
          *(float *)(param_2 + 4 + lVar8 * 2) = fVar1 * fVar1 + fVar2 * fVar2;
          lVar8 = lVar8 + 4;
          lVar7 = lVar7 + -2;
        } while (lVar7 != 0);
      }
    }
  }
  else {
    if (0 < (int)uVar6) {
      uVar9 = 0;
      uVar10 = 0;
      do {
        auVar17._16_16_ = *(undefined1 (*) [16])(param_1 + 0x30 + uVar9 * 2);
        auVar17._0_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar9 * 2);
        auVar13._16_16_ = *(undefined1 (*) [16])(param_1 + 0x20 + uVar9 * 2);
        auVar13._0_16_ = *(undefined1 (*) [16])(param_1 + uVar9 * 2);
        auVar3 = vshufps_avx(auVar13,auVar17,0x88);
        auVar15 = vshufps_avx(auVar13,auVar17,0xdd);
        auVar11._0_4_ = auVar3._0_4_ * auVar3._0_4_ + auVar15._0_4_ * auVar15._0_4_;
        auVar11._4_4_ = auVar3._4_4_ * auVar3._4_4_ + auVar15._4_4_ * auVar15._4_4_;
        auVar11._8_4_ = auVar3._8_4_ * auVar3._8_4_ + auVar15._8_4_ * auVar15._8_4_;
        auVar11._12_4_ = auVar3._12_4_ * auVar3._12_4_ + auVar15._12_4_ * auVar15._12_4_;
        auVar14._16_4_ = auVar3._16_4_ * auVar3._16_4_ + auVar15._16_4_ * auVar15._16_4_;
        auVar14._0_16_ = auVar11;
        auVar14._20_4_ = auVar3._20_4_ * auVar3._20_4_ + auVar15._20_4_ * auVar15._20_4_;
        auVar14._24_4_ = auVar3._24_4_ * auVar3._24_4_ + auVar15._24_4_ * auVar15._24_4_;
        auVar14._28_4_ = auVar3._28_4_ * auVar3._28_4_ + auVar15._28_4_ * auVar15._28_4_;
        *(undefined1 (*) [16])(param_2 + 0x10 + (uVar9 & 0xffffffff)) = auVar14._16_16_;
        *(undefined1 (*) [16])(param_2 + (uVar9 & 0xffffffff)) = auVar11;
        uVar10 = uVar10 + 8;
        uVar9 = uVar9 + 0x20;
      } while (uVar10 < uVar6);
    }
    if ((int)uVar6 < (int)param_3) {
      uVar9 = (ulonglong)(int)uVar6;
      if ((param_3 & 1) != 0) {
        fVar1 = *(float *)(param_1 + (longlong)(int)(uVar6 * 2) * 4);
        fVar2 = *(float *)(param_1 + (longlong)(int)(uVar6 * 2 + 1) * 4);
        *(float *)(param_2 + uVar9 * 4) = fVar1 * fVar1 + fVar2 * fVar2;
        uVar9 = uVar9 | 1;
      }
      if (uVar6 != param_3 - 1) {
        lVar7 = (longlong)(int)param_3 - uVar9;
        param_2 = param_2 + uVar9 * 4;
        iVar5 = (int)uVar9 * 2;
        lVar8 = 0;
        do {
          iVar4 = (int)lVar8;
          fVar1 = *(float *)(param_1 + (longlong)(iVar5 + iVar4) * 4);
          fVar2 = *(float *)(param_1 + (longlong)(iVar5 + iVar4 + 1) * 4);
          *(float *)(param_2 + lVar8 * 2) = fVar1 * fVar1 + fVar2 * fVar2;
          fVar1 = *(float *)(param_1 + (longlong)(iVar5 + 2 + iVar4) * 4);
          fVar2 = *(float *)(param_1 + (longlong)(iVar5 + 3 + iVar4) * 4);
          *(float *)(param_2 + 4 + lVar8 * 2) = fVar1 * fVar1 + fVar2 * fVar2;
          lVar8 = lVar8 + 4;
          lVar7 = lVar7 + -2;
        } while (lVar7 != 0);
      }
    }
  }
  return;
}

// ArrayComplexToPower___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a271e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPower___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_2 + uVar9);
      pfVar4 = (float *)(param_2 + 0x10 + uVar9);
      auVar11._0_4_ = *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2;
      auVar11._4_4_ = pfVar1[1] * pfVar1[1] + pfVar2[1] * pfVar2[1];
      auVar11._8_4_ = pfVar1[2] * pfVar1[2] + pfVar2[2] * pfVar2[2];
      auVar11._12_4_ = pfVar1[3] * pfVar1[3] + pfVar2[3] * pfVar2[3];
      auVar12._16_4_ = *pfVar3 * *pfVar3 + *pfVar4 * *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] * pfVar3[1] + pfVar4[1] * pfVar4[1];
      auVar12._24_4_ = pfVar3[2] * pfVar3[2] + pfVar4[2] * pfVar4[2];
      auVar12._28_4_ = pfVar3[3] * pfVar3[3] + pfVar4[3] * pfVar4[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar9) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar9) = auVar11;
      uVar7 = uVar7 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_4),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ * auVar12._0_4_ + auVar13._0_4_ * auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ * auVar12._4_4_ + auVar13._4_4_ * auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ * auVar12._8_4_ + auVar13._8_4_ * auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ * auVar12._12_4_ + auVar13._12_4_ * auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ * auVar12._16_4_ + auVar13._16_4_ * auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ * auVar12._20_4_ + auVar13._20_4_ * auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ * auVar12._24_4_ + auVar13._24_4_ * auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ * auVar12._28_4_ + auVar13._28_4_ * auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_3 + lVar8) = auVar12;
  return;
}

// ArrayWeightedSumTwoGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_Cunfun_3C_unf_3E_Cuni_avx @ 140a27540

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumTwoGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_Cunfun_3C_unf_3E_Cuni_avx
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5,uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar16 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  
  uVar9 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar9 = param_6;
  }
  auVar14 = in_ZMM1._0_16_;
  auVar16 = in_ZMM3._0_16_;
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    auVar5 = vshufps_avx(auVar14,auVar14,0);
    auVar6 = vshufps_avx(auVar16,auVar16,0);
    uVar11 = 0;
    uVar10 = 0;
    do {
      uVar8 = (ulonglong)uVar11;
      pfVar1 = (float *)(param_1 + uVar8);
      pfVar3 = (float *)(param_1 + 0x10 + uVar8);
      pfVar2 = (float *)(param_3 + uVar8);
      pfVar4 = (float *)(param_3 + 0x10 + uVar8);
      auVar17._0_4_ = auVar5._0_4_ * *pfVar1 + auVar6._0_4_ * *pfVar2;
      auVar17._4_4_ = auVar5._4_4_ * pfVar1[1] + auVar6._4_4_ * pfVar2[1];
      auVar17._8_4_ = auVar5._8_4_ * pfVar1[2] + auVar6._8_4_ * pfVar2[2];
      auVar17._12_4_ = auVar5._12_4_ * pfVar1[3] + auVar6._12_4_ * pfVar2[3];
      auVar18._16_4_ = auVar5._0_4_ * *pfVar3 + auVar6._0_4_ * *pfVar4;
      auVar18._0_16_ = auVar17;
      auVar18._20_4_ = auVar5._4_4_ * pfVar3[1] + auVar6._4_4_ * pfVar4[1];
      auVar18._24_4_ = auVar5._8_4_ * pfVar3[2] + auVar6._8_4_ * pfVar4[2];
      auVar18._28_4_ = auVar5._12_4_ * pfVar3[3] + auVar6._12_4_ * pfVar4[3];
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar8) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar8) = auVar17;
      uVar10 = uVar10 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar10 < (uVar9 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar10) {
      return;
    }
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar12._16_16_ = auVar5;
  auVar12._0_16_ = auVar5;
  auVar6 = vpshufd_avx(ZEXT416(param_6),0);
  auVar5 = vpcmpgtd_avx(auVar6,SUB3216(auVar12 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar6 = vpcmpgtd_avx(auVar6,SUB3216(auVar12 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar13._16_16_ = auVar5;
  auVar13._0_16_ = auVar6;
  lVar7 = (longlong)(int)((uint)uVar10 << 2);
  auVar18 = vmaskmovps_avx(auVar13,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar14 = vshufps_avx(auVar14,auVar14,0);
  auVar12 = vmaskmovps_avx(auVar13,*(undefined1 (*) [32])(param_3 + lVar7));
  auVar16 = vshufps_avx(auVar16,auVar16,0);
  auVar15._0_4_ = auVar14._0_4_ * auVar18._0_4_ + auVar16._0_4_ * auVar12._0_4_;
  auVar15._4_4_ = auVar14._4_4_ * auVar18._4_4_ + auVar16._4_4_ * auVar12._4_4_;
  auVar15._8_4_ = auVar14._8_4_ * auVar18._8_4_ + auVar16._8_4_ * auVar12._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * auVar18._12_4_ + auVar16._12_4_ * auVar12._12_4_;
  auVar15._16_4_ = auVar14._0_4_ * auVar18._16_4_ + auVar16._0_4_ * auVar12._16_4_;
  auVar15._20_4_ = auVar14._4_4_ * auVar18._20_4_ + auVar16._4_4_ * auVar12._20_4_;
  auVar15._24_4_ = auVar14._8_4_ * auVar18._24_4_ + auVar16._8_4_ * auVar12._24_4_;
  auVar15._28_4_ = auVar14._12_4_ * auVar18._28_4_ + auVar16._12_4_ * auVar12._28_4_;
  auVar18 = vmaskmovps_avx(auVar13,auVar15);
  *(undefined1 (*) [32])(param_5 + lVar7) = auVar18;
  return;
}

// ArrayWeightedSumOneGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx @ 140a27650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumOneGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_un_3C_unf_3E_Cuni_avx
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
  uVar7 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar7 = param_5;
  }
  auVar13 = in_ZMM1._0_16_;
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar8 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar5 = vshufps_avx(auVar13,auVar13,0);
    uVar10 = 0;
    uVar8 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_3 + uVar9);
      pfVar4 = (float *)(param_3 + 0x10 + uVar9);
      auVar15._0_4_ = auVar5._0_4_ * *pfVar1 + *pfVar2;
      auVar15._4_4_ = auVar5._4_4_ * pfVar1[1] + pfVar2[1];
      auVar15._8_4_ = auVar5._8_4_ * pfVar1[2] + pfVar2[2];
      auVar15._12_4_ = auVar5._12_4_ * pfVar1[3] + pfVar2[3];
      auVar16._16_4_ = auVar5._0_4_ * *pfVar3 + *pfVar4;
      auVar16._0_16_ = auVar15;
      auVar16._20_4_ = auVar5._4_4_ * pfVar3[1] + pfVar4[1];
      auVar16._24_4_ = auVar5._8_4_ * pfVar3[2] + pfVar4[2];
      auVar16._28_4_ = auVar5._12_4_ * pfVar3[3] + pfVar4[3];
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar9) = auVar16._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar9) = auVar15;
      uVar8 = uVar8 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar8 < (uVar7 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar8) {
      return;
    }
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar8),0);
  auVar11._16_16_ = auVar5;
  auVar11._0_16_ = auVar5;
  auVar15 = vpshufd_avx(ZEXT416(param_5),0);
  auVar5 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar15 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar12._16_16_ = auVar5;
  auVar12._0_16_ = auVar15;
  lVar6 = (longlong)(int)((uint)uVar8 << 2);
  auVar16 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar13 = vshufps_avx(auVar13,auVar13,0);
  auVar11 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_3 + lVar6));
  auVar14._0_4_ = auVar13._0_4_ * auVar16._0_4_ + auVar11._0_4_;
  auVar14._4_4_ = auVar13._4_4_ * auVar16._4_4_ + auVar11._4_4_;
  auVar14._8_4_ = auVar13._8_4_ * auVar16._8_4_ + auVar11._8_4_;
  auVar14._12_4_ = auVar13._12_4_ * auVar16._12_4_ + auVar11._12_4_;
  auVar14._16_4_ = auVar13._0_4_ * auVar16._16_4_ + auVar11._16_4_;
  auVar14._20_4_ = auVar13._4_4_ * auVar16._20_4_ + auVar11._20_4_;
  auVar14._24_4_ = auVar13._8_4_ * auVar16._24_4_ + auVar11._24_4_;
  auVar14._28_4_ = auVar13._12_4_ * auVar16._28_4_ + auVar11._28_4_;
  auVar16 = vmaskmovps_avx(auVar12,auVar14);
  *(undefined1 (*) [32])(param_4 + lVar6) = auVar16;
  return;
}

// ArrayFade___un_3C_unf_3E_CuniCunfCunf_avx @ 140a27740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade___un_3C_unf_3E_CuniCunfCunf_avx
               (longlong param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 in_register_00001284 [12];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  auVar14 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar12 = ZEXT416((uint)((param_4 - param_3) / (float)(int)param_2));
  uVar7 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar7 = param_2;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar8 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar4 = vshufps_avx(auVar12,auVar12,0);
    auVar5._4_12_ = in_register_00001284;
    auVar5._0_4_ = param_3;
    auVar3._4_12_ = in_register_00001284;
    auVar3._0_4_ = param_3;
    auVar5 = vshufps_avx(auVar5,auVar3,0);
    uVar10 = 0;
    uVar8 = 0;
    do {
      auVar3 = vpshufd_avx(ZEXT416((uint)uVar8),0);
      auVar17._16_16_ = auVar3;
      auVar17._0_16_ = auVar3;
      auVar17 = vcvtdq2ps_avx(auVar17 | auVar14);
      uVar11 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar11);
      pfVar2 = (float *)(param_1 + 0x10 + uVar11);
      auVar16._0_4_ = (auVar5._0_4_ + auVar4._0_4_ * auVar17._0_4_) * *pfVar1;
      auVar16._4_4_ = (auVar5._4_4_ + auVar4._4_4_ * auVar17._4_4_) * pfVar1[1];
      auVar16._8_4_ = (auVar5._8_4_ + auVar4._8_4_ * auVar17._8_4_) * pfVar1[2];
      auVar16._12_4_ = (auVar5._12_4_ + auVar4._12_4_ * auVar17._12_4_) * pfVar1[3];
      auVar18._16_4_ = (auVar5._0_4_ + auVar4._0_4_ * auVar17._16_4_) * *pfVar2;
      auVar18._0_16_ = auVar16;
      auVar18._20_4_ = (auVar5._4_4_ + auVar4._4_4_ * auVar17._20_4_) * pfVar2[1];
      auVar18._24_4_ = (auVar5._8_4_ + auVar4._8_4_ * auVar17._24_4_) * pfVar2[2];
      auVar18._28_4_ = (auVar5._12_4_ + auVar4._12_4_ * auVar17._28_4_) * pfVar2[3];
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar11) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar11) = auVar16;
      uVar8 = uVar8 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar8 < (uVar7 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar8) {
      return;
    }
  }
  auVar4 = vpshufd_avx(ZEXT416((uint)uVar8),0);
  auVar14._16_16_ = auVar4;
  auVar14._0_16_ = auVar4;
  auVar14 = auVar14 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar5 = vpshufd_avx(ZEXT416(param_2),0);
  auVar4 = vpcmpgtd_avx(auVar5,auVar14._16_16_);
  auVar5 = vpcmpgtd_avx(auVar5,auVar14._0_16_);
  auVar15._16_16_ = auVar4;
  auVar15._0_16_ = auVar5;
  auVar14 = vcvtdq2ps_avx(auVar14);
  auVar12 = vshufps_avx(auVar12,auVar12,0);
  auVar4._4_12_ = in_register_00001284;
  auVar4._0_4_ = param_3;
  auVar6._4_12_ = in_register_00001284;
  auVar6._0_4_ = param_3;
  auVar4 = vshufps_avx(auVar4,auVar6,0);
  lVar9 = (longlong)(int)((uint)uVar8 << 2);
  auVar17 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + lVar9));
  auVar13._0_4_ = (auVar4._0_4_ + auVar12._0_4_ * auVar14._0_4_) * auVar17._0_4_;
  auVar13._4_4_ = (auVar4._4_4_ + auVar12._4_4_ * auVar14._4_4_) * auVar17._4_4_;
  auVar13._8_4_ = (auVar4._8_4_ + auVar12._8_4_ * auVar14._8_4_) * auVar17._8_4_;
  auVar13._12_4_ = (auVar4._12_4_ + auVar12._12_4_ * auVar14._12_4_) * auVar17._12_4_;
  auVar13._16_4_ = (auVar4._0_4_ + auVar12._0_4_ * auVar14._16_4_) * auVar17._16_4_;
  auVar13._20_4_ = (auVar4._4_4_ + auVar12._4_4_ * auVar14._20_4_) * auVar17._20_4_;
  auVar13._24_4_ = (auVar4._8_4_ + auVar12._8_4_ * auVar14._24_4_) * auVar17._24_4_;
  auVar13._28_4_ = (auVar4._12_4_ + auVar12._12_4_ * auVar14._28_4_) * auVar17._28_4_;
  auVar14 = vmaskmovps_avx(auVar15,auVar13);
  *(undefined1 (*) [32])(param_1 + lVar9) = auVar14;
  return;
}

// ArrayFade2___un_3C_Cunf_3E_CuniCunfCunfun_3C_unf_3E__avx @ 140a27870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade2___un_3C_Cunf_3E_CuniCunfCunfun_3C_unf_3E__avx
               (longlong param_1,uint param_2,float param_3,float param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 in_register_00001284 [12];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  auVar14 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar12 = ZEXT416((uint)((param_4 - param_3) / (float)(int)param_2));
  uVar8 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar8 = param_2;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar4 = vshufps_avx(auVar12,auVar12,0);
    auVar5._4_12_ = in_register_00001284;
    auVar5._0_4_ = param_3;
    auVar3._4_12_ = in_register_00001284;
    auVar3._0_4_ = param_3;
    auVar5 = vshufps_avx(auVar5,auVar3,0);
    uVar10 = 0;
    uVar9 = 0;
    do {
      auVar3 = vpshufd_avx(ZEXT416((uint)uVar9),0);
      auVar17._16_16_ = auVar3;
      auVar17._0_16_ = auVar3;
      auVar17 = vcvtdq2ps_avx(auVar17 | auVar14);
      uVar11 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar11);
      pfVar2 = (float *)(param_1 + 0x10 + uVar11);
      auVar16._0_4_ = (auVar5._0_4_ + auVar4._0_4_ * auVar17._0_4_) * *pfVar1;
      auVar16._4_4_ = (auVar5._4_4_ + auVar4._4_4_ * auVar17._4_4_) * pfVar1[1];
      auVar16._8_4_ = (auVar5._8_4_ + auVar4._8_4_ * auVar17._8_4_) * pfVar1[2];
      auVar16._12_4_ = (auVar5._12_4_ + auVar4._12_4_ * auVar17._12_4_) * pfVar1[3];
      auVar18._16_4_ = (auVar5._0_4_ + auVar4._0_4_ * auVar17._16_4_) * *pfVar2;
      auVar18._0_16_ = auVar16;
      auVar18._20_4_ = (auVar5._4_4_ + auVar4._4_4_ * auVar17._20_4_) * pfVar2[1];
      auVar18._24_4_ = (auVar5._8_4_ + auVar4._8_4_ * auVar17._24_4_) * pfVar2[2];
      auVar18._28_4_ = (auVar5._12_4_ + auVar4._12_4_ * auVar17._28_4_) * pfVar2[3];
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar11) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar11) = auVar16;
      uVar9 = uVar9 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar9 < (uVar8 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar9) {
      return;
    }
  }
  auVar4 = vpshufd_avx(ZEXT416((uint)uVar9),0);
  auVar14._16_16_ = auVar4;
  auVar14._0_16_ = auVar4;
  auVar14 = auVar14 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar5 = vpshufd_avx(ZEXT416(param_2),0);
  auVar4 = vpcmpgtd_avx(auVar5,auVar14._16_16_);
  auVar5 = vpcmpgtd_avx(auVar5,auVar14._0_16_);
  auVar15._16_16_ = auVar4;
  auVar15._0_16_ = auVar5;
  auVar14 = vcvtdq2ps_avx(auVar14);
  auVar12 = vshufps_avx(auVar12,auVar12,0);
  auVar4._4_12_ = in_register_00001284;
  auVar4._0_4_ = param_3;
  auVar6._4_12_ = in_register_00001284;
  auVar6._0_4_ = param_3;
  auVar4 = vshufps_avx(auVar4,auVar6,0);
  lVar7 = (longlong)(int)((uint)uVar9 << 2);
  auVar17 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar13._0_4_ = (auVar4._0_4_ + auVar12._0_4_ * auVar14._0_4_) * auVar17._0_4_;
  auVar13._4_4_ = (auVar4._4_4_ + auVar12._4_4_ * auVar14._4_4_) * auVar17._4_4_;
  auVar13._8_4_ = (auVar4._8_4_ + auVar12._8_4_ * auVar14._8_4_) * auVar17._8_4_;
  auVar13._12_4_ = (auVar4._12_4_ + auVar12._12_4_ * auVar14._12_4_) * auVar17._12_4_;
  auVar13._16_4_ = (auVar4._0_4_ + auVar12._0_4_ * auVar14._16_4_) * auVar17._16_4_;
  auVar13._20_4_ = (auVar4._4_4_ + auVar12._4_4_ * auVar14._20_4_) * auVar17._20_4_;
  auVar13._24_4_ = (auVar4._8_4_ + auVar12._8_4_ * auVar14._24_4_) * auVar17._24_4_;
  auVar13._28_4_ = (auVar4._12_4_ + auVar12._12_4_ * auVar14._28_4_) * auVar17._28_4_;
  auVar14 = vmaskmovps_avx(auVar15,auVar13);
  *(undefined1 (*) [32])(param_5 + lVar7) = auVar14;
  return;
}

// ArrayMixInWithDelta___un_3C_Cunf_3E_un_3C_unf_3E_CuniCunfCunf_avx @ 140a27b80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithDelta___un_3C_Cunf_3E_un_3C_unf_3E_CuniCunfCunf_avx
               (longlong param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  
  auVar16 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar14 = ZEXT416((uint)((param_5 - param_4) / (float)(int)param_3));
  uVar9 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar9 = param_3;
  }
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar6 = vshufps_avx(auVar14,auVar14,0);
    auVar7._4_12_ = in_register_000012c4;
    auVar7._0_4_ = param_4;
    auVar5._4_12_ = in_register_000012c4;
    auVar5._0_4_ = param_4;
    auVar7 = vshufps_avx(auVar7,auVar5,0);
    uVar12 = 0;
    uVar10 = 0;
    do {
      auVar5 = vpshufd_avx(ZEXT416((uint)uVar10),0);
      auVar19._16_16_ = auVar5;
      auVar19._0_16_ = auVar5;
      auVar19 = vcvtdq2ps_avx(auVar19 | auVar16);
      uVar13 = (ulonglong)uVar12;
      pfVar1 = (float *)(param_1 + uVar13);
      pfVar3 = (float *)(param_1 + 0x10 + uVar13);
      pfVar2 = (float *)(param_2 + uVar13);
      pfVar4 = (float *)(param_2 + 0x10 + uVar13);
      auVar18._0_4_ = *pfVar2 + (auVar7._0_4_ + auVar6._0_4_ * auVar19._0_4_) * *pfVar1;
      auVar18._4_4_ = pfVar2[1] + (auVar7._4_4_ + auVar6._4_4_ * auVar19._4_4_) * pfVar1[1];
      auVar18._8_4_ = pfVar2[2] + (auVar7._8_4_ + auVar6._8_4_ * auVar19._8_4_) * pfVar1[2];
      auVar18._12_4_ = pfVar2[3] + (auVar7._12_4_ + auVar6._12_4_ * auVar19._12_4_) * pfVar1[3];
      auVar20._16_4_ = *pfVar4 + (auVar7._0_4_ + auVar6._0_4_ * auVar19._16_4_) * *pfVar3;
      auVar20._0_16_ = auVar18;
      auVar20._20_4_ = pfVar4[1] + (auVar7._4_4_ + auVar6._4_4_ * auVar19._20_4_) * pfVar3[1];
      auVar20._24_4_ = pfVar4[2] + (auVar7._8_4_ + auVar6._8_4_ * auVar19._24_4_) * pfVar3[2];
      auVar20._28_4_ = pfVar4[3] + (auVar7._12_4_ + auVar6._12_4_ * auVar19._28_4_) * pfVar3[3];
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar13) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar13) = auVar18;
      uVar10 = uVar10 + 8;
      uVar12 = uVar12 + 0x20;
    } while (uVar10 < (uVar9 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar10) {
      return;
    }
  }
  auVar6 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar16._16_16_ = auVar6;
  auVar16._0_16_ = auVar6;
  auVar16 = auVar16 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar7 = vpshufd_avx(ZEXT416(param_3),0);
  auVar6 = vpcmpgtd_avx(auVar7,auVar16._16_16_);
  auVar7 = vpcmpgtd_avx(auVar7,auVar16._0_16_);
  auVar17._16_16_ = auVar6;
  auVar17._0_16_ = auVar7;
  auVar16 = vcvtdq2ps_avx(auVar16);
  auVar14 = vshufps_avx(auVar14,auVar14,0);
  auVar6._4_12_ = in_register_000012c4;
  auVar6._0_4_ = param_4;
  auVar8._4_12_ = in_register_000012c4;
  auVar8._0_4_ = param_4;
  auVar6 = vshufps_avx(auVar6,auVar8,0);
  lVar11 = (longlong)(int)((uint)uVar10 << 2);
  auVar19 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_1 + lVar11));
  auVar20 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_2 + lVar11));
  auVar15._0_4_ = auVar20._0_4_ + (auVar6._0_4_ + auVar14._0_4_ * auVar16._0_4_) * auVar19._0_4_;
  auVar15._4_4_ = auVar20._4_4_ + (auVar6._4_4_ + auVar14._4_4_ * auVar16._4_4_) * auVar19._4_4_;
  auVar15._8_4_ = auVar20._8_4_ + (auVar6._8_4_ + auVar14._8_4_ * auVar16._8_4_) * auVar19._8_4_;
  auVar15._12_4_ =
       auVar20._12_4_ + (auVar6._12_4_ + auVar14._12_4_ * auVar16._12_4_) * auVar19._12_4_;
  auVar15._16_4_ = auVar20._16_4_ + (auVar6._0_4_ + auVar14._0_4_ * auVar16._16_4_) * auVar19._16_4_
  ;
  auVar15._20_4_ = auVar20._20_4_ + (auVar6._4_4_ + auVar14._4_4_ * auVar16._20_4_) * auVar19._20_4_
  ;
  auVar15._24_4_ = auVar20._24_4_ + (auVar6._8_4_ + auVar14._8_4_ * auVar16._24_4_) * auVar19._24_4_
  ;
  auVar15._28_4_ =
       auVar20._28_4_ + (auVar6._12_4_ + auVar14._12_4_ * auVar16._28_4_) * auVar19._28_4_;
  auVar16 = vmaskmovps_avx(auVar17,auVar15);
  *(undefined1 (*) [32])(param_2 + lVar11) = auVar16;
  return;
}

// TransformArrayRow___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_CuniCuni_avx @ 140a27ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformArrayRow___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_CuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
               undefined1 (*param_6) [32])

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar12 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  
  uVar9 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar9 = param_5;
  }
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar10 = 0;
    fVar11 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    auVar12 = *param_6;
    if ((int)param_5 < 1) goto LAB_140a27dad;
  }
  else {
    fVar11 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    uVar8 = 0;
    uVar10 = 0;
    do {
      uVar7 = (ulonglong)uVar8;
      pfVar1 = (float *)(param_1 + uVar7);
      pfVar3 = (float *)(param_1 + 0x10 + uVar7);
      pfVar2 = (float *)(param_2 + uVar7);
      pfVar4 = (float *)(param_2 + 0x10 + uVar7);
      fVar11 = fVar11 + *pfVar1 * *pfVar2;
      fVar13 = fVar13 + pfVar1[1] * pfVar2[1];
      fVar14 = fVar14 + pfVar1[2] * pfVar2[2];
      fVar15 = fVar15 + pfVar1[3] * pfVar2[3];
      fVar16 = fVar16 + *pfVar3 * *pfVar4;
      fVar17 = fVar17 + pfVar3[1] * pfVar4[1];
      fVar18 = fVar18 + pfVar3[2] * pfVar4[2];
      fVar19 = fVar19 + pfVar3[3] * pfVar4[3];
      uVar10 = uVar10 + 8;
      uVar8 = uVar8 + 0x20;
    } while (uVar10 < (uVar9 & 0xfffffff8));
    auVar12 = *param_6;
    if ((int)param_5 <= (int)uVar10) goto LAB_140a27dad;
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar20._16_16_ = auVar5;
  auVar20._0_16_ = auVar5;
  auVar22 = vpshufd_avx(ZEXT416(param_5),0);
  auVar5 = vpcmpgtd_avx(auVar22,SUB3216(auVar20 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar22 = vpcmpgtd_avx(auVar22,SUB3216(auVar20 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar21._16_16_ = auVar5;
  auVar21._0_16_ = auVar22;
  lVar6 = (longlong)(int)((uint)uVar10 << 2);
  auVar20 = vmaskmovps_avx(auVar21,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar24 = vmaskmovps_avx(auVar21,*(undefined1 (*) [32])(param_2 + lVar6));
  auVar23._0_4_ = auVar20._0_4_ * auVar24._0_4_;
  auVar23._4_4_ = auVar20._4_4_ * auVar24._4_4_;
  auVar23._8_4_ = auVar20._8_4_ * auVar24._8_4_;
  auVar23._12_4_ = auVar20._12_4_ * auVar24._12_4_;
  auVar23._16_4_ = auVar20._16_4_ * auVar24._16_4_;
  auVar23._20_4_ = auVar20._20_4_ * auVar24._20_4_;
  auVar23._24_4_ = auVar20._24_4_ * auVar24._24_4_;
  auVar23._28_4_ = auVar20._28_4_ * auVar24._28_4_;
  auVar24._4_4_ = __real_80000000;
  auVar24._0_4_ = __real_80000000;
  auVar24._8_4_ = __real_80000000;
  auVar24._12_4_ = __real_80000000;
  auVar24._16_4_ = __real_80000000;
  auVar24._20_4_ = __real_80000000;
  auVar24._24_4_ = __real_80000000;
  auVar24._28_4_ = __real_80000000;
  auVar20 = vblendvps_avx(auVar24,auVar23,auVar21);
  fVar11 = fVar11 + auVar20._0_4_;
  fVar13 = fVar13 + auVar20._4_4_;
  fVar14 = fVar14 + auVar20._8_4_;
  fVar15 = fVar15 + auVar20._12_4_;
  fVar16 = fVar16 + auVar20._16_4_;
  fVar17 = fVar17 + auVar20._20_4_;
  fVar18 = fVar18 + auVar20._24_4_;
  fVar19 = fVar19 + auVar20._28_4_;
LAB_140a27dad:
  auVar22._0_12_ = ZEXT812(0);
  auVar22._12_4_ = 0;
  auVar5 = vpcmpeqd_avx(auVar12._16_16_,auVar22);
  auVar22 = vpcmpeqd_avx(auVar12._0_16_,auVar22);
  auVar12._0_4_ = ~auVar22._0_4_ & (uint)fVar11;
  auVar12._4_4_ = ~auVar22._4_4_ & (uint)fVar13;
  auVar12._8_4_ = ~auVar22._8_4_ & (uint)fVar14;
  auVar12._12_4_ = ~auVar22._12_4_ & (uint)fVar15;
  auVar12._16_4_ = ~auVar5._0_4_ & (uint)fVar16;
  auVar12._20_4_ = ~auVar5._4_4_ & (uint)fVar17;
  auVar12._24_4_ = ~auVar5._8_4_ & (uint)fVar18;
  auVar12._28_4_ = ~auVar5._12_4_ & (uint)fVar19;
  auVar12 = vhaddps_avx(auVar12,auVar12);
  auVar12 = vhaddps_avx(auVar12,auVar12);
  *(float *)(param_3 + (longlong)param_4 * 4) =
       auVar12._0_4_ + auVar12._16_4_ + *(float *)(param_3 + (longlong)param_4 * 4);
  return;
}

// ArrayAPFLongDelayProcess___un_3C_Cunf_3E_un_3C_Cunf_3E_Cuniun_3C_unf_3E_un_3C_unf_3E_Cunf_avx @ 140a28180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAPFLongDelayProcess___un_3C_Cunf_3E_un_3C_Cunf_3E_Cuniun_3C_unf_3E_un_3C_unf_3E_Cunf_avx
               (longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
               uint param_6)

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
  float fVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  float fVar23;
  float fVar25;
  undefined1 auVar28 [32];
  undefined1 auVar31 [32];
  
  uVar14 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar14 = param_3;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar27 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    fVar18 = auVar27._0_4_;
    fVar21 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
    fVar23 = auVar27._4_4_;
    fVar22 = (float)((uint)fVar23 ^ _UNK_150651574);
    fVar25 = auVar27._8_4_;
    fVar16 = auVar27._12_4_;
    fVar24 = (float)((uint)fVar25 ^ _UNK_150651578);
    fVar26 = (float)((uint)fVar16 ^ _UNK_15065157c);
    uVar11 = 0;
    uVar15 = 0;
    do {
      uVar12 = (ulonglong)uVar11;
      pfVar1 = (float *)(param_2 + uVar12);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar1 = (float *)(param_2 + 0x10 + uVar12);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar1 = (float *)(param_1 + uVar12);
      pfVar2 = (float *)(param_1 + 0x10 + uVar12);
      auVar30._0_4_ = fVar18 * fVar3 + *pfVar1;
      auVar30._4_4_ = fVar23 * fVar4 + pfVar1[1];
      auVar30._8_4_ = fVar25 * fVar5 + pfVar1[2];
      auVar30._12_4_ = fVar16 * fVar6 + pfVar1[3];
      auVar31._16_4_ = fVar18 * fVar7 + *pfVar2;
      auVar31._0_16_ = auVar30;
      auVar31._20_4_ = fVar23 * fVar8 + pfVar2[1];
      auVar31._24_4_ = fVar25 * fVar9 + pfVar2[2];
      auVar31._28_4_ = fVar16 * fVar10 + pfVar2[3];
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar12) = auVar31._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar12) = auVar30;
      auVar27._0_4_ = fVar21 * auVar30._0_4_ + fVar3;
      auVar27._4_4_ = fVar22 * auVar30._4_4_ + fVar4;
      auVar27._8_4_ = fVar24 * auVar30._8_4_ + fVar5;
      auVar27._12_4_ = fVar26 * auVar30._12_4_ + fVar6;
      auVar28._16_4_ = fVar21 * auVar31._16_4_ + fVar7;
      auVar28._0_16_ = auVar27;
      auVar28._20_4_ = fVar22 * auVar31._20_4_ + fVar8;
      auVar28._24_4_ = fVar24 * auVar31._24_4_ + fVar9;
      auVar28._28_4_ = fVar26 * auVar31._28_4_ + fVar10;
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar12) = auVar28._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar12) = auVar27;
      uVar15 = uVar15 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar15 < (uVar14 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar15) {
      return;
    }
  }
  auVar27 = vpshufd_avx(ZEXT416((uint)uVar15),0);
  auVar19._16_16_ = auVar27;
  auVar19._0_16_ = auVar27;
  auVar30 = vpshufd_avx(ZEXT416(param_3),0);
  auVar27 = vpcmpgtd_avx(auVar30,SUB3216(auVar19 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0x10));
  auVar30 = vpcmpgtd_avx(auVar30,SUB3216(auVar19 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar20._16_16_ = auVar27;
  auVar20._0_16_ = auVar30;
  lVar13 = (longlong)(int)((uint)uVar15 << 2);
  auVar31 = vmaskmovps_avx(auVar20,*(undefined1 (*) [32])(param_2 + lVar13));
  auVar27 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar16 = auVar27._0_4_;
  fVar21 = auVar27._4_4_;
  fVar18 = auVar27._8_4_;
  fVar22 = auVar27._12_4_;
  auVar28 = vmaskmovps_avx(auVar20,*(undefined1 (*) [32])(param_1 + lVar13));
  auVar29._0_4_ = fVar16 * auVar31._0_4_ + auVar28._0_4_;
  auVar29._4_4_ = fVar21 * auVar31._4_4_ + auVar28._4_4_;
  auVar29._8_4_ = fVar18 * auVar31._8_4_ + auVar28._8_4_;
  auVar29._12_4_ = fVar22 * auVar31._12_4_ + auVar28._12_4_;
  auVar29._16_4_ = fVar16 * auVar31._16_4_ + auVar28._16_4_;
  auVar29._20_4_ = fVar21 * auVar31._20_4_ + auVar28._20_4_;
  auVar29._24_4_ = fVar18 * auVar31._24_4_ + auVar28._24_4_;
  auVar29._28_4_ = fVar22 * auVar31._28_4_ + auVar28._28_4_;
  auVar28 = vmaskmovps_avx(auVar20,auVar29);
  *(undefined1 (*) [32])(param_5 + lVar13) = auVar28;
  auVar28 = vmaskmovps_avx(auVar20,*(undefined1 (*) [32])(param_5 + lVar13));
  auVar17._0_4_ = fVar16 * auVar28._0_4_;
  auVar17._4_4_ = fVar21 * auVar28._4_4_;
  auVar17._8_4_ = fVar18 * auVar28._8_4_;
  auVar17._12_4_ = fVar22 * auVar28._12_4_;
  auVar17._16_4_ = fVar16 * auVar28._16_4_;
  auVar17._20_4_ = fVar21 * auVar28._20_4_;
  auVar17._24_4_ = fVar18 * auVar28._24_4_;
  auVar17._28_4_ = fVar22 * auVar28._28_4_;
  auVar28 = vsubps_avx(auVar31,auVar17);
  auVar28 = vmaskmovps_avx(auVar20,auVar28);
  *(undefined1 (*) [32])(param_4 + lVar13) = auVar28;
  return;
}

// ArrayLerpFractionalDelay___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cuni_3E_Cuniun_3C_unf_3E_Cunf_avx @ 140a282c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpFractionalDelay___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cuni_3E_Cuniun_3C_unf_3E_Cunf_avx
               (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               longlong param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  
  uVar6 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar6 = param_5;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar15 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar10._16_16_ = auVar15;
    auVar10._0_16_ = auVar15;
    uVar4 = 0;
    auVar14._4_4_ = __real_3f800000;
    auVar14._0_4_ = __real_3f800000;
    auVar14._8_4_ = __real_3f800000;
    auVar14._12_4_ = __real_3f800000;
    auVar14._16_4_ = __real_3f800000;
    auVar14._20_4_ = __real_3f800000;
    auVar14._24_4_ = __real_3f800000;
    auVar14._28_4_ = __real_3f800000;
    uVar7 = 0;
    do {
      uVar5 = (ulonglong)uVar4;
      auVar16._16_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar5);
      auVar16._0_16_ = *(undefined1 (*) [16])(param_2 + uVar5);
      auVar16 = vmaxps_avx(auVar16,ZEXT1232(ZEXT812(0)));
      auVar16 = vminps_avx(auVar16,auVar10);
      auVar8 = vroundps_avx(auVar16,9);
      auVar15._0_4_ = (int)auVar8._0_4_;
      auVar15._4_4_ = (int)auVar8._4_4_;
      auVar15._8_4_ = (int)auVar8._8_4_;
      auVar15._12_4_ = (int)auVar8._12_4_;
      auVar22._16_4_ = (int)auVar8._16_4_;
      auVar22._0_16_ = auVar15;
      auVar22._20_4_ = (int)auVar8._20_4_;
      auVar22._24_4_ = (int)auVar8._24_4_;
      auVar22._28_4_ = (int)auVar8._28_4_;
      auVar15 = vpsubd_avx(*(undefined1 (*) [16])(param_4 + uVar5),auVar15);
      auVar2 = vpsubd_avx(*(undefined1 (*) [16])(param_4 + 0x10 + uVar5),auVar22._16_16_);
      auVar19 = vpslld_avx(auVar15,2);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar19._0_4_)),
                              ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar19._4_4_)),0x10);
      auVar1 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + auVar19._0_4_)),
                             ZEXT416(*(uint *)(param_3 + auVar19._4_4_)),0x10);
      auVar21 = vpslld_avx(auVar2,2);
      auVar2 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar21._0_4_)),
                             ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar21._4_4_)),0x10);
      auVar20 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + auVar21._0_4_)),
                              ZEXT416(*(uint *)(param_3 + auVar21._4_4_)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar19._8_4_)),0x20
                             );
      auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)(param_3 + auVar19._8_4_)),0x20);
      auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar21._8_4_)),0x20);
      auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + auVar21._8_4_)),0x20);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar19._12_4_)),
                              0x30);
      auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)(param_3 + auVar19._12_4_)),0x30);
      auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar21._12_4_)),0x30)
      ;
      auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + auVar21._12_4_)),0x30);
      auVar16 = vsubps_avx(auVar16,auVar8);
      auVar8 = vsubps_avx(auVar14,auVar16);
      auVar19._0_4_ = auVar8._0_4_ * auVar15._0_4_ + auVar16._0_4_ * auVar1._0_4_;
      auVar19._4_4_ = auVar8._4_4_ * auVar15._4_4_ + auVar16._4_4_ * auVar1._4_4_;
      auVar19._8_4_ = auVar8._8_4_ * auVar15._8_4_ + auVar16._8_4_ * auVar1._8_4_;
      auVar19._12_4_ = auVar8._12_4_ * auVar15._12_4_ + auVar16._12_4_ * auVar1._12_4_;
      auVar17._16_4_ = auVar8._16_4_ * auVar2._0_4_ + auVar16._16_4_ * auVar20._0_4_;
      auVar17._0_16_ = auVar19;
      auVar17._20_4_ = auVar8._20_4_ * auVar2._4_4_ + auVar16._20_4_ * auVar20._4_4_;
      auVar17._24_4_ = auVar8._24_4_ * auVar2._8_4_ + auVar16._24_4_ * auVar20._8_4_;
      auVar17._28_4_ = auVar8._28_4_ * auVar2._12_4_ + auVar16._28_4_ * auVar20._12_4_;
      *(undefined1 (*) [16])(param_6 + 0x10 + uVar5) = auVar17._16_16_;
      *(undefined1 (*) [16])(param_6 + uVar5) = auVar19;
      uVar7 = uVar7 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar7) {
      return;
    }
  }
  auVar15 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar11._16_16_ = auVar15;
  auVar11._0_16_ = auVar15;
  auVar15 = vpshufd_avx(ZEXT416(param_5),0);
  auVar1 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar2 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0));
  auVar12._16_16_ = auVar1;
  auVar12._0_16_ = auVar2;
  lVar3 = (longlong)(int)((uint)uVar7 << 2);
  auVar10 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_2 + lVar3));
  auVar10 = vmaxps_avx(auVar10,ZEXT1232(ZEXT812(0)));
  auVar15 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
  auVar8._16_16_ = auVar15;
  auVar8._0_16_ = auVar15;
  auVar10 = vminps_avx(auVar10,auVar8);
  auVar14 = vroundps_avx(auVar10,9);
  auVar20._0_4_ = (int)auVar14._0_4_;
  auVar20._4_4_ = (int)auVar14._4_4_;
  auVar20._8_4_ = (int)auVar14._8_4_;
  auVar20._12_4_ = (int)auVar14._12_4_;
  auVar18._16_4_ = (int)auVar14._16_4_;
  auVar18._0_16_ = auVar20;
  auVar18._20_4_ = (int)auVar14._20_4_;
  auVar18._24_4_ = (int)auVar14._24_4_;
  auVar18._28_4_ = (int)auVar14._28_4_;
  auVar16 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_4 + lVar3));
  auVar15 = vpsubd_avx(auVar16._0_16_,auVar20);
  auVar20 = vpsubd_avx(auVar16._16_16_,auVar18._16_16_);
  auVar20 = vpslld_avx(auVar20,2);
  auVar15 = vpslld_avx(auVar15,2);
  auVar19 = vpand_avx(auVar2,auVar15);
  auVar20 = vpand_avx(auVar1,auVar20);
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(auVar1._0_4_ & _UNK_150b50d50) +
                                           param_3 + auVar20._0_4_)),
                          ZEXT416(*(uint *)((ulonglong)(auVar1._4_4_ & _UNK_150b50d54) +
                                           param_3 + auVar20._4_4_)),0x10);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(auVar1._8_4_ & _UNK_150b50d58) +
                                                   param_3 + auVar20._8_4_)),0x20);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(auVar1._12_4_ & _UNK_150b50d5c) +
                                                   param_3 + auVar20._12_4_)),0x30);
  auVar1 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                           (auVar2._0_4_ &
                                           ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                           ) + param_3 + auVar19._0_4_)),
                         ZEXT416(*(uint *)((ulonglong)(auVar2._4_4_ & _UNK_150b50d44) +
                                          param_3 + auVar19._4_4_)),0x10);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((ulonglong)(auVar2._8_4_ & _UNK_150b50d48) +
                                                 param_3 + auVar19._8_4_)),0x20);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((ulonglong)(auVar2._12_4_ & _UNK_150b50d4c) +
                                                 param_3 + auVar19._12_4_)),0x30);
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + auVar20._0_4_)),
                         ZEXT416(*(uint *)(param_3 + auVar20._4_4_)),0x10);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_3 + auVar20._8_4_)),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_3 + auVar20._12_4_)),0x30);
  auVar20 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + auVar19._0_4_)),
                          ZEXT416(*(uint *)(param_3 + auVar19._4_4_)),0x10);
  auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + auVar19._8_4_)),0x20);
  auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + auVar19._12_4_)),0x30);
  auVar10 = vsubps_avx(auVar10,auVar14);
  auVar13._4_4_ = __real_3f800000;
  auVar13._0_4_ = __real_3f800000;
  auVar13._8_4_ = __real_3f800000;
  auVar13._12_4_ = __real_3f800000;
  auVar13._16_4_ = __real_3f800000;
  auVar13._20_4_ = __real_3f800000;
  auVar13._24_4_ = __real_3f800000;
  auVar13._28_4_ = __real_3f800000;
  auVar14 = vsubps_avx(auVar13,auVar10);
  auVar9._0_4_ = auVar14._0_4_ * auVar1._0_4_ + auVar10._0_4_ * auVar20._0_4_;
  auVar9._4_4_ = auVar14._4_4_ * auVar1._4_4_ + auVar10._4_4_ * auVar20._4_4_;
  auVar9._8_4_ = auVar14._8_4_ * auVar1._8_4_ + auVar10._8_4_ * auVar20._8_4_;
  auVar9._12_4_ = auVar14._12_4_ * auVar1._12_4_ + auVar10._12_4_ * auVar20._12_4_;
  auVar9._16_4_ = auVar14._16_4_ * auVar15._0_4_ + auVar10._16_4_ * auVar2._0_4_;
  auVar9._20_4_ = auVar14._20_4_ * auVar15._4_4_ + auVar10._20_4_ * auVar2._4_4_;
  auVar9._24_4_ = auVar14._24_4_ * auVar15._8_4_ + auVar10._24_4_ * auVar2._8_4_;
  auVar9._28_4_ = auVar14._28_4_ * auVar15._12_4_ + auVar10._28_4_ * auVar2._12_4_;
  auVar10 = vmaskmovps_avx(auVar12,auVar9);
  *(undefined1 (*) [32])(param_6 + lVar3) = auVar10;
  return;
}

// ArraySum_avx @ 140a28770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum_avx(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar9 = ZEXT1632(ZEXT816(0));
    auVar8 = ZEXT1632(ZEXT816(0));
    if ((int)param_3 < 1) goto LAB_140a2880e;
  }
  else {
    auVar10 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar8._0_4_ = auVar10._0_4_ + *pfVar1;
      auVar8._4_4_ = auVar10._4_4_ + pfVar1[1];
      auVar8._8_4_ = auVar10._8_4_ + pfVar1[2];
      auVar8._12_4_ = auVar10._12_4_ + pfVar1[3];
      auVar8._16_4_ = auVar10._16_4_ + *pfVar2;
      auVar8._20_4_ = auVar10._20_4_ + pfVar2[1];
      auVar8._24_4_ = auVar10._24_4_ + pfVar2[2];
      auVar8._28_4_ = auVar10._28_4_ + pfVar2[3];
      auVar10 = ZEXT3264(auVar8);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    auVar9 = auVar8;
    if ((int)param_3 <= (int)uVar6) goto LAB_140a2880e;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar11._16_16_ = auVar3;
  auVar11._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar3;
  auVar12._0_16_ = auVar4;
  auVar8 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar6 << 2)));
  auVar13._4_4_ = __real_80000000;
  auVar13._0_4_ = __real_80000000;
  auVar13._8_4_ = __real_80000000;
  auVar13._12_4_ = __real_80000000;
  auVar13._16_4_ = __real_80000000;
  auVar13._20_4_ = __real_80000000;
  auVar13._24_4_ = __real_80000000;
  auVar13._28_4_ = __real_80000000;
  auVar11 = vblendvps_avx(auVar13,auVar8,auVar12);
  auVar8._0_4_ = auVar9._0_4_ + auVar11._0_4_;
  auVar8._4_4_ = auVar9._4_4_ + auVar11._4_4_;
  auVar8._8_4_ = auVar9._8_4_ + auVar11._8_4_;
  auVar8._12_4_ = auVar9._12_4_ + auVar11._12_4_;
  auVar8._16_4_ = auVar9._16_4_ + auVar11._16_4_;
  auVar8._20_4_ = auVar9._20_4_ + auVar11._20_4_;
  auVar8._24_4_ = auVar9._24_4_ + auVar11._24_4_;
  auVar8._28_4_ = auVar9._28_4_ + auVar11._28_4_;
LAB_140a2880e:
  auVar9 = vhaddps_avx(auVar8,auVar8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = auVar9._0_4_ + auVar9._16_4_;
  return;
}

// ArraySum2_avx @ 140a28840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum2_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_2 + uVar9);
      pfVar4 = (float *)(param_2 + 0x10 + uVar9);
      auVar11._0_4_ = *pfVar1 + *pfVar2;
      auVar11._4_4_ = pfVar1[1] + pfVar2[1];
      auVar11._8_4_ = pfVar1[2] + pfVar2[2];
      auVar11._12_4_ = pfVar1[3] + pfVar2[3];
      auVar12._16_4_ = *pfVar3 + *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] + pfVar4[1];
      auVar12._24_4_ = pfVar3[2] + pfVar4[2];
      auVar12._28_4_ = pfVar3[3] + pfVar4[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar9) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar9) = auVar11;
      uVar7 = uVar7 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_4),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ + auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ + auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ + auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ + auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ + auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ + auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ + auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ + auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_3 + lVar8) = auVar12;
  return;
}

// ArrayCumulativeSum_avx @ 140a28910

void ArrayCumulativeSum_avx(longlong param_1,longlong param_2,uint param_3)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  if (0 < (int)param_3) {
    if (param_3 < 4) {
      fVar4 = 0.0;
      lVar2 = 0;
    }
    else {
      fVar4 = 0.0;
      lVar2 = 0;
      do {
        fVar4 = fVar4 + *(float *)(param_1 + lVar2 * 4);
        *(float *)(param_2 + lVar2 * 4) = fVar4;
        fVar4 = fVar4 + *(float *)(param_1 + 4 + lVar2 * 4);
        *(float *)(param_2 + 4 + lVar2 * 4) = fVar4;
        fVar1 = fVar4 + *(float *)(param_1 + 8 + lVar2 * 4);
        fVar4 = fVar1 + *(float *)(param_1 + 0xc + lVar2 * 4);
        *(float *)(param_2 + 8 + lVar2 * 4) = fVar1;
        *(float *)(param_2 + 0xc + lVar2 * 4) = fVar4;
        lVar2 = lVar2 + 4;
      } while ((param_3 & 0x7ffffffc) != (uint)lVar2);
    }
    if ((param_3 & 3) != 0) {
      lVar3 = 0;
      do {
        fVar4 = fVar4 + *(float *)(param_1 + lVar2 * 4 + lVar3 * 4);
        *(float *)(param_2 + lVar2 * 4 + lVar3 * 4) = fVar4;
        lVar3 = lVar3 + 1;
      } while ((param_3 & 3) != (uint)lVar3);
    }
  }
  return;
}

// ArrayMean_avx @ 140a289b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMean_avx(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar9 = ZEXT1632(ZEXT816(0));
    auVar8 = ZEXT1632(ZEXT816(0));
    if ((int)param_3 < 1) goto LAB_140a28a4e;
  }
  else {
    auVar10 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar8._0_4_ = auVar10._0_4_ + *pfVar1;
      auVar8._4_4_ = auVar10._4_4_ + pfVar1[1];
      auVar8._8_4_ = auVar10._8_4_ + pfVar1[2];
      auVar8._12_4_ = auVar10._12_4_ + pfVar1[3];
      auVar8._16_4_ = auVar10._16_4_ + *pfVar2;
      auVar8._20_4_ = auVar10._20_4_ + pfVar2[1];
      auVar8._24_4_ = auVar10._24_4_ + pfVar2[2];
      auVar8._28_4_ = auVar10._28_4_ + pfVar2[3];
      auVar10 = ZEXT3264(auVar8);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    auVar9 = auVar8;
    if ((int)param_3 <= (int)uVar6) goto LAB_140a28a4e;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar11._16_16_ = auVar3;
  auVar11._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar3;
  auVar12._0_16_ = auVar4;
  auVar8 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar6 << 2)));
  auVar13._4_4_ = __real_80000000;
  auVar13._0_4_ = __real_80000000;
  auVar13._8_4_ = __real_80000000;
  auVar13._12_4_ = __real_80000000;
  auVar13._16_4_ = __real_80000000;
  auVar13._20_4_ = __real_80000000;
  auVar13._24_4_ = __real_80000000;
  auVar13._28_4_ = __real_80000000;
  auVar11 = vblendvps_avx(auVar13,auVar8,auVar12);
  auVar8._0_4_ = auVar9._0_4_ + auVar11._0_4_;
  auVar8._4_4_ = auVar9._4_4_ + auVar11._4_4_;
  auVar8._8_4_ = auVar9._8_4_ + auVar11._8_4_;
  auVar8._12_4_ = auVar9._12_4_ + auVar11._12_4_;
  auVar8._16_4_ = auVar9._16_4_ + auVar11._16_4_;
  auVar8._20_4_ = auVar9._20_4_ + auVar11._20_4_;
  auVar8._24_4_ = auVar9._24_4_ + auVar11._24_4_;
  auVar8._28_4_ = auVar9._28_4_ + auVar11._28_4_;
LAB_140a28a4e:
  auVar9 = vhaddps_avx(auVar8,auVar8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = (auVar9._0_4_ + auVar9._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMeanSquared_avx @ 140a28a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanSquared_avx(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar9 = ZEXT1632(ZEXT816(0));
    auVar8 = ZEXT1632(ZEXT816(0));
    if ((int)param_3 < 1) goto LAB_140a28b36;
  }
  else {
    auVar10 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar8._0_4_ = auVar10._0_4_ + *pfVar1 * *pfVar1;
      auVar8._4_4_ = auVar10._4_4_ + pfVar1[1] * pfVar1[1];
      auVar8._8_4_ = auVar10._8_4_ + pfVar1[2] * pfVar1[2];
      auVar8._12_4_ = auVar10._12_4_ + pfVar1[3] * pfVar1[3];
      auVar8._16_4_ = auVar10._16_4_ + *pfVar2 * *pfVar2;
      auVar8._20_4_ = auVar10._20_4_ + pfVar2[1] * pfVar2[1];
      auVar8._24_4_ = auVar10._24_4_ + pfVar2[2] * pfVar2[2];
      auVar8._28_4_ = auVar10._28_4_ + pfVar2[3] * pfVar2[3];
      auVar10 = ZEXT3264(auVar8);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    auVar9 = auVar8;
    if ((int)param_3 <= (int)uVar6) goto LAB_140a28b36;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar11._16_16_ = auVar3;
  auVar11._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar3;
  auVar12._0_16_ = auVar4;
  auVar8 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar6 << 2)));
  auVar13._0_4_ = auVar8._0_4_ * auVar8._0_4_;
  auVar13._4_4_ = auVar8._4_4_ * auVar8._4_4_;
  auVar13._8_4_ = auVar8._8_4_ * auVar8._8_4_;
  auVar13._12_4_ = auVar8._12_4_ * auVar8._12_4_;
  auVar13._16_4_ = auVar8._16_4_ * auVar8._16_4_;
  auVar13._20_4_ = auVar8._20_4_ * auVar8._20_4_;
  auVar13._24_4_ = auVar8._24_4_ * auVar8._24_4_;
  auVar13._28_4_ = auVar8._28_4_ * auVar8._28_4_;
  auVar14._4_4_ = __real_80000000;
  auVar14._0_4_ = __real_80000000;
  auVar14._8_4_ = __real_80000000;
  auVar14._12_4_ = __real_80000000;
  auVar14._16_4_ = __real_80000000;
  auVar14._20_4_ = __real_80000000;
  auVar14._24_4_ = __real_80000000;
  auVar14._28_4_ = __real_80000000;
  auVar11 = vblendvps_avx(auVar14,auVar13,auVar12);
  auVar8._0_4_ = auVar9._0_4_ + auVar11._0_4_;
  auVar8._4_4_ = auVar9._4_4_ + auVar11._4_4_;
  auVar8._8_4_ = auVar9._8_4_ + auVar11._8_4_;
  auVar8._12_4_ = auVar9._12_4_ + auVar11._12_4_;
  auVar8._16_4_ = auVar9._16_4_ + auVar11._16_4_;
  auVar8._20_4_ = auVar9._20_4_ + auVar11._20_4_;
  auVar8._24_4_ = auVar9._24_4_ + auVar11._24_4_;
  auVar8._28_4_ = auVar9._28_4_ + auVar11._28_4_;
LAB_140a28b36:
  auVar9 = vhaddps_avx(auVar8,auVar8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = (auVar9._0_4_ + auVar9._16_4_) / (float)(int)param_3;
  return;
}

// ArrayMax_avx @ 140a28b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMax_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar3 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar3 = param_4;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
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
      auVar8._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar6);
      auVar8._0_16_ = *(undefined1 (*) [16])(param_1 + uVar6);
      auVar11._16_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar6);
      auVar11._0_16_ = *(undefined1 (*) [16])(param_2 + uVar6);
      auVar8 = vmaxps_avx(auVar8,auVar11);
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar6) = auVar8._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar6) = auVar8._0_16_;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_4),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar11 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vmaxps_avx(auVar8,auVar11);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_3 + lVar5) = auVar8;
  return;
}

// ArrayMaxAbsValue_avx @ 140a28c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMaxAbsValue_avx(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar11 = ZEXT832(0);
    if ((int)param_2 < 1) goto LAB_140a28cef;
  }
  else {
    auVar8 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar7);
      puVar2 = (uint *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar11._0_4_ = *puVar1 & __real_7fffffff;
      auVar11._4_4_ = puVar1[1] & __real_7fffffff;
      auVar11._8_4_ = puVar1[2] & __real_7fffffff;
      auVar11._12_4_ = puVar1[3] & __real_7fffffff;
      auVar11._16_4_ = *puVar2 & __real_7fffffff;
      auVar11._20_4_ = puVar2[1] & __real_7fffffff;
      auVar11._24_4_ = puVar2[2] & __real_7fffffff;
      auVar11._28_4_ = puVar2[3] & __real_7fffffff;
      auVar11 = vmaxps_avx(auVar11,auVar8._0_32_);
      auVar8 = ZEXT3264(auVar11);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar6) goto LAB_140a28cef;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar9._16_16_ = auVar3;
  auVar9._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_2),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar3;
  auVar10._0_16_ = auVar4;
  auVar9 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar6 << 2)));
  auVar12._0_4_ =
       auVar9._0_4_ & ___ymm_7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff;
  auVar12._4_4_ = auVar9._4_4_ & _UNK_150b50ee4;
  auVar12._8_4_ = auVar9._8_4_ & _UNK_150b50ee8;
  auVar12._12_4_ = auVar9._12_4_ & _UNK_150b50eec;
  auVar12._16_4_ = auVar9._16_4_ & _UNK_150b50ef0;
  auVar12._20_4_ = auVar9._20_4_ & _UNK_150b50ef4;
  auVar12._24_4_ = auVar9._24_4_ & _UNK_150b50ef8;
  auVar12._28_4_ = auVar9._28_4_ & _UNK_150b50efc;
  auVar9 = vmaxps_avx(auVar12,auVar11);
  auVar11 = vblendvps_avx(auVar11,auVar9,auVar10);
LAB_140a28cef:
  auVar3 = vmaxps_avx(auVar11._16_16_,auVar11._0_16_);
  auVar4 = vshufpd_avx(auVar3,auVar3,1);
  auVar3 = vmaxps_avx(auVar4,auVar3);
  auVar4 = vmovshdup_avx(auVar3);
  vmaxss_avx(auVar4,auVar3);
  return;
}

// ArrayGetMagnitude_avx @ 140a28d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetMagnitude_avx(longlong param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar9 = ZEXT1632(ZEXT816(0));
    auVar8 = ZEXT1632(ZEXT816(0));
    if ((int)param_2 < 1) goto LAB_140a28dc4;
  }
  else {
    auVar10 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar8._0_4_ = auVar10._0_4_ + *pfVar1 * *pfVar1;
      auVar8._4_4_ = auVar10._4_4_ + pfVar1[1] * pfVar1[1];
      auVar8._8_4_ = auVar10._8_4_ + pfVar1[2] * pfVar1[2];
      auVar8._12_4_ = auVar10._12_4_ + pfVar1[3] * pfVar1[3];
      auVar8._16_4_ = auVar10._16_4_ + *pfVar2 * *pfVar2;
      auVar8._20_4_ = auVar10._20_4_ + pfVar2[1] * pfVar2[1];
      auVar8._24_4_ = auVar10._24_4_ + pfVar2[2] * pfVar2[2];
      auVar8._28_4_ = auVar10._28_4_ + pfVar2[3] * pfVar2[3];
      auVar10 = ZEXT3264(auVar8);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    auVar9 = auVar8;
    if ((int)param_2 <= (int)uVar6) goto LAB_140a28dc4;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar11._16_16_ = auVar3;
  auVar11._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_2),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar3;
  auVar12._0_16_ = auVar4;
  auVar8 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar6 << 2)));
  auVar13._0_4_ = auVar8._0_4_ * auVar8._0_4_;
  auVar13._4_4_ = auVar8._4_4_ * auVar8._4_4_;
  auVar13._8_4_ = auVar8._8_4_ * auVar8._8_4_;
  auVar13._12_4_ = auVar8._12_4_ * auVar8._12_4_;
  auVar13._16_4_ = auVar8._16_4_ * auVar8._16_4_;
  auVar13._20_4_ = auVar8._20_4_ * auVar8._20_4_;
  auVar13._24_4_ = auVar8._24_4_ * auVar8._24_4_;
  auVar13._28_4_ = auVar8._28_4_ * auVar8._28_4_;
  auVar14._4_4_ = __real_80000000;
  auVar14._0_4_ = __real_80000000;
  auVar14._8_4_ = __real_80000000;
  auVar14._12_4_ = __real_80000000;
  auVar14._16_4_ = __real_80000000;
  auVar14._20_4_ = __real_80000000;
  auVar14._24_4_ = __real_80000000;
  auVar14._28_4_ = __real_80000000;
  auVar11 = vblendvps_avx(auVar14,auVar13,auVar12);
  auVar8._0_4_ = auVar9._0_4_ + auVar11._0_4_;
  auVar8._4_4_ = auVar9._4_4_ + auVar11._4_4_;
  auVar8._8_4_ = auVar9._8_4_ + auVar11._8_4_;
  auVar8._12_4_ = auVar9._12_4_ + auVar11._12_4_;
  auVar8._16_4_ = auVar9._16_4_ + auVar11._16_4_;
  auVar8._20_4_ = auVar9._20_4_ + auVar11._20_4_;
  auVar8._24_4_ = auVar9._24_4_ + auVar11._24_4_;
  auVar8._28_4_ = auVar9._28_4_ + auVar11._28_4_;
LAB_140a28dc4:
  auVar9 = vhaddps_avx(auVar8,auVar8);
  vhaddps_avx(auVar9,auVar9);
  return;
}

// ArrayGetAverageValue_avx @ 140a28df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetAverageValue_avx(longlong param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar9 = ZEXT1632(ZEXT816(0));
    auVar8 = ZEXT1632(ZEXT816(0));
    if ((int)param_2 < 1) goto LAB_140a28e8c;
  }
  else {
    auVar10 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar8._0_4_ = auVar10._0_4_ + *pfVar1;
      auVar8._4_4_ = auVar10._4_4_ + pfVar1[1];
      auVar8._8_4_ = auVar10._8_4_ + pfVar1[2];
      auVar8._12_4_ = auVar10._12_4_ + pfVar1[3];
      auVar8._16_4_ = auVar10._16_4_ + *pfVar2;
      auVar8._20_4_ = auVar10._20_4_ + pfVar2[1];
      auVar8._24_4_ = auVar10._24_4_ + pfVar2[2];
      auVar8._28_4_ = auVar10._28_4_ + pfVar2[3];
      auVar10 = ZEXT3264(auVar8);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    auVar9 = auVar8;
    if ((int)param_2 <= (int)uVar6) goto LAB_140a28e8c;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar11._16_16_ = auVar3;
  auVar11._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_2),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar3;
  auVar12._0_16_ = auVar4;
  auVar8 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar6 << 2)));
  auVar13._4_4_ = __real_80000000;
  auVar13._0_4_ = __real_80000000;
  auVar13._8_4_ = __real_80000000;
  auVar13._12_4_ = __real_80000000;
  auVar13._16_4_ = __real_80000000;
  auVar13._20_4_ = __real_80000000;
  auVar13._24_4_ = __real_80000000;
  auVar13._28_4_ = __real_80000000;
  auVar11 = vblendvps_avx(auVar13,auVar8,auVar12);
  auVar8._0_4_ = auVar9._0_4_ + auVar11._0_4_;
  auVar8._4_4_ = auVar9._4_4_ + auVar11._4_4_;
  auVar8._8_4_ = auVar9._8_4_ + auVar11._8_4_;
  auVar8._12_4_ = auVar9._12_4_ + auVar11._12_4_;
  auVar8._16_4_ = auVar9._16_4_ + auVar11._16_4_;
  auVar8._20_4_ = auVar9._20_4_ + auVar11._20_4_;
  auVar8._24_4_ = auVar9._24_4_ + auVar11._24_4_;
  auVar8._28_4_ = auVar9._28_4_ + auVar11._28_4_;
LAB_140a28e8c:
  auVar9 = vhaddps_avx(auVar8,auVar8);
  vhaddps_avx(auVar9,auVar9);
  return;
}

// ArrayGetAverageAbsValue_avx @ 140a28ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetAverageAbsValue_avx(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar9 = ZEXT1632(ZEXT816(0));
    auVar8 = ZEXT1632(ZEXT816(0));
    if ((int)param_2 < 1) goto LAB_140a28f78;
  }
  else {
    auVar10 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar7);
      puVar2 = (uint *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar8._0_4_ = auVar10._0_4_ + (float)(*puVar1 & __real_7fffffff);
      auVar8._4_4_ = auVar10._4_4_ + (float)(puVar1[1] & __real_7fffffff);
      auVar8._8_4_ = auVar10._8_4_ + (float)(puVar1[2] & __real_7fffffff);
      auVar8._12_4_ = auVar10._12_4_ + (float)(puVar1[3] & __real_7fffffff);
      auVar8._16_4_ = auVar10._16_4_ + (float)(*puVar2 & __real_7fffffff);
      auVar8._20_4_ = auVar10._20_4_ + (float)(puVar2[1] & __real_7fffffff);
      auVar8._24_4_ = auVar10._24_4_ + (float)(puVar2[2] & __real_7fffffff);
      auVar8._28_4_ = auVar10._28_4_ + (float)(puVar2[3] & __real_7fffffff);
      auVar10 = ZEXT3264(auVar8);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    auVar9 = auVar8;
    if ((int)param_2 <= (int)uVar6) goto LAB_140a28f78;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar11._16_16_ = auVar3;
  auVar11._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_2),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar3;
  auVar12._0_16_ = auVar4;
  auVar8 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar6 << 2)));
  auVar13._0_4_ =
       auVar8._0_4_ & ___ymm_7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff;
  auVar13._4_4_ = auVar8._4_4_ & _UNK_150b50ee4;
  auVar13._8_4_ = auVar8._8_4_ & _UNK_150b50ee8;
  auVar13._12_4_ = auVar8._12_4_ & _UNK_150b50eec;
  auVar13._16_4_ = auVar8._16_4_ & _UNK_150b50ef0;
  auVar13._20_4_ = auVar8._20_4_ & _UNK_150b50ef4;
  auVar13._24_4_ = auVar8._24_4_ & _UNK_150b50ef8;
  auVar13._28_4_ = auVar8._28_4_ & _UNK_150b50efc;
  auVar14._4_4_ = __real_80000000;
  auVar14._0_4_ = __real_80000000;
  auVar14._8_4_ = __real_80000000;
  auVar14._12_4_ = __real_80000000;
  auVar14._16_4_ = __real_80000000;
  auVar14._20_4_ = __real_80000000;
  auVar14._24_4_ = __real_80000000;
  auVar14._28_4_ = __real_80000000;
  auVar11 = vblendvps_avx(auVar14,auVar13,auVar12);
  auVar8._0_4_ = auVar9._0_4_ + auVar11._0_4_;
  auVar8._4_4_ = auVar9._4_4_ + auVar11._4_4_;
  auVar8._8_4_ = auVar9._8_4_ + auVar11._8_4_;
  auVar8._12_4_ = auVar9._12_4_ + auVar11._12_4_;
  auVar8._16_4_ = auVar9._16_4_ + auVar11._16_4_;
  auVar8._20_4_ = auVar9._20_4_ + auVar11._20_4_;
  auVar8._24_4_ = auVar9._24_4_ + auVar11._24_4_;
  auVar8._28_4_ = auVar9._28_4_ + auVar11._28_4_;
LAB_140a28f78:
  auVar9 = vhaddps_avx(auVar8,auVar8);
  vhaddps_avx(auVar9,auVar9);
  return;
}

// ArrayMeanFilter_avx @ 140a28fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanFilter_avx(longlong param_1,int param_2,uint param_3,longlong param_4,float param_5,
                        uint param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
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
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 unaff_00001484 [12];
  
  iVar10 = _UNK_150631ebc;
  iVar9 = _UNK_150631eb8;
  iVar8 = _UNK_150631eb4;
  iVar7 = ___xmm_00000007000000060000000500000004;
  iVar6 = _UNK_150631e0c;
  iVar5 = _UNK_150631e08;
  iVar22 = __xmm_00000003000000020000000100000000._4_4_;
  iVar15 = (int)__xmm_00000003000000020000000100000000;
  uVar17 = param_3 + 1;
  uVar19 = (uVar17 - param_2) + param_6;
  uVar21 = uVar17;
  if ((int)uVar17 < (int)uVar19) {
    uVar21 = uVar19;
  }
  uVar11 = ~param_3;
  uVar13 = param_2 - param_3;
  if ((int)uVar13 < (int)param_6) {
    uVar12 = param_3 + 8;
    if (-1 < (int)uVar17) {
      uVar12 = uVar17;
    }
    if ((int)(uVar12 & 0xfffffff8) < 1) {
      uVar24 = 0;
      if (-1 < (int)param_3) goto LAB_140a290c4;
    }
    else {
      uVar23 = 0;
      auVar38._4_4_ = __real_3f800000;
      auVar38._0_4_ = __real_3f800000;
      auVar38._8_4_ = __real_3f800000;
      auVar38._12_4_ = __real_3f800000;
      auVar38._16_4_ = __real_3f800000;
      auVar38._20_4_ = __real_3f800000;
      auVar38._24_4_ = __real_3f800000;
      auVar38._28_4_ = __real_3f800000;
      uVar24 = 0;
      do {
        lVar16 = (longlong)(int)(param_2 * 4 + param_3 * -4 + -4 + uVar23);
        auVar26 = vpshufd_avx(ZEXT416((int)uVar24 + uVar13),0);
        auVar41._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar16);
        auVar41._0_16_ = *(undefined1 (*) [16])(param_1 + lVar16);
        auVar43._4_4_ = auVar26._4_4_ + iVar22;
        auVar43._0_4_ = auVar26._0_4_ + iVar15;
        auVar43._8_4_ = auVar26._8_4_ + iVar5;
        auVar43._12_4_ = auVar26._12_4_ + iVar6;
        auVar43._20_4_ = auVar26._4_4_ + iVar8;
        auVar43._16_4_ = auVar26._0_4_ + iVar7;
        auVar43._24_4_ = auVar26._8_4_ + iVar9;
        auVar43._28_4_ = auVar26._12_4_ + iVar10;
        auVar29 = vcvtdq2ps_avx(auVar43);
        auVar29 = vmaxps_avx(auVar38,auVar29);
        auVar29 = vdivps_avx(auVar41,auVar29);
        *(undefined1 (*) [16])(param_4 + 0x10 + (ulonglong)uVar23) = auVar29._16_16_;
        *(undefined1 (*) [16])(param_4 + (ulonglong)uVar23) = auVar29._0_16_;
        uVar24 = uVar24 + 8;
        uVar23 = uVar23 + 0x20;
      } while (uVar24 < (uVar12 & 0xfffffff8));
      if ((int)uVar24 <= (int)param_3) {
LAB_140a290c4:
        uVar12 = (uint)uVar24;
        auVar26 = vpshufd_avx(ZEXT416(uVar12),0);
        auVar31._16_16_ = auVar26;
        auVar31._0_16_ = auVar26;
        auVar31 = auVar31 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
        auVar3 = vpshufd_avx(ZEXT416(uVar17),0);
        auVar26 = vpcmpgtd_avx(auVar3,auVar31._16_16_);
        auVar3 = vpcmpgtd_avx(auVar3,auVar31._0_16_);
        auVar39._16_16_ = auVar26;
        auVar39._0_16_ = auVar3;
        auVar35 = vmaskmovps_avx(auVar39,*(undefined1 (*) [32])
                                          (param_1 + (int)((uVar12 + (uVar13 - 1)) * 4)));
        auVar26 = vpshufd_avx(ZEXT416(uVar13),0);
        auVar27._20_4_ = auVar31._20_4_ + auVar26._4_4_;
        auVar27._16_4_ = auVar31._16_4_ + auVar26._0_4_;
        auVar27._24_4_ = auVar31._24_4_ + auVar26._8_4_;
        auVar27._28_4_ = auVar31._28_4_ + auVar26._12_4_;
        auVar27._4_4_ = auVar31._4_4_ + auVar26._4_4_;
        auVar27._0_4_ = auVar31._0_4_ + auVar26._0_4_;
        auVar27._8_4_ = auVar31._8_4_ + auVar26._8_4_;
        auVar27._12_4_ = auVar31._12_4_ + auVar26._12_4_;
        auVar29 = vcvtdq2ps_avx(auVar27);
        auVar32._4_4_ = __real_3f800000;
        auVar32._0_4_ = __real_3f800000;
        auVar32._8_4_ = __real_3f800000;
        auVar32._12_4_ = __real_3f800000;
        auVar32._16_4_ = __real_3f800000;
        auVar32._20_4_ = __real_3f800000;
        auVar32._24_4_ = __real_3f800000;
        auVar32._28_4_ = __real_3f800000;
        auVar29 = vmaxps_avx(auVar32,auVar29);
        auVar29 = vdivps_avx(auVar35,auVar29);
        auVar29 = vmaskmovps_avx(auVar39,auVar29);
        *(undefined1 (*) [32])(param_4 + (int)(uVar12 * 4)) = auVar29;
      }
    }
    auVar26._0_4_ = (float)param_2;
    auVar26._4_12_ = unaff_00001484;
    uVar23 = uVar21 - uVar17;
    uVar12 = uVar23 + 7;
    if (-1 < (int)uVar23) {
      uVar12 = uVar23;
    }
    iVar15 = ((uVar12 & 0xfffffff8) - uVar23) + uVar21;
    uVar24 = (ulonglong)uVar17;
    if ((int)uVar17 < iVar15) {
      auVar3 = vshufps_avx(auVar26,auVar26,0);
      auVar33._16_16_ = auVar3;
      auVar33._0_16_ = auVar3;
      uVar24 = (ulonglong)(int)uVar17;
      iVar22 = 0;
      do {
        lVar16 = (longlong)(param_2 * 4 + iVar22);
        auVar36._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar16);
        auVar36._0_16_ = *(undefined1 (*) [16])(param_1 + lVar16);
        auVar40._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + (longlong)iVar22);
        auVar40._0_16_ = *(undefined1 (*) [16])(param_1 + iVar22);
        auVar29 = vsubps_avx(auVar36,auVar40);
        auVar29 = vdivps_avx(auVar29,auVar33);
        lVar16 = (longlong)(int)(param_3 * 4 + 4 + iVar22);
        *(undefined1 (*) [16])(param_4 + 0x10 + lVar16) = auVar29._16_16_;
        *(undefined1 (*) [16])(param_4 + lVar16) = auVar29._0_16_;
        uVar24 = uVar24 + 8;
        iVar22 = iVar22 + 0x20;
      } while ((longlong)uVar24 < (longlong)iVar15);
    }
    uVar12 = (uint)uVar24;
    if ((int)uVar21 <= (int)uVar12) goto LAB_140a2931f;
    auVar4 = vpshufd_avx(ZEXT416(uVar12),0);
    auVar3._0_4_ = auVar4._0_4_ + (int)__xmm_00000003000000020000000100000000;
    auVar3._4_4_ = auVar4._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
    auVar3._8_4_ = auVar4._8_4_ + _UNK_150631e08;
    auVar3._12_4_ = auVar4._12_4_ + _UNK_150631e0c;
    auVar2._0_4_ = auVar4._0_4_ + ___xmm_00000007000000060000000500000004;
    auVar2._4_4_ = auVar4._4_4_ + _UNK_150631eb4;
    auVar2._8_4_ = auVar4._8_4_ + _UNK_150631eb8;
    auVar2._12_4_ = auVar4._12_4_ + _UNK_150631ebc;
    auVar4 = vpshufd_avx(ZEXT416(uVar21),0);
    auVar2 = vpcmpgtd_avx(auVar4,auVar2);
    auVar3 = vpcmpgtd_avx(auVar4,auVar3);
    auVar34._16_16_ = auVar2;
    auVar34._0_16_ = auVar3;
    auVar29 = vmaskmovps_avx(auVar34,*(undefined1 (*) [32])
                                      (param_1 + (int)(((uVar13 - 1) + uVar12) * 4)));
    iVar15 = uVar12 * 4;
    auVar35 = vmaskmovps_avx(auVar34,*(undefined1 (*) [32])(param_1 + (int)((uVar12 + uVar11) * 4)))
    ;
    auVar29 = vsubps_avx(auVar29,auVar35);
    auVar26 = vshufps_avx(auVar26,auVar26,0);
    auVar28._16_16_ = auVar26;
    auVar28._0_16_ = auVar26;
    auVar29 = vdivps_avx(auVar29,auVar28);
  }
  else {
    auVar26 = ZEXT416((uint)(param_5 / (float)(int)param_6));
    uVar13 = uVar21 + 7;
    if (-1 < (int)uVar21) {
      uVar13 = uVar21;
    }
    if ((int)(uVar13 & 0xfffffff8) < 1) {
      uVar24 = 0;
      if ((int)uVar21 < 1) goto LAB_140a2931f;
    }
    else {
      auVar3 = vshufps_avx(auVar26,auVar26,0);
      uVar12 = 0;
      uVar24 = 0;
      do {
        *(undefined1 (*) [16])(param_4 + 0x10 + (ulonglong)uVar12) = auVar3;
        *(undefined1 (*) [16])(param_4 + (ulonglong)uVar12) = auVar3;
        uVar24 = uVar24 + 8;
        uVar12 = uVar12 + 0x20;
      } while (uVar24 < (uVar13 & 0xfffffff8));
      if ((int)uVar21 <= (int)uVar24) goto LAB_140a2931f;
    }
    auVar3 = vpshufd_avx(ZEXT416((uint)uVar24),0);
    auVar35._16_16_ = auVar3;
    auVar35._0_16_ = auVar3;
    auVar2 = vpshufd_avx(ZEXT416(uVar21),0);
    auVar3 = vpcmpgtd_avx(auVar2,SUB3216(auVar35 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0x10));
    auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar35 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
    auVar34._16_16_ = auVar3;
    auVar34._0_16_ = auVar2;
    iVar15 = (uint)uVar24 << 2;
    auVar26 = vshufps_avx(auVar26,auVar26,0);
    auVar29._16_16_ = auVar26;
    auVar29._0_16_ = auVar26;
  }
  auVar29 = vmaskmovps_avx(auVar34,auVar29);
  *(undefined1 (*) [32])(param_4 + iVar15) = auVar29;
LAB_140a2931f:
  iVar10 = _UNK_150d5a8fc;
  iVar9 = _UNK_150d5a8f8;
  iVar8 = _UNK_150d5a8f4;
  iVar7 = ___xmm_fffffff9fffffffafffffffbfffffffc;
  iVar6 = _UNK_150d5a8ec;
  iVar5 = _UNK_150d5a8e8;
  iVar22 = _UNK_150d5a8e4;
  iVar15 = ___xmm_fffffffdfffffffeffffffff00000000;
  uVar12 = param_6 - uVar21;
  uVar13 = uVar12 + 7;
  if (-1 < (int)uVar12) {
    uVar13 = uVar12;
  }
  iVar14 = ((uVar13 & 0xfffffff8) - uVar12) + param_6;
  auVar26 = ZEXT416((uint)param_5);
  if ((int)uVar21 < iVar14) {
    auVar3 = vshufps_avx(auVar26,auVar26,0);
    auVar37._16_16_ = auVar3;
    auVar37._0_16_ = auVar3;
    uVar21 = uVar17;
    if ((int)uVar17 < (int)uVar19) {
      uVar21 = uVar19;
    }
    lVar16 = (longlong)(int)uVar21;
    iVar20 = uVar21 * 4;
    do {
      lVar18 = (longlong)(int)(uVar11 * 4 + iVar20);
      auVar44._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + lVar18);
      auVar44._0_16_ = *(undefined1 (*) [16])(param_1 + lVar18);
      auVar35 = vsubps_avx(auVar37,auVar44);
      auVar3 = vpsubd_avx(ZEXT416(param_6 + param_3),ZEXT416(uVar21));
      auVar3 = vpshufd_avx(auVar3,0);
      auVar45._4_4_ = auVar3._4_4_ + iVar22;
      auVar45._0_4_ = auVar3._0_4_ + iVar15;
      auVar45._8_4_ = auVar3._8_4_ + iVar5;
      auVar45._12_4_ = auVar3._12_4_ + iVar6;
      auVar45._20_4_ = auVar3._4_4_ + iVar8;
      auVar45._16_4_ = auVar3._0_4_ + iVar7;
      auVar45._24_4_ = auVar3._8_4_ + iVar9;
      auVar45._28_4_ = auVar3._12_4_ + iVar10;
      auVar29 = vcvtdq2ps_avx(auVar45);
      auVar29 = vdivps_avx(auVar35,auVar29);
      *(undefined1 (*) [16])(param_4 + 0x10 + (longlong)iVar20) = auVar29._16_16_;
      *(undefined1 (*) [16])(param_4 + iVar20) = auVar29._0_16_;
      lVar16 = lVar16 + 8;
      iVar20 = iVar20 + 0x20;
      uVar21 = uVar21 + 8;
    } while (lVar16 < iVar14);
  }
  if ((int)uVar21 < (int)param_6) {
    auVar3 = vpshufd_avx(ZEXT416(uVar21),0);
    auVar4._0_4_ = auVar3._0_4_ + (int)__xmm_00000003000000020000000100000000;
    auVar4._4_4_ = auVar3._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
    auVar4._8_4_ = auVar3._8_4_ + _UNK_150631e08;
    auVar4._12_4_ = auVar3._12_4_ + _UNK_150631e0c;
    auVar1._0_4_ = auVar3._0_4_ + ___xmm_00000007000000060000000500000004;
    auVar1._4_4_ = auVar3._4_4_ + _UNK_150631eb4;
    auVar1._8_4_ = auVar3._8_4_ + _UNK_150631eb8;
    auVar1._12_4_ = auVar3._12_4_ + _UNK_150631ebc;
    auVar2 = vpshufd_avx(ZEXT416(param_6),0);
    auVar3 = vpcmpgtd_avx(auVar2,auVar1);
    auVar2 = vpcmpgtd_avx(auVar2,auVar4);
    auVar42._16_16_ = auVar3;
    auVar42._0_16_ = auVar2;
    auVar26 = vshufps_avx(auVar26,auVar26,0);
    auVar29 = vmaskmovps_avx(auVar42,*(undefined1 (*) [32])(param_1 + (int)((uVar11 + uVar21) * 4)))
    ;
    auVar25._16_16_ = auVar26;
    auVar25._0_16_ = auVar26;
    auVar35 = vsubps_avx(auVar25,auVar29);
    auVar26 = vpshufd_avx(ZEXT416(param_6 + param_3),0);
    auVar3 = vpsubd_avx(auVar26,auVar1);
    auVar26 = vpsubd_avx(auVar26,auVar4);
    auVar30._16_16_ = auVar3;
    auVar30._0_16_ = auVar26;
    auVar29 = vcvtdq2ps_avx(auVar30);
    auVar29 = vdivps_avx(auVar35,auVar29);
    auVar29 = vmaskmovps_avx(auVar42,auVar29);
    *(undefined1 (*) [32])(param_4 + (int)(uVar21 * 4)) = auVar29;
  }
  return;
}

// ArrayGetEuclideanNorm_avx @ 140a294a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetEuclideanNorm_avx(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [64];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  
  uVar5 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    auVar9 = ZEXT1632(ZEXT816(0));
    auVar8 = ZEXT1632(ZEXT816(0));
    if ((int)param_3 < 1) goto LAB_140a29546;
  }
  else {
    auVar10 = ZEXT864(0);
    uVar7 = 0;
    uVar6 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar7);
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar8._0_4_ = auVar10._0_4_ + *pfVar1 * *pfVar1;
      auVar8._4_4_ = auVar10._4_4_ + pfVar1[1] * pfVar1[1];
      auVar8._8_4_ = auVar10._8_4_ + pfVar1[2] * pfVar1[2];
      auVar8._12_4_ = auVar10._12_4_ + pfVar1[3] * pfVar1[3];
      auVar8._16_4_ = auVar10._16_4_ + *pfVar2 * *pfVar2;
      auVar8._20_4_ = auVar10._20_4_ + pfVar2[1] * pfVar2[1];
      auVar8._24_4_ = auVar10._24_4_ + pfVar2[2] * pfVar2[2];
      auVar8._28_4_ = auVar10._28_4_ + pfVar2[3] * pfVar2[3];
      auVar10 = ZEXT3264(auVar8);
      uVar6 = uVar6 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    auVar9 = auVar8;
    if ((int)param_3 <= (int)uVar6) goto LAB_140a29546;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar11._16_16_ = auVar3;
  auVar11._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar3;
  auVar12._0_16_ = auVar4;
  auVar8 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + (int)((uint)uVar6 << 2)));
  auVar13._0_4_ = auVar8._0_4_ * auVar8._0_4_;
  auVar13._4_4_ = auVar8._4_4_ * auVar8._4_4_;
  auVar13._8_4_ = auVar8._8_4_ * auVar8._8_4_;
  auVar13._12_4_ = auVar8._12_4_ * auVar8._12_4_;
  auVar13._16_4_ = auVar8._16_4_ * auVar8._16_4_;
  auVar13._20_4_ = auVar8._20_4_ * auVar8._20_4_;
  auVar13._24_4_ = auVar8._24_4_ * auVar8._24_4_;
  auVar13._28_4_ = auVar8._28_4_ * auVar8._28_4_;
  auVar14._4_4_ = __real_80000000;
  auVar14._0_4_ = __real_80000000;
  auVar14._8_4_ = __real_80000000;
  auVar14._12_4_ = __real_80000000;
  auVar14._16_4_ = __real_80000000;
  auVar14._20_4_ = __real_80000000;
  auVar14._24_4_ = __real_80000000;
  auVar14._28_4_ = __real_80000000;
  auVar11 = vblendvps_avx(auVar14,auVar13,auVar12);
  auVar8._0_4_ = auVar9._0_4_ + auVar11._0_4_;
  auVar8._4_4_ = auVar9._4_4_ + auVar11._4_4_;
  auVar8._8_4_ = auVar9._8_4_ + auVar11._8_4_;
  auVar8._12_4_ = auVar9._12_4_ + auVar11._12_4_;
  auVar8._16_4_ = auVar9._16_4_ + auVar11._16_4_;
  auVar8._20_4_ = auVar9._20_4_ + auVar11._20_4_;
  auVar8._24_4_ = auVar9._24_4_ + auVar11._24_4_;
  auVar8._28_4_ = auVar9._28_4_ + auVar11._28_4_;
LAB_140a29546:
  auVar9 = vhaddps_avx(auVar8,auVar8);
  auVar9 = vhaddps_avx(auVar9,auVar9);
  *param_2 = SQRT(auVar9._0_4_ + auVar9._16_4_);
  return;
}

// ArrayAbs_avx @ 140a29580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAbs_avx(longlong param_1,longlong param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar14 [32];
  undefined1 auVar13 [32];
  
  uVar4 = __real_7fffffff;
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
      uVar9 = (ulonglong)uVar8;
      puVar1 = (uint *)(param_1 + uVar9);
      puVar2 = (uint *)(param_1 + 0x10 + uVar9);
      auVar12._0_4_ = *puVar1 & uVar4;
      auVar12._4_4_ = puVar1[1] & uVar4;
      auVar12._8_4_ = puVar1[2] & uVar4;
      auVar12._12_4_ = puVar1[3] & uVar4;
      auVar13._16_4_ = *puVar2 & uVar4;
      auVar13._0_16_ = auVar12;
      auVar13._20_4_ = puVar2[1] & uVar4;
      auVar13._24_4_ = puVar2[2] & uVar4;
      auVar13._28_4_ = puVar2[3] & uVar4;
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar9) = auVar13._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar9) = auVar12;
      uVar6 = uVar6 + 8;
      uVar8 = uVar8 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar6) {
      return;
    }
  }
  auVar12 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar10._16_16_ = auVar12;
  auVar10._0_16_ = auVar12;
  auVar3 = vpshufd_avx(ZEXT416(param_3),0);
  auVar12 = vpcmpgtd_avx(auVar3,SUB3216(auVar10 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar3 = vpcmpgtd_avx(auVar3,SUB3216(auVar10 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar11._16_16_ = auVar12;
  auVar11._0_16_ = auVar3;
  lVar7 = (longlong)(int)((uint)uVar6 << 2);
  auVar13 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar14._0_4_ =
       auVar13._0_4_ & ___ymm_7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff;
  auVar14._4_4_ = auVar13._4_4_ & _UNK_150b50ee4;
  auVar14._8_4_ = auVar13._8_4_ & _UNK_150b50ee8;
  auVar14._12_4_ = auVar13._12_4_ & _UNK_150b50eec;
  auVar14._16_4_ = auVar13._16_4_ & _UNK_150b50ef0;
  auVar14._20_4_ = auVar13._20_4_ & _UNK_150b50ef4;
  auVar14._24_4_ = auVar13._24_4_ & _UNK_150b50ef8;
  auVar14._28_4_ = auVar13._28_4_ & _UNK_150b50efc;
  auVar13 = vmaskmovps_avx(auVar11,auVar14);
  *(undefined1 (*) [32])(param_2 + lVar7) = auVar13;
  return;
}

// ArrayAbsInPlace_avx @ 140a29650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAbsInPlace_avx(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar14 [32];
  undefined1 auVar13 [32];
  
  uVar4 = __real_7fffffff;
  uVar5 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar8 = 0;
    uVar6 = 0;
    do {
      uVar9 = (ulonglong)uVar8;
      puVar1 = (uint *)(param_1 + uVar9);
      puVar2 = (uint *)(param_1 + 0x10 + uVar9);
      auVar12._0_4_ = *puVar1 & uVar4;
      auVar12._4_4_ = puVar1[1] & uVar4;
      auVar12._8_4_ = puVar1[2] & uVar4;
      auVar12._12_4_ = puVar1[3] & uVar4;
      auVar13._16_4_ = *puVar2 & uVar4;
      auVar13._0_16_ = auVar12;
      auVar13._20_4_ = puVar2[1] & uVar4;
      auVar13._24_4_ = puVar2[2] & uVar4;
      auVar13._28_4_ = puVar2[3] & uVar4;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar9) = auVar13._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar9) = auVar12;
      uVar6 = uVar6 + 8;
      uVar8 = uVar8 + 0x20;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar6) {
      return;
    }
  }
  auVar12 = vpshufd_avx(ZEXT416((uint)uVar6),0);
  auVar10._16_16_ = auVar12;
  auVar10._0_16_ = auVar12;
  auVar3 = vpshufd_avx(ZEXT416(param_2),0);
  auVar12 = vpcmpgtd_avx(auVar3,SUB3216(auVar10 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar3 = vpcmpgtd_avx(auVar3,SUB3216(auVar10 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar11._16_16_ = auVar12;
  auVar11._0_16_ = auVar3;
  lVar7 = (longlong)(int)((uint)uVar6 << 2);
  auVar13 = vmaskmovps_avx(auVar11,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar14._0_4_ =
       auVar13._0_4_ & ___ymm_7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff;
  auVar14._4_4_ = auVar13._4_4_ & _UNK_150b50ee4;
  auVar14._8_4_ = auVar13._8_4_ & _UNK_150b50ee8;
  auVar14._12_4_ = auVar13._12_4_ & _UNK_150b50eec;
  auVar14._16_4_ = auVar13._16_4_ & _UNK_150b50ef0;
  auVar14._20_4_ = auVar13._20_4_ & _UNK_150b50ef4;
  auVar14._24_4_ = auVar13._24_4_ & _UNK_150b50ef8;
  auVar14._28_4_ = auVar13._28_4_ & _UNK_150b50efc;
  auVar13 = vmaskmovps_avx(auVar11,auVar14);
  *(undefined1 (*) [32])(param_1 + lVar7) = auVar13;
  return;
}

// ArrayClampMinInPlace_avx @ 140a29720

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampMinInPlace_avx(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [32];
  
  uVar3 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  auVar11 = in_ZMM1._0_16_;
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar2 = vshufps_avx(auVar11,auVar11,0);
    auVar8._16_16_ = auVar2;
    auVar8._0_16_ = auVar2;
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar13._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar13._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar13 = vmaxps_avx(auVar8,auVar13);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar13._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar13._0_16_;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  auVar2 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar2;
  auVar9._0_16_ = auVar2;
  auVar1 = vpshufd_avx(ZEXT416(param_3),0);
  auVar2 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar1 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar2;
  auVar10._0_16_ = auVar1;
  auVar11 = vshufps_avx(auVar11,auVar11,0);
  auVar12._16_16_ = auVar11;
  auVar12._0_16_ = auVar11;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar8 = vmaxps_avx(auVar12,auVar8);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArrayClampMaxInPlace_avx @ 140a297f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampMaxInPlace_avx(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [32];
  
  uVar3 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  auVar11 = in_ZMM1._0_16_;
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar2 = vshufps_avx(auVar11,auVar11,0);
    auVar8._16_16_ = auVar2;
    auVar8._0_16_ = auVar2;
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar13._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar13._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar13 = vminps_avx(auVar8,auVar13);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar13._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar13._0_16_;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  auVar2 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar2;
  auVar9._0_16_ = auVar2;
  auVar1 = vpshufd_avx(ZEXT416(param_3),0);
  auVar2 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar1 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar2;
  auVar10._0_16_ = auVar1;
  auVar11 = vshufps_avx(auVar11,auVar11,0);
  auVar12._16_16_ = auVar11;
  auVar12._0_16_ = auVar11;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar8 = vminps_avx(auVar12,auVar8);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArrayClampInPlace_avx @ 140a298c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampInPlace_avx(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  
  uVar3 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar3 = param_4;
  }
  auVar11 = in_ZMM1._0_16_;
  auVar13 = in_ZMM2._0_16_;
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar2 = vshufps_avx(auVar11,auVar11,0);
    auVar8._16_16_ = auVar2;
    auVar8._0_16_ = auVar2;
    auVar2 = vshufps_avx(auVar13,auVar13,0);
    auVar15._16_16_ = auVar2;
    auVar15._0_16_ = auVar2;
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar16._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar16._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar16 = vmaxps_avx(auVar16,auVar8);
      auVar16 = vminps_avx(auVar16,auVar15);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar16._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar16._0_16_;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar2 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar2;
  auVar9._0_16_ = auVar2;
  auVar1 = vpshufd_avx(ZEXT416(param_4),0);
  auVar2 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar1 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar2;
  auVar10._0_16_ = auVar1;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar11 = vshufps_avx(auVar11,auVar11,0);
  auVar12._16_16_ = auVar11;
  auVar12._0_16_ = auVar11;
  auVar8 = vmaxps_avx(auVar8,auVar12);
  auVar11 = vshufps_avx(auVar13,auVar13,0);
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar11;
  auVar8 = vminps_avx(auVar8,auVar14);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArrayMinMaxNormalize_avx @ 140a299b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMinMaxNormalize_avx(undefined4 *param_1,longlong param_2,uint param_3)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  
  uVar1 = *param_1;
  auVar9._4_4_ = uVar1;
  auVar9._0_4_ = uVar1;
  auVar9._8_4_ = uVar1;
  auVar9._12_4_ = uVar1;
  auVar9._16_4_ = uVar1;
  auVar9._20_4_ = uVar1;
  auVar9._24_4_ = uVar1;
  auVar9._28_4_ = uVar1;
  uVar6 = param_3 + 6;
  if (-1 < (int)(param_3 - 1)) {
    uVar6 = param_3 - 1;
  }
  uVar6 = uVar6 & 0xfffffff8 | 1;
  uVar4 = 1;
  auVar15 = auVar9;
  if ((int)uVar6 < 2) {
    if ((int)param_3 < 2) goto LAB_140a29a6f;
  }
  else {
    uVar4 = 1;
    uVar7 = 4;
    do {
      auVar13._16_16_ = *(undefined1 (*) [16])((longlong)param_1 + (ulonglong)uVar7 + 0x10);
      auVar13._0_16_ = *(undefined1 (*) [16])((longlong)param_1 + (ulonglong)uVar7);
      auVar9 = vmaxps_avx(auVar9,auVar13);
      auVar15 = vminps_avx(auVar15,auVar13);
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < uVar6);
    if ((int)param_3 <= (int)uVar4) goto LAB_140a29a6f;
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar12._0_4_ = auVar3._0_4_ + (int)__xmm_00000003000000020000000100000000;
  auVar12._4_4_ = auVar3._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
  auVar12._8_4_ = auVar3._8_4_ + _UNK_150631e08;
  auVar12._12_4_ = auVar3._12_4_ + _UNK_150631e0c;
  auVar2._0_4_ = auVar3._0_4_ + ___xmm_00000007000000060000000500000004;
  auVar2._4_4_ = auVar3._4_4_ + _UNK_150631eb4;
  auVar2._8_4_ = auVar3._8_4_ + _UNK_150631eb8;
  auVar2._12_4_ = auVar3._12_4_ + _UNK_150631ebc;
  auVar3 = vpshufd_avx(ZEXT416(param_3),0);
  auVar2 = vpcmpgtd_avx(auVar3,auVar2);
  auVar12 = vpcmpgtd_avx(auVar3,auVar12);
  auVar14._16_16_ = auVar2;
  auVar14._0_16_ = auVar12;
  auVar19 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])
                                    ((longlong)param_1 + (longlong)(int)((uint)uVar4 << 2)));
  auVar13 = vmaxps_avx(auVar9,auVar19);
  auVar9 = vblendvps_avx(auVar9,auVar13,auVar14);
  auVar13 = vminps_avx(auVar15,auVar19);
  auVar15 = vblendvps_avx(auVar15,auVar13,auVar14);
LAB_140a29a6f:
  auVar12 = vmaxps_avx(auVar9._16_16_,auVar9._0_16_);
  auVar2 = vshufpd_avx(auVar12,auVar12,1);
  auVar12 = vmaxps_avx(auVar2,auVar12);
  auVar2 = vmovshdup_avx(auVar12);
  auVar12 = vmaxss_avx(auVar2,auVar12);
  auVar2 = vminps_avx(auVar15._16_16_,auVar15._0_16_);
  auVar3 = vshufpd_avx(auVar2,auVar2,1);
  auVar2 = vminps_avx(auVar3,auVar2);
  auVar3 = vmovshdup_avx(auVar2);
  auVar2 = vminss_avx(auVar2,auVar3);
  auVar12 = vmaxss_avx(ZEXT416((uint)(auVar12._0_4_ - auVar2._0_4_)),ZEXT416(__real_322bcc77));
  auVar12 = ZEXT416((uint)(__real_3f800000 / auVar12._0_4_));
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
    auVar3 = vshufps_avx(auVar2,auVar2,0);
    auVar15._16_16_ = auVar3;
    auVar15._0_16_ = auVar3;
    auVar3 = vshufps_avx(auVar12,auVar12,0);
    uVar7 = 0;
    uVar4 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      auVar19._16_16_ = *(undefined1 (*) [16])((longlong)param_1 + uVar8 + 0x10);
      auVar19._0_16_ = *(undefined1 (*) [16])((longlong)param_1 + uVar8);
      auVar9 = vsubps_avx(auVar19,auVar15);
      auVar18._0_4_ = auVar3._0_4_ * auVar9._0_4_;
      auVar18._4_4_ = auVar3._4_4_ * auVar9._4_4_;
      auVar18._8_4_ = auVar3._8_4_ * auVar9._8_4_;
      auVar18._12_4_ = auVar3._12_4_ * auVar9._12_4_;
      auVar20._16_4_ = auVar3._0_4_ * auVar9._16_4_;
      auVar20._0_16_ = auVar18;
      auVar20._20_4_ = auVar3._4_4_ * auVar9._20_4_;
      auVar20._24_4_ = auVar3._8_4_ * auVar9._24_4_;
      auVar20._28_4_ = auVar3._12_4_ * auVar9._28_4_;
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar8) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar8) = auVar18;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar6 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar16._16_16_ = auVar3;
  auVar16._0_16_ = auVar3;
  auVar18 = vpshufd_avx(ZEXT416(param_3),0);
  auVar3 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar18 = vpcmpgtd_avx(auVar18,SUB3216(auVar16 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar17._16_16_ = auVar3;
  auVar17._0_16_ = auVar18;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar9 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])((longlong)param_1 + lVar5));
  auVar2 = vshufps_avx(auVar2,auVar2,0);
  auVar10._16_16_ = auVar2;
  auVar10._0_16_ = auVar2;
  auVar9 = vsubps_avx(auVar9,auVar10);
  auVar12 = vshufps_avx(auVar12,auVar12,0);
  auVar11._0_4_ = auVar12._0_4_ * auVar9._0_4_;
  auVar11._4_4_ = auVar12._4_4_ * auVar9._4_4_;
  auVar11._8_4_ = auVar12._8_4_ * auVar9._8_4_;
  auVar11._12_4_ = auVar12._12_4_ * auVar9._12_4_;
  auVar11._16_4_ = auVar12._0_4_ * auVar9._16_4_;
  auVar11._20_4_ = auVar12._4_4_ * auVar9._20_4_;
  auVar11._24_4_ = auVar12._8_4_ * auVar9._24_4_;
  auVar11._28_4_ = auVar12._12_4_ * auVar9._28_4_;
  auVar9 = vmaskmovps_avx(auVar17,auVar11);
  *(undefined1 (*) [32])(param_2 + lVar5) = auVar9;
  return;
}

// ArrayMultiply_avx @ 140a29bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiply_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_2 + uVar9);
      pfVar4 = (float *)(param_2 + 0x10 + uVar9);
      auVar11._0_4_ = *pfVar1 * *pfVar2;
      auVar11._4_4_ = pfVar1[1] * pfVar2[1];
      auVar11._8_4_ = pfVar1[2] * pfVar2[2];
      auVar11._12_4_ = pfVar1[3] * pfVar2[3];
      auVar12._16_4_ = *pfVar3 * *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] * pfVar4[1];
      auVar12._24_4_ = pfVar3[2] * pfVar4[2];
      auVar12._28_4_ = pfVar3[3] * pfVar4[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar9) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar9) = auVar11;
      uVar7 = uVar7 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_4),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ * auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ * auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ * auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ * auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ * auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ * auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ * auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ * auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_3 + lVar8) = auVar12;
  return;
}

// ArrayMultiplyInPlace_avx @ 140a29c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyInPlace_avx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar9 = 0;
    uVar7 = 0;
    do {
      uVar10 = (ulonglong)uVar9;
      pfVar1 = (float *)(param_1 + uVar10);
      pfVar3 = (float *)(param_1 + 0x10 + uVar10);
      pfVar2 = (float *)(param_2 + uVar10);
      pfVar4 = (float *)(param_2 + 0x10 + uVar10);
      auVar11._0_4_ = *pfVar1 * *pfVar2;
      auVar11._4_4_ = pfVar1[1] * pfVar2[1];
      auVar11._8_4_ = pfVar1[2] * pfVar2[2];
      auVar11._12_4_ = pfVar1[3] * pfVar2[3];
      auVar12._16_4_ = *pfVar3 * *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] * pfVar4[1];
      auVar12._24_4_ = pfVar3[2] * pfVar4[2];
      auVar12._28_4_ = pfVar3[3] * pfVar4[3];
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar10) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar10) = auVar11;
      uVar7 = uVar7 + 8;
      uVar9 = uVar9 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_3),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ * auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ * auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ * auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ * auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ * auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ * auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ * auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ * auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_2 + lVar8) = auVar12;
  return;
}

// ArrayComplexMultiplyInPlace_avx @ 140a29d60

void ArrayComplexMultiplyInPlace_avx(longlong param_1,longlong param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  undefined1 auVar15 [32];
  
  fVar2 = __real_3f800000bf800000._4_4_;
  fVar1 = (float)__real_3f800000bf800000;
  uVar8 = param_3 & 0xfffffff8;
  if (0 < (int)uVar8) {
    uVar11 = 0;
    uVar12 = 0;
    do {
      uVar10 = (ulonglong)uVar11;
      auVar14._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar10);
      auVar14._0_16_ = *(undefined1 (*) [16])(param_1 + uVar10);
      auVar5 = *(undefined1 (*) [16])(param_2 + uVar10);
      auVar6 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar10);
      auVar16._16_16_ = auVar6;
      auVar16._0_16_ = auVar5;
      auVar7 = vmovsldup_avx(auVar14);
      auVar14 = vmovshdup_avx(auVar14);
      auVar16 = vshufps_avx(auVar16,auVar16,0xb1);
      auVar13._0_4_ = auVar5._0_4_ * auVar7._0_4_ + auVar14._0_4_ * auVar16._0_4_ * fVar1;
      auVar13._4_4_ = auVar5._4_4_ * auVar7._4_4_ + auVar14._4_4_ * auVar16._4_4_ * fVar2;
      auVar13._8_4_ = auVar5._8_4_ * auVar7._8_4_ + auVar14._8_4_ * auVar16._8_4_ * fVar1;
      auVar13._12_4_ = auVar5._12_4_ * auVar7._12_4_ + auVar14._12_4_ * auVar16._12_4_ * fVar2;
      auVar15._16_4_ = auVar6._0_4_ * auVar7._16_4_ + auVar14._16_4_ * auVar16._16_4_ * fVar1;
      auVar15._0_16_ = auVar13;
      auVar15._20_4_ = auVar6._4_4_ * auVar7._20_4_ + auVar14._20_4_ * auVar16._20_4_ * fVar2;
      auVar15._24_4_ = auVar6._8_4_ * auVar7._24_4_ + auVar14._24_4_ * auVar16._24_4_ * fVar1;
      auVar15._28_4_ = auVar6._12_4_ * auVar7._28_4_ + auVar14._28_4_ * auVar16._28_4_ * fVar2;
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar10) = auVar15._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar10) = auVar13;
      uVar12 = uVar12 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar12 < uVar8);
  }
  if ((int)uVar8 < (int)param_3) {
    lVar9 = (longlong)(int)uVar8;
    do {
      fVar1 = *(float *)(param_1 + lVar9 * 4);
      fVar2 = *(float *)(param_1 + 4 + lVar9 * 4);
      fVar3 = *(float *)(param_2 + lVar9 * 4);
      fVar4 = *(float *)(param_2 + 4 + lVar9 * 4);
      *(float *)(param_2 + lVar9 * 4) = fVar1 * fVar3 - fVar2 * fVar4;
      *(float *)(param_2 + 4 + lVar9 * 4) = fVar3 * fVar2 + fVar1 * fVar4;
      lVar9 = lVar9 + 2;
    } while (lVar9 < (int)param_3);
  }
  return;
}

// ArrayComplexMultiplyAdd_avx @ 140a29e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyAdd_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [32];
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar17 [32];
  
  fVar7 = __real_3f800000bf800000._4_4_;
  fVar6 = (float)__real_3f800000bf800000;
  uVar8 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar8 = param_4;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar12 = 0;
    uVar9 = 0;
    do {
      uVar11 = (ulonglong)uVar12;
      auVar16._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar11);
      auVar16._0_16_ = *(undefined1 (*) [16])(param_1 + uVar11);
      auVar3 = *(undefined1 (*) [16])(param_2 + uVar11);
      auVar4 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar11);
      auVar19._16_16_ = auVar4;
      auVar19._0_16_ = auVar3;
      auVar13 = vmovsldup_avx(auVar16);
      auVar16 = vmovshdup_avx(auVar16);
      auVar19 = vshufps_avx(auVar19,auVar19,0xb1);
      pfVar1 = (float *)(param_3 + uVar11);
      pfVar2 = (float *)(param_3 + 0x10 + uVar11);
      auVar15._0_4_ = *pfVar1 + auVar3._0_4_ * auVar13._0_4_ + auVar16._0_4_ * auVar19._0_4_ * fVar6
      ;
      auVar15._4_4_ =
           pfVar1[1] + auVar3._4_4_ * auVar13._4_4_ + auVar16._4_4_ * auVar19._4_4_ * fVar7;
      auVar15._8_4_ =
           pfVar1[2] + auVar3._8_4_ * auVar13._8_4_ + auVar16._8_4_ * auVar19._8_4_ * fVar6;
      auVar15._12_4_ =
           pfVar1[3] + auVar3._12_4_ * auVar13._12_4_ + auVar16._12_4_ * auVar19._12_4_ * fVar7;
      auVar17._16_4_ =
           *pfVar2 + auVar4._0_4_ * auVar13._16_4_ + auVar16._16_4_ * auVar19._16_4_ * fVar6;
      auVar17._0_16_ = auVar15;
      auVar17._20_4_ =
           pfVar2[1] + auVar4._4_4_ * auVar13._20_4_ + auVar16._20_4_ * auVar19._20_4_ * fVar7;
      auVar17._24_4_ =
           pfVar2[2] + auVar4._8_4_ * auVar13._24_4_ + auVar16._24_4_ * auVar19._24_4_ * fVar6;
      auVar17._28_4_ =
           pfVar2[3] + auVar4._12_4_ * auVar13._28_4_ + auVar16._28_4_ * auVar19._28_4_ * fVar7;
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar11) = auVar17._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar11) = auVar15;
      uVar9 = uVar9 + 8;
      uVar12 = uVar12 + 0x20;
    } while (uVar9 < (uVar8 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar9) {
      return;
    }
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar9),0);
  auVar13._16_16_ = auVar3;
  auVar13._0_16_ = auVar3;
  auVar4 = vpshufd_avx(ZEXT416(param_4),0);
  auVar3 = vpcmpgtd_avx(auVar4,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar4 = vpcmpgtd_avx(auVar4,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar3;
  auVar14._0_16_ = auVar4;
  lVar10 = (longlong)(int)((uint)uVar9 << 2);
  auVar16 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar10));
  auVar17 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar10));
  auVar13 = vmovsldup_avx(auVar16);
  auVar16 = vmovshdup_avx(auVar16);
  auVar19 = vshufps_avx(auVar17,auVar17,0xb1);
  auVar5 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_3 + lVar10));
  auVar18._0_4_ =
       auVar5._0_4_ +
       auVar17._0_4_ * auVar13._0_4_ +
       auVar16._0_4_ * auVar19._0_4_ *
       ___ymm_3f800000bf8000003f800000bf8000003f800000bf8000003f800000bf800000;
  auVar18._4_4_ =
       auVar5._4_4_ + auVar17._4_4_ * auVar13._4_4_ + auVar16._4_4_ * auVar19._4_4_ * _UNK_150d5a824
  ;
  auVar18._8_4_ =
       auVar5._8_4_ + auVar17._8_4_ * auVar13._8_4_ + auVar16._8_4_ * auVar19._8_4_ * _UNK_150d5a828
  ;
  auVar18._12_4_ =
       auVar5._12_4_ +
       auVar17._12_4_ * auVar13._12_4_ + auVar16._12_4_ * auVar19._12_4_ * _UNK_150d5a82c;
  auVar18._16_4_ =
       auVar5._16_4_ +
       auVar17._16_4_ * auVar13._16_4_ + auVar16._16_4_ * auVar19._16_4_ * _UNK_150d5a830;
  auVar18._20_4_ =
       auVar5._20_4_ +
       auVar17._20_4_ * auVar13._20_4_ + auVar16._20_4_ * auVar19._20_4_ * _UNK_150d5a834;
  auVar18._24_4_ =
       auVar5._24_4_ +
       auVar17._24_4_ * auVar13._24_4_ + auVar16._24_4_ * auVar19._24_4_ * _UNK_150d5a838;
  auVar18._28_4_ =
       auVar5._28_4_ +
       auVar17._28_4_ * auVar13._28_4_ + auVar16._28_4_ * auVar19._28_4_ * _UNK_150d5a83c;
  auVar16 = vmaskmovps_avx(auVar14,auVar18);
  *(undefined1 (*) [32])(param_3 + lVar10) = auVar16;
  return;
}

// ArrayMultiplyByConstant_avx @ 140a29f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyByConstant_avx(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  
  uVar4 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar4 = param_4;
  }
  auVar11 = in_ZMM1._0_16_;
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar3 = vshufps_avx(auVar11,auVar11,0);
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      pfVar1 = (float *)(param_1 + uVar8);
      pfVar2 = (float *)(param_1 + 0x10 + uVar8);
      auVar13._0_4_ = auVar3._0_4_ * *pfVar1;
      auVar13._4_4_ = auVar3._4_4_ * pfVar1[1];
      auVar13._8_4_ = auVar3._8_4_ * pfVar1[2];
      auVar13._12_4_ = auVar3._12_4_ * pfVar1[3];
      auVar14._16_4_ = auVar3._0_4_ * *pfVar2;
      auVar14._0_16_ = auVar13;
      auVar14._20_4_ = auVar3._4_4_ * pfVar2[1];
      auVar14._24_4_ = auVar3._8_4_ * pfVar2[2];
      auVar14._28_4_ = auVar3._12_4_ * pfVar2[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar8) = auVar14._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar8) = auVar13;
      uVar5 = uVar5 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar5) {
      return;
    }
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar9._16_16_ = auVar3;
  auVar9._0_16_ = auVar3;
  auVar13 = vpshufd_avx(ZEXT416(param_4),0);
  auVar3 = vpcmpgtd_avx(auVar13,SUB3216(auVar9 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar13 = vpcmpgtd_avx(auVar13,SUB3216(auVar9 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar10._16_16_ = auVar3;
  auVar10._0_16_ = auVar13;
  auVar11 = vshufps_avx(auVar11,auVar11,0);
  lVar6 = (longlong)(int)((uint)uVar5 << 2);
  auVar14 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar12._0_4_ = auVar11._0_4_ * auVar14._0_4_;
  auVar12._4_4_ = auVar11._4_4_ * auVar14._4_4_;
  auVar12._8_4_ = auVar11._8_4_ * auVar14._8_4_;
  auVar12._12_4_ = auVar11._12_4_ * auVar14._12_4_;
  auVar12._16_4_ = auVar11._0_4_ * auVar14._16_4_;
  auVar12._20_4_ = auVar11._4_4_ * auVar14._20_4_;
  auVar12._24_4_ = auVar11._8_4_ * auVar14._24_4_;
  auVar12._28_4_ = auVar11._12_4_ * auVar14._28_4_;
  auVar14 = vmaskmovps_avx(auVar10,auVar12);
  *(undefined1 (*) [32])(param_3 + lVar6) = auVar14;
  return;
}

// ArrayMultiplyByConstantInPlace_avx @ 140a2a040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyByConstantInPlace_avx(longlong param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar12 [32];
  
  uVar4 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  auVar14 = in_ZMM2._0_16_;
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar3 = vshufps_avx(auVar14,auVar14,0);
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      pfVar1 = (float *)(param_1 + uVar8);
      pfVar2 = (float *)(param_1 + 0x10 + uVar8);
      auVar11._0_4_ = auVar3._0_4_ * *pfVar1;
      auVar11._4_4_ = auVar3._4_4_ * pfVar1[1];
      auVar11._8_4_ = auVar3._8_4_ * pfVar1[2];
      auVar11._12_4_ = auVar3._12_4_ * pfVar1[3];
      auVar12._16_4_ = auVar3._0_4_ * *pfVar2;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = auVar3._4_4_ * pfVar2[1];
      auVar12._24_4_ = auVar3._8_4_ * pfVar2[2];
      auVar12._28_4_ = auVar3._12_4_ * pfVar2[3];
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar8) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar8) = auVar11;
      uVar5 = uVar5 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar5) {
      return;
    }
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar9._16_16_ = auVar3;
  auVar9._0_16_ = auVar3;
  auVar11 = vpshufd_avx(ZEXT416(param_2),0);
  auVar3 = vpcmpgtd_avx(auVar11,SUB3216(auVar9 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar11 = vpcmpgtd_avx(auVar11,SUB3216(auVar9 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar10._16_16_ = auVar3;
  auVar10._0_16_ = auVar11;
  lVar6 = (longlong)(int)((uint)uVar5 << 2);
  auVar12 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar14 = vshufps_avx(auVar14,auVar14,0);
  auVar13._0_4_ = auVar14._0_4_ * auVar12._0_4_;
  auVar13._4_4_ = auVar14._4_4_ * auVar12._4_4_;
  auVar13._8_4_ = auVar14._8_4_ * auVar12._8_4_;
  auVar13._12_4_ = auVar14._12_4_ * auVar12._12_4_;
  auVar13._16_4_ = auVar14._0_4_ * auVar12._16_4_;
  auVar13._20_4_ = auVar14._4_4_ * auVar12._20_4_;
  auVar13._24_4_ = auVar14._8_4_ * auVar12._24_4_;
  auVar13._28_4_ = auVar14._12_4_ * auVar12._28_4_;
  auVar12 = vmaskmovps_avx(auVar10,auVar13);
  *(undefined1 (*) [32])(param_1 + lVar6) = auVar12;
  return;
}

// ArrayAddInPlace_avx @ 140a2a110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAddInPlace_avx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar9 = 0;
    uVar7 = 0;
    do {
      uVar10 = (ulonglong)uVar9;
      pfVar1 = (float *)(param_1 + uVar10);
      pfVar3 = (float *)(param_1 + 0x10 + uVar10);
      pfVar2 = (float *)(param_2 + uVar10);
      pfVar4 = (float *)(param_2 + 0x10 + uVar10);
      auVar11._0_4_ = *pfVar1 + *pfVar2;
      auVar11._4_4_ = pfVar1[1] + pfVar2[1];
      auVar11._8_4_ = pfVar1[2] + pfVar2[2];
      auVar11._12_4_ = pfVar1[3] + pfVar2[3];
      auVar12._16_4_ = *pfVar3 + *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] + pfVar4[1];
      auVar12._24_4_ = pfVar3[2] + pfVar4[2];
      auVar12._28_4_ = pfVar3[3] + pfVar4[3];
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar10) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar10) = auVar11;
      uVar7 = uVar7 + 8;
      uVar9 = uVar9 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_3),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ + auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ + auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ + auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ + auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ + auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ + auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ + auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ + auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_2 + lVar8) = auVar12;
  return;
}

// ArrayAddConstantInplace_avx @ 140a2a1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAddConstantInplace_avx(longlong param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar12 [32];
  
  uVar4 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  auVar14 = in_ZMM2._0_16_;
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar3 = vshufps_avx(auVar14,auVar14,0);
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      pfVar1 = (float *)(param_1 + uVar8);
      pfVar2 = (float *)(param_1 + 0x10 + uVar8);
      auVar11._0_4_ = auVar3._0_4_ + *pfVar1;
      auVar11._4_4_ = auVar3._4_4_ + pfVar1[1];
      auVar11._8_4_ = auVar3._8_4_ + pfVar1[2];
      auVar11._12_4_ = auVar3._12_4_ + pfVar1[3];
      auVar12._16_4_ = auVar3._0_4_ + *pfVar2;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = auVar3._4_4_ + pfVar2[1];
      auVar12._24_4_ = auVar3._8_4_ + pfVar2[2];
      auVar12._28_4_ = auVar3._12_4_ + pfVar2[3];
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar8) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar8) = auVar11;
      uVar5 = uVar5 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar5) {
      return;
    }
  }
  auVar3 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar9._16_16_ = auVar3;
  auVar9._0_16_ = auVar3;
  auVar11 = vpshufd_avx(ZEXT416(param_2),0);
  auVar3 = vpcmpgtd_avx(auVar11,SUB3216(auVar9 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar11 = vpcmpgtd_avx(auVar11,SUB3216(auVar9 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar10._16_16_ = auVar3;
  auVar10._0_16_ = auVar11;
  lVar6 = (longlong)(int)((uint)uVar5 << 2);
  auVar12 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar14 = vshufps_avx(auVar14,auVar14,0);
  auVar13._0_4_ = auVar14._0_4_ + auVar12._0_4_;
  auVar13._4_4_ = auVar14._4_4_ + auVar12._4_4_;
  auVar13._8_4_ = auVar14._8_4_ + auVar12._8_4_;
  auVar13._12_4_ = auVar14._12_4_ + auVar12._12_4_;
  auVar13._16_4_ = auVar14._0_4_ + auVar12._16_4_;
  auVar13._20_4_ = auVar14._4_4_ + auVar12._20_4_;
  auVar13._24_4_ = auVar14._8_4_ + auVar12._24_4_;
  auVar13._28_4_ = auVar14._12_4_ + auVar12._28_4_;
  auVar12 = vmaskmovps_avx(auVar10,auVar13);
  *(undefined1 (*) [32])(param_1 + lVar6) = auVar12;
  return;
}

// ArrayMultiplyAddInPlace_avx @ 140a2a2b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyAddInPlace_avx(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  auVar13 = in_ZMM1._0_16_;
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar5 = vshufps_avx(auVar13,auVar13,0);
    uVar9 = 0;
    uVar7 = 0;
    do {
      uVar10 = (ulonglong)uVar9;
      pfVar1 = (float *)(param_1 + uVar10);
      pfVar3 = (float *)(param_1 + 0x10 + uVar10);
      pfVar2 = (float *)(param_3 + uVar10);
      pfVar4 = (float *)(param_3 + 0x10 + uVar10);
      auVar15._0_4_ = *pfVar2 + auVar5._0_4_ * *pfVar1;
      auVar15._4_4_ = pfVar2[1] + auVar5._4_4_ * pfVar1[1];
      auVar15._8_4_ = pfVar2[2] + auVar5._8_4_ * pfVar1[2];
      auVar15._12_4_ = pfVar2[3] + auVar5._12_4_ * pfVar1[3];
      auVar16._16_4_ = *pfVar4 + auVar5._0_4_ * *pfVar3;
      auVar16._0_16_ = auVar15;
      auVar16._20_4_ = pfVar4[1] + auVar5._4_4_ * pfVar3[1];
      auVar16._24_4_ = pfVar4[2] + auVar5._8_4_ * pfVar3[2];
      auVar16._28_4_ = pfVar4[3] + auVar5._12_4_ * pfVar3[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar10) = auVar16._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar10) = auVar15;
      uVar7 = uVar7 + 8;
      uVar9 = uVar9 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar11._16_16_ = auVar5;
  auVar11._0_16_ = auVar5;
  auVar15 = vpshufd_avx(ZEXT416(param_4),0);
  auVar5 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar15 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar12._16_16_ = auVar5;
  auVar12._0_16_ = auVar15;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar16 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vshufps_avx(auVar13,auVar13,0);
  auVar11 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_3 + lVar8));
  auVar14._0_4_ = auVar11._0_4_ + auVar13._0_4_ * auVar16._0_4_;
  auVar14._4_4_ = auVar11._4_4_ + auVar13._4_4_ * auVar16._4_4_;
  auVar14._8_4_ = auVar11._8_4_ + auVar13._8_4_ * auVar16._8_4_;
  auVar14._12_4_ = auVar11._12_4_ + auVar13._12_4_ * auVar16._12_4_;
  auVar14._16_4_ = auVar11._16_4_ + auVar13._0_4_ * auVar16._16_4_;
  auVar14._20_4_ = auVar11._20_4_ + auVar13._4_4_ * auVar16._20_4_;
  auVar14._24_4_ = auVar11._24_4_ + auVar13._8_4_ * auVar16._24_4_;
  auVar14._28_4_ = auVar11._28_4_ + auVar13._12_4_ * auVar16._28_4_;
  auVar16 = vmaskmovps_avx(auVar12,auVar14);
  *(undefined1 (*) [32])(param_3 + lVar8) = auVar16;
  return;
}

// ArrayLerpAddInPlace_avx @ 140a2a3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpAddInPlace_avx
               (longlong param_1,undefined8 param_2,float param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  auVar15 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar14._0_4_ = (float)(int)(param_5 - 1);
  auVar14._4_12_ = in_ZMM3._4_12_;
  auVar12 = vmaxss_avx(auVar14,ZEXT416(__real_3f800000));
  auVar12._0_4_ = (param_3 - in_ZMM1._0_4_) / auVar12._0_4_;
  auVar12._4_12_ = SUB6012((undefined1  [60])0x0,0);
  uVar8 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar8 = param_5;
  }
  auVar14 = in_ZMM1._0_16_;
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar5 = vshufps_avx(auVar14,auVar14,0);
    auVar6 = vshufps_avx(auVar12,auVar12,0);
    uVar10 = 0;
    uVar9 = 0;
    do {
      auVar17 = vpshufd_avx(ZEXT416((uint)uVar9),0);
      auVar18._16_16_ = auVar17;
      auVar18._0_16_ = auVar17;
      auVar18 = vcvtdq2ps_avx(auVar18 | auVar15);
      uVar11 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar11);
      pfVar3 = (float *)(param_1 + 0x10 + uVar11);
      pfVar2 = (float *)(param_4 + uVar11);
      pfVar4 = (float *)(param_4 + 0x10 + uVar11);
      auVar17._0_4_ = *pfVar2 + (auVar5._0_4_ + auVar6._0_4_ * auVar18._0_4_) * *pfVar1;
      auVar17._4_4_ = pfVar2[1] + (auVar5._4_4_ + auVar6._4_4_ * auVar18._4_4_) * pfVar1[1];
      auVar17._8_4_ = pfVar2[2] + (auVar5._8_4_ + auVar6._8_4_ * auVar18._8_4_) * pfVar1[2];
      auVar17._12_4_ = pfVar2[3] + (auVar5._12_4_ + auVar6._12_4_ * auVar18._12_4_) * pfVar1[3];
      auVar19._16_4_ = *pfVar4 + (auVar5._0_4_ + auVar6._0_4_ * auVar18._16_4_) * *pfVar3;
      auVar19._0_16_ = auVar17;
      auVar19._20_4_ = pfVar4[1] + (auVar5._4_4_ + auVar6._4_4_ * auVar18._20_4_) * pfVar3[1];
      auVar19._24_4_ = pfVar4[2] + (auVar5._8_4_ + auVar6._8_4_ * auVar18._24_4_) * pfVar3[2];
      auVar19._28_4_ = pfVar4[3] + (auVar5._12_4_ + auVar6._12_4_ * auVar18._28_4_) * pfVar3[3];
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar11) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar11) = auVar17;
      uVar9 = uVar9 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar9 < (uVar8 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar9) {
      return;
    }
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar9),0);
  auVar15._16_16_ = auVar5;
  auVar15._0_16_ = auVar5;
  auVar15 = auVar15 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar6 = vpshufd_avx(ZEXT416(param_5),0);
  auVar5 = vpcmpgtd_avx(auVar6,auVar15._16_16_);
  auVar6 = vpcmpgtd_avx(auVar6,auVar15._0_16_);
  auVar16._16_16_ = auVar5;
  auVar16._0_16_ = auVar6;
  auVar14 = vshufps_avx(auVar14,auVar14,0);
  auVar15 = vcvtdq2ps_avx(auVar15);
  auVar12 = vshufps_avx(auVar12,auVar12,0);
  lVar7 = (longlong)(int)((uint)uVar9 << 2);
  auVar18 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar19 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_4 + lVar7));
  auVar13._0_4_ = auVar19._0_4_ + (auVar14._0_4_ + auVar12._0_4_ * auVar15._0_4_) * auVar18._0_4_;
  auVar13._4_4_ = auVar19._4_4_ + (auVar14._4_4_ + auVar12._4_4_ * auVar15._4_4_) * auVar18._4_4_;
  auVar13._8_4_ = auVar19._8_4_ + (auVar14._8_4_ + auVar12._8_4_ * auVar15._8_4_) * auVar18._8_4_;
  auVar13._12_4_ =
       auVar19._12_4_ + (auVar14._12_4_ + auVar12._12_4_ * auVar15._12_4_) * auVar18._12_4_;
  auVar13._16_4_ =
       auVar19._16_4_ + (auVar14._0_4_ + auVar12._0_4_ * auVar15._16_4_) * auVar18._16_4_;
  auVar13._20_4_ =
       auVar19._20_4_ + (auVar14._4_4_ + auVar12._4_4_ * auVar15._20_4_) * auVar18._20_4_;
  auVar13._24_4_ =
       auVar19._24_4_ + (auVar14._8_4_ + auVar12._8_4_ * auVar15._24_4_) * auVar18._24_4_;
  auVar13._28_4_ =
       auVar19._28_4_ + (auVar14._12_4_ + auVar12._12_4_ * auVar15._28_4_) * auVar18._28_4_;
  auVar15 = vmaskmovps_avx(auVar16,auVar13);
  *(undefined1 (*) [32])(param_4 + lVar7) = auVar15;
  return;
}

// ArraySubtract_avx @ 140a2a500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtract_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar3 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar3 = param_4;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
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
      auVar8._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar6);
      auVar8._0_16_ = *(undefined1 (*) [16])(param_1 + uVar6);
      auVar11._16_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar6);
      auVar11._0_16_ = *(undefined1 (*) [16])(param_2 + uVar6);
      auVar8 = vsubps_avx(auVar8,auVar11);
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar6) = auVar8._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar6) = auVar8._0_16_;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_4),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar11 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar11);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_3 + lVar5) = auVar8;
  return;
}

// ArraySubtractInPlace1_avx @ 140a2a5d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractInPlace1_avx(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar3 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
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
      auVar8._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar8._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar11._16_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar7);
      auVar11._0_16_ = *(undefined1 (*) [16])(param_2 + uVar7);
      auVar8 = vsubps_avx(auVar8,auVar11);
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar7) = auVar8._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar7) = auVar8._0_16_;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_3),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar11 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar11);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_2 + lVar5) = auVar8;
  return;
}

// ArraySubtractInPlace2_avx @ 140a2a6a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractInPlace2_avx(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  
  uVar3 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
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
      auVar8._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar8._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar11._16_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar7);
      auVar11._0_16_ = *(undefined1 (*) [16])(param_2 + uVar7);
      auVar8 = vsubps_avx(auVar8,auVar11);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar8._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar8._0_16_;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_3),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar11 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_2 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar11);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArraySubtractByConstantInPlace_avx @ 140a2a770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractByConstantInPlace_avx(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar13 [32];
  
  uVar3 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  auVar11 = in_ZMM1._0_16_;
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar2 = vshufps_avx(auVar11,auVar11,0);
    auVar8._16_16_ = auVar2;
    auVar8._0_16_ = auVar2;
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar13._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar13._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar13 = vsubps_avx(auVar13,auVar8);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar13._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar13._0_16_;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  auVar2 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar2;
  auVar9._0_16_ = auVar2;
  auVar1 = vpshufd_avx(ZEXT416(param_3),0);
  auVar2 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar1 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar2;
  auVar10._0_16_ = auVar1;
  auVar11 = vshufps_avx(auVar11,auVar11,0);
  auVar12._16_16_ = auVar11;
  auVar12._0_16_ = auVar11;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar8 = vsubps_avx(auVar8,auVar12);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArraySquare_avx @ 140a2a840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySquare_avx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar10 [32];
  
  uVar4 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      pfVar1 = (float *)(param_1 + uVar8);
      pfVar2 = (float *)(param_1 + 0x10 + uVar8);
      auVar9._0_4_ = *pfVar1 * *pfVar1;
      auVar9._4_4_ = pfVar1[1] * pfVar1[1];
      auVar9._8_4_ = pfVar1[2] * pfVar1[2];
      auVar9._12_4_ = pfVar1[3] * pfVar1[3];
      auVar10._16_4_ = *pfVar2 * *pfVar2;
      auVar10._0_16_ = auVar9;
      auVar10._20_4_ = pfVar2[1] * pfVar2[1];
      auVar10._24_4_ = pfVar2[2] * pfVar2[2];
      auVar10._28_4_ = pfVar2[3] * pfVar2[3];
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar8) = auVar10._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar8) = auVar9;
      uVar5 = uVar5 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar5) {
      return;
    }
  }
  auVar9 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar11._16_16_ = auVar9;
  auVar11._0_16_ = auVar9;
  auVar3 = vpshufd_avx(ZEXT416(param_3),0);
  auVar9 = vpcmpgtd_avx(auVar3,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar3 = vpcmpgtd_avx(auVar3,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar9;
  auVar12._0_16_ = auVar3;
  lVar6 = (longlong)(int)((uint)uVar5 << 2);
  auVar10 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar13._0_4_ = auVar10._0_4_ * auVar10._0_4_;
  auVar13._4_4_ = auVar10._4_4_ * auVar10._4_4_;
  auVar13._8_4_ = auVar10._8_4_ * auVar10._8_4_;
  auVar13._12_4_ = auVar10._12_4_ * auVar10._12_4_;
  auVar13._16_4_ = auVar10._16_4_ * auVar10._16_4_;
  auVar13._20_4_ = auVar10._20_4_ * auVar10._20_4_;
  auVar13._24_4_ = auVar10._24_4_ * auVar10._24_4_;
  auVar13._28_4_ = auVar10._28_4_ * auVar10._28_4_;
  auVar10 = vmaskmovps_avx(auVar12,auVar13);
  *(undefined1 (*) [32])(param_2 + lVar6) = auVar10;
  return;
}

// ArraySquareInPlace_avx @ 140a2a8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySquareInPlace_avx(longlong param_1,uint param_2)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar10 [32];
  
  uVar4 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      pfVar1 = (float *)(param_1 + uVar8);
      pfVar2 = (float *)(param_1 + 0x10 + uVar8);
      auVar9._0_4_ = *pfVar1 * *pfVar1;
      auVar9._4_4_ = pfVar1[1] * pfVar1[1];
      auVar9._8_4_ = pfVar1[2] * pfVar1[2];
      auVar9._12_4_ = pfVar1[3] * pfVar1[3];
      auVar10._16_4_ = *pfVar2 * *pfVar2;
      auVar10._0_16_ = auVar9;
      auVar10._20_4_ = pfVar2[1] * pfVar2[1];
      auVar10._24_4_ = pfVar2[2] * pfVar2[2];
      auVar10._28_4_ = pfVar2[3] * pfVar2[3];
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar8) = auVar10._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar8) = auVar9;
      uVar5 = uVar5 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar5) {
      return;
    }
  }
  auVar9 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar11._16_16_ = auVar9;
  auVar11._0_16_ = auVar9;
  auVar3 = vpshufd_avx(ZEXT416(param_2),0);
  auVar9 = vpcmpgtd_avx(auVar3,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar3 = vpcmpgtd_avx(auVar3,SUB3216(auVar11 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar12._16_16_ = auVar9;
  auVar12._0_16_ = auVar3;
  lVar6 = (longlong)(int)((uint)uVar5 << 2);
  auVar10 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar13._0_4_ = auVar10._0_4_ * auVar10._0_4_;
  auVar13._4_4_ = auVar10._4_4_ * auVar10._4_4_;
  auVar13._8_4_ = auVar10._8_4_ * auVar10._8_4_;
  auVar13._12_4_ = auVar10._12_4_ * auVar10._12_4_;
  auVar13._16_4_ = auVar10._16_4_ * auVar10._16_4_;
  auVar13._20_4_ = auVar10._20_4_ * auVar10._20_4_;
  auVar13._24_4_ = auVar10._24_4_ * auVar10._24_4_;
  auVar13._28_4_ = auVar10._28_4_ * auVar10._28_4_;
  auVar10 = vmaskmovps_avx(auVar12,auVar13);
  *(undefined1 (*) [32])(param_1 + lVar6) = auVar10;
  return;
}

// ArraySqrtInPlace_avx @ 140a2a9a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySqrtInPlace_avx(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  
  uVar3 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar8._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar8._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar8 = vsqrtps_avx(auVar8);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar8._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar8._0_16_;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar4) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_2),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar8 = vsqrtps_avx(auVar8);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArrayComplexConjugate_avx @ 140a2aa50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexConjugate_avx(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar3 = __real_80000000;
  uVar4 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar4 = param_3;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      auVar1 = *(undefined1 (*) [16])(param_1 + uVar8);
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x10 + uVar8);
      auVar11._16_16_ = auVar2;
      auVar11._0_16_ = auVar1;
      auVar12._0_4_ = auVar1._0_4_ ^ uVar3;
      auVar12._4_4_ = auVar1._4_4_ ^ uVar3;
      auVar12._8_4_ = auVar1._8_4_ ^ uVar3;
      auVar12._12_4_ = auVar1._12_4_ ^ uVar3;
      auVar12._16_4_ = auVar2._0_4_ ^ uVar3;
      auVar12._20_4_ = auVar2._4_4_ ^ uVar3;
      auVar12._24_4_ = auVar2._8_4_ ^ uVar3;
      auVar12._28_4_ = auVar2._12_4_ ^ uVar3;
      auVar11 = vblendps_avx(auVar11,auVar12,0xaa);
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar8) = auVar11._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar8) = auVar11._0_16_;
      uVar5 = uVar5 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar5) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_3),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar6 = (longlong)(int)((uint)uVar5 << 2);
  auVar11 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar13._0_4_ =
       auVar11._0_4_ ^ ___ymm_8000000080000000800000008000000080000000800000008000000080000000;
  auVar13._4_4_ = auVar11._4_4_ ^ _UNK_150b50f64;
  auVar13._8_4_ = auVar11._8_4_ ^ _UNK_150b50f68;
  auVar13._12_4_ = auVar11._12_4_ ^ _UNK_150b50f6c;
  auVar13._16_4_ = auVar11._16_4_ ^ _UNK_150b50f70;
  auVar13._20_4_ = auVar11._20_4_ ^ _UNK_150b50f74;
  auVar13._24_4_ = auVar11._24_4_ ^ _UNK_150b50f78;
  auVar13._28_4_ = auVar11._28_4_ ^ _UNK_150b50f7c;
  auVar11 = vblendps_avx(auVar11,auVar13,0xaa);
  auVar11 = vmaskmovps_avx(auVar10,auVar11);
  *(undefined1 (*) [32])(param_2 + lVar6) = auVar11;
  return;
}

// ArrayComplexConjugateInPlace_avx @ 140a2ab20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexConjugateInPlace_avx(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  
  uVar3 = __real_80000000;
  uVar4 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      auVar1 = *(undefined1 (*) [16])(param_1 + uVar8);
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x10 + uVar8);
      auVar11._16_16_ = auVar2;
      auVar11._0_16_ = auVar1;
      auVar12._0_4_ = auVar1._0_4_ ^ uVar3;
      auVar12._4_4_ = auVar1._4_4_ ^ uVar3;
      auVar12._8_4_ = auVar1._8_4_ ^ uVar3;
      auVar12._12_4_ = auVar1._12_4_ ^ uVar3;
      auVar12._16_4_ = auVar2._0_4_ ^ uVar3;
      auVar12._20_4_ = auVar2._4_4_ ^ uVar3;
      auVar12._24_4_ = auVar2._8_4_ ^ uVar3;
      auVar12._28_4_ = auVar2._12_4_ ^ uVar3;
      auVar11 = vblendps_avx(auVar11,auVar12,0xaa);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar8) = auVar11._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar8) = auVar11._0_16_;
      uVar5 = uVar5 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar5) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_2),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar6 = (longlong)(int)((uint)uVar5 << 2);
  auVar11 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar13._0_4_ =
       auVar11._0_4_ ^ ___ymm_8000000080000000800000008000000080000000800000008000000080000000;
  auVar13._4_4_ = auVar11._4_4_ ^ _UNK_150b50f64;
  auVar13._8_4_ = auVar11._8_4_ ^ _UNK_150b50f68;
  auVar13._12_4_ = auVar11._12_4_ ^ _UNK_150b50f6c;
  auVar13._16_4_ = auVar11._16_4_ ^ _UNK_150b50f70;
  auVar13._20_4_ = auVar11._20_4_ ^ _UNK_150b50f74;
  auVar13._24_4_ = auVar11._24_4_ ^ _UNK_150b50f78;
  auVar13._28_4_ = auVar11._28_4_ ^ _UNK_150b50f7c;
  auVar11 = vblendps_avx(auVar11,auVar13,0xaa);
  auVar11 = vmaskmovps_avx(auVar10,auVar11);
  *(undefined1 (*) [32])(param_1 + lVar6) = auVar11;
  return;
}

// ArrayMagnitudeToDecibelInPlace_avx @ 140a2abf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMagnitudeToDecibelInPlace_avx(longlong param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  float fVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar34 [32];
  float fVar41;
  undefined1 auVar35 [32];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [16];
  
  fVar25 = __real_3f317218;
  fVar24 = __real_3f000010;
  fVar23 = __real_3eaaa11c;
  fVar22 = __real_3e80fb87;
  iVar1 = __real_ffffff82;
  fVar21 = __real_410af967;
  fVar18 = __real_3f800000;
  fVar8 = (param_2 * __real_40135d8e) / __real_41a00000;
  auVar26 = ZEXT416((uint)(fVar8 * __real_3fb8aa3b));
  auVar26 = vroundss_avx(auVar26,auVar26,9);
  fVar11 = auVar26._0_4_;
  iVar2 = (int)fVar11;
  if (iVar2 < 0x80) {
    fVar8 = fVar8 + fVar11 * __real_bf317200 + fVar11 * __real_b5bfbe8e;
    fVar8 = (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * __real_39907835 +
                                                                  __real_3aaaf7b5) + __real_3c09475d
                                                         ) + __real_3d2a9d49) + __real_3e2aab20) +
                              __real_3efffffd) + __real_3f800000) + __real_3f800000) *
            (float)(iVar2 * 0x800000 + 0x3f800000);
    auVar26 = SUB6416(ZEXT864(0),0);
  }
  else {
    auVar26 = SUB6416(ZEXT864(0),0);
    fVar8 = __real_7f800000;
  }
  if (-0x7f < iVar2) {
    auVar26 = ZEXT416((uint)fVar8);
  }
  uVar3 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar42 = vshufps_avx(auVar26,auVar26,0);
    auVar12._16_16_ = auVar42;
    auVar12._0_16_ = auVar42;
    uVar6 = 0;
    auVar14._4_4_ = __real_3f800000;
    auVar14._0_4_ = __real_3f800000;
    auVar14._8_4_ = __real_3f800000;
    auVar14._12_4_ = __real_3f800000;
    auVar14._16_4_ = __real_3f800000;
    auVar14._20_4_ = __real_3f800000;
    auVar14._24_4_ = __real_3f800000;
    auVar14._28_4_ = __real_3f800000;
    uVar4 = 0;
    auVar27._4_4_ = __real_ff800000;
    auVar27._0_4_ = __real_ff800000;
    auVar27._8_4_ = __real_ff800000;
    auVar27._12_4_ = __real_ff800000;
    auVar27._16_4_ = __real_ff800000;
    auVar27._20_4_ = __real_ff800000;
    auVar27._24_4_ = __real_ff800000;
    auVar27._28_4_ = __real_ff800000;
    auVar30._4_4_ = __real_7fc00000;
    auVar30._0_4_ = __real_7fc00000;
    auVar30._8_4_ = __real_7fc00000;
    auVar30._12_4_ = __real_7fc00000;
    auVar30._16_4_ = __real_7fc00000;
    auVar30._20_4_ = __real_7fc00000;
    auVar30._24_4_ = __real_7fc00000;
    auVar30._28_4_ = __real_7fc00000;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar32._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar32._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar9 = vmaxps_avx(auVar32,auVar12);
      auVar33 = vcmpps_avx(auVar9,ZEXT1232(ZEXT812(0)),2);
      auVar32 = vblendvps_avx(auVar9,auVar14,auVar33);
      auVar42 = vpsrad_avx(auVar32._0_16_,0x17);
      auVar45 = vpsrad_avx(auVar32._16_16_,0x17);
      auVar43._20_4_ = auVar45._4_4_ + iVar1;
      auVar43._16_4_ = auVar45._0_4_ + iVar1;
      auVar43._24_4_ = auVar45._8_4_ + iVar1;
      auVar43._28_4_ = auVar45._12_4_ + iVar1;
      auVar43._4_4_ = auVar42._4_4_ + iVar1;
      auVar43._0_4_ = auVar42._0_4_ + iVar1;
      auVar43._8_4_ = auVar42._8_4_ + iVar1;
      auVar43._12_4_ = auVar42._12_4_ + iVar1;
      auVar34._0_4_ =
           auVar32._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
      auVar34._4_4_ = auVar32._4_4_ & _UNK_150d5a944;
      auVar34._8_4_ = auVar32._8_4_ & _UNK_150d5a948;
      auVar34._12_4_ = auVar32._12_4_ & _UNK_150d5a94c;
      auVar34._16_4_ = auVar32._16_4_ & _UNK_150d5a950;
      auVar34._20_4_ = auVar32._20_4_ & _UNK_150d5a954;
      auVar34._24_4_ = auVar32._24_4_ & _UNK_150d5a958;
      auVar34._28_4_ = auVar32._28_4_ & _UNK_150d5a95c;
      auVar32 = vsubps_avx(auVar14,auVar34 | 
                                   ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                          );
      fVar8 = auVar32._0_4_;
      fVar11 = auVar32._4_4_;
      fVar36 = auVar32._8_4_;
      fVar37 = auVar32._12_4_;
      fVar38 = auVar32._16_4_;
      fVar39 = auVar32._20_4_;
      fVar40 = auVar32._24_4_;
      fVar41 = auVar32._28_4_;
      auVar35._0_4_ =
           fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) + 
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) + 
                                                  ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                  ) + 
                                                  ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                  ) + 
                                                  ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                                  ) + fVar22) + fVar23) + fVar24) + fVar18);
      auVar35._4_4_ =
           fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * 
                                                  (fVar11 * _UNK_150d5a964 + _UNK_150d5a984) +
                                                  _UNK_150d5a9a4) + _UNK_150d5a9c4) + _UNK_150d5a9e4
                                                  ) + _UNK_150d5aa04) + fVar22) + fVar23) + fVar24)
                    + fVar18);
      auVar35._8_4_ =
           fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * 
                                                  (fVar36 * _UNK_150d5a968 + _UNK_150d5a988) +
                                                  _UNK_150d5a9a8) + _UNK_150d5a9c8) + _UNK_150d5a9e8
                                                  ) + _UNK_150d5aa08) + fVar22) + fVar23) + fVar24)
                    + fVar18);
      auVar35._12_4_ =
           fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * 
                                                  (fVar37 * _UNK_150d5a96c + _UNK_150d5a98c) +
                                                  _UNK_150d5a9ac) + _UNK_150d5a9cc) + _UNK_150d5a9ec
                                                  ) + _UNK_150d5aa0c) + fVar22) + fVar23) + fVar24)
                    + fVar18);
      auVar35._16_4_ =
           fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * 
                                                  (fVar38 * _UNK_150d5a970 + _UNK_150d5a990) +
                                                  _UNK_150d5a9b0) + _UNK_150d5a9d0) + _UNK_150d5a9f0
                                                  ) + _UNK_150d5aa10) + fVar22) + fVar23) + fVar24)
                    + fVar18);
      auVar35._20_4_ =
           fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * 
                                                  (fVar39 * _UNK_150d5a974 + _UNK_150d5a994) +
                                                  _UNK_150d5a9b4) + _UNK_150d5a9d4) + _UNK_150d5a9f4
                                                  ) + _UNK_150d5aa14) + fVar22) + fVar23) + fVar24)
                    + fVar18);
      auVar35._24_4_ =
           fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * 
                                                  (fVar40 * _UNK_150d5a978 + _UNK_150d5a998) +
                                                  _UNK_150d5a9b8) + _UNK_150d5a9d8) + _UNK_150d5a9f8
                                                  ) + _UNK_150d5aa18) + fVar22) + fVar23) + fVar24)
                    + fVar18);
      auVar35._28_4_ =
           fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * 
                                                  (fVar41 * _UNK_150d5a97c + _UNK_150d5a99c) +
                                                  _UNK_150d5a9bc) + _UNK_150d5a9dc) + _UNK_150d5a9fc
                                                  ) + _UNK_150d5aa1c) + fVar22) + fVar23) + fVar24)
                    + fVar18);
      auVar32 = vcvtdq2ps_avx(auVar43);
      auVar44._0_4_ = auVar32._0_4_ * fVar25;
      auVar44._4_4_ = auVar32._4_4_ * fVar25;
      auVar44._8_4_ = auVar32._8_4_ * fVar25;
      auVar44._12_4_ = auVar32._12_4_ * fVar25;
      auVar44._16_4_ = auVar32._16_4_ * fVar25;
      auVar44._20_4_ = auVar32._20_4_ * fVar25;
      auVar44._24_4_ = auVar32._24_4_ * fVar25;
      auVar44._28_4_ = auVar32._28_4_ * fVar25;
      auVar34 = vsubps_avx(auVar44,auVar35);
      auVar32 = vcmpps_avx(auVar9,ZEXT1232(ZEXT812(0)),1);
      auVar32 = vblendvps_avx(auVar27,auVar30,auVar32);
      auVar32 = vblendvps_avx(auVar34,auVar32,auVar33);
      auVar42._0_4_ = auVar32._0_4_ * fVar21;
      auVar42._4_4_ = auVar32._4_4_ * fVar21;
      auVar42._8_4_ = auVar32._8_4_ * fVar21;
      auVar42._12_4_ = auVar32._12_4_ * fVar21;
      auVar33._16_4_ = auVar32._16_4_ * fVar21;
      auVar33._0_16_ = auVar42;
      auVar33._20_4_ = auVar32._20_4_ * fVar21;
      auVar33._24_4_ = auVar32._24_4_ * fVar21;
      auVar33._28_4_ = auVar32._28_4_ * fVar21;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar33._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar42;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  auVar42 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar42;
  auVar9._0_16_ = auVar42;
  auVar45 = vpshufd_avx(ZEXT416(param_3),0);
  auVar42 = vpcmpgtd_avx(auVar45,SUB3216(auVar9 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0x10));
  auVar45 = vpcmpgtd_avx(auVar45,SUB3216(auVar9 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar10._16_16_ = auVar42;
  auVar10._0_16_ = auVar45;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar12 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar26 = vshufps_avx(auVar26,auVar26,0);
  auVar15._16_16_ = auVar26;
  auVar15._0_16_ = auVar26;
  auVar12 = vmaxps_avx(auVar12,auVar15);
  auVar27 = vcmpps_avx(auVar12,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  auVar30 = vcmpps_avx(auVar12,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
  auVar16._4_4_ = __real_3f800000;
  auVar16._0_4_ = __real_3f800000;
  auVar16._8_4_ = __real_3f800000;
  auVar16._12_4_ = __real_3f800000;
  auVar16._16_4_ = __real_3f800000;
  auVar16._20_4_ = __real_3f800000;
  auVar16._24_4_ = __real_3f800000;
  auVar16._28_4_ = __real_3f800000;
  auVar12 = vblendvps_avx(auVar12,auVar16,auVar30);
  auVar26 = vpsrad_avx(auVar12._0_16_,0x17);
  auVar19._0_4_ =
       auVar12._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
  auVar19._4_4_ = auVar12._4_4_ & _UNK_150d5a944;
  auVar19._8_4_ = auVar12._8_4_ & _UNK_150d5a948;
  auVar19._12_4_ = auVar12._12_4_ & _UNK_150d5a94c;
  auVar19._16_4_ = auVar12._16_4_ & _UNK_150d5a950;
  auVar19._20_4_ = auVar12._20_4_ & _UNK_150d5a954;
  auVar19._24_4_ = auVar12._24_4_ & _UNK_150d5a958;
  auVar19._28_4_ = auVar12._28_4_ & _UNK_150d5a95c;
  auVar14 = vsubps_avx(auVar16,auVar19 | 
                               ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                      );
  auVar31._4_4_ = __real_7fc00000;
  auVar31._0_4_ = __real_7fc00000;
  auVar31._8_4_ = __real_7fc00000;
  auVar31._12_4_ = __real_7fc00000;
  auVar31._16_4_ = __real_7fc00000;
  auVar31._20_4_ = __real_7fc00000;
  auVar31._24_4_ = __real_7fc00000;
  auVar31._28_4_ = __real_7fc00000;
  auVar14 = vblendvps_avx(auVar31,auVar14,auVar10);
  fVar18 = auVar14._0_4_;
  fVar21 = auVar14._4_4_;
  fVar22 = auVar14._8_4_;
  fVar23 = auVar14._12_4_;
  fVar24 = auVar14._16_4_;
  fVar25 = auVar14._20_4_;
  fVar8 = auVar14._24_4_;
  fVar11 = auVar14._28_4_;
  auVar42 = vpsrad_avx(auVar12._16_16_,0x17);
  auVar28._20_4_ = __real_ffffff82 + auVar42._4_4_;
  auVar28._16_4_ = __real_ffffff82 + auVar42._0_4_;
  auVar28._24_4_ = __real_ffffff82 + auVar42._8_4_;
  auVar28._28_4_ = __real_ffffff82 + auVar42._12_4_;
  auVar28._4_4_ = __real_ffffff82 + auVar26._4_4_;
  auVar28._0_4_ = __real_ffffff82 + auVar26._0_4_;
  auVar28._8_4_ = __real_ffffff82 + auVar26._8_4_;
  auVar28._12_4_ = __real_ffffff82 + auVar26._12_4_;
  auVar12 = vcvtdq2ps_avx(auVar28);
  auVar29._0_4_ =
       auVar12._0_4_ * ___ymm_3f3172183f3172183f3172183f3172183f3172183f3172183f3172183f317218;
  auVar29._4_4_ = auVar12._4_4_ * _UNK_150d5aa84;
  auVar29._8_4_ = auVar12._8_4_ * _UNK_150d5aa88;
  auVar29._12_4_ = auVar12._12_4_ * _UNK_150d5aa8c;
  auVar29._16_4_ = auVar12._16_4_ * _UNK_150d5aa90;
  auVar29._20_4_ = auVar12._20_4_ * _UNK_150d5aa94;
  auVar29._24_4_ = auVar12._24_4_ * _UNK_150d5aa98;
  auVar29._28_4_ = auVar12._28_4_ * _UNK_150d5aa9c;
  auVar17._0_4_ =
       fVar18 * (fVar18 * (fVar18 * (fVar18 * ((((((fVar18 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) * fVar18 +
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) * fVar18 +
                                                 ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                 ) * fVar18 +
                                                ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                ) * fVar18 +
                                               ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                               ) * fVar18 +
                                              ___ymm_3e80fb873e80fb873e80fb873e80fb873e80fb873e80fb873e80fb873e80fb87
                                              ) +
                                    ___ymm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c
                                    ) +
                          ___ymm_3f0000103f0000103f0000103f0000103f0000103f0000103f0000103f000010) +
                __real_3f800000);
  auVar17._4_4_ =
       fVar21 * (fVar21 * (fVar21 * (fVar21 * ((((((fVar21 * _UNK_150d5a964 + _UNK_150d5a984) *
                                                   fVar21 + _UNK_150d5a9a4) * fVar21 +
                                                 _UNK_150d5a9c4) * fVar21 + _UNK_150d5a9e4) * fVar21
                                               + _UNK_150d5aa04) * fVar21 + _UNK_150d5aa24) +
                                    _UNK_150d5aa44) + _UNK_150d5aa64) + __real_3f800000);
  auVar17._8_4_ =
       fVar22 * (fVar22 * (fVar22 * (fVar22 * ((((((fVar22 * _UNK_150d5a968 + _UNK_150d5a988) *
                                                   fVar22 + _UNK_150d5a9a8) * fVar22 +
                                                 _UNK_150d5a9c8) * fVar22 + _UNK_150d5a9e8) * fVar22
                                               + _UNK_150d5aa08) * fVar22 + _UNK_150d5aa28) +
                                    _UNK_150d5aa48) + _UNK_150d5aa68) + __real_3f800000);
  auVar17._12_4_ =
       fVar23 * (fVar23 * (fVar23 * (fVar23 * ((((((fVar23 * _UNK_150d5a96c + _UNK_150d5a98c) *
                                                   fVar23 + _UNK_150d5a9ac) * fVar23 +
                                                 _UNK_150d5a9cc) * fVar23 + _UNK_150d5a9ec) * fVar23
                                               + _UNK_150d5aa0c) * fVar23 + _UNK_150d5aa2c) +
                                    _UNK_150d5aa4c) + _UNK_150d5aa6c) + __real_3f800000);
  auVar17._16_4_ =
       fVar24 * (fVar24 * (fVar24 * (fVar24 * ((((((fVar24 * _UNK_150d5a970 + _UNK_150d5a990) *
                                                   fVar24 + _UNK_150d5a9b0) * fVar24 +
                                                 _UNK_150d5a9d0) * fVar24 + _UNK_150d5a9f0) * fVar24
                                               + _UNK_150d5aa10) * fVar24 + _UNK_150d5aa30) +
                                    _UNK_150d5aa50) + _UNK_150d5aa70) + __real_3f800000);
  auVar17._20_4_ =
       fVar25 * (fVar25 * (fVar25 * (fVar25 * ((((((fVar25 * _UNK_150d5a974 + _UNK_150d5a994) *
                                                   fVar25 + _UNK_150d5a9b4) * fVar25 +
                                                 _UNK_150d5a9d4) * fVar25 + _UNK_150d5a9f4) * fVar25
                                               + _UNK_150d5aa14) * fVar25 + _UNK_150d5aa34) +
                                    _UNK_150d5aa54) + _UNK_150d5aa74) + __real_3f800000);
  auVar17._24_4_ =
       fVar8 * (fVar8 * (fVar8 * (fVar8 * ((((((fVar8 * _UNK_150d5a978 + _UNK_150d5a998) * fVar8 +
                                              _UNK_150d5a9b8) * fVar8 + _UNK_150d5a9d8) * fVar8 +
                                            _UNK_150d5a9f8) * fVar8 + _UNK_150d5aa18) * fVar8 +
                                          _UNK_150d5aa38) + _UNK_150d5aa58) + _UNK_150d5aa78) +
               __real_3f800000);
  auVar17._28_4_ =
       fVar11 * (fVar11 * (fVar11 * (fVar11 * ((((((fVar11 * _UNK_150d5a97c + _UNK_150d5a99c) *
                                                   fVar11 + _UNK_150d5a9bc) * fVar11 +
                                                 _UNK_150d5a9dc) * fVar11 + _UNK_150d5a9fc) * fVar11
                                               + _UNK_150d5aa1c) * fVar11 + _UNK_150d5aa3c) +
                                    _UNK_150d5aa5c) + _UNK_150d5aa7c) + __real_3f800000);
  auVar14 = vsubps_avx(auVar29,auVar17);
  auVar20._4_4_ = __real_ff800000;
  auVar20._0_4_ = __real_ff800000;
  auVar20._8_4_ = __real_ff800000;
  auVar20._12_4_ = __real_ff800000;
  auVar20._16_4_ = __real_ff800000;
  auVar20._20_4_ = __real_ff800000;
  auVar20._24_4_ = __real_ff800000;
  auVar20._28_4_ = __real_ff800000;
  auVar12 = vblendvps_avx(auVar20,auVar31,auVar27);
  auVar12 = vblendvps_avx(auVar14,auVar12,auVar30);
  auVar13._0_4_ =
       auVar12._0_4_ * ___ymm_410af967410af967410af967410af967410af967410af967410af967410af967;
  auVar13._4_4_ = auVar12._4_4_ * _UNK_150d5aac4;
  auVar13._8_4_ = auVar12._8_4_ * _UNK_150d5aac8;
  auVar13._12_4_ = auVar12._12_4_ * _UNK_150d5aacc;
  auVar13._16_4_ = auVar12._16_4_ * _UNK_150d5aad0;
  auVar13._20_4_ = auVar12._20_4_ * _UNK_150d5aad4;
  auVar13._24_4_ = auVar12._24_4_ * _UNK_150d5aad8;
  auVar13._28_4_ = auVar12._28_4_ * _UNK_150d5aadc;
  auVar12 = vmaskmovps_avx(auVar10,auVar13);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar12;
  return;
}

// ArrayPowerToDecibelInPlace_avx @ 140a2b060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPowerToDecibelInPlace_avx(longlong param_1,float param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  float fVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  float fVar18;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar34 [32];
  float fVar41;
  undefined1 auVar35 [32];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [16];
  
  fVar25 = __real_408af967;
  fVar24 = __real_3f317218;
  fVar23 = __real_3f000010;
  fVar22 = __real_3eaaa11c;
  fVar21 = __real_3e80fb87;
  iVar1 = __real_ffffff82;
  fVar18 = __real_3f800000;
  fVar8 = (param_2 * __real_40135d8e) / __real_41200000;
  auVar26 = ZEXT416((uint)(fVar8 * __real_3fb8aa3b));
  auVar26 = vroundss_avx(auVar26,auVar26,9);
  fVar11 = auVar26._0_4_;
  iVar2 = (int)fVar11;
  if (iVar2 < 0x80) {
    fVar8 = fVar8 + fVar11 * __real_bf317200 + fVar11 * __real_b5bfbe8e;
    fVar8 = (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * __real_39907835 +
                                                                  __real_3aaaf7b5) + __real_3c09475d
                                                         ) + __real_3d2a9d49) + __real_3e2aab20) +
                              __real_3efffffd) + __real_3f800000) + __real_3f800000) *
            (float)(iVar2 * 0x800000 + 0x3f800000);
    auVar26 = SUB6416(ZEXT864(0),0);
  }
  else {
    auVar26 = SUB6416(ZEXT864(0),0);
    fVar8 = __real_7f800000;
  }
  if (-0x7f < iVar2) {
    auVar26 = ZEXT416((uint)fVar8);
  }
  uVar3 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar42 = vshufps_avx(auVar26,auVar26,0);
    auVar12._16_16_ = auVar42;
    auVar12._0_16_ = auVar42;
    uVar6 = 0;
    auVar14._4_4_ = __real_3f800000;
    auVar14._0_4_ = __real_3f800000;
    auVar14._8_4_ = __real_3f800000;
    auVar14._12_4_ = __real_3f800000;
    auVar14._16_4_ = __real_3f800000;
    auVar14._20_4_ = __real_3f800000;
    auVar14._24_4_ = __real_3f800000;
    auVar14._28_4_ = __real_3f800000;
    uVar4 = 0;
    auVar27._4_4_ = __real_ff800000;
    auVar27._0_4_ = __real_ff800000;
    auVar27._8_4_ = __real_ff800000;
    auVar27._12_4_ = __real_ff800000;
    auVar27._16_4_ = __real_ff800000;
    auVar27._20_4_ = __real_ff800000;
    auVar27._24_4_ = __real_ff800000;
    auVar27._28_4_ = __real_ff800000;
    auVar30._4_4_ = __real_7fc00000;
    auVar30._0_4_ = __real_7fc00000;
    auVar30._8_4_ = __real_7fc00000;
    auVar30._12_4_ = __real_7fc00000;
    auVar30._16_4_ = __real_7fc00000;
    auVar30._20_4_ = __real_7fc00000;
    auVar30._24_4_ = __real_7fc00000;
    auVar30._28_4_ = __real_7fc00000;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar32._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar32._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar9 = vmaxps_avx(auVar32,auVar12);
      auVar33 = vcmpps_avx(auVar9,ZEXT1232(ZEXT812(0)),2);
      auVar32 = vblendvps_avx(auVar9,auVar14,auVar33);
      auVar42 = vpsrad_avx(auVar32._0_16_,0x17);
      auVar45 = vpsrad_avx(auVar32._16_16_,0x17);
      auVar43._20_4_ = auVar45._4_4_ + iVar1;
      auVar43._16_4_ = auVar45._0_4_ + iVar1;
      auVar43._24_4_ = auVar45._8_4_ + iVar1;
      auVar43._28_4_ = auVar45._12_4_ + iVar1;
      auVar43._4_4_ = auVar42._4_4_ + iVar1;
      auVar43._0_4_ = auVar42._0_4_ + iVar1;
      auVar43._8_4_ = auVar42._8_4_ + iVar1;
      auVar43._12_4_ = auVar42._12_4_ + iVar1;
      auVar34._0_4_ =
           auVar32._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
      auVar34._4_4_ = auVar32._4_4_ & _UNK_150d5a944;
      auVar34._8_4_ = auVar32._8_4_ & _UNK_150d5a948;
      auVar34._12_4_ = auVar32._12_4_ & _UNK_150d5a94c;
      auVar34._16_4_ = auVar32._16_4_ & _UNK_150d5a950;
      auVar34._20_4_ = auVar32._20_4_ & _UNK_150d5a954;
      auVar34._24_4_ = auVar32._24_4_ & _UNK_150d5a958;
      auVar34._28_4_ = auVar32._28_4_ & _UNK_150d5a95c;
      auVar32 = vsubps_avx(auVar14,auVar34 | 
                                   ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                          );
      fVar8 = auVar32._0_4_;
      fVar11 = auVar32._4_4_;
      fVar36 = auVar32._8_4_;
      fVar37 = auVar32._12_4_;
      fVar38 = auVar32._16_4_;
      fVar39 = auVar32._20_4_;
      fVar40 = auVar32._24_4_;
      fVar41 = auVar32._28_4_;
      auVar35._0_4_ =
           fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * (fVar8 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) + 
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) + 
                                                  ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                  ) + 
                                                  ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                  ) + 
                                                  ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                                  ) + fVar21) + fVar22) + fVar23) + fVar18);
      auVar35._4_4_ =
           fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * (fVar11 * 
                                                  (fVar11 * _UNK_150d5a964 + _UNK_150d5a984) +
                                                  _UNK_150d5a9a4) + _UNK_150d5a9c4) + _UNK_150d5a9e4
                                                  ) + _UNK_150d5aa04) + fVar21) + fVar22) + fVar23)
                    + fVar18);
      auVar35._8_4_ =
           fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * (fVar36 * 
                                                  (fVar36 * _UNK_150d5a968 + _UNK_150d5a988) +
                                                  _UNK_150d5a9a8) + _UNK_150d5a9c8) + _UNK_150d5a9e8
                                                  ) + _UNK_150d5aa08) + fVar21) + fVar22) + fVar23)
                    + fVar18);
      auVar35._12_4_ =
           fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * (fVar37 * 
                                                  (fVar37 * _UNK_150d5a96c + _UNK_150d5a98c) +
                                                  _UNK_150d5a9ac) + _UNK_150d5a9cc) + _UNK_150d5a9ec
                                                  ) + _UNK_150d5aa0c) + fVar21) + fVar22) + fVar23)
                    + fVar18);
      auVar35._16_4_ =
           fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * (fVar38 * 
                                                  (fVar38 * _UNK_150d5a970 + _UNK_150d5a990) +
                                                  _UNK_150d5a9b0) + _UNK_150d5a9d0) + _UNK_150d5a9f0
                                                  ) + _UNK_150d5aa10) + fVar21) + fVar22) + fVar23)
                    + fVar18);
      auVar35._20_4_ =
           fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * (fVar39 * 
                                                  (fVar39 * _UNK_150d5a974 + _UNK_150d5a994) +
                                                  _UNK_150d5a9b4) + _UNK_150d5a9d4) + _UNK_150d5a9f4
                                                  ) + _UNK_150d5aa14) + fVar21) + fVar22) + fVar23)
                    + fVar18);
      auVar35._24_4_ =
           fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * (fVar40 * 
                                                  (fVar40 * _UNK_150d5a978 + _UNK_150d5a998) +
                                                  _UNK_150d5a9b8) + _UNK_150d5a9d8) + _UNK_150d5a9f8
                                                  ) + _UNK_150d5aa18) + fVar21) + fVar22) + fVar23)
                    + fVar18);
      auVar35._28_4_ =
           fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * (fVar41 * 
                                                  (fVar41 * _UNK_150d5a97c + _UNK_150d5a99c) +
                                                  _UNK_150d5a9bc) + _UNK_150d5a9dc) + _UNK_150d5a9fc
                                                  ) + _UNK_150d5aa1c) + fVar21) + fVar22) + fVar23)
                    + fVar18);
      auVar32 = vcvtdq2ps_avx(auVar43);
      auVar44._0_4_ = auVar32._0_4_ * fVar24;
      auVar44._4_4_ = auVar32._4_4_ * fVar24;
      auVar44._8_4_ = auVar32._8_4_ * fVar24;
      auVar44._12_4_ = auVar32._12_4_ * fVar24;
      auVar44._16_4_ = auVar32._16_4_ * fVar24;
      auVar44._20_4_ = auVar32._20_4_ * fVar24;
      auVar44._24_4_ = auVar32._24_4_ * fVar24;
      auVar44._28_4_ = auVar32._28_4_ * fVar24;
      auVar34 = vsubps_avx(auVar44,auVar35);
      auVar32 = vcmpps_avx(auVar9,ZEXT1232(ZEXT812(0)),1);
      auVar32 = vblendvps_avx(auVar27,auVar30,auVar32);
      auVar32 = vblendvps_avx(auVar34,auVar32,auVar33);
      auVar42._0_4_ = auVar32._0_4_ * fVar25;
      auVar42._4_4_ = auVar32._4_4_ * fVar25;
      auVar42._8_4_ = auVar32._8_4_ * fVar25;
      auVar42._12_4_ = auVar32._12_4_ * fVar25;
      auVar33._16_4_ = auVar32._16_4_ * fVar25;
      auVar33._0_16_ = auVar42;
      auVar33._20_4_ = auVar32._20_4_ * fVar25;
      auVar33._24_4_ = auVar32._24_4_ * fVar25;
      auVar33._28_4_ = auVar32._28_4_ * fVar25;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar33._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar42;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  auVar42 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar42;
  auVar9._0_16_ = auVar42;
  auVar45 = vpshufd_avx(ZEXT416(param_3),0);
  auVar42 = vpcmpgtd_avx(auVar45,SUB3216(auVar9 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0x10));
  auVar45 = vpcmpgtd_avx(auVar45,SUB3216(auVar9 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar10._16_16_ = auVar42;
  auVar10._0_16_ = auVar45;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar12 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar26 = vshufps_avx(auVar26,auVar26,0);
  auVar15._16_16_ = auVar26;
  auVar15._0_16_ = auVar26;
  auVar12 = vmaxps_avx(auVar12,auVar15);
  auVar27 = vcmpps_avx(auVar12,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  auVar30 = vcmpps_avx(auVar12,SUB6432(ZEXT1664((undefined1  [16])0x0),0),2);
  auVar16._4_4_ = __real_3f800000;
  auVar16._0_4_ = __real_3f800000;
  auVar16._8_4_ = __real_3f800000;
  auVar16._12_4_ = __real_3f800000;
  auVar16._16_4_ = __real_3f800000;
  auVar16._20_4_ = __real_3f800000;
  auVar16._24_4_ = __real_3f800000;
  auVar16._28_4_ = __real_3f800000;
  auVar12 = vblendvps_avx(auVar12,auVar16,auVar30);
  auVar26 = vpsrad_avx(auVar12._0_16_,0x17);
  auVar19._0_4_ =
       auVar12._0_4_ & ___ymm_807fffff807fffff807fffff807fffff807fffff807fffff807fffff807fffff;
  auVar19._4_4_ = auVar12._4_4_ & _UNK_150d5a944;
  auVar19._8_4_ = auVar12._8_4_ & _UNK_150d5a948;
  auVar19._12_4_ = auVar12._12_4_ & _UNK_150d5a94c;
  auVar19._16_4_ = auVar12._16_4_ & _UNK_150d5a950;
  auVar19._20_4_ = auVar12._20_4_ & _UNK_150d5a954;
  auVar19._24_4_ = auVar12._24_4_ & _UNK_150d5a958;
  auVar19._28_4_ = auVar12._28_4_ & _UNK_150d5a95c;
  auVar14 = vsubps_avx(auVar16,auVar19 | 
                               ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000
                      );
  auVar31._4_4_ = __real_7fc00000;
  auVar31._0_4_ = __real_7fc00000;
  auVar31._8_4_ = __real_7fc00000;
  auVar31._12_4_ = __real_7fc00000;
  auVar31._16_4_ = __real_7fc00000;
  auVar31._20_4_ = __real_7fc00000;
  auVar31._24_4_ = __real_7fc00000;
  auVar31._28_4_ = __real_7fc00000;
  auVar14 = vblendvps_avx(auVar31,auVar14,auVar10);
  fVar18 = auVar14._0_4_;
  fVar21 = auVar14._4_4_;
  fVar22 = auVar14._8_4_;
  fVar23 = auVar14._12_4_;
  fVar24 = auVar14._16_4_;
  fVar25 = auVar14._20_4_;
  fVar8 = auVar14._24_4_;
  fVar11 = auVar14._28_4_;
  auVar42 = vpsrad_avx(auVar12._16_16_,0x17);
  auVar28._20_4_ = __real_ffffff82 + auVar42._4_4_;
  auVar28._16_4_ = __real_ffffff82 + auVar42._0_4_;
  auVar28._24_4_ = __real_ffffff82 + auVar42._8_4_;
  auVar28._28_4_ = __real_ffffff82 + auVar42._12_4_;
  auVar28._4_4_ = __real_ffffff82 + auVar26._4_4_;
  auVar28._0_4_ = __real_ffffff82 + auVar26._0_4_;
  auVar28._8_4_ = __real_ffffff82 + auVar26._8_4_;
  auVar28._12_4_ = __real_ffffff82 + auVar26._12_4_;
  auVar12 = vcvtdq2ps_avx(auVar28);
  auVar29._0_4_ =
       auVar12._0_4_ * ___ymm_3f3172183f3172183f3172183f3172183f3172183f3172183f3172183f317218;
  auVar29._4_4_ = auVar12._4_4_ * _UNK_150d5aa84;
  auVar29._8_4_ = auVar12._8_4_ * _UNK_150d5aa88;
  auVar29._12_4_ = auVar12._12_4_ * _UNK_150d5aa8c;
  auVar29._16_4_ = auVar12._16_4_ * _UNK_150d5aa90;
  auVar29._20_4_ = auVar12._20_4_ * _UNK_150d5aa94;
  auVar29._24_4_ = auVar12._24_4_ * _UNK_150d5aa98;
  auVar29._28_4_ = auVar12._28_4_ * _UNK_150d5aa9c;
  auVar17._0_4_ =
       fVar18 * (fVar18 * (fVar18 * (fVar18 * ((((((fVar18 * 
                                                  ___ymm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e3fdfe28e
                                                  + 
                                                  ___ymm_c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7c01f5af7
                                                  ) * fVar18 +
                                                  ___ymm_3ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe01933ffe0193
                                                  ) * fVar18 +
                                                 ___ymm_bf198181bf198181bf198181bf198181bf198181bf198181bf198181bf198181
                                                 ) * fVar18 +
                                                ___ymm_3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d3eaf548d
                                                ) * fVar18 +
                                               ___ymm_3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af3e33a0af
                                               ) * fVar18 +
                                              ___ymm_3e80fb873e80fb873e80fb873e80fb873e80fb873e80fb873e80fb873e80fb87
                                              ) +
                                    ___ymm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c3eaaa11c
                                    ) +
                          ___ymm_3f0000103f0000103f0000103f0000103f0000103f0000103f0000103f000010) +
                __real_3f800000);
  auVar17._4_4_ =
       fVar21 * (fVar21 * (fVar21 * (fVar21 * ((((((fVar21 * _UNK_150d5a964 + _UNK_150d5a984) *
                                                   fVar21 + _UNK_150d5a9a4) * fVar21 +
                                                 _UNK_150d5a9c4) * fVar21 + _UNK_150d5a9e4) * fVar21
                                               + _UNK_150d5aa04) * fVar21 + _UNK_150d5aa24) +
                                    _UNK_150d5aa44) + _UNK_150d5aa64) + __real_3f800000);
  auVar17._8_4_ =
       fVar22 * (fVar22 * (fVar22 * (fVar22 * ((((((fVar22 * _UNK_150d5a968 + _UNK_150d5a988) *
                                                   fVar22 + _UNK_150d5a9a8) * fVar22 +
                                                 _UNK_150d5a9c8) * fVar22 + _UNK_150d5a9e8) * fVar22
                                               + _UNK_150d5aa08) * fVar22 + _UNK_150d5aa28) +
                                    _UNK_150d5aa48) + _UNK_150d5aa68) + __real_3f800000);
  auVar17._12_4_ =
       fVar23 * (fVar23 * (fVar23 * (fVar23 * ((((((fVar23 * _UNK_150d5a96c + _UNK_150d5a98c) *
                                                   fVar23 + _UNK_150d5a9ac) * fVar23 +
                                                 _UNK_150d5a9cc) * fVar23 + _UNK_150d5a9ec) * fVar23
                                               + _UNK_150d5aa0c) * fVar23 + _UNK_150d5aa2c) +
                                    _UNK_150d5aa4c) + _UNK_150d5aa6c) + __real_3f800000);
  auVar17._16_4_ =
       fVar24 * (fVar24 * (fVar24 * (fVar24 * ((((((fVar24 * _UNK_150d5a970 + _UNK_150d5a990) *
                                                   fVar24 + _UNK_150d5a9b0) * fVar24 +
                                                 _UNK_150d5a9d0) * fVar24 + _UNK_150d5a9f0) * fVar24
                                               + _UNK_150d5aa10) * fVar24 + _UNK_150d5aa30) +
                                    _UNK_150d5aa50) + _UNK_150d5aa70) + __real_3f800000);
  auVar17._20_4_ =
       fVar25 * (fVar25 * (fVar25 * (fVar25 * ((((((fVar25 * _UNK_150d5a974 + _UNK_150d5a994) *
                                                   fVar25 + _UNK_150d5a9b4) * fVar25 +
                                                 _UNK_150d5a9d4) * fVar25 + _UNK_150d5a9f4) * fVar25
                                               + _UNK_150d5aa14) * fVar25 + _UNK_150d5aa34) +
                                    _UNK_150d5aa54) + _UNK_150d5aa74) + __real_3f800000);
  auVar17._24_4_ =
       fVar8 * (fVar8 * (fVar8 * (fVar8 * ((((((fVar8 * _UNK_150d5a978 + _UNK_150d5a998) * fVar8 +
                                              _UNK_150d5a9b8) * fVar8 + _UNK_150d5a9d8) * fVar8 +
                                            _UNK_150d5a9f8) * fVar8 + _UNK_150d5aa18) * fVar8 +
                                          _UNK_150d5aa38) + _UNK_150d5aa58) + _UNK_150d5aa78) +
               __real_3f800000);
  auVar17._28_4_ =
       fVar11 * (fVar11 * (fVar11 * (fVar11 * ((((((fVar11 * _UNK_150d5a97c + _UNK_150d5a99c) *
                                                   fVar11 + _UNK_150d5a9bc) * fVar11 +
                                                 _UNK_150d5a9dc) * fVar11 + _UNK_150d5a9fc) * fVar11
                                               + _UNK_150d5aa1c) * fVar11 + _UNK_150d5aa3c) +
                                    _UNK_150d5aa5c) + _UNK_150d5aa7c) + __real_3f800000);
  auVar14 = vsubps_avx(auVar29,auVar17);
  auVar20._4_4_ = __real_ff800000;
  auVar20._0_4_ = __real_ff800000;
  auVar20._8_4_ = __real_ff800000;
  auVar20._12_4_ = __real_ff800000;
  auVar20._16_4_ = __real_ff800000;
  auVar20._20_4_ = __real_ff800000;
  auVar20._24_4_ = __real_ff800000;
  auVar20._28_4_ = __real_ff800000;
  auVar12 = vblendvps_avx(auVar20,auVar31,auVar27);
  auVar12 = vblendvps_avx(auVar14,auVar12,auVar30);
  auVar13._0_4_ =
       auVar12._0_4_ * ___ymm_408af967408af967408af967408af967408af967408af967408af967408af967;
  auVar13._4_4_ = auVar12._4_4_ * _UNK_150d5aae4;
  auVar13._8_4_ = auVar12._8_4_ * _UNK_150d5aae8;
  auVar13._12_4_ = auVar12._12_4_ * _UNK_150d5aaec;
  auVar13._16_4_ = auVar12._16_4_ * _UNK_150d5aaf0;
  auVar13._20_4_ = auVar12._20_4_ * _UNK_150d5aaf4;
  auVar13._24_4_ = auVar12._24_4_ * _UNK_150d5aaf8;
  auVar13._28_4_ = auVar12._28_4_ * _UNK_150d5aafc;
  auVar12 = vmaskmovps_avx(auVar10,auVar13);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar12;
  return;
}

// ArrayComplexToPowerInterleaved_avx @ 140a2b4d0

void ArrayComplexToPowerInterleaved_avx(longlong param_1,longlong param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [32];
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar14 [32];
  undefined1 auVar13 [32];
  
  uVar7 = param_3 & 0xfffffff8;
  if (0 < (int)uVar7) {
    uVar9 = 0;
    uVar10 = 0;
    do {
      auVar14._16_16_ = *(undefined1 (*) [16])(param_1 + 0x30 + uVar9 * 2);
      auVar14._0_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar9 * 2);
      auVar12._16_16_ = *(undefined1 (*) [16])(param_1 + 0x20 + uVar9 * 2);
      auVar12._0_16_ = *(undefined1 (*) [16])(param_1 + uVar9 * 2);
      auVar3 = vshufps_avx(auVar12,auVar14,0x88);
      auVar12 = vshufps_avx(auVar12,auVar14,0xdd);
      auVar11._0_4_ = auVar3._0_4_ * auVar3._0_4_ + auVar12._0_4_ * auVar12._0_4_;
      auVar11._4_4_ = auVar3._4_4_ * auVar3._4_4_ + auVar12._4_4_ * auVar12._4_4_;
      auVar11._8_4_ = auVar3._8_4_ * auVar3._8_4_ + auVar12._8_4_ * auVar12._8_4_;
      auVar11._12_4_ = auVar3._12_4_ * auVar3._12_4_ + auVar12._12_4_ * auVar12._12_4_;
      auVar13._16_4_ = auVar3._16_4_ * auVar3._16_4_ + auVar12._16_4_ * auVar12._16_4_;
      auVar13._0_16_ = auVar11;
      auVar13._20_4_ = auVar3._20_4_ * auVar3._20_4_ + auVar12._20_4_ * auVar12._20_4_;
      auVar13._24_4_ = auVar3._24_4_ * auVar3._24_4_ + auVar12._24_4_ * auVar12._24_4_;
      auVar13._28_4_ = auVar3._28_4_ * auVar3._28_4_ + auVar12._28_4_ * auVar12._28_4_;
      *(undefined1 (*) [16])(param_2 + 0x10 + (uVar9 & 0xffffffff)) = auVar13._16_16_;
      *(undefined1 (*) [16])(param_2 + (uVar9 & 0xffffffff)) = auVar11;
      uVar10 = uVar10 + 8;
      uVar9 = uVar9 + 0x20;
    } while (uVar10 < uVar7);
  }
  if ((int)uVar7 < (int)param_3) {
    uVar9 = (ulonglong)(int)uVar7;
    if ((param_3 & 1) != 0) {
      fVar1 = *(float *)(param_1 + (longlong)(int)(uVar7 * 2) * 4);
      fVar2 = *(float *)(param_1 + (longlong)(int)(uVar7 * 2 + 1) * 4);
      *(float *)(param_2 + uVar9 * 4) = fVar1 * fVar1 + fVar2 * fVar2;
      uVar9 = uVar9 | 1;
    }
    if (uVar7 != param_3 - 1) {
      lVar6 = (longlong)(int)param_3 - uVar9;
      param_2 = param_2 + uVar9 * 4;
      iVar5 = (int)uVar9 * 2;
      lVar8 = 0;
      do {
        iVar4 = (int)lVar8;
        fVar1 = *(float *)(param_1 + (longlong)(iVar5 + iVar4) * 4);
        fVar2 = *(float *)(param_1 + (longlong)(iVar5 + iVar4 + 1) * 4);
        *(float *)(param_2 + lVar8 * 2) = fVar1 * fVar1 + fVar2 * fVar2;
        fVar1 = *(float *)(param_1 + (longlong)(iVar5 + 2 + iVar4) * 4);
        fVar2 = *(float *)(param_1 + (longlong)(iVar5 + 3 + iVar4) * 4);
        *(float *)(param_2 + 4 + lVar8 * 2) = fVar1 * fVar1 + fVar2 * fVar2;
        lVar8 = lVar8 + 4;
        lVar6 = lVar6 + -2;
      } while (lVar6 != 0);
    }
  }
  return;
}

// ArrayComplexToPower_avx @ 140a2b620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPower_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar10 = 0;
    uVar7 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_2 + uVar9);
      pfVar4 = (float *)(param_2 + 0x10 + uVar9);
      auVar11._0_4_ = *pfVar1 * *pfVar1 + *pfVar2 * *pfVar2;
      auVar11._4_4_ = pfVar1[1] * pfVar1[1] + pfVar2[1] * pfVar2[1];
      auVar11._8_4_ = pfVar1[2] * pfVar1[2] + pfVar2[2] * pfVar2[2];
      auVar11._12_4_ = pfVar1[3] * pfVar1[3] + pfVar2[3] * pfVar2[3];
      auVar12._16_4_ = *pfVar3 * *pfVar3 + *pfVar4 * *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] * pfVar3[1] + pfVar4[1] * pfVar4[1];
      auVar12._24_4_ = pfVar3[2] * pfVar3[2] + pfVar4[2] * pfVar4[2];
      auVar12._28_4_ = pfVar3[3] * pfVar3[3] + pfVar4[3] * pfVar4[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar9) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar9) = auVar11;
      uVar7 = uVar7 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_4),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ * auVar12._0_4_ + auVar13._0_4_ * auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ * auVar12._4_4_ + auVar13._4_4_ * auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ * auVar12._8_4_ + auVar13._8_4_ * auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ * auVar12._12_4_ + auVar13._12_4_ * auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ * auVar12._16_4_ + auVar13._16_4_ * auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ * auVar12._20_4_ + auVar13._20_4_ * auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ * auVar12._24_4_ + auVar13._24_4_ * auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ * auVar12._28_4_ + auVar13._28_4_ * auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_3 + lVar8) = auVar12;
  return;
}

// ArrayUnderflowClamp_avx @ 140a2b700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayUnderflowClamp_avx(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  undefined1 auVar15 [32];
  
  uVar3 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar6 = 0;
    auVar8._4_4_ = __real_80800000;
    auVar8._0_4_ = __real_80800000;
    auVar8._8_4_ = __real_80800000;
    auVar8._12_4_ = __real_80800000;
    auVar8._16_4_ = __real_80800000;
    auVar8._20_4_ = __real_80800000;
    auVar8._24_4_ = __real_80800000;
    auVar8._28_4_ = __real_80800000;
    auVar11._4_4_ = __real_00800000;
    auVar11._0_4_ = __real_00800000;
    auVar11._8_4_ = __real_00800000;
    auVar11._12_4_ = __real_00800000;
    auVar11._16_4_ = __real_00800000;
    auVar11._20_4_ = __real_00800000;
    auVar11._24_4_ = __real_00800000;
    auVar11._28_4_ = __real_00800000;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar1 = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar14._16_16_ = auVar2;
      auVar14._0_16_ = auVar1;
      auVar9 = vcmpps_avx(auVar8,auVar14,1);
      auVar14 = vcmpps_avx(auVar14,auVar11,1);
      auVar13._0_4_ = ~(auVar14._0_4_ & auVar9._0_4_) & auVar1._0_4_;
      auVar13._4_4_ = ~(auVar14._4_4_ & auVar9._4_4_) & auVar1._4_4_;
      auVar13._8_4_ = ~(auVar14._8_4_ & auVar9._8_4_) & auVar1._8_4_;
      auVar13._12_4_ = ~(auVar14._12_4_ & auVar9._12_4_) & auVar1._12_4_;
      auVar15._16_4_ = ~(auVar14._16_4_ & auVar9._16_4_) & auVar2._0_4_;
      auVar15._0_16_ = auVar13;
      auVar15._20_4_ = ~(auVar14._20_4_ & auVar9._20_4_) & auVar2._4_4_;
      auVar15._24_4_ = ~(auVar14._24_4_ & auVar9._24_4_) & auVar2._8_4_;
      auVar15._28_4_ = ~(auVar14._28_4_ & auVar9._28_4_) & auVar2._12_4_;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar15._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar13;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar4) {
      return;
    }
  }
  auVar1 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar1;
  auVar9._0_16_ = auVar1;
  auVar2 = vpshufd_avx(ZEXT416(param_2),0);
  auVar1 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar2 = vpcmpgtd_avx(auVar2,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar2;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar9 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar16._4_4_ = __real_80800000;
  auVar16._0_4_ = __real_80800000;
  auVar16._8_4_ = __real_80800000;
  auVar16._12_4_ = __real_80800000;
  auVar16._16_4_ = __real_80800000;
  auVar16._20_4_ = __real_80800000;
  auVar16._24_4_ = __real_80800000;
  auVar16._28_4_ = __real_80800000;
  auVar8 = vcmpps_avx(auVar16,auVar9,1);
  auVar11 = vcmpps_avx(auVar9,
                       ___ymm_0080000000800000008000000080000000800000008000000080000000800000,1);
  auVar12._0_4_ = ~(auVar11._0_4_ & auVar8._0_4_) & auVar9._0_4_;
  auVar12._4_4_ = ~(auVar11._4_4_ & auVar8._4_4_) & auVar9._4_4_;
  auVar12._8_4_ = ~(auVar11._8_4_ & auVar8._8_4_) & auVar9._8_4_;
  auVar12._12_4_ = ~(auVar11._12_4_ & auVar8._12_4_) & auVar9._12_4_;
  auVar12._16_4_ = ~(auVar11._16_4_ & auVar8._16_4_) & auVar9._16_4_;
  auVar12._20_4_ = ~(auVar11._20_4_ & auVar8._20_4_) & auVar9._20_4_;
  auVar12._24_4_ = ~(auVar11._24_4_ & auVar8._24_4_) & auVar9._24_4_;
  auVar12._28_4_ = ~(auVar11._28_4_ & auVar8._28_4_) & auVar9._28_4_;
  auVar8 = vmaskmovps_avx(auVar10,auVar12);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArrayRangeClamp_avx @ 140a2b7f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayRangeClamp_avx(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 in_ZMM2 [64];
  undefined1 in_XMM3 [16];
  undefined1 auVar15 [32];
  
  uVar3 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  auVar12 = in_ZMM2._0_16_;
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar2 = vshufps_avx(auVar12,auVar12,0);
    auVar8._16_16_ = auVar2;
    auVar8._0_16_ = auVar2;
    auVar2 = vshufps_avx(in_XMM3,in_XMM3,0);
    auVar11._16_16_ = auVar2;
    auVar11._0_16_ = auVar2;
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar15._16_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar7);
      auVar15._0_16_ = *(undefined1 (*) [16])(param_1 + uVar7);
      auVar15 = vmaxps_avx(auVar15,auVar8);
      auVar15 = vminps_avx(auVar15,auVar11);
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar7) = auVar15._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar7) = auVar15._0_16_;
      uVar4 = uVar4 + 8;
      uVar6 = uVar6 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar4) {
      return;
    }
  }
  auVar2 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar9._16_16_ = auVar2;
  auVar9._0_16_ = auVar2;
  auVar1 = vpshufd_avx(ZEXT416(param_2),0);
  auVar2 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar1 = vpcmpgtd_avx(auVar1,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar10._16_16_ = auVar2;
  auVar10._0_16_ = auVar1;
  lVar5 = (longlong)(int)((uint)uVar4 << 2);
  auVar8 = vmaskmovps_avx(auVar10,*(undefined1 (*) [32])(param_1 + lVar5));
  auVar12 = vshufps_avx(auVar12,auVar12,0);
  auVar13._16_16_ = auVar12;
  auVar13._0_16_ = auVar12;
  auVar8 = vmaxps_avx(auVar8,auVar13);
  auVar12 = vshufps_avx(in_XMM3,in_XMM3,0);
  auVar14._16_16_ = auVar12;
  auVar14._0_16_ = auVar12;
  auVar8 = vminps_avx(auVar8,auVar14);
  auVar8 = vmaskmovps_avx(auVar10,auVar8);
  *(undefined1 (*) [32])(param_1 + lVar5) = auVar8;
  return;
}

// ArraySetToConstantInplace_avx @ 140a2b8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySetToConstantInplace_avx(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 in_XMM2 [16];
  
  uVar3 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar2 = vshufps_avx(in_XMM2,in_XMM2,0);
    uVar5 = 0;
    uVar4 = 0;
    do {
      *(undefined1 (*) [16])(param_1 + 0x10 + (ulonglong)uVar5) = auVar2;
      *(undefined1 (*) [16])(param_1 + (ulonglong)uVar5) = auVar2;
      uVar4 = uVar4 + 8;
      uVar5 = uVar5 + 0x20;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar4) {
      return;
    }
  }
  auVar2 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar6._16_16_ = auVar2;
  auVar6._0_16_ = auVar2;
  auVar1 = vpshufd_avx(ZEXT416(param_2),0);
  auVar2 = vpcmpgtd_avx(auVar1,SUB3216(auVar6 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar1 = vpcmpgtd_avx(auVar1,SUB3216(auVar6 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar7._16_16_ = auVar2;
  auVar7._0_16_ = auVar1;
  auVar2 = vshufps_avx(in_XMM2,in_XMM2,0);
  auVar8._16_16_ = auVar2;
  auVar8._0_16_ = auVar2;
  auVar6 = vmaskmovps_avx(auVar7,auVar8);
  *(undefined1 (*) [32])(param_1 + (int)((uint)uVar4 << 2)) = auVar6;
  return;
}

// ArrayWeightedSumTwoGain_avx @ 140a2b980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumTwoGain_avx
               (longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
               longlong param_5,uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar16 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  
  uVar9 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar9 = param_6;
  }
  auVar14 = in_ZMM1._0_16_;
  auVar16 = in_ZMM3._0_16_;
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    auVar5 = vshufps_avx(auVar14,auVar14,0);
    auVar6 = vshufps_avx(auVar16,auVar16,0);
    uVar11 = 0;
    uVar10 = 0;
    do {
      uVar8 = (ulonglong)uVar11;
      pfVar1 = (float *)(param_1 + uVar8);
      pfVar3 = (float *)(param_1 + 0x10 + uVar8);
      pfVar2 = (float *)(param_3 + uVar8);
      pfVar4 = (float *)(param_3 + 0x10 + uVar8);
      auVar17._0_4_ = auVar5._0_4_ * *pfVar1 + auVar6._0_4_ * *pfVar2;
      auVar17._4_4_ = auVar5._4_4_ * pfVar1[1] + auVar6._4_4_ * pfVar2[1];
      auVar17._8_4_ = auVar5._8_4_ * pfVar1[2] + auVar6._8_4_ * pfVar2[2];
      auVar17._12_4_ = auVar5._12_4_ * pfVar1[3] + auVar6._12_4_ * pfVar2[3];
      auVar18._16_4_ = auVar5._0_4_ * *pfVar3 + auVar6._0_4_ * *pfVar4;
      auVar18._0_16_ = auVar17;
      auVar18._20_4_ = auVar5._4_4_ * pfVar3[1] + auVar6._4_4_ * pfVar4[1];
      auVar18._24_4_ = auVar5._8_4_ * pfVar3[2] + auVar6._8_4_ * pfVar4[2];
      auVar18._28_4_ = auVar5._12_4_ * pfVar3[3] + auVar6._12_4_ * pfVar4[3];
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar8) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar8) = auVar17;
      uVar10 = uVar10 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar10 < (uVar9 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar10) {
      return;
    }
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar12._16_16_ = auVar5;
  auVar12._0_16_ = auVar5;
  auVar6 = vpshufd_avx(ZEXT416(param_6),0);
  auVar5 = vpcmpgtd_avx(auVar6,SUB3216(auVar12 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar6 = vpcmpgtd_avx(auVar6,SUB3216(auVar12 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar13._16_16_ = auVar5;
  auVar13._0_16_ = auVar6;
  lVar7 = (longlong)(int)((uint)uVar10 << 2);
  auVar18 = vmaskmovps_avx(auVar13,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar14 = vshufps_avx(auVar14,auVar14,0);
  auVar12 = vmaskmovps_avx(auVar13,*(undefined1 (*) [32])(param_3 + lVar7));
  auVar16 = vshufps_avx(auVar16,auVar16,0);
  auVar15._0_4_ = auVar14._0_4_ * auVar18._0_4_ + auVar16._0_4_ * auVar12._0_4_;
  auVar15._4_4_ = auVar14._4_4_ * auVar18._4_4_ + auVar16._4_4_ * auVar12._4_4_;
  auVar15._8_4_ = auVar14._8_4_ * auVar18._8_4_ + auVar16._8_4_ * auVar12._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * auVar18._12_4_ + auVar16._12_4_ * auVar12._12_4_;
  auVar15._16_4_ = auVar14._0_4_ * auVar18._16_4_ + auVar16._0_4_ * auVar12._16_4_;
  auVar15._20_4_ = auVar14._4_4_ * auVar18._20_4_ + auVar16._4_4_ * auVar12._20_4_;
  auVar15._24_4_ = auVar14._8_4_ * auVar18._24_4_ + auVar16._8_4_ * auVar12._24_4_;
  auVar15._28_4_ = auVar14._12_4_ * auVar18._28_4_ + auVar16._12_4_ * auVar12._28_4_;
  auVar18 = vmaskmovps_avx(auVar13,auVar15);
  *(undefined1 (*) [32])(param_5 + lVar7) = auVar18;
  return;
}

// ArrayWeightedSumOneGain_avx @ 140a2ba90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumOneGain_avx
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
  uVar7 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar7 = param_5;
  }
  auVar13 = in_ZMM1._0_16_;
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar8 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar5 = vshufps_avx(auVar13,auVar13,0);
    uVar10 = 0;
    uVar8 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_3 + uVar9);
      pfVar4 = (float *)(param_3 + 0x10 + uVar9);
      auVar15._0_4_ = auVar5._0_4_ * *pfVar1 + *pfVar2;
      auVar15._4_4_ = auVar5._4_4_ * pfVar1[1] + pfVar2[1];
      auVar15._8_4_ = auVar5._8_4_ * pfVar1[2] + pfVar2[2];
      auVar15._12_4_ = auVar5._12_4_ * pfVar1[3] + pfVar2[3];
      auVar16._16_4_ = auVar5._0_4_ * *pfVar3 + *pfVar4;
      auVar16._0_16_ = auVar15;
      auVar16._20_4_ = auVar5._4_4_ * pfVar3[1] + pfVar4[1];
      auVar16._24_4_ = auVar5._8_4_ * pfVar3[2] + pfVar4[2];
      auVar16._28_4_ = auVar5._12_4_ * pfVar3[3] + pfVar4[3];
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar9) = auVar16._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar9) = auVar15;
      uVar8 = uVar8 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar8 < (uVar7 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar8) {
      return;
    }
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar8),0);
  auVar11._16_16_ = auVar5;
  auVar11._0_16_ = auVar5;
  auVar15 = vpshufd_avx(ZEXT416(param_5),0);
  auVar5 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar15 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar12._16_16_ = auVar5;
  auVar12._0_16_ = auVar15;
  lVar6 = (longlong)(int)((uint)uVar8 << 2);
  auVar16 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar13 = vshufps_avx(auVar13,auVar13,0);
  auVar11 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_3 + lVar6));
  auVar14._0_4_ = auVar13._0_4_ * auVar16._0_4_ + auVar11._0_4_;
  auVar14._4_4_ = auVar13._4_4_ * auVar16._4_4_ + auVar11._4_4_;
  auVar14._8_4_ = auVar13._8_4_ * auVar16._8_4_ + auVar11._8_4_;
  auVar14._12_4_ = auVar13._12_4_ * auVar16._12_4_ + auVar11._12_4_;
  auVar14._16_4_ = auVar13._0_4_ * auVar16._16_4_ + auVar11._16_4_;
  auVar14._20_4_ = auVar13._4_4_ * auVar16._20_4_ + auVar11._20_4_;
  auVar14._24_4_ = auVar13._8_4_ * auVar16._24_4_ + auVar11._24_4_;
  auVar14._28_4_ = auVar13._12_4_ * auVar16._28_4_ + auVar11._28_4_;
  auVar16 = vmaskmovps_avx(auVar12,auVar14);
  *(undefined1 (*) [32])(param_4 + lVar6) = auVar16;
  return;
}

// ArrayFade_avx @ 140a2bb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade_avx(longlong param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 in_register_00001284 [12];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  auVar14 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar12 = ZEXT416((uint)((param_4 - param_3) / (float)(int)param_2));
  uVar7 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar7 = param_2;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar8 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar4 = vshufps_avx(auVar12,auVar12,0);
    auVar5._4_12_ = in_register_00001284;
    auVar5._0_4_ = param_3;
    auVar3._4_12_ = in_register_00001284;
    auVar3._0_4_ = param_3;
    auVar5 = vshufps_avx(auVar5,auVar3,0);
    uVar10 = 0;
    uVar8 = 0;
    do {
      auVar3 = vpshufd_avx(ZEXT416((uint)uVar8),0);
      auVar17._16_16_ = auVar3;
      auVar17._0_16_ = auVar3;
      auVar17 = vcvtdq2ps_avx(auVar17 | auVar14);
      uVar11 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar11);
      pfVar2 = (float *)(param_1 + 0x10 + uVar11);
      auVar16._0_4_ = (auVar5._0_4_ + auVar4._0_4_ * auVar17._0_4_) * *pfVar1;
      auVar16._4_4_ = (auVar5._4_4_ + auVar4._4_4_ * auVar17._4_4_) * pfVar1[1];
      auVar16._8_4_ = (auVar5._8_4_ + auVar4._8_4_ * auVar17._8_4_) * pfVar1[2];
      auVar16._12_4_ = (auVar5._12_4_ + auVar4._12_4_ * auVar17._12_4_) * pfVar1[3];
      auVar18._16_4_ = (auVar5._0_4_ + auVar4._0_4_ * auVar17._16_4_) * *pfVar2;
      auVar18._0_16_ = auVar16;
      auVar18._20_4_ = (auVar5._4_4_ + auVar4._4_4_ * auVar17._20_4_) * pfVar2[1];
      auVar18._24_4_ = (auVar5._8_4_ + auVar4._8_4_ * auVar17._24_4_) * pfVar2[2];
      auVar18._28_4_ = (auVar5._12_4_ + auVar4._12_4_ * auVar17._28_4_) * pfVar2[3];
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar11) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar11) = auVar16;
      uVar8 = uVar8 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar8 < (uVar7 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar8) {
      return;
    }
  }
  auVar4 = vpshufd_avx(ZEXT416((uint)uVar8),0);
  auVar14._16_16_ = auVar4;
  auVar14._0_16_ = auVar4;
  auVar14 = auVar14 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar5 = vpshufd_avx(ZEXT416(param_2),0);
  auVar4 = vpcmpgtd_avx(auVar5,auVar14._16_16_);
  auVar5 = vpcmpgtd_avx(auVar5,auVar14._0_16_);
  auVar15._16_16_ = auVar4;
  auVar15._0_16_ = auVar5;
  auVar14 = vcvtdq2ps_avx(auVar14);
  auVar12 = vshufps_avx(auVar12,auVar12,0);
  auVar4._4_12_ = in_register_00001284;
  auVar4._0_4_ = param_3;
  auVar6._4_12_ = in_register_00001284;
  auVar6._0_4_ = param_3;
  auVar4 = vshufps_avx(auVar4,auVar6,0);
  lVar9 = (longlong)(int)((uint)uVar8 << 2);
  auVar17 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + lVar9));
  auVar13._0_4_ = (auVar4._0_4_ + auVar12._0_4_ * auVar14._0_4_) * auVar17._0_4_;
  auVar13._4_4_ = (auVar4._4_4_ + auVar12._4_4_ * auVar14._4_4_) * auVar17._4_4_;
  auVar13._8_4_ = (auVar4._8_4_ + auVar12._8_4_ * auVar14._8_4_) * auVar17._8_4_;
  auVar13._12_4_ = (auVar4._12_4_ + auVar12._12_4_ * auVar14._12_4_) * auVar17._12_4_;
  auVar13._16_4_ = (auVar4._0_4_ + auVar12._0_4_ * auVar14._16_4_) * auVar17._16_4_;
  auVar13._20_4_ = (auVar4._4_4_ + auVar12._4_4_ * auVar14._20_4_) * auVar17._20_4_;
  auVar13._24_4_ = (auVar4._8_4_ + auVar12._8_4_ * auVar14._24_4_) * auVar17._24_4_;
  auVar13._28_4_ = (auVar4._12_4_ + auVar12._12_4_ * auVar14._28_4_) * auVar17._28_4_;
  auVar14 = vmaskmovps_avx(auVar15,auVar13);
  *(undefined1 (*) [32])(param_1 + lVar9) = auVar14;
  return;
}

// ArrayFade2_avx @ 140a2bcb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade2_avx(longlong param_1,uint param_2,float param_3,float param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 in_register_00001284 [12];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  auVar14 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar12 = ZEXT416((uint)((param_4 - param_3) / (float)(int)param_2));
  uVar8 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar8 = param_2;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar4 = vshufps_avx(auVar12,auVar12,0);
    auVar5._4_12_ = in_register_00001284;
    auVar5._0_4_ = param_3;
    auVar3._4_12_ = in_register_00001284;
    auVar3._0_4_ = param_3;
    auVar5 = vshufps_avx(auVar5,auVar3,0);
    uVar10 = 0;
    uVar9 = 0;
    do {
      auVar3 = vpshufd_avx(ZEXT416((uint)uVar9),0);
      auVar17._16_16_ = auVar3;
      auVar17._0_16_ = auVar3;
      auVar17 = vcvtdq2ps_avx(auVar17 | auVar14);
      uVar11 = (ulonglong)uVar10;
      pfVar1 = (float *)(param_1 + uVar11);
      pfVar2 = (float *)(param_1 + 0x10 + uVar11);
      auVar16._0_4_ = (auVar5._0_4_ + auVar4._0_4_ * auVar17._0_4_) * *pfVar1;
      auVar16._4_4_ = (auVar5._4_4_ + auVar4._4_4_ * auVar17._4_4_) * pfVar1[1];
      auVar16._8_4_ = (auVar5._8_4_ + auVar4._8_4_ * auVar17._8_4_) * pfVar1[2];
      auVar16._12_4_ = (auVar5._12_4_ + auVar4._12_4_ * auVar17._12_4_) * pfVar1[3];
      auVar18._16_4_ = (auVar5._0_4_ + auVar4._0_4_ * auVar17._16_4_) * *pfVar2;
      auVar18._0_16_ = auVar16;
      auVar18._20_4_ = (auVar5._4_4_ + auVar4._4_4_ * auVar17._20_4_) * pfVar2[1];
      auVar18._24_4_ = (auVar5._8_4_ + auVar4._8_4_ * auVar17._24_4_) * pfVar2[2];
      auVar18._28_4_ = (auVar5._12_4_ + auVar4._12_4_ * auVar17._28_4_) * pfVar2[3];
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar11) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar11) = auVar16;
      uVar9 = uVar9 + 8;
      uVar10 = uVar10 + 0x20;
    } while (uVar9 < (uVar8 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar9) {
      return;
    }
  }
  auVar4 = vpshufd_avx(ZEXT416((uint)uVar9),0);
  auVar14._16_16_ = auVar4;
  auVar14._0_16_ = auVar4;
  auVar14 = auVar14 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar5 = vpshufd_avx(ZEXT416(param_2),0);
  auVar4 = vpcmpgtd_avx(auVar5,auVar14._16_16_);
  auVar5 = vpcmpgtd_avx(auVar5,auVar14._0_16_);
  auVar15._16_16_ = auVar4;
  auVar15._0_16_ = auVar5;
  auVar14 = vcvtdq2ps_avx(auVar14);
  auVar12 = vshufps_avx(auVar12,auVar12,0);
  auVar4._4_12_ = in_register_00001284;
  auVar4._0_4_ = param_3;
  auVar6._4_12_ = in_register_00001284;
  auVar6._0_4_ = param_3;
  auVar4 = vshufps_avx(auVar4,auVar6,0);
  lVar7 = (longlong)(int)((uint)uVar9 << 2);
  auVar17 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar13._0_4_ = (auVar4._0_4_ + auVar12._0_4_ * auVar14._0_4_) * auVar17._0_4_;
  auVar13._4_4_ = (auVar4._4_4_ + auVar12._4_4_ * auVar14._4_4_) * auVar17._4_4_;
  auVar13._8_4_ = (auVar4._8_4_ + auVar12._8_4_ * auVar14._8_4_) * auVar17._8_4_;
  auVar13._12_4_ = (auVar4._12_4_ + auVar12._12_4_ * auVar14._12_4_) * auVar17._12_4_;
  auVar13._16_4_ = (auVar4._0_4_ + auVar12._0_4_ * auVar14._16_4_) * auVar17._16_4_;
  auVar13._20_4_ = (auVar4._4_4_ + auVar12._4_4_ * auVar14._20_4_) * auVar17._20_4_;
  auVar13._24_4_ = (auVar4._8_4_ + auVar12._8_4_ * auVar14._24_4_) * auVar17._24_4_;
  auVar13._28_4_ = (auVar4._12_4_ + auVar12._12_4_ * auVar14._28_4_) * auVar17._28_4_;
  auVar14 = vmaskmovps_avx(auVar15,auVar13);
  *(undefined1 (*) [32])(param_5 + lVar7) = auVar14;
  return;
}

// ArrayMixInWithGain_avx @ 140a2be00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithGain_avx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar15 [32];
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [32];
  
  uVar6 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar5 = vshufps_avx(in_XMM3,in_XMM3,0);
    uVar9 = 0;
    uVar7 = 0;
    do {
      uVar10 = (ulonglong)uVar9;
      pfVar1 = (float *)(param_1 + uVar10);
      pfVar3 = (float *)(param_1 + 0x10 + uVar10);
      pfVar2 = (float *)(param_2 + uVar10);
      pfVar4 = (float *)(param_2 + 0x10 + uVar10);
      auVar13._0_4_ = *pfVar2 + auVar5._0_4_ * *pfVar1;
      auVar13._4_4_ = pfVar2[1] + auVar5._4_4_ * pfVar1[1];
      auVar13._8_4_ = pfVar2[2] + auVar5._8_4_ * pfVar1[2];
      auVar13._12_4_ = pfVar2[3] + auVar5._12_4_ * pfVar1[3];
      auVar14._16_4_ = *pfVar4 + auVar5._0_4_ * *pfVar3;
      auVar14._0_16_ = auVar13;
      auVar14._20_4_ = pfVar4[1] + auVar5._4_4_ * pfVar3[1];
      auVar14._24_4_ = pfVar4[2] + auVar5._8_4_ * pfVar3[2];
      auVar14._28_4_ = pfVar4[3] + auVar5._12_4_ * pfVar3[3];
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar10) = auVar14._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar10) = auVar13;
      uVar7 = uVar7 + 8;
      uVar9 = uVar9 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar11._16_16_ = auVar5;
  auVar11._0_16_ = auVar5;
  auVar13 = vpshufd_avx(ZEXT416(param_3),0);
  auVar5 = vpcmpgtd_avx(auVar13,SUB3216(auVar11 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar13 = vpcmpgtd_avx(auVar13,SUB3216(auVar11 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar12._16_16_ = auVar5;
  auVar12._0_16_ = auVar13;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar14 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar5 = vshufps_avx(in_XMM3,in_XMM3,0);
  auVar11 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar11._0_4_ + auVar5._0_4_ * auVar14._0_4_;
  auVar15._4_4_ = auVar11._4_4_ + auVar5._4_4_ * auVar14._4_4_;
  auVar15._8_4_ = auVar11._8_4_ + auVar5._8_4_ * auVar14._8_4_;
  auVar15._12_4_ = auVar11._12_4_ + auVar5._12_4_ * auVar14._12_4_;
  auVar15._16_4_ = auVar11._16_4_ + auVar5._0_4_ * auVar14._16_4_;
  auVar15._20_4_ = auVar11._20_4_ + auVar5._4_4_ * auVar14._20_4_;
  auVar15._24_4_ = auVar11._24_4_ + auVar5._8_4_ * auVar14._24_4_;
  auVar15._28_4_ = auVar11._28_4_ + auVar5._12_4_ * auVar14._28_4_;
  auVar14 = vmaskmovps_avx(auVar12,auVar15);
  *(undefined1 (*) [32])(param_2 + lVar8) = auVar14;
  return;
}

// ArrayMixIn_avx @ 140a2bef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixIn_avx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar12 [32];
  
  uVar6 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar9 = 0;
    uVar7 = 0;
    do {
      uVar10 = (ulonglong)uVar9;
      pfVar1 = (float *)(param_1 + uVar10);
      pfVar3 = (float *)(param_1 + 0x10 + uVar10);
      pfVar2 = (float *)(param_2 + uVar10);
      pfVar4 = (float *)(param_2 + 0x10 + uVar10);
      auVar11._0_4_ = *pfVar1 + *pfVar2;
      auVar11._4_4_ = pfVar1[1] + pfVar2[1];
      auVar11._8_4_ = pfVar1[2] + pfVar2[2];
      auVar11._12_4_ = pfVar1[3] + pfVar2[3];
      auVar12._16_4_ = *pfVar3 + *pfVar4;
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = pfVar3[1] + pfVar4[1];
      auVar12._24_4_ = pfVar3[2] + pfVar4[2];
      auVar12._28_4_ = pfVar3[3] + pfVar4[3];
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar10) = auVar12._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar10) = auVar11;
      uVar7 = uVar7 + 8;
      uVar9 = uVar9 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar11;
  auVar5 = vpshufd_avx(ZEXT416(param_3),0);
  auVar11 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar5 = vpcmpgtd_avx(auVar5,SUB3216(auVar13 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar5;
  lVar8 = (longlong)(int)((uint)uVar7 << 2);
  auVar12 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_1 + lVar8));
  auVar13 = vmaskmovps_avx(auVar14,*(undefined1 (*) [32])(param_2 + lVar8));
  auVar15._0_4_ = auVar12._0_4_ + auVar13._0_4_;
  auVar15._4_4_ = auVar12._4_4_ + auVar13._4_4_;
  auVar15._8_4_ = auVar12._8_4_ + auVar13._8_4_;
  auVar15._12_4_ = auVar12._12_4_ + auVar13._12_4_;
  auVar15._16_4_ = auVar12._16_4_ + auVar13._16_4_;
  auVar15._20_4_ = auVar12._20_4_ + auVar13._20_4_;
  auVar15._24_4_ = auVar12._24_4_ + auVar13._24_4_;
  auVar15._28_4_ = auVar12._28_4_ + auVar13._28_4_;
  auVar12 = vmaskmovps_avx(auVar14,auVar15);
  *(undefined1 (*) [32])(param_2 + lVar8) = auVar12;
  return;
}

// ArrayMixInWithDelta_avx @ 140a2bfc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithDelta_avx
               (longlong param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 in_register_000012c4 [12];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  
  auVar16 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar14 = ZEXT416((uint)((param_5 - param_4) / (float)(int)param_3));
  uVar9 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar9 = param_3;
  }
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar6 = vshufps_avx(auVar14,auVar14,0);
    auVar7._4_12_ = in_register_000012c4;
    auVar7._0_4_ = param_4;
    auVar5._4_12_ = in_register_000012c4;
    auVar5._0_4_ = param_4;
    auVar7 = vshufps_avx(auVar7,auVar5,0);
    uVar12 = 0;
    uVar10 = 0;
    do {
      auVar5 = vpshufd_avx(ZEXT416((uint)uVar10),0);
      auVar19._16_16_ = auVar5;
      auVar19._0_16_ = auVar5;
      auVar19 = vcvtdq2ps_avx(auVar19 | auVar16);
      uVar13 = (ulonglong)uVar12;
      pfVar1 = (float *)(param_1 + uVar13);
      pfVar3 = (float *)(param_1 + 0x10 + uVar13);
      pfVar2 = (float *)(param_2 + uVar13);
      pfVar4 = (float *)(param_2 + 0x10 + uVar13);
      auVar18._0_4_ = *pfVar2 + (auVar7._0_4_ + auVar6._0_4_ * auVar19._0_4_) * *pfVar1;
      auVar18._4_4_ = pfVar2[1] + (auVar7._4_4_ + auVar6._4_4_ * auVar19._4_4_) * pfVar1[1];
      auVar18._8_4_ = pfVar2[2] + (auVar7._8_4_ + auVar6._8_4_ * auVar19._8_4_) * pfVar1[2];
      auVar18._12_4_ = pfVar2[3] + (auVar7._12_4_ + auVar6._12_4_ * auVar19._12_4_) * pfVar1[3];
      auVar20._16_4_ = *pfVar4 + (auVar7._0_4_ + auVar6._0_4_ * auVar19._16_4_) * *pfVar3;
      auVar20._0_16_ = auVar18;
      auVar20._20_4_ = pfVar4[1] + (auVar7._4_4_ + auVar6._4_4_ * auVar19._20_4_) * pfVar3[1];
      auVar20._24_4_ = pfVar4[2] + (auVar7._8_4_ + auVar6._8_4_ * auVar19._24_4_) * pfVar3[2];
      auVar20._28_4_ = pfVar4[3] + (auVar7._12_4_ + auVar6._12_4_ * auVar19._28_4_) * pfVar3[3];
      *(undefined1 (*) [16])(param_2 + 0x10 + uVar13) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_2 + uVar13) = auVar18;
      uVar10 = uVar10 + 8;
      uVar12 = uVar12 + 0x20;
    } while (uVar10 < (uVar9 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar10) {
      return;
    }
  }
  auVar6 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar16._16_16_ = auVar6;
  auVar16._0_16_ = auVar6;
  auVar16 = auVar16 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar7 = vpshufd_avx(ZEXT416(param_3),0);
  auVar6 = vpcmpgtd_avx(auVar7,auVar16._16_16_);
  auVar7 = vpcmpgtd_avx(auVar7,auVar16._0_16_);
  auVar17._16_16_ = auVar6;
  auVar17._0_16_ = auVar7;
  auVar16 = vcvtdq2ps_avx(auVar16);
  auVar14 = vshufps_avx(auVar14,auVar14,0);
  auVar6._4_12_ = in_register_000012c4;
  auVar6._0_4_ = param_4;
  auVar8._4_12_ = in_register_000012c4;
  auVar8._0_4_ = param_4;
  auVar6 = vshufps_avx(auVar6,auVar8,0);
  lVar11 = (longlong)(int)((uint)uVar10 << 2);
  auVar19 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_1 + lVar11));
  auVar20 = vmaskmovps_avx(auVar17,*(undefined1 (*) [32])(param_2 + lVar11));
  auVar15._0_4_ = auVar20._0_4_ + (auVar6._0_4_ + auVar14._0_4_ * auVar16._0_4_) * auVar19._0_4_;
  auVar15._4_4_ = auVar20._4_4_ + (auVar6._4_4_ + auVar14._4_4_ * auVar16._4_4_) * auVar19._4_4_;
  auVar15._8_4_ = auVar20._8_4_ + (auVar6._8_4_ + auVar14._8_4_ * auVar16._8_4_) * auVar19._8_4_;
  auVar15._12_4_ =
       auVar20._12_4_ + (auVar6._12_4_ + auVar14._12_4_ * auVar16._12_4_) * auVar19._12_4_;
  auVar15._16_4_ = auVar20._16_4_ + (auVar6._0_4_ + auVar14._0_4_ * auVar16._16_4_) * auVar19._16_4_
  ;
  auVar15._20_4_ = auVar20._20_4_ + (auVar6._4_4_ + auVar14._4_4_ * auVar16._20_4_) * auVar19._20_4_
  ;
  auVar15._24_4_ = auVar20._24_4_ + (auVar6._8_4_ + auVar14._8_4_ * auVar16._24_4_) * auVar19._24_4_
  ;
  auVar15._28_4_ =
       auVar20._28_4_ + (auVar6._12_4_ + auVar14._12_4_ * auVar16._28_4_) * auVar19._28_4_;
  auVar16 = vmaskmovps_avx(auVar17,auVar15);
  *(undefined1 (*) [32])(param_2 + lVar11) = auVar16;
  return;
}

// TransformArrayRow_avx @ 140a2c120

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformArrayRow_avx
               (longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [64];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  
  uVar10 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar10 = param_5;
  }
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar11 = 0;
    auVar13 = ZEXT1632(ZEXT816(0));
    auVar12 = ZEXT1632(ZEXT816(0));
    if ((int)param_5 < 1) goto LAB_140a2c1e8;
  }
  else {
    auVar14 = ZEXT864(0);
    uVar8 = 0;
    uVar11 = 0;
    do {
      uVar9 = (ulonglong)uVar8;
      pfVar1 = (float *)(param_1 + uVar9);
      pfVar3 = (float *)(param_1 + 0x10 + uVar9);
      pfVar2 = (float *)(param_2 + uVar9);
      pfVar4 = (float *)(param_2 + 0x10 + uVar9);
      auVar12._0_4_ = auVar14._0_4_ + *pfVar1 * *pfVar2;
      auVar12._4_4_ = auVar14._4_4_ + pfVar1[1] * pfVar2[1];
      auVar12._8_4_ = auVar14._8_4_ + pfVar1[2] * pfVar2[2];
      auVar12._12_4_ = auVar14._12_4_ + pfVar1[3] * pfVar2[3];
      auVar12._16_4_ = auVar14._16_4_ + *pfVar3 * *pfVar4;
      auVar12._20_4_ = auVar14._20_4_ + pfVar3[1] * pfVar4[1];
      auVar12._24_4_ = auVar14._24_4_ + pfVar3[2] * pfVar4[2];
      auVar12._28_4_ = auVar14._28_4_ + pfVar3[3] * pfVar4[3];
      auVar14 = ZEXT3264(auVar12);
      uVar11 = uVar11 + 8;
      uVar8 = uVar8 + 0x20;
    } while (uVar11 < (uVar10 & 0xfffffff8));
    auVar13 = auVar12;
    if ((int)param_5 <= (int)uVar11) goto LAB_140a2c1e8;
  }
  auVar5 = vpshufd_avx(ZEXT416((uint)uVar11),0);
  auVar15._16_16_ = auVar5;
  auVar15._0_16_ = auVar5;
  auVar6 = vpshufd_avx(ZEXT416(param_5),0);
  auVar5 = vpcmpgtd_avx(auVar6,SUB3216(auVar15 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0x10));
  auVar6 = vpcmpgtd_avx(auVar6,SUB3216(auVar15 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar16._16_16_ = auVar5;
  auVar16._0_16_ = auVar6;
  lVar7 = (longlong)(int)((uint)uVar11 << 2);
  auVar12 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_1 + lVar7));
  auVar15 = vmaskmovps_avx(auVar16,*(undefined1 (*) [32])(param_2 + lVar7));
  auVar17._0_4_ = auVar12._0_4_ * auVar15._0_4_;
  auVar17._4_4_ = auVar12._4_4_ * auVar15._4_4_;
  auVar17._8_4_ = auVar12._8_4_ * auVar15._8_4_;
  auVar17._12_4_ = auVar12._12_4_ * auVar15._12_4_;
  auVar17._16_4_ = auVar12._16_4_ * auVar15._16_4_;
  auVar17._20_4_ = auVar12._20_4_ * auVar15._20_4_;
  auVar17._24_4_ = auVar12._24_4_ * auVar15._24_4_;
  auVar17._28_4_ = auVar12._28_4_ * auVar15._28_4_;
  auVar18._4_4_ = __real_80000000;
  auVar18._0_4_ = __real_80000000;
  auVar18._8_4_ = __real_80000000;
  auVar18._12_4_ = __real_80000000;
  auVar18._16_4_ = __real_80000000;
  auVar18._20_4_ = __real_80000000;
  auVar18._24_4_ = __real_80000000;
  auVar18._28_4_ = __real_80000000;
  auVar15 = vblendvps_avx(auVar18,auVar17,auVar16);
  auVar12._0_4_ = auVar13._0_4_ + auVar15._0_4_;
  auVar12._4_4_ = auVar13._4_4_ + auVar15._4_4_;
  auVar12._8_4_ = auVar13._8_4_ + auVar15._8_4_;
  auVar12._12_4_ = auVar13._12_4_ + auVar15._12_4_;
  auVar12._16_4_ = auVar13._16_4_ + auVar15._16_4_;
  auVar12._20_4_ = auVar13._20_4_ + auVar15._20_4_;
  auVar12._24_4_ = auVar13._24_4_ + auVar15._24_4_;
  auVar12._28_4_ = auVar13._28_4_ + auVar15._28_4_;
LAB_140a2c1e8:
  auVar13 = vhaddps_avx(auVar12,auVar12);
  auVar13 = vhaddps_avx(auVar13,auVar13);
  *(float *)(param_3 + (longlong)param_4 * 4) =
       auVar13._0_4_ + auVar13._16_4_ + *(float *)(param_3 + (longlong)param_4 * 4);
  return;
}

// ArrayFloatToPcm16_avx @ 140a2c230

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFloatToPcm16_avx(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
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
  
  fVar3 = __real_46fffe00;
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
      pfVar2 = (float *)(param_1 + 0x10 + (ulonglong)uVar7);
      auVar11._0_4_ = (int)(*pfVar1 * fVar3);
      auVar11._4_4_ = (int)(pfVar1[1] * fVar3);
      auVar11._8_4_ = (int)(pfVar1[2] * fVar3);
      auVar11._12_4_ = (int)(pfVar1[3] * fVar3);
      auVar12._16_4_ = (int)(*pfVar2 * fVar3);
      auVar12._0_16_ = auVar11;
      auVar12._20_4_ = (int)(pfVar2[1] * fVar3);
      auVar12._24_4_ = (int)(pfVar2[2] * fVar3);
      auVar12._28_4_ = (int)(pfVar2[3] * fVar3);
      auVar11 = vpackssdw_avx(auVar11,auVar12._16_16_);
      *(undefined1 (*) [16])(param_2 + uVar4 * 2) = auVar11;
      uVar4 = uVar4 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar4 < (uVar6 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  uVar6 = (uint)uVar4;
  auVar11 = vpshufd_avx(ZEXT416(uVar6),0);
  auVar9._16_16_ = auVar11;
  auVar9._0_16_ = auVar11;
  auVar8 = vpshufd_avx(ZEXT416(param_3),0);
  auVar11 = vpcmpgtd_avx(auVar8,SUB3216(auVar9 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar8 = vpcmpgtd_avx(auVar8,SUB3216(auVar9 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar13._16_16_ = auVar11;
  auVar13._0_16_ = auVar8;
  auVar12 = vmaskmovps_avx(auVar13,*(undefined1 (*) [32])(param_1 + (int)(uVar6 << 2)));
  auVar8._0_4_ = (int)(auVar12._0_4_ *
                      ___ymm_46fffe0046fffe0046fffe0046fffe0046fffe0046fffe0046fffe0046fffe00);
  auVar8._4_4_ = (int)(auVar12._4_4_ * _UNK_150d5ab24);
  auVar8._8_4_ = (int)(auVar12._8_4_ * _UNK_150d5ab28);
  auVar8._12_4_ = (int)(auVar12._12_4_ * _UNK_150d5ab2c);
  auVar10._16_4_ = (int)(auVar12._16_4_ * _UNK_150d5ab30);
  auVar10._0_16_ = auVar8;
  auVar10._20_4_ = (int)(auVar12._20_4_ * _UNK_150d5ab34);
  auVar10._24_4_ = (int)(auVar12._24_4_ * _UNK_150d5ab38);
  auVar10._28_4_ = (int)(auVar12._28_4_ * _UNK_150d5ab3c);
  auVar11 = vpackssdw_avx(auVar8,auVar10._16_16_);
  lVar5 = (longlong)(int)(uVar6 * 2);
  uVar6 = vmovmskps_avx(auVar13);
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

// ArrayPcm16ToFloat_avx @ 140a2c3a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPcm16ToFloat_avx(longlong param_1,longlong param_2,uint param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  ushort *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar11 [16];
  undefined1 auVar10 [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar14 [32];
  
  fVar2 = __real_38000100;
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
    uVar4 = 0;
    uVar7 = 0;
    do {
      auVar18._8_8_ = 0;
      auVar18._0_8_ = *(ulonglong *)(param_1 + 8 + uVar7 * 2);
      auVar18 = vpmovsxwd_avx(auVar18);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulonglong *)(param_1 + uVar7 * 2);
      auVar1 = vpmovsxwd_avx(auVar1);
      auVar13._16_16_ = auVar18;
      auVar13._0_16_ = auVar1;
      auVar13 = vcvtdq2ps_avx(auVar13);
      auVar12._0_4_ = auVar13._0_4_ * fVar2;
      auVar12._4_4_ = auVar13._4_4_ * fVar2;
      auVar12._8_4_ = auVar13._8_4_ * fVar2;
      auVar12._12_4_ = auVar13._12_4_ * fVar2;
      auVar14._16_4_ = auVar13._16_4_ * fVar2;
      auVar14._0_16_ = auVar12;
      auVar14._20_4_ = auVar13._20_4_ * fVar2;
      auVar14._24_4_ = auVar13._24_4_ * fVar2;
      auVar14._28_4_ = auVar13._28_4_ * fVar2;
      *(undefined1 (*) [16])(param_2 + 0x10 + (ulonglong)uVar4) = auVar14._16_16_;
      *(undefined1 (*) [16])(param_2 + (ulonglong)uVar4) = auVar12;
      uVar7 = uVar7 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar7 < (uVar5 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
  }
  uVar5 = (uint)uVar7;
  auVar18 = vpshufd_avx(ZEXT416(uVar5),0);
  auVar9._16_16_ = auVar18;
  auVar9._0_16_ = auVar18;
  auVar12 = vpshufd_avx(ZEXT416(param_3),0);
  auVar8 = SUB3216(auVar9 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000,
                   0);
  auVar11 = SUB3216(auVar9 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                    ,0x10);
  auVar18 = vpcmpgtd_avx(auVar12,auVar11);
  auVar1 = vpcmpgtd_avx(auVar12,auVar8);
  auVar17._16_16_ = auVar18;
  auVar17._0_16_ = auVar1;
  uVar6 = vmovmskps_avx(auVar17);
  if ((~(byte)uVar6 & 0x81) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + (int)(uVar5 * 2));
  }
  else {
    puVar3 = (ushort *)(param_1 + (int)(uVar5 * 2));
    auVar1 = vpcmpgtd_avx(auVar12,auVar11);
    auVar18 = vpcmpgtd_avx(auVar12,auVar8);
    auVar19._16_16_ = auVar1;
    auVar19._0_16_ = auVar18;
    uVar4 = vmovmskps_avx(auVar19);
    if ((uVar4 & 1) != 0) {
      auVar18 = ZEXT216(*puVar3);
    }
    if ((uVar4 & 2) != 0) {
      auVar18 = vpinsrw_avx(auVar18,(uint)puVar3[1],1);
    }
    if ((uVar4 & 4) != 0) {
      auVar18 = vpinsrw_avx(auVar18,(uint)puVar3[2],2);
    }
    if ((uVar4 & 8) != 0) {
      auVar18 = vpinsrw_avx(auVar18,(uint)puVar3[3],3);
    }
    if ((uVar4 & 0x10) != 0) {
      auVar18 = vpinsrw_avx(auVar18,(uint)puVar3[4],4);
    }
    if ((uVar4 & 0x20) != 0) {
      auVar18 = vpinsrw_avx(auVar18,(uint)puVar3[5],5);
    }
    if ((uVar4 & 0x40) != 0) {
      auVar18 = vpinsrw_avx(auVar18,(uint)puVar3[6],6);
    }
    if ((uVar4 & 0x80) != 0) {
      auVar18 = vpinsrw_avx(auVar18,(uint)puVar3[7],7);
    }
  }
  auVar1 = vpcmpgtd_avx(auVar12,auVar11);
  auVar12 = vpcmpgtd_avx(auVar12,auVar8);
  auVar10._16_16_ = auVar1;
  auVar10._0_16_ = auVar12;
  auVar1 = vpmovsxwd_avx(auVar18);
  auVar18 = vpshufd_avx(auVar18,0xee);
  auVar18 = vpmovsxwd_avx(auVar18);
  auVar15._16_16_ = auVar18;
  auVar15._0_16_ = auVar1;
  auVar13 = vcvtdq2ps_avx(auVar15);
  auVar16._0_4_ =
       auVar13._0_4_ * ___ymm_3800010038000100380001003800010038000100380001003800010038000100;
  auVar16._4_4_ = auVar13._4_4_ * _UNK_150d5ab44;
  auVar16._8_4_ = auVar13._8_4_ * _UNK_150d5ab48;
  auVar16._12_4_ = auVar13._12_4_ * _UNK_150d5ab4c;
  auVar16._16_4_ = auVar13._16_4_ * _UNK_150d5ab50;
  auVar16._20_4_ = auVar13._20_4_ * _UNK_150d5ab54;
  auVar16._24_4_ = auVar13._24_4_ * _UNK_150d5ab58;
  auVar16._28_4_ = auVar13._28_4_ * _UNK_150d5ab5c;
  auVar13 = vmaskmovps_avx(auVar10,auVar16);
  *(undefined1 (*) [32])(param_2 + (int)(uVar5 * 4)) = auVar13;
  return;
}

// ArrayAPFLongDelayProcess_avx @ 140a2c5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAPFLongDelayProcess_avx
               (longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
               uint param_6)

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
  float fVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar18;
  undefined1 auVar17 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  float fVar23;
  float fVar25;
  undefined1 auVar28 [32];
  undefined1 auVar31 [32];
  
  uVar14 = param_3 + 7;
  if (-1 < (int)param_3) {
    uVar14 = param_3;
  }
  if ((int)(uVar14 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar27 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    fVar18 = auVar27._0_4_;
    fVar21 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
    fVar23 = auVar27._4_4_;
    fVar22 = (float)((uint)fVar23 ^ _UNK_150651574);
    fVar25 = auVar27._8_4_;
    fVar16 = auVar27._12_4_;
    fVar24 = (float)((uint)fVar25 ^ _UNK_150651578);
    fVar26 = (float)((uint)fVar16 ^ _UNK_15065157c);
    uVar11 = 0;
    uVar15 = 0;
    do {
      uVar12 = (ulonglong)uVar11;
      pfVar1 = (float *)(param_2 + uVar12);
      fVar3 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar1 = (float *)(param_2 + 0x10 + uVar12);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar1 = (float *)(param_1 + uVar12);
      pfVar2 = (float *)(param_1 + 0x10 + uVar12);
      auVar30._0_4_ = fVar18 * fVar3 + *pfVar1;
      auVar30._4_4_ = fVar23 * fVar4 + pfVar1[1];
      auVar30._8_4_ = fVar25 * fVar5 + pfVar1[2];
      auVar30._12_4_ = fVar16 * fVar6 + pfVar1[3];
      auVar31._16_4_ = fVar18 * fVar7 + *pfVar2;
      auVar31._0_16_ = auVar30;
      auVar31._20_4_ = fVar23 * fVar8 + pfVar2[1];
      auVar31._24_4_ = fVar25 * fVar9 + pfVar2[2];
      auVar31._28_4_ = fVar16 * fVar10 + pfVar2[3];
      *(undefined1 (*) [16])(param_5 + 0x10 + uVar12) = auVar31._16_16_;
      *(undefined1 (*) [16])(param_5 + uVar12) = auVar30;
      auVar27._0_4_ = fVar21 * auVar30._0_4_ + fVar3;
      auVar27._4_4_ = fVar22 * auVar30._4_4_ + fVar4;
      auVar27._8_4_ = fVar24 * auVar30._8_4_ + fVar5;
      auVar27._12_4_ = fVar26 * auVar30._12_4_ + fVar6;
      auVar28._16_4_ = fVar21 * auVar31._16_4_ + fVar7;
      auVar28._0_16_ = auVar27;
      auVar28._20_4_ = fVar22 * auVar31._20_4_ + fVar8;
      auVar28._24_4_ = fVar24 * auVar31._24_4_ + fVar9;
      auVar28._28_4_ = fVar26 * auVar31._28_4_ + fVar10;
      *(undefined1 (*) [16])(param_4 + 0x10 + uVar12) = auVar28._16_16_;
      *(undefined1 (*) [16])(param_4 + uVar12) = auVar27;
      uVar15 = uVar15 + 8;
      uVar11 = uVar11 + 0x20;
    } while (uVar15 < (uVar14 & 0xfffffff8));
    if ((int)param_3 <= (int)uVar15) {
      return;
    }
  }
  auVar27 = vpshufd_avx(ZEXT416((uint)uVar15),0);
  auVar19._16_16_ = auVar27;
  auVar19._0_16_ = auVar27;
  auVar30 = vpshufd_avx(ZEXT416(param_3),0);
  auVar27 = vpcmpgtd_avx(auVar30,SUB3216(auVar19 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0x10));
  auVar30 = vpcmpgtd_avx(auVar30,SUB3216(auVar19 | 
                                         ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                         ,0));
  auVar20._16_16_ = auVar27;
  auVar20._0_16_ = auVar30;
  lVar13 = (longlong)(int)((uint)uVar15 << 2);
  auVar31 = vmaskmovps_avx(auVar20,*(undefined1 (*) [32])(param_2 + lVar13));
  auVar27 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar16 = auVar27._0_4_;
  fVar21 = auVar27._4_4_;
  fVar18 = auVar27._8_4_;
  fVar22 = auVar27._12_4_;
  auVar28 = vmaskmovps_avx(auVar20,*(undefined1 (*) [32])(param_1 + lVar13));
  auVar29._0_4_ = fVar16 * auVar31._0_4_ + auVar28._0_4_;
  auVar29._4_4_ = fVar21 * auVar31._4_4_ + auVar28._4_4_;
  auVar29._8_4_ = fVar18 * auVar31._8_4_ + auVar28._8_4_;
  auVar29._12_4_ = fVar22 * auVar31._12_4_ + auVar28._12_4_;
  auVar29._16_4_ = fVar16 * auVar31._16_4_ + auVar28._16_4_;
  auVar29._20_4_ = fVar21 * auVar31._20_4_ + auVar28._20_4_;
  auVar29._24_4_ = fVar18 * auVar31._24_4_ + auVar28._24_4_;
  auVar29._28_4_ = fVar22 * auVar31._28_4_ + auVar28._28_4_;
  auVar28 = vmaskmovps_avx(auVar20,auVar29);
  *(undefined1 (*) [32])(param_5 + lVar13) = auVar28;
  auVar28 = vmaskmovps_avx(auVar20,*(undefined1 (*) [32])(param_5 + lVar13));
  auVar17._0_4_ = fVar16 * auVar28._0_4_;
  auVar17._4_4_ = fVar21 * auVar28._4_4_;
  auVar17._8_4_ = fVar18 * auVar28._8_4_;
  auVar17._12_4_ = fVar22 * auVar28._12_4_;
  auVar17._16_4_ = fVar16 * auVar28._16_4_;
  auVar17._20_4_ = fVar21 * auVar28._20_4_;
  auVar17._24_4_ = fVar18 * auVar28._24_4_;
  auVar17._28_4_ = fVar22 * auVar28._28_4_;
  auVar28 = vsubps_avx(auVar31,auVar17);
  auVar28 = vmaskmovps_avx(auVar20,auVar28);
  *(undefined1 (*) [32])(param_4 + lVar13) = auVar28;
  return;
}

// ArrayLerpFractionalDelay_avx @ 140a2c6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpFractionalDelay_avx
               (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               longlong param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  
  uVar6 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar6 = param_5;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar7 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar15 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar10._16_16_ = auVar15;
    auVar10._0_16_ = auVar15;
    uVar4 = 0;
    auVar14._4_4_ = __real_3f800000;
    auVar14._0_4_ = __real_3f800000;
    auVar14._8_4_ = __real_3f800000;
    auVar14._12_4_ = __real_3f800000;
    auVar14._16_4_ = __real_3f800000;
    auVar14._20_4_ = __real_3f800000;
    auVar14._24_4_ = __real_3f800000;
    auVar14._28_4_ = __real_3f800000;
    uVar7 = 0;
    do {
      uVar5 = (ulonglong)uVar4;
      auVar16._16_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar5);
      auVar16._0_16_ = *(undefined1 (*) [16])(param_2 + uVar5);
      auVar16 = vmaxps_avx(auVar16,ZEXT1232(ZEXT812(0)));
      auVar16 = vminps_avx(auVar16,auVar10);
      auVar8 = vroundps_avx(auVar16,9);
      auVar15._0_4_ = (int)auVar8._0_4_;
      auVar15._4_4_ = (int)auVar8._4_4_;
      auVar15._8_4_ = (int)auVar8._8_4_;
      auVar15._12_4_ = (int)auVar8._12_4_;
      auVar22._16_4_ = (int)auVar8._16_4_;
      auVar22._0_16_ = auVar15;
      auVar22._20_4_ = (int)auVar8._20_4_;
      auVar22._24_4_ = (int)auVar8._24_4_;
      auVar22._28_4_ = (int)auVar8._28_4_;
      auVar15 = vpsubd_avx(*(undefined1 (*) [16])(param_4 + uVar5),auVar15);
      auVar2 = vpsubd_avx(*(undefined1 (*) [16])(param_4 + 0x10 + uVar5),auVar22._16_16_);
      auVar19 = vpslld_avx(auVar15,2);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar19._0_4_)),
                              ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar19._4_4_)),0x10);
      auVar1 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + auVar19._0_4_)),
                             ZEXT416(*(uint *)(param_3 + auVar19._4_4_)),0x10);
      auVar21 = vpslld_avx(auVar2,2);
      auVar2 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar21._0_4_)),
                             ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar21._4_4_)),0x10);
      auVar20 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + auVar21._0_4_)),
                              ZEXT416(*(uint *)(param_3 + auVar21._4_4_)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar19._8_4_)),0x20
                             );
      auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)(param_3 + auVar19._8_4_)),0x20);
      auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar21._8_4_)),0x20);
      auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + auVar21._8_4_)),0x20);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar19._12_4_)),
                              0x30);
      auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)(param_3 + auVar19._12_4_)),0x30);
      auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_3 + 4 + (longlong)auVar21._12_4_)),0x30)
      ;
      auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + auVar21._12_4_)),0x30);
      auVar16 = vsubps_avx(auVar16,auVar8);
      auVar8 = vsubps_avx(auVar14,auVar16);
      auVar19._0_4_ = auVar8._0_4_ * auVar15._0_4_ + auVar16._0_4_ * auVar1._0_4_;
      auVar19._4_4_ = auVar8._4_4_ * auVar15._4_4_ + auVar16._4_4_ * auVar1._4_4_;
      auVar19._8_4_ = auVar8._8_4_ * auVar15._8_4_ + auVar16._8_4_ * auVar1._8_4_;
      auVar19._12_4_ = auVar8._12_4_ * auVar15._12_4_ + auVar16._12_4_ * auVar1._12_4_;
      auVar17._16_4_ = auVar8._16_4_ * auVar2._0_4_ + auVar16._16_4_ * auVar20._0_4_;
      auVar17._0_16_ = auVar19;
      auVar17._20_4_ = auVar8._20_4_ * auVar2._4_4_ + auVar16._20_4_ * auVar20._4_4_;
      auVar17._24_4_ = auVar8._24_4_ * auVar2._8_4_ + auVar16._24_4_ * auVar20._8_4_;
      auVar17._28_4_ = auVar8._28_4_ * auVar2._12_4_ + auVar16._28_4_ * auVar20._12_4_;
      *(undefined1 (*) [16])(param_6 + 0x10 + uVar5) = auVar17._16_16_;
      *(undefined1 (*) [16])(param_6 + uVar5) = auVar19;
      uVar7 = uVar7 + 8;
      uVar4 = uVar4 + 0x20;
    } while (uVar7 < (uVar6 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar7) {
      return;
    }
  }
  auVar15 = vpshufd_avx(ZEXT416((uint)uVar7),0);
  auVar11._16_16_ = auVar15;
  auVar11._0_16_ = auVar15;
  auVar15 = vpshufd_avx(ZEXT416(param_5),0);
  auVar1 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar2 = vpcmpgtd_avx(auVar15,SUB3216(auVar11 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0));
  auVar12._16_16_ = auVar1;
  auVar12._0_16_ = auVar2;
  lVar3 = (longlong)(int)((uint)uVar7 << 2);
  auVar10 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_2 + lVar3));
  auVar10 = vmaxps_avx(auVar10,ZEXT1232(ZEXT812(0)));
  auVar15 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
  auVar8._16_16_ = auVar15;
  auVar8._0_16_ = auVar15;
  auVar10 = vminps_avx(auVar10,auVar8);
  auVar14 = vroundps_avx(auVar10,9);
  auVar20._0_4_ = (int)auVar14._0_4_;
  auVar20._4_4_ = (int)auVar14._4_4_;
  auVar20._8_4_ = (int)auVar14._8_4_;
  auVar20._12_4_ = (int)auVar14._12_4_;
  auVar18._16_4_ = (int)auVar14._16_4_;
  auVar18._0_16_ = auVar20;
  auVar18._20_4_ = (int)auVar14._20_4_;
  auVar18._24_4_ = (int)auVar14._24_4_;
  auVar18._28_4_ = (int)auVar14._28_4_;
  auVar16 = vmaskmovps_avx(auVar12,*(undefined1 (*) [32])(param_4 + lVar3));
  auVar15 = vpsubd_avx(auVar16._0_16_,auVar20);
  auVar20 = vpsubd_avx(auVar16._16_16_,auVar18._16_16_);
  auVar20 = vpslld_avx(auVar20,2);
  auVar15 = vpslld_avx(auVar15,2);
  auVar19 = vpand_avx(auVar2,auVar15);
  auVar20 = vpand_avx(auVar1,auVar20);
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(auVar1._0_4_ & _UNK_150b50d50) +
                                           param_3 + auVar20._0_4_)),
                          ZEXT416(*(uint *)((ulonglong)(auVar1._4_4_ & _UNK_150b50d54) +
                                           param_3 + auVar20._4_4_)),0x10);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(auVar1._8_4_ & _UNK_150b50d58) +
                                                   param_3 + auVar20._8_4_)),0x20);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(auVar1._12_4_ & _UNK_150b50d5c) +
                                                   param_3 + auVar20._12_4_)),0x30);
  auVar1 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                           (auVar2._0_4_ &
                                           ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                           ) + param_3 + auVar19._0_4_)),
                         ZEXT416(*(uint *)((ulonglong)(auVar2._4_4_ & _UNK_150b50d44) +
                                          param_3 + auVar19._4_4_)),0x10);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((ulonglong)(auVar2._8_4_ & _UNK_150b50d48) +
                                                 param_3 + auVar19._8_4_)),0x20);
  auVar1 = vinsertps_avx(auVar1,ZEXT416(*(uint *)((ulonglong)(auVar2._12_4_ & _UNK_150b50d4c) +
                                                 param_3 + auVar19._12_4_)),0x30);
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + auVar20._0_4_)),
                         ZEXT416(*(uint *)(param_3 + auVar20._4_4_)),0x10);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_3 + auVar20._8_4_)),0x20);
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_3 + auVar20._12_4_)),0x30);
  auVar20 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + auVar19._0_4_)),
                          ZEXT416(*(uint *)(param_3 + auVar19._4_4_)),0x10);
  auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + auVar19._8_4_)),0x20);
  auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + auVar19._12_4_)),0x30);
  auVar10 = vsubps_avx(auVar10,auVar14);
  auVar13._4_4_ = __real_3f800000;
  auVar13._0_4_ = __real_3f800000;
  auVar13._8_4_ = __real_3f800000;
  auVar13._12_4_ = __real_3f800000;
  auVar13._16_4_ = __real_3f800000;
  auVar13._20_4_ = __real_3f800000;
  auVar13._24_4_ = __real_3f800000;
  auVar13._28_4_ = __real_3f800000;
  auVar14 = vsubps_avx(auVar13,auVar10);
  auVar9._0_4_ = auVar14._0_4_ * auVar1._0_4_ + auVar10._0_4_ * auVar20._0_4_;
  auVar9._4_4_ = auVar14._4_4_ * auVar1._4_4_ + auVar10._4_4_ * auVar20._4_4_;
  auVar9._8_4_ = auVar14._8_4_ * auVar1._8_4_ + auVar10._8_4_ * auVar20._8_4_;
  auVar9._12_4_ = auVar14._12_4_ * auVar1._12_4_ + auVar10._12_4_ * auVar20._12_4_;
  auVar9._16_4_ = auVar14._16_4_ * auVar15._0_4_ + auVar10._16_4_ * auVar2._0_4_;
  auVar9._20_4_ = auVar14._20_4_ * auVar15._4_4_ + auVar10._20_4_ * auVar2._4_4_;
  auVar9._24_4_ = auVar14._24_4_ * auVar15._8_4_ + auVar10._24_4_ * auVar2._8_4_;
  auVar9._28_4_ = auVar14._28_4_ * auVar15._12_4_ + auVar10._28_4_ * auVar2._12_4_;
  auVar10 = vmaskmovps_avx(auVar12,auVar9);
  *(undefined1 (*) [32])(param_6 + lVar3) = auVar10;
  return;
}

// ArrayScaledComplexConjugate_avx @ 140a2cac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayScaledComplexConjugate_avx(longlong param_1,uint param_2,longlong param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar13 [32];
  
  auVar11 = vpshufd_avx(in_ZMM3._0_16_,0);
  auVar12._16_16_ = auVar11 ^ ___xmm_80000000800000008000000080000000;
  auVar12._0_16_ = auVar11 ^ ___xmm_80000000800000008000000080000000;
  auVar9._16_16_ = auVar11;
  auVar9._0_16_ = auVar11;
  auVar9 = vblendps_avx(auVar9,auVar12,0xaa);
  uVar4 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    do {
      uVar8 = (ulonglong)uVar7;
      pfVar1 = (float *)(param_1 + uVar8);
      pfVar2 = (float *)(param_1 + 0x10 + uVar8);
      auVar11._0_4_ = auVar9._0_4_ * *pfVar1;
      auVar11._4_4_ = auVar9._4_4_ * pfVar1[1];
      auVar11._8_4_ = auVar9._8_4_ * pfVar1[2];
      auVar11._12_4_ = auVar9._12_4_ * pfVar1[3];
      auVar13._16_4_ = auVar9._16_4_ * *pfVar2;
      auVar13._0_16_ = auVar11;
      auVar13._20_4_ = auVar9._20_4_ * pfVar2[1];
      auVar13._24_4_ = auVar9._24_4_ * pfVar2[2];
      auVar13._28_4_ = auVar9._28_4_ * pfVar2[3];
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar8) = auVar13._16_16_;
      *(undefined1 (*) [16])(param_3 + uVar8) = auVar11;
      uVar5 = uVar5 + 8;
      uVar7 = uVar7 + 0x20;
    } while (uVar5 < (uVar4 & 0xfffffff8));
    if ((int)param_2 <= (int)uVar5) {
      return;
    }
  }
  auVar11 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar14._16_16_ = auVar11;
  auVar14._0_16_ = auVar11;
  auVar3 = vpshufd_avx(ZEXT416(param_2),0);
  auVar11 = vpcmpgtd_avx(auVar3,SUB3216(auVar14 | 
                                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                        ,0x10));
  auVar3 = vpcmpgtd_avx(auVar3,SUB3216(auVar14 | 
                                       ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                                       ,0));
  auVar15._16_16_ = auVar11;
  auVar15._0_16_ = auVar3;
  lVar6 = (longlong)(int)((uint)uVar5 << 2);
  auVar12 = vmaskmovps_avx(auVar15,*(undefined1 (*) [32])(param_1 + lVar6));
  auVar10._0_4_ = auVar9._0_4_ * auVar12._0_4_;
  auVar10._4_4_ = auVar9._4_4_ * auVar12._4_4_;
  auVar10._8_4_ = auVar9._8_4_ * auVar12._8_4_;
  auVar10._12_4_ = auVar9._12_4_ * auVar12._12_4_;
  auVar10._16_4_ = auVar9._16_4_ * auVar12._16_4_;
  auVar10._20_4_ = auVar9._20_4_ * auVar12._20_4_;
  auVar10._24_4_ = auVar9._24_4_ * auVar12._24_4_;
  auVar10._28_4_ = auVar9._28_4_ * auVar12._28_4_;
  auVar9 = vmaskmovps_avx(auVar15,auVar10);
  *(undefined1 (*) [32])(param_3 + lVar6) = auVar9;
  return;
}

