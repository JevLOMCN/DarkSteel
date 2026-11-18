// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 10

// InterpolatePositions___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunf_sse4 @ 140cb4920

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolatePositions___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunf_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar32 [16];
  
  uVar16 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar16 = param_4;
  }
  if ((int)(uVar16 & 0xfffffffc) < 1) {
    uVar11 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar18 = 0x20;
    uVar11 = 0;
    do {
      auVar26 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar18);
      auVar30 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar18);
      pfVar1 = (float *)(param_1 + lVar18);
      auVar37 = insertps(auVar30,auVar26,0x8c);
      auVar38 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar18);
      auVar40 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar18);
      pfVar2 = (float *)(param_2 + lVar18);
      auVar33 = insertps(auVar40,auVar38,0x8c);
      auVar35._0_8_ =
           CONCAT44(auVar38._12_4_ * param_6 + auVar26._12_4_ * param_5,
                    auVar38._0_4_ * param_6 + auVar26._0_4_ * param_5);
      auVar35._8_4_ = auVar40._8_4_ * param_6 + auVar30._8_4_ * param_5;
      auVar35._12_4_ = pfVar2[1] * param_6 + pfVar1[1] * param_5;
      auVar26._0_4_ = auVar38._4_4_ * param_6 + auVar26._4_4_ * param_5;
      auVar26._4_4_ = auVar40._0_4_ * param_6 + auVar30._0_4_ * param_5;
      auVar26._8_4_ = auVar40._12_4_ * param_6 + auVar30._12_4_ * param_5;
      auVar26._12_4_ = pfVar2[2] * param_6 + pfVar1[2] * param_5;
      auVar30._0_4_ = auVar33._0_4_ * param_6 + auVar37._0_4_ * param_5;
      auVar30._4_4_ = auVar33._4_4_ * param_6 + auVar37._4_4_ * param_5;
      auVar30._8_4_ = *pfVar2 * param_6 + *pfVar1 * param_5;
      auVar30._12_4_ = pfVar2[3] * param_6 + pfVar1[3] * param_5;
      auVar38._8_4_ = auVar35._8_4_;
      auVar38._0_8_ = auVar35._0_8_;
      auVar38._12_4_ = auVar35._12_4_;
      auVar38 = insertps(auVar38,auVar26,0x30);
      auVar40._4_4_ = auVar26._8_4_;
      auVar40._0_4_ = auVar26._4_4_;
      auVar40._8_4_ = auVar30._0_4_;
      auVar40._12_4_ = auVar30._4_4_;
      auVar38 = insertps(auVar38,auVar30,0x20);
      puVar4 = (undefined4 *)(param_3 + -0x20 + lVar18);
      *puVar4 = auVar38._0_4_;
      puVar4[1] = auVar38._12_4_;
      puVar4[2] = auVar38._8_4_;
      puVar4[3] = auVar38._4_4_;
      auVar38 = blendps(auVar40,auVar35,4);
      puVar4 = (undefined4 *)(param_3 + -0x10 + lVar18);
      *puVar4 = auVar38._0_4_;
      puVar4[1] = auVar38._12_4_;
      puVar4[2] = auVar38._8_4_;
      puVar4[3] = auVar38._4_4_;
      pfVar1 = (float *)(param_3 + lVar18);
      *pfVar1 = auVar30._8_4_;
      pfVar1[1] = auVar35._12_4_;
      pfVar1[2] = auVar26._12_4_;
      pfVar1[3] = auVar30._12_4_;
      lVar18 = lVar18 + 0x30;
      uVar11 = uVar11 + 4;
    } while ((int)uVar11 < (int)(uVar16 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar11) {
      return;
    }
  }
  auVar33._0_4_ =
       -(uint)((int)(uVar11 | (uint)__xmm_00000003000000020000000100000000) < (int)param_4);
  auVar33._4_4_ =
       -(uint)((int)(uVar11 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_4);
  auVar33._8_4_ = -(uint)((int)(uVar11 | _UNK_150631e08) < (int)param_4);
  auVar33._12_4_ = -(uint)((int)(uVar11 | _UNK_150631e0c) < (int)param_4);
  uVar12 = (ulonglong)uVar11;
  pauVar3 = (undefined1 (*) [16])(param_1 + uVar12 * 0xc);
  iVar14 = movmskps(param_4,auVar33);
  bVar10 = (char)((char)iVar14 << 4) >> 4;
  if (iVar14 == 0xf) {
    auVar26 = *pauVar3;
    auVar30 = pauVar3[1];
    auVar27._0_4_ = auVar26._0_4_;
    auVar38 = insertps(auVar30,auVar26,0x8c);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._8_4_ = auVar30._8_4_;
    auVar27._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    auVar34._4_4_ = auVar30._0_4_;
    auVar34._0_4_ = auVar26._4_4_;
    auVar34._8_4_ = auVar30._12_4_;
    auVar34._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar36._0_8_ = auVar38._0_8_;
    auVar36._8_4_ = *(undefined4 *)pauVar3[2];
    auVar36._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
    auVar26 = *(undefined1 (*) [16])(param_2 + uVar12 * 0xc);
    auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar12 * 0xc);
    puVar4 = (undefined4 *)(param_2 + 0x20 + uVar12 * 0xc);
    auVar31._0_4_ = auVar26._0_4_;
    auVar38 = insertps(auVar30,auVar26,0x8c);
    auVar31._4_4_ = auVar26._12_4_;
    auVar31._8_4_ = auVar30._8_4_;
    auVar31._12_4_ = puVar4[1];
    auVar37._4_4_ = auVar30._0_4_;
    auVar37._0_4_ = auVar26._4_4_;
    auVar37._8_4_ = auVar30._12_4_;
    auVar37._12_4_ = puVar4[2];
    auVar39._0_8_ = auVar38._0_8_;
    auVar39._8_4_ = *puVar4;
    auVar39._12_4_ = puVar4[3];
  }
  else {
    auVar25._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar33._0_4_;
    auVar25._4_4_ = _UNK_150b50da4 & auVar33._4_4_;
    auVar25._8_4_ = _UNK_150b50da8 & auVar33._8_4_;
    auVar25._12_4_ = _UNK_150b50dac & auVar33._12_4_;
    lVar15 = extractps(auVar25,1);
    lVar17 = extractps(auVar25,2);
    lVar13 = extractps(auVar25,3);
    auVar26 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar15),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar17),0x20);
    auVar27 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar13),0x30);
    auVar30 = ___xmm_000000280000001c0000001000000004 & auVar33;
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar30._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar30._4_4_),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar30._8_4_),0x20);
    auVar34 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar30._12_4_),0x30);
    auVar33 = auVar33 & ___xmm_0000002c000000200000001400000008;
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar33._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar33._4_4_),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar33._8_4_),0x20);
    auVar36 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar33._12_4_),0x30);
    lVar18 = param_2 + uVar12 * 0xc;
    auVar26 = insertps(ZEXT416(*(uint *)(param_2 + uVar12 * 0xc)),*(undefined4 *)(lVar15 + lVar18),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(lVar17 + lVar18),0x20);
    auVar31 = insertps(auVar26,*(undefined4 *)(lVar13 + lVar18),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)auVar30._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar30._4_4_ + lVar18),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar30._8_4_ + lVar18),0x20);
    auVar37 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar30._12_4_ + lVar18),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + lVar18),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar33._8_4_ + lVar18),0x20);
    auVar39 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar33._12_4_ + lVar18),0x30);
  }
  fVar29 = auVar31._0_4_ * param_6 + auVar27._0_4_ * param_5;
  auVar32._0_8_ = CONCAT44(auVar31._4_4_ * param_6 + auVar27._4_4_ * param_5,fVar29);
  auVar32._8_4_ = auVar31._8_4_ * param_6 + auVar27._8_4_ * param_5;
  auVar32._12_4_ = auVar31._12_4_ * param_6 + auVar27._12_4_ * param_5;
  auVar24._0_4_ = auVar37._0_4_ * param_6 + auVar34._0_4_ * param_5;
  auVar24._4_4_ = auVar37._4_4_ * param_6 + auVar34._4_4_ * param_5;
  auVar24._8_4_ = auVar37._8_4_ * param_6 + auVar34._8_4_ * param_5;
  auVar24._12_4_ = auVar37._12_4_ * param_6 + auVar34._12_4_ * param_5;
  fVar19 = param_6 * auVar39._0_4_ + param_5 * auVar36._0_4_;
  fVar20 = param_6 * auVar39._4_4_ + param_5 * auVar36._4_4_;
  fVar21 = param_6 * auVar39._8_4_ + param_5 * auVar36._8_4_;
  fVar22 = param_6 * auVar39._12_4_ + param_5 * auVar36._12_4_;
  pfVar1 = (float *)(param_3 + uVar12 * 0xc);
  if ((~bVar10 & 0xf) == 0) {
    auVar23._8_4_ = auVar32._8_4_;
    auVar23._0_8_ = auVar32._0_8_;
    auVar23._12_4_ = auVar32._12_4_;
    auVar26 = insertps(auVar23,auVar24,0x30);
    auVar28._4_4_ = auVar24._8_4_;
    auVar28._0_4_ = auVar24._4_4_;
    auVar28._8_4_ = fVar19;
    auVar28._12_4_ = fVar20;
    auVar9._4_4_ = fVar20;
    auVar9._0_4_ = fVar19;
    auVar9._8_4_ = fVar21;
    auVar9._12_4_ = fVar22;
    auVar26 = insertps(auVar26,auVar9,0x20);
    *pfVar1 = auVar26._0_4_;
    pfVar1[1] = auVar26._12_4_;
    pfVar1[2] = auVar26._8_4_;
    pfVar1[3] = auVar26._4_4_;
    auVar26 = blendps(auVar28,auVar32,4);
    pfVar1[4] = auVar26._0_4_;
    pfVar1[5] = auVar26._12_4_;
    pfVar1[6] = auVar26._8_4_;
    pfVar1[7] = auVar26._4_4_;
    pfVar1[8] = fVar21;
    pfVar1[9] = auVar32._12_4_;
    pfVar1[10] = auVar24._12_4_;
    pfVar1[0xb] = fVar22;
  }
  else {
    if ((bVar10 & 1) != 0) {
      *pfVar1 = fVar29;
    }
    if ((bVar10 & 2) != 0) {
      uVar5 = extractps(auVar32,1);
      *(undefined8 *)(pfVar1 + 3) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      uVar5 = extractps(auVar32,2);
      *(undefined8 *)(pfVar1 + 6) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      uVar5 = extractps(auVar32,3);
      *(undefined8 *)(pfVar1 + 9) = uVar5;
    }
    if ((bVar10 & 1) != 0) {
      pfVar1[1] = auVar24._0_4_;
    }
    if ((bVar10 & 2) != 0) {
      uVar5 = extractps(auVar24,1);
      *(undefined8 *)(pfVar1 + 4) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      uVar5 = extractps(auVar24,2);
      *(undefined8 *)(pfVar1 + 7) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      uVar5 = extractps(auVar24,3);
      *(undefined8 *)(pfVar1 + 10) = uVar5;
    }
    if ((bVar10 & 1) != 0) {
      pfVar1[2] = fVar19;
    }
    if ((bVar10 & 2) != 0) {
      auVar8._4_4_ = fVar20;
      auVar8._0_4_ = fVar19;
      auVar8._8_4_ = fVar21;
      auVar8._12_4_ = fVar22;
      uVar5 = extractps(auVar8,1);
      *(undefined8 *)(pfVar1 + 5) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      auVar7._4_4_ = fVar20;
      auVar7._0_4_ = fVar19;
      auVar7._8_4_ = fVar21;
      auVar7._12_4_ = fVar22;
      uVar5 = extractps(auVar7,2);
      *(undefined8 *)(pfVar1 + 8) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      auVar6._4_4_ = fVar20;
      auVar6._0_4_ = fVar19;
      auVar6._8_4_ = fVar21;
      auVar6._12_4_ = fVar22;
      uVar5 = extractps(auVar6,3);
      *(undefined8 *)(pfVar1 + 0xb) = uVar5;
    }
  }
  return;
}

