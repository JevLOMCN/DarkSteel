// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ApplyMultiResConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCunfCuni_avx512skx @ 140599d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCunfCuni_avx512skx
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
               undefined1 (*param_4) [32],float param_5,undefined4 param_6,float param_7,
               uint param_8)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 (*unaff_RBX) [32];
  undefined1 (*pauVar34) [32];
  undefined1 *puVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [32];
  undefined1 (*pauVar39) [32];
  byte bVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  uint uVar73;
  float fVar76;
  uint uVar77;
  float fVar80;
  undefined1 auVar45 [16];
  float fVar84;
  uint uVar85;
  float fVar88;
  uint uVar89;
  float fVar92;
  uint uVar93;
  float fVar96;
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar46 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  uint uVar74;
  uint uVar75;
  uint uVar78;
  uint uVar79;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar86;
  uint uVar87;
  uint uVar90;
  uint uVar91;
  uint uVar94;
  uint uVar95;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  float fVar100;
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar107 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar108 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar109 [16];
  undefined1 in_ZMM20 [64];
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  auVar62 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar61 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar60 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar107 = in_ZMM18._0_16_;
  auVar109 = in_ZMM20._0_16_;
  auVar108 = in_ZMM19._0_16_;
  auVar45 = in_ZMM16._0_16_;
  puVar1 = local_140 + 8;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  uVar42 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar42 = param_8;
  }
  if ((int)(uVar42 & 0xfffffff8) < 1) {
    uVar37 = 0;
  }
  else {
    auVar71._4_4_ = param_6;
    auVar71._0_4_ = param_6;
    auVar71._8_4_ = param_6;
    auVar71._12_4_ = param_6;
    auVar71._16_4_ = param_6;
    auVar71._20_4_ = param_6;
    auVar71._24_4_ = param_6;
    auVar71._28_4_ = param_6;
    auVar72._4_4_ = param_7;
    auVar72._0_4_ = param_7;
    auVar72._8_4_ = param_7;
    auVar72._12_4_ = param_7;
    auVar72._16_4_ = param_7;
    auVar72._20_4_ = param_7;
    auVar72._24_4_ = param_7;
    auVar72._28_4_ = param_7;
    auVar106._4_4_ = param_5;
    auVar106._0_4_ = param_5;
    auVar106._8_4_ = param_5;
    auVar106._12_4_ = param_5;
    auVar106._16_4_ = param_5;
    auVar106._20_4_ = param_5;
    auVar106._24_4_ = param_5;
    auVar106._28_4_ = param_5;
    uVar37 = 0;
    auVar45 = vxorps_avx512vl(auVar45,auVar45);
    auVar107 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar108 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar109 = __ymm_0000007000000060000000500000004000000030000000200000001000000000._0_16_;
    unaff_RBX = param_2;
    pauVar34 = param_1;
    pauVar38 = param_3;
    pauVar39 = param_4;
    do {
      auVar47 = vshuff64x2_avx512vl(*pauVar34,pauVar34[2],0);
      auVar48 = vshuff64x2_avx512vl(*pauVar34,pauVar34[2],3);
      auVar49 = vshuff64x2_avx512vl(pauVar34[1],pauVar34[3],0);
      auVar50 = vshuff64x2_avx512vl(pauVar34[1],pauVar34[3],3);
      auVar51 = vunpcklps_avx512vl(auVar47,auVar48);
      auVar47 = vunpckhps_avx512vl(auVar47,auVar48);
      auVar48 = vunpcklps_avx512vl(auVar49,auVar50);
      auVar49 = vunpckhps_avx512vl(auVar49,auVar50);
      auVar50 = vunpcklpd_avx512vl(auVar51,auVar48);
      auVar51 = vunpckhpd_avx512vl(auVar51,auVar48);
      local_120 = vunpcklpd_avx512vl(auVar47,auVar49);
      auVar47 = vunpckhpd_avx512vl(auVar47,auVar49);
      uVar41 = vcmpps_avx512vl(ZEXT1632(auVar45),auVar47,1);
      bVar40 = (byte)uVar41;
      if (bVar40 != 0) {
        if (bVar40 == 0xff) {
          auVar48 = unaff_RBX[1];
          auVar49 = vblendps_avx(auVar48,*unaff_RBX,0x24);
          auVar59 = vpermt2ps_avx512vl(*unaff_RBX,auVar60,auVar48);
          auVar53 = vpermt2ps_avx512vl(auVar49,auVar62,unaff_RBX[2]);
          auVar48 = vpermt2ps_avx512vl(unaff_RBX[2],auVar61,auVar48);
          auVar54 = vinsertf32x4_avx512vl(auVar59,auVar48._0_16_,1);
          auVar59 = vperm2f128_avx(auVar59,auVar48,0x31);
          auVar48 = pauVar38[1];
          auVar49 = vblendps_avx(auVar48,*pauVar38,0x24);
          auVar58 = vpermt2ps_avx512vl(*pauVar38,auVar60,auVar48);
          auVar55 = vpermt2ps_avx512vl(auVar49,auVar62,pauVar38[2]);
          auVar48 = vpermt2ps_avx512vl(pauVar38[2],auVar61,auVar48);
          auVar57._16_16_ = auVar48._0_16_;
          auVar57._0_16_ = auVar58._0_16_;
          auVar58 = vperm2f128_avx(auVar58,auVar48,0x31);
          auVar48 = pauVar39[1];
          auVar49 = vblendps_avx(auVar48,*pauVar39,0x24);
          auVar52 = vpermt2ps_avx512vl(*pauVar39,auVar60,auVar48);
          auVar56 = vpermt2ps_avx512vl(auVar49,auVar62,pauVar39[2]);
          auVar48 = vpermt2ps_avx512vl(pauVar39[2],auVar61,auVar48);
          auVar49._16_16_ = auVar48._0_16_;
          auVar49._0_16_ = auVar52._0_16_;
          auVar48 = vperm2f128_avx(auVar52,auVar48,0x31);
        }
        else {
          auVar46 = vxorpd_avx512vl(auVar48._0_16_,auVar48._0_16_);
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_3 + (longlong)*unaff_RBX));
          auVar54._0_4_ =
               (uint)(bVar40 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar46._0_4_;
          bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar54._4_4_ = (uint)bVar2 * auVar48._4_4_ | (uint)!bVar2 * auVar46._4_4_;
          bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar54._8_4_ = (uint)bVar2 * auVar48._8_4_ | (uint)!bVar2 * auVar46._8_4_;
          bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar54._12_4_ = (uint)bVar2 * auVar48._12_4_ | (uint)!bVar2 * auVar46._12_4_;
          auVar54._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar54._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar54._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar54._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_4 + (longlong)*unaff_RBX));
          auVar59._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar59._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar59._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar59._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar59._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar59._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar59._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar59._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + uVar37));
          auVar53._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar53._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar53._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar53._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar53._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar53._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar53._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar53._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_3 + (longlong)*pauVar38));
          auVar57._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar57._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar57._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar57._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar57._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar57._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar57._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar57._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_4 + (longlong)*pauVar38));
          auVar58._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar58._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar58._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar58._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar58._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar58._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar58._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar58._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar38 + uVar37));
          auVar55._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar55._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar55._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar55._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar55._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar55._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar55._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar55._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_3 + (longlong)*pauVar39));
          auVar49._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar49._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar49._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar49._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar49._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar49._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar49._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar49._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar52 = vgatherdps_avx512vl(*(undefined4 *)(*param_4 + (longlong)*pauVar39));
          auVar48._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar52._4_4_;
          auVar48._0_4_ = (uint)(bVar40 & 1) * auVar52._0_4_;
          auVar48._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar52._8_4_;
          auVar48._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar52._12_4_;
          auVar48._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar52._16_4_;
          auVar48._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar52._20_4_;
          auVar48._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar52._24_4_;
          auVar48._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar52._28_4_;
          auVar52 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar39 + uVar37));
          auVar56._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar52._4_4_;
          auVar56._0_4_ = (uint)(bVar40 & 1) * auVar52._0_4_;
          auVar56._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar52._8_4_;
          auVar56._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar52._12_4_;
          auVar56._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar52._16_4_;
          auVar56._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar52._20_4_;
          auVar56._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar52._24_4_;
          auVar56._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar52._28_4_;
        }
        auVar57 = vsubps_avx512vl(auVar50,auVar57);
        auVar58 = vsubps_avx512vl(auVar51,auVar58);
        auVar52 = vsubps_avx512vl(local_120,auVar55);
        auVar57 = vfnmadd213ps_avx512vl(auVar57,auVar71,auVar50);
        auVar58 = vfnmadd213ps_avx512vl(auVar58,auVar71,auVar51);
        auVar52 = vfnmadd213ps_avx512vl(auVar52,auVar71,local_120);
        local_160._0_4_ = auVar50._0_4_;
        local_160._4_4_ = auVar50._4_4_;
        local_160._8_4_ = auVar50._8_4_;
        local_160._12_4_ = auVar50._12_4_;
        local_160._16_4_ = auVar50._16_4_;
        local_160._20_4_ = auVar50._20_4_;
        local_160._24_4_ = auVar50._24_4_;
        local_160._28_4_ = auVar50._28_4_;
        local_160._0_4_ =
             (uint)(bVar40 & 1) * auVar57._0_4_ | (uint)!(bool)(bVar40 & 1) * local_160._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        local_160._4_4_ = (uint)bVar2 * auVar57._4_4_ | (uint)!bVar2 * local_160._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        local_160._8_4_ = (uint)bVar2 * auVar57._8_4_ | (uint)!bVar2 * local_160._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        local_160._12_4_ = (uint)bVar2 * auVar57._12_4_ | (uint)!bVar2 * local_160._12_4_;
        bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
        local_160._16_4_ = (uint)bVar2 * auVar57._16_4_ | (uint)!bVar2 * local_160._16_4_;
        bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
        local_160._20_4_ = (uint)bVar2 * auVar57._20_4_ | (uint)!bVar2 * local_160._20_4_;
        bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
        local_160._24_4_ = (uint)bVar2 * auVar57._24_4_ | (uint)!bVar2 * local_160._24_4_;
        bVar2 = SUB81(uVar41 >> 7,0);
        local_160._28_4_ = (uint)bVar2 * auVar57._28_4_ | (uint)!bVar2 * local_160._28_4_;
        local_140._0_4_ = auVar51._0_4_;
        local_140._4_4_ = auVar51._4_4_;
        local_140._8_4_ = auVar51._8_4_;
        local_140._12_4_ = auVar51._12_4_;
        local_140._16_4_ = auVar51._16_4_;
        local_140._20_4_ = auVar51._20_4_;
        local_140._24_4_ = auVar51._24_4_;
        local_140._28_4_ = auVar51._28_4_;
        local_140._0_4_ =
             (uint)(bVar40 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar40 & 1) * local_140._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        local_140._4_4_ = (uint)bVar2 * auVar58._4_4_ | (uint)!bVar2 * local_140._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        local_140._8_4_ = (uint)bVar2 * auVar58._8_4_ | (uint)!bVar2 * local_140._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        local_140._12_4_ = (uint)bVar2 * auVar58._12_4_ | (uint)!bVar2 * local_140._12_4_;
        bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
        local_140._16_4_ = (uint)bVar2 * auVar58._16_4_ | (uint)!bVar2 * local_140._16_4_;
        bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
        local_140._20_4_ = (uint)bVar2 * auVar58._20_4_ | (uint)!bVar2 * local_140._20_4_;
        bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
        local_140._24_4_ = (uint)bVar2 * auVar58._24_4_ | (uint)!bVar2 * local_140._24_4_;
        bVar2 = SUB81(uVar41 >> 7,0);
        local_140._28_4_ = (uint)bVar2 * auVar58._28_4_ | (uint)!bVar2 * local_140._28_4_;
        local_120._0_4_ =
             (uint)(bVar40 & 1) * auVar52._0_4_ | (uint)!(bool)(bVar40 & 1) * local_120._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        local_120._4_4_ = (uint)bVar2 * auVar52._4_4_ | (uint)!bVar2 * local_120._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        local_120._8_4_ = (uint)bVar2 * auVar52._8_4_ | (uint)!bVar2 * local_120._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        local_120._12_4_ = (uint)bVar2 * auVar52._12_4_ | (uint)!bVar2 * local_120._12_4_;
        bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
        local_120._16_4_ = (uint)bVar2 * auVar52._16_4_ | (uint)!bVar2 * local_120._16_4_;
        bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
        local_120._20_4_ = (uint)bVar2 * auVar52._20_4_ | (uint)!bVar2 * local_120._20_4_;
        bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
        local_120._24_4_ = (uint)bVar2 * auVar52._24_4_ | (uint)!bVar2 * local_120._24_4_;
        bVar2 = SUB81(uVar41 >> 7,0);
        local_120._28_4_ = (uint)bVar2 * auVar52._28_4_ | (uint)!bVar2 * local_120._28_4_;
        auVar50 = vsubps_avx512vl(local_160,auVar54);
        auVar51 = vsubps_avx512vl(local_140,auVar59);
        auVar59 = vsubps_avx512vl(local_120,auVar53);
        auVar49 = vfnmadd231ps_avx512vl(auVar50,auVar106,auVar49);
        auVar52._0_4_ = -(param_5 * auVar48._0_4_) + auVar51._0_4_;
        auVar52._4_4_ = -(param_5 * auVar48._4_4_) + auVar51._4_4_;
        auVar52._8_4_ = -(param_5 * auVar48._8_4_) + auVar51._8_4_;
        auVar52._12_4_ = -(param_5 * auVar48._12_4_) + auVar51._12_4_;
        auVar52._16_4_ = -(param_5 * auVar48._16_4_) + auVar51._16_4_;
        auVar52._20_4_ = -(param_5 * auVar48._20_4_) + auVar51._20_4_;
        auVar52._24_4_ = -(param_5 * auVar48._24_4_) + auVar51._24_4_;
        auVar52._28_4_ = -(param_5 * auVar48._28_4_) + auVar51._28_4_;
        auVar50._0_4_ = -(param_5 * auVar56._0_4_) + auVar59._0_4_;
        auVar50._4_4_ = -(param_5 * auVar56._4_4_) + auVar59._4_4_;
        auVar50._8_4_ = -(param_5 * auVar56._8_4_) + auVar59._8_4_;
        auVar50._12_4_ = -(param_5 * auVar56._12_4_) + auVar59._12_4_;
        auVar50._16_4_ = -(param_5 * auVar56._16_4_) + auVar59._16_4_;
        auVar50._20_4_ = -(param_5 * auVar56._20_4_) + auVar59._20_4_;
        auVar50._24_4_ = -(param_5 * auVar56._24_4_) + auVar59._24_4_;
        auVar50._28_4_ = -(param_5 * auVar56._28_4_) + auVar59._28_4_;
        auVar48 = vfnmadd213ps_avx512vl(auVar49,auVar72,local_160);
        auVar49 = vfnmadd213ps_avx512vl(auVar52,auVar72,local_140);
        auVar50 = vfnmadd213ps_avx512vl(auVar50,auVar72,local_120);
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar41 >> 2) & 1);
        bVar4 = (bool)((byte)(uVar41 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar41 >> 5) & 1);
        bVar15 = (bool)((byte)(uVar41 >> 6) & 1);
        bVar19 = SUB81(uVar41 >> 7,0);
        local_160._4_4_ = (uint)bVar2 * auVar48._4_4_ | (uint)!bVar2 * local_160._4_4_;
        local_160._0_4_ =
             (uint)(bVar40 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar40 & 1) * local_160._0_4_;
        local_160._8_4_ = (uint)bVar3 * auVar48._8_4_ | (uint)!bVar3 * local_160._8_4_;
        local_160._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * local_160._12_4_;
        local_160._16_4_ = (uint)bVar7 * auVar48._16_4_ | (uint)!bVar7 * local_160._16_4_;
        local_160._20_4_ = (uint)bVar11 * auVar48._20_4_ | (uint)!bVar11 * local_160._20_4_;
        local_160._24_4_ = (uint)bVar15 * auVar48._24_4_ | (uint)!bVar15 * local_160._24_4_;
        local_160._28_4_ = (uint)bVar19 * auVar48._28_4_ | (uint)!bVar19 * local_160._28_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar41 >> 2) & 1);
        bVar4 = (bool)((byte)(uVar41 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar41 >> 5) & 1);
        bVar15 = (bool)((byte)(uVar41 >> 6) & 1);
        bVar19 = SUB81(uVar41 >> 7,0);
        local_140._4_4_ = (uint)bVar2 * auVar49._4_4_ | (uint)!bVar2 * local_140._4_4_;
        local_140._0_4_ =
             (uint)(bVar40 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar40 & 1) * local_140._0_4_;
        local_140._8_4_ = (uint)bVar3 * auVar49._8_4_ | (uint)!bVar3 * local_140._8_4_;
        local_140._12_4_ = (uint)bVar4 * auVar49._12_4_ | (uint)!bVar4 * local_140._12_4_;
        local_140._16_4_ = (uint)bVar7 * auVar49._16_4_ | (uint)!bVar7 * local_140._16_4_;
        local_140._20_4_ = (uint)bVar11 * auVar49._20_4_ | (uint)!bVar11 * local_140._20_4_;
        local_140._24_4_ = (uint)bVar15 * auVar49._24_4_ | (uint)!bVar15 * local_140._24_4_;
        local_140._28_4_ = (uint)bVar19 * auVar49._28_4_ | (uint)!bVar19 * local_140._28_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar41 >> 2) & 1);
        bVar4 = (bool)((byte)(uVar41 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar41 >> 5) & 1);
        bVar15 = (bool)((byte)(uVar41 >> 6) & 1);
        bVar19 = SUB81(uVar41 >> 7,0);
        local_120._4_4_ = (uint)bVar2 * auVar50._4_4_ | (uint)!bVar2 * local_120._4_4_;
        local_120._0_4_ =
             (uint)(bVar40 & 1) * auVar50._0_4_ | (uint)!(bool)(bVar40 & 1) * local_120._0_4_;
        local_120._8_4_ = (uint)bVar3 * auVar50._8_4_ | (uint)!bVar3 * local_120._8_4_;
        local_120._12_4_ = (uint)bVar4 * auVar50._12_4_ | (uint)!bVar4 * local_120._12_4_;
        local_120._16_4_ = (uint)bVar7 * auVar50._16_4_ | (uint)!bVar7 * local_120._16_4_;
        local_120._20_4_ = (uint)bVar11 * auVar50._20_4_ | (uint)!bVar11 * local_120._20_4_;
        local_120._24_4_ = (uint)bVar15 * auVar50._24_4_ | (uint)!bVar15 * local_120._24_4_;
        local_120._28_4_ = (uint)bVar19 * auVar50._28_4_ | (uint)!bVar19 * local_120._28_4_;
        if (bVar40 == 0xff) {
          auVar48 = vunpcklps_avx512vl(local_160,local_140);
          auVar49 = vunpcklps_avx512vl(local_120,auVar47);
          auVar50 = vunpcklpd_avx512vl(auVar48,auVar49);
          auVar48 = vunpckhpd_avx512vl(auVar48,auVar49);
          auVar49 = vunpckhps_avx512vl(local_160,local_140);
          auVar47 = vunpckhps_avx512vl(local_120,auVar47);
          auVar51 = vunpcklpd_avx512vl(auVar49,auVar47);
          auVar47 = vunpckhpd_avx512vl(auVar49,auVar47);
          auVar49 = vinsertf32x4_avx512vl(auVar50,auVar48._0_16_,1);
          *pauVar34 = auVar49;
          auVar49 = vinsertf32x4_avx512vl(auVar51,auVar47._0_16_,1);
          pauVar34[1] = auVar49;
          auVar48 = vshuff64x2_avx512vl(auVar50,auVar48,3);
          pauVar34[2] = auVar48;
          auVar47 = vshuff64x2_avx512vl(auVar51,auVar47,3);
          pauVar34[3] = auVar47;
        }
        else {
          vscatterdps_avx512vl(ZEXT832(pauVar34) + auVar72,uVar41,local_160);
          vscatterdps_avx512vl(ZEXT832(pauVar34) + auVar106,uVar41,local_140);
          vscatterdps_avx512vl(ZEXT832(pauVar34) + auVar50,uVar41,local_120);
          vscatterdps_avx512vl(ZEXT832(pauVar34) + auVar49,uVar41,auVar47);
        }
      }
      pauVar39 = pauVar39 + 3;
      pauVar38 = pauVar38 + 3;
      unaff_RBX = unaff_RBX + 3;
      pauVar34 = pauVar34 + 4;
      uVar36 = (int)uVar37 + 8;
      uVar37 = (ulonglong)uVar36;
    } while ((int)uVar36 < (int)(uVar42 & 0xfffffff8));
  }
  if ((int)uVar37 < (int)param_8) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar60 = vpor_avx2(auVar60,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar61 = vpbroadcastd_avx512vl();
    uVar41 = vpcmpgtd_avx512vl(auVar61,auVar60);
    pauVar34 = (undefined1 (*) [32])(*param_1 + uVar37 * 0x10);
    bVar40 = (byte)uVar41;
    if (bVar40 == 0xff) {
      auVar61 = vshuff64x2_avx512vl(*pauVar34,pauVar34[2],0);
      auVar60 = vperm2f128_avx(*pauVar34,pauVar34[2],0x31);
      auVar62 = vshuff64x2_avx512vl(pauVar34[1],pauVar34[3],0);
      auVar71 = vshuff64x2_avx512vl(pauVar34[1],pauVar34[3],3);
      auVar72 = vunpcklps_avx512vl(auVar61,auVar60);
      auVar60 = vunpckhps_avx512vl(auVar61,auVar60);
      auVar61 = vunpcklps_avx512vl(auVar62,auVar71);
      auVar62 = vunpckhps_avx512vl(auVar62,auVar71);
      auVar107 = auVar62._0_16_;
      auVar47 = vunpcklpd_avx512vl(auVar72,auVar61);
      auVar51 = vunpckhpd_avx512vl(auVar72,auVar61);
      auVar61 = vunpcklpd_avx512vl(auVar60,auVar62);
      auVar60 = vunpckhpd_avx512vl(auVar60,auVar62);
    }
    else {
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + (longlong)*pauVar34));
      auVar47._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar60._4_4_;
      auVar47._0_4_ = (uint)(bVar40 & 1) * auVar60._0_4_;
      auVar47._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar60._8_4_;
      auVar47._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar60._12_4_;
      auVar47._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar60._16_4_;
      auVar47._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar60._20_4_;
      auVar47._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar60._24_4_;
      auVar47._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar60._28_4_;
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + (longlong)*pauVar34));
      auVar51._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar60._4_4_;
      auVar51._0_4_ = (uint)(bVar40 & 1) * auVar60._0_4_;
      auVar51._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar60._8_4_;
      auVar51._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar60._12_4_;
      auVar51._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar60._16_4_;
      auVar51._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar60._20_4_;
      auVar51._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar60._24_4_;
      auVar51._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar60._28_4_;
      auVar45 = vxorps_avx512vl(auVar45,auVar45);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + (longlong)*pauVar34));
      auVar61._0_4_ = (uint)(bVar40 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_
      ;
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      auVar61._4_4_ = (uint)bVar2 * auVar60._4_4_ | (uint)!bVar2 * auVar45._4_4_;
      bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
      auVar61._8_4_ = (uint)bVar2 * auVar60._8_4_ | (uint)!bVar2 * auVar45._8_4_;
      bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
      auVar61._12_4_ = (uint)bVar2 * auVar60._12_4_ | (uint)!bVar2 * auVar45._12_4_;
      auVar61._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar60._16_4_;
      auVar61._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar60._20_4_;
      auVar61._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar60._24_4_;
      auVar61._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar60._28_4_;
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar34 * 2));
      auVar60._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar62._4_4_;
      auVar60._0_4_ = (uint)(bVar40 & 1) * auVar62._0_4_;
      auVar60._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar62._8_4_;
      auVar60._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar62._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar62._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar62._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar62._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar62._28_4_;
    }
    uVar42 = (uint)(bVar40 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar40 & 1) * local_1c0;
    bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
    uVar73 = (uint)bVar2 * auVar47._4_4_ | (uint)!bVar2 * iStack_1bc;
    bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
    uVar77 = (uint)bVar2 * auVar47._8_4_ | (uint)!bVar2 * iStack_1b8;
    bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
    uVar81 = (uint)bVar2 * auVar47._12_4_ | (uint)!bVar2 * iStack_1b4;
    bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
    uVar85 = (uint)bVar2 * auVar47._16_4_ | (uint)!bVar2 * iStack_1b0;
    bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
    uVar89 = (uint)bVar2 * auVar47._20_4_ | (uint)!bVar2 * iStack_1ac;
    bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
    uVar93 = (uint)bVar2 * auVar47._24_4_ | (uint)!bVar2 * iStack_1a8;
    bVar2 = SUB81(uVar41 >> 7,0);
    uVar97 = (uint)bVar2 * auVar47._28_4_ | (uint)!bVar2 * iStack_1a4;
    uVar36 = (uint)(bVar40 & 1) * auVar51._0_4_ | (uint)!(bool)(bVar40 & 1) * local_1a0;
    bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
    uVar74 = (uint)bVar2 * auVar51._4_4_ | (uint)!bVar2 * iStack_19c;
    bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
    uVar78 = (uint)bVar2 * auVar51._8_4_ | (uint)!bVar2 * iStack_198;
    bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
    uVar82 = (uint)bVar2 * auVar51._12_4_ | (uint)!bVar2 * iStack_194;
    bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
    uVar86 = (uint)bVar2 * auVar51._16_4_ | (uint)!bVar2 * iStack_190;
    bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
    uVar90 = (uint)bVar2 * auVar51._20_4_ | (uint)!bVar2 * iStack_18c;
    bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
    uVar94 = (uint)bVar2 * auVar51._24_4_ | (uint)!bVar2 * iStack_188;
    bVar2 = SUB81(uVar41 >> 7,0);
    uVar98 = (uint)bVar2 * auVar51._28_4_ | (uint)!bVar2 * iStack_184;
    uVar43 = (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * local_180;
    bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
    uVar75 = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * iStack_17c;
    bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
    uVar79 = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * iStack_178;
    bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
    uVar83 = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * iStack_174;
    bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
    uVar87 = (uint)bVar2 * auVar61._16_4_ | (uint)!bVar2 * iStack_170;
    bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
    uVar91 = (uint)bVar2 * auVar61._20_4_ | (uint)!bVar2 * iStack_16c;
    bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
    uVar95 = (uint)bVar2 * auVar61._24_4_ | (uint)!bVar2 * iStack_168;
    bVar2 = SUB81(uVar41 >> 7,0);
    uVar99 = (uint)bVar2 * auVar61._28_4_ | (uint)!bVar2 * iStack_164;
    uVar23 = vcmpps_avx512vl(ZEXT832(0) << 0x20,auVar60,1);
    uVar41 = uVar41 & uVar23;
    bVar40 = (byte)uVar41;
    if (bVar40 != 0) {
      lVar24 = uVar37 * 3;
      pauVar38 = (undefined1 (*) [32])(*param_2 + uVar37 * 0xc);
      if (bVar40 == 0xff) {
        auVar61 = pauVar38[1];
        auVar62 = vblendps_avx(auVar61,*pauVar38,0x24);
        auVar71 = vpermt2ps_avx512vl(*pauVar38,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar63 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar38[2]);
        auVar61 = vpermt2ps_avx512vl(pauVar38[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar64 = vinsertf32x4_avx512vl(auVar71,auVar61._0_16_,1);
        auVar65 = vshuff64x2_avx512vl(auVar71,auVar61,3);
        lVar24 = uVar37 * 0xc;
        auVar61 = *(undefined1 (*) [32])(param_3[1] + lVar24);
        auVar62 = vblendps_avx(auVar61,*(undefined1 (*) [32])(*param_3 + lVar24),0x24);
        auVar71 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(*param_3 + lVar24),
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar66 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,*(undefined1 (*) [32])(param_3[2] + lVar24));
        auVar61 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3[2] + lVar24),
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar67 = vinsertf32x4_avx512vl(auVar71,auVar61._0_16_,1);
        auVar68 = vshuff64x2_avx512vl(auVar71,auVar61,3);
        auVar61 = *(undefined1 (*) [32])(param_4[1] + lVar24);
        auVar62 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,*(undefined1 (*) [32])(*param_4 + lVar24),auVar61);
        auVar71 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,*(undefined1 (*) [32])(param_4[2] + lVar24),auVar61);
        auVar69 = vinsertf32x4_avx512vl(auVar62,auVar71._0_16_,1);
        auVar62 = vshuff64x2_avx512vl(auVar62,auVar71,3);
        auVar61 = vblendps_avx(auVar61,*(undefined1 (*) [32])(*param_4 + lVar24),0x24);
        auVar70 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,*(undefined1 (*) [32])(param_4[2] + lVar24));
      }
      else {
        auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar34 + (longlong)*pauVar38));
        auVar64._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar62._4_4_;
        auVar64._0_4_ = (uint)(bVar40 & 1) * auVar62._0_4_;
        auVar64._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar62._8_4_;
        auVar64._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar62._12_4_;
        auVar64._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar62._16_4_;
        auVar64._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar62._20_4_;
        auVar64._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar62._24_4_;
        auVar64._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar62._28_4_;
        auVar45 = vxorps_avx512vl(auVar61._0_16_,auVar61._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar1 + (longlong)*pauVar38));
        auVar65._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar65._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar65._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar65._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar65._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar65._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar65._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar65._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar38 + lVar24));
        auVar63._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar61._4_4_;
        auVar63._0_4_ = (uint)(bVar40 & 1) * auVar61._0_4_;
        auVar63._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar61._8_4_;
        auVar63._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar61._12_4_;
        auVar63._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar63._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar63._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar63._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        puVar35 = *param_3 + uVar37 * 0xc;
        auVar45 = vxorps_avx512vl(auVar108,auVar108);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar34 + (longlong)puVar35));
        auVar67._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar67._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar67._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar67._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar67._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar67._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar67._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar67._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar45 = vxorps_avx512vl(auVar109,auVar109);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar1 + (longlong)puVar35));
        auVar68._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar68._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar68._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar68._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar68._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar68._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar68._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar68._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar35 + lVar24));
        auVar66._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar61._4_4_;
        auVar66._0_4_ = (uint)(bVar40 & 1) * auVar61._0_4_;
        auVar66._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar61._8_4_;
        auVar66._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar61._12_4_;
        auVar66._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar66._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar66._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar66._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        puVar35 = *param_4 + uVar37 * 0xc;
        auVar45 = vxorps_avx512vl(auVar107,auVar107);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar34 + (longlong)puVar35));
        auVar69._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar69._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar69._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar69._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar69._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar69._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar69._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar69._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar45 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar1 + (longlong)puVar35));
        auVar62._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar62._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar62._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar62._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar62._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar62._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar62._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar62._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar35 + lVar24));
        auVar70._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar61._4_4_;
        auVar70._0_4_ = (uint)(bVar40 & 1) * auVar61._0_4_;
        auVar70._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar61._8_4_;
        auVar70._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar61._12_4_;
        auVar70._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar70._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar70._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar70._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
      }
      auVar104._4_4_ = param_6;
      auVar104._0_4_ = param_6;
      auVar104._8_4_ = param_6;
      auVar104._12_4_ = param_6;
      auVar104._16_4_ = param_6;
      auVar104._20_4_ = param_6;
      auVar104._24_4_ = param_6;
      auVar104._28_4_ = param_6;
      auVar25._4_4_ = uVar73;
      auVar25._0_4_ = uVar42;
      auVar25._8_4_ = uVar77;
      auVar25._12_4_ = uVar81;
      auVar25._16_4_ = uVar85;
      auVar25._20_4_ = uVar89;
      auVar25._24_4_ = uVar93;
      auVar25._28_4_ = uVar97;
      auVar28._4_4_ = uVar74;
      auVar28._0_4_ = uVar36;
      auVar28._8_4_ = uVar78;
      auVar28._12_4_ = uVar82;
      auVar28._16_4_ = uVar86;
      auVar28._20_4_ = uVar90;
      auVar28._24_4_ = uVar94;
      auVar28._28_4_ = uVar98;
      auVar31._4_4_ = uVar75;
      auVar31._0_4_ = uVar43;
      auVar31._8_4_ = uVar79;
      auVar31._12_4_ = uVar83;
      auVar31._16_4_ = uVar87;
      auVar31._20_4_ = uVar91;
      auVar31._24_4_ = uVar95;
      auVar31._28_4_ = uVar99;
      auVar61 = vsubps_avx512vl(auVar25,auVar67);
      auVar71 = vsubps_avx512vl(auVar28,auVar68);
      auVar72 = vsubps_avx512vl(auVar31,auVar66);
      auVar61 = vfnmadd213ps_avx512vl(auVar61,auVar104,auVar25);
      auVar71 = vfnmadd213ps_avx512vl(auVar71,auVar104,auVar28);
      auVar72 = vfnmadd213ps_avx512vl(auVar72,auVar104,auVar31);
      fVar44 = (float)((uint)(bVar40 & 1) * auVar61._0_4_ | !(bool)(bVar40 & 1) * uVar42);
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      fVar76 = (float)((uint)bVar2 * auVar61._4_4_ | !bVar2 * uVar73);
      bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
      fVar80 = (float)((uint)bVar2 * auVar61._8_4_ | !bVar2 * uVar77);
      bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
      fVar84 = (float)((uint)bVar2 * auVar61._12_4_ | !bVar2 * uVar81);
      bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
      fVar88 = (float)((uint)bVar2 * auVar61._16_4_ | !bVar2 * uVar85);
      bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
      fVar92 = (float)((uint)bVar2 * auVar61._20_4_ | !bVar2 * uVar89);
      bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
      fVar96 = (float)((uint)bVar2 * auVar61._24_4_ | !bVar2 * uVar93);
      bVar2 = SUB81(uVar41 >> 7,0);
      fVar100 = (float)((uint)bVar2 * auVar61._28_4_ | !bVar2 * uVar97);
      uVar42 = (uint)(bVar40 & 1) * auVar71._0_4_ | !(bool)(bVar40 & 1) * uVar36;
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      uVar73 = (uint)bVar2 * auVar71._4_4_ | !bVar2 * uVar74;
      bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
      uVar74 = (uint)bVar2 * auVar71._8_4_ | !bVar2 * uVar78;
      bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
      uVar77 = (uint)bVar2 * auVar71._12_4_ | !bVar2 * uVar82;
      bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
      uVar81 = (uint)bVar2 * auVar71._16_4_ | !bVar2 * uVar86;
      bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
      uVar82 = (uint)bVar2 * auVar71._20_4_ | !bVar2 * uVar90;
      bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
      uVar85 = (uint)bVar2 * auVar71._24_4_ | !bVar2 * uVar94;
      bVar2 = SUB81(uVar41 >> 7,0);
      uVar89 = (uint)bVar2 * auVar71._28_4_ | !bVar2 * uVar98;
      uVar36 = (uint)(bVar40 & 1) * auVar72._0_4_ | !(bool)(bVar40 & 1) * uVar43;
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      uVar43 = (uint)bVar2 * auVar72._4_4_ | !bVar2 * uVar75;
      bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
      uVar75 = (uint)bVar2 * auVar72._8_4_ | !bVar2 * uVar79;
      bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
      uVar78 = (uint)bVar2 * auVar72._12_4_ | !bVar2 * uVar83;
      bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
      uVar79 = (uint)bVar2 * auVar72._16_4_ | !bVar2 * uVar87;
      bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
      uVar83 = (uint)bVar2 * auVar72._20_4_ | !bVar2 * uVar91;
      bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
      uVar86 = (uint)bVar2 * auVar72._24_4_ | !bVar2 * uVar95;
      bVar2 = SUB81(uVar41 >> 7,0);
      uVar87 = (uint)bVar2 * auVar72._28_4_ | !bVar2 * uVar99;
      auVar26._4_4_ = fVar76;
      auVar26._0_4_ = fVar44;
      auVar26._8_4_ = fVar80;
      auVar26._12_4_ = fVar84;
      auVar26._16_4_ = fVar88;
      auVar26._20_4_ = fVar92;
      auVar26._24_4_ = fVar96;
      auVar26._28_4_ = fVar100;
      auVar29._4_4_ = uVar73;
      auVar29._0_4_ = uVar42;
      auVar29._8_4_ = uVar74;
      auVar29._12_4_ = uVar77;
      auVar29._16_4_ = uVar81;
      auVar29._20_4_ = uVar82;
      auVar29._24_4_ = uVar85;
      auVar29._28_4_ = uVar89;
      auVar32._4_4_ = uVar43;
      auVar32._0_4_ = uVar36;
      auVar32._8_4_ = uVar75;
      auVar32._12_4_ = uVar78;
      auVar32._16_4_ = uVar79;
      auVar32._20_4_ = uVar83;
      auVar32._24_4_ = uVar86;
      auVar32._28_4_ = uVar87;
      auVar61 = vsubps_avx(auVar26,auVar64);
      auVar71 = vsubps_avx512vl(auVar29,auVar65);
      auVar72 = vsubps_avx512vl(auVar32,auVar63);
      auVar101._4_4_ = param_7;
      auVar101._0_4_ = param_7;
      auVar101._8_4_ = param_7;
      auVar101._12_4_ = param_7;
      auVar101._16_4_ = param_7;
      auVar101._20_4_ = param_7;
      auVar101._24_4_ = param_7;
      auVar101._28_4_ = param_7;
      auVar102._4_4_ = param_5;
      auVar102._0_4_ = param_5;
      auVar102._8_4_ = param_5;
      auVar102._12_4_ = param_5;
      auVar102._16_4_ = param_5;
      auVar102._20_4_ = param_5;
      auVar102._24_4_ = param_5;
      auVar102._28_4_ = param_5;
      auVar61 = vfnmadd231ps_avx512vl(auVar61,auVar102,auVar69);
      auVar62 = vfnmadd231ps_avx512vl(auVar71,auVar102,auVar62);
      auVar105._0_4_ = -(param_5 * auVar70._0_4_) + auVar72._0_4_;
      auVar105._4_4_ = -(param_5 * auVar70._4_4_) + auVar72._4_4_;
      auVar105._8_4_ = -(param_5 * auVar70._8_4_) + auVar72._8_4_;
      auVar105._12_4_ = -(param_5 * auVar70._12_4_) + auVar72._12_4_;
      auVar105._16_4_ = -(param_5 * auVar70._16_4_) + auVar72._16_4_;
      auVar105._20_4_ = -(param_5 * auVar70._20_4_) + auVar72._20_4_;
      auVar105._24_4_ = -(param_5 * auVar70._24_4_) + auVar72._24_4_;
      auVar105._28_4_ = -(param_5 * auVar70._28_4_) + auVar72._28_4_;
      auVar62 = vfnmadd213ps_avx512vl(auVar62,auVar101,auVar29);
      auVar71 = vfnmadd213ps_avx512vl(auVar105,auVar101,auVar32);
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
      bVar19 = (bool)((byte)(uVar41 >> 3) & 1);
      bVar8 = (bool)((byte)(uVar41 >> 4) & 1);
      bVar12 = (bool)((byte)(uVar41 >> 5) & 1);
      bVar16 = (bool)((byte)(uVar41 >> 6) & 1);
      bVar20 = SUB81(uVar41 >> 7,0);
      bVar3 = (bool)((byte)(uVar41 >> 1) & 1);
      bVar11 = (bool)((byte)(uVar41 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar41 >> 3) & 1);
      bVar9 = (bool)((byte)(uVar41 >> 4) & 1);
      bVar13 = (bool)((byte)(uVar41 >> 5) & 1);
      bVar17 = (bool)((byte)(uVar41 >> 6) & 1);
      bVar21 = SUB81(uVar41 >> 7,0);
      bVar4 = (bool)((byte)(uVar41 >> 1) & 1);
      bVar15 = (bool)((byte)(uVar41 >> 2) & 1);
      bVar6 = (bool)((byte)(uVar41 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar41 >> 4) & 1);
      bVar14 = (bool)((byte)(uVar41 >> 5) & 1);
      bVar18 = (bool)((byte)(uVar41 >> 6) & 1);
      bVar22 = SUB81(uVar41 >> 7,0);
      auVar27._4_4_ =
           (uint)bVar2 * (int)(-(param_7 * auVar61._4_4_) + fVar76) | (uint)!bVar2 * (int)fVar76;
      auVar27._0_4_ =
           (uint)(bVar40 & 1) * (int)(-(param_7 * auVar61._0_4_) + fVar44) |
           (uint)!(bool)(bVar40 & 1) * (int)fVar44;
      auVar27._8_4_ =
           (uint)bVar7 * (int)(-(param_7 * auVar61._8_4_) + fVar80) | (uint)!bVar7 * (int)fVar80;
      auVar27._12_4_ =
           (uint)bVar19 * (int)(-(param_7 * auVar61._12_4_) + fVar84) | (uint)!bVar19 * (int)fVar84;
      auVar27._16_4_ =
           (uint)bVar8 * (int)(-(param_7 * auVar61._16_4_) + fVar88) | (uint)!bVar8 * (int)fVar88;
      auVar27._20_4_ =
           (uint)bVar12 * (int)(-(param_7 * auVar61._20_4_) + fVar92) | (uint)!bVar12 * (int)fVar92;
      auVar27._24_4_ =
           (uint)bVar16 * (int)(-(param_7 * auVar61._24_4_) + fVar96) | (uint)!bVar16 * (int)fVar96;
      auVar27._28_4_ =
           (uint)bVar20 * (int)(-(param_7 * auVar61._28_4_) + fVar100) |
           (uint)!bVar20 * (int)fVar100;
      auVar30._4_4_ = (uint)bVar3 * auVar62._4_4_ | !bVar3 * uVar73;
      auVar30._0_4_ = (uint)(bVar40 & 1) * auVar62._0_4_ | !(bool)(bVar40 & 1) * uVar42;
      auVar30._8_4_ = (uint)bVar11 * auVar62._8_4_ | !bVar11 * uVar74;
      auVar30._12_4_ = (uint)bVar5 * auVar62._12_4_ | !bVar5 * uVar77;
      auVar30._16_4_ = (uint)bVar9 * auVar62._16_4_ | !bVar9 * uVar81;
      auVar30._20_4_ = (uint)bVar13 * auVar62._20_4_ | !bVar13 * uVar82;
      auVar30._24_4_ = (uint)bVar17 * auVar62._24_4_ | !bVar17 * uVar85;
      auVar30._28_4_ = (uint)bVar21 * auVar62._28_4_ | !bVar21 * uVar89;
      auVar33._4_4_ = (uint)bVar4 * auVar71._4_4_ | !bVar4 * uVar43;
      auVar33._0_4_ = (uint)(bVar40 & 1) * auVar71._0_4_ | !(bool)(bVar40 & 1) * uVar36;
      auVar33._8_4_ = (uint)bVar15 * auVar71._8_4_ | !bVar15 * uVar75;
      auVar33._12_4_ = (uint)bVar6 * auVar71._12_4_ | !bVar6 * uVar78;
      auVar33._16_4_ = (uint)bVar10 * auVar71._16_4_ | !bVar10 * uVar79;
      auVar33._20_4_ = (uint)bVar14 * auVar71._20_4_ | !bVar14 * uVar83;
      auVar33._24_4_ = (uint)bVar18 * auVar71._24_4_ | !bVar18 * uVar86;
      auVar33._28_4_ = (uint)bVar22 * auVar71._28_4_ | !bVar22 * uVar87;
      if (bVar40 == 0xff) {
        auVar61 = vunpcklps_avx(auVar27,auVar30);
        auVar62 = vunpcklps_avx(auVar33,auVar60);
        auVar72 = vunpcklpd_avx512vl(auVar61,auVar62);
        auVar61 = vunpckhpd_avx(auVar61,auVar62);
        auVar62 = vunpckhps_avx(auVar27,auVar30);
        auVar60 = vunpckhps_avx(auVar33,auVar60);
        auVar71 = vunpcklpd_avx(auVar62,auVar60);
        auVar60 = vunpckhpd_avx(auVar62,auVar60);
        auVar62 = vinsertf32x4_avx512vl(auVar72,auVar61._0_16_,1);
        *pauVar34 = auVar62;
        auVar103._16_16_ = auVar60._0_16_;
        auVar103._0_16_ = auVar71._0_16_;
        pauVar34[1] = auVar103;
        auVar61 = vshuff64x2_avx512vl(auVar72,auVar61,3);
        pauVar34[2] = auVar61;
        auVar60 = vperm2f128_avx(auVar71,auVar60,0x31);
        pauVar34[3] = auVar60;
      }
      else {
        vscatterdps_avx512vl
                  (ZEXT832(pauVar34) +
                   ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                   auVar27);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar34) +
                   ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                   auVar30);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar34) +
                   ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                   auVar33);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar34) +
                   ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                   auVar60);
      }
    }
  }
  return;
}

// ApplyMultiResConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx @ 14059a650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx512skx
               (undefined1 (*param_1) [32],longlong param_2,longlong param_3,longlong param_4,
               float param_5,byte param_6,undefined1 (*param_7) [16],undefined4 *param_8,
               byte param_9,longlong param_10,undefined4 *param_11,uint param_12)

{
  float fVar1;
  longlong lVar9;
  undefined1 (*pauVar10) [32];
  undefined1 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  ulonglong uVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 (*pauVar43) [32];
  undefined1 (*unaff_RBX) [16];
  longlong lVar44;
  ulonglong uVar45;
  byte bVar46;
  ulonglong uVar47;
  undefined1 auVar53 [16];
  uint uVar49;
  uint uVar50;
  uint uVar87;
  uint uVar88;
  uint uVar91;
  uint uVar92;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar48;
  float fVar51;
  uint uVar86;
  float fVar89;
  uint uVar90;
  float fVar93;
  undefined1 auVar52 [16];
  float fVar97;
  uint uVar98;
  float fVar101;
  uint uVar102;
  float fVar105;
  uint uVar106;
  float fVar109;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar58 [16];
  undefined1 auVar75 [32];
  uint uVar99;
  uint uVar100;
  uint uVar103;
  uint uVar104;
  uint uVar107;
  uint uVar108;
  uint uVar110;
  uint uVar111;
  uint uVar112;
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
  float fVar113;
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar117 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar118 [16];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar119 [16];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar68 [32];
  
  auVar85 = ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
  auVar84 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar74 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar73 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar58 = in_ZMM16._0_16_;
  auVar118 = in_ZMM19._0_16_;
  auVar52 = in_ZMM20._0_16_;
  auVar117 = in_ZMM18._0_16_;
  puVar11 = local_140 + 8;
  local_68 = in_ZMM12._0_16_;
  local_78 = in_ZMM11._0_16_;
  local_88 = in_ZMM10._0_16_;
  local_98 = in_ZMM9._0_16_;
  local_a8 = in_ZMM8._0_16_;
  local_b8 = in_ZMM7._0_16_;
  local_c8 = in_ZMM6._0_16_;
  uVar48 = param_12 + 7;
  if (-1 < (int)param_12) {
    uVar48 = param_12;
  }
  if ((int)(uVar48 & 0xfffffff8) < 1) {
    uVar45 = 0;
    if ((int)param_12 < 1) {
      return;
    }
  }
  else {
    auVar75._4_4_ = param_5;
    auVar75._0_4_ = param_5;
    auVar75._8_4_ = param_5;
    auVar75._12_4_ = param_5;
    auVar75._16_4_ = param_5;
    auVar75._20_4_ = param_5;
    auVar75._24_4_ = param_5;
    auVar75._28_4_ = param_5;
    lVar44 = 0;
    auVar58 = __ymm_0000007400000064000000540000004400000034000000240000001400000004._0_16_;
    auVar117 = __ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c._0_16_;
    auVar118 = __ymm_00000054000000480000003c0000003000000024000000180000000c00000000._0_16_;
    auVar52 = vxorps_avx512vl(auVar52,auVar52);
    uVar45 = 0;
    pauVar43 = param_1;
    do {
      auVar59 = vshuff64x2_avx512vl(*pauVar43,pauVar43[2],0);
      auVar60 = vshuff64x2_avx512vl(*pauVar43,pauVar43[2],3);
      auVar61 = vshuff64x2_avx512vl(pauVar43[1],pauVar43[3],0);
      auVar62 = vshuff64x2_avx512vl(pauVar43[1],pauVar43[3],3);
      auVar63 = vunpcklps_avx512vl(auVar59,auVar60);
      auVar59 = vunpckhps_avx512vl(auVar59,auVar60);
      auVar60 = vunpcklps_avx512vl(auVar61,auVar62);
      auVar61 = vunpckhps_avx512vl(auVar61,auVar62);
      auVar62 = vunpcklpd_avx512vl(auVar63,auVar60);
      local_120 = vunpckhpd_avx512vl(auVar63,auVar60);
      local_100 = vunpcklpd_avx512vl(auVar59,auVar61);
      auVar59 = vunpckhpd_avx512vl(auVar59,auVar61);
      uVar47 = vcmpps_avx512vl(ZEXT1632(auVar52),auVar59,1);
      bVar46 = (byte)uVar47;
      if (bVar46 != 0) {
        auVar53 = vxorpd_avx512vl(auVar60._0_16_,auVar60._0_16_);
        auVar54 = vxorpd_avx512vl(auVar63._0_16_,auVar63._0_16_);
        if ((param_6 & 1) == 0) {
joined_r0x00014059a97c:
          auVar55 = auVar54;
          if ((param_9 & 1) == 0) goto joined_r0x00014059a9a4;
LAB_14059a982:
          unaff_RBX = (undefined1 (*) [16])(param_10 + uVar45);
          if ((~bVar46 & 0x81) != 0) {
            auVar55 = vmovdqu8_avx512vl(*unaff_RBX);
            auVar53[1] = ((byte)(uVar47 >> 1) & 1) * auVar55[1];
            auVar53[0] = (bVar46 & 1) * auVar55[0];
            auVar53[2] = ((byte)(uVar47 >> 2) & 1) * auVar55[2];
            auVar53[3] = ((byte)(uVar47 >> 3) & 1) * auVar55[3];
            auVar53[4] = ((byte)(uVar47 >> 4) & 1) * auVar55[4];
            auVar53[5] = ((byte)(uVar47 >> 5) & 1) * auVar55[5];
            auVar53[6] = ((byte)(uVar47 >> 6) & 1) * auVar55[6];
            auVar53[7] = (char)(uVar47 >> 7) * auVar55[7];
            auVar53._8_8_ = 0;
            auVar55 = auVar54;
            goto joined_r0x00014059a9a4;
          }
          auVar119._8_8_ = 0;
          auVar119._0_8_ = *(ulonglong *)*unaff_RBX;
          auVar53._8_8_ = 0;
          auVar53._0_8_ = *(ulonglong *)*unaff_RBX;
          if (bVar46 != 0xff) goto LAB_14059a8a1;
LAB_14059a9aa:
          auVar53 = auVar119;
          auVar60 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar44);
          auVar61 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar44);
          auVar63 = vblendps_avx(auVar60,*(undefined1 (*) [32])(param_2 + lVar44),0x24);
          auVar64 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar44),auVar73,auVar60);
          auVar72 = vpermt2ps_avx512vl(auVar63,auVar84,auVar61);
          auVar60 = vpermt2ps_avx512vl(auVar61,auVar74,auVar60);
          auVar65 = vinsertf32x4_avx512vl(auVar64,auVar60._0_16_,1);
          auVar66 = vshuff64x2_avx512vl(auVar64,auVar60,3);
          auVar60 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar44);
          auVar61 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar44);
          auVar63 = vblendps_avx(auVar60,*(undefined1 (*) [32])(param_3 + lVar44),0x24);
          auVar64 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar44),auVar73,auVar60);
          auVar71 = vpermt2ps_avx512vl(auVar63,auVar84,auVar61);
          auVar60 = vpermt2ps_avx512vl(auVar61,auVar74,auVar60);
          auVar70 = vinsertf32x4_avx512vl(auVar64,auVar60._0_16_,1);
          auVar60 = vperm2f128_avx(auVar64,auVar60,0x31);
          auVar61 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar44);
          auVar63 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar44);
          auVar64 = vblendps_avx(auVar61,*(undefined1 (*) [32])(param_4 + lVar44),0x24);
          auVar68 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_4 + lVar44),auVar73,auVar61);
          auVar67 = vpermt2ps_avx512vl(auVar64,auVar84,auVar63);
          auVar61 = vpermt2ps_avx512vl(auVar63,auVar74,auVar61);
          auVar63._16_16_ = auVar61._0_16_;
          auVar63._0_16_ = auVar68._0_16_;
          auVar61 = vperm2f128_avx(auVar68,auVar61,0x31);
        }
        else {
          unaff_RBX = (undefined1 (*) [16])(*param_7 + uVar45);
          if ((~bVar46 & 0x81) != 0) {
            auVar55 = vmovdqu8_avx512vl(*unaff_RBX);
            auVar54[1] = ((byte)(uVar47 >> 1) & 1) * auVar55[1];
            auVar54[0] = (bVar46 & 1) * auVar55[0];
            auVar54[2] = ((byte)(uVar47 >> 2) & 1) * auVar55[2];
            auVar54[3] = ((byte)(uVar47 >> 3) & 1) * auVar55[3];
            auVar54[4] = ((byte)(uVar47 >> 4) & 1) * auVar55[4];
            auVar54[5] = ((byte)(uVar47 >> 5) & 1) * auVar55[5];
            auVar54[6] = ((byte)(uVar47 >> 6) & 1) * auVar55[6];
            auVar54[7] = (char)(uVar47 >> 7) * auVar55[7];
            auVar54._8_8_ = 0;
            goto joined_r0x00014059a97c;
          }
          auVar54._8_8_ = 0;
          auVar54._0_8_ = *(ulonglong *)*unaff_RBX;
          auVar55._8_8_ = 0;
          auVar55._0_8_ = *(ulonglong *)*unaff_RBX;
          if ((param_9 & 1) != 0) goto LAB_14059a982;
joined_r0x00014059a9a4:
          auVar54 = auVar55;
          auVar119 = auVar53;
          if (bVar46 == 0xff) goto LAB_14059a9aa;
LAB_14059a8a1:
          lVar9 = param_2 + lVar44;
          auVar55 = vxorpd_avx512vl(auVar61._0_16_,auVar61._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + lVar9));
          auVar65._0_4_ =
               (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar55._0_4_;
          bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar65._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * auVar55._4_4_;
          bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar65._8_4_ = (uint)bVar12 * auVar60._8_4_ | (uint)!bVar12 * auVar55._8_4_;
          bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar65._12_4_ = (uint)bVar12 * auVar60._12_4_ | (uint)!bVar12 * auVar55._12_4_;
          auVar65._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar60._16_4_;
          auVar65._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar60._20_4_;
          auVar65._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar60._24_4_;
          auVar65._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar60._28_4_;
          auVar55 = vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + lVar9));
          auVar66._0_4_ =
               (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar55._0_4_;
          bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar66._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * auVar55._4_4_;
          bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar66._8_4_ = (uint)bVar12 * auVar60._8_4_ | (uint)!bVar12 * auVar55._8_4_;
          bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar66._12_4_ = (uint)bVar12 * auVar60._12_4_ | (uint)!bVar12 * auVar55._12_4_;
          auVar66._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar60._16_4_;
          auVar66._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar60._20_4_;
          auVar66._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar60._24_4_;
          auVar66._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar60._28_4_;
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + lVar9));
          auVar72._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar60._4_4_;
          auVar72._0_4_ = (uint)(bVar46 & 1) * auVar60._0_4_;
          auVar72._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar60._8_4_;
          auVar72._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar60._12_4_;
          auVar72._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar60._16_4_;
          auVar72._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar60._20_4_;
          auVar72._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar60._24_4_;
          auVar72._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar60._28_4_;
          lVar9 = param_3 + lVar44;
          auVar55 = vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(lVar9 * 2));
          auVar70._0_4_ =
               (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar55._0_4_;
          bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar70._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * auVar55._4_4_;
          bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar70._8_4_ = (uint)bVar12 * auVar60._8_4_ | (uint)!bVar12 * auVar55._8_4_;
          bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar70._12_4_ = (uint)bVar12 * auVar60._12_4_ | (uint)!bVar12 * auVar55._12_4_;
          auVar70._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar60._16_4_;
          auVar70._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar60._20_4_;
          auVar70._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar60._24_4_;
          auVar70._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar60._28_4_;
          auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + lVar9));
          auVar60._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar61._4_4_;
          auVar60._0_4_ = (uint)(bVar46 & 1) * auVar61._0_4_;
          auVar60._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar61._8_4_;
          auVar60._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar61._12_4_;
          auVar60._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar61._16_4_;
          auVar60._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar61._20_4_;
          auVar60._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar61._24_4_;
          auVar60._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar61._28_4_;
          auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + lVar9));
          auVar71._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar61._4_4_;
          auVar71._0_4_ = (uint)(bVar46 & 1) * auVar61._0_4_;
          auVar71._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar61._8_4_;
          auVar71._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar61._12_4_;
          auVar71._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar61._16_4_;
          auVar71._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar61._20_4_;
          auVar71._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar61._24_4_;
          auVar71._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar61._28_4_;
          unaff_RBX = (undefined1 (*) [16])(param_4 + lVar44);
          auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)unaff_RBX * 2));
          auVar63._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar61._4_4_;
          auVar63._0_4_ = (uint)(bVar46 & 1) * auVar61._0_4_;
          auVar63._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar61._8_4_;
          auVar63._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar61._12_4_;
          auVar63._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar61._16_4_;
          auVar63._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar61._20_4_;
          auVar63._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar61._24_4_;
          auVar63._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar61._28_4_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + (longlong)*unaff_RBX));
          auVar61._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar64._4_4_;
          auVar61._0_4_ = (uint)(bVar46 & 1) * auVar64._0_4_;
          auVar61._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar64._8_4_;
          auVar61._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar64._12_4_;
          auVar61._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar64._16_4_;
          auVar61._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar64._20_4_;
          auVar61._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar64._24_4_;
          auVar61._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar64._28_4_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + (longlong)*unaff_RBX));
          auVar67._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar64._4_4_;
          auVar67._0_4_ = (uint)(bVar46 & 1) * auVar64._0_4_;
          auVar67._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar64._8_4_;
          auVar67._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar64._12_4_;
          auVar67._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar64._16_4_;
          auVar67._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar64._20_4_;
          auVar67._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar64._24_4_;
          auVar67._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar64._28_4_;
        }
        auVar64 = vpmovsxbd_avx512vl(auVar54);
        auVar64 = vpslld_avx512vl(auVar64,2);
        auVar68 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_8 + (longlong)local_120));
        auVar69._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar68._4_4_;
        auVar69._0_4_ = (uint)(bVar46 & 1) * auVar68._0_4_;
        auVar69._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar68._8_4_;
        auVar69._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar68._12_4_;
        auVar69._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar68._16_4_;
        auVar69._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar68._20_4_;
        auVar69._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar68._24_4_;
        auVar69._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar68._28_4_;
        auVar68 = vpmovsxbd_avx512vl(auVar53);
        vpslld_avx512vl(auVar68,2);
        auVar54 = vxorps_avx512vl(auVar64._0_16_,auVar64._0_16_);
        auVar68 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_11 + param_10));
        auVar64._0_4_ =
             (uint)(bVar46 & 1) * auVar68._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar54._0_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        auVar64._4_4_ = (uint)bVar12 * auVar68._4_4_ | (uint)!bVar12 * auVar54._4_4_;
        bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
        auVar64._8_4_ = (uint)bVar12 * auVar68._8_4_ | (uint)!bVar12 * auVar54._8_4_;
        bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
        auVar64._12_4_ = (uint)bVar12 * auVar68._12_4_ | (uint)!bVar12 * auVar54._12_4_;
        auVar64._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar68._16_4_;
        auVar64._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar68._20_4_;
        auVar64._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar68._24_4_;
        auVar64._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar68._28_4_;
        auVar70 = vsubps_avx512vl(auVar62,auVar70);
        auVar60 = vsubps_avx512vl(local_120,auVar60);
        auVar71 = vsubps_avx512vl(local_100,auVar71);
        auVar70 = vfnmadd213ps_avx512vl(auVar70,auVar69,auVar62);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar69,local_120);
        in_ZMM31 = ZEXT3264(auVar60);
        auVar71 = vfnmadd213ps_avx512vl(auVar71,auVar69,local_100);
        local_140._0_4_ = auVar62._0_4_;
        local_140._4_4_ = auVar62._4_4_;
        local_140._8_4_ = auVar62._8_4_;
        local_140._12_4_ = auVar62._12_4_;
        local_140._16_4_ = auVar62._16_4_;
        local_140._20_4_ = auVar62._20_4_;
        local_140._24_4_ = auVar62._24_4_;
        local_140._28_4_ = auVar62._28_4_;
        local_140._0_4_ =
             (uint)(bVar46 & 1) * auVar70._0_4_ | (uint)!(bool)(bVar46 & 1) * local_140._0_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        local_140._4_4_ = (uint)bVar12 * auVar70._4_4_ | (uint)!bVar12 * local_140._4_4_;
        bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
        local_140._8_4_ = (uint)bVar12 * auVar70._8_4_ | (uint)!bVar12 * local_140._8_4_;
        bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
        local_140._12_4_ = (uint)bVar12 * auVar70._12_4_ | (uint)!bVar12 * local_140._12_4_;
        bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
        local_140._16_4_ = (uint)bVar12 * auVar70._16_4_ | (uint)!bVar12 * local_140._16_4_;
        bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
        local_140._20_4_ = (uint)bVar12 * auVar70._20_4_ | (uint)!bVar12 * local_140._20_4_;
        bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
        local_140._24_4_ = (uint)bVar12 * auVar70._24_4_ | (uint)!bVar12 * local_140._24_4_;
        bVar12 = SUB81(uVar47 >> 7,0);
        local_140._28_4_ = (uint)bVar12 * auVar70._28_4_ | (uint)!bVar12 * local_140._28_4_;
        local_120._0_4_ =
             (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * local_120._0_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        local_120._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * local_120._4_4_;
        bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
        local_120._8_4_ = (uint)bVar12 * auVar60._8_4_ | (uint)!bVar12 * local_120._8_4_;
        bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
        local_120._12_4_ = (uint)bVar12 * auVar60._12_4_ | (uint)!bVar12 * local_120._12_4_;
        bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
        local_120._16_4_ = (uint)bVar12 * auVar60._16_4_ | (uint)!bVar12 * local_120._16_4_;
        bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
        local_120._20_4_ = (uint)bVar12 * auVar60._20_4_ | (uint)!bVar12 * local_120._20_4_;
        bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
        local_120._24_4_ = (uint)bVar12 * auVar60._24_4_ | (uint)!bVar12 * local_120._24_4_;
        bVar12 = SUB81(uVar47 >> 7,0);
        local_120._28_4_ = (uint)bVar12 * auVar60._28_4_ | (uint)!bVar12 * local_120._28_4_;
        local_100._0_4_ =
             (uint)(bVar46 & 1) * auVar71._0_4_ | (uint)!(bool)(bVar46 & 1) * local_100._0_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        local_100._4_4_ = (uint)bVar12 * auVar71._4_4_ | (uint)!bVar12 * local_100._4_4_;
        bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
        local_100._8_4_ = (uint)bVar12 * auVar71._8_4_ | (uint)!bVar12 * local_100._8_4_;
        bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
        local_100._12_4_ = (uint)bVar12 * auVar71._12_4_ | (uint)!bVar12 * local_100._12_4_;
        bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
        local_100._16_4_ = (uint)bVar12 * auVar71._16_4_ | (uint)!bVar12 * local_100._16_4_;
        bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
        local_100._20_4_ = (uint)bVar12 * auVar71._20_4_ | (uint)!bVar12 * local_100._20_4_;
        bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
        local_100._24_4_ = (uint)bVar12 * auVar71._24_4_ | (uint)!bVar12 * local_100._24_4_;
        bVar12 = SUB81(uVar47 >> 7,0);
        local_100._28_4_ = (uint)bVar12 * auVar71._28_4_ | (uint)!bVar12 * local_100._28_4_;
        auVar60 = vsubps_avx512vl(local_140,auVar65);
        auVar62 = vsubps_avx512vl(local_120,auVar66);
        auVar72 = vsubps_avx512vl(local_100,auVar72);
        auVar60 = vfnmadd231ps_avx512vl(auVar60,auVar75,auVar63);
        auVar61 = vfnmadd231ps_avx512vl(auVar62,auVar75,auVar61);
        auVar62 = vfnmadd231ps_avx512vl(auVar72,auVar75,auVar67);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar64,local_140);
        auVar61 = vfnmadd213ps_avx512vl(auVar61,auVar64,local_120);
        auVar62 = vfnmadd213ps_avx512vl(auVar62,auVar64,local_100);
        in_ZMM30 = ZEXT3264(auVar62);
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar13 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar14 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar21 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar25 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar29 = SUB81(uVar47 >> 7,0);
        local_140._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * local_140._4_4_;
        local_140._0_4_ =
             (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * local_140._0_4_;
        local_140._8_4_ = (uint)bVar13 * auVar60._8_4_ | (uint)!bVar13 * local_140._8_4_;
        local_140._12_4_ = (uint)bVar14 * auVar60._12_4_ | (uint)!bVar14 * local_140._12_4_;
        local_140._16_4_ = (uint)bVar17 * auVar60._16_4_ | (uint)!bVar17 * local_140._16_4_;
        local_140._20_4_ = (uint)bVar21 * auVar60._20_4_ | (uint)!bVar21 * local_140._20_4_;
        local_140._24_4_ = (uint)bVar25 * auVar60._24_4_ | (uint)!bVar25 * local_140._24_4_;
        local_140._28_4_ = (uint)bVar29 * auVar60._28_4_ | (uint)!bVar29 * local_140._28_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar13 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar14 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar21 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar25 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar29 = SUB81(uVar47 >> 7,0);
        local_120._4_4_ = (uint)bVar12 * auVar61._4_4_ | (uint)!bVar12 * local_120._4_4_;
        local_120._0_4_ =
             (uint)(bVar46 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar46 & 1) * local_120._0_4_;
        local_120._8_4_ = (uint)bVar13 * auVar61._8_4_ | (uint)!bVar13 * local_120._8_4_;
        local_120._12_4_ = (uint)bVar14 * auVar61._12_4_ | (uint)!bVar14 * local_120._12_4_;
        local_120._16_4_ = (uint)bVar17 * auVar61._16_4_ | (uint)!bVar17 * local_120._16_4_;
        local_120._20_4_ = (uint)bVar21 * auVar61._20_4_ | (uint)!bVar21 * local_120._20_4_;
        local_120._24_4_ = (uint)bVar25 * auVar61._24_4_ | (uint)!bVar25 * local_120._24_4_;
        local_120._28_4_ = (uint)bVar29 * auVar61._28_4_ | (uint)!bVar29 * local_120._28_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar13 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar14 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar21 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar25 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar29 = SUB81(uVar47 >> 7,0);
        local_100._4_4_ = (uint)bVar12 * auVar62._4_4_ | (uint)!bVar12 * local_100._4_4_;
        local_100._0_4_ =
             (uint)(bVar46 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar46 & 1) * local_100._0_4_;
        local_100._8_4_ = (uint)bVar13 * auVar62._8_4_ | (uint)!bVar13 * local_100._8_4_;
        local_100._12_4_ = (uint)bVar14 * auVar62._12_4_ | (uint)!bVar14 * local_100._12_4_;
        local_100._16_4_ = (uint)bVar17 * auVar62._16_4_ | (uint)!bVar17 * local_100._16_4_;
        local_100._20_4_ = (uint)bVar21 * auVar62._20_4_ | (uint)!bVar21 * local_100._20_4_;
        local_100._24_4_ = (uint)bVar25 * auVar62._24_4_ | (uint)!bVar25 * local_100._24_4_;
        local_100._28_4_ = (uint)bVar29 * auVar62._28_4_ | (uint)!bVar29 * local_100._28_4_;
        if (bVar46 == 0xff) {
          auVar60 = vunpcklps_avx512vl(local_140,local_120);
          auVar61 = vunpcklps_avx512vl(local_100,auVar59);
          auVar62 = vunpcklpd_avx512vl(auVar60,auVar61);
          auVar60 = vunpckhpd_avx512vl(auVar60,auVar61);
          auVar61 = vunpckhps_avx512vl(local_140,local_120);
          auVar59 = vunpckhps_avx512vl(local_100,auVar59);
          auVar63 = vunpcklpd_avx512vl(auVar61,auVar59);
          auVar59 = vunpckhpd_avx512vl(auVar61,auVar59);
          auVar61 = vinsertf32x4_avx512vl(auVar62,auVar60._0_16_,1);
          *pauVar43 = auVar61;
          auVar61 = vinsertf32x4_avx512vl(auVar63,auVar59._0_16_,1);
          pauVar43[1] = auVar61;
          auVar60 = vshuff64x2_avx512vl(auVar62,auVar60,3);
          pauVar43[2] = auVar60;
          auVar59 = vshuff64x2_avx512vl(auVar63,auVar59,3);
          pauVar43[3] = auVar59;
        }
        else {
          vscatterdps_avx512vl(ZEXT832(pauVar43) + auVar85,uVar47,local_140);
          vscatterdps_avx512vl(ZEXT832(pauVar43) + ZEXT432((uint)param_5),uVar47,local_120);
          vscatterdps_avx512vl(ZEXT832(pauVar43) + auVar75,uVar47,local_100);
          vscatterdps_avx512vl(ZEXT832(pauVar43) + auVar73,uVar47,auVar59);
        }
      }
      uVar45 = uVar45 + 8;
      lVar44 = lVar44 + 0x60;
      pauVar43 = pauVar43 + 4;
    } while ((int)uVar45 < (int)(uVar48 & 0xfffffff8));
    if ((int)param_12 <= (int)uVar45) {
      return;
    }
  }
  auVar73 = vpbroadcastd_avx512vl();
  auVar73 = vpor_avx2(auVar73,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar74 = vpbroadcastd_avx512vl();
  uVar47 = vpcmpgtd_avx512vl(auVar74,auVar73);
  uVar45 = uVar45 & 0xffffffff;
  lVar44 = uVar45 * 0x10;
  pauVar43 = (undefined1 (*) [32])(*param_1 + lVar44);
  bVar46 = (byte)uVar47;
  if (bVar46 == 0xff) {
    auVar74 = vperm2f128_avx(*pauVar43,pauVar43[2],0x20);
    auVar84 = vperm2f128_avx(*pauVar43,pauVar43[2],0x31);
    auVar75 = vperm2f128_avx(pauVar43[1],pauVar43[3],0x20);
    auVar59 = vperm2f128_avx(pauVar43[1],pauVar43[3],0x31);
    auVar73 = vunpcklps_avx(auVar74,auVar84);
    auVar74 = vunpckhps_avx(auVar74,auVar84);
    auVar85 = vunpcklps_avx(auVar75,auVar59);
    auVar75 = vunpckhps_avx512vl(auVar75,auVar59);
    auVar58 = auVar75._0_16_;
    auVar84 = vunpcklpd_avx(auVar73,auVar85);
    auVar73 = vunpckhpd_avx(auVar73,auVar85);
    auVar85 = vunpcklpd_avx512vl(auVar74,auVar75);
    auVar74 = vunpckhpd_avx512vl(auVar74,auVar75);
  }
  else {
    auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar43 + lVar44));
    auVar84._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
    auVar84._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
    auVar84._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
    auVar84._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
    auVar84._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
    auVar84._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
    auVar84._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
    auVar84._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
    auVar74 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar43 + lVar44));
    auVar73._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar74._4_4_;
    auVar73._0_4_ = (uint)(bVar46 & 1) * auVar74._0_4_;
    auVar73._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar74._8_4_;
    auVar73._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar74._12_4_;
    auVar73._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar74._16_4_;
    auVar73._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar74._20_4_;
    auVar73._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar74._24_4_;
    auVar73._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar74._28_4_;
    auVar74 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar43 + lVar44));
    auVar85._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar74._4_4_;
    auVar85._0_4_ = (uint)(bVar46 & 1) * auVar74._0_4_;
    auVar85._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar74._8_4_;
    auVar85._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar74._12_4_;
    auVar85._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar74._16_4_;
    auVar85._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar74._20_4_;
    auVar85._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar74._24_4_;
    auVar85._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar74._28_4_;
    auVar75 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + (longlong)*pauVar43));
    auVar74._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar75._4_4_;
    auVar74._0_4_ = (uint)(bVar46 & 1) * auVar75._0_4_;
    auVar74._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar75._8_4_;
    auVar74._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar75._12_4_;
    auVar74._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar75._16_4_;
    auVar74._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar75._20_4_;
    auVar74._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar75._24_4_;
    auVar74._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar75._28_4_;
  }
  uVar48 = (uint)(bVar46 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar46 & 1) * local_1a0;
  bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
  uVar86 = (uint)bVar12 * auVar84._4_4_ | (uint)!bVar12 * iStack_19c;
  bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
  uVar90 = (uint)bVar12 * auVar84._8_4_ | (uint)!bVar12 * iStack_198;
  bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
  uVar94 = (uint)bVar12 * auVar84._12_4_ | (uint)!bVar12 * iStack_194;
  bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
  uVar98 = (uint)bVar12 * auVar84._16_4_ | (uint)!bVar12 * iStack_190;
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  uVar102 = (uint)bVar12 * auVar84._20_4_ | (uint)!bVar12 * iStack_18c;
  bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
  uVar106 = (uint)bVar12 * auVar84._24_4_ | (uint)!bVar12 * iStack_188;
  bVar12 = SUB81(uVar47 >> 7,0);
  uVar110 = (uint)bVar12 * auVar84._28_4_ | (uint)!bVar12 * iStack_184;
  uVar49 = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * local_180;
  bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
  uVar87 = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * iStack_17c;
  bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
  uVar91 = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * iStack_178;
  bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
  uVar95 = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * iStack_174;
  bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
  uVar99 = (uint)bVar12 * auVar73._16_4_ | (uint)!bVar12 * iStack_170;
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  uVar103 = (uint)bVar12 * auVar73._20_4_ | (uint)!bVar12 * iStack_16c;
  bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
  uVar107 = (uint)bVar12 * auVar73._24_4_ | (uint)!bVar12 * iStack_168;
  bVar12 = SUB81(uVar47 >> 7,0);
  uVar111 = (uint)bVar12 * auVar73._28_4_ | (uint)!bVar12 * iStack_164;
  uVar50 = (uint)(bVar46 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar46 & 1) * local_160;
  bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
  uVar88 = (uint)bVar12 * auVar85._4_4_ | (uint)!bVar12 * iStack_15c;
  bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
  uVar92 = (uint)bVar12 * auVar85._8_4_ | (uint)!bVar12 * iStack_158;
  bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
  uVar96 = (uint)bVar12 * auVar85._12_4_ | (uint)!bVar12 * iStack_154;
  bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
  uVar100 = (uint)bVar12 * auVar85._16_4_ | (uint)!bVar12 * iStack_150;
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  uVar104 = (uint)bVar12 * auVar85._20_4_ | (uint)!bVar12 * iStack_14c;
  bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
  uVar108 = (uint)bVar12 * auVar85._24_4_ | (uint)!bVar12 * iStack_148;
  bVar12 = SUB81(uVar47 >> 7,0);
  uVar112 = (uint)bVar12 * auVar85._28_4_ | (uint)!bVar12 * iStack_144;
  uVar33 = vcmpps_avx512vl(ZEXT832(0) << 0x20,auVar74,1);
  uVar47 = uVar47 & uVar33;
  bVar46 = (byte)uVar47;
  if (bVar46 != 0) {
    auVar57 = ZEXT816(0) << 0x20;
    auVar56 = ZEXT816(0) << 0x20;
    if ((param_6 & 1) != 0) {
      param_7 = (undefined1 (*) [16])(*param_7 + uVar45);
      if ((~bVar46 & 0x81) == 0) {
        auVar56._8_8_ = 0;
        auVar56._0_8_ = *(ulonglong *)*param_7;
      }
      else {
        auVar54 = vmovdqu8_avx512vl(*param_7);
        auVar56[1] = ((byte)(uVar47 >> 1) & 1) * auVar54[1];
        auVar56[0] = (bVar46 & 1) * auVar54[0];
        auVar56[2] = ((byte)(uVar47 >> 2) & 1) * auVar54[2];
        auVar56[3] = ((byte)(uVar47 >> 3) & 1) * auVar54[3];
        auVar56[4] = ((byte)(uVar47 >> 4) & 1) * auVar54[4];
        auVar56[5] = ((byte)(uVar47 >> 5) & 1) * auVar54[5];
        auVar56[6] = ((byte)(uVar47 >> 6) & 1) * auVar54[6];
        auVar56[7] = (char)(uVar47 >> 7) * auVar54[7];
        auVar56._8_8_ = 0;
      }
    }
    if ((param_9 & 1) != 0) {
      if ((~bVar46 & 0x81) == 0) {
        auVar57._8_8_ = 0;
        auVar57._0_8_ = *(ulonglong *)*(undefined1 (*) [16])(param_10 + uVar45);
      }
      else {
        auVar54 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_10 + uVar45));
        auVar57[1] = ((byte)(uVar47 >> 1) & 1) * auVar54[1];
        auVar57[0] = (bVar46 & 1) * auVar54[0];
        auVar57[2] = ((byte)(uVar47 >> 2) & 1) * auVar54[2];
        auVar57[3] = ((byte)(uVar47 >> 3) & 1) * auVar54[3];
        auVar57[4] = ((byte)(uVar47 >> 4) & 1) * auVar54[4];
        auVar57[5] = ((byte)(uVar47 >> 5) & 1) * auVar54[5];
        auVar57[6] = ((byte)(uVar47 >> 6) & 1) * auVar54[6];
        auVar57[7] = (char)(uVar47 >> 7) * auVar54[7];
        auVar57._8_8_ = 0;
      }
    }
    auVar73 = vpmovsxbd_avx2(auVar56);
    vpslld_avx2(auVar73,2);
    auVar73 = vgatherdps_avx512vl(*param_8);
    auVar59._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
    auVar59._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
    auVar59._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
    auVar59._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
    auVar59._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
    auVar59._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
    auVar59._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
    auVar59._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
    auVar73 = vpmovsxbd_avx2(auVar57);
    vpslld_avx2(auVar73,2);
    auVar73 = vgatherdps_avx512vl(*param_11);
    fVar1 = (float)((uint)(bVar46 & 1) * auVar73._0_4_);
    fVar2 = (float)((uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_);
    auVar62._4_4_ = fVar2;
    auVar62._0_4_ = fVar1;
    fVar3 = (float)((uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_);
    auVar62._8_4_ = fVar3;
    fVar4 = (float)((uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_);
    auVar62._12_4_ = fVar4;
    fVar5 = (float)((uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_);
    auVar62._16_4_ = fVar5;
    fVar6 = (float)((uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_);
    auVar62._20_4_ = fVar6;
    fVar7 = (float)((uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_);
    auVar62._24_4_ = fVar7;
    fVar8 = (float)((uint)(byte)(uVar47 >> 7) * auVar73._28_4_);
    auVar62._28_4_ = fVar8;
    pauVar10 = (undefined1 (*) [32])(param_2 + uVar45 * 0xc);
    if (bVar46 == 0xff) {
      auVar73 = pauVar10[1];
      auVar84 = vblendps_avx(auVar73,*pauVar10,0x24);
      auVar85 = vpermt2ps_avx512vl(*pauVar10,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar73);
      auVar76 = vpermt2ps_avx512vl(auVar84,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,pauVar10[2]);
      auVar73 = vpermt2ps_avx512vl(pauVar10[2],
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar73);
      auVar77 = vinsertf32x4_avx512vl(auVar85,auVar73._0_16_,1);
      auVar78 = vshuff64x2_avx512vl(auVar85,auVar73,3);
      lVar44 = uVar45 * 0xc;
      auVar73 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar44);
      auVar84 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar44);
      auVar85 = vblendps_avx(auVar73,*(undefined1 (*) [32])(param_3 + lVar44),0x24);
      auVar75 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar44),
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar73);
      auVar79 = vpermt2ps_avx512vl(auVar85,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar84);
      auVar73 = vpermt2ps_avx512vl(auVar84,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar73);
      auVar80 = vinsertf32x4_avx512vl(auVar75,auVar73._0_16_,1);
      auVar81 = vshuff64x2_avx512vl(auVar75,auVar73,3);
      auVar73 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar44);
      auVar84 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar44);
      auVar85 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*(undefined1 (*) [32])(param_4 + lVar44),auVar73);
      auVar75 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar84,auVar73);
      auVar82 = vinsertf32x4_avx512vl(auVar85,auVar75._0_16_,1);
      auVar83 = vshuff64x2_avx512vl(auVar85,auVar75,3);
      auVar73 = vblendps_avx(auVar73,*(undefined1 (*) [32])(param_4 + lVar44),0x24);
      auVar68 = vpermt2ps_avx512vl(auVar73,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar84);
    }
    else {
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + uVar47));
      auVar77._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
      auVar77._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
      auVar77._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
      auVar77._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
      auVar77._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar77._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar77._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar77._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar58 = vxorps_avx512vl(auVar58,auVar58);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + (longlong)*pauVar10));
      auVar78._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar58._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar78._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar58._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar78._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar58._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar78._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar58._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + (longlong)*pauVar10));
      auVar76._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
      auVar76._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
      auVar76._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
      auVar76._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      param_3 = param_3 + uVar45 * 0xc;
      auVar58 = vxorps_avx512vl(auVar117,auVar117);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(param_3 + uVar47));
      auVar80._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar58._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar80._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar58._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar80._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar58._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar80._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar58._12_4_;
      auVar80._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar80._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar80._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar80._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar52 = vxorps_avx512vl(auVar52,auVar52);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + param_3));
      auVar81._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar52._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar81._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar52._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar81._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar52._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar81._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar52._12_4_;
      auVar81._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar81._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar81._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar81._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + param_3));
      auVar79._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
      auVar79._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
      auVar79._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
      auVar79._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
      auVar79._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar79._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar79._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar79._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      param_4 = param_4 + uVar45 * 0xc;
      auVar52 = vxorps_avx512vl(auVar118,auVar118);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(param_4 + uVar47));
      auVar82._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar52._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar82._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar52._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar82._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar52._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar82._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar52._12_4_;
      auVar82._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar82._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar82._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar82._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar52 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + param_4));
      auVar83._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar52._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar83._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar52._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar83._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar52._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar83._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar52._12_4_;
      auVar83._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar83._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar83._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar83._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + param_4));
      auVar68._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
      auVar68._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
      auVar68._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
      auVar68._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
      auVar68._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar68._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar68._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar68._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
    }
    auVar34._4_4_ = uVar86;
    auVar34._0_4_ = uVar48;
    auVar34._8_4_ = uVar90;
    auVar34._12_4_ = uVar94;
    auVar34._16_4_ = uVar98;
    auVar34._20_4_ = uVar102;
    auVar34._24_4_ = uVar106;
    auVar34._28_4_ = uVar110;
    auVar37._4_4_ = uVar87;
    auVar37._0_4_ = uVar49;
    auVar37._8_4_ = uVar91;
    auVar37._12_4_ = uVar95;
    auVar37._16_4_ = uVar99;
    auVar37._20_4_ = uVar103;
    auVar37._24_4_ = uVar107;
    auVar37._28_4_ = uVar111;
    auVar40._4_4_ = uVar88;
    auVar40._0_4_ = uVar50;
    auVar40._8_4_ = uVar92;
    auVar40._12_4_ = uVar96;
    auVar40._16_4_ = uVar100;
    auVar40._20_4_ = uVar104;
    auVar40._24_4_ = uVar108;
    auVar40._28_4_ = uVar112;
    auVar73 = vsubps_avx512vl(auVar34,auVar80);
    auVar84 = vsubps_avx512vl(auVar37,auVar81);
    auVar85 = vsubps_avx512vl(auVar40,auVar79);
    auVar73 = vfnmadd213ps_avx512vl(auVar73,auVar59,auVar34);
    auVar84 = vfnmadd213ps_avx512vl(auVar84,auVar59,auVar37);
    auVar85 = vfnmadd213ps_avx512vl(auVar85,auVar59,auVar40);
    fVar51 = (float)((uint)(bVar46 & 1) * auVar73._0_4_ | !(bool)(bVar46 & 1) * uVar48);
    bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
    fVar89 = (float)((uint)bVar12 * auVar73._4_4_ | !bVar12 * uVar86);
    bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
    fVar93 = (float)((uint)bVar12 * auVar73._8_4_ | !bVar12 * uVar90);
    bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
    fVar97 = (float)((uint)bVar12 * auVar73._12_4_ | !bVar12 * uVar94);
    bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
    fVar101 = (float)((uint)bVar12 * auVar73._16_4_ | !bVar12 * uVar98);
    bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
    fVar105 = (float)((uint)bVar12 * auVar73._20_4_ | !bVar12 * uVar102);
    bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
    fVar109 = (float)((uint)bVar12 * auVar73._24_4_ | !bVar12 * uVar106);
    bVar12 = SUB81(uVar47 >> 7,0);
    fVar113 = (float)((uint)bVar12 * auVar73._28_4_ | !bVar12 * uVar110);
    uVar48 = (uint)(bVar46 & 1) * auVar84._0_4_ | !(bool)(bVar46 & 1) * uVar49;
    bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
    uVar86 = (uint)bVar12 * auVar84._4_4_ | !bVar12 * uVar87;
    bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
    uVar87 = (uint)bVar12 * auVar84._8_4_ | !bVar12 * uVar91;
    bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
    uVar90 = (uint)bVar12 * auVar84._12_4_ | !bVar12 * uVar95;
    bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
    uVar94 = (uint)bVar12 * auVar84._16_4_ | !bVar12 * uVar99;
    bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
    uVar95 = (uint)bVar12 * auVar84._20_4_ | !bVar12 * uVar103;
    bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
    uVar98 = (uint)bVar12 * auVar84._24_4_ | !bVar12 * uVar107;
    bVar12 = SUB81(uVar47 >> 7,0);
    uVar102 = (uint)bVar12 * auVar84._28_4_ | !bVar12 * uVar111;
    uVar49 = (uint)(bVar46 & 1) * auVar85._0_4_ | !(bool)(bVar46 & 1) * uVar50;
    bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
    uVar50 = (uint)bVar12 * auVar85._4_4_ | !bVar12 * uVar88;
    bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
    uVar88 = (uint)bVar12 * auVar85._8_4_ | !bVar12 * uVar92;
    bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
    uVar91 = (uint)bVar12 * auVar85._12_4_ | !bVar12 * uVar96;
    bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
    uVar92 = (uint)bVar12 * auVar85._16_4_ | !bVar12 * uVar100;
    bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
    uVar96 = (uint)bVar12 * auVar85._20_4_ | !bVar12 * uVar104;
    bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
    uVar99 = (uint)bVar12 * auVar85._24_4_ | !bVar12 * uVar108;
    bVar12 = SUB81(uVar47 >> 7,0);
    uVar100 = (uint)bVar12 * auVar85._28_4_ | !bVar12 * uVar112;
    auVar35._4_4_ = fVar89;
    auVar35._0_4_ = fVar51;
    auVar35._8_4_ = fVar93;
    auVar35._12_4_ = fVar97;
    auVar35._16_4_ = fVar101;
    auVar35._20_4_ = fVar105;
    auVar35._24_4_ = fVar109;
    auVar35._28_4_ = fVar113;
    auVar38._4_4_ = uVar86;
    auVar38._0_4_ = uVar48;
    auVar38._8_4_ = uVar87;
    auVar38._12_4_ = uVar90;
    auVar38._16_4_ = uVar94;
    auVar38._20_4_ = uVar95;
    auVar38._24_4_ = uVar98;
    auVar38._28_4_ = uVar102;
    auVar41._4_4_ = uVar50;
    auVar41._0_4_ = uVar49;
    auVar41._8_4_ = uVar88;
    auVar41._12_4_ = uVar91;
    auVar41._16_4_ = uVar92;
    auVar41._20_4_ = uVar96;
    auVar41._24_4_ = uVar99;
    auVar41._28_4_ = uVar100;
    auVar73 = vsubps_avx(auVar35,auVar77);
    auVar84 = vsubps_avx512vl(auVar38,auVar78);
    auVar85 = vsubps_avx512vl(auVar41,auVar76);
    auVar114._4_4_ = param_5;
    auVar114._0_4_ = param_5;
    auVar114._8_4_ = param_5;
    auVar114._12_4_ = param_5;
    auVar114._16_4_ = param_5;
    auVar114._20_4_ = param_5;
    auVar114._24_4_ = param_5;
    auVar114._28_4_ = param_5;
    auVar73 = vfnmadd231ps_avx512vl(auVar73,auVar114,auVar82);
    auVar84 = vfnmadd231ps_avx512vl(auVar84,auVar114,auVar83);
    auVar116._0_4_ = -(param_5 * auVar68._0_4_) + auVar85._0_4_;
    auVar116._4_4_ = -(param_5 * auVar68._4_4_) + auVar85._4_4_;
    auVar116._8_4_ = -(param_5 * auVar68._8_4_) + auVar85._8_4_;
    auVar116._12_4_ = -(param_5 * auVar68._12_4_) + auVar85._12_4_;
    auVar116._16_4_ = -(param_5 * auVar68._16_4_) + auVar85._16_4_;
    auVar116._20_4_ = -(param_5 * auVar68._20_4_) + auVar85._20_4_;
    auVar116._24_4_ = -(param_5 * auVar68._24_4_) + auVar85._24_4_;
    auVar116._28_4_ = -(param_5 * auVar68._28_4_) + auVar85._28_4_;
    auVar84 = vfnmadd213ps_avx512vl(auVar84,auVar62,auVar38);
    auVar85 = vfnmadd213ps_avx512vl(auVar116,auVar62,auVar41);
    bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
    bVar17 = (bool)((byte)(uVar47 >> 2) & 1);
    bVar29 = (bool)((byte)(uVar47 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar47 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar47 >> 5) & 1);
    bVar26 = (bool)((byte)(uVar47 >> 6) & 1);
    bVar30 = SUB81(uVar47 >> 7,0);
    bVar13 = (bool)((byte)(uVar47 >> 1) & 1);
    bVar21 = (bool)((byte)(uVar47 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar47 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar47 >> 4) & 1);
    bVar23 = (bool)((byte)(uVar47 >> 5) & 1);
    bVar27 = (bool)((byte)(uVar47 >> 6) & 1);
    bVar31 = SUB81(uVar47 >> 7,0);
    bVar14 = (bool)((byte)(uVar47 >> 1) & 1);
    bVar25 = (bool)((byte)(uVar47 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar47 >> 3) & 1);
    bVar20 = (bool)((byte)(uVar47 >> 4) & 1);
    bVar24 = (bool)((byte)(uVar47 >> 5) & 1);
    bVar28 = (bool)((byte)(uVar47 >> 6) & 1);
    bVar32 = SUB81(uVar47 >> 7,0);
    auVar36._4_4_ =
         (uint)bVar12 * (int)(-(fVar2 * auVar73._4_4_) + fVar89) | (uint)!bVar12 * (int)fVar89;
    auVar36._0_4_ =
         (uint)(bVar46 & 1) * (int)(-(fVar1 * auVar73._0_4_) + fVar51) |
         (uint)!(bool)(bVar46 & 1) * (int)fVar51;
    auVar36._8_4_ =
         (uint)bVar17 * (int)(-(fVar3 * auVar73._8_4_) + fVar93) | (uint)!bVar17 * (int)fVar93;
    auVar36._12_4_ =
         (uint)bVar29 * (int)(-(fVar4 * auVar73._12_4_) + fVar97) | (uint)!bVar29 * (int)fVar97;
    auVar36._16_4_ =
         (uint)bVar18 * (int)(-(fVar5 * auVar73._16_4_) + fVar101) | (uint)!bVar18 * (int)fVar101;
    auVar36._20_4_ =
         (uint)bVar22 * (int)(-(fVar6 * auVar73._20_4_) + fVar105) | (uint)!bVar22 * (int)fVar105;
    auVar36._24_4_ =
         (uint)bVar26 * (int)(-(fVar7 * auVar73._24_4_) + fVar109) | (uint)!bVar26 * (int)fVar109;
    auVar36._28_4_ =
         (uint)bVar30 * (int)(-(fVar8 * auVar73._28_4_) + fVar113) | (uint)!bVar30 * (int)fVar113;
    auVar39._4_4_ = (uint)bVar13 * auVar84._4_4_ | !bVar13 * uVar86;
    auVar39._0_4_ = (uint)(bVar46 & 1) * auVar84._0_4_ | !(bool)(bVar46 & 1) * uVar48;
    auVar39._8_4_ = (uint)bVar21 * auVar84._8_4_ | !bVar21 * uVar87;
    auVar39._12_4_ = (uint)bVar15 * auVar84._12_4_ | !bVar15 * uVar90;
    auVar39._16_4_ = (uint)bVar19 * auVar84._16_4_ | !bVar19 * uVar94;
    auVar39._20_4_ = (uint)bVar23 * auVar84._20_4_ | !bVar23 * uVar95;
    auVar39._24_4_ = (uint)bVar27 * auVar84._24_4_ | !bVar27 * uVar98;
    auVar39._28_4_ = (uint)bVar31 * auVar84._28_4_ | !bVar31 * uVar102;
    auVar42._4_4_ = (uint)bVar14 * auVar85._4_4_ | !bVar14 * uVar50;
    auVar42._0_4_ = (uint)(bVar46 & 1) * auVar85._0_4_ | !(bool)(bVar46 & 1) * uVar49;
    auVar42._8_4_ = (uint)bVar25 * auVar85._8_4_ | !bVar25 * uVar88;
    auVar42._12_4_ = (uint)bVar16 * auVar85._12_4_ | !bVar16 * uVar91;
    auVar42._16_4_ = (uint)bVar20 * auVar85._16_4_ | !bVar20 * uVar92;
    auVar42._20_4_ = (uint)bVar24 * auVar85._20_4_ | !bVar24 * uVar96;
    auVar42._24_4_ = (uint)bVar28 * auVar85._24_4_ | !bVar28 * uVar99;
    auVar42._28_4_ = (uint)bVar32 * auVar85._28_4_ | !bVar32 * uVar100;
    if (bVar46 == 0xff) {
      auVar73 = vunpcklps_avx(auVar36,auVar39);
      auVar84 = vunpcklps_avx(auVar42,auVar74);
      auVar75 = vunpcklpd_avx512vl(auVar73,auVar84);
      auVar73 = vunpckhpd_avx(auVar73,auVar84);
      auVar84 = vunpckhps_avx(auVar36,auVar39);
      auVar74 = vunpckhps_avx(auVar42,auVar74);
      auVar85 = vunpcklpd_avx(auVar84,auVar74);
      auVar74 = vunpckhpd_avx(auVar84,auVar74);
      auVar84 = vinsertf32x4_avx512vl(auVar75,auVar73._0_16_,1);
      *pauVar43 = auVar84;
      auVar115._16_16_ = auVar74._0_16_;
      auVar115._0_16_ = auVar85._0_16_;
      pauVar43[1] = auVar115;
      auVar73 = vshuff64x2_avx512vl(auVar75,auVar73,3);
      pauVar43[2] = auVar73;
      auVar73 = vperm2f128_avx(auVar85,auVar74,0x31);
      pauVar43[3] = auVar73;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar43) +
                 ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar47,
                 auVar36);
      vscatterdps_avx512vl
                (ZEXT832(pauVar43) +
                 ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar47,
                 auVar39);
      vscatterdps_avx512vl
                (ZEXT832(pauVar43) +
                 ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar47,
                 auVar42);
      vscatterdps_avx512vl
                (ZEXT832(pauVar43) +
                 ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar47,
                 auVar74);
    }
  }
  return;
}

