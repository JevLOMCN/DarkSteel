// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 10

// InterpolatePositions___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunf_avx2 @ 140caaea0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolatePositions___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunf_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar29 [32];
  undefined1 auVar10 [32];
  undefined1 auVar14 [32];
  undefined1 auVar19 [32];
  undefined1 auVar24 [32];
  undefined1 auVar28 [32];
  
  auVar26 = ___ymm_0000000700000004000000010000000000000003000000000000000100000000;
  auVar20 = ___ymm_0000000700000005000000070000000500000003000000010000000700000004;
  auVar10 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
  auVar13 = ___ymm_0000000600000003000000000000000000000005000000020000000000000000;
  auVar25 = ___ymm_0000000000000007000000040000000100000000000000060000000300000000;
  uVar5 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar5 = param_4;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar7 = 0x40;
    uVar4 = 0;
    do {
      auVar9 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar17 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar29 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar17);
      auVar12 = vpermps_avx2(auVar25,auVar9);
      auVar29 = vblendps_avx(auVar12,auVar29,0x88);
      auVar12 = vpermps_avx2(auVar20,auVar17);
      auVar16 = vpermps_avx2(auVar13,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar12 = vblendps_avx(auVar16,auVar12,0x13);
      auVar14 = vperm2f128_avx(auVar29,auVar12,0x31);
      auVar9 = vblendps_avx(auVar17,auVar9,0x24);
      auVar9 = vpermps_avx2(auVar10,auVar9);
      auVar17 = vpermps_avx2(auVar26,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar16 = vblendps_avx(auVar9,auVar17,0xe0);
      auVar9 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7);
      auVar17 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7);
      auVar19 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar17);
      auVar23 = vpermps_avx2(auVar25,auVar9);
      auVar19 = vblendps_avx(auVar23,auVar19,0x88);
      auVar23 = vpermps_avx2(auVar20,auVar17);
      auVar24 = vpermps_avx2(auVar13,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar23 = vblendps_avx(auVar24,auVar23,0x13);
      auVar24 = vperm2f128_avx(auVar19,auVar23,0x31);
      auVar9 = vblendps_avx(auVar17,auVar9,0x24);
      auVar9 = vpermps_avx2(auVar10,auVar9);
      auVar17 = vpermps_avx2(auVar26,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar9 = vblendps_avx(auVar9,auVar17,0xe0);
      auVar27._0_4_ = param_5 * auVar29._0_4_ + auVar19._0_4_ * param_6;
      auVar27._4_4_ = param_5 * auVar29._4_4_ + auVar19._4_4_ * param_6;
      auVar27._8_4_ = param_5 * auVar29._8_4_ + auVar19._8_4_ * param_6;
      auVar27._12_4_ = param_5 * auVar29._12_4_ + auVar19._12_4_ * param_6;
      auVar28._16_4_ = param_5 * auVar12._0_4_ + auVar23._0_4_ * param_6;
      auVar28._0_16_ = auVar27;
      auVar28._20_4_ = param_5 * auVar12._4_4_ + auVar23._4_4_ * param_6;
      auVar28._24_4_ = param_5 * auVar12._8_4_ + auVar23._8_4_ * param_6;
      auVar28._28_4_ = param_5 * auVar12._12_4_ + auVar23._12_4_ * param_6;
      auVar18._0_4_ = param_5 * auVar14._0_4_ + param_6 * auVar24._0_4_;
      auVar18._4_4_ = param_5 * auVar14._4_4_ + param_6 * auVar24._4_4_;
      auVar18._8_4_ = param_5 * auVar14._8_4_ + param_6 * auVar24._8_4_;
      auVar18._12_4_ = param_5 * auVar14._12_4_ + param_6 * auVar24._12_4_;
      auVar19._16_4_ = param_5 * auVar14._16_4_ + param_6 * auVar24._16_4_;
      auVar19._0_16_ = auVar18;
      auVar19._20_4_ = param_5 * auVar14._20_4_ + param_6 * auVar24._20_4_;
      auVar19._24_4_ = param_5 * auVar14._24_4_ + param_6 * auVar24._24_4_;
      auVar19._28_4_ = param_5 * auVar14._28_4_ + param_6 * auVar24._28_4_;
      auVar12._0_4_ = param_5 * auVar16._0_4_ + param_6 * auVar9._0_4_;
      auVar12._4_4_ = param_5 * auVar16._4_4_ + param_6 * auVar9._4_4_;
      auVar12._8_4_ = param_5 * auVar16._8_4_ + param_6 * auVar9._8_4_;
      auVar12._12_4_ = param_5 * auVar16._12_4_ + param_6 * auVar9._12_4_;
      auVar12._16_4_ = param_5 * auVar16._16_4_ + param_6 * auVar9._16_4_;
      auVar12._20_4_ = param_5 * auVar16._20_4_ + param_6 * auVar9._20_4_;
      auVar12._24_4_ = param_5 * auVar16._24_4_ + param_6 * auVar9._24_4_;
      auVar12._28_4_ = param_5 * auVar16._28_4_ + param_6 * auVar9._28_4_;
      auVar9._16_16_ = auVar18;
      auVar9._0_16_ = auVar27;
      auVar9 = vshufpd_avx(auVar28,auVar9,2);
      auVar17 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar9);
      auVar9 = vpermpd_avx2(auVar19,0xe9);
      auVar29 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar12);
      auVar9 = vblendps_avx(auVar29,auVar9,7);
      auVar29._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar29._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar29 = vpermps_avx2(auVar29,auVar9);
      auVar17 = vblendps_avx(auVar17,auVar29,0xa4);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7) = auVar17;
      auVar17 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar9);
      auVar9 = vshufpd_avx(auVar28,auVar28,1);
      auVar9 = vblendps_avx(auVar17,auVar9,0x92);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7) = auVar9;
      auVar17._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar17._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar17 = vpermps_avx2(auVar17,auVar19);
      auVar9 = vpermpd_avx2(auVar28,0xff);
      auVar9 = vblendps_avx(auVar17,auVar9,3);
      auVar9 = vblendps_avx(auVar9,auVar12,0xe0);
      auVar9 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                            auVar9);
      *(undefined1 (*) [32])(param_3 + lVar7) = auVar9;
      lVar7 = lVar7 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar5 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar25._4_4_ = uVar4;
  auVar25._0_4_ = uVar4;
  auVar25._8_4_ = uVar4;
  auVar25._12_4_ = uVar4;
  auVar25._16_4_ = uVar4;
  auVar25._20_4_ = uVar4;
  auVar25._24_4_ = uVar4;
  auVar25._28_4_ = uVar4;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar13._4_4_ = param_4;
  auVar13._0_4_ = param_4;
  auVar13._8_4_ = param_4;
  auVar13._12_4_ = param_4;
  auVar13._16_4_ = param_4;
  auVar13._20_4_ = param_4;
  auVar13._24_4_ = param_4;
  auVar13._28_4_ = param_4;
  auVar25 = vpcmpgtd_avx2(auVar13,auVar25);
  uVar6 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar6 * 0xc);
  uVar5 = vmovmskps_avx(auVar25);
  if (uVar5 == 0xff) {
    auVar25 = pauVar1[1];
    auVar13 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar25);
    auVar10 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar1);
    auVar13 = vblendps_avx(auVar10,auVar13,0x88);
    auVar10 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar25);
    auVar20 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar1[2]);
    auVar10 = vblendps_avx(auVar20,auVar10,0x13);
    auVar16._16_16_ = auVar10._0_16_;
    auVar16._0_16_ = auVar13._0_16_;
    auVar17 = vperm2f128_avx(auVar13,auVar10,0x31);
    auVar25 = vblendps_avx(auVar25,*pauVar1,0x24);
    auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar25);
    auVar13 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           pauVar1[2]);
    auVar20 = vblendps_avx(auVar25,auVar13,0xe0);
    auVar25 = *(undefined1 (*) [32])(param_2 + uVar6 * 0xc);
    auVar13 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar6 * 0xc);
    auVar10 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar6 * 0xc);
    auVar26 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar13);
    auVar9 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          auVar25);
    auVar26 = vblendps_avx(auVar9,auVar26,0x88);
    auVar9 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                          auVar13);
    auVar29 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar10);
    auVar9 = vblendps_avx(auVar29,auVar9,0x13);
    auVar23._16_16_ = auVar9._0_16_;
    auVar23._0_16_ = auVar26._0_16_;
    auVar26 = vperm2f128_avx(auVar26,auVar9,0x31);
    auVar25 = vblendps_avx(auVar13,auVar25,0x24);
    auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar25);
    auVar13 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           auVar10);
    auVar25 = vblendps_avx(auVar25,auVar13,0xe0);
  }
  else {
    auVar16 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
    auVar17 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
    auVar20 = vgatherdps(ZEXT832(0),auVar25);
    auVar23 = vgatherdps(ZEXT832(0),auVar25);
    auVar26 = vgatherdps(ZEXT832(0),auVar25);
    auVar25 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
  }
  auVar22._0_4_ = param_5 * auVar16._0_4_ + param_6 * auVar23._0_4_;
  auVar22._4_4_ = param_5 * auVar16._4_4_ + param_6 * auVar23._4_4_;
  auVar22._8_4_ = param_5 * auVar16._8_4_ + param_6 * auVar23._8_4_;
  auVar22._12_4_ = param_5 * auVar16._12_4_ + param_6 * auVar23._12_4_;
  auVar24._16_4_ = param_5 * auVar16._16_4_ + param_6 * auVar23._16_4_;
  auVar24._0_16_ = auVar22;
  auVar24._20_4_ = param_5 * auVar16._20_4_ + param_6 * auVar23._20_4_;
  auVar24._24_4_ = param_5 * auVar16._24_4_ + param_6 * auVar23._24_4_;
  auVar24._28_4_ = param_5 * auVar16._28_4_ + param_6 * auVar23._28_4_;
  auVar11._0_4_ = param_5 * auVar17._0_4_ + auVar26._0_4_ * param_6;
  auVar11._4_4_ = param_5 * auVar17._4_4_ + auVar26._4_4_ * param_6;
  auVar11._8_4_ = param_5 * auVar17._8_4_ + auVar26._8_4_ * param_6;
  auVar11._12_4_ = param_5 * auVar17._12_4_ + auVar26._12_4_ * param_6;
  auVar14._16_4_ = param_5 * auVar17._16_4_ + auVar26._16_4_ * param_6;
  auVar14._0_16_ = auVar11;
  auVar14._20_4_ = param_5 * auVar17._20_4_ + auVar26._20_4_ * param_6;
  auVar14._24_4_ = param_5 * auVar17._24_4_ + auVar26._24_4_ * param_6;
  auVar14._28_4_ = param_5 * auVar17._28_4_ + auVar26._28_4_ * param_6;
  auVar8._0_4_ = param_5 * auVar20._0_4_ + param_6 * auVar25._0_4_;
  auVar8._4_4_ = param_5 * auVar20._4_4_ + param_6 * auVar25._4_4_;
  auVar8._8_4_ = param_5 * auVar20._8_4_ + param_6 * auVar25._8_4_;
  auVar8._12_4_ = param_5 * auVar20._12_4_ + param_6 * auVar25._12_4_;
  auVar10._16_4_ = param_5 * auVar20._16_4_ + param_6 * auVar25._16_4_;
  auVar10._0_16_ = auVar8;
  auVar10._20_4_ = param_5 * auVar20._20_4_ + param_6 * auVar25._20_4_;
  auVar10._24_4_ = param_5 * auVar20._24_4_ + param_6 * auVar25._24_4_;
  auVar10._28_4_ = param_5 * auVar20._28_4_ + param_6 * auVar25._28_4_;
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar6 * 0xc);
  cVar3 = (char)uVar5;
  auVar18 = auVar24._16_16_;
  if (cVar3 == -1) {
    auVar20._16_16_ = auVar11;
    auVar20._0_16_ = auVar22;
    auVar13 = vshufpd_avx(auVar24,auVar20,2);
    auVar20 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar10);
    auVar25 = vpermpd_avx2(auVar14,0xe9);
    auVar25 = vblendps_avx(auVar20,auVar25,7);
    auVar21._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar21._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar20 = vpermps_avx2(auVar21,auVar25);
    auVar13 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar13);
    auVar13 = vblendps_avx(auVar13,auVar20,0xa4);
    *pauVar1 = auVar13;
    auVar13 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar25);
    auVar25 = vshufpd_avx(auVar24,auVar24,1);
    auVar25 = vblendps_avx(auVar13,auVar25,0x92);
    pauVar1[1] = auVar25;
    auVar26._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar26._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar13 = vpermps_avx2(auVar26,auVar14);
    auVar25 = vpermpd_avx2(auVar24,0xff);
    auVar25 = vblendps_avx(auVar13,auVar25,3);
    auVar25 = vblendps_avx(auVar25,auVar10,0xe0);
    auVar25 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar25);
    pauVar1[2] = auVar25;
  }
  else {
    auVar15 = auVar14._16_16_;
    auVar27 = auVar10._16_16_;
    if ((uVar5 & 1) != 0) {
      *(float *)*pauVar1 = auVar22._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar22,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar22,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar22,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x10) = auVar24._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar18,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar18,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar18,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(*pauVar1 + 4) = auVar11._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar11,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar11,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar11,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x14) = auVar14._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar15,1);
      *(undefined4 *)pauVar1[2] = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar15,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar15,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(*pauVar1 + 8) = auVar8._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar8,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar8,2);
      *(undefined4 *)pauVar1[1] = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar8,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x18) = auVar10._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar27,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar27,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar27,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
    }
  }
  return;
}

