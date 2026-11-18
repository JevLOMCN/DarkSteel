// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// GetFaceNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx512skx @ 1405bb580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetFaceNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 (*pauVar1) [32];
  byte bVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint uVar9;
  longlong lVar10;
  longlong unaff_R15;
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
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  int iVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar36 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar37 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar38 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar39 [16];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  
  auVar32 = ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e;
  auVar31 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar30 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar29 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar28 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar26 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar27 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar25 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar24 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar39 = in_ZMM20._0_16_;
  auVar38 = in_ZMM19._0_16_;
  auVar37 = in_ZMM18._0_16_;
  auVar36 = in_ZMM17._0_16_;
  auVar12 = in_ZMM16._0_16_;
  uVar6 = (uint)param_4;
  uVar9 = uVar6 + 7;
  if (-1 < (int)uVar6) {
    uVar9 = uVar6;
  }
  uVar9 = uVar9 & 0xfffffff8;
  if ((int)uVar9 < 1) {
    uVar7 = 0;
    if ((int)uVar6 < 1) {
      return;
    }
  }
  else {
    lVar10 = 0x40;
    uVar7 = 0;
    auVar34._4_4_ = __real_00000004;
    auVar34._0_4_ = __real_00000004;
    auVar34._8_4_ = __real_00000004;
    auVar34._12_4_ = __real_00000004;
    auVar34._16_4_ = __real_00000004;
    auVar34._20_4_ = __real_00000004;
    auVar34._24_4_ = __real_00000004;
    auVar34._28_4_ = __real_00000004;
    auVar35._4_4_ = __real_00000008;
    auVar35._0_4_ = __real_00000008;
    auVar35._8_4_ = __real_00000008;
    auVar35._12_4_ = __real_00000008;
    auVar35._16_4_ = __real_00000008;
    auVar35._20_4_ = __real_00000008;
    auVar35._24_4_ = __real_00000008;
    auVar35._28_4_ = __real_00000008;
    auVar13 = vbroadcastss_avx512vl(ZEXT416(__real_00800000));
    auVar12 = auVar13._0_16_;
    auVar36 = __ymm_00000004000000030000000200000001000000000000000c0000000b0000000a._0_16_;
    auVar37 = __ymm_0000000000000002000000000000000900000001000000000000000800000000._0_16_;
    auVar38 = __ymm_00000008000000060000000c00000004000000030000000b0000000100000000._0_16_;
    auVar39 = __ymm_0000000d00000007000000020000000c00000006000000010000000b00000005._0_16_;
    do {
      auVar22 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar10);
      auVar23 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar10);
      auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_3 + lVar10));
      auVar15 = vpermt2d_avx512vl(auVar22,auVar24,auVar23);
      auVar16 = vmovdqa64_avx512vl(auVar14);
      auVar16 = vpermt2d_avx512vl(auVar16,auVar25,auVar23);
      auVar17 = vinserti32x4_avx512vl(auVar15,auVar16._0_16_,1);
      auVar18 = vpaddd_avx512vl(auVar17,auVar17);
      vpaddd_avx512vl(auVar17,auVar18);
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar18 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (ulonglong)uVar9 * 4));
      auVar19 = vpslld_avx512vl(auVar17,2);
      auVar17 = vpslld_avx512vl(auVar17,3);
      auVar17 = vpaddd_avx512vl(auVar17,auVar19);
      auVar19 = vpaddd_avx512vl(auVar17,auVar34);
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (ulonglong)uVar9));
      vpaddd_avx512vl(auVar17,auVar35);
      vxorps_avx512vl(auVar19._0_16_,auVar19._0_16_);
      auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_4));
      auVar15 = vshufi64x2_avx512vl(auVar15,auVar16,3);
      auVar16 = vpaddd_avx512vl(auVar15,auVar15);
      vpaddd_avx512vl(auVar15,auVar16);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar16 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_4 * 4));
      auVar19 = vpslld_avx512vl(auVar15,2);
      auVar15 = vpslld_avx512vl(auVar15,3);
      auVar15 = vpaddd_avx512vl(auVar15,auVar19);
      auVar19 = vpaddd_avx512vl(auVar15,auVar34);
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar21 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_4));
      auVar15 = vpaddd_avx512vl(auVar15,auVar35);
      vxorps_avx512vl(auVar19._0_16_,auVar19._0_16_);
      auVar19 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_3));
      auVar22 = vpblendd_avx2(auVar23,auVar22,0x24);
      auVar22 = vpermt2d_avx512vl(auVar22,auVar27,auVar14);
      auVar23 = vpaddd_avx512vl(auVar22,auVar22);
      vpaddd_avx512vl(auVar22,auVar23);
      vxorps_avx512vl(auVar15._0_16_,auVar15._0_16_);
      auVar23 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RDI * 4));
      auVar14 = vpslld_avx512vl(auVar22,2);
      auVar22 = vpslld_avx512vl(auVar22,3);
      auVar22 = vpaddd_avx512vl(auVar22,auVar14);
      auVar14 = vpaddd_avx512vl(auVar22,auVar34);
      auVar15 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_R15));
      vpaddd_avx512vl(auVar22,auVar35);
      vxorps_avx512vl(auVar14._0_16_,auVar14._0_16_);
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RDI));
      auVar14 = vsubps_avx512vl(auVar16,auVar18);
      auVar16 = vsubps_avx512vl(auVar21,auVar20);
      in_ZMM29 = ZEXT3264(auVar16);
      auVar19 = vsubps_avx512vl(auVar19,auVar17);
      auVar23 = vsubps_avx512vl(auVar23,auVar18);
      auVar15 = vsubps_avx512vl(auVar15,auVar20);
      auVar22 = vsubps_avx512vl(auVar22,auVar17);
      auVar17 = vmulps_avx512vl(auVar14,auVar15);
      auVar18 = vmulps_avx512vl(auVar16,auVar22);
      auVar20 = vmulps_avx512vl(auVar19,auVar23);
      auVar23 = vfmsub231ps_avx512vl(auVar17,auVar16,auVar23);
      in_ZMM28 = ZEXT3264(auVar23);
      auVar15 = vfmsub231ps_avx512vl(auVar18,auVar19,auVar15);
      in_ZMM30 = ZEXT3264(auVar15);
      auVar22 = vfmsub231ps_avx512vl(auVar20,auVar14,auVar22);
      auVar14 = vmulps_avx512vl(auVar22,auVar22);
      auVar14 = vfmadd231ps_avx512vl(auVar14,auVar15,auVar15);
      auVar14 = vfmadd231ps_avx512vl(auVar14,auVar23,auVar23);
      uVar4 = vcmpps_avx512vl(auVar14,auVar13,2);
      auVar14 = vsqrtps_avx512vl(auVar14);
      auVar15 = vdivps_avx512vl(auVar15,auVar14);
      auVar22 = vdivps_avx512vl(auVar22,auVar14);
      auVar23 = vdivps_avx512vl(auVar23,auVar14);
      auVar14 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
      bVar11 = (byte)uVar4;
      auVar16._0_4_ = (uint)(bVar11 & 1) * auVar14._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar15._0_4_
      ;
      bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
      auVar16._4_4_ = (uint)bVar3 * auVar14._4_4_ | (uint)!bVar3 * auVar15._4_4_;
      bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
      auVar16._8_4_ = (uint)bVar3 * auVar14._8_4_ | (uint)!bVar3 * auVar15._8_4_;
      bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
      auVar16._12_4_ = (uint)bVar3 * auVar14._12_4_ | (uint)!bVar3 * auVar15._12_4_;
      bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
      auVar16._16_4_ = (uint)bVar3 * auVar14._16_4_ | (uint)!bVar3 * auVar15._16_4_;
      bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
      auVar16._20_4_ = (uint)bVar3 * auVar14._20_4_ | (uint)!bVar3 * auVar15._20_4_;
      bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
      auVar16._24_4_ = (uint)bVar3 * auVar14._24_4_ | (uint)!bVar3 * auVar15._24_4_;
      bVar3 = SUB81(uVar4 >> 7,0);
      auVar16._28_4_ = (uint)bVar3 * auVar14._28_4_ | (uint)!bVar3 * auVar15._28_4_;
      auVar14._4_4_ = (uint)!(bool)((byte)(uVar4 >> 1) & 1) * auVar22._4_4_;
      auVar14._0_4_ = (uint)!(bool)(bVar11 & 1) * auVar22._0_4_;
      auVar14._8_4_ = (uint)!(bool)((byte)(uVar4 >> 2) & 1) * auVar22._8_4_;
      auVar14._12_4_ = (uint)!(bool)((byte)(uVar4 >> 3) & 1) * auVar22._12_4_;
      auVar14._16_4_ = (uint)!(bool)((byte)(uVar4 >> 4) & 1) * auVar22._16_4_;
      auVar14._20_4_ = (uint)!(bool)((byte)(uVar4 >> 5) & 1) * auVar22._20_4_;
      auVar14._24_4_ = (uint)!(bool)((byte)(uVar4 >> 6) & 1) * auVar22._24_4_;
      bVar3 = SUB81(uVar4 >> 7,0);
      auVar14._28_4_ =
           (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar22._28_4_;
      auVar22._4_4_ = (uint)!(bool)((byte)(uVar4 >> 1) & 1) * auVar23._4_4_;
      auVar22._0_4_ = (uint)!(bool)(bVar11 & 1) * auVar23._0_4_;
      auVar22._8_4_ = (uint)!(bool)((byte)(uVar4 >> 2) & 1) * auVar23._8_4_;
      auVar22._12_4_ = (uint)!(bool)((byte)(uVar4 >> 3) & 1) * auVar23._12_4_;
      auVar22._16_4_ = (uint)!(bool)((byte)(uVar4 >> 4) & 1) * auVar23._16_4_;
      auVar22._20_4_ = (uint)!(bool)((byte)(uVar4 >> 5) & 1) * auVar23._20_4_;
      auVar22._24_4_ = (uint)!(bool)((byte)(uVar4 >> 6) & 1) * auVar23._24_4_;
      auVar22._28_4_ = (uint)!SUB81(uVar4 >> 7,0) * auVar23._28_4_;
      auVar23 = vpermt2ps_avx512vl(auVar22,auVar26,auVar14);
      auVar15 = vpermt2ps_avx512vl(auVar16,auVar28,auVar14);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar29,auVar23);
      in_ZMM27 = ZEXT3264(auVar15);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar10) = auVar15;
      auVar23 = vpermt2ps_avx512vl(auVar23,auVar30,auVar16);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar10) = auVar23;
      auVar23 = vpermt2ps_avx512vl(auVar14,auVar32,auVar16);
      auVar22 = vpermt2ps_avx512vl(auVar23,auVar31,auVar22);
      *(undefined1 (*) [32])(param_1 + lVar10) = auVar22;
      lVar10 = lVar10 + 0x60;
      uVar7 = uVar7 + 8;
    } while ((int)uVar7 < (int)uVar9);
    if ((int)uVar6 <= (int)uVar7) {
      return;
    }
  }
  auVar24 = vpbroadcastd_avx512vl();
  auVar24 = vpor_avx2(auVar24,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar25 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar25,auVar24);
  uVar8 = (ulonglong)uVar7;
  lVar10 = uVar8 * 3;
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar8 * 0xc);
  bVar11 = (byte)uVar4;
  if (bVar11 == 0xff) {
    auVar24 = pauVar1[1];
    auVar25 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                ,*pauVar1,auVar24);
    auVar26 = vpermi2d_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                ,pauVar1[2],auVar24);
    auVar27._16_16_ = ZEXT116(0) * auVar25._16_16_ | ZEXT116(1) * auVar26._0_16_;
    auVar27._0_16_ = ZEXT116(0) * auVar26._0_16_ | ZEXT116(1) * auVar25._0_16_;
    auVar25 = vperm2i128_avx2(auVar25,auVar26,0x31);
    auVar24 = vpblendd_avx2(auVar24,*pauVar1,0x24);
    auVar24 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                ,auVar24,pauVar1[2]);
  }
  else {
    auVar24 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + lVar10));
    auVar27._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar24._4_4_;
    auVar27._0_4_ = (uint)(bVar11 & 1) * auVar24._0_4_;
    auVar27._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar24._8_4_;
    auVar27._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar24._12_4_;
    auVar27._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar24._16_4_;
    auVar27._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar24._20_4_;
    auVar27._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar24._24_4_;
    auVar27._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar24._28_4_;
    auVar24 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + lVar10));
    auVar25._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar24._4_4_;
    auVar25._0_4_ = (uint)(bVar11 & 1) * auVar24._0_4_;
    auVar25._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar24._8_4_;
    auVar25._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar24._12_4_;
    auVar25._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar24._16_4_;
    auVar25._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar24._20_4_;
    auVar25._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar24._24_4_;
    auVar25._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar24._28_4_;
    auVar26 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
    auVar24._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar26._4_4_;
    auVar24._0_4_ = (uint)(bVar11 & 1) * auVar26._0_4_;
    auVar24._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar26._8_4_;
    auVar24._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar26._12_4_;
    auVar24._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar26._16_4_;
    auVar24._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar26._20_4_;
    auVar24._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar26._24_4_;
    auVar24._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar26._28_4_;
  }
  auVar26 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBX * 4));
  auVar28._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar26._4_4_;
  auVar28._0_4_ = (uint)(bVar11 & 1) * auVar26._0_4_;
  auVar28._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar26._8_4_;
  auVar28._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar26._12_4_;
  auVar28._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar26._16_4_;
  auVar28._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar26._20_4_;
  auVar28._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar26._24_4_;
  auVar28._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar26._28_4_;
  vpslld_avx2(auVar27,2);
  vpslld_avx2(auVar27,3);
  auVar12 = vxorps_avx512vl(auVar12,auVar12);
  auVar27 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBP));
  auVar29._0_4_ = (uint)(bVar11 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar29._4_4_ = (uint)bVar3 * auVar27._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar29._8_4_ = (uint)bVar3 * auVar27._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar29._12_4_ = (uint)bVar3 * auVar27._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar29._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar27._16_4_;
  auVar29._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar27._20_4_;
  auVar29._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar27._24_4_;
  auVar29._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar27._28_4_;
  auVar12 = vxorps_avx512vl(auVar36,auVar36);
  auVar27 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
  auVar30._0_4_ = (uint)(bVar11 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar30._4_4_ = (uint)bVar3 * auVar27._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar30._8_4_ = (uint)bVar3 * auVar27._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar30._12_4_ = (uint)bVar3 * auVar27._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar30._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar27._16_4_;
  auVar30._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar27._20_4_;
  auVar30._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar27._24_4_;
  auVar30._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar27._28_4_;
  auVar12 = vxorps_avx512vl(auVar37,auVar37);
  auVar27 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 5));
  auVar31._0_4_ = (uint)(bVar11 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar31._4_4_ = (uint)bVar3 * auVar27._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar31._8_4_ = (uint)bVar3 * auVar27._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar31._12_4_ = (uint)bVar3 * auVar27._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar31._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar27._16_4_;
  auVar31._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar27._20_4_;
  auVar31._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar27._24_4_;
  auVar31._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar27._28_4_;
  vpslld_avx2(auVar25,2);
  vpslld_avx2(auVar25,3);
  auVar12 = vxorps_avx512vl(auVar38,auVar38);
  auVar25 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
  auVar32._0_4_ = (uint)(bVar11 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar32._4_4_ = (uint)bVar3 * auVar25._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar32._8_4_ = (uint)bVar3 * auVar25._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar32._12_4_ = (uint)bVar3 * auVar25._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar32._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar25._16_4_;
  auVar32._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar25._20_4_;
  auVar32._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar25._24_4_;
  auVar32._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar25._28_4_;
  auVar25 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_1));
  auVar13._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar25._4_4_;
  auVar13._0_4_ = (uint)(bVar11 & 1) * auVar25._0_4_;
  auVar13._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar25._8_4_;
  auVar13._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar25._12_4_;
  auVar13._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar25._16_4_;
  auVar13._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar25._20_4_;
  auVar13._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar25._24_4_;
  auVar13._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar25._28_4_;
  auVar12 = vxorps_avx512vl(auVar39,auVar39);
  auVar25 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_1 * 4));
  auVar23._0_4_ = (uint)(bVar11 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar23._4_4_ = (uint)bVar3 * auVar25._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar23._8_4_ = (uint)bVar3 * auVar25._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar23._12_4_ = (uint)bVar3 * auVar25._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar23._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar25._16_4_;
  auVar23._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar25._20_4_;
  auVar23._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar25._24_4_;
  auVar23._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar25._28_4_;
  vpslld_avx2(auVar24,2);
  vpslld_avx2(auVar24,3);
  auVar24 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_1));
  auVar15._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar24._4_4_;
  auVar15._0_4_ = (uint)(bVar11 & 1) * auVar24._0_4_;
  auVar15._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar24._8_4_;
  auVar15._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar24._12_4_;
  auVar15._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar24._16_4_;
  auVar15._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar24._20_4_;
  auVar15._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar24._24_4_;
  auVar15._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar24._28_4_;
  auVar24 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + lVar10));
  auVar17._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar24._4_4_;
  auVar17._0_4_ = (uint)(bVar11 & 1) * auVar24._0_4_;
  auVar17._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar24._8_4_;
  auVar17._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar24._12_4_;
  auVar17._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar24._16_4_;
  auVar17._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar24._20_4_;
  auVar17._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar24._24_4_;
  auVar17._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar24._28_4_;
  auVar24 = vsubps_avx512vl(auVar31,auVar28);
  auVar25 = vsubps_avx512vl(auVar32,auVar29);
  auVar27 = vsubps_avx512vl(auVar13,auVar30);
  auVar26 = vsubps_avx512vl(auVar23,auVar28);
  auVar28 = vsubps_avx512vl(auVar15,auVar29);
  auVar29 = vsubps_avx512vl(auVar17,auVar30);
  auVar30 = vmulps_avx512vl(auVar24,auVar28);
  auVar31 = vmulps_avx512vl(auVar25,auVar29);
  auVar32 = vmulps_avx512vl(auVar27,auVar26);
  auVar25 = vfmsub231ps_avx512vl(auVar30,auVar25,auVar26);
  auVar27 = vfmsub231ps_avx512vl(auVar31,auVar27,auVar28);
  auVar28 = vfmsub231ps_avx512vl(auVar32,auVar24,auVar29);
  auVar24 = vmulps_avx512vl(auVar28,auVar28);
  auVar24 = vfmadd231ps_avx512vl(auVar24,auVar27,auVar27);
  auVar24 = vfmadd231ps_avx512vl(auVar24,auVar25,auVar25);
  auVar26._4_4_ = __real_00800000;
  auVar26._0_4_ = __real_00800000;
  auVar26._8_4_ = __real_00800000;
  auVar26._12_4_ = __real_00800000;
  auVar26._16_4_ = __real_00800000;
  auVar26._20_4_ = __real_00800000;
  auVar26._24_4_ = __real_00800000;
  auVar26._28_4_ = __real_00800000;
  uVar5 = vcmpps_avx512vl(auVar24,auVar26,2);
  auVar24 = vsqrtps_avx(auVar24);
  auVar27 = vdivps_avx512vl(auVar27,auVar24);
  auVar26 = vdivps_avx512vl(auVar28,auVar24);
  auVar24 = vdivps_avx512vl(auVar25,auVar24);
  auVar25 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
  bVar2 = (byte)uVar5;
  auVar18._0_4_ = (uint)(bVar2 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar2 & 1) * auVar27._0_4_;
  bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
  auVar18._4_4_ = (uint)bVar3 * auVar25._4_4_ | (uint)!bVar3 * auVar27._4_4_;
  bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
  auVar18._8_4_ = (uint)bVar3 * auVar25._8_4_ | (uint)!bVar3 * auVar27._8_4_;
  bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
  auVar18._12_4_ = (uint)bVar3 * auVar25._12_4_ | (uint)!bVar3 * auVar27._12_4_;
  bVar3 = (bool)((byte)(uVar5 >> 4) & 1);
  auVar18._16_4_ = (uint)bVar3 * auVar25._16_4_ | (uint)!bVar3 * auVar27._16_4_;
  bVar3 = (bool)((byte)(uVar5 >> 5) & 1);
  auVar18._20_4_ = (uint)bVar3 * auVar25._20_4_ | (uint)!bVar3 * auVar27._20_4_;
  bVar3 = (bool)((byte)(uVar5 >> 6) & 1);
  auVar18._24_4_ = (uint)bVar3 * auVar25._24_4_ | (uint)!bVar3 * auVar27._24_4_;
  bVar3 = SUB81(uVar5 >> 7,0);
  auVar18._28_4_ = (uint)bVar3 * auVar25._28_4_ | (uint)!bVar3 * auVar27._28_4_;
  auVar19._4_4_ = (uint)!(bool)((byte)(uVar5 >> 1) & 1) * auVar26._4_4_;
  auVar19._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar26._0_4_;
  auVar19._8_4_ = (uint)!(bool)((byte)(uVar5 >> 2) & 1) * auVar26._8_4_;
  auVar19._12_4_ = (uint)!(bool)((byte)(uVar5 >> 3) & 1) * auVar26._12_4_;
  auVar19._16_4_ = (uint)!(bool)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
  auVar19._20_4_ = (uint)!(bool)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
  iVar33 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
  auVar19._24_4_ = (uint)!(bool)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
  bVar3 = SUB81(uVar5 >> 7,0);
  auVar19._28_4_ = (uint)bVar3 * iVar33 | (uint)!bVar3 * auVar26._28_4_;
  auVar20._4_4_ = (uint)!(bool)((byte)(uVar5 >> 1) & 1) * auVar24._4_4_;
  auVar20._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar24._0_4_;
  auVar20._8_4_ = (uint)!(bool)((byte)(uVar5 >> 2) & 1) * auVar24._8_4_;
  auVar20._12_4_ = (uint)!(bool)((byte)(uVar5 >> 3) & 1) * auVar24._12_4_;
  auVar20._16_4_ = (uint)!(bool)((byte)(uVar5 >> 4) & 1) * auVar24._16_4_;
  auVar20._20_4_ = (uint)!(bool)((byte)(uVar5 >> 5) & 1) * auVar24._20_4_;
  auVar20._24_4_ = (uint)!(bool)((byte)(uVar5 >> 6) & 1) * auVar24._24_4_;
  bVar3 = SUB81(uVar5 >> 7,0);
  auVar20._28_4_ = (uint)bVar3 * iVar33 | (uint)!bVar3 * auVar24._28_4_;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar8 * 0xc);
  if (bVar11 == 0xff) {
    auVar24 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar20,auVar19);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar18,auVar19);
    auVar25 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar25,auVar24);
    *pauVar1 = auVar25;
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar24,auVar18);
    pauVar1[1] = auVar24;
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar19,auVar18);
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar24,auVar20);
    pauVar1[2] = auVar24;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar4,auVar18
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar4,auVar19
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar4,auVar20
              );
  }
  return;
}

// GetPointNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unTArrayInt_5D__3E_CuniCuniCuni_avx512skx @ 1405bbbb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetPointNormals___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unTArrayInt_5D__3E_CuniCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
               uint param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar21 [64];
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  
  auVar6 = ___xmm_00000007000000000000000000000000;
  uVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  if (0 < (int)param_6) {
    lVar9 = (longlong)param_4;
    if (param_6 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar12 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            auVar12 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar12._8_8_ = 0;
                auVar12._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar12 = vinsertps_avx512f(auVar12,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar12 = vaddps_avx512vl(auVar21._0_16_,auVar12);
                auVar21 = ZEXT1664(auVar12);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar13._8_8_ = 0;
                auVar13._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar12 = vinsertps_avx512f(auVar13,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar12 = vaddps_avx512vl(auVar21._0_16_,auVar12);
                auVar21 = ZEXT1664(auVar12);
              }
              auVar12 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bbfdc;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar13 = vinsertps_avx512f(auVar14,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar12 = vaddps_avx512vl(auVar12,auVar13);
          }
        }
LAB_1405bbfdc:
        auVar13 = vmulps_avx512vl(auVar12,auVar12);
        auVar14 = vmovshdup_avx512vl(auVar13);
        auVar15 = vshufpd_avx512vl(auVar13,auVar13,1);
        auVar13 = vaddss_avx512f(auVar13,auVar14);
        auVar13 = vaddss_avx512f(auVar15,auVar13);
        fVar22 = auVar13._0_4_;
        auVar20 = ZEXT416(uVar5);
        auVar19 = ZEXT416(uVar5);
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar14 = vrsqrt14ss_avx512f(auVar13,auVar13);
            auVar13 = vmulss_avx512f(auVar13,auVar19);
            auVar15 = vmulss_avx512f(auVar14,auVar14);
            auVar15 = vfnmadd213ss_avx512f(auVar15,auVar13,auVar19);
            auVar14 = vfmadd132ss_avx512f(auVar15,auVar14,auVar14);
            auVar15 = vmulss_avx512f(auVar14,auVar14);
            auVar13 = vfnmadd213ss_avx512f(auVar15,auVar13,auVar20);
            auVar14 = vfmadd132ss_avx512f(auVar13,auVar14,auVar14);
            auVar13 = vblendps_avx(auVar12,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar13);
            auVar13 = vpermt2ps_avx512vl(auVar14,auVar6,in_ZMM3._0_16_);
            auVar14 = vmulps_avx512vl(auVar12,auVar13);
            uVar31 = auVar14._0_4_;
            auVar15 = vmovshdup_avx512vl(auVar14);
            uVar23 = auVar15._0_4_;
            auVar14 = vshufpd_avx512vl(auVar14,auVar14,1);
            uVar30 = auVar14._0_4_;
            in_ZMM3 = ZEXT1664(auVar13);
          }
          else {
            auVar15 = vxorps_avx512vl(auVar15,auVar15);
            uVar31 = auVar15._0_4_;
            auVar13 = vxorps_avx512vl(auVar13,auVar13);
            uVar23 = auVar13._0_4_;
            auVar13 = vxorps_avx512vl(auVar14,auVar14);
            uVar30 = auVar13._0_4_;
          }
        }
        else {
          auVar13 = vshufpd_avx512vl(auVar12,auVar12,1);
          uVar30 = auVar13._0_4_;
          auVar13 = vmovshdup_avx512vl(auVar12);
          uVar23 = auVar13._0_4_;
          uVar31 = auVar12._0_4_;
        }
        lVar11 = param_1 + uVar8 * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar23;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar30;
        lVar11 = (uVar8 | 1) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar13 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            auVar13 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar15._8_8_ = 0;
                auVar15._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx512f(auVar15,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar13 = vaddps_avx512vl(auVar21._0_16_,auVar13);
                auVar21 = ZEXT1664(auVar13);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar16._8_8_ = 0;
                auVar16._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx512f(auVar16,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar13 = vaddps_avx512vl(auVar21._0_16_,auVar13);
                auVar21 = ZEXT1664(auVar13);
              }
              auVar13 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bc1ae;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar17._8_8_ = 0;
            auVar17._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar14 = vinsertps_avx512f(auVar17,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar13 = vaddps_avx512vl(auVar13,auVar14);
          }
        }