// MultiResUpdateFineTargets___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx512skx @ 14059b110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
MultiResUpdateFineTargets___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx512skx
          (longlong param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5,longlong param_6,longlong param_7,uint param_8)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong unaff_RBP;
  ulonglong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  longlong unaff_R12;
  longlong unaff_R13;
  undefined1 (*unaff_R14) [32];
  longlong unaff_R15;
  byte bVar11;
  undefined1 auVar12 [16];
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
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM18 [64];
  undefined1 auVar56 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar57 [16];
  undefined1 in_ZMM20 [64];
  undefined1 auVar58 [16];
  undefined1 in_ZMM21 [64];
  undefined1 auVar59 [16];
  undefined1 in_ZMM22 [64];
  undefined1 auVar60 [16];
  undefined1 in_ZMM24 [64];
  undefined1 auVar61 [16];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  uint local_108 [4];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  ulonglong uVar7;
  undefined1 auVar23 [32];
  
  uVar4 = __real_00000008;
  uVar3 = __real_00000004;
  auVar12 = in_ZMM29._0_16_;
  auVar14 = in_ZMM28._0_16_;
  auVar61 = in_ZMM27._0_16_;
  auVar58 = in_ZMM21._0_16_;
  auVar60 = in_ZMM24._0_16_;
  auVar59 = in_ZMM22._0_16_;
  auVar57 = in_ZMM20._0_16_;
  auVar56 = in_ZMM19._0_16_;
  auVar13 = in_ZMM16._0_16_;
  uVar6 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar6 = param_8;
  }
  uVar6 = uVar6 & 0xfffffff8;
  uVar7 = (ulonglong)uVar6;
  if ((int)uVar6 < 1) {
    uVar9 = 0;
    if ((int)param_8 < 1) {
      return param_5;
    }
  }
  else {
    unaff_R14 = (undefined1 (*) [32])(param_6 + 0x60);
    unaff_R15 = 0x40;
    uVar9 = 0;
    local_e8 = __real_00000004;
    uStack_e4 = __real_00000004;
    uStack_e0 = __real_00000004;
    uStack_dc = __real_00000004;
    uStack_d8 = __real_00000004;
    uStack_d4 = __real_00000004;
    uStack_d0 = __real_00000004;
    uStack_cc = __real_00000004;
    local_108[0] = __real_00000008;
    local_108[1] = __real_00000008;
    local_108[2] = __real_00000008;
    local_108[3] = __real_00000008;
    uStack_f8 = __real_00000008;
    uStack_f4 = __real_00000008;
    uStack_f0 = __real_00000008;
    uStack_ec = __real_00000008;
    do {
      auVar55 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
      auVar54 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
      auVar45 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
      auVar19 = vperm2f128_avx(unaff_R14[-3],unaff_R14[-1],0x20);
      auVar21 = vperm2f128_avx(unaff_R14[-3],unaff_R14[-1],0x31);
      auVar28 = vperm2f128_avx(unaff_R14[-2],*unaff_R14,0x20);
      auVar15 = vperm2f128_avx(unaff_R14[-2],*unaff_R14,0x31);
      auVar20 = vunpcklps_avx(auVar19,auVar21);
      auVar19 = vunpckhps_avx(auVar19,auVar21);
      auVar29 = vunpcklps_avx(auVar28,auVar15);
      auVar21 = vunpckhps_avx(auVar28,auVar15);
      auVar15 = vunpcklpd_avx512vl(auVar20,auVar29);
      auVar59 = auVar15._0_16_;
      auVar16 = vunpckhpd_avx512vl(auVar20,auVar29);
      auVar17 = vunpcklpd_avx512vl(auVar19,auVar21);
      auVar18 = vunpckhpd_avx512vl(auVar19,auVar21);
      auVar60 = auVar18._0_16_;
      auVar19 = *(undefined1 (*) [32])(param_7 + -0x40 + unaff_R15);
      auVar21 = *(undefined1 (*) [32])(param_7 + -0x20 + unaff_R15);
      auVar20 = vpblendd_avx2(auVar21,auVar19,0x24);
      auVar19 = vpermt2d_avx512vl(auVar19,
                                  ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,auVar21);
      auVar20 = vpermt2d_avx512vl(auVar20,
                                  ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,*(undefined1 (*) [32])(param_7 + unaff_R15));
      auVar21 = vpermt2d_avx512vl(*(undefined1 (*) [32])(param_7 + unaff_R15),
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  ,auVar21);
      auVar23._16_16_ = ZEXT116(0) * auVar19._16_16_ | ZEXT116(1) * auVar21._0_16_;
      auVar23._0_16_ = ZEXT116(0) * auVar21._0_16_ | ZEXT116(1) * auVar19._0_16_;
      auVar21 = vperm2i128_avx2(auVar19,auVar21,0x31);
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar22 = vgatherdps_avx512vl(param_3[param_6]);
      auVar14 = auVar22._0_16_;
      in_ZMM28 = ZEXT3264(auVar22);
      vpslld_avx2(auVar23,2);
      vpslld_avx2(auVar23,3);
      auVar28._4_4_ = uVar3;
      auVar28._0_4_ = uVar3;
      auVar28._8_4_ = uVar3;
      auVar28._12_4_ = uVar3;
      auVar28._16_4_ = uVar3;
      auVar28._20_4_ = uVar3;
      auVar28._24_4_ = uVar3;
      auVar28._28_4_ = uVar3;
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar23 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_R15));
      auVar12 = auVar23._0_16_;
      in_ZMM29 = ZEXT3264(auVar23);
      auVar29._4_4_ = uVar4;
      auVar29._0_4_ = uVar4;
      auVar29._8_4_ = uVar4;
      auVar29._12_4_ = uVar4;
      auVar29._16_4_ = uVar4;
      auVar29._20_4_ = uVar4;
      auVar29._24_4_ = uVar4;
      auVar29._28_4_ = uVar4;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar24 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + param_1));
      in_ZMM30 = ZEXT3264(auVar24);
      auVar19._4_4_ = auVar21._4_4_ * 2;
      auVar19._0_4_ = auVar21._0_4_ * 2;
      auVar19._8_4_ = auVar21._8_4_ * 2;
      auVar19._12_4_ = auVar21._12_4_ * 2;
      auVar19._16_4_ = auVar21._16_4_ * 2;
      auVar19._20_4_ = auVar21._20_4_ * 2;
      auVar19._24_4_ = auVar21._24_4_ * 2;
      auVar19._28_4_ = auVar21._28_4_ * 2;
      auVar19 = vpaddd_avx512vl(auVar21,auVar19);
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar25 = vgatherdps_avx512vl(param_3[param_1]);
      in_ZMM31 = ZEXT3264(auVar25);
      auVar47 = vpslld_avx2(auVar21,2);
      auVar51 = vpslld_avx2(auVar21,3);
      auVar21._0_4_ = auVar51._0_4_ + auVar47._0_4_;
      auVar21._4_4_ = auVar51._4_4_ + auVar47._4_4_;
      auVar21._8_4_ = auVar51._8_4_ + auVar47._8_4_;
      auVar21._12_4_ = auVar51._12_4_ + auVar47._12_4_;
      auVar21._16_4_ = auVar51._16_4_ + auVar47._16_4_;
      auVar21._20_4_ = auVar51._20_4_ + auVar47._20_4_;
      auVar21._24_4_ = auVar51._24_4_ + auVar47._24_4_;
      auVar21._28_4_ = auVar51._28_4_ + auVar47._28_4_;
      auVar47 = vpaddd_avx512vl(auVar21,auVar28);
      auVar51 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + uVar7));
      auVar21 = vpaddd_avx512vl(auVar21,auVar29);
      auVar26 = vgatherdps_avx512vl(*param_3);
      auVar27 = vgatherdps_avx512vl(param_3[uVar7]);
      auVar48 = vpslld_avx2(auVar20,2);
      auVar46 = vpslld_avx2(auVar20,3);
      auVar20._0_4_ = auVar46._0_4_ + auVar48._0_4_;
      auVar20._4_4_ = auVar46._4_4_ + auVar48._4_4_;
      auVar20._8_4_ = auVar46._8_4_ + auVar48._8_4_;
      auVar20._12_4_ = auVar46._12_4_ + auVar48._12_4_;
      auVar20._16_4_ = auVar46._16_4_ + auVar48._16_4_;
      auVar20._20_4_ = auVar46._20_4_ + auVar48._20_4_;
      auVar20._24_4_ = auVar46._24_4_ + auVar48._24_4_;
      auVar20._28_4_ = auVar46._28_4_ + auVar48._28_4_;
      vpaddd_avx512vl(auVar20,auVar28);
      auVar28 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + (longlong)param_4));
      vpaddd_avx512vl(auVar20,auVar29);
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + param_7));
      auVar29 = vgatherdps_avx512vl(param_4[param_6]);
      auVar46 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + unaff_R15));
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + param_1));
      auVar30 = vgatherdps_avx512vl(param_4[param_1]);
      auVar31 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + uVar7));
      vxorps_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
      auVar32 = vgatherdps_avx512vl(*param_4);
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar33 = vgatherdps_avx512vl(param_4[uVar7]);
      auVar34 = vgatherdps_avx512vl(param_5[param_6]);
      vxorps_avx512vl(in_ZMM18._0_16_,in_ZMM18._0_16_);
      auVar35 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + unaff_R15));
      auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + param_1));
      auVar37 = vgatherdps_avx512vl(param_5[param_1]);
      auVar38 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + uVar7));
      vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
      auVar47 = vgatherdps_avx512vl(*param_5);
      vxorps_avx512vl(auVar21._0_16_,auVar21._0_16_);
      auVar21 = vgatherdps_avx512vl(param_5[uVar7]);
      auVar39 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 * 2));
      auVar29 = vfmadd213ps_avx512vl(auVar29,auVar18,auVar22);
      auVar22 = vfmadd213ps_avx512vl(auVar46,auVar18,auVar23);
      auVar23 = vfmadd213ps_avx512vl(auVar48,auVar18,auVar24);
      auVar24 = vfmadd213ps_avx512vl(auVar30,auVar18,auVar25);
      auVar25 = vfmadd213ps_avx512vl(auVar31,auVar18,auVar51);
      vxorps_avx512vl(auVar19._0_16_,auVar19._0_16_);
      auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + param_7));
      auVar51 = vfmadd213ps_avx512vl(auVar32,auVar18,auVar26);
      auVar26 = vfmadd213ps_avx512vl(auVar33,auVar18,auVar27);
      auVar28 = vfmadd213ps_avx512vl(auVar39,auVar18,auVar28);
      auVar19 = vfmadd213ps_avx512vl(auVar19,auVar18,auVar20);
      auVar20 = vmulps_avx512vl(auVar16,auVar24);
      auVar20 = vfmadd231ps_avx512vl(auVar20,auVar15,auVar29);
      auVar29 = vmulps_avx512vl(auVar16,auVar25);
      auVar29 = vfmadd231ps_avx512vl(auVar29,auVar15,auVar22);
      auVar18 = vmulps_avx512vl(auVar16,auVar51);
      auVar18 = vfmadd231ps_avx512vl(auVar18,auVar15,auVar23);
      auVar22 = vmulps_avx512vl(auVar16,auVar37);
      auVar23 = vmulps_avx512vl(auVar16,auVar38);
      auVar16 = vmulps_avx512vl(auVar16,auVar47);
      auVar22 = vfmadd231ps_avx512vl(auVar22,auVar15,auVar34);
      auVar23 = vfmadd231ps_avx512vl(auVar23,auVar15,auVar35);
      auVar15 = vfmadd231ps_avx512vl(auVar16,auVar15,auVar36);
      auVar16 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + (longlong)param_4));
      vxorps_avx512vl(auVar35._0_16_,auVar35._0_16_);
      auVar24 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + param_7));
      auVar25 = vfmadd213ps_avx512vl(auVar26,auVar17,auVar20);
      in_ZMM27 = ZEXT3264(auVar25);
      auVar61 = auVar25._0_16_;
      auVar29 = vfmadd213ps_avx512vl(auVar28,auVar17,auVar29);
      auVar28 = vfmadd213ps_avx512vl(auVar19,auVar17,auVar18);
      auVar18 = vfmadd231ps_avx512vl(auVar22,auVar17,auVar21);
      auVar16 = vfmadd231ps_avx512vl(auVar23,auVar17,auVar16);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar17,auVar24);
      in_ZMM16 = ZEXT3264(auVar15);
      auVar13 = auVar15._0_16_;
      auVar21 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar29);
      auVar19 = vpermt2ps_avx512vl(auVar25,
                                   ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar29);
      in_ZMM18 = ZEXT3264(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000);
      auVar19 = vpermt2ps_avx512vl(auVar19,
                                   ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar21);
      *(undefined1 (*) [32])(param_1 + -0x40 + unaff_R15) = auVar19;
      auVar19 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar56 = __ymm_0000000d00000007000000020000000c00000006000000010000000b00000005._0_16_;
      auVar21 = vpermt2ps_avx512vl(auVar21,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar25);
      *(undefined1 (*) [32])(param_1 + -0x20 + unaff_R15) = auVar21;
      auVar20 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
      auVar21 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar57 = __ymm_0000000700000007000000070000000700000006000000050000000f0000000e._0_16_;
      auVar29 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar25);
      auVar58 = __ymm_0000000f00000004000000010000000e00000003000000000000000d00000002._0_16_;
      auVar29 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar28);
      *(undefined1 (*) [32])(param_1 + unaff_R15) = auVar29;
      auVar29 = vpermt2ps_avx512vl(auVar15,auVar45,auVar16);
      auVar28 = vpermt2ps_avx512vl(auVar18,auVar54,auVar16);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar55,auVar29);
      *(undefined1 (*) [32])(param_2 + -0x40 + unaff_R15) = auVar28;
      auVar19 = vpermt2ps_avx512vl(auVar29,auVar19,auVar18);
      *(undefined1 (*) [32])(param_2 + -0x20 + unaff_R15) = auVar19;
      auVar19 = vpermt2ps_avx512vl(auVar16,auVar21,auVar18);
      auVar19 = vpermt2ps_avx512vl(auVar19,auVar20,auVar15);
      *(undefined1 (*) [32])(param_2 + unaff_R15) = auVar19;
      unaff_R15 = unaff_R15 + 0x60;
      unaff_R14 = unaff_R14 + 4;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)uVar6);
    if ((int)param_8 <= (int)uVar9) {
      return param_5;
    }
  }
  auVar29 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar20 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar21 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar19 = vpbroadcastd_avx512vl();
  auVar19 = vpor_avx2(auVar19,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar28 = vpbroadcastd_avx512vl();
  uVar2 = vpcmpgtd_avx512vl(auVar28,auVar19);
  uVar8 = (ulonglong)uVar9;
  pauVar10 = (undefined1 (*) [32])(param_6 + uVar8 * 0x10);
  bVar11 = (byte)uVar2;
  if (bVar11 == 0xff) {
    auVar19 = vperm2f128_avx(*pauVar10,pauVar10[2],0x20);
    auVar15 = vperm2f128_avx(*pauVar10,pauVar10[2],0x31);
    auVar45 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x20);
    auVar54 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x31);
    auVar28 = vunpcklps_avx(auVar19,auVar15);
    auVar19 = vunpckhps_avx(auVar19,auVar15);
    auVar15 = vunpcklps_avx(auVar45,auVar54);
    auVar54 = vunpckhps_avx512vl(auVar45,auVar54);
    auVar45 = vunpcklpd_avx(auVar28,auVar15);
    auVar15 = vunpckhpd_avx(auVar28,auVar15);
    auVar17 = vunpcklpd_avx512vl(auVar19,auVar54);
    auVar18 = vunpckhpd_avx512vl(auVar19,auVar54);
    auVar19 = *(undefined1 (*) [32])(param_7 + uVar8 * 0xc);
    auVar28 = *(undefined1 (*) [32])(param_7 + 0x20 + uVar8 * 0xc);
    auVar54 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_7 + 0x40 + uVar8 * 0xc));
    auVar55 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                ,auVar19,auVar28);
    auVar16 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar16 = vpermi2d_avx512vl(auVar16,auVar54,auVar28);
    auVar22 = vinserti32x4_avx512vl(auVar55,auVar16._0_16_,1);
    auVar55 = vshufi64x2_avx512vl(auVar55,auVar16,3);
    auVar19 = vpblendd_avx2(auVar28,auVar19,0x24);
    auVar54 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                ,auVar19,auVar54);
  }
  else {
    auVar19 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
    auVar45._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar45._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar45._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar45._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar45._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar45._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar45._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar45._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    auVar19 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
    auVar15._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar15._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar15._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar15._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar15._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar15._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar15._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar15._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    auVar19 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + uVar7));
    auVar17._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar17._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar17._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar17._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar17._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar17._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar17._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar17._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    auVar19 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + unaff_RBP));
    auVar18._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar18._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar18._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar18._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar18._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar18._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar18._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar18._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    param_7 = param_7 + uVar8 * 0xc;
    auVar13 = vxorps_avx512vl(auVar13,auVar13);
    auVar19 = vpgatherdd_avx512vl(*(undefined4 *)(param_7 + unaff_RBP));
    auVar22._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
    bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
    auVar22._4_4_ = (uint)bVar1 * auVar19._4_4_ | (uint)!bVar1 * auVar13._4_4_;
    bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
    auVar22._8_4_ = (uint)bVar1 * auVar19._8_4_ | (uint)!bVar1 * auVar13._8_4_;
    bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
    auVar22._12_4_ = (uint)bVar1 * auVar19._12_4_ | (uint)!bVar1 * auVar13._12_4_;
    auVar22._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar22._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar22._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar22._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    auVar19 = vpgatherdd_avx512vl(*(undefined4 *)(param_7 + param_1));
    auVar55._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar55._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar55._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar55._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar55._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar55._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar55._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar55._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    auVar19 = vpgatherdd_avx512vl(*(undefined4 *)(param_7 + param_1));
    auVar54._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar54._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar54._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar54._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar54._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar54._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar54._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar54._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
  }
  auVar19 = vpaddd_avx512vl(auVar22,auVar22);
  auVar19 = vpaddd_avx512vl(auVar22,auVar19);
  auVar28 = vgatherdps_avx512vl(param_3[uVar2]);
  auVar24._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar28._4_4_;
  auVar24._0_4_ = (uint)(bVar11 & 1) * auVar28._0_4_;
  auVar24._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar28._8_4_;
  auVar24._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar28._12_4_;
  auVar24._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar28._16_4_;
  auVar24._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar28._20_4_;
  auVar24._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar28._24_4_;
  auVar24._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar28._28_4_;
  auVar28 = vpslld_avx512vl(auVar22,2);
  auVar16 = vpslld_avx512vl(auVar22,3);
  auVar28 = vpaddd_avx512vl(auVar16,auVar28);
  auVar22 = vpbroadcastd_avx512vl(ZEXT416(__real_00000004));
  auVar23 = vpaddd_avx512vl(auVar28,auVar22);
  auVar16 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + (longlong)unaff_R14));
  auVar25._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar16._4_4_;
  auVar25._0_4_ = (uint)(bVar11 & 1) * auVar16._0_4_;
  auVar25._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar16._8_4_;
  auVar25._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar16._12_4_;
  auVar25._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar16._16_4_;
  auVar25._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar16._20_4_;
  auVar25._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar16._24_4_;
  auVar25._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar16._28_4_;
  auVar47 = vpbroadcastd_avx512vl(ZEXT416(__real_00000008));
  auVar28 = vpaddd_avx512vl(auVar28,auVar47);
  auVar13 = vxorps_avx512vl(auVar56,auVar56);
  auVar16 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_R15));
  auVar51._0_4_ = (uint)(bVar11 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar51._4_4_ = (uint)bVar1 * auVar16._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar51._8_4_ = (uint)bVar1 * auVar16._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar51._12_4_ = (uint)bVar1 * auVar16._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar51._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar16._16_4_;
  auVar51._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar16._20_4_;
  auVar51._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar16._24_4_;
  auVar51._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar16._28_4_;
  auVar16 = vpaddd_avx512vl(auVar55,auVar55);
  vpaddd_avx512vl(auVar55,auVar16);
  auVar13 = vxorps_avx512vl(auVar57,auVar57);
  auVar16 = vgatherdps_avx512vl(param_3[uVar8]);
  auVar26._0_4_ = (uint)(bVar11 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar26._4_4_ = (uint)bVar1 * auVar16._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar26._8_4_ = (uint)bVar1 * auVar16._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar26._12_4_ = (uint)bVar1 * auVar16._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar26._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar16._16_4_;
  auVar26._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar16._20_4_;
  auVar26._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar16._24_4_;
  auVar26._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar16._28_4_;
  auVar16 = vpslld_avx512vl(auVar55,2);
  auVar55 = vpslld_avx2(auVar55,3);
  auVar55 = vpaddd_avx512vl(auVar55,auVar16);
  vpaddd_avx512vl(auVar55,auVar22);
  auVar13 = vxorps_avx512vl(auVar59,auVar59);
  auVar16 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + (longlong)local_108));
  auVar27._0_4_ = (uint)(bVar11 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar27._4_4_ = (uint)bVar1 * auVar16._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar27._8_4_ = (uint)bVar1 * auVar16._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar27._12_4_ = (uint)bVar1 * auVar16._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar27._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar16._16_4_;
  auVar27._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar16._20_4_;
  auVar27._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar16._24_4_;
  auVar27._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar16._28_4_;
  vpaddd_avx512vl(auVar55,auVar47);
  auVar13 = vxorps_avx512vl(auVar60,auVar60);
  auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_R12));
  auVar46._0_4_ = (uint)(bVar11 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar46._4_4_ = (uint)bVar1 * auVar55._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar46._8_4_ = (uint)bVar1 * auVar55._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar46._12_4_ = (uint)bVar1 * auVar55._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar46._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar55._16_4_;
  auVar46._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar55._20_4_;
  auVar46._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar55._24_4_;
  auVar46._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar55._28_4_;
  auVar13 = vxorps_avx512vl(auVar58,auVar58);
  auVar55 = vgatherdps_avx512vl(param_3[unaff_R13]);
  auVar48._0_4_ = (uint)(bVar11 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar48._4_4_ = (uint)bVar1 * auVar55._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar48._8_4_ = (uint)bVar1 * auVar55._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar48._12_4_ = (uint)bVar1 * auVar55._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar48._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar55._16_4_;
  auVar48._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar55._20_4_;
  auVar48._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar55._24_4_;
  auVar48._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar55._28_4_;
  auVar55 = vpslld_avx2(auVar54,2);
  auVar54 = vpslld_avx2(auVar54,3);
  auVar16._0_4_ = auVar54._0_4_ + auVar55._0_4_;
  auVar16._4_4_ = auVar54._4_4_ + auVar55._4_4_;
  auVar16._8_4_ = auVar54._8_4_ + auVar55._8_4_;
  auVar16._12_4_ = auVar54._12_4_ + auVar55._12_4_;
  auVar16._16_4_ = auVar54._16_4_ + auVar55._16_4_;
  auVar16._20_4_ = auVar54._20_4_ + auVar55._20_4_;
  auVar16._24_4_ = auVar54._24_4_ + auVar55._24_4_;
  auVar16._28_4_ = auVar54._28_4_ + auVar55._28_4_;
  vpaddd_avx512vl(auVar16,auVar22);
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + (longlong)unaff_R14));
  auVar30._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar30._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar30._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar30._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar30._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar30._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar30._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar30._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  vpaddd_avx512vl(auVar16,auVar47);
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_R15));
  auVar47._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar47._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar47._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar47._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar47._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar47._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar47._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar47._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar13 = vxorps_avx512vl(auVar61,auVar61);
  auVar54 = vgatherdps_avx512vl(param_4[uVar2]);
  auVar31._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar31._4_4_ = (uint)bVar1 * auVar54._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar31._8_4_ = (uint)bVar1 * auVar54._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar31._12_4_ = (uint)bVar1 * auVar54._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar31._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar31._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar31._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar31._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar14 = vxorps_avx512vl(auVar14,auVar14);
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + (longlong)unaff_R14));
  auVar32._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar32._4_4_ = (uint)bVar1 * auVar54._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar32._8_4_ = (uint)bVar1 * auVar54._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar32._12_4_ = (uint)bVar1 * auVar54._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar32._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar32._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar32._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar32._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar14 = vxorps_avx512vl(auVar12,auVar12);
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + unaff_R15));
  auVar33._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar33._4_4_ = (uint)bVar1 * auVar54._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar33._8_4_ = (uint)bVar1 * auVar54._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar33._12_4_ = (uint)bVar1 * auVar54._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar33._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar33._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar33._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar33._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(param_4[uVar8]);
  auVar34._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar34._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar34._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar34._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar34._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar34._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar34._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar34._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + (longlong)local_108));
  auVar35._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar35._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar35._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar35._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar35._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar35._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar35._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar35._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + unaff_R12));
  auVar36._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar36._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar36._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar36._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar36._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar36._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar36._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar36._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(param_4[unaff_R13]);
  auVar37._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar37._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar37._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar37._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar37._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar37._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar37._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar37._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + (longlong)unaff_R14));
  auVar38._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar38._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar38._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar38._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar38._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar38._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar38._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar38._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + unaff_R15));
  auVar39._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar39._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar39._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar39._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar39._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar39._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar39._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar39._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(param_5[uVar2]);
  auVar40._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar40._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar40._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar40._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar40._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar40._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar40._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar40._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar14 = vxorps_avx512vl(auVar19._0_16_,auVar19._0_16_);
  auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + (longlong)unaff_R14));
  auVar41._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar41._4_4_ = (uint)bVar1 * auVar19._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar41._8_4_ = (uint)bVar1 * auVar19._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar41._12_4_ = (uint)bVar1 * auVar19._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar41._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
  auVar41._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
  auVar41._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
  auVar41._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
  auVar14 = vxorps_avx512vl(auVar23._0_16_,auVar23._0_16_);
  auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + unaff_R15));
  auVar42._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar42._4_4_ = (uint)bVar1 * auVar19._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar42._8_4_ = (uint)bVar1 * auVar19._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar42._12_4_ = (uint)bVar1 * auVar19._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar42._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
  auVar42._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
  auVar42._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
  auVar42._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
  auVar14 = vxorps_avx512vl(auVar28._0_16_,auVar28._0_16_);
  auVar19 = vgatherdps_avx512vl(param_5[uVar8]);
  auVar43._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar43._4_4_ = (uint)bVar1 * auVar19._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar43._8_4_ = (uint)bVar1 * auVar19._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar43._12_4_ = (uint)bVar1 * auVar19._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar43._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
  auVar43._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
  auVar43._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
  auVar43._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
  auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + (longlong)local_108));
  auVar28 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + unaff_R12));
  auVar54 = vgatherdps_avx512vl(param_5[unaff_R13]);
  auVar44._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar44._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar44._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar44._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar44._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar44._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar44._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar44._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + (longlong)unaff_R14));
  auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + unaff_R15));
  auVar16 = vfmadd213ps_avx512vl(auVar31,auVar18,auVar24);
  auVar22 = vfmadd213ps_avx512vl(auVar32,auVar18,auVar25);
  auVar23 = vfmadd213ps_avx512vl(auVar33,auVar18,auVar51);
  auVar24 = vfmadd213ps_avx512vl(auVar34,auVar18,auVar26);
  auVar25 = vfmadd213ps_avx512vl(auVar35,auVar18,auVar27);
  auVar51 = vfmadd213ps_avx512vl(auVar36,auVar18,auVar46);
  auVar26 = vfmadd213ps_avx512vl(auVar37,auVar18,auVar48);
  auVar27 = vfmadd213ps_avx512vl(auVar38,auVar18,auVar30);
  auVar18 = vfmadd213ps_avx512vl(auVar39,auVar18,auVar47);
  auVar24 = vmulps_avx512vl(auVar15,auVar24);
  auVar16 = vfmadd231ps_avx512vl(auVar24,auVar45,auVar16);
  auVar24 = vmulps_avx512vl(auVar15,auVar25);
  auVar22 = vfmadd231ps_avx512vl(auVar24,auVar45,auVar22);
  auVar24 = vmulps_avx512vl(auVar15,auVar51);
  auVar23 = vfmadd231ps_avx512vl(auVar24,auVar45,auVar23);
  auVar24 = vmulps_avx512vl(auVar15,auVar43);
  auVar52._0_4_ = auVar15._0_4_ * (float)((uint)(bVar11 & 1) * auVar19._0_4_);
  auVar52._4_4_ = auVar15._4_4_ * (float)((uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_);
  auVar52._8_4_ = auVar15._8_4_ * (float)((uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_);
  auVar52._12_4_ = auVar15._12_4_ * (float)((uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_);
  auVar52._16_4_ = auVar15._16_4_ * (float)((uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_);
  auVar52._20_4_ = auVar15._20_4_ * (float)((uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_);
  auVar52._24_4_ = auVar15._24_4_ * (float)((uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_);
  auVar52._28_4_ = auVar15._28_4_ * (float)((uint)(byte)(uVar2 >> 7) * auVar19._28_4_);
  auVar49._0_4_ = (float)((uint)(bVar11 & 1) * auVar28._0_4_) * auVar15._0_4_;
  auVar49._4_4_ = (float)((uint)((byte)(uVar2 >> 1) & 1) * auVar28._4_4_) * auVar15._4_4_;
  auVar49._8_4_ = (float)((uint)((byte)(uVar2 >> 2) & 1) * auVar28._8_4_) * auVar15._8_4_;
  auVar49._12_4_ = (float)((uint)((byte)(uVar2 >> 3) & 1) * auVar28._12_4_) * auVar15._12_4_;
  auVar49._16_4_ = (float)((uint)((byte)(uVar2 >> 4) & 1) * auVar28._16_4_) * auVar15._16_4_;
  auVar49._20_4_ = (float)((uint)((byte)(uVar2 >> 5) & 1) * auVar28._20_4_) * auVar15._20_4_;
  auVar49._24_4_ = (float)((uint)((byte)(uVar2 >> 6) & 1) * auVar28._24_4_) * auVar15._24_4_;
  auVar49._28_4_ = (float)((uint)(byte)(uVar2 >> 7) * auVar28._28_4_) * auVar15._28_4_;
  auVar19 = vfmadd231ps_avx512vl(auVar24,auVar45,auVar40);
  auVar28 = vfmadd231ps_avx512vl(auVar52,auVar45,auVar41);
  auVar15 = vfmadd231ps_avx512vl(auVar49,auVar45,auVar42);
  auVar45 = vfmadd213ps_avx512vl(auVar26,auVar17,auVar16);
  auVar16 = vfmadd213ps_avx512vl(auVar27,auVar17,auVar22);
  auVar18 = vfmadd213ps_avx512vl(auVar18,auVar17,auVar23);
  auVar19 = vfmadd231ps_avx512vl(auVar19,auVar17,auVar44);
  auVar53._0_4_ = auVar17._0_4_ * (float)((uint)(bVar11 & 1) * auVar54._0_4_) + auVar28._0_4_;
  auVar53._4_4_ =
       auVar17._4_4_ * (float)((uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_) + auVar28._4_4_;
  auVar53._8_4_ =
       auVar17._8_4_ * (float)((uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_) + auVar28._8_4_;
  auVar53._12_4_ =
       auVar17._12_4_ * (float)((uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_) + auVar28._12_4_;
  auVar53._16_4_ =
       auVar17._16_4_ * (float)((uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_) + auVar28._16_4_;
  auVar53._20_4_ =
       auVar17._20_4_ * (float)((uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_) + auVar28._20_4_;
  auVar53._24_4_ =
       auVar17._24_4_ * (float)((uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_) + auVar28._24_4_;
  auVar53._28_4_ =
       auVar17._28_4_ * (float)((uint)(byte)(uVar2 >> 7) * auVar54._28_4_) + auVar28._28_4_;
  auVar50._0_4_ = auVar17._0_4_ * (float)((uint)(bVar11 & 1) * auVar55._0_4_) + auVar15._0_4_;
  auVar50._4_4_ =
       auVar17._4_4_ * (float)((uint)((byte)(uVar2 >> 1) & 1) * auVar55._4_4_) + auVar15._4_4_;
  auVar50._8_4_ =
       auVar17._8_4_ * (float)((uint)((byte)(uVar2 >> 2) & 1) * auVar55._8_4_) + auVar15._8_4_;
  auVar50._12_4_ =
       auVar17._12_4_ * (float)((uint)((byte)(uVar2 >> 3) & 1) * auVar55._12_4_) + auVar15._12_4_;
  auVar50._16_4_ =
       auVar17._16_4_ * (float)((uint)((byte)(uVar2 >> 4) & 1) * auVar55._16_4_) + auVar15._16_4_;
  auVar50._20_4_ =
       auVar17._20_4_ * (float)((uint)((byte)(uVar2 >> 5) & 1) * auVar55._20_4_) + auVar15._20_4_;
  auVar50._24_4_ =
       auVar17._24_4_ * (float)((uint)((byte)(uVar2 >> 6) & 1) * auVar55._24_4_) + auVar15._24_4_;
  auVar50._28_4_ =
       auVar17._28_4_ * (float)((uint)(byte)(uVar2 >> 7) * auVar55._28_4_) + auVar15._28_4_;
  puVar5 = (undefined4 *)(uVar8 * 3);
  pauVar10 = (undefined1 (*) [32])(param_1 + uVar8 * 0xc);
  if (bVar11 == 0xff) {
    auVar15 = vpermt2ps_avx512vl(auVar18,
                                 ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar16);
    auVar28 = vpermt2ps_avx512vl(auVar45,
                                 ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar16);
    auVar28 = vpermt2ps_avx512vl(auVar28,
                                 ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar15);
    *pauVar10 = auVar28;
    auVar28 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
    auVar15 = vpermt2ps_avx512vl(auVar15,
                                 ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar45);
    pauVar10[1] = auVar15;
    auVar54 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
    auVar15 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
    auVar45 = vpermt2ps_avx512vl(auVar16,
                                 ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                 ,auVar45);
    auVar45 = vpermt2ps_avx512vl(auVar45,
                                 ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar18);
    pauVar10[2] = auVar45;
    auVar21 = vpermi2ps_avx512vl(auVar21,auVar50,auVar53);
    auVar20 = vpermi2ps_avx512vl(auVar20,auVar19,auVar53);
    auVar20 = vpermt2ps_avx512vl(auVar20,auVar29,auVar21);
    *(undefined1 (*) [32])(param_2 + uVar8 * 0xc) = auVar20;
    auVar21 = vpermt2ps_avx512vl(auVar21,auVar28,auVar19);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar8 * 0xc) = auVar21;
    auVar19 = vpermt2ps_avx512vl(auVar53,auVar15,auVar19);
    auVar19 = vpermt2ps_avx512vl(auVar19,auVar54,auVar50);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar8 * 0xc) = auVar19;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar10) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar2,auVar45
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar10) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar2,auVar16
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar10) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar2,auVar18
              );
    puVar5 = (undefined4 *)(param_2 + uVar8 * 0xc);
    vscatterdps_avx512vl
              (ZEXT832(puVar5) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar2,auVar19
              );
    vscatterdps_avx512vl
              (ZEXT832(puVar5) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar2,auVar53
              );
    vscatterdps_avx512vl
              (ZEXT832(puVar5) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar2,auVar50
              );
  }
  return puVar5;
}

// ApplyMultiResConstraints_avx512skx @ 14059bc50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraints_avx512skx
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
               undefined1 (*param_4) [32],float param_5,undefined4 param_6,float param_7,
               uint param_8)

{
  undefined1 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 (*unaff_RBX) [32];
  undefined1 (*pauVar34) [32];
  undefined1 *puVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [32];
  undefined1 (*pauVar39) [32];
  byte bVar40;
  ulonglong uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  uint uVar73;
  float fVar76;
  uint uVar77;
  float fVar80;
  undefined1 auVar45 [16];
  float fVar84;
  uint uVar85;
  float fVar88;
  uint uVar89;
  float fVar92;
  uint uVar93;
  float fVar96;
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar46 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  uint uVar74;
  uint uVar75;
  uint uVar78;
  uint uVar79;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar86;
  uint uVar87;
  uint uVar90;
  uint uVar91;
  uint uVar94;
  uint uVar95;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  float fVar100;
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM13 [64];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar107 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar108 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar109 [16];
  undefined1 in_ZMM20 [64];
  int local_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  auVar62 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar61 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar60 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar107 = in_ZMM18._0_16_;
  auVar109 = in_ZMM20._0_16_;
  auVar108 = in_ZMM19._0_16_;
  auVar45 = in_ZMM16._0_16_;
  puVar1 = local_140 + 8;
  local_68 = in_ZMM14._0_16_;
  local_78 = in_ZMM13._0_16_;
  local_88 = in_ZMM12._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_a8 = in_ZMM10._0_16_;
  local_b8 = in_ZMM9._0_16_;
  local_c8 = in_ZMM8._0_16_;
  uVar42 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar42 = param_8;
  }
  if ((int)(uVar42 & 0xfffffff8) < 1) {
    uVar37 = 0;
  }
  else {
    auVar71._4_4_ = param_6;
    auVar71._0_4_ = param_6;
    auVar71._8_4_ = param_6;
    auVar71._12_4_ = param_6;
    auVar71._16_4_ = param_6;
    auVar71._20_4_ = param_6;
    auVar71._24_4_ = param_6;
    auVar71._28_4_ = param_6;
    auVar72._4_4_ = param_7;
    auVar72._0_4_ = param_7;
    auVar72._8_4_ = param_7;
    auVar72._12_4_ = param_7;
    auVar72._16_4_ = param_7;
    auVar72._20_4_ = param_7;
    auVar72._24_4_ = param_7;
    auVar72._28_4_ = param_7;
    auVar106._4_4_ = param_5;
    auVar106._0_4_ = param_5;
    auVar106._8_4_ = param_5;
    auVar106._12_4_ = param_5;
    auVar106._16_4_ = param_5;
    auVar106._20_4_ = param_5;
    auVar106._24_4_ = param_5;
    auVar106._28_4_ = param_5;
    uVar37 = 0;
    auVar45 = vxorps_avx512vl(auVar45,auVar45);
    auVar107 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar108 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar109 = __ymm_0000007000000060000000500000004000000030000000200000001000000000._0_16_;
    unaff_RBX = param_2;
    pauVar34 = param_1;
    pauVar38 = param_3;
    pauVar39 = param_4;
    do {
      auVar47 = vshuff64x2_avx512vl(*pauVar34,pauVar34[2],0);
      auVar48 = vshuff64x2_avx512vl(*pauVar34,pauVar34[2],3);
      auVar49 = vshuff64x2_avx512vl(pauVar34[1],pauVar34[3],0);
      auVar50 = vshuff64x2_avx512vl(pauVar34[1],pauVar34[3],3);
      auVar51 = vunpcklps_avx512vl(auVar47,auVar48);
      auVar47 = vunpckhps_avx512vl(auVar47,auVar48);
      auVar48 = vunpcklps_avx512vl(auVar49,auVar50);
      auVar49 = vunpckhps_avx512vl(auVar49,auVar50);
      auVar50 = vunpcklpd_avx512vl(auVar51,auVar48);
      auVar51 = vunpckhpd_avx512vl(auVar51,auVar48);
      local_120 = vunpcklpd_avx512vl(auVar47,auVar49);
      auVar47 = vunpckhpd_avx512vl(auVar47,auVar49);
      uVar41 = vcmpps_avx512vl(ZEXT1632(auVar45),auVar47,1);
      bVar40 = (byte)uVar41;
      if (bVar40 != 0) {
        if (bVar40 == 0xff) {
          auVar48 = unaff_RBX[1];
          auVar49 = vblendps_avx(auVar48,*unaff_RBX,0x24);
          auVar59 = vpermt2ps_avx512vl(*unaff_RBX,auVar60,auVar48);
          auVar53 = vpermt2ps_avx512vl(auVar49,auVar62,unaff_RBX[2]);
          auVar48 = vpermt2ps_avx512vl(unaff_RBX[2],auVar61,auVar48);
          auVar54 = vinsertf32x4_avx512vl(auVar59,auVar48._0_16_,1);
          auVar59 = vperm2f128_avx(auVar59,auVar48,0x31);
          auVar48 = pauVar38[1];
          auVar49 = vblendps_avx(auVar48,*pauVar38,0x24);
          auVar58 = vpermt2ps_avx512vl(*pauVar38,auVar60,auVar48);
          auVar55 = vpermt2ps_avx512vl(auVar49,auVar62,pauVar38[2]);
          auVar48 = vpermt2ps_avx512vl(pauVar38[2],auVar61,auVar48);
          auVar57._16_16_ = auVar48._0_16_;
          auVar57._0_16_ = auVar58._0_16_;
          auVar58 = vperm2f128_avx(auVar58,auVar48,0x31);
          auVar48 = pauVar39[1];
          auVar49 = vblendps_avx(auVar48,*pauVar39,0x24);
          auVar52 = vpermt2ps_avx512vl(*pauVar39,auVar60,auVar48);
          auVar56 = vpermt2ps_avx512vl(auVar49,auVar62,pauVar39[2]);
          auVar48 = vpermt2ps_avx512vl(pauVar39[2],auVar61,auVar48);
          auVar49._16_16_ = auVar48._0_16_;
          auVar49._0_16_ = auVar52._0_16_;
          auVar48 = vperm2f128_avx(auVar52,auVar48,0x31);
        }
        else {
          auVar46 = vxorpd_avx512vl(auVar48._0_16_,auVar48._0_16_);
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_3 + (longlong)*unaff_RBX));
          auVar54._0_4_ =
               (uint)(bVar40 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar46._0_4_;
          bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar54._4_4_ = (uint)bVar2 * auVar48._4_4_ | (uint)!bVar2 * auVar46._4_4_;
          bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar54._8_4_ = (uint)bVar2 * auVar48._8_4_ | (uint)!bVar2 * auVar46._8_4_;
          bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar54._12_4_ = (uint)bVar2 * auVar48._12_4_ | (uint)!bVar2 * auVar46._12_4_;
          auVar54._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar54._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar54._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar54._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_4 + (longlong)*unaff_RBX));
          auVar59._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar59._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar59._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar59._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar59._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar59._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar59._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar59._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + uVar37));
          auVar53._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar53._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar53._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar53._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar53._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar53._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar53._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar53._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_3 + (longlong)*pauVar38));
          auVar57._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar57._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar57._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar57._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar57._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar57._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar57._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar57._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_4 + (longlong)*pauVar38));
          auVar58._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar58._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar58._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar58._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar58._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar58._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar58._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar58._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar38 + uVar37));
          auVar55._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar55._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar55._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar55._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar55._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar55._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar55._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar55._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar48 = vgatherdps_avx512vl(*(undefined4 *)(*param_3 + (longlong)*pauVar39));
          auVar49._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar48._4_4_;
          auVar49._0_4_ = (uint)(bVar40 & 1) * auVar48._0_4_;
          auVar49._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar48._8_4_;
          auVar49._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar48._12_4_;
          auVar49._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar48._16_4_;
          auVar49._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar48._20_4_;
          auVar49._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar48._24_4_;
          auVar49._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar48._28_4_;
          auVar52 = vgatherdps_avx512vl(*(undefined4 *)(*param_4 + (longlong)*pauVar39));
          auVar48._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar52._4_4_;
          auVar48._0_4_ = (uint)(bVar40 & 1) * auVar52._0_4_;
          auVar48._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar52._8_4_;
          auVar48._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar52._12_4_;
          auVar48._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar52._16_4_;
          auVar48._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar52._20_4_;
          auVar48._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar52._24_4_;
          auVar48._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar52._28_4_;
          auVar52 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar39 + uVar37));
          auVar56._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar52._4_4_;
          auVar56._0_4_ = (uint)(bVar40 & 1) * auVar52._0_4_;
          auVar56._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar52._8_4_;
          auVar56._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar52._12_4_;
          auVar56._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar52._16_4_;
          auVar56._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar52._20_4_;
          auVar56._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar52._24_4_;
          auVar56._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar52._28_4_;
        }
        auVar57 = vsubps_avx512vl(auVar50,auVar57);
        auVar58 = vsubps_avx512vl(auVar51,auVar58);
        auVar52 = vsubps_avx512vl(local_120,auVar55);
        auVar57 = vfnmadd213ps_avx512vl(auVar57,auVar71,auVar50);
        auVar58 = vfnmadd213ps_avx512vl(auVar58,auVar71,auVar51);
        auVar52 = vfnmadd213ps_avx512vl(auVar52,auVar71,local_120);
        local_160._0_4_ = auVar50._0_4_;
        local_160._4_4_ = auVar50._4_4_;
        local_160._8_4_ = auVar50._8_4_;
        local_160._12_4_ = auVar50._12_4_;
        local_160._16_4_ = auVar50._16_4_;
        local_160._20_4_ = auVar50._20_4_;
        local_160._24_4_ = auVar50._24_4_;
        local_160._28_4_ = auVar50._28_4_;
        local_160._0_4_ =
             (uint)(bVar40 & 1) * auVar57._0_4_ | (uint)!(bool)(bVar40 & 1) * local_160._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        local_160._4_4_ = (uint)bVar2 * auVar57._4_4_ | (uint)!bVar2 * local_160._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        local_160._8_4_ = (uint)bVar2 * auVar57._8_4_ | (uint)!bVar2 * local_160._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        local_160._12_4_ = (uint)bVar2 * auVar57._12_4_ | (uint)!bVar2 * local_160._12_4_;
        bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
        local_160._16_4_ = (uint)bVar2 * auVar57._16_4_ | (uint)!bVar2 * local_160._16_4_;
        bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
        local_160._20_4_ = (uint)bVar2 * auVar57._20_4_ | (uint)!bVar2 * local_160._20_4_;
        bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
        local_160._24_4_ = (uint)bVar2 * auVar57._24_4_ | (uint)!bVar2 * local_160._24_4_;
        bVar2 = SUB81(uVar41 >> 7,0);
        local_160._28_4_ = (uint)bVar2 * auVar57._28_4_ | (uint)!bVar2 * local_160._28_4_;
        local_140._0_4_ = auVar51._0_4_;
        local_140._4_4_ = auVar51._4_4_;
        local_140._8_4_ = auVar51._8_4_;
        local_140._12_4_ = auVar51._12_4_;
        local_140._16_4_ = auVar51._16_4_;
        local_140._20_4_ = auVar51._20_4_;
        local_140._24_4_ = auVar51._24_4_;
        local_140._28_4_ = auVar51._28_4_;
        local_140._0_4_ =
             (uint)(bVar40 & 1) * auVar58._0_4_ | (uint)!(bool)(bVar40 & 1) * local_140._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        local_140._4_4_ = (uint)bVar2 * auVar58._4_4_ | (uint)!bVar2 * local_140._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        local_140._8_4_ = (uint)bVar2 * auVar58._8_4_ | (uint)!bVar2 * local_140._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        local_140._12_4_ = (uint)bVar2 * auVar58._12_4_ | (uint)!bVar2 * local_140._12_4_;
        bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
        local_140._16_4_ = (uint)bVar2 * auVar58._16_4_ | (uint)!bVar2 * local_140._16_4_;
        bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
        local_140._20_4_ = (uint)bVar2 * auVar58._20_4_ | (uint)!bVar2 * local_140._20_4_;
        bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
        local_140._24_4_ = (uint)bVar2 * auVar58._24_4_ | (uint)!bVar2 * local_140._24_4_;
        bVar2 = SUB81(uVar41 >> 7,0);
        local_140._28_4_ = (uint)bVar2 * auVar58._28_4_ | (uint)!bVar2 * local_140._28_4_;
        local_120._0_4_ =
             (uint)(bVar40 & 1) * auVar52._0_4_ | (uint)!(bool)(bVar40 & 1) * local_120._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        local_120._4_4_ = (uint)bVar2 * auVar52._4_4_ | (uint)!bVar2 * local_120._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        local_120._8_4_ = (uint)bVar2 * auVar52._8_4_ | (uint)!bVar2 * local_120._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        local_120._12_4_ = (uint)bVar2 * auVar52._12_4_ | (uint)!bVar2 * local_120._12_4_;
        bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
        local_120._16_4_ = (uint)bVar2 * auVar52._16_4_ | (uint)!bVar2 * local_120._16_4_;
        bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
        local_120._20_4_ = (uint)bVar2 * auVar52._20_4_ | (uint)!bVar2 * local_120._20_4_;
        bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
        local_120._24_4_ = (uint)bVar2 * auVar52._24_4_ | (uint)!bVar2 * local_120._24_4_;
        bVar2 = SUB81(uVar41 >> 7,0);
        local_120._28_4_ = (uint)bVar2 * auVar52._28_4_ | (uint)!bVar2 * local_120._28_4_;
        auVar50 = vsubps_avx512vl(local_160,auVar54);
        auVar51 = vsubps_avx512vl(local_140,auVar59);
        auVar59 = vsubps_avx512vl(local_120,auVar53);
        auVar49 = vfnmadd231ps_avx512vl(auVar50,auVar106,auVar49);
        auVar52._0_4_ = -(param_5 * auVar48._0_4_) + auVar51._0_4_;
        auVar52._4_4_ = -(param_5 * auVar48._4_4_) + auVar51._4_4_;
        auVar52._8_4_ = -(param_5 * auVar48._8_4_) + auVar51._8_4_;
        auVar52._12_4_ = -(param_5 * auVar48._12_4_) + auVar51._12_4_;
        auVar52._16_4_ = -(param_5 * auVar48._16_4_) + auVar51._16_4_;
        auVar52._20_4_ = -(param_5 * auVar48._20_4_) + auVar51._20_4_;
        auVar52._24_4_ = -(param_5 * auVar48._24_4_) + auVar51._24_4_;
        auVar52._28_4_ = -(param_5 * auVar48._28_4_) + auVar51._28_4_;
        auVar50._0_4_ = -(param_5 * auVar56._0_4_) + auVar59._0_4_;
        auVar50._4_4_ = -(param_5 * auVar56._4_4_) + auVar59._4_4_;
        auVar50._8_4_ = -(param_5 * auVar56._8_4_) + auVar59._8_4_;
        auVar50._12_4_ = -(param_5 * auVar56._12_4_) + auVar59._12_4_;
        auVar50._16_4_ = -(param_5 * auVar56._16_4_) + auVar59._16_4_;
        auVar50._20_4_ = -(param_5 * auVar56._20_4_) + auVar59._20_4_;
        auVar50._24_4_ = -(param_5 * auVar56._24_4_) + auVar59._24_4_;
        auVar50._28_4_ = -(param_5 * auVar56._28_4_) + auVar59._28_4_;
        auVar48 = vfnmadd213ps_avx512vl(auVar49,auVar72,local_160);
        auVar49 = vfnmadd213ps_avx512vl(auVar52,auVar72,local_140);
        auVar50 = vfnmadd213ps_avx512vl(auVar50,auVar72,local_120);
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar41 >> 2) & 1);
        bVar4 = (bool)((byte)(uVar41 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar41 >> 5) & 1);
        bVar15 = (bool)((byte)(uVar41 >> 6) & 1);
        bVar19 = SUB81(uVar41 >> 7,0);
        local_160._4_4_ = (uint)bVar2 * auVar48._4_4_ | (uint)!bVar2 * local_160._4_4_;
        local_160._0_4_ =
             (uint)(bVar40 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar40 & 1) * local_160._0_4_;
        local_160._8_4_ = (uint)bVar3 * auVar48._8_4_ | (uint)!bVar3 * local_160._8_4_;
        local_160._12_4_ = (uint)bVar4 * auVar48._12_4_ | (uint)!bVar4 * local_160._12_4_;
        local_160._16_4_ = (uint)bVar7 * auVar48._16_4_ | (uint)!bVar7 * local_160._16_4_;
        local_160._20_4_ = (uint)bVar11 * auVar48._20_4_ | (uint)!bVar11 * local_160._20_4_;
        local_160._24_4_ = (uint)bVar15 * auVar48._24_4_ | (uint)!bVar15 * local_160._24_4_;
        local_160._28_4_ = (uint)bVar19 * auVar48._28_4_ | (uint)!bVar19 * local_160._28_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar41 >> 2) & 1);
        bVar4 = (bool)((byte)(uVar41 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar41 >> 5) & 1);
        bVar15 = (bool)((byte)(uVar41 >> 6) & 1);
        bVar19 = SUB81(uVar41 >> 7,0);
        local_140._4_4_ = (uint)bVar2 * auVar49._4_4_ | (uint)!bVar2 * local_140._4_4_;
        local_140._0_4_ =
             (uint)(bVar40 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar40 & 1) * local_140._0_4_;
        local_140._8_4_ = (uint)bVar3 * auVar49._8_4_ | (uint)!bVar3 * local_140._8_4_;
        local_140._12_4_ = (uint)bVar4 * auVar49._12_4_ | (uint)!bVar4 * local_140._12_4_;
        local_140._16_4_ = (uint)bVar7 * auVar49._16_4_ | (uint)!bVar7 * local_140._16_4_;
        local_140._20_4_ = (uint)bVar11 * auVar49._20_4_ | (uint)!bVar11 * local_140._20_4_;
        local_140._24_4_ = (uint)bVar15 * auVar49._24_4_ | (uint)!bVar15 * local_140._24_4_;
        local_140._28_4_ = (uint)bVar19 * auVar49._28_4_ | (uint)!bVar19 * local_140._28_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar41 >> 2) & 1);
        bVar4 = (bool)((byte)(uVar41 >> 3) & 1);
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        bVar11 = (bool)((byte)(uVar41 >> 5) & 1);
        bVar15 = (bool)((byte)(uVar41 >> 6) & 1);
        bVar19 = SUB81(uVar41 >> 7,0);
        local_120._4_4_ = (uint)bVar2 * auVar50._4_4_ | (uint)!bVar2 * local_120._4_4_;
        local_120._0_4_ =
             (uint)(bVar40 & 1) * auVar50._0_4_ | (uint)!(bool)(bVar40 & 1) * local_120._0_4_;
        local_120._8_4_ = (uint)bVar3 * auVar50._8_4_ | (uint)!bVar3 * local_120._8_4_;
        local_120._12_4_ = (uint)bVar4 * auVar50._12_4_ | (uint)!bVar4 * local_120._12_4_;
        local_120._16_4_ = (uint)bVar7 * auVar50._16_4_ | (uint)!bVar7 * local_120._16_4_;
        local_120._20_4_ = (uint)bVar11 * auVar50._20_4_ | (uint)!bVar11 * local_120._20_4_;
        local_120._24_4_ = (uint)bVar15 * auVar50._24_4_ | (uint)!bVar15 * local_120._24_4_;
        local_120._28_4_ = (uint)bVar19 * auVar50._28_4_ | (uint)!bVar19 * local_120._28_4_;
        if (bVar40 == 0xff) {
          auVar48 = vunpcklps_avx512vl(local_160,local_140);
          auVar49 = vunpcklps_avx512vl(local_120,auVar47);
          auVar50 = vunpcklpd_avx512vl(auVar48,auVar49);
          auVar48 = vunpckhpd_avx512vl(auVar48,auVar49);
          auVar49 = vunpckhps_avx512vl(local_160,local_140);
          auVar47 = vunpckhps_avx512vl(local_120,auVar47);
          auVar51 = vunpcklpd_avx512vl(auVar49,auVar47);
          auVar47 = vunpckhpd_avx512vl(auVar49,auVar47);
          auVar49 = vinsertf32x4_avx512vl(auVar50,auVar48._0_16_,1);
          *pauVar34 = auVar49;
          auVar49 = vinsertf32x4_avx512vl(auVar51,auVar47._0_16_,1);
          pauVar34[1] = auVar49;
          auVar48 = vshuff64x2_avx512vl(auVar50,auVar48,3);
          pauVar34[2] = auVar48;
          auVar47 = vshuff64x2_avx512vl(auVar51,auVar47,3);
          pauVar34[3] = auVar47;
        }
        else {
          vscatterdps_avx512vl(ZEXT832(pauVar34) + auVar72,uVar41,local_160);
          vscatterdps_avx512vl(ZEXT832(pauVar34) + auVar106,uVar41,local_140);
          vscatterdps_avx512vl(ZEXT832(pauVar34) + auVar50,uVar41,local_120);
          vscatterdps_avx512vl(ZEXT832(pauVar34) + auVar49,uVar41,auVar47);
        }
      }
      pauVar39 = pauVar39 + 3;
      pauVar38 = pauVar38 + 3;
      unaff_RBX = unaff_RBX + 3;
      pauVar34 = pauVar34 + 4;
      uVar36 = (int)uVar37 + 8;
      uVar37 = (ulonglong)uVar36;
    } while ((int)uVar36 < (int)(uVar42 & 0xfffffff8));
  }
  if ((int)uVar37 < (int)param_8) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar60 = vpor_avx2(auVar60,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar61 = vpbroadcastd_avx512vl();
    uVar41 = vpcmpgtd_avx512vl(auVar61,auVar60);
    pauVar34 = (undefined1 (*) [32])(*param_1 + uVar37 * 0x10);
    bVar40 = (byte)uVar41;
    if (bVar40 == 0xff) {
      auVar61 = vshuff64x2_avx512vl(*pauVar34,pauVar34[2],0);
      auVar60 = vperm2f128_avx(*pauVar34,pauVar34[2],0x31);
      auVar62 = vshuff64x2_avx512vl(pauVar34[1],pauVar34[3],0);
      auVar71 = vshuff64x2_avx512vl(pauVar34[1],pauVar34[3],3);
      auVar72 = vunpcklps_avx512vl(auVar61,auVar60);
      auVar60 = vunpckhps_avx512vl(auVar61,auVar60);
      auVar61 = vunpcklps_avx512vl(auVar62,auVar71);
      auVar62 = vunpckhps_avx512vl(auVar62,auVar71);
      auVar107 = auVar62._0_16_;
      auVar47 = vunpcklpd_avx512vl(auVar72,auVar61);
      auVar51 = vunpckhpd_avx512vl(auVar72,auVar61);
      auVar61 = vunpcklpd_avx512vl(auVar60,auVar62);
      auVar60 = vunpckhpd_avx512vl(auVar60,auVar62);
    }
    else {
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + (longlong)*pauVar34));
      auVar47._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar60._4_4_;
      auVar47._0_4_ = (uint)(bVar40 & 1) * auVar60._0_4_;
      auVar47._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar60._8_4_;
      auVar47._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar60._12_4_;
      auVar47._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar60._16_4_;
      auVar47._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar60._20_4_;
      auVar47._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar60._24_4_;
      auVar47._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar60._28_4_;
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + (longlong)*pauVar34));
      auVar51._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar60._4_4_;
      auVar51._0_4_ = (uint)(bVar40 & 1) * auVar60._0_4_;
      auVar51._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar60._8_4_;
      auVar51._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar60._12_4_;
      auVar51._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar60._16_4_;
      auVar51._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar60._20_4_;
      auVar51._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar60._24_4_;
      auVar51._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar60._28_4_;
      auVar45 = vxorps_avx512vl(auVar45,auVar45);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + (longlong)*pauVar34));
      auVar61._0_4_ = (uint)(bVar40 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_
      ;
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      auVar61._4_4_ = (uint)bVar2 * auVar60._4_4_ | (uint)!bVar2 * auVar45._4_4_;
      bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
      auVar61._8_4_ = (uint)bVar2 * auVar60._8_4_ | (uint)!bVar2 * auVar45._8_4_;
      bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
      auVar61._12_4_ = (uint)bVar2 * auVar60._12_4_ | (uint)!bVar2 * auVar45._12_4_;
      auVar61._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar60._16_4_;
      auVar61._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar60._20_4_;
      auVar61._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar60._24_4_;
      auVar61._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar60._28_4_;
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar34 * 2));
      auVar60._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar62._4_4_;
      auVar60._0_4_ = (uint)(bVar40 & 1) * auVar62._0_4_;
      auVar60._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar62._8_4_;
      auVar60._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar62._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar62._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar62._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar62._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar62._28_4_;
    }
    uVar42 = (uint)(bVar40 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar40 & 1) * local_1c0;
    bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
    uVar73 = (uint)bVar2 * auVar47._4_4_ | (uint)!bVar2 * iStack_1bc;
    bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
    uVar77 = (uint)bVar2 * auVar47._8_4_ | (uint)!bVar2 * iStack_1b8;
    bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
    uVar81 = (uint)bVar2 * auVar47._12_4_ | (uint)!bVar2 * iStack_1b4;
    bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
    uVar85 = (uint)bVar2 * auVar47._16_4_ | (uint)!bVar2 * iStack_1b0;
    bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
    uVar89 = (uint)bVar2 * auVar47._20_4_ | (uint)!bVar2 * iStack_1ac;
    bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
    uVar93 = (uint)bVar2 * auVar47._24_4_ | (uint)!bVar2 * iStack_1a8;
    bVar2 = SUB81(uVar41 >> 7,0);
    uVar97 = (uint)bVar2 * auVar47._28_4_ | (uint)!bVar2 * iStack_1a4;
    uVar36 = (uint)(bVar40 & 1) * auVar51._0_4_ | (uint)!(bool)(bVar40 & 1) * local_1a0;
    bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
    uVar74 = (uint)bVar2 * auVar51._4_4_ | (uint)!bVar2 * iStack_19c;
    bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
    uVar78 = (uint)bVar2 * auVar51._8_4_ | (uint)!bVar2 * iStack_198;
    bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
    uVar82 = (uint)bVar2 * auVar51._12_4_ | (uint)!bVar2 * iStack_194;
    bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
    uVar86 = (uint)bVar2 * auVar51._16_4_ | (uint)!bVar2 * iStack_190;
    bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
    uVar90 = (uint)bVar2 * auVar51._20_4_ | (uint)!bVar2 * iStack_18c;
    bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
    uVar94 = (uint)bVar2 * auVar51._24_4_ | (uint)!bVar2 * iStack_188;
    bVar2 = SUB81(uVar41 >> 7,0);
    uVar98 = (uint)bVar2 * auVar51._28_4_ | (uint)!bVar2 * iStack_184;
    uVar43 = (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * local_180;
    bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
    uVar75 = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * iStack_17c;
    bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
    uVar79 = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * iStack_178;
    bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
    uVar83 = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * iStack_174;
    bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
    uVar87 = (uint)bVar2 * auVar61._16_4_ | (uint)!bVar2 * iStack_170;
    bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
    uVar91 = (uint)bVar2 * auVar61._20_4_ | (uint)!bVar2 * iStack_16c;
    bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
    uVar95 = (uint)bVar2 * auVar61._24_4_ | (uint)!bVar2 * iStack_168;
    bVar2 = SUB81(uVar41 >> 7,0);
    uVar99 = (uint)bVar2 * auVar61._28_4_ | (uint)!bVar2 * iStack_164;
    uVar23 = vcmpps_avx512vl(ZEXT832(0) << 0x20,auVar60,1);
    uVar41 = uVar41 & uVar23;
    bVar40 = (byte)uVar41;
    if (bVar40 != 0) {
      lVar24 = uVar37 * 3;
      pauVar38 = (undefined1 (*) [32])(*param_2 + uVar37 * 0xc);
      if (bVar40 == 0xff) {
        auVar61 = pauVar38[1];
        auVar62 = vblendps_avx(auVar61,*pauVar38,0x24);
        auVar71 = vpermt2ps_avx512vl(*pauVar38,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar63 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar38[2]);
        auVar61 = vpermt2ps_avx512vl(pauVar38[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar64 = vinsertf32x4_avx512vl(auVar71,auVar61._0_16_,1);
        auVar65 = vshuff64x2_avx512vl(auVar71,auVar61,3);
        lVar24 = uVar37 * 0xc;
        auVar61 = *(undefined1 (*) [32])(param_3[1] + lVar24);
        auVar62 = vblendps_avx(auVar61,*(undefined1 (*) [32])(*param_3 + lVar24),0x24);
        auVar71 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(*param_3 + lVar24),
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar66 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,*(undefined1 (*) [32])(param_3[2] + lVar24));
        auVar61 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3[2] + lVar24),
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar67 = vinsertf32x4_avx512vl(auVar71,auVar61._0_16_,1);
        auVar68 = vshuff64x2_avx512vl(auVar71,auVar61,3);
        auVar61 = *(undefined1 (*) [32])(param_4[1] + lVar24);
        auVar62 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,*(undefined1 (*) [32])(*param_4 + lVar24),auVar61);
        auVar71 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,*(undefined1 (*) [32])(param_4[2] + lVar24),auVar61);
        auVar69 = vinsertf32x4_avx512vl(auVar62,auVar71._0_16_,1);
        auVar62 = vshuff64x2_avx512vl(auVar62,auVar71,3);
        auVar61 = vblendps_avx(auVar61,*(undefined1 (*) [32])(*param_4 + lVar24),0x24);
        auVar70 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,*(undefined1 (*) [32])(param_4[2] + lVar24));
      }
      else {
        auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar34 + (longlong)*pauVar38));
        auVar64._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar62._4_4_;
        auVar64._0_4_ = (uint)(bVar40 & 1) * auVar62._0_4_;
        auVar64._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar62._8_4_;
        auVar64._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar62._12_4_;
        auVar64._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar62._16_4_;
        auVar64._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar62._20_4_;
        auVar64._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar62._24_4_;
        auVar64._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar62._28_4_;
        auVar45 = vxorps_avx512vl(auVar61._0_16_,auVar61._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar1 + (longlong)*pauVar38));
        auVar65._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar65._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar65._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar65._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar65._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar65._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar65._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar65._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar38 + lVar24));
        auVar63._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar61._4_4_;
        auVar63._0_4_ = (uint)(bVar40 & 1) * auVar61._0_4_;
        auVar63._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar61._8_4_;
        auVar63._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar61._12_4_;
        auVar63._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar63._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar63._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar63._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        puVar35 = *param_3 + uVar37 * 0xc;
        auVar45 = vxorps_avx512vl(auVar108,auVar108);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar34 + (longlong)puVar35));
        auVar67._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar67._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar67._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar67._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar67._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar67._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar67._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar67._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar45 = vxorps_avx512vl(auVar109,auVar109);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar1 + (longlong)puVar35));
        auVar68._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar68._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar68._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar68._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar68._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar68._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar68._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar68._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar35 + lVar24));
        auVar66._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar61._4_4_;
        auVar66._0_4_ = (uint)(bVar40 & 1) * auVar61._0_4_;
        auVar66._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar61._8_4_;
        auVar66._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar61._12_4_;
        auVar66._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar66._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar66._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar66._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        puVar35 = *param_4 + uVar37 * 0xc;
        auVar45 = vxorps_avx512vl(auVar107,auVar107);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar34 + (longlong)puVar35));
        auVar69._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar69._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar69._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar69._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar69._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar69._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar69._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar69._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar45 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar1 + (longlong)puVar35));
        auVar62._0_4_ =
             (uint)(bVar40 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar40 & 1) * auVar45._0_4_;
        bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar62._4_4_ = (uint)bVar2 * auVar61._4_4_ | (uint)!bVar2 * auVar45._4_4_;
        bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar62._8_4_ = (uint)bVar2 * auVar61._8_4_ | (uint)!bVar2 * auVar45._8_4_;
        bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar62._12_4_ = (uint)bVar2 * auVar61._12_4_ | (uint)!bVar2 * auVar45._12_4_;
        auVar62._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar62._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar62._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar62._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar35 + lVar24));
        auVar70._4_4_ = (uint)((byte)(uVar41 >> 1) & 1) * auVar61._4_4_;
        auVar70._0_4_ = (uint)(bVar40 & 1) * auVar61._0_4_;
        auVar70._8_4_ = (uint)((byte)(uVar41 >> 2) & 1) * auVar61._8_4_;
        auVar70._12_4_ = (uint)((byte)(uVar41 >> 3) & 1) * auVar61._12_4_;
        auVar70._16_4_ = (uint)((byte)(uVar41 >> 4) & 1) * auVar61._16_4_;
        auVar70._20_4_ = (uint)((byte)(uVar41 >> 5) & 1) * auVar61._20_4_;
        auVar70._24_4_ = (uint)((byte)(uVar41 >> 6) & 1) * auVar61._24_4_;
        auVar70._28_4_ = (uint)(byte)(uVar41 >> 7) * auVar61._28_4_;
      }
      auVar104._4_4_ = param_6;
      auVar104._0_4_ = param_6;
      auVar104._8_4_ = param_6;
      auVar104._12_4_ = param_6;
      auVar104._16_4_ = param_6;
      auVar104._20_4_ = param_6;
      auVar104._24_4_ = param_6;
      auVar104._28_4_ = param_6;
      auVar25._4_4_ = uVar73;
      auVar25._0_4_ = uVar42;
      auVar25._8_4_ = uVar77;
      auVar25._12_4_ = uVar81;
      auVar25._16_4_ = uVar85;
      auVar25._20_4_ = uVar89;
      auVar25._24_4_ = uVar93;
      auVar25._28_4_ = uVar97;
      auVar28._4_4_ = uVar74;
      auVar28._0_4_ = uVar36;
      auVar28._8_4_ = uVar78;
      auVar28._12_4_ = uVar82;
      auVar28._16_4_ = uVar86;
      auVar28._20_4_ = uVar90;
      auVar28._24_4_ = uVar94;
      auVar28._28_4_ = uVar98;
      auVar31._4_4_ = uVar75;
      auVar31._0_4_ = uVar43;
      auVar31._8_4_ = uVar79;
      auVar31._12_4_ = uVar83;
      auVar31._16_4_ = uVar87;
      auVar31._20_4_ = uVar91;
      auVar31._24_4_ = uVar95;
      auVar31._28_4_ = uVar99;
      auVar61 = vsubps_avx512vl(auVar25,auVar67);
      auVar71 = vsubps_avx512vl(auVar28,auVar68);
      auVar72 = vsubps_avx512vl(auVar31,auVar66);
      auVar61 = vfnmadd213ps_avx512vl(auVar61,auVar104,auVar25);
      auVar71 = vfnmadd213ps_avx512vl(auVar71,auVar104,auVar28);
      auVar72 = vfnmadd213ps_avx512vl(auVar72,auVar104,auVar31);
      fVar44 = (float)((uint)(bVar40 & 1) * auVar61._0_4_ | !(bool)(bVar40 & 1) * uVar42);
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      fVar76 = (float)((uint)bVar2 * auVar61._4_4_ | !bVar2 * uVar73);
      bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
      fVar80 = (float)((uint)bVar2 * auVar61._8_4_ | !bVar2 * uVar77);
      bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
      fVar84 = (float)((uint)bVar2 * auVar61._12_4_ | !bVar2 * uVar81);
      bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
      fVar88 = (float)((uint)bVar2 * auVar61._16_4_ | !bVar2 * uVar85);
      bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
      fVar92 = (float)((uint)bVar2 * auVar61._20_4_ | !bVar2 * uVar89);
      bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
      fVar96 = (float)((uint)bVar2 * auVar61._24_4_ | !bVar2 * uVar93);
      bVar2 = SUB81(uVar41 >> 7,0);
      fVar100 = (float)((uint)bVar2 * auVar61._28_4_ | !bVar2 * uVar97);
      uVar42 = (uint)(bVar40 & 1) * auVar71._0_4_ | !(bool)(bVar40 & 1) * uVar36;
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      uVar73 = (uint)bVar2 * auVar71._4_4_ | !bVar2 * uVar74;
      bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
      uVar74 = (uint)bVar2 * auVar71._8_4_ | !bVar2 * uVar78;
      bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
      uVar77 = (uint)bVar2 * auVar71._12_4_ | !bVar2 * uVar82;
      bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
      uVar81 = (uint)bVar2 * auVar71._16_4_ | !bVar2 * uVar86;
      bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
      uVar82 = (uint)bVar2 * auVar71._20_4_ | !bVar2 * uVar90;
      bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
      uVar85 = (uint)bVar2 * auVar71._24_4_ | !bVar2 * uVar94;
      bVar2 = SUB81(uVar41 >> 7,0);
      uVar89 = (uint)bVar2 * auVar71._28_4_ | !bVar2 * uVar98;
      uVar36 = (uint)(bVar40 & 1) * auVar72._0_4_ | !(bool)(bVar40 & 1) * uVar43;
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      uVar43 = (uint)bVar2 * auVar72._4_4_ | !bVar2 * uVar75;
      bVar2 = (bool)((byte)(uVar41 >> 2) & 1);
      uVar75 = (uint)bVar2 * auVar72._8_4_ | !bVar2 * uVar79;
      bVar2 = (bool)((byte)(uVar41 >> 3) & 1);
      uVar78 = (uint)bVar2 * auVar72._12_4_ | !bVar2 * uVar83;
      bVar2 = (bool)((byte)(uVar41 >> 4) & 1);
      uVar79 = (uint)bVar2 * auVar72._16_4_ | !bVar2 * uVar87;
      bVar2 = (bool)((byte)(uVar41 >> 5) & 1);
      uVar83 = (uint)bVar2 * auVar72._20_4_ | !bVar2 * uVar91;
      bVar2 = (bool)((byte)(uVar41 >> 6) & 1);
      uVar86 = (uint)bVar2 * auVar72._24_4_ | !bVar2 * uVar95;
      bVar2 = SUB81(uVar41 >> 7,0);
      uVar87 = (uint)bVar2 * auVar72._28_4_ | !bVar2 * uVar99;
      auVar26._4_4_ = fVar76;
      auVar26._0_4_ = fVar44;
      auVar26._8_4_ = fVar80;
      auVar26._12_4_ = fVar84;
      auVar26._16_4_ = fVar88;
      auVar26._20_4_ = fVar92;
      auVar26._24_4_ = fVar96;
      auVar26._28_4_ = fVar100;
      auVar29._4_4_ = uVar73;
      auVar29._0_4_ = uVar42;
      auVar29._8_4_ = uVar74;
      auVar29._12_4_ = uVar77;
      auVar29._16_4_ = uVar81;
      auVar29._20_4_ = uVar82;
      auVar29._24_4_ = uVar85;
      auVar29._28_4_ = uVar89;
      auVar32._4_4_ = uVar43;
      auVar32._0_4_ = uVar36;
      auVar32._8_4_ = uVar75;
      auVar32._12_4_ = uVar78;
      auVar32._16_4_ = uVar79;
      auVar32._20_4_ = uVar83;
      auVar32._24_4_ = uVar86;
      auVar32._28_4_ = uVar87;
      auVar61 = vsubps_avx(auVar26,auVar64);
      auVar71 = vsubps_avx512vl(auVar29,auVar65);
      auVar72 = vsubps_avx512vl(auVar32,auVar63);
      auVar101._4_4_ = param_7;
      auVar101._0_4_ = param_7;
      auVar101._8_4_ = param_7;
      auVar101._12_4_ = param_7;
      auVar101._16_4_ = param_7;
      auVar101._20_4_ = param_7;
      auVar101._24_4_ = param_7;
      auVar101._28_4_ = param_7;
      auVar102._4_4_ = param_5;
      auVar102._0_4_ = param_5;
      auVar102._8_4_ = param_5;
      auVar102._12_4_ = param_5;
      auVar102._16_4_ = param_5;
      auVar102._20_4_ = param_5;
      auVar102._24_4_ = param_5;
      auVar102._28_4_ = param_5;
      auVar61 = vfnmadd231ps_avx512vl(auVar61,auVar102,auVar69);
      auVar62 = vfnmadd231ps_avx512vl(auVar71,auVar102,auVar62);
      auVar105._0_4_ = -(param_5 * auVar70._0_4_) + auVar72._0_4_;
      auVar105._4_4_ = -(param_5 * auVar70._4_4_) + auVar72._4_4_;
      auVar105._8_4_ = -(param_5 * auVar70._8_4_) + auVar72._8_4_;
      auVar105._12_4_ = -(param_5 * auVar70._12_4_) + auVar72._12_4_;
      auVar105._16_4_ = -(param_5 * auVar70._16_4_) + auVar72._16_4_;
      auVar105._20_4_ = -(param_5 * auVar70._20_4_) + auVar72._20_4_;
      auVar105._24_4_ = -(param_5 * auVar70._24_4_) + auVar72._24_4_;
      auVar105._28_4_ = -(param_5 * auVar70._28_4_) + auVar72._28_4_;
      auVar62 = vfnmadd213ps_avx512vl(auVar62,auVar101,auVar29);
      auVar71 = vfnmadd213ps_avx512vl(auVar105,auVar101,auVar32);
      bVar2 = (bool)((byte)(uVar41 >> 1) & 1);
      bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
      bVar19 = (bool)((byte)(uVar41 >> 3) & 1);
      bVar8 = (bool)((byte)(uVar41 >> 4) & 1);
      bVar12 = (bool)((byte)(uVar41 >> 5) & 1);
      bVar16 = (bool)((byte)(uVar41 >> 6) & 1);
      bVar20 = SUB81(uVar41 >> 7,0);
      bVar3 = (bool)((byte)(uVar41 >> 1) & 1);
      bVar11 = (bool)((byte)(uVar41 >> 2) & 1);
      bVar5 = (bool)((byte)(uVar41 >> 3) & 1);
      bVar9 = (bool)((byte)(uVar41 >> 4) & 1);
      bVar13 = (bool)((byte)(uVar41 >> 5) & 1);
      bVar17 = (bool)((byte)(uVar41 >> 6) & 1);
      bVar21 = SUB81(uVar41 >> 7,0);
      bVar4 = (bool)((byte)(uVar41 >> 1) & 1);
      bVar15 = (bool)((byte)(uVar41 >> 2) & 1);
      bVar6 = (bool)((byte)(uVar41 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar41 >> 4) & 1);
      bVar14 = (bool)((byte)(uVar41 >> 5) & 1);
      bVar18 = (bool)((byte)(uVar41 >> 6) & 1);
      bVar22 = SUB81(uVar41 >> 7,0);
      auVar27._4_4_ =
           (uint)bVar2 * (int)(-(param_7 * auVar61._4_4_) + fVar76) | (uint)!bVar2 * (int)fVar76;
      auVar27._0_4_ =
           (uint)(bVar40 & 1) * (int)(-(param_7 * auVar61._0_4_) + fVar44) |
           (uint)!(bool)(bVar40 & 1) * (int)fVar44;
      auVar27._8_4_ =
           (uint)bVar7 * (int)(-(param_7 * auVar61._8_4_) + fVar80) | (uint)!bVar7 * (int)fVar80;
      auVar27._12_4_ =
           (uint)bVar19 * (int)(-(param_7 * auVar61._12_4_) + fVar84) | (uint)!bVar19 * (int)fVar84;
      auVar27._16_4_ =
           (uint)bVar8 * (int)(-(param_7 * auVar61._16_4_) + fVar88) | (uint)!bVar8 * (int)fVar88;
      auVar27._20_4_ =
           (uint)bVar12 * (int)(-(param_7 * auVar61._20_4_) + fVar92) | (uint)!bVar12 * (int)fVar92;
      auVar27._24_4_ =
           (uint)bVar16 * (int)(-(param_7 * auVar61._24_4_) + fVar96) | (uint)!bVar16 * (int)fVar96;
      auVar27._28_4_ =
           (uint)bVar20 * (int)(-(param_7 * auVar61._28_4_) + fVar100) |
           (uint)!bVar20 * (int)fVar100;
      auVar30._4_4_ = (uint)bVar3 * auVar62._4_4_ | !bVar3 * uVar73;
      auVar30._0_4_ = (uint)(bVar40 & 1) * auVar62._0_4_ | !(bool)(bVar40 & 1) * uVar42;
      auVar30._8_4_ = (uint)bVar11 * auVar62._8_4_ | !bVar11 * uVar74;
      auVar30._12_4_ = (uint)bVar5 * auVar62._12_4_ | !bVar5 * uVar77;
      auVar30._16_4_ = (uint)bVar9 * auVar62._16_4_ | !bVar9 * uVar81;
      auVar30._20_4_ = (uint)bVar13 * auVar62._20_4_ | !bVar13 * uVar82;
      auVar30._24_4_ = (uint)bVar17 * auVar62._24_4_ | !bVar17 * uVar85;
      auVar30._28_4_ = (uint)bVar21 * auVar62._28_4_ | !bVar21 * uVar89;
      auVar33._4_4_ = (uint)bVar4 * auVar71._4_4_ | !bVar4 * uVar43;
      auVar33._0_4_ = (uint)(bVar40 & 1) * auVar71._0_4_ | !(bool)(bVar40 & 1) * uVar36;
      auVar33._8_4_ = (uint)bVar15 * auVar71._8_4_ | !bVar15 * uVar75;
      auVar33._12_4_ = (uint)bVar6 * auVar71._12_4_ | !bVar6 * uVar78;
      auVar33._16_4_ = (uint)bVar10 * auVar71._16_4_ | !bVar10 * uVar79;
      auVar33._20_4_ = (uint)bVar14 * auVar71._20_4_ | !bVar14 * uVar83;
      auVar33._24_4_ = (uint)bVar18 * auVar71._24_4_ | !bVar18 * uVar86;
      auVar33._28_4_ = (uint)bVar22 * auVar71._28_4_ | !bVar22 * uVar87;
      if (bVar40 == 0xff) {
        auVar61 = vunpcklps_avx(auVar27,auVar30);
        auVar62 = vunpcklps_avx(auVar33,auVar60);
        auVar72 = vunpcklpd_avx512vl(auVar61,auVar62);
        auVar61 = vunpckhpd_avx(auVar61,auVar62);
        auVar62 = vunpckhps_avx(auVar27,auVar30);
        auVar60 = vunpckhps_avx(auVar33,auVar60);
        auVar71 = vunpcklpd_avx(auVar62,auVar60);
        auVar60 = vunpckhpd_avx(auVar62,auVar60);
        auVar62 = vinsertf32x4_avx512vl(auVar72,auVar61._0_16_,1);
        *pauVar34 = auVar62;
        auVar103._16_16_ = auVar60._0_16_;
        auVar103._0_16_ = auVar71._0_16_;
        pauVar34[1] = auVar103;
        auVar61 = vshuff64x2_avx512vl(auVar72,auVar61,3);
        pauVar34[2] = auVar61;
        auVar60 = vperm2f128_avx(auVar71,auVar60,0x31);
        pauVar34[3] = auVar60;
      }
      else {
        vscatterdps_avx512vl
                  (ZEXT832(pauVar34) +
                   ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                   auVar27);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar34) +
                   ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                   auVar30);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar34) +
                   ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                   auVar33);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar34) +
                   ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                   auVar60);
      }
    }
  }
  return;
}

