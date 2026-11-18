// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// aesni_multi_cbc_encrypt @ 140e0c8c0

void aesni_multi_cbc_encrypt(undefined8 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar31 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_200 [16];
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined1 auStack_140 [16];
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  
  if ((1 < param_3) && ((DAT_15540a9f4 & 0x10000000) != 0)) {
    auVar29 = *param_2;
    iStack_1e0 = *(int *)(param_1 + 2);
    iVar9 = 0;
    if (0 < iStack_1e0) {
      iVar9 = iStack_1e0;
    }
    pauVar13 = (undefined1 (*) [16])*param_1;
    if (iStack_1e0 < 1) {
      pauVar13 = &auStack_200;
    }
    lVar10 = param_1[1] - (longlong)pauVar13;
    iStack_1dc = *(int *)(param_1 + 7);
    if (iVar9 < iStack_1dc) {
      iVar9 = iStack_1dc;
    }
    pauVar12 = (undefined1 (*) [16])param_1[5];
    if (iStack_1dc < 1) {
      pauVar12 = &auStack_200;
    }
    lStack_1b8 = param_1[6] - (longlong)pauVar12;
    iStack_1d8 = *(int *)(param_1 + 0xc);
    if (iVar9 < iStack_1d8) {
      iVar9 = iStack_1d8;
    }
    pauVar18 = (undefined1 (*) [16])param_1[10];
    if (iStack_1d8 < 1) {
      pauVar18 = &auStack_200;
    }
    lStack_1b0 = param_1[0xb] - (longlong)pauVar18;
    iStack_1d4 = *(int *)(param_1 + 0x11);
    if (iVar9 < iStack_1d4) {
      iVar9 = iStack_1d4;
    }
    pauVar15 = (undefined1 (*) [16])param_1[0xf];
    if (iStack_1d4 < 1) {
      pauVar15 = &auStack_200;
    }
    lStack_1a8 = param_1[0x10] - (longlong)pauVar15;
    iStack_1d0 = *(int *)(param_1 + 0x16);
    if (iVar9 < iStack_1d0) {
      iVar9 = iStack_1d0;
    }
    pauVar22 = (undefined1 (*) [16])param_1[0x14];
    if (iStack_1d0 < 1) {
      pauVar22 = &auStack_200;
    }
    lStack_1a0 = param_1[0x15] - (longlong)pauVar22;
    iStack_1cc = *(int *)(param_1 + 0x1b);
    if (iVar9 < iStack_1cc) {
      iVar9 = iStack_1cc;
    }
    pauVar17 = (undefined1 (*) [16])param_1[0x19];
    if (iStack_1cc < 1) {
      pauVar17 = &auStack_200;
    }
    lStack_198 = param_1[0x1a] - (longlong)pauVar17;
    iStack_1c8 = *(int *)(param_1 + 0x20);
    if (iVar9 < iStack_1c8) {
      iVar9 = iStack_1c8;
    }
    pauVar25 = (undefined1 (*) [16])param_1[0x1e];
    if (iStack_1c8 < 1) {
      pauVar25 = &auStack_200;
    }
    lStack_190 = param_1[0x1f] - (longlong)pauVar25;
    iStack_1c4 = *(int *)(param_1 + 0x25);
    if (iVar9 < iStack_1c4) {
      iVar9 = iStack_1c4;
    }
    pauVar20 = (undefined1 (*) [16])param_1[0x23];
    if (iStack_1c4 < 1) {
      pauVar20 = &auStack_200;
    }
    lStack_188 = param_1[0x24] - (longlong)pauVar20;
    if (iVar9 != 0) {
      auVar40 = param_2[1];
      auVar28 = param_2[2];
      uVar1 = *(uint *)param_2[0xf];
      auVar38 = *(undefined1 (*) [16])(param_1 + 3) ^ auVar29 ^ *pauVar13;
      auVar31 = *(undefined1 (*) [16])(param_1 + 8) ^ auVar29 ^ *pauVar12;
      auVar35 = *(undefined1 (*) [16])(param_1 + 0xd) ^ auVar29 ^ *pauVar18;
      auVar33 = *(undefined1 (*) [16])(param_1 + 0x12) ^ auVar29 ^ *pauVar15;
      auVar37 = *(undefined1 (*) [16])(param_1 + 0x17) ^ auVar29 ^ *pauVar22;
      auVar32 = *(undefined1 (*) [16])(param_1 + 0x1c) ^ auVar29 ^ *pauVar17;
      auVar39 = *(undefined1 (*) [16])(param_1 + 0x21) ^ auVar29 ^ *pauVar25;
      auVar34 = *(undefined1 (*) [16])(param_1 + 0x26) ^ auVar29 ^ *pauVar20;
      do {
        auVar38 = aesenc(auVar38,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar35 = aesenc(auVar35,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        pauVar14 = pauVar13;
        if (iStack_1e0 < 2) {
          pauVar14 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar40);
        puVar11 = *pauVar13 + lVar10;
        if (iStack_1e0 < 1) {
          puVar11 = auStack_200;
        }
        auVar41 = aesenc(auVar32,auVar40);
        lVar10 = (longlong)puVar11 - (longlong)pauVar14;
        auVar39 = aesenc(auVar39,auVar40);
        auVar2 = auVar29 ^ pauVar14[1];
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[3];
        auVar32 = aesenc(auVar38,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar38 = aesenc(auVar35,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        pauVar16 = pauVar12;
        if (iStack_1dc < 2) {
          pauVar16 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar28);
        puVar11 = *pauVar12 + lStack_1b8;
        if (iStack_1dc < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar41,auVar28);
        lStack_1b8 = (longlong)puVar11 - (longlong)pauVar16;
        auVar39 = aesenc(auVar39,auVar28);
        auVar41 = auVar29 ^ pauVar16[1];
        auVar34 = aesenc(auVar34,auVar28);
        auVar28 = param_2[4];
        auVar32 = aesenc(auVar32,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar38 = aesenc(auVar38,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        pauVar19 = pauVar18;
        if (iStack_1d8 < 2) {
          pauVar19 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar40);
        puVar11 = *pauVar18 + lStack_1b0;
        if (iStack_1d8 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar40);
        lStack_1b0 = (longlong)puVar11 - (longlong)pauVar19;
        auVar39 = aesenc(auVar39,auVar40);
        auVar3 = auVar29 ^ pauVar19[1];
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[5];
        auVar32 = aesenc(auVar32,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar38 = aesenc(auVar38,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        pauVar21 = pauVar15;
        if (iStack_1d4 < 2) {
          pauVar21 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar28);
        puVar11 = *pauVar15 + lStack_1a8;
        if (iStack_1d4 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar28);
        lStack_1a8 = (longlong)puVar11 - (longlong)pauVar21;
        auVar39 = aesenc(auVar39,auVar28);
        auVar4 = auVar29 ^ pauVar21[1];
        auVar34 = aesenc(auVar34,auVar28);
        auVar28 = param_2[6];
        auVar32 = aesenc(auVar32,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar38 = aesenc(auVar38,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        pauVar23 = pauVar22;
        if (iStack_1d0 < 2) {
          pauVar23 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar40);
        puVar11 = *pauVar22 + lStack_1a0;
        if (iStack_1d0 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar40);
        lStack_1a0 = (longlong)puVar11 - (longlong)pauVar23;
        auVar39 = aesenc(auVar39,auVar40);
        auVar5 = auVar29 ^ pauVar23[1];
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[7];
        auVar32 = aesenc(auVar32,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar38 = aesenc(auVar38,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        pauVar24 = pauVar17;
        if (iStack_1cc < 2) {
          pauVar24 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar28);
        puVar11 = *pauVar17 + lStack_198;
        if (iStack_1cc < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar28);
        lStack_198 = (longlong)puVar11 - (longlong)pauVar24;
        auVar39 = aesenc(auVar39,auVar28);
        auVar6 = auVar29 ^ pauVar24[1];
        auVar34 = aesenc(auVar34,auVar28);
        auVar28 = param_2[8];
        auVar32 = aesenc(auVar32,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar38 = aesenc(auVar38,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        pauVar26 = pauVar25;
        if (iStack_1c8 < 2) {
          pauVar26 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar40);
        puVar11 = *pauVar25 + lStack_190;
        if (iStack_1c8 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar40);
        lStack_190 = (longlong)puVar11 - (longlong)pauVar26;
        auVar39 = aesenc(auVar39,auVar40);
        auVar7 = auVar29 ^ pauVar26[1];
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[9];
        auVar32 = aesenc(auVar32,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar38 = aesenc(auVar38,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        pauVar27 = pauVar20;
        if (iStack_1c4 < 2) {
          pauVar27 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar28);
        puVar11 = *pauVar20 + lStack_188;
        if (iStack_1c4 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar28);
        lStack_188 = (longlong)puVar11 - (longlong)pauVar27;
        auVar39 = aesenc(auVar39,auVar28);
        auVar8 = auVar29 ^ pauVar27[1];
        auVar34 = aesenc(auVar34,auVar28);
        auVar28 = param_2[10];
        auVar29._4_4_ = iStack_1dc;
        auVar29._0_4_ = iStack_1e0;
        auVar29._8_4_ = iStack_1d8;
        auVar29._12_4_ = iStack_1d4;
        if (10 < uVar1) {
          auVar32 = aesenc(auVar32,auVar40);
          auVar31 = aesenc(auVar31,auVar40);
          auVar38 = aesenc(auVar38,auVar40);
          auVar33 = aesenc(auVar33,auVar40);
          auVar37 = aesenc(auVar37,auVar40);
          auVar35 = aesenc(auVar35,auVar40);
          auVar39 = aesenc(auVar39,auVar40);
          auVar34 = aesenc(auVar34,auVar40);
          auVar40 = param_2[0xb];
          auVar32 = aesenc(auVar32,auVar28);
          auVar31 = aesenc(auVar31,auVar28);
          auVar38 = aesenc(auVar38,auVar28);
          auVar33 = aesenc(auVar33,auVar28);
          auVar37 = aesenc(auVar37,auVar28);
          auVar35 = aesenc(auVar35,auVar28);
          auVar39 = aesenc(auVar39,auVar28);
          auVar34 = aesenc(auVar34,auVar28);
          auVar28 = param_2[0xc];
          if (uVar1 != 0xb) {
            auVar32 = aesenc(auVar32,auVar40);
            auVar31 = aesenc(auVar31,auVar40);
            auVar38 = aesenc(auVar38,auVar40);
            auVar33 = aesenc(auVar33,auVar40);
            auVar37 = aesenc(auVar37,auVar40);
            auVar35 = aesenc(auVar35,auVar40);
            auVar39 = aesenc(auVar39,auVar40);
            auVar34 = aesenc(auVar34,auVar40);
            auVar40 = param_2[0xd];
            auVar32 = aesenc(auVar32,auVar28);
            auVar31 = aesenc(auVar31,auVar28);
            auVar38 = aesenc(auVar38,auVar28);
            auVar33 = aesenc(auVar33,auVar28);
            auVar37 = aesenc(auVar37,auVar28);
            auVar35 = aesenc(auVar35,auVar28);
            auVar39 = aesenc(auVar39,auVar28);
            auVar34 = aesenc(auVar34,auVar28);
            auVar28 = param_2[0xe];
          }
        }
        auVar30 = aesenc(auVar32,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar36 = aesenc(auVar38,auVar40);
        auVar29 = vpcmpgtd_avx(auVar29,(undefined1  [16])0x0);
        auVar33 = aesenc(auVar33,auVar40);
        auVar37 = aesenc(auVar37,auVar40);
        iStack_1e0 = auVar29._0_4_ + iStack_1e0;
        iStack_1dc = auVar29._4_4_ + iStack_1dc;
        iStack_1d8 = auVar29._8_4_ + iStack_1d8;
        iStack_1d4 = auVar29._12_4_ + iStack_1d4;
        auVar32._4_4_ = iStack_1cc;
        auVar32._0_4_ = iStack_1d0;
        auVar32._8_4_ = iStack_1c8;
        auVar32._12_4_ = iStack_1c4;
        auVar42 = aesenc(auVar35,auVar40);
        auVar39 = aesenc(auVar39,auVar40);
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[1];
        auVar38 = aesenclast(auVar30,auVar28);
        auVar31 = aesenclast(auVar31,auVar28);
        auVar35 = aesenclast(auVar36,auVar28);
        auVar29 = vpcmpgtd_avx(auVar32,(undefined1  [16])0x0);
        auVar33 = aesenclast(auVar33,auVar28);
        auVar37 = aesenclast(auVar37,auVar28);
        iStack_1d0 = iStack_1d0 + auVar29._0_4_;
        iStack_1cc = iStack_1cc + auVar29._4_4_;
        iStack_1c8 = iStack_1c8 + auVar29._8_4_;
        iStack_1c4 = iStack_1c4 + auVar29._12_4_;
        auVar29 = *param_2;
        auVar32 = aesenclast(auVar42,auVar28);
        auVar39 = aesenclast(auVar39,auVar28);
        auVar34 = aesenclast(auVar34,auVar28);
        auVar28 = param_2[2];
        *(undefined1 (*) [16])((longlong)pauVar14 + lVar10) = auVar38;
        pauVar13 = pauVar14 + 1;
        auVar38 = auVar38 ^ auVar2;
        *(undefined1 (*) [16])((longlong)pauVar16 + lStack_1b8) = auVar31;
        pauVar12 = pauVar16 + 1;
        auVar31 = auVar31 ^ auVar41;
        *(undefined1 (*) [16])((longlong)pauVar19 + lStack_1b0) = auVar35;
        pauVar18 = pauVar19 + 1;
        auVar35 = auVar35 ^ auVar3;
        *(undefined1 (*) [16])((longlong)pauVar21 + lStack_1a8) = auVar33;
        pauVar15 = pauVar21 + 1;
        auVar33 = auVar33 ^ auVar4;
        *(undefined1 (*) [16])((longlong)pauVar23 + lStack_1a0) = auVar37;
        pauVar22 = pauVar23 + 1;
        auVar37 = auVar37 ^ auVar5;
        *(undefined1 (*) [16])((longlong)pauVar24 + lStack_198) = auVar32;
        pauVar17 = pauVar24 + 1;
        auVar32 = auVar32 ^ auVar6;
        *(undefined1 (*) [16])((longlong)pauVar26 + lStack_190) = auVar39;
        pauVar25 = pauVar26 + 1;
        auVar39 = auVar39 ^ auVar7;
        *(undefined1 (*) [16])((longlong)pauVar27 + lStack_188) = auVar34;
        pauVar20 = pauVar27 + 1;
        auVar34 = auVar34 ^ auVar8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    return;
  }
  auVar29 = *param_2;
  param_1 = param_1 + 10;
  do {
    iStack_120 = *(int *)(param_1 + -8);
    pauVar13 = (undefined1 (*) [16])param_1[-9];
    iVar9 = 0;
    if (0 < iStack_120) {
      iVar9 = iStack_120;
    }
    pauVar12 = (undefined1 (*) [16])param_1[-10];
    if (iStack_120 < 1) {
      pauVar12 = &auStack_140;
    }
    iStack_11c = *(int *)(param_1 + -3);
    pauVar18 = (undefined1 (*) [16])param_1[-4];
    if (iVar9 < iStack_11c) {
      iVar9 = iStack_11c;
    }
    pauVar15 = (undefined1 (*) [16])param_1[-5];
    if (iStack_11c < 1) {
      pauVar15 = &auStack_140;
    }
    iStack_118 = *(int *)(param_1 + 2);
    pauVar22 = (undefined1 (*) [16])param_1[1];
    if (iVar9 < iStack_118) {
      iVar9 = iStack_118;
    }
    pauVar17 = (undefined1 (*) [16])*param_1;
    if (iStack_118 < 1) {
      pauVar17 = &auStack_140;
    }
    iStack_114 = *(int *)(param_1 + 7);
    pauVar25 = (undefined1 (*) [16])param_1[6];
    if (iVar9 < iStack_114) {
      iVar9 = iStack_114;
    }
    pauVar20 = (undefined1 (*) [16])param_1[5];
    if (iStack_114 < 1) {
      pauVar20 = &auStack_140;
    }
    if (iVar9 == 0) {
      return;
    }
    in_ZMM1._0_16_ = param_2[1];
    in_ZMM0._0_16_ = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    in_ZMM2._0_16_ = *(undefined1 (*) [16])(param_1 + -7) ^ auVar29 ^ *pauVar12;
    in_ZMM3._0_16_ = *(undefined1 (*) [16])(param_1 + -2) ^ auVar29 ^ *pauVar15;
    in_ZMM4._0_16_ = *(undefined1 (*) [16])(param_1 + 3) ^ auVar29 ^ *pauVar17;
    in_ZMM5._0_16_ = *(undefined1 (*) [16])(param_1 + 8) ^ auVar29 ^ *pauVar20;
    lVar10 = 0;
    do {
      pauVar14 = (undefined1 (*) [16])(&stack0xfffffffffffffed0 + -(lVar10 + 0x10));
      auVar29 = in_ZMM1._0_16_;
      auVar28 = aesenc(in_ZMM2._0_16_,auVar29);
      auVar31 = aesenc(in_ZMM3._0_16_,auVar29);
      auVar32 = aesenc(in_ZMM4._0_16_,auVar29);
      auVar37 = aesenc(in_ZMM5._0_16_,auVar29);
      auVar29 = param_2[3];
      auVar40 = in_ZMM0._0_16_;
      auVar28 = aesenc(auVar28,auVar40);
      auVar31 = aesenc(auVar31,auVar40);
      auVar32 = aesenc(auVar32,auVar40);
      if (iStack_120 < 2) {
        pauVar12 = pauVar14;
      }
      if (iStack_120 < 1) {
        pauVar13 = pauVar14;
      }
      auVar37 = aesenc(auVar37,auVar40);
      auVar40 = param_2[4];
      auVar28 = aesenc(auVar28,auVar29);
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      if (iStack_11c < 2) {
        pauVar15 = pauVar14;
      }
      if (iStack_11c < 1) {
        pauVar18 = pauVar14;
      }
      auVar37 = aesenc(auVar37,auVar29);
      auVar29 = param_2[5];
      auVar28 = aesenc(auVar28,auVar40);
      auVar31 = aesenc(auVar31,auVar40);
      auVar32 = aesenc(auVar32,auVar40);
      if (iStack_118 < 2) {
        pauVar17 = pauVar14;
      }
      if (iStack_118 < 1) {
        pauVar22 = pauVar14;
      }
      auVar37 = aesenc(auVar37,auVar40);
      auVar40 = param_2[6];
      auVar28 = aesenc(auVar28,auVar29);
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      if (iStack_114 < 2) {
        pauVar20 = pauVar14;
      }
      if (iStack_114 < 1) {
        pauVar25 = pauVar14;
      }
      auVar38 = aesenc(auVar37,auVar29);
      auVar37 = param_2[7];
      auVar29 = aesenc(auVar28,auVar40);
      auVar28 = aesenc(auVar31,auVar40);
      auVar33 = aesenc(auVar32,auVar40);
      auVar38 = aesenc(auVar38,auVar40);
      auVar40 = param_2[8];
      auVar31 = aesenc(auVar29,auVar37);
      auVar29 = *param_2;
      auVar32 = aesenc(auVar28,auVar37);
      iStack_120 = iStack_120 - (uint)(0 < iStack_120);
      iStack_11c = iStack_11c - (uint)(0 < iStack_11c);
      iStack_118 = iStack_118 - (uint)(0 < iStack_118);
      iStack_114 = iStack_114 - (uint)(0 < iStack_114);
      auVar33 = aesenc(auVar33,auVar37);
      auVar38 = aesenc(auVar38,auVar37);
      auVar28 = param_2[9];
      auVar31 = aesenc(auVar31,auVar40);
      auVar32 = aesenc(auVar32,auVar40);
      auVar37 = aesenc(auVar33,auVar40);
      auVar33 = aesenc(auVar38,auVar40);
      auVar40 = param_2[10];
      if (10 < uVar1) {
        auVar31 = aesenc(auVar31,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        auVar37 = aesenc(auVar37,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        auVar28 = param_2[0xb];
        auVar31 = aesenc(auVar31,auVar40);
        auVar32 = aesenc(auVar32,auVar40);
        auVar37 = aesenc(auVar37,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        auVar40 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar31 = aesenc(auVar31,auVar28);
          auVar32 = aesenc(auVar32,auVar28);
          auVar37 = aesenc(auVar37,auVar28);
          auVar33 = aesenc(auVar33,auVar28);
          auVar28 = param_2[0xd];
          auVar31 = aesenc(auVar31,auVar40);
          auVar32 = aesenc(auVar32,auVar40);
          auVar37 = aesenc(auVar37,auVar40);
          auVar33 = aesenc(auVar33,auVar40);
          auVar40 = param_2[0xe];
        }
      }
      auVar31 = aesenc(auVar31,auVar28);
      auVar32 = aesenc(auVar32,auVar28);
      auVar37 = aesenc(auVar37,auVar28);
      auVar39 = aesenc(auVar33,auVar28);
      auVar28 = *(undefined1 (*) [16])(pauVar12[1] + lVar10);
      in_ZMM1._0_16_ = param_2[1];
      auVar33 = aesenclast(auVar31,auVar40);
      auVar31 = *(undefined1 (*) [16])(pauVar15[1] + lVar10);
      auVar38 = aesenclast(auVar32,auVar40);
      auVar32 = *(undefined1 (*) [16])(pauVar17[1] + lVar10);
      auVar34 = aesenclast(auVar37,auVar40);
      auVar37 = *(undefined1 (*) [16])(pauVar20[1] + lVar10);
      auVar40 = aesenclast(auVar39,auVar40);
      in_ZMM0._0_16_ = param_2[2];
      *(undefined1 (*) [16])(*pauVar13 + lVar10) = auVar33;
      in_ZMM2._0_16_ = auVar33 ^ auVar28 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar18 + lVar10) = auVar38;
      in_ZMM3._0_16_ = auVar38 ^ auVar31 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar22 + lVar10) = auVar34;
      in_ZMM4._0_16_ = auVar34 ^ auVar32 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar25 + lVar10) = auVar40;
      in_ZMM5._0_16_ = auVar40 ^ auVar37 ^ auVar29;
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + 0x10;
    } while (iVar9 != 0);
    param_1 = param_1 + 0x14;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

// L$SEH_begin_aesni_multi_cbc_encrypt @ 140e0c8cd

void L_SEH_begin_aesni_multi_cbc_encrypt
               (undefined8 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar31 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auStack_200 [16];
  int iStack_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  longlong lStack_1b8;
  longlong lStack_1b0;
  longlong lStack_1a8;
  longlong lStack_1a0;
  longlong lStack_198;
  longlong lStack_190;
  longlong lStack_188;
  undefined1 local_140 [16];
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  
  if ((1 < param_3) && ((DAT_15540a9f4 & 0x10000000) != 0)) {
    auVar29 = *param_2;
    iStack_1e0 = *(int *)(param_1 + 2);
    iVar9 = 0;
    if (0 < iStack_1e0) {
      iVar9 = iStack_1e0;
    }
    pauVar13 = (undefined1 (*) [16])*param_1;
    if (iStack_1e0 < 1) {
      pauVar13 = &auStack_200;
    }
    lVar10 = param_1[1] - (longlong)pauVar13;
    iStack_1dc = *(int *)(param_1 + 7);
    if (iVar9 < iStack_1dc) {
      iVar9 = iStack_1dc;
    }
    pauVar12 = (undefined1 (*) [16])param_1[5];
    if (iStack_1dc < 1) {
      pauVar12 = &auStack_200;
    }
    lStack_1b8 = param_1[6] - (longlong)pauVar12;
    iStack_1d8 = *(int *)(param_1 + 0xc);
    if (iVar9 < iStack_1d8) {
      iVar9 = iStack_1d8;
    }
    pauVar18 = (undefined1 (*) [16])param_1[10];
    if (iStack_1d8 < 1) {
      pauVar18 = &auStack_200;
    }
    lStack_1b0 = param_1[0xb] - (longlong)pauVar18;
    iStack_1d4 = *(int *)(param_1 + 0x11);
    if (iVar9 < iStack_1d4) {
      iVar9 = iStack_1d4;
    }
    pauVar15 = (undefined1 (*) [16])param_1[0xf];
    if (iStack_1d4 < 1) {
      pauVar15 = &auStack_200;
    }
    lStack_1a8 = param_1[0x10] - (longlong)pauVar15;
    iStack_1d0 = *(int *)(param_1 + 0x16);
    if (iVar9 < iStack_1d0) {
      iVar9 = iStack_1d0;
    }
    pauVar22 = (undefined1 (*) [16])param_1[0x14];
    if (iStack_1d0 < 1) {
      pauVar22 = &auStack_200;
    }
    lStack_1a0 = param_1[0x15] - (longlong)pauVar22;
    iStack_1cc = *(int *)(param_1 + 0x1b);
    if (iVar9 < iStack_1cc) {
      iVar9 = iStack_1cc;
    }
    pauVar17 = (undefined1 (*) [16])param_1[0x19];
    if (iStack_1cc < 1) {
      pauVar17 = &auStack_200;
    }
    lStack_198 = param_1[0x1a] - (longlong)pauVar17;
    iStack_1c8 = *(int *)(param_1 + 0x20);
    if (iVar9 < iStack_1c8) {
      iVar9 = iStack_1c8;
    }
    pauVar25 = (undefined1 (*) [16])param_1[0x1e];
    if (iStack_1c8 < 1) {
      pauVar25 = &auStack_200;
    }
    lStack_190 = param_1[0x1f] - (longlong)pauVar25;
    iStack_1c4 = *(int *)(param_1 + 0x25);
    if (iVar9 < iStack_1c4) {
      iVar9 = iStack_1c4;
    }
    pauVar20 = (undefined1 (*) [16])param_1[0x23];
    if (iStack_1c4 < 1) {
      pauVar20 = &auStack_200;
    }
    lStack_188 = param_1[0x24] - (longlong)pauVar20;
    if (iVar9 != 0) {
      auVar40 = param_2[1];
      auVar28 = param_2[2];
      uVar1 = *(uint *)param_2[0xf];
      auVar38 = *(undefined1 (*) [16])(param_1 + 3) ^ auVar29 ^ *pauVar13;
      auVar31 = *(undefined1 (*) [16])(param_1 + 8) ^ auVar29 ^ *pauVar12;
      auVar35 = *(undefined1 (*) [16])(param_1 + 0xd) ^ auVar29 ^ *pauVar18;
      auVar33 = *(undefined1 (*) [16])(param_1 + 0x12) ^ auVar29 ^ *pauVar15;
      auVar37 = *(undefined1 (*) [16])(param_1 + 0x17) ^ auVar29 ^ *pauVar22;
      auVar32 = *(undefined1 (*) [16])(param_1 + 0x1c) ^ auVar29 ^ *pauVar17;
      auVar39 = *(undefined1 (*) [16])(param_1 + 0x21) ^ auVar29 ^ *pauVar25;
      auVar34 = *(undefined1 (*) [16])(param_1 + 0x26) ^ auVar29 ^ *pauVar20;
      do {
        auVar38 = aesenc(auVar38,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar35 = aesenc(auVar35,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        pauVar14 = pauVar13;
        if (iStack_1e0 < 2) {
          pauVar14 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar40);
        puVar11 = *pauVar13 + lVar10;
        if (iStack_1e0 < 1) {
          puVar11 = auStack_200;
        }
        auVar41 = aesenc(auVar32,auVar40);
        lVar10 = (longlong)puVar11 - (longlong)pauVar14;
        auVar39 = aesenc(auVar39,auVar40);
        auVar2 = auVar29 ^ pauVar14[1];
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[3];
        auVar32 = aesenc(auVar38,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar38 = aesenc(auVar35,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        pauVar16 = pauVar12;
        if (iStack_1dc < 2) {
          pauVar16 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar28);
        puVar11 = *pauVar12 + lStack_1b8;
        if (iStack_1dc < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar41,auVar28);
        lStack_1b8 = (longlong)puVar11 - (longlong)pauVar16;
        auVar39 = aesenc(auVar39,auVar28);
        auVar41 = auVar29 ^ pauVar16[1];
        auVar34 = aesenc(auVar34,auVar28);
        auVar28 = param_2[4];
        auVar32 = aesenc(auVar32,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar38 = aesenc(auVar38,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        pauVar19 = pauVar18;
        if (iStack_1d8 < 2) {
          pauVar19 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar40);
        puVar11 = *pauVar18 + lStack_1b0;
        if (iStack_1d8 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar40);
        lStack_1b0 = (longlong)puVar11 - (longlong)pauVar19;
        auVar39 = aesenc(auVar39,auVar40);
        auVar3 = auVar29 ^ pauVar19[1];
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[5];
        auVar32 = aesenc(auVar32,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar38 = aesenc(auVar38,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        pauVar21 = pauVar15;
        if (iStack_1d4 < 2) {
          pauVar21 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar28);
        puVar11 = *pauVar15 + lStack_1a8;
        if (iStack_1d4 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar28);
        lStack_1a8 = (longlong)puVar11 - (longlong)pauVar21;
        auVar39 = aesenc(auVar39,auVar28);
        auVar4 = auVar29 ^ pauVar21[1];
        auVar34 = aesenc(auVar34,auVar28);
        auVar28 = param_2[6];
        auVar32 = aesenc(auVar32,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar38 = aesenc(auVar38,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        pauVar23 = pauVar22;
        if (iStack_1d0 < 2) {
          pauVar23 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar40);
        puVar11 = *pauVar22 + lStack_1a0;
        if (iStack_1d0 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar40);
        lStack_1a0 = (longlong)puVar11 - (longlong)pauVar23;
        auVar39 = aesenc(auVar39,auVar40);
        auVar5 = auVar29 ^ pauVar23[1];
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[7];
        auVar32 = aesenc(auVar32,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar38 = aesenc(auVar38,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        pauVar24 = pauVar17;
        if (iStack_1cc < 2) {
          pauVar24 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar28);
        puVar11 = *pauVar17 + lStack_198;
        if (iStack_1cc < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar28);
        lStack_198 = (longlong)puVar11 - (longlong)pauVar24;
        auVar39 = aesenc(auVar39,auVar28);
        auVar6 = auVar29 ^ pauVar24[1];
        auVar34 = aesenc(auVar34,auVar28);
        auVar28 = param_2[8];
        auVar32 = aesenc(auVar32,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar38 = aesenc(auVar38,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        pauVar26 = pauVar25;
        if (iStack_1c8 < 2) {
          pauVar26 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar40);
        puVar11 = *pauVar25 + lStack_190;
        if (iStack_1c8 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar40);
        lStack_190 = (longlong)puVar11 - (longlong)pauVar26;
        auVar39 = aesenc(auVar39,auVar40);
        auVar7 = auVar29 ^ pauVar26[1];
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[9];
        auVar32 = aesenc(auVar32,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar38 = aesenc(auVar38,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        pauVar27 = pauVar20;
        if (iStack_1c4 < 2) {
          pauVar27 = &auStack_200;
        }
        auVar37 = aesenc(auVar37,auVar28);
        puVar11 = *pauVar20 + lStack_188;
        if (iStack_1c4 < 1) {
          puVar11 = auStack_200;
        }
        auVar35 = aesenc(auVar35,auVar28);
        lStack_188 = (longlong)puVar11 - (longlong)pauVar27;
        auVar39 = aesenc(auVar39,auVar28);
        auVar8 = auVar29 ^ pauVar27[1];
        auVar34 = aesenc(auVar34,auVar28);
        auVar28 = param_2[10];
        auVar29._4_4_ = iStack_1dc;
        auVar29._0_4_ = iStack_1e0;
        auVar29._8_4_ = iStack_1d8;
        auVar29._12_4_ = iStack_1d4;
        if (10 < uVar1) {
          auVar32 = aesenc(auVar32,auVar40);
          auVar31 = aesenc(auVar31,auVar40);
          auVar38 = aesenc(auVar38,auVar40);
          auVar33 = aesenc(auVar33,auVar40);
          auVar37 = aesenc(auVar37,auVar40);
          auVar35 = aesenc(auVar35,auVar40);
          auVar39 = aesenc(auVar39,auVar40);
          auVar34 = aesenc(auVar34,auVar40);
          auVar40 = param_2[0xb];
          auVar32 = aesenc(auVar32,auVar28);
          auVar31 = aesenc(auVar31,auVar28);
          auVar38 = aesenc(auVar38,auVar28);
          auVar33 = aesenc(auVar33,auVar28);
          auVar37 = aesenc(auVar37,auVar28);
          auVar35 = aesenc(auVar35,auVar28);
          auVar39 = aesenc(auVar39,auVar28);
          auVar34 = aesenc(auVar34,auVar28);
          auVar28 = param_2[0xc];
          if (uVar1 != 0xb) {
            auVar32 = aesenc(auVar32,auVar40);
            auVar31 = aesenc(auVar31,auVar40);
            auVar38 = aesenc(auVar38,auVar40);
            auVar33 = aesenc(auVar33,auVar40);
            auVar37 = aesenc(auVar37,auVar40);
            auVar35 = aesenc(auVar35,auVar40);
            auVar39 = aesenc(auVar39,auVar40);
            auVar34 = aesenc(auVar34,auVar40);
            auVar40 = param_2[0xd];
            auVar32 = aesenc(auVar32,auVar28);
            auVar31 = aesenc(auVar31,auVar28);
            auVar38 = aesenc(auVar38,auVar28);
            auVar33 = aesenc(auVar33,auVar28);
            auVar37 = aesenc(auVar37,auVar28);
            auVar35 = aesenc(auVar35,auVar28);
            auVar39 = aesenc(auVar39,auVar28);
            auVar34 = aesenc(auVar34,auVar28);
            auVar28 = param_2[0xe];
          }
        }
        auVar30 = aesenc(auVar32,auVar40);
        auVar31 = aesenc(auVar31,auVar40);
        auVar36 = aesenc(auVar38,auVar40);
        auVar29 = vpcmpgtd_avx(auVar29,(undefined1  [16])0x0);
        auVar33 = aesenc(auVar33,auVar40);
        auVar37 = aesenc(auVar37,auVar40);
        iStack_1e0 = auVar29._0_4_ + iStack_1e0;
        iStack_1dc = auVar29._4_4_ + iStack_1dc;
        iStack_1d8 = auVar29._8_4_ + iStack_1d8;
        iStack_1d4 = auVar29._12_4_ + iStack_1d4;
        auVar32._4_4_ = iStack_1cc;
        auVar32._0_4_ = iStack_1d0;
        auVar32._8_4_ = iStack_1c8;
        auVar32._12_4_ = iStack_1c4;
        auVar42 = aesenc(auVar35,auVar40);
        auVar39 = aesenc(auVar39,auVar40);
        auVar34 = aesenc(auVar34,auVar40);
        auVar40 = param_2[1];
        auVar38 = aesenclast(auVar30,auVar28);
        auVar31 = aesenclast(auVar31,auVar28);
        auVar35 = aesenclast(auVar36,auVar28);
        auVar29 = vpcmpgtd_avx(auVar32,(undefined1  [16])0x0);
        auVar33 = aesenclast(auVar33,auVar28);
        auVar37 = aesenclast(auVar37,auVar28);
        iStack_1d0 = iStack_1d0 + auVar29._0_4_;
        iStack_1cc = iStack_1cc + auVar29._4_4_;
        iStack_1c8 = iStack_1c8 + auVar29._8_4_;
        iStack_1c4 = iStack_1c4 + auVar29._12_4_;
        auVar29 = *param_2;
        auVar32 = aesenclast(auVar42,auVar28);
        auVar39 = aesenclast(auVar39,auVar28);
        auVar34 = aesenclast(auVar34,auVar28);
        auVar28 = param_2[2];
        *(undefined1 (*) [16])((longlong)pauVar14 + lVar10) = auVar38;
        pauVar13 = pauVar14 + 1;
        auVar38 = auVar38 ^ auVar2;
        *(undefined1 (*) [16])((longlong)pauVar16 + lStack_1b8) = auVar31;
        pauVar12 = pauVar16 + 1;
        auVar31 = auVar31 ^ auVar41;
        *(undefined1 (*) [16])((longlong)pauVar19 + lStack_1b0) = auVar35;
        pauVar18 = pauVar19 + 1;
        auVar35 = auVar35 ^ auVar3;
        *(undefined1 (*) [16])((longlong)pauVar21 + lStack_1a8) = auVar33;
        pauVar15 = pauVar21 + 1;
        auVar33 = auVar33 ^ auVar4;
        *(undefined1 (*) [16])((longlong)pauVar23 + lStack_1a0) = auVar37;
        pauVar22 = pauVar23 + 1;
        auVar37 = auVar37 ^ auVar5;
        *(undefined1 (*) [16])((longlong)pauVar24 + lStack_198) = auVar32;
        pauVar17 = pauVar24 + 1;
        auVar32 = auVar32 ^ auVar6;
        *(undefined1 (*) [16])((longlong)pauVar26 + lStack_190) = auVar39;
        pauVar25 = pauVar26 + 1;
        auVar39 = auVar39 ^ auVar7;
        *(undefined1 (*) [16])((longlong)pauVar27 + lStack_188) = auVar34;
        pauVar20 = pauVar27 + 1;
        auVar34 = auVar34 ^ auVar8;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    return;
  }
  auVar29 = *param_2;
  param_1 = param_1 + 10;
  do {
    local_120 = *(int *)(param_1 + -8);
    pauVar13 = (undefined1 (*) [16])param_1[-9];
    iVar9 = 0;
    if (0 < local_120) {
      iVar9 = local_120;
    }
    pauVar12 = (undefined1 (*) [16])param_1[-10];
    if (local_120 < 1) {
      pauVar12 = &local_140;
    }
    iStack_11c = *(int *)(param_1 + -3);
    pauVar18 = (undefined1 (*) [16])param_1[-4];
    if (iVar9 < iStack_11c) {
      iVar9 = iStack_11c;
    }
    pauVar15 = (undefined1 (*) [16])param_1[-5];
    if (iStack_11c < 1) {
      pauVar15 = &local_140;
    }
    iStack_118 = *(int *)(param_1 + 2);
    pauVar22 = (undefined1 (*) [16])param_1[1];
    if (iVar9 < iStack_118) {
      iVar9 = iStack_118;
    }
    pauVar17 = (undefined1 (*) [16])*param_1;
    if (iStack_118 < 1) {
      pauVar17 = &local_140;
    }
    iStack_114 = *(int *)(param_1 + 7);
    pauVar25 = (undefined1 (*) [16])param_1[6];
    if (iVar9 < iStack_114) {
      iVar9 = iStack_114;
    }
    pauVar20 = (undefined1 (*) [16])param_1[5];
    if (iStack_114 < 1) {
      pauVar20 = &local_140;
    }
    if (iVar9 == 0) {
      return;
    }
    in_ZMM1._0_16_ = param_2[1];
    in_ZMM0._0_16_ = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    in_ZMM2._0_16_ = *(undefined1 (*) [16])(param_1 + -7) ^ auVar29 ^ *pauVar12;
    in_ZMM3._0_16_ = *(undefined1 (*) [16])(param_1 + -2) ^ auVar29 ^ *pauVar15;
    in_ZMM4._0_16_ = *(undefined1 (*) [16])(param_1 + 3) ^ auVar29 ^ *pauVar17;
    in_ZMM5._0_16_ = *(undefined1 (*) [16])(param_1 + 8) ^ auVar29 ^ *pauVar20;
    lVar10 = 0;
    do {
      pauVar14 = (undefined1 (*) [16])(&stack0xfffffffffffffed0 + -(lVar10 + 0x10));
      auVar29 = in_ZMM1._0_16_;
      auVar28 = aesenc(in_ZMM2._0_16_,auVar29);
      auVar31 = aesenc(in_ZMM3._0_16_,auVar29);
      auVar32 = aesenc(in_ZMM4._0_16_,auVar29);
      auVar37 = aesenc(in_ZMM5._0_16_,auVar29);
      auVar29 = param_2[3];
      auVar40 = in_ZMM0._0_16_;
      auVar28 = aesenc(auVar28,auVar40);
      auVar31 = aesenc(auVar31,auVar40);
      auVar32 = aesenc(auVar32,auVar40);
      if (local_120 < 2) {
        pauVar12 = pauVar14;
      }
      if (local_120 < 1) {
        pauVar13 = pauVar14;
      }
      auVar37 = aesenc(auVar37,auVar40);
      auVar40 = param_2[4];
      auVar28 = aesenc(auVar28,auVar29);
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      if (iStack_11c < 2) {
        pauVar15 = pauVar14;
      }
      if (iStack_11c < 1) {
        pauVar18 = pauVar14;
      }
      auVar37 = aesenc(auVar37,auVar29);
      auVar29 = param_2[5];
      auVar28 = aesenc(auVar28,auVar40);
      auVar31 = aesenc(auVar31,auVar40);
      auVar32 = aesenc(auVar32,auVar40);
      if (iStack_118 < 2) {
        pauVar17 = pauVar14;
      }
      if (iStack_118 < 1) {
        pauVar22 = pauVar14;
      }
      auVar37 = aesenc(auVar37,auVar40);
      auVar40 = param_2[6];
      auVar28 = aesenc(auVar28,auVar29);
      auVar31 = aesenc(auVar31,auVar29);
      auVar32 = aesenc(auVar32,auVar29);
      if (iStack_114 < 2) {
        pauVar20 = pauVar14;
      }
      if (iStack_114 < 1) {
        pauVar25 = pauVar14;
      }
      auVar38 = aesenc(auVar37,auVar29);
      auVar37 = param_2[7];
      auVar29 = aesenc(auVar28,auVar40);
      auVar28 = aesenc(auVar31,auVar40);
      auVar33 = aesenc(auVar32,auVar40);
      auVar38 = aesenc(auVar38,auVar40);
      auVar40 = param_2[8];
      auVar31 = aesenc(auVar29,auVar37);
      auVar29 = *param_2;
      auVar32 = aesenc(auVar28,auVar37);
      local_120 = local_120 - (uint)(0 < local_120);
      iStack_11c = iStack_11c - (uint)(0 < iStack_11c);
      iStack_118 = iStack_118 - (uint)(0 < iStack_118);
      iStack_114 = iStack_114 - (uint)(0 < iStack_114);
      auVar33 = aesenc(auVar33,auVar37);
      auVar38 = aesenc(auVar38,auVar37);
      auVar28 = param_2[9];
      auVar31 = aesenc(auVar31,auVar40);
      auVar32 = aesenc(auVar32,auVar40);
      auVar37 = aesenc(auVar33,auVar40);
      auVar33 = aesenc(auVar38,auVar40);
      auVar40 = param_2[10];
      if (10 < uVar1) {
        auVar31 = aesenc(auVar31,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        auVar37 = aesenc(auVar37,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        auVar28 = param_2[0xb];
        auVar31 = aesenc(auVar31,auVar40);
        auVar32 = aesenc(auVar32,auVar40);
        auVar37 = aesenc(auVar37,auVar40);
        auVar33 = aesenc(auVar33,auVar40);
        auVar40 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar31 = aesenc(auVar31,auVar28);
          auVar32 = aesenc(auVar32,auVar28);
          auVar37 = aesenc(auVar37,auVar28);
          auVar33 = aesenc(auVar33,auVar28);
          auVar28 = param_2[0xd];
          auVar31 = aesenc(auVar31,auVar40);
          auVar32 = aesenc(auVar32,auVar40);
          auVar37 = aesenc(auVar37,auVar40);
          auVar33 = aesenc(auVar33,auVar40);
          auVar40 = param_2[0xe];
        }
      }
      auVar31 = aesenc(auVar31,auVar28);
      auVar32 = aesenc(auVar32,auVar28);
      auVar37 = aesenc(auVar37,auVar28);
      auVar39 = aesenc(auVar33,auVar28);
      auVar28 = *(undefined1 (*) [16])(pauVar12[1] + lVar10);
      in_ZMM1._0_16_ = param_2[1];
      auVar33 = aesenclast(auVar31,auVar40);
      auVar31 = *(undefined1 (*) [16])(pauVar15[1] + lVar10);
      auVar38 = aesenclast(auVar32,auVar40);
      auVar32 = *(undefined1 (*) [16])(pauVar17[1] + lVar10);
      auVar34 = aesenclast(auVar37,auVar40);
      auVar37 = *(undefined1 (*) [16])(pauVar20[1] + lVar10);
      auVar40 = aesenclast(auVar39,auVar40);
      in_ZMM0._0_16_ = param_2[2];
      *(undefined1 (*) [16])(*pauVar13 + lVar10) = auVar33;
      in_ZMM2._0_16_ = auVar33 ^ auVar28 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar18 + lVar10) = auVar38;
      in_ZMM3._0_16_ = auVar38 ^ auVar31 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar22 + lVar10) = auVar34;
      in_ZMM4._0_16_ = auVar34 ^ auVar32 ^ auVar29;
      *(undefined1 (*) [16])(*pauVar25 + lVar10) = auVar40;
      in_ZMM5._0_16_ = auVar40 ^ auVar37 ^ auVar29;
      iVar9 = iVar9 + -1;
      lVar10 = lVar10 + 0x10;
    } while (iVar9 != 0);
    param_1 = param_1 + 0x14;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

// aesni_multi_cbc_decrypt @ 140e0cd20

void aesni_multi_cbc_decrypt(undefined8 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_ZMM9 [64];
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined1 auStack_2c0 [16];
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  
  if ((1 < param_3) && ((DAT_15540a9f4 & 0x10000000) != 0)) {
    auVar23 = *param_2;
    iStack_2a0 = *(int *)(param_1 + 2);
    pauVar7 = (undefined1 (*) [16])*param_1;
    iVar47 = iStack_2a0;
    if (iStack_2a0 < 1) {
      pauVar7 = &auStack_2c0;
      iVar47 = 0;
    }
    lVar3 = param_1[1] - (longlong)pauVar7;
    iStack_29c = *(int *)(param_1 + 7);
    if (iVar47 < iStack_29c) {
      iVar47 = iStack_29c;
    }
    pauVar6 = (undefined1 (*) [16])param_1[5];
    if (iStack_29c < 1) {
      pauVar6 = &auStack_2c0;
    }
    lStack_278 = param_1[6] - (longlong)pauVar6;
    iStack_298 = *(int *)(param_1 + 0xc);
    if (iVar47 < iStack_298) {
      iVar47 = iStack_298;
    }
    pauVar12 = (undefined1 (*) [16])param_1[10];
    if (iStack_298 < 1) {
      pauVar12 = &auStack_2c0;
    }
    lStack_270 = param_1[0xb] - (longlong)pauVar12;
    iStack_294 = *(int *)(param_1 + 0x11);
    if (iVar47 < iStack_294) {
      iVar47 = iStack_294;
    }
    pauVar9 = (undefined1 (*) [16])param_1[0xf];
    if (iStack_294 < 1) {
      pauVar9 = &auStack_2c0;
    }
    lStack_268 = param_1[0x10] - (longlong)pauVar9;
    iStack_290 = *(int *)(param_1 + 0x16);
    if (iVar47 < iStack_290) {
      iVar47 = iStack_290;
    }
    pauVar16 = (undefined1 (*) [16])param_1[0x14];
    if (iStack_290 < 1) {
      pauVar16 = &auStack_2c0;
    }
    lStack_260 = param_1[0x15] - (longlong)pauVar16;
    iStack_28c = *(int *)(param_1 + 0x1b);
    if (iVar47 < iStack_28c) {
      iVar47 = iStack_28c;
    }
    pauVar11 = (undefined1 (*) [16])param_1[0x19];
    if (iStack_28c < 1) {
      pauVar11 = &auStack_2c0;
    }
    lStack_258 = param_1[0x1a] - (longlong)pauVar11;
    iStack_288 = *(int *)(param_1 + 0x20);
    if (iVar47 < iStack_288) {
      iVar47 = iStack_288;
    }
    pauVar19 = (undefined1 (*) [16])param_1[0x1e];
    if (iStack_288 < 1) {
      pauVar19 = &auStack_2c0;
    }
    lStack_250 = param_1[0x1f] - (longlong)pauVar19;
    iStack_284 = *(int *)(param_1 + 0x25);
    if (iVar47 < iStack_284) {
      iVar47 = iStack_284;
    }
    pauVar14 = (undefined1 (*) [16])param_1[0x23];
    if (iStack_284 < 1) {
      pauVar14 = &auStack_2c0;
    }
    lStack_248 = param_1[0x24] - (longlong)pauVar14;
    if (iVar47 != 0) {
      auVar25 = param_2[1];
      auVar22 = param_2[2];
      uVar1 = *(uint *)param_2[0xf];
      pauVar5 = &auStack_180;
      auStack_180 = *pauVar7;
      auVar31 = *pauVar7 ^ auVar23;
      auStack_170 = *pauVar6;
      auVar28 = *pauVar6 ^ auVar23;
      auStack_160 = *pauVar12;
      auVar33 = *pauVar12 ^ auVar23;
      auStack_150 = *pauVar9;
      auVar34 = *pauVar9 ^ auVar23;
      auStack_140 = *pauVar16;
      auVar27 = *pauVar16 ^ auVar23;
      auVar30 = *pauVar11 ^ auVar23;
      auVar32 = *pauVar19 ^ auVar23;
      auVar23 = *pauVar14 ^ auVar23;
      do {
        pauVar5 = (undefined1 (*) [16])((ulonglong)pauVar5 ^ 0x80);
        auVar24 = aesdec(auVar31,auVar25);
        auVar28 = aesdec(auVar28,auVar25);
        auVar33 = aesdec(auVar33,auVar25);
        auVar34 = aesdec(auVar34,auVar25);
        pauVar8 = pauVar7;
        if (iStack_2a0 < 2) {
          pauVar8 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar25);
        puVar4 = *pauVar7 + lVar3;
        if (iStack_2a0 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar37 = aesdec(auVar30,auVar25);
        lVar3 = (longlong)puVar4 - (longlong)pauVar8;
        auVar40 = aesdec(auVar32,auVar25);
        auVar31 = pauVar8[1];
        auVar44 = aesdec(auVar23,auVar25);
        auVar23 = param_2[3];
        auVar25 = aesdec(auVar24,auVar22);
        auVar30 = aesdec(auVar28,auVar22);
        auVar32 = aesdec(auVar33,auVar22);
        auVar33 = aesdec(auVar34,auVar22);
        pauVar10 = pauVar6;
        if (iStack_29c < 2) {
          pauVar10 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar22);
        puVar4 = *pauVar6 + lStack_278;
        if (iStack_29c < 1) {
          puVar4 = auStack_2c0;
        }
        auVar24 = aesdec(auVar37,auVar22);
        lStack_278 = (longlong)puVar4 - (longlong)pauVar10;
        auVar37 = aesdec(auVar40,auVar22);
        auVar28 = pauVar10[1];
        auVar40 = aesdec(auVar44,auVar22);
        auVar22 = param_2[4];
        auVar25 = aesdec(auVar25,auVar23);
        auVar30 = aesdec(auVar30,auVar23);
        auVar32 = aesdec(auVar32,auVar23);
        auVar34 = aesdec(auVar33,auVar23);
        pauVar13 = pauVar12;
        if (iStack_298 < 2) {
          pauVar13 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar23);
        puVar4 = *pauVar12 + lStack_270;
        if (iStack_298 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar24,auVar23);
        lStack_270 = (longlong)puVar4 - (longlong)pauVar13;
        auVar37 = aesdec(auVar37,auVar23);
        auVar33 = pauVar13[1];
        auVar40 = aesdec(auVar40,auVar23);
        auVar23 = param_2[5];
        auVar25 = aesdec(auVar25,auVar22);
        auVar30 = aesdec(auVar30,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar24 = aesdec(auVar34,auVar22);
        pauVar15 = pauVar9;
        if (iStack_294 < 2) {
          pauVar15 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar22);
        puVar4 = *pauVar9 + lStack_268;
        if (iStack_294 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar22);
        lStack_268 = (longlong)puVar4 - (longlong)pauVar15;
        auVar37 = aesdec(auVar37,auVar22);
        auVar34 = pauVar15[1];
        auVar40 = aesdec(auVar40,auVar22);
        auVar22 = param_2[6];
        auVar25 = aesdec(auVar25,auVar23);
        auVar30 = aesdec(auVar30,auVar23);
        auVar32 = aesdec(auVar32,auVar23);
        auVar24 = aesdec(auVar24,auVar23);
        pauVar17 = pauVar16;
        if (iStack_290 < 2) {
          pauVar17 = &auStack_2c0;
        }
        auVar35 = aesdec(auVar27,auVar23);
        puVar4 = *pauVar16 + lStack_260;
        if (iStack_290 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar23);
        lStack_260 = (longlong)puVar4 - (longlong)pauVar17;
        auVar41 = aesdec(auVar37,auVar23);
        auVar27 = pauVar17[1];
        auVar40 = aesdec(auVar40,auVar23);
        auVar23 = param_2[7];
        auVar25 = aesdec(auVar25,auVar22);
        auVar37 = aesdec(auVar30,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar24 = aesdec(auVar24,auVar22);
        pauVar18 = pauVar11;
        if (iStack_28c < 2) {
          pauVar18 = &auStack_2c0;
        }
        auVar35 = aesdec(auVar35,auVar22);
        puVar4 = *pauVar11 + lStack_258;
        if (iStack_28c < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar22);
        lStack_258 = (longlong)puVar4 - (longlong)pauVar18;
        auVar41 = aesdec(auVar41,auVar22);
        auVar30 = pauVar18[1];
        auVar45 = aesdec(auVar40,auVar22);
        auVar22 = param_2[8];
        auVar25 = aesdec(auVar25,auVar23);
        auVar37 = aesdec(auVar37,auVar23);
        auVar40 = aesdec(auVar32,auVar23);
        auVar24 = aesdec(auVar24,auVar23);
        pauVar20 = pauVar19;
        if (iStack_288 < 2) {
          pauVar20 = &auStack_2c0;
        }
        auVar35 = aesdec(auVar35,auVar23);
        puVar4 = *pauVar19 + lStack_250;
        if (iStack_288 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar23);
        lStack_250 = (longlong)puVar4 - (longlong)pauVar20;
        auVar41 = aesdec(auVar41,auVar23);
        auVar32 = pauVar20[1];
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = param_2[9];
        auVar25 = aesdec(auVar25,auVar22);
        auVar37 = aesdec(auVar37,auVar22);
        auVar40 = aesdec(auVar40,auVar22);
        auVar24 = aesdec(auVar24,auVar22);
        pauVar21 = pauVar14;
        if (iStack_284 < 2) {
          pauVar21 = &auStack_2c0;
        }
        auVar35 = aesdec(auVar35,auVar22);
        puVar4 = *pauVar14 + lStack_248;
        if (iStack_284 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar38 = aesdec(auVar44,auVar22);
        lStack_248 = (longlong)puVar4 - (longlong)pauVar21;
        auVar42 = aesdec(auVar41,auVar22);
        auVar44 = pauVar21[1];
        auVar45 = aesdec(auVar45,auVar22);
        auVar22 = param_2[10];
        auVar41._4_4_ = iStack_29c;
        auVar41._0_4_ = iStack_2a0;
        auVar41._8_4_ = iStack_298;
        auVar41._12_4_ = iStack_294;
        if (10 < uVar1) {
          auVar25 = aesdec(auVar25,auVar23);
          auVar37 = aesdec(auVar37,auVar23);
          auVar40 = aesdec(auVar40,auVar23);
          auVar24 = aesdec(auVar24,auVar23);
          auVar35 = aesdec(auVar35,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar42 = aesdec(auVar42,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = param_2[0xb];
          auVar25 = aesdec(auVar25,auVar22);
          auVar37 = aesdec(auVar37,auVar22);
          auVar40 = aesdec(auVar40,auVar22);
          auVar24 = aesdec(auVar24,auVar22);
          auVar35 = aesdec(auVar35,auVar22);
          auVar38 = aesdec(auVar38,auVar22);
          auVar42 = aesdec(auVar42,auVar22);
          auVar45 = aesdec(auVar45,auVar22);
          auVar22 = param_2[0xc];
          if (uVar1 != 0xb) {
            auVar25 = aesdec(auVar25,auVar23);
            auVar37 = aesdec(auVar37,auVar23);
            auVar40 = aesdec(auVar40,auVar23);
            auVar24 = aesdec(auVar24,auVar23);
            auVar35 = aesdec(auVar35,auVar23);
            auVar38 = aesdec(auVar38,auVar23);
            auVar42 = aesdec(auVar42,auVar23);
            auVar45 = aesdec(auVar45,auVar23);
            auVar23 = param_2[0xd];
            auVar25 = aesdec(auVar25,auVar22);
            auVar37 = aesdec(auVar37,auVar22);
            auVar40 = aesdec(auVar40,auVar22);
            auVar24 = aesdec(auVar24,auVar22);
            auVar35 = aesdec(auVar35,auVar22);
            auVar38 = aesdec(auVar38,auVar22);
            auVar42 = aesdec(auVar42,auVar22);
            auVar45 = aesdec(auVar45,auVar22);
            auVar22 = param_2[0xe];
          }
        }
        auVar26 = aesdec(auVar25,auVar23);
        auVar29 = aesdec(auVar37,auVar23);
        auVar40 = aesdec(auVar40,auVar23);
        auVar25 = vpcmpgtd_avx(auVar41,(undefined1  [16])0x0);
        auVar41 = aesdec(auVar24,auVar23);
        auVar35 = aesdec(auVar35,auVar23);
        iStack_2a0 = auVar25._0_4_ + iStack_2a0;
        iStack_29c = auVar25._4_4_ + iStack_29c;
        iStack_298 = auVar25._8_4_ + iStack_298;
        iStack_294 = auVar25._12_4_ + iStack_294;
        auVar37._4_4_ = iStack_28c;
        auVar37._0_4_ = iStack_290;
        auVar37._8_4_ = iStack_288;
        auVar37._12_4_ = iStack_284;
        auVar39 = aesdec(auVar38,auVar23);
        auVar43 = aesdec(auVar42,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar25 = param_2[1];
        auVar38 = aesdeclast(auVar26,auVar22);
        auVar42 = aesdeclast(auVar29,auVar22);
        auVar26 = aesdeclast(auVar40,auVar22);
        auVar24 = pauVar5[1];
        auVar23 = vpcmpgtd_avx(auVar37,(undefined1  [16])0x0);
        auVar29 = aesdeclast(auVar41,auVar22);
        auVar37 = pauVar5[2];
        auVar36 = aesdeclast(auVar35,auVar22);
        auVar40 = pauVar5[3];
        iStack_290 = iStack_290 + auVar23._0_4_;
        iStack_28c = iStack_28c + auVar23._4_4_;
        iStack_288 = iStack_288 + auVar23._8_4_;
        iStack_284 = iStack_284 + auVar23._12_4_;
        auVar23 = *param_2;
        auVar39 = aesdeclast(auVar39,auVar22);
        auVar35 = pauVar5[4];
        auVar43 = aesdeclast(auVar43,auVar22);
        auVar41 = pauVar5[5];
        auVar46 = aesdeclast(auVar45,auVar22);
        auVar45 = pauVar5[6];
        auVar22 = param_2[2];
        *(undefined1 (*) [16])((longlong)pauVar8 + lVar3) = auVar38 ^ *pauVar5;
        pauVar7 = pauVar8 + 1;
        auVar38 = pauVar5[7];
        *(undefined1 (*) [16])((longlong)pauVar10 + lStack_278) = auVar42 ^ auVar24;
        pauVar6 = pauVar10 + 1;
        *pauVar5 = auVar31;
        auVar31 = auVar31 ^ auVar23;
        *(undefined1 (*) [16])((longlong)pauVar13 + lStack_270) = auVar26 ^ auVar37;
        pauVar12 = pauVar13 + 1;
        pauVar5[1] = auVar28;
        auVar28 = auVar28 ^ auVar23;
        *(undefined1 (*) [16])((longlong)pauVar15 + lStack_268) = auVar29 ^ auVar40;
        pauVar9 = pauVar15 + 1;
        pauVar5[2] = auVar33;
        auVar33 = auVar33 ^ auVar23;
        *(undefined1 (*) [16])((longlong)pauVar17 + lStack_260) = auVar36 ^ auVar35;
        pauVar16 = pauVar17 + 1;
        pauVar5[3] = auVar34;
        auVar34 = auVar34 ^ auVar23;
        pauVar5[4] = auVar27;
        auVar27 = auVar23 ^ auVar27;
        *(undefined1 (*) [16])((longlong)pauVar18 + lStack_258) = auVar39 ^ auVar41;
        pauVar11 = pauVar18 + 1;
        pauVar5[5] = auVar30;
        auVar30 = auVar23 ^ auVar30;
        *(undefined1 (*) [16])((longlong)pauVar20 + lStack_250) = auVar43 ^ auVar45;
        pauVar19 = pauVar20 + 1;
        pauVar5[6] = auVar32;
        auVar32 = auVar23 ^ auVar32;
        *(undefined1 (*) [16])((longlong)pauVar21 + lStack_248) = auVar46 ^ auVar38;
        pauVar14 = pauVar21 + 1;
        pauVar5[7] = auVar44;
        auVar23 = auVar23 ^ auVar44;
        iVar47 = iVar47 + -1;
      } while (iVar47 != 0);
    }
    return;
  }
  auVar23 = *param_2;
  param_1 = param_1 + 10;
  do {
    iVar47 = *(int *)(param_1 + -8);
    pauVar7 = (undefined1 (*) [16])param_1[-9];
    iVar2 = 0;
    if (0 < iVar47) {
      iVar2 = iVar47;
    }
    in_ZMM6._0_16_ = *(undefined1 (*) [16])(param_1 + -7);
    pauVar6 = (undefined1 (*) [16])param_1[-10];
    if (iVar47 < 1) {
      pauVar6 = &auStack_140;
    }
    iVar48 = *(int *)(param_1 + -3);
    pauVar12 = (undefined1 (*) [16])param_1[-4];
    if (iVar2 < iVar48) {
      iVar2 = iVar48;
    }
    in_ZMM7._0_16_ = *(undefined1 (*) [16])(param_1 + -2);
    iStack_11c = iVar48;
    iStack_120 = iVar47;
    pauVar9 = (undefined1 (*) [16])param_1[-5];
    if (iVar48 < 1) {
      pauVar9 = &auStack_140;
    }
    iVar49 = *(int *)(param_1 + 2);
    pauVar16 = (undefined1 (*) [16])param_1[1];
    if (iVar2 < iVar49) {
      iVar2 = iVar49;
    }
    in_ZMM8._0_16_ = *(undefined1 (*) [16])(param_1 + 3);
    iStack_118 = iVar49;
    pauVar11 = (undefined1 (*) [16])*param_1;
    if (iVar49 < 1) {
      pauVar11 = &auStack_140;
    }
    iVar50 = *(int *)(param_1 + 7);
    pauVar19 = (undefined1 (*) [16])param_1[6];
    if (iVar2 < iVar50) {
      iVar2 = iVar50;
    }
    in_ZMM9._0_16_ = *(undefined1 (*) [16])(param_1 + 8);
    iStack_114 = iVar50;
    pauVar14 = (undefined1 (*) [16])param_1[5];
    if (iVar50 < 1) {
      pauVar14 = &auStack_140;
    }
    if (iVar2 == 0) {
      return;
    }
    in_ZMM1._0_16_ = param_2[1];
    in_ZMM0._0_16_ = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    in_ZMM2._0_16_ = *pauVar6 ^ auVar23;
    in_ZMM3._0_16_ = *pauVar9 ^ auVar23;
    in_ZMM4._0_16_ = *pauVar11 ^ auVar23;
    in_ZMM5._0_16_ = *pauVar14 ^ auVar23;
    lVar3 = 0;
    do {
      pauVar5 = (undefined1 (*) [16])(&stack0xfffffffffffffed0 + -(lVar3 + 0x10));
      auVar23 = in_ZMM1._0_16_;
      auVar22 = aesdec(in_ZMM2._0_16_,auVar23);
      auVar27 = aesdec(in_ZMM3._0_16_,auVar23);
      auVar30 = aesdec(in_ZMM4._0_16_,auVar23);
      auVar32 = aesdec(in_ZMM5._0_16_,auVar23);
      auVar23 = param_2[3];
      auVar25 = in_ZMM0._0_16_;
      auVar22 = aesdec(auVar22,auVar25);
      auVar27 = aesdec(auVar27,auVar25);
      auVar30 = aesdec(auVar30,auVar25);
      if (iStack_120 < 2) {
        pauVar6 = pauVar5;
      }
      if (iStack_120 < 1) {
        pauVar7 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar25);
      auVar25 = param_2[4];
      auVar22 = aesdec(auVar22,auVar23);
      auVar27 = aesdec(auVar27,auVar23);
      auVar30 = aesdec(auVar30,auVar23);
      if (iStack_11c < 2) {
        pauVar9 = pauVar5;
      }
      if (iStack_11c < 1) {
        pauVar12 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar23);
      auVar23 = param_2[5];
      auVar22 = aesdec(auVar22,auVar25);
      auVar27 = aesdec(auVar27,auVar25);
      auVar30 = aesdec(auVar30,auVar25);
      if (iStack_118 < 2) {
        pauVar11 = pauVar5;
      }
      if (iStack_118 < 1) {
        pauVar16 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar25);
      auVar25 = param_2[6];
      auVar22 = aesdec(auVar22,auVar23);
      auVar27 = aesdec(auVar27,auVar23);
      auVar30 = aesdec(auVar30,auVar23);
      if (iStack_114 < 2) {
        pauVar14 = pauVar5;
      }
      if (iStack_114 < 1) {
        pauVar19 = pauVar5;
      }
      auVar33 = aesdec(auVar32,auVar23);
      auVar32 = param_2[7];
      auVar23 = aesdec(auVar22,auVar25);
      auVar22 = aesdec(auVar27,auVar25);
      auVar31 = aesdec(auVar30,auVar25);
      auVar33 = aesdec(auVar33,auVar25);
      auVar25 = param_2[8];
      auVar27 = aesdec(auVar23,auVar32);
      auVar23 = *param_2;
      auVar30 = aesdec(auVar22,auVar32);
      iVar47 = iVar47 - (uint)(0 < iVar47);
      iVar48 = iVar48 - (uint)(0 < iVar48);
      iVar49 = iVar49 - (uint)(0 < iVar49);
      iVar50 = iVar50 - (uint)(0 < iVar50);
      iStack_11c = iVar48;
      iStack_120 = iVar47;
      iStack_118 = iVar49;
      iStack_114 = iVar50;
      auVar31 = aesdec(auVar31,auVar32);
      auVar33 = aesdec(auVar33,auVar32);
      auVar22 = param_2[9];
      auVar27 = aesdec(auVar27,auVar25);
      auVar30 = aesdec(auVar30,auVar25);
      auVar32 = aesdec(auVar31,auVar25);
      auVar31 = aesdec(auVar33,auVar25);
      auVar25 = param_2[10];
      if (10 < uVar1) {
        auVar27 = aesdec(auVar27,auVar22);
        auVar30 = aesdec(auVar30,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar31 = aesdec(auVar31,auVar22);
        auVar22 = param_2[0xb];
        auVar27 = aesdec(auVar27,auVar25);
        auVar30 = aesdec(auVar30,auVar25);
        auVar32 = aesdec(auVar32,auVar25);
        auVar31 = aesdec(auVar31,auVar25);
        auVar25 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar27 = aesdec(auVar27,auVar22);
          auVar30 = aesdec(auVar30,auVar22);
          auVar32 = aesdec(auVar32,auVar22);
          auVar31 = aesdec(auVar31,auVar22);
          auVar22 = param_2[0xd];
          auVar27 = aesdec(auVar27,auVar25);
          auVar30 = aesdec(auVar30,auVar25);
          auVar32 = aesdec(auVar32,auVar25);
          auVar31 = aesdec(auVar31,auVar25);
          auVar25 = param_2[0xe];
        }
      }
      auVar27 = aesdec(auVar27,auVar22);
      auVar30 = aesdec(auVar30,auVar22);
      auVar32 = aesdec(auVar32,auVar22);
      auVar31 = aesdec(auVar31,auVar22);
      in_ZMM1._0_16_ = param_2[1];
      in_ZMM0._0_16_ = param_2[2];
      auVar22 = aesdeclast(auVar27,in_ZMM6._0_16_ ^ auVar25);
      auVar27 = aesdeclast(auVar30,in_ZMM7._0_16_ ^ auVar25);
      in_ZMM6._0_16_ = *(undefined1 (*) [16])(*pauVar6 + lVar3);
      in_ZMM7._0_16_ = *(undefined1 (*) [16])(*pauVar9 + lVar3);
      auVar30 = aesdeclast(auVar32,in_ZMM8._0_16_ ^ auVar25);
      auVar32 = aesdeclast(auVar31,in_ZMM9._0_16_ ^ auVar25);
      in_ZMM8._0_16_ = *(undefined1 (*) [16])(*pauVar11 + lVar3);
      in_ZMM9._0_16_ = *(undefined1 (*) [16])(*pauVar14 + lVar3);
      *(undefined1 (*) [16])(*pauVar7 + lVar3) = auVar22;
      auVar25 = *(undefined1 (*) [16])(pauVar6[1] + lVar3);
      *(undefined1 (*) [16])(*pauVar12 + lVar3) = auVar27;
      auVar22 = *(undefined1 (*) [16])(pauVar9[1] + lVar3);
      in_ZMM2._0_16_ = auVar25 ^ auVar23;
      *(undefined1 (*) [16])(*pauVar16 + lVar3) = auVar30;
      auVar25 = *(undefined1 (*) [16])(pauVar11[1] + lVar3);
      in_ZMM3._0_16_ = auVar22 ^ auVar23;
      *(undefined1 (*) [16])(*pauVar19 + lVar3) = auVar32;
      in_ZMM4._0_16_ = auVar25 ^ auVar23;
      in_ZMM5._0_16_ = *(undefined1 (*) [16])(pauVar14[1] + lVar3) ^ auVar23;
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 != 0);
    param_1 = param_1 + 0x14;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

// L$SEH_begin_aesni_multi_cbc_decrypt @ 140e0cd2d

void L_SEH_begin_aesni_multi_cbc_decrypt
               (undefined8 *param_1,undefined1 (*param_2) [16],uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 in_ZMM8 [64];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_ZMM9 [64];
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined1 auStack_2c0 [16];
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 local_140 [16];
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  
  if ((1 < param_3) && ((DAT_15540a9f4 & 0x10000000) != 0)) {
    auVar23 = *param_2;
    iStack_2a0 = *(int *)(param_1 + 2);
    pauVar7 = (undefined1 (*) [16])*param_1;
    iVar47 = iStack_2a0;
    if (iStack_2a0 < 1) {
      pauVar7 = &auStack_2c0;
      iVar47 = 0;
    }
    lVar3 = param_1[1] - (longlong)pauVar7;
    iStack_29c = *(int *)(param_1 + 7);
    if (iVar47 < iStack_29c) {
      iVar47 = iStack_29c;
    }
    pauVar6 = (undefined1 (*) [16])param_1[5];
    if (iStack_29c < 1) {
      pauVar6 = &auStack_2c0;
    }
    lStack_278 = param_1[6] - (longlong)pauVar6;
    iStack_298 = *(int *)(param_1 + 0xc);
    if (iVar47 < iStack_298) {
      iVar47 = iStack_298;
    }
    pauVar12 = (undefined1 (*) [16])param_1[10];
    if (iStack_298 < 1) {
      pauVar12 = &auStack_2c0;
    }
    lStack_270 = param_1[0xb] - (longlong)pauVar12;
    iStack_294 = *(int *)(param_1 + 0x11);
    if (iVar47 < iStack_294) {
      iVar47 = iStack_294;
    }
    pauVar9 = (undefined1 (*) [16])param_1[0xf];
    if (iStack_294 < 1) {
      pauVar9 = &auStack_2c0;
    }
    lStack_268 = param_1[0x10] - (longlong)pauVar9;
    iStack_290 = *(int *)(param_1 + 0x16);
    if (iVar47 < iStack_290) {
      iVar47 = iStack_290;
    }
    pauVar16 = (undefined1 (*) [16])param_1[0x14];
    if (iStack_290 < 1) {
      pauVar16 = &auStack_2c0;
    }
    lStack_260 = param_1[0x15] - (longlong)pauVar16;
    iStack_28c = *(int *)(param_1 + 0x1b);
    if (iVar47 < iStack_28c) {
      iVar47 = iStack_28c;
    }
    pauVar11 = (undefined1 (*) [16])param_1[0x19];
    if (iStack_28c < 1) {
      pauVar11 = &auStack_2c0;
    }
    lStack_258 = param_1[0x1a] - (longlong)pauVar11;
    iStack_288 = *(int *)(param_1 + 0x20);
    if (iVar47 < iStack_288) {
      iVar47 = iStack_288;
    }
    pauVar19 = (undefined1 (*) [16])param_1[0x1e];
    if (iStack_288 < 1) {
      pauVar19 = &auStack_2c0;
    }
    lStack_250 = param_1[0x1f] - (longlong)pauVar19;
    iStack_284 = *(int *)(param_1 + 0x25);
    if (iVar47 < iStack_284) {
      iVar47 = iStack_284;
    }
    pauVar14 = (undefined1 (*) [16])param_1[0x23];
    if (iStack_284 < 1) {
      pauVar14 = &auStack_2c0;
    }
    lStack_248 = param_1[0x24] - (longlong)pauVar14;
    if (iVar47 != 0) {
      auVar25 = param_2[1];
      auVar22 = param_2[2];
      uVar1 = *(uint *)param_2[0xf];
      pauVar5 = &auStack_180;
      auStack_180 = *pauVar7;
      auVar31 = *pauVar7 ^ auVar23;
      auStack_170 = *pauVar6;
      auVar28 = *pauVar6 ^ auVar23;
      auStack_160 = *pauVar12;
      auVar33 = *pauVar12 ^ auVar23;
      auStack_150 = *pauVar9;
      auVar34 = *pauVar9 ^ auVar23;
      local_140 = *pauVar16;
      auVar27 = *pauVar16 ^ auVar23;
      auVar30 = *pauVar11 ^ auVar23;
      auVar32 = *pauVar19 ^ auVar23;
      auVar23 = *pauVar14 ^ auVar23;
      do {
        pauVar5 = (undefined1 (*) [16])((ulonglong)pauVar5 ^ 0x80);
        auVar24 = aesdec(auVar31,auVar25);
        auVar28 = aesdec(auVar28,auVar25);
        auVar33 = aesdec(auVar33,auVar25);
        auVar34 = aesdec(auVar34,auVar25);
        pauVar8 = pauVar7;
        if (iStack_2a0 < 2) {
          pauVar8 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar25);
        puVar4 = *pauVar7 + lVar3;
        if (iStack_2a0 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar37 = aesdec(auVar30,auVar25);
        lVar3 = (longlong)puVar4 - (longlong)pauVar8;
        auVar40 = aesdec(auVar32,auVar25);
        auVar31 = pauVar8[1];
        auVar44 = aesdec(auVar23,auVar25);
        auVar23 = param_2[3];
        auVar25 = aesdec(auVar24,auVar22);
        auVar30 = aesdec(auVar28,auVar22);
        auVar32 = aesdec(auVar33,auVar22);
        auVar33 = aesdec(auVar34,auVar22);
        pauVar10 = pauVar6;
        if (iStack_29c < 2) {
          pauVar10 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar22);
        puVar4 = *pauVar6 + lStack_278;
        if (iStack_29c < 1) {
          puVar4 = auStack_2c0;
        }
        auVar24 = aesdec(auVar37,auVar22);
        lStack_278 = (longlong)puVar4 - (longlong)pauVar10;
        auVar37 = aesdec(auVar40,auVar22);
        auVar28 = pauVar10[1];
        auVar40 = aesdec(auVar44,auVar22);
        auVar22 = param_2[4];
        auVar25 = aesdec(auVar25,auVar23);
        auVar30 = aesdec(auVar30,auVar23);
        auVar32 = aesdec(auVar32,auVar23);
        auVar34 = aesdec(auVar33,auVar23);
        pauVar13 = pauVar12;
        if (iStack_298 < 2) {
          pauVar13 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar23);
        puVar4 = *pauVar12 + lStack_270;
        if (iStack_298 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar24,auVar23);
        lStack_270 = (longlong)puVar4 - (longlong)pauVar13;
        auVar37 = aesdec(auVar37,auVar23);
        auVar33 = pauVar13[1];
        auVar40 = aesdec(auVar40,auVar23);
        auVar23 = param_2[5];
        auVar25 = aesdec(auVar25,auVar22);
        auVar30 = aesdec(auVar30,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar24 = aesdec(auVar34,auVar22);
        pauVar15 = pauVar9;
        if (iStack_294 < 2) {
          pauVar15 = &auStack_2c0;
        }
        auVar27 = aesdec(auVar27,auVar22);
        puVar4 = *pauVar9 + lStack_268;
        if (iStack_294 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar22);
        lStack_268 = (longlong)puVar4 - (longlong)pauVar15;
        auVar37 = aesdec(auVar37,auVar22);
        auVar34 = pauVar15[1];
        auVar40 = aesdec(auVar40,auVar22);
        auVar22 = param_2[6];
        auVar25 = aesdec(auVar25,auVar23);
        auVar30 = aesdec(auVar30,auVar23);
        auVar32 = aesdec(auVar32,auVar23);
        auVar24 = aesdec(auVar24,auVar23);
        pauVar17 = pauVar16;
        if (iStack_290 < 2) {
          pauVar17 = &auStack_2c0;
        }
        auVar35 = aesdec(auVar27,auVar23);
        puVar4 = *pauVar16 + lStack_260;
        if (iStack_290 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar23);
        lStack_260 = (longlong)puVar4 - (longlong)pauVar17;
        auVar41 = aesdec(auVar37,auVar23);
        auVar27 = pauVar17[1];
        auVar40 = aesdec(auVar40,auVar23);
        auVar23 = param_2[7];
        auVar25 = aesdec(auVar25,auVar22);
        auVar37 = aesdec(auVar30,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar24 = aesdec(auVar24,auVar22);
        pauVar18 = pauVar11;
        if (iStack_28c < 2) {
          pauVar18 = &auStack_2c0;
        }
        auVar35 = aesdec(auVar35,auVar22);
        puVar4 = *pauVar11 + lStack_258;
        if (iStack_28c < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar22);
        lStack_258 = (longlong)puVar4 - (longlong)pauVar18;
        auVar41 = aesdec(auVar41,auVar22);
        auVar30 = pauVar18[1];
        auVar45 = aesdec(auVar40,auVar22);
        auVar22 = param_2[8];
        auVar25 = aesdec(auVar25,auVar23);
        auVar37 = aesdec(auVar37,auVar23);
        auVar40 = aesdec(auVar32,auVar23);
        auVar24 = aesdec(auVar24,auVar23);
        pauVar20 = pauVar19;
        if (iStack_288 < 2) {
          pauVar20 = &auStack_2c0;
        }
        auVar35 = aesdec(auVar35,auVar23);
        puVar4 = *pauVar19 + lStack_250;
        if (iStack_288 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar44 = aesdec(auVar44,auVar23);
        lStack_250 = (longlong)puVar4 - (longlong)pauVar20;
        auVar41 = aesdec(auVar41,auVar23);
        auVar32 = pauVar20[1];
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = param_2[9];
        auVar25 = aesdec(auVar25,auVar22);
        auVar37 = aesdec(auVar37,auVar22);
        auVar40 = aesdec(auVar40,auVar22);
        auVar24 = aesdec(auVar24,auVar22);
        pauVar21 = pauVar14;
        if (iStack_284 < 2) {
          pauVar21 = &auStack_2c0;
        }
        auVar35 = aesdec(auVar35,auVar22);
        puVar4 = *pauVar14 + lStack_248;
        if (iStack_284 < 1) {
          puVar4 = auStack_2c0;
        }
        auVar38 = aesdec(auVar44,auVar22);
        lStack_248 = (longlong)puVar4 - (longlong)pauVar21;
        auVar42 = aesdec(auVar41,auVar22);
        auVar44 = pauVar21[1];
        auVar45 = aesdec(auVar45,auVar22);
        auVar22 = param_2[10];
        auVar41._4_4_ = iStack_29c;
        auVar41._0_4_ = iStack_2a0;
        auVar41._8_4_ = iStack_298;
        auVar41._12_4_ = iStack_294;
        if (10 < uVar1) {
          auVar25 = aesdec(auVar25,auVar23);
          auVar37 = aesdec(auVar37,auVar23);
          auVar40 = aesdec(auVar40,auVar23);
          auVar24 = aesdec(auVar24,auVar23);
          auVar35 = aesdec(auVar35,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar42 = aesdec(auVar42,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = param_2[0xb];
          auVar25 = aesdec(auVar25,auVar22);
          auVar37 = aesdec(auVar37,auVar22);
          auVar40 = aesdec(auVar40,auVar22);
          auVar24 = aesdec(auVar24,auVar22);
          auVar35 = aesdec(auVar35,auVar22);
          auVar38 = aesdec(auVar38,auVar22);
          auVar42 = aesdec(auVar42,auVar22);
          auVar45 = aesdec(auVar45,auVar22);
          auVar22 = param_2[0xc];
          if (uVar1 != 0xb) {
            auVar25 = aesdec(auVar25,auVar23);
            auVar37 = aesdec(auVar37,auVar23);
            auVar40 = aesdec(auVar40,auVar23);
            auVar24 = aesdec(auVar24,auVar23);
            auVar35 = aesdec(auVar35,auVar23);
            auVar38 = aesdec(auVar38,auVar23);
            auVar42 = aesdec(auVar42,auVar23);
            auVar45 = aesdec(auVar45,auVar23);
            auVar23 = param_2[0xd];
            auVar25 = aesdec(auVar25,auVar22);
            auVar37 = aesdec(auVar37,auVar22);
            auVar40 = aesdec(auVar40,auVar22);
            auVar24 = aesdec(auVar24,auVar22);
            auVar35 = aesdec(auVar35,auVar22);
            auVar38 = aesdec(auVar38,auVar22);
            auVar42 = aesdec(auVar42,auVar22);
            auVar45 = aesdec(auVar45,auVar22);
            auVar22 = param_2[0xe];
          }
        }
        auVar26 = aesdec(auVar25,auVar23);
        auVar29 = aesdec(auVar37,auVar23);
        auVar40 = aesdec(auVar40,auVar23);
        auVar25 = vpcmpgtd_avx(auVar41,(undefined1  [16])0x0);
        auVar41 = aesdec(auVar24,auVar23);
        auVar35 = aesdec(auVar35,auVar23);
        iStack_2a0 = auVar25._0_4_ + iStack_2a0;
        iStack_29c = auVar25._4_4_ + iStack_29c;
        iStack_298 = auVar25._8_4_ + iStack_298;
        iStack_294 = auVar25._12_4_ + iStack_294;
        auVar37._4_4_ = iStack_28c;
        auVar37._0_4_ = iStack_290;
        auVar37._8_4_ = iStack_288;
        auVar37._12_4_ = iStack_284;
        auVar39 = aesdec(auVar38,auVar23);
        auVar43 = aesdec(auVar42,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar25 = param_2[1];
        auVar38 = aesdeclast(auVar26,auVar22);
        auVar42 = aesdeclast(auVar29,auVar22);
        auVar26 = aesdeclast(auVar40,auVar22);
        auVar24 = pauVar5[1];
        auVar23 = vpcmpgtd_avx(auVar37,(undefined1  [16])0x0);
        auVar29 = aesdeclast(auVar41,auVar22);
        auVar37 = pauVar5[2];
        auVar36 = aesdeclast(auVar35,auVar22);
        auVar40 = pauVar5[3];
        iStack_290 = iStack_290 + auVar23._0_4_;
        iStack_28c = iStack_28c + auVar23._4_4_;
        iStack_288 = iStack_288 + auVar23._8_4_;
        iStack_284 = iStack_284 + auVar23._12_4_;
        auVar23 = *param_2;
        auVar39 = aesdeclast(auVar39,auVar22);
        auVar35 = pauVar5[4];
        auVar43 = aesdeclast(auVar43,auVar22);
        auVar41 = pauVar5[5];
        auVar46 = aesdeclast(auVar45,auVar22);
        auVar45 = pauVar5[6];
        auVar22 = param_2[2];
        *(undefined1 (*) [16])((longlong)pauVar8 + lVar3) = auVar38 ^ *pauVar5;
        pauVar7 = pauVar8 + 1;
        auVar38 = pauVar5[7];
        *(undefined1 (*) [16])((longlong)pauVar10 + lStack_278) = auVar42 ^ auVar24;
        pauVar6 = pauVar10 + 1;
        *pauVar5 = auVar31;
        auVar31 = auVar31 ^ auVar23;
        *(undefined1 (*) [16])((longlong)pauVar13 + lStack_270) = auVar26 ^ auVar37;
        pauVar12 = pauVar13 + 1;
        pauVar5[1] = auVar28;
        auVar28 = auVar28 ^ auVar23;
        *(undefined1 (*) [16])((longlong)pauVar15 + lStack_268) = auVar29 ^ auVar40;
        pauVar9 = pauVar15 + 1;
        pauVar5[2] = auVar33;
        auVar33 = auVar33 ^ auVar23;
        *(undefined1 (*) [16])((longlong)pauVar17 + lStack_260) = auVar36 ^ auVar35;
        pauVar16 = pauVar17 + 1;
        pauVar5[3] = auVar34;
        auVar34 = auVar34 ^ auVar23;
        pauVar5[4] = auVar27;
        auVar27 = auVar23 ^ auVar27;
        *(undefined1 (*) [16])((longlong)pauVar18 + lStack_258) = auVar39 ^ auVar41;
        pauVar11 = pauVar18 + 1;
        pauVar5[5] = auVar30;
        auVar30 = auVar23 ^ auVar30;
        *(undefined1 (*) [16])((longlong)pauVar20 + lStack_250) = auVar43 ^ auVar45;
        pauVar19 = pauVar20 + 1;
        pauVar5[6] = auVar32;
        auVar32 = auVar23 ^ auVar32;
        *(undefined1 (*) [16])((longlong)pauVar21 + lStack_248) = auVar46 ^ auVar38;
        pauVar14 = pauVar21 + 1;
        pauVar5[7] = auVar44;
        auVar23 = auVar23 ^ auVar44;
        iVar47 = iVar47 + -1;
      } while (iVar47 != 0);
    }
    return;
  }
  auVar23 = *param_2;
  param_1 = param_1 + 10;
  do {
    iVar47 = *(int *)(param_1 + -8);
    pauVar7 = (undefined1 (*) [16])param_1[-9];
    iVar2 = 0;
    if (0 < iVar47) {
      iVar2 = iVar47;
    }
    in_ZMM6._0_16_ = *(undefined1 (*) [16])(param_1 + -7);
    pauVar6 = (undefined1 (*) [16])param_1[-10];
    if (iVar47 < 1) {
      pauVar6 = &local_140;
    }
    iVar48 = *(int *)(param_1 + -3);
    pauVar12 = (undefined1 (*) [16])param_1[-4];
    if (iVar2 < iVar48) {
      iVar2 = iVar48;
    }
    in_ZMM7._0_16_ = *(undefined1 (*) [16])(param_1 + -2);
    iStack_11c = iVar48;
    local_120 = iVar47;
    pauVar9 = (undefined1 (*) [16])param_1[-5];
    if (iVar48 < 1) {
      pauVar9 = &local_140;
    }
    iVar49 = *(int *)(param_1 + 2);
    pauVar16 = (undefined1 (*) [16])param_1[1];
    if (iVar2 < iVar49) {
      iVar2 = iVar49;
    }
    in_ZMM8._0_16_ = *(undefined1 (*) [16])(param_1 + 3);
    iStack_118 = iVar49;
    pauVar11 = (undefined1 (*) [16])*param_1;
    if (iVar49 < 1) {
      pauVar11 = &local_140;
    }
    iVar50 = *(int *)(param_1 + 7);
    pauVar19 = (undefined1 (*) [16])param_1[6];
    if (iVar2 < iVar50) {
      iVar2 = iVar50;
    }
    in_ZMM9._0_16_ = *(undefined1 (*) [16])(param_1 + 8);
    iStack_114 = iVar50;
    pauVar14 = (undefined1 (*) [16])param_1[5];
    if (iVar50 < 1) {
      pauVar14 = &local_140;
    }
    if (iVar2 == 0) {
      return;
    }
    in_ZMM1._0_16_ = param_2[1];
    in_ZMM0._0_16_ = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    in_ZMM2._0_16_ = *pauVar6 ^ auVar23;
    in_ZMM3._0_16_ = *pauVar9 ^ auVar23;
    in_ZMM4._0_16_ = *pauVar11 ^ auVar23;
    in_ZMM5._0_16_ = *pauVar14 ^ auVar23;
    lVar3 = 0;
    do {
      pauVar5 = (undefined1 (*) [16])(&stack0xfffffffffffffed0 + -(lVar3 + 0x10));
      auVar23 = in_ZMM1._0_16_;
      auVar22 = aesdec(in_ZMM2._0_16_,auVar23);
      auVar27 = aesdec(in_ZMM3._0_16_,auVar23);
      auVar30 = aesdec(in_ZMM4._0_16_,auVar23);
      auVar32 = aesdec(in_ZMM5._0_16_,auVar23);
      auVar23 = param_2[3];
      auVar25 = in_ZMM0._0_16_;
      auVar22 = aesdec(auVar22,auVar25);
      auVar27 = aesdec(auVar27,auVar25);
      auVar30 = aesdec(auVar30,auVar25);
      if (local_120 < 2) {
        pauVar6 = pauVar5;
      }
      if (local_120 < 1) {
        pauVar7 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar25);
      auVar25 = param_2[4];
      auVar22 = aesdec(auVar22,auVar23);
      auVar27 = aesdec(auVar27,auVar23);
      auVar30 = aesdec(auVar30,auVar23);
      if (iStack_11c < 2) {
        pauVar9 = pauVar5;
      }
      if (iStack_11c < 1) {
        pauVar12 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar23);
      auVar23 = param_2[5];
      auVar22 = aesdec(auVar22,auVar25);
      auVar27 = aesdec(auVar27,auVar25);
      auVar30 = aesdec(auVar30,auVar25);
      if (iStack_118 < 2) {
        pauVar11 = pauVar5;
      }
      if (iStack_118 < 1) {
        pauVar16 = pauVar5;
      }
      auVar32 = aesdec(auVar32,auVar25);
      auVar25 = param_2[6];
      auVar22 = aesdec(auVar22,auVar23);
      auVar27 = aesdec(auVar27,auVar23);
      auVar30 = aesdec(auVar30,auVar23);
      if (iStack_114 < 2) {
        pauVar14 = pauVar5;
      }
      if (iStack_114 < 1) {
        pauVar19 = pauVar5;
      }
      auVar33 = aesdec(auVar32,auVar23);
      auVar32 = param_2[7];
      auVar23 = aesdec(auVar22,auVar25);
      auVar22 = aesdec(auVar27,auVar25);
      auVar31 = aesdec(auVar30,auVar25);
      auVar33 = aesdec(auVar33,auVar25);
      auVar25 = param_2[8];
      auVar27 = aesdec(auVar23,auVar32);
      auVar23 = *param_2;
      auVar30 = aesdec(auVar22,auVar32);
      iVar47 = iVar47 - (uint)(0 < iVar47);
      iVar48 = iVar48 - (uint)(0 < iVar48);
      iVar49 = iVar49 - (uint)(0 < iVar49);
      iVar50 = iVar50 - (uint)(0 < iVar50);
      iStack_11c = iVar48;
      local_120 = iVar47;
      iStack_118 = iVar49;
      iStack_114 = iVar50;
      auVar31 = aesdec(auVar31,auVar32);
      auVar33 = aesdec(auVar33,auVar32);
      auVar22 = param_2[9];
      auVar27 = aesdec(auVar27,auVar25);
      auVar30 = aesdec(auVar30,auVar25);
      auVar32 = aesdec(auVar31,auVar25);
      auVar31 = aesdec(auVar33,auVar25);
      auVar25 = param_2[10];
      if (10 < uVar1) {
        auVar27 = aesdec(auVar27,auVar22);
        auVar30 = aesdec(auVar30,auVar22);
        auVar32 = aesdec(auVar32,auVar22);
        auVar31 = aesdec(auVar31,auVar22);
        auVar22 = param_2[0xb];
        auVar27 = aesdec(auVar27,auVar25);
        auVar30 = aesdec(auVar30,auVar25);
        auVar32 = aesdec(auVar32,auVar25);
        auVar31 = aesdec(auVar31,auVar25);
        auVar25 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar27 = aesdec(auVar27,auVar22);
          auVar30 = aesdec(auVar30,auVar22);
          auVar32 = aesdec(auVar32,auVar22);
          auVar31 = aesdec(auVar31,auVar22);
          auVar22 = param_2[0xd];
          auVar27 = aesdec(auVar27,auVar25);
          auVar30 = aesdec(auVar30,auVar25);
          auVar32 = aesdec(auVar32,auVar25);
          auVar31 = aesdec(auVar31,auVar25);
          auVar25 = param_2[0xe];
        }
      }
      auVar27 = aesdec(auVar27,auVar22);
      auVar30 = aesdec(auVar30,auVar22);
      auVar32 = aesdec(auVar32,auVar22);
      auVar31 = aesdec(auVar31,auVar22);
      in_ZMM1._0_16_ = param_2[1];
      in_ZMM0._0_16_ = param_2[2];
      auVar22 = aesdeclast(auVar27,in_ZMM6._0_16_ ^ auVar25);
      auVar27 = aesdeclast(auVar30,in_ZMM7._0_16_ ^ auVar25);
      in_ZMM6._0_16_ = *(undefined1 (*) [16])(*pauVar6 + lVar3);
      in_ZMM7._0_16_ = *(undefined1 (*) [16])(*pauVar9 + lVar3);
      auVar30 = aesdeclast(auVar32,in_ZMM8._0_16_ ^ auVar25);
      auVar32 = aesdeclast(auVar31,in_ZMM9._0_16_ ^ auVar25);
      in_ZMM8._0_16_ = *(undefined1 (*) [16])(*pauVar11 + lVar3);
      in_ZMM9._0_16_ = *(undefined1 (*) [16])(*pauVar14 + lVar3);
      *(undefined1 (*) [16])(*pauVar7 + lVar3) = auVar22;
      auVar25 = *(undefined1 (*) [16])(pauVar6[1] + lVar3);
      *(undefined1 (*) [16])(*pauVar12 + lVar3) = auVar27;
      auVar22 = *(undefined1 (*) [16])(pauVar9[1] + lVar3);
      in_ZMM2._0_16_ = auVar25 ^ auVar23;
      *(undefined1 (*) [16])(*pauVar16 + lVar3) = auVar30;
      auVar25 = *(undefined1 (*) [16])(pauVar11[1] + lVar3);
      in_ZMM3._0_16_ = auVar22 ^ auVar23;
      *(undefined1 (*) [16])(*pauVar19 + lVar3) = auVar32;
      in_ZMM4._0_16_ = auVar25 ^ auVar23;
      in_ZMM5._0_16_ = *(undefined1 (*) [16])(pauVar14[1] + lVar3) ^ auVar23;
      iVar2 = iVar2 + -1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 != 0);
    param_1 = param_1 + 0x14;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

// L$SEH_begin_aesni_multi_cbc_encrypt_avx @ 140e0d16d

void L_SEH_begin_aesni_multi_cbc_encrypt_avx(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  undefined1 (*pauVar25) [16];
  undefined1 (*pauVar26) [16];
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
  undefined1 local_200 [16];
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  
  auVar1 = *param_2;
  local_1e0 = *(int *)(param_1 + 2);
  iVar8 = 0;
  if (0 < local_1e0) {
    iVar8 = local_1e0;
  }
  pauVar11 = (undefined1 (*) [16])*param_1;
  if (local_1e0 < 1) {
    pauVar11 = &local_200;
  }
  lVar9 = param_1[1] - (longlong)pauVar11;
  iStack_1dc = *(int *)(param_1 + 7);
  if (iVar8 < iStack_1dc) {
    iVar8 = iStack_1dc;
  }
  pauVar13 = (undefined1 (*) [16])param_1[5];
  if (iStack_1dc < 1) {
    pauVar13 = &local_200;
  }
  local_1b8 = param_1[6] - (longlong)pauVar13;
  iStack_1d8 = *(int *)(param_1 + 0xc);
  if (iVar8 < iStack_1d8) {
    iVar8 = iStack_1d8;
  }
  pauVar15 = (undefined1 (*) [16])param_1[10];
  if (iStack_1d8 < 1) {
    pauVar15 = &local_200;
  }
  local_1b0 = param_1[0xb] - (longlong)pauVar15;
  iStack_1d4 = *(int *)(param_1 + 0x11);
  if (iVar8 < iStack_1d4) {
    iVar8 = iStack_1d4;
  }
  pauVar17 = (undefined1 (*) [16])param_1[0xf];
  if (iStack_1d4 < 1) {
    pauVar17 = &local_200;
  }
  local_1a8 = param_1[0x10] - (longlong)pauVar17;
  local_1d0 = *(int *)(param_1 + 0x16);
  if (iVar8 < local_1d0) {
    iVar8 = local_1d0;
  }
  pauVar19 = (undefined1 (*) [16])param_1[0x14];
  if (local_1d0 < 1) {
    pauVar19 = &local_200;
  }
  local_1a0 = param_1[0x15] - (longlong)pauVar19;
  iStack_1cc = *(int *)(param_1 + 0x1b);
  if (iVar8 < iStack_1cc) {
    iVar8 = iStack_1cc;
  }
  pauVar21 = (undefined1 (*) [16])param_1[0x19];
  if (iStack_1cc < 1) {
    pauVar21 = &local_200;
  }
  local_198 = param_1[0x1a] - (longlong)pauVar21;
  iStack_1c8 = *(int *)(param_1 + 0x20);
  if (iVar8 < iStack_1c8) {
    iVar8 = iStack_1c8;
  }
  pauVar23 = (undefined1 (*) [16])param_1[0x1e];
  if (iStack_1c8 < 1) {
    pauVar23 = &local_200;
  }
  local_190 = param_1[0x1f] - (longlong)pauVar23;
  iStack_1c4 = *(int *)(param_1 + 0x25);
  if (iVar8 < iStack_1c4) {
    iVar8 = iStack_1c4;
  }
  pauVar25 = (undefined1 (*) [16])param_1[0x23];
  if (iStack_1c4 < 1) {
    pauVar25 = &local_200;
  }
  local_188 = param_1[0x24] - (longlong)pauVar25;
  if (iVar8 != 0) {
    auVar28 = param_2[1];
    auVar27 = param_2[2];
    uVar2 = *(uint *)param_2[0xf];
    auVar29 = *(undefined1 (*) [16])(param_1 + 3) ^ auVar1 ^ *pauVar11;
    auVar31 = *(undefined1 (*) [16])(param_1 + 8) ^ auVar1 ^ *pauVar13;
    auVar33 = *(undefined1 (*) [16])(param_1 + 0xd) ^ auVar1 ^ *pauVar15;
    auVar35 = *(undefined1 (*) [16])(param_1 + 0x12) ^ auVar1 ^ *pauVar17;
    auVar37 = *(undefined1 (*) [16])(param_1 + 0x17) ^ auVar1 ^ *pauVar19;
    auVar34 = *(undefined1 (*) [16])(param_1 + 0x1c) ^ auVar1 ^ *pauVar21;
    auVar32 = *(undefined1 (*) [16])(param_1 + 0x21) ^ auVar1 ^ *pauVar23;
    auVar30 = *(undefined1 (*) [16])(param_1 + 0x26) ^ auVar1 ^ *pauVar25;
    do {
      auVar29 = aesenc(auVar29,auVar28);
      auVar31 = aesenc(auVar31,auVar28);
      auVar33 = aesenc(auVar33,auVar28);
      auVar35 = aesenc(auVar35,auVar28);
      pauVar12 = pauVar11;
      if (local_1e0 < 2) {
        pauVar12 = &local_200;
      }
      auVar37 = aesenc(auVar37,auVar28);
      puVar10 = *pauVar11 + lVar9;
      if (local_1e0 < 1) {
        puVar10 = local_200;
      }
      auVar38 = aesenc(auVar34,auVar28);
      lVar9 = (longlong)puVar10 - (longlong)pauVar12;
      auVar40 = aesenc(auVar32,auVar28);
      auVar3 = auVar1 ^ pauVar12[1];
      auVar42 = aesenc(auVar30,auVar28);
      auVar28 = param_2[3];
      auVar30 = aesenc(auVar29,auVar27);
      auVar32 = aesenc(auVar31,auVar27);
      auVar34 = aesenc(auVar33,auVar27);
      auVar35 = aesenc(auVar35,auVar27);
      pauVar14 = pauVar13;
      if (iStack_1dc < 2) {
        pauVar14 = &local_200;
      }
      auVar37 = aesenc(auVar37,auVar27);
      puVar10 = *pauVar13 + local_1b8;
      if (iStack_1dc < 1) {
        puVar10 = local_200;
      }
      auVar29 = aesenc(auVar38,auVar27);
      local_1b8 = (longlong)puVar10 - (longlong)pauVar14;
      auVar31 = aesenc(auVar40,auVar27);
      auVar38 = auVar1 ^ pauVar14[1];
      auVar33 = aesenc(auVar42,auVar27);
      auVar27 = param_2[4];
      auVar30 = aesenc(auVar30,auVar28);
      auVar32 = aesenc(auVar32,auVar28);
      auVar34 = aesenc(auVar34,auVar28);
      auVar35 = aesenc(auVar35,auVar28);
      pauVar16 = pauVar15;
      if (iStack_1d8 < 2) {
        pauVar16 = &local_200;
      }
      auVar37 = aesenc(auVar37,auVar28);
      puVar10 = *pauVar15 + local_1b0;
      if (iStack_1d8 < 1) {
        puVar10 = local_200;
      }
      auVar29 = aesenc(auVar29,auVar28);
      local_1b0 = (longlong)puVar10 - (longlong)pauVar16;
      auVar31 = aesenc(auVar31,auVar28);
      auVar40 = auVar1 ^ pauVar16[1];
      auVar33 = aesenc(auVar33,auVar28);
      auVar28 = param_2[5];
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      auVar35 = aesenc(auVar35,auVar27);
      pauVar18 = pauVar17;
      if (iStack_1d4 < 2) {
        pauVar18 = &local_200;
      }
      auVar37 = aesenc(auVar37,auVar27);
      puVar10 = *pauVar17 + local_1a8;
      if (iStack_1d4 < 1) {
        puVar10 = local_200;
      }
      auVar29 = aesenc(auVar29,auVar27);
      local_1a8 = (longlong)puVar10 - (longlong)pauVar18;
      auVar31 = aesenc(auVar31,auVar27);
      auVar42 = auVar1 ^ pauVar18[1];
      auVar33 = aesenc(auVar33,auVar27);
      auVar27 = param_2[6];
      auVar30 = aesenc(auVar30,auVar28);
      auVar32 = aesenc(auVar32,auVar28);
      auVar34 = aesenc(auVar34,auVar28);
      auVar35 = aesenc(auVar35,auVar28);
      pauVar20 = pauVar19;
      if (local_1d0 < 2) {
        pauVar20 = &local_200;
      }
      auVar37 = aesenc(auVar37,auVar28);
      puVar10 = *pauVar19 + local_1a0;
      if (local_1d0 < 1) {
        puVar10 = local_200;
      }
      auVar29 = aesenc(auVar29,auVar28);
      local_1a0 = (longlong)puVar10 - (longlong)pauVar20;
      auVar31 = aesenc(auVar31,auVar28);
      auVar4 = auVar1 ^ pauVar20[1];
      auVar33 = aesenc(auVar33,auVar28);
      auVar28 = param_2[7];
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      auVar35 = aesenc(auVar35,auVar27);
      pauVar22 = pauVar21;
      if (iStack_1cc < 2) {
        pauVar22 = &local_200;
      }
      auVar37 = aesenc(auVar37,auVar27);
      puVar10 = *pauVar21 + local_198;
      if (iStack_1cc < 1) {
        puVar10 = local_200;
      }
      auVar29 = aesenc(auVar29,auVar27);
      local_198 = (longlong)puVar10 - (longlong)pauVar22;
      auVar31 = aesenc(auVar31,auVar27);
      auVar5 = auVar1 ^ pauVar22[1];
      auVar33 = aesenc(auVar33,auVar27);
      auVar27 = param_2[8];
      auVar30 = aesenc(auVar30,auVar28);
      auVar32 = aesenc(auVar32,auVar28);
      auVar34 = aesenc(auVar34,auVar28);
      auVar35 = aesenc(auVar35,auVar28);
      pauVar24 = pauVar23;
      if (iStack_1c8 < 2) {
        pauVar24 = &local_200;
      }
      auVar37 = aesenc(auVar37,auVar28);
      puVar10 = *pauVar23 + local_190;
      if (iStack_1c8 < 1) {
        puVar10 = local_200;
      }
      auVar29 = aesenc(auVar29,auVar28);
      local_190 = (longlong)puVar10 - (longlong)pauVar24;
      auVar31 = aesenc(auVar31,auVar28);
      auVar6 = auVar1 ^ pauVar24[1];
      auVar33 = aesenc(auVar33,auVar28);
      auVar28 = param_2[9];
      auVar30 = aesenc(auVar30,auVar27);
      auVar32 = aesenc(auVar32,auVar27);
      auVar34 = aesenc(auVar34,auVar27);
      auVar35 = aesenc(auVar35,auVar27);
      pauVar26 = pauVar25;
      if (iStack_1c4 < 2) {
        pauVar26 = &local_200;
      }
      auVar37 = aesenc(auVar37,auVar27);
      puVar10 = *pauVar25 + local_188;
      if (iStack_1c4 < 1) {
        puVar10 = local_200;
      }
      auVar29 = aesenc(auVar29,auVar27);
      local_188 = (longlong)puVar10 - (longlong)pauVar26;
      auVar31 = aesenc(auVar31,auVar27);
      auVar7 = auVar1 ^ pauVar26[1];
      auVar33 = aesenc(auVar33,auVar27);
      auVar27 = param_2[10];
      auVar1._4_4_ = iStack_1dc;
      auVar1._0_4_ = local_1e0;
      auVar1._8_4_ = iStack_1d8;
      auVar1._12_4_ = iStack_1d4;
      if (10 < uVar2) {
        auVar30 = aesenc(auVar30,auVar28);
        auVar32 = aesenc(auVar32,auVar28);
        auVar34 = aesenc(auVar34,auVar28);
        auVar35 = aesenc(auVar35,auVar28);
        auVar37 = aesenc(auVar37,auVar28);
        auVar29 = aesenc(auVar29,auVar28);
        auVar31 = aesenc(auVar31,auVar28);
        auVar33 = aesenc(auVar33,auVar28);
        auVar28 = param_2[0xb];
        auVar30 = aesenc(auVar30,auVar27);
        auVar32 = aesenc(auVar32,auVar27);
        auVar34 = aesenc(auVar34,auVar27);
        auVar35 = aesenc(auVar35,auVar27);
        auVar37 = aesenc(auVar37,auVar27);
        auVar29 = aesenc(auVar29,auVar27);
        auVar31 = aesenc(auVar31,auVar27);
        auVar33 = aesenc(auVar33,auVar27);
        auVar27 = param_2[0xc];
        if (uVar2 != 0xb) {
          auVar30 = aesenc(auVar30,auVar28);
          auVar32 = aesenc(auVar32,auVar28);
          auVar34 = aesenc(auVar34,auVar28);
          auVar35 = aesenc(auVar35,auVar28);
          auVar37 = aesenc(auVar37,auVar28);
          auVar29 = aesenc(auVar29,auVar28);
          auVar31 = aesenc(auVar31,auVar28);
          auVar33 = aesenc(auVar33,auVar28);
          auVar28 = param_2[0xd];
          auVar30 = aesenc(auVar30,auVar27);
          auVar32 = aesenc(auVar32,auVar27);
          auVar34 = aesenc(auVar34,auVar27);
          auVar35 = aesenc(auVar35,auVar27);
          auVar37 = aesenc(auVar37,auVar27);
          auVar29 = aesenc(auVar29,auVar27);
          auVar31 = aesenc(auVar31,auVar27);
          auVar33 = aesenc(auVar33,auVar27);
          auVar27 = param_2[0xe];
        }
      }
      auVar30 = aesenc(auVar30,auVar28);
      auVar32 = aesenc(auVar32,auVar28);
      auVar34 = aesenc(auVar34,auVar28);
      auVar1 = vpcmpgtd_avx(auVar1,(undefined1  [16])0x0);
      auVar36 = aesenc(auVar35,auVar28);
      auVar37 = aesenc(auVar37,auVar28);
      local_1e0 = auVar1._0_4_ + local_1e0;
      iStack_1dc = auVar1._4_4_ + iStack_1dc;
      iStack_1d8 = auVar1._8_4_ + iStack_1d8;
      iStack_1d4 = auVar1._12_4_ + iStack_1d4;
      auVar35._4_4_ = iStack_1cc;
      auVar35._0_4_ = local_1d0;
      auVar35._8_4_ = iStack_1c8;
      auVar35._12_4_ = iStack_1c4;
      auVar39 = aesenc(auVar29,auVar28);
      auVar41 = aesenc(auVar31,auVar28);
      auVar43 = aesenc(auVar33,auVar28);
      auVar28 = param_2[1];
      auVar29 = aesenclast(auVar30,auVar27);
      auVar31 = aesenclast(auVar32,auVar27);
      auVar33 = aesenclast(auVar34,auVar27);
      auVar1 = vpcmpgtd_avx(auVar35,(undefined1  [16])0x0);
      auVar35 = aesenclast(auVar36,auVar27);
      auVar37 = aesenclast(auVar37,auVar27);
      local_1d0 = local_1d0 + auVar1._0_4_;
      iStack_1cc = iStack_1cc + auVar1._4_4_;
      iStack_1c8 = iStack_1c8 + auVar1._8_4_;
      iStack_1c4 = iStack_1c4 + auVar1._12_4_;
      auVar1 = *param_2;
      auVar34 = aesenclast(auVar39,auVar27);
      auVar32 = aesenclast(auVar41,auVar27);
      auVar30 = aesenclast(auVar43,auVar27);
      auVar27 = param_2[2];
      *(undefined1 (*) [16])((longlong)pauVar12 + lVar9) = auVar29;
      pauVar11 = pauVar12 + 1;
      auVar29 = auVar29 ^ auVar3;
      *(undefined1 (*) [16])((longlong)pauVar14 + local_1b8) = auVar31;
      pauVar13 = pauVar14 + 1;
      auVar31 = auVar31 ^ auVar38;
      *(undefined1 (*) [16])((longlong)pauVar16 + local_1b0) = auVar33;
      pauVar15 = pauVar16 + 1;
      auVar33 = auVar33 ^ auVar40;
      *(undefined1 (*) [16])((longlong)pauVar18 + local_1a8) = auVar35;
      pauVar17 = pauVar18 + 1;
      auVar35 = auVar35 ^ auVar42;
      *(undefined1 (*) [16])((longlong)pauVar20 + local_1a0) = auVar37;
      pauVar19 = pauVar20 + 1;
      auVar37 = auVar37 ^ auVar4;
      *(undefined1 (*) [16])((longlong)pauVar22 + local_198) = auVar34;
      pauVar21 = pauVar22 + 1;
      auVar34 = auVar34 ^ auVar5;
      *(undefined1 (*) [16])((longlong)pauVar24 + local_190) = auVar32;
      pauVar23 = pauVar24 + 1;
      auVar32 = auVar32 ^ auVar6;
      *(undefined1 (*) [16])((longlong)pauVar26 + local_188) = auVar30;
      pauVar25 = pauVar26 + 1;
      auVar30 = auVar30 ^ auVar7;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}

// aesni_multi_cbc_decrypt_avx @ 140e0d920

void aesni_multi_cbc_decrypt_avx(undefined8 *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_2c0 [16];
  int iStack_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int iStack_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  longlong lStack_278;
  longlong lStack_270;
  longlong lStack_268;
  longlong lStack_260;
  longlong lStack_258;
  longlong lStack_250;
  longlong lStack_248;
  undefined1 auStack_180 [16];
  undefined1 auStack_170 [16];
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  
  auVar24 = *param_2;
  iStack_2a0 = *(int *)(param_1 + 2);
  pauVar7 = (undefined1 (*) [16])*param_1;
  iVar3 = iStack_2a0;
  if (iStack_2a0 < 1) {
    pauVar7 = &auStack_2c0;
    iVar3 = 0;
  }
  lVar4 = param_1[1] - (longlong)pauVar7;
  iStack_29c = *(int *)(param_1 + 7);
  if (iVar3 < iStack_29c) {
    iVar3 = iStack_29c;
  }
  pauVar9 = (undefined1 (*) [16])param_1[5];
  if (iStack_29c < 1) {
    pauVar9 = &auStack_2c0;
  }
  lStack_278 = param_1[6] - (longlong)pauVar9;
  iStack_298 = *(int *)(param_1 + 0xc);
  if (iVar3 < iStack_298) {
    iVar3 = iStack_298;
  }
  pauVar11 = (undefined1 (*) [16])param_1[10];
  if (iStack_298 < 1) {
    pauVar11 = &auStack_2c0;
  }
  lStack_270 = param_1[0xb] - (longlong)pauVar11;
  iStack_294 = *(int *)(param_1 + 0x11);
  if (iVar3 < iStack_294) {
    iVar3 = iStack_294;
  }
  pauVar13 = (undefined1 (*) [16])param_1[0xf];
  if (iStack_294 < 1) {
    pauVar13 = &auStack_2c0;
  }
  lStack_268 = param_1[0x10] - (longlong)pauVar13;
  iStack_290 = *(int *)(param_1 + 0x16);
  if (iVar3 < iStack_290) {
    iVar3 = iStack_290;
  }
  pauVar15 = (undefined1 (*) [16])param_1[0x14];
  if (iStack_290 < 1) {
    pauVar15 = &auStack_2c0;
  }
  lStack_260 = param_1[0x15] - (longlong)pauVar15;
  iStack_28c = *(int *)(param_1 + 0x1b);
  if (iVar3 < iStack_28c) {
    iVar3 = iStack_28c;
  }
  pauVar17 = (undefined1 (*) [16])param_1[0x19];
  if (iStack_28c < 1) {
    pauVar17 = &auStack_2c0;
  }
  lStack_258 = param_1[0x1a] - (longlong)pauVar17;
  iStack_288 = *(int *)(param_1 + 0x20);
  if (iVar3 < iStack_288) {
    iVar3 = iStack_288;
  }
  pauVar19 = (undefined1 (*) [16])param_1[0x1e];
  if (iStack_288 < 1) {
    pauVar19 = &auStack_2c0;
  }
  lStack_250 = param_1[0x1f] - (longlong)pauVar19;
  iStack_284 = *(int *)(param_1 + 0x25);
  if (iVar3 < iStack_284) {
    iVar3 = iStack_284;
  }
  pauVar21 = (undefined1 (*) [16])param_1[0x23];
  if (iStack_284 < 1) {
    pauVar21 = &auStack_2c0;
  }
  lStack_248 = param_1[0x24] - (longlong)pauVar21;
  if (iVar3 != 0) {
    auVar26 = param_2[1];
    auVar23 = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    pauVar6 = &auStack_180;
    auStack_180 = *pauVar7;
    auVar2 = *pauVar7 ^ auVar24;
    auStack_170 = *pauVar9;
    auVar28 = *pauVar9 ^ auVar24;
    auStack_160 = *pauVar11;
    auVar31 = *pauVar11 ^ auVar24;
    auStack_150 = *pauVar13;
    auVar33 = *pauVar13 ^ auVar24;
    auStack_140 = *pauVar15;
    auVar34 = *pauVar15 ^ auVar24;
    auStack_130 = *pauVar17;
    auVar29 = *pauVar17 ^ auVar24;
    auStack_120 = *pauVar19;
    auVar32 = *pauVar19 ^ auVar24;
    auStack_110 = *pauVar21;
    auVar24 = *pauVar21 ^ auVar24;
    do {
      pauVar6 = (undefined1 (*) [16])((ulonglong)pauVar6 ^ 0x80);
      auVar25 = aesdec(auVar2,auVar26);
      auVar28 = aesdec(auVar28,auVar26);
      auVar31 = aesdec(auVar31,auVar26);
      auVar33 = aesdec(auVar33,auVar26);
      pauVar8 = pauVar7;
      if (iStack_2a0 < 2) {
        pauVar8 = &auStack_2c0;
      }
      auVar34 = aesdec(auVar34,auVar26);
      puVar5 = *pauVar7 + lVar4;
      if (iStack_2a0 < 1) {
        puVar5 = auStack_2c0;
      }
      auVar37 = aesdec(auVar29,auVar26);
      lVar4 = (longlong)puVar5 - (longlong)pauVar8;
      auVar40 = aesdec(auVar32,auVar26);
      auVar2 = pauVar8[1];
      auVar43 = aesdec(auVar24,auVar26);
      auVar24 = param_2[3];
      auVar26 = aesdec(auVar25,auVar23);
      auVar29 = aesdec(auVar28,auVar23);
      auVar32 = aesdec(auVar31,auVar23);
      auVar33 = aesdec(auVar33,auVar23);
      pauVar10 = pauVar9;
      if (iStack_29c < 2) {
        pauVar10 = &auStack_2c0;
      }
      auVar34 = aesdec(auVar34,auVar23);
      puVar5 = *pauVar9 + lStack_278;
      if (iStack_29c < 1) {
        puVar5 = auStack_2c0;
      }
      auVar31 = aesdec(auVar37,auVar23);
      lStack_278 = (longlong)puVar5 - (longlong)pauVar10;
      auVar25 = aesdec(auVar40,auVar23);
      auVar28 = pauVar10[1];
      auVar37 = aesdec(auVar43,auVar23);
      auVar23 = param_2[4];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar32 = aesdec(auVar32,auVar24);
      auVar33 = aesdec(auVar33,auVar24);
      pauVar12 = pauVar11;
      if (iStack_298 < 2) {
        pauVar12 = &auStack_2c0;
      }
      auVar34 = aesdec(auVar34,auVar24);
      puVar5 = *pauVar11 + lStack_270;
      if (iStack_298 < 1) {
        puVar5 = auStack_2c0;
      }
      auVar40 = aesdec(auVar31,auVar24);
      lStack_270 = (longlong)puVar5 - (longlong)pauVar12;
      auVar43 = aesdec(auVar25,auVar24);
      auVar31 = pauVar12[1];
      auVar37 = aesdec(auVar37,auVar24);
      auVar24 = param_2[5];
      auVar26 = aesdec(auVar26,auVar23);
      auVar29 = aesdec(auVar29,auVar23);
      auVar32 = aesdec(auVar32,auVar23);
      auVar25 = aesdec(auVar33,auVar23);
      pauVar14 = pauVar13;
      if (iStack_294 < 2) {
        pauVar14 = &auStack_2c0;
      }
      auVar34 = aesdec(auVar34,auVar23);
      puVar5 = *pauVar13 + lStack_268;
      if (iStack_294 < 1) {
        puVar5 = auStack_2c0;
      }
      auVar40 = aesdec(auVar40,auVar23);
      lStack_268 = (longlong)puVar5 - (longlong)pauVar14;
      auVar43 = aesdec(auVar43,auVar23);
      auVar33 = pauVar14[1];
      auVar37 = aesdec(auVar37,auVar23);
      auVar23 = param_2[6];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar32 = aesdec(auVar32,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar16 = pauVar15;
      if (iStack_290 < 2) {
        pauVar16 = &auStack_2c0;
      }
      auVar35 = aesdec(auVar34,auVar24);
      puVar5 = *pauVar15 + lStack_260;
      if (iStack_290 < 1) {
        puVar5 = auStack_2c0;
      }
      auVar40 = aesdec(auVar40,auVar24);
      lStack_260 = (longlong)puVar5 - (longlong)pauVar16;
      auVar43 = aesdec(auVar43,auVar24);
      auVar34 = pauVar16[1];
      auVar44 = aesdec(auVar37,auVar24);
      auVar24 = param_2[7];
      auVar26 = aesdec(auVar26,auVar23);
      auVar37 = aesdec(auVar29,auVar23);
      auVar32 = aesdec(auVar32,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar18 = pauVar17;
      if (iStack_28c < 2) {
        pauVar18 = &auStack_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar17 + lStack_258;
      if (iStack_28c < 1) {
        puVar5 = auStack_2c0;
      }
      auVar38 = aesdec(auVar40,auVar23);
      lStack_258 = (longlong)puVar5 - (longlong)pauVar18;
      auVar43 = aesdec(auVar43,auVar23);
      auVar29 = pauVar18[1];
      auVar44 = aesdec(auVar44,auVar23);
      auVar23 = param_2[8];
      auVar26 = aesdec(auVar26,auVar24);
      auVar37 = aesdec(auVar37,auVar24);
      auVar40 = aesdec(auVar32,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar20 = pauVar19;
      if (iStack_288 < 2) {
        pauVar20 = &auStack_2c0;
      }
      auVar35 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar19 + lStack_250;
      if (iStack_288 < 1) {
        puVar5 = auStack_2c0;
      }
      auVar38 = aesdec(auVar38,auVar24);
      lStack_250 = (longlong)puVar5 - (longlong)pauVar20;
      auVar43 = aesdec(auVar43,auVar24);
      auVar32 = pauVar20[1];
      auVar44 = aesdec(auVar44,auVar24);
      auVar24 = param_2[9];
      auVar26 = aesdec(auVar26,auVar23);
      auVar37 = aesdec(auVar37,auVar23);
      auVar40 = aesdec(auVar40,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar22 = pauVar21;
      if (iStack_284 < 2) {
        pauVar22 = &auStack_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar21 + lStack_248;
      if (iStack_284 < 1) {
        puVar5 = auStack_2c0;
      }
      auVar38 = aesdec(auVar38,auVar23);
      lStack_248 = (longlong)puVar5 - (longlong)pauVar22;
      auVar41 = aesdec(auVar43,auVar23);
      auVar43 = pauVar22[1];
      auVar45 = aesdec(auVar44,auVar23);
      auVar23 = param_2[10];
      auVar44._4_4_ = iStack_29c;
      auVar44._0_4_ = iStack_2a0;
      auVar44._8_4_ = iStack_298;
      auVar44._12_4_ = iStack_294;
      if (10 < uVar1) {
        auVar26 = aesdec(auVar26,auVar24);
        auVar37 = aesdec(auVar37,auVar24);
        auVar40 = aesdec(auVar40,auVar24);
        auVar25 = aesdec(auVar25,auVar24);
        auVar35 = aesdec(auVar35,auVar24);
        auVar38 = aesdec(auVar38,auVar24);
        auVar41 = aesdec(auVar41,auVar24);
        auVar45 = aesdec(auVar45,auVar24);
        auVar24 = param_2[0xb];
        auVar26 = aesdec(auVar26,auVar23);
        auVar37 = aesdec(auVar37,auVar23);
        auVar40 = aesdec(auVar40,auVar23);
        auVar25 = aesdec(auVar25,auVar23);
        auVar35 = aesdec(auVar35,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar41,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar26 = aesdec(auVar26,auVar24);
          auVar37 = aesdec(auVar37,auVar24);
          auVar40 = aesdec(auVar40,auVar24);
          auVar25 = aesdec(auVar25,auVar24);
          auVar35 = aesdec(auVar35,auVar24);
          auVar38 = aesdec(auVar38,auVar24);
          auVar41 = aesdec(auVar41,auVar24);
          auVar45 = aesdec(auVar45,auVar24);
          auVar24 = param_2[0xd];
          auVar26 = aesdec(auVar26,auVar23);
          auVar37 = aesdec(auVar37,auVar23);
          auVar40 = aesdec(auVar40,auVar23);
          auVar25 = aesdec(auVar25,auVar23);
          auVar35 = aesdec(auVar35,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar41 = aesdec(auVar41,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = param_2[0xe];
        }
      }
      auVar27 = aesdec(auVar26,auVar24);
      auVar30 = aesdec(auVar37,auVar24);
      auVar40 = aesdec(auVar40,auVar24);
      auVar26 = vpcmpgtd_avx(auVar44,(undefined1  [16])0x0);
      auVar44 = aesdec(auVar25,auVar24);
      auVar35 = aesdec(auVar35,auVar24);
      iStack_2a0 = auVar26._0_4_ + iStack_2a0;
      iStack_29c = auVar26._4_4_ + iStack_29c;
      iStack_298 = auVar26._8_4_ + iStack_298;
      iStack_294 = auVar26._12_4_ + iStack_294;
      auVar37._4_4_ = iStack_28c;
      auVar37._0_4_ = iStack_290;
      auVar37._8_4_ = iStack_288;
      auVar37._12_4_ = iStack_284;
      auVar38 = aesdec(auVar38,auVar24);
      auVar42 = aesdec(auVar41,auVar24);
      auVar46 = aesdec(auVar45,auVar24);
      auVar26 = param_2[1];
      auVar41 = aesdeclast(auVar27,auVar23);
      auVar45 = aesdeclast(auVar30,auVar23);
      auVar27 = aesdeclast(auVar40,auVar23);
      auVar25 = pauVar6[1];
      auVar24 = vpcmpgtd_avx(auVar37,(undefined1  [16])0x0);
      auVar30 = aesdeclast(auVar44,auVar23);
      auVar37 = pauVar6[2];
      auVar36 = aesdeclast(auVar35,auVar23);
      auVar40 = pauVar6[3];
      iStack_290 = iStack_290 + auVar24._0_4_;
      iStack_28c = iStack_28c + auVar24._4_4_;
      iStack_288 = iStack_288 + auVar24._8_4_;
      iStack_284 = iStack_284 + auVar24._12_4_;
      auVar24 = *param_2;
      auVar39 = aesdeclast(auVar38,auVar23);
      auVar35 = pauVar6[4];
      auVar42 = aesdeclast(auVar42,auVar23);
      auVar44 = pauVar6[5];
      auVar46 = aesdeclast(auVar46,auVar23);
      auVar38 = pauVar6[6];
      auVar23 = param_2[2];
      *(undefined1 (*) [16])((longlong)pauVar8 + lVar4) = auVar41 ^ *pauVar6;
      pauVar7 = pauVar8 + 1;
      auVar41 = pauVar6[7];
      *(undefined1 (*) [16])((longlong)pauVar10 + lStack_278) = auVar45 ^ auVar25;
      pauVar9 = pauVar10 + 1;
      *pauVar6 = auVar2;
      auVar2 = auVar2 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar12 + lStack_270) = auVar27 ^ auVar37;
      pauVar11 = pauVar12 + 1;
      pauVar6[1] = auVar28;
      auVar28 = auVar28 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar14 + lStack_268) = auVar30 ^ auVar40;
      pauVar13 = pauVar14 + 1;
      pauVar6[2] = auVar31;
      auVar31 = auVar31 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar16 + lStack_260) = auVar36 ^ auVar35;
      pauVar15 = pauVar16 + 1;
      pauVar6[3] = auVar33;
      auVar33 = auVar33 ^ auVar24;
      pauVar6[4] = auVar34;
      auVar34 = auVar24 ^ auVar34;
      *(undefined1 (*) [16])((longlong)pauVar18 + lStack_258) = auVar39 ^ auVar44;
      pauVar17 = pauVar18 + 1;
      pauVar6[5] = auVar29;
      auVar29 = auVar24 ^ auVar29;
      *(undefined1 (*) [16])((longlong)pauVar20 + lStack_250) = auVar42 ^ auVar38;
      pauVar19 = pauVar20 + 1;
      pauVar6[6] = auVar32;
      auVar32 = auVar24 ^ auVar32;
      *(undefined1 (*) [16])((longlong)pauVar22 + lStack_248) = auVar46 ^ auVar41;
      pauVar21 = pauVar22 + 1;
      pauVar6[7] = auVar43;
      auVar24 = auVar24 ^ auVar43;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

// L$SEH_begin_aesni_multi_cbc_decrypt_avx @ 140e0d92d

void L_SEH_begin_aesni_multi_cbc_decrypt_avx(undefined8 *param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 (*pauVar18) [16];
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  undefined1 (*pauVar22) [16];
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
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 local_2c0 [16];
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  int local_290;
  int iStack_28c;
  int iStack_288;
  int iStack_284;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260;
  longlong local_258;
  longlong local_250;
  longlong local_248;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  undefined1 local_150 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  
  auVar24 = *param_2;
  local_2a0 = *(int *)(param_1 + 2);
  pauVar7 = (undefined1 (*) [16])*param_1;
  iVar3 = local_2a0;
  if (local_2a0 < 1) {
    pauVar7 = &local_2c0;
    iVar3 = 0;
  }
  lVar4 = param_1[1] - (longlong)pauVar7;
  iStack_29c = *(int *)(param_1 + 7);
  if (iVar3 < iStack_29c) {
    iVar3 = iStack_29c;
  }
  pauVar9 = (undefined1 (*) [16])param_1[5];
  if (iStack_29c < 1) {
    pauVar9 = &local_2c0;
  }
  local_278 = param_1[6] - (longlong)pauVar9;
  iStack_298 = *(int *)(param_1 + 0xc);
  if (iVar3 < iStack_298) {
    iVar3 = iStack_298;
  }
  pauVar11 = (undefined1 (*) [16])param_1[10];
  if (iStack_298 < 1) {
    pauVar11 = &local_2c0;
  }
  local_270 = param_1[0xb] - (longlong)pauVar11;
  iStack_294 = *(int *)(param_1 + 0x11);
  if (iVar3 < iStack_294) {
    iVar3 = iStack_294;
  }
  pauVar13 = (undefined1 (*) [16])param_1[0xf];
  if (iStack_294 < 1) {
    pauVar13 = &local_2c0;
  }
  local_268 = param_1[0x10] - (longlong)pauVar13;
  local_290 = *(int *)(param_1 + 0x16);
  if (iVar3 < local_290) {
    iVar3 = local_290;
  }
  pauVar15 = (undefined1 (*) [16])param_1[0x14];
  if (local_290 < 1) {
    pauVar15 = &local_2c0;
  }
  local_260 = param_1[0x15] - (longlong)pauVar15;
  iStack_28c = *(int *)(param_1 + 0x1b);
  if (iVar3 < iStack_28c) {
    iVar3 = iStack_28c;
  }
  pauVar17 = (undefined1 (*) [16])param_1[0x19];
  if (iStack_28c < 1) {
    pauVar17 = &local_2c0;
  }
  local_258 = param_1[0x1a] - (longlong)pauVar17;
  iStack_288 = *(int *)(param_1 + 0x20);
  if (iVar3 < iStack_288) {
    iVar3 = iStack_288;
  }
  pauVar19 = (undefined1 (*) [16])param_1[0x1e];
  if (iStack_288 < 1) {
    pauVar19 = &local_2c0;
  }
  local_250 = param_1[0x1f] - (longlong)pauVar19;
  iStack_284 = *(int *)(param_1 + 0x25);
  if (iVar3 < iStack_284) {
    iVar3 = iStack_284;
  }
  pauVar21 = (undefined1 (*) [16])param_1[0x23];
  if (iStack_284 < 1) {
    pauVar21 = &local_2c0;
  }
  local_248 = param_1[0x24] - (longlong)pauVar21;
  if (iVar3 != 0) {
    auVar26 = param_2[1];
    auVar23 = param_2[2];
    uVar1 = *(uint *)param_2[0xf];
    pauVar6 = &local_180;
    local_180 = *pauVar7;
    auVar2 = *pauVar7 ^ auVar24;
    local_170 = *pauVar9;
    auVar28 = *pauVar9 ^ auVar24;
    local_160 = *pauVar11;
    auVar31 = *pauVar11 ^ auVar24;
    local_150 = *pauVar13;
    auVar33 = *pauVar13 ^ auVar24;
    local_140 = *pauVar15;
    auVar34 = *pauVar15 ^ auVar24;
    local_130 = *pauVar17;
    auVar29 = *pauVar17 ^ auVar24;
    local_120 = *pauVar19;
    auVar32 = *pauVar19 ^ auVar24;
    local_110 = *pauVar21;
    auVar24 = *pauVar21 ^ auVar24;
    do {
      pauVar6 = (undefined1 (*) [16])((ulonglong)pauVar6 ^ 0x80);
      auVar25 = aesdec(auVar2,auVar26);
      auVar28 = aesdec(auVar28,auVar26);
      auVar31 = aesdec(auVar31,auVar26);
      auVar33 = aesdec(auVar33,auVar26);
      pauVar8 = pauVar7;
      if (local_2a0 < 2) {
        pauVar8 = &local_2c0;
      }
      auVar34 = aesdec(auVar34,auVar26);
      puVar5 = *pauVar7 + lVar4;
      if (local_2a0 < 1) {
        puVar5 = local_2c0;
      }
      auVar37 = aesdec(auVar29,auVar26);
      lVar4 = (longlong)puVar5 - (longlong)pauVar8;
      auVar40 = aesdec(auVar32,auVar26);
      auVar2 = pauVar8[1];
      auVar43 = aesdec(auVar24,auVar26);
      auVar24 = param_2[3];
      auVar26 = aesdec(auVar25,auVar23);
      auVar29 = aesdec(auVar28,auVar23);
      auVar32 = aesdec(auVar31,auVar23);
      auVar33 = aesdec(auVar33,auVar23);
      pauVar10 = pauVar9;
      if (iStack_29c < 2) {
        pauVar10 = &local_2c0;
      }
      auVar34 = aesdec(auVar34,auVar23);
      puVar5 = *pauVar9 + local_278;
      if (iStack_29c < 1) {
        puVar5 = local_2c0;
      }
      auVar31 = aesdec(auVar37,auVar23);
      local_278 = (longlong)puVar5 - (longlong)pauVar10;
      auVar25 = aesdec(auVar40,auVar23);
      auVar28 = pauVar10[1];
      auVar37 = aesdec(auVar43,auVar23);
      auVar23 = param_2[4];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar32 = aesdec(auVar32,auVar24);
      auVar33 = aesdec(auVar33,auVar24);
      pauVar12 = pauVar11;
      if (iStack_298 < 2) {
        pauVar12 = &local_2c0;
      }
      auVar34 = aesdec(auVar34,auVar24);
      puVar5 = *pauVar11 + local_270;
      if (iStack_298 < 1) {
        puVar5 = local_2c0;
      }
      auVar40 = aesdec(auVar31,auVar24);
      local_270 = (longlong)puVar5 - (longlong)pauVar12;
      auVar43 = aesdec(auVar25,auVar24);
      auVar31 = pauVar12[1];
      auVar37 = aesdec(auVar37,auVar24);
      auVar24 = param_2[5];
      auVar26 = aesdec(auVar26,auVar23);
      auVar29 = aesdec(auVar29,auVar23);
      auVar32 = aesdec(auVar32,auVar23);
      auVar25 = aesdec(auVar33,auVar23);
      pauVar14 = pauVar13;
      if (iStack_294 < 2) {
        pauVar14 = &local_2c0;
      }
      auVar34 = aesdec(auVar34,auVar23);
      puVar5 = *pauVar13 + local_268;
      if (iStack_294 < 1) {
        puVar5 = local_2c0;
      }
      auVar40 = aesdec(auVar40,auVar23);
      local_268 = (longlong)puVar5 - (longlong)pauVar14;
      auVar43 = aesdec(auVar43,auVar23);
      auVar33 = pauVar14[1];
      auVar37 = aesdec(auVar37,auVar23);
      auVar23 = param_2[6];
      auVar26 = aesdec(auVar26,auVar24);
      auVar29 = aesdec(auVar29,auVar24);
      auVar32 = aesdec(auVar32,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar16 = pauVar15;
      if (local_290 < 2) {
        pauVar16 = &local_2c0;
      }
      auVar35 = aesdec(auVar34,auVar24);
      puVar5 = *pauVar15 + local_260;
      if (local_290 < 1) {
        puVar5 = local_2c0;
      }
      auVar40 = aesdec(auVar40,auVar24);
      local_260 = (longlong)puVar5 - (longlong)pauVar16;
      auVar43 = aesdec(auVar43,auVar24);
      auVar34 = pauVar16[1];
      auVar44 = aesdec(auVar37,auVar24);
      auVar24 = param_2[7];
      auVar26 = aesdec(auVar26,auVar23);
      auVar37 = aesdec(auVar29,auVar23);
      auVar32 = aesdec(auVar32,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar18 = pauVar17;
      if (iStack_28c < 2) {
        pauVar18 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar17 + local_258;
      if (iStack_28c < 1) {
        puVar5 = local_2c0;
      }
      auVar38 = aesdec(auVar40,auVar23);
      local_258 = (longlong)puVar5 - (longlong)pauVar18;
      auVar43 = aesdec(auVar43,auVar23);
      auVar29 = pauVar18[1];
      auVar44 = aesdec(auVar44,auVar23);
      auVar23 = param_2[8];
      auVar26 = aesdec(auVar26,auVar24);
      auVar37 = aesdec(auVar37,auVar24);
      auVar40 = aesdec(auVar32,auVar24);
      auVar25 = aesdec(auVar25,auVar24);
      pauVar20 = pauVar19;
      if (iStack_288 < 2) {
        pauVar20 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar24);
      puVar5 = *pauVar19 + local_250;
      if (iStack_288 < 1) {
        puVar5 = local_2c0;
      }
      auVar38 = aesdec(auVar38,auVar24);
      local_250 = (longlong)puVar5 - (longlong)pauVar20;
      auVar43 = aesdec(auVar43,auVar24);
      auVar32 = pauVar20[1];
      auVar44 = aesdec(auVar44,auVar24);
      auVar24 = param_2[9];
      auVar26 = aesdec(auVar26,auVar23);
      auVar37 = aesdec(auVar37,auVar23);
      auVar40 = aesdec(auVar40,auVar23);
      auVar25 = aesdec(auVar25,auVar23);
      pauVar22 = pauVar21;
      if (iStack_284 < 2) {
        pauVar22 = &local_2c0;
      }
      auVar35 = aesdec(auVar35,auVar23);
      puVar5 = *pauVar21 + local_248;
      if (iStack_284 < 1) {
        puVar5 = local_2c0;
      }
      auVar38 = aesdec(auVar38,auVar23);
      local_248 = (longlong)puVar5 - (longlong)pauVar22;
      auVar41 = aesdec(auVar43,auVar23);
      auVar43 = pauVar22[1];
      auVar45 = aesdec(auVar44,auVar23);
      auVar23 = param_2[10];
      auVar44._4_4_ = iStack_29c;
      auVar44._0_4_ = local_2a0;
      auVar44._8_4_ = iStack_298;
      auVar44._12_4_ = iStack_294;
      if (10 < uVar1) {
        auVar26 = aesdec(auVar26,auVar24);
        auVar37 = aesdec(auVar37,auVar24);
        auVar40 = aesdec(auVar40,auVar24);
        auVar25 = aesdec(auVar25,auVar24);
        auVar35 = aesdec(auVar35,auVar24);
        auVar38 = aesdec(auVar38,auVar24);
        auVar41 = aesdec(auVar41,auVar24);
        auVar45 = aesdec(auVar45,auVar24);
        auVar24 = param_2[0xb];
        auVar26 = aesdec(auVar26,auVar23);
        auVar37 = aesdec(auVar37,auVar23);
        auVar40 = aesdec(auVar40,auVar23);
        auVar25 = aesdec(auVar25,auVar23);
        auVar35 = aesdec(auVar35,auVar23);
        auVar38 = aesdec(auVar38,auVar23);
        auVar41 = aesdec(auVar41,auVar23);
        auVar45 = aesdec(auVar45,auVar23);
        auVar23 = param_2[0xc];
        if (uVar1 != 0xb) {
          auVar26 = aesdec(auVar26,auVar24);
          auVar37 = aesdec(auVar37,auVar24);
          auVar40 = aesdec(auVar40,auVar24);
          auVar25 = aesdec(auVar25,auVar24);
          auVar35 = aesdec(auVar35,auVar24);
          auVar38 = aesdec(auVar38,auVar24);
          auVar41 = aesdec(auVar41,auVar24);
          auVar45 = aesdec(auVar45,auVar24);
          auVar24 = param_2[0xd];
          auVar26 = aesdec(auVar26,auVar23);
          auVar37 = aesdec(auVar37,auVar23);
          auVar40 = aesdec(auVar40,auVar23);
          auVar25 = aesdec(auVar25,auVar23);
          auVar35 = aesdec(auVar35,auVar23);
          auVar38 = aesdec(auVar38,auVar23);
          auVar41 = aesdec(auVar41,auVar23);
          auVar45 = aesdec(auVar45,auVar23);
          auVar23 = param_2[0xe];
        }
      }
      auVar27 = aesdec(auVar26,auVar24);
      auVar30 = aesdec(auVar37,auVar24);
      auVar40 = aesdec(auVar40,auVar24);
      auVar26 = vpcmpgtd_avx(auVar44,(undefined1  [16])0x0);
      auVar44 = aesdec(auVar25,auVar24);
      auVar35 = aesdec(auVar35,auVar24);
      local_2a0 = auVar26._0_4_ + local_2a0;
      iStack_29c = auVar26._4_4_ + iStack_29c;
      iStack_298 = auVar26._8_4_ + iStack_298;
      iStack_294 = auVar26._12_4_ + iStack_294;
      auVar37._4_4_ = iStack_28c;
      auVar37._0_4_ = local_290;
      auVar37._8_4_ = iStack_288;
      auVar37._12_4_ = iStack_284;
      auVar38 = aesdec(auVar38,auVar24);
      auVar42 = aesdec(auVar41,auVar24);
      auVar46 = aesdec(auVar45,auVar24);
      auVar26 = param_2[1];
      auVar41 = aesdeclast(auVar27,auVar23);
      auVar45 = aesdeclast(auVar30,auVar23);
      auVar27 = aesdeclast(auVar40,auVar23);
      auVar25 = pauVar6[1];
      auVar24 = vpcmpgtd_avx(auVar37,(undefined1  [16])0x0);
      auVar30 = aesdeclast(auVar44,auVar23);
      auVar37 = pauVar6[2];
      auVar36 = aesdeclast(auVar35,auVar23);
      auVar40 = pauVar6[3];
      local_290 = local_290 + auVar24._0_4_;
      iStack_28c = iStack_28c + auVar24._4_4_;
      iStack_288 = iStack_288 + auVar24._8_4_;
      iStack_284 = iStack_284 + auVar24._12_4_;
      auVar24 = *param_2;
      auVar39 = aesdeclast(auVar38,auVar23);
      auVar35 = pauVar6[4];
      auVar42 = aesdeclast(auVar42,auVar23);
      auVar44 = pauVar6[5];
      auVar46 = aesdeclast(auVar46,auVar23);
      auVar38 = pauVar6[6];
      auVar23 = param_2[2];
      *(undefined1 (*) [16])((longlong)pauVar8 + lVar4) = auVar41 ^ *pauVar6;
      pauVar7 = pauVar8 + 1;
      auVar41 = pauVar6[7];
      *(undefined1 (*) [16])((longlong)pauVar10 + local_278) = auVar45 ^ auVar25;
      pauVar9 = pauVar10 + 1;
      *pauVar6 = auVar2;
      auVar2 = auVar2 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar12 + local_270) = auVar27 ^ auVar37;
      pauVar11 = pauVar12 + 1;
      pauVar6[1] = auVar28;
      auVar28 = auVar28 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar14 + local_268) = auVar30 ^ auVar40;
      pauVar13 = pauVar14 + 1;
      pauVar6[2] = auVar31;
      auVar31 = auVar31 ^ auVar24;
      *(undefined1 (*) [16])((longlong)pauVar16 + local_260) = auVar36 ^ auVar35;
      pauVar15 = pauVar16 + 1;
      pauVar6[3] = auVar33;
      auVar33 = auVar33 ^ auVar24;
      pauVar6[4] = auVar34;
      auVar34 = auVar24 ^ auVar34;
      *(undefined1 (*) [16])((longlong)pauVar18 + local_258) = auVar39 ^ auVar44;
      pauVar17 = pauVar18 + 1;
      pauVar6[5] = auVar29;
      auVar29 = auVar24 ^ auVar29;
      *(undefined1 (*) [16])((longlong)pauVar20 + local_250) = auVar42 ^ auVar38;
      pauVar19 = pauVar20 + 1;
      pauVar6[6] = auVar32;
      auVar32 = auVar24 ^ auVar32;
      *(undefined1 (*) [16])((longlong)pauVar22 + local_248) = auVar46 ^ auVar41;
      pauVar21 = pauVar22 + 1;
      pauVar6[7] = auVar43;
      auVar24 = auVar24 ^ auVar43;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

