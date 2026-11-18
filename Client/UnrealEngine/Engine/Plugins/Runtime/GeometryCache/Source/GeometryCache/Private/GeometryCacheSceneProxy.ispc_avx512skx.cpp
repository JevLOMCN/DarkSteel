// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 8

// InterpolatePositions___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunf_avx512skx @ 140ca8e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolatePositions___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunf_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               float param_6)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auVar9 [16];
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
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM16 [64];
  
  auVar19 = ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e;
  auVar21 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar20 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar23 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar25 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar24 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar22 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar18 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar17 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar9 = in_ZMM16._0_16_;
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar26._4_4_ = param_5;
    auVar26._0_4_ = param_5;
    auVar26._8_4_ = param_5;
    auVar26._12_4_ = param_5;
    auVar26._16_4_ = param_5;
    auVar26._20_4_ = param_5;
    auVar26._24_4_ = param_5;
    auVar26._28_4_ = param_5;
    auVar27._4_4_ = param_6;
    auVar27._0_4_ = param_6;
    auVar27._8_4_ = param_6;
    auVar27._12_4_ = param_6;
    auVar27._16_4_ = param_6;
    auVar27._20_4_ = param_6;
    auVar27._24_4_ = param_6;
    auVar27._28_4_ = param_6;
    lVar7 = 0x40;
    uVar4 = 0;
    auVar9 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    do {
      auVar10 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar12 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar12,auVar10,0x24);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar17,auVar12);
      auVar11 = vpermt2ps_avx512vl(auVar15,auVar22,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar12 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar7),auVar18,auVar12);
      auVar13 = vinsertf32x4_avx512vl(auVar10,auVar12._0_16_,1);
      auVar14 = vshuff64x2_avx512vl(auVar10,auVar12,3);
      auVar10 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7);
      auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar12,auVar10,0x24);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar17,auVar12);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar22,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar12 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar7),auVar18,auVar12);
      auVar16 = vinsertf32x4_avx512vl(auVar10,auVar12._0_16_,1);
      auVar10 = vshuff64x2_avx512vl(auVar10,auVar12,3);
      auVar12 = vmulps_avx512vl(auVar27,auVar16);
      auVar10 = vmulps_avx512vl(auVar27,auVar10);
      auVar15 = vmulps_avx512vl(auVar27,auVar15);
      auVar12 = vfmadd231ps_avx512vl(auVar12,auVar26,auVar13);
      auVar10 = vfmadd231ps_avx512vl(auVar10,auVar26,auVar14);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar26,auVar11);
      auVar11 = vpermt2ps_avx512vl(auVar15,auVar24,auVar10);
      auVar13 = vpermt2ps_avx512vl(auVar12,auVar25,auVar10);
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar23,auVar11);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7) = auVar13;
      auVar11 = vpermt2ps_avx512vl(auVar11,auVar20,auVar12);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7) = auVar11;
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar19,auVar12);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar21,auVar15);
      *(undefined1 (*) [32])(param_3 + lVar7) = auVar10;
      lVar7 = lVar7 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar17 = vpbroadcastd_avx512vl();
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18 = vpbroadcastd_avx512vl();
  uVar3 = vpcmpgtd_avx512vl(auVar18,auVar17);
  uVar5 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar5 * 0xc);
  bVar8 = (byte)uVar3;
  if (bVar8 == 0xff) {
    auVar17 = pauVar1[1];
    auVar18 = vblendps_avx(auVar17,*pauVar1,0x24);
    auVar22 = vpermt2ps_avx512vl(*pauVar1,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar17);
    auVar19 = vpermt2ps_avx512vl(auVar18,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar1[2]);
    auVar17 = vpermt2ps_avx512vl(pauVar1[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar17);
    auVar25._16_16_ = auVar17._0_16_;
    auVar25._0_16_ = auVar22._0_16_;
    auVar24 = vperm2f128_avx(auVar22,auVar17,0x31);
    auVar17 = *(undefined1 (*) [32])(param_2 + uVar5 * 0xc);
    auVar18 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar5 * 0xc);
    auVar22 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar5 * 0xc);
    auVar23 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar17,auVar18);
    auVar20 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar22,auVar18);
    auVar21 = vinsertf32x4_avx512vl(auVar23,auVar20._0_16_,1);
    auVar23 = vshuff64x2_avx512vl(auVar23,auVar20,3);
    auVar17 = vblendps_avx(auVar18,auVar17,0x24);
    auVar17 = vpermt2ps_avx512vl(auVar17,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar22);
  }
  else {
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + uVar3));
    auVar25._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar25._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar25._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar25._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar25._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar25._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar25._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar25._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_2));
    auVar24._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar24._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar24._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar24._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar24._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar24._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar24._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar24._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
    auVar19._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar19._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar19._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar19._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar19._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar19._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar19._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar19._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    param_2 = param_2 + uVar5 * 0xc;
    auVar9 = vxorps_avx512vl(auVar9,auVar9);
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar3));
    auVar21._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_ | (uint)!(bool)(bVar8 & 1) * auVar9._0_4_;
    bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
    auVar21._4_4_ = (uint)bVar2 * auVar17._4_4_ | (uint)!bVar2 * auVar9._4_4_;
    bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
    auVar21._8_4_ = (uint)bVar2 * auVar17._8_4_ | (uint)!bVar2 * auVar9._8_4_;
    bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
    auVar21._12_4_ = (uint)bVar2 * auVar17._12_4_ | (uint)!bVar2 * auVar9._12_4_;
    auVar21._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar21._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar21._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar21._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar9 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000.
                             _0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                    ._0_16_);
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
    auVar23._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_ | (uint)!(bool)(bVar8 & 1) * auVar9._0_4_;
    bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
    auVar23._4_4_ = (uint)bVar2 * auVar17._4_4_ | (uint)!bVar2 * auVar9._4_4_;
    bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
    auVar23._8_4_ = (uint)bVar2 * auVar17._8_4_ | (uint)!bVar2 * auVar9._8_4_;
    bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
    auVar23._12_4_ = (uint)bVar2 * auVar17._12_4_ | (uint)!bVar2 * auVar9._12_4_;
    auVar23._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar23._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar23._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar23._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar18 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBX));
    auVar17._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar18._4_4_;
    auVar17._0_4_ = (uint)(bVar8 & 1) * auVar18._0_4_;
    auVar17._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar18._8_4_;
    auVar17._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar18._12_4_;
    auVar17._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar18._16_4_;
    auVar17._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar18._20_4_;
    auVar17._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar18._24_4_;
    auVar17._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar18._28_4_;
  }
  auVar18 = vbroadcastss_avx512vl(ZEXT416(param_5));
  auVar20._4_4_ = param_6;
  auVar20._0_4_ = param_6;
  auVar20._8_4_ = param_6;
  auVar20._12_4_ = param_6;
  auVar20._16_4_ = param_6;
  auVar20._20_4_ = param_6;
  auVar20._24_4_ = param_6;
  auVar20._28_4_ = param_6;
  auVar22 = vmulps_avx512vl(auVar20,auVar21);
  auVar23 = vmulps_avx512vl(auVar20,auVar23);
  auVar10._0_4_ = param_6 * auVar17._0_4_;
  auVar10._4_4_ = param_6 * auVar17._4_4_;
  auVar10._8_4_ = param_6 * auVar17._8_4_;
  auVar10._12_4_ = param_6 * auVar17._12_4_;
  auVar10._16_4_ = param_6 * auVar17._16_4_;
  auVar10._20_4_ = param_6 * auVar17._20_4_;
  auVar10._24_4_ = param_6 * auVar17._24_4_;
  auVar10._28_4_ = param_6 * auVar17._28_4_;
  auVar17 = vfmadd231ps_avx512vl(auVar22,auVar18,auVar25);
  auVar22 = vfmadd231ps_avx512vl(auVar23,auVar18,auVar24);
  auVar18 = vfmadd231ps_avx512vl(auVar10,auVar18,auVar19);
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar5 * 0xc);
  if (bVar8 == 0xff) {
    auVar24 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar18,auVar22);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar17,auVar22);
    auVar25 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar25,auVar24);
    *pauVar1 = auVar25;
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar24,auVar17);
    pauVar1[1] = auVar24;
    auVar17 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar22,auVar17);
    auVar17 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar17,auVar18);
    pauVar1[2] = auVar17;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar3,auVar17
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar3,auVar22
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar3,auVar18
              );
  }
  return;
}