// InterpolateMotionVectors___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunfunf_avx2 @ 140cab600

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateMotionVectors___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunfunf_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6,float param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar10 [32];
  undefined1 auVar12 [32];
  undefined1 auVar15 [32];
  undefined1 auVar18 [32];
  undefined1 auVar22 [32];
  
  auVar26 = ___ymm_0000000700000004000000010000000000000003000000000000000100000000;
  auVar12 = ___ymm_0000000700000005000000070000000500000003000000010000000700000004;
  auVar16 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
  auVar11 = ___ymm_0000000600000003000000000000000000000005000000020000000000000000;
  uVar5 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar5 = param_4;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar7 = 0x40;
    uVar4 = 0;
    do {
      auVar29 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar28 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar25 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar28);
      auVar15 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar29);
      auVar25 = vblendps_avx(auVar15,auVar25,0x88);
      auVar15 = vpermps_avx2(auVar12,auVar28);
      auVar17 = vpermps_avx2(auVar11,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar15 = vblendps_avx(auVar17,auVar15,0x13);
      auVar23 = vperm2f128_avx(auVar25,auVar15,0x31);
      auVar29 = vblendps_avx(auVar28,auVar29,0x24);
      auVar29 = vpermps_avx2(auVar16,auVar29);
      auVar28 = vpermps_avx2(auVar26,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar17 = vblendps_avx(auVar29,auVar28,0xe0);
      auVar29 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7);
      auVar28 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7);
      auVar10 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar28);
      auVar21 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar29);
      auVar10 = vblendps_avx(auVar21,auVar10,0x88);
      auVar21 = vpermps_avx2(auVar12,auVar28);
      auVar18 = vpermps_avx2(auVar11,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar21 = vblendps_avx(auVar18,auVar21,0x13);
      auVar18 = vperm2f128_avx(auVar10,auVar21,0x31);
      auVar29 = vblendps_avx(auVar28,auVar29,0x24);
      auVar29 = vpermps_avx2(auVar16,auVar29);
      auVar28 = vpermps_avx2(auVar26,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar29 = vblendps_avx(auVar29,auVar28,0xe0);
      auVar8._0_4_ = param_7 * (param_5 * auVar25._0_4_ + param_6 * auVar10._0_4_);
      auVar8._4_4_ = param_7 * (param_5 * auVar25._4_4_ + param_6 * auVar10._4_4_);
      auVar8._8_4_ = param_7 * (param_5 * auVar25._8_4_ + param_6 * auVar10._8_4_);
      auVar8._12_4_ = param_7 * (param_5 * auVar25._12_4_ + param_6 * auVar10._12_4_);
      auVar10._16_4_ = param_7 * (param_5 * auVar15._0_4_ + param_6 * auVar21._0_4_);
      auVar10._0_16_ = auVar8;
      auVar10._20_4_ = param_7 * (param_5 * auVar15._4_4_ + param_6 * auVar21._4_4_);
      auVar10._24_4_ = param_7 * (param_5 * auVar15._8_4_ + param_6 * auVar21._8_4_);
      auVar10._28_4_ = param_7 * (param_5 * auVar15._12_4_ + param_6 * auVar21._12_4_);
      auVar13._0_4_ = param_7 * (param_5 * auVar23._0_4_ + param_6 * auVar18._0_4_);
      auVar13._4_4_ = param_7 * (param_5 * auVar23._4_4_ + param_6 * auVar18._4_4_);
      auVar13._8_4_ = param_7 * (param_5 * auVar23._8_4_ + param_6 * auVar18._8_4_);
      auVar13._12_4_ = param_7 * (param_5 * auVar23._12_4_ + param_6 * auVar18._12_4_);
      auVar15._16_4_ = param_7 * (param_5 * auVar23._16_4_ + param_6 * auVar18._16_4_);
      auVar15._0_16_ = auVar13;
      auVar15._20_4_ = param_7 * (param_5 * auVar23._20_4_ + param_6 * auVar18._20_4_);
      auVar15._24_4_ = param_7 * (param_5 * auVar23._24_4_ + param_6 * auVar18._24_4_);
      auVar15._28_4_ = param_7 * (param_5 * auVar23._28_4_ + param_6 * auVar18._28_4_);
      auVar21._0_4_ = param_7 * (param_5 * auVar17._0_4_ + param_6 * auVar29._0_4_);
      auVar21._4_4_ = param_7 * (param_5 * auVar17._4_4_ + param_6 * auVar29._4_4_);
      auVar21._8_4_ = param_7 * (param_5 * auVar17._8_4_ + param_6 * auVar29._8_4_);
      auVar21._12_4_ = param_7 * (param_5 * auVar17._12_4_ + param_6 * auVar29._12_4_);
      auVar21._16_4_ = param_7 * (param_5 * auVar17._16_4_ + param_6 * auVar29._16_4_);
      auVar21._20_4_ = param_7 * (param_5 * auVar17._20_4_ + param_6 * auVar29._20_4_);
      auVar21._24_4_ = param_7 * (param_5 * auVar17._24_4_ + param_6 * auVar29._24_4_);
      auVar21._28_4_ = param_7 * (param_5 * auVar17._28_4_ + param_6 * auVar29._28_4_);
      auVar29._16_16_ = auVar13;
      auVar29._0_16_ = auVar8;
      auVar29 = vshufpd_avx(auVar10,auVar29,2);
      auVar28 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar29);
      auVar29 = vpermpd_avx2(auVar15,0xe9);
      auVar25 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar21);
      auVar29 = vblendps_avx(auVar25,auVar29,7);
      auVar25._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar25._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar25 = vpermps_avx2(auVar25,auVar29);
      auVar28 = vblendps_avx(auVar28,auVar25,0xa4);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7) = auVar28;
      auVar28 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar29);
      auVar29 = vshufpd_avx(auVar10,auVar10,1);
      auVar29 = vblendps_avx(auVar28,auVar29,0x92);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7) = auVar29;
      auVar28._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar28._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar28 = vpermps_avx2(auVar28,auVar15);
      auVar29 = vpermpd_avx2(auVar10,0xff);
      auVar29 = vblendps_avx(auVar28,auVar29,3);
      auVar29 = vblendps_avx(auVar29,auVar21,0xe0);
      auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar29);
      *(undefined1 (*) [32])(param_3 + lVar7) = auVar29;
      lVar7 = lVar7 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar5 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar11._4_4_ = uVar4;
  auVar11._0_4_ = uVar4;
  auVar11._8_4_ = uVar4;
  auVar11._12_4_ = uVar4;
  auVar11._16_4_ = uVar4;
  auVar11._20_4_ = uVar4;
  auVar11._24_4_ = uVar4;
  auVar11._28_4_ = uVar4;
  auVar11 = vpor_avx2(auVar11,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar16._4_4_ = param_4;
  auVar16._0_4_ = param_4;
  auVar16._8_4_ = param_4;
  auVar16._12_4_ = param_4;
  auVar16._16_4_ = param_4;
  auVar16._20_4_ = param_4;
  auVar16._24_4_ = param_4;
  auVar16._28_4_ = param_4;
  auVar11 = vpcmpgtd_avx2(auVar16,auVar11);
  uVar6 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar6 * 0xc);
  uVar5 = vmovmskps_avx(auVar11);
  if (uVar5 == 0xff) {
    auVar11 = pauVar1[1];
    auVar16 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar11);
    auVar12 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar1);
    auVar16 = vblendps_avx(auVar12,auVar16,0x88);
    auVar12 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar11);
    auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar1[2]);
    auVar12 = vblendps_avx(auVar26,auVar12,0x13);
    auVar23._16_16_ = auVar12._0_16_;
    auVar23._0_16_ = auVar16._0_16_;
    auVar25 = vperm2f128_avx(auVar16,auVar12,0x31);
    auVar11 = vblendps_avx(auVar11,*pauVar1,0x24);
    auVar11 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar11);
    auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           pauVar1[2]);
    auVar26 = vblendps_avx(auVar11,auVar16,0xe0);
    auVar11 = *(undefined1 (*) [32])(param_2 + uVar6 * 0xc);
    auVar16 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar6 * 0xc);
    auVar12 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar6 * 0xc);
    auVar29 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar16);
    auVar28 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           auVar11);
    auVar29 = vblendps_avx(auVar28,auVar29,0x88);
    auVar28 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar16);
    auVar15 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar12);
    auVar28 = vblendps_avx(auVar15,auVar28,0x13);
    auVar17._16_16_ = auVar28._0_16_;
    auVar17._0_16_ = auVar29._0_16_;
    auVar29 = vperm2f128_avx(auVar29,auVar28,0x31);
    auVar11 = vblendps_avx(auVar16,auVar11,0x24);
    auVar11 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar11);
    auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           auVar12);
    auVar11 = vblendps_avx(auVar11,auVar16,0xe0);
  }
  else {
    auVar23 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar11);
    auVar25 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar11);
    auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar11);
    auVar17 = vgatherdps(ZEXT832(0),auVar11);
    auVar29 = vgatherdps(ZEXT832(0),auVar11);
    auVar11 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar11);
  }
  auVar20._0_4_ = param_7 * (param_5 * auVar23._0_4_ + param_6 * auVar17._0_4_);
  auVar20._4_4_ = param_7 * (param_5 * auVar23._4_4_ + param_6 * auVar17._4_4_);
  auVar20._8_4_ = param_7 * (param_5 * auVar23._8_4_ + param_6 * auVar17._8_4_);
  auVar20._12_4_ = param_7 * (param_5 * auVar23._12_4_ + param_6 * auVar17._12_4_);
  auVar22._16_4_ = param_7 * (param_5 * auVar23._16_4_ + param_6 * auVar17._16_4_);
  auVar22._0_16_ = auVar20;
  auVar22._20_4_ = param_7 * (param_5 * auVar23._20_4_ + param_6 * auVar17._20_4_);
  auVar22._24_4_ = param_7 * (param_5 * auVar23._24_4_ + param_6 * auVar17._24_4_);
  auVar22._28_4_ = param_7 * (param_5 * auVar23._28_4_ + param_6 * auVar17._28_4_);
  auVar14._0_4_ = param_7 * (param_5 * auVar25._0_4_ + param_6 * auVar29._0_4_);
  auVar14._4_4_ = param_7 * (param_5 * auVar25._4_4_ + param_6 * auVar29._4_4_);
  auVar14._8_4_ = param_7 * (param_5 * auVar25._8_4_ + param_6 * auVar29._8_4_);
  auVar14._12_4_ = param_7 * (param_5 * auVar25._12_4_ + param_6 * auVar29._12_4_);
  auVar18._16_4_ = param_7 * (param_5 * auVar25._16_4_ + param_6 * auVar29._16_4_);
  auVar18._0_16_ = auVar14;
  auVar18._20_4_ = param_7 * (param_5 * auVar25._20_4_ + param_6 * auVar29._20_4_);
  auVar18._24_4_ = param_7 * (param_5 * auVar25._24_4_ + param_6 * auVar29._24_4_);
  auVar18._28_4_ = param_7 * (param_5 * auVar25._28_4_ + param_6 * auVar29._28_4_);
  auVar9._0_4_ = param_7 * (param_5 * auVar26._0_4_ + param_6 * auVar11._0_4_);
  auVar9._4_4_ = param_7 * (param_5 * auVar26._4_4_ + param_6 * auVar11._4_4_);
  auVar9._8_4_ = param_7 * (param_5 * auVar26._8_4_ + param_6 * auVar11._8_4_);
  auVar9._12_4_ = param_7 * (param_5 * auVar26._12_4_ + param_6 * auVar11._12_4_);
  auVar12._16_4_ = param_7 * (param_5 * auVar26._16_4_ + param_6 * auVar11._16_4_);
  auVar12._0_16_ = auVar9;
  auVar12._20_4_ = param_7 * (param_5 * auVar26._20_4_ + param_6 * auVar11._20_4_);
  auVar12._24_4_ = param_7 * (param_5 * auVar26._24_4_ + param_6 * auVar11._24_4_);
  auVar12._28_4_ = param_7 * (param_5 * auVar26._28_4_ + param_6 * auVar11._28_4_);
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar6 * 0xc);
  cVar3 = (char)uVar5;
  auVar8 = auVar22._16_16_;
  if (cVar3 == -1) {
    auVar26._16_16_ = auVar14;
    auVar26._0_16_ = auVar20;
    auVar16 = vshufpd_avx(auVar22,auVar26,2);
    auVar26 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar12);
    auVar11 = vpermpd_avx2(auVar18,0xe9);
    auVar11 = vblendps_avx(auVar26,auVar11,7);
    auVar27._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar27._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar26 = vpermps_avx2(auVar27,auVar11);
    auVar16 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar16);
    auVar16 = vblendps_avx(auVar16,auVar26,0xa4);
    *pauVar1 = auVar16;
    auVar16 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar11);
    auVar11 = vshufpd_avx(auVar22,auVar22,1);
    auVar11 = vblendps_avx(auVar16,auVar11,0x92);
    pauVar1[1] = auVar11;
    auVar24._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar24._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar16 = vpermps_avx2(auVar24,auVar18);
    auVar11 = vpermpd_avx2(auVar22,0xff);
    auVar11 = vblendps_avx(auVar16,auVar11,3);
    auVar11 = vblendps_avx(auVar11,auVar12,0xe0);
    auVar11 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar11);
    pauVar1[2] = auVar11;
  }
  else {
    auVar19 = auVar18._16_16_;
    auVar13 = auVar12._16_16_;
    if ((uVar5 & 1) != 0) {
      *(float *)*pauVar1 = auVar20._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar20,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar20,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar20,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x10) = auVar22._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar8,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar8,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar8,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(*pauVar1 + 4) = auVar14._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar14,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar14,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar14,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x14) = auVar18._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar19,1);
      *(undefined4 *)pauVar1[2] = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar19,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar19,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(*pauVar1 + 8) = auVar9._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar9,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar9,2);
      *(undefined4 *)pauVar1[1] = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar9,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x18) = auVar12._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar13,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar13,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar13,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
    }
  }
  return;
}

// InterpolateUVs___un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_uniunfunf_avx2 @ 140cabd90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateUVs___un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_uniunfunf_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar9 [32];
  
  uVar5 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar5 = param_4;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar3 = 0;
    do {
      auVar13 = *(undefined1 (*) [32])(param_1 + uVar3 * 8);
      auVar14 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar3 * 8);
      auVar15 = vshufps_avx(auVar13,auVar14,0x88);
      auVar11 = vpermpd_avx2(auVar15,0xd8);
      auVar13 = vshufps_avx(auVar13,auVar14,0xdd);
      auVar12 = vpermpd_avx2(auVar13,0xd8);
      auVar13 = *(undefined1 (*) [32])(param_2 + uVar3 * 8);
      auVar14 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar3 * 8);
      auVar15 = vshufps_avx(auVar13,auVar14,0x88);
      auVar15 = vpermpd_avx2(auVar15,0xd8);
      auVar13 = vshufps_avx(auVar13,auVar14,0xdd);
      auVar13 = vpermpd_avx2(auVar13,0xd8);
      auVar16._0_4_ = param_5 * auVar11._0_4_ + auVar15._0_4_ * param_6;
      auVar16._4_4_ = param_5 * auVar11._4_4_ + auVar15._4_4_ * param_6;
      auVar16._8_4_ = param_5 * auVar11._8_4_ + auVar15._8_4_ * param_6;
      auVar16._12_4_ = param_5 * auVar11._12_4_ + auVar15._12_4_ * param_6;
      auVar16._16_4_ = param_5 * auVar11._16_4_ + auVar15._16_4_ * param_6;
      auVar16._20_4_ = param_5 * auVar11._20_4_ + auVar15._20_4_ * param_6;
      auVar16._24_4_ = param_5 * auVar11._24_4_ + auVar15._24_4_ * param_6;
      auVar16._28_4_ = param_5 * auVar11._28_4_ + auVar15._28_4_ * param_6;
      auVar14._0_4_ = param_5 * auVar12._0_4_ + param_6 * auVar13._0_4_;
      auVar14._4_4_ = param_5 * auVar12._4_4_ + param_6 * auVar13._4_4_;
      auVar14._8_4_ = param_5 * auVar12._8_4_ + param_6 * auVar13._8_4_;
      auVar14._12_4_ = param_5 * auVar12._12_4_ + param_6 * auVar13._12_4_;
      auVar14._16_4_ = param_5 * auVar12._16_4_ + param_6 * auVar13._16_4_;
      auVar14._20_4_ = param_5 * auVar12._20_4_ + param_6 * auVar13._20_4_;
      auVar14._24_4_ = param_5 * auVar12._24_4_ + param_6 * auVar13._24_4_;
      auVar14._28_4_ = param_5 * auVar12._28_4_ + param_6 * auVar13._28_4_;
      auVar13 = vunpckhps_avx(auVar16,auVar14);
      auVar14 = vunpcklps_avx(auVar16,auVar14);
      auVar15 = vperm2f128_avx(auVar14,auVar13,0x20);
      *(undefined1 (*) [32])(param_3 + uVar3 * 8) = auVar15;
      auVar13 = vperm2f128_avx(auVar14,auVar13,0x31);
      *(undefined1 (*) [32])(param_3 + 0x20 + uVar3 * 8) = auVar13;
      uVar3 = uVar3 + 8;
    } while ((int)uVar3 < (int)(uVar5 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar3) {
      return;
    }
  }
  uVar2 = (undefined4)uVar3;
  auVar13._4_4_ = uVar2;
  auVar13._0_4_ = uVar2;
  auVar13._8_4_ = uVar2;
  auVar13._12_4_ = uVar2;
  auVar13._16_4_ = uVar2;
  auVar13._20_4_ = uVar2;
  auVar13._24_4_ = uVar2;
  auVar13._28_4_ = uVar2;
  auVar13 = vpor_avx2(auVar13,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar15._4_4_ = param_4;
  auVar15._0_4_ = param_4;
  auVar15._8_4_ = param_4;
  auVar15._12_4_ = param_4;
  auVar15._16_4_ = param_4;
  auVar15._20_4_ = param_4;
  auVar15._24_4_ = param_4;
  auVar15._28_4_ = param_4;
  auVar13 = vpcmpgtd_avx2(auVar15,auVar13);
  uVar3 = uVar3 & 0xffffffff;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar3 * 8);
  uVar5 = vmovmskps_avx(auVar13);
  if (uVar5 == 0xff) {
    auVar13 = *pauVar1;
    auVar14 = pauVar1[1];
    auVar15 = vshufps_avx(auVar13,auVar14,0x88);
    auVar11 = vpermpd_avx2(auVar15,0xd8);
    auVar13 = vshufps_avx(auVar13,auVar14,0xdd);
    auVar12 = vpermpd_avx2(auVar13,0xd8);
    auVar13 = *(undefined1 (*) [32])(param_2 + uVar3 * 8);
    auVar14 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar3 * 8);
    auVar15 = vshufps_avx(auVar13,auVar14,0x88);
    auVar15 = vpermpd_avx2(auVar15,0xd8);
    auVar13 = vshufps_avx(auVar13,auVar14,0xdd);
    auVar13 = vpermpd_avx2(auVar13,0xd8);
  }
  else {
    auVar11 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar13);
    auVar12 = vgatherdps(ZEXT832(0),auVar13);
    auVar15 = vgatherdps(ZEXT832(0),auVar13);
    auVar13 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar13);
  }
  auVar8._0_4_ = param_5 * auVar11._0_4_ + param_6 * auVar15._0_4_;
  auVar8._4_4_ = param_5 * auVar11._4_4_ + param_6 * auVar15._4_4_;
  auVar8._8_4_ = param_5 * auVar11._8_4_ + param_6 * auVar15._8_4_;
  auVar8._12_4_ = param_5 * auVar11._12_4_ + param_6 * auVar15._12_4_;
  auVar9._16_4_ = param_5 * auVar11._16_4_ + param_6 * auVar15._16_4_;
  auVar9._0_16_ = auVar8;
  auVar9._20_4_ = param_5 * auVar11._20_4_ + param_6 * auVar15._20_4_;
  auVar9._24_4_ = param_5 * auVar11._24_4_ + param_6 * auVar15._24_4_;
  auVar9._28_4_ = param_5 * auVar11._28_4_ + param_6 * auVar15._28_4_;
  auVar6._0_4_ = param_5 * auVar12._0_4_ + param_6 * auVar13._0_4_;
  auVar6._4_4_ = param_5 * auVar12._4_4_ + param_6 * auVar13._4_4_;
  auVar6._8_4_ = param_5 * auVar12._8_4_ + param_6 * auVar13._8_4_;
  auVar6._12_4_ = param_5 * auVar12._12_4_ + param_6 * auVar13._12_4_;
  auVar11._16_4_ = param_5 * auVar12._16_4_ + param_6 * auVar13._16_4_;
  auVar11._0_16_ = auVar6;
  auVar11._20_4_ = param_5 * auVar12._20_4_ + param_6 * auVar13._20_4_;
  auVar11._24_4_ = param_5 * auVar12._24_4_ + param_6 * auVar13._24_4_;
  auVar11._28_4_ = param_5 * auVar12._28_4_ + param_6 * auVar13._28_4_;
  cVar4 = (char)uVar5;
  if (cVar4 == -1) {
    auVar13 = vunpckhps_avx(auVar9,auVar11);
    auVar14 = vunpcklps_avx(auVar9,auVar11);
    auVar15 = vperm2f128_avx(auVar14,auVar13,0x31);
    auVar13 = vperm2f128_avx(auVar14,auVar13,0x20);
    *(undefined1 (*) [32])(param_3 + uVar3 * 8) = auVar13;
    *(undefined1 (*) [32])(param_3 + 0x20 + uVar3 * 8) = auVar15;
  }
  else {
    auVar10 = auVar9._16_16_;
    auVar7 = auVar11._16_16_;
    if ((uVar5 & 1) != 0) {
      *(float *)(param_3 + uVar3 * 8) = auVar8._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar8,1);
      *(undefined4 *)(param_3 + 8 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar8,2);
      *(undefined4 *)(param_3 + 0x10 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar8,3);
      *(undefined4 *)(param_3 + 0x18 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_3 + 0x20 + uVar3 * 8) = auVar9._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar10,1);
      *(undefined4 *)(param_3 + 0x28 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar10,2);
      *(undefined4 *)(param_3 + 0x30 + uVar3 * 8) = uVar2;
    }
    if (cVar4 < '\0') {
      uVar2 = vextractps_avx(auVar10,3);
      *(undefined4 *)(param_3 + 0x38 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(param_3 + 4 + uVar3 * 8) = auVar6._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar6,1);
      *(undefined4 *)(param_3 + 0xc + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar6,2);
      *(undefined4 *)(param_3 + 0x14 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar6,3);
      *(undefined4 *)(param_3 + 0x1c + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_3 + 0x24 + uVar3 * 8) = auVar11._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar7,1);
      *(undefined4 *)(param_3 + 0x2c + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar7,2);
      *(undefined4 *)(param_3 + 0x34 + uVar3 * 8) = uVar2;
    }
    if (cVar4 < '\0') {
      uVar2 = vextractps_avx(auVar7,3);
      *(undefined4 *)(param_3 + 0x3c + uVar3 * 8) = uVar2;
    }
  }
  return;
}