// ApplyMultiResConstraintsWithWeightMaps_avx512skx @ 14059c5a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraintsWithWeightMaps_avx512skx
               (undefined1 (*param_1) [32],longlong param_2,longlong param_3,longlong param_4,
               float param_5,byte param_6,undefined1 (*param_7) [16],undefined4 *param_8,
               byte param_9,longlong param_10,undefined4 *param_11,uint param_12)

{
  float fVar1;
  longlong lVar9;
  undefined1 (*pauVar10) [32];
  undefined1 *puVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  ulonglong uVar33;
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 (*pauVar43) [32];
  undefined1 (*unaff_RBX) [16];
  longlong lVar44;
  ulonglong uVar45;
  byte bVar46;
  ulonglong uVar47;
  undefined1 auVar53 [16];
  uint uVar49;
  uint uVar50;
  uint uVar87;
  uint uVar88;
  uint uVar91;
  uint uVar92;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar48;
  float fVar51;
  uint uVar86;
  float fVar89;
  uint uVar90;
  float fVar93;
  undefined1 auVar52 [16];
  float fVar97;
  uint uVar98;
  float fVar101;
  uint uVar102;
  float fVar105;
  uint uVar106;
  float fVar109;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar58 [16];
  undefined1 auVar75 [32];
  uint uVar99;
  uint uVar100;
  uint uVar103;
  uint uVar104;
  uint uVar107;
  uint uVar108;
  uint uVar110;
  uint uVar111;
  uint uVar112;
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
  float fVar113;
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 in_ZMM6 [64];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar117 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar118 [16];
  undefined1 in_ZMM19 [64];
  undefined1 in_ZMM20 [64];
  undefined1 auVar119 [16];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar68 [32];
  
  auVar85 = ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
  auVar84 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar74 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar73 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar58 = in_ZMM16._0_16_;
  auVar118 = in_ZMM19._0_16_;
  auVar52 = in_ZMM20._0_16_;
  auVar117 = in_ZMM18._0_16_;
  puVar11 = local_140 + 8;
  local_68 = in_ZMM12._0_16_;
  local_78 = in_ZMM11._0_16_;
  local_88 = in_ZMM10._0_16_;
  local_98 = in_ZMM9._0_16_;
  local_a8 = in_ZMM8._0_16_;
  local_b8 = in_ZMM7._0_16_;
  local_c8 = in_ZMM6._0_16_;
  uVar48 = param_12 + 7;
  if (-1 < (int)param_12) {
    uVar48 = param_12;
  }
  if ((int)(uVar48 & 0xfffffff8) < 1) {
    uVar45 = 0;
    if ((int)param_12 < 1) {
      return;
    }
  }
  else {
    auVar75._4_4_ = param_5;
    auVar75._0_4_ = param_5;
    auVar75._8_4_ = param_5;
    auVar75._12_4_ = param_5;
    auVar75._16_4_ = param_5;
    auVar75._20_4_ = param_5;
    auVar75._24_4_ = param_5;
    auVar75._28_4_ = param_5;
    lVar44 = 0;
    auVar58 = __ymm_0000007400000064000000540000004400000034000000240000001400000004._0_16_;
    auVar117 = __ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c._0_16_;
    auVar118 = __ymm_00000054000000480000003c0000003000000024000000180000000c00000000._0_16_;
    auVar52 = vxorps_avx512vl(auVar52,auVar52);
    uVar45 = 0;
    pauVar43 = param_1;
    do {
      auVar59 = vshuff64x2_avx512vl(*pauVar43,pauVar43[2],0);
      auVar60 = vshuff64x2_avx512vl(*pauVar43,pauVar43[2],3);
      auVar61 = vshuff64x2_avx512vl(pauVar43[1],pauVar43[3],0);
      auVar62 = vshuff64x2_avx512vl(pauVar43[1],pauVar43[3],3);
      auVar63 = vunpcklps_avx512vl(auVar59,auVar60);
      auVar59 = vunpckhps_avx512vl(auVar59,auVar60);
      auVar60 = vunpcklps_avx512vl(auVar61,auVar62);
      auVar61 = vunpckhps_avx512vl(auVar61,auVar62);
      auVar62 = vunpcklpd_avx512vl(auVar63,auVar60);
      local_120 = vunpckhpd_avx512vl(auVar63,auVar60);
      local_100 = vunpcklpd_avx512vl(auVar59,auVar61);
      auVar59 = vunpckhpd_avx512vl(auVar59,auVar61);
      uVar47 = vcmpps_avx512vl(ZEXT1632(auVar52),auVar59,1);
      bVar46 = (byte)uVar47;
      if (bVar46 != 0) {
        auVar53 = vxorpd_avx512vl(auVar60._0_16_,auVar60._0_16_);
        auVar54 = vxorpd_avx512vl(auVar63._0_16_,auVar63._0_16_);
        if ((param_6 & 1) == 0) {
joined_r0x00014059c8cc:
          auVar55 = auVar54;
          if ((param_9 & 1) == 0) goto joined_r0x00014059c8f4;
LAB_14059c8d2:
          unaff_RBX = (undefined1 (*) [16])(param_10 + uVar45);
          if ((~bVar46 & 0x81) != 0) {
            auVar55 = vmovdqu8_avx512vl(*unaff_RBX);
            auVar53[1] = ((byte)(uVar47 >> 1) & 1) * auVar55[1];
            auVar53[0] = (bVar46 & 1) * auVar55[0];
            auVar53[2] = ((byte)(uVar47 >> 2) & 1) * auVar55[2];
            auVar53[3] = ((byte)(uVar47 >> 3) & 1) * auVar55[3];
            auVar53[4] = ((byte)(uVar47 >> 4) & 1) * auVar55[4];
            auVar53[5] = ((byte)(uVar47 >> 5) & 1) * auVar55[5];
            auVar53[6] = ((byte)(uVar47 >> 6) & 1) * auVar55[6];
            auVar53[7] = (char)(uVar47 >> 7) * auVar55[7];
            auVar53._8_8_ = 0;
            auVar55 = auVar54;
            goto joined_r0x00014059c8f4;
          }
          auVar119._8_8_ = 0;
          auVar119._0_8_ = *(ulonglong *)*unaff_RBX;
          auVar53._8_8_ = 0;
          auVar53._0_8_ = *(ulonglong *)*unaff_RBX;
          if (bVar46 != 0xff) goto LAB_14059c7f1;
LAB_14059c8fa:
          auVar53 = auVar119;
          auVar60 = *(undefined1 (*) [32])(param_2 + 0x20 + lVar44);
          auVar61 = *(undefined1 (*) [32])(param_2 + 0x40 + lVar44);
          auVar63 = vblendps_avx(auVar60,*(undefined1 (*) [32])(param_2 + lVar44),0x24);
          auVar64 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar44),auVar73,auVar60);
          auVar72 = vpermt2ps_avx512vl(auVar63,auVar84,auVar61);
          auVar60 = vpermt2ps_avx512vl(auVar61,auVar74,auVar60);
          auVar65 = vinsertf32x4_avx512vl(auVar64,auVar60._0_16_,1);
          auVar66 = vshuff64x2_avx512vl(auVar64,auVar60,3);
          auVar60 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar44);
          auVar61 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar44);
          auVar63 = vblendps_avx(auVar60,*(undefined1 (*) [32])(param_3 + lVar44),0x24);
          auVar64 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar44),auVar73,auVar60);
          auVar71 = vpermt2ps_avx512vl(auVar63,auVar84,auVar61);
          auVar60 = vpermt2ps_avx512vl(auVar61,auVar74,auVar60);
          auVar70 = vinsertf32x4_avx512vl(auVar64,auVar60._0_16_,1);
          auVar60 = vperm2f128_avx(auVar64,auVar60,0x31);
          auVar61 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar44);
          auVar63 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar44);
          auVar64 = vblendps_avx(auVar61,*(undefined1 (*) [32])(param_4 + lVar44),0x24);
          auVar68 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_4 + lVar44),auVar73,auVar61);
          auVar67 = vpermt2ps_avx512vl(auVar64,auVar84,auVar63);
          auVar61 = vpermt2ps_avx512vl(auVar63,auVar74,auVar61);
          auVar63._16_16_ = auVar61._0_16_;
          auVar63._0_16_ = auVar68._0_16_;
          auVar61 = vperm2f128_avx(auVar68,auVar61,0x31);
        }
        else {
          unaff_RBX = (undefined1 (*) [16])(*param_7 + uVar45);
          if ((~bVar46 & 0x81) != 0) {
            auVar55 = vmovdqu8_avx512vl(*unaff_RBX);
            auVar54[1] = ((byte)(uVar47 >> 1) & 1) * auVar55[1];
            auVar54[0] = (bVar46 & 1) * auVar55[0];
            auVar54[2] = ((byte)(uVar47 >> 2) & 1) * auVar55[2];
            auVar54[3] = ((byte)(uVar47 >> 3) & 1) * auVar55[3];
            auVar54[4] = ((byte)(uVar47 >> 4) & 1) * auVar55[4];
            auVar54[5] = ((byte)(uVar47 >> 5) & 1) * auVar55[5];
            auVar54[6] = ((byte)(uVar47 >> 6) & 1) * auVar55[6];
            auVar54[7] = (char)(uVar47 >> 7) * auVar55[7];
            auVar54._8_8_ = 0;
            goto joined_r0x00014059c8cc;
          }
          auVar54._8_8_ = 0;
          auVar54._0_8_ = *(ulonglong *)*unaff_RBX;
          auVar55._8_8_ = 0;
          auVar55._0_8_ = *(ulonglong *)*unaff_RBX;
          if ((param_9 & 1) != 0) goto LAB_14059c8d2;
joined_r0x00014059c8f4:
          auVar54 = auVar55;
          auVar119 = auVar53;
          if (bVar46 == 0xff) goto LAB_14059c8fa;
LAB_14059c7f1:
          lVar9 = param_2 + lVar44;
          auVar55 = vxorpd_avx512vl(auVar61._0_16_,auVar61._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*unaff_RBX + lVar9));
          auVar65._0_4_ =
               (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar55._0_4_;
          bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar65._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * auVar55._4_4_;
          bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar65._8_4_ = (uint)bVar12 * auVar60._8_4_ | (uint)!bVar12 * auVar55._8_4_;
          bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar65._12_4_ = (uint)bVar12 * auVar60._12_4_ | (uint)!bVar12 * auVar55._12_4_;
          auVar65._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar60._16_4_;
          auVar65._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar60._20_4_;
          auVar65._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar60._24_4_;
          auVar65._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar60._28_4_;
          auVar55 = vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + lVar9));
          auVar66._0_4_ =
               (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar55._0_4_;
          bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar66._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * auVar55._4_4_;
          bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar66._8_4_ = (uint)bVar12 * auVar60._8_4_ | (uint)!bVar12 * auVar55._8_4_;
          bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar66._12_4_ = (uint)bVar12 * auVar60._12_4_ | (uint)!bVar12 * auVar55._12_4_;
          auVar66._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar60._16_4_;
          auVar66._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar60._20_4_;
          auVar66._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar60._24_4_;
          auVar66._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar60._28_4_;
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + lVar9));
          auVar72._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar60._4_4_;
          auVar72._0_4_ = (uint)(bVar46 & 1) * auVar60._0_4_;
          auVar72._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar60._8_4_;
          auVar72._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar60._12_4_;
          auVar72._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar60._16_4_;
          auVar72._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar60._20_4_;
          auVar72._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar60._24_4_;
          auVar72._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar60._28_4_;
          lVar9 = param_3 + lVar44;
          auVar55 = vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
          auVar60 = vgatherdps_avx512vl(*(undefined4 *)(lVar9 * 2));
          auVar70._0_4_ =
               (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar55._0_4_;
          bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
          auVar70._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * auVar55._4_4_;
          bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
          auVar70._8_4_ = (uint)bVar12 * auVar60._8_4_ | (uint)!bVar12 * auVar55._8_4_;
          bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
          auVar70._12_4_ = (uint)bVar12 * auVar60._12_4_ | (uint)!bVar12 * auVar55._12_4_;
          auVar70._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar60._16_4_;
          auVar70._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar60._20_4_;
          auVar70._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar60._24_4_;
          auVar70._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar60._28_4_;
          auVar61 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + lVar9));
          auVar60._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar61._4_4_;
          auVar60._0_4_ = (uint)(bVar46 & 1) * auVar61._0_4_;
          auVar60._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar61._8_4_;
          auVar60._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar61._12_4_;
          auVar60._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar61._16_4_;
          auVar60._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar61._20_4_;
          auVar60._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar61._24_4_;
          auVar60._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar61._28_4_;
          auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + lVar9));
          auVar71._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar61._4_4_;
          auVar71._0_4_ = (uint)(bVar46 & 1) * auVar61._0_4_;
          auVar71._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar61._8_4_;
          auVar71._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar61._12_4_;
          auVar71._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar61._16_4_;
          auVar71._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar61._20_4_;
          auVar71._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar61._24_4_;
          auVar71._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar61._28_4_;
          unaff_RBX = (undefined1 (*) [16])(param_4 + lVar44);
          auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)unaff_RBX * 2));
          auVar63._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar61._4_4_;
          auVar63._0_4_ = (uint)(bVar46 & 1) * auVar61._0_4_;
          auVar63._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar61._8_4_;
          auVar63._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar61._12_4_;
          auVar63._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar61._16_4_;
          auVar63._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar61._20_4_;
          auVar63._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar61._24_4_;
          auVar63._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar61._28_4_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + (longlong)*unaff_RBX));
          auVar61._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar64._4_4_;
          auVar61._0_4_ = (uint)(bVar46 & 1) * auVar64._0_4_;
          auVar61._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar64._8_4_;
          auVar61._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar64._12_4_;
          auVar61._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar64._16_4_;
          auVar61._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar64._20_4_;
          auVar61._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar64._24_4_;
          auVar61._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar64._28_4_;
          auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + (longlong)*unaff_RBX));
          auVar67._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar64._4_4_;
          auVar67._0_4_ = (uint)(bVar46 & 1) * auVar64._0_4_;
          auVar67._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar64._8_4_;
          auVar67._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar64._12_4_;
          auVar67._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar64._16_4_;
          auVar67._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar64._20_4_;
          auVar67._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar64._24_4_;
          auVar67._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar64._28_4_;
        }
        auVar64 = vpmovsxbd_avx512vl(auVar54);
        auVar64 = vpslld_avx512vl(auVar64,2);
        auVar68 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_8 + (longlong)local_120));
        auVar69._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar68._4_4_;
        auVar69._0_4_ = (uint)(bVar46 & 1) * auVar68._0_4_;
        auVar69._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar68._8_4_;
        auVar69._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar68._12_4_;
        auVar69._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar68._16_4_;
        auVar69._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar68._20_4_;
        auVar69._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar68._24_4_;
        auVar69._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar68._28_4_;
        auVar68 = vpmovsxbd_avx512vl(auVar53);
        vpslld_avx512vl(auVar68,2);
        auVar54 = vxorps_avx512vl(auVar64._0_16_,auVar64._0_16_);
        auVar68 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_11 + param_10));
        auVar64._0_4_ =
             (uint)(bVar46 & 1) * auVar68._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar54._0_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        auVar64._4_4_ = (uint)bVar12 * auVar68._4_4_ | (uint)!bVar12 * auVar54._4_4_;
        bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
        auVar64._8_4_ = (uint)bVar12 * auVar68._8_4_ | (uint)!bVar12 * auVar54._8_4_;
        bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
        auVar64._12_4_ = (uint)bVar12 * auVar68._12_4_ | (uint)!bVar12 * auVar54._12_4_;
        auVar64._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar68._16_4_;
        auVar64._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar68._20_4_;
        auVar64._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar68._24_4_;
        auVar64._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar68._28_4_;
        auVar70 = vsubps_avx512vl(auVar62,auVar70);
        auVar60 = vsubps_avx512vl(local_120,auVar60);
        auVar71 = vsubps_avx512vl(local_100,auVar71);
        auVar70 = vfnmadd213ps_avx512vl(auVar70,auVar69,auVar62);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar69,local_120);
        in_ZMM31 = ZEXT3264(auVar60);
        auVar71 = vfnmadd213ps_avx512vl(auVar71,auVar69,local_100);
        local_140._0_4_ = auVar62._0_4_;
        local_140._4_4_ = auVar62._4_4_;
        local_140._8_4_ = auVar62._8_4_;
        local_140._12_4_ = auVar62._12_4_;
        local_140._16_4_ = auVar62._16_4_;
        local_140._20_4_ = auVar62._20_4_;
        local_140._24_4_ = auVar62._24_4_;
        local_140._28_4_ = auVar62._28_4_;
        local_140._0_4_ =
             (uint)(bVar46 & 1) * auVar70._0_4_ | (uint)!(bool)(bVar46 & 1) * local_140._0_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        local_140._4_4_ = (uint)bVar12 * auVar70._4_4_ | (uint)!bVar12 * local_140._4_4_;
        bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
        local_140._8_4_ = (uint)bVar12 * auVar70._8_4_ | (uint)!bVar12 * local_140._8_4_;
        bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
        local_140._12_4_ = (uint)bVar12 * auVar70._12_4_ | (uint)!bVar12 * local_140._12_4_;
        bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
        local_140._16_4_ = (uint)bVar12 * auVar70._16_4_ | (uint)!bVar12 * local_140._16_4_;
        bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
        local_140._20_4_ = (uint)bVar12 * auVar70._20_4_ | (uint)!bVar12 * local_140._20_4_;
        bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
        local_140._24_4_ = (uint)bVar12 * auVar70._24_4_ | (uint)!bVar12 * local_140._24_4_;
        bVar12 = SUB81(uVar47 >> 7,0);
        local_140._28_4_ = (uint)bVar12 * auVar70._28_4_ | (uint)!bVar12 * local_140._28_4_;
        local_120._0_4_ =
             (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * local_120._0_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        local_120._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * local_120._4_4_;
        bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
        local_120._8_4_ = (uint)bVar12 * auVar60._8_4_ | (uint)!bVar12 * local_120._8_4_;
        bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
        local_120._12_4_ = (uint)bVar12 * auVar60._12_4_ | (uint)!bVar12 * local_120._12_4_;
        bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
        local_120._16_4_ = (uint)bVar12 * auVar60._16_4_ | (uint)!bVar12 * local_120._16_4_;
        bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
        local_120._20_4_ = (uint)bVar12 * auVar60._20_4_ | (uint)!bVar12 * local_120._20_4_;
        bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
        local_120._24_4_ = (uint)bVar12 * auVar60._24_4_ | (uint)!bVar12 * local_120._24_4_;
        bVar12 = SUB81(uVar47 >> 7,0);
        local_120._28_4_ = (uint)bVar12 * auVar60._28_4_ | (uint)!bVar12 * local_120._28_4_;
        local_100._0_4_ =
             (uint)(bVar46 & 1) * auVar71._0_4_ | (uint)!(bool)(bVar46 & 1) * local_100._0_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        local_100._4_4_ = (uint)bVar12 * auVar71._4_4_ | (uint)!bVar12 * local_100._4_4_;
        bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
        local_100._8_4_ = (uint)bVar12 * auVar71._8_4_ | (uint)!bVar12 * local_100._8_4_;
        bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
        local_100._12_4_ = (uint)bVar12 * auVar71._12_4_ | (uint)!bVar12 * local_100._12_4_;
        bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
        local_100._16_4_ = (uint)bVar12 * auVar71._16_4_ | (uint)!bVar12 * local_100._16_4_;
        bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
        local_100._20_4_ = (uint)bVar12 * auVar71._20_4_ | (uint)!bVar12 * local_100._20_4_;
        bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
        local_100._24_4_ = (uint)bVar12 * auVar71._24_4_ | (uint)!bVar12 * local_100._24_4_;
        bVar12 = SUB81(uVar47 >> 7,0);
        local_100._28_4_ = (uint)bVar12 * auVar71._28_4_ | (uint)!bVar12 * local_100._28_4_;
        auVar60 = vsubps_avx512vl(local_140,auVar65);
        auVar62 = vsubps_avx512vl(local_120,auVar66);
        auVar72 = vsubps_avx512vl(local_100,auVar72);
        auVar60 = vfnmadd231ps_avx512vl(auVar60,auVar75,auVar63);
        auVar61 = vfnmadd231ps_avx512vl(auVar62,auVar75,auVar61);
        auVar62 = vfnmadd231ps_avx512vl(auVar72,auVar75,auVar67);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar64,local_140);
        auVar61 = vfnmadd213ps_avx512vl(auVar61,auVar64,local_120);
        auVar62 = vfnmadd213ps_avx512vl(auVar62,auVar64,local_100);
        in_ZMM30 = ZEXT3264(auVar62);
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar13 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar14 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar21 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar25 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar29 = SUB81(uVar47 >> 7,0);
        local_140._4_4_ = (uint)bVar12 * auVar60._4_4_ | (uint)!bVar12 * local_140._4_4_;
        local_140._0_4_ =
             (uint)(bVar46 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar46 & 1) * local_140._0_4_;
        local_140._8_4_ = (uint)bVar13 * auVar60._8_4_ | (uint)!bVar13 * local_140._8_4_;
        local_140._12_4_ = (uint)bVar14 * auVar60._12_4_ | (uint)!bVar14 * local_140._12_4_;
        local_140._16_4_ = (uint)bVar17 * auVar60._16_4_ | (uint)!bVar17 * local_140._16_4_;
        local_140._20_4_ = (uint)bVar21 * auVar60._20_4_ | (uint)!bVar21 * local_140._20_4_;
        local_140._24_4_ = (uint)bVar25 * auVar60._24_4_ | (uint)!bVar25 * local_140._24_4_;
        local_140._28_4_ = (uint)bVar29 * auVar60._28_4_ | (uint)!bVar29 * local_140._28_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar13 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar14 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar21 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar25 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar29 = SUB81(uVar47 >> 7,0);
        local_120._4_4_ = (uint)bVar12 * auVar61._4_4_ | (uint)!bVar12 * local_120._4_4_;
        local_120._0_4_ =
             (uint)(bVar46 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar46 & 1) * local_120._0_4_;
        local_120._8_4_ = (uint)bVar13 * auVar61._8_4_ | (uint)!bVar13 * local_120._8_4_;
        local_120._12_4_ = (uint)bVar14 * auVar61._12_4_ | (uint)!bVar14 * local_120._12_4_;
        local_120._16_4_ = (uint)bVar17 * auVar61._16_4_ | (uint)!bVar17 * local_120._16_4_;
        local_120._20_4_ = (uint)bVar21 * auVar61._20_4_ | (uint)!bVar21 * local_120._20_4_;
        local_120._24_4_ = (uint)bVar25 * auVar61._24_4_ | (uint)!bVar25 * local_120._24_4_;
        local_120._28_4_ = (uint)bVar29 * auVar61._28_4_ | (uint)!bVar29 * local_120._28_4_;
        bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
        bVar13 = (bool)((byte)(uVar47 >> 2) & 1);
        bVar14 = (bool)((byte)(uVar47 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar47 >> 4) & 1);
        bVar21 = (bool)((byte)(uVar47 >> 5) & 1);
        bVar25 = (bool)((byte)(uVar47 >> 6) & 1);
        bVar29 = SUB81(uVar47 >> 7,0);
        local_100._4_4_ = (uint)bVar12 * auVar62._4_4_ | (uint)!bVar12 * local_100._4_4_;
        local_100._0_4_ =
             (uint)(bVar46 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar46 & 1) * local_100._0_4_;
        local_100._8_4_ = (uint)bVar13 * auVar62._8_4_ | (uint)!bVar13 * local_100._8_4_;
        local_100._12_4_ = (uint)bVar14 * auVar62._12_4_ | (uint)!bVar14 * local_100._12_4_;
        local_100._16_4_ = (uint)bVar17 * auVar62._16_4_ | (uint)!bVar17 * local_100._16_4_;
        local_100._20_4_ = (uint)bVar21 * auVar62._20_4_ | (uint)!bVar21 * local_100._20_4_;
        local_100._24_4_ = (uint)bVar25 * auVar62._24_4_ | (uint)!bVar25 * local_100._24_4_;
        local_100._28_4_ = (uint)bVar29 * auVar62._28_4_ | (uint)!bVar29 * local_100._28_4_;
        if (bVar46 == 0xff) {
          auVar60 = vunpcklps_avx512vl(local_140,local_120);
          auVar61 = vunpcklps_avx512vl(local_100,auVar59);
          auVar62 = vunpcklpd_avx512vl(auVar60,auVar61);
          auVar60 = vunpckhpd_avx512vl(auVar60,auVar61);
          auVar61 = vunpckhps_avx512vl(local_140,local_120);
          auVar59 = vunpckhps_avx512vl(local_100,auVar59);
          auVar63 = vunpcklpd_avx512vl(auVar61,auVar59);
          auVar59 = vunpckhpd_avx512vl(auVar61,auVar59);
          auVar61 = vinsertf32x4_avx512vl(auVar62,auVar60._0_16_,1);
          *pauVar43 = auVar61;
          auVar61 = vinsertf32x4_avx512vl(auVar63,auVar59._0_16_,1);
          pauVar43[1] = auVar61;
          auVar60 = vshuff64x2_avx512vl(auVar62,auVar60,3);
          pauVar43[2] = auVar60;
          auVar59 = vshuff64x2_avx512vl(auVar63,auVar59,3);
          pauVar43[3] = auVar59;
        }
        else {
          vscatterdps_avx512vl(ZEXT832(pauVar43) + auVar85,uVar47,local_140);
          vscatterdps_avx512vl(ZEXT832(pauVar43) + ZEXT432((uint)param_5),uVar47,local_120);
          vscatterdps_avx512vl(ZEXT832(pauVar43) + auVar75,uVar47,local_100);
          vscatterdps_avx512vl(ZEXT832(pauVar43) + auVar73,uVar47,auVar59);
        }
      }
      uVar45 = uVar45 + 8;
      lVar44 = lVar44 + 0x60;
      pauVar43 = pauVar43 + 4;
    } while ((int)uVar45 < (int)(uVar48 & 0xfffffff8));
    if ((int)param_12 <= (int)uVar45) {
      return;
    }
  }
  auVar73 = vpbroadcastd_avx512vl();
  auVar73 = vpor_avx2(auVar73,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar74 = vpbroadcastd_avx512vl();
  uVar47 = vpcmpgtd_avx512vl(auVar74,auVar73);
  uVar45 = uVar45 & 0xffffffff;
  lVar44 = uVar45 * 0x10;
  pauVar43 = (undefined1 (*) [32])(*param_1 + lVar44);
  bVar46 = (byte)uVar47;
  if (bVar46 == 0xff) {
    auVar74 = vperm2f128_avx(*pauVar43,pauVar43[2],0x20);
    auVar84 = vperm2f128_avx(*pauVar43,pauVar43[2],0x31);
    auVar75 = vperm2f128_avx(pauVar43[1],pauVar43[3],0x20);
    auVar59 = vperm2f128_avx(pauVar43[1],pauVar43[3],0x31);
    auVar73 = vunpcklps_avx(auVar74,auVar84);
    auVar74 = vunpckhps_avx(auVar74,auVar84);
    auVar85 = vunpcklps_avx(auVar75,auVar59);
    auVar75 = vunpckhps_avx512vl(auVar75,auVar59);
    auVar58 = auVar75._0_16_;
    auVar84 = vunpcklpd_avx(auVar73,auVar85);
    auVar73 = vunpckhpd_avx(auVar73,auVar85);
    auVar85 = vunpcklpd_avx512vl(auVar74,auVar75);
    auVar74 = vunpckhpd_avx512vl(auVar74,auVar75);
  }
  else {
    auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar43 + lVar44));
    auVar84._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
    auVar84._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
    auVar84._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
    auVar84._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
    auVar84._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
    auVar84._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
    auVar84._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
    auVar84._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
    auVar74 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar43 + lVar44));
    auVar73._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar74._4_4_;
    auVar73._0_4_ = (uint)(bVar46 & 1) * auVar74._0_4_;
    auVar73._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar74._8_4_;
    auVar73._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar74._12_4_;
    auVar73._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar74._16_4_;
    auVar73._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar74._20_4_;
    auVar73._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar74._24_4_;
    auVar73._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar74._28_4_;
    auVar74 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar43 + lVar44));
    auVar85._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar74._4_4_;
    auVar85._0_4_ = (uint)(bVar46 & 1) * auVar74._0_4_;
    auVar85._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar74._8_4_;
    auVar85._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar74._12_4_;
    auVar85._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar74._16_4_;
    auVar85._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar74._20_4_;
    auVar85._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar74._24_4_;
    auVar85._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar74._28_4_;
    auVar75 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + (longlong)*pauVar43));
    auVar74._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar75._4_4_;
    auVar74._0_4_ = (uint)(bVar46 & 1) * auVar75._0_4_;
    auVar74._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar75._8_4_;
    auVar74._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar75._12_4_;
    auVar74._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar75._16_4_;
    auVar74._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar75._20_4_;
    auVar74._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar75._24_4_;
    auVar74._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar75._28_4_;
  }
  uVar48 = (uint)(bVar46 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar46 & 1) * local_1a0;
  bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
  uVar86 = (uint)bVar12 * auVar84._4_4_ | (uint)!bVar12 * iStack_19c;
  bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
  uVar90 = (uint)bVar12 * auVar84._8_4_ | (uint)!bVar12 * iStack_198;
  bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
  uVar94 = (uint)bVar12 * auVar84._12_4_ | (uint)!bVar12 * iStack_194;
  bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
  uVar98 = (uint)bVar12 * auVar84._16_4_ | (uint)!bVar12 * iStack_190;
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  uVar102 = (uint)bVar12 * auVar84._20_4_ | (uint)!bVar12 * iStack_18c;
  bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
  uVar106 = (uint)bVar12 * auVar84._24_4_ | (uint)!bVar12 * iStack_188;
  bVar12 = SUB81(uVar47 >> 7,0);
  uVar110 = (uint)bVar12 * auVar84._28_4_ | (uint)!bVar12 * iStack_184;
  uVar49 = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * local_180;
  bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
  uVar87 = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * iStack_17c;
  bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
  uVar91 = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * iStack_178;
  bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
  uVar95 = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * iStack_174;
  bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
  uVar99 = (uint)bVar12 * auVar73._16_4_ | (uint)!bVar12 * iStack_170;
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  uVar103 = (uint)bVar12 * auVar73._20_4_ | (uint)!bVar12 * iStack_16c;
  bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
  uVar107 = (uint)bVar12 * auVar73._24_4_ | (uint)!bVar12 * iStack_168;
  bVar12 = SUB81(uVar47 >> 7,0);
  uVar111 = (uint)bVar12 * auVar73._28_4_ | (uint)!bVar12 * iStack_164;
  uVar50 = (uint)(bVar46 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar46 & 1) * local_160;
  bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
  uVar88 = (uint)bVar12 * auVar85._4_4_ | (uint)!bVar12 * iStack_15c;
  bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
  uVar92 = (uint)bVar12 * auVar85._8_4_ | (uint)!bVar12 * iStack_158;
  bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
  uVar96 = (uint)bVar12 * auVar85._12_4_ | (uint)!bVar12 * iStack_154;
  bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
  uVar100 = (uint)bVar12 * auVar85._16_4_ | (uint)!bVar12 * iStack_150;
  bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
  uVar104 = (uint)bVar12 * auVar85._20_4_ | (uint)!bVar12 * iStack_14c;
  bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
  uVar108 = (uint)bVar12 * auVar85._24_4_ | (uint)!bVar12 * iStack_148;
  bVar12 = SUB81(uVar47 >> 7,0);
  uVar112 = (uint)bVar12 * auVar85._28_4_ | (uint)!bVar12 * iStack_144;
  uVar33 = vcmpps_avx512vl(ZEXT832(0) << 0x20,auVar74,1);
  uVar47 = uVar47 & uVar33;
  bVar46 = (byte)uVar47;
  if (bVar46 != 0) {
    auVar57 = ZEXT816(0) << 0x20;
    auVar56 = ZEXT816(0) << 0x20;
    if ((param_6 & 1) != 0) {
      param_7 = (undefined1 (*) [16])(*param_7 + uVar45);
      if ((~bVar46 & 0x81) == 0) {
        auVar56._8_8_ = 0;
        auVar56._0_8_ = *(ulonglong *)*param_7;
      }
      else {
        auVar54 = vmovdqu8_avx512vl(*param_7);
        auVar56[1] = ((byte)(uVar47 >> 1) & 1) * auVar54[1];
        auVar56[0] = (bVar46 & 1) * auVar54[0];
        auVar56[2] = ((byte)(uVar47 >> 2) & 1) * auVar54[2];
        auVar56[3] = ((byte)(uVar47 >> 3) & 1) * auVar54[3];
        auVar56[4] = ((byte)(uVar47 >> 4) & 1) * auVar54[4];
        auVar56[5] = ((byte)(uVar47 >> 5) & 1) * auVar54[5];
        auVar56[6] = ((byte)(uVar47 >> 6) & 1) * auVar54[6];
        auVar56[7] = (char)(uVar47 >> 7) * auVar54[7];
        auVar56._8_8_ = 0;
      }
    }
    if ((param_9 & 1) != 0) {
      if ((~bVar46 & 0x81) == 0) {
        auVar57._8_8_ = 0;
        auVar57._0_8_ = *(ulonglong *)*(undefined1 (*) [16])(param_10 + uVar45);
      }
      else {
        auVar54 = vmovdqu8_avx512vl(*(undefined1 (*) [16])(param_10 + uVar45));
        auVar57[1] = ((byte)(uVar47 >> 1) & 1) * auVar54[1];
        auVar57[0] = (bVar46 & 1) * auVar54[0];
        auVar57[2] = ((byte)(uVar47 >> 2) & 1) * auVar54[2];
        auVar57[3] = ((byte)(uVar47 >> 3) & 1) * auVar54[3];
        auVar57[4] = ((byte)(uVar47 >> 4) & 1) * auVar54[4];
        auVar57[5] = ((byte)(uVar47 >> 5) & 1) * auVar54[5];
        auVar57[6] = ((byte)(uVar47 >> 6) & 1) * auVar54[6];
        auVar57[7] = (char)(uVar47 >> 7) * auVar54[7];
        auVar57._8_8_ = 0;
      }
    }
    auVar73 = vpmovsxbd_avx2(auVar56);
    vpslld_avx2(auVar73,2);
    auVar73 = vgatherdps_avx512vl(*param_8);
    auVar59._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
    auVar59._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
    auVar59._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
    auVar59._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
    auVar59._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
    auVar59._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
    auVar59._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
    auVar59._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
    auVar73 = vpmovsxbd_avx2(auVar57);
    vpslld_avx2(auVar73,2);
    auVar73 = vgatherdps_avx512vl(*param_11);
    fVar1 = (float)((uint)(bVar46 & 1) * auVar73._0_4_);
    fVar2 = (float)((uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_);
    auVar62._4_4_ = fVar2;
    auVar62._0_4_ = fVar1;
    fVar3 = (float)((uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_);
    auVar62._8_4_ = fVar3;
    fVar4 = (float)((uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_);
    auVar62._12_4_ = fVar4;
    fVar5 = (float)((uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_);
    auVar62._16_4_ = fVar5;
    fVar6 = (float)((uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_);
    auVar62._20_4_ = fVar6;
    fVar7 = (float)((uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_);
    auVar62._24_4_ = fVar7;
    fVar8 = (float)((uint)(byte)(uVar47 >> 7) * auVar73._28_4_);
    auVar62._28_4_ = fVar8;
    pauVar10 = (undefined1 (*) [32])(param_2 + uVar45 * 0xc);
    if (bVar46 == 0xff) {
      auVar73 = pauVar10[1];
      auVar84 = vblendps_avx(auVar73,*pauVar10,0x24);
      auVar85 = vpermt2ps_avx512vl(*pauVar10,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar73);
      auVar76 = vpermt2ps_avx512vl(auVar84,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,pauVar10[2]);
      auVar73 = vpermt2ps_avx512vl(pauVar10[2],
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar73);
      auVar77 = vinsertf32x4_avx512vl(auVar85,auVar73._0_16_,1);
      auVar78 = vshuff64x2_avx512vl(auVar85,auVar73,3);
      lVar44 = uVar45 * 0xc;
      auVar73 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar44);
      auVar84 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar44);
      auVar85 = vblendps_avx(auVar73,*(undefined1 (*) [32])(param_3 + lVar44),0x24);
      auVar75 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar44),
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar73);
      auVar79 = vpermt2ps_avx512vl(auVar85,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar84);
      auVar73 = vpermt2ps_avx512vl(auVar84,
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar73);
      auVar80 = vinsertf32x4_avx512vl(auVar75,auVar73._0_16_,1);
      auVar81 = vshuff64x2_avx512vl(auVar75,auVar73,3);
      auVar73 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar44);
      auVar84 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar44);
      auVar85 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,*(undefined1 (*) [32])(param_4 + lVar44),auVar73);
      auVar75 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar84,auVar73);
      auVar82 = vinsertf32x4_avx512vl(auVar85,auVar75._0_16_,1);
      auVar83 = vshuff64x2_avx512vl(auVar85,auVar75,3);
      auVar73 = vblendps_avx(auVar73,*(undefined1 (*) [32])(param_4 + lVar44),0x24);
      auVar68 = vpermt2ps_avx512vl(auVar73,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar84);
    }
    else {
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + uVar47));
      auVar77._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
      auVar77._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
      auVar77._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
      auVar77._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
      auVar77._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar77._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar77._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar77._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar58 = vxorps_avx512vl(auVar58,auVar58);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + (longlong)*pauVar10));
      auVar78._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar58._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar78._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar58._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar78._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar58._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar78._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar58._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + (longlong)*pauVar10));
      auVar76._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
      auVar76._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
      auVar76._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
      auVar76._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      param_3 = param_3 + uVar45 * 0xc;
      auVar58 = vxorps_avx512vl(auVar117,auVar117);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(param_3 + uVar47));
      auVar80._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar58._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar80._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar58._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar80._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar58._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar80._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar58._12_4_;
      auVar80._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar80._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar80._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar80._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar52 = vxorps_avx512vl(auVar52,auVar52);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + param_3));
      auVar81._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar52._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar81._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar52._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar81._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar52._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar81._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar52._12_4_;
      auVar81._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar81._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar81._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar81._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + param_3));
      auVar79._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
      auVar79._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
      auVar79._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
      auVar79._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
      auVar79._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar79._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar79._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar79._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      param_4 = param_4 + uVar45 * 0xc;
      auVar52 = vxorps_avx512vl(auVar118,auVar118);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(param_4 + uVar47));
      auVar82._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar52._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar82._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar52._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar82._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar52._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar82._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar52._12_4_;
      auVar82._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar82._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar82._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar82._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar52 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                        ._0_16_);
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(puVar11 + param_4));
      auVar83._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar46 & 1) * auVar52._0_4_
      ;
      bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
      auVar83._4_4_ = (uint)bVar12 * auVar73._4_4_ | (uint)!bVar12 * auVar52._4_4_;
      bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
      auVar83._8_4_ = (uint)bVar12 * auVar73._8_4_ | (uint)!bVar12 * auVar52._8_4_;
      bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
      auVar83._12_4_ = (uint)bVar12 * auVar73._12_4_ | (uint)!bVar12 * auVar52._12_4_;
      auVar83._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar83._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar83._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar83._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
      auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*param_7 + param_4));
      auVar68._4_4_ = (uint)((byte)(uVar47 >> 1) & 1) * auVar73._4_4_;
      auVar68._0_4_ = (uint)(bVar46 & 1) * auVar73._0_4_;
      auVar68._8_4_ = (uint)((byte)(uVar47 >> 2) & 1) * auVar73._8_4_;
      auVar68._12_4_ = (uint)((byte)(uVar47 >> 3) & 1) * auVar73._12_4_;
      auVar68._16_4_ = (uint)((byte)(uVar47 >> 4) & 1) * auVar73._16_4_;
      auVar68._20_4_ = (uint)((byte)(uVar47 >> 5) & 1) * auVar73._20_4_;
      auVar68._24_4_ = (uint)((byte)(uVar47 >> 6) & 1) * auVar73._24_4_;
      auVar68._28_4_ = (uint)(byte)(uVar47 >> 7) * auVar73._28_4_;
    }
    auVar34._4_4_ = uVar86;
    auVar34._0_4_ = uVar48;
    auVar34._8_4_ = uVar90;
    auVar34._12_4_ = uVar94;
    auVar34._16_4_ = uVar98;
    auVar34._20_4_ = uVar102;
    auVar34._24_4_ = uVar106;
    auVar34._28_4_ = uVar110;
    auVar37._4_4_ = uVar87;
    auVar37._0_4_ = uVar49;
    auVar37._8_4_ = uVar91;
    auVar37._12_4_ = uVar95;
    auVar37._16_4_ = uVar99;
    auVar37._20_4_ = uVar103;
    auVar37._24_4_ = uVar107;
    auVar37._28_4_ = uVar111;
    auVar40._4_4_ = uVar88;
    auVar40._0_4_ = uVar50;
    auVar40._8_4_ = uVar92;
    auVar40._12_4_ = uVar96;
    auVar40._16_4_ = uVar100;
    auVar40._20_4_ = uVar104;
    auVar40._24_4_ = uVar108;
    auVar40._28_4_ = uVar112;
    auVar73 = vsubps_avx512vl(auVar34,auVar80);
    auVar84 = vsubps_avx512vl(auVar37,auVar81);
    auVar85 = vsubps_avx512vl(auVar40,auVar79);
    auVar73 = vfnmadd213ps_avx512vl(auVar73,auVar59,auVar34);
    auVar84 = vfnmadd213ps_avx512vl(auVar84,auVar59,auVar37);
    auVar85 = vfnmadd213ps_avx512vl(auVar85,auVar59,auVar40);
    fVar51 = (float)((uint)(bVar46 & 1) * auVar73._0_4_ | !(bool)(bVar46 & 1) * uVar48);
    bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
    fVar89 = (float)((uint)bVar12 * auVar73._4_4_ | !bVar12 * uVar86);
    bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
    fVar93 = (float)((uint)bVar12 * auVar73._8_4_ | !bVar12 * uVar90);
    bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
    fVar97 = (float)((uint)bVar12 * auVar73._12_4_ | !bVar12 * uVar94);
    bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
    fVar101 = (float)((uint)bVar12 * auVar73._16_4_ | !bVar12 * uVar98);
    bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
    fVar105 = (float)((uint)bVar12 * auVar73._20_4_ | !bVar12 * uVar102);
    bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
    fVar109 = (float)((uint)bVar12 * auVar73._24_4_ | !bVar12 * uVar106);
    bVar12 = SUB81(uVar47 >> 7,0);
    fVar113 = (float)((uint)bVar12 * auVar73._28_4_ | !bVar12 * uVar110);
    uVar48 = (uint)(bVar46 & 1) * auVar84._0_4_ | !(bool)(bVar46 & 1) * uVar49;
    bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
    uVar86 = (uint)bVar12 * auVar84._4_4_ | !bVar12 * uVar87;
    bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
    uVar87 = (uint)bVar12 * auVar84._8_4_ | !bVar12 * uVar91;
    bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
    uVar90 = (uint)bVar12 * auVar84._12_4_ | !bVar12 * uVar95;
    bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
    uVar94 = (uint)bVar12 * auVar84._16_4_ | !bVar12 * uVar99;
    bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
    uVar95 = (uint)bVar12 * auVar84._20_4_ | !bVar12 * uVar103;
    bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
    uVar98 = (uint)bVar12 * auVar84._24_4_ | !bVar12 * uVar107;
    bVar12 = SUB81(uVar47 >> 7,0);
    uVar102 = (uint)bVar12 * auVar84._28_4_ | !bVar12 * uVar111;
    uVar49 = (uint)(bVar46 & 1) * auVar85._0_4_ | !(bool)(bVar46 & 1) * uVar50;
    bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
    uVar50 = (uint)bVar12 * auVar85._4_4_ | !bVar12 * uVar88;
    bVar12 = (bool)((byte)(uVar47 >> 2) & 1);
    uVar88 = (uint)bVar12 * auVar85._8_4_ | !bVar12 * uVar92;
    bVar12 = (bool)((byte)(uVar47 >> 3) & 1);
    uVar91 = (uint)bVar12 * auVar85._12_4_ | !bVar12 * uVar96;
    bVar12 = (bool)((byte)(uVar47 >> 4) & 1);
    uVar92 = (uint)bVar12 * auVar85._16_4_ | !bVar12 * uVar100;
    bVar12 = (bool)((byte)(uVar47 >> 5) & 1);
    uVar96 = (uint)bVar12 * auVar85._20_4_ | !bVar12 * uVar104;
    bVar12 = (bool)((byte)(uVar47 >> 6) & 1);
    uVar99 = (uint)bVar12 * auVar85._24_4_ | !bVar12 * uVar108;
    bVar12 = SUB81(uVar47 >> 7,0);
    uVar100 = (uint)bVar12 * auVar85._28_4_ | !bVar12 * uVar112;
    auVar35._4_4_ = fVar89;
    auVar35._0_4_ = fVar51;
    auVar35._8_4_ = fVar93;
    auVar35._12_4_ = fVar97;
    auVar35._16_4_ = fVar101;
    auVar35._20_4_ = fVar105;
    auVar35._24_4_ = fVar109;
    auVar35._28_4_ = fVar113;
    auVar38._4_4_ = uVar86;
    auVar38._0_4_ = uVar48;
    auVar38._8_4_ = uVar87;
    auVar38._12_4_ = uVar90;
    auVar38._16_4_ = uVar94;
    auVar38._20_4_ = uVar95;
    auVar38._24_4_ = uVar98;
    auVar38._28_4_ = uVar102;
    auVar41._4_4_ = uVar50;
    auVar41._0_4_ = uVar49;
    auVar41._8_4_ = uVar88;
    auVar41._12_4_ = uVar91;
    auVar41._16_4_ = uVar92;
    auVar41._20_4_ = uVar96;
    auVar41._24_4_ = uVar99;
    auVar41._28_4_ = uVar100;
    auVar73 = vsubps_avx(auVar35,auVar77);
    auVar84 = vsubps_avx512vl(auVar38,auVar78);
    auVar85 = vsubps_avx512vl(auVar41,auVar76);
    auVar114._4_4_ = param_5;
    auVar114._0_4_ = param_5;
    auVar114._8_4_ = param_5;
    auVar114._12_4_ = param_5;
    auVar114._16_4_ = param_5;
    auVar114._20_4_ = param_5;
    auVar114._24_4_ = param_5;
    auVar114._28_4_ = param_5;
    auVar73 = vfnmadd231ps_avx512vl(auVar73,auVar114,auVar82);
    auVar84 = vfnmadd231ps_avx512vl(auVar84,auVar114,auVar83);
    auVar116._0_4_ = -(param_5 * auVar68._0_4_) + auVar85._0_4_;
    auVar116._4_4_ = -(param_5 * auVar68._4_4_) + auVar85._4_4_;
    auVar116._8_4_ = -(param_5 * auVar68._8_4_) + auVar85._8_4_;
    auVar116._12_4_ = -(param_5 * auVar68._12_4_) + auVar85._12_4_;
    auVar116._16_4_ = -(param_5 * auVar68._16_4_) + auVar85._16_4_;
    auVar116._20_4_ = -(param_5 * auVar68._20_4_) + auVar85._20_4_;
    auVar116._24_4_ = -(param_5 * auVar68._24_4_) + auVar85._24_4_;
    auVar116._28_4_ = -(param_5 * auVar68._28_4_) + auVar85._28_4_;
    auVar84 = vfnmadd213ps_avx512vl(auVar84,auVar62,auVar38);
    auVar85 = vfnmadd213ps_avx512vl(auVar116,auVar62,auVar41);
    bVar12 = (bool)((byte)(uVar47 >> 1) & 1);
    bVar17 = (bool)((byte)(uVar47 >> 2) & 1);
    bVar29 = (bool)((byte)(uVar47 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar47 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar47 >> 5) & 1);
    bVar26 = (bool)((byte)(uVar47 >> 6) & 1);
    bVar30 = SUB81(uVar47 >> 7,0);
    bVar13 = (bool)((byte)(uVar47 >> 1) & 1);
    bVar21 = (bool)((byte)(uVar47 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar47 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar47 >> 4) & 1);
    bVar23 = (bool)((byte)(uVar47 >> 5) & 1);
    bVar27 = (bool)((byte)(uVar47 >> 6) & 1);
    bVar31 = SUB81(uVar47 >> 7,0);
    bVar14 = (bool)((byte)(uVar47 >> 1) & 1);
    bVar25 = (bool)((byte)(uVar47 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar47 >> 3) & 1);
    bVar20 = (bool)((byte)(uVar47 >> 4) & 1);
    bVar24 = (bool)((byte)(uVar47 >> 5) & 1);
    bVar28 = (bool)((byte)(uVar47 >> 6) & 1);
    bVar32 = SUB81(uVar47 >> 7,0);
    auVar36._4_4_ =
         (uint)bVar12 * (int)(-(fVar2 * auVar73._4_4_) + fVar89) | (uint)!bVar12 * (int)fVar89;
    auVar36._0_4_ =
         (uint)(bVar46 & 1) * (int)(-(fVar1 * auVar73._0_4_) + fVar51) |
         (uint)!(bool)(bVar46 & 1) * (int)fVar51;
    auVar36._8_4_ =
         (uint)bVar17 * (int)(-(fVar3 * auVar73._8_4_) + fVar93) | (uint)!bVar17 * (int)fVar93;
    auVar36._12_4_ =
         (uint)bVar29 * (int)(-(fVar4 * auVar73._12_4_) + fVar97) | (uint)!bVar29 * (int)fVar97;
    auVar36._16_4_ =
         (uint)bVar18 * (int)(-(fVar5 * auVar73._16_4_) + fVar101) | (uint)!bVar18 * (int)fVar101;
    auVar36._20_4_ =
         (uint)bVar22 * (int)(-(fVar6 * auVar73._20_4_) + fVar105) | (uint)!bVar22 * (int)fVar105;
    auVar36._24_4_ =
         (uint)bVar26 * (int)(-(fVar7 * auVar73._24_4_) + fVar109) | (uint)!bVar26 * (int)fVar109;
    auVar36._28_4_ =
         (uint)bVar30 * (int)(-(fVar8 * auVar73._28_4_) + fVar113) | (uint)!bVar30 * (int)fVar113;
    auVar39._4_4_ = (uint)bVar13 * auVar84._4_4_ | !bVar13 * uVar86;
    auVar39._0_4_ = (uint)(bVar46 & 1) * auVar84._0_4_ | !(bool)(bVar46 & 1) * uVar48;
    auVar39._8_4_ = (uint)bVar21 * auVar84._8_4_ | !bVar21 * uVar87;
    auVar39._12_4_ = (uint)bVar15 * auVar84._12_4_ | !bVar15 * uVar90;
    auVar39._16_4_ = (uint)bVar19 * auVar84._16_4_ | !bVar19 * uVar94;
    auVar39._20_4_ = (uint)bVar23 * auVar84._20_4_ | !bVar23 * uVar95;
    auVar39._24_4_ = (uint)bVar27 * auVar84._24_4_ | !bVar27 * uVar98;
    auVar39._28_4_ = (uint)bVar31 * auVar84._28_4_ | !bVar31 * uVar102;
    auVar42._4_4_ = (uint)bVar14 * auVar85._4_4_ | !bVar14 * uVar50;
    auVar42._0_4_ = (uint)(bVar46 & 1) * auVar85._0_4_ | !(bool)(bVar46 & 1) * uVar49;
    auVar42._8_4_ = (uint)bVar25 * auVar85._8_4_ | !bVar25 * uVar88;
    auVar42._12_4_ = (uint)bVar16 * auVar85._12_4_ | !bVar16 * uVar91;
    auVar42._16_4_ = (uint)bVar20 * auVar85._16_4_ | !bVar20 * uVar92;
    auVar42._20_4_ = (uint)bVar24 * auVar85._20_4_ | !bVar24 * uVar96;
    auVar42._24_4_ = (uint)bVar28 * auVar85._24_4_ | !bVar28 * uVar99;
    auVar42._28_4_ = (uint)bVar32 * auVar85._28_4_ | !bVar32 * uVar100;
    if (bVar46 == 0xff) {
      auVar73 = vunpcklps_avx(auVar36,auVar39);
      auVar84 = vunpcklps_avx(auVar42,auVar74);
      auVar75 = vunpcklpd_avx512vl(auVar73,auVar84);
      auVar73 = vunpckhpd_avx(auVar73,auVar84);
      auVar84 = vunpckhps_avx(auVar36,auVar39);
      auVar74 = vunpckhps_avx(auVar42,auVar74);
      auVar85 = vunpcklpd_avx(auVar84,auVar74);
      auVar74 = vunpckhpd_avx(auVar84,auVar74);
      auVar84 = vinsertf32x4_avx512vl(auVar75,auVar73._0_16_,1);
      *pauVar43 = auVar84;
      auVar115._16_16_ = auVar74._0_16_;
      auVar115._0_16_ = auVar85._0_16_;
      pauVar43[1] = auVar115;
      auVar73 = vshuff64x2_avx512vl(auVar75,auVar73,3);
      pauVar43[2] = auVar73;
      auVar73 = vperm2f128_avx(auVar85,auVar74,0x31);
      pauVar43[3] = auVar73;
    }
    else {
      vscatterdps_avx512vl
                (ZEXT832(pauVar43) +
                 ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar47,
                 auVar36);
      vscatterdps_avx512vl
                (ZEXT832(pauVar43) +
                 ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar47,
                 auVar39);
      vscatterdps_avx512vl
                (ZEXT832(pauVar43) +
                 ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar47,
                 auVar42);
      vscatterdps_avx512vl
                (ZEXT832(pauVar43) +
                 ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar47,
                 auVar74);
    }
  }
  return;
}