// InterpolateMotionVectors___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunfunf_avx512skx @ 140ca9200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateMotionVectors___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunfunf_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auVar9 [16];
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
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 in_ZMM16 [64];
  
  auVar20 = ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e;
  auVar22 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar19 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar21 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar25 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar24 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar23 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar18 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar17 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar9 = in_ZMM16._0_16_;
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar26._4_4_ = param_5;
    auVar26._0_4_ = param_5;
    auVar26._8_4_ = param_5;
    auVar26._12_4_ = param_5;
    auVar26._16_4_ = param_5;
    auVar26._20_4_ = param_5;
    auVar26._24_4_ = param_5;
    auVar26._28_4_ = param_5;
    auVar27._4_4_ = param_6;
    auVar27._0_4_ = param_6;
    auVar27._8_4_ = param_6;
    auVar27._12_4_ = param_6;
    auVar27._16_4_ = param_6;
    auVar27._20_4_ = param_6;
    auVar27._24_4_ = param_6;
    auVar27._28_4_ = param_6;
    auVar28._4_4_ = param_7;
    auVar28._0_4_ = param_7;
    auVar28._8_4_ = param_7;
    auVar28._12_4_ = param_7;
    auVar28._16_4_ = param_7;
    auVar28._20_4_ = param_7;
    auVar28._24_4_ = param_7;
    auVar28._28_4_ = param_7;
    lVar7 = 0x40;
    uVar4 = 0;
    auVar9 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    do {
      auVar10 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar12 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar12,auVar10,0x24);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar17,auVar12);
      auVar11 = vpermt2ps_avx512vl(auVar15,auVar23,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar12 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar7),auVar18,auVar12);
      auVar13 = vinsertf32x4_avx512vl(auVar10,auVar12._0_16_,1);
      auVar14 = vshuff64x2_avx512vl(auVar10,auVar12,3);
      auVar10 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7);
      auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar12,auVar10,0x24);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar17,auVar12);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar23,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar12 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar7),auVar18,auVar12);
      auVar16 = vinsertf32x4_avx512vl(auVar10,auVar12._0_16_,1);
      auVar10 = vshuff64x2_avx512vl(auVar10,auVar12,3);
      auVar12 = vmulps_avx512vl(auVar27,auVar16);
      auVar10 = vmulps_avx512vl(auVar27,auVar10);
      auVar15 = vmulps_avx512vl(auVar27,auVar15);
      auVar12 = vfmadd231ps_avx512vl(auVar12,auVar26,auVar13);
      auVar10 = vfmadd231ps_avx512vl(auVar10,auVar26,auVar14);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar26,auVar11);
      auVar12 = vmulps_avx512vl(auVar28,auVar12);
      auVar10 = vmulps_avx512vl(auVar28,auVar10);
      auVar15 = vmulps_avx512vl(auVar28,auVar15);
      auVar11 = vpermt2ps_avx512vl(auVar15,auVar24,auVar10);
      auVar13 = vpermt2ps_avx512vl(auVar12,auVar25,auVar10);
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar21,auVar11);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7) = auVar13;
      auVar11 = vpermt2ps_avx512vl(auVar11,auVar19,auVar12);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7) = auVar11;
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar20,auVar12);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar22,auVar15);
      *(undefined1 (*) [32])(param_3 + lVar7) = auVar10;
      lVar7 = lVar7 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar17 = vpbroadcastd_avx512vl();
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18 = vpbroadcastd_avx512vl();
  uVar3 = vpcmpgtd_avx512vl(auVar18,auVar17);
  uVar5 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar5 * 0xc);
  bVar8 = (byte)uVar3;
  if (bVar8 == 0xff) {
    auVar17 = pauVar1[1];
    auVar18 = vblendps_avx(auVar17,*pauVar1,0x24);
    auVar23 = vpermt2ps_avx512vl(*pauVar1,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar17);
    auVar19 = vpermt2ps_avx512vl(auVar18,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar1[2]);
    auVar17 = vpermt2ps_avx512vl(pauVar1[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar17);
    auVar20 = vinsertf32x4_avx512vl(auVar23,auVar17._0_16_,1);
    auVar21 = vshuff64x2_avx512vl(auVar23,auVar17,3);
    auVar17 = *(undefined1 (*) [32])(param_2 + uVar5 * 0xc);
    auVar18 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar5 * 0xc);
    auVar23 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar5 * 0xc);
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar17,auVar18);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar23,auVar18);
    auVar22 = vinsertf32x4_avx512vl(auVar24,auVar25._0_16_,1);
    auVar24 = vshuff64x2_avx512vl(auVar24,auVar25,3);
    auVar17 = vblendps_avx(auVar18,auVar17,0x24);
    auVar17 = vpermt2ps_avx512vl(auVar17,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar23);
  }
  else {
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + uVar3));
    auVar20._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar20._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar20._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar20._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar20._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar20._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar20._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar20._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_2));
    auVar21._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar21._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar21._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar21._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar21._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar21._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar21._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar21._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
    auVar19._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar19._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar19._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar19._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar19._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar19._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar19._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar19._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    param_2 = param_2 + uVar5 * 0xc;
    auVar9 = vxorps_avx512vl(auVar9,auVar9);
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar3));
    auVar22._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_ | (uint)!(bool)(bVar8 & 1) * auVar9._0_4_;
    bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
    auVar22._4_4_ = (uint)bVar2 * auVar17._4_4_ | (uint)!bVar2 * auVar9._4_4_;
    bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
    auVar22._8_4_ = (uint)bVar2 * auVar17._8_4_ | (uint)!bVar2 * auVar9._8_4_;
    bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
    auVar22._12_4_ = (uint)bVar2 * auVar17._12_4_ | (uint)!bVar2 * auVar9._12_4_;
    auVar22._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar22._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar22._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar22._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar9 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000.
                             _0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                    ._0_16_);
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
    auVar24._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_ | (uint)!(bool)(bVar8 & 1) * auVar9._0_4_;
    bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
    auVar24._4_4_ = (uint)bVar2 * auVar17._4_4_ | (uint)!bVar2 * auVar9._4_4_;
    bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
    auVar24._8_4_ = (uint)bVar2 * auVar17._8_4_ | (uint)!bVar2 * auVar9._8_4_;
    bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
    auVar24._12_4_ = (uint)bVar2 * auVar17._12_4_ | (uint)!bVar2 * auVar9._12_4_;
    auVar24._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar24._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar24._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar24._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar18 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBX));
    auVar17._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar18._4_4_;
    auVar17._0_4_ = (uint)(bVar8 & 1) * auVar18._0_4_;
    auVar17._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar18._8_4_;
    auVar17._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar18._12_4_;
    auVar17._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar18._16_4_;
    auVar17._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar18._20_4_;
    auVar17._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar18._24_4_;
    auVar17._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar18._28_4_;
  }
  auVar12._4_4_ = param_5;
  auVar12._0_4_ = param_5;
  auVar12._8_4_ = param_5;
  auVar12._12_4_ = param_5;
  auVar12._16_4_ = param_5;
  auVar12._20_4_ = param_5;
  auVar12._24_4_ = param_5;
  auVar12._28_4_ = param_5;
  auVar10._4_4_ = param_6;
  auVar10._0_4_ = param_6;
  auVar10._8_4_ = param_6;
  auVar10._12_4_ = param_6;
  auVar10._16_4_ = param_6;
  auVar10._20_4_ = param_6;
  auVar10._24_4_ = param_6;
  auVar10._28_4_ = param_6;
  auVar18 = vmulps_avx512vl(auVar10,auVar22);
  auVar23 = vmulps_avx512vl(auVar10,auVar24);
  auVar17 = vmulps_avx512vl(auVar10,auVar17);
  auVar18 = vfmadd231ps_avx512vl(auVar18,auVar12,auVar20);
  auVar23 = vfmadd231ps_avx512vl(auVar23,auVar12,auVar21);
  auVar17 = vfmadd231ps_avx512vl(auVar17,auVar12,auVar19);
  auVar25._4_4_ = param_7;
  auVar25._0_4_ = param_7;
  auVar25._8_4_ = param_7;
  auVar25._12_4_ = param_7;
  auVar25._16_4_ = param_7;
  auVar25._20_4_ = param_7;
  auVar25._24_4_ = param_7;
  auVar25._28_4_ = param_7;
  auVar18 = vmulps_avx512vl(auVar25,auVar18);
  auVar23 = vmulps_avx512vl(auVar25,auVar23);
  auVar17 = vmulps_avx512vl(auVar25,auVar17);
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar5 * 0xc);
  if (bVar8 == 0xff) {
    auVar24 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar17,auVar23);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar18,auVar23);
    auVar25 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar25,auVar24);
    *pauVar1 = auVar25;
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar24,auVar18);
    pauVar1[1] = auVar24;
    auVar18 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar23,auVar18);
    auVar17 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar18,auVar17);
    pauVar1[2] = auVar17;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar3,auVar18
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar3,auVar23
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar3,auVar17
              );
  }
  return;
}

