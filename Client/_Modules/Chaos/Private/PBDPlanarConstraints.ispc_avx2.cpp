// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 4

// ApplyPBDPlanarConstraintsWithFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuni_avx2 @ 1403013c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsWithFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuni_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,longlong param_6,float param_7,float param_8,uint param_9)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auVar15 [32];
  undefined1 auVar17 [16];
  undefined1 auVar16 [32];
  float fVar18;
  float fVar19;
  int iVar20;
  undefined1 auVar21 [32];
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
  float fVar35;
  float fVar36;
  undefined1 auVar22 [64];
  float fVar37;
  int iVar38;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar42;
  float fVar43;
  float fVar45;
  float fVar49;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  undefined1 in_ZMM2 [64];
  undefined1 auVar50 [32];
  undefined1 auVar53 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 in_ZMM5 [64];
  float fVar57;
  undefined1 auVar58 [32];
  float fVar68;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar61 [64];
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
  undefined1 auVar74 [32];
  float fVar82;
  undefined1 auVar75 [32];
  float fVar83;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  float fVar93;
  undefined1 auVar86 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  float fVar100;
  float fVar103;
  float fVar104;
  undefined1 auVar101 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar102 [32];
  undefined1 auVar110 [16];
  undefined1 auVar112 [16];
  undefined1 auVar111 [32];
  undefined1 auVar113 [16];
  undefined1 auVar116 [16];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 local_280 [32];
  int iVar9;
  
  uVar5 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar5 = param_9;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    iVar3 = 0;
  }
  else {
    auVar22 = ZEXT3264(CONCAT428(param_8,CONCAT424(param_8,CONCAT420(param_8,CONCAT416(param_8,
                                                  CONCAT412(param_8,CONCAT48(param_8,CONCAT44(
                                                  param_8,param_8))))))));
    iVar3 = 0;
    auVar61 = ZEXT1264(ZEXT812(0));
    local_280._4_4_ = __real_00000008;
    local_280._0_4_ = __real_00000008;
    local_280._8_4_ = __real_00000008;
    local_280._12_4_ = __real_00000008;
    local_280._16_4_ = __real_00000008;
    local_280._20_4_ = __real_00000008;
    local_280._24_4_ = __real_00000008;
    local_280._28_4_ = __real_00000008;
    auVar16._4_4_ = __real_0000000c;
    auVar16._0_4_ = __real_0000000c;
    auVar16._8_4_ = __real_0000000c;
    auVar16._12_4_ = __real_0000000c;
    auVar16._16_4_ = __real_0000000c;
    auVar16._20_4_ = __real_0000000c;
    auVar16._24_4_ = __real_0000000c;
    auVar16._28_4_ = __real_0000000c;
    lVar13 = 0;
    uVar14 = 0;
    do {
      auVar15 = vpslld_avx2(*(undefined1 (*) [32])(param_3 + (ulonglong)uVar14),4);
      auVar54 = vpcmpeqd_avx2(auVar22._0_32_,auVar22._0_32_);
      auVar84 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar54);
      auVar54 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar97 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar54);
      auVar22 = ZEXT3264(auVar15 | local_280);
      auVar54 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar40 = vgatherdps(ZEXT832(0),auVar54);
      in_ZMM2 = ZEXT3264(auVar40);
      auVar54 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar69 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar54);
      in_ZMM5 = ZEXT3264((undefined1  [32])0x0);
      auVar54 = vcmpps_avx(auVar69,auVar61._0_32_,8);
      in_ZMM3 = ZEXT3264(auVar54);
      if ((((((((SUB321(auVar54 >> 0x1f,0) & 1) == 0 && (SUB321(auVar54 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar54 >> 0x5f,0) & 1) == 0) && SUB321(auVar54 >> 0x7f,0) == '\0') &&
            (SUB321(auVar54 >> 0x9f,0) & 1) == 0) && SUB321(auVar54 >> 0xbf,0) == '\0') &&
          (SUB321(auVar54 >> 0xdf,0) & 1) == 0) && -1 < auVar54[0x1f]) {
        auVar54 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar13);
        auVar98 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar13);
        auVar94 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar54);
        auVar115 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,*(undefined1 (*) [32])(param_4 + lVar13));
        auVar94 = vblendps_avx(auVar115,auVar94,0x88);
        auVar115 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                ,auVar54);
        auVar21 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar98);
        auVar115 = vblendps_avx(auVar21,auVar115,0x13);
        auVar70._16_16_ = auVar115._0_16_;
        auVar70._0_16_ = auVar94._0_16_;
        auVar85 = vperm2f128_avx(auVar94,auVar115,0x31);
        auVar54 = vblendps_avx(auVar54,*(undefined1 (*) [32])(param_4 + lVar13),0x24);
        auVar54 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar54);
        auVar98 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar98);
        auVar94 = vblendps_avx(auVar54,auVar98,0xe0);
        auVar54 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar13);
        auVar98 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar13);
        auVar115 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                ,auVar54);
        auVar21 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*(undefined1 (*) [32])(param_5 + lVar13));
        auVar115 = vblendps_avx(auVar21,auVar115,0x88);
        auVar21 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar54);
        auVar58 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar98);
        auVar21 = vblendps_avx(auVar58,auVar21,0x13);
        auVar58 = vperm2f128_avx(auVar115,auVar21,0x31);
        auVar54 = vblendps_avx(auVar54,*(undefined1 (*) [32])(param_5 + lVar13),0x24);
        auVar54 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar54);
        auVar22 = ZEXT3264(___ymm_0000000700000004000000010000000000000003000000000000000100000000);
        auVar98 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar98);
        auVar54 = vblendps_avx(auVar54,auVar98,0xe0);
        auVar98 = vsubps_avx(auVar70,auVar84);
        auVar85 = vsubps_avx(auVar85,auVar97);
        auVar94 = vsubps_avx(auVar94,auVar40);
        fVar83 = auVar58._0_4_;
        fVar87 = auVar58._4_4_;
        fVar88 = auVar58._8_4_;
        fVar89 = auVar58._12_4_;
        fVar90 = auVar58._16_4_;
        fVar91 = auVar58._20_4_;
        fVar92 = auVar58._24_4_;
        fVar93 = auVar58._28_4_;
        fVar19 = auVar115._0_4_;
        fVar24 = auVar115._4_4_;
        fVar26 = auVar115._8_4_;
        fVar28 = auVar115._12_4_;
        fVar30 = auVar21._0_4_;
        fVar32 = auVar21._4_4_;
        fVar34 = auVar21._8_4_;
        fVar36 = auVar21._12_4_;
        fVar73 = auVar54._0_4_;
        auVar115._0_4_ = fVar73 * auVar94._0_4_ + fVar19 * auVar98._0_4_ + fVar83 * auVar85._0_4_;
        fVar76 = auVar54._4_4_;
        auVar115._4_4_ = fVar76 * auVar94._4_4_ + fVar24 * auVar98._4_4_ + fVar87 * auVar85._4_4_;
        fVar77 = auVar54._8_4_;
        auVar115._8_4_ = fVar77 * auVar94._8_4_ + fVar26 * auVar98._8_4_ + fVar88 * auVar85._8_4_;
        fVar78 = auVar54._12_4_;
        auVar115._12_4_ =
             fVar78 * auVar94._12_4_ + fVar28 * auVar98._12_4_ + fVar89 * auVar85._12_4_;
        fVar79 = auVar54._16_4_;
        auVar115._16_4_ =
             fVar79 * auVar94._16_4_ + fVar30 * auVar98._16_4_ + fVar90 * auVar85._16_4_;
        fVar80 = auVar54._20_4_;
        auVar115._20_4_ =
             fVar80 * auVar94._20_4_ + fVar32 * auVar98._20_4_ + fVar91 * auVar85._20_4_;
        fVar81 = auVar54._24_4_;
        auVar115._24_4_ =
             fVar81 * auVar94._24_4_ + fVar34 * auVar98._24_4_ + fVar92 * auVar85._24_4_;
        fVar82 = auVar54._28_4_;
        auVar115._28_4_ =
             fVar82 * auVar94._28_4_ + fVar36 * auVar98._28_4_ + fVar93 * auVar85._28_4_;
        in_ZMM3 = ZEXT3264(auVar115);
        auVar61 = ZEXT864(0) << 0x20;
        auVar54 = vcmpps_avx(ZEXT832(0) << 0x20,auVar115,1);
        auVar98 = vcmpps_avx(ZEXT832(0) << 0x20,auVar69,4);
        in_ZMM5 = ZEXT3264(auVar98);
        auVar101._0_4_ = auVar54._0_4_ & auVar98._0_4_;
        auVar101._4_4_ = auVar54._4_4_ & auVar98._4_4_;
        auVar101._8_4_ = auVar54._8_4_ & auVar98._8_4_;
        auVar101._12_4_ = auVar54._12_4_ & auVar98._12_4_;
        auVar94._16_4_ = auVar54._16_4_ & auVar98._16_4_;
        auVar94._0_16_ = auVar101;
        auVar94._20_4_ = auVar54._20_4_ & auVar98._20_4_;
        auVar94._24_4_ = auVar54._24_4_ & auVar98._24_4_;
        auVar94._28_4_ = auVar54._28_4_ & auVar98._28_4_;
        uVar12 = vmovmskps_avx(auVar94);
        if (uVar12 != 0) {
          auVar101 = vpackssdw_avx(auVar101,auVar94._16_16_);
          auVar54._0_4_ = fVar19 * auVar115._0_4_ + auVar84._0_4_;
          auVar54._4_4_ = fVar24 * auVar115._4_4_ + auVar84._4_4_;
          auVar54._8_4_ = fVar26 * auVar115._8_4_ + auVar84._8_4_;
          auVar54._12_4_ = fVar28 * auVar115._12_4_ + auVar84._12_4_;
          auVar54._16_4_ = fVar30 * auVar115._16_4_ + auVar84._16_4_;
          auVar54._20_4_ = fVar32 * auVar115._20_4_ + auVar84._20_4_;
          auVar54._24_4_ = fVar34 * auVar115._24_4_ + auVar84._24_4_;
          auVar54._28_4_ = fVar36 * auVar115._28_4_ + auVar84._28_4_;
          auVar98._0_4_ = fVar83 * auVar115._0_4_ + auVar97._0_4_;
          auVar98._4_4_ = fVar87 * auVar115._4_4_ + auVar97._4_4_;
          auVar98._8_4_ = fVar88 * auVar115._8_4_ + auVar97._8_4_;
          auVar98._12_4_ = fVar89 * auVar115._12_4_ + auVar97._12_4_;
          auVar98._16_4_ = fVar90 * auVar115._16_4_ + auVar97._16_4_;
          auVar98._20_4_ = fVar91 * auVar115._20_4_ + auVar97._20_4_;
          auVar98._24_4_ = fVar92 * auVar115._24_4_ + auVar97._24_4_;
          auVar98._28_4_ = fVar93 * auVar115._28_4_ + auVar97._28_4_;
          auVar84._0_4_ = fVar73 * auVar115._0_4_ + auVar40._0_4_;
          auVar84._4_4_ = fVar76 * auVar115._4_4_ + auVar40._4_4_;
          auVar84._8_4_ = fVar77 * auVar115._8_4_ + auVar40._8_4_;
          auVar84._12_4_ = fVar78 * auVar115._12_4_ + auVar40._12_4_;
          auVar84._16_4_ = fVar79 * auVar115._16_4_ + auVar40._16_4_;
          auVar84._20_4_ = fVar80 * auVar115._20_4_ + auVar40._20_4_;
          auVar84._24_4_ = fVar81 * auVar115._24_4_ + auVar40._24_4_;
          auVar84._28_4_ = fVar82 * auVar115._28_4_ + auVar40._28_4_;
          auVar97 = vpmovsxwd_avx2(auVar101);
          auVar54 = vmaskmovps_avx(auVar97,auVar54);
          auVar40 = vmaskmovps_avx(auVar97,auVar98);
          auVar84 = vmaskmovps_avx(auVar97,auVar84);
          cVar4 = (char)uVar12;
          if (cVar4 == -1) {
            auVar98 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar13);
            auVar21 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar13);
            auVar85 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                   ,auVar98);
            auVar58 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                   ,*(undefined1 (*) [32])(param_6 + lVar13));
            auVar85 = vblendps_avx(auVar58,auVar85,0x88);
            auVar58 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                   ,auVar98);
            auVar70 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,auVar21);
            auVar58 = vblendps_avx(auVar70,auVar58,0x13);
            auVar41._16_16_ = auVar58._0_16_;
            auVar41._0_16_ = auVar85._0_16_;
            auVar85 = vperm2f128_avx(auVar85,auVar58,0x31);
            auVar98 = vblendps_avx(auVar98,*(undefined1 (*) [32])(param_6 + lVar13),0x24);
            auVar98 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                   ,auVar98);
            auVar58._16_16_ = ___xmm_00000007000000040000000100000000;
            auVar58._0_16_ = ___xmm_00000007000000040000000100000000;
            auVar21 = vpermps_avx2(auVar58,auVar21);
            auVar98 = vblendps_avx(auVar98,auVar21,0xe0);
          }
          else {
            auVar41 = vgatherdps(ZEXT432(0) << 0x20,auVar94);
            auVar85 = vgatherdps(ZEXT432(0) << 0x20,auVar94);
            auVar98 = vgatherdps(ZEXT432(0) << 0x20,auVar94);
          }
          vpmulld_avx2(*(undefined1 (*) [32])(param_3 + (ulonglong)uVar14),auVar16);
          auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar94);
          auVar70 = vgatherdps(ZEXT832(0) << 0x20,auVar94);
          auVar21 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar94);
          auVar94 = vsubps_avx(auVar54,auVar58);
          fVar100 = -(param_8 * auVar41._0_4_) + auVar94._0_4_;
          fVar103 = -(param_8 * auVar41._4_4_) + auVar94._4_4_;
          fVar104 = -(param_8 * auVar41._8_4_) + auVar94._8_4_;
          fVar105 = -(param_8 * auVar41._12_4_) + auVar94._12_4_;
          fVar106 = -(param_8 * auVar41._16_4_) + auVar94._16_4_;
          fVar107 = -(param_8 * auVar41._20_4_) + auVar94._20_4_;
          fVar108 = -(param_8 * auVar41._24_4_) + auVar94._24_4_;
          fVar109 = -(param_8 * auVar41._28_4_) + auVar94._28_4_;
          in_ZMM5 = ZEXT3264(auVar40);
          auVar94 = vsubps_avx(auVar40,auVar70);
          fVar37 = -(param_8 * auVar85._0_4_) + auVar94._0_4_;
          fVar42 = -(param_8 * auVar85._4_4_) + auVar94._4_4_;
          fVar43 = -(param_8 * auVar85._8_4_) + auVar94._8_4_;
          fVar44 = -(param_8 * auVar85._12_4_) + auVar94._12_4_;
          fVar45 = -(param_8 * auVar85._16_4_) + auVar94._16_4_;
          fVar47 = -(param_8 * auVar85._20_4_) + auVar94._20_4_;
          fVar48 = -(param_8 * auVar85._24_4_) + auVar94._24_4_;
          fVar49 = -(param_8 * auVar85._28_4_) + auVar94._28_4_;
          auVar94 = vsubps_avx(auVar84,auVar21);
          fVar18 = -(param_8 * auVar98._0_4_) + auVar94._0_4_;
          fVar23 = -(param_8 * auVar98._4_4_) + auVar94._4_4_;
          fVar25 = -(param_8 * auVar98._8_4_) + auVar94._8_4_;
          fVar27 = -(param_8 * auVar98._12_4_) + auVar94._12_4_;
          fVar29 = -(param_8 * auVar98._16_4_) + auVar94._16_4_;
          fVar31 = -(param_8 * auVar98._20_4_) + auVar94._20_4_;
          fVar33 = -(param_8 * auVar98._24_4_) + auVar94._24_4_;
          fVar35 = -(param_8 * auVar98._28_4_) + auVar94._28_4_;
          fVar57 = fVar73 * fVar18 + fVar19 * fVar100 + fVar83 * fVar37;
          fVar62 = fVar76 * fVar23 + fVar24 * fVar103 + fVar87 * fVar42;
          fVar63 = fVar77 * fVar25 + fVar26 * fVar104 + fVar88 * fVar43;
          fVar64 = fVar78 * fVar27 + fVar28 * fVar105 + fVar89 * fVar44;
          fVar65 = fVar79 * fVar29 + fVar30 * fVar106 + fVar90 * fVar45;
          fVar66 = fVar80 * fVar31 + fVar32 * fVar107 + fVar91 * fVar47;
          fVar67 = fVar81 * fVar33 + fVar34 * fVar108 + fVar92 * fVar48;
          fVar68 = fVar82 * fVar35 + fVar36 * fVar109 + fVar93 * fVar49;
          fVar100 = -(fVar57 * fVar19) + fVar100;
          fVar103 = -(fVar62 * fVar24) + fVar103;
          fVar104 = -(fVar63 * fVar26) + fVar104;
          fVar105 = -(fVar64 * fVar28) + fVar105;
          fVar106 = -(fVar65 * fVar30) + fVar106;
          fVar107 = -(fVar66 * fVar32) + fVar107;
          fVar108 = -(fVar67 * fVar34) + fVar108;
          fVar109 = -(fVar68 * fVar36) + fVar109;
          fVar37 = -(fVar57 * fVar83) + fVar37;
          fVar42 = -(fVar62 * fVar87) + fVar42;
          fVar43 = -(fVar63 * fVar88) + fVar43;
          fVar44 = -(fVar64 * fVar89) + fVar44;
          fVar45 = -(fVar65 * fVar90) + fVar45;
          fVar47 = -(fVar66 * fVar91) + fVar47;
          fVar48 = -(fVar67 * fVar92) + fVar48;
          fVar49 = -(fVar68 * fVar93) + fVar49;
          fVar18 = -(fVar73 * fVar57) + fVar18;
          fVar23 = -(fVar76 * fVar62) + fVar23;
          fVar25 = -(fVar77 * fVar63) + fVar25;
          fVar27 = -(fVar78 * fVar64) + fVar27;
          fVar29 = -(fVar79 * fVar65) + fVar29;
          fVar31 = -(fVar80 * fVar66) + fVar31;
          fVar33 = -(fVar81 * fVar67) + fVar33;
          fVar35 = -(fVar82 * fVar68) + fVar35;
          auVar21._0_4_ = fVar18 * fVar18 + fVar100 * fVar100 + fVar37 * fVar37;
          auVar21._4_4_ = fVar23 * fVar23 + fVar103 * fVar103 + fVar42 * fVar42;
          auVar21._8_4_ = fVar25 * fVar25 + fVar104 * fVar104 + fVar43 * fVar43;
          auVar21._12_4_ = fVar27 * fVar27 + fVar105 * fVar105 + fVar44 * fVar44;
          auVar21._16_4_ = fVar29 * fVar29 + fVar106 * fVar106 + fVar45 * fVar45;
          auVar21._20_4_ = fVar31 * fVar31 + fVar107 * fVar107 + fVar47 * fVar47;
          auVar21._24_4_ = fVar33 * fVar33 + fVar108 * fVar108 + fVar48 * fVar48;
          auVar21._28_4_ = fVar35 * fVar35 + fVar109 * fVar109 + fVar49 * fVar49;
          auVar21 = vsqrtps_avx(auVar21);
          auVar50._0_4_ = auVar115._0_4_ * param_7;
          auVar50._4_4_ = auVar115._4_4_ * param_7;
          auVar50._8_4_ = auVar115._8_4_ * param_7;
          auVar50._12_4_ = auVar115._12_4_ * param_7;
          auVar50._16_4_ = auVar115._16_4_ * param_7;
          auVar50._20_4_ = auVar115._20_4_ * param_7;
          auVar50._24_4_ = auVar115._24_4_ * param_7;
          auVar50._28_4_ = auVar115._28_4_ * param_7;
          auVar98 = vminps_avx(auVar50,auVar21);
          auVar71._4_4_ = __real_322bcc77;
          auVar71._0_4_ = __real_322bcc77;
          auVar71._8_4_ = __real_322bcc77;
          auVar71._12_4_ = __real_322bcc77;
          auVar71._16_4_ = __real_322bcc77;
          auVar71._20_4_ = __real_322bcc77;
          auVar71._24_4_ = __real_322bcc77;
          auVar71._28_4_ = __real_322bcc77;
          auVar94 = vdivps_avx(auVar98,auVar21);
          auVar98 = vcmpps_avx(auVar21,auVar71,5);
          fVar19 = (float)(auVar98._0_4_ & auVar94._0_4_);
          fVar24 = (float)(auVar98._4_4_ & auVar94._4_4_);
          fVar26 = (float)(auVar98._8_4_ & auVar94._8_4_);
          fVar28 = (float)(auVar98._12_4_ & auVar94._12_4_);
          fVar30 = (float)(auVar98._16_4_ & auVar94._16_4_);
          fVar32 = (float)(auVar98._20_4_ & auVar94._20_4_);
          fVar34 = (float)(auVar98._24_4_ & auVar94._24_4_);
          fVar36 = (float)(auVar98._28_4_ & auVar94._28_4_);
          auVar22 = ZEXT3264(CONCAT428(fVar36,CONCAT424(fVar34,CONCAT420(fVar32,CONCAT416(fVar30,
                                                  CONCAT412(fVar28,CONCAT48(fVar26,CONCAT44(fVar24,
                                                  fVar19))))))));
          auVar102._0_4_ = -(fVar19 * fVar100) + auVar54._0_4_;
          auVar102._4_4_ = -(fVar24 * fVar103) + auVar54._4_4_;
          auVar102._8_4_ = -(fVar26 * fVar104) + auVar54._8_4_;
          auVar102._12_4_ = -(fVar28 * fVar105) + auVar54._12_4_;
          auVar102._16_4_ = -(fVar30 * fVar106) + auVar54._16_4_;
          auVar102._20_4_ = -(fVar32 * fVar107) + auVar54._20_4_;
          auVar102._24_4_ = -(fVar34 * fVar108) + auVar54._24_4_;
          auVar102._28_4_ = -(fVar36 * fVar109) + auVar54._28_4_;
          auVar85._0_4_ = -(fVar19 * fVar37) + auVar40._0_4_;
          auVar85._4_4_ = -(fVar24 * fVar42) + auVar40._4_4_;
          auVar85._8_4_ = -(fVar26 * fVar43) + auVar40._8_4_;
          auVar85._12_4_ = -(fVar28 * fVar44) + auVar40._12_4_;
          auVar85._16_4_ = -(fVar30 * fVar45) + auVar40._16_4_;
          auVar85._20_4_ = -(fVar32 * fVar47) + auVar40._20_4_;
          auVar85._24_4_ = -(fVar34 * fVar48) + auVar40._24_4_;
          auVar85._28_4_ = -(fVar36 * fVar49) + auVar40._28_4_;
          auVar59._0_4_ = -(fVar19 * fVar18) + auVar84._0_4_;
          auVar59._4_4_ = -(fVar24 * fVar23) + auVar84._4_4_;
          auVar59._8_4_ = -(fVar26 * fVar25) + auVar84._8_4_;
          auVar59._12_4_ = -(fVar28 * fVar27) + auVar84._12_4_;
          auVar59._16_4_ = -(fVar30 * fVar29) + auVar84._16_4_;
          auVar59._20_4_ = -(fVar32 * fVar31) + auVar84._20_4_;
          auVar59._24_4_ = -(fVar34 * fVar33) + auVar84._24_4_;
          auVar59._28_4_ = -(fVar36 * fVar35) + auVar84._28_4_;
          auVar54 = vmaskmovps_avx(auVar97,auVar102);
          auVar40 = vmaskmovps_avx(auVar97,auVar85);
          auVar84 = vmaskmovps_avx(auVar97,auVar59);
          in_ZMM3 = ZEXT3264(auVar54);
          iVar11 = auVar15._0_4_;
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + iVar11) = auVar54._0_4_;
          }
          auVar101 = auVar54._0_16_;
          iVar7 = auVar15._4_4_;
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar101,1);
            *(undefined4 *)(param_1 + iVar7) = uVar2;
          }
          auVar61 = ZEXT464(0) << 0x20;
          in_ZMM2 = ZEXT3264(auVar69);
          auVar17 = auVar15._16_16_;
          auVar39 = auVar69._0_16_;
          auVar46 = auVar69._16_16_;
          auVar53 = auVar54._16_16_;
          auVar113 = auVar40._0_16_;
          auVar116 = auVar40._16_16_;
          auVar110 = auVar84._0_16_;
          auVar112 = auVar84._16_16_;
          iVar8 = auVar15._8_4_;
          iVar9 = auVar15._12_4_;
          iVar20 = auVar15._16_4_;
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar101,2);
            *(undefined4 *)(param_1 + iVar8) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar101,3);
            *(undefined4 *)(param_1 + iVar9) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            auVar22 = ZEXT1664(auVar53);
            *(int *)(param_1 + iVar20) = auVar54._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar10 = vextractps_avx(auVar17,1);
            auVar22 = ZEXT1664(auVar53);
            uVar2 = vextractps_avx(auVar53,1);
            *(undefined4 *)(param_1 + iVar10) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar10 = vextractps_avx(auVar17,2);
            auVar22 = ZEXT1664(auVar53);
            uVar2 = vextractps_avx(auVar53,2);
            *(undefined4 *)(param_1 + iVar10) = uVar2;
          }
          if (cVar4 < '\0') {
            iVar10 = vextractps_avx(auVar17,3);
            auVar22 = ZEXT1664(auVar53);
            uVar2 = vextractps_avx(auVar53,3);
            *(undefined4 *)(param_1 + iVar10) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 4 + (longlong)iVar11) = auVar40._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar113,1);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar7) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar113,2);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar8) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar113,3);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            auVar22 = ZEXT1664(auVar116);
            *(int *)(param_1 + 4 + (longlong)iVar20) = auVar40._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar10 = vextractps_avx(auVar17,1);
            auVar22 = ZEXT1664(auVar116);
            uVar2 = vextractps_avx(auVar116,1);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar10 = vextractps_avx(auVar17,2);
            auVar22 = ZEXT1664(auVar116);
            uVar2 = vextractps_avx(auVar116,2);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
          }
          if (cVar4 < '\0') {
            iVar10 = vextractps_avx(auVar17,3);
            auVar22 = ZEXT1664(auVar116);
            uVar2 = vextractps_avx(auVar116,3);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 8 + (longlong)iVar11) = auVar84._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar110,1);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar7) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar110,2);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar8) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar110,3);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            auVar22 = ZEXT1664(auVar112);
            *(int *)(param_1 + 8 + (longlong)iVar20) = auVar84._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar10 = vextractps_avx(auVar17,1);
            auVar22 = ZEXT1664(auVar112);
            uVar2 = vextractps_avx(auVar112,1);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar10 = vextractps_avx(auVar17,2);
            auVar22 = ZEXT1664(auVar112);
            uVar2 = vextractps_avx(auVar112,2);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
          }
          if (cVar4 < '\0') {
            iVar10 = vextractps_avx(auVar17,3);
            auVar22 = ZEXT1664(auVar112);
            uVar2 = vextractps_avx(auVar112,3);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 0xc + (longlong)iVar11) = auVar69._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar39,1);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar7) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar39,2);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar8) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar39,3);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            auVar22 = ZEXT1664(auVar46);
            *(int *)(param_1 + 0xc + (longlong)iVar20) = auVar69._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar11 = vextractps_avx(auVar17,1);
            auVar22 = ZEXT1664(auVar46);
            uVar2 = vextractps_avx(auVar46,1);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar11 = vextractps_avx(auVar17,2);
            auVar22 = ZEXT1664(auVar46);
            uVar2 = vextractps_avx(auVar46,2);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar2;
          }
          if (cVar4 < '\0') {
            iVar11 = vextractps_avx(auVar17,3);
            uVar2 = vextractps_avx(auVar46,3);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar2;
          }
        }
      }
      uVar14 = uVar14 + 0x20;
      lVar13 = lVar13 + 0x60;
      iVar3 = iVar3 + 8;
    } while (iVar3 < (int)(uVar5 & 0xfffffff8));
  }
  if (iVar3 < (int)param_9) {
    auVar15._4_4_ = iVar3;
    auVar15._0_4_ = iVar3;
    auVar15._8_4_ = iVar3;
    auVar15._12_4_ = iVar3;
    auVar15._16_4_ = iVar3;
    auVar15._20_4_ = iVar3;
    auVar15._24_4_ = iVar3;
    auVar15._28_4_ = iVar3;
    auVar97 = vpor_avx2(auVar15,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar40._4_4_ = param_9;
    auVar40._0_4_ = param_9;
    auVar40._8_4_ = param_9;
    auVar40._12_4_ = param_9;
    auVar40._16_4_ = param_9;
    auVar40._20_4_ = param_9;
    auVar40._24_4_ = param_9;
    auVar40._28_4_ = param_9;
    auVar84 = vpcmpgtd_avx2(auVar40,auVar97);
    auVar69 = vmaskmovps_avx(auVar84,*(undefined1 (*) [32])(param_3 + (iVar3 << 2)));
    auVar98 = vpslld_avx2(auVar69,4);
    auVar16 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar84);
    auVar54 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar84);
    auVar15 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar84);
    auVar56._4_4_ = __real_0000000c;
    auVar56._0_4_ = __real_0000000c;
    auVar56._8_4_ = __real_0000000c;
    auVar56._12_4_ = __real_0000000c;
    auVar56._16_4_ = __real_0000000c;
    auVar56._20_4_ = __real_0000000c;
    auVar56._24_4_ = __real_0000000c;
    auVar56._28_4_ = __real_0000000c;
    auVar94 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar84);
    auVar16 = vmaskmovps_avx(auVar84,auVar16);
    auVar54 = vmaskmovps_avx(auVar84,auVar54);
    auVar15 = vmaskmovps_avx(auVar84,auVar15);
    auVar40 = vcmpps_avx(auVar94,ZEXT832(0) << 0x20,8);
    auVar40 = auVar84 & auVar40;
    if ((((((((SUB321(auVar40 >> 0x1f,0) & 1) == 0 && (SUB321(auVar40 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar40 >> 0x5f,0) & 1) == 0) && SUB321(auVar40 >> 0x7f,0) == '\0') &&
          (SUB321(auVar40 >> 0x9f,0) & 1) == 0) && SUB321(auVar40 >> 0xbf,0) == '\0') &&
        (SUB321(auVar40 >> 0xdf,0) & 1) == 0) && -1 < auVar40[0x1f]) {
      uVar6 = (ulonglong)auVar97._0_4_;
      pauVar1 = (undefined1 (*) [32])(param_4 + uVar6 * 0xc);
      auVar40 = vpcmpeqd_avx2(auVar97,auVar97);
      auVar40 = auVar40 & ~auVar84;
      if ((((((((SUB321(auVar40 >> 0x1f,0) & 1) == 0 && (SUB321(auVar40 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar40 >> 0x5f,0) & 1) == 0) && SUB321(auVar40 >> 0x7f,0) == '\0') &&
            (SUB321(auVar40 >> 0x9f,0) & 1) == 0) && SUB321(auVar40 >> 0xbf,0) == '\0') &&
          (SUB321(auVar40 >> 0xdf,0) & 1) == 0) && -1 < auVar40[0x1f]) {
        auVar40 = pauVar1[1];
        auVar97 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar40);
        auVar115 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,*pauVar1);
        auVar97 = vblendps_avx(auVar115,auVar97,0x88);
        auVar115 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                ,auVar40);
        auVar21 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar1[2]);
        auVar115 = vblendps_avx(auVar21,auVar115,0x13);
        auVar95._16_16_ = auVar115._0_16_;
        auVar95._0_16_ = auVar97._0_16_;
        auVar70 = vperm2f128_avx(auVar97,auVar115,0x31);
        auVar40 = vblendps_avx(auVar40,*pauVar1,0x24);
        auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar40);
        auVar97 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,pauVar1[2]);
        auVar21 = vblendps_avx(auVar40,auVar97,0xe0);
        auVar40 = *(undefined1 (*) [32])(param_5 + uVar6 * 0xc);
        auVar97 = *(undefined1 (*) [32])(param_5 + 0x20 + uVar6 * 0xc);
        auVar115 = *(undefined1 (*) [32])(param_5 + 0x40 + uVar6 * 0xc);
        auVar85 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar97);
        auVar58 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar40);
        auVar85 = vblendps_avx(auVar58,auVar85,0x88);
        auVar58 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar97);
        auVar41 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar115);
        auVar58 = vblendps_avx(auVar41,auVar58,0x13);
        auVar74._16_16_ = auVar58._0_16_;
        auVar74._0_16_ = auVar85._0_16_;
        auVar85 = vperm2f128_avx(auVar85,auVar58,0x31);
        auVar40 = vblendps_avx(auVar97,auVar40,0x24);
        auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar40);
        auVar97 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar115);
        auVar40 = vblendps_avx(auVar40,auVar97,0xe0);
      }
      else {
        auVar95 = vgatherdps(ZEXT832(0) << 0x20,auVar84);
        auVar70 = vgatherdps(ZEXT432(0) << 0x20,auVar84);
        auVar21 = vgatherdps(ZEXT432(0) << 0x20,auVar84);
        auVar74 = vgatherdps(ZEXT832(0),auVar84);
        auVar85 = vgatherdps(ZEXT832(0),auVar84);
        auVar40 = vgatherdps(ZEXT832(0) << 0x20,auVar84);
      }
      auVar97 = vsubps_avx(auVar95,auVar16);
      auVar115 = vsubps_avx(auVar70,auVar54);
      auVar21 = vsubps_avx(auVar21,auVar15);
      fVar83 = auVar85._0_4_;
      fVar87 = auVar85._4_4_;
      fVar88 = auVar85._8_4_;
      fVar89 = auVar85._12_4_;
      fVar90 = auVar85._16_4_;
      fVar91 = auVar85._20_4_;
      fVar92 = auVar85._24_4_;
      fVar93 = auVar85._28_4_;
      fVar73 = auVar74._0_4_;
      fVar76 = auVar74._4_4_;
      fVar77 = auVar74._8_4_;
      fVar78 = auVar74._12_4_;
      fVar79 = auVar74._16_4_;
      fVar80 = auVar74._20_4_;
      fVar81 = auVar74._24_4_;
      fVar82 = auVar74._28_4_;
      fVar19 = auVar40._0_4_;
      auVar96._0_4_ = fVar19 * auVar21._0_4_ + fVar73 * auVar97._0_4_ + fVar83 * auVar115._0_4_;
      fVar24 = auVar40._4_4_;
      auVar96._4_4_ = fVar24 * auVar21._4_4_ + fVar76 * auVar97._4_4_ + fVar87 * auVar115._4_4_;
      fVar26 = auVar40._8_4_;
      auVar96._8_4_ = fVar26 * auVar21._8_4_ + fVar77 * auVar97._8_4_ + fVar88 * auVar115._8_4_;
      fVar28 = auVar40._12_4_;
      auVar96._12_4_ = fVar28 * auVar21._12_4_ + fVar78 * auVar97._12_4_ + fVar89 * auVar115._12_4_;
      fVar30 = auVar40._16_4_;
      auVar96._16_4_ = fVar30 * auVar21._16_4_ + fVar79 * auVar97._16_4_ + fVar90 * auVar115._16_4_;
      fVar32 = auVar40._20_4_;
      auVar96._20_4_ = fVar32 * auVar21._20_4_ + fVar80 * auVar97._20_4_ + fVar91 * auVar115._20_4_;
      fVar34 = auVar40._24_4_;
      auVar96._24_4_ = fVar34 * auVar21._24_4_ + fVar81 * auVar97._24_4_ + fVar92 * auVar115._24_4_;
      fVar36 = auVar40._28_4_;
      auVar96._28_4_ = fVar36 * auVar21._28_4_ + fVar82 * auVar97._28_4_ + fVar93 * auVar115._28_4_;
      auVar40 = vcmpps_avx(ZEXT832(0) << 0x20,auVar96,1);
      auVar97 = vcmpps_avx(ZEXT832(0) << 0x20,auVar94,4);
      auVar72._0_4_ = auVar40._0_4_ & auVar97._0_4_ & auVar84._0_4_;
      auVar72._4_4_ = auVar40._4_4_ & auVar97._4_4_ & auVar84._4_4_;
      auVar72._8_4_ = auVar40._8_4_ & auVar97._8_4_ & auVar84._8_4_;
      auVar72._12_4_ = auVar40._12_4_ & auVar97._12_4_ & auVar84._12_4_;
      auVar72._16_4_ = auVar40._16_4_ & auVar97._16_4_ & auVar84._16_4_;
      auVar72._20_4_ = auVar40._20_4_ & auVar97._20_4_ & auVar84._20_4_;
      auVar72._24_4_ = auVar40._24_4_ & auVar97._24_4_ & auVar84._24_4_;
      auVar72._28_4_ = auVar40._28_4_ & auVar97._28_4_ & auVar84._28_4_;
      uVar5 = vmovmskps_avx(auVar72);
      if (uVar5 != 0) {
        auVar97._0_4_ = fVar73 * auVar96._0_4_ + auVar16._0_4_;
        auVar97._4_4_ = fVar76 * auVar96._4_4_ + auVar16._4_4_;
        auVar97._8_4_ = fVar77 * auVar96._8_4_ + auVar16._8_4_;
        auVar97._12_4_ = fVar78 * auVar96._12_4_ + auVar16._12_4_;
        auVar97._16_4_ = fVar79 * auVar96._16_4_ + auVar16._16_4_;
        auVar97._20_4_ = fVar80 * auVar96._20_4_ + auVar16._20_4_;
        auVar97._24_4_ = fVar81 * auVar96._24_4_ + auVar16._24_4_;
        auVar97._28_4_ = fVar82 * auVar96._28_4_ + auVar16._28_4_;
        auVar111._0_4_ = fVar83 * auVar96._0_4_ + auVar54._0_4_;
        auVar111._4_4_ = fVar87 * auVar96._4_4_ + auVar54._4_4_;
        auVar111._8_4_ = fVar88 * auVar96._8_4_ + auVar54._8_4_;
        auVar111._12_4_ = fVar89 * auVar96._12_4_ + auVar54._12_4_;
        auVar111._16_4_ = fVar90 * auVar96._16_4_ + auVar54._16_4_;
        auVar111._20_4_ = fVar91 * auVar96._20_4_ + auVar54._20_4_;
        auVar111._24_4_ = fVar92 * auVar96._24_4_ + auVar54._24_4_;
        auVar111._28_4_ = fVar93 * auVar96._28_4_ + auVar54._28_4_;
        auVar114._0_4_ = fVar19 * auVar96._0_4_ + auVar15._0_4_;
        auVar114._4_4_ = fVar24 * auVar96._4_4_ + auVar15._4_4_;
        auVar114._8_4_ = fVar26 * auVar96._8_4_ + auVar15._8_4_;
        auVar114._12_4_ = fVar28 * auVar96._12_4_ + auVar15._12_4_;
        auVar114._16_4_ = fVar30 * auVar96._16_4_ + auVar15._16_4_;
        auVar114._20_4_ = fVar32 * auVar96._20_4_ + auVar15._20_4_;
        auVar114._24_4_ = fVar34 * auVar96._24_4_ + auVar15._24_4_;
        auVar114._28_4_ = fVar36 * auVar96._28_4_ + auVar15._28_4_;
        auVar16 = vmaskmovps_avx(auVar72,auVar97);
        auVar54 = vmaskmovps_avx(auVar72,auVar111);
        auVar15 = vmaskmovps_avx(auVar72,auVar114);
        pauVar1 = (undefined1 (*) [32])(param_6 + uVar6 * 0xc);
        cVar4 = (char)uVar5;
        if (cVar4 == -1) {
          auVar40 = pauVar1[1];
          auVar84 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                 ,auVar40);
          auVar97 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar1);
          auVar84 = vblendps_avx(auVar97,auVar84,0x88);
          auVar97 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                 ,auVar40);
          auVar115 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                  ,pauVar1[2]);
          auVar97 = vblendps_avx(auVar115,auVar97,0x13);
          auVar99._16_16_ = auVar97._0_16_;
          auVar99._0_16_ = auVar84._0_16_;
          auVar84 = vperm2f128_avx(auVar84,auVar97,0x31);
          auVar40 = vblendps_avx(auVar40,*pauVar1,0x24);
          auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar40);
          auVar51._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar51._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar97 = vpermps_avx2(auVar51,pauVar1[2]);
          auVar40 = vblendps_avx(auVar40,auVar97,0xe0);
        }
        else {
          auVar99 = vgatherdps(ZEXT832(0) << 0x20,auVar72);
          auVar84 = vgatherdps(ZEXT832(0) << 0x20,auVar72);
          auVar40 = vgatherdps(ZEXT432(0) << 0x20,auVar72);
        }
        vpmulld_avx2(auVar69,auVar56);
        auVar69 = vgatherdps(ZEXT832(0) << 0x20,auVar72);
        auVar97 = vgatherdps(ZEXT432(0) << 0x20,auVar72);
        auVar115 = vgatherdps(ZEXT432(0) << 0x20,auVar72);
        auVar69 = vsubps_avx(auVar16,auVar69);
        fVar18 = -(param_8 * auVar99._0_4_) + auVar69._0_4_;
        fVar23 = -(param_8 * auVar99._4_4_) + auVar69._4_4_;
        fVar25 = -(param_8 * auVar99._8_4_) + auVar69._8_4_;
        fVar27 = -(param_8 * auVar99._12_4_) + auVar69._12_4_;
        fVar29 = -(param_8 * auVar99._16_4_) + auVar69._16_4_;
        fVar31 = -(param_8 * auVar99._20_4_) + auVar69._20_4_;
        fVar33 = -(param_8 * auVar99._24_4_) + auVar69._24_4_;
        fVar35 = -(param_8 * auVar99._28_4_) + auVar69._28_4_;
        auVar69 = vsubps_avx(auVar54,auVar97);
        fVar100 = -(param_8 * auVar84._0_4_) + auVar69._0_4_;
        fVar103 = -(param_8 * auVar84._4_4_) + auVar69._4_4_;
        fVar104 = -(param_8 * auVar84._8_4_) + auVar69._8_4_;
        fVar105 = -(param_8 * auVar84._12_4_) + auVar69._12_4_;
        fVar106 = -(param_8 * auVar84._16_4_) + auVar69._16_4_;
        fVar107 = -(param_8 * auVar84._20_4_) + auVar69._20_4_;
        fVar108 = -(param_8 * auVar84._24_4_) + auVar69._24_4_;
        fVar109 = -(param_8 * auVar84._28_4_) + auVar69._28_4_;
        auVar69 = vsubps_avx(auVar15,auVar115);
        fVar42 = -(param_8 * auVar40._0_4_) + auVar69._0_4_;
        fVar44 = -(param_8 * auVar40._4_4_) + auVar69._4_4_;
        fVar47 = -(param_8 * auVar40._8_4_) + auVar69._8_4_;
        fVar49 = -(param_8 * auVar40._12_4_) + auVar69._12_4_;
        fVar62 = -(param_8 * auVar40._16_4_) + auVar69._16_4_;
        fVar64 = -(param_8 * auVar40._20_4_) + auVar69._20_4_;
        fVar66 = -(param_8 * auVar40._24_4_) + auVar69._24_4_;
        fVar68 = -(param_8 * auVar40._28_4_) + auVar69._28_4_;
        fVar37 = fVar19 * fVar42 + fVar73 * fVar18 + fVar83 * fVar100;
        fVar43 = fVar24 * fVar44 + fVar76 * fVar23 + fVar87 * fVar103;
        fVar45 = fVar26 * fVar47 + fVar77 * fVar25 + fVar88 * fVar104;
        fVar48 = fVar28 * fVar49 + fVar78 * fVar27 + fVar89 * fVar105;
        fVar57 = fVar30 * fVar62 + fVar79 * fVar29 + fVar90 * fVar106;
        fVar63 = fVar32 * fVar64 + fVar80 * fVar31 + fVar91 * fVar107;
        fVar65 = fVar34 * fVar66 + fVar81 * fVar33 + fVar92 * fVar108;
        fVar67 = fVar36 * fVar68 + fVar82 * fVar35 + fVar93 * fVar109;
        fVar18 = -(fVar37 * fVar73) + fVar18;
        fVar23 = -(fVar43 * fVar76) + fVar23;
        fVar25 = -(fVar45 * fVar77) + fVar25;
        fVar27 = -(fVar48 * fVar78) + fVar27;
        fVar29 = -(fVar57 * fVar79) + fVar29;
        fVar31 = -(fVar63 * fVar80) + fVar31;
        fVar33 = -(fVar65 * fVar81) + fVar33;
        fVar35 = -(fVar67 * fVar82) + fVar35;
        fVar100 = -(fVar37 * fVar83) + fVar100;
        fVar103 = -(fVar43 * fVar87) + fVar103;
        fVar104 = -(fVar45 * fVar88) + fVar104;
        fVar105 = -(fVar48 * fVar89) + fVar105;
        fVar106 = -(fVar57 * fVar90) + fVar106;
        fVar107 = -(fVar63 * fVar91) + fVar107;
        fVar108 = -(fVar65 * fVar92) + fVar108;
        fVar109 = -(fVar67 * fVar93) + fVar109;
        fVar42 = -(fVar19 * fVar37) + fVar42;
        fVar44 = -(fVar24 * fVar43) + fVar44;
        fVar47 = -(fVar26 * fVar45) + fVar47;
        fVar49 = -(fVar28 * fVar48) + fVar49;
        fVar62 = -(fVar30 * fVar57) + fVar62;
        fVar64 = -(fVar32 * fVar63) + fVar64;
        fVar66 = -(fVar34 * fVar65) + fVar66;
        fVar68 = -(fVar36 * fVar67) + fVar68;
        auVar60._0_4_ = fVar42 * fVar42 + fVar18 * fVar18 + fVar100 * fVar100;
        auVar60._4_4_ = fVar44 * fVar44 + fVar23 * fVar23 + fVar103 * fVar103;
        auVar60._8_4_ = fVar47 * fVar47 + fVar25 * fVar25 + fVar104 * fVar104;
        auVar60._12_4_ = fVar49 * fVar49 + fVar27 * fVar27 + fVar105 * fVar105;
        auVar60._16_4_ = fVar62 * fVar62 + fVar29 * fVar29 + fVar106 * fVar106;
        auVar60._20_4_ = fVar64 * fVar64 + fVar31 * fVar31 + fVar107 * fVar107;
        auVar60._24_4_ = fVar66 * fVar66 + fVar33 * fVar33 + fVar108 * fVar108;
        auVar60._28_4_ = fVar68 * fVar68 + fVar35 * fVar35 + fVar109 * fVar109;
        auVar84 = vsqrtps_avx(auVar60);
        auVar75._0_4_ = param_7 * auVar96._0_4_;
        auVar75._4_4_ = param_7 * auVar96._4_4_;
        auVar75._8_4_ = param_7 * auVar96._8_4_;
        auVar75._12_4_ = param_7 * auVar96._12_4_;
        auVar75._16_4_ = param_7 * auVar96._16_4_;
        auVar75._20_4_ = param_7 * auVar96._20_4_;
        auVar75._24_4_ = param_7 * auVar96._24_4_;
        auVar75._28_4_ = param_7 * auVar96._28_4_;
        auVar40 = vminps_avx(auVar75,auVar84);
        auVar86._4_4_ = __real_322bcc77;
        auVar86._0_4_ = __real_322bcc77;
        auVar86._8_4_ = __real_322bcc77;
        auVar86._12_4_ = __real_322bcc77;
        auVar86._16_4_ = __real_322bcc77;
        auVar86._20_4_ = __real_322bcc77;
        auVar86._24_4_ = __real_322bcc77;
        auVar86._28_4_ = __real_322bcc77;
        auVar69 = vdivps_avx(auVar40,auVar84);
        auVar40 = vcmpps_avx(auVar84,auVar86,5);
        fVar19 = (float)(auVar69._0_4_ & auVar40._0_4_);
        fVar24 = (float)(auVar69._4_4_ & auVar40._4_4_);
        fVar26 = (float)(auVar69._8_4_ & auVar40._8_4_);
        fVar28 = (float)(auVar69._12_4_ & auVar40._12_4_);
        fVar30 = (float)(auVar69._16_4_ & auVar40._16_4_);
        fVar32 = (float)(auVar69._20_4_ & auVar40._20_4_);
        fVar34 = (float)(auVar69._24_4_ & auVar40._24_4_);
        fVar36 = (float)(auVar69._28_4_ & auVar40._28_4_);
        auVar69._0_4_ = -(fVar19 * fVar18) + auVar16._0_4_;
        auVar69._4_4_ = -(fVar24 * fVar23) + auVar16._4_4_;
        auVar69._8_4_ = -(fVar26 * fVar25) + auVar16._8_4_;
        auVar69._12_4_ = -(fVar28 * fVar27) + auVar16._12_4_;
        auVar69._16_4_ = -(fVar30 * fVar29) + auVar16._16_4_;
        auVar69._20_4_ = -(fVar32 * fVar31) + auVar16._20_4_;
        auVar69._24_4_ = -(fVar34 * fVar33) + auVar16._24_4_;
        auVar69._28_4_ = -(fVar36 * fVar35) + auVar16._28_4_;
        auVar55._0_4_ = -(fVar19 * fVar100) + auVar54._0_4_;
        auVar55._4_4_ = -(fVar24 * fVar103) + auVar54._4_4_;
        auVar55._8_4_ = -(fVar26 * fVar104) + auVar54._8_4_;
        auVar55._12_4_ = -(fVar28 * fVar105) + auVar54._12_4_;
        auVar55._16_4_ = -(fVar30 * fVar106) + auVar54._16_4_;
        auVar55._20_4_ = -(fVar32 * fVar107) + auVar54._20_4_;
        auVar55._24_4_ = -(fVar34 * fVar108) + auVar54._24_4_;
        auVar55._28_4_ = -(fVar36 * fVar109) + auVar54._28_4_;
        auVar52._0_4_ = -(fVar19 * fVar42) + auVar15._0_4_;
        auVar52._4_4_ = -(fVar24 * fVar44) + auVar15._4_4_;
        auVar52._8_4_ = -(fVar26 * fVar47) + auVar15._8_4_;
        auVar52._12_4_ = -(fVar28 * fVar49) + auVar15._12_4_;
        auVar52._16_4_ = -(fVar30 * fVar62) + auVar15._16_4_;
        auVar52._20_4_ = -(fVar32 * fVar64) + auVar15._20_4_;
        auVar52._24_4_ = -(fVar34 * fVar66) + auVar15._24_4_;
        auVar52._28_4_ = -(fVar36 * fVar68) + auVar15._28_4_;
        auVar16 = vmaskmovps_avx(auVar72,auVar69);
        auVar54 = vmaskmovps_avx(auVar72,auVar55);
        auVar15 = vmaskmovps_avx(auVar72,auVar52);
        iVar38 = auVar98._0_4_;
        auVar101 = auVar16._0_16_;
        auVar46 = auVar16._16_16_;
        iVar3 = auVar98._4_4_;
        iVar11 = auVar98._8_4_;
        iVar7 = auVar98._12_4_;
        iVar10 = auVar98._16_4_;
        iVar8 = auVar98._20_4_;
        iVar9 = auVar98._24_4_;
        iVar20 = auVar98._28_4_;
        auVar17 = auVar54._0_16_;
        auVar39 = auVar15._0_16_;
        auVar53 = auVar54._16_16_;
        auVar110 = auVar15._16_16_;
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + iVar38) = auVar16._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar2 = vextractps_avx(auVar101,1);
          *(undefined4 *)(param_1 + iVar3) = uVar2;
        }
        if ((uVar5 & 4) != 0) {
          uVar2 = vextractps_avx(auVar101,2);
          *(undefined4 *)(param_1 + iVar11) = uVar2;
        }
        if ((uVar5 & 8) != 0) {
          uVar2 = vextractps_avx(auVar101,3);
          *(undefined4 *)(param_1 + iVar7) = uVar2;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(param_1 + iVar10) = auVar16._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar46,1);
          *(undefined4 *)(param_1 + iVar8) = uVar2;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar46,2);
          *(undefined4 *)(param_1 + iVar9) = uVar2;
        }
        if (cVar4 < '\0') {
          uVar2 = vextractps_avx(auVar46,3);
          *(undefined4 *)(param_1 + iVar20) = uVar2;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar38) = auVar54._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar2 = vextractps_avx(auVar17,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar3) = uVar2;
        }
        if ((uVar5 & 4) != 0) {
          uVar2 = vextractps_avx(auVar17,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar2;
        }
        if ((uVar5 & 8) != 0) {
          uVar2 = vextractps_avx(auVar17,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar7) = uVar2;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar10) = auVar54._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar53,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar8) = uVar2;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar53,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar9) = uVar2;
        }
        if (cVar4 < '\0') {
          uVar2 = vextractps_avx(auVar53,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar2;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar38) = auVar15._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar2 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar3) = uVar2;
        }
        if ((uVar5 & 4) != 0) {
          uVar2 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar2;
        }
        if ((uVar5 & 8) != 0) {
          uVar2 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar7) = uVar2;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar10) = auVar15._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar110,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar8) = uVar2;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar110,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar9) = uVar2;
        }
        if (cVar4 < '\0') {
          uVar2 = vextractps_avx(auVar110,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar2;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar38) = auVar94._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar3) = auVar94._4_4_;
        }
        if ((uVar5 & 4) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar11) = auVar94._8_4_;
        }
        if ((uVar5 & 8) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar7) = auVar94._12_4_;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar10) = auVar94._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar8) = auVar94._20_4_;
        }
        if ((uVar5 & 0x40) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar9) = auVar94._24_4_;
        }
        if (cVar4 < '\0') {
          *(int *)(param_1 + 0xc + (longlong)iVar20) = auVar94._28_4_;
        }
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsNoFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_Cuni_avx2 @ 1403027a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsNoFriction___un_3C_s_5B_unFVector4f_5D__3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_Cuni_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  int iVar17;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [64];
  undefined1 auVar33 [32];
  int iVar34;
  undefined1 auVar35 [32];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  int iVar10;
  undefined1 auVar27 [32];
  
  uVar3 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar3 = param_5;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    iVar8 = 0;
  }
  else {
    lVar7 = 0x10;
    iVar8 = 0;
    auVar32 = ZEXT1264(ZEXT812(0));
    uVar6 = 0;
    do {
      auVar22 = *(undefined1 (*) [32])(param_2 + (ulonglong)uVar6);
      auVar35 = vpslld_avx2(auVar22,4);
      auVar22 = vpcmpeqd_avx2(auVar22,auVar22);
      auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar22 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar22 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar22 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar18 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      in_ZMM5 = ZEXT3264((undefined1  [32])0x0);
      auVar22 = vcmpps_avx(auVar32._0_32_,auVar18,8);
      if ((((((((SUB321(auVar22 >> 0x1f,0) & 1) == 0 && (SUB321(auVar22 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar22 >> 0x5f,0) & 1) == 0) && SUB321(auVar22 >> 0x7f,0) == '\0') &&
            (SUB321(auVar22 >> 0x9f,0) & 1) == 0) && SUB321(auVar22 >> 0xbf,0) == '\0') &&
          (SUB321(auVar22 >> 0xdf,0) & 1) == 0) && -1 < auVar22[0x1f]) {
        auVar22 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar7 * 4);
        auVar15 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar7 * 4);
        auVar16 = *(undefined1 (*) [32])(param_3 + lVar7 * 4);
        auVar27 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar15);
        auVar25 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar22);
        auVar27 = vblendps_avx(auVar25,auVar27,0x88);
        auVar25 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar15);
        auVar30 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar16);
        auVar25 = vblendps_avx(auVar30,auVar25,0x13);
        auVar33._16_16_ = auVar25._0_16_;
        auVar33._0_16_ = auVar27._0_16_;
        auVar24 = vperm2f128_avx(auVar27,auVar25,0x31);
        auVar22 = vblendps_avx(auVar15,auVar22,0x24);
        auVar22 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar22);
        auVar15 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar16);
        auVar27 = vblendps_avx(auVar22,auVar15,0xe0);
        auVar22 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar7 * 4);
        auVar15 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar7 * 4);
        auVar16 = *(undefined1 (*) [32])(param_4 + lVar7 * 4);
        auVar25 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar15);
        auVar30 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar22);
        auVar25 = vblendps_avx(auVar30,auVar25,0x88);
        auVar30 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar15);
        auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar16);
        auVar30 = vblendps_avx(auVar23,auVar30,0x13);
        auVar23 = vperm2f128_avx(auVar25,auVar30,0x31);
        auVar22 = vblendps_avx(auVar15,auVar22,0x24);
        auVar32 = ZEXT864(0) << 0x20;
        auVar22 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar22);
        auVar15 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar16);
        auVar22 = vblendps_avx(auVar22,auVar15,0xe0);
        in_ZMM5 = ZEXT3264(auVar22);
        auVar15 = vsubps_avx(auVar33,auVar38);
        auVar16 = vsubps_avx(auVar24,auVar40);
        auVar27 = vsubps_avx(auVar27,auVar43);
        auVar24._0_4_ =
             auVar22._0_4_ * auVar27._0_4_ +
             auVar25._0_4_ * auVar15._0_4_ + auVar23._0_4_ * auVar16._0_4_;
        auVar24._4_4_ =
             auVar22._4_4_ * auVar27._4_4_ +
             auVar25._4_4_ * auVar15._4_4_ + auVar23._4_4_ * auVar16._4_4_;
        auVar24._8_4_ =
             auVar22._8_4_ * auVar27._8_4_ +
             auVar25._8_4_ * auVar15._8_4_ + auVar23._8_4_ * auVar16._8_4_;
        auVar24._12_4_ =
             auVar22._12_4_ * auVar27._12_4_ +
             auVar25._12_4_ * auVar15._12_4_ + auVar23._12_4_ * auVar16._12_4_;
        auVar24._16_4_ =
             auVar22._16_4_ * auVar27._16_4_ +
             auVar30._0_4_ * auVar15._16_4_ + auVar23._16_4_ * auVar16._16_4_;
        auVar24._20_4_ =
             auVar22._20_4_ * auVar27._20_4_ +
             auVar30._4_4_ * auVar15._20_4_ + auVar23._20_4_ * auVar16._20_4_;
        auVar24._24_4_ =
             auVar22._24_4_ * auVar27._24_4_ +
             auVar30._8_4_ * auVar15._24_4_ + auVar23._24_4_ * auVar16._24_4_;
        auVar24._28_4_ =
             auVar22._28_4_ * auVar27._28_4_ +
             auVar30._12_4_ * auVar15._28_4_ + auVar23._28_4_ * auVar16._28_4_;
        auVar15 = vcmpps_avx(ZEXT832(0) << 0x20,auVar24,1);
        auVar16 = vcmpps_avx(ZEXT832(0) << 0x20,auVar18,4);
        auVar26._0_4_ = auVar15._0_4_ & auVar16._0_4_;
        auVar26._4_4_ = auVar15._4_4_ & auVar16._4_4_;
        auVar26._8_4_ = auVar15._8_4_ & auVar16._8_4_;
        auVar26._12_4_ = auVar15._12_4_ & auVar16._12_4_;
        auVar27._16_4_ = auVar15._16_4_ & auVar16._16_4_;
        auVar27._0_16_ = auVar26;
        auVar27._20_4_ = auVar15._20_4_ & auVar16._20_4_;
        auVar27._24_4_ = auVar15._24_4_ & auVar16._24_4_;
        auVar27._28_4_ = auVar15._28_4_ & auVar16._28_4_;
        uVar12 = vmovmskps_avx(auVar27);
        if (uVar12 != 0) {
          auVar26 = vpackssdw_avx(auVar26,auVar27._16_16_);
          auVar16._0_4_ = auVar24._0_4_ * auVar25._0_4_ + auVar38._0_4_;
          auVar16._4_4_ = auVar24._4_4_ * auVar25._4_4_ + auVar38._4_4_;
          auVar16._8_4_ = auVar24._8_4_ * auVar25._8_4_ + auVar38._8_4_;
          auVar16._12_4_ = auVar24._12_4_ * auVar25._12_4_ + auVar38._12_4_;
          auVar16._16_4_ = auVar24._16_4_ * auVar30._0_4_ + auVar38._16_4_;
          auVar16._20_4_ = auVar24._20_4_ * auVar30._4_4_ + auVar38._20_4_;
          auVar16._24_4_ = auVar24._24_4_ * auVar30._8_4_ + auVar38._24_4_;
          auVar16._28_4_ = auVar24._28_4_ * auVar30._12_4_ + auVar38._28_4_;
          auVar38._0_4_ = auVar24._0_4_ * auVar23._0_4_ + auVar40._0_4_;
          auVar38._4_4_ = auVar24._4_4_ * auVar23._4_4_ + auVar40._4_4_;
          auVar38._8_4_ = auVar24._8_4_ * auVar23._8_4_ + auVar40._8_4_;
          auVar38._12_4_ = auVar24._12_4_ * auVar23._12_4_ + auVar40._12_4_;
          auVar38._16_4_ = auVar24._16_4_ * auVar23._16_4_ + auVar40._16_4_;
          auVar38._20_4_ = auVar24._20_4_ * auVar23._20_4_ + auVar40._20_4_;
          auVar38._24_4_ = auVar24._24_4_ * auVar23._24_4_ + auVar40._24_4_;
          auVar38._28_4_ = auVar24._28_4_ * auVar23._28_4_ + auVar40._28_4_;
          auVar15._0_4_ = auVar24._0_4_ * auVar22._0_4_ + auVar43._0_4_;
          auVar15._4_4_ = auVar24._4_4_ * auVar22._4_4_ + auVar43._4_4_;
          auVar15._8_4_ = auVar24._8_4_ * auVar22._8_4_ + auVar43._8_4_;
          auVar15._12_4_ = auVar24._12_4_ * auVar22._12_4_ + auVar43._12_4_;
          auVar15._16_4_ = auVar24._16_4_ * auVar22._16_4_ + auVar43._16_4_;
          auVar15._20_4_ = auVar24._20_4_ * auVar22._20_4_ + auVar43._20_4_;
          auVar15._24_4_ = auVar24._24_4_ * auVar22._24_4_ + auVar43._24_4_;
          auVar15._28_4_ = auVar24._28_4_ * auVar22._28_4_ + auVar43._28_4_;
          in_ZMM5 = ZEXT3264(auVar15);
          auVar40 = vpmovsxwd_avx2(auVar26);
          auVar22 = vmaskmovps_avx(auVar40,auVar16);
          auVar38 = vmaskmovps_avx(auVar40,auVar38);
          auVar40 = vmaskmovps_avx(auVar40,auVar15);
          cVar5 = (char)uVar12;
          auVar26 = auVar18._0_16_;
          auVar21 = auVar18._16_16_;
          iVar34 = auVar35._0_4_;
          auVar36 = auVar35._16_16_;
          auVar42 = auVar22._0_16_;
          auVar44 = auVar22._16_16_;
          iVar13 = auVar35._4_4_;
          iVar9 = auVar35._8_4_;
          iVar10 = auVar35._12_4_;
          iVar14 = auVar35._16_4_;
          auVar20 = auVar38._0_16_;
          auVar41 = auVar38._16_16_;
          auVar37 = auVar40._0_16_;
          auVar39 = auVar40._16_16_;
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + iVar34) = auVar22._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar42,1);
            *(undefined4 *)(param_1 + iVar13) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar42,2);
            *(undefined4 *)(param_1 + iVar9) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar42,3);
            *(undefined4 *)(param_1 + iVar10) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            *(int *)(param_1 + iVar14) = auVar22._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar11 = vextractps_avx(auVar36,1);
            uVar2 = vextractps_avx(auVar44,1);
            *(undefined4 *)(param_1 + iVar11) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar11 = vextractps_avx(auVar36,2);
            uVar2 = vextractps_avx(auVar44,2);
            *(undefined4 *)(param_1 + iVar11) = uVar2;
          }
          if (cVar5 < '\0') {
            iVar11 = vextractps_avx(auVar36,3);
            uVar2 = vextractps_avx(auVar44,3);
            *(undefined4 *)(param_1 + iVar11) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 4 + (longlong)iVar34) = auVar38._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar20,1);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar20,2);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar20,3);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            *(int *)(param_1 + 4 + (longlong)iVar14) = auVar38._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar11 = vextractps_avx(auVar36,1);
            uVar2 = vextractps_avx(auVar41,1);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar11 = vextractps_avx(auVar36,2);
            uVar2 = vextractps_avx(auVar41,2);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar2;
          }
          if (cVar5 < '\0') {
            iVar11 = vextractps_avx(auVar36,3);
            uVar2 = vextractps_avx(auVar41,3);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 8 + (longlong)iVar34) = auVar40._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar37,1);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar37,2);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar37,3);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            *(int *)(param_1 + 8 + (longlong)iVar14) = auVar40._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar11 = vextractps_avx(auVar36,1);
            uVar2 = vextractps_avx(auVar39,1);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar11 = vextractps_avx(auVar36,2);
            uVar2 = vextractps_avx(auVar39,2);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar2;
          }
          if (cVar5 < '\0') {
            iVar11 = vextractps_avx(auVar36,3);
            uVar2 = vextractps_avx(auVar39,3);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 0xc + (longlong)iVar34) = auVar18._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar26,1);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar26,2);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar26,3);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            *(int *)(param_1 + 0xc + (longlong)iVar14) = auVar18._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar13 = vextractps_avx(auVar36,1);
            uVar2 = vextractps_avx(auVar21,1);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar13 = vextractps_avx(auVar36,2);
            uVar2 = vextractps_avx(auVar21,2);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
          }
          if (cVar5 < '\0') {
            iVar13 = vextractps_avx(auVar36,3);
            uVar2 = vextractps_avx(auVar21,3);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
          }
        }
      }
      uVar6 = uVar6 + 0x20;
      lVar7 = lVar7 + 0x18;
      iVar8 = iVar8 + 8;
    } while (iVar8 < (int)(uVar3 & 0xfffffff8));
  }
  if (iVar8 < (int)param_5) {
    auVar22._4_4_ = iVar8;
    auVar22._0_4_ = iVar8;
    auVar22._8_4_ = iVar8;
    auVar22._12_4_ = iVar8;
    auVar22._16_4_ = iVar8;
    auVar22._20_4_ = iVar8;
    auVar22._24_4_ = iVar8;
    auVar22._28_4_ = iVar8;
    auVar43 = vpor_avx2(auVar22,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar18._4_4_ = param_5;
    auVar18._0_4_ = param_5;
    auVar18._8_4_ = param_5;
    auVar18._12_4_ = param_5;
    auVar18._16_4_ = param_5;
    auVar18._20_4_ = param_5;
    auVar18._24_4_ = param_5;
    auVar18._28_4_ = param_5;
    auVar40 = vpcmpgtd_avx2(auVar18,auVar43);
    auVar22 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_2 + (iVar8 << 2)));
    auVar15 = vpslld_avx2(auVar22,4);
    auVar22 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
    auVar18 = vgatherdps(ZEXT832(0),auVar40);
    auVar35 = vgatherdps(ZEXT832(0),auVar40);
    auVar16 = vgatherdps(ZEXT432(0) << 0x20,auVar40);
    auVar22 = vmaskmovps_avx(auVar40,auVar22);
    auVar18 = vmaskmovps_avx(auVar40,auVar18);
    auVar35 = vmaskmovps_avx(auVar40,auVar35);
    auVar38 = vcmpps_avx(auVar16,ZEXT832(0) << 0x20,8);
    auVar38 = auVar40 & auVar38;
    if ((((((((SUB321(auVar38 >> 0x1f,0) & 1) == 0 && (SUB321(auVar38 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar38 >> 0x5f,0) & 1) == 0) && SUB321(auVar38 >> 0x7f,0) == '\0') &&
          (SUB321(auVar38 >> 0x9f,0) & 1) == 0) && SUB321(auVar38 >> 0xbf,0) == '\0') &&
        (SUB321(auVar38 >> 0xdf,0) & 1) == 0) && -1 < auVar38[0x1f]) {
      uVar4 = (ulonglong)auVar43._0_4_;
      pauVar1 = (undefined1 (*) [32])(param_3 + uVar4 * 0xc);
      auVar38 = vpcmpeqd_avx2(auVar43,auVar43);
      auVar38 = auVar38 & ~auVar40;
      if ((((((((SUB321(auVar38 >> 0x1f,0) & 1) == 0 && (SUB321(auVar38 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar38 >> 0x5f,0) & 1) == 0) && SUB321(auVar38 >> 0x7f,0) == '\0') &&
            (SUB321(auVar38 >> 0x9f,0) & 1) == 0) && SUB321(auVar38 >> 0xbf,0) == '\0') &&
          (SUB321(auVar38 >> 0xdf,0) & 1) == 0) && -1 < auVar38[0x1f]) {
        auVar38 = pauVar1[1];
        auVar43 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar38);
        auVar27 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*pauVar1);
        auVar43 = vblendps_avx(auVar27,auVar43,0x88);
        auVar27 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar38);
        auVar25 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar1[2]);
        auVar27 = vblendps_avx(auVar25,auVar27,0x13);
        auVar19._16_16_ = auVar27._0_16_;
        auVar19._0_16_ = auVar43._0_16_;
        auVar23 = vperm2f128_avx(auVar43,auVar27,0x31);
        auVar38 = vblendps_avx(auVar38,*pauVar1,0x24);
        auVar38 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar38);
        auVar43 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,pauVar1[2]);
        auVar25 = vblendps_avx(auVar38,auVar43,0xe0);
        auVar38 = *(undefined1 (*) [32])(param_4 + uVar4 * 0xc);
        auVar43 = *(undefined1 (*) [32])(param_4 + 0x20 + uVar4 * 0xc);
        auVar27 = *(undefined1 (*) [32])(param_4 + 0x40 + uVar4 * 0xc);
        auVar30 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar43);
        auVar24 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar38);
        auVar30 = vblendps_avx(auVar24,auVar30,0x88);
        auVar24 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar43);
        auVar33 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar27);
        auVar24 = vblendps_avx(auVar33,auVar24,0x13);
        auVar28._16_16_ = auVar24._0_16_;
        auVar28._0_16_ = auVar30._0_16_;
        auVar30 = vperm2f128_avx(auVar30,auVar24,0x31);
        auVar38 = vblendps_avx(auVar43,auVar38,0x24);
        auVar38 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar38);
        auVar43 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar27);
        auVar38 = vblendps_avx(auVar38,auVar43,0xe0);
      }
      else {
        auVar19 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
        auVar23 = vgatherdps(ZEXT832(0),auVar40);
        auVar25 = vgatherdps(ZEXT832(0),auVar40);
        auVar28 = vgatherdps(ZEXT832(0),auVar40);
        auVar30 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
        auVar38 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      }
      auVar43 = vsubps_avx(auVar19,auVar22);
      auVar27 = vsubps_avx(auVar23,auVar18);
      auVar25 = vsubps_avx(auVar25,auVar35);
      auVar23._0_4_ =
           auVar38._0_4_ * auVar25._0_4_ +
           auVar28._0_4_ * auVar43._0_4_ + auVar30._0_4_ * auVar27._0_4_;
      auVar23._4_4_ =
           auVar38._4_4_ * auVar25._4_4_ +
           auVar28._4_4_ * auVar43._4_4_ + auVar30._4_4_ * auVar27._4_4_;
      auVar23._8_4_ =
           auVar38._8_4_ * auVar25._8_4_ +
           auVar28._8_4_ * auVar43._8_4_ + auVar30._8_4_ * auVar27._8_4_;
      auVar23._12_4_ =
           auVar38._12_4_ * auVar25._12_4_ +
           auVar28._12_4_ * auVar43._12_4_ + auVar30._12_4_ * auVar27._12_4_;
      auVar23._16_4_ =
           auVar38._16_4_ * auVar25._16_4_ +
           auVar28._16_4_ * auVar43._16_4_ + auVar30._16_4_ * auVar27._16_4_;
      auVar23._20_4_ =
           auVar38._20_4_ * auVar25._20_4_ +
           auVar28._20_4_ * auVar43._20_4_ + auVar30._20_4_ * auVar27._20_4_;
      auVar23._24_4_ =
           auVar38._24_4_ * auVar25._24_4_ +
           auVar28._24_4_ * auVar43._24_4_ + auVar30._24_4_ * auVar27._24_4_;
      auVar23._28_4_ =
           auVar38._28_4_ * auVar25._28_4_ +
           auVar28._28_4_ * auVar43._28_4_ + auVar30._28_4_ * auVar27._28_4_;
      auVar43 = vcmpps_avx(ZEXT832(0) << 0x20,auVar23,1);
      auVar27 = vcmpps_avx(auVar16,ZEXT832(0) << 0x20,4);
      auVar21._0_4_ = auVar43._0_4_ & auVar27._0_4_;
      auVar21._4_4_ = auVar43._4_4_ & auVar27._4_4_;
      auVar21._8_4_ = auVar43._8_4_ & auVar27._8_4_;
      auVar21._12_4_ = auVar43._12_4_ & auVar27._12_4_;
      auVar25._16_4_ = auVar43._16_4_ & auVar27._16_4_;
      auVar25._0_16_ = auVar21;
      auVar25._20_4_ = auVar43._20_4_ & auVar27._20_4_;
      auVar25._24_4_ = auVar43._24_4_ & auVar27._24_4_;
      auVar25._28_4_ = auVar43._28_4_ & auVar27._28_4_;
      auVar43._0_4_ = auVar21._0_4_ & auVar40._0_4_;
      auVar43._4_4_ = auVar21._4_4_ & auVar40._4_4_;
      auVar43._8_4_ = auVar21._8_4_ & auVar40._8_4_;
      auVar43._12_4_ = auVar21._12_4_ & auVar40._12_4_;
      auVar43._16_4_ = auVar25._16_4_ & auVar40._16_4_;
      auVar43._20_4_ = auVar25._20_4_ & auVar40._20_4_;
      auVar43._24_4_ = auVar25._24_4_ & auVar40._24_4_;
      auVar43._28_4_ = auVar25._28_4_ & auVar40._28_4_;
      uVar3 = vmovmskps_avx(auVar43);
      if (uVar3 != 0) {
        auVar26 = vpackssdw_avx(auVar21,auVar25._16_16_);
        auVar43 = vpmovsxwd_avx2(auVar26);
        auVar40 = vpand_avx2(auVar43,auVar40);
        auVar29._0_4_ = auVar23._0_4_ * auVar28._0_4_ + auVar22._0_4_;
        auVar29._4_4_ = auVar23._4_4_ * auVar28._4_4_ + auVar22._4_4_;
        auVar29._8_4_ = auVar23._8_4_ * auVar28._8_4_ + auVar22._8_4_;
        auVar29._12_4_ = auVar23._12_4_ * auVar28._12_4_ + auVar22._12_4_;
        auVar29._16_4_ = auVar23._16_4_ * auVar28._16_4_ + auVar22._16_4_;
        auVar29._20_4_ = auVar23._20_4_ * auVar28._20_4_ + auVar22._20_4_;
        auVar29._24_4_ = auVar23._24_4_ * auVar28._24_4_ + auVar22._24_4_;
        auVar29._28_4_ = auVar23._28_4_ * auVar28._28_4_ + auVar22._28_4_;
        auVar31._0_4_ = auVar23._0_4_ * auVar30._0_4_ + auVar18._0_4_;
        auVar31._4_4_ = auVar23._4_4_ * auVar30._4_4_ + auVar18._4_4_;
        auVar31._8_4_ = auVar23._8_4_ * auVar30._8_4_ + auVar18._8_4_;
        auVar31._12_4_ = auVar23._12_4_ * auVar30._12_4_ + auVar18._12_4_;
        auVar31._16_4_ = auVar23._16_4_ * auVar30._16_4_ + auVar18._16_4_;
        auVar31._20_4_ = auVar23._20_4_ * auVar30._20_4_ + auVar18._20_4_;
        auVar31._24_4_ = auVar23._24_4_ * auVar30._24_4_ + auVar18._24_4_;
        auVar31._28_4_ = auVar23._28_4_ * auVar30._28_4_ + auVar18._28_4_;
        auVar30._0_4_ = auVar23._0_4_ * auVar38._0_4_ + auVar35._0_4_;
        auVar30._4_4_ = auVar23._4_4_ * auVar38._4_4_ + auVar35._4_4_;
        auVar30._8_4_ = auVar23._8_4_ * auVar38._8_4_ + auVar35._8_4_;
        auVar30._12_4_ = auVar23._12_4_ * auVar38._12_4_ + auVar35._12_4_;
        auVar30._16_4_ = auVar23._16_4_ * auVar38._16_4_ + auVar35._16_4_;
        auVar30._20_4_ = auVar23._20_4_ * auVar38._20_4_ + auVar35._20_4_;
        auVar30._24_4_ = auVar23._24_4_ * auVar38._24_4_ + auVar35._24_4_;
        auVar30._28_4_ = auVar23._28_4_ * auVar38._28_4_ + auVar35._28_4_;
        auVar22 = vmaskmovps_avx(auVar40,auVar29);
        auVar18 = vmaskmovps_avx(auVar40,auVar31);
        auVar35 = vmaskmovps_avx(auVar40,auVar30);
        cVar5 = (char)uVar3;
        iVar11 = auVar15._0_4_;
        auVar26 = auVar16._0_16_;
        auVar21 = auVar16._16_16_;
        auVar36 = auVar22._0_16_;
        auVar20 = auVar22._16_16_;
        iVar8 = auVar15._4_4_;
        iVar13 = auVar15._8_4_;
        iVar9 = auVar15._12_4_;
        iVar17 = auVar15._16_4_;
        iVar10 = auVar15._20_4_;
        iVar14 = auVar15._24_4_;
        iVar34 = auVar15._28_4_;
        auVar37 = auVar18._0_16_;
        auVar39 = auVar35._0_16_;
        auVar41 = auVar18._16_16_;
        auVar42 = auVar35._16_16_;
        if ((uVar3 & 1) != 0) {
          *(int *)(param_1 + iVar11) = auVar22._0_4_;
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + iVar8) = uVar2;
        }
        if ((uVar3 & 4) != 0) {
          uVar2 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + iVar13) = uVar2;
        }
        if ((uVar3 & 8) != 0) {
          uVar2 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + iVar9) = uVar2;
        }
        if ((uVar3 & 0x10) != 0) {
          *(int *)(param_1 + iVar17) = auVar22._16_4_;
        }
        if ((uVar3 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar20,1);
          *(undefined4 *)(param_1 + iVar10) = uVar2;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar20,2);
          *(undefined4 *)(param_1 + iVar14) = uVar2;
        }
        if (cVar5 < '\0') {
          uVar2 = vextractps_avx(auVar20,3);
          *(undefined4 *)(param_1 + iVar34) = uVar2;
        }
        if ((uVar3 & 1) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar11) = auVar18._0_4_;
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = vextractps_avx(auVar37,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar8) = uVar2;
        }
        if ((uVar3 & 4) != 0) {
          uVar2 = vextractps_avx(auVar37,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar2;
        }
        if ((uVar3 & 8) != 0) {
          uVar2 = vextractps_avx(auVar37,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar9) = uVar2;
        }
        if ((uVar3 & 0x10) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar17) = auVar18._16_4_;
        }
        if ((uVar3 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar41,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar41,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar2;
        }
        if (cVar5 < '\0') {
          uVar2 = vextractps_avx(auVar41,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar34) = uVar2;
        }
        if ((uVar3 & 1) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar11) = auVar35._0_4_;
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar8) = uVar2;
        }
        if ((uVar3 & 4) != 0) {
          uVar2 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar2;
        }
        if ((uVar3 & 8) != 0) {
          uVar2 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar9) = uVar2;
        }
        if ((uVar3 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar17) = auVar35._16_4_;
        }
        if ((uVar3 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar2;
        }
        if (cVar5 < '\0') {
          uVar2 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar34) = uVar2;
        }
        if ((uVar3 & 1) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar11) = auVar16._0_4_;
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = vextractps_avx(auVar26,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar8) = uVar2;
        }
        if ((uVar3 & 4) != 0) {
          uVar2 = vextractps_avx(auVar26,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
        }
        if ((uVar3 & 8) != 0) {
          uVar2 = vextractps_avx(auVar26,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar9) = uVar2;
        }
        if ((uVar3 & 0x10) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar17) = auVar16._16_4_;
        }
        if ((uVar3 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar21,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar10) = uVar2;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar21,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar2;
        }
        if (cVar5 < '\0') {
          uVar2 = vextractps_avx(auVar21,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar34) = uVar2;
        }
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsWithFriction_avx2 @ 1403037b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsWithFriction_avx2
               (longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
               longlong param_5,longlong param_6,float param_7,float param_8,uint param_9)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auVar15 [32];
  undefined1 auVar17 [16];
  undefined1 auVar16 [32];
  float fVar18;
  float fVar19;
  int iVar20;
  undefined1 auVar21 [32];
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
  float fVar35;
  float fVar36;
  undefined1 auVar22 [64];
  float fVar37;
  int iVar38;
  float fVar44;
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar42;
  float fVar43;
  float fVar45;
  float fVar49;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  undefined1 in_ZMM2 [64];
  undefined1 auVar50 [32];
  undefined1 auVar53 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 in_ZMM3 [64];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 in_ZMM5 [64];
  float fVar57;
  undefined1 auVar58 [32];
  float fVar68;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar61 [64];
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
  undefined1 auVar74 [32];
  float fVar82;
  undefined1 auVar75 [32];
  float fVar83;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  float fVar93;
  undefined1 auVar86 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  float fVar100;
  float fVar103;
  float fVar104;
  undefined1 auVar101 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined1 auVar102 [32];
  undefined1 auVar110 [16];
  undefined1 auVar112 [16];
  undefined1 auVar111 [32];
  undefined1 auVar113 [16];
  undefined1 auVar116 [16];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 local_280 [32];
  int iVar9;
  
  uVar5 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar5 = param_9;
  }
  if ((int)(uVar5 & 0xfffffff8) < 1) {
    iVar3 = 0;
  }
  else {
    auVar22 = ZEXT3264(CONCAT428(param_8,CONCAT424(param_8,CONCAT420(param_8,CONCAT416(param_8,
                                                  CONCAT412(param_8,CONCAT48(param_8,CONCAT44(
                                                  param_8,param_8))))))));
    iVar3 = 0;
    auVar61 = ZEXT1264(ZEXT812(0));
    local_280._4_4_ = __real_00000008;
    local_280._0_4_ = __real_00000008;
    local_280._8_4_ = __real_00000008;
    local_280._12_4_ = __real_00000008;
    local_280._16_4_ = __real_00000008;
    local_280._20_4_ = __real_00000008;
    local_280._24_4_ = __real_00000008;
    local_280._28_4_ = __real_00000008;
    auVar16._4_4_ = __real_0000000c;
    auVar16._0_4_ = __real_0000000c;
    auVar16._8_4_ = __real_0000000c;
    auVar16._12_4_ = __real_0000000c;
    auVar16._16_4_ = __real_0000000c;
    auVar16._20_4_ = __real_0000000c;
    auVar16._24_4_ = __real_0000000c;
    auVar16._28_4_ = __real_0000000c;
    lVar13 = 0;
    uVar14 = 0;
    do {
      auVar15 = vpslld_avx2(*(undefined1 (*) [32])(param_3 + (ulonglong)uVar14),4);
      auVar54 = vpcmpeqd_avx2(auVar22._0_32_,auVar22._0_32_);
      auVar84 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar54);
      auVar54 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
      auVar97 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar54);
      auVar22 = ZEXT3264(auVar15 | local_280);
      auVar54 = vpcmpeqd_avx2(in_ZMM3._0_32_,in_ZMM3._0_32_);
      auVar40 = vgatherdps(ZEXT832(0),auVar54);
      in_ZMM2 = ZEXT3264(auVar40);
      auVar54 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar69 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar54);
      in_ZMM5 = ZEXT3264((undefined1  [32])0x0);
      auVar54 = vcmpps_avx(auVar69,auVar61._0_32_,8);
      in_ZMM3 = ZEXT3264(auVar54);
      if ((((((((SUB321(auVar54 >> 0x1f,0) & 1) == 0 && (SUB321(auVar54 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar54 >> 0x5f,0) & 1) == 0) && SUB321(auVar54 >> 0x7f,0) == '\0') &&
            (SUB321(auVar54 >> 0x9f,0) & 1) == 0) && SUB321(auVar54 >> 0xbf,0) == '\0') &&
          (SUB321(auVar54 >> 0xdf,0) & 1) == 0) && -1 < auVar54[0x1f]) {
        auVar54 = *(undefined1 (*) [32])(param_4 + 0x20 + lVar13);
        auVar98 = *(undefined1 (*) [32])(param_4 + 0x40 + lVar13);
        auVar94 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar54);
        auVar115 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,*(undefined1 (*) [32])(param_4 + lVar13));
        auVar94 = vblendps_avx(auVar115,auVar94,0x88);
        auVar115 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                ,auVar54);
        auVar21 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar98);
        auVar115 = vblendps_avx(auVar21,auVar115,0x13);
        auVar70._16_16_ = auVar115._0_16_;
        auVar70._0_16_ = auVar94._0_16_;
        auVar85 = vperm2f128_avx(auVar94,auVar115,0x31);
        auVar54 = vblendps_avx(auVar54,*(undefined1 (*) [32])(param_4 + lVar13),0x24);
        auVar54 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar54);
        auVar98 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar98);
        auVar94 = vblendps_avx(auVar54,auVar98,0xe0);
        auVar54 = *(undefined1 (*) [32])(param_5 + 0x20 + lVar13);
        auVar98 = *(undefined1 (*) [32])(param_5 + 0x40 + lVar13);
        auVar115 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                ,auVar54);
        auVar21 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*(undefined1 (*) [32])(param_5 + lVar13));
        auVar115 = vblendps_avx(auVar21,auVar115,0x88);
        auVar21 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar54);
        auVar58 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar98);
        auVar21 = vblendps_avx(auVar58,auVar21,0x13);
        auVar58 = vperm2f128_avx(auVar115,auVar21,0x31);
        auVar54 = vblendps_avx(auVar54,*(undefined1 (*) [32])(param_5 + lVar13),0x24);
        auVar54 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar54);
        auVar22 = ZEXT3264(___ymm_0000000700000004000000010000000000000003000000000000000100000000);
        auVar98 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar98);
        auVar54 = vblendps_avx(auVar54,auVar98,0xe0);
        auVar98 = vsubps_avx(auVar70,auVar84);
        auVar85 = vsubps_avx(auVar85,auVar97);
        auVar94 = vsubps_avx(auVar94,auVar40);
        fVar83 = auVar58._0_4_;
        fVar87 = auVar58._4_4_;
        fVar88 = auVar58._8_4_;
        fVar89 = auVar58._12_4_;
        fVar90 = auVar58._16_4_;
        fVar91 = auVar58._20_4_;
        fVar92 = auVar58._24_4_;
        fVar93 = auVar58._28_4_;
        fVar19 = auVar115._0_4_;
        fVar24 = auVar115._4_4_;
        fVar26 = auVar115._8_4_;
        fVar28 = auVar115._12_4_;
        fVar30 = auVar21._0_4_;
        fVar32 = auVar21._4_4_;
        fVar34 = auVar21._8_4_;
        fVar36 = auVar21._12_4_;
        fVar73 = auVar54._0_4_;
        auVar115._0_4_ = fVar73 * auVar94._0_4_ + fVar19 * auVar98._0_4_ + fVar83 * auVar85._0_4_;
        fVar76 = auVar54._4_4_;
        auVar115._4_4_ = fVar76 * auVar94._4_4_ + fVar24 * auVar98._4_4_ + fVar87 * auVar85._4_4_;
        fVar77 = auVar54._8_4_;
        auVar115._8_4_ = fVar77 * auVar94._8_4_ + fVar26 * auVar98._8_4_ + fVar88 * auVar85._8_4_;
        fVar78 = auVar54._12_4_;
        auVar115._12_4_ =
             fVar78 * auVar94._12_4_ + fVar28 * auVar98._12_4_ + fVar89 * auVar85._12_4_;
        fVar79 = auVar54._16_4_;
        auVar115._16_4_ =
             fVar79 * auVar94._16_4_ + fVar30 * auVar98._16_4_ + fVar90 * auVar85._16_4_;
        fVar80 = auVar54._20_4_;
        auVar115._20_4_ =
             fVar80 * auVar94._20_4_ + fVar32 * auVar98._20_4_ + fVar91 * auVar85._20_4_;
        fVar81 = auVar54._24_4_;
        auVar115._24_4_ =
             fVar81 * auVar94._24_4_ + fVar34 * auVar98._24_4_ + fVar92 * auVar85._24_4_;
        fVar82 = auVar54._28_4_;
        auVar115._28_4_ =
             fVar82 * auVar94._28_4_ + fVar36 * auVar98._28_4_ + fVar93 * auVar85._28_4_;
        in_ZMM3 = ZEXT3264(auVar115);
        auVar61 = ZEXT864(0) << 0x20;
        auVar54 = vcmpps_avx(ZEXT832(0) << 0x20,auVar115,1);
        auVar98 = vcmpps_avx(ZEXT832(0) << 0x20,auVar69,4);
        in_ZMM5 = ZEXT3264(auVar98);
        auVar101._0_4_ = auVar54._0_4_ & auVar98._0_4_;
        auVar101._4_4_ = auVar54._4_4_ & auVar98._4_4_;
        auVar101._8_4_ = auVar54._8_4_ & auVar98._8_4_;
        auVar101._12_4_ = auVar54._12_4_ & auVar98._12_4_;
        auVar94._16_4_ = auVar54._16_4_ & auVar98._16_4_;
        auVar94._0_16_ = auVar101;
        auVar94._20_4_ = auVar54._20_4_ & auVar98._20_4_;
        auVar94._24_4_ = auVar54._24_4_ & auVar98._24_4_;
        auVar94._28_4_ = auVar54._28_4_ & auVar98._28_4_;
        uVar12 = vmovmskps_avx(auVar94);
        if (uVar12 != 0) {
          auVar101 = vpackssdw_avx(auVar101,auVar94._16_16_);
          auVar54._0_4_ = fVar19 * auVar115._0_4_ + auVar84._0_4_;
          auVar54._4_4_ = fVar24 * auVar115._4_4_ + auVar84._4_4_;
          auVar54._8_4_ = fVar26 * auVar115._8_4_ + auVar84._8_4_;
          auVar54._12_4_ = fVar28 * auVar115._12_4_ + auVar84._12_4_;
          auVar54._16_4_ = fVar30 * auVar115._16_4_ + auVar84._16_4_;
          auVar54._20_4_ = fVar32 * auVar115._20_4_ + auVar84._20_4_;
          auVar54._24_4_ = fVar34 * auVar115._24_4_ + auVar84._24_4_;
          auVar54._28_4_ = fVar36 * auVar115._28_4_ + auVar84._28_4_;
          auVar98._0_4_ = fVar83 * auVar115._0_4_ + auVar97._0_4_;
          auVar98._4_4_ = fVar87 * auVar115._4_4_ + auVar97._4_4_;
          auVar98._8_4_ = fVar88 * auVar115._8_4_ + auVar97._8_4_;
          auVar98._12_4_ = fVar89 * auVar115._12_4_ + auVar97._12_4_;
          auVar98._16_4_ = fVar90 * auVar115._16_4_ + auVar97._16_4_;
          auVar98._20_4_ = fVar91 * auVar115._20_4_ + auVar97._20_4_;
          auVar98._24_4_ = fVar92 * auVar115._24_4_ + auVar97._24_4_;
          auVar98._28_4_ = fVar93 * auVar115._28_4_ + auVar97._28_4_;
          auVar84._0_4_ = fVar73 * auVar115._0_4_ + auVar40._0_4_;
          auVar84._4_4_ = fVar76 * auVar115._4_4_ + auVar40._4_4_;
          auVar84._8_4_ = fVar77 * auVar115._8_4_ + auVar40._8_4_;
          auVar84._12_4_ = fVar78 * auVar115._12_4_ + auVar40._12_4_;
          auVar84._16_4_ = fVar79 * auVar115._16_4_ + auVar40._16_4_;
          auVar84._20_4_ = fVar80 * auVar115._20_4_ + auVar40._20_4_;
          auVar84._24_4_ = fVar81 * auVar115._24_4_ + auVar40._24_4_;
          auVar84._28_4_ = fVar82 * auVar115._28_4_ + auVar40._28_4_;
          auVar97 = vpmovsxwd_avx2(auVar101);
          auVar54 = vmaskmovps_avx(auVar97,auVar54);
          auVar40 = vmaskmovps_avx(auVar97,auVar98);
          auVar84 = vmaskmovps_avx(auVar97,auVar84);
          cVar4 = (char)uVar12;
          if (cVar4 == -1) {
            auVar98 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar13);
            auVar21 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar13);
            auVar85 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                   ,auVar98);
            auVar58 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                   ,*(undefined1 (*) [32])(param_6 + lVar13));
            auVar85 = vblendps_avx(auVar58,auVar85,0x88);
            auVar58 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                   ,auVar98);
            auVar70 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                   ,auVar21);
            auVar58 = vblendps_avx(auVar70,auVar58,0x13);
            auVar41._16_16_ = auVar58._0_16_;
            auVar41._0_16_ = auVar85._0_16_;
            auVar85 = vperm2f128_avx(auVar85,auVar58,0x31);
            auVar98 = vblendps_avx(auVar98,*(undefined1 (*) [32])(param_6 + lVar13),0x24);
            auVar98 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                   ,auVar98);
            auVar58._16_16_ = ___xmm_00000007000000040000000100000000;
            auVar58._0_16_ = ___xmm_00000007000000040000000100000000;
            auVar21 = vpermps_avx2(auVar58,auVar21);
            auVar98 = vblendps_avx(auVar98,auVar21,0xe0);
          }
          else {
            auVar41 = vgatherdps(ZEXT432(0) << 0x20,auVar94);
            auVar85 = vgatherdps(ZEXT432(0) << 0x20,auVar94);
            auVar98 = vgatherdps(ZEXT432(0) << 0x20,auVar94);
          }
          vpmulld_avx2(*(undefined1 (*) [32])(param_3 + (ulonglong)uVar14),auVar16);
          auVar58 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar94);
          auVar70 = vgatherdps(ZEXT832(0) << 0x20,auVar94);
          auVar21 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar94);
          auVar94 = vsubps_avx(auVar54,auVar58);
          fVar100 = -(param_8 * auVar41._0_4_) + auVar94._0_4_;
          fVar103 = -(param_8 * auVar41._4_4_) + auVar94._4_4_;
          fVar104 = -(param_8 * auVar41._8_4_) + auVar94._8_4_;
          fVar105 = -(param_8 * auVar41._12_4_) + auVar94._12_4_;
          fVar106 = -(param_8 * auVar41._16_4_) + auVar94._16_4_;
          fVar107 = -(param_8 * auVar41._20_4_) + auVar94._20_4_;
          fVar108 = -(param_8 * auVar41._24_4_) + auVar94._24_4_;
          fVar109 = -(param_8 * auVar41._28_4_) + auVar94._28_4_;
          in_ZMM5 = ZEXT3264(auVar40);
          auVar94 = vsubps_avx(auVar40,auVar70);
          fVar37 = -(param_8 * auVar85._0_4_) + auVar94._0_4_;
          fVar42 = -(param_8 * auVar85._4_4_) + auVar94._4_4_;
          fVar43 = -(param_8 * auVar85._8_4_) + auVar94._8_4_;
          fVar44 = -(param_8 * auVar85._12_4_) + auVar94._12_4_;
          fVar45 = -(param_8 * auVar85._16_4_) + auVar94._16_4_;
          fVar47 = -(param_8 * auVar85._20_4_) + auVar94._20_4_;
          fVar48 = -(param_8 * auVar85._24_4_) + auVar94._24_4_;
          fVar49 = -(param_8 * auVar85._28_4_) + auVar94._28_4_;
          auVar94 = vsubps_avx(auVar84,auVar21);
          fVar18 = -(param_8 * auVar98._0_4_) + auVar94._0_4_;
          fVar23 = -(param_8 * auVar98._4_4_) + auVar94._4_4_;
          fVar25 = -(param_8 * auVar98._8_4_) + auVar94._8_4_;
          fVar27 = -(param_8 * auVar98._12_4_) + auVar94._12_4_;
          fVar29 = -(param_8 * auVar98._16_4_) + auVar94._16_4_;
          fVar31 = -(param_8 * auVar98._20_4_) + auVar94._20_4_;
          fVar33 = -(param_8 * auVar98._24_4_) + auVar94._24_4_;
          fVar35 = -(param_8 * auVar98._28_4_) + auVar94._28_4_;
          fVar57 = fVar73 * fVar18 + fVar19 * fVar100 + fVar83 * fVar37;
          fVar62 = fVar76 * fVar23 + fVar24 * fVar103 + fVar87 * fVar42;
          fVar63 = fVar77 * fVar25 + fVar26 * fVar104 + fVar88 * fVar43;
          fVar64 = fVar78 * fVar27 + fVar28 * fVar105 + fVar89 * fVar44;
          fVar65 = fVar79 * fVar29 + fVar30 * fVar106 + fVar90 * fVar45;
          fVar66 = fVar80 * fVar31 + fVar32 * fVar107 + fVar91 * fVar47;
          fVar67 = fVar81 * fVar33 + fVar34 * fVar108 + fVar92 * fVar48;
          fVar68 = fVar82 * fVar35 + fVar36 * fVar109 + fVar93 * fVar49;
          fVar100 = -(fVar57 * fVar19) + fVar100;
          fVar103 = -(fVar62 * fVar24) + fVar103;
          fVar104 = -(fVar63 * fVar26) + fVar104;
          fVar105 = -(fVar64 * fVar28) + fVar105;
          fVar106 = -(fVar65 * fVar30) + fVar106;
          fVar107 = -(fVar66 * fVar32) + fVar107;
          fVar108 = -(fVar67 * fVar34) + fVar108;
          fVar109 = -(fVar68 * fVar36) + fVar109;
          fVar37 = -(fVar57 * fVar83) + fVar37;
          fVar42 = -(fVar62 * fVar87) + fVar42;
          fVar43 = -(fVar63 * fVar88) + fVar43;
          fVar44 = -(fVar64 * fVar89) + fVar44;
          fVar45 = -(fVar65 * fVar90) + fVar45;
          fVar47 = -(fVar66 * fVar91) + fVar47;
          fVar48 = -(fVar67 * fVar92) + fVar48;
          fVar49 = -(fVar68 * fVar93) + fVar49;
          fVar18 = -(fVar73 * fVar57) + fVar18;
          fVar23 = -(fVar76 * fVar62) + fVar23;
          fVar25 = -(fVar77 * fVar63) + fVar25;
          fVar27 = -(fVar78 * fVar64) + fVar27;
          fVar29 = -(fVar79 * fVar65) + fVar29;
          fVar31 = -(fVar80 * fVar66) + fVar31;
          fVar33 = -(fVar81 * fVar67) + fVar33;
          fVar35 = -(fVar82 * fVar68) + fVar35;
          auVar21._0_4_ = fVar18 * fVar18 + fVar100 * fVar100 + fVar37 * fVar37;
          auVar21._4_4_ = fVar23 * fVar23 + fVar103 * fVar103 + fVar42 * fVar42;
          auVar21._8_4_ = fVar25 * fVar25 + fVar104 * fVar104 + fVar43 * fVar43;
          auVar21._12_4_ = fVar27 * fVar27 + fVar105 * fVar105 + fVar44 * fVar44;
          auVar21._16_4_ = fVar29 * fVar29 + fVar106 * fVar106 + fVar45 * fVar45;
          auVar21._20_4_ = fVar31 * fVar31 + fVar107 * fVar107 + fVar47 * fVar47;
          auVar21._24_4_ = fVar33 * fVar33 + fVar108 * fVar108 + fVar48 * fVar48;
          auVar21._28_4_ = fVar35 * fVar35 + fVar109 * fVar109 + fVar49 * fVar49;
          auVar21 = vsqrtps_avx(auVar21);
          auVar50._0_4_ = auVar115._0_4_ * param_7;
          auVar50._4_4_ = auVar115._4_4_ * param_7;
          auVar50._8_4_ = auVar115._8_4_ * param_7;
          auVar50._12_4_ = auVar115._12_4_ * param_7;
          auVar50._16_4_ = auVar115._16_4_ * param_7;
          auVar50._20_4_ = auVar115._20_4_ * param_7;
          auVar50._24_4_ = auVar115._24_4_ * param_7;
          auVar50._28_4_ = auVar115._28_4_ * param_7;
          auVar98 = vminps_avx(auVar50,auVar21);
          auVar71._4_4_ = __real_322bcc77;
          auVar71._0_4_ = __real_322bcc77;
          auVar71._8_4_ = __real_322bcc77;
          auVar71._12_4_ = __real_322bcc77;
          auVar71._16_4_ = __real_322bcc77;
          auVar71._20_4_ = __real_322bcc77;
          auVar71._24_4_ = __real_322bcc77;
          auVar71._28_4_ = __real_322bcc77;
          auVar94 = vdivps_avx(auVar98,auVar21);
          auVar98 = vcmpps_avx(auVar21,auVar71,5);
          fVar19 = (float)(auVar98._0_4_ & auVar94._0_4_);
          fVar24 = (float)(auVar98._4_4_ & auVar94._4_4_);
          fVar26 = (float)(auVar98._8_4_ & auVar94._8_4_);
          fVar28 = (float)(auVar98._12_4_ & auVar94._12_4_);
          fVar30 = (float)(auVar98._16_4_ & auVar94._16_4_);
          fVar32 = (float)(auVar98._20_4_ & auVar94._20_4_);
          fVar34 = (float)(auVar98._24_4_ & auVar94._24_4_);
          fVar36 = (float)(auVar98._28_4_ & auVar94._28_4_);
          auVar22 = ZEXT3264(CONCAT428(fVar36,CONCAT424(fVar34,CONCAT420(fVar32,CONCAT416(fVar30,
                                                  CONCAT412(fVar28,CONCAT48(fVar26,CONCAT44(fVar24,
                                                  fVar19))))))));
          auVar102._0_4_ = -(fVar19 * fVar100) + auVar54._0_4_;
          auVar102._4_4_ = -(fVar24 * fVar103) + auVar54._4_4_;
          auVar102._8_4_ = -(fVar26 * fVar104) + auVar54._8_4_;
          auVar102._12_4_ = -(fVar28 * fVar105) + auVar54._12_4_;
          auVar102._16_4_ = -(fVar30 * fVar106) + auVar54._16_4_;
          auVar102._20_4_ = -(fVar32 * fVar107) + auVar54._20_4_;
          auVar102._24_4_ = -(fVar34 * fVar108) + auVar54._24_4_;
          auVar102._28_4_ = -(fVar36 * fVar109) + auVar54._28_4_;
          auVar85._0_4_ = -(fVar19 * fVar37) + auVar40._0_4_;
          auVar85._4_4_ = -(fVar24 * fVar42) + auVar40._4_4_;
          auVar85._8_4_ = -(fVar26 * fVar43) + auVar40._8_4_;
          auVar85._12_4_ = -(fVar28 * fVar44) + auVar40._12_4_;
          auVar85._16_4_ = -(fVar30 * fVar45) + auVar40._16_4_;
          auVar85._20_4_ = -(fVar32 * fVar47) + auVar40._20_4_;
          auVar85._24_4_ = -(fVar34 * fVar48) + auVar40._24_4_;
          auVar85._28_4_ = -(fVar36 * fVar49) + auVar40._28_4_;
          auVar59._0_4_ = -(fVar19 * fVar18) + auVar84._0_4_;
          auVar59._4_4_ = -(fVar24 * fVar23) + auVar84._4_4_;
          auVar59._8_4_ = -(fVar26 * fVar25) + auVar84._8_4_;
          auVar59._12_4_ = -(fVar28 * fVar27) + auVar84._12_4_;
          auVar59._16_4_ = -(fVar30 * fVar29) + auVar84._16_4_;
          auVar59._20_4_ = -(fVar32 * fVar31) + auVar84._20_4_;
          auVar59._24_4_ = -(fVar34 * fVar33) + auVar84._24_4_;
          auVar59._28_4_ = -(fVar36 * fVar35) + auVar84._28_4_;
          auVar54 = vmaskmovps_avx(auVar97,auVar102);
          auVar40 = vmaskmovps_avx(auVar97,auVar85);
          auVar84 = vmaskmovps_avx(auVar97,auVar59);
          in_ZMM3 = ZEXT3264(auVar54);
          iVar11 = auVar15._0_4_;
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + iVar11) = auVar54._0_4_;
          }
          auVar101 = auVar54._0_16_;
          iVar7 = auVar15._4_4_;
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar101,1);
            *(undefined4 *)(param_1 + iVar7) = uVar2;
          }
          auVar61 = ZEXT464(0) << 0x20;
          in_ZMM2 = ZEXT3264(auVar69);
          auVar17 = auVar15._16_16_;
          auVar39 = auVar69._0_16_;
          auVar46 = auVar69._16_16_;
          auVar53 = auVar54._16_16_;
          auVar113 = auVar40._0_16_;
          auVar116 = auVar40._16_16_;
          auVar110 = auVar84._0_16_;
          auVar112 = auVar84._16_16_;
          iVar8 = auVar15._8_4_;
          iVar9 = auVar15._12_4_;
          iVar20 = auVar15._16_4_;
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar101,2);
            *(undefined4 *)(param_1 + iVar8) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar101,3);
            *(undefined4 *)(param_1 + iVar9) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            auVar22 = ZEXT1664(auVar53);
            *(int *)(param_1 + iVar20) = auVar54._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar10 = vextractps_avx(auVar17,1);
            auVar22 = ZEXT1664(auVar53);
            uVar2 = vextractps_avx(auVar53,1);
            *(undefined4 *)(param_1 + iVar10) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar10 = vextractps_avx(auVar17,2);
            auVar22 = ZEXT1664(auVar53);
            uVar2 = vextractps_avx(auVar53,2);
            *(undefined4 *)(param_1 + iVar10) = uVar2;
          }
          if (cVar4 < '\0') {
            iVar10 = vextractps_avx(auVar17,3);
            auVar22 = ZEXT1664(auVar53);
            uVar2 = vextractps_avx(auVar53,3);
            *(undefined4 *)(param_1 + iVar10) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 4 + (longlong)iVar11) = auVar40._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar113,1);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar7) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar113,2);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar8) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar113,3);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            auVar22 = ZEXT1664(auVar116);
            *(int *)(param_1 + 4 + (longlong)iVar20) = auVar40._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar10 = vextractps_avx(auVar17,1);
            auVar22 = ZEXT1664(auVar116);
            uVar2 = vextractps_avx(auVar116,1);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar10 = vextractps_avx(auVar17,2);
            auVar22 = ZEXT1664(auVar116);
            uVar2 = vextractps_avx(auVar116,2);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
          }
          if (cVar4 < '\0') {
            iVar10 = vextractps_avx(auVar17,3);
            auVar22 = ZEXT1664(auVar116);
            uVar2 = vextractps_avx(auVar116,3);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 8 + (longlong)iVar11) = auVar84._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar110,1);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar7) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar110,2);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar8) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar110,3);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            auVar22 = ZEXT1664(auVar112);
            *(int *)(param_1 + 8 + (longlong)iVar20) = auVar84._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar10 = vextractps_avx(auVar17,1);
            auVar22 = ZEXT1664(auVar112);
            uVar2 = vextractps_avx(auVar112,1);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar10 = vextractps_avx(auVar17,2);
            auVar22 = ZEXT1664(auVar112);
            uVar2 = vextractps_avx(auVar112,2);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
          }
          if (cVar4 < '\0') {
            iVar10 = vextractps_avx(auVar17,3);
            auVar22 = ZEXT1664(auVar112);
            uVar2 = vextractps_avx(auVar112,3);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 0xc + (longlong)iVar11) = auVar69._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar39,1);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar7) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar39,2);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar8) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar39,3);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            auVar22 = ZEXT1664(auVar46);
            *(int *)(param_1 + 0xc + (longlong)iVar20) = auVar69._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar11 = vextractps_avx(auVar17,1);
            auVar22 = ZEXT1664(auVar46);
            uVar2 = vextractps_avx(auVar46,1);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar11 = vextractps_avx(auVar17,2);
            auVar22 = ZEXT1664(auVar46);
            uVar2 = vextractps_avx(auVar46,2);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar2;
          }
          if (cVar4 < '\0') {
            iVar11 = vextractps_avx(auVar17,3);
            uVar2 = vextractps_avx(auVar46,3);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar11) = uVar2;
          }
        }
      }
      uVar14 = uVar14 + 0x20;
      lVar13 = lVar13 + 0x60;
      iVar3 = iVar3 + 8;
    } while (iVar3 < (int)(uVar5 & 0xfffffff8));
  }
  if (iVar3 < (int)param_9) {
    auVar15._4_4_ = iVar3;
    auVar15._0_4_ = iVar3;
    auVar15._8_4_ = iVar3;
    auVar15._12_4_ = iVar3;
    auVar15._16_4_ = iVar3;
    auVar15._20_4_ = iVar3;
    auVar15._24_4_ = iVar3;
    auVar15._28_4_ = iVar3;
    auVar97 = vpor_avx2(auVar15,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar40._4_4_ = param_9;
    auVar40._0_4_ = param_9;
    auVar40._8_4_ = param_9;
    auVar40._12_4_ = param_9;
    auVar40._16_4_ = param_9;
    auVar40._20_4_ = param_9;
    auVar40._24_4_ = param_9;
    auVar40._28_4_ = param_9;
    auVar84 = vpcmpgtd_avx2(auVar40,auVar97);
    auVar69 = vmaskmovps_avx(auVar84,*(undefined1 (*) [32])(param_3 + (iVar3 << 2)));
    auVar98 = vpslld_avx2(auVar69,4);
    auVar16 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar84);
    auVar54 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar84);
    auVar15 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar84);
    auVar56._4_4_ = __real_0000000c;
    auVar56._0_4_ = __real_0000000c;
    auVar56._8_4_ = __real_0000000c;
    auVar56._12_4_ = __real_0000000c;
    auVar56._16_4_ = __real_0000000c;
    auVar56._20_4_ = __real_0000000c;
    auVar56._24_4_ = __real_0000000c;
    auVar56._28_4_ = __real_0000000c;
    auVar94 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar84);
    auVar16 = vmaskmovps_avx(auVar84,auVar16);
    auVar54 = vmaskmovps_avx(auVar84,auVar54);
    auVar15 = vmaskmovps_avx(auVar84,auVar15);
    auVar40 = vcmpps_avx(auVar94,ZEXT832(0) << 0x20,8);
    auVar40 = auVar84 & auVar40;
    if ((((((((SUB321(auVar40 >> 0x1f,0) & 1) == 0 && (SUB321(auVar40 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar40 >> 0x5f,0) & 1) == 0) && SUB321(auVar40 >> 0x7f,0) == '\0') &&
          (SUB321(auVar40 >> 0x9f,0) & 1) == 0) && SUB321(auVar40 >> 0xbf,0) == '\0') &&
        (SUB321(auVar40 >> 0xdf,0) & 1) == 0) && -1 < auVar40[0x1f]) {
      uVar6 = (ulonglong)auVar97._0_4_;
      pauVar1 = (undefined1 (*) [32])(param_4 + uVar6 * 0xc);
      auVar40 = vpcmpeqd_avx2(auVar97,auVar97);
      auVar40 = auVar40 & ~auVar84;
      if ((((((((SUB321(auVar40 >> 0x1f,0) & 1) == 0 && (SUB321(auVar40 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar40 >> 0x5f,0) & 1) == 0) && SUB321(auVar40 >> 0x7f,0) == '\0') &&
            (SUB321(auVar40 >> 0x9f,0) & 1) == 0) && SUB321(auVar40 >> 0xbf,0) == '\0') &&
          (SUB321(auVar40 >> 0xdf,0) & 1) == 0) && -1 < auVar40[0x1f]) {
        auVar40 = pauVar1[1];
        auVar97 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar40);
        auVar115 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                ,*pauVar1);
        auVar97 = vblendps_avx(auVar115,auVar97,0x88);
        auVar115 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                ,auVar40);
        auVar21 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar1[2]);
        auVar115 = vblendps_avx(auVar21,auVar115,0x13);
        auVar95._16_16_ = auVar115._0_16_;
        auVar95._0_16_ = auVar97._0_16_;
        auVar70 = vperm2f128_avx(auVar97,auVar115,0x31);
        auVar40 = vblendps_avx(auVar40,*pauVar1,0x24);
        auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar40);
        auVar97 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,pauVar1[2]);
        auVar21 = vblendps_avx(auVar40,auVar97,0xe0);
        auVar40 = *(undefined1 (*) [32])(param_5 + uVar6 * 0xc);
        auVar97 = *(undefined1 (*) [32])(param_5 + 0x20 + uVar6 * 0xc);
        auVar115 = *(undefined1 (*) [32])(param_5 + 0x40 + uVar6 * 0xc);
        auVar85 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar97);
        auVar58 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar40);
        auVar85 = vblendps_avx(auVar58,auVar85,0x88);
        auVar58 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar97);
        auVar41 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar115);
        auVar58 = vblendps_avx(auVar41,auVar58,0x13);
        auVar74._16_16_ = auVar58._0_16_;
        auVar74._0_16_ = auVar85._0_16_;
        auVar85 = vperm2f128_avx(auVar85,auVar58,0x31);
        auVar40 = vblendps_avx(auVar97,auVar40,0x24);
        auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar40);
        auVar97 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar115);
        auVar40 = vblendps_avx(auVar40,auVar97,0xe0);
      }
      else {
        auVar95 = vgatherdps(ZEXT832(0) << 0x20,auVar84);
        auVar70 = vgatherdps(ZEXT432(0) << 0x20,auVar84);
        auVar21 = vgatherdps(ZEXT432(0) << 0x20,auVar84);
        auVar74 = vgatherdps(ZEXT832(0),auVar84);
        auVar85 = vgatherdps(ZEXT832(0),auVar84);
        auVar40 = vgatherdps(ZEXT832(0) << 0x20,auVar84);
      }
      auVar97 = vsubps_avx(auVar95,auVar16);
      auVar115 = vsubps_avx(auVar70,auVar54);
      auVar21 = vsubps_avx(auVar21,auVar15);
      fVar83 = auVar85._0_4_;
      fVar87 = auVar85._4_4_;
      fVar88 = auVar85._8_4_;
      fVar89 = auVar85._12_4_;
      fVar90 = auVar85._16_4_;
      fVar91 = auVar85._20_4_;
      fVar92 = auVar85._24_4_;
      fVar93 = auVar85._28_4_;
      fVar73 = auVar74._0_4_;
      fVar76 = auVar74._4_4_;
      fVar77 = auVar74._8_4_;
      fVar78 = auVar74._12_4_;
      fVar79 = auVar74._16_4_;
      fVar80 = auVar74._20_4_;
      fVar81 = auVar74._24_4_;
      fVar82 = auVar74._28_4_;
      fVar19 = auVar40._0_4_;
      auVar96._0_4_ = fVar19 * auVar21._0_4_ + fVar73 * auVar97._0_4_ + fVar83 * auVar115._0_4_;
      fVar24 = auVar40._4_4_;
      auVar96._4_4_ = fVar24 * auVar21._4_4_ + fVar76 * auVar97._4_4_ + fVar87 * auVar115._4_4_;
      fVar26 = auVar40._8_4_;
      auVar96._8_4_ = fVar26 * auVar21._8_4_ + fVar77 * auVar97._8_4_ + fVar88 * auVar115._8_4_;
      fVar28 = auVar40._12_4_;
      auVar96._12_4_ = fVar28 * auVar21._12_4_ + fVar78 * auVar97._12_4_ + fVar89 * auVar115._12_4_;
      fVar30 = auVar40._16_4_;
      auVar96._16_4_ = fVar30 * auVar21._16_4_ + fVar79 * auVar97._16_4_ + fVar90 * auVar115._16_4_;
      fVar32 = auVar40._20_4_;
      auVar96._20_4_ = fVar32 * auVar21._20_4_ + fVar80 * auVar97._20_4_ + fVar91 * auVar115._20_4_;
      fVar34 = auVar40._24_4_;
      auVar96._24_4_ = fVar34 * auVar21._24_4_ + fVar81 * auVar97._24_4_ + fVar92 * auVar115._24_4_;
      fVar36 = auVar40._28_4_;
      auVar96._28_4_ = fVar36 * auVar21._28_4_ + fVar82 * auVar97._28_4_ + fVar93 * auVar115._28_4_;
      auVar40 = vcmpps_avx(ZEXT832(0) << 0x20,auVar96,1);
      auVar97 = vcmpps_avx(ZEXT832(0) << 0x20,auVar94,4);
      auVar72._0_4_ = auVar40._0_4_ & auVar97._0_4_ & auVar84._0_4_;
      auVar72._4_4_ = auVar40._4_4_ & auVar97._4_4_ & auVar84._4_4_;
      auVar72._8_4_ = auVar40._8_4_ & auVar97._8_4_ & auVar84._8_4_;
      auVar72._12_4_ = auVar40._12_4_ & auVar97._12_4_ & auVar84._12_4_;
      auVar72._16_4_ = auVar40._16_4_ & auVar97._16_4_ & auVar84._16_4_;
      auVar72._20_4_ = auVar40._20_4_ & auVar97._20_4_ & auVar84._20_4_;
      auVar72._24_4_ = auVar40._24_4_ & auVar97._24_4_ & auVar84._24_4_;
      auVar72._28_4_ = auVar40._28_4_ & auVar97._28_4_ & auVar84._28_4_;
      uVar5 = vmovmskps_avx(auVar72);
      if (uVar5 != 0) {
        auVar97._0_4_ = fVar73 * auVar96._0_4_ + auVar16._0_4_;
        auVar97._4_4_ = fVar76 * auVar96._4_4_ + auVar16._4_4_;
        auVar97._8_4_ = fVar77 * auVar96._8_4_ + auVar16._8_4_;
        auVar97._12_4_ = fVar78 * auVar96._12_4_ + auVar16._12_4_;
        auVar97._16_4_ = fVar79 * auVar96._16_4_ + auVar16._16_4_;
        auVar97._20_4_ = fVar80 * auVar96._20_4_ + auVar16._20_4_;
        auVar97._24_4_ = fVar81 * auVar96._24_4_ + auVar16._24_4_;
        auVar97._28_4_ = fVar82 * auVar96._28_4_ + auVar16._28_4_;
        auVar111._0_4_ = fVar83 * auVar96._0_4_ + auVar54._0_4_;
        auVar111._4_4_ = fVar87 * auVar96._4_4_ + auVar54._4_4_;
        auVar111._8_4_ = fVar88 * auVar96._8_4_ + auVar54._8_4_;
        auVar111._12_4_ = fVar89 * auVar96._12_4_ + auVar54._12_4_;
        auVar111._16_4_ = fVar90 * auVar96._16_4_ + auVar54._16_4_;
        auVar111._20_4_ = fVar91 * auVar96._20_4_ + auVar54._20_4_;
        auVar111._24_4_ = fVar92 * auVar96._24_4_ + auVar54._24_4_;
        auVar111._28_4_ = fVar93 * auVar96._28_4_ + auVar54._28_4_;
        auVar114._0_4_ = fVar19 * auVar96._0_4_ + auVar15._0_4_;
        auVar114._4_4_ = fVar24 * auVar96._4_4_ + auVar15._4_4_;
        auVar114._8_4_ = fVar26 * auVar96._8_4_ + auVar15._8_4_;
        auVar114._12_4_ = fVar28 * auVar96._12_4_ + auVar15._12_4_;
        auVar114._16_4_ = fVar30 * auVar96._16_4_ + auVar15._16_4_;
        auVar114._20_4_ = fVar32 * auVar96._20_4_ + auVar15._20_4_;
        auVar114._24_4_ = fVar34 * auVar96._24_4_ + auVar15._24_4_;
        auVar114._28_4_ = fVar36 * auVar96._28_4_ + auVar15._28_4_;
        auVar16 = vmaskmovps_avx(auVar72,auVar97);
        auVar54 = vmaskmovps_avx(auVar72,auVar111);
        auVar15 = vmaskmovps_avx(auVar72,auVar114);
        pauVar1 = (undefined1 (*) [32])(param_6 + uVar6 * 0xc);
        cVar4 = (char)uVar5;
        if (cVar4 == -1) {
          auVar40 = pauVar1[1];
          auVar84 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                                 ,auVar40);
          auVar97 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar1);
          auVar84 = vblendps_avx(auVar97,auVar84,0x88);
          auVar97 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                                 ,auVar40);
          auVar115 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                  ,pauVar1[2]);
          auVar97 = vblendps_avx(auVar115,auVar97,0x13);
          auVar99._16_16_ = auVar97._0_16_;
          auVar99._0_16_ = auVar84._0_16_;
          auVar84 = vperm2f128_avx(auVar84,auVar97,0x31);
          auVar40 = vblendps_avx(auVar40,*pauVar1,0x24);
          auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar40);
          auVar51._16_16_ = ___xmm_00000007000000040000000100000000;
          auVar51._0_16_ = ___xmm_00000007000000040000000100000000;
          auVar97 = vpermps_avx2(auVar51,pauVar1[2]);
          auVar40 = vblendps_avx(auVar40,auVar97,0xe0);
        }
        else {
          auVar99 = vgatherdps(ZEXT832(0) << 0x20,auVar72);
          auVar84 = vgatherdps(ZEXT832(0) << 0x20,auVar72);
          auVar40 = vgatherdps(ZEXT432(0) << 0x20,auVar72);
        }
        vpmulld_avx2(auVar69,auVar56);
        auVar69 = vgatherdps(ZEXT832(0) << 0x20,auVar72);
        auVar97 = vgatherdps(ZEXT432(0) << 0x20,auVar72);
        auVar115 = vgatherdps(ZEXT432(0) << 0x20,auVar72);
        auVar69 = vsubps_avx(auVar16,auVar69);
        fVar18 = -(param_8 * auVar99._0_4_) + auVar69._0_4_;
        fVar23 = -(param_8 * auVar99._4_4_) + auVar69._4_4_;
        fVar25 = -(param_8 * auVar99._8_4_) + auVar69._8_4_;
        fVar27 = -(param_8 * auVar99._12_4_) + auVar69._12_4_;
        fVar29 = -(param_8 * auVar99._16_4_) + auVar69._16_4_;
        fVar31 = -(param_8 * auVar99._20_4_) + auVar69._20_4_;
        fVar33 = -(param_8 * auVar99._24_4_) + auVar69._24_4_;
        fVar35 = -(param_8 * auVar99._28_4_) + auVar69._28_4_;
        auVar69 = vsubps_avx(auVar54,auVar97);
        fVar100 = -(param_8 * auVar84._0_4_) + auVar69._0_4_;
        fVar103 = -(param_8 * auVar84._4_4_) + auVar69._4_4_;
        fVar104 = -(param_8 * auVar84._8_4_) + auVar69._8_4_;
        fVar105 = -(param_8 * auVar84._12_4_) + auVar69._12_4_;
        fVar106 = -(param_8 * auVar84._16_4_) + auVar69._16_4_;
        fVar107 = -(param_8 * auVar84._20_4_) + auVar69._20_4_;
        fVar108 = -(param_8 * auVar84._24_4_) + auVar69._24_4_;
        fVar109 = -(param_8 * auVar84._28_4_) + auVar69._28_4_;
        auVar69 = vsubps_avx(auVar15,auVar115);
        fVar42 = -(param_8 * auVar40._0_4_) + auVar69._0_4_;
        fVar44 = -(param_8 * auVar40._4_4_) + auVar69._4_4_;
        fVar47 = -(param_8 * auVar40._8_4_) + auVar69._8_4_;
        fVar49 = -(param_8 * auVar40._12_4_) + auVar69._12_4_;
        fVar62 = -(param_8 * auVar40._16_4_) + auVar69._16_4_;
        fVar64 = -(param_8 * auVar40._20_4_) + auVar69._20_4_;
        fVar66 = -(param_8 * auVar40._24_4_) + auVar69._24_4_;
        fVar68 = -(param_8 * auVar40._28_4_) + auVar69._28_4_;
        fVar37 = fVar19 * fVar42 + fVar73 * fVar18 + fVar83 * fVar100;
        fVar43 = fVar24 * fVar44 + fVar76 * fVar23 + fVar87 * fVar103;
        fVar45 = fVar26 * fVar47 + fVar77 * fVar25 + fVar88 * fVar104;
        fVar48 = fVar28 * fVar49 + fVar78 * fVar27 + fVar89 * fVar105;
        fVar57 = fVar30 * fVar62 + fVar79 * fVar29 + fVar90 * fVar106;
        fVar63 = fVar32 * fVar64 + fVar80 * fVar31 + fVar91 * fVar107;
        fVar65 = fVar34 * fVar66 + fVar81 * fVar33 + fVar92 * fVar108;
        fVar67 = fVar36 * fVar68 + fVar82 * fVar35 + fVar93 * fVar109;
        fVar18 = -(fVar37 * fVar73) + fVar18;
        fVar23 = -(fVar43 * fVar76) + fVar23;
        fVar25 = -(fVar45 * fVar77) + fVar25;
        fVar27 = -(fVar48 * fVar78) + fVar27;
        fVar29 = -(fVar57 * fVar79) + fVar29;
        fVar31 = -(fVar63 * fVar80) + fVar31;
        fVar33 = -(fVar65 * fVar81) + fVar33;
        fVar35 = -(fVar67 * fVar82) + fVar35;
        fVar100 = -(fVar37 * fVar83) + fVar100;
        fVar103 = -(fVar43 * fVar87) + fVar103;
        fVar104 = -(fVar45 * fVar88) + fVar104;
        fVar105 = -(fVar48 * fVar89) + fVar105;
        fVar106 = -(fVar57 * fVar90) + fVar106;
        fVar107 = -(fVar63 * fVar91) + fVar107;
        fVar108 = -(fVar65 * fVar92) + fVar108;
        fVar109 = -(fVar67 * fVar93) + fVar109;
        fVar42 = -(fVar19 * fVar37) + fVar42;
        fVar44 = -(fVar24 * fVar43) + fVar44;
        fVar47 = -(fVar26 * fVar45) + fVar47;
        fVar49 = -(fVar28 * fVar48) + fVar49;
        fVar62 = -(fVar30 * fVar57) + fVar62;
        fVar64 = -(fVar32 * fVar63) + fVar64;
        fVar66 = -(fVar34 * fVar65) + fVar66;
        fVar68 = -(fVar36 * fVar67) + fVar68;
        auVar60._0_4_ = fVar42 * fVar42 + fVar18 * fVar18 + fVar100 * fVar100;
        auVar60._4_4_ = fVar44 * fVar44 + fVar23 * fVar23 + fVar103 * fVar103;
        auVar60._8_4_ = fVar47 * fVar47 + fVar25 * fVar25 + fVar104 * fVar104;
        auVar60._12_4_ = fVar49 * fVar49 + fVar27 * fVar27 + fVar105 * fVar105;
        auVar60._16_4_ = fVar62 * fVar62 + fVar29 * fVar29 + fVar106 * fVar106;
        auVar60._20_4_ = fVar64 * fVar64 + fVar31 * fVar31 + fVar107 * fVar107;
        auVar60._24_4_ = fVar66 * fVar66 + fVar33 * fVar33 + fVar108 * fVar108;
        auVar60._28_4_ = fVar68 * fVar68 + fVar35 * fVar35 + fVar109 * fVar109;
        auVar84 = vsqrtps_avx(auVar60);
        auVar75._0_4_ = param_7 * auVar96._0_4_;
        auVar75._4_4_ = param_7 * auVar96._4_4_;
        auVar75._8_4_ = param_7 * auVar96._8_4_;
        auVar75._12_4_ = param_7 * auVar96._12_4_;
        auVar75._16_4_ = param_7 * auVar96._16_4_;
        auVar75._20_4_ = param_7 * auVar96._20_4_;
        auVar75._24_4_ = param_7 * auVar96._24_4_;
        auVar75._28_4_ = param_7 * auVar96._28_4_;
        auVar40 = vminps_avx(auVar75,auVar84);
        auVar86._4_4_ = __real_322bcc77;
        auVar86._0_4_ = __real_322bcc77;
        auVar86._8_4_ = __real_322bcc77;
        auVar86._12_4_ = __real_322bcc77;
        auVar86._16_4_ = __real_322bcc77;
        auVar86._20_4_ = __real_322bcc77;
        auVar86._24_4_ = __real_322bcc77;
        auVar86._28_4_ = __real_322bcc77;
        auVar69 = vdivps_avx(auVar40,auVar84);
        auVar40 = vcmpps_avx(auVar84,auVar86,5);
        fVar19 = (float)(auVar69._0_4_ & auVar40._0_4_);
        fVar24 = (float)(auVar69._4_4_ & auVar40._4_4_);
        fVar26 = (float)(auVar69._8_4_ & auVar40._8_4_);
        fVar28 = (float)(auVar69._12_4_ & auVar40._12_4_);
        fVar30 = (float)(auVar69._16_4_ & auVar40._16_4_);
        fVar32 = (float)(auVar69._20_4_ & auVar40._20_4_);
        fVar34 = (float)(auVar69._24_4_ & auVar40._24_4_);
        fVar36 = (float)(auVar69._28_4_ & auVar40._28_4_);
        auVar69._0_4_ = -(fVar19 * fVar18) + auVar16._0_4_;
        auVar69._4_4_ = -(fVar24 * fVar23) + auVar16._4_4_;
        auVar69._8_4_ = -(fVar26 * fVar25) + auVar16._8_4_;
        auVar69._12_4_ = -(fVar28 * fVar27) + auVar16._12_4_;
        auVar69._16_4_ = -(fVar30 * fVar29) + auVar16._16_4_;
        auVar69._20_4_ = -(fVar32 * fVar31) + auVar16._20_4_;
        auVar69._24_4_ = -(fVar34 * fVar33) + auVar16._24_4_;
        auVar69._28_4_ = -(fVar36 * fVar35) + auVar16._28_4_;
        auVar55._0_4_ = -(fVar19 * fVar100) + auVar54._0_4_;
        auVar55._4_4_ = -(fVar24 * fVar103) + auVar54._4_4_;
        auVar55._8_4_ = -(fVar26 * fVar104) + auVar54._8_4_;
        auVar55._12_4_ = -(fVar28 * fVar105) + auVar54._12_4_;
        auVar55._16_4_ = -(fVar30 * fVar106) + auVar54._16_4_;
        auVar55._20_4_ = -(fVar32 * fVar107) + auVar54._20_4_;
        auVar55._24_4_ = -(fVar34 * fVar108) + auVar54._24_4_;
        auVar55._28_4_ = -(fVar36 * fVar109) + auVar54._28_4_;
        auVar52._0_4_ = -(fVar19 * fVar42) + auVar15._0_4_;
        auVar52._4_4_ = -(fVar24 * fVar44) + auVar15._4_4_;
        auVar52._8_4_ = -(fVar26 * fVar47) + auVar15._8_4_;
        auVar52._12_4_ = -(fVar28 * fVar49) + auVar15._12_4_;
        auVar52._16_4_ = -(fVar30 * fVar62) + auVar15._16_4_;
        auVar52._20_4_ = -(fVar32 * fVar64) + auVar15._20_4_;
        auVar52._24_4_ = -(fVar34 * fVar66) + auVar15._24_4_;
        auVar52._28_4_ = -(fVar36 * fVar68) + auVar15._28_4_;
        auVar16 = vmaskmovps_avx(auVar72,auVar69);
        auVar54 = vmaskmovps_avx(auVar72,auVar55);
        auVar15 = vmaskmovps_avx(auVar72,auVar52);
        iVar38 = auVar98._0_4_;
        auVar101 = auVar16._0_16_;
        auVar46 = auVar16._16_16_;
        iVar3 = auVar98._4_4_;
        iVar11 = auVar98._8_4_;
        iVar7 = auVar98._12_4_;
        iVar10 = auVar98._16_4_;
        iVar8 = auVar98._20_4_;
        iVar9 = auVar98._24_4_;
        iVar20 = auVar98._28_4_;
        auVar17 = auVar54._0_16_;
        auVar39 = auVar15._0_16_;
        auVar53 = auVar54._16_16_;
        auVar110 = auVar15._16_16_;
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + iVar38) = auVar16._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar2 = vextractps_avx(auVar101,1);
          *(undefined4 *)(param_1 + iVar3) = uVar2;
        }
        if ((uVar5 & 4) != 0) {
          uVar2 = vextractps_avx(auVar101,2);
          *(undefined4 *)(param_1 + iVar11) = uVar2;
        }
        if ((uVar5 & 8) != 0) {
          uVar2 = vextractps_avx(auVar101,3);
          *(undefined4 *)(param_1 + iVar7) = uVar2;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(param_1 + iVar10) = auVar16._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar46,1);
          *(undefined4 *)(param_1 + iVar8) = uVar2;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar46,2);
          *(undefined4 *)(param_1 + iVar9) = uVar2;
        }
        if (cVar4 < '\0') {
          uVar2 = vextractps_avx(auVar46,3);
          *(undefined4 *)(param_1 + iVar20) = uVar2;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar38) = auVar54._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar2 = vextractps_avx(auVar17,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar3) = uVar2;
        }
        if ((uVar5 & 4) != 0) {
          uVar2 = vextractps_avx(auVar17,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar2;
        }
        if ((uVar5 & 8) != 0) {
          uVar2 = vextractps_avx(auVar17,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar7) = uVar2;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar10) = auVar54._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar53,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar8) = uVar2;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar53,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar9) = uVar2;
        }
        if (cVar4 < '\0') {
          uVar2 = vextractps_avx(auVar53,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar20) = uVar2;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar38) = auVar15._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          uVar2 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar3) = uVar2;
        }
        if ((uVar5 & 4) != 0) {
          uVar2 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar2;
        }
        if ((uVar5 & 8) != 0) {
          uVar2 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar7) = uVar2;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar10) = auVar15._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar110,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar8) = uVar2;
        }
        if ((uVar5 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar110,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar9) = uVar2;
        }
        if (cVar4 < '\0') {
          uVar2 = vextractps_avx(auVar110,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar20) = uVar2;
        }
        if ((uVar5 & 1) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar38) = auVar94._0_4_;
        }
        if ((uVar5 & 2) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar3) = auVar94._4_4_;
        }
        if ((uVar5 & 4) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar11) = auVar94._8_4_;
        }
        if ((uVar5 & 8) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar7) = auVar94._12_4_;
        }
        if ((uVar5 & 0x10) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar10) = auVar94._16_4_;
        }
        if ((uVar5 & 0x20) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar8) = auVar94._20_4_;
        }
        if ((uVar5 & 0x40) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar9) = auVar94._24_4_;
        }
        if (cVar4 < '\0') {
          *(int *)(param_1 + 0xc + (longlong)iVar20) = auVar94._28_4_;
        }
      }
    }
  }
  return;
}

