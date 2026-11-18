// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// BlendTransformAccumulate___un_3C_s_5B__c_unFTransform_5D__3E_un_3C_s_5B_unFTransform_5D__3E_CunfCuni_avx2 @ 140aa76c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendTransformAccumulate___un_3C_s_5B__c_unFTransform_5D__3E_un_3C_s_5B_unFTransform_5D__3E_CunfCuni_avx2
               (longlong param_1,longlong param_2,float param_3,uint param_4,
               undefined1 (*param_5) [32])

{
  double *pdVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [24];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [24];
  undefined1 auVar10 [24];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [32];
  longlong lVar25;
  double dVar26;
  undefined1 in_ZMM1 [64];
  undefined1 auVar27 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  
  auVar24 = ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000;
  auVar8 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar8 = auVar8 & ~*param_5;
  auVar27 = in_ZMM3._0_32_;
  if ((((((((SUB321(auVar8 >> 0x1f,0) & 1) == 0 && (SUB321(auVar8 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar8 >> 0x5f,0) & 1) == 0) && SUB321(auVar8 >> 0x7f,0) == '\0') &&
        (SUB321(auVar8 >> 0x9f,0) & 1) == 0) && SUB321(auVar8 >> 0xbf,0) == '\0') &&
      (SUB321(auVar8 >> 0xdf,0) & 1) == 0) && -1 < auVar8[0x1f]) {
    if (0 < (int)param_4) {
      dVar26 = (double)param_3;
      lVar25 = 0;
      auVar8 = vpcmpeqd_avx2(auVar27,auVar27);
      do {
        pdVar1 = (double *)(param_1 + lVar25);
        auVar30._0_8_ = dVar26 * *pdVar1;
        auVar30._8_8_ = dVar26 * pdVar1[1];
        auVar30._16_8_ = dVar26 * pdVar1[2];
        auVar30._24_8_ = dVar26 * pdVar1[3];
        pdVar1 = (double *)(param_2 + lVar25);
        dVar11 = pdVar1[1];
        dVar12 = pdVar1[2];
        dVar13 = pdVar1[3];
        auVar35._0_8_ = auVar30._0_8_ * *pdVar1;
        auVar35._8_8_ = auVar30._8_8_ * dVar11;
        auVar35._16_8_ = auVar30._16_8_ * dVar12;
        auVar35._24_8_ = auVar30._24_8_ * dVar13;
        auVar27 = vpermpd_avx2(auVar35,0x4e);
        auVar36._0_8_ = auVar35._0_8_ + auVar27._0_8_;
        auVar36._8_8_ = auVar35._8_8_ + auVar27._8_8_;
        auVar36._16_8_ = auVar35._16_8_ + auVar27._16_8_;
        auVar36._24_8_ = auVar35._24_8_ + auVar27._24_8_;
        auVar27 = vpermpd_avx2(auVar36,0x39);
        auVar37._0_8_ = auVar36._0_8_ + auVar27._0_8_;
        auVar37._8_8_ = auVar36._8_8_ + auVar27._8_8_;
        auVar37._16_8_ = auVar36._16_8_ + auVar27._16_8_;
        auVar37._24_8_ = auVar36._24_8_ + auVar27._24_8_;
        auVar27 = vcmppd_avx(ZEXT832(0) << 0x20,auVar37,2);
        auVar27 = vpshufb_avx2(auVar27,auVar24);
        auVar27 = vblendvps_avx(ZEXT832(0) << 0x20,auVar8,auVar27);
        auVar31 = vsubpd_avx(ZEXT832(0) << 0x20,auVar30);
        auVar39._0_4_ = ~auVar27._0_4_ & auVar31._0_4_;
        auVar39._4_4_ = ~auVar27._4_4_ & auVar31._4_4_;
        auVar39._8_4_ = ~auVar27._8_4_ & auVar31._8_4_;
        auVar39._12_4_ = ~auVar27._12_4_ & auVar31._12_4_;
        auVar39._16_4_ = ~auVar27._16_4_ & auVar31._16_4_;
        auVar39._20_4_ = ~auVar27._20_4_ & auVar31._20_4_;
        auVar39._24_4_ = ~auVar27._24_4_ & auVar31._24_4_;
        auVar39._28_4_ = ~auVar27._28_4_ & auVar31._28_4_;
        auVar31._0_8_ = (ulonglong)auVar30._0_8_ & auVar27._0_8_;
        auVar31._8_8_ = (ulonglong)auVar30._8_8_ & auVar27._8_8_;
        auVar31._16_8_ = (ulonglong)auVar30._16_8_ & auVar27._16_8_;
        auVar31._24_8_ = (ulonglong)auVar30._24_8_ & auVar27._24_8_;
        auVar31 = auVar31 | auVar39;
        pdVar2 = (double *)(param_1 + 0x20 + lVar25);
        dVar14 = *pdVar2;
        dVar15 = pdVar2[1];
        dVar16 = pdVar2[2];
        dVar17 = pdVar2[3];
        pdVar2 = (double *)(param_1 + 0x40 + lVar25);
        dVar18 = *pdVar2;
        dVar19 = pdVar2[1];
        dVar20 = pdVar2[2];
        dVar21 = pdVar2[3];
        pauVar3 = (undefined1 (*) [24])(param_2 + 0x20 + lVar25);
        dVar4 = *(double *)*pauVar3;
        dVar22 = *(double *)(*pauVar3 + 8);
        auVar9 = *pauVar3;
        dVar6 = *(double *)pauVar3[1];
        pauVar3 = (undefined1 (*) [24])(param_2 + 0x40 + lVar25);
        dVar5 = *(double *)*pauVar3;
        dVar23 = *(double *)(*pauVar3 + 8);
        auVar10 = *pauVar3;
        dVar7 = *(double *)pauVar3[1];
        pdVar2 = (double *)(param_2 + lVar25);
        *pdVar2 = *pdVar1 + auVar31._0_8_;
        pdVar2[1] = dVar11 + auVar31._8_8_;
        pdVar2[2] = dVar12 + auVar31._16_8_;
        pdVar2[3] = dVar13 + auVar31._24_8_;
        pdVar1 = (double *)(param_2 + 0x20 + lVar25);
        *pdVar1 = dVar26 * dVar14 + dVar4;
        pdVar1[1] = dVar26 * dVar15 + dVar22;
        pdVar1[2] = dVar26 * dVar16 + auVar9._16_8_;
        pdVar1[3] = dVar26 * dVar17 + dVar6;
        pdVar1 = (double *)(param_2 + 0x40 + lVar25);
        *pdVar1 = dVar26 * dVar18 + dVar5;
        pdVar1[1] = dVar26 * dVar19 + dVar23;
        pdVar1[2] = dVar26 * dVar20 + auVar10._16_8_;
        pdVar1[3] = dVar26 * dVar21 + dVar7;
        lVar25 = lVar25 + 0x60;
      } while ((ulonglong)param_4 * 0x60 != lVar25);
    }
  }
  else if (0 < (int)param_4) {
    dVar26 = (double)param_3;
    lVar25 = 0;
    auVar8 = vpcmpeqd_avx2(auVar27,auVar27);
    do {
      pdVar1 = (double *)(param_1 + lVar25);
      auVar28._0_8_ = dVar26 * *pdVar1;
      auVar28._8_8_ = dVar26 * pdVar1[1];
      auVar28._16_8_ = dVar26 * pdVar1[2];
      auVar28._24_8_ = dVar26 * pdVar1[3];
      pdVar1 = (double *)(param_2 + lVar25);
      dVar11 = pdVar1[1];
      dVar12 = pdVar1[2];
      dVar13 = pdVar1[3];
      auVar32._0_8_ = auVar28._0_8_ * *pdVar1;
      auVar32._8_8_ = auVar28._8_8_ * dVar11;
      auVar32._16_8_ = auVar28._16_8_ * dVar12;
      auVar32._24_8_ = auVar28._24_8_ * dVar13;
      auVar27 = vpermpd_avx2(auVar32,0x4e);
      auVar33._0_8_ = auVar32._0_8_ + auVar27._0_8_;
      auVar33._8_8_ = auVar32._8_8_ + auVar27._8_8_;
      auVar33._16_8_ = auVar32._16_8_ + auVar27._16_8_;
      auVar33._24_8_ = auVar32._24_8_ + auVar27._24_8_;
      auVar27 = vpermpd_avx2(auVar33,0x39);
      auVar34._0_8_ = auVar33._0_8_ + auVar27._0_8_;
      auVar34._8_8_ = auVar33._8_8_ + auVar27._8_8_;
      auVar34._16_8_ = auVar33._16_8_ + auVar27._16_8_;
      auVar34._24_8_ = auVar33._24_8_ + auVar27._24_8_;
      auVar27 = vcmppd_avx(ZEXT832(0) << 0x20,auVar34,2);
      auVar27 = vpshufb_avx2(auVar27,auVar24);
      auVar27 = vblendvps_avx(ZEXT832(0) << 0x20,auVar8,auVar27);
      auVar31 = vsubpd_avx(ZEXT832(0) << 0x20,auVar28);
      auVar38._0_4_ = ~auVar27._0_4_ & auVar31._0_4_;
      auVar38._4_4_ = ~auVar27._4_4_ & auVar31._4_4_;
      auVar38._8_4_ = ~auVar27._8_4_ & auVar31._8_4_;
      auVar38._12_4_ = ~auVar27._12_4_ & auVar31._12_4_;
      auVar38._16_4_ = ~auVar27._16_4_ & auVar31._16_4_;
      auVar38._20_4_ = ~auVar27._20_4_ & auVar31._20_4_;
      auVar38._24_4_ = ~auVar27._24_4_ & auVar31._24_4_;
      auVar38._28_4_ = ~auVar27._28_4_ & auVar31._28_4_;
      auVar29._0_8_ = (ulonglong)auVar28._0_8_ & auVar27._0_8_;
      auVar29._8_8_ = (ulonglong)auVar28._8_8_ & auVar27._8_8_;
      auVar29._16_8_ = (ulonglong)auVar28._16_8_ & auVar27._16_8_;
      auVar29._24_8_ = (ulonglong)auVar28._24_8_ & auVar27._24_8_;
      auVar29 = auVar29 | auVar38;
      pdVar2 = (double *)(param_1 + 0x20 + lVar25);
      dVar14 = *pdVar2;
      dVar15 = pdVar2[1];
      dVar16 = pdVar2[2];
      dVar17 = pdVar2[3];
      pdVar2 = (double *)(param_1 + 0x40 + lVar25);
      dVar18 = *pdVar2;
      dVar19 = pdVar2[1];
      dVar20 = pdVar2[2];
      dVar21 = pdVar2[3];
      pauVar3 = (undefined1 (*) [24])(param_2 + 0x20 + lVar25);
      dVar4 = *(double *)*pauVar3;
      dVar22 = *(double *)(*pauVar3 + 8);
      auVar9 = *pauVar3;
      dVar6 = *(double *)pauVar3[1];
      pauVar3 = (undefined1 (*) [24])(param_2 + 0x40 + lVar25);
      dVar5 = *(double *)*pauVar3;
      dVar23 = *(double *)(*pauVar3 + 8);
      auVar10 = *pauVar3;
      dVar7 = *(double *)pauVar3[1];
      pdVar2 = (double *)(param_2 + lVar25);
      *pdVar2 = *pdVar1 + auVar29._0_8_;
      pdVar2[1] = dVar11 + auVar29._8_8_;
      pdVar2[2] = dVar12 + auVar29._16_8_;
      pdVar2[3] = dVar13 + auVar29._24_8_;
      pdVar1 = (double *)(param_2 + 0x20 + lVar25);
      *pdVar1 = dVar26 * dVar14 + dVar4;
      pdVar1[1] = dVar26 * dVar15 + dVar22;
      pdVar1[2] = dVar26 * dVar16 + auVar9._16_8_;
      pdVar1[3] = dVar26 * dVar17 + dVar6;
      pdVar1 = (double *)(param_2 + 0x40 + lVar25);
      *pdVar1 = dVar26 * dVar18 + dVar5;
      pdVar1[1] = dVar26 * dVar19 + dVar23;
      pdVar1[2] = dVar26 * dVar20 + auVar10._16_8_;
      pdVar1[3] = dVar26 * dVar21 + dVar7;
      lVar25 = lVar25 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar25);
  }
  return;
}

// ConvertPoseToAdditive___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cuni_avx2 @ 140aa7880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToAdditive___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cuni_avx2
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [32])

{
  ulonglong *puVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [24];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auVar15 [16];
  ulonglong uVar13;
  double dVar33;
  undefined1 auVar23 [32];
  double dVar30;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar14;
  ulonglong uVar31;
  double dVar32;
  ulonglong uVar34;
  double dVar35;
  double dVar36;
  ulonglong uVar37;
  double dVar38;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  double dVar39;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar42 [16];
  undefined1 auVar44 [32];
  undefined1 auVar43 [16];
  undefined1 auVar45 [32];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar48;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  double dVar63;
  double dVar65;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  double dVar64;
  undefined1 in_ZMM5 [64];
  undefined1 auVar67 [16];
  double dVar66;
  double dVar76;
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  double dVar75;
  double dVar77;
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar84 [64];
  undefined1 auVar85 [16];
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 local_148 [32];
  undefined1 auVar21 [24];
  undefined1 auVar22 [24];
  undefined1 auVar24 [32];
  undefined1 auVar27 [32];
  undefined1 auVar54 [32];
  undefined1 auVar58 [32];
  undefined1 auVar61 [32];
  undefined1 auVar71 [32];
  
  uVar9 = __real_3914c4e977ba1f5c;
  uVar8 = __real_46c8a6e32246c99c;
  uVar7 = __real_7fffffffffffffff;
  uVar6 = __real_3e45798ee2308c3a;
  auVar60 = *param_4;
  auVar53 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar45 = auVar53 & ~auVar60;
  if ((((((((SUB321(auVar45 >> 0x1f,0) & 1) == 0 && (SUB321(auVar45 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar45 >> 0x5f,0) & 1) == 0) && SUB321(auVar45 >> 0x7f,0) == '\0') &&
        (SUB321(auVar45 >> 0x9f,0) & 1) == 0) && SUB321(auVar45 >> 0xbf,0) == '\0') &&
      (SUB321(auVar45 >> 0xdf,0) & 1) == 0) && -1 < auVar45[0x1f]) {
    if (0 < (int)param_3) {
      lVar11 = 0;
      local_148._8_8_ = __real_46c8a6e32246c99c;
      local_148._0_8_ = __real_46c8a6e32246c99c;
      local_148._16_8_ = __real_46c8a6e32246c99c;
      local_148._24_8_ = __real_46c8a6e32246c99c;
      auVar60 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar84 = ZEXT3264(auVar60);
      auVar15 = ZEXT816(0);
      do {
        auVar45 = in_ZMM2._0_32_;
        auVar85._8_8_ = 0;
        auVar85._0_8_ = *(ulonglong *)(param_2 + 0x40 + lVar11);
        auVar90._8_8_ = 0;
        auVar90._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar11);
        auVar92._8_8_ = 0;
        auVar92._0_8_ = *(ulonglong *)(param_2 + 0x50 + lVar11);
        auVar94._8_8_ = 0;
        auVar94._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar11);
        auVar60 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar11);
        pdVar2 = (double *)(param_2 + lVar11);
        auVar28._0_8_ =
             ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar2;
        auVar28._8_8_ = _UNK_150b543c8 * pdVar2[1];
        auVar28._16_8_ = _UNK_150b543d0 * pdVar2[2];
        auVar28._24_8_ = _UNK_150b543d8 * pdVar2[3];
        dVar30 = *(double *)(param_1 + 0x18 + lVar11);
        dVar33 = *(double *)(param_1 + lVar11);
        auVar79 = vpermpd_avx2(auVar28,0x1b);
        dVar36 = *(double *)(param_1 + 8 + lVar11);
        auVar80 = vpermpd_avx2(auVar28,0x4e);
        dVar39 = *(double *)(param_1 + 0x10 + lVar11);
        auVar29 = vshufpd_avx(auVar28,auVar28,5);
        auVar61 = vsubpd_avx(*(undefined1 (*) [32])(param_1 + 0x20 + lVar11),
                             *(undefined1 (*) [32])(param_2 + 0x20 + lVar11));
        dVar86 = auVar29._0_8_ * dVar39 *
                 ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                 auVar80._0_8_ * dVar36 *
                 ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                 auVar28._0_8_ * dVar30 +
                 dVar33 * auVar79._0_8_ *
                 ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        dVar87 = auVar29._8_8_ * dVar39 * _UNK_150b54428 +
                 auVar80._8_8_ * dVar36 * _UNK_150b54408 +
                 auVar28._8_8_ * dVar30 + dVar33 * auVar79._8_8_ * _UNK_150b543e8;
        dVar88 = auVar29._16_8_ * dVar39 * _UNK_150b54430 +
                 auVar80._16_8_ * dVar36 * _UNK_150b54410 +
                 auVar28._16_8_ * dVar30 + dVar33 * auVar79._16_8_ * _UNK_150b543f0;
        dVar30 = auVar29._24_8_ * dVar39 * _UNK_150b54438 +
                 auVar80._24_8_ * dVar36 * _UNK_150b54418 +
                 auVar28._24_8_ * dVar30 + dVar33 * auVar79._24_8_ * _UNK_150b543f8;
        *(undefined1 (*) [32])(param_1 + 0x20 + lVar11) = auVar61;
        auVar29 = vcmppd_avx(auVar60,local_148,2);
        auVar61 = vpackssdw_avx2(auVar29,ZEXT1632(auVar15));
        auVar29._8_8_ = uVar9;
        auVar29._0_8_ = uVar9;
        auVar29._16_8_ = uVar9;
        auVar29._24_8_ = uVar9;
        auVar29 = vcmppd_avx(auVar29,auVar60,2);
        auVar79 = vpackssdw_avx2(auVar29,ZEXT1632(auVar15));
        auVar29 = auVar79 & auVar61;
        dVar33 = auVar60._0_8_;
        dVar36 = auVar60._8_8_;
        dVar39 = auVar60._16_8_;
        dVar89 = auVar60._24_8_;
        if ((((((((SUB321(auVar29 >> 0x1f,0) & 1) == 0 && (SUB321(auVar29 >> 0x3f,0) & 1) == 0) &&
                (SUB321(auVar29 >> 0x5f,0) & 1) == 0) && SUB321(auVar29 >> 0x7f,0) == '\0') &&
              (SUB321(auVar29 >> 0x9f,0) & 1) == 0) && SUB321(auVar29 >> 0xbf,0) == '\0') &&
            (SUB321(auVar29 >> 0xdf,0) & 1) == 0) && -1 < auVar29[0x1f]) {
          auVar29 = ZEXT1232(ZEXT812(0)) << 0x20;
LAB_140aa7d14:
          auVar29 = auVar84._0_32_ ^ auVar29;
          auVar72._8_8_ = __real_7fe0000000000000;
          auVar72._0_8_ = __real_7fe0000000000000;
          auVar72._16_8_ = __real_7fe0000000000000;
          auVar72._24_8_ = __real_7fe0000000000000;
          auVar60 = vpand_avx2(auVar29,auVar72);
          auVar73._0_8_ = (ulonglong)dVar33 & __real_7fe0000000000000;
          auVar73._8_8_ = (ulonglong)dVar36 & __real_7fe0000000000000;
          auVar73._16_8_ = (ulonglong)dVar39 & __real_7fe0000000000000;
          auVar73._24_8_ = (ulonglong)dVar89 & __real_7fe0000000000000;
          auVar47._8_8_ = __real_7fcfffffffffffff;
          auVar47._0_8_ = __real_7fcfffffffffffff;
          auVar47._16_8_ = __real_7fcfffffffffffff;
          auVar47._24_8_ = __real_7fcfffffffffffff;
          auVar79 = vpsubq_avx2(auVar47,auVar73);
          auVar80 = vpsubq_avx2(auVar47,auVar60);
          auVar82._0_8_ = dVar33 * auVar79._0_8_;
          auVar82._8_8_ = dVar36 * auVar79._8_8_;
          auVar82._16_8_ = dVar39 * auVar79._16_8_;
          auVar82._24_8_ = dVar89 * auVar79._24_8_;
          auVar18 = vcvtpd2ps_avx(auVar82);
          dVar38 = auVar29._0_8_;
          auVar56._0_8_ = dVar38 * auVar80._0_8_;
          dVar14 = auVar29._8_8_;
          auVar56._8_8_ = dVar14 * auVar80._8_8_;
          dVar32 = auVar29._16_8_;
          auVar56._16_8_ = dVar32 * auVar80._16_8_;
          dVar35 = auVar29._24_8_;
          auVar56._24_8_ = dVar35 * auVar80._24_8_;
          auVar19 = vcvtpd2ps_avx(auVar56);
          auVar57._16_16_ = auVar19;
          auVar57._0_16_ = auVar18;
          auVar60 = vrcpps_avx(auVar57);
          auVar50._0_4_ = auVar60._0_4_ * (-(auVar60._0_4_ * auVar18._0_4_) + __real_40000000);
          auVar50._4_4_ = auVar60._4_4_ * (-(auVar60._4_4_ * auVar18._4_4_) + __real_40000000);
          auVar50._8_4_ = auVar60._8_4_ * (-(auVar60._8_4_ * auVar18._8_4_) + __real_40000000);
          auVar50._12_4_ = auVar60._12_4_ * (-(auVar60._12_4_ * auVar18._12_4_) + __real_40000000);
          auVar58._16_4_ = auVar60._16_4_ * (-(auVar60._16_4_ * auVar19._0_4_) + __real_40000000);
          auVar58._0_16_ = auVar50;
          auVar58._20_4_ = auVar60._20_4_ * (-(auVar60._20_4_ * auVar19._4_4_) + __real_40000000);
          auVar58._24_4_ = auVar60._24_4_ * (-(auVar60._24_4_ * auVar19._8_4_) + __real_40000000);
          auVar58._28_4_ = auVar60._28_4_ * (-(auVar60._28_4_ * auVar19._12_4_) + __real_40000000);
          auVar60 = vcvtps2pd_avx(auVar50);
          auVar61 = vcvtps2pd_avx(auVar58._16_16_);
          dVar48 = auVar80._0_8_ * auVar61._0_8_;
          dVar63 = auVar80._8_8_ * auVar61._8_8_;
          dVar64 = auVar80._16_8_ * auVar61._16_8_;
          dVar65 = auVar80._24_8_ * auVar61._24_8_;
          dVar66 = auVar60._0_8_ * auVar79._0_8_;
          dVar75 = auVar60._8_8_ * auVar79._8_8_;
          dVar76 = auVar60._16_8_ * auVar79._16_8_;
          dVar77 = auVar60._24_8_ * auVar79._24_8_;
          dVar48 = (-(dVar38 * dVar48) + __real_4000000000000000) * dVar48;
          dVar63 = (-(dVar14 * dVar63) + __real_4000000000000000) * dVar63;
          dVar64 = (-(dVar32 * dVar64) + __real_4000000000000000) * dVar64;
          dVar65 = (-(dVar35 * dVar65) + __real_4000000000000000) * dVar65;
          dVar66 = (-(dVar33 * dVar66) + __real_4000000000000000) * dVar66;
          dVar75 = (-(dVar36 * dVar75) + __real_4000000000000000) * dVar75;
          dVar76 = (-(dVar39 * dVar76) + __real_4000000000000000) * dVar76;
          dVar77 = (-(dVar89 * dVar77) + __real_4000000000000000) * dVar77;
          auVar59._0_8_ = dVar66 * (-(dVar66 * dVar33) + __real_4000000000000000);
          auVar59._8_8_ = dVar75 * (-(dVar75 * dVar36) + __real_4000000000000000);
          auVar59._16_8_ = dVar76 * (-(dVar76 * dVar39) + __real_4000000000000000);
          auVar59._24_8_ = dVar77 * (-(dVar77 * dVar89) + __real_4000000000000000);
          auVar60 = vpermps_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                 ,auVar29);
          auVar53 = vblendvps_avx(auVar53,auVar59,auVar60);
          auVar79._0_8_ = dVar48 * (-(dVar38 * dVar48) + __real_4000000000000000);
          auVar79._8_8_ = dVar63 * (-(dVar14 * dVar63) + __real_4000000000000000);
          auVar79._16_8_ = dVar64 * (-(dVar32 * dVar64) + __real_4000000000000000);
          auVar79._24_8_ = dVar65 * (-(dVar35 * dVar65) + __real_4000000000000000);
          auVar60 = vpermps_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                 ,auVar29);
          auVar45 = vblendvps_avx(auVar45,auVar79,auVar60);
        }
        else {
          auVar18 = vpackssdw_avx(auVar61._0_16_,auVar61._16_16_);
          auVar19 = vpackssdw_avx(auVar79._0_16_,auVar79._16_16_);
          auVar18 = vpand_avx(auVar18,auVar19);
          auVar18 = vpshufd_avx(auVar18,0xd8);
          auVar80._0_4_ = auVar79._0_4_ & auVar61._0_4_;
          auVar80._4_4_ = auVar79._4_4_ & auVar61._4_4_;
          auVar80._8_4_ = auVar79._8_4_ & auVar61._8_4_;
          auVar80._12_4_ = auVar79._12_4_ & auVar61._12_4_;
          auVar80._16_4_ = auVar79._16_4_ & auVar61._16_4_;
          auVar80._20_4_ = auVar79._20_4_ & auVar61._20_4_;
          auVar80._24_4_ = auVar79._24_4_ & auVar61._24_4_;
          auVar80._28_4_ = auVar79._28_4_ & auVar61._28_4_;
          auVar29 = vpermpd_avx2(auVar80,0xd8);
          uVar10 = vmovmskps_avx(auVar29);
          auVar29 = vpmovzxwd_avx2(auVar18);
          auVar79 = vpslld_avx2(auVar29,0x1f);
          auVar29 = vpsrad_avx2(auVar79,0x1f);
          auVar18 = vcvtpd2ps_avx(auVar60);
          auVar19 = vcvtpd2ps_avx(auVar29);
          auVar60._16_16_ = auVar19;
          auVar60._0_16_ = auVar18;
          auVar60 = vrcpps_avx(auVar60);
          auVar51._0_4_ = (-(auVar60._0_4_ * auVar18._0_4_) + __real_40000000) * auVar60._0_4_;
          auVar51._4_4_ = (-(auVar60._4_4_ * auVar18._4_4_) + __real_40000000) * auVar60._4_4_;
          auVar51._8_4_ = (-(auVar60._8_4_ * auVar18._8_4_) + __real_40000000) * auVar60._8_4_;
          auVar51._12_4_ = (-(auVar60._12_4_ * auVar18._12_4_) + __real_40000000) * auVar60._12_4_;
          auVar61._16_4_ = (-(auVar60._16_4_ * auVar19._0_4_) + __real_40000000) * auVar60._16_4_;
          auVar61._0_16_ = auVar51;
          auVar61._20_4_ = (-(auVar60._20_4_ * auVar19._4_4_) + __real_40000000) * auVar60._20_4_;
          auVar61._24_4_ = (-(auVar60._24_4_ * auVar19._8_4_) + __real_40000000) * auVar60._24_4_;
          auVar61._28_4_ = (-(auVar60._28_4_ * auVar19._12_4_) + __real_40000000) * auVar60._28_4_;
          auVar60 = vcvtps2pd_avx(auVar61._16_16_);
          auVar61 = vcvtps2pd_avx(auVar51);
          dVar48 = auVar60._0_8_ * (-(auVar29._0_8_ * auVar60._0_8_) + __real_4000000000000000);
          dVar63 = auVar60._8_8_ * (-(auVar29._8_8_ * auVar60._8_8_) + __real_4000000000000000);
          dVar64 = auVar60._16_8_ * (-(auVar29._16_8_ * auVar60._16_8_) + __real_4000000000000000);
          dVar65 = auVar60._24_8_ * (-(auVar29._24_8_ * auVar60._24_8_) + __real_4000000000000000);
          auVar60 = vpcmpeqd_avx2(auVar60,auVar60);
          auVar84 = ZEXT3264(auVar60);
          dVar38 = (-(dVar33 * auVar61._0_8_) + __real_4000000000000000) * auVar61._0_8_;
          dVar14 = (-(dVar36 * auVar61._8_8_) + __real_4000000000000000) * auVar61._8_8_;
          dVar32 = (-(dVar39 * auVar61._16_8_) + __real_4000000000000000) * auVar61._16_8_;
          dVar35 = (-(dVar89 * auVar61._24_8_) + __real_4000000000000000) * auVar61._24_8_;
          auVar74._0_8_ = (-(auVar29._0_8_ * dVar48) + __real_4000000000000000) * dVar48;
          auVar74._8_8_ = (-(auVar29._8_8_ * dVar63) + __real_4000000000000000) * dVar63;
          auVar74._16_8_ = (-(auVar29._16_8_ * dVar64) + __real_4000000000000000) * dVar64;
          auVar74._24_8_ = (-(auVar29._24_8_ * dVar65) + __real_4000000000000000) * dVar65;
          auVar62._0_8_ = (-(dVar33 * dVar38) + __real_4000000000000000) * dVar38;
          auVar62._8_8_ = (-(dVar36 * dVar14) + __real_4000000000000000) * dVar14;
          auVar62._16_8_ = (-(dVar39 * dVar32) + __real_4000000000000000) * dVar32;
          auVar62._24_8_ = (-(dVar89 * dVar35) + __real_4000000000000000) * dVar35;
          auVar60 = vpmovsxdq_avx2(auVar79._0_16_);
          auVar53 = vblendvps_avx(auVar53,auVar62,auVar60);
          auVar60 = vpermps_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                 ,auVar29);
          auVar45 = vblendvps_avx(auVar45,auVar74,auVar60);
          if ((char)uVar10 != -1) goto LAB_140aa7d14;
        }
        in_ZMM2 = ZEXT3264(auVar45);
        auVar92 = vunpcklpd_avx(auVar92,auVar94);
        auVar85 = vunpcklpd_avx(auVar85,auVar90);
        dVar33 = auVar53._0_8_;
        dVar36 = auVar53._8_8_;
        dVar39 = auVar53._16_8_;
        dVar89 = auVar53._24_8_;
        dVar38 = auVar85._0_8_;
        dVar14 = -(dVar38 * dVar33 * dVar33) + dVar33 + dVar33;
        dVar33 = auVar85._8_8_;
        dVar32 = -(dVar33 * dVar36 * dVar36) + dVar36 + dVar36;
        dVar36 = auVar92._0_8_;
        dVar35 = -(dVar36 * dVar39 * dVar39) + dVar39 + dVar39;
        dVar39 = auVar92._8_8_;
        dVar48 = -(dVar39 * dVar89 * dVar89) + dVar89 + dVar89;
        dVar89 = -(dVar38 * dVar14 * dVar14) + dVar14 + dVar14;
        dVar14 = -(dVar33 * dVar32 * dVar32) + dVar32 + dVar32;
        dVar32 = -(dVar36 * dVar35 * dVar35) + dVar35 + dVar35;
        dVar35 = -(dVar39 * dVar48 * dVar48) + dVar48 + dVar48;
        auVar26._0_8_ = (ulonglong)dVar38 & uVar7;
        auVar26._8_8_ = (ulonglong)dVar33 & uVar7;
        auVar26._16_8_ = (ulonglong)dVar36 & uVar7;
        auVar26._24_8_ = (ulonglong)dVar39 & uVar7;
        auVar45._8_8_ = uVar6;
        auVar45._0_8_ = uVar6;
        auVar45._16_8_ = uVar6;
        auVar45._24_8_ = uVar6;
        auVar60 = vcmppd_avx(auVar26,auVar45,2);
        auVar60 = vpshufb_avx2(auVar60,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar60 = vblendvps_avx(ZEXT1632(auVar15),auVar84._0_32_,auVar60);
        auVar18._0_8_ =
             (double)CONCAT44(~auVar60._4_4_ & (uint)((ulonglong)dVar89 >> 0x20),
                              ~auVar60._0_4_ & SUB84(dVar89,0));
        auVar18._8_4_ = ~auVar60._8_4_ & SUB84(dVar14,0);
        auVar18._12_4_ = ~auVar60._12_4_ & (uint)((ulonglong)dVar14 >> 0x20);
        auVar22._16_4_ = ~auVar60._16_4_ & SUB84(dVar32,0);
        auVar22._0_16_ = auVar18;
        auVar22._20_4_ = ~auVar60._20_4_ & (uint)((ulonglong)dVar32 >> 0x20);
        auVar27._24_4_ = ~auVar60._24_4_ & SUB84(dVar35,0);
        auVar27._0_24_ = auVar22;
        auVar27._28_4_ = ~auVar60._28_4_ & (uint)((ulonglong)dVar35 >> 0x20);
        pauVar3 = (undefined1 (*) [24])(param_1 + 0x40 + lVar11);
        dVar33 = auVar18._8_8_ * *(double *)(*pauVar3 + 8) + _UNK_151c6afc8;
        dVar36 = auVar22._16_8_ * SUB248(*pauVar3,0x10) + _UNK_151c6afd0;
        dVar39 = auVar27._24_8_ * *(double *)pauVar3[1] + _UNK_151c6afd8;
        pdVar2 = (double *)(param_1 + 0x40 + lVar11);
        *pdVar2 = auVar18._0_8_ * *(double *)*pauVar3 +
                  ___ymm_8000000000000000bff0000000000000bff0000000000000bff0000000000000;
        pdVar2[1] = dVar33;
        pdVar2[2] = dVar36;
        pdVar2[3] = dVar39;
        auVar19._0_8_ = dVar86 * dVar86 + dVar88 * dVar88;
        auVar19._8_8_ = dVar87 * dVar87 + dVar30 * dVar30;
        auVar85 = vshufpd_avx(auVar19,auVar19,1);
        dVar33 = auVar19._0_8_ + auVar85._0_8_;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = dVar33;
        dVar33 = __real_3ff0000000000000 / SQRT(dVar33);
        auVar46._8_8_ = 0;
        auVar46._0_8_ = __real_3e45798ee2308c3a;
        auVar85 = vcmpsd_avx(auVar46,auVar20,6);
        uVar13 = ~auVar85._0_8_ & __real_ffffffffffffffff;
        uVar31 = ~uVar13 & _UNK_150b54548;
        uVar34 = ~uVar13 & _UNK_150b54550;
        uVar37 = ~uVar13 & _UNK_150b54558;
        puVar1 = (ulonglong *)(param_1 + lVar11);
        *puVar1 = (ulonglong)(dVar86 * dVar33) & uVar13 |
                  ~uVar13 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        puVar1[1] = (ulonglong)(dVar87 * dVar33) & uVar13 | uVar31;
        puVar1[2] = (ulonglong)(dVar88 * dVar33) & uVar13 | uVar34;
        puVar1[3] = (ulonglong)(dVar30 * dVar33) & uVar13 | uVar37;
        lVar11 = lVar11 + 0x60;
      } while ((ulonglong)param_3 * 0x60 != lVar11);
    }
  }
  else if (0 < (int)param_3) {
    uVar10 = vmovmskps_avx(auVar60);
    lVar11 = 0;
    auVar53 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
    do {
      auVar61 = in_ZMM4._0_32_;
      auVar29 = in_ZMM3._0_32_;
      auVar91._8_8_ = 0;
      auVar91._0_8_ = *(ulonglong *)(param_2 + 0x40 + lVar11);
      auVar93._8_8_ = 0;
      auVar93._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar11);
      auVar81._8_8_ = 0;
      auVar81._0_8_ = *(ulonglong *)(param_2 + 0x50 + lVar11);
      auVar45 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar11);
      pdVar2 = (double *)(param_2 + lVar11);
      auVar44._0_8_ =
           ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar2;
      auVar44._8_8_ = _UNK_150b543c8 * pdVar2[1];
      auVar44._16_8_ = _UNK_150b543d0 * pdVar2[2];
      auVar44._24_8_ = _UNK_150b543d8 * pdVar2[3];
      dVar30 = *(double *)(param_1 + 0x18 + lVar11);
      dVar33 = *(double *)(param_1 + lVar11);
      auVar28 = vpermpd_avx2(auVar44,0x1b);
      dVar36 = *(double *)(param_1 + 8 + lVar11);
      auVar62 = vpermpd_avx2(auVar44,0x4e);
      dVar39 = *(double *)(param_1 + 0x10 + lVar11);
      auVar79 = vshufpd_avx(auVar44,auVar44,5);
      auVar80 = vsubpd_avx(*(undefined1 (*) [32])(param_1 + 0x20 + lVar11),
                           *(undefined1 (*) [32])(param_2 + 0x20 + lVar11));
      dVar86 = dVar39 * auVar79._0_8_ *
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
               auVar62._0_8_ * dVar36 *
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
               auVar44._0_8_ * dVar30 +
               auVar28._0_8_ * dVar33 *
               ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
      dVar87 = dVar39 * auVar79._8_8_ * _UNK_150b54428 +
               auVar62._8_8_ * dVar36 * _UNK_150b54408 +
               auVar44._8_8_ * dVar30 + auVar28._8_8_ * dVar33 * _UNK_150b543e8;
      dVar88 = dVar39 * auVar79._16_8_ * _UNK_150b54430 +
               auVar62._16_8_ * dVar36 * _UNK_150b54410 +
               auVar44._16_8_ * dVar30 + auVar28._16_8_ * dVar33 * _UNK_150b543f0;
      dVar89 = dVar39 * auVar79._24_8_ * _UNK_150b54438 +
               auVar62._24_8_ * dVar36 * _UNK_150b54418 +
               auVar44._24_8_ * dVar30 + auVar28._24_8_ * dVar33 * _UNK_150b543f8;
      *(undefined1 (*) [32])(param_1 + 0x20 + lVar11) = auVar80;
      auVar4._8_8_ = uVar8;
      auVar4._0_8_ = uVar8;
      auVar4._16_8_ = uVar8;
      auVar4._24_8_ = uVar8;
      auVar79 = vcmppd_avx(auVar45,auVar4,2);
      auVar28 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar79 = vpackssdw_avx2(auVar79,auVar28);
      auVar15 = vpackssdw_avx(auVar79._0_16_,auVar79._16_16_);
      auVar25._8_8_ = (double)uVar9;
      auVar25._0_8_ = (double)uVar9;
      auVar25._16_8_ = (double)uVar9;
      auVar25._24_8_ = (double)uVar9;
      auVar79 = vcmppd_avx(auVar25,auVar45,2);
      auVar79 = vpackssdw_avx2(auVar79,auVar28);
      auVar85 = vpackssdw_avx(auVar79._0_16_,auVar79._16_16_);
      auVar43._8_8_ = 0;
      auVar43._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar11);
      auVar15 = vpand_avx(auVar85,auVar15);
      auVar15 = vpshufd_avx(auVar15,0xd8);
      auVar79 = vpmovzxwd_avx2(auVar15);
      auVar79 = vpslld_avx2(auVar79,0x1f);
      auVar80 = vpsrad_avx2(auVar79,0x1f);
      auVar79 = vpand_avx2(auVar80,auVar60);
      iVar12 = vmovmskps_avx(auVar79);
      dVar30 = auVar45._0_8_;
      dVar33 = auVar45._8_8_;
      dVar36 = auVar45._16_8_;
      dVar39 = auVar45._24_8_;
      if (iVar12 == 0) {
        auVar79 = ZEXT832(0) << 0x20;
LAB_140aa7975:
        dVar38 = auVar25._0_8_;
        auVar52._0_8_ = (ulonglong)dVar38 & __real_7fe0000000000000;
        dVar14 = auVar25._8_8_;
        auVar52._8_8_ = (ulonglong)dVar14 & __real_7fe0000000000000;
        dVar32 = auVar25._16_8_;
        auVar52._16_8_ = (ulonglong)dVar32 & __real_7fe0000000000000;
        dVar35 = auVar25._24_8_;
        auVar52._24_8_ = (ulonglong)dVar35 & __real_7fe0000000000000;
        auVar78._0_8_ = (ulonglong)dVar30 & __real_7fe0000000000000;
        auVar78._8_8_ = (ulonglong)dVar33 & __real_7fe0000000000000;
        auVar78._16_8_ = (ulonglong)dVar36 & __real_7fe0000000000000;
        auVar78._24_8_ = (ulonglong)dVar39 & __real_7fe0000000000000;
        auVar68._8_8_ = __real_7fcfffffffffffff;
        auVar68._0_8_ = __real_7fcfffffffffffff;
        auVar68._16_8_ = __real_7fcfffffffffffff;
        auVar68._24_8_ = __real_7fcfffffffffffff;
        auVar62 = vpsubq_avx2(auVar68,auVar78);
        auVar74 = vpsubq_avx2(auVar68,auVar52);
        auVar69._0_8_ = dVar30 * auVar62._0_8_;
        auVar69._8_8_ = dVar33 * auVar62._8_8_;
        auVar69._16_8_ = dVar36 * auVar62._16_8_;
        auVar69._24_8_ = dVar39 * auVar62._24_8_;
        auVar15 = vcvtpd2ps_avx(auVar69);
        auVar83._0_8_ = dVar38 * auVar74._0_8_;
        auVar83._8_8_ = dVar14 * auVar74._8_8_;
        auVar83._16_8_ = dVar32 * auVar74._16_8_;
        auVar83._24_8_ = dVar35 * auVar74._24_8_;
        auVar85 = vcvtpd2ps_avx(auVar83);
        auVar70._16_16_ = auVar85;
        auVar70._0_16_ = auVar15;
        auVar45 = vrcpps_avx(auVar70);
        auVar67._0_4_ = auVar45._0_4_ * (-(auVar45._0_4_ * auVar15._0_4_) + __real_40000000);
        auVar67._4_4_ = auVar45._4_4_ * (-(auVar45._4_4_ * auVar15._4_4_) + __real_40000000);
        auVar67._8_4_ = auVar45._8_4_ * (-(auVar45._8_4_ * auVar15._8_4_) + __real_40000000);
        auVar67._12_4_ = auVar45._12_4_ * (-(auVar45._12_4_ * auVar15._12_4_) + __real_40000000);
        auVar71._16_4_ = auVar45._16_4_ * (-(auVar45._16_4_ * auVar85._0_4_) + __real_40000000);
        auVar71._0_16_ = auVar67;
        auVar71._20_4_ = auVar45._20_4_ * (-(auVar45._20_4_ * auVar85._4_4_) + __real_40000000);
        auVar71._24_4_ = auVar45._24_4_ * (-(auVar45._24_4_ * auVar85._8_4_) + __real_40000000);
        auVar71._28_4_ = auVar45._28_4_ * (-(auVar45._28_4_ * auVar85._12_4_) + __real_40000000);
        auVar45 = vcvtps2pd_avx(auVar67);
        auVar80 = vcvtps2pd_avx(auVar71._16_16_);
        dVar48 = auVar74._0_8_ * auVar80._0_8_;
        dVar63 = auVar74._8_8_ * auVar80._8_8_;
        dVar64 = auVar74._16_8_ * auVar80._16_8_;
        dVar65 = auVar74._24_8_ * auVar80._24_8_;
        dVar66 = auVar45._0_8_ * auVar62._0_8_;
        dVar75 = auVar45._8_8_ * auVar62._8_8_;
        dVar76 = auVar45._16_8_ * auVar62._16_8_;
        dVar77 = auVar45._24_8_ * auVar62._24_8_;
        dVar48 = (-(dVar38 * dVar48) + __real_4000000000000000) * dVar48;
        dVar63 = (-(dVar14 * dVar63) + __real_4000000000000000) * dVar63;
        dVar64 = (-(dVar32 * dVar64) + __real_4000000000000000) * dVar64;
        dVar65 = (-(dVar35 * dVar65) + __real_4000000000000000) * dVar65;
        dVar66 = (-(dVar30 * dVar66) + __real_4000000000000000) * dVar66;
        dVar75 = (-(dVar33 * dVar75) + __real_4000000000000000) * dVar75;
        dVar76 = (-(dVar36 * dVar76) + __real_4000000000000000) * dVar76;
        dVar77 = (-(dVar39 * dVar77) + __real_4000000000000000) * dVar77;
        auVar40._0_8_ = dVar66 * (-(dVar66 * dVar30) + __real_4000000000000000);
        auVar40._8_8_ = dVar75 * (-(dVar75 * dVar33) + __real_4000000000000000);
        auVar40._16_8_ = dVar76 * (-(dVar76 * dVar36) + __real_4000000000000000);
        auVar40._24_8_ = dVar77 * (-(dVar77 * dVar39) + __real_4000000000000000);
        auVar45 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                              ,auVar79 ^ auVar53);
        auVar29 = vblendvps_avx(auVar29,auVar40,auVar45);
        auVar41._0_8_ = dVar48 * (-(dVar38 * dVar48) + __real_4000000000000000);
        auVar41._8_8_ = dVar63 * (-(dVar14 * dVar63) + __real_4000000000000000);
        auVar41._16_8_ = dVar64 * (-(dVar32 * dVar64) + __real_4000000000000000);
        auVar41._24_8_ = dVar65 * (-(dVar35 * dVar65) + __real_4000000000000000);
        auVar53 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                              ,auVar79 ^ auVar53);
        auVar61 = vblendvps_avx(auVar61,auVar41,auVar53);
        auVar53 = vpcmpeqd_avx2(auVar53,auVar53);
      }
      else {
        auVar15 = vcvtpd2ps_avx(auVar45);
        auVar85 = vcvtpd2ps_avx(auVar25);
        auVar53._16_16_ = auVar85;
        auVar53._0_16_ = auVar15;
        auVar53 = vrcpps_avx(auVar53);
        auVar49._0_4_ = (-(auVar53._0_4_ * auVar15._0_4_) + __real_40000000) * auVar53._0_4_;
        auVar49._4_4_ = (-(auVar53._4_4_ * auVar15._4_4_) + __real_40000000) * auVar53._4_4_;
        auVar49._8_4_ = (-(auVar53._8_4_ * auVar15._8_4_) + __real_40000000) * auVar53._8_4_;
        auVar49._12_4_ = (-(auVar53._12_4_ * auVar15._12_4_) + __real_40000000) * auVar53._12_4_;
        auVar54._16_4_ = (-(auVar53._16_4_ * auVar85._0_4_) + __real_40000000) * auVar53._16_4_;
        auVar54._0_16_ = auVar49;
        auVar54._20_4_ = (-(auVar53._20_4_ * auVar85._4_4_) + __real_40000000) * auVar53._20_4_;
        auVar54._24_4_ = (-(auVar53._24_4_ * auVar85._8_4_) + __real_40000000) * auVar53._24_4_;
        auVar54._28_4_ = (-(auVar53._28_4_ * auVar85._12_4_) + __real_40000000) * auVar53._28_4_;
        auVar53 = vcvtps2pd_avx(auVar54._16_16_);
        auVar45 = vcvtps2pd_avx(auVar49);
        dVar14 = auVar53._0_8_;
        dVar32 = auVar53._8_8_;
        dVar35 = auVar53._16_8_;
        dVar38 = auVar53._24_8_;
        dVar14 = (-(dVar14 * dVar14) + __real_4000000000000000) * dVar14;
        dVar32 = (-(dVar32 * dVar32) + __real_4000000000000000) * dVar32;
        dVar35 = (-(dVar35 * dVar35) + __real_4000000000000000) * dVar35;
        dVar38 = (-(dVar38 * dVar38) + __real_4000000000000000) * dVar38;
        dVar48 = (-(dVar30 * auVar45._0_8_) + __real_4000000000000000) * auVar45._0_8_;
        dVar63 = (-(dVar33 * auVar45._8_8_) + __real_4000000000000000) * auVar45._8_8_;
        dVar64 = (-(dVar36 * auVar45._16_8_) + __real_4000000000000000) * auVar45._16_8_;
        dVar65 = (-(dVar39 * auVar45._24_8_) + __real_4000000000000000) * auVar45._24_8_;
        auVar25._0_8_ = (-(dVar14 * dVar14) + __real_4000000000000000) * dVar14;
        auVar25._8_8_ = (-(dVar32 * dVar32) + __real_4000000000000000) * dVar32;
        auVar25._16_8_ = (-(dVar35 * dVar35) + __real_4000000000000000) * dVar35;
        auVar25._24_8_ = (-(dVar38 * dVar38) + __real_4000000000000000) * dVar38;
        auVar55._0_8_ = dVar48 * (-(dVar30 * dVar48) + __real_4000000000000000);
        auVar55._8_8_ = dVar63 * (-(dVar33 * dVar63) + __real_4000000000000000);
        auVar55._16_8_ = dVar64 * (-(dVar36 * dVar64) + __real_4000000000000000);
        auVar55._24_8_ = dVar65 * (-(dVar39 * dVar65) + __real_4000000000000000);
        auVar53 = vpmovsxdq_avx2(auVar80._0_16_);
        auVar29 = vblendvps_avx(auVar29,auVar55,auVar53);
        auVar53 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                              ,auVar80);
        auVar61 = vblendvps_avx(auVar61,auVar25,auVar53);
        auVar53 = vpcmpeqd_avx2(auVar53,auVar53);
        if ((char)uVar10 != (char)iVar12) goto LAB_140aa7975;
      }
      in_ZMM4 = ZEXT3264(auVar61);
      in_ZMM3 = ZEXT3264(auVar29);
      auVar15 = vunpcklpd_avx(auVar81,auVar43);
      auVar85 = vunpcklpd_avx(auVar91,auVar93);
      dVar30 = auVar29._0_8_;
      dVar33 = auVar29._8_8_;
      dVar36 = auVar29._16_8_;
      dVar39 = auVar29._24_8_;
      dVar38 = auVar85._0_8_;
      dVar14 = -(dVar38 * dVar30 * dVar30) + dVar30 + dVar30;
      dVar30 = auVar85._8_8_;
      dVar32 = -(dVar30 * dVar33 * dVar33) + dVar33 + dVar33;
      dVar33 = auVar15._0_8_;
      dVar35 = -(dVar33 * dVar36 * dVar36) + dVar36 + dVar36;
      dVar36 = auVar15._8_8_;
      dVar48 = -(dVar36 * dVar39 * dVar39) + dVar39 + dVar39;
      dVar39 = -(dVar38 * dVar14 * dVar14) + dVar14 + dVar14;
      dVar14 = -(dVar30 * dVar32 * dVar32) + dVar32 + dVar32;
      dVar32 = -(dVar33 * dVar35 * dVar35) + dVar35 + dVar35;
      dVar35 = -(dVar36 * dVar48 * dVar48) + dVar48 + dVar48;
      auVar23._0_8_ = (ulonglong)dVar38 & uVar7;
      auVar23._8_8_ = (ulonglong)dVar30 & uVar7;
      auVar23._16_8_ = (ulonglong)dVar33 & uVar7;
      auVar23._24_8_ = (ulonglong)dVar36 & uVar7;
      auVar5._8_8_ = uVar6;
      auVar5._0_8_ = uVar6;
      auVar5._16_8_ = uVar6;
      auVar5._24_8_ = uVar6;
      auVar45 = vcmppd_avx(auVar23,auVar5,2);
      auVar45 = vpshufb_avx2(auVar45,
                             ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                            );
      auVar45 = vblendvps_avx(auVar28,auVar53,auVar45);
      auVar15._0_8_ =
           (double)CONCAT44(~auVar45._4_4_ & (uint)((ulonglong)dVar39 >> 0x20),
                            ~auVar45._0_4_ & SUB84(dVar39,0));
      auVar15._8_4_ = ~auVar45._8_4_ & SUB84(dVar14,0);
      auVar15._12_4_ = ~auVar45._12_4_ & (uint)((ulonglong)dVar14 >> 0x20);
      auVar21._16_4_ = ~auVar45._16_4_ & SUB84(dVar32,0);
      auVar21._0_16_ = auVar15;
      auVar21._20_4_ = ~auVar45._20_4_ & (uint)((ulonglong)dVar32 >> 0x20);
      auVar24._24_4_ = ~auVar45._24_4_ & SUB84(dVar35,0);
      auVar24._0_24_ = auVar21;
      auVar24._28_4_ = ~auVar45._28_4_ & (uint)((ulonglong)dVar35 >> 0x20);
      pauVar3 = (undefined1 (*) [24])(param_1 + 0x40 + lVar11);
      dVar30 = auVar15._8_8_ * *(double *)(*pauVar3 + 8) + _UNK_151c6afc8;
      dVar33 = auVar21._16_8_ * SUB248(*pauVar3,0x10) + _UNK_151c6afd0;
      dVar36 = auVar24._24_8_ * *(double *)pauVar3[1] + _UNK_151c6afd8;
      pdVar2 = (double *)(param_1 + 0x40 + lVar11);
      *pdVar2 = auVar15._0_8_ * *(double *)*pauVar3 +
                ___ymm_8000000000000000bff0000000000000bff0000000000000bff0000000000000;
      pdVar2[1] = dVar30;
      pdVar2[2] = dVar33;
      pdVar2[3] = dVar36;
      auVar16._0_8_ = dVar86 * dVar86 + dVar88 * dVar88;
      auVar16._8_8_ = dVar87 * dVar87 + dVar89 * dVar89;
      auVar15 = vshufpd_avx(auVar16,auVar16,1);
      dVar30 = auVar16._0_8_ + auVar15._0_8_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar30;
      dVar30 = __real_3ff0000000000000 / SQRT(dVar30);
      auVar42._8_8_ = 0;
      auVar42._0_8_ = __real_3e45798ee2308c3a;
      auVar15 = vcmpsd_avx(auVar42,auVar17,6);
      uVar13 = ~auVar15._0_8_ & __real_ffffffffffffffff;
      uVar31 = ~uVar13 & _UNK_150b54548;
      uVar34 = ~uVar13 & _UNK_150b54550;
      uVar37 = ~uVar13 & _UNK_150b54558;
      puVar1 = (ulonglong *)(param_1 + lVar11);
      *puVar1 = (ulonglong)(dVar86 * dVar30) & uVar13 |
                ~uVar13 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      puVar1[1] = (ulonglong)(dVar87 * dVar30) & uVar13 | uVar31;
      puVar1[2] = (ulonglong)(dVar88 * dVar30) & uVar13 | uVar34;
      puVar1[3] = (ulonglong)(dVar89 * dVar30) & uVar13 | uVar37;
      lVar11 = lVar11 + 0x60;
    } while ((ulonglong)param_3 * 0x60 != lVar11);
  }
  return;
}

// ConvertPoseToMeshRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_avx2 @ 140aa80b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToMeshRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_avx2
               (longlong param_1,longlong param_2,uint param_3,undefined1 (*param_4) [32])

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 in_ZMM1 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  
  dVar14 = _UNK_150b54438;
  dVar13 = _UNK_150b54430;
  dVar12 = _UNK_150b54428;
  dVar11 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar10 = _UNK_150b54418;
  dVar9 = _UNK_150b54410;
  dVar8 = _UNK_150b54408;
  dVar7 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar6 = _UNK_15076c6f8;
  dVar5 = ___xmm_bff00000000000003ff0000000000000;
  auVar21 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar21 = auVar21 & ~*param_4;
  if ((((((((SUB321(auVar21 >> 0x1f,0) & 1) == 0 && (SUB321(auVar21 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar21 >> 0x5f,0) & 1) == 0) && SUB321(auVar21 >> 0x7f,0) == '\0') &&
        (SUB321(auVar21 >> 0x9f,0) & 1) == 0) && SUB321(auVar21 >> 0xbf,0) == '\0') &&
      (SUB321(auVar21 >> 0xdf,0) & 1) == 0) && -1 < auVar21[0x1f]) {
    if (1 < (int)param_3) {
      pdVar15 = (double *)(param_1 + 0x78);
      uVar16 = 1;
      do {
        lVar17 = (longlong)*(int *)(param_2 + uVar16 * 4) * 0x60;
        dVar1 = *(double *)(param_1 + 0x18 + lVar17);
        dVar2 = *(double *)(param_1 + lVar17);
        auVar23._8_8_ = 0;
        auVar23._0_8_ = *pdVar15;
        auVar23 = vmovhpd_avx(auVar23,pdVar15[-1]);
        auVar25._8_8_ = 0;
        auVar25._0_8_ = pdVar15[-2];
        auVar25 = vmovhpd_avx(auVar25,pdVar15[-3]);
        dVar3 = *(double *)(param_1 + 8 + lVar17);
        dVar4 = *(double *)(param_1 + 0x10 + lVar17);
        auVar19._0_8_ =
             auVar25._0_8_ * dVar4 * dVar11 +
             pdVar15[-1] * dVar3 * dVar7 + dVar2 * auVar23._0_8_ * dVar5 + dVar1 * pdVar15[-3];
        auVar19._8_8_ =
             auVar25._8_8_ * dVar4 * dVar12 +
             *pdVar15 * dVar3 * dVar8 + dVar2 * auVar23._8_8_ * dVar6 + dVar1 * pdVar15[-2];
        auVar21._16_8_ =
             auVar23._0_8_ * dVar4 * dVar13 +
             pdVar15[-3] * dVar3 * dVar9 + dVar2 * auVar25._0_8_ * dVar5 + dVar1 * pdVar15[-1];
        auVar21._0_16_ = auVar19;
        auVar21._24_8_ =
             auVar23._8_8_ * dVar4 * dVar14 +
             pdVar15[-2] * dVar3 * dVar10 + dVar2 * auVar25._8_8_ * dVar6 + dVar1 * *pdVar15;
        dVar1 = (double)vmovlpd_avx(auVar19);
        pdVar15[-3] = dVar1;
        dVar1 = (double)vmovhpd_avx(auVar19);
        pdVar15[-2] = dVar1;
        dVar1 = (double)vmovlpd_avx(auVar21._16_16_);
        pdVar15[-1] = dVar1;
        dVar1 = (double)vmovhpd_avx(auVar21._16_16_);
        *pdVar15 = dVar1;
        uVar16 = uVar16 + 1;
        pdVar15 = pdVar15 + 0xc;
      } while (param_3 != uVar16);
    }
  }
  else if (1 < (int)param_3) {
    pdVar15 = (double *)(param_1 + 0x78);
    uVar16 = 1;
    do {
      lVar17 = (longlong)*(int *)(param_2 + uVar16 * 4) * 0x60;
      dVar1 = *(double *)(param_1 + 0x18 + lVar17);
      dVar2 = *(double *)(param_1 + lVar17);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = *pdVar15;
      auVar23 = vmovhpd_avx(auVar22,pdVar15[-1]);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = pdVar15[-2];
      auVar25 = vmovhpd_avx(auVar24,pdVar15[-3]);
      dVar3 = *(double *)(param_1 + 8 + lVar17);
      dVar4 = *(double *)(param_1 + 0x10 + lVar17);
      auVar18._0_8_ =
           auVar25._0_8_ * dVar4 * dVar11 +
           pdVar15[-1] * dVar3 * dVar7 + dVar2 * auVar23._0_8_ * dVar5 + dVar1 * pdVar15[-3];
      auVar18._8_8_ =
           auVar25._8_8_ * dVar4 * dVar12 +
           *pdVar15 * dVar3 * dVar8 + dVar2 * auVar23._8_8_ * dVar6 + dVar1 * pdVar15[-2];
      auVar20._16_8_ =
           auVar23._0_8_ * dVar4 * dVar13 +
           pdVar15[-3] * dVar3 * dVar9 + dVar2 * auVar25._0_8_ * dVar5 + dVar1 * pdVar15[-1];
      auVar20._0_16_ = auVar18;
      auVar20._24_8_ =
           auVar23._8_8_ * dVar4 * dVar14 +
           pdVar15[-2] * dVar3 * dVar10 + dVar2 * auVar25._8_8_ * dVar6 + dVar1 * *pdVar15;
      dVar1 = (double)vmovlpd_avx(auVar18);
      pdVar15[-3] = dVar1;
      dVar1 = (double)vmovhpd_avx(auVar18);
      pdVar15[-2] = dVar1;
      dVar1 = (double)vmovlpd_avx(auVar20._16_16_);
      pdVar15[-1] = dVar1;
      dVar1 = (double)vmovhpd_avx(auVar20._16_16_);
      *pdVar15 = dVar1;
      uVar16 = uVar16 + 1;
      pdVar15 = pdVar15 + 0xc;
    } while (param_3 != uVar16);
  }
  return;
}

// ConvertMeshRotationPoseToLocalSpace___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_avx2 @ 140aa82b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertMeshRotationPoseToLocalSpace___un_3C_s_5B_unFTransform_5D__3E_un_3C_Cuni_3E_Cuni_avx2
               (longlong param_1,longlong param_2,int param_3,undefined1 (*param_4) [32])

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  ulonglong uVar21;
  double *pdVar22;
  undefined1 in_ZMM1 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar27 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar26 [32];
  undefined1 auVar28 [32];
  
  dVar19 = _UNK_150b54438;
  dVar18 = _UNK_150b54430;
  dVar17 = _UNK_150b54428;
  dVar16 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar15 = _UNK_150b54418;
  dVar14 = _UNK_150b54410;
  dVar13 = _UNK_150b54408;
  dVar12 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar11 = _UNK_150b543d8;
  dVar10 = _UNK_150b543d0;
  dVar9 = _UNK_150b543c8;
  dVar8 = ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  dVar7 = _UNK_15076c6f8;
  dVar6 = ___xmm_bff00000000000003ff0000000000000;
  auVar3 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  uVar20 = param_3 - 1;
  auVar3 = auVar3 & ~*param_4;
  if ((((((((SUB321(auVar3 >> 0x1f,0) & 1) == 0 && (SUB321(auVar3 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar3 >> 0x5f,0) & 1) == 0) && SUB321(auVar3 >> 0x7f,0) == '\0') &&
        (SUB321(auVar3 >> 0x9f,0) & 1) == 0) && SUB321(auVar3 >> 0xbf,0) == '\0') &&
      (SUB321(auVar3 >> 0xdf,0) & 1) == 0) && -1 < auVar3[0x1f]) {
    if (1 < param_3) {
      uVar21 = (ulonglong)uVar20 + 1;
      pdVar22 = (double *)((ulonglong)uVar20 * 0x60 + param_1 + 0x18);
      do {
        pdVar1 = (double *)(param_1 + (longlong)*(int *)(param_2 + -4 + uVar21 * 4) * 0x60);
        auVar27._0_8_ = dVar8 * *pdVar1;
        auVar27._8_8_ = dVar9 * pdVar1[1];
        auVar27._16_8_ = dVar10 * pdVar1[2];
        auVar27._24_8_ = dVar11 * pdVar1[3];
        auVar3 = vpermpd_avx2(auVar27,0xff);
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *pdVar22;
        auVar30 = vmovhpd_avx(auVar30,pdVar22[-1]);
        auVar32._8_8_ = 0;
        auVar32._0_8_ = pdVar22[-2];
        auVar32 = vmovhpd_avx(auVar32,pdVar22[-3]);
        auVar4 = vpermpd_avx2(auVar27,0x55);
        auVar5 = vpermpd_avx2(auVar27,0xaa);
        auVar24._0_8_ =
             auVar32._0_8_ * auVar5._0_8_ * dVar16 +
             auVar4._0_8_ * pdVar22[-1] * dVar12 +
             auVar3._0_8_ * *(double *)*(undefined1 (*) [24])(pdVar22 + -3) +
             auVar30._0_8_ * auVar27._0_8_ * dVar6;
        auVar24._8_8_ =
             auVar32._8_8_ * auVar5._8_8_ * dVar17 +
             auVar4._8_8_ * *pdVar22 * dVar13 +
             auVar3._8_8_ * pdVar22[-2] + auVar30._8_8_ * auVar27._0_8_ * dVar7;
        auVar28._16_8_ =
             auVar30._0_8_ * auVar5._16_8_ * dVar18 +
             auVar4._16_8_ * pdVar22[-3] * dVar14 +
             auVar3._16_8_ * SUB248(*(undefined1 (*) [24])(pdVar22 + -3),0x10) +
             auVar32._0_8_ * auVar27._0_8_ * dVar6;
        auVar28._0_16_ = auVar24;
        auVar28._24_8_ =
             auVar30._8_8_ * auVar5._24_8_ * dVar19 +
             auVar4._24_8_ * pdVar22[-2] * dVar15 +
             auVar3._24_8_ * *pdVar22 + auVar32._8_8_ * auVar27._0_8_ * dVar7;
        dVar2 = (double)vmovlpd_avx(auVar24);
        pdVar22[-3] = dVar2;
        dVar2 = (double)vmovhpd_avx(auVar24);
        pdVar22[-2] = dVar2;
        dVar2 = (double)vmovlpd_avx(auVar28._16_16_);
        pdVar22[-1] = dVar2;
        dVar2 = (double)vmovhpd_avx(auVar28._16_16_);
        *pdVar22 = dVar2;
        uVar21 = uVar21 - 1;
        pdVar22 = pdVar22 + -0xc;
      } while (1 < uVar21);
    }
  }
  else if (1 < param_3) {
    uVar21 = (ulonglong)uVar20 + 1;
    pdVar22 = (double *)((ulonglong)uVar20 * 0x60 + param_1 + 0x18);
    do {
      pdVar1 = (double *)(param_1 + (longlong)*(int *)(param_2 + -4 + uVar21 * 4) * 0x60);
      auVar25._0_8_ = dVar8 * *pdVar1;
      auVar25._8_8_ = dVar9 * pdVar1[1];
      auVar25._16_8_ = dVar10 * pdVar1[2];
      auVar25._24_8_ = dVar11 * pdVar1[3];
      auVar3 = vpermpd_avx2(auVar25,0xff);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = *pdVar22;
      auVar30 = vmovhpd_avx(auVar29,pdVar22[-1]);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = pdVar22[-2];
      auVar32 = vmovhpd_avx(auVar31,pdVar22[-3]);
      auVar4 = vpermpd_avx2(auVar25,0x55);
      auVar5 = vpermpd_avx2(auVar25,0xaa);
      auVar23._0_8_ =
           auVar32._0_8_ * auVar5._0_8_ * dVar16 +
           auVar4._0_8_ * pdVar22[-1] * dVar12 +
           auVar3._0_8_ * *(double *)*(undefined1 (*) [24])(pdVar22 + -3) +
           auVar30._0_8_ * auVar25._0_8_ * dVar6;
      auVar23._8_8_ =
           auVar32._8_8_ * auVar5._8_8_ * dVar17 +
           auVar4._8_8_ * *pdVar22 * dVar13 +
           auVar3._8_8_ * pdVar22[-2] + auVar30._8_8_ * auVar25._0_8_ * dVar7;
      auVar26._16_8_ =
           auVar30._0_8_ * auVar5._16_8_ * dVar18 +
           auVar4._16_8_ * pdVar22[-3] * dVar14 +
           auVar3._16_8_ * SUB248(*(undefined1 (*) [24])(pdVar22 + -3),0x10) +
           auVar32._0_8_ * auVar25._0_8_ * dVar6;
      auVar26._0_16_ = auVar23;
      auVar26._24_8_ =
           auVar30._8_8_ * auVar5._24_8_ * dVar19 +
           auVar4._24_8_ * pdVar22[-2] * dVar15 +
           auVar3._24_8_ * *pdVar22 + auVar32._8_8_ * auVar25._0_8_ * dVar7;
      dVar2 = (double)vmovlpd_avx(auVar23);
      pdVar22[-3] = dVar2;
      dVar2 = (double)vmovhpd_avx(auVar23);
      pdVar22[-2] = dVar2;
      dVar2 = (double)vmovlpd_avx(auVar26._16_16_);
      pdVar22[-1] = dVar2;
      dVar2 = (double)vmovhpd_avx(auVar26._16_16_);
      *pdVar22 = dVar2;
      uVar21 = uVar21 - 1;
      pdVar22 = pdVar22 + -0xc;
    } while (1 < uVar21);
  }
  return;
}

// AccumulateWithAdditiveScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_CunfCuni_avx2 @ 140aa84f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AccumulateWithAdditiveScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_CunfCuni_avx2
               (longlong param_1,longlong param_2,float param_3,uint param_4,
               undefined1 (*param_5) [32])

{
  double *pdVar1;
  undefined1 (*pauVar2) [24];
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [24];
  undefined1 auVar11 [24];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  longlong lVar43;
  double dVar44;
  undefined1 in_ZMM1 [64];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  
  dVar42 = _UNK_150b54518;
  dVar41 = _UNK_150b54510;
  dVar40 = _UNK_150b54508;
  dVar39 = ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
  dVar38 = _UNK_150b54438;
  dVar37 = _UNK_150b54430;
  dVar36 = _UNK_150b54428;
  dVar35 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar34 = _UNK_150b54418;
  dVar33 = _UNK_150b54410;
  dVar32 = _UNK_150b54408;
  dVar31 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar30 = _UNK_15076c6f8;
  dVar29 = ___xmm_bff00000000000003ff0000000000000;
  auVar7 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar7 = auVar7 & ~*param_5;
  if ((((((((SUB321(auVar7 >> 0x1f,0) & 1) == 0 && (SUB321(auVar7 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar7 >> 0x5f,0) & 1) == 0) && SUB321(auVar7 >> 0x7f,0) == '\0') &&
        (SUB321(auVar7 >> 0x9f,0) & 1) == 0) && SUB321(auVar7 >> 0xbf,0) == '\0') &&
      (SUB321(auVar7 >> 0xdf,0) & 1) == 0) && -1 < auVar7[0x1f]) {
    if (0 < (int)param_4) {
      dVar44 = (double)param_3;
      lVar43 = 0;
      do {
        pdVar1 = (double *)(param_2 + lVar43);
        auVar46._0_8_ = dVar44 * *pdVar1;
        auVar46._8_8_ = dVar44 * pdVar1[1];
        auVar46._16_8_ = dVar44 * pdVar1[2];
        auVar46._24_8_ = dVar44 * pdVar1[3];
        pdVar1 = (double *)(param_2 + 0x20 + lVar43);
        dVar12 = *pdVar1;
        dVar13 = pdVar1[1];
        dVar14 = pdVar1[2];
        dVar15 = pdVar1[3];
        pauVar2 = (undefined1 (*) [24])(param_1 + 0x20 + lVar43);
        dVar4 = *(double *)*pauVar2;
        dVar24 = *(double *)(*pauVar2 + 8);
        auVar10 = *pauVar2;
        dVar5 = *(double *)pauVar2[1];
        pdVar1 = (double *)(param_2 + 0x40 + lVar43);
        dVar16 = *pdVar1;
        dVar17 = pdVar1[1];
        dVar18 = pdVar1[2];
        dVar19 = pdVar1[3];
        pdVar1 = (double *)(param_1 + 0x40 + lVar43);
        dVar20 = *pdVar1;
        dVar21 = pdVar1[1];
        dVar22 = pdVar1[2];
        dVar23 = pdVar1[3];
        auVar48._8_8_ = 0;
        auVar48._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar43);
        auVar48 = vmovhpd_avx(auVar48,*(undefined8 *)(param_1 + 0x10 + lVar43));
        auVar7 = vpermpd_avx2(auVar46,0xff);
        auVar50._8_8_ = 0;
        auVar50._0_8_ = *(ulonglong *)(param_1 + 8 + lVar43);
        auVar50 = vmovhpd_avx(auVar50,*(undefined8 *)(param_1 + lVar43));
        pauVar2 = (undefined1 (*) [24])(param_1 + lVar43);
        dVar25 = *(double *)(*pauVar2 + 8);
        auVar11 = *pauVar2;
        dVar6 = *(double *)pauVar2[1];
        auVar8 = vpermpd_avx2(auVar46,0x55);
        pdVar3 = (double *)(param_1 + 0x10 + lVar43);
        dVar26 = pdVar3[1];
        dVar27 = *(double *)(param_1 + lVar43);
        dVar28 = ((double *)(param_1 + lVar43))[1];
        auVar9 = vpermpd_avx2(auVar46,0xaa);
        pdVar1 = (double *)(param_1 + lVar43);
        *pdVar1 = auVar50._0_8_ * auVar9._0_8_ * dVar35 +
                  auVar8._0_8_ * *pdVar3 * dVar31 +
                  auVar7._0_8_ * *(double *)*pauVar2 + auVar46._0_8_ * auVar48._0_8_ * dVar29;
        pdVar1[1] = auVar50._8_8_ * auVar9._8_8_ * dVar36 +
                    auVar8._8_8_ * dVar26 * dVar32 +
                    auVar7._8_8_ * dVar25 + auVar46._0_8_ * auVar48._8_8_ * dVar30;
        pdVar1[2] = auVar48._0_8_ * auVar9._16_8_ * dVar37 +
                    auVar8._16_8_ * dVar27 * dVar33 +
                    auVar7._16_8_ * auVar11._16_8_ + auVar46._0_8_ * auVar50._0_8_ * dVar29;
        pdVar1[3] = auVar48._8_8_ * auVar9._24_8_ * dVar38 +
                    auVar8._24_8_ * dVar28 * dVar34 +
                    auVar7._24_8_ * dVar6 + auVar46._0_8_ * auVar50._8_8_ * dVar30;
        pdVar1 = (double *)(param_1 + 0x20 + lVar43);
        *pdVar1 = dVar44 * dVar12 + dVar4;
        pdVar1[1] = dVar44 * dVar13 + dVar24;
        pdVar1[2] = dVar44 * dVar14 + auVar10._16_8_;
        pdVar1[3] = dVar44 * dVar15 + dVar5;
        pdVar1 = (double *)(param_1 + 0x40 + lVar43);
        *pdVar1 = (dVar44 * dVar16 + dVar39) * dVar20;
        pdVar1[1] = (dVar44 * dVar17 + dVar40) * dVar21;
        pdVar1[2] = (dVar44 * dVar18 + dVar41) * dVar22;
        pdVar1[3] = (dVar44 * dVar19 + dVar42) * dVar23;
        lVar43 = lVar43 + 0x60;
      } while ((ulonglong)param_4 * 0x60 != lVar43);
    }
  }
  else if (0 < (int)param_4) {
    dVar44 = (double)param_3;
    lVar43 = 0;
    do {
      pdVar1 = (double *)(param_2 + lVar43);
      auVar45._0_8_ = dVar44 * *pdVar1;
      auVar45._8_8_ = dVar44 * pdVar1[1];
      auVar45._16_8_ = dVar44 * pdVar1[2];
      auVar45._24_8_ = dVar44 * pdVar1[3];
      pdVar1 = (double *)(param_2 + 0x20 + lVar43);
      dVar12 = *pdVar1;
      dVar13 = pdVar1[1];
      dVar14 = pdVar1[2];
      dVar15 = pdVar1[3];
      pauVar2 = (undefined1 (*) [24])(param_1 + 0x20 + lVar43);
      dVar4 = *(double *)*pauVar2;
      dVar24 = *(double *)(*pauVar2 + 8);
      auVar10 = *pauVar2;
      dVar5 = *(double *)pauVar2[1];
      pdVar1 = (double *)(param_2 + 0x40 + lVar43);
      dVar16 = *pdVar1;
      dVar17 = pdVar1[1];
      dVar18 = pdVar1[2];
      dVar19 = pdVar1[3];
      pdVar1 = (double *)(param_1 + 0x40 + lVar43);
      dVar20 = *pdVar1;
      dVar21 = pdVar1[1];
      dVar22 = pdVar1[2];
      dVar23 = pdVar1[3];
      auVar47._8_8_ = 0;
      auVar47._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar43);
      auVar48 = vmovhpd_avx(auVar47,*(undefined8 *)(param_1 + 0x10 + lVar43));
      auVar7 = vpermpd_avx2(auVar45,0xff);
      auVar49._8_8_ = 0;
      auVar49._0_8_ = *(ulonglong *)(param_1 + 8 + lVar43);
      auVar50 = vmovhpd_avx(auVar49,*(undefined8 *)(param_1 + lVar43));
      pauVar2 = (undefined1 (*) [24])(param_1 + lVar43);
      dVar25 = *(double *)(*pauVar2 + 8);
      auVar11 = *pauVar2;
      dVar6 = *(double *)pauVar2[1];
      auVar8 = vpermpd_avx2(auVar45,0x55);
      pdVar3 = (double *)(param_1 + 0x10 + lVar43);
      dVar26 = pdVar3[1];
      dVar27 = *(double *)(param_1 + lVar43);
      dVar28 = ((double *)(param_1 + lVar43))[1];
      auVar9 = vpermpd_avx2(auVar45,0xaa);
      pdVar1 = (double *)(param_1 + lVar43);
      *pdVar1 = auVar50._0_8_ * auVar9._0_8_ * dVar35 +
                auVar8._0_8_ * *pdVar3 * dVar31 +
                auVar7._0_8_ * *(double *)*pauVar2 + auVar45._0_8_ * auVar48._0_8_ * dVar29;
      pdVar1[1] = auVar50._8_8_ * auVar9._8_8_ * dVar36 +
                  auVar8._8_8_ * dVar26 * dVar32 +
                  auVar7._8_8_ * dVar25 + auVar45._0_8_ * auVar48._8_8_ * dVar30;
      pdVar1[2] = auVar48._0_8_ * auVar9._16_8_ * dVar37 +
                  auVar8._16_8_ * dVar27 * dVar33 +
                  auVar7._16_8_ * auVar11._16_8_ + auVar45._0_8_ * auVar50._0_8_ * dVar29;
      pdVar1[3] = auVar48._8_8_ * auVar9._24_8_ * dVar38 +
                  auVar8._24_8_ * dVar28 * dVar34 +
                  auVar7._24_8_ * dVar6 + auVar45._0_8_ * auVar50._8_8_ * dVar30;
      pdVar1 = (double *)(param_1 + 0x20 + lVar43);
      *pdVar1 = dVar44 * dVar12 + dVar4;
      pdVar1[1] = dVar44 * dVar13 + dVar24;
      pdVar1[2] = dVar44 * dVar14 + auVar10._16_8_;
      pdVar1[3] = dVar44 * dVar15 + dVar5;
      pdVar1 = (double *)(param_1 + 0x40 + lVar43);
      *pdVar1 = (dVar44 * dVar16 + dVar39) * dVar20;
      pdVar1[1] = (dVar44 * dVar17 + dVar40) * dVar21;
      pdVar1[2] = (dVar44 * dVar18 + dVar41) * dVar22;
      pdVar1[3] = (dVar44 * dVar19 + dVar42) * dVar23;
      lVar43 = lVar43 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar43);
  }
  return;
}

// BlendPosesPerBoneFilterScaleRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx2 @ 140aa8770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScaleRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx2
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,longlong param_10
               ,longlong param_11,longlong param_12,uint param_13,undefined1 (*param_14) [32])

{
  double *pdVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  int iVar12;
  ulonglong *puVar13;
  undefined4 uVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [32];
  undefined1 auVar29 [16];
  undefined1 auVar25 [32];
  undefined1 auVar21 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar23 [16];
  undefined1 auVar30 [16];
  undefined1 auVar28 [32];
  undefined1 in_ZMM0 [64];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar44;
  undefined1 auVar35 [32];
  double dVar43;
  double dVar46;
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar45 [16];
  undefined8 uVar47;
  undefined1 auVar48 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined8 uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar73 [16];
  undefined1 auVar80 [32];
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [64];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [64];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  double dVar114;
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  double dVar131;
  double dVar134;
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  double dVar133;
  double dVar135;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  double dVar132;
  undefined1 auVar130 [64];
  double dVar136;
  double dVar137;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  double dVar148;
  double dVar149;
  double dVar150;
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  double dVar151;
  undefined1 auVar146 [32];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar178 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 auStack_328 [16];
  undefined1 local_318 [16];
  undefined1 local_2f8 [16];
  undefined1 auStack_2e8 [16];
  undefined1 local_2b8 [32];
  undefined1 local_288 [16];
  undefined1 local_258 [16];
  undefined1 local_238 [16];
  undefined8 local_218;
  undefined1 local_1f8 [16];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_188 [16];
  undefined1 local_168 [32];
  undefined1 auVar97 [32];
  undefined1 auVar124 [32];
  undefined1 auVar129 [32];
  undefined1 auVar147 [32];
  undefined1 auVar160 [32];
  undefined1 auVar164 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar179 [32];
  undefined1 auVar187 [32];
  undefined1 auVar192 [32];
  undefined1 auVar196 [32];
  
  auVar80 = *param_14;
  auVar106 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  auVar106 = auVar106 & ~auVar80;
  if ((((((((SUB321(auVar106 >> 0x1f,0) & 1) == 0 && (SUB321(auVar106 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar106 >> 0x5f,0) & 1) == 0) && SUB321(auVar106 >> 0x7f,0) == '\0') &&
        (SUB321(auVar106 >> 0x9f,0) & 1) == 0) && SUB321(auVar106 >> 0xbf,0) == '\0') &&
      (SUB321(auVar106 >> 0xdf,0) & 1) == 0) && -1 < auVar106[0x1f]) {
    if (0 < (int)param_13) {
      lVar17 = 0;
      lVar18 = 0;
      iVar16 = 0;
      do {
        iVar12 = *(int *)(param_11 + lVar17 * 2);
        iVar8 = *(int *)(param_12 + lVar17);
        lVar19 = (longlong)iVar8;
        auVar142._0_8_ = *(ulonglong *)(param_2 + lVar18 * 4);
        local_338._8_8_ = 0;
        local_338._0_8_ = *(ulonglong *)(param_2 + 8 + lVar18 * 4);
        local_1f8._0_8_ = *(double *)(param_2 + 0x20 + lVar18 * 4);
        local_1f8._8_8_ = 0;
        local_368._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar18 * 4);
        local_368._8_8_ = 0;
        local_348._0_8_ = *(double *)(param_2 + 0x30 + lVar18 * 4);
        local_348._8_8_ = 0;
        local_358._0_8_ = *(ulonglong *)(param_2 + 0x38 + lVar18 * 4);
        local_358._8_8_ = 0;
        auVar195._0_8_ = *(double *)(param_2 + 0x40 + lVar18 * 4);
        local_288._8_8_ = 0;
        local_288._0_8_ = auVar195._0_8_;
        local_448._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar18 * 4);
        local_448._8_8_ = 0;
        local_3b8._0_8_ = *(double *)(param_2 + 0x50 + lVar18 * 4);
        local_3b8._8_8_ = 0;
        local_1b8._8_8_ = 0;
        local_1b8._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar18 * 4);
        auVar100 = ZEXT864(*(ulonglong *)(param_2 + 0x10 + lVar18 * 4));
        auVar113 = ZEXT864(*(ulonglong *)(param_2 + 0x18 + lVar18 * 4));
        puVar13 = (ulonglong *)GetTransformFromArray(param_3,iVar12,iVar16);
        auVar174._0_8_ = *puVar13;
        auVar101._8_8_ = 0;
        auVar101._0_8_ = auVar174._0_8_;
        uVar2 = puVar13[1];
        auVar190._8_8_ = 0;
        auVar190._0_8_ = uVar2;
        uVar3 = puVar13[2];
        auVar175._8_8_ = 0;
        auVar175._0_8_ = uVar3;
        uVar4 = puVar13[3];
        auVar103._8_8_ = 0;
        auVar103._0_8_ = uVar4;
        auVar30._0_8_ = (double)puVar13[8];
        auVar185._8_8_ = 0;
        auVar185._0_8_ = auVar30._0_8_;
        uVar5 = puVar13[9];
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar5;
        dVar46 = (double)puVar13[10];
        local_458._8_8_ = 0;
        local_458._0_8_ = dVar46;
        auVar45 = auVar100._0_16_;
        local_388._0_8_ = auVar100._0_8_;
        auVar139 = auVar113._0_16_;
        local_3c8._0_8_ = auVar113._0_8_;
        if (lVar19 == -1) {
          auVar82._8_8_ = 0;
          auVar82._0_8_ = auVar142._0_8_;
          auVar52 = vunpcklpd_avx(auVar82,local_338);
          auVar21 = vunpcklpd_avx(auVar45,auVar139);
          auVar23 = vunpcklpd_avx(auVar139,auVar45);
          auVar82 = vunpcklpd_avx(local_338,auVar82);
          auVar22._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar82._0_8_ * 0.0 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar21._0_8_ * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar23._0_8_ * 0.0 + auVar52._0_8_;
          auVar22._8_8_ =
               _UNK_150b54428 * auVar82._8_8_ * 0.0 +
               _UNK_150b54408 * auVar21._8_8_ * 0.0 +
               _UNK_15076c6f8 * auVar23._8_8_ * 0.0 + auVar52._8_8_;
          auVar80._16_8_ =
               _UNK_150b54430 * auVar23._0_8_ * 0.0 +
               _UNK_150b54410 * auVar52._0_8_ * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar82._0_8_ * 0.0 + auVar21._0_8_;
          auVar80._0_16_ = auVar22;
          auVar80._24_8_ =
               _UNK_150b54438 * auVar23._8_8_ * 0.0 +
               _UNK_150b54418 * auVar52._8_8_ * 0.0 +
               _UNK_15076c6f8 * auVar82._8_8_ * 0.0 + auVar21._8_8_;
          local_408 = vshufpd_avx(auVar22,auVar22,1);
          local_418 = auVar80._16_16_;
          local_3d8 = vshufpd_avx(local_418,local_418,1);
          auVar52 = vunpcklpd_avx(auVar101,auVar190);
          auVar21 = vunpcklpd_avx(auVar175,auVar103);
          auVar23 = vunpcklpd_avx(auVar103,auVar175);
          auVar82 = vunpcklpd_avx(auVar190,auVar101);
          local_318._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar82._0_8_ * 0.0 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar21._0_8_ * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar23._0_8_ * 0.0 + auVar52._0_8_;
          local_318._8_8_ =
               _UNK_150b54428 * auVar82._8_8_ * 0.0 +
               _UNK_150b54408 * auVar21._8_8_ * 0.0 +
               _UNK_15076c6f8 * auVar23._8_8_ * 0.0 + auVar52._8_8_;
          auVar106._16_8_ =
               _UNK_150b54430 * auVar23._0_8_ * 0.0 +
               _UNK_150b54410 * auVar52._0_8_ * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar82._0_8_ * 0.0 + auVar21._0_8_;
          auVar106._0_16_ = local_318;
          auVar106._24_8_ =
               _UNK_150b54438 * auVar23._8_8_ * 0.0 +
               _UNK_150b54418 * auVar52._8_8_ * 0.0 +
               _UNK_15076c6f8 * auVar82._8_8_ * 0.0 + auVar21._8_8_;
          local_378 = vshufpd_avx(local_318,local_318,1);
          local_3e8 = auVar106._16_16_;
          local_398 = vshufpd_avx(local_3e8,local_3e8,1);
          local_3a8 = local_3b8;
          local_428 = local_448;
          auVar21 = local_288;
          dVar31 = dVar46;
          local_3f8 = auVar185;
          auVar52 = auVar29;
        }
        else {
          lVar15 = lVar19 * 0x20;
          dVar31 = *(double *)(param_4 + 0x18 + lVar15);
          auVar167._8_8_ = 0;
          auVar167._0_8_ = auVar142._0_8_;
          auVar52 = vunpcklpd_avx(auVar167,local_338);
          auVar21 = vunpcklpd_avx(auVar45,auVar139);
          dVar43 = *(double *)(param_4 + lVar15);
          auVar23 = vunpcklpd_avx(auVar139,auVar45);
          auVar82 = vunpcklpd_avx(local_338,auVar167);
          dVar44 = *(double *)(param_4 + 8 + lVar15);
          dVar136 = *(double *)(param_4 + 0x10 + lVar15);
          auVar22._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar82._0_8_ * dVar136 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar21._0_8_ * dVar44 +
               dVar31 * auVar52._0_8_ +
               auVar23._0_8_ * dVar43 * ___xmm_bff00000000000003ff0000000000000;
          auVar22._8_8_ =
               _UNK_150b54428 * auVar82._8_8_ * dVar136 +
               _UNK_150b54408 * auVar21._8_8_ * dVar44 +
               dVar31 * auVar52._8_8_ + auVar23._8_8_ * dVar43 * _UNK_15076c6f8;
          auVar86._16_8_ =
               _UNK_150b54430 * auVar23._0_8_ * dVar136 +
               _UNK_150b54410 * auVar52._0_8_ * dVar44 +
               dVar31 * auVar21._0_8_ +
               auVar82._0_8_ * dVar43 * ___xmm_bff00000000000003ff0000000000000;
          auVar86._0_16_ = auVar22;
          auVar86._24_8_ =
               _UNK_150b54438 * auVar23._8_8_ * dVar136 +
               _UNK_150b54418 * auVar52._8_8_ * dVar44 +
               dVar31 * auVar21._8_8_ + auVar82._8_8_ * dVar43 * _UNK_15076c6f8;
          local_408 = vshufpd_avx(auVar22,auVar22,1);
          local_418 = auVar86._16_16_;
          local_3d8 = vshufpd_avx(local_418,local_418,1);
          dVar31 = *(double *)(param_6 + 0x18 + lVar15);
          auVar52 = vunpcklpd_avx(auVar101,auVar190);
          auVar21 = vunpcklpd_avx(auVar175,auVar103);
          dVar43 = *(double *)(param_6 + lVar15);
          auVar23 = vunpcklpd_avx(auVar103,auVar175);
          auVar82 = vunpcklpd_avx(auVar190,auVar101);
          dVar44 = *(double *)(param_6 + 8 + lVar15);
          dVar136 = *(double *)(param_6 + 0x10 + lVar15);
          local_318._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar82._0_8_ * dVar136 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar21._0_8_ * dVar44 +
               dVar31 * auVar52._0_8_ +
               auVar23._0_8_ * dVar43 * ___xmm_bff00000000000003ff0000000000000;
          local_318._8_8_ =
               _UNK_150b54428 * auVar82._8_8_ * dVar136 +
               _UNK_150b54408 * auVar21._8_8_ * dVar44 +
               dVar31 * auVar52._8_8_ + auVar23._8_8_ * dVar43 * _UNK_15076c6f8;
          auVar105._16_8_ =
               _UNK_150b54430 * auVar23._0_8_ * dVar136 +
               _UNK_150b54410 * auVar52._0_8_ * dVar44 +
               dVar31 * auVar21._0_8_ +
               auVar82._0_8_ * dVar43 * ___xmm_bff00000000000003ff0000000000000;
          auVar105._0_16_ = local_318;
          auVar105._24_8_ =
               _UNK_150b54438 * auVar23._8_8_ * dVar136 +
               _UNK_150b54418 * auVar52._8_8_ * dVar44 +
               dVar31 * auVar21._8_8_ + auVar82._8_8_ * dVar43 * _UNK_15076c6f8;
          local_378 = vshufpd_avx(local_318,local_318,1);
          local_3e8 = auVar105._16_16_;
          lVar15 = lVar19 * 0x18;
          auVar52 = vunpcklpd_avx(local_288,local_448);
          auVar21._0_8_ = auVar52._0_8_ * *(double *)(param_5 + lVar15);
          auVar21._8_8_ = auVar52._8_8_ * ((double *)(param_5 + lVar15))[1];
          local_3a8._8_8_ = 0;
          local_3a8._0_8_ = (double)local_3b8._0_8_ * *(double *)(param_5 + 0x10 + lVar15);
          local_398 = vshufpd_avx(local_3e8,local_3e8,1);
          auVar52 = vunpcklpd_avx(auVar185,auVar29);
          local_3f8._0_8_ = auVar52._0_8_ * *(double *)(param_7 + lVar15);
          local_3f8._8_8_ = auVar52._8_8_ * ((double *)(param_7 + lVar15))[1];
          local_428 = vshufpd_avx(auVar21,auVar21,1);
          auVar52 = vshufpd_avx(local_3f8,local_3f8,1);
          dVar31 = dVar46 * *(double *)(param_7 + 0x10 + lVar15);
        }
        dVar43 = (double)puVar13[4];
        auVar62._8_8_ = 0;
        auVar62._0_8_ = dVar43;
        uVar6 = puVar13[5];
        auVar34._8_8_ = 0;
        auVar34._0_8_ = uVar6;
        dVar44 = (double)puVar13[6];
        auVar51._8_8_ = 0;
        auVar51._0_8_ = dVar44;
        auVar23 = vmaxss_avx(ZEXT816(0) << 0x40,ZEXT416(*(uint *)(param_11 + 4 + lVar17 * 2)));
        uVar7 = puVar13[7];
        auVar83._8_8_ = 0;
        auVar83._0_8_ = uVar7;
        auVar82 = vminss_avx(auVar23,ZEXT416((uint)__real_3f800000));
        auVar23 = vmaxss_avx(auVar82,ZEXT416(*(uint *)(param_10 + (longlong)iVar12 * 4)));
        auVar191._8_8_ = 0;
        auVar191._0_8_ = puVar13[0xb];
        *(int *)(param_10 + (longlong)iVar12 * 4) = auVar23._0_4_;
        fVar81 = auVar82._0_4_;
        local_258._0_8_ = auVar52._0_8_;
        uVar47 = local_428._0_8_;
        local_218 = local_318._0_8_;
        dVar136 = local_3a8._0_8_;
        if (fVar81 <= __real_3727c5ac) {
          local_458 = local_408;
          local_438 = local_418;
          local_2f8 = local_3d8;
          local_238 = auVar21;
          local_318 = auVar22;
          auVar30._0_8_ = dVar136;
        }
        else if (__real_3f7fff58 <= fVar81) {
          local_238 = local_3f8;
          local_338._8_8_ = 0;
          local_338._0_8_ = uVar2;
          local_1b8._0_16_ = auVar191;
          local_458 = local_378;
          local_438 = local_3e8;
          local_2f8 = local_398;
          auVar142._0_8_ = auVar174._0_8_;
          local_3b8._0_8_ = dVar46;
          auVar195._0_8_ = auVar30._0_8_;
          local_428 = auVar52;
          local_388._0_8_ = uVar3;
          local_3c8._0_8_ = uVar4;
          local_1f8._0_8_ = dVar43;
          local_368._0_8_ = uVar6;
          local_348._0_8_ = dVar44;
          local_358._0_8_ = uVar7;
          auVar30._0_8_ = dVar31;
          local_448._0_8_ = uVar5;
        }
        else {
          auVar139 = vunpcklpd_avx(auVar45,auVar139);
          auVar45._8_8_ = 0;
          auVar45._0_8_ = auVar142._0_8_;
          auVar142 = vunpcklpd_avx(auVar45,local_338);
          auVar144._16_16_ = auVar139;
          auVar144._0_16_ = auVar142;
          auStack_328 = vunpcklpd_avx(auVar175,auVar103);
          auVar101 = vunpcklpd_avx(auVar101,auVar190);
          auVar107._0_8_ = auVar142._0_8_ * auVar101._0_8_;
          auVar107._8_8_ = auVar142._8_8_ * auVar101._8_8_;
          auVar107._16_8_ = auVar139._0_8_ * auStack_328._0_8_;
          auVar107._24_8_ = auVar139._8_8_ * auStack_328._8_8_;
          auVar80 = vpermpd_avx2(auVar107,0x4e);
          auVar108._0_8_ = auVar80._0_8_ + auVar107._0_8_;
          auVar108._8_8_ = auVar80._8_8_ + auVar107._8_8_;
          auVar108._16_8_ = auVar80._16_8_ + auVar107._16_8_;
          auVar108._24_8_ = auVar80._24_8_ + auVar107._24_8_;
          auVar80 = vpermpd_avx2(auVar108,0x39);
          auVar109._0_8_ = auVar80._0_8_ + auVar108._0_8_;
          auVar109._8_8_ = auVar80._8_8_ + auVar108._8_8_;
          auVar109._16_8_ = auVar80._16_8_ + auVar108._16_8_;
          auVar109._24_8_ = auVar80._24_8_ + auVar108._24_8_;
          auVar103 = vunpcklpd_avx(local_3b8,local_1b8._0_16_);
          auVar30 = vunpcklpd_avx(local_288,local_448);
          auVar180._16_16_ = auVar103;
          auVar180._0_16_ = auVar30;
          auVar45 = vunpcklpd_avx(local_458,auVar191);
          auVar80 = vcmppd_avx(ZEXT832(0) << 0x40,auVar109,2);
          auVar80 = vpshufb_avx2(auVar80,
                                 ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                                );
          auVar121._4_4_ = _UNK_150b51304;
          auVar121._0_4_ = ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
          auVar121._8_4_ = _UNK_150b51308;
          auVar121._12_4_ = _UNK_150b5130c;
          auVar121._16_4_ = _UNK_150b51310;
          auVar121._20_4_ = _UNK_150b51314;
          auVar121._24_4_ = _UNK_150b51318;
          auVar121._28_4_ = _UNK_150b5131c;
          auVar80 = vblendvps_avx(ZEXT832(0) << 0x40,auVar121,auVar80);
          auVar174 = vunpcklpd_avx(auVar185,auVar29);
          auVar110._16_16_ = auVar45;
          auVar110._0_16_ = auVar174;
          auVar106 = vsubpd_avx(auVar110,auVar180);
          dVar114 = (double)fVar81;
          auVar92._0_8_ = dVar114 * auVar106._0_8_ + auVar30._0_8_;
          auVar92._8_8_ = dVar114 * auVar106._8_8_ + auVar30._8_8_;
          auVar97._16_8_ = dVar114 * auVar106._16_8_ + auVar103._0_8_;
          auVar97._0_16_ = auVar92;
          auVar97._24_8_ = dVar114 * auVar106._24_8_ + auVar103._8_8_;
          auVar103 = vunpcklpd_avx(local_348,local_358);
          local_1b8._0_16_ = vshufpd_avx(auVar97._16_16_,auVar97._16_16_,1);
          auVar30 = vunpcklpd_avx(local_1f8,local_368);
          auVar45 = vshufpd_avx(auVar92,auVar92,1);
          auVar181._16_16_ = auVar103;
          auVar181._0_16_ = auVar30;
          auVar174 = vunpcklpd_avx(auVar51,auVar83);
          auVar175 = vunpcklpd_avx(auVar62,auVar34);
          auVar39._16_16_ = auVar174;
          auVar39._0_16_ = auVar175;
          auVar106 = vsubpd_avx(auVar39,auVar181);
          auVar194._0_8_ = dVar114 * auVar106._0_8_ + auVar30._0_8_;
          auVar194._8_8_ = dVar114 * auVar106._8_8_ + auVar30._8_8_;
          auVar196._16_8_ = dVar114 * auVar106._16_8_ + auVar103._0_8_;
          auVar196._0_16_ = auVar194;
          auVar196._24_8_ = dVar114 * auVar106._24_8_ + auVar103._8_8_;
          auVar30._0_8_ = __real_3ff0000000000000 - dVar114;
          auVar106 = vsubpd_avx(ZEXT832(0) << 0x40,auVar144);
          auVar57._0_4_ = ~auVar80._0_4_ & auVar106._0_4_;
          auVar57._4_4_ = ~auVar80._4_4_ & auVar106._4_4_;
          auVar57._8_4_ = ~auVar80._8_4_ & auVar106._8_4_;
          auVar57._12_4_ = ~auVar80._12_4_ & auVar106._12_4_;
          auVar57._16_4_ = ~auVar80._16_4_ & auVar106._16_4_;
          auVar57._20_4_ = ~auVar80._20_4_ & auVar106._20_4_;
          auVar57._24_4_ = ~auVar80._24_4_ & auVar106._24_4_;
          auVar57._28_4_ = ~auVar80._28_4_ & auVar106._28_4_;
          auVar58._0_8_ = (ulonglong)auVar142._0_8_ & auVar80._0_8_;
          auVar58._8_8_ = (ulonglong)auVar142._8_8_ & auVar80._8_8_;
          auVar58._16_8_ = (ulonglong)auVar139._0_8_ & auVar80._16_8_;
          auVar58._24_8_ = (ulonglong)auVar139._8_8_ & auVar80._24_8_;
          auVar58 = auVar58 | auVar57;
          auVar175 = vunpcklpd_avx(local_418,local_3d8);
          auVar185 = vunpcklpd_avx(auVar22,local_408);
          auVar190 = vunpcklpd_avx(local_3e8,local_398);
          auVar29 = vunpcklpd_avx(local_318,local_378);
          auVar139._0_8_ = auVar190._0_8_ * auVar175._0_8_ + auVar29._0_8_ * auVar185._0_8_;
          auVar139._8_8_ = auVar190._8_8_ * auVar175._8_8_ + auVar29._8_8_ * auVar185._8_8_;
          auVar103 = vshufpd_avx(auVar139,auVar139,1);
          auVar195._0_8_ = auVar139._0_8_ + auVar103._0_8_;
          auVar139 = vshufpd_avx(auVar196._16_16_,auVar196._16_16_,1);
          auVar23._0_4_ = (float)auVar195._0_8_;
          auVar23._4_4_ = (int)((ulonglong)auVar195._0_8_ >> 0x20);
          auVar23._8_8_ = 0;
          dVar46 = dVar114 * auVar101._0_8_ + auVar30._0_8_ * auVar58._0_8_;
          dVar43 = dVar114 * auVar101._8_8_ + auVar30._0_8_ * auVar58._8_8_;
          dVar44 = dVar114 * auStack_328._0_8_ + auVar30._0_8_ * auVar58._16_8_;
          auVar30._0_8_ = dVar114 * auStack_328._8_8_ + auVar30._0_8_ * auVar58._24_8_;
          auVar158._0_4_ = __real_80000000 ^ (uint)(__real_3f800000 - fVar81);
          auVar158._4_4_ = __real_80000000;
          auVar158._8_4_ = __real_80000000;
          auVar158._12_4_ = __real_80000000;
          auVar103 = vcmpss_avx(ZEXT816(0) << 0x20,auVar23,2);
          auVar103 = vblendvps_avx(auVar158,ZEXT416((uint)(__real_3f800000 - fVar81)),auVar103);
          auVar140._0_8_ = dVar46 * dVar46 + dVar44 * dVar44;
          auVar140._8_8_ = dVar43 * dVar43 + auVar30._0_8_ * auVar30._0_8_;
          auVar101 = vshufpd_avx(auVar140,auVar140,1);
          auVar195._0_8_ = auVar140._0_8_ + auVar101._0_8_;
          auVar141._8_8_ = 0;
          auVar141._0_8_ = auVar195._0_8_;
          auVar195._0_8_ = __real_3ff0000000000000 / SQRT(auVar195._0_8_);
          auVar168._8_8_ = 0;
          auVar168._0_8_ = __real_3e45798ee2308c3a;
          auVar101 = vcmpsd_avx(auVar168,auVar141,6);
          auVar142._0_8_ = ~auVar101._0_8_ & __real_ffffffffffffffff;
          auVar186._0_8_ = auVar142._0_8_ & (ulonglong)(auVar195._0_8_ * dVar46);
          auVar186._8_8_ = auVar142._0_8_ & (ulonglong)(auVar195._0_8_ * dVar43);
          auVar187._16_8_ = auVar142._0_8_ & (ulonglong)(auVar195._0_8_ * dVar44);
          auVar187._0_16_ = auVar186;
          auVar187._24_8_ = auVar142._0_8_ & (ulonglong)(auVar195._0_8_ * auVar30._0_8_);
          auVar40._0_8_ =
               ~auVar142._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar40._8_8_ = ~auVar142._0_8_ & _UNK_150b54548;
          auVar40._16_8_ = ~auVar142._0_8_ & _UNK_150b54550;
          auVar40._24_8_ = ~auVar142._0_8_ & _UNK_150b54558;
          auVar23 = auVar187._16_16_ | auVar40._16_16_;
          auVar101 = vshufpd_avx(auVar194,auVar194,1);
          auVar174 = vshufps_avx(auVar23,auVar23,0x4e);
          local_338 = vshufps_avx(auVar186,auVar186,0x4e);
          auVar195._0_8_ = (double)auVar103._0_4_;
          auVar30._0_8_ = dVar114 * auVar29._0_8_ + auVar185._0_8_ * auVar195._0_8_;
          dVar46 = dVar114 * auVar29._8_8_ + auVar185._8_8_ * auVar195._0_8_;
          dVar43 = dVar114 * auVar190._0_8_ + auVar175._0_8_ * auVar195._0_8_;
          dVar44 = dVar114 * auVar190._8_8_ + auVar175._8_8_ * auVar195._0_8_;
          auVar103 = vunpcklpd_avx(local_3f8,auVar52);
          auVar59._16_8_ = dVar31;
          auVar59._0_16_ = auVar103;
          auVar59._24_8_ = 0;
          auVar103 = vunpcklpd_avx(auVar21,local_428);
          auVar67._16_16_ = local_3a8;
          auVar67._0_16_ = auVar103;
          auVar80 = vsubpd_avx(auVar59,auVar67);
          local_238._0_8_ = dVar114 * auVar80._0_8_ + auVar103._0_8_;
          local_238._8_8_ = dVar114 * auVar80._8_8_ + auVar103._8_8_;
          auVar52._0_8_ = auVar30._0_8_ * auVar30._0_8_ + dVar43 * dVar43;
          auVar52._8_8_ = dVar46 * dVar46 + dVar44 * dVar44;
          auVar103 = vshufpd_avx(auVar52,auVar52,1);
          auVar195._0_8_ = auVar52._0_8_ + auVar103._0_8_;
          auVar63._8_8_ = 0;
          auVar63._0_8_ = __real_3e45798ee2308c3a;
          auVar53._8_8_ = 0;
          auVar53._0_8_ = auVar195._0_8_;
          auVar103 = vcmpsd_avx(auVar63,auVar53,6);
          auVar142._0_8_ = ~auVar103._0_8_ & __real_ffffffffffffffff;
          auVar195._0_8_ = __real_3ff0000000000000 / SQRT(auVar195._0_8_);
          local_318._0_8_ = (ulonglong)(auVar30._0_8_ * auVar195._0_8_) & auVar142._0_8_;
          local_318._8_8_ = (double)((ulonglong)(dVar46 * auVar195._0_8_) & auVar142._0_8_);
          auVar182._16_8_ = (ulonglong)(dVar43 * auVar195._0_8_) & auVar142._0_8_;
          auVar182._0_16_ = local_318;
          auVar182._24_8_ = (ulonglong)(dVar44 * auVar195._0_8_) & auVar142._0_8_;
          auVar41._0_8_ =
               ~auVar142._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar41._8_8_ = ~auVar142._0_8_ & _UNK_150b54548;
          auVar41._16_8_ = ~auVar142._0_8_ & _UNK_150b54550;
          auVar41._24_8_ = ~auVar142._0_8_ & _UNK_150b54558;
          local_438 = auVar182._16_16_ | auVar41._16_16_;
          local_458 = vshufps_avx(local_318,local_318,0x4e);
          local_2f8 = vshufps_avx(local_438,local_438,0x4e);
          local_428 = vshufpd_avx(local_238,local_238,1);
          auVar142._0_8_ = auVar186._0_8_;
          local_3b8._0_8_ = auVar97._16_8_;
          auVar195._0_8_ = auVar92._0_8_;
          local_388._0_8_ = auVar23._0_8_;
          local_3c8._0_8_ = auVar174._0_8_;
          local_1f8._0_8_ = auVar194._0_8_;
          local_368._0_8_ = auVar101._0_8_;
          local_348._0_8_ = auVar196._16_8_;
          local_358._0_8_ = auVar139._0_8_;
          auVar30._0_8_ = dVar114 * auVar80._16_8_ + dVar136;
          local_448._0_8_ = auVar45._0_8_;
        }
        *(longlong *)(param_4 + lVar17 * 8) = auVar22._0_8_;
        *(undefined8 *)(param_4 + 8 + lVar17 * 8) = local_408._0_8_;
        *(undefined8 *)(param_4 + 0x10 + lVar17 * 8) = local_418._0_8_;
        *(undefined8 *)(param_4 + 0x18 + lVar17 * 8) = local_3d8._0_8_;
        *(undefined8 *)(param_6 + lVar17 * 8) = local_218;
        *(undefined8 *)(param_6 + 8 + lVar17 * 8) = local_378._0_8_;
        *(undefined8 *)(param_6 + 0x10 + lVar17 * 8) = local_3e8._0_8_;
        *(undefined8 *)(param_6 + 0x18 + lVar17 * 8) = local_398._0_8_;
        *(longlong *)(param_5 + lVar18) = auVar21._0_8_;
        *(undefined8 *)(param_5 + 8 + lVar18) = uVar47;
        *(double *)(param_5 + 0x10 + lVar18) = dVar136;
        *(undefined8 *)(param_7 + lVar18) = local_3f8._0_8_;
        *(undefined8 *)(param_7 + 8 + lVar18) = local_258._0_8_;
        *(double *)(param_7 + 0x10 + lVar18) = dVar31;
        if (iVar8 == -1) {
          uVar47 = local_1b8._0_8_;
        }
        else {
          pdVar1 = (double *)(param_8 + lVar19 * 0x20);
          auVar28._0_8_ =
               ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar1;
          auVar28._8_8_ = _UNK_150b543c8 * pdVar1[1];
          auVar28._16_8_ = _UNK_150b543d0 * pdVar1[2];
          auVar28._24_8_ = _UNK_150b543d8 * pdVar1[3];
          auVar80 = vpermpd_avx2(auVar28,0xff);
          auVar103 = vunpcklpd_avx(local_318,local_458);
          auVar101 = vunpcklpd_avx(local_438,local_2f8);
          auVar45 = vunpcklpd_avx(local_2f8,local_438);
          auVar142 = vunpcklpd_avx(local_458,local_318);
          auVar106 = vpermpd_avx2(auVar28,0x55);
          auVar86 = vpermpd_avx2(auVar28,0xaa);
          dVar46 = auVar142._0_8_ * auVar86._0_8_ *
                   ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                   auVar101._0_8_ * auVar106._0_8_ *
                   ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                   auVar80._0_8_ * auVar103._0_8_ +
                   auVar45._0_8_ * auVar28._0_8_ *
                   ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
          dVar31 = auVar142._8_8_ * auVar86._8_8_ * _UNK_150b54428 +
                   auVar101._8_8_ * auVar106._8_8_ * _UNK_150b54408 +
                   auVar80._8_8_ * auVar103._8_8_ + auVar45._8_8_ * auVar28._0_8_ * _UNK_150b543e8;
          dVar43 = auVar45._0_8_ * auVar86._16_8_ * _UNK_150b54430 +
                   auVar103._0_8_ * auVar106._16_8_ * _UNK_150b54410 +
                   auVar80._16_8_ * auVar101._0_8_ + auVar142._0_8_ * auVar28._0_8_ * _UNK_150b543f0
          ;
          dVar44 = auVar45._8_8_ * auVar86._24_8_ * _UNK_150b54438 +
                   auVar103._8_8_ * auVar106._24_8_ * _UNK_150b54418 +
                   auVar80._24_8_ * auVar101._8_8_ + auVar142._8_8_ * auVar28._0_8_ * _UNK_150b543f8
          ;
          auVar195._0_8_ = *(double *)(param_9 + 0x10 + lVar19 * 0x18);
          auVar103 = *(undefined1 (*) [16])(param_9 + lVar19 * 0x18);
          auVar68._16_8_ = auVar195._0_8_;
          auVar68._0_16_ = auVar103;
          auVar68._24_8_ = 0;
          dVar136 = auVar103._0_8_;
          auVar98._0_8_ = (ulonglong)dVar136 & __real_7fffffffffffffff;
          dVar114 = auVar103._8_8_;
          auVar98._8_8_ = (ulonglong)dVar114 & __real_7fffffffffffffff;
          auVar98._16_8_ = (ulonglong)auVar195._0_8_ & __real_7fffffffffffffff;
          auVar98._24_8_ = 0;
          auVar145._8_8_ = __real_3e45798ee2308c3a;
          auVar145._0_8_ = __real_3e45798ee2308c3a;
          auVar145._16_8_ = __real_3e45798ee2308c3a;
          auVar145._24_8_ = __real_3e45798ee2308c3a;
          auVar80 = vcmppd_avx(auVar98,auVar145,2);
          auVar106 = vpcmpeqd_avx2(ZEXT1632(local_458),ZEXT1632(local_458));
          auVar80 = vpackssdw_avx2(auVar80,auVar106);
          auVar105 = vpermq_avx2(auVar80,0xd8);
          auVar121 = ZEXT832(0) << 0x40;
          auVar111._8_8_ = __real_46c8a6e32246c99c;
          auVar111._0_8_ = __real_46c8a6e32246c99c;
          auVar111._16_8_ = __real_46c8a6e32246c99c;
          auVar111._24_8_ = __real_46c8a6e32246c99c;
          auVar80 = vcmppd_avx(auVar68,auVar111,2);
          auVar106 = vpackssdw_avx2(auVar80,auVar106);
          auVar122._8_8_ = __real_3914c4e977ba1f5c;
          auVar122._0_8_ = __real_3914c4e977ba1f5c;
          auVar122._16_8_ = __real_3914c4e977ba1f5c;
          auVar122._24_8_ = __real_3914c4e977ba1f5c;
          auVar80 = vcmppd_avx(auVar122,auVar68,2);
          auVar80 = vpackssdw_avx2(auVar80,ZEXT832(0) << 0x40);
          auVar86 = vpand_avx2(auVar80,auVar106);
          auVar86 = vpermq_avx2(auVar86,0xd8);
          auVar86 = vpandn_avx2(auVar105,auVar86);
          iVar12 = vmovmskps_avx(auVar86);
          if (iVar12 == 0) {
            auVar103 = ZEXT816(0);
LAB_140aaa8e7:
            auVar10._4_4_ = _UNK_150b51304;
            auVar10._0_4_ = ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
            auVar10._8_4_ = _UNK_150b51308;
            auVar10._12_4_ = _UNK_150b5130c;
            auVar10._16_4_ = _UNK_150b51310;
            auVar10._20_4_ = _UNK_150b51314;
            auVar10._24_4_ = _UNK_150b51318;
            auVar10._28_4_ = _UNK_150b5131c;
            dVar133 = auVar103._8_8_;
            auVar99._0_8_ = (ulonglong)dVar136 & __real_7fe0000000000000;
            auVar99._8_8_ = (ulonglong)dVar114 & __real_7fe0000000000000;
            auVar99._16_8_ = (ulonglong)auVar195._0_8_ & __real_7fe0000000000000;
            auVar99._24_8_ = 0;
            auVar126._8_8_ = __real_7fcfffffffffffff;
            auVar126._0_8_ = __real_7fcfffffffffffff;
            auVar126._16_8_ = __real_7fcfffffffffffff;
            auVar126._24_8_ = __real_7fcfffffffffffff;
            auVar86 = vpsubq_avx2(auVar126,auVar99);
            auVar39 = vpsubq_avx2(auVar126,ZEXT832((ulonglong)dVar133 & __real_7fe0000000000000) <<
                                           0x40);
            auVar127._0_8_ = dVar136 * auVar86._0_8_;
            auVar127._8_8_ = dVar114 * auVar86._8_8_;
            auVar127._16_8_ = auVar195._0_8_ * auVar86._16_8_;
            auVar127._24_8_ = auVar86._24_8_ * 0.0;
            auVar101 = vcvtpd2ps_avx(auVar127);
            auVar146._0_8_ = auVar39._0_8_ * 0.0;
            auVar146._8_8_ = dVar133 * auVar39._8_8_;
            auVar146._16_8_ = auVar39._16_8_ * 0.0;
            auVar146._24_8_ = auVar39._24_8_ * 0.0;
            auVar45 = vcvtpd2ps_avx(auVar146);
            auVar128._16_16_ = auVar45;
            auVar128._0_16_ = auVar101;
            auVar80 = vrcpps_avx(auVar128);
            auVar116._0_4_ = auVar80._0_4_ * (-(auVar80._0_4_ * auVar101._0_4_) + __real_40000000);
            auVar116._4_4_ = auVar80._4_4_ * (-(auVar80._4_4_ * auVar101._4_4_) + __real_40000000);
            auVar116._8_4_ = auVar80._8_4_ * (-(auVar80._8_4_ * auVar101._8_4_) + __real_40000000);
            auVar116._12_4_ =
                 auVar80._12_4_ * (-(auVar80._12_4_ * auVar101._12_4_) + __real_40000000);
            auVar129._16_4_ = auVar80._16_4_ * (-(auVar80._16_4_ * auVar45._0_4_) + __real_40000000)
            ;
            auVar129._0_16_ = auVar116;
            auVar129._20_4_ = auVar80._20_4_ * (-(auVar80._20_4_ * auVar45._4_4_) + __real_40000000)
            ;
            auVar129._24_4_ = auVar80._24_4_ * (-(auVar80._24_4_ * auVar45._8_4_) + __real_40000000)
            ;
            auVar129._28_4_ =
                 auVar80._28_4_ * (-(auVar80._28_4_ * auVar45._12_4_) + __real_40000000);
            auVar80 = vcvtps2pd_avx(auVar116);
            auVar106 = vcvtps2pd_avx(auVar129._16_16_);
            dVar148 = auVar106._0_8_ * auVar39._0_8_;
            dVar149 = auVar106._8_8_ * auVar39._8_8_;
            dVar150 = auVar106._16_8_ * auVar39._16_8_;
            dVar151 = auVar106._24_8_ * auVar39._24_8_;
            dVar131 = auVar80._0_8_ * auVar86._0_8_;
            dVar132 = auVar80._8_8_ * auVar86._8_8_;
            dVar134 = auVar80._16_8_ * auVar86._16_8_;
            dVar137 = auVar80._24_8_ * auVar86._24_8_;
            dVar148 = (-(dVar148 * 0.0) + __real_4000000000000000) * dVar148;
            dVar149 = (-(dVar133 * dVar149) + __real_4000000000000000) * dVar149;
            dVar150 = (-(dVar150 * 0.0) + __real_4000000000000000) * dVar150;
            dVar151 = (-(dVar151 * 0.0) + __real_4000000000000000) * dVar151;
            dVar131 = (-(dVar136 * dVar131) + __real_4000000000000000) * dVar131;
            dVar132 = (-(dVar114 * dVar132) + __real_4000000000000000) * dVar132;
            dVar134 = (-(auVar195._0_8_ * dVar134) + __real_4000000000000000) * dVar134;
            dVar137 = (-(dVar137 * 0.0) + __real_4000000000000000) * dVar137;
            auVar69._0_8_ = dVar131 * (-(dVar131 * dVar136) + __real_4000000000000000);
            auVar69._8_8_ = dVar132 * (-(dVar132 * dVar114) + __real_4000000000000000);
            auVar69._16_8_ = dVar134 * (-(dVar134 * auVar195._0_8_) + __real_4000000000000000);
            auVar69._24_8_ = dVar137 * (-(dVar137 * 0.0) + __real_4000000000000000);
            auVar80 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                  ,auVar121 ^ auVar10);
            local_2b8 = vblendvps_avx(local_2b8,auVar69,auVar80);
            auVar70._0_8_ = (-(dVar148 * 0.0) + __real_4000000000000000) * dVar148;
            auVar70._8_8_ = (-(dVar133 * dVar149) + __real_4000000000000000) * dVar149;
            auVar70._16_8_ = (-(dVar150 * 0.0) + __real_4000000000000000) * dVar150;
            auVar70._24_8_ = (-(dVar151 * 0.0) + __real_4000000000000000) * dVar151;
            auVar80 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                  ,auVar121 ^ auVar10);
            local_1d8 = vblendvps_avx(local_1d8,auVar70,auVar80);
          }
          else {
            auVar86 = vcmppd_avx(auVar98,auVar145,6);
            auVar86 = vpackssdw_avx2(auVar86,ZEXT832(0) << 0x40);
            auVar103 = vpackssdw_avx(auVar86._0_16_,auVar86._16_16_);
            auVar45 = vpshufd_avx(auVar103,0xd8);
            auVar103 = vpackssdw_avx(auVar106._0_16_,auVar106._16_16_);
            auVar101 = vpackssdw_avx(auVar80._0_16_,auVar80._16_16_);
            auVar103 = vpand_avx(auVar103,auVar101);
            auVar142 = vpshufd_avx(auVar103,0xd8);
            auVar80 = vpmovzxwd_avx2(auVar142);
            auVar86 = vpslld_avx2(auVar80,0x1f);
            auVar103 = vcvtpd2ps_avx(auVar68);
            auVar101 = vcvtpd2ps_avx(
                                    ___ymm_0000000000000000000000000000000000000000000000000000000000000000
                                    );
            auVar123._16_16_ = auVar101;
            auVar123._0_16_ = auVar103;
            auVar80 = vrcpps_avx(auVar123);
            auVar115._0_4_ = auVar80._0_4_ * (-(auVar80._0_4_ * auVar103._0_4_) + __real_40000000);
            auVar115._4_4_ = auVar80._4_4_ * (-(auVar80._4_4_ * auVar103._4_4_) + __real_40000000);
            auVar115._8_4_ = auVar80._8_4_ * (-(auVar80._8_4_ * auVar103._8_4_) + __real_40000000);
            auVar115._12_4_ =
                 auVar80._12_4_ * (-(auVar80._12_4_ * auVar103._12_4_) + __real_40000000);
            auVar124._16_4_ =
                 auVar80._16_4_ * (-(auVar80._16_4_ * auVar101._0_4_) + __real_40000000);
            auVar124._0_16_ = auVar115;
            auVar124._20_4_ =
                 auVar80._20_4_ * (-(auVar80._20_4_ * auVar101._4_4_) + __real_40000000);
            auVar124._24_4_ =
                 auVar80._24_4_ * (-(auVar80._24_4_ * auVar101._8_4_) + __real_40000000);
            auVar124._28_4_ =
                 auVar80._28_4_ * (-(auVar80._28_4_ * auVar101._12_4_) + __real_40000000);
            auVar80 = vcvtps2pd_avx(auVar124._16_16_);
            auVar106 = vcvtps2pd_avx(auVar115);
            auVar121 = vpsrad_avx2(auVar86,0x1f);
            dVar148 = (-(auVar80._0_8_ * 0.0) + __real_4000000000000000) * auVar80._0_8_;
            dVar149 = (-(auVar80._8_8_ * 0.0) + __real_4000000000000000) * auVar80._8_8_;
            dVar150 = (-(auVar80._16_8_ * 0.0) + __real_4000000000000000) * auVar80._16_8_;
            dVar151 = (-(auVar80._24_8_ * 0.0) + __real_4000000000000000) * auVar80._24_8_;
            dVar131 = (-(dVar136 * auVar106._0_8_) + __real_4000000000000000) * auVar106._0_8_;
            dVar132 = (-(dVar114 * auVar106._8_8_) + __real_4000000000000000) * auVar106._8_8_;
            dVar134 = (-(auVar195._0_8_ * auVar106._16_8_) + __real_4000000000000000) *
                      auVar106._16_8_;
            dVar137 = (-(auVar106._24_8_ * 0.0) + __real_4000000000000000) * auVar106._24_8_;
            auVar125._0_8_ = dVar131 * (-(dVar136 * dVar131) + __real_4000000000000000);
            auVar125._8_8_ = dVar132 * (-(dVar114 * dVar132) + __real_4000000000000000);
            auVar125._16_8_ = dVar134 * (-(auVar195._0_8_ * dVar134) + __real_4000000000000000);
            auVar125._24_8_ = dVar137 * (-(dVar137 * 0.0) + __real_4000000000000000);
            auVar80 = vpmovsxdq_avx2(auVar86._0_16_);
            local_2b8 = vblendvps_avx(local_2b8,auVar125,auVar80);
            auVar112._0_8_ = dVar148 * (-(dVar148 * 0.0) + __real_4000000000000000);
            auVar112._8_8_ = dVar149 * (-(dVar149 * 0.0) + __real_4000000000000000);
            auVar112._16_8_ = dVar150 * (-(dVar150 * 0.0) + __real_4000000000000000);
            auVar112._24_8_ = dVar151 * (-(dVar151 * 0.0) + __real_4000000000000000);
            auVar80 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                  ,auVar121);
            local_1d8 = vblendvps_avx(local_1d8,auVar112,auVar80);
            auVar103 = vpsllw_avx(auVar45,0xf);
            auVar103 = vpacksswb_avx(auVar103,auVar103);
            if ((byte)(SUB161(auVar103 >> 7,0) & 1 | (SUB161(auVar103 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar103 >> 0x17,0) & 1) << 2 | (SUB161(auVar103 >> 0x1f,0) & 1) << 3
                       | (SUB161(auVar103 >> 0x27,0) & 1) << 4 |
                       (SUB161(auVar103 >> 0x2f,0) & 1) << 5 | (SUB161(auVar103 >> 0x37,0) & 1) << 6
                      | SUB161(auVar103 >> 0x3f,0) << 7) != (byte)iVar12) {
              auVar103 = vpand_avx(auVar142,auVar45);
              auVar80 = vpmovzxwd_avx2(auVar103);
              auVar80 = vpslld_avx2(auVar80,0x1f);
              auVar121 = vpsrad_avx2(auVar80,0x1f);
              auVar103 = ZEXT816(0) << 0x40;
              goto LAB_140aaa8e7;
            }
            auVar103 = ZEXT816(0) << 0x40;
          }
          auVar64._0_8_ = dVar46 * dVar46 + dVar43 * dVar43;
          auVar64._8_8_ = dVar31 * dVar31 + dVar44 * dVar44;
          auVar101 = vshufpd_avx(auVar64,auVar64,1);
          auVar195._0_8_ = auVar64._0_8_ + auVar101._0_8_;
          auVar74._8_8_ = 0;
          auVar74._0_8_ = __real_3e45798ee2308c3a;
          auVar65._8_8_ = 0;
          auVar65._0_8_ = auVar195._0_8_;
          auVar101 = vcmpsd_avx(auVar74,auVar65,6);
          auVar174._0_8_ = ~auVar101._0_8_ & __real_ffffffffffffffff;
          auVar195._0_8_ = __real_3ff0000000000000 / SQRT(auVar195._0_8_);
          auVar142._0_8_ = (ulonglong)(dVar46 * auVar195._0_8_) & auVar174._0_8_;
          auVar142._8_8_ = (ulonglong)(dVar31 * auVar195._0_8_) & auVar174._0_8_;
          auVar147._16_8_ = (ulonglong)(dVar43 * auVar195._0_8_) & auVar174._0_8_;
          auVar147._0_16_ = auVar142;
          auVar147._24_8_ = (ulonglong)(dVar44 * auVar195._0_8_) & auVar174._0_8_;
          auVar42._0_8_ =
               ~auVar174._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar42._8_8_ = ~auVar174._0_8_ & _UNK_150b54548;
          auVar42._16_8_ = ~auVar174._0_8_ & _UNK_150b54550;
          auVar42._24_8_ = ~auVar174._0_8_ & _UNK_150b54558;
          auVar45 = auVar147._16_16_ | auVar42._16_16_;
          auVar101 = vshufps_avx(auVar142,auVar142,0x4e);
          local_338 = auVar101;
          local_388._0_8_ = auVar45._0_8_;
          auVar101 = vshufps_avx(auVar45,auVar45,0x4e);
          local_3c8._0_8_ = auVar101._0_8_;
          auVar80 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                ,auVar105);
          auVar80 = vblendvps_avx(local_2b8,ZEXT1632(auVar103),auVar80);
          auVar103 = vunpcklpd_avx(local_238,local_428);
          auVar195._0_8_ = auVar103._0_8_ * auVar80._0_8_;
          auVar195._8_8_ = auVar103._8_8_ * auVar80._8_8_;
          local_3b8._0_8_ = auVar30._0_8_ * auVar80._16_8_;
          auVar103 = vshufpd_avx(auVar195,auVar195,1);
          local_448._0_8_ = auVar103._0_8_;
          uVar47 = 0;
        }
        *(undefined8 *)(param_8 + lVar17 * 8) = local_318._0_8_;
        *(undefined8 *)(param_8 + 8 + lVar17 * 8) = local_458._0_8_;
        *(undefined8 *)(param_8 + 0x10 + lVar17 * 8) = local_438._0_8_;
        *(undefined8 *)(param_8 + 0x18 + lVar17 * 8) = local_2f8._0_8_;
        *(undefined8 *)(param_9 + lVar18) = local_238._0_8_;
        *(undefined8 *)(param_9 + 8 + lVar18) = local_428._0_8_;
        *(double *)(param_9 + 0x10 + lVar18) = auVar30._0_8_;
        *(ulonglong *)(param_1 + lVar18 * 4) = auVar142._0_8_;
        *(undefined8 *)(param_1 + 8 + lVar18 * 4) = local_338._0_8_;
        *(undefined8 *)(param_1 + 0x10 + lVar18 * 4) = local_388._0_8_;
        *(undefined8 *)(param_1 + 0x18 + lVar18 * 4) = local_3c8._0_8_;
        *(undefined8 *)(param_1 + 0x20 + lVar18 * 4) = local_1f8._0_8_;
        *(undefined8 *)(param_1 + 0x28 + lVar18 * 4) = local_368._0_8_;
        *(undefined8 *)(param_1 + 0x30 + lVar18 * 4) = local_348._0_8_;
        *(undefined8 *)(param_1 + 0x38 + lVar18 * 4) = local_358._0_8_;
        *(double *)(param_1 + 0x40 + lVar18 * 4) = auVar195._0_8_;
        *(undefined8 *)(param_1 + 0x48 + lVar18 * 4) = local_448._0_8_;
        *(undefined8 *)(param_1 + 0x50 + lVar18 * 4) = local_3b8._0_8_;
        *(undefined8 *)(param_1 + 0x58 + lVar18 * 4) = uVar47;
        iVar16 = iVar16 + 1;
        lVar18 = lVar18 + 0x18;
        lVar17 = lVar17 + 4;
      } while ((ulonglong)param_13 * 0x18 != lVar18);
    }
  }
  else if (0 < (int)param_13) {
    lVar17 = 0;
    lVar18 = 0;
    iVar16 = 0;
    do {
      iVar12 = *(int *)(param_11 + lVar17 * 2);
      iVar8 = *(int *)(param_12 + lVar17);
      lVar19 = (longlong)iVar8;
      auVar174._0_8_ = *(ulonglong *)(param_2 + lVar18 * 4);
      local_1f8._0_8_ = *(double *)(param_2 + 0x20 + lVar18 * 4);
      local_1f8._8_8_ = 0;
      local_368._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar18 * 4);
      local_368._8_8_ = 0;
      local_348._0_8_ = *(double *)(param_2 + 0x30 + lVar18 * 4);
      local_348._8_8_ = 0;
      local_358._0_8_ = *(ulonglong *)(param_2 + 0x38 + lVar18 * 4);
      local_358._8_8_ = 0;
      auVar30._0_8_ = *(double *)(param_2 + 0x40 + lVar18 * 4);
      local_2f8._8_8_ = 0;
      local_2f8._0_8_ = auVar30._0_8_;
      local_238._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar18 * 4);
      local_338._8_8_ = 0;
      local_338._0_8_ = local_238._0_8_;
      auVar195._0_8_ = *(double *)(param_2 + 0x50 + lVar18 * 4);
      local_2b8._8_8_ = 0;
      local_2b8._0_8_ = auVar195._0_8_;
      local_3d8._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar18 * 4);
      local_3d8._8_8_ = 0;
      auVar100 = ZEXT864(*(ulonglong *)(param_2 + 0x10 + lVar18 * 4));
      auVar113 = ZEXT864(*(ulonglong *)(param_2 + 8 + lVar18 * 4));
      auVar130 = ZEXT864(*(ulonglong *)(param_2 + 0x18 + lVar18 * 4));
      puVar13 = (ulonglong *)GetTransformFromArray(param_3,iVar12,iVar16);
      auVar142._0_8_ = *puVar13;
      auVar138._8_8_ = 0;
      auVar138._0_8_ = auVar142._0_8_;
      uVar2 = puVar13[1];
      auVar193._8_8_ = 0;
      auVar193._0_8_ = uVar2;
      uVar3 = puVar13[2];
      auVar165._8_8_ = 0;
      auVar165._0_8_ = uVar3;
      uVar4 = puVar13[3];
      local_448._8_8_ = 0;
      local_448._0_8_ = uVar4;
      dVar46 = (double)puVar13[8];
      auVar183._8_8_ = 0;
      auVar183._0_8_ = dVar46;
      auVar171._8_8_ = 0;
      auVar171._0_8_ = puVar13[9];
      auVar188._8_8_ = 0;
      auVar188._0_8_ = puVar13[10];
      auVar103 = auVar100._0_16_;
      local_378._0_8_ = auVar100._0_8_;
      auVar101 = auVar113._0_16_;
      local_3e8._0_8_ = auVar113._0_8_;
      auVar45 = auVar130._0_16_;
      local_3f8._0_8_ = auVar130._0_8_;
      if (lVar19 == -1) {
        auVar32._8_8_ = 0;
        auVar32._0_8_ = auVar174._0_8_;
        auVar139 = vunpcklpd_avx(auVar32,auVar101);
        auVar175 = vunpcklpd_avx(auVar103,auVar45);
        auVar185 = vunpcklpd_avx(auVar45,auVar103);
        auVar190 = vunpcklpd_avx(auVar101,auVar32);
        local_258._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar190._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar175._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar185._0_8_ * 0.0 + auVar139._0_8_;
        local_258._8_8_ =
             _UNK_150b54428 * auVar190._8_8_ * 0.0 +
             _UNK_150b54408 * auVar175._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar185._8_8_ * 0.0 + auVar139._8_8_;
        auVar25._16_8_ =
             _UNK_150b54430 * auVar185._0_8_ * 0.0 +
             _UNK_150b54410 * auVar139._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar190._0_8_ * 0.0 + auVar175._0_8_;
        auVar25._0_16_ = local_258;
        auVar25._24_8_ =
             _UNK_150b54438 * auVar185._8_8_ * 0.0 +
             _UNK_150b54418 * auVar139._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar190._8_8_ * 0.0 + auVar175._8_8_;
        local_458 = vshufpd_avx(local_258,local_258,1);
        auVar29 = auVar25._16_16_;
        local_3b8 = vshufpd_avx(auVar29,auVar29,1);
        auVar139 = vunpcklpd_avx(auVar138,auVar193);
        auVar175 = vunpcklpd_avx(auVar165,local_448);
        auVar185 = vunpcklpd_avx(local_448,auVar165);
        auVar190 = vunpcklpd_avx(auVar193,auVar138);
        local_188._0_8_ =
             auVar190._0_8_ * 0.0 *
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar175._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar185._0_8_ * 0.0 + auVar139._0_8_;
        local_188._8_8_ =
             auVar190._8_8_ * 0.0 * _UNK_150b54428 +
             _UNK_150b54408 * auVar175._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar185._8_8_ * 0.0 + auVar139._8_8_;
        auVar76._16_8_ =
             auVar185._0_8_ * 0.0 * _UNK_150b54430 +
             _UNK_150b54410 * auVar139._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar190._0_8_ * 0.0 + auVar175._0_8_;
        auVar76._0_16_ = local_188;
        auVar76._24_8_ =
             auVar185._8_8_ * 0.0 * _UNK_150b54438 +
             _UNK_150b54418 * auVar139._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar190._8_8_ * 0.0 + auVar175._8_8_;
        local_3c8 = vshufpd_avx(local_188,local_188,1);
        local_408 = auVar76._16_16_;
        local_418 = vshufpd_avx(local_408,local_408,1);
        local_238._8_8_ = 0;
        local_388 = local_2f8;
        local_318 = auVar183;
        auVar20 = auVar188;
        local_3a8 = auVar171;
        local_438 = local_238;
      }
      else {
        lVar15 = lVar19 * 0x20;
        dVar31 = *(double *)(param_4 + 0x18 + lVar15);
        auVar152._8_8_ = 0;
        auVar152._0_8_ = auVar174._0_8_;
        auVar139 = vunpcklpd_avx(auVar152,auVar101);
        auVar175 = vunpcklpd_avx(auVar103,auVar45);
        dVar43 = *(double *)(param_4 + lVar15);
        auVar185 = vunpcklpd_avx(auVar45,auVar103);
        auVar190 = vunpcklpd_avx(auVar101,auVar152);
        dVar44 = *(double *)(param_4 + 8 + lVar15);
        dVar136 = *(double *)(param_4 + 0x10 + lVar15);
        local_258._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar190._0_8_ * dVar136 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar175._0_8_ * dVar44 +
             dVar31 * auVar139._0_8_ +
             auVar185._0_8_ * dVar43 * ___xmm_bff00000000000003ff0000000000000;
        local_258._8_8_ =
             _UNK_150b54428 * auVar190._8_8_ * dVar136 +
             _UNK_150b54408 * auVar175._8_8_ * dVar44 +
             dVar31 * auVar139._8_8_ + auVar185._8_8_ * dVar43 * _UNK_15076c6f8;
        auVar24._16_8_ =
             _UNK_150b54430 * auVar185._0_8_ * dVar136 +
             _UNK_150b54410 * auVar139._0_8_ * dVar44 +
             dVar31 * auVar175._0_8_ +
             auVar190._0_8_ * dVar43 * ___xmm_bff00000000000003ff0000000000000;
        auVar24._0_16_ = local_258;
        auVar24._24_8_ =
             _UNK_150b54438 * auVar185._8_8_ * dVar136 +
             _UNK_150b54418 * auVar139._8_8_ * dVar44 +
             dVar31 * auVar175._8_8_ + auVar190._8_8_ * dVar43 * _UNK_15076c6f8;
        local_458 = vshufpd_avx(local_258,local_258,1);
        auVar29 = auVar24._16_16_;
        local_3b8 = vshufpd_avx(auVar29,auVar29,1);
        dVar31 = *(double *)(param_6 + 0x18 + lVar15);
        auVar139 = vunpcklpd_avx(auVar138,auVar193);
        auVar175 = vunpcklpd_avx(auVar165,local_448);
        dVar43 = *(double *)(param_6 + lVar15);
        auVar185 = vunpcklpd_avx(local_448,auVar165);
        auVar190 = vunpcklpd_avx(auVar193,auVar138);
        dVar44 = *(double *)(param_6 + 8 + lVar15);
        dVar136 = *(double *)(param_6 + 0x10 + lVar15);
        local_188._0_8_ =
             auVar190._0_8_ * dVar136 *
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar175._0_8_ * dVar44 +
             dVar31 * auVar139._0_8_ +
             dVar43 * auVar185._0_8_ * ___xmm_bff00000000000003ff0000000000000;
        local_188._8_8_ =
             auVar190._8_8_ * dVar136 * _UNK_150b54428 +
             _UNK_150b54408 * auVar175._8_8_ * dVar44 +
             dVar31 * auVar139._8_8_ + dVar43 * auVar185._8_8_ * _UNK_15076c6f8;
        auVar75._16_8_ =
             auVar185._0_8_ * dVar136 * _UNK_150b54430 +
             _UNK_150b54410 * auVar139._0_8_ * dVar44 +
             dVar31 * auVar175._0_8_ +
             dVar43 * auVar190._0_8_ * ___xmm_bff00000000000003ff0000000000000;
        auVar75._0_16_ = local_188;
        auVar75._24_8_ =
             auVar185._8_8_ * dVar136 * _UNK_150b54438 +
             _UNK_150b54418 * auVar139._8_8_ * dVar44 +
             dVar31 * auVar175._8_8_ + dVar43 * auVar190._8_8_ * _UNK_15076c6f8;
        local_3c8 = vshufpd_avx(local_188,local_188,1);
        local_408 = auVar75._16_16_;
        lVar15 = lVar19 * 0x18;
        auVar139 = vunpcklpd_avx(local_2f8,local_338);
        local_388._0_8_ = auVar139._0_8_ * *(double *)(param_5 + lVar15);
        local_388._8_8_ = auVar139._8_8_ * ((double *)(param_5 + lVar15))[1];
        auVar195._0_8_ = auVar195._0_8_ * *(double *)(param_5 + 0x10 + lVar15);
        local_418 = vshufpd_avx(local_408,local_408,1);
        auVar139 = vunpcklpd_avx(auVar183,auVar171);
        local_318._0_8_ = auVar139._0_8_ * *(double *)(param_7 + lVar15);
        local_318._8_8_ = auVar139._8_8_ * ((double *)(param_7 + lVar15))[1];
        local_438 = vshufpd_avx(local_388,local_388,1);
        local_3a8 = vshufpd_avx(local_318,local_318,1);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = (double)puVar13[10] * *(double *)(param_7 + 0x10 + lVar15);
      }
      dVar31 = (double)puVar13[4];
      auVar33._8_8_ = 0;
      auVar33._0_8_ = dVar31;
      uVar5 = puVar13[5];
      auVar153._8_8_ = 0;
      auVar153._0_8_ = uVar5;
      dVar43 = (double)puVar13[6];
      auVar184._8_8_ = 0;
      auVar184._0_8_ = dVar43;
      auVar139 = vmaxss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_11 + 4 + lVar17 * 2)));
      uVar6 = puVar13[7];
      auVar48._8_8_ = 0;
      auVar48._0_8_ = uVar6;
      auVar175 = vminss_avx(auVar139,ZEXT416((uint)__real_3f800000));
      auVar139 = vmaxss_avx(auVar175,ZEXT416(*(uint *)(param_10 + (longlong)iVar12 * 4)));
      uVar7 = puVar13[0xb];
      auVar60._8_8_ = 0;
      auVar60._0_8_ = uVar7;
      *(int *)(param_10 + (longlong)iVar12 * 4) = auVar139._0_4_;
      fVar81 = auVar175._0_4_;
      uVar71 = local_318._0_8_;
      uVar47 = local_188._0_8_;
      local_288._0_8_ = auVar29._0_8_;
      local_218 = local_458._0_8_;
      local_238._0_8_ = local_438._0_8_;
      if (fVar81 <= __real_3727c5ac) {
        local_448 = local_3b8;
        local_1d8._0_16_ = auVar29;
        local_188 = local_258;
        local_318 = local_388;
        local_428._0_8_ = auVar195._0_8_;
      }
      else if (__real_3f7fff58 <= fVar81) {
        local_2b8._0_16_ = auVar188;
        local_338 = auVar171;
        local_448 = local_418;
        local_1d8._0_16_ = local_408;
        local_458 = local_3c8;
        local_438 = local_3a8;
        auVar30._0_8_ = dVar46;
        auVar174._0_8_ = auVar142._0_8_;
        local_378._0_8_ = uVar3;
        local_3e8._0_8_ = uVar2;
        local_3f8._0_8_ = uVar4;
        local_3d8._0_8_ = uVar7;
        local_1f8._0_8_ = dVar31;
        local_368._0_8_ = uVar5;
        local_348._0_8_ = dVar43;
        local_358._0_8_ = uVar6;
        local_428._0_8_ = auVar20._0_8_;
      }
      else {
        auVar103 = vunpcklpd_avx(auVar103,auVar45);
        auVar102._8_8_ = 0;
        auVar102._0_8_ = auVar174._0_8_;
        auVar30 = vunpcklpd_avx(auVar102,auVar101);
        auVar104._16_16_ = auVar103;
        auVar104._0_16_ = auVar30;
        auVar101 = vunpcklpd_avx(auVar165,local_448);
        auVar142 = vunpcklpd_avx(auVar138,auVar193);
        auVar117._0_8_ = auVar30._0_8_ * auVar142._0_8_;
        auVar117._8_8_ = auVar30._8_8_ * auVar142._8_8_;
        auVar117._16_8_ = auVar103._0_8_ * auVar101._0_8_;
        auVar117._24_8_ = auVar103._8_8_ * auVar101._8_8_;
        auVar106 = vpermpd_avx2(auVar117,0x4e);
        auVar118._0_8_ = auVar117._0_8_ + auVar106._0_8_;
        auVar118._8_8_ = auVar117._8_8_ + auVar106._8_8_;
        auVar118._16_8_ = auVar117._16_8_ + auVar106._16_8_;
        auVar118._24_8_ = auVar117._24_8_ + auVar106._24_8_;
        auVar106 = vpermpd_avx2(auVar118,0x39);
        auVar119._0_8_ = auVar118._0_8_ + auVar106._0_8_;
        auVar119._8_8_ = auVar118._8_8_ + auVar106._8_8_;
        auVar119._16_8_ = auVar118._16_8_ + auVar106._16_8_;
        auVar119._24_8_ = auVar118._24_8_ + auVar106._24_8_;
        auVar45 = vunpcklpd_avx(local_2b8._0_16_,local_3d8);
        auVar139 = vunpcklpd_avx(local_2f8,local_338);
        auVar169._16_16_ = auVar45;
        auVar169._0_16_ = auVar139;
        auVar174 = vunpcklpd_avx(auVar188,auVar60);
        auVar106 = vcmppd_avx(ZEXT832(0) << 0x40,auVar119,2);
        auVar106 = vpshufb_avx2(auVar106,
                                ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                               );
        auVar9._4_4_ = _UNK_150b51304;
        auVar9._0_4_ = ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
        auVar9._8_4_ = _UNK_150b51308;
        auVar9._12_4_ = _UNK_150b5130c;
        auVar9._16_4_ = _UNK_150b51310;
        auVar9._20_4_ = _UNK_150b51314;
        auVar9._24_4_ = _UNK_150b51318;
        auVar9._28_4_ = _UNK_150b5131c;
        auVar106 = vblendvps_avx(ZEXT832(0) << 0x40,auVar9,auVar106);
        auVar175 = vunpcklpd_avx(auVar183,auVar171);
        auVar66._16_16_ = auVar174;
        auVar66._0_16_ = auVar175;
        auVar86 = vsubpd_avx(auVar66,auVar169);
        dVar136 = (double)fVar81;
        auVar172._0_8_ = dVar136 * auVar86._0_8_ + auVar139._0_8_;
        auVar172._8_8_ = dVar136 * auVar86._8_8_ + auVar139._8_8_;
        auVar176._16_8_ = dVar136 * auVar86._16_8_ + auVar45._0_8_;
        auVar176._0_16_ = auVar172;
        auVar176._24_8_ = dVar136 * auVar86._24_8_ + auVar45._8_8_;
        local_2b8._0_16_ = auVar176._16_16_;
        auVar139 = vunpcklpd_avx(local_348,local_358);
        auVar45 = vshufpd_avx(local_2b8._0_16_,local_2b8._0_16_,1);
        auVar174 = vunpcklpd_avx(local_1f8,local_368);
        local_338 = vshufpd_avx(auVar172,auVar172,1);
        auVar170._16_16_ = auVar139;
        auVar170._0_16_ = auVar174;
        auVar175 = vunpcklpd_avx(auVar184,auVar48);
        auVar185 = vunpcklpd_avx(auVar33,auVar153);
        auVar35._16_16_ = auVar175;
        auVar35._0_16_ = auVar185;
        auVar86 = vsubpd_avx(auVar35,auVar170);
        auVar189._0_8_ = dVar136 * auVar86._0_8_ + auVar174._0_8_;
        auVar189._8_8_ = dVar136 * auVar86._8_8_ + auVar174._8_8_;
        auVar192._16_8_ = dVar136 * auVar86._16_8_ + auVar139._0_8_;
        auVar192._0_16_ = auVar189;
        auVar192._24_8_ = dVar136 * auVar86._24_8_ + auVar139._8_8_;
        dVar46 = __real_3ff0000000000000 - dVar136;
        auVar86 = vsubpd_avx(ZEXT832(0) << 0x40,auVar104);
        auVar54._0_4_ = ~auVar106._0_4_ & auVar86._0_4_;
        auVar54._4_4_ = ~auVar106._4_4_ & auVar86._4_4_;
        auVar54._8_4_ = ~auVar106._8_4_ & auVar86._8_4_;
        auVar54._12_4_ = ~auVar106._12_4_ & auVar86._12_4_;
        auVar54._16_4_ = ~auVar106._16_4_ & auVar86._16_4_;
        auVar54._20_4_ = ~auVar106._20_4_ & auVar86._20_4_;
        auVar54._24_4_ = ~auVar106._24_4_ & auVar86._24_4_;
        auVar54._28_4_ = ~auVar106._28_4_ & auVar86._28_4_;
        auVar55._0_8_ = auVar106._0_8_ & (ulonglong)auVar30._0_8_;
        auVar55._8_8_ = auVar106._8_8_ & (ulonglong)auVar30._8_8_;
        auVar55._16_8_ = auVar106._16_8_ & (ulonglong)auVar103._0_8_;
        auVar55._24_8_ = auVar106._24_8_ & (ulonglong)auVar103._8_8_;
        auVar55 = auVar55 | auVar54;
        auVar174 = vunpcklpd_avx(auVar29,local_3b8);
        auVar190 = vunpcklpd_avx(local_258,local_458);
        auVar29 = vunpcklpd_avx(local_408,local_418);
        auVar52 = vunpcklpd_avx(local_188,local_3c8);
        auVar154._0_8_ = auVar174._0_8_ * auVar29._0_8_ + auVar52._0_8_ * auVar190._0_8_;
        auVar154._8_8_ = auVar174._8_8_ * auVar29._8_8_ + auVar52._8_8_ * auVar190._8_8_;
        auVar103 = vshufpd_avx(auVar154,auVar154,1);
        auVar30._0_8_ = auVar154._0_8_ + auVar103._0_8_;
        auVar139 = vshufpd_avx(auVar192._16_16_,auVar192._16_16_,1);
        auVar155._0_4_ = (float)auVar30._0_8_;
        auVar155._4_4_ = (int)((ulonglong)auVar30._0_8_ >> 0x20);
        auVar155._8_8_ = 0;
        dVar31 = dVar136 * auVar142._0_8_ + dVar46 * auVar55._0_8_;
        dVar43 = dVar136 * auVar142._8_8_ + dVar46 * auVar55._8_8_;
        dVar44 = dVar136 * auVar101._0_8_ + dVar46 * auVar55._16_8_;
        dVar46 = dVar136 * auVar101._8_8_ + dVar46 * auVar55._24_8_;
        auVar89._0_4_ = (uint)(__real_3f800000 - fVar81) ^ __real_80000000;
        auVar89._4_4_ = __real_80000000;
        auVar89._8_4_ = __real_80000000;
        auVar89._12_4_ = __real_80000000;
        auVar103 = vcmpss_avx(ZEXT816(0) << 0x40,auVar155,2);
        auVar103 = vblendvps_avx(auVar89,ZEXT416((uint)(__real_3f800000 - fVar81)),auVar103);
        auVar90._0_8_ = dVar44 * dVar44 + dVar31 * dVar31;
        auVar90._8_8_ = dVar46 * dVar46 + dVar43 * dVar43;
        auVar30 = vshufpd_avx(auVar90,auVar90,1);
        auVar30._0_8_ = auVar30._0_8_ + auVar90._0_8_;
        auVar91._8_8_ = 0;
        auVar91._0_8_ = auVar30._0_8_;
        auVar30._0_8_ = __real_3ff0000000000000 / SQRT(auVar30._0_8_);
        auVar166._8_8_ = 0;
        auVar166._0_8_ = __real_3e45798ee2308c3a;
        auVar101 = vcmpsd_avx(auVar166,auVar91,6);
        auVar142._0_8_ = ~auVar101._0_8_ & __real_ffffffffffffffff;
        auVar173._0_8_ = (ulonglong)(auVar30._0_8_ * dVar31) & auVar142._0_8_;
        auVar173._8_8_ = (ulonglong)(auVar30._0_8_ * dVar43) & auVar142._0_8_;
        auVar177._16_8_ = (ulonglong)(auVar30._0_8_ * dVar44) & auVar142._0_8_;
        auVar177._0_16_ = auVar173;
        auVar177._24_8_ = (ulonglong)(auVar30._0_8_ * dVar46) & auVar142._0_8_;
        auVar36._0_8_ =
             ~auVar142._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar36._8_8_ = ~auVar142._0_8_ & _UNK_150b54548;
        auVar36._16_8_ = ~auVar142._0_8_ & _UNK_150b54550;
        auVar36._24_8_ = ~auVar142._0_8_ & _UNK_150b54558;
        auVar21 = auVar177._16_16_ | auVar36._16_16_;
        auVar101 = vshufpd_avx(auVar189,auVar189,1);
        auVar175 = vshufps_avx(auVar21,auVar21,0x4e);
        auVar185 = vshufps_avx(auVar173,auVar173,0x4e);
        auVar30._0_8_ = (double)auVar103._0_4_;
        dVar46 = dVar136 * auVar52._0_8_ + auVar190._0_8_ * auVar30._0_8_;
        dVar31 = dVar136 * auVar52._8_8_ + auVar190._8_8_ * auVar30._0_8_;
        dVar43 = dVar136 * auVar29._0_8_ + auVar174._0_8_ * auVar30._0_8_;
        dVar44 = dVar136 * auVar29._8_8_ + auVar174._8_8_ * auVar30._0_8_;
        auVar103 = vunpcklpd_avx(local_318,local_3a8);
        auVar56._16_16_ = auVar20;
        auVar56._0_16_ = auVar103;
        auVar103 = vunpcklpd_avx(local_388,local_438);
        auVar84._16_8_ = auVar195._0_8_;
        auVar84._0_16_ = auVar103;
        auVar84._24_8_ = 0;
        auVar106 = vsubpd_avx(auVar56,auVar84);
        local_318._0_8_ = dVar136 * auVar106._0_8_ + auVar103._0_8_;
        local_318._8_8_ = dVar136 * auVar106._8_8_ + auVar103._8_8_;
        auVar49._0_8_ = dVar46 * dVar46 + dVar43 * dVar43;
        auVar49._8_8_ = dVar31 * dVar31 + dVar44 * dVar44;
        auVar103 = vshufpd_avx(auVar49,auVar49,1);
        auVar30._0_8_ = auVar49._0_8_ + auVar103._0_8_;
        auVar50._8_8_ = 0;
        auVar50._0_8_ = auVar30._0_8_;
        auVar103 = vcmpsd_avx(auVar166,auVar50,6);
        auVar142._0_8_ = ~auVar103._0_8_ & __real_ffffffffffffffff;
        auVar30._0_8_ = __real_3ff0000000000000 / SQRT(auVar30._0_8_);
        local_188._0_8_ = (ulonglong)(dVar46 * auVar30._0_8_) & auVar142._0_8_;
        local_188._8_8_ = (double)((ulonglong)(dVar31 * auVar30._0_8_) & auVar142._0_8_);
        auVar93._16_8_ = (ulonglong)(dVar43 * auVar30._0_8_) & auVar142._0_8_;
        auVar93._0_16_ = local_188;
        auVar93._24_8_ = (ulonglong)(dVar44 * auVar30._0_8_) & auVar142._0_8_;
        auVar37._0_8_ =
             ~auVar142._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar37._8_8_ = ~auVar142._0_8_ & _UNK_150b54548;
        auVar37._16_8_ = ~auVar142._0_8_ & _UNK_150b54550;
        auVar37._24_8_ = ~auVar142._0_8_ & _UNK_150b54558;
        local_1d8._0_16_ = auVar93._16_16_ | auVar37._16_16_;
        local_458 = vshufps_avx(local_188,local_188,0x4e);
        local_448 = vshufps_avx(local_1d8._0_16_,local_1d8._0_16_,0x4e);
        local_438 = vshufpd_avx(local_318,local_318,1);
        auVar30._0_8_ = auVar172._0_8_;
        auVar174._0_8_ = auVar173._0_8_;
        local_378._0_8_ = auVar21._0_8_;
        local_3e8._0_8_ = auVar185._0_8_;
        local_3f8._0_8_ = auVar175._0_8_;
        local_3d8._0_8_ = auVar45._0_8_;
        local_1f8._0_8_ = auVar189._0_8_;
        local_368._0_8_ = auVar101._0_8_;
        local_348._0_8_ = auVar192._16_8_;
        local_358._0_8_ = auVar139._0_8_;
        local_428._0_8_ = dVar136 * auVar106._16_8_ + auVar195._0_8_;
      }
      *(undefined8 *)(param_4 + lVar17 * 8) = local_258._0_8_;
      *(undefined8 *)(param_4 + 8 + lVar17 * 8) = local_218;
      *(undefined8 *)(param_4 + 0x10 + lVar17 * 8) = local_288._0_8_;
      *(undefined8 *)(param_4 + 0x18 + lVar17 * 8) = local_3b8._0_8_;
      *(undefined8 *)(param_6 + lVar17 * 8) = uVar47;
      *(undefined8 *)(param_6 + 8 + lVar17 * 8) = local_3c8._0_8_;
      *(undefined8 *)(param_6 + 0x10 + lVar17 * 8) = local_408._0_8_;
      *(undefined8 *)(param_6 + 0x18 + lVar17 * 8) = local_418._0_8_;
      *(undefined8 *)(param_5 + lVar18) = local_388._0_8_;
      *(undefined8 *)(param_5 + 8 + lVar18) = local_238._0_8_;
      *(double *)(param_5 + 0x10 + lVar18) = auVar195._0_8_;
      *(undefined8 *)(param_7 + lVar18) = uVar71;
      *(undefined8 *)(param_7 + 8 + lVar18) = local_3a8._0_8_;
      *(double *)(param_7 + 0x10 + lVar18) = auVar20._0_8_;
      uVar47 = local_1d8._0_8_;
      if (iVar8 == -1) {
        auVar195._0_8_ = (double)local_2b8._0_8_;
        uVar71 = local_338._0_8_;
      }
      else {
        pdVar1 = (double *)(param_8 + lVar19 * 0x20);
        auVar26._0_8_ =
             ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar1;
        auVar26._8_8_ = _UNK_150b543c8 * pdVar1[1];
        auVar26._16_8_ = _UNK_150b543d0 * pdVar1[2];
        auVar26._24_8_ = _UNK_150b543d8 * pdVar1[3];
        auVar106 = vpermpd_avx2(auVar26,0xff);
        auVar103 = vunpcklpd_avx(local_188,local_458);
        auVar101 = vunpcklpd_avx(local_1d8._0_16_,local_448);
        auVar45 = vunpcklpd_avx(local_448,local_1d8._0_16_);
        auVar142 = vunpcklpd_avx(local_458,local_188);
        auVar86 = vpermpd_avx2(auVar26,0x55);
        auVar105 = vpermpd_avx2(auVar26,0xaa);
        auVar30._0_8_ =
             auVar142._0_8_ * auVar105._0_8_ *
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
             auVar101._0_8_ * auVar86._0_8_ *
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
             auVar106._0_8_ * auVar103._0_8_ +
             auVar45._0_8_ * auVar26._0_8_ *
             ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        dVar46 = auVar142._8_8_ * auVar105._8_8_ * _UNK_150b54428 +
                 auVar101._8_8_ * auVar86._8_8_ * _UNK_150b54408 +
                 auVar106._8_8_ * auVar103._8_8_ + auVar45._8_8_ * auVar26._0_8_ * _UNK_150b543e8;
        dVar31 = auVar45._0_8_ * auVar105._16_8_ * _UNK_150b54430 +
                 auVar103._0_8_ * auVar86._16_8_ * _UNK_150b54410 +
                 auVar106._16_8_ * auVar101._0_8_ + auVar142._0_8_ * auVar26._0_8_ * _UNK_150b543f0;
        dVar43 = auVar45._8_8_ * auVar105._24_8_ * _UNK_150b54438 +
                 auVar103._8_8_ * auVar86._24_8_ * _UNK_150b54418 +
                 auVar106._24_8_ * auVar101._8_8_ + auVar142._8_8_ * auVar26._0_8_ * _UNK_150b543f8;
        auVar195._0_8_ = *(double *)(param_9 + 0x10 + lVar19 * 0x18);
        auVar103 = *(undefined1 (*) [16])(param_9 + lVar19 * 0x18);
        auVar77._16_8_ = auVar195._0_8_;
        auVar77._0_16_ = auVar103;
        auVar77._24_8_ = 0;
        dVar44 = auVar103._0_8_;
        auVar38._0_8_ = (ulonglong)dVar44 & __real_7fffffffffffffff;
        dVar136 = auVar103._8_8_;
        auVar38._8_8_ = (ulonglong)dVar136 & __real_7fffffffffffffff;
        auVar38._16_8_ = (ulonglong)auVar195._0_8_ & __real_7fffffffffffffff;
        auVar38._24_8_ = 0;
        auVar85._8_8_ = __real_3e45798ee2308c3a;
        auVar85._0_8_ = __real_3e45798ee2308c3a;
        auVar85._16_8_ = __real_3e45798ee2308c3a;
        auVar85._24_8_ = __real_3e45798ee2308c3a;
        auVar106 = vcmppd_avx(auVar38,auVar85,2);
        auVar94._8_8_ = __real_46c8a6e32246c99c;
        auVar94._0_8_ = __real_46c8a6e32246c99c;
        auVar94._16_8_ = __real_46c8a6e32246c99c;
        auVar94._24_8_ = __real_46c8a6e32246c99c;
        auVar86 = vcmppd_avx(auVar77,auVar94,2);
        auVar105 = vpcmpeqd_avx2(ZEXT1632(local_458),ZEXT1632(local_458));
        auVar86 = vpackssdw_avx2(auVar86,auVar105);
        auVar103 = vpackssdw_avx(auVar86._0_16_,auVar86._16_16_);
        auVar95._8_8_ = __real_3914c4e977ba1f5c;
        auVar95._0_8_ = __real_3914c4e977ba1f5c;
        auVar95._16_8_ = __real_3914c4e977ba1f5c;
        auVar95._24_8_ = __real_3914c4e977ba1f5c;
        auVar86 = vcmppd_avx(auVar95,auVar77,2);
        auVar86 = vpackssdw_avx2(auVar86,ZEXT832(0) << 0x40);
        auVar101 = vpackssdw_avx(auVar86._0_16_,auVar86._16_16_);
        auVar106 = vpackssdw_avx2(auVar106,auVar105);
        auVar105 = vpermq_avx2(auVar106,0xd8);
        auVar106 = vblendvps_avx(auVar80,ZEXT832(0) << 0x40,auVar105);
        auVar103 = vpand_avx(auVar101,auVar103);
        auVar103 = vpshufd_avx(auVar103,0xd8);
        auVar86 = vpmovzxwd_avx2(auVar103);
        auVar86 = vpslld_avx2(auVar86,0x1f);
        auVar86 = vpsrad_avx2(auVar86,0x1f);
        auVar87._0_4_ = auVar106._0_4_ & auVar86._0_4_;
        auVar87._4_4_ = auVar106._4_4_ & auVar86._4_4_;
        auVar87._8_4_ = auVar106._8_4_ & auVar86._8_4_;
        auVar87._12_4_ = auVar106._12_4_ & auVar86._12_4_;
        auVar87._16_4_ = auVar106._16_4_ & auVar86._16_4_;
        auVar87._20_4_ = auVar106._20_4_ & auVar86._20_4_;
        auVar87._24_4_ = auVar106._24_4_ & auVar86._24_4_;
        auVar87._28_4_ = auVar106._28_4_ & auVar86._28_4_;
        iVar12 = vmovmskps_avx(auVar87);
        auVar121 = ZEXT1632(ZEXT816(0));
        if (iVar12 == 0) {
          auVar87 = ZEXT432(0) << 0x20;
LAB_140aa9795:
          auVar88._0_4_ =
               auVar87._0_4_ ^
               ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
          auVar88._4_4_ = auVar87._4_4_ ^ _UNK_150b51304;
          auVar88._8_4_ = auVar87._8_4_ ^ _UNK_150b51308;
          auVar88._12_4_ = auVar87._12_4_ ^ _UNK_150b5130c;
          auVar88._16_4_ = auVar87._16_4_ ^ _UNK_150b51310;
          auVar88._20_4_ = auVar87._20_4_ ^ _UNK_150b51314;
          auVar88._24_4_ = auVar87._24_4_ ^ _UNK_150b51318;
          auVar88._28_4_ = auVar87._28_4_ ^ _UNK_150b5131c;
          dVar151 = auVar121._8_8_;
          dVar133 = auVar121._16_8_;
          auVar11._8_8_ = (ulonglong)dVar133 & __real_7fe0000000000000;
          auVar11._0_8_ = (ulonglong)dVar151 & __real_7fe0000000000000;
          dVar135 = auVar121._24_8_;
          auVar11._16_8_ = (ulonglong)dVar135 & __real_7fe0000000000000;
          auVar11._24_8_ = 0;
          auVar96._0_8_ = (ulonglong)dVar44 & __real_7fe0000000000000;
          auVar96._8_8_ = (ulonglong)dVar136 & __real_7fe0000000000000;
          auVar96._16_8_ = (ulonglong)auVar195._0_8_ & __real_7fe0000000000000;
          auVar96._24_8_ = 0;
          auVar161._8_8_ = __real_7fcfffffffffffff;
          auVar161._0_8_ = __real_7fcfffffffffffff;
          auVar161._16_8_ = __real_7fcfffffffffffff;
          auVar161._24_8_ = __real_7fcfffffffffffff;
          auVar39 = vpsubq_avx2(auVar161,auVar96);
          auVar40 = vpsubq_avx2(auVar161,auVar11 << 0x40);
          auVar162._0_8_ = dVar44 * auVar39._0_8_;
          auVar162._8_8_ = dVar136 * auVar39._8_8_;
          auVar162._16_8_ = auVar195._0_8_ * auVar39._16_8_;
          auVar162._24_8_ = auVar39._24_8_ * 0.0;
          auVar103 = vcvtpd2ps_avx(auVar162);
          auVar178._0_8_ = auVar40._0_8_ * 0.0;
          auVar178._8_8_ = dVar151 * auVar40._8_8_;
          auVar178._16_8_ = dVar133 * auVar40._16_8_;
          auVar178._24_8_ = dVar135 * auVar40._24_8_;
          auVar101 = vcvtpd2ps_avx(auVar178);
          auVar163._16_16_ = auVar101;
          auVar163._0_16_ = auVar103;
          auVar106 = vrcpps_avx(auVar163);
          auVar157._0_4_ = auVar106._0_4_ * (-(auVar106._0_4_ * auVar103._0_4_) + __real_40000000);
          auVar157._4_4_ = auVar106._4_4_ * (-(auVar106._4_4_ * auVar103._4_4_) + __real_40000000);
          auVar157._8_4_ = auVar106._8_4_ * (-(auVar106._8_4_ * auVar103._8_4_) + __real_40000000);
          auVar157._12_4_ =
               auVar106._12_4_ * (-(auVar106._12_4_ * auVar103._12_4_) + __real_40000000);
          auVar164._16_4_ =
               auVar106._16_4_ * (-(auVar106._16_4_ * auVar101._0_4_) + __real_40000000);
          auVar164._0_16_ = auVar157;
          auVar164._20_4_ =
               auVar106._20_4_ * (-(auVar106._20_4_ * auVar101._4_4_) + __real_40000000);
          auVar164._24_4_ =
               auVar106._24_4_ * (-(auVar106._24_4_ * auVar101._8_4_) + __real_40000000);
          auVar164._28_4_ =
               auVar106._28_4_ * (-(auVar106._28_4_ * auVar101._12_4_) + __real_40000000);
          auVar106 = vcvtps2pd_avx(auVar157);
          auVar86 = vcvtps2pd_avx(auVar164._16_16_);
          dVar137 = auVar86._0_8_ * auVar40._0_8_;
          dVar148 = auVar86._8_8_ * auVar40._8_8_;
          dVar149 = auVar86._16_8_ * auVar40._16_8_;
          dVar150 = auVar86._24_8_ * auVar40._24_8_;
          dVar114 = auVar106._0_8_ * auVar39._0_8_;
          dVar131 = auVar106._8_8_ * auVar39._8_8_;
          dVar132 = auVar106._16_8_ * auVar39._16_8_;
          dVar134 = auVar106._24_8_ * auVar39._24_8_;
          dVar137 = (-(dVar137 * 0.0) + __real_4000000000000000) * dVar137;
          dVar148 = (-(dVar151 * dVar148) + __real_4000000000000000) * dVar148;
          dVar149 = (-(dVar133 * dVar149) + __real_4000000000000000) * dVar149;
          dVar150 = (-(dVar135 * dVar150) + __real_4000000000000000) * dVar150;
          dVar114 = (-(dVar44 * dVar114) + __real_4000000000000000) * dVar114;
          dVar131 = (-(dVar136 * dVar131) + __real_4000000000000000) * dVar131;
          dVar132 = (-(auVar195._0_8_ * dVar132) + __real_4000000000000000) * dVar132;
          dVar134 = (-(dVar134 * 0.0) + __real_4000000000000000) * dVar134;
          auVar78._0_8_ = dVar114 * (-(dVar114 * dVar44) + __real_4000000000000000);
          auVar78._8_8_ = dVar131 * (-(dVar131 * dVar136) + __real_4000000000000000);
          auVar78._16_8_ = dVar132 * (-(dVar132 * auVar195._0_8_) + __real_4000000000000000);
          auVar78._24_8_ = dVar134 * (-(dVar134 * 0.0) + __real_4000000000000000);
          auVar106 = vpermps_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                  ,auVar88);
          local_1b8 = vblendvps_avx(local_1b8,auVar78,auVar106);
          auVar79._0_8_ = (-(dVar137 * 0.0) + __real_4000000000000000) * dVar137;
          auVar79._8_8_ = (-(dVar151 * dVar148) + __real_4000000000000000) * dVar148;
          auVar79._16_8_ = (-(dVar133 * dVar149) + __real_4000000000000000) * dVar149;
          auVar79._24_8_ = (-(dVar135 * dVar150) + __real_4000000000000000) * dVar150;
          auVar106 = vpermps_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                  ,auVar88);
          local_168 = vblendvps_avx(local_168,auVar79,auVar106);
        }
        else {
          auVar103 = vcvtpd2ps_avx(auVar77);
          auVar101 = vcvtpd2ps_avx(ZEXT1632(ZEXT816(0)));
          auVar159._16_16_ = auVar101;
          auVar159._0_16_ = auVar103;
          auVar121 = vrcpps_avx(auVar159);
          auVar156._0_4_ = auVar121._0_4_ * (-(auVar121._0_4_ * auVar103._0_4_) + __real_40000000);
          auVar156._4_4_ = auVar121._4_4_ * (-(auVar121._4_4_ * auVar103._4_4_) + __real_40000000);
          auVar156._8_4_ = auVar121._8_4_ * (-(auVar121._8_4_ * auVar103._8_4_) + __real_40000000);
          auVar156._12_4_ =
               auVar121._12_4_ * (-(auVar121._12_4_ * auVar103._12_4_) + __real_40000000);
          auVar160._16_4_ =
               auVar121._16_4_ * (-(auVar121._16_4_ * auVar101._0_4_) + __real_40000000);
          auVar160._0_16_ = auVar156;
          auVar160._20_4_ =
               auVar121._20_4_ * (-(auVar121._20_4_ * auVar101._4_4_) + __real_40000000);
          auVar160._24_4_ =
               auVar121._24_4_ * (-(auVar121._24_4_ * auVar101._8_4_) + __real_40000000);
          auVar160._28_4_ =
               auVar121._28_4_ * (-(auVar121._28_4_ * auVar101._12_4_) + __real_40000000);
          auVar121 = vcvtps2pd_avx(auVar160._16_16_);
          auVar39 = vcvtps2pd_avx(auVar156);
          dVar137 = (-(auVar121._0_8_ * 0.0) + __real_4000000000000000) * auVar121._0_8_;
          dVar148 = (-(auVar121._8_8_ * 0.0) + __real_4000000000000000) * auVar121._8_8_;
          dVar149 = (-(auVar121._16_8_ * 0.0) + __real_4000000000000000) * auVar121._16_8_;
          dVar150 = (-(auVar121._24_8_ * 0.0) + __real_4000000000000000) * auVar121._24_8_;
          dVar114 = (-(dVar44 * auVar39._0_8_) + __real_4000000000000000) * auVar39._0_8_;
          dVar131 = (-(dVar136 * auVar39._8_8_) + __real_4000000000000000) * auVar39._8_8_;
          dVar132 = (-(auVar195._0_8_ * auVar39._16_8_) + __real_4000000000000000) * auVar39._16_8_;
          dVar134 = (-(auVar39._24_8_ * 0.0) + __real_4000000000000000) * auVar39._24_8_;
          auVar143._0_8_ = dVar137 * (-(dVar137 * 0.0) + __real_4000000000000000);
          auVar143._8_8_ = dVar148 * (-(dVar148 * 0.0) + __real_4000000000000000);
          auVar143._16_8_ = dVar149 * (-(dVar149 * 0.0) + __real_4000000000000000);
          auVar143._24_8_ = dVar150 * (-(dVar150 * 0.0) + __real_4000000000000000);
          auVar120._0_8_ = dVar114 * (-(dVar44 * dVar114) + __real_4000000000000000);
          auVar120._8_8_ = dVar131 * (-(dVar136 * dVar131) + __real_4000000000000000);
          auVar120._16_8_ = dVar132 * (-(auVar195._0_8_ * dVar132) + __real_4000000000000000);
          auVar120._24_8_ = dVar134 * (-(dVar134 * 0.0) + __real_4000000000000000);
          auVar121 = vpmovsxdq_avx2(auVar86._0_16_);
          local_1b8 = vblendvps_avx(local_1b8,auVar120,auVar121);
          auVar121 = SUB6432(ZEXT864(0),0) << 0x40;
          auVar86 = vpermps_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                 ,auVar86);
          local_168 = vblendvps_avx(local_168,auVar143,auVar86);
          uVar14 = vmovmskps_avx(auVar106);
          if ((char)uVar14 != (char)iVar12) goto LAB_140aa9795;
        }
        auVar72._0_8_ = auVar30._0_8_ * auVar30._0_8_ + dVar31 * dVar31;
        auVar72._8_8_ = dVar46 * dVar46 + dVar43 * dVar43;
        auVar103 = vshufpd_avx(auVar72,auVar72,1);
        auVar195._0_8_ = auVar72._0_8_ + auVar103._0_8_;
        auVar61._8_8_ = 0;
        auVar61._0_8_ = __real_3e45798ee2308c3a;
        auVar73._8_8_ = 0;
        auVar73._0_8_ = auVar195._0_8_;
        auVar103 = vcmpsd_avx(auVar61,auVar73,6);
        auVar142._0_8_ = ~auVar103._0_8_ & __real_ffffffffffffffff;
        auVar195._0_8_ = __real_3ff0000000000000 / SQRT(auVar195._0_8_);
        auVar174._0_8_ = (ulonglong)(auVar30._0_8_ * auVar195._0_8_) & auVar142._0_8_;
        auVar174._8_8_ = (ulonglong)(dVar46 * auVar195._0_8_) & auVar142._0_8_;
        auVar179._16_8_ = (ulonglong)(dVar31 * auVar195._0_8_) & auVar142._0_8_;
        auVar179._0_16_ = auVar174;
        auVar179._24_8_ = (ulonglong)(dVar43 * auVar195._0_8_) & auVar142._0_8_;
        auVar27._0_8_ =
             ~auVar142._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar27._8_8_ = ~auVar142._0_8_ & _UNK_150b54548;
        auVar27._16_8_ = ~auVar142._0_8_ & _UNK_150b54550;
        auVar27._24_8_ = ~auVar142._0_8_ & _UNK_150b54558;
        auVar30 = auVar179._16_16_ | auVar27._16_16_;
        auVar103 = vshufps_avx(auVar174,auVar174,0x4e);
        local_3e8._0_8_ = auVar103._0_8_;
        local_378._0_8_ = auVar30._0_8_;
        auVar103 = vshufps_avx(auVar30,auVar30,0x4e);
        local_3f8._0_8_ = auVar103._0_8_;
        auVar106 = vpermps_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                ,auVar105);
        auVar106 = vblendvps_avx(local_1b8,auVar121,auVar106);
        auVar103 = vunpcklpd_avx(local_318,local_438);
        auVar30._0_8_ = auVar103._0_8_ * auVar106._0_8_;
        auVar30._8_8_ = auVar103._8_8_ * auVar106._8_8_;
        auVar103 = vshufpd_avx(auVar30,auVar30,1);
        local_3d8._0_8_ = 0;
        auVar195._0_8_ = (double)local_428._0_8_ * auVar106._16_8_;
        uVar71 = auVar103._0_8_;
      }
      *(undefined8 *)(param_8 + lVar17 * 8) = local_188._0_8_;
      *(undefined8 *)(param_8 + 8 + lVar17 * 8) = local_458._0_8_;
      *(undefined8 *)(param_8 + 0x10 + lVar17 * 8) = uVar47;
      *(undefined8 *)(param_8 + 0x18 + lVar17 * 8) = local_448._0_8_;
      *(undefined8 *)(param_9 + lVar18) = local_318._0_8_;
      *(undefined8 *)(param_9 + 8 + lVar18) = local_438._0_8_;
      *(undefined8 *)(param_9 + 0x10 + lVar18) = local_428._0_8_;
      *(ulonglong *)(param_1 + lVar18 * 4) = auVar174._0_8_;
      *(undefined8 *)(param_1 + 8 + lVar18 * 4) = local_3e8._0_8_;
      *(undefined8 *)(param_1 + 0x10 + lVar18 * 4) = local_378._0_8_;
      *(undefined8 *)(param_1 + 0x18 + lVar18 * 4) = local_3f8._0_8_;
      *(undefined8 *)(param_1 + 0x20 + lVar18 * 4) = local_1f8._0_8_;
      *(undefined8 *)(param_1 + 0x28 + lVar18 * 4) = local_368._0_8_;
      *(undefined8 *)(param_1 + 0x30 + lVar18 * 4) = local_348._0_8_;
      *(undefined8 *)(param_1 + 0x38 + lVar18 * 4) = local_358._0_8_;
      *(double *)(param_1 + 0x40 + lVar18 * 4) = auVar30._0_8_;
      *(undefined8 *)(param_1 + 0x48 + lVar18 * 4) = uVar71;
      *(double *)(param_1 + 0x50 + lVar18 * 4) = auVar195._0_8_;
      *(undefined8 *)(param_1 + 0x58 + lVar18 * 4) = local_3d8._0_8_;
      iVar16 = iVar16 + 1;
      lVar18 = lVar18 + 0x18;
      lVar17 = lVar17 + 4;
    } while ((ulonglong)param_13 * 0x18 != lVar18);
  }
  return;
}

// BlendPosesPerBoneFilterRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx2 @ 140aaab00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterRotation___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_s_5B_unFVector4_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx2
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10,
               undefined1 (*param_11) [32])

{
  double *pdVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  ulonglong *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  double dVar41;
  double dVar44;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar43 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar40 [32];
  double dVar42;
  undefined1 in_ZMM1 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [64];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [32];
  undefined1 auVar86 [64];
  undefined8 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined8 uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [64];
  double dVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [32];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar110 [32];
  ulonglong uVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [32];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar129 [32];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined1 local_268 [16];
  ulonglong local_238;
  undefined1 local_228 [16];
  undefined1 local_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  undefined1 local_188 [16];
  undefined1 auStack_178 [16];
  undefined1 local_168 [16];
  undefined1 auStack_158 [16];
  ulonglong local_148;
  undefined8 local_108;
  undefined1 auVar20 [32];
  undefined1 auVar23 [32];
  undefined1 auVar39 [32];
  undefined1 auVar77 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar109 [32];
  undefined1 auVar121 [32];
  undefined1 auVar128 [32];
  undefined1 auVar130 [32];
  
  auVar62 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar62 = auVar62 & ~*param_11;
  if ((((((((SUB321(auVar62 >> 0x1f,0) & 1) == 0 && (SUB321(auVar62 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar62 >> 0x5f,0) & 1) == 0) && SUB321(auVar62 >> 0x7f,0) == '\0') &&
        (SUB321(auVar62 >> 0x9f,0) & 1) == 0) && SUB321(auVar62 >> 0xbf,0) == '\0') &&
      (SUB321(auVar62 >> 0xdf,0) & 1) == 0) && -1 < auVar62[0x1f]) {
    if (0 < (int)param_10) {
      lVar13 = 0;
      lVar15 = 0x2c;
      iVar12 = 0;
      do {
        iVar7 = *(int *)(param_8 + lVar13 * 2);
        iVar8 = *(int *)(param_9 + lVar13);
        lVar14 = (longlong)iVar8;
        auVar82._0_8_ = *(ulonglong *)(param_2 + -0x58 + lVar15 * 2);
        local_1e8._8_8_ = 0;
        local_1e8._0_8_ = auVar82._0_8_;
        dVar101 = *(double *)(param_2 + -0x38 + lVar15 * 2);
        local_2a8._0_8_ = *(ulonglong *)(param_2 + -0x30 + lVar15 * 2);
        local_2a8._8_8_ = 0;
        local_168._8_8_ = 0;
        local_168._0_8_ = *(ulonglong *)(param_2 + -0x28 + lVar15 * 2);
        local_298._0_8_ = *(ulonglong *)(param_2 + -0x20 + lVar15 * 2);
        local_298._8_8_ = 0;
        local_1a8._0_8_ = *(double *)(param_2 + -0x18 + lVar15 * 2);
        local_1a8._8_8_ = 0;
        local_188._8_8_ = 0;
        local_188._0_8_ = *(ulonglong *)(param_2 + -0x10 + lVar15 * 2);
        local_2b8._0_8_ = *(double *)(param_2 + -8 + lVar15 * 2);
        local_228._0_8_ = *(ulonglong *)(param_2 + lVar15 * 2);
        local_228._8_8_ = 0;
        auVar79 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar15 * 2));
        auVar86 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar15 * 2));
        local_2b8._8_8_ = 0;
        auVar100 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar15 * 2));
        puVar10 = (ulonglong *)GetTransformFromArray(param_3,iVar7,iVar12);
        uVar111 = auVar79._0_8_;
        auVar65._0_8_ = *puVar10;
        auVar119._8_8_ = 0;
        auVar119._0_8_ = auVar65._0_8_;
        local_268._0_8_ = puVar10[1];
        auVar114._8_8_ = 0;
        auVar114._0_8_ = local_268._0_8_;
        uVar2 = puVar10[2];
        auVar123._8_8_ = 0;
        auVar123._0_8_ = uVar2;
        uVar3 = puVar10[3];
        auVar112._8_8_ = 0;
        auVar112._0_8_ = uVar3;
        auVar50 = auVar86._0_16_;
        auVar24 = auVar100._0_16_;
        local_208 = auVar24;
        auVar31 = auVar79._0_16_;
        if (lVar14 == -1) {
          auVar43 = vunpcklpd_avx(local_1e8,auVar50);
          auVar9 = vunpcklpd_avx(auVar31,auVar24);
          auVar67 = vunpcklpd_avx(auVar24,auVar31);
          auVar68 = vunpcklpd_avx(auVar50,local_1e8);
          auVar108._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar68._0_8_ * 0.0 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar9._0_8_ * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar67._0_8_ * 0.0 + auVar43._0_8_;
          auVar108._8_8_ =
               _UNK_150b54428 * auVar68._8_8_ * 0.0 +
               _UNK_150b54408 * auVar9._8_8_ * 0.0 +
               _UNK_15076c6f8 * auVar67._8_8_ * 0.0 + auVar43._8_8_;
          auVar110._16_8_ =
               _UNK_150b54430 * auVar67._0_8_ * 0.0 +
               _UNK_150b54410 * auVar43._0_8_ * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar68._0_8_ * 0.0 + auVar9._0_8_;
          auVar110._0_16_ = auVar108;
          auVar110._24_8_ =
               _UNK_150b54438 * auVar67._8_8_ * 0.0 +
               _UNK_150b54418 * auVar43._8_8_ * 0.0 +
               _UNK_15076c6f8 * auVar68._8_8_ * 0.0 + auVar9._8_8_;
          auVar43 = vunpcklpd_avx(auVar119,auVar114);
          auVar9 = vunpcklpd_avx(auVar123,auVar112);
          auVar67 = vunpcklpd_avx(auVar112,auVar123);
          auVar68 = vunpcklpd_avx(auVar114,auVar119);
          local_2c8 = vshufpd_avx(auVar108,auVar108,1);
          local_2d8 = auVar110._16_16_;
          local_2e8 = vshufpd_avx(local_2d8,local_2d8,1);
          auVar62._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar68._0_8_ * 0.0 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar9._0_8_ * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar67._0_8_ * 0.0 + auVar43._0_8_;
          auVar62._8_8_ =
               _UNK_150b54428 * auVar68._8_8_ * 0.0 +
               _UNK_150b54408 * auVar9._8_8_ * 0.0 +
               _UNK_15076c6f8 * auVar67._8_8_ * 0.0 + auVar43._8_8_;
          auVar62._16_8_ =
               _UNK_150b54430 * auVar67._0_8_ * 0.0 +
               _UNK_150b54410 * auVar43._0_8_ * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar68._0_8_ * 0.0 + auVar9._0_8_;
          auVar62._24_8_ =
               _UNK_150b54438 * auVar67._8_8_ * 0.0 +
               _UNK_150b54418 * auVar43._8_8_ * 0.0 +
               _UNK_15076c6f8 * auVar68._8_8_ * 0.0 + auVar9._8_8_;
        }
        else {
          lVar11 = lVar14 * 0x20;
          dVar44 = *(double *)(param_4 + 0x18 + lVar11);
          auVar43 = vunpcklpd_avx(local_1e8,auVar50);
          auVar9 = vunpcklpd_avx(auVar31,auVar24);
          dVar25 = *(double *)(param_4 + lVar11);
          auVar67 = vunpcklpd_avx(auVar24,auVar31);
          auVar68 = vunpcklpd_avx(auVar50,local_1e8);
          dVar41 = *(double *)(param_4 + 8 + lVar11);
          dVar42 = *(double *)(param_4 + 0x10 + lVar11);
          auVar108._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar68._0_8_ * dVar42 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar9._0_8_ * dVar41 +
               dVar44 * auVar43._0_8_ +
               auVar67._0_8_ * dVar25 * ___xmm_bff00000000000003ff0000000000000;
          auVar108._8_8_ =
               _UNK_150b54428 * auVar68._8_8_ * dVar42 +
               _UNK_150b54408 * auVar9._8_8_ * dVar41 +
               dVar44 * auVar43._8_8_ + auVar67._8_8_ * dVar25 * _UNK_15076c6f8;
          auVar109._16_8_ =
               _UNK_150b54430 * auVar67._0_8_ * dVar42 +
               _UNK_150b54410 * auVar43._0_8_ * dVar41 +
               dVar44 * auVar9._0_8_ +
               auVar68._0_8_ * dVar25 * ___xmm_bff00000000000003ff0000000000000;
          auVar109._0_16_ = auVar108;
          auVar109._24_8_ =
               _UNK_150b54438 * auVar67._8_8_ * dVar42 +
               _UNK_150b54418 * auVar43._8_8_ * dVar41 +
               dVar44 * auVar9._8_8_ + auVar68._8_8_ * dVar25 * _UNK_15076c6f8;
          dVar44 = *(double *)(param_5 + 0x18 + lVar11);
          auVar43 = vunpcklpd_avx(auVar119,auVar114);
          dVar25 = *(double *)(param_5 + lVar11);
          auVar9 = vunpcklpd_avx(auVar112,auVar123);
          auVar67 = vunpcklpd_avx(auVar114,auVar119);
          auVar68 = vunpcklpd_avx(auVar123,auVar112);
          local_2c8 = vshufpd_avx(auVar108,auVar108,1);
          local_2d8 = auVar109._16_16_;
          dVar41 = *(double *)(param_5 + 8 + lVar11);
          local_2e8 = vshufpd_avx(local_2d8,local_2d8,1);
          dVar42 = *(double *)(param_5 + 0x10 + lVar11);
          auVar62._0_8_ =
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar67._0_8_ * dVar42 +
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar68._0_8_ * dVar41 +
               dVar44 * auVar43._0_8_ +
               auVar9._0_8_ * dVar25 * ___xmm_bff00000000000003ff0000000000000;
          auVar62._8_8_ =
               _UNK_150b54428 * auVar67._8_8_ * dVar42 +
               _UNK_150b54408 * auVar68._8_8_ * dVar41 +
               dVar44 * auVar43._8_8_ + auVar9._8_8_ * dVar25 * _UNK_15076c6f8;
          auVar62._16_8_ =
               _UNK_150b54430 * auVar9._0_8_ * dVar42 +
               _UNK_150b54410 * auVar43._0_8_ * dVar41 +
               dVar44 * auVar68._0_8_ +
               auVar67._0_8_ * dVar25 * ___xmm_bff00000000000003ff0000000000000;
          auVar62._24_8_ =
               _UNK_150b54438 * auVar9._8_8_ * dVar42 +
               _UNK_150b54418 * auVar43._8_8_ * dVar41 +
               dVar44 * auVar68._8_8_ + auVar67._8_8_ * dVar25 * _UNK_15076c6f8;
        }
        auVar19 = auVar62._0_16_;
        auVar67 = vshufpd_avx(auVar19,auVar19,1);
        auVar30 = auVar62._16_16_;
        auVar68 = vshufpd_avx(auVar30,auVar30,1);
        dVar44 = (double)puVar10[4];
        uVar4 = puVar10[5];
        auVar104._8_8_ = 0;
        auVar104._0_8_ = puVar10[6];
        uVar5 = puVar10[7];
        auVar120._8_8_ = 0;
        auVar120._0_8_ = uVar5;
        dVar25 = (double)puVar10[8];
        auVar92._8_8_ = 0;
        auVar92._0_8_ = dVar25;
        auVar98._8_8_ = 0;
        auVar98._0_8_ = puVar10[9];
        auVar43 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_8 + 4 + lVar13 * 2)));
        dVar41 = (double)puVar10[10];
        auVar126._8_8_ = 0;
        auVar126._0_8_ = dVar41;
        auVar9 = vminss_avx(auVar43,ZEXT416((uint)__real_3f800000));
        auVar43 = vmaxss_avx(auVar9,ZEXT416(*(uint *)(param_7 + (longlong)iVar7 * 4)));
        uVar6 = puVar10[0xb];
        auVar113._8_8_ = 0;
        auVar113._0_8_ = uVar6;
        *(int *)(param_7 + (longlong)iVar7 * 4) = auVar43._0_4_;
        fVar16 = auVar9._0_4_;
        uVar87 = local_2c8._0_8_;
        uVar96 = local_2d8._0_8_;
        if (fVar16 <= __real_3727c5ac) {
          local_268._0_8_ = auVar86._0_8_;
          auVar19 = auVar108;
          auVar31 = local_2e8;
        }
        else if (__real_3f7fff58 <= fVar16) {
          local_208._8_8_ = 0;
          local_208._0_8_ = uVar3;
          local_168 = auVar104;
          local_188 = auVar98;
          local_2d8 = auVar30;
          auVar82._0_8_ = auVar65._0_8_;
          uVar111 = uVar2;
          local_2c8 = auVar67;
          dVar101 = dVar44;
          local_1a8._0_8_ = dVar25;
          local_2b8._0_8_ = dVar41;
          local_228._0_8_ = uVar6;
          auVar31 = auVar68;
          local_2a8._0_8_ = uVar4;
          local_298._0_8_ = uVar5;
        }
        else {
          auStack_1f8 = vunpcklpd_avx(auVar31,auVar24);
          auVar31 = vunpcklpd_avx(local_1e8,auVar50);
          auVar58._16_16_ = auStack_1f8;
          auVar58._0_16_ = auVar31;
          auVar50 = vunpcklpd_avx(auVar123,auVar112);
          auVar82 = vunpcklpd_avx(auVar119,auVar114);
          auVar35._0_8_ = auVar31._0_8_ * auVar82._0_8_;
          auVar35._8_8_ = auVar31._8_8_ * auVar82._8_8_;
          auVar35._16_8_ = auStack_1f8._0_8_ * auVar50._0_8_;
          auVar35._24_8_ = auStack_1f8._8_8_ * auVar50._8_8_;
          auVar110 = vpermpd_avx2(auVar35,0x4e);
          auVar36._0_8_ = auVar35._0_8_ + auVar110._0_8_;
          auVar36._8_8_ = auVar35._8_8_ + auVar110._8_8_;
          auVar36._16_8_ = auVar35._16_8_ + auVar110._16_8_;
          auVar36._24_8_ = auVar35._24_8_ + auVar110._24_8_;
          auVar110 = vpermpd_avx2(auVar36,0x39);
          auVar37._0_8_ = auVar36._0_8_ + auVar110._0_8_;
          auVar37._8_8_ = auVar36._8_8_ + auVar110._8_8_;
          auVar37._16_8_ = auVar36._16_8_ + auVar110._16_8_;
          auVar37._24_8_ = auVar36._24_8_ + auVar110._24_8_;
          auVar65 = vunpcklpd_avx(local_2b8,local_228);
          auVar24 = vunpcklpd_avx(local_1a8,local_188);
          auVar124._16_16_ = auVar65;
          auVar124._0_16_ = auVar24;
          auVar112 = vunpcklpd_avx(auVar126,auVar113);
          auVar114 = ZEXT816(0);
          auVar110 = vcmppd_avx(ZEXT1632(auVar114),auVar37,2);
          auVar110 = vpshufb_avx2(auVar110,
                                  ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                                 );
          auVar110 = vblendvps_avx(ZEXT1632(auVar114),
                                   ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                   ,auVar110);
          auVar119 = vunpcklpd_avx(auVar92,auVar98);
          auVar38._16_16_ = auVar112;
          auVar38._0_16_ = auVar119;
          auVar109 = vsubpd_avx(auVar38,auVar124);
          dVar45 = (double)fVar16;
          auVar29._0_8_ = dVar45 * auVar109._0_8_ + auVar24._0_8_;
          auVar29._8_8_ = dVar45 * auVar109._8_8_ + auVar24._8_8_;
          auVar39._16_8_ = dVar45 * auVar109._16_8_ + auVar65._0_8_;
          auVar39._0_16_ = auVar29;
          auVar39._24_8_ = dVar45 * auVar109._24_8_ + auVar65._8_8_;
          auVar24 = vunpcklpd_avx(local_168,local_298);
          auVar65 = vshufpd_avx(auVar39._16_16_,auVar39._16_16_,1);
          auVar99._8_8_ = 0;
          auVar99._0_8_ = dVar101;
          auVar112 = vunpcklpd_avx(auVar99,local_2a8);
          local_188 = vshufpd_avx(auVar29,auVar29,1);
          auVar95._16_16_ = auVar24;
          auVar95._0_16_ = auVar112;
          auVar119 = vunpcklpd_avx(auVar104,auVar120);
          auVar43._8_8_ = 0;
          auVar43._0_8_ = dVar44;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar4;
          auVar123 = vunpcklpd_avx(auVar43,auVar9);
          auVar69._16_16_ = auVar119;
          auVar69._0_16_ = auVar123;
          auVar109 = vsubpd_avx(auVar69,auVar95);
          auVar127._0_8_ = dVar45 * auVar109._0_8_ + auVar112._0_8_;
          auVar127._8_8_ = dVar45 * auVar109._8_8_ + auVar112._8_8_;
          auVar130._16_8_ = dVar45 * auVar109._16_8_ + auVar24._0_8_;
          auVar130._0_16_ = auVar127;
          auVar130._24_8_ = dVar45 * auVar109._24_8_ + auVar24._8_8_;
          local_168 = auVar130._16_16_;
          dVar44 = __real_3ff0000000000000 - dVar45;
          auVar109 = vsubpd_avx(ZEXT1632(auVar114),auVar58);
          auVar83._0_4_ = ~auVar110._0_4_ & auVar109._0_4_;
          auVar83._4_4_ = ~auVar110._4_4_ & auVar109._4_4_;
          auVar83._8_4_ = ~auVar110._8_4_ & auVar109._8_4_;
          auVar83._12_4_ = ~auVar110._12_4_ & auVar109._12_4_;
          auVar83._16_4_ = ~auVar110._16_4_ & auVar109._16_4_;
          auVar83._20_4_ = ~auVar110._20_4_ & auVar109._20_4_;
          auVar83._24_4_ = ~auVar110._24_4_ & auVar109._24_4_;
          auVar83._28_4_ = ~auVar110._28_4_ & auVar109._28_4_;
          auVar59._0_8_ = (ulonglong)auVar31._0_8_ & auVar110._0_8_;
          auVar59._8_8_ = (ulonglong)auVar31._8_8_ & auVar110._8_8_;
          auVar59._16_8_ = (ulonglong)auStack_1f8._0_8_ & auVar110._16_8_;
          auVar59._24_8_ = (ulonglong)auStack_1f8._8_8_ & auVar110._24_8_;
          auVar59 = auVar59 | auVar83;
          auVar112 = vunpcklpd_avx(local_2d8,local_2e8);
          auVar119 = vunpcklpd_avx(auVar108,local_2c8);
          auVar123 = vunpcklpd_avx(auVar30,auVar68);
          auVar114 = vunpcklpd_avx(auVar19,auVar67);
          auVar24._0_8_ = auVar123._0_8_ * auVar112._0_8_ + auVar114._0_8_ * auVar119._0_8_;
          auVar24._8_8_ = auVar123._8_8_ * auVar112._8_8_ + auVar114._8_8_ * auVar119._8_8_;
          auVar31 = vshufpd_avx(auVar24,auVar24,1);
          dVar101 = auVar31._0_8_ + auVar24._0_8_;
          auVar24 = vshufpd_avx(local_168,local_168,1);
          auVar72._0_4_ = (float)dVar101;
          auVar72._4_4_ = (int)((ulonglong)dVar101 >> 0x20);
          auVar72._8_8_ = 0;
          dVar25 = dVar45 * auVar82._0_8_ + dVar44 * auVar59._0_8_;
          dVar41 = dVar45 * auVar82._8_8_ + dVar44 * auVar59._8_8_;
          dVar42 = dVar45 * auVar50._0_8_ + dVar44 * auVar59._16_8_;
          dVar44 = dVar45 * auVar50._8_8_ + dVar44 * auVar59._24_8_;
          auVar50._0_4_ = (uint)(__real_3f800000 - fVar16) ^ __real_80000000;
          auVar50._4_4_ = __real_80000000;
          auVar50._8_4_ = __real_80000000;
          auVar50._12_4_ = __real_80000000;
          auVar31 = vcmpss_avx(ZEXT816(0) << 0x40,auVar72,2);
          auVar31 = vblendvps_avx(auVar50,ZEXT416((uint)(__real_3f800000 - fVar16)),auVar31);
          auVar51._0_8_ = dVar25 * dVar25 + dVar42 * dVar42;
          auVar51._8_8_ = dVar41 * dVar41 + dVar44 * dVar44;
          auVar50 = vshufpd_avx(auVar51,auVar51,1);
          dVar101 = auVar51._0_8_ + auVar50._0_8_;
          auVar52._8_8_ = 0;
          auVar52._0_8_ = dVar101;
          dVar101 = __real_3ff0000000000000 / SQRT(dVar101);
          auVar105._8_8_ = 0;
          auVar105._0_8_ = __real_3e45798ee2308c3a;
          auVar50 = vcmpsd_avx(auVar105,auVar52,6);
          auVar82._0_8_ = ~auVar50._0_8_ & __real_ffffffffffffffff;
          auVar81._0_8_ = (ulonglong)(dVar25 * dVar101) & auVar82._0_8_;
          auVar81._8_8_ = (ulonglong)(dVar41 * dVar101) & auVar82._0_8_;
          auVar84._16_8_ = (ulonglong)(dVar42 * dVar101) & auVar82._0_8_;
          auVar84._0_16_ = auVar81;
          auVar84._24_8_ = (ulonglong)(dVar44 * dVar101) & auVar82._0_8_;
          auVar56._0_8_ =
               ~auVar82._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar56._8_8_ = ~auVar82._0_8_ & _UNK_150b54548;
          auVar56._16_8_ = ~auVar82._0_8_ & _UNK_150b54550;
          auVar56._24_8_ = ~auVar82._0_8_ & _UNK_150b54558;
          auVar43 = auVar84._16_16_ | auVar56._16_16_;
          auVar50 = vshufpd_avx(auVar127,auVar127,1);
          local_208 = vshufps_avx(auVar43,auVar43,0x4e);
          auVar82 = vshufps_avx(auVar81,auVar81,0x4e);
          local_268._0_8_ = auVar82._0_8_;
          dVar101 = (double)auVar31._0_4_;
          dVar44 = dVar45 * auVar114._0_8_ + auVar119._0_8_ * dVar101;
          dVar25 = dVar45 * auVar114._8_8_ + auVar119._8_8_ * dVar101;
          dVar41 = dVar45 * auVar123._0_8_ + auVar112._0_8_ * dVar101;
          dVar42 = dVar45 * auVar123._8_8_ + auVar112._8_8_ * dVar101;
          auVar30._0_8_ = dVar44 * dVar44 + dVar41 * dVar41;
          auVar30._8_8_ = dVar25 * dVar25 + dVar42 * dVar42;
          auVar31 = vshufpd_avx(auVar30,auVar30,1);
          dVar101 = auVar30._0_8_ + auVar31._0_8_;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = dVar101;
          auVar31 = vcmpsd_avx(auVar105,auVar31,6);
          auVar82._0_8_ = ~auVar31._0_8_ & __real_ffffffffffffffff;
          dVar101 = __real_3ff0000000000000 / SQRT(dVar101);
          local_228._0_8_ = auVar65._0_8_;
          auVar19._0_8_ = (ulonglong)(dVar44 * dVar101) & auVar82._0_8_;
          auVar19._8_8_ = (ulonglong)(dVar25 * dVar101) & auVar82._0_8_;
          auVar23._16_8_ = (ulonglong)(dVar41 * dVar101) & auVar82._0_8_;
          auVar23._0_16_ = auVar19;
          auVar23._24_8_ = (ulonglong)(dVar42 * dVar101) & auVar82._0_8_;
          auVar40._0_8_ =
               ~auVar82._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar40._8_8_ = ~auVar82._0_8_ & _UNK_150b54548;
          auVar40._16_8_ = ~auVar82._0_8_ & _UNK_150b54550;
          auVar40._24_8_ = ~auVar82._0_8_ & _UNK_150b54558;
          local_2d8 = auVar23._16_16_ | auVar40._16_16_;
          local_2c8 = vshufps_avx(auVar19,auVar19,0x4e);
          auVar31 = vshufps_avx(local_2d8,local_2d8,0x4e);
          auVar82._0_8_ = auVar81._0_8_;
          uVar111 = auVar43._0_8_;
          dVar101 = auVar127._0_8_;
          local_1a8._0_8_ = auVar29._0_8_;
          local_2b8._0_8_ = auVar39._16_8_;
          local_2a8._0_8_ = auVar50._0_8_;
          local_298._0_8_ = auVar24._0_8_;
        }
        *(longlong *)(param_4 + lVar13 * 8) = auVar108._0_8_;
        *(undefined8 *)(param_4 + 8 + lVar13 * 8) = uVar87;
        *(undefined8 *)(param_4 + 0x10 + lVar13 * 8) = uVar96;
        *(undefined8 *)(param_4 + 0x18 + lVar13 * 8) = local_2e8._0_8_;
        *(longlong *)(param_5 + lVar13 * 8) = auVar62._0_8_;
        local_288._0_8_ = auVar67._0_8_;
        *(undefined8 *)(param_5 + 8 + lVar13 * 8) = local_288._0_8_;
        local_278 = auVar62._16_8_;
        *(undefined8 *)(param_5 + 0x10 + lVar13 * 8) = local_278;
        local_108 = auVar68._0_8_;
        *(undefined8 *)(param_5 + 0x18 + lVar13 * 8) = local_108;
        uVar87 = local_208._0_8_;
        if (iVar8 != -1) {
          pdVar1 = (double *)(param_6 + lVar14 * 0x20);
          auVar63._0_8_ =
               ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar1;
          auVar63._8_8_ = _UNK_150b543c8 * pdVar1[1];
          auVar63._16_8_ = _UNK_150b543d0 * pdVar1[2];
          auVar63._24_8_ = _UNK_150b543d8 * pdVar1[3];
          auVar62 = vpermpd_avx2(auVar63,0xff);
          auVar50 = vunpcklpd_avx(auVar19,local_2c8);
          auVar82 = vunpcklpd_avx(local_2d8,auVar31);
          auVar65 = vunpcklpd_avx(auVar31,local_2d8);
          auVar24 = vunpcklpd_avx(local_2c8,auVar19);
          auVar110 = vpermpd_avx2(auVar63,0x55);
          auVar109 = vpermpd_avx2(auVar63,0xaa);
          dVar25 = auVar24._0_8_ * auVar109._0_8_ *
                   ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                   auVar82._0_8_ * auVar110._0_8_ *
                   ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                   auVar62._0_8_ * auVar50._0_8_ +
                   auVar65._0_8_ * auVar63._0_8_ *
                   ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
          dVar41 = auVar24._8_8_ * auVar109._8_8_ * _UNK_150b54428 +
                   auVar82._8_8_ * auVar110._8_8_ * _UNK_150b54408 +
                   auVar62._8_8_ * auVar50._8_8_ + auVar65._8_8_ * auVar63._0_8_ * _UNK_150b543e8;
          dVar42 = auVar65._0_8_ * auVar109._16_8_ * _UNK_150b54430 +
                   auVar50._0_8_ * auVar110._16_8_ * _UNK_150b54410 +
                   auVar62._16_8_ * auVar82._0_8_ + auVar24._0_8_ * auVar63._0_8_ * _UNK_150b543f0;
          dVar45 = auVar65._8_8_ * auVar109._24_8_ * _UNK_150b54438 +
                   auVar50._8_8_ * auVar110._24_8_ * _UNK_150b54418 +
                   auVar62._24_8_ * auVar82._8_8_ + auVar24._8_8_ * auVar63._0_8_ * _UNK_150b543f8;
          auVar67._0_8_ = dVar25 * dVar25 + dVar42 * dVar42;
          auVar67._8_8_ = dVar41 * dVar41 + dVar45 * dVar45;
          auVar50 = vshufpd_avx(auVar67,auVar67,1);
          dVar44 = auVar67._0_8_ + auVar50._0_8_;
          auVar73._8_8_ = 0;
          auVar73._0_8_ = __real_3e45798ee2308c3a;
          auVar68._8_8_ = 0;
          auVar68._0_8_ = dVar44;
          auVar50 = vcmpsd_avx(auVar73,auVar68,6);
          auVar65._0_8_ = ~auVar50._0_8_ & __real_ffffffffffffffff;
          dVar44 = __real_3ff0000000000000 / SQRT(dVar44);
          auVar82._0_8_ = (ulonglong)(dVar25 * dVar44) & auVar65._0_8_;
          auVar82._8_8_ = (ulonglong)(dVar41 * dVar44) & auVar65._0_8_;
          auVar85._16_8_ = (ulonglong)(dVar42 * dVar44) & auVar65._0_8_;
          auVar85._0_16_ = auVar82;
          auVar85._24_8_ = (ulonglong)(dVar45 * dVar44) & auVar65._0_8_;
          auVar64._0_8_ =
               ~auVar65._0_8_ &
               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar64._8_8_ = ~auVar65._0_8_ & _UNK_150b54548;
          auVar64._16_8_ = ~auVar65._0_8_ & _UNK_150b54550;
          auVar64._24_8_ = ~auVar65._0_8_ & _UNK_150b54558;
          auVar65 = auVar85._16_16_ | auVar64._16_16_;
          auVar50 = vshufps_avx(auVar82,auVar82,0x4e);
          local_268._0_8_ = auVar50._0_8_;
          uVar111 = auVar65._0_8_;
          auVar50 = vshufps_avx(auVar65,auVar65,0x4e);
          uVar87 = auVar50._0_8_;
        }
        *(longlong *)(param_6 + lVar13 * 8) = auVar19._0_8_;
        *(longlong *)(param_6 + 8 + lVar13 * 8) = local_2c8._0_8_;
        *(longlong *)(param_6 + 0x10 + lVar13 * 8) = local_2d8._0_8_;
        *(longlong *)(param_6 + 0x18 + lVar13 * 8) = auVar31._0_8_;
        *(ulonglong *)(param_1 + -0x58 + lVar15 * 2) = auVar82._0_8_;
        *(undefined8 *)(param_1 + -0x50 + lVar15 * 2) = local_268._0_8_;
        *(ulonglong *)(param_1 + -0x48 + lVar15 * 2) = uVar111;
        *(undefined8 *)(param_1 + -0x40 + lVar15 * 2) = uVar87;
        *(double *)(param_1 + -0x38 + lVar15 * 2) = dVar101;
        *(undefined8 *)(param_1 + -0x30 + lVar15 * 2) = local_2a8._0_8_;
        *(undefined8 *)(param_1 + -0x28 + lVar15 * 2) = local_168._0_8_;
        *(undefined8 *)(param_1 + -0x20 + lVar15 * 2) = local_298._0_8_;
        *(undefined8 *)(param_1 + -0x18 + lVar15 * 2) = local_1a8._0_8_;
        *(undefined8 *)(param_1 + -0x10 + lVar15 * 2) = local_188._0_8_;
        *(undefined8 *)(param_1 + -8 + lVar15 * 2) = local_2b8._0_8_;
        *(undefined8 *)(param_1 + lVar15 * 2) = local_228._0_8_;
        iVar12 = iVar12 + 1;
        lVar15 = lVar15 + 0x30;
        lVar13 = lVar13 + 4;
      } while ((ulonglong)param_10 << 2 != lVar13);
    }
  }
  else if (0 < (int)param_10) {
    lVar13 = 0;
    lVar15 = 0x2c;
    iVar12 = 0;
    do {
      iVar7 = *(int *)(param_8 + lVar13 * 2);
      iVar8 = *(int *)(param_9 + lVar13);
      lVar14 = (longlong)iVar8;
      auVar65._0_8_ = *(ulonglong *)(param_2 + -0x58 + lVar15 * 2);
      local_228._8_8_ = 0;
      local_228._0_8_ = auVar65._0_8_;
      local_188._0_8_ = *(double *)(param_2 + -0x38 + lVar15 * 2);
      local_188._8_8_ = 0;
      local_2b8._0_8_ = *(ulonglong *)(param_2 + -0x30 + lVar15 * 2);
      local_2b8._8_8_ = 0;
      local_2a8._0_8_ = *(double *)(param_2 + -0x28 + lVar15 * 2);
      local_1a8._8_8_ = 0;
      local_1a8._0_8_ = *(ulonglong *)(param_2 + -0x20 + lVar15 * 2);
      local_168._0_8_ = *(double *)(param_2 + -0x18 + lVar15 * 2);
      local_168._8_8_ = 0;
      local_208._8_8_ = 0;
      local_208._0_8_ = *(ulonglong *)(param_2 + -0x10 + lVar15 * 2);
      local_298._0_8_ = *(double *)(param_2 + -8 + lVar15 * 2);
      local_298._8_8_ = 0;
      local_1e8._8_8_ = 0;
      local_1e8._0_8_ = *(ulonglong *)(param_2 + lVar15 * 2);
      local_2a8._8_8_ = 0;
      auVar79 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar15 * 2));
      auVar86 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar15 * 2));
      auVar100 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar15 * 2));
      puVar10 = (ulonglong *)GetTransformFromArray(param_3,iVar7,iVar12);
      uVar111 = auVar100._0_8_;
      auVar82._0_8_ = *puVar10;
      auVar116._8_8_ = 0;
      auVar116._0_8_ = auVar82._0_8_;
      uVar2 = puVar10[1];
      auVar70._8_8_ = 0;
      auVar70._0_8_ = uVar2;
      uVar3 = puVar10[2];
      auVar122._8_8_ = 0;
      auVar122._0_8_ = uVar3;
      local_238 = puVar10[3];
      auVar80._8_8_ = 0;
      auVar80._0_8_ = local_238;
      auVar31 = auVar79._0_16_;
      local_148 = auVar79._0_8_;
      auVar50 = auVar86._0_16_;
      auVar24 = auVar100._0_16_;
      if (lVar14 == -1) {
        auVar112 = vunpcklpd_avx(local_228,auVar31);
        auVar119 = vunpcklpd_avx(auVar24,auVar50);
        auVar123 = vunpcklpd_avx(auVar50,auVar24);
        auVar114 = vunpcklpd_avx(auVar31,local_228);
        auVar125._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar114._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar119._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar123._0_8_ * 0.0 + auVar112._0_8_;
        auVar125._8_8_ =
             _UNK_150b54428 * auVar114._8_8_ * 0.0 +
             _UNK_150b54408 * auVar119._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar123._8_8_ * 0.0 + auVar112._8_8_;
        auVar129._16_8_ =
             _UNK_150b54430 * auVar123._0_8_ * 0.0 +
             _UNK_150b54410 * auVar112._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar114._0_8_ * 0.0 + auVar119._0_8_;
        auVar129._0_16_ = auVar125;
        auVar129._24_8_ =
             _UNK_150b54438 * auVar123._8_8_ * 0.0 +
             _UNK_150b54418 * auVar112._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar114._8_8_ * 0.0 + auVar119._8_8_;
        auVar112 = vunpcklpd_avx(auVar116,auVar70);
        auVar119 = vunpcklpd_avx(auVar122,auVar80);
        auVar123 = vunpcklpd_avx(auVar80,auVar122);
        auVar114 = vunpcklpd_avx(auVar70,auVar116);
        local_268 = vshufpd_avx(auVar125,auVar125,1);
        local_2e8 = auVar129._16_16_;
        local_288 = vshufpd_avx(local_2e8,local_2e8,1);
        auVar61._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar114._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar119._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar123._0_8_ * 0.0 + auVar112._0_8_;
        auVar61._8_8_ =
             _UNK_150b54428 * auVar114._8_8_ * 0.0 +
             _UNK_150b54408 * auVar119._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar123._8_8_ * 0.0 + auVar112._8_8_;
        auVar61._16_8_ =
             _UNK_150b54430 * auVar123._0_8_ * 0.0 +
             _UNK_150b54410 * auVar112._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar114._0_8_ * 0.0 + auVar119._0_8_;
        auVar61._24_8_ =
             _UNK_150b54438 * auVar123._8_8_ * 0.0 +
             _UNK_150b54418 * auVar112._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar114._8_8_ * 0.0 + auVar119._8_8_;
      }
      else {
        lVar11 = lVar14 * 0x20;
        dVar101 = *(double *)(param_4 + 0x18 + lVar11);
        auVar112 = vunpcklpd_avx(local_228,auVar31);
        auVar119 = vunpcklpd_avx(auVar24,auVar50);
        dVar44 = *(double *)(param_4 + lVar11);
        auVar123 = vunpcklpd_avx(auVar50,auVar24);
        auVar114 = vunpcklpd_avx(auVar31,local_228);
        dVar25 = *(double *)(param_4 + 8 + lVar11);
        dVar41 = *(double *)(param_4 + 0x10 + lVar11);
        auVar125._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar114._0_8_ * dVar41 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar119._0_8_ * dVar25 +
             dVar101 * auVar112._0_8_ +
             auVar123._0_8_ * dVar44 * ___xmm_bff00000000000003ff0000000000000;
        auVar125._8_8_ =
             _UNK_150b54428 * auVar114._8_8_ * dVar41 +
             _UNK_150b54408 * auVar119._8_8_ * dVar25 +
             dVar101 * auVar112._8_8_ + auVar123._8_8_ * dVar44 * _UNK_15076c6f8;
        auVar128._16_8_ =
             _UNK_150b54430 * auVar123._0_8_ * dVar41 +
             _UNK_150b54410 * auVar112._0_8_ * dVar25 +
             dVar101 * auVar119._0_8_ +
             auVar114._0_8_ * dVar44 * ___xmm_bff00000000000003ff0000000000000;
        auVar128._0_16_ = auVar125;
        auVar128._24_8_ =
             _UNK_150b54438 * auVar123._8_8_ * dVar41 +
             _UNK_150b54418 * auVar112._8_8_ * dVar25 +
             dVar101 * auVar119._8_8_ + auVar114._8_8_ * dVar44 * _UNK_15076c6f8;
        dVar101 = *(double *)(param_5 + 0x18 + lVar11);
        auVar112 = vunpcklpd_avx(auVar116,auVar70);
        dVar44 = *(double *)(param_5 + lVar11);
        auVar119 = vunpcklpd_avx(auVar80,auVar122);
        auVar123 = vunpcklpd_avx(auVar70,auVar116);
        auVar114 = vunpcklpd_avx(auVar122,auVar80);
        local_268 = vshufpd_avx(auVar125,auVar125,1);
        local_2e8 = auVar128._16_16_;
        dVar25 = *(double *)(param_5 + 8 + lVar11);
        local_288 = vshufpd_avx(local_2e8,local_2e8,1);
        dVar41 = *(double *)(param_5 + 0x10 + lVar11);
        auVar61._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar123._0_8_ * dVar41 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar114._0_8_ * dVar25 +
             dVar101 * auVar112._0_8_ +
             auVar119._0_8_ * dVar44 * ___xmm_bff00000000000003ff0000000000000;
        auVar61._8_8_ =
             _UNK_150b54428 * auVar123._8_8_ * dVar41 +
             _UNK_150b54408 * auVar114._8_8_ * dVar25 +
             dVar101 * auVar112._8_8_ + auVar119._8_8_ * dVar44 * _UNK_15076c6f8;
        auVar61._16_8_ =
             _UNK_150b54430 * auVar119._0_8_ * dVar41 +
             _UNK_150b54410 * auVar112._0_8_ * dVar25 +
             dVar101 * auVar114._0_8_ +
             auVar123._0_8_ * dVar44 * ___xmm_bff00000000000003ff0000000000000;
        auVar61._24_8_ =
             _UNK_150b54438 * auVar119._8_8_ * dVar41 +
             _UNK_150b54418 * auVar112._8_8_ * dVar25 +
             dVar101 * auVar114._8_8_ + auVar123._8_8_ * dVar44 * _UNK_15076c6f8;
      }
      auVar60 = auVar61._0_16_;
      auVar123 = vshufpd_avx(auVar60,auVar60,1);
      auVar43 = auVar61._16_16_;
      auVar114 = vshufpd_avx(auVar43,auVar43,1);
      dVar101 = (double)puVar10[4];
      auVar66._8_8_ = 0;
      auVar66._0_8_ = dVar101;
      uVar4 = puVar10[5];
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar4;
      dVar44 = (double)puVar10[6];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar44;
      auVar57._8_8_ = 0;
      auVar57._0_8_ = puVar10[7];
      dVar25 = (double)puVar10[8];
      auVar46._8_8_ = 0;
      auVar46._0_8_ = dVar25;
      auVar102._8_8_ = 0;
      auVar102._0_8_ = puVar10[9];
      auVar112 = vmaxss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_8 + 4 + lVar13 * 2)));
      dVar41 = (double)puVar10[10];
      auVar97._8_8_ = 0;
      auVar97._0_8_ = dVar41;
      auVar119 = vminss_avx(auVar112,ZEXT416((uint)__real_3f800000));
      auVar112 = vmaxss_avx(auVar119,ZEXT416(*(uint *)(param_7 + (longlong)iVar7 * 4)));
      auVar117._8_8_ = 0;
      auVar117._0_8_ = puVar10[0xb];
      *(int *)(param_7 + (longlong)iVar7 * 4) = auVar112._0_4_;
      fVar16 = auVar119._0_4_;
      if (fVar16 <= __real_3727c5ac) {
        local_238 = auVar86._0_8_;
        auVar43 = local_2e8;
        auVar60 = auVar125;
        auVar31 = local_268;
        auVar50 = local_288;
      }
      else if (__real_3f7fff58 <= fVar16) {
        local_1e8 = auVar117;
        local_208 = auVar102;
        local_1a8 = auVar57;
        local_148 = uVar2;
        auVar65._0_8_ = auVar82._0_8_;
        uVar111 = uVar3;
        auVar31 = auVar123;
        auVar50 = auVar114;
        local_188._0_8_ = dVar101;
        local_2b8._0_8_ = uVar4;
        local_2a8._0_8_ = dVar44;
        local_168._0_8_ = dVar25;
        local_298._0_8_ = dVar41;
      }
      else {
        auVar82 = vunpcklpd_avx(auVar24,auVar50);
        auVar65 = vunpcklpd_avx(local_228,auVar31);
        auVar93._16_16_ = auVar82;
        auVar93._0_16_ = auVar65;
        auVar24 = vunpcklpd_avx(auVar122,auVar80);
        auVar112 = vunpcklpd_avx(auVar116,auVar70);
        auVar74._0_8_ = auVar65._0_8_ * auVar112._0_8_;
        auVar74._8_8_ = auVar65._8_8_ * auVar112._8_8_;
        auVar74._16_8_ = auVar82._0_8_ * auVar24._0_8_;
        auVar74._24_8_ = auVar82._8_8_ * auVar24._8_8_;
        auVar62 = vpermpd_avx2(auVar74,0x4e);
        auVar75._0_8_ = auVar62._0_8_ + auVar74._0_8_;
        auVar75._8_8_ = auVar62._8_8_ + auVar74._8_8_;
        auVar75._16_8_ = auVar62._16_8_ + auVar74._16_8_;
        auVar75._24_8_ = auVar62._24_8_ + auVar74._24_8_;
        auVar62 = vpermpd_avx2(auVar75,0x39);
        auVar76._0_8_ = auVar62._0_8_ + auVar75._0_8_;
        auVar76._8_8_ = auVar62._8_8_ + auVar75._8_8_;
        auVar76._16_8_ = auVar62._16_8_ + auVar75._16_8_;
        auVar76._24_8_ = auVar62._24_8_ + auVar75._24_8_;
        auVar31 = vunpcklpd_avx(local_298,local_1e8);
        auVar50 = vunpcklpd_avx(local_168,local_208);
        auVar115._16_16_ = auVar31;
        auVar115._0_16_ = auVar50;
        auVar119 = vunpcklpd_avx(auVar97,auVar117);
        auVar62 = vcmppd_avx(ZEXT832(0) << 0x40,auVar76,2);
        auVar62 = vpshufb_avx2(auVar62,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar62 = vblendvps_avx(ZEXT832(0) << 0x40,
                                ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                ,auVar62);
        auVar9 = vunpcklpd_avx(auVar46,auVar102);
        auVar53._16_16_ = auVar119;
        auVar53._0_16_ = auVar9;
        auVar110 = vsubpd_avx(auVar53,auVar115);
        dVar45 = (double)fVar16;
        auVar118._0_8_ = dVar45 * auVar110._0_8_ + auVar50._0_8_;
        auVar118._8_8_ = dVar45 * auVar110._8_8_ + auVar50._8_8_;
        auVar121._16_8_ = dVar45 * auVar110._16_8_ + auVar31._0_8_;
        auVar121._0_16_ = auVar118;
        auVar121._24_8_ = dVar45 * auVar110._24_8_ + auVar31._8_8_;
        auVar119 = vunpcklpd_avx(local_2a8,local_1a8);
        local_1e8 = vshufpd_avx(auVar121._16_16_,auVar121._16_16_,1);
        auVar9 = vunpcklpd_avx(local_188,local_2b8);
        local_208 = vshufpd_avx(auVar118,auVar118,1);
        auVar106._16_16_ = auVar119;
        auVar106._0_16_ = auVar9;
        auVar31 = vmovlhps_avx(auVar17,auVar57);
        auVar50 = vmovlhps_avx(auVar66,auVar26);
        auVar32._16_16_ = auVar31;
        auVar32._0_16_ = auVar50;
        auVar110 = vsubpd_avx(auVar32,auVar106);
        auVar71._0_8_ = dVar45 * auVar110._0_8_ + auVar9._0_8_;
        auVar71._8_8_ = dVar45 * auVar110._8_8_ + auVar9._8_8_;
        auVar77._16_8_ = dVar45 * auVar110._16_8_ + auVar119._0_8_;
        auVar77._0_16_ = auVar71;
        auVar77._24_8_ = dVar45 * auVar110._24_8_ + auVar119._8_8_;
        dVar44 = __real_3ff0000000000000 - dVar45;
        auVar110 = vsubpd_avx(ZEXT832(0) << 0x40,auVar93);
        auVar54._0_4_ = ~auVar62._0_4_ & auVar110._0_4_;
        auVar54._4_4_ = ~auVar62._4_4_ & auVar110._4_4_;
        auVar54._8_4_ = ~auVar62._8_4_ & auVar110._8_4_;
        auVar54._12_4_ = ~auVar62._12_4_ & auVar110._12_4_;
        auVar54._16_4_ = ~auVar62._16_4_ & auVar110._16_4_;
        auVar54._20_4_ = ~auVar62._20_4_ & auVar110._20_4_;
        auVar54._24_4_ = ~auVar62._24_4_ & auVar110._24_4_;
        auVar54._28_4_ = ~auVar62._28_4_ & auVar110._28_4_;
        auVar55._0_8_ = (ulonglong)auVar65._0_8_ & auVar62._0_8_;
        auVar55._8_8_ = (ulonglong)auVar65._8_8_ & auVar62._8_8_;
        auVar55._16_8_ = (ulonglong)auVar82._0_8_ & auVar62._16_8_;
        auVar55._24_8_ = (ulonglong)auVar82._8_8_ & auVar62._24_8_;
        auVar55 = auVar55 | auVar54;
        auVar119 = vunpcklpd_avx(local_2e8,local_288);
        auVar9 = vunpcklpd_avx(auVar125,local_268);
        auVar43 = vunpcklpd_avx(auVar43,auVar114);
        auVar67 = vunpcklpd_avx(auVar60,auVar123);
        auVar88._0_8_ = auVar119._0_8_ * auVar43._0_8_ + auVar67._0_8_ * auVar9._0_8_;
        auVar88._8_8_ = auVar119._8_8_ * auVar43._8_8_ + auVar67._8_8_ * auVar9._8_8_;
        auVar31 = vshufpd_avx(auVar88,auVar88,1);
        dVar101 = auVar88._0_8_ + auVar31._0_8_;
        local_1a8 = vshufpd_avx(auVar77._16_16_,auVar77._16_16_,1);
        auVar89._0_4_ = (float)dVar101;
        auVar89._4_4_ = (int)((ulonglong)dVar101 >> 0x20);
        auVar89._8_8_ = 0;
        dVar25 = dVar45 * auVar112._0_8_ + dVar44 * auVar55._0_8_;
        dVar41 = dVar45 * auVar112._8_8_ + dVar44 * auVar55._8_8_;
        dVar42 = dVar45 * auVar24._0_8_ + dVar44 * auVar55._16_8_;
        dVar44 = dVar45 * auVar24._8_8_ + dVar44 * auVar55._24_8_;
        auVar103._0_4_ = __real_80000000 ^ (uint)(__real_3f800000 - fVar16);
        auVar103._4_4_ = __real_80000000;
        auVar103._8_4_ = __real_80000000;
        auVar103._12_4_ = __real_80000000;
        auVar31 = vcmpss_avx(ZEXT816(0) << 0x20,auVar89,2);
        auVar31 = vblendvps_avx(auVar103,ZEXT416((uint)(__real_3f800000 - fVar16)),auVar31);
        auVar90._0_8_ = dVar25 * dVar25 + dVar42 * dVar42;
        auVar90._8_8_ = dVar41 * dVar41 + dVar44 * dVar44;
        auVar50 = vshufpd_avx(auVar90,auVar90,1);
        dVar101 = auVar90._0_8_ + auVar50._0_8_;
        auVar91._8_8_ = 0;
        auVar91._0_8_ = dVar101;
        dVar101 = __real_3ff0000000000000 / SQRT(dVar101);
        auVar107._8_8_ = 0;
        auVar107._0_8_ = __real_3e45798ee2308c3a;
        auVar50 = vcmpsd_avx(auVar107,auVar91,6);
        auVar82._0_8_ = ~auVar50._0_8_ & __real_ffffffffffffffff;
        auVar18._0_8_ = auVar82._0_8_ & (ulonglong)(dVar101 * dVar25);
        auVar18._8_8_ = auVar82._0_8_ & (ulonglong)(dVar101 * dVar41);
        auVar20._16_8_ = auVar82._0_8_ & (ulonglong)(dVar101 * dVar42);
        auVar20._0_16_ = auVar18;
        auVar20._24_8_ = auVar82._0_8_ & (ulonglong)(dVar101 * dVar44);
        auVar33._0_8_ =
             ~auVar82._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar33._8_8_ = ~auVar82._0_8_ & _UNK_150b54548;
        auVar33._16_8_ = ~auVar82._0_8_ & _UNK_150b54550;
        auVar33._24_8_ = ~auVar82._0_8_ & _UNK_150b54558;
        auVar112 = auVar20._16_16_ | auVar33._16_16_;
        auVar24 = vshufpd_avx(auVar71,auVar71,1);
        auVar50 = vshufps_avx(auVar112,auVar112,0x4e);
        local_238 = auVar50._0_8_;
        auVar65 = vshufps_avx(auVar18,auVar18,0x4e);
        dVar101 = (double)auVar31._0_4_;
        dVar44 = auVar67._0_8_ * dVar45 + auVar9._0_8_ * dVar101;
        dVar25 = auVar67._8_8_ * dVar45 + auVar9._8_8_ * dVar101;
        dVar41 = auVar43._0_8_ * dVar45 + auVar119._0_8_ * dVar101;
        dVar42 = auVar43._8_8_ * dVar45 + auVar119._8_8_ * dVar101;
        auVar47._0_8_ = dVar44 * dVar44 + dVar41 * dVar41;
        auVar47._8_8_ = dVar25 * dVar25 + dVar42 * dVar42;
        auVar31 = vshufpd_avx(auVar47,auVar47,1);
        dVar101 = auVar47._0_8_ + auVar31._0_8_;
        auVar48._8_8_ = 0;
        auVar48._0_8_ = dVar101;
        auVar31 = vcmpsd_avx(auVar107,auVar48,6);
        auVar82._0_8_ = ~auVar31._0_8_ & __real_ffffffffffffffff;
        dVar101 = __real_3ff0000000000000 / SQRT(dVar101);
        auVar60._0_8_ = (ulonglong)(dVar44 * dVar101) & auVar82._0_8_;
        auVar60._8_8_ = (ulonglong)(dVar25 * dVar101) & auVar82._0_8_;
        auVar78._16_8_ = (ulonglong)(dVar41 * dVar101) & auVar82._0_8_;
        auVar78._0_16_ = auVar60;
        auVar78._24_8_ = (ulonglong)(dVar42 * dVar101) & auVar82._0_8_;
        auVar34._0_8_ =
             ~auVar82._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar34._8_8_ = ~auVar82._0_8_ & _UNK_150b54548;
        auVar34._16_8_ = ~auVar82._0_8_ & _UNK_150b54550;
        auVar34._24_8_ = ~auVar82._0_8_ & _UNK_150b54558;
        auVar43 = auVar78._16_16_ | auVar34._16_16_;
        auVar31 = vshufps_avx(auVar60,auVar60,0x4e);
        auVar50 = vshufps_avx(auVar43,auVar43,0x4e);
        local_148 = auVar65._0_8_;
        auVar65._0_8_ = auVar18._0_8_;
        uVar111 = auVar112._0_8_;
        local_188._0_8_ = auVar71._0_8_;
        local_2b8._0_8_ = auVar24._0_8_;
        local_2a8._0_8_ = auVar77._16_8_;
        local_168._0_8_ = auVar118._0_8_;
        local_298._0_8_ = auVar121._16_8_;
      }
      local_108 = auVar125._0_8_;
      *(undefined8 *)(param_4 + lVar13 * 8) = local_108;
      *(undefined8 *)(param_4 + 8 + lVar13 * 8) = local_268._0_8_;
      *(undefined8 *)(param_4 + 0x10 + lVar13 * 8) = local_2e8._0_8_;
      *(undefined8 *)(param_4 + 0x18 + lVar13 * 8) = local_288._0_8_;
      *(longlong *)(param_5 + lVar13 * 8) = auVar61._0_8_;
      *(longlong *)(param_5 + 8 + lVar13 * 8) = auVar123._0_8_;
      *(longlong *)(param_5 + 0x10 + lVar13 * 8) = auVar61._16_8_;
      *(longlong *)(param_5 + 0x18 + lVar13 * 8) = auVar114._0_8_;
      if (iVar8 != -1) {
        pdVar1 = (double *)(param_6 + lVar14 * 0x20);
        auVar21._0_8_ =
             ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar1;
        auVar21._8_8_ = _UNK_150b543c8 * pdVar1[1];
        auVar21._16_8_ = _UNK_150b543d0 * pdVar1[2];
        auVar21._24_8_ = _UNK_150b543d8 * pdVar1[3];
        auVar62 = vpermpd_avx2(auVar21,0xff);
        auVar82 = vunpcklpd_avx(auVar60,auVar31);
        auVar65 = vunpcklpd_avx(auVar43,auVar50);
        auVar24 = vunpcklpd_avx(auVar50,auVar43);
        auVar112 = vunpcklpd_avx(auVar31,auVar60);
        auVar110 = vpermpd_avx2(auVar21,0x55);
        auVar109 = vpermpd_avx2(auVar21,0xaa);
        dVar44 = auVar112._0_8_ * auVar109._0_8_ *
                 ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                 auVar65._0_8_ * auVar110._0_8_ *
                 ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                 auVar62._0_8_ * auVar82._0_8_ +
                 auVar24._0_8_ * auVar21._0_8_ *
                 ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        dVar25 = auVar112._8_8_ * auVar109._8_8_ * _UNK_150b54428 +
                 auVar65._8_8_ * auVar110._8_8_ * _UNK_150b54408 +
                 auVar62._8_8_ * auVar82._8_8_ + auVar24._8_8_ * auVar21._0_8_ * _UNK_150b543e8;
        dVar41 = auVar24._0_8_ * auVar109._16_8_ * _UNK_150b54430 +
                 auVar82._0_8_ * auVar110._16_8_ * _UNK_150b54410 +
                 auVar62._16_8_ * auVar65._0_8_ + auVar112._0_8_ * auVar21._0_8_ * _UNK_150b543f0;
        dVar42 = auVar24._8_8_ * auVar109._24_8_ * _UNK_150b54438 +
                 auVar82._8_8_ * auVar110._24_8_ * _UNK_150b54418 +
                 auVar62._24_8_ * auVar65._8_8_ + auVar112._8_8_ * auVar21._0_8_ * _UNK_150b543f8;
        auVar27._0_8_ = dVar44 * dVar44 + dVar41 * dVar41;
        auVar27._8_8_ = dVar25 * dVar25 + dVar42 * dVar42;
        auVar82 = vshufpd_avx(auVar27,auVar27,1);
        dVar101 = auVar27._0_8_ + auVar82._0_8_;
        auVar49._8_8_ = 0;
        auVar49._0_8_ = __real_3e45798ee2308c3a;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar101;
        auVar82 = vcmpsd_avx(auVar49,auVar28,6);
        auVar82._0_8_ = ~auVar82._0_8_ & __real_ffffffffffffffff;
        dVar101 = __real_3ff0000000000000 / SQRT(dVar101);
        auVar65._0_8_ = (ulonglong)(dVar44 * dVar101) & auVar82._0_8_;
        auVar65._8_8_ = (ulonglong)(dVar25 * dVar101) & auVar82._0_8_;
        auVar94._16_8_ = (ulonglong)(dVar41 * dVar101) & auVar82._0_8_;
        auVar94._0_16_ = auVar65;
        auVar94._24_8_ = (ulonglong)(dVar42 * dVar101) & auVar82._0_8_;
        auVar22._0_8_ =
             ~auVar82._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar22._8_8_ = ~auVar82._0_8_ & _UNK_150b54548;
        auVar22._16_8_ = ~auVar82._0_8_ & _UNK_150b54550;
        auVar22._24_8_ = ~auVar82._0_8_ & _UNK_150b54558;
        auVar24 = auVar94._16_16_ | auVar22._16_16_;
        auVar82 = vshufps_avx(auVar65,auVar65,0x4e);
        local_148 = auVar82._0_8_;
        uVar111 = auVar24._0_8_;
        auVar82 = vshufps_avx(auVar24,auVar24,0x4e);
        local_238 = auVar82._0_8_;
      }
      *(longlong *)(param_6 + lVar13 * 8) = auVar60._0_8_;
      *(longlong *)(param_6 + 8 + lVar13 * 8) = auVar31._0_8_;
      *(longlong *)(param_6 + 0x10 + lVar13 * 8) = auVar43._0_8_;
      *(longlong *)(param_6 + 0x18 + lVar13 * 8) = auVar50._0_8_;
      *(ulonglong *)(param_1 + -0x58 + lVar15 * 2) = auVar65._0_8_;
      *(ulonglong *)(param_1 + -0x50 + lVar15 * 2) = local_148;
      *(ulonglong *)(param_1 + -0x48 + lVar15 * 2) = uVar111;
      *(ulonglong *)(param_1 + -0x40 + lVar15 * 2) = local_238;
      *(undefined8 *)(param_1 + -0x38 + lVar15 * 2) = local_188._0_8_;
      *(undefined8 *)(param_1 + -0x30 + lVar15 * 2) = local_2b8._0_8_;
      *(undefined8 *)(param_1 + -0x28 + lVar15 * 2) = local_2a8._0_8_;
      *(undefined8 *)(param_1 + -0x20 + lVar15 * 2) = local_1a8._0_8_;
      *(undefined8 *)(param_1 + -0x18 + lVar15 * 2) = local_168._0_8_;
      *(undefined8 *)(param_1 + -0x10 + lVar15 * 2) = local_208._0_8_;
      *(undefined8 *)(param_1 + -8 + lVar15 * 2) = local_298._0_8_;
      *(undefined8 *)(param_1 + lVar15 * 2) = local_1e8._0_8_;
      iVar12 = iVar12 + 1;
      lVar15 = lVar15 + 0x30;
      lVar13 = lVar13 + 4;
    } while ((ulonglong)param_10 << 2 != lVar13);
  }
  return;
}

// BlendPosesPerBoneFilterScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx2 @ 140aac0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScale___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_s_5B_unFVector_5D__3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx2
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10,
               undefined1 (*param_11) [32])

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  int iVar12;
  ulonglong *puVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  double dVar38;
  double dVar40;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar19 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  double dVar39;
  undefined1 in_ZMM0 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  float fVar54;
  double dVar55;
  ulonglong uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar85 [16];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  ulonglong uVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [32];
  undefined1 auVar104 [32];
  undefined8 uVar108;
  undefined1 auVar105 [32];
  double dVar109;
  undefined1 auVar106 [32];
  undefined1 auVar107 [64];
  double dVar110;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  double dVar125;
  double dVar127;
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar114 [16];
  undefined1 auVar121 [32];
  undefined1 auVar123 [32];
  double dVar126;
  undefined1 auVar124 [64];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  double dVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  double dVar135;
  double dVar136;
  double dVar137;
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar138 [16];
  undefined1 auVar139 [64];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_208 [16];
  undefined1 auStack_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 auStack_1d8 [16];
  undefined1 local_1b8 [16];
  undefined1 auStack_1a8 [16];
  undefined1 local_188 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 auVar50 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar78 [32];
  undefined1 auVar94 [32];
  undefined1 auVar99 [32];
  undefined1 auVar103 [32];
  undefined1 auVar117 [32];
  undefined1 auVar122 [32];
  undefined1 auVar143 [32];
  undefined1 auVar147 [32];
  
  auVar30 = *param_11;
  auVar28 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  auVar28 = auVar28 & ~auVar30;
  if ((((((((SUB321(auVar28 >> 0x1f,0) & 1) == 0 && (SUB321(auVar28 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar28 >> 0x5f,0) & 1) == 0) && SUB321(auVar28 >> 0x7f,0) == '\0') &&
        (SUB321(auVar28 >> 0x9f,0) & 1) == 0) && SUB321(auVar28 >> 0xbf,0) == '\0') &&
      (SUB321(auVar28 >> 0xdf,0) & 1) == 0) && -1 < auVar28[0x1f]) {
    if (0 < (int)param_10) {
      lVar15 = 0;
      lVar17 = 0;
      do {
        iVar12 = *(int *)(param_8 + lVar17 * 8);
        iVar6 = *(int *)(param_9 + lVar17 * 4);
        lVar16 = (longlong)iVar6;
        local_1e8._0_8_ = *(ulonglong *)(param_2 + lVar15 * 4);
        local_1e8._8_8_ = 0;
        local_258._0_8_ = *(ulonglong *)(param_2 + 8 + lVar15 * 4);
        local_258._8_8_ = 0;
        local_208._8_8_ = 0;
        local_208._0_8_ = *(ulonglong *)(param_2 + 0x10 + lVar15 * 4);
        local_2c8._0_8_ = *(ulonglong *)(param_2 + 0x18 + lVar15 * 4);
        local_2c8._8_8_ = 0;
        local_1b8._0_8_ = *(double *)(param_2 + 0x20 + lVar15 * 4);
        local_1b8._8_8_ = 0;
        local_248._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar15 * 4);
        auVar42._0_8_ = *(double *)(param_2 + 0x30 + lVar15 * 4);
        local_2d8._0_8_ = *(ulonglong *)(param_2 + 0x38 + lVar15 * 4);
        local_238._0_8_ = *(double *)(param_2 + 0x40 + lVar15 * 4);
        local_238._8_8_ = 0;
        local_2e8._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar15 * 4);
        local_2e8._8_8_ = 0;
        uVar108 = 0;
        local_2d8._8_8_ = 0;
        auVar107 = ZEXT864(*(ulonglong *)(param_2 + 0x50 + lVar15 * 4));
        local_248._8_8_ = 0;
        auVar124 = ZEXT864(*(ulonglong *)(param_2 + 0x48 + lVar15 * 4));
        puVar13 = (ulonglong *)GetTransformFromArray(param_3,iVar12,(int)lVar17);
        auVar47._0_8_ = (double)puVar13[8];
        auVar81._8_8_ = 0;
        auVar81._0_8_ = auVar47._0_8_;
        uVar56 = puVar13[9];
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar56;
        dVar38 = (double)puVar13[10];
        auVar138._8_8_ = 0;
        auVar138._0_8_ = dVar38;
        auVar72 = auVar124._0_16_;
        local_268._0_8_ = auVar124._0_8_;
        dVar39 = auVar107._0_8_;
        if (lVar16 == -1) {
          local_168._8_8_ = 0;
          local_168._0_8_ = local_238._0_8_;
          local_2b8 = auVar72;
          local_2a8 = auVar138;
          local_298 = auVar107._0_16_;
          local_288 = auVar19;
          local_278 = auVar81;
        }
        else {
          lVar7 = lVar16 * 0x18;
          auVar60 = vunpcklpd_avx(local_238,auVar72);
          local_168._0_8_ = auVar60._0_8_ * *(double *)(param_4 + lVar7);
          local_168._8_8_ = auVar60._8_8_ * ((double *)(param_4 + lVar7))[1];
          local_298._8_8_ = 0;
          local_298._0_8_ = dVar39 * *(double *)(param_4 + 0x10 + lVar7);
          auVar60 = vunpcklpd_avx(auVar81,auVar19);
          local_278._0_8_ = auVar60._0_8_ * *(double *)(param_5 + lVar7);
          local_278._8_8_ = auVar60._8_8_ * ((double *)(param_5 + lVar7))[1];
          local_2b8 = vshufpd_avx(local_168._0_16_,local_168._0_16_,1);
          local_288 = vshufpd_avx(local_278,local_278,1);
          local_2a8._8_8_ = 0;
          local_2a8._0_8_ = dVar38 * *(double *)(param_5 + 0x10 + lVar7);
        }
        uVar100 = *puVar13;
        auVar43._8_8_ = 0;
        auVar43._0_8_ = uVar100;
        uVar1 = puVar13[1];
        auVar150._8_8_ = 0;
        auVar150._0_8_ = uVar1;
        auVar148._8_8_ = 0;
        auVar148._0_8_ = puVar13[2];
        uVar2 = puVar13[3];
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar2;
        dVar40 = (double)puVar13[4];
        auVar142._8_8_ = 0;
        auVar142._0_8_ = dVar40;
        uVar3 = puVar13[5];
        auVar146._8_8_ = 0;
        auVar146._0_8_ = uVar3;
        dVar55 = (double)puVar13[6];
        auVar132._8_8_ = 0;
        auVar132._0_8_ = dVar55;
        auVar60._0_12_ = ZEXT812(0);
        auVar60._12_4_ = 0;
        auVar60 = vmaxss_avx(auVar60,ZEXT416(*(uint *)(param_8 + 4 + lVar17 * 8)));
        uVar4 = puVar13[7];
        auVar152._8_8_ = 0;
        auVar152._0_8_ = uVar4;
        auVar87 = vminss_avx(auVar60,ZEXT416(__real_3f800000));
        auVar60 = vmaxss_avx(auVar87,ZEXT416(*(uint *)(param_7 + (longlong)iVar12 * 4)));
        uVar5 = puVar13[0xb];
        auVar114._8_8_ = 0;
        auVar114._0_8_ = uVar5;
        *(int *)(param_7 + (longlong)iVar12 * 4) = auVar60._0_4_;
        fVar54 = auVar87._0_4_;
        if (fVar54 <= __real_3727c5ac) {
          auVar30 = ZEXT1632(local_298);
          auVar28 = ZEXT1632(ZEXT816(0));
          auVar72 = local_168._0_16_;
          auVar81 = local_2b8;
        }
        else if (__real_3f7fff58 <= fVar54) {
          local_208 = auVar148;
          auVar30 = ZEXT1632(local_2a8);
          auVar28 = ZEXT1632(ZEXT816(0));
          local_2e8._0_8_ = uVar5;
          auVar42._0_8_ = dVar55;
          local_2d8._0_8_ = uVar4;
          auVar72 = local_278;
          auVar81 = local_288;
          dVar39 = dVar38;
          local_268._0_8_ = uVar56;
          local_238._0_8_ = auVar47._0_8_;
          local_1e8._0_8_ = uVar100;
          local_258._0_8_ = uVar1;
          local_2c8._0_8_ = uVar2;
          local_1b8._0_8_ = dVar40;
          local_248._0_8_ = uVar3;
        }
        else {
          auStack_1f8 = vunpcklpd_avx(local_208,local_2c8);
          local_2c8._8_8_ = uVar108;
          local_2c8._0_8_ = auVar42._0_8_;
          auVar47 = vunpcklpd_avx(local_1e8,local_258);
          auVar77._16_16_ = auStack_1f8;
          auVar77._0_16_ = auVar47;
          auVar18 = vunpcklpd_avx(auVar148,auVar18);
          auVar43 = vunpcklpd_avx(auVar43,auVar150);
          auVar28._0_8_ = auVar47._0_8_ * auVar43._0_8_;
          auVar28._8_8_ = auVar47._8_8_ * auVar43._8_8_;
          auVar28._16_8_ = auStack_1f8._0_8_ * auVar18._0_8_;
          auVar28._24_8_ = auStack_1f8._8_8_ * auVar18._8_8_;
          auVar30 = vpermpd_avx2(auVar28,0x4e);
          auVar89._0_8_ = auVar28._0_8_ + auVar30._0_8_;
          auVar89._8_8_ = auVar28._8_8_ + auVar30._8_8_;
          auVar89._16_8_ = auVar28._16_8_ + auVar30._16_8_;
          auVar89._24_8_ = auVar28._24_8_ + auVar30._24_8_;
          auVar30 = vpermpd_avx2(auVar89,0x39);
          auVar32._0_8_ = auVar89._0_8_ + auVar30._0_8_;
          auVar32._8_8_ = auVar89._8_8_ + auVar30._8_8_;
          auVar32._16_8_ = auVar89._16_8_ + auVar30._16_8_;
          auVar32._24_8_ = auVar89._24_8_ + auVar30._24_8_;
          auVar42 = vunpcklpd_avx(auVar107._0_16_,local_2e8);
          auVar72 = vunpcklpd_avx(local_238,auVar72);
          auVar48._16_16_ = auVar42;
          auVar48._0_16_ = auVar72;
          auVar138 = vunpcklpd_avx(auVar138,auVar114);
          auVar114 = ZEXT816(0);
          auVar28 = ZEXT1632(auVar114);
          auVar30 = vcmppd_avx(ZEXT1632(auVar114),auVar32,2);
          auVar30 = vpshufb_avx2(auVar30,
                                 ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                                );
          auVar34._4_4_ = _UNK_150b51304;
          auVar34._0_4_ = ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
          auVar34._8_4_ = _UNK_150b51308;
          auVar34._12_4_ = _UNK_150b5130c;
          auVar34._16_4_ = _UNK_150b51310;
          auVar34._20_4_ = _UNK_150b51314;
          auVar34._24_4_ = _UNK_150b51318;
          auVar34._28_4_ = _UNK_150b5131c;
          auVar30 = vblendvps_avx(ZEXT1632(auVar114),auVar34,auVar30);
          auVar81 = vunpcklpd_avx(auVar81,auVar19);
          auVar29._16_16_ = auVar138;
          auVar29._0_16_ = auVar81;
          dVar55 = (double)fVar54;
          auVar34 = vsubpd_avx(auVar29,auVar48);
          auVar61._0_8_ = dVar55 * auVar34._0_8_ + auVar72._0_8_;
          auVar61._8_8_ = dVar55 * auVar34._8_8_ + auVar72._8_8_;
          auVar67._16_8_ = dVar55 * auVar34._16_8_ + auVar42._0_8_;
          auVar67._0_16_ = auVar61;
          auVar67._24_8_ = dVar55 * auVar34._24_8_ + auVar42._8_8_;
          auVar42 = vunpcklpd_avx(local_2c8,local_2d8);
          auVar19 = vshufpd_avx(auVar67._16_16_,auVar67._16_16_,1);
          auVar81 = vunpcklpd_avx(local_1b8,local_248);
          auVar138 = vshufpd_avx(auVar61,auVar61,1);
          auVar123._16_16_ = auVar42;
          auVar123._0_16_ = auVar81;
          auVar72 = vunpcklpd_avx(auVar132,auVar152);
          auVar60 = vunpcklpd_avx(auVar142,auVar146);
          auVar49._16_16_ = auVar72;
          auVar49._0_16_ = auVar60;
          auVar34 = vsubpd_avx(auVar49,auVar123);
          auVar44._0_8_ = dVar55 * auVar34._0_8_ + auVar81._0_8_;
          auVar44._8_8_ = dVar55 * auVar34._8_8_ + auVar81._8_8_;
          auVar50._16_8_ = dVar55 * auVar34._16_8_ + auVar42._0_8_;
          auVar50._0_16_ = auVar44;
          auVar50._24_8_ = dVar55 * auVar34._24_8_ + auVar42._8_8_;
          auVar60 = vshufpd_avx(auVar50._16_16_,auVar50._16_16_,1);
          auVar87 = vshufpd_avx(auVar44,auVar44,1);
          auVar42._0_8_ = __real_3ff0000000000000 - dVar55;
          auVar34 = vsubpd_avx(ZEXT1632(auVar114),auVar77);
          auVar51._0_4_ = ~auVar30._0_4_ & auVar34._0_4_;
          auVar51._4_4_ = ~auVar30._4_4_ & auVar34._4_4_;
          auVar51._8_4_ = ~auVar30._8_4_ & auVar34._8_4_;
          auVar51._12_4_ = ~auVar30._12_4_ & auVar34._12_4_;
          auVar51._16_4_ = ~auVar30._16_4_ & auVar34._16_4_;
          auVar51._20_4_ = ~auVar30._20_4_ & auVar34._20_4_;
          auVar51._24_4_ = ~auVar30._24_4_ & auVar34._24_4_;
          auVar51._28_4_ = ~auVar30._28_4_ & auVar34._28_4_;
          auVar52._0_8_ = auVar30._0_8_ & (ulonglong)auVar47._0_8_;
          auVar52._8_8_ = auVar30._8_8_ & (ulonglong)auVar47._8_8_;
          auVar52._16_8_ = auVar30._16_8_ & (ulonglong)auStack_1f8._0_8_;
          auVar52._24_8_ = auVar30._24_8_ & (ulonglong)auStack_1f8._8_8_;
          auVar52 = auVar52 | auVar51;
          auVar47._0_8_ = dVar55 * auVar43._0_8_ + auVar42._0_8_ * auVar52._0_8_;
          dVar38 = dVar55 * auVar43._8_8_ + auVar42._0_8_ * auVar52._8_8_;
          dVar39 = dVar55 * auVar18._0_8_ + auVar42._0_8_ * auVar52._16_8_;
          dVar40 = dVar55 * auVar18._8_8_ + auVar42._0_8_ * auVar52._24_8_;
          auVar45._0_8_ = auVar47._0_8_ * auVar47._0_8_ + dVar39 * dVar39;
          auVar45._8_8_ = dVar38 * dVar38 + dVar40 * dVar40;
          auVar42 = vshufpd_avx(auVar45,auVar45,1);
          auVar42._0_8_ = auVar45._0_8_ + auVar42._0_8_;
          auVar46._8_8_ = 0;
          auVar46._0_8_ = auVar42._0_8_;
          auVar42._0_8_ = __real_3ff0000000000000 / SQRT(auVar42._0_8_);
          auVar62._8_8_ = 0;
          auVar62._0_8_ = __real_3e45798ee2308c3a;
          auVar81 = vcmpsd_avx(auVar62,auVar46,6);
          uVar56 = ~auVar81._0_8_ & __real_ffffffffffffffff;
          auVar63._0_8_ = (ulonglong)(auVar47._0_8_ * auVar42._0_8_) & uVar56;
          auVar63._8_8_ = (ulonglong)(dVar38 * auVar42._0_8_) & uVar56;
          auVar68._16_8_ = (ulonglong)(dVar39 * auVar42._0_8_) & uVar56;
          auVar68._0_16_ = auVar63;
          auVar68._24_8_ = (ulonglong)(dVar40 * auVar42._0_8_) & uVar56;
          auVar30._0_8_ =
               ~uVar56 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar30._8_8_ = ~uVar56 & _UNK_150b54548;
          auVar30._16_8_ = ~uVar56 & _UNK_150b54550;
          auVar30._24_8_ = ~uVar56 & _UNK_150b54558;
          local_208 = auVar68._16_16_ | auVar30._16_16_;
          auVar47 = vshufps_avx(local_208,local_208,0x4e);
          auVar18 = vshufps_avx(auVar63,auVar63,0x4e);
          auVar42 = vunpcklpd_avx(local_278,local_288);
          auVar31._16_16_ = local_2a8;
          auVar31._0_16_ = auVar42;
          auVar42 = vunpcklpd_avx(local_168._0_16_,local_2b8);
          auVar53._16_16_ = local_298;
          auVar53._0_16_ = auVar42;
          auVar30 = vsubpd_avx(auVar31,auVar53);
          auVar72._0_8_ = dVar55 * auVar30._0_8_ + auVar42._0_8_;
          auVar72._8_8_ = dVar55 * auVar30._8_8_ + auVar42._8_8_;
          auVar78._16_8_ = dVar55 * auVar30._16_8_ + local_298._0_8_;
          auVar78._0_16_ = auVar72;
          auVar78._24_8_ = dVar55 * auVar30._24_8_ + local_298._8_8_;
          auVar81 = vshufpd_avx(auVar72,auVar72,1);
          auVar30 = ZEXT1632(auVar78._16_16_);
          local_2e8._0_8_ = auVar19._0_8_;
          auVar42._0_8_ = auVar50._16_8_;
          local_2d8._0_8_ = auVar60._0_8_;
          dVar39 = auVar67._16_8_;
          local_268._0_8_ = auVar138._0_8_;
          local_238._0_8_ = auVar61._0_8_;
          local_1e8._0_8_ = auVar63._0_8_;
          local_258._0_8_ = auVar18._0_8_;
          local_2c8._0_8_ = auVar47._0_8_;
          local_1b8._0_8_ = auVar44._0_8_;
          local_248._0_8_ = auVar87._0_8_;
        }
        *(longlong *)(param_4 + lVar15) = local_168._0_8_;
        *(longlong *)(param_4 + 8 + lVar15) = local_2b8._0_8_;
        *(double *)(param_4 + 0x10 + lVar15) = local_298._0_8_;
        *(undefined8 *)(param_5 + lVar15) = local_278._0_8_;
        *(undefined8 *)(param_5 + 8 + lVar15) = local_288._0_8_;
        *(undefined8 *)(param_5 + 0x10 + lVar15) = local_2a8._0_8_;
        auVar47._0_8_ = (double)local_238._0_8_;
        if (iVar6 != -1) {
          auVar47._0_8_ = *(double *)(param_6 + 0x10 + lVar16 * 0x18);
          auVar19 = *(undefined1 (*) [16])(param_6 + lVar16 * 0x18);
          auVar69._16_8_ = auVar47._0_8_;
          auVar69._0_16_ = auVar19;
          auVar69._24_8_ = 0;
          dVar38 = auVar19._0_8_;
          auVar79._0_8_ = (ulonglong)dVar38 & __real_7fffffffffffffff;
          dVar39 = auVar19._8_8_;
          auVar79._8_8_ = (ulonglong)dVar39 & __real_7fffffffffffffff;
          auVar79._16_8_ = (ulonglong)auVar47._0_8_ & __real_7fffffffffffffff;
          auVar79._24_8_ = 0;
          auVar105._8_8_ = __real_3e45798ee2308c3a;
          auVar105._0_8_ = __real_3e45798ee2308c3a;
          auVar105._16_8_ = __real_3e45798ee2308c3a;
          auVar105._24_8_ = __real_3e45798ee2308c3a;
          auVar34 = vcmppd_avx(auVar79,auVar105,2);
          auVar89 = vpcmpeqd_avx2(auVar30,auVar30);
          auVar34 = vpackssdw_avx2(auVar34,auVar89);
          auVar29 = vpermq_avx2(auVar34,0xd8);
          auVar84._8_8_ = __real_46c8a6e32246c99c;
          auVar84._0_8_ = __real_46c8a6e32246c99c;
          auVar84._16_8_ = __real_46c8a6e32246c99c;
          auVar84._24_8_ = __real_46c8a6e32246c99c;
          auVar34 = vcmppd_avx(auVar69,auVar84,2);
          auVar89 = vpackssdw_avx2(auVar34,auVar89);
          auVar92._8_8_ = __real_3914c4e977ba1f5c;
          auVar92._0_8_ = __real_3914c4e977ba1f5c;
          auVar92._16_8_ = __real_3914c4e977ba1f5c;
          auVar92._24_8_ = __real_3914c4e977ba1f5c;
          auVar34 = vcmppd_avx(auVar92,auVar69,2);
          auVar123 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
          auVar34 = vpackssdw_avx2(auVar34,auVar123);
          auVar32 = vpand_avx2(auVar89,auVar34);
          auVar32 = vpermq_avx2(auVar32,0xd8);
          auVar32 = vpandn_avx2(auVar29,auVar32);
          iVar12 = vmovmskps_avx(auVar32);
          dVar40 = auVar28._8_8_;
          dVar55 = auVar28._16_8_;
          dVar110 = auVar28._24_8_;
          if (iVar12 == 0) {
LAB_140aad307:
            auVar9._4_4_ = _UNK_150b51304;
            auVar9._0_4_ = ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
            auVar9._8_4_ = _UNK_150b51308;
            auVar9._12_4_ = _UNK_150b5130c;
            auVar9._16_4_ = _UNK_150b51310;
            auVar9._20_4_ = _UNK_150b51314;
            auVar9._24_4_ = _UNK_150b51318;
            auVar9._28_4_ = _UNK_150b5131c;
            auVar11._8_8_ = (ulonglong)dVar55 & __real_7fe0000000000000;
            auVar11._0_8_ = (ulonglong)dVar40 & __real_7fe0000000000000;
            auVar11._16_8_ = (ulonglong)dVar110 & __real_7fe0000000000000;
            auVar11._24_8_ = 0;
            auVar35._0_8_ = (ulonglong)dVar38 & __real_7fe0000000000000;
            auVar35._8_8_ = (ulonglong)dVar39 & __real_7fe0000000000000;
            auVar35._16_8_ = (ulonglong)auVar47._0_8_ & __real_7fe0000000000000;
            auVar35._24_8_ = 0;
            auVar96._8_8_ = __real_7fcfffffffffffff;
            auVar96._0_8_ = __real_7fcfffffffffffff;
            auVar96._16_8_ = __real_7fcfffffffffffff;
            auVar96._24_8_ = __real_7fcfffffffffffff;
            auVar32 = vpsubq_avx2(auVar96,auVar35);
            auVar31 = vpsubq_avx2(auVar96,auVar11 << 0x40);
            auVar97._0_8_ = dVar38 * auVar32._0_8_;
            auVar97._8_8_ = dVar39 * auVar32._8_8_;
            auVar97._16_8_ = auVar47._0_8_ * auVar32._16_8_;
            auVar97._24_8_ = auVar32._24_8_ * 0.0;
            auVar19 = vcvtpd2ps_avx(auVar97);
            auVar106._0_8_ = auVar31._0_8_ * 0.0;
            auVar106._8_8_ = dVar40 * auVar31._8_8_;
            auVar106._16_8_ = dVar55 * auVar31._16_8_;
            auVar106._24_8_ = dVar110 * auVar31._24_8_;
            auVar138 = vcvtpd2ps_avx(auVar106);
            auVar98._16_16_ = auVar138;
            auVar98._0_16_ = auVar19;
            auVar34 = vrcpps_avx(auVar98);
            auVar87._0_4_ = auVar34._0_4_ * (-(auVar34._0_4_ * auVar19._0_4_) + __real_40000000);
            auVar87._4_4_ = auVar34._4_4_ * (-(auVar34._4_4_ * auVar19._4_4_) + __real_40000000);
            auVar87._8_4_ = auVar34._8_4_ * (-(auVar34._8_4_ * auVar19._8_4_) + __real_40000000);
            auVar87._12_4_ = auVar34._12_4_ * (-(auVar34._12_4_ * auVar19._12_4_) + __real_40000000)
            ;
            auVar99._16_4_ = auVar34._16_4_ * (-(auVar34._16_4_ * auVar138._0_4_) + __real_40000000)
            ;
            auVar99._0_16_ = auVar87;
            auVar99._20_4_ = auVar34._20_4_ * (-(auVar34._20_4_ * auVar138._4_4_) + __real_40000000)
            ;
            auVar99._24_4_ = auVar34._24_4_ * (-(auVar34._24_4_ * auVar138._8_4_) + __real_40000000)
            ;
            auVar99._28_4_ =
                 auVar34._28_4_ * (-(auVar34._28_4_ * auVar138._12_4_) + __real_40000000);
            auVar34 = vcvtps2pd_avx(auVar87);
            auVar89 = vcvtps2pd_avx(auVar99._16_16_);
            dVar135 = auVar31._0_8_ * auVar89._0_8_;
            dVar136 = auVar31._8_8_ * auVar89._8_8_;
            dVar137 = auVar31._16_8_ * auVar89._16_8_;
            dVar109 = auVar31._24_8_ * auVar89._24_8_;
            dVar125 = auVar32._0_8_ * auVar34._0_8_;
            dVar126 = auVar32._8_8_ * auVar34._8_8_;
            dVar127 = auVar32._16_8_ * auVar34._16_8_;
            dVar130 = auVar32._24_8_ * auVar34._24_8_;
            dVar135 = dVar135 * (-(dVar135 * 0.0) + __real_4000000000000000);
            dVar136 = dVar136 * (-(dVar40 * dVar136) + __real_4000000000000000);
            dVar137 = dVar137 * (-(dVar55 * dVar137) + __real_4000000000000000);
            dVar109 = dVar109 * (-(dVar110 * dVar109) + __real_4000000000000000);
            dVar125 = dVar125 * (-(dVar38 * dVar125) + __real_4000000000000000);
            dVar126 = dVar126 * (-(dVar39 * dVar126) + __real_4000000000000000);
            dVar127 = dVar127 * (-(auVar47._0_8_ * dVar127) + __real_4000000000000000);
            dVar130 = dVar130 * (-(dVar130 * 0.0) + __real_4000000000000000);
            auVar36._0_8_ = dVar125 * (-(dVar125 * dVar38) + __real_4000000000000000);
            auVar36._8_8_ = dVar126 * (-(dVar126 * dVar39) + __real_4000000000000000);
            auVar36._16_8_ = dVar127 * (-(dVar127 * auVar47._0_8_) + __real_4000000000000000);
            auVar36._24_8_ = dVar130 * (-(dVar130 * 0.0) + __real_4000000000000000);
            auVar34 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                  ,auVar123 ^ auVar9);
            local_148 = vblendvps_avx(local_148,auVar36,auVar34);
            auVar37._0_8_ = dVar135 * (-(dVar135 * 0.0) + __real_4000000000000000);
            auVar37._8_8_ = dVar136 * (-(dVar40 * dVar136) + __real_4000000000000000);
            auVar37._16_8_ = dVar137 * (-(dVar55 * dVar137) + __real_4000000000000000);
            auVar37._24_8_ = dVar109 * (-(dVar110 * dVar109) + __real_4000000000000000);
            auVar34 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                  ,auVar123 ^ auVar9);
            local_188 = vblendvps_avx(local_188,auVar37,auVar34);
          }
          else {
            auVar32 = vcmppd_avx(auVar79,auVar105,6);
            auVar32 = vpackssdw_avx2(auVar32,auVar123);
            auVar19 = vpackssdw_avx(auVar32._0_16_,auVar32._16_16_);
            auVar60 = vpshufd_avx(auVar19,0xd8);
            auVar19 = vpackssdw_avx(auVar89._0_16_,auVar89._16_16_);
            auVar138 = vpackssdw_avx(auVar34._0_16_,auVar34._16_16_);
            auVar19 = vpand_avx(auVar19,auVar138);
            auVar87 = vpshufd_avx(auVar19,0xd8);
            auVar34 = vpmovzxwd_avx2(auVar87);
            auVar32 = vpslld_avx2(auVar34,0x1f);
            auVar19 = vcvtpd2ps_avx(auVar69);
            auVar138 = vcvtpd2ps_avx(auVar28);
            auVar93._16_16_ = auVar138;
            auVar93._0_16_ = auVar19;
            auVar34 = vrcpps_avx(auVar93);
            auVar86._0_4_ = auVar34._0_4_ * (-(auVar34._0_4_ * auVar19._0_4_) + __real_40000000);
            auVar86._4_4_ = auVar34._4_4_ * (-(auVar34._4_4_ * auVar19._4_4_) + __real_40000000);
            auVar86._8_4_ = auVar34._8_4_ * (-(auVar34._8_4_ * auVar19._8_4_) + __real_40000000);
            auVar86._12_4_ = auVar34._12_4_ * (-(auVar34._12_4_ * auVar19._12_4_) + __real_40000000)
            ;
            auVar94._16_4_ = auVar34._16_4_ * (-(auVar34._16_4_ * auVar138._0_4_) + __real_40000000)
            ;
            auVar94._0_16_ = auVar86;
            auVar94._20_4_ = auVar34._20_4_ * (-(auVar34._20_4_ * auVar138._4_4_) + __real_40000000)
            ;
            auVar94._24_4_ = auVar34._24_4_ * (-(auVar34._24_4_ * auVar138._8_4_) + __real_40000000)
            ;
            auVar94._28_4_ =
                 auVar34._28_4_ * (-(auVar34._28_4_ * auVar138._12_4_) + __real_40000000);
            auVar34 = vcvtps2pd_avx(auVar94._16_16_);
            auVar89 = vcvtps2pd_avx(auVar86);
            auVar123 = vpsrad_avx2(auVar32,0x1f);
            dVar135 = (-(auVar34._0_8_ * 0.0) + __real_4000000000000000) * auVar34._0_8_;
            dVar136 = (-(dVar40 * auVar34._8_8_) + __real_4000000000000000) * auVar34._8_8_;
            dVar137 = (-(dVar55 * auVar34._16_8_) + __real_4000000000000000) * auVar34._16_8_;
            dVar109 = (-(dVar110 * auVar34._24_8_) + __real_4000000000000000) * auVar34._24_8_;
            dVar125 = (-(dVar38 * auVar89._0_8_) + __real_4000000000000000) * auVar89._0_8_;
            dVar126 = (-(dVar39 * auVar89._8_8_) + __real_4000000000000000) * auVar89._8_8_;
            dVar127 = (-(auVar47._0_8_ * auVar89._16_8_) + __real_4000000000000000) * auVar89._16_8_
            ;
            dVar130 = (-(auVar89._24_8_ * 0.0) + __real_4000000000000000) * auVar89._24_8_;
            auVar95._0_8_ = (-(dVar38 * dVar125) + __real_4000000000000000) * dVar125;
            auVar95._8_8_ = (-(dVar39 * dVar126) + __real_4000000000000000) * dVar126;
            auVar95._16_8_ = (-(auVar47._0_8_ * dVar127) + __real_4000000000000000) * dVar127;
            auVar95._24_8_ = (-(dVar130 * 0.0) + __real_4000000000000000) * dVar130;
            auVar34 = vpmovsxdq_avx2(auVar32._0_16_);
            local_148 = vblendvps_avx(local_148,auVar95,auVar34);
            auVar33._0_8_ = (-(dVar135 * 0.0) + __real_4000000000000000) * dVar135;
            auVar33._8_8_ = (-(dVar40 * dVar136) + __real_4000000000000000) * dVar136;
            auVar33._16_8_ = (-(dVar55 * dVar137) + __real_4000000000000000) * dVar137;
            auVar33._24_8_ = (-(dVar110 * dVar109) + __real_4000000000000000) * dVar109;
            auVar34 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                  ,auVar123);
            local_188 = vblendvps_avx(local_188,auVar33,auVar34);
            auVar19 = vpsllw_avx(auVar60,0xf);
            auVar19 = vpacksswb_avx(auVar19,auVar19);
            if ((byte)(SUB161(auVar19 >> 7,0) & 1 | (SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                       (SUB161(auVar19 >> 0x17,0) & 1) << 2 | (SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                       (SUB161(auVar19 >> 0x27,0) & 1) << 4 | (SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                       (SUB161(auVar19 >> 0x37,0) & 1) << 6 | SUB161(auVar19 >> 0x3f,0) << 7) !=
                (byte)iVar12) {
              auVar19 = vpand_avx(auVar87,auVar60);
              auVar34 = vpmovzxwd_avx2(auVar19);
              auVar34 = vpslld_avx2(auVar34,0x1f);
              auVar123 = vpsrad_avx2(auVar34,0x1f);
              goto LAB_140aad307;
            }
          }
          auVar34 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                ,auVar29);
          auVar28 = vblendvps_avx(local_148,auVar28,auVar34);
          auVar19 = vunpcklpd_avx(auVar72,auVar81);
          auVar47._0_8_ = auVar19._0_8_ * auVar28._0_8_;
          auVar47._8_8_ = auVar19._8_8_ * auVar28._8_8_;
          dVar39 = auVar30._0_8_ * auVar28._16_8_;
          auVar19 = vshufpd_avx(auVar47,auVar47,1);
          local_268._0_8_ = auVar19._0_8_;
          local_2e8._0_8_ = 0;
        }
        *(longlong *)(param_6 + lVar15) = auVar72._0_8_;
        *(longlong *)(param_6 + 8 + lVar15) = auVar81._0_8_;
        *(double *)(param_6 + 0x10 + lVar15) = auVar30._0_8_;
        *(undefined8 *)(param_1 + lVar15 * 4) = local_1e8._0_8_;
        *(undefined8 *)(param_1 + 8 + lVar15 * 4) = local_258._0_8_;
        *(undefined8 *)(param_1 + 0x10 + lVar15 * 4) = local_208._0_8_;
        *(undefined8 *)(param_1 + 0x18 + lVar15 * 4) = local_2c8._0_8_;
        *(undefined8 *)(param_1 + 0x20 + lVar15 * 4) = local_1b8._0_8_;
        *(undefined8 *)(param_1 + 0x28 + lVar15 * 4) = local_248._0_8_;
        *(double *)(param_1 + 0x30 + lVar15 * 4) = auVar42._0_8_;
        *(undefined8 *)(param_1 + 0x38 + lVar15 * 4) = local_2d8._0_8_;
        *(double *)(param_1 + 0x40 + lVar15 * 4) = auVar47._0_8_;
        *(undefined8 *)(param_1 + 0x48 + lVar15 * 4) = local_268._0_8_;
        *(double *)(param_1 + 0x50 + lVar15 * 4) = dVar39;
        *(undefined8 *)(param_1 + 0x58 + lVar15 * 4) = local_2e8._0_8_;
        lVar17 = lVar17 + 1;
        lVar15 = lVar15 + 0x18;
      } while ((ulonglong)param_10 * 0x18 != lVar15);
    }
  }
  else if (0 < (int)param_10) {
    lVar15 = 0;
    lVar17 = 0;
    do {
      iVar12 = *(int *)(param_8 + lVar17 * 8);
      iVar6 = *(int *)(param_9 + lVar17 * 4);
      lVar16 = (longlong)iVar6;
      local_188._0_8_ = *(ulonglong *)(param_2 + lVar15 * 4);
      local_188._8_8_ = 0;
      local_2c8._0_8_ = *(ulonglong *)(param_2 + 8 + lVar15 * 4);
      local_2c8._8_8_ = 0;
      local_208._8_8_ = 0;
      local_208._0_8_ = *(ulonglong *)(param_2 + 0x10 + lVar15 * 4);
      local_1e8._8_8_ = 0;
      local_1e8._0_8_ = *(ulonglong *)(param_2 + 0x18 + lVar15 * 4);
      local_148._0_8_ = *(double *)(param_2 + 0x20 + lVar15 * 4);
      local_148._8_8_ = 0;
      local_1b8._8_8_ = 0;
      local_1b8._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar15 * 4);
      local_248._0_8_ = *(double *)(param_2 + 0x30 + lVar15 * 4);
      local_248._8_8_ = 0;
      local_238._0_8_ = *(double *)(param_2 + 0x40 + lVar15 * 4);
      local_238._8_8_ = 0;
      local_268._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar15 * 4);
      local_268._8_8_ = 0;
      auVar107 = ZEXT864(*(ulonglong *)(param_2 + 0x38 + lVar15 * 4));
      auVar124 = ZEXT864(*(ulonglong *)(param_2 + 0x48 + lVar15 * 4));
      auVar139 = ZEXT864(*(ulonglong *)(param_2 + 0x50 + lVar15 * 4));
      puVar13 = (ulonglong *)GetTransformFromArray(param_3,iVar12,(int)lVar17);
      dVar38 = auVar139._0_8_;
      uVar100 = auVar107._0_8_;
      auVar42._0_8_ = (double)puVar13[8];
      auVar41._8_8_ = 0;
      auVar41._0_8_ = auVar42._0_8_;
      uVar56 = puVar13[9];
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar56;
      auVar47._0_8_ = (double)puVar13[10];
      auVar128._8_8_ = 0;
      auVar128._0_8_ = auVar47._0_8_;
      auVar81 = auVar124._0_16_;
      local_258._0_8_ = auVar124._0_8_;
      if (lVar16 == -1) {
        local_278._8_8_ = 0;
        local_278._0_8_ = local_238._0_8_;
        local_2d8 = auVar128;
        local_2b8 = auVar57;
        local_2a8 = auVar41;
        local_298 = auVar81;
        local_288 = auVar139._0_16_;
      }
      else {
        lVar7 = lVar16 * 0x18;
        auVar19 = vunpcklpd_avx(local_238,auVar81);
        local_278._0_8_ = auVar19._0_8_ * *(double *)(param_4 + lVar7);
        local_278._8_8_ = auVar19._8_8_ * ((double *)(param_4 + lVar7))[1];
        local_288._8_8_ = 0;
        local_288._0_8_ = dVar38 * *(double *)(param_4 + 0x10 + lVar7);
        auVar19 = vunpcklpd_avx(auVar41,auVar57);
        local_2a8._0_8_ = auVar19._0_8_ * *(double *)(param_5 + lVar7);
        local_2a8._8_8_ = auVar19._8_8_ * ((double *)(param_5 + lVar7))[1];
        local_298 = vshufpd_avx(local_278,local_278,1);
        local_2b8 = vshufpd_avx(local_2a8,local_2a8,1);
        local_2d8._8_8_ = 0;
        local_2d8._0_8_ = auVar47._0_8_ * *(double *)(param_5 + 0x10 + lVar7);
      }
      uVar1 = *puVar13;
      auVar85._8_8_ = 0;
      auVar85._0_8_ = uVar1;
      uVar2 = puVar13[1];
      auVar151._8_8_ = 0;
      auVar151._0_8_ = uVar2;
      auVar144._8_8_ = 0;
      auVar144._0_8_ = puVar13[2];
      auVar111._8_8_ = 0;
      auVar111._0_8_ = puVar13[3];
      dVar39 = (double)puVar13[4];
      auVar149._8_8_ = 0;
      auVar149._0_8_ = dVar39;
      auVar140._8_8_ = 0;
      auVar140._0_8_ = puVar13[5];
      dVar40 = (double)puVar13[6];
      auVar131._8_8_ = 0;
      auVar131._0_8_ = dVar40;
      auVar19 = vmaxss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_8 + 4 + lVar17 * 8)));
      uVar3 = puVar13[7];
      auVar80._8_8_ = 0;
      auVar80._0_8_ = uVar3;
      auVar138 = vminss_avx(auVar19,ZEXT416(__real_3f800000));
      auVar19 = vmaxss_avx(auVar138,ZEXT416(*(uint *)(param_7 + (longlong)iVar12 * 4)));
      uVar4 = puVar13[0xb];
      auVar70._8_8_ = 0;
      auVar70._0_8_ = uVar4;
      *(int *)(param_7 + (longlong)iVar12 * 4) = auVar19._0_4_;
      fVar54 = auVar138._0_4_;
      if (fVar54 <= __real_3727c5ac) {
        auVar28 = ZEXT1632(ZEXT816(0));
        auVar81 = local_298;
        auVar129 = local_278;
        local_2e8._0_8_ = local_288._0_8_;
      }
      else if (__real_3f7fff58 <= fVar54) {
        local_1b8 = auVar140;
        local_1e8 = auVar111;
        local_208 = auVar144;
        auVar28 = ZEXT1632(ZEXT816(0));
        dVar38 = auVar47._0_8_;
        auVar81 = local_2b8;
        auVar129 = local_2a8;
        local_188._0_8_ = uVar1;
        local_148._0_8_ = dVar39;
        local_258._0_8_ = uVar56;
        local_238._0_8_ = auVar42._0_8_;
        local_268._0_8_ = uVar4;
        local_2c8._0_8_ = uVar2;
        local_248._0_8_ = dVar40;
        local_2e8._0_8_ = local_2d8._0_8_;
        uVar100 = uVar3;
      }
      else {
        auVar47 = vunpcklpd_avx(local_208,local_1e8);
        auVar60 = vunpcklpd_avx(local_188._0_16_,local_2c8);
        auVar102._16_16_ = auVar47;
        auVar102._0_16_ = auVar60;
        auVar87 = vunpcklpd_avx(auVar144,auVar111);
        auVar18 = vunpcklpd_avx(auVar85,auVar151);
        auVar20._0_8_ = auVar60._0_8_ * auVar18._0_8_;
        auVar20._8_8_ = auVar60._8_8_ * auVar18._8_8_;
        auVar20._16_8_ = auVar47._0_8_ * auVar87._0_8_;
        auVar20._24_8_ = auVar47._8_8_ * auVar87._8_8_;
        auVar28 = vpermpd_avx2(auVar20,0x4e);
        auVar21._0_8_ = auVar20._0_8_ + auVar28._0_8_;
        auVar21._8_8_ = auVar20._8_8_ + auVar28._8_8_;
        auVar21._16_8_ = auVar20._16_8_ + auVar28._16_8_;
        auVar21._24_8_ = auVar20._24_8_ + auVar28._24_8_;
        auVar28 = vpermpd_avx2(auVar21,0x39);
        auVar22._0_8_ = auVar21._0_8_ + auVar28._0_8_;
        auVar22._8_8_ = auVar21._8_8_ + auVar28._8_8_;
        auVar22._16_8_ = auVar21._16_8_ + auVar28._16_8_;
        auVar22._24_8_ = auVar21._24_8_ + auVar28._24_8_;
        auVar42 = vunpcklpd_avx(auVar139._0_16_,local_268);
        auVar81 = vunpcklpd_avx(local_238,auVar81);
        auVar88._16_16_ = auVar42;
        auVar88._0_16_ = auVar81;
        auVar19 = vunpcklpd_avx(auVar128,auVar70);
        auVar114 = ZEXT816(0);
        auVar28 = ZEXT1632(auVar114);
        auVar34 = vcmppd_avx(ZEXT1632(auVar114),auVar22,2);
        auVar34 = vpshufb_avx2(auVar34,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar8._4_4_ = _UNK_150b51304;
        auVar8._0_4_ = ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
        auVar8._8_4_ = _UNK_150b51308;
        auVar8._12_4_ = _UNK_150b5130c;
        auVar8._16_4_ = _UNK_150b51310;
        auVar8._20_4_ = _UNK_150b51314;
        auVar8._24_4_ = _UNK_150b51318;
        auVar8._28_4_ = _UNK_150b5131c;
        auVar34 = vblendvps_avx(ZEXT1632(auVar114),auVar8,auVar34);
        auVar138 = vunpcklpd_avx(auVar41,auVar57);
        auVar23._16_16_ = auVar19;
        auVar23._0_16_ = auVar138;
        dVar55 = (double)fVar54;
        auVar89 = vsubpd_avx(auVar23,auVar88);
        auVar101._0_8_ = dVar55 * auVar89._0_8_ + auVar81._0_8_;
        auVar101._8_8_ = dVar55 * auVar89._8_8_ + auVar81._8_8_;
        auVar103._16_8_ = dVar55 * auVar89._16_8_ + auVar42._0_8_;
        auVar103._0_16_ = auVar101;
        auVar103._24_8_ = dVar55 * auVar89._24_8_ + auVar42._8_8_;
        auVar42 = vunpcklpd_avx(local_248,auVar107._0_16_);
        auVar19 = vshufpd_avx(auVar103._16_16_,auVar103._16_16_,1);
        auVar81 = vunpcklpd_avx(local_148._0_16_,local_1b8);
        auVar138 = vshufpd_avx(auVar101,auVar101,1);
        auVar24._16_16_ = auVar42;
        auVar24._0_16_ = auVar81;
        auVar72 = vunpcklpd_avx(auVar131,auVar80);
        auVar43 = vunpcklpd_avx(auVar149,auVar140);
        auVar73._16_16_ = auVar72;
        auVar73._0_16_ = auVar43;
        auVar89 = vsubpd_avx(auVar73,auVar24);
        auVar141._0_8_ = dVar55 * auVar89._0_8_ + auVar81._0_8_;
        auVar141._8_8_ = dVar55 * auVar89._8_8_ + auVar81._8_8_;
        auVar143._16_8_ = dVar55 * auVar89._16_8_ + auVar42._0_8_;
        auVar143._0_16_ = auVar141;
        auVar143._24_8_ = dVar55 * auVar89._24_8_ + auVar42._8_8_;
        auVar72 = vshufpd_avx(auVar143._16_16_,auVar143._16_16_,1);
        local_1b8 = vshufpd_avx(auVar141,auVar141,1);
        auVar42._0_8_ = __real_3ff0000000000000 - dVar55;
        auVar89 = vsubpd_avx(ZEXT1632(auVar114),auVar102);
        auVar64._0_4_ = ~auVar34._0_4_ & auVar89._0_4_;
        auVar64._4_4_ = ~auVar34._4_4_ & auVar89._4_4_;
        auVar64._8_4_ = ~auVar34._8_4_ & auVar89._8_4_;
        auVar64._12_4_ = ~auVar34._12_4_ & auVar89._12_4_;
        auVar64._16_4_ = ~auVar34._16_4_ & auVar89._16_4_;
        auVar64._20_4_ = ~auVar34._20_4_ & auVar89._20_4_;
        auVar64._24_4_ = ~auVar34._24_4_ & auVar89._24_4_;
        auVar64._28_4_ = ~auVar34._28_4_ & auVar89._28_4_;
        auVar65._0_8_ = (ulonglong)auVar60._0_8_ & auVar34._0_8_;
        auVar65._8_8_ = (ulonglong)auVar60._8_8_ & auVar34._8_8_;
        auVar65._16_8_ = (ulonglong)auVar47._0_8_ & auVar34._16_8_;
        auVar65._24_8_ = (ulonglong)auVar47._8_8_ & auVar34._24_8_;
        auVar65 = auVar65 | auVar64;
        auVar47._0_8_ = dVar55 * auVar18._0_8_ + auVar42._0_8_ * auVar65._0_8_;
        dVar38 = dVar55 * auVar18._8_8_ + auVar42._0_8_ * auVar65._8_8_;
        dVar39 = dVar55 * auVar87._0_8_ + auVar42._0_8_ * auVar65._16_8_;
        dVar40 = dVar55 * auVar87._8_8_ + auVar42._0_8_ * auVar65._24_8_;
        auVar58._0_8_ = auVar47._0_8_ * auVar47._0_8_ + dVar39 * dVar39;
        auVar58._8_8_ = dVar38 * dVar38 + dVar40 * dVar40;
        auVar42 = vshufpd_avx(auVar58,auVar58,1);
        auVar42._0_8_ = auVar58._0_8_ + auVar42._0_8_;
        auVar59._8_8_ = 0;
        auVar59._0_8_ = auVar42._0_8_;
        auVar42._0_8_ = __real_3ff0000000000000 / SQRT(auVar42._0_8_);
        auVar71._8_8_ = 0;
        auVar71._0_8_ = __real_3e45798ee2308c3a;
        auVar81 = vcmpsd_avx(auVar71,auVar59,6);
        uVar56 = ~auVar81._0_8_ & __real_ffffffffffffffff;
        auVar145._0_8_ = (ulonglong)(auVar47._0_8_ * auVar42._0_8_) & uVar56;
        auVar145._8_8_ = (ulonglong)(dVar38 * auVar42._0_8_) & uVar56;
        auVar147._16_8_ = (ulonglong)(dVar39 * auVar42._0_8_) & uVar56;
        auVar147._0_16_ = auVar145;
        auVar147._24_8_ = (ulonglong)(dVar40 * auVar42._0_8_) & uVar56;
        auVar25._0_8_ =
             ~uVar56 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar25._8_8_ = ~uVar56 & _UNK_150b54548;
        auVar25._16_8_ = ~uVar56 & _UNK_150b54550;
        auVar25._24_8_ = ~uVar56 & _UNK_150b54558;
        local_208 = auVar147._16_16_ | auVar25._16_16_;
        local_1e8 = vshufps_avx(local_208,local_208,0x4e);
        auVar42 = vshufps_avx(auVar145,auVar145,0x4e);
        auVar47 = vunpcklpd_avx(local_2a8,local_2b8);
        auVar26._16_16_ = local_2d8;
        auVar26._0_16_ = auVar47;
        auVar47 = vunpcklpd_avx(local_278,local_298);
        auVar66._16_16_ = local_288;
        auVar66._0_16_ = auVar47;
        auVar34 = vsubpd_avx(auVar26,auVar66);
        auVar129._0_8_ = dVar55 * auVar34._0_8_ + auVar47._0_8_;
        auVar129._8_8_ = dVar55 * auVar34._8_8_ + auVar47._8_8_;
        local_2e8._0_8_ = dVar55 * auVar34._16_8_ + (double)local_288._0_8_;
        auVar81 = vshufpd_avx(auVar129,auVar129,1);
        dVar38 = auVar103._16_8_;
        local_188._0_8_ = auVar145._0_8_;
        local_148._0_8_ = auVar141._0_8_;
        local_258._0_8_ = auVar138._0_8_;
        local_238._0_8_ = auVar101._0_8_;
        local_268._0_8_ = auVar19._0_8_;
        local_2c8._0_8_ = auVar42._0_8_;
        local_248._0_8_ = auVar143._16_8_;
        uVar100 = auVar72._0_8_;
      }
      *(longlong *)(param_4 + lVar15) = local_278._0_8_;
      *(longlong *)(param_4 + 8 + lVar15) = local_298._0_8_;
      *(undefined8 *)(param_4 + 0x10 + lVar15) = local_288._0_8_;
      *(longlong *)(param_5 + lVar15) = local_2a8._0_8_;
      *(undefined8 *)(param_5 + 8 + lVar15) = local_2b8._0_8_;
      *(undefined8 *)(param_5 + 0x10 + lVar15) = local_2d8._0_8_;
      auVar42._0_8_ = (double)local_238._0_8_;
      if (iVar6 != -1) {
        auVar42._0_8_ = *(double *)(param_6 + 0x10 + lVar16 * 0x18);
        auVar47 = *(undefined1 (*) [16])(param_6 + lVar16 * 0x18);
        auVar74._16_8_ = auVar42._0_8_;
        auVar74._0_16_ = auVar47;
        auVar74._24_8_ = 0;
        auVar27._0_8_ = (ulonglong)auVar47._0_8_ & __real_7fffffffffffffff;
        dVar38 = auVar47._8_8_;
        auVar27._8_8_ = (ulonglong)dVar38 & __real_7fffffffffffffff;
        auVar27._16_8_ = (ulonglong)auVar42._0_8_ & __real_7fffffffffffffff;
        auVar27._24_8_ = 0;
        auVar82._8_8_ = __real_3e45798ee2308c3a;
        auVar82._0_8_ = __real_3e45798ee2308c3a;
        auVar82._16_8_ = __real_3e45798ee2308c3a;
        auVar82._24_8_ = __real_3e45798ee2308c3a;
        auVar34 = vcmppd_avx(auVar27,auVar82,2);
        auVar32 = vpcmpeqd_avx2(ZEXT1632(local_2a8),ZEXT1632(local_2a8));
        auVar34 = vpackssdw_avx2(auVar34,auVar32);
        auVar29 = vpermq_avx2(auVar34,0xd8);
        auVar34 = vblendvps_avx(auVar30,ZEXT1632(ZEXT816(0)),auVar29);
        auVar104._8_8_ = __real_46c8a6e32246c99c;
        auVar104._0_8_ = __real_46c8a6e32246c99c;
        auVar104._16_8_ = __real_46c8a6e32246c99c;
        auVar104._24_8_ = __real_46c8a6e32246c99c;
        auVar89 = vcmppd_avx(auVar74,auVar104,2);
        auVar89 = vpackssdw_avx2(auVar89,auVar32);
        auVar19 = vpackssdw_avx(auVar89._0_16_,auVar89._16_16_);
        auVar115._8_8_ = __real_3914c4e977ba1f5c;
        auVar115._0_8_ = __real_3914c4e977ba1f5c;
        auVar115._16_8_ = __real_3914c4e977ba1f5c;
        auVar115._24_8_ = __real_3914c4e977ba1f5c;
        auVar89 = vcmppd_avx(auVar115,auVar74,2);
        auVar89 = vpackssdw_avx2(auVar89,ZEXT1632(ZEXT816(0)));
        auVar138 = vpackssdw_avx(auVar89._0_16_,auVar89._16_16_);
        auVar19 = vpand_avx(auVar19,auVar138);
        auVar19 = vpshufd_avx(auVar19,0xd8);
        auVar89 = vpmovzxwd_avx2(auVar19);
        auVar89 = vpslld_avx2(auVar89,0x1f);
        auVar89 = vpsrad_avx2(auVar89,0x1f);
        auVar90._0_4_ = auVar34._0_4_ & auVar89._0_4_;
        auVar90._4_4_ = auVar34._4_4_ & auVar89._4_4_;
        auVar90._8_4_ = auVar34._8_4_ & auVar89._8_4_;
        auVar90._12_4_ = auVar34._12_4_ & auVar89._12_4_;
        auVar90._16_4_ = auVar34._16_4_ & auVar89._16_4_;
        auVar90._20_4_ = auVar34._20_4_ & auVar89._20_4_;
        auVar90._24_4_ = auVar34._24_4_ & auVar89._24_4_;
        auVar90._28_4_ = auVar34._28_4_ & auVar89._28_4_;
        iVar12 = vmovmskps_avx(auVar90);
        dVar39 = auVar28._8_8_;
        dVar40 = auVar28._16_8_;
        dVar55 = auVar28._24_8_;
        if (iVar12 == 0) {
          auVar90 = ZEXT432(0) << 0x20;
LAB_140aac994:
          auVar83._0_4_ =
               auVar90._0_4_ ^
               ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff;
          auVar83._4_4_ = auVar90._4_4_ ^ _UNK_150b51304;
          auVar83._8_4_ = auVar90._8_4_ ^ _UNK_150b51308;
          auVar83._12_4_ = auVar90._12_4_ ^ _UNK_150b5130c;
          auVar83._16_4_ = auVar90._16_4_ ^ _UNK_150b51310;
          auVar83._20_4_ = auVar90._20_4_ ^ _UNK_150b51314;
          auVar83._24_4_ = auVar90._24_4_ ^ _UNK_150b51318;
          auVar83._28_4_ = auVar90._28_4_ ^ _UNK_150b5131c;
          auVar10._8_8_ = (ulonglong)dVar40 & __real_7fe0000000000000;
          auVar10._0_8_ = (ulonglong)dVar39 & __real_7fe0000000000000;
          auVar10._16_8_ = (ulonglong)dVar55 & __real_7fe0000000000000;
          auVar10._24_8_ = 0;
          auVar91._0_8_ = (ulonglong)auVar47._0_8_ & __real_7fe0000000000000;
          auVar91._8_8_ = (ulonglong)dVar38 & __real_7fe0000000000000;
          auVar91._16_8_ = (ulonglong)auVar42._0_8_ & __real_7fe0000000000000;
          auVar91._24_8_ = 0;
          auVar119._8_8_ = __real_7fcfffffffffffff;
          auVar119._0_8_ = __real_7fcfffffffffffff;
          auVar119._16_8_ = __real_7fcfffffffffffff;
          auVar119._24_8_ = __real_7fcfffffffffffff;
          auVar32 = vpsubq_avx2(auVar119,auVar91);
          auVar123 = vpsubq_avx2(auVar119,auVar10 << 0x40);
          auVar120._0_8_ = auVar47._0_8_ * auVar32._0_8_;
          auVar120._8_8_ = dVar38 * auVar32._8_8_;
          auVar120._16_8_ = auVar42._0_8_ * auVar32._16_8_;
          auVar120._24_8_ = auVar32._24_8_ * 0.0;
          auVar19 = vcvtpd2ps_avx(auVar120);
          auVar134._0_8_ = auVar123._0_8_ * 0.0;
          auVar134._8_8_ = dVar39 * auVar123._8_8_;
          auVar134._16_8_ = dVar40 * auVar123._16_8_;
          auVar134._24_8_ = dVar55 * auVar123._24_8_;
          auVar138 = vcvtpd2ps_avx(auVar134);
          auVar121._16_16_ = auVar138;
          auVar121._0_16_ = auVar19;
          auVar34 = vrcpps_avx(auVar121);
          auVar113._0_4_ = auVar34._0_4_ * (-(auVar34._0_4_ * auVar19._0_4_) + __real_40000000);
          auVar113._4_4_ = auVar34._4_4_ * (-(auVar34._4_4_ * auVar19._4_4_) + __real_40000000);
          auVar113._8_4_ = auVar34._8_4_ * (-(auVar34._8_4_ * auVar19._8_4_) + __real_40000000);
          auVar113._12_4_ = auVar34._12_4_ * (-(auVar34._12_4_ * auVar19._12_4_) + __real_40000000);
          auVar122._16_4_ = auVar34._16_4_ * (-(auVar34._16_4_ * auVar138._0_4_) + __real_40000000);
          auVar122._0_16_ = auVar113;
          auVar122._20_4_ = auVar34._20_4_ * (-(auVar34._20_4_ * auVar138._4_4_) + __real_40000000);
          auVar122._24_4_ = auVar34._24_4_ * (-(auVar34._24_4_ * auVar138._8_4_) + __real_40000000);
          auVar122._28_4_ = auVar34._28_4_ * (-(auVar34._28_4_ * auVar138._12_4_) + __real_40000000)
          ;
          auVar34 = vcvtps2pd_avx(auVar113);
          auVar89 = vcvtps2pd_avx(auVar122._16_16_);
          dVar130 = auVar123._0_8_ * auVar89._0_8_;
          dVar135 = auVar123._8_8_ * auVar89._8_8_;
          dVar136 = auVar123._16_8_ * auVar89._16_8_;
          dVar137 = auVar123._24_8_ * auVar89._24_8_;
          dVar110 = auVar34._0_8_ * auVar32._0_8_;
          dVar125 = auVar34._8_8_ * auVar32._8_8_;
          dVar126 = auVar34._16_8_ * auVar32._16_8_;
          dVar127 = auVar34._24_8_ * auVar32._24_8_;
          dVar130 = (-(dVar130 * 0.0) + __real_4000000000000000) * dVar130;
          dVar135 = (-(dVar39 * dVar135) + __real_4000000000000000) * dVar135;
          dVar136 = (-(dVar40 * dVar136) + __real_4000000000000000) * dVar136;
          dVar137 = (-(dVar55 * dVar137) + __real_4000000000000000) * dVar137;
          dVar110 = (-(auVar47._0_8_ * dVar110) + __real_4000000000000000) * dVar110;
          dVar125 = (-(dVar38 * dVar125) + __real_4000000000000000) * dVar125;
          dVar126 = (-(auVar42._0_8_ * dVar126) + __real_4000000000000000) * dVar126;
          dVar127 = (-(dVar127 * 0.0) + __real_4000000000000000) * dVar127;
          auVar75._0_8_ = dVar110 * (-(dVar110 * auVar47._0_8_) + __real_4000000000000000);
          auVar75._8_8_ = dVar125 * (-(dVar125 * dVar38) + __real_4000000000000000);
          auVar75._16_8_ = dVar126 * (-(dVar126 * auVar42._0_8_) + __real_4000000000000000);
          auVar75._24_8_ = dVar127 * (-(dVar127 * 0.0) + __real_4000000000000000);
          auVar34 = vpermps_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                 ,auVar83);
          local_168 = vblendvps_avx(local_168,auVar75,auVar34);
          auVar76._0_8_ = dVar130 * (-(dVar130 * 0.0) + __real_4000000000000000);
          auVar76._8_8_ = dVar135 * (-(dVar39 * dVar135) + __real_4000000000000000);
          auVar76._16_8_ = dVar136 * (-(dVar40 * dVar136) + __real_4000000000000000);
          auVar76._24_8_ = dVar137 * (-(dVar55 * dVar137) + __real_4000000000000000);
          auVar34 = vpermps_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                 ,auVar83);
          local_128 = vblendvps_avx(local_128,auVar76,auVar34);
        }
        else {
          auVar19 = vcvtpd2ps_avx(auVar74);
          auVar138 = vcvtpd2ps_avx(auVar28);
          auVar116._16_16_ = auVar138;
          auVar116._0_16_ = auVar19;
          auVar32 = vrcpps_avx(auVar116);
          auVar112._0_4_ = auVar32._0_4_ * (-(auVar32._0_4_ * auVar19._0_4_) + __real_40000000);
          auVar112._4_4_ = auVar32._4_4_ * (-(auVar32._4_4_ * auVar19._4_4_) + __real_40000000);
          auVar112._8_4_ = auVar32._8_4_ * (-(auVar32._8_4_ * auVar19._8_4_) + __real_40000000);
          auVar112._12_4_ = auVar32._12_4_ * (-(auVar32._12_4_ * auVar19._12_4_) + __real_40000000);
          auVar117._16_4_ = auVar32._16_4_ * (-(auVar32._16_4_ * auVar138._0_4_) + __real_40000000);
          auVar117._0_16_ = auVar112;
          auVar117._20_4_ = auVar32._20_4_ * (-(auVar32._20_4_ * auVar138._4_4_) + __real_40000000);
          auVar117._24_4_ = auVar32._24_4_ * (-(auVar32._24_4_ * auVar138._8_4_) + __real_40000000);
          auVar117._28_4_ = auVar32._28_4_ * (-(auVar32._28_4_ * auVar138._12_4_) + __real_40000000)
          ;
          auVar32 = vcvtps2pd_avx(auVar117._16_16_);
          auVar123 = vcvtps2pd_avx(auVar112);
          dVar130 = (-(auVar32._0_8_ * 0.0) + __real_4000000000000000) * auVar32._0_8_;
          dVar135 = (-(dVar39 * auVar32._8_8_) + __real_4000000000000000) * auVar32._8_8_;
          dVar136 = (-(dVar40 * auVar32._16_8_) + __real_4000000000000000) * auVar32._16_8_;
          dVar137 = (-(dVar55 * auVar32._24_8_) + __real_4000000000000000) * auVar32._24_8_;
          dVar110 = (-(auVar47._0_8_ * auVar123._0_8_) + __real_4000000000000000) * auVar123._0_8_;
          dVar125 = (-(dVar38 * auVar123._8_8_) + __real_4000000000000000) * auVar123._8_8_;
          dVar126 = (-(auVar42._0_8_ * auVar123._16_8_) + __real_4000000000000000) * auVar123._16_8_
          ;
          dVar127 = (-(auVar123._24_8_ * 0.0) + __real_4000000000000000) * auVar123._24_8_;
          auVar133._0_8_ = dVar130 * (-(dVar130 * 0.0) + __real_4000000000000000);
          auVar133._8_8_ = dVar135 * (-(dVar39 * dVar135) + __real_4000000000000000);
          auVar133._16_8_ = dVar136 * (-(dVar40 * dVar136) + __real_4000000000000000);
          auVar133._24_8_ = dVar137 * (-(dVar55 * dVar137) + __real_4000000000000000);
          auVar118._0_8_ = (-(auVar47._0_8_ * dVar110) + __real_4000000000000000) * dVar110;
          auVar118._8_8_ = (-(dVar38 * dVar125) + __real_4000000000000000) * dVar125;
          auVar118._16_8_ = (-(auVar42._0_8_ * dVar126) + __real_4000000000000000) * dVar126;
          auVar118._24_8_ = (-(dVar127 * 0.0) + __real_4000000000000000) * dVar127;
          auVar32 = vpmovsxdq_avx2(auVar89._0_16_);
          local_168 = vblendvps_avx(local_168,auVar118,auVar32);
          auVar89 = vpermps_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                 ,auVar89);
          local_128 = vblendvps_avx(local_128,auVar133,auVar89);
          uVar14 = vmovmskps_avx(auVar34);
          if ((char)uVar14 != (char)iVar12) goto LAB_140aac994;
        }
        auVar34 = vpermps_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                               ,auVar29);
        auVar28 = vblendvps_avx(local_168,auVar28,auVar34);
        auVar47 = vunpcklpd_avx(auVar129,auVar81);
        auVar42._0_8_ = auVar47._0_8_ * auVar28._0_8_;
        auVar42._8_8_ = auVar47._8_8_ * auVar28._8_8_;
        dVar38 = (double)local_2e8._0_8_ * auVar28._16_8_;
        auVar47 = vshufpd_avx(auVar42,auVar42,1);
        local_258._0_8_ = auVar47._0_8_;
        local_268._0_8_ = 0;
      }
      *(longlong *)(param_6 + lVar15) = auVar129._0_8_;
      *(longlong *)(param_6 + 8 + lVar15) = auVar81._0_8_;
      *(undefined8 *)(param_6 + 0x10 + lVar15) = local_2e8._0_8_;
      *(undefined8 *)(param_1 + lVar15 * 4) = local_188._0_8_;
      *(undefined8 *)(param_1 + 8 + lVar15 * 4) = local_2c8._0_8_;
      *(undefined8 *)(param_1 + 0x10 + lVar15 * 4) = local_208._0_8_;
      *(undefined8 *)(param_1 + 0x18 + lVar15 * 4) = local_1e8._0_8_;
      *(undefined8 *)(param_1 + 0x20 + lVar15 * 4) = local_148._0_8_;
      *(undefined8 *)(param_1 + 0x28 + lVar15 * 4) = local_1b8._0_8_;
      *(undefined8 *)(param_1 + 0x30 + lVar15 * 4) = local_248._0_8_;
      *(ulonglong *)(param_1 + 0x38 + lVar15 * 4) = uVar100;
      *(double *)(param_1 + 0x40 + lVar15 * 4) = auVar42._0_8_;
      *(undefined8 *)(param_1 + 0x48 + lVar15 * 4) = local_258._0_8_;
      *(double *)(param_1 + 0x50 + lVar15 * 4) = dVar38;
      *(undefined8 *)(param_1 + 0x58 + lVar15 * 4) = local_268._0_8_;
      lVar17 = lVar17 + 1;
      lVar15 = lVar15 + 0x18;
    } while ((ulonglong)param_10 * 0x18 != lVar15);
  }
  return;
}

// BlendPosesPerBoneFilter___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx2 @ 140aad4a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilter___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_un_3C_CunT_3E_un_3C_unf_3E_un_3C_s_5B__c_unFPerBoneBlendWeight_5D__3E_un_3C_Cuni_3E_Cuni_avx2
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               undefined8 param_6,uint param_7,undefined1 (*param_8) [32])

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  ulonglong uVar11;
  double dVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong *puVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar46;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  double dVar45;
  double dVar47;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  ulonglong uVar48;
  undefined1 auVar50 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar51 [16];
  ulonglong uVar49;
  undefined1 auVar52 [16];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 in_ZMM1 [64];
  float fVar60;
  ulonglong uVar61;
  double dVar62;
  ulonglong uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [32];
  double dVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [32];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [32];
  double dVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [64];
  ulonglong uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  ulonglong uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [64];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [32];
  double dVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  double dVar112;
  undefined1 auVar113 [16];
  ulonglong uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [64];
  double dVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [32];
  ulonglong uVar120;
  undefined1 auVar121 [16];
  undefined1 auVar122 [64];
  ulonglong local_188;
  undefined1 auVar68 [32];
  undefined1 auVar77 [32];
  undefined1 auVar82 [32];
  undefined1 auVar104 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  
  auVar44 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  auVar44 = auVar44 & ~*param_8;
  if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) == 0 && (SUB321(auVar44 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar44 >> 0x5f,0) & 1) == 0) && SUB321(auVar44 >> 0x7f,0) == '\0') &&
        (SUB321(auVar44 >> 0x9f,0) & 1) == 0) && SUB321(auVar44 >> 0xbf,0) == '\0') &&
      (SUB321(auVar44 >> 0xdf,0) & 1) == 0) && -1 < auVar44[0x1f]) {
    if (0 < (int)param_7) {
      lVar30 = 0xb;
      uVar31 = 0;
      do {
        iVar14 = *(int *)(param_5 + uVar31 * 8);
        uVar49 = *(ulonglong *)(param_2 + -0x58 + lVar30 * 8);
        dVar62 = *(double *)(param_2 + -0x38 + lVar30 * 8);
        uVar1 = *(ulonglong *)(param_2 + -0x30 + lVar30 * 8);
        dVar33 = *(double *)(param_2 + -0x28 + lVar30 * 8);
        uVar2 = *(ulonglong *)(param_2 + -0x20 + lVar30 * 8);
        dVar45 = *(double *)(param_2 + -0x18 + lVar30 * 8);
        uVar3 = *(ulonglong *)(param_2 + -0x10 + lVar30 * 8);
        dVar46 = *(double *)(param_2 + -8 + lVar30 * 8);
        uVar4 = *(ulonglong *)(param_2 + lVar30 * 8);
        auVar89 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar30 * 8));
        auVar99 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar30 * 8));
        auVar116 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar30 * 8));
        puVar29 = (ulonglong *)GetTransformFromArray(param_3,iVar14,(int)uVar31);
        uVar5 = *puVar29;
        auVar121._8_8_ = 0;
        auVar121._0_8_ = uVar5;
        uVar6 = puVar29[1];
        auVar87._8_8_ = 0;
        auVar87._0_8_ = uVar6;
        uVar7 = puVar29[2];
        auVar101._8_8_ = 0;
        auVar101._0_8_ = uVar7;
        uVar8 = puVar29[3];
        auVar96._8_8_ = 0;
        auVar96._0_8_ = uVar8;
        dVar47 = (double)puVar29[4];
        uVar9 = puVar29[5];
        auVar52._8_8_ = 0;
        auVar52._0_8_ = uVar9;
        dVar86 = (double)puVar29[6];
        auVar71._8_8_ = 0;
        auVar71._0_8_ = dVar86;
        uVar11 = puVar29[7];
        auVar76._8_8_ = 0;
        auVar76._0_8_ = uVar11;
        dVar10 = (double)puVar29[8];
        auVar92._8_8_ = 0;
        auVar92._0_8_ = dVar10;
        uVar13 = puVar29[9];
        auVar113._8_8_ = 0;
        auVar113._0_8_ = uVar13;
        auVar15 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_5 + 4 + uVar31 * 8)));
        dVar12 = (double)puVar29[10];
        auVar108._8_8_ = 0;
        auVar108._0_8_ = dVar12;
        auVar16 = vminss_avx(auVar15,ZEXT416(__real_3f800000));
        auVar15 = vmaxss_avx(auVar16,ZEXT416(*(uint *)(param_4 + (longlong)iVar14 * 4)));
        uVar48 = puVar29[0xb];
        auVar97._8_8_ = 0;
        auVar97._0_8_ = uVar48;
        *(int *)(param_4 + (longlong)iVar14 * 4) = auVar15._0_4_;
        fVar60 = auVar16._0_4_;
        uVar63 = uVar3;
        uVar94 = auVar99._0_8_;
        uVar120 = auVar116._0_8_;
        uVar32 = auVar89._0_8_;
        uVar114 = uVar2;
        uVar61 = uVar49;
        dVar112 = dVar62;
        uVar90 = uVar1;
        dVar73 = dVar33;
        dVar105 = dVar45;
        dVar117 = dVar46;
        local_188 = uVar4;
        if ((__real_3727c5ac < fVar60) &&
           (uVar63 = uVar13, uVar94 = uVar6, uVar120 = uVar7, uVar32 = uVar8, uVar114 = uVar11,
           uVar61 = uVar5, dVar112 = dVar47, uVar90 = uVar9, dVar73 = dVar86, dVar105 = dVar10,
           dVar117 = dVar12, local_188 = uVar48, fVar60 < __real_3f7fff58)) {
          auVar53 = vunpcklpd_avx(auVar116._0_16_,auVar89._0_16_);
          auVar115._8_8_ = 0;
          auVar115._0_8_ = uVar49;
          auVar54 = vunpcklpd_avx(auVar115,auVar99._0_16_);
          auVar119._16_16_ = auVar53;
          auVar119._0_16_ = auVar54;
          auVar96 = vunpcklpd_avx(auVar101,auVar96);
          auVar121 = vunpcklpd_avx(auVar121,auVar87);
          auVar40._0_8_ = auVar54._0_8_ * auVar121._0_8_;
          auVar40._8_8_ = auVar54._8_8_ * auVar121._8_8_;
          auVar40._16_8_ = auVar53._0_8_ * auVar96._0_8_;
          auVar40._24_8_ = auVar53._8_8_ * auVar96._8_8_;
          auVar44 = vpermpd_avx2(auVar40,0x4e);
          auVar41._0_8_ = auVar40._0_8_ + auVar44._0_8_;
          auVar41._8_8_ = auVar40._8_8_ + auVar44._8_8_;
          auVar41._16_8_ = auVar40._16_8_ + auVar44._16_8_;
          auVar41._24_8_ = auVar40._24_8_ + auVar44._24_8_;
          auVar44 = vpermpd_avx2(auVar41,0x39);
          auVar42._0_8_ = auVar41._0_8_ + auVar44._0_8_;
          auVar42._8_8_ = auVar41._8_8_ + auVar44._8_8_;
          auVar42._16_8_ = auVar41._16_8_ + auVar44._16_8_;
          auVar42._24_8_ = auVar41._24_8_ + auVar44._24_8_;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = dVar46;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar4;
          auVar15 = vunpcklpd_avx(auVar16,auVar25);
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar3;
          auVar88._8_8_ = 0;
          auVar88._0_8_ = dVar45;
          auVar16 = vunpcklpd_avx(auVar88,auVar27);
          auVar103._16_16_ = auVar15;
          auVar103._0_16_ = auVar16;
          auVar87 = vunpcklpd_avx(auVar108,auVar97);
          auVar92 = vunpcklpd_avx(auVar92,auVar113);
          auVar85._16_16_ = auVar87;
          auVar85._0_16_ = auVar92;
          dVar86 = (double)fVar60;
          auVar44 = vsubpd_avx(auVar85,auVar103);
          auVar109._0_8_ = dVar86 * auVar44._0_8_ + auVar16._0_8_;
          auVar109._8_8_ = dVar86 * auVar44._8_8_ + auVar16._8_8_;
          auVar111._16_8_ = dVar86 * auVar44._16_8_ + auVar15._0_8_;
          auVar111._0_16_ = auVar109;
          auVar111._24_8_ = dVar86 * auVar44._24_8_ + auVar15._8_8_;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = dVar33;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar2;
          auVar87 = vunpcklpd_avx(auVar24,auVar20);
          auVar97 = ZEXT816(0);
          auVar44 = vcmppd_avx(ZEXT1632(auVar97),auVar42,2);
          auVar44 = vpshufb_avx2(auVar44,
                                 ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                                );
          auVar44 = vblendvps_avx(ZEXT1632(auVar97),
                                  ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                  ,auVar44);
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar1;
          auVar93._8_8_ = 0;
          auVar93._0_8_ = dVar62;
          auVar92 = vunpcklpd_avx(auVar93,auVar22);
          auVar69._16_16_ = auVar87;
          auVar69._0_16_ = auVar92;
          auVar71 = vunpcklpd_avx(auVar71,auVar76);
          auVar15 = vshufpd_avx(auVar111._16_16_,auVar111._16_16_,1);
          local_188 = auVar15._0_8_;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = dVar47;
          auVar15 = vunpcklpd_avx(auVar15,auVar52);
          auVar16 = vshufpd_avx(auVar109,auVar109,1);
          auVar58._16_16_ = auVar71;
          auVar58._0_16_ = auVar15;
          auVar40 = vsubpd_avx(auVar58,auVar69);
          auVar102._0_8_ = dVar86 * auVar40._0_8_ + auVar92._0_8_;
          auVar102._8_8_ = dVar86 * auVar40._8_8_ + auVar92._8_8_;
          auVar104._16_8_ = dVar86 * auVar40._16_8_ + auVar87._0_8_;
          auVar104._0_16_ = auVar102;
          auVar104._24_8_ = dVar86 * auVar40._24_8_ + auVar87._8_8_;
          auVar40 = vsubpd_avx(ZEXT1632(auVar97),auVar119);
          auVar59._0_4_ = ~auVar44._0_4_ & auVar40._0_4_;
          auVar59._4_4_ = ~auVar44._4_4_ & auVar40._4_4_;
          auVar59._8_4_ = ~auVar44._8_4_ & auVar40._8_4_;
          auVar59._12_4_ = ~auVar44._12_4_ & auVar40._12_4_;
          auVar59._16_4_ = ~auVar44._16_4_ & auVar40._16_4_;
          auVar59._20_4_ = ~auVar44._20_4_ & auVar40._20_4_;
          auVar59._24_4_ = ~auVar44._24_4_ & auVar40._24_4_;
          auVar59._28_4_ = ~auVar44._28_4_ & auVar40._28_4_;
          auVar43._0_8_ = (ulonglong)auVar54._0_8_ & auVar44._0_8_;
          auVar43._8_8_ = (ulonglong)auVar54._8_8_ & auVar44._8_8_;
          auVar43._16_8_ = (ulonglong)auVar53._0_8_ & auVar44._16_8_;
          auVar43._24_8_ = (ulonglong)auVar53._8_8_ & auVar44._24_8_;
          auVar52 = vshufpd_avx(auVar104._16_16_,auVar104._16_16_,1);
          auVar43 = auVar43 | auVar59;
          auVar71 = vshufpd_avx(auVar102,auVar102,1);
          dVar62 = __real_3ff0000000000000 - dVar86;
          dVar33 = auVar121._0_8_ * dVar86 + dVar62 * auVar43._0_8_;
          dVar45 = auVar121._8_8_ * dVar86 + dVar62 * auVar43._8_8_;
          dVar46 = auVar96._0_8_ * dVar86 + dVar62 * auVar43._16_8_;
          dVar47 = auVar96._8_8_ * dVar86 + dVar62 * auVar43._24_8_;
          auVar53._0_8_ = dVar33 * dVar33 + dVar46 * dVar46;
          auVar53._8_8_ = dVar45 * dVar45 + dVar47 * dVar47;
          auVar15 = vshufpd_avx(auVar53,auVar53,1);
          dVar62 = auVar53._0_8_ + auVar15._0_8_;
          auVar54._8_8_ = 0;
          auVar54._0_8_ = dVar62;
          dVar62 = __real_3ff0000000000000 / SQRT(dVar62);
          auVar67._8_8_ = 0;
          auVar67._0_8_ = __real_3e45798ee2308c3a;
          auVar15 = vcmpsd_avx(auVar67,auVar54,6);
          uVar49 = ~auVar15._0_8_ & __real_ffffffffffffffff;
          auVar80._0_8_ = (ulonglong)(dVar33 * dVar62) & uVar49;
          auVar80._8_8_ = (ulonglong)(dVar45 * dVar62) & uVar49;
          auVar82._16_8_ = (ulonglong)(dVar46 * dVar62) & uVar49;
          auVar82._0_16_ = auVar80;
          auVar82._24_8_ = (ulonglong)(dVar47 * dVar62) & uVar49;
          auVar44._0_8_ =
               ~uVar49 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
          auVar44._8_8_ = ~uVar49 & _UNK_150b54548;
          auVar44._16_8_ = ~uVar49 & _UNK_150b54550;
          auVar44._24_8_ = ~uVar49 & _UNK_150b54558;
          auVar121 = auVar82._16_16_ | auVar44._16_16_;
          auVar15 = vshufps_avx(auVar121,auVar121,0x4e);
          auVar76 = vshufps_avx(auVar80,auVar80,0x4e);
          uVar63 = auVar16._0_8_;
          uVar94 = auVar76._0_8_;
          uVar120 = auVar121._0_8_;
          uVar32 = auVar15._0_8_;
          uVar114 = auVar52._0_8_;
          uVar61 = auVar80._0_8_;
          dVar112 = auVar102._0_8_;
          uVar90 = auVar71._0_8_;
          dVar73 = auVar104._16_8_;
          dVar105 = auVar109._0_8_;
          dVar117 = auVar111._16_8_;
        }
        *(ulonglong *)(param_1 + -0x58 + lVar30 * 8) = uVar61;
        *(ulonglong *)(param_1 + -0x50 + lVar30 * 8) = uVar94;
        *(ulonglong *)(param_1 + -0x48 + lVar30 * 8) = uVar120;
        *(ulonglong *)(param_1 + -0x40 + lVar30 * 8) = uVar32;
        *(double *)(param_1 + -0x38 + lVar30 * 8) = dVar112;
        *(ulonglong *)(param_1 + -0x30 + lVar30 * 8) = uVar90;
        *(double *)(param_1 + -0x28 + lVar30 * 8) = dVar73;
        *(ulonglong *)(param_1 + -0x20 + lVar30 * 8) = uVar114;
        *(double *)(param_1 + -0x18 + lVar30 * 8) = dVar105;
        *(ulonglong *)(param_1 + -0x10 + lVar30 * 8) = uVar63;
        *(double *)(param_1 + -8 + lVar30 * 8) = dVar117;
        *(ulonglong *)(param_1 + lVar30 * 8) = local_188;
        uVar31 = uVar31 + 1;
        lVar30 = lVar30 + 0xc;
      } while (param_7 != uVar31);
    }
  }
  else if (0 < (int)param_7) {
    lVar30 = 0xb;
    uVar31 = 0;
    do {
      iVar14 = *(int *)(param_5 + uVar31 * 8);
      uVar49 = *(ulonglong *)(param_2 + -0x58 + lVar30 * 8);
      dVar62 = *(double *)(param_2 + -0x38 + lVar30 * 8);
      uVar1 = *(ulonglong *)(param_2 + -0x30 + lVar30 * 8);
      dVar33 = *(double *)(param_2 + -0x28 + lVar30 * 8);
      uVar2 = *(ulonglong *)(param_2 + -0x20 + lVar30 * 8);
      dVar45 = *(double *)(param_2 + -0x18 + lVar30 * 8);
      uVar3 = *(ulonglong *)(param_2 + -0x10 + lVar30 * 8);
      dVar46 = *(double *)(param_2 + -8 + lVar30 * 8);
      auVar89 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar30 * 8));
      auVar99 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar30 * 8));
      auVar116 = ZEXT864(*(ulonglong *)(param_2 + lVar30 * 8));
      auVar122 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar30 * 8));
      puVar29 = (ulonglong *)GetTransformFromArray(param_3,iVar14,(int)uVar31);
      uVar4 = *puVar29;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = uVar4;
      uVar5 = puVar29[1];
      auVar78._8_8_ = 0;
      auVar78._0_8_ = uVar5;
      uVar6 = puVar29[2];
      auVar83._8_8_ = 0;
      auVar83._0_8_ = uVar6;
      uVar7 = puVar29[3];
      auVar100._8_8_ = 0;
      auVar100._0_8_ = uVar7;
      dVar47 = (double)puVar29[4];
      uVar8 = puVar29[5];
      dVar86 = (double)puVar29[6];
      auVar70._8_8_ = 0;
      auVar70._0_8_ = dVar86;
      uVar9 = puVar29[7];
      auVar74._8_8_ = 0;
      auVar74._0_8_ = uVar9;
      dVar10 = (double)puVar29[8];
      auVar91._8_8_ = 0;
      auVar91._0_8_ = dVar10;
      uVar11 = puVar29[9];
      auVar106._8_8_ = 0;
      auVar106._0_8_ = uVar11;
      auVar15 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_5 + 4 + uVar31 * 8)));
      dVar12 = (double)puVar29[10];
      auVar118._8_8_ = 0;
      auVar118._0_8_ = dVar12;
      auVar16 = vminss_avx(auVar15,ZEXT416(__real_3f800000));
      auVar15 = vmaxss_avx(auVar16,ZEXT416(*(uint *)(param_4 + (longlong)iVar14 * 4)));
      uVar13 = puVar29[0xb];
      auVar34._8_8_ = 0;
      auVar34._0_8_ = uVar13;
      *(int *)(param_4 + (longlong)iVar14 * 4) = auVar15._0_4_;
      fVar60 = auVar16._0_4_;
      uVar48 = uVar1;
      dVar112 = dVar33;
      uVar63 = auVar89._0_8_;
      uVar94 = auVar99._0_8_;
      uVar120 = auVar122._0_8_;
      uVar32 = uVar3;
      uVar114 = auVar116._0_8_;
      uVar61 = uVar49;
      dVar73 = dVar62;
      uVar90 = uVar2;
      dVar105 = dVar45;
      dVar117 = dVar46;
      if ((__real_3727c5ac < fVar60) &&
         (uVar48 = uVar8, dVar112 = dVar86, uVar63 = uVar5, uVar94 = uVar6, uVar120 = uVar7,
         uVar32 = uVar11, uVar114 = uVar13, uVar61 = uVar4, dVar73 = dVar47, uVar90 = uVar9,
         dVar105 = dVar10, dVar117 = dVar12, fVar60 < __real_3f7fff58)) {
        auVar71 = vunpcklpd_avx(auVar99._0_16_,auVar122._0_16_);
        auVar95._8_8_ = 0;
        auVar95._0_8_ = uVar49;
        auVar76 = vunpcklpd_avx(auVar95,auVar89._0_16_);
        auVar98._16_16_ = auVar71;
        auVar98._0_16_ = auVar76;
        auVar121 = vunpcklpd_avx(auVar83,auVar100);
        auVar96 = vunpcklpd_avx(auVar64,auVar78);
        auVar55._0_8_ = auVar76._0_8_ * auVar96._0_8_;
        auVar55._8_8_ = auVar76._8_8_ * auVar96._8_8_;
        auVar55._16_8_ = auVar71._0_8_ * auVar121._0_8_;
        auVar55._24_8_ = auVar71._8_8_ * auVar121._8_8_;
        auVar44 = vpermpd_avx2(auVar55,0x4e);
        auVar56._0_8_ = auVar55._0_8_ + auVar44._0_8_;
        auVar56._8_8_ = auVar55._8_8_ + auVar44._8_8_;
        auVar56._16_8_ = auVar55._16_8_ + auVar44._16_8_;
        auVar56._24_8_ = auVar55._24_8_ + auVar44._24_8_;
        auVar44 = vpermpd_avx2(auVar56,0x39);
        auVar57._0_8_ = auVar56._0_8_ + auVar44._0_8_;
        auVar57._8_8_ = auVar56._8_8_ + auVar44._8_8_;
        auVar57._16_8_ = auVar56._16_8_ + auVar44._16_8_;
        auVar57._24_8_ = auVar56._24_8_ + auVar44._24_8_;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = dVar46;
        auVar52 = vunpcklpd_avx(auVar23,auVar116._0_16_);
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar3;
        auVar84._8_8_ = 0;
        auVar84._0_8_ = dVar45;
        auVar87 = vunpcklpd_avx(auVar84,auVar21);
        auVar81._16_16_ = auVar52;
        auVar81._0_16_ = auVar87;
        auVar15 = vmovlhps_avx(auVar118,auVar34);
        auVar16 = vmovlhps_avx(auVar91,auVar106);
        auVar35._16_16_ = auVar15;
        auVar35._0_16_ = auVar16;
        dVar86 = (double)fVar60;
        auVar44 = vsubpd_avx(auVar35,auVar81);
        auVar107._0_8_ = dVar86 * auVar44._0_8_ + auVar87._0_8_;
        auVar107._8_8_ = dVar86 * auVar44._8_8_ + auVar87._8_8_;
        auVar110._16_8_ = dVar86 * auVar44._16_8_ + auVar52._0_8_;
        auVar110._0_16_ = auVar107;
        auVar110._24_8_ = dVar86 * auVar44._24_8_ + auVar52._8_8_;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar33;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar2;
        auVar15 = vunpcklpd_avx(auVar28,auVar19);
        auVar44 = vcmppd_avx(ZEXT832(0) << 0x20,auVar57,2);
        auVar44 = vpshufb_avx2(auVar44,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar44 = vblendvps_avx(ZEXT832(0) << 0x20,
                                ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                ,auVar44);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar1;
        auVar79._8_8_ = 0;
        auVar79._0_8_ = dVar62;
        auVar87 = vunpcklpd_avx(auVar79,auVar18);
        auVar36._16_16_ = auVar15;
        auVar36._0_16_ = auVar87;
        auVar92 = vunpcklpd_avx(auVar70,auVar74);
        auVar16 = vshufpd_avx(auVar110._16_16_,auVar110._16_16_,1);
        auVar26._8_8_ = 0;
        auVar26._0_8_ = dVar47;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar8;
        auVar97 = vunpcklpd_avx(auVar26,auVar17);
        auVar52 = vshufpd_avx(auVar107,auVar107,1);
        auVar72._16_16_ = auVar92;
        auVar72._0_16_ = auVar97;
        auVar40 = vsubpd_avx(auVar72,auVar36);
        auVar75._0_8_ = dVar86 * auVar40._0_8_ + auVar87._0_8_;
        auVar75._8_8_ = dVar86 * auVar40._8_8_ + auVar87._8_8_;
        auVar77._16_8_ = dVar86 * auVar40._16_8_ + auVar15._0_8_;
        auVar77._0_16_ = auVar75;
        auVar77._24_8_ = dVar86 * auVar40._24_8_ + auVar15._8_8_;
        auVar40 = vsubpd_avx(ZEXT832(0) << 0x20,auVar98);
        auVar37._0_4_ = ~auVar44._0_4_ & auVar40._0_4_;
        auVar37._4_4_ = ~auVar44._4_4_ & auVar40._4_4_;
        auVar37._8_4_ = ~auVar44._8_4_ & auVar40._8_4_;
        auVar37._12_4_ = ~auVar44._12_4_ & auVar40._12_4_;
        auVar37._16_4_ = ~auVar44._16_4_ & auVar40._16_4_;
        auVar37._20_4_ = ~auVar44._20_4_ & auVar40._20_4_;
        auVar37._24_4_ = ~auVar44._24_4_ & auVar40._24_4_;
        auVar37._28_4_ = ~auVar44._28_4_ & auVar40._28_4_;
        auVar38._0_8_ = (ulonglong)auVar76._0_8_ & auVar44._0_8_;
        auVar38._8_8_ = (ulonglong)auVar76._8_8_ & auVar44._8_8_;
        auVar38._16_8_ = (ulonglong)auVar71._0_8_ & auVar44._16_8_;
        auVar38._24_8_ = (ulonglong)auVar71._8_8_ & auVar44._24_8_;
        auVar71 = vshufpd_avx(auVar77._16_16_,auVar77._16_16_,1);
        auVar38 = auVar38 | auVar37;
        auVar76 = vshufpd_avx(auVar75,auVar75,1);
        dVar62 = __real_3ff0000000000000 - dVar86;
        dVar33 = auVar96._0_8_ * dVar86 + dVar62 * auVar38._0_8_;
        dVar45 = auVar96._8_8_ * dVar86 + dVar62 * auVar38._8_8_;
        dVar46 = auVar121._0_8_ * dVar86 + dVar62 * auVar38._16_8_;
        dVar47 = auVar121._8_8_ * dVar86 + dVar62 * auVar38._24_8_;
        auVar50._0_8_ = dVar33 * dVar33 + dVar46 * dVar46;
        auVar50._8_8_ = dVar45 * dVar45 + dVar47 * dVar47;
        auVar15 = vshufpd_avx(auVar50,auVar50,1);
        dVar62 = auVar50._0_8_ + auVar15._0_8_;
        auVar51._8_8_ = 0;
        auVar51._0_8_ = dVar62;
        dVar62 = __real_3ff0000000000000 / SQRT(dVar62);
        auVar65._8_8_ = 0;
        auVar65._0_8_ = __real_3e45798ee2308c3a;
        auVar15 = vcmpsd_avx(auVar65,auVar51,6);
        uVar49 = ~auVar15._0_8_ & __real_ffffffffffffffff;
        auVar66._0_8_ = (ulonglong)(dVar33 * dVar62) & uVar49;
        auVar66._8_8_ = (ulonglong)(dVar45 * dVar62) & uVar49;
        auVar68._16_8_ = (ulonglong)(dVar46 * dVar62) & uVar49;
        auVar68._0_16_ = auVar66;
        auVar68._24_8_ = (ulonglong)(dVar47 * dVar62) & uVar49;
        auVar39._0_8_ =
             ~uVar49 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar39._8_8_ = ~uVar49 & _UNK_150b54548;
        auVar39._16_8_ = ~uVar49 & _UNK_150b54550;
        auVar39._24_8_ = ~uVar49 & _UNK_150b54558;
        auVar96 = auVar68._16_16_ | auVar39._16_16_;
        auVar15 = vshufps_avx(auVar96,auVar96,0x4e);
        auVar121 = vshufps_avx(auVar66,auVar66,0x4e);
        uVar48 = auVar76._0_8_;
        dVar112 = auVar77._16_8_;
        uVar63 = auVar121._0_8_;
        uVar94 = auVar96._0_8_;
        uVar120 = auVar15._0_8_;
        uVar32 = auVar52._0_8_;
        uVar114 = auVar16._0_8_;
        uVar61 = auVar66._0_8_;
        dVar73 = auVar75._0_8_;
        uVar90 = auVar71._0_8_;
        dVar105 = auVar107._0_8_;
        dVar117 = auVar110._16_8_;
      }
      *(ulonglong *)(param_1 + -0x58 + lVar30 * 8) = uVar61;
      *(ulonglong *)(param_1 + -0x50 + lVar30 * 8) = uVar63;
      *(ulonglong *)(param_1 + -0x48 + lVar30 * 8) = uVar94;
      *(ulonglong *)(param_1 + -0x40 + lVar30 * 8) = uVar120;
      *(double *)(param_1 + -0x38 + lVar30 * 8) = dVar73;
      *(ulonglong *)(param_1 + -0x30 + lVar30 * 8) = uVar48;
      *(double *)(param_1 + -0x28 + lVar30 * 8) = dVar112;
      *(ulonglong *)(param_1 + -0x20 + lVar30 * 8) = uVar90;
      *(double *)(param_1 + -0x18 + lVar30 * 8) = dVar105;
      *(ulonglong *)(param_1 + -0x10 + lVar30 * 8) = uVar32;
      *(double *)(param_1 + -8 + lVar30 * 8) = dVar117;
      *(ulonglong *)(param_1 + lVar30 * 8) = uVar114;
      uVar31 = uVar31 + 1;
      lVar30 = lVar30 + 0xc;
    } while (param_7 != uVar31);
  }
  return;
}

// BlendCurves___un_3C_Cunf_3E_un_3C_Cunu_3E_un_3C_unf_3E_un_3C_unu_3E_CuniCuniunf_avx2 @ 140aadd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendCurves___un_3C_Cunf_3E_un_3C_Cunu_3E_un_3C_unf_3E_un_3C_unu_3E_CuniCuniunf_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
               int param_6,float param_7)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined1 (*pauVar22) [32];
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar40 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  
  auVar29 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar27 = in_ZMM6._0_32_;
  if (param_6 == 0) {
    if ((double)(float)((uint)(param_7 + __real_bf800000) & __real_7fffffff) <=
        __real_3e45798ee2308c3a) {
      param_7 = __real_3f800000;
    }
    uVar23 = param_5 + 7;
    if (-1 < (int)param_5) {
      uVar23 = param_5;
    }
    if (0 < (int)(uVar23 & 0xfffffff8)) {
      uVar19 = 0;
      auVar33._4_4_ = __real_0000001f;
      auVar33._0_4_ = __real_0000001f;
      auVar33._8_4_ = __real_0000001f;
      auVar33._12_4_ = __real_0000001f;
      auVar33._16_4_ = __real_0000001f;
      auVar33._20_4_ = __real_0000001f;
      auVar33._24_4_ = __real_0000001f;
      auVar33._28_4_ = __real_0000001f;
      auVar37._4_4_ = __real_00000001;
      auVar37._0_4_ = __real_00000001;
      auVar37._8_4_ = __real_00000001;
      auVar37._12_4_ = __real_00000001;
      auVar37._16_4_ = __real_00000001;
      auVar37._20_4_ = __real_00000001;
      auVar37._24_4_ = __real_00000001;
      auVar37._28_4_ = __real_00000001;
      auVar27 = vpcmpeqd_avx2(auVar27,auVar27);
      uVar15 = 0;
      uVar24 = 0;
      do {
        uVar16 = (undefined4)uVar24;
        auVar42._4_4_ = uVar16;
        auVar42._0_4_ = uVar16;
        auVar42._8_4_ = uVar16;
        auVar42._12_4_ = uVar16;
        auVar42._16_4_ = uVar16;
        auVar42._20_4_ = uVar16;
        auVar42._24_4_ = uVar16;
        auVar42._28_4_ = uVar16;
        auVar42 = vpor_avx2(auVar42,auVar29);
        auVar42 = vpand_avx2(auVar42,auVar33);
        auVar42 = vpsllvd_avx2(auVar37,auVar42);
        uVar16 = *(undefined4 *)(param_2 + (ulonglong)(uVar19 & 0xffffffc));
        auVar45._4_4_ = uVar16;
        auVar45._0_4_ = uVar16;
        auVar45._8_4_ = uVar16;
        auVar45._12_4_ = uVar16;
        auVar45._16_4_ = uVar16;
        auVar45._20_4_ = uVar16;
        auVar45._24_4_ = uVar16;
        auVar45._28_4_ = uVar16;
        if ((auVar42 & auVar45) != (undefined1  [32])0x0) {
          auVar42 = vpand_avx2(auVar45,auVar42);
          auVar45 = vpcmpeqd_avx2(auVar42,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
          auVar42 = vmaskmovps_avx(auVar45 ^ auVar27,
                                   *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15));
          auVar46._0_4_ = auVar42._0_4_ * param_7;
          auVar46._4_4_ = auVar42._4_4_ * param_7;
          auVar46._8_4_ = auVar42._8_4_ * param_7;
          auVar46._12_4_ = auVar42._12_4_ * param_7;
          auVar46._16_4_ = auVar42._16_4_ * param_7;
          auVar46._20_4_ = auVar42._20_4_ * param_7;
          auVar46._24_4_ = auVar42._24_4_ * param_7;
          auVar46._28_4_ = auVar42._28_4_ * param_7;
          auVar42 = vmaskmovps_avx(auVar45 ^ auVar27,auVar46);
          *(undefined1 (*) [32])(param_3 + (ulonglong)uVar15) = auVar42;
        }
        uVar24 = uVar24 + 8;
        uVar15 = uVar15 + 0x20;
        uVar19 = uVar19 + 1;
      } while (uVar24 < (uVar23 & 0xfffffff8));
      goto LAB_140aadf86;
    }
  }
  else {
    uVar23 = param_5 + 7;
    if (-1 < (int)param_5) {
      uVar23 = param_5;
    }
    uVar23 = uVar23 & 0xfffffff8;
    if (0 < (int)uVar23) {
      if (param_7 <= __real_3727c5ac) {
        uVar19 = 0;
        auVar31._4_4_ = __real_0000001f;
        auVar31._0_4_ = __real_0000001f;
        auVar31._8_4_ = __real_0000001f;
        auVar31._12_4_ = __real_0000001f;
        auVar31._16_4_ = __real_0000001f;
        auVar31._20_4_ = __real_0000001f;
        auVar31._24_4_ = __real_0000001f;
        auVar31._28_4_ = __real_0000001f;
        auVar35._4_4_ = __real_00000001;
        auVar35._0_4_ = __real_00000001;
        auVar35._8_4_ = __real_00000001;
        auVar35._12_4_ = __real_00000001;
        auVar35._16_4_ = __real_00000001;
        auVar35._20_4_ = __real_00000001;
        auVar35._24_4_ = __real_00000001;
        auVar35._28_4_ = __real_00000001;
        auVar27 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
        uVar15 = 0;
        uVar24 = 0;
        do {
          uVar16 = (undefined4)uVar24;
          auVar40._4_4_ = uVar16;
          auVar40._0_4_ = uVar16;
          auVar40._8_4_ = uVar16;
          auVar40._12_4_ = uVar16;
          auVar40._16_4_ = uVar16;
          auVar40._20_4_ = uVar16;
          auVar40._24_4_ = uVar16;
          auVar40._28_4_ = uVar16;
          auVar33 = vpor_avx2(auVar40,auVar29);
          auVar33 = vpand_avx2(auVar33,auVar31);
          auVar33 = vpsllvd_avx2(auVar35,auVar33);
          uVar16 = *(undefined4 *)(param_2 + (ulonglong)(uVar19 & 0xffffffc));
          auVar43._4_4_ = uVar16;
          auVar43._0_4_ = uVar16;
          auVar43._8_4_ = uVar16;
          auVar43._12_4_ = uVar16;
          auVar43._16_4_ = uVar16;
          auVar43._20_4_ = uVar16;
          auVar43._24_4_ = uVar16;
          auVar43._28_4_ = uVar16;
          if ((auVar33 & auVar43) != (undefined1  [32])0x0) {
            auVar33 = vpand_avx2(auVar43,auVar33);
            auVar37 = vpcmpeqd_avx2(auVar33,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
            auVar33 = vmaskmovps_avx(auVar37 ^ auVar27,
                                     *(undefined1 (*) [32])(param_3 + (ulonglong)uVar15));
            auVar33 = vmaskmovps_avx(auVar37 ^ auVar27,auVar33);
            *(undefined1 (*) [32])(param_3 + (ulonglong)uVar15) = auVar33;
          }
          uVar24 = uVar24 + 8;
          uVar15 = uVar15 + 0x20;
          uVar19 = uVar19 + 1;
        } while (uVar24 < uVar23);
      }
      else {
        uVar19 = 0;
        auVar32._4_4_ = __real_0000001f;
        auVar32._0_4_ = __real_0000001f;
        auVar32._8_4_ = __real_0000001f;
        auVar32._12_4_ = __real_0000001f;
        auVar32._16_4_ = __real_0000001f;
        auVar32._20_4_ = __real_0000001f;
        auVar32._24_4_ = __real_0000001f;
        auVar32._28_4_ = __real_0000001f;
        auVar36._4_4_ = __real_00000001;
        auVar36._0_4_ = __real_00000001;
        auVar36._8_4_ = __real_00000001;
        auVar36._12_4_ = __real_00000001;
        auVar36._16_4_ = __real_00000001;
        auVar36._20_4_ = __real_00000001;
        auVar36._24_4_ = __real_00000001;
        auVar36._28_4_ = __real_00000001;
        auVar27 = vpcmpeqd_avx2(auVar27,auVar27);
        uVar15 = 0;
        uVar24 = 0;
        do {
          uVar16 = (undefined4)uVar24;
          auVar41._4_4_ = uVar16;
          auVar41._0_4_ = uVar16;
          auVar41._8_4_ = uVar16;
          auVar41._12_4_ = uVar16;
          auVar41._16_4_ = uVar16;
          auVar41._20_4_ = uVar16;
          auVar41._24_4_ = uVar16;
          auVar41._28_4_ = uVar16;
          auVar33 = vpor_avx2(auVar41,auVar29);
          auVar33 = vpand_avx2(auVar33,auVar32);
          auVar33 = vpsllvd_avx2(auVar36,auVar33);
          uVar16 = *(undefined4 *)(param_2 + (ulonglong)(uVar19 & 0xffffffc));
          auVar44._4_4_ = uVar16;
          auVar44._0_4_ = uVar16;
          auVar44._8_4_ = uVar16;
          auVar44._12_4_ = uVar16;
          auVar44._16_4_ = uVar16;
          auVar44._20_4_ = uVar16;
          auVar44._24_4_ = uVar16;
          auVar44._28_4_ = uVar16;
          if ((auVar33 & auVar44) != (undefined1  [32])0x0) {
            auVar33 = vpand_avx2(auVar44,auVar33);
            auVar42 = vpcmpeqd_avx2(auVar33,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
            auVar42 = auVar42 ^ auVar27;
            uVar25 = (ulonglong)uVar15;
            auVar33 = vmaskmovps_avx(auVar42,*(undefined1 (*) [32])(param_3 + uVar25));
            auVar37 = vmaskmovps_avx(auVar42,*(undefined1 (*) [32])(param_1 + uVar25));
            auVar47._0_4_ = param_7 * auVar37._0_4_ + auVar33._0_4_;
            auVar47._4_4_ = param_7 * auVar37._4_4_ + auVar33._4_4_;
            auVar47._8_4_ = param_7 * auVar37._8_4_ + auVar33._8_4_;
            auVar47._12_4_ = param_7 * auVar37._12_4_ + auVar33._12_4_;
            auVar47._16_4_ = param_7 * auVar37._16_4_ + auVar33._16_4_;
            auVar47._20_4_ = param_7 * auVar37._20_4_ + auVar33._20_4_;
            auVar47._24_4_ = param_7 * auVar37._24_4_ + auVar33._24_4_;
            auVar47._28_4_ = param_7 * auVar37._28_4_ + auVar33._28_4_;
            auVar33 = vmaskmovps_avx(auVar42,auVar47);
            *(undefined1 (*) [32])(param_3 + uVar25) = auVar33;
          }
          uVar24 = uVar24 + 8;
          uVar15 = uVar15 + 0x20;
          uVar19 = uVar19 + 1;
        } while (uVar24 < uVar23);
      }
      goto LAB_140aadf86;
    }
  }
  uVar24 = 0;
LAB_140aadf86:
  iVar21 = (int)uVar24;
  if (iVar21 < (int)param_5) {
    auVar29._4_4_ = iVar21;
    auVar29._0_4_ = iVar21;
    auVar29._8_4_ = iVar21;
    auVar29._12_4_ = iVar21;
    auVar29._16_4_ = iVar21;
    auVar29._20_4_ = iVar21;
    auVar29._24_4_ = iVar21;
    auVar29._28_4_ = iVar21;
    auVar33 = vpor_avx2(auVar29,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar34._4_4_ = __real_0000001f;
    auVar34._0_4_ = __real_0000001f;
    auVar34._8_4_ = __real_0000001f;
    auVar34._12_4_ = __real_0000001f;
    auVar34._16_4_ = __real_0000001f;
    auVar34._20_4_ = __real_0000001f;
    auVar34._24_4_ = __real_0000001f;
    auVar34._28_4_ = __real_0000001f;
    auVar29 = vpand_avx2(auVar33,auVar34);
    auVar38._4_4_ = __real_00000001;
    auVar38._0_4_ = __real_00000001;
    auVar38._8_4_ = __real_00000001;
    auVar38._12_4_ = __real_00000001;
    auVar38._16_4_ = __real_00000001;
    auVar38._20_4_ = __real_00000001;
    auVar38._24_4_ = __real_00000001;
    auVar38._28_4_ = __real_00000001;
    auVar29 = vpsllvd_avx2(auVar38,auVar29);
    auVar39._4_4_ = param_5;
    auVar39._0_4_ = param_5;
    auVar39._8_4_ = param_5;
    auVar39._12_4_ = param_5;
    auVar39._16_4_ = param_5;
    auVar39._20_4_ = param_5;
    auVar39._24_4_ = param_5;
    auVar39._28_4_ = param_5;
    uVar16 = *(undefined4 *)(param_2 + (ulonglong)((uint)(uVar24 >> 3) & 0xffffffc));
    auVar27._4_4_ = uVar16;
    auVar27._0_4_ = uVar16;
    auVar27._8_4_ = uVar16;
    auVar27._12_4_ = uVar16;
    auVar27._16_4_ = uVar16;
    auVar27._20_4_ = uVar16;
    auVar27._24_4_ = uVar16;
    auVar27._28_4_ = uVar16;
    auVar29 = vpand_avx2(auVar27,auVar29);
    auVar27 = vpcmpeqd_avx2(auVar29,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    auVar33 = vpcmpgtd_avx2(auVar39,auVar33);
    auVar29 = vpand_avx2(auVar27,auVar33);
    uVar16 = vmovmskps_avx(auVar29);
    uVar20 = vmovmskps_avx(auVar33);
    if ((char)uVar16 != (char)uVar20) {
      lVar17 = (longlong)(iVar21 << 2);
      auVar29 = vpandn_avx2(auVar27,auVar33);
      auVar6 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
      auVar27 = vpmovsxwd_avx2(auVar6);
      if (param_6 == 0) {
        auVar29 = vmaskmovps_avx(auVar27,*(undefined1 (*) [32])(param_1 + lVar17));
        auVar30._0_4_ = param_7 * auVar29._0_4_;
        auVar30._4_4_ = param_7 * auVar29._4_4_;
        auVar30._8_4_ = param_7 * auVar29._8_4_;
        auVar30._12_4_ = param_7 * auVar29._12_4_;
        auVar30._16_4_ = param_7 * auVar29._16_4_;
        auVar30._20_4_ = param_7 * auVar29._20_4_;
        auVar30._24_4_ = param_7 * auVar29._24_4_;
        auVar30._28_4_ = param_7 * auVar29._28_4_;
      }
      else {
        auVar29 = vmaskmovps_avx(auVar29,*(undefined1 (*) [32])(param_3 + lVar17));
        auVar30 = auVar29;
        if (__real_3727c5ac < param_7) {
          auVar33 = vmaskmovps_avx(auVar27,*(undefined1 (*) [32])(param_1 + lVar17));
          auVar30._0_4_ = auVar33._0_4_ * param_7 + auVar29._0_4_;
          auVar30._4_4_ = auVar33._4_4_ * param_7 + auVar29._4_4_;
          auVar30._8_4_ = auVar33._8_4_ * param_7 + auVar29._8_4_;
          auVar30._12_4_ = auVar33._12_4_ * param_7 + auVar29._12_4_;
          auVar30._16_4_ = auVar33._16_4_ * param_7 + auVar29._16_4_;
          auVar30._20_4_ = auVar33._20_4_ * param_7 + auVar29._20_4_;
          auVar30._24_4_ = auVar33._24_4_ * param_7 + auVar29._24_4_;
          auVar30._28_4_ = auVar33._28_4_ * param_7 + auVar29._28_4_;
        }
      }
      auVar29 = vmaskmovps_avx(auVar27,auVar30);
      *(undefined1 (*) [32])(param_3 + lVar17) = auVar29;
    }
  }
  auVar6 = vroundss_avx(ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),
                        ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),10);
  uVar15 = (uint)auVar6._0_4_;
  uVar23 = uVar15 + 7;
  if (-1 < (int)uVar15) {
    uVar23 = uVar15;
  }
  uVar23 = uVar23 & 0xfffffff8;
  if ((int)uVar23 < 1) {
    iVar21 = 0;
    if ((int)uVar15 < 1) {
      return;
    }
  }
  else {
    uVar19 = 0;
    uVar24 = 0;
    if (param_6 == 0) {
      do {
        puVar4 = (undefined8 *)(param_2 + (ulonglong)uVar19);
        uVar12 = puVar4[1];
        uVar13 = puVar4[2];
        uVar14 = puVar4[3];
        puVar5 = (undefined8 *)(param_4 + (ulonglong)uVar19);
        *puVar5 = *puVar4;
        puVar5[1] = uVar12;
        puVar5[2] = uVar13;
        puVar5[3] = uVar14;
        uVar24 = uVar24 + 8;
        uVar19 = uVar19 + 0x20;
      } while (uVar24 < uVar23);
    }
    else {
      do {
        uVar18 = (ulonglong)uVar19;
        puVar1 = (ulonglong *)(param_4 + uVar18);
        uVar25 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (ulonglong *)(param_2 + uVar18);
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar3 = (ulonglong *)(param_4 + uVar18);
        *puVar3 = *puVar1 | *puVar2;
        puVar3[1] = uVar25 | uVar9;
        puVar3[2] = uVar7 | uVar10;
        puVar3[3] = uVar8 | uVar11;
        uVar24 = uVar24 + 8;
        uVar19 = uVar19 + 0x20;
      } while (uVar24 < uVar23);
    }
    iVar21 = (int)uVar24;
    if ((int)uVar15 <= iVar21) {
      return;
    }
  }
  auVar26._4_4_ = iVar21;
  auVar26._0_4_ = iVar21;
  auVar26._8_4_ = iVar21;
  auVar26._12_4_ = iVar21;
  auVar26._16_4_ = iVar21;
  auVar26._20_4_ = iVar21;
  auVar26._24_4_ = iVar21;
  auVar26._28_4_ = iVar21;
  auVar29 = vpor_avx2(auVar26,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  pauVar22 = (undefined1 (*) [32])(param_4 + iVar21 * 4);
  auVar28._4_4_ = uVar15;
  auVar28._0_4_ = uVar15;
  auVar28._8_4_ = uVar15;
  auVar28._12_4_ = uVar15;
  auVar28._16_4_ = uVar15;
  auVar28._20_4_ = uVar15;
  auVar28._24_4_ = uVar15;
  auVar28._28_4_ = uVar15;
  auVar27 = vpcmpgtd_avx2(auVar28,auVar29);
  auVar29 = vmaskmovps_avx(auVar27,*(undefined1 (*) [32])(param_2 + iVar21 * 4));
  if (param_6 != 0) {
    auVar33 = vmaskmovps_avx(auVar27,*pauVar22);
    auVar29 = auVar33 | auVar29;
  }
  auVar29 = vmaskmovps_avx(auVar27,auVar29);
  *pauVar22 = auVar29;
  return;
}

// LerpBoneTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cunfun_3C_CunS_3E_Cuni_avx2 @ 140aae200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LerpBoneTransforms___un_3C_s_5B_unFTransform_5D__3E_un_3C_s_5B__c_unFTransform_5D__3E_Cunfun_3C_CunS_3E_Cuni_avx2
               (longlong param_1,longlong param_2,float param_3,longlong param_4,uint param_5,
               undefined1 (*param_6) [32])

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 (*pauVar5) [24];
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [24];
  undefined1 auVar12 [24];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  double dVar46;
  undefined1 in_ZMM1 [64];
  double dVar47;
  undefined1 auVar48 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar49 [32];
  double dVar53;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  ulonglong uVar89;
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  
  auVar10 = _DAT_151c6b060;
  auVar9 = _DAT_151c6b040;
  uVar30 = _UNK_150b5455c;
  uVar29 = _UNK_150b54558;
  uVar28 = _UNK_150b54554;
  uVar27 = _UNK_150b54550;
  uVar26 = _UNK_150b5454c;
  uVar25 = _UNK_150b54548;
  uVar24 = _UNK_150b54544;
  uVar23 = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar59 = in_ZMM4._0_32_;
  auVar8 = vpcmpeqd_avx2(in_ZMM1._0_32_,in_ZMM1._0_32_);
  uVar31 = param_5 & 0xfffffff8;
  auVar8 = auVar8 & ~*param_6;
  fVar7 = __real_3f800000 - param_3;
  auVar63 = in_ZMM7._0_32_;
  if ((((((((SUB321(auVar8 >> 0x1f,0) & 1) == 0 && (SUB321(auVar8 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar8 >> 0x5f,0) & 1) == 0) && SUB321(auVar8 >> 0x7f,0) == '\0') &&
        (SUB321(auVar8 >> 0x9f,0) & 1) == 0) && SUB321(auVar8 >> 0xbf,0) == '\0') &&
      (SUB321(auVar8 >> 0xdf,0) & 1) == 0) && -1 < auVar8[0x1f]) {
    if (0 < (int)uVar31) {
      dVar46 = (double)fVar7;
      dVar53 = (double)param_3;
      lVar32 = param_1 + 0x20;
      lVar1 = param_1 + 0x40;
      uVar34 = 0;
      auVar70 = ZEXT816(0);
      auVar8 = vpcmpeqd_avx2(auVar63,auVar63);
      auVar63._8_8_ = __real_3ff0000000000000;
      auVar63._0_8_ = __real_3ff0000000000000;
      auVar63._16_8_ = __real_3ff0000000000000;
      auVar63._24_8_ = __real_3ff0000000000000;
      do {
        uVar35 = (ulonglong)((uint)*(ushort *)(param_4 + uVar34 * 2) * 0x60);
        uVar33 = (ulonglong)((uint)*(ushort *)(param_4 + 2 + uVar34 * 2) * 0x60);
        pdVar2 = (double *)(param_1 + uVar33);
        pdVar3 = (double *)(param_1 + uVar35);
        pdVar4 = (double *)(param_2 + uVar33);
        auVar109._0_8_ = dVar53 * *pdVar4;
        auVar109._8_8_ = dVar53 * pdVar4[1];
        auVar109._16_8_ = dVar53 * pdVar4[2];
        auVar109._24_8_ = dVar53 * pdVar4[3];
        pdVar4 = (double *)(param_2 + uVar35);
        auVar116._0_8_ = dVar53 * *pdVar4;
        auVar116._8_8_ = dVar53 * pdVar4[1];
        auVar116._16_8_ = dVar53 * pdVar4[2];
        auVar116._24_8_ = dVar53 * pdVar4[3];
        auVar117._0_8_ = dVar46 * *pdVar3 * auVar116._0_8_;
        auVar117._8_8_ = dVar46 * pdVar3[1] * auVar116._8_8_;
        auVar117._16_8_ = dVar46 * pdVar3[2] * auVar116._16_8_;
        auVar117._24_8_ = dVar46 * pdVar3[3] * auVar116._24_8_;
        auVar119._0_8_ = dVar46 * *pdVar2 * auVar109._0_8_;
        auVar119._8_8_ = dVar46 * pdVar2[1] * auVar109._8_8_;
        auVar119._16_8_ = dVar46 * pdVar2[2] * auVar109._16_8_;
        auVar119._24_8_ = dVar46 * pdVar2[3] * auVar109._24_8_;
        auVar59 = vpermpd_avx2(auVar119,0x4e);
        auVar39 = vpermpd_avx2(auVar117,0x4e);
        auVar54._0_8_ = auVar117._0_8_ + auVar39._0_8_;
        auVar54._8_8_ = auVar117._8_8_ + auVar39._8_8_;
        auVar54._16_8_ = auVar117._16_8_ + auVar39._16_8_;
        auVar54._24_8_ = auVar117._24_8_ + auVar39._24_8_;
        auVar38._0_8_ = auVar119._0_8_ + auVar59._0_8_;
        auVar38._8_8_ = auVar119._8_8_ + auVar59._8_8_;
        auVar38._16_8_ = auVar119._16_8_ + auVar59._16_8_;
        auVar38._24_8_ = auVar119._24_8_ + auVar59._24_8_;
        auVar59 = vpermpd_avx2(auVar38,0x39);
        auVar39 = vpermpd_avx2(auVar54,0x39);
        auVar55._0_8_ = auVar39._0_8_ + auVar54._0_8_;
        auVar55._8_8_ = auVar39._8_8_ + auVar54._8_8_;
        auVar55._16_8_ = auVar39._16_8_ + auVar54._16_8_;
        auVar55._24_8_ = auVar39._24_8_ + auVar54._24_8_;
        auVar39._0_8_ = auVar59._0_8_ + auVar38._0_8_;
        auVar39._8_8_ = auVar59._8_8_ + auVar38._8_8_;
        auVar39._16_8_ = auVar59._16_8_ + auVar38._16_8_;
        auVar39._24_8_ = auVar59._24_8_ + auVar38._24_8_;
        auVar59 = vcmppd_avx(ZEXT1632(auVar70),auVar39,2);
        auVar39 = vcmppd_avx(ZEXT1632(auVar70),auVar55,2);
        auVar39 = vpackssdw_avx2(auVar39,auVar59);
        auVar59 = vpshufd_avx2(auVar39,0x50);
        auVar40 = ZEXT1632(auVar70);
        auVar59 = vblendvps_avx(auVar40,auVar8,auVar59);
        auVar39 = vpshufd_avx2(auVar39,0xfa);
        auVar39 = vblendvps_avx(auVar40,auVar8,auVar39);
        auVar38 = vsubpd_avx(auVar40,auVar109);
        auVar40 = vsubpd_avx(auVar40,auVar116);
        auVar57._0_4_ = ~auVar59._0_4_ & auVar40._0_4_;
        auVar57._4_4_ = ~auVar59._4_4_ & auVar40._4_4_;
        auVar57._8_4_ = ~auVar59._8_4_ & auVar40._8_4_;
        auVar57._12_4_ = ~auVar59._12_4_ & auVar40._12_4_;
        auVar57._16_4_ = ~auVar59._16_4_ & auVar40._16_4_;
        auVar57._20_4_ = ~auVar59._20_4_ & auVar40._20_4_;
        auVar57._24_4_ = ~auVar59._24_4_ & auVar40._24_4_;
        auVar57._28_4_ = ~auVar59._28_4_ & auVar40._28_4_;
        auVar56._0_8_ = (ulonglong)auVar116._0_8_ & auVar59._0_8_;
        auVar56._8_8_ = (ulonglong)auVar116._8_8_ & auVar59._8_8_;
        auVar56._16_8_ = (ulonglong)auVar116._16_8_ & auVar59._16_8_;
        auVar56._24_8_ = (ulonglong)auVar116._24_8_ & auVar59._24_8_;
        auVar41._0_4_ = ~auVar39._0_4_ & auVar38._0_4_;
        auVar41._4_4_ = ~auVar39._4_4_ & auVar38._4_4_;
        auVar41._8_4_ = ~auVar39._8_4_ & auVar38._8_4_;
        auVar41._12_4_ = ~auVar39._12_4_ & auVar38._12_4_;
        auVar41._16_4_ = ~auVar39._16_4_ & auVar38._16_4_;
        auVar41._20_4_ = ~auVar39._20_4_ & auVar38._20_4_;
        auVar41._24_4_ = ~auVar39._24_4_ & auVar38._24_4_;
        auVar41._28_4_ = ~auVar39._28_4_ & auVar38._28_4_;
        auVar40._0_8_ = (ulonglong)auVar109._0_8_ & auVar39._0_8_;
        auVar40._8_8_ = (ulonglong)auVar109._8_8_ & auVar39._8_8_;
        auVar40._16_8_ = (ulonglong)auVar109._16_8_ & auVar39._16_8_;
        auVar40._24_8_ = (ulonglong)auVar109._24_8_ & auVar39._24_8_;
        auVar57 = auVar57 | auVar56;
        auVar41 = auVar41 | auVar40;
        dVar36 = dVar46 * *pdVar2 + auVar41._0_8_;
        dVar43 = dVar46 * pdVar2[1] + auVar41._8_8_;
        dVar44 = dVar46 * pdVar2[2] + auVar41._16_8_;
        dVar45 = dVar46 * pdVar2[3] + auVar41._24_8_;
        dVar47 = dVar46 * *pdVar3 + auVar57._0_8_;
        dVar50 = dVar46 * pdVar3[1] + auVar57._8_8_;
        dVar51 = dVar46 * pdVar3[2] + auVar57._16_8_;
        dVar52 = dVar46 * pdVar3[3] + auVar57._24_8_;
        auVar82._0_8_ = dVar47 * dVar47;
        auVar82._8_8_ = dVar50 * dVar50;
        auVar82._16_8_ = dVar51 * dVar51;
        auVar82._24_8_ = dVar52 * dVar52;
        auVar98._0_8_ = dVar36 * dVar36;
        auVar98._8_8_ = dVar43 * dVar43;
        auVar98._16_8_ = dVar44 * dVar44;
        auVar98._24_8_ = dVar45 * dVar45;
        auVar59 = vpermpd_avx2(auVar98,0x4e);
        auVar39 = vpermpd_avx2(auVar82,0x4e);
        auVar83._0_8_ = auVar82._0_8_ + auVar39._0_8_;
        auVar83._8_8_ = auVar82._8_8_ + auVar39._8_8_;
        auVar83._16_8_ = auVar82._16_8_ + auVar39._16_8_;
        auVar83._24_8_ = auVar82._24_8_ + auVar39._24_8_;
        auVar99._0_8_ = auVar98._0_8_ + auVar59._0_8_;
        auVar99._8_8_ = auVar98._8_8_ + auVar59._8_8_;
        auVar99._16_8_ = auVar98._16_8_ + auVar59._16_8_;
        auVar99._24_8_ = auVar98._24_8_ + auVar59._24_8_;
        auVar59 = vpermpd_avx2(auVar99,0x39);
        auVar39 = vpermpd_avx2(auVar83,0x39);
        auVar84._0_8_ = auVar83._0_8_ + auVar39._0_8_;
        auVar84._8_8_ = auVar83._8_8_ + auVar39._8_8_;
        auVar84._16_8_ = auVar83._16_8_ + auVar39._16_8_;
        auVar84._24_8_ = auVar83._24_8_ + auVar39._24_8_;
        auVar100._0_8_ = auVar99._0_8_ + auVar59._0_8_;
        auVar100._8_8_ = auVar99._8_8_ + auVar59._8_8_;
        auVar100._16_8_ = auVar99._16_8_ + auVar59._16_8_;
        auVar100._24_8_ = auVar99._24_8_ + auVar59._24_8_;
        auVar40 = vsqrtpd_avx(auVar84);
        auVar38 = vsqrtpd_avx(auVar100);
        auVar59 = vcmppd_avx(auVar10,auVar100,2);
        auVar39 = vcmppd_avx(auVar9,auVar84,2);
        auVar38 = vdivpd_avx(auVar63,auVar38);
        auVar40 = vdivpd_avx(auVar63,auVar40);
        auVar59 = vpackssdw_avx2(auVar39,auVar59);
        auVar39 = vpshufd_avx2(auVar59,0x50);
        auVar41 = vpshufd_avx2(auVar59,0xfa);
        auVar59 = vblendvps_avx(ZEXT1632(auVar70),auVar8,auVar39);
        auVar39 = vblendvps_avx(ZEXT1632(auVar70),auVar8,auVar41);
        auVar110._0_4_ = ~auVar39._0_4_ & uVar23;
        auVar110._4_4_ = ~auVar39._4_4_ & uVar24;
        auVar110._8_4_ = ~auVar39._8_4_ & uVar25;
        auVar110._12_4_ = ~auVar39._12_4_ & uVar26;
        auVar110._16_4_ = ~auVar39._16_4_ & uVar27;
        auVar110._20_4_ = ~auVar39._20_4_ & uVar28;
        auVar110._24_4_ = ~auVar39._24_4_ & uVar29;
        auVar110._28_4_ = ~auVar39._28_4_ & uVar30;
        auVar42._0_8_ = auVar39._0_8_ & (ulonglong)(auVar38._0_8_ * dVar36);
        auVar42._8_8_ = auVar39._8_8_ & (ulonglong)(auVar38._8_8_ * dVar43);
        auVar42._16_8_ = auVar39._16_8_ & (ulonglong)(auVar38._16_8_ * dVar44);
        auVar42._24_8_ = auVar39._24_8_ & (ulonglong)(auVar38._24_8_ * dVar45);
        auVar85._0_4_ = ~auVar59._0_4_ & uVar23;
        auVar85._4_4_ = ~auVar59._4_4_ & uVar24;
        auVar85._8_4_ = ~auVar59._8_4_ & uVar25;
        auVar85._12_4_ = ~auVar59._12_4_ & uVar26;
        auVar85._16_4_ = ~auVar59._16_4_ & uVar27;
        auVar85._20_4_ = ~auVar59._20_4_ & uVar28;
        auVar85._24_4_ = ~auVar59._24_4_ & uVar29;
        auVar85._28_4_ = ~auVar59._28_4_ & uVar30;
        auVar58._0_8_ = auVar59._0_8_ & (ulonglong)(auVar40._0_8_ * dVar47);
        auVar58._8_8_ = auVar59._8_8_ & (ulonglong)(auVar40._8_8_ * dVar50);
        auVar58._16_8_ = auVar59._16_8_ & (ulonglong)(auVar40._16_8_ * dVar51);
        auVar58._24_8_ = auVar59._24_8_ & (ulonglong)(auVar40._24_8_ * dVar52);
        *(undefined1 (*) [32])(param_1 + uVar35) = auVar85 | auVar58;
        pdVar2 = (double *)(param_2 + 0x20 + uVar35);
        dVar45 = *pdVar2;
        dVar47 = pdVar2[1];
        dVar50 = pdVar2[2];
        dVar51 = pdVar2[3];
        *(undefined1 (*) [32])(param_1 + uVar33) = auVar110 | auVar42;
        pdVar2 = (double *)(param_2 + 0x20 + uVar33);
        dVar52 = *pdVar2;
        dVar13 = pdVar2[1];
        dVar14 = pdVar2[2];
        dVar15 = pdVar2[3];
        pauVar5 = (undefined1 (*) [24])(lVar32 + uVar33);
        dVar36 = *(double *)*pauVar5;
        dVar19 = *(double *)(*pauVar5 + 8);
        auVar11 = *pauVar5;
        dVar43 = *(double *)pauVar5[1];
        pauVar5 = (undefined1 (*) [24])(lVar32 + uVar35);
        dVar16 = *(double *)(*pauVar5 + 8);
        auVar12 = *pauVar5;
        dVar44 = *(double *)pauVar5[1];
        *(double *)(lVar32 + uVar35) = dVar46 * *(double *)*pauVar5 + dVar53 * dVar45;
        ((double *)(lVar32 + uVar35))[1] = dVar46 * dVar16 + dVar53 * dVar47;
        pdVar2 = (double *)(param_2 + 0x40 + uVar35);
        dVar45 = *pdVar2;
        dVar47 = pdVar2[1];
        dVar16 = pdVar2[2];
        dVar17 = pdVar2[3];
        pdVar2 = (double *)(param_1 + 0x30 + uVar35);
        *pdVar2 = dVar46 * auVar12._16_8_ + dVar53 * dVar50;
        pdVar2[1] = dVar46 * dVar44 + dVar53 * dVar51;
        pdVar2 = (double *)(param_2 + 0x40 + uVar33);
        dVar44 = *pdVar2;
        dVar50 = pdVar2[1];
        dVar51 = pdVar2[2];
        dVar18 = pdVar2[3];
        pdVar2 = (double *)(lVar32 + uVar33);
        *pdVar2 = dVar46 * dVar36 + dVar53 * dVar52;
        pdVar2[1] = dVar46 * dVar19 + dVar53 * dVar13;
        pdVar2[2] = dVar46 * auVar11._16_8_ + dVar53 * dVar14;
        pdVar2[3] = dVar46 * dVar43 + dVar53 * dVar15;
        pauVar5 = (undefined1 (*) [24])(lVar1 + uVar33);
        auVar59._0_8_ = dVar46 * *(double *)*pauVar5 + dVar53 * dVar44;
        auVar59._8_8_ = dVar46 * *(double *)(*pauVar5 + 8) + dVar53 * dVar50;
        auVar59._16_8_ = dVar46 * SUB248(*pauVar5,0x10) + dVar53 * dVar51;
        auVar59._24_8_ = dVar46 * *(double *)pauVar5[1] + dVar53 * dVar18;
        pauVar5 = (undefined1 (*) [24])(lVar1 + uVar35);
        dVar43 = *(double *)(*pauVar5 + 8);
        auVar11 = *pauVar5;
        dVar36 = *(double *)pauVar5[1];
        *(double *)(lVar1 + uVar35) = dVar46 * *(double *)*pauVar5 + dVar53 * dVar45;
        ((double *)(lVar1 + uVar35))[1] = dVar46 * dVar43 + dVar53 * dVar47;
        pdVar2 = (double *)(param_1 + 0x50 + uVar35);
        *pdVar2 = dVar46 * auVar11._16_8_ + dVar53 * dVar16;
        pdVar2[1] = dVar46 * dVar36 + dVar53 * dVar17;
        *(undefined1 (*) [32])(lVar1 + uVar33) = auVar59;
        uVar34 = uVar34 + 2;
      } while (uVar34 < uVar31);
    }
    uVar34 = __real_ffffffffffffffff;
    auVar8 = ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000;
    dVar46 = __real_3ff0000000000000;
    if ((int)uVar31 < (int)param_5) {
      dVar53 = (double)fVar7;
      dVar36 = (double)param_3;
      lVar32 = (longlong)(int)uVar31;
      auVar70._0_12_ = ZEXT812(0);
      auVar70._12_4_ = 0;
      auVar9 = vpcmpeqd_avx2(auVar59,auVar59);
      auVar61._8_8_ = 0;
      auVar61._0_8_ = __real_3e45798ee2308c3a;
      uVar33 = CONCAT44(_UNK_150b54544,
                        ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      uVar35 = CONCAT44(_UNK_150b5454c,_UNK_150b54548);
      uVar21 = CONCAT44(_UNK_150b54554,_UNK_150b54550);
      uVar22 = CONCAT44(_UNK_150b5455c,_UNK_150b54558);
      do {
        lVar1 = (ulonglong)*(ushort *)(param_4 + lVar32 * 2) * 0x60;
        pdVar2 = (double *)(param_1 + lVar1);
        pdVar3 = (double *)(param_2 + lVar1);
        auVar86._0_8_ = dVar36 * *pdVar3;
        auVar86._8_8_ = dVar36 * pdVar3[1];
        auVar86._16_8_ = dVar36 * pdVar3[2];
        auVar86._24_8_ = dVar36 * pdVar3[3];
        auVar101._0_8_ = dVar53 * *pdVar2 * auVar86._0_8_;
        auVar101._8_8_ = dVar53 * pdVar2[1] * auVar86._8_8_;
        auVar101._16_8_ = dVar53 * pdVar2[2] * auVar86._16_8_;
        auVar101._24_8_ = dVar53 * pdVar2[3] * auVar86._24_8_;
        auVar10 = vpermpd_avx2(auVar101,0x4e);
        auVar102._0_8_ = auVar101._0_8_ + auVar10._0_8_;
        auVar102._8_8_ = auVar101._8_8_ + auVar10._8_8_;
        auVar102._16_8_ = auVar101._16_8_ + auVar10._16_8_;
        auVar102._24_8_ = auVar101._24_8_ + auVar10._24_8_;
        auVar10 = vpermpd_avx2(auVar102,0x39);
        auVar103._0_8_ = auVar102._0_8_ + auVar10._0_8_;
        auVar103._8_8_ = auVar102._8_8_ + auVar10._8_8_;
        auVar103._16_8_ = auVar102._16_8_ + auVar10._16_8_;
        auVar103._24_8_ = auVar102._24_8_ + auVar10._24_8_;
        auVar10 = vcmppd_avx(ZEXT1632(auVar70),auVar103,2);
        auVar10 = vpshufb_avx2(auVar10,auVar8);
        auVar10 = vblendvps_avx(ZEXT1632(auVar70),auVar9,auVar10);
        auVar59 = vsubpd_avx(ZEXT1632(auVar70),auVar86);
        auVar111._0_4_ = ~auVar10._0_4_ & auVar59._0_4_;
        auVar111._4_4_ = ~auVar10._4_4_ & auVar59._4_4_;
        auVar111._8_4_ = ~auVar10._8_4_ & auVar59._8_4_;
        auVar111._12_4_ = ~auVar10._12_4_ & auVar59._12_4_;
        auVar111._16_4_ = ~auVar10._16_4_ & auVar59._16_4_;
        auVar111._20_4_ = ~auVar10._20_4_ & auVar59._20_4_;
        auVar111._24_4_ = ~auVar10._24_4_ & auVar59._24_4_;
        auVar111._28_4_ = ~auVar10._28_4_ & auVar59._28_4_;
        auVar87._0_8_ = (ulonglong)auVar86._0_8_ & auVar10._0_8_;
        auVar87._8_8_ = (ulonglong)auVar86._8_8_ & auVar10._8_8_;
        auVar87._16_8_ = (ulonglong)auVar86._16_8_ & auVar10._16_8_;
        auVar87._24_8_ = (ulonglong)auVar86._24_8_ & auVar10._24_8_;
        auVar87 = auVar87 | auVar111;
        dVar44 = dVar53 * *pdVar2 + auVar87._0_8_;
        dVar45 = dVar53 * pdVar2[1] + auVar87._8_8_;
        dVar47 = dVar53 * pdVar2[2] + auVar87._16_8_;
        dVar50 = dVar53 * pdVar2[3] + auVar87._24_8_;
        auVar72._0_8_ = dVar44 * dVar44 + dVar47 * dVar47;
        auVar72._8_8_ = dVar45 * dVar45 + dVar50 * dVar50;
        auVar65 = vshufpd_avx(auVar72,auVar72,1);
        dVar43 = auVar72._0_8_ + auVar65._0_8_;
        auVar71._8_8_ = 0;
        auVar71._0_8_ = dVar43;
        auVar65 = vcmpsd_avx(auVar61,auVar71,6);
        dVar43 = dVar46 / SQRT(dVar43);
        uVar89 = ~auVar65._0_8_ & uVar34;
        auVar65._0_8_ = (ulonglong)(dVar44 * dVar43) & uVar89;
        auVar65._8_8_ = (ulonglong)(dVar45 * dVar43) & uVar89;
        auVar67._16_8_ = (ulonglong)(dVar47 * dVar43) & uVar89;
        auVar67._0_16_ = auVar65;
        auVar67._24_8_ = (ulonglong)(dVar50 * dVar43) & uVar89;
        auVar88._0_8_ = ~uVar89 & uVar33;
        auVar88._8_8_ = ~uVar89 & uVar35;
        auVar88._16_8_ = ~uVar89 & uVar21;
        auVar88._24_8_ = ~uVar89 & uVar22;
        auVar10 = vpermpd_avx2(auVar67,0xe9);
        auVar72 = auVar67._16_16_ | auVar88._16_16_;
        uVar6 = vmovlpd_avx(auVar65);
        *(undefined8 *)(param_1 + lVar1) = uVar6;
        auVar65 = vshufps_avx(auVar72,auVar72,0x4e);
        *(undefined1 (*) [16])(param_1 + 8 + lVar1) = auVar10._0_16_;
        uVar6 = vmovlpd_avx(auVar65);
        *(undefined8 *)(param_1 + 0x18 + lVar1) = uVar6;
        pdVar2 = (double *)(param_2 + 0x20 + lVar1);
        dVar44 = pdVar2[1];
        dVar45 = pdVar2[2];
        dVar47 = pdVar2[3];
        pauVar5 = (undefined1 (*) [24])(param_1 + 0x20 + lVar1);
        dVar50 = *(double *)(*pauVar5 + 8);
        auVar11 = *pauVar5;
        dVar43 = *(double *)pauVar5[1];
        pdVar3 = (double *)(param_1 + 0x20 + lVar1);
        *pdVar3 = dVar53 * *(double *)*pauVar5 + dVar36 * *pdVar2;
        pdVar3[1] = dVar53 * dVar50 + dVar36 * dVar44;
        pdVar2 = (double *)(param_1 + 0x30 + lVar1);
        *pdVar2 = dVar53 * auVar11._16_8_ + dVar36 * dVar45;
        pdVar2[1] = dVar53 * dVar43 + dVar36 * dVar47;
        pdVar2 = (double *)(param_2 + 0x40 + lVar1);
        dVar44 = pdVar2[1];
        dVar45 = pdVar2[2];
        dVar47 = pdVar2[3];
        pauVar5 = (undefined1 (*) [24])(param_1 + 0x40 + lVar1);
        dVar50 = *(double *)(*pauVar5 + 8);
        auVar11 = *pauVar5;
        dVar43 = *(double *)pauVar5[1];
        pdVar3 = (double *)(param_1 + 0x40 + lVar1);
        *pdVar3 = dVar53 * *(double *)*pauVar5 + dVar36 * *pdVar2;
        pdVar3[1] = dVar53 * dVar50 + dVar36 * dVar44;
        pdVar3[2] = dVar53 * auVar11._16_8_ + dVar36 * dVar45;
        pdVar3[3] = dVar53 * dVar43 + dVar36 * dVar47;
        lVar32 = lVar32 + 1;
      } while ((int)param_5 != lVar32);
    }
  }
  else {
    if (0 < (int)uVar31) {
      dVar46 = (double)fVar7;
      dVar53 = (double)param_3;
      lVar32 = param_1 + 0x20;
      lVar1 = param_1 + 0x40;
      uVar34 = 0;
      auVar70 = ZEXT816(0);
      auVar8 = vpcmpeqd_avx2(auVar63,auVar63);
      auVar62._8_8_ = __real_3ff0000000000000;
      auVar62._0_8_ = __real_3ff0000000000000;
      auVar62._16_8_ = __real_3ff0000000000000;
      auVar62._24_8_ = __real_3ff0000000000000;
      do {
        uVar35 = (ulonglong)((uint)*(ushort *)(param_4 + uVar34 * 2) * 0x60);
        uVar33 = (ulonglong)((uint)*(ushort *)(param_4 + 2 + uVar34 * 2) * 0x60);
        pdVar2 = (double *)(param_1 + uVar33);
        pdVar3 = (double *)(param_1 + uVar35);
        pdVar4 = (double *)(param_2 + uVar33);
        auVar73._0_8_ = dVar53 * *pdVar4;
        auVar73._8_8_ = dVar53 * pdVar4[1];
        auVar73._16_8_ = dVar53 * pdVar4[2];
        auVar73._24_8_ = dVar53 * pdVar4[3];
        pdVar4 = (double *)(param_2 + uVar35);
        auVar90._0_8_ = dVar53 * *pdVar4;
        auVar90._8_8_ = dVar53 * pdVar4[1];
        auVar90._16_8_ = dVar53 * pdVar4[2];
        auVar90._24_8_ = dVar53 * pdVar4[3];
        auVar104._0_8_ = auVar90._0_8_ * dVar46 * *pdVar3;
        auVar104._8_8_ = auVar90._8_8_ * dVar46 * pdVar3[1];
        auVar104._16_8_ = auVar90._16_8_ * dVar46 * pdVar3[2];
        auVar104._24_8_ = auVar90._24_8_ * dVar46 * pdVar3[3];
        auVar112._0_8_ = auVar73._0_8_ * dVar46 * *pdVar2;
        auVar112._8_8_ = auVar73._8_8_ * dVar46 * pdVar2[1];
        auVar112._16_8_ = auVar73._16_8_ * dVar46 * pdVar2[2];
        auVar112._24_8_ = auVar73._24_8_ * dVar46 * pdVar2[3];
        auVar59 = vpermpd_avx2(auVar112,0x4e);
        auVar63 = vpermpd_avx2(auVar104,0x4e);
        auVar105._0_8_ = auVar104._0_8_ + auVar63._0_8_;
        auVar105._8_8_ = auVar104._8_8_ + auVar63._8_8_;
        auVar105._16_8_ = auVar104._16_8_ + auVar63._16_8_;
        auVar105._24_8_ = auVar104._24_8_ + auVar63._24_8_;
        auVar113._0_8_ = auVar112._0_8_ + auVar59._0_8_;
        auVar113._8_8_ = auVar112._8_8_ + auVar59._8_8_;
        auVar113._16_8_ = auVar112._16_8_ + auVar59._16_8_;
        auVar113._24_8_ = auVar112._24_8_ + auVar59._24_8_;
        auVar59 = vpermpd_avx2(auVar113,0x39);
        auVar63 = vpermpd_avx2(auVar105,0x39);
        auVar106._0_8_ = auVar105._0_8_ + auVar63._0_8_;
        auVar106._8_8_ = auVar105._8_8_ + auVar63._8_8_;
        auVar106._16_8_ = auVar105._16_8_ + auVar63._16_8_;
        auVar106._24_8_ = auVar105._24_8_ + auVar63._24_8_;
        auVar114._0_8_ = auVar113._0_8_ + auVar59._0_8_;
        auVar114._8_8_ = auVar113._8_8_ + auVar59._8_8_;
        auVar114._16_8_ = auVar113._16_8_ + auVar59._16_8_;
        auVar114._24_8_ = auVar113._24_8_ + auVar59._24_8_;
        auVar59 = vcmppd_avx(ZEXT1632(auVar70),auVar114,2);
        auVar63 = vcmppd_avx(ZEXT1632(auVar70),auVar106,2);
        auVar63 = vpackssdw_avx2(auVar63,auVar59);
        auVar59 = vpshufd_avx2(auVar63,0x50);
        auVar38 = ZEXT1632(auVar70);
        auVar59 = vblendvps_avx(auVar38,auVar8,auVar59);
        auVar63 = vpshufd_avx2(auVar63,0xfa);
        auVar63 = vblendvps_avx(auVar38,auVar8,auVar63);
        auVar39 = vsubpd_avx(auVar38,auVar73);
        auVar38 = vsubpd_avx(auVar38,auVar90);
        auVar118._0_4_ = ~auVar59._0_4_ & auVar38._0_4_;
        auVar118._4_4_ = ~auVar59._4_4_ & auVar38._4_4_;
        auVar118._8_4_ = ~auVar59._8_4_ & auVar38._8_4_;
        auVar118._12_4_ = ~auVar59._12_4_ & auVar38._12_4_;
        auVar118._16_4_ = ~auVar59._16_4_ & auVar38._16_4_;
        auVar118._20_4_ = ~auVar59._20_4_ & auVar38._20_4_;
        auVar118._24_4_ = ~auVar59._24_4_ & auVar38._24_4_;
        auVar118._28_4_ = ~auVar59._28_4_ & auVar38._28_4_;
        auVar91._0_8_ = (ulonglong)auVar90._0_8_ & auVar59._0_8_;
        auVar91._8_8_ = (ulonglong)auVar90._8_8_ & auVar59._8_8_;
        auVar91._16_8_ = (ulonglong)auVar90._16_8_ & auVar59._16_8_;
        auVar91._24_8_ = (ulonglong)auVar90._24_8_ & auVar59._24_8_;
        auVar115._0_4_ = ~auVar63._0_4_ & auVar39._0_4_;
        auVar115._4_4_ = ~auVar63._4_4_ & auVar39._4_4_;
        auVar115._8_4_ = ~auVar63._8_4_ & auVar39._8_4_;
        auVar115._12_4_ = ~auVar63._12_4_ & auVar39._12_4_;
        auVar115._16_4_ = ~auVar63._16_4_ & auVar39._16_4_;
        auVar115._20_4_ = ~auVar63._20_4_ & auVar39._20_4_;
        auVar115._24_4_ = ~auVar63._24_4_ & auVar39._24_4_;
        auVar115._28_4_ = ~auVar63._28_4_ & auVar39._28_4_;
        auVar74._0_8_ = (ulonglong)auVar73._0_8_ & auVar63._0_8_;
        auVar74._8_8_ = (ulonglong)auVar73._8_8_ & auVar63._8_8_;
        auVar74._16_8_ = (ulonglong)auVar73._16_8_ & auVar63._16_8_;
        auVar74._24_8_ = (ulonglong)auVar73._24_8_ & auVar63._24_8_;
        auVar91 = auVar91 | auVar118;
        auVar74 = auVar74 | auVar115;
        dVar36 = auVar74._0_8_ + dVar46 * *pdVar2;
        dVar43 = auVar74._8_8_ + dVar46 * pdVar2[1];
        dVar44 = auVar74._16_8_ + dVar46 * pdVar2[2];
        dVar45 = auVar74._24_8_ + dVar46 * pdVar2[3];
        dVar47 = auVar91._0_8_ + dVar46 * *pdVar3;
        dVar50 = auVar91._8_8_ + dVar46 * pdVar3[1];
        dVar51 = auVar91._16_8_ + dVar46 * pdVar3[2];
        dVar52 = auVar91._24_8_ + dVar46 * pdVar3[3];
        auVar75._0_8_ = dVar47 * dVar47;
        auVar75._8_8_ = dVar50 * dVar50;
        auVar75._16_8_ = dVar51 * dVar51;
        auVar75._24_8_ = dVar52 * dVar52;
        auVar92._0_8_ = dVar36 * dVar36;
        auVar92._8_8_ = dVar43 * dVar43;
        auVar92._16_8_ = dVar44 * dVar44;
        auVar92._24_8_ = dVar45 * dVar45;
        auVar59 = vpermpd_avx2(auVar92,0x4e);
        auVar63 = vpermpd_avx2(auVar75,0x4e);
        auVar76._0_8_ = auVar75._0_8_ + auVar63._0_8_;
        auVar76._8_8_ = auVar75._8_8_ + auVar63._8_8_;
        auVar76._16_8_ = auVar75._16_8_ + auVar63._16_8_;
        auVar76._24_8_ = auVar75._24_8_ + auVar63._24_8_;
        auVar93._0_8_ = auVar92._0_8_ + auVar59._0_8_;
        auVar93._8_8_ = auVar92._8_8_ + auVar59._8_8_;
        auVar93._16_8_ = auVar92._16_8_ + auVar59._16_8_;
        auVar93._24_8_ = auVar92._24_8_ + auVar59._24_8_;
        auVar59 = vpermpd_avx2(auVar93,0x39);
        auVar63 = vpermpd_avx2(auVar76,0x39);
        auVar77._0_8_ = auVar76._0_8_ + auVar63._0_8_;
        auVar77._8_8_ = auVar76._8_8_ + auVar63._8_8_;
        auVar77._16_8_ = auVar76._16_8_ + auVar63._16_8_;
        auVar77._24_8_ = auVar76._24_8_ + auVar63._24_8_;
        auVar94._0_8_ = auVar93._0_8_ + auVar59._0_8_;
        auVar94._8_8_ = auVar93._8_8_ + auVar59._8_8_;
        auVar94._16_8_ = auVar93._16_8_ + auVar59._16_8_;
        auVar94._24_8_ = auVar93._24_8_ + auVar59._24_8_;
        auVar38 = vsqrtpd_avx(auVar77);
        auVar39 = vsqrtpd_avx(auVar94);
        auVar59 = vcmppd_avx(auVar10,auVar94,2);
        auVar63 = vcmppd_avx(auVar9,auVar77,2);
        auVar39 = vdivpd_avx(auVar62,auVar39);
        auVar38 = vdivpd_avx(auVar62,auVar38);
        auVar59 = vpackssdw_avx2(auVar63,auVar59);
        auVar63 = vpshufd_avx2(auVar59,0x50);
        auVar40 = vpshufd_avx2(auVar59,0xfa);
        auVar59 = vblendvps_avx(ZEXT1632(auVar70),auVar8,auVar63);
        auVar63 = vblendvps_avx(ZEXT1632(auVar70),auVar8,auVar40);
        auVar107._0_4_ = ~auVar63._0_4_ & uVar23;
        auVar107._4_4_ = ~auVar63._4_4_ & uVar24;
        auVar107._8_4_ = ~auVar63._8_4_ & uVar25;
        auVar107._12_4_ = ~auVar63._12_4_ & uVar26;
        auVar107._16_4_ = ~auVar63._16_4_ & uVar27;
        auVar107._20_4_ = ~auVar63._20_4_ & uVar28;
        auVar107._24_4_ = ~auVar63._24_4_ & uVar29;
        auVar107._28_4_ = ~auVar63._28_4_ & uVar30;
        auVar37._0_8_ = auVar63._0_8_ & (ulonglong)(auVar39._0_8_ * dVar36);
        auVar37._8_8_ = auVar63._8_8_ & (ulonglong)(auVar39._8_8_ * dVar43);
        auVar37._16_8_ = auVar63._16_8_ & (ulonglong)(auVar39._16_8_ * dVar44);
        auVar37._24_8_ = auVar63._24_8_ & (ulonglong)(auVar39._24_8_ * dVar45);
        auVar78._0_4_ = ~auVar59._0_4_ & uVar23;
        auVar78._4_4_ = ~auVar59._4_4_ & uVar24;
        auVar78._8_4_ = ~auVar59._8_4_ & uVar25;
        auVar78._12_4_ = ~auVar59._12_4_ & uVar26;
        auVar78._16_4_ = ~auVar59._16_4_ & uVar27;
        auVar78._20_4_ = ~auVar59._20_4_ & uVar28;
        auVar78._24_4_ = ~auVar59._24_4_ & uVar29;
        auVar78._28_4_ = ~auVar59._28_4_ & uVar30;
        auVar49._0_8_ = auVar59._0_8_ & (ulonglong)(auVar38._0_8_ * dVar47);
        auVar49._8_8_ = auVar59._8_8_ & (ulonglong)(auVar38._8_8_ * dVar50);
        auVar49._16_8_ = auVar59._16_8_ & (ulonglong)(auVar38._16_8_ * dVar51);
        auVar49._24_8_ = auVar59._24_8_ & (ulonglong)(auVar38._24_8_ * dVar52);
        *(undefined1 (*) [32])(param_1 + uVar35) = auVar78 | auVar49;
        pdVar2 = (double *)(param_2 + 0x20 + uVar35);
        dVar45 = *pdVar2;
        dVar47 = pdVar2[1];
        dVar50 = pdVar2[2];
        dVar51 = pdVar2[3];
        *(undefined1 (*) [32])(param_1 + uVar33) = auVar107 | auVar37;
        pdVar2 = (double *)(param_2 + 0x20 + uVar33);
        dVar52 = *pdVar2;
        dVar13 = pdVar2[1];
        dVar14 = pdVar2[2];
        dVar15 = pdVar2[3];
        pauVar5 = (undefined1 (*) [24])(lVar32 + uVar33);
        dVar36 = *(double *)*pauVar5;
        dVar20 = *(double *)(*pauVar5 + 8);
        auVar11 = *pauVar5;
        dVar43 = *(double *)pauVar5[1];
        pauVar5 = (undefined1 (*) [24])(lVar32 + uVar35);
        dVar16 = *(double *)(*pauVar5 + 8);
        auVar12 = *pauVar5;
        dVar44 = *(double *)pauVar5[1];
        *(double *)(lVar32 + uVar35) = dVar46 * *(double *)*pauVar5 + dVar53 * dVar45;
        ((double *)(lVar32 + uVar35))[1] = dVar46 * dVar16 + dVar53 * dVar47;
        pdVar2 = (double *)(param_2 + 0x40 + uVar35);
        dVar45 = *pdVar2;
        dVar47 = pdVar2[1];
        dVar16 = pdVar2[2];
        dVar17 = pdVar2[3];
        pdVar2 = (double *)(param_1 + 0x30 + uVar35);
        *pdVar2 = dVar46 * auVar12._16_8_ + dVar53 * dVar50;
        pdVar2[1] = dVar46 * dVar44 + dVar53 * dVar51;
        pdVar2 = (double *)(param_2 + 0x40 + uVar33);
        dVar50 = *pdVar2;
        dVar51 = pdVar2[1];
        dVar18 = pdVar2[2];
        dVar19 = pdVar2[3];
        pdVar2 = (double *)(lVar32 + uVar33);
        *pdVar2 = dVar46 * dVar36 + dVar53 * dVar52;
        pdVar2[1] = dVar46 * dVar20 + dVar53 * dVar13;
        pdVar2[2] = dVar46 * auVar11._16_8_ + dVar53 * dVar14;
        pdVar2[3] = dVar46 * dVar43 + dVar53 * dVar15;
        pauVar5 = (undefined1 (*) [24])(lVar1 + uVar33);
        dVar36 = *(double *)*pauVar5;
        dVar52 = *(double *)(*pauVar5 + 8);
        auVar11 = *pauVar5;
        dVar43 = *(double *)pauVar5[1];
        pauVar5 = (undefined1 (*) [24])(lVar1 + uVar35);
        dVar13 = *(double *)(*pauVar5 + 8);
        auVar12 = *pauVar5;
        dVar44 = *(double *)pauVar5[1];
        *(double *)(lVar1 + uVar35) = dVar46 * *(double *)*pauVar5 + dVar53 * dVar45;
        ((double *)(lVar1 + uVar35))[1] = dVar46 * dVar13 + dVar53 * dVar47;
        pdVar2 = (double *)(param_1 + 0x50 + uVar35);
        *pdVar2 = dVar46 * auVar12._16_8_ + dVar53 * dVar16;
        pdVar2[1] = dVar46 * dVar44 + dVar53 * dVar17;
        pdVar2 = (double *)(lVar1 + uVar33);
        *pdVar2 = dVar46 * dVar36 + dVar53 * dVar50;
        pdVar2[1] = dVar46 * dVar52 + dVar53 * dVar51;
        pdVar2[2] = dVar46 * auVar11._16_8_ + dVar53 * dVar18;
        pdVar2[3] = dVar46 * dVar43 + dVar53 * dVar19;
        uVar34 = uVar34 + 2;
        auVar59 = auVar10;
      } while (uVar34 < uVar31);
    }
    uVar34 = __real_ffffffffffffffff;
    auVar8 = ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000;
    dVar46 = __real_3ff0000000000000;
    if ((int)uVar31 < (int)param_5) {
      dVar53 = (double)fVar7;
      dVar36 = (double)param_3;
      lVar32 = (longlong)(int)uVar31;
      auVar48._0_12_ = ZEXT812(0);
      auVar48._12_4_ = 0;
      auVar9 = vpcmpeqd_avx2(auVar59,auVar59);
      auVar60._8_8_ = 0;
      auVar60._0_8_ = __real_3e45798ee2308c3a;
      uVar33 = CONCAT44(_UNK_150b54544,
                        ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      uVar35 = CONCAT44(_UNK_150b5454c,_UNK_150b54548);
      uVar21 = CONCAT44(_UNK_150b54554,_UNK_150b54550);
      uVar22 = CONCAT44(_UNK_150b5455c,_UNK_150b54558);
      do {
        lVar1 = (ulonglong)*(ushort *)(param_4 + lVar32 * 2) * 0x60;
        pdVar2 = (double *)(param_1 + lVar1);
        pdVar3 = (double *)(param_2 + lVar1);
        auVar79._0_8_ = dVar36 * *pdVar3;
        auVar79._8_8_ = dVar36 * pdVar3[1];
        auVar79._16_8_ = dVar36 * pdVar3[2];
        auVar79._24_8_ = dVar36 * pdVar3[3];
        auVar95._0_8_ = dVar53 * *pdVar2 * auVar79._0_8_;
        auVar95._8_8_ = dVar53 * pdVar2[1] * auVar79._8_8_;
        auVar95._16_8_ = dVar53 * pdVar2[2] * auVar79._16_8_;
        auVar95._24_8_ = dVar53 * pdVar2[3] * auVar79._24_8_;
        auVar10 = vpermpd_avx2(auVar95,0x4e);
        auVar96._0_8_ = auVar95._0_8_ + auVar10._0_8_;
        auVar96._8_8_ = auVar95._8_8_ + auVar10._8_8_;
        auVar96._16_8_ = auVar95._16_8_ + auVar10._16_8_;
        auVar96._24_8_ = auVar95._24_8_ + auVar10._24_8_;
        auVar10 = vpermpd_avx2(auVar96,0x39);
        auVar97._0_8_ = auVar96._0_8_ + auVar10._0_8_;
        auVar97._8_8_ = auVar96._8_8_ + auVar10._8_8_;
        auVar97._16_8_ = auVar96._16_8_ + auVar10._16_8_;
        auVar97._24_8_ = auVar96._24_8_ + auVar10._24_8_;
        auVar10 = vcmppd_avx(ZEXT1632(auVar48),auVar97,2);
        auVar10 = vpshufb_avx2(auVar10,auVar8);
        auVar10 = vblendvps_avx(ZEXT1632(auVar48),auVar9,auVar10);
        auVar59 = vsubpd_avx(ZEXT1632(auVar48),auVar79);
        auVar108._0_4_ = ~auVar10._0_4_ & auVar59._0_4_;
        auVar108._4_4_ = ~auVar10._4_4_ & auVar59._4_4_;
        auVar108._8_4_ = ~auVar10._8_4_ & auVar59._8_4_;
        auVar108._12_4_ = ~auVar10._12_4_ & auVar59._12_4_;
        auVar108._16_4_ = ~auVar10._16_4_ & auVar59._16_4_;
        auVar108._20_4_ = ~auVar10._20_4_ & auVar59._20_4_;
        auVar108._24_4_ = ~auVar10._24_4_ & auVar59._24_4_;
        auVar108._28_4_ = ~auVar10._28_4_ & auVar59._28_4_;
        auVar80._0_8_ = (ulonglong)auVar79._0_8_ & auVar10._0_8_;
        auVar80._8_8_ = (ulonglong)auVar79._8_8_ & auVar10._8_8_;
        auVar80._16_8_ = (ulonglong)auVar79._16_8_ & auVar10._16_8_;
        auVar80._24_8_ = (ulonglong)auVar79._24_8_ & auVar10._24_8_;
        auVar80 = auVar80 | auVar108;
        dVar44 = dVar53 * *pdVar2 + auVar80._0_8_;
        dVar45 = dVar53 * pdVar2[1] + auVar80._8_8_;
        dVar47 = dVar53 * pdVar2[2] + auVar80._16_8_;
        dVar50 = dVar53 * pdVar2[3] + auVar80._24_8_;
        auVar68._0_8_ = dVar44 * dVar44 + dVar47 * dVar47;
        auVar68._8_8_ = dVar45 * dVar45 + dVar50 * dVar50;
        auVar70 = vshufpd_avx(auVar68,auVar68,1);
        dVar43 = auVar68._0_8_ + auVar70._0_8_;
        auVar69._8_8_ = 0;
        auVar69._0_8_ = dVar43;
        auVar70 = vcmpsd_avx(auVar60,auVar69,6);
        dVar43 = dVar46 / SQRT(dVar43);
        uVar89 = ~auVar70._0_8_ & uVar34;
        auVar64._0_8_ = (ulonglong)(dVar44 * dVar43) & uVar89;
        auVar64._8_8_ = (ulonglong)(dVar45 * dVar43) & uVar89;
        auVar66._16_8_ = (ulonglong)(dVar47 * dVar43) & uVar89;
        auVar66._0_16_ = auVar64;
        auVar66._24_8_ = (ulonglong)(dVar50 * dVar43) & uVar89;
        auVar81._0_8_ = ~uVar89 & uVar33;
        auVar81._8_8_ = ~uVar89 & uVar35;
        auVar81._16_8_ = ~uVar89 & uVar21;
        auVar81._24_8_ = ~uVar89 & uVar22;
        auVar10 = vpermpd_avx2(auVar66,0xe9);
        auVar70 = auVar66._16_16_ | auVar81._16_16_;
        uVar6 = vmovlpd_avx(auVar64);
        *(undefined8 *)(param_1 + lVar1) = uVar6;
        auVar70 = vshufps_avx(auVar70,auVar70,0x4e);
        *(undefined1 (*) [16])(param_1 + 8 + lVar1) = auVar10._0_16_;
        uVar6 = vmovlpd_avx(auVar70);
        *(undefined8 *)(param_1 + 0x18 + lVar1) = uVar6;
        pdVar2 = (double *)(param_2 + 0x20 + lVar1);
        dVar44 = pdVar2[1];
        dVar45 = pdVar2[2];
        dVar47 = pdVar2[3];
        pauVar5 = (undefined1 (*) [24])(param_1 + 0x20 + lVar1);
        dVar50 = *(double *)(*pauVar5 + 8);
        auVar11 = *pauVar5;
        dVar43 = *(double *)pauVar5[1];
        pdVar3 = (double *)(param_1 + 0x20 + lVar1);
        *pdVar3 = dVar53 * *(double *)*pauVar5 + dVar36 * *pdVar2;
        pdVar3[1] = dVar53 * dVar50 + dVar36 * dVar44;
        pdVar2 = (double *)(param_1 + 0x30 + lVar1);
        *pdVar2 = dVar53 * auVar11._16_8_ + dVar36 * dVar45;
        pdVar2[1] = dVar53 * dVar43 + dVar36 * dVar47;
        pdVar2 = (double *)(param_2 + 0x40 + lVar1);
        dVar44 = pdVar2[1];
        dVar45 = pdVar2[2];
        dVar47 = pdVar2[3];
        pauVar5 = (undefined1 (*) [24])(param_1 + 0x40 + lVar1);
        dVar50 = *(double *)(*pauVar5 + 8);
        auVar11 = *pauVar5;
        dVar43 = *(double *)pauVar5[1];
        pdVar3 = (double *)(param_1 + 0x40 + lVar1);
        *pdVar3 = dVar53 * *(double *)*pauVar5 + dVar36 * *pdVar2;
        pdVar3[1] = dVar53 * dVar50 + dVar36 * dVar44;
        pdVar3[2] = dVar53 * auVar11._16_8_ + dVar36 * dVar45;
        pdVar3[3] = dVar53 * dVar43 + dVar36 * dVar47;
        lVar32 = lVar32 + 1;
      } while ((int)param_5 != lVar32);
    }
  }
  return;
}

// BlendTransformOverwrite_avx2 @ 140aaea30

void BlendTransformOverwrite_avx2(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  double dVar15;
  
  if (0 < (int)param_4) {
    dVar15 = (double)param_3;
    lVar14 = 0;
    do {
      pdVar1 = (double *)(param_1 + lVar14);
      dVar3 = pdVar1[1];
      dVar4 = pdVar1[2];
      dVar5 = pdVar1[3];
      pdVar2 = (double *)(param_1 + 0x20 + lVar14);
      dVar6 = *pdVar2;
      dVar7 = pdVar2[1];
      dVar8 = pdVar2[2];
      dVar9 = pdVar2[3];
      pdVar2 = (double *)(param_1 + 0x40 + lVar14);
      dVar10 = *pdVar2;
      dVar11 = pdVar2[1];
      dVar12 = pdVar2[2];
      dVar13 = pdVar2[3];
      pdVar2 = (double *)(param_2 + lVar14);
      *pdVar2 = dVar15 * *pdVar1;
      pdVar2[1] = dVar15 * dVar3;
      pdVar2[2] = dVar15 * dVar4;
      pdVar2[3] = dVar15 * dVar5;
      pdVar1 = (double *)(param_2 + 0x20 + lVar14);
      *pdVar1 = dVar15 * dVar6;
      pdVar1[1] = dVar15 * dVar7;
      pdVar1[2] = dVar15 * dVar8;
      pdVar1[3] = dVar15 * dVar9;
      pdVar1 = (double *)(param_2 + 0x40 + lVar14);
      *pdVar1 = dVar15 * dVar10;
      pdVar1[1] = dVar15 * dVar11;
      pdVar1[2] = dVar15 * dVar12;
      pdVar1[3] = dVar15 * dVar13;
      lVar14 = lVar14 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar14);
  }
  return;
}

// BlendTransformAccumulate_avx2 @ 140aaea90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendTransformAccumulate_avx2(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [24];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [24];
  undefined1 auVar11 [24];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [32];
  longlong lVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  
  auVar25 = ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000;
  if (0 < (int)param_4) {
    dVar27 = (double)param_3;
    lVar26 = 0;
    auVar28 = ZEXT816(0);
    auVar8 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
    do {
      pdVar1 = (double *)(param_1 + lVar26);
      auVar29._0_8_ = dVar27 * *pdVar1;
      auVar29._8_8_ = dVar27 * pdVar1[1];
      auVar29._16_8_ = dVar27 * pdVar1[2];
      auVar29._24_8_ = dVar27 * pdVar1[3];
      pdVar1 = (double *)(param_2 + lVar26);
      dVar12 = pdVar1[1];
      dVar13 = pdVar1[2];
      dVar14 = pdVar1[3];
      auVar31._0_8_ = auVar29._0_8_ * *pdVar1;
      auVar31._8_8_ = auVar29._8_8_ * dVar12;
      auVar31._16_8_ = auVar29._16_8_ * dVar13;
      auVar31._24_8_ = auVar29._24_8_ * dVar14;
      auVar9 = vpermpd_avx2(auVar31,0x4e);
      auVar32._0_8_ = auVar31._0_8_ + auVar9._0_8_;
      auVar32._8_8_ = auVar31._8_8_ + auVar9._8_8_;
      auVar32._16_8_ = auVar31._16_8_ + auVar9._16_8_;
      auVar32._24_8_ = auVar31._24_8_ + auVar9._24_8_;
      auVar9 = vpermpd_avx2(auVar32,0x39);
      auVar33._0_8_ = auVar32._0_8_ + auVar9._0_8_;
      auVar33._8_8_ = auVar32._8_8_ + auVar9._8_8_;
      auVar33._16_8_ = auVar32._16_8_ + auVar9._16_8_;
      auVar33._24_8_ = auVar32._24_8_ + auVar9._24_8_;
      auVar9 = vcmppd_avx(ZEXT1632(auVar28),auVar33,2);
      auVar9 = vpshufb_avx2(auVar9,auVar25);
      auVar9 = vblendvps_avx(ZEXT1632(auVar28),auVar8,auVar9);
      auVar30 = vsubpd_avx(ZEXT1632(auVar28),auVar29);
      auVar34._0_4_ = ~auVar9._0_4_ & auVar30._0_4_;
      auVar34._4_4_ = ~auVar9._4_4_ & auVar30._4_4_;
      auVar34._8_4_ = ~auVar9._8_4_ & auVar30._8_4_;
      auVar34._12_4_ = ~auVar9._12_4_ & auVar30._12_4_;
      auVar34._16_4_ = ~auVar9._16_4_ & auVar30._16_4_;
      auVar34._20_4_ = ~auVar9._20_4_ & auVar30._20_4_;
      auVar34._24_4_ = ~auVar9._24_4_ & auVar30._24_4_;
      auVar34._28_4_ = ~auVar9._28_4_ & auVar30._28_4_;
      auVar30._0_8_ = (ulonglong)auVar29._0_8_ & auVar9._0_8_;
      auVar30._8_8_ = (ulonglong)auVar29._8_8_ & auVar9._8_8_;
      auVar30._16_8_ = (ulonglong)auVar29._16_8_ & auVar9._16_8_;
      auVar30._24_8_ = (ulonglong)auVar29._24_8_ & auVar9._24_8_;
      auVar30 = auVar30 | auVar34;
      pdVar2 = (double *)(param_1 + 0x20 + lVar26);
      dVar15 = *pdVar2;
      dVar16 = pdVar2[1];
      dVar17 = pdVar2[2];
      dVar18 = pdVar2[3];
      pdVar2 = (double *)(param_1 + 0x40 + lVar26);
      dVar19 = *pdVar2;
      dVar20 = pdVar2[1];
      dVar21 = pdVar2[2];
      dVar22 = pdVar2[3];
      pauVar3 = (undefined1 (*) [24])(param_2 + 0x20 + lVar26);
      dVar4 = *(double *)*pauVar3;
      dVar23 = *(double *)(*pauVar3 + 8);
      auVar10 = *pauVar3;
      dVar6 = *(double *)pauVar3[1];
      pauVar3 = (undefined1 (*) [24])(param_2 + 0x40 + lVar26);
      dVar5 = *(double *)*pauVar3;
      dVar24 = *(double *)(*pauVar3 + 8);
      auVar11 = *pauVar3;
      dVar7 = *(double *)pauVar3[1];
      pdVar2 = (double *)(param_2 + lVar26);
      *pdVar2 = *pdVar1 + auVar30._0_8_;
      pdVar2[1] = dVar12 + auVar30._8_8_;
      pdVar2[2] = dVar13 + auVar30._16_8_;
      pdVar2[3] = dVar14 + auVar30._24_8_;
      pdVar1 = (double *)(param_2 + 0x20 + lVar26);
      *pdVar1 = dVar27 * dVar15 + dVar4;
      pdVar1[1] = dVar27 * dVar16 + dVar23;
      pdVar1[2] = dVar27 * dVar17 + auVar10._16_8_;
      pdVar1[3] = dVar27 * dVar18 + dVar6;
      pdVar1 = (double *)(param_2 + 0x40 + lVar26);
      *pdVar1 = dVar27 * dVar19 + dVar5;
      pdVar1[1] = dVar27 * dVar20 + dVar24;
      pdVar1[2] = dVar27 * dVar21 + auVar11._16_8_;
      pdVar1[3] = dVar27 * dVar22 + dVar7;
      lVar26 = lVar26 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar26);
  }
  return;
}

// ConvertPoseToAdditive_avx2 @ 140aaeb70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToAdditive_avx2(longlong param_1,longlong param_2,uint param_3)

{
  ulonglong *puVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [24];
  undefined1 auVar4 [32];
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auVar12 [16];
  ulonglong uVar11;
  double dVar23;
  undefined1 auVar16 [32];
  double dVar21;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar22;
  ulonglong uVar24;
  double dVar25;
  ulonglong uVar26;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar27 [32];
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar36;
  double dVar37;
  double dVar49;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  double dVar47;
  double dVar51;
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  double dVar48;
  double dVar50;
  double dVar52;
  undefined1 auVar46 [32];
  double dVar53;
  double dVar57;
  double dVar58;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  double dVar59;
  undefined1 auVar56 [32];
  undefined1 auVar60 [32];
  undefined1 in_ZMM10 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar15 [24];
  undefined1 auVar17 [32];
  undefined1 auVar42 [32];
  undefined1 auVar45 [32];
  
  uVar8 = __real_3914c4e977ba1f5c;
  uVar7 = __real_46c8a6e32246c99c;
  uVar6 = __real_7fffffffffffffff;
  uVar5 = __real_3e45798ee2308c3a;
  if (0 < (int)param_3) {
    lVar9 = 0;
    auVar44 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
    auVar61 = ZEXT3264(auVar44);
    do {
      auVar16 = in_ZMM2._0_32_;
      auVar27 = in_ZMM1._0_32_;
      auVar62._8_8_ = 0;
      auVar62._0_8_ = *(ulonglong *)(param_2 + 0x40 + lVar9);
      auVar63._8_8_ = 0;
      auVar63._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar9);
      auVar64._8_8_ = 0;
      auVar64._0_8_ = *(ulonglong *)(param_2 + 0x50 + lVar9);
      auVar65._8_8_ = 0;
      auVar65._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar9);
      auVar44 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar9);
      pdVar2 = (double *)(param_2 + lVar9);
      auVar18._0_8_ =
           ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar2;
      auVar18._8_8_ = _UNK_150b543c8 * pdVar2[1];
      auVar18._16_8_ = _UNK_150b543d0 * pdVar2[2];
      auVar18._24_8_ = _UNK_150b543d8 * pdVar2[3];
      dVar31 = *(double *)(param_1 + 0x18 + lVar9);
      dVar21 = *(double *)(param_1 + lVar9);
      auVar35 = vpermpd_avx2(auVar18,0x1b);
      dVar23 = *(double *)(param_1 + 8 + lVar9);
      auVar17 = vpermpd_avx2(auVar18,0x4e);
      dVar25 = *(double *)(param_1 + 0x10 + lVar9);
      auVar20 = vshufpd_avx(auVar18,auVar18,5);
      auVar4 = vsubpd_avx(*(undefined1 (*) [32])(param_1 + 0x20 + lVar9),
                          *(undefined1 (*) [32])(param_2 + 0x20 + lVar9));
      dVar28 = auVar20._0_8_ * dVar25 *
               ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
               auVar17._0_8_ * dVar23 *
               ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
               auVar18._0_8_ * dVar31 +
               dVar21 * auVar35._0_8_ *
               ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
      dVar29 = auVar20._8_8_ * dVar25 * _UNK_150b54428 +
               auVar17._8_8_ * dVar23 * _UNK_150b54408 +
               auVar18._8_8_ * dVar31 + dVar21 * auVar35._8_8_ * _UNK_150b543e8;
      dVar30 = auVar20._16_8_ * dVar25 * _UNK_150b54430 +
               auVar17._16_8_ * dVar23 * _UNK_150b54410 +
               auVar18._16_8_ * dVar31 + dVar21 * auVar35._16_8_ * _UNK_150b543f0;
      dVar31 = auVar20._24_8_ * dVar25 * _UNK_150b54438 +
               auVar17._24_8_ * dVar23 * _UNK_150b54418 +
               auVar18._24_8_ * dVar31 + dVar21 * auVar35._24_8_ * _UNK_150b543f8;
      *(undefined1 (*) [32])(param_1 + 0x20 + lVar9) = auVar4;
      auVar4._8_8_ = uVar7;
      auVar4._0_8_ = uVar7;
      auVar4._16_8_ = uVar7;
      auVar4._24_8_ = uVar7;
      auVar20 = vcmppd_avx(auVar44,auVar4,2);
      auVar17 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      auVar4 = vpackssdw_avx2(auVar20,auVar17);
      auVar20._8_8_ = uVar8;
      auVar20._0_8_ = uVar8;
      auVar20._16_8_ = uVar8;
      auVar20._24_8_ = uVar8;
      auVar20 = vcmppd_avx(auVar20,auVar44,2);
      auVar35 = vpackssdw_avx2(auVar20,auVar17);
      auVar20 = auVar35 & auVar4;
      dVar21 = auVar44._0_8_;
      dVar23 = auVar44._8_8_;
      dVar25 = auVar44._16_8_;
      dVar32 = auVar44._24_8_;
      if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) == 0 && (SUB321(auVar20 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar20 >> 0x5f,0) & 1) == 0) && SUB321(auVar20 >> 0x7f,0) == '\0') &&
            (SUB321(auVar20 >> 0x9f,0) & 1) == 0) && SUB321(auVar20 >> 0xbf,0) == '\0') &&
          (SUB321(auVar20 >> 0xdf,0) & 1) == 0) && -1 < auVar20[0x1f]) {
        auVar20 = ZEXT1232(ZEXT812(0)) << 0x20;
LAB_140aaec44:
        auVar20 = auVar61._0_32_ ^ auVar20;
        auVar54._8_8_ = __real_7fe0000000000000;
        auVar54._0_8_ = __real_7fe0000000000000;
        auVar54._16_8_ = __real_7fe0000000000000;
        auVar54._24_8_ = __real_7fe0000000000000;
        auVar44 = vpand_avx2(auVar20,auVar54);
        auVar55._0_8_ = (ulonglong)dVar21 & __real_7fe0000000000000;
        auVar55._8_8_ = (ulonglong)dVar23 & __real_7fe0000000000000;
        auVar55._16_8_ = (ulonglong)dVar25 & __real_7fe0000000000000;
        auVar55._24_8_ = (ulonglong)dVar32 & __real_7fe0000000000000;
        auVar34._8_8_ = __real_7fcfffffffffffff;
        auVar34._0_8_ = __real_7fcfffffffffffff;
        auVar34._16_8_ = __real_7fcfffffffffffff;
        auVar34._24_8_ = __real_7fcfffffffffffff;
        auVar35 = vpsubq_avx2(auVar34,auVar55);
        auVar18 = vpsubq_avx2(auVar34,auVar44);
        auVar60._0_8_ = dVar21 * auVar35._0_8_;
        auVar60._8_8_ = dVar23 * auVar35._8_8_;
        auVar60._16_8_ = dVar25 * auVar35._16_8_;
        auVar60._24_8_ = dVar32 * auVar35._24_8_;
        auVar12 = vcvtpd2ps_avx(auVar60);
        dVar37 = auVar20._0_8_;
        auVar40._0_8_ = dVar37 * auVar18._0_8_;
        dVar48 = auVar20._8_8_;
        auVar40._8_8_ = dVar48 * auVar18._8_8_;
        dVar50 = auVar20._16_8_;
        auVar40._16_8_ = dVar50 * auVar18._16_8_;
        dVar52 = auVar20._24_8_;
        auVar40._24_8_ = dVar52 * auVar18._24_8_;
        auVar13 = vcvtpd2ps_avx(auVar40);
        auVar41._16_16_ = auVar13;
        auVar41._0_16_ = auVar12;
        auVar44 = vrcpps_avx(auVar41);
        auVar38._0_4_ = auVar44._0_4_ * (-(auVar44._0_4_ * auVar12._0_4_) + __real_40000000);
        auVar38._4_4_ = auVar44._4_4_ * (-(auVar44._4_4_ * auVar12._4_4_) + __real_40000000);
        auVar38._8_4_ = auVar44._8_4_ * (-(auVar44._8_4_ * auVar12._8_4_) + __real_40000000);
        auVar38._12_4_ = auVar44._12_4_ * (-(auVar44._12_4_ * auVar12._12_4_) + __real_40000000);
        auVar42._16_4_ = auVar44._16_4_ * (-(auVar44._16_4_ * auVar13._0_4_) + __real_40000000);
        auVar42._0_16_ = auVar38;
        auVar42._20_4_ = auVar44._20_4_ * (-(auVar44._20_4_ * auVar13._4_4_) + __real_40000000);
        auVar42._24_4_ = auVar44._24_4_ * (-(auVar44._24_4_ * auVar13._8_4_) + __real_40000000);
        auVar42._28_4_ = auVar44._28_4_ * (-(auVar44._28_4_ * auVar13._12_4_) + __real_40000000);
        auVar44 = vcvtps2pd_avx(auVar38);
        auVar4 = vcvtps2pd_avx(auVar42._16_16_);
        dVar53 = auVar18._0_8_ * auVar4._0_8_;
        dVar57 = auVar18._8_8_ * auVar4._8_8_;
        dVar58 = auVar18._16_8_ * auVar4._16_8_;
        dVar59 = auVar18._24_8_ * auVar4._24_8_;
        dVar36 = auVar44._0_8_ * auVar35._0_8_;
        dVar47 = auVar44._8_8_ * auVar35._8_8_;
        dVar49 = auVar44._16_8_ * auVar35._16_8_;
        dVar51 = auVar44._24_8_ * auVar35._24_8_;
        dVar53 = (-(dVar37 * dVar53) + __real_4000000000000000) * dVar53;
        dVar57 = (-(dVar48 * dVar57) + __real_4000000000000000) * dVar57;
        dVar58 = (-(dVar50 * dVar58) + __real_4000000000000000) * dVar58;
        dVar59 = (-(dVar52 * dVar59) + __real_4000000000000000) * dVar59;
        dVar36 = (-(dVar21 * dVar36) + __real_4000000000000000) * dVar36;
        dVar47 = (-(dVar23 * dVar47) + __real_4000000000000000) * dVar47;
        dVar49 = (-(dVar25 * dVar49) + __real_4000000000000000) * dVar49;
        dVar51 = (-(dVar32 * dVar51) + __real_4000000000000000) * dVar51;
        auVar43._0_8_ = dVar36 * (-(dVar36 * dVar21) + __real_4000000000000000);
        auVar43._8_8_ = dVar47 * (-(dVar47 * dVar23) + __real_4000000000000000);
        auVar43._16_8_ = dVar49 * (-(dVar49 * dVar25) + __real_4000000000000000);
        auVar43._24_8_ = dVar51 * (-(dVar51 * dVar32) + __real_4000000000000000);
        auVar44 = vpermps_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                               ,auVar20);
        auVar27 = vblendvps_avx(auVar27,auVar43,auVar44);
        auVar35._0_8_ = dVar53 * (-(dVar37 * dVar53) + __real_4000000000000000);
        auVar35._8_8_ = dVar57 * (-(dVar48 * dVar57) + __real_4000000000000000);
        auVar35._16_8_ = dVar58 * (-(dVar50 * dVar58) + __real_4000000000000000);
        auVar35._24_8_ = dVar59 * (-(dVar52 * dVar59) + __real_4000000000000000);
        auVar44 = vpermps_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                               ,auVar20);
        auVar16 = vblendvps_avx(auVar16,auVar35,auVar44);
      }
      else {
        auVar12 = vpackssdw_avx(auVar4._0_16_,auVar4._16_16_);
        auVar13 = vpackssdw_avx(auVar35._0_16_,auVar35._16_16_);
        auVar12 = vpand_avx(auVar12,auVar13);
        auVar12 = vpshufd_avx(auVar12,0xd8);
        auVar19._0_4_ = auVar35._0_4_ & auVar4._0_4_;
        auVar19._4_4_ = auVar35._4_4_ & auVar4._4_4_;
        auVar19._8_4_ = auVar35._8_4_ & auVar4._8_4_;
        auVar19._12_4_ = auVar35._12_4_ & auVar4._12_4_;
        auVar19._16_4_ = auVar35._16_4_ & auVar4._16_4_;
        auVar19._20_4_ = auVar35._20_4_ & auVar4._20_4_;
        auVar19._24_4_ = auVar35._24_4_ & auVar4._24_4_;
        auVar19._28_4_ = auVar35._28_4_ & auVar4._28_4_;
        auVar20 = vpermpd_avx2(auVar19,0xd8);
        uVar10 = vmovmskps_avx(auVar20);
        auVar20 = vpmovzxwd_avx2(auVar12);
        auVar35 = vpslld_avx2(auVar20,0x1f);
        auVar20 = vpsrad_avx2(auVar35,0x1f);
        auVar12 = vcvtpd2ps_avx(auVar44);
        auVar13 = vcvtpd2ps_avx(auVar20);
        auVar44._16_16_ = auVar13;
        auVar44._0_16_ = auVar12;
        auVar44 = vrcpps_avx(auVar44);
        auVar39._0_4_ = (-(auVar44._0_4_ * auVar12._0_4_) + __real_40000000) * auVar44._0_4_;
        auVar39._4_4_ = (-(auVar44._4_4_ * auVar12._4_4_) + __real_40000000) * auVar44._4_4_;
        auVar39._8_4_ = (-(auVar44._8_4_ * auVar12._8_4_) + __real_40000000) * auVar44._8_4_;
        auVar39._12_4_ = (-(auVar44._12_4_ * auVar12._12_4_) + __real_40000000) * auVar44._12_4_;
        auVar45._16_4_ = (-(auVar44._16_4_ * auVar13._0_4_) + __real_40000000) * auVar44._16_4_;
        auVar45._0_16_ = auVar39;
        auVar45._20_4_ = (-(auVar44._20_4_ * auVar13._4_4_) + __real_40000000) * auVar44._20_4_;
        auVar45._24_4_ = (-(auVar44._24_4_ * auVar13._8_4_) + __real_40000000) * auVar44._24_4_;
        auVar45._28_4_ = (-(auVar44._28_4_ * auVar13._12_4_) + __real_40000000) * auVar44._28_4_;
        auVar44 = vcvtps2pd_avx(auVar45._16_16_);
        auVar4 = vcvtps2pd_avx(auVar39);
        dVar53 = auVar44._0_8_ * (-(auVar20._0_8_ * auVar44._0_8_) + __real_4000000000000000);
        dVar57 = auVar44._8_8_ * (-(auVar20._8_8_ * auVar44._8_8_) + __real_4000000000000000);
        dVar58 = auVar44._16_8_ * (-(auVar20._16_8_ * auVar44._16_8_) + __real_4000000000000000);
        dVar59 = auVar44._24_8_ * (-(auVar20._24_8_ * auVar44._24_8_) + __real_4000000000000000);
        auVar44 = vpcmpeqd_avx2(auVar44,auVar44);
        auVar61 = ZEXT3264(auVar44);
        dVar37 = (-(dVar21 * auVar4._0_8_) + __real_4000000000000000) * auVar4._0_8_;
        dVar48 = (-(dVar23 * auVar4._8_8_) + __real_4000000000000000) * auVar4._8_8_;
        dVar50 = (-(dVar25 * auVar4._16_8_) + __real_4000000000000000) * auVar4._16_8_;
        dVar52 = (-(dVar32 * auVar4._24_8_) + __real_4000000000000000) * auVar4._24_8_;
        auVar56._0_8_ = (-(auVar20._0_8_ * dVar53) + __real_4000000000000000) * dVar53;
        auVar56._8_8_ = (-(auVar20._8_8_ * dVar57) + __real_4000000000000000) * dVar57;
        auVar56._16_8_ = (-(auVar20._16_8_ * dVar58) + __real_4000000000000000) * dVar58;
        auVar56._24_8_ = (-(auVar20._24_8_ * dVar59) + __real_4000000000000000) * dVar59;
        auVar46._0_8_ = (-(dVar21 * dVar37) + __real_4000000000000000) * dVar37;
        auVar46._8_8_ = (-(dVar23 * dVar48) + __real_4000000000000000) * dVar48;
        auVar46._16_8_ = (-(dVar25 * dVar50) + __real_4000000000000000) * dVar50;
        auVar46._24_8_ = (-(dVar32 * dVar52) + __real_4000000000000000) * dVar52;
        auVar44 = vpmovsxdq_avx2(auVar35._0_16_);
        auVar27 = vblendvps_avx(auVar27,auVar46,auVar44);
        auVar44 = vpermps_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                               ,auVar20);
        auVar16 = vblendvps_avx(auVar16,auVar56,auVar44);
        if ((char)uVar10 != -1) goto LAB_140aaec44;
      }
      in_ZMM2 = ZEXT3264(auVar16);
      in_ZMM1 = ZEXT3264(auVar27);
      auVar64 = vunpcklpd_avx(auVar64,auVar65);
      auVar62 = vunpcklpd_avx(auVar62,auVar63);
      dVar21 = auVar27._0_8_;
      dVar23 = auVar27._8_8_;
      dVar25 = auVar27._16_8_;
      dVar32 = auVar27._24_8_;
      dVar37 = auVar62._0_8_;
      dVar48 = -(dVar37 * dVar21 * dVar21) + dVar21 + dVar21;
      dVar21 = auVar62._8_8_;
      dVar50 = -(dVar21 * dVar23 * dVar23) + dVar23 + dVar23;
      dVar23 = auVar64._0_8_;
      dVar52 = -(dVar23 * dVar25 * dVar25) + dVar25 + dVar25;
      dVar25 = auVar64._8_8_;
      dVar53 = -(dVar25 * dVar32 * dVar32) + dVar32 + dVar32;
      dVar32 = -(dVar37 * dVar48 * dVar48) + dVar48 + dVar48;
      dVar48 = -(dVar21 * dVar50 * dVar50) + dVar50 + dVar50;
      dVar50 = -(dVar23 * dVar52 * dVar52) + dVar52 + dVar52;
      dVar52 = -(dVar25 * dVar53 * dVar53) + dVar53 + dVar53;
      auVar16._0_8_ = (ulonglong)dVar37 & uVar6;
      auVar16._8_8_ = (ulonglong)dVar21 & uVar6;
      auVar16._16_8_ = (ulonglong)dVar23 & uVar6;
      auVar16._24_8_ = (ulonglong)dVar25 & uVar6;
      auVar27._8_8_ = uVar5;
      auVar27._0_8_ = uVar5;
      auVar27._16_8_ = uVar5;
      auVar27._24_8_ = uVar5;
      auVar44 = vcmppd_avx(auVar16,auVar27,2);
      auVar44 = vpshufb_avx2(auVar44,
                             ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                            );
      auVar44 = vblendvps_avx(auVar17,auVar61._0_32_,auVar44);
      auVar12._0_8_ =
           (double)CONCAT44(~auVar44._4_4_ & (uint)((ulonglong)dVar32 >> 0x20),
                            ~auVar44._0_4_ & SUB84(dVar32,0));
      auVar12._8_4_ = ~auVar44._8_4_ & SUB84(dVar48,0);
      auVar12._12_4_ = ~auVar44._12_4_ & (uint)((ulonglong)dVar48 >> 0x20);
      auVar15._16_4_ = ~auVar44._16_4_ & SUB84(dVar50,0);
      auVar15._0_16_ = auVar12;
      auVar15._20_4_ = ~auVar44._20_4_ & (uint)((ulonglong)dVar50 >> 0x20);
      auVar17._24_4_ = ~auVar44._24_4_ & SUB84(dVar52,0);
      auVar17._0_24_ = auVar15;
      auVar17._28_4_ = ~auVar44._28_4_ & (uint)((ulonglong)dVar52 >> 0x20);
      pauVar3 = (undefined1 (*) [24])(param_1 + 0x40 + lVar9);
      dVar21 = auVar12._8_8_ * *(double *)(*pauVar3 + 8) + _UNK_151c6afc8;
      dVar23 = auVar15._16_8_ * SUB248(*pauVar3,0x10) + _UNK_151c6afd0;
      dVar25 = auVar17._24_8_ * *(double *)pauVar3[1] + _UNK_151c6afd8;
      pdVar2 = (double *)(param_1 + 0x40 + lVar9);
      *pdVar2 = auVar12._0_8_ * *(double *)*pauVar3 +
                ___ymm_8000000000000000bff0000000000000bff0000000000000bff0000000000000;
      pdVar2[1] = dVar21;
      pdVar2[2] = dVar23;
      pdVar2[3] = dVar25;
      auVar13._0_8_ = dVar28 * dVar28 + dVar30 * dVar30;
      auVar13._8_8_ = dVar29 * dVar29 + dVar31 * dVar31;
      auVar62 = vshufpd_avx(auVar13,auVar13,1);
      dVar21 = auVar13._0_8_ + auVar62._0_8_;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = dVar21;
      dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
      auVar33._8_8_ = 0;
      auVar33._0_8_ = __real_3e45798ee2308c3a;
      auVar62 = vcmpsd_avx(auVar33,auVar14,6);
      uVar11 = ~auVar62._0_8_ & __real_ffffffffffffffff;
      uVar22 = ~uVar11 & _UNK_150b54548;
      uVar24 = ~uVar11 & _UNK_150b54550;
      uVar26 = ~uVar11 & _UNK_150b54558;
      puVar1 = (ulonglong *)(param_1 + lVar9);
      *puVar1 = (ulonglong)(dVar28 * dVar21) & uVar11 |
                ~uVar11 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      puVar1[1] = (ulonglong)(dVar29 * dVar21) & uVar11 | uVar22;
      puVar1[2] = (ulonglong)(dVar30 * dVar21) & uVar11 | uVar24;
      puVar1[3] = (ulonglong)(dVar31 * dVar21) & uVar11 | uVar26;
      lVar9 = lVar9 + 0x60;
    } while ((ulonglong)param_3 * 0x60 != lVar9);
  }
  return;
}

// ConvertPoseToMeshRotation_avx2 @ 140aaefe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertPoseToMeshRotation_avx2(longlong param_1,longlong param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double *pdVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar19 [32];
  
  dVar14 = _UNK_150b54438;
  dVar13 = _UNK_150b54430;
  dVar12 = _UNK_150b54428;
  dVar11 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar10 = _UNK_150b54418;
  dVar9 = _UNK_150b54410;
  dVar8 = _UNK_150b54408;
  dVar7 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar6 = _UNK_15076c6f8;
  dVar5 = ___xmm_bff00000000000003ff0000000000000;
  if (1 < (int)param_3) {
    pdVar15 = (double *)(param_1 + 0x78);
    uVar16 = 1;
    do {
      lVar17 = (longlong)*(int *)(param_2 + uVar16 * 4) * 0x60;
      dVar1 = *(double *)(param_1 + 0x18 + lVar17);
      dVar2 = *(double *)(param_1 + lVar17);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = *pdVar15;
      auVar20 = vmovhpd_avx(auVar20,pdVar15[-1]);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = pdVar15[-2];
      auVar21 = vmovhpd_avx(auVar21,pdVar15[-3]);
      dVar3 = *(double *)(param_1 + 8 + lVar17);
      dVar4 = *(double *)(param_1 + 0x10 + lVar17);
      auVar18._0_8_ =
           auVar21._0_8_ * dVar4 * dVar11 +
           pdVar15[-1] * dVar3 * dVar7 + dVar2 * auVar20._0_8_ * dVar5 + dVar1 * pdVar15[-3];
      auVar18._8_8_ =
           auVar21._8_8_ * dVar4 * dVar12 +
           *pdVar15 * dVar3 * dVar8 + dVar2 * auVar20._8_8_ * dVar6 + dVar1 * pdVar15[-2];
      auVar19._16_8_ =
           auVar20._0_8_ * dVar4 * dVar13 +
           pdVar15[-3] * dVar3 * dVar9 + dVar2 * auVar21._0_8_ * dVar5 + dVar1 * pdVar15[-1];
      auVar19._0_16_ = auVar18;
      auVar19._24_8_ =
           auVar20._8_8_ * dVar4 * dVar14 +
           pdVar15[-2] * dVar3 * dVar10 + dVar2 * auVar21._8_8_ * dVar6 + dVar1 * *pdVar15;
      dVar1 = (double)vmovlpd_avx(auVar18);
      pdVar15[-3] = dVar1;
      dVar1 = (double)vmovhpd_avx(auVar18);
      pdVar15[-2] = dVar1;
      dVar1 = (double)vmovlpd_avx(auVar19._16_16_);
      pdVar15[-1] = dVar1;
      dVar1 = (double)vmovhpd_avx(auVar19._16_16_);
      *pdVar15 = dVar1;
      uVar16 = uVar16 + 1;
      pdVar15 = pdVar15 + 0xc;
    } while (param_3 != uVar16);
  }
  return;
}

// ConvertMeshRotationPoseToLocalSpace_avx2 @ 140aaf0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ConvertMeshRotationPoseToLocalSpace_avx2(longlong param_1,longlong param_2,uint param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  ulonglong uVar20;
  double *pdVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar24 [32];
  
  dVar19 = _UNK_150b54438;
  dVar18 = _UNK_150b54430;
  dVar17 = _UNK_150b54428;
  dVar16 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar15 = _UNK_150b54418;
  dVar14 = _UNK_150b54410;
  dVar13 = _UNK_150b54408;
  dVar12 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar11 = _UNK_150b543d8;
  dVar10 = _UNK_150b543d0;
  dVar9 = _UNK_150b543c8;
  dVar8 = ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
  dVar7 = _UNK_15076c6f8;
  dVar6 = ___xmm_bff00000000000003ff0000000000000;
  if (1 < (int)param_3) {
    uVar20 = (ulonglong)param_3 + 1;
    pdVar21 = (double *)((ulonglong)param_3 * 0x60 + param_1 + -0x48);
    do {
      pdVar1 = (double *)(param_1 + (longlong)*(int *)(param_2 + -8 + uVar20 * 4) * 0x60);
      auVar23._0_8_ = dVar8 * *pdVar1;
      auVar23._8_8_ = dVar9 * pdVar1[1];
      auVar23._16_8_ = dVar10 * pdVar1[2];
      auVar23._24_8_ = dVar11 * pdVar1[3];
      auVar3 = vpermpd_avx2(auVar23,0xff);
      auVar25._8_8_ = 0;
      auVar25._0_8_ = *pdVar21;
      auVar25 = vmovhpd_avx(auVar25,pdVar21[-1]);
      auVar26._8_8_ = 0;
      auVar26._0_8_ = pdVar21[-2];
      auVar26 = vmovhpd_avx(auVar26,pdVar21[-3]);
      auVar4 = vpermpd_avx2(auVar23,0x55);
      auVar5 = vpermpd_avx2(auVar23,0xaa);
      auVar22._0_8_ =
           auVar26._0_8_ * auVar5._0_8_ * dVar16 +
           auVar4._0_8_ * pdVar21[-1] * dVar12 +
           auVar3._0_8_ * *(double *)*(undefined1 (*) [24])(pdVar21 + -3) +
           auVar25._0_8_ * auVar23._0_8_ * dVar6;
      auVar22._8_8_ =
           auVar26._8_8_ * auVar5._8_8_ * dVar17 +
           auVar4._8_8_ * *pdVar21 * dVar13 +
           auVar3._8_8_ * pdVar21[-2] + auVar25._8_8_ * auVar23._0_8_ * dVar7;
      auVar24._16_8_ =
           auVar25._0_8_ * auVar5._16_8_ * dVar18 +
           auVar4._16_8_ * pdVar21[-3] * dVar14 +
           auVar3._16_8_ * SUB248(*(undefined1 (*) [24])(pdVar21 + -3),0x10) +
           auVar26._0_8_ * auVar23._0_8_ * dVar6;
      auVar24._0_16_ = auVar22;
      auVar24._24_8_ =
           auVar25._8_8_ * auVar5._24_8_ * dVar19 +
           auVar4._24_8_ * pdVar21[-2] * dVar15 +
           auVar3._24_8_ * *pdVar21 + auVar26._8_8_ * auVar23._0_8_ * dVar7;
      dVar2 = (double)vmovlpd_avx(auVar22);
      pdVar21[-3] = dVar2;
      dVar2 = (double)vmovhpd_avx(auVar22);
      pdVar21[-2] = dVar2;
      dVar2 = (double)vmovlpd_avx(auVar24._16_16_);
      pdVar21[-1] = dVar2;
      dVar2 = (double)vmovhpd_avx(auVar24._16_16_);
      *pdVar21 = dVar2;
      uVar20 = uVar20 - 1;
      pdVar21 = pdVar21 + -0xc;
    } while (2 < uVar20);
  }
  return;
}

// AccumulateWithAdditiveScale_avx2 @ 140aaf210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AccumulateWithAdditiveScale_avx2(longlong param_1,longlong param_2,float param_3,uint param_4)

{
  double *pdVar1;
  undefined1 (*pauVar2) [24];
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [24];
  undefined1 auVar11 [24];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  longlong lVar43;
  double dVar44;
  undefined1 auVar45 [32];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  
  dVar42 = _UNK_150b54518;
  dVar41 = _UNK_150b54510;
  dVar40 = _UNK_150b54508;
  dVar39 = ___ymm_00000000000000003ff00000000000003ff00000000000003ff0000000000000;
  dVar38 = _UNK_150b54438;
  dVar37 = _UNK_150b54430;
  dVar36 = _UNK_150b54428;
  dVar35 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar34 = _UNK_150b54418;
  dVar33 = _UNK_150b54410;
  dVar32 = _UNK_150b54408;
  dVar31 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar30 = _UNK_15076c6f8;
  dVar29 = ___xmm_bff00000000000003ff0000000000000;
  if (0 < (int)param_4) {
    dVar44 = (double)param_3;
    lVar43 = 0;
    do {
      pdVar1 = (double *)(param_2 + lVar43);
      auVar45._0_8_ = dVar44 * *pdVar1;
      auVar45._8_8_ = dVar44 * pdVar1[1];
      auVar45._16_8_ = dVar44 * pdVar1[2];
      auVar45._24_8_ = dVar44 * pdVar1[3];
      pdVar1 = (double *)(param_2 + 0x20 + lVar43);
      dVar12 = *pdVar1;
      dVar13 = pdVar1[1];
      dVar14 = pdVar1[2];
      dVar15 = pdVar1[3];
      pauVar2 = (undefined1 (*) [24])(param_1 + 0x20 + lVar43);
      dVar4 = *(double *)*pauVar2;
      dVar24 = *(double *)(*pauVar2 + 8);
      auVar10 = *pauVar2;
      dVar5 = *(double *)pauVar2[1];
      pdVar1 = (double *)(param_2 + 0x40 + lVar43);
      dVar16 = *pdVar1;
      dVar17 = pdVar1[1];
      dVar18 = pdVar1[2];
      dVar19 = pdVar1[3];
      pdVar1 = (double *)(param_1 + 0x40 + lVar43);
      dVar20 = *pdVar1;
      dVar21 = pdVar1[1];
      dVar22 = pdVar1[2];
      dVar23 = pdVar1[3];
      auVar46._8_8_ = 0;
      auVar46._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar43);
      auVar46 = vmovhpd_avx(auVar46,*(undefined8 *)(param_1 + 0x10 + lVar43));
      auVar7 = vpermpd_avx2(auVar45,0xff);
      auVar47._8_8_ = 0;
      auVar47._0_8_ = *(ulonglong *)(param_1 + 8 + lVar43);
      auVar47 = vmovhpd_avx(auVar47,*(undefined8 *)(param_1 + lVar43));
      pauVar2 = (undefined1 (*) [24])(param_1 + lVar43);
      dVar25 = *(double *)(*pauVar2 + 8);
      auVar11 = *pauVar2;
      dVar6 = *(double *)pauVar2[1];
      auVar8 = vpermpd_avx2(auVar45,0x55);
      pdVar3 = (double *)(param_1 + 0x10 + lVar43);
      dVar26 = pdVar3[1];
      dVar27 = *(double *)(param_1 + lVar43);
      dVar28 = ((double *)(param_1 + lVar43))[1];
      auVar9 = vpermpd_avx2(auVar45,0xaa);
      pdVar1 = (double *)(param_1 + lVar43);
      *pdVar1 = auVar47._0_8_ * auVar9._0_8_ * dVar35 +
                auVar8._0_8_ * *pdVar3 * dVar31 +
                auVar7._0_8_ * *(double *)*pauVar2 + auVar45._0_8_ * auVar46._0_8_ * dVar29;
      pdVar1[1] = auVar47._8_8_ * auVar9._8_8_ * dVar36 +
                  auVar8._8_8_ * dVar26 * dVar32 +
                  auVar7._8_8_ * dVar25 + auVar45._0_8_ * auVar46._8_8_ * dVar30;
      pdVar1[2] = auVar46._0_8_ * auVar9._16_8_ * dVar37 +
                  auVar8._16_8_ * dVar27 * dVar33 +
                  auVar7._16_8_ * auVar11._16_8_ + auVar45._0_8_ * auVar47._0_8_ * dVar29;
      pdVar1[3] = auVar46._8_8_ * auVar9._24_8_ * dVar38 +
                  auVar8._24_8_ * dVar28 * dVar34 +
                  auVar7._24_8_ * dVar6 + auVar45._0_8_ * auVar47._8_8_ * dVar30;
      pdVar1 = (double *)(param_1 + 0x20 + lVar43);
      *pdVar1 = dVar44 * dVar12 + dVar4;
      pdVar1[1] = dVar44 * dVar13 + dVar24;
      pdVar1[2] = dVar44 * dVar14 + auVar10._16_8_;
      pdVar1[3] = dVar44 * dVar15 + dVar5;
      pdVar1 = (double *)(param_1 + 0x40 + lVar43);
      *pdVar1 = (dVar44 * dVar16 + dVar39) * dVar20;
      pdVar1[1] = (dVar44 * dVar17 + dVar40) * dVar21;
      pdVar1[2] = (dVar44 * dVar18 + dVar41) * dVar22;
      pdVar1[3] = (dVar44 * dVar19 + dVar42) * dVar23;
      lVar43 = lVar43 + 0x60;
    } while ((ulonglong)param_4 * 0x60 != lVar43);
  }
  return;
}

// BlendPosesPerBoneFilterScaleRotation_avx2 @ 140aaf370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScaleRotation_avx2
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,longlong param_10
               ,longlong param_11,longlong param_12,uint param_13)

{
  double *pdVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  double dVar26;
  undefined1 auVar24 [32];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar46;
  undefined1 auVar41 [32];
  double dVar45;
  double dVar48;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  ulonglong uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  double dVar62;
  undefined1 auVar61 [64];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 uVar63;
  double dVar64;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  double dVar76;
  double dVar78;
  double dVar79;
  double dVar80;
  undefined1 auVar77 [32];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  double dVar88;
  undefined1 auVar87 [64];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [16];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar109 [32];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  double local_398;
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined8 local_338;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  ulonglong local_2b8;
  ulonglong local_2a8;
  undefined1 local_298 [16];
  ulonglong local_288;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_238 [16];
  undefined1 local_218 [32];
  undefined1 local_1e8 [16];
  undefined1 local_1a8 [32];
  undefined1 local_188 [16];
  undefined1 local_168 [32];
  undefined1 local_148 [16];
  undefined1 local_128 [32];
  undefined8 local_108;
  undefined1 auVar50 [32];
  undefined1 auVar93 [32];
  undefined1 auVar103 [32];
  undefined1 auVar108 [32];
  undefined1 auVar110 [32];
  
  if (0 < (int)param_13) {
    lVar14 = 0;
    lVar15 = 0;
    iVar13 = 0;
    do {
      iVar10 = *(int *)(param_11 + lVar14 * 2);
      iVar9 = *(int *)(param_12 + lVar14);
      lVar16 = (longlong)iVar9;
      auVar107._0_8_ = *(ulonglong *)(param_2 + lVar15 * 4);
      local_1e8._8_8_ = 0;
      local_1e8._0_8_ = auVar107._0_8_;
      local_148._0_8_ = *(double *)(param_2 + 0x20 + lVar15 * 4);
      local_148._8_8_ = 0;
      local_278._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar15 * 4);
      local_278._8_8_ = 0;
      local_258._0_8_ = *(double *)(param_2 + 0x30 + lVar15 * 4);
      local_258._8_8_ = 0;
      local_268._0_8_ = *(ulonglong *)(param_2 + 0x38 + lVar15 * 4);
      local_268._8_8_ = 0;
      auVar90._0_8_ = *(double *)(param_2 + 0x40 + lVar15 * 4);
      local_188._8_8_ = 0;
      local_188._0_8_ = auVar90._0_8_;
      local_378._0_8_ = *(ulonglong *)(param_2 + 0x48 + lVar15 * 4);
      local_378._8_8_ = 0;
      local_388._0_8_ = *(double *)(param_2 + 0x50 + lVar15 * 4);
      local_388._8_8_ = 0;
      local_298._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar15 * 4);
      local_298._8_8_ = 0;
      auVar61 = ZEXT864(*(ulonglong *)(param_2 + 0x10 + lVar15 * 4));
      auVar72 = ZEXT864(*(ulonglong *)(param_2 + 8 + lVar15 * 4));
      auVar87 = ZEXT864(*(ulonglong *)(param_2 + 0x18 + lVar15 * 4));
      puVar11 = (ulonglong *)GetTransformFromArray(param_3,iVar10,iVar13);
      uVar52 = *puVar11;
      auVar73._8_8_ = 0;
      auVar73._0_8_ = uVar52;
      uVar2 = puVar11[1];
      auVar101._8_8_ = 0;
      auVar101._0_8_ = uVar2;
      uVar3 = puVar11[2];
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar3;
      uVar4 = puVar11[3];
      local_218._8_8_ = 0;
      local_218._0_8_ = uVar4;
      dVar27 = (double)puVar11[8];
      auVar104._8_8_ = 0;
      auVar104._0_8_ = dVar27;
      uVar5 = puVar11[9];
      local_3b8._8_8_ = 0;
      local_3b8._0_8_ = uVar5;
      dVar22 = (double)puVar11[10];
      auVar47._8_8_ = 0;
      auVar47._0_8_ = dVar22;
      auVar34 = auVar61._0_16_;
      local_288 = auVar61._0_8_;
      auVar38 = auVar72._0_16_;
      local_2a8 = auVar72._0_8_;
      auVar65 = auVar87._0_16_;
      local_2b8 = auVar87._0_8_;
      if (lVar16 == -1) {
        auVar89 = vunpcklpd_avx(local_1e8,auVar38);
        auVar51 = vunpcklpd_avx(auVar34,auVar65);
        auVar23 = vunpcklpd_avx(auVar65,auVar34);
        auVar28 = vunpcklpd_avx(auVar38,local_1e8);
        auVar18._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar28._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar51._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar23._0_8_ * 0.0 + auVar89._0_8_;
        auVar18._8_8_ =
             _UNK_150b54428 * auVar28._8_8_ * 0.0 +
             _UNK_150b54408 * auVar51._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar23._8_8_ * 0.0 + auVar89._8_8_;
        local_168._16_8_ =
             _UNK_150b54430 * auVar23._0_8_ * 0.0 +
             _UNK_150b54410 * auVar89._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar28._0_8_ * 0.0 + auVar51._0_8_;
        local_168._0_16_ = auVar18;
        local_168._24_8_ =
             _UNK_150b54438 * auVar23._8_8_ * 0.0 +
             _UNK_150b54418 * auVar89._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar28._8_8_ * 0.0 + auVar51._8_8_;
        local_348 = vshufpd_avx(auVar18,auVar18,1);
        local_358 = local_168._16_16_;
        local_368 = vshufpd_avx(local_358,local_358,1);
        auVar89 = vunpcklpd_avx(auVar73,auVar101);
        auVar51 = vunpcklpd_avx(auVar36,local_218._0_16_);
        auVar23 = vunpcklpd_avx(local_218._0_16_,auVar36);
        auVar28 = vunpcklpd_avx(auVar101,auVar73);
        auVar49._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar28._0_8_ * 0.0 +
             auVar51._0_8_ * 0.0 *
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
             ___xmm_bff00000000000003ff0000000000000 * auVar23._0_8_ * 0.0 + auVar89._0_8_;
        auVar49._8_8_ =
             _UNK_150b54428 * auVar28._8_8_ * 0.0 +
             auVar51._8_8_ * 0.0 * _UNK_150b54408 +
             _UNK_15076c6f8 * auVar23._8_8_ * 0.0 + auVar89._8_8_;
        auVar43._16_8_ =
             _UNK_150b54430 * auVar23._0_8_ * 0.0 +
             auVar89._0_8_ * 0.0 * _UNK_150b54410 +
             ___xmm_bff00000000000003ff0000000000000 * auVar28._0_8_ * 0.0 + auVar51._0_8_;
        auVar43._0_16_ = auVar49;
        auVar43._24_8_ =
             _UNK_150b54438 * auVar23._8_8_ * 0.0 +
             auVar89._8_8_ * 0.0 * _UNK_150b54418 +
             _UNK_15076c6f8 * auVar28._8_8_ * 0.0 + auVar51._8_8_;
        local_2c8 = vshufpd_avx(auVar49,auVar49,1);
        auVar51 = auVar43._16_16_;
        auVar89 = vshufpd_avx(auVar51,auVar51,1);
        local_318._8_8_ = 0;
        local_318._0_8_ = uVar5;
        local_308._8_8_ = 0;
        local_308._0_8_ = local_378._0_8_;
        local_2e8 = local_388;
        local_238 = local_188;
        local_2f8 = auVar47;
        local_2d8 = auVar104;
      }
      else {
        lVar12 = lVar16 * 0x20;
        dVar25 = *(double *)(param_4 + 0x18 + lVar12);
        auVar89 = vunpcklpd_avx(local_1e8,auVar38);
        auVar51 = vunpcklpd_avx(auVar34,auVar65);
        dVar26 = *(double *)(param_4 + lVar12);
        auVar23 = vunpcklpd_avx(auVar65,auVar34);
        auVar28 = vunpcklpd_avx(auVar38,local_1e8);
        dVar64 = *(double *)(param_4 + 8 + lVar12);
        dVar62 = *(double *)(param_4 + 0x10 + lVar12);
        auVar17._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar28._0_8_ * dVar62 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar51._0_8_ * dVar64 +
             dVar25 * auVar89._0_8_ +
             auVar23._0_8_ * dVar26 * ___xmm_bff00000000000003ff0000000000000;
        auVar17._8_8_ =
             _UNK_150b54428 * auVar28._8_8_ * dVar62 +
             _UNK_150b54408 * auVar51._8_8_ * dVar64 +
             dVar25 * auVar89._8_8_ + auVar23._8_8_ * dVar26 * _UNK_15076c6f8;
        local_168._16_8_ =
             _UNK_150b54430 * auVar23._0_8_ * dVar62 +
             _UNK_150b54410 * auVar89._0_8_ * dVar64 +
             dVar25 * auVar51._0_8_ +
             auVar28._0_8_ * dVar26 * ___xmm_bff00000000000003ff0000000000000;
        local_168._0_16_ = auVar17;
        local_168._24_8_ =
             _UNK_150b54438 * auVar23._8_8_ * dVar62 +
             _UNK_150b54418 * auVar89._8_8_ * dVar64 +
             dVar25 * auVar51._8_8_ + auVar28._8_8_ * dVar26 * _UNK_15076c6f8;
        local_348 = vshufpd_avx(auVar17,auVar17,1);
        local_358 = local_168._16_16_;
        local_368 = vshufpd_avx(local_358,local_358,1);
        dVar25 = *(double *)(param_6 + 0x18 + lVar12);
        auVar89 = vunpcklpd_avx(auVar73,auVar101);
        auVar51 = vunpcklpd_avx(auVar36,local_218._0_16_);
        dVar26 = *(double *)(param_6 + lVar12);
        auVar23 = vunpcklpd_avx(local_218._0_16_,auVar36);
        auVar28 = vunpcklpd_avx(auVar101,auVar73);
        dVar64 = *(double *)(param_6 + 8 + lVar12);
        dVar62 = *(double *)(param_6 + 0x10 + lVar12);
        auVar49._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar28._0_8_ * dVar62 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar51._0_8_ * dVar64 +
             dVar25 * auVar89._0_8_ +
             dVar26 * auVar23._0_8_ * ___xmm_bff00000000000003ff0000000000000;
        auVar49._8_8_ =
             _UNK_150b54428 * auVar28._8_8_ * dVar62 +
             _UNK_150b54408 * auVar51._8_8_ * dVar64 +
             dVar25 * auVar89._8_8_ + dVar26 * auVar23._8_8_ * _UNK_15076c6f8;
        auVar50._16_8_ =
             _UNK_150b54430 * auVar23._0_8_ * dVar62 +
             _UNK_150b54410 * auVar89._0_8_ * dVar64 +
             dVar25 * auVar51._0_8_ +
             dVar26 * auVar28._0_8_ * ___xmm_bff00000000000003ff0000000000000;
        auVar50._0_16_ = auVar49;
        auVar50._24_8_ =
             _UNK_150b54438 * auVar23._8_8_ * dVar62 +
             _UNK_150b54418 * auVar89._8_8_ * dVar64 +
             dVar25 * auVar51._8_8_ + dVar26 * auVar28._8_8_ * _UNK_15076c6f8;
        local_2c8 = vshufpd_avx(auVar49,auVar49,1);
        auVar51 = auVar50._16_16_;
        lVar12 = lVar16 * 0x18;
        auVar89 = vunpcklpd_avx(local_188,local_378);
        local_238._0_8_ = auVar89._0_8_ * *(double *)(param_5 + lVar12);
        local_238._8_8_ = auVar89._8_8_ * ((double *)(param_5 + lVar12))[1];
        local_2e8._8_8_ = 0;
        local_2e8._0_8_ = (double)local_388._0_8_ * *(double *)(param_5 + 0x10 + lVar12);
        auVar89 = vshufpd_avx(auVar51,auVar51,1);
        auVar23 = vunpcklpd_avx(auVar104,local_3b8);
        local_2d8._0_8_ = auVar23._0_8_ * *(double *)(param_7 + lVar12);
        local_2d8._8_8_ = auVar23._8_8_ * ((double *)(param_7 + lVar12))[1];
        local_308 = vshufpd_avx(local_238,local_238,1);
        local_318 = vshufpd_avx(local_2d8,local_2d8,1);
        local_2f8._8_8_ = 0;
        local_2f8._0_8_ = dVar22 * *(double *)(param_7 + 0x10 + lVar12);
      }
      uVar63 = local_238._0_8_;
      dVar25 = (double)puVar11[4];
      auVar105._8_8_ = 0;
      auVar105._0_8_ = dVar25;
      uVar6 = puVar11[5];
      auVar81._8_8_ = 0;
      auVar81._0_8_ = uVar6;
      dVar26 = (double)puVar11[6];
      auVar98._8_8_ = 0;
      auVar98._0_8_ = dVar26;
      auVar23 = vmaxss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_11 + 4 + lVar14 * 2)));
      uVar7 = puVar11[7];
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar7;
      auVar28 = vminss_avx(auVar23,ZEXT416((uint)__real_3f800000));
      auVar23 = vmaxss_avx(auVar28,ZEXT416(*(uint *)(param_10 + (longlong)iVar10 * 4)));
      uVar8 = puVar11[0xb];
      auVar53._8_8_ = 0;
      auVar53._0_8_ = uVar8;
      *(int *)(param_10 + (longlong)iVar10 * 4) = auVar23._0_4_;
      fVar83 = auVar28._0_4_;
      if (fVar83 <= __real_3727c5ac) {
        local_3b8 = local_348;
        local_218 = local_168;
        local_3a8 = local_308;
        auVar34 = local_358;
        auVar36 = local_368;
        local_398 = (double)local_2e8._0_8_;
      }
      else if (__real_3f7fff58 <= fVar83) {
        local_3b8 = local_2c8;
        local_218 = ZEXT1632(auVar49);
        local_3a8 = local_318;
        local_238 = local_2d8;
        auVar34 = auVar51;
        auVar36 = auVar89;
        auVar90._0_8_ = dVar27;
        auVar107._0_8_ = uVar52;
        local_288 = uVar3;
        local_2a8 = uVar2;
        local_2b8 = uVar4;
        local_298._0_8_ = uVar8;
        local_148._0_8_ = dVar25;
        local_278._0_8_ = uVar6;
        local_258._0_8_ = dVar26;
        local_268._0_8_ = uVar7;
        local_398 = (double)local_2f8._0_8_;
        local_388._0_8_ = dVar22;
        local_378._0_8_ = uVar5;
      }
      else {
        auVar34 = vunpcklpd_avx(auVar34,auVar65);
        auVar65 = vunpcklpd_avx(local_1e8,auVar38);
        auVar57._16_16_ = auVar34;
        auVar57._0_16_ = auVar65;
        auVar107 = vunpcklpd_avx(auVar36,local_218._0_16_);
        auVar101 = vunpcklpd_avx(auVar73,auVar101);
        auVar29._0_8_ = auVar65._0_8_ * auVar101._0_8_;
        auVar29._8_8_ = auVar65._8_8_ * auVar101._8_8_;
        auVar29._16_8_ = auVar34._0_8_ * auVar107._0_8_;
        auVar29._24_8_ = auVar34._8_8_ * auVar107._8_8_;
        auVar43 = vpermpd_avx2(auVar29,0x4e);
        auVar30._0_8_ = auVar29._0_8_ + auVar43._0_8_;
        auVar30._8_8_ = auVar29._8_8_ + auVar43._8_8_;
        auVar30._16_8_ = auVar29._16_8_ + auVar43._16_8_;
        auVar30._24_8_ = auVar29._24_8_ + auVar43._24_8_;
        auVar43 = vpermpd_avx2(auVar30,0x39);
        auVar31._0_8_ = auVar30._0_8_ + auVar43._0_8_;
        auVar31._8_8_ = auVar30._8_8_ + auVar43._8_8_;
        auVar31._16_8_ = auVar30._16_8_ + auVar43._16_8_;
        auVar31._24_8_ = auVar30._24_8_ + auVar43._24_8_;
        auVar36 = vunpcklpd_avx(local_388,local_298);
        auVar38 = vunpcklpd_avx(local_188,local_378);
        auVar74._16_16_ = auVar36;
        auVar74._0_16_ = auVar38;
        auVar73 = vunpcklpd_avx(auVar47,auVar53);
        auVar43 = vcmppd_avx(ZEXT832(0) << 0x40,auVar31,2);
        auVar43 = vpshufb_avx2(auVar43,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar43 = vblendvps_avx(ZEXT832(0) << 0x40,
                                ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                ,auVar43);
        auVar47 = vunpcklpd_avx(auVar104,local_3b8);
        auVar32._16_16_ = auVar73;
        auVar32._0_16_ = auVar47;
        auVar50 = vsubpd_avx(auVar32,auVar74);
        dVar64 = (double)fVar83;
        auVar19._0_8_ = dVar64 * auVar50._0_8_ + auVar38._0_8_;
        auVar19._8_8_ = dVar64 * auVar50._8_8_ + auVar38._8_8_;
        auVar86._16_8_ = dVar64 * auVar50._16_8_ + auVar36._0_8_;
        auVar86._0_16_ = auVar19;
        auVar86._24_8_ = dVar64 * auVar50._24_8_ + auVar36._8_8_;
        auVar36 = vunpcklpd_avx(local_258,local_268);
        auVar38 = vshufpd_avx(auVar86._16_16_,auVar86._16_16_,1);
        auVar47 = vunpcklpd_avx(local_148,local_278);
        auVar73 = vshufpd_avx(auVar19,auVar19,1);
        auVar75._16_16_ = auVar36;
        auVar75._0_16_ = auVar47;
        auVar90 = vunpcklpd_avx(auVar98,auVar20);
        auVar104 = vunpcklpd_avx(auVar105,auVar81);
        auVar24._16_16_ = auVar90;
        auVar24._0_16_ = auVar104;
        auVar50 = vsubpd_avx(auVar24,auVar75);
        auVar102._0_8_ = dVar64 * auVar50._0_8_ + auVar47._0_8_;
        auVar102._8_8_ = dVar64 * auVar50._8_8_ + auVar47._8_8_;
        auVar103._16_8_ = dVar64 * auVar50._16_8_ + auVar36._0_8_;
        auVar103._0_16_ = auVar102;
        auVar103._24_8_ = dVar64 * auVar50._24_8_ + auVar36._8_8_;
        dVar27 = __real_3ff0000000000000 - dVar64;
        auVar50 = vsubpd_avx(ZEXT832(0) << 0x40,auVar57);
        auVar69._0_4_ = ~auVar43._0_4_ & auVar50._0_4_;
        auVar69._4_4_ = ~auVar43._4_4_ & auVar50._4_4_;
        auVar69._8_4_ = ~auVar43._8_4_ & auVar50._8_4_;
        auVar69._12_4_ = ~auVar43._12_4_ & auVar50._12_4_;
        auVar69._16_4_ = ~auVar43._16_4_ & auVar50._16_4_;
        auVar69._20_4_ = ~auVar43._20_4_ & auVar50._20_4_;
        auVar69._24_4_ = ~auVar43._24_4_ & auVar50._24_4_;
        auVar69._28_4_ = ~auVar43._28_4_ & auVar50._28_4_;
        auVar55._0_8_ = (ulonglong)auVar65._0_8_ & auVar43._0_8_;
        auVar55._8_8_ = (ulonglong)auVar65._8_8_ & auVar43._8_8_;
        auVar55._16_8_ = (ulonglong)auVar34._0_8_ & auVar43._16_8_;
        auVar55._24_8_ = (ulonglong)auVar34._8_8_ & auVar43._24_8_;
        auVar55 = auVar55 | auVar69;
        auVar23 = vunpcklpd_avx(local_358,local_368);
        auVar28 = vunpcklpd_avx(local_168._0_16_,local_348);
        auVar18 = vunpcklpd_avx(auVar51,auVar89);
        auVar17 = vunpcklpd_avx(auVar49,local_2c8);
        auVar65._0_8_ = auVar18._0_8_ * auVar23._0_8_ + auVar17._0_8_ * auVar28._0_8_;
        auVar65._8_8_ = auVar18._8_8_ * auVar23._8_8_ + auVar17._8_8_ * auVar28._8_8_;
        auVar36 = vshufpd_avx(auVar65,auVar65,1);
        auVar90._0_8_ = auVar36._0_8_ + auVar65._0_8_;
        auVar47 = vshufpd_avx(auVar103._16_16_,auVar103._16_16_,1);
        auVar66._0_4_ = (float)auVar90._0_8_;
        auVar66._4_4_ = (int)((ulonglong)auVar90._0_8_ >> 0x20);
        auVar66._8_8_ = 0;
        dVar22 = dVar64 * auVar101._0_8_ + dVar27 * auVar55._0_8_;
        dVar25 = dVar64 * auVar101._8_8_ + dVar27 * auVar55._8_8_;
        dVar26 = dVar64 * auVar107._0_8_ + dVar27 * auVar55._16_8_;
        dVar27 = dVar64 * auVar107._8_8_ + dVar27 * auVar55._24_8_;
        auVar82._0_4_ = __real_80000000 ^ (uint)(__real_3f800000 - fVar83);
        auVar82._4_4_ = __real_80000000;
        auVar82._8_4_ = __real_80000000;
        auVar82._12_4_ = __real_80000000;
        auVar36 = vcmpss_avx(ZEXT816(0) << 0x20,auVar66,2);
        auVar36 = vblendvps_avx(auVar82,ZEXT416((uint)(__real_3f800000 - fVar83)),auVar36);
        auVar67._0_8_ = dVar26 * dVar26 + dVar22 * dVar22;
        auVar67._8_8_ = dVar27 * dVar27 + dVar25 * dVar25;
        auVar34 = vshufpd_avx(auVar67,auVar67,1);
        auVar90._0_8_ = auVar34._0_8_ + auVar67._0_8_;
        auVar68._8_8_ = 0;
        auVar68._0_8_ = auVar90._0_8_;
        auVar90._0_8_ = __real_3ff0000000000000 / SQRT(auVar90._0_8_);
        auVar84._8_8_ = 0;
        auVar84._0_8_ = __real_3e45798ee2308c3a;
        auVar34 = vcmpsd_avx(auVar84,auVar68,6);
        auVar107._0_8_ = ~auVar34._0_8_ & __real_ffffffffffffffff;
        auVar106._0_8_ = (ulonglong)(auVar90._0_8_ * dVar22) & auVar107._0_8_;
        auVar106._8_8_ = (ulonglong)(auVar90._0_8_ * dVar25) & auVar107._0_8_;
        auVar108._16_8_ = (ulonglong)(auVar90._0_8_ * dVar26) & auVar107._0_8_;
        auVar108._0_16_ = auVar106;
        auVar108._24_8_ = (ulonglong)(auVar90._0_8_ * dVar27) & auVar107._0_8_;
        auVar109._0_8_ =
             ~auVar107._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar109._8_8_ = ~auVar107._0_8_ & _UNK_150b54548;
        auVar109._16_8_ = ~auVar107._0_8_ & _UNK_150b54550;
        auVar109._24_8_ = ~auVar107._0_8_ & _UNK_150b54558;
        auVar20 = auVar108._16_16_ | auVar109._16_16_;
        auVar65 = vshufpd_avx(auVar102,auVar102,1);
        auVar101 = vshufps_avx(auVar20,auVar20,0x4e);
        auVar104 = vshufps_avx(auVar106,auVar106,0x4e);
        auVar90._0_8_ = (double)auVar36._0_4_;
        dVar27 = dVar64 * auVar17._0_8_ + auVar28._0_8_ * auVar90._0_8_;
        dVar22 = dVar64 * auVar17._8_8_ + auVar28._8_8_ * auVar90._0_8_;
        dVar25 = dVar64 * auVar18._0_8_ + auVar23._0_8_ * auVar90._0_8_;
        dVar26 = dVar64 * auVar18._8_8_ + auVar23._8_8_ * auVar90._0_8_;
        auVar36 = vunpcklpd_avx(local_2d8,local_318);
        auVar41._16_16_ = local_2f8;
        auVar41._0_16_ = auVar36;
        auVar36 = vunpcklpd_avx(local_238,local_308);
        auVar56._16_16_ = local_2e8;
        auVar56._0_16_ = auVar36;
        auVar43 = vsubpd_avx(auVar41,auVar56);
        local_238._0_8_ = dVar64 * auVar43._0_8_ + auVar36._0_8_;
        local_238._8_8_ = dVar64 * auVar43._8_8_ + auVar36._8_8_;
        local_398 = dVar64 * auVar43._16_8_ + (double)local_2e8._0_8_;
        auVar34._0_8_ = dVar27 * dVar27 + dVar25 * dVar25;
        auVar34._8_8_ = dVar22 * dVar22 + dVar26 * dVar26;
        auVar36 = vshufpd_avx(auVar34,auVar34,1);
        auVar90._0_8_ = auVar34._0_8_ + auVar36._0_8_;
        auVar37._8_8_ = 0;
        auVar37._0_8_ = __real_3e45798ee2308c3a;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = auVar90._0_8_;
        auVar36 = vcmpsd_avx(auVar37,auVar28,6);
        auVar107._0_8_ = ~auVar36._0_8_ & __real_ffffffffffffffff;
        auVar90._0_8_ = __real_3ff0000000000000 / SQRT(auVar90._0_8_);
        auVar23._0_8_ = (ulonglong)(dVar27 * auVar90._0_8_) & auVar107._0_8_;
        auVar23._8_8_ = (ulonglong)(dVar22 * auVar90._0_8_) & auVar107._0_8_;
        local_218._16_8_ = (ulonglong)(dVar25 * auVar90._0_8_) & auVar107._0_8_;
        local_218._0_16_ = auVar23;
        local_218._24_8_ = (ulonglong)(dVar26 * auVar90._0_8_) & auVar107._0_8_;
        auVar33._0_8_ =
             ~auVar107._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar33._8_8_ = ~auVar107._0_8_ & _UNK_150b54548;
        auVar33._16_8_ = ~auVar107._0_8_ & _UNK_150b54550;
        auVar33._24_8_ = ~auVar107._0_8_ & _UNK_150b54558;
        auVar34 = local_218._16_16_ | auVar33._16_16_;
        local_3b8 = vshufps_avx(auVar23,auVar23,0x4e);
        auVar36 = vshufps_avx(auVar34,auVar34,0x4e);
        local_3a8 = vshufpd_avx(local_238,local_238,1);
        auVar90._0_8_ = auVar19._0_8_;
        auVar107._0_8_ = auVar106._0_8_;
        local_288 = auVar20._0_8_;
        local_2a8 = auVar104._0_8_;
        local_2b8 = auVar101._0_8_;
        local_298._0_8_ = auVar38._0_8_;
        local_148._0_8_ = auVar102._0_8_;
        local_278._0_8_ = auVar65._0_8_;
        local_258._0_8_ = auVar103._16_8_;
        local_268._0_8_ = auVar47._0_8_;
        local_388._0_8_ = auVar86._16_8_;
        local_378._0_8_ = auVar73._0_8_;
      }
      *(undefined8 *)(param_4 + lVar14 * 8) = local_168._0_8_;
      *(undefined8 *)(param_4 + 8 + lVar14 * 8) = local_348._0_8_;
      *(undefined8 *)(param_4 + 0x10 + lVar14 * 8) = local_358._0_8_;
      *(undefined8 *)(param_4 + 0x18 + lVar14 * 8) = local_368._0_8_;
      local_108 = auVar49._0_8_;
      *(undefined8 *)(param_6 + lVar14 * 8) = local_108;
      *(undefined8 *)(param_6 + 8 + lVar14 * 8) = local_2c8._0_8_;
      local_338 = auVar51._0_8_;
      *(undefined8 *)(param_6 + 0x10 + lVar14 * 8) = local_338;
      *(longlong *)(param_6 + 0x18 + lVar14 * 8) = auVar89._0_8_;
      *(undefined8 *)(param_5 + lVar15) = uVar63;
      *(undefined8 *)(param_5 + 8 + lVar15) = local_308._0_8_;
      *(undefined8 *)(param_5 + 0x10 + lVar15) = local_2e8._0_8_;
      *(undefined8 *)(param_7 + lVar15) = local_2d8._0_8_;
      *(undefined8 *)(param_7 + 8 + lVar15) = local_318._0_8_;
      *(undefined8 *)(param_7 + 0x10 + lVar15) = local_2f8._0_8_;
      if (iVar9 != -1) {
        pdVar1 = (double *)(param_8 + lVar16 * 0x20);
        auVar21._0_8_ =
             ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar1;
        auVar21._8_8_ = _UNK_150b543c8 * pdVar1[1];
        auVar21._16_8_ = _UNK_150b543d0 * pdVar1[2];
        auVar21._24_8_ = _UNK_150b543d8 * pdVar1[3];
        auVar43 = vpermpd_avx2(auVar21,0xff);
        auVar38 = vunpcklpd_avx(local_218._0_16_,local_3b8);
        auVar73 = vunpcklpd_avx(auVar34,auVar36);
        auVar47 = vunpcklpd_avx(auVar36,auVar34);
        auVar65 = vunpcklpd_avx(local_3b8,local_218._0_16_);
        auVar50 = vpermpd_avx2(auVar21,0x55);
        auVar86 = vpermpd_avx2(auVar21,0xaa);
        dVar27 = auVar65._0_8_ * auVar86._0_8_ *
                 ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                 auVar73._0_8_ * auVar50._0_8_ *
                 ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                 auVar43._0_8_ * auVar38._0_8_ +
                 auVar47._0_8_ * auVar21._0_8_ *
                 ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        dVar22 = auVar65._8_8_ * auVar86._8_8_ * _UNK_150b54428 +
                 auVar73._8_8_ * auVar50._8_8_ * _UNK_150b54408 +
                 auVar43._8_8_ * auVar38._8_8_ + auVar47._8_8_ * auVar21._0_8_ * _UNK_150b543e8;
        dVar25 = auVar47._0_8_ * auVar86._16_8_ * _UNK_150b54430 +
                 auVar38._0_8_ * auVar50._16_8_ * _UNK_150b54410 +
                 auVar43._16_8_ * auVar73._0_8_ + auVar65._0_8_ * auVar21._0_8_ * _UNK_150b543f0;
        dVar26 = auVar47._8_8_ * auVar86._24_8_ * _UNK_150b54438 +
                 auVar38._8_8_ * auVar50._24_8_ * _UNK_150b54418 +
                 auVar43._24_8_ * auVar73._8_8_ + auVar65._8_8_ * auVar21._0_8_ * _UNK_150b543f8;
        auVar90._0_8_ = *(double *)(param_9 + 0x10 + lVar16 * 0x18);
        auVar38 = *(undefined1 (*) [16])(param_9 + lVar16 * 0x18);
        auVar58._16_8_ = auVar90._0_8_;
        auVar58._0_16_ = auVar38;
        auVar58._24_8_ = 0;
        dVar64 = auVar38._0_8_;
        auVar70._0_8_ = (ulonglong)dVar64 & __real_7fffffffffffffff;
        dVar62 = auVar38._8_8_;
        auVar70._8_8_ = (ulonglong)dVar62 & __real_7fffffffffffffff;
        auVar70._16_8_ = (ulonglong)auVar90._0_8_ & __real_7fffffffffffffff;
        auVar70._24_8_ = 0;
        auVar99._8_8_ = __real_3e45798ee2308c3a;
        auVar99._0_8_ = __real_3e45798ee2308c3a;
        auVar99._16_8_ = __real_3e45798ee2308c3a;
        auVar99._24_8_ = __real_3e45798ee2308c3a;
        auVar43 = vcmppd_avx(auVar70,auVar99,2);
        auVar50 = vpcmpeqd_avx2(local_218,local_218);
        auVar43 = vpackssdw_avx2(auVar43,auVar50);
        auVar24 = vpermq_avx2(auVar43,0xd8);
        auVar109 = ZEXT832(0) << 0x40;
        auVar85._8_8_ = __real_46c8a6e32246c99c;
        auVar85._0_8_ = __real_46c8a6e32246c99c;
        auVar85._16_8_ = __real_46c8a6e32246c99c;
        auVar85._24_8_ = __real_46c8a6e32246c99c;
        auVar43 = vcmppd_avx(auVar58,auVar85,2);
        auVar50 = vpackssdw_avx2(auVar43,auVar50);
        auVar91._8_8_ = __real_3914c4e977ba1f5c;
        auVar91._0_8_ = __real_3914c4e977ba1f5c;
        auVar91._16_8_ = __real_3914c4e977ba1f5c;
        auVar91._24_8_ = __real_3914c4e977ba1f5c;
        auVar43 = vcmppd_avx(auVar91,auVar58,2);
        auVar43 = vpackssdw_avx2(auVar43,ZEXT832(0) << 0x40);
        auVar86 = vpand_avx2(auVar50,auVar43);
        auVar86 = vpermq_avx2(auVar86,0xd8);
        auVar86 = vpandn_avx2(auVar24,auVar86);
        iVar10 = vmovmskps_avx(auVar86);
        auVar38 = ZEXT816(0);
        if (iVar10 == 0) {
LAB_140ab0356:
          dVar76 = auVar38._8_8_;
          auVar71._0_8_ = (ulonglong)dVar64 & __real_7fe0000000000000;
          auVar71._8_8_ = (ulonglong)dVar62 & __real_7fe0000000000000;
          auVar71._16_8_ = (ulonglong)auVar90._0_8_ & __real_7fe0000000000000;
          auVar71._24_8_ = 0;
          auVar94._8_8_ = __real_7fcfffffffffffff;
          auVar94._0_8_ = __real_7fcfffffffffffff;
          auVar94._16_8_ = __real_7fcfffffffffffff;
          auVar94._24_8_ = __real_7fcfffffffffffff;
          auVar86 = vpsubq_avx2(auVar94,auVar71);
          auVar29 = vpsubq_avx2(auVar94,ZEXT832((ulonglong)dVar76 & __real_7fe0000000000000) << 0x40
                               );
          auVar95._0_8_ = dVar64 * auVar86._0_8_;
          auVar95._8_8_ = dVar62 * auVar86._8_8_;
          auVar95._16_8_ = auVar90._0_8_ * auVar86._16_8_;
          auVar95._24_8_ = auVar86._24_8_ * 0.0;
          auVar73 = vcvtpd2ps_avx(auVar95);
          auVar100._0_8_ = auVar29._0_8_ * 0.0;
          auVar100._8_8_ = dVar76 * auVar29._8_8_;
          auVar100._16_8_ = auVar29._16_8_ * 0.0;
          auVar100._24_8_ = auVar29._24_8_ * 0.0;
          auVar47 = vcvtpd2ps_avx(auVar100);
          auVar96._16_16_ = auVar47;
          auVar96._0_16_ = auVar73;
          auVar43 = vrcpps_avx(auVar96);
          auVar51._0_4_ = auVar43._0_4_ * (-(auVar43._0_4_ * auVar73._0_4_) + __real_40000000);
          auVar51._4_4_ = auVar43._4_4_ * (-(auVar43._4_4_ * auVar73._4_4_) + __real_40000000);
          auVar51._8_4_ = auVar43._8_4_ * (-(auVar43._8_4_ * auVar73._8_4_) + __real_40000000);
          auVar51._12_4_ = auVar43._12_4_ * (-(auVar43._12_4_ * auVar73._12_4_) + __real_40000000);
          auVar97._16_4_ = auVar43._16_4_ * (-(auVar43._16_4_ * auVar47._0_4_) + __real_40000000);
          auVar97._0_16_ = auVar51;
          auVar97._20_4_ = auVar43._20_4_ * (-(auVar43._20_4_ * auVar47._4_4_) + __real_40000000);
          auVar97._24_4_ = auVar43._24_4_ * (-(auVar43._24_4_ * auVar47._8_4_) + __real_40000000);
          auVar97._28_4_ = auVar43._28_4_ * (-(auVar43._28_4_ * auVar47._12_4_) + __real_40000000);
          auVar43 = vcvtps2pd_avx(auVar51);
          auVar50 = vcvtps2pd_avx(auVar97._16_16_);
          dVar78 = auVar29._0_8_ * auVar50._0_8_;
          dVar79 = auVar29._8_8_ * auVar50._8_8_;
          dVar80 = auVar29._16_8_ * auVar50._16_8_;
          dVar88 = auVar29._24_8_ * auVar50._24_8_;
          dVar35 = auVar43._0_8_ * auVar86._0_8_;
          dVar45 = auVar43._8_8_ * auVar86._8_8_;
          dVar46 = auVar43._16_8_ * auVar86._16_8_;
          dVar48 = auVar43._24_8_ * auVar86._24_8_;
          dVar78 = dVar78 * (-(dVar78 * 0.0) + __real_4000000000000000);
          dVar79 = dVar79 * (-(dVar76 * dVar79) + __real_4000000000000000);
          dVar80 = dVar80 * (-(dVar80 * 0.0) + __real_4000000000000000);
          dVar88 = dVar88 * (-(dVar88 * 0.0) + __real_4000000000000000);
          dVar35 = (-(dVar64 * dVar35) + __real_4000000000000000) * dVar35;
          dVar45 = (-(dVar62 * dVar45) + __real_4000000000000000) * dVar45;
          dVar46 = (-(auVar90._0_8_ * dVar46) + __real_4000000000000000) * dVar46;
          dVar48 = (-(dVar48 * 0.0) + __real_4000000000000000) * dVar48;
          auVar59._0_8_ = dVar35 * (-(dVar35 * dVar64) + __real_4000000000000000);
          auVar59._8_8_ = dVar45 * (-(dVar45 * dVar62) + __real_4000000000000000);
          auVar59._16_8_ = dVar46 * (-(dVar46 * auVar90._0_8_) + __real_4000000000000000);
          auVar59._24_8_ = dVar48 * (-(dVar48 * 0.0) + __real_4000000000000000);
          auVar43 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                ,auVar109 ^
                                 ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                               );
          local_1a8 = vblendvps_avx(local_1a8,auVar59,auVar43);
          auVar60._0_8_ = dVar78 * (-(dVar78 * 0.0) + __real_4000000000000000);
          auVar60._8_8_ = dVar79 * (-(dVar76 * dVar79) + __real_4000000000000000);
          auVar60._16_8_ = dVar80 * (-(dVar80 * 0.0) + __real_4000000000000000);
          auVar60._24_8_ = dVar88 * (-(dVar88 * 0.0) + __real_4000000000000000);
          auVar43 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                ,auVar109 ^
                                 ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                               );
          local_128 = vblendvps_avx(local_128,auVar60,auVar43);
        }
        else {
          auVar86 = vcmppd_avx(auVar70,auVar99,6);
          auVar86 = vpackssdw_avx2(auVar86,ZEXT832(0) << 0x40);
          auVar73 = vpackssdw_avx(auVar86._0_16_,auVar86._16_16_);
          auVar65 = vpshufd_avx(auVar73,0xd8);
          auVar73 = vpackssdw_avx(auVar50._0_16_,auVar50._16_16_);
          auVar47 = vpackssdw_avx(auVar43._0_16_,auVar43._16_16_);
          auVar73 = vpand_avx(auVar47,auVar73);
          auVar47 = vpshufd_avx(auVar73,0xd8);
          auVar43 = vpmovzxwd_avx2(auVar47);
          auVar86 = vpslld_avx2(auVar43,0x1f);
          auVar73 = vcvtpd2ps_avx(auVar58);
          auVar38 = vcvtpd2ps_avx(ZEXT1632(auVar38));
          auVar92._16_16_ = auVar38;
          auVar92._0_16_ = auVar73;
          auVar43 = vrcpps_avx(auVar92);
          auVar89._0_4_ = auVar43._0_4_ * (-(auVar43._0_4_ * auVar73._0_4_) + __real_40000000);
          auVar89._4_4_ = auVar43._4_4_ * (-(auVar43._4_4_ * auVar73._4_4_) + __real_40000000);
          auVar89._8_4_ = auVar43._8_4_ * (-(auVar43._8_4_ * auVar73._8_4_) + __real_40000000);
          auVar89._12_4_ = auVar43._12_4_ * (-(auVar43._12_4_ * auVar73._12_4_) + __real_40000000);
          auVar93._16_4_ = auVar43._16_4_ * (-(auVar43._16_4_ * auVar38._0_4_) + __real_40000000);
          auVar93._0_16_ = auVar89;
          auVar93._20_4_ = auVar43._20_4_ * (-(auVar43._20_4_ * auVar38._4_4_) + __real_40000000);
          auVar93._24_4_ = auVar43._24_4_ * (-(auVar43._24_4_ * auVar38._8_4_) + __real_40000000);
          auVar93._28_4_ = auVar43._28_4_ * (-(auVar43._28_4_ * auVar38._12_4_) + __real_40000000);
          auVar43 = vcvtps2pd_avx(auVar93._16_16_);
          auVar50 = vcvtps2pd_avx(auVar89);
          auVar109 = vpsrad_avx2(auVar86,0x1f);
          dVar35 = (-(auVar43._0_8_ * 0.0) + __real_4000000000000000) * auVar43._0_8_;
          dVar45 = (-(auVar43._8_8_ * 0.0) + __real_4000000000000000) * auVar43._8_8_;
          dVar46 = (-(auVar43._16_8_ * 0.0) + __real_4000000000000000) * auVar43._16_8_;
          dVar48 = (-(auVar43._24_8_ * 0.0) + __real_4000000000000000) * auVar43._24_8_;
          dVar76 = (-(dVar64 * auVar50._0_8_) + __real_4000000000000000) * auVar50._0_8_;
          dVar78 = (-(dVar62 * auVar50._8_8_) + __real_4000000000000000) * auVar50._8_8_;
          dVar79 = (-(auVar90._0_8_ * auVar50._16_8_) + __real_4000000000000000) * auVar50._16_8_;
          dVar80 = (-(auVar50._24_8_ * 0.0) + __real_4000000000000000) * auVar50._24_8_;
          auVar77._0_8_ = dVar76 * (-(dVar64 * dVar76) + __real_4000000000000000);
          auVar77._8_8_ = dVar78 * (-(dVar62 * dVar78) + __real_4000000000000000);
          auVar77._16_8_ = dVar79 * (-(auVar90._0_8_ * dVar79) + __real_4000000000000000);
          auVar77._24_8_ = dVar80 * (-(dVar80 * 0.0) + __real_4000000000000000);
          auVar43 = vpmovsxdq_avx2(auVar86._0_16_);
          local_1a8 = vblendvps_avx(local_1a8,auVar77,auVar43);
          auVar42._0_8_ = (-(dVar35 * 0.0) + __real_4000000000000000) * dVar35;
          auVar42._8_8_ = (-(dVar45 * 0.0) + __real_4000000000000000) * dVar45;
          auVar42._16_8_ = (-(dVar46 * 0.0) + __real_4000000000000000) * dVar46;
          auVar42._24_8_ = (-(dVar48 * 0.0) + __real_4000000000000000) * dVar48;
          auVar43 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                ,auVar109);
          local_128 = vblendvps_avx(local_128,auVar42,auVar43);
          auVar38 = vpsllw_avx(auVar65,0xf);
          auVar38 = vpacksswb_avx(auVar38,auVar38);
          if ((byte)(SUB161(auVar38 >> 7,0) & 1 | (SUB161(auVar38 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar38 >> 0x17,0) & 1) << 2 | (SUB161(auVar38 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar38 >> 0x27,0) & 1) << 4 | (SUB161(auVar38 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar38 >> 0x37,0) & 1) << 6 | SUB161(auVar38 >> 0x3f,0) << 7) !=
              (byte)iVar10) {
            auVar38 = vpand_avx(auVar47,auVar65);
            auVar43 = vpmovzxwd_avx2(auVar38);
            auVar43 = vpslld_avx2(auVar43,0x1f);
            auVar109 = vpsrad_avx2(auVar43,0x1f);
            auVar38 = ZEXT816(0) << 0x20;
            goto LAB_140ab0356;
          }
          auVar38 = ZEXT816(0) << 0x20;
        }
        auVar39._0_8_ = dVar27 * dVar27 + dVar25 * dVar25;
        auVar39._8_8_ = dVar22 * dVar22 + dVar26 * dVar26;
        auVar73 = vshufpd_avx(auVar39,auVar39,1);
        auVar90._0_8_ = auVar39._0_8_ + auVar73._0_8_;
        auVar54._8_8_ = 0;
        auVar54._0_8_ = __real_3e45798ee2308c3a;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = auVar90._0_8_;
        auVar73 = vcmpsd_avx(auVar54,auVar40,6);
        uVar52 = ~auVar73._0_8_ & __real_ffffffffffffffff;
        auVar90._0_8_ = __real_3ff0000000000000 / SQRT(auVar90._0_8_);
        auVar107._0_8_ = (ulonglong)(dVar27 * auVar90._0_8_) & uVar52;
        auVar107._8_8_ = (ulonglong)(dVar22 * auVar90._0_8_) & uVar52;
        auVar110._16_8_ = (ulonglong)(dVar25 * auVar90._0_8_) & uVar52;
        auVar110._0_16_ = auVar107;
        auVar110._24_8_ = (ulonglong)(dVar26 * auVar90._0_8_) & uVar52;
        auVar44._0_8_ =
             ~uVar52 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar44._8_8_ = ~uVar52 & _UNK_150b54548;
        auVar44._16_8_ = ~uVar52 & _UNK_150b54550;
        auVar44._24_8_ = ~uVar52 & _UNK_150b54558;
        auVar47 = auVar110._16_16_ | auVar44._16_16_;
        auVar73 = vshufps_avx(auVar107,auVar107,0x4e);
        local_2a8 = auVar73._0_8_;
        local_288 = auVar47._0_8_;
        auVar73 = vshufps_avx(auVar47,auVar47,0x4e);
        local_2b8 = auVar73._0_8_;
        auVar43 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                              ,auVar24);
        auVar43 = vblendvps_avx(local_1a8,ZEXT1632(auVar38),auVar43);
        auVar38 = vunpcklpd_avx(local_238,local_3a8);
        auVar90._0_8_ = auVar38._0_8_ * auVar43._0_8_;
        auVar90._8_8_ = auVar38._8_8_ * auVar43._8_8_;
        local_388._0_8_ = local_398 * auVar43._16_8_;
        auVar38 = vshufpd_avx(auVar90,auVar90,1);
        local_378._0_8_ = auVar38._0_8_;
        local_298._0_8_ = 0;
      }
      *(undefined8 *)(param_8 + lVar14 * 8) = local_218._0_8_;
      *(undefined8 *)(param_8 + 8 + lVar14 * 8) = local_3b8._0_8_;
      *(longlong *)(param_8 + 0x10 + lVar14 * 8) = auVar34._0_8_;
      *(longlong *)(param_8 + 0x18 + lVar14 * 8) = auVar36._0_8_;
      *(undefined8 *)(param_9 + lVar15) = local_238._0_8_;
      *(undefined8 *)(param_9 + 8 + lVar15) = local_3a8._0_8_;
      *(double *)(param_9 + 0x10 + lVar15) = local_398;
      *(ulonglong *)(param_1 + lVar15 * 4) = auVar107._0_8_;
      *(ulonglong *)(param_1 + 8 + lVar15 * 4) = local_2a8;
      *(ulonglong *)(param_1 + 0x10 + lVar15 * 4) = local_288;
      *(ulonglong *)(param_1 + 0x18 + lVar15 * 4) = local_2b8;
      *(undefined8 *)(param_1 + 0x20 + lVar15 * 4) = local_148._0_8_;
      *(undefined8 *)(param_1 + 0x28 + lVar15 * 4) = local_278._0_8_;
      *(undefined8 *)(param_1 + 0x30 + lVar15 * 4) = local_258._0_8_;
      *(undefined8 *)(param_1 + 0x38 + lVar15 * 4) = local_268._0_8_;
      *(double *)(param_1 + 0x40 + lVar15 * 4) = auVar90._0_8_;
      *(undefined8 *)(param_1 + 0x48 + lVar15 * 4) = local_378._0_8_;
      *(undefined8 *)(param_1 + 0x50 + lVar15 * 4) = local_388._0_8_;
      *(undefined8 *)(param_1 + 0x58 + lVar15 * 4) = local_298._0_8_;
      iVar13 = iVar13 + 1;
      lVar15 = lVar15 + 0x18;
      lVar14 = lVar14 + 4;
    } while ((ulonglong)param_13 * 0x18 != lVar15);
  }
  return;
}

// BlendPosesPerBoneFilterRotation_avx2 @ 140ab0580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterRotation_avx2
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10)

{
  double *pdVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar26;
  undefined1 auVar22 [32];
  double dVar25;
  double dVar28;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar27 [16];
  double dVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [64];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [64];
  float fVar65;
  undefined1 auVar66 [16];
  undefined8 uVar67;
  undefined1 auVar68 [32];
  undefined1 auVar69 [64];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  ulonglong uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  ulonglong local_1c8;
  undefined1 local_1a8 [16];
  ulonglong local_178;
  ulonglong local_168;
  undefined1 local_158 [16];
  undefined1 local_138 [16];
  undefined1 local_118 [16];
  undefined8 local_f8;
  undefined1 auVar43 [32];
  undefined1 auVar52 [32];
  undefined1 auVar72 [32];
  
  if (0 < (int)param_10) {
    lVar9 = 0;
    lVar11 = 0x2c;
    iVar8 = 0;
    do {
      iVar4 = *(int *)(param_8 + lVar9 * 2);
      iVar5 = *(int *)(param_9 + lVar9);
      lVar10 = (longlong)iVar5;
      local_1a8._0_8_ = *(ulonglong *)(param_2 + -0x58 + lVar11 * 2);
      local_1a8._8_8_ = 0;
      local_118._0_8_ = *(double *)(param_2 + -0x38 + lVar11 * 2);
      local_118._8_8_ = 0;
      local_208._0_8_ = *(ulonglong *)(param_2 + -0x30 + lVar11 * 2);
      local_208._8_8_ = 0;
      local_1d8._0_8_ = *(double *)(param_2 + -0x28 + lVar11 * 2);
      local_1d8._8_8_ = 0;
      local_1f8._0_8_ = *(ulonglong *)(param_2 + -0x20 + lVar11 * 2);
      local_1f8._8_8_ = 0;
      local_138._0_8_ = *(double *)(param_2 + -0x18 + lVar11 * 2);
      local_138._8_8_ = 0;
      local_1e8._0_8_ = *(ulonglong *)(param_2 + -0x10 + lVar11 * 2);
      local_1e8._8_8_ = 0;
      local_218._0_8_ = *(double *)(param_2 + -8 + lVar11 * 2);
      local_218._8_8_ = 0;
      local_228._0_8_ = *(ulonglong *)(param_2 + lVar11 * 2);
      local_228._8_8_ = 0;
      auVar61 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar11 * 2));
      auVar64 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar11 * 2));
      auVar69 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar11 * 2));
      puVar6 = (ulonglong *)GetTransformFromArray(param_3,iVar4,iVar8);
      auVar57._0_8_ = *puVar6;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = auVar57._0_8_;
      local_168 = puVar6[1];
      auVar45._8_8_ = 0;
      auVar45._0_8_ = local_168;
      local_1c8 = puVar6[2];
      auVar50._8_8_ = 0;
      auVar50._0_8_ = local_1c8;
      local_178 = puVar6[3];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_178;
      auVar53 = auVar61._0_16_;
      auVar55 = auVar64._0_16_;
      auVar54 = auVar69._0_16_;
      if (lVar10 == -1) {
        auVar32 = vunpcklpd_avx(local_1a8,auVar53);
        auVar33 = vunpcklpd_avx(auVar54,auVar55);
        auVar58 = vunpcklpd_avx(auVar55,auVar54);
        auVar56 = vunpcklpd_avx(auVar53,local_1a8);
        local_158._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar56._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar33._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar58._0_8_ * 0.0 + auVar32._0_8_;
        local_158._8_8_ =
             _UNK_150b54428 * auVar56._8_8_ * 0.0 +
             _UNK_150b54408 * auVar33._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar58._8_8_ * 0.0 + auVar32._8_8_;
        auVar14._16_8_ =
             _UNK_150b54430 * auVar58._0_8_ * 0.0 +
             _UNK_150b54410 * auVar32._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar56._0_8_ * 0.0 + auVar33._0_8_;
        auVar14._0_16_ = local_158;
        auVar14._24_8_ =
             _UNK_150b54438 * auVar58._8_8_ * 0.0 +
             _UNK_150b54418 * auVar32._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar56._8_8_ * 0.0 + auVar33._8_8_;
        auVar32 = vunpcklpd_avx(auVar75,auVar45);
        auVar33 = vunpcklpd_avx(auVar50,auVar17);
        auVar58 = vunpcklpd_avx(auVar17,auVar50);
        auVar56 = vunpcklpd_avx(auVar45,auVar75);
        local_258 = vshufpd_avx(local_158,local_158,1);
        local_268 = auVar14._16_16_;
        local_278 = vshufpd_avx(local_268,local_268,1);
        auVar40._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar56._0_8_ * 0.0 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar33._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar58._0_8_ * 0.0 + auVar32._0_8_;
        auVar40._8_8_ =
             _UNK_150b54428 * auVar56._8_8_ * 0.0 +
             _UNK_150b54408 * auVar33._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar58._8_8_ * 0.0 + auVar32._8_8_;
        auVar40._16_8_ =
             _UNK_150b54430 * auVar58._0_8_ * 0.0 +
             _UNK_150b54410 * auVar32._0_8_ * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar56._0_8_ * 0.0 + auVar33._0_8_;
        auVar40._24_8_ =
             _UNK_150b54438 * auVar58._8_8_ * 0.0 +
             _UNK_150b54418 * auVar32._8_8_ * 0.0 +
             _UNK_15076c6f8 * auVar56._8_8_ * 0.0 + auVar33._8_8_;
      }
      else {
        lVar7 = lVar10 * 0x20;
        dVar62 = *(double *)(param_4 + 0x18 + lVar7);
        auVar32 = vunpcklpd_avx(local_1a8,auVar53);
        auVar33 = vunpcklpd_avx(auVar54,auVar55);
        dVar28 = *(double *)(param_4 + lVar7);
        auVar58 = vunpcklpd_avx(auVar55,auVar54);
        auVar56 = vunpcklpd_avx(auVar53,local_1a8);
        dVar18 = *(double *)(param_4 + 8 + lVar7);
        dVar25 = *(double *)(param_4 + 0x10 + lVar7);
        local_158._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar56._0_8_ * dVar25 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar33._0_8_ * dVar18 +
             dVar62 * auVar32._0_8_ +
             auVar58._0_8_ * dVar28 * ___xmm_bff00000000000003ff0000000000000;
        local_158._8_8_ =
             _UNK_150b54428 * auVar56._8_8_ * dVar25 +
             _UNK_150b54408 * auVar33._8_8_ * dVar18 +
             dVar62 * auVar32._8_8_ + auVar58._8_8_ * dVar28 * _UNK_15076c6f8;
        auVar13._16_8_ =
             _UNK_150b54430 * auVar58._0_8_ * dVar25 +
             _UNK_150b54410 * auVar32._0_8_ * dVar18 +
             dVar62 * auVar33._0_8_ +
             auVar56._0_8_ * dVar28 * ___xmm_bff00000000000003ff0000000000000;
        auVar13._0_16_ = local_158;
        auVar13._24_8_ =
             _UNK_150b54438 * auVar58._8_8_ * dVar25 +
             _UNK_150b54418 * auVar32._8_8_ * dVar18 +
             dVar62 * auVar33._8_8_ + auVar56._8_8_ * dVar28 * _UNK_15076c6f8;
        dVar62 = *(double *)(param_5 + 0x18 + lVar7);
        auVar32 = vunpcklpd_avx(auVar75,auVar45);
        dVar28 = *(double *)(param_5 + lVar7);
        auVar33 = vunpcklpd_avx(auVar17,auVar50);
        auVar58 = vunpcklpd_avx(auVar45,auVar75);
        auVar56 = vunpcklpd_avx(auVar50,auVar17);
        local_258 = vshufpd_avx(local_158,local_158,1);
        local_268 = auVar13._16_16_;
        dVar18 = *(double *)(param_5 + 8 + lVar7);
        local_278 = vshufpd_avx(local_268,local_268,1);
        dVar25 = *(double *)(param_5 + 0x10 + lVar7);
        auVar40._0_8_ =
             ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar58._0_8_ * dVar25 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar56._0_8_ * dVar18 +
             dVar62 * auVar32._0_8_ +
             auVar33._0_8_ * dVar28 * ___xmm_bff00000000000003ff0000000000000;
        auVar40._8_8_ =
             _UNK_150b54428 * auVar58._8_8_ * dVar25 +
             _UNK_150b54408 * auVar56._8_8_ * dVar18 +
             dVar62 * auVar32._8_8_ + auVar33._8_8_ * dVar28 * _UNK_15076c6f8;
        auVar40._16_8_ =
             _UNK_150b54430 * auVar33._0_8_ * dVar25 +
             _UNK_150b54410 * auVar32._0_8_ * dVar18 +
             dVar62 * auVar56._0_8_ +
             auVar58._0_8_ * dVar28 * ___xmm_bff00000000000003ff0000000000000;
        auVar40._24_8_ =
             _UNK_150b54438 * auVar33._8_8_ * dVar25 +
             _UNK_150b54418 * auVar32._8_8_ * dVar18 +
             dVar62 * auVar56._8_8_ + auVar58._8_8_ * dVar28 * _UNK_15076c6f8;
      }
      auVar39 = auVar40._0_16_;
      auVar58 = vshufpd_avx(auVar39,auVar39,1);
      auVar27 = auVar40._16_16_;
      auVar56 = vshufpd_avx(auVar27,auVar27,1);
      dVar62 = (double)puVar6[4];
      auVar41._8_8_ = 0;
      auVar41._0_8_ = dVar62;
      uVar30 = puVar6[5];
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar30;
      dVar28 = (double)puVar6[6];
      auVar76._8_8_ = 0;
      auVar76._0_8_ = dVar28;
      uVar2 = puVar6[7];
      auVar38._8_8_ = 0;
      auVar38._0_8_ = uVar2;
      dVar18 = (double)puVar6[8];
      auVar31._8_8_ = 0;
      auVar31._0_8_ = dVar18;
      uVar3 = puVar6[9];
      auVar63._8_8_ = 0;
      auVar63._0_8_ = uVar3;
      auVar32 = vmaxss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_8 + 4 + lVar9 * 2)));
      dVar25 = (double)puVar6[10];
      auVar70._8_8_ = 0;
      auVar70._0_8_ = dVar25;
      auVar33 = vminss_avx(auVar32,ZEXT416((uint)__real_3f800000));
      auVar32 = vmaxss_avx(auVar33,ZEXT416(*(uint *)(param_7 + (longlong)iVar4 * 4)));
      uVar73 = puVar6[0xb];
      auVar74._8_8_ = 0;
      auVar74._0_8_ = uVar73;
      *(int *)(param_7 + (longlong)iVar4 * 4) = auVar32._0_4_;
      fVar65 = auVar33._0_4_;
      uVar67 = auVar56._0_8_;
      uVar12 = auVar58._0_8_;
      if (fVar65 <= __real_3727c5ac) {
        local_1c8 = auVar69._0_8_;
        local_168 = auVar61._0_8_;
        local_178 = auVar64._0_8_;
        auVar57._0_8_ = local_1a8._0_8_;
        auVar58 = local_258;
        dVar25 = (double)local_218._0_8_;
        auVar39 = local_158;
        auVar56 = local_278;
        auVar27 = local_268;
        uVar73 = local_228._0_8_;
        dVar62 = (double)local_118._0_8_;
        uVar30 = local_208._0_8_;
        dVar28 = (double)local_1d8._0_8_;
        uVar2 = local_1f8._0_8_;
        dVar18 = (double)local_138._0_8_;
        uVar3 = local_1e8._0_8_;
      }
      else if (fVar65 < __real_3f7fff58) {
        auVar57 = vunpcklpd_avx(auVar54,auVar55);
        auVar53 = vunpcklpd_avx(local_1a8,auVar53);
        auVar68._16_16_ = auVar57;
        auVar68._0_16_ = auVar53;
        auVar55 = vunpcklpd_avx(auVar50,auVar17);
        auVar45 = vunpcklpd_avx(auVar75,auVar45);
        auVar46._0_8_ = auVar53._0_8_ * auVar45._0_8_;
        auVar46._8_8_ = auVar53._8_8_ * auVar45._8_8_;
        auVar46._16_8_ = auVar57._0_8_ * auVar55._0_8_;
        auVar46._24_8_ = auVar57._8_8_ * auVar55._8_8_;
        auVar14 = vpermpd_avx2(auVar46,0x4e);
        auVar47._0_8_ = auVar14._0_8_ + auVar46._0_8_;
        auVar47._8_8_ = auVar14._8_8_ + auVar46._8_8_;
        auVar47._16_8_ = auVar14._16_8_ + auVar46._16_8_;
        auVar47._24_8_ = auVar14._24_8_ + auVar46._24_8_;
        auVar14 = vpermpd_avx2(auVar47,0x39);
        auVar48._0_8_ = auVar14._0_8_ + auVar47._0_8_;
        auVar48._8_8_ = auVar14._8_8_ + auVar47._8_8_;
        auVar48._16_8_ = auVar14._16_8_ + auVar47._16_8_;
        auVar48._24_8_ = auVar14._24_8_ + auVar47._24_8_;
        auVar17 = vunpcklpd_avx(local_218,local_228);
        auVar50 = vunpcklpd_avx(local_138,local_1e8);
        auVar59._16_16_ = auVar17;
        auVar59._0_16_ = auVar50;
        auVar54 = vunpcklpd_avx(auVar70,auVar74);
        auVar14 = vcmppd_avx(ZEXT832(0) << 0x40,auVar48,2);
        auVar14 = vpshufb_avx2(auVar14,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar14 = vblendvps_avx(ZEXT832(0) << 0x40,
                                ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                ,auVar14);
        auVar75 = vunpcklpd_avx(auVar31,auVar63);
        auVar35._16_16_ = auVar54;
        auVar35._0_16_ = auVar75;
        auVar13 = vsubpd_avx(auVar35,auVar59);
        dVar29 = (double)fVar65;
        auVar71._0_8_ = dVar29 * auVar13._0_8_ + auVar50._0_8_;
        auVar71._8_8_ = dVar29 * auVar13._8_8_ + auVar50._8_8_;
        auVar72._16_8_ = dVar29 * auVar13._16_8_ + auVar17._0_8_;
        auVar72._0_16_ = auVar71;
        auVar72._24_8_ = dVar29 * auVar13._24_8_ + auVar17._8_8_;
        auVar54 = vunpcklpd_avx(local_1d8,local_1f8);
        auVar17 = vshufpd_avx(auVar72._16_16_,auVar72._16_16_,1);
        auVar75 = vunpcklpd_avx(local_118,local_208);
        auVar50 = vshufpd_avx(auVar71,auVar71,1);
        auVar60._16_16_ = auVar54;
        auVar60._0_16_ = auVar75;
        auVar32 = vunpcklpd_avx(auVar76,auVar38);
        auVar33 = vunpcklpd_avx(auVar41,auVar19);
        auVar22._16_16_ = auVar32;
        auVar22._0_16_ = auVar33;
        auVar13 = vsubpd_avx(auVar22,auVar60);
        auVar51._0_8_ = dVar29 * auVar13._0_8_ + auVar75._0_8_;
        auVar51._8_8_ = dVar29 * auVar13._8_8_ + auVar75._8_8_;
        auVar52._16_8_ = dVar29 * auVar13._16_8_ + auVar54._0_8_;
        auVar52._0_16_ = auVar51;
        auVar52._24_8_ = dVar29 * auVar13._24_8_ + auVar54._8_8_;
        dVar28 = __real_3ff0000000000000 - dVar29;
        auVar13 = vsubpd_avx(ZEXT832(0) << 0x40,auVar68);
        auVar36._0_4_ = ~auVar14._0_4_ & auVar13._0_4_;
        auVar36._4_4_ = ~auVar14._4_4_ & auVar13._4_4_;
        auVar36._8_4_ = ~auVar14._8_4_ & auVar13._8_4_;
        auVar36._12_4_ = ~auVar14._12_4_ & auVar13._12_4_;
        auVar36._16_4_ = ~auVar14._16_4_ & auVar13._16_4_;
        auVar36._20_4_ = ~auVar14._20_4_ & auVar13._20_4_;
        auVar36._24_4_ = ~auVar14._24_4_ & auVar13._24_4_;
        auVar36._28_4_ = ~auVar14._28_4_ & auVar13._28_4_;
        auVar37._0_8_ = (ulonglong)auVar53._0_8_ & auVar14._0_8_;
        auVar37._8_8_ = (ulonglong)auVar53._8_8_ & auVar14._8_8_;
        auVar37._16_8_ = (ulonglong)auVar57._0_8_ & auVar14._16_8_;
        auVar37._24_8_ = (ulonglong)auVar57._8_8_ & auVar14._24_8_;
        auVar37 = auVar37 | auVar36;
        auVar75 = vunpcklpd_avx(local_268,local_278);
        auVar32 = vunpcklpd_avx(local_158,local_258);
        auVar33 = vunpcklpd_avx(auVar27,auVar56);
        auVar58 = vunpcklpd_avx(auVar39,auVar58);
        auVar53._0_8_ = auVar33._0_8_ * auVar75._0_8_ + auVar58._0_8_ * auVar32._0_8_;
        auVar53._8_8_ = auVar33._8_8_ * auVar75._8_8_ + auVar58._8_8_ * auVar32._8_8_;
        auVar57 = vshufpd_avx(auVar53,auVar53,1);
        dVar62 = auVar53._0_8_ + auVar57._0_8_;
        auVar53 = vshufpd_avx(auVar52._16_16_,auVar52._16_16_,1);
        auVar54._0_4_ = (float)dVar62;
        auVar54._4_4_ = (int)((ulonglong)dVar62 >> 0x20);
        auVar54._8_8_ = 0;
        dVar18 = dVar29 * auVar45._0_8_ + dVar28 * auVar37._0_8_;
        dVar25 = dVar29 * auVar45._8_8_ + dVar28 * auVar37._8_8_;
        dVar26 = dVar29 * auVar55._0_8_ + dVar28 * auVar37._16_8_;
        dVar28 = dVar29 * auVar55._8_8_ + dVar28 * auVar37._24_8_;
        auVar27._0_4_ = __real_80000000 ^ (uint)(__real_3f800000 - fVar65);
        auVar27._4_4_ = __real_80000000;
        auVar27._8_4_ = __real_80000000;
        auVar27._12_4_ = __real_80000000;
        auVar57 = vcmpss_avx(ZEXT816(0) << 0x20,auVar54,2);
        auVar45 = vblendvps_avx(auVar27,ZEXT416((uint)(__real_3f800000 - fVar65)),auVar57);
        auVar55._0_8_ = dVar18 * dVar18 + dVar26 * dVar26;
        auVar55._8_8_ = dVar25 * dVar25 + dVar28 * dVar28;
        auVar57 = vshufpd_avx(auVar55,auVar55,1);
        dVar62 = auVar55._0_8_ + auVar57._0_8_;
        auVar56._8_8_ = 0;
        auVar56._0_8_ = dVar62;
        dVar62 = __real_3ff0000000000000 / SQRT(dVar62);
        auVar66._8_8_ = 0;
        auVar66._0_8_ = __real_3e45798ee2308c3a;
        auVar57 = vcmpsd_avx(auVar66,auVar56,6);
        auVar57._0_8_ = ~auVar57._0_8_ & __real_ffffffffffffffff;
        auVar42._0_8_ = auVar57._0_8_ & (ulonglong)(dVar62 * dVar18);
        auVar42._8_8_ = auVar57._0_8_ & (ulonglong)(dVar62 * dVar25);
        auVar43._16_8_ = auVar57._0_8_ & (ulonglong)(dVar62 * dVar26);
        auVar43._0_16_ = auVar42;
        auVar43._24_8_ = auVar57._0_8_ & (ulonglong)(dVar62 * dVar28);
        auVar23._0_8_ =
             ~auVar57._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar23._8_8_ = ~auVar57._0_8_ & _UNK_150b54548;
        auVar23._16_8_ = ~auVar57._0_8_ & _UNK_150b54550;
        auVar23._24_8_ = ~auVar57._0_8_ & _UNK_150b54558;
        auVar57 = auVar43._16_16_ | auVar23._16_16_;
        local_1c8 = auVar57._0_8_;
        auVar55 = vshufpd_avx(auVar51,auVar51,1);
        auVar54 = vshufps_avx(auVar57,auVar57,0x4e);
        auVar57 = vshufps_avx(auVar42,auVar42,0x4e);
        local_168 = auVar57._0_8_;
        dVar62 = (double)auVar45._0_4_;
        dVar28 = dVar29 * auVar58._0_8_ + auVar32._0_8_ * dVar62;
        dVar18 = dVar29 * auVar58._8_8_ + auVar32._8_8_ * dVar62;
        dVar25 = dVar29 * auVar33._0_8_ + auVar75._0_8_ * dVar62;
        dVar26 = dVar29 * auVar33._8_8_ + auVar75._8_8_ * dVar62;
        local_228._0_8_ = auVar17._0_8_;
        auVar32._0_8_ = dVar28 * dVar28 + dVar25 * dVar25;
        auVar32._8_8_ = dVar18 * dVar18 + dVar26 * dVar26;
        auVar57 = vshufpd_avx(auVar32,auVar32,1);
        dVar62 = auVar32._0_8_ + auVar57._0_8_;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = dVar62;
        auVar57 = vcmpsd_avx(auVar66,auVar33,6);
        local_178 = auVar54._0_8_;
        auVar57._0_8_ = ~auVar57._0_8_ & __real_ffffffffffffffff;
        dVar62 = __real_3ff0000000000000 / SQRT(dVar62);
        auVar39._0_8_ = (ulonglong)(dVar28 * dVar62) & auVar57._0_8_;
        auVar39._8_8_ = (ulonglong)(dVar18 * dVar62) & auVar57._0_8_;
        auVar49._16_8_ = (ulonglong)(dVar25 * dVar62) & auVar57._0_8_;
        auVar49._0_16_ = auVar39;
        auVar49._24_8_ = (ulonglong)(dVar26 * dVar62) & auVar57._0_8_;
        auVar24._0_8_ =
             ~auVar57._0_8_ &
             ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar24._8_8_ = ~auVar57._0_8_ & _UNK_150b54548;
        auVar24._16_8_ = ~auVar57._0_8_ & _UNK_150b54550;
        auVar24._24_8_ = ~auVar57._0_8_ & _UNK_150b54558;
        auVar27 = auVar49._16_16_ | auVar24._16_16_;
        auVar58 = vshufps_avx(auVar39,auVar39,0x4e);
        auVar56 = vshufps_avx(auVar27,auVar27,0x4e);
        auVar57._0_8_ = auVar42._0_8_;
        dVar25 = auVar72._16_8_;
        uVar73 = local_228._0_8_;
        dVar62 = auVar51._0_8_;
        uVar30 = auVar55._0_8_;
        dVar28 = auVar52._16_8_;
        uVar2 = auVar53._0_8_;
        dVar18 = auVar71._0_8_;
        uVar3 = auVar50._0_8_;
      }
      local_1e8._0_8_ = uVar3;
      local_138._0_8_ = dVar18;
      local_1f8._0_8_ = uVar2;
      local_1d8._0_8_ = dVar28;
      local_208._0_8_ = uVar30;
      local_118._0_8_ = dVar62;
      *(undefined8 *)(param_4 + lVar9 * 8) = local_158._0_8_;
      *(undefined8 *)(param_4 + 8 + lVar9 * 8) = local_258._0_8_;
      *(undefined8 *)(param_4 + 0x10 + lVar9 * 8) = local_268._0_8_;
      *(undefined8 *)(param_4 + 0x18 + lVar9 * 8) = local_278._0_8_;
      *(longlong *)(param_5 + lVar9 * 8) = auVar40._0_8_;
      *(undefined8 *)(param_5 + 8 + lVar9 * 8) = uVar12;
      local_f8 = auVar40._16_8_;
      *(undefined8 *)(param_5 + 0x10 + lVar9 * 8) = local_f8;
      *(undefined8 *)(param_5 + 0x18 + lVar9 * 8) = uVar67;
      if (iVar5 != -1) {
        pdVar1 = (double *)(param_6 + lVar10 * 0x20);
        auVar15._0_8_ =
             ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * *pdVar1;
        auVar15._8_8_ = _UNK_150b543c8 * pdVar1[1];
        auVar15._16_8_ = _UNK_150b543d0 * pdVar1[2];
        auVar15._24_8_ = _UNK_150b543d8 * pdVar1[3];
        auVar14 = vpermpd_avx2(auVar15,0xff);
        auVar57 = vunpcklpd_avx(auVar39,auVar58);
        auVar45 = vunpcklpd_avx(auVar27,auVar56);
        auVar17 = vunpcklpd_avx(auVar56,auVar27);
        auVar50 = vunpcklpd_avx(auVar58,auVar39);
        auVar40 = vpermpd_avx2(auVar15,0x55);
        auVar13 = vpermpd_avx2(auVar15,0xaa);
        dVar28 = auVar50._0_8_ * auVar13._0_8_ *
                 ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                 auVar45._0_8_ * auVar40._0_8_ *
                 ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                 auVar14._0_8_ * auVar57._0_8_ +
                 auVar17._0_8_ * auVar15._0_8_ *
                 ___ymm_bff00000000000003ff0000000000000bff00000000000003ff0000000000000;
        dVar18 = auVar50._8_8_ * auVar13._8_8_ * _UNK_150b54428 +
                 auVar45._8_8_ * auVar40._8_8_ * _UNK_150b54408 +
                 auVar14._8_8_ * auVar57._8_8_ + auVar17._8_8_ * auVar15._0_8_ * _UNK_150b543e8;
        dVar26 = auVar17._0_8_ * auVar13._16_8_ * _UNK_150b54430 +
                 auVar57._0_8_ * auVar40._16_8_ * _UNK_150b54410 +
                 auVar14._16_8_ * auVar45._0_8_ + auVar50._0_8_ * auVar15._0_8_ * _UNK_150b543f0;
        dVar29 = auVar17._8_8_ * auVar13._24_8_ * _UNK_150b54438 +
                 auVar57._8_8_ * auVar40._24_8_ * _UNK_150b54418 +
                 auVar14._24_8_ * auVar45._8_8_ + auVar50._8_8_ * auVar15._0_8_ * _UNK_150b543f8;
        auVar20._0_8_ = dVar28 * dVar28 + dVar26 * dVar26;
        auVar20._8_8_ = dVar18 * dVar18 + dVar29 * dVar29;
        auVar57 = vshufpd_avx(auVar20,auVar20,1);
        dVar62 = auVar20._0_8_ + auVar57._0_8_;
        auVar34._8_8_ = 0;
        auVar34._0_8_ = __real_3e45798ee2308c3a;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar62;
        auVar57 = vcmpsd_avx(auVar34,auVar21,6);
        uVar30 = ~auVar57._0_8_ & __real_ffffffffffffffff;
        dVar62 = __real_3ff0000000000000 / SQRT(dVar62);
        auVar57._0_8_ = (ulonglong)(dVar28 * dVar62) & uVar30;
        auVar57._8_8_ = (ulonglong)(dVar18 * dVar62) & uVar30;
        auVar44._16_8_ = (ulonglong)(dVar26 * dVar62) & uVar30;
        auVar44._0_16_ = auVar57;
        auVar44._24_8_ = (ulonglong)(dVar29 * dVar62) & uVar30;
        auVar16._0_8_ =
             ~uVar30 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar16._8_8_ = ~uVar30 & _UNK_150b54548;
        auVar16._16_8_ = ~uVar30 & _UNK_150b54550;
        auVar16._24_8_ = ~uVar30 & _UNK_150b54558;
        auVar17 = auVar44._16_16_ | auVar16._16_16_;
        auVar45 = vshufps_avx(auVar57,auVar57,0x4e);
        local_168 = auVar45._0_8_;
        local_1c8 = auVar17._0_8_;
        auVar45 = vshufps_avx(auVar17,auVar17,0x4e);
        local_178 = auVar45._0_8_;
      }
      *(longlong *)(param_6 + lVar9 * 8) = auVar39._0_8_;
      *(longlong *)(param_6 + 8 + lVar9 * 8) = auVar58._0_8_;
      *(longlong *)(param_6 + 0x10 + lVar9 * 8) = auVar27._0_8_;
      *(longlong *)(param_6 + 0x18 + lVar9 * 8) = auVar56._0_8_;
      *(ulonglong *)(param_1 + -0x58 + lVar11 * 2) = auVar57._0_8_;
      *(ulonglong *)(param_1 + -0x50 + lVar11 * 2) = local_168;
      *(ulonglong *)(param_1 + -0x48 + lVar11 * 2) = local_1c8;
      *(ulonglong *)(param_1 + -0x40 + lVar11 * 2) = local_178;
      *(undefined8 *)(param_1 + -0x38 + lVar11 * 2) = local_118._0_8_;
      *(undefined8 *)(param_1 + -0x30 + lVar11 * 2) = local_208._0_8_;
      *(undefined8 *)(param_1 + -0x28 + lVar11 * 2) = local_1d8._0_8_;
      *(undefined8 *)(param_1 + -0x20 + lVar11 * 2) = local_1f8._0_8_;
      *(undefined8 *)(param_1 + -0x18 + lVar11 * 2) = local_138._0_8_;
      *(undefined8 *)(param_1 + -0x10 + lVar11 * 2) = local_1e8._0_8_;
      *(double *)(param_1 + -8 + lVar11 * 2) = dVar25;
      *(ulonglong *)(param_1 + lVar11 * 2) = uVar73;
      iVar8 = iVar8 + 1;
      lVar11 = lVar11 + 0x30;
      lVar9 = lVar9 + 4;
    } while ((ulonglong)param_10 << 2 != lVar9);
  }
  return;
}

// BlendPosesPerBoneFilterScale_avx2 @ 140ab10d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilterScale_avx2
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               longlong param_6,longlong param_7,longlong param_8,longlong param_9,uint param_10)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 auVar11 [32];
  int iVar12;
  ulonglong *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar22;
  undefined1 auVar17 [16];
  double dVar23;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  double dVar24;
  undefined1 auVar21 [32];
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar50 [16];
  ulonglong uVar49;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [64];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  double dVar69;
  double dVar71;
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  double dVar70;
  undefined1 auVar68 [64];
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  double dVar78;
  undefined1 auVar75 [32];
  double dVar77;
  double dVar79;
  undefined1 auVar76 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [64];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar90;
  undefined1 auVar91 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  ulonglong local_208;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_188 [16];
  undefined1 local_168 [16];
  undefined1 local_148 [16];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 auVar44 [32];
  undefined1 auVar62 [32];
  undefined1 auVar67 [32];
  undefined1 auVar84 [32];
  undefined1 auVar87 [32];
  
  if (0 < (int)param_10) {
    lVar14 = 0;
    lVar16 = 0;
    do {
      iVar12 = *(int *)(param_8 + lVar16 * 8);
      iVar8 = *(int *)(param_9 + lVar16 * 4);
      lVar15 = (longlong)iVar8;
      local_168._0_8_ = *(ulonglong *)(param_2 + lVar14 * 4);
      local_168._8_8_ = 0;
      local_1f8._0_8_ = *(ulonglong *)(param_2 + 8 + lVar14 * 4);
      local_1f8._8_8_ = 0;
      local_1e8._0_8_ = *(ulonglong *)(param_2 + 0x10 + lVar14 * 4);
      local_1e8._8_8_ = 0;
      local_1d8._0_8_ = *(ulonglong *)(param_2 + 0x18 + lVar14 * 4);
      local_1d8._8_8_ = 0;
      local_148._0_8_ = *(double *)(param_2 + 0x20 + lVar14 * 4);
      local_148._8_8_ = 0;
      local_1c8._0_8_ = *(ulonglong *)(param_2 + 0x28 + lVar14 * 4);
      local_1c8._8_8_ = 0;
      local_1b8._0_8_ = *(double *)(param_2 + 0x30 + lVar14 * 4);
      local_1b8._8_8_ = 0;
      local_188._0_8_ = *(double *)(param_2 + 0x40 + lVar14 * 4);
      local_188._8_8_ = 0;
      local_218._0_8_ = *(ulonglong *)(param_2 + 0x58 + lVar14 * 4);
      auVar55 = ZEXT864(*(ulonglong *)(param_2 + 0x38 + lVar14 * 4));
      auVar68 = ZEXT864(*(ulonglong *)(param_2 + 0x48 + lVar14 * 4));
      local_218._8_8_ = 0;
      auVar81 = ZEXT864(*(ulonglong *)(param_2 + 0x50 + lVar14 * 4));
      puVar13 = (ulonglong *)GetTransformFromArray(param_3,iVar12,(int)lVar16);
      dVar22 = auVar81._0_8_;
      uVar49 = auVar55._0_8_;
      dVar38 = (double)puVar13[8];
      auVar39._8_8_ = 0;
      auVar39._0_8_ = dVar38;
      uVar25 = puVar13[9];
      auVar50._8_8_ = 0;
      auVar50._0_8_ = uVar25;
      auVar29._0_8_ = (double)puVar13[10];
      auVar72._8_8_ = 0;
      auVar72._0_8_ = auVar29._0_8_;
      auVar41 = auVar68._0_16_;
      local_208 = auVar68._0_8_;
      if (lVar15 == -1) {
        local_228._8_8_ = 0;
        local_228._0_8_ = local_188._0_8_;
        local_278 = auVar41;
        local_268 = auVar72;
        local_258 = auVar81._0_16_;
        local_248 = auVar50;
        local_238 = auVar39;
      }
      else {
        lVar10 = lVar15 * 0x18;
        auVar59 = vunpcklpd_avx(local_188,auVar41);
        local_228._0_8_ = auVar59._0_8_ * *(double *)(param_4 + lVar10);
        local_228._8_8_ = auVar59._8_8_ * ((double *)(param_4 + lVar10))[1];
        local_258._8_8_ = 0;
        local_258._0_8_ = dVar22 * *(double *)(param_4 + 0x10 + lVar10);
        auVar59 = vunpcklpd_avx(auVar39,auVar50);
        local_238._0_8_ = auVar59._0_8_ * *(double *)(param_5 + lVar10);
        local_238._8_8_ = auVar59._8_8_ * ((double *)(param_5 + lVar10))[1];
        local_278 = vshufpd_avx(local_228,local_228,1);
        local_248 = vshufpd_avx(local_238,local_238,1);
        local_268._8_8_ = 0;
        local_268._0_8_ = auVar29._0_8_ * *(double *)(param_5 + 0x10 + lVar10);
      }
      uVar1 = *puVar13;
      auVar88._8_8_ = 0;
      auVar88._0_8_ = uVar1;
      uVar2 = puVar13[1];
      auVar85._8_8_ = 0;
      auVar85._0_8_ = uVar2;
      uVar3 = puVar13[2];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar3;
      uVar4 = puVar13[3];
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar4;
      dVar23 = (double)puVar13[4];
      auVar89._8_8_ = 0;
      auVar89._0_8_ = dVar23;
      uVar5 = puVar13[5];
      auVar82._8_8_ = 0;
      auVar82._0_8_ = uVar5;
      dVar24 = (double)puVar13[6];
      auVar74._8_8_ = 0;
      auVar74._0_8_ = dVar24;
      auVar59 = vmaxss_avx(ZEXT816(0),ZEXT416(*(uint *)(param_8 + 4 + lVar16 * 8)));
      uVar6 = puVar13[7];
      auVar91._8_8_ = 0;
      auVar91._0_8_ = uVar6;
      auVar9 = vminss_avx(auVar59,ZEXT416(__real_3f800000));
      auVar59 = vmaxss_avx(auVar9,ZEXT416(*(uint *)(param_7 + (longlong)iVar12 * 4)));
      uVar7 = puVar13[0xb];
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar7;
      *(int *)(param_7 + (longlong)iVar12 * 4) = auVar59._0_4_;
      fVar42 = auVar9._0_4_;
      dVar90 = local_258._0_8_;
      if (fVar42 <= __real_3727c5ac) {
        auVar19 = ZEXT1632(ZEXT816(0));
        auVar41 = local_228;
        auVar39 = local_278;
        dVar38 = dVar90;
      }
      else if (__real_3f7fff58 <= fVar42) {
        auVar19 = ZEXT1632(ZEXT816(0));
        dVar22 = auVar29._0_8_;
        auVar41 = local_238;
        auVar39 = local_248;
        local_208 = uVar25;
        local_188._0_8_ = dVar38;
        local_218._0_8_ = uVar7;
        local_1f8._0_8_ = uVar2;
        local_1e8._0_8_ = uVar3;
        local_1d8._0_8_ = uVar4;
        local_1c8._0_8_ = uVar5;
        local_1b8._0_8_ = dVar24;
        dVar38 = (double)local_268._0_8_;
        local_168._0_8_ = uVar1;
        local_148._0_8_ = dVar23;
        uVar49 = uVar6;
      }
      else {
        auVar29 = vunpcklpd_avx(local_1e8,local_1d8);
        auVar27 = vunpcklpd_avx(local_168,local_1f8);
        auVar51._16_16_ = auVar29;
        auVar51._0_16_ = auVar27;
        auVar17 = vunpcklpd_avx(auVar17,auVar57);
        auVar57 = vunpcklpd_avx(auVar88,auVar85);
        auVar45._0_8_ = auVar27._0_8_ * auVar57._0_8_;
        auVar45._8_8_ = auVar27._8_8_ * auVar57._8_8_;
        auVar45._16_8_ = auVar29._0_8_ * auVar17._0_8_;
        auVar45._24_8_ = auVar29._8_8_ * auVar17._8_8_;
        auVar19 = vpermpd_avx2(auVar45,0x4e);
        auVar18._0_8_ = auVar45._0_8_ + auVar19._0_8_;
        auVar18._8_8_ = auVar45._8_8_ + auVar19._8_8_;
        auVar18._16_8_ = auVar45._16_8_ + auVar19._16_8_;
        auVar18._24_8_ = auVar45._24_8_ + auVar19._24_8_;
        auVar19 = vpermpd_avx2(auVar18,0x39);
        auVar53._0_8_ = auVar18._0_8_ + auVar19._0_8_;
        auVar53._8_8_ = auVar18._8_8_ + auVar19._8_8_;
        auVar53._16_8_ = auVar18._16_8_ + auVar19._16_8_;
        auVar53._24_8_ = auVar18._24_8_ + auVar19._24_8_;
        auVar59 = vunpcklpd_avx(auVar81._0_16_,local_218);
        auVar41 = vunpcklpd_avx(local_188,auVar41);
        auVar46._16_16_ = auVar59;
        auVar46._0_16_ = auVar41;
        auVar72 = vunpcklpd_avx(auVar72,auVar26);
        auVar19 = vcmppd_avx(ZEXT832(0) << 0x40,auVar53,2);
        auVar19 = vpshufb_avx2(auVar19,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar45 = vblendvps_avx(ZEXT832(0) << 0x40,
                                ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                ,auVar19);
        auVar39 = vunpcklpd_avx(auVar39,auVar50);
        auVar19._16_16_ = auVar72;
        auVar19._0_16_ = auVar39;
        dVar37 = (double)fVar42;
        auVar19 = vsubpd_avx(auVar19,auVar46);
        auVar43._0_8_ = dVar37 * auVar19._0_8_ + auVar41._0_8_;
        auVar43._8_8_ = dVar37 * auVar19._8_8_ + auVar41._8_8_;
        auVar44._16_8_ = dVar37 * auVar19._16_8_ + auVar59._0_8_;
        auVar44._0_16_ = auVar43;
        auVar44._24_8_ = dVar37 * auVar19._24_8_ + auVar59._8_8_;
        auVar39 = vunpcklpd_avx(local_1b8,auVar55._0_16_);
        auVar50 = vshufpd_avx(auVar44._16_16_,auVar44._16_16_,1);
        auVar41 = vunpcklpd_avx(local_148,local_1c8);
        auVar72 = vshufpd_avx(auVar43,auVar43,1);
        auVar20._16_16_ = auVar39;
        auVar20._0_16_ = auVar41;
        auVar59 = vunpcklpd_avx(auVar74,auVar91);
        auVar9 = vunpcklpd_avx(auVar89,auVar82);
        auVar19 = ZEXT1632(ZEXT816(0));
        auVar30._16_16_ = auVar59;
        auVar30._0_16_ = auVar9;
        auVar18 = vsubpd_avx(auVar30,auVar20);
        auVar83._0_8_ = dVar37 * auVar18._0_8_ + auVar41._0_8_;
        auVar83._8_8_ = dVar37 * auVar18._8_8_ + auVar41._8_8_;
        auVar84._16_8_ = dVar37 * auVar18._16_8_ + auVar39._0_8_;
        auVar84._0_16_ = auVar83;
        auVar84._24_8_ = dVar37 * auVar18._24_8_ + auVar39._8_8_;
        auVar59 = vshufpd_avx(auVar84._16_16_,auVar84._16_16_,1);
        auVar9 = vshufpd_avx(auVar83,auVar83,1);
        dVar38 = __real_3ff0000000000000 - dVar37;
        auVar18 = vsubpd_avx(ZEXT1632(ZEXT816(0)),auVar51);
        auVar31._0_4_ = ~auVar45._0_4_ & auVar18._0_4_;
        auVar31._4_4_ = ~auVar45._4_4_ & auVar18._4_4_;
        auVar31._8_4_ = ~auVar45._8_4_ & auVar18._8_4_;
        auVar31._12_4_ = ~auVar45._12_4_ & auVar18._12_4_;
        auVar31._16_4_ = ~auVar45._16_4_ & auVar18._16_4_;
        auVar31._20_4_ = ~auVar45._20_4_ & auVar18._20_4_;
        auVar31._24_4_ = ~auVar45._24_4_ & auVar18._24_4_;
        auVar31._28_4_ = ~auVar45._28_4_ & auVar18._28_4_;
        auVar32._0_8_ = (ulonglong)auVar27._0_8_ & auVar45._0_8_;
        auVar32._8_8_ = (ulonglong)auVar27._8_8_ & auVar45._8_8_;
        auVar32._16_8_ = (ulonglong)auVar29._0_8_ & auVar45._16_8_;
        auVar32._24_8_ = (ulonglong)auVar29._8_8_ & auVar45._24_8_;
        auVar32 = auVar32 | auVar31;
        auVar29._0_8_ = dVar37 * auVar57._0_8_ + dVar38 * auVar32._0_8_;
        dVar22 = dVar37 * auVar57._8_8_ + dVar38 * auVar32._8_8_;
        dVar23 = dVar37 * auVar17._0_8_ + dVar38 * auVar32._16_8_;
        dVar24 = dVar37 * auVar17._8_8_ + dVar38 * auVar32._24_8_;
        auVar27._0_8_ = auVar29._0_8_ * auVar29._0_8_ + dVar23 * dVar23;
        auVar27._8_8_ = dVar22 * dVar22 + dVar24 * dVar24;
        auVar39 = vshufpd_avx(auVar27,auVar27,1);
        dVar38 = auVar27._0_8_ + auVar39._0_8_;
        auVar28._8_8_ = 0;
        auVar28._0_8_ = dVar38;
        dVar38 = __real_3ff0000000000000 / SQRT(dVar38);
        auVar40._8_8_ = 0;
        auVar40._0_8_ = __real_3e45798ee2308c3a;
        auVar39 = vcmpsd_avx(auVar40,auVar28,6);
        uVar25 = ~auVar39._0_8_ & __real_ffffffffffffffff;
        auVar86._0_8_ = (ulonglong)(auVar29._0_8_ * dVar38) & uVar25;
        auVar86._8_8_ = (ulonglong)(dVar22 * dVar38) & uVar25;
        auVar87._16_8_ = (ulonglong)(dVar23 * dVar38) & uVar25;
        auVar87._0_16_ = auVar86;
        auVar87._24_8_ = (ulonglong)(dVar24 * dVar38) & uVar25;
        auVar80._0_8_ =
             ~uVar25 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar80._8_8_ = ~uVar25 & _UNK_150b54548;
        auVar80._16_8_ = ~uVar25 & _UNK_150b54550;
        auVar80._24_8_ = ~uVar25 & _UNK_150b54558;
        auVar17 = auVar87._16_16_ | auVar80._16_16_;
        auVar29 = vshufps_avx(auVar17,auVar17,0x4e);
        auVar26 = vshufps_avx(auVar86,auVar86,0x4e);
        auVar39 = vunpcklpd_avx(local_238,local_248);
        auVar21._16_16_ = local_268;
        auVar21._0_16_ = auVar39;
        auVar39 = vunpcklpd_avx(local_228,local_278);
        auVar33._16_16_ = local_258;
        auVar33._0_16_ = auVar39;
        auVar45 = vsubpd_avx(auVar21,auVar33);
        auVar41._0_8_ = dVar37 * auVar45._0_8_ + auVar39._0_8_;
        auVar41._8_8_ = dVar37 * auVar45._8_8_ + auVar39._8_8_;
        auVar39 = vshufpd_avx(auVar41,auVar41,1);
        dVar22 = auVar44._16_8_;
        local_208 = auVar72._0_8_;
        local_188._0_8_ = auVar43._0_8_;
        local_218._0_8_ = auVar50._0_8_;
        local_1f8._0_8_ = auVar26._0_8_;
        local_1e8._0_8_ = auVar17._0_8_;
        local_1d8._0_8_ = auVar29._0_8_;
        local_1c8._0_8_ = auVar9._0_8_;
        local_1b8._0_8_ = auVar84._16_8_;
        dVar38 = dVar37 * auVar45._16_8_ + dVar90;
        local_168._0_8_ = auVar86._0_8_;
        local_148._0_8_ = auVar83._0_8_;
        uVar49 = auVar59._0_8_;
      }
      *(longlong *)(param_4 + lVar14) = local_228._0_8_;
      *(longlong *)(param_4 + 8 + lVar14) = local_278._0_8_;
      *(double *)(param_4 + 0x10 + lVar14) = dVar90;
      *(undefined8 *)(param_5 + lVar14) = local_238._0_8_;
      *(longlong *)(param_5 + 8 + lVar14) = local_248._0_8_;
      *(undefined8 *)(param_5 + 0x10 + lVar14) = local_268._0_8_;
      auVar29._0_8_ = (double)local_188._0_8_;
      if (iVar8 != -1) {
        auVar29._0_8_ = *(double *)(param_6 + 0x10 + lVar15 * 0x18);
        auVar50 = *(undefined1 (*) [16])(param_6 + lVar15 * 0x18);
        auVar34._16_8_ = auVar29._0_8_;
        auVar34._0_16_ = auVar50;
        auVar34._24_8_ = 0;
        dVar22 = auVar50._0_8_;
        auVar47._0_8_ = (ulonglong)dVar22 & __real_7fffffffffffffff;
        dVar23 = auVar50._8_8_;
        auVar47._8_8_ = (ulonglong)dVar23 & __real_7fffffffffffffff;
        auVar47._16_8_ = (ulonglong)auVar29._0_8_ & __real_7fffffffffffffff;
        auVar47._24_8_ = 0;
        auVar75._8_8_ = __real_3e45798ee2308c3a;
        auVar75._0_8_ = __real_3e45798ee2308c3a;
        auVar75._16_8_ = __real_3e45798ee2308c3a;
        auVar75._24_8_ = __real_3e45798ee2308c3a;
        auVar45 = vcmppd_avx(auVar47,auVar75,2);
        auVar18 = vpcmpeqd_avx2(ZEXT1632(local_248),ZEXT1632(local_248));
        auVar45 = vpackssdw_avx2(auVar45,auVar18);
        auVar20 = vpermq_avx2(auVar45,0xd8);
        auVar50 = ZEXT816(0);
        auVar80 = ZEXT1632(auVar50);
        auVar52._8_8_ = __real_46c8a6e32246c99c;
        auVar52._0_8_ = __real_46c8a6e32246c99c;
        auVar52._16_8_ = __real_46c8a6e32246c99c;
        auVar52._24_8_ = __real_46c8a6e32246c99c;
        auVar45 = vcmppd_avx(auVar34,auVar52,2);
        auVar18 = vpackssdw_avx2(auVar45,auVar18);
        auVar60._8_8_ = __real_3914c4e977ba1f5c;
        auVar60._0_8_ = __real_3914c4e977ba1f5c;
        auVar60._16_8_ = __real_3914c4e977ba1f5c;
        auVar60._24_8_ = __real_3914c4e977ba1f5c;
        auVar45 = vcmppd_avx(auVar60,auVar34,2);
        auVar45 = vpackssdw_avx2(auVar45,ZEXT1632(auVar50));
        auVar53 = vpand_avx2(auVar18,auVar45);
        auVar53 = vpermq_avx2(auVar53,0xd8);
        auVar53 = vpandn_avx2(auVar20,auVar53);
        iVar12 = vmovmskps_avx(auVar53);
        dVar24 = auVar19._8_8_;
        dVar90 = auVar19._16_8_;
        dVar37 = auVar19._24_8_;
        if (iVar12 == 0) {
LAB_140ab19ba:
          auVar11._8_8_ = (ulonglong)dVar90 & __real_7fe0000000000000;
          auVar11._0_8_ = (ulonglong)dVar24 & __real_7fe0000000000000;
          auVar11._16_8_ = (ulonglong)dVar37 & __real_7fe0000000000000;
          auVar11._24_8_ = 0;
          auVar48._0_8_ = (ulonglong)dVar22 & __real_7fe0000000000000;
          auVar48._8_8_ = (ulonglong)dVar23 & __real_7fe0000000000000;
          auVar48._16_8_ = (ulonglong)auVar29._0_8_ & __real_7fe0000000000000;
          auVar48._24_8_ = 0;
          auVar64._8_8_ = __real_7fcfffffffffffff;
          auVar64._0_8_ = __real_7fcfffffffffffff;
          auVar64._16_8_ = __real_7fcfffffffffffff;
          auVar64._24_8_ = __real_7fcfffffffffffff;
          auVar53 = vpsubq_avx2(auVar64,auVar48);
          auVar21 = vpsubq_avx2(auVar64,auVar11 << 0x40);
          auVar65._0_8_ = dVar22 * auVar53._0_8_;
          auVar65._8_8_ = dVar23 * auVar53._8_8_;
          auVar65._16_8_ = auVar29._0_8_ * auVar53._16_8_;
          auVar65._24_8_ = auVar53._24_8_ * 0.0;
          auVar50 = vcvtpd2ps_avx(auVar65);
          auVar76._0_8_ = auVar21._0_8_ * 0.0;
          auVar76._8_8_ = dVar24 * auVar21._8_8_;
          auVar76._16_8_ = dVar90 * auVar21._16_8_;
          auVar76._24_8_ = dVar37 * auVar21._24_8_;
          auVar72 = vcvtpd2ps_avx(auVar76);
          auVar66._16_16_ = auVar72;
          auVar66._0_16_ = auVar50;
          auVar45 = vrcpps_avx(auVar66);
          auVar59._0_4_ = auVar45._0_4_ * (-(auVar45._0_4_ * auVar50._0_4_) + __real_40000000);
          auVar59._4_4_ = auVar45._4_4_ * (-(auVar45._4_4_ * auVar50._4_4_) + __real_40000000);
          auVar59._8_4_ = auVar45._8_4_ * (-(auVar45._8_4_ * auVar50._8_4_) + __real_40000000);
          auVar59._12_4_ = auVar45._12_4_ * (-(auVar45._12_4_ * auVar50._12_4_) + __real_40000000);
          auVar67._16_4_ = auVar45._16_4_ * (-(auVar45._16_4_ * auVar72._0_4_) + __real_40000000);
          auVar67._0_16_ = auVar59;
          auVar67._20_4_ = auVar45._20_4_ * (-(auVar45._20_4_ * auVar72._4_4_) + __real_40000000);
          auVar67._24_4_ = auVar45._24_4_ * (-(auVar45._24_4_ * auVar72._8_4_) + __real_40000000);
          auVar67._28_4_ = auVar45._28_4_ * (-(auVar45._28_4_ * auVar72._12_4_) + __real_40000000);
          auVar45 = vcvtps2pd_avx(auVar59);
          auVar18 = vcvtps2pd_avx(auVar67._16_16_);
          dVar73 = auVar21._0_8_ * auVar18._0_8_;
          dVar77 = auVar21._8_8_ * auVar18._8_8_;
          dVar78 = auVar21._16_8_ * auVar18._16_8_;
          dVar79 = auVar21._24_8_ * auVar18._24_8_;
          dVar56 = auVar45._0_8_ * auVar53._0_8_;
          dVar69 = auVar45._8_8_ * auVar53._8_8_;
          dVar70 = auVar45._16_8_ * auVar53._16_8_;
          dVar71 = auVar45._24_8_ * auVar53._24_8_;
          dVar73 = (-(dVar73 * 0.0) + __real_4000000000000000) * dVar73;
          dVar77 = (-(dVar24 * dVar77) + __real_4000000000000000) * dVar77;
          dVar78 = (-(dVar90 * dVar78) + __real_4000000000000000) * dVar78;
          dVar79 = (-(dVar37 * dVar79) + __real_4000000000000000) * dVar79;
          dVar56 = (-(dVar22 * dVar56) + __real_4000000000000000) * dVar56;
          dVar69 = (-(dVar23 * dVar69) + __real_4000000000000000) * dVar69;
          dVar70 = (-(auVar29._0_8_ * dVar70) + __real_4000000000000000) * dVar70;
          dVar71 = (-(dVar71 * 0.0) + __real_4000000000000000) * dVar71;
          auVar35._0_8_ = dVar56 * (-(dVar56 * dVar22) + __real_4000000000000000);
          auVar35._8_8_ = dVar69 * (-(dVar69 * dVar23) + __real_4000000000000000);
          auVar35._16_8_ = dVar70 * (-(dVar70 * auVar29._0_8_) + __real_4000000000000000);
          auVar35._24_8_ = dVar71 * (-(dVar71 * 0.0) + __real_4000000000000000);
          auVar45 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                                ,auVar80 ^ 
                                 ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                               );
          local_108 = vblendvps_avx(local_108,auVar35,auVar45);
          auVar36._0_8_ = dVar73 * (-(dVar73 * 0.0) + __real_4000000000000000);
          auVar36._8_8_ = dVar77 * (-(dVar24 * dVar77) + __real_4000000000000000);
          auVar36._16_8_ = dVar78 * (-(dVar90 * dVar78) + __real_4000000000000000);
          auVar36._24_8_ = dVar79 * (-(dVar37 * dVar79) + __real_4000000000000000);
          auVar45 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                ,auVar80 ^ 
                                 ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                               );
          local_128 = vblendvps_avx(local_128,auVar36,auVar45);
        }
        else {
          auVar53 = vcmppd_avx(auVar47,auVar75,6);
          auVar53 = vpackssdw_avx2(auVar53,ZEXT1632(auVar50));
          auVar50 = vpackssdw_avx(auVar53._0_16_,auVar53._16_16_);
          auVar59 = vpshufd_avx(auVar50,0xd8);
          auVar50 = vpackssdw_avx(auVar18._0_16_,auVar18._16_16_);
          auVar72 = vpackssdw_avx(auVar45._0_16_,auVar45._16_16_);
          auVar50 = vpand_avx(auVar50,auVar72);
          auVar9 = vpshufd_avx(auVar50,0xd8);
          auVar45 = vpmovzxwd_avx2(auVar9);
          auVar53 = vpslld_avx2(auVar45,0x1f);
          auVar50 = vcvtpd2ps_avx(auVar34);
          auVar72 = vcvtpd2ps_avx(auVar19);
          auVar61._16_16_ = auVar72;
          auVar61._0_16_ = auVar50;
          auVar45 = vrcpps_avx(auVar61);
          auVar58._0_4_ = auVar45._0_4_ * (-(auVar45._0_4_ * auVar50._0_4_) + __real_40000000);
          auVar58._4_4_ = auVar45._4_4_ * (-(auVar45._4_4_ * auVar50._4_4_) + __real_40000000);
          auVar58._8_4_ = auVar45._8_4_ * (-(auVar45._8_4_ * auVar50._8_4_) + __real_40000000);
          auVar58._12_4_ = auVar45._12_4_ * (-(auVar45._12_4_ * auVar50._12_4_) + __real_40000000);
          auVar62._16_4_ = auVar45._16_4_ * (-(auVar45._16_4_ * auVar72._0_4_) + __real_40000000);
          auVar62._0_16_ = auVar58;
          auVar62._20_4_ = auVar45._20_4_ * (-(auVar45._20_4_ * auVar72._4_4_) + __real_40000000);
          auVar62._24_4_ = auVar45._24_4_ * (-(auVar45._24_4_ * auVar72._8_4_) + __real_40000000);
          auVar62._28_4_ = auVar45._28_4_ * (-(auVar45._28_4_ * auVar72._12_4_) + __real_40000000);
          auVar45 = vcvtps2pd_avx(auVar62._16_16_);
          auVar18 = vcvtps2pd_avx(auVar58);
          auVar80 = vpsrad_avx2(auVar53,0x1f);
          dVar73 = (-(auVar45._0_8_ * 0.0) + __real_4000000000000000) * auVar45._0_8_;
          dVar77 = (-(dVar24 * auVar45._8_8_) + __real_4000000000000000) * auVar45._8_8_;
          dVar78 = (-(dVar90 * auVar45._16_8_) + __real_4000000000000000) * auVar45._16_8_;
          dVar79 = (-(dVar37 * auVar45._24_8_) + __real_4000000000000000) * auVar45._24_8_;
          dVar56 = (-(dVar22 * auVar18._0_8_) + __real_4000000000000000) * auVar18._0_8_;
          dVar69 = (-(dVar23 * auVar18._8_8_) + __real_4000000000000000) * auVar18._8_8_;
          dVar70 = (-(auVar29._0_8_ * auVar18._16_8_) + __real_4000000000000000) * auVar18._16_8_;
          dVar71 = (-(auVar18._24_8_ * 0.0) + __real_4000000000000000) * auVar18._24_8_;
          auVar63._0_8_ = (-(dVar22 * dVar56) + __real_4000000000000000) * dVar56;
          auVar63._8_8_ = (-(dVar23 * dVar69) + __real_4000000000000000) * dVar69;
          auVar63._16_8_ = (-(auVar29._0_8_ * dVar70) + __real_4000000000000000) * dVar70;
          auVar63._24_8_ = (-(dVar71 * 0.0) + __real_4000000000000000) * dVar71;
          auVar45 = vpmovsxdq_avx2(auVar53._0_16_);
          local_108 = vblendvps_avx(local_108,auVar63,auVar45);
          auVar54._0_8_ = dVar73 * (-(dVar73 * 0.0) + __real_4000000000000000);
          auVar54._8_8_ = dVar77 * (-(dVar24 * dVar77) + __real_4000000000000000);
          auVar54._16_8_ = dVar78 * (-(dVar90 * dVar78) + __real_4000000000000000);
          auVar54._24_8_ = dVar79 * (-(dVar37 * dVar79) + __real_4000000000000000);
          auVar45 = vpermd_avx2(___ymm_0000000700000007000000060000000600000005000000050000000400000004
                                ,auVar80);
          local_128 = vblendvps_avx(local_128,auVar54,auVar45);
          auVar50 = vpsllw_avx(auVar59,0xf);
          auVar50 = vpacksswb_avx(auVar50,auVar50);
          if ((byte)(SUB161(auVar50 >> 7,0) & 1 | (SUB161(auVar50 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar50 >> 0x17,0) & 1) << 2 | (SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar50 >> 0x27,0) & 1) << 4 | (SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar50 >> 0x37,0) & 1) << 6 | SUB161(auVar50 >> 0x3f,0) << 7) !=
              (byte)iVar12) {
            auVar50 = vpand_avx(auVar9,auVar59);
            auVar45 = vpmovzxwd_avx2(auVar50);
            auVar45 = vpslld_avx2(auVar45,0x1f);
            auVar80 = vpsrad_avx2(auVar45,0x1f);
            goto LAB_140ab19ba;
          }
        }
        auVar45 = vpermd_avx2(___ymm_0000000300000003000000020000000200000001000000010000000000000000
                              ,auVar20);
        auVar19 = vblendvps_avx(local_108,auVar19,auVar45);
        auVar50 = vunpcklpd_avx(auVar41,auVar39);
        auVar29._0_8_ = auVar50._0_8_ * auVar19._0_8_;
        auVar29._8_8_ = auVar50._8_8_ * auVar19._8_8_;
        dVar22 = dVar38 * auVar19._16_8_;
        auVar50 = vshufpd_avx(auVar29,auVar29,1);
        local_208 = auVar50._0_8_;
        local_218._0_8_ = 0;
      }
      *(longlong *)(param_6 + lVar14) = auVar41._0_8_;
      *(longlong *)(param_6 + 8 + lVar14) = auVar39._0_8_;
      *(double *)(param_6 + 0x10 + lVar14) = dVar38;
      *(undefined8 *)(param_1 + lVar14 * 4) = local_168._0_8_;
      *(undefined8 *)(param_1 + 8 + lVar14 * 4) = local_1f8._0_8_;
      *(undefined8 *)(param_1 + 0x10 + lVar14 * 4) = local_1e8._0_8_;
      *(undefined8 *)(param_1 + 0x18 + lVar14 * 4) = local_1d8._0_8_;
      *(undefined8 *)(param_1 + 0x20 + lVar14 * 4) = local_148._0_8_;
      *(undefined8 *)(param_1 + 0x28 + lVar14 * 4) = local_1c8._0_8_;
      *(undefined8 *)(param_1 + 0x30 + lVar14 * 4) = local_1b8._0_8_;
      *(ulonglong *)(param_1 + 0x38 + lVar14 * 4) = uVar49;
      *(double *)(param_1 + 0x40 + lVar14 * 4) = auVar29._0_8_;
      *(ulonglong *)(param_1 + 0x48 + lVar14 * 4) = local_208;
      *(double *)(param_1 + 0x50 + lVar14 * 4) = dVar22;
      *(undefined8 *)(param_1 + 0x58 + lVar14 * 4) = local_218._0_8_;
      lVar16 = lVar16 + 1;
      lVar14 = lVar14 + 0x18;
    } while ((ulonglong)param_10 * 0x18 != lVar14);
  }
  return;
}

// BlendPosesPerBoneFilter_avx2 @ 140ab1b40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendPosesPerBoneFilter_avx2
               (longlong param_1,longlong param_2,uchar *param_3,longlong param_4,longlong param_5,
               undefined8 param_6,uint param_7)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  ulonglong uVar11;
  double dVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  ulonglong *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  double dVar34;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  double dVar33;
  double dVar35;
  undefined1 auVar32 [32];
  ulonglong uVar36;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulonglong uVar37;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  ulonglong uVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [32];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  ulonglong uVar59;
  double dVar60;
  undefined1 auVar61 [64];
  ulonglong uVar62;
  undefined1 auVar63 [16];
  ulonglong uVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [32];
  undefined1 auVar68 [64];
  undefined1 auVar69 [16];
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar74;
  double dVar75;
  ulonglong uVar76;
  undefined1 auVar77 [64];
  double dVar78;
  undefined1 auVar79 [16];
  ulonglong uVar80;
  undefined1 auVar81 [64];
  undefined1 auVar48 [32];
  undefined1 auVar54 [32];
  undefined1 auVar73 [32];
  
  if (0 < (int)param_7) {
    lVar23 = 0xb;
    uVar24 = 0;
    do {
      iVar14 = *(int *)(param_5 + uVar24 * 8);
      uVar37 = *(ulonglong *)(param_2 + -0x58 + lVar23 * 8);
      dVar44 = *(double *)(param_2 + -0x38 + lVar23 * 8);
      uVar1 = *(ulonglong *)(param_2 + -0x30 + lVar23 * 8);
      dVar26 = *(double *)(param_2 + -0x28 + lVar23 * 8);
      uVar2 = *(ulonglong *)(param_2 + -0x20 + lVar23 * 8);
      dVar33 = *(double *)(param_2 + -0x18 + lVar23 * 8);
      uVar3 = *(ulonglong *)(param_2 + -0x10 + lVar23 * 8);
      dVar34 = *(double *)(param_2 + -8 + lVar23 * 8);
      auVar61 = ZEXT864(*(ulonglong *)(param_2 + -0x50 + lVar23 * 8));
      auVar68 = ZEXT864(*(ulonglong *)(param_2 + -0x48 + lVar23 * 8));
      auVar77 = ZEXT864(*(ulonglong *)(param_2 + lVar23 * 8));
      auVar81 = ZEXT864(*(ulonglong *)(param_2 + -0x40 + lVar23 * 8));
      puVar22 = (ulonglong *)GetTransformFromArray(param_3,iVar14,(int)uVar24);
      uVar4 = *puVar22;
      auVar45._8_8_ = 0;
      auVar45._0_8_ = uVar4;
      uVar5 = puVar22[1];
      auVar66._8_8_ = 0;
      auVar66._0_8_ = uVar5;
      uVar6 = puVar22[2];
      auVar57._8_8_ = 0;
      auVar57._0_8_ = uVar6;
      uVar7 = puVar22[3];
      auVar69._8_8_ = 0;
      auVar69._0_8_ = uVar7;
      dVar35 = (double)puVar22[4];
      uVar8 = puVar22[5];
      dVar60 = (double)puVar22[6];
      auVar49._8_8_ = 0;
      auVar49._0_8_ = dVar60;
      uVar9 = puVar22[7];
      auVar52._8_8_ = 0;
      auVar52._0_8_ = uVar9;
      dVar10 = (double)puVar22[8];
      auVar63._8_8_ = 0;
      auVar63._0_8_ = dVar10;
      uVar11 = puVar22[9];
      auVar71._8_8_ = 0;
      auVar71._0_8_ = uVar11;
      auVar15 = vmaxss_avx(ZEXT816(0) << 0x20,ZEXT416(*(uint *)(param_5 + 4 + uVar24 * 8)));
      dVar12 = (double)puVar22[10];
      auVar79._8_8_ = 0;
      auVar79._0_8_ = dVar12;
      auVar16 = vminss_avx(auVar15,ZEXT416(__real_3f800000));
      auVar15 = vmaxss_avx(auVar16,ZEXT416(*(uint *)(param_4 + (longlong)iVar14 * 4)));
      uVar13 = puVar22[0xb];
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar13;
      *(int *)(param_4 + (longlong)iVar14 * 4) = auVar15._0_4_;
      fVar74 = auVar16._0_4_;
      uVar36 = uVar1;
      dVar75 = dVar26;
      uVar59 = auVar61._0_8_;
      uVar64 = auVar68._0_8_;
      uVar80 = auVar81._0_8_;
      uVar25 = uVar3;
      uVar76 = auVar77._0_8_;
      uVar43 = uVar37;
      dVar51 = dVar44;
      uVar62 = uVar2;
      dVar70 = dVar33;
      dVar78 = dVar34;
      if ((__real_3727c5ac < fVar74) &&
         (uVar36 = uVar8, dVar75 = dVar60, uVar59 = uVar5, uVar64 = uVar6, uVar80 = uVar7,
         uVar25 = uVar11, uVar76 = uVar13, uVar43 = uVar4, dVar51 = dVar35, uVar62 = uVar9,
         dVar70 = dVar10, dVar78 = dVar12, fVar74 < __real_3f7fff58)) {
        auVar38 = vunpcklpd_avx(auVar68._0_16_,auVar81._0_16_);
        auVar65._8_8_ = 0;
        auVar65._0_8_ = uVar37;
        auVar39 = vunpcklpd_avx(auVar65,auVar61._0_16_);
        auVar67._16_16_ = auVar38;
        auVar67._0_16_ = auVar39;
        auVar57 = vunpcklpd_avx(auVar57,auVar69);
        auVar66 = vunpcklpd_avx(auVar45,auVar66);
        auVar40._0_8_ = auVar39._0_8_ * auVar66._0_8_;
        auVar40._8_8_ = auVar39._8_8_ * auVar66._8_8_;
        auVar40._16_8_ = auVar38._0_8_ * auVar57._0_8_;
        auVar40._24_8_ = auVar38._8_8_ * auVar57._8_8_;
        auVar28 = vpermpd_avx2(auVar40,0x4e);
        auVar41._0_8_ = auVar40._0_8_ + auVar28._0_8_;
        auVar41._8_8_ = auVar40._8_8_ + auVar28._8_8_;
        auVar41._16_8_ = auVar40._16_8_ + auVar28._16_8_;
        auVar41._24_8_ = auVar40._24_8_ + auVar28._24_8_;
        auVar28 = vpermpd_avx2(auVar41,0x39);
        auVar42._0_8_ = auVar41._0_8_ + auVar28._0_8_;
        auVar42._8_8_ = auVar41._8_8_ + auVar28._8_8_;
        auVar42._16_8_ = auVar41._16_8_ + auVar28._16_8_;
        auVar42._24_8_ = auVar41._24_8_ + auVar28._24_8_;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = dVar34;
        auVar45 = vunpcklpd_avx(auVar20,auVar77._0_16_);
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar3;
        auVar58._8_8_ = 0;
        auVar58._0_8_ = dVar33;
        auVar69 = vunpcklpd_avx(auVar58,auVar19);
        auVar56._16_16_ = auVar45;
        auVar56._0_16_ = auVar69;
        auVar15 = vmovlhps_avx(auVar79,auVar27);
        auVar16 = vmovlhps_avx(auVar63,auVar71);
        auVar28._16_16_ = auVar15;
        auVar28._0_16_ = auVar16;
        dVar60 = (double)fVar74;
        auVar28 = vsubpd_avx(auVar28,auVar56);
        auVar72._0_8_ = dVar60 * auVar28._0_8_ + auVar69._0_8_;
        auVar72._8_8_ = dVar60 * auVar28._8_8_ + auVar69._8_8_;
        auVar73._16_8_ = dVar60 * auVar28._16_8_ + auVar45._0_8_;
        auVar73._0_16_ = auVar72;
        auVar73._24_8_ = dVar60 * auVar28._24_8_ + auVar45._8_8_;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = dVar26;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar2;
        auVar15 = vunpcklpd_avx(auVar21,auVar15);
        auVar28 = vcmppd_avx(ZEXT832(0) << 0x20,auVar42,2);
        auVar28 = vpshufb_avx2(auVar28,
                               ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000
                              );
        auVar28 = vblendvps_avx(ZEXT832(0) << 0x20,
                                ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                ,auVar28);
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar1;
        auVar55._8_8_ = 0;
        auVar55._0_8_ = dVar44;
        auVar45 = vunpcklpd_avx(auVar55,auVar16);
        auVar29._16_16_ = auVar15;
        auVar29._0_16_ = auVar45;
        auVar49 = vunpcklpd_avx(auVar49,auVar52);
        auVar16 = vshufpd_avx(auVar73._16_16_,auVar73._16_16_,1);
        auVar18._8_8_ = 0;
        auVar18._0_8_ = dVar35;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar8;
        auVar52 = vunpcklpd_avx(auVar18,auVar17);
        auVar27 = vshufpd_avx(auVar72,auVar72,1);
        auVar50._16_16_ = auVar49;
        auVar50._0_16_ = auVar52;
        auVar29 = vsubpd_avx(auVar50,auVar29);
        auVar53._0_8_ = dVar60 * auVar29._0_8_ + auVar45._0_8_;
        auVar53._8_8_ = dVar60 * auVar29._8_8_ + auVar45._8_8_;
        auVar54._16_8_ = dVar60 * auVar29._16_8_ + auVar15._0_8_;
        auVar54._0_16_ = auVar53;
        auVar54._24_8_ = dVar60 * auVar29._24_8_ + auVar15._8_8_;
        auVar29 = vsubpd_avx(ZEXT832(0) << 0x20,auVar67);
        auVar30._0_4_ = ~auVar28._0_4_ & auVar29._0_4_;
        auVar30._4_4_ = ~auVar28._4_4_ & auVar29._4_4_;
        auVar30._8_4_ = ~auVar28._8_4_ & auVar29._8_4_;
        auVar30._12_4_ = ~auVar28._12_4_ & auVar29._12_4_;
        auVar30._16_4_ = ~auVar28._16_4_ & auVar29._16_4_;
        auVar30._20_4_ = ~auVar28._20_4_ & auVar29._20_4_;
        auVar30._24_4_ = ~auVar28._24_4_ & auVar29._24_4_;
        auVar30._28_4_ = ~auVar28._28_4_ & auVar29._28_4_;
        auVar31._0_8_ = (ulonglong)auVar39._0_8_ & auVar28._0_8_;
        auVar31._8_8_ = (ulonglong)auVar39._8_8_ & auVar28._8_8_;
        auVar31._16_8_ = (ulonglong)auVar38._0_8_ & auVar28._16_8_;
        auVar31._24_8_ = (ulonglong)auVar38._8_8_ & auVar28._24_8_;
        auVar45 = vshufpd_avx(auVar54._16_16_,auVar54._16_16_,1);
        auVar31 = auVar31 | auVar30;
        auVar49 = vshufpd_avx(auVar53,auVar53,1);
        dVar44 = __real_3ff0000000000000 - dVar60;
        dVar26 = auVar66._0_8_ * dVar60 + dVar44 * auVar31._0_8_;
        dVar33 = auVar66._8_8_ * dVar60 + dVar44 * auVar31._8_8_;
        dVar34 = auVar57._0_8_ * dVar60 + dVar44 * auVar31._16_8_;
        dVar35 = auVar57._8_8_ * dVar60 + dVar44 * auVar31._24_8_;
        auVar38._0_8_ = dVar26 * dVar26 + dVar34 * dVar34;
        auVar38._8_8_ = dVar33 * dVar33 + dVar35 * dVar35;
        auVar15 = vshufpd_avx(auVar38,auVar38,1);
        dVar44 = auVar38._0_8_ + auVar15._0_8_;
        auVar39._8_8_ = 0;
        auVar39._0_8_ = dVar44;
        dVar44 = __real_3ff0000000000000 / SQRT(dVar44);
        auVar46._8_8_ = 0;
        auVar46._0_8_ = __real_3e45798ee2308c3a;
        auVar15 = vcmpsd_avx(auVar46,auVar39,6);
        uVar37 = ~auVar15._0_8_ & __real_ffffffffffffffff;
        auVar47._0_8_ = (ulonglong)(dVar26 * dVar44) & uVar37;
        auVar47._8_8_ = (ulonglong)(dVar33 * dVar44) & uVar37;
        auVar48._16_8_ = (ulonglong)(dVar34 * dVar44) & uVar37;
        auVar48._0_16_ = auVar47;
        auVar48._24_8_ = (ulonglong)(dVar35 * dVar44) & uVar37;
        auVar32._0_8_ =
             ~uVar37 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
        auVar32._8_8_ = ~uVar37 & _UNK_150b54548;
        auVar32._16_8_ = ~uVar37 & _UNK_150b54550;
        auVar32._24_8_ = ~uVar37 & _UNK_150b54558;
        auVar66 = auVar48._16_16_ | auVar32._16_16_;
        auVar15 = vshufps_avx(auVar66,auVar66,0x4e);
        auVar52 = vshufps_avx(auVar47,auVar47,0x4e);
        uVar36 = auVar49._0_8_;
        dVar75 = auVar54._16_8_;
        uVar59 = auVar52._0_8_;
        uVar64 = auVar66._0_8_;
        uVar80 = auVar15._0_8_;
        uVar25 = auVar27._0_8_;
        uVar76 = auVar16._0_8_;
        uVar43 = auVar47._0_8_;
        dVar51 = auVar53._0_8_;
        uVar62 = auVar45._0_8_;
        dVar70 = auVar72._0_8_;
        dVar78 = auVar73._16_8_;
      }
      *(ulonglong *)(param_1 + -0x58 + lVar23 * 8) = uVar43;
      *(ulonglong *)(param_1 + -0x50 + lVar23 * 8) = uVar59;
      *(ulonglong *)(param_1 + -0x48 + lVar23 * 8) = uVar64;
      *(ulonglong *)(param_1 + -0x40 + lVar23 * 8) = uVar80;
      *(double *)(param_1 + -0x38 + lVar23 * 8) = dVar51;
      *(ulonglong *)(param_1 + -0x30 + lVar23 * 8) = uVar36;
      *(double *)(param_1 + -0x28 + lVar23 * 8) = dVar75;
      *(ulonglong *)(param_1 + -0x20 + lVar23 * 8) = uVar62;
      *(double *)(param_1 + -0x18 + lVar23 * 8) = dVar70;
      *(ulonglong *)(param_1 + -0x10 + lVar23 * 8) = uVar25;
      *(double *)(param_1 + -8 + lVar23 * 8) = dVar78;
      *(ulonglong *)(param_1 + lVar23 * 8) = uVar76;
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 0xc;
    } while (param_7 != uVar24);
  }
  return;
}

// BlendCurves_avx2 @ 140ab2020

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BlendCurves_avx2(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                     uint param_5,int param_6,float param_7)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined4 uVar20;
  int iVar21;
  undefined1 (*pauVar22) [32];
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar40 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  
  auVar29 = ___ymm_0000000700000006000000050000000400000003000000020000000100000000;
  auVar27 = in_ZMM6._0_32_;
  if (param_6 == 0) {
    if ((double)(float)((uint)(param_7 + __real_bf800000) & __real_7fffffff) <=
        __real_3e45798ee2308c3a) {
      param_7 = __real_3f800000;
    }
    uVar23 = param_5 + 7;
    if (-1 < (int)param_5) {
      uVar23 = param_5;
    }
    if (0 < (int)(uVar23 & 0xfffffff8)) {
      uVar19 = 0;
      auVar33._4_4_ = __real_0000001f;
      auVar33._0_4_ = __real_0000001f;
      auVar33._8_4_ = __real_0000001f;
      auVar33._12_4_ = __real_0000001f;
      auVar33._16_4_ = __real_0000001f;
      auVar33._20_4_ = __real_0000001f;
      auVar33._24_4_ = __real_0000001f;
      auVar33._28_4_ = __real_0000001f;
      auVar37._4_4_ = __real_00000001;
      auVar37._0_4_ = __real_00000001;
      auVar37._8_4_ = __real_00000001;
      auVar37._12_4_ = __real_00000001;
      auVar37._16_4_ = __real_00000001;
      auVar37._20_4_ = __real_00000001;
      auVar37._24_4_ = __real_00000001;
      auVar37._28_4_ = __real_00000001;
      auVar27 = vpcmpeqd_avx2(auVar27,auVar27);
      uVar15 = 0;
      uVar24 = 0;
      do {
        uVar16 = (undefined4)uVar24;
        auVar42._4_4_ = uVar16;
        auVar42._0_4_ = uVar16;
        auVar42._8_4_ = uVar16;
        auVar42._12_4_ = uVar16;
        auVar42._16_4_ = uVar16;
        auVar42._20_4_ = uVar16;
        auVar42._24_4_ = uVar16;
        auVar42._28_4_ = uVar16;
        auVar42 = vpor_avx2(auVar42,auVar29);
        auVar42 = vpand_avx2(auVar42,auVar33);
        auVar42 = vpsllvd_avx2(auVar37,auVar42);
        uVar16 = *(undefined4 *)(param_2 + (ulonglong)(uVar19 & 0xffffffc));
        auVar45._4_4_ = uVar16;
        auVar45._0_4_ = uVar16;
        auVar45._8_4_ = uVar16;
        auVar45._12_4_ = uVar16;
        auVar45._16_4_ = uVar16;
        auVar45._20_4_ = uVar16;
        auVar45._24_4_ = uVar16;
        auVar45._28_4_ = uVar16;
        if ((auVar42 & auVar45) != (undefined1  [32])0x0) {
          auVar42 = vpand_avx2(auVar45,auVar42);
          auVar45 = vpcmpeqd_avx2(auVar42,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
          auVar42 = vmaskmovps_avx(auVar45 ^ auVar27,
                                   *(undefined1 (*) [32])(param_1 + (ulonglong)uVar15));
          auVar46._0_4_ = auVar42._0_4_ * param_7;
          auVar46._4_4_ = auVar42._4_4_ * param_7;
          auVar46._8_4_ = auVar42._8_4_ * param_7;
          auVar46._12_4_ = auVar42._12_4_ * param_7;
          auVar46._16_4_ = auVar42._16_4_ * param_7;
          auVar46._20_4_ = auVar42._20_4_ * param_7;
          auVar46._24_4_ = auVar42._24_4_ * param_7;
          auVar46._28_4_ = auVar42._28_4_ * param_7;
          auVar42 = vmaskmovps_avx(auVar45 ^ auVar27,auVar46);
          *(undefined1 (*) [32])(param_3 + (ulonglong)uVar15) = auVar42;
        }
        uVar24 = uVar24 + 8;
        uVar15 = uVar15 + 0x20;
        uVar19 = uVar19 + 1;
      } while (uVar24 < (uVar23 & 0xfffffff8));
      goto LAB_140ab2216;
    }
  }
  else {
    uVar23 = param_5 + 7;
    if (-1 < (int)param_5) {
      uVar23 = param_5;
    }
    uVar23 = uVar23 & 0xfffffff8;
    if (0 < (int)uVar23) {
      if (param_7 <= __real_3727c5ac) {
        uVar19 = 0;
        auVar31._4_4_ = __real_0000001f;
        auVar31._0_4_ = __real_0000001f;
        auVar31._8_4_ = __real_0000001f;
        auVar31._12_4_ = __real_0000001f;
        auVar31._16_4_ = __real_0000001f;
        auVar31._20_4_ = __real_0000001f;
        auVar31._24_4_ = __real_0000001f;
        auVar31._28_4_ = __real_0000001f;
        auVar35._4_4_ = __real_00000001;
        auVar35._0_4_ = __real_00000001;
        auVar35._8_4_ = __real_00000001;
        auVar35._12_4_ = __real_00000001;
        auVar35._16_4_ = __real_00000001;
        auVar35._20_4_ = __real_00000001;
        auVar35._24_4_ = __real_00000001;
        auVar35._28_4_ = __real_00000001;
        auVar27 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
        uVar15 = 0;
        uVar24 = 0;
        do {
          uVar16 = (undefined4)uVar24;
          auVar40._4_4_ = uVar16;
          auVar40._0_4_ = uVar16;
          auVar40._8_4_ = uVar16;
          auVar40._12_4_ = uVar16;
          auVar40._16_4_ = uVar16;
          auVar40._20_4_ = uVar16;
          auVar40._24_4_ = uVar16;
          auVar40._28_4_ = uVar16;
          auVar33 = vpor_avx2(auVar40,auVar29);
          auVar33 = vpand_avx2(auVar33,auVar31);
          auVar33 = vpsllvd_avx2(auVar35,auVar33);
          uVar16 = *(undefined4 *)(param_2 + (ulonglong)(uVar19 & 0xffffffc));
          auVar43._4_4_ = uVar16;
          auVar43._0_4_ = uVar16;
          auVar43._8_4_ = uVar16;
          auVar43._12_4_ = uVar16;
          auVar43._16_4_ = uVar16;
          auVar43._20_4_ = uVar16;
          auVar43._24_4_ = uVar16;
          auVar43._28_4_ = uVar16;
          if ((auVar33 & auVar43) != (undefined1  [32])0x0) {
            auVar33 = vpand_avx2(auVar43,auVar33);
            auVar37 = vpcmpeqd_avx2(auVar33,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
            auVar33 = vmaskmovps_avx(auVar37 ^ auVar27,
                                     *(undefined1 (*) [32])(param_3 + (ulonglong)uVar15));
            auVar33 = vmaskmovps_avx(auVar37 ^ auVar27,auVar33);
            *(undefined1 (*) [32])(param_3 + (ulonglong)uVar15) = auVar33;
          }
          uVar24 = uVar24 + 8;
          uVar15 = uVar15 + 0x20;
          uVar19 = uVar19 + 1;
        } while (uVar24 < uVar23);
      }
      else {
        uVar19 = 0;
        auVar32._4_4_ = __real_0000001f;
        auVar32._0_4_ = __real_0000001f;
        auVar32._8_4_ = __real_0000001f;
        auVar32._12_4_ = __real_0000001f;
        auVar32._16_4_ = __real_0000001f;
        auVar32._20_4_ = __real_0000001f;
        auVar32._24_4_ = __real_0000001f;
        auVar32._28_4_ = __real_0000001f;
        auVar36._4_4_ = __real_00000001;
        auVar36._0_4_ = __real_00000001;
        auVar36._8_4_ = __real_00000001;
        auVar36._12_4_ = __real_00000001;
        auVar36._16_4_ = __real_00000001;
        auVar36._20_4_ = __real_00000001;
        auVar36._24_4_ = __real_00000001;
        auVar36._28_4_ = __real_00000001;
        auVar27 = vpcmpeqd_avx2(auVar27,auVar27);
        uVar15 = 0;
        uVar24 = 0;
        do {
          uVar16 = (undefined4)uVar24;
          auVar41._4_4_ = uVar16;
          auVar41._0_4_ = uVar16;
          auVar41._8_4_ = uVar16;
          auVar41._12_4_ = uVar16;
          auVar41._16_4_ = uVar16;
          auVar41._20_4_ = uVar16;
          auVar41._24_4_ = uVar16;
          auVar41._28_4_ = uVar16;
          auVar33 = vpor_avx2(auVar41,auVar29);
          auVar33 = vpand_avx2(auVar33,auVar32);
          auVar33 = vpsllvd_avx2(auVar36,auVar33);
          uVar16 = *(undefined4 *)(param_2 + (ulonglong)(uVar19 & 0xffffffc));
          auVar44._4_4_ = uVar16;
          auVar44._0_4_ = uVar16;
          auVar44._8_4_ = uVar16;
          auVar44._12_4_ = uVar16;
          auVar44._16_4_ = uVar16;
          auVar44._20_4_ = uVar16;
          auVar44._24_4_ = uVar16;
          auVar44._28_4_ = uVar16;
          if ((auVar33 & auVar44) != (undefined1  [32])0x0) {
            auVar33 = vpand_avx2(auVar44,auVar33);
            auVar42 = vpcmpeqd_avx2(auVar33,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
            auVar42 = auVar42 ^ auVar27;
            uVar25 = (ulonglong)uVar15;
            auVar33 = vmaskmovps_avx(auVar42,*(undefined1 (*) [32])(param_3 + uVar25));
            auVar37 = vmaskmovps_avx(auVar42,*(undefined1 (*) [32])(param_1 + uVar25));
            auVar47._0_4_ = param_7 * auVar37._0_4_ + auVar33._0_4_;
            auVar47._4_4_ = param_7 * auVar37._4_4_ + auVar33._4_4_;
            auVar47._8_4_ = param_7 * auVar37._8_4_ + auVar33._8_4_;
            auVar47._12_4_ = param_7 * auVar37._12_4_ + auVar33._12_4_;
            auVar47._16_4_ = param_7 * auVar37._16_4_ + auVar33._16_4_;
            auVar47._20_4_ = param_7 * auVar37._20_4_ + auVar33._20_4_;
            auVar47._24_4_ = param_7 * auVar37._24_4_ + auVar33._24_4_;
            auVar47._28_4_ = param_7 * auVar37._28_4_ + auVar33._28_4_;
            auVar33 = vmaskmovps_avx(auVar42,auVar47);
            *(undefined1 (*) [32])(param_3 + uVar25) = auVar33;
          }
          uVar24 = uVar24 + 8;
          uVar15 = uVar15 + 0x20;
          uVar19 = uVar19 + 1;
        } while (uVar24 < uVar23);
      }
      goto LAB_140ab2216;
    }
  }
  uVar24 = 0;
LAB_140ab2216:
  iVar21 = (int)uVar24;
  if (iVar21 < (int)param_5) {
    auVar29._4_4_ = iVar21;
    auVar29._0_4_ = iVar21;
    auVar29._8_4_ = iVar21;
    auVar29._12_4_ = iVar21;
    auVar29._16_4_ = iVar21;
    auVar29._20_4_ = iVar21;
    auVar29._24_4_ = iVar21;
    auVar29._28_4_ = iVar21;
    auVar33 = vpor_avx2(auVar29,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar34._4_4_ = __real_0000001f;
    auVar34._0_4_ = __real_0000001f;
    auVar34._8_4_ = __real_0000001f;
    auVar34._12_4_ = __real_0000001f;
    auVar34._16_4_ = __real_0000001f;
    auVar34._20_4_ = __real_0000001f;
    auVar34._24_4_ = __real_0000001f;
    auVar34._28_4_ = __real_0000001f;
    auVar29 = vpand_avx2(auVar33,auVar34);
    auVar38._4_4_ = __real_00000001;
    auVar38._0_4_ = __real_00000001;
    auVar38._8_4_ = __real_00000001;
    auVar38._12_4_ = __real_00000001;
    auVar38._16_4_ = __real_00000001;
    auVar38._20_4_ = __real_00000001;
    auVar38._24_4_ = __real_00000001;
    auVar38._28_4_ = __real_00000001;
    auVar29 = vpsllvd_avx2(auVar38,auVar29);
    auVar39._4_4_ = param_5;
    auVar39._0_4_ = param_5;
    auVar39._8_4_ = param_5;
    auVar39._12_4_ = param_5;
    auVar39._16_4_ = param_5;
    auVar39._20_4_ = param_5;
    auVar39._24_4_ = param_5;
    auVar39._28_4_ = param_5;
    uVar16 = *(undefined4 *)(param_2 + (ulonglong)((uint)(uVar24 >> 3) & 0xffffffc));
    auVar27._4_4_ = uVar16;
    auVar27._0_4_ = uVar16;
    auVar27._8_4_ = uVar16;
    auVar27._12_4_ = uVar16;
    auVar27._16_4_ = uVar16;
    auVar27._20_4_ = uVar16;
    auVar27._24_4_ = uVar16;
    auVar27._28_4_ = uVar16;
    auVar29 = vpand_avx2(auVar27,auVar29);
    auVar27 = vpcmpeqd_avx2(auVar29,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    auVar33 = vpcmpgtd_avx2(auVar39,auVar33);
    auVar29 = vpand_avx2(auVar27,auVar33);
    uVar16 = vmovmskps_avx(auVar29);
    uVar20 = vmovmskps_avx(auVar33);
    if ((char)uVar16 != (char)uVar20) {
      lVar17 = (longlong)(iVar21 << 2);
      auVar29 = vpandn_avx2(auVar27,auVar33);
      auVar6 = vpackssdw_avx(auVar29._0_16_,auVar29._16_16_);
      auVar27 = vpmovsxwd_avx2(auVar6);
      if (param_6 == 0) {
        auVar29 = vmaskmovps_avx(auVar27,*(undefined1 (*) [32])(param_1 + lVar17));
        auVar30._0_4_ = param_7 * auVar29._0_4_;
        auVar30._4_4_ = param_7 * auVar29._4_4_;
        auVar30._8_4_ = param_7 * auVar29._8_4_;
        auVar30._12_4_ = param_7 * auVar29._12_4_;
        auVar30._16_4_ = param_7 * auVar29._16_4_;
        auVar30._20_4_ = param_7 * auVar29._20_4_;
        auVar30._24_4_ = param_7 * auVar29._24_4_;
        auVar30._28_4_ = param_7 * auVar29._28_4_;
      }
      else {
        auVar29 = vmaskmovps_avx(auVar29,*(undefined1 (*) [32])(param_3 + lVar17));
        auVar30 = auVar29;
        if (__real_3727c5ac < param_7) {
          auVar33 = vmaskmovps_avx(auVar27,*(undefined1 (*) [32])(param_1 + lVar17));
          auVar30._0_4_ = auVar33._0_4_ * param_7 + auVar29._0_4_;
          auVar30._4_4_ = auVar33._4_4_ * param_7 + auVar29._4_4_;
          auVar30._8_4_ = auVar33._8_4_ * param_7 + auVar29._8_4_;
          auVar30._12_4_ = auVar33._12_4_ * param_7 + auVar29._12_4_;
          auVar30._16_4_ = auVar33._16_4_ * param_7 + auVar29._16_4_;
          auVar30._20_4_ = auVar33._20_4_ * param_7 + auVar29._20_4_;
          auVar30._24_4_ = auVar33._24_4_ * param_7 + auVar29._24_4_;
          auVar30._28_4_ = auVar33._28_4_ * param_7 + auVar29._28_4_;
        }
      }
      auVar29 = vmaskmovps_avx(auVar27,auVar30);
      *(undefined1 (*) [32])(param_3 + lVar17) = auVar29;
    }
  }
  auVar6 = vroundss_avx(ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),
                        ZEXT416((uint)((float)(int)param_5 * __real_3d000000)),10);
  uVar15 = (uint)auVar6._0_4_;
  uVar23 = uVar15 + 7;
  if (-1 < (int)uVar15) {
    uVar23 = uVar15;
  }
  uVar23 = uVar23 & 0xfffffff8;
  if ((int)uVar23 < 1) {
    iVar21 = 0;
    if ((int)uVar15 < 1) {
      return;
    }
  }
  else {
    uVar19 = 0;
    uVar24 = 0;
    if (param_6 == 0) {
      do {
        puVar4 = (undefined8 *)(param_2 + (ulonglong)uVar19);
        uVar12 = puVar4[1];
        uVar13 = puVar4[2];
        uVar14 = puVar4[3];
        puVar5 = (undefined8 *)(param_4 + (ulonglong)uVar19);
        *puVar5 = *puVar4;
        puVar5[1] = uVar12;
        puVar5[2] = uVar13;
        puVar5[3] = uVar14;
        uVar24 = uVar24 + 8;
        uVar19 = uVar19 + 0x20;
      } while (uVar24 < uVar23);
    }
    else {
      do {
        uVar18 = (ulonglong)uVar19;
        puVar1 = (ulonglong *)(param_4 + uVar18);
        uVar25 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (ulonglong *)(param_2 + uVar18);
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar3 = (ulonglong *)(param_4 + uVar18);
        *puVar3 = *puVar1 | *puVar2;
        puVar3[1] = uVar25 | uVar9;
        puVar3[2] = uVar7 | uVar10;
        puVar3[3] = uVar8 | uVar11;
        uVar24 = uVar24 + 8;
        uVar19 = uVar19 + 0x20;
      } while (uVar24 < uVar23);
    }
    iVar21 = (int)uVar24;
    if ((int)uVar15 <= iVar21) {
      return;
    }
  }
  auVar26._4_4_ = iVar21;
  auVar26._0_4_ = iVar21;
  auVar26._8_4_ = iVar21;
  auVar26._12_4_ = iVar21;
  auVar26._16_4_ = iVar21;
  auVar26._20_4_ = iVar21;
  auVar26._24_4_ = iVar21;
  auVar26._28_4_ = iVar21;
  auVar29 = vpor_avx2(auVar26,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  pauVar22 = (undefined1 (*) [32])(param_4 + iVar21 * 4);
  auVar28._4_4_ = uVar15;
  auVar28._0_4_ = uVar15;
  auVar28._8_4_ = uVar15;
  auVar28._12_4_ = uVar15;
  auVar28._16_4_ = uVar15;
  auVar28._20_4_ = uVar15;
  auVar28._24_4_ = uVar15;
  auVar28._28_4_ = uVar15;
  auVar27 = vpcmpgtd_avx2(auVar28,auVar29);
  auVar29 = vmaskmovps_avx(auVar27,*(undefined1 (*) [32])(param_2 + iVar21 * 4));
  if (param_6 != 0) {
    auVar33 = vmaskmovps_avx(auVar27,*pauVar22);
    auVar29 = auVar33 | auVar29;
  }
  auVar29 = vmaskmovps_avx(auVar27,auVar29);
  *pauVar22 = auVar29;
  return;
}

// LerpBoneTransforms_avx2 @ 140ab2490

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void LerpBoneTransforms_avx2
               (longlong param_1,longlong param_2,float param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 (*pauVar5) [24];
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [32];
  undefined1 auVar9 [24];
  undefined1 auVar10 [24];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [32];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  double dVar34;
  double dVar40;
  double dVar41;
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  double dVar42;
  undefined1 auVar39 [32];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  double dVar55;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  double dVar53;
  double dVar54;
  undefined1 in_ZMM4 [64];
  undefined1 auVar56 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar57 [32];
  undefined1 auVar58 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  ulonglong uVar69;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar59 [32];
  
  auVar8 = _DAT_151c6b060;
  auVar20 = _DAT_151c6b040;
  uVar28 = _UNK_150b5455c;
  uVar27 = _UNK_150b54558;
  uVar26 = _UNK_150b54554;
  uVar25 = _UNK_150b54550;
  uVar24 = _UNK_150b5454c;
  uVar23 = _UNK_150b54548;
  uVar22 = _UNK_150b54544;
  uVar21 = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar52 = in_ZMM4._0_32_;
  fVar7 = __real_3f800000 - param_3;
  uVar29 = param_5 & 0xfffffff8;
  if (0 < (int)uVar29) {
    dVar43 = (double)fVar7;
    dVar45 = (double)param_3;
    lVar30 = param_1 + 0x20;
    lVar1 = param_1 + 0x40;
    uVar32 = 0;
    auVar44 = ZEXT816(0);
    auVar59 = vpcmpeqd_avx2(in_ZMM7._0_32_,in_ZMM7._0_32_);
    auVar57._8_8_ = __real_3ff0000000000000;
    auVar57._0_8_ = __real_3ff0000000000000;
    auVar57._16_8_ = __real_3ff0000000000000;
    auVar57._24_8_ = __real_3ff0000000000000;
    do {
      uVar33 = (ulonglong)((uint)*(ushort *)(param_4 + uVar32 * 2) * 0x60);
      uVar31 = (ulonglong)((uint)*(ushort *)(param_4 + 2 + uVar32 * 2) * 0x60);
      pdVar2 = (double *)(param_1 + uVar31);
      pdVar3 = (double *)(param_1 + uVar33);
      pdVar4 = (double *)(param_2 + uVar31);
      auVar76._0_8_ = dVar45 * *pdVar4;
      auVar76._8_8_ = dVar45 * pdVar4[1];
      auVar76._16_8_ = dVar45 * pdVar4[2];
      auVar76._24_8_ = dVar45 * pdVar4[3];
      pdVar4 = (double *)(param_2 + uVar33);
      auVar79._0_8_ = dVar45 * *pdVar4;
      auVar79._8_8_ = dVar45 * pdVar4[1];
      auVar79._16_8_ = dVar45 * pdVar4[2];
      auVar79._24_8_ = dVar45 * pdVar4[3];
      auVar80._0_8_ = dVar43 * *pdVar3 * auVar79._0_8_;
      auVar80._8_8_ = dVar43 * pdVar3[1] * auVar79._8_8_;
      auVar80._16_8_ = dVar43 * pdVar3[2] * auVar79._16_8_;
      auVar80._24_8_ = dVar43 * pdVar3[3] * auVar79._24_8_;
      auVar81._0_8_ = dVar43 * *pdVar2 * auVar76._0_8_;
      auVar81._8_8_ = dVar43 * pdVar2[1] * auVar76._8_8_;
      auVar81._16_8_ = dVar43 * pdVar2[2] * auVar76._16_8_;
      auVar81._24_8_ = dVar43 * pdVar2[3] * auVar76._24_8_;
      auVar52 = vpermpd_avx2(auVar81,0x4e);
      auVar36 = vpermpd_avx2(auVar80,0x4e);
      auVar47._0_8_ = auVar80._0_8_ + auVar36._0_8_;
      auVar47._8_8_ = auVar80._8_8_ + auVar36._8_8_;
      auVar47._16_8_ = auVar80._16_8_ + auVar36._16_8_;
      auVar47._24_8_ = auVar80._24_8_ + auVar36._24_8_;
      auVar35._0_8_ = auVar81._0_8_ + auVar52._0_8_;
      auVar35._8_8_ = auVar81._8_8_ + auVar52._8_8_;
      auVar35._16_8_ = auVar81._16_8_ + auVar52._16_8_;
      auVar35._24_8_ = auVar81._24_8_ + auVar52._24_8_;
      auVar52 = vpermpd_avx2(auVar35,0x39);
      auVar36 = vpermpd_avx2(auVar47,0x39);
      auVar48._0_8_ = auVar36._0_8_ + auVar47._0_8_;
      auVar48._8_8_ = auVar36._8_8_ + auVar47._8_8_;
      auVar48._16_8_ = auVar36._16_8_ + auVar47._16_8_;
      auVar48._24_8_ = auVar36._24_8_ + auVar47._24_8_;
      auVar36._0_8_ = auVar52._0_8_ + auVar35._0_8_;
      auVar36._8_8_ = auVar52._8_8_ + auVar35._8_8_;
      auVar36._16_8_ = auVar52._16_8_ + auVar35._16_8_;
      auVar36._24_8_ = auVar52._24_8_ + auVar35._24_8_;
      auVar52 = vcmppd_avx(ZEXT1632(auVar44),auVar36,2);
      auVar36 = vcmppd_avx(ZEXT1632(auVar44),auVar48,2);
      auVar36 = vpackssdw_avx2(auVar36,auVar52);
      auVar52 = vpshufd_avx2(auVar36,0x50);
      auVar37 = ZEXT1632(auVar44);
      auVar52 = vblendvps_avx(auVar37,auVar59,auVar52);
      auVar36 = vpshufd_avx2(auVar36,0xfa);
      auVar36 = vblendvps_avx(auVar37,auVar59,auVar36);
      auVar35 = vsubpd_avx(auVar37,auVar76);
      auVar37 = vsubpd_avx(auVar37,auVar79);
      auVar50._0_4_ = ~auVar52._0_4_ & auVar37._0_4_;
      auVar50._4_4_ = ~auVar52._4_4_ & auVar37._4_4_;
      auVar50._8_4_ = ~auVar52._8_4_ & auVar37._8_4_;
      auVar50._12_4_ = ~auVar52._12_4_ & auVar37._12_4_;
      auVar50._16_4_ = ~auVar52._16_4_ & auVar37._16_4_;
      auVar50._20_4_ = ~auVar52._20_4_ & auVar37._20_4_;
      auVar50._24_4_ = ~auVar52._24_4_ & auVar37._24_4_;
      auVar50._28_4_ = ~auVar52._28_4_ & auVar37._28_4_;
      auVar49._0_8_ = (ulonglong)auVar79._0_8_ & auVar52._0_8_;
      auVar49._8_8_ = (ulonglong)auVar79._8_8_ & auVar52._8_8_;
      auVar49._16_8_ = (ulonglong)auVar79._16_8_ & auVar52._16_8_;
      auVar49._24_8_ = (ulonglong)auVar79._24_8_ & auVar52._24_8_;
      auVar38._0_4_ = ~auVar36._0_4_ & auVar35._0_4_;
      auVar38._4_4_ = ~auVar36._4_4_ & auVar35._4_4_;
      auVar38._8_4_ = ~auVar36._8_4_ & auVar35._8_4_;
      auVar38._12_4_ = ~auVar36._12_4_ & auVar35._12_4_;
      auVar38._16_4_ = ~auVar36._16_4_ & auVar35._16_4_;
      auVar38._20_4_ = ~auVar36._20_4_ & auVar35._20_4_;
      auVar38._24_4_ = ~auVar36._24_4_ & auVar35._24_4_;
      auVar38._28_4_ = ~auVar36._28_4_ & auVar35._28_4_;
      auVar37._0_8_ = (ulonglong)auVar76._0_8_ & auVar36._0_8_;
      auVar37._8_8_ = (ulonglong)auVar76._8_8_ & auVar36._8_8_;
      auVar37._16_8_ = (ulonglong)auVar76._16_8_ & auVar36._16_8_;
      auVar37._24_8_ = (ulonglong)auVar76._24_8_ & auVar36._24_8_;
      auVar50 = auVar50 | auVar49;
      auVar38 = auVar38 | auVar37;
      dVar34 = dVar43 * *pdVar2 + auVar38._0_8_;
      dVar40 = dVar43 * pdVar2[1] + auVar38._8_8_;
      dVar41 = dVar43 * pdVar2[2] + auVar38._16_8_;
      dVar42 = dVar43 * pdVar2[3] + auVar38._24_8_;
      dVar46 = dVar43 * *pdVar3 + auVar50._0_8_;
      dVar53 = dVar43 * pdVar3[1] + auVar50._8_8_;
      dVar54 = dVar43 * pdVar3[2] + auVar50._16_8_;
      dVar55 = dVar43 * pdVar3[3] + auVar50._24_8_;
      auVar62._0_8_ = dVar46 * dVar46;
      auVar62._8_8_ = dVar53 * dVar53;
      auVar62._16_8_ = dVar54 * dVar54;
      auVar62._24_8_ = dVar55 * dVar55;
      auVar70._0_8_ = dVar34 * dVar34;
      auVar70._8_8_ = dVar40 * dVar40;
      auVar70._16_8_ = dVar41 * dVar41;
      auVar70._24_8_ = dVar42 * dVar42;
      auVar52 = vpermpd_avx2(auVar70,0x4e);
      auVar36 = vpermpd_avx2(auVar62,0x4e);
      auVar63._0_8_ = auVar62._0_8_ + auVar36._0_8_;
      auVar63._8_8_ = auVar62._8_8_ + auVar36._8_8_;
      auVar63._16_8_ = auVar62._16_8_ + auVar36._16_8_;
      auVar63._24_8_ = auVar62._24_8_ + auVar36._24_8_;
      auVar71._0_8_ = auVar70._0_8_ + auVar52._0_8_;
      auVar71._8_8_ = auVar70._8_8_ + auVar52._8_8_;
      auVar71._16_8_ = auVar70._16_8_ + auVar52._16_8_;
      auVar71._24_8_ = auVar70._24_8_ + auVar52._24_8_;
      auVar52 = vpermpd_avx2(auVar71,0x39);
      auVar36 = vpermpd_avx2(auVar63,0x39);
      auVar64._0_8_ = auVar63._0_8_ + auVar36._0_8_;
      auVar64._8_8_ = auVar63._8_8_ + auVar36._8_8_;
      auVar64._16_8_ = auVar63._16_8_ + auVar36._16_8_;
      auVar64._24_8_ = auVar63._24_8_ + auVar36._24_8_;
      auVar72._0_8_ = auVar71._0_8_ + auVar52._0_8_;
      auVar72._8_8_ = auVar71._8_8_ + auVar52._8_8_;
      auVar72._16_8_ = auVar71._16_8_ + auVar52._16_8_;
      auVar72._24_8_ = auVar71._24_8_ + auVar52._24_8_;
      auVar37 = vsqrtpd_avx(auVar64);
      auVar35 = vsqrtpd_avx(auVar72);
      auVar52 = vcmppd_avx(auVar8,auVar72,2);
      auVar36 = vcmppd_avx(auVar20,auVar64,2);
      auVar35 = vdivpd_avx(auVar57,auVar35);
      auVar37 = vdivpd_avx(auVar57,auVar37);
      auVar52 = vpackssdw_avx2(auVar36,auVar52);
      auVar36 = vpshufd_avx2(auVar52,0x50);
      auVar38 = vpshufd_avx2(auVar52,0xfa);
      auVar52 = vblendvps_avx(ZEXT1632(auVar44),auVar59,auVar36);
      auVar36 = vblendvps_avx(ZEXT1632(auVar44),auVar59,auVar38);
      auVar77._0_4_ = ~auVar36._0_4_ & uVar21;
      auVar77._4_4_ = ~auVar36._4_4_ & uVar22;
      auVar77._8_4_ = ~auVar36._8_4_ & uVar23;
      auVar77._12_4_ = ~auVar36._12_4_ & uVar24;
      auVar77._16_4_ = ~auVar36._16_4_ & uVar25;
      auVar77._20_4_ = ~auVar36._20_4_ & uVar26;
      auVar77._24_4_ = ~auVar36._24_4_ & uVar27;
      auVar77._28_4_ = ~auVar36._28_4_ & uVar28;
      auVar39._0_8_ = auVar36._0_8_ & (ulonglong)(auVar35._0_8_ * dVar34);
      auVar39._8_8_ = auVar36._8_8_ & (ulonglong)(auVar35._8_8_ * dVar40);
      auVar39._16_8_ = auVar36._16_8_ & (ulonglong)(auVar35._16_8_ * dVar41);
      auVar39._24_8_ = auVar36._24_8_ & (ulonglong)(auVar35._24_8_ * dVar42);
      auVar65._0_4_ = ~auVar52._0_4_ & uVar21;
      auVar65._4_4_ = ~auVar52._4_4_ & uVar22;
      auVar65._8_4_ = ~auVar52._8_4_ & uVar23;
      auVar65._12_4_ = ~auVar52._12_4_ & uVar24;
      auVar65._16_4_ = ~auVar52._16_4_ & uVar25;
      auVar65._20_4_ = ~auVar52._20_4_ & uVar26;
      auVar65._24_4_ = ~auVar52._24_4_ & uVar27;
      auVar65._28_4_ = ~auVar52._28_4_ & uVar28;
      auVar51._0_8_ = auVar52._0_8_ & (ulonglong)(auVar37._0_8_ * dVar46);
      auVar51._8_8_ = auVar52._8_8_ & (ulonglong)(auVar37._8_8_ * dVar53);
      auVar51._16_8_ = auVar52._16_8_ & (ulonglong)(auVar37._16_8_ * dVar54);
      auVar51._24_8_ = auVar52._24_8_ & (ulonglong)(auVar37._24_8_ * dVar55);
      *(undefined1 (*) [32])(param_1 + uVar33) = auVar65 | auVar51;
      pdVar2 = (double *)(param_2 + 0x20 + uVar33);
      dVar42 = *pdVar2;
      dVar46 = pdVar2[1];
      dVar53 = pdVar2[2];
      dVar54 = pdVar2[3];
      *(undefined1 (*) [32])(param_1 + uVar31) = auVar77 | auVar39;
      pdVar2 = (double *)(param_2 + 0x20 + uVar31);
      dVar55 = *pdVar2;
      dVar11 = pdVar2[1];
      dVar12 = pdVar2[2];
      dVar13 = pdVar2[3];
      pauVar5 = (undefined1 (*) [24])(lVar30 + uVar31);
      dVar34 = *(double *)*pauVar5;
      dVar17 = *(double *)(*pauVar5 + 8);
      auVar9 = *pauVar5;
      dVar40 = *(double *)pauVar5[1];
      pauVar5 = (undefined1 (*) [24])(lVar30 + uVar33);
      dVar14 = *(double *)(*pauVar5 + 8);
      auVar10 = *pauVar5;
      dVar41 = *(double *)pauVar5[1];
      *(double *)(lVar30 + uVar33) = dVar43 * *(double *)*pauVar5 + dVar45 * dVar42;
      ((double *)(lVar30 + uVar33))[1] = dVar43 * dVar14 + dVar45 * dVar46;
      pdVar2 = (double *)(param_2 + 0x40 + uVar33);
      dVar42 = *pdVar2;
      dVar46 = pdVar2[1];
      dVar14 = pdVar2[2];
      dVar15 = pdVar2[3];
      pdVar2 = (double *)(param_1 + 0x30 + uVar33);
      *pdVar2 = dVar43 * auVar10._16_8_ + dVar45 * dVar53;
      pdVar2[1] = dVar43 * dVar41 + dVar45 * dVar54;
      pdVar2 = (double *)(param_2 + 0x40 + uVar31);
      dVar41 = *pdVar2;
      dVar53 = pdVar2[1];
      dVar54 = pdVar2[2];
      dVar16 = pdVar2[3];
      pdVar2 = (double *)(lVar30 + uVar31);
      *pdVar2 = dVar43 * dVar34 + dVar45 * dVar55;
      pdVar2[1] = dVar43 * dVar17 + dVar45 * dVar11;
      pdVar2[2] = dVar43 * auVar9._16_8_ + dVar45 * dVar12;
      pdVar2[3] = dVar43 * dVar40 + dVar45 * dVar13;
      pauVar5 = (undefined1 (*) [24])(lVar1 + uVar31);
      auVar52._0_8_ = dVar43 * *(double *)*pauVar5 + dVar45 * dVar41;
      auVar52._8_8_ = dVar43 * *(double *)(*pauVar5 + 8) + dVar45 * dVar53;
      auVar52._16_8_ = dVar43 * SUB248(*pauVar5,0x10) + dVar45 * dVar54;
      auVar52._24_8_ = dVar43 * *(double *)pauVar5[1] + dVar45 * dVar16;
      pauVar5 = (undefined1 (*) [24])(lVar1 + uVar33);
      dVar40 = *(double *)(*pauVar5 + 8);
      auVar9 = *pauVar5;
      dVar34 = *(double *)pauVar5[1];
      *(double *)(lVar1 + uVar33) = dVar43 * *(double *)*pauVar5 + dVar45 * dVar42;
      ((double *)(lVar1 + uVar33))[1] = dVar43 * dVar40 + dVar45 * dVar46;
      pdVar2 = (double *)(param_1 + 0x50 + uVar33);
      *pdVar2 = dVar43 * auVar9._16_8_ + dVar45 * dVar14;
      pdVar2[1] = dVar43 * dVar34 + dVar45 * dVar15;
      *(undefined1 (*) [32])(lVar1 + uVar31) = auVar52;
      uVar32 = uVar32 + 2;
    } while (uVar32 < uVar29);
  }
  uVar32 = __real_ffffffffffffffff;
  auVar20 = ___ymm_1d0000001d00000015000000150000000d0000000d0000000500000005000000;
  dVar43 = __real_3ff0000000000000;
  if ((int)uVar29 < (int)param_5) {
    dVar45 = (double)fVar7;
    dVar34 = (double)param_3;
    lVar30 = (longlong)(int)uVar29;
    auVar44._0_12_ = ZEXT812(0);
    auVar44._12_4_ = 0;
    auVar8 = vpcmpeqd_avx2(auVar52,auVar52);
    auVar56._8_8_ = 0;
    auVar56._0_8_ = __real_3e45798ee2308c3a;
    uVar31 = CONCAT44(_UNK_150b54544,
                      ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    uVar33 = CONCAT44(_UNK_150b5454c,_UNK_150b54548);
    uVar18 = CONCAT44(_UNK_150b54554,_UNK_150b54550);
    uVar19 = CONCAT44(_UNK_150b5455c,_UNK_150b54558);
    do {
      lVar1 = (ulonglong)*(ushort *)(param_4 + lVar30 * 2) * 0x60;
      pdVar2 = (double *)(param_1 + lVar1);
      pdVar3 = (double *)(param_2 + lVar1);
      auVar66._0_8_ = dVar34 * *pdVar3;
      auVar66._8_8_ = dVar34 * pdVar3[1];
      auVar66._16_8_ = dVar34 * pdVar3[2];
      auVar66._24_8_ = dVar34 * pdVar3[3];
      auVar73._0_8_ = dVar45 * *pdVar2 * auVar66._0_8_;
      auVar73._8_8_ = dVar45 * pdVar2[1] * auVar66._8_8_;
      auVar73._16_8_ = dVar45 * pdVar2[2] * auVar66._16_8_;
      auVar73._24_8_ = dVar45 * pdVar2[3] * auVar66._24_8_;
      auVar52 = vpermpd_avx2(auVar73,0x4e);
      auVar74._0_8_ = auVar73._0_8_ + auVar52._0_8_;
      auVar74._8_8_ = auVar73._8_8_ + auVar52._8_8_;
      auVar74._16_8_ = auVar73._16_8_ + auVar52._16_8_;
      auVar74._24_8_ = auVar73._24_8_ + auVar52._24_8_;
      auVar52 = vpermpd_avx2(auVar74,0x39);
      auVar75._0_8_ = auVar74._0_8_ + auVar52._0_8_;
      auVar75._8_8_ = auVar74._8_8_ + auVar52._8_8_;
      auVar75._16_8_ = auVar74._16_8_ + auVar52._16_8_;
      auVar75._24_8_ = auVar74._24_8_ + auVar52._24_8_;
      auVar52 = vcmppd_avx(ZEXT1632(auVar44),auVar75,2);
      auVar52 = vpshufb_avx2(auVar52,auVar20);
      auVar52 = vblendvps_avx(ZEXT1632(auVar44),auVar8,auVar52);
      auVar59 = vsubpd_avx(ZEXT1632(auVar44),auVar66);
      auVar78._0_4_ = ~auVar52._0_4_ & auVar59._0_4_;
      auVar78._4_4_ = ~auVar52._4_4_ & auVar59._4_4_;
      auVar78._8_4_ = ~auVar52._8_4_ & auVar59._8_4_;
      auVar78._12_4_ = ~auVar52._12_4_ & auVar59._12_4_;
      auVar78._16_4_ = ~auVar52._16_4_ & auVar59._16_4_;
      auVar78._20_4_ = ~auVar52._20_4_ & auVar59._20_4_;
      auVar78._24_4_ = ~auVar52._24_4_ & auVar59._24_4_;
      auVar78._28_4_ = ~auVar52._28_4_ & auVar59._28_4_;
      auVar67._0_8_ = (ulonglong)auVar66._0_8_ & auVar52._0_8_;
      auVar67._8_8_ = (ulonglong)auVar66._8_8_ & auVar52._8_8_;
      auVar67._16_8_ = (ulonglong)auVar66._16_8_ & auVar52._16_8_;
      auVar67._24_8_ = (ulonglong)auVar66._24_8_ & auVar52._24_8_;
      auVar67 = auVar67 | auVar78;
      dVar41 = dVar45 * *pdVar2 + auVar67._0_8_;
      dVar42 = dVar45 * pdVar2[1] + auVar67._8_8_;
      dVar46 = dVar45 * pdVar2[2] + auVar67._16_8_;
      dVar53 = dVar45 * pdVar2[3] + auVar67._24_8_;
      auVar61._0_8_ = dVar41 * dVar41 + dVar46 * dVar46;
      auVar61._8_8_ = dVar42 * dVar42 + dVar53 * dVar53;
      auVar58 = vshufpd_avx(auVar61,auVar61,1);
      dVar40 = auVar61._0_8_ + auVar58._0_8_;
      auVar60._8_8_ = 0;
      auVar60._0_8_ = dVar40;
      auVar58 = vcmpsd_avx(auVar56,auVar60,6);
      dVar40 = dVar43 / SQRT(dVar40);
      uVar69 = ~auVar58._0_8_ & uVar32;
      auVar58._0_8_ = (ulonglong)(dVar41 * dVar40) & uVar69;
      auVar58._8_8_ = (ulonglong)(dVar42 * dVar40) & uVar69;
      auVar59._16_8_ = (ulonglong)(dVar46 * dVar40) & uVar69;
      auVar59._0_16_ = auVar58;
      auVar59._24_8_ = (ulonglong)(dVar53 * dVar40) & uVar69;
      auVar68._0_8_ = ~uVar69 & uVar31;
      auVar68._8_8_ = ~uVar69 & uVar33;
      auVar68._16_8_ = ~uVar69 & uVar18;
      auVar68._24_8_ = ~uVar69 & uVar19;
      auVar52 = vpermpd_avx2(auVar59,0xe9);
      auVar61 = auVar59._16_16_ | auVar68._16_16_;
      uVar6 = vmovlpd_avx(auVar58);
      *(undefined8 *)(param_1 + lVar1) = uVar6;
      auVar58 = vshufps_avx(auVar61,auVar61,0x4e);
      *(undefined1 (*) [16])(param_1 + 8 + lVar1) = auVar52._0_16_;
      uVar6 = vmovlpd_avx(auVar58);
      *(undefined8 *)(param_1 + 0x18 + lVar1) = uVar6;
      pdVar2 = (double *)(param_2 + 0x20 + lVar1);
      dVar41 = pdVar2[1];
      dVar42 = pdVar2[2];
      dVar46 = pdVar2[3];
      pauVar5 = (undefined1 (*) [24])(param_1 + 0x20 + lVar1);
      dVar53 = *(double *)(*pauVar5 + 8);
      auVar9 = *pauVar5;
      dVar40 = *(double *)pauVar5[1];
      pdVar3 = (double *)(param_1 + 0x20 + lVar1);
      *pdVar3 = dVar45 * *(double *)*pauVar5 + dVar34 * *pdVar2;
      pdVar3[1] = dVar45 * dVar53 + dVar34 * dVar41;
      pdVar2 = (double *)(param_1 + 0x30 + lVar1);
      *pdVar2 = dVar45 * auVar9._16_8_ + dVar34 * dVar42;
      pdVar2[1] = dVar45 * dVar40 + dVar34 * dVar46;
      pdVar2 = (double *)(param_2 + 0x40 + lVar1);
      dVar41 = pdVar2[1];
      dVar42 = pdVar2[2];
      dVar46 = pdVar2[3];
      pauVar5 = (undefined1 (*) [24])(param_1 + 0x40 + lVar1);
      dVar53 = *(double *)(*pauVar5 + 8);
      auVar9 = *pauVar5;
      dVar40 = *(double *)pauVar5[1];
      pdVar3 = (double *)(param_1 + 0x40 + lVar1);
      *pdVar3 = dVar45 * *(double *)*pauVar5 + dVar34 * *pdVar2;
      pdVar3[1] = dVar45 * dVar53 + dVar34 * dVar41;
      pdVar3[2] = dVar45 * auVar9._16_8_ + dVar34 * dVar42;
      pdVar3[3] = dVar45 * dVar40 + dVar34 * dVar46;
      lVar30 = lVar30 + 1;
    } while ((int)param_5 != lVar30);
  }
  return;
}