// InterpolateTangents___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx512skx @ 140ca9a40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateTangents___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,undefined4 param_8,float param_9)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar5 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar5 = param_7;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar18._4_4_ = param_8;
    auVar18._0_4_ = param_8;
    auVar18._8_4_ = param_8;
    auVar18._12_4_ = param_8;
    auVar18._16_4_ = param_8;
    auVar18._20_4_ = param_8;
    auVar18._24_4_ = param_8;
    auVar18._28_4_ = param_8;
    auVar19._4_4_ = param_9;
    auVar19._0_4_ = param_9;
    auVar19._8_4_ = param_9;
    auVar19._12_4_ = param_9;
    auVar19._16_4_ = param_9;
    auVar19._20_4_ = param_9;
    auVar19._24_4_ = param_9;
    auVar19._28_4_ = param_9;
    uVar6 = 0;
    auVar13._0_8_ =
         CONCAT17(DAT_1528e5790,
                  CONCAT16(DAT_1528e5790,
                           CONCAT15(DAT_1528e5790,
                                    CONCAT14(DAT_1528e5790,
                                             CONCAT13(DAT_1528e5790,
                                                      CONCAT12(DAT_1528e5790,
                                                               CONCAT11(DAT_1528e5790,DAT_1528e5790)
                                                              ))))));
    auVar13[8] = DAT_1528e5790;
    auVar13[9] = DAT_1528e5790;
    auVar13[10] = DAT_1528e5790;
    auVar13[0xb] = DAT_1528e5790;
    auVar13[0xc] = DAT_1528e5790;
    auVar13[0xd] = DAT_1528e5790;
    auVar13[0xe] = DAT_1528e5790;
    auVar13[0xf] = DAT_1528e5790;
    auVar25._4_4_ = __real_3f000000;
    auVar25._0_4_ = __real_3f000000;
    auVar25._8_4_ = __real_3f000000;
    auVar25._12_4_ = __real_3f000000;
    auVar25._16_4_ = __real_3f000000;
    auVar25._20_4_ = __real_3f000000;
    auVar25._24_4_ = __real_3f000000;
    auVar25._28_4_ = __real_3f000000;
    do {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(param_1 + uVar6);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(param_2 + uVar6);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *(ulonglong *)(param_3 + uVar6);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = *(ulonglong *)(param_4 + uVar6);
      auVar14 = vpmovzxbd_avx512vl(auVar11 ^ auVar13);
      auVar14 = vcvtdq2ps_avx512vl(auVar14);
      auVar15 = vpmovzxbd_avx512vl(auVar12 ^ auVar13);
      auVar15 = vcvtdq2ps_avx512vl(auVar15);
      auVar16 = vpmovzxbd_avx512vl(auVar27 ^ auVar13);
      auVar16 = vcvtdq2ps_avx512vl(auVar16);
      auVar17 = vpmovzxbd_avx512vl(auVar28 ^ auVar13);
      auVar17 = vcvtdq2ps_avx512vl(auVar17);
      auVar15 = vfmadd213ps_avx512vl(auVar15,auVar19,auVar25);
      auVar14 = vfmadd231ps_avx512vl(auVar15,auVar18,auVar14);
      auVar15 = vfmadd213ps_avx512vl(auVar17,auVar19,auVar25);
      auVar14 = vcvttps2dq_avx512vl(auVar14);
      auVar11 = vpmovdb_avx512vl(auVar14);
      auVar14 = vfmadd231ps_avx512vl(auVar15,auVar18,auVar16);
      auVar14 = vcvttps2dq_avx512vl(auVar14);
      auVar12 = vpmovdb_avx512vl(auVar14);
      *(ulonglong *)(param_5 + uVar6) = auVar11._0_8_ ^ auVar13._0_8_;
      *(ulonglong *)(param_6 + uVar6) = auVar12._0_8_ ^ auVar13._0_8_;
      uVar6 = uVar6 + 8;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar6) {
      return;
    }
  }
  fVar3 = __real_3f000000;
  auVar18 = vpbroadcastd_avx512vl();
  auVar18 = vpor_avx2(auVar18,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar19 = vpbroadcastd_avx512vl();
  uVar1 = vpcmpgtd_avx512vl(auVar19,auVar18);
  uVar6 = uVar6 & 0xffffffff;
  bVar4 = (byte)uVar1;
  if ((~bVar4 & 0x81) == 0) {
    uVar10 = *(ulonglong *)*(undefined1 (*) [16])(param_1 + uVar6);
    uVar7 = *(ulonglong *)*(undefined1 (*) [16])(param_2 + uVar6);
    uVar8 = *(ulonglong *)*(undefined1 (*) [16])(param_3 + uVar6);
    uVar9 = *(ulonglong *)*(undefined1 (*) [16])(param_4 + uVar6);
  }
  else {
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_1 + uVar6));
    uVar10 = CONCAT17((char)(uVar1 >> 7) * auVar13[7],
                      CONCAT16(((byte)(uVar1 >> 6) & 1) * auVar13[6],
                               CONCAT15(((byte)(uVar1 >> 5) & 1) * auVar13[5],
                                        CONCAT14(((byte)(uVar1 >> 4) & 1) * auVar13[4],
                                                 CONCAT13(((byte)(uVar1 >> 3) & 1) * auVar13[3],
                                                          CONCAT12(((byte)(uVar1 >> 2) & 1) *
                                                                   auVar13[2],
                                                                   CONCAT11(((byte)(uVar1 >> 1) & 1)
                                                                            * auVar13[1],
                                                                            (bVar4 & 1) * auVar13[0]
                                                                           )))))));
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_2 + uVar6));
    uVar7 = CONCAT17((char)(uVar1 >> 7) * auVar13[7],
                     CONCAT16(((byte)(uVar1 >> 6) & 1) * auVar13[6],
                              CONCAT15(((byte)(uVar1 >> 5) & 1) * auVar13[5],
                                       CONCAT14(((byte)(uVar1 >> 4) & 1) * auVar13[4],
                                                CONCAT13(((byte)(uVar1 >> 3) & 1) * auVar13[3],
                                                         CONCAT12(((byte)(uVar1 >> 2) & 1) *
                                                                  auVar13[2],
                                                                  CONCAT11(((byte)(uVar1 >> 1) & 1)
                                                                           * auVar13[1],
                                                                           (bVar4 & 1) * auVar13[0])
                                                                 ))))));
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_3 + uVar6));
    uVar8 = CONCAT17((char)(uVar1 >> 7) * auVar13[7],
                     CONCAT16(((byte)(uVar1 >> 6) & 1) * auVar13[6],
                              CONCAT15(((byte)(uVar1 >> 5) & 1) * auVar13[5],
                                       CONCAT14(((byte)(uVar1 >> 4) & 1) * auVar13[4],
                                                CONCAT13(((byte)(uVar1 >> 3) & 1) * auVar13[3],
                                                         CONCAT12(((byte)(uVar1 >> 2) & 1) *
                                                                  auVar13[2],
                                                                  CONCAT11(((byte)(uVar1 >> 1) & 1)
                                                                           * auVar13[1],
                                                                           (bVar4 & 1) * auVar13[0])
                                                                 ))))));
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4 + uVar6));
    uVar9 = CONCAT17((char)(uVar1 >> 7) * auVar13[7],
                     CONCAT16(((byte)(uVar1 >> 6) & 1) * auVar13[6],
                              CONCAT15(((byte)(uVar1 >> 5) & 1) * auVar13[5],
                                       CONCAT14(((byte)(uVar1 >> 4) & 1) * auVar13[4],
                                                CONCAT13(((byte)(uVar1 >> 3) & 1) * auVar13[3],
                                                         CONCAT12(((byte)(uVar1 >> 2) & 1) *
                                                                  auVar13[2],
                                                                  CONCAT11(((byte)(uVar1 >> 1) & 1)
                                                                           * auVar13[1],
                                                                           (bVar4 & 1) * auVar13[0])
                                                                 ))))));
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar8;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar9;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar7;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar10;
  auVar21[1] = DAT_1528e5790;
  auVar21[0] = DAT_1528e5790;
  auVar21[2] = DAT_1528e5790;
  auVar21[3] = DAT_1528e5790;
  auVar21[4] = DAT_1528e5790;
  auVar21[5] = DAT_1528e5790;
  auVar21[6] = DAT_1528e5790;
  auVar21[7] = DAT_1528e5790;
  auVar21[8] = DAT_1528e5790;
  auVar21[9] = DAT_1528e5790;
  auVar21[10] = DAT_1528e5790;
  auVar21[0xb] = DAT_1528e5790;
  auVar21[0xc] = DAT_1528e5790;
  auVar21[0xd] = DAT_1528e5790;
  auVar21[0xe] = DAT_1528e5790;
  auVar21[0xf] = DAT_1528e5790;
  auVar18 = vpmovzxbd_avx2(auVar23 ^ auVar21);
  auVar19 = vcvtdq2ps_avx512vl(auVar18);
  auVar18 = vpmovzxbd_avx2(auVar24 ^ auVar21);
  auVar18 = vcvtdq2ps_avx512vl(auVar18);
  auVar14._4_4_ = param_8;
  auVar14._0_4_ = param_8;
  auVar14._8_4_ = param_8;
  auVar14._12_4_ = param_8;
  auVar14._16_4_ = param_8;
  auVar14._20_4_ = param_8;
  auVar14._24_4_ = param_8;
  auVar14._28_4_ = param_8;
  auVar15._4_4_ = param_9;
  auVar15._0_4_ = param_9;
  auVar15._8_4_ = param_9;
  auVar15._12_4_ = param_9;
  auVar15._16_4_ = param_9;
  auVar15._20_4_ = param_9;
  auVar15._24_4_ = param_9;
  auVar15._28_4_ = param_9;
  auVar16._4_4_ = __real_3f000000;
  auVar16._0_4_ = __real_3f000000;
  auVar16._8_4_ = __real_3f000000;
  auVar16._12_4_ = __real_3f000000;
  auVar16._16_4_ = __real_3f000000;
  auVar16._20_4_ = __real_3f000000;
  auVar16._24_4_ = __real_3f000000;
  auVar16._28_4_ = __real_3f000000;
  auVar18 = vfmadd213ps_avx512vl(auVar18,auVar15,auVar16);
  auVar18 = vfmadd231ps_avx512vl(auVar18,auVar14,auVar19);
  auVar18 = vcvttps2dq_avx512vl(auVar18);
  auVar13 = vpmovdb_avx512vl(auVar18);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = auVar13._0_8_;
  auVar20 = auVar20 ^ auVar21;
  if ((uVar1 & 1) != 0) {
    *(char *)(param_5 + uVar6) = auVar20[0];
  }
  if ((uVar1 & 2) == 0) {
    auVar18 = vpmovzxbd_avx512vl(auVar26 ^ auVar21);
  }
  else {
    *(char *)(param_5 + 1 + uVar6) = auVar20[1];
    auVar18 = vpmovzxbd_avx512vl(auVar26 ^ auVar21);
  }
  if ((uVar1 & 4) == 0) {
    auVar19 = vpmovzxbd_avx512vl(auVar22 ^ auVar21);
    auVar18 = vcvtdq2ps_avx512vl(auVar18);
  }
  else {
    *(char *)(param_5 + 2 + uVar6) = auVar20[2];
    auVar19 = vpmovzxbd_avx512vl(auVar22 ^ auVar21);
    auVar18 = vcvtdq2ps_avx512vl(auVar18);
  }
  if ((uVar1 & 8) == 0) {
    auVar19 = vcvtdq2ps_avx512vl(auVar19);
    auVar17._0_4_ = param_9 * (float)auVar18._0_4_ + fVar3;
    auVar17._4_4_ = param_9 * (float)auVar18._4_4_ + fVar3;
    auVar17._8_4_ = param_9 * (float)auVar18._8_4_ + fVar3;
    auVar17._12_4_ = param_9 * (float)auVar18._12_4_ + fVar3;
    auVar17._16_4_ = param_9 * (float)auVar18._16_4_ + fVar3;
    auVar17._20_4_ = param_9 * (float)auVar18._20_4_ + fVar3;
    auVar17._24_4_ = param_9 * (float)auVar18._24_4_ + fVar3;
    auVar17._28_4_ = param_9 * (float)auVar18._28_4_ + fVar3;
  }
  else {
    *(char *)(param_5 + 3 + uVar6) = auVar20[3];
    auVar19 = vcvtdq2ps_avx512vl(auVar19);
    auVar17._0_4_ = param_9 * (float)auVar18._0_4_ + fVar3;
    auVar17._4_4_ = param_9 * (float)auVar18._4_4_ + fVar3;
    auVar17._8_4_ = param_9 * (float)auVar18._8_4_ + fVar3;
    auVar17._12_4_ = param_9 * (float)auVar18._12_4_ + fVar3;
    auVar17._16_4_ = param_9 * (float)auVar18._16_4_ + fVar3;
    auVar17._20_4_ = param_9 * (float)auVar18._20_4_ + fVar3;
    auVar17._24_4_ = param_9 * (float)auVar18._24_4_ + fVar3;
    auVar17._28_4_ = param_9 * (float)auVar18._28_4_ + fVar3;
  }
  if ((uVar1 & 0x10) == 0) {
    auVar18 = vfmadd213ps_avx512vl(auVar19,auVar14,auVar17);
  }
  else {
    *(char *)(param_5 + 4 + uVar6) = auVar20[4];
    auVar18 = vfmadd213ps_avx512vl(auVar19,auVar14,auVar17);
  }
  if ((uVar1 & 0x20) == 0) {
    auVar18 = vcvttps2dq_avx512vl(auVar18);
  }
  else {
    *(char *)(param_5 + 5 + uVar6) = auVar20[5];
    auVar18 = vcvttps2dq_avx512vl(auVar18);
  }
  if ((uVar1 & 0x40) == 0) {
    auVar13 = vpmovdb_avx512vl(auVar18);
    uVar10 = auVar13._0_8_;
  }
  else {
    *(char *)(param_5 + 6 + uVar6) = auVar20[6];
    auVar13 = vpmovdb_avx512vl(auVar18);
    uVar10 = auVar13._0_8_;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar10;
  if ((char)bVar4 < '\0') {
    *(char *)(param_5 + 7 + uVar6) = auVar20[7];
  }
  auVar2 = auVar2 ^ auVar21;
  if ((uVar1 & 1) != 0) {
    *(char *)(param_6 + uVar6) = auVar2[0];
  }
  if ((uVar1 & 2) != 0) {
    *(char *)(param_6 + 1 + uVar6) = auVar2[1];
  }
  if ((uVar1 & 4) != 0) {
    *(char *)(param_6 + 2 + uVar6) = auVar2[2];
  }
  if ((uVar1 & 8) != 0) {
    *(char *)(param_6 + 3 + uVar6) = auVar2[3];
  }
  if ((uVar1 & 0x10) != 0) {
    *(char *)(param_6 + 4 + uVar6) = auVar2[4];
  }
  if ((uVar1 & 0x20) != 0) {
    *(char *)(param_6 + 5 + uVar6) = auVar2[5];
  }
  if ((uVar1 & 0x40) != 0) {
    *(char *)(param_6 + 6 + uVar6) = auVar2[6];
  }
  if ((char)bVar4 < '\0') {
    *(char *)(param_6 + 7 + uVar6) = auVar2[7];
  }
  return;
}

