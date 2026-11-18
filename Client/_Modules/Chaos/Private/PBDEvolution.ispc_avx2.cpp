// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// PostIterationUpdates___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_CunfCuniCuni_avx2 @ 140138690

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PostIterationUpdates___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_CunfCuniCuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,uint param_5,
               int param_6)

{
  undefined4 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [32];
  int iVar11;
  uint uVar12;
  undefined1 (*pauVar13) [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar28 [16];
  undefined1 auVar27 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  
  auVar30 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
  auVar4 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar3 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar2 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  uVar8 = (ulonglong)param_5;
  uVar12 = param_6 - param_5;
  uVar7 = uVar12 + 7;
  if (-1 < (int)uVar12) {
    uVar7 = uVar12;
  }
  iVar11 = ((uVar7 & 0xfffffff8) - uVar12) + param_6;
  if ((int)param_5 < iVar11) {
    auVar15._4_4_ = param_4;
    auVar15._0_4_ = param_4;
    auVar15._8_4_ = param_4;
    auVar15._12_4_ = param_4;
    auVar15._16_4_ = param_4;
    auVar15._20_4_ = param_4;
    auVar15._24_4_ = param_4;
    auVar15._28_4_ = param_4;
    uVar8 = (ulonglong)(int)param_5;
    pauVar13 = (undefined1 (*) [32])(uVar8 * 0x10 + param_3 + 0x60);
    lVar9 = uVar8 * 0xc + 0x40;
    do {
      auVar37 = vperm2f128_avx(pauVar13[-3],pauVar13[-1],0x20);
      auVar35 = vperm2f128_avx(pauVar13[-3],pauVar13[-1],0x31);
      auVar19 = vperm2f128_avx(pauVar13[-2],*pauVar13,0x20);
      auVar20 = vperm2f128_avx(pauVar13[-2],*pauVar13,0x31);
      auVar38 = vunpcklps_avx(auVar37,auVar35);
      auVar37 = vunpckhps_avx(auVar37,auVar35);
      auVar27 = vunpcklps_avx(auVar19,auVar20);
      auVar35 = vunpckhps_avx(auVar19,auVar20);
      auVar26 = vunpcklpd_avx(auVar37,auVar35);
      auVar37 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar9);
      auVar35 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar9);
      auVar19 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar35);
      auVar20 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar37);
      auVar19 = vblendps_avx(auVar20,auVar19,0x88);
      auVar20 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar35);
      auVar16 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_2 + lVar9));
      auVar20 = vblendps_avx(auVar16,auVar20,0x13);
      auVar16._16_16_ = auVar20._0_16_;
      auVar16._0_16_ = auVar19._0_16_;
      auVar20 = vperm2f128_avx(auVar19,auVar20,0x31);
      auVar37 = vblendps_avx(auVar35,auVar37,0x24);
      auVar33 = vunpcklpd_avx(auVar38,auVar27);
      auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar37);
      auVar35._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar35._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar35 = vpermps_avx2(auVar35,*(undefined1 (*) [32])(param_2 + lVar9));
      auVar37 = vblendps_avx(auVar37,auVar35,0xe0);
      auVar23 = vunpckhpd_avx(auVar38,auVar27);
      auVar35 = vsubps_avx(auVar33,auVar16);
      auVar19 = vdivps_avx(auVar35,auVar15);
      auVar35 = vsubps_avx(auVar23,auVar20);
      auVar20 = vdivps_avx(auVar35,auVar15);
      auVar37 = vsubps_avx(auVar26,auVar37);
      auVar16 = vdivps_avx(auVar37,auVar15);
      auVar37._16_16_ = auVar20._0_16_;
      auVar37._0_16_ = auVar19._0_16_;
      auVar35 = vshufpd_avx(auVar19,auVar37,2);
      auVar36 = vpermps_avx2(auVar2,auVar16);
      auVar37 = vpermpd_avx2(auVar20,0xe9);
      auVar37 = vblendps_avx(auVar36,auVar37,7);
      auVar36 = vpermps_avx2(auVar3,auVar37);
      auVar35 = vpermps_avx2(auVar4,auVar35);
      auVar35 = vblendps_avx(auVar35,auVar36,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar9) = auVar35;
      auVar36 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar35 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar37);
      auVar37 = vshufpd_avx(auVar19,auVar19,1);
      auVar37 = vblendps_avx(auVar35,auVar37,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar9) = auVar37;
      auVar5 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar35 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar20);
      auVar37 = vpermpd_avx2(auVar19,0xff);
      auVar37 = vblendps_avx(auVar35,auVar37,3);
      auVar37 = vblendps_avx(auVar37,auVar16,0xe0);
      auVar37 = vpermps_avx2(auVar30,auVar37);
      *(undefined1 (*) [32])(param_1 + lVar9) = auVar37;
      auVar35 = vperm2f128_avx(auVar33,auVar38,0x20);
      auVar19 = vpermps_avx2(auVar2,auVar26);
      auVar37 = vpermpd_avx2(auVar23,0xe9);
      auVar37 = vblendps_avx(auVar19,auVar37,7);
      auVar19 = vpermps_avx2(auVar3,auVar37);
      auVar35 = vpermps_avx2(auVar4,auVar35);
      auVar35 = vblendps_avx(auVar35,auVar19,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar9) = auVar35;
      auVar35 = vpermps_avx2(auVar36,auVar37);
      auVar37 = vshufpd_avx(auVar33,auVar33,1);
      auVar37 = vblendps_avx(auVar35,auVar37,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar9) = auVar37;
      auVar37 = vpermps_avx2(auVar5,auVar23);
      auVar37 = vblendps_avx(auVar37,ZEXT1632(auVar27._16_16_),3);
      auVar37 = vblendps_avx(auVar37,auVar26,0xe0);
      auVar37 = vpermps_avx2(auVar30,auVar37);
      *(undefined1 (*) [32])(param_2 + lVar9) = auVar37;
      uVar8 = uVar8 + 8;
      pauVar13 = pauVar13 + 4;
      lVar9 = lVar9 + 0x60;
    } while ((longlong)uVar8 < (longlong)iVar11);
  }
  auVar4 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar3 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar2 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  iVar11 = (int)uVar8;
  if (iVar11 < param_6) {
    auVar30._0_4_ = iVar11 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
    ;
    auVar30._4_4_ = iVar11 + _UNK_150b50ae4;
    auVar30._8_4_ = iVar11 + _UNK_150b50ae8;
    auVar30._12_4_ = iVar11 + _UNK_150b50aec;
    auVar30._16_4_ = iVar11 + _UNK_150b50af0;
    auVar30._20_4_ = iVar11 + _UNK_150b50af4;
    auVar30._24_4_ = iVar11 + _UNK_150b50af8;
    auVar30._28_4_ = iVar11 + _UNK_150b50afc;
    auVar19._4_4_ = param_6;
    auVar19._0_4_ = param_6;
    auVar19._8_4_ = param_6;
    auVar19._12_4_ = param_6;
    auVar19._16_4_ = param_6;
    auVar19._20_4_ = param_6;
    auVar19._24_4_ = param_6;
    auVar19._28_4_ = param_6;
    auVar30 = vpcmpgtd_avx2(auVar19,auVar30);
    lVar9 = (longlong)iVar11;
    pauVar13 = (undefined1 (*) [32])(param_3 + lVar9 * 0x10);
    uVar7 = vmovmskps_avx(auVar30);
    if (uVar7 == 0xff) {
      auVar30 = vperm2f128_avx(*pauVar13,pauVar13[2],0x20);
      auVar15 = vperm2f128_avx(*pauVar13,pauVar13[2],0x31);
      auVar19 = vperm2f128_avx(pauVar13[1],pauVar13[3],0x20);
      auVar20 = vperm2f128_avx(pauVar13[1],pauVar13[3],0x31);
      auVar37 = vunpcklps_avx(auVar30,auVar15);
      auVar30 = vunpckhps_avx(auVar30,auVar15);
      auVar35 = vunpcklps_avx(auVar19,auVar20);
      auVar15 = vunpckhps_avx(auVar19,auVar20);
      auVar16 = vunpcklpd_avx(auVar30,auVar15);
      auVar23 = vunpcklpd_avx(auVar37,auVar35);
      auVar20 = vunpckhpd_avx(auVar37,auVar35);
      auVar30 = *(undefined1 (*) [32])(param_2 + lVar9 * 0xc);
      auVar15 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar9 * 0xc);
      auVar37 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar9 * 0xc);
      auVar35 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar15);
      auVar19 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar30);
      auVar35 = vblendps_avx(auVar19,auVar35,0x88);
      auVar19 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar15);
      auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar37);
      auVar19 = vblendps_avx(auVar26,auVar19,0x13);
      auVar26._16_16_ = auVar19._0_16_;
      auVar26._0_16_ = auVar35._0_16_;
      auVar35 = vperm2f128_avx(auVar35,auVar19,0x31);
      auVar30 = vblendps_avx(auVar15,auVar30,0x24);
      auVar30 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar30);
      auVar33._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar33._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar15 = vpermps_avx2(auVar33,auVar37);
      auVar30 = vblendps_avx(auVar30,auVar15,0xe0);
    }
    else {
      auVar23 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
      auVar20 = vgatherdps(ZEXT832(0),auVar30);
      auVar16 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
      auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
      auVar35 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
      auVar30 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
    }
    pauVar10 = (undefined1 (*) [32])(param_2 + lVar9 * 0xc);
    pauVar13 = (undefined1 (*) [32])(param_1 + lVar9 * 0xc);
    auVar15 = vsubps_avx(auVar23,auVar26);
    auVar37 = vsubps_avx(auVar20,auVar35);
    auVar38._4_4_ = param_4;
    auVar38._0_4_ = param_4;
    auVar38._8_4_ = param_4;
    auVar38._12_4_ = param_4;
    auVar38._16_4_ = param_4;
    auVar38._20_4_ = param_4;
    auVar38._24_4_ = param_4;
    auVar38._28_4_ = param_4;
    auVar15 = vdivps_avx(auVar15,auVar38);
    auVar35 = vsubps_avx(auVar16,auVar30);
    auVar30 = vdivps_avx(auVar37,auVar38);
    auVar37 = vdivps_avx(auVar35,auVar38);
    cVar6 = (char)uVar7;
    auVar22 = auVar23._0_16_;
    auVar24 = auVar23._16_16_;
    auVar18 = auVar20._0_16_;
    auVar32 = auVar15._0_16_;
    auVar34 = auVar15._16_16_;
    auVar29 = auVar30._0_16_;
    if (cVar6 == -1) {
      auVar36._16_16_ = auVar29;
      auVar36._0_16_ = auVar32;
      auVar19 = vshufpd_avx(auVar15,auVar36,2);
      auVar26 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar37);
      auVar35 = vpermpd_avx2(auVar30,0xe9);
      auVar35 = vblendps_avx(auVar26,auVar35,7);
      auVar26 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar35);
      auVar19 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar19);
      auVar19 = vblendps_avx(auVar19,auVar26,0xa4);
      *pauVar13 = auVar19;
      auVar26 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar19 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar35);
      auVar35 = vshufpd_avx(auVar15,auVar15,1);
      auVar35 = vblendps_avx(auVar19,auVar35,0x92);
      pauVar13[1] = auVar35;
      auVar33 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar19 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar35 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar30);
      auVar30 = vpermpd_avx2(auVar15,0xff);
      auVar30 = vblendps_avx(auVar35,auVar30,3);
      auVar30 = vblendps_avx(auVar30,auVar37,0xe0);
      auVar30 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar30);
      pauVar13[2] = auVar30;
      auVar27._16_16_ = auVar18;
      auVar27._0_16_ = auVar22;
      auVar30 = vshufpd_avx(auVar23,auVar27,2);
      auVar15 = vpermps_avx2(auVar2,auVar16);
      auVar2 = vpermpd_avx2(auVar20,0xe9);
      auVar2 = vblendps_avx(auVar15,auVar2,7);
      auVar3 = vpermps_avx2(auVar3,auVar2);
      auVar4 = vpermps_avx2(auVar4,auVar30);
      auVar3 = vblendps_avx(auVar4,auVar3,0xa4);
      *pauVar10 = auVar3;
      auVar3 = vpermps_avx2(auVar26,auVar2);
      auVar2 = vshufpd_avx(auVar23,auVar23,1);
      auVar2 = vblendps_avx(auVar3,auVar2,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar9 * 0xc) = auVar2;
      auVar3 = vpermps_avx2(auVar19,auVar20);
      auVar2 = vpermpd_avx2(auVar23,0xff);
      auVar2 = vblendps_avx(auVar3,auVar2,3);
      auVar2 = vblendps_avx(auVar2,auVar16,0xe0);
      auVar2 = vpermps_avx2(auVar33,auVar2);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar9 * 0xc) = auVar2;
    }
    else {
      auVar21 = auVar20._16_16_;
      auVar14 = auVar16._0_16_;
      auVar17 = auVar16._16_16_;
      auVar31 = auVar30._16_16_;
      auVar25 = auVar37._0_16_;
      auVar28 = auVar37._16_16_;
      if ((uVar7 & 1) != 0) {
        *(int *)*pauVar13 = auVar15._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar32,1);
        *(undefined4 *)(*pauVar13 + 0xc) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar32,2);
        *(undefined4 *)(*pauVar13 + 0x18) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar32,3);
        *(undefined4 *)(pauVar13[1] + 4) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar13[1] + 0x10) = auVar15._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar34,1);
        *(undefined4 *)(pauVar13[1] + 0x1c) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar34,2);
        *(undefined4 *)(pauVar13[2] + 8) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar34,3);
        *(undefined4 *)(pauVar13[2] + 0x14) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar13 + 4) = auVar30._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar29,1);
        *(undefined4 *)(*pauVar13 + 0x10) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar29,2);
        *(undefined4 *)(*pauVar13 + 0x1c) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar29,3);
        *(undefined4 *)(pauVar13[1] + 8) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar13[1] + 0x14) = auVar30._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar31,1);
        *(undefined4 *)pauVar13[2] = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar31,2);
        *(undefined4 *)(pauVar13[2] + 0xc) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar31,3);
        *(undefined4 *)(pauVar13[2] + 0x18) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar13 + 8) = auVar37._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar25,1);
        *(undefined4 *)(*pauVar13 + 0x14) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar25,2);
        *(undefined4 *)pauVar13[1] = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar25,3);
        *(undefined4 *)(pauVar13[1] + 0xc) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar13[1] + 0x18) = auVar37._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar28,1);
        *(undefined4 *)(pauVar13[2] + 4) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar28,2);
        *(undefined4 *)(pauVar13[2] + 0x10) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar28,3);
        *(undefined4 *)(pauVar13[2] + 0x1c) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)*pauVar10 = auVar23._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar22,1);
        *(undefined4 *)(param_2 + 0xc + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar22,2);
        *(undefined4 *)(param_2 + 0x18 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar22,3);
        *(undefined4 *)(param_2 + 0x24 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + lVar9 * 0xc) = auVar23._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar24,1);
        *(undefined4 *)(param_2 + 0x3c + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar24,2);
        *(undefined4 *)(param_2 + 0x48 + lVar9 * 0xc) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar24,3);
        *(undefined4 *)(param_2 + 0x54 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(param_2 + 4 + lVar9 * 0xc) = auVar20._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar18,1);
        *(undefined4 *)(param_2 + 0x10 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar18,2);
        *(undefined4 *)(param_2 + 0x1c + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar18,3);
        *(undefined4 *)(param_2 + 0x28 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + lVar9 * 0xc) = auVar20._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar21,1);
        *(undefined4 *)(param_2 + 0x40 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar21,2);
        *(undefined4 *)(param_2 + 0x4c + lVar9 * 0xc) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar21,3);
        *(undefined4 *)(param_2 + 0x58 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(param_2 + 8 + lVar9 * 0xc) = auVar16._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar14,1);
        *(undefined4 *)(param_2 + 0x14 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar14,2);
        *(undefined4 *)(param_2 + 0x20 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar14,3);
        *(undefined4 *)(param_2 + 0x2c + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + lVar9 * 0xc) = auVar16._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar17,1);
        *(undefined4 *)(param_2 + 0x44 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar17,2);
        *(undefined4 *)(param_2 + 0x50 + lVar9 * 0xc) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar17,3);
        *(undefined4 *)(param_2 + 0x5c + lVar9 * 0xc) = uVar1;
      }
    }
  }
  return;
}

