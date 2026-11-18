// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 8

// UERAradaudio_intel_popcnt_count_set_bits_read_multiple8_sentinel8_ @ 14f8cc960

ulonglong UERAradaudio_intel_popcnt_count_set_bits_read_multiple8_sentinel8_
                    (longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  uVar1 = param_2 + 7 & 0xfffffff8;
  if (uVar1 != param_2) {
    *(undefined8 *)((int)param_2 + param_1) = 0;
  }
  uVar3 = uVar2;
  if (0 < (int)uVar1) {
    do {
      uVar3 = uVar3 + POPCOUNT(*(undefined8 *)(param_1 + uVar2));
      uVar2 = uVar2 + 8;
    } while ((longlong)uVar2 < (longlong)(int)uVar1);
  }
  return uVar3 & 0xffffffff;
}

// UERAradaudio_sse2_save_samples_ @ 14f8cc9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_sse2_save_samples_(longlong param_1,longlong param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  longlong lVar24;
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
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  
  auVar37 = ___xmm_46fffe0046fffe0046fffe0046fffe00;
  uVar20 = _UNK_15061cc7c;
  uVar19 = _UNK_15061cc78;
  uVar18 = _UNK_15061cc74;
  uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  lVar21 = 0;
  lVar23 = (longlong)param_3;
  auVar41 = ___xmm_3f8000003f8000003f8000003f800000;
  if (0 < param_3) {
    pfVar22 = (float *)(param_2 + 0x20);
    lVar24 = lVar21;
    do {
      fVar3 = *pfVar22;
      fVar4 = pfVar22[1];
      fVar5 = pfVar22[2];
      fVar6 = pfVar22[3];
      fVar7 = pfVar22[4];
      fVar8 = pfVar22[5];
      fVar9 = pfVar22[6];
      fVar10 = pfVar22[7];
      pfVar2 = pfVar22 + -8;
      pfVar11 = pfVar22 + -7;
      pfVar12 = pfVar22 + -6;
      pfVar13 = pfVar22 + -5;
      pfVar1 = pfVar22 + -4;
      pfVar14 = pfVar22 + -3;
      pfVar15 = pfVar22 + -2;
      pfVar16 = pfVar22 + -1;
      pfVar22 = pfVar22 + 0x10;
      auVar26._0_4_ = (uint)fVar7 & uVar17;
      auVar26._4_4_ = (uint)fVar8 & uVar18;
      auVar26._8_4_ = (uint)fVar9 & uVar19;
      auVar26._12_4_ = (uint)fVar10 & uVar20;
      fVar36 = auVar37._0_4_;
      fVar38 = auVar37._4_4_;
      fVar39 = auVar37._8_4_;
      fVar40 = auVar37._12_4_;
      auVar29._0_4_ = (uint)*pfVar1 & uVar17;
      auVar29._4_4_ = (uint)*pfVar14 & uVar18;
      auVar29._8_4_ = (uint)*pfVar15 & uVar19;
      auVar29._12_4_ = (uint)*pfVar16 & uVar20;
      auVar33._0_4_ = (uint)fVar3 & uVar17;
      auVar33._4_4_ = (uint)fVar4 & uVar18;
      auVar33._8_4_ = (uint)fVar5 & uVar19;
      auVar33._12_4_ = (uint)fVar6 & uVar20;
      auVar34 = maxps(auVar33,auVar26);
      auVar25._0_4_ = (uint)*pfVar2 & uVar17;
      auVar25._4_4_ = (uint)*pfVar11 & uVar18;
      auVar25._8_4_ = (uint)*pfVar12 & uVar19;
      auVar25._12_4_ = (uint)*pfVar13 & uVar20;
      auVar26 = maxps(auVar25,auVar29);
      auVar30._0_4_ = (int)(*pfVar2 * fVar36);
      auVar30._4_4_ = (int)(*pfVar11 * fVar38);
      auVar30._8_4_ = (int)(*pfVar12 * fVar39);
      auVar30._12_4_ = (int)(*pfVar13 * fVar40);
      auVar26 = maxps(auVar26,auVar34);
      auVar41 = maxps(auVar41,auVar26);
      auVar34._0_4_ = (int)(*pfVar1 * fVar36);
      auVar34._4_4_ = (int)(*pfVar14 * fVar38);
      auVar34._8_4_ = (int)(*pfVar15 * fVar39);
      auVar34._12_4_ = (int)(*pfVar16 * fVar40);
      auVar26 = packssdw(auVar30,auVar34);
      *(undefined1 (*) [16])(param_1 + lVar24 * 2) = auVar26;
      auVar31._0_4_ = (int)(fVar3 * fVar36);
      auVar31._4_4_ = (int)(fVar4 * fVar38);
      auVar31._8_4_ = (int)(fVar5 * fVar39);
      auVar31._12_4_ = (int)(fVar6 * fVar40);
      auVar27._0_4_ = (int)(fVar7 * fVar36);
      auVar27._4_4_ = (int)(fVar8 * fVar38);
      auVar27._8_4_ = (int)(fVar9 * fVar39);
      auVar27._12_4_ = (int)(fVar10 * fVar40);
      auVar26 = packssdw(auVar31,auVar27);
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar24 * 2) = auVar26;
      lVar24 = lVar24 + 0x10;
    } while (lVar24 < lVar23);
  }
  auVar28._0_8_ = auVar41._8_8_;
  auVar28._8_4_ = auVar41._0_4_;
  auVar28._12_4_ = auVar41._4_4_;
  auVar26 = maxps(auVar41,auVar28);
  auVar41._4_4_ = auVar26._0_4_;
  auVar41._0_4_ = auVar26._4_4_;
  auVar41._8_4_ = auVar26._12_4_;
  auVar41._12_4_ = auVar26._8_4_;
  auVar41 = maxps(auVar26,auVar41);
  if ((__real_3f800000 < auVar41._0_4_) && (auVar37 = divps(auVar37,auVar41), 0 < lVar23)) {
    do {
      pfVar22 = (float *)(param_2 + lVar21 * 4);
      pfVar2 = (float *)(param_2 + 0x10 + lVar21 * 4);
      auVar35._0_4_ = (int)(*pfVar22 * auVar37._0_4_);
      auVar35._4_4_ = (int)(pfVar22[1] * auVar37._4_4_);
      auVar35._8_4_ = (int)(pfVar22[2] * auVar37._8_4_);
      auVar35._12_4_ = (int)(pfVar22[3] * auVar37._12_4_);
      auVar32._0_4_ = (int)(*pfVar2 * auVar37._0_4_);
      auVar32._4_4_ = (int)(pfVar2[1] * auVar37._4_4_);
      auVar32._8_4_ = (int)(pfVar2[2] * auVar37._8_4_);
      auVar32._12_4_ = (int)(pfVar2[3] * auVar37._12_4_);
      auVar41 = packssdw(auVar35,auVar32);
      *(undefined1 (*) [16])(param_1 + lVar21 * 2) = auVar41;
      lVar21 = lVar21 + 8;
    } while (lVar21 < lVar23);
  }
  return;
}

// UERAradaudio_sse4_compute_subband_energy_skip12_excess_read7_ @ 14f8ccb00