// InterpolatePositions_avx512skx @ 140ca9e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolatePositions_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               float param_6)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auVar9 [16];
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
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM16 [64];
  
  auVar19 = ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e;
  auVar21 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar20 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar23 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar25 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar24 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar22 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar18 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar17 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar9 = in_ZMM16._0_16_;
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar26._4_4_ = param_5;
    auVar26._0_4_ = param_5;
    auVar26._8_4_ = param_5;
    auVar26._12_4_ = param_5;
    auVar26._16_4_ = param_5;
    auVar26._20_4_ = param_5;
    auVar26._24_4_ = param_5;
    auVar26._28_4_ = param_5;
    auVar27._4_4_ = param_6;
    auVar27._0_4_ = param_6;
    auVar27._8_4_ = param_6;
    auVar27._12_4_ = param_6;
    auVar27._16_4_ = param_6;
    auVar27._20_4_ = param_6;
    auVar27._24_4_ = param_6;
    auVar27._28_4_ = param_6;
    lVar7 = 0x40;
    uVar4 = 0;
    auVar9 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    do {
      auVar10 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar12 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar12,auVar10,0x24);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar17,auVar12);
      auVar11 = vpermt2ps_avx512vl(auVar15,auVar22,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar12 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar7),auVar18,auVar12);
      auVar13 = vinsertf32x4_avx512vl(auVar10,auVar12._0_16_,1);
      auVar14 = vshuff64x2_avx512vl(auVar10,auVar12,3);
      auVar10 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7);
      auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar12,auVar10,0x24);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar17,auVar12);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar22,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar12 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar7),auVar18,auVar12);
      auVar16 = vinsertf32x4_avx512vl(auVar10,auVar12._0_16_,1);
      auVar10 = vshuff64x2_avx512vl(auVar10,auVar12,3);
      auVar12 = vmulps_avx512vl(auVar27,auVar16);
      auVar10 = vmulps_avx512vl(auVar27,auVar10);
      auVar15 = vmulps_avx512vl(auVar27,auVar15);
      auVar12 = vfmadd231ps_avx512vl(auVar12,auVar26,auVar13);
      auVar10 = vfmadd231ps_avx512vl(auVar10,auVar26,auVar14);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar26,auVar11);
      auVar11 = vpermt2ps_avx512vl(auVar15,auVar24,auVar10);
      auVar13 = vpermt2ps_avx512vl(auVar12,auVar25,auVar10);
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar23,auVar11);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7) = auVar13;
      auVar11 = vpermt2ps_avx512vl(auVar11,auVar20,auVar12);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7) = auVar11;
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar19,auVar12);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar21,auVar15);
      *(undefined1 (*) [32])(param_3 + lVar7) = auVar10;
      lVar7 = lVar7 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar17 = vpbroadcastd_avx512vl();
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18 = vpbroadcastd_avx512vl();
  uVar3 = vpcmpgtd_avx512vl(auVar18,auVar17);
  uVar5 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar5 * 0xc);
  bVar8 = (byte)uVar3;
  if (bVar8 == 0xff) {
    auVar17 = pauVar1[1];
    auVar18 = vblendps_avx(auVar17,*pauVar1,0x24);
    auVar22 = vpermt2ps_avx512vl(*pauVar1,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar17);
    auVar19 = vpermt2ps_avx512vl(auVar18,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar1[2]);
    auVar17 = vpermt2ps_avx512vl(pauVar1[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar17);
    auVar25._16_16_ = auVar17._0_16_;
    auVar25._0_16_ = auVar22._0_16_;
    auVar24 = vperm2f128_avx(auVar22,auVar17,0x31);
    auVar17 = *(undefined1 (*) [32])(param_2 + uVar5 * 0xc);
    auVar18 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar5 * 0xc);
    auVar22 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar5 * 0xc);
    auVar23 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar17,auVar18);
    auVar20 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar22,auVar18);
    auVar21 = vinsertf32x4_avx512vl(auVar23,auVar20._0_16_,1);
    auVar23 = vshuff64x2_avx512vl(auVar23,auVar20,3);
    auVar17 = vblendps_avx(auVar18,auVar17,0x24);
    auVar17 = vpermt2ps_avx512vl(auVar17,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar22);
  }
  else {
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + uVar3));
    auVar25._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar25._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar25._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar25._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar25._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar25._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar25._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar25._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_2));
    auVar24._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar24._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar24._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar24._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar24._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar24._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar24._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar24._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
    auVar19._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar19._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar19._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar19._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar19._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar19._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar19._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar19._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    param_2 = param_2 + uVar5 * 0xc;
    auVar9 = vxorps_avx512vl(auVar9,auVar9);
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar3));
    auVar21._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_ | (uint)!(bool)(bVar8 & 1) * auVar9._0_4_;
    bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
    auVar21._4_4_ = (uint)bVar2 * auVar17._4_4_ | (uint)!bVar2 * auVar9._4_4_;
    bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
    auVar21._8_4_ = (uint)bVar2 * auVar17._8_4_ | (uint)!bVar2 * auVar9._8_4_;
    bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
    auVar21._12_4_ = (uint)bVar2 * auVar17._12_4_ | (uint)!bVar2 * auVar9._12_4_;
    auVar21._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar21._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar21._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar21._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar9 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000.
                             _0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                    ._0_16_);
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
    auVar23._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_ | (uint)!(bool)(bVar8 & 1) * auVar9._0_4_;
    bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
    auVar23._4_4_ = (uint)bVar2 * auVar17._4_4_ | (uint)!bVar2 * auVar9._4_4_;
    bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
    auVar23._8_4_ = (uint)bVar2 * auVar17._8_4_ | (uint)!bVar2 * auVar9._8_4_;
    bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
    auVar23._12_4_ = (uint)bVar2 * auVar17._12_4_ | (uint)!bVar2 * auVar9._12_4_;
    auVar23._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar23._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar23._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar23._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar18 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBX));
    auVar17._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar18._4_4_;
    auVar17._0_4_ = (uint)(bVar8 & 1) * auVar18._0_4_;
    auVar17._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar18._8_4_;
    auVar17._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar18._12_4_;
    auVar17._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar18._16_4_;
    auVar17._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar18._20_4_;
    auVar17._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar18._24_4_;
    auVar17._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar18._28_4_;
  }
  auVar18 = vbroadcastss_avx512vl(ZEXT416(param_5));
  auVar20._4_4_ = param_6;
  auVar20._0_4_ = param_6;
  auVar20._8_4_ = param_6;
  auVar20._12_4_ = param_6;
  auVar20._16_4_ = param_6;
  auVar20._20_4_ = param_6;
  auVar20._24_4_ = param_6;
  auVar20._28_4_ = param_6;
  auVar22 = vmulps_avx512vl(auVar20,auVar21);
  auVar23 = vmulps_avx512vl(auVar20,auVar23);
  auVar10._0_4_ = param_6 * auVar17._0_4_;
  auVar10._4_4_ = param_6 * auVar17._4_4_;
  auVar10._8_4_ = param_6 * auVar17._8_4_;
  auVar10._12_4_ = param_6 * auVar17._12_4_;
  auVar10._16_4_ = param_6 * auVar17._16_4_;
  auVar10._20_4_ = param_6 * auVar17._20_4_;
  auVar10._24_4_ = param_6 * auVar17._24_4_;
  auVar10._28_4_ = param_6 * auVar17._28_4_;
  auVar17 = vfmadd231ps_avx512vl(auVar22,auVar18,auVar25);
  auVar22 = vfmadd231ps_avx512vl(auVar23,auVar18,auVar24);
  auVar18 = vfmadd231ps_avx512vl(auVar10,auVar18,auVar19);
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar5 * 0xc);
  if (bVar8 == 0xff) {
    auVar24 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar18,auVar22);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar17,auVar22);
    auVar25 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar25,auVar24);
    *pauVar1 = auVar25;
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar24,auVar17);
    pauVar1[1] = auVar24;
    auVar17 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar22,auVar17);
    auVar17 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar17,auVar18);
    pauVar1[2] = auVar17;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar3,auVar17
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar3,auVar22
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar3,auVar18
              );
  }
  return;
}

// InterpolateMotionVectors_avx512skx @ 140caa250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateMotionVectors_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7)