// InterpolateColors___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx2 @ 140cac150

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateColors___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar10 [32];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  
  fVar4 = __real_3f000000;
  uVar8 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar8 = param_4;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar6 = 0;
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(param_1 + uVar6);
      auVar12 = vpmovzxbd_avx2(auVar2);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)(param_2 + uVar6);
      auVar14 = vpmovzxbd_avx2(auVar3);
      auVar12 = vcvtdq2ps_avx(auVar12);
      auVar14 = vcvtdq2ps_avx(auVar14);
      auVar15._0_4_ = (int)(param_5 * auVar12._0_4_ + param_6 * auVar14._0_4_ + fVar4);
      auVar15._4_4_ = (int)(param_5 * auVar12._4_4_ + param_6 * auVar14._4_4_ + fVar4);
      auVar15._8_4_ = (int)(param_5 * auVar12._8_4_ + param_6 * auVar14._8_4_ + fVar4);
      auVar15._12_4_ = (int)(param_5 * auVar12._12_4_ + param_6 * auVar14._12_4_ + fVar4);
      auVar16._16_4_ = (int)(param_5 * auVar12._16_4_ + param_6 * auVar14._16_4_ + fVar4);
      auVar16._0_16_ = auVar15;
      auVar16._20_4_ = (int)(param_5 * auVar12._20_4_ + param_6 * auVar14._20_4_ + fVar4);
      auVar16._24_4_ = (int)(param_5 * auVar12._24_4_ + param_6 * auVar14._24_4_ + fVar4);
      auVar16._28_4_ = (int)(param_5 * auVar12._28_4_ + param_6 * auVar14._28_4_ + fVar4);
      auVar2 = vpackssdw_avx(auVar15,auVar16._16_16_);
      auVar2 = vpackuswb_avx(auVar2,auVar2);
      *(longlong *)(param_3 + uVar6) = auVar2._0_8_;
      uVar6 = uVar6 + 8;
    } while (uVar6 < (uVar8 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar6) {
      return;
    }
  }
  uVar5 = (undefined4)uVar6;
  auVar12._4_4_ = uVar5;
  auVar12._0_4_ = uVar5;
  auVar12._8_4_ = uVar5;
  auVar12._12_4_ = uVar5;
  auVar12._16_4_ = uVar5;
  auVar12._20_4_ = uVar5;
  auVar12._24_4_ = uVar5;
  auVar12._28_4_ = uVar5;
  auVar12 = vpor_avx2(auVar12,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar13._4_4_ = param_4;
  auVar13._0_4_ = param_4;
  auVar13._8_4_ = param_4;
  auVar13._12_4_ = param_4;
  auVar14._16_4_ = param_4;
  auVar14._0_16_ = auVar13;
  auVar14._20_4_ = param_4;
  auVar14._24_4_ = param_4;
  auVar14._28_4_ = param_4;
  auVar12 = vpcmpgtd_avx2(auVar14,auVar12);
  auVar11 = auVar12._0_16_;
  uVar6 = uVar6 & 0xffffffff;
  uVar8 = vmovmskps_avx(auVar12);
  if ((~(byte)uVar8 & 0x81) == 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(param_1 + uVar6);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulonglong *)(param_2 + uVar6);
  }
  else {
    puVar7 = (undefined1 *)(param_1 + uVar6);
    if ((uVar8 & 1) != 0) {
      uVar1 = *puVar7;
      auVar11[1] = uVar1;
      auVar11[0] = uVar1;
      auVar11[2] = uVar1;
      auVar11[3] = uVar1;
      auVar11[4] = uVar1;
      auVar11[5] = uVar1;
      auVar11[6] = uVar1;
      auVar11[7] = uVar1;
      auVar11[8] = uVar1;
      auVar11[9] = uVar1;
      auVar11[10] = uVar1;
      auVar11[0xb] = uVar1;
      auVar11[0xc] = uVar1;
      auVar11[0xd] = uVar1;
      auVar11[0xe] = uVar1;
      auVar11[0xf] = uVar1;
    }
    if ((uVar8 & 2) != 0) {
      auVar13 = vpinsrb_avx(auVar11,(uint)(byte)puVar7[1],1);
      auVar11 = vpblendw_avx(auVar13,auVar11,0xe);
    }
    if ((uVar8 & 4) != 0) {
      auVar2 = vpmovzxwd_avx(auVar11);
      auVar2 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[2],2);
      auVar13 = vpinsrb_avx(auVar2,(uint)auVar11[3],3);
      auVar11 = vpblendd_avx2(auVar13,auVar11,2);
    }
    if ((uVar8 & 8) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048080030280020100);
      auVar13 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[3],3);
      auVar11 = vpblendd_avx2(auVar13,auVar11,2);
    }
    if ((uVar8 & 0x10) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048080030203020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[4],4);
      auVar13 = vpinsrb_avx(auVar2,(uint)auVar11[5],5);
      auVar11 = vpblendw_avx(auVar13,auVar11,8);
    }
    if ((uVar8 & 0x20) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048080030403020100);
      auVar13 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[5],5);
      auVar11 = vpblendw_avx(auVar13,auVar11,8);
    }
    if ((uVar8 & 0x40) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048080050403020100);
      auVar13 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[6],6);
      auVar11 = vpinsrb_avx(auVar13,(uint)auVar11[7],7);
    }
    if ((uVar8 & 0x80) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048006050403020100);
      auVar11 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[7],7);
    }
    if ((uVar8 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_2 + uVar6);
      auVar13[1] = uVar1;
      auVar13[0] = uVar1;
      auVar13[2] = uVar1;
      auVar13[3] = uVar1;
      auVar13[4] = uVar1;
      auVar13[5] = uVar1;
      auVar13[6] = uVar1;
      auVar13[7] = uVar1;
      auVar13[8] = uVar1;
      auVar13[9] = uVar1;
      auVar13[10] = uVar1;
      auVar13[0xb] = uVar1;
      auVar13[0xc] = uVar1;
      auVar13[0xd] = uVar1;
      auVar13[0xe] = uVar1;
      auVar13[0xf] = uVar1;
    }
    if ((uVar8 & 2) != 0) {
      auVar2 = vpinsrb_avx(auVar13,(uint)*(byte *)(param_2 + uVar6 + 1),1);
      auVar13 = vpblendw_avx(auVar2,auVar13,0xe);
    }
    if ((uVar8 & 4) != 0) {
      auVar2 = vpmovzxwd_avx(auVar13);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 2),2);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar13[3],3);
      auVar13 = vpblendd_avx2(auVar2,auVar13,2);
    }
    if ((uVar8 & 8) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048080030280020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 3),3);
      auVar13 = vpblendd_avx2(auVar2,auVar13,2);
    }
    if ((uVar8 & 0x10) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048080030203020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 4),4);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar13[5],5);
      auVar13 = vpblendw_avx(auVar2,auVar13,8);
    }
    if ((uVar8 & 0x20) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048080030403020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 5),5);
      auVar13 = vpblendw_avx(auVar2,auVar13,8);
    }
    if ((uVar8 & 0x40) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048080050403020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 6),6);
      auVar13 = vpinsrb_avx(auVar2,(uint)auVar13[7],7);
    }
    if ((uVar8 & 0x80) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048006050403020100);
      auVar13 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 7),7);
    }
  }
  auVar12 = vpmovzxbd_avx2(auVar11);
  auVar12 = vcvtdq2ps_avx(auVar12);
  auVar14 = vpmovzxbd_avx2(auVar13);
  auVar14 = vcvtdq2ps_avx(auVar14);
  auVar9._0_4_ = (int)(auVar12._0_4_ * param_5 + auVar14._0_4_ * param_6 + __real_3f000000);
  auVar9._4_4_ = (int)(auVar12._4_4_ * param_5 + auVar14._4_4_ * param_6 + __real_3f000000);
  auVar9._8_4_ = (int)(auVar12._8_4_ * param_5 + auVar14._8_4_ * param_6 + __real_3f000000);
  auVar9._12_4_ = (int)(auVar12._12_4_ * param_5 + auVar14._12_4_ * param_6 + __real_3f000000);
  auVar10._16_4_ = (int)(auVar12._16_4_ * param_5 + auVar14._16_4_ * param_6 + __real_3f000000);
  auVar10._0_16_ = auVar9;
  auVar10._20_4_ = (int)(auVar12._20_4_ * param_5 + auVar14._20_4_ * param_6 + __real_3f000000);
  auVar10._24_4_ = (int)(auVar12._24_4_ * param_5 + auVar14._24_4_ * param_6 + __real_3f000000);
  auVar10._28_4_ = (int)(auVar12._28_4_ * param_5 + auVar14._28_4_ * param_6 + __real_3f000000);
  auVar2 = vpackssdw_avx(auVar9,auVar10._16_16_);
  auVar2 = vpackuswb_avx(auVar2,auVar2);
  if ((uVar8 & 1) != 0) {
    *(char *)(param_3 + uVar6) = auVar2[0];
  }
  if ((uVar8 & 2) != 0) {
    *(char *)(param_3 + 1 + uVar6) = auVar2[1];
  }
  if ((uVar8 & 4) != 0) {
    *(char *)(param_3 + 2 + uVar6) = auVar2[2];
  }
  if ((uVar8 & 8) != 0) {
    *(char *)(param_3 + 3 + uVar6) = auVar2[3];
  }
  if ((uVar8 & 0x10) != 0) {
    *(char *)(param_3 + 4 + uVar6) = auVar2[4];
  }
  if ((uVar8 & 0x20) != 0) {
    *(char *)(param_3 + 5 + uVar6) = auVar2[5];
  }
  if ((uVar8 & 0x40) != 0) {
    *(char *)(param_3 + 6 + uVar6) = auVar2[6];
  }
  if (-1 < (char)(byte)uVar8) {
    return;
  }
  *(char *)(param_3 + 7 + uVar6) = auVar2[7];
  return;
}