LAB_1405bc1ae:
        auVar14 = vmulps_avx512vl(auVar13,auVar13);
        auVar15 = vmovshdup_avx512vl(auVar14);
        auVar16 = vshufpd_avx512vl(auVar14,auVar14,1);
        auVar14 = vaddss_avx512f(auVar14,auVar15);
        auVar14 = vaddss_avx512f(auVar16,auVar14);
        fVar22 = auVar14._0_4_;
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar15 = vrsqrt14ss_avx512f(auVar14,auVar14);
            auVar14 = vmulss_avx512f(auVar14,auVar20);
            auVar16 = vmulss_avx512f(auVar15,auVar15);
            auVar16 = vfnmadd213ss_avx512f(auVar16,auVar14,auVar19);
            auVar15 = vfmadd132ss_avx512f(auVar16,auVar15,auVar15);
            auVar16 = vmulss_avx512f(auVar15,auVar15);
            auVar14 = vfnmadd213ss_avx512f(auVar16,auVar14,auVar19);
            auVar15 = vfmadd132ss_avx512f(auVar14,auVar15,auVar15);
            auVar14 = vblendps_avx(auVar13,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar14);
            auVar14 = vpermt2ps_avx512vl(auVar15,auVar6,in_ZMM3._0_16_);
            auVar15 = vmulps_avx512vl(auVar13,auVar14);
            uVar31 = auVar15._0_4_;
            auVar16 = vmovshdup_avx512vl(auVar15);
            uVar23 = auVar16._0_4_;
            auVar15 = vshufpd_avx512vl(auVar15,auVar15,1);
            uVar30 = auVar15._0_4_;
            in_ZMM3 = ZEXT1664(auVar14);
          }
          else {
            auVar16 = vxorps_avx512vl(auVar16,auVar16);
            uVar31 = auVar16._0_4_;
            auVar14 = vxorps_avx512vl(auVar14,auVar14);
            uVar23 = auVar14._0_4_;
            auVar14 = vxorps_avx512vl(auVar15,auVar15);
            uVar30 = auVar14._0_4_;
          }
        }
        else {
          auVar14 = vshufpd_avx512vl(auVar13,auVar13,1);
          uVar30 = auVar14._0_4_;
          auVar14 = vmovshdup_avx512vl(auVar13);
          uVar23 = auVar14._0_4_;
          uVar31 = auVar13._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 1) * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar23;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar30;
        lVar11 = (uVar8 | 2) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar14 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            auVar14 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar18._8_8_ = 0;
                auVar18._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar14 = vinsertps_avx512f(auVar18,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar14 = vaddps_avx512vl(auVar21._0_16_,auVar14);
                auVar21 = ZEXT1664(auVar14);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar25._8_8_ = 0;
                auVar25._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar14 = vinsertps_avx512f(auVar25,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar14 = vaddps_avx512vl(auVar21._0_16_,auVar14);
                auVar21 = ZEXT1664(auVar14);
              }
              auVar14 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bc37e;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar26._8_8_ = 0;
            auVar26._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar15 = vinsertps_avx512f(auVar26,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar14 = vaddps_avx512vl(auVar14,auVar15);
          }
        }
LAB_1405bc37e:
        auVar15 = vmulps_avx512vl(auVar14,auVar14);
        auVar16 = vmovshdup_avx512vl(auVar15);
        auVar17 = vshufpd_avx512vl(auVar15,auVar15,1);
        auVar15 = vaddss_avx512f(auVar15,auVar16);
        auVar15 = vaddss_avx512f(auVar17,auVar15);
        fVar22 = auVar15._0_4_;
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar16 = vrsqrt14ss_avx512f(auVar15,auVar15);
            auVar15 = vmulss_avx512f(auVar15,auVar19);
            auVar17 = vmulss_avx512f(auVar16,auVar16);
            auVar17 = vfnmadd213ss_avx512f(auVar17,auVar15,auVar19);
            auVar16 = vfmadd132ss_avx512f(auVar17,auVar16,auVar16);
            auVar17 = vmulss_avx512f(auVar16,auVar16);
            auVar15 = vfnmadd213ss_avx512f(auVar17,auVar15,auVar20);
            auVar16 = vfmadd132ss_avx512f(auVar15,auVar16,auVar16);
            auVar15 = vblendps_avx(auVar14,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar15);
            auVar15 = vpermt2ps_avx512vl(auVar16,auVar6,in_ZMM3._0_16_);
            auVar16 = vmulps_avx512vl(auVar14,auVar15);
            uVar31 = auVar16._0_4_;
            auVar17 = vmovshdup_avx512vl(auVar16);
            uVar23 = auVar17._0_4_;
            auVar16 = vshufpd_avx512vl(auVar16,auVar16,1);
            uVar30 = auVar16._0_4_;
            in_ZMM3 = ZEXT1664(auVar15);
          }
          else {
            auVar17 = vxorps_avx512vl(auVar17,auVar17);
            uVar31 = auVar17._0_4_;
            auVar15 = vxorps_avx512vl(auVar15,auVar15);
            uVar23 = auVar15._0_4_;
            auVar15 = vxorps_avx512vl(auVar16,auVar16);
            uVar30 = auVar15._0_4_;
          }
        }
        else {
          auVar15 = vshufpd_avx512vl(auVar14,auVar14,1);
          uVar30 = auVar15._0_4_;
          auVar15 = vmovshdup_avx512vl(auVar14);
          uVar23 = auVar15._0_4_;
          uVar31 = auVar14._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 2) * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar23;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar30;
        lVar11 = (uVar8 | 3) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar15 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            auVar15 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar27._8_8_ = 0;
                auVar27._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar15 = vinsertps_avx512f(auVar27,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = vaddps_avx512vl(auVar21._0_16_,auVar15);
                auVar21 = ZEXT1664(auVar15);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar28._8_8_ = 0;
                auVar28._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar15 = vinsertps_avx512f(auVar28,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = vaddps_avx512vl(auVar21._0_16_,auVar15);
                auVar21 = ZEXT1664(auVar15);
              }
              auVar15 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bc54e;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar16 = vinsertps_avx512f(auVar29,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar15 = vaddps_avx512vl(auVar15,auVar16);
          }
        }
