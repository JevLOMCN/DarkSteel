// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// ApplyLongRangeConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_CunfCunfCuniCuni_avx2 @ 1402e5240

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_CunfCunfCuniCuni_avx2
               (longlong param_1,undefined1 (*param_2) [32],float param_3,undefined8 param_4,
               uint param_5,int param_6,undefined1 (*param_7) [32])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 (*pauVar7) [32];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar35 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  uint uVar40;
  int iVar41;
  undefined1 auVar42 [32];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  undefined1 in_ZMM3 [64];
  float fVar50;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  float fVar59;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar60 [32];
  float fVar69;
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [32];
  undefined1 auVar75 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [8];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 auVar32 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  
  uVar11 = __real_0000000c;
  uVar10 = __real_00000008;
  uVar9 = __real_00000004;
  uVar8 = __real_3f800000;
  uVar3 = __real_38d1b717;
  auVar51 = *param_7;
  auVar30._4_4_ = param_5;
  auVar30._0_4_ = param_5;
  auVar30._8_4_ = param_5;
  auVar30._12_4_ = param_5;
  auVar30._16_4_ = param_5;
  auVar30._20_4_ = param_5;
  auVar30._24_4_ = param_5;
  auVar30._28_4_ = param_5;
  auVar34 = vpcmpgtd_avx2(auVar30,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar33 = auVar51 & auVar34;
  if ((((((((SUB321(auVar33 >> 0x1f,0) & 1) != 0 || (SUB321(auVar33 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar33 >> 0x5f,0) & 1) != 0) || SUB321(auVar33 >> 0x7f,0) != '\0') ||
        (SUB321(auVar33 >> 0x9f,0) & 1) != 0) || SUB321(auVar33 >> 0xbf,0) != '\0') ||
      (SUB321(auVar33 >> 0xdf,0) & 1) != 0) || auVar33[0x1f] < '\0') {
    auVar33._0_4_ = auVar34._0_4_ & auVar51._0_4_;
    auVar33._4_4_ = auVar34._4_4_ & auVar51._4_4_;
    auVar33._8_4_ = auVar34._8_4_ & auVar51._8_4_;
    auVar33._12_4_ = auVar34._12_4_ & auVar51._12_4_;
    auVar33._16_4_ = auVar34._16_4_ & auVar51._16_4_;
    auVar33._20_4_ = auVar34._20_4_ & auVar51._20_4_;
    auVar33._24_4_ = auVar34._24_4_ & auVar51._24_4_;
    auVar33._28_4_ = auVar34._28_4_ & auVar51._28_4_;
    auVar51 = vpcmpeqd_avx2(auVar51,auVar51);
    auVar51 = auVar51 & ~auVar33;
    if ((((((((SUB321(auVar51 >> 0x1f,0) & 1) == 0 && (SUB321(auVar51 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar51 >> 0x5f,0) & 1) == 0) && SUB321(auVar51 >> 0x7f,0) == '\0') &&
          (SUB321(auVar51 >> 0x9f,0) & 1) == 0) && SUB321(auVar51 >> 0xbf,0) == '\0') &&
        (SUB321(auVar51 >> 0xdf,0) & 1) == 0) && -1 < auVar51[0x1f]) {
      auVar51 = param_2[1];
      auVar33 = param_2[2];
      auVar57 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar51);
      auVar37 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *param_2);
      auVar57 = vpblendd_avx2(auVar37,auVar57,0x88);
      auVar37 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar51);
      auVar36 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            auVar33);
      auVar37 = vpblendd_avx2(auVar36,auVar37,0x13);
      auVar36._16_16_ = ZEXT116(0) * auVar57._16_16_ | ZEXT116(1) * auVar37._0_16_;
      auVar36._0_16_ = ZEXT116(0) * auVar37._0_16_ | ZEXT116(1) * auVar57._0_16_;
      auVar57 = vperm2i128_avx2(auVar57,auVar37,0x31);
      auVar51 = vpblendd_avx2(auVar51,*param_2,0x24);
      auVar51 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar51);
      auVar37._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar37._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar37 = vpermd_avx2(auVar37,auVar33);
      auVar51 = vpblendd_avx2(auVar51,auVar37,0xe0);
    }
    else {
      auVar36 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar33);
      auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar33);
      auVar51 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar33);
      auVar33 = ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    }
    in_ZMM5 = ZEXT3264(auVar33);
    in_ZMM4 = ZEXT3264(auVar51);
    local_380 = vmaskmovps_avx(auVar34,auVar36);
    local_360 = vmaskmovps_avx(auVar34,auVar57);
    _local_340 = vmaskmovps_avx(auVar34,auVar51);
  }
  uVar15 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar15 = param_5;
  }
  fVar50 = in_ZMM3._0_4_;
  if ((int)(uVar15 & 0xfffffff8) < 1) {
    iVar23 = 0;
  }
  else {
    iVar23 = 0;
    pauVar7 = param_2;
    do {
      auVar51._0_4_ = param_6 + local_380._0_4_;
      auVar51._4_4_ = param_6 + local_380._4_4_;
      auVar51._8_4_ = param_6 + local_380._8_4_;
      auVar51._12_4_ = param_6 + local_380._12_4_;
      auVar51._16_4_ = param_6 + local_380._16_4_;
      auVar51._20_4_ = param_6 + local_380._20_4_;
      auVar51._24_4_ = param_6 + local_380._24_4_;
      auVar51._28_4_ = param_6 + local_380._28_4_;
      auVar33 = vpslld_avx2(auVar51,4);
      auVar51 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar37 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar80._4_4_ = uVar9;
      auVar80._0_4_ = uVar9;
      auVar80._8_4_ = uVar9;
      auVar80._12_4_ = uVar9;
      auVar80._16_4_ = uVar9;
      auVar80._20_4_ = uVar9;
      auVar80._24_4_ = uVar9;
      auVar80._28_4_ = uVar9;
      auVar51 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar61 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
      auVar79._4_4_ = uVar10;
      auVar79._0_4_ = uVar10;
      auVar79._8_4_ = uVar10;
      auVar79._12_4_ = uVar10;
      auVar79._16_4_ = uVar10;
      auVar79._20_4_ = uVar10;
      auVar79._24_4_ = uVar10;
      auVar79._28_4_ = uVar10;
      auVar51 = vpcmpeqd_avx2(auVar33 | auVar80,auVar33 | auVar80);
      auVar52 = vgatherdps(ZEXT832(0),auVar51);
      auVar34._0_4_ = param_6 + local_360._0_4_;
      auVar34._4_4_ = param_6 + local_360._4_4_;
      auVar34._8_4_ = param_6 + local_360._8_4_;
      auVar34._12_4_ = param_6 + local_360._12_4_;
      auVar34._16_4_ = param_6 + local_360._16_4_;
      auVar34._20_4_ = param_6 + local_360._20_4_;
      auVar34._24_4_ = param_6 + local_360._24_4_;
      auVar34._28_4_ = param_6 + local_360._28_4_;
      auVar34 = vpslld_avx2(auVar34,4);
      vpor_avx2(auVar34,auVar80);
      auVar51 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      vpor_avx2(auVar34,auVar79);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar79 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar57._0_4_ =
           iVar23 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
      auVar57._4_4_ = iVar23 + _UNK_150b51904;
      auVar57._8_4_ = iVar23 + _UNK_150b51908;
      auVar57._12_4_ = iVar23 + _UNK_150b5190c;
      auVar57._16_4_ = iVar23 + _UNK_150b51910;
      auVar57._20_4_ = iVar23 + _UNK_150b51914;
      auVar57._24_4_ = iVar23 + _UNK_150b51918;
      auVar57._28_4_ = iVar23 + _UNK_150b5191c;
      auVar76._4_4_ = uVar11;
      auVar76._0_4_ = uVar11;
      auVar76._8_4_ = uVar11;
      auVar76._12_4_ = uVar11;
      auVar76._16_4_ = uVar11;
      auVar76._20_4_ = uVar11;
      auVar76._24_4_ = uVar11;
      auVar76._28_4_ = uVar11;
      auVar33 = vpor_avx2(auVar34,auVar76);
      auVar51 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar36 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
      in_ZMM3 = ZEXT3264(auVar36);
      auVar51 = vpcmpeqd_avx2(auVar33,auVar33);
      auVar33 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      uVar1 = local_340._0_4_;
      uVar12 = local_340._4_4_;
      fVar59 = fStack_338;
      fVar63 = fStack_334;
      fVar64 = fStack_330;
      fVar65 = fStack_32c;
      fVar66 = fStack_328;
      fVar67 = fStack_324;
      auVar51 = vpcmpgtd_avx2(auVar30,auVar57);
      iVar21 = vmovmskps_avx(auVar51);
      if (iVar21 != 0) {
        if ((char)iVar21 == -1) {
          auVar57 = pauVar7[3];
          auVar77 = pauVar7[4];
          auVar76 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                ,auVar77);
          auVar72 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar57);
          auVar76 = vpblendd_avx2(auVar72,auVar76,0x88);
          auVar72 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                ,auVar77);
          auVar6 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar7[5]);
          auVar6 = vpblendd_avx2(auVar6,auVar72,0x13);
          auVar72._16_16_ = ZEXT116(0) * auVar76._16_16_ | ZEXT116(1) * auVar6._0_16_;
          auVar72._0_16_ = ZEXT116(0) * auVar6._0_16_ | ZEXT116(1) * auVar76._0_16_;
          auVar76 = vperm2i128_avx2(auVar76,auVar6,0x31);
          auVar57 = vpblendd_avx2(auVar77,auVar57,0x24);
          auVar57 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar57);
          auVar77._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar77._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar77 = vpermd_avx2(auVar77,pauVar7[5]);
          auVar57 = vpblendd_avx2(auVar57,auVar77,0xe0);
        }
        else {
          auVar72 = vpgatherdd(ZEXT832(0) << 0x40,auVar51);
          auVar76 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
          auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
        }
        local_380 = vmaskmovps_avx(auVar51,auVar72);
        local_360 = vmaskmovps_avx(auVar51,auVar76);
        _local_340 = vmaskmovps_avx(auVar51,auVar57);
      }
      auVar51 = vsubps_avx(auVar37,auVar33);
      auVar57 = vsubps_avx(auVar61,auVar80);
      auVar52 = vsubps_avx(auVar52,auVar79);
      auVar60._0_4_ =
           auVar52._0_4_ * auVar52._0_4_ +
           auVar51._0_4_ * auVar51._0_4_ + auVar57._0_4_ * auVar57._0_4_;
      auVar60._4_4_ =
           auVar52._4_4_ * auVar52._4_4_ +
           auVar51._4_4_ * auVar51._4_4_ + auVar57._4_4_ * auVar57._4_4_;
      auVar60._8_4_ =
           auVar52._8_4_ * auVar52._8_4_ +
           auVar51._8_4_ * auVar51._8_4_ + auVar57._8_4_ * auVar57._8_4_;
      auVar60._12_4_ =
           auVar52._12_4_ * auVar52._12_4_ +
           auVar51._12_4_ * auVar51._12_4_ + auVar57._12_4_ * auVar57._12_4_;
      auVar60._16_4_ =
           auVar52._16_4_ * auVar52._16_4_ +
           auVar51._16_4_ * auVar51._16_4_ + auVar57._16_4_ * auVar57._16_4_;
      auVar60._20_4_ =
           auVar52._20_4_ * auVar52._20_4_ +
           auVar51._20_4_ * auVar51._20_4_ + auVar57._20_4_ * auVar57._20_4_;
      auVar60._24_4_ =
           auVar52._24_4_ * auVar52._24_4_ +
           auVar51._24_4_ * auVar51._24_4_ + auVar57._24_4_ * auVar57._24_4_;
      auVar60._28_4_ =
           auVar52._28_4_ * auVar52._28_4_ +
           auVar51._28_4_ * auVar51._28_4_ + auVar57._28_4_ * auVar57._28_4_;
      auVar37 = vsqrtps_avx(auVar60);
      auVar51 = vdivps_avx(auVar51,auVar37);
      auVar76 = vdivps_avx(auVar57,auVar37);
      auVar52 = vdivps_avx(auVar52,auVar37);
      auVar6._4_4_ = uVar3;
      auVar6._0_4_ = uVar3;
      auVar6._8_4_ = uVar3;
      auVar6._12_4_ = uVar3;
      auVar6._16_4_ = uVar3;
      auVar6._20_4_ = uVar3;
      auVar6._24_4_ = uVar3;
      auVar6._28_4_ = uVar3;
      auVar57 = vcmpps_avx(auVar37,auVar6,1);
      in_ZMM4 = ZEXT3264(auVar57);
      auVar61._4_4_ = uVar8;
      auVar61._0_4_ = uVar8;
      auVar61._8_4_ = uVar8;
      auVar61._12_4_ = uVar8;
      auVar61._16_4_ = uVar8;
      auVar61._20_4_ = uVar8;
      auVar61._24_4_ = uVar8;
      auVar61._28_4_ = uVar8;
      auVar51 = vblendvps_avx(auVar51,auVar61,auVar57);
      auVar54._0_4_ = -((float)uVar1 * fVar50) + auVar37._0_4_;
      auVar54._4_4_ = -((float)uVar12 * fVar50) + auVar37._4_4_;
      auVar54._8_4_ = -(fVar59 * fVar50) + auVar37._8_4_;
      auVar54._12_4_ = -(fVar63 * fVar50) + auVar37._12_4_;
      auVar54._16_4_ = -(fVar64 * fVar50) + auVar37._16_4_;
      auVar54._20_4_ = -(fVar65 * fVar50) + auVar37._20_4_;
      auVar54._24_4_ = -(fVar66 * fVar50) + auVar37._24_4_;
      auVar54._28_4_ = -(fVar67 * fVar50) + auVar37._28_4_;
      fVar59 = auVar54._0_4_ * param_3;
      fVar63 = auVar54._4_4_ * param_3;
      fVar64 = auVar54._8_4_ * param_3;
      fVar65 = auVar54._12_4_ * param_3;
      fVar66 = auVar54._16_4_ * param_3;
      fVar67 = auVar54._20_4_ * param_3;
      fVar68 = auVar54._24_4_ * param_3;
      fVar69 = auVar54._28_4_ * param_3;
      auVar37 = vcmpps_avx(auVar54,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      in_ZMM5 = ZEXT3264(auVar37);
      uVar40 = auVar37._0_4_;
      uVar43 = auVar37._4_4_;
      uVar44 = auVar37._8_4_;
      uVar45 = auVar37._12_4_;
      uVar46 = auVar37._16_4_;
      uVar47 = auVar37._20_4_;
      uVar48 = auVar37._24_4_;
      uVar49 = auVar37._28_4_;
      auVar70._0_4_ = auVar33._0_4_ + (float)(~uVar40 & (uint)(auVar51._0_4_ * fVar59));
      auVar70._4_4_ = auVar33._4_4_ + (float)(~uVar43 & (uint)(auVar51._4_4_ * fVar63));
      auVar70._8_4_ = auVar33._8_4_ + (float)(~uVar44 & (uint)(auVar51._8_4_ * fVar64));
      auVar70._12_4_ = auVar33._12_4_ + (float)(~uVar45 & (uint)(auVar51._12_4_ * fVar65));
      auVar73._16_4_ = auVar33._16_4_ + (float)(~uVar46 & (uint)(auVar51._16_4_ * fVar66));
      auVar73._0_16_ = auVar70;
      auVar73._20_4_ = auVar33._20_4_ + (float)(~uVar47 & (uint)(auVar51._20_4_ * fVar67));
      auVar73._24_4_ = auVar33._24_4_ + (float)(~uVar48 & (uint)(auVar51._24_4_ * fVar68));
      auVar73._28_4_ = auVar33._28_4_ + (float)(~uVar49 & (uint)(auVar51._28_4_ * fVar69));
      lVar19 = (longlong)auVar34._0_4_;
      *(float *)(param_1 + lVar19) = auVar70._0_4_;
      lVar20 = (longlong)auVar34._4_4_;
      uVar1 = vextractps_avx(auVar70,1);
      *(undefined4 *)(param_1 + lVar20) = uVar1;
      lVar18 = (longlong)auVar34._8_4_;
      uVar1 = vextractps_avx(auVar70,2);
      *(undefined4 *)(param_1 + lVar18) = uVar1;
      lVar26 = (longlong)auVar34._12_4_;
      uVar1 = vextractps_avx(auVar70,3);
      *(undefined4 *)(param_1 + lVar26) = uVar1;
      lVar27 = (longlong)auVar34._16_4_;
      auVar35 = auVar73._16_16_;
      in_ZMM10 = ZEXT1664(auVar35);
      *(float *)(param_1 + lVar27) = auVar73._16_4_;
      lVar24 = (longlong)auVar34._20_4_;
      uVar1 = vextractps_avx(auVar35,1);
      *(undefined4 *)(param_1 + lVar24) = uVar1;
      lVar25 = (longlong)auVar34._24_4_;
      uVar1 = vextractps_avx(auVar35,2);
      *(undefined4 *)(param_1 + lVar25) = uVar1;
      lVar22 = (longlong)auVar34._28_4_;
      uVar1 = vextractps_avx(auVar35,3);
      *(undefined4 *)(param_1 + lVar22) = uVar1;
      auVar35._0_4_ =
           auVar80._0_4_ +
           (float)(~uVar40 & (uint)(fVar59 * (float)(~auVar57._0_4_ & auVar76._0_4_)));
      auVar35._4_4_ =
           auVar80._4_4_ +
           (float)(~uVar43 & (uint)(fVar63 * (float)(~auVar57._4_4_ & auVar76._4_4_)));
      auVar35._8_4_ =
           auVar80._8_4_ +
           (float)(~uVar44 & (uint)(fVar64 * (float)(~auVar57._8_4_ & auVar76._8_4_)));
      auVar35._12_4_ =
           auVar80._12_4_ +
           (float)(~uVar45 & (uint)(fVar65 * (float)(~auVar57._12_4_ & auVar76._12_4_)));
      auVar31._16_4_ =
           auVar80._16_4_ +
           (float)(~uVar46 & (uint)(fVar66 * (float)(~auVar57._16_4_ & auVar76._16_4_)));
      auVar31._0_16_ = auVar35;
      auVar31._20_4_ =
           auVar80._20_4_ +
           (float)(~uVar47 & (uint)(fVar67 * (float)(~auVar57._20_4_ & auVar76._20_4_)));
      auVar31._24_4_ =
           auVar80._24_4_ +
           (float)(~uVar48 & (uint)(fVar68 * (float)(~auVar57._24_4_ & auVar76._24_4_)));
      auVar31._28_4_ =
           auVar80._28_4_ +
           (float)(~uVar49 & (uint)(fVar69 * (float)(~auVar57._28_4_ & auVar76._28_4_)));
      *(float *)(param_1 + 4 + lVar19) = auVar35._0_4_;
      uVar1 = vextractps_avx(auVar35,1);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar1;
      uVar1 = vextractps_avx(auVar35,2);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar1;
      uVar1 = vextractps_avx(auVar35,3);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar1;
      auVar35 = auVar31._16_16_;
      *(float *)(param_1 + 4 + lVar27) = auVar31._16_4_;
      uVar1 = vextractps_avx(auVar35,1);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar35,2);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar1;
      uVar1 = vextractps_avx(auVar35,3);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar1;
      auVar29._0_4_ =
           auVar79._0_4_ +
           (float)(~uVar40 & (uint)(fVar59 * (float)(~auVar57._0_4_ & auVar52._0_4_)));
      auVar29._4_4_ =
           auVar79._4_4_ +
           (float)(~uVar43 & (uint)(fVar63 * (float)(~auVar57._4_4_ & auVar52._4_4_)));
      auVar29._8_4_ =
           auVar79._8_4_ +
           (float)(~uVar44 & (uint)(fVar64 * (float)(~auVar57._8_4_ & auVar52._8_4_)));
      auVar29._12_4_ =
           auVar79._12_4_ +
           (float)(~uVar45 & (uint)(fVar65 * (float)(~auVar57._12_4_ & auVar52._12_4_)));
      auVar32._16_4_ =
           auVar79._16_4_ +
           (float)(~uVar46 & (uint)(fVar66 * (float)(~auVar57._16_4_ & auVar52._16_4_)));
      auVar32._0_16_ = auVar29;
      auVar32._20_4_ =
           auVar79._20_4_ +
           (float)(~uVar47 & (uint)(fVar67 * (float)(~auVar57._20_4_ & auVar52._20_4_)));
      auVar32._24_4_ =
           auVar79._24_4_ +
           (float)(~uVar48 & (uint)(fVar68 * (float)(~auVar57._24_4_ & auVar52._24_4_)));
      auVar32._28_4_ =
           auVar79._28_4_ +
           (float)(~uVar49 & (uint)(fVar69 * (float)(~auVar57._28_4_ & auVar52._28_4_)));
      *(float *)(param_1 + 8 + lVar19) = auVar29._0_4_;
      uVar1 = vextractps_avx(auVar29,1);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar1;
      uVar1 = vextractps_avx(auVar29,2);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar1;
      uVar1 = vextractps_avx(auVar29,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar1;
      auVar35 = auVar32._16_16_;
      *(float *)(param_1 + 8 + lVar27) = auVar32._16_4_;
      uVar1 = vextractps_avx(auVar35,1);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar35,2);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar1;
      uVar1 = vextractps_avx(auVar35,3);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar1;
      *(int *)(param_1 + 0xc + lVar19) = auVar36._0_4_;
      auVar35 = auVar36._0_16_;
      uVar1 = vextractps_avx(auVar35,1);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar1;
      uVar1 = vextractps_avx(auVar35,2);
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar1;
      uVar1 = vextractps_avx(auVar35,3);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar1;
      auVar35 = auVar36._16_16_;
      *(int *)(param_1 + 0xc + lVar27) = auVar36._16_4_;
      uVar1 = vextractps_avx(auVar35,1);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar35,2);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar1;
      uVar1 = vextractps_avx(auVar35,3);
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar1;
      iVar23 = iVar23 + 8;
      pauVar7 = pauVar7 + 3;
    } while (iVar23 < (int)(uVar15 & 0xfffffff8));
  }
  if ((int)param_5 <= iVar23) {
    return;
  }
  auVar38._4_4_ = iVar23;
  auVar38._0_4_ = iVar23;
  auVar38._8_4_ = iVar23;
  auVar38._12_4_ = iVar23;
  auVar38._16_4_ = iVar23;
  auVar38._20_4_ = iVar23;
  auVar38._24_4_ = iVar23;
  auVar38._28_4_ = iVar23;
  auVar79 = vpor_avx2(auVar38,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar76 = vpcmpgtd_avx2(auVar30,auVar79);
  auVar52._0_4_ = param_6 + local_380._0_4_;
  auVar52._4_4_ = param_6 + local_380._4_4_;
  auVar52._8_4_ = param_6 + local_380._8_4_;
  auVar52._12_4_ = param_6 + local_380._12_4_;
  auVar52._16_4_ = param_6 + local_380._16_4_;
  auVar52._20_4_ = param_6 + local_380._20_4_;
  auVar52._24_4_ = param_6 + local_380._24_4_;
  auVar52._28_4_ = param_6 + local_380._28_4_;
  vpslld_avx2(auVar52,4);
  auVar51 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar76);
  auVar33 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar76);
  auVar4._0_4_ = param_6 + local_360._0_4_;
  auVar4._4_4_ = param_6 + local_360._4_4_;
  auVar4._8_4_ = param_6 + local_360._8_4_;
  auVar4._12_4_ = param_6 + local_360._12_4_;
  auVar4._16_4_ = param_6 + local_360._16_4_;
  auVar4._20_4_ = param_6 + local_360._20_4_;
  auVar4._24_4_ = param_6 + local_360._24_4_;
  auVar4._28_4_ = param_6 + local_360._28_4_;
  auVar34 = vgatherdps(ZEXT832(0),auVar76);
  auVar80 = vpslld_avx2(auVar4,4);
  auVar57 = vgatherdps(ZEXT832(0),auVar76);
  auVar37 = vgatherdps(ZEXT432(0) << 0x20,auVar76);
  auVar36 = vgatherdps(ZEXT432(0) << 0x20,auVar76);
  auVar52 = vgatherdps(ZEXT432(0) << 0x20,auVar76);
  auVar51 = vmaskmovps_avx(auVar76,auVar51);
  auVar33 = vmaskmovps_avx(auVar76,auVar33);
  auVar34 = vmaskmovps_avx(auVar76,auVar34);
  auVar57 = vmaskmovps_avx(auVar76,auVar57);
  auVar37 = vmaskmovps_avx(auVar76,auVar37);
  auVar36 = vmaskmovps_avx(auVar76,auVar36);
  auVar5._0_4_ = iVar23 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
  auVar5._4_4_ = iVar23 + _UNK_150b51904;
  auVar5._8_4_ = iVar23 + _UNK_150b51908;
  auVar5._12_4_ = iVar23 + _UNK_150b5190c;
  auVar5._16_4_ = iVar23 + _UNK_150b51910;
  auVar5._20_4_ = iVar23 + _UNK_150b51914;
  auVar5._24_4_ = iVar23 + _UNK_150b51918;
  auVar5._28_4_ = iVar23 + _UNK_150b5191c;
  auVar30 = vpcmpgtd_avx2(auVar30,auVar5);
  iVar23 = vmovmskps_avx(auVar30);
  if (iVar23 != 0) {
    auVar30 = vpand_avx2(auVar76,auVar30);
    uVar15 = auVar79._0_4_;
    if ((char)iVar23 == -1) {
      auVar79 = *(undefined1 (*) [32])(param_2[4] + (ulonglong)uVar15 * 0xc);
      auVar61 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar79);
      auVar72 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar15 * 0xc));
      auVar61 = vpblendd_avx2(auVar72,auVar61,0x88);
      auVar72 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar79);
      auVar77 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar15 * 0xc));
      auVar72 = vpblendd_avx2(auVar77,auVar72,0x13);
      auVar53._16_16_ = ZEXT116(0) * auVar61._16_16_ | ZEXT116(1) * auVar72._0_16_;
      auVar53._0_16_ = ZEXT116(0) * auVar72._0_16_ | ZEXT116(1) * auVar61._0_16_;
      auVar61 = vperm2i128_avx2(auVar61,auVar72,0x31);
      auVar79 = vpblendd_avx2(auVar79,*(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar15 * 0xc),
                              0x24);
      auVar79 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar79);
      auVar58._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar58._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar72 = vpermd_avx2(auVar58,*(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar15 * 0xc));
      auVar79 = vpblendd_avx2(auVar79,auVar72,0xe0);
    }
    else {
      auVar53 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar30);
      auVar61 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar30);
      auVar79 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar30);
    }
    vmaskmovps_avx(auVar30,auVar53);
    vmaskmovps_avx(auVar30,auVar61);
    vmaskmovps_avx(auVar30,auVar79);
  }
  auVar51 = vsubps_avx(auVar51,auVar57);
  auVar79 = vsubps_avx(auVar33,auVar37);
  auVar61 = vsubps_avx(auVar34,auVar36);
  auVar55._0_4_ =
       auVar61._0_4_ * auVar61._0_4_ + auVar51._0_4_ * auVar51._0_4_ + auVar79._0_4_ * auVar79._0_4_
  ;
  auVar55._4_4_ =
       auVar61._4_4_ * auVar61._4_4_ + auVar51._4_4_ * auVar51._4_4_ + auVar79._4_4_ * auVar79._4_4_
  ;
  auVar55._8_4_ =
       auVar61._8_4_ * auVar61._8_4_ + auVar51._8_4_ * auVar51._8_4_ + auVar79._8_4_ * auVar79._8_4_
  ;
  auVar55._12_4_ =
       auVar61._12_4_ * auVar61._12_4_ +
       auVar51._12_4_ * auVar51._12_4_ + auVar79._12_4_ * auVar79._12_4_;
  auVar55._16_4_ =
       auVar61._16_4_ * auVar61._16_4_ +
       auVar51._16_4_ * auVar51._16_4_ + auVar79._16_4_ * auVar79._16_4_;
  auVar55._20_4_ =
       auVar61._20_4_ * auVar61._20_4_ +
       auVar51._20_4_ * auVar51._20_4_ + auVar79._20_4_ * auVar79._20_4_;
  auVar55._24_4_ =
       auVar61._24_4_ * auVar61._24_4_ +
       auVar51._24_4_ * auVar51._24_4_ + auVar79._24_4_ * auVar79._24_4_;
  auVar55._28_4_ =
       auVar61._28_4_ * auVar61._28_4_ +
       auVar51._28_4_ * auVar51._28_4_ + auVar79._28_4_ * auVar79._28_4_;
  auVar30 = vsqrtps_avx(auVar55);
  auVar56._4_4_ = __real_38d1b717;
  auVar56._0_4_ = __real_38d1b717;
  auVar56._8_4_ = __real_38d1b717;
  auVar56._12_4_ = __real_38d1b717;
  auVar56._16_4_ = __real_38d1b717;
  auVar56._20_4_ = __real_38d1b717;
  auVar56._24_4_ = __real_38d1b717;
  auVar56._28_4_ = __real_38d1b717;
  auVar33 = vcmpps_avx(auVar30,auVar56,1);
  auVar51 = vdivps_avx(auVar51,auVar30);
  auVar78._4_4_ = __real_3f800000;
  auVar78._0_4_ = __real_3f800000;
  auVar78._8_4_ = __real_3f800000;
  auVar78._12_4_ = __real_3f800000;
  auVar78._16_4_ = __real_3f800000;
  auVar78._20_4_ = __real_3f800000;
  auVar78._24_4_ = __real_3f800000;
  auVar78._28_4_ = __real_3f800000;
  auVar51 = vblendvps_avx(auVar51,auVar78,auVar33);
  auVar42._0_4_ = -(fVar50 * (float)local_340._0_4_) + auVar30._0_4_;
  auVar42._4_4_ = -(fVar50 * (float)local_340._4_4_) + auVar30._4_4_;
  auVar42._8_4_ = -(fVar50 * fStack_338) + auVar30._8_4_;
  auVar42._12_4_ = -(fVar50 * fStack_334) + auVar30._12_4_;
  auVar42._16_4_ = -(fVar50 * fStack_330) + auVar30._16_4_;
  auVar42._20_4_ = -(fVar50 * fStack_32c) + auVar30._20_4_;
  auVar42._24_4_ = -(fVar50 * fStack_328) + auVar30._24_4_;
  auVar42._28_4_ = -(fVar50 * fStack_324) + auVar30._28_4_;
  fVar50 = param_3 * auVar42._0_4_;
  fVar59 = param_3 * auVar42._4_4_;
  fVar63 = param_3 * auVar42._8_4_;
  fVar64 = param_3 * auVar42._12_4_;
  fVar65 = param_3 * auVar42._16_4_;
  fVar66 = param_3 * auVar42._20_4_;
  fVar67 = param_3 * auVar42._24_4_;
  param_3 = param_3 * auVar42._28_4_;
  auVar34 = vcmpps_avx(auVar42,ZEXT832(0) << 0x20,1);
  uVar40 = auVar34._0_4_;
  uVar43 = auVar34._4_4_;
  uVar44 = auVar34._8_4_;
  uVar45 = auVar34._12_4_;
  uVar46 = auVar34._16_4_;
  uVar47 = auVar34._20_4_;
  uVar48 = auVar34._24_4_;
  uVar49 = auVar34._28_4_;
  auVar71._0_4_ = auVar57._0_4_ + (float)(~uVar40 & (uint)(auVar51._0_4_ * fVar50));
  auVar71._4_4_ = auVar57._4_4_ + (float)(~uVar43 & (uint)(auVar51._4_4_ * fVar59));
  auVar71._8_4_ = auVar57._8_4_ + (float)(~uVar44 & (uint)(auVar51._8_4_ * fVar63));
  auVar71._12_4_ = auVar57._12_4_ + (float)(~uVar45 & (uint)(auVar51._12_4_ * fVar64));
  auVar74._16_4_ = auVar57._16_4_ + (float)(~uVar46 & (uint)(auVar51._16_4_ * fVar65));
  auVar74._0_16_ = auVar71;
  auVar74._20_4_ = auVar57._20_4_ + (float)(~uVar47 & (uint)(auVar51._20_4_ * fVar66));
  auVar74._24_4_ = auVar57._24_4_ + (float)(~uVar48 & (uint)(auVar51._24_4_ * fVar67));
  auVar74._28_4_ = auVar57._28_4_ + (float)(~uVar49 & (uint)(auVar51._28_4_ * param_3));
  uVar15 = vmovmskps_avx(auVar76);
  cVar14 = (char)uVar15;
  iVar28 = auVar80._0_4_;
  auVar35 = auVar80._16_16_;
  auVar75 = auVar74._16_16_;
  auVar29 = auVar52._0_16_;
  auVar70 = auVar52._16_16_;
  iVar23 = auVar80._4_4_;
  iVar21 = auVar80._8_4_;
  iVar16 = auVar80._12_4_;
  iVar41 = auVar80._16_4_;
  if ((uVar15 & 1) != 0) {
    *(float *)(param_1 + iVar28) = auVar71._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + iVar23) = uVar3;
  }
  if ((uVar15 & 4) != 0) {
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + iVar21) = uVar3;
  }
  if ((uVar15 & 8) == 0) {
    auVar51 = vdivps_avx(auVar79,auVar30);
  }
  else {
    uVar3 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + iVar16) = uVar3;
    auVar51 = vdivps_avx(auVar79,auVar30);
  }
  if ((uVar15 & 0x10) != 0) {
    *(float *)(param_1 + iVar41) = auVar74._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar35,1);
    uVar3 = vextractps_avx(auVar75,1);
    *(undefined4 *)(param_1 + iVar17) = uVar3;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar35,2);
    uVar3 = vextractps_avx(auVar75,2);
    *(undefined4 *)(param_1 + iVar17) = uVar3;
  }
  uVar13 = ~uVar49 & (uint)((float)(~auVar33._28_4_ & auVar51._28_4_) * param_3);
  uVar12 = ~uVar48 & (uint)((float)(~auVar33._24_4_ & auVar51._24_4_) * fVar67);
  uVar1 = ~uVar47 & (uint)((float)(~auVar33._20_4_ & auVar51._20_4_) * fVar66);
  uVar11 = ~uVar46 & (uint)((float)(~auVar33._16_4_ & auVar51._16_4_) * fVar65);
  uVar10 = ~uVar45 & (uint)((float)(~auVar33._12_4_ & auVar51._12_4_) * fVar64);
  uVar9 = ~uVar44 & (uint)((float)(~auVar33._8_4_ & auVar51._8_4_) * fVar63);
  uVar8 = ~uVar43 & (uint)((float)(~auVar33._4_4_ & auVar51._4_4_) * fVar59);
  uVar3 = ~uVar40 & (uint)((float)(~auVar33._0_4_ & auVar51._0_4_) * fVar50);
  if (cVar14 < '\0') {
    iVar17 = vextractps_avx(auVar35,3);
    uVar2 = vextractps_avx(auVar75,3);
    *(undefined4 *)(param_1 + iVar17) = uVar2;
    auVar62._0_4_ = auVar37._0_4_ + (float)uVar3;
    auVar62._4_4_ = auVar37._4_4_ + (float)uVar8;
    auVar62._8_4_ = auVar37._8_4_ + (float)uVar9;
    auVar62._12_4_ = auVar37._12_4_ + (float)uVar10;
    auVar62._16_4_ = auVar37._16_4_ + (float)uVar11;
    auVar62._20_4_ = auVar37._20_4_ + (float)uVar1;
    auVar62._24_4_ = auVar37._24_4_ + (float)uVar12;
    auVar62._28_4_ = auVar37._28_4_ + (float)uVar13;
  }
  else {
    auVar62._0_4_ = auVar37._0_4_ + (float)uVar3;
    auVar62._4_4_ = auVar37._4_4_ + (float)uVar8;
    auVar62._8_4_ = auVar37._8_4_ + (float)uVar9;
    auVar62._12_4_ = auVar37._12_4_ + (float)uVar10;
    auVar62._16_4_ = auVar37._16_4_ + (float)uVar11;
    auVar62._20_4_ = auVar37._20_4_ + (float)uVar1;
    auVar62._24_4_ = auVar37._24_4_ + (float)uVar12;
    auVar62._28_4_ = auVar37._28_4_ + (float)uVar13;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar28) = auVar62._0_4_;
  }
  auVar71 = auVar62._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar23) = uVar3;
  }
  if ((uVar15 & 4) != 0) {
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
  }
  if ((uVar15 & 8) == 0) {
    auVar51 = vdivps_avx(auVar61,auVar30);
  }
  else {
    uVar3 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
    auVar51 = vdivps_avx(auVar61,auVar30);
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar41) = auVar62._16_4_;
  }
  auVar71 = auVar62._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar35,1);
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar35,2);
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
  }
  uVar13 = ~uVar49 & (uint)((float)(~auVar33._28_4_ & auVar51._28_4_) * param_3);
  uVar12 = ~uVar48 & (uint)((float)(~auVar33._24_4_ & auVar51._24_4_) * fVar67);
  uVar1 = ~uVar47 & (uint)((float)(~auVar33._20_4_ & auVar51._20_4_) * fVar66);
  uVar11 = ~uVar46 & (uint)((float)(~auVar33._16_4_ & auVar51._16_4_) * fVar65);
  uVar10 = ~uVar45 & (uint)((float)(~auVar33._12_4_ & auVar51._12_4_) * fVar64);
  uVar9 = ~uVar44 & (uint)((float)(~auVar33._8_4_ & auVar51._8_4_) * fVar63);
  uVar8 = ~uVar43 & (uint)((float)(~auVar33._4_4_ & auVar51._4_4_) * fVar59);
  uVar3 = ~uVar40 & (uint)((float)(~auVar33._0_4_ & auVar51._0_4_) * fVar50);
  if (cVar14 < '\0') {
    iVar17 = vextractps_avx(auVar35,3);
    uVar2 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar2;
    auVar39._0_4_ = auVar36._0_4_ + (float)uVar3;
    auVar39._4_4_ = auVar36._4_4_ + (float)uVar8;
    auVar39._8_4_ = auVar36._8_4_ + (float)uVar9;
    auVar39._12_4_ = auVar36._12_4_ + (float)uVar10;
    auVar39._16_4_ = auVar36._16_4_ + (float)uVar11;
    auVar39._20_4_ = auVar36._20_4_ + (float)uVar1;
    auVar39._24_4_ = auVar36._24_4_ + (float)uVar12;
    auVar39._28_4_ = auVar36._28_4_ + (float)uVar13;
  }
  else {
    auVar39._0_4_ = auVar36._0_4_ + (float)uVar3;
    auVar39._4_4_ = auVar36._4_4_ + (float)uVar8;
    auVar39._8_4_ = auVar36._8_4_ + (float)uVar9;
    auVar39._12_4_ = auVar36._12_4_ + (float)uVar10;
    auVar39._16_4_ = auVar36._16_4_ + (float)uVar11;
    auVar39._20_4_ = auVar36._20_4_ + (float)uVar1;
    auVar39._24_4_ = auVar36._24_4_ + (float)uVar12;
    auVar39._28_4_ = auVar36._28_4_ + (float)uVar13;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar28) = auVar39._0_4_;
  }
  auVar71 = auVar39._0_16_;
  if ((uVar15 & 2) != 0) {
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar23) = uVar3;
  }
  if ((uVar15 & 4) != 0) {
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar3;
  }
  if ((uVar15 & 8) != 0) {
    uVar3 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar41) = auVar39._16_4_;
  }
  auVar71 = auVar39._16_16_;
  if ((uVar15 & 0x20) != 0) {
    iVar17 = vextractps_avx(auVar35,1);
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar17 = vextractps_avx(auVar35,2);
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
  }
  if (cVar14 < '\0') {
    iVar17 = vextractps_avx(auVar35,3);
    uVar3 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
  }
  if ((uVar15 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar28) = auVar52._0_4_;
  }
  if ((uVar15 & 2) != 0) {
    uVar3 = vextractps_avx(auVar29,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar3;
  }
  if ((uVar15 & 4) != 0) {
    uVar3 = vextractps_avx(auVar29,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar21) = uVar3;
  }
  if ((uVar15 & 8) != 0) {
    uVar3 = vextractps_avx(auVar29,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
  }
  if ((uVar15 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar41) = auVar52._16_4_;
  }
  if ((uVar15 & 0x20) != 0) {
    iVar23 = vextractps_avx(auVar35,1);
    uVar3 = vextractps_avx(auVar70,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar3;
  }
  if ((uVar15 & 0x40) != 0) {
    iVar23 = vextractps_avx(auVar35,2);
    uVar3 = vextractps_avx(auVar70,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar3;
  }
  if (cVar14 < '\0') {
    iVar23 = vextractps_avx(auVar35,3);
    uVar3 = vextractps_avx(auVar70,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar23) = uVar3;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_CunfCuniCuni_avx2 @ 1402e60d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_CunfCuniCuni_avx2
               (longlong param_1,undefined1 (*param_2) [32],longlong param_3,undefined8 param_4,
               float param_5,uint param_6,int param_7,undefined1 (*param_8) [32])

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 (*pauVar7) [32];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 in_ZMM2 [64];
  uint uVar38;
  undefined1 auVar39 [32];
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 in_ZMM3 [64];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [64];
  undefined1 auVar53 [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [32];
  undefined1 auVar68 [16];
  int iVar69;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  float fVar74;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar84 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [8];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 auVar54 [32];
  undefined1 auVar67 [32];
  
  uVar11 = __real_0000000c;
  uVar10 = __real_00000008;
  uVar9 = __real_00000004;
  uVar8 = __real_3f800000;
  uVar3 = __real_38d1b717;
  auVar47 = *param_8;
  auVar62._4_4_ = param_6;
  auVar62._0_4_ = param_6;
  auVar62._8_4_ = param_6;
  auVar62._12_4_ = param_6;
  auVar62._16_4_ = param_6;
  auVar62._20_4_ = param_6;
  auVar62._24_4_ = param_6;
  auVar62._28_4_ = param_6;
  auVar29 = vpcmpgtd_avx2(auVar62,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar36 = auVar47 & auVar29;
  if ((((((((SUB321(auVar36 >> 0x1f,0) & 1) != 0 || (SUB321(auVar36 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar36 >> 0x5f,0) & 1) != 0) || SUB321(auVar36 >> 0x7f,0) != '\0') ||
        (SUB321(auVar36 >> 0x9f,0) & 1) != 0) || SUB321(auVar36 >> 0xbf,0) != '\0') ||
      (SUB321(auVar36 >> 0xdf,0) & 1) != 0) || auVar36[0x1f] < '\0') {
    auVar36._0_4_ = auVar29._0_4_ & auVar47._0_4_;
    auVar36._4_4_ = auVar29._4_4_ & auVar47._4_4_;
    auVar36._8_4_ = auVar29._8_4_ & auVar47._8_4_;
    auVar36._12_4_ = auVar29._12_4_ & auVar47._12_4_;
    auVar36._16_4_ = auVar29._16_4_ & auVar47._16_4_;
    auVar36._20_4_ = auVar29._20_4_ & auVar47._20_4_;
    auVar36._24_4_ = auVar29._24_4_ & auVar47._24_4_;
    auVar36._28_4_ = auVar29._28_4_ & auVar47._28_4_;
    auVar47 = vpcmpeqd_avx2(auVar47,auVar47);
    auVar47 = auVar47 & ~auVar36;
    if ((((((((SUB321(auVar47 >> 0x1f,0) & 1) == 0 && (SUB321(auVar47 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar47 >> 0x5f,0) & 1) == 0) && SUB321(auVar47 >> 0x7f,0) == '\0') &&
          (SUB321(auVar47 >> 0x9f,0) & 1) == 0) && SUB321(auVar47 >> 0xbf,0) == '\0') &&
        (SUB321(auVar47 >> 0xdf,0) & 1) == 0) && -1 < auVar47[0x1f]) {
      auVar47 = param_2[1];
      auVar36 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar47);
      auVar35 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *param_2);
      auVar36 = vpblendd_avx2(auVar35,auVar36,0x88);
      auVar35 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar47);
      auVar31 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            param_2[2]);
      auVar35 = vpblendd_avx2(auVar31,auVar35,0x13);
      auVar31._16_16_ = ZEXT116(0) * auVar36._16_16_ | ZEXT116(1) * auVar35._0_16_;
      auVar31._0_16_ = ZEXT116(0) * auVar35._0_16_ | ZEXT116(1) * auVar36._0_16_;
      auVar35 = vperm2i128_avx2(auVar36,auVar35,0x31);
      auVar47 = vpblendd_avx2(auVar47,*param_2,0x24);
      auVar47 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar47);
      in_ZMM3 = ZEXT3264(auVar47);
      auVar32._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar32._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar36 = vpermd_avx2(auVar32,param_2[2]);
      auVar47 = vpblendd_avx2(auVar47,auVar36,0xe0);
    }
    else {
      auVar31 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar36);
      auVar35 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar36);
      auVar47 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar36);
      in_ZMM3 = ZEXT3264((undefined1  [32])0x0);
    }
    in_ZMM2 = ZEXT3264(auVar35);
    local_380 = vmaskmovps_avx(auVar29,auVar31);
    local_360 = vmaskmovps_avx(auVar29,auVar35);
    _local_340 = vmaskmovps_avx(auVar29,auVar47);
  }
  auVar52 = ZEXT3264(auVar62);
  uVar16 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    iVar22 = 0;
    auVar47 = auVar62;
  }
  else {
    iVar22 = 0;
    pauVar7 = param_2;
    do {
      auVar60 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)local_360._0_4_)),
                            (uint)*(byte *)(param_3 + (int)local_360._4_4_),1);
      auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + (int)local_360._8_4_),2);
      auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + (int)local_360._12_4_),3);
      auVar47._0_4_ =
           iVar22 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
      auVar47._4_4_ = iVar22 + _UNK_150b51904;
      auVar47._8_4_ = iVar22 + _UNK_150b51908;
      auVar47._12_4_ = iVar22 + _UNK_150b5190c;
      auVar47._16_4_ = iVar22 + _UNK_150b51910;
      auVar47._20_4_ = iVar22 + _UNK_150b51914;
      auVar47._24_4_ = iVar22 + _UNK_150b51918;
      auVar47._28_4_ = iVar22 + _UNK_150b5191c;
      auVar30._4_4_ = param_7;
      auVar30._0_4_ = param_7;
      auVar30._8_4_ = param_7;
      auVar30._12_4_ = param_7;
      auVar30._16_4_ = param_7;
      auVar30._20_4_ = param_7;
      auVar30._24_4_ = param_7;
      auVar30._28_4_ = param_7;
      auVar29._0_4_ = param_7 + local_380._0_4_;
      auVar29._4_4_ = param_7 + local_380._4_4_;
      auVar29._8_4_ = param_7 + local_380._8_4_;
      auVar29._12_4_ = param_7 + local_380._12_4_;
      auVar29._16_4_ = param_7 + local_380._16_4_;
      auVar29._20_4_ = param_7 + local_380._20_4_;
      auVar29._24_4_ = param_7 + local_380._24_4_;
      auVar29._28_4_ = param_7 + local_380._28_4_;
      auVar29 = vpslld_avx2(auVar29,4);
      auVar36 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar73 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar36);
      auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + (int)local_360._16_4_),4);
      auVar59._4_4_ = uVar9;
      auVar59._0_4_ = uVar9;
      auVar59._8_4_ = uVar9;
      auVar59._12_4_ = uVar9;
      auVar59._16_4_ = uVar9;
      auVar59._20_4_ = uVar9;
      auVar59._24_4_ = uVar9;
      auVar59._28_4_ = uVar9;
      auVar36 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar75 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar36);
      auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + (int)local_360._20_4_),5);
      auVar70._4_4_ = uVar10;
      auVar70._0_4_ = uVar10;
      auVar70._8_4_ = uVar10;
      auVar70._12_4_ = uVar10;
      auVar70._16_4_ = uVar10;
      auVar70._20_4_ = uVar10;
      auVar70._24_4_ = uVar10;
      auVar70._28_4_ = uVar10;
      auVar36 = vpcmpeqd_avx2(auVar29 | auVar59,auVar29 | auVar59);
      auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar36);
      auVar35._0_4_ = param_7 + local_360._0_4_;
      auVar35._4_4_ = param_7 + local_360._4_4_;
      auVar35._8_4_ = param_7 + local_360._8_4_;
      auVar35._12_4_ = param_7 + local_360._12_4_;
      auVar35._16_4_ = param_7 + local_360._16_4_;
      auVar35._20_4_ = param_7 + local_360._20_4_;
      auVar35._24_4_ = param_7 + local_360._24_4_;
      auVar35._28_4_ = param_7 + local_360._28_4_;
      auVar72 = vpslld_avx2(auVar35,4);
      vpor_avx2(auVar72,auVar59);
      auVar36 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar31 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar36);
      auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + (int)local_360._24_4_),6);
      auVar29 = vpor_avx2(auVar72,auVar70);
      auVar36 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar32 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar36);
      auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + (int)local_360._28_4_),7);
      auVar84._4_4_ = uVar11;
      auVar84._0_4_ = uVar11;
      auVar84._8_4_ = uVar11;
      auVar84._12_4_ = uVar11;
      auVar84._16_4_ = uVar11;
      auVar84._20_4_ = uVar11;
      auVar84._24_4_ = uVar11;
      auVar84._28_4_ = uVar11;
      auVar35 = vpor_avx2(auVar72,auVar84);
      auVar36 = vpcmpeqd_avx2(auVar29,auVar29);
      auVar84 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar36);
      auVar36 = vpcmpeqd_avx2(auVar35,auVar35);
      auVar29 = vgatherdps(ZEXT832(0) << 0x20,auVar36);
      uVar1 = local_340._0_4_;
      uVar12 = local_340._4_4_;
      fVar74 = fStack_338;
      fVar77 = fStack_334;
      fVar78 = fStack_330;
      fVar79 = fStack_32c;
      fVar80 = fStack_328;
      fVar81 = fStack_324;
      auVar36 = auVar52._0_32_;
      auVar47 = vpcmpgtd_avx2(auVar36,auVar47);
      iVar15 = vmovmskps_avx(auVar47);
      if (iVar15 != 0) {
        if ((char)iVar15 == -1) {
          auVar36 = pauVar7[3];
          auVar35 = pauVar7[4];
          auVar70 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                ,auVar35);
          auVar59 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar36);
          auVar70 = vpblendd_avx2(auVar59,auVar70,0x88);
          auVar59 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                ,auVar35);
          auVar30 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,pauVar7[5]);
          auVar59 = vpblendd_avx2(auVar30,auVar59,0x13);
          auVar66._16_16_ = ZEXT116(0) * auVar70._16_16_ | ZEXT116(1) * auVar59._0_16_;
          auVar66._0_16_ = ZEXT116(0) * auVar59._0_16_ | ZEXT116(1) * auVar70._0_16_;
          auVar70 = vperm2i128_avx2(auVar70,auVar59,0x31);
          auVar36 = vpblendd_avx2(auVar35,auVar36,0x24);
          auVar36 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar36);
          auVar48._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar48._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar35 = vpermd_avx2(auVar48,pauVar7[5]);
          auVar35 = vpblendd_avx2(auVar36,auVar35,0xe0);
          auVar36 = auVar62;
        }
        else {
          auVar66 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
          auVar70 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
          auVar35 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
        }
        auVar52 = ZEXT3264(auVar36);
        local_380 = vmaskmovps_avx(auVar47,auVar66);
        local_360 = vmaskmovps_avx(auVar47,auVar70);
        _local_340 = vmaskmovps_avx(auVar47,auVar35);
      }
      auVar36 = vpmovzxbd_avx2(auVar60);
      auVar36 = vpslld_avx2(auVar36,2);
      vpmovzxdq_avx2(auVar36._16_16_);
      auVar36 = vpmovzxdq_avx2(auVar36._0_16_);
      auVar60 = vpcmpeqd_avx(auVar47._0_16_,auVar47._0_16_);
      auVar64 = vgatherqps((undefined1  [16])0x0,auVar60);
      auVar60 = vpcmpeqd_avx(auVar36._0_16_,auVar36._0_16_);
      auVar60 = vgatherqps(ZEXT816(0) << 0x40,auVar60);
      auVar47 = vsubps_avx(auVar73,auVar29);
      auVar36 = vsubps_avx(auVar75,auVar31);
      auVar59 = vsubps_avx(auVar61,auVar32);
      auVar71._0_4_ =
           auVar59._0_4_ * auVar59._0_4_ +
           auVar47._0_4_ * auVar47._0_4_ + auVar36._0_4_ * auVar36._0_4_;
      auVar71._4_4_ =
           auVar59._4_4_ * auVar59._4_4_ +
           auVar47._4_4_ * auVar47._4_4_ + auVar36._4_4_ * auVar36._4_4_;
      auVar71._8_4_ =
           auVar59._8_4_ * auVar59._8_4_ +
           auVar47._8_4_ * auVar47._8_4_ + auVar36._8_4_ * auVar36._8_4_;
      auVar71._12_4_ =
           auVar59._12_4_ * auVar59._12_4_ +
           auVar47._12_4_ * auVar47._12_4_ + auVar36._12_4_ * auVar36._12_4_;
      auVar71._16_4_ =
           auVar59._16_4_ * auVar59._16_4_ +
           auVar47._16_4_ * auVar47._16_4_ + auVar36._16_4_ * auVar36._16_4_;
      auVar71._20_4_ =
           auVar59._20_4_ * auVar59._20_4_ +
           auVar47._20_4_ * auVar47._20_4_ + auVar36._20_4_ * auVar36._20_4_;
      auVar71._24_4_ =
           auVar59._24_4_ * auVar59._24_4_ +
           auVar47._24_4_ * auVar47._24_4_ + auVar36._24_4_ * auVar36._24_4_;
      auVar71._28_4_ =
           auVar59._28_4_ * auVar59._28_4_ +
           auVar47._28_4_ * auVar47._28_4_ + auVar36._28_4_ * auVar36._28_4_;
      auVar35 = vsqrtps_avx(auVar71);
      auVar47 = vdivps_avx(auVar47,auVar35);
      auVar70 = vdivps_avx(auVar36,auVar35);
      auVar59 = vdivps_avx(auVar59,auVar35);
      auVar73._4_4_ = uVar3;
      auVar73._0_4_ = uVar3;
      auVar73._8_4_ = uVar3;
      auVar73._12_4_ = uVar3;
      auVar73._16_4_ = uVar3;
      auVar73._20_4_ = uVar3;
      auVar73._24_4_ = uVar3;
      auVar73._28_4_ = uVar3;
      auVar36 = vcmpps_avx(auVar35,auVar73,1);
      auVar61._4_4_ = uVar8;
      auVar61._0_4_ = uVar8;
      auVar61._8_4_ = uVar8;
      auVar61._12_4_ = uVar8;
      auVar61._16_4_ = uVar8;
      auVar61._20_4_ = uVar8;
      auVar61._24_4_ = uVar8;
      auVar61._28_4_ = uVar8;
      auVar47 = vblendvps_avx(auVar47,auVar61,auVar36);
      auVar39._0_4_ = -((float)uVar1 * param_5) + auVar35._0_4_;
      auVar39._4_4_ = -((float)uVar12 * param_5) + auVar35._4_4_;
      auVar39._8_4_ = -(fVar74 * param_5) + auVar35._8_4_;
      auVar39._12_4_ = -(fVar77 * param_5) + auVar35._12_4_;
      auVar39._16_4_ = -(fVar78 * param_5) + auVar35._16_4_;
      auVar39._20_4_ = -(fVar79 * param_5) + auVar35._20_4_;
      auVar39._24_4_ = -(fVar80 * param_5) + auVar35._24_4_;
      auVar39._28_4_ = -(fVar81 * param_5) + auVar35._28_4_;
      fVar74 = auVar64._0_4_ * auVar39._0_4_;
      fVar77 = auVar64._4_4_ * auVar39._4_4_;
      fVar78 = auVar64._8_4_ * auVar39._8_4_;
      fVar79 = auVar64._12_4_ * auVar39._12_4_;
      fVar80 = auVar60._0_4_ * auVar39._16_4_;
      fVar81 = auVar60._4_4_ * auVar39._20_4_;
      fVar82 = auVar60._8_4_ * auVar39._24_4_;
      fVar83 = auVar60._12_4_ * auVar39._28_4_;
      auVar35 = vcmpps_avx(auVar39,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      in_ZMM3 = ZEXT3264(auVar35);
      uVar38 = auVar35._0_4_;
      uVar40 = auVar35._4_4_;
      uVar41 = auVar35._8_4_;
      uVar42 = auVar35._12_4_;
      uVar43 = auVar35._16_4_;
      uVar44 = auVar35._20_4_;
      uVar45 = auVar35._24_4_;
      uVar46 = auVar35._28_4_;
      auVar53._0_4_ = auVar29._0_4_ + (float)(~uVar38 & (uint)(fVar74 * auVar47._0_4_));
      auVar53._4_4_ = auVar29._4_4_ + (float)(~uVar40 & (uint)(fVar77 * auVar47._4_4_));
      auVar53._8_4_ = auVar29._8_4_ + (float)(~uVar41 & (uint)(fVar78 * auVar47._8_4_));
      auVar53._12_4_ = auVar29._12_4_ + (float)(~uVar42 & (uint)(fVar79 * auVar47._12_4_));
      auVar54._16_4_ = auVar29._16_4_ + (float)(~uVar43 & (uint)(fVar80 * auVar47._16_4_));
      auVar54._0_16_ = auVar53;
      auVar54._20_4_ = auVar29._20_4_ + (float)(~uVar44 & (uint)(fVar81 * auVar47._20_4_));
      auVar54._24_4_ = auVar29._24_4_ + (float)(~uVar45 & (uint)(fVar82 * auVar47._24_4_));
      auVar54._28_4_ = auVar29._28_4_ + (float)(~uVar46 & (uint)(fVar83 * auVar47._28_4_));
      lVar21 = (longlong)auVar72._0_4_;
      *(float *)(param_1 + lVar21) = auVar53._0_4_;
      lVar26 = (longlong)auVar72._4_4_;
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(param_1 + lVar26) = uVar1;
      lVar27 = (longlong)auVar72._8_4_;
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(param_1 + lVar27) = uVar1;
      lVar25 = (longlong)auVar72._12_4_;
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(param_1 + lVar25) = uVar1;
      lVar24 = (longlong)auVar72._16_4_;
      auVar60 = auVar54._16_16_;
      *(float *)(param_1 + lVar24) = auVar54._16_4_;
      lVar23 = (longlong)auVar72._20_4_;
      uVar1 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + lVar23) = uVar1;
      lVar20 = (longlong)auVar72._24_4_;
      uVar1 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + lVar20) = uVar1;
      lVar17 = (longlong)auVar72._28_4_;
      uVar1 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + lVar17) = uVar1;
      auVar60._0_4_ =
           auVar31._0_4_ +
           (float)(~uVar38 & (uint)(fVar74 * (float)(~auVar36._0_4_ & auVar70._0_4_)));
      auVar60._4_4_ =
           auVar31._4_4_ +
           (float)(~uVar40 & (uint)(fVar77 * (float)(~auVar36._4_4_ & auVar70._4_4_)));
      auVar60._8_4_ =
           auVar31._8_4_ +
           (float)(~uVar41 & (uint)(fVar78 * (float)(~auVar36._8_4_ & auVar70._8_4_)));
      auVar60._12_4_ =
           auVar31._12_4_ +
           (float)(~uVar42 & (uint)(fVar79 * (float)(~auVar36._12_4_ & auVar70._12_4_)));
      auVar72._16_4_ =
           auVar31._16_4_ +
           (float)(~uVar43 & (uint)(fVar80 * (float)(~auVar36._16_4_ & auVar70._16_4_)));
      auVar72._0_16_ = auVar60;
      auVar72._20_4_ =
           auVar31._20_4_ +
           (float)(~uVar44 & (uint)(fVar81 * (float)(~auVar36._20_4_ & auVar70._20_4_)));
      auVar72._24_4_ =
           auVar31._24_4_ +
           (float)(~uVar45 & (uint)(fVar82 * (float)(~auVar36._24_4_ & auVar70._24_4_)));
      auVar72._28_4_ =
           auVar31._28_4_ +
           (float)(~uVar46 & (uint)(fVar83 * (float)(~auVar36._28_4_ & auVar70._28_4_)));
      *(float *)(param_1 + 4 + lVar21) = auVar60._0_4_;
      uVar1 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar1;
      uVar1 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar1;
      auVar60 = auVar72._16_16_;
      *(float *)(param_1 + 4 + lVar24) = auVar72._16_4_;
      uVar1 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar1;
      uVar1 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar1;
      fVar74 = fVar74 * (float)(~auVar36._0_4_ & auVar59._0_4_);
      fVar77 = fVar77 * (float)(~auVar36._4_4_ & auVar59._4_4_);
      fVar78 = fVar78 * (float)(~auVar36._8_4_ & auVar59._8_4_);
      fVar79 = fVar79 * (float)(~auVar36._12_4_ & auVar59._12_4_);
      fVar80 = fVar80 * (float)(~auVar36._16_4_ & auVar59._16_4_);
      fVar81 = fVar81 * (float)(~auVar36._20_4_ & auVar59._20_4_);
      fVar82 = fVar82 * (float)(~auVar36._24_4_ & auVar59._24_4_);
      fVar83 = fVar83 * (float)(~auVar36._28_4_ & auVar59._28_4_);
      in_ZMM2 = ZEXT3264(CONCAT428(fVar83,CONCAT424(fVar82,CONCAT420(fVar81,CONCAT416(fVar80,
                                                  CONCAT412(fVar79,CONCAT48(fVar78,CONCAT44(fVar77,
                                                  fVar74))))))));
      uVar1 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 4 + lVar17) = uVar1;
      auVar64._0_4_ = auVar32._0_4_ + (float)(~uVar38 & (uint)fVar74);
      auVar64._4_4_ = auVar32._4_4_ + (float)(~uVar40 & (uint)fVar77);
      auVar64._8_4_ = auVar32._8_4_ + (float)(~uVar41 & (uint)fVar78);
      auVar64._12_4_ = auVar32._12_4_ + (float)(~uVar42 & (uint)fVar79);
      auVar75._16_4_ = auVar32._16_4_ + (float)(~uVar43 & (uint)fVar80);
      auVar75._0_16_ = auVar64;
      auVar75._20_4_ = auVar32._20_4_ + (float)(~uVar44 & (uint)fVar81);
      auVar75._24_4_ = auVar32._24_4_ + (float)(~uVar45 & (uint)fVar82);
      auVar75._28_4_ = auVar32._28_4_ + (float)(~uVar46 & (uint)fVar83);
      *(float *)(param_1 + 8 + lVar21) = auVar64._0_4_;
      uVar1 = vextractps_avx(auVar64,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar1;
      uVar1 = vextractps_avx(auVar64,2);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar64,3);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar1;
      auVar60 = auVar75._16_16_;
      *(float *)(param_1 + 8 + lVar24) = auVar75._16_4_;
      uVar1 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar1;
      uVar1 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar1;
      uVar1 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 8 + lVar17) = uVar1;
      *(int *)(param_1 + 0xc + lVar21) = auVar84._0_4_;
      auVar60 = auVar84._0_16_;
      uVar1 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar1;
      uVar1 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar1;
      auVar60 = auVar84._16_16_;
      *(int *)(param_1 + 0xc + lVar24) = auVar84._16_4_;
      uVar1 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar1;
      uVar1 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar1;
      uVar1 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 0xc + lVar17) = uVar1;
      iVar22 = iVar22 + 8;
      auVar47 = auVar52._0_32_;
      pauVar7 = pauVar7 + 3;
    } while (iVar22 < (int)(uVar16 & 0xfffffff8));
  }
  if ((int)param_6 <= iVar22) {
    return;
  }
  auVar55._4_4_ = iVar22;
  auVar55._0_4_ = iVar22;
  auVar55._8_4_ = iVar22;
  auVar55._12_4_ = iVar22;
  auVar55._16_4_ = iVar22;
  auVar55._20_4_ = iVar22;
  auVar55._24_4_ = iVar22;
  auVar55._28_4_ = iVar22;
  auVar59 = vpor_avx2(auVar55,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar70 = vpcmpgtd_avx2(auVar47,auVar59);
  auVar4._0_4_ = param_7 + local_380._0_4_;
  auVar4._4_4_ = param_7 + local_380._4_4_;
  auVar4._8_4_ = param_7 + local_380._8_4_;
  auVar4._12_4_ = param_7 + local_380._12_4_;
  auVar4._16_4_ = param_7 + local_380._16_4_;
  auVar4._20_4_ = param_7 + local_380._20_4_;
  auVar4._24_4_ = param_7 + local_380._24_4_;
  auVar4._28_4_ = param_7 + local_380._28_4_;
  vpslld_avx2(auVar4,4);
  auVar49._4_4_ = __real_00000004;
  auVar49._0_4_ = __real_00000004;
  auVar49._8_4_ = __real_00000004;
  auVar49._12_4_ = __real_00000004;
  auVar49._16_4_ = __real_00000004;
  auVar49._20_4_ = __real_00000004;
  auVar49._24_4_ = __real_00000004;
  auVar49._28_4_ = __real_00000004;
  auVar36 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
  auVar29 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar70);
  auVar58._4_4_ = __real_00000008;
  auVar58._0_4_ = __real_00000008;
  auVar58._8_4_ = __real_00000008;
  auVar58._12_4_ = __real_00000008;
  auVar58._16_4_ = __real_00000008;
  auVar58._20_4_ = __real_00000008;
  auVar58._24_4_ = __real_00000008;
  auVar58._28_4_ = __real_00000008;
  auVar62 = vgatherdps(ZEXT832(0),auVar70);
  auVar5._0_4_ = local_360._0_4_ + param_7;
  auVar5._4_4_ = local_360._4_4_ + param_7;
  auVar5._8_4_ = local_360._8_4_ + param_7;
  auVar5._12_4_ = local_360._12_4_ + param_7;
  auVar5._16_4_ = local_360._16_4_ + param_7;
  auVar5._20_4_ = local_360._20_4_ + param_7;
  auVar5._24_4_ = local_360._24_4_ + param_7;
  auVar5._28_4_ = local_360._28_4_ + param_7;
  auVar30 = vpslld_avx2(auVar5,4);
  vpor_avx2(auVar30,auVar49);
  auVar31 = vgatherdps(ZEXT432(0) << 0x20,auVar70);
  vpor_avx2(auVar30,auVar58);
  auVar32 = vgatherdps(ZEXT432(0) << 0x20,auVar70);
  auVar37._4_4_ = __real_0000000c;
  auVar37._0_4_ = __real_0000000c;
  auVar37._8_4_ = __real_0000000c;
  auVar37._12_4_ = __real_0000000c;
  auVar37._16_4_ = __real_0000000c;
  auVar37._20_4_ = __real_0000000c;
  auVar37._24_4_ = __real_0000000c;
  auVar37._28_4_ = __real_0000000c;
  vpor_avx2(auVar30,auVar37);
  auVar61 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
  auVar35 = vgatherdps(ZEXT832(0) << 0x20,auVar70);
  auVar36 = vmaskmovps_avx(auVar70,auVar36);
  auVar29 = vmaskmovps_avx(auVar70,auVar29);
  auVar62 = vmaskmovps_avx(auVar70,auVar62);
  auVar35 = vmaskmovps_avx(auVar70,auVar35);
  auVar31 = vmaskmovps_avx(auVar70,auVar31);
  auVar84 = vpand_avx2(local_360,auVar70);
  auVar32 = vmaskmovps_avx(auVar70,auVar32);
  auVar60 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + auVar84._0_4_)),
                        (uint)*(byte *)(param_3 + auVar84._4_4_),1);
  auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + auVar84._8_4_),2);
  auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + auVar84._12_4_),3);
  auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + auVar84._16_4_),4);
  auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + auVar84._20_4_),5);
  auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + auVar84._24_4_),6);
  auVar60 = vpinsrb_avx(auVar60,(uint)*(byte *)(param_3 + auVar84._28_4_),7);
  auVar6._0_4_ = iVar22 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
  auVar6._4_4_ = iVar22 + _UNK_150b51904;
  auVar6._8_4_ = iVar22 + _UNK_150b51908;
  auVar6._12_4_ = iVar22 + _UNK_150b5190c;
  auVar6._16_4_ = iVar22 + _UNK_150b51910;
  auVar6._20_4_ = iVar22 + _UNK_150b51914;
  auVar6._24_4_ = iVar22 + _UNK_150b51918;
  auVar6._28_4_ = iVar22 + _UNK_150b5191c;
  auVar47 = vpcmpgtd_avx2(auVar47,auVar6);
  iVar22 = vmovmskps_avx(auVar47);
  if (iVar22 != 0) {
    auVar47 = vpand_avx2(auVar47,auVar70);
    uVar16 = auVar59._0_4_;
    if ((char)iVar22 == -1) {
      auVar84 = *(undefined1 (*) [32])(param_2[4] + (ulonglong)uVar16 * 0xc);
      auVar59 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar84);
      auVar72 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar16 * 0xc));
      auVar59 = vpblendd_avx2(auVar72,auVar59,0x88);
      auVar72 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar84);
      auVar73 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar16 * 0xc));
      auVar72 = vpblendd_avx2(auVar73,auVar72,0x13);
      auVar51._16_16_ = ZEXT116(0) * auVar59._16_16_ | ZEXT116(1) * auVar72._0_16_;
      auVar51._0_16_ = ZEXT116(0) * auVar72._0_16_ | ZEXT116(1) * auVar59._0_16_;
      auVar59 = vperm2i128_avx2(auVar59,auVar72,0x31);
      auVar84 = vpblendd_avx2(auVar84,*(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar16 * 0xc),
                              0x24);
      auVar84 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar84);
      auVar63._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar63._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar72 = vpermd_avx2(auVar63,*(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar16 * 0xc));
      auVar84 = vpblendd_avx2(auVar84,auVar72,0xe0);
    }
    else {
      auVar51 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar59 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar84 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
    }
    vmaskmovps_avx(auVar47,auVar51);
    vmaskmovps_avx(auVar47,auVar59);
    vmaskmovps_avx(auVar47,auVar84);
  }
  auVar47 = vpmovzxbd_avx2(auVar60);
  auVar47 = vpslld_avx2(auVar47,2);
  vpmovzxdq_avx2(auVar47._16_16_);
  vpmovzxdq_avx2(auVar47._0_16_);
  auVar64 = vgatherqps(ZEXT816(0) << 0x20,auVar70._0_16_);
  auVar60 = vgatherqps(ZEXT816(0) << 0x40,auVar70._16_16_);
  auVar47 = vsubps_avx(auVar36,auVar35);
  auVar84 = vsubps_avx(auVar29,auVar31);
  auVar59 = vsubps_avx(auVar62,auVar32);
  auVar56._0_4_ =
       auVar59._0_4_ * auVar59._0_4_ + auVar47._0_4_ * auVar47._0_4_ + auVar84._0_4_ * auVar84._0_4_
  ;
  auVar56._4_4_ =
       auVar59._4_4_ * auVar59._4_4_ + auVar47._4_4_ * auVar47._4_4_ + auVar84._4_4_ * auVar84._4_4_
  ;
  auVar56._8_4_ =
       auVar59._8_4_ * auVar59._8_4_ + auVar47._8_4_ * auVar47._8_4_ + auVar84._8_4_ * auVar84._8_4_
  ;
  auVar56._12_4_ =
       auVar59._12_4_ * auVar59._12_4_ +
       auVar47._12_4_ * auVar47._12_4_ + auVar84._12_4_ * auVar84._12_4_;
  auVar56._16_4_ =
       auVar59._16_4_ * auVar59._16_4_ +
       auVar47._16_4_ * auVar47._16_4_ + auVar84._16_4_ * auVar84._16_4_;
  auVar56._20_4_ =
       auVar59._20_4_ * auVar59._20_4_ +
       auVar47._20_4_ * auVar47._20_4_ + auVar84._20_4_ * auVar84._20_4_;
  auVar56._24_4_ =
       auVar59._24_4_ * auVar59._24_4_ +
       auVar47._24_4_ * auVar47._24_4_ + auVar84._24_4_ * auVar84._24_4_;
  auVar56._28_4_ =
       auVar59._28_4_ * auVar59._28_4_ +
       auVar47._28_4_ * auVar47._28_4_ + auVar84._28_4_ * auVar84._28_4_;
  auVar62 = vsqrtps_avx(auVar56);
  auVar57._4_4_ = __real_38d1b717;
  auVar57._0_4_ = __real_38d1b717;
  auVar57._8_4_ = __real_38d1b717;
  auVar57._12_4_ = __real_38d1b717;
  auVar57._16_4_ = __real_38d1b717;
  auVar57._20_4_ = __real_38d1b717;
  auVar57._24_4_ = __real_38d1b717;
  auVar57._28_4_ = __real_38d1b717;
  auVar36 = vcmpps_avx(auVar62,auVar57,1);
  auVar47 = vdivps_avx(auVar47,auVar62);
  auVar76._4_4_ = __real_3f800000;
  auVar76._0_4_ = __real_3f800000;
  auVar76._8_4_ = __real_3f800000;
  auVar76._12_4_ = __real_3f800000;
  auVar76._16_4_ = __real_3f800000;
  auVar76._20_4_ = __real_3f800000;
  auVar76._24_4_ = __real_3f800000;
  auVar76._28_4_ = __real_3f800000;
  auVar47 = vblendvps_avx(auVar47,auVar76,auVar36);
  auVar50._0_4_ = -(param_5 * (float)local_340._0_4_) + auVar62._0_4_;
  auVar50._4_4_ = -(param_5 * (float)local_340._4_4_) + auVar62._4_4_;
  auVar50._8_4_ = -(param_5 * fStack_338) + auVar62._8_4_;
  auVar50._12_4_ = -(param_5 * fStack_334) + auVar62._12_4_;
  auVar50._16_4_ = -(param_5 * fStack_330) + auVar62._16_4_;
  auVar50._20_4_ = -(param_5 * fStack_32c) + auVar62._20_4_;
  auVar50._24_4_ = -(param_5 * fStack_328) + auVar62._24_4_;
  auVar50._28_4_ = -(param_5 * fStack_324) + auVar62._28_4_;
  fVar74 = auVar64._0_4_ * auVar50._0_4_;
  fVar77 = auVar64._4_4_ * auVar50._4_4_;
  fVar78 = auVar64._8_4_ * auVar50._8_4_;
  fVar79 = auVar64._12_4_ * auVar50._12_4_;
  fVar80 = auVar60._0_4_ * auVar50._16_4_;
  fVar81 = auVar60._4_4_ * auVar50._20_4_;
  fVar82 = auVar60._8_4_ * auVar50._24_4_;
  fVar83 = auVar60._12_4_ * auVar50._28_4_;
  auVar29 = vcmpps_avx(auVar50,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  uVar38 = auVar29._0_4_;
  uVar40 = auVar29._4_4_;
  uVar41 = auVar29._8_4_;
  uVar42 = auVar29._12_4_;
  uVar43 = auVar29._16_4_;
  uVar44 = auVar29._20_4_;
  uVar45 = auVar29._24_4_;
  uVar46 = auVar29._28_4_;
  auVar65._0_4_ = auVar35._0_4_ + (float)(~uVar38 & (uint)(auVar47._0_4_ * fVar74));
  auVar65._4_4_ = auVar35._4_4_ + (float)(~uVar40 & (uint)(auVar47._4_4_ * fVar77));
  auVar65._8_4_ = auVar35._8_4_ + (float)(~uVar41 & (uint)(auVar47._8_4_ * fVar78));
  auVar65._12_4_ = auVar35._12_4_ + (float)(~uVar42 & (uint)(auVar47._12_4_ * fVar79));
  auVar67._16_4_ = auVar35._16_4_ + (float)(~uVar43 & (uint)(auVar47._16_4_ * fVar80));
  auVar67._0_16_ = auVar65;
  auVar67._20_4_ = auVar35._20_4_ + (float)(~uVar44 & (uint)(auVar47._20_4_ * fVar81));
  auVar67._24_4_ = auVar35._24_4_ + (float)(~uVar45 & (uint)(auVar47._24_4_ * fVar82));
  auVar67._28_4_ = auVar35._28_4_ + (float)(~uVar46 & (uint)(auVar47._28_4_ * fVar83));
  uVar16 = vmovmskps_avx(auVar70);
  cVar14 = (char)uVar16;
  iVar28 = auVar30._0_4_;
  auVar60 = auVar30._16_16_;
  auVar68 = auVar67._16_16_;
  auVar64 = auVar61._0_16_;
  auVar53 = auVar61._16_16_;
  iVar22 = auVar30._4_4_;
  iVar15 = auVar30._8_4_;
  iVar18 = auVar30._12_4_;
  iVar69 = auVar30._16_4_;
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + iVar28) = auVar65._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar3 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + iVar22) = uVar3;
  }
  if ((uVar16 & 4) != 0) {
    uVar3 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + iVar15) = uVar3;
  }
  if ((uVar16 & 8) == 0) {
    auVar47 = vdivps_avx(auVar84,auVar62);
  }
  else {
    uVar3 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + iVar18) = uVar3;
    auVar47 = vdivps_avx(auVar84,auVar62);
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + iVar69) = auVar67._16_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar19 = vextractps_avx(auVar60,1);
    uVar3 = vextractps_avx(auVar68,1);
    *(undefined4 *)(param_1 + iVar19) = uVar3;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar19 = vextractps_avx(auVar60,2);
    uVar3 = vextractps_avx(auVar68,2);
    *(undefined4 *)(param_1 + iVar19) = uVar3;
  }
  uVar13 = ~uVar46 & (uint)((float)(~auVar36._28_4_ & auVar47._28_4_) * fVar83);
  uVar12 = ~uVar45 & (uint)((float)(~auVar36._24_4_ & auVar47._24_4_) * fVar82);
  uVar1 = ~uVar44 & (uint)((float)(~auVar36._20_4_ & auVar47._20_4_) * fVar81);
  uVar11 = ~uVar43 & (uint)((float)(~auVar36._16_4_ & auVar47._16_4_) * fVar80);
  uVar10 = ~uVar42 & (uint)((float)(~auVar36._12_4_ & auVar47._12_4_) * fVar79);
  uVar9 = ~uVar41 & (uint)((float)(~auVar36._8_4_ & auVar47._8_4_) * fVar78);
  uVar8 = ~uVar40 & (uint)((float)(~auVar36._4_4_ & auVar47._4_4_) * fVar77);
  uVar3 = ~uVar38 & (uint)((float)(~auVar36._0_4_ & auVar47._0_4_) * fVar74);
  if (cVar14 < '\0') {
    iVar19 = vextractps_avx(auVar60,3);
    uVar2 = vextractps_avx(auVar68,3);
    *(undefined4 *)(param_1 + iVar19) = uVar2;
    auVar33._0_4_ = auVar31._0_4_ + (float)uVar3;
    auVar33._4_4_ = auVar31._4_4_ + (float)uVar8;
    auVar33._8_4_ = auVar31._8_4_ + (float)uVar9;
    auVar33._12_4_ = auVar31._12_4_ + (float)uVar10;
    auVar33._16_4_ = auVar31._16_4_ + (float)uVar11;
    auVar33._20_4_ = auVar31._20_4_ + (float)uVar1;
    auVar33._24_4_ = auVar31._24_4_ + (float)uVar12;
    auVar33._28_4_ = auVar31._28_4_ + (float)uVar13;
  }
  else {
    auVar33._0_4_ = auVar31._0_4_ + (float)uVar3;
    auVar33._4_4_ = auVar31._4_4_ + (float)uVar8;
    auVar33._8_4_ = auVar31._8_4_ + (float)uVar9;
    auVar33._12_4_ = auVar31._12_4_ + (float)uVar10;
    auVar33._16_4_ = auVar31._16_4_ + (float)uVar11;
    auVar33._20_4_ = auVar31._20_4_ + (float)uVar1;
    auVar33._24_4_ = auVar31._24_4_ + (float)uVar12;
    auVar33._28_4_ = auVar31._28_4_ + (float)uVar13;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar28) = auVar33._0_4_;
  }
  auVar65 = auVar33._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar3 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar3;
  }
  if ((uVar16 & 4) != 0) {
    uVar3 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar3;
  }
  if ((uVar16 & 8) == 0) {
    auVar47 = vdivps_avx(auVar59,auVar62);
  }
  else {
    uVar3 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
    auVar47 = vdivps_avx(auVar59,auVar62);
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar69) = auVar33._16_4_;
  }
  auVar65 = auVar33._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar19 = vextractps_avx(auVar60,1);
    uVar3 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar19 = vextractps_avx(auVar60,2);
    uVar3 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
  }
  uVar13 = ~uVar46 & (uint)((float)(~auVar36._28_4_ & auVar47._28_4_) * fVar83);
  uVar12 = ~uVar45 & (uint)((float)(~auVar36._24_4_ & auVar47._24_4_) * fVar82);
  uVar1 = ~uVar44 & (uint)((float)(~auVar36._20_4_ & auVar47._20_4_) * fVar81);
  uVar11 = ~uVar43 & (uint)((float)(~auVar36._16_4_ & auVar47._16_4_) * fVar80);
  uVar10 = ~uVar42 & (uint)((float)(~auVar36._12_4_ & auVar47._12_4_) * fVar79);
  uVar9 = ~uVar41 & (uint)((float)(~auVar36._8_4_ & auVar47._8_4_) * fVar78);
  uVar8 = ~uVar40 & (uint)((float)(~auVar36._4_4_ & auVar47._4_4_) * fVar77);
  uVar3 = ~uVar38 & (uint)((float)(~auVar36._0_4_ & auVar47._0_4_) * fVar74);
  if (cVar14 < '\0') {
    iVar19 = vextractps_avx(auVar60,3);
    uVar2 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar2;
    auVar34._0_4_ = auVar32._0_4_ + (float)uVar3;
    auVar34._4_4_ = auVar32._4_4_ + (float)uVar8;
    auVar34._8_4_ = auVar32._8_4_ + (float)uVar9;
    auVar34._12_4_ = auVar32._12_4_ + (float)uVar10;
    auVar34._16_4_ = auVar32._16_4_ + (float)uVar11;
    auVar34._20_4_ = auVar32._20_4_ + (float)uVar1;
    auVar34._24_4_ = auVar32._24_4_ + (float)uVar12;
    auVar34._28_4_ = auVar32._28_4_ + (float)uVar13;
  }
  else {
    auVar34._0_4_ = auVar32._0_4_ + (float)uVar3;
    auVar34._4_4_ = auVar32._4_4_ + (float)uVar8;
    auVar34._8_4_ = auVar32._8_4_ + (float)uVar9;
    auVar34._12_4_ = auVar32._12_4_ + (float)uVar10;
    auVar34._16_4_ = auVar32._16_4_ + (float)uVar11;
    auVar34._20_4_ = auVar32._20_4_ + (float)uVar1;
    auVar34._24_4_ = auVar32._24_4_ + (float)uVar12;
    auVar34._28_4_ = auVar32._28_4_ + (float)uVar13;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar28) = auVar34._0_4_;
  }
  auVar65 = auVar34._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar3 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar3;
  }
  if ((uVar16 & 4) != 0) {
    uVar3 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar3;
  }
  if ((uVar16 & 8) != 0) {
    uVar3 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar69) = auVar34._16_4_;
  }
  auVar65 = auVar34._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar19 = vextractps_avx(auVar60,1);
    uVar3 = vextractps_avx(auVar65,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar19 = vextractps_avx(auVar60,2);
    uVar3 = vextractps_avx(auVar65,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
  }
  if (cVar14 < '\0') {
    iVar19 = vextractps_avx(auVar60,3);
    uVar3 = vextractps_avx(auVar65,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar28) = auVar61._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar3 = vextractps_avx(auVar64,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
  }
  if ((uVar16 & 4) != 0) {
    uVar3 = vextractps_avx(auVar64,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  if ((uVar16 & 8) != 0) {
    uVar3 = vextractps_avx(auVar64,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar69) = auVar61._16_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar22 = vextractps_avx(auVar60,1);
    uVar3 = vextractps_avx(auVar53,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar22 = vextractps_avx(auVar60,2);
    uVar3 = vextractps_avx(auVar53,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
  }
  if (cVar14 < '\0') {
    iVar22 = vextractps_avx(auVar60,3);
    uVar3 = vextractps_avx(auVar53,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx2 @ 1402e7110

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsScaleWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx2
               (longlong param_1,undefined1 (*param_2) [32],undefined8 param_3,longlong param_4,
               undefined8 param_5,uint param_6,int param_7,undefined1 (*param_8) [32])

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 (*pauVar8) [32];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 in_ZMM2 [64];
  float fVar36;
  int iVar37;
  float fVar46;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined1 in_ZMM3 [64];
  uint uVar47;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  uint uVar56;
  undefined1 auVar57 [32];
  float fVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar77 [16];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [8];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 auVar61 [32];
  undefined1 auVar76 [32];
  
  uVar12 = __real_0000000c;
  uVar11 = __real_00000008;
  uVar10 = __real_00000004;
  uVar9 = __real_3f800000;
  uVar4 = __real_38d1b717;
  auVar48 = *param_8;
  auVar39._4_4_ = param_6;
  auVar39._0_4_ = param_6;
  auVar39._8_4_ = param_6;
  auVar39._12_4_ = param_6;
  auVar39._16_4_ = param_6;
  auVar39._20_4_ = param_6;
  auVar39._24_4_ = param_6;
  auVar39._28_4_ = param_6;
  auVar30 = vpcmpgtd_avx2(auVar39,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar62 = auVar48 & auVar30;
  if ((((((((SUB321(auVar62 >> 0x1f,0) & 1) != 0 || (SUB321(auVar62 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar62 >> 0x5f,0) & 1) != 0) || SUB321(auVar62 >> 0x7f,0) != '\0') ||
        (SUB321(auVar62 >> 0x9f,0) & 1) != 0) || SUB321(auVar62 >> 0xbf,0) != '\0') ||
      (SUB321(auVar62 >> 0xdf,0) & 1) != 0) || auVar62[0x1f] < '\0') {
    auVar62._0_4_ = auVar30._0_4_ & auVar48._0_4_;
    auVar62._4_4_ = auVar30._4_4_ & auVar48._4_4_;
    auVar62._8_4_ = auVar30._8_4_ & auVar48._8_4_;
    auVar62._12_4_ = auVar30._12_4_ & auVar48._12_4_;
    auVar62._16_4_ = auVar30._16_4_ & auVar48._16_4_;
    auVar62._20_4_ = auVar30._20_4_ & auVar48._20_4_;
    auVar62._24_4_ = auVar30._24_4_ & auVar48._24_4_;
    auVar62._28_4_ = auVar30._28_4_ & auVar48._28_4_;
    auVar48 = vpcmpeqd_avx2(auVar48,auVar48);
    auVar48 = auVar48 & ~auVar62;
    if ((((((((SUB321(auVar48 >> 0x1f,0) & 1) == 0 && (SUB321(auVar48 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar48 >> 0x5f,0) & 1) == 0) && SUB321(auVar48 >> 0x7f,0) == '\0') &&
          (SUB321(auVar48 >> 0x9f,0) & 1) == 0) && SUB321(auVar48 >> 0xbf,0) == '\0') &&
        (SUB321(auVar48 >> 0xdf,0) & 1) == 0) && -1 < auVar48[0x1f]) {
      auVar48 = param_2[1];
      auVar62 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar48);
      auVar60 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *param_2);
      auVar62 = vpblendd_avx2(auVar60,auVar62,0x88);
      auVar60 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar48);
      auVar31 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            param_2[2]);
      auVar60 = vpblendd_avx2(auVar31,auVar60,0x13);
      auVar31._16_16_ = ZEXT116(0) * auVar62._16_16_ | ZEXT116(1) * auVar60._0_16_;
      auVar31._0_16_ = ZEXT116(0) * auVar60._0_16_ | ZEXT116(1) * auVar62._0_16_;
      auVar60 = vperm2i128_avx2(auVar62,auVar60,0x31);
      auVar48 = vpblendd_avx2(auVar48,*param_2,0x24);
      auVar48 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar48);
      in_ZMM3 = ZEXT3264(auVar48);
      auVar33._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar33._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar62 = vpermd_avx2(auVar33,param_2[2]);
      auVar48 = vpblendd_avx2(auVar48,auVar62,0xe0);
    }
    else {
      auVar31 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar62);
      auVar60 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar62);
      auVar48 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar62);
      in_ZMM3 = ZEXT3264((undefined1  [32])0x0);
    }
    local_380 = vmaskmovps_avx(auVar30,auVar31);
    local_360 = vmaskmovps_avx(auVar30,auVar60);
    _local_340 = vmaskmovps_avx(auVar30,auVar48);
  }
  uVar16 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  fVar58 = in_ZMM2._0_4_;
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    iVar22 = 0;
  }
  else {
    iVar22 = 0;
    pauVar8 = param_2;
    do {
      auVar68 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + (int)local_360._0_4_)),
                            (uint)*(byte *)(param_4 + (int)local_360._4_4_),1);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + (int)local_360._8_4_),2);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + (int)local_360._12_4_),3);
      auVar48._0_4_ =
           iVar22 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
      auVar48._4_4_ = iVar22 + _UNK_150b51904;
      auVar48._8_4_ = iVar22 + _UNK_150b51908;
      auVar48._12_4_ = iVar22 + _UNK_150b5190c;
      auVar48._16_4_ = iVar22 + _UNK_150b51910;
      auVar48._20_4_ = iVar22 + _UNK_150b51914;
      auVar48._24_4_ = iVar22 + _UNK_150b51918;
      auVar48._28_4_ = iVar22 + _UNK_150b5191c;
      auVar30._0_4_ = param_7 + local_380._0_4_;
      auVar30._4_4_ = param_7 + local_380._4_4_;
      auVar30._8_4_ = param_7 + local_380._8_4_;
      auVar30._12_4_ = param_7 + local_380._12_4_;
      auVar30._16_4_ = param_7 + local_380._16_4_;
      auVar30._20_4_ = param_7 + local_380._20_4_;
      auVar30._24_4_ = param_7 + local_380._24_4_;
      auVar30._28_4_ = param_7 + local_380._28_4_;
      auVar30 = vpslld_avx2(auVar30,4);
      auVar62 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar62);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + (int)local_360._16_4_),4);
      auVar67._4_4_ = uVar10;
      auVar67._0_4_ = uVar10;
      auVar67._8_4_ = uVar10;
      auVar67._12_4_ = uVar10;
      auVar67._16_4_ = uVar10;
      auVar67._20_4_ = uVar10;
      auVar67._24_4_ = uVar10;
      auVar67._28_4_ = uVar10;
      auVar62 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar82 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar62);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + (int)local_360._20_4_),5);
      auVar1._4_4_ = uVar11;
      auVar1._0_4_ = uVar11;
      auVar1._8_4_ = uVar11;
      auVar1._12_4_ = uVar11;
      auVar1._16_4_ = uVar11;
      auVar1._20_4_ = uVar11;
      auVar1._24_4_ = uVar11;
      auVar1._28_4_ = uVar11;
      auVar62 = vpcmpeqd_avx2(auVar30 | auVar67,auVar30 | auVar67);
      auVar71 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar62);
      auVar60._0_4_ = param_7 + local_360._0_4_;
      auVar60._4_4_ = param_7 + local_360._4_4_;
      auVar60._8_4_ = param_7 + local_360._8_4_;
      auVar60._12_4_ = param_7 + local_360._12_4_;
      auVar60._16_4_ = param_7 + local_360._16_4_;
      auVar60._20_4_ = param_7 + local_360._20_4_;
      auVar60._24_4_ = param_7 + local_360._24_4_;
      auVar60._28_4_ = param_7 + local_360._28_4_;
      auVar79 = vpslld_avx2(auVar60,4);
      vpor_avx2(auVar79,auVar67);
      auVar62 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar33 = vgatherdps(ZEXT832(0),auVar62);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + (int)local_360._24_4_),6);
      auVar30 = vpor_avx2(auVar79,auVar1);
      auVar62 = vpcmpeqd_avx2(auVar67,auVar67);
      auVar31 = vgatherdps(ZEXT832(0) << 0x20,auVar62);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + (int)local_360._28_4_),7);
      auVar70._4_4_ = uVar12;
      auVar70._0_4_ = uVar12;
      auVar70._8_4_ = uVar12;
      auVar70._12_4_ = uVar12;
      auVar70._16_4_ = uVar12;
      auVar70._20_4_ = uVar12;
      auVar70._24_4_ = uVar12;
      auVar70._28_4_ = uVar12;
      auVar60 = vpor_avx2(auVar79,auVar70);
      auVar62 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar30 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar62);
      auVar62 = vpcmpeqd_avx2(auVar60,auVar60);
      auVar62 = vgatherdps(ZEXT832(0) << 0x20,auVar62);
      uVar2 = local_340._0_4_;
      uVar13 = local_340._4_4_;
      fVar36 = fStack_338;
      fVar40 = fStack_334;
      fVar41 = fStack_330;
      fVar42 = fStack_32c;
      fVar43 = fStack_328;
      fVar44 = fStack_324;
      auVar48 = vpcmpgtd_avx2(auVar39,auVar48);
      iVar17 = vmovmskps_avx(auVar48);
      if (iVar17 != 0) {
        if ((char)iVar17 == -1) {
          auVar60 = pauVar8[3];
          auVar1 = pauVar8[4];
          auVar70 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                ,auVar1);
          auVar67 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar60);
          auVar70 = vpblendd_avx2(auVar67,auVar70,0x88);
          auVar67 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                ,auVar1);
          auVar75 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,pauVar8[5]);
          auVar67 = vpblendd_avx2(auVar75,auVar67,0x13);
          auVar75._16_16_ = ZEXT116(0) * auVar70._16_16_ | ZEXT116(1) * auVar67._0_16_;
          auVar75._0_16_ = ZEXT116(0) * auVar67._0_16_ | ZEXT116(1) * auVar70._0_16_;
          auVar70 = vperm2i128_avx2(auVar70,auVar67,0x31);
          auVar60 = vpblendd_avx2(auVar1,auVar60,0x24);
          auVar60 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar60);
          auVar38._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar38._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar1 = vpermd_avx2(auVar38,pauVar8[5]);
          auVar60 = vpblendd_avx2(auVar60,auVar1,0xe0);
        }
        else {
          auVar75 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar48);
          auVar70 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar48);
          auVar60 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar48);
        }
        local_380 = vmaskmovps_avx(auVar48,auVar75);
        local_360 = vmaskmovps_avx(auVar48,auVar70);
        _local_340 = vmaskmovps_avx(auVar48,auVar60);
      }
      auVar60 = vpmovzxbd_avx2(auVar68);
      auVar60 = vpslld_avx2(auVar60,2);
      vpmovzxdq_avx2(auVar60._16_16_);
      auVar60 = vpmovzxdq_avx2(auVar60._0_16_);
      auVar68 = vpcmpeqd_avx(auVar48._0_16_,auVar48._0_16_);
      auVar73 = vgatherqps((undefined1  [16])0x0,auVar68);
      auVar68 = vpcmpeqd_avx(auVar60._0_16_,auVar60._0_16_);
      auVar68 = vgatherqps(ZEXT816(0) << 0x40,auVar68);
      auVar48 = vsubps_avx(auVar81,auVar62);
      auVar60 = vsubps_avx(auVar82,auVar33);
      auVar67 = vsubps_avx(auVar71,auVar31);
      auVar78._0_4_ =
           auVar67._0_4_ * auVar67._0_4_ +
           auVar48._0_4_ * auVar48._0_4_ + auVar60._0_4_ * auVar60._0_4_;
      auVar78._4_4_ =
           auVar67._4_4_ * auVar67._4_4_ +
           auVar48._4_4_ * auVar48._4_4_ + auVar60._4_4_ * auVar60._4_4_;
      auVar78._8_4_ =
           auVar67._8_4_ * auVar67._8_4_ +
           auVar48._8_4_ * auVar48._8_4_ + auVar60._8_4_ * auVar60._8_4_;
      auVar78._12_4_ =
           auVar67._12_4_ * auVar67._12_4_ +
           auVar48._12_4_ * auVar48._12_4_ + auVar60._12_4_ * auVar60._12_4_;
      auVar78._16_4_ =
           auVar67._16_4_ * auVar67._16_4_ +
           auVar48._16_4_ * auVar48._16_4_ + auVar60._16_4_ * auVar60._16_4_;
      auVar78._20_4_ =
           auVar67._20_4_ * auVar67._20_4_ +
           auVar48._20_4_ * auVar48._20_4_ + auVar60._20_4_ * auVar60._20_4_;
      auVar78._24_4_ =
           auVar67._24_4_ * auVar67._24_4_ +
           auVar48._24_4_ * auVar48._24_4_ + auVar60._24_4_ * auVar60._24_4_;
      auVar78._28_4_ =
           auVar67._28_4_ * auVar67._28_4_ +
           auVar48._28_4_ * auVar48._28_4_ + auVar60._28_4_ * auVar60._28_4_;
      auVar70 = vsqrtps_avx(auVar78);
      auVar48 = vdivps_avx(auVar48,auVar70);
      auVar1 = vdivps_avx(auVar60,auVar70);
      auVar67 = vdivps_avx(auVar67,auVar70);
      auVar81._4_4_ = uVar4;
      auVar81._0_4_ = uVar4;
      auVar81._8_4_ = uVar4;
      auVar81._12_4_ = uVar4;
      auVar81._16_4_ = uVar4;
      auVar81._20_4_ = uVar4;
      auVar81._24_4_ = uVar4;
      auVar81._28_4_ = uVar4;
      auVar60 = vcmpps_avx(auVar70,auVar81,1);
      auVar71._4_4_ = uVar9;
      auVar71._0_4_ = uVar9;
      auVar71._8_4_ = uVar9;
      auVar71._12_4_ = uVar9;
      auVar71._16_4_ = uVar9;
      auVar71._20_4_ = uVar9;
      auVar71._24_4_ = uVar9;
      auVar71._28_4_ = uVar9;
      auVar48 = vblendvps_avx(auVar48,auVar71,auVar60);
      auVar69._0_4_ = -((float)uVar2 * auVar73._0_4_) + auVar70._0_4_;
      auVar69._4_4_ = -((float)uVar13 * auVar73._4_4_) + auVar70._4_4_;
      auVar69._8_4_ = -(fVar36 * auVar73._8_4_) + auVar70._8_4_;
      auVar69._12_4_ = -(fVar40 * auVar73._12_4_) + auVar70._12_4_;
      auVar69._16_4_ = -(fVar41 * auVar68._0_4_) + auVar70._16_4_;
      auVar69._20_4_ = -(fVar42 * auVar68._4_4_) + auVar70._20_4_;
      auVar69._24_4_ = -(fVar43 * auVar68._8_4_) + auVar70._24_4_;
      auVar69._28_4_ = -(fVar44 * auVar68._12_4_) + auVar70._28_4_;
      fVar36 = auVar69._0_4_ * fVar58;
      fVar40 = auVar69._4_4_ * fVar58;
      fVar41 = auVar69._8_4_ * fVar58;
      fVar42 = auVar69._12_4_ * fVar58;
      fVar43 = auVar69._16_4_ * fVar58;
      fVar44 = auVar69._20_4_ * fVar58;
      fVar45 = auVar69._24_4_ * fVar58;
      fVar46 = auVar69._28_4_ * fVar58;
      in_ZMM3 = ZEXT3264(CONCAT428(fVar46,CONCAT424(fVar45,CONCAT420(fVar44,CONCAT416(fVar43,
                                                  CONCAT412(fVar42,CONCAT48(fVar41,CONCAT44(fVar40,
                                                  fVar36))))))));
      auVar70 = vcmpps_avx(auVar69,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar47 = auVar70._0_4_;
      uVar50 = auVar70._4_4_;
      uVar51 = auVar70._8_4_;
      uVar52 = auVar70._12_4_;
      uVar53 = auVar70._16_4_;
      uVar54 = auVar70._20_4_;
      uVar55 = auVar70._24_4_;
      uVar56 = auVar70._28_4_;
      auVar59._0_4_ = auVar62._0_4_ + (float)(~uVar47 & (uint)(auVar48._0_4_ * fVar36));
      auVar59._4_4_ = auVar62._4_4_ + (float)(~uVar50 & (uint)(auVar48._4_4_ * fVar40));
      auVar59._8_4_ = auVar62._8_4_ + (float)(~uVar51 & (uint)(auVar48._8_4_ * fVar41));
      auVar59._12_4_ = auVar62._12_4_ + (float)(~uVar52 & (uint)(auVar48._12_4_ * fVar42));
      auVar61._16_4_ = auVar62._16_4_ + (float)(~uVar53 & (uint)(auVar48._16_4_ * fVar43));
      auVar61._0_16_ = auVar59;
      auVar61._20_4_ = auVar62._20_4_ + (float)(~uVar54 & (uint)(auVar48._20_4_ * fVar44));
      auVar61._24_4_ = auVar62._24_4_ + (float)(~uVar55 & (uint)(auVar48._24_4_ * fVar45));
      auVar61._28_4_ = auVar62._28_4_ + (float)(~uVar56 & (uint)(auVar48._28_4_ * fVar46));
      lVar21 = (longlong)auVar79._0_4_;
      *(float *)(param_1 + lVar21) = auVar59._0_4_;
      lVar27 = (longlong)auVar79._4_4_;
      uVar2 = vextractps_avx(auVar59,1);
      *(undefined4 *)(param_1 + lVar27) = uVar2;
      lVar28 = (longlong)auVar79._8_4_;
      uVar2 = vextractps_avx(auVar59,2);
      *(undefined4 *)(param_1 + lVar28) = uVar2;
      lVar26 = (longlong)auVar79._12_4_;
      uVar2 = vextractps_avx(auVar59,3);
      *(undefined4 *)(param_1 + lVar26) = uVar2;
      lVar25 = (longlong)auVar79._16_4_;
      auVar68 = auVar61._16_16_;
      *(float *)(param_1 + lVar25) = auVar61._16_4_;
      lVar24 = (longlong)auVar79._20_4_;
      uVar2 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + lVar24) = uVar2;
      lVar20 = (longlong)auVar79._24_4_;
      uVar2 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + lVar20) = uVar2;
      lVar23 = (longlong)auVar79._28_4_;
      uVar2 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + lVar23) = uVar2;
      auVar73._0_4_ =
           auVar33._0_4_ +
           (float)(~uVar47 & (uint)((float)(~auVar60._0_4_ & auVar1._0_4_) * fVar36));
      auVar73._4_4_ =
           auVar33._4_4_ +
           (float)(~uVar50 & (uint)((float)(~auVar60._4_4_ & auVar1._4_4_) * fVar40));
      auVar73._8_4_ =
           auVar33._8_4_ +
           (float)(~uVar51 & (uint)((float)(~auVar60._8_4_ & auVar1._8_4_) * fVar41));
      auVar73._12_4_ =
           auVar33._12_4_ +
           (float)(~uVar52 & (uint)((float)(~auVar60._12_4_ & auVar1._12_4_) * fVar42));
      auVar82._16_4_ =
           auVar33._16_4_ +
           (float)(~uVar53 & (uint)((float)(~auVar60._16_4_ & auVar1._16_4_) * fVar43));
      auVar82._0_16_ = auVar73;
      auVar82._20_4_ =
           auVar33._20_4_ +
           (float)(~uVar54 & (uint)((float)(~auVar60._20_4_ & auVar1._20_4_) * fVar44));
      auVar82._24_4_ =
           auVar33._24_4_ +
           (float)(~uVar55 & (uint)((float)(~auVar60._24_4_ & auVar1._24_4_) * fVar45));
      auVar82._28_4_ =
           auVar33._28_4_ +
           (float)(~uVar56 & (uint)((float)(~auVar60._28_4_ & auVar1._28_4_) * fVar46));
      *(float *)(param_1 + 4 + lVar21) = auVar73._0_4_;
      uVar2 = vextractps_avx(auVar73,1);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar73,2);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar2;
      uVar2 = vextractps_avx(auVar73,3);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar2;
      auVar68 = auVar82._16_16_;
      *(float *)(param_1 + 4 + lVar25) = auVar82._16_4_;
      uVar2 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar2;
      uVar2 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 4 + lVar20) = uVar2;
      fVar36 = (float)(~auVar60._0_4_ & auVar67._0_4_) * fVar36;
      fVar40 = (float)(~auVar60._4_4_ & auVar67._4_4_) * fVar40;
      fVar41 = (float)(~auVar60._8_4_ & auVar67._8_4_) * fVar41;
      fVar42 = (float)(~auVar60._12_4_ & auVar67._12_4_) * fVar42;
      fVar43 = (float)(~auVar60._16_4_ & auVar67._16_4_) * fVar43;
      fVar44 = (float)(~auVar60._20_4_ & auVar67._20_4_) * fVar44;
      fVar45 = (float)(~auVar60._24_4_ & auVar67._24_4_) * fVar45;
      fVar46 = (float)(~auVar60._28_4_ & auVar67._28_4_) * fVar46;
      in_ZMM2 = ZEXT3264(CONCAT428(fVar46,CONCAT424(fVar45,CONCAT420(fVar44,CONCAT416(fVar43,
                                                  CONCAT412(fVar42,CONCAT48(fVar41,CONCAT44(fVar40,
                                                  fVar36))))))));
      uVar2 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar2;
      auVar68._0_4_ = auVar31._0_4_ + (float)(~uVar47 & (uint)fVar36);
      auVar68._4_4_ = auVar31._4_4_ + (float)(~uVar50 & (uint)fVar40);
      auVar68._8_4_ = auVar31._8_4_ + (float)(~uVar51 & (uint)fVar41);
      auVar68._12_4_ = auVar31._12_4_ + (float)(~uVar52 & (uint)fVar42);
      auVar79._16_4_ = auVar31._16_4_ + (float)(~uVar53 & (uint)fVar43);
      auVar79._0_16_ = auVar68;
      auVar79._20_4_ = auVar31._20_4_ + (float)(~uVar54 & (uint)fVar44);
      auVar79._24_4_ = auVar31._24_4_ + (float)(~uVar55 & (uint)fVar45);
      auVar79._28_4_ = auVar31._28_4_ + (float)(~uVar56 & (uint)fVar46);
      *(float *)(param_1 + 8 + lVar21) = auVar68._0_4_;
      uVar2 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar2;
      uVar2 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar2;
      auVar68 = auVar79._16_16_;
      *(float *)(param_1 + 8 + lVar25) = auVar79._16_4_;
      uVar2 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar2;
      uVar2 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 8 + lVar20) = uVar2;
      uVar2 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar2;
      *(int *)(param_1 + 0xc + lVar21) = auVar30._0_4_;
      auVar68 = auVar30._0_16_;
      uVar2 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar2;
      uVar2 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar2;
      auVar68 = auVar30._16_16_;
      *(int *)(param_1 + 0xc + lVar25) = auVar30._16_4_;
      uVar2 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar2;
      uVar2 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 0xc + lVar20) = uVar2;
      uVar2 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar2;
      iVar22 = iVar22 + 8;
      pauVar8 = pauVar8 + 3;
    } while (iVar22 < (int)(uVar16 & 0xfffffff8));
  }
  if ((int)param_6 <= iVar22) {
    return;
  }
  auVar63._4_4_ = iVar22;
  auVar63._0_4_ = iVar22;
  auVar63._8_4_ = iVar22;
  auVar63._12_4_ = iVar22;
  auVar63._16_4_ = iVar22;
  auVar63._20_4_ = iVar22;
  auVar63._24_4_ = iVar22;
  auVar63._28_4_ = iVar22;
  auVar67 = vpor_avx2(auVar63,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar1 = vpcmpgtd_avx2(auVar39,auVar67);
  auVar5._0_4_ = param_7 + local_380._0_4_;
  auVar5._4_4_ = param_7 + local_380._4_4_;
  auVar5._8_4_ = param_7 + local_380._8_4_;
  auVar5._12_4_ = param_7 + local_380._12_4_;
  auVar5._16_4_ = param_7 + local_380._16_4_;
  auVar5._20_4_ = param_7 + local_380._20_4_;
  auVar5._24_4_ = param_7 + local_380._24_4_;
  auVar5._28_4_ = param_7 + local_380._28_4_;
  vpslld_avx2(auVar5,4);
  auVar49._4_4_ = __real_00000004;
  auVar49._0_4_ = __real_00000004;
  auVar49._8_4_ = __real_00000004;
  auVar49._12_4_ = __real_00000004;
  auVar49._16_4_ = __real_00000004;
  auVar49._20_4_ = __real_00000004;
  auVar49._24_4_ = __real_00000004;
  auVar49._28_4_ = __real_00000004;
  auVar48 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar1);
  auVar62 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar1);
  auVar66._4_4_ = __real_00000008;
  auVar66._0_4_ = __real_00000008;
  auVar66._8_4_ = __real_00000008;
  auVar66._12_4_ = __real_00000008;
  auVar66._16_4_ = __real_00000008;
  auVar66._20_4_ = __real_00000008;
  auVar66._24_4_ = __real_00000008;
  auVar66._28_4_ = __real_00000008;
  auVar30 = vgatherdps(ZEXT832(0),auVar1);
  auVar6._0_4_ = local_360._0_4_ + param_7;
  auVar6._4_4_ = local_360._4_4_ + param_7;
  auVar6._8_4_ = local_360._8_4_ + param_7;
  auVar6._12_4_ = local_360._12_4_ + param_7;
  auVar6._16_4_ = local_360._16_4_ + param_7;
  auVar6._20_4_ = local_360._20_4_ + param_7;
  auVar6._24_4_ = local_360._24_4_ + param_7;
  auVar6._28_4_ = local_360._28_4_ + param_7;
  auVar71 = vpslld_avx2(auVar6,4);
  vpor_avx2(auVar71,auVar49);
  auVar31 = vgatherdps(ZEXT432(0) << 0x20,auVar1);
  vpor_avx2(auVar71,auVar66);
  auVar33 = vgatherdps(ZEXT432(0) << 0x20,auVar1);
  auVar32._4_4_ = __real_0000000c;
  auVar32._0_4_ = __real_0000000c;
  auVar32._8_4_ = __real_0000000c;
  auVar32._12_4_ = __real_0000000c;
  auVar32._16_4_ = __real_0000000c;
  auVar32._20_4_ = __real_0000000c;
  auVar32._24_4_ = __real_0000000c;
  auVar32._28_4_ = __real_0000000c;
  vpor_avx2(auVar71,auVar32);
  auVar79 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar1);
  auVar60 = vgatherdps(ZEXT832(0) << 0x20,auVar1);
  auVar48 = vmaskmovps_avx(auVar1,auVar48);
  auVar62 = vmaskmovps_avx(auVar1,auVar62);
  auVar30 = vmaskmovps_avx(auVar1,auVar30);
  auVar60 = vmaskmovps_avx(auVar1,auVar60);
  auVar31 = vmaskmovps_avx(auVar1,auVar31);
  auVar70 = vpand_avx2(local_360,auVar1);
  auVar33 = vmaskmovps_avx(auVar1,auVar33);
  auVar68 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + auVar70._0_4_)),
                        (uint)*(byte *)(param_4 + auVar70._4_4_),1);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + auVar70._8_4_),2);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + auVar70._12_4_),3);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + auVar70._16_4_),4);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + auVar70._20_4_),5);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + auVar70._24_4_),6);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_4 + auVar70._28_4_),7);
  auVar7._0_4_ = iVar22 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
  auVar7._4_4_ = iVar22 + _UNK_150b51904;
  auVar7._8_4_ = iVar22 + _UNK_150b51908;
  auVar7._12_4_ = iVar22 + _UNK_150b5190c;
  auVar7._16_4_ = iVar22 + _UNK_150b51910;
  auVar7._20_4_ = iVar22 + _UNK_150b51914;
  auVar7._24_4_ = iVar22 + _UNK_150b51918;
  auVar7._28_4_ = iVar22 + _UNK_150b5191c;
  auVar39 = vpcmpgtd_avx2(auVar39,auVar7);
  iVar22 = vmovmskps_avx(auVar39);
  if (iVar22 != 0) {
    auVar39 = vpand_avx2(auVar39,auVar1);
    uVar16 = auVar67._0_4_;
    if ((char)iVar22 == -1) {
      auVar70 = *(undefined1 (*) [32])(param_2[4] + (ulonglong)uVar16 * 0xc);
      auVar67 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar70);
      auVar81 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar16 * 0xc));
      auVar67 = vpblendd_avx2(auVar81,auVar67,0x88);
      auVar81 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar70);
      auVar82 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar16 * 0xc));
      auVar81 = vpblendd_avx2(auVar82,auVar81,0x13);
      auVar57._16_16_ = ZEXT116(0) * auVar67._16_16_ | ZEXT116(1) * auVar81._0_16_;
      auVar57._0_16_ = ZEXT116(0) * auVar81._0_16_ | ZEXT116(1) * auVar67._0_16_;
      auVar67 = vperm2i128_avx2(auVar67,auVar81,0x31);
      auVar70 = vpblendd_avx2(auVar70,*(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar16 * 0xc),
                              0x24);
      auVar70 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar70);
      auVar72._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar72._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar81 = vpermd_avx2(auVar72,*(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar16 * 0xc));
      auVar70 = vpblendd_avx2(auVar70,auVar81,0xe0);
    }
    else {
      auVar57 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar39);
      auVar67 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar39);
      auVar70 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar39);
    }
    vmaskmovps_avx(auVar39,auVar57);
    vmaskmovps_avx(auVar39,auVar67);
    vmaskmovps_avx(auVar39,auVar70);
  }
  auVar39 = vpmovzxbd_avx2(auVar68);
  auVar39 = vpslld_avx2(auVar39,2);
  vpmovzxdq_avx2(auVar39._16_16_);
  vpmovzxdq_avx2(auVar39._0_16_);
  auVar73 = vgatherqps(ZEXT816(0) << 0x20,auVar1._0_16_);
  auVar68 = vgatherqps(ZEXT816(0) << 0x40,auVar1._16_16_);
  auVar48 = vsubps_avx(auVar48,auVar60);
  auVar70 = vsubps_avx(auVar62,auVar31);
  auVar67 = vsubps_avx(auVar30,auVar33);
  auVar64._0_4_ =
       auVar67._0_4_ * auVar67._0_4_ + auVar48._0_4_ * auVar48._0_4_ + auVar70._0_4_ * auVar70._0_4_
  ;
  auVar64._4_4_ =
       auVar67._4_4_ * auVar67._4_4_ + auVar48._4_4_ * auVar48._4_4_ + auVar70._4_4_ * auVar70._4_4_
  ;
  auVar64._8_4_ =
       auVar67._8_4_ * auVar67._8_4_ + auVar48._8_4_ * auVar48._8_4_ + auVar70._8_4_ * auVar70._8_4_
  ;
  auVar64._12_4_ =
       auVar67._12_4_ * auVar67._12_4_ +
       auVar48._12_4_ * auVar48._12_4_ + auVar70._12_4_ * auVar70._12_4_;
  auVar64._16_4_ =
       auVar67._16_4_ * auVar67._16_4_ +
       auVar48._16_4_ * auVar48._16_4_ + auVar70._16_4_ * auVar70._16_4_;
  auVar64._20_4_ =
       auVar67._20_4_ * auVar67._20_4_ +
       auVar48._20_4_ * auVar48._20_4_ + auVar70._20_4_ * auVar70._20_4_;
  auVar64._24_4_ =
       auVar67._24_4_ * auVar67._24_4_ +
       auVar48._24_4_ * auVar48._24_4_ + auVar70._24_4_ * auVar70._24_4_;
  auVar64._28_4_ =
       auVar67._28_4_ * auVar67._28_4_ +
       auVar48._28_4_ * auVar48._28_4_ + auVar70._28_4_ * auVar70._28_4_;
  auVar39 = vsqrtps_avx(auVar64);
  auVar65._4_4_ = __real_38d1b717;
  auVar65._0_4_ = __real_38d1b717;
  auVar65._8_4_ = __real_38d1b717;
  auVar65._12_4_ = __real_38d1b717;
  auVar65._16_4_ = __real_38d1b717;
  auVar65._20_4_ = __real_38d1b717;
  auVar65._24_4_ = __real_38d1b717;
  auVar65._28_4_ = __real_38d1b717;
  auVar62 = vcmpps_avx(auVar39,auVar65,1);
  auVar48 = vdivps_avx(auVar48,auVar39);
  auVar83._4_4_ = __real_3f800000;
  auVar83._0_4_ = __real_3f800000;
  auVar83._8_4_ = __real_3f800000;
  auVar83._12_4_ = __real_3f800000;
  auVar83._16_4_ = __real_3f800000;
  auVar83._20_4_ = __real_3f800000;
  auVar83._24_4_ = __real_3f800000;
  auVar83._28_4_ = __real_3f800000;
  auVar48 = vblendvps_avx(auVar48,auVar83,auVar62);
  auVar80._0_4_ = -((float)local_340._0_4_ * auVar73._0_4_) + auVar39._0_4_;
  auVar80._4_4_ = -((float)local_340._4_4_ * auVar73._4_4_) + auVar39._4_4_;
  auVar80._8_4_ = -(fStack_338 * auVar73._8_4_) + auVar39._8_4_;
  auVar80._12_4_ = -(fStack_334 * auVar73._12_4_) + auVar39._12_4_;
  auVar80._16_4_ = -(fStack_330 * auVar68._0_4_) + auVar39._16_4_;
  auVar80._20_4_ = -(fStack_32c * auVar68._4_4_) + auVar39._20_4_;
  auVar80._24_4_ = -(fStack_328 * auVar68._8_4_) + auVar39._24_4_;
  auVar80._28_4_ = -(fStack_324 * auVar68._12_4_) + auVar39._28_4_;
  fVar36 = auVar80._0_4_ * fVar58;
  fVar40 = auVar80._4_4_ * fVar58;
  fVar41 = auVar80._8_4_ * fVar58;
  fVar42 = auVar80._12_4_ * fVar58;
  fVar43 = auVar80._16_4_ * fVar58;
  fVar44 = auVar80._20_4_ * fVar58;
  fVar45 = auVar80._24_4_ * fVar58;
  fVar58 = auVar80._28_4_ * fVar58;
  auVar30 = vcmpps_avx(auVar80,SUB6432(ZEXT1664((undefined1  [16])0x0),0),1);
  uVar47 = auVar30._0_4_;
  uVar50 = auVar30._4_4_;
  uVar51 = auVar30._8_4_;
  uVar52 = auVar30._12_4_;
  uVar53 = auVar30._16_4_;
  uVar54 = auVar30._20_4_;
  uVar55 = auVar30._24_4_;
  uVar56 = auVar30._28_4_;
  auVar74._0_4_ = auVar60._0_4_ + (float)(~uVar47 & (uint)(auVar48._0_4_ * fVar36));
  auVar74._4_4_ = auVar60._4_4_ + (float)(~uVar50 & (uint)(auVar48._4_4_ * fVar40));
  auVar74._8_4_ = auVar60._8_4_ + (float)(~uVar51 & (uint)(auVar48._8_4_ * fVar41));
  auVar74._12_4_ = auVar60._12_4_ + (float)(~uVar52 & (uint)(auVar48._12_4_ * fVar42));
  auVar76._16_4_ = auVar60._16_4_ + (float)(~uVar53 & (uint)(auVar48._16_4_ * fVar43));
  auVar76._0_16_ = auVar74;
  auVar76._20_4_ = auVar60._20_4_ + (float)(~uVar54 & (uint)(auVar48._20_4_ * fVar44));
  auVar76._24_4_ = auVar60._24_4_ + (float)(~uVar55 & (uint)(auVar48._24_4_ * fVar45));
  auVar76._28_4_ = auVar60._28_4_ + (float)(~uVar56 & (uint)(auVar48._28_4_ * fVar58));
  uVar16 = vmovmskps_avx(auVar1);
  cVar15 = (char)uVar16;
  iVar29 = auVar71._0_4_;
  auVar68 = auVar71._16_16_;
  auVar77 = auVar76._16_16_;
  auVar73 = auVar79._0_16_;
  auVar59 = auVar79._16_16_;
  iVar22 = auVar71._4_4_;
  iVar17 = auVar71._8_4_;
  iVar18 = auVar71._12_4_;
  iVar37 = auVar71._16_4_;
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + iVar29) = auVar74._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + iVar22) = uVar4;
  }
  if ((uVar16 & 4) != 0) {
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + iVar17) = uVar4;
  }
  if ((uVar16 & 8) == 0) {
    auVar48 = vdivps_avx(auVar70,auVar39);
  }
  else {
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + iVar18) = uVar4;
    auVar48 = vdivps_avx(auVar70,auVar39);
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + iVar37) = auVar76._16_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar19 = vextractps_avx(auVar68,1);
    uVar4 = vextractps_avx(auVar77,1);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar19 = vextractps_avx(auVar68,2);
    uVar4 = vextractps_avx(auVar77,2);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
  }
  uVar14 = ~uVar56 & (uint)((float)(~auVar62._28_4_ & auVar48._28_4_) * fVar58);
  uVar13 = ~uVar55 & (uint)((float)(~auVar62._24_4_ & auVar48._24_4_) * fVar45);
  uVar2 = ~uVar54 & (uint)((float)(~auVar62._20_4_ & auVar48._20_4_) * fVar44);
  uVar12 = ~uVar53 & (uint)((float)(~auVar62._16_4_ & auVar48._16_4_) * fVar43);
  uVar11 = ~uVar52 & (uint)((float)(~auVar62._12_4_ & auVar48._12_4_) * fVar42);
  uVar10 = ~uVar51 & (uint)((float)(~auVar62._8_4_ & auVar48._8_4_) * fVar41);
  uVar9 = ~uVar50 & (uint)((float)(~auVar62._4_4_ & auVar48._4_4_) * fVar40);
  uVar4 = ~uVar47 & (uint)((float)(~auVar62._0_4_ & auVar48._0_4_) * fVar36);
  if (cVar15 < '\0') {
    iVar19 = vextractps_avx(auVar68,3);
    uVar3 = vextractps_avx(auVar77,3);
    *(undefined4 *)(param_1 + iVar19) = uVar3;
    auVar34._0_4_ = auVar31._0_4_ + (float)uVar4;
    auVar34._4_4_ = auVar31._4_4_ + (float)uVar9;
    auVar34._8_4_ = auVar31._8_4_ + (float)uVar10;
    auVar34._12_4_ = auVar31._12_4_ + (float)uVar11;
    auVar34._16_4_ = auVar31._16_4_ + (float)uVar12;
    auVar34._20_4_ = auVar31._20_4_ + (float)uVar2;
    auVar34._24_4_ = auVar31._24_4_ + (float)uVar13;
    auVar34._28_4_ = auVar31._28_4_ + (float)uVar14;
  }
  else {
    auVar34._0_4_ = auVar31._0_4_ + (float)uVar4;
    auVar34._4_4_ = auVar31._4_4_ + (float)uVar9;
    auVar34._8_4_ = auVar31._8_4_ + (float)uVar10;
    auVar34._12_4_ = auVar31._12_4_ + (float)uVar11;
    auVar34._16_4_ = auVar31._16_4_ + (float)uVar12;
    auVar34._20_4_ = auVar31._20_4_ + (float)uVar2;
    auVar34._24_4_ = auVar31._24_4_ + (float)uVar13;
    auVar34._28_4_ = auVar31._28_4_ + (float)uVar14;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar29) = auVar34._0_4_;
  }
  auVar74 = auVar34._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar4;
  }
  if ((uVar16 & 4) != 0) {
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar4;
  }
  if ((uVar16 & 8) == 0) {
    auVar48 = vdivps_avx(auVar67,auVar39);
  }
  else {
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar4;
    auVar48 = vdivps_avx(auVar67,auVar39);
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar37) = auVar34._16_4_;
  }
  auVar74 = auVar34._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar19 = vextractps_avx(auVar68,1);
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar19 = vextractps_avx(auVar68,2);
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
  }
  uVar14 = ~uVar56 & (uint)((float)(~auVar62._28_4_ & auVar48._28_4_) * fVar58);
  uVar13 = ~uVar55 & (uint)((float)(~auVar62._24_4_ & auVar48._24_4_) * fVar45);
  uVar2 = ~uVar54 & (uint)((float)(~auVar62._20_4_ & auVar48._20_4_) * fVar44);
  uVar12 = ~uVar53 & (uint)((float)(~auVar62._16_4_ & auVar48._16_4_) * fVar43);
  uVar11 = ~uVar52 & (uint)((float)(~auVar62._12_4_ & auVar48._12_4_) * fVar42);
  uVar10 = ~uVar51 & (uint)((float)(~auVar62._8_4_ & auVar48._8_4_) * fVar41);
  uVar9 = ~uVar50 & (uint)((float)(~auVar62._4_4_ & auVar48._4_4_) * fVar40);
  uVar4 = ~uVar47 & (uint)((float)(~auVar62._0_4_ & auVar48._0_4_) * fVar36);
  if (cVar15 < '\0') {
    iVar19 = vextractps_avx(auVar68,3);
    uVar3 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
    auVar35._0_4_ = auVar33._0_4_ + (float)uVar4;
    auVar35._4_4_ = auVar33._4_4_ + (float)uVar9;
    auVar35._8_4_ = auVar33._8_4_ + (float)uVar10;
    auVar35._12_4_ = auVar33._12_4_ + (float)uVar11;
    auVar35._16_4_ = auVar33._16_4_ + (float)uVar12;
    auVar35._20_4_ = auVar33._20_4_ + (float)uVar2;
    auVar35._24_4_ = auVar33._24_4_ + (float)uVar13;
    auVar35._28_4_ = auVar33._28_4_ + (float)uVar14;
  }
  else {
    auVar35._0_4_ = auVar33._0_4_ + (float)uVar4;
    auVar35._4_4_ = auVar33._4_4_ + (float)uVar9;
    auVar35._8_4_ = auVar33._8_4_ + (float)uVar10;
    auVar35._12_4_ = auVar33._12_4_ + (float)uVar11;
    auVar35._16_4_ = auVar33._16_4_ + (float)uVar12;
    auVar35._20_4_ = auVar33._20_4_ + (float)uVar2;
    auVar35._24_4_ = auVar33._24_4_ + (float)uVar13;
    auVar35._28_4_ = auVar33._28_4_ + (float)uVar14;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar29) = auVar35._0_4_;
  }
  auVar74 = auVar35._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar4;
  }
  if ((uVar16 & 4) != 0) {
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar4;
  }
  if ((uVar16 & 8) != 0) {
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar4;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar37) = auVar35._16_4_;
  }
  auVar74 = auVar35._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar19 = vextractps_avx(auVar68,1);
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar19 = vextractps_avx(auVar68,2);
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
  }
  if (cVar15 < '\0') {
    iVar19 = vextractps_avx(auVar68,3);
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar29) = auVar79._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar4 = vextractps_avx(auVar73,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  if ((uVar16 & 4) != 0) {
    uVar4 = vextractps_avx(auVar73,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar4;
  }
  if ((uVar16 & 8) != 0) {
    uVar4 = vextractps_avx(auVar73,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar4;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar37) = auVar79._16_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar22 = vextractps_avx(auVar68,1);
    uVar4 = vextractps_avx(auVar59,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar22 = vextractps_avx(auVar68,2);
    uVar4 = vextractps_avx(auVar59,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  if (cVar15 < '\0') {
    iVar22 = vextractps_avx(auVar68,3);
    uVar4 = vextractps_avx(auVar59,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx2 @ 1402e8120

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx2
               (longlong param_1,undefined1 (*param_2) [32],longlong param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6,uint param_7,int param_8,
               undefined1 (*param_9) [32])

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 (*pauVar8) [32];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  float fVar38;
  int iVar39;
  float fVar48;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 in_ZMM3 [64];
  float fVar49;
  uint uVar50;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  float fVar66;
  undefined1 auVar53 [32];
  float fVar54;
  uint uVar55;
  float fVar56;
  uint uVar57;
  float fVar58;
  uint uVar59;
  float fVar60;
  uint uVar61;
  float fVar62;
  uint uVar63;
  float fVar64;
  uint uVar65;
  uint uVar67;
  undefined1 in_ZMM4 [64];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [16];
  undefined1 auVar72 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [16];
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
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [8];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  
  uVar12 = __real_0000000c;
  uVar11 = __real_00000008;
  uVar10 = __real_00000004;
  uVar9 = __real_3f800000;
  uVar4 = __real_38d1b717;
  auVar51 = *param_9;
  auVar70._4_4_ = param_7;
  auVar70._0_4_ = param_7;
  auVar70._8_4_ = param_7;
  auVar70._12_4_ = param_7;
  auVar70._16_4_ = param_7;
  auVar70._20_4_ = param_7;
  auVar70._24_4_ = param_7;
  auVar70._28_4_ = param_7;
  auVar85 = vpcmpgtd_avx2(auVar70,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar83 = auVar51 & auVar85;
  if ((((((((SUB321(auVar83 >> 0x1f,0) & 1) != 0 || (SUB321(auVar83 >> 0x3f,0) & 1) != 0) ||
          (SUB321(auVar83 >> 0x5f,0) & 1) != 0) || SUB321(auVar83 >> 0x7f,0) != '\0') ||
        (SUB321(auVar83 >> 0x9f,0) & 1) != 0) || SUB321(auVar83 >> 0xbf,0) != '\0') ||
      (SUB321(auVar83 >> 0xdf,0) & 1) != 0) || auVar83[0x1f] < '\0') {
    auVar83._0_4_ = auVar85._0_4_ & auVar51._0_4_;
    auVar83._4_4_ = auVar85._4_4_ & auVar51._4_4_;
    auVar83._8_4_ = auVar85._8_4_ & auVar51._8_4_;
    auVar83._12_4_ = auVar85._12_4_ & auVar51._12_4_;
    auVar83._16_4_ = auVar85._16_4_ & auVar51._16_4_;
    auVar83._20_4_ = auVar85._20_4_ & auVar51._20_4_;
    auVar83._24_4_ = auVar85._24_4_ & auVar51._24_4_;
    auVar83._28_4_ = auVar85._28_4_ & auVar51._28_4_;
    auVar51 = vpcmpeqd_avx2(auVar51,auVar51);
    auVar51 = auVar51 & ~auVar83;
    if ((((((((SUB321(auVar51 >> 0x1f,0) & 1) == 0 && (SUB321(auVar51 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar51 >> 0x5f,0) & 1) == 0) && SUB321(auVar51 >> 0x7f,0) == '\0') &&
          (SUB321(auVar51 >> 0x9f,0) & 1) == 0) && SUB321(auVar51 >> 0xbf,0) == '\0') &&
        (SUB321(auVar51 >> 0xdf,0) & 1) == 0) && -1 < auVar51[0x1f]) {
      auVar51 = param_2[1];
      auVar83 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar51);
      auVar35 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *param_2);
      auVar83 = vpblendd_avx2(auVar35,auVar83,0x88);
      auVar35 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar51);
      auVar31 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            param_2[2]);
      auVar35 = vpblendd_avx2(auVar31,auVar35,0x13);
      in_ZMM6 = ZEXT3264(auVar35);
      auVar31._16_16_ = ZEXT116(0) * auVar83._16_16_ | ZEXT116(1) * auVar35._0_16_;
      auVar31._0_16_ = ZEXT116(0) * auVar35._0_16_ | ZEXT116(1) * auVar83._0_16_;
      auVar35 = vperm2i128_avx2(auVar83,auVar35,0x31);
      auVar51 = vpblendd_avx2(auVar51,*param_2,0x24);
      auVar51 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar51);
      in_ZMM3 = ZEXT3264(auVar51);
      auVar53._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar53._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar83 = vpermd_avx2(auVar53,param_2[2]);
      auVar51 = vpblendd_avx2(auVar51,auVar83,0xe0);
    }
    else {
      auVar31 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      auVar35 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      auVar51 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar83);
      in_ZMM3 = ZEXT3264((undefined1  [32])0x0);
    }
    in_ZMM4 = ZEXT3264(auVar51);
    local_340 = vmaskmovps_avx(auVar85,auVar31);
    local_320 = vmaskmovps_avx(auVar85,auVar35);
    _local_300 = vmaskmovps_avx(auVar85,auVar51);
  }
  uVar17 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar17 = param_7;
  }
  if ((int)(uVar17 & 0xfffffff8) < 1) {
    iVar22 = 0;
  }
  else {
    iVar22 = 0;
    pauVar8 = param_2;
    do {
      auVar71 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)local_320._0_4_)),
                            (uint)*(byte *)(param_3 + (int)local_320._4_4_),1);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._8_4_),2);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._12_4_),3);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._16_4_),4);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._20_4_),5);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._24_4_),6);
      auVar68 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._28_4_),7);
      auVar71 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + (int)local_320._0_4_)),
                            (uint)*(byte *)(param_5 + (int)local_320._4_4_),1);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_5 + (int)local_320._8_4_),2);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_5 + (int)local_320._12_4_),3);
      auVar51._0_4_ = param_8 + local_340._0_4_;
      auVar51._4_4_ = param_8 + local_340._4_4_;
      auVar51._8_4_ = param_8 + local_340._8_4_;
      auVar51._12_4_ = param_8 + local_340._12_4_;
      auVar51._16_4_ = param_8 + local_340._16_4_;
      auVar51._20_4_ = param_8 + local_340._20_4_;
      auVar51._24_4_ = param_8 + local_340._24_4_;
      auVar51._28_4_ = param_8 + local_340._28_4_;
      vpslld_avx2(auVar51,4);
      auVar51 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar31 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
      auVar73 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_5 + (int)local_320._16_4_),4);
      auVar71._4_4_ = uVar10;
      auVar71._0_4_ = uVar10;
      auVar71._8_4_ = uVar10;
      auVar71._12_4_ = uVar10;
      auVar88._16_4_ = uVar10;
      auVar88._0_16_ = auVar71;
      auVar88._20_4_ = uVar10;
      auVar88._24_4_ = uVar10;
      auVar88._28_4_ = uVar10;
      auVar51 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar73 = vpinsrb_avx(auVar73,(uint)*(byte *)(param_5 + (int)local_320._20_4_),5);
      auVar87._4_4_ = uVar11;
      auVar87._0_4_ = uVar11;
      auVar87._8_4_ = uVar11;
      auVar87._12_4_ = uVar11;
      auVar87._16_4_ = uVar11;
      auVar87._20_4_ = uVar11;
      auVar87._24_4_ = uVar11;
      auVar87._28_4_ = uVar11;
      auVar51 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
      auVar53 = vgatherdps(ZEXT832(0),auVar51);
      auVar85._0_4_ = param_8 + local_320._0_4_;
      auVar85._4_4_ = param_8 + local_320._4_4_;
      auVar85._8_4_ = param_8 + local_320._8_4_;
      auVar85._12_4_ = param_8 + local_320._12_4_;
      auVar85._16_4_ = param_8 + local_320._16_4_;
      auVar85._20_4_ = param_8 + local_320._20_4_;
      auVar85._24_4_ = param_8 + local_320._24_4_;
      auVar85._28_4_ = param_8 + local_320._28_4_;
      auVar91 = vpslld_avx2(auVar85,4);
      vpor_avx2(auVar91,auVar88);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar88 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar30._4_4_ = iVar22;
      auVar30._0_4_ = iVar22;
      auVar30._8_4_ = iVar22;
      auVar30._12_4_ = iVar22;
      auVar30._16_4_ = iVar22;
      auVar30._20_4_ = iVar22;
      auVar30._24_4_ = iVar22;
      auVar30._28_4_ = iVar22;
      auVar73 = vpinsrb_avx(auVar73,(uint)*(byte *)(param_5 + (int)local_320._24_4_),6);
      vpor_avx2(auVar91,auVar87);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar35._0_4_ =
           iVar22 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
      auVar35._4_4_ = iVar22 + _UNK_150b51904;
      auVar35._8_4_ = iVar22 + _UNK_150b51908;
      auVar35._12_4_ = iVar22 + _UNK_150b5190c;
      auVar35._16_4_ = iVar22 + _UNK_150b51910;
      auVar35._20_4_ = iVar22 + _UNK_150b51914;
      auVar35._24_4_ = iVar22 + _UNK_150b51918;
      auVar35._28_4_ = iVar22 + _UNK_150b5191c;
      auVar73 = vpinsrb_avx(auVar73,(uint)*(byte *)(param_5 + (int)local_320._28_4_),7);
      auVar82._4_4_ = uVar12;
      auVar82._0_4_ = uVar12;
      auVar82._8_4_ = uVar12;
      auVar82._12_4_ = uVar12;
      auVar82._16_4_ = uVar12;
      auVar82._20_4_ = uVar12;
      auVar82._24_4_ = uVar12;
      auVar82._28_4_ = uVar12;
      auVar83 = vpor_avx2(auVar91,auVar82);
      auVar51 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar85 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar51 = vpcmpeqd_avx2(auVar83,auVar83);
      auVar83 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      uVar2 = local_300._0_4_;
      uVar13 = local_300._4_4_;
      fVar38 = fStack_2f8;
      fVar42 = fStack_2f4;
      fVar43 = fStack_2f0;
      fVar44 = fStack_2ec;
      fVar45 = fStack_2e8;
      fVar46 = fStack_2e4;
      auVar51 = vpcmpgtd_avx2(auVar70,auVar35);
      iVar16 = vmovmskps_avx(auVar51);
      if (iVar16 != 0) {
        if ((char)iVar16 == -1) {
          auVar35 = pauVar8[3];
          auVar30 = pauVar8[4];
          auVar1 = pauVar8[5];
          auVar71 = auVar1._0_16_;
          auVar82 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                ,auVar30);
          auVar78 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar35);
          auVar82 = vpblendd_avx2(auVar78,auVar82,0x88);
          auVar78 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                ,auVar30);
          auVar40 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,auVar1);
          auVar40 = vpblendd_avx2(auVar40,auVar78,0x13);
          auVar78._16_16_ = ZEXT116(0) * auVar82._16_16_ | ZEXT116(1) * auVar40._0_16_;
          auVar78._0_16_ = ZEXT116(0) * auVar40._0_16_ | ZEXT116(1) * auVar82._0_16_;
          auVar82 = vperm2i128_avx2(auVar82,auVar40,0x31);
          auVar35 = vpblendd_avx2(auVar30,auVar35,0x24);
          auVar35 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar35);
          auVar40._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar40._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar30 = vpermd_avx2(auVar40,auVar1);
          auVar35 = vpblendd_avx2(auVar35,auVar30,0xe0);
        }
        else {
          auVar78 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
          auVar82 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
          auVar35 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
        }
        local_340 = vmaskmovps_avx(auVar51,auVar78);
        local_320 = vmaskmovps_avx(auVar51,auVar82);
        _local_300 = vmaskmovps_avx(auVar51,auVar35);
      }
      auVar51 = vpmovzxbd_avx2(auVar68);
      auVar51 = vpslld_avx2(auVar51,2);
      vpmovzxdq_avx2(auVar51._16_16_);
      auVar51 = vpmovzxdq_avx2(auVar51._0_16_);
      auVar71 = vpcmpeqd_avx(auVar71,auVar71);
      auVar74 = vgatherqps(ZEXT816(0) << 0x20,auVar71);
      auVar71 = vpcmpeqd_avx(auVar51._0_16_,auVar51._0_16_);
      auVar77 = vgatherqps((undefined1  [16])0x0,auVar71);
      auVar51 = vpmovzxbd_avx2(auVar73);
      auVar51 = vpslld_avx2(auVar51,2);
      vpmovzxdq_avx2(auVar51._16_16_);
      auVar51 = vpmovzxdq_avx2(auVar51._0_16_);
      auVar71 = vpcmpeqd_avx(auVar73,auVar73);
      auVar68 = vgatherqps((undefined1  [16])0x0,auVar71);
      auVar71 = vpcmpeqd_avx(auVar51._0_16_,auVar51._0_16_);
      auVar71 = vgatherqps(ZEXT816(0) << 0x40,auVar71);
      auVar51 = vsubps_avx(auVar31,auVar83);
      auVar31 = vsubps_avx(auVar81,auVar88);
      auVar53 = vsubps_avx(auVar53,auVar87);
      auVar52._0_4_ =
           auVar53._0_4_ * auVar53._0_4_ +
           auVar51._0_4_ * auVar51._0_4_ + auVar31._0_4_ * auVar31._0_4_;
      auVar52._4_4_ =
           auVar53._4_4_ * auVar53._4_4_ +
           auVar51._4_4_ * auVar51._4_4_ + auVar31._4_4_ * auVar31._4_4_;
      auVar52._8_4_ =
           auVar53._8_4_ * auVar53._8_4_ +
           auVar51._8_4_ * auVar51._8_4_ + auVar31._8_4_ * auVar31._8_4_;
      auVar52._12_4_ =
           auVar53._12_4_ * auVar53._12_4_ +
           auVar51._12_4_ * auVar51._12_4_ + auVar31._12_4_ * auVar31._12_4_;
      auVar52._16_4_ =
           auVar53._16_4_ * auVar53._16_4_ +
           auVar51._16_4_ * auVar51._16_4_ + auVar31._16_4_ * auVar31._16_4_;
      auVar52._20_4_ =
           auVar53._20_4_ * auVar53._20_4_ +
           auVar51._20_4_ * auVar51._20_4_ + auVar31._20_4_ * auVar31._20_4_;
      auVar52._24_4_ =
           auVar53._24_4_ * auVar53._24_4_ +
           auVar51._24_4_ * auVar51._24_4_ + auVar31._24_4_ * auVar31._24_4_;
      auVar52._28_4_ =
           auVar53._28_4_ * auVar53._28_4_ +
           auVar51._28_4_ * auVar51._28_4_ + auVar31._28_4_ * auVar31._28_4_;
      auVar35 = vsqrtps_avx(auVar52);
      auVar51 = vdivps_avx(auVar51,auVar35);
      auVar31 = vdivps_avx(auVar31,auVar35);
      auVar53 = vdivps_avx(auVar53,auVar35);
      auVar32._0_4_ = -((float)uVar2 * auVar68._0_4_) + auVar35._0_4_;
      auVar32._4_4_ = -((float)uVar13 * auVar68._4_4_) + auVar35._4_4_;
      auVar32._8_4_ = -(fVar38 * auVar68._8_4_) + auVar35._8_4_;
      auVar32._12_4_ = -(fVar42 * auVar68._12_4_) + auVar35._12_4_;
      auVar32._16_4_ = -(fVar43 * auVar71._0_4_) + auVar35._16_4_;
      auVar32._20_4_ = -(fVar44 * auVar71._4_4_) + auVar35._20_4_;
      auVar32._24_4_ = -(fVar45 * auVar71._8_4_) + auVar35._24_4_;
      auVar32._28_4_ = -(fVar46 * auVar71._12_4_) + auVar35._28_4_;
      auVar1._4_4_ = uVar4;
      auVar1._0_4_ = uVar4;
      auVar1._8_4_ = uVar4;
      auVar1._12_4_ = uVar4;
      auVar1._16_4_ = uVar4;
      auVar1._20_4_ = uVar4;
      auVar1._24_4_ = uVar4;
      auVar1._28_4_ = uVar4;
      auVar35 = vcmpps_avx(auVar35,auVar1,1);
      auVar81._4_4_ = uVar9;
      auVar81._0_4_ = uVar9;
      auVar81._8_4_ = uVar9;
      auVar81._12_4_ = uVar9;
      auVar81._16_4_ = uVar9;
      auVar81._20_4_ = uVar9;
      auVar81._24_4_ = uVar9;
      auVar81._28_4_ = uVar9;
      auVar51 = vblendvps_avx(auVar51,auVar81,auVar35);
      fVar49 = auVar74._0_4_ * auVar32._0_4_;
      fVar54 = auVar74._4_4_ * auVar32._4_4_;
      fVar56 = auVar74._8_4_ * auVar32._8_4_;
      fVar58 = auVar74._12_4_ * auVar32._12_4_;
      fVar60 = auVar77._0_4_ * auVar32._16_4_;
      fVar62 = auVar77._4_4_ * auVar32._20_4_;
      fVar64 = auVar77._8_4_ * auVar32._24_4_;
      fVar66 = auVar77._12_4_ * auVar32._28_4_;
      in_ZMM4 = ZEXT3264(CONCAT428(fVar66,CONCAT424(fVar64,CONCAT420(fVar62,CONCAT416(fVar60,
                                                  CONCAT412(fVar58,CONCAT48(fVar56,CONCAT44(fVar54,
                                                  fVar49))))))));
      fVar38 = auVar51._0_4_ * fVar49;
      fVar42 = auVar51._4_4_ * fVar54;
      fVar43 = auVar51._8_4_ * fVar56;
      fVar44 = auVar51._12_4_ * fVar58;
      fVar45 = auVar51._16_4_ * fVar60;
      fVar46 = auVar51._20_4_ * fVar62;
      fVar47 = auVar51._24_4_ * fVar64;
      fVar48 = auVar51._28_4_ * fVar66;
      in_ZMM3 = ZEXT3264(CONCAT428(fVar48,CONCAT424(fVar47,CONCAT420(fVar46,CONCAT416(fVar45,
                                                  CONCAT412(fVar44,CONCAT48(fVar43,CONCAT44(fVar42,
                                                  fVar38))))))));
      auVar51 = vcmpps_avx(auVar32,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      in_ZMM6 = ZEXT3264(auVar51);
      uVar50 = auVar51._0_4_;
      uVar55 = auVar51._4_4_;
      uVar57 = auVar51._8_4_;
      uVar59 = auVar51._12_4_;
      uVar61 = auVar51._16_4_;
      uVar63 = auVar51._20_4_;
      uVar65 = auVar51._24_4_;
      uVar67 = auVar51._28_4_;
      auVar74._0_4_ = auVar83._0_4_ + (float)(~uVar50 & (uint)fVar38);
      auVar74._4_4_ = auVar83._4_4_ + (float)(~uVar55 & (uint)fVar42);
      auVar74._8_4_ = auVar83._8_4_ + (float)(~uVar57 & (uint)fVar43);
      auVar74._12_4_ = auVar83._12_4_ + (float)(~uVar59 & (uint)fVar44);
      auVar75._16_4_ = auVar83._16_4_ + (float)(~uVar61 & (uint)fVar45);
      auVar75._0_16_ = auVar74;
      auVar75._20_4_ = auVar83._20_4_ + (float)(~uVar63 & (uint)fVar46);
      auVar75._24_4_ = auVar83._24_4_ + (float)(~uVar65 & (uint)fVar47);
      auVar75._28_4_ = auVar83._28_4_ + (float)(~uVar67 & (uint)fVar48);
      lVar28 = (longlong)auVar91._0_4_;
      *(float *)(param_1 + lVar28) = auVar74._0_4_;
      lVar26 = (longlong)auVar91._4_4_;
      uVar2 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + lVar26) = uVar2;
      lVar27 = (longlong)auVar91._8_4_;
      uVar2 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + lVar27) = uVar2;
      lVar21 = (longlong)auVar91._12_4_;
      uVar2 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + lVar21) = uVar2;
      lVar23 = (longlong)auVar91._16_4_;
      auVar71 = auVar75._16_16_;
      *(float *)(param_1 + lVar23) = auVar75._16_4_;
      lVar25 = (longlong)auVar91._20_4_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + lVar25) = uVar2;
      lVar18 = (longlong)auVar91._24_4_;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + lVar18) = uVar2;
      lVar24 = (longlong)auVar91._28_4_;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + lVar24) = uVar2;
      auVar73._0_4_ =
           auVar88._0_4_ +
           (float)(~uVar50 & (uint)((float)(~auVar35._0_4_ & auVar31._0_4_) * fVar49));
      auVar73._4_4_ =
           auVar88._4_4_ +
           (float)(~uVar55 & (uint)((float)(~auVar35._4_4_ & auVar31._4_4_) * fVar54));
      auVar73._8_4_ =
           auVar88._8_4_ +
           (float)(~uVar57 & (uint)((float)(~auVar35._8_4_ & auVar31._8_4_) * fVar56));
      auVar73._12_4_ =
           auVar88._12_4_ +
           (float)(~uVar59 & (uint)((float)(~auVar35._12_4_ & auVar31._12_4_) * fVar58));
      auVar33._16_4_ =
           auVar88._16_4_ +
           (float)(~uVar61 & (uint)((float)(~auVar35._16_4_ & auVar31._16_4_) * fVar60));
      auVar33._0_16_ = auVar73;
      auVar33._20_4_ =
           auVar88._20_4_ +
           (float)(~uVar63 & (uint)((float)(~auVar35._20_4_ & auVar31._20_4_) * fVar62));
      auVar33._24_4_ =
           auVar88._24_4_ +
           (float)(~uVar65 & (uint)((float)(~auVar35._24_4_ & auVar31._24_4_) * fVar64));
      auVar33._28_4_ =
           auVar88._28_4_ +
           (float)(~uVar67 & (uint)((float)(~auVar35._28_4_ & auVar31._28_4_) * fVar66));
      *(float *)(param_1 + 4 + lVar28) = auVar73._0_4_;
      uVar2 = vextractps_avx(auVar73,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar2;
      uVar2 = vextractps_avx(auVar73,2);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar73,3);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar2;
      auVar71 = auVar33._16_16_;
      *(float *)(param_1 + 4 + lVar23) = auVar33._16_4_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar2;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar2;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar2;
      auVar68._0_4_ =
           auVar87._0_4_ +
           (float)(~uVar50 & (uint)((float)(~auVar35._0_4_ & auVar53._0_4_) * fVar49));
      auVar68._4_4_ =
           auVar87._4_4_ +
           (float)(~uVar55 & (uint)((float)(~auVar35._4_4_ & auVar53._4_4_) * fVar54));
      auVar68._8_4_ =
           auVar87._8_4_ +
           (float)(~uVar57 & (uint)((float)(~auVar35._8_4_ & auVar53._8_4_) * fVar56));
      auVar68._12_4_ =
           auVar87._12_4_ +
           (float)(~uVar59 & (uint)((float)(~auVar35._12_4_ & auVar53._12_4_) * fVar58));
      auVar91._16_4_ =
           auVar87._16_4_ +
           (float)(~uVar61 & (uint)((float)(~auVar35._16_4_ & auVar53._16_4_) * fVar60));
      auVar91._0_16_ = auVar68;
      auVar91._20_4_ =
           auVar87._20_4_ +
           (float)(~uVar63 & (uint)((float)(~auVar35._20_4_ & auVar53._20_4_) * fVar62));
      auVar91._24_4_ =
           auVar87._24_4_ +
           (float)(~uVar65 & (uint)((float)(~auVar35._24_4_ & auVar53._24_4_) * fVar64));
      auVar91._28_4_ =
           auVar87._28_4_ +
           (float)(~uVar67 & (uint)((float)(~auVar35._28_4_ & auVar53._28_4_) * fVar66));
      *(float *)(param_1 + 8 + lVar28) = auVar68._0_4_;
      uVar2 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar2;
      uVar2 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar2;
      auVar71 = auVar91._16_16_;
      *(float *)(param_1 + 8 + lVar23) = auVar91._16_4_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar2;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar2;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar2;
      *(int *)(param_1 + 0xc + lVar28) = auVar85._0_4_;
      auVar71 = auVar85._0_16_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar2;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar2;
      auVar71 = auVar85._16_16_;
      *(int *)(param_1 + 0xc + lVar23) = auVar85._16_4_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar2;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar2;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar2;
      iVar22 = iVar22 + 8;
      pauVar8 = pauVar8 + 3;
    } while (iVar22 < (int)(uVar17 & 0xfffffff8));
  }
  if ((int)param_7 <= iVar22) {
    return;
  }
  auVar72._4_4_ = iVar22;
  auVar72._0_4_ = iVar22;
  auVar72._8_4_ = iVar22;
  auVar72._12_4_ = iVar22;
  auVar72._16_4_ = iVar22;
  auVar72._20_4_ = iVar22;
  auVar72._24_4_ = iVar22;
  auVar72._28_4_ = iVar22;
  auVar88 = vpor_avx2(auVar72,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar87 = vpcmpgtd_avx2(auVar70,auVar88);
  auVar5._0_4_ = param_8 + local_340._0_4_;
  auVar5._4_4_ = param_8 + local_340._4_4_;
  auVar5._8_4_ = param_8 + local_340._8_4_;
  auVar5._12_4_ = param_8 + local_340._12_4_;
  auVar5._16_4_ = param_8 + local_340._16_4_;
  auVar5._20_4_ = param_8 + local_340._20_4_;
  auVar5._24_4_ = param_8 + local_340._24_4_;
  auVar5._28_4_ = param_8 + local_340._28_4_;
  vpslld_avx2(auVar5,4);
  auVar36._4_4_ = __real_00000004;
  auVar36._0_4_ = __real_00000004;
  auVar36._8_4_ = __real_00000004;
  auVar36._12_4_ = __real_00000004;
  auVar36._16_4_ = __real_00000004;
  auVar36._20_4_ = __real_00000004;
  auVar36._24_4_ = __real_00000004;
  auVar36._28_4_ = __real_00000004;
  auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar87);
  auVar83 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar87);
  auVar79._4_4_ = __real_00000008;
  auVar79._0_4_ = __real_00000008;
  auVar79._8_4_ = __real_00000008;
  auVar79._12_4_ = __real_00000008;
  auVar79._16_4_ = __real_00000008;
  auVar79._20_4_ = __real_00000008;
  auVar79._24_4_ = __real_00000008;
  auVar79._28_4_ = __real_00000008;
  auVar85 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar87);
  auVar6._0_4_ = local_320._0_4_ + param_8;
  auVar6._4_4_ = local_320._4_4_ + param_8;
  auVar6._8_4_ = local_320._8_4_ + param_8;
  auVar6._12_4_ = local_320._12_4_ + param_8;
  auVar6._16_4_ = local_320._16_4_ + param_8;
  auVar6._20_4_ = local_320._20_4_ + param_8;
  auVar6._24_4_ = local_320._24_4_ + param_8;
  auVar6._28_4_ = local_320._28_4_ + param_8;
  auVar30 = vpslld_avx2(auVar6,4);
  vpor_avx2(auVar30,auVar36);
  auVar31 = vgatherdps(ZEXT832(0),auVar87);
  vpor_avx2(auVar79,auVar30);
  auVar53 = vgatherdps(ZEXT832(0),auVar87);
  auVar34._4_4_ = __real_0000000c;
  auVar34._0_4_ = __real_0000000c;
  auVar34._8_4_ = __real_0000000c;
  auVar34._12_4_ = __real_0000000c;
  auVar34._16_4_ = __real_0000000c;
  auVar34._20_4_ = __real_0000000c;
  auVar34._24_4_ = __real_0000000c;
  auVar34._28_4_ = __real_0000000c;
  vpor_avx2(auVar30,auVar34);
  auVar81 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar87);
  auVar35 = vgatherdps(ZEXT832(0) << 0x20,auVar87);
  auVar51 = vmaskmovps_avx(auVar87,auVar51);
  auVar83 = vmaskmovps_avx(auVar87,auVar83);
  auVar85 = vmaskmovps_avx(auVar87,auVar85);
  auVar35 = vmaskmovps_avx(auVar87,auVar35);
  auVar82 = vpand_avx2(local_320,auVar87);
  auVar31 = vmaskmovps_avx(auVar87,auVar31);
  auVar71 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + auVar82._0_4_)),
                        (uint)*(byte *)(param_3 + auVar82._4_4_),1);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar82._8_4_),2);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar82._12_4_),3);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar82._16_4_),4);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar82._20_4_),5);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar82._24_4_),6);
  auVar53 = vmaskmovps_avx(auVar87,auVar53);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar82._28_4_),7);
  auVar68 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + auVar82._0_4_)),
                        (uint)*(byte *)(param_5 + auVar82._4_4_),1);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar82._8_4_),2);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar82._12_4_),3);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar82._16_4_),4);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar82._20_4_),5);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar82._24_4_),6);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar82._28_4_),7);
  auVar7._0_4_ = iVar22 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
  auVar7._4_4_ = iVar22 + _UNK_150b51904;
  auVar7._8_4_ = iVar22 + _UNK_150b51908;
  auVar7._12_4_ = iVar22 + _UNK_150b5190c;
  auVar7._16_4_ = iVar22 + _UNK_150b51910;
  auVar7._20_4_ = iVar22 + _UNK_150b51914;
  auVar7._24_4_ = iVar22 + _UNK_150b51918;
  auVar7._28_4_ = iVar22 + _UNK_150b5191c;
  auVar70 = vpcmpgtd_avx2(auVar70,auVar7);
  iVar22 = vmovmskps_avx(auVar70);
  if (iVar22 != 0) {
    auVar70 = vpand_avx2(auVar70,auVar87);
    uVar17 = auVar88._0_4_;
    if ((char)iVar22 == -1) {
      auVar82 = *(undefined1 (*) [32])(param_2[4] + (ulonglong)uVar17 * 0xc);
      auVar88 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar82);
      auVar91 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar17 * 0xc));
      auVar88 = vpblendd_avx2(auVar91,auVar88,0x88);
      auVar91 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar82);
      auVar78 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar17 * 0xc));
      auVar91 = vpblendd_avx2(auVar78,auVar91,0x13);
      auVar69._16_16_ = ZEXT116(0) * auVar88._16_16_ | ZEXT116(1) * auVar91._0_16_;
      auVar69._0_16_ = ZEXT116(0) * auVar91._0_16_ | ZEXT116(1) * auVar88._0_16_;
      auVar88 = vperm2i128_avx2(auVar88,auVar91,0x31);
      auVar82 = vpblendd_avx2(auVar82,*(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar17 * 0xc),
                              0x24);
      auVar82 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar82);
      auVar84._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar84._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar91 = vpermd_avx2(auVar84,*(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar17 * 0xc));
      auVar82 = vpblendd_avx2(auVar82,auVar91,0xe0);
    }
    else {
      auVar69 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
      auVar88 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
      auVar82 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
    }
    vmaskmovps_avx(auVar70,auVar69);
    vmaskmovps_avx(auVar70,auVar88);
    vmaskmovps_avx(auVar70,auVar82);
  }
  auVar70 = vpmovzxbd_avx2(auVar71);
  auVar70 = vpslld_avx2(auVar70,2);
  vpmovzxdq_avx2(auVar70._16_16_);
  vpmovzxdq_avx2(auVar70._0_16_);
  auVar73 = vgatherqps((undefined1  [16])0x0,auVar87._0_16_);
  auVar71 = vgatherqps(ZEXT816(0) << 0x20,auVar87._16_16_);
  auVar70 = vpmovzxbd_avx2(auVar68);
  auVar70 = vpslld_avx2(auVar70,2);
  vpmovzxdq_avx2(auVar70._0_16_);
  auVar74 = vgatherqps(ZEXT816(0) << 0x40,auVar87._0_16_);
  vpmovzxdq_avx2(auVar70._16_16_);
  auVar68 = vgatherqps(ZEXT816(0) << 0x20,auVar87._16_16_);
  auVar51 = vsubps_avx(auVar51,auVar35);
  auVar82 = vsubps_avx(auVar83,auVar31);
  auVar88 = vsubps_avx(auVar85,auVar53);
  auVar76._0_4_ =
       auVar88._0_4_ * auVar88._0_4_ + auVar51._0_4_ * auVar51._0_4_ + auVar82._0_4_ * auVar82._0_4_
  ;
  auVar76._4_4_ =
       auVar88._4_4_ * auVar88._4_4_ + auVar51._4_4_ * auVar51._4_4_ + auVar82._4_4_ * auVar82._4_4_
  ;
  auVar76._8_4_ =
       auVar88._8_4_ * auVar88._8_4_ + auVar51._8_4_ * auVar51._8_4_ + auVar82._8_4_ * auVar82._8_4_
  ;
  auVar76._12_4_ =
       auVar88._12_4_ * auVar88._12_4_ +
       auVar51._12_4_ * auVar51._12_4_ + auVar82._12_4_ * auVar82._12_4_;
  auVar76._16_4_ =
       auVar88._16_4_ * auVar88._16_4_ +
       auVar51._16_4_ * auVar51._16_4_ + auVar82._16_4_ * auVar82._16_4_;
  auVar76._20_4_ =
       auVar88._20_4_ * auVar88._20_4_ +
       auVar51._20_4_ * auVar51._20_4_ + auVar82._20_4_ * auVar82._20_4_;
  auVar76._24_4_ =
       auVar88._24_4_ * auVar88._24_4_ +
       auVar51._24_4_ * auVar51._24_4_ + auVar82._24_4_ * auVar82._24_4_;
  auVar76._28_4_ =
       auVar88._28_4_ * auVar88._28_4_ +
       auVar51._28_4_ * auVar51._28_4_ + auVar82._28_4_ * auVar82._28_4_;
  auVar70 = vsqrtps_avx(auVar76);
  auVar89._4_4_ = __real_38d1b717;
  auVar89._0_4_ = __real_38d1b717;
  auVar89._8_4_ = __real_38d1b717;
  auVar89._12_4_ = __real_38d1b717;
  auVar89._16_4_ = __real_38d1b717;
  auVar89._20_4_ = __real_38d1b717;
  auVar89._24_4_ = __real_38d1b717;
  auVar89._28_4_ = __real_38d1b717;
  auVar51 = vdivps_avx(auVar51,auVar70);
  auVar83 = vcmpps_avx(auVar70,auVar89,1);
  auVar90._4_4_ = __real_3f800000;
  auVar90._0_4_ = __real_3f800000;
  auVar90._8_4_ = __real_3f800000;
  auVar90._12_4_ = __real_3f800000;
  auVar90._16_4_ = __real_3f800000;
  auVar90._20_4_ = __real_3f800000;
  auVar90._24_4_ = __real_3f800000;
  auVar90._28_4_ = __real_3f800000;
  auVar51 = vblendvps_avx(auVar51,auVar90,auVar83);
  auVar86._0_4_ = -((float)local_300._0_4_ * auVar74._0_4_) + auVar70._0_4_;
  auVar86._4_4_ = -((float)local_300._4_4_ * auVar74._4_4_) + auVar70._4_4_;
  auVar86._8_4_ = -(fStack_2f8 * auVar74._8_4_) + auVar70._8_4_;
  auVar86._12_4_ = -(fStack_2f4 * auVar74._12_4_) + auVar70._12_4_;
  auVar86._16_4_ = -(fStack_2f0 * auVar68._0_4_) + auVar70._16_4_;
  auVar86._20_4_ = -(fStack_2ec * auVar68._4_4_) + auVar70._20_4_;
  auVar86._24_4_ = -(fStack_2e8 * auVar68._8_4_) + auVar70._24_4_;
  auVar86._28_4_ = -(fStack_2e4 * auVar68._12_4_) + auVar70._28_4_;
  fVar38 = auVar86._0_4_ * auVar73._0_4_;
  fVar42 = auVar86._4_4_ * auVar73._4_4_;
  fVar43 = auVar86._8_4_ * auVar73._8_4_;
  fVar44 = auVar86._12_4_ * auVar73._12_4_;
  fVar45 = auVar86._16_4_ * auVar71._0_4_;
  fVar46 = auVar86._20_4_ * auVar71._4_4_;
  fVar47 = auVar86._24_4_ * auVar71._8_4_;
  fVar48 = auVar86._28_4_ * auVar71._12_4_;
  auVar85 = vcmpps_avx(auVar86,ZEXT832(0) << 0x20,1);
  uVar50 = auVar85._0_4_;
  uVar55 = auVar85._4_4_;
  uVar57 = auVar85._8_4_;
  uVar59 = auVar85._12_4_;
  uVar61 = auVar85._16_4_;
  uVar63 = auVar85._20_4_;
  uVar65 = auVar85._24_4_;
  uVar67 = auVar85._28_4_;
  auVar77._0_4_ = auVar35._0_4_ + (float)(~uVar50 & (uint)(auVar51._0_4_ * fVar38));
  auVar77._4_4_ = auVar35._4_4_ + (float)(~uVar55 & (uint)(auVar51._4_4_ * fVar42));
  auVar77._8_4_ = auVar35._8_4_ + (float)(~uVar57 & (uint)(auVar51._8_4_ * fVar43));
  auVar77._12_4_ = auVar35._12_4_ + (float)(~uVar59 & (uint)(auVar51._12_4_ * fVar44));
  auVar80._16_4_ = auVar35._16_4_ + (float)(~uVar61 & (uint)(auVar51._16_4_ * fVar45));
  auVar80._0_16_ = auVar77;
  auVar80._20_4_ = auVar35._20_4_ + (float)(~uVar63 & (uint)(auVar51._20_4_ * fVar46));
  auVar80._24_4_ = auVar35._24_4_ + (float)(~uVar65 & (uint)(auVar51._24_4_ * fVar47));
  auVar80._28_4_ = auVar35._28_4_ + (float)(~uVar67 & (uint)(auVar51._28_4_ * fVar48));
  uVar17 = vmovmskps_avx(auVar87);
  cVar15 = (char)uVar17;
  iVar29 = auVar30._0_4_;
  auVar71 = auVar30._16_16_;
  auVar74 = auVar80._16_16_;
  auVar68 = auVar81._0_16_;
  auVar73 = auVar81._16_16_;
  iVar22 = auVar30._4_4_;
  iVar16 = auVar30._8_4_;
  iVar19 = auVar30._12_4_;
  iVar39 = auVar30._16_4_;
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + iVar29) = auVar77._0_4_;
  }
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar77,1);
    *(undefined4 *)(param_1 + iVar22) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar77,2);
    *(undefined4 *)(param_1 + iVar16) = uVar4;
  }
  if ((uVar17 & 8) == 0) {
    auVar51 = vdivps_avx(auVar82,auVar70);
  }
  else {
    uVar4 = vextractps_avx(auVar77,3);
    *(undefined4 *)(param_1 + iVar19) = uVar4;
    auVar51 = vdivps_avx(auVar82,auVar70);
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + iVar39) = auVar80._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar71,1);
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + iVar20) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar71,2);
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + iVar20) = uVar4;
  }
  uVar14 = ~uVar67 & (uint)((float)(~auVar83._28_4_ & auVar51._28_4_) * fVar48);
  uVar13 = ~uVar65 & (uint)((float)(~auVar83._24_4_ & auVar51._24_4_) * fVar47);
  uVar2 = ~uVar63 & (uint)((float)(~auVar83._20_4_ & auVar51._20_4_) * fVar46);
  uVar12 = ~uVar61 & (uint)((float)(~auVar83._16_4_ & auVar51._16_4_) * fVar45);
  uVar11 = ~uVar59 & (uint)((float)(~auVar83._12_4_ & auVar51._12_4_) * fVar44);
  uVar10 = ~uVar57 & (uint)((float)(~auVar83._8_4_ & auVar51._8_4_) * fVar43);
  uVar9 = ~uVar55 & (uint)((float)(~auVar83._4_4_ & auVar51._4_4_) * fVar42);
  uVar4 = ~uVar50 & (uint)((float)(~auVar83._0_4_ & auVar51._0_4_) * fVar38);
  if (cVar15 < '\0') {
    iVar20 = vextractps_avx(auVar71,3);
    uVar3 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + iVar20) = uVar3;
    auVar41._0_4_ = auVar31._0_4_ + (float)uVar4;
    auVar41._4_4_ = auVar31._4_4_ + (float)uVar9;
    auVar41._8_4_ = auVar31._8_4_ + (float)uVar10;
    auVar41._12_4_ = auVar31._12_4_ + (float)uVar11;
    auVar41._16_4_ = auVar31._16_4_ + (float)uVar12;
    auVar41._20_4_ = auVar31._20_4_ + (float)uVar2;
    auVar41._24_4_ = auVar31._24_4_ + (float)uVar13;
    auVar41._28_4_ = auVar31._28_4_ + (float)uVar14;
  }
  else {
    auVar41._0_4_ = auVar31._0_4_ + (float)uVar4;
    auVar41._4_4_ = auVar31._4_4_ + (float)uVar9;
    auVar41._8_4_ = auVar31._8_4_ + (float)uVar10;
    auVar41._12_4_ = auVar31._12_4_ + (float)uVar11;
    auVar41._16_4_ = auVar31._16_4_ + (float)uVar12;
    auVar41._20_4_ = auVar31._20_4_ + (float)uVar2;
    auVar41._24_4_ = auVar31._24_4_ + (float)uVar13;
    auVar41._28_4_ = auVar31._28_4_ + (float)uVar14;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar29) = auVar41._0_4_;
  }
  auVar74 = auVar41._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar4;
  }
  if ((uVar17 & 8) == 0) {
    auVar51 = vdivps_avx(auVar88,auVar70);
  }
  else {
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar4;
    auVar51 = vdivps_avx(auVar88,auVar70);
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar39) = auVar41._16_4_;
  }
  auVar74 = auVar41._16_16_;
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar71,1);
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar71,2);
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar4;
  }
  uVar14 = ~uVar67 & (uint)((float)(~auVar83._28_4_ & auVar51._28_4_) * fVar48);
  uVar13 = ~uVar65 & (uint)((float)(~auVar83._24_4_ & auVar51._24_4_) * fVar47);
  uVar2 = ~uVar63 & (uint)((float)(~auVar83._20_4_ & auVar51._20_4_) * fVar46);
  uVar12 = ~uVar61 & (uint)((float)(~auVar83._16_4_ & auVar51._16_4_) * fVar45);
  uVar11 = ~uVar59 & (uint)((float)(~auVar83._12_4_ & auVar51._12_4_) * fVar44);
  uVar10 = ~uVar57 & (uint)((float)(~auVar83._8_4_ & auVar51._8_4_) * fVar43);
  uVar9 = ~uVar55 & (uint)((float)(~auVar83._4_4_ & auVar51._4_4_) * fVar42);
  uVar4 = ~uVar50 & (uint)((float)(~auVar83._0_4_ & auVar51._0_4_) * fVar38);
  if (cVar15 < '\0') {
    iVar20 = vextractps_avx(auVar71,3);
    uVar3 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
    auVar37._0_4_ = auVar53._0_4_ + (float)uVar4;
    auVar37._4_4_ = auVar53._4_4_ + (float)uVar9;
    auVar37._8_4_ = auVar53._8_4_ + (float)uVar10;
    auVar37._12_4_ = auVar53._12_4_ + (float)uVar11;
    auVar37._16_4_ = auVar53._16_4_ + (float)uVar12;
    auVar37._20_4_ = auVar53._20_4_ + (float)uVar2;
    auVar37._24_4_ = auVar53._24_4_ + (float)uVar13;
    auVar37._28_4_ = auVar53._28_4_ + (float)uVar14;
  }
  else {
    auVar37._0_4_ = auVar53._0_4_ + (float)uVar4;
    auVar37._4_4_ = auVar53._4_4_ + (float)uVar9;
    auVar37._8_4_ = auVar53._8_4_ + (float)uVar10;
    auVar37._12_4_ = auVar53._12_4_ + (float)uVar11;
    auVar37._16_4_ = auVar53._16_4_ + (float)uVar12;
    auVar37._20_4_ = auVar53._20_4_ + (float)uVar2;
    auVar37._24_4_ = auVar53._24_4_ + (float)uVar13;
    auVar37._28_4_ = auVar53._28_4_ + (float)uVar14;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar29) = auVar37._0_4_;
  }
  auVar74 = auVar37._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar4;
  }
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar39) = auVar37._16_4_;
  }
  auVar74 = auVar37._16_16_;
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar71,1);
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar71,2);
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar4;
  }
  if (cVar15 < '\0') {
    iVar20 = vextractps_avx(auVar71,3);
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar4;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar29) = auVar81._0_4_;
  }
  if ((uVar17 & 2) != 0) {
    uVar4 = vextractps_avx(auVar68,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  if ((uVar17 & 4) != 0) {
    uVar4 = vextractps_avx(auVar68,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar4;
  }
  if ((uVar17 & 8) != 0) {
    uVar4 = vextractps_avx(auVar68,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar4;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar39) = auVar81._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    iVar22 = vextractps_avx(auVar71,1);
    uVar4 = vextractps_avx(auVar73,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar22 = vextractps_avx(auVar71,2);
    uVar4 = vextractps_avx(auVar73,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  if (cVar15 < '\0') {
    iVar22 = vextractps_avx(auVar71,3);
    uVar4 = vextractps_avx(auVar73,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar4;
  }
  return;
}

// ApplyLongRangeConstraints_avx2 @ 1402e9220

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraints_avx2
               (longlong param_1,undefined1 (*param_2) [32],float param_3,undefined8 param_4,
               uint param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 (*pauVar7) [32];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  undefined1 auVar29 [16];
  int iVar28;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar33 [16];
  undefined1 auVar32 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  uint uVar37;
  int iVar38;
  undefined1 auVar39 [32];
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 in_ZMM3 [64];
  float fVar47;
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 in_ZMM4 [64];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  float fVar58;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar59 [32];
  float fVar68;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [32];
  undefined1 auVar75 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [8];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  
  uVar11 = __real_0000000c;
  uVar10 = __real_00000008;
  uVar9 = __real_00000004;
  uVar8 = __real_3f800000;
  uVar3 = __real_38d1b717;
  auVar30._4_4_ = param_5;
  auVar30._0_4_ = param_5;
  auVar30._8_4_ = param_5;
  auVar30._12_4_ = param_5;
  auVar30._16_4_ = param_5;
  auVar30._20_4_ = param_5;
  auVar30._24_4_ = param_5;
  auVar30._28_4_ = param_5;
  auVar51 = vpcmpgtd_avx2(auVar30,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  iVar15 = vmovmskps_avx(auVar51);
  if (iVar15 != 0) {
    if ((char)iVar15 == -1) {
      auVar56 = param_2[1];
      auVar69 = param_2[2];
      in_ZMM5 = ZEXT3264(auVar69);
      auVar55 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar56);
      auVar32 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *param_2);
      auVar55 = vpblendd_avx2(auVar32,auVar55,0x88);
      auVar32 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar56);
      auVar34 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            auVar69);
      auVar32 = vpblendd_avx2(auVar34,auVar32,0x13);
      auVar34._16_16_ = ZEXT116(0) * auVar55._16_16_ | ZEXT116(1) * auVar32._0_16_;
      auVar34._0_16_ = ZEXT116(0) * auVar32._0_16_ | ZEXT116(1) * auVar55._0_16_;
      auVar55 = vperm2i128_avx2(auVar55,auVar32,0x31);
      auVar56 = vpblendd_avx2(auVar56,*param_2,0x24);
      auVar56 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar56);
      auVar32._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar32._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar69 = vpermd_avx2(auVar32,auVar69);
      auVar56 = vpblendd_avx2(auVar56,auVar69,0xe0);
    }
    else {
      auVar34 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
      auVar55 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
      auVar56 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
      in_ZMM5 = ZEXT3264((undefined1  [32])0x0);
      auVar69 = ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    }
    in_ZMM4 = ZEXT3264(auVar69);
    local_380 = vmaskmovps_avx(auVar51,auVar34);
    local_360 = vmaskmovps_avx(auVar51,auVar55);
    _local_340 = vmaskmovps_avx(auVar51,auVar56);
  }
  uVar16 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar16 = param_5;
  }
  fVar47 = in_ZMM3._0_4_;
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    iVar15 = 0;
  }
  else {
    iVar15 = 0;
    pauVar7 = param_2;
    do {
      auVar51._0_4_ = param_6 + local_380._0_4_;
      auVar51._4_4_ = param_6 + local_380._4_4_;
      auVar51._8_4_ = param_6 + local_380._8_4_;
      auVar51._12_4_ = param_6 + local_380._12_4_;
      auVar51._16_4_ = param_6 + local_380._16_4_;
      auVar51._20_4_ = param_6 + local_380._20_4_;
      auVar51._24_4_ = param_6 + local_380._24_4_;
      auVar51._28_4_ = param_6 + local_380._28_4_;
      auVar56 = vpslld_avx2(auVar51,4);
      auVar51 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar34 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar79._4_4_ = uVar9;
      auVar79._0_4_ = uVar9;
      auVar79._8_4_ = uVar9;
      auVar79._12_4_ = uVar9;
      auVar79._16_4_ = uVar9;
      auVar79._20_4_ = uVar9;
      auVar79._24_4_ = uVar9;
      auVar79._28_4_ = uVar9;
      auVar51 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar60 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
      auVar78._4_4_ = uVar10;
      auVar78._0_4_ = uVar10;
      auVar78._8_4_ = uVar10;
      auVar78._12_4_ = uVar10;
      auVar78._16_4_ = uVar10;
      auVar78._20_4_ = uVar10;
      auVar78._24_4_ = uVar10;
      auVar78._28_4_ = uVar10;
      auVar51 = vpcmpeqd_avx2(auVar56 | auVar79,auVar56 | auVar79);
      auVar48 = vgatherdps(ZEXT832(0),auVar51);
      auVar56._0_4_ = param_6 + local_360._0_4_;
      auVar56._4_4_ = param_6 + local_360._4_4_;
      auVar56._8_4_ = param_6 + local_360._8_4_;
      auVar56._12_4_ = param_6 + local_360._12_4_;
      auVar56._16_4_ = param_6 + local_360._16_4_;
      auVar56._20_4_ = param_6 + local_360._20_4_;
      auVar56._24_4_ = param_6 + local_360._24_4_;
      auVar56._28_4_ = param_6 + local_360._28_4_;
      auVar32 = vpslld_avx2(auVar56,4);
      vpor_avx2(auVar32,auVar79);
      auVar51 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar79 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      vpor_avx2(auVar32,auVar78);
      auVar51 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar78 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      auVar69._0_4_ =
           iVar15 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
      auVar69._4_4_ = iVar15 + _UNK_150b51904;
      auVar69._8_4_ = iVar15 + _UNK_150b51908;
      auVar69._12_4_ = iVar15 + _UNK_150b5190c;
      auVar69._16_4_ = iVar15 + _UNK_150b51910;
      auVar69._20_4_ = iVar15 + _UNK_150b51914;
      auVar69._24_4_ = iVar15 + _UNK_150b51918;
      auVar69._28_4_ = iVar15 + _UNK_150b5191c;
      auVar55._4_4_ = uVar11;
      auVar55._0_4_ = uVar11;
      auVar55._8_4_ = uVar11;
      auVar55._12_4_ = uVar11;
      auVar55._16_4_ = uVar11;
      auVar55._20_4_ = uVar11;
      auVar55._24_4_ = uVar11;
      auVar55._28_4_ = uVar11;
      auVar56 = vpor_avx2(auVar32,auVar55);
      auVar51 = vpcmpeqd_avx2(in_ZMM10._0_32_,in_ZMM10._0_32_);
      auVar55 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
      in_ZMM3 = ZEXT3264(auVar55);
      auVar51 = vpcmpeqd_avx2(auVar56,auVar56);
      auVar56 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar51);
      uVar1 = local_340._0_4_;
      uVar12 = local_340._4_4_;
      fVar58 = fStack_338;
      fVar62 = fStack_334;
      fVar63 = fStack_330;
      fVar64 = fStack_32c;
      fVar65 = fStack_328;
      fVar66 = fStack_324;
      auVar51 = vpcmpgtd_avx2(auVar30,auVar69);
      iVar22 = vmovmskps_avx(auVar51);
      if (iVar22 != 0) {
        if ((char)iVar22 == -1) {
          auVar69 = pauVar7[3];
          auVar76 = pauVar7[4];
          auVar52 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                ,auVar76);
          auVar72 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar69);
          auVar52 = vpblendd_avx2(auVar72,auVar52,0x88);
          auVar72 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                ,auVar76);
          auVar6 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar7[5]);
          auVar6 = vpblendd_avx2(auVar6,auVar72,0x13);
          auVar72._16_16_ = ZEXT116(0) * auVar52._16_16_ | ZEXT116(1) * auVar6._0_16_;
          auVar72._0_16_ = ZEXT116(0) * auVar6._0_16_ | ZEXT116(1) * auVar52._0_16_;
          auVar52 = vperm2i128_avx2(auVar52,auVar6,0x31);
          auVar69 = vpblendd_avx2(auVar76,auVar69,0x24);
          auVar69 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar69);
          auVar76._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar76._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar76 = vpermd_avx2(auVar76,pauVar7[5]);
          auVar69 = vpblendd_avx2(auVar69,auVar76,0xe0);
        }
        else {
          auVar72 = vpgatherdd(ZEXT832(0) << 0x40,auVar51);
          auVar52 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
          auVar69 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar51);
        }
        local_380 = vmaskmovps_avx(auVar51,auVar72);
        local_360 = vmaskmovps_avx(auVar51,auVar52);
        _local_340 = vmaskmovps_avx(auVar51,auVar69);
      }
      auVar51 = vsubps_avx(auVar34,auVar56);
      auVar69 = vsubps_avx(auVar60,auVar79);
      auVar60 = vsubps_avx(auVar48,auVar78);
      auVar59._0_4_ =
           auVar60._0_4_ * auVar60._0_4_ +
           auVar51._0_4_ * auVar51._0_4_ + auVar69._0_4_ * auVar69._0_4_;
      auVar59._4_4_ =
           auVar60._4_4_ * auVar60._4_4_ +
           auVar51._4_4_ * auVar51._4_4_ + auVar69._4_4_ * auVar69._4_4_;
      auVar59._8_4_ =
           auVar60._8_4_ * auVar60._8_4_ +
           auVar51._8_4_ * auVar51._8_4_ + auVar69._8_4_ * auVar69._8_4_;
      auVar59._12_4_ =
           auVar60._12_4_ * auVar60._12_4_ +
           auVar51._12_4_ * auVar51._12_4_ + auVar69._12_4_ * auVar69._12_4_;
      auVar59._16_4_ =
           auVar60._16_4_ * auVar60._16_4_ +
           auVar51._16_4_ * auVar51._16_4_ + auVar69._16_4_ * auVar69._16_4_;
      auVar59._20_4_ =
           auVar60._20_4_ * auVar60._20_4_ +
           auVar51._20_4_ * auVar51._20_4_ + auVar69._20_4_ * auVar69._20_4_;
      auVar59._24_4_ =
           auVar60._24_4_ * auVar60._24_4_ +
           auVar51._24_4_ * auVar51._24_4_ + auVar69._24_4_ * auVar69._24_4_;
      auVar59._28_4_ =
           auVar60._28_4_ * auVar60._28_4_ +
           auVar51._28_4_ * auVar51._28_4_ + auVar69._28_4_ * auVar69._28_4_;
      auVar34 = vsqrtps_avx(auVar59);
      auVar51 = vdivps_avx(auVar51,auVar34);
      auVar48 = vdivps_avx(auVar69,auVar34);
      auVar60 = vdivps_avx(auVar60,auVar34);
      auVar6._4_4_ = uVar3;
      auVar6._0_4_ = uVar3;
      auVar6._8_4_ = uVar3;
      auVar6._12_4_ = uVar3;
      auVar6._16_4_ = uVar3;
      auVar6._20_4_ = uVar3;
      auVar6._24_4_ = uVar3;
      auVar6._28_4_ = uVar3;
      auVar69 = vcmpps_avx(auVar34,auVar6,1);
      in_ZMM4 = ZEXT3264(auVar69);
      auVar52._4_4_ = uVar8;
      auVar52._0_4_ = uVar8;
      auVar52._8_4_ = uVar8;
      auVar52._12_4_ = uVar8;
      auVar52._16_4_ = uVar8;
      auVar52._20_4_ = uVar8;
      auVar52._24_4_ = uVar8;
      auVar52._28_4_ = uVar8;
      auVar51 = vblendvps_avx(auVar51,auVar52,auVar69);
      auVar50._0_4_ = -((float)uVar1 * fVar47) + auVar34._0_4_;
      auVar50._4_4_ = -((float)uVar12 * fVar47) + auVar34._4_4_;
      auVar50._8_4_ = -(fVar58 * fVar47) + auVar34._8_4_;
      auVar50._12_4_ = -(fVar62 * fVar47) + auVar34._12_4_;
      auVar50._16_4_ = -(fVar63 * fVar47) + auVar34._16_4_;
      auVar50._20_4_ = -(fVar64 * fVar47) + auVar34._20_4_;
      auVar50._24_4_ = -(fVar65 * fVar47) + auVar34._24_4_;
      auVar50._28_4_ = -(fVar66 * fVar47) + auVar34._28_4_;
      fVar58 = auVar50._0_4_ * param_3;
      fVar62 = auVar50._4_4_ * param_3;
      fVar63 = auVar50._8_4_ * param_3;
      fVar64 = auVar50._12_4_ * param_3;
      fVar65 = auVar50._16_4_ * param_3;
      fVar66 = auVar50._20_4_ * param_3;
      fVar67 = auVar50._24_4_ * param_3;
      fVar68 = auVar50._28_4_ * param_3;
      auVar34 = vcmpps_avx(auVar50,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      in_ZMM5 = ZEXT3264(auVar34);
      uVar37 = auVar34._0_4_;
      uVar40 = auVar34._4_4_;
      uVar41 = auVar34._8_4_;
      uVar42 = auVar34._12_4_;
      uVar43 = auVar34._16_4_;
      uVar44 = auVar34._20_4_;
      uVar45 = auVar34._24_4_;
      uVar46 = auVar34._28_4_;
      auVar70._0_4_ = auVar56._0_4_ + (float)(~uVar37 & (uint)(auVar51._0_4_ * fVar58));
      auVar70._4_4_ = auVar56._4_4_ + (float)(~uVar40 & (uint)(auVar51._4_4_ * fVar62));
      auVar70._8_4_ = auVar56._8_4_ + (float)(~uVar41 & (uint)(auVar51._8_4_ * fVar63));
      auVar70._12_4_ = auVar56._12_4_ + (float)(~uVar42 & (uint)(auVar51._12_4_ * fVar64));
      auVar73._16_4_ = auVar56._16_4_ + (float)(~uVar43 & (uint)(auVar51._16_4_ * fVar65));
      auVar73._0_16_ = auVar70;
      auVar73._20_4_ = auVar56._20_4_ + (float)(~uVar44 & (uint)(auVar51._20_4_ * fVar66));
      auVar73._24_4_ = auVar56._24_4_ + (float)(~uVar45 & (uint)(auVar51._24_4_ * fVar67));
      auVar73._28_4_ = auVar56._28_4_ + (float)(~uVar46 & (uint)(auVar51._28_4_ * fVar68));
      lVar20 = (longlong)auVar32._0_4_;
      *(float *)(param_1 + lVar20) = auVar70._0_4_;
      lVar21 = (longlong)auVar32._4_4_;
      uVar1 = vextractps_avx(auVar70,1);
      *(undefined4 *)(param_1 + lVar21) = uVar1;
      lVar19 = (longlong)auVar32._8_4_;
      uVar1 = vextractps_avx(auVar70,2);
      *(undefined4 *)(param_1 + lVar19) = uVar1;
      lVar26 = (longlong)auVar32._12_4_;
      uVar1 = vextractps_avx(auVar70,3);
      *(undefined4 *)(param_1 + lVar26) = uVar1;
      lVar27 = (longlong)auVar32._16_4_;
      auVar33 = auVar73._16_16_;
      in_ZMM10 = ZEXT1664(auVar33);
      *(float *)(param_1 + lVar27) = auVar73._16_4_;
      lVar24 = (longlong)auVar32._20_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + lVar24) = uVar1;
      lVar25 = (longlong)auVar32._24_4_;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + lVar25) = uVar1;
      lVar23 = (longlong)auVar32._28_4_;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + lVar23) = uVar1;
      auVar33._0_4_ =
           auVar79._0_4_ +
           (float)(~uVar37 & (uint)(fVar58 * (float)(~auVar69._0_4_ & auVar48._0_4_)));
      auVar33._4_4_ =
           auVar79._4_4_ +
           (float)(~uVar40 & (uint)(fVar62 * (float)(~auVar69._4_4_ & auVar48._4_4_)));
      auVar33._8_4_ =
           auVar79._8_4_ +
           (float)(~uVar41 & (uint)(fVar63 * (float)(~auVar69._8_4_ & auVar48._8_4_)));
      auVar33._12_4_ =
           auVar79._12_4_ +
           (float)(~uVar42 & (uint)(fVar64 * (float)(~auVar69._12_4_ & auVar48._12_4_)));
      auVar31._16_4_ =
           auVar79._16_4_ +
           (float)(~uVar43 & (uint)(fVar65 * (float)(~auVar69._16_4_ & auVar48._16_4_)));
      auVar31._0_16_ = auVar33;
      auVar31._20_4_ =
           auVar79._20_4_ +
           (float)(~uVar44 & (uint)(fVar66 * (float)(~auVar69._20_4_ & auVar48._20_4_)));
      auVar31._24_4_ =
           auVar79._24_4_ +
           (float)(~uVar45 & (uint)(fVar67 * (float)(~auVar69._24_4_ & auVar48._24_4_)));
      auVar31._28_4_ =
           auVar79._28_4_ +
           (float)(~uVar46 & (uint)(fVar68 * (float)(~auVar69._28_4_ & auVar48._28_4_)));
      *(float *)(param_1 + 4 + lVar20) = auVar33._0_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar1;
      auVar33 = auVar31._16_16_;
      *(float *)(param_1 + 4 + lVar27) = auVar31._16_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar1;
      auVar29._0_4_ =
           auVar78._0_4_ +
           (float)(~uVar37 & (uint)(fVar58 * (float)(~auVar69._0_4_ & auVar60._0_4_)));
      auVar29._4_4_ =
           auVar78._4_4_ +
           (float)(~uVar40 & (uint)(fVar62 * (float)(~auVar69._4_4_ & auVar60._4_4_)));
      auVar29._8_4_ =
           auVar78._8_4_ +
           (float)(~uVar41 & (uint)(fVar63 * (float)(~auVar69._8_4_ & auVar60._8_4_)));
      auVar29._12_4_ =
           auVar78._12_4_ +
           (float)(~uVar42 & (uint)(fVar64 * (float)(~auVar69._12_4_ & auVar60._12_4_)));
      auVar48._16_4_ =
           auVar78._16_4_ +
           (float)(~uVar43 & (uint)(fVar65 * (float)(~auVar69._16_4_ & auVar60._16_4_)));
      auVar48._0_16_ = auVar29;
      auVar48._20_4_ =
           auVar78._20_4_ +
           (float)(~uVar44 & (uint)(fVar66 * (float)(~auVar69._20_4_ & auVar60._20_4_)));
      auVar48._24_4_ =
           auVar78._24_4_ +
           (float)(~uVar45 & (uint)(fVar67 * (float)(~auVar69._24_4_ & auVar60._24_4_)));
      auVar48._28_4_ =
           auVar78._28_4_ +
           (float)(~uVar46 & (uint)(fVar68 * (float)(~auVar69._28_4_ & auVar60._28_4_)));
      *(float *)(param_1 + 8 + lVar20) = auVar29._0_4_;
      uVar1 = vextractps_avx(auVar29,1);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar1;
      uVar1 = vextractps_avx(auVar29,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar1;
      uVar1 = vextractps_avx(auVar29,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar1;
      auVar33 = auVar48._16_16_;
      *(float *)(param_1 + 8 + lVar27) = auVar48._16_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar1;
      *(int *)(param_1 + 0xc + lVar20) = auVar55._0_4_;
      auVar33 = auVar55._0_16_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar1;
      auVar33 = auVar55._16_16_;
      *(int *)(param_1 + 0xc + lVar27) = auVar55._16_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar1;
      iVar15 = iVar15 + 8;
      pauVar7 = pauVar7 + 3;
    } while (iVar15 < (int)(uVar16 & 0xfffffff8));
  }
  if ((int)param_5 <= iVar15) {
    return;
  }
  auVar35._4_4_ = iVar15;
  auVar35._0_4_ = iVar15;
  auVar35._8_4_ = iVar15;
  auVar35._12_4_ = iVar15;
  auVar35._16_4_ = iVar15;
  auVar35._20_4_ = iVar15;
  auVar35._24_4_ = iVar15;
  auVar35._28_4_ = iVar15;
  auVar79 = vpor_avx2(auVar35,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar78 = vpcmpgtd_avx2(auVar30,auVar79);
  auVar60._0_4_ = param_6 + local_380._0_4_;
  auVar60._4_4_ = param_6 + local_380._4_4_;
  auVar60._8_4_ = param_6 + local_380._8_4_;
  auVar60._12_4_ = param_6 + local_380._12_4_;
  auVar60._16_4_ = param_6 + local_380._16_4_;
  auVar60._20_4_ = param_6 + local_380._20_4_;
  auVar60._24_4_ = param_6 + local_380._24_4_;
  auVar60._28_4_ = param_6 + local_380._28_4_;
  vpslld_avx2(auVar60,4);
  auVar51 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar78);
  auVar56 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar78);
  auVar4._0_4_ = param_6 + local_360._0_4_;
  auVar4._4_4_ = param_6 + local_360._4_4_;
  auVar4._8_4_ = param_6 + local_360._8_4_;
  auVar4._12_4_ = param_6 + local_360._12_4_;
  auVar4._16_4_ = param_6 + local_360._16_4_;
  auVar4._20_4_ = param_6 + local_360._20_4_;
  auVar4._24_4_ = param_6 + local_360._24_4_;
  auVar4._28_4_ = param_6 + local_360._28_4_;
  auVar69 = vgatherdps(ZEXT832(0),auVar78);
  auVar48 = vpslld_avx2(auVar4,4);
  auVar55 = vgatherdps(ZEXT832(0),auVar78);
  auVar32 = vgatherdps(ZEXT432(0) << 0x20,auVar78);
  auVar34 = vgatherdps(ZEXT432(0) << 0x20,auVar78);
  auVar60 = vgatherdps(ZEXT432(0) << 0x20,auVar78);
  auVar51 = vmaskmovps_avx(auVar78,auVar51);
  auVar56 = vmaskmovps_avx(auVar78,auVar56);
  auVar69 = vmaskmovps_avx(auVar78,auVar69);
  auVar55 = vmaskmovps_avx(auVar78,auVar55);
  auVar32 = vmaskmovps_avx(auVar78,auVar32);
  auVar34 = vmaskmovps_avx(auVar78,auVar34);
  auVar5._0_4_ = iVar15 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
  auVar5._4_4_ = iVar15 + _UNK_150b51904;
  auVar5._8_4_ = iVar15 + _UNK_150b51908;
  auVar5._12_4_ = iVar15 + _UNK_150b5190c;
  auVar5._16_4_ = iVar15 + _UNK_150b51910;
  auVar5._20_4_ = iVar15 + _UNK_150b51914;
  auVar5._24_4_ = iVar15 + _UNK_150b51918;
  auVar5._28_4_ = iVar15 + _UNK_150b5191c;
  auVar30 = vpcmpgtd_avx2(auVar30,auVar5);
  iVar15 = vmovmskps_avx(auVar30);
  if (iVar15 != 0) {
    auVar30 = vpand_avx2(auVar78,auVar30);
    uVar16 = auVar79._0_4_;
    if ((char)iVar15 == -1) {
      auVar79 = *(undefined1 (*) [32])(param_2[4] + (ulonglong)uVar16 * 0xc);
      auVar52 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar79);
      auVar72 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar16 * 0xc));
      auVar52 = vpblendd_avx2(auVar72,auVar52,0x88);
      auVar72 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar79);
      auVar76 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar16 * 0xc));
      auVar72 = vpblendd_avx2(auVar76,auVar72,0x13);
      auVar49._16_16_ = ZEXT116(0) * auVar52._16_16_ | ZEXT116(1) * auVar72._0_16_;
      auVar49._0_16_ = ZEXT116(0) * auVar72._0_16_ | ZEXT116(1) * auVar52._0_16_;
      auVar52 = vperm2i128_avx2(auVar52,auVar72,0x31);
      auVar79 = vpblendd_avx2(auVar79,*(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar16 * 0xc),
                              0x24);
      auVar79 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar79);
      auVar57._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar57._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar72 = vpermd_avx2(auVar57,*(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar16 * 0xc));
      auVar79 = vpblendd_avx2(auVar79,auVar72,0xe0);
    }
    else {
      auVar49 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar30);
      auVar52 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar30);
      auVar79 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar30);
    }
    vmaskmovps_avx(auVar30,auVar49);
    vmaskmovps_avx(auVar30,auVar52);
    vmaskmovps_avx(auVar30,auVar79);
  }
  auVar51 = vsubps_avx(auVar51,auVar55);
  auVar79 = vsubps_avx(auVar56,auVar32);
  auVar52 = vsubps_avx(auVar69,auVar34);
  auVar53._0_4_ =
       auVar52._0_4_ * auVar52._0_4_ + auVar51._0_4_ * auVar51._0_4_ + auVar79._0_4_ * auVar79._0_4_
  ;
  auVar53._4_4_ =
       auVar52._4_4_ * auVar52._4_4_ + auVar51._4_4_ * auVar51._4_4_ + auVar79._4_4_ * auVar79._4_4_
  ;
  auVar53._8_4_ =
       auVar52._8_4_ * auVar52._8_4_ + auVar51._8_4_ * auVar51._8_4_ + auVar79._8_4_ * auVar79._8_4_
  ;
  auVar53._12_4_ =
       auVar52._12_4_ * auVar52._12_4_ +
       auVar51._12_4_ * auVar51._12_4_ + auVar79._12_4_ * auVar79._12_4_;
  auVar53._16_4_ =
       auVar52._16_4_ * auVar52._16_4_ +
       auVar51._16_4_ * auVar51._16_4_ + auVar79._16_4_ * auVar79._16_4_;
  auVar53._20_4_ =
       auVar52._20_4_ * auVar52._20_4_ +
       auVar51._20_4_ * auVar51._20_4_ + auVar79._20_4_ * auVar79._20_4_;
  auVar53._24_4_ =
       auVar52._24_4_ * auVar52._24_4_ +
       auVar51._24_4_ * auVar51._24_4_ + auVar79._24_4_ * auVar79._24_4_;
  auVar53._28_4_ =
       auVar52._28_4_ * auVar52._28_4_ +
       auVar51._28_4_ * auVar51._28_4_ + auVar79._28_4_ * auVar79._28_4_;
  auVar69 = vsqrtps_avx(auVar53);
  auVar54._4_4_ = __real_38d1b717;
  auVar54._0_4_ = __real_38d1b717;
  auVar54._8_4_ = __real_38d1b717;
  auVar54._12_4_ = __real_38d1b717;
  auVar54._16_4_ = __real_38d1b717;
  auVar54._20_4_ = __real_38d1b717;
  auVar54._24_4_ = __real_38d1b717;
  auVar54._28_4_ = __real_38d1b717;
  auVar30 = vcmpps_avx(auVar69,auVar54,1);
  auVar51 = vdivps_avx(auVar51,auVar69);
  auVar77._4_4_ = __real_3f800000;
  auVar77._0_4_ = __real_3f800000;
  auVar77._8_4_ = __real_3f800000;
  auVar77._12_4_ = __real_3f800000;
  auVar77._16_4_ = __real_3f800000;
  auVar77._20_4_ = __real_3f800000;
  auVar77._24_4_ = __real_3f800000;
  auVar77._28_4_ = __real_3f800000;
  auVar51 = vblendvps_avx(auVar51,auVar77,auVar30);
  auVar39._0_4_ = -(fVar47 * (float)local_340._0_4_) + auVar69._0_4_;
  auVar39._4_4_ = -(fVar47 * (float)local_340._4_4_) + auVar69._4_4_;
  auVar39._8_4_ = -(fVar47 * fStack_338) + auVar69._8_4_;
  auVar39._12_4_ = -(fVar47 * fStack_334) + auVar69._12_4_;
  auVar39._16_4_ = -(fVar47 * fStack_330) + auVar69._16_4_;
  auVar39._20_4_ = -(fVar47 * fStack_32c) + auVar69._20_4_;
  auVar39._24_4_ = -(fVar47 * fStack_328) + auVar69._24_4_;
  auVar39._28_4_ = -(fVar47 * fStack_324) + auVar69._28_4_;
  fVar47 = param_3 * auVar39._0_4_;
  fVar58 = param_3 * auVar39._4_4_;
  fVar62 = param_3 * auVar39._8_4_;
  fVar63 = param_3 * auVar39._12_4_;
  fVar64 = param_3 * auVar39._16_4_;
  fVar65 = param_3 * auVar39._20_4_;
  fVar66 = param_3 * auVar39._24_4_;
  param_3 = param_3 * auVar39._28_4_;
  auVar56 = vcmpps_avx(auVar39,ZEXT832(0) << 0x20,1);
  uVar37 = auVar56._0_4_;
  uVar40 = auVar56._4_4_;
  uVar41 = auVar56._8_4_;
  uVar42 = auVar56._12_4_;
  uVar43 = auVar56._16_4_;
  uVar44 = auVar56._20_4_;
  uVar45 = auVar56._24_4_;
  uVar46 = auVar56._28_4_;
  auVar71._0_4_ = auVar55._0_4_ + (float)(~uVar37 & (uint)(auVar51._0_4_ * fVar47));
  auVar71._4_4_ = auVar55._4_4_ + (float)(~uVar40 & (uint)(auVar51._4_4_ * fVar58));
  auVar71._8_4_ = auVar55._8_4_ + (float)(~uVar41 & (uint)(auVar51._8_4_ * fVar62));
  auVar71._12_4_ = auVar55._12_4_ + (float)(~uVar42 & (uint)(auVar51._12_4_ * fVar63));
  auVar74._16_4_ = auVar55._16_4_ + (float)(~uVar43 & (uint)(auVar51._16_4_ * fVar64));
  auVar74._0_16_ = auVar71;
  auVar74._20_4_ = auVar55._20_4_ + (float)(~uVar44 & (uint)(auVar51._20_4_ * fVar65));
  auVar74._24_4_ = auVar55._24_4_ + (float)(~uVar45 & (uint)(auVar51._24_4_ * fVar66));
  auVar74._28_4_ = auVar55._28_4_ + (float)(~uVar46 & (uint)(auVar51._28_4_ * param_3));
  uVar16 = vmovmskps_avx(auVar78);
  cVar14 = (char)uVar16;
  iVar28 = auVar48._0_4_;
  auVar33 = auVar48._16_16_;
  auVar75 = auVar74._16_16_;
  auVar29 = auVar60._0_16_;
  auVar70 = auVar60._16_16_;
  iVar15 = auVar48._4_4_;
  iVar22 = auVar48._8_4_;
  iVar17 = auVar48._12_4_;
  iVar38 = auVar48._16_4_;
  if ((uVar16 & 1) != 0) {
    *(float *)(param_1 + iVar28) = auVar71._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + iVar15) = uVar3;
  }
  if ((uVar16 & 4) != 0) {
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + iVar22) = uVar3;
  }
  if ((uVar16 & 8) == 0) {
    auVar51 = vdivps_avx(auVar79,auVar69);
  }
  else {
    uVar3 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + iVar17) = uVar3;
    auVar51 = vdivps_avx(auVar79,auVar69);
  }
  if ((uVar16 & 0x10) != 0) {
    *(float *)(param_1 + iVar38) = auVar74._16_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar33,1);
    uVar3 = vextractps_avx(auVar75,1);
    *(undefined4 *)(param_1 + iVar18) = uVar3;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar33,2);
    uVar3 = vextractps_avx(auVar75,2);
    *(undefined4 *)(param_1 + iVar18) = uVar3;
  }
  uVar13 = ~uVar46 & (uint)((float)(~auVar30._28_4_ & auVar51._28_4_) * param_3);
  uVar12 = ~uVar45 & (uint)((float)(~auVar30._24_4_ & auVar51._24_4_) * fVar66);
  uVar1 = ~uVar44 & (uint)((float)(~auVar30._20_4_ & auVar51._20_4_) * fVar65);
  uVar11 = ~uVar43 & (uint)((float)(~auVar30._16_4_ & auVar51._16_4_) * fVar64);
  uVar10 = ~uVar42 & (uint)((float)(~auVar30._12_4_ & auVar51._12_4_) * fVar63);
  uVar9 = ~uVar41 & (uint)((float)(~auVar30._8_4_ & auVar51._8_4_) * fVar62);
  uVar8 = ~uVar40 & (uint)((float)(~auVar30._4_4_ & auVar51._4_4_) * fVar58);
  uVar3 = ~uVar37 & (uint)((float)(~auVar30._0_4_ & auVar51._0_4_) * fVar47);
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar33,3);
    uVar2 = vextractps_avx(auVar75,3);
    *(undefined4 *)(param_1 + iVar18) = uVar2;
    auVar61._0_4_ = auVar32._0_4_ + (float)uVar3;
    auVar61._4_4_ = auVar32._4_4_ + (float)uVar8;
    auVar61._8_4_ = auVar32._8_4_ + (float)uVar9;
    auVar61._12_4_ = auVar32._12_4_ + (float)uVar10;
    auVar61._16_4_ = auVar32._16_4_ + (float)uVar11;
    auVar61._20_4_ = auVar32._20_4_ + (float)uVar1;
    auVar61._24_4_ = auVar32._24_4_ + (float)uVar12;
    auVar61._28_4_ = auVar32._28_4_ + (float)uVar13;
  }
  else {
    auVar61._0_4_ = auVar32._0_4_ + (float)uVar3;
    auVar61._4_4_ = auVar32._4_4_ + (float)uVar8;
    auVar61._8_4_ = auVar32._8_4_ + (float)uVar9;
    auVar61._12_4_ = auVar32._12_4_ + (float)uVar10;
    auVar61._16_4_ = auVar32._16_4_ + (float)uVar11;
    auVar61._20_4_ = auVar32._20_4_ + (float)uVar1;
    auVar61._24_4_ = auVar32._24_4_ + (float)uVar12;
    auVar61._28_4_ = auVar32._28_4_ + (float)uVar13;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar28) = auVar61._0_4_;
  }
  auVar71 = auVar61._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar3;
  }
  if ((uVar16 & 4) != 0) {
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar22) = uVar3;
  }
  if ((uVar16 & 8) == 0) {
    auVar51 = vdivps_avx(auVar52,auVar69);
  }
  else {
    uVar3 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar3;
    auVar51 = vdivps_avx(auVar52,auVar69);
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar38) = auVar61._16_4_;
  }
  auVar71 = auVar61._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar33,1);
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar33,2);
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
  }
  uVar13 = ~uVar46 & (uint)((float)(~auVar30._28_4_ & auVar51._28_4_) * param_3);
  uVar12 = ~uVar45 & (uint)((float)(~auVar30._24_4_ & auVar51._24_4_) * fVar66);
  uVar1 = ~uVar44 & (uint)((float)(~auVar30._20_4_ & auVar51._20_4_) * fVar65);
  uVar11 = ~uVar43 & (uint)((float)(~auVar30._16_4_ & auVar51._16_4_) * fVar64);
  uVar10 = ~uVar42 & (uint)((float)(~auVar30._12_4_ & auVar51._12_4_) * fVar63);
  uVar9 = ~uVar41 & (uint)((float)(~auVar30._8_4_ & auVar51._8_4_) * fVar62);
  uVar8 = ~uVar40 & (uint)((float)(~auVar30._4_4_ & auVar51._4_4_) * fVar58);
  uVar3 = ~uVar37 & (uint)((float)(~auVar30._0_4_ & auVar51._0_4_) * fVar47);
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar33,3);
    uVar2 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar2;
    auVar36._0_4_ = auVar34._0_4_ + (float)uVar3;
    auVar36._4_4_ = auVar34._4_4_ + (float)uVar8;
    auVar36._8_4_ = auVar34._8_4_ + (float)uVar9;
    auVar36._12_4_ = auVar34._12_4_ + (float)uVar10;
    auVar36._16_4_ = auVar34._16_4_ + (float)uVar11;
    auVar36._20_4_ = auVar34._20_4_ + (float)uVar1;
    auVar36._24_4_ = auVar34._24_4_ + (float)uVar12;
    auVar36._28_4_ = auVar34._28_4_ + (float)uVar13;
  }
  else {
    auVar36._0_4_ = auVar34._0_4_ + (float)uVar3;
    auVar36._4_4_ = auVar34._4_4_ + (float)uVar8;
    auVar36._8_4_ = auVar34._8_4_ + (float)uVar9;
    auVar36._12_4_ = auVar34._12_4_ + (float)uVar10;
    auVar36._16_4_ = auVar34._16_4_ + (float)uVar11;
    auVar36._20_4_ = auVar34._20_4_ + (float)uVar1;
    auVar36._24_4_ = auVar34._24_4_ + (float)uVar12;
    auVar36._28_4_ = auVar34._28_4_ + (float)uVar13;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar28) = auVar36._0_4_;
  }
  auVar71 = auVar36._0_16_;
  if ((uVar16 & 2) != 0) {
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar3;
  }
  if ((uVar16 & 4) != 0) {
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar22) = uVar3;
  }
  if ((uVar16 & 8) != 0) {
    uVar3 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar3;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar38) = auVar36._16_4_;
  }
  auVar71 = auVar36._16_16_;
  if ((uVar16 & 0x20) != 0) {
    iVar18 = vextractps_avx(auVar33,1);
    uVar3 = vextractps_avx(auVar71,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar18 = vextractps_avx(auVar33,2);
    uVar3 = vextractps_avx(auVar71,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
  }
  if (cVar14 < '\0') {
    iVar18 = vextractps_avx(auVar33,3);
    uVar3 = vextractps_avx(auVar71,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
  }
  if ((uVar16 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar28) = auVar60._0_4_;
  }
  if ((uVar16 & 2) != 0) {
    uVar3 = vextractps_avx(auVar29,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  if ((uVar16 & 4) != 0) {
    uVar3 = vextractps_avx(auVar29,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar22) = uVar3;
  }
  if ((uVar16 & 8) != 0) {
    uVar3 = vextractps_avx(auVar29,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar3;
  }
  if ((uVar16 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar38) = auVar60._16_4_;
  }
  if ((uVar16 & 0x20) != 0) {
    iVar15 = vextractps_avx(auVar33,1);
    uVar3 = vextractps_avx(auVar70,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  if ((uVar16 & 0x40) != 0) {
    iVar15 = vextractps_avx(auVar33,2);
    uVar3 = vextractps_avx(auVar70,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  if (cVar14 < '\0') {
    iVar15 = vextractps_avx(auVar33,3);
    uVar3 = vextractps_avx(auVar70,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap_avx2 @ 1402ea0a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessWeightmap_avx2
               (longlong param_1,undefined1 (*param_2) [32],longlong param_3,undefined8 param_4,
               float param_5,uint param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 (*pauVar7) [32];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar33 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 in_ZMM2 [64];
  uint uVar37;
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  uint uVar47;
  undefined1 auVar40 [32];
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined1 in_ZMM3 [64];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [64];
  undefined1 auVar53 [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [16];
  undefined1 auVar64 [32];
  undefined1 auVar66 [16];
  undefined1 in_ZMM10 [64];
  int iVar67;
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  float fVar73;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar83 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [8];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 auVar54 [32];
  undefined1 auVar65 [32];
  
  uVar11 = __real_0000000c;
  uVar10 = __real_00000008;
  uVar9 = __real_00000004;
  uVar8 = __real_3f800000;
  uVar3 = __real_38d1b717;
  auVar40._4_4_ = param_6;
  auVar40._0_4_ = param_6;
  auVar40._8_4_ = param_6;
  auVar40._12_4_ = param_6;
  auVar40._16_4_ = param_6;
  auVar40._20_4_ = param_6;
  auVar40._24_4_ = param_6;
  auVar40._28_4_ = param_6;
  auVar35 = vpcmpgtd_avx2(auVar40,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  iVar15 = vmovmskps_avx(auVar35);
  if (iVar15 != 0) {
    if ((char)iVar15 == -1) {
      auVar38 = param_2[1];
      auVar34 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar38);
      auVar71 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *param_2);
      auVar34 = vpblendd_avx2(auVar71,auVar34,0x88);
      auVar71 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar38);
      auVar29 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            param_2[2]);
      auVar71 = vpblendd_avx2(auVar29,auVar71,0x13);
      auVar29._16_16_ = ZEXT116(0) * auVar34._16_16_ | ZEXT116(1) * auVar71._0_16_;
      auVar29._0_16_ = ZEXT116(0) * auVar71._0_16_ | ZEXT116(1) * auVar34._0_16_;
      auVar34 = vperm2i128_avx2(auVar34,auVar71,0x31);
      auVar38 = vpblendd_avx2(auVar38,*param_2,0x24);
      auVar38 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar38);
      auVar71._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar71._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar71 = vpermd_avx2(auVar71,param_2[2]);
      auVar38 = vpblendd_avx2(auVar38,auVar71,0xe0);
    }
    else {
      auVar29 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
      auVar34 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
      auVar38 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
    }
    in_ZMM3 = ZEXT3264(auVar38);
    in_ZMM2 = ZEXT3264(auVar34);
    local_380 = vmaskmovps_avx(auVar35,auVar29);
    local_360 = vmaskmovps_avx(auVar35,auVar34);
    _local_340 = vmaskmovps_avx(auVar35,auVar38);
  }
  auVar52 = ZEXT3264(auVar40);
  uVar17 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar17 = param_6;
  }
  if ((int)(uVar17 & 0xfffffff8) < 1) {
    iVar15 = 0;
    auVar35 = auVar40;
  }
  else {
    iVar15 = 0;
    pauVar7 = param_2;
    do {
      auVar60 = in_ZMM10._0_16_;
      auVar33 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)local_360._0_4_)),
                            (uint)*(byte *)(param_3 + (int)local_360._4_4_),1);
      auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + (int)local_360._8_4_),2);
      auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + (int)local_360._12_4_),3);
      auVar35._0_4_ =
           iVar15 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
      auVar35._4_4_ = iVar15 + _UNK_150b51904;
      auVar35._8_4_ = iVar15 + _UNK_150b51908;
      auVar35._12_4_ = iVar15 + _UNK_150b5190c;
      auVar35._16_4_ = iVar15 + _UNK_150b51910;
      auVar35._20_4_ = iVar15 + _UNK_150b51914;
      auVar35._24_4_ = iVar15 + _UNK_150b51918;
      auVar35._28_4_ = iVar15 + _UNK_150b5191c;
      auVar59._4_4_ = param_7;
      auVar59._0_4_ = param_7;
      auVar59._8_4_ = param_7;
      auVar59._12_4_ = param_7;
      auVar59._16_4_ = param_7;
      auVar59._20_4_ = param_7;
      auVar59._24_4_ = param_7;
      auVar59._28_4_ = param_7;
      auVar38._0_4_ = param_7 + local_380._0_4_;
      auVar38._4_4_ = param_7 + local_380._4_4_;
      auVar38._8_4_ = param_7 + local_380._8_4_;
      auVar38._12_4_ = param_7 + local_380._12_4_;
      auVar38._16_4_ = param_7 + local_380._16_4_;
      auVar38._20_4_ = param_7 + local_380._20_4_;
      auVar38._24_4_ = param_7 + local_380._24_4_;
      auVar38._28_4_ = param_7 + local_380._28_4_;
      auVar34 = vpslld_avx2(auVar38,4);
      auVar38 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar72 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar38);
      auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + (int)local_360._16_4_),4);
      auVar68._4_4_ = uVar9;
      auVar68._0_4_ = uVar9;
      auVar68._8_4_ = uVar9;
      auVar68._12_4_ = uVar9;
      auVar68._16_4_ = uVar9;
      auVar68._20_4_ = uVar9;
      auVar68._24_4_ = uVar9;
      auVar68._28_4_ = uVar9;
      auVar38 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar74 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar38);
      auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + (int)local_360._20_4_),5);
      auVar30._4_4_ = uVar10;
      auVar30._0_4_ = uVar10;
      auVar30._8_4_ = uVar10;
      auVar30._12_4_ = uVar10;
      auVar30._16_4_ = uVar10;
      auVar30._20_4_ = uVar10;
      auVar30._24_4_ = uVar10;
      auVar30._28_4_ = uVar10;
      auVar38 = vpcmpeqd_avx2(auVar34 | auVar68,auVar34 | auVar68);
      auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar38);
      auVar34._0_4_ = param_7 + local_360._0_4_;
      auVar34._4_4_ = param_7 + local_360._4_4_;
      auVar34._8_4_ = param_7 + local_360._8_4_;
      auVar34._12_4_ = param_7 + local_360._12_4_;
      auVar34._16_4_ = param_7 + local_360._16_4_;
      auVar34._20_4_ = param_7 + local_360._20_4_;
      auVar34._24_4_ = param_7 + local_360._24_4_;
      auVar34._28_4_ = param_7 + local_360._28_4_;
      auVar70 = vpslld_avx2(auVar34,4);
      vpor_avx2(auVar70,auVar68);
      auVar38 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar38);
      auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + (int)local_360._24_4_),6);
      auVar34 = vpor_avx2(auVar70,auVar30);
      auVar38 = vpcmpeqd_avx2(auVar59,auVar59);
      auVar30 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar38);
      auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + (int)local_360._28_4_),7);
      auVar83._4_4_ = uVar11;
      auVar83._0_4_ = uVar11;
      auVar83._8_4_ = uVar11;
      auVar83._12_4_ = uVar11;
      auVar83._16_4_ = uVar11;
      auVar83._20_4_ = uVar11;
      auVar83._24_4_ = uVar11;
      auVar83._28_4_ = uVar11;
      auVar71 = vpor_avx2(auVar70,auVar83);
      auVar38 = vpcmpeqd_avx2(auVar34,auVar34);
      auVar83 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar38);
      auVar38 = vpcmpeqd_avx2(auVar71,auVar71);
      auVar34 = vgatherdps(ZEXT832(0) << 0x20,auVar38);
      uVar1 = local_340._0_4_;
      uVar12 = local_340._4_4_;
      fVar73 = fStack_338;
      fVar76 = fStack_334;
      fVar77 = fStack_330;
      fVar78 = fStack_32c;
      fVar79 = fStack_328;
      fVar80 = fStack_324;
      auVar38 = auVar52._0_32_;
      auVar35 = vpcmpgtd_avx2(auVar38,auVar35);
      iVar16 = vmovmskps_avx(auVar35);
      if (iVar16 != 0) {
        if ((char)iVar16 == -1) {
          auVar38 = pauVar7[3];
          auVar71 = pauVar7[4];
          auVar68 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                ,auVar71);
          auVar59 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar38);
          auVar68 = vpblendd_avx2(auVar59,auVar68,0x88);
          auVar59 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                ,auVar71);
          auVar64 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,pauVar7[5]);
          auVar59 = vpblendd_avx2(auVar64,auVar59,0x13);
          auVar64._16_16_ = ZEXT116(0) * auVar68._16_16_ | ZEXT116(1) * auVar59._0_16_;
          auVar64._0_16_ = ZEXT116(0) * auVar59._0_16_ | ZEXT116(1) * auVar68._0_16_;
          auVar68 = vperm2i128_avx2(auVar68,auVar59,0x31);
          auVar38 = vpblendd_avx2(auVar71,auVar38,0x24);
          auVar38 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar38);
          auVar48._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar48._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar71 = vpermd_avx2(auVar48,pauVar7[5]);
          auVar71 = vpblendd_avx2(auVar38,auVar71,0xe0);
          auVar38 = auVar40;
        }
        else {
          auVar64 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
          auVar68 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
          auVar71 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
        }
        auVar60 = auVar64._0_16_;
        auVar52 = ZEXT3264(auVar38);
        local_380 = vmaskmovps_avx(auVar35,auVar64);
        local_360 = vmaskmovps_avx(auVar35,auVar68);
        _local_340 = vmaskmovps_avx(auVar35,auVar71);
      }
      auVar35 = vpmovzxbd_avx2(auVar33);
      auVar35 = vpslld_avx2(auVar35,2);
      vpmovzxdq_avx2(auVar35._16_16_);
      vpmovzxdq_avx2(auVar35._0_16_);
      auVar33 = vpcmpeqd_avx(auVar60,auVar60);
      auVar60 = vgatherqps(ZEXT816(0) << 0x20,auVar33);
      auVar33 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
      auVar33 = vgatherqps(ZEXT816(0) << 0x20,auVar33);
      auVar35 = vsubps_avx(auVar72,auVar34);
      auVar38 = vsubps_avx(auVar74,auVar29);
      in_ZMM10 = ZEXT3264(auVar38);
      auVar59 = vsubps_avx(auVar61,auVar30);
      auVar69._0_4_ =
           auVar59._0_4_ * auVar59._0_4_ +
           auVar35._0_4_ * auVar35._0_4_ + auVar38._0_4_ * auVar38._0_4_;
      auVar69._4_4_ =
           auVar59._4_4_ * auVar59._4_4_ +
           auVar35._4_4_ * auVar35._4_4_ + auVar38._4_4_ * auVar38._4_4_;
      auVar69._8_4_ =
           auVar59._8_4_ * auVar59._8_4_ +
           auVar35._8_4_ * auVar35._8_4_ + auVar38._8_4_ * auVar38._8_4_;
      auVar69._12_4_ =
           auVar59._12_4_ * auVar59._12_4_ +
           auVar35._12_4_ * auVar35._12_4_ + auVar38._12_4_ * auVar38._12_4_;
      auVar69._16_4_ =
           auVar59._16_4_ * auVar59._16_4_ +
           auVar35._16_4_ * auVar35._16_4_ + auVar38._16_4_ * auVar38._16_4_;
      auVar69._20_4_ =
           auVar59._20_4_ * auVar59._20_4_ +
           auVar35._20_4_ * auVar35._20_4_ + auVar38._20_4_ * auVar38._20_4_;
      auVar69._24_4_ =
           auVar59._24_4_ * auVar59._24_4_ +
           auVar35._24_4_ * auVar35._24_4_ + auVar38._24_4_ * auVar38._24_4_;
      auVar69._28_4_ =
           auVar59._28_4_ * auVar59._28_4_ +
           auVar35._28_4_ * auVar35._28_4_ + auVar38._28_4_ * auVar38._28_4_;
      auVar71 = vsqrtps_avx(auVar69);
      auVar35 = vdivps_avx(auVar35,auVar71);
      auVar68 = vdivps_avx(auVar38,auVar71);
      auVar59 = vdivps_avx(auVar59,auVar71);
      auVar72._4_4_ = uVar3;
      auVar72._0_4_ = uVar3;
      auVar72._8_4_ = uVar3;
      auVar72._12_4_ = uVar3;
      auVar72._16_4_ = uVar3;
      auVar72._20_4_ = uVar3;
      auVar72._24_4_ = uVar3;
      auVar72._28_4_ = uVar3;
      auVar38 = vcmpps_avx(auVar71,auVar72,1);
      auVar61._4_4_ = uVar8;
      auVar61._0_4_ = uVar8;
      auVar61._8_4_ = uVar8;
      auVar61._12_4_ = uVar8;
      auVar61._16_4_ = uVar8;
      auVar61._20_4_ = uVar8;
      auVar61._24_4_ = uVar8;
      auVar61._28_4_ = uVar8;
      auVar35 = vblendvps_avx(auVar35,auVar61,auVar38);
      auVar39._0_4_ = -((float)uVar1 * param_5) + auVar71._0_4_;
      auVar39._4_4_ = -((float)uVar12 * param_5) + auVar71._4_4_;
      auVar39._8_4_ = -(fVar73 * param_5) + auVar71._8_4_;
      auVar39._12_4_ = -(fVar76 * param_5) + auVar71._12_4_;
      auVar39._16_4_ = -(fVar77 * param_5) + auVar71._16_4_;
      auVar39._20_4_ = -(fVar78 * param_5) + auVar71._20_4_;
      auVar39._24_4_ = -(fVar79 * param_5) + auVar71._24_4_;
      auVar39._28_4_ = -(fVar80 * param_5) + auVar71._28_4_;
      fVar73 = auVar39._0_4_ * auVar60._0_4_;
      fVar76 = auVar39._4_4_ * auVar60._4_4_;
      fVar77 = auVar39._8_4_ * auVar60._8_4_;
      fVar78 = auVar39._12_4_ * auVar60._12_4_;
      fVar79 = auVar39._16_4_ * auVar33._0_4_;
      fVar80 = auVar39._20_4_ * auVar33._4_4_;
      fVar81 = auVar39._24_4_ * auVar33._8_4_;
      fVar82 = auVar39._28_4_ * auVar33._12_4_;
      auVar71 = vcmpps_avx(auVar39,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      in_ZMM3 = ZEXT3264(auVar71);
      uVar37 = auVar71._0_4_;
      uVar41 = auVar71._4_4_;
      uVar42 = auVar71._8_4_;
      uVar43 = auVar71._12_4_;
      uVar44 = auVar71._16_4_;
      uVar45 = auVar71._20_4_;
      uVar46 = auVar71._24_4_;
      uVar47 = auVar71._28_4_;
      auVar53._0_4_ = auVar34._0_4_ + (float)(~uVar37 & (uint)(auVar35._0_4_ * fVar73));
      auVar53._4_4_ = auVar34._4_4_ + (float)(~uVar41 & (uint)(auVar35._4_4_ * fVar76));
      auVar53._8_4_ = auVar34._8_4_ + (float)(~uVar42 & (uint)(auVar35._8_4_ * fVar77));
      auVar53._12_4_ = auVar34._12_4_ + (float)(~uVar43 & (uint)(auVar35._12_4_ * fVar78));
      auVar54._16_4_ = auVar34._16_4_ + (float)(~uVar44 & (uint)(auVar35._16_4_ * fVar79));
      auVar54._0_16_ = auVar53;
      auVar54._20_4_ = auVar34._20_4_ + (float)(~uVar45 & (uint)(auVar35._20_4_ * fVar80));
      auVar54._24_4_ = auVar34._24_4_ + (float)(~uVar46 & (uint)(auVar35._24_4_ * fVar81));
      auVar54._28_4_ = auVar34._28_4_ + (float)(~uVar47 & (uint)(auVar35._28_4_ * fVar82));
      lVar22 = (longlong)auVar70._0_4_;
      *(float *)(param_1 + lVar22) = auVar53._0_4_;
      lVar26 = (longlong)auVar70._4_4_;
      uVar1 = vextractps_avx(auVar53,1);
      *(undefined4 *)(param_1 + lVar26) = uVar1;
      lVar27 = (longlong)auVar70._8_4_;
      uVar1 = vextractps_avx(auVar53,2);
      *(undefined4 *)(param_1 + lVar27) = uVar1;
      lVar25 = (longlong)auVar70._12_4_;
      uVar1 = vextractps_avx(auVar53,3);
      *(undefined4 *)(param_1 + lVar25) = uVar1;
      lVar24 = (longlong)auVar70._16_4_;
      auVar33 = auVar54._16_16_;
      *(float *)(param_1 + lVar24) = auVar54._16_4_;
      lVar23 = (longlong)auVar70._20_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + lVar23) = uVar1;
      lVar21 = (longlong)auVar70._24_4_;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + lVar21) = uVar1;
      lVar18 = (longlong)auVar70._28_4_;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + lVar18) = uVar1;
      auVar33._0_4_ =
           auVar29._0_4_ +
           (float)(~uVar37 & (uint)(fVar73 * (float)(~auVar38._0_4_ & auVar68._0_4_)));
      auVar33._4_4_ =
           auVar29._4_4_ +
           (float)(~uVar41 & (uint)(fVar76 * (float)(~auVar38._4_4_ & auVar68._4_4_)));
      auVar33._8_4_ =
           auVar29._8_4_ +
           (float)(~uVar42 & (uint)(fVar77 * (float)(~auVar38._8_4_ & auVar68._8_4_)));
      auVar33._12_4_ =
           auVar29._12_4_ +
           (float)(~uVar43 & (uint)(fVar78 * (float)(~auVar38._12_4_ & auVar68._12_4_)));
      auVar70._16_4_ =
           auVar29._16_4_ +
           (float)(~uVar44 & (uint)(fVar79 * (float)(~auVar38._16_4_ & auVar68._16_4_)));
      auVar70._0_16_ = auVar33;
      auVar70._20_4_ =
           auVar29._20_4_ +
           (float)(~uVar45 & (uint)(fVar80 * (float)(~auVar38._20_4_ & auVar68._20_4_)));
      auVar70._24_4_ =
           auVar29._24_4_ +
           (float)(~uVar46 & (uint)(fVar81 * (float)(~auVar38._24_4_ & auVar68._24_4_)));
      auVar70._28_4_ =
           auVar29._28_4_ +
           (float)(~uVar47 & (uint)(fVar82 * (float)(~auVar38._28_4_ & auVar68._28_4_)));
      *(float *)(param_1 + 4 + lVar22) = auVar33._0_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar1;
      auVar33 = auVar70._16_16_;
      *(float *)(param_1 + 4 + lVar24) = auVar70._16_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar1;
      fVar73 = fVar73 * (float)(~auVar38._0_4_ & auVar59._0_4_);
      fVar76 = fVar76 * (float)(~auVar38._4_4_ & auVar59._4_4_);
      fVar77 = fVar77 * (float)(~auVar38._8_4_ & auVar59._8_4_);
      fVar78 = fVar78 * (float)(~auVar38._12_4_ & auVar59._12_4_);
      fVar79 = fVar79 * (float)(~auVar38._16_4_ & auVar59._16_4_);
      fVar80 = fVar80 * (float)(~auVar38._20_4_ & auVar59._20_4_);
      fVar81 = fVar81 * (float)(~auVar38._24_4_ & auVar59._24_4_);
      fVar82 = fVar82 * (float)(~auVar38._28_4_ & auVar59._28_4_);
      in_ZMM2 = ZEXT3264(CONCAT428(fVar82,CONCAT424(fVar81,CONCAT420(fVar80,CONCAT416(fVar79,
                                                  CONCAT412(fVar78,CONCAT48(fVar77,CONCAT44(fVar76,
                                                  fVar73))))))));
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 4 + lVar18) = uVar1;
      auVar60._0_4_ = auVar30._0_4_ + (float)(~uVar37 & (uint)fVar73);
      auVar60._4_4_ = auVar30._4_4_ + (float)(~uVar41 & (uint)fVar76);
      auVar60._8_4_ = auVar30._8_4_ + (float)(~uVar42 & (uint)fVar77);
      auVar60._12_4_ = auVar30._12_4_ + (float)(~uVar43 & (uint)fVar78);
      auVar74._16_4_ = auVar30._16_4_ + (float)(~uVar44 & (uint)fVar79);
      auVar74._0_16_ = auVar60;
      auVar74._20_4_ = auVar30._20_4_ + (float)(~uVar45 & (uint)fVar80);
      auVar74._24_4_ = auVar30._24_4_ + (float)(~uVar46 & (uint)fVar81);
      auVar74._28_4_ = auVar30._28_4_ + (float)(~uVar47 & (uint)fVar82);
      *(float *)(param_1 + 8 + lVar22) = auVar60._0_4_;
      uVar1 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar1;
      uVar1 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar1;
      auVar33 = auVar74._16_16_;
      *(float *)(param_1 + 8 + lVar24) = auVar74._16_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 8 + lVar18) = uVar1;
      *(int *)(param_1 + 0xc + lVar22) = auVar83._0_4_;
      auVar33 = auVar83._0_16_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar1;
      auVar33 = auVar83._16_16_;
      *(int *)(param_1 + 0xc + lVar24) = auVar83._16_4_;
      uVar1 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar1;
      uVar1 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar1;
      uVar1 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_1 + 0xc + lVar18) = uVar1;
      iVar15 = iVar15 + 8;
      auVar35 = auVar52._0_32_;
      pauVar7 = pauVar7 + 3;
    } while (iVar15 < (int)(uVar17 & 0xfffffff8));
  }
  if ((int)param_6 <= iVar15) {
    return;
  }
  auVar55._4_4_ = iVar15;
  auVar55._0_4_ = iVar15;
  auVar55._8_4_ = iVar15;
  auVar55._12_4_ = iVar15;
  auVar55._16_4_ = iVar15;
  auVar55._20_4_ = iVar15;
  auVar55._24_4_ = iVar15;
  auVar55._28_4_ = iVar15;
  auVar59 = vpor_avx2(auVar55,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar68 = vpcmpgtd_avx2(auVar35,auVar59);
  auVar4._0_4_ = param_7 + local_380._0_4_;
  auVar4._4_4_ = param_7 + local_380._4_4_;
  auVar4._8_4_ = param_7 + local_380._8_4_;
  auVar4._12_4_ = param_7 + local_380._12_4_;
  auVar4._16_4_ = param_7 + local_380._16_4_;
  auVar4._20_4_ = param_7 + local_380._20_4_;
  auVar4._24_4_ = param_7 + local_380._24_4_;
  auVar4._28_4_ = param_7 + local_380._28_4_;
  vpslld_avx2(auVar4,4);
  auVar49._4_4_ = __real_00000004;
  auVar49._0_4_ = __real_00000004;
  auVar49._8_4_ = __real_00000004;
  auVar49._12_4_ = __real_00000004;
  auVar49._16_4_ = __real_00000004;
  auVar49._20_4_ = __real_00000004;
  auVar49._24_4_ = __real_00000004;
  auVar49._28_4_ = __real_00000004;
  auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar68);
  auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar68);
  auVar58._4_4_ = __real_00000008;
  auVar58._0_4_ = __real_00000008;
  auVar58._8_4_ = __real_00000008;
  auVar58._12_4_ = __real_00000008;
  auVar58._16_4_ = __real_00000008;
  auVar58._20_4_ = __real_00000008;
  auVar58._24_4_ = __real_00000008;
  auVar58._28_4_ = __real_00000008;
  auVar34 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar68);
  auVar5._0_4_ = local_360._0_4_ + param_7;
  auVar5._4_4_ = local_360._4_4_ + param_7;
  auVar5._8_4_ = local_360._8_4_ + param_7;
  auVar5._12_4_ = local_360._12_4_ + param_7;
  auVar5._16_4_ = local_360._16_4_ + param_7;
  auVar5._20_4_ = local_360._20_4_ + param_7;
  auVar5._24_4_ = local_360._24_4_ + param_7;
  auVar5._28_4_ = local_360._28_4_ + param_7;
  auVar61 = vpslld_avx2(auVar5,4);
  vpor_avx2(auVar61,auVar49);
  auVar29 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar68);
  vpor_avx2(auVar61,auVar58);
  auVar83 = vgatherdps(ZEXT432(0) << 0x20,auVar68);
  auVar36._4_4_ = __real_0000000c;
  auVar36._0_4_ = __real_0000000c;
  auVar36._8_4_ = __real_0000000c;
  auVar36._12_4_ = __real_0000000c;
  auVar36._16_4_ = __real_0000000c;
  auVar36._20_4_ = __real_0000000c;
  auVar36._24_4_ = __real_0000000c;
  auVar36._28_4_ = __real_0000000c;
  vpor_avx2(auVar61,auVar36);
  auVar70 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar68);
  auVar71 = vgatherdps(ZEXT832(0),auVar68);
  auVar40 = vmaskmovps_avx(auVar68,auVar40);
  auVar38 = vmaskmovps_avx(auVar68,auVar38);
  auVar34 = vmaskmovps_avx(auVar68,auVar34);
  auVar71 = vmaskmovps_avx(auVar68,auVar71);
  auVar29 = vmaskmovps_avx(auVar68,auVar29);
  auVar30 = vpand_avx2(local_360,auVar68);
  auVar83 = vmaskmovps_avx(auVar68,auVar83);
  auVar33 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + auVar30._0_4_)),
                        (uint)*(byte *)(param_3 + auVar30._4_4_),1);
  auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + auVar30._8_4_),2);
  auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + auVar30._12_4_),3);
  auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + auVar30._16_4_),4);
  auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + auVar30._20_4_),5);
  auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + auVar30._24_4_),6);
  auVar33 = vpinsrb_avx(auVar33,(uint)*(byte *)(param_3 + auVar30._28_4_),7);
  auVar6._0_4_ = iVar15 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
  auVar6._4_4_ = iVar15 + _UNK_150b51904;
  auVar6._8_4_ = iVar15 + _UNK_150b51908;
  auVar6._12_4_ = iVar15 + _UNK_150b5190c;
  auVar6._16_4_ = iVar15 + _UNK_150b51910;
  auVar6._20_4_ = iVar15 + _UNK_150b51914;
  auVar6._24_4_ = iVar15 + _UNK_150b51918;
  auVar6._28_4_ = iVar15 + _UNK_150b5191c;
  auVar35 = vpcmpgtd_avx2(auVar35,auVar6);
  iVar15 = vmovmskps_avx(auVar35);
  if (iVar15 != 0) {
    auVar35 = vpand_avx2(auVar35,auVar68);
    uVar17 = auVar59._0_4_;
    if ((char)iVar15 == -1) {
      auVar30 = *(undefined1 (*) [32])(param_2[4] + (ulonglong)uVar17 * 0xc);
      auVar59 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar30);
      auVar72 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar17 * 0xc));
      auVar59 = vpblendd_avx2(auVar72,auVar59,0x88);
      auVar72 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar30);
      auVar74 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar17 * 0xc));
      auVar72 = vpblendd_avx2(auVar74,auVar72,0x13);
      auVar51._16_16_ = ZEXT116(0) * auVar59._16_16_ | ZEXT116(1) * auVar72._0_16_;
      auVar51._0_16_ = ZEXT116(0) * auVar72._0_16_ | ZEXT116(1) * auVar59._0_16_;
      auVar59 = vperm2i128_avx2(auVar59,auVar72,0x31);
      auVar30 = vpblendd_avx2(auVar30,*(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar17 * 0xc),
                              0x24);
      auVar30 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar30);
      auVar62._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar62._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar72 = vpermd_avx2(auVar62,*(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar17 * 0xc));
      auVar30 = vpblendd_avx2(auVar30,auVar72,0xe0);
    }
    else {
      auVar51 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
      auVar59 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
      auVar30 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar35);
    }
    vmaskmovps_avx(auVar35,auVar51);
    vmaskmovps_avx(auVar35,auVar59);
    vmaskmovps_avx(auVar35,auVar30);
  }
  auVar35 = vpmovzxbd_avx2(auVar33);
  auVar35 = vpslld_avx2(auVar35,2);
  vpmovzxdq_avx2(auVar35._16_16_);
  vpmovzxdq_avx2(auVar35._0_16_);
  auVar33 = vgatherqps(ZEXT816(0) << 0x40,auVar68._0_16_);
  auVar60 = vgatherqps(ZEXT816(0) << 0x40,auVar68._16_16_);
  auVar35 = vsubps_avx(auVar40,auVar71);
  auVar30 = vsubps_avx(auVar38,auVar29);
  auVar59 = vsubps_avx(auVar34,auVar83);
  auVar56._0_4_ =
       auVar59._0_4_ * auVar59._0_4_ + auVar35._0_4_ * auVar35._0_4_ + auVar30._0_4_ * auVar30._0_4_
  ;
  auVar56._4_4_ =
       auVar59._4_4_ * auVar59._4_4_ + auVar35._4_4_ * auVar35._4_4_ + auVar30._4_4_ * auVar30._4_4_
  ;
  auVar56._8_4_ =
       auVar59._8_4_ * auVar59._8_4_ + auVar35._8_4_ * auVar35._8_4_ + auVar30._8_4_ * auVar30._8_4_
  ;
  auVar56._12_4_ =
       auVar59._12_4_ * auVar59._12_4_ +
       auVar35._12_4_ * auVar35._12_4_ + auVar30._12_4_ * auVar30._12_4_;
  auVar56._16_4_ =
       auVar59._16_4_ * auVar59._16_4_ +
       auVar35._16_4_ * auVar35._16_4_ + auVar30._16_4_ * auVar30._16_4_;
  auVar56._20_4_ =
       auVar59._20_4_ * auVar59._20_4_ +
       auVar35._20_4_ * auVar35._20_4_ + auVar30._20_4_ * auVar30._20_4_;
  auVar56._24_4_ =
       auVar59._24_4_ * auVar59._24_4_ +
       auVar35._24_4_ * auVar35._24_4_ + auVar30._24_4_ * auVar30._24_4_;
  auVar56._28_4_ =
       auVar59._28_4_ * auVar59._28_4_ +
       auVar35._28_4_ * auVar35._28_4_ + auVar30._28_4_ * auVar30._28_4_;
  auVar34 = vsqrtps_avx(auVar56);
  auVar57._4_4_ = __real_38d1b717;
  auVar57._0_4_ = __real_38d1b717;
  auVar57._8_4_ = __real_38d1b717;
  auVar57._12_4_ = __real_38d1b717;
  auVar57._16_4_ = __real_38d1b717;
  auVar57._20_4_ = __real_38d1b717;
  auVar57._24_4_ = __real_38d1b717;
  auVar57._28_4_ = __real_38d1b717;
  auVar40 = vcmpps_avx(auVar34,auVar57,1);
  auVar35 = vdivps_avx(auVar35,auVar34);
  auVar75._4_4_ = __real_3f800000;
  auVar75._0_4_ = __real_3f800000;
  auVar75._8_4_ = __real_3f800000;
  auVar75._12_4_ = __real_3f800000;
  auVar75._16_4_ = __real_3f800000;
  auVar75._20_4_ = __real_3f800000;
  auVar75._24_4_ = __real_3f800000;
  auVar75._28_4_ = __real_3f800000;
  auVar35 = vblendvps_avx(auVar35,auVar75,auVar40);
  auVar50._0_4_ = -(param_5 * (float)local_340._0_4_) + auVar34._0_4_;
  auVar50._4_4_ = -(param_5 * (float)local_340._4_4_) + auVar34._4_4_;
  auVar50._8_4_ = -(param_5 * fStack_338) + auVar34._8_4_;
  auVar50._12_4_ = -(param_5 * fStack_334) + auVar34._12_4_;
  auVar50._16_4_ = -(param_5 * fStack_330) + auVar34._16_4_;
  auVar50._20_4_ = -(param_5 * fStack_32c) + auVar34._20_4_;
  auVar50._24_4_ = -(param_5 * fStack_328) + auVar34._24_4_;
  auVar50._28_4_ = -(param_5 * fStack_324) + auVar34._28_4_;
  fVar73 = auVar33._0_4_ * auVar50._0_4_;
  fVar76 = auVar33._4_4_ * auVar50._4_4_;
  fVar77 = auVar33._8_4_ * auVar50._8_4_;
  fVar78 = auVar33._12_4_ * auVar50._12_4_;
  fVar79 = auVar60._0_4_ * auVar50._16_4_;
  fVar80 = auVar60._4_4_ * auVar50._20_4_;
  fVar81 = auVar60._8_4_ * auVar50._24_4_;
  fVar82 = auVar60._12_4_ * auVar50._28_4_;
  auVar38 = vcmpps_avx(auVar50,ZEXT832(0) << 0x20,1);
  uVar37 = auVar38._0_4_;
  uVar41 = auVar38._4_4_;
  uVar42 = auVar38._8_4_;
  uVar43 = auVar38._12_4_;
  uVar44 = auVar38._16_4_;
  uVar45 = auVar38._20_4_;
  uVar46 = auVar38._24_4_;
  uVar47 = auVar38._28_4_;
  auVar63._0_4_ = auVar71._0_4_ + (float)(~uVar37 & (uint)(auVar35._0_4_ * fVar73));
  auVar63._4_4_ = auVar71._4_4_ + (float)(~uVar41 & (uint)(auVar35._4_4_ * fVar76));
  auVar63._8_4_ = auVar71._8_4_ + (float)(~uVar42 & (uint)(auVar35._8_4_ * fVar77));
  auVar63._12_4_ = auVar71._12_4_ + (float)(~uVar43 & (uint)(auVar35._12_4_ * fVar78));
  auVar65._16_4_ = auVar71._16_4_ + (float)(~uVar44 & (uint)(auVar35._16_4_ * fVar79));
  auVar65._0_16_ = auVar63;
  auVar65._20_4_ = auVar71._20_4_ + (float)(~uVar45 & (uint)(auVar35._20_4_ * fVar80));
  auVar65._24_4_ = auVar71._24_4_ + (float)(~uVar46 & (uint)(auVar35._24_4_ * fVar81));
  auVar65._28_4_ = auVar71._28_4_ + (float)(~uVar47 & (uint)(auVar35._28_4_ * fVar82));
  uVar17 = vmovmskps_avx(auVar68);
  cVar14 = (char)uVar17;
  iVar28 = auVar61._0_4_;
  auVar33 = auVar61._16_16_;
  auVar66 = auVar65._16_16_;
  auVar60 = auVar70._0_16_;
  auVar53 = auVar70._16_16_;
  iVar15 = auVar61._4_4_;
  iVar16 = auVar61._8_4_;
  iVar19 = auVar61._12_4_;
  iVar67 = auVar61._16_4_;
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + iVar28) = auVar63._0_4_;
  }
  if ((uVar17 & 2) != 0) {
    uVar3 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + iVar15) = uVar3;
  }
  if ((uVar17 & 4) != 0) {
    uVar3 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + iVar16) = uVar3;
  }
  if ((uVar17 & 8) == 0) {
    auVar35 = vdivps_avx(auVar30,auVar34);
  }
  else {
    uVar3 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + iVar19) = uVar3;
    auVar35 = vdivps_avx(auVar30,auVar34);
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + iVar67) = auVar65._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar33,1);
    uVar3 = vextractps_avx(auVar66,1);
    *(undefined4 *)(param_1 + iVar20) = uVar3;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar33,2);
    uVar3 = vextractps_avx(auVar66,2);
    *(undefined4 *)(param_1 + iVar20) = uVar3;
  }
  uVar13 = ~uVar47 & (uint)((float)(~auVar40._28_4_ & auVar35._28_4_) * fVar82);
  uVar12 = ~uVar46 & (uint)((float)(~auVar40._24_4_ & auVar35._24_4_) * fVar81);
  uVar1 = ~uVar45 & (uint)((float)(~auVar40._20_4_ & auVar35._20_4_) * fVar80);
  uVar11 = ~uVar44 & (uint)((float)(~auVar40._16_4_ & auVar35._16_4_) * fVar79);
  uVar10 = ~uVar43 & (uint)((float)(~auVar40._12_4_ & auVar35._12_4_) * fVar78);
  uVar9 = ~uVar42 & (uint)((float)(~auVar40._8_4_ & auVar35._8_4_) * fVar77);
  uVar8 = ~uVar41 & (uint)((float)(~auVar40._4_4_ & auVar35._4_4_) * fVar76);
  uVar3 = ~uVar37 & (uint)((float)(~auVar40._0_4_ & auVar35._0_4_) * fVar73);
  if (cVar14 < '\0') {
    iVar20 = vextractps_avx(auVar33,3);
    uVar2 = vextractps_avx(auVar66,3);
    *(undefined4 *)(param_1 + iVar20) = uVar2;
    auVar31._0_4_ = auVar29._0_4_ + (float)uVar3;
    auVar31._4_4_ = auVar29._4_4_ + (float)uVar8;
    auVar31._8_4_ = auVar29._8_4_ + (float)uVar9;
    auVar31._12_4_ = auVar29._12_4_ + (float)uVar10;
    auVar31._16_4_ = auVar29._16_4_ + (float)uVar11;
    auVar31._20_4_ = auVar29._20_4_ + (float)uVar1;
    auVar31._24_4_ = auVar29._24_4_ + (float)uVar12;
    auVar31._28_4_ = auVar29._28_4_ + (float)uVar13;
  }
  else {
    auVar31._0_4_ = auVar29._0_4_ + (float)uVar3;
    auVar31._4_4_ = auVar29._4_4_ + (float)uVar8;
    auVar31._8_4_ = auVar29._8_4_ + (float)uVar9;
    auVar31._12_4_ = auVar29._12_4_ + (float)uVar10;
    auVar31._16_4_ = auVar29._16_4_ + (float)uVar11;
    auVar31._20_4_ = auVar29._20_4_ + (float)uVar1;
    auVar31._24_4_ = auVar29._24_4_ + (float)uVar12;
    auVar31._28_4_ = auVar29._28_4_ + (float)uVar13;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar28) = auVar31._0_4_;
  }
  auVar63 = auVar31._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar3 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar15) = uVar3;
  }
  if ((uVar17 & 4) != 0) {
    uVar3 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
  }
  if ((uVar17 & 8) == 0) {
    auVar35 = vdivps_avx(auVar59,auVar34);
  }
  else {
    uVar3 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
    auVar35 = vdivps_avx(auVar59,auVar34);
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar67) = auVar31._16_4_;
  }
  auVar63 = auVar31._16_16_;
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar33,1);
    uVar3 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar33,2);
    uVar3 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
  }
  uVar13 = ~uVar47 & (uint)((float)(~auVar40._28_4_ & auVar35._28_4_) * fVar82);
  uVar12 = ~uVar46 & (uint)((float)(~auVar40._24_4_ & auVar35._24_4_) * fVar81);
  uVar1 = ~uVar45 & (uint)((float)(~auVar40._20_4_ & auVar35._20_4_) * fVar80);
  uVar11 = ~uVar44 & (uint)((float)(~auVar40._16_4_ & auVar35._16_4_) * fVar79);
  uVar10 = ~uVar43 & (uint)((float)(~auVar40._12_4_ & auVar35._12_4_) * fVar78);
  uVar9 = ~uVar42 & (uint)((float)(~auVar40._8_4_ & auVar35._8_4_) * fVar77);
  uVar8 = ~uVar41 & (uint)((float)(~auVar40._4_4_ & auVar35._4_4_) * fVar76);
  uVar3 = ~uVar37 & (uint)((float)(~auVar40._0_4_ & auVar35._0_4_) * fVar73);
  if (cVar14 < '\0') {
    iVar20 = vextractps_avx(auVar33,3);
    uVar2 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar2;
    auVar32._0_4_ = auVar83._0_4_ + (float)uVar3;
    auVar32._4_4_ = auVar83._4_4_ + (float)uVar8;
    auVar32._8_4_ = auVar83._8_4_ + (float)uVar9;
    auVar32._12_4_ = auVar83._12_4_ + (float)uVar10;
    auVar32._16_4_ = auVar83._16_4_ + (float)uVar11;
    auVar32._20_4_ = auVar83._20_4_ + (float)uVar1;
    auVar32._24_4_ = auVar83._24_4_ + (float)uVar12;
    auVar32._28_4_ = auVar83._28_4_ + (float)uVar13;
  }
  else {
    auVar32._0_4_ = auVar83._0_4_ + (float)uVar3;
    auVar32._4_4_ = auVar83._4_4_ + (float)uVar8;
    auVar32._8_4_ = auVar83._8_4_ + (float)uVar9;
    auVar32._12_4_ = auVar83._12_4_ + (float)uVar10;
    auVar32._16_4_ = auVar83._16_4_ + (float)uVar11;
    auVar32._20_4_ = auVar83._20_4_ + (float)uVar1;
    auVar32._24_4_ = auVar83._24_4_ + (float)uVar12;
    auVar32._28_4_ = auVar83._28_4_ + (float)uVar13;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar28) = auVar32._0_4_;
  }
  auVar63 = auVar32._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar3 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar15) = uVar3;
  }
  if ((uVar17 & 4) != 0) {
    uVar3 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
  }
  if ((uVar17 & 8) != 0) {
    uVar3 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar67) = auVar32._16_4_;
  }
  auVar63 = auVar32._16_16_;
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar33,1);
    uVar3 = vextractps_avx(auVar63,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar33,2);
    uVar3 = vextractps_avx(auVar63,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
  }
  if (cVar14 < '\0') {
    iVar20 = vextractps_avx(auVar33,3);
    uVar3 = vextractps_avx(auVar63,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar28) = auVar70._0_4_;
  }
  if ((uVar17 & 2) != 0) {
    uVar3 = vextractps_avx(auVar60,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  if ((uVar17 & 4) != 0) {
    uVar3 = vextractps_avx(auVar60,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
  }
  if ((uVar17 & 8) != 0) {
    uVar3 = vextractps_avx(auVar60,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar67) = auVar70._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    iVar15 = vextractps_avx(auVar33,1);
    uVar3 = vextractps_avx(auVar53,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar15 = vextractps_avx(auVar33,2);
    uVar3 = vextractps_avx(auVar53,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  if (cVar14 < '\0') {
    iVar15 = vextractps_avx(auVar33,3);
    uVar3 = vextractps_avx(auVar53,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar15) = uVar3;
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap_avx2 @ 1402eb0e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsScaleWeightmap_avx2
               (longlong param_1,undefined1 (*param_2) [32],undefined8 param_3,longlong param_4,
               undefined8 param_5,uint param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 (*pauVar8) [32];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar30 [16];
  int iVar29;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 in_ZMM2 [64];
  float fVar37;
  int iVar38;
  undefined1 auVar39 [32];
  float fVar48;
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 in_ZMM3 [64];
  uint uVar49;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar50 [32];
  uint uVar57;
  undefined1 auVar58 [32];
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar75 [16];
  undefined1 in_ZMM10 [64];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 local_380 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [8];
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  undefined1 auVar62 [32];
  undefined1 auVar74 [32];
  
  uVar12 = __real_0000000c;
  uVar11 = __real_00000008;
  uVar10 = __real_00000004;
  uVar9 = __real_3f800000;
  uVar3 = __real_38d1b717;
  auVar41._4_4_ = param_6;
  auVar41._0_4_ = param_6;
  auVar41._8_4_ = param_6;
  auVar41._12_4_ = param_6;
  auVar41._16_4_ = param_6;
  auVar41._20_4_ = param_6;
  auVar41._24_4_ = param_6;
  auVar41._28_4_ = param_6;
  auVar32 = vpcmpgtd_avx2(auVar41,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  iVar16 = vmovmskps_avx(auVar32);
  if (iVar16 != 0) {
    if ((char)iVar16 == -1) {
      auVar39 = param_2[1];
      auVar61 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar39);
      auVar78 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *param_2);
      auVar61 = vpblendd_avx2(auVar78,auVar61,0x88);
      auVar78 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar39);
      auVar31 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            param_2[2]);
      auVar78 = vpblendd_avx2(auVar31,auVar78,0x13);
      auVar31._16_16_ = ZEXT116(0) * auVar61._16_16_ | ZEXT116(1) * auVar78._0_16_;
      auVar31._0_16_ = ZEXT116(0) * auVar78._0_16_ | ZEXT116(1) * auVar61._0_16_;
      auVar61 = vperm2i128_avx2(auVar61,auVar78,0x31);
      auVar39 = vpblendd_avx2(auVar39,*param_2,0x24);
      auVar39 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar39);
      auVar78._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar78._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar78 = vpermd_avx2(auVar78,param_2[2]);
      auVar39 = vpblendd_avx2(auVar39,auVar78,0xe0);
    }
    else {
      auVar31 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
      auVar61 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
      auVar39 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
    }
    in_ZMM3 = ZEXT3264(auVar39);
    local_380 = vmaskmovps_avx(auVar32,auVar31);
    local_360 = vmaskmovps_avx(auVar32,auVar61);
    _local_340 = vmaskmovps_avx(auVar32,auVar39);
  }
  uVar17 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar17 = param_6;
  }
  fVar59 = in_ZMM2._0_4_;
  if ((int)(uVar17 & 0xfffffff8) < 1) {
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    pauVar8 = param_2;
    do {
      auVar68 = in_ZMM10._0_16_;
      auVar30 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + (int)local_360._0_4_)),
                            (uint)*(byte *)(param_4 + (int)local_360._4_4_),1);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + (int)local_360._8_4_),2);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + (int)local_360._12_4_),3);
      auVar32._0_4_ =
           iVar16 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
      auVar32._4_4_ = iVar16 + _UNK_150b51904;
      auVar32._8_4_ = iVar16 + _UNK_150b51908;
      auVar32._12_4_ = iVar16 + _UNK_150b5190c;
      auVar32._16_4_ = iVar16 + _UNK_150b51910;
      auVar32._20_4_ = iVar16 + _UNK_150b51914;
      auVar32._24_4_ = iVar16 + _UNK_150b51918;
      auVar32._28_4_ = iVar16 + _UNK_150b5191c;
      auVar39._0_4_ = param_7 + local_380._0_4_;
      auVar39._4_4_ = param_7 + local_380._4_4_;
      auVar39._8_4_ = param_7 + local_380._8_4_;
      auVar39._12_4_ = param_7 + local_380._12_4_;
      auVar39._16_4_ = param_7 + local_380._16_4_;
      auVar39._20_4_ = param_7 + local_380._20_4_;
      auVar39._24_4_ = param_7 + local_380._24_4_;
      auVar39._28_4_ = param_7 + local_380._28_4_;
      auVar61 = vpslld_avx2(auVar39,4);
      auVar39 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar80 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar39);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + (int)local_360._16_4_),4);
      auVar7._4_4_ = uVar10;
      auVar7._0_4_ = uVar10;
      auVar7._8_4_ = uVar10;
      auVar7._12_4_ = uVar10;
      auVar7._16_4_ = uVar10;
      auVar7._20_4_ = uVar10;
      auVar7._24_4_ = uVar10;
      auVar7._28_4_ = uVar10;
      auVar39 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar81 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar39);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + (int)local_360._20_4_),5);
      auVar69._4_4_ = uVar11;
      auVar69._0_4_ = uVar11;
      auVar69._8_4_ = uVar11;
      auVar69._12_4_ = uVar11;
      auVar69._16_4_ = uVar11;
      auVar69._20_4_ = uVar11;
      auVar69._24_4_ = uVar11;
      auVar69._28_4_ = uVar11;
      auVar39 = vpcmpeqd_avx2(auVar61 | auVar7,auVar61 | auVar7);
      auVar70 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar39);
      auVar61._0_4_ = param_7 + local_360._0_4_;
      auVar61._4_4_ = param_7 + local_360._4_4_;
      auVar61._8_4_ = param_7 + local_360._8_4_;
      auVar61._12_4_ = param_7 + local_360._12_4_;
      auVar61._16_4_ = param_7 + local_360._16_4_;
      auVar61._20_4_ = param_7 + local_360._20_4_;
      auVar61._24_4_ = param_7 + local_360._24_4_;
      auVar61._28_4_ = param_7 + local_360._28_4_;
      auVar77 = vpslld_avx2(auVar61,4);
      vpor_avx2(auVar77,auVar7);
      auVar39 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar34 = vgatherdps(ZEXT832(0),auVar39);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + (int)local_360._24_4_),6);
      auVar61 = vpor_avx2(auVar77,auVar69);
      auVar39 = vpcmpeqd_avx2(auVar7,auVar7);
      auVar31 = vgatherdps(ZEXT832(0) << 0x20,auVar39);
      auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + (int)local_360._28_4_),7);
      auVar67._4_4_ = uVar12;
      auVar67._0_4_ = uVar12;
      auVar67._8_4_ = uVar12;
      auVar67._12_4_ = uVar12;
      auVar67._16_4_ = uVar12;
      auVar67._20_4_ = uVar12;
      auVar67._24_4_ = uVar12;
      auVar67._28_4_ = uVar12;
      auVar78 = vpor_avx2(auVar77,auVar67);
      auVar39 = vpcmpeqd_avx2(auVar61,auVar61);
      auVar61 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar39);
      auVar39 = vpcmpeqd_avx2(auVar78,auVar78);
      auVar39 = vgatherdps(ZEXT832(0) << 0x20,auVar39);
      uVar1 = local_340._0_4_;
      uVar13 = local_340._4_4_;
      fVar37 = fStack_338;
      fVar42 = fStack_334;
      fVar43 = fStack_330;
      fVar44 = fStack_32c;
      fVar45 = fStack_328;
      fVar46 = fStack_324;
      auVar32 = vpcmpgtd_avx2(auVar41,auVar32);
      iVar18 = vmovmskps_avx(auVar32);
      if (iVar18 != 0) {
        if ((char)iVar18 == -1) {
          auVar78 = pauVar8[3];
          auVar69 = pauVar8[4];
          auVar67 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                ,auVar69);
          auVar7 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar78);
          auVar67 = vpblendd_avx2(auVar7,auVar67,0x88);
          auVar7 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                               ,auVar69);
          auVar73 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,pauVar8[5]);
          auVar7 = vpblendd_avx2(auVar73,auVar7,0x13);
          auVar73._16_16_ = ZEXT116(0) * auVar67._16_16_ | ZEXT116(1) * auVar7._0_16_;
          auVar73._0_16_ = ZEXT116(0) * auVar7._0_16_ | ZEXT116(1) * auVar67._0_16_;
          auVar67 = vperm2i128_avx2(auVar67,auVar7,0x31);
          auVar78 = vpblendd_avx2(auVar69,auVar78,0x24);
          auVar78 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar78);
          auVar40._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar40._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar69 = vpermd_avx2(auVar40,pauVar8[5]);
          auVar78 = vpblendd_avx2(auVar78,auVar69,0xe0);
        }
        else {
          auVar73 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
          auVar67 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
          auVar78 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
        }
        auVar68 = auVar73._0_16_;
        local_380 = vmaskmovps_avx(auVar32,auVar73);
        local_360 = vmaskmovps_avx(auVar32,auVar67);
        _local_340 = vmaskmovps_avx(auVar32,auVar78);
      }
      auVar32 = vpmovzxbd_avx2(auVar30);
      auVar32 = vpslld_avx2(auVar32,2);
      vpmovzxdq_avx2(auVar32._16_16_);
      vpmovzxdq_avx2(auVar32._0_16_);
      auVar30 = vpcmpeqd_avx(auVar68,auVar68);
      auVar68 = vgatherqps(ZEXT816(0) << 0x20,auVar30);
      auVar30 = vpcmpeqd_avx((undefined1  [16])0x0,(undefined1  [16])0x0);
      auVar30 = vgatherqps(ZEXT816(0) << 0x20,auVar30);
      auVar32 = vsubps_avx(auVar80,auVar39);
      auVar78 = vsubps_avx(auVar81,auVar34);
      in_ZMM10 = ZEXT3264(auVar78);
      auVar7 = vsubps_avx(auVar70,auVar31);
      auVar76._0_4_ =
           auVar7._0_4_ * auVar7._0_4_ +
           auVar32._0_4_ * auVar32._0_4_ + auVar78._0_4_ * auVar78._0_4_;
      auVar76._4_4_ =
           auVar7._4_4_ * auVar7._4_4_ +
           auVar32._4_4_ * auVar32._4_4_ + auVar78._4_4_ * auVar78._4_4_;
      auVar76._8_4_ =
           auVar7._8_4_ * auVar7._8_4_ +
           auVar32._8_4_ * auVar32._8_4_ + auVar78._8_4_ * auVar78._8_4_;
      auVar76._12_4_ =
           auVar7._12_4_ * auVar7._12_4_ +
           auVar32._12_4_ * auVar32._12_4_ + auVar78._12_4_ * auVar78._12_4_;
      auVar76._16_4_ =
           auVar7._16_4_ * auVar7._16_4_ +
           auVar32._16_4_ * auVar32._16_4_ + auVar78._16_4_ * auVar78._16_4_;
      auVar76._20_4_ =
           auVar7._20_4_ * auVar7._20_4_ +
           auVar32._20_4_ * auVar32._20_4_ + auVar78._20_4_ * auVar78._20_4_;
      auVar76._24_4_ =
           auVar7._24_4_ * auVar7._24_4_ +
           auVar32._24_4_ * auVar32._24_4_ + auVar78._24_4_ * auVar78._24_4_;
      auVar76._28_4_ =
           auVar7._28_4_ * auVar7._28_4_ +
           auVar32._28_4_ * auVar32._28_4_ + auVar78._28_4_ * auVar78._28_4_;
      auVar67 = vsqrtps_avx(auVar76);
      auVar32 = vdivps_avx(auVar32,auVar67);
      auVar69 = vdivps_avx(auVar78,auVar67);
      auVar7 = vdivps_avx(auVar7,auVar67);
      auVar80._4_4_ = uVar3;
      auVar80._0_4_ = uVar3;
      auVar80._8_4_ = uVar3;
      auVar80._12_4_ = uVar3;
      auVar80._16_4_ = uVar3;
      auVar80._20_4_ = uVar3;
      auVar80._24_4_ = uVar3;
      auVar80._28_4_ = uVar3;
      auVar78 = vcmpps_avx(auVar67,auVar80,1);
      auVar70._4_4_ = uVar9;
      auVar70._0_4_ = uVar9;
      auVar70._8_4_ = uVar9;
      auVar70._12_4_ = uVar9;
      auVar70._16_4_ = uVar9;
      auVar70._20_4_ = uVar9;
      auVar70._24_4_ = uVar9;
      auVar70._28_4_ = uVar9;
      auVar32 = vblendvps_avx(auVar32,auVar70,auVar78);
      auVar81._0_4_ = -((float)uVar1 * auVar68._0_4_) + auVar67._0_4_;
      auVar81._4_4_ = -((float)uVar13 * auVar68._4_4_) + auVar67._4_4_;
      auVar81._8_4_ = -(fVar37 * auVar68._8_4_) + auVar67._8_4_;
      auVar81._12_4_ = -(fVar42 * auVar68._12_4_) + auVar67._12_4_;
      auVar81._16_4_ = -(fVar43 * auVar30._0_4_) + auVar67._16_4_;
      auVar81._20_4_ = -(fVar44 * auVar30._4_4_) + auVar67._20_4_;
      auVar81._24_4_ = -(fVar45 * auVar30._8_4_) + auVar67._24_4_;
      auVar81._28_4_ = -(fVar46 * auVar30._12_4_) + auVar67._28_4_;
      fVar37 = auVar81._0_4_ * fVar59;
      fVar42 = auVar81._4_4_ * fVar59;
      fVar43 = auVar81._8_4_ * fVar59;
      fVar44 = auVar81._12_4_ * fVar59;
      fVar45 = auVar81._16_4_ * fVar59;
      fVar46 = auVar81._20_4_ * fVar59;
      fVar47 = auVar81._24_4_ * fVar59;
      fVar48 = auVar81._28_4_ * fVar59;
      in_ZMM3 = ZEXT3264(CONCAT428(fVar48,CONCAT424(fVar47,CONCAT420(fVar46,CONCAT416(fVar45,
                                                  CONCAT412(fVar44,CONCAT48(fVar43,CONCAT44(fVar42,
                                                  fVar37))))))));
      auVar67 = vcmpps_avx(auVar81,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      uVar49 = auVar67._0_4_;
      uVar51 = auVar67._4_4_;
      uVar52 = auVar67._8_4_;
      uVar53 = auVar67._12_4_;
      uVar54 = auVar67._16_4_;
      uVar55 = auVar67._20_4_;
      uVar56 = auVar67._24_4_;
      uVar57 = auVar67._28_4_;
      auVar60._0_4_ = auVar39._0_4_ + (float)(~uVar49 & (uint)(auVar32._0_4_ * fVar37));
      auVar60._4_4_ = auVar39._4_4_ + (float)(~uVar51 & (uint)(auVar32._4_4_ * fVar42));
      auVar60._8_4_ = auVar39._8_4_ + (float)(~uVar52 & (uint)(auVar32._8_4_ * fVar43));
      auVar60._12_4_ = auVar39._12_4_ + (float)(~uVar53 & (uint)(auVar32._12_4_ * fVar44));
      auVar62._16_4_ = auVar39._16_4_ + (float)(~uVar54 & (uint)(auVar32._16_4_ * fVar45));
      auVar62._0_16_ = auVar60;
      auVar62._20_4_ = auVar39._20_4_ + (float)(~uVar55 & (uint)(auVar32._20_4_ * fVar46));
      auVar62._24_4_ = auVar39._24_4_ + (float)(~uVar56 & (uint)(auVar32._24_4_ * fVar47));
      auVar62._28_4_ = auVar39._28_4_ + (float)(~uVar57 & (uint)(auVar32._28_4_ * fVar48));
      lVar22 = (longlong)auVar77._0_4_;
      *(float *)(param_1 + lVar22) = auVar60._0_4_;
      lVar27 = (longlong)auVar77._4_4_;
      uVar1 = vextractps_avx(auVar60,1);
      *(undefined4 *)(param_1 + lVar27) = uVar1;
      lVar28 = (longlong)auVar77._8_4_;
      uVar1 = vextractps_avx(auVar60,2);
      *(undefined4 *)(param_1 + lVar28) = uVar1;
      lVar26 = (longlong)auVar77._12_4_;
      uVar1 = vextractps_avx(auVar60,3);
      *(undefined4 *)(param_1 + lVar26) = uVar1;
      lVar25 = (longlong)auVar77._16_4_;
      auVar30 = auVar62._16_16_;
      *(float *)(param_1 + lVar25) = auVar62._16_4_;
      lVar24 = (longlong)auVar77._20_4_;
      uVar1 = vextractps_avx(auVar30,1);
      *(undefined4 *)(param_1 + lVar24) = uVar1;
      lVar21 = (longlong)auVar77._24_4_;
      uVar1 = vextractps_avx(auVar30,2);
      *(undefined4 *)(param_1 + lVar21) = uVar1;
      lVar23 = (longlong)auVar77._28_4_;
      uVar1 = vextractps_avx(auVar30,3);
      *(undefined4 *)(param_1 + lVar23) = uVar1;
      auVar68._0_4_ =
           auVar34._0_4_ +
           (float)(~uVar49 & (uint)((float)(~auVar78._0_4_ & auVar69._0_4_) * fVar37));
      auVar68._4_4_ =
           auVar34._4_4_ +
           (float)(~uVar51 & (uint)((float)(~auVar78._4_4_ & auVar69._4_4_) * fVar42));
      auVar68._8_4_ =
           auVar34._8_4_ +
           (float)(~uVar52 & (uint)((float)(~auVar78._8_4_ & auVar69._8_4_) * fVar43));
      auVar68._12_4_ =
           auVar34._12_4_ +
           (float)(~uVar53 & (uint)((float)(~auVar78._12_4_ & auVar69._12_4_) * fVar44));
      auVar77._16_4_ =
           auVar34._16_4_ +
           (float)(~uVar54 & (uint)((float)(~auVar78._16_4_ & auVar69._16_4_) * fVar45));
      auVar77._0_16_ = auVar68;
      auVar77._20_4_ =
           auVar34._20_4_ +
           (float)(~uVar55 & (uint)((float)(~auVar78._20_4_ & auVar69._20_4_) * fVar46));
      auVar77._24_4_ =
           auVar34._24_4_ +
           (float)(~uVar56 & (uint)((float)(~auVar78._24_4_ & auVar69._24_4_) * fVar47));
      auVar77._28_4_ =
           auVar34._28_4_ +
           (float)(~uVar57 & (uint)((float)(~auVar78._28_4_ & auVar69._28_4_) * fVar48));
      *(float *)(param_1 + 4 + lVar22) = auVar68._0_4_;
      uVar1 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 4 + lVar28) = uVar1;
      uVar1 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar1;
      auVar30 = auVar77._16_16_;
      *(float *)(param_1 + 4 + lVar25) = auVar77._16_4_;
      uVar1 = vextractps_avx(auVar30,1);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar30,2);
      *(undefined4 *)(param_1 + 4 + lVar21) = uVar1;
      fVar37 = (float)(~auVar78._0_4_ & auVar7._0_4_) * fVar37;
      fVar42 = (float)(~auVar78._4_4_ & auVar7._4_4_) * fVar42;
      fVar43 = (float)(~auVar78._8_4_ & auVar7._8_4_) * fVar43;
      fVar44 = (float)(~auVar78._12_4_ & auVar7._12_4_) * fVar44;
      fVar45 = (float)(~auVar78._16_4_ & auVar7._16_4_) * fVar45;
      fVar46 = (float)(~auVar78._20_4_ & auVar7._20_4_) * fVar46;
      fVar47 = (float)(~auVar78._24_4_ & auVar7._24_4_) * fVar47;
      fVar48 = (float)(~auVar78._28_4_ & auVar7._28_4_) * fVar48;
      in_ZMM2 = ZEXT3264(CONCAT428(fVar48,CONCAT424(fVar47,CONCAT420(fVar46,CONCAT416(fVar45,
                                                  CONCAT412(fVar44,CONCAT48(fVar43,CONCAT44(fVar42,
                                                  fVar37))))))));
      uVar1 = vextractps_avx(auVar30,3);
      *(undefined4 *)(param_1 + 4 + lVar23) = uVar1;
      auVar30._0_4_ = auVar31._0_4_ + (float)(~uVar49 & (uint)fVar37);
      auVar30._4_4_ = auVar31._4_4_ + (float)(~uVar51 & (uint)fVar42);
      auVar30._8_4_ = auVar31._8_4_ + (float)(~uVar52 & (uint)fVar43);
      auVar30._12_4_ = auVar31._12_4_ + (float)(~uVar53 & (uint)fVar44);
      auVar34._16_4_ = auVar31._16_4_ + (float)(~uVar54 & (uint)fVar45);
      auVar34._0_16_ = auVar30;
      auVar34._20_4_ = auVar31._20_4_ + (float)(~uVar55 & (uint)fVar46);
      auVar34._24_4_ = auVar31._24_4_ + (float)(~uVar56 & (uint)fVar47);
      auVar34._28_4_ = auVar31._28_4_ + (float)(~uVar57 & (uint)fVar48);
      *(float *)(param_1 + 8 + lVar22) = auVar30._0_4_;
      uVar1 = vextractps_avx(auVar30,1);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar30,2);
      *(undefined4 *)(param_1 + 8 + lVar28) = uVar1;
      uVar1 = vextractps_avx(auVar30,3);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar1;
      auVar30 = auVar34._16_16_;
      *(float *)(param_1 + 8 + lVar25) = auVar34._16_4_;
      uVar1 = vextractps_avx(auVar30,1);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar30,2);
      *(undefined4 *)(param_1 + 8 + lVar21) = uVar1;
      uVar1 = vextractps_avx(auVar30,3);
      *(undefined4 *)(param_1 + 8 + lVar23) = uVar1;
      *(int *)(param_1 + 0xc + lVar22) = auVar61._0_4_;
      auVar30 = auVar61._0_16_;
      uVar1 = vextractps_avx(auVar30,1);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar1;
      uVar1 = vextractps_avx(auVar30,2);
      *(undefined4 *)(param_1 + 0xc + lVar28) = uVar1;
      uVar1 = vextractps_avx(auVar30,3);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar1;
      auVar30 = auVar61._16_16_;
      *(int *)(param_1 + 0xc + lVar25) = auVar61._16_4_;
      uVar1 = vextractps_avx(auVar30,1);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar1;
      uVar1 = vextractps_avx(auVar30,2);
      *(undefined4 *)(param_1 + 0xc + lVar21) = uVar1;
      uVar1 = vextractps_avx(auVar30,3);
      *(undefined4 *)(param_1 + 0xc + lVar23) = uVar1;
      iVar16 = iVar16 + 8;
      pauVar8 = pauVar8 + 3;
    } while (iVar16 < (int)(uVar17 & 0xfffffff8));
  }
  if ((int)param_6 <= iVar16) {
    return;
  }
  auVar63._4_4_ = iVar16;
  auVar63._0_4_ = iVar16;
  auVar63._8_4_ = iVar16;
  auVar63._12_4_ = iVar16;
  auVar63._16_4_ = iVar16;
  auVar63._20_4_ = iVar16;
  auVar63._24_4_ = iVar16;
  auVar63._28_4_ = iVar16;
  auVar34 = vpor_avx2(auVar63,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar7 = vpcmpgtd_avx2(auVar41,auVar34);
  auVar4._0_4_ = param_7 + local_380._0_4_;
  auVar4._4_4_ = param_7 + local_380._4_4_;
  auVar4._8_4_ = param_7 + local_380._8_4_;
  auVar4._12_4_ = param_7 + local_380._12_4_;
  auVar4._16_4_ = param_7 + local_380._16_4_;
  auVar4._20_4_ = param_7 + local_380._20_4_;
  auVar4._24_4_ = param_7 + local_380._24_4_;
  auVar4._28_4_ = param_7 + local_380._28_4_;
  vpslld_avx2(auVar4,4);
  auVar50._4_4_ = __real_00000004;
  auVar50._0_4_ = __real_00000004;
  auVar50._8_4_ = __real_00000004;
  auVar50._12_4_ = __real_00000004;
  auVar50._16_4_ = __real_00000004;
  auVar50._20_4_ = __real_00000004;
  auVar50._24_4_ = __real_00000004;
  auVar50._28_4_ = __real_00000004;
  auVar32 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar7);
  auVar39 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar7);
  auVar66._4_4_ = __real_00000008;
  auVar66._0_4_ = __real_00000008;
  auVar66._8_4_ = __real_00000008;
  auVar66._12_4_ = __real_00000008;
  auVar66._16_4_ = __real_00000008;
  auVar66._20_4_ = __real_00000008;
  auVar66._24_4_ = __real_00000008;
  auVar66._28_4_ = __real_00000008;
  auVar61 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar7);
  auVar5._0_4_ = local_360._0_4_ + param_7;
  auVar5._4_4_ = local_360._4_4_ + param_7;
  auVar5._8_4_ = local_360._8_4_ + param_7;
  auVar5._12_4_ = local_360._12_4_ + param_7;
  auVar5._16_4_ = local_360._16_4_ + param_7;
  auVar5._20_4_ = local_360._20_4_ + param_7;
  auVar5._24_4_ = local_360._24_4_ + param_7;
  auVar5._28_4_ = local_360._28_4_ + param_7;
  auVar70 = vpslld_avx2(auVar5,4);
  vpor_avx2(auVar70,auVar50);
  auVar31 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar7);
  vpor_avx2(auVar70,auVar66);
  auVar67 = vgatherdps(ZEXT432(0) << 0x20,auVar7);
  auVar33._4_4_ = __real_0000000c;
  auVar33._0_4_ = __real_0000000c;
  auVar33._8_4_ = __real_0000000c;
  auVar33._12_4_ = __real_0000000c;
  auVar33._16_4_ = __real_0000000c;
  auVar33._20_4_ = __real_0000000c;
  auVar33._24_4_ = __real_0000000c;
  auVar33._28_4_ = __real_0000000c;
  vpor_avx2(auVar70,auVar33);
  auVar77 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar7);
  auVar78 = vgatherdps(ZEXT832(0),auVar7);
  auVar32 = vmaskmovps_avx(auVar7,auVar32);
  auVar39 = vmaskmovps_avx(auVar7,auVar39);
  auVar61 = vmaskmovps_avx(auVar7,auVar61);
  auVar78 = vmaskmovps_avx(auVar7,auVar78);
  auVar31 = vmaskmovps_avx(auVar7,auVar31);
  auVar69 = vpand_avx2(local_360,auVar7);
  auVar67 = vmaskmovps_avx(auVar7,auVar67);
  auVar30 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + auVar69._0_4_)),
                        (uint)*(byte *)(param_4 + auVar69._4_4_),1);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar69._8_4_),2);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar69._12_4_),3);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar69._16_4_),4);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar69._20_4_),5);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar69._24_4_),6);
  auVar30 = vpinsrb_avx(auVar30,(uint)*(byte *)(param_4 + auVar69._28_4_),7);
  auVar6._0_4_ = iVar16 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
  auVar6._4_4_ = iVar16 + _UNK_150b51904;
  auVar6._8_4_ = iVar16 + _UNK_150b51908;
  auVar6._12_4_ = iVar16 + _UNK_150b5190c;
  auVar6._16_4_ = iVar16 + _UNK_150b51910;
  auVar6._20_4_ = iVar16 + _UNK_150b51914;
  auVar6._24_4_ = iVar16 + _UNK_150b51918;
  auVar6._28_4_ = iVar16 + _UNK_150b5191c;
  auVar41 = vpcmpgtd_avx2(auVar41,auVar6);
  iVar16 = vmovmskps_avx(auVar41);
  if (iVar16 != 0) {
    auVar41 = vpand_avx2(auVar41,auVar7);
    uVar17 = auVar34._0_4_;
    if ((char)iVar16 == -1) {
      auVar69 = *(undefined1 (*) [32])(param_2[4] + (ulonglong)uVar17 * 0xc);
      auVar34 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar69);
      auVar80 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar17 * 0xc));
      auVar34 = vpblendd_avx2(auVar80,auVar34,0x88);
      auVar80 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar69);
      auVar81 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar17 * 0xc));
      auVar80 = vpblendd_avx2(auVar81,auVar80,0x13);
      auVar58._16_16_ = ZEXT116(0) * auVar34._16_16_ | ZEXT116(1) * auVar80._0_16_;
      auVar58._0_16_ = ZEXT116(0) * auVar80._0_16_ | ZEXT116(1) * auVar34._0_16_;
      auVar34 = vperm2i128_avx2(auVar34,auVar80,0x31);
      auVar69 = vpblendd_avx2(auVar69,*(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar17 * 0xc),
                              0x24);
      auVar69 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar69);
      auVar71._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar71._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar80 = vpermd_avx2(auVar71,*(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar17 * 0xc));
      auVar69 = vpblendd_avx2(auVar69,auVar80,0xe0);
    }
    else {
      auVar58 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar41);
      auVar34 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar41);
      auVar69 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar41);
    }
    vmaskmovps_avx(auVar41,auVar58);
    vmaskmovps_avx(auVar41,auVar34);
    vmaskmovps_avx(auVar41,auVar69);
  }
  auVar41 = vpmovzxbd_avx2(auVar30);
  auVar41 = vpslld_avx2(auVar41,2);
  vpmovzxdq_avx2(auVar41._16_16_);
  vpmovzxdq_avx2(auVar41._0_16_);
  auVar30 = vgatherqps(ZEXT816(0) << 0x40,auVar7._0_16_);
  auVar68 = vgatherqps(ZEXT816(0) << 0x40,auVar7._16_16_);
  auVar32 = vsubps_avx(auVar32,auVar78);
  auVar69 = vsubps_avx(auVar39,auVar31);
  auVar34 = vsubps_avx(auVar61,auVar67);
  auVar64._0_4_ =
       auVar34._0_4_ * auVar34._0_4_ + auVar32._0_4_ * auVar32._0_4_ + auVar69._0_4_ * auVar69._0_4_
  ;
  auVar64._4_4_ =
       auVar34._4_4_ * auVar34._4_4_ + auVar32._4_4_ * auVar32._4_4_ + auVar69._4_4_ * auVar69._4_4_
  ;
  auVar64._8_4_ =
       auVar34._8_4_ * auVar34._8_4_ + auVar32._8_4_ * auVar32._8_4_ + auVar69._8_4_ * auVar69._8_4_
  ;
  auVar64._12_4_ =
       auVar34._12_4_ * auVar34._12_4_ +
       auVar32._12_4_ * auVar32._12_4_ + auVar69._12_4_ * auVar69._12_4_;
  auVar64._16_4_ =
       auVar34._16_4_ * auVar34._16_4_ +
       auVar32._16_4_ * auVar32._16_4_ + auVar69._16_4_ * auVar69._16_4_;
  auVar64._20_4_ =
       auVar34._20_4_ * auVar34._20_4_ +
       auVar32._20_4_ * auVar32._20_4_ + auVar69._20_4_ * auVar69._20_4_;
  auVar64._24_4_ =
       auVar34._24_4_ * auVar34._24_4_ +
       auVar32._24_4_ * auVar32._24_4_ + auVar69._24_4_ * auVar69._24_4_;
  auVar64._28_4_ =
       auVar34._28_4_ * auVar34._28_4_ +
       auVar32._28_4_ * auVar32._28_4_ + auVar69._28_4_ * auVar69._28_4_;
  auVar61 = vsqrtps_avx(auVar64);
  auVar65._4_4_ = __real_38d1b717;
  auVar65._0_4_ = __real_38d1b717;
  auVar65._8_4_ = __real_38d1b717;
  auVar65._12_4_ = __real_38d1b717;
  auVar65._16_4_ = __real_38d1b717;
  auVar65._20_4_ = __real_38d1b717;
  auVar65._24_4_ = __real_38d1b717;
  auVar65._28_4_ = __real_38d1b717;
  auVar41 = vcmpps_avx(auVar61,auVar65,1);
  auVar32 = vdivps_avx(auVar32,auVar61);
  auVar82._4_4_ = __real_3f800000;
  auVar82._0_4_ = __real_3f800000;
  auVar82._8_4_ = __real_3f800000;
  auVar82._12_4_ = __real_3f800000;
  auVar82._16_4_ = __real_3f800000;
  auVar82._20_4_ = __real_3f800000;
  auVar82._24_4_ = __real_3f800000;
  auVar82._28_4_ = __real_3f800000;
  auVar32 = vblendvps_avx(auVar32,auVar82,auVar41);
  auVar79._0_4_ = -((float)local_340._0_4_ * auVar30._0_4_) + auVar61._0_4_;
  auVar79._4_4_ = -((float)local_340._4_4_ * auVar30._4_4_) + auVar61._4_4_;
  auVar79._8_4_ = -(fStack_338 * auVar30._8_4_) + auVar61._8_4_;
  auVar79._12_4_ = -(fStack_334 * auVar30._12_4_) + auVar61._12_4_;
  auVar79._16_4_ = -(fStack_330 * auVar68._0_4_) + auVar61._16_4_;
  auVar79._20_4_ = -(fStack_32c * auVar68._4_4_) + auVar61._20_4_;
  auVar79._24_4_ = -(fStack_328 * auVar68._8_4_) + auVar61._24_4_;
  auVar79._28_4_ = -(fStack_324 * auVar68._12_4_) + auVar61._28_4_;
  fVar37 = auVar79._0_4_ * fVar59;
  fVar42 = auVar79._4_4_ * fVar59;
  fVar43 = auVar79._8_4_ * fVar59;
  fVar44 = auVar79._12_4_ * fVar59;
  fVar45 = auVar79._16_4_ * fVar59;
  fVar46 = auVar79._20_4_ * fVar59;
  fVar47 = auVar79._24_4_ * fVar59;
  fVar59 = auVar79._28_4_ * fVar59;
  auVar39 = vcmpps_avx(auVar79,ZEXT832(0) << 0x20,1);
  uVar49 = auVar39._0_4_;
  uVar51 = auVar39._4_4_;
  uVar52 = auVar39._8_4_;
  uVar53 = auVar39._12_4_;
  uVar54 = auVar39._16_4_;
  uVar55 = auVar39._20_4_;
  uVar56 = auVar39._24_4_;
  uVar57 = auVar39._28_4_;
  auVar72._0_4_ = auVar78._0_4_ + (float)(~uVar49 & (uint)(auVar32._0_4_ * fVar37));
  auVar72._4_4_ = auVar78._4_4_ + (float)(~uVar51 & (uint)(auVar32._4_4_ * fVar42));
  auVar72._8_4_ = auVar78._8_4_ + (float)(~uVar52 & (uint)(auVar32._8_4_ * fVar43));
  auVar72._12_4_ = auVar78._12_4_ + (float)(~uVar53 & (uint)(auVar32._12_4_ * fVar44));
  auVar74._16_4_ = auVar78._16_4_ + (float)(~uVar54 & (uint)(auVar32._16_4_ * fVar45));
  auVar74._0_16_ = auVar72;
  auVar74._20_4_ = auVar78._20_4_ + (float)(~uVar55 & (uint)(auVar32._20_4_ * fVar46));
  auVar74._24_4_ = auVar78._24_4_ + (float)(~uVar56 & (uint)(auVar32._24_4_ * fVar47));
  auVar74._28_4_ = auVar78._28_4_ + (float)(~uVar57 & (uint)(auVar32._28_4_ * fVar59));
  uVar17 = vmovmskps_avx(auVar7);
  cVar15 = (char)uVar17;
  iVar29 = auVar70._0_4_;
  auVar30 = auVar70._16_16_;
  auVar75 = auVar74._16_16_;
  auVar68 = auVar77._0_16_;
  auVar60 = auVar77._16_16_;
  iVar16 = auVar70._4_4_;
  iVar18 = auVar70._8_4_;
  iVar19 = auVar70._12_4_;
  iVar38 = auVar70._16_4_;
  if ((uVar17 & 1) != 0) {
    *(float *)(param_1 + iVar29) = auVar72._0_4_;
  }
  if ((uVar17 & 2) != 0) {
    uVar3 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + iVar16) = uVar3;
  }
  if ((uVar17 & 4) != 0) {
    uVar3 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + iVar18) = uVar3;
  }
  if ((uVar17 & 8) == 0) {
    auVar32 = vdivps_avx(auVar69,auVar61);
  }
  else {
    uVar3 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + iVar19) = uVar3;
    auVar32 = vdivps_avx(auVar69,auVar61);
  }
  if ((uVar17 & 0x10) != 0) {
    *(float *)(param_1 + iVar38) = auVar74._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar30,1);
    uVar3 = vextractps_avx(auVar75,1);
    *(undefined4 *)(param_1 + iVar20) = uVar3;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar30,2);
    uVar3 = vextractps_avx(auVar75,2);
    *(undefined4 *)(param_1 + iVar20) = uVar3;
  }
  uVar14 = ~uVar57 & (uint)((float)(~auVar41._28_4_ & auVar32._28_4_) * fVar59);
  uVar13 = ~uVar56 & (uint)((float)(~auVar41._24_4_ & auVar32._24_4_) * fVar47);
  uVar1 = ~uVar55 & (uint)((float)(~auVar41._20_4_ & auVar32._20_4_) * fVar46);
  uVar12 = ~uVar54 & (uint)((float)(~auVar41._16_4_ & auVar32._16_4_) * fVar45);
  uVar11 = ~uVar53 & (uint)((float)(~auVar41._12_4_ & auVar32._12_4_) * fVar44);
  uVar10 = ~uVar52 & (uint)((float)(~auVar41._8_4_ & auVar32._8_4_) * fVar43);
  uVar9 = ~uVar51 & (uint)((float)(~auVar41._4_4_ & auVar32._4_4_) * fVar42);
  uVar3 = ~uVar49 & (uint)((float)(~auVar41._0_4_ & auVar32._0_4_) * fVar37);
  if (cVar15 < '\0') {
    iVar20 = vextractps_avx(auVar30,3);
    uVar2 = vextractps_avx(auVar75,3);
    *(undefined4 *)(param_1 + iVar20) = uVar2;
    auVar35._0_4_ = auVar31._0_4_ + (float)uVar3;
    auVar35._4_4_ = auVar31._4_4_ + (float)uVar9;
    auVar35._8_4_ = auVar31._8_4_ + (float)uVar10;
    auVar35._12_4_ = auVar31._12_4_ + (float)uVar11;
    auVar35._16_4_ = auVar31._16_4_ + (float)uVar12;
    auVar35._20_4_ = auVar31._20_4_ + (float)uVar1;
    auVar35._24_4_ = auVar31._24_4_ + (float)uVar13;
    auVar35._28_4_ = auVar31._28_4_ + (float)uVar14;
  }
  else {
    auVar35._0_4_ = auVar31._0_4_ + (float)uVar3;
    auVar35._4_4_ = auVar31._4_4_ + (float)uVar9;
    auVar35._8_4_ = auVar31._8_4_ + (float)uVar10;
    auVar35._12_4_ = auVar31._12_4_ + (float)uVar11;
    auVar35._16_4_ = auVar31._16_4_ + (float)uVar12;
    auVar35._20_4_ = auVar31._20_4_ + (float)uVar1;
    auVar35._24_4_ = auVar31._24_4_ + (float)uVar13;
    auVar35._28_4_ = auVar31._28_4_ + (float)uVar14;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar29) = auVar35._0_4_;
  }
  auVar72 = auVar35._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar3 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar3;
  }
  if ((uVar17 & 4) != 0) {
    uVar3 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar18) = uVar3;
  }
  if ((uVar17 & 8) == 0) {
    auVar32 = vdivps_avx(auVar34,auVar61);
  }
  else {
    uVar3 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar19) = uVar3;
    auVar32 = vdivps_avx(auVar34,auVar61);
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar38) = auVar35._16_4_;
  }
  auVar72 = auVar35._16_16_;
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar30,1);
    uVar3 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar30,2);
    uVar3 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar3;
  }
  uVar14 = ~uVar57 & (uint)((float)(~auVar41._28_4_ & auVar32._28_4_) * fVar59);
  uVar13 = ~uVar56 & (uint)((float)(~auVar41._24_4_ & auVar32._24_4_) * fVar47);
  uVar1 = ~uVar55 & (uint)((float)(~auVar41._20_4_ & auVar32._20_4_) * fVar46);
  uVar12 = ~uVar54 & (uint)((float)(~auVar41._16_4_ & auVar32._16_4_) * fVar45);
  uVar11 = ~uVar53 & (uint)((float)(~auVar41._12_4_ & auVar32._12_4_) * fVar44);
  uVar10 = ~uVar52 & (uint)((float)(~auVar41._8_4_ & auVar32._8_4_) * fVar43);
  uVar9 = ~uVar51 & (uint)((float)(~auVar41._4_4_ & auVar32._4_4_) * fVar42);
  uVar3 = ~uVar49 & (uint)((float)(~auVar41._0_4_ & auVar32._0_4_) * fVar37);
  if (cVar15 < '\0') {
    iVar20 = vextractps_avx(auVar30,3);
    uVar2 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar2;
    auVar36._0_4_ = auVar67._0_4_ + (float)uVar3;
    auVar36._4_4_ = auVar67._4_4_ + (float)uVar9;
    auVar36._8_4_ = auVar67._8_4_ + (float)uVar10;
    auVar36._12_4_ = auVar67._12_4_ + (float)uVar11;
    auVar36._16_4_ = auVar67._16_4_ + (float)uVar12;
    auVar36._20_4_ = auVar67._20_4_ + (float)uVar1;
    auVar36._24_4_ = auVar67._24_4_ + (float)uVar13;
    auVar36._28_4_ = auVar67._28_4_ + (float)uVar14;
  }
  else {
    auVar36._0_4_ = auVar67._0_4_ + (float)uVar3;
    auVar36._4_4_ = auVar67._4_4_ + (float)uVar9;
    auVar36._8_4_ = auVar67._8_4_ + (float)uVar10;
    auVar36._12_4_ = auVar67._12_4_ + (float)uVar11;
    auVar36._16_4_ = auVar67._16_4_ + (float)uVar12;
    auVar36._20_4_ = auVar67._20_4_ + (float)uVar1;
    auVar36._24_4_ = auVar67._24_4_ + (float)uVar13;
    auVar36._28_4_ = auVar67._28_4_ + (float)uVar14;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar29) = auVar36._0_4_;
  }
  auVar72 = auVar36._0_16_;
  if ((uVar17 & 2) != 0) {
    uVar3 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar3;
  }
  if ((uVar17 & 4) != 0) {
    uVar3 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar18) = uVar3;
  }
  if ((uVar17 & 8) != 0) {
    uVar3 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar19) = uVar3;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar38) = auVar36._16_4_;
  }
  auVar72 = auVar36._16_16_;
  if ((uVar17 & 0x20) != 0) {
    iVar20 = vextractps_avx(auVar30,1);
    uVar3 = vextractps_avx(auVar72,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar20 = vextractps_avx(auVar30,2);
    uVar3 = vextractps_avx(auVar72,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
  }
  if (cVar15 < '\0') {
    iVar20 = vextractps_avx(auVar30,3);
    uVar3 = vextractps_avx(auVar72,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar3;
  }
  if ((uVar17 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar29) = auVar77._0_4_;
  }
  if ((uVar17 & 2) != 0) {
    uVar3 = vextractps_avx(auVar68,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
  }
  if ((uVar17 & 4) != 0) {
    uVar3 = vextractps_avx(auVar68,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar18) = uVar3;
  }
  if ((uVar17 & 8) != 0) {
    uVar3 = vextractps_avx(auVar68,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar19) = uVar3;
  }
  if ((uVar17 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar38) = auVar77._16_4_;
  }
  if ((uVar17 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar30,1);
    uVar3 = vextractps_avx(auVar60,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
  }
  if ((uVar17 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar30,2);
    uVar3 = vextractps_avx(auVar60,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
  }
  if (cVar15 < '\0') {
    iVar16 = vextractps_avx(auVar30,3);
    uVar3 = vextractps_avx(auVar60,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar3;
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx2 @ 1402ec0e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx2
               (longlong param_1,undefined1 (*param_2) [32],longlong param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6,uint param_7,int param_8)

{
  undefined1 auVar1 [32];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 (*pauVar8) [32];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  float fVar39;
  int iVar40;
  undefined1 auVar41 [32];
  float fVar50;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 in_ZMM3 [64];
  float fVar51;
  uint uVar52;
  undefined1 auVar53 [32];
  float fVar54;
  uint uVar55;
  float fVar56;
  uint uVar57;
  float fVar58;
  uint uVar59;
  float fVar60;
  uint uVar61;
  float fVar62;
  uint uVar63;
  float fVar64;
  uint uVar65;
  float fVar66;
  uint uVar67;
  undefined1 in_ZMM4 [64];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [16];
  undefined1 auVar74 [16];
  undefined1 auVar72 [32];
  undefined1 in_ZMM6 [64];
  undefined1 auVar73 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 local_340 [32];
  undefined1 local_320 [32];
  undefined1 local_300 [8];
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined1 auVar82 [32];
  
  uVar12 = __real_0000000c;
  uVar11 = __real_00000008;
  uVar10 = __real_00000004;
  uVar9 = __real_3f800000;
  uVar4 = __real_38d1b717;
  auVar70._4_4_ = param_7;
  auVar70._0_4_ = param_7;
  auVar70._8_4_ = param_7;
  auVar70._12_4_ = param_7;
  auVar70._16_4_ = param_7;
  auVar70._20_4_ = param_7;
  auVar70._24_4_ = param_7;
  auVar70._28_4_ = param_7;
  auVar32 = vpcmpgtd_avx2(auVar70,
                          ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  iVar16 = vmovmskps_avx(auVar32);
  if (iVar16 != 0) {
    if ((char)iVar16 == -1) {
      auVar41 = param_2[1];
      auVar36 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar41);
      auVar30 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *param_2);
      auVar36 = vpblendd_avx2(auVar30,auVar36,0x88);
      auVar30 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar41);
      auVar31 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            param_2[2]);
      auVar30 = vpblendd_avx2(auVar31,auVar30,0x13);
      in_ZMM6 = ZEXT3264(auVar30);
      auVar31._16_16_ = ZEXT116(0) * auVar36._16_16_ | ZEXT116(1) * auVar30._0_16_;
      auVar31._0_16_ = ZEXT116(0) * auVar30._0_16_ | ZEXT116(1) * auVar36._0_16_;
      auVar36 = vperm2i128_avx2(auVar36,auVar30,0x31);
      auVar41 = vpblendd_avx2(auVar41,*param_2,0x24);
      auVar41 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar41);
      auVar30._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar30._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar30 = vpermd_avx2(auVar30,param_2[2]);
      auVar41 = vpblendd_avx2(auVar41,auVar30,0xe0);
    }
    else {
      auVar31 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
      auVar36 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
      auVar41 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
      auVar30 = ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    }
    in_ZMM4 = ZEXT3264(auVar30);
    in_ZMM3 = ZEXT3264(auVar41);
    local_340 = vmaskmovps_avx(auVar32,auVar31);
    local_320 = vmaskmovps_avx(auVar32,auVar36);
    _local_300 = vmaskmovps_avx(auVar32,auVar41);
  }
  uVar18 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar18 = param_7;
  }
  if ((int)(uVar18 & 0xfffffff8) < 1) {
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    pauVar8 = param_2;
    do {
      auVar71 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)local_320._0_4_)),
                            (uint)*(byte *)(param_3 + (int)local_320._4_4_),1);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._8_4_),2);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._12_4_),3);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._16_4_),4);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._20_4_),5);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._24_4_),6);
      auVar68 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + (int)local_320._28_4_),7);
      auVar71 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + (int)local_320._0_4_)),
                            (uint)*(byte *)(param_5 + (int)local_320._4_4_),1);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_5 + (int)local_320._8_4_),2);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_5 + (int)local_320._12_4_),3);
      auVar32._0_4_ = param_8 + local_340._0_4_;
      auVar32._4_4_ = param_8 + local_340._4_4_;
      auVar32._8_4_ = param_8 + local_340._8_4_;
      auVar32._12_4_ = param_8 + local_340._12_4_;
      auVar32._16_4_ = param_8 + local_340._16_4_;
      auVar32._20_4_ = param_8 + local_340._20_4_;
      auVar32._24_4_ = param_8 + local_340._24_4_;
      auVar32._28_4_ = param_8 + local_340._28_4_;
      vpslld_avx2(auVar32,4);
      auVar32 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar30 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
      auVar74 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_5 + (int)local_320._16_4_),4);
      auVar71._4_4_ = uVar10;
      auVar71._0_4_ = uVar10;
      auVar71._8_4_ = uVar10;
      auVar71._12_4_ = uVar10;
      auVar88._16_4_ = uVar10;
      auVar88._0_16_ = auVar71;
      auVar88._20_4_ = uVar10;
      auVar88._24_4_ = uVar10;
      auVar88._28_4_ = uVar10;
      auVar32 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
      auVar83 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
      auVar74 = vpinsrb_avx(auVar74,(uint)*(byte *)(param_5 + (int)local_320._20_4_),5);
      auVar87._4_4_ = uVar11;
      auVar87._0_4_ = uVar11;
      auVar87._8_4_ = uVar11;
      auVar87._12_4_ = uVar11;
      auVar87._16_4_ = uVar11;
      auVar87._20_4_ = uVar11;
      auVar87._24_4_ = uVar11;
      auVar87._28_4_ = uVar11;
      auVar32 = vpcmpeqd_avx2(in_ZMM6._0_32_,in_ZMM6._0_32_);
      auVar31 = vgatherdps(ZEXT832(0),auVar32);
      auVar41._0_4_ = param_8 + local_320._0_4_;
      auVar41._4_4_ = param_8 + local_320._4_4_;
      auVar41._8_4_ = param_8 + local_320._8_4_;
      auVar41._12_4_ = param_8 + local_320._12_4_;
      auVar41._16_4_ = param_8 + local_320._16_4_;
      auVar41._20_4_ = param_8 + local_320._20_4_;
      auVar41._24_4_ = param_8 + local_320._24_4_;
      auVar41._28_4_ = param_8 + local_320._28_4_;
      auVar91 = vpslld_avx2(auVar41,4);
      vpor_avx2(auVar91,auVar88);
      auVar32 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar88 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
      auVar77._4_4_ = iVar16;
      auVar77._0_4_ = iVar16;
      auVar77._8_4_ = iVar16;
      auVar77._12_4_ = iVar16;
      auVar77._16_4_ = iVar16;
      auVar77._20_4_ = iVar16;
      auVar77._24_4_ = iVar16;
      auVar77._28_4_ = iVar16;
      auVar74 = vpinsrb_avx(auVar74,(uint)*(byte *)(param_5 + (int)local_320._24_4_),6);
      vpor_avx2(auVar91,auVar87);
      auVar32 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar87 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
      auVar36._0_4_ =
           iVar16 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
      auVar36._4_4_ = iVar16 + _UNK_150b51904;
      auVar36._8_4_ = iVar16 + _UNK_150b51908;
      auVar36._12_4_ = iVar16 + _UNK_150b5190c;
      auVar36._16_4_ = iVar16 + _UNK_150b51910;
      auVar36._20_4_ = iVar16 + _UNK_150b51914;
      auVar36._24_4_ = iVar16 + _UNK_150b51918;
      auVar36._28_4_ = iVar16 + _UNK_150b5191c;
      auVar74 = vpinsrb_avx(auVar74,(uint)*(byte *)(param_5 + (int)local_320._28_4_),7);
      auVar85._4_4_ = uVar12;
      auVar85._0_4_ = uVar12;
      auVar85._8_4_ = uVar12;
      auVar85._12_4_ = uVar12;
      auVar85._16_4_ = uVar12;
      auVar85._20_4_ = uVar12;
      auVar85._24_4_ = uVar12;
      auVar85._28_4_ = uVar12;
      auVar41 = vpor_avx2(auVar91,auVar85);
      auVar32 = vpcmpeqd_avx2(auVar77,auVar77);
      auVar85 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
      auVar32 = vpcmpeqd_avx2(auVar41,auVar41);
      auVar41 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar32);
      uVar2 = local_300._0_4_;
      uVar13 = local_300._4_4_;
      fVar39 = fStack_2f8;
      fVar44 = fStack_2f4;
      fVar45 = fStack_2f0;
      fVar46 = fStack_2ec;
      fVar47 = fStack_2e8;
      fVar48 = fStack_2e4;
      auVar32 = vpcmpgtd_avx2(auVar70,auVar36);
      iVar17 = vmovmskps_avx(auVar32);
      if (iVar17 != 0) {
        if ((char)iVar17 == -1) {
          auVar36 = pauVar8[3];
          auVar42 = pauVar8[4];
          auVar1 = pauVar8[5];
          auVar71 = auVar1._0_16_;
          auVar77 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                ,auVar42);
          auVar81 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,auVar36);
          auVar77 = vpblendd_avx2(auVar81,auVar77,0x88);
          auVar81 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                ,auVar42);
          auVar33 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                ,auVar1);
          auVar33 = vpblendd_avx2(auVar33,auVar81,0x13);
          auVar81._16_16_ = ZEXT116(0) * auVar77._16_16_ | ZEXT116(1) * auVar33._0_16_;
          auVar81._0_16_ = ZEXT116(0) * auVar33._0_16_ | ZEXT116(1) * auVar77._0_16_;
          auVar77 = vperm2i128_avx2(auVar77,auVar33,0x31);
          auVar36 = vpblendd_avx2(auVar42,auVar36,0x24);
          auVar36 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                ,auVar36);
          auVar42._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar42._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar42 = vpermd_avx2(auVar42,auVar1);
          auVar36 = vpblendd_avx2(auVar36,auVar42,0xe0);
        }
        else {
          auVar81 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
          auVar77 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
          auVar36 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar32);
        }
        local_340 = vmaskmovps_avx(auVar32,auVar81);
        local_320 = vmaskmovps_avx(auVar32,auVar77);
        _local_300 = vmaskmovps_avx(auVar32,auVar36);
      }
      auVar32 = vpmovzxbd_avx2(auVar68);
      auVar32 = vpslld_avx2(auVar32,2);
      vpmovzxdq_avx2(auVar32._16_16_);
      auVar32 = vpmovzxdq_avx2(auVar32._0_16_);
      auVar71 = vpcmpeqd_avx(auVar71,auVar71);
      auVar73 = vgatherqps(ZEXT816(0) << 0x20,auVar71);
      auVar71 = vpcmpeqd_avx(auVar32._0_16_,auVar32._0_16_);
      auVar79 = vgatherqps((undefined1  [16])0x0,auVar71);
      auVar32 = vpmovzxbd_avx2(auVar74);
      auVar32 = vpslld_avx2(auVar32,2);
      vpmovzxdq_avx2(auVar32._16_16_);
      auVar32 = vpmovzxdq_avx2(auVar32._0_16_);
      auVar71 = vpcmpeqd_avx(auVar74,auVar74);
      auVar68 = vgatherqps((undefined1  [16])0x0,auVar71);
      auVar71 = vpcmpeqd_avx(auVar32._0_16_,auVar32._0_16_);
      auVar71 = vgatherqps(ZEXT816(0) << 0x40,auVar71);
      auVar32 = vsubps_avx(auVar30,auVar41);
      auVar30 = vsubps_avx(auVar83,auVar88);
      auVar31 = vsubps_avx(auVar31,auVar87);
      auVar53._0_4_ =
           auVar31._0_4_ * auVar31._0_4_ +
           auVar32._0_4_ * auVar32._0_4_ + auVar30._0_4_ * auVar30._0_4_;
      auVar53._4_4_ =
           auVar31._4_4_ * auVar31._4_4_ +
           auVar32._4_4_ * auVar32._4_4_ + auVar30._4_4_ * auVar30._4_4_;
      auVar53._8_4_ =
           auVar31._8_4_ * auVar31._8_4_ +
           auVar32._8_4_ * auVar32._8_4_ + auVar30._8_4_ * auVar30._8_4_;
      auVar53._12_4_ =
           auVar31._12_4_ * auVar31._12_4_ +
           auVar32._12_4_ * auVar32._12_4_ + auVar30._12_4_ * auVar30._12_4_;
      auVar53._16_4_ =
           auVar31._16_4_ * auVar31._16_4_ +
           auVar32._16_4_ * auVar32._16_4_ + auVar30._16_4_ * auVar30._16_4_;
      auVar53._20_4_ =
           auVar31._20_4_ * auVar31._20_4_ +
           auVar32._20_4_ * auVar32._20_4_ + auVar30._20_4_ * auVar30._20_4_;
      auVar53._24_4_ =
           auVar31._24_4_ * auVar31._24_4_ +
           auVar32._24_4_ * auVar32._24_4_ + auVar30._24_4_ * auVar30._24_4_;
      auVar53._28_4_ =
           auVar31._28_4_ * auVar31._28_4_ +
           auVar32._28_4_ * auVar32._28_4_ + auVar30._28_4_ * auVar30._28_4_;
      auVar36 = vsqrtps_avx(auVar53);
      auVar32 = vdivps_avx(auVar32,auVar36);
      auVar30 = vdivps_avx(auVar30,auVar36);
      auVar31 = vdivps_avx(auVar31,auVar36);
      auVar33._0_4_ = -((float)uVar2 * auVar68._0_4_) + auVar36._0_4_;
      auVar33._4_4_ = -((float)uVar13 * auVar68._4_4_) + auVar36._4_4_;
      auVar33._8_4_ = -(fVar39 * auVar68._8_4_) + auVar36._8_4_;
      auVar33._12_4_ = -(fVar44 * auVar68._12_4_) + auVar36._12_4_;
      auVar33._16_4_ = -(fVar45 * auVar71._0_4_) + auVar36._16_4_;
      auVar33._20_4_ = -(fVar46 * auVar71._4_4_) + auVar36._20_4_;
      auVar33._24_4_ = -(fVar47 * auVar71._8_4_) + auVar36._24_4_;
      auVar33._28_4_ = -(fVar48 * auVar71._12_4_) + auVar36._28_4_;
      auVar1._4_4_ = uVar4;
      auVar1._0_4_ = uVar4;
      auVar1._8_4_ = uVar4;
      auVar1._12_4_ = uVar4;
      auVar1._16_4_ = uVar4;
      auVar1._20_4_ = uVar4;
      auVar1._24_4_ = uVar4;
      auVar1._28_4_ = uVar4;
      auVar36 = vcmpps_avx(auVar36,auVar1,1);
      auVar83._4_4_ = uVar9;
      auVar83._0_4_ = uVar9;
      auVar83._8_4_ = uVar9;
      auVar83._12_4_ = uVar9;
      auVar83._16_4_ = uVar9;
      auVar83._20_4_ = uVar9;
      auVar83._24_4_ = uVar9;
      auVar83._28_4_ = uVar9;
      auVar32 = vblendvps_avx(auVar32,auVar83,auVar36);
      fVar51 = auVar73._0_4_ * auVar33._0_4_;
      fVar54 = auVar73._4_4_ * auVar33._4_4_;
      fVar56 = auVar73._8_4_ * auVar33._8_4_;
      fVar58 = auVar73._12_4_ * auVar33._12_4_;
      fVar60 = auVar79._0_4_ * auVar33._16_4_;
      fVar62 = auVar79._4_4_ * auVar33._20_4_;
      fVar64 = auVar79._8_4_ * auVar33._24_4_;
      fVar66 = auVar79._12_4_ * auVar33._28_4_;
      in_ZMM4 = ZEXT3264(CONCAT428(fVar66,CONCAT424(fVar64,CONCAT420(fVar62,CONCAT416(fVar60,
                                                  CONCAT412(fVar58,CONCAT48(fVar56,CONCAT44(fVar54,
                                                  fVar51))))))));
      fVar39 = auVar32._0_4_ * fVar51;
      fVar44 = auVar32._4_4_ * fVar54;
      fVar45 = auVar32._8_4_ * fVar56;
      fVar46 = auVar32._12_4_ * fVar58;
      fVar47 = auVar32._16_4_ * fVar60;
      fVar48 = auVar32._20_4_ * fVar62;
      fVar49 = auVar32._24_4_ * fVar64;
      fVar50 = auVar32._28_4_ * fVar66;
      in_ZMM3 = ZEXT3264(CONCAT428(fVar50,CONCAT424(fVar49,CONCAT420(fVar48,CONCAT416(fVar47,
                                                  CONCAT412(fVar46,CONCAT48(fVar45,CONCAT44(fVar44,
                                                  fVar39))))))));
      auVar32 = vcmpps_avx(auVar33,
                           ___ymm_0000000000000000000000000000000000000000000000000000000000000000,1
                          );
      in_ZMM6 = ZEXT3264(auVar32);
      uVar52 = auVar32._0_4_;
      uVar55 = auVar32._4_4_;
      uVar57 = auVar32._8_4_;
      uVar59 = auVar32._12_4_;
      uVar61 = auVar32._16_4_;
      uVar63 = auVar32._20_4_;
      uVar65 = auVar32._24_4_;
      uVar67 = auVar32._28_4_;
      auVar73._0_4_ = auVar41._0_4_ + (float)(~uVar52 & (uint)fVar39);
      auVar73._4_4_ = auVar41._4_4_ + (float)(~uVar55 & (uint)fVar44);
      auVar73._8_4_ = auVar41._8_4_ + (float)(~uVar57 & (uint)fVar45);
      auVar73._12_4_ = auVar41._12_4_ + (float)(~uVar59 & (uint)fVar46);
      auVar75._16_4_ = auVar41._16_4_ + (float)(~uVar61 & (uint)fVar47);
      auVar75._0_16_ = auVar73;
      auVar75._20_4_ = auVar41._20_4_ + (float)(~uVar63 & (uint)fVar48);
      auVar75._24_4_ = auVar41._24_4_ + (float)(~uVar65 & (uint)fVar49);
      auVar75._28_4_ = auVar41._28_4_ + (float)(~uVar67 & (uint)fVar50);
      lVar28 = (longlong)auVar91._0_4_;
      *(float *)(param_1 + lVar28) = auVar73._0_4_;
      lVar26 = (longlong)auVar91._4_4_;
      uVar2 = vextractps_avx(auVar73,1);
      *(undefined4 *)(param_1 + lVar26) = uVar2;
      lVar27 = (longlong)auVar91._8_4_;
      uVar2 = vextractps_avx(auVar73,2);
      *(undefined4 *)(param_1 + lVar27) = uVar2;
      lVar22 = (longlong)auVar91._12_4_;
      uVar2 = vextractps_avx(auVar73,3);
      *(undefined4 *)(param_1 + lVar22) = uVar2;
      lVar23 = (longlong)auVar91._16_4_;
      auVar71 = auVar75._16_16_;
      *(float *)(param_1 + lVar23) = auVar75._16_4_;
      lVar25 = (longlong)auVar91._20_4_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + lVar25) = uVar2;
      lVar19 = (longlong)auVar91._24_4_;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + lVar19) = uVar2;
      lVar24 = (longlong)auVar91._28_4_;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + lVar24) = uVar2;
      auVar74._0_4_ =
           auVar88._0_4_ +
           (float)(~uVar52 & (uint)((float)(~auVar36._0_4_ & auVar30._0_4_) * fVar51));
      auVar74._4_4_ =
           auVar88._4_4_ +
           (float)(~uVar55 & (uint)((float)(~auVar36._4_4_ & auVar30._4_4_) * fVar54));
      auVar74._8_4_ =
           auVar88._8_4_ +
           (float)(~uVar57 & (uint)((float)(~auVar36._8_4_ & auVar30._8_4_) * fVar56));
      auVar74._12_4_ =
           auVar88._12_4_ +
           (float)(~uVar59 & (uint)((float)(~auVar36._12_4_ & auVar30._12_4_) * fVar58));
      auVar34._16_4_ =
           auVar88._16_4_ +
           (float)(~uVar61 & (uint)((float)(~auVar36._16_4_ & auVar30._16_4_) * fVar60));
      auVar34._0_16_ = auVar74;
      auVar34._20_4_ =
           auVar88._20_4_ +
           (float)(~uVar63 & (uint)((float)(~auVar36._20_4_ & auVar30._20_4_) * fVar62));
      auVar34._24_4_ =
           auVar88._24_4_ +
           (float)(~uVar65 & (uint)((float)(~auVar36._24_4_ & auVar30._24_4_) * fVar64));
      auVar34._28_4_ =
           auVar88._28_4_ +
           (float)(~uVar67 & (uint)((float)(~auVar36._28_4_ & auVar30._28_4_) * fVar66));
      *(float *)(param_1 + 4 + lVar28) = auVar74._0_4_;
      uVar2 = vextractps_avx(auVar74,1);
      *(undefined4 *)(param_1 + 4 + lVar26) = uVar2;
      uVar2 = vextractps_avx(auVar74,2);
      *(undefined4 *)(param_1 + 4 + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar74,3);
      *(undefined4 *)(param_1 + 4 + lVar22) = uVar2;
      auVar71 = auVar34._16_16_;
      *(float *)(param_1 + 4 + lVar23) = auVar34._16_4_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + 4 + lVar25) = uVar2;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + 4 + lVar19) = uVar2;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + 4 + lVar24) = uVar2;
      auVar68._0_4_ =
           auVar87._0_4_ +
           (float)(~uVar52 & (uint)((float)(~auVar36._0_4_ & auVar31._0_4_) * fVar51));
      auVar68._4_4_ =
           auVar87._4_4_ +
           (float)(~uVar55 & (uint)((float)(~auVar36._4_4_ & auVar31._4_4_) * fVar54));
      auVar68._8_4_ =
           auVar87._8_4_ +
           (float)(~uVar57 & (uint)((float)(~auVar36._8_4_ & auVar31._8_4_) * fVar56));
      auVar68._12_4_ =
           auVar87._12_4_ +
           (float)(~uVar59 & (uint)((float)(~auVar36._12_4_ & auVar31._12_4_) * fVar58));
      auVar91._16_4_ =
           auVar87._16_4_ +
           (float)(~uVar61 & (uint)((float)(~auVar36._16_4_ & auVar31._16_4_) * fVar60));
      auVar91._0_16_ = auVar68;
      auVar91._20_4_ =
           auVar87._20_4_ +
           (float)(~uVar63 & (uint)((float)(~auVar36._20_4_ & auVar31._20_4_) * fVar62));
      auVar91._24_4_ =
           auVar87._24_4_ +
           (float)(~uVar65 & (uint)((float)(~auVar36._24_4_ & auVar31._24_4_) * fVar64));
      auVar91._28_4_ =
           auVar87._28_4_ +
           (float)(~uVar67 & (uint)((float)(~auVar36._28_4_ & auVar31._28_4_) * fVar66));
      *(float *)(param_1 + 8 + lVar28) = auVar68._0_4_;
      uVar2 = vextractps_avx(auVar68,1);
      *(undefined4 *)(param_1 + 8 + lVar26) = uVar2;
      uVar2 = vextractps_avx(auVar68,2);
      *(undefined4 *)(param_1 + 8 + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar68,3);
      *(undefined4 *)(param_1 + 8 + lVar22) = uVar2;
      auVar71 = auVar91._16_16_;
      *(float *)(param_1 + 8 + lVar23) = auVar91._16_4_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + 8 + lVar25) = uVar2;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + 8 + lVar19) = uVar2;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + 8 + lVar24) = uVar2;
      *(int *)(param_1 + 0xc + lVar28) = auVar85._0_4_;
      auVar71 = auVar85._0_16_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + 0xc + lVar26) = uVar2;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + 0xc + lVar27) = uVar2;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + 0xc + lVar22) = uVar2;
      auVar71 = auVar85._16_16_;
      *(int *)(param_1 + 0xc + lVar23) = auVar85._16_4_;
      uVar2 = vextractps_avx(auVar71,1);
      *(undefined4 *)(param_1 + 0xc + lVar25) = uVar2;
      uVar2 = vextractps_avx(auVar71,2);
      *(undefined4 *)(param_1 + 0xc + lVar19) = uVar2;
      uVar2 = vextractps_avx(auVar71,3);
      *(undefined4 *)(param_1 + 0xc + lVar24) = uVar2;
      iVar16 = iVar16 + 8;
      pauVar8 = pauVar8 + 3;
    } while (iVar16 < (int)(uVar18 & 0xfffffff8));
  }
  if ((int)param_7 <= iVar16) {
    return;
  }
  auVar72._4_4_ = iVar16;
  auVar72._0_4_ = iVar16;
  auVar72._8_4_ = iVar16;
  auVar72._12_4_ = iVar16;
  auVar72._16_4_ = iVar16;
  auVar72._20_4_ = iVar16;
  auVar72._24_4_ = iVar16;
  auVar72._28_4_ = iVar16;
  auVar77 = vpor_avx2(auVar72,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar88 = vpcmpgtd_avx2(auVar70,auVar77);
  auVar5._0_4_ = param_8 + local_340._0_4_;
  auVar5._4_4_ = param_8 + local_340._4_4_;
  auVar5._8_4_ = param_8 + local_340._8_4_;
  auVar5._12_4_ = param_8 + local_340._12_4_;
  auVar5._16_4_ = param_8 + local_340._16_4_;
  auVar5._20_4_ = param_8 + local_340._20_4_;
  auVar5._24_4_ = param_8 + local_340._24_4_;
  auVar5._28_4_ = param_8 + local_340._28_4_;
  vpslld_avx2(auVar5,4);
  auVar37._4_4_ = __real_00000004;
  auVar37._0_4_ = __real_00000004;
  auVar37._8_4_ = __real_00000004;
  auVar37._12_4_ = __real_00000004;
  auVar37._16_4_ = __real_00000004;
  auVar37._20_4_ = __real_00000004;
  auVar37._24_4_ = __real_00000004;
  auVar37._28_4_ = __real_00000004;
  auVar32 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar88);
  auVar41 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar88);
  auVar76._4_4_ = __real_00000008;
  auVar76._0_4_ = __real_00000008;
  auVar76._8_4_ = __real_00000008;
  auVar76._12_4_ = __real_00000008;
  auVar76._16_4_ = __real_00000008;
  auVar76._20_4_ = __real_00000008;
  auVar76._24_4_ = __real_00000008;
  auVar76._28_4_ = __real_00000008;
  auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar88);
  auVar6._0_4_ = local_320._0_4_ + param_8;
  auVar6._4_4_ = local_320._4_4_ + param_8;
  auVar6._8_4_ = local_320._8_4_ + param_8;
  auVar6._12_4_ = local_320._12_4_ + param_8;
  auVar6._16_4_ = local_320._16_4_ + param_8;
  auVar6._20_4_ = local_320._20_4_ + param_8;
  auVar6._24_4_ = local_320._24_4_ + param_8;
  auVar6._28_4_ = local_320._28_4_ + param_8;
  auVar83 = vpslld_avx2(auVar6,4);
  vpor_avx2(auVar83,auVar37);
  auVar31 = vgatherdps(ZEXT832(0),auVar88);
  vpor_avx2(auVar76,auVar83);
  auVar85 = vgatherdps(ZEXT832(0),auVar88);
  auVar35._4_4_ = __real_0000000c;
  auVar35._0_4_ = __real_0000000c;
  auVar35._8_4_ = __real_0000000c;
  auVar35._12_4_ = __real_0000000c;
  auVar35._16_4_ = __real_0000000c;
  auVar35._20_4_ = __real_0000000c;
  auVar35._24_4_ = __real_0000000c;
  auVar35._28_4_ = __real_0000000c;
  vpor_avx2(auVar83,auVar35);
  auVar91 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar88);
  auVar30 = vgatherdps(ZEXT832(0),auVar88);
  auVar32 = vmaskmovps_avx(auVar88,auVar32);
  auVar41 = vmaskmovps_avx(auVar88,auVar41);
  auVar36 = vmaskmovps_avx(auVar88,auVar36);
  auVar30 = vmaskmovps_avx(auVar88,auVar30);
  auVar87 = vpand_avx2(local_320,auVar88);
  auVar31 = vmaskmovps_avx(auVar88,auVar31);
  auVar71 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + auVar87._0_4_)),
                        (uint)*(byte *)(param_3 + auVar87._4_4_),1);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar87._8_4_),2);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar87._12_4_),3);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar87._16_4_),4);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar87._20_4_),5);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar87._24_4_),6);
  auVar85 = vmaskmovps_avx(auVar88,auVar85);
  auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_3 + auVar87._28_4_),7);
  auVar68 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + auVar87._0_4_)),
                        (uint)*(byte *)(param_5 + auVar87._4_4_),1);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar87._8_4_),2);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar87._12_4_),3);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar87._16_4_),4);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar87._20_4_),5);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar87._24_4_),6);
  auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_5 + auVar87._28_4_),7);
  auVar7._0_4_ = iVar16 + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
  auVar7._4_4_ = iVar16 + _UNK_150b51904;
  auVar7._8_4_ = iVar16 + _UNK_150b51908;
  auVar7._12_4_ = iVar16 + _UNK_150b5190c;
  auVar7._16_4_ = iVar16 + _UNK_150b51910;
  auVar7._20_4_ = iVar16 + _UNK_150b51914;
  auVar7._24_4_ = iVar16 + _UNK_150b51918;
  auVar7._28_4_ = iVar16 + _UNK_150b5191c;
  auVar70 = vpcmpgtd_avx2(auVar70,auVar7);
  iVar16 = vmovmskps_avx(auVar70);
  if (iVar16 != 0) {
    auVar70 = vpand_avx2(auVar70,auVar88);
    uVar18 = auVar77._0_4_;
    if ((char)iVar16 == -1) {
      auVar87 = *(undefined1 (*) [32])(param_2[4] + (ulonglong)uVar18 * 0xc);
      auVar77 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar87);
      auVar81 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            *(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar18 * 0xc));
      auVar77 = vpblendd_avx2(auVar81,auVar77,0x88);
      auVar81 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar87);
      auVar42 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar18 * 0xc));
      auVar81 = vpblendd_avx2(auVar42,auVar81,0x13);
      auVar69._16_16_ = ZEXT116(0) * auVar77._16_16_ | ZEXT116(1) * auVar81._0_16_;
      auVar69._0_16_ = ZEXT116(0) * auVar81._0_16_ | ZEXT116(1) * auVar77._0_16_;
      auVar77 = vperm2i128_avx2(auVar77,auVar81,0x31);
      auVar87 = vpblendd_avx2(auVar87,*(undefined1 (*) [32])(param_2[3] + (ulonglong)uVar18 * 0xc),
                              0x24);
      auVar87 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar87);
      auVar84._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar84._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar81 = vpermd_avx2(auVar84,*(undefined1 (*) [32])(param_2[5] + (ulonglong)uVar18 * 0xc));
      auVar87 = vpblendd_avx2(auVar87,auVar81,0xe0);
    }
    else {
      auVar69 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
      auVar77 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
      auVar87 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar70);
    }
    vmaskmovps_avx(auVar70,auVar69);
    vmaskmovps_avx(auVar70,auVar77);
    vmaskmovps_avx(auVar70,auVar87);
  }
  auVar70 = vpmovzxbd_avx2(auVar71);
  auVar70 = vpslld_avx2(auVar70,2);
  vpmovzxdq_avx2(auVar70._16_16_);
  vpmovzxdq_avx2(auVar70._0_16_);
  auVar79._0_12_ = ZEXT812(0);
  auVar79._12_4_ = 0;
  auVar74 = vgatherqps(auVar79,auVar88._0_16_);
  auVar73 = vgatherqps(ZEXT816(0) << 0x20,auVar88._16_16_);
  auVar70 = vpmovzxbd_avx2(auVar68);
  auVar70 = vpslld_avx2(auVar70,2);
  vpmovzxdq_avx2(auVar70._0_16_);
  auVar68 = vgatherqps((undefined1  [16])0x0,auVar88._0_16_);
  vpmovzxdq_avx2(auVar70._16_16_);
  auVar71 = vgatherqps(ZEXT816(0) << 0x20,auVar88._16_16_);
  auVar32 = vsubps_avx(auVar32,auVar30);
  auVar87 = vsubps_avx(auVar41,auVar31);
  auVar77 = vsubps_avx(auVar36,auVar85);
  auVar78._0_4_ =
       auVar77._0_4_ * auVar77._0_4_ + auVar32._0_4_ * auVar32._0_4_ + auVar87._0_4_ * auVar87._0_4_
  ;
  auVar78._4_4_ =
       auVar77._4_4_ * auVar77._4_4_ + auVar32._4_4_ * auVar32._4_4_ + auVar87._4_4_ * auVar87._4_4_
  ;
  auVar78._8_4_ =
       auVar77._8_4_ * auVar77._8_4_ + auVar32._8_4_ * auVar32._8_4_ + auVar87._8_4_ * auVar87._8_4_
  ;
  auVar78._12_4_ =
       auVar77._12_4_ * auVar77._12_4_ +
       auVar32._12_4_ * auVar32._12_4_ + auVar87._12_4_ * auVar87._12_4_;
  auVar78._16_4_ =
       auVar77._16_4_ * auVar77._16_4_ +
       auVar32._16_4_ * auVar32._16_4_ + auVar87._16_4_ * auVar87._16_4_;
  auVar78._20_4_ =
       auVar77._20_4_ * auVar77._20_4_ +
       auVar32._20_4_ * auVar32._20_4_ + auVar87._20_4_ * auVar87._20_4_;
  auVar78._24_4_ =
       auVar77._24_4_ * auVar77._24_4_ +
       auVar32._24_4_ * auVar32._24_4_ + auVar87._24_4_ * auVar87._24_4_;
  auVar78._28_4_ =
       auVar77._28_4_ * auVar77._28_4_ +
       auVar32._28_4_ * auVar32._28_4_ + auVar87._28_4_ * auVar87._28_4_;
  auVar36 = vsqrtps_avx(auVar78);
  auVar89._4_4_ = __real_38d1b717;
  auVar89._0_4_ = __real_38d1b717;
  auVar89._8_4_ = __real_38d1b717;
  auVar89._12_4_ = __real_38d1b717;
  auVar89._16_4_ = __real_38d1b717;
  auVar89._20_4_ = __real_38d1b717;
  auVar89._24_4_ = __real_38d1b717;
  auVar89._28_4_ = __real_38d1b717;
  auVar32 = vdivps_avx(auVar32,auVar36);
  auVar70 = vcmpps_avx(auVar36,auVar89,1);
  auVar90._4_4_ = __real_3f800000;
  auVar90._0_4_ = __real_3f800000;
  auVar90._8_4_ = __real_3f800000;
  auVar90._12_4_ = __real_3f800000;
  auVar90._16_4_ = __real_3f800000;
  auVar90._20_4_ = __real_3f800000;
  auVar90._24_4_ = __real_3f800000;
  auVar90._28_4_ = __real_3f800000;
  auVar32 = vblendvps_avx(auVar32,auVar90,auVar70);
  auVar86._0_4_ = -((float)local_300._0_4_ * auVar68._0_4_) + auVar36._0_4_;
  auVar86._4_4_ = -((float)local_300._4_4_ * auVar68._4_4_) + auVar36._4_4_;
  auVar86._8_4_ = -(fStack_2f8 * auVar68._8_4_) + auVar36._8_4_;
  auVar86._12_4_ = -(fStack_2f4 * auVar68._12_4_) + auVar36._12_4_;
  auVar86._16_4_ = -(fStack_2f0 * auVar71._0_4_) + auVar36._16_4_;
  auVar86._20_4_ = -(fStack_2ec * auVar71._4_4_) + auVar36._20_4_;
  auVar86._24_4_ = -(fStack_2e8 * auVar71._8_4_) + auVar36._24_4_;
  auVar86._28_4_ = -(fStack_2e4 * auVar71._12_4_) + auVar36._28_4_;
  fVar39 = auVar86._0_4_ * auVar74._0_4_;
  fVar44 = auVar86._4_4_ * auVar74._4_4_;
  fVar45 = auVar86._8_4_ * auVar74._8_4_;
  fVar46 = auVar86._12_4_ * auVar74._12_4_;
  fVar47 = auVar86._16_4_ * auVar73._0_4_;
  fVar48 = auVar86._20_4_ * auVar73._4_4_;
  fVar49 = auVar86._24_4_ * auVar73._8_4_;
  fVar50 = auVar86._28_4_ * auVar73._12_4_;
  auVar41 = vcmpps_avx(auVar86,ZEXT832(0) << 0x20,1);
  uVar52 = auVar41._0_4_;
  uVar55 = auVar41._4_4_;
  uVar57 = auVar41._8_4_;
  uVar59 = auVar41._12_4_;
  uVar61 = auVar41._16_4_;
  uVar63 = auVar41._20_4_;
  uVar65 = auVar41._24_4_;
  uVar67 = auVar41._28_4_;
  auVar80._0_4_ = auVar30._0_4_ + (float)(~uVar52 & (uint)(auVar32._0_4_ * fVar39));
  auVar80._4_4_ = auVar30._4_4_ + (float)(~uVar55 & (uint)(auVar32._4_4_ * fVar44));
  auVar80._8_4_ = auVar30._8_4_ + (float)(~uVar57 & (uint)(auVar32._8_4_ * fVar45));
  auVar80._12_4_ = auVar30._12_4_ + (float)(~uVar59 & (uint)(auVar32._12_4_ * fVar46));
  auVar82._16_4_ = auVar30._16_4_ + (float)(~uVar61 & (uint)(auVar32._16_4_ * fVar47));
  auVar82._0_16_ = auVar80;
  auVar82._20_4_ = auVar30._20_4_ + (float)(~uVar63 & (uint)(auVar32._20_4_ * fVar48));
  auVar82._24_4_ = auVar30._24_4_ + (float)(~uVar65 & (uint)(auVar32._24_4_ * fVar49));
  auVar82._28_4_ = auVar30._28_4_ + (float)(~uVar67 & (uint)(auVar32._28_4_ * fVar50));
  uVar18 = vmovmskps_avx(auVar88);
  cVar15 = (char)uVar18;
  iVar29 = auVar83._0_4_;
  auVar71 = auVar83._16_16_;
  auVar73 = auVar82._16_16_;
  auVar68 = auVar91._0_16_;
  auVar74 = auVar91._16_16_;
  iVar16 = auVar83._4_4_;
  iVar17 = auVar83._8_4_;
  iVar20 = auVar83._12_4_;
  iVar40 = auVar83._16_4_;
  if ((uVar18 & 1) != 0) {
    *(float *)(param_1 + iVar29) = auVar80._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar80,1);
    *(undefined4 *)(param_1 + iVar16) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar80,2);
    *(undefined4 *)(param_1 + iVar17) = uVar4;
  }
  if ((uVar18 & 8) == 0) {
    auVar32 = vdivps_avx(auVar87,auVar36);
  }
  else {
    uVar4 = vextractps_avx(auVar80,3);
    *(undefined4 *)(param_1 + iVar20) = uVar4;
    auVar32 = vdivps_avx(auVar87,auVar36);
  }
  if ((uVar18 & 0x10) != 0) {
    *(float *)(param_1 + iVar40) = auVar82._16_4_;
  }
  if ((uVar18 & 0x20) != 0) {
    iVar21 = vextractps_avx(auVar71,1);
    uVar4 = vextractps_avx(auVar73,1);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar21 = vextractps_avx(auVar71,2);
    uVar4 = vextractps_avx(auVar73,2);
    *(undefined4 *)(param_1 + iVar21) = uVar4;
  }
  uVar14 = ~uVar67 & (uint)((float)(~auVar70._28_4_ & auVar32._28_4_) * fVar50);
  uVar13 = ~uVar65 & (uint)((float)(~auVar70._24_4_ & auVar32._24_4_) * fVar49);
  uVar2 = ~uVar63 & (uint)((float)(~auVar70._20_4_ & auVar32._20_4_) * fVar48);
  uVar12 = ~uVar61 & (uint)((float)(~auVar70._16_4_ & auVar32._16_4_) * fVar47);
  uVar11 = ~uVar59 & (uint)((float)(~auVar70._12_4_ & auVar32._12_4_) * fVar46);
  uVar10 = ~uVar57 & (uint)((float)(~auVar70._8_4_ & auVar32._8_4_) * fVar45);
  uVar9 = ~uVar55 & (uint)((float)(~auVar70._4_4_ & auVar32._4_4_) * fVar44);
  uVar4 = ~uVar52 & (uint)((float)(~auVar70._0_4_ & auVar32._0_4_) * fVar39);
  if (cVar15 < '\0') {
    iVar21 = vextractps_avx(auVar71,3);
    uVar3 = vextractps_avx(auVar73,3);
    *(undefined4 *)(param_1 + iVar21) = uVar3;
    auVar43._0_4_ = auVar31._0_4_ + (float)uVar4;
    auVar43._4_4_ = auVar31._4_4_ + (float)uVar9;
    auVar43._8_4_ = auVar31._8_4_ + (float)uVar10;
    auVar43._12_4_ = auVar31._12_4_ + (float)uVar11;
    auVar43._16_4_ = auVar31._16_4_ + (float)uVar12;
    auVar43._20_4_ = auVar31._20_4_ + (float)uVar2;
    auVar43._24_4_ = auVar31._24_4_ + (float)uVar13;
    auVar43._28_4_ = auVar31._28_4_ + (float)uVar14;
  }
  else {
    auVar43._0_4_ = auVar31._0_4_ + (float)uVar4;
    auVar43._4_4_ = auVar31._4_4_ + (float)uVar9;
    auVar43._8_4_ = auVar31._8_4_ + (float)uVar10;
    auVar43._12_4_ = auVar31._12_4_ + (float)uVar11;
    auVar43._16_4_ = auVar31._16_4_ + (float)uVar12;
    auVar43._20_4_ = auVar31._20_4_ + (float)uVar2;
    auVar43._24_4_ = auVar31._24_4_ + (float)uVar13;
    auVar43._28_4_ = auVar31._28_4_ + (float)uVar14;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar29) = auVar43._0_4_;
  }
  auVar73 = auVar43._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar73,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar16) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar73,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar17) = uVar4;
  }
  if ((uVar18 & 8) == 0) {
    auVar32 = vdivps_avx(auVar77,auVar36);
  }
  else {
    uVar4 = vextractps_avx(auVar73,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar4;
    auVar32 = vdivps_avx(auVar77,auVar36);
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 4 + (longlong)iVar40) = auVar43._16_4_;
  }
  auVar73 = auVar43._16_16_;
  if ((uVar18 & 0x20) != 0) {
    iVar21 = vextractps_avx(auVar71,1);
    uVar4 = vextractps_avx(auVar73,1);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar21 = vextractps_avx(auVar71,2);
    uVar4 = vextractps_avx(auVar73,2);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar4;
  }
  uVar14 = ~uVar67 & (uint)((float)(~auVar70._28_4_ & auVar32._28_4_) * fVar50);
  uVar13 = ~uVar65 & (uint)((float)(~auVar70._24_4_ & auVar32._24_4_) * fVar49);
  uVar2 = ~uVar63 & (uint)((float)(~auVar70._20_4_ & auVar32._20_4_) * fVar48);
  uVar12 = ~uVar61 & (uint)((float)(~auVar70._16_4_ & auVar32._16_4_) * fVar47);
  uVar11 = ~uVar59 & (uint)((float)(~auVar70._12_4_ & auVar32._12_4_) * fVar46);
  uVar10 = ~uVar57 & (uint)((float)(~auVar70._8_4_ & auVar32._8_4_) * fVar45);
  uVar9 = ~uVar55 & (uint)((float)(~auVar70._4_4_ & auVar32._4_4_) * fVar44);
  uVar4 = ~uVar52 & (uint)((float)(~auVar70._0_4_ & auVar32._0_4_) * fVar39);
  if (cVar15 < '\0') {
    iVar21 = vextractps_avx(auVar71,3);
    uVar3 = vextractps_avx(auVar73,3);
    *(undefined4 *)(param_1 + 4 + (longlong)iVar21) = uVar3;
    auVar38._0_4_ = auVar85._0_4_ + (float)uVar4;
    auVar38._4_4_ = auVar85._4_4_ + (float)uVar9;
    auVar38._8_4_ = auVar85._8_4_ + (float)uVar10;
    auVar38._12_4_ = auVar85._12_4_ + (float)uVar11;
    auVar38._16_4_ = auVar85._16_4_ + (float)uVar12;
    auVar38._20_4_ = auVar85._20_4_ + (float)uVar2;
    auVar38._24_4_ = auVar85._24_4_ + (float)uVar13;
    auVar38._28_4_ = auVar85._28_4_ + (float)uVar14;
  }
  else {
    auVar38._0_4_ = auVar85._0_4_ + (float)uVar4;
    auVar38._4_4_ = auVar85._4_4_ + (float)uVar9;
    auVar38._8_4_ = auVar85._8_4_ + (float)uVar10;
    auVar38._12_4_ = auVar85._12_4_ + (float)uVar11;
    auVar38._16_4_ = auVar85._16_4_ + (float)uVar12;
    auVar38._20_4_ = auVar85._20_4_ + (float)uVar2;
    auVar38._24_4_ = auVar85._24_4_ + (float)uVar13;
    auVar38._28_4_ = auVar85._28_4_ + (float)uVar14;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar29) = auVar38._0_4_;
  }
  auVar73 = auVar38._0_16_;
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar73,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar16) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar73,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar17) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar73,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 8 + (longlong)iVar40) = auVar38._16_4_;
  }
  auVar73 = auVar38._16_16_;
  if ((uVar18 & 0x20) != 0) {
    iVar21 = vextractps_avx(auVar71,1);
    uVar4 = vextractps_avx(auVar73,1);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar21 = vextractps_avx(auVar71,2);
    uVar4 = vextractps_avx(auVar73,2);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if (cVar15 < '\0') {
    iVar21 = vextractps_avx(auVar71,3);
    uVar4 = vextractps_avx(auVar73,3);
    *(undefined4 *)(param_1 + 8 + (longlong)iVar21) = uVar4;
  }
  if ((uVar18 & 1) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar29) = auVar91._0_4_;
  }
  if ((uVar18 & 2) != 0) {
    uVar4 = vextractps_avx(auVar68,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar4;
  }
  if ((uVar18 & 4) != 0) {
    uVar4 = vextractps_avx(auVar68,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar17) = uVar4;
  }
  if ((uVar18 & 8) != 0) {
    uVar4 = vextractps_avx(auVar68,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar20) = uVar4;
  }
  if ((uVar18 & 0x10) != 0) {
    *(int *)(param_1 + 0xc + (longlong)iVar40) = auVar91._16_4_;
  }
  if ((uVar18 & 0x20) != 0) {
    iVar16 = vextractps_avx(auVar71,1);
    uVar4 = vextractps_avx(auVar74,1);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar4;
  }
  if ((uVar18 & 0x40) != 0) {
    iVar16 = vextractps_avx(auVar71,2);
    uVar4 = vextractps_avx(auVar74,2);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar4;
  }
  if (cVar15 < '\0') {
    iVar16 = vextractps_avx(auVar71,3);
    uVar4 = vextractps_avx(auVar74,3);
    *(undefined4 *)(param_1 + 0xc + (longlong)iVar16) = uVar4;
  }
  return;
}