// InterpolateTangents___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx2 @ 140cac5b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateTangents___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,float param_8,float param_9)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 *puVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar23 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar16 [32];
  undefined1 auVar21 [32];
  undefined1 auVar27 [32];
  undefined1 auVar30 [32];
  
  fVar9 = __real_3f000000;
  auVar22 = in_ZMM4._0_16_;
  auVar23 = in_ZMM5._0_16_;
  uVar13 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar13 = param_7;
  }
  if ((int)(uVar13 & 0xfffffff8) < 1) {
    uVar14 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    auVar22._0_8_ =
         CONCAT17(DAT_1528e5792,
                  CONCAT16(DAT_1528e5792,
                           CONCAT15(DAT_1528e5792,
                                    CONCAT14(DAT_1528e5792,
                                             CONCAT13(DAT_1528e5792,
                                                      CONCAT12(DAT_1528e5792,
                                                               CONCAT11(DAT_1528e5792,DAT_1528e5792)
                                                              ))))));
    auVar22[8] = DAT_1528e5792;
    auVar22[9] = DAT_1528e5792;
    auVar22[10] = DAT_1528e5792;
    auVar22[0xb] = DAT_1528e5792;
    auVar22[0xc] = DAT_1528e5792;
    auVar22[0xd] = DAT_1528e5792;
    auVar22[0xe] = DAT_1528e5792;
    auVar22[0xf] = DAT_1528e5792;
    auVar23._4_4_ = __real_3f000000;
    auVar23._0_4_ = __real_3f000000;
    auVar23._8_4_ = __real_3f000000;
    auVar23._12_4_ = __real_3f000000;
    do {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(ulonglong *)(param_1 + uVar14);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = *(ulonglong *)(param_2 + uVar14);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = *(ulonglong *)(param_3 + uVar14);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = *(ulonglong *)(param_4 + uVar14);
      auVar30 = vpmovzxbd_avx2(auVar24 ^ auVar22);
      auVar30 = vcvtdq2ps_avx(auVar30);
      auVar19 = vpmovzxbd_avx2(auVar28 ^ auVar22);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar21 = vpmovzxbd_avx2(auVar31 ^ auVar22);
      auVar21 = vcvtdq2ps_avx(auVar21);
      auVar16 = vpmovzxbd_avx2(auVar32 ^ auVar22);
      auVar16 = vcvtdq2ps_avx(auVar16);
      auVar25._0_4_ = (int)(param_8 * auVar30._0_4_ + param_9 * auVar19._0_4_ + fVar9);
      auVar25._4_4_ = (int)(param_8 * auVar30._4_4_ + param_9 * auVar19._4_4_ + fVar9);
      auVar25._8_4_ = (int)(param_8 * auVar30._8_4_ + param_9 * auVar19._8_4_ + fVar9);
      auVar25._12_4_ = (int)(param_8 * auVar30._12_4_ + param_9 * auVar19._12_4_ + fVar9);
      auVar27._16_4_ = (int)(param_8 * auVar30._16_4_ + param_9 * auVar19._16_4_ + fVar9);
      auVar27._0_16_ = auVar25;
      auVar27._20_4_ = (int)(param_8 * auVar30._20_4_ + param_9 * auVar19._20_4_ + fVar9);
      auVar27._24_4_ = (int)(param_8 * auVar30._24_4_ + param_9 * auVar19._24_4_ + fVar9);
      auVar27._28_4_ = (int)(param_8 * auVar30._28_4_ + param_9 * auVar19._28_4_ + fVar9);
      auVar24 = vpackssdw_avx(auVar25,auVar27._16_16_);
      auVar25 = vpackuswb_avx(auVar24,auVar24);
      auVar29._0_4_ = (int)(param_8 * auVar21._0_4_ + param_9 * auVar16._0_4_ + fVar9);
      auVar29._4_4_ = (int)(param_8 * auVar21._4_4_ + param_9 * auVar16._4_4_ + fVar9);
      auVar29._8_4_ = (int)(param_8 * auVar21._8_4_ + param_9 * auVar16._8_4_ + fVar9);
      auVar29._12_4_ = (int)(param_8 * auVar21._12_4_ + param_9 * auVar16._12_4_ + fVar9);
      auVar30._16_4_ = (int)(param_8 * auVar21._16_4_ + param_9 * auVar16._16_4_ + fVar9);
      auVar30._0_16_ = auVar29;
      auVar30._20_4_ = (int)(param_8 * auVar21._20_4_ + param_9 * auVar16._20_4_ + fVar9);
      auVar30._24_4_ = (int)(param_8 * auVar21._24_4_ + param_9 * auVar16._24_4_ + fVar9);
      auVar30._28_4_ = (int)(param_8 * auVar21._28_4_ + param_9 * auVar16._28_4_ + fVar9);
      auVar24 = vpackssdw_avx(auVar29,auVar30._16_16_);
      auVar24 = vpackuswb_avx(auVar24,auVar24);
      *(ulonglong *)(param_5 + uVar14) = auVar25._0_8_ ^ auVar22._0_8_;
      *(ulonglong *)(param_6 + uVar14) = auVar24._0_8_ ^ auVar22._0_8_;
      uVar14 = uVar14 + 8;
    } while (uVar14 < (uVar13 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar14) {
      return;
    }
  }
  fVar9 = __real_3f000000;
  uVar12 = (undefined4)uVar14;
  auVar19._4_4_ = uVar12;
  auVar19._0_4_ = uVar12;
  auVar19._8_4_ = uVar12;
  auVar19._12_4_ = uVar12;
  auVar19._16_4_ = uVar12;
  auVar19._20_4_ = uVar12;
  auVar19._24_4_ = uVar12;
  auVar19._28_4_ = uVar12;
  auVar30 = vpor_avx2(auVar19,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar20._4_4_ = param_7;
  auVar20._0_4_ = param_7;
  auVar20._8_4_ = param_7;
  auVar20._12_4_ = param_7;
  auVar21._16_4_ = param_7;
  auVar21._0_16_ = auVar20;
  auVar21._20_4_ = param_7;
  auVar21._24_4_ = param_7;
  auVar21._28_4_ = param_7;
  auVar30 = vpcmpgtd_avx2(auVar21,auVar30);
  auVar18 = auVar30._0_16_;
  uVar14 = uVar14 & 0xffffffff;
  uVar13 = vmovmskps_avx(auVar30);
  bVar11 = (byte)uVar13;
  if ((~bVar11 & 0x81) == 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(ulonglong *)(param_1 + uVar14);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulonglong *)(param_2 + uVar14);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *(ulonglong *)(param_3 + uVar14);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *(ulonglong *)(param_4 + uVar14);
  }
  else {
    puVar10 = (undefined1 *)(param_1 + uVar14);
    if ((uVar13 & 1) != 0) {
      uVar1 = *puVar10;
      auVar18[1] = uVar1;
      auVar18[0] = uVar1;
      auVar18[2] = uVar1;
      auVar18[3] = uVar1;
      auVar18[4] = uVar1;
      auVar18[5] = uVar1;
      auVar18[6] = uVar1;
      auVar18[7] = uVar1;
      auVar18[8] = uVar1;
      auVar18[9] = uVar1;
      auVar18[10] = uVar1;
      auVar18[0xb] = uVar1;
      auVar18[0xc] = uVar1;
      auVar18[0xd] = uVar1;
      auVar18[0xe] = uVar1;
      auVar18[0xf] = uVar1;
    }
    if ((uVar13 & 2) != 0) {
      auVar20 = vpinsrb_avx(auVar18,(uint)(byte)puVar10[1],1);
      auVar18 = vpblendw_avx(auVar20,auVar18,0xe);
    }
    if ((uVar13 & 4) != 0) {
      auVar24 = vpmovzxwd_avx(auVar18);
      auVar24 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[2],2);
      auVar20 = vpinsrb_avx(auVar24,(uint)auVar18[3],3);
      auVar18 = vpblendd_avx2(auVar20,auVar18,2);
    }
    if ((uVar13 & 8) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048080030280020100);
      auVar20 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[3],3);
      auVar18 = vpblendd_avx2(auVar20,auVar18,2);
    }
    if ((uVar13 & 0x10) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048080030203020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[4],4);
      auVar20 = vpinsrb_avx(auVar24,(uint)auVar18[5],5);
      auVar18 = vpblendw_avx(auVar20,auVar18,8);
    }
    if ((uVar13 & 0x20) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048080030403020100);
      auVar20 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[5],5);
      auVar18 = vpblendw_avx(auVar20,auVar18,8);
    }
    if ((uVar13 & 0x40) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048080050403020100);
      auVar20 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[6],6);
      auVar18 = vpinsrb_avx(auVar20,(uint)auVar18[7],7);
    }
    if ((uVar13 & 0x80) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048006050403020100);
      auVar18 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[7],7);
    }
    if ((uVar13 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_2 + uVar14);
      auVar20[1] = uVar1;
      auVar20[0] = uVar1;
      auVar20[2] = uVar1;
      auVar20[3] = uVar1;
      auVar20[4] = uVar1;
      auVar20[5] = uVar1;
      auVar20[6] = uVar1;
      auVar20[7] = uVar1;
      auVar20[8] = uVar1;
      auVar20[9] = uVar1;
      auVar20[10] = uVar1;
      auVar20[0xb] = uVar1;
      auVar20[0xc] = uVar1;
      auVar20[0xd] = uVar1;
      auVar20[0xe] = uVar1;
      auVar20[0xf] = uVar1;
    }
    if ((uVar13 & 2) != 0) {
      auVar22 = vpinsrb_avx(auVar20,(uint)*(byte *)(param_2 + uVar14 + 1),1);
      auVar20 = vpblendw_avx(auVar22,auVar20,0xe);
    }
    if ((uVar13 & 4) != 0) {
      auVar22 = vpmovzxwd_avx(auVar20);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 2),2);
      auVar22 = vpinsrb_avx(auVar22,(uint)auVar20[3],3);
      auVar20 = vpblendd_avx2(auVar22,auVar20,2);
    }
    if ((uVar13 & 8) != 0) {
      auVar22 = vpshufb_avx(auVar20,___xmm_80800706808005048080030280020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 3),3);
      auVar20 = vpblendd_avx2(auVar22,auVar20,2);
    }
    if ((uVar13 & 0x10) != 0) {
      auVar22 = vpshufb_avx(auVar20,___xmm_80800706808005048080030203020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 4),4);
      auVar22 = vpinsrb_avx(auVar22,(uint)auVar20[5],5);
      auVar20 = vpblendw_avx(auVar22,auVar20,8);
    }
    if ((uVar13 & 0x20) != 0) {
      auVar22 = vpshufb_avx(auVar20,___xmm_80800706808005048080030403020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 5),5);
      auVar20 = vpblendw_avx(auVar22,auVar20,8);
    }
    if ((uVar13 & 0x40) != 0) {
      auVar22 = vpshufb_avx(auVar20,___xmm_80800706808005048080050403020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 6),6);
      auVar20 = vpinsrb_avx(auVar22,(uint)auVar20[7],7);
    }
    if ((uVar13 & 0x80) != 0) {
      auVar24 = vpshufb_avx(auVar20,___xmm_80800706808005048006050403020100);
      auVar20 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_2 + uVar14 + 7),7);
    }
    if ((uVar13 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_3 + uVar14);
      auVar22[1] = uVar1;
      auVar22[0] = uVar1;
      auVar22[2] = uVar1;
      auVar22[3] = uVar1;
      auVar22[4] = uVar1;
      auVar22[5] = uVar1;
      auVar22[6] = uVar1;
      auVar22[7] = uVar1;
      auVar22[8] = uVar1;
      auVar22[9] = uVar1;
      auVar22[10] = uVar1;
      auVar22[0xb] = uVar1;
      auVar22[0xc] = uVar1;
      auVar22[0xd] = uVar1;
      auVar22[0xe] = uVar1;
      auVar22[0xf] = uVar1;
    }
    if ((uVar13 & 2) != 0) {
      auVar23 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_3 + uVar14 + 1),1);
      auVar22 = vpblendw_avx(auVar23,auVar22,0xe);
    }
    if ((uVar13 & 4) != 0) {
      auVar23 = vpmovzxwd_avx(auVar22);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 2),2);
      auVar23 = vpinsrb_avx(auVar23,(uint)auVar22[3],3);
      auVar22 = vpblendd_avx2(auVar23,auVar22,2);
    }
    if ((uVar13 & 8) != 0) {
      auVar23 = vpshufb_avx(auVar22,___xmm_80800706808005048080030280020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 3),3);
      auVar22 = vpblendd_avx2(auVar23,auVar22,2);
    }
    if ((uVar13 & 0x10) != 0) {
      auVar23 = vpshufb_avx(auVar22,___xmm_80800706808005048080030203020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 4),4);
      auVar23 = vpinsrb_avx(auVar23,(uint)auVar22[5],5);
      auVar22 = vpblendw_avx(auVar23,auVar22,8);
    }
    if ((uVar13 & 0x20) != 0) {
      auVar23 = vpshufb_avx(auVar22,___xmm_80800706808005048080030403020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 5),5);
      auVar22 = vpblendw_avx(auVar23,auVar22,8);
    }
    if ((uVar13 & 0x40) != 0) {
      auVar23 = vpshufb_avx(auVar22,___xmm_80800706808005048080050403020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 6),6);
      auVar22 = vpinsrb_avx(auVar23,(uint)auVar22[7],7);
    }
    if ((uVar13 & 0x80) != 0) {
      auVar22 = vpshufb_avx(auVar22,___xmm_80800706808005048006050403020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_3 + uVar14 + 7),7);
    }
    if ((uVar13 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_4 + uVar14);
      auVar23[1] = uVar1;
      auVar23[0] = uVar1;
      auVar23[2] = uVar1;
      auVar23[3] = uVar1;
      auVar23[4] = uVar1;
      auVar23[5] = uVar1;
      auVar23[6] = uVar1;
      auVar23[7] = uVar1;
      auVar23[8] = uVar1;
      auVar23[9] = uVar1;
      auVar23[10] = uVar1;
      auVar23[0xb] = uVar1;
      auVar23[0xc] = uVar1;
      auVar23[0xd] = uVar1;
      auVar23[0xe] = uVar1;
      auVar23[0xf] = uVar1;
    }
    if ((uVar13 & 2) != 0) {
      auVar24 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_4 + uVar14 + 1),1);
      auVar23 = vpblendw_avx(auVar24,auVar23,0xe);
    }
    if ((uVar13 & 4) != 0) {
      auVar24 = vpmovzxwd_avx(auVar23);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 2),2);
      auVar24 = vpinsrb_avx(auVar24,(uint)auVar23[3],3);
      auVar23 = vpblendd_avx2(auVar24,auVar23,2);
    }
    if ((uVar13 & 8) != 0) {
      auVar24 = vpshufb_avx(auVar23,___xmm_80800706808005048080030280020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 3),3);
      auVar23 = vpblendd_avx2(auVar24,auVar23,2);
    }
    if ((uVar13 & 0x10) != 0) {
      auVar24 = vpshufb_avx(auVar23,___xmm_80800706808005048080030203020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 4),4);
      auVar24 = vpinsrb_avx(auVar24,(uint)auVar23[5],5);
      auVar23 = vpblendw_avx(auVar24,auVar23,8);
    }
    if ((uVar13 & 0x20) != 0) {
      auVar24 = vpshufb_avx(auVar23,___xmm_80800706808005048080030403020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 5),5);
      auVar23 = vpblendw_avx(auVar24,auVar23,8);
    }
    if ((uVar13 & 0x40) != 0) {
      auVar24 = vpshufb_avx(auVar23,___xmm_80800706808005048080050403020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 6),6);
      auVar23 = vpinsrb_avx(auVar24,(uint)auVar23[7],7);
    }
    if ((uVar13 & 0x80) != 0) {
      auVar23 = vpshufb_avx(auVar23,___xmm_80800706808005048006050403020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_4 + uVar14 + 7),7);
    }
  }
  auVar26[1] = DAT_1528e5792;
  auVar26[0] = DAT_1528e5792;
  auVar26[2] = DAT_1528e5792;
  auVar26[3] = DAT_1528e5792;
  auVar26[4] = DAT_1528e5792;
  auVar26[5] = DAT_1528e5792;
  auVar26[6] = DAT_1528e5792;
  auVar26[7] = DAT_1528e5792;
  auVar26[8] = DAT_1528e5792;
  auVar26[9] = DAT_1528e5792;
  auVar26[10] = DAT_1528e5792;
  auVar26[0xb] = DAT_1528e5792;
  auVar26[0xc] = DAT_1528e5792;
  auVar26[0xd] = DAT_1528e5792;
  auVar26[0xe] = DAT_1528e5792;
  auVar26[0xf] = DAT_1528e5792;
  auVar30 = vpmovzxbd_avx2(auVar18 ^ auVar26);
  auVar30 = vcvtdq2ps_avx(auVar30);
  auVar19 = vpmovzxbd_avx2(auVar20 ^ auVar26);
  auVar19 = vcvtdq2ps_avx(auVar19);
  auVar21 = vpmovzxbd_avx2(auVar23 ^ auVar26);
  auVar15._0_4_ = (int)(param_8 * auVar30._0_4_ + param_9 * auVar19._0_4_ + __real_3f000000);
  auVar15._4_4_ = (int)(param_8 * auVar30._4_4_ + param_9 * auVar19._4_4_ + __real_3f000000);
  auVar15._8_4_ = (int)(param_8 * auVar30._8_4_ + param_9 * auVar19._8_4_ + __real_3f000000);
  auVar15._12_4_ = (int)(param_8 * auVar30._12_4_ + param_9 * auVar19._12_4_ + __real_3f000000);
  auVar16._16_4_ = (int)(param_8 * auVar30._16_4_ + param_9 * auVar19._16_4_ + __real_3f000000);
  auVar16._0_16_ = auVar15;
  auVar16._20_4_ = (int)(param_8 * auVar30._20_4_ + param_9 * auVar19._20_4_ + __real_3f000000);
  auVar16._24_4_ = (int)(param_8 * auVar30._24_4_ + param_9 * auVar19._24_4_ + __real_3f000000);
  auVar16._28_4_ = (int)(param_8 * auVar30._28_4_ + param_9 * auVar19._28_4_ + __real_3f000000);
  auVar23 = vpackssdw_avx(auVar15,auVar16._16_16_);
  auVar23 = vpackuswb_avx(auVar23,auVar23);
  auVar23 = auVar23 ^ auVar26;
  if ((uVar13 & 1) == 0) {
    auVar19 = vpmovzxbd_avx2(auVar22 ^ auVar26);
    auVar30 = vcvtdq2ps_avx(auVar21);
  }
  else {
    *(char *)(param_5 + uVar14) = auVar23[0];
    auVar19 = vpmovzxbd_avx2(auVar22 ^ auVar26);
    auVar30 = vcvtdq2ps_avx(auVar21);
  }
  if ((uVar13 & 2) == 0) {
    auVar19 = vcvtdq2ps_avx(auVar19);
  }
  else {
    *(char *)(param_5 + 1 + uVar14) = auVar23[1];
    auVar19 = vcvtdq2ps_avx(auVar19);
  }
  if ((uVar13 & 4) != 0) {
    *(char *)(param_5 + 2 + uVar14) = auVar23[2];
  }
  uVar8 = param_8 * (float)auVar19._28_4_ + param_9 * (float)auVar30._28_4_ + fVar9;
  uVar7 = param_8 * (float)auVar19._24_4_ + param_9 * (float)auVar30._24_4_ + fVar9;
  uVar6 = param_8 * (float)auVar19._20_4_ + param_9 * (float)auVar30._20_4_ + fVar9;
  uVar5 = param_8 * (float)auVar19._16_4_ + param_9 * (float)auVar30._16_4_ + fVar9;
  uVar4 = param_8 * (float)auVar19._12_4_ + param_9 * (float)auVar30._12_4_ + fVar9;
  uVar3 = param_8 * (float)auVar19._8_4_ + param_9 * (float)auVar30._8_4_ + fVar9;
  uVar2 = param_8 * (float)auVar19._4_4_ + param_9 * (float)auVar30._4_4_ + fVar9;
  uVar12 = param_8 * (float)auVar19._0_4_ + param_9 * (float)auVar30._0_4_ + fVar9;
  if ((uVar13 & 8) == 0) {
    auVar17._0_4_ = (int)(float)uVar12;
    auVar17._4_4_ = (int)(float)uVar2;
    auVar17._8_4_ = (int)(float)uVar3;
    auVar17._12_4_ = (int)(float)uVar4;
    auVar17._16_4_ = (int)(float)uVar5;
    auVar17._20_4_ = (int)(float)uVar6;
    auVar17._24_4_ = (int)(float)uVar7;
    auVar17._28_4_ = (int)(float)uVar8;
  }
  else {
    *(char *)(param_5 + 3 + uVar14) = auVar23[3];
    auVar17._0_4_ = (int)(float)uVar12;
    auVar17._4_4_ = (int)(float)uVar2;
    auVar17._8_4_ = (int)(float)uVar3;
    auVar17._12_4_ = (int)(float)uVar4;
    auVar17._16_4_ = (int)(float)uVar5;
    auVar17._20_4_ = (int)(float)uVar6;
    auVar17._24_4_ = (int)(float)uVar7;
    auVar17._28_4_ = (int)(float)uVar8;
  }
  if ((uVar13 & 0x10) != 0) {
    *(char *)(param_5 + 4 + uVar14) = auVar23[4];
  }
  if ((uVar13 & 0x20) == 0) {
    auVar22 = vpackssdw_avx(auVar17._0_16_,auVar17._16_16_);
  }
  else {
    *(char *)(param_5 + 5 + uVar14) = auVar23[5];
    auVar22 = vpackssdw_avx(auVar17._0_16_,auVar17._16_16_);
  }
  if ((uVar13 & 0x40) == 0) {
    auVar22 = vpackuswb_avx(auVar22,auVar22);
  }
  else {
    *(char *)(param_5 + 6 + uVar14) = auVar23[6];
    auVar22 = vpackuswb_avx(auVar22,auVar22);
  }
  if ((char)bVar11 < '\0') {
    *(char *)(param_5 + 7 + uVar14) = auVar23[7];
  }
  auVar22 = auVar22 ^ auVar26;
  if ((uVar13 & 1) != 0) {
    *(char *)(param_6 + uVar14) = auVar22[0];
  }
  if ((uVar13 & 2) != 0) {
    *(char *)(param_6 + 1 + uVar14) = auVar22[1];
  }
  if ((uVar13 & 4) != 0) {
    *(char *)(param_6 + 2 + uVar14) = auVar22[2];
  }
  if ((uVar13 & 8) != 0) {
    *(char *)(param_6 + 3 + uVar14) = auVar22[3];
  }
  if ((uVar13 & 0x10) != 0) {
    *(char *)(param_6 + 4 + uVar14) = auVar22[4];
  }
  if ((uVar13 & 0x20) != 0) {
    *(char *)(param_6 + 5 + uVar14) = auVar22[5];
  }
  if ((uVar13 & 0x40) != 0) {
    *(char *)(param_6 + 6 + uVar14) = auVar22[6];
  }
  if ((char)bVar11 < '\0') {
    *(char *)(param_6 + 7 + uVar14) = auVar22[7];
  }
  return;
}

