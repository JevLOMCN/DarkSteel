// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// ApplyLongRangeConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_CunfCunfCuniCuni_avx @ 1402ed1d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_CunfCunfCuniCuni_avx
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,uint param_5
               ,uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  char cVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [32];
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar36;
  undefined1 auVar32 [16];
  int iVar34;
  int iVar35;
  undefined1 auVar33 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  uint uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar53 [32];
  undefined1 auVar52 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 in_ZMM2 [64];
  int iVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  float fVar82;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar83 [32];
  undefined1 auVar87 [16];
  undefined1 auVar88 [32];
  undefined1 auVar89 [16];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [16];
  undefined1 auVar98 [32];
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  int local_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auVar42 [32];
  undefined1 auVar76 [32];
  undefined1 auVar97 [32];
  
  uVar15 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar15 = param_5;
  }
  auVar51 = in_ZMM2._0_16_;
  auVar57 = in_ZMM3._0_16_;
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    uVar25 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar52 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    auVar87 = vshufps_avx(auVar57,auVar57,0);
    auVar14 = vshufps_avx(auVar51,auVar51,0);
    pauVar26 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar25 = 0;
    do {
      auVar76 = pauVar26[-2];
      auVar39._16_16_ = *(undefined1 (*) [16])pauVar26[-2];
      auVar39._0_16_ = *(undefined1 (*) [16])(pauVar26[-2] + 0x10);
      uVar1 = *(undefined4 *)(pauVar26[-1] + 4);
      auVar74._4_4_ = uVar1;
      auVar74._0_4_ = uVar1;
      auVar74._8_4_ = uVar1;
      auVar74._12_4_ = uVar1;
      auVar39 = vblendps_avx(auVar76,auVar39,0x24);
      uVar1 = *(undefined4 *)(pauVar26[-1] + 8);
      auVar74._20_4_ = uVar1;
      auVar74._16_4_ = uVar1;
      auVar74._24_4_ = uVar1;
      auVar74._28_4_ = uVar1;
      auVar65._16_16_ = *(undefined1 (*) [16])*pauVar26;
      auVar65._0_16_ = *(undefined1 (*) [16])(*pauVar26 + 0x10);
      auVar40 = vpermilps_avx(auVar39,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar39 = vblendps_avx(auVar65,*pauVar26,0x44);
      auVar42 = vpermilps_avx(auVar39,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar37 = vshufps_avx(*(undefined1 (*) [16])(pauVar26[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar26[-1] + 0x10),0xec);
      auVar39 = vblendps_avx(auVar40,auVar74,0x88);
      uVar1 = *(undefined4 *)(pauVar26[-1] + 0x14);
      auVar40._20_4_ = uVar1;
      auVar40._16_4_ = uVar1;
      auVar40._24_4_ = uVar1;
      auVar40._28_4_ = uVar1;
      auVar40._0_16_ = auVar37;
      auVar40 = vblendps_avx(auVar42,auVar40,0x13);
      auVar65 = vshufps_avx(auVar65,*pauVar26,0xc4);
      local_260 = auVar52._0_4_;
      iStack_25c = auVar52._4_4_;
      iStack_258 = auVar52._8_4_;
      iStack_254 = auVar52._12_4_;
      auVar37._0_4_ = auVar39._0_4_ + local_260;
      auVar37._4_4_ = auVar39._4_4_ + iStack_25c;
      auVar37._8_4_ = auVar39._8_4_ + iStack_258;
      auVar37._12_4_ = auVar39._12_4_ + iStack_254;
      auVar64._0_4_ = auVar40._0_4_ + local_260;
      auVar64._4_4_ = auVar40._4_4_ + iStack_25c;
      auVar64._8_4_ = auVar40._8_4_ + iStack_258;
      auVar64._12_4_ = auVar40._12_4_ + iStack_254;
      auVar10._0_4_ = auVar39._16_4_ + local_260;
      auVar10._4_4_ = auVar39._20_4_ + iStack_25c;
      auVar10._8_4_ = auVar39._24_4_ + iStack_258;
      auVar10._12_4_ = auVar39._28_4_ + iStack_254;
      auVar11._0_4_ = auVar40._16_4_ + local_260;
      auVar11._4_4_ = auVar40._20_4_ + iStack_25c;
      auVar11._8_4_ = auVar40._24_4_ + iStack_258;
      auVar11._12_4_ = auVar40._28_4_ + iStack_254;
      auVar64 = vpslld_avx(auVar64,4);
      auVar37 = vpslld_avx(auVar37,4);
      lVar21 = (longlong)auVar37._0_4_;
      lVar22 = (longlong)auVar37._4_4_;
      lVar28 = (longlong)auVar37._8_4_;
      lVar18 = (longlong)auVar37._12_4_;
      lVar23 = (longlong)auVar64._0_4_;
      lVar27 = (longlong)auVar64._4_4_;
      lVar30 = (longlong)auVar64._8_4_;
      lVar20 = (longlong)auVar64._12_4_;
      auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar23)),
                              ZEXT416(*(uint *)(param_1 + lVar27)),0x10);
      auVar64 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar21)),
                              ZEXT416(*(uint *)(param_1 + lVar22)),0x10);
      auVar38 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar23)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x10);
      auVar32 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x10);
      auVar72 = vpslld_avx(auVar11,4);
      auVar58 = vpslld_avx(auVar10,4);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar23)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x10);
      lVar27 = (longlong)auVar58._0_4_;
      auVar11 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x10);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + lVar30)),0x20);
      auVar64 = vinsertps_avx(auVar64,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      lVar22 = (longlong)auVar58._4_4_;
      lVar23 = (longlong)auVar58._8_4_;
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x20);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      lVar21 = (longlong)auVar58._12_4_;
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x20);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      lVar29 = (longlong)auVar72._0_4_;
      lVar31 = (longlong)auVar72._4_4_;
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + lVar20)),0x30);
      auVar64 = vinsertps_avx(auVar64,ZEXT416(*(uint *)(param_1 + lVar18)),0x30);
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + 4 + lVar20)),0x30);
      lVar28 = (longlong)auVar72._8_4_;
      lVar30 = (longlong)auVar72._12_4_;
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 4 + lVar18)),0x30);
      auVar66._16_16_ = auVar37;
      auVar66._0_16_ = auVar64;
      auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar29)),
                              ZEXT416(*(uint *)(param_1 + lVar31)),0x10);
      auVar79._16_16_ = auVar38;
      auVar79._0_16_ = auVar32;
      auVar64 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 8 + lVar20)),0x30);
      auVar38 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + lVar22)),0x10);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      auVar32 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar29)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x10);
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + lVar23)),0x20);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + lVar30)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x10);
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + lVar21)),0x30);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x20);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x30);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x30);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_1 + 8 + lVar18)),0x30);
      auVar58 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar29)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x10);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      auVar72 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x10);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x30);
      auVar42 = vblendps_avx(pauVar26[-1],auVar76,0x24);
      auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x20);
      auVar90._16_16_ = auVar37;
      auVar90._0_16_ = auVar38;
      auVar75._16_16_ = auVar32;
      auVar75._0_16_ = auVar10;
      auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x30);
      auVar41._16_16_ = auVar64;
      auVar41._0_16_ = auVar11;
      auVar59._16_16_ = auVar58;
      auVar59._0_16_ = auVar72;
      auVar76 = vsubps_avx(auVar66,auVar90);
      auVar66 = vsubps_avx(auVar79,auVar75);
      auVar42 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(pauVar26[-2] + 0x10)),auVar42,0x21);
      auVar41 = vsubps_avx(auVar41,auVar59);
      auVar42 = vshufps_avx(auVar42,pauVar26[-1],0xc2);
      auVar80._0_4_ =
           auVar41._0_4_ * auVar41._0_4_ +
           auVar66._0_4_ * auVar66._0_4_ + auVar76._0_4_ * auVar76._0_4_;
      auVar80._4_4_ =
           auVar41._4_4_ * auVar41._4_4_ +
           auVar66._4_4_ * auVar66._4_4_ + auVar76._4_4_ * auVar76._4_4_;
      auVar80._8_4_ =
           auVar41._8_4_ * auVar41._8_4_ +
           auVar66._8_4_ * auVar66._8_4_ + auVar76._8_4_ * auVar76._8_4_;
      auVar80._12_4_ =
           auVar41._12_4_ * auVar41._12_4_ +
           auVar66._12_4_ * auVar66._12_4_ + auVar76._12_4_ * auVar76._12_4_;
      auVar80._16_4_ =
           auVar41._16_4_ * auVar41._16_4_ +
           auVar66._16_4_ * auVar66._16_4_ + auVar76._16_4_ * auVar76._16_4_;
      auVar80._20_4_ =
           auVar41._20_4_ * auVar41._20_4_ +
           auVar66._20_4_ * auVar66._20_4_ + auVar76._20_4_ * auVar76._20_4_;
      auVar80._24_4_ =
           auVar41._24_4_ * auVar41._24_4_ +
           auVar66._24_4_ * auVar66._24_4_ + auVar76._24_4_ * auVar76._24_4_;
      auVar80._28_4_ =
           auVar41._28_4_ * auVar41._28_4_ +
           auVar66._28_4_ * auVar66._28_4_ + auVar76._28_4_ * auVar76._28_4_;
      auVar42 = vblendps_avx(auVar42,auVar65,0xe0);
      auVar65 = vsqrtps_avx(auVar80);
      uVar1 = *(undefined4 *)(param_1 + 0xc + lVar27);
      auVar76 = vdivps_avx(auVar76,auVar65);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar22);
      uVar8 = *(undefined4 *)(param_1 + 0xc + lVar23);
      auVar66 = vdivps_avx(auVar66,auVar65);
      auVar41 = vdivps_avx(auVar41,auVar65);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar21);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar29);
      local_280 = auVar87._0_4_;
      fStack_27c = auVar87._4_4_;
      fStack_278 = auVar87._8_4_;
      fStack_274 = auVar87._12_4_;
      auVar93._0_4_ = auVar42._0_4_ * local_280;
      auVar93._4_4_ = auVar42._4_4_ * fStack_27c;
      auVar93._8_4_ = auVar42._8_4_ * fStack_278;
      auVar93._12_4_ = auVar42._12_4_ * fStack_274;
      auVar93._16_4_ = auVar42._16_4_ * local_280;
      auVar93._20_4_ = auVar42._20_4_ * fStack_27c;
      auVar93._24_4_ = auVar42._24_4_ * fStack_278;
      auVar93._28_4_ = auVar42._28_4_ * fStack_274;
      auVar59 = vsubps_avx(auVar65,auVar93);
      auVar65 = vcmpps_avx(auVar65,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar42 = vblendvps_avx(auVar76,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar65);
      local_2a0 = auVar14._0_4_;
      fStack_29c = auVar14._4_4_;
      fStack_298 = auVar14._8_4_;
      fStack_294 = auVar14._12_4_;
      fVar82 = auVar59._0_4_ * local_2a0;
      fVar84 = auVar59._4_4_ * fStack_29c;
      fVar85 = auVar59._8_4_ * fStack_298;
      fVar86 = auVar59._12_4_ * fStack_294;
      local_2a0 = auVar59._16_4_ * local_2a0;
      fStack_29c = auVar59._20_4_ * fStack_29c;
      fStack_298 = auVar59._24_4_ * fStack_298;
      fStack_294 = auVar59._28_4_ * fStack_294;
      auVar76 = vcmpps_avx(auVar59,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar24 = auVar76._0_4_;
      uVar44 = auVar76._4_4_;
      uVar45 = auVar76._8_4_;
      uVar46 = auVar76._12_4_;
      uVar47 = auVar76._16_4_;
      uVar48 = auVar76._20_4_;
      uVar49 = auVar76._24_4_;
      uVar50 = auVar76._28_4_;
      auVar96._0_4_ = auVar38._0_4_ + (float)(~uVar24 & (uint)(fVar82 * auVar42._0_4_));
      auVar96._4_4_ = auVar38._4_4_ + (float)(~uVar44 & (uint)(fVar84 * auVar42._4_4_));
      auVar96._8_4_ = auVar38._8_4_ + (float)(~uVar45 & (uint)(fVar85 * auVar42._8_4_));
      auVar96._12_4_ = auVar38._12_4_ + (float)(~uVar46 & (uint)(fVar86 * auVar42._12_4_));
      auVar97._16_4_ = auVar37._0_4_ + (float)(~uVar47 & (uint)(local_2a0 * auVar42._16_4_));
      auVar97._0_16_ = auVar96;
      auVar97._20_4_ = auVar37._4_4_ + (float)(~uVar48 & (uint)(fStack_29c * auVar42._20_4_));
      auVar97._24_4_ = auVar37._8_4_ + (float)(~uVar49 & (uint)(fStack_298 * auVar42._24_4_));
      auVar97._28_4_ = auVar37._12_4_ + (float)(~uVar50 & (uint)(fStack_294 * auVar42._28_4_));
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar31);
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar28);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar30);
      *(float *)(param_1 + lVar27) = auVar96._0_4_;
      uVar9 = vextractps_avx(auVar96,1);
      *(undefined4 *)(param_1 + lVar22) = uVar9;
      uVar9 = vextractps_avx(auVar96,2);
      *(undefined4 *)(param_1 + lVar23) = uVar9;
      uVar9 = vextractps_avx(auVar96,3);
      *(undefined4 *)(param_1 + lVar21) = uVar9;
      auVar37 = auVar97._16_16_;
      *(float *)(param_1 + lVar29) = auVar97._16_4_;
      uVar9 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + lVar31) = uVar9;
      uVar9 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + lVar28) = uVar9;
      auVar73._0_4_ =
           (float)(~uVar24 & (uint)((float)(~auVar65._0_4_ & auVar66._0_4_) * fVar82)) +
           auVar10._0_4_;
      auVar73._4_4_ =
           (float)(~uVar44 & (uint)((float)(~auVar65._4_4_ & auVar66._4_4_) * fVar84)) +
           auVar10._4_4_;
      auVar73._8_4_ =
           (float)(~uVar45 & (uint)((float)(~auVar65._8_4_ & auVar66._8_4_) * fVar85)) +
           auVar10._8_4_;
      auVar73._12_4_ =
           (float)(~uVar46 & (uint)((float)(~auVar65._12_4_ & auVar66._12_4_) * fVar86)) +
           auVar10._12_4_;
      auVar76._16_4_ =
           (float)(~uVar47 & (uint)((float)(~auVar65._16_4_ & auVar66._16_4_) * local_2a0)) +
           auVar32._0_4_;
      auVar76._0_16_ = auVar73;
      auVar76._20_4_ =
           (float)(~uVar48 & (uint)((float)(~auVar65._20_4_ & auVar66._20_4_) * fStack_29c)) +
           auVar32._4_4_;
      auVar76._24_4_ =
           (float)(~uVar49 & (uint)((float)(~auVar65._24_4_ & auVar66._24_4_) * fStack_298)) +
           auVar32._8_4_;
      auVar76._28_4_ =
           (float)(~uVar50 & (uint)((float)(~auVar65._28_4_ & auVar66._28_4_) * fStack_294)) +
           auVar32._12_4_;
      uVar9 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + lVar30) = uVar9;
      *(float *)(param_1 + 4 + lVar27) = auVar73._0_4_;
      uVar9 = vextractps_avx(auVar73,1);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar9;
      uVar9 = vextractps_avx(auVar73,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar9;
      uVar9 = vextractps_avx(auVar73,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar9;
      auVar37 = auVar76._16_16_;
      *(float *)(param_1 + 4 + lVar29) = auVar76._16_4_;
      uVar9 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar9;
      uVar9 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar9;
      auVar38._0_4_ =
           auVar72._0_4_ +
           (float)(~uVar24 & (uint)(fVar82 * (float)(~auVar65._0_4_ & auVar41._0_4_)));
      auVar38._4_4_ =
           auVar72._4_4_ +
           (float)(~uVar44 & (uint)(fVar84 * (float)(~auVar65._4_4_ & auVar41._4_4_)));
      auVar38._8_4_ =
           auVar72._8_4_ +
           (float)(~uVar45 & (uint)(fVar85 * (float)(~auVar65._8_4_ & auVar41._8_4_)));
      auVar38._12_4_ =
           auVar72._12_4_ +
           (float)(~uVar46 & (uint)(fVar86 * (float)(~auVar65._12_4_ & auVar41._12_4_)));
      auVar42._16_4_ =
           auVar58._0_4_ +
           (float)(~uVar47 & (uint)(local_2a0 * (float)(~auVar65._16_4_ & auVar41._16_4_)));
      auVar42._0_16_ = auVar38;
      auVar42._20_4_ =
           auVar58._4_4_ +
           (float)(~uVar48 & (uint)(fStack_29c * (float)(~auVar65._20_4_ & auVar41._20_4_)));
      auVar42._24_4_ =
           auVar58._8_4_ +
           (float)(~uVar49 & (uint)(fStack_298 * (float)(~auVar65._24_4_ & auVar41._24_4_)));
      auVar42._28_4_ =
           auVar58._12_4_ +
           (float)(~uVar50 & (uint)(fStack_294 * (float)(~auVar65._28_4_ & auVar41._28_4_)));
      uVar9 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar9;
      *(float *)(param_1 + 8 + lVar27) = auVar38._0_4_;
      uVar9 = vextractps_avx(auVar38,1);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar9;
      uVar9 = vextractps_avx(auVar38,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar9;
      uVar9 = vextractps_avx(auVar38,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar9;
      auVar37 = auVar42._16_16_;
      *(float *)(param_1 + 8 + lVar29) = auVar42._16_4_;
      uVar9 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar9;
      uVar9 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar9;
      uVar9 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar9;
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar1;
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar8;
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar7;
      pauVar26 = pauVar26 + 3;
      uVar24 = (int)uVar25 + 8;
      uVar25 = (ulonglong)uVar24;
    } while ((int)uVar24 < (int)(uVar15 & 0xfffffff8));
    vperm2f128_avx(auVar39,auVar40,0x31);
    if ((int)param_5 <= (int)uVar24) {
      return;
    }
  }
  auVar52 = vpshufd_avx(ZEXT416((uint)uVar25),0);
  auVar33._16_16_ = auVar52;
  auVar33._0_16_ = auVar52;
  auVar14 = vpshufd_avx(ZEXT416(param_5),0);
  pauVar26 = (undefined1 (*) [32])(param_2 + uVar25 * 0xc);
  auVar37 = SUB3216(auVar33 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar64 = SUB3216(auVar33 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar52 = vpcmpgtd_avx(auVar14,auVar64);
  auVar87 = vpcmpgtd_avx(auVar14,auVar37);
  auVar53._16_16_ = auVar52;
  auVar53._0_16_ = auVar87;
  uVar15 = vmovmskps_avx(auVar53);
  if (uVar15 == 0xff) {
    auVar65 = pauVar26[2];
    auVar61._16_16_ = *(undefined1 (*) [16])*pauVar26;
    auVar61._0_16_ = *(undefined1 (*) [16])(*pauVar26 + 0x10);
    auVar39 = vblendps_avx(*pauVar26,auVar61,0x24);
    auVar40 = vpermilps_avx(auVar39,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar1 = *(undefined4 *)(pauVar26[1] + 4);
    auVar94._4_4_ = uVar1;
    auVar94._0_4_ = uVar1;
    auVar94._8_4_ = uVar1;
    auVar94._12_4_ = uVar1;
    uVar1 = *(undefined4 *)(pauVar26[1] + 8);
    auVar94._20_4_ = uVar1;
    auVar94._16_4_ = uVar1;
    auVar94._24_4_ = uVar1;
    auVar94._28_4_ = uVar1;
    auVar91._16_16_ = *(undefined1 (*) [16])pauVar26[2];
    auVar91._0_16_ = *(undefined1 (*) [16])(pauVar26[2] + 0x10);
    auVar39 = vblendps_avx(auVar91,auVar65,0x44);
    auVar42 = vpermilps_avx(auVar39,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar39 = vblendps_avx(auVar40,auVar94,0x88);
    auVar52 = vshufps_avx(*(undefined1 (*) [16])(pauVar26[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar26[1] + 0x10),0xec);
    uVar1 = *(undefined4 *)(pauVar26[1] + 0x14);
    auVar62._20_4_ = uVar1;
    auVar62._16_4_ = uVar1;
    auVar62._24_4_ = uVar1;
    auVar62._28_4_ = uVar1;
    auVar62._0_16_ = auVar52;
    auVar40 = vblendps_avx(auVar42,auVar62,0x13);
    auVar60._16_16_ = auVar40._0_16_;
    auVar60._0_16_ = auVar39._0_16_;
    auVar42 = vperm2f128_avx(auVar39,auVar40,0x31);
    auVar39 = vblendps_avx(pauVar26[1],*pauVar26,0x24);
    auVar39 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar26 + 0x10)),auVar39,0x21);
    auVar39 = vshufps_avx(auVar39,pauVar26[1],0xc2);
    auVar40 = vshufps_avx(auVar91,auVar65,0xc4);
    auVar39 = vblendps_avx(auVar39,auVar40,0xe0);
  }
  else {
    auVar52 = vpcmpgtd_avx(auVar14,auVar64);
    auVar87 = vpcmpgtd_avx(auVar14,auVar37);
    uVar24 = auVar87._0_4_;
    auVar32._0_4_ = uVar24 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar44 = auVar87._4_4_;
    auVar32._4_4_ = uVar44 & _UNK_150b50b04;
    uVar45 = auVar87._8_4_;
    auVar32._8_4_ = uVar45 & _UNK_150b50b08;
    uVar46 = auVar87._12_4_;
    auVar32._12_4_ = uVar46 & _UNK_150b50b0c;
    uVar47 = auVar52._0_4_;
    vextractps_avx(auVar32,1);
    vextractps_avx(auVar32,2);
    vextractps_avx(auVar32,3);
    auVar52._0_4_ = uVar24 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar52._4_4_ = uVar44 & _UNK_150b50b24;
    auVar52._8_4_ = uVar45 & _UNK_150b50b28;
    auVar52._12_4_ = uVar46 & _UNK_150b50b2c;
    vextractps_avx(auVar52,1);
    vextractps_avx(auVar52,2);
    vextractps_avx(auVar52,3);
    auVar87._0_4_ = uVar24 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar87._4_4_ = uVar44 & _UNK_150b50b44;
    auVar87._8_4_ = uVar45 & _UNK_150b50b48;
    auVar87._12_4_ = uVar46 & _UNK_150b50b4c;
    vextractps_avx(auVar87,1);
    vextractps_avx(auVar87,2);
    auVar60 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar26 + (uVar47 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar26)));
    vextractps_avx(auVar87,3);
    auVar42 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar26 + (uVar47 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar26 + auVar52._0_4_))));
    auVar39 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar26 + (uVar47 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar26 + auVar87._0_4_))));
  }
  auVar64 = vpcmpgtd_avx(auVar14,auVar64);
  auVar38 = vpcmpgtd_avx(auVar14,auVar37);
  auVar43._16_16_ = auVar64;
  auVar43._0_16_ = auVar38;
  auVar40 = vmaskmovps_avx(auVar43,auVar60);
  auVar42 = vmaskmovps_avx(auVar43,auVar42);
  auVar39 = vmaskmovps_avx(auVar43,auVar39);
  auVar52 = vpshufd_avx(ZEXT416(param_6),0);
  iStack_210 = auVar40._16_4_;
  iVar17 = auVar52._0_4_;
  auVar14._0_4_ = iVar17 + iStack_210;
  iStack_20c = auVar40._20_4_;
  iVar34 = auVar52._4_4_;
  auVar14._4_4_ = iVar34 + iStack_20c;
  iStack_208 = auVar40._24_4_;
  iVar35 = auVar52._8_4_;
  auVar14._8_4_ = iVar35 + iStack_208;
  iStack_204 = auVar40._28_4_;
  iVar36 = auVar52._12_4_;
  auVar14._12_4_ = iVar36 + iStack_204;
  iStack_1f0 = auVar42._16_4_;
  auVar58._0_4_ = iVar17 + iStack_1f0;
  iStack_1ec = auVar42._20_4_;
  auVar58._4_4_ = iVar34 + iStack_1ec;
  iStack_1e8 = auVar42._24_4_;
  auVar58._8_4_ = iVar35 + iStack_1e8;
  iStack_1e4 = auVar42._28_4_;
  auVar58._12_4_ = iVar36 + iStack_1e4;
  auVar52 = vpslld_avx(auVar14,4);
  auVar73 = vpand_avx(auVar64,auVar52);
  lVar18 = param_1 + auVar73._0_4_;
  uVar24 = auVar38._0_4_;
  uVar44 = auVar38._4_4_;
  uVar45 = auVar38._8_4_;
  uVar46 = auVar38._12_4_;
  uVar47 = auVar64._0_4_;
  uVar48 = auVar64._4_4_;
  uVar49 = auVar64._8_4_;
  uVar50 = auVar64._12_4_;
  lVar20 = param_1 + auVar73._4_4_;
  auVar52 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d50) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d54) + lVar20)),0x10);
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d70) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d74) + lVar20)),0x10);
  auVar67 = vpslld_avx(auVar58,4);
  auVar96 = vpand_avx(auVar64,auVar67);
  lVar18 = param_1 + auVar96._0_4_;
  lVar20 = param_1 + auVar96._4_4_;
  auVar14 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d50) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d54) + lVar20)),0x10);
  auVar37 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d70) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d74) + lVar20)),0x10);
  auVar64 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d90) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d94) + lVar20)),0x10);
  local_220 = auVar40._0_4_;
  auVar72._0_4_ = iVar17 + local_220;
  iStack_21c = auVar40._4_4_;
  auVar72._4_4_ = iVar34 + iStack_21c;
  iStack_218 = auVar40._8_4_;
  auVar72._8_4_ = iVar35 + iStack_218;
  iStack_214 = auVar40._12_4_;
  auVar72._12_4_ = iVar36 + iStack_214;
  local_200 = auVar42._0_4_;
  auVar13._0_4_ = iVar17 + local_200;
  iStack_1fc = auVar42._4_4_;
  auVar13._4_4_ = iVar34 + iStack_1fc;
  iStack_1f8 = auVar42._8_4_;
  auVar13._8_4_ = iVar35 + iStack_1f8;
  iStack_1f4 = auVar42._12_4_;
  auVar13._12_4_ = iVar36 + iStack_1f4;
  auVar32 = vpslld_avx(auVar72,4);
  auVar12 = vpand_avx(auVar38,auVar32);
  lVar18 = param_1 + auVar73._8_4_;
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d58) + lVar18)),
                          0x20);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d78) + lVar18)),
                          0x20);
  lVar18 = param_1 + auVar73._12_4_;
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d5c) + lVar18)),
                          0x30);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d7c) + lVar18)),
                          0x30);
  lVar18 = param_1 + auVar96._8_4_;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d58) + lVar18)),
                          0x20);
  lVar20 = param_1 + auVar96._12_4_;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d5c) + lVar20)),
                          0x30);
  auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d78) + lVar18)),
                          0x20);
  auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d7c) + lVar20)),
                          0x30);
  auVar64 = vinsertps_avx(auVar64,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d98) + lVar18)),
                          0x20);
  auVar64 = vinsertps_avx(auVar64,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d9c) + lVar20)),
                          0x30);
  lVar18 = param_1 + auVar12._0_4_;
  auVar89 = vpslld_avx(auVar13,4);
  auVar13 = vpand_avx(auVar89,auVar38);
  lVar20 = param_1 + auVar13._0_4_;
  lVar21 = param_1 + auVar12._4_4_;
  auVar38 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d44) + lVar21)),0x10);
  auVar32 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d64) + lVar21)),0x10);
  lVar18 = param_1 + auVar13._4_4_;
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d44) + lVar18)),0x10);
  auVar11 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d64) + lVar18)),0x10);
  auVar58 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                            ) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d84) + lVar18)),0x10);
  lVar18 = param_1 + auVar12._8_4_;
  auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d48) + lVar18)),
                          0x20);
  auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d68) + lVar18)),
                          0x20);
  lVar18 = param_1 + auVar13._8_4_;
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d48) + lVar18)),
                          0x20);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d68) + lVar18)),
                          0x20);
  auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d88) + lVar18)),
                          0x20);
  lVar18 = param_1 + auVar12._12_4_;
  auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d4c) + lVar18)),
                          0x30);
  auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d6c) + lVar18)),
                          0x30);
  lVar18 = param_1 + auVar13._12_4_;
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d4c) + lVar18)),
                          0x30);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d6c) + lVar18)),
                          0x30);
  auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d8c) + lVar18)),
                          0x30);
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar73._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar73._4_4_)),0x10);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + auVar73._8_4_)),0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + auVar73._12_4_)),0x30);
  auVar73 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar12._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar12._4_4_)),0x10);
  auVar73 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_1 + auVar12._8_4_)),0x20);
  auVar73 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_1 + auVar12._12_4_)),0x30);
  auVar81._16_16_ = auVar72;
  auVar81._0_16_ = auVar73;
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar96._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar96._4_4_)),0x10);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + auVar96._8_4_)),0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + auVar96._12_4_)),0x30);
  auVar83._16_16_ = auVar52;
  auVar83._0_16_ = auVar38;
  auVar52 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar13._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar13._4_4_)),0x10);
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + auVar13._8_4_)),0x20);
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + auVar13._12_4_)),0x30);
  auVar63._16_16_ = auVar87;
  auVar63._0_16_ = auVar32;
  auVar95._16_16_ = auVar72;
  auVar95._0_16_ = auVar52;
  auVar77._16_16_ = auVar14;
  auVar77._0_16_ = auVar10;
  auVar54._16_16_ = auVar37;
  auVar54._0_16_ = auVar11;
  auVar40 = vmaskmovps_avx(auVar43,auVar81);
  auVar42 = vmaskmovps_avx(auVar43,auVar83);
  auVar65 = vmaskmovps_avx(auVar43,auVar63);
  auVar76 = vmaskmovps_avx(auVar43,auVar95);
  auVar66 = vmaskmovps_avx(auVar43,auVar77);
  auVar41 = vmaskmovps_avx(auVar43,auVar54);
  auVar57 = vpermilps_avx(auVar57,0);
  auVar59 = vsubps_avx(auVar40,auVar76);
  auVar74 = vsubps_avx(auVar42,auVar66);
  auVar75 = vsubps_avx(auVar65,auVar41);
  auVar78._0_4_ =
       auVar75._0_4_ * auVar75._0_4_ + auVar74._0_4_ * auVar74._0_4_ + auVar59._0_4_ * auVar59._0_4_
  ;
  auVar78._4_4_ =
       auVar75._4_4_ * auVar75._4_4_ + auVar74._4_4_ * auVar74._4_4_ + auVar59._4_4_ * auVar59._4_4_
  ;
  auVar78._8_4_ =
       auVar75._8_4_ * auVar75._8_4_ + auVar74._8_4_ * auVar74._8_4_ + auVar59._8_4_ * auVar59._8_4_
  ;
  auVar78._12_4_ =
       auVar75._12_4_ * auVar75._12_4_ +
       auVar74._12_4_ * auVar74._12_4_ + auVar59._12_4_ * auVar59._12_4_;
  auVar78._16_4_ =
       auVar75._16_4_ * auVar75._16_4_ +
       auVar74._16_4_ * auVar74._16_4_ + auVar59._16_4_ * auVar59._16_4_;
  auVar78._20_4_ =
       auVar75._20_4_ * auVar75._20_4_ +
       auVar74._20_4_ * auVar74._20_4_ + auVar59._20_4_ * auVar59._20_4_;
  auVar78._24_4_ =
       auVar75._24_4_ * auVar75._24_4_ +
       auVar74._24_4_ * auVar74._24_4_ + auVar59._24_4_ * auVar59._24_4_;
  auVar78._28_4_ =
       auVar75._28_4_ * auVar75._28_4_ +
       auVar74._28_4_ * auVar74._28_4_ + auVar59._28_4_ * auVar59._28_4_;
  auVar65 = vsqrtps_avx(auVar78);
  local_1e0 = auVar39._0_4_;
  fStack_1dc = auVar39._4_4_;
  fStack_1d8 = auVar39._8_4_;
  fStack_1d4 = auVar39._12_4_;
  fStack_1d0 = auVar39._16_4_;
  fStack_1cc = auVar39._20_4_;
  fStack_1c8 = auVar39._24_4_;
  fStack_1c4 = auVar39._28_4_;
  auVar98._0_4_ = auVar57._0_4_ * local_1e0;
  auVar98._4_4_ = auVar57._4_4_ * fStack_1dc;
  auVar98._8_4_ = auVar57._8_4_ * fStack_1d8;
  auVar98._12_4_ = auVar57._12_4_ * fStack_1d4;
  auVar98._16_4_ = auVar57._0_4_ * fStack_1d0;
  auVar98._20_4_ = auVar57._4_4_ * fStack_1cc;
  auVar98._24_4_ = auVar57._8_4_ * fStack_1c8;
  auVar98._28_4_ = auVar57._12_4_ * fStack_1c4;
  auVar40 = vcmpps_avx(auVar65,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar39 = vdivps_avx(auVar59,auVar65);
  auVar39 = vblendvps_avx(auVar39,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar40);
  auVar42 = vsubps_avx(auVar65,auVar98);
  auVar51 = vpermilps_avx(auVar51,0);
  fVar82 = auVar42._0_4_ * auVar51._0_4_;
  fVar84 = auVar42._4_4_ * auVar51._4_4_;
  fVar85 = auVar42._8_4_ * auVar51._8_4_;
  fVar86 = auVar42._12_4_ * auVar51._12_4_;
  fVar68 = auVar42._16_4_ * auVar51._0_4_;
  fVar69 = auVar42._20_4_ * auVar51._4_4_;
  fVar70 = auVar42._24_4_ * auVar51._8_4_;
  fVar71 = auVar42._28_4_ * auVar51._12_4_;
  auVar42 = vcmpps_avx(auVar42,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  uVar24 = auVar42._0_4_;
  uVar44 = auVar42._4_4_;
  uVar45 = auVar42._8_4_;
  uVar46 = auVar42._12_4_;
  uVar47 = auVar42._16_4_;
  uVar48 = auVar42._20_4_;
  uVar49 = auVar42._24_4_;
  uVar50 = auVar42._28_4_;
  auVar51._0_4_ = auVar76._0_4_ + (float)(~uVar24 & (uint)(auVar39._0_4_ * fVar82));
  auVar51._4_4_ = auVar76._4_4_ + (float)(~uVar44 & (uint)(auVar39._4_4_ * fVar84));
  auVar51._8_4_ = auVar76._8_4_ + (float)(~uVar45 & (uint)(auVar39._8_4_ * fVar85));
  auVar51._12_4_ = auVar76._12_4_ + (float)(~uVar46 & (uint)(auVar39._12_4_ * fVar86));
  auVar92._16_4_ = auVar76._16_4_ + (float)(~uVar47 & (uint)(auVar39._16_4_ * fVar68));
  auVar92._0_16_ = auVar51;
  auVar92._20_4_ = auVar76._20_4_ + (float)(~uVar48 & (uint)(auVar39._20_4_ * fVar69));
  auVar92._24_4_ = auVar76._24_4_ + (float)(~uVar49 & (uint)(auVar39._24_4_ * fVar70));
  auVar92._28_4_ = auVar76._28_4_ + (float)(~uVar50 & (uint)(auVar39._28_4_ * fVar71));
  cVar19 = (char)uVar15;
  iVar36 = auVar89._0_4_;
  auVar57 = auVar92._16_16_;
  iVar35 = auVar89._4_4_;
  iVar17 = auVar89._8_4_;
  iVar34 = auVar89._12_4_;
  iVar56 = auVar67._0_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar36) = auVar51._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + iVar35) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + iVar17) = uVar1;
  }
  if ((uVar15 & 8) == 0) {
    auVar39 = vdivps_avx(auVar74,auVar65);
  }
  else {
    uVar1 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + iVar34) = uVar1;
    auVar39 = vdivps_avx(auVar74,auVar65);
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar56) = auVar92._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar67,1);
    uVar1 = vextractps_avx(auVar57,1);
    *(undefined4 *)(param_1 + iVar16) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar67,2);
    uVar1 = vextractps_avx(auVar57,2);
    *(undefined4 *)(param_1 + iVar16) = uVar1;
  }
  uVar8 = ~uVar50 & (uint)((float)(~auVar40._28_4_ & auVar39._28_4_) * fVar71);
  uVar7 = ~uVar49 & (uint)((float)(~auVar40._24_4_ & auVar39._24_4_) * fVar70);
  uVar6 = ~uVar48 & (uint)((float)(~auVar40._20_4_ & auVar39._20_4_) * fVar69);
  uVar5 = ~uVar47 & (uint)((float)(~auVar40._16_4_ & auVar39._16_4_) * fVar68);
  uVar4 = ~uVar46 & (uint)((float)(~auVar40._12_4_ & auVar39._12_4_) * fVar86);
  uVar3 = ~uVar45 & (uint)((float)(~auVar40._8_4_ & auVar39._8_4_) * fVar85);
  uVar2 = ~uVar44 & (uint)((float)(~auVar40._4_4_ & auVar39._4_4_) * fVar84);
  uVar1 = ~uVar24 & (uint)((float)(~auVar40._0_4_ & auVar39._0_4_) * fVar82);
  if (cVar19 < '\0') {
    iVar16 = vextractps_avx(auVar67,3);
    uVar9 = vextractps_avx(auVar57,3);
    *(undefined4 *)(param_1 + iVar16) = uVar9;
    auVar88._0_4_ = auVar66._0_4_ + (float)uVar1;
    auVar88._4_4_ = auVar66._4_4_ + (float)uVar2;
    auVar88._8_4_ = auVar66._8_4_ + (float)uVar3;
    auVar88._12_4_ = auVar66._12_4_ + (float)uVar4;
    auVar88._16_4_ = auVar66._16_4_ + (float)uVar5;
    auVar88._20_4_ = auVar66._20_4_ + (float)uVar6;
    auVar88._24_4_ = auVar66._24_4_ + (float)uVar7;
    auVar88._28_4_ = auVar66._28_4_ + (float)uVar8;
  }
  else {
    auVar88._0_4_ = auVar66._0_4_ + (float)uVar1;
    auVar88._4_4_ = auVar66._4_4_ + (float)uVar2;
    auVar88._8_4_ = auVar66._8_4_ + (float)uVar3;
    auVar88._12_4_ = auVar66._12_4_ + (float)uVar4;
    auVar88._16_4_ = auVar66._16_4_ + (float)uVar5;
    auVar88._20_4_ = auVar66._20_4_ + (float)uVar6;
    auVar88._24_4_ = auVar66._24_4_ + (float)uVar7;
    auVar88._28_4_ = auVar66._28_4_ + (float)uVar8;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar36) = auVar88._0_4_;
  }
  auVar51 = auVar88._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar35) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar1;
  }
  if ((uVar15 & 8) == 0) {
    auVar39 = vdivps_avx(auVar75,auVar65);
  }
  else {
    uVar1 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar34) = uVar1;
    auVar39 = vdivps_avx(auVar75,auVar65);
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar56) = auVar88._16_4_;
  }
  auVar51 = auVar88._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar67,1);
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar67,2);
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
  }
  uVar8 = ~uVar50 & (uint)((float)(~auVar40._28_4_ & auVar39._28_4_) * fVar71);
  uVar7 = ~uVar49 & (uint)((float)(~auVar40._24_4_ & auVar39._24_4_) * fVar70);
  uVar6 = ~uVar48 & (uint)((float)(~auVar40._20_4_ & auVar39._20_4_) * fVar69);
  uVar5 = ~uVar47 & (uint)((float)(~auVar40._16_4_ & auVar39._16_4_) * fVar68);
  uVar4 = ~uVar46 & (uint)((float)(~auVar40._12_4_ & auVar39._12_4_) * fVar86);
  uVar3 = ~uVar45 & (uint)((float)(~auVar40._8_4_ & auVar39._8_4_) * fVar85);
  uVar2 = ~uVar44 & (uint)((float)(~auVar40._4_4_ & auVar39._4_4_) * fVar84);
  uVar1 = ~uVar24 & (uint)((float)(~auVar40._0_4_ & auVar39._0_4_) * fVar82);
  if (cVar19 < '\0') {
    iVar16 = vextractps_avx(auVar67,3);
    uVar9 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar9;
    auVar55._0_4_ = auVar41._0_4_ + (float)uVar1;
    auVar55._4_4_ = auVar41._4_4_ + (float)uVar2;
    auVar55._8_4_ = auVar41._8_4_ + (float)uVar3;
    auVar55._12_4_ = auVar41._12_4_ + (float)uVar4;
    auVar55._16_4_ = auVar41._16_4_ + (float)uVar5;
    auVar55._20_4_ = auVar41._20_4_ + (float)uVar6;
    auVar55._24_4_ = auVar41._24_4_ + (float)uVar7;
    auVar55._28_4_ = auVar41._28_4_ + (float)uVar8;
  }
  else {
    auVar55._0_4_ = auVar41._0_4_ + (float)uVar1;
    auVar55._4_4_ = auVar41._4_4_ + (float)uVar2;
    auVar55._8_4_ = auVar41._8_4_ + (float)uVar3;
    auVar55._12_4_ = auVar41._12_4_ + (float)uVar4;
    auVar55._16_4_ = auVar41._16_4_ + (float)uVar5;
    auVar55._20_4_ = auVar41._20_4_ + (float)uVar6;
    auVar55._24_4_ = auVar41._24_4_ + (float)uVar7;
    auVar55._28_4_ = auVar41._28_4_ + (float)uVar8;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar36) = auVar55._0_4_;
  }
  auVar51 = auVar55._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar35) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar1;
  }
  if ((uVar15 & 8) != 0) {
    uVar1 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar34) = uVar1;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar56) = auVar55._16_4_;
  }
  auVar51 = auVar55._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar67,1);
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar67,2);
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
  }
  if (cVar19 < '\0') {
    iVar16 = vextractps_avx(auVar67,3);
    uVar1 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar36) = auVar58._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar58,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar35) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar58,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
  }
  if ((uVar15 & 8) != 0) {
    uVar1 = vextractps_avx(auVar58,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar34) = uVar1;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar56) = auVar64._0_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar67,1);
    uVar1 = vextractps_avx(auVar64,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar67,2);
    uVar1 = vextractps_avx(auVar64,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
  }
  if (cVar19 < '\0') {
    uVar1 = vextractps_avx(auVar64,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)auVar67._12_4_) = uVar1;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_CunfCuniCuni_avx @ 1402ee530

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_CunfCuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               uint param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [32];
  uint uVar17;
  longlong lVar18;
  undefined4 uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar40;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar54 [16];
  undefined1 auVar53 [32];
  undefined1 auVar57 [16];
  int iVar55;
  int iVar61;
  int iVar62;
  uint uVar63;
  uint uVar64;
  undefined1 auVar58 [32];
  undefined1 auVar56 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  uint uVar65;
  undefined1 auVar66 [32];
  undefined1 auVar67 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar72 [16];
  undefined1 auVar71 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  int local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  int local_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auVar70 [32];
  undefined1 auVar81 [32];
  
  uVar11 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar11 = param_6;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    auVar67 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar72 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    pauVar16 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar21 = 0;
    do {
      auVar60 = pauVar16[-2];
      auVar42._16_16_ = *(undefined1 (*) [16])pauVar16[-2];
      auVar42._0_16_ = *(undefined1 (*) [16])(pauVar16[-2] + 0x10);
      auVar42 = vblendps_avx(auVar60,auVar42,0x24);
      uVar19 = *(undefined4 *)(pauVar16[-1] + 4);
      auVar74._4_4_ = uVar19;
      auVar74._0_4_ = uVar19;
      auVar74._8_4_ = uVar19;
      auVar74._12_4_ = uVar19;
      uVar19 = *(undefined4 *)(pauVar16[-1] + 8);
      auVar74._20_4_ = uVar19;
      auVar74._16_4_ = uVar19;
      auVar74._24_4_ = uVar19;
      auVar74._28_4_ = uVar19;
      auVar34 = vpermilps_avx(auVar42,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar58._16_16_ = *(undefined1 (*) [16])*pauVar16;
      auVar58._0_16_ = *(undefined1 (*) [16])(*pauVar16 + 0x10);
      auVar42 = vblendps_avx(auVar58,*pauVar16,0x44);
      auVar52 = vpermilps_avx(auVar42,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar31 = vshufps_avx(*(undefined1 (*) [16])(pauVar16[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar16[-1] + 0x10),0xec);
      uVar19 = *(undefined4 *)(pauVar16[-1] + 0x14);
      auVar47._20_4_ = uVar19;
      auVar47._16_4_ = uVar19;
      auVar47._24_4_ = uVar19;
      auVar47._28_4_ = uVar19;
      auVar47._0_16_ = auVar31;
      auVar42 = vblendps_avx(auVar34,auVar74,0x88);
      auVar34 = vblendps_avx(auVar52,auVar47,0x13);
      auVar52 = vblendps_avx(pauVar16[-1],auVar60,0x24);
      auVar60 = vshufps_avx(auVar58,*pauVar16,0xc4);
      auVar52 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(pauVar16[-2] + 0x10)),auVar52,0x21);
      auVar54 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + *(int *)(pauVar16[-2] + 4))),
                            (uint)*(byte *)(param_3 + *(int *)(pauVar16[-2] + 0x10)),1);
      local_2c0 = auVar67._0_4_;
      iStack_2bc = auVar67._4_4_;
      iStack_2b8 = auVar67._8_4_;
      iStack_2b4 = auVar67._12_4_;
      auVar31._0_4_ = auVar42._0_4_ + local_2c0;
      auVar31._4_4_ = auVar42._4_4_ + iStack_2bc;
      auVar31._8_4_ = auVar42._8_4_ + iStack_2b8;
      auVar31._12_4_ = auVar42._12_4_ + iStack_2b4;
      auVar50._0_4_ = auVar34._0_4_ + local_2c0;
      auVar50._4_4_ = auVar34._4_4_ + iStack_2bc;
      auVar50._8_4_ = auVar34._8_4_ + iStack_2b8;
      auVar50._12_4_ = auVar34._12_4_ + iStack_2b4;
      auVar41._0_4_ = auVar42._16_4_ + local_2c0;
      auVar41._4_4_ = auVar42._20_4_ + iStack_2bc;
      auVar41._8_4_ = auVar42._24_4_ + iStack_2b8;
      auVar41._12_4_ = auVar42._28_4_ + iStack_2b4;
      auVar10._0_4_ = auVar34._16_4_ + local_2c0;
      auVar10._4_4_ = auVar34._20_4_ + iStack_2bc;
      auVar10._8_4_ = auVar34._24_4_ + iStack_2b8;
      auVar10._12_4_ = auVar34._28_4_ + iStack_2b4;
      auVar54 = vpinsrb_avx(auVar54,(uint)*(byte *)(param_3 + *(int *)(pauVar16[-2] + 0x1c)),2);
      auVar43 = vpslld_avx(auVar50,4);
      auVar56 = vpslld_avx(auVar31,4);
      auVar44 = vpinsrb_avx(auVar54,(uint)*(byte *)(param_3 + *(int *)(pauVar16[-1] + 8)),3);
      auVar45 = vpinsrb_avx(auVar44,(uint)*(byte *)(param_3 + *(int *)(pauVar16[-1] + 0x14)),4);
      lVar25 = (longlong)auVar43._0_4_;
      lVar26 = (longlong)auVar56._0_4_;
      lVar15 = (longlong)auVar43._4_4_;
      auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + lVar15)),0x10);
      auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar15)),0x10);
      auVar54 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar15)),0x10);
      lVar28 = (longlong)auVar56._4_4_;
      lVar25 = (longlong)auVar56._8_4_;
      lVar15 = (longlong)auVar56._12_4_;
      lVar18 = (longlong)auVar43._8_4_;
      lVar22 = (longlong)auVar43._12_4_;
      auVar43 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar28)),0x10);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar18)),0x20);
      auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + lVar25)),0x20);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 4 + lVar18)),0x20);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x10);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x20);
      auVar78 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x10);
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 8 + lVar18)),0x20);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x20);
      auVar45 = vpinsrb_avx(auVar45,(uint)*(byte *)(param_3 + *(int *)*pauVar16),5);
      auVar77 = vpslld_avx(auVar10,4);
      auVar41 = vpslld_avx(auVar41,4);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar22)),0x30);
      lVar26 = (longlong)auVar41._0_4_;
      auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + lVar15)),0x30);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x30);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 4 + lVar15)),0x30);
      lVar18 = (longlong)auVar41._4_4_;
      lVar27 = (longlong)auVar41._8_4_;
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x30);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_1 + 8 + lVar15)),0x30);
      lVar29 = (longlong)auVar41._12_4_;
      auVar41 = vpinsrb_avx(auVar45,(uint)*(byte *)(param_3 + *(int *)(*pauVar16 + 0xc)),6);
      auVar10 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + *(int *)(*pauVar16 + 0x18)),7);
      auVar41 = vpmovzxbd_avx(auVar44);
      auVar44 = vpslld_avx(auVar41,2);
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + (ulonglong)auVar44._0_4_)),
                              ZEXT416(*(uint *)(param_4 + (ulonglong)auVar44._4_4_)),0x10);
      lVar22 = (longlong)auVar77._0_4_;
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar44._8_4_)),0x20);
      auVar10 = vpshufd_avx(auVar10,0x55);
      auVar10 = vpmovzxbd_avx(auVar10);
      auVar45 = vpslld_avx(auVar10,2);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar44._12_4_)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + (ulonglong)auVar45._0_4_)),
                              ZEXT416(*(uint *)(param_4 + (ulonglong)auVar45._4_4_)),0x10);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar45._8_4_)),0x20);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar45._12_4_)),0x30);
      lVar28 = (longlong)auVar77._4_4_;
      lVar15 = (longlong)auVar77._8_4_;
      lVar25 = (longlong)auVar77._12_4_;
      auVar59._16_16_ = auVar31;
      auVar59._0_16_ = auVar43;
      auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar22)),
                              ZEXT416(*(uint *)(param_1 + lVar28)),0x10);
      auVar66._16_16_ = auVar50;
      auVar66._0_16_ = auVar56;
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar15)),0x20);
      auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar18)),0x10);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar25)),0x30);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + lVar29)),0x30);
      auVar68._16_16_ = auVar31;
      auVar68._0_16_ = auVar50;
      auVar43 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar22)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x10);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar18)),0x10);
      auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + 4 + lVar15)),0x20);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x30);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 4 + lVar29)),0x30);
      auVar44 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar22)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x10);
      auVar45 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar18)),0x10);
      auVar44 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_1 + 8 + lVar15)),0x20);
      auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar44 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x30);
      auVar80._16_16_ = auVar43;
      auVar80._0_16_ = auVar56;
      auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_1 + 8 + lVar29)),0x30);
      auVar33._16_16_ = auVar54;
      auVar33._0_16_ = auVar78;
      auVar51._16_16_ = auVar44;
      auVar51._0_16_ = auVar45;
      auVar47 = vsubps_avx(auVar59,auVar68);
      auVar58 = vsubps_avx(auVar66,auVar80);
      auVar52 = vshufps_avx(auVar52,pauVar16[-1],0xc2);
      auVar33 = vsubps_avx(auVar33,auVar51);
      auVar52 = vblendps_avx(auVar52,auVar60,0xe0);
      auVar60._0_4_ =
           auVar47._0_4_ * auVar47._0_4_ + auVar58._0_4_ * auVar58._0_4_ +
           auVar33._0_4_ * auVar33._0_4_;
      auVar60._4_4_ =
           auVar47._4_4_ * auVar47._4_4_ + auVar58._4_4_ * auVar58._4_4_ +
           auVar33._4_4_ * auVar33._4_4_;
      auVar60._8_4_ =
           auVar47._8_4_ * auVar47._8_4_ + auVar58._8_4_ * auVar58._8_4_ +
           auVar33._8_4_ * auVar33._8_4_;
      auVar60._12_4_ =
           auVar47._12_4_ * auVar47._12_4_ + auVar58._12_4_ * auVar58._12_4_ +
           auVar33._12_4_ * auVar33._12_4_;
      auVar60._16_4_ =
           auVar47._16_4_ * auVar47._16_4_ + auVar58._16_4_ * auVar58._16_4_ +
           auVar33._16_4_ * auVar33._16_4_;
      auVar60._20_4_ =
           auVar47._20_4_ * auVar47._20_4_ + auVar58._20_4_ * auVar58._20_4_ +
           auVar33._20_4_ * auVar33._20_4_;
      auVar60._24_4_ =
           auVar47._24_4_ * auVar47._24_4_ + auVar58._24_4_ * auVar58._24_4_ +
           auVar33._24_4_ * auVar33._24_4_;
      auVar60._28_4_ =
           auVar47._28_4_ * auVar47._28_4_ + auVar58._28_4_ * auVar58._28_4_ +
           auVar33._28_4_ * auVar33._28_4_;
      uVar19 = *(undefined4 *)(param_1 + 0xc + lVar26);
      auVar51 = vsqrtps_avx(auVar60);
      uVar1 = *(undefined4 *)(param_1 + 0xc + lVar18);
      auVar60 = vdivps_avx(auVar47,auVar51);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar27);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar22);
      auVar58 = vdivps_avx(auVar58,auVar51);
      auVar33 = vdivps_avx(auVar33,auVar51);
      auVar47 = vcmpps_avx(auVar51,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar60 = vblendvps_avx(auVar60,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar47);
      local_260 = auVar72._0_4_;
      fStack_25c = auVar72._4_4_;
      fStack_258 = auVar72._8_4_;
      fStack_254 = auVar72._12_4_;
      auVar83._0_4_ = auVar52._0_4_ * local_260;
      auVar83._4_4_ = auVar52._4_4_ * fStack_25c;
      auVar83._8_4_ = auVar52._8_4_ * fStack_258;
      auVar83._12_4_ = auVar52._12_4_ * fStack_254;
      auVar83._16_4_ = auVar52._16_4_ * local_260;
      auVar83._20_4_ = auVar52._20_4_ * fStack_25c;
      auVar83._24_4_ = auVar52._24_4_ * fStack_258;
      auVar83._28_4_ = auVar52._28_4_ * fStack_254;
      auVar52 = vsubps_avx(auVar51,auVar83);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar29);
      fVar93 = auVar52._0_4_ * auVar41._0_4_;
      fVar94 = auVar52._4_4_ * auVar41._4_4_;
      fVar95 = auVar52._8_4_ * auVar41._8_4_;
      fVar96 = auVar52._12_4_ * auVar41._12_4_;
      fVar97 = auVar52._16_4_ * auVar10._0_4_;
      fVar98 = auVar52._20_4_ * auVar10._4_4_;
      fVar99 = auVar52._24_4_ * auVar10._8_4_;
      fVar100 = auVar52._28_4_ * auVar10._12_4_;
      auVar52 = vcmpps_avx(auVar52,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar20 = auVar52._0_4_;
      uVar17 = auVar52._4_4_;
      uVar23 = auVar52._8_4_;
      uVar24 = auVar52._12_4_;
      uVar40 = auVar52._16_4_;
      uVar63 = auVar52._20_4_;
      uVar64 = auVar52._24_4_;
      uVar65 = auVar52._28_4_;
      auVar77._0_4_ = auVar50._0_4_ + (float)(~uVar20 & (uint)(auVar60._0_4_ * fVar93));
      auVar77._4_4_ = auVar50._4_4_ + (float)(~uVar17 & (uint)(auVar60._4_4_ * fVar94));
      auVar77._8_4_ = auVar50._8_4_ + (float)(~uVar23 & (uint)(auVar60._8_4_ * fVar95));
      auVar77._12_4_ = auVar50._12_4_ + (float)(~uVar24 & (uint)(auVar60._12_4_ * fVar96));
      auVar85._16_4_ = auVar31._0_4_ + (float)(~uVar40 & (uint)(auVar60._16_4_ * fVar97));
      auVar85._0_16_ = auVar77;
      auVar85._20_4_ = auVar31._4_4_ + (float)(~uVar63 & (uint)(auVar60._20_4_ * fVar98));
      auVar85._24_4_ = auVar31._8_4_ + (float)(~uVar64 & (uint)(auVar60._24_4_ * fVar99));
      auVar85._28_4_ = auVar31._12_4_ + (float)(~uVar65 & (uint)(auVar60._28_4_ * fVar100));
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar28);
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar15);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar25);
      *(float *)(param_1 + lVar26) = auVar77._0_4_;
      uVar8 = vextractps_avx(auVar77,1);
      *(undefined4 *)(param_1 + lVar18) = uVar8;
      uVar8 = vextractps_avx(auVar77,2);
      *(undefined4 *)(param_1 + lVar27) = uVar8;
      uVar8 = vextractps_avx(auVar77,3);
      *(undefined4 *)(param_1 + lVar29) = uVar8;
      auVar31 = auVar85._16_16_;
      *(float *)(param_1 + lVar22) = auVar85._16_4_;
      uVar8 = vextractps_avx(auVar31,1);
      *(undefined4 *)(param_1 + lVar28) = uVar8;
      uVar8 = vextractps_avx(auVar31,2);
      *(undefined4 *)(param_1 + lVar15) = uVar8;
      auVar78._0_4_ =
           auVar56._0_4_ +
           (float)(~uVar20 & (uint)((float)(~auVar47._0_4_ & auVar58._0_4_) * fVar93));
      auVar78._4_4_ =
           auVar56._4_4_ +
           (float)(~uVar17 & (uint)((float)(~auVar47._4_4_ & auVar58._4_4_) * fVar94));
      auVar78._8_4_ =
           auVar56._8_4_ +
           (float)(~uVar23 & (uint)((float)(~auVar47._8_4_ & auVar58._8_4_) * fVar95));
      auVar78._12_4_ =
           auVar56._12_4_ +
           (float)(~uVar24 & (uint)((float)(~auVar47._12_4_ & auVar58._12_4_) * fVar96));
      auVar81._16_4_ =
           auVar43._0_4_ +
           (float)(~uVar40 & (uint)((float)(~auVar47._16_4_ & auVar58._16_4_) * fVar97));
      auVar81._0_16_ = auVar78;
      auVar81._20_4_ =
           auVar43._4_4_ +
           (float)(~uVar63 & (uint)((float)(~auVar47._20_4_ & auVar58._20_4_) * fVar98));
      auVar81._24_4_ =
           auVar43._8_4_ +
           (float)(~uVar64 & (uint)((float)(~auVar47._24_4_ & auVar58._24_4_) * fVar99));
      auVar81._28_4_ =
           auVar43._12_4_ +
           (float)(~uVar65 & (uint)((float)(~auVar47._28_4_ & auVar58._28_4_) * fVar100));
      uVar8 = vextractps_avx(auVar31,3);
      *(undefined4 *)(param_1 + lVar25) = uVar8;
      *(float *)(param_1 + 4 + lVar26) = auVar78._0_4_;
      uVar8 = vextractps_avx(auVar78,1);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar8;
      uVar8 = vextractps_avx(auVar78,2);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar8;
      uVar8 = vextractps_avx(auVar78,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar8;
      auVar31 = auVar81._16_16_;
      *(float *)(param_1 + 4 + lVar22) = auVar81._16_4_;
      uVar8 = vextractps_avx(auVar31,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar8;
      uVar8 = vextractps_avx(auVar31,2);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar8;
      auVar54._0_4_ =
           (float)(~uVar20 & (uint)((float)(~auVar47._0_4_ & auVar33._0_4_) * fVar93)) +
           auVar45._0_4_;
      auVar54._4_4_ =
           (float)(~uVar17 & (uint)((float)(~auVar47._4_4_ & auVar33._4_4_) * fVar94)) +
           auVar45._4_4_;
      auVar54._8_4_ =
           (float)(~uVar23 & (uint)((float)(~auVar47._8_4_ & auVar33._8_4_) * fVar95)) +
           auVar45._8_4_;
      auVar54._12_4_ =
           (float)(~uVar24 & (uint)((float)(~auVar47._12_4_ & auVar33._12_4_) * fVar96)) +
           auVar45._12_4_;
      auVar52._16_4_ =
           (float)(~uVar40 & (uint)((float)(~auVar47._16_4_ & auVar33._16_4_) * fVar97)) +
           auVar44._0_4_;
      auVar52._0_16_ = auVar54;
      auVar52._20_4_ =
           (float)(~uVar63 & (uint)((float)(~auVar47._20_4_ & auVar33._20_4_) * fVar98)) +
           auVar44._4_4_;
      auVar52._24_4_ =
           (float)(~uVar64 & (uint)((float)(~auVar47._24_4_ & auVar33._24_4_) * fVar99)) +
           auVar44._8_4_;
      auVar52._28_4_ =
           (float)(~uVar65 & (uint)((float)(~auVar47._28_4_ & auVar33._28_4_) * fVar100)) +
           auVar44._12_4_;
      uVar8 = vextractps_avx(auVar31,3);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar8;
      *(float *)(param_1 + 8 + lVar26) = auVar54._0_4_;
      uVar8 = vextractps_avx(auVar54,1);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar8;
      uVar8 = vextractps_avx(auVar54,2);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar8;
      uVar8 = vextractps_avx(auVar54,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar8;
      auVar31 = auVar52._16_16_;
      *(float *)(param_1 + 8 + lVar22) = auVar52._16_4_;
      uVar8 = vextractps_avx(auVar31,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar8;
      uVar8 = vextractps_avx(auVar31,2);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar8;
      uVar8 = vextractps_avx(auVar31,3);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar8;
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar19;
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar1;
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar7;
      pauVar16 = pauVar16 + 3;
      uVar20 = (int)uVar21 + 8;
      uVar21 = (ulonglong)uVar20;
    } while ((int)uVar20 < (int)(uVar11 & 0xfffffff8));
    vperm2f128_avx(auVar42,auVar34,0x31);
    if ((int)param_6 <= (int)uVar20) {
      return;
    }
  }
  auVar67 = vpshufd_avx(ZEXT416((uint)uVar21),0);
  auVar34._16_16_ = auVar67;
  auVar34._0_16_ = auVar67;
  auVar31 = vpshufd_avx(ZEXT416(param_6),0);
  auVar50 = SUB3216(auVar34 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar54 = SUB3216(auVar34 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar67 = vpcmpgtd_avx(auVar31,auVar54);
  auVar72 = vpcmpgtd_avx(auVar31,auVar50);
  auVar48._16_16_ = auVar67;
  auVar48._0_16_ = auVar72;
  pauVar16 = (undefined1 (*) [32])(param_2 + uVar21 * 0xc);
  uVar11 = vmovmskps_avx(auVar48);
  if (uVar11 == 0xff) {
    auVar60 = pauVar16[2];
    auVar36._16_16_ = *(undefined1 (*) [16])*pauVar16;
    auVar36._0_16_ = *(undefined1 (*) [16])(*pauVar16 + 0x10);
    auVar42 = vblendps_avx(*pauVar16,auVar36,0x24);
    auVar34 = vpermilps_avx(auVar42,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar19 = *(undefined4 *)(pauVar16[1] + 4);
    auVar90._4_4_ = uVar19;
    auVar90._0_4_ = uVar19;
    auVar90._8_4_ = uVar19;
    auVar90._12_4_ = uVar19;
    uVar19 = *(undefined4 *)(pauVar16[1] + 8);
    auVar90._20_4_ = uVar19;
    auVar90._16_4_ = uVar19;
    auVar90._24_4_ = uVar19;
    auVar90._28_4_ = uVar19;
    auVar86._16_16_ = *(undefined1 (*) [16])pauVar16[2];
    auVar86._0_16_ = *(undefined1 (*) [16])(pauVar16[2] + 0x10);
    auVar42 = vblendps_avx(auVar86,auVar60,0x44);
    auVar52 = vpermilps_avx(auVar42,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar42 = vblendps_avx(auVar34,auVar90,0x88);
    auVar43 = vshufps_avx(*(undefined1 (*) [16])(pauVar16[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar16[1] + 0x10),0xec);
    uVar19 = *(undefined4 *)(pauVar16[1] + 0x14);
    auVar37._20_4_ = uVar19;
    auVar37._16_4_ = uVar19;
    auVar37._24_4_ = uVar19;
    auVar37._28_4_ = uVar19;
    auVar37._0_16_ = auVar43;
    auVar34 = vblendps_avx(auVar52,auVar37,0x13);
    auVar35._16_16_ = auVar34._0_16_;
    auVar35._0_16_ = auVar42._0_16_;
    auVar52 = vperm2f128_avx(auVar42,auVar34,0x31);
    auVar42 = vblendps_avx(pauVar16[1],*pauVar16,0x24);
    auVar42 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar16 + 0x10)),auVar42,0x21);
    auVar42 = vshufps_avx(auVar42,pauVar16[1],0xc2);
    auVar34 = vshufps_avx(auVar86,auVar60,0xc4);
    auVar42 = vblendps_avx(auVar42,auVar34,0xe0);
  }
  else {
    auVar43 = vpcmpgtd_avx(auVar31,auVar54);
    auVar56 = vpcmpgtd_avx(auVar31,auVar50);
    uVar20 = auVar56._0_4_;
    auVar44._0_4_ = uVar20 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar17 = auVar56._4_4_;
    auVar44._4_4_ = uVar17 & _UNK_150b50b04;
    uVar23 = auVar56._8_4_;
    auVar44._8_4_ = uVar23 & _UNK_150b50b08;
    uVar24 = auVar56._12_4_;
    auVar44._12_4_ = uVar24 & _UNK_150b50b0c;
    uVar40 = auVar43._0_4_;
    vextractps_avx(auVar44,1);
    vextractps_avx(auVar44,2);
    vextractps_avx(auVar44,3);
    auVar43._0_4_ = uVar20 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar43._4_4_ = uVar17 & _UNK_150b50b24;
    auVar43._8_4_ = uVar23 & _UNK_150b50b28;
    auVar43._12_4_ = uVar24 & _UNK_150b50b2c;
    vextractps_avx(auVar43,1);
    vextractps_avx(auVar43,2);
    vextractps_avx(auVar43,3);
    auVar56._0_4_ = uVar20 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar56._4_4_ = uVar17 & _UNK_150b50b44;
    auVar56._8_4_ = uVar23 & _UNK_150b50b48;
    auVar56._12_4_ = uVar24 & _UNK_150b50b4c;
    vextractps_avx(auVar56,1);
    vextractps_avx(auVar56,2);
    auVar35 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar16 + (uVar40 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar16)));
    vextractps_avx(auVar56,3);
    auVar52 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar16 + (uVar40 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar16 + auVar43._0_4_))));
    auVar42 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar16 + (uVar40 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar16 + auVar56._0_4_))));
  }
  auVar54 = vpcmpgtd_avx(auVar31,auVar54);
  auVar77 = vpcmpgtd_avx(auVar31,auVar50);
  auVar88._16_16_ = auVar54;
  auVar88._0_16_ = auVar77;
  auVar34 = vmaskmovps_avx(auVar88,auVar35);
  auVar52 = vmaskmovps_avx(auVar88,auVar52);
  auVar42 = vmaskmovps_avx(auVar88,auVar42);
  local_220 = auVar52._0_4_;
  uStack_21c = auVar52._4_4_;
  uStack_218 = auVar52._8_4_;
  uStack_214 = auVar52._12_4_;
  uStack_210 = auVar52._16_4_;
  uStack_20c = auVar52._20_4_;
  uStack_208 = auVar52._24_4_;
  uStack_204 = auVar52._28_4_;
  uVar20 = auVar77._0_4_;
  uVar17 = auVar77._4_4_;
  uVar23 = auVar77._8_4_;
  uVar24 = auVar77._12_4_;
  uVar40 = auVar54._0_4_;
  uVar63 = auVar54._4_4_;
  uVar64 = auVar54._8_4_;
  uVar65 = auVar54._12_4_;
  auVar31 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)(uVar20 & local_220))),
                        (uint)*(byte *)(param_3 + (int)(uVar17 & uStack_21c)),1);
  auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(param_3 + (int)(uVar23 & uStack_218)),2);
  auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(param_3 + (int)(uVar24 & uStack_214)),3);
  auVar50 = vpinsrb_avx(auVar31,(uint)*(byte *)(param_3 + (int)(uVar40 & uStack_210)),4);
  auVar50 = vpinsrb_avx(auVar50,(uint)*(byte *)(param_3 + (int)(uVar63 & uStack_20c)),5);
  auVar50 = vpinsrb_avx(auVar50,(uint)*(byte *)(param_3 + (int)(uVar64 & uStack_208)),6);
  auVar50 = vpinsrb_avx(auVar50,(uint)*(byte *)(param_3 + (int)(uVar65 & uStack_204)),7);
  auVar43 = vpshufd_avx(ZEXT416(param_7),0);
  local_240 = auVar34._0_4_;
  iVar55 = auVar43._0_4_;
  auVar45._0_4_ = iVar55 + local_240;
  iStack_23c = auVar34._4_4_;
  iVar61 = auVar43._4_4_;
  auVar45._4_4_ = iVar61 + iStack_23c;
  iStack_238 = auVar34._8_4_;
  iVar62 = auVar43._8_4_;
  auVar45._8_4_ = iVar62 + iStack_238;
  iStack_234 = auVar34._12_4_;
  iVar12 = auVar43._12_4_;
  auVar45._12_4_ = iVar12 + iStack_234;
  iStack_230 = auVar34._16_4_;
  auVar32._0_4_ = iVar55 + iStack_230;
  iStack_22c = auVar34._20_4_;
  auVar32._4_4_ = iVar61 + iStack_22c;
  iStack_228 = auVar34._24_4_;
  auVar32._8_4_ = iVar62 + iStack_228;
  iStack_224 = auVar34._28_4_;
  auVar32._12_4_ = iVar12 + iStack_224;
  auVar57._0_4_ = iVar55 + uStack_210;
  auVar57._4_4_ = iVar61 + uStack_20c;
  auVar57._8_4_ = iVar62 + uStack_208;
  auVar57._12_4_ = iVar12 + uStack_204;
  auVar56 = vpslld_avx(auVar32,4);
  auVar43 = vpslld_avx(auVar45,4);
  auVar10 = vpand_avx(auVar77,auVar43);
  iVar30 = auVar10._0_4_;
  iVar13 = auVar10._4_4_;
  auVar56 = vpand_avx(auVar54,auVar56);
  lVar15 = param_1 + auVar56._0_4_;
  auVar73._0_4_ = uVar20 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
  auVar73._4_4_ = uVar17 & _UNK_150b50d44;
  auVar73._8_4_ = uVar23 & _UNK_150b50d48;
  auVar73._12_4_ = uVar24 & _UNK_150b50d4c;
  auVar79._0_4_ = uVar20 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar79._4_4_ = uVar17 & _UNK_150b50d64;
  auVar79._8_4_ = uVar23 & _UNK_150b50d68;
  auVar79._12_4_ = uVar24 & _UNK_150b50d6c;
  auVar50 = vpshufd_avx(auVar50,0x55);
  auVar50 = vpmovzxbd_avx(auVar50);
  auVar31 = vpmovzxbd_avx(auVar31);
  auVar43 = vpslld_avx(auVar31,2);
  auVar31 = vpslld_avx(auVar50,2);
  auVar50 = vpunpckhdq_avx(auVar31,(undefined1  [16])0x0);
  auVar31 = vpmovzxdq_avx(auVar31);
  auVar38._16_16_ = auVar50;
  auVar38._0_16_ = auVar31;
  auVar50 = vpunpckhdq_avx(auVar43,(undefined1  [16])0x0);
  auVar31 = vpmovzxdq_avx(auVar43);
  auVar84._16_16_ = auVar50;
  auVar84._0_16_ = auVar31;
  auVar31 = vpmovsxdq_avx(auVar72);
  auVar72 = vshufps_avx(auVar72,auVar72,0xfa);
  auVar92._16_16_ = auVar72;
  auVar92._0_16_ = auVar31;
  auVar34 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar84,auVar92);
  auVar72 = vpmovsxdq_avx(auVar67);
  auVar67 = vpshufd_avx(auVar67,0xfa);
  auVar49._16_16_ = auVar67;
  auVar49._0_16_ = auVar72;
  auVar57 = vpslld_avx(auVar57,4);
  auVar44 = vpand_avx(auVar54,auVar57);
  auVar52 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar38,auVar49);
  lVar25 = param_1 + auVar44._0_4_;
  auVar46._0_4_ = uVar20 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar46._4_4_ = uVar17 & _UNK_150b50d84;
  auVar46._8_4_ = uVar23 & _UNK_150b50d88;
  auVar46._12_4_ = uVar24 & _UNK_150b50d8c;
  lVar18 = param_1 + auVar56._4_4_;
  auVar67 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d50) + lVar15)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d54) + lVar18)),0x10);
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d70) + lVar15)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d74) + lVar18)),0x10);
  lVar15 = param_1 + auVar44._4_4_;
  auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d50) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d54) + lVar15)),0x10);
  auVar50 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d70) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d74) + lVar15)),0x10);
  auVar54 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d90) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d94) + lVar15)),0x10);
  uVar23 = vextractps_avx(auVar73,1);
  uVar17 = vextractps_avx(auVar73,2);
  uVar20 = vextractps_avx(auVar73,3);
  auVar43 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar56._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar56._4_4_)),0x10);
  auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + auVar56._8_4_)),0x20);
  lVar15 = param_1 + auVar56._8_4_;
  auVar67 = vinsertps_avx(auVar67,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d58) + lVar15)),
                          0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d78) + lVar15)),
                          0x20);
  auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + auVar56._12_4_)),0x30);
  lVar15 = param_1 + auVar56._12_4_;
  auVar67 = vinsertps_avx(auVar67,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d5c) + lVar15)),
                          0x30);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d7c) + lVar15)),
                          0x30);
  lVar15 = param_1 + iVar30;
  auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + iVar30)),ZEXT416(*(uint *)(param_1 + iVar13)),
                          0x10);
  lVar25 = param_1 + iVar13;
  auVar78 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar73._0_4_ + lVar15)),
                          ZEXT416(*(uint *)((ulonglong)uVar23 + lVar25)),0x10);
  uVar24 = vextractps_avx(auVar79,1);
  uVar19 = vextractps_avx(auVar79,2);
  lVar29 = CONCAT44(iVar13 >> 0x1f,uVar19);
  uVar19 = vextractps_avx(auVar79,3);
  lVar27 = CONCAT44(iVar30 >> 0x1f,uVar19);
  auVar41 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar79._0_4_ + lVar15)),
                          ZEXT416(*(uint *)((ulonglong)uVar24 + lVar25)),0x10);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + auVar10._8_4_)),0x20);
  lVar15 = param_1 + auVar10._8_4_;
  auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)((ulonglong)uVar17 + lVar15)),0x20);
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(lVar29 + lVar15)),0x20);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + auVar10._12_4_)),0x30);
  lVar15 = param_1 + auVar10._12_4_;
  auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar15)),0x30);
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(lVar27 + lVar15)),0x30);
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar44._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar44._4_4_)),0x10);
  auVar9._0_4_ = iVar55 + local_220;
  auVar9._4_4_ = iVar61 + uStack_21c;
  auVar9._8_4_ = iVar62 + uStack_218;
  auVar9._12_4_ = iVar12 + uStack_214;
  auVar32 = vpslld_avx(auVar9,4);
  auVar77 = vpand_avx(auVar32,auVar77);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar44._8_4_)),0x20);
  lVar15 = param_1 + auVar44._8_4_;
  auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d58) + lVar15)),
                          0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar44._12_4_)),0x30);
  lVar25 = param_1 + auVar44._12_4_;
  auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d5c) + lVar25)),
                          0x30);
  lVar18 = param_1 + auVar77._0_4_;
  auVar44 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar77._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar77._4_4_)),0x10);
  lVar26 = param_1 + auVar77._4_4_;
  auVar45 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar73._0_4_ + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)uVar23 + lVar26)),0x10);
  auVar44 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_1 + auVar77._8_4_)),0x20);
  auVar82._16_16_ = auVar43;
  auVar82._0_16_ = auVar56;
  lVar22 = param_1 + auVar77._8_4_;
  auVar43 = vinsertps_avx(auVar45,ZEXT416(*(uint *)((ulonglong)uVar17 + lVar22)),0x20);
  auVar91._16_16_ = auVar67;
  auVar91._0_16_ = auVar78;
  auVar67 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_1 + auVar77._12_4_)),0x30);
  auVar75._16_16_ = auVar72;
  auVar75._0_16_ = auVar41;
  lVar28 = param_1 + auVar77._12_4_;
  auVar72 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar28)),0x30);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d78) + lVar15)),
                          0x20);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d7c) + lVar25)),
                          0x30);
  auVar87._16_16_ = auVar10;
  auVar87._0_16_ = auVar67;
  auVar67 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar79._0_4_ + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)uVar24 + lVar26)),0x10);
  auVar67 = vinsertps_avx(auVar67,ZEXT416(*(uint *)(lVar29 + lVar22)),0x20);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d98) + lVar15)),
                          0x20);
  uVar19 = vextractps_avx(auVar46,1);
  uVar17 = vextractps_avx(auVar46,2);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d9c) + lVar25)),
                          0x30);
  uVar20 = vextractps_avx(auVar46,3);
  auVar67 = vinsertps_avx(auVar67,ZEXT416(*(uint *)(lVar27 + lVar28)),0x30);
  auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar46._0_4_ + lVar18)),
                          ZEXT416(*(uint *)(CONCAT44((int)((ulonglong)lVar15 >> 0x20),uVar19) +
                                           lVar26)),0x10);
  auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)uVar17 + lVar22)),0x20);
  auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar28)),0x30);
  auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + auVar52._0_8_)),
                          ZEXT416(*(uint *)(param_4 + auVar52._8_8_)),0x10);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_4 + auVar52._16_8_)),0x20);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_4 + auVar52._24_8_)),0x30);
  auVar78 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + auVar34._0_8_)),
                          ZEXT416(*(uint *)(param_4 + auVar34._8_8_)),0x10);
  auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_4 + auVar34._16_8_)),0x20);
  auVar69._16_16_ = auVar31;
  auVar69._0_16_ = auVar72;
  auVar72 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_4 + auVar34._24_8_)),0x30);
  auVar39._16_16_ = auVar50;
  auVar39._0_16_ = auVar67;
  auVar34 = vmaskmovps_avx(auVar88,auVar82);
  auVar52 = vmaskmovps_avx(auVar88,auVar91);
  auVar60 = vmaskmovps_avx(auVar88,auVar75);
  auVar47 = vmaskmovps_avx(auVar88,auVar87);
  auVar58 = vmaskmovps_avx(auVar88,auVar69);
  auVar33 = vmaskmovps_avx(auVar88,auVar39);
  auVar67 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  auVar51 = vsubps_avx(auVar34,auVar47);
  auVar59 = vsubps_avx(auVar52,auVar58);
  auVar66 = vsubps_avx(auVar60,auVar33);
  auVar76._0_4_ =
       auVar66._0_4_ * auVar66._0_4_ + auVar59._0_4_ * auVar59._0_4_ + auVar51._0_4_ * auVar51._0_4_
  ;
  auVar76._4_4_ =
       auVar66._4_4_ * auVar66._4_4_ + auVar59._4_4_ * auVar59._4_4_ + auVar51._4_4_ * auVar51._4_4_
  ;
  auVar76._8_4_ =
       auVar66._8_4_ * auVar66._8_4_ + auVar59._8_4_ * auVar59._8_4_ + auVar51._8_4_ * auVar51._8_4_
  ;
  auVar76._12_4_ =
       auVar66._12_4_ * auVar66._12_4_ +
       auVar59._12_4_ * auVar59._12_4_ + auVar51._12_4_ * auVar51._12_4_;
  auVar76._16_4_ =
       auVar66._16_4_ * auVar66._16_4_ +
       auVar59._16_4_ * auVar59._16_4_ + auVar51._16_4_ * auVar51._16_4_;
  auVar76._20_4_ =
       auVar66._20_4_ * auVar66._20_4_ +
       auVar59._20_4_ * auVar59._20_4_ + auVar51._20_4_ * auVar51._20_4_;
  auVar76._24_4_ =
       auVar66._24_4_ * auVar66._24_4_ +
       auVar59._24_4_ * auVar59._24_4_ + auVar51._24_4_ * auVar51._24_4_;
  auVar76._28_4_ =
       auVar66._28_4_ * auVar66._28_4_ +
       auVar59._28_4_ * auVar59._28_4_ + auVar51._28_4_ * auVar51._28_4_;
  auVar60 = vsqrtps_avx(auVar76);
  local_200 = auVar42._0_4_;
  fStack_1fc = auVar42._4_4_;
  fStack_1f8 = auVar42._8_4_;
  fStack_1f4 = auVar42._12_4_;
  fStack_1f0 = auVar42._16_4_;
  fStack_1ec = auVar42._20_4_;
  fStack_1e8 = auVar42._24_4_;
  fStack_1e4 = auVar42._28_4_;
  auVar89._0_4_ = auVar67._0_4_ * local_200;
  auVar89._4_4_ = auVar67._4_4_ * fStack_1fc;
  auVar89._8_4_ = auVar67._8_4_ * fStack_1f8;
  auVar89._12_4_ = auVar67._12_4_ * fStack_1f4;
  auVar89._16_4_ = auVar67._0_4_ * fStack_1f0;
  auVar89._20_4_ = auVar67._4_4_ * fStack_1ec;
  auVar89._24_4_ = auVar67._8_4_ * fStack_1e8;
  auVar89._28_4_ = auVar67._12_4_ * fStack_1e4;
  auVar34 = vcmpps_avx(auVar60,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar42 = vdivps_avx(auVar51,auVar60);
  auVar42 = vblendvps_avx(auVar42,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar34);
  auVar52 = vsubps_avx(auVar60,auVar89);
  fVar93 = auVar52._0_4_ * auVar72._0_4_;
  fVar94 = auVar52._4_4_ * auVar72._4_4_;
  fVar95 = auVar52._8_4_ * auVar72._8_4_;
  fVar96 = auVar52._12_4_ * auVar72._12_4_;
  fVar97 = auVar52._16_4_ * auVar56._0_4_;
  fVar98 = auVar52._20_4_ * auVar56._4_4_;
  fVar99 = auVar52._24_4_ * auVar56._8_4_;
  fVar100 = auVar52._28_4_ * auVar56._12_4_;
  auVar52 = vcmpps_avx(auVar52,
                       ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1);
  uVar20 = auVar52._0_4_;
  uVar17 = auVar52._4_4_;
  uVar23 = auVar52._8_4_;
  uVar24 = auVar52._12_4_;
  uVar40 = auVar52._16_4_;
  uVar63 = auVar52._20_4_;
  uVar64 = auVar52._24_4_;
  uVar65 = auVar52._28_4_;
  auVar67._0_4_ = auVar47._0_4_ + (float)(~uVar20 & (uint)(auVar42._0_4_ * fVar93));
  auVar67._4_4_ = auVar47._4_4_ + (float)(~uVar17 & (uint)(auVar42._4_4_ * fVar94));
  auVar67._8_4_ = auVar47._8_4_ + (float)(~uVar23 & (uint)(auVar42._8_4_ * fVar95));
  auVar67._12_4_ = auVar47._12_4_ + (float)(~uVar24 & (uint)(auVar42._12_4_ * fVar96));
  auVar70._16_4_ = auVar47._16_4_ + (float)(~uVar40 & (uint)(auVar42._16_4_ * fVar97));
  auVar70._0_16_ = auVar67;
  auVar70._20_4_ = auVar47._20_4_ + (float)(~uVar63 & (uint)(auVar42._20_4_ * fVar98));
  auVar70._24_4_ = auVar47._24_4_ + (float)(~uVar64 & (uint)(auVar42._24_4_ * fVar99));
  auVar70._28_4_ = auVar47._28_4_ + (float)(~uVar65 & (uint)(auVar42._28_4_ * fVar100));
  cVar14 = (char)uVar11;
  auVar72 = auVar70._16_16_;
  iVar61 = auVar32._0_4_;
  iVar13 = auVar32._4_4_;
  iVar30 = auVar32._8_4_;
  iVar55 = auVar32._12_4_;
  iVar62 = auVar57._0_4_;
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + iVar61) = auVar67._0_4_;
  }
  if ((uVar11 & 2) != 0) {
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + iVar13) = uVar19;
  }
  if ((uVar11 & 4) != 0) {
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + iVar30) = uVar19;
  }
  if ((uVar11 & 8) == 0) {
    auVar42 = vdivps_avx(auVar59,auVar60);
  }
  else {
    uVar19 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + iVar55) = uVar19;
    auVar42 = vdivps_avx(auVar59,auVar60);
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + iVar62) = auVar70._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    iVar12 = vextractps_avx(auVar57,1);
    uVar19 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + iVar12) = uVar19;
  }
  if ((uVar11 & 0x40) != 0) {
    iVar12 = vextractps_avx(auVar57,2);
    uVar19 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + iVar12) = uVar19;
  }
  uVar7 = ~uVar65 & (uint)((float)(~auVar34._28_4_ & auVar42._28_4_) * fVar100);
  uVar6 = ~uVar64 & (uint)((float)(~auVar34._24_4_ & auVar42._24_4_) * fVar99);
  uVar5 = ~uVar63 & (uint)((float)(~auVar34._20_4_ & auVar42._20_4_) * fVar98);
  uVar4 = ~uVar40 & (uint)((float)(~auVar34._16_4_ & auVar42._16_4_) * fVar97);
  uVar3 = ~uVar24 & (uint)((float)(~auVar34._12_4_ & auVar42._12_4_) * fVar96);
  uVar2 = ~uVar23 & (uint)((float)(~auVar34._8_4_ & auVar42._8_4_) * fVar95);
  uVar1 = ~uVar17 & (uint)((float)(~auVar34._4_4_ & auVar42._4_4_) * fVar94);
  uVar19 = ~uVar20 & (uint)((float)(~auVar34._0_4_ & auVar42._0_4_) * fVar93);
  if (cVar14 < '\0') {
    iVar12 = vextractps_avx(auVar57,3);
    uVar8 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + iVar12) = uVar8;
    auVar71._0_4_ = auVar58._0_4_ + (float)uVar19;
    auVar71._4_4_ = auVar58._4_4_ + (float)uVar1;
    auVar71._8_4_ = auVar58._8_4_ + (float)uVar2;
    auVar71._12_4_ = auVar58._12_4_ + (float)uVar3;
    auVar71._16_4_ = auVar58._16_4_ + (float)uVar4;
    auVar71._20_4_ = auVar58._20_4_ + (float)uVar5;
    auVar71._24_4_ = auVar58._24_4_ + (float)uVar6;
    auVar71._28_4_ = auVar58._28_4_ + (float)uVar7;
  }
  else {
    auVar71._0_4_ = auVar58._0_4_ + (float)uVar19;
    auVar71._4_4_ = auVar58._4_4_ + (float)uVar1;
    auVar71._8_4_ = auVar58._8_4_ + (float)uVar2;
    auVar71._12_4_ = auVar58._12_4_ + (float)uVar3;
    auVar71._16_4_ = auVar58._16_4_ + (float)uVar4;
    auVar71._20_4_ = auVar58._20_4_ + (float)uVar5;
    auVar71._24_4_ = auVar58._24_4_ + (float)uVar6;
    auVar71._28_4_ = auVar58._28_4_ + (float)uVar7;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar61) = auVar71._0_4_;
  }
  auVar67 = auVar71._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar19;
  }
  if ((uVar11 & 4) != 0) {
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar30) = uVar19;
  }
  if ((uVar11 & 8) == 0) {
    auVar42 = vdivps_avx(auVar66,auVar60);
  }
  else {
    uVar19 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar55) = uVar19;
    auVar42 = vdivps_avx(auVar66,auVar60);
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar62) = auVar71._16_4_;
  }
  auVar67 = auVar71._16_16_;
  if ((uVar11 & 0x20) != 0) {
    iVar12 = vextractps_avx(auVar57,1);
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar19;
  }
  if ((uVar11 & 0x40) != 0) {
    iVar12 = vextractps_avx(auVar57,2);
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar19;
  }
  uVar7 = ~uVar65 & (uint)((float)(~auVar34._28_4_ & auVar42._28_4_) * fVar100);
  uVar6 = ~uVar64 & (uint)((float)(~auVar34._24_4_ & auVar42._24_4_) * fVar99);
  uVar5 = ~uVar63 & (uint)((float)(~auVar34._20_4_ & auVar42._20_4_) * fVar98);
  uVar4 = ~uVar40 & (uint)((float)(~auVar34._16_4_ & auVar42._16_4_) * fVar97);
  uVar3 = ~uVar24 & (uint)((float)(~auVar34._12_4_ & auVar42._12_4_) * fVar96);
  uVar2 = ~uVar23 & (uint)((float)(~auVar34._8_4_ & auVar42._8_4_) * fVar95);
  uVar1 = ~uVar17 & (uint)((float)(~auVar34._4_4_ & auVar42._4_4_) * fVar94);
  uVar19 = ~uVar20 & (uint)((float)(~auVar34._0_4_ & auVar42._0_4_) * fVar93);
  if (cVar14 < '\0') {
    iVar12 = vextractps_avx(auVar57,3);
    uVar8 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar8;
    auVar53._0_4_ = auVar33._0_4_ + (float)uVar19;
    auVar53._4_4_ = auVar33._4_4_ + (float)uVar1;
    auVar53._8_4_ = auVar33._8_4_ + (float)uVar2;
    auVar53._12_4_ = auVar33._12_4_ + (float)uVar3;
    auVar53._16_4_ = auVar33._16_4_ + (float)uVar4;
    auVar53._20_4_ = auVar33._20_4_ + (float)uVar5;
    auVar53._24_4_ = auVar33._24_4_ + (float)uVar6;
    auVar53._28_4_ = auVar33._28_4_ + (float)uVar7;
  }
  else {
    auVar53._0_4_ = auVar33._0_4_ + (float)uVar19;
    auVar53._4_4_ = auVar33._4_4_ + (float)uVar1;
    auVar53._8_4_ = auVar33._8_4_ + (float)uVar2;
    auVar53._12_4_ = auVar33._12_4_ + (float)uVar3;
    auVar53._16_4_ = auVar33._16_4_ + (float)uVar4;
    auVar53._20_4_ = auVar33._20_4_ + (float)uVar5;
    auVar53._24_4_ = auVar33._24_4_ + (float)uVar6;
    auVar53._28_4_ = auVar33._28_4_ + (float)uVar7;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar61) = auVar53._0_4_;
  }
  auVar67 = auVar53._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar19;
  }
  if ((uVar11 & 4) != 0) {
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar30) = uVar19;
  }
  if ((uVar11 & 8) != 0) {
    uVar19 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar55) = uVar19;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar62) = auVar53._16_4_;
  }
  auVar67 = auVar53._16_16_;
  if ((uVar11 & 0x20) != 0) {
    iVar12 = vextractps_avx(auVar57,1);
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar19;
  }
  if ((uVar11 & 0x40) != 0) {
    iVar12 = vextractps_avx(auVar57,2);
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar19;
  }
  if (cVar14 < '\0') {
    iVar12 = vextractps_avx(auVar57,3);
    uVar19 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar19;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar61) = auVar43._0_4_;
  }
  if ((uVar11 & 2) != 0) {
    uVar19 = vextractps_avx(auVar43,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar19;
  }
  if ((uVar11 & 4) != 0) {
    uVar19 = vextractps_avx(auVar43,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar19;
  }
  if ((uVar11 & 8) != 0) {
    uVar19 = vextractps_avx(auVar43,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar55) = uVar19;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar62) = auVar54._0_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar57,1);
    uVar19 = vextractps_avx(auVar54,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar19;
  }
  if ((uVar11 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar57,2);
    uVar19 = vextractps_avx(auVar54,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar19;
  }
  if (cVar14 < '\0') {
    iVar13 = vextractps_avx(auVar57,3);
    *(int *)(param_1 + 0xc + (longlong)iVar13) = auVar54._12_4_;
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx @ 1402efb60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsScaleWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               longlong param_5,uint param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined1 (*pauVar25) [32];
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  uint uVar62;
  undefined1 auVar61 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar63 [32];
  int iVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  float fVar79;
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar86 [16];
  undefined1 auVar85 [32];
  int iVar88;
  int iVar89;
  undefined1 auVar87 [16];
  int iVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  int local_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  int local_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auVar43 [32];
  undefined1 auVar96 [32];
  
  uVar23 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar23 = param_6;
  }
  auVar56 = in_ZMM2._0_16_;
  if ((int)(uVar23 & 0xfffffff8) < 1) {
    uVar30 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    auVar86 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar18 = vshufps_avx(auVar56,auVar56,0);
    pauVar25 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar30 = 0;
    do {
      auVar68 = pauVar25[-2];
      auVar59._16_16_ = *(undefined1 (*) [16])pauVar25[-2];
      auVar59._0_16_ = *(undefined1 (*) [16])(pauVar25[-2] + 0x10);
      auVar59 = vblendps_avx(auVar68,auVar59,0x24);
      uVar1 = *(undefined4 *)(pauVar25[-1] + 4);
      auVar83._4_4_ = uVar1;
      auVar83._0_4_ = uVar1;
      auVar83._8_4_ = uVar1;
      auVar83._12_4_ = uVar1;
      uVar1 = *(undefined4 *)(pauVar25[-1] + 8);
      auVar83._20_4_ = uVar1;
      auVar83._16_4_ = uVar1;
      auVar83._24_4_ = uVar1;
      auVar83._28_4_ = uVar1;
      auVar44 = vpermilps_avx(auVar59,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar66._16_16_ = *(undefined1 (*) [16])*pauVar25;
      auVar66._0_16_ = *(undefined1 (*) [16])(*pauVar25 + 0x10);
      auVar59 = vblendps_avx(auVar66,*pauVar25,0x44);
      auVar43 = vpermilps_avx(auVar59,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar41 = vshufps_avx(*(undefined1 (*) [16])(pauVar25[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar25[-1] + 0x10),0xec);
      uVar1 = *(undefined4 *)(pauVar25[-1] + 0x14);
      auVar58._20_4_ = uVar1;
      auVar58._16_4_ = uVar1;
      auVar58._24_4_ = uVar1;
      auVar58._28_4_ = uVar1;
      auVar58._0_16_ = auVar41;
      auVar59 = vblendps_avx(auVar44,auVar83,0x88);
      auVar44 = vblendps_avx(auVar43,auVar58,0x13);
      auVar43 = vblendps_avx(pauVar25[-1],auVar68,0x24);
      auVar68 = vshufps_avx(auVar66,*pauVar25,0xc4);
      auVar43 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(pauVar25[-2] + 0x10)),auVar43,0x21);
      auVar40 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + *(int *)(pauVar25[-2] + 4))),
                            (uint)*(byte *)(param_4 + *(int *)(pauVar25[-2] + 0x10)),1);
      local_280 = auVar86._0_4_;
      iStack_27c = auVar86._4_4_;
      iStack_278 = auVar86._8_4_;
      iStack_274 = auVar86._12_4_;
      auVar41._0_4_ = auVar59._0_4_ + local_280;
      auVar41._4_4_ = auVar59._4_4_ + iStack_27c;
      auVar41._8_4_ = auVar59._8_4_ + iStack_278;
      auVar41._12_4_ = auVar59._12_4_ + iStack_274;
      auVar52._0_4_ = auVar44._0_4_ + local_280;
      auVar52._4_4_ = auVar44._4_4_ + iStack_27c;
      auVar52._8_4_ = auVar44._8_4_ + iStack_278;
      auVar52._12_4_ = auVar44._12_4_ + iStack_274;
      auVar57._0_4_ = auVar59._16_4_ + local_280;
      auVar57._4_4_ = auVar59._20_4_ + iStack_27c;
      auVar57._8_4_ = auVar59._24_4_ + iStack_278;
      auVar57._12_4_ = auVar59._28_4_ + iStack_274;
      auVar15._0_4_ = auVar44._16_4_ + local_280;
      auVar15._4_4_ = auVar44._20_4_ + iStack_27c;
      auVar15._8_4_ = auVar44._24_4_ + iStack_278;
      auVar15._12_4_ = auVar44._28_4_ + iStack_274;
      auVar40 = vpinsrb_avx(auVar40,(uint)*(byte *)(param_4 + *(int *)(pauVar25[-2] + 0x1c)),2);
      auVar49 = vpslld_avx(auVar52,4);
      auVar65 = vpslld_avx(auVar41,4);
      auVar50 = vpinsrb_avx(auVar40,(uint)*(byte *)(param_4 + *(int *)(pauVar25[-1] + 8)),3);
      auVar51 = vpinsrb_avx(auVar50,(uint)*(byte *)(param_4 + *(int *)(pauVar25[-1] + 0x14)),4);
      lVar35 = (longlong)auVar49._0_4_;
      lVar36 = (longlong)auVar65._0_4_;
      lVar27 = (longlong)auVar49._4_4_;
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + lVar27)),0x10);
      auVar52 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x10);
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x10);
      lVar38 = (longlong)auVar65._4_4_;
      lVar27 = (longlong)auVar65._8_4_;
      lVar28 = (longlong)auVar65._12_4_;
      lVar35 = (longlong)auVar49._8_4_;
      lVar33 = (longlong)auVar49._12_4_;
      auVar49 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + lVar38)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar35)),0x20);
      auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x20);
      auVar65 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x10);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar94 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x20);
      auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + *(int *)*pauVar25),5);
      auVar87 = vpslld_avx(auVar15,4);
      auVar57 = vpslld_avx(auVar57,4);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar33)),0x30);
      lVar36 = (longlong)auVar57._0_4_;
      auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_1 + lVar28)),0x30);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + 4 + lVar33)),0x30);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x30);
      lVar35 = (longlong)auVar57._4_4_;
      lVar37 = (longlong)auVar57._8_4_;
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 8 + lVar33)),0x30);
      auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x30);
      lVar39 = (longlong)auVar57._12_4_;
      auVar57 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + *(int *)(*pauVar25 + 0xc)),6);
      auVar15 = vpinsrb_avx(auVar57,(uint)*(byte *)(param_4 + *(int *)(*pauVar25 + 0x18)),7);
      auVar57 = vpmovzxbd_avx(auVar50);
      auVar50 = vpslld_avx(auVar57,2);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + (ulonglong)auVar50._0_4_)),
                              ZEXT416(*(uint *)(param_5 + (ulonglong)auVar50._4_4_)),0x10);
      lVar33 = (longlong)auVar87._0_4_;
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar50._8_4_)),0x20);
      auVar15 = vpshufd_avx(auVar15,0x55);
      auVar15 = vpmovzxbd_avx(auVar15);
      auVar51 = vpslld_avx(auVar15,2);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar50._12_4_)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + (ulonglong)auVar51._0_4_)),
                              ZEXT416(*(uint *)(param_5 + (ulonglong)auVar51._4_4_)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar51._8_4_)),0x20);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar51._12_4_)),0x30);
      lVar38 = (longlong)auVar87._4_4_;
      lVar28 = (longlong)auVar87._8_4_;
      lVar27 = (longlong)auVar87._12_4_;
      auVar67._16_16_ = auVar41;
      auVar67._0_16_ = auVar49;
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + lVar38)),0x10);
      auVar71._16_16_ = auVar52;
      auVar71._0_16_ = auVar65;
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      auVar52 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + lVar35)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar27)),0x30);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + lVar37)),0x20);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + lVar39)),0x30);
      auVar53._16_16_ = auVar41;
      auVar53._0_16_ = auVar52;
      auVar49 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x10);
      auVar65 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x10);
      auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 4 + lVar37)),0x20);
      auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x30);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x30);
      auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x10);
      auVar51 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x10);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      auVar51 = vinsertps_avx(auVar51,ZEXT416(*(uint *)(param_1 + 8 + lVar37)),0x20);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x30);
      auVar92._16_16_ = auVar49;
      auVar92._0_16_ = auVar65;
      auVar51 = vinsertps_avx(auVar51,ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x30);
      auVar42._16_16_ = auVar40;
      auVar42._0_16_ = auVar94;
      auVar63._16_16_ = auVar50;
      auVar63._0_16_ = auVar51;
      auVar53 = vsubps_avx(auVar67,auVar53);
      auVar58 = vsubps_avx(auVar71,auVar92);
      auVar43 = vshufps_avx(auVar43,pauVar25[-1],0xc2);
      auVar42 = vsubps_avx(auVar42,auVar63);
      auVar43 = vblendps_avx(auVar43,auVar68,0xe0);
      auVar68._0_4_ =
           auVar53._0_4_ * auVar53._0_4_ + auVar58._0_4_ * auVar58._0_4_ +
           auVar42._0_4_ * auVar42._0_4_;
      auVar68._4_4_ =
           auVar53._4_4_ * auVar53._4_4_ + auVar58._4_4_ * auVar58._4_4_ +
           auVar42._4_4_ * auVar42._4_4_;
      auVar68._8_4_ =
           auVar53._8_4_ * auVar53._8_4_ + auVar58._8_4_ * auVar58._8_4_ +
           auVar42._8_4_ * auVar42._8_4_;
      auVar68._12_4_ =
           auVar53._12_4_ * auVar53._12_4_ + auVar58._12_4_ * auVar58._12_4_ +
           auVar42._12_4_ * auVar42._12_4_;
      auVar68._16_4_ =
           auVar53._16_4_ * auVar53._16_4_ + auVar58._16_4_ * auVar58._16_4_ +
           auVar42._16_4_ * auVar42._16_4_;
      auVar68._20_4_ =
           auVar53._20_4_ * auVar53._20_4_ + auVar58._20_4_ * auVar58._20_4_ +
           auVar42._20_4_ * auVar42._20_4_;
      auVar68._24_4_ =
           auVar53._24_4_ * auVar53._24_4_ + auVar58._24_4_ * auVar58._24_4_ +
           auVar42._24_4_ * auVar42._24_4_;
      auVar68._28_4_ =
           auVar53._28_4_ * auVar53._28_4_ + auVar58._28_4_ * auVar58._28_4_ +
           auVar42._28_4_ * auVar42._28_4_;
      uVar1 = *(undefined4 *)(param_1 + 0xc + lVar36);
      auVar68 = vsqrtps_avx(auVar68);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar35);
      auVar53 = vdivps_avx(auVar53,auVar68);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar37);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar39);
      auVar58 = vdivps_avx(auVar58,auVar68);
      auVar42 = vdivps_avx(auVar42,auVar68);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar33);
      auVar80._0_4_ = auVar57._0_4_ * auVar43._0_4_;
      auVar80._4_4_ = auVar57._4_4_ * auVar43._4_4_;
      auVar80._8_4_ = auVar57._8_4_ * auVar43._8_4_;
      auVar80._12_4_ = auVar57._12_4_ * auVar43._12_4_;
      auVar80._16_4_ = auVar15._0_4_ * auVar43._16_4_;
      auVar80._20_4_ = auVar15._4_4_ * auVar43._20_4_;
      auVar80._24_4_ = auVar15._8_4_ * auVar43._24_4_;
      auVar80._28_4_ = auVar15._12_4_ * auVar43._28_4_;
      auVar63 = vsubps_avx(auVar68,auVar80);
      auVar68 = vcmpps_avx(auVar68,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar43 = vblendvps_avx(auVar53,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar68);
      local_2a0 = auVar18._0_4_;
      fStack_29c = auVar18._4_4_;
      fStack_298 = auVar18._8_4_;
      fStack_294 = auVar18._12_4_;
      fVar104 = auVar63._0_4_ * local_2a0;
      fVar105 = auVar63._4_4_ * fStack_29c;
      fVar106 = auVar63._8_4_ * fStack_298;
      fVar107 = auVar63._12_4_ * fStack_294;
      local_2a0 = auVar63._16_4_ * local_2a0;
      fStack_29c = auVar63._20_4_ * fStack_29c;
      fStack_298 = auVar63._24_4_ * fStack_298;
      fStack_294 = auVar63._28_4_ * fStack_294;
      auVar53 = vcmpps_avx(auVar63,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar29 = auVar53._0_4_;
      uVar20 = auVar53._4_4_;
      uVar21 = auVar53._8_4_;
      uVar26 = auVar53._12_4_;
      uVar31 = auVar53._16_4_;
      uVar32 = auVar53._20_4_;
      uVar34 = auVar53._24_4_;
      uVar62 = auVar53._28_4_;
      auVar94._0_4_ = auVar52._0_4_ + (float)(~uVar29 & (uint)(auVar43._0_4_ * fVar104));
      auVar94._4_4_ = auVar52._4_4_ + (float)(~uVar20 & (uint)(auVar43._4_4_ * fVar105));
      auVar94._8_4_ = auVar52._8_4_ + (float)(~uVar21 & (uint)(auVar43._8_4_ * fVar106));
      auVar94._12_4_ = auVar52._12_4_ + (float)(~uVar26 & (uint)(auVar43._12_4_ * fVar107));
      auVar96._16_4_ = auVar41._0_4_ + (float)(~uVar31 & (uint)(auVar43._16_4_ * local_2a0));
      auVar96._0_16_ = auVar94;
      auVar96._20_4_ = auVar41._4_4_ + (float)(~uVar32 & (uint)(auVar43._20_4_ * fStack_29c));
      auVar96._24_4_ = auVar41._8_4_ + (float)(~uVar34 & (uint)(auVar43._24_4_ * fStack_298));
      auVar96._28_4_ = auVar41._12_4_ + (float)(~uVar62 & (uint)(auVar43._28_4_ * fStack_294));
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar38);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar28);
      uVar8 = *(undefined4 *)(param_1 + 0xc + lVar27);
      *(float *)(param_1 + lVar36) = auVar94._0_4_;
      uVar9 = vextractps_avx(auVar94,1);
      *(undefined4 *)(param_1 + lVar35) = uVar9;
      uVar9 = vextractps_avx(auVar94,2);
      *(undefined4 *)(param_1 + lVar37) = uVar9;
      uVar9 = vextractps_avx(auVar94,3);
      *(undefined4 *)(param_1 + lVar39) = uVar9;
      auVar41 = auVar96._16_16_;
      *(float *)(param_1 + lVar33) = auVar96._16_4_;
      uVar9 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + lVar38) = uVar9;
      uVar9 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + lVar28) = uVar9;
      auVar40._0_4_ =
           auVar65._0_4_ +
           (float)(~uVar29 & (uint)(fVar104 * (float)(~auVar68._0_4_ & auVar58._0_4_)));
      auVar40._4_4_ =
           auVar65._4_4_ +
           (float)(~uVar20 & (uint)(fVar105 * (float)(~auVar68._4_4_ & auVar58._4_4_)));
      auVar40._8_4_ =
           auVar65._8_4_ +
           (float)(~uVar21 & (uint)(fVar106 * (float)(~auVar68._8_4_ & auVar58._8_4_)));
      auVar40._12_4_ =
           auVar65._12_4_ +
           (float)(~uVar26 & (uint)(fVar107 * (float)(~auVar68._12_4_ & auVar58._12_4_)));
      auVar43._16_4_ =
           auVar49._0_4_ +
           (float)(~uVar31 & (uint)(local_2a0 * (float)(~auVar68._16_4_ & auVar58._16_4_)));
      auVar43._0_16_ = auVar40;
      auVar43._20_4_ =
           auVar49._4_4_ +
           (float)(~uVar32 & (uint)(fStack_29c * (float)(~auVar68._20_4_ & auVar58._20_4_)));
      auVar43._24_4_ =
           auVar49._8_4_ +
           (float)(~uVar34 & (uint)(fStack_298 * (float)(~auVar68._24_4_ & auVar58._24_4_)));
      auVar43._28_4_ =
           auVar49._12_4_ +
           (float)(~uVar62 & (uint)(fStack_294 * (float)(~auVar68._28_4_ & auVar58._28_4_)));
      uVar9 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + lVar27) = uVar9;
      *(float *)(param_1 + 4 + lVar36) = auVar40._0_4_;
      uVar9 = vextractps_avx(auVar40,1);
      *(undefined4 *)(param_1 + 4 + lVar35) = uVar9;
      uVar9 = vextractps_avx(auVar40,2);
      *(undefined4 *)(param_1 + 4 + lVar37) = uVar9;
      uVar9 = vextractps_avx(auVar40,3);
      *(undefined4 *)(param_1 + 4 + lVar39) = uVar9;
      auVar41 = auVar43._16_16_;
      *(float *)(param_1 + 4 + lVar33) = auVar43._16_4_;
      uVar9 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + 4 + lVar38) = uVar9;
      uVar9 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar9;
      local_260 = auVar51._0_4_;
      fStack_25c = auVar51._4_4_;
      fStack_258 = auVar51._8_4_;
      fStack_254 = auVar51._12_4_;
      fStack_250 = auVar50._0_4_;
      fStack_24c = auVar50._4_4_;
      fStack_248 = auVar50._8_4_;
      fStack_244 = auVar50._12_4_;
      auVar49._0_4_ =
           (float)(~uVar29 & (uint)((float)(~auVar68._0_4_ & auVar42._0_4_) * fVar104)) + local_260;
      auVar49._4_4_ =
           (float)(~uVar20 & (uint)((float)(~auVar68._4_4_ & auVar42._4_4_) * fVar105)) + fStack_25c
      ;
      auVar49._8_4_ =
           (float)(~uVar21 & (uint)((float)(~auVar68._8_4_ & auVar42._8_4_) * fVar106)) + fStack_258
      ;
      auVar49._12_4_ =
           (float)(~uVar26 & (uint)((float)(~auVar68._12_4_ & auVar42._12_4_) * fVar107)) +
           fStack_254;
      auVar93._16_4_ =
           (float)(~uVar31 & (uint)((float)(~auVar68._16_4_ & auVar42._16_4_) * local_2a0)) +
           fStack_250;
      auVar93._0_16_ = auVar49;
      auVar93._20_4_ =
           (float)(~uVar32 & (uint)((float)(~auVar68._20_4_ & auVar42._20_4_) * fStack_29c)) +
           fStack_24c;
      auVar93._24_4_ =
           (float)(~uVar34 & (uint)((float)(~auVar68._24_4_ & auVar42._24_4_) * fStack_298)) +
           fStack_248;
      auVar93._28_4_ =
           (float)(~uVar62 & (uint)((float)(~auVar68._28_4_ & auVar42._28_4_) * fStack_294)) +
           fStack_244;
      uVar9 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar9;
      *(float *)(param_1 + 8 + lVar36) = auVar49._0_4_;
      uVar9 = vextractps_avx(auVar49,1);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar9;
      uVar9 = vextractps_avx(auVar49,2);
      *(undefined4 *)(param_1 + 8 + lVar37) = uVar9;
      uVar9 = vextractps_avx(auVar49,3);
      *(undefined4 *)(param_1 + 8 + lVar39) = uVar9;
      auVar41 = auVar93._16_16_;
      *(float *)(param_1 + 8 + lVar33) = auVar93._16_4_;
      uVar9 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + 8 + lVar38) = uVar9;
      uVar9 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar9;
      uVar9 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar9;
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar1;
      *(undefined4 *)(param_1 + 0xc + lVar35) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar37) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar39) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar38) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar7;
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar8;
      pauVar25 = pauVar25 + 3;
      uVar29 = (int)uVar30 + 8;
      uVar30 = (ulonglong)uVar29;
    } while ((int)uVar29 < (int)(uVar23 & 0xfffffff8));
    vperm2f128_avx(auVar59,auVar44,0x31);
    if ((int)param_6 <= (int)uVar29) {
      return;
    }
  }
  auVar86 = vpshufd_avx(ZEXT416((uint)uVar30),0);
  auVar44._16_16_ = auVar86;
  auVar44._0_16_ = auVar86;
  auVar41 = vpshufd_avx(ZEXT416(param_6),0);
  auVar52 = SUB3216(auVar44 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar40 = SUB3216(auVar44 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar86 = vpcmpgtd_avx(auVar41,auVar40);
  auVar18 = vpcmpgtd_avx(auVar41,auVar52);
  auVar45._16_16_ = auVar86;
  auVar45._0_16_ = auVar18;
  pauVar25 = (undefined1 (*) [32])(param_2 + uVar30 * 0xc);
  uVar23 = vmovmskps_avx(auVar45);
  if (uVar23 == 0xff) {
    auVar68 = pauVar25[2];
    auVar47._16_16_ = *(undefined1 (*) [16])*pauVar25;
    auVar47._0_16_ = *(undefined1 (*) [16])(*pauVar25 + 0x10);
    auVar59 = vblendps_avx(*pauVar25,auVar47,0x24);
    auVar44 = vpermilps_avx(auVar59,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar1 = *(undefined4 *)(pauVar25[1] + 4);
    auVar102._4_4_ = uVar1;
    auVar102._0_4_ = uVar1;
    auVar102._8_4_ = uVar1;
    auVar102._12_4_ = uVar1;
    uVar1 = *(undefined4 *)(pauVar25[1] + 8);
    auVar102._20_4_ = uVar1;
    auVar102._16_4_ = uVar1;
    auVar102._24_4_ = uVar1;
    auVar102._28_4_ = uVar1;
    auVar98._16_16_ = *(undefined1 (*) [16])pauVar25[2];
    auVar98._0_16_ = *(undefined1 (*) [16])(pauVar25[2] + 0x10);
    auVar59 = vblendps_avx(auVar98,auVar68,0x44);
    auVar43 = vpermilps_avx(auVar59,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar59 = vblendps_avx(auVar44,auVar102,0x88);
    auVar49 = vshufps_avx(*(undefined1 (*) [16])(pauVar25[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar25[1] + 0x10),0xec);
    uVar1 = *(undefined4 *)(pauVar25[1] + 0x14);
    auVar48._20_4_ = uVar1;
    auVar48._16_4_ = uVar1;
    auVar48._24_4_ = uVar1;
    auVar48._28_4_ = uVar1;
    auVar48._0_16_ = auVar49;
    auVar44 = vblendps_avx(auVar43,auVar48,0x13);
    auVar46._16_16_ = auVar44._0_16_;
    auVar46._0_16_ = auVar59._0_16_;
    auVar43 = vperm2f128_avx(auVar59,auVar44,0x31);
    auVar59 = vblendps_avx(pauVar25[1],*pauVar25,0x24);
    auVar59 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar25 + 0x10)),auVar59,0x21);
    auVar59 = vshufps_avx(auVar59,pauVar25[1],0xc2);
    auVar44 = vshufps_avx(auVar98,auVar68,0xc4);
    auVar59 = vblendps_avx(auVar59,auVar44,0xe0);
  }
  else {
    auVar49 = vpcmpgtd_avx(auVar41,auVar40);
    auVar65 = vpcmpgtd_avx(auVar41,auVar52);
    uVar29 = auVar65._0_4_;
    auVar50._0_4_ = uVar29 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar20 = auVar65._4_4_;
    auVar50._4_4_ = uVar20 & _UNK_150b50b04;
    uVar21 = auVar65._8_4_;
    auVar50._8_4_ = uVar21 & _UNK_150b50b08;
    uVar26 = auVar65._12_4_;
    auVar50._12_4_ = uVar26 & _UNK_150b50b0c;
    uVar31 = auVar49._0_4_;
    vextractps_avx(auVar50,1);
    vextractps_avx(auVar50,2);
    vextractps_avx(auVar50,3);
    auVar65._0_4_ = uVar29 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar65._4_4_ = uVar20 & _UNK_150b50b24;
    auVar65._8_4_ = uVar21 & _UNK_150b50b28;
    auVar65._12_4_ = uVar26 & _UNK_150b50b2c;
    vextractps_avx(auVar65,1);
    vextractps_avx(auVar65,2);
    vextractps_avx(auVar65,3);
    auVar51._0_4_ = uVar29 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar51._4_4_ = uVar20 & _UNK_150b50b44;
    auVar51._8_4_ = uVar21 & _UNK_150b50b48;
    auVar51._12_4_ = uVar26 & _UNK_150b50b4c;
    vextractps_avx(auVar51,1);
    vextractps_avx(auVar51,2);
    auVar46 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar25 + (uVar31 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar25)));
    vextractps_avx(auVar51,3);
    auVar43 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar25 + (uVar31 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar25 + auVar65._0_4_))));
    auVar59 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar25 + (uVar31 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar25 + auVar51._0_4_))));
  }
  auVar40 = vpcmpgtd_avx(auVar41,auVar40);
  auVar15 = vpcmpgtd_avx(auVar41,auVar52);
  auVar69._16_16_ = auVar40;
  auVar69._0_16_ = auVar15;
  auVar44 = vmaskmovps_avx(auVar69,auVar46);
  auVar43 = vmaskmovps_avx(auVar69,auVar43);
  auVar59 = vmaskmovps_avx(auVar69,auVar59);
  local_220 = auVar43._0_4_;
  uStack_21c = auVar43._4_4_;
  uStack_218 = auVar43._8_4_;
  uStack_214 = auVar43._12_4_;
  uStack_210 = auVar43._16_4_;
  uStack_20c = auVar43._20_4_;
  uStack_208 = auVar43._24_4_;
  uStack_204 = auVar43._28_4_;
  uVar29 = auVar15._0_4_;
  uVar20 = auVar15._4_4_;
  uVar21 = auVar15._8_4_;
  uVar26 = auVar15._12_4_;
  uVar31 = auVar40._0_4_;
  uVar32 = auVar40._4_4_;
  uVar34 = auVar40._8_4_;
  uVar62 = auVar40._12_4_;
  auVar41 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + (int)(uVar29 & local_220))),
                        (uint)*(byte *)(param_4 + (int)(uVar20 & uStack_21c)),1);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar21 & uStack_218)),2);
  auVar16 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar26 & uStack_214)),3);
  auVar41 = vpinsrb_avx(auVar16,(uint)*(byte *)(param_4 + (int)(uVar31 & uStack_210)),4);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar32 & uStack_20c)),5);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar34 & uStack_208)),6);
  auVar17 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar62 & uStack_204)),7);
  auVar41 = vpshufd_avx(ZEXT416(param_7),0);
  iStack_230 = auVar44._16_4_;
  iVar22 = auVar41._0_4_;
  auVar87._0_4_ = iVar22 + iStack_230;
  iStack_22c = auVar44._20_4_;
  iVar88 = auVar41._4_4_;
  auVar87._4_4_ = iVar88 + iStack_22c;
  iStack_228 = auVar44._24_4_;
  iVar89 = auVar41._8_4_;
  auVar87._8_4_ = iVar89 + iStack_228;
  iStack_224 = auVar44._28_4_;
  iVar90 = auVar41._12_4_;
  auVar87._12_4_ = iVar90 + iStack_224;
  auVar10._0_4_ = iVar22 + uStack_210;
  auVar10._4_4_ = iVar88 + uStack_20c;
  auVar10._8_4_ = iVar89 + uStack_208;
  auVar10._12_4_ = iVar90 + uStack_204;
  auVar41 = vpslld_avx(auVar87,4);
  auVar11 = vpand_avx(auVar40,auVar41);
  lVar27 = param_1 + auVar11._0_4_;
  auVar91._0_4_ = uVar29 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
  auVar91._4_4_ = uVar20 & _UNK_150b50d44;
  auVar91._8_4_ = uVar21 & _UNK_150b50d48;
  auVar91._12_4_ = uVar26 & _UNK_150b50d4c;
  auVar97._0_4_ = uVar29 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar97._4_4_ = uVar20 & _UNK_150b50d64;
  auVar97._8_4_ = uVar21 & _UNK_150b50d68;
  auVar97._12_4_ = uVar26 & _UNK_150b50d6c;
  auVar82 = vpslld_avx(auVar10,4);
  auVar12 = vpand_avx(auVar40,auVar82);
  lVar35 = param_1 + auVar12._0_4_;
  local_240 = auVar44._0_4_;
  auVar13._0_4_ = iVar22 + local_240;
  iStack_23c = auVar44._4_4_;
  auVar13._4_4_ = iVar88 + iStack_23c;
  iStack_238 = auVar44._8_4_;
  auVar13._8_4_ = iVar89 + iStack_238;
  iStack_234 = auVar44._12_4_;
  auVar13._12_4_ = iVar90 + iStack_234;
  auVar41 = vpslld_avx(auVar13,4);
  auVar13 = vpand_avx(auVar41,auVar15);
  auVar100._0_4_ = uVar29 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar100._4_4_ = uVar20 & _UNK_150b50d84;
  auVar100._8_4_ = uVar21 & _UNK_150b50d88;
  auVar100._12_4_ = uVar26 & _UNK_150b50d8c;
  lVar36 = param_1 + auVar11._4_4_;
  auVar41 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d50) + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d54) + lVar36)),0x10);
  auVar52 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d70) + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d74) + lVar36)),0x10);
  lVar27 = param_1 + auVar12._4_4_;
  auVar40 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d50) + lVar35)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d54) + lVar27)),0x10);
  auVar49 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d70) + lVar35)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d74) + lVar27)),0x10);
  auVar65 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d90) + lVar35)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d94) + lVar27)),0x10);
  lVar27 = param_1 + auVar11._8_4_;
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d58) + lVar27)),
                          0x20);
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d78) + lVar27)),
                          0x20);
  lVar27 = param_1 + auVar12._8_4_;
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d58) + lVar27)),
                          0x20);
  auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d78) + lVar27)),
                          0x20);
  auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d98) + lVar27)),
                          0x20);
  lVar27 = param_1 + auVar11._12_4_;
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d5c) + lVar27)),
                          0x30);
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d7c) + lVar27)),
                          0x30);
  lVar27 = param_1 + auVar12._12_4_;
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d5c) + lVar27)),
                          0x30);
  auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d7c) + lVar27)),
                          0x30);
  auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d9c) + lVar27)),
                          0x30);
  lVar27 = param_1 + auVar13._0_4_;
  uVar26 = vextractps_avx(auVar91,1);
  uVar29 = vextractps_avx(auVar91,2);
  uVar20 = vextractps_avx(auVar91,3);
  uVar31 = vextractps_avx(auVar97,1);
  uVar34 = vextractps_avx(auVar97,2);
  uVar21 = vextractps_avx(auVar97,3);
  lVar35 = param_1 + auVar13._4_4_;
  auVar94 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar26 + lVar35)),0x10);
  auVar57 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar97._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar31 + lVar35)),0x10);
  auVar14._0_4_ = iVar22 + local_220;
  auVar14._4_4_ = iVar88 + uStack_21c;
  auVar14._8_4_ = iVar89 + uStack_218;
  auVar14._12_4_ = iVar90 + uStack_214;
  auVar95 = vpslld_avx(auVar14,4);
  auVar14 = vpand_avx(auVar95,auVar15);
  lVar27 = param_1 + auVar14._0_4_;
  lVar35 = param_1 + auVar14._4_4_;
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar26 + lVar35)),0x10);
  auVar50 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar97._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar31 + lVar35)),0x10);
  uVar31 = vextractps_avx(auVar100,1);
  uVar32 = vextractps_avx(auVar100,2);
  uVar26 = vextractps_avx(auVar100,3);
  auVar51 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar100._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar31 + lVar35)),0x10);
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar11._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar11._4_4_)),0x10);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + auVar11._8_4_)),0x20);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + auVar11._12_4_)),0x30);
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar13._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar13._4_4_)),0x10);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar13._8_4_)),0x20);
  lVar27 = param_1 + auVar13._8_4_;
  auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)((ulonglong)uVar29 + lVar27)),0x20);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)((ulonglong)uVar34 + lVar27)),0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar13._12_4_)),0x30);
  lVar27 = param_1 + auVar13._12_4_;
  auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar27)),0x30);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)((ulonglong)uVar21 + lVar27)),0x30);
  auVar72._16_16_ = auVar87;
  auVar72._0_16_ = auVar10;
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar12._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar12._4_4_)),0x10);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + auVar12._8_4_)),0x20);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + auVar12._12_4_)),0x30);
  auVar54._16_16_ = auVar41;
  auVar54._0_16_ = auVar94;
  auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar14._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar14._4_4_)),0x10);
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + auVar14._8_4_)),0x20);
  lVar27 = param_1 + auVar14._8_4_;
  auVar94 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)uVar29 + lVar27)),0x20);
  auVar15 = vinsertps_avx(auVar50,ZEXT416(*(uint *)((ulonglong)uVar34 + lVar27)),0x20);
  auVar99._16_16_ = auVar52;
  auVar99._0_16_ = auVar57;
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + auVar14._12_4_)),0x30);
  auVar101._16_16_ = auVar87;
  auVar101._0_16_ = auVar41;
  auVar41 = vinsertps_avx(auVar51,ZEXT416(*(uint *)((ulonglong)uVar32 + lVar27)),0x20);
  lVar27 = param_1 + auVar14._12_4_;
  auVar52 = vinsertps_avx(auVar94,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar27)),0x30);
  auVar94 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)uVar21 + lVar27)),0x30);
  auVar103._16_16_ = auVar40;
  auVar103._0_16_ = auVar52;
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)uVar26 + lVar27)),0x30);
  auVar60._16_16_ = auVar49;
  auVar60._0_16_ = auVar94;
  auVar44 = vmaskmovps_avx(auVar69,auVar72);
  auVar43 = vmaskmovps_avx(auVar69,auVar54);
  auVar68 = vmaskmovps_avx(auVar69,auVar99);
  auVar53 = vmaskmovps_avx(auVar69,auVar101);
  auVar58 = vmaskmovps_avx(auVar69,auVar103);
  auVar42 = vmaskmovps_avx(auVar69,auVar60);
  auVar52 = vpshufd_avx(auVar17,0x55);
  auVar52 = vpmovzxbd_avx(auVar52);
  auVar40 = vpmovzxbd_avx(auVar16);
  auVar49 = vpslld_avx(auVar40,2);
  auVar52 = vpslld_avx(auVar52,2);
  auVar40 = vpunpckhdq_avx(auVar52,ZEXT816(0) << 0x20);
  auVar52 = vpmovzxdq_avx(auVar52);
  auVar55._16_16_ = auVar40;
  auVar55._0_16_ = auVar52;
  auVar40 = vpunpckhdq_avx(auVar49,ZEXT816(0) << 0x20);
  auVar52 = vpmovzxdq_avx(auVar49);
  auVar70._16_16_ = auVar40;
  auVar70._0_16_ = auVar52;
  auVar52 = vpmovsxdq_avx(auVar18);
  auVar18 = vpshufd_avx(auVar18,0xfa);
  auVar73._16_16_ = auVar18;
  auVar73._0_16_ = auVar52;
  auVar63 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar70,auVar73);
  auVar18 = vpmovsxdq_avx(auVar86);
  auVar86 = vpshufd_avx(auVar86,0xfa);
  auVar74._16_16_ = auVar86;
  auVar74._0_16_ = auVar18;
  auVar66 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar55,auVar74);
  auVar86 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + auVar66._0_8_)),
                          ZEXT416(*(uint *)(param_5 + auVar66._8_8_)),0x10);
  auVar86 = vinsertps_avx(auVar86,ZEXT416(*(uint *)(param_5 + auVar66._16_8_)),0x20);
  auVar86 = vinsertps_avx(auVar86,ZEXT416(*(uint *)(param_5 + auVar66._24_8_)),0x30);
  auVar18 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + auVar63._0_8_)),
                          ZEXT416(*(uint *)(param_5 + auVar63._8_8_)),0x10);
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_5 + auVar63._16_8_)),0x20);
  auVar44 = vsubps_avx(auVar44,auVar53);
  auVar66 = vsubps_avx(auVar43,auVar58);
  auVar67 = vsubps_avx(auVar68,auVar42);
  auVar81._0_4_ =
       auVar67._0_4_ * auVar67._0_4_ + auVar66._0_4_ * auVar66._0_4_ + auVar44._0_4_ * auVar44._0_4_
  ;
  auVar81._4_4_ =
       auVar67._4_4_ * auVar67._4_4_ + auVar66._4_4_ * auVar66._4_4_ + auVar44._4_4_ * auVar44._4_4_
  ;
  auVar81._8_4_ =
       auVar67._8_4_ * auVar67._8_4_ + auVar66._8_4_ * auVar66._8_4_ + auVar44._8_4_ * auVar44._8_4_
  ;
  auVar81._12_4_ =
       auVar67._12_4_ * auVar67._12_4_ +
       auVar66._12_4_ * auVar66._12_4_ + auVar44._12_4_ * auVar44._12_4_;
  auVar81._16_4_ =
       auVar67._16_4_ * auVar67._16_4_ +
       auVar66._16_4_ * auVar66._16_4_ + auVar44._16_4_ * auVar44._16_4_;
  auVar81._20_4_ =
       auVar67._20_4_ * auVar67._20_4_ +
       auVar66._20_4_ * auVar66._20_4_ + auVar44._20_4_ * auVar44._20_4_;
  auVar81._24_4_ =
       auVar67._24_4_ * auVar67._24_4_ +
       auVar66._24_4_ * auVar66._24_4_ + auVar44._24_4_ * auVar44._24_4_;
  auVar81._28_4_ =
       auVar67._28_4_ * auVar67._28_4_ +
       auVar66._28_4_ * auVar66._28_4_ + auVar44._28_4_ * auVar44._28_4_;
  auVar68 = vsqrtps_avx(auVar81);
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_5 + auVar63._24_8_)),0x30);
  auVar43 = vcmpps_avx(auVar68,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar44 = vdivps_avx(auVar44,auVar68);
  auVar44 = vblendvps_avx(auVar44,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar43);
  local_200 = auVar59._0_4_;
  fStack_1fc = auVar59._4_4_;
  fStack_1f8 = auVar59._8_4_;
  fStack_1f4 = auVar59._12_4_;
  fStack_1f0 = auVar59._16_4_;
  fStack_1ec = auVar59._20_4_;
  fStack_1e8 = auVar59._24_4_;
  fStack_1e4 = auVar59._28_4_;
  auVar75._0_4_ = local_200 * auVar18._0_4_;
  auVar75._4_4_ = fStack_1fc * auVar18._4_4_;
  auVar75._8_4_ = fStack_1f8 * auVar18._8_4_;
  auVar75._12_4_ = fStack_1f4 * auVar18._12_4_;
  auVar75._16_4_ = fStack_1f0 * auVar86._0_4_;
  auVar75._20_4_ = fStack_1ec * auVar86._4_4_;
  auVar75._24_4_ = fStack_1e8 * auVar86._8_4_;
  auVar75._28_4_ = fStack_1e4 * auVar86._12_4_;
  auVar59 = vsubps_avx(auVar68,auVar75);
  auVar56 = vpermilps_avx(auVar56,0);
  fVar104 = auVar59._0_4_ * auVar56._0_4_;
  fVar105 = auVar59._4_4_ * auVar56._4_4_;
  fVar106 = auVar59._8_4_ * auVar56._8_4_;
  fVar107 = auVar59._12_4_ * auVar56._12_4_;
  fVar76 = auVar59._16_4_ * auVar56._0_4_;
  fVar77 = auVar59._20_4_ * auVar56._4_4_;
  fVar78 = auVar59._24_4_ * auVar56._8_4_;
  fVar79 = auVar59._28_4_ * auVar56._12_4_;
  auVar59 = vcmpps_avx(auVar59,ZEXT1632((undefined1  [16])0x0),1);
  uVar29 = auVar59._0_4_;
  uVar20 = auVar59._4_4_;
  uVar21 = auVar59._8_4_;
  uVar26 = auVar59._12_4_;
  uVar31 = auVar59._16_4_;
  uVar32 = auVar59._20_4_;
  uVar34 = auVar59._24_4_;
  uVar62 = auVar59._28_4_;
  auVar56._0_4_ = auVar53._0_4_ + (float)(~uVar29 & (uint)(auVar44._0_4_ * fVar104));
  auVar56._4_4_ = auVar53._4_4_ + (float)(~uVar20 & (uint)(auVar44._4_4_ * fVar105));
  auVar56._8_4_ = auVar53._8_4_ + (float)(~uVar21 & (uint)(auVar44._8_4_ * fVar106));
  auVar56._12_4_ = auVar53._12_4_ + (float)(~uVar26 & (uint)(auVar44._12_4_ * fVar107));
  auVar84._16_4_ = auVar53._16_4_ + (float)(~uVar31 & (uint)(auVar44._16_4_ * fVar76));
  auVar84._0_16_ = auVar56;
  auVar84._20_4_ = auVar53._20_4_ + (float)(~uVar32 & (uint)(auVar44._20_4_ * fVar77));
  auVar84._24_4_ = auVar53._24_4_ + (float)(~uVar34 & (uint)(auVar44._24_4_ * fVar78));
  auVar84._28_4_ = auVar53._28_4_ + (float)(~uVar62 & (uint)(auVar44._28_4_ * fVar79));
  cVar19 = (char)uVar23;
  auVar86 = auVar84._16_16_;
  iVar90 = auVar95._0_4_;
  iVar22 = auVar95._4_4_;
  iVar88 = auVar95._8_4_;
  iVar89 = auVar95._12_4_;
  iVar64 = auVar82._0_4_;
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + iVar90) = auVar56._0_4_;
  }
  if ((uVar23 & 2) != 0) {
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + iVar22) = uVar1;
  }
  if ((uVar23 & 4) != 0) {
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + iVar88) = uVar1;
  }
  if ((uVar23 & 8) == 0) {
    auVar59 = vdivps_avx(auVar66,auVar68);
  }
  else {
    uVar1 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + iVar89) = uVar1;
    auVar59 = vdivps_avx(auVar66,auVar68);
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + iVar64) = auVar84._16_4_;
  }
  if ((uVar23 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar82,1);
    uVar1 = vextractps_avx(auVar86,1);
    *(undefined4 *)(param_1 + iVar24) = uVar1;
  }
  if ((uVar23 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar82,2);
    uVar1 = vextractps_avx(auVar86,2);
    *(undefined4 *)(param_1 + iVar24) = uVar1;
  }
  uVar8 = ~uVar62 & (uint)((float)(~auVar43._28_4_ & auVar59._28_4_) * fVar79);
  uVar7 = ~uVar34 & (uint)((float)(~auVar43._24_4_ & auVar59._24_4_) * fVar78);
  uVar6 = ~uVar32 & (uint)((float)(~auVar43._20_4_ & auVar59._20_4_) * fVar77);
  uVar5 = ~uVar31 & (uint)((float)(~auVar43._16_4_ & auVar59._16_4_) * fVar76);
  uVar4 = ~uVar26 & (uint)((float)(~auVar43._12_4_ & auVar59._12_4_) * fVar107);
  uVar3 = ~uVar21 & (uint)((float)(~auVar43._8_4_ & auVar59._8_4_) * fVar106);
  uVar2 = ~uVar20 & (uint)((float)(~auVar43._4_4_ & auVar59._4_4_) * fVar105);
  uVar1 = ~uVar29 & (uint)((float)(~auVar43._0_4_ & auVar59._0_4_) * fVar104);
  if (cVar19 < '\0') {
    iVar24 = vextractps_avx(auVar82,3);
    uVar9 = vextractps_avx(auVar86,3);
    *(undefined4 *)(param_1 + iVar24) = uVar9;
    auVar85._0_4_ = auVar58._0_4_ + (float)uVar1;
    auVar85._4_4_ = auVar58._4_4_ + (float)uVar2;
    auVar85._8_4_ = auVar58._8_4_ + (float)uVar3;
    auVar85._12_4_ = auVar58._12_4_ + (float)uVar4;
    auVar85._16_4_ = auVar58._16_4_ + (float)uVar5;
    auVar85._20_4_ = auVar58._20_4_ + (float)uVar6;
    auVar85._24_4_ = auVar58._24_4_ + (float)uVar7;
    auVar85._28_4_ = auVar58._28_4_ + (float)uVar8;
  }
  else {
    auVar85._0_4_ = auVar58._0_4_ + (float)uVar1;
    auVar85._4_4_ = auVar58._4_4_ + (float)uVar2;
    auVar85._8_4_ = auVar58._8_4_ + (float)uVar3;
    auVar85._12_4_ = auVar58._12_4_ + (float)uVar4;
    auVar85._16_4_ = auVar58._16_4_ + (float)uVar5;
    auVar85._20_4_ = auVar58._20_4_ + (float)uVar6;
    auVar85._24_4_ = auVar58._24_4_ + (float)uVar7;
    auVar85._28_4_ = auVar58._28_4_ + (float)uVar8;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar90) = auVar85._0_4_;
  }
  auVar56 = auVar85._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar1;
  }
  if ((uVar23 & 4) != 0) {
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar88) = uVar1;
  }
  if ((uVar23 & 8) == 0) {
    auVar59 = vdivps_avx(auVar67,auVar68);
  }
  else {
    uVar1 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar89) = uVar1;
    auVar59 = vdivps_avx(auVar67,auVar68);
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar64) = auVar85._16_4_;
  }
  auVar56 = auVar85._16_16_;
  if ((uVar23 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar82,1);
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar1;
  }
  if ((uVar23 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar82,2);
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar1;
  }
  uVar8 = ~uVar62 & (uint)((float)(~auVar43._28_4_ & auVar59._28_4_) * fVar79);
  uVar7 = ~uVar34 & (uint)((float)(~auVar43._24_4_ & auVar59._24_4_) * fVar78);
  uVar6 = ~uVar32 & (uint)((float)(~auVar43._20_4_ & auVar59._20_4_) * fVar77);
  uVar5 = ~uVar31 & (uint)((float)(~auVar43._16_4_ & auVar59._16_4_) * fVar76);
  uVar4 = ~uVar26 & (uint)((float)(~auVar43._12_4_ & auVar59._12_4_) * fVar107);
  uVar3 = ~uVar21 & (uint)((float)(~auVar43._8_4_ & auVar59._8_4_) * fVar106);
  uVar2 = ~uVar20 & (uint)((float)(~auVar43._4_4_ & auVar59._4_4_) * fVar105);
  uVar1 = ~uVar29 & (uint)((float)(~auVar43._0_4_ & auVar59._0_4_) * fVar104);
  if (cVar19 < '\0') {
    iVar24 = vextractps_avx(auVar82,3);
    uVar9 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar9;
    auVar61._0_4_ = auVar42._0_4_ + (float)uVar1;
    auVar61._4_4_ = auVar42._4_4_ + (float)uVar2;
    auVar61._8_4_ = auVar42._8_4_ + (float)uVar3;
    auVar61._12_4_ = auVar42._12_4_ + (float)uVar4;
    auVar61._16_4_ = auVar42._16_4_ + (float)uVar5;
    auVar61._20_4_ = auVar42._20_4_ + (float)uVar6;
    auVar61._24_4_ = auVar42._24_4_ + (float)uVar7;
    auVar61._28_4_ = auVar42._28_4_ + (float)uVar8;
  }
  else {
    auVar61._0_4_ = auVar42._0_4_ + (float)uVar1;
    auVar61._4_4_ = auVar42._4_4_ + (float)uVar2;
    auVar61._8_4_ = auVar42._8_4_ + (float)uVar3;
    auVar61._12_4_ = auVar42._12_4_ + (float)uVar4;
    auVar61._16_4_ = auVar42._16_4_ + (float)uVar5;
    auVar61._20_4_ = auVar42._20_4_ + (float)uVar6;
    auVar61._24_4_ = auVar42._24_4_ + (float)uVar7;
    auVar61._28_4_ = auVar42._28_4_ + (float)uVar8;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar90) = auVar61._0_4_;
  }
  auVar56 = auVar61._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar1;
  }
  if ((uVar23 & 4) != 0) {
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar88) = uVar1;
  }
  if ((uVar23 & 8) != 0) {
    uVar1 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar89) = uVar1;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar64) = auVar61._16_4_;
  }
  auVar56 = auVar61._16_16_;
  if ((uVar23 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar82,1);
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar1;
  }
  if ((uVar23 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar82,2);
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar1;
  }
  if (cVar19 < '\0') {
    iVar24 = vextractps_avx(auVar82,3);
    uVar1 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar1;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar90) = auVar41._0_4_;
  }
  if ((uVar23 & 2) != 0) {
    uVar1 = vextractps_avx(auVar41,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar1;
  }
  if ((uVar23 & 4) != 0) {
    uVar1 = vextractps_avx(auVar41,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar88) = uVar1;
  }
  if ((uVar23 & 8) != 0) {
    uVar1 = vextractps_avx(auVar41,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar89) = uVar1;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar64) = auVar65._0_4_;
  }
  if ((uVar23 & 0x20) != 0) {
    iVar22 = vextractps_avx(auVar82,1);
    uVar1 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar1;
  }
  if ((uVar23 & 0x40) != 0) {
    iVar22 = vextractps_avx(auVar82,2);
    uVar1 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar1;
  }
  if (cVar19 < '\0') {
    uVar1 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)auVar82._12_4_) = uVar1;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx @ 1402f1170

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 (*pauVar23) [32];
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar33;
  int iVar34;
  undefined1 auVar29 [16];
  int iVar35;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar36 [16];
  undefined1 auVar32 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  uint uVar52;
  undefined1 auVar50 [16];
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar51 [32];
  uint uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [16];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [16];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  int iVar86;
  undefined1 auVar87 [32];
  float fVar88;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar90 [32];
  float fVar95;
  float fVar99;
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  uint local_324;
  int local_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auVar82 [32];
  
  uVar15 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar15 = param_7;
  }
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    local_324 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar79 = vshufps_avx(ZEXT416(param_8),ZEXT416(param_8),0);
    pauVar23 = (undefined1 (*) [32])(param_2 + 0x40);
    local_324 = 0;
    do {
      auVar63 = pauVar23[-2];
      auVar67._16_16_ = *(undefined1 (*) [16])pauVar23[-2];
      auVar67._0_16_ = *(undefined1 (*) [16])(pauVar23[-2] + 0x10);
      auVar67 = vblendps_avx(auVar63,auVar67,0x24);
      uVar1 = *(undefined4 *)(pauVar23[-1] + 4);
      auVar76._4_4_ = uVar1;
      auVar76._0_4_ = uVar1;
      auVar76._8_4_ = uVar1;
      auVar76._12_4_ = uVar1;
      uVar1 = *(undefined4 *)(pauVar23[-1] + 8);
      auVar76._20_4_ = uVar1;
      auVar76._16_4_ = uVar1;
      auVar76._24_4_ = uVar1;
      auVar76._28_4_ = uVar1;
      auVar32 = vpermilps_avx(auVar67,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar71._16_16_ = *(undefined1 (*) [16])*pauVar23;
      auVar71._0_16_ = *(undefined1 (*) [16])(*pauVar23 + 0x10);
      auVar67 = vblendps_avx(auVar71,*pauVar23,0x44);
      auVar31 = vpermilps_avx(auVar67,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar36 = vshufps_avx(*(undefined1 (*) [16])(pauVar23[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar23[-1] + 0x10),0xec);
      uVar1 = *(undefined4 *)(pauVar23[-1] + 0x14);
      auVar41._20_4_ = uVar1;
      auVar41._16_4_ = uVar1;
      auVar41._24_4_ = uVar1;
      auVar41._28_4_ = uVar1;
      auVar41._0_16_ = auVar36;
      auVar67 = vblendps_avx(auVar32,auVar76,0x88);
      auVar32 = vblendps_avx(auVar31,auVar41,0x13);
      auVar31 = vblendps_avx(pauVar23[-1],auVar63,0x24);
      auVar31 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(pauVar23[-2] + 0x10)),auVar31,0x21);
      auVar31 = vshufps_avx(auVar31,pauVar23[-1],0xc2);
      auVar36 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + *(int *)(pauVar23[-2] + 4))),
                            (uint)*(byte *)(param_3 + *(int *)(pauVar23[-2] + 0x10)),1);
      auVar39 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + *(int *)(pauVar23[-2] + 4))),
                            (uint)*(byte *)(param_5 + *(int *)(pauVar23[-2] + 0x10)),1);
      auVar29 = vpinsrb_avx(auVar36,(uint)*(byte *)(param_3 + *(int *)(pauVar23[-2] + 0x1c)),2);
      auVar63 = vshufps_avx(auVar71,*pauVar23,0xc4);
      local_260 = auVar79._0_4_;
      iStack_25c = auVar79._4_4_;
      iStack_258 = auVar79._8_4_;
      iStack_254 = auVar79._12_4_;
      auVar36._0_4_ = local_260 + auVar67._0_4_;
      auVar36._4_4_ = iStack_25c + auVar67._4_4_;
      auVar36._8_4_ = iStack_258 + auVar67._8_4_;
      auVar36._12_4_ = iStack_254 + auVar67._12_4_;
      auVar40 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + *(int *)(pauVar23[-2] + 0x1c)),2);
      auVar39._0_4_ = auVar32._0_4_ + local_260;
      auVar39._4_4_ = auVar32._4_4_ + iStack_25c;
      auVar39._8_4_ = auVar32._8_4_ + iStack_258;
      auVar39._12_4_ = auVar32._12_4_ + iStack_254;
      auVar38 = vpinsrb_avx(auVar29,(uint)*(byte *)(param_3 + *(int *)(pauVar23[-1] + 8)),3);
      auVar29 = vpslld_avx(auVar39,4);
      auVar50 = vpslld_avx(auVar36,4);
      auVar66 = vpinsrb_avx(auVar40,(uint)*(byte *)(param_5 + *(int *)(pauVar23[-1] + 8)),3);
      lVar20 = (longlong)auVar50._0_4_;
      auVar36 = vpinsrb_avx(auVar38,(uint)*(byte *)(param_3 + *(int *)(pauVar23[-1] + 0x14)),4);
      lVar25 = (longlong)auVar50._4_4_;
      lVar19 = (longlong)auVar50._8_4_;
      auVar39 = vpinsrb_avx(auVar66,(uint)*(byte *)(param_5 + *(int *)(pauVar23[-1] + 0x14)),4);
      auVar10 = vpinsrb_avx(auVar36,(uint)*(byte *)(param_3 + *(int *)*pauVar23),5);
      lVar26 = (longlong)auVar29._0_4_;
      auVar58 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + *(int *)*pauVar23),5);
      lVar17 = (longlong)auVar50._12_4_;
      lVar28 = (longlong)auVar29._4_4_;
      lVar27 = (longlong)auVar29._8_4_;
      lVar21 = (longlong)auVar29._12_4_;
      auVar36 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar28)),0x10);
      auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar39 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + lVar25)),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar19)),0x20);
      auVar29 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x10);
      auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x10);
      auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_1 + lVar21)),0x30);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 4 + lVar19)),0x20);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar17)),0x30);
      auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x10);
      auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x30);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 4 + lVar17)),0x30);
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x10);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x30);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + 8 + lVar19)),0x20);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + 8 + lVar17)),0x30);
      auVar74._0_4_ = local_260 + auVar67._16_4_;
      auVar74._4_4_ = iStack_25c + auVar67._20_4_;
      auVar74._8_4_ = iStack_258 + auVar67._24_4_;
      auVar74._12_4_ = iStack_254 + auVar67._28_4_;
      auVar72 = vpslld_avx(auVar74,4);
      auVar74 = vpinsrb_avx(auVar10,(uint)*(byte *)(param_3 + *(int *)(*pauVar23 + 0xc)),6);
      auVar10 = vpinsrb_avx(auVar58,(uint)*(byte *)(param_5 + *(int *)(*pauVar23 + 0xc)),6);
      auVar58 = vpinsrb_avx(auVar74,(uint)*(byte *)(param_3 + *(int *)(*pauVar23 + 0x18)),7);
      auVar10 = vpinsrb_avx(auVar10,(uint)*(byte *)(param_5 + *(int *)(*pauVar23 + 0x18)),7);
      auVar74 = vpmovzxbd_avx(auVar38);
      auVar37 = vpslld_avx(auVar74,2);
      auVar74 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._0_4_)),
                              ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._4_4_)),0x10);
      auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._8_4_)),0x20);
      auVar38 = vpshufd_avx(auVar58,0x55);
      auVar38 = vpmovzxbd_avx(auVar38);
      auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._12_4_)),0x30);
      auVar37 = vpslld_avx(auVar38,2);
      auVar38 = vpmovzxbd_avx(auVar66);
      auVar66 = vpshufd_avx(auVar10,0x55);
      auVar66 = vpmovzxbd_avx(auVar66);
      auVar69 = vpslld_avx(auVar38,2);
      auVar38 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._0_4_)),
                              ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._4_4_)),0x10);
      auVar58 = vpslld_avx(auVar66,2);
      auVar66 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar69._0_4_)),
                              ZEXT416(*(uint *)(param_6 + (ulonglong)auVar69._4_4_)),0x10);
      auVar10._0_4_ = local_260 + auVar32._16_4_;
      auVar10._4_4_ = iStack_25c + auVar32._20_4_;
      auVar10._8_4_ = iStack_258 + auVar32._24_4_;
      auVar10._12_4_ = iStack_254 + auVar32._28_4_;
      auVar89 = vpslld_avx(auVar10,4);
      lVar28 = (longlong)auVar72._0_4_;
      lVar25 = (longlong)auVar72._4_4_;
      auVar66 = vinsertps_avx(auVar66,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar69._8_4_)),0x20);
      auVar66 = vinsertps_avx(auVar66,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar69._12_4_)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar58._0_4_)),
                              ZEXT416(*(uint *)(param_6 + (ulonglong)auVar58._4_4_)),0x10);
      lVar19 = (longlong)auVar72._8_4_;
      lVar26 = (longlong)auVar89._0_4_;
      lVar21 = (longlong)auVar89._4_4_;
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._8_4_)),0x20);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar58._8_4_)),0x20);
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._12_4_)),0x30);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar58._12_4_)),0x30);
      lVar20 = (longlong)auVar89._8_4_;
      lVar17 = (longlong)auVar89._12_4_;
      auVar58 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar21)),0x10);
      auVar30._16_16_ = auVar36;
      auVar30._0_16_ = auVar39;
      auVar36 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + lVar20)),0x20);
      auVar39 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + lVar25)),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar19)),0x20);
      auVar58 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x10);
      auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_1 + lVar17)),0x30);
      lVar27 = (longlong)auVar72._12_4_;
      auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + 4 + lVar20)),0x20);
      auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar27)),0x30);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + 4 + lVar19)),0x20);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + 4 + lVar17)),0x30);
      auVar90._16_16_ = auVar29;
      auVar90._0_16_ = auVar40;
      auVar29 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x30);
      auVar100._16_16_ = auVar36;
      auVar100._0_16_ = auVar39;
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x10);
      auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 8 + lVar20)),0x20);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + 8 + lVar19)),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 8 + lVar17)),0x30);
      auVar73._16_16_ = auVar58;
      auVar73._0_16_ = auVar29;
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x30);
      auVar80._16_16_ = auVar50;
      auVar80._0_16_ = auVar61;
      auVar62._16_16_ = auVar40;
      auVar62._0_16_ = auVar37;
      auVar30 = vsubps_avx(auVar30,auVar100);
      auVar41 = vsubps_avx(auVar90,auVar73);
      auVar31 = vblendps_avx(auVar63,auVar31,0x1f);
      auVar62 = vsubps_avx(auVar80,auVar62);
      uVar1 = *(undefined4 *)(param_1 + 0xc + lVar28);
      auVar83._0_4_ =
           auVar62._0_4_ * auVar62._0_4_ +
           auVar41._0_4_ * auVar41._0_4_ + auVar30._0_4_ * auVar30._0_4_;
      auVar83._4_4_ =
           auVar62._4_4_ * auVar62._4_4_ +
           auVar41._4_4_ * auVar41._4_4_ + auVar30._4_4_ * auVar30._4_4_;
      auVar83._8_4_ =
           auVar62._8_4_ * auVar62._8_4_ +
           auVar41._8_4_ * auVar41._8_4_ + auVar30._8_4_ * auVar30._8_4_;
      auVar83._12_4_ =
           auVar62._12_4_ * auVar62._12_4_ +
           auVar41._12_4_ * auVar41._12_4_ + auVar30._12_4_ * auVar30._12_4_;
      auVar83._16_4_ =
           auVar62._16_4_ * auVar62._16_4_ +
           auVar41._16_4_ * auVar41._16_4_ + auVar30._16_4_ * auVar30._16_4_;
      auVar83._20_4_ =
           auVar62._20_4_ * auVar62._20_4_ +
           auVar41._20_4_ * auVar41._20_4_ + auVar30._20_4_ * auVar30._20_4_;
      auVar83._24_4_ =
           auVar62._24_4_ * auVar62._24_4_ +
           auVar41._24_4_ * auVar41._24_4_ + auVar30._24_4_ * auVar30._24_4_;
      auVar83._28_4_ =
           auVar62._28_4_ * auVar62._28_4_ +
           auVar41._28_4_ * auVar41._28_4_ + auVar30._28_4_ * auVar30._28_4_;
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar25);
      auVar71 = vsqrtps_avx(auVar83);
      auVar63 = vdivps_avx(auVar30,auVar71);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar19);
      auVar41 = vdivps_avx(auVar41,auVar71);
      auVar62 = vdivps_avx(auVar62,auVar71);
      auVar30 = vcmpps_avx(auVar71,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar63 = vblendvps_avx(auVar63,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar30);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar26);
      auVar42._0_4_ = auVar66._0_4_ * auVar31._0_4_;
      auVar42._4_4_ = auVar66._4_4_ * auVar31._4_4_;
      auVar42._8_4_ = auVar66._8_4_ * auVar31._8_4_;
      auVar42._12_4_ = auVar66._12_4_ * auVar31._12_4_;
      auVar42._16_4_ = auVar10._0_4_ * auVar31._16_4_;
      auVar42._20_4_ = auVar10._4_4_ * auVar31._20_4_;
      auVar42._24_4_ = auVar10._8_4_ * auVar31._24_4_;
      auVar42._28_4_ = auVar10._12_4_ * auVar31._28_4_;
      auVar31 = vsubps_avx(auVar71,auVar42);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar27);
      fVar88 = auVar74._0_4_ * auVar31._0_4_;
      fVar93 = auVar74._4_4_ * auVar31._4_4_;
      fVar94 = auVar74._8_4_ * auVar31._8_4_;
      fVar95 = auVar74._12_4_ * auVar31._12_4_;
      fVar96 = auVar38._0_4_ * auVar31._16_4_;
      fVar97 = auVar38._4_4_ * auVar31._20_4_;
      fVar98 = auVar38._8_4_ * auVar31._24_4_;
      fVar99 = auVar38._12_4_ * auVar31._28_4_;
      auVar31 = vcmpps_avx(auVar31,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar22 = auVar31._0_4_;
      uVar24 = auVar31._4_4_;
      uVar52 = auVar31._8_4_;
      uVar53 = auVar31._12_4_;
      uVar54 = auVar31._16_4_;
      uVar55 = auVar31._20_4_;
      uVar56 = auVar31._24_4_;
      uVar57 = auVar31._28_4_;
      auVar61._0_4_ = auVar39._0_4_ + (float)(~uVar22 & (uint)(auVar63._0_4_ * fVar88));
      auVar61._4_4_ = auVar39._4_4_ + (float)(~uVar24 & (uint)(auVar63._4_4_ * fVar93));
      auVar61._8_4_ = auVar39._8_4_ + (float)(~uVar52 & (uint)(auVar63._8_4_ * fVar94));
      auVar61._12_4_ = auVar39._12_4_ + (float)(~uVar53 & (uint)(auVar63._12_4_ * fVar95));
      auVar77._16_4_ = auVar36._0_4_ + (float)(~uVar54 & (uint)(auVar63._16_4_ * fVar96));
      auVar77._0_16_ = auVar61;
      auVar77._20_4_ = auVar36._4_4_ + (float)(~uVar55 & (uint)(auVar63._20_4_ * fVar97));
      auVar77._24_4_ = auVar36._8_4_ + (float)(~uVar56 & (uint)(auVar63._24_4_ * fVar98));
      auVar77._28_4_ = auVar36._12_4_ + (float)(~uVar57 & (uint)(auVar63._28_4_ * fVar99));
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar21);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar20);
      uVar8 = *(undefined4 *)(param_1 + 0xc + lVar17);
      *(float *)(param_1 + lVar28) = auVar61._0_4_;
      uVar9 = vextractps_avx(auVar61,1);
      *(undefined4 *)(param_1 + lVar25) = uVar9;
      uVar9 = vextractps_avx(auVar61,2);
      *(undefined4 *)(param_1 + lVar19) = uVar9;
      uVar9 = vextractps_avx(auVar61,3);
      *(undefined4 *)(param_1 + lVar27) = uVar9;
      auVar36 = auVar77._16_16_;
      *(float *)(param_1 + lVar26) = auVar77._16_4_;
      uVar9 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + lVar21) = uVar9;
      uVar9 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + lVar20) = uVar9;
      auVar50._0_4_ =
           auVar29._0_4_ +
           (float)(~uVar22 & (uint)(fVar88 * (float)(~auVar30._0_4_ & auVar41._0_4_)));
      auVar50._4_4_ =
           auVar29._4_4_ +
           (float)(~uVar24 & (uint)(fVar93 * (float)(~auVar30._4_4_ & auVar41._4_4_)));
      auVar50._8_4_ =
           auVar29._8_4_ +
           (float)(~uVar52 & (uint)(fVar94 * (float)(~auVar30._8_4_ & auVar41._8_4_)));
      auVar50._12_4_ =
           auVar29._12_4_ +
           (float)(~uVar53 & (uint)(fVar95 * (float)(~auVar30._12_4_ & auVar41._12_4_)));
      auVar31._16_4_ =
           auVar58._0_4_ +
           (float)(~uVar54 & (uint)(fVar96 * (float)(~auVar30._16_4_ & auVar41._16_4_)));
      auVar31._0_16_ = auVar50;
      auVar31._20_4_ =
           auVar58._4_4_ +
           (float)(~uVar55 & (uint)(fVar97 * (float)(~auVar30._20_4_ & auVar41._20_4_)));
      auVar31._24_4_ =
           auVar58._8_4_ +
           (float)(~uVar56 & (uint)(fVar98 * (float)(~auVar30._24_4_ & auVar41._24_4_)));
      auVar31._28_4_ =
           auVar58._12_4_ +
           (float)(~uVar57 & (uint)(fVar99 * (float)(~auVar30._28_4_ & auVar41._28_4_)));
      uVar9 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + lVar17) = uVar9;
      *(float *)(param_1 + 4 + lVar28) = auVar50._0_4_;
      uVar9 = vextractps_avx(auVar50,1);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar9;
      uVar9 = vextractps_avx(auVar50,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar9;
      uVar9 = vextractps_avx(auVar50,3);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar9;
      auVar36 = auVar31._16_16_;
      *(float *)(param_1 + 4 + lVar26) = auVar31._16_4_;
      uVar9 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar9;
      uVar9 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar9;
      auVar29._0_4_ =
           auVar37._0_4_ +
           (float)(~uVar22 & (uint)((float)(~auVar30._0_4_ & auVar62._0_4_) * fVar88));
      auVar29._4_4_ =
           auVar37._4_4_ +
           (float)(~uVar24 & (uint)((float)(~auVar30._4_4_ & auVar62._4_4_) * fVar93));
      auVar29._8_4_ =
           auVar37._8_4_ +
           (float)(~uVar52 & (uint)((float)(~auVar30._8_4_ & auVar62._8_4_) * fVar94));
      auVar29._12_4_ =
           auVar37._12_4_ +
           (float)(~uVar53 & (uint)((float)(~auVar30._12_4_ & auVar62._12_4_) * fVar95));
      auVar63._16_4_ =
           auVar40._0_4_ +
           (float)(~uVar54 & (uint)((float)(~auVar30._16_4_ & auVar62._16_4_) * fVar96));
      auVar63._0_16_ = auVar29;
      auVar63._20_4_ =
           auVar40._4_4_ +
           (float)(~uVar55 & (uint)((float)(~auVar30._20_4_ & auVar62._20_4_) * fVar97));
      auVar63._24_4_ =
           auVar40._8_4_ +
           (float)(~uVar56 & (uint)((float)(~auVar30._24_4_ & auVar62._24_4_) * fVar98));
      auVar63._28_4_ =
           auVar40._12_4_ +
           (float)(~uVar57 & (uint)((float)(~auVar30._28_4_ & auVar62._28_4_) * fVar99));
      uVar9 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 4 + lVar17) = uVar9;
      *(float *)(param_1 + 8 + lVar28) = auVar29._0_4_;
      uVar9 = vextractps_avx(auVar29,1);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar9;
      uVar9 = vextractps_avx(auVar29,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar9;
      uVar9 = vextractps_avx(auVar29,3);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar9;
      auVar36 = auVar63._16_16_;
      *(float *)(param_1 + 8 + lVar26) = auVar63._16_4_;
      uVar9 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar9;
      uVar9 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar9;
      uVar9 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 8 + lVar17) = uVar9;
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar1;
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar7;
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar8;
      pauVar23 = pauVar23 + 3;
      local_324 = local_324 + 8;
    } while ((int)local_324 < (int)(uVar15 & 0xfffffff8));
    vperm2f128_avx(auVar67,auVar32,0x31);
    if ((int)param_7 <= (int)local_324) {
      return;
    }
  }
  auVar79 = vpshufd_avx(ZEXT416(local_324),0);
  auVar32._16_16_ = auVar79;
  auVar32._0_16_ = auVar79;
  auVar39 = vpshufd_avx(ZEXT416(param_7),0);
  auVar29 = SUB3216(auVar32 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar40 = SUB3216(auVar32 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar79 = vpcmpgtd_avx(auVar39,auVar40);
  auVar36 = vpcmpgtd_avx(auVar39,auVar29);
  auVar43._16_16_ = auVar79;
  auVar43._0_16_ = auVar36;
  pauVar23 = (undefined1 (*) [32])(param_2 + (ulonglong)local_324 * 0xc);
  uVar15 = vmovmskps_avx(auVar43);
  if (uVar15 == 0xff) {
    auVar63 = pauVar23[2];
    auVar45._16_16_ = *(undefined1 (*) [16])*pauVar23;
    auVar45._0_16_ = *(undefined1 (*) [16])(*pauVar23 + 0x10);
    auVar67 = vblendps_avx(*pauVar23,auVar45,0x24);
    auVar32 = vpermilps_avx(auVar67,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar1 = *(undefined4 *)(pauVar23[1] + 4);
    auVar91._4_4_ = uVar1;
    auVar91._0_4_ = uVar1;
    auVar91._8_4_ = uVar1;
    auVar91._12_4_ = uVar1;
    uVar1 = *(undefined4 *)(pauVar23[1] + 8);
    auVar91._20_4_ = uVar1;
    auVar91._16_4_ = uVar1;
    auVar91._24_4_ = uVar1;
    auVar91._28_4_ = uVar1;
    auVar84._16_16_ = *(undefined1 (*) [16])pauVar23[2];
    auVar84._0_16_ = *(undefined1 (*) [16])(pauVar23[2] + 0x10);
    auVar67 = vblendps_avx(auVar84,auVar63,0x44);
    auVar31 = vpermilps_avx(auVar67,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar67 = vblendps_avx(auVar32,auVar91,0x88);
    auVar50 = vshufps_avx(*(undefined1 (*) [16])(pauVar23[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar23[1] + 0x10),0xec);
    uVar1 = *(undefined4 *)(pauVar23[1] + 0x14);
    auVar46._20_4_ = uVar1;
    auVar46._16_4_ = uVar1;
    auVar46._24_4_ = uVar1;
    auVar46._28_4_ = uVar1;
    auVar46._0_16_ = auVar50;
    auVar32 = vblendps_avx(auVar31,auVar46,0x13);
    auVar44._16_16_ = auVar32._0_16_;
    auVar44._0_16_ = auVar67._0_16_;
    auVar31 = vperm2f128_avx(auVar67,auVar32,0x31);
    auVar67 = vblendps_avx(pauVar23[1],*pauVar23,0x24);
    auVar67 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar23 + 0x10)),auVar67,0x21);
    auVar67 = vshufps_avx(auVar67,pauVar23[1],0xc2);
    auVar32 = vshufps_avx(auVar84,auVar63,0xc4);
    auVar67 = vblendps_avx(auVar67,auVar32,0xe0);
  }
  else {
    auVar50 = vpcmpgtd_avx(auVar39,auVar40);
    auVar61 = vpcmpgtd_avx(auVar39,auVar29);
    uVar22 = auVar61._0_4_;
    auVar38._0_4_ = uVar22 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar24 = auVar61._4_4_;
    auVar38._4_4_ = uVar24 & _UNK_150b50b04;
    uVar52 = auVar61._8_4_;
    auVar38._8_4_ = uVar52 & _UNK_150b50b08;
    uVar53 = auVar61._12_4_;
    auVar38._12_4_ = uVar53 & _UNK_150b50b0c;
    uVar54 = auVar50._0_4_;
    vextractps_avx(auVar38,1);
    vextractps_avx(auVar38,2);
    vextractps_avx(auVar38,3);
    auVar58._0_4_ = uVar22 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar58._4_4_ = uVar24 & _UNK_150b50b24;
    auVar58._8_4_ = uVar52 & _UNK_150b50b28;
    auVar58._12_4_ = uVar53 & _UNK_150b50b2c;
    vextractps_avx(auVar58,1);
    vextractps_avx(auVar58,2);
    vextractps_avx(auVar58,3);
    auVar66._0_4_ = uVar22 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar66._4_4_ = uVar24 & _UNK_150b50b44;
    auVar66._8_4_ = uVar52 & _UNK_150b50b48;
    auVar66._12_4_ = uVar53 & _UNK_150b50b4c;
    vextractps_avx(auVar66,1);
    vextractps_avx(auVar66,2);
    auVar44 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar23 + (uVar54 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar23)));
    vextractps_avx(auVar66,3);
    auVar31 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar23 + (uVar54 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar23 + auVar58._0_4_))));
    auVar67 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar23 + (uVar54 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar23 + auVar66._0_4_))));
  }
  auVar66 = vpcmpgtd_avx(auVar39,auVar40);
  auVar58 = vpcmpgtd_avx(auVar39,auVar29);
  auVar51._16_16_ = auVar66;
  auVar51._0_16_ = auVar58;
  auVar32 = vmaskmovps_avx(auVar51,auVar44);
  auVar31 = vmaskmovps_avx(auVar51,auVar31);
  auVar67 = vmaskmovps_avx(auVar51,auVar67);
  local_200 = auVar31._0_4_;
  uStack_1fc = auVar31._4_4_;
  uStack_1f8 = auVar31._8_4_;
  uStack_1f4 = auVar31._12_4_;
  uStack_1f0 = auVar31._16_4_;
  uStack_1ec = auVar31._20_4_;
  uStack_1e8 = auVar31._24_4_;
  uStack_1e4 = auVar31._28_4_;
  uVar22 = auVar58._0_4_;
  uVar24 = auVar58._4_4_;
  uVar52 = auVar58._8_4_;
  uVar53 = auVar58._12_4_;
  uVar54 = auVar66._0_4_;
  uVar55 = auVar66._4_4_;
  uVar56 = auVar66._8_4_;
  uVar57 = auVar66._12_4_;
  auVar39 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)(uVar22 & local_200))),
                        (uint)*(byte *)(param_3 + (int)(uVar24 & uStack_1fc)),1);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar52 & uStack_1f8)),2);
  auVar89 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar53 & uStack_1f4)),3);
  auVar39 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_3 + (int)(uVar54 & uStack_1f0)),4);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar55 & uStack_1ec)),5);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar56 & uStack_1e8)),6);
  auVar11 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar57 & uStack_1e4)),7);
  auVar39 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + (int)(uVar22 & local_200))),
                        (uint)*(byte *)(param_5 + (int)(uVar24 & uStack_1fc)),1);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar52 & uStack_1f8)),2);
  auVar12 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar53 & uStack_1f4)),3);
  auVar39 = vpinsrb_avx(auVar12,(uint)*(byte *)(param_5 + (int)(uVar54 & uStack_1f0)),4);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar55 & uStack_1ec)),5);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar56 & uStack_1e8)),6);
  auVar13 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar57 & uStack_1e4)),7);
  auVar39 = vpshufd_avx(ZEXT416(param_8),0);
  local_220 = auVar32._0_4_;
  iVar16 = auVar39._0_4_;
  auVar40._0_4_ = iVar16 + local_220;
  iStack_21c = auVar32._4_4_;
  iVar33 = auVar39._4_4_;
  auVar40._4_4_ = iVar33 + iStack_21c;
  iStack_218 = auVar32._8_4_;
  iVar34 = auVar39._8_4_;
  auVar40._8_4_ = iVar34 + iStack_218;
  iStack_214 = auVar32._12_4_;
  iVar35 = auVar39._12_4_;
  auVar40._12_4_ = iVar35 + iStack_214;
  iStack_210 = auVar32._16_4_;
  auVar37._0_4_ = iVar16 + iStack_210;
  iStack_20c = auVar32._20_4_;
  auVar37._4_4_ = iVar33 + iStack_20c;
  iStack_208 = auVar32._24_4_;
  auVar37._8_4_ = iVar34 + iStack_208;
  iStack_204 = auVar32._28_4_;
  auVar37._12_4_ = iVar35 + iStack_204;
  auVar29 = vpslld_avx(auVar37,4);
  auVar39 = vpslld_avx(auVar40,4);
  auVar38 = vpand_avx(auVar58,auVar39);
  auVar29 = vpand_avx(auVar66,auVar29);
  lVar17 = param_1 + auVar29._0_4_;
  lVar19 = param_1 + auVar29._4_4_;
  lVar20 = param_1 + auVar29._8_4_;
  auVar39 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar29._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar29._4_4_)),0x10);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + auVar29._8_4_)),0x20);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + auVar29._12_4_)),0x30);
  lVar21 = param_1 + auVar29._12_4_;
  auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d50) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d54) + lVar19)),0x10);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d58) + lVar20)),
                          0x20);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d5c) + lVar21)),
                          0x30);
  auVar40 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d70) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d74) + lVar19)),0x10);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d78) + lVar20)),
                          0x20);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d7c) + lVar21)),
                          0x30);
  auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar38._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar38._4_4_)),0x10);
  lVar17 = param_1 + auVar38._0_4_;
  lVar19 = param_1 + auVar38._4_4_;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar22 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar24 & _UNK_150b50d44) + lVar19)),0x10);
  auVar74 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar22 & 
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar24 & _UNK_150b50d64) + lVar19)),0x10);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + auVar38._8_4_)),0x20);
  lVar17 = param_1 + auVar38._8_4_;
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50d48) + lVar17)),
                          0x20);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50d68) + lVar17)),
                          0x20);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + auVar38._12_4_)),0x30);
  lVar17 = param_1 + auVar38._12_4_;
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar53 & _UNK_150b50d4c) + lVar17)),
                          0x30);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)((ulonglong)(uVar53 & _UNK_150b50d6c) + lVar17)),
                          0x30);
  auVar69._0_4_ = iVar16 + uStack_1f0;
  auVar69._4_4_ = iVar33 + uStack_1ec;
  auVar69._8_4_ = iVar34 + uStack_1e8;
  auVar69._12_4_ = iVar35 + uStack_1e4;
  auVar69 = vpslld_avx(auVar69,4);
  auVar10 = vpand_avx(auVar66,auVar69);
  lVar17 = param_1 + auVar10._0_4_;
  auVar38 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar10._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar10._4_4_)),0x10);
  lVar19 = param_1 + auVar10._4_4_;
  auVar66 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d50) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d54) + lVar19)),0x10);
  auVar72._0_4_ = iVar16 + local_200;
  auVar72._4_4_ = iVar33 + uStack_1fc;
  auVar72._8_4_ = iVar34 + uStack_1f8;
  auVar72._12_4_ = iVar35 + uStack_1f4;
  auVar72 = vpslld_avx(auVar72,4);
  auVar37 = vpand_avx(auVar58,auVar72);
  auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + auVar10._8_4_)),0x20);
  lVar20 = param_1 + auVar10._8_4_;
  auVar66 = vinsertps_avx(auVar66,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d58) + lVar20)),
                          0x20);
  auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + auVar10._12_4_)),0x30);
  lVar21 = param_1 + auVar10._12_4_;
  auVar66 = vinsertps_avx(auVar66,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d5c) + lVar21)),
                          0x30);
  lVar25 = param_1 + auVar37._0_4_;
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar37._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar37._4_4_)),0x10);
  lVar26 = param_1 + auVar37._4_4_;
  auVar58 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar22 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar24 & _UNK_150b50d44) + lVar26)),0x10);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar37._8_4_)),0x20);
  lVar27 = param_1 + auVar37._8_4_;
  auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50d48) + lVar27)),
                          0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar37._12_4_)),0x30);
  auVar102._16_16_ = auVar39;
  auVar102._0_16_ = auVar50;
  lVar28 = param_1 + auVar37._12_4_;
  auVar39 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar53 & _UNK_150b50d4c) + lVar28)),
                          0x30);
  auVar101._16_16_ = auVar29;
  auVar101._0_16_ = auVar61;
  auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d70) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d74) + lVar19)),0x10);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d78) + lVar20)),
                          0x20);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d7c) + lVar21)),
                          0x30);
  auVar81._16_16_ = auVar40;
  auVar81._0_16_ = auVar74;
  auVar47._16_16_ = auVar38;
  auVar47._0_16_ = auVar10;
  auVar87._16_16_ = auVar66;
  auVar87._0_16_ = auVar39;
  auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar22 & 
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar24 & _UNK_150b50d64) + lVar26)),0x10);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50d68) + lVar27)),
                          0x20);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar53 & _UNK_150b50d6c) + lVar28)),
                          0x30);
  auVar70._0_4_ = uVar22 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar70._4_4_ = uVar24 & _UNK_150b50d84;
  auVar70._8_4_ = uVar52 & _UNK_150b50d88;
  auVar70._12_4_ = uVar53 & _UNK_150b50d8c;
  auVar92._16_16_ = auVar29;
  auVar92._0_16_ = auVar39;
  auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d90) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d94) + lVar19)),0x10);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d98) + lVar20)),
                          0x20);
  uVar22 = vextractps_avx(auVar70,1);
  uVar24 = vextractps_avx(auVar70,2);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d9c) + lVar21)),
                          0x30);
  auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar70._0_4_ + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)uVar22 + lVar26)),0x10);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)uVar24 + lVar27)),0x20);
  auVar32 = vmaskmovps_avx(auVar51,auVar102);
  auVar31 = vmaskmovps_avx(auVar51,auVar101);
  auVar63 = vmaskmovps_avx(auVar51,auVar81);
  auVar30 = vmaskmovps_avx(auVar51,auVar47);
  auVar41 = vmaskmovps_avx(auVar51,auVar87);
  auVar62 = vmaskmovps_avx(auVar51,auVar92);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)auVar70._12_4_ + lVar28)),0x30);
  auVar40 = vpshufd_avx(auVar11,0x55);
  auVar40 = vpmovzxbd_avx(auVar40);
  auVar50 = vpmovzxbd_avx(auVar89);
  auVar61 = vpslld_avx(auVar50,2);
  auVar40 = vpslld_avx(auVar40,2);
  auVar74 = ZEXT816(0) << 0x20;
  auVar50 = vpunpckhdq_avx(auVar40,auVar74);
  auVar40 = vpmovzxdq_avx(auVar40);
  auVar68._16_16_ = auVar50;
  auVar68._0_16_ = auVar40;
  auVar50 = vpunpckhdq_avx(auVar61,auVar74);
  auVar40 = vpmovzxdq_avx(auVar61);
  auVar48._16_16_ = auVar50;
  auVar48._0_16_ = auVar40;
  auVar40 = vpmovsxdq_avx(auVar36);
  auVar36 = vpshufd_avx(auVar36,0xfa);
  auVar85._16_16_ = auVar36;
  auVar85._0_16_ = auVar40;
  auVar71 = vblendvps_avx(ZEXT832(0) << 0x20,auVar48,auVar85);
  auVar36 = vpmovsxdq_avx(auVar79);
  auVar79 = vpshufd_avx(auVar79,0xfa);
  auVar49._16_16_ = auVar79;
  auVar49._0_16_ = auVar36;
  auVar42 = vblendvps_avx(ZEXT832(0) << 0x20,auVar68,auVar49);
  auVar79 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + auVar42._0_8_)),
                          ZEXT416(*(uint *)(param_4 + auVar42._8_8_)),0x10);
  auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)(param_4 + auVar42._16_8_)),0x20);
  auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)(param_4 + auVar42._24_8_)),0x30);
  auVar36 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + auVar71._0_8_)),
                          ZEXT416(*(uint *)(param_4 + auVar71._8_8_)),0x10);
  auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_4 + auVar71._16_8_)),0x20);
  auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_4 + auVar71._24_8_)),0x30);
  auVar40 = vpshufd_avx(auVar13,0x55);
  auVar40 = vpmovzxbd_avx(auVar40);
  auVar50 = vpmovzxbd_avx(auVar12);
  auVar61 = vpslld_avx(auVar50,2);
  auVar40 = vpslld_avx(auVar40,2);
  auVar50 = vpunpckhdq_avx(auVar40,auVar74);
  auVar40 = vpmovzxdq_avx(auVar40);
  auVar64._16_16_ = auVar50;
  auVar64._0_16_ = auVar40;
  auVar50 = vpunpckhdq_avx(auVar61,auVar74);
  auVar40 = vpmovzxdq_avx(auVar61);
  auVar59._16_16_ = auVar50;
  auVar59._0_16_ = auVar40;
  auVar76 = ZEXT832(0) << 0x20;
  auVar71 = vblendvps_avx(auVar76,auVar59,auVar85);
  auVar42 = vblendvps_avx(auVar76,auVar64,auVar49);
  auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + auVar42._0_8_)),
                          ZEXT416(*(uint *)(param_6 + auVar42._8_8_)),0x10);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_6 + auVar42._16_8_)),0x20);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_6 + auVar42._24_8_)),0x30);
  auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + auVar71._0_8_)),
                          ZEXT416(*(uint *)(param_6 + auVar71._8_8_)),0x10);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_6 + auVar71._16_8_)),0x20);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_6 + auVar71._24_8_)),0x30);
  auVar71 = vsubps_avx(auVar32,auVar30);
  auVar42 = vsubps_avx(auVar31,auVar41);
  auVar73 = vsubps_avx(auVar63,auVar62);
  auVar75._0_4_ =
       auVar71._0_4_ * auVar71._0_4_ + auVar42._0_4_ * auVar42._0_4_ + auVar73._0_4_ * auVar73._0_4_
  ;
  auVar75._4_4_ =
       auVar71._4_4_ * auVar71._4_4_ + auVar42._4_4_ * auVar42._4_4_ + auVar73._4_4_ * auVar73._4_4_
  ;
  auVar75._8_4_ =
       auVar71._8_4_ * auVar71._8_4_ + auVar42._8_4_ * auVar42._8_4_ + auVar73._8_4_ * auVar73._8_4_
  ;
  auVar75._12_4_ =
       auVar71._12_4_ * auVar71._12_4_ + auVar42._12_4_ * auVar42._12_4_ +
       auVar73._12_4_ * auVar73._12_4_;
  auVar75._16_4_ =
       auVar71._16_4_ * auVar71._16_4_ + auVar42._16_4_ * auVar42._16_4_ +
       auVar73._16_4_ * auVar73._16_4_;
  auVar75._20_4_ =
       auVar71._20_4_ * auVar71._20_4_ + auVar42._20_4_ * auVar42._20_4_ +
       auVar73._20_4_ * auVar73._20_4_;
  auVar75._24_4_ =
       auVar71._24_4_ * auVar71._24_4_ + auVar42._24_4_ * auVar42._24_4_ +
       auVar73._24_4_ * auVar73._24_4_;
  auVar75._28_4_ =
       auVar71._28_4_ * auVar71._28_4_ + auVar42._28_4_ * auVar42._28_4_ +
       auVar73._28_4_ * auVar73._28_4_;
  auVar63 = vsqrtps_avx(auVar75);
  local_1e0 = auVar67._0_4_;
  fStack_1dc = auVar67._4_4_;
  fStack_1d8 = auVar67._8_4_;
  fStack_1d4 = auVar67._12_4_;
  fStack_1d0 = auVar67._16_4_;
  fStack_1cc = auVar67._20_4_;
  fStack_1c8 = auVar67._24_4_;
  fStack_1c4 = auVar67._28_4_;
  auVar32 = vcmpps_avx(auVar63,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar67 = vdivps_avx(auVar71,auVar63);
  auVar65._0_4_ = local_1e0 * auVar50._0_4_;
  auVar65._4_4_ = fStack_1dc * auVar50._4_4_;
  auVar65._8_4_ = fStack_1d8 * auVar50._8_4_;
  auVar65._12_4_ = fStack_1d4 * auVar50._12_4_;
  auVar65._16_4_ = fStack_1d0 * auVar40._0_4_;
  auVar65._20_4_ = fStack_1cc * auVar40._4_4_;
  auVar65._24_4_ = fStack_1c8 * auVar40._8_4_;
  auVar65._28_4_ = fStack_1c4 * auVar40._12_4_;
  auVar67 = vblendvps_avx(auVar67,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar32);
  auVar31 = vsubps_avx(auVar63,auVar65);
  fVar88 = auVar36._0_4_ * auVar31._0_4_;
  fVar93 = auVar36._4_4_ * auVar31._4_4_;
  fVar94 = auVar36._8_4_ * auVar31._8_4_;
  fVar95 = auVar36._12_4_ * auVar31._12_4_;
  fVar96 = auVar79._0_4_ * auVar31._16_4_;
  fVar97 = auVar79._4_4_ * auVar31._20_4_;
  fVar98 = auVar79._8_4_ * auVar31._24_4_;
  fVar99 = auVar79._12_4_ * auVar31._28_4_;
  auVar31 = vcmpps_avx(auVar31,auVar76,1);
  uVar22 = auVar31._0_4_;
  uVar24 = auVar31._4_4_;
  uVar52 = auVar31._8_4_;
  uVar53 = auVar31._12_4_;
  uVar54 = auVar31._16_4_;
  uVar55 = auVar31._20_4_;
  uVar56 = auVar31._24_4_;
  uVar57 = auVar31._28_4_;
  auVar79._0_4_ = auVar30._0_4_ + (float)(~uVar22 & (uint)(auVar67._0_4_ * fVar88));
  auVar79._4_4_ = auVar30._4_4_ + (float)(~uVar24 & (uint)(auVar67._4_4_ * fVar93));
  auVar79._8_4_ = auVar30._8_4_ + (float)(~uVar52 & (uint)(auVar67._8_4_ * fVar94));
  auVar79._12_4_ = auVar30._12_4_ + (float)(~uVar53 & (uint)(auVar67._12_4_ * fVar95));
  auVar82._16_4_ = auVar30._16_4_ + (float)(~uVar54 & (uint)(auVar67._16_4_ * fVar96));
  auVar82._0_16_ = auVar79;
  auVar82._20_4_ = auVar30._20_4_ + (float)(~uVar55 & (uint)(auVar67._20_4_ * fVar97));
  auVar82._24_4_ = auVar30._24_4_ + (float)(~uVar56 & (uint)(auVar67._24_4_ * fVar98));
  auVar82._28_4_ = auVar30._28_4_ + (float)(~uVar57 & (uint)(auVar67._28_4_ * fVar99));
  cVar14 = (char)uVar15;
  iVar35 = auVar72._0_4_;
  auVar36 = auVar82._16_16_;
  iVar16 = auVar72._4_4_;
  iVar33 = auVar72._8_4_;
  iVar34 = auVar72._12_4_;
  iVar86 = auVar69._0_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar35) = auVar79._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + iVar16) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + iVar33) = uVar1;
  }
  if ((uVar15 & 8) == 0) {
    auVar67 = vdivps_avx(auVar42,auVar63);
  }
  else {
    uVar1 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + iVar34) = uVar1;
    auVar67 = vdivps_avx(auVar42,auVar63);
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar86) = auVar82._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar69,1);
    uVar1 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + iVar18) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar69,2);
    uVar1 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + iVar18) = uVar1;
  }
  uVar8 = ~uVar57 & (uint)((float)(~auVar32._28_4_ & auVar67._28_4_) * fVar99);
  uVar7 = ~uVar56 & (uint)((float)(~auVar32._24_4_ & auVar67._24_4_) * fVar98);
  uVar6 = ~uVar55 & (uint)((float)(~auVar32._20_4_ & auVar67._20_4_) * fVar97);
  uVar5 = ~uVar54 & (uint)((float)(~auVar32._16_4_ & auVar67._16_4_) * fVar96);
  uVar4 = ~uVar53 & (uint)((float)(~auVar32._12_4_ & auVar67._12_4_) * fVar95);
  uVar3 = ~uVar52 & (uint)((float)(~auVar32._8_4_ & auVar67._8_4_) * fVar94);
  uVar2 = ~uVar24 & (uint)((float)(~auVar32._4_4_ & auVar67._4_4_) * fVar93);
  uVar1 = ~uVar22 & (uint)((float)(~auVar32._0_4_ & auVar67._0_4_) * fVar88);
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar69,3);
    uVar9 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + iVar18) = uVar9;
    auVar78._0_4_ = auVar41._0_4_ + (float)uVar1;
    auVar78._4_4_ = auVar41._4_4_ + (float)uVar2;
    auVar78._8_4_ = auVar41._8_4_ + (float)uVar3;
    auVar78._12_4_ = auVar41._12_4_ + (float)uVar4;
    auVar78._16_4_ = auVar41._16_4_ + (float)uVar5;
    auVar78._20_4_ = auVar41._20_4_ + (float)uVar6;
    auVar78._24_4_ = auVar41._24_4_ + (float)uVar7;
    auVar78._28_4_ = auVar41._28_4_ + (float)uVar8;
  }
  else {
    auVar78._0_4_ = auVar41._0_4_ + (float)uVar1;
    auVar78._4_4_ = auVar41._4_4_ + (float)uVar2;
    auVar78._8_4_ = auVar41._8_4_ + (float)uVar3;
    auVar78._12_4_ = auVar41._12_4_ + (float)uVar4;
    auVar78._16_4_ = auVar41._16_4_ + (float)uVar5;
    auVar78._20_4_ = auVar41._20_4_ + (float)uVar6;
    auVar78._24_4_ = auVar41._24_4_ + (float)uVar7;
    auVar78._28_4_ = auVar41._28_4_ + (float)uVar8;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar35) = auVar78._0_4_;
  }
  auVar79 = auVar78._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar33) = uVar1;
  }
  if ((uVar15 & 8) == 0) {
    auVar67 = vdivps_avx(auVar73,auVar63);
  }
  else {
    uVar1 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar34) = uVar1;
    auVar67 = vdivps_avx(auVar73,auVar63);
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar86) = auVar78._16_4_;
  }
  auVar79 = auVar78._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar69,1);
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar69,2);
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
  }
  uVar8 = ~uVar57 & (uint)((float)(~auVar32._28_4_ & auVar67._28_4_) * fVar99);
  uVar7 = ~uVar56 & (uint)((float)(~auVar32._24_4_ & auVar67._24_4_) * fVar98);
  uVar6 = ~uVar55 & (uint)((float)(~auVar32._20_4_ & auVar67._20_4_) * fVar97);
  uVar5 = ~uVar54 & (uint)((float)(~auVar32._16_4_ & auVar67._16_4_) * fVar96);
  uVar4 = ~uVar53 & (uint)((float)(~auVar32._12_4_ & auVar67._12_4_) * fVar95);
  uVar3 = ~uVar52 & (uint)((float)(~auVar32._8_4_ & auVar67._8_4_) * fVar94);
  uVar2 = ~uVar24 & (uint)((float)(~auVar32._4_4_ & auVar67._4_4_) * fVar93);
  uVar1 = ~uVar22 & (uint)((float)(~auVar32._0_4_ & auVar67._0_4_) * fVar88);
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar69,3);
    uVar9 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar9;
    auVar60._0_4_ = auVar62._0_4_ + (float)uVar1;
    auVar60._4_4_ = auVar62._4_4_ + (float)uVar2;
    auVar60._8_4_ = auVar62._8_4_ + (float)uVar3;
    auVar60._12_4_ = auVar62._12_4_ + (float)uVar4;
    auVar60._16_4_ = auVar62._16_4_ + (float)uVar5;
    auVar60._20_4_ = auVar62._20_4_ + (float)uVar6;
    auVar60._24_4_ = auVar62._24_4_ + (float)uVar7;
    auVar60._28_4_ = auVar62._28_4_ + (float)uVar8;
  }
  else {
    auVar60._0_4_ = auVar62._0_4_ + (float)uVar1;
    auVar60._4_4_ = auVar62._4_4_ + (float)uVar2;
    auVar60._8_4_ = auVar62._8_4_ + (float)uVar3;
    auVar60._12_4_ = auVar62._12_4_ + (float)uVar4;
    auVar60._16_4_ = auVar62._16_4_ + (float)uVar5;
    auVar60._20_4_ = auVar62._20_4_ + (float)uVar6;
    auVar60._24_4_ = auVar62._24_4_ + (float)uVar7;
    auVar60._28_4_ = auVar62._28_4_ + (float)uVar8;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar35) = auVar60._0_4_;
  }
  auVar79 = auVar60._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar33) = uVar1;
  }
  if ((uVar15 & 8) != 0) {
    uVar1 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar34) = uVar1;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar86) = auVar60._16_4_;
  }
  auVar79 = auVar60._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar69,1);
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar69,2);
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
  }
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar69,3);
    uVar1 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar35) = auVar29._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar29,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar29,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar33) = uVar1;
  }
  if ((uVar15 & 8) != 0) {
    uVar1 = vextractps_avx(auVar29,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar34) = uVar1;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar86) = auVar39._0_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar69,1);
    uVar1 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar69,2);
    uVar1 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
  }
  if (cVar14 < '\0') {
    uVar1 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)auVar69._12_4_) = uVar1;
  }
  return;
}

// ApplyLongRangeConstraints_avx @ 1402f2940

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraints_avx
               (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,uint param_5
               ,uint param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  char cVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  undefined1 (*pauVar26) [32];
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar36;
  undefined1 auVar32 [16];
  int iVar34;
  int iVar35;
  undefined1 auVar33 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  uint uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar53 [32];
  undefined1 auVar52 [16];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 in_ZMM2 [64];
  int iVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  float fVar82;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined1 auVar83 [32];
  undefined1 auVar87 [16];
  undefined1 auVar88 [32];
  undefined1 auVar89 [16];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [16];
  undefined1 auVar98 [32];
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  int local_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  int local_200;
  int iStack_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auVar42 [32];
  undefined1 auVar76 [32];
  undefined1 auVar97 [32];
  
  uVar15 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar15 = param_5;
  }
  auVar51 = in_ZMM2._0_16_;
  auVar57 = in_ZMM3._0_16_;
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    uVar25 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar52 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    auVar87 = vshufps_avx(auVar57,auVar57,0);
    auVar14 = vshufps_avx(auVar51,auVar51,0);
    pauVar26 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar25 = 0;
    do {
      auVar76 = pauVar26[-2];
      auVar39._16_16_ = *(undefined1 (*) [16])pauVar26[-2];
      auVar39._0_16_ = *(undefined1 (*) [16])(pauVar26[-2] + 0x10);
      uVar1 = *(undefined4 *)(pauVar26[-1] + 4);
      auVar74._4_4_ = uVar1;
      auVar74._0_4_ = uVar1;
      auVar74._8_4_ = uVar1;
      auVar74._12_4_ = uVar1;
      auVar39 = vblendps_avx(auVar76,auVar39,0x24);
      uVar1 = *(undefined4 *)(pauVar26[-1] + 8);
      auVar74._20_4_ = uVar1;
      auVar74._16_4_ = uVar1;
      auVar74._24_4_ = uVar1;
      auVar74._28_4_ = uVar1;
      auVar65._16_16_ = *(undefined1 (*) [16])*pauVar26;
      auVar65._0_16_ = *(undefined1 (*) [16])(*pauVar26 + 0x10);
      auVar40 = vpermilps_avx(auVar39,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar39 = vblendps_avx(auVar65,*pauVar26,0x44);
      auVar42 = vpermilps_avx(auVar39,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar37 = vshufps_avx(*(undefined1 (*) [16])(pauVar26[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar26[-1] + 0x10),0xec);
      auVar39 = vblendps_avx(auVar40,auVar74,0x88);
      uVar1 = *(undefined4 *)(pauVar26[-1] + 0x14);
      auVar40._20_4_ = uVar1;
      auVar40._16_4_ = uVar1;
      auVar40._24_4_ = uVar1;
      auVar40._28_4_ = uVar1;
      auVar40._0_16_ = auVar37;
      auVar40 = vblendps_avx(auVar42,auVar40,0x13);
      auVar65 = vshufps_avx(auVar65,*pauVar26,0xc4);
      local_260 = auVar52._0_4_;
      iStack_25c = auVar52._4_4_;
      iStack_258 = auVar52._8_4_;
      iStack_254 = auVar52._12_4_;
      auVar37._0_4_ = auVar39._0_4_ + local_260;
      auVar37._4_4_ = auVar39._4_4_ + iStack_25c;
      auVar37._8_4_ = auVar39._8_4_ + iStack_258;
      auVar37._12_4_ = auVar39._12_4_ + iStack_254;
      auVar64._0_4_ = auVar40._0_4_ + local_260;
      auVar64._4_4_ = auVar40._4_4_ + iStack_25c;
      auVar64._8_4_ = auVar40._8_4_ + iStack_258;
      auVar64._12_4_ = auVar40._12_4_ + iStack_254;
      auVar10._0_4_ = auVar39._16_4_ + local_260;
      auVar10._4_4_ = auVar39._20_4_ + iStack_25c;
      auVar10._8_4_ = auVar39._24_4_ + iStack_258;
      auVar10._12_4_ = auVar39._28_4_ + iStack_254;
      auVar11._0_4_ = auVar40._16_4_ + local_260;
      auVar11._4_4_ = auVar40._20_4_ + iStack_25c;
      auVar11._8_4_ = auVar40._24_4_ + iStack_258;
      auVar11._12_4_ = auVar40._28_4_ + iStack_254;
      auVar64 = vpslld_avx(auVar64,4);
      auVar37 = vpslld_avx(auVar37,4);
      lVar21 = (longlong)auVar37._0_4_;
      lVar22 = (longlong)auVar37._4_4_;
      lVar28 = (longlong)auVar37._8_4_;
      lVar18 = (longlong)auVar37._12_4_;
      lVar23 = (longlong)auVar64._0_4_;
      lVar27 = (longlong)auVar64._4_4_;
      lVar30 = (longlong)auVar64._8_4_;
      lVar20 = (longlong)auVar64._12_4_;
      auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar23)),
                              ZEXT416(*(uint *)(param_1 + lVar27)),0x10);
      auVar64 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar21)),
                              ZEXT416(*(uint *)(param_1 + lVar22)),0x10);
      auVar38 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar23)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x10);
      auVar32 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar21)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x10);
      auVar72 = vpslld_avx(auVar11,4);
      auVar58 = vpslld_avx(auVar10,4);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar23)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x10);
      lVar27 = (longlong)auVar58._0_4_;
      auVar11 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar21)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x10);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + lVar30)),0x20);
      auVar64 = vinsertps_avx(auVar64,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      lVar22 = (longlong)auVar58._4_4_;
      lVar23 = (longlong)auVar58._8_4_;
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x20);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      lVar21 = (longlong)auVar58._12_4_;
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x20);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      lVar29 = (longlong)auVar72._0_4_;
      lVar31 = (longlong)auVar72._4_4_;
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + lVar20)),0x30);
      auVar64 = vinsertps_avx(auVar64,ZEXT416(*(uint *)(param_1 + lVar18)),0x30);
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + 4 + lVar20)),0x30);
      lVar28 = (longlong)auVar72._8_4_;
      lVar30 = (longlong)auVar72._12_4_;
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 4 + lVar18)),0x30);
      auVar66._16_16_ = auVar37;
      auVar66._0_16_ = auVar64;
      auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar29)),
                              ZEXT416(*(uint *)(param_1 + lVar31)),0x10);
      auVar79._16_16_ = auVar38;
      auVar79._0_16_ = auVar32;
      auVar64 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 8 + lVar20)),0x30);
      auVar38 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + lVar22)),0x10);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      auVar32 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar29)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar31)),0x10);
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + lVar23)),0x20);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + lVar30)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x10);
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + lVar21)),0x30);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 4 + lVar23)),0x20);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_1 + 4 + lVar30)),0x30);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x30);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_1 + 8 + lVar18)),0x30);
      auVar58 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar29)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar31)),0x10);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      auVar72 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar27)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x10);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + 8 + lVar30)),0x30);
      auVar42 = vblendps_avx(pauVar26[-1],auVar76,0x24);
      auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + 8 + lVar23)),0x20);
      auVar90._16_16_ = auVar37;
      auVar90._0_16_ = auVar38;
      auVar75._16_16_ = auVar32;
      auVar75._0_16_ = auVar10;
      auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x30);
      auVar41._16_16_ = auVar64;
      auVar41._0_16_ = auVar11;
      auVar59._16_16_ = auVar58;
      auVar59._0_16_ = auVar72;
      auVar76 = vsubps_avx(auVar66,auVar90);
      auVar66 = vsubps_avx(auVar79,auVar75);
      auVar42 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(pauVar26[-2] + 0x10)),auVar42,0x21);
      auVar41 = vsubps_avx(auVar41,auVar59);
      auVar42 = vshufps_avx(auVar42,pauVar26[-1],0xc2);
      auVar80._0_4_ =
           auVar41._0_4_ * auVar41._0_4_ +
           auVar66._0_4_ * auVar66._0_4_ + auVar76._0_4_ * auVar76._0_4_;
      auVar80._4_4_ =
           auVar41._4_4_ * auVar41._4_4_ +
           auVar66._4_4_ * auVar66._4_4_ + auVar76._4_4_ * auVar76._4_4_;
      auVar80._8_4_ =
           auVar41._8_4_ * auVar41._8_4_ +
           auVar66._8_4_ * auVar66._8_4_ + auVar76._8_4_ * auVar76._8_4_;
      auVar80._12_4_ =
           auVar41._12_4_ * auVar41._12_4_ +
           auVar66._12_4_ * auVar66._12_4_ + auVar76._12_4_ * auVar76._12_4_;
      auVar80._16_4_ =
           auVar41._16_4_ * auVar41._16_4_ +
           auVar66._16_4_ * auVar66._16_4_ + auVar76._16_4_ * auVar76._16_4_;
      auVar80._20_4_ =
           auVar41._20_4_ * auVar41._20_4_ +
           auVar66._20_4_ * auVar66._20_4_ + auVar76._20_4_ * auVar76._20_4_;
      auVar80._24_4_ =
           auVar41._24_4_ * auVar41._24_4_ +
           auVar66._24_4_ * auVar66._24_4_ + auVar76._24_4_ * auVar76._24_4_;
      auVar80._28_4_ =
           auVar41._28_4_ * auVar41._28_4_ +
           auVar66._28_4_ * auVar66._28_4_ + auVar76._28_4_ * auVar76._28_4_;
      auVar42 = vblendps_avx(auVar42,auVar65,0xe0);
      auVar65 = vsqrtps_avx(auVar80);
      uVar1 = *(undefined4 *)(param_1 + 0xc + lVar27);
      auVar76 = vdivps_avx(auVar76,auVar65);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar22);
      uVar8 = *(undefined4 *)(param_1 + 0xc + lVar23);
      auVar66 = vdivps_avx(auVar66,auVar65);
      auVar41 = vdivps_avx(auVar41,auVar65);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar21);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar29);
      local_280 = auVar87._0_4_;
      fStack_27c = auVar87._4_4_;
      fStack_278 = auVar87._8_4_;
      fStack_274 = auVar87._12_4_;
      auVar93._0_4_ = auVar42._0_4_ * local_280;
      auVar93._4_4_ = auVar42._4_4_ * fStack_27c;
      auVar93._8_4_ = auVar42._8_4_ * fStack_278;
      auVar93._12_4_ = auVar42._12_4_ * fStack_274;
      auVar93._16_4_ = auVar42._16_4_ * local_280;
      auVar93._20_4_ = auVar42._20_4_ * fStack_27c;
      auVar93._24_4_ = auVar42._24_4_ * fStack_278;
      auVar93._28_4_ = auVar42._28_4_ * fStack_274;
      auVar59 = vsubps_avx(auVar65,auVar93);
      auVar65 = vcmpps_avx(auVar65,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar42 = vblendvps_avx(auVar76,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar65);
      local_2a0 = auVar14._0_4_;
      fStack_29c = auVar14._4_4_;
      fStack_298 = auVar14._8_4_;
      fStack_294 = auVar14._12_4_;
      fVar82 = auVar59._0_4_ * local_2a0;
      fVar84 = auVar59._4_4_ * fStack_29c;
      fVar85 = auVar59._8_4_ * fStack_298;
      fVar86 = auVar59._12_4_ * fStack_294;
      local_2a0 = auVar59._16_4_ * local_2a0;
      fStack_29c = auVar59._20_4_ * fStack_29c;
      fStack_298 = auVar59._24_4_ * fStack_298;
      fStack_294 = auVar59._28_4_ * fStack_294;
      auVar76 = vcmpps_avx(auVar59,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar24 = auVar76._0_4_;
      uVar44 = auVar76._4_4_;
      uVar45 = auVar76._8_4_;
      uVar46 = auVar76._12_4_;
      uVar47 = auVar76._16_4_;
      uVar48 = auVar76._20_4_;
      uVar49 = auVar76._24_4_;
      uVar50 = auVar76._28_4_;
      auVar96._0_4_ = auVar38._0_4_ + (float)(~uVar24 & (uint)(fVar82 * auVar42._0_4_));
      auVar96._4_4_ = auVar38._4_4_ + (float)(~uVar44 & (uint)(fVar84 * auVar42._4_4_));
      auVar96._8_4_ = auVar38._8_4_ + (float)(~uVar45 & (uint)(fVar85 * auVar42._8_4_));
      auVar96._12_4_ = auVar38._12_4_ + (float)(~uVar46 & (uint)(fVar86 * auVar42._12_4_));
      auVar97._16_4_ = auVar37._0_4_ + (float)(~uVar47 & (uint)(local_2a0 * auVar42._16_4_));
      auVar97._0_16_ = auVar96;
      auVar97._20_4_ = auVar37._4_4_ + (float)(~uVar48 & (uint)(fStack_29c * auVar42._20_4_));
      auVar97._24_4_ = auVar37._8_4_ + (float)(~uVar49 & (uint)(fStack_298 * auVar42._24_4_));
      auVar97._28_4_ = auVar37._12_4_ + (float)(~uVar50 & (uint)(fStack_294 * auVar42._28_4_));
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar31);
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar28);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar30);
      *(float *)(param_1 + lVar27) = auVar96._0_4_;
      uVar9 = vextractps_avx(auVar96,1);
      *(undefined4 *)(param_1 + lVar22) = uVar9;
      uVar9 = vextractps_avx(auVar96,2);
      *(undefined4 *)(param_1 + lVar23) = uVar9;
      uVar9 = vextractps_avx(auVar96,3);
      *(undefined4 *)(param_1 + lVar21) = uVar9;
      auVar37 = auVar97._16_16_;
      *(float *)(param_1 + lVar29) = auVar97._16_4_;
      uVar9 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + lVar31) = uVar9;
      uVar9 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + lVar28) = uVar9;
      auVar73._0_4_ =
           (float)(~uVar24 & (uint)((float)(~auVar65._0_4_ & auVar66._0_4_) * fVar82)) +
           auVar10._0_4_;
      auVar73._4_4_ =
           (float)(~uVar44 & (uint)((float)(~auVar65._4_4_ & auVar66._4_4_) * fVar84)) +
           auVar10._4_4_;
      auVar73._8_4_ =
           (float)(~uVar45 & (uint)((float)(~auVar65._8_4_ & auVar66._8_4_) * fVar85)) +
           auVar10._8_4_;
      auVar73._12_4_ =
           (float)(~uVar46 & (uint)((float)(~auVar65._12_4_ & auVar66._12_4_) * fVar86)) +
           auVar10._12_4_;
      auVar76._16_4_ =
           (float)(~uVar47 & (uint)((float)(~auVar65._16_4_ & auVar66._16_4_) * local_2a0)) +
           auVar32._0_4_;
      auVar76._0_16_ = auVar73;
      auVar76._20_4_ =
           (float)(~uVar48 & (uint)((float)(~auVar65._20_4_ & auVar66._20_4_) * fStack_29c)) +
           auVar32._4_4_;
      auVar76._24_4_ =
           (float)(~uVar49 & (uint)((float)(~auVar65._24_4_ & auVar66._24_4_) * fStack_298)) +
           auVar32._8_4_;
      auVar76._28_4_ =
           (float)(~uVar50 & (uint)((float)(~auVar65._28_4_ & auVar66._28_4_) * fStack_294)) +
           auVar32._12_4_;
      uVar9 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + lVar30) = uVar9;
      *(float *)(param_1 + 4 + lVar27) = auVar73._0_4_;
      uVar9 = vextractps_avx(auVar73,1);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar9;
      uVar9 = vextractps_avx(auVar73,2);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar9;
      uVar9 = vextractps_avx(auVar73,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar9;
      auVar37 = auVar76._16_16_;
      *(float *)(param_1 + 4 + lVar29) = auVar76._16_4_;
      uVar9 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 4 + lVar31) = uVar9;
      uVar9 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar9;
      auVar38._0_4_ =
           auVar72._0_4_ +
           (float)(~uVar24 & (uint)(fVar82 * (float)(~auVar65._0_4_ & auVar41._0_4_)));
      auVar38._4_4_ =
           auVar72._4_4_ +
           (float)(~uVar44 & (uint)(fVar84 * (float)(~auVar65._4_4_ & auVar41._4_4_)));
      auVar38._8_4_ =
           auVar72._8_4_ +
           (float)(~uVar45 & (uint)(fVar85 * (float)(~auVar65._8_4_ & auVar41._8_4_)));
      auVar38._12_4_ =
           auVar72._12_4_ +
           (float)(~uVar46 & (uint)(fVar86 * (float)(~auVar65._12_4_ & auVar41._12_4_)));
      auVar42._16_4_ =
           auVar58._0_4_ +
           (float)(~uVar47 & (uint)(local_2a0 * (float)(~auVar65._16_4_ & auVar41._16_4_)));
      auVar42._0_16_ = auVar38;
      auVar42._20_4_ =
           auVar58._4_4_ +
           (float)(~uVar48 & (uint)(fStack_29c * (float)(~auVar65._20_4_ & auVar41._20_4_)));
      auVar42._24_4_ =
           auVar58._8_4_ +
           (float)(~uVar49 & (uint)(fStack_298 * (float)(~auVar65._24_4_ & auVar41._24_4_)));
      auVar42._28_4_ =
           auVar58._12_4_ +
           (float)(~uVar50 & (uint)(fStack_294 * (float)(~auVar65._28_4_ & auVar41._28_4_)));
      uVar9 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 4 + lVar30) = uVar9;
      *(float *)(param_1 + 8 + lVar27) = auVar38._0_4_;
      uVar9 = vextractps_avx(auVar38,1);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar9;
      uVar9 = vextractps_avx(auVar38,2);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar9;
      uVar9 = vextractps_avx(auVar38,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar9;
      auVar37 = auVar42._16_16_;
      *(float *)(param_1 + 8 + lVar29) = auVar42._16_4_;
      uVar9 = vextractps_avx(auVar37,1);
      *(undefined4 *)(param_1 + 8 + lVar31) = uVar9;
      uVar9 = vextractps_avx(auVar37,2);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar9;
      uVar9 = vextractps_avx(auVar37,3);
      *(undefined4 *)(param_1 + 8 + lVar30) = uVar9;
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar1;
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar8;
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar31) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar30) = uVar7;
      pauVar26 = pauVar26 + 3;
      uVar24 = (int)uVar25 + 8;
      uVar25 = (ulonglong)uVar24;
    } while ((int)uVar24 < (int)(uVar15 & 0xfffffff8));
    vperm2f128_avx(auVar39,auVar40,0x31);
    if ((int)param_5 <= (int)uVar24) {
      return;
    }
  }
  auVar52 = vpshufd_avx(ZEXT416((uint)uVar25),0);
  auVar33._16_16_ = auVar52;
  auVar33._0_16_ = auVar52;
  auVar14 = vpshufd_avx(ZEXT416(param_5),0);
  pauVar26 = (undefined1 (*) [32])(param_2 + uVar25 * 0xc);
  auVar37 = SUB3216(auVar33 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar64 = SUB3216(auVar33 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar52 = vpcmpgtd_avx(auVar14,auVar64);
  auVar87 = vpcmpgtd_avx(auVar14,auVar37);
  auVar53._16_16_ = auVar52;
  auVar53._0_16_ = auVar87;
  uVar15 = vmovmskps_avx(auVar53);
  if (uVar15 == 0xff) {
    auVar65 = pauVar26[2];
    auVar61._16_16_ = *(undefined1 (*) [16])*pauVar26;
    auVar61._0_16_ = *(undefined1 (*) [16])(*pauVar26 + 0x10);
    auVar39 = vblendps_avx(*pauVar26,auVar61,0x24);
    auVar40 = vpermilps_avx(auVar39,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar1 = *(undefined4 *)(pauVar26[1] + 4);
    auVar94._4_4_ = uVar1;
    auVar94._0_4_ = uVar1;
    auVar94._8_4_ = uVar1;
    auVar94._12_4_ = uVar1;
    uVar1 = *(undefined4 *)(pauVar26[1] + 8);
    auVar94._20_4_ = uVar1;
    auVar94._16_4_ = uVar1;
    auVar94._24_4_ = uVar1;
    auVar94._28_4_ = uVar1;
    auVar91._16_16_ = *(undefined1 (*) [16])pauVar26[2];
    auVar91._0_16_ = *(undefined1 (*) [16])(pauVar26[2] + 0x10);
    auVar39 = vblendps_avx(auVar91,auVar65,0x44);
    auVar42 = vpermilps_avx(auVar39,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar39 = vblendps_avx(auVar40,auVar94,0x88);
    auVar52 = vshufps_avx(*(undefined1 (*) [16])(pauVar26[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar26[1] + 0x10),0xec);
    uVar1 = *(undefined4 *)(pauVar26[1] + 0x14);
    auVar62._20_4_ = uVar1;
    auVar62._16_4_ = uVar1;
    auVar62._24_4_ = uVar1;
    auVar62._28_4_ = uVar1;
    auVar62._0_16_ = auVar52;
    auVar40 = vblendps_avx(auVar42,auVar62,0x13);
    auVar60._16_16_ = auVar40._0_16_;
    auVar60._0_16_ = auVar39._0_16_;
    auVar42 = vperm2f128_avx(auVar39,auVar40,0x31);
    auVar39 = vblendps_avx(pauVar26[1],*pauVar26,0x24);
    auVar39 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar26 + 0x10)),auVar39,0x21);
    auVar39 = vshufps_avx(auVar39,pauVar26[1],0xc2);
    auVar40 = vshufps_avx(auVar91,auVar65,0xc4);
    auVar39 = vblendps_avx(auVar39,auVar40,0xe0);
  }
  else {
    auVar52 = vpcmpgtd_avx(auVar14,auVar64);
    auVar87 = vpcmpgtd_avx(auVar14,auVar37);
    uVar24 = auVar87._0_4_;
    auVar32._0_4_ = uVar24 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar44 = auVar87._4_4_;
    auVar32._4_4_ = uVar44 & _UNK_150b50b04;
    uVar45 = auVar87._8_4_;
    auVar32._8_4_ = uVar45 & _UNK_150b50b08;
    uVar46 = auVar87._12_4_;
    auVar32._12_4_ = uVar46 & _UNK_150b50b0c;
    uVar47 = auVar52._0_4_;
    vextractps_avx(auVar32,1);
    vextractps_avx(auVar32,2);
    vextractps_avx(auVar32,3);
    auVar52._0_4_ = uVar24 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar52._4_4_ = uVar44 & _UNK_150b50b24;
    auVar52._8_4_ = uVar45 & _UNK_150b50b28;
    auVar52._12_4_ = uVar46 & _UNK_150b50b2c;
    vextractps_avx(auVar52,1);
    vextractps_avx(auVar52,2);
    vextractps_avx(auVar52,3);
    auVar87._0_4_ = uVar24 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar87._4_4_ = uVar44 & _UNK_150b50b44;
    auVar87._8_4_ = uVar45 & _UNK_150b50b48;
    auVar87._12_4_ = uVar46 & _UNK_150b50b4c;
    vextractps_avx(auVar87,1);
    vextractps_avx(auVar87,2);
    auVar60 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar26 + (uVar47 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar26)));
    vextractps_avx(auVar87,3);
    auVar42 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar26 + (uVar47 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar26 + auVar52._0_4_))));
    auVar39 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar26 + (uVar47 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar26 + auVar87._0_4_))));
  }
  auVar64 = vpcmpgtd_avx(auVar14,auVar64);
  auVar38 = vpcmpgtd_avx(auVar14,auVar37);
  auVar43._16_16_ = auVar64;
  auVar43._0_16_ = auVar38;
  auVar40 = vmaskmovps_avx(auVar43,auVar60);
  auVar42 = vmaskmovps_avx(auVar43,auVar42);
  auVar39 = vmaskmovps_avx(auVar43,auVar39);
  auVar52 = vpshufd_avx(ZEXT416(param_6),0);
  iStack_210 = auVar40._16_4_;
  iVar17 = auVar52._0_4_;
  auVar14._0_4_ = iVar17 + iStack_210;
  iStack_20c = auVar40._20_4_;
  iVar34 = auVar52._4_4_;
  auVar14._4_4_ = iVar34 + iStack_20c;
  iStack_208 = auVar40._24_4_;
  iVar35 = auVar52._8_4_;
  auVar14._8_4_ = iVar35 + iStack_208;
  iStack_204 = auVar40._28_4_;
  iVar36 = auVar52._12_4_;
  auVar14._12_4_ = iVar36 + iStack_204;
  iStack_1f0 = auVar42._16_4_;
  auVar58._0_4_ = iVar17 + iStack_1f0;
  iStack_1ec = auVar42._20_4_;
  auVar58._4_4_ = iVar34 + iStack_1ec;
  iStack_1e8 = auVar42._24_4_;
  auVar58._8_4_ = iVar35 + iStack_1e8;
  iStack_1e4 = auVar42._28_4_;
  auVar58._12_4_ = iVar36 + iStack_1e4;
  auVar52 = vpslld_avx(auVar14,4);
  auVar73 = vpand_avx(auVar64,auVar52);
  lVar18 = param_1 + auVar73._0_4_;
  uVar24 = auVar38._0_4_;
  uVar44 = auVar38._4_4_;
  uVar45 = auVar38._8_4_;
  uVar46 = auVar38._12_4_;
  uVar47 = auVar64._0_4_;
  uVar48 = auVar64._4_4_;
  uVar49 = auVar64._8_4_;
  uVar50 = auVar64._12_4_;
  lVar20 = param_1 + auVar73._4_4_;
  auVar52 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d50) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d54) + lVar20)),0x10);
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d70) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d74) + lVar20)),0x10);
  auVar67 = vpslld_avx(auVar58,4);
  auVar96 = vpand_avx(auVar64,auVar67);
  lVar18 = param_1 + auVar96._0_4_;
  lVar20 = param_1 + auVar96._4_4_;
  auVar14 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d50) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d54) + lVar20)),0x10);
  auVar37 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d70) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d74) + lVar20)),0x10);
  auVar64 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar47 & _UNK_150b50d90) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50d94) + lVar20)),0x10);
  local_220 = auVar40._0_4_;
  auVar72._0_4_ = iVar17 + local_220;
  iStack_21c = auVar40._4_4_;
  auVar72._4_4_ = iVar34 + iStack_21c;
  iStack_218 = auVar40._8_4_;
  auVar72._8_4_ = iVar35 + iStack_218;
  iStack_214 = auVar40._12_4_;
  auVar72._12_4_ = iVar36 + iStack_214;
  local_200 = auVar42._0_4_;
  auVar13._0_4_ = iVar17 + local_200;
  iStack_1fc = auVar42._4_4_;
  auVar13._4_4_ = iVar34 + iStack_1fc;
  iStack_1f8 = auVar42._8_4_;
  auVar13._8_4_ = iVar35 + iStack_1f8;
  iStack_1f4 = auVar42._12_4_;
  auVar13._12_4_ = iVar36 + iStack_1f4;
  auVar32 = vpslld_avx(auVar72,4);
  auVar12 = vpand_avx(auVar38,auVar32);
  lVar18 = param_1 + auVar73._8_4_;
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d58) + lVar18)),
                          0x20);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d78) + lVar18)),
                          0x20);
  lVar18 = param_1 + auVar73._12_4_;
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d5c) + lVar18)),
                          0x30);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d7c) + lVar18)),
                          0x30);
  lVar18 = param_1 + auVar96._8_4_;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d58) + lVar18)),
                          0x20);
  lVar20 = param_1 + auVar96._12_4_;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d5c) + lVar20)),
                          0x30);
  auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d78) + lVar18)),
                          0x20);
  auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d7c) + lVar20)),
                          0x30);
  auVar64 = vinsertps_avx(auVar64,ZEXT416(*(uint *)((ulonglong)(uVar49 & _UNK_150b50d98) + lVar18)),
                          0x20);
  auVar64 = vinsertps_avx(auVar64,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50d9c) + lVar20)),
                          0x30);
  lVar18 = param_1 + auVar12._0_4_;
  auVar89 = vpslld_avx(auVar13,4);
  auVar13 = vpand_avx(auVar89,auVar38);
  lVar20 = param_1 + auVar13._0_4_;
  lVar21 = param_1 + auVar12._4_4_;
  auVar38 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d44) + lVar21)),0x10);
  auVar32 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d64) + lVar21)),0x10);
  lVar18 = param_1 + auVar13._4_4_;
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d44) + lVar18)),0x10);
  auVar11 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d64) + lVar18)),0x10);
  auVar58 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar24 & 
                                            ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c
                                            ) + lVar20)),
                          ZEXT416(*(uint *)((ulonglong)(uVar44 & _UNK_150b50d84) + lVar18)),0x10);
  lVar18 = param_1 + auVar12._8_4_;
  auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d48) + lVar18)),
                          0x20);
  auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d68) + lVar18)),
                          0x20);
  lVar18 = param_1 + auVar13._8_4_;
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d48) + lVar18)),
                          0x20);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d68) + lVar18)),
                          0x20);
  auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar45 & _UNK_150b50d88) + lVar18)),
                          0x20);
  lVar18 = param_1 + auVar12._12_4_;
  auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d4c) + lVar18)),
                          0x30);
  auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d6c) + lVar18)),
                          0x30);
  lVar18 = param_1 + auVar13._12_4_;
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d4c) + lVar18)),
                          0x30);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d6c) + lVar18)),
                          0x30);
  auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar46 & _UNK_150b50d8c) + lVar18)),
                          0x30);
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar73._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar73._4_4_)),0x10);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + auVar73._8_4_)),0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + auVar73._12_4_)),0x30);
  auVar73 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar12._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar12._4_4_)),0x10);
  auVar73 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_1 + auVar12._8_4_)),0x20);
  auVar73 = vinsertps_avx(auVar73,ZEXT416(*(uint *)(param_1 + auVar12._12_4_)),0x30);
  auVar81._16_16_ = auVar72;
  auVar81._0_16_ = auVar73;
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar96._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar96._4_4_)),0x10);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + auVar96._8_4_)),0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)(param_1 + auVar96._12_4_)),0x30);
  auVar83._16_16_ = auVar52;
  auVar83._0_16_ = auVar38;
  auVar52 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar13._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar13._4_4_)),0x10);
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + auVar13._8_4_)),0x20);
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + auVar13._12_4_)),0x30);
  auVar63._16_16_ = auVar87;
  auVar63._0_16_ = auVar32;
  auVar95._16_16_ = auVar72;
  auVar95._0_16_ = auVar52;
  auVar77._16_16_ = auVar14;
  auVar77._0_16_ = auVar10;
  auVar54._16_16_ = auVar37;
  auVar54._0_16_ = auVar11;
  auVar40 = vmaskmovps_avx(auVar43,auVar81);
  auVar42 = vmaskmovps_avx(auVar43,auVar83);
  auVar65 = vmaskmovps_avx(auVar43,auVar63);
  auVar76 = vmaskmovps_avx(auVar43,auVar95);
  auVar66 = vmaskmovps_avx(auVar43,auVar77);
  auVar41 = vmaskmovps_avx(auVar43,auVar54);
  auVar57 = vpermilps_avx(auVar57,0);
  auVar59 = vsubps_avx(auVar40,auVar76);
  auVar74 = vsubps_avx(auVar42,auVar66);
  auVar75 = vsubps_avx(auVar65,auVar41);
  auVar78._0_4_ =
       auVar75._0_4_ * auVar75._0_4_ + auVar74._0_4_ * auVar74._0_4_ + auVar59._0_4_ * auVar59._0_4_
  ;
  auVar78._4_4_ =
       auVar75._4_4_ * auVar75._4_4_ + auVar74._4_4_ * auVar74._4_4_ + auVar59._4_4_ * auVar59._4_4_
  ;
  auVar78._8_4_ =
       auVar75._8_4_ * auVar75._8_4_ + auVar74._8_4_ * auVar74._8_4_ + auVar59._8_4_ * auVar59._8_4_
  ;
  auVar78._12_4_ =
       auVar75._12_4_ * auVar75._12_4_ +
       auVar74._12_4_ * auVar74._12_4_ + auVar59._12_4_ * auVar59._12_4_;
  auVar78._16_4_ =
       auVar75._16_4_ * auVar75._16_4_ +
       auVar74._16_4_ * auVar74._16_4_ + auVar59._16_4_ * auVar59._16_4_;
  auVar78._20_4_ =
       auVar75._20_4_ * auVar75._20_4_ +
       auVar74._20_4_ * auVar74._20_4_ + auVar59._20_4_ * auVar59._20_4_;
  auVar78._24_4_ =
       auVar75._24_4_ * auVar75._24_4_ +
       auVar74._24_4_ * auVar74._24_4_ + auVar59._24_4_ * auVar59._24_4_;
  auVar78._28_4_ =
       auVar75._28_4_ * auVar75._28_4_ +
       auVar74._28_4_ * auVar74._28_4_ + auVar59._28_4_ * auVar59._28_4_;
  auVar65 = vsqrtps_avx(auVar78);
  local_1e0 = auVar39._0_4_;
  fStack_1dc = auVar39._4_4_;
  fStack_1d8 = auVar39._8_4_;
  fStack_1d4 = auVar39._12_4_;
  fStack_1d0 = auVar39._16_4_;
  fStack_1cc = auVar39._20_4_;
  fStack_1c8 = auVar39._24_4_;
  fStack_1c4 = auVar39._28_4_;
  auVar98._0_4_ = auVar57._0_4_ * local_1e0;
  auVar98._4_4_ = auVar57._4_4_ * fStack_1dc;
  auVar98._8_4_ = auVar57._8_4_ * fStack_1d8;
  auVar98._12_4_ = auVar57._12_4_ * fStack_1d4;
  auVar98._16_4_ = auVar57._0_4_ * fStack_1d0;
  auVar98._20_4_ = auVar57._4_4_ * fStack_1cc;
  auVar98._24_4_ = auVar57._8_4_ * fStack_1c8;
  auVar98._28_4_ = auVar57._12_4_ * fStack_1c4;
  auVar40 = vcmpps_avx(auVar65,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar39 = vdivps_avx(auVar59,auVar65);
  auVar39 = vblendvps_avx(auVar39,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar40);
  auVar42 = vsubps_avx(auVar65,auVar98);
  auVar51 = vpermilps_avx(auVar51,0);
  fVar82 = auVar42._0_4_ * auVar51._0_4_;
  fVar84 = auVar42._4_4_ * auVar51._4_4_;
  fVar85 = auVar42._8_4_ * auVar51._8_4_;
  fVar86 = auVar42._12_4_ * auVar51._12_4_;
  fVar68 = auVar42._16_4_ * auVar51._0_4_;
  fVar69 = auVar42._20_4_ * auVar51._4_4_;
  fVar70 = auVar42._24_4_ * auVar51._8_4_;
  fVar71 = auVar42._28_4_ * auVar51._12_4_;
  auVar42 = vcmpps_avx(auVar42,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  uVar24 = auVar42._0_4_;
  uVar44 = auVar42._4_4_;
  uVar45 = auVar42._8_4_;
  uVar46 = auVar42._12_4_;
  uVar47 = auVar42._16_4_;
  uVar48 = auVar42._20_4_;
  uVar49 = auVar42._24_4_;
  uVar50 = auVar42._28_4_;
  auVar51._0_4_ = auVar76._0_4_ + (float)(~uVar24 & (uint)(auVar39._0_4_ * fVar82));
  auVar51._4_4_ = auVar76._4_4_ + (float)(~uVar44 & (uint)(auVar39._4_4_ * fVar84));
  auVar51._8_4_ = auVar76._8_4_ + (float)(~uVar45 & (uint)(auVar39._8_4_ * fVar85));
  auVar51._12_4_ = auVar76._12_4_ + (float)(~uVar46 & (uint)(auVar39._12_4_ * fVar86));
  auVar92._16_4_ = auVar76._16_4_ + (float)(~uVar47 & (uint)(auVar39._16_4_ * fVar68));
  auVar92._0_16_ = auVar51;
  auVar92._20_4_ = auVar76._20_4_ + (float)(~uVar48 & (uint)(auVar39._20_4_ * fVar69));
  auVar92._24_4_ = auVar76._24_4_ + (float)(~uVar49 & (uint)(auVar39._24_4_ * fVar70));
  auVar92._28_4_ = auVar76._28_4_ + (float)(~uVar50 & (uint)(auVar39._28_4_ * fVar71));
  cVar19 = (char)uVar15;
  iVar36 = auVar89._0_4_;
  auVar57 = auVar92._16_16_;
  iVar35 = auVar89._4_4_;
  iVar17 = auVar89._8_4_;
  iVar34 = auVar89._12_4_;
  iVar56 = auVar67._0_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar36) = auVar51._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + iVar35) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + iVar17) = uVar1;
  }
  if ((uVar15 & 8) == 0) {
    auVar39 = vdivps_avx(auVar74,auVar65);
  }
  else {
    uVar1 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + iVar34) = uVar1;
    auVar39 = vdivps_avx(auVar74,auVar65);
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar56) = auVar92._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar67,1);
    uVar1 = vextractps_avx(auVar57,1);
    *(undefined4 *)(param_1 + iVar16) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar67,2);
    uVar1 = vextractps_avx(auVar57,2);
    *(undefined4 *)(param_1 + iVar16) = uVar1;
  }
  uVar8 = ~uVar50 & (uint)((float)(~auVar40._28_4_ & auVar39._28_4_) * fVar71);
  uVar7 = ~uVar49 & (uint)((float)(~auVar40._24_4_ & auVar39._24_4_) * fVar70);
  uVar6 = ~uVar48 & (uint)((float)(~auVar40._20_4_ & auVar39._20_4_) * fVar69);
  uVar5 = ~uVar47 & (uint)((float)(~auVar40._16_4_ & auVar39._16_4_) * fVar68);
  uVar4 = ~uVar46 & (uint)((float)(~auVar40._12_4_ & auVar39._12_4_) * fVar86);
  uVar3 = ~uVar45 & (uint)((float)(~auVar40._8_4_ & auVar39._8_4_) * fVar85);
  uVar2 = ~uVar44 & (uint)((float)(~auVar40._4_4_ & auVar39._4_4_) * fVar84);
  uVar1 = ~uVar24 & (uint)((float)(~auVar40._0_4_ & auVar39._0_4_) * fVar82);
  if (cVar19 < '\0') {
    iVar16 = vextractps_avx(auVar67,3);
    uVar9 = vextractps_avx(auVar57,3);
    *(undefined4 *)(param_1 + iVar16) = uVar9;
    auVar88._0_4_ = auVar66._0_4_ + (float)uVar1;
    auVar88._4_4_ = auVar66._4_4_ + (float)uVar2;
    auVar88._8_4_ = auVar66._8_4_ + (float)uVar3;
    auVar88._12_4_ = auVar66._12_4_ + (float)uVar4;
    auVar88._16_4_ = auVar66._16_4_ + (float)uVar5;
    auVar88._20_4_ = auVar66._20_4_ + (float)uVar6;
    auVar88._24_4_ = auVar66._24_4_ + (float)uVar7;
    auVar88._28_4_ = auVar66._28_4_ + (float)uVar8;
  }
  else {
    auVar88._0_4_ = auVar66._0_4_ + (float)uVar1;
    auVar88._4_4_ = auVar66._4_4_ + (float)uVar2;
    auVar88._8_4_ = auVar66._8_4_ + (float)uVar3;
    auVar88._12_4_ = auVar66._12_4_ + (float)uVar4;
    auVar88._16_4_ = auVar66._16_4_ + (float)uVar5;
    auVar88._20_4_ = auVar66._20_4_ + (float)uVar6;
    auVar88._24_4_ = auVar66._24_4_ + (float)uVar7;
    auVar88._28_4_ = auVar66._28_4_ + (float)uVar8;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar36) = auVar88._0_4_;
  }
  auVar51 = auVar88._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar35) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar1;
  }
  if ((uVar15 & 8) == 0) {
    auVar39 = vdivps_avx(auVar75,auVar65);
  }
  else {
    uVar1 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar34) = uVar1;
    auVar39 = vdivps_avx(auVar75,auVar65);
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar56) = auVar88._16_4_;
  }
  auVar51 = auVar88._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar67,1);
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar67,2);
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
  }
  uVar8 = ~uVar50 & (uint)((float)(~auVar40._28_4_ & auVar39._28_4_) * fVar71);
  uVar7 = ~uVar49 & (uint)((float)(~auVar40._24_4_ & auVar39._24_4_) * fVar70);
  uVar6 = ~uVar48 & (uint)((float)(~auVar40._20_4_ & auVar39._20_4_) * fVar69);
  uVar5 = ~uVar47 & (uint)((float)(~auVar40._16_4_ & auVar39._16_4_) * fVar68);
  uVar4 = ~uVar46 & (uint)((float)(~auVar40._12_4_ & auVar39._12_4_) * fVar86);
  uVar3 = ~uVar45 & (uint)((float)(~auVar40._8_4_ & auVar39._8_4_) * fVar85);
  uVar2 = ~uVar44 & (uint)((float)(~auVar40._4_4_ & auVar39._4_4_) * fVar84);
  uVar1 = ~uVar24 & (uint)((float)(~auVar40._0_4_ & auVar39._0_4_) * fVar82);
  if (cVar19 < '\0') {
    iVar16 = vextractps_avx(auVar67,3);
    uVar9 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar9;
    auVar55._0_4_ = auVar41._0_4_ + (float)uVar1;
    auVar55._4_4_ = auVar41._4_4_ + (float)uVar2;
    auVar55._8_4_ = auVar41._8_4_ + (float)uVar3;
    auVar55._12_4_ = auVar41._12_4_ + (float)uVar4;
    auVar55._16_4_ = auVar41._16_4_ + (float)uVar5;
    auVar55._20_4_ = auVar41._20_4_ + (float)uVar6;
    auVar55._24_4_ = auVar41._24_4_ + (float)uVar7;
    auVar55._28_4_ = auVar41._28_4_ + (float)uVar8;
  }
  else {
    auVar55._0_4_ = auVar41._0_4_ + (float)uVar1;
    auVar55._4_4_ = auVar41._4_4_ + (float)uVar2;
    auVar55._8_4_ = auVar41._8_4_ + (float)uVar3;
    auVar55._12_4_ = auVar41._12_4_ + (float)uVar4;
    auVar55._16_4_ = auVar41._16_4_ + (float)uVar5;
    auVar55._20_4_ = auVar41._20_4_ + (float)uVar6;
    auVar55._24_4_ = auVar41._24_4_ + (float)uVar7;
    auVar55._28_4_ = auVar41._28_4_ + (float)uVar8;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar36) = auVar55._0_4_;
  }
  auVar51 = auVar55._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar35) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar1;
  }
  if ((uVar15 & 8) != 0) {
    uVar1 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar34) = uVar1;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar56) = auVar55._16_4_;
  }
  auVar51 = auVar55._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar67,1);
    uVar1 = vextractps_avx(auVar51,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar67,2);
    uVar1 = vextractps_avx(auVar51,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
  }
  if (cVar19 < '\0') {
    iVar16 = vextractps_avx(auVar67,3);
    uVar1 = vextractps_avx(auVar51,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar36) = auVar58._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar58,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar35) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar58,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
  }
  if ((uVar15 & 8) != 0) {
    uVar1 = vextractps_avx(auVar58,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar34) = uVar1;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar56) = auVar64._0_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar67,1);
    uVar1 = vextractps_avx(auVar64,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar67,2);
    uVar1 = vextractps_avx(auVar64,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar1;
  }
  if (cVar19 < '\0') {
    uVar1 = vextractps_avx(auVar64,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)auVar67._12_4_) = uVar1;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap_avx @ 1402f3ca0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessWeightmap_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               uint param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [32];
  uint uVar17;
  longlong lVar18;
  undefined4 uVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar40;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar54 [16];
  undefined1 auVar53 [32];
  undefined1 auVar57 [16];
  int iVar55;
  int iVar61;
  int iVar62;
  uint uVar63;
  uint uVar64;
  undefined1 auVar58 [32];
  undefined1 auVar56 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  uint uVar65;
  undefined1 auVar66 [32];
  undefined1 auVar67 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar72 [16];
  undefined1 auVar71 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  int local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  int iStack_2b4;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  int local_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auVar70 [32];
  undefined1 auVar81 [32];
  
  uVar11 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar11 = param_6;
  }
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    uVar21 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    auVar67 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar72 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    pauVar16 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar21 = 0;
    do {
      auVar60 = pauVar16[-2];
      auVar42._16_16_ = *(undefined1 (*) [16])pauVar16[-2];
      auVar42._0_16_ = *(undefined1 (*) [16])(pauVar16[-2] + 0x10);
      auVar42 = vblendps_avx(auVar60,auVar42,0x24);
      uVar19 = *(undefined4 *)(pauVar16[-1] + 4);
      auVar74._4_4_ = uVar19;
      auVar74._0_4_ = uVar19;
      auVar74._8_4_ = uVar19;
      auVar74._12_4_ = uVar19;
      uVar19 = *(undefined4 *)(pauVar16[-1] + 8);
      auVar74._20_4_ = uVar19;
      auVar74._16_4_ = uVar19;
      auVar74._24_4_ = uVar19;
      auVar74._28_4_ = uVar19;
      auVar34 = vpermilps_avx(auVar42,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar58._16_16_ = *(undefined1 (*) [16])*pauVar16;
      auVar58._0_16_ = *(undefined1 (*) [16])(*pauVar16 + 0x10);
      auVar42 = vblendps_avx(auVar58,*pauVar16,0x44);
      auVar52 = vpermilps_avx(auVar42,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar31 = vshufps_avx(*(undefined1 (*) [16])(pauVar16[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar16[-1] + 0x10),0xec);
      uVar19 = *(undefined4 *)(pauVar16[-1] + 0x14);
      auVar47._20_4_ = uVar19;
      auVar47._16_4_ = uVar19;
      auVar47._24_4_ = uVar19;
      auVar47._28_4_ = uVar19;
      auVar47._0_16_ = auVar31;
      auVar42 = vblendps_avx(auVar34,auVar74,0x88);
      auVar34 = vblendps_avx(auVar52,auVar47,0x13);
      auVar52 = vblendps_avx(pauVar16[-1],auVar60,0x24);
      auVar60 = vshufps_avx(auVar58,*pauVar16,0xc4);
      auVar52 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(pauVar16[-2] + 0x10)),auVar52,0x21);
      auVar54 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + *(int *)(pauVar16[-2] + 4))),
                            (uint)*(byte *)(param_3 + *(int *)(pauVar16[-2] + 0x10)),1);
      local_2c0 = auVar67._0_4_;
      iStack_2bc = auVar67._4_4_;
      iStack_2b8 = auVar67._8_4_;
      iStack_2b4 = auVar67._12_4_;
      auVar31._0_4_ = auVar42._0_4_ + local_2c0;
      auVar31._4_4_ = auVar42._4_4_ + iStack_2bc;
      auVar31._8_4_ = auVar42._8_4_ + iStack_2b8;
      auVar31._12_4_ = auVar42._12_4_ + iStack_2b4;
      auVar50._0_4_ = auVar34._0_4_ + local_2c0;
      auVar50._4_4_ = auVar34._4_4_ + iStack_2bc;
      auVar50._8_4_ = auVar34._8_4_ + iStack_2b8;
      auVar50._12_4_ = auVar34._12_4_ + iStack_2b4;
      auVar41._0_4_ = auVar42._16_4_ + local_2c0;
      auVar41._4_4_ = auVar42._20_4_ + iStack_2bc;
      auVar41._8_4_ = auVar42._24_4_ + iStack_2b8;
      auVar41._12_4_ = auVar42._28_4_ + iStack_2b4;
      auVar10._0_4_ = auVar34._16_4_ + local_2c0;
      auVar10._4_4_ = auVar34._20_4_ + iStack_2bc;
      auVar10._8_4_ = auVar34._24_4_ + iStack_2b8;
      auVar10._12_4_ = auVar34._28_4_ + iStack_2b4;
      auVar54 = vpinsrb_avx(auVar54,(uint)*(byte *)(param_3 + *(int *)(pauVar16[-2] + 0x1c)),2);
      auVar43 = vpslld_avx(auVar50,4);
      auVar56 = vpslld_avx(auVar31,4);
      auVar44 = vpinsrb_avx(auVar54,(uint)*(byte *)(param_3 + *(int *)(pauVar16[-1] + 8)),3);
      auVar45 = vpinsrb_avx(auVar44,(uint)*(byte *)(param_3 + *(int *)(pauVar16[-1] + 0x14)),4);
      lVar25 = (longlong)auVar43._0_4_;
      lVar26 = (longlong)auVar56._0_4_;
      lVar15 = (longlong)auVar43._4_4_;
      auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + lVar15)),0x10);
      auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar15)),0x10);
      auVar54 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar25)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar15)),0x10);
      lVar28 = (longlong)auVar56._4_4_;
      lVar25 = (longlong)auVar56._8_4_;
      lVar15 = (longlong)auVar56._12_4_;
      lVar18 = (longlong)auVar43._8_4_;
      lVar22 = (longlong)auVar43._12_4_;
      auVar43 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar28)),0x10);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar18)),0x20);
      auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + lVar25)),0x20);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 4 + lVar18)),0x20);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x10);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x20);
      auVar78 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x10);
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 8 + lVar18)),0x20);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x20);
      auVar45 = vpinsrb_avx(auVar45,(uint)*(byte *)(param_3 + *(int *)*pauVar16),5);
      auVar77 = vpslld_avx(auVar10,4);
      auVar41 = vpslld_avx(auVar41,4);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar22)),0x30);
      lVar26 = (longlong)auVar41._0_4_;
      auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + lVar15)),0x30);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 4 + lVar22)),0x30);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 4 + lVar15)),0x30);
      lVar18 = (longlong)auVar41._4_4_;
      lVar27 = (longlong)auVar41._8_4_;
      auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)(param_1 + 8 + lVar22)),0x30);
      auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_1 + 8 + lVar15)),0x30);
      lVar29 = (longlong)auVar41._12_4_;
      auVar41 = vpinsrb_avx(auVar45,(uint)*(byte *)(param_3 + *(int *)(*pauVar16 + 0xc)),6);
      auVar10 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_3 + *(int *)(*pauVar16 + 0x18)),7);
      auVar41 = vpmovzxbd_avx(auVar44);
      auVar44 = vpslld_avx(auVar41,2);
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + (ulonglong)auVar44._0_4_)),
                              ZEXT416(*(uint *)(param_4 + (ulonglong)auVar44._4_4_)),0x10);
      lVar22 = (longlong)auVar77._0_4_;
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar44._8_4_)),0x20);
      auVar10 = vpshufd_avx(auVar10,0x55);
      auVar10 = vpmovzxbd_avx(auVar10);
      auVar45 = vpslld_avx(auVar10,2);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar44._12_4_)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + (ulonglong)auVar45._0_4_)),
                              ZEXT416(*(uint *)(param_4 + (ulonglong)auVar45._4_4_)),0x10);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar45._8_4_)),0x20);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar45._12_4_)),0x30);
      lVar28 = (longlong)auVar77._4_4_;
      lVar15 = (longlong)auVar77._8_4_;
      lVar25 = (longlong)auVar77._12_4_;
      auVar59._16_16_ = auVar31;
      auVar59._0_16_ = auVar43;
      auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar22)),
                              ZEXT416(*(uint *)(param_1 + lVar28)),0x10);
      auVar66._16_16_ = auVar50;
      auVar66._0_16_ = auVar56;
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar15)),0x20);
      auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar18)),0x10);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_1 + lVar25)),0x30);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + lVar29)),0x30);
      auVar68._16_16_ = auVar31;
      auVar68._0_16_ = auVar50;
      auVar43 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar22)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x10);
      auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar18)),0x10);
      auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + 4 + lVar15)),0x20);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x30);
      auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + 4 + lVar29)),0x30);
      auVar44 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar22)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x10);
      auVar45 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar18)),0x10);
      auVar44 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_1 + 8 + lVar15)),0x20);
      auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar44 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x30);
      auVar80._16_16_ = auVar43;
      auVar80._0_16_ = auVar56;
      auVar45 = vinsertps_avx(auVar45,ZEXT416(*(uint *)(param_1 + 8 + lVar29)),0x30);
      auVar33._16_16_ = auVar54;
      auVar33._0_16_ = auVar78;
      auVar51._16_16_ = auVar44;
      auVar51._0_16_ = auVar45;
      auVar47 = vsubps_avx(auVar59,auVar68);
      auVar58 = vsubps_avx(auVar66,auVar80);
      auVar52 = vshufps_avx(auVar52,pauVar16[-1],0xc2);
      auVar33 = vsubps_avx(auVar33,auVar51);
      auVar52 = vblendps_avx(auVar52,auVar60,0xe0);
      auVar60._0_4_ =
           auVar47._0_4_ * auVar47._0_4_ + auVar58._0_4_ * auVar58._0_4_ +
           auVar33._0_4_ * auVar33._0_4_;
      auVar60._4_4_ =
           auVar47._4_4_ * auVar47._4_4_ + auVar58._4_4_ * auVar58._4_4_ +
           auVar33._4_4_ * auVar33._4_4_;
      auVar60._8_4_ =
           auVar47._8_4_ * auVar47._8_4_ + auVar58._8_4_ * auVar58._8_4_ +
           auVar33._8_4_ * auVar33._8_4_;
      auVar60._12_4_ =
           auVar47._12_4_ * auVar47._12_4_ + auVar58._12_4_ * auVar58._12_4_ +
           auVar33._12_4_ * auVar33._12_4_;
      auVar60._16_4_ =
           auVar47._16_4_ * auVar47._16_4_ + auVar58._16_4_ * auVar58._16_4_ +
           auVar33._16_4_ * auVar33._16_4_;
      auVar60._20_4_ =
           auVar47._20_4_ * auVar47._20_4_ + auVar58._20_4_ * auVar58._20_4_ +
           auVar33._20_4_ * auVar33._20_4_;
      auVar60._24_4_ =
           auVar47._24_4_ * auVar47._24_4_ + auVar58._24_4_ * auVar58._24_4_ +
           auVar33._24_4_ * auVar33._24_4_;
      auVar60._28_4_ =
           auVar47._28_4_ * auVar47._28_4_ + auVar58._28_4_ * auVar58._28_4_ +
           auVar33._28_4_ * auVar33._28_4_;
      uVar19 = *(undefined4 *)(param_1 + 0xc + lVar26);
      auVar51 = vsqrtps_avx(auVar60);
      uVar1 = *(undefined4 *)(param_1 + 0xc + lVar18);
      auVar60 = vdivps_avx(auVar47,auVar51);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar27);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar22);
      auVar58 = vdivps_avx(auVar58,auVar51);
      auVar33 = vdivps_avx(auVar33,auVar51);
      auVar47 = vcmpps_avx(auVar51,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar60 = vblendvps_avx(auVar60,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar47);
      local_260 = auVar72._0_4_;
      fStack_25c = auVar72._4_4_;
      fStack_258 = auVar72._8_4_;
      fStack_254 = auVar72._12_4_;
      auVar83._0_4_ = auVar52._0_4_ * local_260;
      auVar83._4_4_ = auVar52._4_4_ * fStack_25c;
      auVar83._8_4_ = auVar52._8_4_ * fStack_258;
      auVar83._12_4_ = auVar52._12_4_ * fStack_254;
      auVar83._16_4_ = auVar52._16_4_ * local_260;
      auVar83._20_4_ = auVar52._20_4_ * fStack_25c;
      auVar83._24_4_ = auVar52._24_4_ * fStack_258;
      auVar83._28_4_ = auVar52._28_4_ * fStack_254;
      auVar52 = vsubps_avx(auVar51,auVar83);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar29);
      fVar93 = auVar52._0_4_ * auVar41._0_4_;
      fVar94 = auVar52._4_4_ * auVar41._4_4_;
      fVar95 = auVar52._8_4_ * auVar41._8_4_;
      fVar96 = auVar52._12_4_ * auVar41._12_4_;
      fVar97 = auVar52._16_4_ * auVar10._0_4_;
      fVar98 = auVar52._20_4_ * auVar10._4_4_;
      fVar99 = auVar52._24_4_ * auVar10._8_4_;
      fVar100 = auVar52._28_4_ * auVar10._12_4_;
      auVar52 = vcmpps_avx(auVar52,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar20 = auVar52._0_4_;
      uVar17 = auVar52._4_4_;
      uVar23 = auVar52._8_4_;
      uVar24 = auVar52._12_4_;
      uVar40 = auVar52._16_4_;
      uVar63 = auVar52._20_4_;
      uVar64 = auVar52._24_4_;
      uVar65 = auVar52._28_4_;
      auVar77._0_4_ = auVar50._0_4_ + (float)(~uVar20 & (uint)(auVar60._0_4_ * fVar93));
      auVar77._4_4_ = auVar50._4_4_ + (float)(~uVar17 & (uint)(auVar60._4_4_ * fVar94));
      auVar77._8_4_ = auVar50._8_4_ + (float)(~uVar23 & (uint)(auVar60._8_4_ * fVar95));
      auVar77._12_4_ = auVar50._12_4_ + (float)(~uVar24 & (uint)(auVar60._12_4_ * fVar96));
      auVar85._16_4_ = auVar31._0_4_ + (float)(~uVar40 & (uint)(auVar60._16_4_ * fVar97));
      auVar85._0_16_ = auVar77;
      auVar85._20_4_ = auVar31._4_4_ + (float)(~uVar63 & (uint)(auVar60._20_4_ * fVar98));
      auVar85._24_4_ = auVar31._8_4_ + (float)(~uVar64 & (uint)(auVar60._24_4_ * fVar99));
      auVar85._28_4_ = auVar31._12_4_ + (float)(~uVar65 & (uint)(auVar60._28_4_ * fVar100));
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar28);
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar15);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar25);
      *(float *)(param_1 + lVar26) = auVar77._0_4_;
      uVar8 = vextractps_avx(auVar77,1);
      *(undefined4 *)(param_1 + lVar18) = uVar8;
      uVar8 = vextractps_avx(auVar77,2);
      *(undefined4 *)(param_1 + lVar27) = uVar8;
      uVar8 = vextractps_avx(auVar77,3);
      *(undefined4 *)(param_1 + lVar29) = uVar8;
      auVar31 = auVar85._16_16_;
      *(float *)(param_1 + lVar22) = auVar85._16_4_;
      uVar8 = vextractps_avx(auVar31,1);
      *(undefined4 *)(param_1 + lVar28) = uVar8;
      uVar8 = vextractps_avx(auVar31,2);
      *(undefined4 *)(param_1 + lVar15) = uVar8;
      auVar78._0_4_ =
           auVar56._0_4_ +
           (float)(~uVar20 & (uint)((float)(~auVar47._0_4_ & auVar58._0_4_) * fVar93));
      auVar78._4_4_ =
           auVar56._4_4_ +
           (float)(~uVar17 & (uint)((float)(~auVar47._4_4_ & auVar58._4_4_) * fVar94));
      auVar78._8_4_ =
           auVar56._8_4_ +
           (float)(~uVar23 & (uint)((float)(~auVar47._8_4_ & auVar58._8_4_) * fVar95));
      auVar78._12_4_ =
           auVar56._12_4_ +
           (float)(~uVar24 & (uint)((float)(~auVar47._12_4_ & auVar58._12_4_) * fVar96));
      auVar81._16_4_ =
           auVar43._0_4_ +
           (float)(~uVar40 & (uint)((float)(~auVar47._16_4_ & auVar58._16_4_) * fVar97));
      auVar81._0_16_ = auVar78;
      auVar81._20_4_ =
           auVar43._4_4_ +
           (float)(~uVar63 & (uint)((float)(~auVar47._20_4_ & auVar58._20_4_) * fVar98));
      auVar81._24_4_ =
           auVar43._8_4_ +
           (float)(~uVar64 & (uint)((float)(~auVar47._24_4_ & auVar58._24_4_) * fVar99));
      auVar81._28_4_ =
           auVar43._12_4_ +
           (float)(~uVar65 & (uint)((float)(~auVar47._28_4_ & auVar58._28_4_) * fVar100));
      uVar8 = vextractps_avx(auVar31,3);
      *(undefined4 *)(param_1 + lVar25) = uVar8;
      *(float *)(param_1 + 4 + lVar26) = auVar78._0_4_;
      uVar8 = vextractps_avx(auVar78,1);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar8;
      uVar8 = vextractps_avx(auVar78,2);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar8;
      uVar8 = vextractps_avx(auVar78,3);
      *(undefined4 *)(param_1 + 4 + lVar29) = uVar8;
      auVar31 = auVar81._16_16_;
      *(float *)(param_1 + 4 + lVar22) = auVar81._16_4_;
      uVar8 = vextractps_avx(auVar31,1);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar8;
      uVar8 = vextractps_avx(auVar31,2);
      *(undefined4 *)(param_1 + 4 + lVar15) = uVar8;
      auVar54._0_4_ =
           (float)(~uVar20 & (uint)((float)(~auVar47._0_4_ & auVar33._0_4_) * fVar93)) +
           auVar45._0_4_;
      auVar54._4_4_ =
           (float)(~uVar17 & (uint)((float)(~auVar47._4_4_ & auVar33._4_4_) * fVar94)) +
           auVar45._4_4_;
      auVar54._8_4_ =
           (float)(~uVar23 & (uint)((float)(~auVar47._8_4_ & auVar33._8_4_) * fVar95)) +
           auVar45._8_4_;
      auVar54._12_4_ =
           (float)(~uVar24 & (uint)((float)(~auVar47._12_4_ & auVar33._12_4_) * fVar96)) +
           auVar45._12_4_;
      auVar52._16_4_ =
           (float)(~uVar40 & (uint)((float)(~auVar47._16_4_ & auVar33._16_4_) * fVar97)) +
           auVar44._0_4_;
      auVar52._0_16_ = auVar54;
      auVar52._20_4_ =
           (float)(~uVar63 & (uint)((float)(~auVar47._20_4_ & auVar33._20_4_) * fVar98)) +
           auVar44._4_4_;
      auVar52._24_4_ =
           (float)(~uVar64 & (uint)((float)(~auVar47._24_4_ & auVar33._24_4_) * fVar99)) +
           auVar44._8_4_;
      auVar52._28_4_ =
           (float)(~uVar65 & (uint)((float)(~auVar47._28_4_ & auVar33._28_4_) * fVar100)) +
           auVar44._12_4_;
      uVar8 = vextractps_avx(auVar31,3);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar8;
      *(float *)(param_1 + 8 + lVar26) = auVar54._0_4_;
      uVar8 = vextractps_avx(auVar54,1);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar8;
      uVar8 = vextractps_avx(auVar54,2);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar8;
      uVar8 = vextractps_avx(auVar54,3);
      *(undefined4 *)(param_1 + 8 + lVar29) = uVar8;
      auVar31 = auVar52._16_16_;
      *(float *)(param_1 + 8 + lVar22) = auVar52._16_4_;
      uVar8 = vextractps_avx(auVar31,1);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar8;
      uVar8 = vextractps_avx(auVar31,2);
      *(undefined4 *)(param_1 + 8 + lVar15) = uVar8;
      uVar8 = vextractps_avx(auVar31,3);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar8;
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar19;
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar1;
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar29) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar15) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar7;
      pauVar16 = pauVar16 + 3;
      uVar20 = (int)uVar21 + 8;
      uVar21 = (ulonglong)uVar20;
    } while ((int)uVar20 < (int)(uVar11 & 0xfffffff8));
    vperm2f128_avx(auVar42,auVar34,0x31);
    if ((int)param_6 <= (int)uVar20) {
      return;
    }
  }
  auVar67 = vpshufd_avx(ZEXT416((uint)uVar21),0);
  auVar34._16_16_ = auVar67;
  auVar34._0_16_ = auVar67;
  auVar31 = vpshufd_avx(ZEXT416(param_6),0);
  auVar50 = SUB3216(auVar34 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar54 = SUB3216(auVar34 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar67 = vpcmpgtd_avx(auVar31,auVar54);
  auVar72 = vpcmpgtd_avx(auVar31,auVar50);
  auVar48._16_16_ = auVar67;
  auVar48._0_16_ = auVar72;
  pauVar16 = (undefined1 (*) [32])(param_2 + uVar21 * 0xc);
  uVar11 = vmovmskps_avx(auVar48);
  if (uVar11 == 0xff) {
    auVar60 = pauVar16[2];
    auVar36._16_16_ = *(undefined1 (*) [16])*pauVar16;
    auVar36._0_16_ = *(undefined1 (*) [16])(*pauVar16 + 0x10);
    auVar42 = vblendps_avx(*pauVar16,auVar36,0x24);
    auVar34 = vpermilps_avx(auVar42,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar19 = *(undefined4 *)(pauVar16[1] + 4);
    auVar90._4_4_ = uVar19;
    auVar90._0_4_ = uVar19;
    auVar90._8_4_ = uVar19;
    auVar90._12_4_ = uVar19;
    uVar19 = *(undefined4 *)(pauVar16[1] + 8);
    auVar90._20_4_ = uVar19;
    auVar90._16_4_ = uVar19;
    auVar90._24_4_ = uVar19;
    auVar90._28_4_ = uVar19;
    auVar86._16_16_ = *(undefined1 (*) [16])pauVar16[2];
    auVar86._0_16_ = *(undefined1 (*) [16])(pauVar16[2] + 0x10);
    auVar42 = vblendps_avx(auVar86,auVar60,0x44);
    auVar52 = vpermilps_avx(auVar42,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar42 = vblendps_avx(auVar34,auVar90,0x88);
    auVar43 = vshufps_avx(*(undefined1 (*) [16])(pauVar16[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar16[1] + 0x10),0xec);
    uVar19 = *(undefined4 *)(pauVar16[1] + 0x14);
    auVar37._20_4_ = uVar19;
    auVar37._16_4_ = uVar19;
    auVar37._24_4_ = uVar19;
    auVar37._28_4_ = uVar19;
    auVar37._0_16_ = auVar43;
    auVar34 = vblendps_avx(auVar52,auVar37,0x13);
    auVar35._16_16_ = auVar34._0_16_;
    auVar35._0_16_ = auVar42._0_16_;
    auVar52 = vperm2f128_avx(auVar42,auVar34,0x31);
    auVar42 = vblendps_avx(pauVar16[1],*pauVar16,0x24);
    auVar42 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar16 + 0x10)),auVar42,0x21);
    auVar42 = vshufps_avx(auVar42,pauVar16[1],0xc2);
    auVar34 = vshufps_avx(auVar86,auVar60,0xc4);
    auVar42 = vblendps_avx(auVar42,auVar34,0xe0);
  }
  else {
    auVar43 = vpcmpgtd_avx(auVar31,auVar54);
    auVar56 = vpcmpgtd_avx(auVar31,auVar50);
    uVar20 = auVar56._0_4_;
    auVar44._0_4_ = uVar20 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar17 = auVar56._4_4_;
    auVar44._4_4_ = uVar17 & _UNK_150b50b04;
    uVar23 = auVar56._8_4_;
    auVar44._8_4_ = uVar23 & _UNK_150b50b08;
    uVar24 = auVar56._12_4_;
    auVar44._12_4_ = uVar24 & _UNK_150b50b0c;
    uVar40 = auVar43._0_4_;
    vextractps_avx(auVar44,1);
    vextractps_avx(auVar44,2);
    vextractps_avx(auVar44,3);
    auVar43._0_4_ = uVar20 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar43._4_4_ = uVar17 & _UNK_150b50b24;
    auVar43._8_4_ = uVar23 & _UNK_150b50b28;
    auVar43._12_4_ = uVar24 & _UNK_150b50b2c;
    vextractps_avx(auVar43,1);
    vextractps_avx(auVar43,2);
    vextractps_avx(auVar43,3);
    auVar56._0_4_ = uVar20 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar56._4_4_ = uVar17 & _UNK_150b50b44;
    auVar56._8_4_ = uVar23 & _UNK_150b50b48;
    auVar56._12_4_ = uVar24 & _UNK_150b50b4c;
    vextractps_avx(auVar56,1);
    vextractps_avx(auVar56,2);
    auVar35 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar16 + (uVar40 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar16)));
    vextractps_avx(auVar56,3);
    auVar52 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar16 + (uVar40 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar16 + auVar43._0_4_))));
    auVar42 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar16 + (uVar40 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar16 + auVar56._0_4_))));
  }
  auVar54 = vpcmpgtd_avx(auVar31,auVar54);
  auVar77 = vpcmpgtd_avx(auVar31,auVar50);
  auVar88._16_16_ = auVar54;
  auVar88._0_16_ = auVar77;
  auVar34 = vmaskmovps_avx(auVar88,auVar35);
  auVar52 = vmaskmovps_avx(auVar88,auVar52);
  auVar42 = vmaskmovps_avx(auVar88,auVar42);
  local_220 = auVar52._0_4_;
  uStack_21c = auVar52._4_4_;
  uStack_218 = auVar52._8_4_;
  uStack_214 = auVar52._12_4_;
  uStack_210 = auVar52._16_4_;
  uStack_20c = auVar52._20_4_;
  uStack_208 = auVar52._24_4_;
  uStack_204 = auVar52._28_4_;
  uVar20 = auVar77._0_4_;
  uVar17 = auVar77._4_4_;
  uVar23 = auVar77._8_4_;
  uVar24 = auVar77._12_4_;
  uVar40 = auVar54._0_4_;
  uVar63 = auVar54._4_4_;
  uVar64 = auVar54._8_4_;
  uVar65 = auVar54._12_4_;
  auVar31 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)(uVar20 & local_220))),
                        (uint)*(byte *)(param_3 + (int)(uVar17 & uStack_21c)),1);
  auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(param_3 + (int)(uVar23 & uStack_218)),2);
  auVar31 = vpinsrb_avx(auVar31,(uint)*(byte *)(param_3 + (int)(uVar24 & uStack_214)),3);
  auVar50 = vpinsrb_avx(auVar31,(uint)*(byte *)(param_3 + (int)(uVar40 & uStack_210)),4);
  auVar50 = vpinsrb_avx(auVar50,(uint)*(byte *)(param_3 + (int)(uVar63 & uStack_20c)),5);
  auVar50 = vpinsrb_avx(auVar50,(uint)*(byte *)(param_3 + (int)(uVar64 & uStack_208)),6);
  auVar50 = vpinsrb_avx(auVar50,(uint)*(byte *)(param_3 + (int)(uVar65 & uStack_204)),7);
  auVar43 = vpshufd_avx(ZEXT416(param_7),0);
  local_240 = auVar34._0_4_;
  iVar55 = auVar43._0_4_;
  auVar45._0_4_ = iVar55 + local_240;
  iStack_23c = auVar34._4_4_;
  iVar61 = auVar43._4_4_;
  auVar45._4_4_ = iVar61 + iStack_23c;
  iStack_238 = auVar34._8_4_;
  iVar62 = auVar43._8_4_;
  auVar45._8_4_ = iVar62 + iStack_238;
  iStack_234 = auVar34._12_4_;
  iVar12 = auVar43._12_4_;
  auVar45._12_4_ = iVar12 + iStack_234;
  iStack_230 = auVar34._16_4_;
  auVar32._0_4_ = iVar55 + iStack_230;
  iStack_22c = auVar34._20_4_;
  auVar32._4_4_ = iVar61 + iStack_22c;
  iStack_228 = auVar34._24_4_;
  auVar32._8_4_ = iVar62 + iStack_228;
  iStack_224 = auVar34._28_4_;
  auVar32._12_4_ = iVar12 + iStack_224;
  auVar57._0_4_ = iVar55 + uStack_210;
  auVar57._4_4_ = iVar61 + uStack_20c;
  auVar57._8_4_ = iVar62 + uStack_208;
  auVar57._12_4_ = iVar12 + uStack_204;
  auVar56 = vpslld_avx(auVar32,4);
  auVar43 = vpslld_avx(auVar45,4);
  auVar10 = vpand_avx(auVar77,auVar43);
  iVar30 = auVar10._0_4_;
  iVar13 = auVar10._4_4_;
  auVar56 = vpand_avx(auVar54,auVar56);
  lVar15 = param_1 + auVar56._0_4_;
  auVar73._0_4_ = uVar20 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
  auVar73._4_4_ = uVar17 & _UNK_150b50d44;
  auVar73._8_4_ = uVar23 & _UNK_150b50d48;
  auVar73._12_4_ = uVar24 & _UNK_150b50d4c;
  auVar79._0_4_ = uVar20 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar79._4_4_ = uVar17 & _UNK_150b50d64;
  auVar79._8_4_ = uVar23 & _UNK_150b50d68;
  auVar79._12_4_ = uVar24 & _UNK_150b50d6c;
  auVar50 = vpshufd_avx(auVar50,0x55);
  auVar50 = vpmovzxbd_avx(auVar50);
  auVar31 = vpmovzxbd_avx(auVar31);
  auVar43 = vpslld_avx(auVar31,2);
  auVar31 = vpslld_avx(auVar50,2);
  auVar50 = vpunpckhdq_avx(auVar31,(undefined1  [16])0x0);
  auVar31 = vpmovzxdq_avx(auVar31);
  auVar38._16_16_ = auVar50;
  auVar38._0_16_ = auVar31;
  auVar50 = vpunpckhdq_avx(auVar43,(undefined1  [16])0x0);
  auVar31 = vpmovzxdq_avx(auVar43);
  auVar84._16_16_ = auVar50;
  auVar84._0_16_ = auVar31;
  auVar31 = vpmovsxdq_avx(auVar72);
  auVar72 = vshufps_avx(auVar72,auVar72,0xfa);
  auVar92._16_16_ = auVar72;
  auVar92._0_16_ = auVar31;
  auVar34 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar84,auVar92);
  auVar72 = vpmovsxdq_avx(auVar67);
  auVar67 = vpshufd_avx(auVar67,0xfa);
  auVar49._16_16_ = auVar67;
  auVar49._0_16_ = auVar72;
  auVar57 = vpslld_avx(auVar57,4);
  auVar44 = vpand_avx(auVar54,auVar57);
  auVar52 = vblendvps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar38,auVar49);
  lVar25 = param_1 + auVar44._0_4_;
  auVar46._0_4_ = uVar20 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar46._4_4_ = uVar17 & _UNK_150b50d84;
  auVar46._8_4_ = uVar23 & _UNK_150b50d88;
  auVar46._12_4_ = uVar24 & _UNK_150b50d8c;
  lVar18 = param_1 + auVar56._4_4_;
  auVar67 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d50) + lVar15)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d54) + lVar18)),0x10);
  auVar72 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d70) + lVar15)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d74) + lVar18)),0x10);
  lVar15 = param_1 + auVar44._4_4_;
  auVar31 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d50) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d54) + lVar15)),0x10);
  auVar50 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d70) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d74) + lVar15)),0x10);
  auVar54 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar40 & _UNK_150b50d90) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50d94) + lVar15)),0x10);
  uVar23 = vextractps_avx(auVar73,1);
  uVar17 = vextractps_avx(auVar73,2);
  uVar20 = vextractps_avx(auVar73,3);
  auVar43 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar56._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar56._4_4_)),0x10);
  auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + auVar56._8_4_)),0x20);
  lVar15 = param_1 + auVar56._8_4_;
  auVar67 = vinsertps_avx(auVar67,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d58) + lVar15)),
                          0x20);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d78) + lVar15)),
                          0x20);
  auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(param_1 + auVar56._12_4_)),0x30);
  lVar15 = param_1 + auVar56._12_4_;
  auVar67 = vinsertps_avx(auVar67,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d5c) + lVar15)),
                          0x30);
  auVar72 = vinsertps_avx(auVar72,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d7c) + lVar15)),
                          0x30);
  lVar15 = param_1 + iVar30;
  auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + iVar30)),ZEXT416(*(uint *)(param_1 + iVar13)),
                          0x10);
  lVar25 = param_1 + iVar13;
  auVar78 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar73._0_4_ + lVar15)),
                          ZEXT416(*(uint *)((ulonglong)uVar23 + lVar25)),0x10);
  uVar24 = vextractps_avx(auVar79,1);
  uVar19 = vextractps_avx(auVar79,2);
  lVar29 = CONCAT44(iVar13 >> 0x1f,uVar19);
  uVar19 = vextractps_avx(auVar79,3);
  lVar27 = CONCAT44(iVar30 >> 0x1f,uVar19);
  auVar41 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar79._0_4_ + lVar15)),
                          ZEXT416(*(uint *)((ulonglong)uVar24 + lVar25)),0x10);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + auVar10._8_4_)),0x20);
  lVar15 = param_1 + auVar10._8_4_;
  auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)((ulonglong)uVar17 + lVar15)),0x20);
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(lVar29 + lVar15)),0x20);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_1 + auVar10._12_4_)),0x30);
  lVar15 = param_1 + auVar10._12_4_;
  auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar15)),0x30);
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(lVar27 + lVar15)),0x30);
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar44._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar44._4_4_)),0x10);
  auVar9._0_4_ = iVar55 + local_220;
  auVar9._4_4_ = iVar61 + uStack_21c;
  auVar9._8_4_ = iVar62 + uStack_218;
  auVar9._12_4_ = iVar12 + uStack_214;
  auVar32 = vpslld_avx(auVar9,4);
  auVar77 = vpand_avx(auVar32,auVar77);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar44._8_4_)),0x20);
  lVar15 = param_1 + auVar44._8_4_;
  auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d58) + lVar15)),
                          0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar44._12_4_)),0x30);
  lVar25 = param_1 + auVar44._12_4_;
  auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d5c) + lVar25)),
                          0x30);
  lVar18 = param_1 + auVar77._0_4_;
  auVar44 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar77._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar77._4_4_)),0x10);
  lVar26 = param_1 + auVar77._4_4_;
  auVar45 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar73._0_4_ + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)uVar23 + lVar26)),0x10);
  auVar44 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_1 + auVar77._8_4_)),0x20);
  auVar82._16_16_ = auVar43;
  auVar82._0_16_ = auVar56;
  lVar22 = param_1 + auVar77._8_4_;
  auVar43 = vinsertps_avx(auVar45,ZEXT416(*(uint *)((ulonglong)uVar17 + lVar22)),0x20);
  auVar91._16_16_ = auVar67;
  auVar91._0_16_ = auVar78;
  auVar67 = vinsertps_avx(auVar44,ZEXT416(*(uint *)(param_1 + auVar77._12_4_)),0x30);
  auVar75._16_16_ = auVar72;
  auVar75._0_16_ = auVar41;
  lVar28 = param_1 + auVar77._12_4_;
  auVar72 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar28)),0x30);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d78) + lVar15)),
                          0x20);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d7c) + lVar25)),
                          0x30);
  auVar87._16_16_ = auVar10;
  auVar87._0_16_ = auVar67;
  auVar67 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar79._0_4_ + lVar18)),
                          ZEXT416(*(uint *)((ulonglong)uVar24 + lVar26)),0x10);
  auVar67 = vinsertps_avx(auVar67,ZEXT416(*(uint *)(lVar29 + lVar22)),0x20);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)(uVar64 & _UNK_150b50d98) + lVar15)),
                          0x20);
  uVar19 = vextractps_avx(auVar46,1);
  uVar17 = vextractps_avx(auVar46,2);
  auVar54 = vinsertps_avx(auVar54,ZEXT416(*(uint *)((ulonglong)(uVar65 & _UNK_150b50d9c) + lVar25)),
                          0x30);
  uVar20 = vextractps_avx(auVar46,3);
  auVar67 = vinsertps_avx(auVar67,ZEXT416(*(uint *)(lVar27 + lVar28)),0x30);
  auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar46._0_4_ + lVar18)),
                          ZEXT416(*(uint *)(CONCAT44((int)((ulonglong)lVar15 >> 0x20),uVar19) +
                                           lVar26)),0x10);
  auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)uVar17 + lVar22)),0x20);
  auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar28)),0x30);
  auVar56 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + auVar52._0_8_)),
                          ZEXT416(*(uint *)(param_4 + auVar52._8_8_)),0x10);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_4 + auVar52._16_8_)),0x20);
  auVar56 = vinsertps_avx(auVar56,ZEXT416(*(uint *)(param_4 + auVar52._24_8_)),0x30);
  auVar78 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + auVar34._0_8_)),
                          ZEXT416(*(uint *)(param_4 + auVar34._8_8_)),0x10);
  auVar78 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_4 + auVar34._16_8_)),0x20);
  auVar69._16_16_ = auVar31;
  auVar69._0_16_ = auVar72;
  auVar72 = vinsertps_avx(auVar78,ZEXT416(*(uint *)(param_4 + auVar34._24_8_)),0x30);
  auVar39._16_16_ = auVar50;
  auVar39._0_16_ = auVar67;
  auVar34 = vmaskmovps_avx(auVar88,auVar82);
  auVar52 = vmaskmovps_avx(auVar88,auVar91);
  auVar60 = vmaskmovps_avx(auVar88,auVar75);
  auVar47 = vmaskmovps_avx(auVar88,auVar87);
  auVar58 = vmaskmovps_avx(auVar88,auVar69);
  auVar33 = vmaskmovps_avx(auVar88,auVar39);
  auVar67 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  auVar51 = vsubps_avx(auVar34,auVar47);
  auVar59 = vsubps_avx(auVar52,auVar58);
  auVar66 = vsubps_avx(auVar60,auVar33);
  auVar76._0_4_ =
       auVar66._0_4_ * auVar66._0_4_ + auVar59._0_4_ * auVar59._0_4_ + auVar51._0_4_ * auVar51._0_4_
  ;
  auVar76._4_4_ =
       auVar66._4_4_ * auVar66._4_4_ + auVar59._4_4_ * auVar59._4_4_ + auVar51._4_4_ * auVar51._4_4_
  ;
  auVar76._8_4_ =
       auVar66._8_4_ * auVar66._8_4_ + auVar59._8_4_ * auVar59._8_4_ + auVar51._8_4_ * auVar51._8_4_
  ;
  auVar76._12_4_ =
       auVar66._12_4_ * auVar66._12_4_ +
       auVar59._12_4_ * auVar59._12_4_ + auVar51._12_4_ * auVar51._12_4_;
  auVar76._16_4_ =
       auVar66._16_4_ * auVar66._16_4_ +
       auVar59._16_4_ * auVar59._16_4_ + auVar51._16_4_ * auVar51._16_4_;
  auVar76._20_4_ =
       auVar66._20_4_ * auVar66._20_4_ +
       auVar59._20_4_ * auVar59._20_4_ + auVar51._20_4_ * auVar51._20_4_;
  auVar76._24_4_ =
       auVar66._24_4_ * auVar66._24_4_ +
       auVar59._24_4_ * auVar59._24_4_ + auVar51._24_4_ * auVar51._24_4_;
  auVar76._28_4_ =
       auVar66._28_4_ * auVar66._28_4_ +
       auVar59._28_4_ * auVar59._28_4_ + auVar51._28_4_ * auVar51._28_4_;
  auVar60 = vsqrtps_avx(auVar76);
  local_200 = auVar42._0_4_;
  fStack_1fc = auVar42._4_4_;
  fStack_1f8 = auVar42._8_4_;
  fStack_1f4 = auVar42._12_4_;
  fStack_1f0 = auVar42._16_4_;
  fStack_1ec = auVar42._20_4_;
  fStack_1e8 = auVar42._24_4_;
  fStack_1e4 = auVar42._28_4_;
  auVar89._0_4_ = auVar67._0_4_ * local_200;
  auVar89._4_4_ = auVar67._4_4_ * fStack_1fc;
  auVar89._8_4_ = auVar67._8_4_ * fStack_1f8;
  auVar89._12_4_ = auVar67._12_4_ * fStack_1f4;
  auVar89._16_4_ = auVar67._0_4_ * fStack_1f0;
  auVar89._20_4_ = auVar67._4_4_ * fStack_1ec;
  auVar89._24_4_ = auVar67._8_4_ * fStack_1e8;
  auVar89._28_4_ = auVar67._12_4_ * fStack_1e4;
  auVar34 = vcmpps_avx(auVar60,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar42 = vdivps_avx(auVar51,auVar60);
  auVar42 = vblendvps_avx(auVar42,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar34);
  auVar52 = vsubps_avx(auVar60,auVar89);
  fVar93 = auVar52._0_4_ * auVar72._0_4_;
  fVar94 = auVar52._4_4_ * auVar72._4_4_;
  fVar95 = auVar52._8_4_ * auVar72._8_4_;
  fVar96 = auVar52._12_4_ * auVar72._12_4_;
  fVar97 = auVar52._16_4_ * auVar56._0_4_;
  fVar98 = auVar52._20_4_ * auVar56._4_4_;
  fVar99 = auVar52._24_4_ * auVar56._8_4_;
  fVar100 = auVar52._28_4_ * auVar56._12_4_;
  auVar52 = vcmpps_avx(auVar52,
                       ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1);
  uVar20 = auVar52._0_4_;
  uVar17 = auVar52._4_4_;
  uVar23 = auVar52._8_4_;
  uVar24 = auVar52._12_4_;
  uVar40 = auVar52._16_4_;
  uVar63 = auVar52._20_4_;
  uVar64 = auVar52._24_4_;
  uVar65 = auVar52._28_4_;
  auVar67._0_4_ = auVar47._0_4_ + (float)(~uVar20 & (uint)(auVar42._0_4_ * fVar93));
  auVar67._4_4_ = auVar47._4_4_ + (float)(~uVar17 & (uint)(auVar42._4_4_ * fVar94));
  auVar67._8_4_ = auVar47._8_4_ + (float)(~uVar23 & (uint)(auVar42._8_4_ * fVar95));
  auVar67._12_4_ = auVar47._12_4_ + (float)(~uVar24 & (uint)(auVar42._12_4_ * fVar96));
  auVar70._16_4_ = auVar47._16_4_ + (float)(~uVar40 & (uint)(auVar42._16_4_ * fVar97));
  auVar70._0_16_ = auVar67;
  auVar70._20_4_ = auVar47._20_4_ + (float)(~uVar63 & (uint)(auVar42._20_4_ * fVar98));
  auVar70._24_4_ = auVar47._24_4_ + (float)(~uVar64 & (uint)(auVar42._24_4_ * fVar99));
  auVar70._28_4_ = auVar47._28_4_ + (float)(~uVar65 & (uint)(auVar42._28_4_ * fVar100));
  cVar14 = (char)uVar11;
  auVar72 = auVar70._16_16_;
  iVar61 = auVar32._0_4_;
  iVar13 = auVar32._4_4_;
  iVar30 = auVar32._8_4_;
  iVar55 = auVar32._12_4_;
  iVar62 = auVar57._0_4_;
  if ((uVar11 & 1) != 0) {
    *(float *)(param_1 + iVar61) = auVar67._0_4_;
  }
  if ((uVar11 & 2) != 0) {
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + iVar13) = uVar19;
  }
  if ((uVar11 & 4) != 0) {
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + iVar30) = uVar19;
  }
  if ((uVar11 & 8) == 0) {
    auVar42 = vdivps_avx(auVar59,auVar60);
  }
  else {
    uVar19 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + iVar55) = uVar19;
    auVar42 = vdivps_avx(auVar59,auVar60);
  }
  if ((uVar11 & 0x10) != 0) {
    *(float *)(param_1 + iVar62) = auVar70._16_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    iVar12 = vextractps_avx(auVar57,1);
    uVar19 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + iVar12) = uVar19;
  }
  if ((uVar11 & 0x40) != 0) {
    iVar12 = vextractps_avx(auVar57,2);
    uVar19 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + iVar12) = uVar19;
  }
  uVar7 = ~uVar65 & (uint)((float)(~auVar34._28_4_ & auVar42._28_4_) * fVar100);
  uVar6 = ~uVar64 & (uint)((float)(~auVar34._24_4_ & auVar42._24_4_) * fVar99);
  uVar5 = ~uVar63 & (uint)((float)(~auVar34._20_4_ & auVar42._20_4_) * fVar98);
  uVar4 = ~uVar40 & (uint)((float)(~auVar34._16_4_ & auVar42._16_4_) * fVar97);
  uVar3 = ~uVar24 & (uint)((float)(~auVar34._12_4_ & auVar42._12_4_) * fVar96);
  uVar2 = ~uVar23 & (uint)((float)(~auVar34._8_4_ & auVar42._8_4_) * fVar95);
  uVar1 = ~uVar17 & (uint)((float)(~auVar34._4_4_ & auVar42._4_4_) * fVar94);
  uVar19 = ~uVar20 & (uint)((float)(~auVar34._0_4_ & auVar42._0_4_) * fVar93);
  if (cVar14 < '\0') {
    iVar12 = vextractps_avx(auVar57,3);
    uVar8 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + iVar12) = uVar8;
    auVar71._0_4_ = auVar58._0_4_ + (float)uVar19;
    auVar71._4_4_ = auVar58._4_4_ + (float)uVar1;
    auVar71._8_4_ = auVar58._8_4_ + (float)uVar2;
    auVar71._12_4_ = auVar58._12_4_ + (float)uVar3;
    auVar71._16_4_ = auVar58._16_4_ + (float)uVar4;
    auVar71._20_4_ = auVar58._20_4_ + (float)uVar5;
    auVar71._24_4_ = auVar58._24_4_ + (float)uVar6;
    auVar71._28_4_ = auVar58._28_4_ + (float)uVar7;
  }
  else {
    auVar71._0_4_ = auVar58._0_4_ + (float)uVar19;
    auVar71._4_4_ = auVar58._4_4_ + (float)uVar1;
    auVar71._8_4_ = auVar58._8_4_ + (float)uVar2;
    auVar71._12_4_ = auVar58._12_4_ + (float)uVar3;
    auVar71._16_4_ = auVar58._16_4_ + (float)uVar4;
    auVar71._20_4_ = auVar58._20_4_ + (float)uVar5;
    auVar71._24_4_ = auVar58._24_4_ + (float)uVar6;
    auVar71._28_4_ = auVar58._28_4_ + (float)uVar7;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar61) = auVar71._0_4_;
  }
  auVar67 = auVar71._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar19;
  }
  if ((uVar11 & 4) != 0) {
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar30) = uVar19;
  }
  if ((uVar11 & 8) == 0) {
    auVar42 = vdivps_avx(auVar66,auVar60);
  }
  else {
    uVar19 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar55) = uVar19;
    auVar42 = vdivps_avx(auVar66,auVar60);
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar62) = auVar71._16_4_;
  }
  auVar67 = auVar71._16_16_;
  if ((uVar11 & 0x20) != 0) {
    iVar12 = vextractps_avx(auVar57,1);
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar19;
  }
  if ((uVar11 & 0x40) != 0) {
    iVar12 = vextractps_avx(auVar57,2);
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar19;
  }
  uVar7 = ~uVar65 & (uint)((float)(~auVar34._28_4_ & auVar42._28_4_) * fVar100);
  uVar6 = ~uVar64 & (uint)((float)(~auVar34._24_4_ & auVar42._24_4_) * fVar99);
  uVar5 = ~uVar63 & (uint)((float)(~auVar34._20_4_ & auVar42._20_4_) * fVar98);
  uVar4 = ~uVar40 & (uint)((float)(~auVar34._16_4_ & auVar42._16_4_) * fVar97);
  uVar3 = ~uVar24 & (uint)((float)(~auVar34._12_4_ & auVar42._12_4_) * fVar96);
  uVar2 = ~uVar23 & (uint)((float)(~auVar34._8_4_ & auVar42._8_4_) * fVar95);
  uVar1 = ~uVar17 & (uint)((float)(~auVar34._4_4_ & auVar42._4_4_) * fVar94);
  uVar19 = ~uVar20 & (uint)((float)(~auVar34._0_4_ & auVar42._0_4_) * fVar93);
  if (cVar14 < '\0') {
    iVar12 = vextractps_avx(auVar57,3);
    uVar8 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar12) = uVar8;
    auVar53._0_4_ = auVar33._0_4_ + (float)uVar19;
    auVar53._4_4_ = auVar33._4_4_ + (float)uVar1;
    auVar53._8_4_ = auVar33._8_4_ + (float)uVar2;
    auVar53._12_4_ = auVar33._12_4_ + (float)uVar3;
    auVar53._16_4_ = auVar33._16_4_ + (float)uVar4;
    auVar53._20_4_ = auVar33._20_4_ + (float)uVar5;
    auVar53._24_4_ = auVar33._24_4_ + (float)uVar6;
    auVar53._28_4_ = auVar33._28_4_ + (float)uVar7;
  }
  else {
    auVar53._0_4_ = auVar33._0_4_ + (float)uVar19;
    auVar53._4_4_ = auVar33._4_4_ + (float)uVar1;
    auVar53._8_4_ = auVar33._8_4_ + (float)uVar2;
    auVar53._12_4_ = auVar33._12_4_ + (float)uVar3;
    auVar53._16_4_ = auVar33._16_4_ + (float)uVar4;
    auVar53._20_4_ = auVar33._20_4_ + (float)uVar5;
    auVar53._24_4_ = auVar33._24_4_ + (float)uVar6;
    auVar53._28_4_ = auVar33._28_4_ + (float)uVar7;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar61) = auVar53._0_4_;
  }
  auVar67 = auVar53._0_16_;
  if ((uVar11 & 2) != 0) {
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar19;
  }
  if ((uVar11 & 4) != 0) {
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar30) = uVar19;
  }
  if ((uVar11 & 8) != 0) {
    uVar19 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar55) = uVar19;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar62) = auVar53._16_4_;
  }
  auVar67 = auVar53._16_16_;
  if ((uVar11 & 0x20) != 0) {
    iVar12 = vextractps_avx(auVar57,1);
    uVar19 = vextractps_avx(auVar67,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar19;
  }
  if ((uVar11 & 0x40) != 0) {
    iVar12 = vextractps_avx(auVar57,2);
    uVar19 = vextractps_avx(auVar67,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar19;
  }
  if (cVar14 < '\0') {
    iVar12 = vextractps_avx(auVar57,3);
    uVar19 = vextractps_avx(auVar67,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar12) = uVar19;
  }
  if ((uVar11 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar61) = auVar43._0_4_;
  }
  if ((uVar11 & 2) != 0) {
    uVar19 = vextractps_avx(auVar43,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar19;
  }
  if ((uVar11 & 4) != 0) {
    uVar19 = vextractps_avx(auVar43,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar30) = uVar19;
  }
  if ((uVar11 & 8) != 0) {
    uVar19 = vextractps_avx(auVar43,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar55) = uVar19;
  }
  if ((uVar11 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar62) = auVar54._0_4_;
  }
  if ((uVar11 & 0x20) != 0) {
    iVar13 = vextractps_avx(auVar57,1);
    uVar19 = vextractps_avx(auVar54,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar19;
  }
  if ((uVar11 & 0x40) != 0) {
    iVar13 = vextractps_avx(auVar57,2);
    uVar19 = vextractps_avx(auVar54,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar19;
  }
  if (cVar14 < '\0') {
    iVar13 = vextractps_avx(auVar57,3);
    *(int *)(param_1 + 0xc + (longlong)iVar13) = auVar54._12_4_;
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap_avx @ 1402f52d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsScaleWeightmap_avx
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               longlong param_5,uint param_6,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  char cVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  undefined1 (*pauVar25) [32];
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  uint uVar62;
  undefined1 auVar61 [32];
  undefined1 in_ZMM2 [64];
  undefined1 auVar63 [32];
  int iVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  float fVar79;
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [16];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar86 [16];
  undefined1 auVar85 [32];
  int iVar88;
  int iVar89;
  undefined1 auVar87 [16];
  int iVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float local_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  int local_280;
  int iStack_27c;
  int iStack_278;
  int iStack_274;
  float local_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  int local_240;
  int iStack_23c;
  int iStack_238;
  int iStack_234;
  int iStack_230;
  int iStack_22c;
  int iStack_228;
  int iStack_224;
  uint local_220;
  uint uStack_21c;
  uint uStack_218;
  uint uStack_214;
  uint uStack_210;
  uint uStack_20c;
  uint uStack_208;
  uint uStack_204;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined1 auVar43 [32];
  undefined1 auVar96 [32];
  
  uVar23 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar23 = param_6;
  }
  auVar56 = in_ZMM2._0_16_;
  if ((int)(uVar23 & 0xfffffff8) < 1) {
    uVar30 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    auVar86 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar18 = vshufps_avx(auVar56,auVar56,0);
    pauVar25 = (undefined1 (*) [32])(param_2 + 0x40);
    uVar30 = 0;
    do {
      auVar68 = pauVar25[-2];
      auVar59._16_16_ = *(undefined1 (*) [16])pauVar25[-2];
      auVar59._0_16_ = *(undefined1 (*) [16])(pauVar25[-2] + 0x10);
      auVar59 = vblendps_avx(auVar68,auVar59,0x24);
      uVar1 = *(undefined4 *)(pauVar25[-1] + 4);
      auVar83._4_4_ = uVar1;
      auVar83._0_4_ = uVar1;
      auVar83._8_4_ = uVar1;
      auVar83._12_4_ = uVar1;
      uVar1 = *(undefined4 *)(pauVar25[-1] + 8);
      auVar83._20_4_ = uVar1;
      auVar83._16_4_ = uVar1;
      auVar83._24_4_ = uVar1;
      auVar83._28_4_ = uVar1;
      auVar44 = vpermilps_avx(auVar59,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar66._16_16_ = *(undefined1 (*) [16])*pauVar25;
      auVar66._0_16_ = *(undefined1 (*) [16])(*pauVar25 + 0x10);
      auVar59 = vblendps_avx(auVar66,*pauVar25,0x44);
      auVar43 = vpermilps_avx(auVar59,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar41 = vshufps_avx(*(undefined1 (*) [16])(pauVar25[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar25[-1] + 0x10),0xec);
      uVar1 = *(undefined4 *)(pauVar25[-1] + 0x14);
      auVar58._20_4_ = uVar1;
      auVar58._16_4_ = uVar1;
      auVar58._24_4_ = uVar1;
      auVar58._28_4_ = uVar1;
      auVar58._0_16_ = auVar41;
      auVar59 = vblendps_avx(auVar44,auVar83,0x88);
      auVar44 = vblendps_avx(auVar43,auVar58,0x13);
      auVar43 = vblendps_avx(pauVar25[-1],auVar68,0x24);
      auVar68 = vshufps_avx(auVar66,*pauVar25,0xc4);
      auVar43 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(pauVar25[-2] + 0x10)),auVar43,0x21);
      auVar40 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + *(int *)(pauVar25[-2] + 4))),
                            (uint)*(byte *)(param_4 + *(int *)(pauVar25[-2] + 0x10)),1);
      local_280 = auVar86._0_4_;
      iStack_27c = auVar86._4_4_;
      iStack_278 = auVar86._8_4_;
      iStack_274 = auVar86._12_4_;
      auVar41._0_4_ = auVar59._0_4_ + local_280;
      auVar41._4_4_ = auVar59._4_4_ + iStack_27c;
      auVar41._8_4_ = auVar59._8_4_ + iStack_278;
      auVar41._12_4_ = auVar59._12_4_ + iStack_274;
      auVar52._0_4_ = auVar44._0_4_ + local_280;
      auVar52._4_4_ = auVar44._4_4_ + iStack_27c;
      auVar52._8_4_ = auVar44._8_4_ + iStack_278;
      auVar52._12_4_ = auVar44._12_4_ + iStack_274;
      auVar57._0_4_ = auVar59._16_4_ + local_280;
      auVar57._4_4_ = auVar59._20_4_ + iStack_27c;
      auVar57._8_4_ = auVar59._24_4_ + iStack_278;
      auVar57._12_4_ = auVar59._28_4_ + iStack_274;
      auVar15._0_4_ = auVar44._16_4_ + local_280;
      auVar15._4_4_ = auVar44._20_4_ + iStack_27c;
      auVar15._8_4_ = auVar44._24_4_ + iStack_278;
      auVar15._12_4_ = auVar44._28_4_ + iStack_274;
      auVar40 = vpinsrb_avx(auVar40,(uint)*(byte *)(param_4 + *(int *)(pauVar25[-2] + 0x1c)),2);
      auVar49 = vpslld_avx(auVar52,4);
      auVar65 = vpslld_avx(auVar41,4);
      auVar50 = vpinsrb_avx(auVar40,(uint)*(byte *)(param_4 + *(int *)(pauVar25[-1] + 8)),3);
      auVar51 = vpinsrb_avx(auVar50,(uint)*(byte *)(param_4 + *(int *)(pauVar25[-1] + 0x14)),4);
      lVar35 = (longlong)auVar49._0_4_;
      lVar36 = (longlong)auVar65._0_4_;
      lVar27 = (longlong)auVar49._4_4_;
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + lVar27)),0x10);
      auVar52 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x10);
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar35)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x10);
      lVar38 = (longlong)auVar65._4_4_;
      lVar27 = (longlong)auVar65._8_4_;
      lVar28 = (longlong)auVar65._12_4_;
      lVar35 = (longlong)auVar49._8_4_;
      lVar33 = (longlong)auVar49._12_4_;
      auVar49 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + lVar38)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar35)),0x20);
      auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x20);
      auVar65 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x10);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar94 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x20);
      auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar51 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + *(int *)*pauVar25),5);
      auVar87 = vpslld_avx(auVar15,4);
      auVar57 = vpslld_avx(auVar57,4);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar33)),0x30);
      lVar36 = (longlong)auVar57._0_4_;
      auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_1 + lVar28)),0x30);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + 4 + lVar33)),0x30);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x30);
      lVar35 = (longlong)auVar57._4_4_;
      lVar37 = (longlong)auVar57._8_4_;
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 8 + lVar33)),0x30);
      auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x30);
      lVar39 = (longlong)auVar57._12_4_;
      auVar57 = vpinsrb_avx(auVar51,(uint)*(byte *)(param_4 + *(int *)(*pauVar25 + 0xc)),6);
      auVar15 = vpinsrb_avx(auVar57,(uint)*(byte *)(param_4 + *(int *)(*pauVar25 + 0x18)),7);
      auVar57 = vpmovzxbd_avx(auVar50);
      auVar50 = vpslld_avx(auVar57,2);
      auVar57 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + (ulonglong)auVar50._0_4_)),
                              ZEXT416(*(uint *)(param_5 + (ulonglong)auVar50._4_4_)),0x10);
      lVar33 = (longlong)auVar87._0_4_;
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar50._8_4_)),0x20);
      auVar15 = vpshufd_avx(auVar15,0x55);
      auVar15 = vpmovzxbd_avx(auVar15);
      auVar51 = vpslld_avx(auVar15,2);
      auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar50._12_4_)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + (ulonglong)auVar51._0_4_)),
                              ZEXT416(*(uint *)(param_5 + (ulonglong)auVar51._4_4_)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar51._8_4_)),0x20);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_5 + (ulonglong)auVar51._12_4_)),0x30);
      lVar38 = (longlong)auVar87._4_4_;
      lVar28 = (longlong)auVar87._8_4_;
      lVar27 = (longlong)auVar87._12_4_;
      auVar67._16_16_ = auVar41;
      auVar67._0_16_ = auVar49;
      auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + lVar38)),0x10);
      auVar71._16_16_ = auVar52;
      auVar71._0_16_ = auVar65;
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar28)),0x20);
      auVar52 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + lVar35)),0x10);
      auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + lVar27)),0x30);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + lVar37)),0x20);
      auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)(param_1 + lVar39)),0x30);
      auVar53._16_16_ = auVar41;
      auVar53._0_16_ = auVar52;
      auVar49 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar38)),0x10);
      auVar65 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar35)),0x10);
      auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x20);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 4 + lVar37)),0x20);
      auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x30);
      auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)(param_1 + 4 + lVar39)),0x30);
      auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar33)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar38)),0x10);
      auVar51 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar35)),0x10);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x20);
      auVar51 = vinsertps_avx(auVar51,ZEXT416(*(uint *)(param_1 + 8 + lVar37)),0x20);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x30);
      auVar92._16_16_ = auVar49;
      auVar92._0_16_ = auVar65;
      auVar51 = vinsertps_avx(auVar51,ZEXT416(*(uint *)(param_1 + 8 + lVar39)),0x30);
      auVar42._16_16_ = auVar40;
      auVar42._0_16_ = auVar94;
      auVar63._16_16_ = auVar50;
      auVar63._0_16_ = auVar51;
      auVar53 = vsubps_avx(auVar67,auVar53);
      auVar58 = vsubps_avx(auVar71,auVar92);
      auVar43 = vshufps_avx(auVar43,pauVar25[-1],0xc2);
      auVar42 = vsubps_avx(auVar42,auVar63);
      auVar43 = vblendps_avx(auVar43,auVar68,0xe0);
      auVar68._0_4_ =
           auVar53._0_4_ * auVar53._0_4_ + auVar58._0_4_ * auVar58._0_4_ +
           auVar42._0_4_ * auVar42._0_4_;
      auVar68._4_4_ =
           auVar53._4_4_ * auVar53._4_4_ + auVar58._4_4_ * auVar58._4_4_ +
           auVar42._4_4_ * auVar42._4_4_;
      auVar68._8_4_ =
           auVar53._8_4_ * auVar53._8_4_ + auVar58._8_4_ * auVar58._8_4_ +
           auVar42._8_4_ * auVar42._8_4_;
      auVar68._12_4_ =
           auVar53._12_4_ * auVar53._12_4_ + auVar58._12_4_ * auVar58._12_4_ +
           auVar42._12_4_ * auVar42._12_4_;
      auVar68._16_4_ =
           auVar53._16_4_ * auVar53._16_4_ + auVar58._16_4_ * auVar58._16_4_ +
           auVar42._16_4_ * auVar42._16_4_;
      auVar68._20_4_ =
           auVar53._20_4_ * auVar53._20_4_ + auVar58._20_4_ * auVar58._20_4_ +
           auVar42._20_4_ * auVar42._20_4_;
      auVar68._24_4_ =
           auVar53._24_4_ * auVar53._24_4_ + auVar58._24_4_ * auVar58._24_4_ +
           auVar42._24_4_ * auVar42._24_4_;
      auVar68._28_4_ =
           auVar53._28_4_ * auVar53._28_4_ + auVar58._28_4_ * auVar58._28_4_ +
           auVar42._28_4_ * auVar42._28_4_;
      uVar1 = *(undefined4 *)(param_1 + 0xc + lVar36);
      auVar68 = vsqrtps_avx(auVar68);
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar35);
      auVar53 = vdivps_avx(auVar53,auVar68);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar37);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar39);
      auVar58 = vdivps_avx(auVar58,auVar68);
      auVar42 = vdivps_avx(auVar42,auVar68);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar33);
      auVar80._0_4_ = auVar57._0_4_ * auVar43._0_4_;
      auVar80._4_4_ = auVar57._4_4_ * auVar43._4_4_;
      auVar80._8_4_ = auVar57._8_4_ * auVar43._8_4_;
      auVar80._12_4_ = auVar57._12_4_ * auVar43._12_4_;
      auVar80._16_4_ = auVar15._0_4_ * auVar43._16_4_;
      auVar80._20_4_ = auVar15._4_4_ * auVar43._20_4_;
      auVar80._24_4_ = auVar15._8_4_ * auVar43._24_4_;
      auVar80._28_4_ = auVar15._12_4_ * auVar43._28_4_;
      auVar63 = vsubps_avx(auVar68,auVar80);
      auVar68 = vcmpps_avx(auVar68,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar43 = vblendvps_avx(auVar53,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar68);
      local_2a0 = auVar18._0_4_;
      fStack_29c = auVar18._4_4_;
      fStack_298 = auVar18._8_4_;
      fStack_294 = auVar18._12_4_;
      fVar104 = auVar63._0_4_ * local_2a0;
      fVar105 = auVar63._4_4_ * fStack_29c;
      fVar106 = auVar63._8_4_ * fStack_298;
      fVar107 = auVar63._12_4_ * fStack_294;
      local_2a0 = auVar63._16_4_ * local_2a0;
      fStack_29c = auVar63._20_4_ * fStack_29c;
      fStack_298 = auVar63._24_4_ * fStack_298;
      fStack_294 = auVar63._28_4_ * fStack_294;
      auVar53 = vcmpps_avx(auVar63,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar29 = auVar53._0_4_;
      uVar20 = auVar53._4_4_;
      uVar21 = auVar53._8_4_;
      uVar26 = auVar53._12_4_;
      uVar31 = auVar53._16_4_;
      uVar32 = auVar53._20_4_;
      uVar34 = auVar53._24_4_;
      uVar62 = auVar53._28_4_;
      auVar94._0_4_ = auVar52._0_4_ + (float)(~uVar29 & (uint)(auVar43._0_4_ * fVar104));
      auVar94._4_4_ = auVar52._4_4_ + (float)(~uVar20 & (uint)(auVar43._4_4_ * fVar105));
      auVar94._8_4_ = auVar52._8_4_ + (float)(~uVar21 & (uint)(auVar43._8_4_ * fVar106));
      auVar94._12_4_ = auVar52._12_4_ + (float)(~uVar26 & (uint)(auVar43._12_4_ * fVar107));
      auVar96._16_4_ = auVar41._0_4_ + (float)(~uVar31 & (uint)(auVar43._16_4_ * local_2a0));
      auVar96._0_16_ = auVar94;
      auVar96._20_4_ = auVar41._4_4_ + (float)(~uVar32 & (uint)(auVar43._20_4_ * fStack_29c));
      auVar96._24_4_ = auVar41._8_4_ + (float)(~uVar34 & (uint)(auVar43._24_4_ * fStack_298));
      auVar96._28_4_ = auVar41._12_4_ + (float)(~uVar62 & (uint)(auVar43._28_4_ * fStack_294));
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar38);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar28);
      uVar8 = *(undefined4 *)(param_1 + 0xc + lVar27);
      *(float *)(param_1 + lVar36) = auVar94._0_4_;
      uVar9 = vextractps_avx(auVar94,1);
      *(undefined4 *)(param_1 + lVar35) = uVar9;
      uVar9 = vextractps_avx(auVar94,2);
      *(undefined4 *)(param_1 + lVar37) = uVar9;
      uVar9 = vextractps_avx(auVar94,3);
      *(undefined4 *)(param_1 + lVar39) = uVar9;
      auVar41 = auVar96._16_16_;
      *(float *)(param_1 + lVar33) = auVar96._16_4_;
      uVar9 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + lVar38) = uVar9;
      uVar9 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + lVar28) = uVar9;
      auVar40._0_4_ =
           auVar65._0_4_ +
           (float)(~uVar29 & (uint)(fVar104 * (float)(~auVar68._0_4_ & auVar58._0_4_)));
      auVar40._4_4_ =
           auVar65._4_4_ +
           (float)(~uVar20 & (uint)(fVar105 * (float)(~auVar68._4_4_ & auVar58._4_4_)));
      auVar40._8_4_ =
           auVar65._8_4_ +
           (float)(~uVar21 & (uint)(fVar106 * (float)(~auVar68._8_4_ & auVar58._8_4_)));
      auVar40._12_4_ =
           auVar65._12_4_ +
           (float)(~uVar26 & (uint)(fVar107 * (float)(~auVar68._12_4_ & auVar58._12_4_)));
      auVar43._16_4_ =
           auVar49._0_4_ +
           (float)(~uVar31 & (uint)(local_2a0 * (float)(~auVar68._16_4_ & auVar58._16_4_)));
      auVar43._0_16_ = auVar40;
      auVar43._20_4_ =
           auVar49._4_4_ +
           (float)(~uVar32 & (uint)(fStack_29c * (float)(~auVar68._20_4_ & auVar58._20_4_)));
      auVar43._24_4_ =
           auVar49._8_4_ +
           (float)(~uVar34 & (uint)(fStack_298 * (float)(~auVar68._24_4_ & auVar58._24_4_)));
      auVar43._28_4_ =
           auVar49._12_4_ +
           (float)(~uVar62 & (uint)(fStack_294 * (float)(~auVar68._28_4_ & auVar58._28_4_)));
      uVar9 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + lVar27) = uVar9;
      *(float *)(param_1 + 4 + lVar36) = auVar40._0_4_;
      uVar9 = vextractps_avx(auVar40,1);
      *(undefined4 *)(param_1 + 4 + lVar35) = uVar9;
      uVar9 = vextractps_avx(auVar40,2);
      *(undefined4 *)(param_1 + 4 + lVar37) = uVar9;
      uVar9 = vextractps_avx(auVar40,3);
      *(undefined4 *)(param_1 + 4 + lVar39) = uVar9;
      auVar41 = auVar43._16_16_;
      *(float *)(param_1 + 4 + lVar33) = auVar43._16_4_;
      uVar9 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + 4 + lVar38) = uVar9;
      uVar9 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar9;
      local_260 = auVar51._0_4_;
      fStack_25c = auVar51._4_4_;
      fStack_258 = auVar51._8_4_;
      fStack_254 = auVar51._12_4_;
      fStack_250 = auVar50._0_4_;
      fStack_24c = auVar50._4_4_;
      fStack_248 = auVar50._8_4_;
      fStack_244 = auVar50._12_4_;
      auVar49._0_4_ =
           (float)(~uVar29 & (uint)((float)(~auVar68._0_4_ & auVar42._0_4_) * fVar104)) + local_260;
      auVar49._4_4_ =
           (float)(~uVar20 & (uint)((float)(~auVar68._4_4_ & auVar42._4_4_) * fVar105)) + fStack_25c
      ;
      auVar49._8_4_ =
           (float)(~uVar21 & (uint)((float)(~auVar68._8_4_ & auVar42._8_4_) * fVar106)) + fStack_258
      ;
      auVar49._12_4_ =
           (float)(~uVar26 & (uint)((float)(~auVar68._12_4_ & auVar42._12_4_) * fVar107)) +
           fStack_254;
      auVar93._16_4_ =
           (float)(~uVar31 & (uint)((float)(~auVar68._16_4_ & auVar42._16_4_) * local_2a0)) +
           fStack_250;
      auVar93._0_16_ = auVar49;
      auVar93._20_4_ =
           (float)(~uVar32 & (uint)((float)(~auVar68._20_4_ & auVar42._20_4_) * fStack_29c)) +
           fStack_24c;
      auVar93._24_4_ =
           (float)(~uVar34 & (uint)((float)(~auVar68._24_4_ & auVar42._24_4_) * fStack_298)) +
           fStack_248;
      auVar93._28_4_ =
           (float)(~uVar62 & (uint)((float)(~auVar68._28_4_ & auVar42._28_4_) * fStack_294)) +
           fStack_244;
      uVar9 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar9;
      *(float *)(param_1 + 8 + lVar36) = auVar49._0_4_;
      uVar9 = vextractps_avx(auVar49,1);
      *(undefined4 *)(param_1 + 8 + lVar35) = uVar9;
      uVar9 = vextractps_avx(auVar49,2);
      *(undefined4 *)(param_1 + 8 + lVar37) = uVar9;
      uVar9 = vextractps_avx(auVar49,3);
      *(undefined4 *)(param_1 + 8 + lVar39) = uVar9;
      auVar41 = auVar93._16_16_;
      *(float *)(param_1 + 8 + lVar33) = auVar93._16_4_;
      uVar9 = vextractps_avx(auVar41,1);
      *(undefined4 *)(param_1 + 8 + lVar38) = uVar9;
      uVar9 = vextractps_avx(auVar41,2);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar9;
      uVar9 = vextractps_avx(auVar41,3);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar9;
      *(undefined4 *)(param_1 + 0xc + lVar36) = uVar1;
      *(undefined4 *)(param_1 + 0xc + lVar35) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar37) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar39) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar33) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar38) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar7;
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar8;
      pauVar25 = pauVar25 + 3;
      uVar29 = (int)uVar30 + 8;
      uVar30 = (ulonglong)uVar29;
    } while ((int)uVar29 < (int)(uVar23 & 0xfffffff8));
    vperm2f128_avx(auVar59,auVar44,0x31);
    if ((int)param_6 <= (int)uVar29) {
      return;
    }
  }
  auVar86 = vpshufd_avx(ZEXT416((uint)uVar30),0);
  auVar44._16_16_ = auVar86;
  auVar44._0_16_ = auVar86;
  auVar41 = vpshufd_avx(ZEXT416(param_6),0);
  auVar52 = SUB3216(auVar44 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar40 = SUB3216(auVar44 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar86 = vpcmpgtd_avx(auVar41,auVar40);
  auVar18 = vpcmpgtd_avx(auVar41,auVar52);
  auVar45._16_16_ = auVar86;
  auVar45._0_16_ = auVar18;
  pauVar25 = (undefined1 (*) [32])(param_2 + uVar30 * 0xc);
  uVar23 = vmovmskps_avx(auVar45);
  if (uVar23 == 0xff) {
    auVar68 = pauVar25[2];
    auVar47._16_16_ = *(undefined1 (*) [16])*pauVar25;
    auVar47._0_16_ = *(undefined1 (*) [16])(*pauVar25 + 0x10);
    auVar59 = vblendps_avx(*pauVar25,auVar47,0x24);
    auVar44 = vpermilps_avx(auVar59,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar1 = *(undefined4 *)(pauVar25[1] + 4);
    auVar102._4_4_ = uVar1;
    auVar102._0_4_ = uVar1;
    auVar102._8_4_ = uVar1;
    auVar102._12_4_ = uVar1;
    uVar1 = *(undefined4 *)(pauVar25[1] + 8);
    auVar102._20_4_ = uVar1;
    auVar102._16_4_ = uVar1;
    auVar102._24_4_ = uVar1;
    auVar102._28_4_ = uVar1;
    auVar98._16_16_ = *(undefined1 (*) [16])pauVar25[2];
    auVar98._0_16_ = *(undefined1 (*) [16])(pauVar25[2] + 0x10);
    auVar59 = vblendps_avx(auVar98,auVar68,0x44);
    auVar43 = vpermilps_avx(auVar59,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar59 = vblendps_avx(auVar44,auVar102,0x88);
    auVar49 = vshufps_avx(*(undefined1 (*) [16])(pauVar25[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar25[1] + 0x10),0xec);
    uVar1 = *(undefined4 *)(pauVar25[1] + 0x14);
    auVar48._20_4_ = uVar1;
    auVar48._16_4_ = uVar1;
    auVar48._24_4_ = uVar1;
    auVar48._28_4_ = uVar1;
    auVar48._0_16_ = auVar49;
    auVar44 = vblendps_avx(auVar43,auVar48,0x13);
    auVar46._16_16_ = auVar44._0_16_;
    auVar46._0_16_ = auVar59._0_16_;
    auVar43 = vperm2f128_avx(auVar59,auVar44,0x31);
    auVar59 = vblendps_avx(pauVar25[1],*pauVar25,0x24);
    auVar59 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar25 + 0x10)),auVar59,0x21);
    auVar59 = vshufps_avx(auVar59,pauVar25[1],0xc2);
    auVar44 = vshufps_avx(auVar98,auVar68,0xc4);
    auVar59 = vblendps_avx(auVar59,auVar44,0xe0);
  }
  else {
    auVar49 = vpcmpgtd_avx(auVar41,auVar40);
    auVar65 = vpcmpgtd_avx(auVar41,auVar52);
    uVar29 = auVar65._0_4_;
    auVar50._0_4_ = uVar29 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar20 = auVar65._4_4_;
    auVar50._4_4_ = uVar20 & _UNK_150b50b04;
    uVar21 = auVar65._8_4_;
    auVar50._8_4_ = uVar21 & _UNK_150b50b08;
    uVar26 = auVar65._12_4_;
    auVar50._12_4_ = uVar26 & _UNK_150b50b0c;
    uVar31 = auVar49._0_4_;
    vextractps_avx(auVar50,1);
    vextractps_avx(auVar50,2);
    vextractps_avx(auVar50,3);
    auVar65._0_4_ = uVar29 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar65._4_4_ = uVar20 & _UNK_150b50b24;
    auVar65._8_4_ = uVar21 & _UNK_150b50b28;
    auVar65._12_4_ = uVar26 & _UNK_150b50b2c;
    vextractps_avx(auVar65,1);
    vextractps_avx(auVar65,2);
    vextractps_avx(auVar65,3);
    auVar51._0_4_ = uVar29 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar51._4_4_ = uVar20 & _UNK_150b50b44;
    auVar51._8_4_ = uVar21 & _UNK_150b50b48;
    auVar51._12_4_ = uVar26 & _UNK_150b50b4c;
    vextractps_avx(auVar51,1);
    vextractps_avx(auVar51,2);
    auVar46 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar25 + (uVar31 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar25)));
    vextractps_avx(auVar51,3);
    auVar43 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar25 + (uVar31 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar25 + auVar65._0_4_))));
    auVar59 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar25 + (uVar31 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar25 + auVar51._0_4_))));
  }
  auVar40 = vpcmpgtd_avx(auVar41,auVar40);
  auVar15 = vpcmpgtd_avx(auVar41,auVar52);
  auVar69._16_16_ = auVar40;
  auVar69._0_16_ = auVar15;
  auVar44 = vmaskmovps_avx(auVar69,auVar46);
  auVar43 = vmaskmovps_avx(auVar69,auVar43);
  auVar59 = vmaskmovps_avx(auVar69,auVar59);
  local_220 = auVar43._0_4_;
  uStack_21c = auVar43._4_4_;
  uStack_218 = auVar43._8_4_;
  uStack_214 = auVar43._12_4_;
  uStack_210 = auVar43._16_4_;
  uStack_20c = auVar43._20_4_;
  uStack_208 = auVar43._24_4_;
  uStack_204 = auVar43._28_4_;
  uVar29 = auVar15._0_4_;
  uVar20 = auVar15._4_4_;
  uVar21 = auVar15._8_4_;
  uVar26 = auVar15._12_4_;
  uVar31 = auVar40._0_4_;
  uVar32 = auVar40._4_4_;
  uVar34 = auVar40._8_4_;
  uVar62 = auVar40._12_4_;
  auVar41 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + (int)(uVar29 & local_220))),
                        (uint)*(byte *)(param_4 + (int)(uVar20 & uStack_21c)),1);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar21 & uStack_218)),2);
  auVar16 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar26 & uStack_214)),3);
  auVar41 = vpinsrb_avx(auVar16,(uint)*(byte *)(param_4 + (int)(uVar31 & uStack_210)),4);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar32 & uStack_20c)),5);
  auVar41 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar34 & uStack_208)),6);
  auVar17 = vpinsrb_avx(auVar41,(uint)*(byte *)(param_4 + (int)(uVar62 & uStack_204)),7);
  auVar41 = vpshufd_avx(ZEXT416(param_7),0);
  iStack_230 = auVar44._16_4_;
  iVar22 = auVar41._0_4_;
  auVar87._0_4_ = iVar22 + iStack_230;
  iStack_22c = auVar44._20_4_;
  iVar88 = auVar41._4_4_;
  auVar87._4_4_ = iVar88 + iStack_22c;
  iStack_228 = auVar44._24_4_;
  iVar89 = auVar41._8_4_;
  auVar87._8_4_ = iVar89 + iStack_228;
  iStack_224 = auVar44._28_4_;
  iVar90 = auVar41._12_4_;
  auVar87._12_4_ = iVar90 + iStack_224;
  auVar10._0_4_ = iVar22 + uStack_210;
  auVar10._4_4_ = iVar88 + uStack_20c;
  auVar10._8_4_ = iVar89 + uStack_208;
  auVar10._12_4_ = iVar90 + uStack_204;
  auVar41 = vpslld_avx(auVar87,4);
  auVar11 = vpand_avx(auVar40,auVar41);
  lVar27 = param_1 + auVar11._0_4_;
  auVar91._0_4_ = uVar29 & ___ymm_0000000400000004000000040000000400000004000000040000000400000004;
  auVar91._4_4_ = uVar20 & _UNK_150b50d44;
  auVar91._8_4_ = uVar21 & _UNK_150b50d48;
  auVar91._12_4_ = uVar26 & _UNK_150b50d4c;
  auVar97._0_4_ = uVar29 & ___ymm_0000000800000008000000080000000800000008000000080000000800000008;
  auVar97._4_4_ = uVar20 & _UNK_150b50d64;
  auVar97._8_4_ = uVar21 & _UNK_150b50d68;
  auVar97._12_4_ = uVar26 & _UNK_150b50d6c;
  auVar82 = vpslld_avx(auVar10,4);
  auVar12 = vpand_avx(auVar40,auVar82);
  lVar35 = param_1 + auVar12._0_4_;
  local_240 = auVar44._0_4_;
  auVar13._0_4_ = iVar22 + local_240;
  iStack_23c = auVar44._4_4_;
  auVar13._4_4_ = iVar88 + iStack_23c;
  iStack_238 = auVar44._8_4_;
  auVar13._8_4_ = iVar89 + iStack_238;
  iStack_234 = auVar44._12_4_;
  auVar13._12_4_ = iVar90 + iStack_234;
  auVar41 = vpslld_avx(auVar13,4);
  auVar13 = vpand_avx(auVar41,auVar15);
  auVar100._0_4_ = uVar29 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar100._4_4_ = uVar20 & _UNK_150b50d84;
  auVar100._8_4_ = uVar21 & _UNK_150b50d88;
  auVar100._12_4_ = uVar26 & _UNK_150b50d8c;
  lVar36 = param_1 + auVar11._4_4_;
  auVar41 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d50) + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d54) + lVar36)),0x10);
  auVar52 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d70) + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d74) + lVar36)),0x10);
  lVar27 = param_1 + auVar12._4_4_;
  auVar40 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d50) + lVar35)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d54) + lVar27)),0x10);
  auVar49 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d70) + lVar35)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d74) + lVar27)),0x10);
  auVar65 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar31 & _UNK_150b50d90) + lVar35)),
                          ZEXT416(*(uint *)((ulonglong)(uVar32 & _UNK_150b50d94) + lVar27)),0x10);
  lVar27 = param_1 + auVar11._8_4_;
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d58) + lVar27)),
                          0x20);
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d78) + lVar27)),
                          0x20);
  lVar27 = param_1 + auVar12._8_4_;
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d58) + lVar27)),
                          0x20);
  auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d78) + lVar27)),
                          0x20);
  auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)((ulonglong)(uVar34 & _UNK_150b50d98) + lVar27)),
                          0x20);
  lVar27 = param_1 + auVar11._12_4_;
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d5c) + lVar27)),
                          0x30);
  auVar52 = vinsertps_avx(auVar52,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d7c) + lVar27)),
                          0x30);
  lVar27 = param_1 + auVar12._12_4_;
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d5c) + lVar27)),
                          0x30);
  auVar49 = vinsertps_avx(auVar49,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d7c) + lVar27)),
                          0x30);
  auVar65 = vinsertps_avx(auVar65,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50d9c) + lVar27)),
                          0x30);
  lVar27 = param_1 + auVar13._0_4_;
  uVar26 = vextractps_avx(auVar91,1);
  uVar29 = vextractps_avx(auVar91,2);
  uVar20 = vextractps_avx(auVar91,3);
  uVar31 = vextractps_avx(auVar97,1);
  uVar34 = vextractps_avx(auVar97,2);
  uVar21 = vextractps_avx(auVar97,3);
  lVar35 = param_1 + auVar13._4_4_;
  auVar94 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar26 + lVar35)),0x10);
  auVar57 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar97._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar31 + lVar35)),0x10);
  auVar14._0_4_ = iVar22 + local_220;
  auVar14._4_4_ = iVar88 + uStack_21c;
  auVar14._8_4_ = iVar89 + uStack_218;
  auVar14._12_4_ = iVar90 + uStack_214;
  auVar95 = vpslld_avx(auVar14,4);
  auVar14 = vpand_avx(auVar95,auVar15);
  lVar27 = param_1 + auVar14._0_4_;
  lVar35 = param_1 + auVar14._4_4_;
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar91._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar26 + lVar35)),0x10);
  auVar50 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar97._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar31 + lVar35)),0x10);
  uVar31 = vextractps_avx(auVar100,1);
  uVar32 = vextractps_avx(auVar100,2);
  uVar26 = vextractps_avx(auVar100,3);
  auVar51 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar100._0_4_ + lVar27)),
                          ZEXT416(*(uint *)((ulonglong)uVar31 + lVar35)),0x10);
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar11._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar11._4_4_)),0x10);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + auVar11._8_4_)),0x20);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + auVar11._12_4_)),0x30);
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar13._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar13._4_4_)),0x10);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar13._8_4_)),0x20);
  lVar27 = param_1 + auVar13._8_4_;
  auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)((ulonglong)uVar29 + lVar27)),0x20);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)((ulonglong)uVar34 + lVar27)),0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar13._12_4_)),0x30);
  lVar27 = param_1 + auVar13._12_4_;
  auVar94 = vinsertps_avx(auVar94,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar27)),0x30);
  auVar57 = vinsertps_avx(auVar57,ZEXT416(*(uint *)((ulonglong)uVar21 + lVar27)),0x30);
  auVar72._16_16_ = auVar87;
  auVar72._0_16_ = auVar10;
  auVar87 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar12._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar12._4_4_)),0x10);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + auVar12._8_4_)),0x20);
  auVar87 = vinsertps_avx(auVar87,ZEXT416(*(uint *)(param_1 + auVar12._12_4_)),0x30);
  auVar54._16_16_ = auVar41;
  auVar54._0_16_ = auVar94;
  auVar41 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar14._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar14._4_4_)),0x10);
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + auVar14._8_4_)),0x20);
  lVar27 = param_1 + auVar14._8_4_;
  auVar94 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)uVar29 + lVar27)),0x20);
  auVar15 = vinsertps_avx(auVar50,ZEXT416(*(uint *)((ulonglong)uVar34 + lVar27)),0x20);
  auVar99._16_16_ = auVar52;
  auVar99._0_16_ = auVar57;
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)(param_1 + auVar14._12_4_)),0x30);
  auVar101._16_16_ = auVar87;
  auVar101._0_16_ = auVar41;
  auVar41 = vinsertps_avx(auVar51,ZEXT416(*(uint *)((ulonglong)uVar32 + lVar27)),0x20);
  lVar27 = param_1 + auVar14._12_4_;
  auVar52 = vinsertps_avx(auVar94,ZEXT416(*(uint *)((ulonglong)uVar20 + lVar27)),0x30);
  auVar94 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)uVar21 + lVar27)),0x30);
  auVar103._16_16_ = auVar40;
  auVar103._0_16_ = auVar52;
  auVar41 = vinsertps_avx(auVar41,ZEXT416(*(uint *)((ulonglong)uVar26 + lVar27)),0x30);
  auVar60._16_16_ = auVar49;
  auVar60._0_16_ = auVar94;
  auVar44 = vmaskmovps_avx(auVar69,auVar72);
  auVar43 = vmaskmovps_avx(auVar69,auVar54);
  auVar68 = vmaskmovps_avx(auVar69,auVar99);
  auVar53 = vmaskmovps_avx(auVar69,auVar101);
  auVar58 = vmaskmovps_avx(auVar69,auVar103);
  auVar42 = vmaskmovps_avx(auVar69,auVar60);
  auVar52 = vpshufd_avx(auVar17,0x55);
  auVar52 = vpmovzxbd_avx(auVar52);
  auVar40 = vpmovzxbd_avx(auVar16);
  auVar49 = vpslld_avx(auVar40,2);
  auVar52 = vpslld_avx(auVar52,2);
  auVar40 = vpunpckhdq_avx(auVar52,ZEXT816(0) << 0x20);
  auVar52 = vpmovzxdq_avx(auVar52);
  auVar55._16_16_ = auVar40;
  auVar55._0_16_ = auVar52;
  auVar40 = vpunpckhdq_avx(auVar49,ZEXT816(0) << 0x20);
  auVar52 = vpmovzxdq_avx(auVar49);
  auVar70._16_16_ = auVar40;
  auVar70._0_16_ = auVar52;
  auVar52 = vpmovsxdq_avx(auVar18);
  auVar18 = vpshufd_avx(auVar18,0xfa);
  auVar73._16_16_ = auVar18;
  auVar73._0_16_ = auVar52;
  auVar63 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar70,auVar73);
  auVar18 = vpmovsxdq_avx(auVar86);
  auVar86 = vpshufd_avx(auVar86,0xfa);
  auVar74._16_16_ = auVar86;
  auVar74._0_16_ = auVar18;
  auVar66 = vblendvps_avx(ZEXT1632((undefined1  [16])0x0),auVar55,auVar74);
  auVar86 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + auVar66._0_8_)),
                          ZEXT416(*(uint *)(param_5 + auVar66._8_8_)),0x10);
  auVar86 = vinsertps_avx(auVar86,ZEXT416(*(uint *)(param_5 + auVar66._16_8_)),0x20);
  auVar86 = vinsertps_avx(auVar86,ZEXT416(*(uint *)(param_5 + auVar66._24_8_)),0x30);
  auVar18 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + auVar63._0_8_)),
                          ZEXT416(*(uint *)(param_5 + auVar63._8_8_)),0x10);
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_5 + auVar63._16_8_)),0x20);
  auVar44 = vsubps_avx(auVar44,auVar53);
  auVar66 = vsubps_avx(auVar43,auVar58);
  auVar67 = vsubps_avx(auVar68,auVar42);
  auVar81._0_4_ =
       auVar67._0_4_ * auVar67._0_4_ + auVar66._0_4_ * auVar66._0_4_ + auVar44._0_4_ * auVar44._0_4_
  ;
  auVar81._4_4_ =
       auVar67._4_4_ * auVar67._4_4_ + auVar66._4_4_ * auVar66._4_4_ + auVar44._4_4_ * auVar44._4_4_
  ;
  auVar81._8_4_ =
       auVar67._8_4_ * auVar67._8_4_ + auVar66._8_4_ * auVar66._8_4_ + auVar44._8_4_ * auVar44._8_4_
  ;
  auVar81._12_4_ =
       auVar67._12_4_ * auVar67._12_4_ +
       auVar66._12_4_ * auVar66._12_4_ + auVar44._12_4_ * auVar44._12_4_;
  auVar81._16_4_ =
       auVar67._16_4_ * auVar67._16_4_ +
       auVar66._16_4_ * auVar66._16_4_ + auVar44._16_4_ * auVar44._16_4_;
  auVar81._20_4_ =
       auVar67._20_4_ * auVar67._20_4_ +
       auVar66._20_4_ * auVar66._20_4_ + auVar44._20_4_ * auVar44._20_4_;
  auVar81._24_4_ =
       auVar67._24_4_ * auVar67._24_4_ +
       auVar66._24_4_ * auVar66._24_4_ + auVar44._24_4_ * auVar44._24_4_;
  auVar81._28_4_ =
       auVar67._28_4_ * auVar67._28_4_ +
       auVar66._28_4_ * auVar66._28_4_ + auVar44._28_4_ * auVar44._28_4_;
  auVar68 = vsqrtps_avx(auVar81);
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_5 + auVar63._24_8_)),0x30);
  auVar43 = vcmpps_avx(auVar68,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar44 = vdivps_avx(auVar44,auVar68);
  auVar44 = vblendvps_avx(auVar44,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar43);
  local_200 = auVar59._0_4_;
  fStack_1fc = auVar59._4_4_;
  fStack_1f8 = auVar59._8_4_;
  fStack_1f4 = auVar59._12_4_;
  fStack_1f0 = auVar59._16_4_;
  fStack_1ec = auVar59._20_4_;
  fStack_1e8 = auVar59._24_4_;
  fStack_1e4 = auVar59._28_4_;
  auVar75._0_4_ = local_200 * auVar18._0_4_;
  auVar75._4_4_ = fStack_1fc * auVar18._4_4_;
  auVar75._8_4_ = fStack_1f8 * auVar18._8_4_;
  auVar75._12_4_ = fStack_1f4 * auVar18._12_4_;
  auVar75._16_4_ = fStack_1f0 * auVar86._0_4_;
  auVar75._20_4_ = fStack_1ec * auVar86._4_4_;
  auVar75._24_4_ = fStack_1e8 * auVar86._8_4_;
  auVar75._28_4_ = fStack_1e4 * auVar86._12_4_;
  auVar59 = vsubps_avx(auVar68,auVar75);
  auVar56 = vpermilps_avx(auVar56,0);
  fVar104 = auVar59._0_4_ * auVar56._0_4_;
  fVar105 = auVar59._4_4_ * auVar56._4_4_;
  fVar106 = auVar59._8_4_ * auVar56._8_4_;
  fVar107 = auVar59._12_4_ * auVar56._12_4_;
  fVar76 = auVar59._16_4_ * auVar56._0_4_;
  fVar77 = auVar59._20_4_ * auVar56._4_4_;
  fVar78 = auVar59._24_4_ * auVar56._8_4_;
  fVar79 = auVar59._28_4_ * auVar56._12_4_;
  auVar59 = vcmpps_avx(auVar59,ZEXT1632((undefined1  [16])0x0),1);
  uVar29 = auVar59._0_4_;
  uVar20 = auVar59._4_4_;
  uVar21 = auVar59._8_4_;
  uVar26 = auVar59._12_4_;
  uVar31 = auVar59._16_4_;
  uVar32 = auVar59._20_4_;
  uVar34 = auVar59._24_4_;
  uVar62 = auVar59._28_4_;
  auVar56._0_4_ = auVar53._0_4_ + (float)(~uVar29 & (uint)(auVar44._0_4_ * fVar104));
  auVar56._4_4_ = auVar53._4_4_ + (float)(~uVar20 & (uint)(auVar44._4_4_ * fVar105));
  auVar56._8_4_ = auVar53._8_4_ + (float)(~uVar21 & (uint)(auVar44._8_4_ * fVar106));
  auVar56._12_4_ = auVar53._12_4_ + (float)(~uVar26 & (uint)(auVar44._12_4_ * fVar107));
  auVar84._16_4_ = auVar53._16_4_ + (float)(~uVar31 & (uint)(auVar44._16_4_ * fVar76));
  auVar84._0_16_ = auVar56;
  auVar84._20_4_ = auVar53._20_4_ + (float)(~uVar32 & (uint)(auVar44._20_4_ * fVar77));
  auVar84._24_4_ = auVar53._24_4_ + (float)(~uVar34 & (uint)(auVar44._24_4_ * fVar78));
  auVar84._28_4_ = auVar53._28_4_ + (float)(~uVar62 & (uint)(auVar44._28_4_ * fVar79));
  cVar19 = (char)uVar23;
  auVar86 = auVar84._16_16_;
  iVar90 = auVar95._0_4_;
  iVar22 = auVar95._4_4_;
  iVar88 = auVar95._8_4_;
  iVar89 = auVar95._12_4_;
  iVar64 = auVar82._0_4_;
  if ((uVar23 & 1) != 0) {
    *(float *)(param_1 + iVar90) = auVar56._0_4_;
  }
  if ((uVar23 & 2) != 0) {
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + iVar22) = uVar1;
  }
  if ((uVar23 & 4) != 0) {
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + iVar88) = uVar1;
  }
  if ((uVar23 & 8) == 0) {
    auVar59 = vdivps_avx(auVar66,auVar68);
  }
  else {
    uVar1 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + iVar89) = uVar1;
    auVar59 = vdivps_avx(auVar66,auVar68);
  }
  if ((uVar23 & 0x10) != 0) {
    *(float *)(param_1 + iVar64) = auVar84._16_4_;
  }
  if ((uVar23 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar82,1);
    uVar1 = vextractps_avx(auVar86,1);
    *(undefined4 *)(param_1 + iVar24) = uVar1;
  }
  if ((uVar23 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar82,2);
    uVar1 = vextractps_avx(auVar86,2);
    *(undefined4 *)(param_1 + iVar24) = uVar1;
  }
  uVar8 = ~uVar62 & (uint)((float)(~auVar43._28_4_ & auVar59._28_4_) * fVar79);
  uVar7 = ~uVar34 & (uint)((float)(~auVar43._24_4_ & auVar59._24_4_) * fVar78);
  uVar6 = ~uVar32 & (uint)((float)(~auVar43._20_4_ & auVar59._20_4_) * fVar77);
  uVar5 = ~uVar31 & (uint)((float)(~auVar43._16_4_ & auVar59._16_4_) * fVar76);
  uVar4 = ~uVar26 & (uint)((float)(~auVar43._12_4_ & auVar59._12_4_) * fVar107);
  uVar3 = ~uVar21 & (uint)((float)(~auVar43._8_4_ & auVar59._8_4_) * fVar106);
  uVar2 = ~uVar20 & (uint)((float)(~auVar43._4_4_ & auVar59._4_4_) * fVar105);
  uVar1 = ~uVar29 & (uint)((float)(~auVar43._0_4_ & auVar59._0_4_) * fVar104);
  if (cVar19 < '\0') {
    iVar24 = vextractps_avx(auVar82,3);
    uVar9 = vextractps_avx(auVar86,3);
    *(undefined4 *)(param_1 + iVar24) = uVar9;
    auVar85._0_4_ = auVar58._0_4_ + (float)uVar1;
    auVar85._4_4_ = auVar58._4_4_ + (float)uVar2;
    auVar85._8_4_ = auVar58._8_4_ + (float)uVar3;
    auVar85._12_4_ = auVar58._12_4_ + (float)uVar4;
    auVar85._16_4_ = auVar58._16_4_ + (float)uVar5;
    auVar85._20_4_ = auVar58._20_4_ + (float)uVar6;
    auVar85._24_4_ = auVar58._24_4_ + (float)uVar7;
    auVar85._28_4_ = auVar58._28_4_ + (float)uVar8;
  }
  else {
    auVar85._0_4_ = auVar58._0_4_ + (float)uVar1;
    auVar85._4_4_ = auVar58._4_4_ + (float)uVar2;
    auVar85._8_4_ = auVar58._8_4_ + (float)uVar3;
    auVar85._12_4_ = auVar58._12_4_ + (float)uVar4;
    auVar85._16_4_ = auVar58._16_4_ + (float)uVar5;
    auVar85._20_4_ = auVar58._20_4_ + (float)uVar6;
    auVar85._24_4_ = auVar58._24_4_ + (float)uVar7;
    auVar85._28_4_ = auVar58._28_4_ + (float)uVar8;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar90) = auVar85._0_4_;
  }
  auVar56 = auVar85._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar1;
  }
  if ((uVar23 & 4) != 0) {
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar88) = uVar1;
  }
  if ((uVar23 & 8) == 0) {
    auVar59 = vdivps_avx(auVar67,auVar68);
  }
  else {
    uVar1 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar89) = uVar1;
    auVar59 = vdivps_avx(auVar67,auVar68);
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar64) = auVar85._16_4_;
  }
  auVar56 = auVar85._16_16_;
  if ((uVar23 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar82,1);
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar1;
  }
  if ((uVar23 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar82,2);
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar1;
  }
  uVar8 = ~uVar62 & (uint)((float)(~auVar43._28_4_ & auVar59._28_4_) * fVar79);
  uVar7 = ~uVar34 & (uint)((float)(~auVar43._24_4_ & auVar59._24_4_) * fVar78);
  uVar6 = ~uVar32 & (uint)((float)(~auVar43._20_4_ & auVar59._20_4_) * fVar77);
  uVar5 = ~uVar31 & (uint)((float)(~auVar43._16_4_ & auVar59._16_4_) * fVar76);
  uVar4 = ~uVar26 & (uint)((float)(~auVar43._12_4_ & auVar59._12_4_) * fVar107);
  uVar3 = ~uVar21 & (uint)((float)(~auVar43._8_4_ & auVar59._8_4_) * fVar106);
  uVar2 = ~uVar20 & (uint)((float)(~auVar43._4_4_ & auVar59._4_4_) * fVar105);
  uVar1 = ~uVar29 & (uint)((float)(~auVar43._0_4_ & auVar59._0_4_) * fVar104);
  if (cVar19 < '\0') {
    iVar24 = vextractps_avx(auVar82,3);
    uVar9 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar24) = uVar9;
    auVar61._0_4_ = auVar42._0_4_ + (float)uVar1;
    auVar61._4_4_ = auVar42._4_4_ + (float)uVar2;
    auVar61._8_4_ = auVar42._8_4_ + (float)uVar3;
    auVar61._12_4_ = auVar42._12_4_ + (float)uVar4;
    auVar61._16_4_ = auVar42._16_4_ + (float)uVar5;
    auVar61._20_4_ = auVar42._20_4_ + (float)uVar6;
    auVar61._24_4_ = auVar42._24_4_ + (float)uVar7;
    auVar61._28_4_ = auVar42._28_4_ + (float)uVar8;
  }
  else {
    auVar61._0_4_ = auVar42._0_4_ + (float)uVar1;
    auVar61._4_4_ = auVar42._4_4_ + (float)uVar2;
    auVar61._8_4_ = auVar42._8_4_ + (float)uVar3;
    auVar61._12_4_ = auVar42._12_4_ + (float)uVar4;
    auVar61._16_4_ = auVar42._16_4_ + (float)uVar5;
    auVar61._20_4_ = auVar42._20_4_ + (float)uVar6;
    auVar61._24_4_ = auVar42._24_4_ + (float)uVar7;
    auVar61._28_4_ = auVar42._28_4_ + (float)uVar8;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar90) = auVar61._0_4_;
  }
  auVar56 = auVar61._0_16_;
  if ((uVar23 & 2) != 0) {
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar1;
  }
  if ((uVar23 & 4) != 0) {
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar88) = uVar1;
  }
  if ((uVar23 & 8) != 0) {
    uVar1 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar89) = uVar1;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar64) = auVar61._16_4_;
  }
  auVar56 = auVar61._16_16_;
  if ((uVar23 & 0x20) != 0) {
    iVar24 = vextractps_avx(auVar82,1);
    uVar1 = vextractps_avx(auVar56,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar1;
  }
  if ((uVar23 & 0x40) != 0) {
    iVar24 = vextractps_avx(auVar82,2);
    uVar1 = vextractps_avx(auVar56,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar1;
  }
  if (cVar19 < '\0') {
    iVar24 = vextractps_avx(auVar82,3);
    uVar1 = vextractps_avx(auVar56,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar24) = uVar1;
  }
  if ((uVar23 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar90) = auVar41._0_4_;
  }
  if ((uVar23 & 2) != 0) {
    uVar1 = vextractps_avx(auVar41,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar1;
  }
  if ((uVar23 & 4) != 0) {
    uVar1 = vextractps_avx(auVar41,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar88) = uVar1;
  }
  if ((uVar23 & 8) != 0) {
    uVar1 = vextractps_avx(auVar41,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar89) = uVar1;
  }
  if ((uVar23 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar64) = auVar65._0_4_;
  }
  if ((uVar23 & 0x20) != 0) {
    iVar22 = vextractps_avx(auVar82,1);
    uVar1 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar1;
  }
  if ((uVar23 & 0x40) != 0) {
    iVar22 = vextractps_avx(auVar82,2);
    uVar1 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar1;
  }
  if (cVar19 < '\0') {
    uVar1 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)auVar82._12_4_) = uVar1;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx @ 1402f68e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,uint param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  undefined1 (*pauVar23) [32];
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar33;
  int iVar34;
  undefined1 auVar29 [16];
  int iVar35;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar36 [16];
  undefined1 auVar32 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  uint uVar52;
  undefined1 auVar50 [16];
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar51 [32];
  uint uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [16];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [16];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  int iVar86;
  undefined1 auVar87 [32];
  float fVar88;
  float fVar93;
  float fVar94;
  undefined1 auVar89 [16];
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar90 [32];
  float fVar95;
  float fVar99;
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  uint local_324;
  int local_260;
  int iStack_25c;
  int iStack_258;
  int iStack_254;
  int local_220;
  int iStack_21c;
  int iStack_218;
  int iStack_214;
  int iStack_210;
  int iStack_20c;
  int iStack_208;
  int iStack_204;
  uint local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  uint uStack_1e4;
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auVar82 [32];
  
  uVar15 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar15 = param_7;
  }
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    local_324 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar79 = vshufps_avx(ZEXT416(param_8),ZEXT416(param_8),0);
    pauVar23 = (undefined1 (*) [32])(param_2 + 0x40);
    local_324 = 0;
    do {
      auVar63 = pauVar23[-2];
      auVar67._16_16_ = *(undefined1 (*) [16])pauVar23[-2];
      auVar67._0_16_ = *(undefined1 (*) [16])(pauVar23[-2] + 0x10);
      auVar67 = vblendps_avx(auVar63,auVar67,0x24);
      uVar1 = *(undefined4 *)(pauVar23[-1] + 4);
      auVar76._4_4_ = uVar1;
      auVar76._0_4_ = uVar1;
      auVar76._8_4_ = uVar1;
      auVar76._12_4_ = uVar1;
      uVar1 = *(undefined4 *)(pauVar23[-1] + 8);
      auVar76._20_4_ = uVar1;
      auVar76._16_4_ = uVar1;
      auVar76._24_4_ = uVar1;
      auVar76._28_4_ = uVar1;
      auVar32 = vpermilps_avx(auVar67,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar71._16_16_ = *(undefined1 (*) [16])*pauVar23;
      auVar71._0_16_ = *(undefined1 (*) [16])(*pauVar23 + 0x10);
      auVar67 = vblendps_avx(auVar71,*pauVar23,0x44);
      auVar31 = vpermilps_avx(auVar67,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar36 = vshufps_avx(*(undefined1 (*) [16])(pauVar23[-1] + 0x10),
                            *(undefined1 (*) [16])(pauVar23[-1] + 0x10),0xec);
      uVar1 = *(undefined4 *)(pauVar23[-1] + 0x14);
      auVar41._20_4_ = uVar1;
      auVar41._16_4_ = uVar1;
      auVar41._24_4_ = uVar1;
      auVar41._28_4_ = uVar1;
      auVar41._0_16_ = auVar36;
      auVar67 = vblendps_avx(auVar32,auVar76,0x88);
      auVar32 = vblendps_avx(auVar31,auVar41,0x13);
      auVar31 = vblendps_avx(pauVar23[-1],auVar63,0x24);
      auVar31 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(pauVar23[-2] + 0x10)),auVar31,0x21);
      auVar31 = vshufps_avx(auVar31,pauVar23[-1],0xc2);
      auVar36 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + *(int *)(pauVar23[-2] + 4))),
                            (uint)*(byte *)(param_3 + *(int *)(pauVar23[-2] + 0x10)),1);
      auVar39 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + *(int *)(pauVar23[-2] + 4))),
                            (uint)*(byte *)(param_5 + *(int *)(pauVar23[-2] + 0x10)),1);
      auVar29 = vpinsrb_avx(auVar36,(uint)*(byte *)(param_3 + *(int *)(pauVar23[-2] + 0x1c)),2);
      auVar63 = vshufps_avx(auVar71,*pauVar23,0xc4);
      local_260 = auVar79._0_4_;
      iStack_25c = auVar79._4_4_;
      iStack_258 = auVar79._8_4_;
      iStack_254 = auVar79._12_4_;
      auVar36._0_4_ = local_260 + auVar67._0_4_;
      auVar36._4_4_ = iStack_25c + auVar67._4_4_;
      auVar36._8_4_ = iStack_258 + auVar67._8_4_;
      auVar36._12_4_ = iStack_254 + auVar67._12_4_;
      auVar40 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + *(int *)(pauVar23[-2] + 0x1c)),2);
      auVar39._0_4_ = auVar32._0_4_ + local_260;
      auVar39._4_4_ = auVar32._4_4_ + iStack_25c;
      auVar39._8_4_ = auVar32._8_4_ + iStack_258;
      auVar39._12_4_ = auVar32._12_4_ + iStack_254;
      auVar38 = vpinsrb_avx(auVar29,(uint)*(byte *)(param_3 + *(int *)(pauVar23[-1] + 8)),3);
      auVar29 = vpslld_avx(auVar39,4);
      auVar50 = vpslld_avx(auVar36,4);
      auVar66 = vpinsrb_avx(auVar40,(uint)*(byte *)(param_5 + *(int *)(pauVar23[-1] + 8)),3);
      lVar20 = (longlong)auVar50._0_4_;
      auVar36 = vpinsrb_avx(auVar38,(uint)*(byte *)(param_3 + *(int *)(pauVar23[-1] + 0x14)),4);
      lVar25 = (longlong)auVar50._4_4_;
      lVar19 = (longlong)auVar50._8_4_;
      auVar39 = vpinsrb_avx(auVar66,(uint)*(byte *)(param_5 + *(int *)(pauVar23[-1] + 0x14)),4);
      auVar10 = vpinsrb_avx(auVar36,(uint)*(byte *)(param_3 + *(int *)*pauVar23),5);
      lVar26 = (longlong)auVar29._0_4_;
      auVar58 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + *(int *)*pauVar23),5);
      lVar17 = (longlong)auVar50._12_4_;
      lVar28 = (longlong)auVar29._4_4_;
      lVar27 = (longlong)auVar29._8_4_;
      lVar21 = (longlong)auVar29._12_4_;
      auVar36 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar28)),0x10);
      auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_1 + lVar27)),0x20);
      auVar39 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + lVar25)),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar19)),0x20);
      auVar29 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar28)),0x10);
      auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x20);
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x10);
      auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_1 + lVar21)),0x30);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 4 + lVar19)),0x20);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar17)),0x30);
      auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar28)),0x10);
      auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x30);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 4 + lVar17)),0x30);
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar20)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x10);
      auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x30);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + 8 + lVar19)),0x20);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_1 + 8 + lVar17)),0x30);
      auVar74._0_4_ = local_260 + auVar67._16_4_;
      auVar74._4_4_ = iStack_25c + auVar67._20_4_;
      auVar74._8_4_ = iStack_258 + auVar67._24_4_;
      auVar74._12_4_ = iStack_254 + auVar67._28_4_;
      auVar72 = vpslld_avx(auVar74,4);
      auVar74 = vpinsrb_avx(auVar10,(uint)*(byte *)(param_3 + *(int *)(*pauVar23 + 0xc)),6);
      auVar10 = vpinsrb_avx(auVar58,(uint)*(byte *)(param_5 + *(int *)(*pauVar23 + 0xc)),6);
      auVar58 = vpinsrb_avx(auVar74,(uint)*(byte *)(param_3 + *(int *)(*pauVar23 + 0x18)),7);
      auVar10 = vpinsrb_avx(auVar10,(uint)*(byte *)(param_5 + *(int *)(*pauVar23 + 0x18)),7);
      auVar74 = vpmovzxbd_avx(auVar38);
      auVar37 = vpslld_avx(auVar74,2);
      auVar74 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._0_4_)),
                              ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._4_4_)),0x10);
      auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._8_4_)),0x20);
      auVar38 = vpshufd_avx(auVar58,0x55);
      auVar38 = vpmovzxbd_avx(auVar38);
      auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._12_4_)),0x30);
      auVar37 = vpslld_avx(auVar38,2);
      auVar38 = vpmovzxbd_avx(auVar66);
      auVar66 = vpshufd_avx(auVar10,0x55);
      auVar66 = vpmovzxbd_avx(auVar66);
      auVar69 = vpslld_avx(auVar38,2);
      auVar38 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._0_4_)),
                              ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._4_4_)),0x10);
      auVar58 = vpslld_avx(auVar66,2);
      auVar66 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar69._0_4_)),
                              ZEXT416(*(uint *)(param_6 + (ulonglong)auVar69._4_4_)),0x10);
      auVar10._0_4_ = local_260 + auVar32._16_4_;
      auVar10._4_4_ = iStack_25c + auVar32._20_4_;
      auVar10._8_4_ = iStack_258 + auVar32._24_4_;
      auVar10._12_4_ = iStack_254 + auVar32._28_4_;
      auVar89 = vpslld_avx(auVar10,4);
      lVar28 = (longlong)auVar72._0_4_;
      lVar25 = (longlong)auVar72._4_4_;
      auVar66 = vinsertps_avx(auVar66,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar69._8_4_)),0x20);
      auVar66 = vinsertps_avx(auVar66,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar69._12_4_)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + (ulonglong)auVar58._0_4_)),
                              ZEXT416(*(uint *)(param_6 + (ulonglong)auVar58._4_4_)),0x10);
      lVar19 = (longlong)auVar72._8_4_;
      lVar26 = (longlong)auVar89._0_4_;
      lVar21 = (longlong)auVar89._4_4_;
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._8_4_)),0x20);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar58._8_4_)),0x20);
      auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_4 + (ulonglong)auVar37._12_4_)),0x30);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_6 + (ulonglong)auVar58._12_4_)),0x30);
      lVar20 = (longlong)auVar89._8_4_;
      lVar17 = (longlong)auVar89._12_4_;
      auVar58 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + lVar21)),0x10);
      auVar30._16_16_ = auVar36;
      auVar30._0_16_ = auVar39;
      auVar36 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + lVar20)),0x20);
      auVar39 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + lVar25)),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar19)),0x20);
      auVar58 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar21)),0x10);
      auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_1 + lVar17)),0x30);
      lVar27 = (longlong)auVar72._12_4_;
      auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + 4 + lVar20)),0x20);
      auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 4 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + 4 + lVar25)),0x10);
      auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + lVar27)),0x30);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + 4 + lVar19)),0x20);
      auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)(param_1 + 4 + lVar17)),0x30);
      auVar90._16_16_ = auVar29;
      auVar90._0_16_ = auVar40;
      auVar29 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + 4 + lVar27)),0x30);
      auVar100._16_16_ = auVar36;
      auVar100._0_16_ = auVar39;
      auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar26)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar21)),0x10);
      auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + 8 + lVar28)),
                              ZEXT416(*(uint *)(param_1 + 8 + lVar25)),0x10);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 8 + lVar20)),0x20);
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + 8 + lVar19)),0x20);
      auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_1 + 8 + lVar17)),0x30);
      auVar73._16_16_ = auVar58;
      auVar73._0_16_ = auVar29;
      auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_1 + 8 + lVar27)),0x30);
      auVar80._16_16_ = auVar50;
      auVar80._0_16_ = auVar61;
      auVar62._16_16_ = auVar40;
      auVar62._0_16_ = auVar37;
      auVar30 = vsubps_avx(auVar30,auVar100);
      auVar41 = vsubps_avx(auVar90,auVar73);
      auVar31 = vblendps_avx(auVar63,auVar31,0x1f);
      auVar62 = vsubps_avx(auVar80,auVar62);
      uVar1 = *(undefined4 *)(param_1 + 0xc + lVar28);
      auVar83._0_4_ =
           auVar62._0_4_ * auVar62._0_4_ +
           auVar41._0_4_ * auVar41._0_4_ + auVar30._0_4_ * auVar30._0_4_;
      auVar83._4_4_ =
           auVar62._4_4_ * auVar62._4_4_ +
           auVar41._4_4_ * auVar41._4_4_ + auVar30._4_4_ * auVar30._4_4_;
      auVar83._8_4_ =
           auVar62._8_4_ * auVar62._8_4_ +
           auVar41._8_4_ * auVar41._8_4_ + auVar30._8_4_ * auVar30._8_4_;
      auVar83._12_4_ =
           auVar62._12_4_ * auVar62._12_4_ +
           auVar41._12_4_ * auVar41._12_4_ + auVar30._12_4_ * auVar30._12_4_;
      auVar83._16_4_ =
           auVar62._16_4_ * auVar62._16_4_ +
           auVar41._16_4_ * auVar41._16_4_ + auVar30._16_4_ * auVar30._16_4_;
      auVar83._20_4_ =
           auVar62._20_4_ * auVar62._20_4_ +
           auVar41._20_4_ * auVar41._20_4_ + auVar30._20_4_ * auVar30._20_4_;
      auVar83._24_4_ =
           auVar62._24_4_ * auVar62._24_4_ +
           auVar41._24_4_ * auVar41._24_4_ + auVar30._24_4_ * auVar30._24_4_;
      auVar83._28_4_ =
           auVar62._28_4_ * auVar62._28_4_ +
           auVar41._28_4_ * auVar41._28_4_ + auVar30._28_4_ * auVar30._28_4_;
      uVar2 = *(undefined4 *)(param_1 + 0xc + lVar25);
      auVar71 = vsqrtps_avx(auVar83);
      auVar63 = vdivps_avx(auVar30,auVar71);
      uVar3 = *(undefined4 *)(param_1 + 0xc + lVar19);
      auVar41 = vdivps_avx(auVar41,auVar71);
      auVar62 = vdivps_avx(auVar62,auVar71);
      auVar30 = vcmpps_avx(auVar71,
                           ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1
                          );
      auVar63 = vblendvps_avx(auVar63,
                              ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000
                              ,auVar30);
      uVar4 = *(undefined4 *)(param_1 + 0xc + lVar26);
      auVar42._0_4_ = auVar66._0_4_ * auVar31._0_4_;
      auVar42._4_4_ = auVar66._4_4_ * auVar31._4_4_;
      auVar42._8_4_ = auVar66._8_4_ * auVar31._8_4_;
      auVar42._12_4_ = auVar66._12_4_ * auVar31._12_4_;
      auVar42._16_4_ = auVar10._0_4_ * auVar31._16_4_;
      auVar42._20_4_ = auVar10._4_4_ * auVar31._20_4_;
      auVar42._24_4_ = auVar10._8_4_ * auVar31._24_4_;
      auVar42._28_4_ = auVar10._12_4_ * auVar31._28_4_;
      auVar31 = vsubps_avx(auVar71,auVar42);
      uVar5 = *(undefined4 *)(param_1 + 0xc + lVar27);
      fVar88 = auVar74._0_4_ * auVar31._0_4_;
      fVar93 = auVar74._4_4_ * auVar31._4_4_;
      fVar94 = auVar74._8_4_ * auVar31._8_4_;
      fVar95 = auVar74._12_4_ * auVar31._12_4_;
      fVar96 = auVar38._0_4_ * auVar31._16_4_;
      fVar97 = auVar38._4_4_ * auVar31._20_4_;
      fVar98 = auVar38._8_4_ * auVar31._24_4_;
      fVar99 = auVar38._12_4_ * auVar31._28_4_;
      auVar31 = vcmpps_avx(auVar31,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar22 = auVar31._0_4_;
      uVar24 = auVar31._4_4_;
      uVar52 = auVar31._8_4_;
      uVar53 = auVar31._12_4_;
      uVar54 = auVar31._16_4_;
      uVar55 = auVar31._20_4_;
      uVar56 = auVar31._24_4_;
      uVar57 = auVar31._28_4_;
      auVar61._0_4_ = auVar39._0_4_ + (float)(~uVar22 & (uint)(auVar63._0_4_ * fVar88));
      auVar61._4_4_ = auVar39._4_4_ + (float)(~uVar24 & (uint)(auVar63._4_4_ * fVar93));
      auVar61._8_4_ = auVar39._8_4_ + (float)(~uVar52 & (uint)(auVar63._8_4_ * fVar94));
      auVar61._12_4_ = auVar39._12_4_ + (float)(~uVar53 & (uint)(auVar63._12_4_ * fVar95));
      auVar77._16_4_ = auVar36._0_4_ + (float)(~uVar54 & (uint)(auVar63._16_4_ * fVar96));
      auVar77._0_16_ = auVar61;
      auVar77._20_4_ = auVar36._4_4_ + (float)(~uVar55 & (uint)(auVar63._20_4_ * fVar97));
      auVar77._24_4_ = auVar36._8_4_ + (float)(~uVar56 & (uint)(auVar63._24_4_ * fVar98));
      auVar77._28_4_ = auVar36._12_4_ + (float)(~uVar57 & (uint)(auVar63._28_4_ * fVar99));
      uVar6 = *(undefined4 *)(param_1 + 0xc + lVar21);
      uVar7 = *(undefined4 *)(param_1 + 0xc + lVar20);
      uVar8 = *(undefined4 *)(param_1 + 0xc + lVar17);
      *(float *)(param_1 + lVar28) = auVar61._0_4_;
      uVar9 = vextractps_avx(auVar61,1);
      *(undefined4 *)(param_1 + lVar25) = uVar9;
      uVar9 = vextractps_avx(auVar61,2);
      *(undefined4 *)(param_1 + lVar19) = uVar9;
      uVar9 = vextractps_avx(auVar61,3);
      *(undefined4 *)(param_1 + lVar27) = uVar9;
      auVar36 = auVar77._16_16_;
      *(float *)(param_1 + lVar26) = auVar77._16_4_;
      uVar9 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + lVar21) = uVar9;
      uVar9 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + lVar20) = uVar9;
      auVar50._0_4_ =
           auVar29._0_4_ +
           (float)(~uVar22 & (uint)(fVar88 * (float)(~auVar30._0_4_ & auVar41._0_4_)));
      auVar50._4_4_ =
           auVar29._4_4_ +
           (float)(~uVar24 & (uint)(fVar93 * (float)(~auVar30._4_4_ & auVar41._4_4_)));
      auVar50._8_4_ =
           auVar29._8_4_ +
           (float)(~uVar52 & (uint)(fVar94 * (float)(~auVar30._8_4_ & auVar41._8_4_)));
      auVar50._12_4_ =
           auVar29._12_4_ +
           (float)(~uVar53 & (uint)(fVar95 * (float)(~auVar30._12_4_ & auVar41._12_4_)));
      auVar31._16_4_ =
           auVar58._0_4_ +
           (float)(~uVar54 & (uint)(fVar96 * (float)(~auVar30._16_4_ & auVar41._16_4_)));
      auVar31._0_16_ = auVar50;
      auVar31._20_4_ =
           auVar58._4_4_ +
           (float)(~uVar55 & (uint)(fVar97 * (float)(~auVar30._20_4_ & auVar41._20_4_)));
      auVar31._24_4_ =
           auVar58._8_4_ +
           (float)(~uVar56 & (uint)(fVar98 * (float)(~auVar30._24_4_ & auVar41._24_4_)));
      auVar31._28_4_ =
           auVar58._12_4_ +
           (float)(~uVar57 & (uint)(fVar99 * (float)(~auVar30._28_4_ & auVar41._28_4_)));
      uVar9 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + lVar17) = uVar9;
      *(float *)(param_1 + 4 + lVar28) = auVar50._0_4_;
      uVar9 = vextractps_avx(auVar50,1);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar9;
      uVar9 = vextractps_avx(auVar50,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar9;
      uVar9 = vextractps_avx(auVar50,3);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar9;
      auVar36 = auVar31._16_16_;
      *(float *)(param_1 + 4 + lVar26) = auVar31._16_4_;
      uVar9 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar9;
      uVar9 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar9;
      auVar29._0_4_ =
           auVar37._0_4_ +
           (float)(~uVar22 & (uint)((float)(~auVar30._0_4_ & auVar62._0_4_) * fVar88));
      auVar29._4_4_ =
           auVar37._4_4_ +
           (float)(~uVar24 & (uint)((float)(~auVar30._4_4_ & auVar62._4_4_) * fVar93));
      auVar29._8_4_ =
           auVar37._8_4_ +
           (float)(~uVar52 & (uint)((float)(~auVar30._8_4_ & auVar62._8_4_) * fVar94));
      auVar29._12_4_ =
           auVar37._12_4_ +
           (float)(~uVar53 & (uint)((float)(~auVar30._12_4_ & auVar62._12_4_) * fVar95));
      auVar63._16_4_ =
           auVar40._0_4_ +
           (float)(~uVar54 & (uint)((float)(~auVar30._16_4_ & auVar62._16_4_) * fVar96));
      auVar63._0_16_ = auVar29;
      auVar63._20_4_ =
           auVar40._4_4_ +
           (float)(~uVar55 & (uint)((float)(~auVar30._20_4_ & auVar62._20_4_) * fVar97));
      auVar63._24_4_ =
           auVar40._8_4_ +
           (float)(~uVar56 & (uint)((float)(~auVar30._24_4_ & auVar62._24_4_) * fVar98));
      auVar63._28_4_ =
           auVar40._12_4_ +
           (float)(~uVar57 & (uint)((float)(~auVar30._28_4_ & auVar62._28_4_) * fVar99));
      uVar9 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 4 + lVar17) = uVar9;
      *(float *)(param_1 + 8 + lVar28) = auVar29._0_4_;
      uVar9 = vextractps_avx(auVar29,1);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar9;
      uVar9 = vextractps_avx(auVar29,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar9;
      uVar9 = vextractps_avx(auVar29,3);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar9;
      auVar36 = auVar63._16_16_;
      *(float *)(param_1 + 8 + lVar26) = auVar63._16_4_;
      uVar9 = vextractps_avx(auVar36,1);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar9;
      uVar9 = vextractps_avx(auVar36,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar9;
      uVar9 = vextractps_avx(auVar36,3);
      *(undefined4 *)(param_1 + 8 + lVar17) = uVar9;
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar1;
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar2;
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar3;
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar5;
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar4;
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar6;
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar7;
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar8;
      pauVar23 = pauVar23 + 3;
      local_324 = local_324 + 8;
    } while ((int)local_324 < (int)(uVar15 & 0xfffffff8));
    vperm2f128_avx(auVar67,auVar32,0x31);
    if ((int)param_7 <= (int)local_324) {
      return;
    }
  }
  auVar79 = vpshufd_avx(ZEXT416(local_324),0);
  auVar32._16_16_ = auVar79;
  auVar32._0_16_ = auVar79;
  auVar39 = vpshufd_avx(ZEXT416(param_7),0);
  auVar29 = SUB3216(auVar32 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar40 = SUB3216(auVar32 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar79 = vpcmpgtd_avx(auVar39,auVar40);
  auVar36 = vpcmpgtd_avx(auVar39,auVar29);
  auVar43._16_16_ = auVar79;
  auVar43._0_16_ = auVar36;
  pauVar23 = (undefined1 (*) [32])(param_2 + (ulonglong)local_324 * 0xc);
  uVar15 = vmovmskps_avx(auVar43);
  if (uVar15 == 0xff) {
    auVar63 = pauVar23[2];
    auVar45._16_16_ = *(undefined1 (*) [16])*pauVar23;
    auVar45._0_16_ = *(undefined1 (*) [16])(*pauVar23 + 0x10);
    auVar67 = vblendps_avx(*pauVar23,auVar45,0x24);
    auVar32 = vpermilps_avx(auVar67,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar1 = *(undefined4 *)(pauVar23[1] + 4);
    auVar91._4_4_ = uVar1;
    auVar91._0_4_ = uVar1;
    auVar91._8_4_ = uVar1;
    auVar91._12_4_ = uVar1;
    uVar1 = *(undefined4 *)(pauVar23[1] + 8);
    auVar91._20_4_ = uVar1;
    auVar91._16_4_ = uVar1;
    auVar91._24_4_ = uVar1;
    auVar91._28_4_ = uVar1;
    auVar84._16_16_ = *(undefined1 (*) [16])pauVar23[2];
    auVar84._0_16_ = *(undefined1 (*) [16])(pauVar23[2] + 0x10);
    auVar67 = vblendps_avx(auVar84,auVar63,0x44);
    auVar31 = vpermilps_avx(auVar67,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar67 = vblendps_avx(auVar32,auVar91,0x88);
    auVar50 = vshufps_avx(*(undefined1 (*) [16])(pauVar23[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar23[1] + 0x10),0xec);
    uVar1 = *(undefined4 *)(pauVar23[1] + 0x14);
    auVar46._20_4_ = uVar1;
    auVar46._16_4_ = uVar1;
    auVar46._24_4_ = uVar1;
    auVar46._28_4_ = uVar1;
    auVar46._0_16_ = auVar50;
    auVar32 = vblendps_avx(auVar31,auVar46,0x13);
    auVar44._16_16_ = auVar32._0_16_;
    auVar44._0_16_ = auVar67._0_16_;
    auVar31 = vperm2f128_avx(auVar67,auVar32,0x31);
    auVar67 = vblendps_avx(pauVar23[1],*pauVar23,0x24);
    auVar67 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar23 + 0x10)),auVar67,0x21);
    auVar67 = vshufps_avx(auVar67,pauVar23[1],0xc2);
    auVar32 = vshufps_avx(auVar84,auVar63,0xc4);
    auVar67 = vblendps_avx(auVar67,auVar32,0xe0);
  }
  else {
    auVar50 = vpcmpgtd_avx(auVar39,auVar40);
    auVar61 = vpcmpgtd_avx(auVar39,auVar29);
    uVar22 = auVar61._0_4_;
    auVar38._0_4_ = uVar22 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar24 = auVar61._4_4_;
    auVar38._4_4_ = uVar24 & _UNK_150b50b04;
    uVar52 = auVar61._8_4_;
    auVar38._8_4_ = uVar52 & _UNK_150b50b08;
    uVar53 = auVar61._12_4_;
    auVar38._12_4_ = uVar53 & _UNK_150b50b0c;
    uVar54 = auVar50._0_4_;
    vextractps_avx(auVar38,1);
    vextractps_avx(auVar38,2);
    vextractps_avx(auVar38,3);
    auVar58._0_4_ = uVar22 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar58._4_4_ = uVar24 & _UNK_150b50b24;
    auVar58._8_4_ = uVar52 & _UNK_150b50b28;
    auVar58._12_4_ = uVar53 & _UNK_150b50b2c;
    vextractps_avx(auVar58,1);
    vextractps_avx(auVar58,2);
    vextractps_avx(auVar58,3);
    auVar66._0_4_ = uVar22 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
    ;
    auVar66._4_4_ = uVar24 & _UNK_150b50b44;
    auVar66._8_4_ = uVar52 & _UNK_150b50b48;
    auVar66._12_4_ = uVar53 & _UNK_150b50b4c;
    vextractps_avx(auVar66,1);
    vextractps_avx(auVar66,2);
    auVar44 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar23 + (uVar54 & _UNK_150b50b10)),
                                 ZEXT416(*(uint *)*pauVar23)));
    vextractps_avx(auVar66,3);
    auVar31 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar23 + (uVar54 & _UNK_150b50b30)),
                                 ZEXT416(*(uint *)(*pauVar23 + auVar58._0_4_))));
    auVar67 = ZEXT2032(CONCAT416(*(undefined4 *)(*pauVar23 + (uVar54 & _UNK_150b50b50)),
                                 ZEXT416(*(uint *)(*pauVar23 + auVar66._0_4_))));
  }
  auVar66 = vpcmpgtd_avx(auVar39,auVar40);
  auVar58 = vpcmpgtd_avx(auVar39,auVar29);
  auVar51._16_16_ = auVar66;
  auVar51._0_16_ = auVar58;
  auVar32 = vmaskmovps_avx(auVar51,auVar44);
  auVar31 = vmaskmovps_avx(auVar51,auVar31);
  auVar67 = vmaskmovps_avx(auVar51,auVar67);
  local_200 = auVar31._0_4_;
  uStack_1fc = auVar31._4_4_;
  uStack_1f8 = auVar31._8_4_;
  uStack_1f4 = auVar31._12_4_;
  uStack_1f0 = auVar31._16_4_;
  uStack_1ec = auVar31._20_4_;
  uStack_1e8 = auVar31._24_4_;
  uStack_1e4 = auVar31._28_4_;
  uVar22 = auVar58._0_4_;
  uVar24 = auVar58._4_4_;
  uVar52 = auVar58._8_4_;
  uVar53 = auVar58._12_4_;
  uVar54 = auVar66._0_4_;
  uVar55 = auVar66._4_4_;
  uVar56 = auVar66._8_4_;
  uVar57 = auVar66._12_4_;
  auVar39 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)(uVar22 & local_200))),
                        (uint)*(byte *)(param_3 + (int)(uVar24 & uStack_1fc)),1);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar52 & uStack_1f8)),2);
  auVar89 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar53 & uStack_1f4)),3);
  auVar39 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_3 + (int)(uVar54 & uStack_1f0)),4);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar55 & uStack_1ec)),5);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar56 & uStack_1e8)),6);
  auVar11 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_3 + (int)(uVar57 & uStack_1e4)),7);
  auVar39 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + (int)(uVar22 & local_200))),
                        (uint)*(byte *)(param_5 + (int)(uVar24 & uStack_1fc)),1);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar52 & uStack_1f8)),2);
  auVar12 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar53 & uStack_1f4)),3);
  auVar39 = vpinsrb_avx(auVar12,(uint)*(byte *)(param_5 + (int)(uVar54 & uStack_1f0)),4);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar55 & uStack_1ec)),5);
  auVar39 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar56 & uStack_1e8)),6);
  auVar13 = vpinsrb_avx(auVar39,(uint)*(byte *)(param_5 + (int)(uVar57 & uStack_1e4)),7);
  auVar39 = vpshufd_avx(ZEXT416(param_8),0);
  local_220 = auVar32._0_4_;
  iVar16 = auVar39._0_4_;
  auVar40._0_4_ = iVar16 + local_220;
  iStack_21c = auVar32._4_4_;
  iVar33 = auVar39._4_4_;
  auVar40._4_4_ = iVar33 + iStack_21c;
  iStack_218 = auVar32._8_4_;
  iVar34 = auVar39._8_4_;
  auVar40._8_4_ = iVar34 + iStack_218;
  iStack_214 = auVar32._12_4_;
  iVar35 = auVar39._12_4_;
  auVar40._12_4_ = iVar35 + iStack_214;
  iStack_210 = auVar32._16_4_;
  auVar37._0_4_ = iVar16 + iStack_210;
  iStack_20c = auVar32._20_4_;
  auVar37._4_4_ = iVar33 + iStack_20c;
  iStack_208 = auVar32._24_4_;
  auVar37._8_4_ = iVar34 + iStack_208;
  iStack_204 = auVar32._28_4_;
  auVar37._12_4_ = iVar35 + iStack_204;
  auVar29 = vpslld_avx(auVar37,4);
  auVar39 = vpslld_avx(auVar40,4);
  auVar38 = vpand_avx(auVar58,auVar39);
  auVar29 = vpand_avx(auVar66,auVar29);
  lVar17 = param_1 + auVar29._0_4_;
  lVar19 = param_1 + auVar29._4_4_;
  lVar20 = param_1 + auVar29._8_4_;
  auVar39 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar29._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar29._4_4_)),0x10);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + auVar29._8_4_)),0x20);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(param_1 + auVar29._12_4_)),0x30);
  lVar21 = param_1 + auVar29._12_4_;
  auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d50) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d54) + lVar19)),0x10);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d58) + lVar20)),
                          0x20);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d5c) + lVar21)),
                          0x30);
  auVar40 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d70) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d74) + lVar19)),0x10);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d78) + lVar20)),
                          0x20);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d7c) + lVar21)),
                          0x30);
  auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar38._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar38._4_4_)),0x10);
  lVar17 = param_1 + auVar38._0_4_;
  lVar19 = param_1 + auVar38._4_4_;
  auVar61 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar22 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar24 & _UNK_150b50d44) + lVar19)),0x10);
  auVar74 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar22 & 
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar24 & _UNK_150b50d64) + lVar19)),0x10);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + auVar38._8_4_)),0x20);
  lVar17 = param_1 + auVar38._8_4_;
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50d48) + lVar17)),
                          0x20);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50d68) + lVar17)),
                          0x20);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_1 + auVar38._12_4_)),0x30);
  lVar17 = param_1 + auVar38._12_4_;
  auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)((ulonglong)(uVar53 & _UNK_150b50d4c) + lVar17)),
                          0x30);
  auVar74 = vinsertps_avx(auVar74,ZEXT416(*(uint *)((ulonglong)(uVar53 & _UNK_150b50d6c) + lVar17)),
                          0x30);
  auVar69._0_4_ = iVar16 + uStack_1f0;
  auVar69._4_4_ = iVar33 + uStack_1ec;
  auVar69._8_4_ = iVar34 + uStack_1e8;
  auVar69._12_4_ = iVar35 + uStack_1e4;
  auVar69 = vpslld_avx(auVar69,4);
  auVar10 = vpand_avx(auVar66,auVar69);
  lVar17 = param_1 + auVar10._0_4_;
  auVar38 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar10._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar10._4_4_)),0x10);
  lVar19 = param_1 + auVar10._4_4_;
  auVar66 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d50) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d54) + lVar19)),0x10);
  auVar72._0_4_ = iVar16 + local_200;
  auVar72._4_4_ = iVar33 + uStack_1fc;
  auVar72._8_4_ = iVar34 + uStack_1f8;
  auVar72._12_4_ = iVar35 + uStack_1f4;
  auVar72 = vpslld_avx(auVar72,4);
  auVar37 = vpand_avx(auVar58,auVar72);
  auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + auVar10._8_4_)),0x20);
  lVar20 = param_1 + auVar10._8_4_;
  auVar66 = vinsertps_avx(auVar66,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d58) + lVar20)),
                          0x20);
  auVar38 = vinsertps_avx(auVar38,ZEXT416(*(uint *)(param_1 + auVar10._12_4_)),0x30);
  lVar21 = param_1 + auVar10._12_4_;
  auVar66 = vinsertps_avx(auVar66,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d5c) + lVar21)),
                          0x30);
  lVar25 = param_1 + auVar37._0_4_;
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_1 + auVar37._0_4_)),
                          ZEXT416(*(uint *)(param_1 + auVar37._4_4_)),0x10);
  lVar26 = param_1 + auVar37._4_4_;
  auVar58 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar22 & 
                                            ___ymm_0000000400000004000000040000000400000004000000040000000400000004
                                            ) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar24 & _UNK_150b50d44) + lVar26)),0x10);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar37._8_4_)),0x20);
  lVar27 = param_1 + auVar37._8_4_;
  auVar58 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50d48) + lVar27)),
                          0x20);
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_1 + auVar37._12_4_)),0x30);
  auVar102._16_16_ = auVar39;
  auVar102._0_16_ = auVar50;
  lVar28 = param_1 + auVar37._12_4_;
  auVar39 = vinsertps_avx(auVar58,ZEXT416(*(uint *)((ulonglong)(uVar53 & _UNK_150b50d4c) + lVar28)),
                          0x30);
  auVar101._16_16_ = auVar29;
  auVar101._0_16_ = auVar61;
  auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d70) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d74) + lVar19)),0x10);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d78) + lVar20)),
                          0x20);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d7c) + lVar21)),
                          0x30);
  auVar81._16_16_ = auVar40;
  auVar81._0_16_ = auVar74;
  auVar47._16_16_ = auVar38;
  auVar47._0_16_ = auVar10;
  auVar87._16_16_ = auVar66;
  auVar87._0_16_ = auVar39;
  auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                            (uVar22 & 
                                            ___ymm_0000000800000008000000080000000800000008000000080000000800000008
                                            ) + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)(uVar24 & _UNK_150b50d64) + lVar26)),0x10);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50d68) + lVar27)),
                          0x20);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar53 & _UNK_150b50d6c) + lVar28)),
                          0x30);
  auVar70._0_4_ = uVar22 & ___ymm_0000000c0000000c0000000c0000000c0000000c0000000c0000000c0000000c;
  auVar70._4_4_ = uVar24 & _UNK_150b50d84;
  auVar70._8_4_ = uVar52 & _UNK_150b50d88;
  auVar70._12_4_ = uVar53 & _UNK_150b50d8c;
  auVar92._16_16_ = auVar29;
  auVar92._0_16_ = auVar39;
  auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50d90) + lVar17)),
                          ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50d94) + lVar19)),0x10);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50d98) + lVar20)),
                          0x20);
  uVar22 = vextractps_avx(auVar70,1);
  uVar24 = vextractps_avx(auVar70,2);
  auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50d9c) + lVar21)),
                          0x30);
  auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar70._0_4_ + lVar25)),
                          ZEXT416(*(uint *)((ulonglong)uVar22 + lVar26)),0x10);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)uVar24 + lVar27)),0x20);
  auVar32 = vmaskmovps_avx(auVar51,auVar102);
  auVar31 = vmaskmovps_avx(auVar51,auVar101);
  auVar63 = vmaskmovps_avx(auVar51,auVar81);
  auVar30 = vmaskmovps_avx(auVar51,auVar47);
  auVar41 = vmaskmovps_avx(auVar51,auVar87);
  auVar62 = vmaskmovps_avx(auVar51,auVar92);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)auVar70._12_4_ + lVar28)),0x30);
  auVar40 = vpshufd_avx(auVar11,0x55);
  auVar40 = vpmovzxbd_avx(auVar40);
  auVar50 = vpmovzxbd_avx(auVar89);
  auVar61 = vpslld_avx(auVar50,2);
  auVar40 = vpslld_avx(auVar40,2);
  auVar74 = ZEXT816(0) << 0x20;
  auVar50 = vpunpckhdq_avx(auVar40,auVar74);
  auVar40 = vpmovzxdq_avx(auVar40);
  auVar68._16_16_ = auVar50;
  auVar68._0_16_ = auVar40;
  auVar50 = vpunpckhdq_avx(auVar61,auVar74);
  auVar40 = vpmovzxdq_avx(auVar61);
  auVar48._16_16_ = auVar50;
  auVar48._0_16_ = auVar40;
  auVar40 = vpmovsxdq_avx(auVar36);
  auVar36 = vpshufd_avx(auVar36,0xfa);
  auVar85._16_16_ = auVar36;
  auVar85._0_16_ = auVar40;
  auVar71 = vblendvps_avx(ZEXT832(0) << 0x20,auVar48,auVar85);
  auVar36 = vpmovsxdq_avx(auVar79);
  auVar79 = vpshufd_avx(auVar79,0xfa);
  auVar49._16_16_ = auVar79;
  auVar49._0_16_ = auVar36;
  auVar42 = vblendvps_avx(ZEXT832(0) << 0x20,auVar68,auVar49);
  auVar79 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + auVar42._0_8_)),
                          ZEXT416(*(uint *)(param_4 + auVar42._8_8_)),0x10);
  auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)(param_4 + auVar42._16_8_)),0x20);
  auVar79 = vinsertps_avx(auVar79,ZEXT416(*(uint *)(param_4 + auVar42._24_8_)),0x30);
  auVar36 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + auVar71._0_8_)),
                          ZEXT416(*(uint *)(param_4 + auVar71._8_8_)),0x10);
  auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_4 + auVar71._16_8_)),0x20);
  auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_4 + auVar71._24_8_)),0x30);
  auVar40 = vpshufd_avx(auVar13,0x55);
  auVar40 = vpmovzxbd_avx(auVar40);
  auVar50 = vpmovzxbd_avx(auVar12);
  auVar61 = vpslld_avx(auVar50,2);
  auVar40 = vpslld_avx(auVar40,2);
  auVar50 = vpunpckhdq_avx(auVar40,auVar74);
  auVar40 = vpmovzxdq_avx(auVar40);
  auVar64._16_16_ = auVar50;
  auVar64._0_16_ = auVar40;
  auVar50 = vpunpckhdq_avx(auVar61,auVar74);
  auVar40 = vpmovzxdq_avx(auVar61);
  auVar59._16_16_ = auVar50;
  auVar59._0_16_ = auVar40;
  auVar76 = ZEXT832(0) << 0x20;
  auVar71 = vblendvps_avx(auVar76,auVar59,auVar85);
  auVar42 = vblendvps_avx(auVar76,auVar64,auVar49);
  auVar40 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + auVar42._0_8_)),
                          ZEXT416(*(uint *)(param_6 + auVar42._8_8_)),0x10);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_6 + auVar42._16_8_)),0x20);
  auVar40 = vinsertps_avx(auVar40,ZEXT416(*(uint *)(param_6 + auVar42._24_8_)),0x30);
  auVar50 = vinsertps_avx(ZEXT416(*(uint *)(param_6 + auVar71._0_8_)),
                          ZEXT416(*(uint *)(param_6 + auVar71._8_8_)),0x10);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_6 + auVar71._16_8_)),0x20);
  auVar50 = vinsertps_avx(auVar50,ZEXT416(*(uint *)(param_6 + auVar71._24_8_)),0x30);
  auVar71 = vsubps_avx(auVar32,auVar30);
  auVar42 = vsubps_avx(auVar31,auVar41);
  auVar73 = vsubps_avx(auVar63,auVar62);
  auVar75._0_4_ =
       auVar71._0_4_ * auVar71._0_4_ + auVar42._0_4_ * auVar42._0_4_ + auVar73._0_4_ * auVar73._0_4_
  ;
  auVar75._4_4_ =
       auVar71._4_4_ * auVar71._4_4_ + auVar42._4_4_ * auVar42._4_4_ + auVar73._4_4_ * auVar73._4_4_
  ;
  auVar75._8_4_ =
       auVar71._8_4_ * auVar71._8_4_ + auVar42._8_4_ * auVar42._8_4_ + auVar73._8_4_ * auVar73._8_4_
  ;
  auVar75._12_4_ =
       auVar71._12_4_ * auVar71._12_4_ + auVar42._12_4_ * auVar42._12_4_ +
       auVar73._12_4_ * auVar73._12_4_;
  auVar75._16_4_ =
       auVar71._16_4_ * auVar71._16_4_ + auVar42._16_4_ * auVar42._16_4_ +
       auVar73._16_4_ * auVar73._16_4_;
  auVar75._20_4_ =
       auVar71._20_4_ * auVar71._20_4_ + auVar42._20_4_ * auVar42._20_4_ +
       auVar73._20_4_ * auVar73._20_4_;
  auVar75._24_4_ =
       auVar71._24_4_ * auVar71._24_4_ + auVar42._24_4_ * auVar42._24_4_ +
       auVar73._24_4_ * auVar73._24_4_;
  auVar75._28_4_ =
       auVar71._28_4_ * auVar71._28_4_ + auVar42._28_4_ * auVar42._28_4_ +
       auVar73._28_4_ * auVar73._28_4_;
  auVar63 = vsqrtps_avx(auVar75);
  local_1e0 = auVar67._0_4_;
  fStack_1dc = auVar67._4_4_;
  fStack_1d8 = auVar67._8_4_;
  fStack_1d4 = auVar67._12_4_;
  fStack_1d0 = auVar67._16_4_;
  fStack_1cc = auVar67._20_4_;
  fStack_1c8 = auVar67._24_4_;
  fStack_1c4 = auVar67._28_4_;
  auVar32 = vcmpps_avx(auVar63,
                       ___ymm_38d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b71738d1b717,1);
  auVar67 = vdivps_avx(auVar71,auVar63);
  auVar65._0_4_ = local_1e0 * auVar50._0_4_;
  auVar65._4_4_ = fStack_1dc * auVar50._4_4_;
  auVar65._8_4_ = fStack_1d8 * auVar50._8_4_;
  auVar65._12_4_ = fStack_1d4 * auVar50._12_4_;
  auVar65._16_4_ = fStack_1d0 * auVar40._0_4_;
  auVar65._20_4_ = fStack_1cc * auVar40._4_4_;
  auVar65._24_4_ = fStack_1c8 * auVar40._8_4_;
  auVar65._28_4_ = fStack_1c4 * auVar40._12_4_;
  auVar67 = vblendvps_avx(auVar67,
                          ___ymm_3f8000003f8000003f8000003f8000003f8000003f8000003f8000003f800000,
                          auVar32);
  auVar31 = vsubps_avx(auVar63,auVar65);
  fVar88 = auVar36._0_4_ * auVar31._0_4_;
  fVar93 = auVar36._4_4_ * auVar31._4_4_;
  fVar94 = auVar36._8_4_ * auVar31._8_4_;
  fVar95 = auVar36._12_4_ * auVar31._12_4_;
  fVar96 = auVar79._0_4_ * auVar31._16_4_;
  fVar97 = auVar79._4_4_ * auVar31._20_4_;
  fVar98 = auVar79._8_4_ * auVar31._24_4_;
  fVar99 = auVar79._12_4_ * auVar31._28_4_;
  auVar31 = vcmpps_avx(auVar31,auVar76,1);
  uVar22 = auVar31._0_4_;
  uVar24 = auVar31._4_4_;
  uVar52 = auVar31._8_4_;
  uVar53 = auVar31._12_4_;
  uVar54 = auVar31._16_4_;
  uVar55 = auVar31._20_4_;
  uVar56 = auVar31._24_4_;
  uVar57 = auVar31._28_4_;
  auVar79._0_4_ = auVar30._0_4_ + (float)(~uVar22 & (uint)(auVar67._0_4_ * fVar88));
  auVar79._4_4_ = auVar30._4_4_ + (float)(~uVar24 & (uint)(auVar67._4_4_ * fVar93));
  auVar79._8_4_ = auVar30._8_4_ + (float)(~uVar52 & (uint)(auVar67._8_4_ * fVar94));
  auVar79._12_4_ = auVar30._12_4_ + (float)(~uVar53 & (uint)(auVar67._12_4_ * fVar95));
  auVar82._16_4_ = auVar30._16_4_ + (float)(~uVar54 & (uint)(auVar67._16_4_ * fVar96));
  auVar82._0_16_ = auVar79;
  auVar82._20_4_ = auVar30._20_4_ + (float)(~uVar55 & (uint)(auVar67._20_4_ * fVar97));
  auVar82._24_4_ = auVar30._24_4_ + (float)(~uVar56 & (uint)(auVar67._24_4_ * fVar98));
  auVar82._28_4_ = auVar30._28_4_ + (float)(~uVar57 & (uint)(auVar67._28_4_ * fVar99));
  cVar14 = (char)uVar15;
  iVar35 = auVar72._0_4_;
  auVar36 = auVar82._16_16_;
  iVar16 = auVar72._4_4_;
  iVar33 = auVar72._8_4_;
  iVar34 = auVar72._12_4_;
  iVar86 = auVar69._0_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar35) = auVar79._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + iVar16) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + iVar33) = uVar1;
  }
  if ((uVar15 & 8) == 0) {
    auVar67 = vdivps_avx(auVar42,auVar63);
  }
  else {
    uVar1 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + iVar34) = uVar1;
    auVar67 = vdivps_avx(auVar42,auVar63);
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar86) = auVar82._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar69,1);
    uVar1 = vextractps_avx(auVar36,1);
    *(undefined4 *)(param_1 + iVar18) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar69,2);
    uVar1 = vextractps_avx(auVar36,2);
    *(undefined4 *)(param_1 + iVar18) = uVar1;
  }
  uVar8 = ~uVar57 & (uint)((float)(~auVar32._28_4_ & auVar67._28_4_) * fVar99);
  uVar7 = ~uVar56 & (uint)((float)(~auVar32._24_4_ & auVar67._24_4_) * fVar98);
  uVar6 = ~uVar55 & (uint)((float)(~auVar32._20_4_ & auVar67._20_4_) * fVar97);
  uVar5 = ~uVar54 & (uint)((float)(~auVar32._16_4_ & auVar67._16_4_) * fVar96);
  uVar4 = ~uVar53 & (uint)((float)(~auVar32._12_4_ & auVar67._12_4_) * fVar95);
  uVar3 = ~uVar52 & (uint)((float)(~auVar32._8_4_ & auVar67._8_4_) * fVar94);
  uVar2 = ~uVar24 & (uint)((float)(~auVar32._4_4_ & auVar67._4_4_) * fVar93);
  uVar1 = ~uVar22 & (uint)((float)(~auVar32._0_4_ & auVar67._0_4_) * fVar88);
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar69,3);
    uVar9 = vextractps_avx(auVar36,3);
    *(undefined4 *)(param_1 + iVar18) = uVar9;
    auVar78._0_4_ = auVar41._0_4_ + (float)uVar1;
    auVar78._4_4_ = auVar41._4_4_ + (float)uVar2;
    auVar78._8_4_ = auVar41._8_4_ + (float)uVar3;
    auVar78._12_4_ = auVar41._12_4_ + (float)uVar4;
    auVar78._16_4_ = auVar41._16_4_ + (float)uVar5;
    auVar78._20_4_ = auVar41._20_4_ + (float)uVar6;
    auVar78._24_4_ = auVar41._24_4_ + (float)uVar7;
    auVar78._28_4_ = auVar41._28_4_ + (float)uVar8;
  }
  else {
    auVar78._0_4_ = auVar41._0_4_ + (float)uVar1;
    auVar78._4_4_ = auVar41._4_4_ + (float)uVar2;
    auVar78._8_4_ = auVar41._8_4_ + (float)uVar3;
    auVar78._12_4_ = auVar41._12_4_ + (float)uVar4;
    auVar78._16_4_ = auVar41._16_4_ + (float)uVar5;
    auVar78._20_4_ = auVar41._20_4_ + (float)uVar6;
    auVar78._24_4_ = auVar41._24_4_ + (float)uVar7;
    auVar78._28_4_ = auVar41._28_4_ + (float)uVar8;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar35) = auVar78._0_4_;
  }
  auVar79 = auVar78._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar33) = uVar1;
  }
  if ((uVar15 & 8) == 0) {
    auVar67 = vdivps_avx(auVar73,auVar63);
  }
  else {
    uVar1 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar34) = uVar1;
    auVar67 = vdivps_avx(auVar73,auVar63);
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar86) = auVar78._16_4_;
  }
  auVar79 = auVar78._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar69,1);
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar69,2);
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar1;
  }
  uVar8 = ~uVar57 & (uint)((float)(~auVar32._28_4_ & auVar67._28_4_) * fVar99);
  uVar7 = ~uVar56 & (uint)((float)(~auVar32._24_4_ & auVar67._24_4_) * fVar98);
  uVar6 = ~uVar55 & (uint)((float)(~auVar32._20_4_ & auVar67._20_4_) * fVar97);
  uVar5 = ~uVar54 & (uint)((float)(~auVar32._16_4_ & auVar67._16_4_) * fVar96);
  uVar4 = ~uVar53 & (uint)((float)(~auVar32._12_4_ & auVar67._12_4_) * fVar95);
  uVar3 = ~uVar52 & (uint)((float)(~auVar32._8_4_ & auVar67._8_4_) * fVar94);
  uVar2 = ~uVar24 & (uint)((float)(~auVar32._4_4_ & auVar67._4_4_) * fVar93);
  uVar1 = ~uVar22 & (uint)((float)(~auVar32._0_4_ & auVar67._0_4_) * fVar88);
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar69,3);
    uVar9 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar9;
    auVar60._0_4_ = auVar62._0_4_ + (float)uVar1;
    auVar60._4_4_ = auVar62._4_4_ + (float)uVar2;
    auVar60._8_4_ = auVar62._8_4_ + (float)uVar3;
    auVar60._12_4_ = auVar62._12_4_ + (float)uVar4;
    auVar60._16_4_ = auVar62._16_4_ + (float)uVar5;
    auVar60._20_4_ = auVar62._20_4_ + (float)uVar6;
    auVar60._24_4_ = auVar62._24_4_ + (float)uVar7;
    auVar60._28_4_ = auVar62._28_4_ + (float)uVar8;
  }
  else {
    auVar60._0_4_ = auVar62._0_4_ + (float)uVar1;
    auVar60._4_4_ = auVar62._4_4_ + (float)uVar2;
    auVar60._8_4_ = auVar62._8_4_ + (float)uVar3;
    auVar60._12_4_ = auVar62._12_4_ + (float)uVar4;
    auVar60._16_4_ = auVar62._16_4_ + (float)uVar5;
    auVar60._20_4_ = auVar62._20_4_ + (float)uVar6;
    auVar60._24_4_ = auVar62._24_4_ + (float)uVar7;
    auVar60._28_4_ = auVar62._28_4_ + (float)uVar8;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar35) = auVar60._0_4_;
  }
  auVar79 = auVar60._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar33) = uVar1;
  }
  if ((uVar15 & 8) != 0) {
    uVar1 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar34) = uVar1;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar86) = auVar60._16_4_;
  }
  auVar79 = auVar60._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar69,1);
    uVar1 = vextractps_avx(auVar79,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar69,2);
    uVar1 = vextractps_avx(auVar79,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
  }
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar69,3);
    uVar1 = vextractps_avx(auVar79,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar1;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar35) = auVar29._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar1 = vextractps_avx(auVar29,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 4) != 0) {
    uVar1 = vextractps_avx(auVar29,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar33) = uVar1;
  }
  if ((uVar15 & 8) != 0) {
    uVar1 = vextractps_avx(auVar29,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar34) = uVar1;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar86) = auVar39._0_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar69,1);
    uVar1 = vextractps_avx(auVar39,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar69,2);
    uVar1 = vextractps_avx(auVar39,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar1;
  }
  if (cVar14 < '\0') {
    uVar1 = vextractps_avx(auVar39,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)auVar69._12_4_) = uVar1;
  }
  return;
}