LAB_1405bc54e:
        auVar16 = vmulps_avx512vl(auVar15,auVar15);
        auVar17 = vmovshdup_avx512vl(auVar16);
        auVar18 = vshufpd_avx512vl(auVar16,auVar16,1);
        auVar16 = vaddss_avx512f(auVar16,auVar17);
        auVar16 = vaddss_avx512f(auVar18,auVar16);
        fVar22 = auVar16._0_4_;
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar17 = vrsqrt14ss_avx512f(auVar16,auVar16);
            auVar20 = vmulss_avx512f(auVar16,auVar20);
            auVar16 = vmulss_avx512f(auVar17,auVar17);
            auVar16 = vfnmadd213ss_avx512f(auVar16,auVar20,auVar19);
            auVar16 = vfmadd132ss_avx512f(auVar16,auVar17,auVar17);
            auVar17 = vmulss_avx512f(auVar16,auVar16);
            auVar19 = vfnmadd213ss_avx512f(auVar17,auVar20,auVar19);
            auVar20 = vfmadd132ss_avx512f(auVar19,auVar16,auVar16);
            auVar19 = vblendps_avx(auVar15,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar19);
            auVar19 = vpermt2ps_avx512vl(auVar20,auVar6,in_ZMM3._0_16_);
            auVar20 = vmulps_avx512vl(auVar15,auVar19);
            uVar31 = auVar20._0_4_;
            auVar16 = vmovshdup_avx512vl(auVar20);
            uVar23 = auVar16._0_4_;
            auVar20 = vshufpd_avx512vl(auVar20,auVar20,1);
            uVar30 = auVar20._0_4_;
            in_ZMM3 = ZEXT1664(auVar19);
          }
          else {
            auVar19 = vxorps_avx512vl(auVar18,auVar18);
            uVar31 = auVar19._0_4_;
            auVar19 = vxorps_avx512vl(auVar16,auVar16);
            uVar23 = auVar19._0_4_;
            auVar19 = vxorps_avx512vl(auVar17,auVar17);
            uVar30 = auVar19._0_4_;
          }
        }
        else {
          auVar19 = vshufpd_avx512vl(auVar15,auVar15,1);
          uVar30 = auVar19._0_4_;
          auVar19 = vmovshdup_avx512vl(auVar15);
          uVar23 = auVar19._0_4_;
          uVar31 = auVar15._0_4_;
        }
        auVar19 = vblendps_avx(auVar12,in_ZMM1._0_16_,8);
        auVar12 = vblendps_avx(auVar12,in_ZMM2._0_16_,8);
        auVar19 = vblendps_avx(auVar13,auVar19,8);
        auVar12 = vblendps_avx(auVar13,auVar12,8);
        auVar13 = vblendps_avx(auVar14,auVar19,8);
        auVar12 = vblendps_avx(auVar14,auVar12,8);
        auVar13 = vblendps_avx(auVar15,auVar13,8);
        in_ZMM1 = ZEXT1664(auVar13);
        auVar12 = vblendps_avx(auVar15,auVar12,8);
        in_ZMM2 = ZEXT1664(auVar12);
        lVar11 = param_1 + (uVar8 | 3) * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar23;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar30;
        uVar8 = uVar8 + 4;
      } while (uVar8 != (param_6 & 0x7ffffffc));
    }
    auVar6 = ___xmm_00000007000000000000000000000000;
    uVar5 = __real_3f000000;
    fVar4 = __real_3f800000;
    fVar3 = __real_322bcc77;
    if ((ulonglong)(param_6 & 3) != 0) {
      uVar7 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar12 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            auVar12 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar19._8_8_ = 0;
                auVar19._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar12 = vinsertps_avx512f(auVar19,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar12 = vaddps_avx512vl(auVar21._0_16_,auVar12);
                auVar21 = ZEXT1664(auVar12);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar20._8_8_ = 0;
                auVar20._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar12 = vinsertps_avx512f(auVar20,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar12 = vaddps_avx512vl(auVar21._0_16_,auVar12);
                auVar21 = ZEXT1664(auVar12);
              }
              auVar12 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bbd7b;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar13 = vinsertps_avx512f(auVar24,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar12 = vaddps_avx512vl(auVar12,auVar13);
          }
        }
LAB_1405bbd7b:
        auVar13 = vmulps_avx512vl(auVar12,auVar12);
        auVar14 = vmovshdup_avx512vl(auVar13);
        auVar15 = vshufpd_avx512vl(auVar13,auVar13,1);
        auVar13 = vaddss_avx512f(auVar13,auVar14);
        auVar13 = vaddss_avx512f(auVar15,auVar13);
        fVar22 = auVar13._0_4_;
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar14 = vrsqrt14ss_avx512f(auVar13,auVar13);
            auVar13 = vmulss_avx512f(auVar13,ZEXT416(uVar5));
            auVar15 = vmulss_avx512f(auVar14,auVar14);
            auVar15 = vfnmadd213ss_avx512f(auVar15,auVar13,ZEXT416(uVar5));
            auVar14 = vfmadd132ss_avx512f(auVar15,auVar14,auVar14);
            auVar15 = vmulss_avx512f(auVar14,auVar14);
            auVar13 = vfnmadd213ss_avx512f(auVar15,auVar13,ZEXT416(uVar5));
            auVar14 = vfmadd132ss_avx512f(auVar13,auVar14,auVar14);
            auVar13 = vblendps_avx(auVar12,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar13);
            auVar13 = vpermt2ps_avx512vl(auVar14,auVar6,in_ZMM3._0_16_);
            auVar14 = vmulps_avx512vl(auVar12,auVar13);
            uVar31 = auVar14._0_4_;
            auVar15 = vmovshdup_avx512vl(auVar14);
            uVar30 = auVar15._0_4_;
            auVar14 = vshufpd_avx512vl(auVar14,auVar14,1);
            uVar23 = auVar14._0_4_;
            in_ZMM3 = ZEXT1664(auVar13);
          }
          else {
            auVar15 = vxorps_avx512vl(auVar15,auVar15);
            uVar31 = auVar15._0_4_;
            auVar14 = vxorps_avx512vl(auVar14,auVar14);
            uVar30 = auVar14._0_4_;
            auVar13 = vxorps_avx512vl(auVar13,auVar13);
            uVar23 = auVar13._0_4_;
          }
        }
        else {
          auVar13 = vshufpd_avx512vl(auVar12,auVar12,1);
          uVar23 = auVar13._0_4_;
          auVar13 = vmovshdup_avx512vl(auVar12);
          uVar30 = auVar13._0_4_;
          uVar31 = auVar12._0_4_;
        }
        auVar13 = vblendps_avx(auVar12,in_ZMM1._0_16_,8);
        in_ZMM1 = ZEXT1664(auVar13);
        lVar11 = param_1 + uVar8 * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar30;
        auVar12 = vblendps_avx(auVar12,in_ZMM2._0_16_,8);
        in_ZMM2 = ZEXT1664(auVar12);
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar23;
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != (param_6 & 3));
    }
  }
  return;
}

