// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// NormalizeRotations_avx512skx @ 140c744d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void NormalizeRotations_avx512skx(longlong param_1,uint param_2)

{
  undefined1 auVar1 [32];
  undefined8 uVar2;
  undefined1 auVar3 [32];
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lVar33;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  longlong lVar34;
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
  undefined1 auVar35 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
  
  auVar31 = _DAT_151c6cce0;
  auVar32 = _DAT_151c6ccc0;
  auVar3 = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  uVar4 = param_2 & 0xfffffff8;
  if (0 < (int)uVar4) {
    lVar7 = param_1 + 0x2b8;
    uVar8 = 0;
    auVar1 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
    auVar37._8_8_ = __real_3ff0000000000000;
    auVar37._0_8_ = __real_3ff0000000000000;
    auVar37._16_8_ = __real_3ff0000000000000;
    auVar37._24_8_ = __real_3ff0000000000000;
    do {
      auVar17 = *(undefined1 (*) [32])(lVar7 + -0x2b8);
      auVar18 = *(undefined1 (*) [32])(lVar7 + -600);
      auVar21 = *(undefined1 (*) [32])(lVar7 + -0x1f8);
      auVar22 = *(undefined1 (*) [32])(lVar7 + -0x198);
      auVar26 = *(undefined1 (*) [32])(lVar7 + -0xd8);
      auVar25 = *(undefined1 (*) [32])(lVar7 + -0x138);
      auVar30 = *(undefined1 (*) [32])(lVar7 + -0x18);
      auVar29 = *(undefined1 (*) [32])(lVar7 + -0x78);
      auVar13 = vmulpd_avx512vl(auVar17,auVar17);
      auVar14 = vmulpd_avx512vl(auVar18,auVar18);
      auVar15 = vpermpd_avx512vl(auVar14,0x4e);
      auVar16 = vpermpd_avx512vl(auVar13,0x4e);
      auVar13 = vaddpd_avx512vl(auVar13,auVar16);
      auVar14 = vaddpd_avx512vl(auVar14,auVar15);
      auVar15 = vpermpd_avx512vl(auVar14,0x39);
      auVar16 = vpermpd_avx512vl(auVar13,0x39);
      auVar13 = vaddpd_avx512vl(auVar13,auVar16);
      auVar14 = vaddpd_avx512vl(auVar14,auVar15);
      uVar9 = vcmppd_avx512vl(auVar31,auVar14,2);
      uVar9 = uVar9 & 0xf;
      uVar10 = vcmppd_avx512vl(auVar32,auVar13,2);
      uVar10 = uVar10 & 0xf;
      lVar5 = auVar1._0_8_;
      lVar6 = auVar1._8_8_;
      auVar15._8_8_ = (ulonglong)((byte)(uVar10 >> 1) & 1) * lVar6;
      auVar15._0_8_ = (ulonglong)((byte)uVar10 & 1) * lVar5;
      lVar33 = auVar1._16_8_;
      lVar34 = auVar1._24_8_;
      auVar15._16_8_ = (ulonglong)((byte)(uVar10 >> 2) & 1) * lVar33;
      auVar15._24_8_ = (uVar10 >> 3) * lVar34;
      auVar16._8_8_ = (ulonglong)((byte)(uVar9 >> 1) & 1) * lVar6;
      auVar16._0_8_ = (ulonglong)((byte)uVar9 & 1) * lVar5;
      auVar16._16_8_ = (ulonglong)((byte)(uVar9 >> 2) & 1) * lVar33;
      auVar16._24_8_ = (uVar9 >> 3) * lVar34;
      auVar13 = vsqrtpd_avx512vl(auVar13);
      auVar14 = vsqrtpd_avx512vl(auVar14);
      auVar14 = vdivpd_avx512vl(auVar37,auVar14);
      auVar13 = vdivpd_avx512vl(auVar37,auVar13);
      auVar17 = vmulpd_avx512vl(auVar17,auVar13);
      auVar18 = vmulpd_avx512vl(auVar18,auVar14);
      auVar18 = vpternlogq_avx512vl(auVar18,auVar16,auVar3,0xe2);
      auVar17 = vpternlogq_avx512vl(auVar17,auVar15,auVar3,0xe2);
      auVar13 = vmulpd_avx512vl(auVar21,auVar21);
      auVar14 = vmulpd_avx512vl(auVar22,auVar22);
      auVar15 = vpermpd_avx512vl(auVar14,0x4e);
      auVar16 = vpermpd_avx512vl(auVar13,0x4e);
      auVar13 = vaddpd_avx512vl(auVar13,auVar16);
      auVar14 = vaddpd_avx512vl(auVar14,auVar15);
      auVar15 = vpermpd_avx512vl(auVar14,0x39);
      auVar16 = vpermpd_avx512vl(auVar13,0x39);
      auVar13 = vaddpd_avx512vl(auVar13,auVar16);
      auVar14 = vaddpd_avx512vl(auVar14,auVar15);
      uVar9 = vcmppd_avx512vl(auVar31,auVar14,2);
      uVar9 = uVar9 & 0xf;
      uVar10 = vcmppd_avx512vl(auVar32,auVar13,2);
      uVar10 = uVar10 & 0xf;
      auVar19._8_8_ = (ulonglong)((byte)(uVar10 >> 1) & 1) * lVar6;
      auVar19._0_8_ = (ulonglong)((byte)uVar10 & 1) * lVar5;
      auVar19._16_8_ = (ulonglong)((byte)(uVar10 >> 2) & 1) * lVar33;
      auVar19._24_8_ = (uVar10 >> 3) * lVar34;
      auVar20._8_8_ = (ulonglong)((byte)(uVar9 >> 1) & 1) * lVar6;
      auVar20._0_8_ = (ulonglong)((byte)uVar9 & 1) * lVar5;
      auVar20._16_8_ = (ulonglong)((byte)(uVar9 >> 2) & 1) * lVar33;
      auVar20._24_8_ = (uVar9 >> 3) * lVar34;
      auVar13 = vsqrtpd_avx512vl(auVar13);
      auVar14 = vsqrtpd_avx512vl(auVar14);
      auVar14 = vdivpd_avx512vl(auVar37,auVar14);
      auVar13 = vdivpd_avx512vl(auVar37,auVar13);
      auVar21 = vmulpd_avx512vl(auVar21,auVar13);
      auVar22 = vmulpd_avx512vl(auVar22,auVar14);
      auVar22 = vpternlogq_avx512vl(auVar22,auVar20,auVar3,0xe2);
      auVar21 = vpternlogq_avx512vl(auVar21,auVar19,auVar3,0xe2);
      auVar13 = vmulpd_avx512vl(auVar25,auVar25);
      auVar14 = vmulpd_avx512vl(auVar26,auVar26);
      auVar15 = vpermpd_avx512vl(auVar14,0x4e);
      auVar16 = vpermpd_avx512vl(auVar13,0x4e);
      auVar13 = vaddpd_avx512vl(auVar13,auVar16);
      auVar14 = vaddpd_avx512vl(auVar14,auVar15);
      auVar15 = vpermpd_avx512vl(auVar14,0x39);
      auVar16 = vpermpd_avx512vl(auVar13,0x39);
      auVar13 = vaddpd_avx512vl(auVar13,auVar16);
      auVar14 = vaddpd_avx512vl(auVar14,auVar15);
      uVar9 = vcmppd_avx512vl(auVar31,auVar14,2);
      uVar9 = uVar9 & 0xf;
      uVar10 = vcmppd_avx512vl(auVar32,auVar13,2);
      uVar10 = uVar10 & 0xf;
      auVar23._8_8_ = (ulonglong)((byte)(uVar10 >> 1) & 1) * lVar6;
      auVar23._0_8_ = (ulonglong)((byte)uVar10 & 1) * lVar5;
      auVar23._16_8_ = (ulonglong)((byte)(uVar10 >> 2) & 1) * lVar33;
      auVar23._24_8_ = (uVar10 >> 3) * lVar34;
      auVar24._8_8_ = (ulonglong)((byte)(uVar9 >> 1) & 1) * lVar6;
      auVar24._0_8_ = (ulonglong)((byte)uVar9 & 1) * lVar5;
      auVar24._16_8_ = (ulonglong)((byte)(uVar9 >> 2) & 1) * lVar33;
      auVar24._24_8_ = (uVar9 >> 3) * lVar34;
      auVar13 = vsqrtpd_avx512vl(auVar13);
      auVar14 = vsqrtpd_avx512vl(auVar14);
      auVar14 = vdivpd_avx512vl(auVar37,auVar14);
      auVar13 = vdivpd_avx512vl(auVar37,auVar13);
      auVar25 = vmulpd_avx512vl(auVar25,auVar13);
      auVar26 = vmulpd_avx512vl(auVar26,auVar14);
      auVar26 = vpternlogq_avx512vl(auVar26,auVar24,auVar3,0xe2);
      auVar25 = vpternlogq_avx512vl(auVar25,auVar23,auVar3,0xe2);
      auVar13 = vmulpd_avx512vl(auVar29,auVar29);
      auVar14 = vmulpd_avx512vl(auVar30,auVar30);
      auVar15 = vpermpd_avx512vl(auVar14,0x4e);
      auVar16 = vpermpd_avx512vl(auVar13,0x4e);
      auVar13 = vaddpd_avx512vl(auVar13,auVar16);
      auVar14 = vaddpd_avx512vl(auVar14,auVar15);
      auVar15 = vpermpd_avx512vl(auVar14,0x39);
      auVar16 = vpermpd_avx512vl(auVar13,0x39);
      auVar13 = vaddpd_avx512vl(auVar13,auVar16);
      auVar14 = vaddpd_avx512vl(auVar14,auVar15);
      uVar9 = vcmppd_avx512vl(auVar31,auVar14,2);
      uVar9 = uVar9 & 0xf;
      uVar10 = vcmppd_avx512vl(auVar32,auVar13,2);
      uVar10 = uVar10 & 0xf;
      auVar27._8_8_ = (ulonglong)((byte)(uVar10 >> 1) & 1) * lVar6;
      auVar27._0_8_ = (ulonglong)((byte)uVar10 & 1) * lVar5;
      auVar27._16_8_ = (ulonglong)((byte)(uVar10 >> 2) & 1) * lVar33;
      auVar27._24_8_ = (uVar10 >> 3) * lVar34;
      auVar28._8_8_ = (ulonglong)((byte)(uVar9 >> 1) & 1) * lVar6;
      auVar28._0_8_ = (ulonglong)((byte)uVar9 & 1) * lVar5;
      auVar28._16_8_ = (ulonglong)((byte)(uVar9 >> 2) & 1) * lVar33;
      auVar28._24_8_ = (uVar9 >> 3) * lVar34;
      auVar13 = vsqrtpd_avx512vl(auVar13);
      auVar14 = vsqrtpd_avx512vl(auVar14);
      auVar14 = vdivpd_avx512vl(auVar37,auVar14);
      auVar13 = vdivpd_avx512vl(auVar37,auVar13);
      auVar29 = vmulpd_avx512vl(auVar29,auVar13);
      auVar30 = vmulpd_avx512vl(auVar30,auVar14);
      auVar29 = vpternlogq_avx512vl(auVar29,auVar27,auVar3,0xe2);
      auVar17 = vmovdqu64_avx512vl(auVar17);
      *(undefined1 (*) [32])(lVar7 + -0x2b8) = auVar17;
      auVar17 = vmovdqu64_avx512vl(auVar18);
      *(undefined1 (*) [32])(lVar7 + -600) = auVar17;
      auVar17 = vmovdqu64_avx512vl(auVar21);
      *(undefined1 (*) [32])(lVar7 + -0x1f8) = auVar17;
      auVar17 = vmovdqu64_avx512vl(auVar22);
      *(undefined1 (*) [32])(lVar7 + -0x198) = auVar17;
      auVar17 = vmovdqu64_avx512vl(auVar25);
      *(undefined1 (*) [32])(lVar7 + -0x138) = auVar17;
      auVar17 = vmovdqu64_avx512vl(auVar26);
      *(undefined1 (*) [32])(lVar7 + -0xd8) = auVar17;
      auVar17 = vmovdqu64_avx512vl(auVar29);
      *(undefined1 (*) [32])(lVar7 + -0x78) = auVar17;
      auVar17 = vpternlogq_avx512vl(auVar30,auVar28,auVar3,0xe2);
      *(undefined1 (*) [32])(lVar7 + -0x18) = auVar17;
      uVar8 = uVar8 + 8;
      lVar7 = lVar7 + 0x300;
    } while (uVar8 < uVar4);
  }
  auVar3 = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  lVar7 = __real_ffffffffffffffff;
  if ((int)uVar4 < (int)param_2) {
    lVar6 = param_1 + (longlong)(int)uVar4 * 0x60 + 0x18;
    lVar5 = (longlong)(int)param_2 - (longlong)(int)uVar4;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = __real_3e45798ee2308c3a;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = __real_3ff0000000000000;
    do {
      auVar32 = *(undefined1 (*) [32])(lVar6 + -0x18);
      auVar31 = vmulpd_avx512vl(auVar32,auVar32);
      auVar11 = vextractf32x4_avx512vl(auVar31,1);
      auVar11 = vaddpd_avx512vl(auVar31._0_16_,auVar11);
      auVar12 = vshufpd_avx512vl(auVar11,auVar11,1);
      auVar11 = vaddsd_avx512f(auVar11,auVar12);
      uVar2 = vcmpsd_avx512f(auVar11,auVar35,9);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulonglong)!(bool)((byte)uVar2 & 1) * lVar7;
      auVar11._8_8_ = auVar11._8_8_;
      auVar11._0_8_ = SQRT(auVar11._0_8_);
      auVar11 = vdivsd_avx512f(auVar36,auVar11);
      auVar31 = vbroadcastsd_avx512vl(auVar11);
      auVar32 = vmulpd_avx512vl(auVar32,auVar31);
      auVar31 = vbroadcastsd_avx512vl(auVar12);
      auVar32 = vpternlogq_avx512vl(auVar31,auVar32,auVar3,0xca);
      auVar32 = vmovdqu64_avx512vl(auVar32);
      *(undefined1 (*) [32])(lVar6 + -0x18) = auVar32;
      lVar6 = lVar6 + 0x60;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// ResetToAdditiveIdentity_avx512skx @ 140c748b0

void ResetToAdditiveIdentity_avx512skx(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined1 (*pauVar2) [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  if (0 < (int)param_2) {
    if (param_2 == 1) {
      lVar1 = 0;
    }
    else {
      pauVar2 = (undefined1 (*) [32])(param_1 + 0x80);
      lVar1 = 0;
      auVar3._0_12_ = ZEXT812(0);
      auVar3._12_4_ = 0;
      auVar5._0_12_ = ZEXT812(0);
      auVar5._12_4_ = 0;
      do {
        *(undefined1 (*) [16])pauVar2[-4] = auVar3;
        *(undefined8 *)(pauVar2[-4] + 0x10) = 0;
        *(undefined8 *)(pauVar2[-4] + 0x18) = 0x3ff0000000000000;
        pauVar2[-3] = ZEXT1632(auVar5);
        pauVar2[-2] = ZEXT1632(auVar5);
        *(undefined1 (*) [16])pauVar2[-1] = auVar3;
        *(undefined8 *)(pauVar2[-1] + 0x10) = 0;
        *(undefined8 *)(pauVar2[-1] + 0x18) = 0x3ff0000000000000;
        lVar1 = lVar1 + 2;
        *pauVar2 = ZEXT1632(auVar5);
        pauVar2[1] = ZEXT1632(auVar5);
        pauVar2 = pauVar2 + 6;
      } while ((param_2 & 0x7ffffffe) != (uint)lVar1);
      if ((param_2 & 1) == 0) {
        return;
      }
    }
    lVar1 = lVar1 * 0x60;
    auVar4._0_12_ = ZEXT812(0);
    auVar4._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + lVar1) = auVar4;
    *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
    *(undefined8 *)(param_1 + 0x18 + lVar1) = 0x3ff0000000000000;
    *(undefined1 (*) [32])(param_1 + 0x20 + lVar1) = ZEXT432(0) << 0x20;
    *(undefined1 (*) [32])(param_1 + 0x40 + lVar1) = ZEXT432(0) << 0x20;
  }
  return;
}

