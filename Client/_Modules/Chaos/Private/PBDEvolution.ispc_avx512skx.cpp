// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// PostIterationUpdates___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_CunfCuniCuni_avx512skx @ 140137c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PostIterationUpdates___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_CunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,uint param_5,
               int param_6)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  ulonglong uVar3;
  undefined1 auVar4 [32];
  ulonglong uVar5;
  longlong unaff_RBP;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar23 [32];
  
  auVar28 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar23 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar25 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar24 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar26 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar21 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar22 = ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000;
  auVar4 = ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a;
  auVar30 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar29 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  uVar5 = (ulonglong)param_5;
  uVar9 = param_6 - param_5;
  uVar7 = uVar9 + 7;
  if (-1 < (int)uVar9) {
    uVar7 = uVar9;
  }
  iVar8 = ((uVar7 & 0xfffffff8) - uVar9) + param_6;
  if ((int)param_5 < iVar8) {
    auVar27._4_4_ = param_4;
    auVar27._0_4_ = param_4;
    auVar27._8_4_ = param_4;
    auVar27._12_4_ = param_4;
    auVar27._16_4_ = param_4;
    auVar27._20_4_ = param_4;
    auVar27._24_4_ = param_4;
    auVar27._28_4_ = param_4;
    uVar5 = (ulonglong)(int)param_5;
    pauVar10 = (undefined1 (*) [32])(uVar5 * 0x10 + param_3 + 0x60);
    lVar6 = uVar5 * 0xc + 0x40;
    do {
      auVar13 = vshuff64x2_avx512vl(pauVar10[-3],pauVar10[-1],0);
      auVar14 = vshuff64x2_avx512vl(pauVar10[-3],pauVar10[-1],3);
      auVar15 = vshuff64x2_avx512vl(pauVar10[-2],*pauVar10,0);
      auVar16 = vshuff64x2_avx512vl(pauVar10[-2],*pauVar10,3);
      auVar17 = vunpcklps_avx512vl(auVar13,auVar14);
      auVar13 = vunpckhps_avx512vl(auVar13,auVar14);
      auVar14 = vunpcklps_avx512vl(auVar15,auVar16);
      auVar15 = vunpckhps_avx512vl(auVar15,auVar16);
      auVar15 = vunpcklpd_avx512vl(auVar13,auVar15);
      auVar16 = vunpcklpd_avx512vl(auVar17,auVar14);
      auVar17 = vunpckhpd_avx512vl(auVar17,auVar14);
      auVar13 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar6);
      auVar14 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar6);
      auVar18 = vpermt2ps_avx512vl(auVar13,auVar29,auVar14);
      auVar19 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar6),auVar30,auVar14);
      auVar20 = vinsertf32x4_avx512vl(auVar18,auVar19._0_16_,1);
      auVar18 = vshuff64x2_avx512vl(auVar18,auVar19,3);
      auVar13 = vpermt2ps_avx512vl(auVar14,auVar4,auVar13);
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar22,*(undefined1 (*) [32])(param_2 + lVar6));
      auVar14 = vsubps_avx512vl(auVar16,auVar20);
      auVar18 = vsubps_avx512vl(auVar17,auVar18);
      auVar13 = vsubps_avx512vl(auVar15,auVar13);
      auVar14 = vdivps_avx512vl(auVar14,auVar27);
      auVar18 = vdivps_avx512vl(auVar18,auVar27);
      auVar13 = vdivps_avx512vl(auVar13,auVar27);
      auVar19 = vpermt2ps_avx512vl(auVar13,auVar21,auVar18);
      auVar20 = vpermt2ps_avx512vl(auVar14,auVar26,auVar18);
      auVar20 = vpermt2ps_avx512vl(auVar20,auVar24,auVar19);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar6) = auVar20;
      auVar19 = vpermt2ps_avx512vl(auVar19,auVar25,auVar14);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar6) = auVar19;
      auVar14 = vpermt2ps_avx512vl(auVar18,auVar23,auVar14);
      auVar13 = vpermt2ps_avx512vl(auVar14,auVar28,auVar13);
      *(undefined1 (*) [32])(param_1 + lVar6) = auVar13;
      auVar13 = vpermt2ps_avx512vl(auVar15,auVar21,auVar17);
      auVar14 = vpermt2ps_avx512vl(auVar16,auVar26,auVar17);
      auVar14 = vpermt2ps_avx512vl(auVar14,auVar24,auVar13);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar6) = auVar14;
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar25,auVar16);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar6) = auVar13;
      auVar13 = vpermt2ps_avx512vl(auVar17,auVar23,auVar16);
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar28,auVar15);
      *(undefined1 (*) [32])(param_2 + lVar6) = auVar13;
      uVar5 = uVar5 + 8;
      pauVar10 = pauVar10 + 4;
      lVar6 = lVar6 + 0x60;
    } while ((longlong)uVar5 < (longlong)iVar8);
  }
  auVar4 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar30 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar29 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  if ((int)uVar5 < param_6) {
    auVar21 = vpbroadcastd_avx512vl();
    auVar22._0_4_ =
         auVar21._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar22._4_4_ = auVar21._4_4_ + _UNK_150b50ae4;
    auVar22._8_4_ = auVar21._8_4_ + _UNK_150b50ae8;
    auVar22._12_4_ = auVar21._12_4_ + _UNK_150b50aec;
    auVar22._16_4_ = auVar21._16_4_ + _UNK_150b50af0;
    auVar22._20_4_ = auVar21._20_4_ + _UNK_150b50af4;
    auVar22._24_4_ = auVar21._24_4_ + _UNK_150b50af8;
    auVar22._28_4_ = auVar21._28_4_ + _UNK_150b50afc;
    auVar21 = vpbroadcastd_avx512vl();
    uVar3 = vpcmpgtd_avx512vl(auVar21,auVar22);
    lVar6 = (longlong)(int)uVar5;
    pauVar10 = (undefined1 (*) [32])(param_3 + lVar6 * 0x10);
    bVar11 = (byte)uVar3;
    if (bVar11 == 0xff) {
      auVar22 = vperm2f128_avx(*pauVar10,pauVar10[2],0x20);
      auVar21 = vperm2f128_avx(*pauVar10,pauVar10[2],0x31);
      auVar25 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x20);
      auVar23 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x31);
      auVar26 = vunpcklps_avx(auVar22,auVar21);
      auVar22 = vunpckhps_avx(auVar22,auVar21);
      auVar24 = vunpcklps_avx(auVar25,auVar23);
      auVar21 = vunpckhps_avx(auVar25,auVar23);
      auVar25 = vunpcklpd_avx(auVar22,auVar21);
      auVar23 = vunpcklpd_avx(auVar26,auVar24);
      auVar24 = vunpckhpd_avx(auVar26,auVar24);
      auVar22 = *(undefined1 (*) [32])(param_2 + lVar6 * 0xc);
      auVar21 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar6 * 0xc);
      auVar26 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar6 * 0xc);
      pauVar10 = (undefined1 (*) [32])(param_2 + lVar6 * 0xc);
      auVar28 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar22,auVar21);
      auVar27 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar26,auVar21);
      auVar13 = vinsertf32x4_avx512vl(auVar28,auVar27._0_16_,1);
      auVar28 = vshuff64x2_avx512vl(auVar28,auVar27,3);
      auVar22 = vblendps_avx(auVar21,auVar22,0x24);
      auVar21 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar22,auVar26);
    }
    else {
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
      auVar23._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar23._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar23._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar23._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar23._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar23._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar23._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar23._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
      auVar24._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar24._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar24._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar24._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar24._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar24._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar24._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar24._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + unaff_RBP));
      auVar25._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar25._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar25._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar25._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar25._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar25._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar25._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar25._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      pauVar10 = (undefined1 (*) [32])(param_2 + lVar6 * 0xc);
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar10 * 2));
      auVar13._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar13._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar13._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar13._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar13._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar13._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar13._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar13._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      auVar12 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
      auVar28._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_
      ;
      bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
      auVar28._4_4_ = (uint)bVar2 * auVar22._4_4_ | (uint)!bVar2 * auVar12._4_4_;
      bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
      auVar28._8_4_ = (uint)bVar2 * auVar22._8_4_ | (uint)!bVar2 * auVar12._8_4_;
      bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
      auVar28._12_4_ = (uint)bVar2 * auVar22._12_4_ | (uint)!bVar2 * auVar12._12_4_;
      auVar28._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar28._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar28._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar28._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
      auVar21._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar21._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar21._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar21._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar21._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar21._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar21._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar21._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
    }
    pauVar1 = (undefined1 (*) [32])(param_1 + lVar6 * 0xc);
    auVar22 = vsubps_avx(auVar23,auVar13);
    auVar26 = vsubps_avx512vl(auVar24,auVar28);
    auVar21 = vsubps_avx512vl(auVar25,auVar21);
    auVar14._4_4_ = param_4;
    auVar14._0_4_ = param_4;
    auVar14._8_4_ = param_4;
    auVar14._12_4_ = param_4;
    auVar14._16_4_ = param_4;
    auVar14._20_4_ = param_4;
    auVar14._24_4_ = param_4;
    auVar14._28_4_ = param_4;
    auVar22 = vdivps_avx(auVar22,auVar14);
    auVar26 = vdivps_avx512vl(auVar26,auVar14);
    auVar21 = vdivps_avx512vl(auVar21,auVar14);
    if (bVar11 == 0xff) {
      auVar27 = vpermt2ps_avx512vl(auVar21,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar26);
      auVar28 = vpermt2ps_avx512vl(auVar22,
                                   ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar26);
      auVar28 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar27);
      *pauVar1 = auVar28;
      auVar28 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar27 = vpermt2ps_avx512vl(auVar27,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar22);
      pauVar1[1] = auVar27;
      auVar13 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
      auVar27 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar22 = vpermt2ps_avx512vl(auVar26,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar22);
      auVar22 = vpermt2ps_avx512vl(auVar22,
                                   ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar21);
      pauVar1[2] = auVar22;
      auVar29 = vpermi2ps_avx512vl(auVar29,auVar25,auVar24);
      auVar30 = vpermi2ps_avx512vl(auVar30,auVar23,auVar24);
      auVar30 = vpermt2ps_avx512vl(auVar30,auVar4,auVar29);
      *pauVar10 = auVar30;
      auVar29 = vpermt2ps_avx512vl(auVar29,auVar28,auVar23);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar6 * 0xc) = auVar29;
      auVar29 = vpermt2ps_avx512vl(auVar24,auVar27,auVar23);
      auVar29 = vpermt2ps_avx512vl(auVar29,auVar13,auVar25);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar6 * 0xc) = auVar29;
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar23,uVar3,auVar22);
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar3,
                 auVar26);
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar3,
                 auVar21);
      vscatterdps_avx512vl(ZEXT832(pauVar10) + auVar23,uVar3,auVar23);
      vscatterdps_avx512vl
                (ZEXT832(pauVar10) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar3,
                 auVar24);
      vscatterdps_avx512vl
                (ZEXT832(pauVar10) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar3,
                 auVar25);
    }
  }
  return;
}