// MultiResUpdateFineTargets_avx512skx @ 14059d060

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
MultiResUpdateFineTargets_avx512skx
          (longlong param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4,
          undefined4 *param_5,longlong param_6,longlong param_7,uint param_8)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong unaff_RBP;
  ulonglong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  longlong unaff_R12;
  longlong unaff_R13;
  undefined1 (*unaff_R14) [32];
  longlong unaff_R15;
  byte bVar11;
  undefined1 auVar12 [16];
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
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 in_ZMM16 [64];
  undefined1 in_ZMM18 [64];
  undefined1 auVar56 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar57 [16];
  undefined1 in_ZMM20 [64];
  undefined1 auVar58 [16];
  undefined1 in_ZMM21 [64];
  undefined1 auVar59 [16];
  undefined1 in_ZMM22 [64];
  undefined1 auVar60 [16];
  undefined1 in_ZMM24 [64];
  undefined1 auVar61 [16];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  uint local_108 [4];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  uint uStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  ulonglong uVar7;
  undefined1 auVar23 [32];
  
  uVar4 = __real_00000008;
  uVar3 = __real_00000004;
  auVar12 = in_ZMM29._0_16_;
  auVar14 = in_ZMM28._0_16_;
  auVar61 = in_ZMM27._0_16_;
  auVar58 = in_ZMM21._0_16_;
  auVar60 = in_ZMM24._0_16_;
  auVar59 = in_ZMM22._0_16_;
  auVar57 = in_ZMM20._0_16_;
  auVar56 = in_ZMM19._0_16_;
  auVar13 = in_ZMM16._0_16_;
  uVar6 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar6 = param_8;
  }
  uVar6 = uVar6 & 0xfffffff8;
  uVar7 = (ulonglong)uVar6;
  if ((int)uVar6 < 1) {
    uVar9 = 0;
    if ((int)param_8 < 1) {
      return param_5;
    }
  }
  else {
    unaff_R14 = (undefined1 (*) [32])(param_6 + 0x60);
    unaff_R15 = 0x40;
    uVar9 = 0;
    local_e8 = __real_00000004;
    uStack_e4 = __real_00000004;
    uStack_e0 = __real_00000004;
    uStack_dc = __real_00000004;
    uStack_d8 = __real_00000004;
    uStack_d4 = __real_00000004;
    uStack_d0 = __real_00000004;
    uStack_cc = __real_00000004;
    local_108[0] = __real_00000008;
    local_108[1] = __real_00000008;
    local_108[2] = __real_00000008;
    local_108[3] = __real_00000008;
    uStack_f8 = __real_00000008;
    uStack_f4 = __real_00000008;
    uStack_f0 = __real_00000008;
    uStack_ec = __real_00000008;
    do {
      auVar55 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
      auVar54 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
      auVar45 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
      auVar19 = vperm2f128_avx(unaff_R14[-3],unaff_R14[-1],0x20);
      auVar21 = vperm2f128_avx(unaff_R14[-3],unaff_R14[-1],0x31);
      auVar28 = vperm2f128_avx(unaff_R14[-2],*unaff_R14,0x20);
      auVar15 = vperm2f128_avx(unaff_R14[-2],*unaff_R14,0x31);
      auVar20 = vunpcklps_avx(auVar19,auVar21);
      auVar19 = vunpckhps_avx(auVar19,auVar21);
      auVar29 = vunpcklps_avx(auVar28,auVar15);
      auVar21 = vunpckhps_avx(auVar28,auVar15);
      auVar15 = vunpcklpd_avx512vl(auVar20,auVar29);
      auVar59 = auVar15._0_16_;
      auVar16 = vunpckhpd_avx512vl(auVar20,auVar29);
      auVar17 = vunpcklpd_avx512vl(auVar19,auVar21);
      auVar18 = vunpckhpd_avx512vl(auVar19,auVar21);
      auVar60 = auVar18._0_16_;
      auVar19 = *(undefined1 (*) [32])(param_7 + -0x40 + unaff_R15);
      auVar21 = *(undefined1 (*) [32])(param_7 + -0x20 + unaff_R15);
      auVar20 = vpblendd_avx2(auVar21,auVar19,0x24);
      auVar19 = vpermt2d_avx512vl(auVar19,
                                  ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,auVar21);
      auVar20 = vpermt2d_avx512vl(auVar20,
                                  ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,*(undefined1 (*) [32])(param_7 + unaff_R15));
      auVar21 = vpermt2d_avx512vl(*(undefined1 (*) [32])(param_7 + unaff_R15),
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  ,auVar21);
      auVar23._16_16_ = ZEXT116(0) * auVar19._16_16_ | ZEXT116(1) * auVar21._0_16_;
      auVar23._0_16_ = ZEXT116(0) * auVar21._0_16_ | ZEXT116(1) * auVar19._0_16_;
      auVar21 = vperm2i128_avx2(auVar19,auVar21,0x31);
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar22 = vgatherdps_avx512vl(param_3[param_6]);
      auVar14 = auVar22._0_16_;
      in_ZMM28 = ZEXT3264(auVar22);
      vpslld_avx2(auVar23,2);
      vpslld_avx2(auVar23,3);
      auVar28._4_4_ = uVar3;
      auVar28._0_4_ = uVar3;
      auVar28._8_4_ = uVar3;
      auVar28._12_4_ = uVar3;
      auVar28._16_4_ = uVar3;
      auVar28._20_4_ = uVar3;
      auVar28._24_4_ = uVar3;
      auVar28._28_4_ = uVar3;
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar23 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_R15));
      auVar12 = auVar23._0_16_;
      in_ZMM29 = ZEXT3264(auVar23);
      auVar29._4_4_ = uVar4;
      auVar29._0_4_ = uVar4;
      auVar29._8_4_ = uVar4;
      auVar29._12_4_ = uVar4;
      auVar29._16_4_ = uVar4;
      auVar29._20_4_ = uVar4;
      auVar29._24_4_ = uVar4;
      auVar29._28_4_ = uVar4;
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar24 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + param_1));
      in_ZMM30 = ZEXT3264(auVar24);
      auVar19._4_4_ = auVar21._4_4_ * 2;
      auVar19._0_4_ = auVar21._0_4_ * 2;
      auVar19._8_4_ = auVar21._8_4_ * 2;
      auVar19._12_4_ = auVar21._12_4_ * 2;
      auVar19._16_4_ = auVar21._16_4_ * 2;
      auVar19._20_4_ = auVar21._20_4_ * 2;
      auVar19._24_4_ = auVar21._24_4_ * 2;
      auVar19._28_4_ = auVar21._28_4_ * 2;
      auVar19 = vpaddd_avx512vl(auVar21,auVar19);
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar25 = vgatherdps_avx512vl(param_3[param_1]);
      in_ZMM31 = ZEXT3264(auVar25);
      auVar47 = vpslld_avx2(auVar21,2);
      auVar51 = vpslld_avx2(auVar21,3);
      auVar21._0_4_ = auVar51._0_4_ + auVar47._0_4_;
      auVar21._4_4_ = auVar51._4_4_ + auVar47._4_4_;
      auVar21._8_4_ = auVar51._8_4_ + auVar47._8_4_;
      auVar21._12_4_ = auVar51._12_4_ + auVar47._12_4_;
      auVar21._16_4_ = auVar51._16_4_ + auVar47._16_4_;
      auVar21._20_4_ = auVar51._20_4_ + auVar47._20_4_;
      auVar21._24_4_ = auVar51._24_4_ + auVar47._24_4_;
      auVar21._28_4_ = auVar51._28_4_ + auVar47._28_4_;
      auVar47 = vpaddd_avx512vl(auVar21,auVar28);
      auVar51 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + uVar7));
      auVar21 = vpaddd_avx512vl(auVar21,auVar29);
      auVar26 = vgatherdps_avx512vl(*param_3);
      auVar27 = vgatherdps_avx512vl(param_3[uVar7]);
      auVar48 = vpslld_avx2(auVar20,2);
      auVar46 = vpslld_avx2(auVar20,3);
      auVar20._0_4_ = auVar46._0_4_ + auVar48._0_4_;
      auVar20._4_4_ = auVar46._4_4_ + auVar48._4_4_;
      auVar20._8_4_ = auVar46._8_4_ + auVar48._8_4_;
      auVar20._12_4_ = auVar46._12_4_ + auVar48._12_4_;
      auVar20._16_4_ = auVar46._16_4_ + auVar48._16_4_;
      auVar20._20_4_ = auVar46._20_4_ + auVar48._20_4_;
      auVar20._24_4_ = auVar46._24_4_ + auVar48._24_4_;
      auVar20._28_4_ = auVar46._28_4_ + auVar48._28_4_;
      vpaddd_avx512vl(auVar20,auVar28);
      auVar28 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + (longlong)param_4));
      vpaddd_avx512vl(auVar20,auVar29);
      auVar20 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + param_7));
      auVar29 = vgatherdps_avx512vl(param_4[param_6]);
      auVar46 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + unaff_R15));
      auVar48 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + param_1));
      auVar30 = vgatherdps_avx512vl(param_4[param_1]);
      auVar31 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + uVar7));
      vxorps_avx512vl(in_ZMM16._0_16_,in_ZMM16._0_16_);
      auVar32 = vgatherdps_avx512vl(*param_4);
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar33 = vgatherdps_avx512vl(param_4[uVar7]);
      auVar34 = vgatherdps_avx512vl(param_5[param_6]);
      vxorps_avx512vl(in_ZMM18._0_16_,in_ZMM18._0_16_);
      auVar35 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + unaff_R15));
      auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + param_1));
      auVar37 = vgatherdps_avx512vl(param_5[param_1]);
      auVar38 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + uVar7));
      vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
      auVar47 = vgatherdps_avx512vl(*param_5);
      vxorps_avx512vl(auVar21._0_16_,auVar21._0_16_);
      auVar21 = vgatherdps_avx512vl(param_5[uVar7]);
      auVar39 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 * 2));
      auVar29 = vfmadd213ps_avx512vl(auVar29,auVar18,auVar22);
      auVar22 = vfmadd213ps_avx512vl(auVar46,auVar18,auVar23);
      auVar23 = vfmadd213ps_avx512vl(auVar48,auVar18,auVar24);
      auVar24 = vfmadd213ps_avx512vl(auVar30,auVar18,auVar25);
      auVar25 = vfmadd213ps_avx512vl(auVar31,auVar18,auVar51);
      vxorps_avx512vl(auVar19._0_16_,auVar19._0_16_);
      auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + param_7));
      auVar51 = vfmadd213ps_avx512vl(auVar32,auVar18,auVar26);
      auVar26 = vfmadd213ps_avx512vl(auVar33,auVar18,auVar27);
      auVar28 = vfmadd213ps_avx512vl(auVar39,auVar18,auVar28);
      auVar19 = vfmadd213ps_avx512vl(auVar19,auVar18,auVar20);
      auVar20 = vmulps_avx512vl(auVar16,auVar24);
      auVar20 = vfmadd231ps_avx512vl(auVar20,auVar15,auVar29);
      auVar29 = vmulps_avx512vl(auVar16,auVar25);
      auVar29 = vfmadd231ps_avx512vl(auVar29,auVar15,auVar22);
      auVar18 = vmulps_avx512vl(auVar16,auVar51);
      auVar18 = vfmadd231ps_avx512vl(auVar18,auVar15,auVar23);
      auVar22 = vmulps_avx512vl(auVar16,auVar37);
      auVar23 = vmulps_avx512vl(auVar16,auVar38);
      auVar16 = vmulps_avx512vl(auVar16,auVar47);
      auVar22 = vfmadd231ps_avx512vl(auVar22,auVar15,auVar34);
      auVar23 = vfmadd231ps_avx512vl(auVar23,auVar15,auVar35);
      auVar15 = vfmadd231ps_avx512vl(auVar16,auVar15,auVar36);
      auVar16 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + (longlong)param_4));
      vxorps_avx512vl(auVar35._0_16_,auVar35._0_16_);
      auVar24 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + param_7));
      auVar25 = vfmadd213ps_avx512vl(auVar26,auVar17,auVar20);
      in_ZMM27 = ZEXT3264(auVar25);
      auVar61 = auVar25._0_16_;
      auVar29 = vfmadd213ps_avx512vl(auVar28,auVar17,auVar29);
      auVar28 = vfmadd213ps_avx512vl(auVar19,auVar17,auVar18);
      auVar18 = vfmadd231ps_avx512vl(auVar22,auVar17,auVar21);
      auVar16 = vfmadd231ps_avx512vl(auVar23,auVar17,auVar16);
      auVar15 = vfmadd231ps_avx512vl(auVar15,auVar17,auVar24);
      in_ZMM16 = ZEXT3264(auVar15);
      auVar13 = auVar15._0_16_;
      auVar21 = vpermt2ps_avx512vl(auVar28,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar29);
      auVar19 = vpermt2ps_avx512vl(auVar25,
                                   ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar29);
      in_ZMM18 = ZEXT3264(___ymm_00000008000000060000000c00000004000000030000000b0000000100000000);
      auVar19 = vpermt2ps_avx512vl(auVar19,
                                   ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar21);
      *(undefined1 (*) [32])(param_1 + -0x40 + unaff_R15) = auVar19;
      auVar19 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar56 = __ymm_0000000d00000007000000020000000c00000006000000010000000b00000005._0_16_;
      auVar21 = vpermt2ps_avx512vl(auVar21,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar25);
      *(undefined1 (*) [32])(param_1 + -0x20 + unaff_R15) = auVar21;
      auVar20 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
      auVar21 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar57 = __ymm_0000000700000007000000070000000700000006000000050000000f0000000e._0_16_;
      auVar29 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar25);
      auVar58 = __ymm_0000000f00000004000000010000000e00000003000000000000000d00000002._0_16_;
      auVar29 = vpermt2ps_avx512vl(auVar29,
                                   ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar28);
      *(undefined1 (*) [32])(param_1 + unaff_R15) = auVar29;
      auVar29 = vpermt2ps_avx512vl(auVar15,auVar45,auVar16);
      auVar28 = vpermt2ps_avx512vl(auVar18,auVar54,auVar16);
      auVar28 = vpermt2ps_avx512vl(auVar28,auVar55,auVar29);
      *(undefined1 (*) [32])(param_2 + -0x40 + unaff_R15) = auVar28;
      auVar19 = vpermt2ps_avx512vl(auVar29,auVar19,auVar18);
      *(undefined1 (*) [32])(param_2 + -0x20 + unaff_R15) = auVar19;
      auVar19 = vpermt2ps_avx512vl(auVar16,auVar21,auVar18);
      auVar19 = vpermt2ps_avx512vl(auVar19,auVar20,auVar15);
      *(undefined1 (*) [32])(param_2 + unaff_R15) = auVar19;
      unaff_R15 = unaff_R15 + 0x60;
      unaff_R14 = unaff_R14 + 4;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)uVar6);
    if ((int)param_8 <= (int)uVar9) {
      return param_5;
    }
  }
  auVar29 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar20 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar21 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar19 = vpbroadcastd_avx512vl();
  auVar19 = vpor_avx2(auVar19,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar28 = vpbroadcastd_avx512vl();
  uVar2 = vpcmpgtd_avx512vl(auVar28,auVar19);
  uVar8 = (ulonglong)uVar9;
  pauVar10 = (undefined1 (*) [32])(param_6 + uVar8 * 0x10);
  bVar11 = (byte)uVar2;
  if (bVar11 == 0xff) {
    auVar19 = vperm2f128_avx(*pauVar10,pauVar10[2],0x20);
    auVar15 = vperm2f128_avx(*pauVar10,pauVar10[2],0x31);
    auVar45 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x20);
    auVar54 = vperm2f128_avx(pauVar10[1],pauVar10[3],0x31);
    auVar28 = vunpcklps_avx(auVar19,auVar15);
    auVar19 = vunpckhps_avx(auVar19,auVar15);
    auVar15 = vunpcklps_avx(auVar45,auVar54);
    auVar54 = vunpckhps_avx512vl(auVar45,auVar54);
    auVar45 = vunpcklpd_avx(auVar28,auVar15);
    auVar15 = vunpckhpd_avx(auVar28,auVar15);
    auVar17 = vunpcklpd_avx512vl(auVar19,auVar54);
    auVar18 = vunpckhpd_avx512vl(auVar19,auVar54);
    auVar19 = *(undefined1 (*) [32])(param_7 + uVar8 * 0xc);
    auVar28 = *(undefined1 (*) [32])(param_7 + 0x20 + uVar8 * 0xc);
    auVar54 = vmovdqu64_avx512vl(*(undefined1 (*) [32])(param_7 + 0x40 + uVar8 * 0xc));
    auVar55 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                ,auVar19,auVar28);
    auVar16 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar16 = vpermi2d_avx512vl(auVar16,auVar54,auVar28);
    auVar22 = vinserti32x4_avx512vl(auVar55,auVar16._0_16_,1);
    auVar55 = vshufi64x2_avx512vl(auVar55,auVar16,3);
    auVar19 = vpblendd_avx2(auVar28,auVar19,0x24);
    auVar54 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                ,auVar19,auVar54);
  }
  else {
    auVar19 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
    auVar45._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar45._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar45._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar45._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar45._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar45._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar45._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar45._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    auVar19 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + param_1));
    auVar15._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar15._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar15._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar15._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar15._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar15._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar15._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar15._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    auVar19 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + uVar7));
    auVar17._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar17._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar17._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar17._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar17._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar17._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar17._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar17._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    auVar19 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar10 + unaff_RBP));
    auVar18._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar18._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar18._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar18._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar18._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar18._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar18._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar18._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    param_7 = param_7 + uVar8 * 0xc;
    auVar13 = vxorps_avx512vl(auVar13,auVar13);
    auVar19 = vpgatherdd_avx512vl(*(undefined4 *)(param_7 + unaff_RBP));
    auVar22._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
    bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
    auVar22._4_4_ = (uint)bVar1 * auVar19._4_4_ | (uint)!bVar1 * auVar13._4_4_;
    bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
    auVar22._8_4_ = (uint)bVar1 * auVar19._8_4_ | (uint)!bVar1 * auVar13._8_4_;
    bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
    auVar22._12_4_ = (uint)bVar1 * auVar19._12_4_ | (uint)!bVar1 * auVar13._12_4_;
    auVar22._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar22._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar22._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar22._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    auVar19 = vpgatherdd_avx512vl(*(undefined4 *)(param_7 + param_1));
    auVar55._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar55._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar55._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar55._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar55._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar55._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar55._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar55._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    auVar19 = vpgatherdd_avx512vl(*(undefined4 *)(param_7 + param_1));
    auVar54._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_;
    auVar54._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_;
    auVar54._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_;
    auVar54._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_;
    auVar54._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
    auVar54._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
    auVar54._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
    auVar54._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
  }
  auVar19 = vpaddd_avx512vl(auVar22,auVar22);
  auVar19 = vpaddd_avx512vl(auVar22,auVar19);
  auVar28 = vgatherdps_avx512vl(param_3[uVar2]);
  auVar24._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar28._4_4_;
  auVar24._0_4_ = (uint)(bVar11 & 1) * auVar28._0_4_;
  auVar24._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar28._8_4_;
  auVar24._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar28._12_4_;
  auVar24._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar28._16_4_;
  auVar24._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar28._20_4_;
  auVar24._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar28._24_4_;
  auVar24._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar28._28_4_;
  auVar28 = vpslld_avx512vl(auVar22,2);
  auVar16 = vpslld_avx512vl(auVar22,3);
  auVar28 = vpaddd_avx512vl(auVar16,auVar28);
  auVar22 = vpbroadcastd_avx512vl(ZEXT416(__real_00000004));
  auVar23 = vpaddd_avx512vl(auVar28,auVar22);
  auVar16 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + (longlong)unaff_R14));
  auVar25._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar16._4_4_;
  auVar25._0_4_ = (uint)(bVar11 & 1) * auVar16._0_4_;
  auVar25._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar16._8_4_;
  auVar25._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar16._12_4_;
  auVar25._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar16._16_4_;
  auVar25._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar16._20_4_;
  auVar25._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar16._24_4_;
  auVar25._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar16._28_4_;
  auVar47 = vpbroadcastd_avx512vl(ZEXT416(__real_00000008));
  auVar28 = vpaddd_avx512vl(auVar28,auVar47);
  auVar13 = vxorps_avx512vl(auVar56,auVar56);
  auVar16 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_R15));
  auVar51._0_4_ = (uint)(bVar11 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar51._4_4_ = (uint)bVar1 * auVar16._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar51._8_4_ = (uint)bVar1 * auVar16._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar51._12_4_ = (uint)bVar1 * auVar16._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar51._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar16._16_4_;
  auVar51._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar16._20_4_;
  auVar51._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar16._24_4_;
  auVar51._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar16._28_4_;
  auVar16 = vpaddd_avx512vl(auVar55,auVar55);
  vpaddd_avx512vl(auVar55,auVar16);
  auVar13 = vxorps_avx512vl(auVar57,auVar57);
  auVar16 = vgatherdps_avx512vl(param_3[uVar8]);
  auVar26._0_4_ = (uint)(bVar11 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar26._4_4_ = (uint)bVar1 * auVar16._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar26._8_4_ = (uint)bVar1 * auVar16._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar26._12_4_ = (uint)bVar1 * auVar16._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar26._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar16._16_4_;
  auVar26._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar16._20_4_;
  auVar26._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar16._24_4_;
  auVar26._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar16._28_4_;
  auVar16 = vpslld_avx512vl(auVar55,2);
  auVar55 = vpslld_avx2(auVar55,3);
  auVar55 = vpaddd_avx512vl(auVar55,auVar16);
  vpaddd_avx512vl(auVar55,auVar22);
  auVar13 = vxorps_avx512vl(auVar59,auVar59);
  auVar16 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + (longlong)local_108));
  auVar27._0_4_ = (uint)(bVar11 & 1) * auVar16._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar27._4_4_ = (uint)bVar1 * auVar16._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar27._8_4_ = (uint)bVar1 * auVar16._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar27._12_4_ = (uint)bVar1 * auVar16._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar27._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar16._16_4_;
  auVar27._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar16._20_4_;
  auVar27._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar16._24_4_;
  auVar27._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar16._28_4_;
  vpaddd_avx512vl(auVar55,auVar47);
  auVar13 = vxorps_avx512vl(auVar60,auVar60);
  auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_R12));
  auVar46._0_4_ = (uint)(bVar11 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar46._4_4_ = (uint)bVar1 * auVar55._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar46._8_4_ = (uint)bVar1 * auVar55._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar46._12_4_ = (uint)bVar1 * auVar55._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar46._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar55._16_4_;
  auVar46._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar55._20_4_;
  auVar46._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar55._24_4_;
  auVar46._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar55._28_4_;
  auVar13 = vxorps_avx512vl(auVar58,auVar58);
  auVar55 = vgatherdps_avx512vl(param_3[unaff_R13]);
  auVar48._0_4_ = (uint)(bVar11 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar48._4_4_ = (uint)bVar1 * auVar55._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar48._8_4_ = (uint)bVar1 * auVar55._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar48._12_4_ = (uint)bVar1 * auVar55._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar48._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar55._16_4_;
  auVar48._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar55._20_4_;
  auVar48._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar55._24_4_;
  auVar48._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar55._28_4_;
  auVar55 = vpslld_avx2(auVar54,2);
  auVar54 = vpslld_avx2(auVar54,3);
  auVar16._0_4_ = auVar54._0_4_ + auVar55._0_4_;
  auVar16._4_4_ = auVar54._4_4_ + auVar55._4_4_;
  auVar16._8_4_ = auVar54._8_4_ + auVar55._8_4_;
  auVar16._12_4_ = auVar54._12_4_ + auVar55._12_4_;
  auVar16._16_4_ = auVar54._16_4_ + auVar55._16_4_;
  auVar16._20_4_ = auVar54._20_4_ + auVar55._20_4_;
  auVar16._24_4_ = auVar54._24_4_ + auVar55._24_4_;
  auVar16._28_4_ = auVar54._28_4_ + auVar55._28_4_;
  vpaddd_avx512vl(auVar16,auVar22);
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + (longlong)unaff_R14));
  auVar30._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar30._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar30._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar30._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar30._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar30._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar30._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar30._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  vpaddd_avx512vl(auVar16,auVar47);
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_3 + unaff_R15));
  auVar47._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar47._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar47._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar47._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar47._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar47._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar47._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar47._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar13 = vxorps_avx512vl(auVar61,auVar61);
  auVar54 = vgatherdps_avx512vl(param_4[uVar2]);
  auVar31._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar13._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar31._4_4_ = (uint)bVar1 * auVar54._4_4_ | (uint)!bVar1 * auVar13._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar31._8_4_ = (uint)bVar1 * auVar54._8_4_ | (uint)!bVar1 * auVar13._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar31._12_4_ = (uint)bVar1 * auVar54._12_4_ | (uint)!bVar1 * auVar13._12_4_;
  auVar31._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar31._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar31._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar31._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar14 = vxorps_avx512vl(auVar14,auVar14);
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + (longlong)unaff_R14));
  auVar32._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar32._4_4_ = (uint)bVar1 * auVar54._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar32._8_4_ = (uint)bVar1 * auVar54._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar32._12_4_ = (uint)bVar1 * auVar54._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar32._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar32._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar32._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar32._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar14 = vxorps_avx512vl(auVar12,auVar12);
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + unaff_R15));
  auVar33._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar33._4_4_ = (uint)bVar1 * auVar54._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar33._8_4_ = (uint)bVar1 * auVar54._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar33._12_4_ = (uint)bVar1 * auVar54._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar33._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar33._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar33._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar33._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(param_4[uVar8]);
  auVar34._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar34._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar34._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar34._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar34._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar34._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar34._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar34._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + (longlong)local_108));
  auVar35._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar35._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar35._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar35._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar35._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar35._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar35._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar35._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + unaff_R12));
  auVar36._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar36._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar36._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar36._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar36._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar36._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar36._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar36._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(param_4[unaff_R13]);
  auVar37._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar37._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar37._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar37._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar37._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar37._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar37._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar37._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + (longlong)unaff_R14));
  auVar38._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar38._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar38._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar38._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar38._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar38._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar38._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar38._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_4 + unaff_R15));
  auVar39._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar39._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar39._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar39._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar39._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar39._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar39._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar39._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(param_5[uVar2]);
  auVar40._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar40._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar40._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar40._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar40._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar40._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar40._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar40._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar14 = vxorps_avx512vl(auVar19._0_16_,auVar19._0_16_);
  auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + (longlong)unaff_R14));
  auVar41._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar41._4_4_ = (uint)bVar1 * auVar19._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar41._8_4_ = (uint)bVar1 * auVar19._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar41._12_4_ = (uint)bVar1 * auVar19._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar41._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
  auVar41._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
  auVar41._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
  auVar41._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
  auVar14 = vxorps_avx512vl(auVar23._0_16_,auVar23._0_16_);
  auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + unaff_R15));
  auVar42._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar42._4_4_ = (uint)bVar1 * auVar19._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar42._8_4_ = (uint)bVar1 * auVar19._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar42._12_4_ = (uint)bVar1 * auVar19._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar42._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
  auVar42._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
  auVar42._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
  auVar42._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
  auVar14 = vxorps_avx512vl(auVar28._0_16_,auVar28._0_16_);
  auVar19 = vgatherdps_avx512vl(param_5[uVar8]);
  auVar43._0_4_ = (uint)(bVar11 & 1) * auVar19._0_4_ | (uint)!(bool)(bVar11 & 1) * auVar14._0_4_;
  bVar1 = (bool)((byte)(uVar2 >> 1) & 1);
  auVar43._4_4_ = (uint)bVar1 * auVar19._4_4_ | (uint)!bVar1 * auVar14._4_4_;
  bVar1 = (bool)((byte)(uVar2 >> 2) & 1);
  auVar43._8_4_ = (uint)bVar1 * auVar19._8_4_ | (uint)!bVar1 * auVar14._8_4_;
  bVar1 = (bool)((byte)(uVar2 >> 3) & 1);
  auVar43._12_4_ = (uint)bVar1 * auVar19._12_4_ | (uint)!bVar1 * auVar14._12_4_;
  auVar43._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_;
  auVar43._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_;
  auVar43._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_;
  auVar43._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar19._28_4_;
  auVar19 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + (longlong)local_108));
  auVar28 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + unaff_R12));
  auVar54 = vgatherdps_avx512vl(param_5[unaff_R13]);
  auVar44._4_4_ = (uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_;
  auVar44._0_4_ = (uint)(bVar11 & 1) * auVar54._0_4_;
  auVar44._8_4_ = (uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_;
  auVar44._12_4_ = (uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_;
  auVar44._16_4_ = (uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_;
  auVar44._20_4_ = (uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_;
  auVar44._24_4_ = (uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_;
  auVar44._28_4_ = (uint)(byte)(uVar2 >> 7) * auVar54._28_4_;
  auVar54 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + (longlong)unaff_R14));
  auVar55 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_5 + unaff_R15));
  auVar16 = vfmadd213ps_avx512vl(auVar31,auVar18,auVar24);
  auVar22 = vfmadd213ps_avx512vl(auVar32,auVar18,auVar25);
  auVar23 = vfmadd213ps_avx512vl(auVar33,auVar18,auVar51);
  auVar24 = vfmadd213ps_avx512vl(auVar34,auVar18,auVar26);
  auVar25 = vfmadd213ps_avx512vl(auVar35,auVar18,auVar27);
  auVar51 = vfmadd213ps_avx512vl(auVar36,auVar18,auVar46);
  auVar26 = vfmadd213ps_avx512vl(auVar37,auVar18,auVar48);
  auVar27 = vfmadd213ps_avx512vl(auVar38,auVar18,auVar30);
  auVar18 = vfmadd213ps_avx512vl(auVar39,auVar18,auVar47);
  auVar24 = vmulps_avx512vl(auVar15,auVar24);
  auVar16 = vfmadd231ps_avx512vl(auVar24,auVar45,auVar16);
  auVar24 = vmulps_avx512vl(auVar15,auVar25);
  auVar22 = vfmadd231ps_avx512vl(auVar24,auVar45,auVar22);
  auVar24 = vmulps_avx512vl(auVar15,auVar51);
  auVar23 = vfmadd231ps_avx512vl(auVar24,auVar45,auVar23);
  auVar24 = vmulps_avx512vl(auVar15,auVar43);
  auVar52._0_4_ = auVar15._0_4_ * (float)((uint)(bVar11 & 1) * auVar19._0_4_);
  auVar52._4_4_ = auVar15._4_4_ * (float)((uint)((byte)(uVar2 >> 1) & 1) * auVar19._4_4_);
  auVar52._8_4_ = auVar15._8_4_ * (float)((uint)((byte)(uVar2 >> 2) & 1) * auVar19._8_4_);
  auVar52._12_4_ = auVar15._12_4_ * (float)((uint)((byte)(uVar2 >> 3) & 1) * auVar19._12_4_);
  auVar52._16_4_ = auVar15._16_4_ * (float)((uint)((byte)(uVar2 >> 4) & 1) * auVar19._16_4_);
  auVar52._20_4_ = auVar15._20_4_ * (float)((uint)((byte)(uVar2 >> 5) & 1) * auVar19._20_4_);
  auVar52._24_4_ = auVar15._24_4_ * (float)((uint)((byte)(uVar2 >> 6) & 1) * auVar19._24_4_);
  auVar52._28_4_ = auVar15._28_4_ * (float)((uint)(byte)(uVar2 >> 7) * auVar19._28_4_);
  auVar49._0_4_ = (float)((uint)(bVar11 & 1) * auVar28._0_4_) * auVar15._0_4_;
  auVar49._4_4_ = (float)((uint)((byte)(uVar2 >> 1) & 1) * auVar28._4_4_) * auVar15._4_4_;
  auVar49._8_4_ = (float)((uint)((byte)(uVar2 >> 2) & 1) * auVar28._8_4_) * auVar15._8_4_;
  auVar49._12_4_ = (float)((uint)((byte)(uVar2 >> 3) & 1) * auVar28._12_4_) * auVar15._12_4_;
  auVar49._16_4_ = (float)((uint)((byte)(uVar2 >> 4) & 1) * auVar28._16_4_) * auVar15._16_4_;
  auVar49._20_4_ = (float)((uint)((byte)(uVar2 >> 5) & 1) * auVar28._20_4_) * auVar15._20_4_;
  auVar49._24_4_ = (float)((uint)((byte)(uVar2 >> 6) & 1) * auVar28._24_4_) * auVar15._24_4_;
  auVar49._28_4_ = (float)((uint)(byte)(uVar2 >> 7) * auVar28._28_4_) * auVar15._28_4_;
  auVar19 = vfmadd231ps_avx512vl(auVar24,auVar45,auVar40);
  auVar28 = vfmadd231ps_avx512vl(auVar52,auVar45,auVar41);
  auVar15 = vfmadd231ps_avx512vl(auVar49,auVar45,auVar42);
  auVar45 = vfmadd213ps_avx512vl(auVar26,auVar17,auVar16);
  auVar16 = vfmadd213ps_avx512vl(auVar27,auVar17,auVar22);
  auVar18 = vfmadd213ps_avx512vl(auVar18,auVar17,auVar23);
  auVar19 = vfmadd231ps_avx512vl(auVar19,auVar17,auVar44);
  auVar53._0_4_ = auVar17._0_4_ * (float)((uint)(bVar11 & 1) * auVar54._0_4_) + auVar28._0_4_;
  auVar53._4_4_ =
       auVar17._4_4_ * (float)((uint)((byte)(uVar2 >> 1) & 1) * auVar54._4_4_) + auVar28._4_4_;
  auVar53._8_4_ =
       auVar17._8_4_ * (float)((uint)((byte)(uVar2 >> 2) & 1) * auVar54._8_4_) + auVar28._8_4_;
  auVar53._12_4_ =
       auVar17._12_4_ * (float)((uint)((byte)(uVar2 >> 3) & 1) * auVar54._12_4_) + auVar28._12_4_;
  auVar53._16_4_ =
       auVar17._16_4_ * (float)((uint)((byte)(uVar2 >> 4) & 1) * auVar54._16_4_) + auVar28._16_4_;
  auVar53._20_4_ =
       auVar17._20_4_ * (float)((uint)((byte)(uVar2 >> 5) & 1) * auVar54._20_4_) + auVar28._20_4_;
  auVar53._24_4_ =
       auVar17._24_4_ * (float)((uint)((byte)(uVar2 >> 6) & 1) * auVar54._24_4_) + auVar28._24_4_;
  auVar53._28_4_ =
       auVar17._28_4_ * (float)((uint)(byte)(uVar2 >> 7) * auVar54._28_4_) + auVar28._28_4_;
  auVar50._0_4_ = auVar17._0_4_ * (float)((uint)(bVar11 & 1) * auVar55._0_4_) + auVar15._0_4_;
  auVar50._4_4_ =
       auVar17._4_4_ * (float)((uint)((byte)(uVar2 >> 1) & 1) * auVar55._4_4_) + auVar15._4_4_;
  auVar50._8_4_ =
       auVar17._8_4_ * (float)((uint)((byte)(uVar2 >> 2) & 1) * auVar55._8_4_) + auVar15._8_4_;
  auVar50._12_4_ =
       auVar17._12_4_ * (float)((uint)((byte)(uVar2 >> 3) & 1) * auVar55._12_4_) + auVar15._12_4_;
  auVar50._16_4_ =
       auVar17._16_4_ * (float)((uint)((byte)(uVar2 >> 4) & 1) * auVar55._16_4_) + auVar15._16_4_;
  auVar50._20_4_ =
       auVar17._20_4_ * (float)((uint)((byte)(uVar2 >> 5) & 1) * auVar55._20_4_) + auVar15._20_4_;
  auVar50._24_4_ =
       auVar17._24_4_ * (float)((uint)((byte)(uVar2 >> 6) & 1) * auVar55._24_4_) + auVar15._24_4_;
  auVar50._28_4_ =
       auVar17._28_4_ * (float)((uint)(byte)(uVar2 >> 7) * auVar55._28_4_) + auVar15._28_4_;
  puVar5 = (undefined4 *)(uVar8 * 3);
  pauVar10 = (undefined1 (*) [32])(param_1 + uVar8 * 0xc);
  if (bVar11 == 0xff) {
    auVar15 = vpermt2ps_avx512vl(auVar18,
                                 ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar16);
    auVar28 = vpermt2ps_avx512vl(auVar45,
                                 ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar16);
    auVar28 = vpermt2ps_avx512vl(auVar28,
                                 ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar15);
    *pauVar10 = auVar28;
    auVar28 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
    auVar15 = vpermt2ps_avx512vl(auVar15,
                                 ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar45);
    pauVar10[1] = auVar15;
    auVar54 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
    auVar15 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
    auVar45 = vpermt2ps_avx512vl(auVar16,
                                 ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                 ,auVar45);
    auVar45 = vpermt2ps_avx512vl(auVar45,
                                 ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar18);
    pauVar10[2] = auVar45;
    auVar21 = vpermi2ps_avx512vl(auVar21,auVar50,auVar53);
    auVar20 = vpermi2ps_avx512vl(auVar20,auVar19,auVar53);
    auVar20 = vpermt2ps_avx512vl(auVar20,auVar29,auVar21);
    *(undefined1 (*) [32])(param_2 + uVar8 * 0xc) = auVar20;
    auVar21 = vpermt2ps_avx512vl(auVar21,auVar28,auVar19);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar8 * 0xc) = auVar21;
    auVar19 = vpermt2ps_avx512vl(auVar53,auVar15,auVar19);
    auVar19 = vpermt2ps_avx512vl(auVar19,auVar54,auVar50);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar8 * 0xc) = auVar19;
  }
  else {
    vscatterdps_avx512vl
              (ZEXT832(pauVar10) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar2,auVar45
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar10) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar2,auVar16
              );
    vscatterdps_avx512vl
              (ZEXT832(pauVar10) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar2,auVar18
              );
    puVar5 = (undefined4 *)(param_2 + uVar8 * 0xc);
    vscatterdps_avx512vl
              (ZEXT832(puVar5) +
               ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000,uVar2,auVar19
              );
    vscatterdps_avx512vl
              (ZEXT832(puVar5) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar2,auVar53
              );
    vscatterdps_avx512vl
              (ZEXT832(puVar5) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar2,auVar50
              );
  }
  return puVar5;
}

