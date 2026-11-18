// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 2

// UERAradaudio_avx2_compute_windowed_sum_multiple16_ @ 14f8ce090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_avx2_compute_windowed_sum_multiple16_
               (longlong param_1,int param_2,longlong param_3,longlong param_4,float param_5,
               longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [32];
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [32];
  longlong lVar36;
  undefined1 (*pauVar37) [32];
  longlong lVar38;
  float *pfVar39;
  float *pfVar40;
  undefined1 (*pauVar41) [32];
  undefined1 (*pauVar42) [16];
  longlong lVar43;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  
  auVar35 = ___ymm_0000000000000001000000020000000300000004000000050000000600000007;
  lVar38 = 0;
  lVar43 = (longlong)param_2 >> 1;
  if (0 < lVar43) {
    pauVar37 = (undefined1 (*) [32])(param_1 + 0x20);
    pauVar41 = (undefined1 (*) [32])(param_3 + -0x20 + lVar43 * 4);
    do {
      auVar4 = vpmovsxwd_avx2(*(undefined1 (*) [16])(param_4 + 0x10 + lVar38 * 2));
      auVar4 = vcvtdq2ps_avx(auVar4);
      auVar46 = vpermps_avx2(auVar35,pauVar41[-1]);
      pfVar39 = (float *)((longlong)pauVar37 + (param_6 - param_1));
      auVar44._0_4_ = auVar46._0_4_ * *pfVar39;
      auVar44._4_4_ = auVar46._4_4_ * pfVar39[1];
      auVar44._8_4_ = auVar46._8_4_ * pfVar39[2];
      auVar44._12_4_ = auVar46._12_4_ * pfVar39[3];
      auVar44._16_4_ = auVar46._16_4_ * pfVar39[4];
      auVar44._20_4_ = auVar46._20_4_ * pfVar39[5];
      auVar44._24_4_ = auVar46._24_4_ * pfVar39[6];
      auVar44._28_4_ = auVar46._28_4_ * pfVar39[7];
      auVar49 = vpmovsxwd_avx2(*(undefined1 (*) [16])(param_4 + lVar38 * 2));
      lVar36 = param_2 - lVar38;
      lVar38 = lVar38 + 0x10;
      auVar46 = vpermps_avx2(auVar35,*(undefined1 (*) [32])(param_6 + -0x40 + lVar36 * 4));
      auVar48._0_4_ = auVar4._0_4_ * param_5 * auVar46._0_4_;
      auVar48._4_4_ = auVar4._4_4_ * param_5 * auVar46._4_4_;
      auVar48._8_4_ = auVar4._8_4_ * param_5 * auVar46._8_4_;
      auVar48._12_4_ = auVar4._12_4_ * param_5 * auVar46._12_4_;
      auVar48._16_4_ = auVar4._16_4_ * param_5 * auVar46._16_4_;
      auVar48._20_4_ = auVar4._20_4_ * param_5 * auVar46._20_4_;
      auVar48._24_4_ = auVar4._24_4_ * param_5 * auVar46._24_4_;
      auVar48._28_4_ = auVar4._28_4_ * param_5 * auVar46._28_4_;
      auVar47 = vpermps_avx2(auVar35,*(undefined1 (*) [32])(param_6 + -0x20 + lVar36 * 4));
      auVar46 = vsubps_avx(auVar48,auVar44);
      auVar4 = vcvtdq2ps_avx(auVar49);
      auVar49 = vpermps_avx2(auVar35,*pauVar41);
      pfVar39 = (float *)((longlong)pauVar37 + (param_6 - param_1) + -0x20);
      auVar45._0_4_ = auVar49._0_4_ * *pfVar39;
      auVar45._4_4_ = auVar49._4_4_ * pfVar39[1];
      auVar45._8_4_ = auVar49._8_4_ * pfVar39[2];
      auVar45._12_4_ = auVar49._12_4_ * pfVar39[3];
      auVar45._16_4_ = auVar49._16_4_ * pfVar39[4];
      auVar45._20_4_ = auVar49._20_4_ * pfVar39[5];
      auVar45._24_4_ = auVar49._24_4_ * pfVar39[6];
      auVar45._28_4_ = auVar49._28_4_ * pfVar39[7];
      auVar49._0_4_ = auVar4._0_4_ * param_5 * auVar47._0_4_;
      auVar49._4_4_ = auVar4._4_4_ * param_5 * auVar47._4_4_;
      auVar49._8_4_ = auVar4._8_4_ * param_5 * auVar47._8_4_;
      auVar49._12_4_ = auVar4._12_4_ * param_5 * auVar47._12_4_;
      auVar49._16_4_ = auVar4._16_4_ * param_5 * auVar47._16_4_;
      auVar49._20_4_ = auVar4._20_4_ * param_5 * auVar47._20_4_;
      auVar49._24_4_ = auVar4._24_4_ * param_5 * auVar47._24_4_;
      auVar49._28_4_ = auVar4._28_4_ * param_5 * auVar47._28_4_;
      auVar4 = vsubps_avx(auVar49,auVar45);
      pauVar37[-1] = auVar4;
      *pauVar37 = auVar46;
      pauVar37 = pauVar37 + 2;
      pauVar41 = pauVar41 + -2;
    } while (lVar38 < lVar43);
    lVar38 = lVar43 * 4 + 0x20;
    lVar36 = (lVar43 - 1U >> 4) + 1;
    pfVar39 = (float *)(lVar38 + param_1);
    pfVar40 = (float *)(param_6 + (lVar43 + -8) * 4);
    pauVar42 = (undefined1 (*) [16])(param_4 + (lVar43 + -8) * 2);
    do {
      pfVar1 = pfVar39 + 0x10;
      auVar4 = vpmovsxwd_avx2(pauVar42[-1]);
      auVar4 = vcvtdq2ps_avx(auVar4);
      pfVar2 = (float *)(((param_3 + lVar43 * -4) - param_1) + -0x40 + (longlong)pfVar1);
      fVar5 = *pfVar2;
      fVar6 = pfVar2[1];
      fVar7 = pfVar2[2];
      fVar8 = pfVar2[3];
      fVar9 = pfVar2[4];
      fVar10 = pfVar2[5];
      fVar11 = pfVar2[6];
      fVar12 = pfVar2[7];
      auVar46._0_4_ = auVar4._0_4_ * param_5 * pfVar40[-8];
      auVar46._4_4_ = auVar4._4_4_ * param_5 * pfVar40[-7];
      auVar46._8_4_ = auVar4._8_4_ * param_5 * pfVar40[-6];
      auVar46._12_4_ = auVar4._12_4_ * param_5 * pfVar40[-5];
      auVar46._16_4_ = auVar4._16_4_ * param_5 * pfVar40[-4];
      auVar46._20_4_ = auVar4._20_4_ * param_5 * pfVar40[-3];
      auVar46._24_4_ = auVar4._24_4_ * param_5 * pfVar40[-2];
      auVar46._28_4_ = auVar4._28_4_ * param_5 * pfVar40[-1];
      pfVar2 = (float *)((longlong)pfVar39 + (param_6 - param_1));
      fVar13 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      fVar17 = pfVar2[4];
      fVar18 = pfVar2[5];
      fVar19 = pfVar2[6];
      fVar20 = pfVar2[7];
      auVar4 = vpmovsxwd_avx2(*pauVar42);
      auVar46 = vpermps_avx2(auVar35,auVar46);
      auVar4 = vcvtdq2ps_avx(auVar4);
      pfVar2 = (float *)(((param_3 - lVar38) - param_1) + -0x40 + (longlong)pfVar1);
      fVar21 = pfVar2[1];
      fVar22 = pfVar2[2];
      fVar23 = pfVar2[3];
      fVar24 = pfVar2[4];
      fVar25 = pfVar2[5];
      fVar26 = pfVar2[6];
      fVar27 = pfVar2[7];
      auVar47._0_4_ = auVar4._0_4_ * param_5 * *pfVar40;
      auVar47._4_4_ = auVar4._4_4_ * param_5 * pfVar40[1];
      auVar47._8_4_ = auVar4._8_4_ * param_5 * pfVar40[2];
      auVar47._12_4_ = auVar4._12_4_ * param_5 * pfVar40[3];
      auVar47._16_4_ = auVar4._16_4_ * param_5 * pfVar40[4];
      auVar47._20_4_ = auVar4._20_4_ * param_5 * pfVar40[5];
      auVar47._24_4_ = auVar4._24_4_ * param_5 * pfVar40[6];
      auVar47._28_4_ = auVar4._28_4_ * param_5 * pfVar40[7];
      pfVar3 = (float *)((longlong)pfVar39 + (param_6 - param_1) + -0x20);
      fVar28 = pfVar3[1];
      fVar29 = pfVar3[2];
      fVar30 = pfVar3[3];
      fVar31 = pfVar3[4];
      fVar32 = pfVar3[5];
      fVar33 = pfVar3[6];
      fVar34 = pfVar3[7];
      auVar4 = vpermps_avx2(auVar35,auVar47);
      pfVar39[-8] = auVar4._0_4_ + *pfVar2 * *pfVar3;
      pfVar39[-7] = auVar4._4_4_ + fVar21 * fVar28;
      pfVar39[-6] = auVar4._8_4_ + fVar22 * fVar29;
      pfVar39[-5] = auVar4._12_4_ + fVar23 * fVar30;
      pfVar39[-4] = auVar4._16_4_ + fVar24 * fVar31;
      pfVar39[-3] = auVar4._20_4_ + fVar25 * fVar32;
      pfVar39[-2] = auVar4._24_4_ + fVar26 * fVar33;
      pfVar39[-1] = auVar4._28_4_ + fVar27 * fVar34;
      *pfVar39 = auVar46._0_4_ + fVar5 * fVar13;
      pfVar39[1] = auVar46._4_4_ + fVar6 * fVar14;
      pfVar39[2] = auVar46._8_4_ + fVar7 * fVar15;
      pfVar39[3] = auVar46._12_4_ + fVar8 * fVar16;
      pfVar39[4] = auVar46._16_4_ + fVar9 * fVar17;
      pfVar39[5] = auVar46._20_4_ + fVar10 * fVar18;
      pfVar39[6] = auVar46._24_4_ + fVar11 * fVar19;
      pfVar39[7] = auVar46._28_4_ + fVar12 * fVar20;
      lVar36 = lVar36 + -1;
      pfVar39 = pfVar1;
      pfVar40 = pfVar40 + -0x10;
      pauVar42 = pauVar42 + -2;
    } while (lVar36 != 0);
  }
  return;
}