// InterpolateMotionVectors___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunfunf_sse4 @ 140cb4e20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateMotionVectors___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunfunf_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6,float param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar31 [16];
  
  uVar16 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar16 = param_4;
  }
  if ((int)(uVar16 & 0xfffffffc) < 1) {
    uVar11 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar18 = 0x20;
    uVar11 = 0;
    do {
      auVar26 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar18);
      auVar29 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar18);
      pfVar1 = (float *)(param_1 + lVar18);
      auVar37 = insertps(auVar29,auVar26,0x8c);
      auVar38 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar18);
      auVar39 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar18);
      pfVar2 = (float *)(param_2 + lVar18);
      auVar33 = insertps(auVar39,auVar38,0x8c);
      auVar35._0_8_ =
           CONCAT44((auVar38._12_4_ * param_6 + auVar26._12_4_ * param_5) * param_7,
                    (auVar38._0_4_ * param_6 + auVar26._0_4_ * param_5) * param_7);
      auVar35._8_4_ = (auVar39._8_4_ * param_6 + auVar29._8_4_ * param_5) * param_7;
      auVar35._12_4_ = (pfVar2[1] * param_6 + pfVar1[1] * param_5) * param_7;
      auVar26._0_4_ = (auVar38._4_4_ * param_6 + auVar26._4_4_ * param_5) * param_7;
      auVar26._4_4_ = (auVar39._0_4_ * param_6 + auVar29._0_4_ * param_5) * param_7;
      auVar26._8_4_ = (auVar39._12_4_ * param_6 + auVar29._12_4_ * param_5) * param_7;
      auVar26._12_4_ = (pfVar2[2] * param_6 + pfVar1[2] * param_5) * param_7;
      auVar29._0_4_ = (auVar33._0_4_ * param_6 + auVar37._0_4_ * param_5) * param_7;
      auVar29._4_4_ = (auVar33._4_4_ * param_6 + auVar37._4_4_ * param_5) * param_7;
      auVar29._8_4_ = (*pfVar2 * param_6 + *pfVar1 * param_5) * param_7;
      auVar29._12_4_ = (pfVar2[3] * param_6 + pfVar1[3] * param_5) * param_7;
      auVar38._8_4_ = auVar35._8_4_;
      auVar38._0_8_ = auVar35._0_8_;
      auVar38._12_4_ = auVar35._12_4_;
      auVar38 = insertps(auVar38,auVar26,0x30);
      auVar39._4_4_ = auVar26._8_4_;
      auVar39._0_4_ = auVar26._4_4_;
      auVar39._8_4_ = auVar29._0_4_;
      auVar39._12_4_ = auVar29._4_4_;
      auVar38 = insertps(auVar38,auVar29,0x20);
      puVar4 = (undefined4 *)(param_3 + -0x20 + lVar18);
      *puVar4 = auVar38._0_4_;
      puVar4[1] = auVar38._12_4_;
      puVar4[2] = auVar38._8_4_;
      puVar4[3] = auVar38._4_4_;
      auVar38 = blendps(auVar39,auVar35,4);
      puVar4 = (undefined4 *)(param_3 + -0x10 + lVar18);
      *puVar4 = auVar38._0_4_;
      puVar4[1] = auVar38._12_4_;
      puVar4[2] = auVar38._8_4_;
      puVar4[3] = auVar38._4_4_;
      pfVar1 = (float *)(param_3 + lVar18);
      *pfVar1 = auVar29._8_4_;
      pfVar1[1] = auVar35._12_4_;
      pfVar1[2] = auVar26._12_4_;
      pfVar1[3] = auVar29._12_4_;
      lVar18 = lVar18 + 0x30;
      uVar11 = uVar11 + 4;
    } while ((int)uVar11 < (int)(uVar16 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar11) {
      return;
    }
  }
  auVar33._0_4_ =
       -(uint)((int)(uVar11 | (uint)__xmm_00000003000000020000000100000000) < (int)param_4);
  auVar33._4_4_ =
       -(uint)((int)(uVar11 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_4);
  auVar33._8_4_ = -(uint)((int)(uVar11 | _UNK_150631e08) < (int)param_4);
  auVar33._12_4_ = -(uint)((int)(uVar11 | _UNK_150631e0c) < (int)param_4);
  uVar12 = (ulonglong)uVar11;
  pauVar3 = (undefined1 (*) [16])(param_1 + uVar12 * 0xc);
  iVar14 = movmskps(param_4,auVar33);
  bVar10 = (char)((char)iVar14 << 4) >> 4;
  if (iVar14 == 0xf) {
    auVar26 = *pauVar3;
    auVar29 = pauVar3[1];
    auVar27._0_4_ = auVar26._0_4_;
    auVar38 = insertps(auVar29,auVar26,0x8c);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._8_4_ = auVar29._8_4_;
    auVar27._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    auVar32._4_4_ = auVar29._0_4_;
    auVar32._0_4_ = auVar26._4_4_;
    auVar32._8_4_ = auVar29._12_4_;
    auVar32._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar34._0_8_ = auVar38._0_8_;
    auVar34._8_4_ = *(undefined4 *)pauVar3[2];
    auVar34._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
    auVar26 = *(undefined1 (*) [16])(param_2 + uVar12 * 0xc);
    auVar29 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar12 * 0xc);
    puVar4 = (undefined4 *)(param_2 + 0x20 + uVar12 * 0xc);
    auVar30._0_4_ = auVar26._0_4_;
    auVar38 = insertps(auVar29,auVar26,0x8c);
    auVar30._4_4_ = auVar26._12_4_;
    auVar30._8_4_ = auVar29._8_4_;
    auVar30._12_4_ = puVar4[1];
    auVar37._4_4_ = auVar29._0_4_;
    auVar37._0_4_ = auVar26._4_4_;
    auVar37._8_4_ = auVar29._12_4_;
    auVar37._12_4_ = puVar4[2];
    auVar36._0_8_ = auVar38._0_8_;
    auVar36._8_4_ = *puVar4;
    auVar36._12_4_ = puVar4[3];
  }
  else {
    auVar25._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar33._0_4_;
    auVar25._4_4_ = _UNK_150b50da4 & auVar33._4_4_;
    auVar25._8_4_ = _UNK_150b50da8 & auVar33._8_4_;
    auVar25._12_4_ = _UNK_150b50dac & auVar33._12_4_;
    lVar15 = extractps(auVar25,1);
    lVar17 = extractps(auVar25,2);
    lVar13 = extractps(auVar25,3);
    auVar26 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar15),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar17),0x20);
    auVar27 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar13),0x30);
    auVar29 = ___xmm_000000280000001c0000001000000004 & auVar33;
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar29._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar29._4_4_),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar29._8_4_),0x20);
    auVar32 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar29._12_4_),0x30);
    auVar33 = auVar33 & ___xmm_0000002c000000200000001400000008;
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar33._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar33._4_4_),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar33._8_4_),0x20);
    auVar34 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar33._12_4_),0x30);
    lVar18 = param_2 + uVar12 * 0xc;
    auVar26 = insertps(ZEXT416(*(uint *)(param_2 + uVar12 * 0xc)),*(undefined4 *)(lVar15 + lVar18),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(lVar17 + lVar18),0x20);
    auVar30 = insertps(auVar26,*(undefined4 *)(lVar13 + lVar18),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)auVar29._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar29._4_4_ + lVar18),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar29._8_4_ + lVar18),0x20);
    auVar37 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar29._12_4_ + lVar18),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + lVar18),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar33._8_4_ + lVar18),0x20);
    auVar36 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar33._12_4_ + lVar18),0x30);
  }
  fVar28 = (auVar30._0_4_ * param_6 + auVar27._0_4_ * param_5) * param_7;
  auVar31._0_8_ = CONCAT44((auVar30._4_4_ * param_6 + auVar27._4_4_ * param_5) * param_7,fVar28);
  auVar31._8_4_ = (auVar30._8_4_ * param_6 + auVar27._8_4_ * param_5) * param_7;
  auVar31._12_4_ = (auVar30._12_4_ * param_6 + auVar27._12_4_ * param_5) * param_7;
  auVar24._0_4_ = (auVar37._0_4_ * param_6 + auVar32._0_4_ * param_5) * param_7;
  auVar24._4_4_ = (auVar37._4_4_ * param_6 + auVar32._4_4_ * param_5) * param_7;
  auVar24._8_4_ = (auVar37._8_4_ * param_6 + auVar32._8_4_ * param_5) * param_7;
  auVar24._12_4_ = (auVar37._12_4_ * param_6 + auVar32._12_4_ * param_5) * param_7;
  fVar19 = param_7 * (param_6 * auVar36._0_4_ + param_5 * auVar34._0_4_);
  fVar20 = param_7 * (param_6 * auVar36._4_4_ + param_5 * auVar34._4_4_);
  fVar21 = param_7 * (param_6 * auVar36._8_4_ + param_5 * auVar34._8_4_);
  param_7 = param_7 * (param_6 * auVar36._12_4_ + param_5 * auVar34._12_4_);
  pfVar1 = (float *)(param_3 + uVar12 * 0xc);
  if ((~bVar10 & 0xf) == 0) {
    auVar22._8_4_ = auVar31._8_4_;
    auVar22._0_8_ = auVar31._0_8_;
    auVar22._12_4_ = auVar31._12_4_;
    auVar26 = insertps(auVar22,auVar24,0x30);
    auVar23._4_4_ = auVar24._8_4_;
    auVar23._0_4_ = auVar24._4_4_;
    auVar23._8_4_ = fVar19;
    auVar23._12_4_ = fVar20;
    auVar9._4_4_ = fVar20;
    auVar9._0_4_ = fVar19;
    auVar9._8_4_ = fVar21;
    auVar9._12_4_ = param_7;
    auVar26 = insertps(auVar26,auVar9,0x20);
    *pfVar1 = auVar26._0_4_;
    pfVar1[1] = auVar26._12_4_;
    pfVar1[2] = auVar26._8_4_;
    pfVar1[3] = auVar26._4_4_;
    auVar26 = blendps(auVar23,auVar31,4);
    pfVar1[4] = auVar26._0_4_;
    pfVar1[5] = auVar26._12_4_;
    pfVar1[6] = auVar26._8_4_;
    pfVar1[7] = auVar26._4_4_;
    pfVar1[8] = fVar21;
    pfVar1[9] = auVar31._12_4_;
    pfVar1[10] = auVar24._12_4_;
    pfVar1[0xb] = param_7;
  }
  else {
    if ((bVar10 & 1) != 0) {
      *pfVar1 = fVar28;
    }
    if ((bVar10 & 2) != 0) {
      uVar5 = extractps(auVar31,1);
      *(undefined8 *)(pfVar1 + 3) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      uVar5 = extractps(auVar31,2);
      *(undefined8 *)(pfVar1 + 6) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      uVar5 = extractps(auVar31,3);
      *(undefined8 *)(pfVar1 + 9) = uVar5;
    }
    if ((bVar10 & 1) != 0) {
      pfVar1[1] = auVar24._0_4_;
    }
    if ((bVar10 & 2) != 0) {
      uVar5 = extractps(auVar24,1);
      *(undefined8 *)(pfVar1 + 4) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      uVar5 = extractps(auVar24,2);
      *(undefined8 *)(pfVar1 + 7) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      uVar5 = extractps(auVar24,3);
      *(undefined8 *)(pfVar1 + 10) = uVar5;
    }
    if ((bVar10 & 1) != 0) {
      pfVar1[2] = fVar19;
    }
    if ((bVar10 & 2) != 0) {
      auVar8._4_4_ = fVar20;
      auVar8._0_4_ = fVar19;
      auVar8._8_4_ = fVar21;
      auVar8._12_4_ = param_7;
      uVar5 = extractps(auVar8,1);
      *(undefined8 *)(pfVar1 + 5) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      auVar7._4_4_ = fVar20;
      auVar7._0_4_ = fVar19;
      auVar7._8_4_ = fVar21;
      auVar7._12_4_ = param_7;
      uVar5 = extractps(auVar7,2);
      *(undefined8 *)(pfVar1 + 8) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      auVar6._4_4_ = fVar20;
      auVar6._0_4_ = fVar19;
      auVar6._8_4_ = fVar21;
      auVar6._12_4_ = param_7;
      uVar5 = extractps(auVar6,3);
      *(undefined8 *)(pfVar1 + 0xb) = uVar5;
    }
  }
  return;
}

// InterpolateUVs___un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_uniunfunf_sse4 @ 140cb5390

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateUVs___un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_uniunfunf_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  uVar25 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar25 = param_4;
  }
  uVar25 = uVar25 & 0xfffffffc;
  if ((int)uVar25 < 1) {
    uVar22 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar22 = 0;
    do {
      pfVar1 = (float *)(param_1 + uVar22 * 8);
      fVar29 = pfVar1[2];
      fVar30 = pfVar1[3];
      pfVar6 = (float *)(param_1 + 0x10 + uVar22 * 8);
      fVar31 = *pfVar6;
      fVar32 = pfVar6[1];
      fVar13 = pfVar6[2];
      fVar14 = pfVar6[3];
      pfVar6 = (float *)(param_2 + uVar22 * 8);
      fVar15 = pfVar6[2];
      fVar16 = pfVar6[3];
      pfVar7 = (float *)(param_2 + 0x10 + uVar22 * 8);
      fVar17 = *pfVar7;
      fVar18 = pfVar7[1];
      fVar19 = pfVar7[2];
      fVar20 = pfVar7[3];
      puVar2 = (undefined8 *)(param_3 + uVar22 * 8);
      *puVar2 = CONCAT44(pfVar6[1] * param_6 + pfVar1[1] * param_5,
                         *pfVar6 * param_6 + *pfVar1 * param_5);
      *(float *)(puVar2 + 1) = fVar15 * param_6 + fVar29 * param_5;
      *(float *)((longlong)puVar2 + 0xc) = fVar16 * param_6 + fVar30 * param_5;
      pfVar1 = (float *)(param_3 + 0x10 + uVar22 * 8);
      *pfVar1 = fVar17 * param_6 + fVar31 * param_5;
      pfVar1[1] = fVar18 * param_6 + fVar32 * param_5;
      pfVar1[2] = fVar19 * param_6 + fVar13 * param_5;
      pfVar1[3] = fVar20 * param_6 + fVar14 * param_5;
      uVar22 = uVar22 + 4;
    } while ((int)uVar22 < (int)uVar25);
    if ((int)param_4 <= (int)uVar22) {
      return;
    }
  }
  uVar21 = (uint)uVar22;
  auVar33._0_4_ =
       -(uint)((int)(uVar21 | (uint)__xmm_00000003000000020000000100000000) < (int)param_4);
  auVar33._4_4_ =
       -(uint)((int)(uVar21 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_4);
  auVar33._8_4_ = -(uint)((int)(uVar21 | _UNK_150631e08) < (int)param_4);
  auVar33._12_4_ = -(uint)((int)(uVar21 | _UNK_150631e0c) < (int)param_4);
  uVar22 = uVar22 & 0xffffffff;
  puVar3 = (uint *)(param_1 + uVar22 * 8);
  iVar26 = movmskps(uVar25,auVar33);
  bVar23 = (char)((char)iVar26 << 4) >> 4;
  if (iVar26 == 0xf) {
    auVar37._4_4_ = puVar3[2];
    auVar37._0_4_ = *puVar3;
    auVar37._8_4_ = puVar3[4];
    auVar37._12_4_ = puVar3[6];
    auVar38._4_4_ = puVar3[3];
    auVar38._0_4_ = puVar3[1];
    auVar38._8_4_ = puVar3[5];
    auVar38._12_4_ = puVar3[7];
    puVar5 = (undefined4 *)(param_2 + uVar22 * 8);
    puVar8 = (undefined4 *)(param_2 + 0x10 + uVar22 * 8);
    auVar36._4_4_ = puVar5[2];
    auVar36._0_4_ = *puVar5;
    auVar36._8_4_ = *puVar8;
    auVar36._12_4_ = puVar8[2];
    auVar39._4_4_ = puVar5[3];
    auVar39._0_4_ = puVar5[1];
    auVar39._8_4_ = puVar8[1];
    auVar39._12_4_ = puVar8[3];
  }
  else {
    auVar35._0_4_ = ___xmm_00000018000000100000000800000000 & auVar33._0_4_;
    auVar35._4_4_ = _UNK_150b51a04 & auVar33._4_4_;
    auVar35._8_4_ = _UNK_150b51a08 & auVar33._8_4_;
    auVar35._12_4_ = _UNK_150b51a0c & auVar33._12_4_;
    lVar27 = extractps(auVar35,1);
    lVar28 = extractps(auVar35,2);
    lVar24 = extractps(auVar35,3);
    auVar36 = insertps(ZEXT416(*puVar3),*(undefined4 *)((longlong)puVar3 + lVar27),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)puVar3 + lVar28),0x20);
    auVar37 = insertps(auVar36,*(undefined4 *)((longlong)puVar3 + lVar24),0x30);
    auVar33 = auVar33 & ___xmm_0000001c000000140000000c00000004;
    auVar36 = insertps(ZEXT416(*(uint *)((longlong)puVar3 + (ulonglong)auVar33._0_4_)),
                       *(undefined4 *)((longlong)puVar3 + (ulonglong)auVar33._4_4_),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)puVar3 + (ulonglong)auVar33._8_4_),0x20);
    auVar38 = insertps(auVar36,*(undefined4 *)((longlong)puVar3 + (ulonglong)auVar33._12_4_),0x30);
    lVar4 = param_2 + uVar22 * 8;
    auVar36 = insertps(ZEXT416(*(uint *)(param_2 + uVar22 * 8)),*(undefined4 *)(lVar27 + lVar4),0x10
                      );
    auVar36 = insertps(auVar36,*(undefined4 *)(lVar28 + lVar4),0x20);
    auVar36 = insertps(auVar36,*(undefined4 *)(lVar24 + lVar4),0x30);
    auVar39 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + lVar4)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + lVar4),0x10);
    auVar39 = insertps(auVar39,*(undefined4 *)((ulonglong)auVar33._8_4_ + lVar4),0x20);
    auVar39 = insertps(auVar39,*(undefined4 *)((ulonglong)auVar33._12_4_ + lVar4),0x30);
  }
  auVar34._0_4_ = auVar36._0_4_ * param_6 + auVar37._0_4_ * param_5;
  auVar34._4_4_ = auVar36._4_4_ * param_6 + auVar37._4_4_ * param_5;
  auVar34._8_4_ = auVar36._8_4_ * param_6 + auVar37._8_4_ * param_5;
  auVar34._12_4_ = auVar36._12_4_ * param_6 + auVar37._12_4_ * param_5;
  fVar29 = param_6 * auVar39._0_4_ + param_5 * auVar38._0_4_;
  fVar30 = param_6 * auVar39._4_4_ + param_5 * auVar38._4_4_;
  fVar31 = param_6 * auVar39._8_4_ + param_5 * auVar38._8_4_;
  fVar32 = param_6 * auVar39._12_4_ + param_5 * auVar38._12_4_;
  if ((~bVar23 & 0xf) == 0) {
    pfVar1 = (float *)(param_3 + uVar22 * 8);
    *pfVar1 = auVar34._0_4_;
    pfVar1[1] = fVar29;
    pfVar1[2] = auVar34._4_4_;
    pfVar1[3] = fVar30;
    pfVar1 = (float *)(param_3 + 0x10 + uVar22 * 8);
    *pfVar1 = auVar34._8_4_;
    pfVar1[1] = fVar31;
    pfVar1[2] = auVar34._12_4_;
    pfVar1[3] = fVar32;
  }
  else {
    if ((bVar23 & 1) != 0) {
      *(float *)(param_3 + uVar22 * 8) = auVar34._0_4_;
    }
    if ((bVar23 & 2) != 0) {
      uVar9 = extractps(auVar34,1);
      *(undefined8 *)(param_3 + 8 + uVar22 * 8) = uVar9;
    }
    if ((bVar23 & 4) != 0) {
      uVar9 = extractps(auVar34,2);
      *(undefined8 *)(param_3 + 0x10 + uVar22 * 8) = uVar9;
    }
    if ((char)bVar23 < '\0') {
      uVar9 = extractps(auVar34,3);
      *(undefined8 *)(param_3 + 0x18 + uVar22 * 8) = uVar9;
    }
    if ((bVar23 & 1) != 0) {
      *(float *)(param_3 + 4 + uVar22 * 8) = fVar29;
    }
    if ((bVar23 & 2) != 0) {
      auVar12._4_4_ = fVar30;
      auVar12._0_4_ = fVar29;
      auVar12._8_4_ = fVar31;
      auVar12._12_4_ = fVar32;
      uVar9 = extractps(auVar12,1);
      *(undefined8 *)(param_3 + 0xc + uVar22 * 8) = uVar9;
    }
    if ((bVar23 & 4) != 0) {
      auVar11._4_4_ = fVar30;
      auVar11._0_4_ = fVar29;
      auVar11._8_4_ = fVar31;
      auVar11._12_4_ = fVar32;
      uVar9 = extractps(auVar11,2);
      *(undefined8 *)(param_3 + 0x14 + uVar22 * 8) = uVar9;
    }
    if ((char)bVar23 < '\0') {
      auVar10._4_4_ = fVar30;
      auVar10._0_4_ = fVar29;
      auVar10._8_4_ = fVar31;
      auVar10._12_4_ = fVar32;
      uVar9 = extractps(auVar10,3);
      *(undefined8 *)(param_3 + 0x1c + uVar22 * 8) = uVar9;
    }
  }
  return;
}