// InterpolatePositions_avx2 @ 140cacef0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolatePositions_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar29 [32];
  undefined1 auVar10 [32];
  undefined1 auVar14 [32];
  undefined1 auVar19 [32];
  undefined1 auVar24 [32];
  undefined1 auVar28 [32];
  
  auVar26 = ___ymm_0000000700000004000000010000000000000003000000000000000100000000;
  auVar20 = ___ymm_0000000700000005000000070000000500000003000000010000000700000004;
  auVar10 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
  auVar13 = ___ymm_0000000600000003000000000000000000000005000000020000000000000000;
  auVar25 = ___ymm_0000000000000007000000040000000100000000000000060000000300000000;
  uVar5 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar5 = param_4;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar7 = 0x40;
    uVar4 = 0;
    do {
      auVar9 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar17 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar29 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar17);
      auVar12 = vpermps_avx2(auVar25,auVar9);
      auVar29 = vblendps_avx(auVar12,auVar29,0x88);
      auVar12 = vpermps_avx2(auVar20,auVar17);
      auVar16 = vpermps_avx2(auVar13,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar12 = vblendps_avx(auVar16,auVar12,0x13);
      auVar14 = vperm2f128_avx(auVar29,auVar12,0x31);
      auVar9 = vblendps_avx(auVar17,auVar9,0x24);
      auVar9 = vpermps_avx2(auVar10,auVar9);
      auVar17 = vpermps_avx2(auVar26,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar16 = vblendps_avx(auVar9,auVar17,0xe0);
      auVar9 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7);
      auVar17 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7);
      auVar19 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar17);
      auVar23 = vpermps_avx2(auVar25,auVar9);
      auVar19 = vblendps_avx(auVar23,auVar19,0x88);
      auVar23 = vpermps_avx2(auVar20,auVar17);
      auVar24 = vpermps_avx2(auVar13,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar23 = vblendps_avx(auVar24,auVar23,0x13);
      auVar24 = vperm2f128_avx(auVar19,auVar23,0x31);
      auVar9 = vblendps_avx(auVar17,auVar9,0x24);
      auVar9 = vpermps_avx2(auVar10,auVar9);
      auVar17 = vpermps_avx2(auVar26,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar9 = vblendps_avx(auVar9,auVar17,0xe0);
      auVar27._0_4_ = param_5 * auVar29._0_4_ + auVar19._0_4_ * param_6;
      auVar27._4_4_ = param_5 * auVar29._4_4_ + auVar19._4_4_ * param_6;
      auVar27._8_4_ = param_5 * auVar29._8_4_ + auVar19._8_4_ * param_6;
      auVar27._12_4_ = param_5 * auVar29._12_4_ + auVar19._12_4_ * param_6;
      auVar28._16_4_ = param_5 * auVar12._0_4_ + auVar23._0_4_ * param_6;
      auVar28._0_16_ = auVar27;
      auVar28._20_4_ = param_5 * auVar12._4_4_ + auVar23._4_4_ * param_6;
      auVar28._24_4_ = param_5 * auVar12._8_4_ + auVar23._8_4_ * param_6;
      auVar28._28_4_ = param_5 * auVar12._12_4_ + auVar23._12_4_ * param_6;
      auVar18._0_4_ = param_5 * auVar14._0_4_ + param_6 * auVar24._0_4_;
      auVar18._4_4_ = param_5 * auVar14._4_4_ + param_6 * auVar24._4_4_;
      auVar18._8_4_ = param_5 * auVar14._8_4_ + param_6 * auVar24._8_4_;
      auVar18._12_4_ = param_5 * auVar14._12_4_ + param_6 * auVar24._12_4_;
      auVar19._16_4_ = param_5 * auVar14._16_4_ + param_6 * auVar24._16_4_;
      auVar19._0_16_ = auVar18;
      auVar19._20_4_ = param_5 * auVar14._20_4_ + param_6 * auVar24._20_4_;
      auVar19._24_4_ = param_5 * auVar14._24_4_ + param_6 * auVar24._24_4_;
      auVar19._28_4_ = param_5 * auVar14._28_4_ + param_6 * auVar24._28_4_;
      auVar12._0_4_ = param_5 * auVar16._0_4_ + param_6 * auVar9._0_4_;
      auVar12._4_4_ = param_5 * auVar16._4_4_ + param_6 * auVar9._4_4_;
      auVar12._8_4_ = param_5 * auVar16._8_4_ + param_6 * auVar9._8_4_;
      auVar12._12_4_ = param_5 * auVar16._12_4_ + param_6 * auVar9._12_4_;
      auVar12._16_4_ = param_5 * auVar16._16_4_ + param_6 * auVar9._16_4_;
      auVar12._20_4_ = param_5 * auVar16._20_4_ + param_6 * auVar9._20_4_;
      auVar12._24_4_ = param_5 * auVar16._24_4_ + param_6 * auVar9._24_4_;
      auVar12._28_4_ = param_5 * auVar16._28_4_ + param_6 * auVar9._28_4_;
      auVar9._16_16_ = auVar18;
      auVar9._0_16_ = auVar27;
      auVar9 = vshufpd_avx(auVar28,auVar9,2);
      auVar17 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar9);
      auVar9 = vpermpd_avx2(auVar19,0xe9);
      auVar29 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar12);
      auVar9 = vblendps_avx(auVar29,auVar9,7);
      auVar29._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar29._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar29 = vpermps_avx2(auVar29,auVar9);
      auVar17 = vblendps_avx(auVar17,auVar29,0xa4);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7) = auVar17;
      auVar17 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar9);
      auVar9 = vshufpd_avx(auVar28,auVar28,1);
      auVar9 = vblendps_avx(auVar17,auVar9,0x92);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7) = auVar9;
      auVar17._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar17._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar17 = vpermps_avx2(auVar17,auVar19);
      auVar9 = vpermpd_avx2(auVar28,0xff);
      auVar9 = vblendps_avx(auVar17,auVar9,3);
      auVar9 = vblendps_avx(auVar9,auVar12,0xe0);
      auVar9 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                            auVar9);
      *(undefined1 (*) [32])(param_3 + lVar7) = auVar9;
      lVar7 = lVar7 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar5 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar25._4_4_ = uVar4;
  auVar25._0_4_ = uVar4;
  auVar25._8_4_ = uVar4;
  auVar25._12_4_ = uVar4;
  auVar25._16_4_ = uVar4;
  auVar25._20_4_ = uVar4;
  auVar25._24_4_ = uVar4;
  auVar25._28_4_ = uVar4;
  auVar25 = vpor_avx2(auVar25,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar13._4_4_ = param_4;
  auVar13._0_4_ = param_4;
  auVar13._8_4_ = param_4;
  auVar13._12_4_ = param_4;
  auVar13._16_4_ = param_4;
  auVar13._20_4_ = param_4;
  auVar13._24_4_ = param_4;
  auVar13._28_4_ = param_4;
  auVar25 = vpcmpgtd_avx2(auVar13,auVar25);
  uVar6 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar6 * 0xc);
  uVar5 = vmovmskps_avx(auVar25);
  if (uVar5 == 0xff) {
    auVar25 = pauVar1[1];
    auVar13 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar25);
    auVar10 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar1);
    auVar13 = vblendps_avx(auVar10,auVar13,0x88);
    auVar10 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar25);
    auVar20 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar1[2]);
    auVar10 = vblendps_avx(auVar20,auVar10,0x13);
    auVar16._16_16_ = auVar10._0_16_;
    auVar16._0_16_ = auVar13._0_16_;
    auVar17 = vperm2f128_avx(auVar13,auVar10,0x31);
    auVar25 = vblendps_avx(auVar25,*pauVar1,0x24);
    auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar25);
    auVar13 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           pauVar1[2]);
    auVar20 = vblendps_avx(auVar25,auVar13,0xe0);
    auVar25 = *(undefined1 (*) [32])(param_2 + uVar6 * 0xc);
    auVar13 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar6 * 0xc);
    auVar10 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar6 * 0xc);
    auVar26 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar13);
    auVar9 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          auVar25);
    auVar26 = vblendps_avx(auVar9,auVar26,0x88);
    auVar9 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                          auVar13);
    auVar29 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar10);
    auVar9 = vblendps_avx(auVar29,auVar9,0x13);
    auVar23._16_16_ = auVar9._0_16_;
    auVar23._0_16_ = auVar26._0_16_;
    auVar26 = vperm2f128_avx(auVar26,auVar9,0x31);
    auVar25 = vblendps_avx(auVar13,auVar25,0x24);
    auVar25 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar25);
    auVar13 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           auVar10);
    auVar25 = vblendps_avx(auVar25,auVar13,0xe0);
  }
  else {
    auVar16 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
    auVar17 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
    auVar20 = vgatherdps(ZEXT832(0),auVar25);
    auVar23 = vgatherdps(ZEXT832(0),auVar25);
    auVar26 = vgatherdps(ZEXT832(0),auVar25);
    auVar25 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar25);
  }
  auVar22._0_4_ = param_5 * auVar16._0_4_ + param_6 * auVar23._0_4_;
  auVar22._4_4_ = param_5 * auVar16._4_4_ + param_6 * auVar23._4_4_;
  auVar22._8_4_ = param_5 * auVar16._8_4_ + param_6 * auVar23._8_4_;
  auVar22._12_4_ = param_5 * auVar16._12_4_ + param_6 * auVar23._12_4_;
  auVar24._16_4_ = param_5 * auVar16._16_4_ + param_6 * auVar23._16_4_;
  auVar24._0_16_ = auVar22;
  auVar24._20_4_ = param_5 * auVar16._20_4_ + param_6 * auVar23._20_4_;
  auVar24._24_4_ = param_5 * auVar16._24_4_ + param_6 * auVar23._24_4_;
  auVar24._28_4_ = param_5 * auVar16._28_4_ + param_6 * auVar23._28_4_;
  auVar11._0_4_ = param_5 * auVar17._0_4_ + auVar26._0_4_ * param_6;
  auVar11._4_4_ = param_5 * auVar17._4_4_ + auVar26._4_4_ * param_6;
  auVar11._8_4_ = param_5 * auVar17._8_4_ + auVar26._8_4_ * param_6;
  auVar11._12_4_ = param_5 * auVar17._12_4_ + auVar26._12_4_ * param_6;
  auVar14._16_4_ = param_5 * auVar17._16_4_ + auVar26._16_4_ * param_6;
  auVar14._0_16_ = auVar11;
  auVar14._20_4_ = param_5 * auVar17._20_4_ + auVar26._20_4_ * param_6;
  auVar14._24_4_ = param_5 * auVar17._24_4_ + auVar26._24_4_ * param_6;
  auVar14._28_4_ = param_5 * auVar17._28_4_ + auVar26._28_4_ * param_6;
  auVar8._0_4_ = param_5 * auVar20._0_4_ + param_6 * auVar25._0_4_;
  auVar8._4_4_ = param_5 * auVar20._4_4_ + param_6 * auVar25._4_4_;
  auVar8._8_4_ = param_5 * auVar20._8_4_ + param_6 * auVar25._8_4_;
  auVar8._12_4_ = param_5 * auVar20._12_4_ + param_6 * auVar25._12_4_;
  auVar10._16_4_ = param_5 * auVar20._16_4_ + param_6 * auVar25._16_4_;
  auVar10._0_16_ = auVar8;
  auVar10._20_4_ = param_5 * auVar20._20_4_ + param_6 * auVar25._20_4_;
  auVar10._24_4_ = param_5 * auVar20._24_4_ + param_6 * auVar25._24_4_;
  auVar10._28_4_ = param_5 * auVar20._28_4_ + param_6 * auVar25._28_4_;
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar6 * 0xc);
  cVar3 = (char)uVar5;
  auVar18 = auVar24._16_16_;
  if (cVar3 == -1) {
    auVar20._16_16_ = auVar11;
    auVar20._0_16_ = auVar22;
    auVar13 = vshufpd_avx(auVar24,auVar20,2);
    auVar20 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar10);
    auVar25 = vpermpd_avx2(auVar14,0xe9);
    auVar25 = vblendps_avx(auVar20,auVar25,7);
    auVar21._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar21._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar20 = vpermps_avx2(auVar21,auVar25);
    auVar13 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar13);
    auVar13 = vblendps_avx(auVar13,auVar20,0xa4);
    *pauVar1 = auVar13;
    auVar13 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar25);
    auVar25 = vshufpd_avx(auVar24,auVar24,1);
    auVar25 = vblendps_avx(auVar13,auVar25,0x92);
    pauVar1[1] = auVar25;
    auVar26._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar26._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar13 = vpermps_avx2(auVar26,auVar14);
    auVar25 = vpermpd_avx2(auVar24,0xff);
    auVar25 = vblendps_avx(auVar13,auVar25,3);
    auVar25 = vblendps_avx(auVar25,auVar10,0xe0);
    auVar25 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar25);
    pauVar1[2] = auVar25;
  }
  else {
    auVar15 = auVar14._16_16_;
    auVar27 = auVar10._16_16_;
    if ((uVar5 & 1) != 0) {
      *(float *)*pauVar1 = auVar22._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar22,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar22,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar22,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x10) = auVar24._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar18,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar18,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar18,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(*pauVar1 + 4) = auVar11._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar11,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar11,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar11,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x14) = auVar14._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar15,1);
      *(undefined4 *)pauVar1[2] = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar15,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar15,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(*pauVar1 + 8) = auVar8._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar8,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar8,2);
      *(undefined4 *)pauVar1[1] = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar8,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x18) = auVar10._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar27,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar27,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar27,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
    }
  }
  return;
}