// GetFaceNormals_avx512skx @ 1405bc600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetFaceNormals_avx512skx(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined1 (*pauVar1) [32];
  byte bVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  uint uVar9;
  longlong lVar10;
  longlong unaff_R15;
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
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  int iVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar36 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar37 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar38 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar39 [16];
  undefined1 in_ZMM20 [64];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  
  auVar32 = ___ymm_0000000000000000000000000000000700000006000000050000000f0000000e;
  auVar31 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar30 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
  auVar29 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar28 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar26 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar27 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar25 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar24 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar39 = in_ZMM20._0_16_;
  auVar38 = in_ZMM19._0_16_;
  auVar37 = in_ZMM18._0_16_;
  auVar36 = in_ZMM17._0_16_;
  auVar12 = in_ZMM16._0_16_;
  uVar6 = (uint)param_4;
  uVar9 = uVar6 + 7;
  if (-1 < (int)uVar6) {
    uVar9 = uVar6;
  }
  uVar9 = uVar9 & 0xfffffff8;
  if ((int)uVar9 < 1) {
    uVar7 = 0;
    if ((int)uVar6 < 1) {
      return;
    }
  }
  else {
    lVar10 = 0x40;
    uVar7 = 0;
    auVar34._4_4_ = __real_00000004;
    auVar34._0_4_ = __real_00000004;
    auVar34._8_4_ = __real_00000004;
    auVar34._12_4_ = __real_00000004;
    auVar34._16_4_ = __real_00000004;
    auVar34._20_4_ = __real_00000004;
    auVar34._24_4_ = __real_00000004;
    auVar34._28_4_ = __real_00000004;
    auVar35._4_4_ = __real_00000008;
    auVar35._0_4_ = __real_00000008;
    auVar35._8_4_ = __real_00000008;
    auVar35._12_4_ = __real_00000008;
    auVar35._16_4_ = __real_00000008;
    auVar35._20_4_ = __real_00000008;
    auVar35._24_4_ = __real_00000008;
    auVar35._28_4_ = __real_00000008;
    auVar13 = vbroadcastss_avx512vl(ZEXT416(__real_00800000));
    auVar12 = auVar13._0_16_;
    auVar36 = __ymm_00000004000000030000000200000001000000000000000c0000000b0000000a._0_16_;
    auVar37 = __ymm_0000000000000002000000000000000900000001000000000000000800000000._0_16_;
    auVar38 = __ymm_00000008000000060000000c00000004000000030000000b0000000100000000._0_16_;
    auVar39 = __ymm_0000000d00000007000000020000000c00000006000000010000000b00000005._0_16_;
    do {
      auVar22 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar10);
      auVar23 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar10);
      auVar14 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_3 + lVar10));
      auVar15 = vpermt2d_avx512vl(auVar22,auVar24,auVar23);
      auVar16 = vmovdqa64_avx512vl(auVar14);
      auVar16 = vpermt2d_avx512vl(auVar16,auVar25,auVar23);
      auVar17 = vinserti32x4_avx512vl(auVar15,auVar16._0_16_,1);
      auVar18 = vpaddd_avx512vl(auVar17,auVar17);
      vpaddd_avx512vl(auVar17,auVar18);
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar18 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (ulonglong)uVar9 * 4));
      auVar19 = vpslld_avx512vl(auVar17,2);
      auVar17 = vpslld_avx512vl(auVar17,3);
      auVar17 = vpaddd_avx512vl(auVar17,auVar19);
      auVar19 = vpaddd_avx512vl(auVar17,auVar34);
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + (ulonglong)uVar9));
      vpaddd_avx512vl(auVar17,auVar35);
      vxorps_avx512vl(auVar19._0_16_,auVar19._0_16_);
      auVar17 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_4));
      auVar15 = vshufi64x2_avx512vl(auVar15,auVar16,3);
      auVar16 = vpaddd_avx512vl(auVar15,auVar15);
      vpaddd_avx512vl(auVar15,auVar16);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar16 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_4 * 4));
      auVar19 = vpslld_avx512vl(auVar15,2);
      auVar15 = vpslld_avx512vl(auVar15,3);
      auVar15 = vpaddd_avx512vl(auVar15,auVar19);
      auVar19 = vpaddd_avx512vl(auVar15,auVar34);
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar21 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_4));
      auVar15 = vpaddd_avx512vl(auVar15,auVar35);
      vxorps_avx512vl(auVar19._0_16_,auVar19._0_16_);
      auVar19 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_3));
      auVar22 = vpblendd_avx2(auVar23,auVar22,0x24);
      auVar22 = vpermt2d_avx512vl(auVar22,auVar27,auVar14);
      auVar23 = vpaddd_avx512vl(auVar22,auVar22);
      vpaddd_avx512vl(auVar22,auVar23);
      vxorps_avx512vl(auVar15._0_16_,auVar15._0_16_);
      auVar23 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RDI * 4));
      auVar14 = vpslld_avx512vl(auVar22,2);
      auVar22 = vpslld_avx512vl(auVar22,3);
      auVar22 = vpaddd_avx512vl(auVar22,auVar14);
      auVar14 = vpaddd_avx512vl(auVar22,auVar34);
      auVar15 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_R15));
      vpaddd_avx512vl(auVar22,auVar35);
      vxorps_avx512vl(auVar14._0_16_,auVar14._0_16_);
      auVar22 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RDI));
      auVar14 = vsubps_avx512vl(auVar16,auVar18);
      auVar16 = vsubps_avx512vl(auVar21,auVar20);
      in_ZMM29 = ZEXT3264(auVar16);
      auVar19 = vsubps_avx512vl(auVar19,auVar17);
      auVar23 = vsubps_avx512vl(auVar23,auVar18);
      auVar15 = vsubps_avx512vl(auVar15,auVar20);
      auVar22 = vsubps_avx512vl(auVar22,auVar17);
      auVar17 = vmulps_avx512vl(auVar14,auVar15);
      auVar18 = vmulps_avx512vl(auVar16,auVar22);
      auVar20 = vmulps_avx512vl(auVar19,auVar23);
      auVar23 = vfmsub231ps_avx512vl(auVar17,auVar16,auVar23);
      in_ZMM28 = ZEXT3264(auVar23);
      auVar15 = vfmsub231ps_avx512vl(auVar18,auVar19,auVar15);
      in_ZMM30 = ZEXT3264(auVar15);
      auVar22 = vfmsub231ps_avx512vl(auVar20,auVar14,auVar22);
      auVar14 = vmulps_avx512vl(auVar22,auVar22);
      auVar14 = vfmadd231ps_avx512vl(auVar14,auVar15,auVar15);
      auVar14 = vfmadd231ps_avx512vl(auVar14,auVar23,auVar23);
      uVar4 = vcmpps_avx512vl(auVar14,auVar13,2);
      auVar14 = vsqrtps_avx512vl(auVar14);
      auVar15 = vdivps_avx512vl(auVar15,auVar14);
      auVar22 = vdivps_avx512vl(auVar22,auVar14);
      auVar23 = vdivps_avx512vl(auVar23,auVar14);
      auVar14 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
      bVar11 = (byte)uVar4;
      auVar16._0_4_ = (uint)(bVar11 & 1) * auVar14._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar15._0_4_
      ;
      bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
      auVar16._4_4_ = (uint)bVar3 * auVar14._4_4_ | (uint)!bVar3 * auVar15._4_4_;
      bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
      auVar16._8_4_ = (uint)bVar3 * auVar14._8_4_ | (uint)!bVar3 * auVar15._8_4_;
      bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
      auVar16._12_4_ = (uint)bVar3 * auVar14._12_4_ | (uint)!bVar3 * auVar15._12_4_;
      bVar3 = (bool)((byte)(uVar4 >> 4) & 1);
      auVar16._16_4_ = (uint)bVar3 * auVar14._16_4_ | (uint)!bVar3 * auVar15._16_4_;
      bVar3 = (bool)((byte)(uVar4 >> 5) & 1);
      auVar16._20_4_ = (uint)bVar3 * auVar14._20_4_ | (uint)!bVar3 * auVar15._20_4_;
      bVar3 = (bool)((byte)(uVar4 >> 6) & 1);
      auVar16._24_4_ = (uint)bVar3 * auVar14._24_4_ | (uint)!bVar3 * auVar15._24_4_;
      bVar3 = SUB81(uVar4 >> 7,0);
      auVar16._28_4_ = (uint)bVar3 * auVar14._28_4_ | (uint)!bVar3 * auVar15._28_4_;
      auVar14._4_4_ = (uint)!(bool)((byte)(uVar4 >> 1) & 1) * auVar22._4_4_;
      auVar14._0_4_ = (uint)!(bool)(bVar11 & 1) * auVar22._0_4_;
      auVar14._8_4_ = (uint)!(bool)((byte)(uVar4 >> 2) & 1) * auVar22._8_4_;
      auVar14._12_4_ = (uint)!(bool)((byte)(uVar4 >> 3) & 1) * auVar22._12_4_;
      auVar14._16_4_ = (uint)!(bool)((byte)(uVar4 >> 4) & 1) * auVar22._16_4_;
      auVar14._20_4_ = (uint)!(bool)((byte)(uVar4 >> 5) & 1) * auVar22._20_4_;
      auVar14._24_4_ = (uint)!(bool)((byte)(uVar4 >> 6) & 1) * auVar22._24_4_;
      bVar3 = SUB81(uVar4 >> 7,0);
      auVar14._28_4_ =
           (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar22._28_4_;
      auVar22._4_4_ = (uint)!(bool)((byte)(uVar4 >> 1) & 1) * auVar23._4_4_;
      auVar22._0_4_ = (uint)!(bool)(bVar11 & 1) * auVar23._0_4_;
      auVar22._8_4_ = (uint)!(bool)((byte)(uVar4 >> 2) & 1) * auVar23._8_4_;
      auVar22._12_4_ = (uint)!(bool)((byte)(uVar4 >> 3) & 1) * auVar23._12_4_;
      auVar22._16_4_ = (uint)!(bool)((byte)(uVar4 >> 4) & 1) * auVar23._16_4_;
      auVar22._20_4_ = (uint)!(bool)((byte)(uVar4 >> 5) & 1) * auVar23._20_4_;
      auVar22._24_4_ = (uint)!(bool)((byte)(uVar4 >> 6) & 1) * auVar23._24_4_;
      auVar22._28_4_ = (uint)!SUB81(uVar4 >> 7,0) * auVar23._28_4_;
      auVar23 = vpermt2ps_avx512vl(auVar22,auVar26,auVar14);
      auVar15 = vpermt2ps_avx512vl(auVar16,auVar28,auVar14);
      auVar15 = vpermt2ps_avx512vl(auVar15,auVar29,auVar23);
      in_ZMM27 = ZEXT3264(auVar15);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar10) = auVar15;
      auVar23 = vpermt2ps_avx512vl(auVar23,auVar30,auVar16);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar10) = auVar23;
      auVar23 = vpermt2ps_avx512vl(auVar14,auVar32,auVar16);
      auVar22 = vpermt2ps_avx512vl(auVar23,auVar31,auVar22);
      *(undefined1 (*) [32])(param_1 + lVar10) = auVar22;
      lVar10 = lVar10 + 0x60;
      uVar7 = uVar7 + 8;
    } while ((int)uVar7 < (int)uVar9);
    if ((int)uVar6 <= (int)uVar7) {
      return;
    }
  }
  auVar24 = vpbroadcastd_avx512vl();
  auVar24 = vpor_avx2(auVar24,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar25 = vpbroadcastd_avx512vl();
  uVar4 = vpcmpgtd_avx512vl(auVar25,auVar24);
  uVar8 = (ulonglong)uVar7;
  lVar10 = uVar8 * 3;
  pauVar1 = (undefined1 (*) [32])(param_3 + uVar8 * 0xc);
  bVar11 = (byte)uVar4;
  if (bVar11 == 0xff) {
    auVar24 = pauVar1[1];
    auVar25 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                ,*pauVar1,auVar24);
    auVar26 = vpermi2d_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                ,pauVar1[2],auVar24);
    auVar27._16_16_ = ZEXT116(0) * auVar25._16_16_ | ZEXT116(1) * auVar26._0_16_;
    auVar27._0_16_ = ZEXT116(0) * auVar26._0_16_ | ZEXT116(1) * auVar25._0_16_;
    auVar25 = vperm2i128_avx2(auVar25,auVar26,0x31);
    auVar24 = vpblendd_avx2(auVar24,*pauVar1,0x24);
    auVar24 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                ,auVar24,pauVar1[2]);
  }
  else {
    auVar24 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + lVar10));
    auVar27._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar24._4_4_;
    auVar27._0_4_ = (uint)(bVar11 & 1) * auVar24._0_4_;
    auVar27._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar24._8_4_;
    auVar27._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar24._12_4_;
    auVar27._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar24._16_4_;
    auVar27._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar24._20_4_;
    auVar27._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar24._24_4_;
    auVar27._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar24._28_4_;
    auVar24 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + lVar10));
    auVar25._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar24._4_4_;
    auVar25._0_4_ = (uint)(bVar11 & 1) * auVar24._0_4_;
    auVar25._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar24._8_4_;
    auVar25._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar24._12_4_;
    auVar25._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar24._16_4_;
    auVar25._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar24._20_4_;
    auVar25._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar24._24_4_;
    auVar25._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar24._28_4_;
    auVar26 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar1 + unaff_RBX));
    auVar24._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar26._4_4_;
    auVar24._0_4_ = (uint)(bVar11 & 1) * auVar26._0_4_;
    auVar24._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar26._8_4_;
    auVar24._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar26._12_4_;
    auVar24._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar26._16_4_;
    auVar24._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar26._20_4_;
    auVar24._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar26._24_4_;
    auVar24._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar26._28_4_;
  }
  auVar26 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBX * 4));
  auVar28._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar26._4_4_;
  auVar28._0_4_ = (uint)(bVar11 & 1) * auVar26._0_4_;
  auVar28._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar26._8_4_;
  auVar28._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar26._12_4_;
  auVar28._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar26._16_4_;
  auVar28._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar26._20_4_;
  auVar28._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar26._24_4_;
  auVar28._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar26._28_4_;
  vpslld_avx2(auVar27,2);
  vpslld_avx2(auVar27,3);
  auVar12 = vxorps_avx512vl(auVar12,auVar12);
  auVar27 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + unaff_RBP));
  auVar29._0_4_ = (uint)(bVar11 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar29._4_4_ = (uint)bVar3 * auVar27._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar29._8_4_ = (uint)bVar3 * auVar27._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar29._12_4_ = (uint)bVar3 * auVar27._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar29._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar27._16_4_;
  auVar29._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar27._20_4_;
  auVar29._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar27._24_4_;
  auVar29._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar27._28_4_;
  auVar12 = vxorps_avx512vl(auVar36,auVar36);
  auVar27 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
  auVar30._0_4_ = (uint)(bVar11 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar30._4_4_ = (uint)bVar3 * auVar27._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar30._8_4_ = (uint)bVar3 * auVar27._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar30._12_4_ = (uint)bVar3 * auVar27._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar30._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar27._16_4_;
  auVar30._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar27._20_4_;
  auVar30._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar27._24_4_;
  auVar30._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar27._28_4_;
  auVar12 = vxorps_avx512vl(auVar37,auVar37);
  auVar27 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 5));
  auVar31._0_4_ = (uint)(bVar11 & 1) * auVar27._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar31._4_4_ = (uint)bVar3 * auVar27._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar31._8_4_ = (uint)bVar3 * auVar27._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar31._12_4_ = (uint)bVar3 * auVar27._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar31._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar27._16_4_;
  auVar31._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar27._20_4_;
  auVar31._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar27._24_4_;
  auVar31._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar27._28_4_;
  vpslld_avx2(auVar25,2);
  vpslld_avx2(auVar25,3);
  auVar12 = vxorps_avx512vl(auVar38,auVar38);
  auVar25 = vgatherdps_avx512vl(*(undefined4 *)(param_2 * 2));
  auVar32._0_4_ = (uint)(bVar11 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar32._4_4_ = (uint)bVar3 * auVar25._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar32._8_4_ = (uint)bVar3 * auVar25._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar32._12_4_ = (uint)bVar3 * auVar25._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar32._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar25._16_4_;
  auVar32._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar25._20_4_;
  auVar32._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar25._24_4_;
  auVar32._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar25._28_4_;
  auVar25 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_1));
  auVar13._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar25._4_4_;
  auVar13._0_4_ = (uint)(bVar11 & 1) * auVar25._0_4_;
  auVar13._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar25._8_4_;
  auVar13._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar25._12_4_;
  auVar13._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar25._16_4_;
  auVar13._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar25._20_4_;
  auVar13._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar25._24_4_;
  auVar13._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar25._28_4_;
  auVar12 = vxorps_avx512vl(auVar39,auVar39);
  auVar25 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_1 * 4));
  auVar23._0_4_ = (uint)(bVar11 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar12._0_4_;
  bVar3 = (bool)((byte)(uVar4 >> 1) & 1);
  auVar23._4_4_ = (uint)bVar3 * auVar25._4_4_ | (uint)!bVar3 * auVar12._4_4_;
  bVar3 = (bool)((byte)(uVar4 >> 2) & 1);
  auVar23._8_4_ = (uint)bVar3 * auVar25._8_4_ | (uint)!bVar3 * auVar12._8_4_;
  bVar3 = (bool)((byte)(uVar4 >> 3) & 1);
  auVar23._12_4_ = (uint)bVar3 * auVar25._12_4_ | (uint)!bVar3 * auVar12._12_4_;
  auVar23._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar25._16_4_;
  auVar23._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar25._20_4_;
  auVar23._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar25._24_4_;
  auVar23._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar25._28_4_;
  vpslld_avx2(auVar24,2);
  vpslld_avx2(auVar24,3);
  auVar24 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + param_1));
  auVar15._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar24._4_4_;
  auVar15._0_4_ = (uint)(bVar11 & 1) * auVar24._0_4_;
  auVar15._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar24._8_4_;
  auVar15._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar24._12_4_;
  auVar15._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar24._16_4_;
  auVar15._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar24._20_4_;
  auVar15._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar24._24_4_;
  auVar15._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar24._28_4_;
  auVar24 = vgatherdps_avx512vl(*(undefined4 *)(param_2 + lVar10));
  auVar17._4_4_ = (uint)((byte)(uVar4 >> 1) & 1) * auVar24._4_4_;
  auVar17._0_4_ = (uint)(bVar11 & 1) * auVar24._0_4_;
  auVar17._8_4_ = (uint)((byte)(uVar4 >> 2) & 1) * auVar24._8_4_;
  auVar17._12_4_ = (uint)((byte)(uVar4 >> 3) & 1) * auVar24._12_4_;
  auVar17._16_4_ = (uint)((byte)(uVar4 >> 4) & 1) * auVar24._16_4_;
  auVar17._20_4_ = (uint)((byte)(uVar4 >> 5) & 1) * auVar24._20_4_;
  auVar17._24_4_ = (uint)((byte)(uVar4 >> 6) & 1) * auVar24._24_4_;
  auVar17._28_4_ = (uint)(byte)(uVar4 >> 7) * auVar24._28_4_;
  auVar24 = vsubps_avx512vl(auVar31,auVar28);
  auVar25 = vsubps_avx512vl(auVar32,auVar29);
  auVar27 = vsubps_avx512vl(auVar13,auVar30);
  auVar26 = vsubps_avx512vl(auVar23,auVar28);
  auVar28 = vsubps_avx512vl(auVar15,auVar29);
  auVar29 = vsubps_avx512vl(auVar17,auVar30);
  auVar30 = vmulps_avx512vl(auVar24,auVar28);
  auVar31 = vmulps_avx512vl(auVar25,auVar29);
  auVar32 = vmulps_avx512vl(auVar27,auVar26);
  auVar25 = vfmsub231ps_avx512vl(auVar30,auVar25,auVar26);
  auVar27 = vfmsub231ps_avx512vl(auVar31,auVar27,auVar28);
  auVar28 = vfmsub231ps_avx512vl(auVar32,auVar24,auVar29);
  auVar24 = vmulps_avx512vl(auVar28,auVar28);
  auVar24 = vfmadd231ps_avx512vl(auVar24,auVar27,auVar27);
  auVar24 = vfmadd231ps_avx512vl(auVar24,auVar25,auVar25);
  auVar26._4_4_ = __real_00800000;
  auVar26._0_4_ = __real_00800000;
  auVar26._8_4_ = __real_00800000;
  auVar26._12_4_ = __real_00800000;
  auVar26._16_4_ = __real_00800000;
  auVar26._20_4_ = __real_00800000;
  auVar26._24_4_ = __real_00800000;
  auVar26._28_4_ = __real_00800000;
  uVar5 = vcmpps_avx512vl(auVar24,auVar26,2);
  auVar24 = vsqrtps_avx(auVar24);
  auVar27 = vdivps_avx512vl(auVar27,auVar24);
  auVar26 = vdivps_avx512vl(auVar28,auVar24);
  auVar24 = vdivps_avx512vl(auVar25,auVar24);
  auVar25 = vbroadcastss_avx512vl(ZEXT416(__real_3f800000));
  bVar2 = (byte)uVar5;
  auVar18._0_4_ = (uint)(bVar2 & 1) * auVar25._0_4_ | (uint)!(bool)(bVar2 & 1) * auVar27._0_4_;
  bVar3 = (bool)((byte)(uVar5 >> 1) & 1);
  auVar18._4_4_ = (uint)bVar3 * auVar25._4_4_ | (uint)!bVar3 * auVar27._4_4_;
  bVar3 = (bool)((byte)(uVar5 >> 2) & 1);
  auVar18._8_4_ = (uint)bVar3 * auVar25._8_4_ | (uint)!bVar3 * auVar27._8_4_;
  bVar3 = (bool)((byte)(uVar5 >> 3) & 1);
  auVar18._12_4_ = (uint)bVar3 * auVar25._12_4_ | (uint)!bVar3 * auVar27._12_4_;
  bVar3 = (bool)((byte)(uVar5 >> 4) & 1);
  auVar18._16_4_ = (uint)bVar3 * auVar25._16_4_ | (uint)!bVar3 * auVar27._16_4_;
  bVar3 = (bool)((byte)(uVar5 >> 5) & 1);
  auVar18._20_4_ = (uint)bVar3 * auVar25._20_4_ | (uint)!bVar3 * auVar27._20_4_;
  bVar3 = (bool)((byte)(uVar5 >> 6) & 1);
  auVar18._24_4_ = (uint)bVar3 * auVar25._24_4_ | (uint)!bVar3 * auVar27._24_4_;
  bVar3 = SUB81(uVar5 >> 7,0);
  auVar18._28_4_ = (uint)bVar3 * auVar25._28_4_ | (uint)!bVar3 * auVar27._28_4_;
  auVar19._4_4_ = (uint)!(bool)((byte)(uVar5 >> 1) & 1) * auVar26._4_4_;
  auVar19._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar26._0_4_;
  auVar19._8_4_ = (uint)!(bool)((byte)(uVar5 >> 2) & 1) * auVar26._8_4_;
  auVar19._12_4_ = (uint)!(bool)((byte)(uVar5 >> 3) & 1) * auVar26._12_4_;
  auVar19._16_4_ = (uint)!(bool)((byte)(uVar5 >> 4) & 1) * auVar26._16_4_;
  auVar19._20_4_ = (uint)!(bool)((byte)(uVar5 >> 5) & 1) * auVar26._20_4_;
  iVar33 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
  auVar19._24_4_ = (uint)!(bool)((byte)(uVar5 >> 6) & 1) * auVar26._24_4_;
  bVar3 = SUB81(uVar5 >> 7,0);
  auVar19._28_4_ = (uint)bVar3 * iVar33 | (uint)!bVar3 * auVar26._28_4_;
  auVar20._4_4_ = (uint)!(bool)((byte)(uVar5 >> 1) & 1) * auVar24._4_4_;
  auVar20._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar24._0_4_;
  auVar20._8_4_ = (uint)!(bool)((byte)(uVar5 >> 2) & 1) * auVar24._8_4_;
  auVar20._12_4_ = (uint)!(bool)((byte)(uVar5 >> 3) & 1) * auVar24._12_4_;
  auVar20._16_4_ = (uint)!(bool)((byte)(uVar5 >> 4) & 1) * auVar24._16_4_;
  auVar20._20_4_ = (uint)!(bool)((byte)(uVar5 >> 5) & 1) * auVar24._20_4_;
  auVar20._24_4_ = (uint)!(bool)((byte)(uVar5 >> 6) & 1) * auVar24._24_4_;
  bVar3 = SUB81(uVar5 >> 7,0);
  auVar20._28_4_ = (uint)bVar3 * iVar33 | (uint)!bVar3 * auVar24._28_4_;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar8 * 0xc);
  if (bVar11 == 0xff) {
    auVar24 = vpermi2ps_avx512vl(___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar20,auVar19);
    auVar25 = vpermi2ps_avx512vl(___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar18,auVar19);
    auVar25 = vpermi2ps_avx512vl(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar25,auVar24);
    *pauVar1 = auVar25;
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar24,auVar18);
    pauVar1[1] = auVar24;
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000000000000000000000000000700000006000000050000000f0000000e
                                 ,auVar19,auVar18);
    auVar24 = vpermi2ps_avx512vl(___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar24,auVar20);
    pauVar1[2] = auVar24;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar4,auVar18
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar4,auVar19
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar1) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar4,auVar20
              );
  }
  return;
}