// PostIterationUpdates_avx512skx @ 140138160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PostIterationUpdates_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,uint param_5,
               int param_6)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  ulonglong uVar3;
  undefined1 auVar4 [32];
  ulonglong uVar5;
  longlong unaff_RBP;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar23 [32];
  
  auVar28 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar23 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
  auVar25 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar24 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar26 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar21 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar22 = ___ymm_0000000f0000000c000000090000000400000003000000020000000100000000;
  auVar4 = ___ymm_0000000000000000000000000000000600000003000000000000000d0000000a;
  auVar30 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar29 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  uVar5 = (ulonglong)param_5;
  uVar9 = param_6 - param_5;
  uVar7 = uVar9 + 7;
  if (-1 < (int)uVar9) {
    uVar7 = uVar9;
  }
  iVar8 = ((uVar7 & 0xfffffff8) - uVar9) + param_6;
  if ((int)param_5 < iVar8) {
    auVar27._4_4_ = param_4;
    auVar27._0_4_ = param_4;
    auVar27._8_4_ = param_4;
    auVar27._12_4_ = param_4;
    auVar27._16_4_ = param_4;
    auVar27._20_4_ = param_4;
    auVar27._24_4_ = param_4;
    auVar27._28_4_ = param_4;
    uVar5 = (ulonglong)(int)param_5;
    pauVar10 = (undefined1 (*) [32])(uVar5 * 0x10 + param_3 + 0x60);
    lVar6 = uVar5 * 0xc + 0x40;
    do {
      auVar13 = vshuff64x2_avx512vl(pauVar10[-3],pauVar10[-1],0);
      auVar14 = vshuff64x2_avx512vl(pauVar10[-3],pauVar10[-1],3);
      auVar15 = vshuff64x2_avx512vl(pauVar10[-2],*pauVar10,0);
      auVar16 = vshuff64x2_avx512vl(pauVar10[-2],*pauVar10,3);
      auVar17 = vunpcklps_avx512vl(auVar13,auVar14);
      auVar13 = vunpckhps_avx512vl(auVar13,auVar14);
      auVar14 = vunpcklps_avx512vl(auVar15,auVar16);
      auVar15 = vunpckhps_avx512vl(auVar15,auVar16);
      auVar15 = vunpcklpd_avx512vl(auVar13,auVar15);
      auVar16 = vunpcklpd_avx512vl(auVar17,auVar14);
      auVar17 = vunpckhpd_avx512vl(auVar17,auVar14);
      auVar13 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar6);
      auVar14 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar6);
      auVar18 = vpermt2ps_avx512vl(auVar13,auVar29,auVar14);
      auVar19 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar6),auVar30,auVar14);
      auVar20 = vinsertf32x4_avx512vl(auVar18,auVar19._0_16_,1);
      auVar18 = vshuff64x2_avx512vl(auVar18,auVar19,3);
      auVar13 = vpermt2ps_avx512vl(auVar14,auVar4,auVar13);
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar22,*(undefined1 (*) [32])(param_2 + lVar6));
      auVar14 = vsubps_avx512vl(auVar16,auVar20);
      auVar18 = vsubps_avx512vl(auVar17,auVar18);
      auVar13 = vsubps_avx512vl(auVar15,auVar13);
      auVar14 = vdivps_avx512vl(auVar14,auVar27);
      auVar18 = vdivps_avx512vl(auVar18,auVar27);
      auVar13 = vdivps_avx512vl(auVar13,auVar27);
      auVar19 = vpermt2ps_avx512vl(auVar13,auVar21,auVar18);
      auVar20 = vpermt2ps_avx512vl(auVar14,auVar26,auVar18);
      auVar20 = vpermt2ps_avx512vl(auVar20,auVar24,auVar19);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar6) = auVar20;
      auVar19 = vpermt2ps_avx512vl(auVar19,auVar25,auVar14);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar6) = auVar19;
      auVar14 = vpermt2ps_avx512vl(auVar18,auVar23,auVar14);
      auVar13 = vpermt2ps_avx512vl(auVar14,auVar28,auVar13);
      *(undefined1 (*) [32])(param_1 + lVar6) = auVar13;
      auVar13 = vpermt2ps_avx512vl(auVar15,auVar21,auVar17);
      auVar14 = vpermt2ps_avx512vl(auVar16,auVar26,auVar17);
      auVar14 = vpermt2ps_avx512vl(auVar14,auVar24,auVar13);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar6) = auVar14;
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar25,auVar16);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar6) = auVar13;
      auVar13 = vpermt2ps_avx512vl(auVar17,auVar23,auVar16);
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar28,auVar15);
      *(undefined1 (*) [32])(param_2 + lVar6) = auVar13;
      uVar5 = uVar5 + 8;
      pauVar10 = pauVar10 + 4;
      lVar6 = lVar6 + 0x60;
    } while ((longlong)uVar5 < (longlong)iVar8);
  }
  auVar4 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar30 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar29 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  if ((int)uVar5 < param_6) {
    auVar21 = vpbroadcastd_avx512vl();
    auVar22._0_4_ =
         auVar21._0_4_ + ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
    auVar22._4_4_ = auVar21._4_4_ + _UNK_150b50ae4;
    auVar22._8_4_ = auVar21._8_4_ + _UNK_150b50ae8;
    auVar22._12_4_ = auVar21._12_4_ + _UNK_150b50aec;
    auVar22._16_4_ = auVar21._16_4_ + _UNK_150b50af0;
    auVar22._20_4_ = auVar21._20_4_ + _UNK_150b50af4;
    auVar22._24_4_ = auVar21._24_4_ + _UNK_150b50af8;
    auVar22._28_4_ = auVar21._28_4_ + _UNK_150b50afc;
    auVar21 = vpbroadcastd_avx512vl();
    uVar3 = vpcmpgtd_avx512vl(auVar21,auVar22);
    lVar6 = (longlong)(int)uVar5;
    pauVar10 = (undefined1 (*) [32])(param_3 + lVar6 * 0x10);
    bVar11 = (byte)uVar3;
    if (bVar11 == 0xff) {
      auVar22 = vperm2f128_avx(*pauVar10,pauVar10[2],0x20);
      auVar21 = vperm2f128_avx(*pauVar10,pauVar10[2],0x31);
      auVar25 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x20);
      auVar23 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x31);
      auVar26 = vunpcklps_avx(auVar22,auVar21);
      auVar22 = vunpckhps_avx(auVar22,auVar21);
      auVar24 = vunpcklps_avx(auVar25,auVar23);
      auVar21 = vunpckhps_avx(auVar25,auVar23);
      auVar25 = vunpcklpd_avx(auVar22,auVar21);
      auVar23 = vunpcklpd_avx(auVar26,auVar24);
      auVar24 = vunpckhpd_avx(auVar26,auVar24);
      auVar22 = *(undefined1 (*) [32])(param_2 + lVar6 * 0xc);
      auVar21 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar6 * 0xc);
      auVar26 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar6 * 0xc);
      pauVar10 = (undefined1 (*) [32])(param_2 + lVar6 * 0xc);
      auVar28 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar22,auVar21);
      auVar27 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar26,auVar21);
      auVar13 = vinsertf32x4_avx512vl(auVar28,auVar27._0_16_,1);
      auVar28 = vshuff64x2_avx512vl(auVar28,auVar27,3);
      auVar22 = vblendps_avx(auVar21,auVar22,0x24);
      auVar21 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar22,auVar26);
    }
    else {
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
      auVar23._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar23._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar23._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar23._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar23._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar23._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar23._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar23._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
      auVar24._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar24._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar24._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar24._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar24._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar24._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar24._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar24._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + unaff_RBP));
      auVar25._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar25._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar25._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar25._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar25._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar25._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar25._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar25._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      pauVar10 = (undefined1 (*) [32])(param_2 + lVar6 * 0xc);
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar10 * 2));
      auVar13._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar13._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar13._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar13._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar13._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar13._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar13._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar13._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      auVar12 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
      auVar28._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_
      ;
      bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
      auVar28._4_4_ = (uint)bVar2 * auVar22._4_4_ | (uint)!bVar2 * auVar12._4_4_;
      bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
      auVar28._8_4_ = (uint)bVar2 * auVar22._8_4_ | (uint)!bVar2 * auVar12._8_4_;
      bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
      auVar28._12_4_ = (uint)bVar2 * auVar22._12_4_ | (uint)!bVar2 * auVar12._12_4_;
      auVar28._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar28._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar28._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar28._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
      auVar21._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar22._4_4_;
      auVar21._0_4_ = (uint)(bVar11 & 1) * auVar22._0_4_;
      auVar21._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar22._8_4_;
      auVar21._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar22._12_4_;
      auVar21._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar22._16_4_;
      auVar21._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar22._20_4_;
      auVar21._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar22._24_4_;
      auVar21._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar22._28_4_;
    }
    pauVar1 = (undefined1 (*) [32])(param_1 + lVar6 * 0xc);
    auVar22 = vsubps_avx(auVar23,auVar13);
    auVar26 = vsubps_avx512vl(auVar24,auVar28);
    auVar21 = vsubps_avx512vl(auVar25,auVar21);
    auVar14._4_4_ = param_4;
    auVar14._0_4_ = param_4;
    auVar14._8_4_ = param_4;
    auVar14._12_4_ = param_4;
    auVar14._16_4_ = param_4;
    auVar14._20_4_ = param_4;
    auVar14._24_4_ = param_4;
    auVar14._28_4_ = param_4;
    auVar22 = vdivps_avx(auVar22,auVar14);
    auVar26 = vdivps_avx512vl(auVar26,auVar14);
    auVar21 = vdivps_avx512vl(auVar21,auVar14);
    if (bVar11 == 0xff) {
      auVar27 = vpermt2ps_avx512vl(auVar21,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar26);
      auVar28 = vpermt2ps_avx512vl(auVar22,
                                   ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar26);
      auVar28 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar27);
      *pauVar1 = auVar28;
      auVar28 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar27 = vpermt2ps_avx512vl(auVar27,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar22);
      pauVar1[1] = auVar27;
      auVar13 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
      auVar27 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar22 = vpermt2ps_avx512vl(auVar26,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar22);
      auVar22 = vpermt2ps_avx512vl(auVar22,
                                   ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar21);
      pauVar1[2] = auVar22;
      auVar29 = vpermi2ps_avx512vl(auVar29,auVar25,auVar24);
      auVar30 = vpermi2ps_avx512vl(auVar30,auVar23,auVar24);
      auVar30 = vpermt2ps_avx512vl(auVar30,auVar4,auVar29);
      *pauVar10 = auVar30;
      auVar29 = vpermt2ps_avx512vl(auVar29,auVar28,auVar23);
      *(undefined1 (*) [32])(param_2 + 0x20 + lVar6 * 0xc) = auVar29;
      auVar29 = vpermt2ps_avx512vl(auVar24,auVar27,auVar23);
      auVar29 = vpermt2ps_avx512vl(auVar29,auVar13,auVar25);
      *(undefined1 (*) [32])(param_2 + 0x40 + lVar6 * 0xc) = auVar29;
    }
    else {
      vscatterdps_avx512vl(ZEXT832(pauVar1) + auVar23,uVar3,auVar22);
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar3,
                 auVar26);
      vscatterdps_avx512vl
                (ZEXT832(pauVar1) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar3,
                 auVar21);
      vscatterdps_avx512vl(ZEXT832(pauVar10) + auVar23,uVar3,auVar23);
      vscatterdps_avx512vl
                (ZEXT832(pauVar10) +
                 ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar3,
                 auVar24);
      vscatterdps_avx512vl
                (ZEXT832(pauVar10) +
                 ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar3,
                 auVar25);
    }
  }
  return;
}