// UERAradaudio_avx2_save_samples_ @ 14f8ce250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_avx2_save_samples_(longlong param_1,longlong param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  float fVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  auVar24 = ___ymm_46fffe0046fffe0046fffe0046fffe0046fffe0046fffe0046fffe0046fffe00;
  uVar15 = _UNK_150b50efc;
  uVar14 = _UNK_150b50ef8;
  uVar13 = _UNK_150b50ef4;
  uVar12 = _UNK_150b50ef0;
  uVar11 = _UNK_150b50eec;
  uVar10 = _UNK_150b50ee8;
  uVar9 = _UNK_150b50ee4;
  uVar8 = ___ymm_7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff7fffffff;
  lVar16 = 0;
  lVar18 = (longlong)param_3;
  auVar23 = ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000;
  if (0 < param_3) {
    pfVar17 = (float *)(param_2 + 0x40);
    lVar19 = lVar16;
    do {
      fVar25 = *pfVar17;
      fVar1 = pfVar17[1];
      fVar2 = pfVar17[2];
      fVar3 = pfVar17[3];
      fVar4 = pfVar17[4];
      fVar5 = pfVar17[5];
      fVar6 = pfVar17[6];
      fVar7 = pfVar17[7];
      auVar31._0_4_ = uVar8 & (uint)pfVar17[-8];
      auVar31._4_4_ = uVar9 & (uint)pfVar17[-7];
      auVar31._8_4_ = uVar10 & (uint)pfVar17[-6];
      auVar31._12_4_ = uVar11 & (uint)pfVar17[-5];
      auVar31._16_4_ = uVar12 & (uint)pfVar17[-4];
      auVar31._20_4_ = uVar13 & (uint)pfVar17[-3];
      auVar31._24_4_ = uVar14 & (uint)pfVar17[-2];
      auVar31._28_4_ = uVar15 & (uint)pfVar17[-1];
      auVar26._0_4_ = uVar8 & (uint)pfVar17[8];
      auVar26._4_4_ = uVar9 & (uint)pfVar17[9];
      auVar26._8_4_ = uVar10 & (uint)pfVar17[10];
      auVar26._12_4_ = uVar11 & (uint)pfVar17[0xb];
      auVar26._16_4_ = uVar12 & (uint)pfVar17[0xc];
      auVar26._20_4_ = uVar13 & (uint)pfVar17[0xd];
      auVar26._24_4_ = uVar14 & (uint)pfVar17[0xe];
      auVar26._28_4_ = uVar15 & (uint)pfVar17[0xf];
      auVar20._0_4_ = uVar8 & (uint)fVar25;
      auVar20._4_4_ = uVar9 & (uint)fVar1;
      auVar20._8_4_ = uVar10 & (uint)fVar2;
      auVar20._12_4_ = uVar11 & (uint)fVar3;
      auVar20._16_4_ = uVar12 & (uint)fVar4;
      auVar20._20_4_ = uVar13 & (uint)fVar5;
      auVar20._24_4_ = uVar14 & (uint)fVar6;
      auVar20._28_4_ = uVar15 & (uint)fVar7;
      auVar20 = vmaxps_avx(auVar20,auVar26);
      auVar27._0_4_ = uVar8 & (uint)pfVar17[-0x10];
      auVar27._4_4_ = uVar9 & (uint)pfVar17[-0xf];
      auVar27._8_4_ = uVar10 & (uint)pfVar17[-0xe];
      auVar27._12_4_ = uVar11 & (uint)pfVar17[-0xd];
      auVar27._16_4_ = uVar12 & (uint)pfVar17[-0xc];
      auVar27._20_4_ = uVar13 & (uint)pfVar17[-0xb];
      auVar27._24_4_ = uVar14 & (uint)pfVar17[-10];
      auVar27._28_4_ = uVar15 & (uint)pfVar17[-9];
      auVar22 = vmaxps_avx(auVar27,auVar31);
      fVar32 = auVar24._0_4_;
      auVar28._0_4_ = fVar32 * pfVar17[-0x10];
      fVar33 = auVar24._4_4_;
      auVar28._4_4_ = fVar33 * pfVar17[-0xf];
      fVar34 = auVar24._8_4_;
      auVar28._8_4_ = fVar34 * pfVar17[-0xe];
      fVar35 = auVar24._12_4_;
      auVar28._12_4_ = fVar35 * pfVar17[-0xd];
      fVar36 = auVar24._16_4_;
      auVar28._16_4_ = fVar36 * pfVar17[-0xc];
      fVar37 = auVar24._20_4_;
      auVar28._20_4_ = fVar37 * pfVar17[-0xb];
      fVar38 = auVar24._24_4_;
      auVar28._24_4_ = fVar38 * pfVar17[-10];
      fVar39 = auVar24._28_4_;
      auVar28._28_4_ = fVar39 * pfVar17[-9];
      auVar22 = vmaxps_avx(auVar22,auVar20);
      auVar21._0_4_ = fVar32 * pfVar17[-8];
      auVar21._4_4_ = fVar33 * pfVar17[-7];
      auVar21._8_4_ = fVar34 * pfVar17[-6];
      auVar21._12_4_ = fVar35 * pfVar17[-5];
      auVar21._16_4_ = fVar36 * pfVar17[-4];
      auVar21._20_4_ = fVar37 * pfVar17[-3];
      auVar21._24_4_ = fVar38 * pfVar17[-2];
      auVar21._28_4_ = fVar39 * pfVar17[-1];
      auVar20 = vcvtps2dq_avx(auVar21);
      auVar23 = vmaxps_avx(auVar23,auVar22);
      auVar22 = vcvtps2dq_avx(auVar28);
      auVar20 = vpackssdw_avx2(auVar22,auVar20);
      auVar20 = vpermq_avx2(auVar20,0xd8);
      auVar29._0_4_ = fVar32 * pfVar17[8];
      auVar29._4_4_ = fVar33 * pfVar17[9];
      auVar29._8_4_ = fVar34 * pfVar17[10];
      auVar29._12_4_ = fVar35 * pfVar17[0xb];
      auVar29._16_4_ = fVar36 * pfVar17[0xc];
      auVar29._20_4_ = fVar37 * pfVar17[0xd];
      auVar29._24_4_ = fVar38 * pfVar17[0xe];
      auVar29._28_4_ = fVar39 * pfVar17[0xf];
      *(undefined1 (*) [32])(param_1 + lVar19 * 2) = auVar20;
      auVar22._0_4_ = fVar32 * fVar25;
      auVar22._4_4_ = fVar33 * fVar1;
      auVar22._8_4_ = fVar34 * fVar2;
      auVar22._12_4_ = fVar35 * fVar3;
      auVar22._16_4_ = fVar36 * fVar4;
      auVar22._20_4_ = fVar37 * fVar5;
      auVar22._24_4_ = fVar38 * fVar6;
      auVar22._28_4_ = fVar39 * fVar7;
      auVar20 = vcvtps2dq_avx(auVar22);
      auVar22 = vcvtps2dq_avx(auVar29);
      auVar20 = vpackssdw_avx2(auVar20,auVar22);
      auVar20 = vpermq_avx2(auVar20,0xd8);
      *(undefined1 (*) [32])(param_1 + 0x20 + lVar19 * 2) = auVar20;
      lVar19 = lVar19 + 0x20;
      pfVar17 = pfVar17 + 0x20;
    } while (lVar19 < lVar18);
  }
  auVar20 = vpermilps_avx(auVar23,0x4e);
  auVar23 = vmaxps_avx(auVar23,auVar20);
  auVar20 = vpermilps_avx(auVar23,0xb1);
  auVar23 = vmaxps_avx(auVar23,auVar20);
  auVar20 = vpermq_avx2(auVar23,0x4e);
  auVar23 = vmaxps_avx(auVar23,auVar20);
  fVar25 = auVar23._0_4_;
  if ((__real_3f800000 < fVar25) &&
     (auVar23._4_4_ = fVar25, auVar23._0_4_ = fVar25, auVar23._8_4_ = fVar25,
     auVar23._12_4_ = fVar25, auVar23._16_4_ = fVar25, auVar23._20_4_ = fVar25,
     auVar23._24_4_ = fVar25, auVar23._28_4_ = fVar25, auVar23 = vdivps_avx(auVar24,auVar23),
     0 < lVar18)) {
    do {
      pfVar17 = (float *)(param_2 + 0x20 + lVar16 * 4);
      auVar24._0_4_ = auVar23._0_4_ * *pfVar17;
      auVar24._4_4_ = auVar23._4_4_ * pfVar17[1];
      auVar24._8_4_ = auVar23._8_4_ * pfVar17[2];
      auVar24._12_4_ = auVar23._12_4_ * pfVar17[3];
      auVar24._16_4_ = auVar23._16_4_ * pfVar17[4];
      auVar24._20_4_ = auVar23._20_4_ * pfVar17[5];
      auVar24._24_4_ = auVar23._24_4_ * pfVar17[6];
      auVar24._28_4_ = auVar23._28_4_ * pfVar17[7];
      pfVar17 = (float *)(param_2 + lVar16 * 4);
      auVar30._0_4_ = auVar23._0_4_ * *pfVar17;
      auVar30._4_4_ = auVar23._4_4_ * pfVar17[1];
      auVar30._8_4_ = auVar23._8_4_ * pfVar17[2];
      auVar30._12_4_ = auVar23._12_4_ * pfVar17[3];
      auVar30._16_4_ = auVar23._16_4_ * pfVar17[4];
      auVar30._20_4_ = auVar23._20_4_ * pfVar17[5];
      auVar30._24_4_ = auVar23._24_4_ * pfVar17[6];
      auVar30._28_4_ = auVar23._28_4_ * pfVar17[7];
      auVar24 = vcvtps2dq_avx(auVar24);
      auVar20 = vcvtps2dq_avx(auVar30);
      auVar24 = vpackssdw_avx2(auVar20,auVar24);
      auVar24 = vpermq_avx2(auVar24,0xd8);
      *(undefined1 (*) [32])(param_1 + lVar16 * 2) = auVar24;
      lVar16 = lVar16 + 0x10;
    } while (lVar16 < lVar18);
  }
  return;
}