{
  undefined1 (*pauVar1) [32];
  bool bVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong unaff_RBX;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  undefined1 auVar9 [16];
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
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 in_ZMM16 [64];
  
  auVar20 = ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e;
  auVar22 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar19 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar21 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar25 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar24 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar23 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar18 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar17 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar9 = in_ZMM16._0_16_;
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar26._4_4_ = param_5;
    auVar26._0_4_ = param_5;
    auVar26._8_4_ = param_5;
    auVar26._12_4_ = param_5;
    auVar26._16_4_ = param_5;
    auVar26._20_4_ = param_5;
    auVar26._24_4_ = param_5;
    auVar26._28_4_ = param_5;
    auVar27._4_4_ = param_6;
    auVar27._0_4_ = param_6;
    auVar27._8_4_ = param_6;
    auVar27._12_4_ = param_6;
    auVar27._16_4_ = param_6;
    auVar27._20_4_ = param_6;
    auVar27._24_4_ = param_6;
    auVar27._28_4_ = param_6;
    auVar28._4_4_ = param_7;
    auVar28._0_4_ = param_7;
    auVar28._8_4_ = param_7;
    auVar28._12_4_ = param_7;
    auVar28._16_4_ = param_7;
    auVar28._20_4_ = param_7;
    auVar28._24_4_ = param_7;
    auVar28._28_4_ = param_7;
    lVar7 = 0x40;
    uVar4 = 0;
    auVar9 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    do {
      auVar10 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar7);
      auVar12 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar12,auVar10,0x24);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar17,auVar12);
      auVar11 = vpermt2ps_avx512vl(auVar15,auVar23,*(undefined1 (*) [32])(param_1 + lVar7));
      auVar12 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar7),auVar18,auVar12);
      auVar13 = vinsertf32x4_avx512vl(auVar10,auVar12._0_16_,1);
      auVar14 = vshuff64x2_avx512vl(auVar10,auVar12,3);
      auVar10 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar7);
      auVar12 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar7);
      auVar15 = vblendps_avx(auVar12,auVar10,0x24);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar17,auVar12);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar23,*(undefined1 (*) [32])(param_2 + lVar7));
      auVar12 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar7),auVar18,auVar12);
      auVar16 = vinsertf32x4_avx512vl(auVar10,auVar12._0_16_,1);
      auVar10 = vshuff64x2_avx512vl(auVar10,auVar12,3);
      auVar12 = vmulps_avx512vl(auVar27,auVar16);
      auVar10 = vmulps_avx512vl(auVar27,auVar10);
      auVar15 = vmulps_avx512vl(auVar27,auVar15);
      auVar12 = vfmadd231ps_avx512vl(auVar12,auVar26,auVar13);
      auVar10 = vfmadd231ps_avx512vl(auVar10,auVar26,auVar14);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar26,auVar11);
      auVar12 = vmulps_avx512vl(auVar28,auVar12);
      auVar10 = vmulps_avx512vl(auVar28,auVar10);
      auVar15 = vmulps_avx512vl(auVar28,auVar15);
      auVar11 = vpermt2ps_avx512vl(auVar15,auVar24,auVar10);
      auVar13 = vpermt2ps_avx512vl(auVar12,auVar25,auVar10);
      auVar13 = vpermt2ps_avx512vl(auVar13,auVar21,auVar11);
      *(undefined1 (*) [32])(param_3 + -0x40 + lVar7) = auVar13;
      auVar11 = vpermt2ps_avx512vl(auVar11,auVar19,auVar12);
      *(undefined1 (*) [32])(param_3 + -0x20 + lVar7) = auVar11;
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar20,auVar12);
      auVar10 = vpermt2ps_avx512vl(auVar10,auVar22,auVar15);
      *(undefined1 (*) [32])(param_3 + lVar7) = auVar10;
      lVar7 = lVar7 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar17 = vpbroadcastd_avx512vl();
  auVar17 = vpor_avx2(auVar17,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar18 = vpbroadcastd_avx512vl();
  uVar3 = vpcmpgtd_avx512vl(auVar18,auVar17);
  uVar5 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar5 * 0xc);
  bVar8 = (byte)uVar3;
  if (bVar8 == 0xff) {
    auVar17 = pauVar1[1];
    auVar18 = vblendps_avx(auVar17,*pauVar1,0x24);
    auVar23 = vpermt2ps_avx512vl(*pauVar1,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar17);
    auVar19 = vpermt2ps_avx512vl(auVar18,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar1[2]);
    auVar17 = vpermt2ps_avx512vl(pauVar1[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar17);
    auVar20 = vinsertf32x4_avx512vl(auVar23,auVar17._0_16_,1);
    auVar21 = vshuff64x2_avx512vl(auVar23,auVar17,3);
    auVar17 = *(undefined1 (*) [32])(param_2 + uVar5 * 0xc);
    auVar18 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar5 * 0xc);
    auVar23 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar5 * 0xc);
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar17,auVar18);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar23,auVar18);
    auVar22 = vinsertf32x4_avx512vl(auVar24,auVar25._0_16_,1);
    auVar24 = vshuff64x2_avx512vl(auVar24,auVar25,3);
    auVar17 = vblendps_avx(auVar18,auVar17,0x24);
    auVar17 = vpermt2ps_avx512vl(auVar17,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar23);
  }
  else {
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + uVar3));
    auVar20._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar20._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar20._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar20._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar20._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar20._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar20._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar20._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + param_2));
    auVar21._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar21._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar21._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar21._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar21._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar21._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar21._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar21._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
    auVar19._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar17._4_4_;
    auVar19._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_;
    auVar19._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar17._8_4_;
    auVar19._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar17._12_4_;
    auVar19._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar19._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar19._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar19._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    param_2 = param_2 + uVar5 * 0xc;
    auVar9 = vxorps_avx512vl(auVar9,auVar9);
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar3));
    auVar22._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_ | (uint)!(bool)(bVar8 & 1) * auVar9._0_4_;
    bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
    auVar22._4_4_ = (uint)bVar2 * auVar17._4_4_ | (uint)!bVar2 * auVar9._4_4_;
    bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
    auVar22._8_4_ = (uint)bVar2 * auVar17._8_4_ | (uint)!bVar2 * auVar9._8_4_;
    bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
    auVar22._12_4_ = (uint)bVar2 * auVar17._12_4_ | (uint)!bVar2 * auVar9._12_4_;
    auVar22._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar22._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar22._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar22._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar9 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000.
                             _0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                    ._0_16_);
    auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
    auVar24._0_4_ = (uint)(bVar8 & 1) * auVar17._0_4_ | (uint)!(bool)(bVar8 & 1) * auVar9._0_4_;
    bVar2 = (bool)((byte)(uVar3 >> 1) & 1);
    auVar24._4_4_ = (uint)bVar2 * auVar17._4_4_ | (uint)!bVar2 * auVar9._4_4_;
    bVar2 = (bool)((byte)(uVar3 >> 2) & 1);
    auVar24._8_4_ = (uint)bVar2 * auVar17._8_4_ | (uint)!bVar2 * auVar9._8_4_;
    bVar2 = (bool)((byte)(uVar3 >> 3) & 1);
    auVar24._12_4_ = (uint)bVar2 * auVar17._12_4_ | (uint)!bVar2 * auVar9._12_4_;
    auVar24._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar17._16_4_;
    auVar24._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar17._20_4_;
    auVar24._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar17._24_4_;
    auVar24._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar17._28_4_;
    auVar18 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBX));
    auVar17._4_4_ = (uint)((byte)(uVar3 >> 1) & 1) * auVar18._4_4_;
    auVar17._0_4_ = (uint)(bVar8 & 1) * auVar18._0_4_;
    auVar17._8_4_ = (uint)((byte)(uVar3 >> 2) & 1) * auVar18._8_4_;
    auVar17._12_4_ = (uint)((byte)(uVar3 >> 3) & 1) * auVar18._12_4_;
    auVar17._16_4_ = (uint)((byte)(uVar3 >> 4) & 1) * auVar18._16_4_;
    auVar17._20_4_ = (uint)((byte)(uVar3 >> 5) & 1) * auVar18._20_4_;
    auVar17._24_4_ = (uint)((byte)(uVar3 >> 6) & 1) * auVar18._24_4_;
    auVar17._28_4_ = (uint)(byte)(uVar3 >> 7) * auVar18._28_4_;
  }
  auVar12._4_4_ = param_5;
  auVar12._0_4_ = param_5;
  auVar12._8_4_ = param_5;
  auVar12._12_4_ = param_5;
  auVar12._16_4_ = param_5;
  auVar12._20_4_ = param_5;
  auVar12._24_4_ = param_5;
  auVar12._28_4_ = param_5;
  auVar10._4_4_ = param_6;
  auVar10._0_4_ = param_6;
  auVar10._8_4_ = param_6;
  auVar10._12_4_ = param_6;
  auVar10._16_4_ = param_6;
  auVar10._20_4_ = param_6;
  auVar10._24_4_ = param_6;
  auVar10._28_4_ = param_6;
  auVar18 = vmulps_avx512vl(auVar10,auVar22);
  auVar23 = vmulps_avx512vl(auVar10,auVar24);
  auVar17 = vmulps_avx512vl(auVar10,auVar17);
  auVar18 = vfmadd231ps_avx512vl(auVar18,auVar12,auVar20);
  auVar23 = vfmadd231ps_avx512vl(auVar23,auVar12,auVar21);
  auVar17 = vfmadd231ps_avx512vl(auVar17,auVar12,auVar19);
  auVar25._4_4_ = param_7;
  auVar25._0_4_ = param_7;
  auVar25._8_4_ = param_7;
  auVar25._12_4_ = param_7;
  auVar25._16_4_ = param_7;
  auVar25._20_4_ = param_7;
  auVar25._24_4_ = param_7;
  auVar25._28_4_ = param_7;
  auVar18 = vmulps_avx512vl(auVar25,auVar18);
  auVar23 = vmulps_avx512vl(auVar25,auVar23);
  auVar17 = vmulps_avx512vl(auVar25,auVar17);
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar5 * 0xc);
  if (bVar8 == 0xff) {
    auVar24 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar17,auVar23);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar18,auVar23);
    auVar25 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar25,auVar24);
    *pauVar1 = auVar25;
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar24,auVar18);
    pauVar1[1] = auVar24;
    auVar18 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar23,auVar18);
    auVar17 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar18,auVar17);
    pauVar1[2] = auVar17;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar3,auVar18
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar3,auVar23
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar3,auVar17
              );
  }
  return;
}