// GetPointNormals_avx512skx @ 1405bcc30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetPointNormals_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,int param_4,int param_5,
               uint param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 in_ZMM0 [64];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar21 [64];
  float fVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  
  auVar6 = ___xmm_00000007000000000000000000000000;
  uVar5 = __real_3f000000;
  fVar4 = __real_3f800000;
  fVar3 = __real_322bcc77;
  if (0 < (int)param_6) {
    lVar9 = (longlong)param_4;
    if (param_6 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar12 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            auVar12 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar12._8_8_ = 0;
                auVar12._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar12 = vinsertps_avx512f(auVar12,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar12 = vaddps_avx512vl(auVar21._0_16_,auVar12);
                auVar21 = ZEXT1664(auVar12);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar13._8_8_ = 0;
                auVar13._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar12 = vinsertps_avx512f(auVar13,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar12 = vaddps_avx512vl(auVar21._0_16_,auVar12);
                auVar21 = ZEXT1664(auVar12);
              }
              auVar12 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bd05c;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar13 = vinsertps_avx512f(auVar14,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar12 = vaddps_avx512vl(auVar12,auVar13);
          }
        }
LAB_1405bd05c:
        auVar13 = vmulps_avx512vl(auVar12,auVar12);
        auVar14 = vmovshdup_avx512vl(auVar13);
        auVar15 = vshufpd_avx512vl(auVar13,auVar13,1);
        auVar13 = vaddss_avx512f(auVar13,auVar14);
        auVar13 = vaddss_avx512f(auVar15,auVar13);
        fVar22 = auVar13._0_4_;
        auVar20 = ZEXT416(uVar5);
        auVar19 = ZEXT416(uVar5);
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar14 = vrsqrt14ss_avx512f(auVar13,auVar13);
            auVar13 = vmulss_avx512f(auVar13,auVar19);
            auVar15 = vmulss_avx512f(auVar14,auVar14);
            auVar15 = vfnmadd213ss_avx512f(auVar15,auVar13,auVar19);
            auVar14 = vfmadd132ss_avx512f(auVar15,auVar14,auVar14);
            auVar15 = vmulss_avx512f(auVar14,auVar14);
            auVar13 = vfnmadd213ss_avx512f(auVar15,auVar13,auVar20);
            auVar14 = vfmadd132ss_avx512f(auVar13,auVar14,auVar14);
            auVar13 = vblendps_avx(auVar12,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar13);
            auVar13 = vpermt2ps_avx512vl(auVar14,auVar6,in_ZMM3._0_16_);
            auVar14 = vmulps_avx512vl(auVar12,auVar13);
            uVar31 = auVar14._0_4_;
            auVar15 = vmovshdup_avx512vl(auVar14);
            uVar23 = auVar15._0_4_;
            auVar14 = vshufpd_avx512vl(auVar14,auVar14,1);
            uVar30 = auVar14._0_4_;
            in_ZMM3 = ZEXT1664(auVar13);
          }
          else {
            auVar15 = vxorps_avx512vl(auVar15,auVar15);
            uVar31 = auVar15._0_4_;
            auVar13 = vxorps_avx512vl(auVar13,auVar13);
            uVar23 = auVar13._0_4_;
            auVar13 = vxorps_avx512vl(auVar14,auVar14);
            uVar30 = auVar13._0_4_;
          }
        }
        else {
          auVar13 = vshufpd_avx512vl(auVar12,auVar12,1);
          uVar30 = auVar13._0_4_;
          auVar13 = vmovshdup_avx512vl(auVar12);
          uVar23 = auVar13._0_4_;
          uVar31 = auVar12._0_4_;
        }
        lVar11 = param_1 + uVar8 * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar23;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar30;
        lVar11 = (uVar8 | 1) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar13 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            auVar13 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar15._8_8_ = 0;
                auVar15._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx512f(auVar15,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar13 = vaddps_avx512vl(auVar21._0_16_,auVar13);
                auVar21 = ZEXT1664(auVar13);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar16._8_8_ = 0;
                auVar16._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar13 = vinsertps_avx512f(auVar16,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar13 = vaddps_avx512vl(auVar21._0_16_,auVar13);
                auVar21 = ZEXT1664(auVar13);
              }
              auVar13 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bd22e;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar17._8_8_ = 0;
            auVar17._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar14 = vinsertps_avx512f(auVar17,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar13 = vaddps_avx512vl(auVar13,auVar14);
          }
        }