// InterpolateColors___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_sse4 @ 140cb5670

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateColors___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte bVar18;
  uint in_R10D;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  
  fVar13 = _UNK_15068962c;
  fVar12 = _UNK_150689628;
  fVar11 = _UNK_150689624;
  fVar10 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar14 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar14 = param_4;
  }
  uVar14 = uVar14 & 0xfffffffc;
  if ((int)uVar14 < 1) {
    uVar16 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    do {
      auVar23 = pmovzxbd(in_XMM5,*(undefined4 *)(param_1 + uVar16));
      auVar24 = pmovzxbd(unaff_XMM6,*(undefined4 *)(param_2 + uVar16));
      unaff_XMM6._0_4_ = (float)auVar24._0_4_ * param_6 + fVar10 + (float)auVar23._0_4_ * param_5;
      unaff_XMM6._4_4_ = (float)auVar24._4_4_ * param_6 + fVar11 + (float)auVar23._4_4_ * param_5;
      unaff_XMM6._8_4_ = (float)auVar24._8_4_ * param_6 + fVar12 + (float)auVar23._8_4_ * param_5;
      unaff_XMM6._12_4_ = (float)auVar24._12_4_ * param_6 + fVar13 + (float)auVar23._12_4_ * param_5
      ;
      auVar23._0_4_ = (int)unaff_XMM6._0_4_;
      auVar23._4_4_ = (int)unaff_XMM6._4_4_;
      auVar23._8_4_ = (int)unaff_XMM6._8_4_;
      auVar23._12_4_ = (int)unaff_XMM6._12_4_;
      auVar23 = packusdw(auVar23,auVar23);
      sVar1 = auVar23._0_2_;
      sVar2 = auVar23._2_2_;
      sVar3 = auVar23._4_2_;
      sVar4 = auVar23._6_2_;
      in_XMM5._0_4_ =
           CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar23[6] - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar23[4] - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar23[2] - (0xff < sVar2),
                                      (0 < sVar1) * (sVar1 < 0x100) * auVar23[0] - (0xff < sVar1))))
      ;
      sVar5 = auVar23._8_2_;
      in_XMM5[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar23[8] - (0xff < sVar5);
      sVar6 = auVar23._10_2_;
      in_XMM5[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar23[10] - (0xff < sVar6);
      sVar7 = auVar23._12_2_;
      in_XMM5[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar23[0xc] - (0xff < sVar7);
      sVar8 = auVar23._14_2_;
      in_XMM5[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar23[0xe] - (0xff < sVar8);
      in_XMM5[8] = (0 < sVar1) * (sVar1 < 0x100) * auVar23[0] - (0xff < sVar1);
      in_XMM5[9] = (0 < sVar2) * (sVar2 < 0x100) * auVar23[2] - (0xff < sVar2);
      in_XMM5[10] = (0 < sVar3) * (sVar3 < 0x100) * auVar23[4] - (0xff < sVar3);
      in_XMM5[0xb] = (0 < sVar4) * (sVar4 < 0x100) * auVar23[6] - (0xff < sVar4);
      in_XMM5[0xc] = (0 < sVar5) * (sVar5 < 0x100) * auVar23[8] - (0xff < sVar5);
      in_XMM5[0xd] = (0 < sVar6) * (sVar6 < 0x100) * auVar23[10] - (0xff < sVar6);
      in_XMM5[0xe] = (0 < sVar7) * (sVar7 < 0x100) * auVar23[0xc] - (0xff < sVar7);
      in_XMM5[0xf] = (0 < sVar8) * (sVar8 < 0x100) * auVar23[0xe] - (0xff < sVar8);
      *(undefined4 *)(param_3 + uVar16) = in_XMM5._0_4_;
      uVar16 = uVar16 + 4;
    } while (uVar16 < uVar14);
    in_R10D = uVar14;
    if ((int)param_4 <= (int)uVar16) {
      return;
    }
  }
  uVar15 = (undefined4)uVar16;
  auVar20._4_4_ = uVar15;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar15;
  auVar20._12_4_ = uVar15;
  auVar21 = auVar20 | ___xmm_00000003000000020000000100000000;
  auVar24._0_4_ = -(uint)(auVar21._0_4_ < (int)param_4);
  auVar24._4_4_ = -(uint)(auVar21._4_4_ < (int)param_4);
  auVar24._8_4_ = -(uint)(auVar21._8_4_ < (int)param_4);
  auVar24._12_4_ = -(uint)(auVar21._12_4_ < (int)param_4);
  uVar16 = uVar16 & 0xffffffff;
  uVar14 = movmskps(in_R10D,auVar24);
  bVar18 = (char)((byte)uVar14 << 4) >> 4;
  if ((~(byte)uVar14 & 9) == 0) {
    auVar21 = ZEXT416(*(uint *)(param_1 + uVar16));
    auVar24 = ZEXT416(*(uint *)(param_2 + uVar16));
  }
  else {
    pbVar17 = (byte *)(param_1 + uVar16);
    if ((uVar14 & 1) != 0) {
      auVar21 = ZEXT116(*pbVar17);
    }
    if ((uVar14 & 2) != 0) {
      auVar24._8_8_ = auVar21._8_8_;
      auVar24._0_8_ = auVar21._0_8_ & 0xffffffffffff00ff | (ulonglong)pbVar17[1] << 8;
      auVar21 = pblendw(auVar21,auVar24,0xfd);
    }
    if ((uVar14 & 4) != 0) {
      bVar9 = auVar21[3];
      auVar23 = pmovzxwd(auVar21,auVar21);
      auVar21._8_8_ = auVar23._8_8_;
      auVar21._0_8_ =
           auVar23._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar17[2] << 0x10 |
           (ulonglong)bVar9 << 0x18;
    }
    if ((uVar14 & 8) != 0) {
      bVar9 = auVar21[2];
      auVar23 = pmovzxwd(auVar21,auVar21);
      auVar21._8_8_ = auVar23._8_8_;
      auVar21._0_8_ =
           auVar23._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar9 << 0x10 |
           (ulonglong)pbVar17[3] << 0x18;
    }
    if ((uVar14 & 1) != 0) {
      auVar24 = ZEXT116(*(byte *)(param_2 + uVar16));
    }
    if ((uVar14 & 2) != 0) {
      auVar22._8_8_ = auVar24._8_8_;
      auVar22._0_8_ =
           auVar24._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_2 + uVar16 + 1) << 8;
      auVar24 = pblendw(auVar24,auVar22,0xfd);
    }
    if ((uVar14 & 4) != 0) {
      bVar9 = auVar24[3];
      auVar23 = pmovzxwd(auVar24,auVar24);
      auVar24._8_8_ = auVar23._8_8_;
      auVar24._0_8_ =
           auVar23._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_2 + uVar16 + 2) << 0x10 |
           (ulonglong)bVar9 << 0x18;
    }
    if ((uVar14 & 8) != 0) {
      bVar9 = auVar24[2];
      auVar23 = pmovzxwd(auVar24,auVar24);
      auVar24._8_8_ = auVar23._8_8_;
      auVar24._0_8_ =
           auVar23._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar9 << 0x10 |
           (ulonglong)*(byte *)(param_2 + uVar16 + 3) << 0x18;
    }
  }
  auVar23 = pmovzxbd(auVar21,auVar21);
  auVar24 = pmovzxbd(auVar24,auVar24);
  auVar19._0_4_ =
       (int)(param_6 * (float)auVar24._0_4_ + ___xmm_3f0000003f0000003f0000003f000000 +
            param_5 * (float)auVar23._0_4_);
  auVar19._4_4_ =
       (int)(param_6 * (float)auVar24._4_4_ + _UNK_150689624 + param_5 * (float)auVar23._4_4_);
  auVar19._8_4_ =
       (int)(param_6 * (float)auVar24._8_4_ + _UNK_150689628 + param_5 * (float)auVar23._8_4_);
  auVar19._12_4_ =
       (int)(param_6 * (float)auVar24._12_4_ + _UNK_15068962c + param_5 * (float)auVar23._12_4_);
  auVar23 = packusdw(auVar19,auVar19);
  sVar1 = auVar23._0_2_;
  sVar2 = auVar23._2_2_;
  sVar3 = auVar23._4_2_;
  sVar4 = auVar23._6_2_;
  if ((bVar18 & 1) != 0) {
    *(char *)(param_3 + uVar16) = (0 < sVar1) * (sVar1 < 0x100) * auVar23[0] - (0xff < sVar1);
  }
  if ((bVar18 & 2) != 0) {
    *(char *)(param_3 + 1 + uVar16) = (0 < sVar2) * (sVar2 < 0x100) * auVar23[2] - (0xff < sVar2);
  }
  if ((bVar18 & 4) != 0) {
    *(char *)(param_3 + 2 + uVar16) = (0 < sVar3) * (sVar3 < 0x100) * auVar23[4] - (0xff < sVar3);
  }
  if (-1 < (char)bVar18) {
    return;
  }
  *(char *)(param_3 + 3 + uVar16) = (0 < sVar4) * (sVar4 < 0x100) * auVar23[6] - (0xff < sVar4);
  return;
}