void UERAradaudio_sse4_compute_subband_energy_skip12_excess_read7_
               (longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  undefined1 auVar9 [14];
  undefined1 auVar10 [14];
  undefined1 auVar11 [14];
  undefined1 auVar12 [14];
  undefined1 auVar13 [14];
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  undefined1 auVar16 [14];
  undefined1 auVar17 [14];
  undefined1 auVar18 [14];
  undefined1 auVar19 [14];
  undefined1 auVar20 [14];
  unkbyte10 Var21;
  undefined1 (*pauVar22) [16];
  longlong lVar23;
  undefined8 *puVar24;
  float *pfVar25;
  uint uVar26;
  float *pfVar27;
  longlong lVar28;
  longlong lVar29;
  ushort *puVar30;
  ulonglong *puVar31;
  int iVar32;
  undefined1 (*pauVar33) [16];
  undefined4 *puVar34;
  int iVar35;
  longlong lVar36;
  int *piVar37;
  int iVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  undefined1 in_XMM1 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  int iVar54;
  int iVar55;
  undefined1 in_XMM2 [16];
  int iVar56;
  int iVar57;
  float fVar60;
  int iVar61;
  float fVar62;
  int iVar63;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar64;
  int iVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  
  iVar35 = 0xc;
  iVar38 = 0xc;
  if (0xf < param_3) {
    pfVar27 = (float *)(param_1 + 0x30);
    pauVar22 = (undefined1 (*) [16])(param_2 + 0x30);
    pauVar33 = (undefined1 (*) [16])(param_5 + 0x18);
    iVar32 = 0xf;
    do {
      if (*(int *)((param_4 - param_2) + 0xc + (longlong)pauVar22) != 2) break;
      auVar58 = *pauVar33;
      iVar35 = iVar35 + 8;
      pauVar33 = pauVar33 + 1;
      auVar41 = *pauVar22;
      iVar38 = iVar38 + 4;
      iVar32 = iVar32 + 4;
      pauVar22 = pauVar22 + 1;
      auVar40 = pmaddwd(auVar58,auVar58);
      auVar66._0_4_ = (float)auVar40._0_4_;
      auVar66._4_4_ = (float)auVar40._4_4_;
      auVar66._8_4_ = (float)auVar40._8_4_;
      auVar66._12_4_ = (float)auVar40._12_4_;
      auVar49 = sqrtps(in_XMM1,auVar66);
      auVar40 = pmovsxwd(auVar66,auVar58);
      auVar66 = divps(auVar41,auVar49);
      auVar41._0_8_ = auVar58._8_8_;
      auVar41._8_4_ = auVar58._0_4_;
      auVar41._12_4_ = auVar58._4_4_;
      fVar48 = auVar66._0_4_;
      fVar60 = auVar66._4_4_;
      fVar62 = auVar66._8_4_;
      fVar64 = auVar66._12_4_;
      auVar58._4_4_ = fVar48;
      auVar58._0_4_ = fVar48;
      auVar58._8_4_ = fVar60;
      auVar58._12_4_ = fVar60;
      in_XMM1 = pmovsxwd(auVar58,auVar41);
      *pfVar27 = (float)auVar40._0_4_ * fVar48;
      pfVar27[1] = (float)auVar40._4_4_ * fVar48;
      pfVar27[2] = (float)auVar40._8_4_ * fVar60;
      pfVar27[3] = (float)auVar40._12_4_ * fVar60;
      in_XMM2._4_4_ = fVar62;
      in_XMM2._0_4_ = fVar62;
      in_XMM2._8_4_ = fVar64;
      in_XMM2._12_4_ = fVar64;
      pfVar27[4] = (float)in_XMM1._0_4_ * fVar62;
      pfVar27[5] = (float)in_XMM1._4_4_ * fVar62;
      pfVar27[6] = (float)in_XMM1._8_4_ * fVar64;
      pfVar27[7] = (float)in_XMM1._12_4_ * fVar64;
      pfVar27 = pfVar27 + 8;
    } while (iVar32 < param_3);
  }
  iVar32 = iVar38 + 1;
  if (iVar32 < param_3) {
    pauVar22 = (undefined1 (*) [16])(param_2 + (longlong)iVar38 * 4);
    pauVar33 = (undefined1 (*) [16])((longlong)iVar35 * 4 + param_1);
    do {
      if (*(int *)((param_4 - param_2) + 4 + (longlong)pauVar22) != 2) break;
      auVar58 = *pauVar22;
      lVar23 = (longlong)iVar35;
      iVar38 = iVar38 + 2;
      iVar35 = iVar35 + 4;
      iVar32 = iVar32 + 2;
      pauVar22 = (undefined1 (*) [16])(*pauVar22 + 8);
      auVar49._8_8_ = 0;
      auVar49._0_8_ = *(ulonglong *)(param_5 + lVar23 * 2);
      auVar41 = pmaddwd(auVar49,auVar49);
      auVar40._0_4_ = (float)auVar41._0_4_;
      auVar40._4_4_ = (float)auVar41._4_4_;
      auVar40._8_4_ = (float)auVar41._8_4_;
      auVar40._12_4_ = (float)auVar41._12_4_;
      auVar66 = sqrtps(in_XMM1,auVar40);
      auVar41 = pmovsxwd(auVar40,auVar49);
      auVar58 = divps(auVar58,auVar66);
      fVar48 = auVar58._0_4_;
      fVar60 = auVar58._4_4_;
      in_XMM1._4_4_ = fVar48;
      in_XMM1._0_4_ = fVar48;
      in_XMM1._8_4_ = fVar60;
      in_XMM1._12_4_ = fVar60;
      in_XMM2._0_4_ = (float)auVar41._0_4_ * fVar48;
      in_XMM2._4_4_ = (float)auVar41._4_4_ * fVar48;
      in_XMM2._8_4_ = (float)auVar41._8_4_ * fVar60;
      in_XMM2._12_4_ = (float)auVar41._12_4_ * fVar60;
      *pauVar33 = in_XMM2;
      pauVar33 = pauVar33 + 1;
    } while (iVar32 < param_3);
  }
  if (iVar38 < param_3) {
    piVar37 = (int *)(param_4 + (longlong)iVar38 * 4);
    do {
      iVar32 = *piVar37;
      if (4 < iVar32) {
        piVar37 = (int *)(param_4 + (longlong)iVar38 * 4);
        goto LAB_14f8cccb0;
      }
      lVar28 = (longlong)iVar35;
      iVar35 = iVar35 + iVar32;
      piVar37 = piVar37 + 1;
      uVar4 = *(undefined8 *)(param_5 + lVar28 * 2);
      auVar67._0_4_ = (uint)uVar4 & *(uint *)(&DAT_154e13c30 + (longlong)iVar32 * 0x10);
      auVar67._4_4_ =
           (uint)((ulonglong)uVar4 >> 0x20) & *(uint *)((longlong)iVar32 * 0x10 + 0x154e13c34);
      auVar67._8_8_ = 0;
      lVar23 = (longlong)iVar38;
      auVar58 = pmaddwd(auVar67,auVar67);
      iVar38 = iVar38 + 1;
      auVar42._0_4_ = (float)(auVar58._4_4_ + auVar58._0_4_);
      auVar42._4_4_ = (float)(auVar58._0_4_ + auVar58._4_4_);
      auVar42._8_4_ = (float)(auVar58._12_4_ + auVar58._8_4_);
      auVar42._12_4_ = (float)(auVar58._8_4_ + auVar58._12_4_);
      auVar41 = sqrtps(in_XMM2,auVar42);
      auVar58 = pmovsxwd(auVar42,auVar67);
      auVar41 = divps(ZEXT416(*(uint *)(param_2 + lVar23 * 4)),auVar41);
      in_XMM1._0_4_ = auVar41._0_4_;
      in_XMM1._4_4_ = in_XMM1._0_4_;
      in_XMM1._8_4_ = in_XMM1._0_4_;
      in_XMM1._12_4_ = in_XMM1._0_4_;
      in_XMM2._0_4_ = (float)auVar58._0_4_ * in_XMM1._0_4_;
      in_XMM2._4_4_ = (float)auVar58._4_4_ * in_XMM1._0_4_;
      in_XMM2._8_4_ = (float)auVar58._8_4_ * in_XMM1._0_4_;
      in_XMM2._12_4_ = (float)auVar58._12_4_ * in_XMM1._0_4_;
      *(undefined1 (*) [16])(param_1 + lVar28 * 4) = in_XMM2;
    } while (iVar38 < param_3);
  }
  goto LAB_14f8cce13;
  while( true ) {
    lVar28 = (longlong)iVar35;
    iVar35 = iVar35 + iVar32;
    piVar37 = piVar37 + 1;
    puVar1 = (uint *)(param_5 + lVar28 * 2);
    lVar23 = (longlong)iVar32 * 0x10;
    auVar68._0_4_ = *(uint *)(&DAT_154e13c30 + lVar23) & *puVar1;
    auVar68._4_4_ = *(uint *)(lVar23 + 0x154e13c34) & puVar1[1];
    auVar68._8_4_ = *(uint *)(lVar23 + 0x154e13c38) & puVar1[2];
    auVar68._12_4_ = *(uint *)(lVar23 + 0x154e13c3c) & puVar1[3];
    lVar23 = (longlong)iVar38;
    iVar38 = iVar38 + 1;
    auVar58 = pmaddwd(auVar68,auVar68);
    iVar32 = auVar58._4_4_ + auVar58._0_4_;
    iVar54 = auVar58._0_4_ + auVar58._4_4_;
    iVar55 = auVar58._12_4_ + auVar58._8_4_;
    iVar56 = auVar58._8_4_ + auVar58._12_4_;
    auVar43._0_4_ = (float)(iVar55 + iVar32);
    auVar43._4_4_ = (float)(iVar56 + iVar54);
    auVar43._8_4_ = (float)(iVar32 + iVar55);
    auVar43._12_4_ = (float)(iVar54 + iVar56);
    auVar41 = sqrtps(in_XMM2,auVar43);
    auVar58 = pmovsxwd(auVar43,auVar68);
    auVar41 = divps(ZEXT416(*(uint *)(param_2 + lVar23 * 4)),auVar41);
    fVar48 = auVar41._0_4_;
    auVar44._4_4_ = auVar68._12_4_;
    auVar44._0_4_ = auVar68._8_4_;
    auVar44._8_4_ = auVar68._0_4_;
    auVar44._12_4_ = auVar68._4_4_;
    auVar50._0_4_ = (float)auVar58._0_4_ * fVar48;
    auVar50._4_4_ = (float)auVar58._4_4_ * fVar48;
    auVar50._8_4_ = (float)auVar58._8_4_ * fVar48;
    auVar50._12_4_ = (float)auVar58._12_4_ * fVar48;
    *(undefined1 (*) [16])(param_1 + lVar28 * 4) = auVar50;
    in_XMM1 = pmovsxwd(auVar50,auVar44);
    in_XMM2._0_4_ = (float)in_XMM1._0_4_ * fVar48;
    in_XMM2._4_4_ = (float)in_XMM1._4_4_ * fVar48;
    in_XMM2._8_4_ = (float)in_XMM1._8_4_ * fVar48;
    in_XMM2._12_4_ = (float)in_XMM1._12_4_ * fVar48;
    *(undefined1 (*) [16])(param_1 + 0x10 + lVar28 * 4) = in_XMM2;
    if (param_3 <= iVar38) break;
LAB_14f8cccb0:
    iVar32 = *piVar37;
    if (8 < iVar32) {
      puVar34 = (undefined4 *)(param_2 + (longlong)iVar38 * 4);
      goto LAB_14f8ccd50;
    }
  }
  goto LAB_14f8cce13;
  while( true ) {
    uVar3 = *puVar34;
    lVar28 = (longlong)iVar35;
    auVar59._4_4_ = uVar3;
    auVar59._0_4_ = uVar3;
    auVar59._8_4_ = uVar3;
    auVar59._12_4_ = uVar3;
    iVar35 = iVar35 + iVar32;
    iVar38 = iVar38 + 1;
    puVar34 = puVar34 + 1;
    lVar23 = ((longlong)iVar32 + -8) * 0x10;
    auVar58 = *(undefined1 (*) [16])(param_5 + lVar28 * 2);
    puVar1 = (uint *)(param_5 + 0x10 + lVar28 * 2);
    auVar69._0_4_ = *(uint *)(&DAT_154e13c30 + lVar23) & *puVar1;
    auVar69._4_4_ = *(uint *)(lVar23 + 0x154e13c34) & puVar1[1];
    auVar69._8_4_ = *(uint *)(lVar23 + 0x154e13c38) & puVar1[2];
    auVar69._12_4_ = *(uint *)(lVar23 + 0x154e13c3c) & puVar1[3];
    auVar41 = pmaddwd(auVar58,auVar58);
    auVar40 = pmaddwd(auVar69,auVar69);
    iVar32 = auVar40._0_4_ + auVar41._0_4_;
    iVar54 = auVar40._4_4_ + auVar41._4_4_;
    iVar55 = auVar40._8_4_ + auVar41._8_4_;
    iVar56 = auVar40._12_4_ + auVar41._12_4_;
    auVar51._0_4_ = iVar54 + iVar32;
    auVar51._4_4_ = iVar32 + iVar54;
    auVar51._8_4_ = iVar56 + iVar55;
    auVar51._12_4_ = iVar55 + iVar56;
    auVar45._0_4_ = (float)(auVar51._8_4_ + auVar51._0_4_);
    auVar45._4_4_ = (float)(auVar51._12_4_ + auVar51._4_4_);
    auVar45._8_4_ = (float)(auVar51._0_4_ + auVar51._8_4_);
    auVar45._12_4_ = (float)(auVar51._4_4_ + auVar51._12_4_);
    auVar40 = sqrtps(auVar51,auVar45);
    auVar41 = pmovsxwd(auVar45,auVar58);
    auVar40 = divps(auVar59,auVar40);
    auVar46._0_8_ = auVar58._8_8_;
    auVar46._8_4_ = auVar58._0_4_;
    auVar46._12_4_ = auVar58._4_4_;
    fVar48 = auVar40._0_4_;
    auVar52._0_4_ = (float)auVar41._0_4_ * fVar48;
    fVar60 = auVar40._4_4_;
    auVar52._4_4_ = (float)auVar41._4_4_ * fVar60;
    fVar62 = auVar40._8_4_;
    auVar52._8_4_ = (float)auVar41._8_4_ * fVar62;
    fVar64 = auVar40._12_4_;
    auVar52._12_4_ = (float)auVar41._12_4_ * fVar64;
    *(undefined1 (*) [16])(param_1 + lVar28 * 4) = auVar52;
    auVar41 = pmovsxwd(auVar52,auVar46);
    auVar58 = pmovsxwd(auVar46,auVar69);
    auVar47._4_4_ = auVar69._12_4_;
    auVar47._0_4_ = auVar69._8_4_;
    auVar47._8_4_ = auVar69._0_4_;
    auVar47._12_4_ = auVar69._4_4_;
    auVar53._0_4_ = (float)auVar58._0_4_ * fVar48;
    auVar53._4_4_ = (float)auVar58._4_4_ * fVar60;
    auVar53._8_4_ = (float)auVar58._8_4_ * fVar62;
    auVar53._12_4_ = (float)auVar58._12_4_ * fVar64;
    pfVar27 = (float *)(param_1 + 0x10 + lVar28 * 4);
    *pfVar27 = (float)auVar41._0_4_ * fVar48;
    pfVar27[1] = (float)auVar41._4_4_ * fVar60;
    pfVar27[2] = (float)auVar41._8_4_ * fVar62;
    pfVar27[3] = (float)auVar41._12_4_ * fVar64;
    *(undefined1 (*) [16])(param_1 + 0x20 + lVar28 * 4) = auVar53;
    in_XMM1 = pmovsxwd(auVar53,auVar47);
    pfVar27 = (float *)(param_1 + 0x30 + lVar28 * 4);
    *pfVar27 = (float)in_XMM1._0_4_ * fVar48;
    pfVar27[1] = (float)in_XMM1._4_4_ * fVar60;
    pfVar27[2] = (float)in_XMM1._8_4_ * fVar62;
    pfVar27[3] = (float)in_XMM1._12_4_ * fVar64;
    if (param_3 <= iVar38) break;
LAB_14f8ccd50:
    iVar32 = *(int *)((longlong)puVar34 + (param_4 - param_2));
    if (7 < iVar32 - 9U) break;
  }
LAB_14f8cce13:
  lVar23 = (longlong)iVar38;
  if (lVar23 < param_3) {
    lVar28 = param_3 - lVar23;
    pfVar27 = (float *)(param_2 + lVar23 * 4);
    do {
      uVar8 = *(uint *)((param_4 - param_2) + (longlong)pfVar27);
      lVar23 = (longlong)(int)uVar8;
      iVar32 = 0;
      iVar38 = 0;
      lVar39 = (longlong)iVar35;
      if (((0 < (int)uVar8) && (7 < uVar8)) && (1 < __isa_available)) {
        iVar57 = 0;
        iVar61 = 0;
        iVar63 = 0;
        iVar65 = 0;
        iVar32 = 0;
        iVar54 = 0;
        iVar55 = 0;
        iVar56 = 0;
        uVar26 = uVar8 & 0x80000007;
        if ((int)uVar26 < 0) {
          uVar26 = (uVar26 - 1 | 0xfffffff8) + 1;
        }
        lVar29 = 0;
        puVar24 = (undefined8 *)(param_5 + lVar39 * 2);
        do {
          auVar58 = pmovzxwd(in_XMM1,*puVar24);
          auVar58 = pmulld(auVar58,auVar58);
          iVar57 = iVar57 + auVar58._0_4_;
          iVar61 = iVar61 + auVar58._4_4_;
          iVar63 = iVar63 + auVar58._8_4_;
          iVar65 = iVar65 + auVar58._12_4_;
          iVar38 = iVar38 + 8;
          lVar29 = lVar29 + 8;
          auVar58 = pmovzxwd(auVar58,puVar24[1]);
          puVar24 = puVar24 + 2;
          in_XMM1 = pmulld(auVar58,auVar58);
          iVar32 = iVar32 + in_XMM1._0_4_;
          iVar54 = iVar54 + in_XMM1._4_4_;
          iVar55 = iVar55 + in_XMM1._8_4_;
          iVar56 = iVar56 + in_XMM1._12_4_;
        } while (lVar29 < (int)(uVar8 - uVar26));
        iVar32 = iVar32 + iVar57 + iVar55 + iVar63 + iVar54 + iVar61 + iVar56 + iVar65;
      }
      lVar29 = (longlong)iVar38;
      if (lVar29 < lVar23) {
        puVar30 = (ushort *)(param_5 + (lVar29 + lVar39) * 2);
        lVar29 = lVar23 - lVar29;
        do {
          uVar7 = *puVar30;
          puVar30 = puVar30 + 1;
          iVar32 = iVar32 + (uint)uVar7 * (uint)uVar7;
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
      }
      fVar48 = (float)iVar32;
      in_XMM1 = ZEXT416((uint)fVar48);
      if (fVar48 < 0.0) {
        fVar48 = sqrtf(fVar48);
      }
      else {
        fVar48 = SQRT(fVar48);
      }
      iVar38 = 0;
      fVar48 = *pfVar27 / fVar48;
      if ((0 < (int)uVar8) && (0xf < uVar8)) {
        lVar29 = (longlong)(int)(iVar35 + -1 + uVar8);
        if (((ulonglong)(param_5 + lVar29 * 2) < (ulonglong)(lVar39 * 4 + param_1)) ||
           ((ulonglong)(lVar29 * 4 + param_1) < (ulonglong)(param_5 + lVar39 * 2))) {
          uVar26 = uVar8 & 0x8000000f;
          if ((int)uVar26 < 0) {
            uVar26 = (uVar26 - 1 | 0xfffffff0) + 1;
          }
          lVar29 = 0;
          pfVar25 = (float *)(param_1 + 0x20 + lVar39 * 4);
          puVar31 = (ulonglong *)(param_5 + 0x10 + lVar39 * 2);
          do {
            uVar5 = puVar31[-2];
            auVar9._8_4_ = 0;
            auVar9._0_8_ = uVar5;
            auVar9._12_2_ = (short)(uVar5 >> 0x30);
            auVar13._8_2_ = (short)(uVar5 >> 0x20);
            auVar13._0_8_ = uVar5;
            auVar13._10_4_ = auVar9._10_4_;
            auVar17._6_8_ = 0;
            auVar17._0_6_ = auVar13._8_6_;
            iVar38 = iVar38 + 0x10;
            lVar29 = lVar29 + 0x10;
            uVar6 = puVar31[-1];
            pfVar25[-8] = (float)(ushort)uVar5 * fVar48;
            pfVar25[-7] = (float)(int)CONCAT82(SUB148(auVar17 << 0x40,6),(short)(uVar5 >> 0x10)) *
                          fVar48;
            pfVar25[-6] = (float)auVar13._8_4_ * fVar48;
            pfVar25[-5] = (float)(auVar9._10_4_ >> 0x10) * fVar48;
            auVar10._8_4_ = 0;
            auVar10._0_8_ = uVar6;
            auVar10._12_2_ = (short)(uVar6 >> 0x30);
            auVar14._8_2_ = (short)(uVar6 >> 0x20);
            auVar14._0_8_ = uVar6;
            auVar14._10_4_ = auVar10._10_4_;
            auVar18._6_8_ = 0;
            auVar18._0_6_ = auVar14._8_6_;
            uVar5 = *puVar31;
            pfVar25[-4] = (float)(ushort)uVar6 * fVar48;
            pfVar25[-3] = (float)(int)CONCAT82(SUB148(auVar18 << 0x40,6),(short)(uVar6 >> 0x10)) *
                          fVar48;
            pfVar25[-2] = (float)auVar14._8_4_ * fVar48;
            pfVar25[-1] = (float)(auVar10._10_4_ >> 0x10) * fVar48;
            auVar11._8_4_ = 0;
            auVar11._0_8_ = uVar5;
            auVar11._12_2_ = (short)(uVar5 >> 0x30);
            auVar15._8_2_ = (short)(uVar5 >> 0x20);
            auVar15._0_8_ = uVar5;
            auVar15._10_4_ = auVar11._10_4_;
            auVar19._6_8_ = 0;
            auVar19._0_6_ = auVar15._8_6_;
            uVar6 = puVar31[1];
            *pfVar25 = (float)(ushort)uVar5 * fVar48;
            pfVar25[1] = (float)(int)CONCAT82(SUB148(auVar19 << 0x40,6),(short)(uVar5 >> 0x10)) *
                         fVar48;
            pfVar25[2] = (float)auVar15._8_4_ * fVar48;
            pfVar25[3] = (float)(auVar11._10_4_ >> 0x10) * fVar48;
            auVar12._8_4_ = 0;
            auVar12._0_8_ = uVar6;
            auVar12._12_2_ = (short)(uVar6 >> 0x30);
            auVar16._8_2_ = (short)(uVar6 >> 0x20);
            auVar16._0_8_ = uVar6;
            auVar16._10_4_ = auVar12._10_4_;
            auVar20._6_8_ = 0;
            auVar20._0_6_ = auVar16._8_6_;
            Var21 = CONCAT82(SUB148(auVar20 << 0x40,6),(short)(uVar6 >> 0x10));
            in_XMM1._0_4_ = (float)CONCAT22(0,(ushort)uVar6);
            in_XMM1._4_10_ = Var21;
            in_XMM1._14_2_ = 0;
            pfVar25[4] = (float)(int)in_XMM1._0_4_ * fVar48;
            pfVar25[5] = (float)(int)Var21 * fVar48;
            pfVar25[6] = (float)auVar16._8_4_ * fVar48;
            pfVar25[7] = (float)(auVar12._10_4_ >> 0x10) * fVar48;
            pfVar25 = pfVar25 + 0x10;
            puVar31 = puVar31 + 4;
          } while (lVar29 < (int)(uVar8 - uVar26));
        }
      }
      lVar29 = (longlong)iVar38;
      if (lVar29 < lVar23) {
        if (3 < lVar23 - lVar29) {
          lVar2 = lVar29 + lVar39;
          lVar36 = ((lVar23 - lVar29) - 4U >> 2) + 1;
          lVar29 = lVar29 + lVar36 * 4;
          pfVar25 = (float *)(param_1 + 8 + lVar2 * 4);
          puVar30 = (ushort *)(param_5 + 4 + lVar2 * 2);
          do {
            pfVar25[-2] = (float)puVar30[-2] * fVar48;
            pfVar25[-1] = (float)puVar30[-1] * fVar48;
            *pfVar25 = (float)*puVar30 * fVar48;
            in_XMM1 = ZEXT416((uint)((float)puVar30[1] * fVar48));
            pfVar25[1] = (float)puVar30[1] * fVar48;
            lVar36 = lVar36 + -1;
            pfVar25 = pfVar25 + 4;
            puVar30 = puVar30 + 4;
          } while (lVar36 != 0);
          if (lVar23 <= lVar29) goto LAB_14f8cd10a;
        }
        puVar30 = (ushort *)(param_5 + (lVar39 + lVar29) * 2);
        lVar23 = lVar23 - lVar29;
        pfVar25 = (float *)((lVar39 + lVar29) * 4 + param_1);
        do {
          uVar7 = *puVar30;
          puVar30 = puVar30 + 1;
          *pfVar25 = (float)uVar7 * fVar48;
          lVar23 = lVar23 + -1;
          pfVar25 = pfVar25 + 1;
        } while (lVar23 != 0);
      }
LAB_14f8cd10a:
      iVar35 = iVar35 + uVar8;
      pfVar27 = pfVar27 + 1;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
  }
  return;
}

// UERAradaudio_sse4_dequantize_long_block_8x8_Nx16_ @ 14f8cd150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_sse4_dequantize_long_block_8x8_Nx16_
               (longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  float *pfVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  int iVar21;
  int iVar22;
  undefined1 in_XMM1 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  auVar3 = ___xmm_00010001000100010001000100010001;
  pfVar4 = (float *)(param_3 + 8);
  iVar10 = 0;
  iVar7 = 0x10;
  lVar6 = 2;
  pauVar5 = (undefined1 (*) [16])(param_1 + 0x50);
  do {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulonglong *)(iVar10 + param_2);
    auVar16 = pabsb(in_XMM1,auVar24);
    auVar16 = pmaddubsw(auVar16,auVar16);
    auVar17 = pmaddwd(auVar16,auVar3);
    auVar16._0_4_ = auVar17._4_4_ + auVar17._0_4_;
    auVar16._4_4_ = auVar17._0_4_ + auVar17._4_4_;
    auVar16._8_4_ = auVar17._12_4_ + auVar17._8_4_;
    auVar16._12_4_ = auVar17._8_4_ + auVar17._12_4_;
    auVar17 = pmovsxbd(auVar16,auVar24);
    auVar25._0_8_ = *(ulonglong *)(iVar10 + param_2) >> 0x20;
    auVar25._8_8_ = 0;
    fVar15 = pfVar4[-2] / SQRT((float)auVar16._0_4_);
    auVar16 = pmovsxbd(auVar17,auVar25);
    *(float *)pauVar5[-5] = (float)auVar17._0_4_ * fVar15;
    *(float *)(pauVar5[-5] + 4) = (float)auVar17._4_4_ * fVar15;
    *(float *)(pauVar5[-5] + 8) = (float)auVar17._8_4_ * fVar15;
    *(float *)(pauVar5[-5] + 0xc) = (float)auVar17._12_4_ * fVar15;
    auVar18._0_4_ = (float)auVar16._0_4_ * fVar15;
    auVar18._4_4_ = (float)auVar16._4_4_ * fVar15;
    auVar18._8_4_ = (float)auVar16._8_4_ * fVar15;
    auVar18._12_4_ = (float)auVar16._12_4_ * fVar15;
    pauVar5[-4] = auVar18;
    uVar8 = *(ulonglong *)((iVar7 + -8) + param_2);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar8;
    auVar16 = pabsb(auVar18,auVar26);
    auVar16 = pmaddubsw(auVar16,auVar16);
    auVar16 = pmaddwd(auVar16,auVar3);
    auVar17._0_4_ = auVar16._4_4_ + auVar16._0_4_;
    auVar17._4_4_ = auVar16._0_4_ + auVar16._4_4_;
    auVar17._8_4_ = auVar16._12_4_ + auVar16._8_4_;
    auVar17._12_4_ = auVar16._8_4_ + auVar16._12_4_;
    auVar16 = pmovsxbd(auVar17,auVar26);
    auVar27._0_8_ = uVar8 >> 0x20;
    auVar27._8_8_ = 0;
    fVar15 = pfVar4[-1] / SQRT((float)auVar17._0_4_);
    auVar17 = pmovsxbd(auVar16,auVar27);
    *(float *)pauVar5[-3] = (float)auVar16._0_4_ * fVar15;
    *(float *)(pauVar5[-3] + 4) = (float)auVar16._4_4_ * fVar15;
    *(float *)(pauVar5[-3] + 8) = (float)auVar16._8_4_ * fVar15;
    *(float *)(pauVar5[-3] + 0xc) = (float)auVar16._12_4_ * fVar15;
    auVar19._0_4_ = (float)auVar17._0_4_ * fVar15;
    auVar19._4_4_ = (float)auVar17._4_4_ * fVar15;
    auVar19._8_4_ = (float)auVar17._8_4_ * fVar15;
    auVar19._12_4_ = (float)auVar17._12_4_ * fVar15;
    pauVar5[-2] = auVar19;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulonglong *)(iVar7 + param_2);
    auVar16 = pabsb(auVar19,auVar28);
    auVar16 = pmaddubsw(auVar16,auVar16);
    auVar16 = pmaddwd(auVar16,auVar3);
    auVar13._0_4_ = auVar16._4_4_ + auVar16._0_4_;
    auVar13._4_4_ = auVar16._0_4_ + auVar16._4_4_;
    auVar13._8_4_ = auVar16._12_4_ + auVar16._8_4_;
    auVar13._12_4_ = auVar16._8_4_ + auVar16._12_4_;
    auVar16 = pmovsxbd(auVar13,auVar28);
    auVar29._0_8_ = *(ulonglong *)(iVar7 + param_2) >> 0x20;
    auVar29._8_8_ = 0;
    fVar15 = *pfVar4 / SQRT((float)auVar13._0_4_);
    auVar17 = pmovsxbd(auVar16,auVar29);
    *(float *)pauVar5[-1] = (float)auVar16._0_4_ * fVar15;
    *(float *)(pauVar5[-1] + 4) = (float)auVar16._4_4_ * fVar15;
    *(float *)(pauVar5[-1] + 8) = (float)auVar16._8_4_ * fVar15;
    *(float *)(pauVar5[-1] + 0xc) = (float)auVar16._12_4_ * fVar15;
    auVar20._0_4_ = (float)auVar17._0_4_ * fVar15;
    auVar20._4_4_ = (float)auVar17._4_4_ * fVar15;
    auVar20._8_4_ = (float)auVar17._8_4_ * fVar15;
    auVar20._12_4_ = (float)auVar17._12_4_ * fVar15;
    *pauVar5 = auVar20;
    uVar8 = *(ulonglong *)((iVar7 + 8) + param_2);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar8;
    auVar16 = pabsb(auVar20,auVar30);
    auVar16 = pmaddubsw(auVar16,auVar16);
    auVar16 = pmaddwd(auVar16,auVar3);
    auVar14._0_4_ = auVar16._4_4_ + auVar16._0_4_;
    auVar14._4_4_ = auVar16._0_4_ + auVar16._4_4_;
    auVar14._8_4_ = auVar16._12_4_ + auVar16._8_4_;
    auVar14._12_4_ = auVar16._8_4_ + auVar16._12_4_;
    auVar16 = pmovsxbd(auVar14,auVar30);
    fVar15 = pfVar4[1] / SQRT((float)auVar14._0_4_);
    *(float *)pauVar5[1] = (float)auVar16._0_4_ * fVar15;
    *(float *)(pauVar5[1] + 4) = (float)auVar16._4_4_ * fVar15;
    *(float *)(pauVar5[1] + 8) = (float)auVar16._8_4_ * fVar15;
    *(float *)(pauVar5[1] + 0xc) = (float)auVar16._12_4_ * fVar15;
    auVar31._0_8_ = uVar8 >> 0x20;
    auVar31._8_8_ = 0;
    auVar16 = pmovsxbd(auVar16,auVar31);
    iVar10 = iVar10 + 0x20;
    pfVar4 = pfVar4 + 4;
    iVar7 = iVar7 + 0x20;
    in_XMM1._0_4_ = (float)auVar16._0_4_ * fVar15;
    in_XMM1._4_4_ = (float)auVar16._4_4_ * fVar15;
    in_XMM1._8_4_ = (float)auVar16._8_4_ * fVar15;
    in_XMM1._12_4_ = (float)auVar16._12_4_ * fVar15;
    pauVar5[2] = in_XMM1;
    lVar6 = lVar6 + -1;
    pauVar5 = pauVar5 + 8;
  } while (lVar6 != 0);
  if (8 < param_4) {
    lVar6 = (longlong)iVar10;
    pauVar5 = (undefined1 (*) [16])(param_2 + lVar6);
    uVar8 = (ulonglong)(param_4 - 8U);
    iVar10 = iVar10 + (param_4 - 8U) * 0x10;
    pfVar4 = (float *)(param_1 + (lVar6 + 4) * 4);
    pfVar9 = (float *)(param_3 + 0x20);
    do {
      auVar17 = *pauVar5;
      pauVar5 = pauVar5 + 1;
      auVar16 = pabsb(auVar16,auVar17);
      auVar16 = pmaddubsw(auVar16,auVar16);
      auVar16 = pmaddwd(auVar16,auVar3);
      iVar7 = auVar16._4_4_ + auVar16._0_4_;
      iVar21 = auVar16._0_4_ + auVar16._4_4_;
      iVar22 = auVar16._12_4_ + auVar16._8_4_;
      iVar23 = auVar16._8_4_ + auVar16._12_4_;
      auVar11._0_4_ = iVar22 + iVar7;
      auVar11._4_4_ = iVar23 + iVar21;
      auVar11._8_4_ = iVar7 + iVar22;
      auVar11._12_4_ = iVar21 + iVar23;
      auVar16 = pmovsxbd(auVar11,auVar17);
      fVar15 = *pfVar9 / SQRT((float)auVar11._0_4_);
      auVar12._0_8_ = auVar17._0_8_ >> 0x20;
      auVar12._8_8_ = auVar17._8_8_ >> 0x20;
      auVar13 = pmovsxbd(auVar12,auVar12);
      pfVar4[-4] = (float)auVar16._0_4_ * fVar15;
      pfVar4[-3] = (float)auVar16._4_4_ * fVar15;
      pfVar4[-2] = (float)auVar16._8_4_ * fVar15;
      pfVar4[-1] = (float)auVar16._12_4_ * fVar15;
      auVar1._8_4_ = auVar17._0_4_;
      auVar1._0_8_ = auVar17._8_8_;
      auVar1._12_4_ = auVar17._4_4_;
      auVar14 = pmovsxbd(auVar13,auVar1);
      *pfVar4 = (float)auVar13._0_4_ * fVar15;
      pfVar4[1] = (float)auVar13._4_4_ * fVar15;
      pfVar4[2] = (float)auVar13._8_4_ * fVar15;
      pfVar4[3] = (float)auVar13._12_4_ * fVar15;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = auVar17._12_4_;
      auVar2._8_4_ = auVar17._4_4_;
      auVar2._12_4_ = 0;
      auVar16 = pmovsxbd(auVar14,auVar2);
      pfVar4[4] = (float)auVar14._0_4_ * fVar15;
      pfVar4[5] = (float)auVar14._4_4_ * fVar15;
      pfVar4[6] = (float)auVar14._8_4_ * fVar15;
      pfVar4[7] = (float)auVar14._12_4_ * fVar15;
      pfVar4[8] = (float)auVar16._0_4_ * fVar15;
      pfVar4[9] = (float)auVar16._4_4_ * fVar15;
      pfVar4[10] = (float)auVar16._8_4_ * fVar15;
      pfVar4[0xb] = (float)auVar16._12_4_ * fVar15;
      uVar8 = uVar8 - 1;
      pfVar4 = pfVar4 + 0x10;
      pfVar9 = pfVar9 + 1;
    } while (uVar8 != 0);
  }
  memset((void *)(param_1 + (longlong)iVar10 * 4),0,(longlong)((0x400 - iVar10) * 4));
  return;
}