LAB_1405bd22e:
        auVar14 = vmulps_avx512vl(auVar13,auVar13);
        auVar15 = vmovshdup_avx512vl(auVar14);
        auVar16 = vshufpd_avx512vl(auVar14,auVar14,1);
        auVar14 = vaddss_avx512f(auVar14,auVar15);
        auVar14 = vaddss_avx512f(auVar16,auVar14);
        fVar22 = auVar14._0_4_;
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar15 = vrsqrt14ss_avx512f(auVar14,auVar14);
            auVar14 = vmulss_avx512f(auVar14,auVar20);
            auVar16 = vmulss_avx512f(auVar15,auVar15);
            auVar16 = vfnmadd213ss_avx512f(auVar16,auVar14,auVar19);
            auVar15 = vfmadd132ss_avx512f(auVar16,auVar15,auVar15);
            auVar16 = vmulss_avx512f(auVar15,auVar15);
            auVar14 = vfnmadd213ss_avx512f(auVar16,auVar14,auVar19);
            auVar15 = vfmadd132ss_avx512f(auVar14,auVar15,auVar15);
            auVar14 = vblendps_avx(auVar13,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar14);
            auVar14 = vpermt2ps_avx512vl(auVar15,auVar6,in_ZMM3._0_16_);
            auVar15 = vmulps_avx512vl(auVar13,auVar14);
            uVar31 = auVar15._0_4_;
            auVar16 = vmovshdup_avx512vl(auVar15);
            uVar23 = auVar16._0_4_;
            auVar15 = vshufpd_avx512vl(auVar15,auVar15,1);
            uVar30 = auVar15._0_4_;
            in_ZMM3 = ZEXT1664(auVar14);
          }
          else {
            auVar16 = vxorps_avx512vl(auVar16,auVar16);
            uVar31 = auVar16._0_4_;
            auVar14 = vxorps_avx512vl(auVar14,auVar14);
            uVar23 = auVar14._0_4_;
            auVar14 = vxorps_avx512vl(auVar15,auVar15);
            uVar30 = auVar14._0_4_;
          }
        }
        else {
          auVar14 = vshufpd_avx512vl(auVar13,auVar13,1);
          uVar30 = auVar14._0_4_;
          auVar14 = vmovshdup_avx512vl(auVar13);
          uVar23 = auVar14._0_4_;
          uVar31 = auVar13._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 1) * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar23;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar30;
        lVar11 = (uVar8 | 2) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar14 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            auVar14 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar18._8_8_ = 0;
                auVar18._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar14 = vinsertps_avx512f(auVar18,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar14 = vaddps_avx512vl(auVar21._0_16_,auVar14);
                auVar21 = ZEXT1664(auVar14);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar25._8_8_ = 0;
                auVar25._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar14 = vinsertps_avx512f(auVar25,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar14 = vaddps_avx512vl(auVar21._0_16_,auVar14);
                auVar21 = ZEXT1664(auVar14);
              }
              auVar14 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bd3fe;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar26._8_8_ = 0;
            auVar26._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar15 = vinsertps_avx512f(auVar26,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar14 = vaddps_avx512vl(auVar14,auVar15);
          }
        }