// InterpolateTangents___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_sse4 @ 140cb5920

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateTangents___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,float param_8,float param_9)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  undefined2 uVar6;
  short sVar7;
  undefined2 uVar8;
  short sVar9;
  undefined2 uVar10;
  short sVar11;
  undefined2 uVar12;
  short sVar13;
  undefined2 uVar14;
  short sVar15;
  undefined2 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  byte bVar21;
  byte *pbVar22;
  byte bVar23;
  undefined4 uVar24;
  uint uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  auVar35 = ___xmm_00000000000000000000000080808080;
  fVar32 = _UNK_15068962c;
  fVar31 = _UNK_150689628;
  fVar30 = _UNK_150689624;
  fVar27 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar25 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar25 = param_7;
  }
  if ((int)(uVar25 & 0xfffffffc) < 1) {
    uVar26 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    uVar26 = 0;
    do {
      auVar38 = ZEXT416(*(uint *)(param_1 + uVar26)) ^ auVar35;
      auVar39 = ZEXT416(*(uint *)(param_2 + uVar26)) ^ auVar35;
      auVar41 = ZEXT416(*(uint *)(param_3 + uVar26)) ^ auVar35;
      auVar42 = ZEXT416(*(uint *)(param_4 + uVar26)) ^ auVar35;
      auVar38 = pmovzxbd(auVar38,auVar38);
      auVar40 = pmovzxbd(auVar39,auVar39);
      auVar41 = pmovzxbd(auVar41,auVar41);
      auVar42 = pmovzxbd(auVar42,auVar42);
      auVar39._0_4_ =
           (int)((float)auVar40._0_4_ * param_9 + fVar27 + (float)auVar38._0_4_ * param_8);
      auVar39._4_4_ =
           (int)((float)auVar40._4_4_ * param_9 + fVar30 + (float)auVar38._4_4_ * param_8);
      auVar39._8_4_ =
           (int)((float)auVar40._8_4_ * param_9 + fVar31 + (float)auVar38._8_4_ * param_8);
      auVar39._12_4_ =
           (int)((float)auVar40._12_4_ * param_9 + fVar32 + (float)auVar38._12_4_ * param_8);
      auVar38 = packusdw(auVar39,auVar39);
      sVar1 = auVar38._0_2_;
      sVar3 = auVar38._2_2_;
      auVar40[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar38[2] - (0xff < sVar3);
      auVar40[0] = (0 < sVar1) * (sVar1 < 0x100) * auVar38[0] - (0xff < sVar1);
      sVar5 = auVar38._4_2_;
      auVar40[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar38[4] - (0xff < sVar5);
      sVar7 = auVar38._6_2_;
      auVar40[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar38[6] - (0xff < sVar7);
      sVar9 = auVar38._8_2_;
      auVar40[4] = (0 < sVar9) * (sVar9 < 0x100) * auVar38[8] - (0xff < sVar9);
      sVar11 = auVar38._10_2_;
      auVar40[5] = (0 < sVar11) * (sVar11 < 0x100) * auVar38[10] - (0xff < sVar11);
      sVar13 = auVar38._12_2_;
      auVar40[6] = (0 < sVar13) * (sVar13 < 0x100) * auVar38[0xc] - (0xff < sVar13);
      sVar15 = auVar38._14_2_;
      auVar40[7] = (0 < sVar15) * (sVar15 < 0x100) * auVar38[0xe] - (0xff < sVar15);
      auVar40[8] = (0 < sVar1) * (sVar1 < 0x100) * auVar38[0] - (0xff < sVar1);
      auVar40[9] = (0 < sVar3) * (sVar3 < 0x100) * auVar38[2] - (0xff < sVar3);
      auVar40[10] = (0 < sVar5) * (sVar5 < 0x100) * auVar38[4] - (0xff < sVar5);
      auVar40[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar38[6] - (0xff < sVar7);
      auVar40[0xc] = (0 < sVar9) * (sVar9 < 0x100) * auVar38[8] - (0xff < sVar9);
      auVar40[0xd] = (0 < sVar11) * (sVar11 < 0x100) * auVar38[10] - (0xff < sVar11);
      auVar40[0xe] = (0 < sVar13) * (sVar13 < 0x100) * auVar38[0xc] - (0xff < sVar13);
      auVar40[0xf] = (0 < sVar15) * (sVar15 < 0x100) * auVar38[0xe] - (0xff < sVar15);
      auVar38._0_4_ =
           (int)((float)auVar42._0_4_ * param_9 + fVar27 + (float)auVar41._0_4_ * param_8);
      auVar38._4_4_ =
           (int)((float)auVar42._4_4_ * param_9 + fVar30 + (float)auVar41._4_4_ * param_8);
      auVar38._8_4_ =
           (int)((float)auVar42._8_4_ * param_9 + fVar31 + (float)auVar41._8_4_ * param_8);
      auVar38._12_4_ =
           (int)((float)auVar42._12_4_ * param_9 + fVar32 + (float)auVar41._12_4_ * param_8);
      auVar38 = packusdw(auVar38,auVar38);
      sVar1 = auVar38._0_2_;
      sVar3 = auVar38._2_2_;
      sVar5 = auVar38._4_2_;
      sVar7 = auVar38._6_2_;
      unaff_XMM6 = auVar40 ^ auVar35;
      *(int *)(param_5 + uVar26) = unaff_XMM6._0_4_;
      *(uint *)(param_6 + uVar26) =
           CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar38[6] - (0xff < sVar7),
                    CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar38[4] - (0xff < sVar5),
                             CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar38[2] - (0xff < sVar3),
                                      (0 < sVar1) * (sVar1 < 0x100) * auVar38[0] - (0xff < sVar1))))
           ^ auVar35._0_4_;
      uVar26 = uVar26 + 4;
    } while (uVar26 < (uVar25 & 0xfffffffc));
    in_XMM4 = auVar35;
    if ((int)param_7 <= (int)uVar26) {
      return;
    }
  }
  auVar38 = ___xmm_00000000000000000000000080808080;
  uVar24 = (undefined4)uVar26;
  auVar42._4_4_ = uVar24;
  auVar42._0_4_ = uVar24;
  auVar42._8_4_ = uVar24;
  auVar42._12_4_ = uVar24;
  auVar41 = auVar42 | ___xmm_00000003000000020000000100000000;
  auVar35._0_4_ = -(uint)(auVar41._0_4_ < (int)param_7);
  auVar35._4_4_ = -(uint)(auVar41._4_4_ < (int)param_7);
  auVar35._8_4_ = -(uint)(auVar41._8_4_ < (int)param_7);
  auVar35._12_4_ = -(uint)(auVar41._12_4_ < (int)param_7);
  uVar26 = uVar26 & 0xffffffff;
  uVar25 = movmskps(uVar24,auVar35);
  bVar23 = (char)((byte)uVar25 << 4) >> 4;
  if ((~(byte)uVar25 & 9) == 0) {
    auVar41 = ZEXT416(*(uint *)(param_1 + uVar26));
    auVar35 = ZEXT416(*(uint *)(param_2 + uVar26));
    in_XMM4 = ZEXT416(*(uint *)(param_3 + uVar26));
    unaff_XMM6 = ZEXT416(*(uint *)(param_4 + uVar26));
  }
  else {
    pbVar22 = (byte *)(param_1 + uVar26);
    if ((uVar25 & 1) != 0) {
      auVar41 = ZEXT116(*pbVar22);
    }
    if ((uVar25 & 2) != 0) {
      auVar35._8_8_ = auVar41._8_8_;
      auVar35._0_8_ = auVar41._0_8_ & 0xffffffffffff00ff | (ulonglong)pbVar22[1] << 8;
      auVar41 = pblendw(auVar41,auVar35,0xfd);
    }
    if ((uVar25 & 4) != 0) {
      bVar21 = auVar41[3];
      auVar39 = pmovzxwd(auVar41,auVar41);
      auVar41._8_8_ = auVar39._8_8_;
      auVar41._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar22[2] << 0x10 |
           (ulonglong)bVar21 << 0x18;
    }
    if ((uVar25 & 8) != 0) {
      bVar21 = auVar41[2];
      auVar39 = pmovzxwd(auVar41,auVar41);
      auVar41._8_8_ = auVar39._8_8_;
      auVar41._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar21 << 0x10 |
           (ulonglong)pbVar22[3] << 0x18;
    }
    if ((uVar25 & 1) != 0) {
      auVar35 = ZEXT116(*(byte *)(param_2 + uVar26));
    }
    if ((uVar25 & 2) != 0) {
      in_XMM4._8_8_ = auVar35._8_8_;
      in_XMM4._0_8_ =
           auVar35._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_2 + uVar26 + 1) << 8;
      auVar35 = pblendw(auVar35,in_XMM4,0xfd);
    }
    if ((uVar25 & 4) != 0) {
      bVar21 = auVar35[3];
      auVar35 = pmovzxwd(auVar35,auVar35);
      auVar35._0_8_ =
           auVar35._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_2 + uVar26 + 2) << 0x10 |
           (ulonglong)bVar21 << 0x18;
    }
    if ((uVar25 & 8) != 0) {
      bVar21 = auVar35[2];
      auVar35 = pmovzxwd(auVar35,auVar35);
      auVar35._0_8_ =
           auVar35._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar21 << 0x10 |
           (ulonglong)*(byte *)(param_2 + uVar26 + 3) << 0x18;
    }
    if ((uVar25 & 1) != 0) {
      in_XMM4 = ZEXT116(*(byte *)(param_3 + uVar26));
    }
    if ((uVar25 & 2) != 0) {
      auVar36._8_8_ = in_XMM4._8_8_;
      auVar36._0_8_ =
           in_XMM4._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_3 + uVar26 + 1) << 8;
      in_XMM4 = pblendw(in_XMM4,auVar36,0xfd);
    }
    if ((uVar25 & 4) != 0) {
      bVar21 = in_XMM4[3];
      auVar39 = pmovzxwd(in_XMM4,in_XMM4);
      in_XMM4._8_8_ = auVar39._8_8_;
      in_XMM4._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_3 + uVar26 + 2) << 0x10 |
           (ulonglong)bVar21 << 0x18;
    }
    if ((uVar25 & 8) != 0) {
      bVar21 = in_XMM4[2];
      auVar39 = pmovzxwd(in_XMM4,in_XMM4);
      in_XMM4._8_8_ = auVar39._8_8_;
      in_XMM4._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar21 << 0x10 |
           (ulonglong)*(byte *)(param_3 + uVar26 + 3) << 0x18;
    }
    if ((uVar25 & 1) != 0) {
      unaff_XMM6 = ZEXT116(*(byte *)(param_4 + uVar26));
    }
    if ((uVar25 & 2) != 0) {
      auVar37._8_8_ = unaff_XMM6._8_8_;
      auVar37._0_8_ =
           unaff_XMM6._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_4 + uVar26 + 1) << 8;
      unaff_XMM6 = pblendw(unaff_XMM6,auVar37,0xfd);
    }
    if ((uVar25 & 4) != 0) {
      bVar21 = unaff_XMM6[3];
      auVar39 = pmovzxwd(unaff_XMM6,unaff_XMM6);
      unaff_XMM6._8_8_ = auVar39._8_8_;
      unaff_XMM6._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_4 + uVar26 + 2) << 0x10 |
           (ulonglong)bVar21 << 0x18;
    }
    if ((uVar25 & 8) != 0) {
      bVar21 = unaff_XMM6[2];
      auVar39 = pmovzxwd(unaff_XMM6,unaff_XMM6);
      unaff_XMM6._8_8_ = auVar39._8_8_;
      unaff_XMM6._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar21 << 0x10 |
           (ulonglong)*(byte *)(param_4 + uVar26 + 3) << 0x18;
    }
  }
  auVar39 = pmovzxbd(auVar41 ^ ___xmm_00000000000000000000000080808080,
                     auVar41 ^ ___xmm_00000000000000000000000080808080);
  auVar35 = pmovzxbd(auVar35 ^ ___xmm_00000000000000000000000080808080,
                     auVar35 ^ ___xmm_00000000000000000000000080808080);
  auVar40 = pmovzxbd(in_XMM4 ^ ___xmm_00000000000000000000000080808080,
                     in_XMM4 ^ ___xmm_00000000000000000000000080808080);
  auVar41 = pmovzxbd(unaff_XMM6 ^ ___xmm_00000000000000000000000080808080,
                     unaff_XMM6 ^ ___xmm_00000000000000000000000080808080);
  fVar27 = param_9 * (float)auVar41._0_4_ + ___xmm_3f0000003f0000003f0000003f000000 +
           param_8 * (float)auVar40._0_4_;
  fVar30 = param_9 * (float)auVar41._4_4_ + _UNK_150689624 + param_8 * (float)auVar40._4_4_;
  fVar31 = param_9 * (float)auVar41._8_4_ + _UNK_150689628 + param_8 * (float)auVar40._8_4_;
  fVar32 = param_9 * (float)auVar41._12_4_ + _UNK_15068962c + param_8 * (float)auVar40._12_4_;
  auVar33._0_4_ =
       (int)((float)auVar35._0_4_ * param_9 + ___xmm_3f0000003f0000003f0000003f000000 +
            (float)auVar39._0_4_ * param_8);
  auVar33._4_4_ =
       (int)((float)auVar35._4_4_ * param_9 + _UNK_150689624 + (float)auVar39._4_4_ * param_8);
  auVar33._8_4_ =
       (int)((float)auVar35._8_4_ * param_9 + _UNK_150689628 + (float)auVar39._8_4_ * param_8);
  auVar33._12_4_ =
       (int)((float)auVar35._12_4_ * param_9 + _UNK_15068962c + (float)auVar39._12_4_ * param_8);
  auVar35 = packusdw(auVar33,auVar33);
  sVar1 = auVar35._0_2_;
  sVar3 = auVar35._2_2_;
  auVar34[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar35[2] - (0xff < sVar3);
  auVar34[0] = (0 < sVar1) * (sVar1 < 0x100) * auVar35[0] - (0xff < sVar1);
  sVar5 = auVar35._4_2_;
  auVar34[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar35[4] - (0xff < sVar5);
  sVar7 = auVar35._6_2_;
  auVar34[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar35[6] - (0xff < sVar7);
  sVar9 = auVar35._8_2_;
  sVar11 = auVar35._10_2_;
  sVar13 = auVar35._12_2_;
  sVar15 = auVar35._14_2_;
  auVar34._4_4_ = 0;
  auVar34[8] = (0 < sVar1) * (sVar1 < 0x100) * auVar35[0] - (0xff < sVar1);
  auVar34[9] = (0 < sVar3) * (sVar3 < 0x100) * auVar35[2] - (0xff < sVar3);
  auVar34[10] = (0 < sVar5) * (sVar5 < 0x100) * auVar35[4] - (0xff < sVar5);
  auVar34[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar35[6] - (0xff < sVar7);
  auVar34[0xc] = (0 < sVar9) * (sVar9 < 0x100) * auVar35[8] - (0xff < sVar9);
  auVar34[0xd] = (0 < sVar11) * (sVar11 < 0x100) * auVar35[10] - (0xff < sVar11);
  auVar34[0xe] = (0 < sVar13) * (sVar13 < 0x100) * auVar35[0xc] - (0xff < sVar13);
  auVar34[0xf] = (0 < sVar15) * (sVar15 < 0x100) * auVar35[0xe] - (0xff < sVar15);
  auVar34 = auVar34 ^ ___xmm_00000000000000000000000080808080;
  if ((bVar23 & 1) == 0) {
    auVar28._0_4_ = (int)fVar27;
    auVar28._4_4_ = (int)fVar30;
    auVar28._8_4_ = (int)fVar31;
    auVar28._12_4_ = (int)fVar32;
  }
  else {
    *(char *)(param_5 + uVar26) = auVar34[0];
    auVar28._0_4_ = (int)fVar27;
    auVar28._4_4_ = (int)fVar30;
    auVar28._8_4_ = (int)fVar31;
    auVar28._12_4_ = (int)fVar32;
  }
  if ((bVar23 & 2) == 0) {
    auVar35 = packusdw(auVar28,auVar28);
  }
  else {
    *(char *)(param_5 + 1 + uVar26) = auVar34[1];
    auVar35 = packusdw(auVar28,auVar28);
  }
  uVar17 = auVar35[0];
  uVar18 = auVar35[2];
  uVar19 = auVar35[4];
  uVar20 = auVar35[6];
  uVar2 = auVar35._0_2_;
  uVar4 = auVar35._2_2_;
  uVar6 = auVar35._4_2_;
  uVar8 = auVar35._6_2_;
  uVar10 = auVar35._8_2_;
  uVar12 = auVar35._10_2_;
  uVar14 = auVar35._12_2_;
  uVar16 = auVar35._14_2_;
  if ((bVar23 & 4) == 0) {
    auVar29[1] = (0 < (short)uVar4) * ((short)uVar4 < 0x100) * uVar18 - (0xff < (short)uVar4);
    auVar29[0] = (0 < (short)uVar2) * ((short)uVar2 < 0x100) * uVar17 - (0xff < (short)uVar2);
    auVar29[2] = (0 < (short)uVar6) * ((short)uVar6 < 0x100) * uVar19 - (0xff < (short)uVar6);
    auVar29[3] = (0 < (short)uVar8) * ((short)uVar8 < 0x100) * uVar20 - (0xff < (short)uVar8);
    auVar29._4_4_ = 0;
    auVar29[8] = (0 < (short)uVar2) * ((short)uVar2 < 0x100) * uVar17 - (0xff < (short)uVar2);
    auVar29[9] = (0 < (short)uVar4) * ((short)uVar4 < 0x100) * uVar18 - (0xff < (short)uVar4);
    auVar29[10] = (0 < (short)uVar6) * ((short)uVar6 < 0x100) * uVar19 - (0xff < (short)uVar6);
    auVar29[0xb] = (0 < (short)uVar8) * ((short)uVar8 < 0x100) * uVar20 - (0xff < (short)uVar8);
    auVar29[0xc] = (0 < (short)uVar10) * ((short)uVar10 < 0x100) * auVar35[8] -
                   (0xff < (short)uVar10);
    auVar29[0xd] = (0 < (short)uVar12) * ((short)uVar12 < 0x100) * auVar35[10] -
                   (0xff < (short)uVar12);
    auVar29[0xe] = (0 < (short)uVar14) * ((short)uVar14 < 0x100) * auVar35[0xc] -
                   (0xff < (short)uVar14);
    auVar29[0xf] = (0 < (short)uVar16) * ((short)uVar16 < 0x100) * auVar35[0xe] -
                   (0xff < (short)uVar16);
  }
  else {
    *(char *)(param_5 + 2 + uVar26) = auVar34[2];
    auVar29[1] = (0 < (short)uVar4) * ((short)uVar4 < 0x100) * uVar18 - (0xff < (short)uVar4);
    auVar29[0] = (0 < (short)uVar2) * ((short)uVar2 < 0x100) * uVar17 - (0xff < (short)uVar2);
    auVar29[2] = (0 < (short)uVar6) * ((short)uVar6 < 0x100) * uVar19 - (0xff < (short)uVar6);
    auVar29[3] = (0 < (short)uVar8) * ((short)uVar8 < 0x100) * uVar20 - (0xff < (short)uVar8);
    auVar29._4_4_ = 0;
    auVar29[8] = (0 < (short)uVar2) * ((short)uVar2 < 0x100) * uVar17 - (0xff < (short)uVar2);
    auVar29[9] = (0 < (short)uVar4) * ((short)uVar4 < 0x100) * uVar18 - (0xff < (short)uVar4);
    auVar29[10] = (0 < (short)uVar6) * ((short)uVar6 < 0x100) * uVar19 - (0xff < (short)uVar6);
    auVar29[0xb] = (0 < (short)uVar8) * ((short)uVar8 < 0x100) * uVar20 - (0xff < (short)uVar8);
    auVar29[0xc] = (0 < (short)uVar10) * ((short)uVar10 < 0x100) * auVar35[8] -
                   (0xff < (short)uVar10);
    auVar29[0xd] = (0 < (short)uVar12) * ((short)uVar12 < 0x100) * auVar35[10] -
                   (0xff < (short)uVar12);
    auVar29[0xe] = (0 < (short)uVar14) * ((short)uVar14 < 0x100) * auVar35[0xc] -
                   (0xff < (short)uVar14);
    auVar29[0xf] = (0 < (short)uVar16) * ((short)uVar16 < 0x100) * auVar35[0xe] -
                   (0xff < (short)uVar16);
  }
  if ((char)bVar23 < '\0') {
    *(char *)(param_5 + 3 + uVar26) = auVar34[3];
  }
  auVar29 = auVar29 ^ auVar38;
  if ((bVar23 & 1) != 0) {
    *(char *)(param_6 + uVar26) = auVar29[0];
  }
  if ((bVar23 & 2) != 0) {
    *(char *)(param_6 + 1 + uVar26) = auVar29[1];
  }
  if ((bVar23 & 4) != 0) {
    *(char *)(param_6 + 2 + uVar26) = auVar29[2];
  }
  if ((char)bVar23 < '\0') {
    *(char *)(param_6 + 3 + uVar26) = auVar29[3];
  }
  return;
}

// InterpolatePositions_sse4 @ 140cb5e90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolatePositions_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar32 [16];
  
  uVar16 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar16 = param_4;
  }
  if ((int)(uVar16 & 0xfffffffc) < 1) {
    uVar11 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar18 = 0x20;
    uVar11 = 0;
    do {
      auVar26 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar18);
      auVar30 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar18);
      pfVar1 = (float *)(param_1 + lVar18);
      auVar37 = insertps(auVar30,auVar26,0x8c);
      auVar38 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar18);
      auVar40 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar18);
      pfVar2 = (float *)(param_2 + lVar18);
      auVar33 = insertps(auVar40,auVar38,0x8c);
      auVar35._0_8_ =
           CONCAT44(auVar38._12_4_ * param_6 + auVar26._12_4_ * param_5,
                    auVar38._0_4_ * param_6 + auVar26._0_4_ * param_5);
      auVar35._8_4_ = auVar40._8_4_ * param_6 + auVar30._8_4_ * param_5;
      auVar35._12_4_ = pfVar2[1] * param_6 + pfVar1[1] * param_5;
      auVar26._0_4_ = auVar38._4_4_ * param_6 + auVar26._4_4_ * param_5;
      auVar26._4_4_ = auVar40._0_4_ * param_6 + auVar30._0_4_ * param_5;
      auVar26._8_4_ = auVar40._12_4_ * param_6 + auVar30._12_4_ * param_5;
      auVar26._12_4_ = pfVar2[2] * param_6 + pfVar1[2] * param_5;
      auVar30._0_4_ = auVar33._0_4_ * param_6 + auVar37._0_4_ * param_5;
      auVar30._4_4_ = auVar33._4_4_ * param_6 + auVar37._4_4_ * param_5;
      auVar30._8_4_ = *pfVar2 * param_6 + *pfVar1 * param_5;
      auVar30._12_4_ = pfVar2[3] * param_6 + pfVar1[3] * param_5;
      auVar38._8_4_ = auVar35._8_4_;
      auVar38._0_8_ = auVar35._0_8_;
      auVar38._12_4_ = auVar35._12_4_;
      auVar38 = insertps(auVar38,auVar26,0x30);
      auVar40._4_4_ = auVar26._8_4_;
      auVar40._0_4_ = auVar26._4_4_;
      auVar40._8_4_ = auVar30._0_4_;
      auVar40._12_4_ = auVar30._4_4_;
      auVar38 = insertps(auVar38,auVar30,0x20);
      puVar4 = (undefined4 *)(param_3 + -0x20 + lVar18);
      *puVar4 = auVar38._0_4_;
      puVar4[1] = auVar38._12_4_;
      puVar4[2] = auVar38._8_4_;
      puVar4[3] = auVar38._4_4_;
      auVar38 = blendps(auVar40,auVar35,4);
      puVar4 = (undefined4 *)(param_3 + -0x10 + lVar18);
      *puVar4 = auVar38._0_4_;
      puVar4[1] = auVar38._12_4_;
      puVar4[2] = auVar38._8_4_;
      puVar4[3] = auVar38._4_4_;
      pfVar1 = (float *)(param_3 + lVar18);
      *pfVar1 = auVar30._8_4_;
      pfVar1[1] = auVar35._12_4_;
      pfVar1[2] = auVar26._12_4_;
      pfVar1[3] = auVar30._12_4_;
      lVar18 = lVar18 + 0x30;
      uVar11 = uVar11 + 4;
    } while ((int)uVar11 < (int)(uVar16 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar11) {
      return;
    }
  }
  auVar33._0_4_ =
       -(uint)((int)(uVar11 | (uint)__xmm_00000003000000020000000100000000) < (int)param_4);
  auVar33._4_4_ =
       -(uint)((int)(uVar11 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_4);
  auVar33._8_4_ = -(uint)((int)(uVar11 | _UNK_150631e08) < (int)param_4);
  auVar33._12_4_ = -(uint)((int)(uVar11 | _UNK_150631e0c) < (int)param_4);
  uVar12 = (ulonglong)uVar11;
  pauVar3 = (undefined1 (*) [16])(param_1 + uVar12 * 0xc);
  iVar14 = movmskps(param_4,auVar33);
  bVar10 = (char)((char)iVar14 << 4) >> 4;
  if (iVar14 == 0xf) {
    auVar26 = *pauVar3;
    auVar30 = pauVar3[1];
    auVar27._0_4_ = auVar26._0_4_;
    auVar38 = insertps(auVar30,auVar26,0x8c);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._8_4_ = auVar30._8_4_;
    auVar27._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    auVar34._4_4_ = auVar30._0_4_;
    auVar34._0_4_ = auVar26._4_4_;
    auVar34._8_4_ = auVar30._12_4_;
    auVar34._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar36._0_8_ = auVar38._0_8_;
    auVar36._8_4_ = *(undefined4 *)pauVar3[2];
    auVar36._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
    auVar26 = *(undefined1 (*) [16])(param_2 + uVar12 * 0xc);
    auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar12 * 0xc);
    puVar4 = (undefined4 *)(param_2 + 0x20 + uVar12 * 0xc);
    auVar31._0_4_ = auVar26._0_4_;
    auVar38 = insertps(auVar30,auVar26,0x8c);
    auVar31._4_4_ = auVar26._12_4_;
    auVar31._8_4_ = auVar30._8_4_;
    auVar31._12_4_ = puVar4[1];
    auVar37._4_4_ = auVar30._0_4_;
    auVar37._0_4_ = auVar26._4_4_;
    auVar37._8_4_ = auVar30._12_4_;
    auVar37._12_4_ = puVar4[2];
    auVar39._0_8_ = auVar38._0_8_;
    auVar39._8_4_ = *puVar4;
    auVar39._12_4_ = puVar4[3];
  }
  else {
    auVar25._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar33._0_4_;
    auVar25._4_4_ = _UNK_150b50da4 & auVar33._4_4_;
    auVar25._8_4_ = _UNK_150b50da8 & auVar33._8_4_;
    auVar25._12_4_ = _UNK_150b50dac & auVar33._12_4_;
    lVar15 = extractps(auVar25,1);
    lVar17 = extractps(auVar25,2);
    lVar13 = extractps(auVar25,3);
    auVar26 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar15),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar17),0x20);
    auVar27 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar13),0x30);
    auVar30 = ___xmm_000000280000001c0000001000000004 & auVar33;
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar30._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar30._4_4_),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar30._8_4_),0x20);
    auVar34 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar30._12_4_),0x30);
    auVar33 = auVar33 & ___xmm_0000002c000000200000001400000008;
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar33._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar33._4_4_),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar33._8_4_),0x20);
    auVar36 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar33._12_4_),0x30);
    lVar18 = param_2 + uVar12 * 0xc;
    auVar26 = insertps(ZEXT416(*(uint *)(param_2 + uVar12 * 0xc)),*(undefined4 *)(lVar15 + lVar18),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(lVar17 + lVar18),0x20);
    auVar31 = insertps(auVar26,*(undefined4 *)(lVar13 + lVar18),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)auVar30._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar30._4_4_ + lVar18),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar30._8_4_ + lVar18),0x20);
    auVar37 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar30._12_4_ + lVar18),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + lVar18),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar33._8_4_ + lVar18),0x20);
    auVar39 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar33._12_4_ + lVar18),0x30);
  }
  fVar29 = auVar31._0_4_ * param_6 + auVar27._0_4_ * param_5;
  auVar32._0_8_ = CONCAT44(auVar31._4_4_ * param_6 + auVar27._4_4_ * param_5,fVar29);
  auVar32._8_4_ = auVar31._8_4_ * param_6 + auVar27._8_4_ * param_5;
  auVar32._12_4_ = auVar31._12_4_ * param_6 + auVar27._12_4_ * param_5;
  auVar24._0_4_ = auVar37._0_4_ * param_6 + auVar34._0_4_ * param_5;
  auVar24._4_4_ = auVar37._4_4_ * param_6 + auVar34._4_4_ * param_5;
  auVar24._8_4_ = auVar37._8_4_ * param_6 + auVar34._8_4_ * param_5;
  auVar24._12_4_ = auVar37._12_4_ * param_6 + auVar34._12_4_ * param_5;
  fVar19 = param_6 * auVar39._0_4_ + param_5 * auVar36._0_4_;
  fVar20 = param_6 * auVar39._4_4_ + param_5 * auVar36._4_4_;
  fVar21 = param_6 * auVar39._8_4_ + param_5 * auVar36._8_4_;
  fVar22 = param_6 * auVar39._12_4_ + param_5 * auVar36._12_4_;
  pfVar1 = (float *)(param_3 + uVar12 * 0xc);
  if ((~bVar10 & 0xf) == 0) {
    auVar23._8_4_ = auVar32._8_4_;
    auVar23._0_8_ = auVar32._0_8_;
    auVar23._12_4_ = auVar32._12_4_;
    auVar26 = insertps(auVar23,auVar24,0x30);
    auVar28._4_4_ = auVar24._8_4_;
    auVar28._0_4_ = auVar24._4_4_;
    auVar28._8_4_ = fVar19;
    auVar28._12_4_ = fVar20;
    auVar9._4_4_ = fVar20;
    auVar9._0_4_ = fVar19;
    auVar9._8_4_ = fVar21;
    auVar9._12_4_ = fVar22;
    auVar26 = insertps(auVar26,auVar9,0x20);
    *pfVar1 = auVar26._0_4_;
    pfVar1[1] = auVar26._12_4_;
    pfVar1[2] = auVar26._8_4_;
    pfVar1[3] = auVar26._4_4_;
    auVar26 = blendps(auVar28,auVar32,4);
    pfVar1[4] = auVar26._0_4_;
    pfVar1[5] = auVar26._12_4_;
    pfVar1[6] = auVar26._8_4_;
    pfVar1[7] = auVar26._4_4_;
    pfVar1[8] = fVar21;
    pfVar1[9] = auVar32._12_4_;
    pfVar1[10] = auVar24._12_4_;
    pfVar1[0xb] = fVar22;
  }
  else {
    if ((bVar10 & 1) != 0) {
      *pfVar1 = fVar29;
    }
    if ((bVar10 & 2) != 0) {
      uVar5 = extractps(auVar32,1);
      *(undefined8 *)(pfVar1 + 3) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      uVar5 = extractps(auVar32,2);
      *(undefined8 *)(pfVar1 + 6) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      uVar5 = extractps(auVar32,3);
      *(undefined8 *)(pfVar1 + 9) = uVar5;
    }
    if ((bVar10 & 1) != 0) {
      pfVar1[1] = auVar24._0_4_;
    }
    if ((bVar10 & 2) != 0) {
      uVar5 = extractps(auVar24,1);
      *(undefined8 *)(pfVar1 + 4) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      uVar5 = extractps(auVar24,2);
      *(undefined8 *)(pfVar1 + 7) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      uVar5 = extractps(auVar24,3);
      *(undefined8 *)(pfVar1 + 10) = uVar5;
    }
    if ((bVar10 & 1) != 0) {
      pfVar1[2] = fVar19;
    }
    if ((bVar10 & 2) != 0) {
      auVar8._4_4_ = fVar20;
      auVar8._0_4_ = fVar19;
      auVar8._8_4_ = fVar21;
      auVar8._12_4_ = fVar22;
      uVar5 = extractps(auVar8,1);
      *(undefined8 *)(pfVar1 + 5) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      auVar7._4_4_ = fVar20;
      auVar7._0_4_ = fVar19;
      auVar7._8_4_ = fVar21;
      auVar7._12_4_ = fVar22;
      uVar5 = extractps(auVar7,2);
      *(undefined8 *)(pfVar1 + 8) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      auVar6._4_4_ = fVar20;
      auVar6._0_4_ = fVar19;
      auVar6._8_4_ = fVar21;
      auVar6._12_4_ = fVar22;
      uVar5 = extractps(auVar6,3);
      *(undefined8 *)(pfVar1 + 0xb) = uVar5;
    }
  }
  return;
}