// PostIterationUpdates_avx2 @ 140139180

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PostIterationUpdates_avx2
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,uint param_5,
               int param_6)

{
  undefined4 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 (*pauVar10) [32];
  int iVar11;
  uint uVar12;
  undefined1 (*pauVar13) [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar28 [16];
  undefined1 auVar27 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  
  auVar30 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
  auVar4 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar3 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar2 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  uVar8 = (ulonglong)param_5;
  uVar12 = param_6 - param_5;
  uVar7 = uVar12 + 7;
  if (-1 < (int)uVar12) {
    uVar7 = uVar12;
  }
  iVar11 = ((uVar7 & 0xfffffff8) - uVar12) + param_6;
  if ((int)param_5 < iVar11) {
    auVar15._4_4_ = param_4;
    auVar15._0_4_ = param_4;
    auVar15._8_4_ = param_4;
    auVar15._12_4_ = param_4;
    auVar15._16_4_ = param_4;
    auVar15._20_4_ = param_4;
    auVar15._24_4_ = param_4;
    auVar15._28_4_ = param_4;
    uVar8 = (ulonglong)(int)param_5;
    pauVar13 = (undefined1 (*) [32])(uVar8 * 0x10 + param_3 + 0x60);
    lVar9 = uVar8 * 0xc + 0x40;
    do {
      auVar37 = vperm2f128_avx(pauVar13[-3],pauVar13[-1],0x20);
      auVar35 = vperm2f128_avx(pauVar13[-3],pauVar13[-1],0x31);
      auVar19 = vperm2f128_avx(pauVar13[-2],*pauVar13,0x20);
      auVar20 = vperm2f128_avx(pauVar13[-2],*pauVar13,0x31);
      auVar38 = vunpcklps_avx(auVar37,auVar35);
      auVar37 = vunpckhps_avx(auVar37,auVar35);
      auVar27 = vunpcklps_avx(auVar19,auVar20);
      auVar35 = vunpckhps_avx(auVar19,auVar20);
      auVar26 = vunpcklpd_avx(auVar37,auVar35);
      auVar37 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar9);
      auVar35 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar9);
      auVar19 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar35);
      auVar20 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar37);
      auVar19 = vblendps_avx(auVar20,auVar19,0x88);
      auVar20 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar35);
      auVar16 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_2 + lVar9));
      auVar20 = vblendps_avx(auVar16,auVar20,0x13);
      auVar16._16_16_ = auVar20._0_16_;
      auVar16._0_16_ = auVar19._0_16_;
      auVar20 = vperm2f128_avx(auVar19,auVar20,0x31);
      auVar37 = vblendps_avx(auVar35,auVar37,0x24);
      auVar33 = vunpcklpd_avx(auVar38,auVar27);
      auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar37);
      auVar35._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar35._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar35 = vpermps_avx2(auVar35,*(undefined1 (*) [32])(param_2 + lVar9));
      auVar37 = vblendps_avx(auVar37,auVar35,0xe0);
      auVar23 = vunpckhpd_avx(auVar38,auVar27);
      auVar35 = vsubps_avx(auVar33,auVar16);
      auVar19 = vdivps_avx(auVar35,auVar15);
      auVar35 = vsubps_avx(auVar23,auVar20);
      auVar20 = vdivps_avx(auVar35,auVar15);
      auVar37 = vsubps_avx(auVar26,auVar37);
      auVar16 = vdivps_avx(auVar37,auVar15);
      auVar37._16_16_ = auVar20._0_16_;
      auVar37._0_16_ = auVar19._0_16_;
      auVar35 = vshufpd_avx(auVar19,auVar37,2);
      auVar36 = vpermps_avx2(auVar2,auVar16);
      auVar37 = vpermpd_avx2(auVar20,0xe9);
      auVar37 = vblendps_avx(auVar36,auVar37,7);
      auVar36 = vpermps_avx2(auVar3,auVar37);
      auVar35 = vpermps_avx2(auVar4,auVar35);
      auVar35 = vblendps_avx(auVar35,auVar36,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar9) = auVar35;
      auVar36 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar35 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar37);
      auVar37 = vshufpd_avx(auVar19,auVar19,1);
      auVar37 = vblendps_avx(auVar35,auVar37,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar9) = auVar37;
      auVar5 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar35 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar20);
      auVar37 = vpermpd_avx2(auVar19,0xff);
      auVar37 = vblendps_avx(auVar35,auVar37,3);
      auVar37 = vblendps_avx(auVar37,auVar16,0xe0);
      auVar37 = vpermps_avx2(auVar30,auVar37);
      *(undefined1 (*) [32])(param_1 + lVar9) = auVar37;
      auVar35 = vperm2f128_avx(auVar33,auVar38,0x20);
      auVar19 = vpermps_avx2(auVar2,auVar26);
      auVar37 = vpermpd_avx2(auVar23,0xe9);
      auVar37 = vblendps_avx(auVar19,auVar37,7);
      auVar19 = vpermps_avx2(auVar3,auVar37);
      auVar35 = vpermps_avx2(auVar4,auVar35);
      auVar35 = vblendps_avx(auVar35,auVar19,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar9) = auVar35;
      auVar35 = vpermps_avx2(auVar36,auVar37);
      auVar37 = vshufpd_avx(auVar33,auVar33,1);
      auVar37 = vblendps_avx(auVar35,auVar37,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar9) = auVar37;
      auVar37 = vpermps_avx2(auVar5,auVar23);
      auVar37 = vblendps_avx(auVar37,ZEXT1632(auVar27._16_16_),3);
      auVar37 = vblendps_avx(auVar37,auVar26,0xe0);
      auVar37 = vpermps_avx2(auVar30,auVar37);
      *(undefined1 (*) [32])(param_2 + lVar9) = auVar37;
      uVar8 = uVar8 + 8;
      pauVar13 = pauVar13 + 4;
      lVar9 = lVar9 + 0x60;
    } while ((longlong)uVar8 < (longlong)iVar11);
  }
  auVar4 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar3 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar2 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  iVar11 = (int)uVar8;
  if (iVar11 < param_6) {
    auVar30._0_4_ = iVar11 + ___ymm_0000000700000006000000050000000400000003000000020000000100000000
    ;
    auVar30._4_4_ = iVar11 + _UNK_150b50ae4;
    auVar30._8_4_ = iVar11 + _UNK_150b50ae8;
    auVar30._12_4_ = iVar11 + _UNK_150b50aec;
    auVar30._16_4_ = iVar11 + _UNK_150b50af0;
    auVar30._20_4_ = iVar11 + _UNK_150b50af4;
    auVar30._24_4_ = iVar11 + _UNK_150b50af8;
    auVar30._28_4_ = iVar11 + _UNK_150b50afc;
    auVar19._4_4_ = param_6;
    auVar19._0_4_ = param_6;
    auVar19._8_4_ = param_6;
    auVar19._12_4_ = param_6;
    auVar19._16_4_ = param_6;
    auVar19._20_4_ = param_6;
    auVar19._24_4_ = param_6;
    auVar19._28_4_ = param_6;
    auVar30 = vpcmpgtd_avx2(auVar19,auVar30);
    lVar9 = (longlong)iVar11;
    pauVar13 = (undefined1 (*) [32])(param_3 + lVar9 * 0x10);
    uVar7 = vmovmskps_avx(auVar30);
    if (uVar7 == 0xff) {
      auVar30 = vperm2f128_avx(*pauVar13,pauVar13[2],0x20);
      auVar15 = vperm2f128_avx(*pauVar13,pauVar13[2],0x31);
      auVar19 = vperm2f128_avx(pauVar13[1],pauVar13[3],0x20);
      auVar20 = vperm2f128_avx(pauVar13[1],pauVar13[3],0x31);
      auVar37 = vunpcklps_avx(auVar30,auVar15);
      auVar30 = vunpckhps_avx(auVar30,auVar15);
      auVar35 = vunpcklps_avx(auVar19,auVar20);
      auVar15 = vunpckhps_avx(auVar19,auVar20);
      auVar16 = vunpcklpd_avx(auVar30,auVar15);
      auVar23 = vunpcklpd_avx(auVar37,auVar35);
      auVar20 = vunpckhpd_avx(auVar37,auVar35);
      auVar30 = *(undefined1 (*) [32])(param_2 + lVar9 * 0xc);
      auVar15 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar9 * 0xc);
      auVar37 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar9 * 0xc);
      auVar35 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar15);
      auVar19 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar30);
      auVar35 = vblendps_avx(auVar19,auVar35,0x88);
      auVar19 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar15);
      auVar26 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar37);
      auVar19 = vblendps_avx(auVar26,auVar19,0x13);
      auVar26._16_16_ = auVar19._0_16_;
      auVar26._0_16_ = auVar35._0_16_;
      auVar35 = vperm2f128_avx(auVar35,auVar19,0x31);
      auVar30 = vblendps_avx(auVar15,auVar30,0x24);
      auVar30 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar30);
      auVar33._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar33._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar15 = vpermps_avx2(auVar33,auVar37);
      auVar30 = vblendps_avx(auVar30,auVar15,0xe0);
    }
    else {
      auVar23 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
      auVar20 = vgatherdps(ZEXT832(0),auVar30);
      auVar16 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
      auVar26 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
      auVar35 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
      auVar30 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar30);
    }
    pauVar10 = (undefined1 (*) [32])(param_2 + lVar9 * 0xc);
    pauVar13 = (undefined1 (*) [32])(param_1 + lVar9 * 0xc);
    auVar15 = vsubps_avx(auVar23,auVar26);
    auVar37 = vsubps_avx(auVar20,auVar35);
    auVar38._4_4_ = param_4;
    auVar38._0_4_ = param_4;
    auVar38._8_4_ = param_4;
    auVar38._12_4_ = param_4;
    auVar38._16_4_ = param_4;
    auVar38._20_4_ = param_4;
    auVar38._24_4_ = param_4;
    auVar38._28_4_ = param_4;
    auVar15 = vdivps_avx(auVar15,auVar38);
    auVar35 = vsubps_avx(auVar16,auVar30);
    auVar30 = vdivps_avx(auVar37,auVar38);
    auVar37 = vdivps_avx(auVar35,auVar38);
    cVar6 = (char)uVar7;
    auVar22 = auVar23._0_16_;
    auVar24 = auVar23._16_16_;
    auVar18 = auVar20._0_16_;
    auVar32 = auVar15._0_16_;
    auVar34 = auVar15._16_16_;
    auVar29 = auVar30._0_16_;
    if (cVar6 == -1) {
      auVar36._16_16_ = auVar29;
      auVar36._0_16_ = auVar32;
      auVar19 = vshufpd_avx(auVar15,auVar36,2);
      auVar26 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar37);
      auVar35 = vpermpd_avx2(auVar30,0xe9);
      auVar35 = vblendps_avx(auVar26,auVar35,7);
      auVar26 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar35);
      auVar19 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar19);
      auVar19 = vblendps_avx(auVar19,auVar26,0xa4);
      *pauVar13 = auVar19;
      auVar26 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar19 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar35);
      auVar35 = vshufpd_avx(auVar15,auVar15,1);
      auVar35 = vblendps_avx(auVar19,auVar35,0x92);
      pauVar13[1] = auVar35;
      auVar33 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar19 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      auVar35 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar30);
      auVar30 = vpermpd_avx2(auVar15,0xff);
      auVar30 = vblendps_avx(auVar35,auVar30,3);
      auVar30 = vblendps_avx(auVar30,auVar37,0xe0);
      auVar30 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar30);
      pauVar13[2] = auVar30;
      auVar27._16_16_ = auVar18;
      auVar27._0_16_ = auVar22;
      auVar30 = vshufpd_avx(auVar23,auVar27,2);
      auVar15 = vpermps_avx2(auVar2,auVar16);
      auVar2 = vpermpd_avx2(auVar20,0xe9);
      auVar2 = vblendps_avx(auVar15,auVar2,7);
      auVar3 = vpermps_avx2(auVar3,auVar2);
      auVar4 = vpermps_avx2(auVar4,auVar30);
      auVar3 = vblendps_avx(auVar4,auVar3,0xa4);
      *pauVar10 = auVar3;
      auVar3 = vpermps_avx2(auVar26,auVar2);
      auVar2 = vshufpd_avx(auVar23,auVar23,1);
      auVar2 = vblendps_avx(auVar3,auVar2,0x92);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar9 * 0xc) = auVar2;
      auVar3 = vpermps_avx2(auVar19,auVar20);
      auVar2 = vpermpd_avx2(auVar23,0xff);
      auVar2 = vblendps_avx(auVar3,auVar2,3);
      auVar2 = vblendps_avx(auVar2,auVar16,0xe0);
      auVar2 = vpermps_avx2(auVar33,auVar2);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar9 * 0xc) = auVar2;
    }
    else {
      auVar21 = auVar20._16_16_;
      auVar14 = auVar16._0_16_;
      auVar17 = auVar16._16_16_;
      auVar31 = auVar30._16_16_;
      auVar25 = auVar37._0_16_;
      auVar28 = auVar37._16_16_;
      if ((uVar7 & 1) != 0) {
        *(int *)*pauVar13 = auVar15._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar32,1);
        *(undefined4 *)(*pauVar13 + 0xc) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar32,2);
        *(undefined4 *)(*pauVar13 + 0x18) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar32,3);
        *(undefined4 *)(pauVar13[1] + 4) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar13[1] + 0x10) = auVar15._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar34,1);
        *(undefined4 *)(pauVar13[1] + 0x1c) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar34,2);
        *(undefined4 *)(pauVar13[2] + 8) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar34,3);
        *(undefined4 *)(pauVar13[2] + 0x14) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar13 + 4) = auVar30._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar29,1);
        *(undefined4 *)(*pauVar13 + 0x10) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar29,2);
        *(undefined4 *)(*pauVar13 + 0x1c) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar29,3);
        *(undefined4 *)(pauVar13[1] + 8) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar13[1] + 0x14) = auVar30._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar31,1);
        *(undefined4 *)pauVar13[2] = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar31,2);
        *(undefined4 *)(pauVar13[2] + 0xc) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar31,3);
        *(undefined4 *)(pauVar13[2] + 0x18) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar13 + 8) = auVar37._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar25,1);
        *(undefined4 *)(*pauVar13 + 0x14) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar25,2);
        *(undefined4 *)pauVar13[1] = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar25,3);
        *(undefined4 *)(pauVar13[1] + 0xc) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar13[1] + 0x18) = auVar37._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar28,1);
        *(undefined4 *)(pauVar13[2] + 4) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar28,2);
        *(undefined4 *)(pauVar13[2] + 0x10) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar28,3);
        *(undefined4 *)(pauVar13[2] + 0x1c) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)*pauVar10 = auVar23._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar22,1);
        *(undefined4 *)(param_2 + 0xc + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar22,2);
        *(undefined4 *)(param_2 + 0x18 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar22,3);
        *(undefined4 *)(param_2 + 0x24 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + lVar9 * 0xc) = auVar23._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar24,1);
        *(undefined4 *)(param_2 + 0x3c + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar24,2);
        *(undefined4 *)(param_2 + 0x48 + lVar9 * 0xc) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar24,3);
        *(undefined4 *)(param_2 + 0x54 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(param_2 + 4 + lVar9 * 0xc) = auVar20._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar18,1);
        *(undefined4 *)(param_2 + 0x10 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar18,2);
        *(undefined4 *)(param_2 + 0x1c + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar18,3);
        *(undefined4 *)(param_2 + 0x28 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + lVar9 * 0xc) = auVar20._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar21,1);
        *(undefined4 *)(param_2 + 0x40 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar21,2);
        *(undefined4 *)(param_2 + 0x4c + lVar9 * 0xc) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar21,3);
        *(undefined4 *)(param_2 + 0x58 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(param_2 + 8 + lVar9 * 0xc) = auVar16._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar1 = vextractps_avx(auVar14,1);
        *(undefined4 *)(param_2 + 0x14 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 4) != 0) {
        uVar1 = vextractps_avx(auVar14,2);
        *(undefined4 *)(param_2 + 0x20 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 8) != 0) {
        uVar1 = vextractps_avx(auVar14,3);
        *(undefined4 *)(param_2 + 0x2c + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + lVar9 * 0xc) = auVar16._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar1 = vextractps_avx(auVar17,1);
        *(undefined4 *)(param_2 + 0x44 + lVar9 * 0xc) = uVar1;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar1 = vextractps_avx(auVar17,2);
        *(undefined4 *)(param_2 + 0x50 + lVar9 * 0xc) = uVar1;
      }
      if (cVar6 < '\0') {
        uVar1 = vextractps_avx(auVar17,3);
        *(undefined4 *)(param_2 + 0x5c + lVar9 * 0xc) = uVar1;
      }
    }
  }
  return;
}