// InterpolateMotionVectors_avx2 @ 140cad650

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateMotionVectors_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6,float param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar10 [32];
  undefined1 auVar12 [32];
  undefined1 auVar15 [32];
  undefined1 auVar18 [32];
  undefined1 auVar22 [32];
  
  auVar26 = ___ymm_0000000700000004000000010000000000000003000000000000000100000000;
  auVar12 = ___ymm_0000000700000005000000070000000500000003000000010000000700000004;
  auVar16 = ___ymm_0000000000000000000000000000000600000003000000000000000500000002;
  auVar11 = ___ymm_0000000600000003000000000000000000000005000000020000000000000000;
  uVar5 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar5 = param_4;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    lVar7 = 0x40;
    uVar4 = 0;
    do {
      auVar29 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar28 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar25 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar28);
      auVar15 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar29);
      auVar25 = vblendps_avx(auVar15,auVar25,0x88);
      auVar15 = vpermps_avx2(auVar12,auVar28);
      auVar17 = vpermps_avx2(auVar11,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar15 = vblendps_avx(auVar17,auVar15,0x13);
      auVar23 = vperm2f128_avx(auVar25,auVar15,0x31);
      auVar29 = vblendps_avx(auVar28,auVar29,0x24);
      auVar29 = vpermps_avx2(auVar16,auVar29);
      auVar28 = vpermps_avx2(auVar26,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar17 = vblendps_avx(auVar29,auVar28,0xe0);
      auVar29 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7);
      auVar28 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7);
      auVar10 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar28);
      auVar21 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar29);
      auVar10 = vblendps_avx(auVar21,auVar10,0x88);
      auVar21 = vpermps_avx2(auVar12,auVar28);
      auVar18 = vpermps_avx2(auVar11,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar21 = vblendps_avx(auVar18,auVar21,0x13);
      auVar18 = vperm2f128_avx(auVar10,auVar21,0x31);
      auVar29 = vblendps_avx(auVar28,auVar29,0x24);
      auVar29 = vpermps_avx2(auVar16,auVar29);
      auVar28 = vpermps_avx2(auVar26,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar29 = vblendps_avx(auVar29,auVar28,0xe0);
      auVar8._0_4_ = param_7 * (param_5 * auVar25._0_4_ + param_6 * auVar10._0_4_);
      auVar8._4_4_ = param_7 * (param_5 * auVar25._4_4_ + param_6 * auVar10._4_4_);
      auVar8._8_4_ = param_7 * (param_5 * auVar25._8_4_ + param_6 * auVar10._8_4_);
      auVar8._12_4_ = param_7 * (param_5 * auVar25._12_4_ + param_6 * auVar10._12_4_);
      auVar10._16_4_ = param_7 * (param_5 * auVar15._0_4_ + param_6 * auVar21._0_4_);
      auVar10._0_16_ = auVar8;
      auVar10._20_4_ = param_7 * (param_5 * auVar15._4_4_ + param_6 * auVar21._4_4_);
      auVar10._24_4_ = param_7 * (param_5 * auVar15._8_4_ + param_6 * auVar21._8_4_);
      auVar10._28_4_ = param_7 * (param_5 * auVar15._12_4_ + param_6 * auVar21._12_4_);
      auVar13._0_4_ = param_7 * (param_5 * auVar23._0_4_ + param_6 * auVar18._0_4_);
      auVar13._4_4_ = param_7 * (param_5 * auVar23._4_4_ + param_6 * auVar18._4_4_);
      auVar13._8_4_ = param_7 * (param_5 * auVar23._8_4_ + param_6 * auVar18._8_4_);
      auVar13._12_4_ = param_7 * (param_5 * auVar23._12_4_ + param_6 * auVar18._12_4_);
      auVar15._16_4_ = param_7 * (param_5 * auVar23._16_4_ + param_6 * auVar18._16_4_);
      auVar15._0_16_ = auVar13;
      auVar15._20_4_ = param_7 * (param_5 * auVar23._20_4_ + param_6 * auVar18._20_4_);
      auVar15._24_4_ = param_7 * (param_5 * auVar23._24_4_ + param_6 * auVar18._24_4_);
      auVar15._28_4_ = param_7 * (param_5 * auVar23._28_4_ + param_6 * auVar18._28_4_);
      auVar21._0_4_ = param_7 * (param_5 * auVar17._0_4_ + param_6 * auVar29._0_4_);
      auVar21._4_4_ = param_7 * (param_5 * auVar17._4_4_ + param_6 * auVar29._4_4_);
      auVar21._8_4_ = param_7 * (param_5 * auVar17._8_4_ + param_6 * auVar29._8_4_);
      auVar21._12_4_ = param_7 * (param_5 * auVar17._12_4_ + param_6 * auVar29._12_4_);
      auVar21._16_4_ = param_7 * (param_5 * auVar17._16_4_ + param_6 * auVar29._16_4_);
      auVar21._20_4_ = param_7 * (param_5 * auVar17._20_4_ + param_6 * auVar29._20_4_);
      auVar21._24_4_ = param_7 * (param_5 * auVar17._24_4_ + param_6 * auVar29._24_4_);
      auVar21._28_4_ = param_7 * (param_5 * auVar17._28_4_ + param_6 * auVar29._28_4_);
      auVar29._16_16_ = auVar13;
      auVar29._0_16_ = auVar8;
      auVar29 = vshufpd_avx(auVar10,auVar29,2);
      auVar28 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar29);
      auVar29 = vpermpd_avx2(auVar15,0xe9);
      auVar25 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar21);
      auVar29 = vblendps_avx(auVar25,auVar29,7);
      auVar25._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar25._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar25 = vpermps_avx2(auVar25,auVar29);
      auVar28 = vblendps_avx(auVar28,auVar25,0xa4);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7) = auVar28;
      auVar28 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar29);
      auVar29 = vshufpd_avx(auVar10,auVar10,1);
      auVar29 = vblendps_avx(auVar28,auVar29,0x92);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7) = auVar29;
      auVar28._16_16_ = ___xmm_00000006000000050000000000000007;
      auVar28._0_16_ = ___xmm_00000006000000050000000000000007;
      auVar28 = vpermps_avx2(auVar28,auVar15);
      auVar29 = vpermpd_avx2(auVar10,0xff);
      auVar29 = vblendps_avx(auVar28,auVar29,3);
      auVar29 = vblendps_avx(auVar29,auVar21,0xe0);
      auVar29 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar29);
      *(undefined1 (*) [32])(param_3 + lVar7) = auVar29;
      lVar7 = lVar7 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar5 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar11._4_4_ = uVar4;
  auVar11._0_4_ = uVar4;
  auVar11._8_4_ = uVar4;
  auVar11._12_4_ = uVar4;
  auVar11._16_4_ = uVar4;
  auVar11._20_4_ = uVar4;
  auVar11._24_4_ = uVar4;
  auVar11._28_4_ = uVar4;
  auVar11 = vpor_avx2(auVar11,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar16._4_4_ = param_4;
  auVar16._0_4_ = param_4;
  auVar16._8_4_ = param_4;
  auVar16._12_4_ = param_4;
  auVar16._16_4_ = param_4;
  auVar16._20_4_ = param_4;
  auVar16._24_4_ = param_4;
  auVar16._28_4_ = param_4;
  auVar11 = vpcmpgtd_avx2(auVar16,auVar11);
  uVar6 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar6 * 0xc);
  uVar5 = vmovmskps_avx(auVar11);
  if (uVar5 == 0xff) {
    auVar11 = pauVar1[1];
    auVar16 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar11);
    auVar12 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           *pauVar1);
    auVar16 = vblendps_avx(auVar12,auVar16,0x88);
    auVar12 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar11);
    auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           pauVar1[2]);
    auVar12 = vblendps_avx(auVar26,auVar12,0x13);
    auVar23._16_16_ = auVar12._0_16_;
    auVar23._0_16_ = auVar16._0_16_;
    auVar25 = vperm2f128_avx(auVar16,auVar12,0x31);
    auVar11 = vblendps_avx(auVar11,*pauVar1,0x24);
    auVar11 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar11);
    auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           pauVar1[2]);
    auVar26 = vblendps_avx(auVar11,auVar16,0xe0);
    auVar11 = *(undefined1 (*) [32])(param_2 + uVar6 * 0xc);
    auVar16 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar6 * 0xc);
    auVar12 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar6 * 0xc);
    auVar29 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000,
                           auVar16);
    auVar28 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                           auVar11);
    auVar29 = vblendps_avx(auVar28,auVar29,0x88);
    auVar28 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004,
                           auVar16);
    auVar15 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                           auVar12);
    auVar28 = vblendps_avx(auVar15,auVar28,0x13);
    auVar17._16_16_ = auVar28._0_16_;
    auVar17._0_16_ = auVar29._0_16_;
    auVar29 = vperm2f128_avx(auVar29,auVar28,0x31);
    auVar11 = vblendps_avx(auVar16,auVar11,0x24);
    auVar11 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                           auVar11);
    auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000,
                           auVar12);
    auVar11 = vblendps_avx(auVar11,auVar16,0xe0);
  }
  else {
    auVar23 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar11);
    auVar25 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar11);
    auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar11);
    auVar17 = vgatherdps(ZEXT832(0),auVar11);
    auVar29 = vgatherdps(ZEXT832(0),auVar11);
    auVar11 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar11);
  }
  auVar20._0_4_ = param_7 * (param_5 * auVar23._0_4_ + param_6 * auVar17._0_4_);
  auVar20._4_4_ = param_7 * (param_5 * auVar23._4_4_ + param_6 * auVar17._4_4_);
  auVar20._8_4_ = param_7 * (param_5 * auVar23._8_4_ + param_6 * auVar17._8_4_);
  auVar20._12_4_ = param_7 * (param_5 * auVar23._12_4_ + param_6 * auVar17._12_4_);
  auVar22._16_4_ = param_7 * (param_5 * auVar23._16_4_ + param_6 * auVar17._16_4_);
  auVar22._0_16_ = auVar20;
  auVar22._20_4_ = param_7 * (param_5 * auVar23._20_4_ + param_6 * auVar17._20_4_);
  auVar22._24_4_ = param_7 * (param_5 * auVar23._24_4_ + param_6 * auVar17._24_4_);
  auVar22._28_4_ = param_7 * (param_5 * auVar23._28_4_ + param_6 * auVar17._28_4_);
  auVar14._0_4_ = param_7 * (param_5 * auVar25._0_4_ + param_6 * auVar29._0_4_);
  auVar14._4_4_ = param_7 * (param_5 * auVar25._4_4_ + param_6 * auVar29._4_4_);
  auVar14._8_4_ = param_7 * (param_5 * auVar25._8_4_ + param_6 * auVar29._8_4_);
  auVar14._12_4_ = param_7 * (param_5 * auVar25._12_4_ + param_6 * auVar29._12_4_);
  auVar18._16_4_ = param_7 * (param_5 * auVar25._16_4_ + param_6 * auVar29._16_4_);
  auVar18._0_16_ = auVar14;
  auVar18._20_4_ = param_7 * (param_5 * auVar25._20_4_ + param_6 * auVar29._20_4_);
  auVar18._24_4_ = param_7 * (param_5 * auVar25._24_4_ + param_6 * auVar29._24_4_);
  auVar18._28_4_ = param_7 * (param_5 * auVar25._28_4_ + param_6 * auVar29._28_4_);
  auVar9._0_4_ = param_7 * (param_5 * auVar26._0_4_ + param_6 * auVar11._0_4_);
  auVar9._4_4_ = param_7 * (param_5 * auVar26._4_4_ + param_6 * auVar11._4_4_);
  auVar9._8_4_ = param_7 * (param_5 * auVar26._8_4_ + param_6 * auVar11._8_4_);
  auVar9._12_4_ = param_7 * (param_5 * auVar26._12_4_ + param_6 * auVar11._12_4_);
  auVar12._16_4_ = param_7 * (param_5 * auVar26._16_4_ + param_6 * auVar11._16_4_);
  auVar12._0_16_ = auVar9;
  auVar12._20_4_ = param_7 * (param_5 * auVar26._20_4_ + param_6 * auVar11._20_4_);
  auVar12._24_4_ = param_7 * (param_5 * auVar26._24_4_ + param_6 * auVar11._24_4_);
  auVar12._28_4_ = param_7 * (param_5 * auVar26._28_4_ + param_6 * auVar11._28_4_);
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar6 * 0xc);
  cVar3 = (char)uVar5;
  auVar8 = auVar22._16_16_;
  if (cVar3 == -1) {
    auVar26._16_16_ = auVar14;
    auVar26._0_16_ = auVar20;
    auVar16 = vshufpd_avx(auVar22,auVar26,2);
    auVar26 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar12);
    auVar11 = vpermpd_avx2(auVar18,0xe9);
    auVar11 = vblendps_avx(auVar26,auVar11,7);
    auVar27._16_16_ = ___xmm_00000000000000030000000400000000;
    auVar27._0_16_ = ___xmm_00000000000000030000000400000000;
    auVar26 = vpermps_avx2(auVar27,auVar11);
    auVar16 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar16);
    auVar16 = vblendps_avx(auVar16,auVar26,0xa4);
    *pauVar1 = auVar16;
    auVar16 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar11);
    auVar11 = vshufpd_avx(auVar22,auVar22,1);
    auVar11 = vblendps_avx(auVar16,auVar11,0x92);
    pauVar1[1] = auVar11;
    auVar24._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar24._0_16_ = ___xmm_00000006000000050000000000000007;
    auVar16 = vpermps_avx2(auVar24,auVar18);
    auVar11 = vpermpd_avx2(auVar22,0xff);
    auVar11 = vblendps_avx(auVar16,auVar11,3);
    auVar11 = vblendps_avx(auVar11,auVar12,0xe0);
    auVar11 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar11);
    pauVar1[2] = auVar11;
  }
  else {
    auVar19 = auVar18._16_16_;
    auVar13 = auVar12._16_16_;
    if ((uVar5 & 1) != 0) {
      *(float *)*pauVar1 = auVar20._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar20,1);
      *(undefined4 *)(*pauVar1 + 0xc) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar20,2);
      *(undefined4 *)(*pauVar1 + 0x18) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar20,3);
      *(undefined4 *)(pauVar1[1] + 4) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x10) = auVar22._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar8,1);
      *(undefined4 *)(pauVar1[1] + 0x1c) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar8,2);
      *(undefined4 *)(pauVar1[2] + 8) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar8,3);
      *(undefined4 *)(pauVar1[2] + 0x14) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(*pauVar1 + 4) = auVar14._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar14,1);
      *(undefined4 *)(*pauVar1 + 0x10) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar14,2);
      *(undefined4 *)(*pauVar1 + 0x1c) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar14,3);
      *(undefined4 *)(pauVar1[1] + 8) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x14) = auVar18._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar19,1);
      *(undefined4 *)pauVar1[2] = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar19,2);
      *(undefined4 *)(pauVar1[2] + 0xc) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar19,3);
      *(undefined4 *)(pauVar1[2] + 0x18) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(*pauVar1 + 8) = auVar9._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar9,1);
      *(undefined4 *)(*pauVar1 + 0x14) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar9,2);
      *(undefined4 *)pauVar1[1] = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar9,3);
      *(undefined4 *)(pauVar1[1] + 0xc) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(pauVar1[1] + 0x18) = auVar12._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar13,1);
      *(undefined4 *)(pauVar1[2] + 4) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar13,2);
      *(undefined4 *)(pauVar1[2] + 0x10) = uVar2;
    }
    if (cVar3 < '\0') {
      uVar2 = vextractps_avx(auVar13,3);
      *(undefined4 *)(pauVar1[2] + 0x1c) = uVar2;
    }
  }
  return;
}

// InterpolateUVs_avx2 @ 140cadde0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateUVs_avx2(longlong param_1,longlong param_2,longlong param_3,uint param_4,
                        float param_5,float param_6)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar9 [32];
  
  uVar5 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar5 = param_4;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar3 = 0;
    do {
      auVar13 = *(undefined1 (*) [32])(param_1 + uVar3 * 8);
      auVar14 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar3 * 8);
      auVar15 = vshufps_avx(auVar13,auVar14,0x88);
      auVar11 = vpermpd_avx2(auVar15,0xd8);
      auVar13 = vshufps_avx(auVar13,auVar14,0xdd);
      auVar12 = vpermpd_avx2(auVar13,0xd8);
      auVar13 = *(undefined1 (*) [32])(param_2 + uVar3 * 8);
      auVar14 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar3 * 8);
      auVar15 = vshufps_avx(auVar13,auVar14,0x88);
      auVar15 = vpermpd_avx2(auVar15,0xd8);
      auVar13 = vshufps_avx(auVar13,auVar14,0xdd);
      auVar13 = vpermpd_avx2(auVar13,0xd8);
      auVar16._0_4_ = param_5 * auVar11._0_4_ + auVar15._0_4_ * param_6;
      auVar16._4_4_ = param_5 * auVar11._4_4_ + auVar15._4_4_ * param_6;
      auVar16._8_4_ = param_5 * auVar11._8_4_ + auVar15._8_4_ * param_6;
      auVar16._12_4_ = param_5 * auVar11._12_4_ + auVar15._12_4_ * param_6;
      auVar16._16_4_ = param_5 * auVar11._16_4_ + auVar15._16_4_ * param_6;
      auVar16._20_4_ = param_5 * auVar11._20_4_ + auVar15._20_4_ * param_6;
      auVar16._24_4_ = param_5 * auVar11._24_4_ + auVar15._24_4_ * param_6;
      auVar16._28_4_ = param_5 * auVar11._28_4_ + auVar15._28_4_ * param_6;
      auVar14._0_4_ = param_5 * auVar12._0_4_ + param_6 * auVar13._0_4_;
      auVar14._4_4_ = param_5 * auVar12._4_4_ + param_6 * auVar13._4_4_;
      auVar14._8_4_ = param_5 * auVar12._8_4_ + param_6 * auVar13._8_4_;
      auVar14._12_4_ = param_5 * auVar12._12_4_ + param_6 * auVar13._12_4_;
      auVar14._16_4_ = param_5 * auVar12._16_4_ + param_6 * auVar13._16_4_;
      auVar14._20_4_ = param_5 * auVar12._20_4_ + param_6 * auVar13._20_4_;
      auVar14._24_4_ = param_5 * auVar12._24_4_ + param_6 * auVar13._24_4_;
      auVar14._28_4_ = param_5 * auVar12._28_4_ + param_6 * auVar13._28_4_;
      auVar13 = vunpckhps_avx(auVar16,auVar14);
      auVar14 = vunpcklps_avx(auVar16,auVar14);
      auVar15 = vperm2f128_avx(auVar14,auVar13,0x20);
      *(undefined1 (*) [32])(param_3 + uVar3 * 8) = auVar15;
      auVar13 = vperm2f128_avx(auVar14,auVar13,0x31);
      *(undefined1 (*) [32])(param_3 + 0x20 + uVar3 * 8) = auVar13;
      uVar3 = uVar3 + 8;
    } while ((int)uVar3 < (int)(uVar5 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar3) {
      return;
    }
  }
  uVar2 = (undefined4)uVar3;
  auVar13._4_4_ = uVar2;
  auVar13._0_4_ = uVar2;
  auVar13._8_4_ = uVar2;
  auVar13._12_4_ = uVar2;
  auVar13._16_4_ = uVar2;
  auVar13._20_4_ = uVar2;
  auVar13._24_4_ = uVar2;
  auVar13._28_4_ = uVar2;
  auVar13 = vpor_avx2(auVar13,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar15._4_4_ = param_4;
  auVar15._0_4_ = param_4;
  auVar15._8_4_ = param_4;
  auVar15._12_4_ = param_4;
  auVar15._16_4_ = param_4;
  auVar15._20_4_ = param_4;
  auVar15._24_4_ = param_4;
  auVar15._28_4_ = param_4;
  auVar13 = vpcmpgtd_avx2(auVar15,auVar13);
  uVar3 = uVar3 & 0xffffffff;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar3 * 8);
  uVar5 = vmovmskps_avx(auVar13);
  if (uVar5 == 0xff) {
    auVar13 = *pauVar1;
    auVar14 = pauVar1[1];
    auVar15 = vshufps_avx(auVar13,auVar14,0x88);
    auVar11 = vpermpd_avx2(auVar15,0xd8);
    auVar13 = vshufps_avx(auVar13,auVar14,0xdd);
    auVar12 = vpermpd_avx2(auVar13,0xd8);
    auVar13 = *(undefined1 (*) [32])(param_2 + uVar3 * 8);
    auVar14 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar3 * 8);
    auVar15 = vshufps_avx(auVar13,auVar14,0x88);
    auVar15 = vpermpd_avx2(auVar15,0xd8);
    auVar13 = vshufps_avx(auVar13,auVar14,0xdd);
    auVar13 = vpermpd_avx2(auVar13,0xd8);
  }
  else {
    auVar11 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar13);
    auVar12 = vgatherdps(ZEXT832(0),auVar13);
    auVar15 = vgatherdps(ZEXT832(0),auVar13);
    auVar13 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar13);
  }
  auVar8._0_4_ = param_5 * auVar11._0_4_ + param_6 * auVar15._0_4_;
  auVar8._4_4_ = param_5 * auVar11._4_4_ + param_6 * auVar15._4_4_;
  auVar8._8_4_ = param_5 * auVar11._8_4_ + param_6 * auVar15._8_4_;
  auVar8._12_4_ = param_5 * auVar11._12_4_ + param_6 * auVar15._12_4_;
  auVar9._16_4_ = param_5 * auVar11._16_4_ + param_6 * auVar15._16_4_;
  auVar9._0_16_ = auVar8;
  auVar9._20_4_ = param_5 * auVar11._20_4_ + param_6 * auVar15._20_4_;
  auVar9._24_4_ = param_5 * auVar11._24_4_ + param_6 * auVar15._24_4_;
  auVar9._28_4_ = param_5 * auVar11._28_4_ + param_6 * auVar15._28_4_;
  auVar6._0_4_ = param_5 * auVar12._0_4_ + param_6 * auVar13._0_4_;
  auVar6._4_4_ = param_5 * auVar12._4_4_ + param_6 * auVar13._4_4_;
  auVar6._8_4_ = param_5 * auVar12._8_4_ + param_6 * auVar13._8_4_;
  auVar6._12_4_ = param_5 * auVar12._12_4_ + param_6 * auVar13._12_4_;
  auVar11._16_4_ = param_5 * auVar12._16_4_ + param_6 * auVar13._16_4_;
  auVar11._0_16_ = auVar6;
  auVar11._20_4_ = param_5 * auVar12._20_4_ + param_6 * auVar13._20_4_;
  auVar11._24_4_ = param_5 * auVar12._24_4_ + param_6 * auVar13._24_4_;
  auVar11._28_4_ = param_5 * auVar12._28_4_ + param_6 * auVar13._28_4_;
  cVar4 = (char)uVar5;
  if (cVar4 == -1) {
    auVar13 = vunpckhps_avx(auVar9,auVar11);
    auVar14 = vunpcklps_avx(auVar9,auVar11);
    auVar15 = vperm2f128_avx(auVar14,auVar13,0x31);
    auVar13 = vperm2f128_avx(auVar14,auVar13,0x20);
    *(undefined1 (*) [32])(param_3 + uVar3 * 8) = auVar13;
    *(undefined1 (*) [32])(param_3 + 0x20 + uVar3 * 8) = auVar15;
  }
  else {
    auVar10 = auVar9._16_16_;
    auVar7 = auVar11._16_16_;
    if ((uVar5 & 1) != 0) {
      *(float *)(param_3 + uVar3 * 8) = auVar8._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar8,1);
      *(undefined4 *)(param_3 + 8 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar8,2);
      *(undefined4 *)(param_3 + 0x10 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar8,3);
      *(undefined4 *)(param_3 + 0x18 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_3 + 0x20 + uVar3 * 8) = auVar9._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar10,1);
      *(undefined4 *)(param_3 + 0x28 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar10,2);
      *(undefined4 *)(param_3 + 0x30 + uVar3 * 8) = uVar2;
    }
    if (cVar4 < '\0') {
      uVar2 = vextractps_avx(auVar10,3);
      *(undefined4 *)(param_3 + 0x38 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 1) != 0) {
      *(float *)(param_3 + 4 + uVar3 * 8) = auVar6._0_4_;
    }
    if ((uVar5 & 2) != 0) {
      uVar2 = vextractps_avx(auVar6,1);
      *(undefined4 *)(param_3 + 0xc + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 4) != 0) {
      uVar2 = vextractps_avx(auVar6,2);
      *(undefined4 *)(param_3 + 0x14 + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 8) != 0) {
      uVar2 = vextractps_avx(auVar6,3);
      *(undefined4 *)(param_3 + 0x1c + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 0x10) != 0) {
      *(float *)(param_3 + 0x24 + uVar3 * 8) = auVar11._16_4_;
    }
    if ((uVar5 & 0x20) != 0) {
      uVar2 = vextractps_avx(auVar7,1);
      *(undefined4 *)(param_3 + 0x2c + uVar3 * 8) = uVar2;
    }
    if ((uVar5 & 0x40) != 0) {
      uVar2 = vextractps_avx(auVar7,2);
      *(undefined4 *)(param_3 + 0x34 + uVar3 * 8) = uVar2;
    }
    if (cVar4 < '\0') {
      uVar2 = vextractps_avx(auVar7,3);
      *(undefined4 *)(param_3 + 0x3c + uVar3 * 8) = uVar2;
    }
  }
  return;
}