// InterpolateMotionVectors_sse4 @ 140cb6390

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateMotionVectors_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6,float param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar31 [16];
  
  uVar16 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar16 = param_4;
  }
  if ((int)(uVar16 & 0xfffffffc) < 1) {
    uVar11 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar18 = 0x20;
    uVar11 = 0;
    do {
      auVar26 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar18);
      auVar29 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar18);
      pfVar1 = (float *)(param_1 + lVar18);
      auVar37 = insertps(auVar29,auVar26,0x8c);
      auVar38 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar18);
      auVar39 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar18);
      pfVar2 = (float *)(param_2 + lVar18);
      auVar33 = insertps(auVar39,auVar38,0x8c);
      auVar35._0_8_ =
           CONCAT44((auVar38._12_4_ * param_6 + auVar26._12_4_ * param_5) * param_7,
                    (auVar38._0_4_ * param_6 + auVar26._0_4_ * param_5) * param_7);
      auVar35._8_4_ = (auVar39._8_4_ * param_6 + auVar29._8_4_ * param_5) * param_7;
      auVar35._12_4_ = (pfVar2[1] * param_6 + pfVar1[1] * param_5) * param_7;
      auVar26._0_4_ = (auVar38._4_4_ * param_6 + auVar26._4_4_ * param_5) * param_7;
      auVar26._4_4_ = (auVar39._0_4_ * param_6 + auVar29._0_4_ * param_5) * param_7;
      auVar26._8_4_ = (auVar39._12_4_ * param_6 + auVar29._12_4_ * param_5) * param_7;
      auVar26._12_4_ = (pfVar2[2] * param_6 + pfVar1[2] * param_5) * param_7;
      auVar29._0_4_ = (auVar33._0_4_ * param_6 + auVar37._0_4_ * param_5) * param_7;
      auVar29._4_4_ = (auVar33._4_4_ * param_6 + auVar37._4_4_ * param_5) * param_7;
      auVar29._8_4_ = (*pfVar2 * param_6 + *pfVar1 * param_5) * param_7;
      auVar29._12_4_ = (pfVar2[3] * param_6 + pfVar1[3] * param_5) * param_7;
      auVar38._8_4_ = auVar35._8_4_;
      auVar38._0_8_ = auVar35._0_8_;
      auVar38._12_4_ = auVar35._12_4_;
      auVar38 = insertps(auVar38,auVar26,0x30);
      auVar39._4_4_ = auVar26._8_4_;
      auVar39._0_4_ = auVar26._4_4_;
      auVar39._8_4_ = auVar29._0_4_;
      auVar39._12_4_ = auVar29._4_4_;
      auVar38 = insertps(auVar38,auVar29,0x20);
      puVar4 = (undefined4 *)(param_3 + -0x20 + lVar18);
      *puVar4 = auVar38._0_4_;
      puVar4[1] = auVar38._12_4_;
      puVar4[2] = auVar38._8_4_;
      puVar4[3] = auVar38._4_4_;
      auVar38 = blendps(auVar39,auVar35,4);
      puVar4 = (undefined4 *)(param_3 + -0x10 + lVar18);
      *puVar4 = auVar38._0_4_;
      puVar4[1] = auVar38._12_4_;
      puVar4[2] = auVar38._8_4_;
      puVar4[3] = auVar38._4_4_;
      pfVar1 = (float *)(param_3 + lVar18);
      *pfVar1 = auVar29._8_4_;
      pfVar1[1] = auVar35._12_4_;
      pfVar1[2] = auVar26._12_4_;
      pfVar1[3] = auVar29._12_4_;
      lVar18 = lVar18 + 0x30;
      uVar11 = uVar11 + 4;
    } while ((int)uVar11 < (int)(uVar16 & 0xfffffffc));
    if ((int)param_4 <= (int)uVar11) {
      return;
    }
  }
  auVar33._0_4_ =
       -(uint)((int)(uVar11 | (uint)__xmm_00000003000000020000000100000000) < (int)param_4);
  auVar33._4_4_ =
       -(uint)((int)(uVar11 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_4);
  auVar33._8_4_ = -(uint)((int)(uVar11 | _UNK_150631e08) < (int)param_4);
  auVar33._12_4_ = -(uint)((int)(uVar11 | _UNK_150631e0c) < (int)param_4);
  uVar12 = (ulonglong)uVar11;
  pauVar3 = (undefined1 (*) [16])(param_1 + uVar12 * 0xc);
  iVar14 = movmskps(param_4,auVar33);
  bVar10 = (char)((char)iVar14 << 4) >> 4;
  if (iVar14 == 0xf) {
    auVar26 = *pauVar3;
    auVar29 = pauVar3[1];
    auVar27._0_4_ = auVar26._0_4_;
    auVar38 = insertps(auVar29,auVar26,0x8c);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._8_4_ = auVar29._8_4_;
    auVar27._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    auVar32._4_4_ = auVar29._0_4_;
    auVar32._0_4_ = auVar26._4_4_;
    auVar32._8_4_ = auVar29._12_4_;
    auVar32._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar34._0_8_ = auVar38._0_8_;
    auVar34._8_4_ = *(undefined4 *)pauVar3[2];
    auVar34._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
    auVar26 = *(undefined1 (*) [16])(param_2 + uVar12 * 0xc);
    auVar29 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar12 * 0xc);
    puVar4 = (undefined4 *)(param_2 + 0x20 + uVar12 * 0xc);
    auVar30._0_4_ = auVar26._0_4_;
    auVar38 = insertps(auVar29,auVar26,0x8c);
    auVar30._4_4_ = auVar26._12_4_;
    auVar30._8_4_ = auVar29._8_4_;
    auVar30._12_4_ = puVar4[1];
    auVar37._4_4_ = auVar29._0_4_;
    auVar37._0_4_ = auVar26._4_4_;
    auVar37._8_4_ = auVar29._12_4_;
    auVar37._12_4_ = puVar4[2];
    auVar36._0_8_ = auVar38._0_8_;
    auVar36._8_4_ = *puVar4;
    auVar36._12_4_ = puVar4[3];
  }
  else {
    auVar25._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar33._0_4_;
    auVar25._4_4_ = _UNK_150b50da4 & auVar33._4_4_;
    auVar25._8_4_ = _UNK_150b50da8 & auVar33._8_4_;
    auVar25._12_4_ = _UNK_150b50dac & auVar33._12_4_;
    lVar15 = extractps(auVar25,1);
    lVar17 = extractps(auVar25,2);
    lVar13 = extractps(auVar25,3);
    auVar26 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar15),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar17),0x20);
    auVar27 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar13),0x30);
    auVar29 = ___xmm_000000280000001c0000001000000004 & auVar33;
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar29._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar29._4_4_),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar29._8_4_),0x20);
    auVar32 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar29._12_4_),0x30);
    auVar33 = auVar33 & ___xmm_0000002c000000200000001400000008;
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 + auVar33._0_4_)),
                       *(undefined4 *)(*pauVar3 + auVar33._4_4_),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar33._8_4_),0x20);
    auVar34 = insertps(auVar26,*(undefined4 *)(*pauVar3 + auVar33._12_4_),0x30);
    lVar18 = param_2 + uVar12 * 0xc;
    auVar26 = insertps(ZEXT416(*(uint *)(param_2 + uVar12 * 0xc)),*(undefined4 *)(lVar15 + lVar18),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(lVar17 + lVar18),0x20);
    auVar30 = insertps(auVar26,*(undefined4 *)(lVar13 + lVar18),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)auVar29._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar29._4_4_ + lVar18),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar29._8_4_ + lVar18),0x20);
    auVar37 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar29._12_4_ + lVar18),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + lVar18)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + lVar18),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar33._8_4_ + lVar18),0x20);
    auVar36 = insertps(auVar26,*(undefined4 *)((ulonglong)auVar33._12_4_ + lVar18),0x30);
  }
  fVar28 = (auVar30._0_4_ * param_6 + auVar27._0_4_ * param_5) * param_7;
  auVar31._0_8_ = CONCAT44((auVar30._4_4_ * param_6 + auVar27._4_4_ * param_5) * param_7,fVar28);
  auVar31._8_4_ = (auVar30._8_4_ * param_6 + auVar27._8_4_ * param_5) * param_7;
  auVar31._12_4_ = (auVar30._12_4_ * param_6 + auVar27._12_4_ * param_5) * param_7;
  auVar24._0_4_ = (auVar37._0_4_ * param_6 + auVar32._0_4_ * param_5) * param_7;
  auVar24._4_4_ = (auVar37._4_4_ * param_6 + auVar32._4_4_ * param_5) * param_7;
  auVar24._8_4_ = (auVar37._8_4_ * param_6 + auVar32._8_4_ * param_5) * param_7;
  auVar24._12_4_ = (auVar37._12_4_ * param_6 + auVar32._12_4_ * param_5) * param_7;
  fVar19 = param_7 * (param_6 * auVar36._0_4_ + param_5 * auVar34._0_4_);
  fVar20 = param_7 * (param_6 * auVar36._4_4_ + param_5 * auVar34._4_4_);
  fVar21 = param_7 * (param_6 * auVar36._8_4_ + param_5 * auVar34._8_4_);
  param_7 = param_7 * (param_6 * auVar36._12_4_ + param_5 * auVar34._12_4_);
  pfVar1 = (float *)(param_3 + uVar12 * 0xc);
  if ((~bVar10 & 0xf) == 0) {
    auVar22._8_4_ = auVar31._8_4_;
    auVar22._0_8_ = auVar31._0_8_;
    auVar22._12_4_ = auVar31._12_4_;
    auVar26 = insertps(auVar22,auVar24,0x30);
    auVar23._4_4_ = auVar24._8_4_;
    auVar23._0_4_ = auVar24._4_4_;
    auVar23._8_4_ = fVar19;
    auVar23._12_4_ = fVar20;
    auVar9._4_4_ = fVar20;
    auVar9._0_4_ = fVar19;
    auVar9._8_4_ = fVar21;
    auVar9._12_4_ = param_7;
    auVar26 = insertps(auVar26,auVar9,0x20);
    *pfVar1 = auVar26._0_4_;
    pfVar1[1] = auVar26._12_4_;
    pfVar1[2] = auVar26._8_4_;
    pfVar1[3] = auVar26._4_4_;
    auVar26 = blendps(auVar23,auVar31,4);
    pfVar1[4] = auVar26._0_4_;
    pfVar1[5] = auVar26._12_4_;
    pfVar1[6] = auVar26._8_4_;
    pfVar1[7] = auVar26._4_4_;
    pfVar1[8] = fVar21;
    pfVar1[9] = auVar31._12_4_;
    pfVar1[10] = auVar24._12_4_;
    pfVar1[0xb] = param_7;
  }
  else {
    if ((bVar10 & 1) != 0) {
      *pfVar1 = fVar28;
    }
    if ((bVar10 & 2) != 0) {
      uVar5 = extractps(auVar31,1);
      *(undefined8 *)(pfVar1 + 3) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      uVar5 = extractps(auVar31,2);
      *(undefined8 *)(pfVar1 + 6) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      uVar5 = extractps(auVar31,3);
      *(undefined8 *)(pfVar1 + 9) = uVar5;
    }
    if ((bVar10 & 1) != 0) {
      pfVar1[1] = auVar24._0_4_;
    }
    if ((bVar10 & 2) != 0) {
      uVar5 = extractps(auVar24,1);
      *(undefined8 *)(pfVar1 + 4) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      uVar5 = extractps(auVar24,2);
      *(undefined8 *)(pfVar1 + 7) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      uVar5 = extractps(auVar24,3);
      *(undefined8 *)(pfVar1 + 10) = uVar5;
    }
    if ((bVar10 & 1) != 0) {
      pfVar1[2] = fVar19;
    }
    if ((bVar10 & 2) != 0) {
      auVar8._4_4_ = fVar20;
      auVar8._0_4_ = fVar19;
      auVar8._8_4_ = fVar21;
      auVar8._12_4_ = param_7;
      uVar5 = extractps(auVar8,1);
      *(undefined8 *)(pfVar1 + 5) = uVar5;
    }
    if ((bVar10 & 4) != 0) {
      auVar7._4_4_ = fVar20;
      auVar7._0_4_ = fVar19;
      auVar7._8_4_ = fVar21;
      auVar7._12_4_ = param_7;
      uVar5 = extractps(auVar7,2);
      *(undefined8 *)(pfVar1 + 8) = uVar5;
    }
    if ((char)bVar10 < '\0') {
      auVar6._4_4_ = fVar20;
      auVar6._0_4_ = fVar19;
      auVar6._8_4_ = fVar21;
      auVar6._12_4_ = param_7;
      uVar5 = extractps(auVar6,3);
      *(undefined8 *)(pfVar1 + 0xb) = uVar5;
    }
  }
  return;
}