// UERAradaudio_sse4_dequantize_long_block_replace_0_with_random_8x8_Nx16_ @ 14f8cd410

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_sse4_dequantize_long_block_replace_0_with_random_8x8_Nx16_
               (longlong param_1,longlong param_2,longlong param_3,int param_4,
               undefined1 (*param_5) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 (*pauVar13) [16];
  int iVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  longlong *plVar18;
  ulonglong uVar19;
  float *pfVar20;
  uint uVar21;
  undefined1 auVar23 [12];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar24 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar25 [12];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar26 [12];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  int iVar42;
  int iVar46;
  int iVar47;
  undefined1 in_XMM1 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar22 [12];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  
  auVar8 = ___xmm_08f807f906fa05fb04fc03fd02fe01ff;
  auVar59 = ___xmm_00000001000000017ff8a3ed7ff8a3ed;
  iVar48 = _UNK_15352c4ec;
  iVar47 = _UNK_15352c4e8;
  iVar46 = _UNK_15352c4e4;
  iVar42 = ___xmm_00000000000000002aa01d312aa01d31;
  uVar7 = _UNK_15111455c;
  uVar6 = _UNK_151114558;
  uVar5 = _UNK_151114554;
  uVar4 = ___xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f;
  auVar3 = ___xmm_00010001000100010001000100010001;
  pauVar13 = (undefined1 (*) [16])(param_1 + 0x50);
  pfVar20 = (float *)(param_3 + 8);
  plVar18 = (longlong *)(param_2 + 0x10);
  iVar14 = 0;
  iVar15 = 0x10;
  lVar16 = 2;
  auVar50 = *param_5;
  do {
    auVar51._8_8_ = 0;
    auVar51._0_8_ = *(ulonglong *)(iVar14 + param_2);
    if (plVar18[-2] == 0) {
      uVar21 = CONCAT22(auVar50._2_2_ >> 4,auVar50._0_2_ >> 4);
      auVar22._0_8_ = CONCAT26(auVar50._6_2_ >> 4,CONCAT24(auVar50._4_2_ >> 4,uVar21));
      auVar22._8_2_ = auVar50._8_2_ >> 4;
      auVar22._10_2_ = auVar50._10_2_ >> 4;
      auVar49._12_2_ = auVar50._12_2_ >> 4;
      auVar49._0_12_ = auVar22;
      auVar49._14_2_ = auVar50._14_2_ >> 4;
      auVar40._0_4_ = uVar21 & uVar4;
      auVar40._4_4_ = (uint)((ulonglong)auVar22._0_8_ >> 0x20) & uVar5;
      auVar40._8_4_ = auVar22._8_4_ & uVar6;
      auVar40._12_4_ = auVar49._12_4_ & uVar7;
      auVar49 = pmulld(auVar50,auVar59);
      auVar51 = pshufb(auVar8,auVar40);
      auVar50._0_4_ = auVar49._0_4_ + iVar42;
      auVar50._4_4_ = auVar49._4_4_ + iVar46;
      auVar50._8_4_ = auVar49._8_4_ + iVar47;
      auVar50._12_4_ = auVar49._12_4_ + iVar48;
    }
    auVar49 = pabsb(in_XMM1,auVar51);
    auVar49 = pmaddubsw(auVar49,auVar49);
    auVar49 = pmaddwd(auVar49,auVar3);
    auVar27._0_4_ = auVar49._4_4_ + auVar49._0_4_;
    auVar27._4_4_ = auVar49._0_4_ + auVar49._4_4_;
    auVar27._8_4_ = auVar49._12_4_ + auVar49._8_4_;
    auVar27._12_4_ = auVar49._8_4_ + auVar49._12_4_;
    auVar49 = pmovsxbd(auVar27,auVar51);
    auVar52._0_8_ = auVar51._0_8_ >> 0x20;
    auVar52._8_8_ = auVar51._8_8_ >> 0x20;
    fVar41 = pfVar20[-2] / SQRT((float)auVar27._0_4_);
    auVar51 = pmovsxbd(auVar49,auVar52);
    *(float *)pauVar13[-5] = (float)auVar49._0_4_ * fVar41;
    *(float *)(pauVar13[-5] + 4) = (float)auVar49._4_4_ * fVar41;
    *(float *)(pauVar13[-5] + 8) = (float)auVar49._8_4_ * fVar41;
    *(float *)(pauVar13[-5] + 0xc) = (float)auVar49._12_4_ * fVar41;
    auVar43._0_4_ = (float)auVar51._0_4_ * fVar41;
    auVar43._4_4_ = (float)auVar51._4_4_ * fVar41;
    auVar43._8_4_ = (float)auVar51._8_4_ * fVar41;
    auVar43._12_4_ = (float)auVar51._12_4_ * fVar41;
    pauVar13[-4] = auVar43;
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *(ulonglong *)((iVar15 + -8) + param_2);
    if (plVar18[-1] == 0) {
      uVar21 = CONCAT22(auVar50._2_2_ >> 4,auVar50._0_2_ >> 4);
      auVar23._0_8_ = CONCAT26(auVar50._6_2_ >> 4,CONCAT24(auVar50._4_2_ >> 4,uVar21));
      auVar23._8_2_ = auVar50._8_2_ >> 4;
      auVar23._10_2_ = auVar50._10_2_ >> 4;
      auVar28._12_2_ = auVar50._12_2_ >> 4;
      auVar28._0_12_ = auVar23;
      auVar28._14_2_ = auVar50._14_2_ >> 4;
      auVar29._0_4_ = uVar21 & uVar4;
      auVar29._4_4_ = (uint)((ulonglong)auVar23._0_8_ >> 0x20) & uVar5;
      auVar29._8_4_ = auVar23._8_4_ & uVar6;
      auVar29._12_4_ = auVar28._12_4_ & uVar7;
      auVar51 = pmulld(auVar50,auVar59);
      auVar53 = pshufb(auVar8,auVar29);
      auVar50._0_4_ = auVar51._0_4_ + iVar42;
      auVar50._4_4_ = auVar51._4_4_ + iVar46;
      auVar50._8_4_ = auVar51._8_4_ + iVar47;
      auVar50._12_4_ = auVar51._12_4_ + iVar48;
    }
    auVar51 = pabsb(auVar43,auVar53);
    auVar51 = pmaddubsw(auVar51,auVar51);
    auVar51 = pmaddwd(auVar51,auVar3);
    auVar30._0_4_ = auVar51._4_4_ + auVar51._0_4_;
    auVar30._4_4_ = auVar51._0_4_ + auVar51._4_4_;
    auVar30._8_4_ = auVar51._12_4_ + auVar51._8_4_;
    auVar30._12_4_ = auVar51._8_4_ + auVar51._12_4_;
    auVar51 = pmovsxbd(auVar30,auVar53);
    auVar54._0_8_ = auVar53._0_8_ >> 0x20;
    auVar54._8_8_ = auVar53._8_8_ >> 0x20;
    fVar41 = pfVar20[-1] / SQRT((float)auVar30._0_4_);
    auVar49 = pmovsxbd(auVar51,auVar54);
    *(float *)pauVar13[-3] = (float)auVar51._0_4_ * fVar41;
    *(float *)(pauVar13[-3] + 4) = (float)auVar51._4_4_ * fVar41;
    *(float *)(pauVar13[-3] + 8) = (float)auVar51._8_4_ * fVar41;
    *(float *)(pauVar13[-3] + 0xc) = (float)auVar51._12_4_ * fVar41;
    auVar44._0_4_ = (float)auVar49._0_4_ * fVar41;
    auVar44._4_4_ = (float)auVar49._4_4_ * fVar41;
    auVar44._8_4_ = (float)auVar49._8_4_ * fVar41;
    auVar44._12_4_ = (float)auVar49._12_4_ * fVar41;
    pauVar13[-2] = auVar44;
    auVar55._8_8_ = 0;
    auVar55._0_8_ = *(ulonglong *)(iVar15 + param_2);
    if (*plVar18 == 0) {
      uVar21 = CONCAT22(auVar50._2_2_ >> 4,auVar50._0_2_ >> 4);
      auVar24._0_8_ = CONCAT26(auVar50._6_2_ >> 4,CONCAT24(auVar50._4_2_ >> 4,uVar21));
      auVar24._8_2_ = auVar50._8_2_ >> 4;
      auVar24._10_2_ = auVar50._10_2_ >> 4;
      auVar31._12_2_ = auVar50._12_2_ >> 4;
      auVar31._0_12_ = auVar24;
      auVar31._14_2_ = auVar50._14_2_ >> 4;
      auVar32._0_4_ = uVar21 & uVar4;
      auVar32._4_4_ = (uint)((ulonglong)auVar24._0_8_ >> 0x20) & uVar5;
      auVar32._8_4_ = auVar24._8_4_ & uVar6;
      auVar32._12_4_ = auVar31._12_4_ & uVar7;
      auVar51 = pmulld(auVar50,auVar59);
      auVar55 = pshufb(auVar8,auVar32);
      auVar50._0_4_ = auVar51._0_4_ + iVar42;
      auVar50._4_4_ = auVar51._4_4_ + iVar46;
      auVar50._8_4_ = auVar51._8_4_ + iVar47;
      auVar50._12_4_ = auVar51._12_4_ + iVar48;
    }
    auVar51 = pabsb(auVar44,auVar55);
    auVar51 = pmaddubsw(auVar51,auVar51);
    auVar51 = pmaddwd(auVar51,auVar3);
    auVar33._0_4_ = auVar51._4_4_ + auVar51._0_4_;
    auVar33._4_4_ = auVar51._0_4_ + auVar51._4_4_;
    auVar33._8_4_ = auVar51._12_4_ + auVar51._8_4_;
    auVar33._12_4_ = auVar51._8_4_ + auVar51._12_4_;
    auVar51 = pmovsxbd(auVar33,auVar55);
    auVar56._0_8_ = auVar55._0_8_ >> 0x20;
    auVar56._8_8_ = auVar55._8_8_ >> 0x20;
    fVar41 = *pfVar20 / SQRT((float)auVar33._0_4_);
    auVar49 = pmovsxbd(auVar51,auVar56);
    *(float *)pauVar13[-1] = (float)auVar51._0_4_ * fVar41;
    *(float *)(pauVar13[-1] + 4) = (float)auVar51._4_4_ * fVar41;
    *(float *)(pauVar13[-1] + 8) = (float)auVar51._8_4_ * fVar41;
    *(float *)(pauVar13[-1] + 0xc) = (float)auVar51._12_4_ * fVar41;
    auVar45._0_4_ = (float)auVar49._0_4_ * fVar41;
    auVar45._4_4_ = (float)auVar49._4_4_ * fVar41;
    auVar45._8_4_ = (float)auVar49._8_4_ * fVar41;
    auVar45._12_4_ = (float)auVar49._12_4_ * fVar41;
    *pauVar13 = auVar45;
    auVar57._8_8_ = 0;
    auVar57._0_8_ = *(ulonglong *)((iVar15 + 8) + param_2);
    if (plVar18[1] == 0) {
      uVar21 = CONCAT22(auVar50._2_2_ >> 4,auVar50._0_2_ >> 4);
      auVar25._0_8_ = CONCAT26(auVar50._6_2_ >> 4,CONCAT24(auVar50._4_2_ >> 4,uVar21));
      auVar25._8_2_ = auVar50._8_2_ >> 4;
      auVar25._10_2_ = auVar50._10_2_ >> 4;
      auVar34._12_2_ = auVar50._12_2_ >> 4;
      auVar34._0_12_ = auVar25;
      auVar34._14_2_ = auVar50._14_2_ >> 4;
      auVar35._0_4_ = uVar21 & uVar4;
      auVar35._4_4_ = (uint)((ulonglong)auVar25._0_8_ >> 0x20) & uVar5;
      auVar35._8_4_ = auVar25._8_4_ & uVar6;
      auVar35._12_4_ = auVar34._12_4_ & uVar7;
      auVar51 = pmulld(auVar50,auVar59);
      auVar57 = pshufb(auVar8,auVar35);
      auVar50._0_4_ = auVar51._0_4_ + iVar42;
      auVar50._4_4_ = auVar51._4_4_ + iVar46;
      auVar50._8_4_ = auVar51._8_4_ + iVar47;
      auVar50._12_4_ = auVar51._12_4_ + iVar48;
    }
    auVar51 = pabsb(auVar45,auVar57);
    iVar14 = iVar14 + 0x20;
    auVar51 = pmaddubsw(auVar51,auVar51);
    iVar15 = iVar15 + 0x20;
    plVar18 = plVar18 + 4;
    auVar51 = pmaddwd(auVar51,auVar3);
    auVar36._0_4_ = auVar51._4_4_ + auVar51._0_4_;
    auVar36._4_4_ = auVar51._0_4_ + auVar51._4_4_;
    auVar36._8_4_ = auVar51._12_4_ + auVar51._8_4_;
    auVar36._12_4_ = auVar51._8_4_ + auVar51._12_4_;
    pfVar17 = pfVar20 + 1;
    pfVar20 = pfVar20 + 4;
    auVar51 = pmovsxbd(auVar36,auVar57);
    auVar58._0_8_ = auVar57._0_8_ >> 0x20;
    auVar58._8_8_ = auVar57._8_8_ >> 0x20;
    fVar41 = *pfVar17 / SQRT((float)auVar36._0_4_);
    auVar37 = pmovsxbd(auVar51,auVar58);
    *(float *)pauVar13[1] = (float)auVar51._0_4_ * fVar41;
    *(float *)(pauVar13[1] + 4) = (float)auVar51._4_4_ * fVar41;
    *(float *)(pauVar13[1] + 8) = (float)auVar51._8_4_ * fVar41;
    *(float *)(pauVar13[1] + 0xc) = (float)auVar51._12_4_ * fVar41;
    in_XMM1._0_4_ = (float)auVar37._0_4_ * fVar41;
    in_XMM1._4_4_ = (float)auVar37._4_4_ * fVar41;
    in_XMM1._8_4_ = (float)auVar37._8_4_ * fVar41;
    in_XMM1._12_4_ = (float)auVar37._12_4_ * fVar41;
    pauVar13[2] = in_XMM1;
    auVar51 = ___xmm_7ff8a3ed7ff8a3ed7ff8a3ed7ff8a3ed;
    iVar12 = _UNK_15352c52c;
    iVar11 = _UNK_15352c528;
    iVar10 = _UNK_15352c524;
    iVar9 = ___xmm_2aa01d312aa01d312aa01d312aa01d31;
    pauVar13 = pauVar13 + 8;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  if (8 < param_4) {
    pauVar13 = (undefined1 (*) [16])(iVar14 + param_2);
    pfVar17 = (float *)(param_1 + 0x10 + (longlong)iVar14 * 4);
    uVar19 = (ulonglong)(param_4 - 8U);
    pfVar20 = (float *)(param_3 + 0x20);
    iVar14 = iVar14 + (param_4 - 8U) * 0x10;
    do {
      auVar59 = *pauVar13;
      if (*(longlong *)(*pauVar13 + 8) == 0 && *(longlong *)*pauVar13 == 0) {
        uVar21 = CONCAT22(auVar50._2_2_ >> 4,auVar50._0_2_ >> 4);
        auVar26._0_8_ = CONCAT26(auVar50._6_2_ >> 4,CONCAT24(auVar50._4_2_ >> 4,uVar21));
        auVar26._8_2_ = auVar50._8_2_ >> 4;
        auVar26._10_2_ = auVar50._10_2_ >> 4;
        auVar59._12_2_ = auVar50._12_2_ >> 4;
        auVar59._0_12_ = auVar26;
        auVar59._14_2_ = auVar50._14_2_ >> 4;
        auVar37._0_4_ = uVar21 & uVar4;
        auVar37._4_4_ = (uint)((ulonglong)auVar26._0_8_ >> 0x20) & uVar5;
        auVar37._8_4_ = auVar26._8_4_ & uVar6;
        auVar37._12_4_ = auVar59._12_4_ & uVar7;
        auVar49 = pmulld(auVar50,auVar51);
        auVar59 = pshufb(auVar8,auVar37);
        auVar50._0_4_ = auVar49._0_4_ + iVar9;
        auVar50._4_4_ = auVar49._4_4_ + iVar10;
        auVar50._8_4_ = auVar49._8_4_ + iVar11;
        auVar50._12_4_ = auVar49._12_4_ + iVar12;
      }
      auVar49 = pabsb(auVar37,auVar59);
      pauVar13 = pauVar13 + 1;
      auVar49 = pmaddubsw(auVar49,auVar49);
      auVar49 = pmaddwd(auVar49,auVar3);
      iVar42 = auVar49._4_4_ + auVar49._0_4_;
      iVar46 = auVar49._0_4_ + auVar49._4_4_;
      iVar47 = auVar49._12_4_ + auVar49._8_4_;
      iVar48 = auVar49._8_4_ + auVar49._12_4_;
      auVar38._0_4_ = iVar47 + iVar42;
      auVar38._4_4_ = iVar48 + iVar46;
      auVar38._8_4_ = iVar42 + iVar47;
      auVar38._12_4_ = iVar46 + iVar48;
      fVar41 = *pfVar20;
      pfVar20 = pfVar20 + 1;
      auVar49 = pmovsxbd(auVar38,auVar59);
      fVar41 = fVar41 / SQRT((float)auVar38._0_4_);
      auVar39._0_8_ = auVar59._0_8_ >> 0x20;
      auVar39._8_8_ = auVar59._8_8_ >> 0x20;
      auVar40 = pmovsxbd(auVar39,auVar39);
      pfVar17[-4] = (float)auVar49._0_4_ * fVar41;
      pfVar17[-3] = (float)auVar49._4_4_ * fVar41;
      pfVar17[-2] = (float)auVar49._8_4_ * fVar41;
      pfVar17[-1] = (float)auVar49._12_4_ * fVar41;
      auVar1._8_4_ = auVar59._0_4_;
      auVar1._0_8_ = auVar59._8_8_;
      auVar1._12_4_ = auVar59._4_4_;
      auVar49 = pmovsxbd(auVar40,auVar1);
      *pfVar17 = (float)auVar40._0_4_ * fVar41;
      pfVar17[1] = (float)auVar40._4_4_ * fVar41;
      pfVar17[2] = (float)auVar40._8_4_ * fVar41;
      pfVar17[3] = (float)auVar40._12_4_ * fVar41;
      auVar2._4_4_ = 0;
      auVar2._0_4_ = auVar59._12_4_;
      auVar2._8_4_ = auVar59._4_4_;
      auVar2._12_4_ = 0;
      auVar37 = pmovsxbd(auVar49,auVar2);
      pfVar17[4] = (float)auVar49._0_4_ * fVar41;
      pfVar17[5] = (float)auVar49._4_4_ * fVar41;
      pfVar17[6] = (float)auVar49._8_4_ * fVar41;
      pfVar17[7] = (float)auVar49._12_4_ * fVar41;
      pfVar17[8] = (float)auVar37._0_4_ * fVar41;
      pfVar17[9] = (float)auVar37._4_4_ * fVar41;
      pfVar17[10] = (float)auVar37._8_4_ * fVar41;
      pfVar17[0xb] = (float)auVar37._12_4_ * fVar41;
      pfVar17 = pfVar17 + 0x10;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  memset((void *)(param_1 + (longlong)iVar14 * 4),0,(longlong)((0x400 - iVar14) * 4));
  return;
}

// UERAradaudio_sse4_dequantize_short_block_sse4_ @ 14f8cd830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_sse4_dequantize_short_block_sse4_
               (float *param_1,undefined4 *param_2,float *param_3,int param_4,longlong param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  float *pfVar13;
  char *pcVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  uint uVar19;
  ulonglong uVar20;
  int *piVar21;
  undefined1 (*pauVar22) [16];
  undefined1 in_XMM0 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  int iVar29;
  int iVar34;
  int iVar35;
  undefined1 in_XMM1 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  int iVar36;
  undefined1 auVar37 [16];
  float fVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  
  fVar11 = _UNK_15352c51c;
  fVar10 = _UNK_15352c518;
  fVar41 = _UNK_15352c514;
  fVar9 = ___xmm_1e3ce5081e3ce5081e3ce5081e3ce508;
  auVar8 = ___xmm_00010001000100010001000100010001;
  auVar30 = pmovsxbd(in_XMM1,*param_2);
  fVar28 = param_3[1];
  fVar43 = param_3[2];
  fVar40 = param_3[3];
  uVar20 = 0xc;
  *param_1 = (float)auVar30._0_4_ * *param_3;
  param_1[1] = (float)auVar30._4_4_ * fVar28;
  param_1[2] = (float)auVar30._8_4_ * fVar43;
  param_1[3] = (float)auVar30._12_4_ * fVar40;
  uVar4 = *(ulonglong *)(param_2 + 1);
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar4;
  uVar16 = 8;
  auVar30 = pmovsxbw(in_XMM0,auVar37);
  auVar30 = pmaddwd(auVar30,auVar30);
  auVar32._0_4_ = (float)auVar30._0_4_ + fVar9;
  auVar32._4_4_ = (float)auVar30._4_4_ + fVar41;
  auVar32._8_4_ = (float)auVar30._8_4_ + fVar10;
  auVar32._12_4_ = (float)auVar30._12_4_ + fVar11;
  auVar30 = sqrtps(auVar32,auVar32);
  auVar38 = divps(*(undefined1 (*) [16])(param_3 + 4),auVar30);
  auVar30 = pmovsxbd(auVar30,auVar37);
  auVar39._4_4_ = (int)uVar4;
  auVar39._0_4_ = (int)(uVar4 >> 0x20);
  auVar39._8_8_ = 0;
  fVar28 = auVar38._0_4_;
  fVar43 = auVar38._4_4_;
  auVar31._4_4_ = fVar28;
  auVar31._0_4_ = fVar28;
  auVar31._8_4_ = fVar43;
  auVar31._12_4_ = fVar43;
  auVar32 = pmovsxbd(auVar31,auVar39);
  param_1[4] = (float)auVar30._0_4_ * fVar28;
  param_1[5] = (float)auVar30._4_4_ * fVar28;
  param_1[6] = (float)auVar30._8_4_ * fVar43;
  param_1[7] = (float)auVar30._12_4_ * fVar43;
  param_1[8] = (float)auVar32._0_4_ * auVar38._8_4_;
  param_1[9] = (float)auVar32._4_4_ * auVar38._8_4_;
  param_1[10] = (float)auVar32._8_4_ * auVar38._12_4_;
  param_1[0xb] = (float)auVar32._12_4_ * auVar38._12_4_;
  auVar30 = *(undefined1 (*) [16])(param_2 + 3);
  auVar32 = pabsb(auVar39,auVar30);
  auVar32 = pmaddubsw(auVar32,auVar32);
  auVar32 = pmaddwd(auVar32,auVar8);
  auVar38._0_4_ = (float)auVar32._0_4_ + fVar9;
  auVar38._4_4_ = (float)auVar32._4_4_ + fVar41;
  auVar38._8_4_ = (float)auVar32._8_4_ + fVar10;
  auVar38._12_4_ = (float)auVar32._12_4_ + fVar11;
  auVar32 = sqrtps(auVar38,auVar38);
  auVar39 = divps(*(undefined1 (*) [16])(param_3 + 8),auVar32);
  auVar32 = pmovsxbd(auVar32,auVar30);
  fVar28 = auVar39._0_4_;
  fVar43 = auVar39._4_4_;
  fVar40 = auVar39._8_4_;
  fVar41 = auVar39._12_4_;
  auVar33._4_4_ = fVar28;
  auVar33._0_4_ = fVar28;
  auVar33._8_4_ = fVar28;
  auVar33._12_4_ = fVar28;
  uVar42 = auVar30._0_4_;
  auVar23._0_12_ = auVar30._4_12_;
  auVar23._12_4_ = uVar42;
  auVar39 = pmovsxbd(auVar33,auVar23);
  param_1[0xc] = (float)auVar32._0_4_ * fVar28;
  param_1[0xd] = (float)auVar32._4_4_ * fVar28;
  param_1[0xe] = (float)auVar32._8_4_ * fVar28;
  param_1[0xf] = (float)auVar32._12_4_ * fVar28;
  auVar24._0_8_ = auVar30._8_8_;
  auVar24._8_4_ = uVar42;
  auVar24._12_4_ = auVar30._4_4_;
  auVar32 = pmovsxbd(auVar39,auVar24);
  param_1[0x10] = (float)auVar39._0_4_ * fVar43;
  param_1[0x11] = (float)auVar39._4_4_ * fVar43;
  param_1[0x12] = (float)auVar39._8_4_ * fVar43;
  param_1[0x13] = (float)auVar39._12_4_ * fVar43;
  auVar27._4_4_ = uVar42;
  auVar27._0_4_ = auVar30._12_4_;
  auVar27._8_4_ = auVar30._4_4_;
  auVar27._12_4_ = auVar30._8_4_;
  auVar30 = pmovsxbd(auVar32,auVar27);
  param_1[0x14] = (float)auVar32._0_4_ * fVar40;
  param_1[0x15] = (float)auVar32._4_4_ * fVar40;
  param_1[0x16] = (float)auVar32._8_4_ * fVar40;
  param_1[0x17] = (float)auVar32._12_4_ * fVar40;
  param_1[0x18] = (float)auVar30._0_4_ * fVar41;
  param_1[0x19] = (float)auVar30._4_4_ * fVar41;
  param_1[0x1a] = (float)auVar30._8_4_ * fVar41;
  param_1[0x1b] = (float)auVar30._12_4_ * fVar41;
  if (*(int *)(param_5 + 0x20) == 4) {
    fVar43 = (float)(int)*(char *)(param_2 + 7);
    fVar28 = fVar43 * fVar43 + 0.0 +
             (float)(int)*(char *)((longlong)param_2 + 0x1d) *
             (float)(int)*(char *)((longlong)param_2 + 0x1d) +
             (float)(int)*(char *)((longlong)param_2 + 0x1e) *
             (float)(int)*(char *)((longlong)param_2 + 0x1e) +
             (float)(int)*(char *)((longlong)param_2 + 0x1f) *
             (float)(int)*(char *)((longlong)param_2 + 0x1f);
    if (fVar28 < 0.0) {
      fVar28 = sqrtf(fVar28);
    }
    else {
      fVar28 = SQRT(fVar28);
    }
    uVar20 = 0x20;
    fVar28 = param_3[0xc] / fVar28;
    uVar16 = 0xd;
    param_1[0x1c] = fVar43 * fVar28;
    param_1[0x1d] = (float)(int)*(char *)((longlong)param_2 + 0x1d) * fVar28;
    param_1[0x1e] = (float)(int)*(char *)((longlong)param_2 + 0x1e) * fVar28;
    fVar28 = (float)(int)*(char *)((longlong)param_2 + 0x1f) * fVar28;
    auVar27 = ZEXT416((uint)fVar28);
    param_1[0x1f] = fVar28;
  }
  piVar21 = (int *)(uVar16 * 4 + param_5);
  if (*piVar21 == 0x10) {
    pauVar22 = (undefined1 (*) [16])(uVar20 + (longlong)param_2);
    pfVar13 = param_1 + uVar20 + 4;
    do {
      auVar30 = *pauVar22;
      iVar15 = (int)uVar16;
      piVar21 = piVar21 + 1;
      uVar20 = (ulonglong)((int)uVar20 + 0x10);
      pauVar22 = pauVar22 + 1;
      auVar32 = pabsb(auVar27,auVar30);
      uVar16 = (ulonglong)(iVar15 + 1);
      auVar32 = pmaddubsw(auVar32,auVar32);
      auVar32 = pmaddwd(auVar32,auVar8);
      iVar29 = auVar32._4_4_ + auVar32._0_4_;
      iVar34 = auVar32._0_4_ + auVar32._4_4_;
      iVar35 = auVar32._12_4_ + auVar32._8_4_;
      iVar36 = auVar32._8_4_ + auVar32._12_4_;
      auVar25._0_4_ = iVar35 + iVar29;
      auVar25._4_4_ = iVar36 + iVar34;
      auVar25._8_4_ = iVar29 + iVar35;
      auVar25._12_4_ = iVar34 + iVar36;
      auVar32 = pmovsxbd(auVar25,auVar30);
      fVar28 = param_3[iVar15] / SQRT((float)auVar25._0_4_ + fVar9);
      auVar26._0_8_ = auVar30._0_8_ >> 0x20;
      auVar26._8_8_ = auVar30._8_8_ >> 0x20;
      auVar39 = pmovsxbd(auVar26,auVar26);
      pfVar13[-4] = (float)auVar32._0_4_ * fVar28;
      pfVar13[-3] = (float)auVar32._4_4_ * fVar28;
      pfVar13[-2] = (float)auVar32._8_4_ * fVar28;
      pfVar13[-1] = (float)auVar32._12_4_ * fVar28;
      auVar6._8_4_ = auVar30._0_4_;
      auVar6._0_8_ = auVar30._8_8_;
      auVar6._12_4_ = auVar30._4_4_;
      auVar32 = pmovsxbd(auVar39,auVar6);
      *pfVar13 = (float)auVar39._0_4_ * fVar28;
      pfVar13[1] = (float)auVar39._4_4_ * fVar28;
      pfVar13[2] = (float)auVar39._8_4_ * fVar28;
      pfVar13[3] = (float)auVar39._12_4_ * fVar28;
      auVar7._4_4_ = 0;
      auVar7._0_4_ = auVar30._12_4_;
      auVar7._8_4_ = auVar30._4_4_;
      auVar7._12_4_ = 0;
      auVar27 = pmovsxbd(auVar32,auVar7);
      pfVar13[4] = (float)auVar32._0_4_ * fVar28;
      pfVar13[5] = (float)auVar32._4_4_ * fVar28;
      pfVar13[6] = (float)auVar32._8_4_ * fVar28;
      pfVar13[7] = (float)auVar32._12_4_ * fVar28;
      auVar30._0_4_ = (float)auVar27._0_4_ * fVar28;
      auVar30._4_4_ = (float)auVar27._4_4_ * fVar28;
      auVar30._8_4_ = (float)auVar27._8_4_ * fVar28;
      auVar30._12_4_ = (float)auVar27._12_4_ * fVar28;
      *(undefined1 (*) [16])(pfVar13 + 8) = auVar30;
      pfVar13 = pfVar13 + 0x10;
    } while (*piVar21 == 0x10);
  }
  fVar28 = __real_1e3ce508;
  uVar19 = (uint)uVar20;
  lVar12 = (longlong)(int)uVar16;
  if (lVar12 < param_4) {
    pfVar13 = param_3 + lVar12;
    lVar12 = param_4 - lVar12;
    do {
      iVar15 = *(int *)((longlong)pfVar13 + (param_5 - (longlong)param_3));
      iVar29 = (int)uVar20;
      if (0 < iVar15) {
        pcVar14 = (char *)((longlong)param_2 + (longlong)iVar29 + 2);
        lVar17 = ((longlong)iVar15 - 1U >> 2) + 1;
        fVar43 = fVar28;
        do {
          pcVar1 = pcVar14 + -2;
          pcVar2 = pcVar14 + -1;
          cVar5 = *pcVar14;
          pcVar3 = pcVar14 + 1;
          pcVar14 = pcVar14 + 4;
          fVar43 = fVar43 + (float)(int)*pcVar1 * (float)(int)*pcVar1 +
                   (float)(int)*pcVar2 * (float)(int)*pcVar2 + (float)(int)cVar5 * (float)(int)cVar5
                   + (float)(int)*pcVar3 * (float)(int)*pcVar3;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        if (fVar43 < 0.0) {
          fVar43 = sqrtf(fVar43);
        }
        else {
          fVar43 = SQRT(fVar43);
        }
        lVar17 = ((longlong)iVar15 - 1U >> 2) + 1;
        fVar43 = *pfVar13 / fVar43;
        pcVar14 = (char *)((longlong)param_2 + (longlong)iVar29 + 2);
        pfVar18 = param_1 + (longlong)iVar29 + 2;
        do {
          pfVar18[-2] = (float)(int)pcVar14[-2] * fVar43;
          pfVar18[-1] = (float)(int)pcVar14[-1] * fVar43;
          *pfVar18 = (float)(int)*pcVar14 * fVar43;
          pfVar18[1] = (float)(int)pcVar14[1] * fVar43;
          lVar17 = lVar17 + -1;
          pcVar14 = pcVar14 + 4;
          pfVar18 = pfVar18 + 4;
        } while (lVar17 != 0);
      }
      uVar19 = iVar29 + iVar15;
      uVar20 = (ulonglong)uVar19;
      pfVar13 = pfVar13 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  memset(param_1 + (int)uVar19,0,(longlong)(int)((0x80 - uVar19) * 4));
  return;
}

// UERAradaudio_sse4_randomize_long_block_8x8_Nx16_ @ 14f8cdce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_sse4_randomize_long_block_8x8_Nx16_
               (longlong *param_1,undefined1 (*param_2) [16],int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  undefined1 auVar20 [12];
  undefined1 auVar29 [16];
  undefined1 auVar21 [12];
  undefined1 auVar31 [16];
  undefined1 auVar22 [12];
  undefined1 auVar33 [16];
  undefined1 auVar23 [12];
  undefined1 auVar35 [16];
  undefined1 auVar24 [12];
  undefined1 auVar37 [16];
  undefined1 auVar25 [12];
  undefined1 auVar39 [16];
  undefined1 auVar26 [12];
  undefined1 auVar41 [16];
  undefined1 auVar27 [12];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar19 [12];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar40 [16];
  
  auVar14 = ___xmm_7ff8a3ed7ff8a3ed7ff8a3ed7ff8a3ed;
  iVar13 = _UNK_15352c52c;
  iVar12 = _UNK_15352c528;
  iVar11 = _UNK_15352c524;
  iVar10 = ___xmm_2aa01d312aa01d312aa01d312aa01d31;
  auVar9 = ___xmm_08f807f906fa05fb04fc03fd02fe01ff;
  auVar45 = ___xmm_00000001000000017ff8a3ed7ff8a3ed;
  iVar8 = _UNK_15352c4ec;
  iVar7 = _UNK_15352c4e8;
  iVar6 = _UNK_15352c4e4;
  iVar5 = ___xmm_00000000000000002aa01d312aa01d31;
  uVar4 = _UNK_15111455c;
  uVar3 = _UNK_151114558;
  uVar2 = _UNK_151114554;
  uVar1 = ___xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f;
  auVar44 = *param_2;
  if (*param_1 == 0) {
    uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
    auVar19._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
    auVar19._8_2_ = auVar44._8_2_ >> 4;
    auVar19._10_2_ = auVar44._10_2_ >> 4;
    auVar17._12_2_ = auVar44._12_2_ >> 4;
    auVar17._0_12_ = auVar19;
    auVar17._14_2_ = auVar44._14_2_ >> 4;
    auVar43._0_4_ = uVar18 & ___xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f;
    auVar43._4_4_ = (uint)((ulonglong)auVar19._0_8_ >> 0x20) & _UNK_151114554;
    auVar43._8_4_ = auVar19._8_4_ & _UNK_151114558;
    auVar43._12_4_ = auVar17._12_4_ & _UNK_15111455c;
    auVar17 = pshufb(___xmm_08f807f906fa05fb04fc03fd02fe01ff,auVar43);
    auVar43 = pmulld(auVar44,___xmm_00000001000000017ff8a3ed7ff8a3ed);
    *param_1 = auVar17._0_8_;
    auVar44._0_4_ = auVar43._0_4_ + iVar5;
    auVar44._4_4_ = auVar43._4_4_ + iVar6;
    auVar44._8_4_ = auVar43._8_4_ + iVar7;
    auVar44._12_4_ = auVar43._12_4_ + iVar8;
  }
  if (param_1[1] == 0) {
    uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
    auVar20._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
    auVar20._8_2_ = auVar44._8_2_ >> 4;
    auVar20._10_2_ = auVar44._10_2_ >> 4;
    auVar28._12_2_ = auVar44._12_2_ >> 4;
    auVar28._0_12_ = auVar20;
    auVar28._14_2_ = auVar44._14_2_ >> 4;
    auVar29._0_4_ = uVar18 & uVar1;
    auVar29._4_4_ = (uint)((ulonglong)auVar20._0_8_ >> 0x20) & uVar2;
    auVar29._8_4_ = auVar20._8_4_ & uVar3;
    auVar29._12_4_ = auVar28._12_4_ & uVar4;
    auVar17 = pshufb(auVar9,auVar29);
    auVar43 = pmulld(auVar44,auVar45);
    param_1[1] = auVar17._0_8_;
    auVar44._0_4_ = auVar43._0_4_ + iVar5;
    auVar44._4_4_ = auVar43._4_4_ + iVar6;
    auVar44._8_4_ = auVar43._8_4_ + iVar7;
    auVar44._12_4_ = auVar43._12_4_ + iVar8;
  }
  if (param_1[2] == 0) {
    uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
    auVar21._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
    auVar21._8_2_ = auVar44._8_2_ >> 4;
    auVar21._10_2_ = auVar44._10_2_ >> 4;
    auVar30._12_2_ = auVar44._12_2_ >> 4;
    auVar30._0_12_ = auVar21;
    auVar30._14_2_ = auVar44._14_2_ >> 4;
    auVar31._0_4_ = uVar18 & uVar1;
    auVar31._4_4_ = (uint)((ulonglong)auVar21._0_8_ >> 0x20) & uVar2;
    auVar31._8_4_ = auVar21._8_4_ & uVar3;
    auVar31._12_4_ = auVar30._12_4_ & uVar4;
    auVar17 = pshufb(auVar9,auVar31);
    auVar43 = pmulld(auVar44,auVar45);
    param_1[2] = auVar17._0_8_;
    auVar44._0_4_ = auVar43._0_4_ + iVar5;
    auVar44._4_4_ = auVar43._4_4_ + iVar6;
    auVar44._8_4_ = auVar43._8_4_ + iVar7;
    auVar44._12_4_ = auVar43._12_4_ + iVar8;
  }
  if (param_1[3] == 0) {
    uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
    auVar22._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
    auVar22._8_2_ = auVar44._8_2_ >> 4;
    auVar22._10_2_ = auVar44._10_2_ >> 4;
    auVar32._12_2_ = auVar44._12_2_ >> 4;
    auVar32._0_12_ = auVar22;
    auVar32._14_2_ = auVar44._14_2_ >> 4;
    auVar33._0_4_ = uVar18 & uVar1;
    auVar33._4_4_ = (uint)((ulonglong)auVar22._0_8_ >> 0x20) & uVar2;
    auVar33._8_4_ = auVar22._8_4_ & uVar3;
    auVar33._12_4_ = auVar32._12_4_ & uVar4;
    auVar17 = pshufb(auVar9,auVar33);
    auVar43 = pmulld(auVar44,auVar45);
    param_1[3] = auVar17._0_8_;
    auVar44._0_4_ = auVar43._0_4_ + iVar5;
    auVar44._4_4_ = auVar43._4_4_ + iVar6;
    auVar44._8_4_ = auVar43._8_4_ + iVar7;
    auVar44._12_4_ = auVar43._12_4_ + iVar8;
  }
  if (param_1[4] == 0) {
    uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
    auVar23._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
    auVar23._8_2_ = auVar44._8_2_ >> 4;
    auVar23._10_2_ = auVar44._10_2_ >> 4;
    auVar34._12_2_ = auVar44._12_2_ >> 4;
    auVar34._0_12_ = auVar23;
    auVar34._14_2_ = auVar44._14_2_ >> 4;
    auVar35._0_4_ = uVar18 & uVar1;
    auVar35._4_4_ = (uint)((ulonglong)auVar23._0_8_ >> 0x20) & uVar2;
    auVar35._8_4_ = auVar23._8_4_ & uVar3;
    auVar35._12_4_ = auVar34._12_4_ & uVar4;
    auVar17 = pshufb(auVar9,auVar35);
    auVar43 = pmulld(auVar44,auVar45);
    param_1[4] = auVar17._0_8_;
    auVar44._0_4_ = auVar43._0_4_ + iVar5;
    auVar44._4_4_ = auVar43._4_4_ + iVar6;
    auVar44._8_4_ = auVar43._8_4_ + iVar7;
    auVar44._12_4_ = auVar43._12_4_ + iVar8;
  }
  if (param_1[5] == 0) {
    uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
    auVar24._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
    auVar24._8_2_ = auVar44._8_2_ >> 4;
    auVar24._10_2_ = auVar44._10_2_ >> 4;
    auVar36._12_2_ = auVar44._12_2_ >> 4;
    auVar36._0_12_ = auVar24;
    auVar36._14_2_ = auVar44._14_2_ >> 4;
    auVar37._0_4_ = uVar18 & uVar1;
    auVar37._4_4_ = (uint)((ulonglong)auVar24._0_8_ >> 0x20) & uVar2;
    auVar37._8_4_ = auVar24._8_4_ & uVar3;
    auVar37._12_4_ = auVar36._12_4_ & uVar4;
    auVar17 = pshufb(auVar9,auVar37);
    auVar43 = pmulld(auVar44,auVar45);
    param_1[5] = auVar17._0_8_;
    auVar44._0_4_ = auVar43._0_4_ + iVar5;
    auVar44._4_4_ = auVar43._4_4_ + iVar6;
    auVar44._8_4_ = auVar43._8_4_ + iVar7;
    auVar44._12_4_ = auVar43._12_4_ + iVar8;
  }
  if (param_1[6] == 0) {
    uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
    auVar25._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
    auVar25._8_2_ = auVar44._8_2_ >> 4;
    auVar25._10_2_ = auVar44._10_2_ >> 4;
    auVar38._12_2_ = auVar44._12_2_ >> 4;
    auVar38._0_12_ = auVar25;
    auVar38._14_2_ = auVar44._14_2_ >> 4;
    auVar39._0_4_ = uVar18 & uVar1;
    auVar39._4_4_ = (uint)((ulonglong)auVar25._0_8_ >> 0x20) & uVar2;
    auVar39._8_4_ = auVar25._8_4_ & uVar3;
    auVar39._12_4_ = auVar38._12_4_ & uVar4;
    auVar17 = pshufb(auVar9,auVar39);
    auVar43 = pmulld(auVar44,auVar45);
    param_1[6] = auVar17._0_8_;
    auVar44._0_4_ = auVar43._0_4_ + iVar5;
    auVar44._4_4_ = auVar43._4_4_ + iVar6;
    auVar44._8_4_ = auVar43._8_4_ + iVar7;
    auVar44._12_4_ = auVar43._12_4_ + iVar8;
  }
  if (param_1[7] == 0) {
    uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
    auVar26._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
    auVar26._8_2_ = auVar44._8_2_ >> 4;
    auVar26._10_2_ = auVar44._10_2_ >> 4;
    auVar40._12_2_ = auVar44._12_2_ >> 4;
    auVar40._0_12_ = auVar26;
    auVar40._14_2_ = auVar44._14_2_ >> 4;
    auVar41._0_4_ = uVar18 & uVar1;
    auVar41._4_4_ = (uint)((ulonglong)auVar26._0_8_ >> 0x20) & uVar2;
    auVar41._8_4_ = auVar26._8_4_ & uVar3;
    auVar41._12_4_ = auVar40._12_4_ & uVar4;
    auVar17 = pshufb(auVar9,auVar41);
    auVar45 = pmulld(auVar44,auVar45);
    param_1[7] = auVar17._0_8_;
    auVar44._0_4_ = auVar45._0_4_ + iVar5;
    auVar44._4_4_ = auVar45._4_4_ + iVar6;
    auVar44._8_4_ = auVar45._8_4_ + iVar7;
    auVar44._12_4_ = auVar45._12_4_ + iVar8;
  }
  if (8 < param_3) {
    pauVar15 = (undefined1 (*) [16])(param_1 + 8);
    uVar16 = (ulonglong)(param_3 - 8);
    do {
      if (*(longlong *)((longlong)*pauVar15 + 8) == 0 && *(longlong *)*pauVar15 == 0) {
        uVar18 = CONCAT22(auVar44._2_2_ >> 4,auVar44._0_2_ >> 4);
        auVar27._0_8_ = CONCAT26(auVar44._6_2_ >> 4,CONCAT24(auVar44._4_2_ >> 4,uVar18));
        auVar27._8_2_ = auVar44._8_2_ >> 4;
        auVar27._10_2_ = auVar44._10_2_ >> 4;
        auVar45._12_2_ = auVar44._12_2_ >> 4;
        auVar45._0_12_ = auVar27;
        auVar45._14_2_ = auVar44._14_2_ >> 4;
        auVar42._0_4_ = uVar18 & uVar1;
        auVar42._4_4_ = (uint)((ulonglong)auVar27._0_8_ >> 0x20) & uVar2;
        auVar42._8_4_ = auVar27._8_4_ & uVar3;
        auVar42._12_4_ = auVar45._12_4_ & uVar4;
        auVar45 = pshufb(auVar9,auVar42);
        auVar17 = pmulld(auVar44,auVar14);
        *pauVar15 = auVar45;
        auVar44._0_4_ = auVar17._0_4_ + iVar10;
        auVar44._4_4_ = auVar17._4_4_ + iVar11;
        auVar44._8_4_ = auVar17._8_4_ + iVar12;
        auVar44._12_4_ = auVar17._12_4_ + iVar13;
      }
      pauVar15 = pauVar15 + 1;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  return;
}

// UERAradaudio_ssse3_distribute_bitflag_coefficients_multiple16_ @ 14f8cdee0

void UERAradaudio_ssse3_distribute_bitflag_coefficients_multiple16_
               (undefined8 param_1,undefined8 *param_2,int param_3,byte *param_4,longlong param_5,
               int *param_6)

{
  byte bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  iVar4 = *param_6;
  lVar5 = (longlong)iVar4;
  if (0 < param_3) {
    puVar2 = (ulonglong *)(lVar5 + param_5);
    uVar3 = (ulonglong)((param_3 - 1U >> 3) + 1);
    do {
      bVar1 = *param_4;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = *puVar2;
      param_4 = param_4 + 1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = *(ulonglong *)(&DAT_15352bce0 + (ulonglong)bVar1 * 8);
      auVar6 = pshufb(auVar7,auVar6);
      lVar5 = lVar5 + (ulonglong)(byte)(&DAT_15352bbe0)[bVar1];
      iVar4 = (int)lVar5;
      puVar2 = (ulonglong *)((longlong)puVar2 + (ulonglong)(byte)(&DAT_15352bbe0)[bVar1]);
      *param_2 = auVar6._0_8_;
      uVar3 = uVar3 - 1;
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  *param_6 = iVar4;
  return;
}