// InterpolateUVs_avx512skx @ 140caa690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateUVs_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               float param_6)

{
  undefined1 (*pauVar1) [32];
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  byte bVar5;
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
  
  auVar13 = ___ymm_0000000f000000070000000e000000060000000d000000050000000c00000004;
  auVar14 = ___ymm_0000000b000000030000000a0000000200000009000000010000000800000000;
  auVar12 = ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001;
  auVar11 = ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000;
  uVar4 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar4 = param_4;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar3 = 0;
    if (0 < (int)param_4) goto LAB_140caa788;
  }
  else {
    auVar15._4_4_ = param_5;
    auVar15._0_4_ = param_5;
    auVar15._8_4_ = param_5;
    auVar15._12_4_ = param_5;
    auVar15._16_4_ = param_5;
    auVar15._20_4_ = param_5;
    auVar15._24_4_ = param_5;
    auVar15._28_4_ = param_5;
    auVar16._4_4_ = param_6;
    auVar16._0_4_ = param_6;
    auVar16._8_4_ = param_6;
    auVar16._12_4_ = param_6;
    auVar16._16_4_ = param_6;
    auVar16._20_4_ = param_6;
    auVar16._24_4_ = param_6;
    auVar16._28_4_ = param_6;
    uVar3 = 0;
    do {
      auVar9 = *(undefined1 (*) [32])(param_1 + uVar3 * 8);
      auVar10 = *(undefined1 (*) [32])(param_1 + 0x20 + uVar3 * 8);
      auVar6 = vpermt2ps_avx512vl(auVar9,auVar11,auVar10);
      auVar7 = vpermt2ps_avx512vl(auVar9,auVar12,auVar10);
      auVar9 = *(undefined1 (*) [32])(param_2 + uVar3 * 8);
      auVar10 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar3 * 8);
      auVar8 = vpermt2ps_avx512vl(auVar9,auVar11,auVar10);
      auVar9 = vpermt2ps_avx512vl(auVar9,auVar12,auVar10);
      auVar10 = vmulps_avx512vl(auVar16,auVar8);
      auVar9 = vmulps_avx512vl(auVar16,auVar9);
      auVar10 = vfmadd231ps_avx512vl(auVar10,auVar15,auVar6);
      auVar9 = vfmadd231ps_avx512vl(auVar9,auVar15,auVar7);
      auVar6 = vpermt2ps_avx512vl(auVar10,auVar14,auVar9);
      *(undefined1 (*) [32])(param_3 + uVar3 * 8) = auVar6;
      auVar9 = vpermt2ps_avx512vl(auVar10,auVar13,auVar9);
      *(undefined1 (*) [32])(param_3 + 0x20 + uVar3 * 8) = auVar9;
      uVar3 = uVar3 + 8;
    } while ((int)uVar3 < (int)(uVar4 & 0xfffffff8));
    if ((int)uVar3 < (int)param_4) {
LAB_140caa788:
      auVar11 = vpbroadcastd_avx512vl();
      auVar11 = vpor_avx2(auVar11,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
      auVar12 = vpbroadcastd_avx512vl();
      uVar2 = vpcmpgtd_avx512vl(auVar12,auVar11);
      uVar3 = uVar3 & 0xffffffff;
      pauVar1 = (undefined1 (*) [32])(param_1 + uVar3 * 8);
      bVar5 = (byte)uVar2;
      if (bVar5 == 0xff) {
        auVar14 = vpermt2ps_avx512vl(*pauVar1,
                                     ___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                     ,pauVar1[1]);
        auVar13 = vpermt2ps_avx512vl(*pauVar1,
                                     ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                     ,pauVar1[1]);
        auVar11 = *(undefined1 (*) [32])(param_2 + uVar3 * 8);
        auVar12 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar3 * 8);
        auVar9 = vpermi2ps_avx512vl(___ymm_0000000e0000000c0000000a0000000800000006000000040000000200000000
                                    ,auVar11,auVar12);
        auVar11 = vpermt2ps_avx512vl(auVar11,
                                     ___ymm_0000000f0000000d0000000b0000000900000007000000050000000300000001
                                     ,auVar12);
      }
      else {
        auVar11 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + uVar3));
        auVar14._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar11._4_4_;
        auVar14._0_4_ = (uint)(bVar5 & 1) * auVar11._0_4_;
        auVar14._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar11._8_4_;
        auVar14._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar11._12_4_;
        auVar14._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar11._16_4_;
        auVar14._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar11._20_4_;
        auVar14._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar11._24_4_;
        auVar14._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar11._28_4_;
        auVar11 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar1 + uVar2));
        auVar13._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar11._4_4_;
        auVar13._0_4_ = (uint)(bVar5 & 1) * auVar11._0_4_;
        auVar13._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar11._8_4_;
        auVar13._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar11._12_4_;
        auVar13._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar11._16_4_;
        auVar13._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar11._20_4_;
        auVar13._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar11._24_4_;
        auVar13._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar11._28_4_;
        param_2 = param_2 + uVar3 * 8;
        auVar11 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar3));
        auVar9._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar11._4_4_;
        auVar9._0_4_ = (uint)(bVar5 & 1) * auVar11._0_4_;
        auVar9._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar11._8_4_;
        auVar9._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar11._12_4_;
        auVar9._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar11._16_4_;
        auVar9._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar11._20_4_;
        auVar9._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar11._24_4_;
        auVar9._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar11._28_4_;
        auVar12 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + uVar2));
        auVar11._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar12._4_4_;
        auVar11._0_4_ = (uint)(bVar5 & 1) * auVar12._0_4_;
        auVar11._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar12._8_4_;
        auVar11._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar12._12_4_;
        auVar11._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar12._16_4_;
        auVar11._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar12._20_4_;
        auVar11._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar12._24_4_;
        auVar11._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar12._28_4_;
      }
      auVar12 = vbroadcastss_avx512vl(ZEXT416(param_5));
      auVar6._0_4_ = param_6 * auVar9._0_4_;
      auVar6._4_4_ = param_6 * auVar9._4_4_;
      auVar6._8_4_ = param_6 * auVar9._8_4_;
      auVar6._12_4_ = param_6 * auVar9._12_4_;
      auVar6._16_4_ = param_6 * auVar9._16_4_;
      auVar6._20_4_ = param_6 * auVar9._20_4_;
      auVar6._24_4_ = param_6 * auVar9._24_4_;
      auVar6._28_4_ = param_6 * auVar9._28_4_;
      auVar10._0_4_ = param_6 * auVar11._0_4_;
      auVar10._4_4_ = param_6 * auVar11._4_4_;
      auVar10._8_4_ = param_6 * auVar11._8_4_;
      auVar10._12_4_ = param_6 * auVar11._12_4_;
      auVar10._16_4_ = param_6 * auVar11._16_4_;
      auVar10._20_4_ = param_6 * auVar11._20_4_;
      auVar10._24_4_ = param_6 * auVar11._24_4_;
      auVar10._28_4_ = param_6 * auVar11._28_4_;
      auVar11 = vfmadd231ps_avx512vl(auVar6,auVar12,auVar14);
      auVar12 = vfmadd231ps_avx512vl(auVar10,auVar12,auVar13);
      pauVar1 = (undefined1 (*) [32])(param_3 + uVar3 * 8);
      if (bVar5 != 0xff) {
        vscatterdps_avx512vl
                  (ZEXT832(pauVar1) +
                   ___ymm_0000003800000030000000280000002000000018000000100000000800000000,uVar2,
                   auVar11);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar1) +
                   ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004,uVar2,
                   auVar12);
        return;
      }
      auVar14 = vpermi2ps_avx512vl(___ymm_0000000b000000030000000a0000000200000009000000010000000800000000
                                   ,auVar11,auVar12);
      *pauVar1 = auVar14;
      auVar11 = vpermi2ps_avx512vl(___ymm_0000000f000000070000000e000000060000000d000000050000000c00000004
                                   ,auVar11,auVar12);
      pauVar1[1] = auVar11;
      return;
    }
  }
  return;
}