// InterpolateUVs_sse4 @ 140cb6900

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateUVs_sse4(longlong param_1,longlong param_2,longlong param_3,uint param_4,
                        float param_5,float param_6)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  
  uVar25 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar25 = param_4;
  }
  uVar25 = uVar25 & 0xfffffffc;
  if ((int)uVar25 < 1) {
    uVar22 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar22 = 0;
    do {
      pfVar1 = (float *)(param_1 + uVar22 * 8);
      fVar29 = pfVar1[2];
      fVar30 = pfVar1[3];
      pfVar6 = (float *)(param_1 + 0x10 + uVar22 * 8);
      fVar31 = *pfVar6;
      fVar32 = pfVar6[1];
      fVar13 = pfVar6[2];
      fVar14 = pfVar6[3];
      pfVar6 = (float *)(param_2 + uVar22 * 8);
      fVar15 = pfVar6[2];
      fVar16 = pfVar6[3];
      pfVar7 = (float *)(param_2 + 0x10 + uVar22 * 8);
      fVar17 = *pfVar7;
      fVar18 = pfVar7[1];
      fVar19 = pfVar7[2];
      fVar20 = pfVar7[3];
      puVar2 = (undefined8 *)(param_3 + uVar22 * 8);
      *puVar2 = CONCAT44(pfVar6[1] * param_6 + pfVar1[1] * param_5,
                         *pfVar6 * param_6 + *pfVar1 * param_5);
      *(float *)(puVar2 + 1) = fVar15 * param_6 + fVar29 * param_5;
      *(float *)((longlong)puVar2 + 0xc) = fVar16 * param_6 + fVar30 * param_5;
      pfVar1 = (float *)(param_3 + 0x10 + uVar22 * 8);
      *pfVar1 = fVar17 * param_6 + fVar31 * param_5;
      pfVar1[1] = fVar18 * param_6 + fVar32 * param_5;
      pfVar1[2] = fVar19 * param_6 + fVar13 * param_5;
      pfVar1[3] = fVar20 * param_6 + fVar14 * param_5;
      uVar22 = uVar22 + 4;
    } while ((int)uVar22 < (int)uVar25);
    if ((int)param_4 <= (int)uVar22) {
      return;
    }
  }
  uVar21 = (uint)uVar22;
  auVar33._0_4_ =
       -(uint)((int)(uVar21 | (uint)__xmm_00000003000000020000000100000000) < (int)param_4);
  auVar33._4_4_ =
       -(uint)((int)(uVar21 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_4);
  auVar33._8_4_ = -(uint)((int)(uVar21 | _UNK_150631e08) < (int)param_4);
  auVar33._12_4_ = -(uint)((int)(uVar21 | _UNK_150631e0c) < (int)param_4);
  uVar22 = uVar22 & 0xffffffff;
  puVar3 = (uint *)(param_1 + uVar22 * 8);
  iVar26 = movmskps(uVar25,auVar33);
  bVar23 = (char)((char)iVar26 << 4) >> 4;
  if (iVar26 == 0xf) {
    auVar37._4_4_ = puVar3[2];
    auVar37._0_4_ = *puVar3;
    auVar37._8_4_ = puVar3[4];
    auVar37._12_4_ = puVar3[6];
    auVar38._4_4_ = puVar3[3];
    auVar38._0_4_ = puVar3[1];
    auVar38._8_4_ = puVar3[5];
    auVar38._12_4_ = puVar3[7];
    puVar5 = (undefined4 *)(param_2 + uVar22 * 8);
    puVar8 = (undefined4 *)(param_2 + 0x10 + uVar22 * 8);
    auVar36._4_4_ = puVar5[2];
    auVar36._0_4_ = *puVar5;
    auVar36._8_4_ = *puVar8;
    auVar36._12_4_ = puVar8[2];
    auVar39._4_4_ = puVar5[3];
    auVar39._0_4_ = puVar5[1];
    auVar39._8_4_ = puVar8[1];
    auVar39._12_4_ = puVar8[3];
  }
  else {
    auVar35._0_4_ = ___xmm_00000018000000100000000800000000 & auVar33._0_4_;
    auVar35._4_4_ = _UNK_150b51a04 & auVar33._4_4_;
    auVar35._8_4_ = _UNK_150b51a08 & auVar33._8_4_;
    auVar35._12_4_ = _UNK_150b51a0c & auVar33._12_4_;
    lVar27 = extractps(auVar35,1);
    lVar28 = extractps(auVar35,2);
    lVar24 = extractps(auVar35,3);
    auVar36 = insertps(ZEXT416(*puVar3),*(undefined4 *)((longlong)puVar3 + lVar27),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)puVar3 + lVar28),0x20);
    auVar37 = insertps(auVar36,*(undefined4 *)((longlong)puVar3 + lVar24),0x30);
    auVar33 = auVar33 & ___xmm_0000001c000000140000000c00000004;
    auVar36 = insertps(ZEXT416(*(uint *)((longlong)puVar3 + (ulonglong)auVar33._0_4_)),
                       *(undefined4 *)((longlong)puVar3 + (ulonglong)auVar33._4_4_),0x10);
    auVar36 = insertps(auVar36,*(undefined4 *)((longlong)puVar3 + (ulonglong)auVar33._8_4_),0x20);
    auVar38 = insertps(auVar36,*(undefined4 *)((longlong)puVar3 + (ulonglong)auVar33._12_4_),0x30);
    lVar4 = param_2 + uVar22 * 8;
    auVar36 = insertps(ZEXT416(*(uint *)(param_2 + uVar22 * 8)),*(undefined4 *)(lVar27 + lVar4),0x10
                      );
    auVar36 = insertps(auVar36,*(undefined4 *)(lVar28 + lVar4),0x20);
    auVar36 = insertps(auVar36,*(undefined4 *)(lVar24 + lVar4),0x30);
    auVar39 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + lVar4)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + lVar4),0x10);
    auVar39 = insertps(auVar39,*(undefined4 *)((ulonglong)auVar33._8_4_ + lVar4),0x20);
    auVar39 = insertps(auVar39,*(undefined4 *)((ulonglong)auVar33._12_4_ + lVar4),0x30);
  }
  auVar34._0_4_ = auVar36._0_4_ * param_6 + auVar37._0_4_ * param_5;
  auVar34._4_4_ = auVar36._4_4_ * param_6 + auVar37._4_4_ * param_5;
  auVar34._8_4_ = auVar36._8_4_ * param_6 + auVar37._8_4_ * param_5;
  auVar34._12_4_ = auVar36._12_4_ * param_6 + auVar37._12_4_ * param_5;
  fVar29 = param_6 * auVar39._0_4_ + param_5 * auVar38._0_4_;
  fVar30 = param_6 * auVar39._4_4_ + param_5 * auVar38._4_4_;
  fVar31 = param_6 * auVar39._8_4_ + param_5 * auVar38._8_4_;
  fVar32 = param_6 * auVar39._12_4_ + param_5 * auVar38._12_4_;
  if ((~bVar23 & 0xf) == 0) {
    pfVar1 = (float *)(param_3 + uVar22 * 8);
    *pfVar1 = auVar34._0_4_;
    pfVar1[1] = fVar29;
    pfVar1[2] = auVar34._4_4_;
    pfVar1[3] = fVar30;
    pfVar1 = (float *)(param_3 + 0x10 + uVar22 * 8);
    *pfVar1 = auVar34._8_4_;
    pfVar1[1] = fVar31;
    pfVar1[2] = auVar34._12_4_;
    pfVar1[3] = fVar32;
  }
  else {
    if ((bVar23 & 1) != 0) {
      *(float *)(param_3 + uVar22 * 8) = auVar34._0_4_;
    }
    if ((bVar23 & 2) != 0) {
      uVar9 = extractps(auVar34,1);
      *(undefined8 *)(param_3 + 8 + uVar22 * 8) = uVar9;
    }
    if ((bVar23 & 4) != 0) {
      uVar9 = extractps(auVar34,2);
      *(undefined8 *)(param_3 + 0x10 + uVar22 * 8) = uVar9;
    }
    if ((char)bVar23 < '\0') {
      uVar9 = extractps(auVar34,3);
      *(undefined8 *)(param_3 + 0x18 + uVar22 * 8) = uVar9;
    }
    if ((bVar23 & 1) != 0) {
      *(float *)(param_3 + 4 + uVar22 * 8) = fVar29;
    }
    if ((bVar23 & 2) != 0) {
      auVar12._4_4_ = fVar30;
      auVar12._0_4_ = fVar29;
      auVar12._8_4_ = fVar31;
      auVar12._12_4_ = fVar32;
      uVar9 = extractps(auVar12,1);
      *(undefined8 *)(param_3 + 0xc + uVar22 * 8) = uVar9;
    }
    if ((bVar23 & 4) != 0) {
      auVar11._4_4_ = fVar30;
      auVar11._0_4_ = fVar29;
      auVar11._8_4_ = fVar31;
      auVar11._12_4_ = fVar32;
      uVar9 = extractps(auVar11,2);
      *(undefined8 *)(param_3 + 0x14 + uVar22 * 8) = uVar9;
    }
    if ((char)bVar23 < '\0') {
      auVar10._4_4_ = fVar30;
      auVar10._0_4_ = fVar29;
      auVar10._8_4_ = fVar31;
      auVar10._12_4_ = fVar32;
      uVar9 = extractps(auVar10,3);
      *(undefined8 *)(param_3 + 0x1c + uVar22 * 8) = uVar9;
    }
  }
  return;
}