// ApplyPBDPlanarConstraintsNoFriction_avx2 @ 140304b90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPBDPlanarConstraintsNoFriction_avx2
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  undefined1 (*pauVar1) [32];
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  int iVar17;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 in_ZMM5 [64];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [64];
  undefined1 auVar33 [32];
  int iVar34;
  undefined1 auVar35 [32];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  int iVar10;
  undefined1 auVar27 [32];
  
  uVar3 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar3 = param_5;
  }
  if ((int)(uVar3 & 0xfffffff8) < 1) {
    iVar8 = 0;
  }
  else {
    lVar7 = 0x10;
    iVar8 = 0;
    auVar32 = ZEXT1264(ZEXT812(0));
    uVar6 = 0;
    do {
      auVar22 = *(undefined1 (*) [32])(param_2 + (ulonglong)uVar6);
      auVar35 = vpslld_avx2(auVar22,4);
      auVar22 = vpcmpeqd_avx2(auVar22,auVar22);
      auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar22 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
      auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar22 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar43 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      auVar22 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar18 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
      in_ZMM5 = ZEXT3264((undefined1  [32])0x0);
      auVar22 = vcmpps_avx(auVar32._0_32_,auVar18,8);
      if ((((((((SUB321(auVar22 >> 0x1f,0) & 1) == 0 && (SUB321(auVar22 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar22 >> 0x5f,0) & 1) == 0) && SUB321(auVar22 >> 0x7f,0) == '\0') &&
            (SUB321(auVar22 >> 0x9f,0) & 1) == 0) && SUB321(auVar22 >> 0xbf,0) == '\0') &&
          (SUB321(auVar22 >> 0xdf,0) & 1) == 0) && -1 < auVar22[0x1f]) {
        auVar22 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar7 * 4);
        auVar15 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar7 * 4);
        auVar16 = *(undefined1 (*) [32])(param_3 + lVar7 * 4);
        auVar27 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar15);
        auVar25 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar22);
        auVar27 = vblendps_avx(auVar25,auVar27,0x88);
        auVar25 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar15);
        auVar30 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar16);
        auVar25 = vblendps_avx(auVar30,auVar25,0x13);
        auVar33._16_16_ = auVar25._0_16_;
        auVar33._0_16_ = auVar27._0_16_;
        auVar24 = vperm2f128_avx(auVar27,auVar25,0x31);
        auVar22 = vblendps_avx(auVar15,auVar22,0x24);
        auVar22 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar22);
        auVar15 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar16);
        auVar27 = vblendps_avx(auVar22,auVar15,0xe0);
        auVar22 = *(undefined1 (*) [32])(param_4 + -0x40 + lVar7 * 4);
        auVar15 = *(undefined1 (*) [32])(param_4 + -0x20 + lVar7 * 4);
        auVar16 = *(undefined1 (*) [32])(param_4 + lVar7 * 4);
        auVar25 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar15);
        auVar30 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar22);
        auVar25 = vblendps_avx(auVar30,auVar25,0x88);
        auVar30 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar15);
        auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar16);
        auVar30 = vblendps_avx(auVar23,auVar30,0x13);
        auVar23 = vperm2f128_avx(auVar25,auVar30,0x31);
        auVar22 = vblendps_avx(auVar15,auVar22,0x24);
        auVar32 = ZEXT864(0) << 0x20;
        auVar22 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar22);
        auVar15 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar16);
        auVar22 = vblendps_avx(auVar22,auVar15,0xe0);
        in_ZMM5 = ZEXT3264(auVar22);
        auVar15 = vsubps_avx(auVar33,auVar38);
        auVar16 = vsubps_avx(auVar24,auVar40);
        auVar27 = vsubps_avx(auVar27,auVar43);
        auVar24._0_4_ =
             auVar22._0_4_ * auVar27._0_4_ +
             auVar25._0_4_ * auVar15._0_4_ + auVar23._0_4_ * auVar16._0_4_;
        auVar24._4_4_ =
             auVar22._4_4_ * auVar27._4_4_ +
             auVar25._4_4_ * auVar15._4_4_ + auVar23._4_4_ * auVar16._4_4_;
        auVar24._8_4_ =
             auVar22._8_4_ * auVar27._8_4_ +
             auVar25._8_4_ * auVar15._8_4_ + auVar23._8_4_ * auVar16._8_4_;
        auVar24._12_4_ =
             auVar22._12_4_ * auVar27._12_4_ +
             auVar25._12_4_ * auVar15._12_4_ + auVar23._12_4_ * auVar16._12_4_;
        auVar24._16_4_ =
             auVar22._16_4_ * auVar27._16_4_ +
             auVar30._0_4_ * auVar15._16_4_ + auVar23._16_4_ * auVar16._16_4_;
        auVar24._20_4_ =
             auVar22._20_4_ * auVar27._20_4_ +
             auVar30._4_4_ * auVar15._20_4_ + auVar23._20_4_ * auVar16._20_4_;
        auVar24._24_4_ =
             auVar22._24_4_ * auVar27._24_4_ +
             auVar30._8_4_ * auVar15._24_4_ + auVar23._24_4_ * auVar16._24_4_;
        auVar24._28_4_ =
             auVar22._28_4_ * auVar27._28_4_ +
             auVar30._12_4_ * auVar15._28_4_ + auVar23._28_4_ * auVar16._28_4_;
        auVar15 = vcmpps_avx(ZEXT832(0) << 0x20,auVar24,1);
        auVar16 = vcmpps_avx(ZEXT832(0) << 0x20,auVar18,4);
        auVar26._0_4_ = auVar15._0_4_ & auVar16._0_4_;
        auVar26._4_4_ = auVar15._4_4_ & auVar16._4_4_;
        auVar26._8_4_ = auVar15._8_4_ & auVar16._8_4_;
        auVar26._12_4_ = auVar15._12_4_ & auVar16._12_4_;
        auVar27._16_4_ = auVar15._16_4_ & auVar16._16_4_;
        auVar27._0_16_ = auVar26;
        auVar27._20_4_ = auVar15._20_4_ & auVar16._20_4_;
        auVar27._24_4_ = auVar15._24_4_ & auVar16._24_4_;
        auVar27._28_4_ = auVar15._28_4_ & auVar16._28_4_;
        uVar12 = vmovmskps_avx(auVar27);
        if (uVar12 != 0) {
          auVar26 = vpackssdw_avx(auVar26,auVar27._16_16_);
          auVar16._0_4_ = auVar24._0_4_ * auVar25._0_4_ + auVar38._0_4_;
          auVar16._4_4_ = auVar24._4_4_ * auVar25._4_4_ + auVar38._4_4_;
          auVar16._8_4_ = auVar24._8_4_ * auVar25._8_4_ + auVar38._8_4_;
          auVar16._12_4_ = auVar24._12_4_ * auVar25._12_4_ + auVar38._12_4_;
          auVar16._16_4_ = auVar24._16_4_ * auVar30._0_4_ + auVar38._16_4_;
          auVar16._20_4_ = auVar24._20_4_ * auVar30._4_4_ + auVar38._20_4_;
          auVar16._24_4_ = auVar24._24_4_ * auVar30._8_4_ + auVar38._24_4_;
          auVar16._28_4_ = auVar24._28_4_ * auVar30._12_4_ + auVar38._28_4_;
          auVar38._0_4_ = auVar24._0_4_ * auVar23._0_4_ + auVar40._0_4_;
          auVar38._4_4_ = auVar24._4_4_ * auVar23._4_4_ + auVar40._4_4_;
          auVar38._8_4_ = auVar24._8_4_ * auVar23._8_4_ + auVar40._8_4_;
          auVar38._12_4_ = auVar24._12_4_ * auVar23._12_4_ + auVar40._12_4_;
          auVar38._16_4_ = auVar24._16_4_ * auVar23._16_4_ + auVar40._16_4_;
          auVar38._20_4_ = auVar24._20_4_ * auVar23._20_4_ + auVar40._20_4_;
          auVar38._24_4_ = auVar24._24_4_ * auVar23._24_4_ + auVar40._24_4_;
          auVar38._28_4_ = auVar24._28_4_ * auVar23._28_4_ + auVar40._28_4_;
          auVar15._0_4_ = auVar24._0_4_ * auVar22._0_4_ + auVar43._0_4_;
          auVar15._4_4_ = auVar24._4_4_ * auVar22._4_4_ + auVar43._4_4_;
          auVar15._8_4_ = auVar24._8_4_ * auVar22._8_4_ + auVar43._8_4_;
          auVar15._12_4_ = auVar24._12_4_ * auVar22._12_4_ + auVar43._12_4_;
          auVar15._16_4_ = auVar24._16_4_ * auVar22._16_4_ + auVar43._16_4_;
          auVar15._20_4_ = auVar24._20_4_ * auVar22._20_4_ + auVar43._20_4_;
          auVar15._24_4_ = auVar24._24_4_ * auVar22._24_4_ + auVar43._24_4_;
          auVar15._28_4_ = auVar24._28_4_ * auVar22._28_4_ + auVar43._28_4_;
          in_ZMM5 = ZEXT3264(auVar15);
          auVar40 = vpmovsxwd_avx2(auVar26);
          auVar22 = vmaskmovps_avx(auVar40,auVar16);
          auVar38 = vmaskmovps_avx(auVar40,auVar38);
          auVar40 = vmaskmovps_avx(auVar40,auVar15);
          cVar5 = (char)uVar12;
          auVar26 = auVar18._0_16_;
          auVar21 = auVar18._16_16_;
          iVar34 = auVar35._0_4_;
          auVar36 = auVar35._16_16_;
          auVar42 = auVar22._0_16_;
          auVar44 = auVar22._16_16_;
          iVar13 = auVar35._4_4_;
          iVar9 = auVar35._8_4_;
          iVar10 = auVar35._12_4_;
          iVar14 = auVar35._16_4_;
          auVar20 = auVar38._0_16_;
          auVar41 = auVar38._16_16_;
          auVar37 = auVar40._0_16_;
          auVar39 = auVar40._16_16_;
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + iVar34) = auVar22._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar42,1);
            *(undefined4 *)(param_1 + iVar13) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar42,2);
            *(undefined4 *)(param_1 + iVar9) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar42,3);
            *(undefined4 *)(param_1 + iVar10) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            *(int *)(param_1 + iVar14) = auVar22._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar11 = vextractps_avx(auVar36,1);
            uVar2 = vextractps_avx(auVar44,1);
            *(undefined4 *)(param_1 + iVar11) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar11 = vextractps_avx(auVar36,2);
            uVar2 = vextractps_avx(auVar44,2);
            *(undefined4 *)(param_1 + iVar11) = uVar2;
          }
          if (cVar5 < '\0') {
            iVar11 = vextractps_avx(auVar36,3);
            uVar2 = vextractps_avx(auVar44,3);
            *(undefined4 *)(param_1 + iVar11) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 4 + (longlong)iVar34) = auVar38._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar20,1);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar20,2);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar20,3);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            *(int *)(param_1 + 4 + (longlong)iVar14) = auVar38._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar11 = vextractps_avx(auVar36,1);
            uVar2 = vextractps_avx(auVar41,1);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar11 = vextractps_avx(auVar36,2);
            uVar2 = vextractps_avx(auVar41,2);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar2;
          }
          if (cVar5 < '\0') {
            iVar11 = vextractps_avx(auVar36,3);
            uVar2 = vextractps_avx(auVar41,3);
            *(undefined4 *)(param_1 + 4 + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 8 + (longlong)iVar34) = auVar40._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar37,1);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar37,2);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar37,3);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            *(int *)(param_1 + 8 + (longlong)iVar14) = auVar40._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar11 = vextractps_avx(auVar36,1);
            uVar2 = vextractps_avx(auVar39,1);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar11 = vextractps_avx(auVar36,2);
            uVar2 = vextractps_avx(auVar39,2);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar2;
          }
          if (cVar5 < '\0') {
            iVar11 = vextractps_avx(auVar36,3);
            uVar2 = vextractps_avx(auVar39,3);
            *(undefined4 *)(param_1 + 8 + (longlong)iVar11) = uVar2;
          }
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 0xc + (longlong)iVar34) = auVar18._0_4_;
          }
          if ((uVar12 & 2) != 0) {
            uVar2 = vextractps_avx(auVar26,1);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
          }
          if ((uVar12 & 4) != 0) {
            uVar2 = vextractps_avx(auVar26,2);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar9) = uVar2;
          }
          if ((uVar12 & 8) != 0) {
            uVar2 = vextractps_avx(auVar26,3);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar10) = uVar2;
          }
          if ((uVar12 & 0x10) != 0) {
            *(int *)(param_1 + 0xc + (longlong)iVar14) = auVar18._16_4_;
          }
          if ((uVar12 & 0x20) != 0) {
            iVar13 = vextractps_avx(auVar36,1);
            uVar2 = vextractps_avx(auVar21,1);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
          }
          if ((uVar12 & 0x40) != 0) {
            iVar13 = vextractps_avx(auVar36,2);
            uVar2 = vextractps_avx(auVar21,2);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
          }
          if (cVar5 < '\0') {
            iVar13 = vextractps_avx(auVar36,3);
            uVar2 = vextractps_avx(auVar21,3);
            *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
          }
        }
      }
      uVar6 = uVar6 + 0x20;
      lVar7 = lVar7 + 0x18;
      iVar8 = iVar8 + 8;
    } while (iVar8 < (int)(uVar3 & 0xfffffff8));
  }
  if (iVar8 < (int)param_5) {
    auVar22._4_4_ = iVar8;
    auVar22._0_4_ = iVar8;
    auVar22._8_4_ = iVar8;
    auVar22._12_4_ = iVar8;
    auVar22._16_4_ = iVar8;
    auVar22._20_4_ = iVar8;
    auVar22._24_4_ = iVar8;
    auVar22._28_4_ = iVar8;
    auVar43 = vpor_avx2(auVar22,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar18._4_4_ = param_5;
    auVar18._0_4_ = param_5;
    auVar18._8_4_ = param_5;
    auVar18._12_4_ = param_5;
    auVar18._16_4_ = param_5;
    auVar18._20_4_ = param_5;
    auVar18._24_4_ = param_5;
    auVar18._28_4_ = param_5;
    auVar40 = vpcmpgtd_avx2(auVar18,auVar43);
    auVar22 = vmaskmovps_avx(auVar40,*(undefined1 (*) [32])(param_2 + (iVar8 << 2)));
    auVar15 = vpslld_avx2(auVar22,4);
    auVar22 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
    auVar18 = vgatherdps(ZEXT832(0),auVar40);
    auVar35 = vgatherdps(ZEXT832(0),auVar40);
    auVar16 = vgatherdps(ZEXT432(0) << 0x20,auVar40);
    auVar22 = vmaskmovps_avx(auVar40,auVar22);
    auVar18 = vmaskmovps_avx(auVar40,auVar18);
    auVar35 = vmaskmovps_avx(auVar40,auVar35);
    auVar38 = vcmpps_avx(auVar16,ZEXT832(0) << 0x20,8);
    auVar38 = auVar40 & auVar38;
    if ((((((((SUB321(auVar38 >> 0x1f,0) & 1) == 0 && (SUB321(auVar38 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar38 >> 0x5f,0) & 1) == 0) && SUB321(auVar38 >> 0x7f,0) == '\0') &&
          (SUB321(auVar38 >> 0x9f,0) & 1) == 0) && SUB321(auVar38 >> 0xbf,0) == '\0') &&
        (SUB321(auVar38 >> 0xdf,0) & 1) == 0) && -1 < auVar38[0x1f]) {
      uVar4 = (ulonglong)auVar43._0_4_;
      pauVar1 = (undefined1 (*) [32])(param_3 + uVar4 * 0xc);
      auVar38 = vpcmpeqd_avx2(auVar43,auVar43);
      auVar38 = auVar38 & ~auVar40;
      if ((((((((SUB321(auVar38 >> 0x1f,0) & 1) == 0 && (SUB321(auVar38 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar38 >> 0x5f,0) & 1) == 0) && SUB321(auVar38 >> 0x7f,0) == '\0') &&
            (SUB321(auVar38 >> 0x9f,0) & 1) == 0) && SUB321(auVar38 >> 0xbf,0) == '\0') &&
          (SUB321(auVar38 >> 0xdf,0) & 1) == 0) && -1 < auVar38[0x1f]) {
        auVar38 = pauVar1[1];
        auVar43 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar38);
        auVar27 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*pauVar1);
        auVar43 = vblendps_avx(auVar27,auVar43,0x88);
        auVar27 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar38);
        auVar25 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar1[2]);
        auVar27 = vblendps_avx(auVar25,auVar27,0x13);
        auVar19._16_16_ = auVar27._0_16_;
        auVar19._0_16_ = auVar43._0_16_;
        auVar23 = vperm2f128_avx(auVar43,auVar27,0x31);
        auVar38 = vblendps_avx(auVar38,*pauVar1,0x24);
        auVar38 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar38);
        auVar43 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,pauVar1[2]);
        auVar25 = vblendps_avx(auVar38,auVar43,0xe0);
        auVar38 = *(undefined1 (*) [32])(param_4 + uVar4 * 0xc);
        auVar43 = *(undefined1 (*) [32])(param_4 + 0x20 + uVar4 * 0xc);
        auVar27 = *(undefined1 (*) [32])(param_4 + 0x40 + uVar4 * 0xc);
        auVar30 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar43);
        auVar24 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,auVar38);
        auVar30 = vblendps_avx(auVar24,auVar30,0x88);
        auVar24 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar43);
        auVar33 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,auVar27);
        auVar24 = vblendps_avx(auVar33,auVar24,0x13);
        auVar28._16_16_ = auVar24._0_16_;
        auVar28._0_16_ = auVar30._0_16_;
        auVar30 = vperm2f128_avx(auVar30,auVar24,0x31);
        auVar38 = vblendps_avx(auVar43,auVar38,0x24);
        auVar38 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar38);
        auVar43 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,auVar27);
        auVar38 = vblendps_avx(auVar38,auVar43,0xe0);
      }
      else {
        auVar19 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
        auVar23 = vgatherdps(ZEXT832(0),auVar40);
        auVar25 = vgatherdps(ZEXT832(0),auVar40);
        auVar28 = vgatherdps(ZEXT832(0),auVar40);
        auVar30 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar40);
        auVar38 = vgatherdps(ZEXT832(0) << 0x20,auVar40);
      }
      auVar43 = vsubps_avx(auVar19,auVar22);
      auVar27 = vsubps_avx(auVar23,auVar18);
      auVar25 = vsubps_avx(auVar25,auVar35);
      auVar23._0_4_ =
           auVar38._0_4_ * auVar25._0_4_ +
           auVar28._0_4_ * auVar43._0_4_ + auVar30._0_4_ * auVar27._0_4_;
      auVar23._4_4_ =
           auVar38._4_4_ * auVar25._4_4_ +
           auVar28._4_4_ * auVar43._4_4_ + auVar30._4_4_ * auVar27._4_4_;
      auVar23._8_4_ =
           auVar38._8_4_ * auVar25._8_4_ +
           auVar28._8_4_ * auVar43._8_4_ + auVar30._8_4_ * auVar27._8_4_;
      auVar23._12_4_ =
           auVar38._12_4_ * auVar25._12_4_ +
           auVar28._12_4_ * auVar43._12_4_ + auVar30._12_4_ * auVar27._12_4_;
      auVar23._16_4_ =
           auVar38._16_4_ * auVar25._16_4_ +
           auVar28._16_4_ * auVar43._16_4_ + auVar30._16_4_ * auVar27._16_4_;
      auVar23._20_4_ =
           auVar38._20_4_ * auVar25._20_4_ +
           auVar28._20_4_ * auVar43._20_4_ + auVar30._20_4_ * auVar27._20_4_;
      auVar23._24_4_ =
           auVar38._24_4_ * auVar25._24_4_ +
           auVar28._24_4_ * auVar43._24_4_ + auVar30._24_4_ * auVar27._24_4_;
      auVar23._28_4_ =
           auVar38._28_4_ * auVar25._28_4_ +
           auVar28._28_4_ * auVar43._28_4_ + auVar30._28_4_ * auVar27._28_4_;
      auVar43 = vcmpps_avx(ZEXT832(0) << 0x20,auVar23,1);
      auVar27 = vcmpps_avx(auVar16,ZEXT832(0) << 0x20,4);
      auVar21._0_4_ = auVar43._0_4_ & auVar27._0_4_;
      auVar21._4_4_ = auVar43._4_4_ & auVar27._4_4_;
      auVar21._8_4_ = auVar43._8_4_ & auVar27._8_4_;
      auVar21._12_4_ = auVar43._12_4_ & auVar27._12_4_;
      auVar25._16_4_ = auVar43._16_4_ & auVar27._16_4_;
      auVar25._0_16_ = auVar21;
      auVar25._20_4_ = auVar43._20_4_ & auVar27._20_4_;
      auVar25._24_4_ = auVar43._24_4_ & auVar27._24_4_;
      auVar25._28_4_ = auVar43._28_4_ & auVar27._28_4_;
      auVar43._0_4_ = auVar21._0_4_ & auVar40._0_4_;
      auVar43._4_4_ = auVar21._4_4_ & auVar40._4_4_;
      auVar43._8_4_ = auVar21._8_4_ & auVar40._8_4_;
      auVar43._12_4_ = auVar21._12_4_ & auVar40._12_4_;
      auVar43._16_4_ = auVar25._16_4_ & auVar40._16_4_;
      auVar43._20_4_ = auVar25._20_4_ & auVar40._20_4_;
      auVar43._24_4_ = auVar25._24_4_ & auVar40._24_4_;
      auVar43._28_4_ = auVar25._28_4_ & auVar40._28_4_;
      uVar3 = vmovmskps_avx(auVar43);
      if (uVar3 != 0) {
        auVar26 = vpackssdw_avx(auVar21,auVar25._16_16_);
        auVar43 = vpmovsxwd_avx2(auVar26);
        auVar40 = vpand_avx2(auVar43,auVar40);
        auVar29._0_4_ = auVar23._0_4_ * auVar28._0_4_ + auVar22._0_4_;
        auVar29._4_4_ = auVar23._4_4_ * auVar28._4_4_ + auVar22._4_4_;
        auVar29._8_4_ = auVar23._8_4_ * auVar28._8_4_ + auVar22._8_4_;
        auVar29._12_4_ = auVar23._12_4_ * auVar28._12_4_ + auVar22._12_4_;
        auVar29._16_4_ = auVar23._16_4_ * auVar28._16_4_ + auVar22._16_4_;
        auVar29._20_4_ = auVar23._20_4_ * auVar28._20_4_ + auVar22._20_4_;
        auVar29._24_4_ = auVar23._24_4_ * auVar28._24_4_ + auVar22._24_4_;
        auVar29._28_4_ = auVar23._28_4_ * auVar28._28_4_ + auVar22._28_4_;
        auVar31._0_4_ = auVar23._0_4_ * auVar30._0_4_ + auVar18._0_4_;
        auVar31._4_4_ = auVar23._4_4_ * auVar30._4_4_ + auVar18._4_4_;
        auVar31._8_4_ = auVar23._8_4_ * auVar30._8_4_ + auVar18._8_4_;
        auVar31._12_4_ = auVar23._12_4_ * auVar30._12_4_ + auVar18._12_4_;
        auVar31._16_4_ = auVar23._16_4_ * auVar30._16_4_ + auVar18._16_4_;
        auVar31._20_4_ = auVar23._20_4_ * auVar30._20_4_ + auVar18._20_4_;
        auVar31._24_4_ = auVar23._24_4_ * auVar30._24_4_ + auVar18._24_4_;
        auVar31._28_4_ = auVar23._28_4_ * auVar30._28_4_ + auVar18._28_4_;
        auVar30._0_4_ = auVar23._0_4_ * auVar38._0_4_ + auVar35._0_4_;
        auVar30._4_4_ = auVar23._4_4_ * auVar38._4_4_ + auVar35._4_4_;
        auVar30._8_4_ = auVar23._8_4_ * auVar38._8_4_ + auVar35._8_4_;
        auVar30._12_4_ = auVar23._12_4_ * auVar38._12_4_ + auVar35._12_4_;
        auVar30._16_4_ = auVar23._16_4_ * auVar38._16_4_ + auVar35._16_4_;
        auVar30._20_4_ = auVar23._20_4_ * auVar38._20_4_ + auVar35._20_4_;
        auVar30._24_4_ = auVar23._24_4_ * auVar38._24_4_ + auVar35._24_4_;
        auVar30._28_4_ = auVar23._28_4_ * auVar38._28_4_ + auVar35._28_4_;
        auVar22 = vmaskmovps_avx(auVar40,auVar29);
        auVar18 = vmaskmovps_avx(auVar40,auVar31);
        auVar35 = vmaskmovps_avx(auVar40,auVar30);
        cVar5 = (char)uVar3;
        iVar11 = auVar15._0_4_;
        auVar26 = auVar16._0_16_;
        auVar21 = auVar16._16_16_;
        auVar36 = auVar22._0_16_;
        auVar20 = auVar22._16_16_;
        iVar8 = auVar15._4_4_;
        iVar13 = auVar15._8_4_;
        iVar9 = auVar15._12_4_;
        iVar17 = auVar15._16_4_;
        iVar10 = auVar15._20_4_;
        iVar14 = auVar15._24_4_;
        iVar34 = auVar15._28_4_;
        auVar37 = auVar18._0_16_;
        auVar39 = auVar35._0_16_;
        auVar41 = auVar18._16_16_;
        auVar42 = auVar35._16_16_;
        if ((uVar3 & 1) != 0) {
          *(int *)(param_1 + iVar11) = auVar22._0_4_;
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = vextractps_avx(auVar36,1);
          *(undefined4 *)(param_1 + iVar8) = uVar2;
        }
        if ((uVar3 & 4) != 0) {
          uVar2 = vextractps_avx(auVar36,2);
          *(undefined4 *)(param_1 + iVar13) = uVar2;
        }
        if ((uVar3 & 8) != 0) {
          uVar2 = vextractps_avx(auVar36,3);
          *(undefined4 *)(param_1 + iVar9) = uVar2;
        }
        if ((uVar3 & 0x10) != 0) {
          *(int *)(param_1 + iVar17) = auVar22._16_4_;
        }
        if ((uVar3 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar20,1);
          *(undefined4 *)(param_1 + iVar10) = uVar2;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar20,2);
          *(undefined4 *)(param_1 + iVar14) = uVar2;
        }
        if (cVar5 < '\0') {
          uVar2 = vextractps_avx(auVar20,3);
          *(undefined4 *)(param_1 + iVar34) = uVar2;
        }
        if ((uVar3 & 1) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar11) = auVar18._0_4_;
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = vextractps_avx(auVar37,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar8) = uVar2;
        }
        if ((uVar3 & 4) != 0) {
          uVar2 = vextractps_avx(auVar37,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar13) = uVar2;
        }
        if ((uVar3 & 8) != 0) {
          uVar2 = vextractps_avx(auVar37,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar9) = uVar2;
        }
        if ((uVar3 & 0x10) != 0) {
          *(int *)(param_1 + 4 + (longlong)iVar17) = auVar18._16_4_;
        }
        if ((uVar3 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar41,1);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar10) = uVar2;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar41,2);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar14) = uVar2;
        }
        if (cVar5 < '\0') {
          uVar2 = vextractps_avx(auVar41,3);
          *(undefined4 *)(param_1 + 4 + (longlong)iVar34) = uVar2;
        }
        if ((uVar3 & 1) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar11) = auVar35._0_4_;
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = vextractps_avx(auVar39,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar8) = uVar2;
        }
        if ((uVar3 & 4) != 0) {
          uVar2 = vextractps_avx(auVar39,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar13) = uVar2;
        }
        if ((uVar3 & 8) != 0) {
          uVar2 = vextractps_avx(auVar39,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar9) = uVar2;
        }
        if ((uVar3 & 0x10) != 0) {
          *(int *)(param_1 + 8 + (longlong)iVar17) = auVar35._16_4_;
        }
        if ((uVar3 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar42,1);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar10) = uVar2;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar42,2);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar14) = uVar2;
        }
        if (cVar5 < '\0') {
          uVar2 = vextractps_avx(auVar42,3);
          *(undefined4 *)(param_1 + 8 + (longlong)iVar34) = uVar2;
        }
        if ((uVar3 & 1) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar11) = auVar16._0_4_;
        }
        if ((uVar3 & 2) != 0) {
          uVar2 = vextractps_avx(auVar26,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar8) = uVar2;
        }
        if ((uVar3 & 4) != 0) {
          uVar2 = vextractps_avx(auVar26,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar13) = uVar2;
        }
        if ((uVar3 & 8) != 0) {
          uVar2 = vextractps_avx(auVar26,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar9) = uVar2;
        }
        if ((uVar3 & 0x10) != 0) {
          *(int *)(param_1 + 0xc + (longlong)iVar17) = auVar16._16_4_;
        }
        if ((uVar3 & 0x20) != 0) {
          uVar2 = vextractps_avx(auVar21,1);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar10) = uVar2;
        }
        if ((uVar3 & 0x40) != 0) {
          uVar2 = vextractps_avx(auVar21,2);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar14) = uVar2;
        }
        if (cVar5 < '\0') {
          uVar2 = vextractps_avx(auVar21,3);
          *(undefined4 *)(param_1 + 0xc + (longlong)iVar34) = uVar2;
        }
      }
    }
  }
  return;
}

