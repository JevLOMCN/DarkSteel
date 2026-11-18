// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// PostIterationUpdates___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_CunfCuniCuni_sse4 @ 14013bac0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PostIterationUpdates___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_CunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,uint param_5,
               int param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  
  uVar11 = (ulonglong)param_5;
  uVar19 = param_6 - param_5;
  uVar15 = uVar19 + 3;
  if (-1 < (int)uVar19) {
    uVar15 = uVar19;
  }
  iVar16 = ((uVar15 & 0xfffffffc) - uVar19) + param_6;
  if ((int)param_5 < iVar16) {
    auVar25._4_4_ = param_4;
    auVar25._0_4_ = param_4;
    auVar25._8_4_ = param_4;
    auVar25._12_4_ = param_4;
    uVar11 = (ulonglong)(int)param_5;
    pfVar18 = (float *)(uVar11 * 0x10 + 0x30 + param_3);
    lVar12 = uVar11 * 0xc + 0x20;
    do {
      auVar31 = *(undefined1 (*) [16])(pfVar18 + -0xc);
      auVar29 = *(undefined1 (*) [16])(pfVar18 + -8);
      fVar21 = pfVar18[-4];
      fVar4 = pfVar18[-3];
      fVar5 = pfVar18[-2];
      fVar6 = *pfVar18;
      fVar7 = pfVar18[1];
      fVar8 = pfVar18[2];
      auVar37 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar12);
      auVar40 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar12);
      pfVar1 = (float *)(param_2 + lVar12);
      auVar43 = insertps(auVar40,auVar37,0x8c);
      auVar42._0_4_ = auVar31._0_4_ - auVar37._0_4_;
      auVar42._4_4_ = auVar29._0_4_ - auVar37._12_4_;
      auVar42._8_4_ = fVar21 - auVar40._8_4_;
      auVar42._12_4_ = fVar6 - pfVar1[1];
      auVar37._0_4_ = auVar31._4_4_ - auVar37._4_4_;
      auVar37._4_4_ = auVar29._4_4_ - auVar40._0_4_;
      auVar37._8_4_ = fVar4 - auVar40._12_4_;
      auVar37._12_4_ = fVar7 - pfVar1[2];
      auVar40._0_4_ = auVar31._8_4_ - auVar43._0_4_;
      auVar40._4_4_ = auVar29._8_4_ - auVar43._4_4_;
      auVar40._8_4_ = fVar5 - *pfVar1;
      auVar40._12_4_ = fVar8 - pfVar1[3];
      auVar42 = divps(auVar42,auVar25);
      auVar37 = divps(auVar37,auVar25);
      auVar40 = divps(auVar40,auVar25);
      auVar43 = insertps(auVar42,auVar37,0x30);
      auVar44._0_8_ = auVar37._4_8_;
      auVar44._8_4_ = auVar40._0_4_;
      auVar44._12_4_ = auVar40._4_4_;
      auVar43 = insertps(auVar43,auVar40,0x20);
      puVar2 = (undefined4 *)(param_1 + -0x20 + lVar12);
      *puVar2 = auVar43._0_4_;
      puVar2[1] = auVar43._12_4_;
      puVar2[2] = auVar43._8_4_;
      puVar2[3] = auVar43._4_4_;
      auVar43 = blendps(auVar44,auVar42,4);
      puVar2 = (undefined4 *)(param_1 + -0x10 + lVar12);
      *puVar2 = auVar43._0_4_;
      puVar2[1] = auVar43._12_4_;
      puVar2[2] = auVar43._8_4_;
      puVar2[3] = auVar43._4_4_;
      puVar2 = (undefined4 *)(param_1 + lVar12);
      *puVar2 = auVar40._8_4_;
      puVar2[1] = auVar42._12_4_;
      puVar2[2] = auVar37._12_4_;
      puVar2[3] = auVar40._12_4_;
      auVar31 = insertps(auVar31,auVar29,0x30);
      *(undefined1 (*) [16])(param_2 + -0x20 + lVar12) = auVar31;
      auVar31._0_8_ = auVar29._4_8_;
      auVar31._8_4_ = fVar21;
      auVar31._12_4_ = fVar4;
      *(undefined1 (*) [16])(param_2 + -0x10 + lVar12) = auVar31;
      pfVar1 = (float *)(param_2 + lVar12);
      *pfVar1 = fVar5;
      pfVar1[1] = fVar6;
      pfVar1[2] = fVar7;
      pfVar1[3] = fVar8;
      uVar11 = uVar11 + 4;
      pfVar18 = pfVar18 + 0x10;
      lVar12 = lVar12 + 0x30;
    } while ((longlong)uVar11 < (longlong)iVar16);
  }
  iVar10 = (int)uVar11;
  if (iVar10 < param_6) {
    auVar29._0_4_ = -(uint)(iVar10 + (int)__xmm_00000003000000020000000100000000 < param_6);
    auVar29._4_4_ = -(uint)(iVar10 + __xmm_00000003000000020000000100000000._4_4_ < param_6);
    auVar29._8_4_ = -(uint)(iVar10 + _UNK_150631e08 < param_6);
    auVar29._12_4_ = -(uint)(iVar10 + _UNK_150631e0c < param_6);
    lVar12 = (longlong)iVar10;
    pauVar14 = (undefined1 (*) [16])(param_3 + lVar12 * 0x10);
    iVar16 = movmskps(iVar16,auVar29);
    bVar9 = (char)((char)iVar16 << 4) >> 4;
    if (iVar16 == 0xf) {
      auVar25 = *pauVar14;
      auVar31 = pauVar14[2];
      auVar34._8_4_ = auVar25._4_4_;
      auVar34._0_8_ = auVar25._0_8_;
      auVar34._12_4_ = *(undefined4 *)(pauVar14[1] + 4);
      auVar26._4_4_ = *(undefined4 *)pauVar14[1];
      auVar26._0_4_ = auVar25._0_4_;
      auVar43._4_4_ = *(undefined4 *)(pauVar14[1] + 8);
      auVar43._0_4_ = auVar25._8_4_;
      auVar24._0_8_ = auVar31._0_8_;
      auVar24._8_4_ = auVar31._4_4_;
      auVar24._12_4_ = *(undefined4 *)(pauVar14[3] + 4);
      auVar23._8_8_ = auVar24._8_8_;
      auVar26._12_4_ = *(undefined4 *)pauVar14[3];
      auVar26._8_4_ = auVar31._0_4_;
      auVar43._12_4_ = *(undefined4 *)(pauVar14[3] + 8);
      auVar43._8_4_ = auVar31._8_4_;
      auVar23._0_8_ = auVar34._8_8_;
      auVar25 = *(undefined1 (*) [16])(param_2 + lVar12 * 0xc);
      auVar31 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar12 * 0xc);
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar12 * 0xc);
      pfVar18 = (float *)(param_2 + lVar12 * 0xc);
      auVar33._0_4_ = auVar25._0_4_;
      auVar29 = insertps(auVar31,auVar25,0x8c);
      auVar33._4_4_ = auVar25._12_4_;
      auVar33._8_4_ = auVar31._8_4_;
      auVar33._12_4_ = puVar2[1];
      auVar38._4_4_ = auVar31._0_4_;
      auVar38._0_4_ = auVar25._4_4_;
      auVar38._8_4_ = auVar31._12_4_;
      auVar38._12_4_ = puVar2[2];
      auVar41._0_8_ = auVar29._0_8_;
      auVar41._8_4_ = *puVar2;
      auVar41._12_4_ = puVar2[3];
    }
    else {
      auVar22._0_4_ = ___xmm_00000030000000200000001000000000 & auVar29._0_4_;
      auVar22._4_4_ = _UNK_150b511c4 & auVar29._4_4_;
      auVar22._8_4_ = _UNK_150b511c8 & auVar29._8_4_;
      auVar22._12_4_ = _UNK_150b511cc & auVar29._12_4_;
      lVar17 = extractps(auVar22,1);
      lVar20 = extractps(auVar22,2);
      lVar13 = extractps(auVar22,3);
      auVar25 = insertps(ZEXT416(*(uint *)*pauVar14),*(undefined4 *)(*pauVar14 + lVar17),0x10);
      auVar25 = insertps(auVar25,*(undefined4 *)(*pauVar14 + lVar20),0x20);
      auVar26 = insertps(auVar25,*(undefined4 *)(*pauVar14 + lVar13),0x30);
      auVar25 = ___xmm_00000034000000240000001400000004 & auVar29;
      auVar31 = insertps(ZEXT416(*(uint *)(*pauVar14 + auVar25._0_4_)),
                         *(undefined4 *)(*pauVar14 + auVar25._4_4_),0x10);
      auVar31 = insertps(auVar31,*(undefined4 *)(*pauVar14 + auVar25._8_4_),0x20);
      auVar23 = insertps(auVar31,*(undefined4 *)(*pauVar14 + auVar25._12_4_),0x30);
      auVar25 = ___xmm_00000038000000280000001800000008 & auVar29;
      auVar31 = insertps(ZEXT416(*(uint *)(*pauVar14 + auVar25._0_4_)),
                         *(undefined4 *)(*pauVar14 + auVar25._4_4_),0x10);
      auVar31 = insertps(auVar31,*(undefined4 *)(*pauVar14 + auVar25._8_4_),0x20);
      auVar43 = insertps(auVar31,*(undefined4 *)(*pauVar14 + auVar25._12_4_),0x30);
      auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar29._0_4_;
      auVar32._4_4_ = _UNK_150b50da4 & auVar29._4_4_;
      auVar32._8_4_ = _UNK_150b50da8 & auVar29._8_4_;
      auVar32._12_4_ = _UNK_150b50dac & auVar29._12_4_;
      lVar17 = extractps(auVar32,1);
      lVar20 = extractps(auVar32,2);
      lVar13 = extractps(auVar32,3);
      pfVar18 = (float *)(param_2 + lVar12 * 0xc);
      auVar25 = insertps(ZEXT416(*(uint *)(param_2 + lVar12 * 0xc)),
                         *(undefined4 *)(lVar17 + (longlong)pfVar18),0x10);
      auVar25 = insertps(auVar25,*(undefined4 *)(lVar20 + (longlong)pfVar18),0x20);
      auVar33 = insertps(auVar25,*(undefined4 *)(lVar13 + (longlong)pfVar18),0x30);
      auVar25 = ___xmm_000000280000001c0000001000000004 & auVar29;
      auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar25._0_4_ + (longlong)pfVar18)),
                         *(undefined4 *)((ulonglong)auVar25._4_4_ + (longlong)pfVar18),0x10);
      auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar25._8_4_ + (longlong)pfVar18),0x20)
      ;
      auVar38 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar25._12_4_ + (longlong)pfVar18),0x30
                        );
      auVar29 = auVar29 & ___xmm_0000002c000000200000001400000008;
      auVar25 = insertps(ZEXT416(*(uint *)((ulonglong)auVar29._0_4_ + (longlong)pfVar18)),
                         *(undefined4 *)((ulonglong)auVar29._4_4_ + (longlong)pfVar18),0x10);
      auVar25 = insertps(auVar25,*(undefined4 *)((ulonglong)auVar29._8_4_ + (longlong)pfVar18),0x20)
      ;
      auVar41 = insertps(auVar25,*(undefined4 *)((ulonglong)auVar29._12_4_ + (longlong)pfVar18),0x30
                        );
    }
    puVar2 = (undefined4 *)(param_1 + lVar12 * 0xc);
    auVar36._0_4_ = auVar26._0_4_ - auVar33._0_4_;
    auVar36._4_4_ = auVar26._4_4_ - auVar33._4_4_;
    auVar36._8_4_ = auVar26._8_4_ - auVar33._8_4_;
    auVar36._12_4_ = auVar26._12_4_ - auVar33._12_4_;
    auVar35._0_4_ = auVar23._0_4_ - auVar38._0_4_;
    auVar35._4_4_ = auVar23._4_4_ - auVar38._4_4_;
    auVar35._8_4_ = auVar23._8_4_ - auVar38._8_4_;
    auVar35._12_4_ = auVar23._12_4_ - auVar38._12_4_;
    fVar21 = auVar43._0_4_;
    auVar30._0_4_ = fVar21 - auVar41._0_4_;
    auVar30._4_4_ = auVar43._4_4_ - auVar41._4_4_;
    auVar30._8_4_ = auVar43._8_4_ - auVar41._8_4_;
    auVar30._12_4_ = auVar43._12_4_ - auVar41._12_4_;
    auVar27._4_4_ = param_4;
    auVar27._0_4_ = param_4;
    auVar27._8_4_ = param_4;
    auVar27._12_4_ = param_4;
    auVar29 = divps(auVar36,auVar27);
    auVar31 = divps(auVar35,auVar27);
    auVar25 = divps(auVar30,auVar27);
    if ((~bVar9 & 0xf) == 0) {
      auVar37 = insertps(auVar29,auVar31,0x30);
      auVar39._0_8_ = auVar31._4_8_;
      auVar39._8_4_ = auVar25._0_4_;
      auVar39._12_4_ = auVar25._4_4_;
      auVar37 = insertps(auVar37,auVar25,0x20);
      *puVar2 = auVar37._0_4_;
      puVar2[1] = auVar37._12_4_;
      puVar2[2] = auVar37._8_4_;
      puVar2[3] = auVar37._4_4_;
      auVar37 = blendps(auVar39,auVar29,4);
      puVar2[4] = auVar37._0_4_;
      puVar2[5] = auVar37._12_4_;
      puVar2[6] = auVar37._8_4_;
      puVar2[7] = auVar37._4_4_;
      puVar2[8] = auVar25._8_4_;
      puVar2[9] = auVar29._12_4_;
      puVar2[10] = auVar31._12_4_;
      puVar2[0xb] = auVar25._12_4_;
      auVar25 = insertps(auVar26,auVar23,0x30);
      auVar25 = insertps(auVar25,auVar43,0x20);
      *pfVar18 = auVar25._0_4_;
      pfVar18[1] = auVar25._12_4_;
      pfVar18[2] = auVar25._8_4_;
      pfVar18[3] = auVar25._4_4_;
      auVar28._0_8_ = auVar23._4_8_;
      auVar28._8_4_ = fVar21;
      auVar28._12_4_ = auVar43._4_4_;
      auVar25 = blendps(auVar28,auVar26,4);
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar12 * 0xc);
      *puVar2 = auVar25._0_4_;
      puVar2[1] = auVar25._12_4_;
      puVar2[2] = auVar25._8_4_;
      puVar2[3] = auVar25._4_4_;
      pfVar18 = (float *)(param_2 + 0x20 + lVar12 * 0xc);
      *pfVar18 = auVar43._8_4_;
      pfVar18[1] = auVar26._12_4_;
      pfVar18[2] = auVar23._12_4_;
      pfVar18[3] = auVar43._12_4_;
    }
    else {
      if ((bVar9 & 1) != 0) {
        *puVar2 = auVar29._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar29,1);
        *(undefined8 *)(puVar2 + 3) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar29,2);
        *(undefined8 *)(puVar2 + 6) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar29,3);
        *(undefined8 *)(puVar2 + 9) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        puVar2[1] = auVar31._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar31,1);
        *(undefined8 *)(puVar2 + 4) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar31,2);
        *(undefined8 *)(puVar2 + 7) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar31,3);
        *(undefined8 *)(puVar2 + 10) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        puVar2[2] = auVar25._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar25,1);
        *(undefined8 *)(puVar2 + 5) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar25,2);
        *(undefined8 *)(puVar2 + 8) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar25,3);
        *(undefined8 *)(puVar2 + 0xb) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        *pfVar18 = auVar26._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar26,1);
        *(undefined8 *)(param_2 + 0xc + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar26,2);
        *(undefined8 *)(param_2 + 0x18 + lVar12 * 0xc) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar26,3);
        *(undefined8 *)(param_2 + 0x24 + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        *(float *)(param_2 + 4 + lVar12 * 0xc) = auVar23._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar23,1);
        *(undefined8 *)(param_2 + 0x10 + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar23,2);
        *(undefined8 *)(param_2 + 0x1c + lVar12 * 0xc) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar23,3);
        *(undefined8 *)(param_2 + 0x28 + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        *(float *)(param_2 + 8 + lVar12 * 0xc) = fVar21;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar43,1);
        *(undefined8 *)(param_2 + 0x14 + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar43,2);
        *(undefined8 *)(param_2 + 0x20 + lVar12 * 0xc) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar43,3);
        *(undefined8 *)(param_2 + 0x2c + lVar12 * 0xc) = uVar3;
      }
    }
  }
  return;
}