// InterpolateColors_sse4 @ 140cb6be0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateColors_sse4
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  byte *pbVar17;
  byte bVar18;
  uint in_R10D;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  
  fVar13 = _UNK_15068962c;
  fVar12 = _UNK_150689628;
  fVar11 = _UNK_150689624;
  fVar10 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar14 = param_4 + 3;
  if (-1 < (int)param_4) {
    uVar14 = param_4;
  }
  uVar14 = uVar14 & 0xfffffffc;
  if ((int)uVar14 < 1) {
    uVar16 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar16 = 0;
    do {
      auVar23 = pmovzxbd(in_XMM5,*(undefined4 *)(param_1 + uVar16));
      auVar24 = pmovzxbd(unaff_XMM6,*(undefined4 *)(param_2 + uVar16));
      unaff_XMM6._0_4_ = (float)auVar24._0_4_ * param_6 + fVar10 + (float)auVar23._0_4_ * param_5;
      unaff_XMM6._4_4_ = (float)auVar24._4_4_ * param_6 + fVar11 + (float)auVar23._4_4_ * param_5;
      unaff_XMM6._8_4_ = (float)auVar24._8_4_ * param_6 + fVar12 + (float)auVar23._8_4_ * param_5;
      unaff_XMM6._12_4_ = (float)auVar24._12_4_ * param_6 + fVar13 + (float)auVar23._12_4_ * param_5
      ;
      auVar23._0_4_ = (int)unaff_XMM6._0_4_;
      auVar23._4_4_ = (int)unaff_XMM6._4_4_;
      auVar23._8_4_ = (int)unaff_XMM6._8_4_;
      auVar23._12_4_ = (int)unaff_XMM6._12_4_;
      auVar23 = packusdw(auVar23,auVar23);
      sVar1 = auVar23._0_2_;
      sVar2 = auVar23._2_2_;
      sVar3 = auVar23._4_2_;
      sVar4 = auVar23._6_2_;
      in_XMM5._0_4_ =
           CONCAT13((0 < sVar4) * (sVar4 < 0x100) * auVar23[6] - (0xff < sVar4),
                    CONCAT12((0 < sVar3) * (sVar3 < 0x100) * auVar23[4] - (0xff < sVar3),
                             CONCAT11((0 < sVar2) * (sVar2 < 0x100) * auVar23[2] - (0xff < sVar2),
                                      (0 < sVar1) * (sVar1 < 0x100) * auVar23[0] - (0xff < sVar1))))
      ;
      sVar5 = auVar23._8_2_;
      in_XMM5[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar23[8] - (0xff < sVar5);
      sVar6 = auVar23._10_2_;
      in_XMM5[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar23[10] - (0xff < sVar6);
      sVar7 = auVar23._12_2_;
      in_XMM5[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar23[0xc] - (0xff < sVar7);
      sVar8 = auVar23._14_2_;
      in_XMM5[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar23[0xe] - (0xff < sVar8);
      in_XMM5[8] = (0 < sVar1) * (sVar1 < 0x100) * auVar23[0] - (0xff < sVar1);
      in_XMM5[9] = (0 < sVar2) * (sVar2 < 0x100) * auVar23[2] - (0xff < sVar2);
      in_XMM5[10] = (0 < sVar3) * (sVar3 < 0x100) * auVar23[4] - (0xff < sVar3);
      in_XMM5[0xb] = (0 < sVar4) * (sVar4 < 0x100) * auVar23[6] - (0xff < sVar4);
      in_XMM5[0xc] = (0 < sVar5) * (sVar5 < 0x100) * auVar23[8] - (0xff < sVar5);
      in_XMM5[0xd] = (0 < sVar6) * (sVar6 < 0x100) * auVar23[10] - (0xff < sVar6);
      in_XMM5[0xe] = (0 < sVar7) * (sVar7 < 0x100) * auVar23[0xc] - (0xff < sVar7);
      in_XMM5[0xf] = (0 < sVar8) * (sVar8 < 0x100) * auVar23[0xe] - (0xff < sVar8);
      *(undefined4 *)(param_3 + uVar16) = in_XMM5._0_4_;
      uVar16 = uVar16 + 4;
    } while (uVar16 < uVar14);
    in_R10D = uVar14;
    if ((int)param_4 <= (int)uVar16) {
      return;
    }
  }
  uVar15 = (undefined4)uVar16;
  auVar20._4_4_ = uVar15;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar15;
  auVar20._12_4_ = uVar15;
  auVar21 = auVar20 | ___xmm_00000003000000020000000100000000;
  auVar24._0_4_ = -(uint)(auVar21._0_4_ < (int)param_4);
  auVar24._4_4_ = -(uint)(auVar21._4_4_ < (int)param_4);
  auVar24._8_4_ = -(uint)(auVar21._8_4_ < (int)param_4);
  auVar24._12_4_ = -(uint)(auVar21._12_4_ < (int)param_4);
  uVar16 = uVar16 & 0xffffffff;
  uVar14 = movmskps(in_R10D,auVar24);
  bVar18 = (char)((byte)uVar14 << 4) >> 4;
  if ((~(byte)uVar14 & 9) == 0) {
    auVar21 = ZEXT416(*(uint *)(param_1 + uVar16));
    auVar24 = ZEXT416(*(uint *)(param_2 + uVar16));
  }
  else {
    pbVar17 = (byte *)(param_1 + uVar16);
    if ((uVar14 & 1) != 0) {
      auVar21 = ZEXT116(*pbVar17);
    }
    if ((uVar14 & 2) != 0) {
      auVar24._8_8_ = auVar21._8_8_;
      auVar24._0_8_ = auVar21._0_8_ & 0xffffffffffff00ff | (ulonglong)pbVar17[1] << 8;
      auVar21 = pblendw(auVar21,auVar24,0xfd);
    }
    if ((uVar14 & 4) != 0) {
      bVar9 = auVar21[3];
      auVar23 = pmovzxwd(auVar21,auVar21);
      auVar21._8_8_ = auVar23._8_8_;
      auVar21._0_8_ =
           auVar23._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar17[2] << 0x10 |
           (ulonglong)bVar9 << 0x18;
    }
    if ((uVar14 & 8) != 0) {
      bVar9 = auVar21[2];
      auVar23 = pmovzxwd(auVar21,auVar21);
      auVar21._8_8_ = auVar23._8_8_;
      auVar21._0_8_ =
           auVar23._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar9 << 0x10 |
           (ulonglong)pbVar17[3] << 0x18;
    }
    if ((uVar14 & 1) != 0) {
      auVar24 = ZEXT116(*(byte *)(param_2 + uVar16));
    }
    if ((uVar14 & 2) != 0) {
      auVar22._8_8_ = auVar24._8_8_;
      auVar22._0_8_ =
           auVar24._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_2 + uVar16 + 1) << 8;
      auVar24 = pblendw(auVar24,auVar22,0xfd);
    }
    if ((uVar14 & 4) != 0) {
      bVar9 = auVar24[3];
      auVar23 = pmovzxwd(auVar24,auVar24);
      auVar24._8_8_ = auVar23._8_8_;
      auVar24._0_8_ =
           auVar23._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_2 + uVar16 + 2) << 0x10 |
           (ulonglong)bVar9 << 0x18;
    }
    if ((uVar14 & 8) != 0) {
      bVar9 = auVar24[2];
      auVar23 = pmovzxwd(auVar24,auVar24);
      auVar24._8_8_ = auVar23._8_8_;
      auVar24._0_8_ =
           auVar23._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar9 << 0x10 |
           (ulonglong)*(byte *)(param_2 + uVar16 + 3) << 0x18;
    }
  }
  auVar23 = pmovzxbd(auVar21,auVar21);
  auVar24 = pmovzxbd(auVar24,auVar24);
  auVar19._0_4_ =
       (int)(param_6 * (float)auVar24._0_4_ + ___xmm_3f0000003f0000003f0000003f000000 +
            param_5 * (float)auVar23._0_4_);
  auVar19._4_4_ =
       (int)(param_6 * (float)auVar24._4_4_ + _UNK_150689624 + param_5 * (float)auVar23._4_4_);
  auVar19._8_4_ =
       (int)(param_6 * (float)auVar24._8_4_ + _UNK_150689628 + param_5 * (float)auVar23._8_4_);
  auVar19._12_4_ =
       (int)(param_6 * (float)auVar24._12_4_ + _UNK_15068962c + param_5 * (float)auVar23._12_4_);
  auVar23 = packusdw(auVar19,auVar19);
  sVar1 = auVar23._0_2_;
  sVar2 = auVar23._2_2_;
  sVar3 = auVar23._4_2_;
  sVar4 = auVar23._6_2_;
  if ((bVar18 & 1) != 0) {
    *(char *)(param_3 + uVar16) = (0 < sVar1) * (sVar1 < 0x100) * auVar23[0] - (0xff < sVar1);
  }
  if ((bVar18 & 2) != 0) {
    *(char *)(param_3 + 1 + uVar16) = (0 < sVar2) * (sVar2 < 0x100) * auVar23[2] - (0xff < sVar2);
  }
  if ((bVar18 & 4) != 0) {
    *(char *)(param_3 + 2 + uVar16) = (0 < sVar3) * (sVar3 < 0x100) * auVar23[4] - (0xff < sVar3);
  }
  if (-1 < (char)bVar18) {
    return;
  }
  *(char *)(param_3 + 3 + uVar16) = (0 < sVar4) * (sVar4 < 0x100) * auVar23[6] - (0xff < sVar4);
  return;
}

// InterpolateTangents_sse4 @ 140cb6e90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateTangents_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,float param_8,float param_9)

{
  short sVar1;
  undefined2 uVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  undefined2 uVar6;
  short sVar7;
  undefined2 uVar8;
  short sVar9;
  undefined2 uVar10;
  short sVar11;
  undefined2 uVar12;
  short sVar13;
  undefined2 uVar14;
  short sVar15;
  undefined2 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  byte bVar21;
  byte *pbVar22;
  byte bVar23;
  undefined4 uVar24;
  uint uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  
  auVar35 = ___xmm_00000000000000000000000080808080;
  fVar32 = _UNK_15068962c;
  fVar31 = _UNK_150689628;
  fVar30 = _UNK_150689624;
  fVar27 = ___xmm_3f0000003f0000003f0000003f000000;
  uVar25 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar25 = param_7;
  }
  if ((int)(uVar25 & 0xfffffffc) < 1) {
    uVar26 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    uVar26 = 0;
    do {
      auVar38 = ZEXT416(*(uint *)(param_1 + uVar26)) ^ auVar35;
      auVar39 = ZEXT416(*(uint *)(param_2 + uVar26)) ^ auVar35;
      auVar41 = ZEXT416(*(uint *)(param_3 + uVar26)) ^ auVar35;
      auVar42 = ZEXT416(*(uint *)(param_4 + uVar26)) ^ auVar35;
      auVar38 = pmovzxbd(auVar38,auVar38);
      auVar40 = pmovzxbd(auVar39,auVar39);
      auVar41 = pmovzxbd(auVar41,auVar41);
      auVar42 = pmovzxbd(auVar42,auVar42);
      auVar39._0_4_ =
           (int)((float)auVar40._0_4_ * param_9 + fVar27 + (float)auVar38._0_4_ * param_8);
      auVar39._4_4_ =
           (int)((float)auVar40._4_4_ * param_9 + fVar30 + (float)auVar38._4_4_ * param_8);
      auVar39._8_4_ =
           (int)((float)auVar40._8_4_ * param_9 + fVar31 + (float)auVar38._8_4_ * param_8);
      auVar39._12_4_ =
           (int)((float)auVar40._12_4_ * param_9 + fVar32 + (float)auVar38._12_4_ * param_8);
      auVar38 = packusdw(auVar39,auVar39);
      sVar1 = auVar38._0_2_;
      sVar3 = auVar38._2_2_;
      auVar40[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar38[2] - (0xff < sVar3);
      auVar40[0] = (0 < sVar1) * (sVar1 < 0x100) * auVar38[0] - (0xff < sVar1);
      sVar5 = auVar38._4_2_;
      auVar40[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar38[4] - (0xff < sVar5);
      sVar7 = auVar38._6_2_;
      auVar40[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar38[6] - (0xff < sVar7);
      sVar9 = auVar38._8_2_;
      auVar40[4] = (0 < sVar9) * (sVar9 < 0x100) * auVar38[8] - (0xff < sVar9);
      sVar11 = auVar38._10_2_;
      auVar40[5] = (0 < sVar11) * (sVar11 < 0x100) * auVar38[10] - (0xff < sVar11);
      sVar13 = auVar38._12_2_;
      auVar40[6] = (0 < sVar13) * (sVar13 < 0x100) * auVar38[0xc] - (0xff < sVar13);
      sVar15 = auVar38._14_2_;
      auVar40[7] = (0 < sVar15) * (sVar15 < 0x100) * auVar38[0xe] - (0xff < sVar15);
      auVar40[8] = (0 < sVar1) * (sVar1 < 0x100) * auVar38[0] - (0xff < sVar1);
      auVar40[9] = (0 < sVar3) * (sVar3 < 0x100) * auVar38[2] - (0xff < sVar3);
      auVar40[10] = (0 < sVar5) * (sVar5 < 0x100) * auVar38[4] - (0xff < sVar5);
      auVar40[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar38[6] - (0xff < sVar7);
      auVar40[0xc] = (0 < sVar9) * (sVar9 < 0x100) * auVar38[8] - (0xff < sVar9);
      auVar40[0xd] = (0 < sVar11) * (sVar11 < 0x100) * auVar38[10] - (0xff < sVar11);
      auVar40[0xe] = (0 < sVar13) * (sVar13 < 0x100) * auVar38[0xc] - (0xff < sVar13);
      auVar40[0xf] = (0 < sVar15) * (sVar15 < 0x100) * auVar38[0xe] - (0xff < sVar15);
      auVar38._0_4_ =
           (int)((float)auVar42._0_4_ * param_9 + fVar27 + (float)auVar41._0_4_ * param_8);
      auVar38._4_4_ =
           (int)((float)auVar42._4_4_ * param_9 + fVar30 + (float)auVar41._4_4_ * param_8);
      auVar38._8_4_ =
           (int)((float)auVar42._8_4_ * param_9 + fVar31 + (float)auVar41._8_4_ * param_8);
      auVar38._12_4_ =
           (int)((float)auVar42._12_4_ * param_9 + fVar32 + (float)auVar41._12_4_ * param_8);
      auVar38 = packusdw(auVar38,auVar38);
      sVar1 = auVar38._0_2_;
      sVar3 = auVar38._2_2_;
      sVar5 = auVar38._4_2_;
      sVar7 = auVar38._6_2_;
      unaff_XMM6 = auVar40 ^ auVar35;
      *(int *)(param_5 + uVar26) = unaff_XMM6._0_4_;
      *(uint *)(param_6 + uVar26) =
           CONCAT13((0 < sVar7) * (sVar7 < 0x100) * auVar38[6] - (0xff < sVar7),
                    CONCAT12((0 < sVar5) * (sVar5 < 0x100) * auVar38[4] - (0xff < sVar5),
                             CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar38[2] - (0xff < sVar3),
                                      (0 < sVar1) * (sVar1 < 0x100) * auVar38[0] - (0xff < sVar1))))
           ^ auVar35._0_4_;
      uVar26 = uVar26 + 4;
    } while (uVar26 < (uVar25 & 0xfffffffc));
    in_XMM4 = auVar35;
    if ((int)param_7 <= (int)uVar26) {
      return;
    }
  }
  auVar38 = ___xmm_00000000000000000000000080808080;
  uVar24 = (undefined4)uVar26;
  auVar42._4_4_ = uVar24;
  auVar42._0_4_ = uVar24;
  auVar42._8_4_ = uVar24;
  auVar42._12_4_ = uVar24;
  auVar41 = auVar42 | ___xmm_00000003000000020000000100000000;
  auVar35._0_4_ = -(uint)(auVar41._0_4_ < (int)param_7);
  auVar35._4_4_ = -(uint)(auVar41._4_4_ < (int)param_7);
  auVar35._8_4_ = -(uint)(auVar41._8_4_ < (int)param_7);
  auVar35._12_4_ = -(uint)(auVar41._12_4_ < (int)param_7);
  uVar26 = uVar26 & 0xffffffff;
  uVar25 = movmskps(uVar24,auVar35);
  bVar23 = (char)((byte)uVar25 << 4) >> 4;
  if ((~(byte)uVar25 & 9) == 0) {
    auVar41 = ZEXT416(*(uint *)(param_1 + uVar26));
    auVar35 = ZEXT416(*(uint *)(param_2 + uVar26));
    in_XMM4 = ZEXT416(*(uint *)(param_3 + uVar26));
    unaff_XMM6 = ZEXT416(*(uint *)(param_4 + uVar26));
  }
  else {
    pbVar22 = (byte *)(param_1 + uVar26);
    if ((uVar25 & 1) != 0) {
      auVar41 = ZEXT116(*pbVar22);
    }
    if ((uVar25 & 2) != 0) {
      auVar35._8_8_ = auVar41._8_8_;
      auVar35._0_8_ = auVar41._0_8_ & 0xffffffffffff00ff | (ulonglong)pbVar22[1] << 8;
      auVar41 = pblendw(auVar41,auVar35,0xfd);
    }
    if ((uVar25 & 4) != 0) {
      bVar21 = auVar41[3];
      auVar39 = pmovzxwd(auVar41,auVar41);
      auVar41._8_8_ = auVar39._8_8_;
      auVar41._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar22[2] << 0x10 |
           (ulonglong)bVar21 << 0x18;
    }
    if ((uVar25 & 8) != 0) {
      bVar21 = auVar41[2];
      auVar39 = pmovzxwd(auVar41,auVar41);
      auVar41._8_8_ = auVar39._8_8_;
      auVar41._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar21 << 0x10 |
           (ulonglong)pbVar22[3] << 0x18;
    }
    if ((uVar25 & 1) != 0) {
      auVar35 = ZEXT116(*(byte *)(param_2 + uVar26));
    }
    if ((uVar25 & 2) != 0) {
      in_XMM4._8_8_ = auVar35._8_8_;
      in_XMM4._0_8_ =
           auVar35._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_2 + uVar26 + 1) << 8;
      auVar35 = pblendw(auVar35,in_XMM4,0xfd);
    }
    if ((uVar25 & 4) != 0) {
      bVar21 = auVar35[3];
      auVar35 = pmovzxwd(auVar35,auVar35);
      auVar35._0_8_ =
           auVar35._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_2 + uVar26 + 2) << 0x10 |
           (ulonglong)bVar21 << 0x18;
    }
    if ((uVar25 & 8) != 0) {
      bVar21 = auVar35[2];
      auVar35 = pmovzxwd(auVar35,auVar35);
      auVar35._0_8_ =
           auVar35._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar21 << 0x10 |
           (ulonglong)*(byte *)(param_2 + uVar26 + 3) << 0x18;
    }
    if ((uVar25 & 1) != 0) {
      in_XMM4 = ZEXT116(*(byte *)(param_3 + uVar26));
    }
    if ((uVar25 & 2) != 0) {
      auVar36._8_8_ = in_XMM4._8_8_;
      auVar36._0_8_ =
           in_XMM4._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_3 + uVar26 + 1) << 8;
      in_XMM4 = pblendw(in_XMM4,auVar36,0xfd);
    }
    if ((uVar25 & 4) != 0) {
      bVar21 = in_XMM4[3];
      auVar39 = pmovzxwd(in_XMM4,in_XMM4);
      in_XMM4._8_8_ = auVar39._8_8_;
      in_XMM4._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_3 + uVar26 + 2) << 0x10 |
           (ulonglong)bVar21 << 0x18;
    }
    if ((uVar25 & 8) != 0) {
      bVar21 = in_XMM4[2];
      auVar39 = pmovzxwd(in_XMM4,in_XMM4);
      in_XMM4._8_8_ = auVar39._8_8_;
      in_XMM4._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar21 << 0x10 |
           (ulonglong)*(byte *)(param_3 + uVar26 + 3) << 0x18;
    }
    if ((uVar25 & 1) != 0) {
      unaff_XMM6 = ZEXT116(*(byte *)(param_4 + uVar26));
    }
    if ((uVar25 & 2) != 0) {
      auVar37._8_8_ = unaff_XMM6._8_8_;
      auVar37._0_8_ =
           unaff_XMM6._0_8_ & 0xffffffffffff00ff | (ulonglong)*(byte *)(param_4 + uVar26 + 1) << 8;
      unaff_XMM6 = pblendw(unaff_XMM6,auVar37,0xfd);
    }
    if ((uVar25 & 4) != 0) {
      bVar21 = unaff_XMM6[3];
      auVar39 = pmovzxwd(unaff_XMM6,unaff_XMM6);
      unaff_XMM6._8_8_ = auVar39._8_8_;
      unaff_XMM6._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)*(byte *)(param_4 + uVar26 + 2) << 0x10 |
           (ulonglong)bVar21 << 0x18;
    }
    if ((uVar25 & 8) != 0) {
      bVar21 = unaff_XMM6[2];
      auVar39 = pmovzxwd(unaff_XMM6,unaff_XMM6);
      unaff_XMM6._8_8_ = auVar39._8_8_;
      unaff_XMM6._0_8_ =
           auVar39._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar21 << 0x10 |
           (ulonglong)*(byte *)(param_4 + uVar26 + 3) << 0x18;
    }
  }
  auVar39 = pmovzxbd(auVar41 ^ ___xmm_00000000000000000000000080808080,
                     auVar41 ^ ___xmm_00000000000000000000000080808080);
  auVar35 = pmovzxbd(auVar35 ^ ___xmm_00000000000000000000000080808080,
                     auVar35 ^ ___xmm_00000000000000000000000080808080);
  auVar40 = pmovzxbd(in_XMM4 ^ ___xmm_00000000000000000000000080808080,
                     in_XMM4 ^ ___xmm_00000000000000000000000080808080);
  auVar41 = pmovzxbd(unaff_XMM6 ^ ___xmm_00000000000000000000000080808080,
                     unaff_XMM6 ^ ___xmm_00000000000000000000000080808080);
  fVar27 = param_9 * (float)auVar41._0_4_ + ___xmm_3f0000003f0000003f0000003f000000 +
           param_8 * (float)auVar40._0_4_;
  fVar30 = param_9 * (float)auVar41._4_4_ + _UNK_150689624 + param_8 * (float)auVar40._4_4_;
  fVar31 = param_9 * (float)auVar41._8_4_ + _UNK_150689628 + param_8 * (float)auVar40._8_4_;
  fVar32 = param_9 * (float)auVar41._12_4_ + _UNK_15068962c + param_8 * (float)auVar40._12_4_;
  auVar33._0_4_ =
       (int)((float)auVar35._0_4_ * param_9 + ___xmm_3f0000003f0000003f0000003f000000 +
            (float)auVar39._0_4_ * param_8);
  auVar33._4_4_ =
       (int)((float)auVar35._4_4_ * param_9 + _UNK_150689624 + (float)auVar39._4_4_ * param_8);
  auVar33._8_4_ =
       (int)((float)auVar35._8_4_ * param_9 + _UNK_150689628 + (float)auVar39._8_4_ * param_8);
  auVar33._12_4_ =
       (int)((float)auVar35._12_4_ * param_9 + _UNK_15068962c + (float)auVar39._12_4_ * param_8);
  auVar35 = packusdw(auVar33,auVar33);
  sVar1 = auVar35._0_2_;
  sVar3 = auVar35._2_2_;
  auVar34[1] = (0 < sVar3) * (sVar3 < 0x100) * auVar35[2] - (0xff < sVar3);
  auVar34[0] = (0 < sVar1) * (sVar1 < 0x100) * auVar35[0] - (0xff < sVar1);
  sVar5 = auVar35._4_2_;
  auVar34[2] = (0 < sVar5) * (sVar5 < 0x100) * auVar35[4] - (0xff < sVar5);
  sVar7 = auVar35._6_2_;
  auVar34[3] = (0 < sVar7) * (sVar7 < 0x100) * auVar35[6] - (0xff < sVar7);
  sVar9 = auVar35._8_2_;
  sVar11 = auVar35._10_2_;
  sVar13 = auVar35._12_2_;
  sVar15 = auVar35._14_2_;
  auVar34._4_4_ = 0;
  auVar34[8] = (0 < sVar1) * (sVar1 < 0x100) * auVar35[0] - (0xff < sVar1);
  auVar34[9] = (0 < sVar3) * (sVar3 < 0x100) * auVar35[2] - (0xff < sVar3);
  auVar34[10] = (0 < sVar5) * (sVar5 < 0x100) * auVar35[4] - (0xff < sVar5);
  auVar34[0xb] = (0 < sVar7) * (sVar7 < 0x100) * auVar35[6] - (0xff < sVar7);
  auVar34[0xc] = (0 < sVar9) * (sVar9 < 0x100) * auVar35[8] - (0xff < sVar9);
  auVar34[0xd] = (0 < sVar11) * (sVar11 < 0x100) * auVar35[10] - (0xff < sVar11);
  auVar34[0xe] = (0 < sVar13) * (sVar13 < 0x100) * auVar35[0xc] - (0xff < sVar13);
  auVar34[0xf] = (0 < sVar15) * (sVar15 < 0x100) * auVar35[0xe] - (0xff < sVar15);
  auVar34 = auVar34 ^ ___xmm_00000000000000000000000080808080;
  if ((bVar23 & 1) == 0) {
    auVar28._0_4_ = (int)fVar27;
    auVar28._4_4_ = (int)fVar30;
    auVar28._8_4_ = (int)fVar31;
    auVar28._12_4_ = (int)fVar32;
  }
  else {
    *(char *)(param_5 + uVar26) = auVar34[0];
    auVar28._0_4_ = (int)fVar27;
    auVar28._4_4_ = (int)fVar30;
    auVar28._8_4_ = (int)fVar31;
    auVar28._12_4_ = (int)fVar32;
  }
  if ((bVar23 & 2) == 0) {
    auVar35 = packusdw(auVar28,auVar28);
  }
  else {
    *(char *)(param_5 + 1 + uVar26) = auVar34[1];
    auVar35 = packusdw(auVar28,auVar28);
  }
  uVar17 = auVar35[0];
  uVar18 = auVar35[2];
  uVar19 = auVar35[4];
  uVar20 = auVar35[6];
  uVar2 = auVar35._0_2_;
  uVar4 = auVar35._2_2_;
  uVar6 = auVar35._4_2_;
  uVar8 = auVar35._6_2_;
  uVar10 = auVar35._8_2_;
  uVar12 = auVar35._10_2_;
  uVar14 = auVar35._12_2_;
  uVar16 = auVar35._14_2_;
  if ((bVar23 & 4) == 0) {
    auVar29[1] = (0 < (short)uVar4) * ((short)uVar4 < 0x100) * uVar18 - (0xff < (short)uVar4);
    auVar29[0] = (0 < (short)uVar2) * ((short)uVar2 < 0x100) * uVar17 - (0xff < (short)uVar2);
    auVar29[2] = (0 < (short)uVar6) * ((short)uVar6 < 0x100) * uVar19 - (0xff < (short)uVar6);
    auVar29[3] = (0 < (short)uVar8) * ((short)uVar8 < 0x100) * uVar20 - (0xff < (short)uVar8);
    auVar29._4_4_ = 0;
    auVar29[8] = (0 < (short)uVar2) * ((short)uVar2 < 0x100) * uVar17 - (0xff < (short)uVar2);
    auVar29[9] = (0 < (short)uVar4) * ((short)uVar4 < 0x100) * uVar18 - (0xff < (short)uVar4);
    auVar29[10] = (0 < (short)uVar6) * ((short)uVar6 < 0x100) * uVar19 - (0xff < (short)uVar6);
    auVar29[0xb] = (0 < (short)uVar8) * ((short)uVar8 < 0x100) * uVar20 - (0xff < (short)uVar8);
    auVar29[0xc] = (0 < (short)uVar10) * ((short)uVar10 < 0x100) * auVar35[8] -
                   (0xff < (short)uVar10);
    auVar29[0xd] = (0 < (short)uVar12) * ((short)uVar12 < 0x100) * auVar35[10] -
                   (0xff < (short)uVar12);
    auVar29[0xe] = (0 < (short)uVar14) * ((short)uVar14 < 0x100) * auVar35[0xc] -
                   (0xff < (short)uVar14);
    auVar29[0xf] = (0 < (short)uVar16) * ((short)uVar16 < 0x100) * auVar35[0xe] -
                   (0xff < (short)uVar16);
  }
  else {
    *(char *)(param_5 + 2 + uVar26) = auVar34[2];
    auVar29[1] = (0 < (short)uVar4) * ((short)uVar4 < 0x100) * uVar18 - (0xff < (short)uVar4);
    auVar29[0] = (0 < (short)uVar2) * ((short)uVar2 < 0x100) * uVar17 - (0xff < (short)uVar2);
    auVar29[2] = (0 < (short)uVar6) * ((short)uVar6 < 0x100) * uVar19 - (0xff < (short)uVar6);
    auVar29[3] = (0 < (short)uVar8) * ((short)uVar8 < 0x100) * uVar20 - (0xff < (short)uVar8);
    auVar29._4_4_ = 0;
    auVar29[8] = (0 < (short)uVar2) * ((short)uVar2 < 0x100) * uVar17 - (0xff < (short)uVar2);
    auVar29[9] = (0 < (short)uVar4) * ((short)uVar4 < 0x100) * uVar18 - (0xff < (short)uVar4);
    auVar29[10] = (0 < (short)uVar6) * ((short)uVar6 < 0x100) * uVar19 - (0xff < (short)uVar6);
    auVar29[0xb] = (0 < (short)uVar8) * ((short)uVar8 < 0x100) * uVar20 - (0xff < (short)uVar8);
    auVar29[0xc] = (0 < (short)uVar10) * ((short)uVar10 < 0x100) * auVar35[8] -
                   (0xff < (short)uVar10);
    auVar29[0xd] = (0 < (short)uVar12) * ((short)uVar12 < 0x100) * auVar35[10] -
                   (0xff < (short)uVar12);
    auVar29[0xe] = (0 < (short)uVar14) * ((short)uVar14 < 0x100) * auVar35[0xc] -
                   (0xff < (short)uVar14);
    auVar29[0xf] = (0 < (short)uVar16) * ((short)uVar16 < 0x100) * auVar35[0xe] -
                   (0xff < (short)uVar16);
  }
  if ((char)bVar23 < '\0') {
    *(char *)(param_5 + 3 + uVar26) = auVar34[3];
  }
  auVar29 = auVar29 ^ auVar38;
  if ((bVar23 & 1) != 0) {
    *(char *)(param_6 + uVar26) = auVar29[0];
  }
  if ((bVar23 & 2) != 0) {
    *(char *)(param_6 + 1 + uVar26) = auVar29[1];
  }
  if ((bVar23 & 4) != 0) {
    *(char *)(param_6 + 2 + uVar26) = auVar29[2];
  }
  if ((char)bVar23 < '\0') {
    *(char *)(param_6 + 3 + uVar26) = auVar29[3];
  }
  return;
}