// InterpolateColors_avx512skx @ 140caa8e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateColors_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,float param_5,
               undefined4 param_6)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auVar8 [16];
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  
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
    auVar11._4_4_ = param_5;
    auVar11._0_4_ = param_5;
    auVar11._8_4_ = param_5;
    auVar11._12_4_ = param_5;
    auVar11._16_4_ = param_5;
    auVar11._20_4_ = param_5;
    auVar11._24_4_ = param_5;
    auVar11._28_4_ = param_5;
    auVar12._4_4_ = param_6;
    auVar12._0_4_ = param_6;
    auVar12._8_4_ = param_6;
    auVar12._12_4_ = param_6;
    auVar12._16_4_ = param_6;
    auVar12._20_4_ = param_6;
    auVar12._24_4_ = param_6;
    auVar12._28_4_ = param_6;
    uVar4 = 0;
    auVar16._4_4_ = __real_3f000000;
    auVar16._0_4_ = __real_3f000000;
    auVar16._8_4_ = __real_3f000000;
    auVar16._12_4_ = __real_3f000000;
    auVar16._16_4_ = __real_3f000000;
    auVar16._20_4_ = __real_3f000000;
    auVar16._24_4_ = __real_3f000000;
    auVar16._28_4_ = __real_3f000000;
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = *(ulonglong *)(param_1 + uVar4);
      auVar10 = vpmovzxbd_avx2(auVar8);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulonglong *)(param_2 + uVar4);
      auVar9 = vpmovzxbd_avx512vl(auVar1);
      auVar10 = vcvtdq2ps_avx(auVar10);
      auVar9 = vcvtdq2ps_avx512vl(auVar9);
      auVar9 = vfmadd213ps_avx512vl(auVar9,auVar12,auVar16);
      auVar10 = vfmadd231ps_avx512vl(auVar9,auVar11,auVar10);
      auVar10 = vcvttps2dq_avx512vl(auVar10);
      auVar8 = vpmovdb_avx512vl(auVar10);
      *(longlong *)(param_3 + uVar4) = auVar8._0_8_;
      uVar4 = uVar4 + 8;
    } while (uVar4 < (uVar3 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar11 = vpbroadcastd_avx512vl();
  auVar11 = vpor_avx2(auVar11,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar12 = vpbroadcastd_avx512vl();
  uVar2 = vpcmpgtd_avx512vl(auVar12,auVar11);
  uVar4 = uVar4 & 0xffffffff;
  bVar5 = (byte)uVar2;
  if ((~bVar5 & 0x81) == 0) {
    uVar6 = *(ulonglong *)*(undefined1 (*) [16])(param_1 + uVar4);
    uVar7 = *(ulonglong *)*(undefined1 (*) [16])(param_2 + uVar4);
  }
  else {
    auVar8 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_1 + uVar4));
    uVar6 = CONCAT17((char)(uVar2 >> 7) * auVar8[7],
                     CONCAT16(((byte)(uVar2 >> 6) & 1) * auVar8[6],
                              CONCAT15(((byte)(uVar2 >> 5) & 1) * auVar8[5],
                                       CONCAT14(((byte)(uVar2 >> 4) & 1) * auVar8[4],
                                                CONCAT13(((byte)(uVar2 >> 3) & 1) * auVar8[3],
                                                         CONCAT12(((byte)(uVar2 >> 2) & 1) *
                                                                  auVar8[2],
                                                                  CONCAT11(((byte)(uVar2 >> 1) & 1)
                                                                           * auVar8[1],
                                                                           (bVar5 & 1) * auVar8[0]))
                                                        )))));
    auVar8 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_2 + uVar4));
    uVar7 = CONCAT17((char)(uVar2 >> 7) * auVar8[7],
                     CONCAT16(((byte)(uVar2 >> 6) & 1) * auVar8[6],
                              CONCAT15(((byte)(uVar2 >> 5) & 1) * auVar8[5],
                                       CONCAT14(((byte)(uVar2 >> 4) & 1) * auVar8[4],
                                                CONCAT13(((byte)(uVar2 >> 3) & 1) * auVar8[3],
                                                         CONCAT12(((byte)(uVar2 >> 2) & 1) *
                                                                  auVar8[2],
                                                                  CONCAT11(((byte)(uVar2 >> 1) & 1)
                                                                           * auVar8[1],
                                                                           (bVar5 & 1) * auVar8[0]))
                                                        )))));
  }
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar7;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar6;
  auVar11 = vpmovzxbd_avx2(auVar14);
  auVar11 = vcvtdq2ps_avx(auVar11);
  auVar12 = vpmovzxbd_avx2(auVar15);
  auVar12 = vcvtdq2ps_avx(auVar12);
  auVar9._4_4_ = param_6;
  auVar9._0_4_ = param_6;
  auVar9._8_4_ = param_6;
  auVar9._12_4_ = param_6;
  auVar9._16_4_ = param_6;
  auVar9._20_4_ = param_6;
  auVar9._24_4_ = param_6;
  auVar9._28_4_ = param_6;
  auVar10._4_4_ = __real_3f000000;
  auVar10._0_4_ = __real_3f000000;
  auVar10._8_4_ = __real_3f000000;
  auVar10._12_4_ = __real_3f000000;
  auVar10._16_4_ = __real_3f000000;
  auVar10._20_4_ = __real_3f000000;
  auVar10._24_4_ = __real_3f000000;
  auVar10._28_4_ = __real_3f000000;
  auVar12 = vfmadd213ps_avx512vl(auVar9,auVar12,auVar10);
  auVar13._0_4_ = (int)(auVar11._0_4_ * param_5 + auVar12._0_4_);
  auVar13._4_4_ = (int)(auVar11._4_4_ * param_5 + auVar12._4_4_);
  auVar13._8_4_ = (int)(auVar11._8_4_ * param_5 + auVar12._8_4_);
  auVar13._12_4_ = (int)(auVar11._12_4_ * param_5 + auVar12._12_4_);
  auVar13._16_4_ = (int)(auVar11._16_4_ * param_5 + auVar12._16_4_);
  auVar13._20_4_ = (int)(auVar11._20_4_ * param_5 + auVar12._20_4_);
  auVar13._24_4_ = (int)(auVar11._24_4_ * param_5 + auVar12._24_4_);
  auVar13._28_4_ = (int)(auVar11._28_4_ * param_5 + auVar12._28_4_);
  auVar8 = vpmovdb_avx512vl(auVar13);
  if ((uVar2 & 1) != 0) {
    *(char *)(param_3 + uVar4) = auVar8[0];
  }
  if ((uVar2 & 2) != 0) {
    *(char *)(param_3 + 1 + uVar4) = auVar8[1];
  }
  if ((uVar2 & 4) != 0) {
    *(char *)(param_3 + 2 + uVar4) = auVar8[2];
  }
  if ((uVar2 & 8) != 0) {
    *(char *)(param_3 + 3 + uVar4) = auVar8[3];
  }
  if ((uVar2 & 0x10) != 0) {
    *(char *)(param_3 + 4 + uVar4) = auVar8[4];
  }
  if ((uVar2 & 0x20) != 0) {
    *(char *)(param_3 + 5 + uVar4) = auVar8[5];
  }
  if ((uVar2 & 0x40) != 0) {
    *(char *)(param_3 + 6 + uVar4) = auVar8[6];
  }
  if (-1 < (char)bVar5) {
    return;
  }
  *(char *)(param_3 + 7 + uVar4) = auVar8[7];
  return;
}