// InterpolateColors_avx2 @ 140cae1a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateColors_avx2
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               float param_6)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar10 [32];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  
  fVar4 = __real_3f000000;
  uVar8 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar8 = param_4;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    uVar6 = 0;
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulonglong *)(param_1 + uVar6);
      auVar12 = vpmovzxbd_avx2(auVar2);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = *(ulonglong *)(param_2 + uVar6);
      auVar14 = vpmovzxbd_avx2(auVar3);
      auVar12 = vcvtdq2ps_avx(auVar12);
      auVar14 = vcvtdq2ps_avx(auVar14);
      auVar15._0_4_ = (int)(param_5 * auVar12._0_4_ + param_6 * auVar14._0_4_ + fVar4);
      auVar15._4_4_ = (int)(param_5 * auVar12._4_4_ + param_6 * auVar14._4_4_ + fVar4);
      auVar15._8_4_ = (int)(param_5 * auVar12._8_4_ + param_6 * auVar14._8_4_ + fVar4);
      auVar15._12_4_ = (int)(param_5 * auVar12._12_4_ + param_6 * auVar14._12_4_ + fVar4);
      auVar16._16_4_ = (int)(param_5 * auVar12._16_4_ + param_6 * auVar14._16_4_ + fVar4);
      auVar16._0_16_ = auVar15;
      auVar16._20_4_ = (int)(param_5 * auVar12._20_4_ + param_6 * auVar14._20_4_ + fVar4);
      auVar16._24_4_ = (int)(param_5 * auVar12._24_4_ + param_6 * auVar14._24_4_ + fVar4);
      auVar16._28_4_ = (int)(param_5 * auVar12._28_4_ + param_6 * auVar14._28_4_ + fVar4);
      auVar2 = vpackssdw_avx(auVar15,auVar16._16_16_);
      auVar2 = vpackuswb_avx(auVar2,auVar2);
      *(longlong *)(param_3 + uVar6) = auVar2._0_8_;
      uVar6 = uVar6 + 8;
    } while (uVar6 < (uVar8 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar6) {
      return;
    }
  }
  uVar5 = (undefined4)uVar6;
  auVar12._4_4_ = uVar5;
  auVar12._0_4_ = uVar5;
  auVar12._8_4_ = uVar5;
  auVar12._12_4_ = uVar5;
  auVar12._16_4_ = uVar5;
  auVar12._20_4_ = uVar5;
  auVar12._24_4_ = uVar5;
  auVar12._28_4_ = uVar5;
  auVar12 = vpor_avx2(auVar12,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar13._4_4_ = param_4;
  auVar13._0_4_ = param_4;
  auVar13._8_4_ = param_4;
  auVar13._12_4_ = param_4;
  auVar14._16_4_ = param_4;
  auVar14._0_16_ = auVar13;
  auVar14._20_4_ = param_4;
  auVar14._24_4_ = param_4;
  auVar14._28_4_ = param_4;
  auVar12 = vpcmpgtd_avx2(auVar14,auVar12);
  auVar11 = auVar12._0_16_;
  uVar6 = uVar6 & 0xffffffff;
  uVar8 = vmovmskps_avx(auVar12);
  if ((~(byte)uVar8 & 0x81) == 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(param_1 + uVar6);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulonglong *)(param_2 + uVar6);
  }
  else {
    puVar7 = (undefined1 *)(param_1 + uVar6);
    if ((uVar8 & 1) != 0) {
      uVar1 = *puVar7;
      auVar11[1] = uVar1;
      auVar11[0] = uVar1;
      auVar11[2] = uVar1;
      auVar11[3] = uVar1;
      auVar11[4] = uVar1;
      auVar11[5] = uVar1;
      auVar11[6] = uVar1;
      auVar11[7] = uVar1;
      auVar11[8] = uVar1;
      auVar11[9] = uVar1;
      auVar11[10] = uVar1;
      auVar11[0xb] = uVar1;
      auVar11[0xc] = uVar1;
      auVar11[0xd] = uVar1;
      auVar11[0xe] = uVar1;
      auVar11[0xf] = uVar1;
    }
    if ((uVar8 & 2) != 0) {
      auVar13 = vpinsrb_avx(auVar11,(uint)(byte)puVar7[1],1);
      auVar11 = vpblendw_avx(auVar13,auVar11,0xe);
    }
    if ((uVar8 & 4) != 0) {
      auVar2 = vpmovzxwd_avx(auVar11);
      auVar2 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[2],2);
      auVar13 = vpinsrb_avx(auVar2,(uint)auVar11[3],3);
      auVar11 = vpblendd_avx2(auVar13,auVar11,2);
    }
    if ((uVar8 & 8) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048080030280020100);
      auVar13 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[3],3);
      auVar11 = vpblendd_avx2(auVar13,auVar11,2);
    }
    if ((uVar8 & 0x10) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048080030203020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[4],4);
      auVar13 = vpinsrb_avx(auVar2,(uint)auVar11[5],5);
      auVar11 = vpblendw_avx(auVar13,auVar11,8);
    }
    if ((uVar8 & 0x20) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048080030403020100);
      auVar13 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[5],5);
      auVar11 = vpblendw_avx(auVar13,auVar11,8);
    }
    if ((uVar8 & 0x40) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048080050403020100);
      auVar13 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[6],6);
      auVar11 = vpinsrb_avx(auVar13,(uint)auVar11[7],7);
    }
    if ((uVar8 & 0x80) != 0) {
      auVar2 = vpshufb_avx(auVar11,___xmm_80800706808005048006050403020100);
      auVar11 = vpinsrb_avx(auVar2,(uint)(byte)puVar7[7],7);
    }
    if ((uVar8 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_2 + uVar6);
      auVar13[1] = uVar1;
      auVar13[0] = uVar1;
      auVar13[2] = uVar1;
      auVar13[3] = uVar1;
      auVar13[4] = uVar1;
      auVar13[5] = uVar1;
      auVar13[6] = uVar1;
      auVar13[7] = uVar1;
      auVar13[8] = uVar1;
      auVar13[9] = uVar1;
      auVar13[10] = uVar1;
      auVar13[0xb] = uVar1;
      auVar13[0xc] = uVar1;
      auVar13[0xd] = uVar1;
      auVar13[0xe] = uVar1;
      auVar13[0xf] = uVar1;
    }
    if ((uVar8 & 2) != 0) {
      auVar2 = vpinsrb_avx(auVar13,(uint)*(byte *)(param_2 + uVar6 + 1),1);
      auVar13 = vpblendw_avx(auVar2,auVar13,0xe);
    }
    if ((uVar8 & 4) != 0) {
      auVar2 = vpmovzxwd_avx(auVar13);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 2),2);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar13[3],3);
      auVar13 = vpblendd_avx2(auVar2,auVar13,2);
    }
    if ((uVar8 & 8) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048080030280020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 3),3);
      auVar13 = vpblendd_avx2(auVar2,auVar13,2);
    }
    if ((uVar8 & 0x10) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048080030203020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 4),4);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar13[5],5);
      auVar13 = vpblendw_avx(auVar2,auVar13,8);
    }
    if ((uVar8 & 0x20) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048080030403020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 5),5);
      auVar13 = vpblendw_avx(auVar2,auVar13,8);
    }
    if ((uVar8 & 0x40) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048080050403020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 6),6);
      auVar13 = vpinsrb_avx(auVar2,(uint)auVar13[7],7);
    }
    if ((uVar8 & 0x80) != 0) {
      auVar2 = vpshufb_avx(auVar13,___xmm_80800706808005048006050403020100);
      auVar13 = vpinsrb_avx(auVar2,(uint)*(byte *)(param_2 + uVar6 + 7),7);
    }
  }
  auVar12 = vpmovzxbd_avx2(auVar11);
  auVar12 = vcvtdq2ps_avx(auVar12);
  auVar14 = vpmovzxbd_avx2(auVar13);
  auVar14 = vcvtdq2ps_avx(auVar14);
  auVar9._0_4_ = (int)(auVar12._0_4_ * param_5 + auVar14._0_4_ * param_6 + __real_3f000000);
  auVar9._4_4_ = (int)(auVar12._4_4_ * param_5 + auVar14._4_4_ * param_6 + __real_3f000000);
  auVar9._8_4_ = (int)(auVar12._8_4_ * param_5 + auVar14._8_4_ * param_6 + __real_3f000000);
  auVar9._12_4_ = (int)(auVar12._12_4_ * param_5 + auVar14._12_4_ * param_6 + __real_3f000000);
  auVar10._16_4_ = (int)(auVar12._16_4_ * param_5 + auVar14._16_4_ * param_6 + __real_3f000000);
  auVar10._0_16_ = auVar9;
  auVar10._20_4_ = (int)(auVar12._20_4_ * param_5 + auVar14._20_4_ * param_6 + __real_3f000000);
  auVar10._24_4_ = (int)(auVar12._24_4_ * param_5 + auVar14._24_4_ * param_6 + __real_3f000000);
  auVar10._28_4_ = (int)(auVar12._28_4_ * param_5 + auVar14._28_4_ * param_6 + __real_3f000000);
  auVar2 = vpackssdw_avx(auVar9,auVar10._16_16_);
  auVar2 = vpackuswb_avx(auVar2,auVar2);
  if ((uVar8 & 1) != 0) {
    *(char *)(param_3 + uVar6) = auVar2[0];
  }
  if ((uVar8 & 2) != 0) {
    *(char *)(param_3 + 1 + uVar6) = auVar2[1];
  }
  if ((uVar8 & 4) != 0) {
    *(char *)(param_3 + 2 + uVar6) = auVar2[2];
  }
  if ((uVar8 & 8) != 0) {
    *(char *)(param_3 + 3 + uVar6) = auVar2[3];
  }
  if ((uVar8 & 0x10) != 0) {
    *(char *)(param_3 + 4 + uVar6) = auVar2[4];
  }
  if ((uVar8 & 0x20) != 0) {
    *(char *)(param_3 + 5 + uVar6) = auVar2[5];
  }
  if ((uVar8 & 0x40) != 0) {
    *(char *)(param_3 + 6 + uVar6) = auVar2[6];
  }
  if (-1 < (char)(byte)uVar8) {
    return;
  }
  *(char *)(param_3 + 7 + uVar6) = auVar2[7];
  return;
}

