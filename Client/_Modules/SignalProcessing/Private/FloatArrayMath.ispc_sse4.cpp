// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 81

// ArraySum___un_3C_Cunf_3E_REFunfCuni_sse4 @ 140a2cba0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum___un_3C_Cunf_3E_REFunfCuni_sse4
               (longlong param_1,float *param_2,uint param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  
  uVar3 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    iVar12 = *param_4;
    iVar13 = param_4[1];
    iVar14 = param_4[2];
    iVar15 = param_4[3];
    if ((int)param_3 < 1) goto LAB_140a2cc59;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1;
      fVar9 = fVar9 + pfVar1[1];
      fVar10 = fVar10 + pfVar1[2];
      fVar11 = fVar11 + pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    iVar12 = *param_4;
    iVar13 = param_4[1];
    iVar14 = param_4[2];
    iVar15 = param_4[3];
    if ((int)param_3 <= (int)uVar4) goto LAB_140a2cc59;
  }
  iVar2 = (int)uVar4;
  auVar16._4_4_ = iVar2;
  auVar16._0_4_ = iVar2;
  auVar16._8_4_ = iVar2;
  auVar16._12_4_ = iVar2;
  auVar16 = auVar16 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar16._0_4_ < (int)param_3);
  auVar7._4_4_ = -(uint)(auVar16._4_4_ < (int)param_3);
  auVar7._8_4_ = -(uint)(auVar16._8_4_ < (int)param_3);
  auVar7._12_4_ = -(uint)(auVar16._12_4_ < (int)param_3);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar16 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar16 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar16 = insertps(auVar16,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar16 = insertps(auVar16,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar16 = insertps(auVar16,puVar5[3],0x30);
    }
  }
  auVar16 = blendvps(___xmm_80000000800000008000000080000000,auVar16,auVar7);
  fVar8 = fVar8 + auVar16._0_4_;
  fVar9 = fVar9 + auVar16._4_4_;
  fVar10 = fVar10 + auVar16._8_4_;
  fVar11 = fVar11 + auVar16._12_4_;
LAB_140a2cc59:
  *param_2 = (float)(~-(uint)(iVar12 == 0) & (uint)fVar8) +
             (float)(~-(uint)(iVar13 == 0) & (uint)fVar9) +
             (float)(~-(uint)(iVar14 == 0) & (uint)fVar10) +
             (float)(~-(uint)(iVar15 == 0) & (uint)fVar11);
  return;
}

// ArraySum2___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a2cca0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum2___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint in_R10D;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar11 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar13 = 0;
    do {
      uVar16 = (ulonglong)uVar18;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar16);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar16);
      *pfVar3 = *pfVar2 + *pfVar1;
      pfVar3[1] = fVar8 + fVar5;
      pfVar3[2] = fVar9 + fVar6;
      pfVar3[3] = fVar10 + fVar7;
      uVar13 = uVar13 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar13 < uVar11);
    in_R10D = uVar11;
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar19._4_4_ = iVar12;
  auVar19._0_4_ = iVar12;
  auVar19._8_4_ = iVar12;
  auVar19._12_4_ = iVar12;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_4);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_4);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_4);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_4);
  lVar14 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R10D,auVar21);
  bVar17 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar14);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar14);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar14);
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar21 = ZEXT416(*(uint *)(param_2 + lVar14));
    }
    if ((uVar11 & 2) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 0xc),0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ + auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ + auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ + auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ + auVar21._12_4_;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_3 + lVar14) = auVar20._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(param_3 + 4 + lVar14) = uVar4;
  }
  if ((bVar17 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(param_3 + 8 + lVar14) = uVar4;
  }
  if (-1 < (char)bVar17) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(param_3 + 0xc + lVar14) = uVar4;
  return;
}

// ArrayMean___un_3C_Cunf_3E_REFunfCuni_sse4 @ 140a2cfb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMean___un_3C_Cunf_3E_REFunfCuni_sse4
               (longlong param_1,float *param_2,uint param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  
  uVar3 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    iVar12 = *param_4;
    iVar13 = param_4[1];
    iVar14 = param_4[2];
    iVar15 = param_4[3];
    if ((int)param_3 < 1) goto LAB_140a2d069;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1;
      fVar9 = fVar9 + pfVar1[1];
      fVar10 = fVar10 + pfVar1[2];
      fVar11 = fVar11 + pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    iVar12 = *param_4;
    iVar13 = param_4[1];
    iVar14 = param_4[2];
    iVar15 = param_4[3];
    if ((int)param_3 <= (int)uVar4) goto LAB_140a2d069;
  }
  iVar2 = (int)uVar4;
  auVar16._4_4_ = iVar2;
  auVar16._0_4_ = iVar2;
  auVar16._8_4_ = iVar2;
  auVar16._12_4_ = iVar2;
  auVar16 = auVar16 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar16._0_4_ < (int)param_3);
  auVar7._4_4_ = -(uint)(auVar16._4_4_ < (int)param_3);
  auVar7._8_4_ = -(uint)(auVar16._8_4_ < (int)param_3);
  auVar7._12_4_ = -(uint)(auVar16._12_4_ < (int)param_3);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar16 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar16 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar16 = insertps(auVar16,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar16 = insertps(auVar16,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar16 = insertps(auVar16,puVar5[3],0x30);
    }
  }
  auVar16 = blendvps(___xmm_80000000800000008000000080000000,auVar16,auVar7);
  fVar8 = fVar8 + auVar16._0_4_;
  fVar9 = fVar9 + auVar16._4_4_;
  fVar10 = fVar10 + auVar16._8_4_;
  fVar11 = fVar11 + auVar16._12_4_;
LAB_140a2d069:
  *param_2 = ((float)(~-(uint)(iVar12 == 0) & (uint)fVar8) +
              (float)(~-(uint)(iVar13 == 0) & (uint)fVar9) +
             (float)(~-(uint)(iVar14 == 0) & (uint)fVar10) +
             (float)(~-(uint)(iVar15 == 0) & (uint)fVar11)) / (float)(int)param_3;
  return;
}

// ArrayMeanSquared___un_3C_Cunf_3E_REFunfCuni_sse4 @ 140a2d0b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanSquared___un_3C_Cunf_3E_REFunfCuni_sse4
               (longlong param_1,float *param_2,uint param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar3 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    iVar12 = *param_4;
    iVar13 = param_4[1];
    iVar14 = param_4[2];
    iVar15 = param_4[3];
    if ((int)param_3 < 1) goto LAB_140a2d16f;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1 * *pfVar1;
      fVar9 = fVar9 + pfVar1[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar1[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar1[3] * pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    iVar12 = *param_4;
    iVar13 = param_4[1];
    iVar14 = param_4[2];
    iVar15 = param_4[3];
    if ((int)param_3 <= (int)uVar4) goto LAB_140a2d16f;
  }
  iVar2 = (int)uVar4;
  auVar16._4_4_ = iVar2;
  auVar16._0_4_ = iVar2;
  auVar16._8_4_ = iVar2;
  auVar16._12_4_ = iVar2;
  auVar16 = auVar16 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar16._0_4_ < (int)param_3);
  auVar7._4_4_ = -(uint)(auVar16._4_4_ < (int)param_3);
  auVar7._8_4_ = -(uint)(auVar16._8_4_ < (int)param_3);
  auVar7._12_4_ = -(uint)(auVar16._12_4_ < (int)param_3);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar16 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar16 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar16 = insertps(auVar16,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar16 = insertps(auVar16,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar16 = insertps(auVar16,puVar5[3],0x30);
    }
  }
  auVar17._0_4_ = auVar16._0_4_ * auVar16._0_4_;
  auVar17._4_4_ = auVar16._4_4_ * auVar16._4_4_;
  auVar17._8_4_ = auVar16._8_4_ * auVar16._8_4_;
  auVar17._12_4_ = auVar16._12_4_ * auVar16._12_4_;
  auVar16 = blendvps(___xmm_80000000800000008000000080000000,auVar17,auVar7);
  fVar8 = fVar8 + auVar16._0_4_;
  fVar9 = fVar9 + auVar16._4_4_;
  fVar10 = fVar10 + auVar16._8_4_;
  fVar11 = fVar11 + auVar16._12_4_;
LAB_140a2d16f:
  *param_2 = ((float)(~-(uint)(iVar12 == 0) & (uint)fVar8) +
              (float)(~-(uint)(iVar13 == 0) & (uint)fVar9) +
             (float)(~-(uint)(iVar14 == 0) & (uint)fVar10) +
             (float)(~-(uint)(iVar15 == 0) & (uint)fVar11)) / (float)(int)param_3;
  return;
}

// ArrayMax___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a2d1c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMax___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  byte bVar8;
  uint in_R10D;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar2 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar2 = param_4;
  }
  uVar2 = uVar2 & 0xfffffffc;
  if ((int)uVar2 < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar9;
      auVar10 = maxps(*(undefined1 (*) [16])(param_1 + uVar7),
                      *(undefined1 (*) [16])(param_2 + uVar7));
      *(undefined1 (*) [16])(param_3 + uVar7) = auVar10;
      uVar4 = uVar4 + 4;
      uVar9 = uVar9 + 0x10;
    } while (uVar4 < uVar2);
    in_R10D = uVar2;
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar10._4_4_ = iVar3;
  auVar10._0_4_ = iVar3;
  auVar10._8_4_ = iVar3;
  auVar10._12_4_ = iVar3;
  auVar10 = auVar10 | ___xmm_00000003000000020000000100000000;
  auVar11._0_4_ = -(uint)(auVar10._0_4_ < (int)param_4);
  auVar11._4_4_ = -(uint)(auVar10._4_4_ < (int)param_4);
  auVar11._8_4_ = -(uint)(auVar10._8_4_ < (int)param_4);
  auVar11._12_4_ = -(uint)(auVar10._12_4_ < (int)param_4);
  lVar5 = (longlong)(iVar3 << 2);
  uVar2 = movmskps(in_R10D,auVar11);
  bVar8 = (char)((byte)uVar2 << 4) >> 4;
  if ((~(byte)uVar2 & 9) == 0) {
    auVar10 = *(undefined1 (*) [16])(param_1 + lVar5);
    auVar11 = *(undefined1 (*) [16])(param_2 + lVar5);
  }
  else {
    puVar6 = (uint *)(param_1 + lVar5);
    if ((uVar2 & 1) != 0) {
      auVar10 = ZEXT416(*puVar6);
    }
    if ((uVar2 & 2) != 0) {
      auVar10 = insertps(auVar10,puVar6[1],0x10);
    }
    if ((uVar2 & 4) != 0) {
      auVar10 = insertps(auVar10,puVar6[2],0x20);
    }
    if ((uVar2 & 8) != 0) {
      auVar10 = insertps(auVar10,puVar6[3],0x30);
    }
    if ((uVar2 & 1) != 0) {
      auVar11 = ZEXT416(*(uint *)(param_2 + lVar5));
    }
    if ((uVar2 & 2) != 0) {
      auVar11 = insertps(auVar11,*(undefined4 *)(param_2 + lVar5 + 4),0x10);
    }
    if ((uVar2 & 4) != 0) {
      auVar11 = insertps(auVar11,*(undefined4 *)(param_2 + lVar5 + 8),0x20);
    }
    if ((uVar2 & 8) != 0) {
      auVar11 = insertps(auVar11,*(undefined4 *)(param_2 + lVar5 + 0xc),0x30);
    }
  }
  auVar10 = maxps(auVar10,auVar11);
  if ((bVar8 & 1) != 0) {
    *(int *)(param_3 + lVar5) = auVar10._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar1 = extractps(auVar10,1);
    *(undefined8 *)(param_3 + 4 + lVar5) = uVar1;
  }
  if ((bVar8 & 4) != 0) {
    uVar1 = extractps(auVar10,2);
    *(undefined8 *)(param_3 + 8 + lVar5) = uVar1;
  }
  if (-1 < (char)bVar8) {
    return;
  }
  uVar1 = extractps(auVar10,3);
  *(undefined8 *)(param_3 + 0xc + lVar5) = uVar1;
  return;
}

// ArrayMeanFilter___un_3C_Cunf_3E_CuniCuniun_3C_unf_3E_CunfCuni_sse4 @ 140a2d7b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanFilter___un_3C_Cunf_3E_CuniCuniun_3C_unf_3E_CunfCuni_sse4
               (longlong param_1,int param_2,uint param_3,longlong param_4,float param_5,int param_6
               ,undefined1 (*param_7) [16])

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 unaff_ESI;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int unaff_R12D;
  uint uVar20;
  uint uVar21;
  int unaff_R15D;
  undefined1 auVar22 [16];
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int iVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  auVar43 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar5 = _UNK_150631e0c;
  uVar4 = _UNK_150631e08;
  uVar21 = __xmm_00000003000000020000000100000000._4_4_;
  uVar16 = (uint)__xmm_00000003000000020000000100000000;
  iVar13 = movmskps(unaff_ESI,*param_7);
  uVar17 = param_3 + 1;
  uVar18 = (ulonglong)uVar17;
  iVar10 = param_2 - param_3;
  iVar15 = iVar10 + -1;
  uVar7 = ~param_3;
  if (iVar13 == 0xf) {
    iVar13 = (uVar17 - param_2) + param_6;
    uVar23 = (iVar13 < (int)uVar17) * uVar17 | (uint)(iVar13 >= (int)uVar17) * iVar13;
    if (iVar10 < param_6) {
      uVar12 = param_3 + 4;
      if (-1 < (int)uVar17) {
        uVar12 = uVar17;
      }
      if ((int)(uVar12 & 0xfffffffc) < 1) {
        uVar11 = 0;
        if (-1 < (int)param_3) goto LAB_140a2df10;
      }
      else {
        unaff_R12D = param_2 * 4 + param_3 * -4 + -4;
        uVar20 = 0;
        uVar11 = 0;
        do {
          iVar13 = (int)uVar11 + iVar10;
          auVar52._0_4_ = (float)(int)(iVar13 + uVar16);
          auVar52._4_4_ = (float)(int)(iVar13 + uVar21);
          auVar52._8_4_ = (float)(int)(iVar13 + uVar4);
          auVar52._12_4_ = (float)(int)(iVar13 + uVar5);
          auVar52 = maxps(auVar43,auVar52);
          auVar52 = divps(*(undefined1 (*) [16])(param_1 + (int)(unaff_R12D + uVar20)),auVar52);
          *(undefined1 (*) [16])(param_4 + (ulonglong)uVar20) = auVar52;
          uVar11 = uVar11 + 4;
          uVar20 = uVar20 + 0x10;
        } while (uVar11 < (uVar12 & 0xfffffffc));
        if ((int)uVar11 <= (int)param_3) {
LAB_140a2df10:
          uVar21 = (uint)uVar11;
          lVar19 = (longlong)(int)((uVar21 + iVar15) * 4);
          auVar33._0_4_ =
               -(uint)((int)(uVar21 | (uint)__xmm_00000003000000020000000100000000) < (int)uVar17);
          auVar33._4_4_ =
               -(uint)((int)(uVar21 | __xmm_00000003000000020000000100000000._4_4_) < (int)uVar17);
          auVar33._8_4_ = -(uint)((int)(uVar21 | _UNK_150631e08) < (int)uVar17);
          auVar33._12_4_ = -(uint)((int)(uVar21 | _UNK_150631e0c) < (int)uVar17);
          uVar16 = movmskps(unaff_R12D,auVar33);
          bVar9 = (char)((byte)uVar16 << 4) >> 4;
          if ((~(byte)uVar16 & 9) == 0) {
            auVar33 = *(undefined1 (*) [16])(param_1 + lVar19);
          }
          else {
            puVar8 = (uint *)(lVar19 + param_1);
            if ((uVar16 & 1) != 0) {
              auVar33 = ZEXT416(*puVar8);
            }
            if ((uVar16 & 2) != 0) {
              auVar33 = insertps(auVar33,puVar8[1],0x10);
            }
            if ((uVar16 & 4) != 0) {
              auVar33 = insertps(auVar33,puVar8[2],0x20);
            }
            if ((uVar16 & 8) != 0) {
              auVar33 = insertps(auVar33,puVar8[3],0x30);
            }
          }
          auVar38._0_4_ =
               (float)(int)((uVar21 | (uint)__xmm_00000003000000020000000100000000) + iVar10);
          auVar38._4_4_ =
               (float)(int)((uVar21 | __xmm_00000003000000020000000100000000._4_4_) + iVar10);
          auVar38._8_4_ = (float)(int)((uVar21 | _UNK_150631e08) + iVar10);
          auVar38._12_4_ = (float)(int)((uVar21 | _UNK_150631e0c) + iVar10);
          auVar43 = maxps(___xmm_3f8000003f8000003f8000003f800000,auVar38);
          auVar43 = divps(auVar33,auVar43);
          lVar19 = (longlong)(int)(uVar21 * 4);
          if ((bVar9 & 1) != 0) {
            *(int *)(param_4 + lVar19) = auVar43._0_4_;
          }
          if ((bVar9 & 2) != 0) {
            uVar3 = extractps(auVar43,1);
            *(undefined8 *)(param_4 + 4 + lVar19) = uVar3;
          }
          if ((bVar9 & 4) != 0) {
            uVar3 = extractps(auVar43,2);
            *(undefined8 *)(param_4 + 8 + lVar19) = uVar3;
          }
          if ((char)bVar9 < '\0') {
            uVar3 = extractps(auVar43,3);
            *(undefined8 *)(param_4 + 0xc + lVar19) = uVar3;
          }
        }
      }
      auVar34._0_4_ = (float)param_2;
      uVar21 = uVar23 - uVar17;
      uVar16 = uVar21 + 3;
      if (-1 < (int)uVar21) {
        uVar16 = uVar21;
      }
      iVar10 = ((uVar16 & 0xfffffffc) - uVar21) + uVar23;
      if ((int)uVar17 < iVar10) {
        auVar39._4_4_ = auVar34._0_4_;
        auVar39._0_4_ = auVar34._0_4_;
        auVar39._8_4_ = auVar34._0_4_;
        auVar39._12_4_ = auVar34._0_4_;
        uVar18 = (ulonglong)(int)uVar17;
        iVar13 = 0;
        do {
          pfVar1 = (float *)(param_1 + (param_2 * 4 + iVar13));
          pfVar2 = (float *)(param_1 + iVar13);
          auVar45._0_4_ = *pfVar1 - *pfVar2;
          auVar45._4_4_ = pfVar1[1] - pfVar2[1];
          auVar45._8_4_ = pfVar1[2] - pfVar2[2];
          auVar45._12_4_ = pfVar1[3] - pfVar2[3];
          auVar43 = divps(auVar45,auVar39);
          *(undefined1 (*) [16])(param_4 + (int)(param_3 * 4 + 4 + iVar13)) = auVar43;
          uVar18 = uVar18 + 4;
          iVar13 = iVar13 + 0x10;
        } while ((longlong)uVar18 < (longlong)iVar10);
      }
      iVar10 = (int)uVar18;
      if (iVar10 < (int)uVar23) {
        auVar40._0_4_ = iVar10 + (uint)__xmm_00000003000000020000000100000000;
        auVar40._4_4_ = iVar10 + __xmm_00000003000000020000000100000000._4_4_;
        auVar40._8_4_ = iVar10 + _UNK_150631e08;
        auVar40._12_4_ = iVar10 + _UNK_150631e0c;
        auVar29._0_4_ = -(uint)(auVar40._0_4_ < (int)uVar23);
        auVar29._4_4_ = -(uint)(auVar40._4_4_ < (int)uVar23);
        auVar29._8_4_ = -(uint)(auVar40._8_4_ < (int)uVar23);
        auVar29._12_4_ = -(uint)(auVar40._12_4_ < (int)uVar23);
        iVar15 = (iVar15 + iVar10) * 4;
        uVar16 = movmskps(iVar15,auVar29);
        bVar9 = (char)((byte)uVar16 << 4) >> 4;
        lVar19 = (longlong)(int)((iVar10 + uVar7) * 4);
        if ((~(byte)uVar16 & 9) == 0) {
          auVar29 = *(undefined1 (*) [16])(param_1 + iVar15);
          auVar40 = *(undefined1 (*) [16])(param_1 + lVar19);
        }
        else {
          puVar8 = (uint *)(iVar15 + param_1);
          if ((uVar16 & 1) != 0) {
            auVar29 = ZEXT416(*puVar8);
          }
          if ((uVar16 & 2) != 0) {
            auVar29 = insertps(auVar29,puVar8[1],0x10);
          }
          if ((uVar16 & 4) != 0) {
            auVar29 = insertps(auVar29,puVar8[2],0x20);
          }
          if ((uVar16 & 8) != 0) {
            auVar29 = insertps(auVar29,puVar8[3],0x30);
          }
          if ((uVar16 & 1) != 0) {
            auVar40 = ZEXT416(*(uint *)(lVar19 + param_1));
          }
          if ((uVar16 & 2) != 0) {
            auVar40 = insertps(auVar40,*(undefined4 *)(lVar19 + param_1 + 4),0x10);
          }
          if ((uVar16 & 4) != 0) {
            auVar40 = insertps(auVar40,*(undefined4 *)(lVar19 + param_1 + 8),0x20);
          }
          if ((uVar16 & 8) != 0) {
            auVar40 = insertps(auVar40,*(undefined4 *)(lVar19 + param_1 + 0xc),0x30);
          }
        }
        auVar27._0_4_ = auVar29._0_4_ - auVar40._0_4_;
        auVar27._4_4_ = auVar29._4_4_ - auVar40._4_4_;
        auVar27._8_4_ = auVar29._8_4_ - auVar40._8_4_;
        auVar27._12_4_ = auVar29._12_4_ - auVar40._12_4_;
        auVar34._4_4_ = auVar34._0_4_;
        auVar34._8_4_ = auVar34._0_4_;
        auVar34._12_4_ = auVar34._0_4_;
        auVar43 = divps(auVar27,auVar34);
        lVar19 = (longlong)(iVar10 * 4);
        if ((bVar9 & 1) != 0) {
          *(int *)(param_4 + lVar19) = auVar43._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar43,1);
          *(undefined8 *)(param_4 + 4 + lVar19) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar43,2);
          *(undefined8 *)(param_4 + 8 + lVar19) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar43,3);
          *(undefined8 *)(param_4 + 0xc + lVar19) = uVar3;
        }
      }
    }
    else {
      fVar30 = param_5 / (float)param_6;
      uVar16 = uVar23 + 3;
      if (-1 < (int)uVar23) {
        uVar16 = uVar23;
      }
      uVar16 = uVar16 & 0xfffffffc;
      if ((int)uVar16 < 1) {
        uVar18 = 0;
        if (0 < (int)uVar23) goto LAB_140a2df6c;
      }
      else {
        uVar21 = 0;
        uVar18 = 0;
        do {
          pfVar1 = (float *)(param_4 + (ulonglong)uVar21);
          *pfVar1 = fVar30;
          pfVar1[1] = fVar30;
          pfVar1[2] = fVar30;
          pfVar1[3] = fVar30;
          uVar18 = uVar18 + 4;
          uVar21 = uVar21 + 0x10;
        } while (uVar18 < uVar16);
        uVar17 = uVar16;
        if ((int)uVar18 < (int)uVar23) {
LAB_140a2df6c:
          uVar16 = (uint)uVar18;
          auVar43._0_4_ =
               -(uint)((int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)uVar23);
          auVar43._4_4_ =
               -(uint)((int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)uVar23);
          auVar43._8_4_ = -(uint)((int)(uVar16 | _UNK_150631e08) < (int)uVar23);
          auVar43._12_4_ = -(uint)((int)(uVar16 | _UNK_150631e0c) < (int)uVar23);
          lVar19 = (longlong)(int)(uVar16 << 2);
          uVar16 = movmskps(uVar17,auVar43);
          if ((uVar16 & 1) != 0) {
            *(float *)(param_4 + lVar19) = fVar30;
          }
          if ((uVar16 & 2) != 0) {
            *(float *)(param_4 + 4 + lVar19) = fVar30;
          }
          if ((uVar16 & 4) != 0) {
            *(float *)(param_4 + 8 + lVar19) = fVar30;
          }
          if ((char)((char)uVar16 << 4) >> 4 < '\0') {
            *(float *)(param_4 + 0xc + lVar19) = fVar30;
          }
        }
      }
    }
    iVar6 = _UNK_150d5a8ec;
    iVar13 = _UNK_150d5a8e8;
    iVar10 = _UNK_150d5a8e4;
    iVar15 = ___xmm_fffffffdfffffffeffffffff00000000;
    uVar21 = param_6 - uVar23;
    uVar16 = uVar21 + 3;
    if (-1 < (int)uVar21) {
      uVar16 = uVar21;
    }
    iVar14 = ((uVar16 & 0xfffffffc) - uVar21) + param_6;
    if ((int)uVar23 < iVar14) {
      lVar19 = (longlong)(int)uVar23;
      iVar51 = uVar23 << 2;
      do {
        iVar47 = (param_3 + param_6) - (int)lVar19;
        pfVar1 = (float *)(param_1 + (int)(uVar7 * 4 + iVar51));
        auVar50._0_4_ = param_5 - *pfVar1;
        auVar50._4_4_ = param_5 - pfVar1[1];
        auVar50._8_4_ = param_5 - pfVar1[2];
        auVar50._12_4_ = param_5 - pfVar1[3];
        auVar46._0_4_ = (float)(iVar47 + iVar15);
        auVar46._4_4_ = (float)(iVar47 + iVar10);
        auVar46._8_4_ = (float)(iVar47 + iVar13);
        auVar46._12_4_ = (float)(iVar47 + iVar6);
        auVar43 = divps(auVar50,auVar46);
        *(undefined1 (*) [16])(param_4 + iVar51) = auVar43;
        lVar19 = lVar19 + 4;
        iVar51 = iVar51 + 0x10;
      } while (lVar19 < iVar14);
      uVar23 = (uint)lVar19;
    }
    if (param_6 <= (int)uVar23) {
      return;
    }
    lVar19 = (longlong)(int)((uVar7 + uVar23) * 4);
    auVar41._0_4_ = -(uint)((int)(uVar23 + (uint)__xmm_00000003000000020000000100000000) < param_6);
    auVar41._4_4_ = -(uint)((int)(uVar23 + __xmm_00000003000000020000000100000000._4_4_) < param_6);
    auVar41._8_4_ = -(uint)((int)(uVar23 + _UNK_150631e08) < param_6);
    auVar41._12_4_ = -(uint)((int)(uVar23 + _UNK_150631e0c) < param_6);
    uVar16 = movmskps(param_6,auVar41);
    bVar9 = (byte)uVar16;
    if ((~bVar9 & 9) == 0) {
      auVar41 = *(undefined1 (*) [16])(param_1 + lVar19);
    }
    else {
      puVar8 = (uint *)(param_1 + lVar19);
      if ((uVar16 & 1) != 0) {
        auVar41 = ZEXT416(*puVar8);
      }
      if ((uVar16 & 2) != 0) {
        auVar41 = insertps(auVar41,puVar8[1],0x10);
      }
      if ((uVar16 & 4) != 0) {
        auVar41 = insertps(auVar41,puVar8[2],0x20);
      }
      if ((uVar16 & 8) != 0) {
        auVar41 = insertps(auVar41,puVar8[3],0x30);
      }
    }
    auVar22._0_4_ = param_5 - auVar41._0_4_;
    auVar22._4_4_ = param_5 - auVar41._4_4_;
    auVar22._8_4_ = param_5 - auVar41._8_4_;
    auVar22._12_4_ = param_5 - auVar41._12_4_;
    param_6 = param_6 + param_3;
    auVar26._0_4_ = (float)(int)(param_6 - (uVar23 + (uint)__xmm_00000003000000020000000100000000));
    auVar26._4_4_ = (float)(int)(param_6 - (uVar23 + __xmm_00000003000000020000000100000000._4_4_));
    auVar26._8_4_ = (float)(int)(param_6 - (uVar23 + _UNK_150631e08));
    auVar26._12_4_ = (float)(int)(param_6 - (uVar23 + _UNK_150631e0c));
    goto LAB_140a2e370;
  }
  iVar13 = (param_3 - param_2) + 1 + param_6;
  uVar23 = (iVar13 < (int)uVar17) * uVar17 | (uint)(iVar13 >= (int)uVar17) * iVar13;
  if (iVar10 < param_6) {
    uVar12 = param_3 + 4;
    if (-1 < (int)uVar17) {
      uVar12 = uVar17;
    }
    if ((int)(uVar12 & 0xfffffffc) < 1) {
      uVar11 = 0;
      if (-1 < (int)param_3) goto LAB_140a2da3f;
    }
    else {
      unaff_R15D = param_2 * 4 + param_3 * -4 + -4;
      uVar20 = 0;
      uVar11 = 0;
      do {
        iVar13 = (int)uVar11 + iVar10;
        auVar48._0_4_ = (float)(int)(iVar13 + uVar16);
        auVar48._4_4_ = (float)(int)(iVar13 + uVar21);
        auVar48._8_4_ = (float)(int)(iVar13 + uVar4);
        auVar48._12_4_ = (float)(int)(iVar13 + uVar5);
        auVar52 = maxps(auVar43,auVar48);
        auVar52 = divps(*(undefined1 (*) [16])(param_1 + (int)(unaff_R15D + uVar20)),auVar52);
        *(undefined1 (*) [16])(param_4 + (ulonglong)uVar20) = auVar52;
        uVar11 = uVar11 + 4;
        uVar20 = uVar20 + 0x10;
      } while (uVar11 < (uVar12 & 0xfffffffc));
      if ((int)uVar11 <= (int)param_3) {
LAB_140a2da3f:
        uVar16 = (uint)uVar11;
        lVar19 = (longlong)(int)((uVar16 + iVar15) * 4);
        auVar31._0_4_ =
             -(uint)((int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)uVar17);
        auVar31._4_4_ =
             -(uint)((int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)uVar17);
        auVar31._8_4_ = -(uint)((int)(uVar16 | _UNK_150631e08) < (int)uVar17);
        auVar31._12_4_ = -(uint)((int)(uVar16 | _UNK_150631e0c) < (int)uVar17);
        uVar21 = movmskps(unaff_R15D,auVar31);
        bVar9 = (char)((byte)uVar21 << 4) >> 4;
        if ((~(byte)uVar21 & 9) == 0) {
          auVar31 = *(undefined1 (*) [16])(param_1 + lVar19);
        }
        else {
          puVar8 = (uint *)(lVar19 + param_1);
          if ((uVar21 & 1) != 0) {
            auVar31 = ZEXT416(*puVar8);
          }
          if ((uVar21 & 2) != 0) {
            auVar31 = insertps(auVar31,puVar8[1],0x10);
          }
          if ((uVar21 & 4) != 0) {
            auVar31 = insertps(auVar31,puVar8[2],0x20);
          }
          if ((uVar21 & 8) != 0) {
            auVar31 = insertps(auVar31,puVar8[3],0x30);
          }
        }
        auVar35._0_4_ =
             (float)(int)((uVar16 | (uint)__xmm_00000003000000020000000100000000) + iVar10);
        auVar35._4_4_ =
             (float)(int)((uVar16 | __xmm_00000003000000020000000100000000._4_4_) + iVar10);
        auVar35._8_4_ = (float)(int)((uVar16 | _UNK_150631e08) + iVar10);
        auVar35._12_4_ = (float)(int)((uVar16 | _UNK_150631e0c) + iVar10);
        auVar43 = maxps(___xmm_3f8000003f8000003f8000003f800000,auVar35);
        auVar43 = divps(auVar31,auVar43);
        lVar19 = (longlong)(int)(uVar16 * 4);
        if ((bVar9 & 1) != 0) {
          *(int *)(param_4 + lVar19) = auVar43._0_4_;
        }
        if ((bVar9 & 2) != 0) {
          uVar3 = extractps(auVar43,1);
          *(undefined8 *)(param_4 + 4 + lVar19) = uVar3;
        }
        if ((bVar9 & 4) != 0) {
          uVar3 = extractps(auVar43,2);
          *(undefined8 *)(param_4 + 8 + lVar19) = uVar3;
        }
        if ((char)bVar9 < '\0') {
          uVar3 = extractps(auVar43,3);
          *(undefined8 *)(param_4 + 0xc + lVar19) = uVar3;
        }
      }
    }
    auVar32._0_4_ = (float)param_2;
    uVar21 = uVar23 - uVar17;
    uVar16 = uVar21 + 3;
    if (-1 < (int)uVar21) {
      uVar16 = uVar21;
    }
    iVar10 = ((uVar16 & 0xfffffffc) - uVar21) + uVar23;
    if ((int)uVar17 < iVar10) {
      auVar36._4_4_ = auVar32._0_4_;
      auVar36._0_4_ = auVar32._0_4_;
      auVar36._8_4_ = auVar32._0_4_;
      auVar36._12_4_ = auVar32._0_4_;
      uVar18 = (ulonglong)(int)uVar17;
      iVar13 = 0;
      do {
        pfVar1 = (float *)(param_1 + (param_2 * 4 + iVar13));
        pfVar2 = (float *)(param_1 + iVar13);
        auVar42._0_4_ = *pfVar1 - *pfVar2;
        auVar42._4_4_ = pfVar1[1] - pfVar2[1];
        auVar42._8_4_ = pfVar1[2] - pfVar2[2];
        auVar42._12_4_ = pfVar1[3] - pfVar2[3];
        auVar43 = divps(auVar42,auVar36);
        *(undefined1 (*) [16])(param_4 + (int)(param_3 * 4 + 4 + iVar13)) = auVar43;
        uVar18 = uVar18 + 4;
        iVar13 = iVar13 + 0x10;
      } while ((longlong)uVar18 < (longlong)iVar10);
    }
    iVar10 = (int)uVar18;
    if (iVar10 < (int)uVar23) {
      auVar37._0_4_ = iVar10 + (uint)__xmm_00000003000000020000000100000000;
      auVar37._4_4_ = iVar10 + __xmm_00000003000000020000000100000000._4_4_;
      auVar37._8_4_ = iVar10 + _UNK_150631e08;
      auVar37._12_4_ = iVar10 + _UNK_150631e0c;
      auVar28._0_4_ = -(uint)(auVar37._0_4_ < (int)uVar23);
      auVar28._4_4_ = -(uint)(auVar37._4_4_ < (int)uVar23);
      auVar28._8_4_ = -(uint)(auVar37._8_4_ < (int)uVar23);
      auVar28._12_4_ = -(uint)(auVar37._12_4_ < (int)uVar23);
      iVar15 = (iVar15 + iVar10) * 4;
      uVar16 = movmskps(iVar15,auVar28);
      bVar9 = (char)((byte)uVar16 << 4) >> 4;
      lVar19 = (longlong)(int)((iVar10 + uVar7) * 4);
      if ((~(byte)uVar16 & 9) == 0) {
        auVar28 = *(undefined1 (*) [16])(param_1 + iVar15);
        auVar37 = *(undefined1 (*) [16])(param_1 + lVar19);
      }
      else {
        puVar8 = (uint *)(iVar15 + param_1);
        if ((uVar16 & 1) != 0) {
          auVar28 = ZEXT416(*puVar8);
        }
        if ((uVar16 & 2) != 0) {
          auVar28 = insertps(auVar28,puVar8[1],0x10);
        }
        if ((uVar16 & 4) != 0) {
          auVar28 = insertps(auVar28,puVar8[2],0x20);
        }
        if ((uVar16 & 8) != 0) {
          auVar28 = insertps(auVar28,puVar8[3],0x30);
        }
        if ((uVar16 & 1) != 0) {
          auVar37 = ZEXT416(*(uint *)(lVar19 + param_1));
        }
        if ((uVar16 & 2) != 0) {
          auVar37 = insertps(auVar37,*(undefined4 *)(lVar19 + param_1 + 4),0x10);
        }
        if ((uVar16 & 4) != 0) {
          auVar37 = insertps(auVar37,*(undefined4 *)(lVar19 + param_1 + 8),0x20);
        }
        if ((uVar16 & 8) != 0) {
          auVar37 = insertps(auVar37,*(undefined4 *)(lVar19 + param_1 + 0xc),0x30);
        }
      }
      auVar25._0_4_ = auVar28._0_4_ - auVar37._0_4_;
      auVar25._4_4_ = auVar28._4_4_ - auVar37._4_4_;
      auVar25._8_4_ = auVar28._8_4_ - auVar37._8_4_;
      auVar25._12_4_ = auVar28._12_4_ - auVar37._12_4_;
      auVar32._4_4_ = auVar32._0_4_;
      auVar32._8_4_ = auVar32._0_4_;
      auVar32._12_4_ = auVar32._0_4_;
      auVar43 = divps(auVar25,auVar32);
      lVar19 = (longlong)(iVar10 * 4);
      if ((bVar9 & 1) != 0) {
        *(int *)(param_4 + lVar19) = auVar43._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar43,1);
        *(undefined8 *)(param_4 + 4 + lVar19) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar43,2);
        *(undefined8 *)(param_4 + 8 + lVar19) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar43,3);
        *(undefined8 *)(param_4 + 0xc + lVar19) = uVar3;
      }
    }
  }
  else {
    fVar30 = param_5 / (float)param_6;
    uVar16 = uVar23 + 3;
    if (-1 < (int)uVar23) {
      uVar16 = uVar23;
    }
    uVar16 = uVar16 & 0xfffffffc;
    if ((int)uVar16 < 1) {
      uVar18 = 0;
      if (0 < (int)uVar23) goto LAB_140a2da95;
    }
    else {
      uVar21 = 0;
      uVar18 = 0;
      do {
        pfVar1 = (float *)(param_4 + (ulonglong)uVar21);
        *pfVar1 = fVar30;
        pfVar1[1] = fVar30;
        pfVar1[2] = fVar30;
        pfVar1[3] = fVar30;
        uVar18 = uVar18 + 4;
        uVar21 = uVar21 + 0x10;
      } while (uVar18 < uVar16);
      uVar17 = uVar16;
      if ((int)uVar18 < (int)uVar23) {
LAB_140a2da95:
        uVar16 = (uint)uVar18;
        auVar24._0_4_ =
             -(uint)((int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)uVar23);
        auVar24._4_4_ =
             -(uint)((int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)uVar23);
        auVar24._8_4_ = -(uint)((int)(uVar16 | _UNK_150631e08) < (int)uVar23);
        auVar24._12_4_ = -(uint)((int)(uVar16 | _UNK_150631e0c) < (int)uVar23);
        lVar19 = (longlong)(int)(uVar16 << 2);
        uVar16 = movmskps(uVar17,auVar24);
        if ((uVar16 & 1) != 0) {
          *(float *)(param_4 + lVar19) = fVar30;
        }
        if ((uVar16 & 2) != 0) {
          *(float *)(param_4 + 4 + lVar19) = fVar30;
        }
        if ((uVar16 & 4) != 0) {
          *(float *)(param_4 + 8 + lVar19) = fVar30;
        }
        if ((char)((char)uVar16 << 4) >> 4 < '\0') {
          *(float *)(param_4 + 0xc + lVar19) = fVar30;
        }
      }
    }
  }
  iVar6 = _UNK_150d5a8ec;
  iVar13 = _UNK_150d5a8e8;
  iVar10 = _UNK_150d5a8e4;
  iVar15 = ___xmm_fffffffdfffffffeffffffff00000000;
  uVar21 = param_6 - uVar23;
  uVar16 = uVar21 + 3;
  if (-1 < (int)uVar21) {
    uVar16 = uVar21;
  }
  uVar21 = ((uVar16 & 0xfffffffc) - uVar21) + param_6;
  uVar16 = param_3;
  if ((int)uVar23 < (int)uVar21) {
    lVar19 = (longlong)(int)uVar23;
    iVar14 = uVar23 << 2;
    do {
      iVar51 = (param_6 + param_3) - (int)lVar19;
      pfVar1 = (float *)(param_1 + (int)(uVar7 * 4 + iVar14));
      auVar53._0_4_ = param_5 - *pfVar1;
      auVar53._4_4_ = param_5 - pfVar1[1];
      auVar53._8_4_ = param_5 - pfVar1[2];
      auVar53._12_4_ = param_5 - pfVar1[3];
      auVar49._0_4_ = (float)(iVar51 + iVar15);
      auVar49._4_4_ = (float)(iVar51 + iVar10);
      auVar49._8_4_ = (float)(iVar51 + iVar13);
      auVar49._12_4_ = (float)(iVar51 + iVar6);
      auVar43 = divps(auVar53,auVar49);
      *(undefined1 (*) [16])(param_4 + iVar14) = auVar43;
      lVar19 = lVar19 + 4;
      iVar14 = iVar14 + 0x10;
    } while (lVar19 < (int)uVar21);
    uVar23 = (uint)lVar19;
    uVar16 = uVar21;
  }
  if (param_6 <= (int)uVar23) {
    return;
  }
  lVar19 = (longlong)(int)((uVar7 + uVar23) * 4);
  auVar44._0_4_ = -(uint)((int)(uVar23 + (uint)__xmm_00000003000000020000000100000000) < param_6);
  auVar44._4_4_ = -(uint)((int)(uVar23 + __xmm_00000003000000020000000100000000._4_4_) < param_6);
  auVar44._8_4_ = -(uint)((int)(uVar23 + _UNK_150631e08) < param_6);
  auVar44._12_4_ = -(uint)((int)(uVar23 + _UNK_150631e0c) < param_6);
  uVar16 = movmskps(uVar16,auVar44);
  bVar9 = (byte)uVar16;
  if ((~bVar9 & 9) == 0) {
    auVar44 = *(undefined1 (*) [16])(param_1 + lVar19);
  }
  else {
    puVar8 = (uint *)(param_1 + lVar19);
    if ((uVar16 & 1) != 0) {
      auVar44 = ZEXT416(*puVar8);
    }
    if ((uVar16 & 2) != 0) {
      auVar44 = insertps(auVar44,puVar8[1],0x10);
    }
    if ((uVar16 & 4) != 0) {
      auVar44 = insertps(auVar44,puVar8[2],0x20);
    }
    if ((uVar16 & 8) != 0) {
      auVar44 = insertps(auVar44,puVar8[3],0x30);
    }
  }
  auVar22._0_4_ = param_5 - auVar44._0_4_;
  auVar22._4_4_ = param_5 - auVar44._4_4_;
  auVar22._8_4_ = param_5 - auVar44._8_4_;
  auVar22._12_4_ = param_5 - auVar44._12_4_;
  param_6 = param_6 + param_3;
  auVar26._0_4_ = (float)(int)(param_6 - (uVar23 + (uint)__xmm_00000003000000020000000100000000));
  auVar26._4_4_ = (float)(int)(param_6 - (uVar23 + __xmm_00000003000000020000000100000000._4_4_));
  auVar26._8_4_ = (float)(int)(param_6 - (uVar23 + _UNK_150631e08));
  auVar26._12_4_ = (float)(int)(param_6 - (uVar23 + _UNK_150631e0c));
LAB_140a2e370:
  bVar9 = (char)(bVar9 << 4) >> 4;
  auVar43 = divps(auVar22,auVar26);
  lVar19 = (longlong)(int)(uVar23 * 4);
  if ((bVar9 & 1) != 0) {
    *(int *)(param_4 + lVar19) = auVar43._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar3 = extractps(auVar43,1);
    *(undefined8 *)(param_4 + 4 + lVar19) = uVar3;
  }
  if ((bVar9 & 4) != 0) {
    uVar3 = extractps(auVar43,2);
    *(undefined8 *)(param_4 + 8 + lVar19) = uVar3;
  }
  if ((char)bVar9 < '\0') {
    uVar3 = extractps(auVar43,3);
    *(undefined8 *)(param_4 + 0xc + lVar19) = uVar3;
  }
  return;
}

// ArrayGetEuclideanNorm___un_3C_Cunf_3E_REFunfCuni_sse4 @ 140a2e5d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetEuclideanNorm___un_3C_Cunf_3E_REFunfCuni_sse4
               (longlong param_1,float *param_2,uint param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  uVar3 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    iVar12 = *param_4;
    iVar13 = param_4[1];
    iVar14 = param_4[2];
    iVar15 = param_4[3];
    if ((int)param_3 < 1) goto LAB_140a2e68f;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1 * *pfVar1;
      fVar9 = fVar9 + pfVar1[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar1[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar1[3] * pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    iVar12 = *param_4;
    iVar13 = param_4[1];
    iVar14 = param_4[2];
    iVar15 = param_4[3];
    if ((int)param_3 <= (int)uVar4) goto LAB_140a2e68f;
  }
  iVar2 = (int)uVar4;
  auVar16._4_4_ = iVar2;
  auVar16._0_4_ = iVar2;
  auVar16._8_4_ = iVar2;
  auVar16._12_4_ = iVar2;
  auVar16 = auVar16 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar16._0_4_ < (int)param_3);
  auVar7._4_4_ = -(uint)(auVar16._4_4_ < (int)param_3);
  auVar7._8_4_ = -(uint)(auVar16._8_4_ < (int)param_3);
  auVar7._12_4_ = -(uint)(auVar16._12_4_ < (int)param_3);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar16 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar16 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar16 = insertps(auVar16,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar16 = insertps(auVar16,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar16 = insertps(auVar16,puVar5[3],0x30);
    }
  }
  auVar17._0_4_ = auVar16._0_4_ * auVar16._0_4_;
  auVar17._4_4_ = auVar16._4_4_ * auVar16._4_4_;
  auVar17._8_4_ = auVar16._8_4_ * auVar16._8_4_;
  auVar17._12_4_ = auVar16._12_4_ * auVar16._12_4_;
  auVar16 = blendvps(___xmm_80000000800000008000000080000000,auVar17,auVar7);
  fVar8 = fVar8 + auVar16._0_4_;
  fVar9 = fVar9 + auVar16._4_4_;
  fVar10 = fVar10 + auVar16._8_4_;
  fVar11 = fVar11 + auVar16._12_4_;
LAB_140a2e68f:
  *param_2 = SQRT((float)(~-(uint)(iVar12 == 0) & (uint)fVar8) +
                  (float)(~-(uint)(iVar13 == 0) & (uint)fVar9) +
                  (float)(~-(uint)(iVar14 == 0) & (uint)fVar10) +
                  (float)(~-(uint)(iVar15 == 0) & (uint)fVar11));
  return;
}

// ArrayMultiply___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a2f1a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiply___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint in_R10D;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar11 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar13 = 0;
    do {
      uVar16 = (ulonglong)uVar18;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar16);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar16);
      *pfVar3 = *pfVar2 * *pfVar1;
      pfVar3[1] = fVar8 * fVar5;
      pfVar3[2] = fVar9 * fVar6;
      pfVar3[3] = fVar10 * fVar7;
      uVar13 = uVar13 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar13 < uVar11);
    in_R10D = uVar11;
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar19._4_4_ = iVar12;
  auVar19._0_4_ = iVar12;
  auVar19._8_4_ = iVar12;
  auVar19._12_4_ = iVar12;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_4);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_4);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_4);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_4);
  lVar14 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R10D,auVar21);
  bVar17 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar14);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar14);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar14);
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar21 = ZEXT416(*(uint *)(param_2 + lVar14));
    }
    if ((uVar11 & 2) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 0xc),0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ * auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ * auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ * auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ * auVar21._12_4_;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_3 + lVar14) = auVar20._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(param_3 + 4 + lVar14) = uVar4;
  }
  if ((bVar17 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(param_3 + 8 + lVar14) = uVar4;
  }
  if (-1 < (char)bVar17) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(param_3 + 0xc + lVar14) = uVar4;
  return;
}

// ArrayComplexMultiplyInPlace___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a2f540

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyInPlace___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  longlong lVar18;
  undefined4 unaff_EDI;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint *puVar23;
  ulonglong uVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  undefined1 in_XMM2 [16];
  
  fVar7 = _UNK_150d5662c;
  fVar6 = _UNK_150d56628;
  fVar5 = _UNK_150d56624;
  fVar4 = ___xmm_3f800000bf8000003f800000bf800000;
  auVar26 = *param_4;
  uVar20 = movmskps((int)param_4,auVar26);
  uVar17 = param_3 & 0xfffffffc;
  if (uVar20 != 0xf) {
    if (0 < (int)uVar17) {
      uVar21 = 0;
      auVar25._0_4_ = auVar26._0_4_ << 0x1f;
      auVar25._4_4_ = (float)(auVar26._4_4_ << 0x1f);
      auVar25._8_4_ = auVar26._8_4_ << 0x1f;
      auVar25._12_4_ = (float)(auVar26._12_4_ << 0x1f);
      uVar19 = movmskps(unaff_EDI,auVar25);
      uVar24 = 0;
      do {
        uVar22 = (ulonglong)uVar21;
        pfVar1 = (float *)(param_2 + uVar22);
        if (((byte)uVar20 & 9) == 9) {
          auVar26 = *(undefined1 (*) [16])(param_1 + uVar22);
          in_XMM2 = *(undefined1 (*) [16])(param_2 + uVar22);
        }
        else {
          puVar23 = (uint *)(uVar22 + param_1);
          auVar26 = auVar25;
          if ((uVar19 & 1) != 0) {
            auVar26 = ZEXT416(*puVar23);
          }
          if ((uVar19 & 2) != 0) {
            auVar26 = insertps(auVar26,puVar23[1],0x10);
          }
          if ((uVar19 & 4) != 0) {
            auVar26 = insertps(auVar26,puVar23[2],0x20);
          }
          if ((uVar19 & 8) != 0) {
            auVar26 = insertps(auVar26,puVar23[3],0x30);
          }
          if ((uVar19 & 1) != 0) {
            in_XMM2 = ZEXT416((uint)*pfVar1);
          }
          if ((uVar19 & 2) != 0) {
            in_XMM2 = insertps(in_XMM2,pfVar1[1],0x10);
          }
          if ((uVar19 & 4) != 0) {
            in_XMM2 = insertps(in_XMM2,pfVar1[2],0x20);
          }
          if ((uVar19 & 8) != 0) {
            in_XMM2 = insertps(in_XMM2,pfVar1[3],0x30);
          }
        }
        auVar25._4_4_ = auVar26._4_4_;
        auVar25._0_4_ = (int)auVar25._4_4_;
        auVar25._12_4_ = auVar26._12_4_;
        auVar25._8_4_ = (int)auVar25._12_4_;
        fVar30 = in_XMM2._0_4_;
        fVar27 = in_XMM2._4_4_;
        fVar28 = in_XMM2._8_4_;
        fVar29 = in_XMM2._12_4_;
        in_XMM2._0_4_ = fVar27 * auVar25._4_4_ * fVar4 + auVar26._0_4_ * fVar30;
        in_XMM2._4_4_ = fVar30 * auVar25._4_4_ * fVar5 + auVar26._0_4_ * fVar27;
        in_XMM2._8_4_ = fVar29 * auVar25._12_4_ * fVar6 + auVar26._8_4_ * fVar28;
        in_XMM2._12_4_ = fVar28 * auVar25._12_4_ * fVar7 + auVar26._8_4_ * fVar29;
        if ((uVar20 & 1) != 0) {
          *pfVar1 = in_XMM2._0_4_;
        }
        if ((uVar20 & 2) != 0) {
          uVar8 = extractps(in_XMM2,1);
          *(undefined8 *)(pfVar1 + 1) = uVar8;
        }
        if ((uVar20 & 4) != 0) {
          uVar8 = extractps(in_XMM2,2);
          *(undefined8 *)(pfVar1 + 2) = uVar8;
        }
        if ((char)((byte)uVar20 << 4) >> 4 < '\0') {
          uVar8 = extractps(in_XMM2,3);
          *(undefined8 *)(pfVar1 + 3) = uVar8;
        }
        uVar24 = uVar24 + 4;
        uVar21 = uVar21 + 0x10;
      } while (uVar24 < uVar17);
    }
    if ((int)param_3 <= (int)uVar17) {
      return;
    }
    lVar18 = (longlong)(int)uVar17;
    do {
      fVar4 = *(float *)(param_1 + lVar18 * 4);
      fVar5 = *(float *)(param_1 + 4 + lVar18 * 4);
      fVar6 = *(float *)(param_2 + lVar18 * 4);
      fVar7 = *(float *)(param_2 + 4 + lVar18 * 4);
      *(float *)(param_2 + lVar18 * 4) = fVar4 * fVar6 - fVar5 * fVar7;
      *(float *)(param_2 + 4 + lVar18 * 4) = fVar4 * fVar7 + fVar6 * fVar5;
      lVar18 = lVar18 + 2;
    } while (lVar18 < (int)param_3);
    return;
  }
  if (0 < (int)uVar17) {
    uVar20 = uVar17 - 1;
    if (uVar20 == 3) {
      uVar21 = 0;
    }
    else {
      uVar19 = (uVar20 >> 2) + 1 & 0xfffffffe;
      uVar21 = 0;
      do {
        uVar24 = (ulonglong)uVar21;
        pfVar1 = (float *)(param_1 + uVar24);
        fVar30 = *pfVar1;
        fVar27 = pfVar1[1];
        fVar28 = pfVar1[2];
        fVar29 = pfVar1[3];
        pfVar1 = (float *)(param_2 + uVar24);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        pfVar1 = (float *)(param_1 + 0x10 + uVar24);
        fVar13 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[2];
        fVar16 = pfVar1[3];
        pfVar1 = (float *)(param_2 + uVar24);
        *pfVar1 = fVar30 * fVar9 + fVar10 * fVar27 * fVar4;
        pfVar1[1] = fVar30 * fVar10 + fVar9 * fVar27 * fVar5;
        pfVar1[2] = fVar28 * fVar11 + fVar12 * fVar29 * fVar6;
        pfVar1[3] = fVar28 * fVar12 + fVar11 * fVar29 * fVar7;
        pfVar1 = (float *)(param_2 + 0x10 + uVar24);
        fVar30 = *pfVar1;
        fVar27 = pfVar1[1];
        fVar28 = pfVar1[2];
        fVar29 = pfVar1[3];
        pfVar1 = (float *)(param_2 + 0x10 + uVar24);
        *pfVar1 = fVar13 * fVar30 + fVar27 * fVar14 * fVar4;
        pfVar1[1] = fVar13 * fVar27 + fVar30 * fVar14 * fVar5;
        pfVar1[2] = fVar15 * fVar28 + fVar29 * fVar16 * fVar6;
        pfVar1[3] = fVar15 * fVar29 + fVar28 * fVar16 * fVar7;
        uVar21 = uVar21 + 0x20;
        uVar19 = uVar19 - 2;
      } while (uVar19 != 0);
      if ((uVar20 & 4) != 0) goto LAB_140a2f850;
    }
    uVar24 = (ulonglong)uVar21;
    pfVar1 = (float *)(param_1 + uVar24);
    fVar4 = *pfVar1;
    fVar5 = pfVar1[2];
    pfVar2 = (float *)(param_2 + uVar24);
    fVar6 = pfVar2[1];
    fVar7 = pfVar2[2];
    fVar30 = pfVar2[3];
    fVar27 = *pfVar2 * pfVar1[1] * _UNK_150d56624;
    fVar28 = fVar30 * pfVar1[3] * _UNK_150d56628;
    fVar29 = fVar7 * pfVar1[3] * _UNK_150d5662c;
    pfVar3 = (float *)(param_2 + uVar24);
    *pfVar3 = fVar4 * *pfVar2 + fVar6 * pfVar1[1] * ___xmm_3f800000bf8000003f800000bf800000;
    pfVar3[1] = fVar4 * fVar6 + fVar27;
    pfVar3[2] = fVar5 * fVar7 + fVar28;
    pfVar3[3] = fVar5 * fVar30 + fVar29;
  }
LAB_140a2f850:
  if ((int)uVar17 < (int)param_3) {
    lVar18 = (longlong)(int)uVar17;
    do {
      fVar4 = *(float *)(param_1 + lVar18 * 4);
      fVar5 = *(float *)(param_1 + 4 + lVar18 * 4);
      fVar6 = *(float *)(param_2 + lVar18 * 4);
      fVar7 = *(float *)(param_2 + 4 + lVar18 * 4);
      *(float *)(param_2 + lVar18 * 4) = fVar4 * fVar6 - fVar5 * fVar7;
      *(float *)(param_2 + 4 + lVar18 * 4) = fVar4 * fVar7 + fVar6 * fVar5;
      lVar18 = lVar18 + 2;
    } while (lVar18 < (int)param_3);
  }
  return;
}

// ArrayComplexMultiplyAdd___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a2f8b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyAdd___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
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
  byte bVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  byte bVar22;
  uint uVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar29 = _UNK_150d5662c;
  fVar28 = _UNK_150d56628;
  fVar27 = _UNK_150d56624;
  fVar24 = ___xmm_3f800000bf8000003f800000bf800000;
  uVar20 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar20 = param_4;
  }
  if ((int)(uVar20 & 0xfffffffc) < 1) {
    uVar17 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar23 = 0;
    uVar17 = 0;
    do {
      uVar19 = (ulonglong)uVar23;
      pfVar1 = (float *)(param_1 + uVar19);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar1 = (float *)(param_2 + uVar19);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar1 = (float *)(param_3 + uVar19);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar19);
      *pfVar2 = *pfVar1 + fVar4 * fVar8 + fVar9 * fVar5 * fVar24;
      pfVar2[1] = fVar12 + fVar4 * fVar9 + fVar8 * fVar5 * fVar27;
      pfVar2[2] = fVar13 + fVar6 * fVar10 + fVar11 * fVar7 * fVar28;
      pfVar2[3] = fVar14 + fVar6 * fVar11 + fVar10 * fVar7 * fVar29;
      uVar17 = uVar17 + 4;
      uVar23 = uVar23 + 0x10;
    } while (uVar17 < (uVar20 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar17) {
      return;
    }
  }
  iVar16 = (int)uVar17;
  auVar25._4_4_ = iVar16;
  auVar25._0_4_ = iVar16;
  auVar25._8_4_ = iVar16;
  auVar25._12_4_ = iVar16;
  auVar25 = auVar25 | ___xmm_00000003000000020000000100000000;
  auVar31._0_4_ = -(uint)(auVar25._0_4_ < (int)param_4);
  auVar31._4_4_ = -(uint)(auVar25._4_4_ < (int)param_4);
  auVar31._8_4_ = -(uint)(auVar25._8_4_ < (int)param_4);
  auVar31._12_4_ = -(uint)(auVar25._12_4_ < (int)param_4);
  lVar21 = (longlong)(iVar16 << 2);
  uVar20 = movmskps(param_4,auVar31);
  bVar22 = (byte)uVar20 & 9;
  if (bVar22 == 9) {
    auVar31 = *(undefined1 (*) [16])(param_1 + lVar21);
    auVar25 = *(undefined1 (*) [16])(param_2 + lVar21);
  }
  else {
    puVar18 = (uint *)(param_1 + lVar21);
    if ((uVar20 & 1) != 0) {
      auVar31 = ZEXT416(*puVar18);
    }
    if ((uVar20 & 2) != 0) {
      auVar31 = insertps(auVar31,puVar18[1],0x10);
    }
    if ((uVar20 & 4) != 0) {
      auVar31 = insertps(auVar31,puVar18[2],0x20);
    }
    if ((uVar20 & 8) != 0) {
      auVar31 = insertps(auVar31,puVar18[3],0x30);
    }
    if ((uVar20 & 1) != 0) {
      auVar25 = ZEXT416(*(uint *)(param_2 + lVar21));
    }
    if ((uVar20 & 2) != 0) {
      auVar25 = insertps(auVar25,*(undefined4 *)(param_2 + lVar21 + 4),0x10);
    }
    if ((uVar20 & 4) != 0) {
      auVar25 = insertps(auVar25,*(undefined4 *)(param_2 + lVar21 + 8),0x20);
    }
    if ((uVar20 & 8) != 0) {
      auVar25 = insertps(auVar25,*(undefined4 *)(param_2 + lVar21 + 0xc),0x30);
    }
  }
  bVar15 = (char)((byte)uVar20 << 4) >> 4;
  pfVar1 = (float *)(param_3 + lVar21);
  auVar30._4_4_ = auVar31._4_4_;
  auVar30._0_4_ = auVar30._4_4_;
  auVar30._12_4_ = auVar31._12_4_;
  auVar30._8_4_ = auVar30._12_4_;
  fVar24 = auVar25._4_4_ * auVar30._4_4_;
  fVar27 = auVar25._0_4_ * auVar30._4_4_;
  fVar28 = auVar25._12_4_ * auVar30._12_4_;
  fVar29 = auVar25._8_4_ * auVar30._12_4_;
  if (bVar22 == 9) {
    auVar30 = *(undefined1 (*) [16])(param_3 + lVar21);
  }
  else {
    if ((uVar20 & 1) != 0) {
      auVar30 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar20 & 2) != 0) {
      auVar30 = insertps(auVar30,pfVar1[1],0x10);
    }
    if ((uVar20 & 4) != 0) {
      auVar30 = insertps(auVar30,pfVar1[2],0x20);
    }
    if ((uVar20 & 8) != 0) {
      auVar30 = insertps(auVar30,pfVar1[3],0x30);
    }
  }
  auVar26._0_4_ =
       fVar24 * ___xmm_3f800000bf8000003f800000bf800000 + auVar31._0_4_ * auVar25._0_4_ +
       auVar30._0_4_;
  auVar26._4_4_ = fVar27 * _UNK_150d56624 + auVar31._0_4_ * auVar25._4_4_ + auVar30._4_4_;
  auVar26._8_4_ = fVar28 * _UNK_150d56628 + auVar31._8_4_ * auVar25._8_4_ + auVar30._8_4_;
  auVar26._12_4_ = fVar29 * _UNK_150d5662c + auVar31._8_4_ * auVar25._12_4_ + auVar30._12_4_;
  if ((bVar15 & 1) != 0) {
    *pfVar1 = auVar26._0_4_;
  }
  if ((bVar15 & 2) != 0) {
    uVar3 = extractps(auVar26,1);
    *(undefined8 *)(pfVar1 + 1) = uVar3;
  }
  if ((bVar15 & 4) != 0) {
    uVar3 = extractps(auVar26,2);
    *(undefined8 *)(pfVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  uVar3 = extractps(auVar26,3);
  *(undefined8 *)(pfVar1 + 3) = uVar3;
  return;
}

// ArrayLerpAddInPlace___un_3C_Cunf_3E_CunfCunfun_3C_unf_3E_Cuni_sse4 @ 140a30280

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpAddInPlace___un_3C_Cunf_3E_CunfCunfun_3C_unf_3E_Cuni_sse4
               (longlong param_1,float param_2,float param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint in_R8D;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar27;
  int iVar28;
  undefined1 auVar26 [16];
  int iVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  
  uVar14 = _UNK_150631e0c;
  uVar13 = _UNK_150631e08;
  uVar12 = __xmm_00000003000000020000000100000000._4_4_;
  uVar21 = (uint)__xmm_00000003000000020000000100000000;
  fVar31 = __real_3f800000;
  if (__real_3f800000 <= (float)(int)(param_5 - 1)) {
    fVar31 = (float)(int)(param_5 - 1);
  }
  fVar31 = (param_3 - param_2) / fVar31;
  uVar17 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar17 = param_5;
  }
  uVar17 = uVar17 & 0xfffffffc;
  if ((int)uVar17 < 1) {
    uVar20 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar22 = 0;
    uVar20 = 0;
    do {
      uVar18 = (uint)uVar20;
      uVar24 = (ulonglong)uVar22;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar32 = pfVar1[1];
      fVar33 = pfVar1[2];
      fVar34 = pfVar1[3];
      pfVar2 = (float *)(param_4 + uVar24);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_4 + uVar24);
      *pfVar3 = *pfVar2 + *pfVar1 * ((float)(int)(uVar18 | uVar21) * fVar31 + param_2);
      pfVar3[1] = fVar8 + fVar32 * ((float)(int)(uVar18 | uVar12) * fVar31 + param_2);
      pfVar3[2] = fVar9 + fVar33 * ((float)(int)(uVar18 | uVar13) * fVar31 + param_2);
      pfVar3[3] = fVar10 + fVar34 * ((float)(int)(uVar18 | uVar14) * fVar31 + param_2);
      uVar20 = uVar20 + 4;
      uVar22 = uVar22 + 0x10;
    } while (uVar20 < uVar17);
    in_R8D = uVar17;
    if ((int)param_5 <= (int)uVar20) {
      return;
    }
  }
  iVar19 = (int)uVar20;
  auVar26._4_4_ = iVar19;
  auVar26._0_4_ = iVar19;
  auVar26._8_4_ = iVar19;
  auVar26._12_4_ = iVar19;
  auVar11._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar11._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar11._8_4_ = _UNK_150631e08;
  auVar11._12_4_ = _UNK_150631e0c;
  auVar26 = auVar26 | auVar11;
  auVar30._4_4_ = param_2;
  auVar30._0_4_ = param_2;
  auVar30._8_4_ = param_2;
  auVar30._12_4_ = param_2;
  iVar25 = auVar26._0_4_;
  iVar27 = auVar26._4_4_;
  iVar28 = auVar26._8_4_;
  iVar29 = auVar26._12_4_;
  lVar23 = (longlong)(iVar19 << 2);
  auVar35._0_4_ = -(uint)(iVar25 < (int)param_5);
  auVar35._4_4_ = -(uint)(iVar27 < (int)param_5);
  auVar35._8_4_ = -(uint)(iVar28 < (int)param_5);
  auVar35._12_4_ = -(uint)(iVar29 < (int)param_5);
  uVar21 = movmskps(in_R8D,auVar35);
  bVar15 = (char)((byte)uVar21 << 4) >> 4;
  pfVar1 = (float *)(param_4 + lVar23);
  if ((~(byte)uVar21 & 9) == 0) {
    auVar26 = *(undefined1 (*) [16])(param_1 + lVar23);
    auVar30 = *(undefined1 (*) [16])(param_4 + lVar23);
  }
  else {
    puVar16 = (uint *)(param_1 + lVar23);
    if ((uVar21 & 1) != 0) {
      auVar26 = ZEXT416(*puVar16);
    }
    if ((uVar21 & 2) != 0) {
      auVar26 = insertps(auVar26,puVar16[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar26 = insertps(auVar26,puVar16[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar26 = insertps(auVar26,puVar16[3],0x30);
    }
    if ((uVar21 & 1) != 0) {
      auVar30 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar21 & 2) != 0) {
      auVar30 = insertps(auVar30,pfVar1[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar30 = insertps(auVar30,pfVar1[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar30 = insertps(auVar30,pfVar1[3],0x30);
    }
  }
  fVar32 = (fVar31 * (float)iVar25 + param_2) * auVar26._0_4_ + auVar30._0_4_;
  fVar33 = (fVar31 * (float)iVar27 + param_2) * auVar26._4_4_ + auVar30._4_4_;
  fVar34 = (fVar31 * (float)iVar28 + param_2) * auVar26._8_4_ + auVar30._8_4_;
  fVar31 = (fVar31 * (float)iVar29 + param_2) * auVar26._12_4_ + auVar30._12_4_;
  if ((bVar15 & 1) != 0) {
    *pfVar1 = fVar32;
  }
  if ((bVar15 & 2) != 0) {
    auVar7._4_4_ = fVar33;
    auVar7._0_4_ = fVar32;
    auVar7._8_4_ = fVar34;
    auVar7._12_4_ = fVar31;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar15 & 4) != 0) {
    auVar6._4_4_ = fVar33;
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = fVar34;
    auVar6._12_4_ = fVar31;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  auVar5._4_4_ = fVar33;
  auVar5._0_4_ = fVar32;
  auVar5._8_4_ = fVar34;
  auVar5._12_4_ = fVar31;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArraySubtract___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a304c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtract___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint in_R10D;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar11 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar13 = 0;
    do {
      uVar16 = (ulonglong)uVar18;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar16);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar16);
      *pfVar3 = *pfVar1 - *pfVar2;
      pfVar3[1] = fVar5 - fVar8;
      pfVar3[2] = fVar6 - fVar9;
      pfVar3[3] = fVar7 - fVar10;
      uVar13 = uVar13 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar13 < uVar11);
    in_R10D = uVar11;
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar19._4_4_ = iVar12;
  auVar19._0_4_ = iVar12;
  auVar19._8_4_ = iVar12;
  auVar19._12_4_ = iVar12;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_4);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_4);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_4);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_4);
  lVar14 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R10D,auVar21);
  bVar17 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar14);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar14);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar14);
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar21 = ZEXT416(*(uint *)(param_2 + lVar14));
    }
    if ((uVar11 & 2) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 0xc),0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ - auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ - auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ - auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ - auVar21._12_4_;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_3 + lVar14) = auVar20._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(param_3 + 4 + lVar14) = uVar4;
  }
  if ((bVar17 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(param_3 + 8 + lVar14) = uVar4;
  }
  if (-1 < (char)bVar17) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(param_3 + 0xc + lVar14) = uVar4;
  return;
}

// ArrayMagnitudeToDecibelInPlace___un_3C_unf_3E_CunfCuni_sse4 @ 140a311e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMagnitudeToDecibelInPlace___un_3C_unf_3E_CunfCuni_sse4
               (longlong param_1,float param_2,uint param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  byte bVar26;
  int iVar27;
  ulonglong uVar28;
  float fVar29;
  int iVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  float fVar55;
  float fVar56;
  undefined1 auVar54 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  fVar24 = _UNK_150d5ac2c;
  fVar23 = _UNK_150d5ac28;
  fVar22 = _UNK_150d5ac24;
  fVar21 = ___xmm_410af967410af967410af967410af967;
  auVar46 = ___xmm_7fc000007fc000007fc000007fc00000;
  fVar20 = _UNK_150d5ac0c;
  fVar19 = _UNK_150d5ac08;
  fVar18 = _UNK_150d5ac04;
  fVar17 = ___xmm_3f3172183f3172183f3172183f317218;
  fVar16 = _UNK_150d5abfc;
  fVar15 = _UNK_150d5abf8;
  fVar14 = _UNK_150d5abf4;
  fVar13 = ___xmm_3f0000103f0000103f0000103f000010;
  fVar12 = _UNK_150d5abec;
  fVar11 = _UNK_150d5abe8;
  fVar10 = _UNK_150d5abe4;
  fVar9 = ___xmm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c;
  fVar8 = _UNK_150d5abdc;
  fVar7 = _UNK_150d5abd8;
  fVar6 = _UNK_150d5abd4;
  fVar5 = ___xmm_3e80fb873e80fb873e80fb873e80fb87;
  fVar57 = _UNK_150d5abcc;
  fVar56 = _UNK_150d5abc8;
  fVar55 = _UNK_150d5abc4;
  fVar53 = ___xmm_3e33a0af3e33a0af3e33a0af3e33a0af;
  auVar4 = ___xmm_ff800000ff800000ff800000ff800000;
  auVar54 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar25 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar25 = param_3;
  }
  fVar40 = (param_2 * __real_40135d8e) / __real_41a00000;
  auVar44 = ZEXT416((uint)(__real_3fb8aa3b * fVar40));
  auVar44 = roundss(auVar44,auVar44,9);
  fVar29 = auVar44._0_4_;
  iVar27 = (int)fVar29;
  if (iVar27 < 0x80) {
    fVar40 = fVar29 * __real_b5bfbe8e + fVar40 + __real_bf317200 * fVar29;
    fVar29 = (float)(iVar27 * 0x800000 + 0x3f800000);
    fVar40 = fVar29 * (((((((__real_39907835 * fVar40 + __real_3aaaf7b5) * fVar40 + __real_3c09475d)
                           * fVar40 + __real_3d2a9d49) * fVar40 + __real_3e2aab20) * fVar40 +
                        __real_3efffffd) * fVar40 + __real_3f800000) * fVar40 + __real_3f800000);
    iVar30 = movmskps(fVar29,*param_4);
  }
  else {
    iVar30 = movmskps((int)param_4,*param_4);
    fVar40 = __real_7f800000;
  }
  auVar44 = ZEXT816(0);
  if (-0x7f < iVar27) {
    auVar44 = ZEXT416((uint)fVar40);
  }
  uVar25 = uVar25 & 0xfffffffc;
  auVar45._0_4_ = auVar44._0_4_;
  fVar40 = (float)__xmm_3f8000003f8000003f8000003f800000;
  fVar29 = __xmm_3f8000003f8000003f8000003f800000._4_4_;
  fVar2 = __xmm_3f8000003f8000003f8000003f800000._8_4_;
  fVar3 = __xmm_3f8000003f8000003f8000003f800000._12_4_;
  if (iVar30 == 0xf) {
    if ((int)uVar25 < 1) {
      uVar25 = 0;
      if ((int)param_3 < 1) {
        return;
      }
      goto LAB_140a315ee;
    }
    auVar44._4_4_ = auVar45._0_4_;
    auVar44._0_4_ = auVar45._0_4_;
    auVar44._8_4_ = auVar45._0_4_;
    auVar44._12_4_ = auVar45._0_4_;
    uVar31 = 0;
    uVar28 = 0;
    do {
      auVar59 = maxps(*(undefined1 (*) [16])(param_1 + (ulonglong)uVar31),auVar44);
      iVar27 = -(uint)(auVar59._8_4_ <= 0.0);
      iVar30 = -(uint)(auVar59._12_4_ <= 0.0);
      uVar41 = CONCAT44(-(uint)(auVar59._4_4_ <= 0.0),-(uint)(auVar59._0_4_ <= 0.0));
      auVar58._8_4_ = iVar27;
      auVar58._0_8_ = uVar41;
      auVar58._12_4_ = iVar30;
      auVar58 = blendvps(auVar59,auVar54,auVar58);
      fVar47 = fVar40 - (float)(auVar58._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                               ___xmm_3f0000003f0000003f0000003f000000);
      fVar50 = fVar29 - (float)(auVar58._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
      fVar51 = fVar2 - (float)(auVar58._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
      fVar52 = fVar3 - (float)(auVar58._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
      auVar35._4_4_ = -(uint)(auVar59._4_4_ < 0.0);
      auVar35._0_4_ = -(uint)(auVar59._0_4_ < 0.0);
      auVar49._0_4_ =
           (float)(((int)auVar58._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) * fVar17
           - (((((((((fVar47 * ___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e +
                     ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar47 +
                    ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar47 +
                   ___xmm_bf198181bf198181bf198181bf198181) * fVar47 +
                  ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar47 + fVar53) * fVar47 + fVar5) *
                fVar47 + fVar9) * fVar47 + fVar13) * fVar47 + fVar40) * fVar47;
      auVar49._4_4_ =
           (float)(((int)auVar58._4_4_ >> 0x17) + _UNK_150d5a924) * fVar18 -
           (((((((((fVar50 * _UNK_150d5ab74 + _UNK_150d5ab84) * fVar50 + _UNK_150d5ab94) * fVar50 +
                 _UNK_150d5aba4) * fVar50 + _UNK_150d5abb4) * fVar50 + fVar55) * fVar50 + fVar6) *
              fVar50 + fVar10) * fVar50 + fVar14) * fVar50 + fVar29) * fVar50;
      auVar49._8_4_ =
           (float)(((int)auVar58._8_4_ >> 0x17) + _UNK_150d5a928) * fVar19 -
           (((((((((fVar51 * _UNK_150d5ab78 + _UNK_150d5ab88) * fVar51 + _UNK_150d5ab98) * fVar51 +
                 _UNK_150d5aba8) * fVar51 + _UNK_150d5abb8) * fVar51 + fVar56) * fVar51 + fVar7) *
              fVar51 + fVar11) * fVar51 + fVar15) * fVar51 + fVar2) * fVar51;
      auVar49._12_4_ =
           (float)(((int)auVar58._12_4_ >> 0x17) + _UNK_150d5a92c) * fVar20 -
           (((((((((fVar52 * _UNK_150d5ab7c + _UNK_150d5ab8c) * fVar52 + _UNK_150d5ab9c) * fVar52 +
                 _UNK_150d5abac) * fVar52 + _UNK_150d5abbc) * fVar52 + fVar57) * fVar52 + fVar8) *
              fVar52 + fVar12) * fVar52 + fVar16) * fVar52 + fVar3) * fVar52;
      auVar35._8_4_ = -(uint)(auVar59._8_4_ < 0.0);
      auVar35._12_4_ = -(uint)(auVar59._12_4_ < 0.0);
      auVar58 = blendvps(auVar4,auVar46,auVar35);
      auVar59._8_4_ = iVar27;
      auVar59._0_8_ = uVar41;
      auVar59._12_4_ = iVar30;
      auVar58 = blendvps(auVar49,auVar58,auVar59);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      *pfVar1 = auVar58._0_4_ * fVar21;
      pfVar1[1] = auVar58._4_4_ * fVar22;
      pfVar1[2] = auVar58._8_4_ * fVar23;
      pfVar1[3] = auVar58._12_4_ * fVar24;
      uVar28 = uVar28 + 4;
      uVar31 = uVar31 + 0x10;
    } while (uVar28 < uVar25);
  }
  else if ((int)uVar25 < 1) {
    uVar28 = 0;
  }
  else {
    auVar45._4_4_ = auVar45._0_4_;
    auVar45._8_4_ = auVar45._0_4_;
    auVar45._12_4_ = auVar45._0_4_;
    uVar31 = 0;
    uVar28 = 0;
    do {
      auVar44 = maxps(*(undefined1 (*) [16])(param_1 + (ulonglong)uVar31),auVar45);
      iVar27 = -(uint)(auVar44._8_4_ <= 0.0);
      iVar30 = -(uint)(auVar44._12_4_ <= 0.0);
      uVar41 = CONCAT44(-(uint)(auVar44._4_4_ <= 0.0),-(uint)(auVar44._0_4_ <= 0.0));
      auVar32._8_4_ = iVar27;
      auVar32._0_8_ = uVar41;
      auVar32._12_4_ = iVar30;
      auVar58 = blendvps(auVar44,auVar54,auVar32);
      fVar47 = fVar40 - (float)(auVar58._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                               ___xmm_3f0000003f0000003f0000003f000000);
      fVar50 = fVar29 - (float)(auVar58._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
      fVar51 = fVar2 - (float)(auVar58._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
      fVar52 = fVar3 - (float)(auVar58._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
      auVar33._4_4_ = -(uint)(auVar44._4_4_ < 0.0);
      auVar33._0_4_ = -(uint)(auVar44._0_4_ < 0.0);
      auVar48._0_4_ =
           (float)(((int)auVar58._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) * fVar17
           - (((((((((fVar47 * ___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e +
                     ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar47 +
                    ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar47 +
                   ___xmm_bf198181bf198181bf198181bf198181) * fVar47 +
                  ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar47 + fVar53) * fVar47 + fVar5) *
                fVar47 + fVar9) * fVar47 + fVar13) * fVar47 + fVar40) * fVar47;
      auVar48._4_4_ =
           (float)(((int)auVar58._4_4_ >> 0x17) + _UNK_150d5a924) * fVar18 -
           (((((((((fVar50 * _UNK_150d5ab74 + _UNK_150d5ab84) * fVar50 + _UNK_150d5ab94) * fVar50 +
                 _UNK_150d5aba4) * fVar50 + _UNK_150d5abb4) * fVar50 + fVar55) * fVar50 + fVar6) *
              fVar50 + fVar10) * fVar50 + fVar14) * fVar50 + fVar29) * fVar50;
      auVar48._8_4_ =
           (float)(((int)auVar58._8_4_ >> 0x17) + _UNK_150d5a928) * fVar19 -
           (((((((((fVar51 * _UNK_150d5ab78 + _UNK_150d5ab88) * fVar51 + _UNK_150d5ab98) * fVar51 +
                 _UNK_150d5aba8) * fVar51 + _UNK_150d5abb8) * fVar51 + fVar56) * fVar51 + fVar7) *
              fVar51 + fVar11) * fVar51 + fVar15) * fVar51 + fVar2) * fVar51;
      auVar48._12_4_ =
           (float)(((int)auVar58._12_4_ >> 0x17) + _UNK_150d5a92c) * fVar20 -
           (((((((((fVar52 * _UNK_150d5ab7c + _UNK_150d5ab8c) * fVar52 + _UNK_150d5ab9c) * fVar52 +
                 _UNK_150d5abac) * fVar52 + _UNK_150d5abbc) * fVar52 + fVar57) * fVar52 + fVar8) *
              fVar52 + fVar12) * fVar52 + fVar16) * fVar52 + fVar3) * fVar52;
      auVar33._8_4_ = -(uint)(auVar44._8_4_ < 0.0);
      auVar33._12_4_ = -(uint)(auVar44._12_4_ < 0.0);
      auVar44 = blendvps(auVar4,auVar46,auVar33);
      auVar34._8_4_ = iVar27;
      auVar34._0_8_ = uVar41;
      auVar34._12_4_ = iVar30;
      auVar44 = blendvps(auVar48,auVar44,auVar34);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      *pfVar1 = auVar44._0_4_ * fVar21;
      pfVar1[1] = auVar44._4_4_ * fVar22;
      pfVar1[2] = auVar44._8_4_ * fVar23;
      pfVar1[3] = auVar44._12_4_ * fVar24;
      uVar28 = uVar28 + 4;
      uVar31 = uVar31 + 0x10;
      auVar44 = auVar45;
    } while (uVar28 < uVar25);
  }
  uVar25 = (uint)uVar28;
  if ((int)param_3 <= (int)uVar25) {
    return;
  }
LAB_140a315ee:
  auVar54._0_8_ =
       CONCAT44(-(uint)((int)(uVar25 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_3)
                ,-(uint)((int)(uVar25 | (uint)__xmm_00000003000000020000000100000000) < (int)param_3
                        ));
  auVar54._8_4_ = -(uint)((int)(uVar25 | _UNK_150631e08) < (int)param_3);
  auVar54._12_4_ = -(uint)((int)(uVar25 | _UNK_150631e0c) < (int)param_3);
  pfVar1 = (float *)(param_1 + (int)(uVar25 << 2));
  uVar31 = movmskps(param_3,auVar54);
  bVar26 = (char)((byte)uVar31 << 4) >> 4;
  if ((~(byte)uVar31 & 9) == 0) {
    auVar44 = *(undefined1 (*) [16])(param_1 + (int)(uVar25 << 2));
  }
  else {
    if ((uVar31 & 1) != 0) {
      auVar44 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar31 & 2) != 0) {
      auVar44 = insertps(auVar44,pfVar1[1],0x10);
    }
    if ((uVar31 & 4) != 0) {
      auVar44 = insertps(auVar44,pfVar1[2],0x20);
    }
    if ((uVar31 & 8) != 0) {
      auVar44 = insertps(auVar44,pfVar1[3],0x30);
    }
  }
  auVar46._4_4_ = auVar45._0_4_;
  auVar46._0_4_ = auVar45._0_4_;
  auVar46._8_4_ = auVar45._0_4_;
  auVar46._12_4_ = auVar45._0_4_;
  auVar46 = maxps(auVar44,auVar46);
  iVar27 = -(uint)(auVar46._8_4_ <= 0.0);
  iVar30 = -(uint)(auVar46._12_4_ <= 0.0);
  uVar41 = CONCAT44(-(uint)(auVar46._4_4_ <= 0.0),-(uint)(auVar46._0_4_ <= 0.0));
  auVar36._8_4_ = iVar27;
  auVar36._0_8_ = uVar41;
  auVar36._12_4_ = iVar30;
  auVar44 = blendvps(auVar46,___xmm_3f8000003f8000003f8000003f800000,auVar36);
  auVar37._8_4_ = auVar54._8_4_;
  auVar37._0_8_ = auVar54._0_8_;
  auVar37._12_4_ = auVar54._12_4_;
  auVar4._4_4_ = __xmm_3f8000003f8000003f8000003f800000._4_4_ -
                 (float)(auVar44._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
  auVar4._0_4_ = (float)__xmm_3f8000003f8000003f8000003f800000 -
                 (float)(auVar44._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                        ___xmm_3f0000003f0000003f0000003f000000);
  auVar4._8_4_ = __xmm_3f8000003f8000003f8000003f800000._8_4_ -
                 (float)(auVar44._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
  auVar4._12_4_ =
       __xmm_3f8000003f8000003f8000003f800000._12_4_ -
       (float)(auVar44._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
  auVar54 = blendvps(___xmm_7fc000007fc000007fc000007fc00000,auVar4,auVar37);
  fVar53 = auVar54._0_4_;
  fVar55 = auVar54._4_4_;
  fVar56 = auVar54._8_4_;
  fVar57 = auVar54._12_4_;
  auVar42._0_4_ =
       (float)(((int)auVar44._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) *
       ___xmm_3f3172183f3172183f3172183f317218 -
       (((((((((___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e * fVar53 +
               ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar53 +
              ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar53 +
             ___xmm_bf198181bf198181bf198181bf198181) * fVar53 +
            ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar53 +
           ___xmm_3e33a0af3e33a0af3e33a0af3e33a0af) * fVar53 +
          ___xmm_3e80fb873e80fb873e80fb873e80fb87) * fVar53 +
         ___xmm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c) * fVar53 + ___xmm_3f0000103f0000103f0000103f000010
        ) * fVar53 + (float)__xmm_3f8000003f8000003f8000003f800000) * fVar53;
  auVar42._4_4_ =
       (float)(((int)auVar44._4_4_ >> 0x17) + _UNK_150d5a924) * _UNK_150d5ac04 -
       (((((((((_UNK_150d5ab74 * fVar55 + _UNK_150d5ab84) * fVar55 + _UNK_150d5ab94) * fVar55 +
             _UNK_150d5aba4) * fVar55 + _UNK_150d5abb4) * fVar55 + _UNK_150d5abc4) * fVar55 +
          _UNK_150d5abd4) * fVar55 + _UNK_150d5abe4) * fVar55 + _UNK_150d5abf4) * fVar55 +
       __xmm_3f8000003f8000003f8000003f800000._4_4_) * fVar55;
  auVar42._8_4_ =
       (float)(((int)auVar44._8_4_ >> 0x17) + _UNK_150d5a928) * _UNK_150d5ac08 -
       (((((((((_UNK_150d5ab78 * fVar56 + _UNK_150d5ab88) * fVar56 + _UNK_150d5ab98) * fVar56 +
             _UNK_150d5aba8) * fVar56 + _UNK_150d5abb8) * fVar56 + _UNK_150d5abc8) * fVar56 +
          _UNK_150d5abd8) * fVar56 + _UNK_150d5abe8) * fVar56 + _UNK_150d5abf8) * fVar56 +
       __xmm_3f8000003f8000003f8000003f800000._8_4_) * fVar56;
  auVar42._12_4_ =
       (float)(((int)auVar44._12_4_ >> 0x17) + _UNK_150d5a92c) * _UNK_150d5ac0c -
       (((((((((_UNK_150d5ab7c * fVar57 + _UNK_150d5ab8c) * fVar57 + _UNK_150d5ab9c) * fVar57 +
             _UNK_150d5abac) * fVar57 + _UNK_150d5abbc) * fVar57 + _UNK_150d5abcc) * fVar57 +
          _UNK_150d5abdc) * fVar57 + _UNK_150d5abec) * fVar57 + _UNK_150d5abfc) * fVar57 +
       __xmm_3f8000003f8000003f8000003f800000._12_4_) * fVar57;
  auVar38._4_4_ = -(uint)(auVar46._4_4_ < 0.0);
  auVar38._0_4_ = -(uint)(auVar46._0_4_ < 0.0);
  auVar38._8_4_ = -(uint)(auVar46._8_4_ < 0.0);
  auVar38._12_4_ = -(uint)(auVar46._12_4_ < 0.0);
  auVar54 = blendvps(___xmm_ff800000ff800000ff800000ff800000,___xmm_7fc000007fc000007fc000007fc00000
                     ,auVar38);
  auVar39._8_4_ = iVar27;
  auVar39._0_8_ = uVar41;
  auVar39._12_4_ = iVar30;
  auVar54 = blendvps(auVar42,auVar54,auVar39);
  auVar43._0_4_ = auVar54._0_4_ * ___xmm_410af967410af967410af967410af967;
  auVar43._4_4_ = auVar54._4_4_ * _UNK_150d5ac24;
  auVar43._8_4_ = auVar54._8_4_ * _UNK_150d5ac28;
  auVar43._12_4_ = auVar54._12_4_ * _UNK_150d5ac2c;
  if ((bVar26 & 1) != 0) {
    *pfVar1 = auVar43._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar41 = extractps(auVar43,1);
    *(undefined8 *)(pfVar1 + 1) = uVar41;
  }
  if ((bVar26 & 4) != 0) {
    uVar41 = extractps(auVar43,2);
    *(undefined8 *)(pfVar1 + 2) = uVar41;
  }
  if ((char)bVar26 < '\0') {
    uVar41 = extractps(auVar43,3);
    *(undefined8 *)(pfVar1 + 3) = uVar41;
  }
  return;
}

// ArrayPowerToDecibelInPlace___un_3C_unf_3E_CunfCuni_sse4 @ 140a31840

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPowerToDecibelInPlace___un_3C_unf_3E_CunfCuni_sse4
               (longlong param_1,float param_2,uint param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  byte bVar26;
  int iVar27;
  ulonglong uVar28;
  float fVar29;
  int iVar30;
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  undefined8 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar53;
  float fVar55;
  float fVar56;
  undefined1 auVar54 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  
  fVar24 = _UNK_150d5ac3c;
  fVar23 = _UNK_150d5ac38;
  fVar22 = _UNK_150d5ac34;
  fVar21 = ___xmm_408af967408af967408af967408af967;
  auVar46 = ___xmm_7fc000007fc000007fc000007fc00000;
  fVar20 = _UNK_150d5ac0c;
  fVar19 = _UNK_150d5ac08;
  fVar18 = _UNK_150d5ac04;
  fVar17 = ___xmm_3f3172183f3172183f3172183f317218;
  fVar16 = _UNK_150d5abfc;
  fVar15 = _UNK_150d5abf8;
  fVar14 = _UNK_150d5abf4;
  fVar13 = ___xmm_3f0000103f0000103f0000103f000010;
  fVar12 = _UNK_150d5abec;
  fVar11 = _UNK_150d5abe8;
  fVar10 = _UNK_150d5abe4;
  fVar9 = ___xmm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c;
  fVar8 = _UNK_150d5abdc;
  fVar7 = _UNK_150d5abd8;
  fVar6 = _UNK_150d5abd4;
  fVar5 = ___xmm_3e80fb873e80fb873e80fb873e80fb87;
  fVar57 = _UNK_150d5abcc;
  fVar56 = _UNK_150d5abc8;
  fVar55 = _UNK_150d5abc4;
  fVar53 = ___xmm_3e33a0af3e33a0af3e33a0af3e33a0af;
  auVar4 = ___xmm_ff800000ff800000ff800000ff800000;
  auVar54 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar25 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar25 = param_3;
  }
  fVar40 = (param_2 * __real_40135d8e) / __real_41200000;
  auVar44 = ZEXT416((uint)(__real_3fb8aa3b * fVar40));
  auVar44 = roundss(auVar44,auVar44,9);
  fVar29 = auVar44._0_4_;
  iVar27 = (int)fVar29;
  if (iVar27 < 0x80) {
    fVar40 = fVar29 * __real_b5bfbe8e + fVar40 + __real_bf317200 * fVar29;
    fVar29 = (float)(iVar27 * 0x800000 + 0x3f800000);
    fVar40 = fVar29 * (((((((__real_39907835 * fVar40 + __real_3aaaf7b5) * fVar40 + __real_3c09475d)
                           * fVar40 + __real_3d2a9d49) * fVar40 + __real_3e2aab20) * fVar40 +
                        __real_3efffffd) * fVar40 + __real_3f800000) * fVar40 + __real_3f800000);
    iVar30 = movmskps(fVar29,*param_4);
  }
  else {
    iVar30 = movmskps((int)param_4,*param_4);
    fVar40 = __real_7f800000;
  }
  auVar44 = ZEXT816(0);
  if (-0x7f < iVar27) {
    auVar44 = ZEXT416((uint)fVar40);
  }
  uVar25 = uVar25 & 0xfffffffc;
  auVar45._0_4_ = auVar44._0_4_;
  fVar40 = (float)__xmm_3f8000003f8000003f8000003f800000;
  fVar29 = __xmm_3f8000003f8000003f8000003f800000._4_4_;
  fVar2 = __xmm_3f8000003f8000003f8000003f800000._8_4_;
  fVar3 = __xmm_3f8000003f8000003f8000003f800000._12_4_;
  if (iVar30 == 0xf) {
    if ((int)uVar25 < 1) {
      uVar25 = 0;
      if ((int)param_3 < 1) {
        return;
      }
      goto LAB_140a31c4e;
    }
    auVar44._4_4_ = auVar45._0_4_;
    auVar44._0_4_ = auVar45._0_4_;
    auVar44._8_4_ = auVar45._0_4_;
    auVar44._12_4_ = auVar45._0_4_;
    uVar31 = 0;
    uVar28 = 0;
    do {
      auVar59 = maxps(*(undefined1 (*) [16])(param_1 + (ulonglong)uVar31),auVar44);
      iVar27 = -(uint)(auVar59._8_4_ <= 0.0);
      iVar30 = -(uint)(auVar59._12_4_ <= 0.0);
      uVar41 = CONCAT44(-(uint)(auVar59._4_4_ <= 0.0),-(uint)(auVar59._0_4_ <= 0.0));
      auVar58._8_4_ = iVar27;
      auVar58._0_8_ = uVar41;
      auVar58._12_4_ = iVar30;
      auVar58 = blendvps(auVar59,auVar54,auVar58);
      fVar47 = fVar40 - (float)(auVar58._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                               ___xmm_3f0000003f0000003f0000003f000000);
      fVar50 = fVar29 - (float)(auVar58._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
      fVar51 = fVar2 - (float)(auVar58._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
      fVar52 = fVar3 - (float)(auVar58._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
      auVar35._4_4_ = -(uint)(auVar59._4_4_ < 0.0);
      auVar35._0_4_ = -(uint)(auVar59._0_4_ < 0.0);
      auVar49._0_4_ =
           (float)(((int)auVar58._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) * fVar17
           - (((((((((fVar47 * ___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e +
                     ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar47 +
                    ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar47 +
                   ___xmm_bf198181bf198181bf198181bf198181) * fVar47 +
                  ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar47 + fVar53) * fVar47 + fVar5) *
                fVar47 + fVar9) * fVar47 + fVar13) * fVar47 + fVar40) * fVar47;
      auVar49._4_4_ =
           (float)(((int)auVar58._4_4_ >> 0x17) + _UNK_150d5a924) * fVar18 -
           (((((((((fVar50 * _UNK_150d5ab74 + _UNK_150d5ab84) * fVar50 + _UNK_150d5ab94) * fVar50 +
                 _UNK_150d5aba4) * fVar50 + _UNK_150d5abb4) * fVar50 + fVar55) * fVar50 + fVar6) *
              fVar50 + fVar10) * fVar50 + fVar14) * fVar50 + fVar29) * fVar50;
      auVar49._8_4_ =
           (float)(((int)auVar58._8_4_ >> 0x17) + _UNK_150d5a928) * fVar19 -
           (((((((((fVar51 * _UNK_150d5ab78 + _UNK_150d5ab88) * fVar51 + _UNK_150d5ab98) * fVar51 +
                 _UNK_150d5aba8) * fVar51 + _UNK_150d5abb8) * fVar51 + fVar56) * fVar51 + fVar7) *
              fVar51 + fVar11) * fVar51 + fVar15) * fVar51 + fVar2) * fVar51;
      auVar49._12_4_ =
           (float)(((int)auVar58._12_4_ >> 0x17) + _UNK_150d5a92c) * fVar20 -
           (((((((((fVar52 * _UNK_150d5ab7c + _UNK_150d5ab8c) * fVar52 + _UNK_150d5ab9c) * fVar52 +
                 _UNK_150d5abac) * fVar52 + _UNK_150d5abbc) * fVar52 + fVar57) * fVar52 + fVar8) *
              fVar52 + fVar12) * fVar52 + fVar16) * fVar52 + fVar3) * fVar52;
      auVar35._8_4_ = -(uint)(auVar59._8_4_ < 0.0);
      auVar35._12_4_ = -(uint)(auVar59._12_4_ < 0.0);
      auVar58 = blendvps(auVar4,auVar46,auVar35);
      auVar59._8_4_ = iVar27;
      auVar59._0_8_ = uVar41;
      auVar59._12_4_ = iVar30;
      auVar58 = blendvps(auVar49,auVar58,auVar59);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      *pfVar1 = auVar58._0_4_ * fVar21;
      pfVar1[1] = auVar58._4_4_ * fVar22;
      pfVar1[2] = auVar58._8_4_ * fVar23;
      pfVar1[3] = auVar58._12_4_ * fVar24;
      uVar28 = uVar28 + 4;
      uVar31 = uVar31 + 0x10;
    } while (uVar28 < uVar25);
  }
  else if ((int)uVar25 < 1) {
    uVar28 = 0;
  }
  else {
    auVar45._4_4_ = auVar45._0_4_;
    auVar45._8_4_ = auVar45._0_4_;
    auVar45._12_4_ = auVar45._0_4_;
    uVar31 = 0;
    uVar28 = 0;
    do {
      auVar44 = maxps(*(undefined1 (*) [16])(param_1 + (ulonglong)uVar31),auVar45);
      iVar27 = -(uint)(auVar44._8_4_ <= 0.0);
      iVar30 = -(uint)(auVar44._12_4_ <= 0.0);
      uVar41 = CONCAT44(-(uint)(auVar44._4_4_ <= 0.0),-(uint)(auVar44._0_4_ <= 0.0));
      auVar32._8_4_ = iVar27;
      auVar32._0_8_ = uVar41;
      auVar32._12_4_ = iVar30;
      auVar58 = blendvps(auVar44,auVar54,auVar32);
      fVar47 = fVar40 - (float)(auVar58._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                               ___xmm_3f0000003f0000003f0000003f000000);
      fVar50 = fVar29 - (float)(auVar58._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
      fVar51 = fVar2 - (float)(auVar58._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
      fVar52 = fVar3 - (float)(auVar58._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
      auVar33._4_4_ = -(uint)(auVar44._4_4_ < 0.0);
      auVar33._0_4_ = -(uint)(auVar44._0_4_ < 0.0);
      auVar48._0_4_ =
           (float)(((int)auVar58._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) * fVar17
           - (((((((((fVar47 * ___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e +
                     ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar47 +
                    ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar47 +
                   ___xmm_bf198181bf198181bf198181bf198181) * fVar47 +
                  ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar47 + fVar53) * fVar47 + fVar5) *
                fVar47 + fVar9) * fVar47 + fVar13) * fVar47 + fVar40) * fVar47;
      auVar48._4_4_ =
           (float)(((int)auVar58._4_4_ >> 0x17) + _UNK_150d5a924) * fVar18 -
           (((((((((fVar50 * _UNK_150d5ab74 + _UNK_150d5ab84) * fVar50 + _UNK_150d5ab94) * fVar50 +
                 _UNK_150d5aba4) * fVar50 + _UNK_150d5abb4) * fVar50 + fVar55) * fVar50 + fVar6) *
              fVar50 + fVar10) * fVar50 + fVar14) * fVar50 + fVar29) * fVar50;
      auVar48._8_4_ =
           (float)(((int)auVar58._8_4_ >> 0x17) + _UNK_150d5a928) * fVar19 -
           (((((((((fVar51 * _UNK_150d5ab78 + _UNK_150d5ab88) * fVar51 + _UNK_150d5ab98) * fVar51 +
                 _UNK_150d5aba8) * fVar51 + _UNK_150d5abb8) * fVar51 + fVar56) * fVar51 + fVar7) *
              fVar51 + fVar11) * fVar51 + fVar15) * fVar51 + fVar2) * fVar51;
      auVar48._12_4_ =
           (float)(((int)auVar58._12_4_ >> 0x17) + _UNK_150d5a92c) * fVar20 -
           (((((((((fVar52 * _UNK_150d5ab7c + _UNK_150d5ab8c) * fVar52 + _UNK_150d5ab9c) * fVar52 +
                 _UNK_150d5abac) * fVar52 + _UNK_150d5abbc) * fVar52 + fVar57) * fVar52 + fVar8) *
              fVar52 + fVar12) * fVar52 + fVar16) * fVar52 + fVar3) * fVar52;
      auVar33._8_4_ = -(uint)(auVar44._8_4_ < 0.0);
      auVar33._12_4_ = -(uint)(auVar44._12_4_ < 0.0);
      auVar44 = blendvps(auVar4,auVar46,auVar33);
      auVar34._8_4_ = iVar27;
      auVar34._0_8_ = uVar41;
      auVar34._12_4_ = iVar30;
      auVar44 = blendvps(auVar48,auVar44,auVar34);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar31);
      *pfVar1 = auVar44._0_4_ * fVar21;
      pfVar1[1] = auVar44._4_4_ * fVar22;
      pfVar1[2] = auVar44._8_4_ * fVar23;
      pfVar1[3] = auVar44._12_4_ * fVar24;
      uVar28 = uVar28 + 4;
      uVar31 = uVar31 + 0x10;
      auVar44 = auVar45;
    } while (uVar28 < uVar25);
  }
  uVar25 = (uint)uVar28;
  if ((int)param_3 <= (int)uVar25) {
    return;
  }
LAB_140a31c4e:
  auVar54._0_8_ =
       CONCAT44(-(uint)((int)(uVar25 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_3)
                ,-(uint)((int)(uVar25 | (uint)__xmm_00000003000000020000000100000000) < (int)param_3
                        ));
  auVar54._8_4_ = -(uint)((int)(uVar25 | _UNK_150631e08) < (int)param_3);
  auVar54._12_4_ = -(uint)((int)(uVar25 | _UNK_150631e0c) < (int)param_3);
  pfVar1 = (float *)(param_1 + (int)(uVar25 << 2));
  uVar31 = movmskps(param_3,auVar54);
  bVar26 = (char)((byte)uVar31 << 4) >> 4;
  if ((~(byte)uVar31 & 9) == 0) {
    auVar44 = *(undefined1 (*) [16])(param_1 + (int)(uVar25 << 2));
  }
  else {
    if ((uVar31 & 1) != 0) {
      auVar44 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar31 & 2) != 0) {
      auVar44 = insertps(auVar44,pfVar1[1],0x10);
    }
    if ((uVar31 & 4) != 0) {
      auVar44 = insertps(auVar44,pfVar1[2],0x20);
    }
    if ((uVar31 & 8) != 0) {
      auVar44 = insertps(auVar44,pfVar1[3],0x30);
    }
  }
  auVar46._4_4_ = auVar45._0_4_;
  auVar46._0_4_ = auVar45._0_4_;
  auVar46._8_4_ = auVar45._0_4_;
  auVar46._12_4_ = auVar45._0_4_;
  auVar46 = maxps(auVar44,auVar46);
  iVar27 = -(uint)(auVar46._8_4_ <= 0.0);
  iVar30 = -(uint)(auVar46._12_4_ <= 0.0);
  uVar41 = CONCAT44(-(uint)(auVar46._4_4_ <= 0.0),-(uint)(auVar46._0_4_ <= 0.0));
  auVar36._8_4_ = iVar27;
  auVar36._0_8_ = uVar41;
  auVar36._12_4_ = iVar30;
  auVar44 = blendvps(auVar46,___xmm_3f8000003f8000003f8000003f800000,auVar36);
  auVar37._8_4_ = auVar54._8_4_;
  auVar37._0_8_ = auVar54._0_8_;
  auVar37._12_4_ = auVar54._12_4_;
  auVar4._4_4_ = __xmm_3f8000003f8000003f8000003f800000._4_4_ -
                 (float)(auVar44._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
  auVar4._0_4_ = (float)__xmm_3f8000003f8000003f8000003f800000 -
                 (float)(auVar44._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                        ___xmm_3f0000003f0000003f0000003f000000);
  auVar4._8_4_ = __xmm_3f8000003f8000003f8000003f800000._8_4_ -
                 (float)(auVar44._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
  auVar4._12_4_ =
       __xmm_3f8000003f8000003f8000003f800000._12_4_ -
       (float)(auVar44._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
  auVar54 = blendvps(___xmm_7fc000007fc000007fc000007fc00000,auVar4,auVar37);
  fVar53 = auVar54._0_4_;
  fVar55 = auVar54._4_4_;
  fVar56 = auVar54._8_4_;
  fVar57 = auVar54._12_4_;
  auVar42._0_4_ =
       (float)(((int)auVar44._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) *
       ___xmm_3f3172183f3172183f3172183f317218 -
       (((((((((___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e * fVar53 +
               ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar53 +
              ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar53 +
             ___xmm_bf198181bf198181bf198181bf198181) * fVar53 +
            ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar53 +
           ___xmm_3e33a0af3e33a0af3e33a0af3e33a0af) * fVar53 +
          ___xmm_3e80fb873e80fb873e80fb873e80fb87) * fVar53 +
         ___xmm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c) * fVar53 + ___xmm_3f0000103f0000103f0000103f000010
        ) * fVar53 + (float)__xmm_3f8000003f8000003f8000003f800000) * fVar53;
  auVar42._4_4_ =
       (float)(((int)auVar44._4_4_ >> 0x17) + _UNK_150d5a924) * _UNK_150d5ac04 -
       (((((((((_UNK_150d5ab74 * fVar55 + _UNK_150d5ab84) * fVar55 + _UNK_150d5ab94) * fVar55 +
             _UNK_150d5aba4) * fVar55 + _UNK_150d5abb4) * fVar55 + _UNK_150d5abc4) * fVar55 +
          _UNK_150d5abd4) * fVar55 + _UNK_150d5abe4) * fVar55 + _UNK_150d5abf4) * fVar55 +
       __xmm_3f8000003f8000003f8000003f800000._4_4_) * fVar55;
  auVar42._8_4_ =
       (float)(((int)auVar44._8_4_ >> 0x17) + _UNK_150d5a928) * _UNK_150d5ac08 -
       (((((((((_UNK_150d5ab78 * fVar56 + _UNK_150d5ab88) * fVar56 + _UNK_150d5ab98) * fVar56 +
             _UNK_150d5aba8) * fVar56 + _UNK_150d5abb8) * fVar56 + _UNK_150d5abc8) * fVar56 +
          _UNK_150d5abd8) * fVar56 + _UNK_150d5abe8) * fVar56 + _UNK_150d5abf8) * fVar56 +
       __xmm_3f8000003f8000003f8000003f800000._8_4_) * fVar56;
  auVar42._12_4_ =
       (float)(((int)auVar44._12_4_ >> 0x17) + _UNK_150d5a92c) * _UNK_150d5ac0c -
       (((((((((_UNK_150d5ab7c * fVar57 + _UNK_150d5ab8c) * fVar57 + _UNK_150d5ab9c) * fVar57 +
             _UNK_150d5abac) * fVar57 + _UNK_150d5abbc) * fVar57 + _UNK_150d5abcc) * fVar57 +
          _UNK_150d5abdc) * fVar57 + _UNK_150d5abec) * fVar57 + _UNK_150d5abfc) * fVar57 +
       __xmm_3f8000003f8000003f8000003f800000._12_4_) * fVar57;
  auVar38._4_4_ = -(uint)(auVar46._4_4_ < 0.0);
  auVar38._0_4_ = -(uint)(auVar46._0_4_ < 0.0);
  auVar38._8_4_ = -(uint)(auVar46._8_4_ < 0.0);
  auVar38._12_4_ = -(uint)(auVar46._12_4_ < 0.0);
  auVar54 = blendvps(___xmm_ff800000ff800000ff800000ff800000,___xmm_7fc000007fc000007fc000007fc00000
                     ,auVar38);
  auVar39._8_4_ = iVar27;
  auVar39._0_8_ = uVar41;
  auVar39._12_4_ = iVar30;
  auVar54 = blendvps(auVar42,auVar54,auVar39);
  auVar43._0_4_ = auVar54._0_4_ * ___xmm_408af967408af967408af967408af967;
  auVar43._4_4_ = auVar54._4_4_ * _UNK_150d5ac34;
  auVar43._8_4_ = auVar54._8_4_ * _UNK_150d5ac38;
  auVar43._12_4_ = auVar54._12_4_ * _UNK_150d5ac3c;
  if ((bVar26 & 1) != 0) {
    *pfVar1 = auVar43._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar41 = extractps(auVar43,1);
    *(undefined8 *)(pfVar1 + 1) = uVar41;
  }
  if ((bVar26 & 4) != 0) {
    uVar41 = extractps(auVar43,2);
    *(undefined8 *)(pfVar1 + 2) = uVar41;
  }
  if ((char)bVar26 < '\0') {
    uVar41 = extractps(auVar43,3);
    *(undefined8 *)(pfVar1 + 3) = uVar41;
  }
  return;
}

// ArrayComplexToPowerInterleaved___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a31ea0

void ArrayComplexToPowerInterleaved___un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar14 = movmskps((int)param_4,*param_4);
  uVar11 = param_3 & 0xfffffffc;
  if (iVar14 == 0xf) {
    if (0 < (int)uVar11) {
      uVar15 = 0;
      uVar16 = 0;
      do {
        pfVar1 = (float *)(param_1 + uVar15 * 2);
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)(param_1 + 0x10 + uVar15 * 2);
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar10 = pfVar2[3];
        pfVar2 = (float *)(param_2 + (uVar15 & 0xffffffff));
        *pfVar2 = pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1;
        pfVar2[1] = fVar5 * fVar5 + fVar4 * fVar4;
        pfVar2[2] = fVar8 * fVar8 + fVar7 * fVar7;
        pfVar2[3] = fVar10 * fVar10 + fVar9 * fVar9;
        uVar16 = uVar16 + 4;
        uVar15 = uVar15 + 0x10;
      } while (uVar16 < uVar11);
    }
    if ((int)uVar11 < (int)param_3) {
      uVar15 = (ulonglong)(int)uVar11;
      if ((param_3 & 1) != 0) {
        fVar4 = *(float *)(param_1 + (longlong)(int)(uVar11 * 2) * 4);
        fVar5 = *(float *)(param_1 + (longlong)(int)(uVar11 * 2 + 1) * 4);
        *(float *)(param_2 + uVar15 * 4) = fVar5 * fVar5 + fVar4 * fVar4;
        uVar15 = uVar15 | 1;
      }
      if (uVar11 != param_3 - 1) {
        lVar12 = (longlong)(int)param_3 - uVar15;
        lVar3 = param_2 + 4 + uVar15 * 4;
        iVar14 = (int)uVar15 * 2;
        lVar13 = 0;
        do {
          iVar6 = (int)lVar13;
          fVar4 = *(float *)(param_1 + (longlong)(iVar14 + iVar6) * 4);
          fVar5 = *(float *)(param_1 + (longlong)(iVar14 + 1 + iVar6) * 4);
          *(float *)(lVar3 + -4 + lVar13 * 2) = fVar5 * fVar5 + fVar4 * fVar4;
          fVar4 = *(float *)(param_1 + (longlong)(iVar14 + 2 + iVar6) * 4);
          fVar5 = *(float *)(param_1 + (longlong)(iVar14 + 3 + iVar6) * 4);
          *(float *)(lVar3 + lVar13 * 2) = fVar5 * fVar5 + fVar4 * fVar4;
          lVar13 = lVar13 + 4;
          lVar12 = lVar12 + -2;
        } while (lVar12 != 0);
      }
    }
  }
  else {
    if (0 < (int)uVar11) {
      uVar15 = 0;
      uVar16 = 0;
      do {
        pfVar1 = (float *)(param_1 + uVar15 * 2);
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        pfVar2 = (float *)(param_1 + 0x10 + uVar15 * 2);
        fVar7 = *pfVar2;
        fVar8 = pfVar2[1];
        fVar9 = pfVar2[2];
        fVar10 = pfVar2[3];
        pfVar2 = (float *)(param_2 + (uVar15 & 0xffffffff));
        *pfVar2 = pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1;
        pfVar2[1] = fVar5 * fVar5 + fVar4 * fVar4;
        pfVar2[2] = fVar8 * fVar8 + fVar7 * fVar7;
        pfVar2[3] = fVar10 * fVar10 + fVar9 * fVar9;
        uVar16 = uVar16 + 4;
        uVar15 = uVar15 + 0x10;
      } while (uVar16 < uVar11);
    }
    if ((int)uVar11 < (int)param_3) {
      uVar15 = (ulonglong)(int)uVar11;
      if ((param_3 & 1) != 0) {
        fVar4 = *(float *)(param_1 + (longlong)(int)(uVar11 * 2) * 4);
        fVar5 = *(float *)(param_1 + (longlong)(int)(uVar11 * 2 + 1) * 4);
        *(float *)(param_2 + uVar15 * 4) = fVar5 * fVar5 + fVar4 * fVar4;
        uVar15 = uVar15 | 1;
      }
      if (uVar11 != param_3 - 1) {
        lVar12 = (longlong)(int)param_3 - uVar15;
        lVar3 = param_2 + 4 + uVar15 * 4;
        iVar14 = (int)uVar15 * 2;
        lVar13 = 0;
        do {
          iVar6 = (int)lVar13;
          fVar4 = *(float *)(param_1 + (longlong)(iVar14 + iVar6) * 4);
          fVar5 = *(float *)(param_1 + (longlong)(iVar14 + 1 + iVar6) * 4);
          *(float *)(lVar3 + -4 + lVar13 * 2) = fVar5 * fVar5 + fVar4 * fVar4;
          fVar4 = *(float *)(param_1 + (longlong)(iVar14 + 2 + iVar6) * 4);
          fVar5 = *(float *)(param_1 + (longlong)(iVar14 + 3 + iVar6) * 4);
          *(float *)(lVar3 + lVar13 * 2) = fVar5 * fVar5 + fVar4 * fVar4;
          lVar13 = lVar13 + 4;
          lVar12 = lVar12 + -2;
        } while (lVar12 != 0);
      }
    }
  }
  return;
}

// ArrayComplexToPower___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a32100

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPower___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint in_R10D;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar11 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar13 = 0;
    do {
      uVar16 = (ulonglong)uVar18;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar16);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar16);
      *pfVar3 = *pfVar2 * *pfVar2 + *pfVar1 * *pfVar1;
      pfVar3[1] = fVar8 * fVar8 + fVar5 * fVar5;
      pfVar3[2] = fVar9 * fVar9 + fVar6 * fVar6;
      pfVar3[3] = fVar10 * fVar10 + fVar7 * fVar7;
      uVar13 = uVar13 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar13 < uVar11);
    in_R10D = uVar11;
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar19._4_4_ = iVar12;
  auVar19._0_4_ = iVar12;
  auVar19._8_4_ = iVar12;
  auVar19._12_4_ = iVar12;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar20._0_4_ = -(uint)(auVar19._0_4_ < (int)param_4);
  auVar20._4_4_ = -(uint)(auVar19._4_4_ < (int)param_4);
  auVar20._8_4_ = -(uint)(auVar19._8_4_ < (int)param_4);
  auVar20._12_4_ = -(uint)(auVar19._12_4_ < (int)param_4);
  lVar14 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R10D,auVar20);
  bVar17 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar14);
    auVar20 = *(undefined1 (*) [16])(param_2 + lVar14);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar14);
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar20 = ZEXT416(*(uint *)(param_2 + lVar14));
    }
    if ((uVar11 & 2) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar14 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar14 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar14 + 0xc),0x30);
    }
  }
  auVar21._0_4_ = auVar20._0_4_ * auVar20._0_4_ + auVar19._0_4_ * auVar19._0_4_;
  auVar21._4_4_ = auVar20._4_4_ * auVar20._4_4_ + auVar19._4_4_ * auVar19._4_4_;
  auVar21._8_4_ = auVar20._8_4_ * auVar20._8_4_ + auVar19._8_4_ * auVar19._8_4_;
  auVar21._12_4_ = auVar20._12_4_ * auVar20._12_4_ + auVar19._12_4_ * auVar19._12_4_;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_3 + lVar14) = auVar21._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar4 = extractps(auVar21,1);
    *(undefined8 *)(param_3 + 4 + lVar14) = uVar4;
  }
  if ((bVar17 & 4) != 0) {
    uVar4 = extractps(auVar21,2);
    *(undefined8 *)(param_3 + 8 + lVar14) = uVar4;
  }
  if (-1 < (char)bVar17) {
    return;
  }
  uVar4 = extractps(auVar21,3);
  *(undefined8 *)(param_3 + 0xc + lVar14) = uVar4;
  return;
}

// ArrayWeightedSumTwoGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_Cunfun_3C_unf_3E_Cuni_sse4 @ 140a32680

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumTwoGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_Cunfun_3C_unf_3E_Cuni_sse4
               (longlong param_1,float param_2,longlong param_3,float param_4,longlong param_5,
               uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint in_R10D;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar14 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar14 = param_6;
  }
  uVar14 = uVar14 & 0xfffffffc;
  if ((int)uVar14 < 1) {
    uVar16 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar17 = 0;
    uVar16 = 0;
    do {
      uVar12 = (ulonglong)uVar17;
      pfVar1 = (float *)(param_1 + uVar12);
      fVar20 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar12);
      fVar23 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_5 + uVar12);
      *pfVar3 = *pfVar2 * param_4 + *pfVar1 * param_2;
      pfVar3[1] = fVar23 * param_4 + fVar20 * param_2;
      pfVar3[2] = fVar8 * param_4 + fVar21 * param_2;
      pfVar3[3] = fVar9 * param_4 + fVar22 * param_2;
      uVar16 = uVar16 + 4;
      uVar17 = uVar17 + 0x10;
    } while (uVar16 < uVar14);
    in_R10D = uVar14;
    if ((int)param_6 <= (int)uVar16) {
      return;
    }
  }
  iVar15 = (int)uVar16;
  auVar18._4_4_ = iVar15;
  auVar18._0_4_ = iVar15;
  auVar18._8_4_ = iVar15;
  auVar18._12_4_ = iVar15;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar19._0_4_ = -(uint)(auVar18._0_4_ < (int)param_6);
  auVar19._4_4_ = -(uint)(auVar18._4_4_ < (int)param_6);
  auVar19._8_4_ = -(uint)(auVar18._8_4_ < (int)param_6);
  auVar19._12_4_ = -(uint)(auVar18._12_4_ < (int)param_6);
  lVar11 = (longlong)(iVar15 << 2);
  uVar14 = movmskps(in_R10D,auVar19);
  bVar13 = (char)((byte)uVar14 << 4) >> 4;
  if ((~(byte)uVar14 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + lVar11);
    auVar19 = *(undefined1 (*) [16])(param_3 + lVar11);
  }
  else {
    puVar10 = (uint *)(param_1 + lVar11);
    if ((uVar14 & 1) != 0) {
      auVar18 = ZEXT416(*puVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar18 = insertps(auVar18,puVar10[1],0x10);
    }
    if ((uVar14 & 4) != 0) {
      auVar18 = insertps(auVar18,puVar10[2],0x20);
    }
    if ((uVar14 & 8) != 0) {
      auVar18 = insertps(auVar18,puVar10[3],0x30);
    }
    if ((uVar14 & 1) != 0) {
      auVar19 = ZEXT416(*(uint *)(param_3 + lVar11));
    }
    if ((uVar14 & 2) != 0) {
      auVar19 = insertps(auVar19,*(undefined4 *)(param_3 + lVar11 + 4),0x10);
    }
    if ((uVar14 & 4) != 0) {
      auVar19 = insertps(auVar19,*(undefined4 *)(param_3 + lVar11 + 8),0x20);
    }
    if ((uVar14 & 8) != 0) {
      auVar19 = insertps(auVar19,*(undefined4 *)(param_3 + lVar11 + 0xc),0x30);
    }
  }
  fVar20 = param_4 * auVar19._0_4_ + param_2 * auVar18._0_4_;
  fVar21 = param_4 * auVar19._4_4_ + param_2 * auVar18._4_4_;
  fVar22 = param_4 * auVar19._8_4_ + param_2 * auVar18._8_4_;
  fVar23 = param_4 * auVar19._12_4_ + param_2 * auVar18._12_4_;
  if ((bVar13 & 1) != 0) {
    *(float *)(param_5 + lVar11) = fVar20;
  }
  if ((bVar13 & 2) != 0) {
    auVar7._4_4_ = fVar21;
    auVar7._0_4_ = fVar20;
    auVar7._8_4_ = fVar22;
    auVar7._12_4_ = fVar23;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(param_5 + 4 + lVar11) = uVar4;
  }
  if ((bVar13 & 4) != 0) {
    auVar6._4_4_ = fVar21;
    auVar6._0_4_ = fVar20;
    auVar6._8_4_ = fVar22;
    auVar6._12_4_ = fVar23;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(param_5 + 8 + lVar11) = uVar4;
  }
  if (-1 < (char)bVar13) {
    return;
  }
  auVar5._4_4_ = fVar21;
  auVar5._0_4_ = fVar20;
  auVar5._8_4_ = fVar22;
  auVar5._12_4_ = fVar23;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(param_5 + 0xc + lVar11) = uVar4;
  return;
}

// ArrayWeightedSumOneGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4 @ 140a32890

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumOneGain___un_3C_Cunf_3E_Cunfun_3C_Cunf_3E_un_3C_unf_3E_Cuni_sse4
               (longlong param_1,float param_2,longlong param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  longlong lVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint in_R10D;
  uint uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  uVar13 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar13 = param_5;
  }
  uVar13 = uVar13 & 0xfffffffc;
  if ((int)uVar13 < 1) {
    uVar15 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar17 = 0;
    uVar15 = 0;
    do {
      uVar16 = (ulonglong)uVar17;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar16);
      fVar22 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_4 + uVar16);
      *pfVar3 = *pfVar2 + *pfVar1 * param_2;
      pfVar3[1] = fVar22 + fVar19 * param_2;
      pfVar3[2] = fVar8 + fVar20 * param_2;
      pfVar3[3] = fVar9 + fVar21 * param_2;
      uVar15 = uVar15 + 4;
      uVar17 = uVar17 + 0x10;
    } while (uVar15 < uVar13);
    in_R10D = uVar13;
    if ((int)param_5 <= (int)uVar15) {
      return;
    }
  }
  iVar14 = (int)uVar15;
  auVar18._4_4_ = iVar14;
  auVar18._0_4_ = iVar14;
  auVar18._8_4_ = iVar14;
  auVar18._12_4_ = iVar14;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar23._0_4_ = -(uint)(auVar18._0_4_ < (int)param_5);
  auVar23._4_4_ = -(uint)(auVar18._4_4_ < (int)param_5);
  auVar23._8_4_ = -(uint)(auVar18._8_4_ < (int)param_5);
  auVar23._12_4_ = -(uint)(auVar18._12_4_ < (int)param_5);
  lVar10 = (longlong)(iVar14 << 2);
  uVar13 = movmskps(in_R10D,auVar23);
  bVar12 = (char)((byte)uVar13 << 4) >> 4;
  if ((~(byte)uVar13 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + lVar10);
    auVar23 = *(undefined1 (*) [16])(param_3 + lVar10);
  }
  else {
    puVar11 = (uint *)(param_1 + lVar10);
    if ((uVar13 & 1) != 0) {
      auVar18 = ZEXT416(*puVar11);
    }
    if ((uVar13 & 2) != 0) {
      auVar18 = insertps(auVar18,puVar11[1],0x10);
    }
    if ((uVar13 & 4) != 0) {
      auVar18 = insertps(auVar18,puVar11[2],0x20);
    }
    if ((uVar13 & 8) != 0) {
      auVar18 = insertps(auVar18,puVar11[3],0x30);
    }
    if ((uVar13 & 1) != 0) {
      auVar23 = ZEXT416(*(uint *)(param_3 + lVar10));
    }
    if ((uVar13 & 2) != 0) {
      auVar23 = insertps(auVar23,*(undefined4 *)(param_3 + lVar10 + 4),0x10);
    }
    if ((uVar13 & 4) != 0) {
      auVar23 = insertps(auVar23,*(undefined4 *)(param_3 + lVar10 + 8),0x20);
    }
    if ((uVar13 & 8) != 0) {
      auVar23 = insertps(auVar23,*(undefined4 *)(param_3 + lVar10 + 0xc),0x30);
    }
  }
  fVar19 = param_2 * auVar18._0_4_ + auVar23._0_4_;
  fVar20 = param_2 * auVar18._4_4_ + auVar23._4_4_;
  fVar21 = param_2 * auVar18._8_4_ + auVar23._8_4_;
  fVar22 = param_2 * auVar18._12_4_ + auVar23._12_4_;
  if ((bVar12 & 1) != 0) {
    *(float *)(param_4 + lVar10) = fVar19;
  }
  if ((bVar12 & 2) != 0) {
    auVar7._4_4_ = fVar20;
    auVar7._0_4_ = fVar19;
    auVar7._8_4_ = fVar21;
    auVar7._12_4_ = fVar22;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(param_4 + 4 + lVar10) = uVar4;
  }
  if ((bVar12 & 4) != 0) {
    auVar6._4_4_ = fVar20;
    auVar6._0_4_ = fVar19;
    auVar6._8_4_ = fVar21;
    auVar6._12_4_ = fVar22;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(param_4 + 8 + lVar10) = uVar4;
  }
  if (-1 < (char)bVar12) {
    return;
  }
  auVar5._4_4_ = fVar20;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = fVar21;
  auVar5._12_4_ = fVar22;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(param_4 + 0xc + lVar10) = uVar4;
  return;
}

// ArrayFade___un_3C_unf_3E_CuniCunfCunf_sse4 @ 140a32a80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade___un_3C_unf_3E_CuniCunfCunf_sse4
               (longlong param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  uint in_R8D;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar20;
  int iVar21;
  undefined1 auVar19 [16];
  int iVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar10 = _UNK_150631e0c;
  uVar9 = _UNK_150631e08;
  uVar8 = __xmm_00000003000000020000000100000000._4_4_;
  uVar16 = (uint)__xmm_00000003000000020000000100000000;
  fVar27 = (param_4 - param_3) / (float)(int)param_2;
  uVar11 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar11 = param_2;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar14 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar17 = 0;
    uVar14 = 0;
    do {
      uVar12 = (uint)uVar14;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar17);
      fVar24 = pfVar1[1];
      fVar25 = pfVar1[2];
      fVar26 = pfVar1[3];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar17);
      *pfVar2 = *pfVar1 * ((float)(int)(uVar12 | uVar16) * fVar27 + param_3);
      pfVar2[1] = fVar24 * ((float)(int)(uVar12 | uVar8) * fVar27 + param_3);
      pfVar2[2] = fVar25 * ((float)(int)(uVar12 | uVar9) * fVar27 + param_3);
      pfVar2[3] = fVar26 * ((float)(int)(uVar12 | uVar10) * fVar27 + param_3);
      uVar14 = uVar14 + 4;
      uVar17 = uVar17 + 0x10;
    } while (uVar14 < uVar11);
    in_R8D = uVar11;
    if ((int)param_2 <= (int)uVar14) {
      return;
    }
  }
  iVar13 = (int)uVar14;
  auVar19._4_4_ = iVar13;
  auVar19._0_4_ = iVar13;
  auVar19._8_4_ = iVar13;
  auVar19._12_4_ = iVar13;
  auVar7._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar7._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar7._8_4_ = _UNK_150631e08;
  auVar7._12_4_ = _UNK_150631e0c;
  auVar19 = auVar19 | auVar7;
  iVar18 = auVar19._0_4_;
  iVar20 = auVar19._4_4_;
  iVar21 = auVar19._8_4_;
  iVar22 = auVar19._12_4_;
  pfVar1 = (float *)(param_1 + (iVar13 << 2));
  auVar23._0_4_ = -(uint)(iVar18 < (int)param_2);
  auVar23._4_4_ = -(uint)(iVar20 < (int)param_2);
  auVar23._8_4_ = -(uint)(iVar21 < (int)param_2);
  auVar23._12_4_ = -(uint)(iVar22 < (int)param_2);
  uVar16 = movmskps(in_R8D,auVar23);
  bVar15 = (char)((byte)uVar16 << 4) >> 4;
  if ((~(byte)uVar16 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + (iVar13 << 2));
  }
  else {
    if ((uVar16 & 1) != 0) {
      auVar19 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar16 & 2) != 0) {
      auVar19 = insertps(auVar19,pfVar1[1],0x10);
    }
    if ((uVar16 & 4) != 0) {
      auVar19 = insertps(auVar19,pfVar1[2],0x20);
    }
    if ((uVar16 & 8) != 0) {
      auVar19 = insertps(auVar19,pfVar1[3],0x30);
    }
  }
  fVar24 = (param_3 + fVar27 * (float)iVar18) * auVar19._0_4_;
  fVar25 = (param_3 + fVar27 * (float)iVar20) * auVar19._4_4_;
  fVar26 = (param_3 + fVar27 * (float)iVar21) * auVar19._8_4_;
  fVar27 = (param_3 + fVar27 * (float)iVar22) * auVar19._12_4_;
  if ((bVar15 & 1) != 0) {
    *pfVar1 = fVar24;
  }
  if ((bVar15 & 2) != 0) {
    auVar6._4_4_ = fVar25;
    auVar6._0_4_ = fVar24;
    auVar6._8_4_ = fVar26;
    auVar6._12_4_ = fVar27;
    uVar3 = extractps(auVar6,1);
    *(undefined8 *)(pfVar1 + 1) = uVar3;
  }
  if ((bVar15 & 4) != 0) {
    auVar5._4_4_ = fVar25;
    auVar5._0_4_ = fVar24;
    auVar5._8_4_ = fVar26;
    auVar5._12_4_ = fVar27;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(pfVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  auVar4._4_4_ = fVar25;
  auVar4._0_4_ = fVar24;
  auVar4._8_4_ = fVar26;
  auVar4._12_4_ = fVar27;
  uVar3 = extractps(auVar4,3);
  *(undefined8 *)(pfVar1 + 3) = uVar3;
  return;
}

// ArrayFade2___un_3C_Cunf_3E_CuniCunfCunfun_3C_unf_3E__sse4 @ 140a32c10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade2___un_3C_Cunf_3E_CuniCunfCunfun_3C_unf_3E__sse4
               (longlong param_1,uint param_2,float param_3,float param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint in_R9D;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar22;
  int iVar23;
  undefined1 auVar21 [16];
  int iVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar10 = _UNK_150631e0c;
  uVar9 = _UNK_150631e08;
  uVar8 = __xmm_00000003000000020000000100000000._4_4_;
  uVar18 = (uint)__xmm_00000003000000020000000100000000;
  fVar29 = (param_4 - param_3) / (float)(int)param_2;
  uVar14 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar14 = param_2;
  }
  uVar14 = uVar14 & 0xfffffffc;
  if ((int)uVar14 < 1) {
    uVar17 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar19 = 0;
    uVar17 = 0;
    do {
      uVar15 = (uint)uVar17;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar19);
      fVar26 = pfVar1[1];
      fVar27 = pfVar1[2];
      fVar28 = pfVar1[3];
      pfVar2 = (float *)(param_5 + (ulonglong)uVar19);
      *pfVar2 = *pfVar1 * ((float)(int)(uVar15 | uVar18) * fVar29 + param_3);
      pfVar2[1] = fVar26 * ((float)(int)(uVar15 | uVar8) * fVar29 + param_3);
      pfVar2[2] = fVar27 * ((float)(int)(uVar15 | uVar9) * fVar29 + param_3);
      pfVar2[3] = fVar28 * ((float)(int)(uVar15 | uVar10) * fVar29 + param_3);
      uVar17 = uVar17 + 4;
      uVar19 = uVar19 + 0x10;
    } while (uVar17 < uVar14);
    in_R9D = uVar14;
    if ((int)param_2 <= (int)uVar17) {
      return;
    }
  }
  iVar16 = (int)uVar17;
  auVar21._4_4_ = iVar16;
  auVar21._0_4_ = iVar16;
  auVar21._8_4_ = iVar16;
  auVar21._12_4_ = iVar16;
  auVar7._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar7._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar7._8_4_ = _UNK_150631e08;
  auVar7._12_4_ = _UNK_150631e0c;
  auVar21 = auVar21 | auVar7;
  iVar20 = auVar21._0_4_;
  iVar22 = auVar21._4_4_;
  iVar23 = auVar21._8_4_;
  iVar24 = auVar21._12_4_;
  lVar12 = (longlong)(iVar16 << 2);
  auVar25._0_4_ = -(uint)(iVar20 < (int)param_2);
  auVar25._4_4_ = -(uint)(iVar22 < (int)param_2);
  auVar25._8_4_ = -(uint)(iVar23 < (int)param_2);
  auVar25._12_4_ = -(uint)(iVar24 < (int)param_2);
  uVar18 = movmskps(in_R9D,auVar25);
  bVar13 = (char)((byte)uVar18 << 4) >> 4;
  if ((~(byte)uVar18 & 9) == 0) {
    auVar21 = *(undefined1 (*) [16])(param_1 + lVar12);
  }
  else {
    puVar11 = (uint *)(param_1 + lVar12);
    if ((uVar18 & 1) != 0) {
      auVar21 = ZEXT416(*puVar11);
    }
    if ((uVar18 & 2) != 0) {
      auVar21 = insertps(auVar21,puVar11[1],0x10);
    }
    if ((uVar18 & 4) != 0) {
      auVar21 = insertps(auVar21,puVar11[2],0x20);
    }
    if ((uVar18 & 8) != 0) {
      auVar21 = insertps(auVar21,puVar11[3],0x30);
    }
  }
  fVar26 = (param_3 + fVar29 * (float)iVar20) * auVar21._0_4_;
  fVar27 = (param_3 + fVar29 * (float)iVar22) * auVar21._4_4_;
  fVar28 = (param_3 + fVar29 * (float)iVar23) * auVar21._8_4_;
  fVar29 = (param_3 + fVar29 * (float)iVar24) * auVar21._12_4_;
  if ((bVar13 & 1) != 0) {
    *(float *)(param_5 + lVar12) = fVar26;
  }
  if ((bVar13 & 2) != 0) {
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar26;
    auVar6._8_4_ = fVar28;
    auVar6._12_4_ = fVar29;
    uVar3 = extractps(auVar6,1);
    *(undefined8 *)(param_5 + 4 + lVar12) = uVar3;
  }
  if ((bVar13 & 4) != 0) {
    auVar5._4_4_ = fVar27;
    auVar5._0_4_ = fVar26;
    auVar5._8_4_ = fVar28;
    auVar5._12_4_ = fVar29;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(param_5 + 8 + lVar12) = uVar3;
  }
  if (-1 < (char)bVar13) {
    return;
  }
  auVar4._4_4_ = fVar27;
  auVar4._0_4_ = fVar26;
  auVar4._8_4_ = fVar28;
  auVar4._12_4_ = fVar29;
  uVar3 = extractps(auVar4,3);
  *(undefined8 *)(param_5 + 0xc + lVar12) = uVar3;
  return;
}

// ArrayMixInWithDelta___un_3C_Cunf_3E_un_3C_unf_3E_CuniCunfCunf_sse4 @ 140a33170

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithDelta___un_3C_Cunf_3E_un_3C_unf_3E_CuniCunfCunf_sse4
               (longlong param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint in_R9D;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar14 = _UNK_150631e0c;
  uVar13 = _UNK_150631e08;
  uVar12 = __xmm_00000003000000020000000100000000._4_4_;
  uVar21 = (uint)__xmm_00000003000000020000000100000000;
  fVar25 = (param_5 - param_4) / (float)(int)param_3;
  uVar16 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar16 = param_3;
  }
  uVar16 = uVar16 & 0xfffffffc;
  if ((int)uVar16 < 1) {
    uVar19 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar22 = 0;
    uVar19 = 0;
    do {
      uVar17 = (uint)uVar19;
      uVar24 = (ulonglong)uVar22;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar29 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar31 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar24);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_2 + uVar24);
      *pfVar3 = *pfVar2 + *pfVar1 * ((float)(int)(uVar17 | uVar21) * fVar25 + param_4);
      pfVar3[1] = fVar8 + fVar29 * ((float)(int)(uVar17 | uVar12) * fVar25 + param_4);
      pfVar3[2] = fVar9 + fVar30 * ((float)(int)(uVar17 | uVar13) * fVar25 + param_4);
      pfVar3[3] = fVar10 + fVar31 * ((float)(int)(uVar17 | uVar14) * fVar25 + param_4);
      uVar19 = uVar19 + 4;
      uVar22 = uVar22 + 0x10;
    } while (uVar19 < uVar16);
    in_R9D = uVar16;
    if ((int)param_3 <= (int)uVar19) {
      return;
    }
  }
  iVar18 = (int)uVar19;
  auVar27._4_4_ = iVar18;
  auVar27._0_4_ = iVar18;
  auVar27._8_4_ = iVar18;
  auVar27._12_4_ = iVar18;
  auVar11._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar11._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar11._8_4_ = _UNK_150631e08;
  auVar11._12_4_ = _UNK_150631e0c;
  auVar27 = auVar27 | auVar11;
  auVar26._0_4_ = fVar25 * (float)auVar27._0_4_;
  auVar26._4_4_ = fVar25 * (float)auVar27._4_4_;
  auVar26._8_4_ = fVar25 * (float)auVar27._8_4_;
  auVar26._12_4_ = fVar25 * (float)auVar27._12_4_;
  fVar25 = param_4 + auVar26._0_4_;
  fVar29 = param_4 + auVar26._4_4_;
  fVar30 = param_4 + auVar26._8_4_;
  param_4 = param_4 + auVar26._12_4_;
  lVar23 = (longlong)(iVar18 << 2);
  auVar28._0_4_ = -(uint)(auVar27._0_4_ < (int)param_3);
  auVar28._4_4_ = -(uint)(auVar27._4_4_ < (int)param_3);
  auVar28._8_4_ = -(uint)(auVar27._8_4_ < (int)param_3);
  auVar28._12_4_ = -(uint)(auVar27._12_4_ < (int)param_3);
  uVar21 = movmskps(in_R9D,auVar28);
  bVar15 = (char)((byte)uVar21 << 4) >> 4;
  pfVar1 = (float *)(param_2 + lVar23);
  if ((~(byte)uVar21 & 9) == 0) {
    auVar26 = *(undefined1 (*) [16])(param_1 + lVar23);
    auVar27 = *(undefined1 (*) [16])(param_2 + lVar23);
  }
  else {
    puVar20 = (uint *)(param_1 + lVar23);
    if ((uVar21 & 1) != 0) {
      auVar26 = ZEXT416(*puVar20);
    }
    if ((uVar21 & 2) != 0) {
      auVar26 = insertps(auVar26,puVar20[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar26 = insertps(auVar26,puVar20[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar26 = insertps(auVar26,puVar20[3],0x30);
    }
    if ((uVar21 & 1) != 0) {
      auVar27 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar21 & 2) != 0) {
      auVar27 = insertps(auVar27,pfVar1[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar27 = insertps(auVar27,pfVar1[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar27 = insertps(auVar27,pfVar1[3],0x30);
    }
  }
  fVar25 = fVar25 * auVar26._0_4_ + auVar27._0_4_;
  fVar29 = fVar29 * auVar26._4_4_ + auVar27._4_4_;
  fVar30 = fVar30 * auVar26._8_4_ + auVar27._8_4_;
  fVar31 = param_4 * auVar26._12_4_ + auVar27._12_4_;
  if ((bVar15 & 1) != 0) {
    *pfVar1 = fVar25;
  }
  if ((bVar15 & 2) != 0) {
    auVar7._4_4_ = fVar29;
    auVar7._0_4_ = fVar25;
    auVar7._8_4_ = fVar30;
    auVar7._12_4_ = fVar31;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar15 & 4) != 0) {
    auVar6._4_4_ = fVar29;
    auVar6._0_4_ = fVar25;
    auVar6._8_4_ = fVar30;
    auVar6._12_4_ = fVar31;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  auVar5._4_4_ = fVar29;
  auVar5._0_4_ = fVar25;
  auVar5._8_4_ = fVar30;
  auVar5._12_4_ = fVar31;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// TransformArrayRow___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_CuniCuni_sse4 @ 140a333b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformArrayRow___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_unf_3E_CuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5,
               int *param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM4 [16];
  
  uVar3 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar3 = param_5;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar8 = 0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    iVar14 = *param_6;
    iVar15 = param_6[1];
    iVar16 = param_6[2];
    iVar17 = param_6[3];
    if ((int)param_5 < 1) goto LAB_140a334af;
  }
  else {
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    uVar5 = 0;
    uVar8 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      pfVar2 = (float *)(param_2 + (ulonglong)uVar5);
      fVar10 = fVar10 + *pfVar2 * *pfVar1;
      fVar11 = fVar11 + pfVar2[1] * pfVar1[1];
      fVar12 = fVar12 + pfVar2[2] * pfVar1[2];
      fVar13 = fVar13 + pfVar2[3] * pfVar1[3];
      uVar8 = uVar8 + 4;
      uVar5 = uVar5 + 0x10;
    } while (uVar8 < (uVar3 & 0xfffffffc));
    iVar14 = *param_6;
    iVar15 = param_6[1];
    iVar16 = param_6[2];
    iVar17 = param_6[3];
    if ((int)param_5 <= (int)uVar8) goto LAB_140a334af;
  }
  iVar7 = (int)uVar8;
  auVar18._4_4_ = iVar7;
  auVar18._0_4_ = iVar7;
  auVar18._8_4_ = iVar7;
  auVar18._12_4_ = iVar7;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar9._0_4_ = -(uint)(auVar18._0_4_ < (int)param_5);
  auVar9._4_4_ = -(uint)(auVar18._4_4_ < (int)param_5);
  auVar9._8_4_ = -(uint)(auVar18._8_4_ < (int)param_5);
  auVar9._12_4_ = -(uint)(auVar18._12_4_ < (int)param_5);
  lVar6 = (longlong)(iVar7 << 2);
  uVar3 = movmskps(param_5,auVar9);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + lVar6);
    in_XMM4 = *(undefined1 (*) [16])(param_2 + lVar6);
  }
  else {
    puVar4 = (uint *)(param_1 + lVar6);
    if ((uVar3 & 1) != 0) {
      auVar18 = ZEXT416(*puVar4);
    }
    if ((uVar3 & 2) != 0) {
      auVar18 = insertps(auVar18,puVar4[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar18 = insertps(auVar18,puVar4[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar18 = insertps(auVar18,puVar4[3],0x30);
    }
    if ((uVar3 & 1) != 0) {
      in_XMM4 = ZEXT416(*(uint *)(param_2 + lVar6));
    }
    if ((uVar3 & 2) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(param_2 + lVar6 + 4),0x10);
    }
    if ((uVar3 & 4) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(param_2 + lVar6 + 8),0x20);
    }
    if ((uVar3 & 8) != 0) {
      in_XMM4 = insertps(in_XMM4,*(undefined4 *)(param_2 + lVar6 + 0xc),0x30);
    }
  }
  auVar19._0_4_ = auVar18._0_4_ * in_XMM4._0_4_;
  auVar19._4_4_ = auVar18._4_4_ * in_XMM4._4_4_;
  auVar19._8_4_ = auVar18._8_4_ * in_XMM4._8_4_;
  auVar19._12_4_ = auVar18._12_4_ * in_XMM4._12_4_;
  auVar18 = blendvps(___xmm_80000000800000008000000080000000,auVar19,auVar9);
  fVar10 = fVar10 + auVar18._0_4_;
  fVar11 = fVar11 + auVar18._4_4_;
  fVar12 = fVar12 + auVar18._8_4_;
  fVar13 = fVar13 + auVar18._12_4_;
LAB_140a334af:
  *(float *)(param_3 + (longlong)param_4 * 4) =
       (float)(~-(uint)(iVar14 == 0) & (uint)fVar10) + (float)(~-(uint)(iVar15 == 0) & (uint)fVar11)
       + (float)(~-(uint)(iVar16 == 0) & (uint)fVar12) +
         (float)(~-(uint)(iVar17 == 0) & (uint)fVar13) + *(float *)(param_3 + (longlong)param_4 * 4)
  ;
  return;
}

// ArrayAPFLongDelayProcess___un_3C_Cunf_3E_un_3C_Cunf_3E_Cuniun_3C_unf_3E_un_3C_unf_3E_Cunf_sse4 @ 140a33830

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAPFLongDelayProcess___un_3C_Cunf_3E_un_3C_Cunf_3E_Cuniun_3C_unf_3E_un_3C_unf_3E_Cunf_sse4
               (longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
               float param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  uint unaff_ESI;
  uint uVar19;
  ulonglong uVar20;
  byte bVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar19 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar19 = param_3;
  }
  if ((int)(uVar19 & 0xfffffffc) < 1) {
    uVar16 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    fVar25 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)param_6);
    fVar27 = (float)(_UNK_150651574 ^ (uint)param_6);
    fVar28 = (float)(_UNK_150651578 ^ (uint)param_6);
    fVar29 = (float)(_UNK_15065157c ^ (uint)param_6);
    unaff_ESI = 0;
    uVar16 = 0;
    do {
      uVar20 = (ulonglong)unaff_ESI;
      pfVar1 = (float *)(param_2 + uVar20);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar1 = (float *)(param_1 + uVar20);
      fVar30 = *pfVar1 + param_6 * fVar7;
      fVar31 = pfVar1[1] + param_6 * fVar8;
      fVar32 = pfVar1[2] + param_6 * fVar9;
      fVar33 = pfVar1[3] + param_6 * fVar10;
      pfVar1 = (float *)(param_5 + uVar20);
      *pfVar1 = fVar30;
      pfVar1[1] = fVar31;
      pfVar1[2] = fVar32;
      pfVar1[3] = fVar33;
      pfVar1 = (float *)(param_4 + uVar20);
      *pfVar1 = fVar30 * fVar25 + fVar7;
      pfVar1[1] = fVar31 * fVar27 + fVar8;
      pfVar1[2] = fVar32 * fVar28 + fVar9;
      pfVar1[3] = fVar33 * fVar29 + fVar10;
      uVar16 = uVar16 + 4;
      unaff_ESI = unaff_ESI + 0x10;
    } while (uVar16 < (uVar19 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar16) {
      return;
    }
  }
  iVar15 = (int)uVar16;
  auVar23._4_4_ = iVar15;
  auVar23._0_4_ = iVar15;
  auVar23._8_4_ = iVar15;
  auVar23._12_4_ = iVar15;
  auVar23 = auVar23 | ___xmm_00000003000000020000000100000000;
  auVar26._0_4_ = -(uint)(auVar23._0_4_ < (int)param_3);
  auVar26._4_4_ = -(uint)(auVar23._4_4_ < (int)param_3);
  auVar26._8_4_ = -(uint)(auVar23._8_4_ < (int)param_3);
  auVar26._12_4_ = -(uint)(auVar23._12_4_ < (int)param_3);
  lVar17 = (longlong)(iVar15 << 2);
  pfVar1 = (float *)(param_2 + lVar17);
  uVar19 = movmskps(unaff_ESI,auVar26);
  bVar21 = (char)((byte)uVar19 << 4) >> 4;
  bVar18 = (byte)uVar19 & 9;
  if (bVar18 == 9) {
    auVar23 = *(undefined1 (*) [16])(param_2 + lVar17);
    auVar26 = *(undefined1 (*) [16])(param_1 + lVar17);
  }
  else {
    if ((uVar19 & 1) != 0) {
      auVar23 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar19 & 2) != 0) {
      auVar23 = insertps(auVar23,pfVar1[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar23 = insertps(auVar23,pfVar1[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      auVar23 = insertps(auVar23,pfVar1[3],0x30);
    }
    if ((uVar19 & 1) != 0) {
      auVar26 = ZEXT416(*(uint *)(param_1 + lVar17));
    }
    if ((uVar19 & 2) != 0) {
      auVar26 = insertps(auVar26,*(undefined4 *)(param_1 + lVar17 + 4),0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar26 = insertps(auVar26,*(undefined4 *)(param_1 + lVar17 + 8),0x20);
    }
    if ((uVar19 & 8) != 0) {
      auVar26 = insertps(auVar26,*(undefined4 *)(param_1 + lVar17 + 0xc),0x30);
    }
  }
  auVar24._0_4_ = auVar23._0_4_ * param_6 + auVar26._0_4_;
  auVar24._4_4_ = auVar23._4_4_ * param_6 + auVar26._4_4_;
  auVar24._8_4_ = auVar23._8_4_ * param_6 + auVar26._8_4_;
  auVar24._12_4_ = auVar23._12_4_ * param_6 + auVar26._12_4_;
  if ((bVar21 & 1) != 0) {
    *(float *)(param_5 + lVar17) = auVar24._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar3 = extractps(auVar24,1);
    *(undefined8 *)(param_5 + 4 + lVar17) = uVar3;
  }
  if ((bVar21 & 4) != 0) {
    uVar3 = extractps(auVar24,2);
    *(undefined8 *)(param_5 + 8 + lVar17) = uVar3;
  }
  if ((char)bVar21 < '\0') {
    uVar3 = extractps(auVar24,3);
    *(undefined8 *)(param_5 + 0xc + lVar17) = uVar3;
  }
  uVar14 = (uint)param_6 ^ _UNK_15065157c;
  uVar13 = (uint)param_6 ^ _UNK_150651578;
  uVar12 = (uint)param_6 ^ _UNK_150651574;
  uVar11 = (uint)param_6 ^ __xmm_80000000800000008000000080000000;
  if (bVar18 == 9) {
    pfVar2 = (float *)(param_5 + lVar17);
    fVar25 = (float)uVar11 * *pfVar2 + *pfVar1;
    fVar27 = (float)uVar12 * pfVar2[1] + pfVar1[1];
    fVar28 = (float)uVar13 * pfVar2[2] + pfVar1[2];
    fVar29 = (float)uVar14 * pfVar2[3] + pfVar1[3];
  }
  else {
    puVar22 = (uint *)(param_5 + lVar17);
    if ((uVar19 & 1) != 0) {
      auVar24 = ZEXT416(*puVar22);
    }
    if ((uVar19 & 2) != 0) {
      auVar24 = insertps(auVar24,puVar22[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar24 = insertps(auVar24,puVar22[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      auVar24 = insertps(auVar24,puVar22[3],0x30);
    }
    if ((uVar19 & 1) != 0) {
      auVar26 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar19 & 2) != 0) {
      auVar26 = insertps(auVar26,pfVar1[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar26 = insertps(auVar26,pfVar1[2],0x20);
    }
    if ((uVar19 & 8) == 0) {
      fVar25 = (float)uVar11 * (float)auVar24._0_4_ + auVar26._0_4_;
      fVar27 = (float)uVar12 * (float)auVar24._4_4_ + auVar26._4_4_;
      fVar28 = (float)uVar13 * (float)auVar24._8_4_ + auVar26._8_4_;
      fVar29 = (float)uVar14 * (float)auVar24._12_4_ + auVar26._12_4_;
    }
    else {
      auVar23 = insertps(auVar26,pfVar1[3],0x30);
      fVar25 = (float)uVar11 * (float)auVar24._0_4_ + auVar23._0_4_;
      fVar27 = (float)uVar12 * (float)auVar24._4_4_ + auVar23._4_4_;
      fVar28 = (float)uVar13 * (float)auVar24._8_4_ + auVar23._8_4_;
      fVar29 = (float)uVar14 * (float)auVar24._12_4_ + auVar23._12_4_;
    }
  }
  if ((bVar21 & 1) != 0) {
    *(float *)(param_4 + lVar17) = fVar25;
  }
  if ((bVar21 & 2) != 0) {
    auVar4._4_4_ = fVar27;
    auVar4._0_4_ = fVar25;
    auVar4._8_4_ = fVar28;
    auVar4._12_4_ = fVar29;
    uVar3 = extractps(auVar4,1);
    *(undefined8 *)(param_4 + 4 + lVar17) = uVar3;
  }
  if ((bVar21 & 4) != 0) {
    auVar5._4_4_ = fVar27;
    auVar5._0_4_ = fVar25;
    auVar5._8_4_ = fVar28;
    auVar5._12_4_ = fVar29;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(param_4 + 8 + lVar17) = uVar3;
  }
  if ((char)bVar21 < '\0') {
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar25;
    auVar6._8_4_ = fVar28;
    auVar6._12_4_ = fVar29;
    uVar3 = extractps(auVar6,3);
    *(undefined8 *)(param_4 + 0xc + lVar17) = uVar3;
  }
  return;
}

// ArrayLerpFractionalDelay___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cuni_3E_Cuniun_3C_unf_3E_Cunf_sse4 @ 140a33bc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpFractionalDelay___un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cunf_3E_un_3C_Cuni_3E_Cuniun_3C_unf_3E_Cunf_sse4
               (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               longlong param_6,undefined4 param_7)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint in_R11D;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 in_XMM5 [16];
  undefined1 auVar29 [16];
  
  fVar21 = _UNK_15076b1fc;
  fVar20 = _UNK_15076b1f8;
  fVar19 = _UNK_15076b1f4;
  fVar16 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar10 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar10 = param_5;
  }
  uVar10 = uVar10 & 0xfffffffc;
  if ((int)uVar10 < 1) {
    uVar12 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar17._4_4_ = param_7;
    auVar17._0_4_ = param_7;
    auVar17._8_4_ = param_7;
    auVar17._12_4_ = param_7;
    uVar6 = 0;
    uVar12 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar25 = maxps(*(undefined1 (*) [16])(param_2 + uVar7),ZEXT816(0));
      auVar25 = minps(auVar25,auVar17);
      auVar29 = roundps(in_XMM5,auVar25,9);
      piVar1 = (int *)(param_4 + uVar7);
      lVar15 = (longlong)((*piVar1 - (int)auVar29._0_4_) * 4);
      lVar5 = (longlong)((piVar1[1] - (int)auVar29._4_4_) * 4);
      fVar24 = auVar25._0_4_ - auVar29._0_4_;
      fVar26 = auVar25._4_4_ - auVar29._4_4_;
      fVar27 = auVar25._8_4_ - auVar29._8_4_;
      fVar28 = auVar25._12_4_ - auVar29._12_4_;
      lVar14 = (longlong)((piVar1[2] - (int)auVar29._8_4_) * 4);
      lVar13 = (longlong)((piVar1[3] - (int)auVar29._12_4_) * 4);
      auVar25 = insertps(ZEXT416(*(uint *)(param_3 + 4 + lVar15)),
                         *(undefined4 *)(param_3 + 4 + lVar5),0x10);
      auVar29 = insertps(auVar25,*(undefined4 *)(param_3 + 4 + lVar14),0x20);
      auVar25 = insertps(ZEXT416(*(uint *)(param_3 + lVar15)),*(undefined4 *)(param_3 + lVar5),0x10)
      ;
      auVar29 = insertps(auVar29,*(undefined4 *)(param_3 + 4 + lVar13),0x30);
      auVar25 = insertps(auVar25,*(undefined4 *)(param_3 + lVar14),0x20);
      auVar25 = insertps(auVar25,*(undefined4 *)(param_3 + lVar13),0x30);
      in_XMM5._0_4_ = auVar25._0_4_ * fVar24 + auVar29._0_4_ * (fVar16 - fVar24);
      in_XMM5._4_4_ = auVar25._4_4_ * fVar26 + auVar29._4_4_ * (fVar19 - fVar26);
      in_XMM5._8_4_ = auVar25._8_4_ * fVar27 + auVar29._8_4_ * (fVar20 - fVar27);
      in_XMM5._12_4_ = auVar25._12_4_ * fVar28 + auVar29._12_4_ * (fVar21 - fVar28);
      *(undefined1 (*) [16])(param_6 + uVar7) = in_XMM5;
      uVar12 = uVar12 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar12 < uVar10);
    in_R11D = uVar10;
    if ((int)param_5 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar25._4_4_ = iVar11;
  auVar25._0_4_ = iVar11;
  auVar25._8_4_ = iVar11;
  auVar25._12_4_ = iVar11;
  auVar25 = auVar25 | ___xmm_00000003000000020000000100000000;
  auVar29._0_4_ = -(uint)(auVar25._0_4_ < (int)param_5);
  auVar29._4_4_ = -(uint)(auVar25._4_4_ < (int)param_5);
  auVar29._8_4_ = -(uint)(auVar25._8_4_ < (int)param_5);
  auVar29._12_4_ = -(uint)(auVar25._12_4_ < (int)param_5);
  lVar5 = (longlong)(iVar11 << 2);
  uVar10 = movmskps(in_R11D,auVar29);
  bVar4 = (byte)uVar10 & 9;
  if (bVar4 == 9) {
    auVar25 = *(undefined1 (*) [16])(param_2 + lVar5);
  }
  else {
    puVar8 = (uint *)(param_2 + lVar5);
    if ((uVar10 & 1) != 0) {
      auVar25 = ZEXT416(*puVar8);
    }
    if ((uVar10 & 2) != 0) {
      auVar25 = insertps(auVar25,puVar8[1],0x10);
    }
    if ((uVar10 & 4) != 0) {
      auVar25 = insertps(auVar25,puVar8[2],0x20);
    }
    if ((uVar10 & 8) != 0) {
      auVar25 = insertps(auVar25,puVar8[3],0x30);
    }
  }
  bVar9 = (char)((byte)uVar10 << 4) >> 4;
  auVar17 = maxps(auVar25,ZEXT816(0));
  auVar3._4_4_ = param_7;
  auVar3._0_4_ = param_7;
  auVar3._8_4_ = param_7;
  auVar3._12_4_ = param_7;
  auVar17 = minps(auVar17,auVar3);
  auVar22 = roundps(ZEXT816(0),auVar17,9);
  fVar24 = auVar22._0_4_;
  fVar16 = auVar17._0_4_ - fVar24;
  fVar26 = auVar22._4_4_;
  fVar19 = auVar17._4_4_ - fVar26;
  fVar27 = auVar22._8_4_;
  fVar20 = auVar17._8_4_ - fVar27;
  fVar28 = auVar22._12_4_;
  fVar21 = auVar17._12_4_ - fVar28;
  if (bVar4 == 9) {
    auVar22 = *(undefined1 (*) [16])(param_4 + lVar5);
  }
  else {
    puVar8 = (uint *)(param_4 + lVar5);
    if ((uVar10 & 1) != 0) {
      auVar22 = ZEXT416(*puVar8);
    }
    if ((uVar10 & 2) != 0) {
      auVar22._0_8_ = auVar22._0_8_ & 0xffffffff | (ulonglong)puVar8[1] << 0x20;
    }
    if ((uVar10 & 4) != 0) {
      auVar22._8_8_ = auVar22._8_8_ & 0xffffffff00000000 | (ulonglong)puVar8[2];
    }
    if ((uVar10 & 8) != 0) {
      auVar22._8_8_ = auVar22._8_8_ & 0xffffffff | (ulonglong)puVar8[3] << 0x20;
    }
  }
  auVar23._0_4_ = (auVar22._0_4_ - (int)fVar24) * 4;
  auVar23._4_4_ = (auVar22._4_4_ - (int)fVar26) * 4;
  auVar23._8_4_ = (auVar22._8_4_ - (int)fVar27) * 4;
  auVar23._12_4_ = (auVar22._12_4_ - (int)fVar28) * 4;
  auVar23 = auVar23 & auVar29;
  auVar29 = auVar29 & ___xmm_00000004000000040000000400000004;
  auVar17 = insertps(ZEXT416(*(uint *)((ulonglong)auVar29._0_4_ + param_3 + auVar23._0_4_)),
                     *(undefined4 *)((ulonglong)auVar29._4_4_ + param_3 + auVar23._4_4_),0x10);
  auVar17 = insertps(auVar17,*(undefined4 *)((ulonglong)auVar29._8_4_ + param_3 + auVar23._8_4_),
                     0x20);
  auVar17 = insertps(auVar17,*(undefined4 *)((ulonglong)auVar29._12_4_ + param_3 + auVar23._12_4_),
                     0x30);
  auVar25 = insertps(ZEXT416(*(uint *)(param_3 + auVar23._0_4_)),
                     *(undefined4 *)(param_3 + auVar23._4_4_),0x10);
  auVar25 = insertps(auVar25,*(undefined4 *)(param_3 + auVar23._8_4_),0x20);
  auVar25 = insertps(auVar25,*(undefined4 *)(param_3 + auVar23._12_4_),0x30);
  auVar18._0_4_ =
       fVar16 * auVar25._0_4_ + (___xmm_3f8000003f8000003f8000003f800000 - fVar16) * auVar17._0_4_;
  auVar18._4_4_ = fVar19 * auVar25._4_4_ + (_UNK_15076b1f4 - fVar19) * auVar17._4_4_;
  auVar18._8_4_ = fVar20 * auVar25._8_4_ + (_UNK_15076b1f8 - fVar20) * auVar17._8_4_;
  auVar18._12_4_ = fVar21 * auVar25._12_4_ + (_UNK_15076b1fc - fVar21) * auVar17._12_4_;
  if ((bVar9 & 1) != 0) {
    *(float *)(param_6 + lVar5) = auVar18._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar2 = extractps(auVar18,1);
    *(undefined8 *)(param_6 + 4 + lVar5) = uVar2;
  }
  if ((bVar9 & 4) != 0) {
    uVar2 = extractps(auVar18,2);
    *(undefined8 *)(param_6 + 8 + lVar5) = uVar2;
  }
  if ((char)bVar9 < '\0') {
    uVar2 = extractps(auVar18,3);
    *(undefined8 *)(param_6 + 0xc + lVar5) = uVar2;
  }
  return;
}

// ArraySum_sse4 @ 140a34090

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum_sse4(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  uVar3 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    if ((int)param_3 < 1) goto LAB_140a340d1;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1;
      fVar9 = fVar9 + pfVar1[1];
      fVar10 = fVar10 + pfVar1[2];
      fVar11 = fVar11 + pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar4) {
LAB_140a340d1:
      *param_2 = fVar8 + fVar9 + fVar10 + fVar11;
      return;
    }
  }
  iVar2 = (int)uVar4;
  auVar12._4_4_ = iVar2;
  auVar12._0_4_ = iVar2;
  auVar12._8_4_ = iVar2;
  auVar12._12_4_ = iVar2;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar12._0_4_ < (int)param_3);
  auVar7._4_4_ = -(uint)(auVar12._4_4_ < (int)param_3);
  auVar7._8_4_ = -(uint)(auVar12._8_4_ < (int)param_3);
  auVar7._12_4_ = -(uint)(auVar12._12_4_ < (int)param_3);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar12 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar12 = insertps(auVar12,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar12 = insertps(auVar12,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar12 = insertps(auVar12,puVar5[3],0x30);
    }
  }
  auVar12 = blendvps(___xmm_80000000800000008000000080000000,auVar12,auVar7);
  *param_2 = fVar8 + auVar12._0_4_ + fVar9 + auVar12._4_4_ +
             fVar10 + auVar12._8_4_ + fVar11 + auVar12._12_4_;
  return;
}

// ArraySum2_sse4 @ 140a34180

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySum2_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint in_R10D;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar11 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar13 = 0;
    do {
      uVar16 = (ulonglong)uVar18;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar16);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar16);
      *pfVar3 = *pfVar2 + *pfVar1;
      pfVar3[1] = fVar8 + fVar5;
      pfVar3[2] = fVar9 + fVar6;
      pfVar3[3] = fVar10 + fVar7;
      uVar13 = uVar13 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar13 < uVar11);
    in_R10D = uVar11;
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar19._4_4_ = iVar12;
  auVar19._0_4_ = iVar12;
  auVar19._8_4_ = iVar12;
  auVar19._12_4_ = iVar12;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_4);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_4);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_4);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_4);
  lVar14 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R10D,auVar21);
  bVar17 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar14);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar14);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar14);
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar21 = ZEXT416(*(uint *)(param_2 + lVar14));
    }
    if ((uVar11 & 2) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 0xc),0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ + auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ + auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ + auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ + auVar21._12_4_;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_3 + lVar14) = auVar20._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(param_3 + 4 + lVar14) = uVar4;
  }
  if ((bVar17 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(param_3 + 8 + lVar14) = uVar4;
  }
  if (-1 < (char)bVar17) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(param_3 + 0xc + lVar14) = uVar4;
  return;
}

// ArrayCumulativeSum_sse4 @ 140a34350

void ArrayCumulativeSum_sse4(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  if (0 < (int)param_3) {
    if (param_3 < 4) {
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
        lVar1 = lVar1 + 4;
      } while ((param_3 & 0x7ffffffc) != (uint)lVar1);
    }
    if ((param_3 & 3) != 0) {
      lVar2 = 0;
      do {
        fVar3 = fVar3 + *(float *)(param_1 + lVar1 * 4 + lVar2 * 4);
        *(float *)(param_2 + lVar1 * 4 + lVar2 * 4) = fVar3;
        lVar2 = lVar2 + 1;
      } while ((param_3 & 3) != (uint)lVar2);
    }
  }
  return;
}

// ArrayMean_sse4 @ 140a343f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMean_sse4(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  
  uVar3 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    if ((int)param_3 < 1) goto LAB_140a344a1;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1;
      fVar9 = fVar9 + pfVar1[1];
      fVar10 = fVar10 + pfVar1[2];
      fVar11 = fVar11 + pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar4) goto LAB_140a344a1;
  }
  iVar2 = (int)uVar4;
  auVar12._4_4_ = iVar2;
  auVar12._0_4_ = iVar2;
  auVar12._8_4_ = iVar2;
  auVar12._12_4_ = iVar2;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar12._0_4_ < (int)param_3);
  auVar7._4_4_ = -(uint)(auVar12._4_4_ < (int)param_3);
  auVar7._8_4_ = -(uint)(auVar12._8_4_ < (int)param_3);
  auVar7._12_4_ = -(uint)(auVar12._12_4_ < (int)param_3);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar12 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar12 = insertps(auVar12,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar12 = insertps(auVar12,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar12 = insertps(auVar12,puVar5[3],0x30);
    }
  }
  auVar12 = blendvps(___xmm_80000000800000008000000080000000,auVar12,auVar7);
  fVar8 = fVar8 + auVar12._0_4_;
  fVar9 = fVar9 + auVar12._4_4_;
  fVar10 = fVar10 + auVar12._8_4_;
  fVar11 = fVar11 + auVar12._12_4_;
LAB_140a344a1:
  *param_2 = (fVar8 + fVar9 + fVar10 + fVar11) / (float)(int)param_3;
  return;
}

// ArrayMeanSquared_sse4 @ 140a344e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanSquared_sse4(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar3 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    if ((int)param_3 < 1) goto LAB_140a34597;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1 * *pfVar1;
      fVar9 = fVar9 + pfVar1[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar1[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar1[3] * pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar4) goto LAB_140a34597;
  }
  iVar2 = (int)uVar4;
  auVar12._4_4_ = iVar2;
  auVar12._0_4_ = iVar2;
  auVar12._8_4_ = iVar2;
  auVar12._12_4_ = iVar2;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar12._0_4_ < (int)param_3);
  auVar7._4_4_ = -(uint)(auVar12._4_4_ < (int)param_3);
  auVar7._8_4_ = -(uint)(auVar12._8_4_ < (int)param_3);
  auVar7._12_4_ = -(uint)(auVar12._12_4_ < (int)param_3);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar12 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar12 = insertps(auVar12,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar12 = insertps(auVar12,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar12 = insertps(auVar12,puVar5[3],0x30);
    }
  }
  auVar13._0_4_ = auVar12._0_4_ * auVar12._0_4_;
  auVar13._4_4_ = auVar12._4_4_ * auVar12._4_4_;
  auVar13._8_4_ = auVar12._8_4_ * auVar12._8_4_;
  auVar13._12_4_ = auVar12._12_4_ * auVar12._12_4_;
  auVar12 = blendvps(___xmm_80000000800000008000000080000000,auVar13,auVar7);
  fVar8 = fVar8 + auVar12._0_4_;
  fVar9 = fVar9 + auVar12._4_4_;
  fVar10 = fVar10 + auVar12._8_4_;
  fVar11 = fVar11 + auVar12._12_4_;
LAB_140a34597:
  *param_2 = (fVar8 + fVar9 + fVar10 + fVar11) / (float)(int)param_3;
  return;
}

// ArrayMax_sse4 @ 140a345d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMax_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint *puVar6;
  ulonglong uVar7;
  byte bVar8;
  uint in_R10D;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar2 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar2 = param_4;
  }
  uVar2 = uVar2 & 0xfffffffc;
  if ((int)uVar2 < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar9 = 0;
    uVar4 = 0;
    do {
      uVar7 = (ulonglong)uVar9;
      auVar10 = maxps(*(undefined1 (*) [16])(param_1 + uVar7),
                      *(undefined1 (*) [16])(param_2 + uVar7));
      *(undefined1 (*) [16])(param_3 + uVar7) = auVar10;
      uVar4 = uVar4 + 4;
      uVar9 = uVar9 + 0x10;
    } while (uVar4 < uVar2);
    in_R10D = uVar2;
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar10._4_4_ = iVar3;
  auVar10._0_4_ = iVar3;
  auVar10._8_4_ = iVar3;
  auVar10._12_4_ = iVar3;
  auVar10 = auVar10 | ___xmm_00000003000000020000000100000000;
  auVar11._0_4_ = -(uint)(auVar10._0_4_ < (int)param_4);
  auVar11._4_4_ = -(uint)(auVar10._4_4_ < (int)param_4);
  auVar11._8_4_ = -(uint)(auVar10._8_4_ < (int)param_4);
  auVar11._12_4_ = -(uint)(auVar10._12_4_ < (int)param_4);
  lVar5 = (longlong)(iVar3 << 2);
  uVar2 = movmskps(in_R10D,auVar11);
  bVar8 = (char)((byte)uVar2 << 4) >> 4;
  if ((~(byte)uVar2 & 9) == 0) {
    auVar10 = *(undefined1 (*) [16])(param_1 + lVar5);
    auVar11 = *(undefined1 (*) [16])(param_2 + lVar5);
  }
  else {
    puVar6 = (uint *)(param_1 + lVar5);
    if ((uVar2 & 1) != 0) {
      auVar10 = ZEXT416(*puVar6);
    }
    if ((uVar2 & 2) != 0) {
      auVar10 = insertps(auVar10,puVar6[1],0x10);
    }
    if ((uVar2 & 4) != 0) {
      auVar10 = insertps(auVar10,puVar6[2],0x20);
    }
    if ((uVar2 & 8) != 0) {
      auVar10 = insertps(auVar10,puVar6[3],0x30);
    }
    if ((uVar2 & 1) != 0) {
      auVar11 = ZEXT416(*(uint *)(param_2 + lVar5));
    }
    if ((uVar2 & 2) != 0) {
      auVar11 = insertps(auVar11,*(undefined4 *)(param_2 + lVar5 + 4),0x10);
    }
    if ((uVar2 & 4) != 0) {
      auVar11 = insertps(auVar11,*(undefined4 *)(param_2 + lVar5 + 8),0x20);
    }
    if ((uVar2 & 8) != 0) {
      auVar11 = insertps(auVar11,*(undefined4 *)(param_2 + lVar5 + 0xc),0x30);
    }
  }
  auVar10 = maxps(auVar10,auVar11);
  if ((bVar8 & 1) != 0) {
    *(int *)(param_3 + lVar5) = auVar10._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar1 = extractps(auVar10,1);
    *(undefined8 *)(param_3 + 4 + lVar5) = uVar1;
  }
  if ((bVar8 & 4) != 0) {
    uVar1 = extractps(auVar10,2);
    *(undefined8 *)(param_3 + 8 + lVar5) = uVar1;
  }
  if (-1 < (char)bVar8) {
    return;
  }
  uVar1 = extractps(auVar10,3);
  *(undefined8 *)(param_3 + 0xc + lVar5) = uVar1;
  return;
}

// ArrayMaxAbsValue_sse4 @ 140a347a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ArrayMaxAbsValue_sse4(longlong param_1,uint param_2)

{
  undefined1 auVar1 [12];
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar3 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    auVar10 = ZEXT816(0);
    if ((int)param_2 < 1) goto LAB_140a34853;
  }
  else {
    auVar10 = ZEXT816(0);
    uVar6 = 0;
    in_XMM0._4_4_ = _UNK_15061cc74;
    in_XMM0._0_4_ = __xmm_7fffffff7fffffff7fffffff7fffffff;
    in_XMM0._8_4_ = _UNK_15061cc78;
    in_XMM0._12_4_ = _UNK_15061cc7c;
    uVar4 = 0;
    do {
      puVar5 = (uint *)(param_1 + (ulonglong)uVar6);
      auVar13._0_4_ = *puVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff;
      auVar13._4_4_ = puVar5[1] & _UNK_15061cc74;
      auVar13._8_4_ = puVar5[2] & _UNK_15061cc78;
      auVar13._12_4_ = puVar5[3] & _UNK_15061cc7c;
      auVar10 = maxps(auVar13,auVar10);
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    if ((int)param_2 <= (int)uVar4) goto LAB_140a34853;
  }
  iVar2 = (int)uVar4;
  auVar11._4_4_ = iVar2;
  auVar11._0_4_ = iVar2;
  auVar11._8_4_ = iVar2;
  auVar11._12_4_ = iVar2;
  auVar11 = auVar11 | ___xmm_00000003000000020000000100000000;
  in_XMM0._0_4_ = -(uint)(auVar11._0_4_ < (int)param_2);
  in_XMM0._4_4_ = -(uint)(auVar11._4_4_ < (int)param_2);
  in_XMM0._8_4_ = -(uint)(auVar11._8_4_ < (int)param_2);
  in_XMM0._12_4_ = -(uint)(auVar11._12_4_ < (int)param_2);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,in_XMM0);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar11 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar11 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar11 = insertps(auVar11,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar11 = insertps(auVar11,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar11 = insertps(auVar11,puVar5[3],0x30);
    }
  }
  auVar12._0_4_ = auVar11._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar12._4_4_ = auVar11._4_4_ & _UNK_15061cc74;
  auVar12._8_4_ = auVar11._8_4_ & _UNK_15061cc78;
  auVar12._12_4_ = auVar11._12_4_ & _UNK_15061cc7c;
  auVar13 = maxps(auVar12,auVar10);
  auVar10 = blendvps(auVar10,auVar13,in_XMM0);
LAB_140a34853:
  auVar1._4_8_ = in_XMM0._8_8_;
  auVar1._0_4_ = auVar10._4_4_;
  auVar8._0_8_ = auVar1._0_8_ << 0x20;
  auVar8._8_4_ = auVar10._8_4_;
  auVar8._12_4_ = auVar10._12_4_;
  auVar9._8_8_ = auVar10._8_8_;
  auVar9._0_8_ = auVar8._8_8_;
  auVar10 = maxps(auVar9,auVar10);
  uVar7 = auVar10._0_8_;
  if (auVar10._0_4_ <= auVar10._4_4_) {
    auVar10._0_4_ = auVar10._4_4_;
    uVar7 = auVar10._0_8_;
  }
  return uVar7;
}

// ArrayGetMagnitude_sse4 @ 140a34890

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float ArrayGetMagnitude_sse4(longlong param_1,uint param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar3 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    if ((int)param_2 < 1) goto LAB_140a348d3;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1 * *pfVar1;
      fVar9 = fVar9 + pfVar1[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar1[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar1[3] * pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    if ((int)param_2 <= (int)uVar4) {
LAB_140a348d3:
      return SQRT(fVar8 + fVar9 + fVar10 + fVar11);
    }
  }
  iVar2 = (int)uVar4;
  auVar12._4_4_ = iVar2;
  auVar12._0_4_ = iVar2;
  auVar12._8_4_ = iVar2;
  auVar12._12_4_ = iVar2;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar12._0_4_ < (int)param_2);
  auVar7._4_4_ = -(uint)(auVar12._4_4_ < (int)param_2);
  auVar7._8_4_ = -(uint)(auVar12._8_4_ < (int)param_2);
  auVar7._12_4_ = -(uint)(auVar12._12_4_ < (int)param_2);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar12 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar12 = insertps(auVar12,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar12 = insertps(auVar12,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar12 = insertps(auVar12,puVar5[3],0x30);
    }
  }
  auVar13._0_4_ = auVar12._0_4_ * auVar12._0_4_;
  auVar13._4_4_ = auVar12._4_4_ * auVar12._4_4_;
  auVar13._8_4_ = auVar12._8_4_ * auVar12._8_4_;
  auVar13._12_4_ = auVar12._12_4_ * auVar12._12_4_;
  auVar12 = blendvps(___xmm_80000000800000008000000080000000,auVar13,auVar7);
  return SQRT(fVar8 + auVar12._0_4_ + fVar9 + auVar12._4_4_ +
              fVar10 + auVar12._8_4_ + fVar11 + auVar12._12_4_);
}

// ArrayGetAverageValue_sse4 @ 140a34990

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetAverageValue_sse4(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uVar2 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  if ((int)(uVar2 & 0xfffffffc) < 1) {
    uVar3 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 < (uVar2 & 0xfffffffc));
    if ((int)param_2 <= (int)uVar3) {
      return;
    }
  }
  iVar1 = (int)uVar3;
  auVar6._4_4_ = iVar1;
  auVar6._0_4_ = iVar1;
  auVar6._8_4_ = iVar1;
  auVar6._12_4_ = iVar1;
  auVar6 = auVar6 | ___xmm_00000003000000020000000100000000;
  auVar5._0_4_ = -(uint)(auVar6._0_4_ < (int)param_2);
  auVar5._4_4_ = -(uint)(auVar6._4_4_ < (int)param_2);
  auVar5._8_4_ = -(uint)(auVar6._8_4_ < (int)param_2);
  auVar5._12_4_ = -(uint)(auVar6._12_4_ < (int)param_2);
  iVar1 = iVar1 << 2;
  uVar2 = movmskps(iVar1,auVar5);
  if ((~(byte)uVar2 & 9) == 0) {
    auVar6 = *(undefined1 (*) [16])(param_1 + iVar1);
  }
  else {
    puVar4 = (uint *)(param_1 + iVar1);
    if ((uVar2 & 1) != 0) {
      auVar6 = ZEXT416(*puVar4);
    }
    if ((uVar2 & 2) != 0) {
      auVar6 = insertps(auVar6,puVar4[1],0x10);
    }
    if ((uVar2 & 4) != 0) {
      auVar6 = insertps(auVar6,puVar4[2],0x20);
    }
    if ((uVar2 & 8) != 0) {
      auVar6 = insertps(auVar6,puVar4[3],0x30);
    }
  }
  blendvps(___xmm_80000000800000008000000080000000,auVar6,auVar5);
  return;
}

// ArrayGetAverageAbsValue_sse4 @ 140a34a80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetAverageAbsValue_sse4(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  uVar2 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  if ((int)(uVar2 & 0xfffffffc) < 1) {
    uVar3 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar3 = 0;
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 < (uVar2 & 0xfffffffc));
    if ((int)param_2 <= (int)uVar3) {
      return;
    }
  }
  iVar1 = (int)uVar3;
  auVar6._4_4_ = iVar1;
  auVar6._0_4_ = iVar1;
  auVar6._8_4_ = iVar1;
  auVar6._12_4_ = iVar1;
  auVar6 = auVar6 | ___xmm_00000003000000020000000100000000;
  auVar5._0_4_ = -(uint)(auVar6._0_4_ < (int)param_2);
  auVar5._4_4_ = -(uint)(auVar6._4_4_ < (int)param_2);
  auVar5._8_4_ = -(uint)(auVar6._8_4_ < (int)param_2);
  auVar5._12_4_ = -(uint)(auVar6._12_4_ < (int)param_2);
  iVar1 = iVar1 << 2;
  uVar2 = movmskps(iVar1,auVar5);
  if ((~(byte)uVar2 & 9) == 0) {
    auVar6 = *(undefined1 (*) [16])(param_1 + iVar1);
  }
  else {
    puVar4 = (uint *)(param_1 + iVar1);
    if ((uVar2 & 1) != 0) {
      auVar6 = ZEXT416(*puVar4);
    }
    if ((uVar2 & 2) != 0) {
      auVar6 = insertps(auVar6,puVar4[1],0x10);
    }
    if ((uVar2 & 4) != 0) {
      auVar6 = insertps(auVar6,puVar4[2],0x20);
    }
    if ((uVar2 & 8) != 0) {
      auVar6 = insertps(auVar6,puVar4[3],0x30);
    }
  }
  auVar7._0_4_ = auVar6._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar7._4_4_ = auVar6._4_4_ & _UNK_15061cc74;
  auVar7._8_4_ = auVar6._8_4_ & _UNK_15061cc78;
  auVar7._12_4_ = auVar6._12_4_ & _UNK_15061cc7c;
  blendvps(___xmm_80000000800000008000000080000000,auVar7,auVar5);
  return;
}

// ArrayMeanFilter_sse4 @ 140a34b70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMeanFilter_sse4
               (longlong param_1,int param_2,uint param_3,longlong param_4,float param_5,int param_6
               )

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int unaff_R15D;
  int iVar20;
  undefined1 auVar21 [16];
  uint uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  int iVar35;
  undefined1 auVar36 [16];
  int iVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  auVar33 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar6 = _UNK_150631e0c;
  uVar5 = _UNK_150631e08;
  uVar19 = __xmm_00000003000000020000000100000000._4_4_;
  uVar16 = (uint)__xmm_00000003000000020000000100000000;
  uVar13 = param_3 + 1;
  uVar14 = (ulonglong)uVar13;
  iVar8 = (uVar13 - param_2) + param_6;
  uVar22 = (iVar8 < (int)uVar13) * uVar13 | (uint)(iVar8 >= (int)uVar13) * iVar8;
  uVar9 = ~param_3;
  iVar8 = param_2 - param_3;
  if (param_6 <= iVar8) {
    fVar26 = param_5 / (float)param_6;
    uVar16 = uVar22 + 3;
    if (-1 < (int)uVar22) {
      uVar16 = uVar22;
    }
    uVar16 = uVar16 & 0xfffffffc;
    if ((int)uVar16 < 1) {
      uVar14 = 0;
      if ((int)uVar22 < 1) goto LAB_140a34ffc;
    }
    else {
      uVar19 = 0;
      uVar14 = 0;
      do {
        pfVar1 = (float *)(param_4 + (ulonglong)uVar19);
        *pfVar1 = fVar26;
        pfVar1[1] = fVar26;
        pfVar1[2] = fVar26;
        pfVar1[3] = fVar26;
        uVar14 = uVar14 + 4;
        uVar19 = uVar19 + 0x10;
      } while (uVar14 < uVar16);
      uVar13 = uVar16;
      if ((int)uVar22 <= (int)uVar14) goto LAB_140a34ffc;
    }
    uVar16 = (uint)uVar14;
    auVar33._0_4_ =
         -(uint)((int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)uVar22);
    auVar33._4_4_ =
         -(uint)((int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)uVar22);
    auVar33._8_4_ = -(uint)((int)(uVar16 | _UNK_150631e08) < (int)uVar22);
    auVar33._12_4_ = -(uint)((int)(uVar16 | _UNK_150631e0c) < (int)uVar22);
    lVar15 = (longlong)(int)(uVar16 << 2);
    uVar16 = movmskps(uVar13,auVar33);
    if ((uVar16 & 1) != 0) {
      *(float *)(param_4 + lVar15) = fVar26;
    }
    if ((uVar16 & 2) != 0) {
      *(float *)(param_4 + 4 + lVar15) = fVar26;
    }
    if ((uVar16 & 4) != 0) {
      *(float *)(param_4 + 8 + lVar15) = fVar26;
    }
    if ((char)((char)uVar16 << 4) >> 4 < '\0') {
      *(float *)(param_4 + 0xc + lVar15) = fVar26;
    }
    goto LAB_140a34ffc;
  }
  uVar4 = param_3 + 4;
  if (-1 < (int)uVar13) {
    uVar4 = uVar13;
  }
  if ((int)(uVar4 & 0xfffffffc) < 1) {
    uVar12 = 0;
    if (-1 < (int)param_3) goto LAB_140a34cde;
  }
  else {
    unaff_R15D = param_2 * 4 + param_3 * -4 + -4;
    uVar18 = 0;
    uVar12 = 0;
    do {
      iVar35 = (int)uVar12 + iVar8;
      auVar38._0_4_ = (float)(int)(iVar35 + uVar16);
      auVar38._4_4_ = (float)(int)(iVar35 + uVar19);
      auVar38._8_4_ = (float)(int)(iVar35 + uVar5);
      auVar38._12_4_ = (float)(int)(iVar35 + uVar6);
      auVar38 = maxps(auVar33,auVar38);
      auVar38 = divps(*(undefined1 (*) [16])(param_1 + (int)(unaff_R15D + uVar18)),auVar38);
      *(undefined1 (*) [16])(param_4 + (ulonglong)uVar18) = auVar38;
      uVar12 = uVar12 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar12 < (uVar4 & 0xfffffffc));
    if ((int)uVar12 <= (int)param_3) {
LAB_140a34cde:
      uVar16 = (uint)uVar12;
      lVar15 = (longlong)(int)((uVar16 + iVar8 + -1) * 4);
      auVar29._0_4_ =
           -(uint)((int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)uVar13);
      auVar29._4_4_ =
           -(uint)((int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)uVar13);
      auVar29._8_4_ = -(uint)((int)(uVar16 | _UNK_150631e08) < (int)uVar13);
      auVar29._12_4_ = -(uint)((int)(uVar16 | _UNK_150631e0c) < (int)uVar13);
      uVar19 = movmskps(unaff_R15D,auVar29);
      bVar11 = (char)((byte)uVar19 << 4) >> 4;
      if ((~(byte)uVar19 & 9) == 0) {
        auVar29 = *(undefined1 (*) [16])(param_1 + lVar15);
      }
      else {
        puVar10 = (uint *)(lVar15 + param_1);
        if ((uVar19 & 1) != 0) {
          auVar29 = ZEXT416(*puVar10);
        }
        if ((uVar19 & 2) != 0) {
          auVar29 = insertps(auVar29,puVar10[1],0x10);
        }
        if ((uVar19 & 4) != 0) {
          auVar29 = insertps(auVar29,puVar10[2],0x20);
        }
        if ((uVar19 & 8) != 0) {
          auVar29 = insertps(auVar29,puVar10[3],0x30);
        }
      }
      auVar27._0_4_ = (float)(int)((uVar16 | (uint)__xmm_00000003000000020000000100000000) + iVar8);
      auVar27._4_4_ = (float)(int)((uVar16 | __xmm_00000003000000020000000100000000._4_4_) + iVar8);
      auVar27._8_4_ = (float)(int)((uVar16 | _UNK_150631e08) + iVar8);
      auVar27._12_4_ = (float)(int)((uVar16 | _UNK_150631e0c) + iVar8);
      auVar33 = maxps(___xmm_3f8000003f8000003f8000003f800000,auVar27);
      auVar33 = divps(auVar29,auVar33);
      lVar15 = (longlong)(int)(uVar16 * 4);
      if ((bVar11 & 1) != 0) {
        *(int *)(param_4 + lVar15) = auVar33._0_4_;
      }
      if ((bVar11 & 2) != 0) {
        uVar3 = extractps(auVar33,1);
        *(undefined8 *)(param_4 + 4 + lVar15) = uVar3;
      }
      if ((bVar11 & 4) != 0) {
        uVar3 = extractps(auVar33,2);
        *(undefined8 *)(param_4 + 8 + lVar15) = uVar3;
      }
      if ((char)bVar11 < '\0') {
        uVar3 = extractps(auVar33,3);
        *(undefined8 *)(param_4 + 0xc + lVar15) = uVar3;
      }
    }
  }
  auVar28._0_4_ = (float)param_2;
  uVar19 = uVar22 - uVar13;
  uVar16 = uVar19 + 3;
  if (-1 < (int)uVar19) {
    uVar16 = uVar19;
  }
  iVar35 = ((uVar16 & 0xfffffffc) - uVar19) + uVar22;
  if ((int)uVar13 < iVar35) {
    auVar30._4_4_ = auVar28._0_4_;
    auVar30._0_4_ = auVar28._0_4_;
    auVar30._8_4_ = auVar28._0_4_;
    auVar30._12_4_ = auVar28._0_4_;
    uVar14 = (ulonglong)(int)uVar13;
    iVar20 = 0;
    do {
      pfVar1 = (float *)(param_1 + (param_2 * 4 + iVar20));
      pfVar2 = (float *)(param_1 + iVar20);
      auVar32._0_4_ = *pfVar1 - *pfVar2;
      auVar32._4_4_ = pfVar1[1] - pfVar2[1];
      auVar32._8_4_ = pfVar1[2] - pfVar2[2];
      auVar32._12_4_ = pfVar1[3] - pfVar2[3];
      auVar33 = divps(auVar32,auVar30);
      *(undefined1 (*) [16])(param_4 + (int)(param_3 * 4 + 4 + iVar20)) = auVar33;
      uVar14 = uVar14 + 4;
      iVar20 = iVar20 + 0x10;
    } while ((longlong)uVar14 < (longlong)iVar35);
  }
  iVar35 = (int)uVar14;
  if (iVar35 < (int)uVar22) {
    auVar31._0_4_ = iVar35 + (uint)__xmm_00000003000000020000000100000000;
    auVar31._4_4_ = iVar35 + __xmm_00000003000000020000000100000000._4_4_;
    auVar31._8_4_ = iVar35 + _UNK_150631e08;
    auVar31._12_4_ = iVar35 + _UNK_150631e0c;
    auVar25._0_4_ = -(uint)(auVar31._0_4_ < (int)uVar22);
    auVar25._4_4_ = -(uint)(auVar31._4_4_ < (int)uVar22);
    auVar25._8_4_ = -(uint)(auVar31._8_4_ < (int)uVar22);
    auVar25._12_4_ = -(uint)(auVar31._12_4_ < (int)uVar22);
    iVar8 = (iVar8 + -1 + iVar35) * 4;
    uVar16 = movmskps(iVar8,auVar25);
    bVar11 = (char)((byte)uVar16 << 4) >> 4;
    lVar15 = (longlong)(int)((iVar35 + uVar9) * 4);
    if ((~(byte)uVar16 & 9) == 0) {
      auVar25 = *(undefined1 (*) [16])(param_1 + iVar8);
      auVar31 = *(undefined1 (*) [16])(param_1 + lVar15);
    }
    else {
      puVar10 = (uint *)(iVar8 + param_1);
      if ((uVar16 & 1) != 0) {
        auVar25 = ZEXT416(*puVar10);
      }
      if ((uVar16 & 2) != 0) {
        auVar25 = insertps(auVar25,puVar10[1],0x10);
      }
      if ((uVar16 & 4) != 0) {
        auVar25 = insertps(auVar25,puVar10[2],0x20);
      }
      if ((uVar16 & 8) != 0) {
        auVar25 = insertps(auVar25,puVar10[3],0x30);
      }
      if ((uVar16 & 1) != 0) {
        auVar31 = ZEXT416(*(uint *)(lVar15 + param_1));
      }
      if ((uVar16 & 2) != 0) {
        auVar31 = insertps(auVar31,*(undefined4 *)(lVar15 + param_1 + 4),0x10);
      }
      if ((uVar16 & 4) != 0) {
        auVar31 = insertps(auVar31,*(undefined4 *)(lVar15 + param_1 + 8),0x20);
      }
      if ((uVar16 & 8) != 0) {
        auVar31 = insertps(auVar31,*(undefined4 *)(lVar15 + param_1 + 0xc),0x30);
      }
    }
    auVar23._0_4_ = auVar25._0_4_ - auVar31._0_4_;
    auVar23._4_4_ = auVar25._4_4_ - auVar31._4_4_;
    auVar23._8_4_ = auVar25._8_4_ - auVar31._8_4_;
    auVar23._12_4_ = auVar25._12_4_ - auVar31._12_4_;
    auVar28._4_4_ = auVar28._0_4_;
    auVar28._8_4_ = auVar28._0_4_;
    auVar28._12_4_ = auVar28._0_4_;
    auVar33 = divps(auVar23,auVar28);
    lVar15 = (longlong)(iVar35 * 4);
    if ((bVar11 & 1) != 0) {
      *(int *)(param_4 + lVar15) = auVar33._0_4_;
    }
    if ((bVar11 & 2) != 0) {
      uVar3 = extractps(auVar33,1);
      *(undefined8 *)(param_4 + 4 + lVar15) = uVar3;
    }
    if ((bVar11 & 4) != 0) {
      uVar3 = extractps(auVar33,2);
      *(undefined8 *)(param_4 + 8 + lVar15) = uVar3;
    }
    if ((char)bVar11 < '\0') {
      uVar3 = extractps(auVar33,3);
      *(undefined8 *)(param_4 + 0xc + lVar15) = uVar3;
    }
  }
LAB_140a34ffc:
  iVar7 = _UNK_150d5a8ec;
  iVar20 = _UNK_150d5a8e8;
  iVar35 = _UNK_150d5a8e4;
  iVar8 = ___xmm_fffffffdfffffffeffffffff00000000;
  uVar19 = param_6 - uVar22;
  uVar16 = uVar19 + 3;
  if (-1 < (int)uVar19) {
    uVar16 = uVar19;
  }
  uVar19 = ((uVar16 & 0xfffffffc) - uVar19) + param_6;
  uVar16 = param_3;
  if ((int)uVar22 < (int)uVar19) {
    lVar15 = (longlong)(int)uVar22;
    iVar17 = uVar22 << 2;
    do {
      iVar37 = (param_6 + param_3) - (int)lVar15;
      pfVar1 = (float *)(param_1 + (int)(uVar9 * 4 + iVar17));
      auVar39._0_4_ = param_5 - *pfVar1;
      auVar39._4_4_ = param_5 - pfVar1[1];
      auVar39._8_4_ = param_5 - pfVar1[2];
      auVar39._12_4_ = param_5 - pfVar1[3];
      auVar36._0_4_ = (float)(iVar37 + iVar8);
      auVar36._4_4_ = (float)(iVar37 + iVar35);
      auVar36._8_4_ = (float)(iVar37 + iVar20);
      auVar36._12_4_ = (float)(iVar37 + iVar7);
      auVar33 = divps(auVar39,auVar36);
      *(undefined1 (*) [16])(param_4 + iVar17) = auVar33;
      lVar15 = lVar15 + 4;
      iVar17 = iVar17 + 0x10;
    } while (lVar15 < (int)uVar19);
    uVar22 = (uint)lVar15;
    uVar16 = uVar19;
  }
  if ((int)uVar22 < param_6) {
    lVar15 = (longlong)(int)((uVar9 + uVar22) * 4);
    auVar34._0_4_ = -(uint)((int)(uVar22 + (uint)__xmm_00000003000000020000000100000000) < param_6);
    auVar34._4_4_ = -(uint)((int)(uVar22 + __xmm_00000003000000020000000100000000._4_4_) < param_6);
    auVar34._8_4_ = -(uint)((int)(uVar22 + _UNK_150631e08) < param_6);
    auVar34._12_4_ = -(uint)((int)(uVar22 + _UNK_150631e0c) < param_6);
    uVar16 = movmskps(uVar16,auVar34);
    bVar11 = (char)((byte)uVar16 << 4) >> 4;
    if ((~(byte)uVar16 & 9) == 0) {
      auVar34 = *(undefined1 (*) [16])(param_1 + lVar15);
    }
    else {
      puVar10 = (uint *)(param_1 + lVar15);
      if ((uVar16 & 1) != 0) {
        auVar34 = ZEXT416(*puVar10);
      }
      if ((uVar16 & 2) != 0) {
        auVar34 = insertps(auVar34,puVar10[1],0x10);
      }
      if ((uVar16 & 4) != 0) {
        auVar34 = insertps(auVar34,puVar10[2],0x20);
      }
      if ((uVar16 & 8) != 0) {
        auVar34 = insertps(auVar34,puVar10[3],0x30);
      }
    }
    auVar21._0_4_ = param_5 - auVar34._0_4_;
    auVar21._4_4_ = param_5 - auVar34._4_4_;
    auVar21._8_4_ = param_5 - auVar34._8_4_;
    auVar21._12_4_ = param_5 - auVar34._12_4_;
    param_6 = param_6 + param_3;
    auVar24._0_4_ = (float)(int)(param_6 - (uVar22 + (uint)__xmm_00000003000000020000000100000000));
    auVar24._4_4_ = (float)(int)(param_6 - (uVar22 + __xmm_00000003000000020000000100000000._4_4_));
    auVar24._8_4_ = (float)(int)(param_6 - (uVar22 + _UNK_150631e08));
    auVar24._12_4_ = (float)(int)(param_6 - (uVar22 + _UNK_150631e0c));
    auVar33 = divps(auVar21,auVar24);
    lVar15 = (longlong)(int)(uVar22 * 4);
    if ((bVar11 & 1) != 0) {
      *(int *)(param_4 + lVar15) = auVar33._0_4_;
    }
    if ((bVar11 & 2) != 0) {
      uVar3 = extractps(auVar33,1);
      *(undefined8 *)(param_4 + 4 + lVar15) = uVar3;
    }
    if ((bVar11 & 4) != 0) {
      uVar3 = extractps(auVar33,2);
      *(undefined8 *)(param_4 + 8 + lVar15) = uVar3;
    }
    if ((char)bVar11 < '\0') {
      uVar3 = extractps(auVar33,3);
      *(undefined8 *)(param_4 + 0xc + lVar15) = uVar3;
    }
  }
  return;
}

// ArrayGetEuclideanNorm_sse4 @ 140a352e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayGetEuclideanNorm_sse4(longlong param_1,float *param_2,uint param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar3 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar3 = param_3;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar4 = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    if ((int)param_3 < 1) goto LAB_140a35397;
  }
  else {
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    uVar6 = 0;
    uVar4 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar6);
      fVar8 = fVar8 + *pfVar1 * *pfVar1;
      fVar9 = fVar9 + pfVar1[1] * pfVar1[1];
      fVar10 = fVar10 + pfVar1[2] * pfVar1[2];
      fVar11 = fVar11 + pfVar1[3] * pfVar1[3];
      uVar4 = uVar4 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar4 < (uVar3 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar4) goto LAB_140a35397;
  }
  iVar2 = (int)uVar4;
  auVar12._4_4_ = iVar2;
  auVar12._0_4_ = iVar2;
  auVar12._8_4_ = iVar2;
  auVar12._12_4_ = iVar2;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar7._0_4_ = -(uint)(auVar12._0_4_ < (int)param_3);
  auVar7._4_4_ = -(uint)(auVar12._4_4_ < (int)param_3);
  auVar7._8_4_ = -(uint)(auVar12._8_4_ < (int)param_3);
  auVar7._12_4_ = -(uint)(auVar12._12_4_ < (int)param_3);
  iVar2 = iVar2 << 2;
  uVar3 = movmskps(iVar2,auVar7);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + iVar2);
  }
  else {
    puVar5 = (uint *)(param_1 + iVar2);
    if ((uVar3 & 1) != 0) {
      auVar12 = ZEXT416(*puVar5);
    }
    if ((uVar3 & 2) != 0) {
      auVar12 = insertps(auVar12,puVar5[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar12 = insertps(auVar12,puVar5[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar12 = insertps(auVar12,puVar5[3],0x30);
    }
  }
  auVar13._0_4_ = auVar12._0_4_ * auVar12._0_4_;
  auVar13._4_4_ = auVar12._4_4_ * auVar12._4_4_;
  auVar13._8_4_ = auVar12._8_4_ * auVar12._8_4_;
  auVar13._12_4_ = auVar12._12_4_ * auVar12._12_4_;
  auVar12 = blendvps(___xmm_80000000800000008000000080000000,auVar13,auVar7);
  fVar8 = fVar8 + auVar12._0_4_;
  fVar9 = fVar9 + auVar12._4_4_;
  fVar10 = fVar10 + auVar12._8_4_;
  fVar11 = fVar11 + auVar12._12_4_;
LAB_140a35397:
  *param_2 = SQRT(fVar8 + fVar9 + fVar10 + fVar11);
  return;
}

// ArrayAbs_sse4 @ 140a353d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAbs_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint *puVar13;
  byte bVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  uVar8 = _UNK_15061cc7c;
  uVar7 = _UNK_15061cc78;
  uVar6 = _UNK_15061cc74;
  uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar9 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar9 = param_3;
  }
  uVar9 = uVar9 & 0xfffffffc;
  if ((int)uVar9 < 1) {
    uVar11 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar11 = 0;
    do {
      puVar13 = (uint *)(param_1 + (ulonglong)uVar16);
      uVar3 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      puVar1 = (uint *)(param_2 + (ulonglong)uVar16);
      *puVar1 = *puVar13 & uVar15;
      puVar1[1] = uVar3 & uVar6;
      puVar1[2] = uVar4 & uVar7;
      puVar1[3] = uVar5 & uVar8;
      uVar11 = uVar11 + 4;
      uVar16 = uVar16 + 0x10;
    } while (uVar11 < uVar9);
    param_4 = uVar9;
    if ((int)param_3 <= (int)uVar11) {
      return;
    }
  }
  iVar10 = (int)uVar11;
  auVar17._4_4_ = iVar10;
  auVar17._0_4_ = iVar10;
  auVar17._8_4_ = iVar10;
  auVar17._12_4_ = iVar10;
  auVar17 = auVar17 | ___xmm_00000003000000020000000100000000;
  auVar19._0_4_ = -(uint)(auVar17._0_4_ < (int)param_3);
  auVar19._4_4_ = -(uint)(auVar17._4_4_ < (int)param_3);
  auVar19._8_4_ = -(uint)(auVar17._8_4_ < (int)param_3);
  auVar19._12_4_ = -(uint)(auVar17._12_4_ < (int)param_3);
  lVar12 = (longlong)(iVar10 << 2);
  uVar15 = movmskps(param_4,auVar19);
  bVar14 = (char)((byte)uVar15 << 4) >> 4;
  if ((~(byte)uVar15 & 9) == 0) {
    auVar17 = *(undefined1 (*) [16])(param_1 + lVar12);
  }
  else {
    puVar13 = (uint *)(param_1 + lVar12);
    if ((uVar15 & 1) != 0) {
      auVar17 = ZEXT416(*puVar13);
    }
    if ((uVar15 & 2) != 0) {
      auVar17 = insertps(auVar17,puVar13[1],0x10);
    }
    if ((uVar15 & 4) != 0) {
      auVar17 = insertps(auVar17,puVar13[2],0x20);
    }
    if ((uVar15 & 8) != 0) {
      auVar17 = insertps(auVar17,puVar13[3],0x30);
    }
  }
  auVar18._0_4_ = auVar17._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar18._4_4_ = auVar17._4_4_ & _UNK_15061cc74;
  auVar18._8_4_ = auVar17._8_4_ & _UNK_15061cc78;
  auVar18._12_4_ = auVar17._12_4_ & _UNK_15061cc7c;
  if ((bVar14 & 1) != 0) {
    *(uint *)(param_2 + lVar12) = auVar18._0_4_;
  }
  if ((bVar14 & 2) != 0) {
    uVar2 = extractps(auVar18,1);
    *(undefined8 *)(param_2 + 4 + lVar12) = uVar2;
  }
  if ((bVar14 & 4) != 0) {
    uVar2 = extractps(auVar18,2);
    *(undefined8 *)(param_2 + 8 + lVar12) = uVar2;
  }
  if (-1 < (char)bVar14) {
    return;
  }
  uVar2 = extractps(auVar18,3);
  *(undefined8 *)(param_2 + 0xc + lVar12) = uVar2;
  return;
}

// ArrayAbsInPlace_sse4 @ 140a35520

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAbsInPlace_sse4(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  uVar9 = _UNK_15061cc7c;
  uVar8 = _UNK_15061cc78;
  uVar7 = _UNK_15061cc74;
  uVar14 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar10 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar10 = param_2;
  }
  uVar10 = uVar10 & 0xfffffffc;
  if ((int)uVar10 < 1) {
    uVar12 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar12 = 0;
    do {
      puVar1 = (uint *)(param_1 + (ulonglong)uVar15);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = (uint *)(param_1 + (ulonglong)uVar15);
      *puVar2 = *puVar1 & uVar14;
      puVar2[1] = uVar4 & uVar7;
      puVar2[2] = uVar5 & uVar8;
      puVar2[3] = uVar6 & uVar9;
      uVar12 = uVar12 + 4;
      uVar15 = uVar15 + 0x10;
    } while (uVar12 < uVar10);
    param_3 = uVar10;
    if ((int)param_2 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar16._4_4_ = iVar11;
  auVar16._0_4_ = iVar11;
  auVar16._8_4_ = iVar11;
  auVar16._12_4_ = iVar11;
  auVar16 = auVar16 | ___xmm_00000003000000020000000100000000;
  auVar18._0_4_ = -(uint)(auVar16._0_4_ < (int)param_2);
  auVar18._4_4_ = -(uint)(auVar16._4_4_ < (int)param_2);
  auVar18._8_4_ = -(uint)(auVar16._8_4_ < (int)param_2);
  auVar18._12_4_ = -(uint)(auVar16._12_4_ < (int)param_2);
  puVar1 = (uint *)(param_1 + (iVar11 << 2));
  uVar14 = movmskps(param_3,auVar18);
  bVar13 = (char)((byte)uVar14 << 4) >> 4;
  if ((~(byte)uVar14 & 9) == 0) {
    auVar16 = *(undefined1 (*) [16])(param_1 + (iVar11 << 2));
  }
  else {
    if ((uVar14 & 1) != 0) {
      auVar16 = ZEXT416(*puVar1);
    }
    if ((uVar14 & 2) != 0) {
      auVar16 = insertps(auVar16,puVar1[1],0x10);
    }
    if ((uVar14 & 4) != 0) {
      auVar16 = insertps(auVar16,puVar1[2],0x20);
    }
    if ((uVar14 & 8) != 0) {
      auVar16 = insertps(auVar16,puVar1[3],0x30);
    }
  }
  auVar17._0_4_ = auVar16._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar17._4_4_ = auVar16._4_4_ & _UNK_15061cc74;
  auVar17._8_4_ = auVar16._8_4_ & _UNK_15061cc78;
  auVar17._12_4_ = auVar16._12_4_ & _UNK_15061cc7c;
  if ((bVar13 & 1) != 0) {
    *puVar1 = auVar17._0_4_;
  }
  if ((bVar13 & 2) != 0) {
    uVar3 = extractps(auVar17,1);
    *(undefined8 *)(puVar1 + 1) = uVar3;
  }
  if ((bVar13 & 4) != 0) {
    uVar3 = extractps(auVar17,2);
    *(undefined8 *)(puVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar13) {
    return;
  }
  uVar3 = extractps(auVar17,3);
  *(undefined8 *)(puVar1 + 3) = uVar3;
  return;
}

// ArrayClampMinInPlace_sse4 @ 140a35660

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampMinInPlace_sse4(longlong param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar6 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  if ((int)(uVar6 & 0xfffffffc) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar9._4_4_ = param_2;
    auVar9._0_4_ = param_2;
    uVar7 = 0;
    uVar4 = 0;
    do {
      auVar9._8_4_ = param_2;
      auVar9._12_4_ = param_2;
      auVar11 = maxps(auVar9,*(undefined1 (*) [16])(param_1 + (ulonglong)uVar7));
      *(undefined1 (*) [16])(param_1 + (ulonglong)uVar7) = auVar11;
      uVar4 = uVar4 + 4;
      uVar7 = uVar7 + 0x10;
    } while (uVar4 < (uVar6 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar11._4_4_ = iVar3;
  auVar11._0_4_ = iVar3;
  auVar11._8_4_ = iVar3;
  auVar11._12_4_ = iVar3;
  auVar11 = auVar11 | ___xmm_00000003000000020000000100000000;
  auVar10._0_4_ = -(uint)(auVar11._0_4_ < (int)param_3);
  auVar10._4_4_ = -(uint)(auVar11._4_4_ < (int)param_3);
  auVar10._8_4_ = -(uint)(auVar11._8_4_ < (int)param_3);
  auVar10._12_4_ = -(uint)(auVar11._12_4_ < (int)param_3);
  auVar8._4_4_ = param_2;
  auVar8._0_4_ = param_2;
  auVar8._8_4_ = param_2;
  auVar8._12_4_ = param_2;
  puVar1 = (uint *)(param_1 + (iVar3 << 2));
  uVar6 = movmskps(param_3,auVar10);
  bVar5 = (char)((byte)uVar6 << 4) >> 4;
  if ((~(byte)uVar6 & 9) == 0) {
    auVar11 = *(undefined1 (*) [16])(param_1 + (iVar3 << 2));
  }
  else {
    if ((uVar6 & 1) != 0) {
      auVar11 = ZEXT416(*puVar1);
    }
    if ((uVar6 & 2) != 0) {
      auVar11 = insertps(auVar11,puVar1[1],0x10);
    }
    if ((uVar6 & 4) != 0) {
      auVar11 = insertps(auVar11,puVar1[2],0x20);
    }
    if ((uVar6 & 8) != 0) {
      auVar11 = insertps(auVar11,puVar1[3],0x30);
    }
  }
  auVar9 = maxps(auVar8,auVar11);
  if ((bVar5 & 1) != 0) {
    *puVar1 = auVar9._0_4_;
  }
  if ((bVar5 & 2) != 0) {
    uVar2 = extractps(auVar9,1);
    *(undefined8 *)(puVar1 + 1) = uVar2;
  }
  if ((bVar5 & 4) != 0) {
    uVar2 = extractps(auVar9,2);
    *(undefined8 *)(puVar1 + 2) = uVar2;
  }
  if (-1 < (char)bVar5) {
    return;
  }
  uVar2 = extractps(auVar9,3);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  return;
}

// ArrayClampMaxInPlace_sse4 @ 140a357a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampMaxInPlace_sse4(longlong param_1,undefined4 param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  uVar6 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar6 = param_3;
  }
  if ((int)(uVar6 & 0xfffffffc) < 1) {
    uVar4 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar9._4_4_ = param_2;
    auVar9._0_4_ = param_2;
    uVar7 = 0;
    uVar4 = 0;
    do {
      auVar9._8_4_ = param_2;
      auVar9._12_4_ = param_2;
      auVar11 = minps(auVar9,*(undefined1 (*) [16])(param_1 + (ulonglong)uVar7));
      *(undefined1 (*) [16])(param_1 + (ulonglong)uVar7) = auVar11;
      uVar4 = uVar4 + 4;
      uVar7 = uVar7 + 0x10;
    } while (uVar4 < (uVar6 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar4) {
      return;
    }
  }
  iVar3 = (int)uVar4;
  auVar11._4_4_ = iVar3;
  auVar11._0_4_ = iVar3;
  auVar11._8_4_ = iVar3;
  auVar11._12_4_ = iVar3;
  auVar11 = auVar11 | ___xmm_00000003000000020000000100000000;
  auVar10._0_4_ = -(uint)(auVar11._0_4_ < (int)param_3);
  auVar10._4_4_ = -(uint)(auVar11._4_4_ < (int)param_3);
  auVar10._8_4_ = -(uint)(auVar11._8_4_ < (int)param_3);
  auVar10._12_4_ = -(uint)(auVar11._12_4_ < (int)param_3);
  auVar8._4_4_ = param_2;
  auVar8._0_4_ = param_2;
  auVar8._8_4_ = param_2;
  auVar8._12_4_ = param_2;
  puVar1 = (uint *)(param_1 + (iVar3 << 2));
  uVar6 = movmskps(param_3,auVar10);
  bVar5 = (char)((byte)uVar6 << 4) >> 4;
  if ((~(byte)uVar6 & 9) == 0) {
    auVar11 = *(undefined1 (*) [16])(param_1 + (iVar3 << 2));
  }
  else {
    if ((uVar6 & 1) != 0) {
      auVar11 = ZEXT416(*puVar1);
    }
    if ((uVar6 & 2) != 0) {
      auVar11 = insertps(auVar11,puVar1[1],0x10);
    }
    if ((uVar6 & 4) != 0) {
      auVar11 = insertps(auVar11,puVar1[2],0x20);
    }
    if ((uVar6 & 8) != 0) {
      auVar11 = insertps(auVar11,puVar1[3],0x30);
    }
  }
  auVar9 = minps(auVar8,auVar11);
  if ((bVar5 & 1) != 0) {
    *puVar1 = auVar9._0_4_;
  }
  if ((bVar5 & 2) != 0) {
    uVar2 = extractps(auVar9,1);
    *(undefined8 *)(puVar1 + 1) = uVar2;
  }
  if ((bVar5 & 4) != 0) {
    uVar2 = extractps(auVar9,2);
    *(undefined8 *)(puVar1 + 2) = uVar2;
  }
  if (-1 < (char)bVar5) {
    return;
  }
  uVar2 = extractps(auVar9,3);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  return;
}

// ArrayClampInPlace_sse4 @ 140a358e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayClampInPlace_sse4(longlong param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  ulonglong uVar6;
  byte bVar7;
  uint in_R8D;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar8 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar8 = param_4;
  }
  if ((int)(uVar8 & 0xfffffffc) < 1) {
    uVar6 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar9._4_4_ = param_2;
    auVar9._0_4_ = param_2;
    auVar9._8_4_ = param_2;
    auVar9._12_4_ = param_2;
    auVar10._4_4_ = param_3;
    auVar10._0_4_ = param_3;
    auVar10._8_4_ = param_3;
    auVar10._12_4_ = param_3;
    in_R8D = 0;
    uVar6 = 0;
    do {
      auVar12 = maxps(*(undefined1 (*) [16])(param_1 + (ulonglong)in_R8D),auVar9);
      auVar12 = minps(auVar12,auVar10);
      *(undefined1 (*) [16])(param_1 + (ulonglong)in_R8D) = auVar12;
      uVar6 = uVar6 + 4;
      in_R8D = in_R8D + 0x10;
    } while (uVar6 < (uVar8 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar6) {
      return;
    }
  }
  iVar5 = (int)uVar6;
  auVar12._4_4_ = iVar5;
  auVar12._0_4_ = iVar5;
  auVar12._8_4_ = iVar5;
  auVar12._12_4_ = iVar5;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar11._0_4_ = -(uint)(auVar12._0_4_ < (int)param_4);
  auVar11._4_4_ = -(uint)(auVar12._4_4_ < (int)param_4);
  auVar11._8_4_ = -(uint)(auVar12._8_4_ < (int)param_4);
  auVar11._12_4_ = -(uint)(auVar12._12_4_ < (int)param_4);
  puVar1 = (uint *)(param_1 + (iVar5 << 2));
  uVar8 = movmskps(in_R8D,auVar11);
  bVar7 = (char)((byte)uVar8 << 4) >> 4;
  if ((~(byte)uVar8 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + (iVar5 << 2));
  }
  else {
    if ((uVar8 & 1) != 0) {
      auVar12 = ZEXT416(*puVar1);
    }
    if ((uVar8 & 2) != 0) {
      auVar12 = insertps(auVar12,puVar1[1],0x10);
    }
    if ((uVar8 & 4) != 0) {
      auVar12 = insertps(auVar12,puVar1[2],0x20);
    }
    if ((uVar8 & 8) != 0) {
      auVar12 = insertps(auVar12,puVar1[3],0x30);
    }
  }
  auVar3._4_4_ = param_2;
  auVar3._0_4_ = param_2;
  auVar3._8_4_ = param_2;
  auVar3._12_4_ = param_2;
  auVar9 = maxps(auVar12,auVar3);
  auVar4._4_4_ = param_3;
  auVar4._0_4_ = param_3;
  auVar4._8_4_ = param_3;
  auVar4._12_4_ = param_3;
  auVar9 = minps(auVar9,auVar4);
  if ((bVar7 & 1) != 0) {
    *puVar1 = auVar9._0_4_;
  }
  if ((bVar7 & 2) != 0) {
    uVar2 = extractps(auVar9,1);
    *(undefined8 *)(puVar1 + 1) = uVar2;
  }
  if ((bVar7 & 4) != 0) {
    uVar2 = extractps(auVar9,2);
    *(undefined8 *)(puVar1 + 2) = uVar2;
  }
  if (-1 < (char)bVar7) {
    return;
  }
  uVar2 = extractps(auVar9,3);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  return;
}

// ArrayMinMaxNormalize_sse4 @ 140a35a40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMinMaxNormalize_sse4(undefined4 *param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  undefined1 in_XMM0 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  
  uVar3 = *param_1;
  auVar23._0_8_ = CONCAT44(uVar3,uVar3);
  auVar23._8_4_ = uVar3;
  auVar23._12_4_ = uVar3;
  uVar16 = param_3 + 2;
  if (-1 < (int)(param_3 - 1)) {
    uVar16 = param_3 - 1;
  }
  uVar16 = uVar16 & 0xfffffffc | 1;
  uVar12 = 1;
  if ((int)uVar16 < 2) {
    auVar26._8_4_ = uVar3;
    auVar26._0_8_ = auVar23._0_8_;
    auVar26._12_4_ = uVar3;
    if ((int)param_3 < 2) goto LAB_140a35b2f;
  }
  else {
    uVar12 = 1;
    uVar17 = 4;
    auVar26._8_4_ = uVar3;
    auVar26._0_8_ = auVar23._0_8_;
    auVar26._12_4_ = uVar3;
    do {
      in_XMM0 = *(undefined1 (*) [16])((longlong)param_1 + (uVar17 & 0xffffffff));
      auVar26 = maxps(auVar26,in_XMM0);
      auVar23 = minps(auVar23,in_XMM0);
      uVar12 = uVar12 + 4;
      uVar17 = uVar17 + 0x10;
    } while (uVar12 < uVar16);
    if ((int)param_3 <= (int)uVar12) goto LAB_140a35b2f;
  }
  iVar11 = (int)uVar12;
  auVar33._0_4_ = iVar11 + (int)__xmm_00000003000000020000000100000000;
  auVar33._4_4_ = iVar11 + __xmm_00000003000000020000000100000000._4_4_;
  auVar33._8_4_ = iVar11 + _UNK_150631e08;
  auVar33._12_4_ = iVar11 + _UNK_150631e0c;
  in_XMM0._0_4_ = -(uint)(auVar33._0_4_ < (int)param_3);
  in_XMM0._4_4_ = -(uint)(auVar33._4_4_ < (int)param_3);
  in_XMM0._8_4_ = -(uint)(auVar33._8_4_ < (int)param_3);
  in_XMM0._12_4_ = -(uint)(auVar33._12_4_ < (int)param_3);
  uVar16 = movmskps(uVar16,in_XMM0);
  if ((~(byte)uVar16 & 9) == 0) {
    auVar33 = *(undefined1 (*) [16])((longlong)param_1 + (longlong)(iVar11 << 2));
  }
  else {
    puVar14 = (uint *)((longlong)(iVar11 << 2) + (longlong)param_1);
    if ((uVar16 & 1) != 0) {
      auVar33 = ZEXT416(*puVar14);
    }
    if ((uVar16 & 2) != 0) {
      auVar33 = insertps(auVar33,puVar14[1],0x10);
    }
    if ((uVar16 & 4) != 0) {
      auVar33 = insertps(auVar33,puVar14[2],0x20);
    }
    if ((uVar16 & 8) != 0) {
      auVar33 = insertps(auVar33,puVar14[3],0x30);
    }
  }
  auVar32 = maxps(auVar26,auVar33);
  auVar26 = blendvps(auVar26,auVar32,in_XMM0);
  auVar33 = minps(auVar23,auVar33);
  auVar23 = blendvps(auVar23,auVar33,in_XMM0);
LAB_140a35b2f:
  auVar5._4_8_ = in_XMM0._8_8_;
  auVar5._0_4_ = auVar26._4_4_;
  auVar32._0_8_ = auVar5._0_8_ << 0x20;
  auVar32._8_4_ = auVar26._8_4_;
  auVar32._12_4_ = auVar26._12_4_;
  auVar20._8_8_ = auVar26._8_8_;
  auVar20._0_8_ = auVar32._8_8_;
  auVar21 = maxps(auVar20,auVar26);
  fVar19 = auVar21._4_4_;
  auVar27._4_4_ = fVar19;
  auVar27._0_4_ = fVar19;
  auVar27._8_4_ = auVar21._12_4_;
  auVar27._12_4_ = auVar21._12_4_;
  if (auVar21._0_4_ <= fVar19) {
    auVar21._0_4_ = fVar19;
  }
  auVar6._4_8_ = auVar27._8_8_;
  auVar6._0_4_ = auVar23._4_4_;
  auVar28._0_8_ = auVar6._0_8_ << 0x20;
  auVar28._8_4_ = auVar23._8_4_;
  auVar28._12_4_ = auVar23._12_4_;
  auVar29._8_8_ = auVar23._8_8_;
  auVar29._0_8_ = auVar28._8_8_;
  auVar30 = minps(auVar29,auVar23);
  if (auVar30._4_4_ <= auVar30._0_4_) {
    auVar30._0_4_ = auVar30._4_4_;
  }
  fVar25 = auVar30._0_4_;
  fVar18 = auVar21._0_4_ - fVar25;
  fVar19 = __real_322bcc77;
  if (__real_322bcc77 <= fVar18) {
    fVar19 = fVar18;
  }
  fVar19 = __real_3f800000 / fVar19;
  uVar10 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar10 = param_3;
  }
  uVar10 = uVar10 & 0xfffffffc;
  if ((int)uVar10 < 1) {
    uVar12 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar12 = 0;
    do {
      pfVar1 = (float *)((longlong)param_1 + (ulonglong)uVar16);
      fVar18 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      pfVar2 = (float *)(param_2 + (ulonglong)uVar16);
      *pfVar2 = (*pfVar1 - fVar25) * fVar19;
      pfVar2[1] = (fVar18 - fVar25) * fVar19;
      pfVar2[2] = (fVar7 - fVar25) * fVar19;
      pfVar2[3] = (fVar8 - fVar25) * fVar19;
      uVar12 = uVar12 + 4;
      uVar16 = uVar16 + 0x10;
    } while (uVar12 < uVar10);
    uVar16 = uVar10;
    if ((int)param_3 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar24._4_4_ = iVar11;
  auVar24._0_4_ = iVar11;
  auVar24._8_4_ = iVar11;
  auVar24._12_4_ = iVar11;
  auVar9._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar9._0_4_ = (int)__xmm_00000003000000020000000100000000;
  auVar9._8_4_ = _UNK_150631e08;
  auVar9._12_4_ = _UNK_150631e0c;
  auVar24 = auVar24 | auVar9;
  auVar31._0_4_ = -(uint)(auVar24._0_4_ < (int)param_3);
  auVar31._4_4_ = -(uint)(auVar24._4_4_ < (int)param_3);
  auVar31._8_4_ = -(uint)(auVar24._8_4_ < (int)param_3);
  auVar31._12_4_ = -(uint)(auVar24._12_4_ < (int)param_3);
  lVar13 = (longlong)(iVar11 << 2);
  uVar16 = movmskps(uVar16,auVar31);
  bVar15 = (char)((byte)uVar16 << 4) >> 4;
  if ((~(byte)uVar16 & 9) == 0) {
    auVar24 = *(undefined1 (*) [16])((longlong)param_1 + lVar13);
  }
  else {
    puVar14 = (uint *)((longlong)param_1 + lVar13);
    if ((uVar16 & 1) != 0) {
      auVar24 = ZEXT416(*puVar14);
    }
    if ((uVar16 & 2) != 0) {
      auVar24 = insertps(auVar24,puVar14[1],0x10);
    }
    if ((uVar16 & 4) != 0) {
      auVar24 = insertps(auVar24,puVar14[2],0x20);
    }
    if ((uVar16 & 8) != 0) {
      auVar24 = insertps(auVar24,puVar14[3],0x30);
    }
  }
  auVar22._0_4_ = fVar19 * (auVar24._0_4_ - fVar25);
  auVar22._4_4_ = fVar19 * (auVar24._4_4_ - fVar25);
  auVar22._8_4_ = fVar19 * (auVar24._8_4_ - fVar25);
  auVar22._12_4_ = fVar19 * (auVar24._12_4_ - fVar25);
  if ((bVar15 & 1) != 0) {
    *(float *)(param_2 + lVar13) = auVar22._0_4_;
  }
  if ((bVar15 & 2) != 0) {
    uVar4 = extractps(auVar22,1);
    *(undefined8 *)(param_2 + 4 + lVar13) = uVar4;
  }
  if ((bVar15 & 4) != 0) {
    uVar4 = extractps(auVar22,2);
    *(undefined8 *)(param_2 + 8 + lVar13) = uVar4;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  uVar4 = extractps(auVar22,3);
  *(undefined8 *)(param_2 + 0xc + lVar13) = uVar4;
  return;
}

// ArrayMultiply_sse4 @ 140a35d10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiply_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint in_R10D;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar11 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar13 = 0;
    do {
      uVar16 = (ulonglong)uVar18;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar16);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar16);
      *pfVar3 = *pfVar2 * *pfVar1;
      pfVar3[1] = fVar8 * fVar5;
      pfVar3[2] = fVar9 * fVar6;
      pfVar3[3] = fVar10 * fVar7;
      uVar13 = uVar13 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar13 < uVar11);
    in_R10D = uVar11;
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar19._4_4_ = iVar12;
  auVar19._0_4_ = iVar12;
  auVar19._8_4_ = iVar12;
  auVar19._12_4_ = iVar12;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_4);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_4);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_4);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_4);
  lVar14 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R10D,auVar21);
  bVar17 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar14);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar14);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar14);
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar21 = ZEXT416(*(uint *)(param_2 + lVar14));
    }
    if ((uVar11 & 2) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 0xc),0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ * auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ * auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ * auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ * auVar21._12_4_;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_3 + lVar14) = auVar20._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(param_3 + 4 + lVar14) = uVar4;
  }
  if ((bVar17 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(param_3 + 8 + lVar14) = uVar4;
  }
  if (-1 < (char)bVar17) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(param_3 + 0xc + lVar14) = uVar4;
  return;
}

// ArrayMultiplyInPlace_sse4 @ 140a35ee0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyInPlace_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar12 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  uVar12 = uVar12 & 0xfffffffc;
  if ((int)uVar12 < 1) {
    uVar14 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    do {
      uVar18 = (ulonglong)uVar16;
      pfVar1 = (float *)(param_1 + uVar18);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar18);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_2 + uVar18);
      *pfVar3 = *pfVar2 * *pfVar1;
      pfVar3[1] = fVar8 * fVar5;
      pfVar3[2] = fVar9 * fVar6;
      pfVar3[3] = fVar10 * fVar7;
      uVar14 = uVar14 + 4;
      uVar16 = uVar16 + 0x10;
    } while (uVar14 < uVar12);
    param_4 = uVar12;
    if ((int)param_3 <= (int)uVar14) {
      return;
    }
  }
  iVar13 = (int)uVar14;
  auVar19._4_4_ = iVar13;
  auVar19._0_4_ = iVar13;
  auVar19._8_4_ = iVar13;
  auVar19._12_4_ = iVar13;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_3);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_3);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_3);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_3);
  lVar17 = (longlong)(iVar13 << 2);
  uVar12 = movmskps(param_4,auVar21);
  bVar11 = (char)((byte)uVar12 << 4) >> 4;
  pfVar1 = (float *)(param_2 + lVar17);
  if ((~(byte)uVar12 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar17);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar17);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar17);
    if ((uVar12 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar12 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar12 & 1) != 0) {
      auVar21 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar12 & 2) != 0) {
      auVar21 = insertps(auVar21,pfVar1[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar21 = insertps(auVar21,pfVar1[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar21 = insertps(auVar21,pfVar1[3],0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ * auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ * auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ * auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ * auVar21._12_4_;
  if ((bVar11 & 1) != 0) {
    *pfVar1 = auVar20._0_4_;
  }
  if ((bVar11 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar11 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar11) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArrayComplexMultiplyInPlace_sse4 @ 140a360b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyInPlace_sse4(longlong param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  fVar8 = _UNK_150d5662c;
  fVar7 = _UNK_150d56628;
  fVar6 = _UNK_150d56624;
  fVar5 = ___xmm_3f800000bf8000003f800000bf800000;
  uVar18 = param_3 & 0xfffffffc;
  if (0 < (int)uVar18) {
    uVar1 = uVar18 - 1;
    if (uVar1 == 3) {
      uVar20 = 0;
    }
    else {
      uVar22 = (uVar1 >> 2) + 1 & 0xfffffffe;
      uVar21 = 0;
      do {
        uVar20 = (ulonglong)uVar21;
        pfVar2 = (float *)(param_1 + uVar20);
        fVar9 = *pfVar2;
        fVar23 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar25 = pfVar2[3];
        pfVar2 = (float *)(param_2 + uVar20);
        fVar10 = *pfVar2;
        fVar11 = pfVar2[1];
        fVar12 = pfVar2[2];
        fVar13 = pfVar2[3];
        pfVar2 = (float *)(param_1 + 0x10 + uVar20);
        fVar14 = *pfVar2;
        fVar15 = pfVar2[1];
        fVar16 = pfVar2[2];
        fVar17 = pfVar2[3];
        pfVar2 = (float *)(param_2 + uVar20);
        *pfVar2 = fVar9 * fVar10 + fVar11 * fVar23 * fVar5;
        pfVar2[1] = fVar9 * fVar11 + fVar10 * fVar23 * fVar6;
        pfVar2[2] = fVar24 * fVar12 + fVar13 * fVar25 * fVar7;
        pfVar2[3] = fVar24 * fVar13 + fVar12 * fVar25 * fVar8;
        pfVar2 = (float *)(param_2 + 0x10 + uVar20);
        fVar9 = *pfVar2;
        fVar23 = pfVar2[1];
        fVar24 = pfVar2[2];
        fVar25 = pfVar2[3];
        pfVar2 = (float *)(param_2 + 0x10 + uVar20);
        *pfVar2 = fVar14 * fVar9 + fVar23 * fVar15 * fVar5;
        pfVar2[1] = fVar14 * fVar23 + fVar9 * fVar15 * fVar6;
        pfVar2[2] = fVar16 * fVar24 + fVar25 * fVar17 * fVar7;
        pfVar2[3] = fVar16 * fVar25 + fVar24 * fVar17 * fVar8;
        uVar21 = uVar21 + 0x20;
        uVar22 = uVar22 - 2;
      } while (uVar22 != 0);
      if ((uVar1 & 4) != 0) goto LAB_140a36180;
      uVar20 = (ulonglong)uVar21;
    }
    pfVar2 = (float *)(param_1 + uVar20);
    fVar5 = *pfVar2;
    fVar6 = pfVar2[2];
    pfVar3 = (float *)(param_2 + uVar20);
    fVar7 = pfVar3[1];
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    fVar23 = *pfVar3 * pfVar2[1] * _UNK_150d56624;
    fVar24 = fVar9 * pfVar2[3] * _UNK_150d56628;
    fVar25 = fVar8 * pfVar2[3] * _UNK_150d5662c;
    pfVar4 = (float *)(param_2 + uVar20);
    *pfVar4 = fVar5 * *pfVar3 + fVar7 * pfVar2[1] * ___xmm_3f800000bf8000003f800000bf800000;
    pfVar4[1] = fVar5 * fVar7 + fVar23;
    pfVar4[2] = fVar6 * fVar8 + fVar24;
    pfVar4[3] = fVar6 * fVar9 + fVar25;
  }
LAB_140a36180:
  if ((int)uVar18 < (int)param_3) {
    lVar19 = (longlong)(int)uVar18;
    do {
      fVar5 = *(float *)(param_1 + lVar19 * 4);
      fVar6 = *(float *)(param_1 + 4 + lVar19 * 4);
      fVar7 = *(float *)(param_2 + lVar19 * 4);
      fVar8 = *(float *)(param_2 + 4 + lVar19 * 4);
      *(float *)(param_2 + lVar19 * 4) = fVar5 * fVar7 - fVar6 * fVar8;
      *(float *)(param_2 + 4 + lVar19 * 4) = fVar5 * fVar8 + fVar7 * fVar6;
      lVar19 = lVar19 + 2;
    } while (lVar19 < (int)param_3);
  }
  return;
}

// ArrayComplexMultiplyAdd_sse4 @ 140a361e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexMultiplyAdd_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
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
  byte bVar15;
  int iVar16;
  ulonglong uVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  byte bVar22;
  uint uVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  undefined1 auVar25 [16];
  float fVar29;
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar29 = _UNK_150d5662c;
  fVar28 = _UNK_150d56628;
  fVar27 = _UNK_150d56624;
  fVar24 = ___xmm_3f800000bf8000003f800000bf800000;
  uVar20 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar20 = param_4;
  }
  if ((int)(uVar20 & 0xfffffffc) < 1) {
    uVar17 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar23 = 0;
    uVar17 = 0;
    do {
      uVar19 = (ulonglong)uVar23;
      pfVar1 = (float *)(param_1 + uVar19);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar1 = (float *)(param_2 + uVar19);
      fVar8 = *pfVar1;
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar1 = (float *)(param_3 + uVar19);
      fVar12 = pfVar1[1];
      fVar13 = pfVar1[2];
      fVar14 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar19);
      *pfVar2 = *pfVar1 + fVar4 * fVar8 + fVar9 * fVar5 * fVar24;
      pfVar2[1] = fVar12 + fVar4 * fVar9 + fVar8 * fVar5 * fVar27;
      pfVar2[2] = fVar13 + fVar6 * fVar10 + fVar11 * fVar7 * fVar28;
      pfVar2[3] = fVar14 + fVar6 * fVar11 + fVar10 * fVar7 * fVar29;
      uVar17 = uVar17 + 4;
      uVar23 = uVar23 + 0x10;
    } while (uVar17 < (uVar20 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar17) {
      return;
    }
  }
  iVar16 = (int)uVar17;
  auVar25._4_4_ = iVar16;
  auVar25._0_4_ = iVar16;
  auVar25._8_4_ = iVar16;
  auVar25._12_4_ = iVar16;
  auVar25 = auVar25 | ___xmm_00000003000000020000000100000000;
  auVar31._0_4_ = -(uint)(auVar25._0_4_ < (int)param_4);
  auVar31._4_4_ = -(uint)(auVar25._4_4_ < (int)param_4);
  auVar31._8_4_ = -(uint)(auVar25._8_4_ < (int)param_4);
  auVar31._12_4_ = -(uint)(auVar25._12_4_ < (int)param_4);
  lVar21 = (longlong)(iVar16 << 2);
  uVar20 = movmskps(param_4,auVar31);
  bVar22 = (byte)uVar20 & 9;
  if (bVar22 == 9) {
    auVar31 = *(undefined1 (*) [16])(param_1 + lVar21);
    auVar25 = *(undefined1 (*) [16])(param_2 + lVar21);
  }
  else {
    puVar18 = (uint *)(param_1 + lVar21);
    if ((uVar20 & 1) != 0) {
      auVar31 = ZEXT416(*puVar18);
    }
    if ((uVar20 & 2) != 0) {
      auVar31 = insertps(auVar31,puVar18[1],0x10);
    }
    if ((uVar20 & 4) != 0) {
      auVar31 = insertps(auVar31,puVar18[2],0x20);
    }
    if ((uVar20 & 8) != 0) {
      auVar31 = insertps(auVar31,puVar18[3],0x30);
    }
    if ((uVar20 & 1) != 0) {
      auVar25 = ZEXT416(*(uint *)(param_2 + lVar21));
    }
    if ((uVar20 & 2) != 0) {
      auVar25 = insertps(auVar25,*(undefined4 *)(param_2 + lVar21 + 4),0x10);
    }
    if ((uVar20 & 4) != 0) {
      auVar25 = insertps(auVar25,*(undefined4 *)(param_2 + lVar21 + 8),0x20);
    }
    if ((uVar20 & 8) != 0) {
      auVar25 = insertps(auVar25,*(undefined4 *)(param_2 + lVar21 + 0xc),0x30);
    }
  }
  bVar15 = (char)((byte)uVar20 << 4) >> 4;
  pfVar1 = (float *)(param_3 + lVar21);
  auVar30._4_4_ = auVar31._4_4_;
  auVar30._0_4_ = auVar30._4_4_;
  auVar30._12_4_ = auVar31._12_4_;
  auVar30._8_4_ = auVar30._12_4_;
  fVar24 = auVar25._4_4_ * auVar30._4_4_;
  fVar27 = auVar25._0_4_ * auVar30._4_4_;
  fVar28 = auVar25._12_4_ * auVar30._12_4_;
  fVar29 = auVar25._8_4_ * auVar30._12_4_;
  if (bVar22 == 9) {
    auVar30 = *(undefined1 (*) [16])(param_3 + lVar21);
  }
  else {
    if ((uVar20 & 1) != 0) {
      auVar30 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar20 & 2) != 0) {
      auVar30 = insertps(auVar30,pfVar1[1],0x10);
    }
    if ((uVar20 & 4) != 0) {
      auVar30 = insertps(auVar30,pfVar1[2],0x20);
    }
    if ((uVar20 & 8) != 0) {
      auVar30 = insertps(auVar30,pfVar1[3],0x30);
    }
  }
  auVar26._0_4_ =
       fVar24 * ___xmm_3f800000bf8000003f800000bf800000 + auVar31._0_4_ * auVar25._0_4_ +
       auVar30._0_4_;
  auVar26._4_4_ = fVar27 * _UNK_150d56624 + auVar31._0_4_ * auVar25._4_4_ + auVar30._4_4_;
  auVar26._8_4_ = fVar28 * _UNK_150d56628 + auVar31._8_4_ * auVar25._8_4_ + auVar30._8_4_;
  auVar26._12_4_ = fVar29 * _UNK_150d5662c + auVar31._8_4_ * auVar25._12_4_ + auVar30._12_4_;
  if ((bVar15 & 1) != 0) {
    *pfVar1 = auVar26._0_4_;
  }
  if ((bVar15 & 2) != 0) {
    uVar3 = extractps(auVar26,1);
    *(undefined8 *)(pfVar1 + 1) = uVar3;
  }
  if ((bVar15 & 4) != 0) {
    uVar3 = extractps(auVar26,2);
    *(undefined8 *)(pfVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  uVar3 = extractps(auVar26,3);
  *(undefined8 *)(pfVar1 + 3) = uVar3;
  return;
}

// ArrayMultiplyByConstant_sse4 @ 140a36450

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyByConstant_sse4(longlong param_1,float param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  
  uVar12 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar12 = param_4;
  }
  if ((int)(uVar12 & 0xfffffffc) < 1) {
    uVar8 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar8 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar15 = pfVar1[1];
      fVar16 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar2 = (float *)(param_3 + (ulonglong)uVar13);
      *pfVar2 = *pfVar1 * param_2;
      pfVar2[1] = fVar15 * param_2;
      pfVar2[2] = fVar16 * param_2;
      pfVar2[3] = fVar17 * param_2;
      uVar8 = uVar8 + 4;
      uVar13 = uVar13 + 0x10;
    } while (uVar8 < (uVar12 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar8) {
      return;
    }
  }
  iVar7 = (int)uVar8;
  auVar14._4_4_ = iVar7;
  auVar14._0_4_ = iVar7;
  auVar14._8_4_ = iVar7;
  auVar14._12_4_ = iVar7;
  auVar14 = auVar14 | ___xmm_00000003000000020000000100000000;
  auVar18._0_4_ = -(uint)(auVar14._0_4_ < (int)param_4);
  auVar18._4_4_ = -(uint)(auVar14._4_4_ < (int)param_4);
  auVar18._8_4_ = -(uint)(auVar14._8_4_ < (int)param_4);
  auVar18._12_4_ = -(uint)(auVar14._12_4_ < (int)param_4);
  lVar9 = (longlong)(iVar7 << 2);
  uVar12 = movmskps(param_4,auVar18);
  bVar11 = (char)((byte)uVar12 << 4) >> 4;
  if ((~(byte)uVar12 & 9) == 0) {
    auVar14 = *(undefined1 (*) [16])(param_1 + lVar9);
  }
  else {
    puVar10 = (uint *)(param_1 + lVar9);
    if ((uVar12 & 1) != 0) {
      auVar14 = ZEXT416(*puVar10);
    }
    if ((uVar12 & 2) != 0) {
      auVar14 = insertps(auVar14,puVar10[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar14 = insertps(auVar14,puVar10[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar14 = insertps(auVar14,puVar10[3],0x30);
    }
  }
  fVar15 = param_2 * auVar14._0_4_;
  fVar16 = param_2 * auVar14._4_4_;
  fVar17 = param_2 * auVar14._8_4_;
  param_2 = param_2 * auVar14._12_4_;
  if ((bVar11 & 1) != 0) {
    *(float *)(param_3 + lVar9) = fVar15;
  }
  if ((bVar11 & 2) != 0) {
    auVar6._4_4_ = fVar16;
    auVar6._0_4_ = fVar15;
    auVar6._8_4_ = fVar17;
    auVar6._12_4_ = param_2;
    uVar3 = extractps(auVar6,1);
    *(undefined8 *)(param_3 + 4 + lVar9) = uVar3;
  }
  if ((bVar11 & 4) != 0) {
    auVar5._4_4_ = fVar16;
    auVar5._0_4_ = fVar15;
    auVar5._8_4_ = fVar17;
    auVar5._12_4_ = param_2;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(param_3 + 8 + lVar9) = uVar3;
  }
  if (-1 < (char)bVar11) {
    return;
  }
  auVar4._4_4_ = fVar16;
  auVar4._0_4_ = fVar15;
  auVar4._8_4_ = fVar17;
  auVar4._12_4_ = param_2;
  uVar3 = extractps(auVar4,3);
  *(undefined8 *)(param_3 + 0xc + lVar9) = uVar3;
  return;
}

// ArrayMultiplyByConstantInPlace_sse4 @ 140a36590

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyByConstantInPlace_sse4(longlong param_1,uint param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  uint in_R8D;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar7 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar7 = param_2;
  }
  uVar7 = uVar7 & 0xfffffffc;
  if ((int)uVar7 < 1) {
    uVar9 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar11 = 0;
    uVar9 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar11);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar11);
      *pfVar2 = *pfVar1 * param_3;
      pfVar2[1] = fVar14 * param_3;
      pfVar2[2] = fVar15 * param_3;
      pfVar2[3] = fVar16 * param_3;
      uVar9 = uVar9 + 4;
      uVar11 = uVar11 + 0x10;
    } while (uVar9 < uVar7);
    in_R8D = uVar7;
    if ((int)param_2 <= (int)uVar9) {
      return;
    }
  }
  iVar8 = (int)uVar9;
  auVar12._4_4_ = iVar8;
  auVar12._0_4_ = iVar8;
  auVar12._8_4_ = iVar8;
  auVar12._12_4_ = iVar8;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar13._0_4_ = -(uint)(auVar12._0_4_ < (int)param_2);
  auVar13._4_4_ = -(uint)(auVar12._4_4_ < (int)param_2);
  auVar13._8_4_ = -(uint)(auVar12._8_4_ < (int)param_2);
  auVar13._12_4_ = -(uint)(auVar12._12_4_ < (int)param_2);
  pfVar1 = (float *)(param_1 + (iVar8 << 2));
  uVar7 = movmskps(in_R8D,auVar13);
  bVar10 = (char)((byte)uVar7 << 4) >> 4;
  if ((~(byte)uVar7 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + (iVar8 << 2));
  }
  else {
    if ((uVar7 & 1) != 0) {
      auVar12 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar7 & 2) != 0) {
      auVar12 = insertps(auVar12,pfVar1[1],0x10);
    }
    if ((uVar7 & 4) != 0) {
      auVar12 = insertps(auVar12,pfVar1[2],0x20);
    }
    if ((uVar7 & 8) != 0) {
      auVar12 = insertps(auVar12,pfVar1[3],0x30);
    }
  }
  fVar14 = param_3 * auVar12._0_4_;
  fVar15 = param_3 * auVar12._4_4_;
  fVar16 = param_3 * auVar12._8_4_;
  param_3 = param_3 * auVar12._12_4_;
  if ((bVar10 & 1) != 0) {
    *pfVar1 = fVar14;
  }
  if ((bVar10 & 2) != 0) {
    auVar6._4_4_ = fVar15;
    auVar6._0_4_ = fVar14;
    auVar6._8_4_ = fVar16;
    auVar6._12_4_ = param_3;
    uVar3 = extractps(auVar6,1);
    *(undefined8 *)(pfVar1 + 1) = uVar3;
  }
  if ((bVar10 & 4) != 0) {
    auVar5._4_4_ = fVar15;
    auVar5._0_4_ = fVar14;
    auVar5._8_4_ = fVar16;
    auVar5._12_4_ = param_3;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(pfVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar10) {
    return;
  }
  auVar4._4_4_ = fVar15;
  auVar4._0_4_ = fVar14;
  auVar4._8_4_ = fVar16;
  auVar4._12_4_ = param_3;
  uVar3 = extractps(auVar4,3);
  *(undefined8 *)(pfVar1 + 3) = uVar3;
  return;
}

// ArrayAddInPlace_sse4 @ 140a366d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAddInPlace_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar12 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  uVar12 = uVar12 & 0xfffffffc;
  if ((int)uVar12 < 1) {
    uVar14 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    do {
      uVar18 = (ulonglong)uVar16;
      pfVar1 = (float *)(param_1 + uVar18);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar18);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_2 + uVar18);
      *pfVar3 = *pfVar2 + *pfVar1;
      pfVar3[1] = fVar8 + fVar5;
      pfVar3[2] = fVar9 + fVar6;
      pfVar3[3] = fVar10 + fVar7;
      uVar14 = uVar14 + 4;
      uVar16 = uVar16 + 0x10;
    } while (uVar14 < uVar12);
    param_4 = uVar12;
    if ((int)param_3 <= (int)uVar14) {
      return;
    }
  }
  iVar13 = (int)uVar14;
  auVar19._4_4_ = iVar13;
  auVar19._0_4_ = iVar13;
  auVar19._8_4_ = iVar13;
  auVar19._12_4_ = iVar13;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_3);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_3);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_3);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_3);
  lVar17 = (longlong)(iVar13 << 2);
  uVar12 = movmskps(param_4,auVar21);
  bVar11 = (char)((byte)uVar12 << 4) >> 4;
  pfVar1 = (float *)(param_2 + lVar17);
  if ((~(byte)uVar12 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar17);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar17);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar17);
    if ((uVar12 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar12 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar12 & 1) != 0) {
      auVar21 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar12 & 2) != 0) {
      auVar21 = insertps(auVar21,pfVar1[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar21 = insertps(auVar21,pfVar1[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar21 = insertps(auVar21,pfVar1[3],0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ + auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ + auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ + auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ + auVar21._12_4_;
  if ((bVar11 & 1) != 0) {
    *pfVar1 = auVar20._0_4_;
  }
  if ((bVar11 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar11 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar11) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArrayAddConstantInplace_sse4 @ 140a368a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAddConstantInplace_sse4(longlong param_1,uint param_2,float param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  uint in_R8D;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar7 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar7 = param_2;
  }
  uVar7 = uVar7 & 0xfffffffc;
  if ((int)uVar7 < 1) {
    uVar9 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar11 = 0;
    uVar9 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar11);
      fVar14 = pfVar1[1];
      fVar15 = pfVar1[2];
      fVar16 = pfVar1[3];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar11);
      *pfVar2 = *pfVar1 + param_3;
      pfVar2[1] = fVar14 + param_3;
      pfVar2[2] = fVar15 + param_3;
      pfVar2[3] = fVar16 + param_3;
      uVar9 = uVar9 + 4;
      uVar11 = uVar11 + 0x10;
    } while (uVar9 < uVar7);
    in_R8D = uVar7;
    if ((int)param_2 <= (int)uVar9) {
      return;
    }
  }
  iVar8 = (int)uVar9;
  auVar12._4_4_ = iVar8;
  auVar12._0_4_ = iVar8;
  auVar12._8_4_ = iVar8;
  auVar12._12_4_ = iVar8;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar13._0_4_ = -(uint)(auVar12._0_4_ < (int)param_2);
  auVar13._4_4_ = -(uint)(auVar12._4_4_ < (int)param_2);
  auVar13._8_4_ = -(uint)(auVar12._8_4_ < (int)param_2);
  auVar13._12_4_ = -(uint)(auVar12._12_4_ < (int)param_2);
  pfVar1 = (float *)(param_1 + (iVar8 << 2));
  uVar7 = movmskps(in_R8D,auVar13);
  bVar10 = (char)((byte)uVar7 << 4) >> 4;
  if ((~(byte)uVar7 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + (iVar8 << 2));
  }
  else {
    if ((uVar7 & 1) != 0) {
      auVar12 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar7 & 2) != 0) {
      auVar12 = insertps(auVar12,pfVar1[1],0x10);
    }
    if ((uVar7 & 4) != 0) {
      auVar12 = insertps(auVar12,pfVar1[2],0x20);
    }
    if ((uVar7 & 8) != 0) {
      auVar12 = insertps(auVar12,pfVar1[3],0x30);
    }
  }
  fVar14 = param_3 + auVar12._0_4_;
  fVar15 = param_3 + auVar12._4_4_;
  fVar16 = param_3 + auVar12._8_4_;
  param_3 = param_3 + auVar12._12_4_;
  if ((bVar10 & 1) != 0) {
    *pfVar1 = fVar14;
  }
  if ((bVar10 & 2) != 0) {
    auVar6._4_4_ = fVar15;
    auVar6._0_4_ = fVar14;
    auVar6._8_4_ = fVar16;
    auVar6._12_4_ = param_3;
    uVar3 = extractps(auVar6,1);
    *(undefined8 *)(pfVar1 + 1) = uVar3;
  }
  if ((bVar10 & 4) != 0) {
    auVar5._4_4_ = fVar15;
    auVar5._0_4_ = fVar14;
    auVar5._8_4_ = fVar16;
    auVar5._12_4_ = param_3;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(pfVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar10) {
    return;
  }
  auVar4._4_4_ = fVar15;
  auVar4._0_4_ = fVar14;
  auVar4._8_4_ = fVar16;
  auVar4._12_4_ = param_3;
  uVar3 = extractps(auVar4,3);
  *(undefined8 *)(pfVar1 + 3) = uVar3;
  return;
}

// ArrayMultiplyAddInPlace_sse4 @ 140a369e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMultiplyAddInPlace_sse4(longlong param_1,float param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  uVar14 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar14 = param_4;
  }
  if ((int)(uVar14 & 0xfffffffc) < 1) {
    uVar12 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar12 = 0;
    do {
      uVar17 = (ulonglong)uVar15;
      pfVar1 = (float *)(param_1 + uVar17);
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar17);
      fVar22 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar17);
      *pfVar3 = *pfVar2 + *pfVar1 * param_2;
      pfVar3[1] = fVar22 + fVar19 * param_2;
      pfVar3[2] = fVar8 + fVar20 * param_2;
      pfVar3[3] = fVar9 + fVar21 * param_2;
      uVar12 = uVar12 + 4;
      uVar15 = uVar15 + 0x10;
    } while (uVar12 < (uVar14 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar18._4_4_ = iVar11;
  auVar18._0_4_ = iVar11;
  auVar18._8_4_ = iVar11;
  auVar18._12_4_ = iVar11;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar23._0_4_ = -(uint)(auVar18._0_4_ < (int)param_4);
  auVar23._4_4_ = -(uint)(auVar18._4_4_ < (int)param_4);
  auVar23._8_4_ = -(uint)(auVar18._8_4_ < (int)param_4);
  auVar23._12_4_ = -(uint)(auVar18._12_4_ < (int)param_4);
  lVar16 = (longlong)(iVar11 << 2);
  uVar14 = movmskps(param_4,auVar23);
  bVar10 = (char)((byte)uVar14 << 4) >> 4;
  pfVar1 = (float *)(param_3 + lVar16);
  if ((~(byte)uVar14 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + lVar16);
    auVar23 = *(undefined1 (*) [16])(param_3 + lVar16);
  }
  else {
    puVar13 = (uint *)(param_1 + lVar16);
    if ((uVar14 & 1) != 0) {
      auVar18 = ZEXT416(*puVar13);
    }
    if ((uVar14 & 2) != 0) {
      auVar18 = insertps(auVar18,puVar13[1],0x10);
    }
    if ((uVar14 & 4) != 0) {
      auVar18 = insertps(auVar18,puVar13[2],0x20);
    }
    if ((uVar14 & 8) != 0) {
      auVar18 = insertps(auVar18,puVar13[3],0x30);
    }
    if ((uVar14 & 1) != 0) {
      auVar23 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar14 & 2) != 0) {
      auVar23 = insertps(auVar23,pfVar1[1],0x10);
    }
    if ((uVar14 & 4) != 0) {
      auVar23 = insertps(auVar23,pfVar1[2],0x20);
    }
    if ((uVar14 & 8) != 0) {
      auVar23 = insertps(auVar23,pfVar1[3],0x30);
    }
  }
  fVar19 = param_2 * auVar18._0_4_ + auVar23._0_4_;
  fVar20 = param_2 * auVar18._4_4_ + auVar23._4_4_;
  fVar21 = param_2 * auVar18._8_4_ + auVar23._8_4_;
  fVar22 = param_2 * auVar18._12_4_ + auVar23._12_4_;
  if ((bVar10 & 1) != 0) {
    *pfVar1 = fVar19;
  }
  if ((bVar10 & 2) != 0) {
    auVar7._4_4_ = fVar20;
    auVar7._0_4_ = fVar19;
    auVar7._8_4_ = fVar21;
    auVar7._12_4_ = fVar22;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar10 & 4) != 0) {
    auVar6._4_4_ = fVar20;
    auVar6._0_4_ = fVar19;
    auVar6._8_4_ = fVar21;
    auVar6._12_4_ = fVar22;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar10) {
    return;
  }
  auVar5._4_4_ = fVar20;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = fVar21;
  auVar5._12_4_ = fVar22;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArrayLerpAddInPlace_sse4 @ 140a36bb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpAddInPlace_sse4
               (longlong param_1,float param_2,float param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  uint in_R8D;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  int iVar27;
  int iVar28;
  undefined1 auVar26 [16];
  int iVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  
  uVar14 = _UNK_150631e0c;
  uVar13 = _UNK_150631e08;
  uVar12 = __xmm_00000003000000020000000100000000._4_4_;
  uVar21 = (uint)__xmm_00000003000000020000000100000000;
  fVar31 = __real_3f800000;
  if (__real_3f800000 <= (float)(int)(param_5 - 1)) {
    fVar31 = (float)(int)(param_5 - 1);
  }
  fVar31 = (param_3 - param_2) / fVar31;
  uVar17 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar17 = param_5;
  }
  uVar17 = uVar17 & 0xfffffffc;
  if ((int)uVar17 < 1) {
    uVar20 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar22 = 0;
    uVar20 = 0;
    do {
      uVar18 = (uint)uVar20;
      uVar24 = (ulonglong)uVar22;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar32 = pfVar1[1];
      fVar33 = pfVar1[2];
      fVar34 = pfVar1[3];
      pfVar2 = (float *)(param_4 + uVar24);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_4 + uVar24);
      *pfVar3 = *pfVar2 + *pfVar1 * ((float)(int)(uVar18 | uVar21) * fVar31 + param_2);
      pfVar3[1] = fVar8 + fVar32 * ((float)(int)(uVar18 | uVar12) * fVar31 + param_2);
      pfVar3[2] = fVar9 + fVar33 * ((float)(int)(uVar18 | uVar13) * fVar31 + param_2);
      pfVar3[3] = fVar10 + fVar34 * ((float)(int)(uVar18 | uVar14) * fVar31 + param_2);
      uVar20 = uVar20 + 4;
      uVar22 = uVar22 + 0x10;
    } while (uVar20 < uVar17);
    in_R8D = uVar17;
    if ((int)param_5 <= (int)uVar20) {
      return;
    }
  }
  iVar19 = (int)uVar20;
  auVar26._4_4_ = iVar19;
  auVar26._0_4_ = iVar19;
  auVar26._8_4_ = iVar19;
  auVar26._12_4_ = iVar19;
  auVar11._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar11._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar11._8_4_ = _UNK_150631e08;
  auVar11._12_4_ = _UNK_150631e0c;
  auVar26 = auVar26 | auVar11;
  auVar30._4_4_ = param_2;
  auVar30._0_4_ = param_2;
  auVar30._8_4_ = param_2;
  auVar30._12_4_ = param_2;
  iVar25 = auVar26._0_4_;
  iVar27 = auVar26._4_4_;
  iVar28 = auVar26._8_4_;
  iVar29 = auVar26._12_4_;
  lVar23 = (longlong)(iVar19 << 2);
  auVar35._0_4_ = -(uint)(iVar25 < (int)param_5);
  auVar35._4_4_ = -(uint)(iVar27 < (int)param_5);
  auVar35._8_4_ = -(uint)(iVar28 < (int)param_5);
  auVar35._12_4_ = -(uint)(iVar29 < (int)param_5);
  uVar21 = movmskps(in_R8D,auVar35);
  bVar15 = (char)((byte)uVar21 << 4) >> 4;
  pfVar1 = (float *)(param_4 + lVar23);
  if ((~(byte)uVar21 & 9) == 0) {
    auVar26 = *(undefined1 (*) [16])(param_1 + lVar23);
    auVar30 = *(undefined1 (*) [16])(param_4 + lVar23);
  }
  else {
    puVar16 = (uint *)(param_1 + lVar23);
    if ((uVar21 & 1) != 0) {
      auVar26 = ZEXT416(*puVar16);
    }
    if ((uVar21 & 2) != 0) {
      auVar26 = insertps(auVar26,puVar16[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar26 = insertps(auVar26,puVar16[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar26 = insertps(auVar26,puVar16[3],0x30);
    }
    if ((uVar21 & 1) != 0) {
      auVar30 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar21 & 2) != 0) {
      auVar30 = insertps(auVar30,pfVar1[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar30 = insertps(auVar30,pfVar1[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar30 = insertps(auVar30,pfVar1[3],0x30);
    }
  }
  fVar32 = (fVar31 * (float)iVar25 + param_2) * auVar26._0_4_ + auVar30._0_4_;
  fVar33 = (fVar31 * (float)iVar27 + param_2) * auVar26._4_4_ + auVar30._4_4_;
  fVar34 = (fVar31 * (float)iVar28 + param_2) * auVar26._8_4_ + auVar30._8_4_;
  fVar31 = (fVar31 * (float)iVar29 + param_2) * auVar26._12_4_ + auVar30._12_4_;
  if ((bVar15 & 1) != 0) {
    *pfVar1 = fVar32;
  }
  if ((bVar15 & 2) != 0) {
    auVar7._4_4_ = fVar33;
    auVar7._0_4_ = fVar32;
    auVar7._8_4_ = fVar34;
    auVar7._12_4_ = fVar31;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar15 & 4) != 0) {
    auVar6._4_4_ = fVar33;
    auVar6._0_4_ = fVar32;
    auVar6._8_4_ = fVar34;
    auVar6._12_4_ = fVar31;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  auVar5._4_4_ = fVar33;
  auVar5._0_4_ = fVar32;
  auVar5._8_4_ = fVar34;
  auVar5._12_4_ = fVar31;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArraySubtract_sse4 @ 140a36df0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtract_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint in_R10D;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar11 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar13 = 0;
    do {
      uVar16 = (ulonglong)uVar18;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar16);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar16);
      *pfVar3 = *pfVar1 - *pfVar2;
      pfVar3[1] = fVar5 - fVar8;
      pfVar3[2] = fVar6 - fVar9;
      pfVar3[3] = fVar7 - fVar10;
      uVar13 = uVar13 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar13 < uVar11);
    in_R10D = uVar11;
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar19._4_4_ = iVar12;
  auVar19._0_4_ = iVar12;
  auVar19._8_4_ = iVar12;
  auVar19._12_4_ = iVar12;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_4);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_4);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_4);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_4);
  lVar14 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R10D,auVar21);
  bVar17 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar14);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar14);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar14);
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar21 = ZEXT416(*(uint *)(param_2 + lVar14));
    }
    if ((uVar11 & 2) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar21 = insertps(auVar21,*(undefined4 *)(param_2 + lVar14 + 0xc),0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ - auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ - auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ - auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ - auVar21._12_4_;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_3 + lVar14) = auVar20._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(param_3 + 4 + lVar14) = uVar4;
  }
  if ((bVar17 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(param_3 + 8 + lVar14) = uVar4;
  }
  if (-1 < (char)bVar17) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(param_3 + 0xc + lVar14) = uVar4;
  return;
}

// ArraySubtractInPlace1_sse4 @ 140a36fc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractInPlace1_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar12 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  uVar12 = uVar12 & 0xfffffffc;
  if ((int)uVar12 < 1) {
    uVar14 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    do {
      uVar18 = (ulonglong)uVar16;
      pfVar1 = (float *)(param_1 + uVar18);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar18);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_2 + uVar18);
      *pfVar3 = *pfVar1 - *pfVar2;
      pfVar3[1] = fVar5 - fVar8;
      pfVar3[2] = fVar6 - fVar9;
      pfVar3[3] = fVar7 - fVar10;
      uVar14 = uVar14 + 4;
      uVar16 = uVar16 + 0x10;
    } while (uVar14 < uVar12);
    param_4 = uVar12;
    if ((int)param_3 <= (int)uVar14) {
      return;
    }
  }
  iVar13 = (int)uVar14;
  auVar19._4_4_ = iVar13;
  auVar19._0_4_ = iVar13;
  auVar19._8_4_ = iVar13;
  auVar19._12_4_ = iVar13;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_3);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_3);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_3);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_3);
  lVar17 = (longlong)(iVar13 << 2);
  uVar12 = movmskps(param_4,auVar21);
  bVar11 = (char)((byte)uVar12 << 4) >> 4;
  pfVar1 = (float *)(param_2 + lVar17);
  if ((~(byte)uVar12 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar17);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar17);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar17);
    if ((uVar12 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar12 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar12 & 1) != 0) {
      auVar21 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar12 & 2) != 0) {
      auVar21 = insertps(auVar21,pfVar1[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar21 = insertps(auVar21,pfVar1[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar21 = insertps(auVar21,pfVar1[3],0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ - auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ - auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ - auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ - auVar21._12_4_;
  if ((bVar11 & 1) != 0) {
    *pfVar1 = auVar20._0_4_;
  }
  if ((bVar11 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar11 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar11) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArraySubtractInPlace2_sse4 @ 140a37190

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractInPlace2_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  uVar11 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar11 = param_3;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar13 = 0;
    do {
      uVar17 = (ulonglong)uVar15;
      pfVar1 = (float *)(param_1 + uVar17);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar17);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_1 + uVar17);
      *pfVar3 = *pfVar1 - *pfVar2;
      pfVar3[1] = fVar5 - fVar8;
      pfVar3[2] = fVar6 - fVar9;
      pfVar3[3] = fVar7 - fVar10;
      uVar13 = uVar13 + 4;
      uVar15 = uVar15 + 0x10;
    } while (uVar13 < uVar11);
    param_4 = uVar11;
    if ((int)param_3 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar18._4_4_ = iVar12;
  auVar18._0_4_ = iVar12;
  auVar18._8_4_ = iVar12;
  auVar18._12_4_ = iVar12;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar20._0_4_ = -(uint)(auVar18._0_4_ < (int)param_3);
  auVar20._4_4_ = -(uint)(auVar18._4_4_ < (int)param_3);
  auVar20._8_4_ = -(uint)(auVar18._8_4_ < (int)param_3);
  auVar20._12_4_ = -(uint)(auVar18._12_4_ < (int)param_3);
  lVar16 = (longlong)(iVar12 << 2);
  pfVar1 = (float *)(param_1 + lVar16);
  uVar11 = movmskps(param_4,auVar20);
  bVar14 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + lVar16);
    auVar20 = *(undefined1 (*) [16])(param_2 + lVar16);
  }
  else {
    if ((uVar11 & 1) != 0) {
      auVar18 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar11 & 2) != 0) {
      auVar18 = insertps(auVar18,pfVar1[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar18 = insertps(auVar18,pfVar1[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar18 = insertps(auVar18,pfVar1[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar20 = ZEXT416(*(uint *)(param_2 + lVar16));
    }
    if ((uVar11 & 2) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar16 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar16 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar16 + 0xc),0x30);
    }
  }
  auVar19._0_4_ = auVar18._0_4_ - auVar20._0_4_;
  auVar19._4_4_ = auVar18._4_4_ - auVar20._4_4_;
  auVar19._8_4_ = auVar18._8_4_ - auVar20._8_4_;
  auVar19._12_4_ = auVar18._12_4_ - auVar20._12_4_;
  if ((bVar14 & 1) != 0) {
    *pfVar1 = auVar19._0_4_;
  }
  if ((bVar14 & 2) != 0) {
    uVar4 = extractps(auVar19,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar14 & 4) != 0) {
    uVar4 = extractps(auVar19,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar14) {
    return;
  }
  uVar4 = extractps(auVar19,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArraySubtractByConstantInPlace_sse4 @ 140a37360

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySubtractByConstantInPlace_sse4(longlong param_1,float param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar10 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar10 = param_3;
  }
  if ((int)(uVar10 & 0xfffffffc) < 1) {
    uVar8 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar11 = 0;
    uVar8 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar11);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar11);
      *pfVar2 = *pfVar1 - param_2;
      pfVar2[1] = fVar4 - param_2;
      pfVar2[2] = fVar5 - param_2;
      pfVar2[3] = fVar6 - param_2;
      uVar8 = uVar8 + 4;
      uVar11 = uVar11 + 0x10;
    } while (uVar8 < (uVar10 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar8) {
      return;
    }
  }
  iVar7 = (int)uVar8;
  auVar12._4_4_ = iVar7;
  auVar12._0_4_ = iVar7;
  auVar12._8_4_ = iVar7;
  auVar12._12_4_ = iVar7;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar14._0_4_ = -(uint)(auVar12._0_4_ < (int)param_3);
  auVar14._4_4_ = -(uint)(auVar12._4_4_ < (int)param_3);
  auVar14._8_4_ = -(uint)(auVar12._8_4_ < (int)param_3);
  auVar14._12_4_ = -(uint)(auVar12._12_4_ < (int)param_3);
  pfVar1 = (float *)(param_1 + (iVar7 << 2));
  uVar10 = movmskps(param_3,auVar14);
  bVar9 = (char)((byte)uVar10 << 4) >> 4;
  if ((~(byte)uVar10 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + (iVar7 << 2));
  }
  else {
    if ((uVar10 & 1) != 0) {
      auVar12 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar10 & 2) != 0) {
      auVar12 = insertps(auVar12,pfVar1[1],0x10);
    }
    if ((uVar10 & 4) != 0) {
      auVar12 = insertps(auVar12,pfVar1[2],0x20);
    }
    if ((uVar10 & 8) != 0) {
      auVar12 = insertps(auVar12,pfVar1[3],0x30);
    }
  }
  auVar13._0_4_ = auVar12._0_4_ - param_2;
  auVar13._4_4_ = auVar12._4_4_ - param_2;
  auVar13._8_4_ = auVar12._8_4_ - param_2;
  auVar13._12_4_ = auVar12._12_4_ - param_2;
  if ((bVar9 & 1) != 0) {
    *pfVar1 = auVar13._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar3 = extractps(auVar13,1);
    *(undefined8 *)(pfVar1 + 1) = uVar3;
  }
  if ((bVar9 & 4) != 0) {
    uVar3 = extractps(auVar13,2);
    *(undefined8 *)(pfVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar9) {
    return;
  }
  uVar3 = extractps(auVar13,3);
  *(undefined8 *)(pfVar1 + 3) = uVar3;
  return;
}

// ArraySquare_sse4 @ 140a374a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySquare_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar7 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar7 = param_3;
  }
  uVar7 = uVar7 & 0xfffffffc;
  if ((int)uVar7 < 1) {
    uVar9 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar9 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = (float *)(param_2 + (ulonglong)uVar13);
      *pfVar2 = *pfVar1 * *pfVar1;
      pfVar2[1] = fVar4 * fVar4;
      pfVar2[2] = fVar5 * fVar5;
      pfVar2[3] = fVar6 * fVar6;
      uVar9 = uVar9 + 4;
      uVar13 = uVar13 + 0x10;
    } while (uVar9 < uVar7);
    param_4 = uVar7;
    if ((int)param_3 <= (int)uVar9) {
      return;
    }
  }
  iVar8 = (int)uVar9;
  auVar14._4_4_ = iVar8;
  auVar14._0_4_ = iVar8;
  auVar14._8_4_ = iVar8;
  auVar14._12_4_ = iVar8;
  auVar14 = auVar14 | ___xmm_00000003000000020000000100000000;
  auVar16._0_4_ = -(uint)(auVar14._0_4_ < (int)param_3);
  auVar16._4_4_ = -(uint)(auVar14._4_4_ < (int)param_3);
  auVar16._8_4_ = -(uint)(auVar14._8_4_ < (int)param_3);
  auVar16._12_4_ = -(uint)(auVar14._12_4_ < (int)param_3);
  lVar10 = (longlong)(iVar8 << 2);
  uVar7 = movmskps(param_4,auVar16);
  bVar12 = (char)((byte)uVar7 << 4) >> 4;
  if ((~(byte)uVar7 & 9) == 0) {
    auVar14 = *(undefined1 (*) [16])(param_1 + lVar10);
  }
  else {
    puVar11 = (uint *)(param_1 + lVar10);
    if ((uVar7 & 1) != 0) {
      auVar14 = ZEXT416(*puVar11);
    }
    if ((uVar7 & 2) != 0) {
      auVar14 = insertps(auVar14,puVar11[1],0x10);
    }
    if ((uVar7 & 4) != 0) {
      auVar14 = insertps(auVar14,puVar11[2],0x20);
    }
    if ((uVar7 & 8) != 0) {
      auVar14 = insertps(auVar14,puVar11[3],0x30);
    }
  }
  auVar15._0_4_ = auVar14._0_4_ * auVar14._0_4_;
  auVar15._4_4_ = auVar14._4_4_ * auVar14._4_4_;
  auVar15._8_4_ = auVar14._8_4_ * auVar14._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * auVar14._12_4_;
  if ((bVar12 & 1) != 0) {
    *(float *)(param_2 + lVar10) = auVar15._0_4_;
  }
  if ((bVar12 & 2) != 0) {
    uVar3 = extractps(auVar15,1);
    *(undefined8 *)(param_2 + 4 + lVar10) = uVar3;
  }
  if ((bVar12 & 4) != 0) {
    uVar3 = extractps(auVar15,2);
    *(undefined8 *)(param_2 + 8 + lVar10) = uVar3;
  }
  if (-1 < (char)bVar12) {
    return;
  }
  uVar3 = extractps(auVar15,3);
  *(undefined8 *)(param_2 + 0xc + lVar10) = uVar3;
  return;
}

// ArraySquareInPlace_sse4 @ 140a375e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySquareInPlace_sse4(longlong param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte bVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar7 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar7 = param_2;
  }
  uVar7 = uVar7 & 0xfffffffc;
  if ((int)uVar7 < 1) {
    uVar9 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar11 = 0;
    uVar9 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar11);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar11);
      *pfVar2 = *pfVar1 * *pfVar1;
      pfVar2[1] = fVar4 * fVar4;
      pfVar2[2] = fVar5 * fVar5;
      pfVar2[3] = fVar6 * fVar6;
      uVar9 = uVar9 + 4;
      uVar11 = uVar11 + 0x10;
    } while (uVar9 < uVar7);
    param_3 = uVar7;
    if ((int)param_2 <= (int)uVar9) {
      return;
    }
  }
  iVar8 = (int)uVar9;
  auVar12._4_4_ = iVar8;
  auVar12._0_4_ = iVar8;
  auVar12._8_4_ = iVar8;
  auVar12._12_4_ = iVar8;
  auVar12 = auVar12 | ___xmm_00000003000000020000000100000000;
  auVar14._0_4_ = -(uint)(auVar12._0_4_ < (int)param_2);
  auVar14._4_4_ = -(uint)(auVar12._4_4_ < (int)param_2);
  auVar14._8_4_ = -(uint)(auVar12._8_4_ < (int)param_2);
  auVar14._12_4_ = -(uint)(auVar12._12_4_ < (int)param_2);
  pfVar1 = (float *)(param_1 + (iVar8 << 2));
  uVar7 = movmskps(param_3,auVar14);
  bVar10 = (char)((byte)uVar7 << 4) >> 4;
  if ((~(byte)uVar7 & 9) == 0) {
    auVar12 = *(undefined1 (*) [16])(param_1 + (iVar8 << 2));
  }
  else {
    if ((uVar7 & 1) != 0) {
      auVar12 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar7 & 2) != 0) {
      auVar12 = insertps(auVar12,pfVar1[1],0x10);
    }
    if ((uVar7 & 4) != 0) {
      auVar12 = insertps(auVar12,pfVar1[2],0x20);
    }
    if ((uVar7 & 8) != 0) {
      auVar12 = insertps(auVar12,pfVar1[3],0x30);
    }
  }
  auVar13._0_4_ = auVar12._0_4_ * auVar12._0_4_;
  auVar13._4_4_ = auVar12._4_4_ * auVar12._4_4_;
  auVar13._8_4_ = auVar12._8_4_ * auVar12._8_4_;
  auVar13._12_4_ = auVar12._12_4_ * auVar12._12_4_;
  if ((bVar10 & 1) != 0) {
    *pfVar1 = auVar13._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar3 = extractps(auVar13,1);
    *(undefined8 *)(pfVar1 + 1) = uVar3;
  }
  if ((bVar10 & 4) != 0) {
    uVar3 = extractps(auVar13,2);
    *(undefined8 *)(pfVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar10) {
    return;
  }
  uVar3 = extractps(auVar13,3);
  *(undefined8 *)(pfVar1 + 3) = uVar3;
  return;
}

// ArraySqrtInPlace_sse4 @ 140a37710

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySqrtInPlace_sse4(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  uVar3 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar3 = param_2;
  }
  uVar3 = uVar3 & 0xfffffffc;
  if ((int)uVar3 < 1) {
    uVar5 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar7 = 0;
    uVar5 = 0;
    do {
      auVar8 = *(undefined1 (*) [16])(param_1 + (ulonglong)uVar7);
      auVar8 = sqrtps(auVar8,auVar8);
      *(undefined1 (*) [16])(param_1 + (ulonglong)uVar7) = auVar8;
      uVar5 = uVar5 + 4;
      uVar7 = uVar7 + 0x10;
    } while (uVar5 < uVar3);
    param_3 = uVar3;
    if ((int)param_2 <= (int)uVar5) {
      return;
    }
  }
  iVar4 = (int)uVar5;
  auVar8._4_4_ = iVar4;
  auVar8._0_4_ = iVar4;
  auVar8._8_4_ = iVar4;
  auVar8._12_4_ = iVar4;
  auVar8 = auVar8 | ___xmm_00000003000000020000000100000000;
  auVar9._0_4_ = -(uint)(auVar8._0_4_ < (int)param_2);
  auVar9._4_4_ = -(uint)(auVar8._4_4_ < (int)param_2);
  auVar9._8_4_ = -(uint)(auVar8._8_4_ < (int)param_2);
  auVar9._12_4_ = -(uint)(auVar8._12_4_ < (int)param_2);
  puVar1 = (uint *)(param_1 + (iVar4 << 2));
  uVar3 = movmskps(param_3,auVar9);
  bVar6 = (char)((byte)uVar3 << 4) >> 4;
  if ((~(byte)uVar3 & 9) == 0) {
    auVar8 = *(undefined1 (*) [16])(param_1 + (iVar4 << 2));
  }
  else {
    if ((uVar3 & 1) != 0) {
      auVar8 = ZEXT416(*puVar1);
    }
    if ((uVar3 & 2) != 0) {
      auVar8 = insertps(auVar8,puVar1[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar8 = insertps(auVar8,puVar1[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar8 = insertps(auVar8,puVar1[3],0x30);
    }
  }
  auVar8 = sqrtps(auVar8,auVar8);
  if ((bVar6 & 1) != 0) {
    *puVar1 = auVar8._0_4_;
  }
  if ((bVar6 & 2) != 0) {
    uVar2 = extractps(auVar8,1);
    *(undefined8 *)(puVar1 + 1) = uVar2;
  }
  if ((bVar6 & 4) != 0) {
    uVar2 = extractps(auVar8,2);
    *(undefined8 *)(puVar1 + 2) = uVar2;
  }
  if (-1 < (char)bVar6) {
    return;
  }
  uVar2 = extractps(auVar8,3);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  return;
}

// ArrayComplexConjugate_sse4 @ 140a37840

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexConjugate_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint *puVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar4 = _UNK_15065157c;
  uVar3 = _UNK_150651578;
  uVar2 = _UNK_150651574;
  uVar11 = __xmm_80000000800000008000000080000000;
  uVar5 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar5 = param_3;
  }
  uVar5 = uVar5 & 0xfffffffc;
  if ((int)uVar5 < 1) {
    uVar7 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar12 = 0;
    uVar7 = 0;
    do {
      auVar16 = *(undefined1 (*) [16])(param_1 + (ulonglong)uVar12);
      auVar15._0_4_ = auVar16._0_4_ ^ uVar11;
      auVar15._4_4_ = auVar16._4_4_ ^ uVar2;
      auVar15._8_4_ = auVar16._8_4_ ^ uVar3;
      auVar15._12_4_ = auVar16._12_4_ ^ uVar4;
      auVar16 = blendps(auVar15,auVar16,5);
      *(undefined1 (*) [16])(param_2 + (ulonglong)uVar12) = auVar16;
      uVar7 = uVar7 + 4;
      uVar12 = uVar12 + 0x10;
    } while (uVar7 < uVar5);
    param_4 = uVar5;
    if ((int)param_3 <= (int)uVar7) {
      return;
    }
  }
  iVar6 = (int)uVar7;
  auVar16._4_4_ = iVar6;
  auVar16._0_4_ = iVar6;
  auVar16._8_4_ = iVar6;
  auVar16._12_4_ = iVar6;
  auVar16 = auVar16 | ___xmm_00000003000000020000000100000000;
  auVar13._0_4_ = -(uint)(auVar16._0_4_ < (int)param_3);
  auVar13._4_4_ = -(uint)(auVar16._4_4_ < (int)param_3);
  auVar13._8_4_ = -(uint)(auVar16._8_4_ < (int)param_3);
  auVar13._12_4_ = -(uint)(auVar16._12_4_ < (int)param_3);
  lVar8 = (longlong)(iVar6 << 2);
  uVar11 = movmskps(param_4,auVar13);
  bVar10 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar16 = *(undefined1 (*) [16])(param_1 + lVar8);
  }
  else {
    puVar9 = (uint *)(param_1 + lVar8);
    if ((uVar11 & 1) != 0) {
      auVar16 = ZEXT416(*puVar9);
    }
    if ((uVar11 & 2) != 0) {
      auVar16 = insertps(auVar16,puVar9[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar16 = insertps(auVar16,puVar9[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar16 = insertps(auVar16,puVar9[3],0x30);
    }
  }
  auVar14._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar16._0_4_;
  auVar14._4_4_ = _UNK_150651574 ^ auVar16._4_4_;
  auVar14._8_4_ = _UNK_150651578 ^ auVar16._8_4_;
  auVar14._12_4_ = _UNK_15065157c ^ auVar16._12_4_;
  auVar16 = blendps(auVar14,auVar16,5);
  if ((bVar10 & 1) != 0) {
    *(int *)(param_2 + lVar8) = auVar16._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar1 = extractps(auVar16,1);
    *(undefined8 *)(param_2 + 4 + lVar8) = uVar1;
  }
  if ((bVar10 & 4) != 0) {
    uVar1 = extractps(auVar16,2);
    *(undefined8 *)(param_2 + 8 + lVar8) = uVar1;
  }
  if (-1 < (char)bVar10) {
    return;
  }
  uVar1 = extractps(auVar16,3);
  *(undefined8 *)(param_2 + 0xc + lVar8) = uVar1;
  return;
}

// ArrayComplexConjugateInPlace_sse4 @ 140a379b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexConjugateInPlace_sse4(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  uVar5 = _UNK_15065157c;
  uVar4 = _UNK_150651578;
  uVar3 = _UNK_150651574;
  uVar10 = __xmm_80000000800000008000000080000000;
  uVar6 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar6 = param_2;
  }
  uVar6 = uVar6 & 0xfffffffc;
  if ((int)uVar6 < 1) {
    uVar8 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar11 = 0;
    uVar8 = 0;
    do {
      auVar15 = *(undefined1 (*) [16])(param_1 + (ulonglong)uVar11);
      auVar14._0_4_ = auVar15._0_4_ ^ uVar10;
      auVar14._4_4_ = auVar15._4_4_ ^ uVar3;
      auVar14._8_4_ = auVar15._8_4_ ^ uVar4;
      auVar14._12_4_ = auVar15._12_4_ ^ uVar5;
      auVar15 = blendps(auVar14,auVar15,5);
      *(undefined1 (*) [16])(param_1 + (ulonglong)uVar11) = auVar15;
      uVar8 = uVar8 + 4;
      uVar11 = uVar11 + 0x10;
    } while (uVar8 < uVar6);
    param_3 = uVar6;
    if ((int)param_2 <= (int)uVar8) {
      return;
    }
  }
  iVar7 = (int)uVar8;
  auVar15._4_4_ = iVar7;
  auVar15._0_4_ = iVar7;
  auVar15._8_4_ = iVar7;
  auVar15._12_4_ = iVar7;
  auVar15 = auVar15 | ___xmm_00000003000000020000000100000000;
  auVar12._0_4_ = -(uint)(auVar15._0_4_ < (int)param_2);
  auVar12._4_4_ = -(uint)(auVar15._4_4_ < (int)param_2);
  auVar12._8_4_ = -(uint)(auVar15._8_4_ < (int)param_2);
  auVar12._12_4_ = -(uint)(auVar15._12_4_ < (int)param_2);
  puVar1 = (uint *)(param_1 + (iVar7 << 2));
  uVar10 = movmskps(param_3,auVar12);
  bVar9 = (char)((byte)uVar10 << 4) >> 4;
  if ((~(byte)uVar10 & 9) == 0) {
    auVar15 = *(undefined1 (*) [16])(param_1 + (iVar7 << 2));
  }
  else {
    if ((uVar10 & 1) != 0) {
      auVar15 = ZEXT416(*puVar1);
    }
    if ((uVar10 & 2) != 0) {
      auVar15 = insertps(auVar15,puVar1[1],0x10);
    }
    if ((uVar10 & 4) != 0) {
      auVar15 = insertps(auVar15,puVar1[2],0x20);
    }
    if ((uVar10 & 8) != 0) {
      auVar15 = insertps(auVar15,puVar1[3],0x30);
    }
  }
  auVar13._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar15._0_4_;
  auVar13._4_4_ = _UNK_150651574 ^ auVar15._4_4_;
  auVar13._8_4_ = _UNK_150651578 ^ auVar15._8_4_;
  auVar13._12_4_ = _UNK_15065157c ^ auVar15._12_4_;
  auVar15 = blendps(auVar13,auVar15,5);
  if ((bVar9 & 1) != 0) {
    *puVar1 = auVar15._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar2 = extractps(auVar15,1);
    *(undefined8 *)(puVar1 + 1) = uVar2;
  }
  if ((bVar9 & 4) != 0) {
    uVar2 = extractps(auVar15,2);
    *(undefined8 *)(puVar1 + 2) = uVar2;
  }
  if (-1 < (char)bVar9) {
    return;
  }
  uVar2 = extractps(auVar15,3);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  return;
}

// ArrayMagnitudeToDecibelInPlace_sse4 @ 140a37b10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMagnitudeToDecibelInPlace_sse4(longlong param_1,float param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  byte bVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  float fVar53;
  float fVar54;
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar56 [16];
  
  fVar24 = _UNK_150d5ac2c;
  fVar23 = _UNK_150d5ac28;
  fVar22 = _UNK_150d5ac24;
  fVar21 = ___xmm_410af967410af967410af967410af967;
  auVar46 = ___xmm_7fc000007fc000007fc000007fc00000;
  fVar20 = _UNK_150d5ac0c;
  fVar19 = _UNK_150d5ac08;
  fVar18 = _UNK_150d5ac04;
  fVar17 = ___xmm_3f3172183f3172183f3172183f317218;
  fVar16 = _UNK_150d5abfc;
  fVar15 = _UNK_150d5abf8;
  fVar14 = _UNK_150d5abf4;
  fVar13 = ___xmm_3f0000103f0000103f0000103f000010;
  fVar12 = _UNK_150d5abec;
  fVar11 = _UNK_150d5abe8;
  fVar10 = _UNK_150d5abe4;
  fVar9 = ___xmm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c;
  fVar8 = _UNK_150d5abdc;
  fVar7 = _UNK_150d5abd8;
  fVar6 = _UNK_150d5abd4;
  fVar5 = ___xmm_3e80fb873e80fb873e80fb873e80fb87;
  fVar4 = _UNK_150d5abcc;
  fVar55 = _UNK_150d5abc8;
  fVar54 = _UNK_150d5abc4;
  fVar53 = ___xmm_3e33a0af3e33a0af3e33a0af3e33a0af;
  auVar3 = ___xmm_ff800000ff800000ff800000ff800000;
  auVar52 = ___xmm_3f8000003f8000003f8000003f800000;
  fVar41 = (param_2 * __real_40135d8e) / __real_41a00000;
  auVar35 = ZEXT416((uint)(__real_3fb8aa3b * fVar41));
  auVar35 = roundss(auVar35,auVar35,9);
  fVar33 = auVar35._0_4_;
  iVar25 = (int)fVar33;
  fVar34 = __real_7f800000;
  if (iVar25 < 0x80) {
    fVar34 = fVar33 * __real_b5bfbe8e + fVar41 + __real_bf317200 * fVar33;
    fVar34 = (float)(iVar25 * 0x800000 + 0x3f800000) *
             (((((((__real_39907835 * fVar34 + __real_3aaaf7b5) * fVar34 + __real_3c09475d) * fVar34
                 + __real_3d2a9d49) * fVar34 + __real_3e2aab20) * fVar34 + __real_3efffffd) * fVar34
              + __real_3f800000) * fVar34 + __real_3f800000);
  }
  auVar35 = ZEXT816(0);
  if (-0x7f < iVar25) {
    auVar35 = ZEXT416((uint)fVar34);
  }
  uVar27 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar27 = param_3;
  }
  auVar45._0_4_ = auVar35._0_4_;
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar28 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar45._4_4_ = auVar45._0_4_;
    auVar45._8_4_ = auVar45._0_4_;
    auVar45._12_4_ = auVar45._0_4_;
    uVar29 = 0;
    fVar34 = (float)__xmm_3f8000003f8000003f8000003f800000;
    fVar33 = __xmm_3f8000003f8000003f8000003f800000._4_4_;
    fVar41 = __xmm_3f8000003f8000003f8000003f800000._8_4_;
    fVar2 = __xmm_3f8000003f8000003f8000003f800000._12_4_;
    uVar28 = 0;
    do {
      auVar56 = maxps(*(undefined1 (*) [16])(param_1 + (ulonglong)uVar29),auVar45);
      iVar25 = -(uint)(auVar56._8_4_ <= 0.0);
      iVar31 = -(uint)(auVar56._12_4_ <= 0.0);
      uVar42 = CONCAT44(-(uint)(auVar56._4_4_ <= 0.0),-(uint)(auVar56._0_4_ <= 0.0));
      auVar35._8_4_ = iVar25;
      auVar35._0_8_ = uVar42;
      auVar35._12_4_ = iVar31;
      auVar35 = blendvps(auVar56,auVar52,auVar35);
      fVar47 = fVar34 - (float)(auVar35._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                               ___xmm_3f0000003f0000003f0000003f000000);
      fVar49 = fVar33 - (float)(auVar35._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
      fVar50 = fVar41 - (float)(auVar35._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
      fVar51 = fVar2 - (float)(auVar35._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
      auVar48._0_4_ =
           (float)(((int)auVar35._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) * fVar17
           - (((((((((fVar47 * ___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e +
                     ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar47 +
                    ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar47 +
                   ___xmm_bf198181bf198181bf198181bf198181) * fVar47 +
                  ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar47 + fVar53) * fVar47 + fVar5) *
                fVar47 + fVar9) * fVar47 + fVar13) * fVar47 + fVar34) * fVar47;
      auVar48._4_4_ =
           (float)(((int)auVar35._4_4_ >> 0x17) + _UNK_150d5a924) * fVar18 -
           (((((((((fVar49 * _UNK_150d5ab74 + _UNK_150d5ab84) * fVar49 + _UNK_150d5ab94) * fVar49 +
                 _UNK_150d5aba4) * fVar49 + _UNK_150d5abb4) * fVar49 + fVar54) * fVar49 + fVar6) *
              fVar49 + fVar10) * fVar49 + fVar14) * fVar49 + fVar33) * fVar49;
      auVar48._8_4_ =
           (float)(((int)auVar35._8_4_ >> 0x17) + _UNK_150d5a928) * fVar19 -
           (((((((((fVar50 * _UNK_150d5ab78 + _UNK_150d5ab88) * fVar50 + _UNK_150d5ab98) * fVar50 +
                 _UNK_150d5aba8) * fVar50 + _UNK_150d5abb8) * fVar50 + fVar55) * fVar50 + fVar7) *
              fVar50 + fVar11) * fVar50 + fVar15) * fVar50 + fVar41) * fVar50;
      auVar48._12_4_ =
           (float)(((int)auVar35._12_4_ >> 0x17) + _UNK_150d5a92c) * fVar20 -
           (((((((((fVar51 * _UNK_150d5ab7c + _UNK_150d5ab8c) * fVar51 + _UNK_150d5ab9c) * fVar51 +
                 _UNK_150d5abac) * fVar51 + _UNK_150d5abbc) * fVar51 + fVar4) * fVar51 + fVar8) *
              fVar51 + fVar12) * fVar51 + fVar16) * fVar51 + fVar2) * fVar51;
      auVar36._4_4_ = -(uint)(auVar56._4_4_ < 0.0);
      auVar36._0_4_ = -(uint)(auVar56._0_4_ < 0.0);
      auVar36._8_4_ = -(uint)(auVar56._8_4_ < 0.0);
      auVar36._12_4_ = -(uint)(auVar56._12_4_ < 0.0);
      auVar35 = blendvps(auVar3,auVar46,auVar36);
      auVar56._8_4_ = iVar25;
      auVar56._0_8_ = uVar42;
      auVar56._12_4_ = iVar31;
      auVar35 = blendvps(auVar48,auVar35,auVar56);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar29);
      *pfVar1 = auVar35._0_4_ * fVar21;
      pfVar1[1] = auVar35._4_4_ * fVar22;
      pfVar1[2] = auVar35._8_4_ * fVar23;
      pfVar1[3] = auVar35._12_4_ * fVar24;
      uVar28 = uVar28 + 4;
      uVar29 = uVar29 + 0x10;
    } while (uVar28 < (uVar27 & 0xfffffffc));
    auVar35 = auVar45;
    if ((int)param_3 <= (int)uVar28) {
      return;
    }
  }
  uVar27 = (uint)uVar28;
  auVar52._0_8_ =
       CONCAT44(-(uint)((int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_3)
                ,-(uint)((int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_3
                        ));
  auVar52._8_4_ = -(uint)((int)(uVar27 | _UNK_150631e08) < (int)param_3);
  auVar52._12_4_ = -(uint)((int)(uVar27 | _UNK_150631e0c) < (int)param_3);
  pfVar1 = (float *)(param_1 + (int)(uVar27 << 2));
  uVar29 = movmskps(param_3,auVar52);
  bVar26 = (char)((byte)uVar29 << 4) >> 4;
  if ((~(byte)uVar29 & 9) == 0) {
    auVar35 = *(undefined1 (*) [16])(param_1 + (int)(uVar27 << 2));
  }
  else {
    if ((uVar29 & 1) != 0) {
      auVar35 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar29 & 2) != 0) {
      auVar35 = insertps(auVar35,pfVar1[1],0x10);
    }
    if ((uVar29 & 4) != 0) {
      auVar35 = insertps(auVar35,pfVar1[2],0x20);
    }
    if ((uVar29 & 8) != 0) {
      auVar35 = insertps(auVar35,pfVar1[3],0x30);
    }
  }
  auVar46._4_4_ = auVar45._0_4_;
  auVar46._0_4_ = auVar45._0_4_;
  auVar46._8_4_ = auVar45._0_4_;
  auVar46._12_4_ = auVar45._0_4_;
  auVar46 = maxps(auVar35,auVar46);
  iVar25 = -(uint)(auVar46._0_4_ <= 0.0);
  iVar31 = -(uint)(auVar46._4_4_ <= 0.0);
  iVar30 = -(uint)(auVar46._8_4_ <= 0.0);
  iVar32 = -(uint)(auVar46._12_4_ <= 0.0);
  auVar37._4_4_ = iVar31;
  auVar37._0_4_ = iVar25;
  auVar37._8_4_ = iVar30;
  auVar37._12_4_ = iVar32;
  auVar35 = blendvps(auVar46,___xmm_3f8000003f8000003f8000003f800000,auVar37);
  auVar38._8_4_ = auVar52._8_4_;
  auVar38._0_8_ = auVar52._0_8_;
  auVar38._12_4_ = auVar52._12_4_;
  auVar3._4_4_ = __xmm_3f8000003f8000003f8000003f800000._4_4_ -
                 (float)(auVar35._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
  auVar3._0_4_ = (float)__xmm_3f8000003f8000003f8000003f800000 -
                 (float)(auVar35._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                        ___xmm_3f0000003f0000003f0000003f000000);
  auVar3._8_4_ = __xmm_3f8000003f8000003f8000003f800000._8_4_ -
                 (float)(auVar35._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
  auVar3._12_4_ =
       __xmm_3f8000003f8000003f8000003f800000._12_4_ -
       (float)(auVar35._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
  auVar52 = blendvps(___xmm_7fc000007fc000007fc000007fc00000,auVar3,auVar38);
  fVar34 = auVar52._0_4_;
  fVar53 = auVar52._4_4_;
  fVar54 = auVar52._8_4_;
  fVar55 = auVar52._12_4_;
  auVar43._0_4_ =
       (float)(((int)auVar35._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) *
       ___xmm_3f3172183f3172183f3172183f317218 -
       (((((((((___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e * fVar34 +
               ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar34 +
              ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar34 +
             ___xmm_bf198181bf198181bf198181bf198181) * fVar34 +
            ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar34 +
           ___xmm_3e33a0af3e33a0af3e33a0af3e33a0af) * fVar34 +
          ___xmm_3e80fb873e80fb873e80fb873e80fb87) * fVar34 +
         ___xmm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c) * fVar34 + ___xmm_3f0000103f0000103f0000103f000010
        ) * fVar34 + (float)__xmm_3f8000003f8000003f8000003f800000) * fVar34;
  auVar43._4_4_ =
       (float)(((int)auVar35._4_4_ >> 0x17) + _UNK_150d5a924) * _UNK_150d5ac04 -
       (((((((((_UNK_150d5ab74 * fVar53 + _UNK_150d5ab84) * fVar53 + _UNK_150d5ab94) * fVar53 +
             _UNK_150d5aba4) * fVar53 + _UNK_150d5abb4) * fVar53 + _UNK_150d5abc4) * fVar53 +
          _UNK_150d5abd4) * fVar53 + _UNK_150d5abe4) * fVar53 + _UNK_150d5abf4) * fVar53 +
       __xmm_3f8000003f8000003f8000003f800000._4_4_) * fVar53;
  auVar43._8_4_ =
       (float)(((int)auVar35._8_4_ >> 0x17) + _UNK_150d5a928) * _UNK_150d5ac08 -
       (((((((((_UNK_150d5ab78 * fVar54 + _UNK_150d5ab88) * fVar54 + _UNK_150d5ab98) * fVar54 +
             _UNK_150d5aba8) * fVar54 + _UNK_150d5abb8) * fVar54 + _UNK_150d5abc8) * fVar54 +
          _UNK_150d5abd8) * fVar54 + _UNK_150d5abe8) * fVar54 + _UNK_150d5abf8) * fVar54 +
       __xmm_3f8000003f8000003f8000003f800000._8_4_) * fVar54;
  auVar43._12_4_ =
       (float)(((int)auVar35._12_4_ >> 0x17) + _UNK_150d5a92c) * _UNK_150d5ac0c -
       (((((((((_UNK_150d5ab7c * fVar55 + _UNK_150d5ab8c) * fVar55 + _UNK_150d5ab9c) * fVar55 +
             _UNK_150d5abac) * fVar55 + _UNK_150d5abbc) * fVar55 + _UNK_150d5abcc) * fVar55 +
          _UNK_150d5abdc) * fVar55 + _UNK_150d5abec) * fVar55 + _UNK_150d5abfc) * fVar55 +
       __xmm_3f8000003f8000003f8000003f800000._12_4_) * fVar55;
  auVar39._4_4_ = -(uint)(auVar46._4_4_ < 0.0);
  auVar39._0_4_ = -(uint)(auVar46._0_4_ < 0.0);
  auVar39._8_4_ = -(uint)(auVar46._8_4_ < 0.0);
  auVar39._12_4_ = -(uint)(auVar46._12_4_ < 0.0);
  auVar52 = blendvps(___xmm_ff800000ff800000ff800000ff800000,___xmm_7fc000007fc000007fc000007fc00000
                     ,auVar39);
  auVar40._4_4_ = iVar31;
  auVar40._0_4_ = iVar25;
  auVar40._8_4_ = iVar30;
  auVar40._12_4_ = iVar32;
  auVar52 = blendvps(auVar43,auVar52,auVar40);
  auVar44._0_4_ = auVar52._0_4_ * ___xmm_410af967410af967410af967410af967;
  auVar44._4_4_ = auVar52._4_4_ * _UNK_150d5ac24;
  auVar44._8_4_ = auVar52._8_4_ * _UNK_150d5ac28;
  auVar44._12_4_ = auVar52._12_4_ * _UNK_150d5ac2c;
  if ((bVar26 & 1) != 0) {
    *pfVar1 = auVar44._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar42 = extractps(auVar44,1);
    *(undefined8 *)(pfVar1 + 1) = uVar42;
  }
  if ((bVar26 & 4) != 0) {
    uVar42 = extractps(auVar44,2);
    *(undefined8 *)(pfVar1 + 2) = uVar42;
  }
  if ((char)bVar26 < '\0') {
    uVar42 = extractps(auVar44,3);
    *(undefined8 *)(pfVar1 + 3) = uVar42;
  }
  return;
}

// ArrayPowerToDecibelInPlace_sse4 @ 140a37fe0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPowerToDecibelInPlace_sse4(longlong param_1,float param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
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
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  byte bVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  float fVar53;
  float fVar54;
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar56 [16];
  
  fVar24 = _UNK_150d5ac3c;
  fVar23 = _UNK_150d5ac38;
  fVar22 = _UNK_150d5ac34;
  fVar21 = ___xmm_408af967408af967408af967408af967;
  auVar46 = ___xmm_7fc000007fc000007fc000007fc00000;
  fVar20 = _UNK_150d5ac0c;
  fVar19 = _UNK_150d5ac08;
  fVar18 = _UNK_150d5ac04;
  fVar17 = ___xmm_3f3172183f3172183f3172183f317218;
  fVar16 = _UNK_150d5abfc;
  fVar15 = _UNK_150d5abf8;
  fVar14 = _UNK_150d5abf4;
  fVar13 = ___xmm_3f0000103f0000103f0000103f000010;
  fVar12 = _UNK_150d5abec;
  fVar11 = _UNK_150d5abe8;
  fVar10 = _UNK_150d5abe4;
  fVar9 = ___xmm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c;
  fVar8 = _UNK_150d5abdc;
  fVar7 = _UNK_150d5abd8;
  fVar6 = _UNK_150d5abd4;
  fVar5 = ___xmm_3e80fb873e80fb873e80fb873e80fb87;
  fVar4 = _UNK_150d5abcc;
  fVar55 = _UNK_150d5abc8;
  fVar54 = _UNK_150d5abc4;
  fVar53 = ___xmm_3e33a0af3e33a0af3e33a0af3e33a0af;
  auVar3 = ___xmm_ff800000ff800000ff800000ff800000;
  auVar52 = ___xmm_3f8000003f8000003f8000003f800000;
  fVar41 = (param_2 * __real_40135d8e) / __real_41200000;
  auVar35 = ZEXT416((uint)(__real_3fb8aa3b * fVar41));
  auVar35 = roundss(auVar35,auVar35,9);
  fVar33 = auVar35._0_4_;
  iVar25 = (int)fVar33;
  fVar34 = __real_7f800000;
  if (iVar25 < 0x80) {
    fVar34 = fVar33 * __real_b5bfbe8e + fVar41 + __real_bf317200 * fVar33;
    fVar34 = (float)(iVar25 * 0x800000 + 0x3f800000) *
             (((((((__real_39907835 * fVar34 + __real_3aaaf7b5) * fVar34 + __real_3c09475d) * fVar34
                 + __real_3d2a9d49) * fVar34 + __real_3e2aab20) * fVar34 + __real_3efffffd) * fVar34
              + __real_3f800000) * fVar34 + __real_3f800000);
  }
  auVar35 = ZEXT816(0);
  if (-0x7f < iVar25) {
    auVar35 = ZEXT416((uint)fVar34);
  }
  uVar27 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar27 = param_3;
  }
  auVar45._0_4_ = auVar35._0_4_;
  if ((int)(uVar27 & 0xfffffffc) < 1) {
    uVar28 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    auVar45._4_4_ = auVar45._0_4_;
    auVar45._8_4_ = auVar45._0_4_;
    auVar45._12_4_ = auVar45._0_4_;
    uVar29 = 0;
    fVar34 = (float)__xmm_3f8000003f8000003f8000003f800000;
    fVar33 = __xmm_3f8000003f8000003f8000003f800000._4_4_;
    fVar41 = __xmm_3f8000003f8000003f8000003f800000._8_4_;
    fVar2 = __xmm_3f8000003f8000003f8000003f800000._12_4_;
    uVar28 = 0;
    do {
      auVar56 = maxps(*(undefined1 (*) [16])(param_1 + (ulonglong)uVar29),auVar45);
      iVar25 = -(uint)(auVar56._8_4_ <= 0.0);
      iVar31 = -(uint)(auVar56._12_4_ <= 0.0);
      uVar42 = CONCAT44(-(uint)(auVar56._4_4_ <= 0.0),-(uint)(auVar56._0_4_ <= 0.0));
      auVar35._8_4_ = iVar25;
      auVar35._0_8_ = uVar42;
      auVar35._12_4_ = iVar31;
      auVar35 = blendvps(auVar56,auVar52,auVar35);
      fVar47 = fVar34 - (float)(auVar35._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                               ___xmm_3f0000003f0000003f0000003f000000);
      fVar49 = fVar33 - (float)(auVar35._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
      fVar50 = fVar41 - (float)(auVar35._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
      fVar51 = fVar2 - (float)(auVar35._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
      auVar48._0_4_ =
           (float)(((int)auVar35._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) * fVar17
           - (((((((((fVar47 * ___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e +
                     ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar47 +
                    ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar47 +
                   ___xmm_bf198181bf198181bf198181bf198181) * fVar47 +
                  ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar47 + fVar53) * fVar47 + fVar5) *
                fVar47 + fVar9) * fVar47 + fVar13) * fVar47 + fVar34) * fVar47;
      auVar48._4_4_ =
           (float)(((int)auVar35._4_4_ >> 0x17) + _UNK_150d5a924) * fVar18 -
           (((((((((fVar49 * _UNK_150d5ab74 + _UNK_150d5ab84) * fVar49 + _UNK_150d5ab94) * fVar49 +
                 _UNK_150d5aba4) * fVar49 + _UNK_150d5abb4) * fVar49 + fVar54) * fVar49 + fVar6) *
              fVar49 + fVar10) * fVar49 + fVar14) * fVar49 + fVar33) * fVar49;
      auVar48._8_4_ =
           (float)(((int)auVar35._8_4_ >> 0x17) + _UNK_150d5a928) * fVar19 -
           (((((((((fVar50 * _UNK_150d5ab78 + _UNK_150d5ab88) * fVar50 + _UNK_150d5ab98) * fVar50 +
                 _UNK_150d5aba8) * fVar50 + _UNK_150d5abb8) * fVar50 + fVar55) * fVar50 + fVar7) *
              fVar50 + fVar11) * fVar50 + fVar15) * fVar50 + fVar41) * fVar50;
      auVar48._12_4_ =
           (float)(((int)auVar35._12_4_ >> 0x17) + _UNK_150d5a92c) * fVar20 -
           (((((((((fVar51 * _UNK_150d5ab7c + _UNK_150d5ab8c) * fVar51 + _UNK_150d5ab9c) * fVar51 +
                 _UNK_150d5abac) * fVar51 + _UNK_150d5abbc) * fVar51 + fVar4) * fVar51 + fVar8) *
              fVar51 + fVar12) * fVar51 + fVar16) * fVar51 + fVar2) * fVar51;
      auVar36._4_4_ = -(uint)(auVar56._4_4_ < 0.0);
      auVar36._0_4_ = -(uint)(auVar56._0_4_ < 0.0);
      auVar36._8_4_ = -(uint)(auVar56._8_4_ < 0.0);
      auVar36._12_4_ = -(uint)(auVar56._12_4_ < 0.0);
      auVar35 = blendvps(auVar3,auVar46,auVar36);
      auVar56._8_4_ = iVar25;
      auVar56._0_8_ = uVar42;
      auVar56._12_4_ = iVar31;
      auVar35 = blendvps(auVar48,auVar35,auVar56);
      pfVar1 = (float *)(param_1 + (ulonglong)uVar29);
      *pfVar1 = auVar35._0_4_ * fVar21;
      pfVar1[1] = auVar35._4_4_ * fVar22;
      pfVar1[2] = auVar35._8_4_ * fVar23;
      pfVar1[3] = auVar35._12_4_ * fVar24;
      uVar28 = uVar28 + 4;
      uVar29 = uVar29 + 0x10;
    } while (uVar28 < (uVar27 & 0xfffffffc));
    auVar35 = auVar45;
    if ((int)param_3 <= (int)uVar28) {
      return;
    }
  }
  uVar27 = (uint)uVar28;
  auVar52._0_8_ =
       CONCAT44(-(uint)((int)(uVar27 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_3)
                ,-(uint)((int)(uVar27 | (uint)__xmm_00000003000000020000000100000000) < (int)param_3
                        ));
  auVar52._8_4_ = -(uint)((int)(uVar27 | _UNK_150631e08) < (int)param_3);
  auVar52._12_4_ = -(uint)((int)(uVar27 | _UNK_150631e0c) < (int)param_3);
  pfVar1 = (float *)(param_1 + (int)(uVar27 << 2));
  uVar29 = movmskps(param_3,auVar52);
  bVar26 = (char)((byte)uVar29 << 4) >> 4;
  if ((~(byte)uVar29 & 9) == 0) {
    auVar35 = *(undefined1 (*) [16])(param_1 + (int)(uVar27 << 2));
  }
  else {
    if ((uVar29 & 1) != 0) {
      auVar35 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar29 & 2) != 0) {
      auVar35 = insertps(auVar35,pfVar1[1],0x10);
    }
    if ((uVar29 & 4) != 0) {
      auVar35 = insertps(auVar35,pfVar1[2],0x20);
    }
    if ((uVar29 & 8) != 0) {
      auVar35 = insertps(auVar35,pfVar1[3],0x30);
    }
  }
  auVar46._4_4_ = auVar45._0_4_;
  auVar46._0_4_ = auVar45._0_4_;
  auVar46._8_4_ = auVar45._0_4_;
  auVar46._12_4_ = auVar45._0_4_;
  auVar46 = maxps(auVar35,auVar46);
  iVar25 = -(uint)(auVar46._0_4_ <= 0.0);
  iVar31 = -(uint)(auVar46._4_4_ <= 0.0);
  iVar30 = -(uint)(auVar46._8_4_ <= 0.0);
  iVar32 = -(uint)(auVar46._12_4_ <= 0.0);
  auVar37._4_4_ = iVar31;
  auVar37._0_4_ = iVar25;
  auVar37._8_4_ = iVar30;
  auVar37._12_4_ = iVar32;
  auVar35 = blendvps(auVar46,___xmm_3f8000003f8000003f8000003f800000,auVar37);
  auVar38._8_4_ = auVar52._8_4_;
  auVar38._0_8_ = auVar52._0_8_;
  auVar38._12_4_ = auVar52._12_4_;
  auVar3._4_4_ = __xmm_3f8000003f8000003f8000003f800000._4_4_ -
                 (float)(auVar35._4_4_ & _UNK_150d5ab64 | _UNK_150689624);
  auVar3._0_4_ = (float)__xmm_3f8000003f8000003f8000003f800000 -
                 (float)(auVar35._0_4_ & ___xmm_807fffff807fffff807fffff807fffff |
                        ___xmm_3f0000003f0000003f0000003f000000);
  auVar3._8_4_ = __xmm_3f8000003f8000003f8000003f800000._8_4_ -
                 (float)(auVar35._8_4_ & _UNK_150d5ab68 | _UNK_150689628);
  auVar3._12_4_ =
       __xmm_3f8000003f8000003f8000003f800000._12_4_ -
       (float)(auVar35._12_4_ & _UNK_150d5ab6c | _UNK_15068962c);
  auVar52 = blendvps(___xmm_7fc000007fc000007fc000007fc00000,auVar3,auVar38);
  fVar34 = auVar52._0_4_;
  fVar53 = auVar52._4_4_;
  fVar54 = auVar52._8_4_;
  fVar55 = auVar52._12_4_;
  auVar43._0_4_ =
       (float)(((int)auVar35._0_4_ >> 0x17) + ___xmm_ffffff82ffffff82ffffff82ffffff82) *
       ___xmm_3f3172183f3172183f3172183f317218 -
       (((((((((___xmm_3fdfe28e3fdfe28e3fdfe28e3fdfe28e * fVar34 +
               ___xmm_c01f5af7c01f5af7c01f5af7c01f5af7) * fVar34 +
              ___xmm_3ffe01933ffe01933ffe01933ffe0193) * fVar34 +
             ___xmm_bf198181bf198181bf198181bf198181) * fVar34 +
            ___xmm_3eaf548d3eaf548d3eaf548d3eaf548d) * fVar34 +
           ___xmm_3e33a0af3e33a0af3e33a0af3e33a0af) * fVar34 +
          ___xmm_3e80fb873e80fb873e80fb873e80fb87) * fVar34 +
         ___xmm_3eaaa11c3eaaa11c3eaaa11c3eaaa11c) * fVar34 + ___xmm_3f0000103f0000103f0000103f000010
        ) * fVar34 + (float)__xmm_3f8000003f8000003f8000003f800000) * fVar34;
  auVar43._4_4_ =
       (float)(((int)auVar35._4_4_ >> 0x17) + _UNK_150d5a924) * _UNK_150d5ac04 -
       (((((((((_UNK_150d5ab74 * fVar53 + _UNK_150d5ab84) * fVar53 + _UNK_150d5ab94) * fVar53 +
             _UNK_150d5aba4) * fVar53 + _UNK_150d5abb4) * fVar53 + _UNK_150d5abc4) * fVar53 +
          _UNK_150d5abd4) * fVar53 + _UNK_150d5abe4) * fVar53 + _UNK_150d5abf4) * fVar53 +
       __xmm_3f8000003f8000003f8000003f800000._4_4_) * fVar53;
  auVar43._8_4_ =
       (float)(((int)auVar35._8_4_ >> 0x17) + _UNK_150d5a928) * _UNK_150d5ac08 -
       (((((((((_UNK_150d5ab78 * fVar54 + _UNK_150d5ab88) * fVar54 + _UNK_150d5ab98) * fVar54 +
             _UNK_150d5aba8) * fVar54 + _UNK_150d5abb8) * fVar54 + _UNK_150d5abc8) * fVar54 +
          _UNK_150d5abd8) * fVar54 + _UNK_150d5abe8) * fVar54 + _UNK_150d5abf8) * fVar54 +
       __xmm_3f8000003f8000003f8000003f800000._8_4_) * fVar54;
  auVar43._12_4_ =
       (float)(((int)auVar35._12_4_ >> 0x17) + _UNK_150d5a92c) * _UNK_150d5ac0c -
       (((((((((_UNK_150d5ab7c * fVar55 + _UNK_150d5ab8c) * fVar55 + _UNK_150d5ab9c) * fVar55 +
             _UNK_150d5abac) * fVar55 + _UNK_150d5abbc) * fVar55 + _UNK_150d5abcc) * fVar55 +
          _UNK_150d5abdc) * fVar55 + _UNK_150d5abec) * fVar55 + _UNK_150d5abfc) * fVar55 +
       __xmm_3f8000003f8000003f8000003f800000._12_4_) * fVar55;
  auVar39._4_4_ = -(uint)(auVar46._4_4_ < 0.0);
  auVar39._0_4_ = -(uint)(auVar46._0_4_ < 0.0);
  auVar39._8_4_ = -(uint)(auVar46._8_4_ < 0.0);
  auVar39._12_4_ = -(uint)(auVar46._12_4_ < 0.0);
  auVar52 = blendvps(___xmm_ff800000ff800000ff800000ff800000,___xmm_7fc000007fc000007fc000007fc00000
                     ,auVar39);
  auVar40._4_4_ = iVar31;
  auVar40._0_4_ = iVar25;
  auVar40._8_4_ = iVar30;
  auVar40._12_4_ = iVar32;
  auVar52 = blendvps(auVar43,auVar52,auVar40);
  auVar44._0_4_ = auVar52._0_4_ * ___xmm_408af967408af967408af967408af967;
  auVar44._4_4_ = auVar52._4_4_ * _UNK_150d5ac34;
  auVar44._8_4_ = auVar52._8_4_ * _UNK_150d5ac38;
  auVar44._12_4_ = auVar52._12_4_ * _UNK_150d5ac3c;
  if ((bVar26 & 1) != 0) {
    *pfVar1 = auVar44._0_4_;
  }
  if ((bVar26 & 2) != 0) {
    uVar42 = extractps(auVar44,1);
    *(undefined8 *)(pfVar1 + 1) = uVar42;
  }
  if ((bVar26 & 4) != 0) {
    uVar42 = extractps(auVar44,2);
    *(undefined8 *)(pfVar1 + 2) = uVar42;
  }
  if ((char)bVar26 < '\0') {
    uVar42 = extractps(auVar44,3);
    *(undefined8 *)(pfVar1 + 3) = uVar42;
  }
  return;
}

// ArrayComplexToPowerInterleaved_sse4 @ 140a384b0

void ArrayComplexToPowerInterleaved_sse4(longlong param_1,longlong param_2,uint param_3)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  uVar13 = param_3 & 0xfffffffc;
  if (0 < (int)uVar13) {
    uVar15 = 0;
    uVar16 = 0;
    do {
      pfVar1 = (float *)(param_1 + uVar15 * 2);
      fVar4 = pfVar1[2];
      fVar5 = pfVar1[3];
      pfVar2 = (float *)(param_1 + 0x10 + uVar15 * 2);
      fVar8 = *pfVar2;
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar2 = (float *)(param_2 + (uVar15 & 0xffffffff));
      *pfVar2 = pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1;
      pfVar2[1] = fVar5 * fVar5 + fVar4 * fVar4;
      pfVar2[2] = fVar9 * fVar9 + fVar8 * fVar8;
      pfVar2[3] = fVar11 * fVar11 + fVar10 * fVar10;
      uVar16 = uVar16 + 4;
      uVar15 = uVar15 + 0x10;
    } while (uVar16 < uVar13);
  }
  if ((int)uVar13 < (int)param_3) {
    uVar15 = (ulonglong)(int)uVar13;
    if ((param_3 & 1) != 0) {
      fVar4 = *(float *)(param_1 + (longlong)(int)(uVar13 * 2) * 4);
      fVar5 = *(float *)(param_1 + (longlong)(int)(uVar13 * 2 + 1) * 4);
      *(float *)(param_2 + uVar15 * 4) = fVar5 * fVar5 + fVar4 * fVar4;
      uVar15 = uVar15 | 1;
    }
    if (uVar13 != param_3 - 1) {
      lVar12 = (longlong)(int)param_3 - uVar15;
      lVar3 = param_2 + 4 + uVar15 * 4;
      iVar7 = (int)uVar15 * 2;
      lVar14 = 0;
      do {
        iVar6 = (int)lVar14;
        fVar4 = *(float *)(param_1 + (longlong)(iVar7 + iVar6) * 4);
        fVar5 = *(float *)(param_1 + (longlong)(iVar7 + 1 + iVar6) * 4);
        *(float *)(lVar3 + -4 + lVar14 * 2) = fVar5 * fVar5 + fVar4 * fVar4;
        fVar4 = *(float *)(param_1 + (longlong)(iVar7 + 2 + iVar6) * 4);
        fVar5 = *(float *)(param_1 + (longlong)(iVar7 + 3 + iVar6) * 4);
        *(float *)(lVar3 + lVar14 * 2) = fVar5 * fVar5 + fVar4 * fVar4;
        lVar14 = lVar14 + 4;
        lVar12 = lVar12 + -2;
      } while (lVar12 != 0);
    }
  }
  return;
}

// ArrayComplexToPower_sse4 @ 140a385e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayComplexToPower_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  byte bVar17;
  uint in_R10D;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar11 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar11 = param_4;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar18 = 0;
    uVar13 = 0;
    do {
      uVar16 = (ulonglong)uVar18;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar16);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_3 + uVar16);
      *pfVar3 = *pfVar2 * *pfVar2 + *pfVar1 * *pfVar1;
      pfVar3[1] = fVar8 * fVar8 + fVar5 * fVar5;
      pfVar3[2] = fVar9 * fVar9 + fVar6 * fVar6;
      pfVar3[3] = fVar10 * fVar10 + fVar7 * fVar7;
      uVar13 = uVar13 + 4;
      uVar18 = uVar18 + 0x10;
    } while (uVar13 < uVar11);
    in_R10D = uVar11;
    if ((int)param_4 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar19._4_4_ = iVar12;
  auVar19._0_4_ = iVar12;
  auVar19._8_4_ = iVar12;
  auVar19._12_4_ = iVar12;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar20._0_4_ = -(uint)(auVar19._0_4_ < (int)param_4);
  auVar20._4_4_ = -(uint)(auVar19._4_4_ < (int)param_4);
  auVar20._8_4_ = -(uint)(auVar19._8_4_ < (int)param_4);
  auVar20._12_4_ = -(uint)(auVar19._12_4_ < (int)param_4);
  lVar14 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R10D,auVar20);
  bVar17 = (char)((byte)uVar11 << 4) >> 4;
  if ((~(byte)uVar11 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar14);
    auVar20 = *(undefined1 (*) [16])(param_2 + lVar14);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar14);
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar20 = ZEXT416(*(uint *)(param_2 + lVar14));
    }
    if ((uVar11 & 2) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar14 + 4),0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar14 + 8),0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar20 = insertps(auVar20,*(undefined4 *)(param_2 + lVar14 + 0xc),0x30);
    }
  }
  auVar21._0_4_ = auVar20._0_4_ * auVar20._0_4_ + auVar19._0_4_ * auVar19._0_4_;
  auVar21._4_4_ = auVar20._4_4_ * auVar20._4_4_ + auVar19._4_4_ * auVar19._4_4_;
  auVar21._8_4_ = auVar20._8_4_ * auVar20._8_4_ + auVar19._8_4_ * auVar19._8_4_;
  auVar21._12_4_ = auVar20._12_4_ * auVar20._12_4_ + auVar19._12_4_ * auVar19._12_4_;
  if ((bVar17 & 1) != 0) {
    *(float *)(param_3 + lVar14) = auVar21._0_4_;
  }
  if ((bVar17 & 2) != 0) {
    uVar4 = extractps(auVar21,1);
    *(undefined8 *)(param_3 + 4 + lVar14) = uVar4;
  }
  if ((bVar17 & 4) != 0) {
    uVar4 = extractps(auVar21,2);
    *(undefined8 *)(param_3 + 8 + lVar14) = uVar4;
  }
  if (-1 < (char)bVar17) {
    return;
  }
  uVar4 = extractps(auVar21,3);
  *(undefined8 *)(param_3 + 0xc + lVar14) = uVar4;
  return;
}

// ArrayUnderflowClamp_sse4 @ 140a387c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayUnderflowClamp_sse4(longlong param_1,uint param_2,uint param_3)

{
  float *pfVar1;
  uint *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  float fVar17;
  float fVar19;
  float fVar20;
  undefined1 auVar18 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  fVar11 = _UNK_150d5668c;
  fVar10 = _UNK_150d56688;
  fVar9 = _UNK_150d56684;
  fVar8 = ___xmm_80800000808000008080000080800000;
  fVar21 = _UNK_1508be49c;
  fVar20 = _UNK_1508be498;
  fVar19 = _UNK_1508be494;
  fVar17 = ___xmm_00800000008000000080000000800000;
  uVar12 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar12 = param_2;
  }
  uVar12 = uVar12 & 0xfffffffc;
  if ((int)uVar12 < 1) {
    uVar14 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar16);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      puVar2 = (uint *)(param_1 + (ulonglong)uVar16);
      *puVar2 = ~-(uint)(fVar4 < fVar17 && fVar8 < fVar4) & (uint)fVar4;
      puVar2[1] = ~-(uint)(fVar5 < fVar19 && fVar9 < fVar5) & (uint)fVar5;
      puVar2[2] = ~-(uint)(fVar6 < fVar20 && fVar10 < fVar6) & (uint)fVar6;
      puVar2[3] = ~-(uint)(fVar7 < fVar21 && fVar11 < fVar7) & (uint)fVar7;
      uVar14 = uVar14 + 4;
      uVar16 = uVar16 + 0x10;
    } while (uVar14 < uVar12);
    param_3 = uVar12;
    if ((int)param_2 <= (int)uVar14) {
      return;
    }
  }
  iVar13 = (int)uVar14;
  auVar18._4_4_ = iVar13;
  auVar18._0_4_ = iVar13;
  auVar18._8_4_ = iVar13;
  auVar18._12_4_ = iVar13;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar22._0_4_ = -(uint)(auVar18._0_4_ < (int)param_2);
  auVar22._4_4_ = -(uint)(auVar18._4_4_ < (int)param_2);
  auVar22._8_4_ = -(uint)(auVar18._8_4_ < (int)param_2);
  auVar22._12_4_ = -(uint)(auVar18._12_4_ < (int)param_2);
  puVar2 = (uint *)(param_1 + (iVar13 << 2));
  uVar12 = movmskps(param_3,auVar22);
  bVar15 = (char)((byte)uVar12 << 4) >> 4;
  if ((~(byte)uVar12 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + (iVar13 << 2));
  }
  else {
    if ((uVar12 & 1) != 0) {
      auVar18 = ZEXT416(*puVar2);
    }
    if ((uVar12 & 2) != 0) {
      auVar18 = insertps(auVar18,puVar2[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar18 = insertps(auVar18,puVar2[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar18 = insertps(auVar18,puVar2[3],0x30);
    }
  }
  fVar17 = auVar18._0_4_;
  fVar19 = auVar18._4_4_;
  fVar20 = auVar18._8_4_;
  fVar21 = auVar18._12_4_;
  auVar23._0_4_ =
       ~-(uint)(___xmm_80800000808000008080000080800000 < fVar17 &&
               fVar17 < ___xmm_00800000008000000080000000800000) & (uint)fVar17;
  auVar23._4_4_ = ~-(uint)(_UNK_150d56684 < fVar19 && fVar19 < _UNK_1508be494) & (uint)fVar19;
  auVar23._8_4_ = ~-(uint)(_UNK_150d56688 < fVar20 && fVar20 < _UNK_1508be498) & (uint)fVar20;
  auVar23._12_4_ = ~-(uint)(_UNK_150d5668c < fVar21 && fVar21 < _UNK_1508be49c) & (uint)fVar21;
  if ((bVar15 & 1) != 0) {
    *puVar2 = auVar23._0_4_;
  }
  if ((bVar15 & 2) != 0) {
    uVar3 = extractps(auVar23,1);
    *(undefined8 *)(puVar2 + 1) = uVar3;
  }
  if ((bVar15 & 4) != 0) {
    uVar3 = extractps(auVar23,2);
    *(undefined8 *)(puVar2 + 2) = uVar3;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  uVar3 = extractps(auVar23,3);
  *(undefined8 *)(puVar2 + 3) = uVar3;
  return;
}

// ArrayRangeClamp_sse4 @ 140a38950

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayRangeClamp_sse4(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  uint in_R8D;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  uVar5 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  uVar5 = uVar5 & 0xfffffffc;
  if ((int)uVar5 < 1) {
    uVar7 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    auVar10._4_4_ = param_3;
    auVar10._0_4_ = param_3;
    auVar10._8_4_ = param_3;
    auVar10._12_4_ = param_3;
    auVar11._4_4_ = param_4;
    auVar11._0_4_ = param_4;
    auVar11._8_4_ = param_4;
    auVar11._12_4_ = param_4;
    uVar9 = 0;
    uVar7 = 0;
    do {
      auVar13 = maxps(*(undefined1 (*) [16])(param_1 + (ulonglong)uVar9),auVar10);
      auVar13 = minps(auVar13,auVar11);
      *(undefined1 (*) [16])(param_1 + (ulonglong)uVar9) = auVar13;
      uVar7 = uVar7 + 4;
      uVar9 = uVar9 + 0x10;
    } while (uVar7 < uVar5);
    in_R8D = uVar5;
    if ((int)param_2 <= (int)uVar7) {
      return;
    }
  }
  iVar6 = (int)uVar7;
  auVar13._4_4_ = iVar6;
  auVar13._0_4_ = iVar6;
  auVar13._8_4_ = iVar6;
  auVar13._12_4_ = iVar6;
  auVar13 = auVar13 | ___xmm_00000003000000020000000100000000;
  auVar12._0_4_ = -(uint)(auVar13._0_4_ < (int)param_2);
  auVar12._4_4_ = -(uint)(auVar13._4_4_ < (int)param_2);
  auVar12._8_4_ = -(uint)(auVar13._8_4_ < (int)param_2);
  auVar12._12_4_ = -(uint)(auVar13._12_4_ < (int)param_2);
  puVar1 = (uint *)(param_1 + (iVar6 << 2));
  uVar5 = movmskps(in_R8D,auVar12);
  bVar8 = (char)((byte)uVar5 << 4) >> 4;
  if ((~(byte)uVar5 & 9) == 0) {
    auVar13 = *(undefined1 (*) [16])(param_1 + (iVar6 << 2));
  }
  else {
    if ((uVar5 & 1) != 0) {
      auVar13 = ZEXT416(*puVar1);
    }
    if ((uVar5 & 2) != 0) {
      auVar13 = insertps(auVar13,puVar1[1],0x10);
    }
    if ((uVar5 & 4) != 0) {
      auVar13 = insertps(auVar13,puVar1[2],0x20);
    }
    if ((uVar5 & 8) != 0) {
      auVar13 = insertps(auVar13,puVar1[3],0x30);
    }
  }
  auVar3._4_4_ = param_3;
  auVar3._0_4_ = param_3;
  auVar3._8_4_ = param_3;
  auVar3._12_4_ = param_3;
  auVar10 = maxps(auVar13,auVar3);
  auVar4._4_4_ = param_4;
  auVar4._0_4_ = param_4;
  auVar4._8_4_ = param_4;
  auVar4._12_4_ = param_4;
  auVar10 = minps(auVar10,auVar4);
  if ((bVar8 & 1) != 0) {
    *puVar1 = auVar10._0_4_;
  }
  if ((bVar8 & 2) != 0) {
    uVar2 = extractps(auVar10,1);
    *(undefined8 *)(puVar1 + 1) = uVar2;
  }
  if ((bVar8 & 4) != 0) {
    uVar2 = extractps(auVar10,2);
    *(undefined8 *)(puVar1 + 2) = uVar2;
  }
  if (-1 < (char)bVar8) {
    return;
  }
  uVar2 = extractps(auVar10,3);
  *(undefined8 *)(puVar1 + 3) = uVar2;
  return;
}

// ArraySetToConstantInplace_sse4 @ 140a38ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArraySetToConstantInplace_sse4(longlong param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar4 = param_2;
  }
  if ((int)(uVar4 & 0xfffffffc) < 1) {
    uVar2 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar5 = 0;
    uVar2 = 0;
    do {
      puVar1 = (undefined4 *)(param_1 + (ulonglong)uVar5);
      *puVar1 = param_3;
      puVar1[1] = param_3;
      puVar1[2] = param_3;
      puVar1[3] = param_3;
      uVar2 = uVar2 + 4;
      uVar5 = uVar5 + 0x10;
    } while (uVar2 < (uVar4 & 0xfffffffc));
    if ((int)param_2 <= (int)uVar2) {
      return;
    }
  }
  uVar4 = (uint)uVar2;
  auVar6._0_4_ = -(uint)((int)(uVar4 | (uint)__xmm_00000003000000020000000100000000) < (int)param_2)
  ;
  auVar6._4_4_ = -(uint)((int)(uVar4 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_2)
  ;
  auVar6._8_4_ = -(uint)((int)(uVar4 | _UNK_150631e08) < (int)param_2);
  auVar6._12_4_ = -(uint)((int)(uVar4 | _UNK_150631e0c) < (int)param_2);
  lVar3 = (longlong)(int)(uVar4 << 2);
  uVar4 = movmskps(param_2,auVar6);
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(param_1 + lVar3) = param_3;
  }
  if ((uVar4 & 2) != 0) {
    *(undefined4 *)(param_1 + 4 + lVar3) = param_3;
  }
  if ((uVar4 & 4) != 0) {
    *(undefined4 *)(param_1 + 8 + lVar3) = param_3;
  }
  if (-1 < (char)((char)uVar4 << 4) >> 4) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc + lVar3) = param_3;
  return;
}

// ArrayWeightedSumTwoGain_sse4 @ 140a38b60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumTwoGain_sse4
               (longlong param_1,float param_2,longlong param_3,float param_4,longlong param_5,
               uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  uint in_R10D;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar14 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar14 = param_6;
  }
  uVar14 = uVar14 & 0xfffffffc;
  if ((int)uVar14 < 1) {
    uVar16 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    uVar17 = 0;
    uVar16 = 0;
    do {
      uVar12 = (ulonglong)uVar17;
      pfVar1 = (float *)(param_1 + uVar12);
      fVar20 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar12);
      fVar23 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_5 + uVar12);
      *pfVar3 = *pfVar2 * param_4 + *pfVar1 * param_2;
      pfVar3[1] = fVar23 * param_4 + fVar20 * param_2;
      pfVar3[2] = fVar8 * param_4 + fVar21 * param_2;
      pfVar3[3] = fVar9 * param_4 + fVar22 * param_2;
      uVar16 = uVar16 + 4;
      uVar17 = uVar17 + 0x10;
    } while (uVar16 < uVar14);
    in_R10D = uVar14;
    if ((int)param_6 <= (int)uVar16) {
      return;
    }
  }
  iVar15 = (int)uVar16;
  auVar18._4_4_ = iVar15;
  auVar18._0_4_ = iVar15;
  auVar18._8_4_ = iVar15;
  auVar18._12_4_ = iVar15;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar19._0_4_ = -(uint)(auVar18._0_4_ < (int)param_6);
  auVar19._4_4_ = -(uint)(auVar18._4_4_ < (int)param_6);
  auVar19._8_4_ = -(uint)(auVar18._8_4_ < (int)param_6);
  auVar19._12_4_ = -(uint)(auVar18._12_4_ < (int)param_6);
  lVar11 = (longlong)(iVar15 << 2);
  uVar14 = movmskps(in_R10D,auVar19);
  bVar13 = (char)((byte)uVar14 << 4) >> 4;
  if ((~(byte)uVar14 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + lVar11);
    auVar19 = *(undefined1 (*) [16])(param_3 + lVar11);
  }
  else {
    puVar10 = (uint *)(param_1 + lVar11);
    if ((uVar14 & 1) != 0) {
      auVar18 = ZEXT416(*puVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar18 = insertps(auVar18,puVar10[1],0x10);
    }
    if ((uVar14 & 4) != 0) {
      auVar18 = insertps(auVar18,puVar10[2],0x20);
    }
    if ((uVar14 & 8) != 0) {
      auVar18 = insertps(auVar18,puVar10[3],0x30);
    }
    if ((uVar14 & 1) != 0) {
      auVar19 = ZEXT416(*(uint *)(param_3 + lVar11));
    }
    if ((uVar14 & 2) != 0) {
      auVar19 = insertps(auVar19,*(undefined4 *)(param_3 + lVar11 + 4),0x10);
    }
    if ((uVar14 & 4) != 0) {
      auVar19 = insertps(auVar19,*(undefined4 *)(param_3 + lVar11 + 8),0x20);
    }
    if ((uVar14 & 8) != 0) {
      auVar19 = insertps(auVar19,*(undefined4 *)(param_3 + lVar11 + 0xc),0x30);
    }
  }
  fVar20 = param_4 * auVar19._0_4_ + param_2 * auVar18._0_4_;
  fVar21 = param_4 * auVar19._4_4_ + param_2 * auVar18._4_4_;
  fVar22 = param_4 * auVar19._8_4_ + param_2 * auVar18._8_4_;
  fVar23 = param_4 * auVar19._12_4_ + param_2 * auVar18._12_4_;
  if ((bVar13 & 1) != 0) {
    *(float *)(param_5 + lVar11) = fVar20;
  }
  if ((bVar13 & 2) != 0) {
    auVar7._4_4_ = fVar21;
    auVar7._0_4_ = fVar20;
    auVar7._8_4_ = fVar22;
    auVar7._12_4_ = fVar23;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(param_5 + 4 + lVar11) = uVar4;
  }
  if ((bVar13 & 4) != 0) {
    auVar6._4_4_ = fVar21;
    auVar6._0_4_ = fVar20;
    auVar6._8_4_ = fVar22;
    auVar6._12_4_ = fVar23;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(param_5 + 8 + lVar11) = uVar4;
  }
  if (-1 < (char)bVar13) {
    return;
  }
  auVar5._4_4_ = fVar21;
  auVar5._0_4_ = fVar20;
  auVar5._8_4_ = fVar22;
  auVar5._12_4_ = fVar23;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(param_5 + 0xc + lVar11) = uVar4;
  return;
}

// ArrayWeightedSumOneGain_sse4 @ 140a38d70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayWeightedSumOneGain_sse4
               (longlong param_1,float param_2,longlong param_3,longlong param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  longlong lVar10;
  uint *puVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint in_R10D;
  uint uVar17;
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  uVar13 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar13 = param_5;
  }
  uVar13 = uVar13 & 0xfffffffc;
  if ((int)uVar13 < 1) {
    uVar15 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    uVar17 = 0;
    uVar15 = 0;
    do {
      uVar16 = (ulonglong)uVar17;
      pfVar1 = (float *)(param_1 + uVar16);
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar2 = (float *)(param_3 + uVar16);
      fVar22 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_4 + uVar16);
      *pfVar3 = *pfVar2 + *pfVar1 * param_2;
      pfVar3[1] = fVar22 + fVar19 * param_2;
      pfVar3[2] = fVar8 + fVar20 * param_2;
      pfVar3[3] = fVar9 + fVar21 * param_2;
      uVar15 = uVar15 + 4;
      uVar17 = uVar17 + 0x10;
    } while (uVar15 < uVar13);
    in_R10D = uVar13;
    if ((int)param_5 <= (int)uVar15) {
      return;
    }
  }
  iVar14 = (int)uVar15;
  auVar18._4_4_ = iVar14;
  auVar18._0_4_ = iVar14;
  auVar18._8_4_ = iVar14;
  auVar18._12_4_ = iVar14;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar23._0_4_ = -(uint)(auVar18._0_4_ < (int)param_5);
  auVar23._4_4_ = -(uint)(auVar18._4_4_ < (int)param_5);
  auVar23._8_4_ = -(uint)(auVar18._8_4_ < (int)param_5);
  auVar23._12_4_ = -(uint)(auVar18._12_4_ < (int)param_5);
  lVar10 = (longlong)(iVar14 << 2);
  uVar13 = movmskps(in_R10D,auVar23);
  bVar12 = (char)((byte)uVar13 << 4) >> 4;
  if ((~(byte)uVar13 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + lVar10);
    auVar23 = *(undefined1 (*) [16])(param_3 + lVar10);
  }
  else {
    puVar11 = (uint *)(param_1 + lVar10);
    if ((uVar13 & 1) != 0) {
      auVar18 = ZEXT416(*puVar11);
    }
    if ((uVar13 & 2) != 0) {
      auVar18 = insertps(auVar18,puVar11[1],0x10);
    }
    if ((uVar13 & 4) != 0) {
      auVar18 = insertps(auVar18,puVar11[2],0x20);
    }
    if ((uVar13 & 8) != 0) {
      auVar18 = insertps(auVar18,puVar11[3],0x30);
    }
    if ((uVar13 & 1) != 0) {
      auVar23 = ZEXT416(*(uint *)(param_3 + lVar10));
    }
    if ((uVar13 & 2) != 0) {
      auVar23 = insertps(auVar23,*(undefined4 *)(param_3 + lVar10 + 4),0x10);
    }
    if ((uVar13 & 4) != 0) {
      auVar23 = insertps(auVar23,*(undefined4 *)(param_3 + lVar10 + 8),0x20);
    }
    if ((uVar13 & 8) != 0) {
      auVar23 = insertps(auVar23,*(undefined4 *)(param_3 + lVar10 + 0xc),0x30);
    }
  }
  fVar19 = param_2 * auVar18._0_4_ + auVar23._0_4_;
  fVar20 = param_2 * auVar18._4_4_ + auVar23._4_4_;
  fVar21 = param_2 * auVar18._8_4_ + auVar23._8_4_;
  fVar22 = param_2 * auVar18._12_4_ + auVar23._12_4_;
  if ((bVar12 & 1) != 0) {
    *(float *)(param_4 + lVar10) = fVar19;
  }
  if ((bVar12 & 2) != 0) {
    auVar7._4_4_ = fVar20;
    auVar7._0_4_ = fVar19;
    auVar7._8_4_ = fVar21;
    auVar7._12_4_ = fVar22;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(param_4 + 4 + lVar10) = uVar4;
  }
  if ((bVar12 & 4) != 0) {
    auVar6._4_4_ = fVar20;
    auVar6._0_4_ = fVar19;
    auVar6._8_4_ = fVar21;
    auVar6._12_4_ = fVar22;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(param_4 + 8 + lVar10) = uVar4;
  }
  if (-1 < (char)bVar12) {
    return;
  }
  auVar5._4_4_ = fVar20;
  auVar5._0_4_ = fVar19;
  auVar5._8_4_ = fVar21;
  auVar5._12_4_ = fVar22;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(param_4 + 0xc + lVar10) = uVar4;
  return;
}

// ArrayFade_sse4 @ 140a38f60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade_sse4(longlong param_1,uint param_2,float param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  uint in_R8D;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar20;
  int iVar21;
  undefined1 auVar19 [16];
  int iVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  
  uVar10 = _UNK_150631e0c;
  uVar9 = _UNK_150631e08;
  uVar8 = __xmm_00000003000000020000000100000000._4_4_;
  uVar16 = (uint)__xmm_00000003000000020000000100000000;
  fVar27 = (param_4 - param_3) / (float)(int)param_2;
  uVar11 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar11 = param_2;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar14 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar17 = 0;
    uVar14 = 0;
    do {
      uVar12 = (uint)uVar14;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar17);
      fVar24 = pfVar1[1];
      fVar25 = pfVar1[2];
      fVar26 = pfVar1[3];
      pfVar2 = (float *)(param_1 + (ulonglong)uVar17);
      *pfVar2 = *pfVar1 * ((float)(int)(uVar12 | uVar16) * fVar27 + param_3);
      pfVar2[1] = fVar24 * ((float)(int)(uVar12 | uVar8) * fVar27 + param_3);
      pfVar2[2] = fVar25 * ((float)(int)(uVar12 | uVar9) * fVar27 + param_3);
      pfVar2[3] = fVar26 * ((float)(int)(uVar12 | uVar10) * fVar27 + param_3);
      uVar14 = uVar14 + 4;
      uVar17 = uVar17 + 0x10;
    } while (uVar14 < uVar11);
    in_R8D = uVar11;
    if ((int)param_2 <= (int)uVar14) {
      return;
    }
  }
  iVar13 = (int)uVar14;
  auVar19._4_4_ = iVar13;
  auVar19._0_4_ = iVar13;
  auVar19._8_4_ = iVar13;
  auVar19._12_4_ = iVar13;
  auVar7._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar7._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar7._8_4_ = _UNK_150631e08;
  auVar7._12_4_ = _UNK_150631e0c;
  auVar19 = auVar19 | auVar7;
  iVar18 = auVar19._0_4_;
  iVar20 = auVar19._4_4_;
  iVar21 = auVar19._8_4_;
  iVar22 = auVar19._12_4_;
  pfVar1 = (float *)(param_1 + (iVar13 << 2));
  auVar23._0_4_ = -(uint)(iVar18 < (int)param_2);
  auVar23._4_4_ = -(uint)(iVar20 < (int)param_2);
  auVar23._8_4_ = -(uint)(iVar21 < (int)param_2);
  auVar23._12_4_ = -(uint)(iVar22 < (int)param_2);
  uVar16 = movmskps(in_R8D,auVar23);
  bVar15 = (char)((byte)uVar16 << 4) >> 4;
  if ((~(byte)uVar16 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + (iVar13 << 2));
  }
  else {
    if ((uVar16 & 1) != 0) {
      auVar19 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar16 & 2) != 0) {
      auVar19 = insertps(auVar19,pfVar1[1],0x10);
    }
    if ((uVar16 & 4) != 0) {
      auVar19 = insertps(auVar19,pfVar1[2],0x20);
    }
    if ((uVar16 & 8) != 0) {
      auVar19 = insertps(auVar19,pfVar1[3],0x30);
    }
  }
  fVar24 = (param_3 + fVar27 * (float)iVar18) * auVar19._0_4_;
  fVar25 = (param_3 + fVar27 * (float)iVar20) * auVar19._4_4_;
  fVar26 = (param_3 + fVar27 * (float)iVar21) * auVar19._8_4_;
  fVar27 = (param_3 + fVar27 * (float)iVar22) * auVar19._12_4_;
  if ((bVar15 & 1) != 0) {
    *pfVar1 = fVar24;
  }
  if ((bVar15 & 2) != 0) {
    auVar6._4_4_ = fVar25;
    auVar6._0_4_ = fVar24;
    auVar6._8_4_ = fVar26;
    auVar6._12_4_ = fVar27;
    uVar3 = extractps(auVar6,1);
    *(undefined8 *)(pfVar1 + 1) = uVar3;
  }
  if ((bVar15 & 4) != 0) {
    auVar5._4_4_ = fVar25;
    auVar5._0_4_ = fVar24;
    auVar5._8_4_ = fVar26;
    auVar5._12_4_ = fVar27;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(pfVar1 + 2) = uVar3;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  auVar4._4_4_ = fVar25;
  auVar4._0_4_ = fVar24;
  auVar4._8_4_ = fVar26;
  auVar4._12_4_ = fVar27;
  uVar3 = extractps(auVar4,3);
  *(undefined8 *)(pfVar1 + 3) = uVar3;
  return;
}

// ArrayFade2_sse4 @ 140a390f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFade2_sse4(longlong param_1,uint param_2,float param_3,float param_4,longlong param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  uint in_R9D;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar22;
  int iVar23;
  undefined1 auVar21 [16];
  int iVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  uVar10 = _UNK_150631e0c;
  uVar9 = _UNK_150631e08;
  uVar8 = __xmm_00000003000000020000000100000000._4_4_;
  uVar18 = (uint)__xmm_00000003000000020000000100000000;
  fVar29 = (param_4 - param_3) / (float)(int)param_2;
  uVar14 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar14 = param_2;
  }
  uVar14 = uVar14 & 0xfffffffc;
  if ((int)uVar14 < 1) {
    uVar17 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar19 = 0;
    uVar17 = 0;
    do {
      uVar15 = (uint)uVar17;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar19);
      fVar26 = pfVar1[1];
      fVar27 = pfVar1[2];
      fVar28 = pfVar1[3];
      pfVar2 = (float *)(param_5 + (ulonglong)uVar19);
      *pfVar2 = *pfVar1 * ((float)(int)(uVar15 | uVar18) * fVar29 + param_3);
      pfVar2[1] = fVar26 * ((float)(int)(uVar15 | uVar8) * fVar29 + param_3);
      pfVar2[2] = fVar27 * ((float)(int)(uVar15 | uVar9) * fVar29 + param_3);
      pfVar2[3] = fVar28 * ((float)(int)(uVar15 | uVar10) * fVar29 + param_3);
      uVar17 = uVar17 + 4;
      uVar19 = uVar19 + 0x10;
    } while (uVar17 < uVar14);
    in_R9D = uVar14;
    if ((int)param_2 <= (int)uVar17) {
      return;
    }
  }
  iVar16 = (int)uVar17;
  auVar21._4_4_ = iVar16;
  auVar21._0_4_ = iVar16;
  auVar21._8_4_ = iVar16;
  auVar21._12_4_ = iVar16;
  auVar7._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar7._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar7._8_4_ = _UNK_150631e08;
  auVar7._12_4_ = _UNK_150631e0c;
  auVar21 = auVar21 | auVar7;
  iVar20 = auVar21._0_4_;
  iVar22 = auVar21._4_4_;
  iVar23 = auVar21._8_4_;
  iVar24 = auVar21._12_4_;
  lVar12 = (longlong)(iVar16 << 2);
  auVar25._0_4_ = -(uint)(iVar20 < (int)param_2);
  auVar25._4_4_ = -(uint)(iVar22 < (int)param_2);
  auVar25._8_4_ = -(uint)(iVar23 < (int)param_2);
  auVar25._12_4_ = -(uint)(iVar24 < (int)param_2);
  uVar18 = movmskps(in_R9D,auVar25);
  bVar13 = (char)((byte)uVar18 << 4) >> 4;
  if ((~(byte)uVar18 & 9) == 0) {
    auVar21 = *(undefined1 (*) [16])(param_1 + lVar12);
  }
  else {
    puVar11 = (uint *)(param_1 + lVar12);
    if ((uVar18 & 1) != 0) {
      auVar21 = ZEXT416(*puVar11);
    }
    if ((uVar18 & 2) != 0) {
      auVar21 = insertps(auVar21,puVar11[1],0x10);
    }
    if ((uVar18 & 4) != 0) {
      auVar21 = insertps(auVar21,puVar11[2],0x20);
    }
    if ((uVar18 & 8) != 0) {
      auVar21 = insertps(auVar21,puVar11[3],0x30);
    }
  }
  fVar26 = (param_3 + fVar29 * (float)iVar20) * auVar21._0_4_;
  fVar27 = (param_3 + fVar29 * (float)iVar22) * auVar21._4_4_;
  fVar28 = (param_3 + fVar29 * (float)iVar23) * auVar21._8_4_;
  fVar29 = (param_3 + fVar29 * (float)iVar24) * auVar21._12_4_;
  if ((bVar13 & 1) != 0) {
    *(float *)(param_5 + lVar12) = fVar26;
  }
  if ((bVar13 & 2) != 0) {
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar26;
    auVar6._8_4_ = fVar28;
    auVar6._12_4_ = fVar29;
    uVar3 = extractps(auVar6,1);
    *(undefined8 *)(param_5 + 4 + lVar12) = uVar3;
  }
  if ((bVar13 & 4) != 0) {
    auVar5._4_4_ = fVar27;
    auVar5._0_4_ = fVar26;
    auVar5._8_4_ = fVar28;
    auVar5._12_4_ = fVar29;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(param_5 + 8 + lVar12) = uVar3;
  }
  if (-1 < (char)bVar13) {
    return;
  }
  auVar4._4_4_ = fVar27;
  auVar4._0_4_ = fVar26;
  auVar4._8_4_ = fVar28;
  auVar4._12_4_ = fVar29;
  uVar3 = extractps(auVar4,3);
  *(undefined8 *)(param_5 + 0xc + lVar12) = uVar3;
  return;
}

// ArrayMixInWithGain_sse4 @ 140a392b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithGain_sse4(longlong param_1,longlong param_2,uint param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint in_R9D;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  uVar11 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar11 = param_3;
  }
  uVar11 = uVar11 & 0xfffffffc;
  if ((int)uVar11 < 1) {
    uVar13 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar15 = 0;
    uVar13 = 0;
    do {
      uVar17 = (ulonglong)uVar15;
      pfVar1 = (float *)(param_1 + uVar17);
      fVar20 = pfVar1[1];
      fVar21 = pfVar1[2];
      fVar22 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar17);
      fVar23 = pfVar2[1];
      fVar8 = pfVar2[2];
      fVar9 = pfVar2[3];
      pfVar3 = (float *)(param_2 + uVar17);
      *pfVar3 = *pfVar2 + *pfVar1 * param_4;
      pfVar3[1] = fVar23 + fVar20 * param_4;
      pfVar3[2] = fVar8 + fVar21 * param_4;
      pfVar3[3] = fVar9 + fVar22 * param_4;
      uVar13 = uVar13 + 4;
      uVar15 = uVar15 + 0x10;
    } while (uVar13 < uVar11);
    in_R9D = uVar11;
    if ((int)param_3 <= (int)uVar13) {
      return;
    }
  }
  iVar12 = (int)uVar13;
  auVar18._4_4_ = iVar12;
  auVar18._0_4_ = iVar12;
  auVar18._8_4_ = iVar12;
  auVar18._12_4_ = iVar12;
  auVar18 = auVar18 | ___xmm_00000003000000020000000100000000;
  auVar19._0_4_ = -(uint)(auVar18._0_4_ < (int)param_3);
  auVar19._4_4_ = -(uint)(auVar18._4_4_ < (int)param_3);
  auVar19._8_4_ = -(uint)(auVar18._8_4_ < (int)param_3);
  auVar19._12_4_ = -(uint)(auVar18._12_4_ < (int)param_3);
  lVar16 = (longlong)(iVar12 << 2);
  uVar11 = movmskps(in_R9D,auVar19);
  bVar10 = (char)((byte)uVar11 << 4) >> 4;
  pfVar1 = (float *)(param_2 + lVar16);
  if ((~(byte)uVar11 & 9) == 0) {
    auVar18 = *(undefined1 (*) [16])(param_1 + lVar16);
    auVar19 = *(undefined1 (*) [16])(param_2 + lVar16);
  }
  else {
    puVar14 = (uint *)(param_1 + lVar16);
    if ((uVar11 & 1) != 0) {
      auVar18 = ZEXT416(*puVar14);
    }
    if ((uVar11 & 2) != 0) {
      auVar18 = insertps(auVar18,puVar14[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar18 = insertps(auVar18,puVar14[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar18 = insertps(auVar18,puVar14[3],0x30);
    }
    if ((uVar11 & 1) != 0) {
      auVar19 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar11 & 2) != 0) {
      auVar19 = insertps(auVar19,pfVar1[1],0x10);
    }
    if ((uVar11 & 4) != 0) {
      auVar19 = insertps(auVar19,pfVar1[2],0x20);
    }
    if ((uVar11 & 8) != 0) {
      auVar19 = insertps(auVar19,pfVar1[3],0x30);
    }
  }
  fVar20 = param_4 * auVar18._0_4_ + auVar19._0_4_;
  fVar21 = param_4 * auVar18._4_4_ + auVar19._4_4_;
  fVar22 = param_4 * auVar18._8_4_ + auVar19._8_4_;
  fVar23 = param_4 * auVar18._12_4_ + auVar19._12_4_;
  if ((bVar10 & 1) != 0) {
    *pfVar1 = fVar20;
  }
  if ((bVar10 & 2) != 0) {
    auVar7._4_4_ = fVar21;
    auVar7._0_4_ = fVar20;
    auVar7._8_4_ = fVar22;
    auVar7._12_4_ = fVar23;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar10 & 4) != 0) {
    auVar6._4_4_ = fVar21;
    auVar6._0_4_ = fVar20;
    auVar6._8_4_ = fVar22;
    auVar6._12_4_ = fVar23;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar10) {
    return;
  }
  auVar5._4_4_ = fVar21;
  auVar5._0_4_ = fVar20;
  auVar5._8_4_ = fVar22;
  auVar5._12_4_ = fVar23;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArrayMixIn_sse4 @ 140a39480

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixIn_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  uVar12 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar12 = param_3;
  }
  uVar12 = uVar12 & 0xfffffffc;
  if ((int)uVar12 < 1) {
    uVar14 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    uVar14 = 0;
    do {
      uVar18 = (ulonglong)uVar16;
      pfVar1 = (float *)(param_1 + uVar18);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar18);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_2 + uVar18);
      *pfVar3 = *pfVar2 + *pfVar1;
      pfVar3[1] = fVar8 + fVar5;
      pfVar3[2] = fVar9 + fVar6;
      pfVar3[3] = fVar10 + fVar7;
      uVar14 = uVar14 + 4;
      uVar16 = uVar16 + 0x10;
    } while (uVar14 < uVar12);
    param_4 = uVar12;
    if ((int)param_3 <= (int)uVar14) {
      return;
    }
  }
  iVar13 = (int)uVar14;
  auVar19._4_4_ = iVar13;
  auVar19._0_4_ = iVar13;
  auVar19._8_4_ = iVar13;
  auVar19._12_4_ = iVar13;
  auVar19 = auVar19 | ___xmm_00000003000000020000000100000000;
  auVar21._0_4_ = -(uint)(auVar19._0_4_ < (int)param_3);
  auVar21._4_4_ = -(uint)(auVar19._4_4_ < (int)param_3);
  auVar21._8_4_ = -(uint)(auVar19._8_4_ < (int)param_3);
  auVar21._12_4_ = -(uint)(auVar19._12_4_ < (int)param_3);
  lVar17 = (longlong)(iVar13 << 2);
  uVar12 = movmskps(param_4,auVar21);
  bVar11 = (char)((byte)uVar12 << 4) >> 4;
  pfVar1 = (float *)(param_2 + lVar17);
  if ((~(byte)uVar12 & 9) == 0) {
    auVar19 = *(undefined1 (*) [16])(param_1 + lVar17);
    auVar21 = *(undefined1 (*) [16])(param_2 + lVar17);
  }
  else {
    puVar15 = (uint *)(param_1 + lVar17);
    if ((uVar12 & 1) != 0) {
      auVar19 = ZEXT416(*puVar15);
    }
    if ((uVar12 & 2) != 0) {
      auVar19 = insertps(auVar19,puVar15[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar19 = insertps(auVar19,puVar15[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar19 = insertps(auVar19,puVar15[3],0x30);
    }
    if ((uVar12 & 1) != 0) {
      auVar21 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar12 & 2) != 0) {
      auVar21 = insertps(auVar21,pfVar1[1],0x10);
    }
    if ((uVar12 & 4) != 0) {
      auVar21 = insertps(auVar21,pfVar1[2],0x20);
    }
    if ((uVar12 & 8) != 0) {
      auVar21 = insertps(auVar21,pfVar1[3],0x30);
    }
  }
  auVar20._0_4_ = auVar19._0_4_ + auVar21._0_4_;
  auVar20._4_4_ = auVar19._4_4_ + auVar21._4_4_;
  auVar20._8_4_ = auVar19._8_4_ + auVar21._8_4_;
  auVar20._12_4_ = auVar19._12_4_ + auVar21._12_4_;
  if ((bVar11 & 1) != 0) {
    *pfVar1 = auVar20._0_4_;
  }
  if ((bVar11 & 2) != 0) {
    uVar4 = extractps(auVar20,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar11 & 4) != 0) {
    uVar4 = extractps(auVar20,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar11) {
    return;
  }
  uVar4 = extractps(auVar20,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// ArrayMixInWithDelta_sse4 @ 140a39650

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayMixInWithDelta_sse4
               (longlong param_1,longlong param_2,uint param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint *puVar20;
  uint in_R9D;
  uint uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  
  uVar14 = _UNK_150631e0c;
  uVar13 = _UNK_150631e08;
  uVar12 = __xmm_00000003000000020000000100000000._4_4_;
  uVar21 = (uint)__xmm_00000003000000020000000100000000;
  fVar25 = (param_5 - param_4) / (float)(int)param_3;
  uVar16 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar16 = param_3;
  }
  uVar16 = uVar16 & 0xfffffffc;
  if ((int)uVar16 < 1) {
    uVar19 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar22 = 0;
    uVar19 = 0;
    do {
      uVar17 = (uint)uVar19;
      uVar24 = (ulonglong)uVar22;
      pfVar1 = (float *)(param_1 + uVar24);
      fVar29 = pfVar1[1];
      fVar30 = pfVar1[2];
      fVar31 = pfVar1[3];
      pfVar2 = (float *)(param_2 + uVar24);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(param_2 + uVar24);
      *pfVar3 = *pfVar2 + *pfVar1 * ((float)(int)(uVar17 | uVar21) * fVar25 + param_4);
      pfVar3[1] = fVar8 + fVar29 * ((float)(int)(uVar17 | uVar12) * fVar25 + param_4);
      pfVar3[2] = fVar9 + fVar30 * ((float)(int)(uVar17 | uVar13) * fVar25 + param_4);
      pfVar3[3] = fVar10 + fVar31 * ((float)(int)(uVar17 | uVar14) * fVar25 + param_4);
      uVar19 = uVar19 + 4;
      uVar22 = uVar22 + 0x10;
    } while (uVar19 < uVar16);
    in_R9D = uVar16;
    if ((int)param_3 <= (int)uVar19) {
      return;
    }
  }
  iVar18 = (int)uVar19;
  auVar27._4_4_ = iVar18;
  auVar27._0_4_ = iVar18;
  auVar27._8_4_ = iVar18;
  auVar27._12_4_ = iVar18;
  auVar11._4_4_ = __xmm_00000003000000020000000100000000._4_4_;
  auVar11._0_4_ = (uint)__xmm_00000003000000020000000100000000;
  auVar11._8_4_ = _UNK_150631e08;
  auVar11._12_4_ = _UNK_150631e0c;
  auVar27 = auVar27 | auVar11;
  auVar26._0_4_ = fVar25 * (float)auVar27._0_4_;
  auVar26._4_4_ = fVar25 * (float)auVar27._4_4_;
  auVar26._8_4_ = fVar25 * (float)auVar27._8_4_;
  auVar26._12_4_ = fVar25 * (float)auVar27._12_4_;
  fVar25 = param_4 + auVar26._0_4_;
  fVar29 = param_4 + auVar26._4_4_;
  fVar30 = param_4 + auVar26._8_4_;
  param_4 = param_4 + auVar26._12_4_;
  lVar23 = (longlong)(iVar18 << 2);
  auVar28._0_4_ = -(uint)(auVar27._0_4_ < (int)param_3);
  auVar28._4_4_ = -(uint)(auVar27._4_4_ < (int)param_3);
  auVar28._8_4_ = -(uint)(auVar27._8_4_ < (int)param_3);
  auVar28._12_4_ = -(uint)(auVar27._12_4_ < (int)param_3);
  uVar21 = movmskps(in_R9D,auVar28);
  bVar15 = (char)((byte)uVar21 << 4) >> 4;
  pfVar1 = (float *)(param_2 + lVar23);
  if ((~(byte)uVar21 & 9) == 0) {
    auVar26 = *(undefined1 (*) [16])(param_1 + lVar23);
    auVar27 = *(undefined1 (*) [16])(param_2 + lVar23);
  }
  else {
    puVar20 = (uint *)(param_1 + lVar23);
    if ((uVar21 & 1) != 0) {
      auVar26 = ZEXT416(*puVar20);
    }
    if ((uVar21 & 2) != 0) {
      auVar26 = insertps(auVar26,puVar20[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar26 = insertps(auVar26,puVar20[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar26 = insertps(auVar26,puVar20[3],0x30);
    }
    if ((uVar21 & 1) != 0) {
      auVar27 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar21 & 2) != 0) {
      auVar27 = insertps(auVar27,pfVar1[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar27 = insertps(auVar27,pfVar1[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar27 = insertps(auVar27,pfVar1[3],0x30);
    }
  }
  fVar25 = fVar25 * auVar26._0_4_ + auVar27._0_4_;
  fVar29 = fVar29 * auVar26._4_4_ + auVar27._4_4_;
  fVar30 = fVar30 * auVar26._8_4_ + auVar27._8_4_;
  fVar31 = param_4 * auVar26._12_4_ + auVar27._12_4_;
  if ((bVar15 & 1) != 0) {
    *pfVar1 = fVar25;
  }
  if ((bVar15 & 2) != 0) {
    auVar7._4_4_ = fVar29;
    auVar7._0_4_ = fVar25;
    auVar7._8_4_ = fVar30;
    auVar7._12_4_ = fVar31;
    uVar4 = extractps(auVar7,1);
    *(undefined8 *)(pfVar1 + 1) = uVar4;
  }
  if ((bVar15 & 4) != 0) {
    auVar6._4_4_ = fVar29;
    auVar6._0_4_ = fVar25;
    auVar6._8_4_ = fVar30;
    auVar6._12_4_ = fVar31;
    uVar4 = extractps(auVar6,2);
    *(undefined8 *)(pfVar1 + 2) = uVar4;
  }
  if (-1 < (char)bVar15) {
    return;
  }
  auVar5._4_4_ = fVar29;
  auVar5._0_4_ = fVar25;
  auVar5._8_4_ = fVar30;
  auVar5._12_4_ = fVar31;
  uVar4 = extractps(auVar5,3);
  *(undefined8 *)(pfVar1 + 3) = uVar4;
  return;
}

// TransformArrayRow_sse4 @ 140a39890

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformArrayRow_sse4
               (longlong param_1,longlong param_2,longlong param_3,int param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  
  uVar3 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar3 = param_5;
  }
  if ((int)(uVar3 & 0xfffffffc) < 1) {
    uVar7 = 0;
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    if ((int)param_5 < 1) goto LAB_140a39979;
  }
  else {
    fVar10 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    uVar5 = 0;
    uVar7 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar5);
      pfVar2 = (float *)(param_2 + (ulonglong)uVar5);
      fVar10 = fVar10 + *pfVar2 * *pfVar1;
      fVar11 = fVar11 + pfVar2[1] * pfVar1[1];
      fVar12 = fVar12 + pfVar2[2] * pfVar1[2];
      fVar13 = fVar13 + pfVar2[3] * pfVar1[3];
      uVar7 = uVar7 + 4;
      uVar5 = uVar5 + 0x10;
    } while (uVar7 < (uVar3 & 0xfffffffc));
    if ((int)param_5 <= (int)uVar7) goto LAB_140a39979;
  }
  iVar6 = (int)uVar7;
  auVar14._4_4_ = iVar6;
  auVar14._0_4_ = iVar6;
  auVar14._8_4_ = iVar6;
  auVar14._12_4_ = iVar6;
  auVar14 = auVar14 | ___xmm_00000003000000020000000100000000;
  auVar9._0_4_ = -(uint)(auVar14._0_4_ < (int)param_5);
  auVar9._4_4_ = -(uint)(auVar14._4_4_ < (int)param_5);
  auVar9._8_4_ = -(uint)(auVar14._8_4_ < (int)param_5);
  auVar9._12_4_ = -(uint)(auVar14._12_4_ < (int)param_5);
  lVar8 = (longlong)(iVar6 << 2);
  uVar3 = movmskps(param_5,auVar9);
  if ((~(byte)uVar3 & 9) == 0) {
    auVar14 = *(undefined1 (*) [16])(param_1 + lVar8);
    in_XMM3 = *(undefined1 (*) [16])(param_2 + lVar8);
  }
  else {
    puVar4 = (uint *)(param_1 + lVar8);
    if ((uVar3 & 1) != 0) {
      auVar14 = ZEXT416(*puVar4);
    }
    if ((uVar3 & 2) != 0) {
      auVar14 = insertps(auVar14,puVar4[1],0x10);
    }
    if ((uVar3 & 4) != 0) {
      auVar14 = insertps(auVar14,puVar4[2],0x20);
    }
    if ((uVar3 & 8) != 0) {
      auVar14 = insertps(auVar14,puVar4[3],0x30);
    }
    if ((uVar3 & 1) != 0) {
      in_XMM3 = ZEXT416(*(uint *)(param_2 + lVar8));
    }
    if ((uVar3 & 2) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(param_2 + lVar8 + 4),0x10);
    }
    if ((uVar3 & 4) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(param_2 + lVar8 + 8),0x20);
    }
    if ((uVar3 & 8) != 0) {
      in_XMM3 = insertps(in_XMM3,*(undefined4 *)(param_2 + lVar8 + 0xc),0x30);
    }
  }
  auVar15._0_4_ = auVar14._0_4_ * in_XMM3._0_4_;
  auVar15._4_4_ = auVar14._4_4_ * in_XMM3._4_4_;
  auVar15._8_4_ = auVar14._8_4_ * in_XMM3._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * in_XMM3._12_4_;
  auVar14 = blendvps(___xmm_80000000800000008000000080000000,auVar15,auVar9);
  fVar10 = fVar10 + auVar14._0_4_;
  fVar11 = fVar11 + auVar14._4_4_;
  fVar12 = fVar12 + auVar14._8_4_;
  fVar13 = fVar13 + auVar14._12_4_;
LAB_140a39979:
  *(float *)(param_3 + (longlong)param_4 * 4) =
       fVar10 + fVar11 + fVar12 + fVar13 + *(float *)(param_3 + (longlong)param_4 * 4);
  return;
}

// ArrayFloatToPcm16_sse4 @ 140a399e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayFloatToPcm16_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  fVar5 = _UNK_150d5666c;
  fVar4 = _UNK_150d56668;
  fVar3 = _UNK_150d56664;
  fVar2 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  uVar7 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar7 = param_3;
  }
  uVar7 = uVar7 & 0xfffffffc;
  if ((int)uVar7 < 1) {
    uVar9 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar12 = 0;
    uVar9 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar12);
      auVar15._0_4_ = (int)(*pfVar1 * fVar2);
      auVar15._4_4_ = (int)(pfVar1[1] * fVar3);
      auVar15._8_4_ = (int)(pfVar1[2] * fVar4);
      auVar15._12_4_ = (int)(pfVar1[3] * fVar5);
      auVar15 = packssdw(auVar15,auVar15);
      *(longlong *)(param_2 + uVar9 * 2) = auVar15._0_8_;
      uVar9 = uVar9 + 4;
      uVar12 = uVar12 + 0x10;
    } while (uVar9 < uVar7);
    param_4 = uVar7;
    if ((int)param_3 <= (int)uVar9) {
      return;
    }
  }
  iVar8 = (int)uVar9;
  auVar13._4_4_ = iVar8;
  auVar13._0_4_ = iVar8;
  auVar13._8_4_ = iVar8;
  auVar13._12_4_ = iVar8;
  auVar13 = auVar13 | ___xmm_00000003000000020000000100000000;
  auVar16._0_4_ = -(uint)(auVar13._0_4_ < (int)param_3);
  auVar16._4_4_ = -(uint)(auVar13._4_4_ < (int)param_3);
  auVar16._8_4_ = -(uint)(auVar13._8_4_ < (int)param_3);
  auVar16._12_4_ = -(uint)(auVar13._12_4_ < (int)param_3);
  uVar7 = movmskps(param_4,auVar16);
  bVar6 = (char)((byte)uVar7 << 4) >> 4;
  if ((~(byte)uVar7 & 9) == 0) {
    auVar13 = *(undefined1 (*) [16])(param_1 + (iVar8 << 2));
  }
  else {
    puVar10 = (uint *)(param_1 + (iVar8 << 2));
    if ((uVar7 & 1) != 0) {
      auVar13 = ZEXT416(*puVar10);
    }
    if ((uVar7 & 2) != 0) {
      auVar13 = insertps(auVar13,puVar10[1],0x10);
    }
    if ((uVar7 & 4) != 0) {
      auVar13 = insertps(auVar13,puVar10[2],0x20);
    }
    if ((uVar7 & 8) != 0) {
      auVar13 = insertps(auVar13,puVar10[3],0x30);
    }
  }
  auVar14._0_4_ = (int)(auVar13._0_4_ * ___xmm_46fffe0046fffe0046fffe0046fffe00);
  auVar14._4_4_ = (int)(auVar13._4_4_ * _UNK_150d56664);
  auVar14._8_4_ = (int)(auVar13._8_4_ * _UNK_150d56668);
  auVar14._12_4_ = (int)(auVar13._12_4_ * _UNK_150d5666c);
  auVar15 = packssdw(auVar14,auVar14);
  lVar11 = (longlong)(iVar8 * 2);
  if ((bVar6 & 1) != 0) {
    *(short *)(param_2 + lVar11) = auVar15._0_2_;
  }
  if ((bVar6 & 2) != 0) {
    *(short *)(param_2 + 2 + lVar11) = auVar15._2_2_;
  }
  if ((bVar6 & 4) != 0) {
    *(short *)(param_2 + 4 + lVar11) = auVar15._4_2_;
  }
  if (-1 < (char)bVar6) {
    return;
  }
  *(short *)(param_2 + 6 + lVar11) = auVar15._6_2_;
  return;
}

// ArrayPcm16ToFloat_sse4 @ 140a39b50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayPcm16ToFloat_sse4(longlong param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ushort *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  fVar5 = _UNK_150d565ec;
  fVar4 = _UNK_150d565e8;
  fVar3 = _UNK_150d565e4;
  fVar2 = ___xmm_38000100380001003800010038000100;
  uVar7 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar7 = param_3;
  }
  uVar7 = uVar7 & 0xfffffffc;
  if ((int)uVar7 < 1) {
    uVar9 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    uVar12 = 0;
    uVar9 = 0;
    do {
      auVar15 = pmovsxwd(in_XMM1,*(undefined8 *)(param_1 + uVar9 * 2));
      in_XMM1._0_4_ = (float)auVar15._0_4_ * fVar2;
      in_XMM1._4_4_ = (float)auVar15._4_4_ * fVar3;
      in_XMM1._8_4_ = (float)auVar15._8_4_ * fVar4;
      in_XMM1._12_4_ = (float)auVar15._12_4_ * fVar5;
      *(undefined1 (*) [16])(param_2 + (ulonglong)uVar12) = in_XMM1;
      uVar9 = uVar9 + 4;
      uVar12 = uVar12 + 0x10;
    } while (uVar9 < uVar7);
    param_4 = uVar7;
    if ((int)param_3 <= (int)uVar9) {
      return;
    }
  }
  iVar8 = (int)uVar9;
  auVar13._4_4_ = iVar8;
  auVar13._0_4_ = iVar8;
  auVar13._8_4_ = iVar8;
  auVar13._12_4_ = iVar8;
  auVar15 = auVar13 | ___xmm_00000003000000020000000100000000;
  auVar16._0_4_ = -(uint)(auVar15._0_4_ < (int)param_3);
  auVar16._4_4_ = -(uint)(auVar15._4_4_ < (int)param_3);
  auVar16._8_4_ = -(uint)(auVar15._8_4_ < (int)param_3);
  auVar16._12_4_ = -(uint)(auVar15._12_4_ < (int)param_3);
  uVar7 = movmskps(param_4,auVar16);
  bVar6 = (char)((byte)uVar7 << 4) >> 4;
  if ((~(byte)uVar7 & 9) == 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulonglong *)(param_1 + iVar8 * 2);
  }
  else {
    puVar10 = (ushort *)(param_1 + iVar8 * 2);
    if ((uVar7 & 1) != 0) {
      auVar15 = ZEXT216(*puVar10);
    }
    if ((uVar7 & 2) != 0) {
      auVar17._8_8_ = auVar15._8_8_;
      auVar17._0_8_ = auVar15._0_8_ & 0xffffffff0000ffff | (ulonglong)puVar10[1] << 0x10;
      auVar15 = pblendw(auVar15,auVar17,0xf3);
    }
    if ((uVar7 & 4) != 0) {
      auVar18._8_8_ = auVar15._8_8_;
      auVar18._0_8_ = auVar15._0_8_ & 0xffff0000ffffffff | (ulonglong)puVar10[2] << 0x20;
      auVar15 = pblendw(auVar15,auVar18,0xf7);
    }
    if ((uVar7 & 8) != 0) {
      auVar15._0_8_ = auVar15._0_8_ & 0xffffffffffff | (ulonglong)puVar10[3] << 0x30;
    }
  }
  auVar15 = pmovsxwd(auVar15,auVar15);
  auVar14._0_4_ = (float)auVar15._0_4_ * ___xmm_38000100380001003800010038000100;
  auVar14._4_4_ = (float)auVar15._4_4_ * _UNK_150d565e4;
  auVar14._8_4_ = (float)auVar15._8_4_ * _UNK_150d565e8;
  auVar14._12_4_ = (float)auVar15._12_4_ * _UNK_150d565ec;
  lVar11 = (longlong)(iVar8 * 4);
  if ((bVar6 & 1) != 0) {
    *(float *)(param_2 + lVar11) = auVar14._0_4_;
  }
  if ((bVar6 & 2) != 0) {
    uVar1 = extractps(auVar14,1);
    *(undefined8 *)(param_2 + 4 + lVar11) = uVar1;
  }
  if ((bVar6 & 4) != 0) {
    uVar1 = extractps(auVar14,2);
    *(undefined8 *)(param_2 + 8 + lVar11) = uVar1;
  }
  if (-1 < (char)bVar6) {
    return;
  }
  uVar1 = extractps(auVar14,3);
  *(undefined8 *)(param_2 + 0xc + lVar11) = uVar1;
  return;
}

// ArrayAPFLongDelayProcess_sse4 @ 140a39ce0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayAPFLongDelayProcess_sse4
               (longlong param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5,
               float param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  byte bVar18;
  uint unaff_ESI;
  uint uVar19;
  ulonglong uVar20;
  byte bVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar19 = param_3 + 3;
  if (-1 < (int)param_3) {
    uVar19 = param_3;
  }
  if ((int)(uVar19 & 0xfffffffc) < 1) {
    uVar16 = 0;
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    fVar25 = (float)(__xmm_80000000800000008000000080000000 ^ (uint)param_6);
    fVar27 = (float)(_UNK_150651574 ^ (uint)param_6);
    fVar28 = (float)(_UNK_150651578 ^ (uint)param_6);
    fVar29 = (float)(_UNK_15065157c ^ (uint)param_6);
    unaff_ESI = 0;
    uVar16 = 0;
    do {
      uVar20 = (ulonglong)unaff_ESI;
      pfVar1 = (float *)(param_2 + uVar20);
      fVar7 = *pfVar1;
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar1 = (float *)(param_1 + uVar20);
      fVar30 = *pfVar1 + param_6 * fVar7;
      fVar31 = pfVar1[1] + param_6 * fVar8;
      fVar32 = pfVar1[2] + param_6 * fVar9;
      fVar33 = pfVar1[3] + param_6 * fVar10;
      pfVar1 = (float *)(param_5 + uVar20);
      *pfVar1 = fVar30;
      pfVar1[1] = fVar31;
      pfVar1[2] = fVar32;
      pfVar1[3] = fVar33;
      pfVar1 = (float *)(param_4 + uVar20);
      *pfVar1 = fVar30 * fVar25 + fVar7;
      pfVar1[1] = fVar31 * fVar27 + fVar8;
      pfVar1[2] = fVar32 * fVar28 + fVar9;
      pfVar1[3] = fVar33 * fVar29 + fVar10;
      uVar16 = uVar16 + 4;
      unaff_ESI = unaff_ESI + 0x10;
    } while (uVar16 < (uVar19 & 0xfffffffc));
    if ((int)param_3 <= (int)uVar16) {
      return;
    }
  }
  iVar15 = (int)uVar16;
  auVar23._4_4_ = iVar15;
  auVar23._0_4_ = iVar15;
  auVar23._8_4_ = iVar15;
  auVar23._12_4_ = iVar15;
  auVar23 = auVar23 | ___xmm_00000003000000020000000100000000;
  auVar26._0_4_ = -(uint)(auVar23._0_4_ < (int)param_3);
  auVar26._4_4_ = -(uint)(auVar23._4_4_ < (int)param_3);
  auVar26._8_4_ = -(uint)(auVar23._8_4_ < (int)param_3);
  auVar26._12_4_ = -(uint)(auVar23._12_4_ < (int)param_3);
  lVar17 = (longlong)(iVar15 << 2);
  pfVar1 = (float *)(param_2 + lVar17);
  uVar19 = movmskps(unaff_ESI,auVar26);
  bVar21 = (char)((byte)uVar19 << 4) >> 4;
  bVar18 = (byte)uVar19 & 9;
  if (bVar18 == 9) {
    auVar23 = *(undefined1 (*) [16])(param_2 + lVar17);
    auVar26 = *(undefined1 (*) [16])(param_1 + lVar17);
  }
  else {
    if ((uVar19 & 1) != 0) {
      auVar23 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar19 & 2) != 0) {
      auVar23 = insertps(auVar23,pfVar1[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar23 = insertps(auVar23,pfVar1[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      auVar23 = insertps(auVar23,pfVar1[3],0x30);
    }
    if ((uVar19 & 1) != 0) {
      auVar26 = ZEXT416(*(uint *)(param_1 + lVar17));
    }
    if ((uVar19 & 2) != 0) {
      auVar26 = insertps(auVar26,*(undefined4 *)(param_1 + lVar17 + 4),0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar26 = insertps(auVar26,*(undefined4 *)(param_1 + lVar17 + 8),0x20);
    }
    if ((uVar19 & 8) != 0) {
      auVar26 = insertps(auVar26,*(undefined4 *)(param_1 + lVar17 + 0xc),0x30);
    }
  }
  auVar24._0_4_ = auVar23._0_4_ * param_6 + auVar26._0_4_;
  auVar24._4_4_ = auVar23._4_4_ * param_6 + auVar26._4_4_;
  auVar24._8_4_ = auVar23._8_4_ * param_6 + auVar26._8_4_;
  auVar24._12_4_ = auVar23._12_4_ * param_6 + auVar26._12_4_;
  if ((bVar21 & 1) != 0) {
    *(float *)(param_5 + lVar17) = auVar24._0_4_;
  }
  if ((bVar21 & 2) != 0) {
    uVar3 = extractps(auVar24,1);
    *(undefined8 *)(param_5 + 4 + lVar17) = uVar3;
  }
  if ((bVar21 & 4) != 0) {
    uVar3 = extractps(auVar24,2);
    *(undefined8 *)(param_5 + 8 + lVar17) = uVar3;
  }
  if ((char)bVar21 < '\0') {
    uVar3 = extractps(auVar24,3);
    *(undefined8 *)(param_5 + 0xc + lVar17) = uVar3;
  }
  uVar14 = (uint)param_6 ^ _UNK_15065157c;
  uVar13 = (uint)param_6 ^ _UNK_150651578;
  uVar12 = (uint)param_6 ^ _UNK_150651574;
  uVar11 = (uint)param_6 ^ __xmm_80000000800000008000000080000000;
  if (bVar18 == 9) {
    pfVar2 = (float *)(param_5 + lVar17);
    fVar25 = (float)uVar11 * *pfVar2 + *pfVar1;
    fVar27 = (float)uVar12 * pfVar2[1] + pfVar1[1];
    fVar28 = (float)uVar13 * pfVar2[2] + pfVar1[2];
    fVar29 = (float)uVar14 * pfVar2[3] + pfVar1[3];
  }
  else {
    puVar22 = (uint *)(param_5 + lVar17);
    if ((uVar19 & 1) != 0) {
      auVar24 = ZEXT416(*puVar22);
    }
    if ((uVar19 & 2) != 0) {
      auVar24 = insertps(auVar24,puVar22[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar24 = insertps(auVar24,puVar22[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      auVar24 = insertps(auVar24,puVar22[3],0x30);
    }
    if ((uVar19 & 1) != 0) {
      auVar26 = ZEXT416((uint)*pfVar1);
    }
    if ((uVar19 & 2) != 0) {
      auVar26 = insertps(auVar26,pfVar1[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar26 = insertps(auVar26,pfVar1[2],0x20);
    }
    if ((uVar19 & 8) == 0) {
      fVar25 = (float)uVar11 * (float)auVar24._0_4_ + auVar26._0_4_;
      fVar27 = (float)uVar12 * (float)auVar24._4_4_ + auVar26._4_4_;
      fVar28 = (float)uVar13 * (float)auVar24._8_4_ + auVar26._8_4_;
      fVar29 = (float)uVar14 * (float)auVar24._12_4_ + auVar26._12_4_;
    }
    else {
      auVar23 = insertps(auVar26,pfVar1[3],0x30);
      fVar25 = (float)uVar11 * (float)auVar24._0_4_ + auVar23._0_4_;
      fVar27 = (float)uVar12 * (float)auVar24._4_4_ + auVar23._4_4_;
      fVar28 = (float)uVar13 * (float)auVar24._8_4_ + auVar23._8_4_;
      fVar29 = (float)uVar14 * (float)auVar24._12_4_ + auVar23._12_4_;
    }
  }
  if ((bVar21 & 1) != 0) {
    *(float *)(param_4 + lVar17) = fVar25;
  }
  if ((bVar21 & 2) != 0) {
    auVar4._4_4_ = fVar27;
    auVar4._0_4_ = fVar25;
    auVar4._8_4_ = fVar28;
    auVar4._12_4_ = fVar29;
    uVar3 = extractps(auVar4,1);
    *(undefined8 *)(param_4 + 4 + lVar17) = uVar3;
  }
  if ((bVar21 & 4) != 0) {
    auVar5._4_4_ = fVar27;
    auVar5._0_4_ = fVar25;
    auVar5._8_4_ = fVar28;
    auVar5._12_4_ = fVar29;
    uVar3 = extractps(auVar5,2);
    *(undefined8 *)(param_4 + 8 + lVar17) = uVar3;
  }
  if ((char)bVar21 < '\0') {
    auVar6._4_4_ = fVar27;
    auVar6._0_4_ = fVar25;
    auVar6._8_4_ = fVar28;
    auVar6._12_4_ = fVar29;
    uVar3 = extractps(auVar6,3);
    *(undefined8 *)(param_4 + 0xc + lVar17) = uVar3;
  }
  return;
}

// ArrayLerpFractionalDelay_sse4 @ 140a3a070

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayLerpFractionalDelay_sse4
               (undefined8 param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               longlong param_6,undefined4 param_7)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  byte bVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint in_R11D;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  float fVar28;
  undefined1 in_XMM5 [16];
  undefined1 auVar29 [16];
  
  fVar21 = _UNK_15076b1fc;
  fVar20 = _UNK_15076b1f8;
  fVar19 = _UNK_15076b1f4;
  fVar16 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar10 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar10 = param_5;
  }
  uVar10 = uVar10 & 0xfffffffc;
  if ((int)uVar10 < 1) {
    uVar12 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar17._4_4_ = param_7;
    auVar17._0_4_ = param_7;
    auVar17._8_4_ = param_7;
    auVar17._12_4_ = param_7;
    uVar6 = 0;
    uVar12 = 0;
    do {
      uVar7 = (ulonglong)uVar6;
      auVar25 = maxps(*(undefined1 (*) [16])(param_2 + uVar7),ZEXT816(0));
      auVar25 = minps(auVar25,auVar17);
      auVar29 = roundps(in_XMM5,auVar25,9);
      piVar1 = (int *)(param_4 + uVar7);
      lVar15 = (longlong)((*piVar1 - (int)auVar29._0_4_) * 4);
      lVar5 = (longlong)((piVar1[1] - (int)auVar29._4_4_) * 4);
      fVar24 = auVar25._0_4_ - auVar29._0_4_;
      fVar26 = auVar25._4_4_ - auVar29._4_4_;
      fVar27 = auVar25._8_4_ - auVar29._8_4_;
      fVar28 = auVar25._12_4_ - auVar29._12_4_;
      lVar14 = (longlong)((piVar1[2] - (int)auVar29._8_4_) * 4);
      lVar13 = (longlong)((piVar1[3] - (int)auVar29._12_4_) * 4);
      auVar25 = insertps(ZEXT416(*(uint *)(param_3 + 4 + lVar15)),
                         *(undefined4 *)(param_3 + 4 + lVar5),0x10);
      auVar29 = insertps(auVar25,*(undefined4 *)(param_3 + 4 + lVar14),0x20);
      auVar25 = insertps(ZEXT416(*(uint *)(param_3 + lVar15)),*(undefined4 *)(param_3 + lVar5),0x10)
      ;
      auVar29 = insertps(auVar29,*(undefined4 *)(param_3 + 4 + lVar13),0x30);
      auVar25 = insertps(auVar25,*(undefined4 *)(param_3 + lVar14),0x20);
      auVar25 = insertps(auVar25,*(undefined4 *)(param_3 + lVar13),0x30);
      in_XMM5._0_4_ = auVar25._0_4_ * fVar24 + auVar29._0_4_ * (fVar16 - fVar24);
      in_XMM5._4_4_ = auVar25._4_4_ * fVar26 + auVar29._4_4_ * (fVar19 - fVar26);
      in_XMM5._8_4_ = auVar25._8_4_ * fVar27 + auVar29._8_4_ * (fVar20 - fVar27);
      in_XMM5._12_4_ = auVar25._12_4_ * fVar28 + auVar29._12_4_ * (fVar21 - fVar28);
      *(undefined1 (*) [16])(param_6 + uVar7) = in_XMM5;
      uVar12 = uVar12 + 4;
      uVar6 = uVar6 + 0x10;
    } while (uVar12 < uVar10);
    in_R11D = uVar10;
    if ((int)param_5 <= (int)uVar12) {
      return;
    }
  }
  iVar11 = (int)uVar12;
  auVar25._4_4_ = iVar11;
  auVar25._0_4_ = iVar11;
  auVar25._8_4_ = iVar11;
  auVar25._12_4_ = iVar11;
  auVar25 = auVar25 | ___xmm_00000003000000020000000100000000;
  auVar29._0_4_ = -(uint)(auVar25._0_4_ < (int)param_5);
  auVar29._4_4_ = -(uint)(auVar25._4_4_ < (int)param_5);
  auVar29._8_4_ = -(uint)(auVar25._8_4_ < (int)param_5);
  auVar29._12_4_ = -(uint)(auVar25._12_4_ < (int)param_5);
  lVar5 = (longlong)(iVar11 << 2);
  uVar10 = movmskps(in_R11D,auVar29);
  bVar4 = (byte)uVar10 & 9;
  if (bVar4 == 9) {
    auVar25 = *(undefined1 (*) [16])(param_2 + lVar5);
  }
  else {
    puVar8 = (uint *)(param_2 + lVar5);
    if ((uVar10 & 1) != 0) {
      auVar25 = ZEXT416(*puVar8);
    }
    if ((uVar10 & 2) != 0) {
      auVar25 = insertps(auVar25,puVar8[1],0x10);
    }
    if ((uVar10 & 4) != 0) {
      auVar25 = insertps(auVar25,puVar8[2],0x20);
    }
    if ((uVar10 & 8) != 0) {
      auVar25 = insertps(auVar25,puVar8[3],0x30);
    }
  }
  bVar9 = (char)((byte)uVar10 << 4) >> 4;
  auVar17 = maxps(auVar25,ZEXT816(0));
  auVar3._4_4_ = param_7;
  auVar3._0_4_ = param_7;
  auVar3._8_4_ = param_7;
  auVar3._12_4_ = param_7;
  auVar17 = minps(auVar17,auVar3);
  auVar22 = roundps(ZEXT816(0),auVar17,9);
  fVar24 = auVar22._0_4_;
  fVar16 = auVar17._0_4_ - fVar24;
  fVar26 = auVar22._4_4_;
  fVar19 = auVar17._4_4_ - fVar26;
  fVar27 = auVar22._8_4_;
  fVar20 = auVar17._8_4_ - fVar27;
  fVar28 = auVar22._12_4_;
  fVar21 = auVar17._12_4_ - fVar28;
  if (bVar4 == 9) {
    auVar22 = *(undefined1 (*) [16])(param_4 + lVar5);
  }
  else {
    puVar8 = (uint *)(param_4 + lVar5);
    if ((uVar10 & 1) != 0) {
      auVar22 = ZEXT416(*puVar8);
    }
    if ((uVar10 & 2) != 0) {
      auVar22._0_8_ = auVar22._0_8_ & 0xffffffff | (ulonglong)puVar8[1] << 0x20;
    }
    if ((uVar10 & 4) != 0) {
      auVar22._8_8_ = auVar22._8_8_ & 0xffffffff00000000 | (ulonglong)puVar8[2];
    }
    if ((uVar10 & 8) != 0) {
      auVar22._8_8_ = auVar22._8_8_ & 0xffffffff | (ulonglong)puVar8[3] << 0x20;
    }
  }
  auVar23._0_4_ = (auVar22._0_4_ - (int)fVar24) * 4;
  auVar23._4_4_ = (auVar22._4_4_ - (int)fVar26) * 4;
  auVar23._8_4_ = (auVar22._8_4_ - (int)fVar27) * 4;
  auVar23._12_4_ = (auVar22._12_4_ - (int)fVar28) * 4;
  auVar23 = auVar23 & auVar29;
  auVar29 = auVar29 & ___xmm_00000004000000040000000400000004;
  auVar17 = insertps(ZEXT416(*(uint *)((ulonglong)auVar29._0_4_ + param_3 + auVar23._0_4_)),
                     *(undefined4 *)((ulonglong)auVar29._4_4_ + param_3 + auVar23._4_4_),0x10);
  auVar17 = insertps(auVar17,*(undefined4 *)((ulonglong)auVar29._8_4_ + param_3 + auVar23._8_4_),
                     0x20);
  auVar17 = insertps(auVar17,*(undefined4 *)((ulonglong)auVar29._12_4_ + param_3 + auVar23._12_4_),
                     0x30);
  auVar25 = insertps(ZEXT416(*(uint *)(param_3 + auVar23._0_4_)),
                     *(undefined4 *)(param_3 + auVar23._4_4_),0x10);
  auVar25 = insertps(auVar25,*(undefined4 *)(param_3 + auVar23._8_4_),0x20);
  auVar25 = insertps(auVar25,*(undefined4 *)(param_3 + auVar23._12_4_),0x30);
  auVar18._0_4_ =
       fVar16 * auVar25._0_4_ + (___xmm_3f8000003f8000003f8000003f800000 - fVar16) * auVar17._0_4_;
  auVar18._4_4_ = fVar19 * auVar25._4_4_ + (_UNK_15076b1f4 - fVar19) * auVar17._4_4_;
  auVar18._8_4_ = fVar20 * auVar25._8_4_ + (_UNK_15076b1f8 - fVar20) * auVar17._8_4_;
  auVar18._12_4_ = fVar21 * auVar25._12_4_ + (_UNK_15076b1fc - fVar21) * auVar17._12_4_;
  if ((bVar9 & 1) != 0) {
    *(float *)(param_6 + lVar5) = auVar18._0_4_;
  }
  if ((bVar9 & 2) != 0) {
    uVar2 = extractps(auVar18,1);
    *(undefined8 *)(param_6 + 4 + lVar5) = uVar2;
  }
  if ((bVar9 & 4) != 0) {
    uVar2 = extractps(auVar18,2);
    *(undefined8 *)(param_6 + 8 + lVar5) = uVar2;
  }
  if ((char)bVar9 < '\0') {
    uVar2 = extractps(auVar18,3);
    *(undefined8 *)(param_6 + 0xc + lVar5) = uVar2;
  }
  return;
}

// ArrayScaledComplexConjugate_sse4 @ 140a3a3f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ArrayScaledComplexConjugate_sse4(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  byte bVar12;
  uint in_R9D;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  auVar14._0_4_ = __xmm_80000000800000008000000080000000 ^ param_4;
  auVar14._4_4_ = _UNK_150651574 ^ param_4;
  auVar14._8_4_ = _UNK_150651578 ^ param_4;
  auVar14._12_4_ = _UNK_15065157c ^ param_4;
  auVar15._4_4_ = param_4;
  auVar15._0_4_ = param_4;
  auVar15._8_4_ = param_4;
  auVar15._12_4_ = param_4;
  auVar15 = blendps(auVar14,auVar15,5);
  uVar7 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar7 = param_2;
  }
  uVar7 = uVar7 & 0xfffffffc;
  if ((int)uVar7 < 1) {
    uVar9 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar13 = 0;
    uVar9 = 0;
    do {
      pfVar1 = (float *)(param_1 + (ulonglong)uVar13);
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar6 = pfVar1[3];
      pfVar2 = (float *)(param_3 + (ulonglong)uVar13);
      *pfVar2 = *pfVar1 * auVar15._0_4_;
      pfVar2[1] = fVar4 * auVar15._4_4_;
      pfVar2[2] = fVar5 * auVar15._8_4_;
      pfVar2[3] = fVar6 * auVar15._12_4_;
      uVar9 = uVar9 + 4;
      uVar13 = uVar13 + 0x10;
    } while (uVar9 < uVar7);
    in_R9D = uVar7;
    if ((int)param_2 <= (int)uVar9) {
      return;
    }
  }
  iVar8 = (int)uVar9;
  auVar17._4_4_ = iVar8;
  auVar17._0_4_ = iVar8;
  auVar17._8_4_ = iVar8;
  auVar17._12_4_ = iVar8;
  auVar17 = auVar17 | ___xmm_00000003000000020000000100000000;
  auVar18._0_4_ = -(uint)(auVar17._0_4_ < (int)param_2);
  auVar18._4_4_ = -(uint)(auVar17._4_4_ < (int)param_2);
  auVar18._8_4_ = -(uint)(auVar17._8_4_ < (int)param_2);
  auVar18._12_4_ = -(uint)(auVar17._12_4_ < (int)param_2);
  lVar10 = (longlong)(iVar8 << 2);
  uVar7 = movmskps(in_R9D,auVar18);
  bVar12 = (char)((byte)uVar7 << 4) >> 4;
  if ((~(byte)uVar7 & 9) == 0) {
    auVar17 = *(undefined1 (*) [16])(param_1 + lVar10);
  }
  else {
    puVar11 = (uint *)(param_1 + lVar10);
    if ((uVar7 & 1) != 0) {
      auVar17 = ZEXT416(*puVar11);
    }
    if ((uVar7 & 2) != 0) {
      auVar17 = insertps(auVar17,puVar11[1],0x10);
    }
    if ((uVar7 & 4) != 0) {
      auVar17 = insertps(auVar17,puVar11[2],0x20);
    }
    if ((uVar7 & 8) != 0) {
      auVar17 = insertps(auVar17,puVar11[3],0x30);
    }
  }
  auVar16._0_4_ = auVar15._0_4_ * auVar17._0_4_;
  auVar16._4_4_ = auVar15._4_4_ * auVar17._4_4_;
  auVar16._8_4_ = auVar15._8_4_ * auVar17._8_4_;
  auVar16._12_4_ = auVar15._12_4_ * auVar17._12_4_;
  if ((bVar12 & 1) != 0) {
    *(float *)(param_3 + lVar10) = auVar16._0_4_;
  }
  if ((bVar12 & 2) != 0) {
    uVar3 = extractps(auVar16,1);
    *(undefined8 *)(param_3 + 4 + lVar10) = uVar3;
  }
  if ((bVar12 & 4) != 0) {
    uVar3 = extractps(auVar16,2);
    *(undefined8 *)(param_3 + 8 + lVar10) = uVar3;
  }
  if (-1 < (char)bVar12) {
    return;
  }
  uVar3 = extractps(auVar16,3);
  *(undefined8 *)(param_3 + 0xc + lVar10) = uVar3;
  return;
}