LAB_1405bd3fe:
        auVar15 = vmulps_avx512vl(auVar14,auVar14);
        auVar16 = vmovshdup_avx512vl(auVar15);
        auVar17 = vshufpd_avx512vl(auVar15,auVar15,1);
        auVar15 = vaddss_avx512f(auVar15,auVar16);
        auVar15 = vaddss_avx512f(auVar17,auVar15);
        fVar22 = auVar15._0_4_;
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar16 = vrsqrt14ss_avx512f(auVar15,auVar15);
            auVar15 = vmulss_avx512f(auVar15,auVar19);
            auVar17 = vmulss_avx512f(auVar16,auVar16);
            auVar17 = vfnmadd213ss_avx512f(auVar17,auVar15,auVar19);
            auVar16 = vfmadd132ss_avx512f(auVar17,auVar16,auVar16);
            auVar17 = vmulss_avx512f(auVar16,auVar16);
            auVar15 = vfnmadd213ss_avx512f(auVar17,auVar15,auVar20);
            auVar16 = vfmadd132ss_avx512f(auVar15,auVar16,auVar16);
            auVar15 = vblendps_avx(auVar14,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar15);
            auVar15 = vpermt2ps_avx512vl(auVar16,auVar6,in_ZMM3._0_16_);
            auVar16 = vmulps_avx512vl(auVar14,auVar15);
            uVar31 = auVar16._0_4_;
            auVar17 = vmovshdup_avx512vl(auVar16);
            uVar23 = auVar17._0_4_;
            auVar16 = vshufpd_avx512vl(auVar16,auVar16,1);
            uVar30 = auVar16._0_4_;
            in_ZMM3 = ZEXT1664(auVar15);
          }
          else {
            auVar17 = vxorps_avx512vl(auVar17,auVar17);
            uVar31 = auVar17._0_4_;
            auVar15 = vxorps_avx512vl(auVar15,auVar15);
            uVar23 = auVar15._0_4_;
            auVar15 = vxorps_avx512vl(auVar16,auVar16);
            uVar30 = auVar15._0_4_;
          }
        }
        else {
          auVar15 = vshufpd_avx512vl(auVar14,auVar14,1);
          uVar30 = auVar15._0_4_;
          auVar15 = vmovshdup_avx512vl(auVar14);
          uVar23 = auVar15._0_4_;
          uVar31 = auVar14._0_4_;
        }
        lVar11 = param_1 + (uVar8 | 2) * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar23;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar30;
        lVar11 = (uVar8 | 3) * 0x10;
        uVar1 = *(uint *)(param_3 + 8 + lVar11);
        if ((int)uVar1 < 1) {
          auVar15 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + lVar11);
          if (uVar1 == 1) {
            auVar15 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar27._8_8_ = 0;
                auVar27._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar15 = vinsertps_avx512f(auVar27,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = vaddps_avx512vl(auVar21._0_16_,auVar15);
                auVar21 = ZEXT1664(auVar15);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar28._8_8_ = 0;
                auVar28._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar15 = vinsertps_avx512f(auVar28,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar15 = vaddps_avx512vl(auVar21._0_16_,auVar15);
                auVar21 = ZEXT1664(auVar15);
              }
              auVar15 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bd5ce;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar16 = vinsertps_avx512f(auVar29,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar15 = vaddps_avx512vl(auVar15,auVar16);
          }
        }
LAB_1405bd5ce:
        auVar16 = vmulps_avx512vl(auVar15,auVar15);
        auVar17 = vmovshdup_avx512vl(auVar16);
        auVar18 = vshufpd_avx512vl(auVar16,auVar16,1);
        auVar16 = vaddss_avx512f(auVar16,auVar17);
        auVar16 = vaddss_avx512f(auVar18,auVar16);
        fVar22 = auVar16._0_4_;
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar17 = vrsqrt14ss_avx512f(auVar16,auVar16);
            auVar20 = vmulss_avx512f(auVar16,auVar20);
            auVar16 = vmulss_avx512f(auVar17,auVar17);
            auVar16 = vfnmadd213ss_avx512f(auVar16,auVar20,auVar19);
            auVar16 = vfmadd132ss_avx512f(auVar16,auVar17,auVar17);
            auVar17 = vmulss_avx512f(auVar16,auVar16);
            auVar19 = vfnmadd213ss_avx512f(auVar17,auVar20,auVar19);
            auVar20 = vfmadd132ss_avx512f(auVar19,auVar16,auVar16);
            auVar19 = vblendps_avx(auVar15,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar19);
            auVar19 = vpermt2ps_avx512vl(auVar20,auVar6,in_ZMM3._0_16_);
            auVar20 = vmulps_avx512vl(auVar15,auVar19);
            uVar31 = auVar20._0_4_;
            auVar16 = vmovshdup_avx512vl(auVar20);
            uVar23 = auVar16._0_4_;
            auVar20 = vshufpd_avx512vl(auVar20,auVar20,1);
            uVar30 = auVar20._0_4_;
            in_ZMM3 = ZEXT1664(auVar19);
          }
          else {
            auVar19 = vxorps_avx512vl(auVar18,auVar18);
            uVar31 = auVar19._0_4_;
            auVar19 = vxorps_avx512vl(auVar16,auVar16);
            uVar23 = auVar19._0_4_;
            auVar19 = vxorps_avx512vl(auVar17,auVar17);
            uVar30 = auVar19._0_4_;
          }
        }
        else {
          auVar19 = vshufpd_avx512vl(auVar15,auVar15,1);
          uVar30 = auVar19._0_4_;
          auVar19 = vmovshdup_avx512vl(auVar15);
          uVar23 = auVar19._0_4_;
          uVar31 = auVar15._0_4_;
        }
        auVar19 = vblendps_avx(auVar12,in_ZMM1._0_16_,8);
        auVar12 = vblendps_avx(auVar12,in_ZMM2._0_16_,8);
        auVar19 = vblendps_avx(auVar13,auVar19,8);
        auVar12 = vblendps_avx(auVar13,auVar12,8);
        auVar13 = vblendps_avx(auVar14,auVar19,8);
        auVar12 = vblendps_avx(auVar14,auVar12,8);
        auVar13 = vblendps_avx(auVar15,auVar13,8);
        in_ZMM1 = ZEXT1664(auVar13);
        auVar12 = vblendps_avx(auVar15,auVar12,8);
        in_ZMM2 = ZEXT1664(auVar12);
        lVar11 = param_1 + (uVar8 | 3) * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar23;
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar30;
        uVar8 = uVar8 + 4;
      } while (uVar8 != (param_6 & 0x7ffffffc));
    }
    auVar6 = ___xmm_00000007000000000000000000000000;
    uVar5 = __real_3f000000;
    fVar4 = __real_3f800000;
    fVar3 = __real_322bcc77;
    if ((ulonglong)(param_6 & 3) != 0) {
      uVar7 = 0;
      do {
        uVar1 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
        if ((int)uVar1 < 1) {
          auVar12 = SUB6416(ZEXT864(0),0);
        }
        else {
          lVar11 = *(longlong *)(param_3 + uVar8 * 0x10);
          if (uVar1 == 1) {
            auVar12 = SUB6416(ZEXT864(0),0);
            lVar10 = 0;
          }
          else {
            auVar21 = ZEXT864(0);
            lVar10 = 0;
            do {
              uVar2 = *(uint *)(lVar11 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar19._8_8_ = 0;
                auVar19._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar12 = vinsertps_avx512f(auVar19,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar12 = vaddps_avx512vl(auVar21._0_16_,auVar12);
                auVar21 = ZEXT1664(auVar12);
              }
              uVar2 = *(uint *)(lVar11 + 4 + lVar10 * 4);
              if ((-1 < (int)uVar2) && ((int)uVar2 < param_5)) {
                auVar20._8_8_ = 0;
                auVar20._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar2 * 0xc);
                auVar12 = vinsertps_avx512f(auVar20,ZEXT416(*(uint *)(param_2 + 8 +
                                                                     (ulonglong)uVar2 * 0xc)),0x28);
                auVar12 = vaddps_avx512vl(auVar21._0_16_,auVar12);
                auVar21 = ZEXT1664(auVar12);
              }
              auVar12 = auVar21._0_16_;
              lVar10 = lVar10 + 2;
            } while ((uVar1 & 0x7ffffffe) != (uint)lVar10);
            if ((uVar1 & 1) == 0) goto LAB_1405bcdfb;
          }
          uVar1 = *(uint *)(lVar11 + lVar10 * 4);
          if ((-1 < (int)uVar1) && ((int)uVar1 < param_5)) {
            auVar24._8_8_ = 0;
            auVar24._0_8_ = *(ulonglong *)(param_2 + (ulonglong)uVar1 * 0xc);
            auVar13 = vinsertps_avx512f(auVar24,ZEXT416(*(uint *)(param_2 + 8 +
                                                                 (ulonglong)uVar1 * 0xc)),0x28);
            auVar12 = vaddps_avx512vl(auVar12,auVar13);
          }
        }
LAB_1405bcdfb:
        auVar13 = vmulps_avx512vl(auVar12,auVar12);
        auVar14 = vmovshdup_avx512vl(auVar13);
        auVar15 = vshufpd_avx512vl(auVar13,auVar13,1);
        auVar13 = vaddss_avx512f(auVar13,auVar14);
        auVar13 = vaddss_avx512f(auVar15,auVar13);
        fVar22 = auVar13._0_4_;
        if ((fVar22 != fVar4) || (NAN(fVar22) || NAN(fVar4))) {
          if (fVar3 <= fVar22) {
            auVar14 = vrsqrt14ss_avx512f(auVar13,auVar13);
            auVar13 = vmulss_avx512f(auVar13,ZEXT416(uVar5));
            auVar15 = vmulss_avx512f(auVar14,auVar14);
            auVar15 = vfnmadd213ss_avx512f(auVar15,auVar13,ZEXT416(uVar5));
            auVar14 = vfmadd132ss_avx512f(auVar15,auVar14,auVar14);
            auVar15 = vmulss_avx512f(auVar14,auVar14);
            auVar13 = vfnmadd213ss_avx512f(auVar15,auVar13,ZEXT416(uVar5));
            auVar14 = vfmadd132ss_avx512f(auVar13,auVar14,auVar14);
            auVar13 = vblendps_avx(auVar12,in_ZMM0._0_16_,8);
            in_ZMM0 = ZEXT1664(auVar13);
            auVar13 = vpermt2ps_avx512vl(auVar14,auVar6,in_ZMM3._0_16_);
            auVar14 = vmulps_avx512vl(auVar12,auVar13);
            uVar31 = auVar14._0_4_;
            auVar15 = vmovshdup_avx512vl(auVar14);
            uVar30 = auVar15._0_4_;
            auVar14 = vshufpd_avx512vl(auVar14,auVar14,1);
            uVar23 = auVar14._0_4_;
            in_ZMM3 = ZEXT1664(auVar13);
          }
          else {
            auVar15 = vxorps_avx512vl(auVar15,auVar15);
            uVar31 = auVar15._0_4_;
            auVar14 = vxorps_avx512vl(auVar14,auVar14);
            uVar30 = auVar14._0_4_;
            auVar13 = vxorps_avx512vl(auVar13,auVar13);
            uVar23 = auVar13._0_4_;
          }
        }
        else {
          auVar13 = vshufpd_avx512vl(auVar12,auVar12,1);
          uVar23 = auVar13._0_4_;
          auVar13 = vmovshdup_avx512vl(auVar12);
          uVar30 = auVar13._0_4_;
          uVar31 = auVar12._0_4_;
        }
        auVar13 = vblendps_avx(auVar12,in_ZMM1._0_16_,8);
        in_ZMM1 = ZEXT1664(auVar13);
        lVar11 = param_1 + uVar8 * 0xc;
        *(undefined4 *)(lVar11 + lVar9 * 0xc) = uVar31;
        *(undefined4 *)(lVar11 + 4 + lVar9 * 0xc) = uVar30;
        auVar12 = vblendps_avx(auVar12,in_ZMM2._0_16_,8);
        in_ZMM2 = ZEXT1664(auVar12);
        *(undefined4 *)(lVar11 + 8 + lVar9 * 0xc) = uVar23;
        uVar8 = uVar8 + 1;
        uVar7 = uVar7 + 1;
      } while (uVar7 != (param_6 & 3));
    }
  }
  return;
}