// PostIterationUpdates_sse4 @ 14013c240

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PostIterationUpdates_sse4
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,uint param_5,
               int param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 (*pauVar14) [16];
  uint uVar15;
  int iVar16;
  longlong lVar17;
  float *pfVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  
  uVar11 = (ulonglong)param_5;
  uVar19 = param_6 - param_5;
  uVar15 = uVar19 + 3;
  if (-1 < (int)uVar19) {
    uVar15 = uVar19;
  }
  iVar16 = ((uVar15 & 0xfffffffc) - uVar19) + param_6;
  if ((int)param_5 < iVar16) {
    auVar25._4_4_ = param_4;
    auVar25._0_4_ = param_4;
    auVar25._8_4_ = param_4;
    auVar25._12_4_ = param_4;
    uVar11 = (ulonglong)(int)param_5;
    pfVar18 = (float *)(uVar11 * 0x10 + 0x30 + param_3);
    lVar12 = uVar11 * 0xc + 0x20;
    do {
      auVar31 = *(undefined1 (*) [16])(pfVar18 + -0xc);
      auVar29 = *(undefined1 (*) [16])(pfVar18 + -8);
      fVar21 = pfVar18[-4];
      fVar4 = pfVar18[-3];
      fVar5 = pfVar18[-2];
      fVar6 = *pfVar18;
      fVar7 = pfVar18[1];
      fVar8 = pfVar18[2];
      auVar37 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar12);
      auVar40 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar12);
      pfVar1 = (float *)(param_2 + lVar12);
      auVar43 = insertps(auVar40,auVar37,0x8c);
      auVar42._0_4_ = auVar31._0_4_ - auVar37._0_4_;
      auVar42._4_4_ = auVar29._0_4_ - auVar37._12_4_;
      auVar42._8_4_ = fVar21 - auVar40._8_4_;
      auVar42._12_4_ = fVar6 - pfVar1[1];
      auVar37._0_4_ = auVar31._4_4_ - auVar37._4_4_;
      auVar37._4_4_ = auVar29._4_4_ - auVar40._0_4_;
      auVar37._8_4_ = fVar4 - auVar40._12_4_;
      auVar37._12_4_ = fVar7 - pfVar1[2];
      auVar40._0_4_ = auVar31._8_4_ - auVar43._0_4_;
      auVar40._4_4_ = auVar29._8_4_ - auVar43._4_4_;
      auVar40._8_4_ = fVar5 - *pfVar1;
      auVar40._12_4_ = fVar8 - pfVar1[3];
      auVar42 = divps(auVar42,auVar25);
      auVar37 = divps(auVar37,auVar25);
      auVar40 = divps(auVar40,auVar25);
      auVar43 = insertps(auVar42,auVar37,0x30);
      auVar44._0_8_ = auVar37._4_8_;
      auVar44._8_4_ = auVar40._0_4_;
      auVar44._12_4_ = auVar40._4_4_;
      auVar43 = insertps(auVar43,auVar40,0x20);
      puVar2 = (undefined4 *)(param_1 + -0x20 + lVar12);
      *puVar2 = auVar43._0_4_;
      puVar2[1] = auVar43._12_4_;
      puVar2[2] = auVar43._8_4_;
      puVar2[3] = auVar43._4_4_;
      auVar43 = blendps(auVar44,auVar42,4);
      puVar2 = (undefined4 *)(param_1 + -0x10 + lVar12);
      *puVar2 = auVar43._0_4_;
      puVar2[1] = auVar43._12_4_;
      puVar2[2] = auVar43._8_4_;
      puVar2[3] = auVar43._4_4_;
      puVar2 = (undefined4 *)(param_1 + lVar12);
      *puVar2 = auVar40._8_4_;
      puVar2[1] = auVar42._12_4_;
      puVar2[2] = auVar37._12_4_;
      puVar2[3] = auVar40._12_4_;
      auVar31 = insertps(auVar31,auVar29,0x30);
      *(undefined1 (*) [16])(param_2 + -0x20 + lVar12) = auVar31;
      auVar31._0_8_ = auVar29._4_8_;
      auVar31._8_4_ = fVar21;
      auVar31._12_4_ = fVar4;
      *(undefined1 (*) [16])(param_2 + -0x10 + lVar12) = auVar31;
      pfVar1 = (float *)(param_2 + lVar12);
      *pfVar1 = fVar5;
      pfVar1[1] = fVar6;
      pfVar1[2] = fVar7;
      pfVar1[3] = fVar8;
      uVar11 = uVar11 + 4;
      pfVar18 = pfVar18 + 0x10;
      lVar12 = lVar12 + 0x30;
    } while ((longlong)uVar11 < (longlong)iVar16);
  }
  iVar10 = (int)uVar11;
  if (iVar10 < param_6) {
    auVar29._0_4_ = -(uint)(iVar10 + (int)__xmm_00000003000000020000000100000000 < param_6);
    auVar29._4_4_ = -(uint)(iVar10 + __xmm_00000003000000020000000100000000._4_4_ < param_6);
    auVar29._8_4_ = -(uint)(iVar10 + _UNK_150631e08 < param_6);
    auVar29._12_4_ = -(uint)(iVar10 + _UNK_150631e0c < param_6);
    lVar12 = (longlong)iVar10;
    pauVar14 = (undefined1 (*) [16])(param_3 + lVar12 * 0x10);
    iVar16 = movmskps(iVar16,auVar29);
    bVar9 = (char)((char)iVar16 << 4) >> 4;
    if (iVar16 == 0xf) {
      auVar25 = *pauVar14;
      auVar31 = pauVar14[2];
      auVar34._8_4_ = auVar25._4_4_;
      auVar34._0_8_ = auVar25._0_8_;
      auVar34._12_4_ = *(undefined4 *)(pauVar14[1] + 4);
      auVar26._4_4_ = *(undefined4 *)pauVar14[1];
      auVar26._0_4_ = auVar25._0_4_;
      auVar43._4_4_ = *(undefined4 *)(pauVar14[1] + 8);
      auVar43._0_4_ = auVar25._8_4_;
      auVar24._0_8_ = auVar31._0_8_;
      auVar24._8_4_ = auVar31._4_4_;
      auVar24._12_4_ = *(undefined4 *)(pauVar14[3] + 4);
      auVar23._8_8_ = auVar24._8_8_;
      auVar26._12_4_ = *(undefined4 *)pauVar14[3];
      auVar26._8_4_ = auVar31._0_4_;
      auVar43._12_4_ = *(undefined4 *)(pauVar14[3] + 8);
      auVar43._8_4_ = auVar31._8_4_;
      auVar23._0_8_ = auVar34._8_8_;
      auVar25 = *(undefined1 (*) [16])(param_2 + lVar12 * 0xc);
      auVar31 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar12 * 0xc);
      puVar2 = (undefined4 *)(param_2 + 0x20 + lVar12 * 0xc);
      pfVar18 = (float *)(param_2 + lVar12 * 0xc);
      auVar33._0_4_ = auVar25._0_4_;
      auVar29 = insertps(auVar31,auVar25,0x8c);
      auVar33._4_4_ = auVar25._12_4_;
      auVar33._8_4_ = auVar31._8_4_;
      auVar33._12_4_ = puVar2[1];
      auVar38._4_4_ = auVar31._0_4_;
      auVar38._0_4_ = auVar25._4_4_;
      auVar38._8_4_ = auVar31._12_4_;
      auVar38._12_4_ = puVar2[2];
      auVar41._0_8_ = auVar29._0_8_;
      auVar41._8_4_ = *puVar2;
      auVar41._12_4_ = puVar2[3];
    }
    else {
      auVar22._0_4_ = ___xmm_00000030000000200000001000000000 & auVar29._0_4_;
      auVar22._4_4_ = _UNK_150b511c4 & auVar29._4_4_;
      auVar22._8_4_ = _UNK_150b511c8 & auVar29._8_4_;
      auVar22._12_4_ = _UNK_150b511cc & auVar29._12_4_;
      lVar17 = extractps(auVar22,1);
      lVar20 = extractps(auVar22,2);
      lVar13 = extractps(auVar22,3);
      auVar25 = insertps(ZEXT416(*(uint *)*pauVar14),*(undefined4 *)(*pauVar14 + lVar17),0x10);
      auVar25 = insertps(auVar25,*(undefined4 *)(*pauVar14 + lVar20),0x20);
      auVar26 = insertps(auVar25,*(undefined4 *)(*pauVar14 + lVar13),0x30);
      auVar25 = ___xmm_00000034000000240000001400000004 & auVar29;
      auVar31 = insertps(ZEXT416(*(uint *)(*pauVar14 + auVar25._0_4_)),
                         *(undefined4 *)(*pauVar14 + auVar25._4_4_),0x10);
      auVar31 = insertps(auVar31,*(undefined4 *)(*pauVar14 + auVar25._8_4_),0x20);
      auVar23 = insertps(auVar31,*(undefined4 *)(*pauVar14 + auVar25._12_4_),0x30);
      auVar25 = ___xmm_00000038000000280000001800000008 & auVar29;
      auVar31 = insertps(ZEXT416(*(uint *)(*pauVar14 + auVar25._0_4_)),
                         *(undefined4 *)(*pauVar14 + auVar25._4_4_),0x10);
      auVar31 = insertps(auVar31,*(undefined4 *)(*pauVar14 + auVar25._8_4_),0x20);
      auVar43 = insertps(auVar31,*(undefined4 *)(*pauVar14 + auVar25._12_4_),0x30);
      auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar29._0_4_;
      auVar32._4_4_ = _UNK_150b50da4 & auVar29._4_4_;
      auVar32._8_4_ = _UNK_150b50da8 & auVar29._8_4_;
      auVar32._12_4_ = _UNK_150b50dac & auVar29._12_4_;
      lVar17 = extractps(auVar32,1);
      lVar20 = extractps(auVar32,2);
      lVar13 = extractps(auVar32,3);
      pfVar18 = (float *)(param_2 + lVar12 * 0xc);
      auVar25 = insertps(ZEXT416(*(uint *)(param_2 + lVar12 * 0xc)),
                         *(undefined4 *)(lVar17 + (longlong)pfVar18),0x10);
      auVar25 = insertps(auVar25,*(undefined4 *)(lVar20 + (longlong)pfVar18),0x20);
      auVar33 = insertps(auVar25,*(undefined4 *)(lVar13 + (longlong)pfVar18),0x30);
      auVar25 = ___xmm_000000280000001c0000001000000004 & auVar29;
      auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar25._0_4_ + (longlong)pfVar18)),
                         *(undefined4 *)((ulonglong)auVar25._4_4_ + (longlong)pfVar18),0x10);
      auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar25._8_4_ + (longlong)pfVar18),0x20)
      ;
      auVar38 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar25._12_4_ + (longlong)pfVar18),0x30
                        );
      auVar29 = auVar29 & ___xmm_0000002c000000200000001400000008;
      auVar25 = insertps(ZEXT416(*(uint *)((ulonglong)auVar29._0_4_ + (longlong)pfVar18)),
                         *(undefined4 *)((ulonglong)auVar29._4_4_ + (longlong)pfVar18),0x10);
      auVar25 = insertps(auVar25,*(undefined4 *)((ulonglong)auVar29._8_4_ + (longlong)pfVar18),0x20)
      ;
      auVar41 = insertps(auVar25,*(undefined4 *)((ulonglong)auVar29._12_4_ + (longlong)pfVar18),0x30
                        );
    }
    puVar2 = (undefined4 *)(param_1 + lVar12 * 0xc);
    auVar36._0_4_ = auVar26._0_4_ - auVar33._0_4_;
    auVar36._4_4_ = auVar26._4_4_ - auVar33._4_4_;
    auVar36._8_4_ = auVar26._8_4_ - auVar33._8_4_;
    auVar36._12_4_ = auVar26._12_4_ - auVar33._12_4_;
    auVar35._0_4_ = auVar23._0_4_ - auVar38._0_4_;
    auVar35._4_4_ = auVar23._4_4_ - auVar38._4_4_;
    auVar35._8_4_ = auVar23._8_4_ - auVar38._8_4_;
    auVar35._12_4_ = auVar23._12_4_ - auVar38._12_4_;
    fVar21 = auVar43._0_4_;
    auVar30._0_4_ = fVar21 - auVar41._0_4_;
    auVar30._4_4_ = auVar43._4_4_ - auVar41._4_4_;
    auVar30._8_4_ = auVar43._8_4_ - auVar41._8_4_;
    auVar30._12_4_ = auVar43._12_4_ - auVar41._12_4_;
    auVar27._4_4_ = param_4;
    auVar27._0_4_ = param_4;
    auVar27._8_4_ = param_4;
    auVar27._12_4_ = param_4;
    auVar29 = divps(auVar36,auVar27);
    auVar31 = divps(auVar35,auVar27);
    auVar25 = divps(auVar30,auVar27);
    if ((~bVar9 & 0xf) == 0) {
      auVar37 = insertps(auVar29,auVar31,0x30);
      auVar39._0_8_ = auVar31._4_8_;
      auVar39._8_4_ = auVar25._0_4_;
      auVar39._12_4_ = auVar25._4_4_;
      auVar37 = insertps(auVar37,auVar25,0x20);
      *puVar2 = auVar37._0_4_;
      puVar2[1] = auVar37._12_4_;
      puVar2[2] = auVar37._8_4_;
      puVar2[3] = auVar37._4_4_;
      auVar37 = blendps(auVar39,auVar29,4);
      puVar2[4] = auVar37._0_4_;
      puVar2[5] = auVar37._12_4_;
      puVar2[6] = auVar37._8_4_;
      puVar2[7] = auVar37._4_4_;
      puVar2[8] = auVar25._8_4_;
      puVar2[9] = auVar29._12_4_;
      puVar2[10] = auVar31._12_4_;
      puVar2[0xb] = auVar25._12_4_;
      auVar25 = insertps(auVar26,auVar23,0x30);
      auVar25 = insertps(auVar25,auVar43,0x20);
      *pfVar18 = auVar25._0_4_;
      pfVar18[1] = auVar25._12_4_;
      pfVar18[2] = auVar25._8_4_;
      pfVar18[3] = auVar25._4_4_;
      auVar28._0_8_ = auVar23._4_8_;
      auVar28._8_4_ = fVar21;
      auVar28._12_4_ = auVar43._4_4_;
      auVar25 = blendps(auVar28,auVar26,4);
      puVar2 = (undefined4 *)(param_2 + 0x10 + lVar12 * 0xc);
      *puVar2 = auVar25._0_4_;
      puVar2[1] = auVar25._12_4_;
      puVar2[2] = auVar25._8_4_;
      puVar2[3] = auVar25._4_4_;
      pfVar18 = (float *)(param_2 + 0x20 + lVar12 * 0xc);
      *pfVar18 = auVar43._8_4_;
      pfVar18[1] = auVar26._12_4_;
      pfVar18[2] = auVar23._12_4_;
      pfVar18[3] = auVar43._12_4_;
    }
    else {
      if ((bVar9 & 1) != 0) {
        *puVar2 = auVar29._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar29,1);
        *(undefined8 *)(puVar2 + 3) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar29,2);
        *(undefined8 *)(puVar2 + 6) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar29,3);
        *(undefined8 *)(puVar2 + 9) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        puVar2[1] = auVar31._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar31,1);
        *(undefined8 *)(puVar2 + 4) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar31,2);
        *(undefined8 *)(puVar2 + 7) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar31,3);
        *(undefined8 *)(puVar2 + 10) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        puVar2[2] = auVar25._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar25,1);
        *(undefined8 *)(puVar2 + 5) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar25,2);
        *(undefined8 *)(puVar2 + 8) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar25,3);
        *(undefined8 *)(puVar2 + 0xb) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        *pfVar18 = auVar26._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar26,1);
        *(undefined8 *)(param_2 + 0xc + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar26,2);
        *(undefined8 *)(param_2 + 0x18 + lVar12 * 0xc) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar26,3);
        *(undefined8 *)(param_2 + 0x24 + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        *(float *)(param_2 + 4 + lVar12 * 0xc) = auVar23._0_4_;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar23,1);
        *(undefined8 *)(param_2 + 0x10 + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar23,2);
        *(undefined8 *)(param_2 + 0x1c + lVar12 * 0xc) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar23,3);
        *(undefined8 *)(param_2 + 0x28 + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 1) != 0) {
        *(float *)(param_2 + 8 + lVar12 * 0xc) = fVar21;
      }
      if ((bVar9 & 2) != 0) {
        uVar3 = extractps(auVar43,1);
        *(undefined8 *)(param_2 + 0x14 + lVar12 * 0xc) = uVar3;
      }
      if ((bVar9 & 4) != 0) {
        uVar3 = extractps(auVar43,2);
        *(undefined8 *)(param_2 + 0x20 + lVar12 * 0xc) = uVar3;
      }
      if ((char)bVar9 < '\0') {
        uVar3 = extractps(auVar43,3);
        *(undefined8 *)(param_2 + 0x2c + lVar12 * 0xc) = uVar3;
      }
    }
  }
  return;
}