// InterpolateTangents_avx2 @ 140cae600

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateTangents_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,float param_8,float param_9)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined1 *puVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 in_ZMM4 [64];
  undefined1 auVar23 [16];
  undefined1 in_ZMM5 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar16 [32];
  undefined1 auVar21 [32];
  undefined1 auVar27 [32];
  undefined1 auVar30 [32];
  
  fVar9 = __real_3f000000;
  auVar22 = in_ZMM4._0_16_;
  auVar23 = in_ZMM5._0_16_;
  uVar13 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar13 = param_7;
  }
  if ((int)(uVar13 & 0xfffffff8) < 1) {
    uVar14 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    uVar14 = 0;
    auVar22._0_8_ =
         CONCAT17(DAT_1528e5793,
                  CONCAT16(DAT_1528e5793,
                           CONCAT15(DAT_1528e5793,
                                    CONCAT14(DAT_1528e5793,
                                             CONCAT13(DAT_1528e5793,
                                                      CONCAT12(DAT_1528e5793,
                                                               CONCAT11(DAT_1528e5793,DAT_1528e5793)
                                                              ))))));
    auVar22[8] = DAT_1528e5793;
    auVar22[9] = DAT_1528e5793;
    auVar22[10] = DAT_1528e5793;
    auVar22[0xb] = DAT_1528e5793;
    auVar22[0xc] = DAT_1528e5793;
    auVar22[0xd] = DAT_1528e5793;
    auVar22[0xe] = DAT_1528e5793;
    auVar22[0xf] = DAT_1528e5793;
    auVar23._4_4_ = __real_3f000000;
    auVar23._0_4_ = __real_3f000000;
    auVar23._8_4_ = __real_3f000000;
    auVar23._12_4_ = __real_3f000000;
    do {
      auVar24._8_8_ = 0;
      auVar24._0_8_ = *(ulonglong *)(param_1 + uVar14);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = *(ulonglong *)(param_2 + uVar14);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = *(ulonglong *)(param_3 + uVar14);
      auVar32._8_8_ = 0;
      auVar32._0_8_ = *(ulonglong *)(param_4 + uVar14);
      auVar30 = vpmovzxbd_avx2(auVar24 ^ auVar22);
      auVar30 = vcvtdq2ps_avx(auVar30);
      auVar19 = vpmovzxbd_avx2(auVar28 ^ auVar22);
      auVar19 = vcvtdq2ps_avx(auVar19);
      auVar21 = vpmovzxbd_avx2(auVar31 ^ auVar22);
      auVar21 = vcvtdq2ps_avx(auVar21);
      auVar16 = vpmovzxbd_avx2(auVar32 ^ auVar22);
      auVar16 = vcvtdq2ps_avx(auVar16);
      auVar25._0_4_ = (int)(param_8 * auVar30._0_4_ + param_9 * auVar19._0_4_ + fVar9);
      auVar25._4_4_ = (int)(param_8 * auVar30._4_4_ + param_9 * auVar19._4_4_ + fVar9);
      auVar25._8_4_ = (int)(param_8 * auVar30._8_4_ + param_9 * auVar19._8_4_ + fVar9);
      auVar25._12_4_ = (int)(param_8 * auVar30._12_4_ + param_9 * auVar19._12_4_ + fVar9);
      auVar27._16_4_ = (int)(param_8 * auVar30._16_4_ + param_9 * auVar19._16_4_ + fVar9);
      auVar27._0_16_ = auVar25;
      auVar27._20_4_ = (int)(param_8 * auVar30._20_4_ + param_9 * auVar19._20_4_ + fVar9);
      auVar27._24_4_ = (int)(param_8 * auVar30._24_4_ + param_9 * auVar19._24_4_ + fVar9);
      auVar27._28_4_ = (int)(param_8 * auVar30._28_4_ + param_9 * auVar19._28_4_ + fVar9);
      auVar24 = vpackssdw_avx(auVar25,auVar27._16_16_);
      auVar25 = vpackuswb_avx(auVar24,auVar24);
      auVar29._0_4_ = (int)(param_8 * auVar21._0_4_ + param_9 * auVar16._0_4_ + fVar9);
      auVar29._4_4_ = (int)(param_8 * auVar21._4_4_ + param_9 * auVar16._4_4_ + fVar9);
      auVar29._8_4_ = (int)(param_8 * auVar21._8_4_ + param_9 * auVar16._8_4_ + fVar9);
      auVar29._12_4_ = (int)(param_8 * auVar21._12_4_ + param_9 * auVar16._12_4_ + fVar9);
      auVar30._16_4_ = (int)(param_8 * auVar21._16_4_ + param_9 * auVar16._16_4_ + fVar9);
      auVar30._0_16_ = auVar29;
      auVar30._20_4_ = (int)(param_8 * auVar21._20_4_ + param_9 * auVar16._20_4_ + fVar9);
      auVar30._24_4_ = (int)(param_8 * auVar21._24_4_ + param_9 * auVar16._24_4_ + fVar9);
      auVar30._28_4_ = (int)(param_8 * auVar21._28_4_ + param_9 * auVar16._28_4_ + fVar9);
      auVar24 = vpackssdw_avx(auVar29,auVar30._16_16_);
      auVar24 = vpackuswb_avx(auVar24,auVar24);
      *(ulonglong *)(param_5 + uVar14) = auVar25._0_8_ ^ auVar22._0_8_;
      *(ulonglong *)(param_6 + uVar14) = auVar24._0_8_ ^ auVar22._0_8_;
      uVar14 = uVar14 + 8;
    } while (uVar14 < (uVar13 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar14) {
      return;
    }
  }
  fVar9 = __real_3f000000;
  uVar12 = (undefined4)uVar14;
  auVar19._4_4_ = uVar12;
  auVar19._0_4_ = uVar12;
  auVar19._8_4_ = uVar12;
  auVar19._12_4_ = uVar12;
  auVar19._16_4_ = uVar12;
  auVar19._20_4_ = uVar12;
  auVar19._24_4_ = uVar12;
  auVar19._28_4_ = uVar12;
  auVar30 = vpor_avx2(auVar19,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar20._4_4_ = param_7;
  auVar20._0_4_ = param_7;
  auVar20._8_4_ = param_7;
  auVar20._12_4_ = param_7;
  auVar21._16_4_ = param_7;
  auVar21._0_16_ = auVar20;
  auVar21._20_4_ = param_7;
  auVar21._24_4_ = param_7;
  auVar21._28_4_ = param_7;
  auVar30 = vpcmpgtd_avx2(auVar21,auVar30);
  auVar18 = auVar30._0_16_;
  uVar14 = uVar14 & 0xffffffff;
  uVar13 = vmovmskps_avx(auVar30);
  bVar11 = (byte)uVar13;
  if ((~bVar11 & 0x81) == 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(ulonglong *)(param_1 + uVar14);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulonglong *)(param_2 + uVar14);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *(ulonglong *)(param_3 + uVar14);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *(ulonglong *)(param_4 + uVar14);
  }
  else {
    puVar10 = (undefined1 *)(param_1 + uVar14);
    if ((uVar13 & 1) != 0) {
      uVar1 = *puVar10;
      auVar18[1] = uVar1;
      auVar18[0] = uVar1;
      auVar18[2] = uVar1;
      auVar18[3] = uVar1;
      auVar18[4] = uVar1;
      auVar18[5] = uVar1;
      auVar18[6] = uVar1;
      auVar18[7] = uVar1;
      auVar18[8] = uVar1;
      auVar18[9] = uVar1;
      auVar18[10] = uVar1;
      auVar18[0xb] = uVar1;
      auVar18[0xc] = uVar1;
      auVar18[0xd] = uVar1;
      auVar18[0xe] = uVar1;
      auVar18[0xf] = uVar1;
    }
    if ((uVar13 & 2) != 0) {
      auVar20 = vpinsrb_avx(auVar18,(uint)(byte)puVar10[1],1);
      auVar18 = vpblendw_avx(auVar20,auVar18,0xe);
    }
    if ((uVar13 & 4) != 0) {
      auVar24 = vpmovzxwd_avx(auVar18);
      auVar24 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[2],2);
      auVar20 = vpinsrb_avx(auVar24,(uint)auVar18[3],3);
      auVar18 = vpblendd_avx2(auVar20,auVar18,2);
    }
    if ((uVar13 & 8) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048080030280020100);
      auVar20 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[3],3);
      auVar18 = vpblendd_avx2(auVar20,auVar18,2);
    }
    if ((uVar13 & 0x10) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048080030203020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[4],4);
      auVar20 = vpinsrb_avx(auVar24,(uint)auVar18[5],5);
      auVar18 = vpblendw_avx(auVar20,auVar18,8);
    }
    if ((uVar13 & 0x20) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048080030403020100);
      auVar20 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[5],5);
      auVar18 = vpblendw_avx(auVar20,auVar18,8);
    }
    if ((uVar13 & 0x40) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048080050403020100);
      auVar20 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[6],6);
      auVar18 = vpinsrb_avx(auVar20,(uint)auVar18[7],7);
    }
    if ((uVar13 & 0x80) != 0) {
      auVar24 = vpshufb_avx(auVar18,___xmm_80800706808005048006050403020100);
      auVar18 = vpinsrb_avx(auVar24,(uint)(byte)puVar10[7],7);
    }
    if ((uVar13 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_2 + uVar14);
      auVar20[1] = uVar1;
      auVar20[0] = uVar1;
      auVar20[2] = uVar1;
      auVar20[3] = uVar1;
      auVar20[4] = uVar1;
      auVar20[5] = uVar1;
      auVar20[6] = uVar1;
      auVar20[7] = uVar1;
      auVar20[8] = uVar1;
      auVar20[9] = uVar1;
      auVar20[10] = uVar1;
      auVar20[0xb] = uVar1;
      auVar20[0xc] = uVar1;
      auVar20[0xd] = uVar1;
      auVar20[0xe] = uVar1;
      auVar20[0xf] = uVar1;
    }
    if ((uVar13 & 2) != 0) {
      auVar22 = vpinsrb_avx(auVar20,(uint)*(byte *)(param_2 + uVar14 + 1),1);
      auVar20 = vpblendw_avx(auVar22,auVar20,0xe);
    }
    if ((uVar13 & 4) != 0) {
      auVar22 = vpmovzxwd_avx(auVar20);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 2),2);
      auVar22 = vpinsrb_avx(auVar22,(uint)auVar20[3],3);
      auVar20 = vpblendd_avx2(auVar22,auVar20,2);
    }
    if ((uVar13 & 8) != 0) {
      auVar22 = vpshufb_avx(auVar20,___xmm_80800706808005048080030280020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 3),3);
      auVar20 = vpblendd_avx2(auVar22,auVar20,2);
    }
    if ((uVar13 & 0x10) != 0) {
      auVar22 = vpshufb_avx(auVar20,___xmm_80800706808005048080030203020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 4),4);
      auVar22 = vpinsrb_avx(auVar22,(uint)auVar20[5],5);
      auVar20 = vpblendw_avx(auVar22,auVar20,8);
    }
    if ((uVar13 & 0x20) != 0) {
      auVar22 = vpshufb_avx(auVar20,___xmm_80800706808005048080030403020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 5),5);
      auVar20 = vpblendw_avx(auVar22,auVar20,8);
    }
    if ((uVar13 & 0x40) != 0) {
      auVar22 = vpshufb_avx(auVar20,___xmm_80800706808005048080050403020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_2 + uVar14 + 6),6);
      auVar20 = vpinsrb_avx(auVar22,(uint)auVar20[7],7);
    }
    if ((uVar13 & 0x80) != 0) {
      auVar24 = vpshufb_avx(auVar20,___xmm_80800706808005048006050403020100);
      auVar20 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_2 + uVar14 + 7),7);
    }
    if ((uVar13 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_3 + uVar14);
      auVar22[1] = uVar1;
      auVar22[0] = uVar1;
      auVar22[2] = uVar1;
      auVar22[3] = uVar1;
      auVar22[4] = uVar1;
      auVar22[5] = uVar1;
      auVar22[6] = uVar1;
      auVar22[7] = uVar1;
      auVar22[8] = uVar1;
      auVar22[9] = uVar1;
      auVar22[10] = uVar1;
      auVar22[0xb] = uVar1;
      auVar22[0xc] = uVar1;
      auVar22[0xd] = uVar1;
      auVar22[0xe] = uVar1;
      auVar22[0xf] = uVar1;
    }
    if ((uVar13 & 2) != 0) {
      auVar23 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_3 + uVar14 + 1),1);
      auVar22 = vpblendw_avx(auVar23,auVar22,0xe);
    }
    if ((uVar13 & 4) != 0) {
      auVar23 = vpmovzxwd_avx(auVar22);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 2),2);
      auVar23 = vpinsrb_avx(auVar23,(uint)auVar22[3],3);
      auVar22 = vpblendd_avx2(auVar23,auVar22,2);
    }
    if ((uVar13 & 8) != 0) {
      auVar23 = vpshufb_avx(auVar22,___xmm_80800706808005048080030280020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 3),3);
      auVar22 = vpblendd_avx2(auVar23,auVar22,2);
    }
    if ((uVar13 & 0x10) != 0) {
      auVar23 = vpshufb_avx(auVar22,___xmm_80800706808005048080030203020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 4),4);
      auVar23 = vpinsrb_avx(auVar23,(uint)auVar22[5],5);
      auVar22 = vpblendw_avx(auVar23,auVar22,8);
    }
    if ((uVar13 & 0x20) != 0) {
      auVar23 = vpshufb_avx(auVar22,___xmm_80800706808005048080030403020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 5),5);
      auVar22 = vpblendw_avx(auVar23,auVar22,8);
    }
    if ((uVar13 & 0x40) != 0) {
      auVar23 = vpshufb_avx(auVar22,___xmm_80800706808005048080050403020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_3 + uVar14 + 6),6);
      auVar22 = vpinsrb_avx(auVar23,(uint)auVar22[7],7);
    }
    if ((uVar13 & 0x80) != 0) {
      auVar22 = vpshufb_avx(auVar22,___xmm_80800706808005048006050403020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)*(byte *)(param_3 + uVar14 + 7),7);
    }
    if ((uVar13 & 1) != 0) {
      uVar1 = *(undefined1 *)(param_4 + uVar14);
      auVar23[1] = uVar1;
      auVar23[0] = uVar1;
      auVar23[2] = uVar1;
      auVar23[3] = uVar1;
      auVar23[4] = uVar1;
      auVar23[5] = uVar1;
      auVar23[6] = uVar1;
      auVar23[7] = uVar1;
      auVar23[8] = uVar1;
      auVar23[9] = uVar1;
      auVar23[10] = uVar1;
      auVar23[0xb] = uVar1;
      auVar23[0xc] = uVar1;
      auVar23[0xd] = uVar1;
      auVar23[0xe] = uVar1;
      auVar23[0xf] = uVar1;
    }
    if ((uVar13 & 2) != 0) {
      auVar24 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_4 + uVar14 + 1),1);
      auVar23 = vpblendw_avx(auVar24,auVar23,0xe);
    }
    if ((uVar13 & 4) != 0) {
      auVar24 = vpmovzxwd_avx(auVar23);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 2),2);
      auVar24 = vpinsrb_avx(auVar24,(uint)auVar23[3],3);
      auVar23 = vpblendd_avx2(auVar24,auVar23,2);
    }
    if ((uVar13 & 8) != 0) {
      auVar24 = vpshufb_avx(auVar23,___xmm_80800706808005048080030280020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 3),3);
      auVar23 = vpblendd_avx2(auVar24,auVar23,2);
    }
    if ((uVar13 & 0x10) != 0) {
      auVar24 = vpshufb_avx(auVar23,___xmm_80800706808005048080030203020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 4),4);
      auVar24 = vpinsrb_avx(auVar24,(uint)auVar23[5],5);
      auVar23 = vpblendw_avx(auVar24,auVar23,8);
    }
    if ((uVar13 & 0x20) != 0) {
      auVar24 = vpshufb_avx(auVar23,___xmm_80800706808005048080030403020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 5),5);
      auVar23 = vpblendw_avx(auVar24,auVar23,8);
    }
    if ((uVar13 & 0x40) != 0) {
      auVar24 = vpshufb_avx(auVar23,___xmm_80800706808005048080050403020100);
      auVar24 = vpinsrb_avx(auVar24,(uint)*(byte *)(param_4 + uVar14 + 6),6);
      auVar23 = vpinsrb_avx(auVar24,(uint)auVar23[7],7);
    }
    if ((uVar13 & 0x80) != 0) {
      auVar23 = vpshufb_avx(auVar23,___xmm_80800706808005048006050403020100);
      auVar23 = vpinsrb_avx(auVar23,(uint)*(byte *)(param_4 + uVar14 + 7),7);
    }
  }
  auVar26[1] = DAT_1528e5793;
  auVar26[0] = DAT_1528e5793;
  auVar26[2] = DAT_1528e5793;
  auVar26[3] = DAT_1528e5793;
  auVar26[4] = DAT_1528e5793;
  auVar26[5] = DAT_1528e5793;
  auVar26[6] = DAT_1528e5793;
  auVar26[7] = DAT_1528e5793;
  auVar26[8] = DAT_1528e5793;
  auVar26[9] = DAT_1528e5793;
  auVar26[10] = DAT_1528e5793;
  auVar26[0xb] = DAT_1528e5793;
  auVar26[0xc] = DAT_1528e5793;
  auVar26[0xd] = DAT_1528e5793;
  auVar26[0xe] = DAT_1528e5793;
  auVar26[0xf] = DAT_1528e5793;
  auVar30 = vpmovzxbd_avx2(auVar18 ^ auVar26);
  auVar30 = vcvtdq2ps_avx(auVar30);
  auVar19 = vpmovzxbd_avx2(auVar20 ^ auVar26);
  auVar19 = vcvtdq2ps_avx(auVar19);
  auVar21 = vpmovzxbd_avx2(auVar23 ^ auVar26);
  auVar15._0_4_ = (int)(param_8 * auVar30._0_4_ + param_9 * auVar19._0_4_ + __real_3f000000);
  auVar15._4_4_ = (int)(param_8 * auVar30._4_4_ + param_9 * auVar19._4_4_ + __real_3f000000);
  auVar15._8_4_ = (int)(param_8 * auVar30._8_4_ + param_9 * auVar19._8_4_ + __real_3f000000);
  auVar15._12_4_ = (int)(param_8 * auVar30._12_4_ + param_9 * auVar19._12_4_ + __real_3f000000);
  auVar16._16_4_ = (int)(param_8 * auVar30._16_4_ + param_9 * auVar19._16_4_ + __real_3f000000);
  auVar16._0_16_ = auVar15;
  auVar16._20_4_ = (int)(param_8 * auVar30._20_4_ + param_9 * auVar19._20_4_ + __real_3f000000);
  auVar16._24_4_ = (int)(param_8 * auVar30._24_4_ + param_9 * auVar19._24_4_ + __real_3f000000);
  auVar16._28_4_ = (int)(param_8 * auVar30._28_4_ + param_9 * auVar19._28_4_ + __real_3f000000);
  auVar23 = vpackssdw_avx(auVar15,auVar16._16_16_);
  auVar23 = vpackuswb_avx(auVar23,auVar23);
  auVar23 = auVar23 ^ auVar26;
  if ((uVar13 & 1) == 0) {
    auVar19 = vpmovzxbd_avx2(auVar22 ^ auVar26);
    auVar30 = vcvtdq2ps_avx(auVar21);
  }
  else {
    *(char *)(param_5 + uVar14) = auVar23[0];
    auVar19 = vpmovzxbd_avx2(auVar22 ^ auVar26);
    auVar30 = vcvtdq2ps_avx(auVar21);
  }
  if ((uVar13 & 2) == 0) {
    auVar19 = vcvtdq2ps_avx(auVar19);
  }
  else {
    *(char *)(param_5 + 1 + uVar14) = auVar23[1];
    auVar19 = vcvtdq2ps_avx(auVar19);
  }
  if ((uVar13 & 4) != 0) {
    *(char *)(param_5 + 2 + uVar14) = auVar23[2];
  }
  uVar8 = param_8 * (float)auVar19._28_4_ + param_9 * (float)auVar30._28_4_ + fVar9;
  uVar7 = param_8 * (float)auVar19._24_4_ + param_9 * (float)auVar30._24_4_ + fVar9;
  uVar6 = param_8 * (float)auVar19._20_4_ + param_9 * (float)auVar30._20_4_ + fVar9;
  uVar5 = param_8 * (float)auVar19._16_4_ + param_9 * (float)auVar30._16_4_ + fVar9;
  uVar4 = param_8 * (float)auVar19._12_4_ + param_9 * (float)auVar30._12_4_ + fVar9;
  uVar3 = param_8 * (float)auVar19._8_4_ + param_9 * (float)auVar30._8_4_ + fVar9;
  uVar2 = param_8 * (float)auVar19._4_4_ + param_9 * (float)auVar30._4_4_ + fVar9;
  uVar12 = param_8 * (float)auVar19._0_4_ + param_9 * (float)auVar30._0_4_ + fVar9;
  if ((uVar13 & 8) == 0) {
    auVar17._0_4_ = (int)(float)uVar12;
    auVar17._4_4_ = (int)(float)uVar2;
    auVar17._8_4_ = (int)(float)uVar3;
    auVar17._12_4_ = (int)(float)uVar4;
    auVar17._16_4_ = (int)(float)uVar5;
    auVar17._20_4_ = (int)(float)uVar6;
    auVar17._24_4_ = (int)(float)uVar7;
    auVar17._28_4_ = (int)(float)uVar8;
  }
  else {
    *(char *)(param_5 + 3 + uVar14) = auVar23[3];
    auVar17._0_4_ = (int)(float)uVar12;
    auVar17._4_4_ = (int)(float)uVar2;
    auVar17._8_4_ = (int)(float)uVar3;
    auVar17._12_4_ = (int)(float)uVar4;
    auVar17._16_4_ = (int)(float)uVar5;
    auVar17._20_4_ = (int)(float)uVar6;
    auVar17._24_4_ = (int)(float)uVar7;
    auVar17._28_4_ = (int)(float)uVar8;
  }
  if ((uVar13 & 0x10) != 0) {
    *(char *)(param_5 + 4 + uVar14) = auVar23[4];
  }
  if ((uVar13 & 0x20) == 0) {
    auVar22 = vpackssdw_avx(auVar17._0_16_,auVar17._16_16_);
  }
  else {
    *(char *)(param_5 + 5 + uVar14) = auVar23[5];
    auVar22 = vpackssdw_avx(auVar17._0_16_,auVar17._16_16_);
  }
  if ((uVar13 & 0x40) == 0) {
    auVar22 = vpackuswb_avx(auVar22,auVar22);
  }
  else {
    *(char *)(param_5 + 6 + uVar14) = auVar23[6];
    auVar22 = vpackuswb_avx(auVar22,auVar22);
  }
  if ((char)bVar11 < '\0') {
    *(char *)(param_5 + 7 + uVar14) = auVar23[7];
  }
  auVar22 = auVar22 ^ auVar26;
  if ((uVar13 & 1) != 0) {
    *(char *)(param_6 + uVar14) = auVar22[0];
  }
  if ((uVar13 & 2) != 0) {
    *(char *)(param_6 + 1 + uVar14) = auVar22[1];
  }
  if ((uVar13 & 4) != 0) {
    *(char *)(param_6 + 2 + uVar14) = auVar22[2];
  }
  if ((uVar13 & 8) != 0) {
    *(char *)(param_6 + 3 + uVar14) = auVar22[3];
  }
  if ((uVar13 & 0x10) != 0) {
    *(char *)(param_6 + 4 + uVar14) = auVar22[4];
  }
  if ((uVar13 & 0x20) != 0) {
    *(char *)(param_6 + 5 + uVar14) = auVar22[5];
  }
  if ((uVar13 & 0x40) != 0) {
    *(char *)(param_6 + 6 + uVar14) = auVar22[6];
  }
  if ((char)bVar11 < '\0') {
    *(char *)(param_6 + 7 + uVar14) = auVar22[7];
  }
  return;
}