// InterpolateTangents_avx512skx @ 140caaa90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateTangents_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,undefined4 param_8,float param_9)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  float fVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  uVar5 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar5 = param_7;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    uVar6 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar18._4_4_ = param_8;
    auVar18._0_4_ = param_8;
    auVar18._8_4_ = param_8;
    auVar18._12_4_ = param_8;
    auVar18._16_4_ = param_8;
    auVar18._20_4_ = param_8;
    auVar18._24_4_ = param_8;
    auVar18._28_4_ = param_8;
    auVar19._4_4_ = param_9;
    auVar19._0_4_ = param_9;
    auVar19._8_4_ = param_9;
    auVar19._12_4_ = param_9;
    auVar19._16_4_ = param_9;
    auVar19._20_4_ = param_9;
    auVar19._24_4_ = param_9;
    auVar19._28_4_ = param_9;
    uVar6 = 0;
    auVar13._0_8_ =
         CONCAT17(DAT_1528e5791,
                  CONCAT16(DAT_1528e5791,
                           CONCAT15(DAT_1528e5791,
                                    CONCAT14(DAT_1528e5791,
                                             CONCAT13(DAT_1528e5791,
                                                      CONCAT12(DAT_1528e5791,
                                                               CONCAT11(DAT_1528e5791,DAT_1528e5791)
                                                              ))))));
    auVar13[8] = DAT_1528e5791;
    auVar13[9] = DAT_1528e5791;
    auVar13[10] = DAT_1528e5791;
    auVar13[0xb] = DAT_1528e5791;
    auVar13[0xc] = DAT_1528e5791;
    auVar13[0xd] = DAT_1528e5791;
    auVar13[0xe] = DAT_1528e5791;
    auVar13[0xf] = DAT_1528e5791;
    auVar25._4_4_ = __real_3f000000;
    auVar25._0_4_ = __real_3f000000;
    auVar25._8_4_ = __real_3f000000;
    auVar25._12_4_ = __real_3f000000;
    auVar25._16_4_ = __real_3f000000;
    auVar25._20_4_ = __real_3f000000;
    auVar25._24_4_ = __real_3f000000;
    auVar25._28_4_ = __real_3f000000;
    do {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = *(ulonglong *)(param_1 + uVar6);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(param_2 + uVar6);
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *(ulonglong *)(param_3 + uVar6);
      auVar28._8_8_ = 0;
      auVar28._0_8_ = *(ulonglong *)(param_4 + uVar6);
      auVar14 = vpmovzxbd_avx512vl(auVar11 ^ auVar13);
      auVar14 = vcvtdq2ps_avx512vl(auVar14);
      auVar15 = vpmovzxbd_avx512vl(auVar12 ^ auVar13);
      auVar15 = vcvtdq2ps_avx512vl(auVar15);
      auVar16 = vpmovzxbd_avx512vl(auVar27 ^ auVar13);
      auVar16 = vcvtdq2ps_avx512vl(auVar16);
      auVar17 = vpmovzxbd_avx512vl(auVar28 ^ auVar13);
      auVar17 = vcvtdq2ps_avx512vl(auVar17);
      auVar15 = vfmadd213ps_avx512vl(auVar15,auVar19,auVar25);
      auVar14 = vfmadd231ps_avx512vl(auVar15,auVar18,auVar14);
      auVar15 = vfmadd213ps_avx512vl(auVar17,auVar19,auVar25);
      auVar14 = vcvttps2dq_avx512vl(auVar14);
      auVar11 = vpmovdb_avx512vl(auVar14);
      auVar14 = vfmadd231ps_avx512vl(auVar15,auVar18,auVar16);
      auVar14 = vcvttps2dq_avx512vl(auVar14);
      auVar12 = vpmovdb_avx512vl(auVar14);
      *(ulonglong *)(param_5 + uVar6) = auVar11._0_8_ ^ auVar13._0_8_;
      *(ulonglong *)(param_6 + uVar6) = auVar12._0_8_ ^ auVar13._0_8_;
      uVar6 = uVar6 + 8;
    } while (uVar6 < (uVar5 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar6) {
      return;
    }
  }
  fVar3 = __real_3f000000;
  auVar18 = vpbroadcastd_avx512vl();
  auVar18 = vpor_avx2(auVar18,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar19 = vpbroadcastd_avx512vl();
  uVar1 = vpcmpgtd_avx512vl(auVar19,auVar18);
  uVar6 = uVar6 & 0xffffffff;
  bVar4 = (byte)uVar1;
  if ((~bVar4 & 0x81) == 0) {
    uVar10 = *(ulonglong *)*(undefined1 (*) [16])(param_1 + uVar6);
    uVar7 = *(ulonglong *)*(undefined1 (*) [16])(param_2 + uVar6);
    uVar8 = *(ulonglong *)*(undefined1 (*) [16])(param_3 + uVar6);
    uVar9 = *(ulonglong *)*(undefined1 (*) [16])(param_4 + uVar6);
  }
  else {
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_1 + uVar6));
    uVar10 = CONCAT17((char)(uVar1 >> 7) * auVar13[7],
                      CONCAT16(((byte)(uVar1 >> 6) & 1) * auVar13[6],
                               CONCAT15(((byte)(uVar1 >> 5) & 1) * auVar13[5],
                                        CONCAT14(((byte)(uVar1 >> 4) & 1) * auVar13[4],
                                                 CONCAT13(((byte)(uVar1 >> 3) & 1) * auVar13[3],
                                                          CONCAT12(((byte)(uVar1 >> 2) & 1) *
                                                                   auVar13[2],
                                                                   CONCAT11(((byte)(uVar1 >> 1) & 1)
                                                                            * auVar13[1],
                                                                            (bVar4 & 1) * auVar13[0]
                                                                           )))))));
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_2 + uVar6));
    uVar7 = CONCAT17((char)(uVar1 >> 7) * auVar13[7],
                     CONCAT16(((byte)(uVar1 >> 6) & 1) * auVar13[6],
                              CONCAT15(((byte)(uVar1 >> 5) & 1) * auVar13[5],
                                       CONCAT14(((byte)(uVar1 >> 4) & 1) * auVar13[4],
                                                CONCAT13(((byte)(uVar1 >> 3) & 1) * auVar13[3],
                                                         CONCAT12(((byte)(uVar1 >> 2) & 1) *
                                                                  auVar13[2],
                                                                  CONCAT11(((byte)(uVar1 >> 1) & 1)
                                                                           * auVar13[1],
                                                                           (bVar4 & 1) * auVar13[0])
                                                                 ))))));
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_3 + uVar6));
    uVar8 = CONCAT17((char)(uVar1 >> 7) * auVar13[7],
                     CONCAT16(((byte)(uVar1 >> 6) & 1) * auVar13[6],
                              CONCAT15(((byte)(uVar1 >> 5) & 1) * auVar13[5],
                                       CONCAT14(((byte)(uVar1 >> 4) & 1) * auVar13[4],
                                                CONCAT13(((byte)(uVar1 >> 3) & 1) * auVar13[3],
                                                         CONCAT12(((byte)(uVar1 >> 2) & 1) *
                                                                  auVar13[2],
                                                                  CONCAT11(((byte)(uVar1 >> 1) & 1)
                                                                           * auVar13[1],
                                                                           (bVar4 & 1) * auVar13[0])
                                                                 ))))));
    auVar13 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_4 + uVar6));
    uVar9 = CONCAT17((char)(uVar1 >> 7) * auVar13[7],
                     CONCAT16(((byte)(uVar1 >> 6) & 1) * auVar13[6],
                              CONCAT15(((byte)(uVar1 >> 5) & 1) * auVar13[5],
                                       CONCAT14(((byte)(uVar1 >> 4) & 1) * auVar13[4],
                                                CONCAT13(((byte)(uVar1 >> 3) & 1) * auVar13[3],
                                                         CONCAT12(((byte)(uVar1 >> 2) & 1) *
                                                                  auVar13[2],
                                                                  CONCAT11(((byte)(uVar1 >> 1) & 1)
                                                                           * auVar13[1],
                                                                           (bVar4 & 1) * auVar13[0])
                                                                 ))))));
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar8;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar9;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar7;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar10;
  auVar21[1] = DAT_1528e5791;
  auVar21[0] = DAT_1528e5791;
  auVar21[2] = DAT_1528e5791;
  auVar21[3] = DAT_1528e5791;
  auVar21[4] = DAT_1528e5791;
  auVar21[5] = DAT_1528e5791;
  auVar21[6] = DAT_1528e5791;
  auVar21[7] = DAT_1528e5791;
  auVar21[8] = DAT_1528e5791;
  auVar21[9] = DAT_1528e5791;
  auVar21[10] = DAT_1528e5791;
  auVar21[0xb] = DAT_1528e5791;
  auVar21[0xc] = DAT_1528e5791;
  auVar21[0xd] = DAT_1528e5791;
  auVar21[0xe] = DAT_1528e5791;
  auVar21[0xf] = DAT_1528e5791;
  auVar18 = vpmovzxbd_avx2(auVar23 ^ auVar21);
  auVar19 = vcvtdq2ps_avx512vl(auVar18);
  auVar18 = vpmovzxbd_avx2(auVar24 ^ auVar21);
  auVar18 = vcvtdq2ps_avx512vl(auVar18);
  auVar14._4_4_ = param_8;
  auVar14._0_4_ = param_8;
  auVar14._8_4_ = param_8;
  auVar14._12_4_ = param_8;
  auVar14._16_4_ = param_8;
  auVar14._20_4_ = param_8;
  auVar14._24_4_ = param_8;
  auVar14._28_4_ = param_8;
  auVar15._4_4_ = param_9;
  auVar15._0_4_ = param_9;
  auVar15._8_4_ = param_9;
  auVar15._12_4_ = param_9;
  auVar15._16_4_ = param_9;
  auVar15._20_4_ = param_9;
  auVar15._24_4_ = param_9;
  auVar15._28_4_ = param_9;
  auVar16._4_4_ = __real_3f000000;
  auVar16._0_4_ = __real_3f000000;
  auVar16._8_4_ = __real_3f000000;
  auVar16._12_4_ = __real_3f000000;
  auVar16._16_4_ = __real_3f000000;
  auVar16._20_4_ = __real_3f000000;
  auVar16._24_4_ = __real_3f000000;
  auVar16._28_4_ = __real_3f000000;
  auVar18 = vfmadd213ps_avx512vl(auVar18,auVar15,auVar16);
  auVar18 = vfmadd231ps_avx512vl(auVar18,auVar14,auVar19);
  auVar18 = vcvttps2dq_avx512vl(auVar18);
  auVar13 = vpmovdb_avx512vl(auVar18);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = auVar13._0_8_;
  auVar20 = auVar20 ^ auVar21;
  if ((uVar1 & 1) != 0) {
    *(char *)(param_5 + uVar6) = auVar20[0];
  }
  if ((uVar1 & 2) == 0) {
    auVar18 = vpmovzxbd_avx512vl(auVar26 ^ auVar21);
  }
  else {
    *(char *)(param_5 + 1 + uVar6) = auVar20[1];
    auVar18 = vpmovzxbd_avx512vl(auVar26 ^ auVar21);
  }
  if ((uVar1 & 4) == 0) {
    auVar19 = vpmovzxbd_avx512vl(auVar22 ^ auVar21);
    auVar18 = vcvtdq2ps_avx512vl(auVar18);
  }
  else {
    *(char *)(param_5 + 2 + uVar6) = auVar20[2];
    auVar19 = vpmovzxbd_avx512vl(auVar22 ^ auVar21);
    auVar18 = vcvtdq2ps_avx512vl(auVar18);
  }
  if ((uVar1 & 8) == 0) {
    auVar19 = vcvtdq2ps_avx512vl(auVar19);
    auVar17._0_4_ = param_9 * (float)auVar18._0_4_ + fVar3;
    auVar17._4_4_ = param_9 * (float)auVar18._4_4_ + fVar3;
    auVar17._8_4_ = param_9 * (float)auVar18._8_4_ + fVar3;
    auVar17._12_4_ = param_9 * (float)auVar18._12_4_ + fVar3;
    auVar17._16_4_ = param_9 * (float)auVar18._16_4_ + fVar3;
    auVar17._20_4_ = param_9 * (float)auVar18._20_4_ + fVar3;
    auVar17._24_4_ = param_9 * (float)auVar18._24_4_ + fVar3;
    auVar17._28_4_ = param_9 * (float)auVar18._28_4_ + fVar3;
  }
  else {
    *(char *)(param_5 + 3 + uVar6) = auVar20[3];
    auVar19 = vcvtdq2ps_avx512vl(auVar19);
    auVar17._0_4_ = param_9 * (float)auVar18._0_4_ + fVar3;
    auVar17._4_4_ = param_9 * (float)auVar18._4_4_ + fVar3;
    auVar17._8_4_ = param_9 * (float)auVar18._8_4_ + fVar3;
    auVar17._12_4_ = param_9 * (float)auVar18._12_4_ + fVar3;
    auVar17._16_4_ = param_9 * (float)auVar18._16_4_ + fVar3;
    auVar17._20_4_ = param_9 * (float)auVar18._20_4_ + fVar3;
    auVar17._24_4_ = param_9 * (float)auVar18._24_4_ + fVar3;
    auVar17._28_4_ = param_9 * (float)auVar18._28_4_ + fVar3;
  }
  if ((uVar1 & 0x10) == 0) {
    auVar18 = vfmadd213ps_avx512vl(auVar19,auVar14,auVar17);
  }
  else {
    *(char *)(param_5 + 4 + uVar6) = auVar20[4];
    auVar18 = vfmadd213ps_avx512vl(auVar19,auVar14,auVar17);
  }
  if ((uVar1 & 0x20) == 0) {
    auVar18 = vcvttps2dq_avx512vl(auVar18);
  }
  else {
    *(char *)(param_5 + 5 + uVar6) = auVar20[5];
    auVar18 = vcvttps2dq_avx512vl(auVar18);
  }
  if ((uVar1 & 0x40) == 0) {
    auVar13 = vpmovdb_avx512vl(auVar18);
    uVar10 = auVar13._0_8_;
  }
  else {
    *(char *)(param_5 + 6 + uVar6) = auVar20[6];
    auVar13 = vpmovdb_avx512vl(auVar18);
    uVar10 = auVar13._0_8_;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar10;
  if ((char)bVar4 < '\0') {
    *(char *)(param_5 + 7 + uVar6) = auVar20[7];
  }
  auVar2 = auVar2 ^ auVar21;
  if ((uVar1 & 1) != 0) {
    *(char *)(param_6 + uVar6) = auVar2[0];
  }
  if ((uVar1 & 2) != 0) {
    *(char *)(param_6 + 1 + uVar6) = auVar2[1];
  }
  if ((uVar1 & 4) != 0) {
    *(char *)(param_6 + 2 + uVar6) = auVar2[2];
  }
  if ((uVar1 & 8) != 0) {
    *(char *)(param_6 + 3 + uVar6) = auVar2[3];
  }
  if ((uVar1 & 0x10) != 0) {
    *(char *)(param_6 + 4 + uVar6) = auVar2[4];
  }
  if ((uVar1 & 0x20) != 0) {
    *(char *)(param_6 + 5 + uVar6) = auVar2[5];
  }
  if ((uVar1 & 0x40) != 0) {
    *(char *)(param_6 + 6 + uVar6) = auVar2[6];
  }
  if ((char)bVar4 < '\0') {
    *(char *)(param_6 + 7 + uVar6) = auVar2[7];
  }
  return;
}

