// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 4

// TransformClothSimulData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_avx512skx @ 140d1ad50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformClothSimulData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_avx512skx
               (longlong param_1,longlong param_2,undefined1 (*param_3) [32],undefined8 param_4,
               uint param_5)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  ulonglong uVar9;
  longlong unaff_RBX;
  uint uVar10;
  undefined1 (*pauVar11) [32];
  uint uVar12;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong lVar13;
  byte bVar14;
  ulonglong uVar15;
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
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [16];
  undefined1 in_ZMM3 [64];
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar65 [32];
  double dVar69;
  double dVar73;
  double dVar74;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  double dVar75;
  undefined1 auVar72 [32];
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
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined8 local_108;
  double local_e8;
  
  auVar56 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar22 = in_ZMM22._0_16_;
  auVar21 = in_ZMM21._0_16_;
  auVar23 = vmulpd_avx512vl(*param_3,
                            ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000)
  ;
  uVar3 = *(ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)(param_3[1] + 8);
  uVar5 = *(ulonglong *)(param_3[1] + 0x10);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar5;
  auVar27._24_8_ = 0;
  auVar27._0_24_ = *(undefined1 (*) [24])param_3[2];
  auVar24._8_8_ = __real_7fffffffffffffff;
  auVar24._0_8_ = __real_7fffffffffffffff;
  auVar24._16_8_ = __real_7fffffffffffffff;
  auVar24._24_8_ = __real_7fffffffffffffff;
  auVar24 = vandpd_avx512vl(auVar27,auVar24);
  auVar25._8_8_ = __real_3e45798ee2308c3a;
  auVar25._0_8_ = __real_3e45798ee2308c3a;
  auVar25._16_8_ = __real_3e45798ee2308c3a;
  auVar25._24_8_ = __real_3e45798ee2308c3a;
  uVar15 = vcmppd_avx512vl(auVar24,auVar25,6);
  uVar15 = uVar15 & 0xf;
  auVar24 = vrcp14pd_avx512vl(auVar27);
  auVar26._8_8_ = __real_4000000000000000;
  auVar26._0_8_ = __real_4000000000000000;
  auVar26._16_8_ = __real_4000000000000000;
  auVar26._24_8_ = __real_4000000000000000;
  auVar25 = vfnmadd213pd_avx512vl(auVar27,auVar24,auVar26);
  auVar24 = vmulpd_avx512vl(auVar24,auVar25);
  uVar1 = (ulonglong)((byte)uVar15 & 1) * auVar24._0_8_;
  auVar16._8_8_ = (ulonglong)((byte)(uVar15 >> 1) & 1) * auVar24._8_8_;
  auVar16._0_8_ = uVar1;
  auVar29._16_8_ = (ulonglong)((byte)(uVar15 >> 2) & 1) * auVar24._16_8_;
  auVar29._0_16_ = auVar16;
  auVar29._24_8_ = (uVar15 >> 3) * auVar24._24_8_;
  uVar10 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar10 = param_5;
  }
  auVar26 = vpermpd_avx512vl(auVar23,0x55);
  auVar27 = vpermpd_avx512vl(auVar23,0xaa);
  auVar28 = vpermpd_avx512vl(auVar23,0xff);
  auVar24 = vpermpd_avx2(auVar29,0x55);
  auVar25 = vpermpd_avx2(auVar29,0xaa);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar5;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  dVar60 = auVar27._0_8_;
  dVar61 = auVar27._8_8_;
  dVar62 = auVar27._16_8_;
  dVar63 = auVar27._24_8_;
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar29 = vbroadcastsd_avx512vl(in_ZMM3._0_16_);
    auVar21 = auVar29._0_16_;
    auVar30 = vbroadcastsd_avx512vl(auVar20);
    auVar22 = auVar30._0_16_;
    auVar31 = vbroadcastsd_avx512vl(auVar19);
    auVar32 = vbroadcastsd_avx512vl(auVar18);
    auVar33 = vbroadcastsd_avx512vl(auVar23._0_16_);
    auVar34 = vbroadcastsd_avx512vl(auVar16);
    lVar13 = 0x40;
    uVar12 = 0;
    auVar35 = vbroadcastss_avx512vl(ZEXT416(__real_80000000));
    do {
      auVar58 = ___ymm_00000008000000020000000c00000007000000010000000b0000000600000000;
      auVar57 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
      auVar39 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar13);
      auVar41 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar13);
      auVar40 = vblendps_avx(auVar41,auVar39,0x24);
      auVar36 = vpermt2ps_avx512vl(auVar39,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar41);
      auVar37 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(param_1 + lVar13));
      auVar38 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar13),
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar41);
      auVar39 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar13);
      auVar41 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar13);
      auVar40 = vblendps_avx(auVar41,auVar39,0x24);
      auVar39 = vpermt2ps_avx512vl(auVar39,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar41);
      auVar40 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(param_2 + lVar13));
      auVar41 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar13),
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar41);
      auVar42 = vinsertf32x4_avx512vl(auVar39,auVar41._0_16_,1);
      auVar43 = vshuff64x2_avx512vl(auVar39,auVar41,3);
      auVar44 = vcvtps2pd_avx512vl(auVar36._0_16_);
      auVar45 = vcvtps2pd_avx512vl(auVar38._0_16_);
      auVar39 = vcvtps2pd_avx(auVar36._16_16_);
      auVar16 = vextractf32x4_avx512vl(auVar38,1);
      auVar46 = vcvtps2pd_avx512vl(auVar16);
      auVar47 = vcvtps2pd_avx512vl(auVar37._0_16_);
      auVar41 = vcvtps2pd_avx(auVar37._16_16_);
      auVar36 = vxorps_avx512vl(auVar42,auVar35);
      auVar38 = vxorpd_avx512vl(auVar43,auVar35);
      auVar43 = vxorps_avx512vl(auVar40,auVar35);
      auVar40 = vcvtps2pd_avx(auVar36._16_16_);
      auVar36 = vcvtps2pd_avx(auVar36._0_16_);
      auVar37 = vcvtps2pd_avx(auVar38._16_16_);
      auVar38 = vcvtps2pd_avx(auVar38._0_16_);
      auVar42 = vcvtps2pd_avx(auVar43._16_16_);
      auVar43 = vcvtps2pd_avx(auVar43._0_16_);
      auVar45 = vfmsub213pd_avx512vl(auVar45,auVar29,auVar30);
      auVar44 = vfmsub213pd_avx512vl(auVar44,auVar29,auVar30);
      auVar46 = vfmsub213pd_avx512vl(auVar46,auVar29,auVar31);
      auVar39 = vfmsub213pd_avx512vl(auVar39,auVar29,auVar31);
      auVar41 = vfmsub213pd_avx512vl(auVar41,auVar29,auVar32);
      auVar47 = vfmsub213pd_avx512vl(auVar47,auVar29,auVar32);
      auVar48 = vmulpd_avx512vl(auVar26,auVar44);
      auVar49 = vmulpd_avx512vl(auVar26,auVar45);
      auVar50 = vmulpd_avx512vl(auVar27,auVar39);
      auVar51 = vmulpd_avx512vl(auVar27,auVar46);
      auVar52 = vmulpd_avx512vl(auVar33,auVar47);
      auVar53 = vmulpd_avx512vl(auVar33,auVar41);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar33,auVar46);
      auVar48 = vfmsub231pd_avx512vl(auVar48,auVar33,auVar39);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar26,auVar41);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar26,auVar47);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar27,auVar45);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar27,auVar44);
      auVar50 = vaddpd_avx512vl(auVar50,auVar50);
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar54._0_8_ = auVar52._0_8_ + auVar52._0_8_;
      auVar54._8_8_ = auVar52._8_8_ + auVar52._8_8_;
      auVar54._16_8_ = auVar52._16_8_ + auVar52._16_8_;
      auVar54._24_8_ = auVar52._24_8_ + auVar52._24_8_;
      auVar70._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar70._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar70._16_8_ = auVar53._16_8_ + auVar53._16_8_;
      auVar70._24_8_ = auVar53._24_8_ + auVar53._24_8_;
      auVar48 = vaddpd_avx512vl(auVar48,auVar48);
      auVar49 = vaddpd_avx512vl(auVar49,auVar49);
      auVar45 = vfmadd231pd_avx512vl(auVar45,auVar28,auVar51);
      auVar44 = vfmadd231pd_avx512vl(auVar44,auVar28,auVar50);
      auVar46 = vfmadd231pd_avx512vl(auVar46,auVar28,auVar70);
      auVar39 = vfmadd231pd_avx512vl(auVar39,auVar28,auVar54);
      auVar41 = vfmadd231pd_avx512vl(auVar41,auVar28,auVar49);
      auVar47 = vfmadd231pd_avx512vl(auVar47,auVar28,auVar48);
      auVar52 = vmulpd_avx512vl(auVar26,auVar51);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar33,auVar70);
      auVar53 = vmulpd_avx512vl(auVar26,auVar50);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar33,auVar54);
      auVar55._0_8_ = dVar60 * auVar54._0_8_;
      auVar55._8_8_ = dVar61 * auVar54._8_8_;
      auVar55._16_8_ = dVar62 * auVar54._16_8_;
      auVar55._24_8_ = dVar63 * auVar54._24_8_;
      auVar71._0_8_ = dVar60 * auVar70._0_8_;
      auVar71._8_8_ = dVar61 * auVar70._8_8_;
      auVar71._16_8_ = dVar62 * auVar70._16_8_;
      auVar71._24_8_ = dVar63 * auVar70._24_8_;
      auVar47 = vaddpd_avx512vl(auVar47,auVar53);
      auVar53 = vmulpd_avx512vl(auVar33,auVar48);
      auVar54 = vfmsub231pd_avx512vl(auVar71,auVar26,auVar49);
      auVar49 = vmulpd_avx512vl(auVar33,auVar49);
      auVar45 = vaddpd_avx512vl(auVar45,auVar54);
      auVar48 = vfmsub231pd_avx512vl(auVar55,auVar26,auVar48);
      auVar44 = vaddpd_avx512vl(auVar44,auVar48);
      auVar48 = vfmsub231pd_avx512vl(auVar49,auVar27,auVar51);
      auVar46 = vaddpd_avx512vl(auVar46,auVar48);
      auVar48 = vfmsub231pd_avx512vl(auVar53,auVar27,auVar50);
      auVar49 = vmulpd_avx512vl(auVar26,auVar36);
      auVar50 = vmulpd_avx512vl(auVar26,auVar40);
      auVar51 = vmulpd_avx512vl(auVar27,auVar38);
      auVar53 = vmulpd_avx512vl(auVar27,auVar37);
      auVar54 = vmulpd_avx512vl(auVar33,auVar43);
      auVar55 = vmulpd_avx512vl(auVar33,auVar42);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar33,auVar37);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar33,auVar38);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar26,auVar42);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar26,auVar43);
      dVar69 = dVar60 * auVar40._0_8_ - auVar55._0_8_;
      dVar73 = dVar61 * auVar40._8_8_ - auVar55._8_8_;
      dVar74 = dVar62 * auVar40._16_8_ - auVar55._16_8_;
      dVar75 = dVar63 * auVar40._24_8_ - auVar55._24_8_;
      dVar64 = dVar60 * auVar36._0_8_ - auVar54._0_8_;
      dVar66 = dVar61 * auVar36._8_8_ - auVar54._8_8_;
      dVar67 = dVar62 * auVar36._16_8_ - auVar54._16_8_;
      dVar68 = dVar63 * auVar36._24_8_ - auVar54._24_8_;
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar53 = vaddpd_avx512vl(auVar53,auVar53);
      auVar65._0_8_ = dVar64 + dVar64;
      auVar65._8_8_ = dVar66 + dVar66;
      auVar65._16_8_ = dVar67 + dVar67;
      auVar65._24_8_ = dVar68 + dVar68;
      auVar72._0_8_ = dVar69 + dVar69;
      auVar72._8_8_ = dVar73 + dVar73;
      auVar72._16_8_ = dVar74 + dVar74;
      auVar72._24_8_ = dVar75 + dVar75;
      auVar49 = vaddpd_avx512vl(auVar49,auVar49);
      auVar50 = vaddpd_avx512vl(auVar50,auVar50);
      auVar42 = vfmadd231pd_avx512vl(auVar42,auVar28,auVar50);
      auVar43 = vfmadd231pd_avx512vl(auVar43,auVar28,auVar49);
      auVar54 = vmulpd_avx512vl(auVar26,auVar53);
      auVar54 = vfmsub231pd_avx512vl(auVar54,auVar33,auVar72);
      auVar76._0_8_ = auVar42._0_8_ + auVar54._0_8_;
      auVar76._8_8_ = auVar42._8_8_ + auVar54._8_8_;
      auVar76._16_8_ = auVar42._16_8_ + auVar54._16_8_;
      auVar76._24_8_ = auVar42._24_8_ + auVar54._24_8_;
      auVar42 = vmulpd_avx512vl(auVar26,auVar51);
      auVar42 = vfmsub231pd_avx512vl(auVar42,auVar33,auVar65);
      auVar85._0_8_ = auVar43._0_8_ + auVar42._0_8_;
      auVar85._8_8_ = auVar43._8_8_ + auVar42._8_8_;
      auVar85._16_8_ = auVar43._16_8_ + auVar42._16_8_;
      auVar85._24_8_ = auVar43._24_8_ + auVar42._24_8_;
      auVar40 = vfmadd231pd_avx512vl(auVar40,auVar28,auVar53);
      auVar37 = vfmadd231pd_avx512vl(auVar37,auVar28,auVar72);
      auVar42._0_8_ = dVar60 * auVar72._0_8_;
      auVar42._8_8_ = dVar61 * auVar72._8_8_;
      auVar42._16_8_ = dVar62 * auVar72._16_8_;
      auVar42._24_8_ = dVar63 * auVar72._24_8_;
      auVar42 = vfmsub231pd_avx512vl(auVar42,auVar26,auVar50);
      auVar84._0_8_ = auVar40._0_8_ + auVar42._0_8_;
      auVar84._8_8_ = auVar40._8_8_ + auVar42._8_8_;
      auVar84._16_8_ = auVar40._16_8_ + auVar42._16_8_;
      auVar84._24_8_ = auVar40._24_8_ + auVar42._24_8_;
      auVar40 = vfmadd231pd_avx512vl(auVar36,auVar28,auVar51);
      auVar36 = vfmadd231pd_avx512vl(auVar38,auVar28,auVar65);
      auVar38._0_8_ = dVar60 * auVar65._0_8_;
      auVar38._8_8_ = dVar61 * auVar65._8_8_;
      auVar38._16_8_ = dVar62 * auVar65._16_8_;
      auVar38._24_8_ = dVar63 * auVar65._24_8_;
      auVar38 = vfmsub231pd_avx512vl(auVar38,auVar26,auVar49);
      auVar83._0_8_ = auVar40._0_8_ + auVar38._0_8_;
      auVar83._8_8_ = auVar40._8_8_ + auVar38._8_8_;
      auVar83._16_8_ = auVar40._16_8_ + auVar38._16_8_;
      auVar83._24_8_ = auVar40._24_8_ + auVar38._24_8_;
      auVar40 = vmulpd_avx512vl(auVar33,auVar50);
      auVar40 = vfmsub231pd_avx512vl(auVar40,auVar27,auVar53);
      auVar37 = vaddpd_avx512vl(auVar37,auVar40);
      auVar40 = vmulpd_avx512vl(auVar33,auVar49);
      auVar40 = vfmsub231pd_avx512vl(auVar40,auVar27,auVar51);
      auVar36 = vaddpd_avx512vl(auVar36,auVar40);
      auVar40._0_8_ = auVar25._0_8_ * (auVar52._0_8_ + auVar41._0_8_);
      auVar40._8_8_ = auVar25._8_8_ * (auVar52._8_8_ + auVar41._8_8_);
      auVar40._16_8_ = auVar25._16_8_ * (auVar52._16_8_ + auVar41._16_8_);
      auVar40._24_8_ = auVar25._24_8_ * (auVar52._24_8_ + auVar41._24_8_);
      auVar41 = vmulpd_avx512vl(auVar25,auVar47);
      auVar17 = vcvtpd2ps_avx512vl(auVar41);
      auVar16 = vcvtpd2ps_avx(auVar40);
      auVar38 = vinsertf32x4_avx512vl(ZEXT1632(auVar17),auVar16,1);
      auVar41 = vmulpd_avx512vl(auVar34,auVar45);
      auVar40 = vmulpd_avx512vl(auVar34,auVar44);
      auVar42 = vmulpd_avx512vl(auVar24,auVar46);
      auVar44._0_8_ = auVar24._0_8_ * (auVar48._0_8_ + auVar39._0_8_);
      auVar44._8_8_ = auVar24._8_8_ * (auVar48._8_8_ + auVar39._8_8_);
      auVar44._16_8_ = auVar24._16_8_ * (auVar48._16_8_ + auVar39._16_8_);
      auVar44._24_8_ = auVar24._24_8_ * (auVar48._24_8_ + auVar39._24_8_);
      auVar39 = vmulpd_avx512vl(auVar25,auVar76);
      auVar17 = vcvtpd2ps_avx512vl(auVar40);
      auVar40 = vmulpd_avx512vl(auVar25,auVar85);
      auVar16 = vcvtpd2ps_avx512vl(auVar41);
      auVar43 = vinsertf32x4_avx512vl(ZEXT1632(auVar17),auVar16,1);
      auVar16 = vcvtpd2ps_avx(auVar44);
      auVar18 = vcvtpd2ps_avx512vl(auVar42);
      auVar19 = vcvtpd2ps_avx512vl(auVar40);
      auVar20 = vcvtpd2ps_avx512vl(auVar39);
      auVar39 = vinsertf32x4_avx512vl(ZEXT1632(auVar16),auVar18,1);
      auVar42 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar20,1);
      auVar41 = vinsertf32x4_avx512vl(ZEXT1632(auVar17),auVar16,1);
      auVar40 = vshufpd_avx512vl(auVar43,auVar41,2);
      auVar44 = vpermt2ps_avx512vl(auVar38,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar39);
      auVar41 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_00000008000000020000000c00000007000000010000000b0000000600000000
                                   ,auVar44);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar13) = auVar41;
      auVar41 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar40 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar40);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar13) = auVar40;
      auVar40 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar39 = vpermt2ps_avx512vl(auVar39,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar43);
      auVar39 = vpermt2ps_avx512vl(auVar39,auVar56,auVar38);
      auVar38 = vmulpd_avx512vl(auVar34,auVar84);
      auVar43 = vmulpd_avx512vl(auVar34,auVar83);
      auVar37 = vmulpd_avx512vl(auVar24,auVar37);
      auVar16 = vcvtpd2ps_avx(auVar43);
      auVar36 = vmulpd_avx512vl(auVar24,auVar36);
      auVar17 = vcvtpd2ps_avx(auVar38);
      auVar43._16_16_ = auVar17;
      auVar43._0_16_ = auVar16;
      auVar17 = vcvtpd2ps_avx512vl(auVar36);
      auVar18 = vcvtpd2ps_avx512vl(auVar37);
      auVar36 = vinsertf32x4_avx512vl(ZEXT1632(auVar17),auVar18,1);
      *(undefined1 (*) [32])(param_1 + lVar13) = auVar39;
      auVar39 = vinsertf32x4_avx512vl(ZEXT1632(auVar16),auVar17,1);
      auVar39 = vshufpd_avx(auVar43,auVar39,2);
      auVar37 = vpermt2ps_avx512vl(auVar42,auVar57,auVar36);
      auVar38 = vpermt2ps_avx512vl(auVar39,auVar58,auVar37);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar13) = auVar38;
      auVar39 = vpermt2ps_avx512vl(auVar37,auVar41,auVar39);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar13) = auVar39;
      auVar39 = vpermt2ps_avx512vl(auVar36,auVar40,auVar43);
      auVar39 = vpermt2ps_avx512vl(auVar39,auVar56,auVar42);
      auVar17 = auVar39._0_16_;
      *(undefined1 (*) [32])(param_2 + lVar13) = auVar39;
      lVar13 = lVar13 + 0x60;
      uVar12 = uVar12 + 8;
    } while ((int)uVar12 < (int)(uVar10 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar12) {
      return;
    }
  }
  auVar31 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar30 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar29 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar56 = vpbroadcastd_avx512vl();
  auVar56 = vpor_avx2(auVar56,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar32 = vpbroadcastd_avx512vl();
  uVar15 = vpcmpgtd_avx512vl(auVar32,auVar56);
  uVar9 = (ulonglong)uVar12;
  pauVar2 = (undefined1 (*) [32])(param_1 + uVar9 * 0xc);
  bVar14 = (byte)uVar15;
  if (bVar14 == 0xff) {
    auVar56 = pauVar2[1];
    auVar32 = vblendps_avx(auVar56,*pauVar2,0x24);
    auVar33 = vpermt2ps_avx512vl(*pauVar2,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar56);
    auVar36 = vpermt2ps_avx512vl(auVar32,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar2[2]);
    auVar56 = vpermt2ps_avx512vl(pauVar2[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar56);
    auVar41 = vinsertf32x4_avx512vl(auVar33,auVar56._0_16_,1);
    auVar37 = vshuff64x2_avx512vl(auVar33,auVar56,3);
    pauVar11 = (undefined1 (*) [32])(param_2 + uVar9 * 0xc);
    auVar56 = *(undefined1 (*) [32])(param_2 + uVar9 * 0xc);
    auVar32 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar9 * 0xc);
    auVar33 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar9 * 0xc);
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar56,auVar32);
    auVar35 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar33,auVar32);
    auVar39 = vinsertf32x4_avx512vl(auVar34,auVar35._0_16_,1);
    auVar34 = vshuff64x2_avx512vl(auVar34,auVar35,3);
    auVar56 = vblendps_avx(auVar32,auVar56,0x24);
    auVar56 = vpermt2ps_avx512vl(auVar56,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar33);
  }
  else {
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_2));
    auVar41._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * auVar56._4_4_;
    auVar41._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_;
    auVar41._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * auVar56._8_4_;
    auVar41._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * auVar56._12_4_;
    auVar41._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar41._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar41._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar41._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    auVar16 = vxorpd_avx512vl(auVar17,auVar17);
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
    auVar37._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_ | (uint)!(bool)(bVar14 & 1) * auVar16._0_4_;
    bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
    auVar37._4_4_ = (uint)bVar8 * auVar56._4_4_ | (uint)!bVar8 * auVar16._4_4_;
    bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
    auVar37._8_4_ = (uint)bVar8 * auVar56._8_4_ | (uint)!bVar8 * auVar16._8_4_;
    bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
    auVar37._12_4_ = (uint)bVar8 * auVar56._12_4_ | (uint)!bVar8 * auVar16._12_4_;
    auVar37._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar37._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar37._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar37._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
    auVar36._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * auVar56._4_4_;
    auVar36._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_;
    auVar36._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * auVar56._8_4_;
    auVar36._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * auVar56._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    pauVar11 = (undefined1 (*) [32])(param_2 + uVar9 * 0xc);
    auVar16 = vxorpd_avx512vl(auVar21,auVar21);
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar11 + param_2));
    auVar39._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_ | (uint)!(bool)(bVar14 & 1) * auVar16._0_4_;
    bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
    auVar39._4_4_ = (uint)bVar8 * auVar56._4_4_ | (uint)!bVar8 * auVar16._4_4_;
    bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
    auVar39._8_4_ = (uint)bVar8 * auVar56._8_4_ | (uint)!bVar8 * auVar16._8_4_;
    bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
    auVar39._12_4_ = (uint)bVar8 * auVar56._12_4_ | (uint)!bVar8 * auVar16._12_4_;
    auVar39._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar39._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar39._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar39._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    auVar16 = vxorpd_avx512vl(auVar22,auVar22);
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar11 + unaff_RBX));
    auVar34._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_ | (uint)!(bool)(bVar14 & 1) * auVar16._0_4_;
    bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
    auVar34._4_4_ = (uint)bVar8 * auVar56._4_4_ | (uint)!bVar8 * auVar16._4_4_;
    bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
    auVar34._8_4_ = (uint)bVar8 * auVar56._8_4_ | (uint)!bVar8 * auVar16._8_4_;
    bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
    auVar34._12_4_ = (uint)bVar8 * auVar56._12_4_ | (uint)!bVar8 * auVar16._12_4_;
    auVar34._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar34._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar34._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar34._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)*pauVar11);
    auVar56._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * auVar32._4_4_;
    auVar56._0_4_ = (uint)(bVar14 & 1) * auVar32._0_4_;
    auVar56._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * auVar32._8_4_;
    auVar56._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * auVar32._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar32._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar32._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar32._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar32._28_4_;
  }
  auVar33 = vcvtps2pd_avx512vl(auVar41._0_16_);
  auVar32 = vcvtps2pd_avx(auVar41._16_16_);
  auVar35 = vcvtps2pd_avx512vl(auVar37._0_16_);
  auVar16 = vextractf32x4_avx512vl(auVar37,1);
  auVar41 = vcvtps2pd_avx512vl(auVar16);
  auVar40 = vcvtps2pd_avx512vl(auVar36._0_16_);
  auVar36 = vcvtps2pd_avx512vl(auVar36._16_16_);
  auVar58._4_4_ = __real_80000000;
  auVar58._0_4_ = __real_80000000;
  auVar58._8_4_ = __real_80000000;
  auVar58._12_4_ = __real_80000000;
  auVar58._16_4_ = __real_80000000;
  auVar58._20_4_ = __real_80000000;
  auVar58._24_4_ = __real_80000000;
  auVar58._28_4_ = __real_80000000;
  auVar39 = vxorps_avx512vl(auVar39,auVar58);
  auVar34 = vxorps_avx512vl(auVar34,auVar58);
  auVar16 = vextractf32x4_avx512vl(auVar39,1);
  auVar37 = vcvtps2pd_avx512vl(auVar16);
  auVar39 = vcvtps2pd_avx512vl(auVar39._0_16_);
  auVar59._0_4_ = auVar56._0_4_ ^ __real_80000000;
  auVar59._4_4_ = auVar56._4_4_ ^ __real_80000000;
  auVar59._8_4_ = auVar56._8_4_ ^ __real_80000000;
  auVar59._12_4_ = auVar56._12_4_ ^ __real_80000000;
  auVar45._16_4_ = auVar56._16_4_ ^ __real_80000000;
  auVar45._0_16_ = auVar59;
  auVar45._20_4_ = auVar56._20_4_ ^ __real_80000000;
  auVar45._24_4_ = auVar56._24_4_ ^ __real_80000000;
  auVar45._28_4_ = auVar56._28_4_ ^ __real_80000000;
  auVar16 = vextractf32x4_avx512vl(auVar34,1);
  auVar56 = vcvtps2pd_avx512vl(auVar16);
  auVar34 = vcvtps2pd_avx512vl(auVar34._0_16_);
  auVar16 = vextractf32x4_avx512vl(auVar45,1);
  auVar38 = vcvtps2pd_avx512vl(auVar16);
  auVar42 = vcvtps2pd_avx512vl(auVar59);
  local_108 = in_ZMM3._0_8_;
  auVar46._8_8_ = local_108;
  auVar46._0_8_ = local_108;
  auVar46._16_8_ = local_108;
  auVar46._24_8_ = local_108;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar3;
  auVar43 = vbroadcastsd_avx512vl(auVar21);
  auVar32 = vfmsub213pd_avx512vl(auVar32,auVar46,auVar43);
  auVar33 = vfmsub213pd_avx512vl(auVar33,auVar46,auVar43);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  auVar43 = vbroadcastsd_avx512vl(auVar22);
  auVar41 = vfmsub213pd_avx512vl(auVar41,auVar46,auVar43);
  auVar35 = vfmsub213pd_avx512vl(auVar35,auVar46,auVar43);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar5;
  auVar43 = vbroadcastsd_avx512vl(auVar6);
  auVar36 = vfmsub213pd_avx512vl(auVar36,auVar46,auVar43);
  auVar40 = vfmsub213pd_avx512vl(auVar40,auVar46,auVar43);
  local_e8 = auVar23._0_8_;
  auVar49._8_8_ = local_e8;
  auVar49._0_8_ = local_e8;
  auVar49._16_8_ = local_e8;
  auVar49._24_8_ = local_e8;
  auVar23 = vmulpd_avx512vl(auVar26,auVar33);
  auVar43 = vmulpd_avx512vl(auVar26,auVar32);
  auVar57 = vmulpd_avx512vl(auVar27,auVar35);
  auVar58 = vmulpd_avx512vl(auVar27,auVar41);
  auVar44 = vmulpd_avx512vl(auVar49,auVar40);
  auVar45 = vmulpd_avx512vl(auVar49,auVar36);
  auVar43 = vfmsub231pd_avx512vl(auVar43,auVar49,auVar41);
  auVar23 = vfmsub231pd_avx512vl(auVar23,auVar49,auVar35);
  auVar58 = vfmsub231pd_avx512vl(auVar58,auVar26,auVar36);
  auVar57 = vfmsub231pd_avx512vl(auVar57,auVar26,auVar40);
  dVar64 = dVar60 * auVar32._0_8_ - auVar45._0_8_;
  dVar66 = dVar61 * auVar32._8_8_ - auVar45._8_8_;
  dVar67 = dVar62 * auVar32._16_8_ - auVar45._16_8_;
  dVar68 = dVar63 * auVar32._24_8_ - auVar45._24_8_;
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar27,auVar33);
  auVar57 = vaddpd_avx512vl(auVar57,auVar57);
  auVar58 = vaddpd_avx512vl(auVar58,auVar58);
  auVar50._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar50._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar50._16_8_ = auVar44._16_8_ + auVar44._16_8_;
  auVar50._24_8_ = auVar44._24_8_ + auVar44._24_8_;
  auVar51._0_8_ = dVar64 + dVar64;
  auVar51._8_8_ = dVar66 + dVar66;
  auVar51._16_8_ = dVar67 + dVar67;
  auVar51._24_8_ = dVar68 + dVar68;
  auVar23 = vaddpd_avx512vl(auVar23,auVar23);
  auVar43 = vaddpd_avx512vl(auVar43,auVar43);
  auVar32 = vfmadd231pd_avx512vl(auVar32,auVar28,auVar58);
  auVar33 = vfmadd231pd_avx512vl(auVar33,auVar28,auVar57);
  auVar41 = vfmadd231pd_avx512vl(auVar41,auVar28,auVar51);
  auVar35 = vfmadd231pd_avx512vl(auVar35,auVar28,auVar50);
  auVar36 = vfmadd231pd_avx512vl(auVar36,auVar28,auVar43);
  auVar40 = vfmadd231pd_avx512vl(auVar40,auVar28,auVar23);
  auVar44 = vmulpd_avx512vl(auVar26,auVar57);
  auVar45 = vmulpd_avx512vl(auVar26,auVar58);
  auVar80._0_8_ = dVar60 * auVar50._0_8_;
  auVar80._8_8_ = dVar61 * auVar50._8_8_;
  auVar80._16_8_ = dVar62 * auVar50._16_8_;
  auVar80._24_8_ = dVar63 * auVar50._24_8_;
  auVar82._0_8_ = dVar60 * auVar51._0_8_;
  auVar82._8_8_ = dVar61 * auVar51._8_8_;
  auVar82._16_8_ = dVar62 * auVar51._16_8_;
  auVar82._24_8_ = dVar63 * auVar51._24_8_;
  auVar46 = vmulpd_avx512vl(auVar49,auVar23);
  auVar47 = vmulpd_avx512vl(auVar49,auVar43);
  auVar78._0_8_ = local_e8 * auVar51._0_8_ - auVar45._0_8_;
  auVar78._8_8_ = local_e8 * auVar51._8_8_ - auVar45._8_8_;
  auVar78._16_8_ = local_e8 * auVar51._16_8_ - auVar45._16_8_;
  auVar78._24_8_ = local_e8 * auVar51._24_8_ - auVar45._24_8_;
  auVar36 = vaddpd_avx512vl(auVar36,auVar78);
  auVar53._0_8_ = local_e8 * auVar50._0_8_ - auVar44._0_8_;
  auVar53._8_8_ = local_e8 * auVar50._8_8_ - auVar44._8_8_;
  auVar53._16_8_ = local_e8 * auVar50._16_8_ - auVar44._16_8_;
  auVar53._24_8_ = local_e8 * auVar50._24_8_ - auVar44._24_8_;
  auVar40 = vaddpd_avx512vl(auVar40,auVar53);
  auVar43 = vfmsub231pd_avx512vl(auVar82,auVar26,auVar43);
  auVar48._0_8_ = auVar43._0_8_ + auVar32._0_8_;
  auVar48._8_8_ = auVar43._8_8_ + auVar32._8_8_;
  auVar48._16_8_ = auVar43._16_8_ + auVar32._16_8_;
  auVar48._24_8_ = auVar43._24_8_ + auVar32._24_8_;
  auVar23 = vfmsub231pd_avx512vl(auVar80,auVar26,auVar23);
  auVar23 = vaddpd_avx512vl(auVar33,auVar23);
  auVar32 = vfmsub231pd_avx512vl(auVar47,auVar27,auVar58);
  auVar32 = vaddpd_avx512vl(auVar41,auVar32);
  auVar33 = vfmsub231pd_avx512vl(auVar46,auVar27,auVar57);
  auVar33 = vaddpd_avx512vl(auVar35,auVar33);
  auVar35 = vmulpd_avx512vl(auVar26,auVar39);
  auVar41 = vmulpd_avx512vl(auVar26,auVar37);
  auVar43 = vmulpd_avx512vl(auVar27,auVar34);
  auVar57 = vmulpd_avx512vl(auVar27,auVar56);
  auVar58 = vmulpd_avx512vl(auVar49,auVar42);
  auVar44 = vmulpd_avx512vl(auVar49,auVar38);
  auVar41 = vfmsub231pd_avx512vl(auVar41,auVar49,auVar56);
  auVar35 = vfmsub231pd_avx512vl(auVar35,auVar49,auVar34);
  auVar57 = vfmsub231pd_avx512vl(auVar57,auVar26,auVar38);
  auVar43 = vfmsub231pd_avx512vl(auVar43,auVar26,auVar42);
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar27,auVar37);
  auVar58 = vfmsub231pd_avx512vl(auVar58,auVar27,auVar39);
  auVar43 = vaddpd_avx512vl(auVar43,auVar43);
  auVar57 = vaddpd_avx512vl(auVar57,auVar57);
  auVar47._0_8_ = auVar58._0_8_ + auVar58._0_8_;
  auVar47._8_8_ = auVar58._8_8_ + auVar58._8_8_;
  auVar47._16_8_ = auVar58._16_8_ + auVar58._16_8_;
  auVar47._24_8_ = auVar58._24_8_ + auVar58._24_8_;
  auVar52._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar52._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar52._16_8_ = auVar44._16_8_ + auVar44._16_8_;
  auVar52._24_8_ = auVar44._24_8_ + auVar44._24_8_;
  auVar35 = vaddpd_avx512vl(auVar35,auVar35);
  auVar41 = vaddpd_avx512vl(auVar41,auVar41);
  auVar37 = vfmadd231pd_avx512vl(auVar37,auVar28,auVar57);
  auVar39 = vfmadd231pd_avx512vl(auVar39,auVar28,auVar43);
  auVar56 = vfmadd231pd_avx512vl(auVar56,auVar28,auVar52);
  auVar34 = vfmadd231pd_avx512vl(auVar34,auVar28,auVar47);
  auVar38 = vfmadd231pd_avx512vl(auVar38,auVar28,auVar41);
  auVar28 = vfmadd213pd_avx512vl(auVar28,auVar35,auVar42);
  auVar42 = vmulpd_avx512vl(auVar26,auVar43);
  auVar58 = vmulpd_avx512vl(auVar26,auVar57);
  auVar79._0_8_ = dVar60 * auVar47._0_8_;
  auVar79._8_8_ = dVar61 * auVar47._8_8_;
  auVar79._16_8_ = dVar62 * auVar47._16_8_;
  auVar79._24_8_ = dVar63 * auVar47._24_8_;
  auVar81._0_8_ = dVar60 * auVar52._0_8_;
  auVar81._8_8_ = dVar61 * auVar52._8_8_;
  auVar81._16_8_ = dVar62 * auVar52._16_8_;
  auVar81._24_8_ = dVar63 * auVar52._24_8_;
  auVar44 = vmulpd_avx512vl(auVar49,auVar35);
  auVar45 = vmulpd_avx512vl(auVar49,auVar41);
  auVar77._0_8_ = local_e8 * auVar52._0_8_ - auVar58._0_8_;
  auVar77._8_8_ = local_e8 * auVar52._8_8_ - auVar58._8_8_;
  auVar77._16_8_ = local_e8 * auVar52._16_8_ - auVar58._16_8_;
  auVar77._24_8_ = local_e8 * auVar52._24_8_ - auVar58._24_8_;
  auVar38 = vaddpd_avx512vl(auVar38,auVar77);
  auVar42 = vfmsub231pd_avx512vl(auVar42,auVar49,auVar47);
  auVar28 = vaddpd_avx512vl(auVar28,auVar42);
  auVar41 = vfmsub231pd_avx512vl(auVar81,auVar26,auVar41);
  auVar41 = vaddpd_avx512vl(auVar37,auVar41);
  auVar26 = vfmsub231pd_avx512vl(auVar79,auVar26,auVar35);
  auVar26 = vaddpd_avx512vl(auVar39,auVar26);
  auVar35 = vfmsub231pd_avx512vl(auVar45,auVar27,auVar57);
  auVar56 = vaddpd_avx512vl(auVar56,auVar35);
  auVar27 = vfmsub231pd_avx512vl(auVar44,auVar27,auVar43);
  auVar27 = vaddpd_avx512vl(auVar34,auVar27);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar1;
  auVar34 = vbroadcastsd_avx512vl(auVar7);
  auVar35 = vmulpd_avx512vl(auVar34,auVar48);
  auVar23 = vmulpd_avx512vl(auVar34,auVar23);
  auVar32 = vmulpd_avx512vl(auVar24,auVar32);
  auVar33 = vmulpd_avx512vl(auVar24,auVar33);
  auVar39 = vmulpd_avx512vl(auVar25,auVar36);
  auVar40 = vmulpd_avx512vl(auVar25,auVar40);
  auVar41 = vmulpd_avx512vl(auVar34,auVar41);
  auVar26 = vmulpd_avx512vl(auVar34,auVar26);
  auVar56 = vmulpd_avx512vl(auVar24,auVar56);
  auVar57._0_8_ = auVar24._0_8_ * auVar27._0_8_;
  auVar57._8_8_ = auVar24._8_8_ * auVar27._8_8_;
  auVar57._16_8_ = auVar24._16_8_ * auVar27._16_8_;
  auVar57._24_8_ = auVar24._24_8_ * auVar27._24_8_;
  auVar24 = vmulpd_avx512vl(auVar25,auVar38);
  auVar17 = vcvtpd2ps_avx512vl(auVar23);
  auVar25 = vmulpd_avx512vl(auVar25,auVar28);
  auVar16 = vcvtpd2ps_avx(auVar35);
  auVar35._16_16_ = auVar16;
  auVar35._0_16_ = auVar17;
  auVar16 = vcvtpd2ps_avx512vl(auVar33);
  auVar17 = vcvtpd2ps_avx512vl(auVar32);
  auVar21 = vcvtpd2ps_avx512vl(auVar40);
  auVar22 = vcvtpd2ps_avx512vl(auVar39);
  auVar33._16_16_ = auVar17;
  auVar33._0_16_ = auVar16;
  auVar23 = vinsertf32x4_avx512vl(ZEXT1632(auVar21),auVar22,1);
  auVar16 = vcvtpd2ps_avx512vl(auVar26);
  auVar17 = vcvtpd2ps_avx512vl(auVar41);
  auVar28._16_16_ = auVar17;
  auVar28._0_16_ = auVar16;
  auVar16 = vcvtpd2ps_avx(auVar57);
  auVar17 = vcvtpd2ps_avx512vl(auVar56);
  auVar32._16_16_ = auVar17;
  auVar32._0_16_ = auVar16;
  auVar16 = vcvtpd2ps_avx512vl(auVar25);
  auVar17 = vcvtpd2ps_avx512vl(auVar24);
  auVar24 = vinsertf32x4_avx512vl(ZEXT1632(auVar16),auVar17,1);
  if (bVar14 == 0xff) {
    auVar26 = vpermt2ps_avx512vl(auVar23,
                                 ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar33);
    auVar25 = vpermt2ps_avx512vl(auVar35,
                                 ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar33);
    auVar25 = vpermt2ps_avx512vl(auVar25,
                                 ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar26);
    *pauVar2 = auVar25;
    auVar25 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
    auVar26 = vpermt2ps_avx512vl(auVar26,
                                 ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar35);
    pauVar2[1] = auVar26;
    auVar56 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
    auVar26 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
    auVar27 = vpermt2ps_avx512vl(auVar33,
                                 ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                 ,auVar35);
    auVar23 = vpermt2ps_avx512vl(auVar27,
                                 ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar23);
    pauVar2[2] = auVar23;
    auVar23 = vpermi2ps_avx512vl(auVar29,auVar24,auVar32);
    auVar29 = vpermi2ps_avx512vl(auVar30,auVar28,auVar32);
    auVar29 = vpermt2ps_avx512vl(auVar29,auVar31,auVar23);
    *pauVar11 = auVar29;
    auVar25 = vpermt2ps_avx512vl(auVar23,auVar25,auVar28);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar9 * 0xc) = auVar25;
    auVar25 = vpermt2ps_avx512vl(auVar32,auVar26,auVar28);
    auVar24 = vpermt2ps_avx512vl(auVar25,auVar56,auVar24);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar9 * 0xc) = auVar24;
  }
  else {
    vscatterdps_avx512vl(ZEXT832(pauVar2) + auVar28,uVar15,auVar35);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar15,
               auVar33);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar15,
               auVar23);
    vscatterdps_avx512vl(ZEXT832(pauVar11) + auVar28,uVar15,auVar28);
    vscatterdps_avx512vl
              (ZEXT832(pauVar11) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar15,
               auVar32);
    vscatterdps_avx512vl
              (ZEXT832(pauVar11) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar15,
               auVar24);
  }
  return;
}

// TransformClothSimulDataAndCheckFinite___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_avx512skx @ 140d1b9b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
TransformClothSimulDataAndCheckFinite___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_avx512skx
          (longlong param_1,longlong param_2,undefined1 (*param_3) [32],undefined8 param_4,
          uint param_5,undefined1 (*param_6) [16])

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  undefined1 auVar10 [32];
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 (*pauVar13) [32];
  uint uVar14;
  longlong lVar15;
  byte bVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar25 [16];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 in_ZMM3 [64];
  double dVar69;
  double dVar71;
  double dVar72;
  double dVar73;
  undefined1 auVar70 [32];
  double dVar74;
  double dVar76;
  double dVar77;
  double dVar78;
  undefined1 auVar75 [32];
  double dVar79;
  double dVar81;
  double dVar82;
  double dVar83;
  undefined1 auVar80 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
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
  undefined1 in_ZMM15 [64];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 in_ZMM27 [64];
  undefined8 local_1b8;
  double local_148;
  
  auVar10 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar63 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar62 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar64 = in_ZMM27._0_16_;
  auVar30 = in_ZMM15._0_16_;
  auVar24 = vpsllw_avx512vl(*param_6,0xf);
  uVar11 = (ulonglong)param_5;
  auVar31 = vmulpd_avx512vl(*param_3,
                            ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000)
  ;
  uVar3 = *(ulonglong *)param_3[1];
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar3;
  uVar4 = *(ulonglong *)(param_3[1] + 8);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar4;
  uVar5 = *(ulonglong *)(param_3[1] + 0x10);
  auVar35._24_8_ = 0;
  auVar35._0_24_ = *(undefined1 (*) [24])param_3[2];
  auVar32._8_4_ = (int)__real_7fffffffffffffff;
  auVar32._0_8_ = __real_7fffffffffffffff;
  auVar32._12_4_ = (int)((ulonglong)__real_7fffffffffffffff >> 0x20);
  auVar32._16_8_ = __real_7fffffffffffffff;
  auVar32._24_8_ = __real_7fffffffffffffff;
  auVar32 = vandpd_avx512vl(auVar35,auVar32);
  auVar33._8_4_ = (int)__real_3e45798ee2308c3a;
  auVar33._0_8_ = __real_3e45798ee2308c3a;
  auVar33._12_4_ = (int)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
  auVar33._16_8_ = __real_3e45798ee2308c3a;
  auVar33._24_8_ = __real_3e45798ee2308c3a;
  uVar18 = vcmppd_avx512vl(auVar32,auVar33,6);
  uVar18 = uVar18 & 0xf;
  auVar32 = vrcp14pd_avx512vl(auVar35);
  auVar34._8_4_ = (int)__real_4000000000000000;
  auVar34._0_8_ = __real_4000000000000000;
  auVar34._12_4_ = (int)((ulonglong)__real_4000000000000000 >> 0x20);
  auVar34._16_8_ = __real_4000000000000000;
  auVar34._24_8_ = __real_4000000000000000;
  auVar33 = vfnmadd213pd_avx512vl(auVar35,auVar32,auVar34);
  auVar32 = vmulpd_avx512vl(auVar32,auVar33);
  uVar1 = (ulonglong)((byte)uVar18 & 1) * auVar32._0_8_;
  auVar25._8_8_ = (ulonglong)((byte)(uVar18 >> 1) & 1) * auVar32._8_8_;
  auVar25._0_8_ = uVar1;
  auVar37._16_8_ = (ulonglong)((byte)(uVar18 >> 2) & 1) * auVar32._16_8_;
  auVar37._0_16_ = auVar25;
  auVar37._24_8_ = (uVar18 >> 3) * auVar32._24_8_;
  uVar9 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar9 = param_5;
  }
  auVar34 = vpermpd_avx512vl(auVar31,0x55);
  auVar35 = vpermpd_avx512vl(auVar31,0xaa);
  auVar36 = vpermpd_avx512vl(auVar31,0xff);
  auVar32 = vpermpd_avx2(auVar37,0x55);
  auVar33 = vpermpd_avx2(auVar37,0xaa);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar5;
  auVar106._8_8_ = 0;
  auVar106._0_8_ = uVar4;
  auVar107._8_8_ = 0;
  auVar107._0_8_ = uVar3;
  dVar74 = auVar35._0_8_;
  dVar76 = auVar35._8_8_;
  dVar77 = auVar35._16_8_;
  dVar78 = auVar35._24_8_;
  dVar69 = auVar36._0_8_;
  dVar71 = auVar36._8_8_;
  dVar72 = auVar36._16_8_;
  dVar73 = auVar36._24_8_;
  dVar79 = auVar33._0_8_;
  dVar81 = auVar33._8_8_;
  dVar82 = auVar33._16_8_;
  dVar83 = auVar33._24_8_;
  if ((int)(uVar9 & 0xfffffff8) < 1) {
    auVar30 = vpcmpeqd_avx(auVar30,auVar30);
    uVar14 = 0;
  }
  else {
    auVar37 = vbroadcastsd_avx512vl(in_ZMM3._0_16_);
    auVar38 = vbroadcastsd_avx512vl(auVar107);
    auVar39 = vbroadcastsd_avx512vl(auVar106);
    auVar40 = vbroadcastsd_avx512vl(auVar27);
    auVar41 = vbroadcastsd_avx512vl(auVar31._0_16_);
    auVar42 = vbroadcastsd_avx512vl(auVar25);
    auVar64 = auVar42._0_16_;
    auVar30 = vpcmpeqd_avx(auVar30,auVar30);
    lVar15 = 0x40;
    uVar14 = 0;
    auVar43 = vbroadcastss_avx512vl(ZEXT416(__real_80000000));
    auVar25 = vpbroadcastb_avx512vl(ZEXT116(DAT_152cac6b0));
    do {
      auVar61 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
      auVar60 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
      auVar59 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
      auVar44 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar15);
      auVar46 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar15);
      auVar45 = vblendps_avx(auVar46,auVar44,0x24);
      auVar44 = vpermt2ps_avx512vl(auVar44,auVar62,auVar46);
      auVar45 = vpermt2ps_avx512vl(auVar45,auVar10,*(undefined1 (*) [32])(param_1 + lVar15));
      auVar46 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar15),auVar63,auVar46);
      auVar47 = vcvtps2pd_avx512vl(auVar44._0_16_);
      auVar48 = vcvtps2pd_avx512vl(auVar46._0_16_);
      auVar26 = vextractf32x4_avx512vl(auVar44,1);
      auVar49 = vcvtps2pd_avx512vl(auVar26);
      auVar26 = vextractf32x4_avx512vl(auVar46,1);
      auVar46 = vcvtps2pd_avx512vl(auVar26);
      auVar50 = vcvtps2pd_avx512vl(auVar45._0_16_);
      auVar44 = vcvtps2pd_avx(auVar45._16_16_);
      auVar45 = vfmsub213pd_avx512vl(auVar48,auVar37,auVar38);
      auVar47 = vfmsub213pd_avx512vl(auVar47,auVar37,auVar38);
      auVar46 = vfmsub213pd_avx512vl(auVar46,auVar37,auVar39);
      auVar48 = vfmsub213pd_avx512vl(auVar49,auVar37,auVar39);
      auVar44 = vfmsub213pd_avx512vl(auVar44,auVar37,auVar40);
      auVar49 = vfmsub213pd_avx512vl(auVar50,auVar37,auVar40);
      auVar50 = vmulpd_avx512vl(auVar34,auVar47);
      auVar51 = vmulpd_avx512vl(auVar34,auVar45);
      auVar52 = vmulpd_avx512vl(auVar35,auVar48);
      auVar53 = vmulpd_avx512vl(auVar35,auVar46);
      auVar54 = vmulpd_avx512vl(auVar41,auVar49);
      auVar55 = vmulpd_avx512vl(auVar41,auVar44);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar41,auVar46);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar41,auVar48);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar34,auVar44);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar34,auVar49);
      auVar55 = vfmsub231pd_avx512vl(auVar55,auVar35,auVar45);
      auVar54 = vfmsub231pd_avx512vl(auVar54,auVar35,auVar47);
      auVar52 = vaddpd_avx512vl(auVar52,auVar52);
      auVar53 = vaddpd_avx512vl(auVar53,auVar53);
      auVar54 = vaddpd_avx512vl(auVar54,auVar54);
      auVar55 = vaddpd_avx512vl(auVar55,auVar55);
      auVar97._0_8_ = auVar50._0_8_ + auVar50._0_8_;
      auVar97._8_8_ = auVar50._8_8_ + auVar50._8_8_;
      auVar97._16_8_ = auVar50._16_8_ + auVar50._16_8_;
      auVar97._24_8_ = auVar50._24_8_ + auVar50._24_8_;
      auVar65._0_8_ = auVar51._0_8_ + auVar51._0_8_;
      auVar65._8_8_ = auVar51._8_8_ + auVar51._8_8_;
      auVar65._16_8_ = auVar51._16_8_ + auVar51._16_8_;
      auVar65._24_8_ = auVar51._24_8_ + auVar51._24_8_;
      auVar45 = vfmadd231pd_avx512vl(auVar45,auVar36,auVar53);
      auVar47 = vfmadd231pd_avx512vl(auVar47,auVar36,auVar52);
      auVar46 = vfmadd231pd_avx512vl(auVar46,auVar36,auVar55);
      auVar48 = vfmadd231pd_avx512vl(auVar48,auVar36,auVar54);
      auVar95._0_8_ = dVar69 * auVar65._0_8_ + auVar44._0_8_;
      auVar95._8_8_ = dVar71 * auVar65._8_8_ + auVar44._8_8_;
      auVar95._16_8_ = dVar72 * auVar65._16_8_ + auVar44._16_8_;
      auVar95._24_8_ = dVar73 * auVar65._24_8_ + auVar44._24_8_;
      auVar44 = vfmadd231pd_avx512vl(auVar49,auVar36,auVar97);
      auVar49 = vmulpd_avx512vl(auVar34,auVar52);
      auVar50 = vmulpd_avx512vl(auVar34,auVar53);
      auVar51 = vmulpd_avx512vl(auVar35,auVar54);
      auVar56 = vmulpd_avx512vl(auVar35,auVar55);
      auVar57 = vmulpd_avx512vl(auVar41,auVar97);
      auVar58 = vmulpd_avx512vl(auVar41,auVar65);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar41,auVar55);
      auVar50 = vaddpd_avx512vl(auVar95,auVar50);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar41,auVar54);
      auVar44 = vaddpd_avx512vl(auVar44,auVar49);
      auVar49 = vfmsub231pd_avx512vl(auVar56,auVar34,auVar65);
      auVar45 = vaddpd_avx512vl(auVar45,auVar49);
      auVar49 = vfmsub231pd_avx512vl(auVar51,auVar34,auVar97);
      auVar51._0_8_ = auVar49._0_8_ + auVar47._0_8_;
      auVar51._8_8_ = auVar49._8_8_ + auVar47._8_8_;
      auVar51._16_8_ = auVar49._16_8_ + auVar47._16_8_;
      auVar51._24_8_ = auVar49._24_8_ + auVar47._24_8_;
      auVar47 = vfmsub231pd_avx512vl(auVar58,auVar35,auVar53);
      auVar46 = vaddpd_avx512vl(auVar46,auVar47);
      auVar47 = vfmsub231pd_avx512vl(auVar57,auVar35,auVar52);
      auVar47 = vaddpd_avx512vl(auVar48,auVar47);
      auVar45 = vmulpd_avx512vl(auVar42,auVar45);
      auVar48 = vmulpd_avx512vl(auVar42,auVar51);
      auVar46 = vmulpd_avx512vl(auVar32,auVar46);
      auVar47 = vmulpd_avx512vl(auVar32,auVar47);
      auVar49 = vmulpd_avx512vl(auVar33,auVar50);
      auVar44 = vmulpd_avx512vl(auVar33,auVar44);
      auVar26 = vcvtpd2ps_avx(auVar48);
      auVar28 = vcvtpd2ps_avx(auVar45);
      auVar27 = vcvtpd2ps_avx512vl(auVar47);
      auVar45._16_16_ = ZEXT116(1) * auVar28;
      auVar45._0_16_ = ZEXT116(0) * auVar28 | ZEXT116(1) * auVar26;
      auVar26 = vcvtpd2ps_avx512vl(auVar46);
      auVar46 = vinserti32x4_avx512vl(ZEXT1632(auVar27),auVar26,1);
      auVar26 = vcvtpd2ps_avx512vl(auVar44);
      auVar28 = vcvtpd2ps_avx512vl(auVar49);
      auVar44 = vinserti32x4_avx512vl(ZEXT1632(auVar26),auVar28,1);
      auVar29 = vpandq_avx512vl(auVar30,auVar25);
      if (auVar29._0_8_ != 0) {
        auVar25 = vpsllw_avx(auVar30,7);
        auVar48._4_4_ = __real_7f800000;
        auVar48._0_4_ = __real_7f800000;
        auVar48._8_4_ = __real_7f800000;
        auVar48._12_4_ = __real_7f800000;
        auVar48._16_4_ = __real_7f800000;
        auVar48._20_4_ = __real_7f800000;
        auVar48._24_4_ = __real_7f800000;
        auVar48._28_4_ = __real_7f800000;
        uVar19 = vpmovb2m_avx512vl(auVar25);
        auVar47 = vpand_avx2(auVar45,auVar48);
        uVar17 = vpcmpd_avx512vl(auVar47,auVar48,4);
        bVar21 = (byte)uVar19;
        bVar16 = 0xff;
        bVar20 = 0xff;
        if (((byte)uVar17 & bVar21) != 0) {
          auVar47 = vpand_avx2(auVar46,auVar48);
          uVar19 = vpcmpd_avx512vl(auVar47,auVar48,4);
          bVar20 = bVar21 & (byte)uVar19;
        }
        bVar20 = bVar20 & (byte)uVar17;
        if ((bVar20 & bVar21) != 0) {
          auVar47 = vpandd_avx512vl(auVar44,auVar48);
          uVar17 = vpcmpd_avx512vl(auVar47,auVar48,4);
          bVar16 = (byte)uVar17;
        }
        bVar20 = bVar16 & bVar21 & bVar20;
        auVar25 = vmovdqu8_avx512vl(___xmm_01010101010101010101010101010101);
        auVar29[1] = (bVar20 >> 1 & 1) * auVar25[1];
        auVar29[0] = (bVar20 & 1) * auVar25[0];
        auVar29[2] = (bVar20 >> 2 & 1) * auVar25[2];
        auVar29[3] = (bVar20 >> 3 & 1) * auVar25[3];
        auVar29[4] = (bVar20 >> 4 & 1) * auVar25[4];
        auVar29[5] = (bVar20 >> 5 & 1) * auVar25[5];
        auVar29[6] = (bVar20 >> 6 & 1) * auVar25[6];
        auVar29[7] = -((char)bVar20 >> 7) * auVar25[7];
        auVar29._8_8_ = 0;
      }
      auVar47 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar15);
      auVar48 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar15);
      auVar49 = vblendps_avx(auVar48,auVar47,0x24);
      auVar47 = vpermt2ps_avx512vl(auVar47,auVar62,auVar48);
      auVar49 = vpermt2ps_avx512vl(auVar49,auVar10,*(undefined1 (*) [32])(param_2 + lVar15));
      auVar48 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar15),auVar63,auVar48);
      auVar50 = vinsertf32x4_avx512vl(auVar47,auVar48._0_16_,1);
      auVar47 = vshuff64x2_avx512vl(auVar47,auVar48,3);
      auVar48 = vxorps_avx512vl(auVar50,auVar43);
      auVar25 = vextractf32x4_avx512vl(auVar48,1);
      auVar50 = vcvtps2pd_avx512vl(auVar25);
      auVar51 = vcvtps2pd_avx512vl(auVar48._0_16_);
      auVar47 = vxorpd_avx512vl(auVar47,auVar43);
      auVar52 = vcvtps2pd_avx512vl(auVar47._16_16_);
      auVar47 = vcvtps2pd_avx(auVar47._0_16_);
      auVar48 = vxorps_avx512vl(auVar49,auVar43);
      auVar25 = vextractf32x4_avx512vl(auVar48,1);
      auVar49 = vcvtps2pd_avx512vl(auVar25);
      auVar48 = vcvtps2pd_avx(auVar48._0_16_);
      auVar53 = vmulpd_avx512vl(auVar34,auVar51);
      auVar54 = vmulpd_avx512vl(auVar34,auVar50);
      auVar84._0_8_ = dVar74 * auVar47._0_8_;
      auVar84._8_8_ = dVar76 * auVar47._8_8_;
      auVar84._16_8_ = dVar77 * auVar47._16_8_;
      auVar84._24_8_ = dVar78 * auVar47._24_8_;
      auVar55 = vmulpd_avx512vl(auVar35,auVar52);
      auVar56 = vmulpd_avx512vl(auVar41,auVar48);
      auVar57 = vmulpd_avx512vl(auVar41,auVar49);
      auVar54 = vfmsub231pd_avx512vl(auVar54,auVar41,auVar52);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar41,auVar47);
      auVar55 = vfmsub231pd_avx512vl(auVar55,auVar34,auVar49);
      auVar58 = vfmsub231pd_avx512vl(auVar84,auVar34,auVar48);
      auVar57 = vfmsub231pd_avx512vl(auVar57,auVar35,auVar50);
      auVar56 = vfmsub231pd_avx512vl(auVar56,auVar35,auVar51);
      auVar85._0_8_ = auVar58._0_8_ + auVar58._0_8_;
      auVar85._8_8_ = auVar58._8_8_ + auVar58._8_8_;
      auVar85._16_8_ = auVar58._16_8_ + auVar58._16_8_;
      auVar85._24_8_ = auVar58._24_8_ + auVar58._24_8_;
      auVar87._0_8_ = auVar55._0_8_ + auVar55._0_8_;
      auVar87._8_8_ = auVar55._8_8_ + auVar55._8_8_;
      auVar87._16_8_ = auVar55._16_8_ + auVar55._16_8_;
      auVar87._24_8_ = auVar55._24_8_ + auVar55._24_8_;
      auVar90._0_8_ = auVar56._0_8_ + auVar56._0_8_;
      auVar90._8_8_ = auVar56._8_8_ + auVar56._8_8_;
      auVar90._16_8_ = auVar56._16_8_ + auVar56._16_8_;
      auVar90._24_8_ = auVar56._24_8_ + auVar56._24_8_;
      auVar92._0_8_ = auVar57._0_8_ + auVar57._0_8_;
      auVar92._8_8_ = auVar57._8_8_ + auVar57._8_8_;
      auVar92._16_8_ = auVar57._16_8_ + auVar57._16_8_;
      auVar92._24_8_ = auVar57._24_8_ + auVar57._24_8_;
      auVar53 = vaddpd_avx512vl(auVar53,auVar53);
      auVar54 = vaddpd_avx512vl(auVar54,auVar54);
      auVar50 = vfmadd231pd_avx512vl(auVar50,auVar36,auVar87);
      auVar51 = vfmadd231pd_avx512vl(auVar51,auVar36,auVar85);
      auVar52 = vfmadd231pd_avx512vl(auVar52,auVar36,auVar92);
      auVar58._0_8_ = dVar69 * auVar90._0_8_ + auVar47._0_8_;
      auVar58._8_8_ = dVar71 * auVar90._8_8_ + auVar47._8_8_;
      auVar58._16_8_ = dVar72 * auVar90._16_8_ + auVar47._16_8_;
      auVar58._24_8_ = dVar73 * auVar90._24_8_ + auVar47._24_8_;
      auVar47 = vfmadd231pd_avx512vl(auVar49,auVar36,auVar54);
      auVar48 = vfmadd231pd_avx512vl(auVar48,auVar36,auVar53);
      auVar49 = vmulpd_avx512vl(auVar34,auVar85);
      auVar55 = vmulpd_avx512vl(auVar34,auVar87);
      auVar102._0_8_ = auVar90._0_8_ * dVar74;
      auVar102._8_8_ = auVar90._8_8_ * dVar76;
      auVar102._16_8_ = auVar90._16_8_ * dVar77;
      auVar102._24_8_ = auVar90._24_8_ * dVar78;
      auVar80._0_8_ = auVar92._0_8_ * dVar74;
      auVar80._8_8_ = auVar92._8_8_ * dVar76;
      auVar80._16_8_ = auVar92._16_8_ * dVar77;
      auVar80._24_8_ = auVar92._24_8_ * dVar78;
      auVar56 = vmulpd_avx512vl(auVar41,auVar53);
      auVar57 = vmulpd_avx512vl(auVar41,auVar54);
      auVar55 = vfmsub231pd_avx512vl(auVar55,auVar41,auVar92);
      auVar47 = vaddpd_avx512vl(auVar47,auVar55);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar41,auVar90);
      auVar54 = vfmsub231pd_avx512vl(auVar80,auVar34,auVar54);
      auVar50 = vaddpd_avx512vl(auVar50,auVar54);
      auVar53 = vfmsub231pd_avx512vl(auVar102,auVar34,auVar53);
      auVar51 = vaddpd_avx512vl(auVar51,auVar53);
      auVar53 = vfmsub231pd_avx512vl(auVar57,auVar35,auVar87);
      auVar52 = vaddpd_avx512vl(auVar52,auVar53);
      auVar53 = vfmsub231pd_avx512vl(auVar56,auVar35,auVar85);
      auVar53 = vaddpd_avx512vl(auVar58,auVar53);
      auVar50 = vmulpd_avx512vl(auVar42,auVar50);
      auVar51 = vmulpd_avx512vl(auVar42,auVar51);
      auVar52 = vmulpd_avx512vl(auVar32,auVar52);
      auVar53 = vmulpd_avx512vl(auVar32,auVar53);
      auVar47 = vmulpd_avx512vl(auVar33,auVar47);
      auVar54._0_8_ = dVar79 * (auVar49._0_8_ + auVar48._0_8_);
      auVar54._8_8_ = dVar81 * (auVar49._8_8_ + auVar48._8_8_);
      auVar54._16_8_ = dVar82 * (auVar49._16_8_ + auVar48._16_8_);
      auVar54._24_8_ = dVar83 * (auVar49._24_8_ + auVar48._24_8_);
      auVar30 = vcvtpd2ps_avx512vl(auVar51);
      auVar26 = vcvtpd2ps_avx512vl(auVar50);
      auVar25 = vcvtpd2ps_avx(auVar53);
      auVar48 = vinserti32x4_avx512vl(ZEXT1632(auVar30),auVar26,1);
      auVar28 = auVar48._0_16_;
      auVar30 = vcvtpd2ps_avx512vl(auVar52);
      auVar49 = vinserti32x4_avx512vl(ZEXT1632(auVar25),auVar30,1);
      auVar25 = vcvtpd2ps_avx(auVar54);
      auVar30 = vcvtpd2ps_avx512vl(auVar47);
      auVar47 = vinserti32x4_avx512vl(ZEXT1632(auVar25),auVar30,1);
      auVar8._4_4_ = __real_01010101;
      auVar8._0_4_ = __real_01010101;
      auVar8._8_4_ = __real_01010101;
      auVar8._12_4_ = __real_01010101;
      auVar25 = vpandd_avx512vl(auVar29,auVar8);
      if (auVar25._0_8_ != 0) {
        auVar25 = vpsllw_avx512vl(auVar29,7);
        auVar50 = vpbroadcastd_avx512vl(ZEXT416(__real_7f800000));
        uVar19 = vpmovb2m_avx512vl(auVar25);
        auVar51 = vpandd_avx512vl(auVar48,auVar50);
        uVar17 = vpcmpd_avx512vl(auVar51,auVar50,4);
        bVar21 = (byte)uVar19;
        bVar16 = 0xff;
        bVar20 = 0xff;
        if (((byte)uVar17 & bVar21) != 0) {
          auVar51 = vpandd_avx512vl(auVar49,auVar50);
          uVar19 = vpcmpd_avx512vl(auVar51,auVar50,4);
          bVar20 = bVar21 & (byte)uVar19;
        }
        bVar20 = bVar20 & (byte)uVar17;
        if ((bVar20 & bVar21) != 0) {
          auVar51 = vpandd_avx512vl(auVar47,auVar50);
          uVar17 = vpcmpd_avx512vl(auVar51,auVar50,4);
          bVar16 = (byte)uVar17;
        }
        bVar20 = bVar16 & bVar21 & bVar20;
        auVar25 = vmovdqu8_avx512vl(___xmm_01010101010101010101010101010101);
        auVar29[1] = (bVar20 >> 1 & 1) * auVar25[1];
        auVar29[0] = (bVar20 & 1) * auVar25[0];
        auVar29[2] = (bVar20 >> 2 & 1) * auVar25[2];
        auVar29[3] = (bVar20 >> 3 & 1) * auVar25[3];
        auVar29[4] = (bVar20 >> 4 & 1) * auVar25[4];
        auVar29[5] = (bVar20 >> 5 & 1) * auVar25[5];
        auVar29[6] = (bVar20 >> 6 & 1) * auVar25[6];
        auVar29[7] = -((char)bVar20 >> 7) * auVar25[7];
        auVar29._8_8_ = 0;
      }
      auVar25 = vpbroadcastb_avx512vl(ZEXT116(DAT_152cac6b0));
      auVar30 = vpandq_avx512vl(auVar29,auVar25);
      auVar50 = vmovdqa64_avx512vl(auVar44);
      auVar51 = vpermt2ps_avx512vl(auVar50,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar46);
      auVar50 = vmovdqa64_avx512vl(auVar45);
      auVar26 = __ymm_0000000000000002000000000000000900000001000000000000000800000000._0_16_;
      auVar50 = vpermt2ps_avx512vl(auVar50,
                                   ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar46);
      auVar50 = vpermt2ps_avx512vl(auVar50,
                                   ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar51);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar15) = auVar50;
      auVar50 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar51 = vpermt2ps_avx512vl(auVar51,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar45);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar15) = auVar51;
      auVar52 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
      auVar51 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar46 = vpermt2ps_avx512vl(auVar46,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar45);
      auVar44 = vpermt2ps_avx512vl(auVar46,
                                   ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar44);
      *(undefined1 (*) [32])(param_1 + lVar15) = auVar44;
      auVar44 = vmovdqa64_avx512vl(auVar47);
      auVar44 = vpermt2ps_avx512vl(auVar44,auVar59,auVar49);
      auVar46 = vmovdqa64_avx512vl(auVar48);
      auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,auVar49);
      auVar46 = vpermt2ps_avx512vl(auVar46,auVar61,auVar44);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar15) = auVar46;
      auVar44 = vpermt2ps_avx512vl(auVar44,auVar50,auVar48);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar15) = auVar44;
      auVar44 = vpermt2ps_avx512vl(auVar49,auVar51,auVar48);
      auVar44 = vpermt2ps_avx512vl(auVar44,auVar52,auVar47);
      *(undefined1 (*) [32])(param_2 + lVar15) = auVar44;
      lVar15 = lVar15 + 0x60;
      uVar14 = uVar14 + 8;
    } while ((int)uVar14 < (int)(uVar9 & 0xfffffff8));
  }
  auVar10 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar63 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar62 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  uVar17 = vpmovw2m_avx512vl(auVar24);
  if ((int)param_5 <= (int)uVar14) goto LAB_140d1c870;
  auVar37 = vpbroadcastd_avx512vl();
  auVar37 = vpor_avx2(auVar37,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar38 = vpbroadcastd_avx512vl();
  uVar18 = vpcmpgtd_avx512vl(auVar38,auVar37);
  auVar24 = vpsllw_avx(auVar30,7);
  uVar19 = vpmovb2m_avx512vl(auVar24);
  bVar16 = (byte)uVar19;
  uVar12 = (ulonglong)uVar14;
  uVar11 = uVar12 * 3;
  pauVar2 = (undefined1 (*) [32])(param_1 + uVar12 * 0xc);
  bVar20 = (byte)uVar18;
  if (bVar20 == 0xff) {
    auVar39 = pauVar2[1];
    auVar40 = vblendps_avx(auVar39,*pauVar2,0x24);
    auVar41 = vpermt2ps_avx512vl(*pauVar2,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar39);
    auVar46 = vpermt2ps_avx512vl(auVar40,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar2[2]);
    auVar39 = vpermt2ps_avx512vl(pauVar2[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar39);
    auVar60 = vinsertf32x4_avx512vl(auVar41,auVar39._0_16_,1);
    auVar59 = vshuff64x2_avx512vl(auVar41,auVar39,3);
    pauVar13 = (undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar39 = *(undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar40 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 0xc);
    auVar41 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar12 * 0xc);
    auVar42 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar39,auVar40);
    auVar43 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar41,auVar40);
    auVar44 = vinsertf32x4_avx512vl(auVar42,auVar43._0_16_,1);
    auVar42 = vshuff64x2_avx512vl(auVar42,auVar43,3);
    auVar39 = vblendps_avx(auVar40,auVar39,0x24);
    auVar39 = vpermt2ps_avx512vl(auVar39,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar41);
  }
  else {
    auVar24 = vxorps_avx512vl(auVar26,auVar26);
    auVar39 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar2 * 2));
    auVar60._0_4_ = (uint)(bVar20 & 1) * auVar39._0_4_ | (uint)!(bool)(bVar20 & 1) * auVar24._0_4_;
    bVar6 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar60._4_4_ = (uint)bVar6 * auVar39._4_4_ | (uint)!bVar6 * auVar24._4_4_;
    bVar6 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar60._8_4_ = (uint)bVar6 * auVar39._8_4_ | (uint)!bVar6 * auVar24._8_4_;
    bVar6 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar60._12_4_ = (uint)bVar6 * auVar39._12_4_ | (uint)!bVar6 * auVar24._12_4_;
    auVar60._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar39._16_4_;
    auVar60._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar39._20_4_;
    auVar60._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar39._24_4_;
    auVar60._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar39._28_4_;
    auVar39 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar2 * 2));
    auVar59._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar39._4_4_;
    auVar59._0_4_ = (uint)(bVar20 & 1) * auVar39._0_4_;
    auVar59._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar39._8_4_;
    auVar59._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar39._12_4_;
    auVar59._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar39._16_4_;
    auVar59._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar39._20_4_;
    auVar59._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar39._24_4_;
    auVar59._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar39._28_4_;
    auVar39 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_2));
    auVar46._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar39._4_4_;
    auVar46._0_4_ = (uint)(bVar20 & 1) * auVar39._0_4_;
    auVar46._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar39._8_4_;
    auVar46._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar39._12_4_;
    auVar46._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar39._16_4_;
    auVar46._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar39._20_4_;
    auVar46._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar39._24_4_;
    auVar46._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar39._28_4_;
    pauVar13 = (undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar24 = vxorps_avx512vl(auVar28,auVar28);
    auVar39 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + (longlong)*pauVar13));
    auVar44._0_4_ = (uint)(bVar20 & 1) * auVar39._0_4_ | (uint)!(bool)(bVar20 & 1) * auVar24._0_4_;
    bVar6 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar44._4_4_ = (uint)bVar6 * auVar39._4_4_ | (uint)!bVar6 * auVar24._4_4_;
    bVar6 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar44._8_4_ = (uint)bVar6 * auVar39._8_4_ | (uint)!bVar6 * auVar24._8_4_;
    bVar6 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar44._12_4_ = (uint)bVar6 * auVar39._12_4_ | (uint)!bVar6 * auVar24._12_4_;
    auVar44._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar39._16_4_;
    auVar44._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar39._20_4_;
    auVar44._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar39._24_4_;
    auVar44._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar39._28_4_;
    auVar24 = vxorpd_avx512vl(auVar64,auVar64);
    auVar39 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + (longlong)*pauVar13));
    auVar42._0_4_ = (uint)(bVar20 & 1) * auVar39._0_4_ | (uint)!(bool)(bVar20 & 1) * auVar24._0_4_;
    bVar6 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar42._4_4_ = (uint)bVar6 * auVar39._4_4_ | (uint)!bVar6 * auVar24._4_4_;
    bVar6 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar42._8_4_ = (uint)bVar6 * auVar39._8_4_ | (uint)!bVar6 * auVar24._8_4_;
    bVar6 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar42._12_4_ = (uint)bVar6 * auVar39._12_4_ | (uint)!bVar6 * auVar24._12_4_;
    auVar42._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar39._16_4_;
    auVar42._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar39._20_4_;
    auVar42._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar39._24_4_;
    auVar42._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar39._28_4_;
    auVar40 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar13 + param_2));
    auVar39._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar40._4_4_;
    auVar39._0_4_ = (uint)(bVar20 & 1) * auVar40._0_4_;
    auVar39._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar40._8_4_;
    auVar39._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar40._12_4_;
    auVar39._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar40._16_4_;
    auVar39._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar40._20_4_;
    auVar39._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar40._24_4_;
    auVar39._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar40._28_4_;
  }
  auVar41 = vcvtps2pd_avx512vl(auVar60._0_16_);
  auVar24 = vextractf32x4_avx512vl(auVar60,1);
  auVar43 = vcvtps2pd_avx512vl(auVar24);
  auVar45 = vcvtps2pd_avx512vl(auVar59._0_16_);
  auVar24 = vextractf32x4_avx512vl(auVar59,1);
  auVar59 = vcvtps2pd_avx512vl(auVar24);
  auVar60 = vcvtps2pd_avx512vl(auVar46._0_16_);
  auVar46 = vcvtps2pd_avx512vl(auVar46._16_16_);
  auVar61._4_4_ = __real_80000000;
  auVar61._0_4_ = __real_80000000;
  auVar61._8_4_ = __real_80000000;
  auVar61._12_4_ = __real_80000000;
  auVar61._16_4_ = __real_80000000;
  auVar61._20_4_ = __real_80000000;
  auVar61._24_4_ = __real_80000000;
  auVar61._28_4_ = __real_80000000;
  auVar40 = vxorps_avx512vl(auVar44,auVar61);
  auVar42 = vxorps_avx512vl(auVar42,auVar61);
  auVar64._0_4_ = auVar39._0_4_ ^ __real_80000000;
  auVar64._4_4_ = auVar39._4_4_ ^ __real_80000000;
  auVar64._8_4_ = auVar39._8_4_ ^ __real_80000000;
  auVar64._12_4_ = auVar39._12_4_ ^ __real_80000000;
  auVar49._16_4_ = auVar39._16_4_ ^ __real_80000000;
  auVar49._0_16_ = auVar64;
  auVar49._20_4_ = auVar39._20_4_ ^ __real_80000000;
  auVar49._24_4_ = auVar39._24_4_ ^ __real_80000000;
  auVar49._28_4_ = auVar39._28_4_ ^ __real_80000000;
  auVar24 = vextractf32x4_avx512vl(auVar40,1);
  auVar44 = vcvtps2pd_avx512vl(auVar24);
  auVar61 = vcvtps2pd_avx512vl(auVar40._0_16_);
  auVar24 = vextractf32x4_avx512vl(auVar42,1);
  auVar47 = vcvtps2pd_avx512vl(auVar24);
  auVar42 = vcvtps2pd_avx512vl(auVar42._0_16_);
  auVar39 = vcvtps2pd_avx(auVar49._16_16_);
  auVar40 = vcvtps2pd_avx(auVar64);
  local_1b8 = in_ZMM3._0_8_;
  auVar50._8_8_ = local_1b8;
  auVar50._0_8_ = local_1b8;
  auVar50._16_8_ = local_1b8;
  auVar50._24_8_ = local_1b8;
  auVar52._8_8_ = uVar3;
  auVar52._0_8_ = uVar3;
  auVar52._16_8_ = uVar3;
  auVar52._24_8_ = uVar3;
  auVar43 = vfmsub213pd_avx512vl(auVar43,auVar50,auVar52);
  auVar41 = vfmsub213pd_avx512vl(auVar41,auVar50,auVar52);
  auVar57._8_8_ = uVar4;
  auVar57._0_8_ = uVar4;
  auVar57._16_8_ = uVar4;
  auVar57._24_8_ = uVar4;
  auVar59 = vfmsub213pd_avx512vl(auVar59,auVar50,auVar57);
  auVar45 = vfmsub213pd_avx512vl(auVar45,auVar50,auVar57);
  auVar66._8_8_ = uVar5;
  auVar66._0_8_ = uVar5;
  auVar66._16_8_ = uVar5;
  auVar66._24_8_ = uVar5;
  auVar46 = vfmsub213pd_avx512vl(auVar46,auVar50,auVar66);
  auVar60 = vfmsub213pd_avx512vl(auVar60,auVar50,auVar66);
  local_148 = auVar31._0_8_;
  auVar91._8_8_ = local_148;
  auVar91._0_8_ = local_148;
  auVar91._16_8_ = local_148;
  auVar91._24_8_ = local_148;
  auVar31 = vmulpd_avx512vl(auVar34,auVar41);
  auVar48 = vmulpd_avx512vl(auVar34,auVar43);
  auVar49 = vmulpd_avx512vl(auVar35,auVar45);
  auVar50 = vmulpd_avx512vl(auVar35,auVar59);
  auVar51 = vmulpd_avx512vl(auVar91,auVar60);
  auVar52 = vmulpd_avx512vl(auVar91,auVar46);
  auVar48 = vfmsub231pd_avx512vl(auVar48,auVar91,auVar59);
  auVar31 = vfmsub231pd_avx512vl(auVar31,auVar91,auVar45);
  auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar46);
  auVar49 = vfmsub231pd_avx512vl(auVar49,auVar34,auVar60);
  auVar52 = vfmsub231pd_avx512vl(auVar52,auVar35,auVar43);
  auVar51 = vfmsub231pd_avx512vl(auVar51,auVar35,auVar41);
  auVar49 = vaddpd_avx512vl(auVar49,auVar49);
  auVar50 = vaddpd_avx512vl(auVar50,auVar50);
  auVar51 = vaddpd_avx512vl(auVar51,auVar51);
  auVar88._0_8_ = auVar52._0_8_ + auVar52._0_8_;
  auVar88._8_8_ = auVar52._8_8_ + auVar52._8_8_;
  auVar88._16_8_ = auVar52._16_8_ + auVar52._16_8_;
  auVar88._24_8_ = auVar52._24_8_ + auVar52._24_8_;
  auVar55._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar55._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar55._16_8_ = auVar31._16_8_ + auVar31._16_8_;
  auVar55._24_8_ = auVar31._24_8_ + auVar31._24_8_;
  auVar98._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar98._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar98._16_8_ = auVar48._16_8_ + auVar48._16_8_;
  auVar98._24_8_ = auVar48._24_8_ + auVar48._24_8_;
  auVar31 = vfmadd231pd_avx512vl(auVar43,auVar36,auVar50);
  auVar41 = vfmadd231pd_avx512vl(auVar41,auVar36,auVar49);
  auVar43 = vfmadd231pd_avx512vl(auVar59,auVar36,auVar88);
  auVar45 = vfmadd231pd_avx512vl(auVar45,auVar36,auVar51);
  auVar46 = vfmadd231pd_avx512vl(auVar46,auVar36,auVar98);
  auVar59 = vfmadd231pd_avx512vl(auVar60,auVar36,auVar55);
  auVar60 = vmulpd_avx512vl(auVar34,auVar49);
  auVar48 = vmulpd_avx512vl(auVar34,auVar50);
  auVar52 = vmulpd_avx512vl(auVar35,auVar51);
  auVar86._0_8_ = auVar88._0_8_ * dVar74;
  auVar86._8_8_ = auVar88._8_8_ * dVar76;
  auVar86._16_8_ = auVar88._16_8_ * dVar77;
  auVar86._24_8_ = auVar88._24_8_ * dVar78;
  auVar53 = vmulpd_avx512vl(auVar91,auVar55);
  auVar48 = vfmsub231pd_avx512vl(auVar48,auVar91,auVar88);
  auVar67._0_8_ = local_148 * auVar51._0_8_ - auVar60._0_8_;
  auVar67._8_8_ = local_148 * auVar51._8_8_ - auVar60._8_8_;
  auVar67._16_8_ = local_148 * auVar51._16_8_ - auVar60._16_8_;
  auVar67._24_8_ = local_148 * auVar51._24_8_ - auVar60._24_8_;
  auVar60 = vfmsub231pd_avx512vl(auVar86,auVar34,auVar98);
  auVar51 = vfmsub231pd_avx512vl(auVar52,auVar34,auVar55);
  auVar89._0_8_ = dVar74 * auVar50._0_8_ - local_148 * auVar98._0_8_;
  auVar89._8_8_ = dVar76 * auVar50._8_8_ - local_148 * auVar98._8_8_;
  auVar89._16_8_ = dVar77 * auVar50._16_8_ - local_148 * auVar98._16_8_;
  auVar89._24_8_ = dVar78 * auVar50._24_8_ - local_148 * auVar98._24_8_;
  auVar49 = vfmsub231pd_avx512vl(auVar53,auVar35,auVar49);
  auVar50 = vmulpd_avx512vl(auVar34,auVar61);
  auVar52 = vmulpd_avx512vl(auVar34,auVar44);
  auVar53 = vmulpd_avx512vl(auVar35,auVar42);
  auVar54 = vmulpd_avx512vl(auVar35,auVar47);
  auVar99._0_8_ = local_148 * auVar39._0_8_;
  auVar99._8_8_ = local_148 * auVar39._8_8_;
  auVar99._16_8_ = local_148 * auVar39._16_8_;
  auVar99._24_8_ = local_148 * auVar39._24_8_;
  auVar52 = vfmsub231pd_avx512vl(auVar52,auVar91,auVar47);
  auVar50 = vfmsub231pd_avx512vl(auVar50,auVar91,auVar42);
  auVar54 = vfmsub231pd_avx512vl(auVar54,auVar34,auVar39);
  auVar53 = vfmsub231pd_avx512vl(auVar53,auVar34,auVar40);
  auVar55 = vfmsub231pd_avx512vl(auVar99,auVar35,auVar44);
  auVar103._0_8_ = local_148 * auVar40._0_8_;
  auVar103._8_8_ = local_148 * auVar40._8_8_;
  auVar103._16_8_ = local_148 * auVar40._16_8_;
  auVar103._24_8_ = local_148 * auVar40._24_8_;
  auVar56 = vfmsub231pd_avx512vl(auVar103,auVar35,auVar61);
  auVar94._0_8_ = auVar53._0_8_ + auVar53._0_8_;
  auVar94._8_8_ = auVar53._8_8_ + auVar53._8_8_;
  auVar94._16_8_ = auVar53._16_8_ + auVar53._16_8_;
  auVar94._24_8_ = auVar53._24_8_ + auVar53._24_8_;
  auVar96._0_8_ = auVar54._0_8_ + auVar54._0_8_;
  auVar96._8_8_ = auVar54._8_8_ + auVar54._8_8_;
  auVar96._16_8_ = auVar54._16_8_ + auVar54._16_8_;
  auVar96._24_8_ = auVar54._24_8_ + auVar54._24_8_;
  auVar104._0_8_ = auVar56._0_8_ + auVar56._0_8_;
  auVar104._8_8_ = auVar56._8_8_ + auVar56._8_8_;
  auVar104._16_8_ = auVar56._16_8_ + auVar56._16_8_;
  auVar104._24_8_ = auVar56._24_8_ + auVar56._24_8_;
  auVar100._0_8_ = auVar55._0_8_ + auVar55._0_8_;
  auVar100._8_8_ = auVar55._8_8_ + auVar55._8_8_;
  auVar100._16_8_ = auVar55._16_8_ + auVar55._16_8_;
  auVar100._24_8_ = auVar55._24_8_ + auVar55._24_8_;
  auVar53._0_8_ = auVar50._0_8_ + auVar50._0_8_;
  auVar53._8_8_ = auVar50._8_8_ + auVar50._8_8_;
  auVar53._16_8_ = auVar50._16_8_ + auVar50._16_8_;
  auVar53._24_8_ = auVar50._24_8_ + auVar50._24_8_;
  auVar50 = vaddpd_avx512vl(auVar52,auVar52);
  auVar44 = vfmadd231pd_avx512vl(auVar44,auVar36,auVar96);
  auVar61 = vfmadd231pd_avx512vl(auVar61,auVar36,auVar94);
  auVar47 = vfmadd231pd_avx512vl(auVar47,auVar36,auVar100);
  auVar42 = vfmadd231pd_avx512vl(auVar42,auVar36,auVar104);
  auVar36 = vfmadd231pd_avx512vl(auVar39,auVar36,auVar50);
  auVar39 = vmulpd_avx512vl(auVar34,auVar94);
  auVar93._0_8_ = auVar104._0_8_ * dVar74;
  auVar93._8_8_ = auVar104._8_8_ * dVar76;
  auVar93._16_8_ = auVar104._16_8_ * dVar77;
  auVar93._24_8_ = auVar104._24_8_ * dVar78;
  auVar52 = vmulpd_avx512vl(auVar34,auVar96);
  auVar105._0_8_ = local_148 * auVar100._0_8_ - auVar52._0_8_;
  auVar105._8_8_ = local_148 * auVar100._8_8_ - auVar52._8_8_;
  auVar105._16_8_ = local_148 * auVar100._16_8_ - auVar52._16_8_;
  auVar105._24_8_ = local_148 * auVar100._24_8_ - auVar52._24_8_;
  auVar101._0_8_ = auVar100._0_8_ * dVar74;
  auVar101._8_8_ = auVar100._8_8_ * dVar76;
  auVar101._16_8_ = auVar100._16_8_ * dVar77;
  auVar101._24_8_ = auVar100._24_8_ * dVar78;
  auVar52 = vfmsub231pd_avx512vl(auVar101,auVar34,auVar50);
  auVar34 = vfmsub231pd_avx512vl(auVar93,auVar34,auVar53);
  auVar50 = vmulpd_avx512vl(auVar91,auVar50);
  auVar35 = vfmsub231pd_avx512vl(auVar50,auVar35,auVar96);
  auVar56._0_8_ = dVar74 * auVar94._0_8_ - local_148 * auVar53._0_8_;
  auVar56._8_8_ = dVar76 * auVar94._8_8_ - local_148 * auVar53._8_8_;
  auVar56._16_8_ = dVar77 * auVar94._16_8_ - local_148 * auVar53._16_8_;
  auVar56._24_8_ = dVar78 * auVar94._24_8_ - local_148 * auVar53._24_8_;
  uVar19 = vpcmpgtd_avx512vl(auVar38,auVar37);
  bVar21 = bVar16 & (byte)uVar19;
  auVar37 = vaddpd_avx512vl(auVar46,auVar48);
  auVar38 = vaddpd_avx512vl(auVar59,auVar67);
  auVar31 = vaddpd_avx512vl(auVar31,auVar60);
  auVar41 = vaddpd_avx512vl(auVar41,auVar51);
  auVar43 = vaddpd_avx512vl(auVar43,auVar89);
  auVar46 = vaddpd_avx512vl(auVar45,auVar49);
  auVar36 = vaddpd_avx512vl(auVar36,auVar105);
  auVar70._0_8_ =
       (local_148 * auVar104._0_8_ - auVar39._0_8_) + auVar53._0_8_ * dVar69 + auVar40._0_8_;
  auVar70._8_8_ =
       (local_148 * auVar104._8_8_ - auVar39._8_8_) + auVar53._8_8_ * dVar71 + auVar40._8_8_;
  auVar70._16_8_ =
       (local_148 * auVar104._16_8_ - auVar39._16_8_) + auVar53._16_8_ * dVar72 + auVar40._16_8_;
  auVar70._24_8_ =
       (local_148 * auVar104._24_8_ - auVar39._24_8_) + auVar53._24_8_ * dVar73 + auVar40._24_8_;
  auVar39 = vaddpd_avx512vl(auVar44,auVar52);
  auVar34 = vaddpd_avx512vl(auVar61,auVar34);
  auVar35 = vaddpd_avx512vl(auVar47,auVar35);
  auVar40 = vaddpd_avx512vl(auVar42,auVar56);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  auVar42 = vbroadcastsd_avx512vl(auVar24);
  auVar31 = vmulpd_avx512vl(auVar42,auVar31);
  auVar41 = vmulpd_avx512vl(auVar42,auVar41);
  auVar39 = vmulpd_avx512vl(auVar42,auVar39);
  auVar34 = vmulpd_avx512vl(auVar42,auVar34);
  auVar42 = vmulpd_avx512vl(auVar32,auVar43);
  auVar43 = vmulpd_avx512vl(auVar32,auVar46);
  auVar35 = vmulpd_avx512vl(auVar32,auVar35);
  auVar47._0_8_ = auVar32._0_8_ * auVar40._0_8_;
  auVar47._8_8_ = auVar32._8_8_ * auVar40._8_8_;
  auVar47._16_8_ = auVar32._16_8_ * auVar40._16_8_;
  auVar47._24_8_ = auVar32._24_8_ * auVar40._24_8_;
  auVar40._0_8_ = dVar79 * auVar37._0_8_;
  auVar40._8_8_ = dVar81 * auVar37._8_8_;
  auVar40._16_8_ = dVar82 * auVar37._16_8_;
  auVar40._24_8_ = dVar83 * auVar37._24_8_;
  auVar68._0_8_ = dVar79 * auVar38._0_8_;
  auVar68._8_8_ = dVar81 * auVar38._8_8_;
  auVar68._16_8_ = dVar82 * auVar38._16_8_;
  auVar68._24_8_ = dVar83 * auVar38._24_8_;
  auVar32 = vmulpd_avx512vl(auVar33,auVar36);
  auVar24 = vcvtpd2ps_avx512vl(auVar41);
  auVar33 = vmulpd_avx512vl(auVar33,auVar70);
  auVar25 = vcvtpd2ps_avx512vl(auVar31);
  auVar75._16_16_ = ZEXT116(1) * auVar25;
  auVar75._0_16_ = ZEXT116(0) * auVar25 | ZEXT116(1) * auVar24;
  auVar30 = vcvtpd2ps_avx512vl(auVar43);
  auVar26 = vcvtpd2ps_avx512vl(auVar42);
  auVar24 = vcvtpd2ps_avx(auVar68);
  auVar25 = vcvtpd2ps_avx(auVar40);
  auVar41._16_16_ = ZEXT116(1) * auVar26;
  auVar41._0_16_ = ZEXT116(0) * auVar26 | ZEXT116(1) * auVar30;
  auVar38._16_16_ = ZEXT116(1) * auVar25;
  auVar38._0_16_ = ZEXT116(0) * auVar25 | ZEXT116(1) * auVar24;
  auVar24 = vcvtpd2ps_avx512vl(auVar34);
  auVar25 = vcvtpd2ps_avx512vl(auVar39);
  auVar36._16_16_ = ZEXT116(1) * auVar25;
  auVar36._0_16_ = ZEXT116(0) * auVar25 | ZEXT116(1) * auVar24;
  auVar24 = vcvtpd2ps_avx(auVar47);
  auVar25 = vcvtpd2ps_avx512vl(auVar35);
  auVar31._16_16_ = ZEXT116(1) * auVar25;
  auVar31._0_16_ = ZEXT116(0) * auVar25 | ZEXT116(1) * auVar24;
  auVar24 = vcvtpd2ps_avx512vl(auVar33);
  auVar25 = vcvtpd2ps_avx512vl(auVar32);
  auVar32 = vinserti32x4_avx512vl(ZEXT1632(auVar24),auVar25,1);
  bVar23 = bVar16;
  if (bVar21 != 0) {
    auVar33 = vpbroadcastd_avx512vl(ZEXT416(__real_7f800000));
    auVar34 = vpandd_avx512vl(auVar75,auVar33);
    uVar19 = vpcmpd_avx512vl(auVar34,auVar33,4);
    bVar23 = (byte)uVar19;
    if ((bVar23 & bVar21) == 0) {
      if ((bVar23 & bVar21) == 0) goto LAB_140d1c6a2;
LAB_140d1c6d3:
      auVar34 = vpandd_avx512vl(auVar38,auVar33);
      uVar19 = vpcmpd_avx512vl(auVar34,auVar33,4);
      bVar21 = bVar21 & (byte)uVar19 & bVar23;
      bVar23 = 0;
      if (bVar21 == 0) goto LAB_140d1c735;
    }
    else {
      auVar34 = vpandd_avx512vl(auVar41,auVar33);
      uVar19 = vpcmpd_avx512vl(auVar34,auVar33,4);
      bVar23 = bVar21 & (byte)uVar19 & bVar23;
      if ((bVar23 & bVar21) != 0) goto LAB_140d1c6d3;
LAB_140d1c6a2:
      bVar21 = bVar21 & bVar23;
      if (bVar21 == 0) {
        bVar23 = 0;
        goto LAB_140d1c735;
      }
    }
    auVar34 = vpandd_avx512vl(auVar36,auVar33);
    uVar19 = vpcmpd_avx512vl(auVar34,auVar33,4);
    bVar22 = 0xff;
    bVar23 = 0xff;
    if ((bVar21 & (byte)uVar19) != 0) {
      auVar34 = vpandd_avx512vl(auVar31,auVar33);
      uVar7 = vpcmpd_avx512vl(auVar34,auVar33,4);
      bVar23 = bVar21 & (byte)uVar7;
    }
    bVar23 = bVar23 & (byte)uVar19;
    if ((bVar23 & bVar21) != 0) {
      auVar34 = vpandd_avx512vl(auVar32,auVar33);
      uVar19 = vpcmpd_avx512vl(auVar34,auVar33,4);
      bVar22 = (byte)uVar19;
    }
    bVar23 = bVar21 & bVar22 & bVar23;
  }
LAB_140d1c735:
  bVar16 = bVar23 & bVar20 | ~bVar20 & bVar16;
  if (bVar20 == 0xff) {
    auVar34 = vpermt2ps_avx512vl(auVar38,
                                 ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar41);
    auVar33 = vpermt2ps_avx512vl(auVar75,
                                 ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar41);
    auVar33 = vpermt2ps_avx512vl(auVar33,
                                 ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar34);
    *pauVar2 = auVar33;
    auVar33 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
    auVar34 = vpermt2ps_avx512vl(auVar34,
                                 ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar75);
    pauVar2[1] = auVar34;
    auVar37 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
    auVar34 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
    auVar35 = vpermt2ps_avx512vl(auVar41,
                                 ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                 ,auVar75);
    auVar35 = vpermt2ps_avx512vl(auVar35,
                                 ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar38);
    pauVar2[2] = auVar35;
    auVar62 = vpermi2ps_avx512vl(auVar62,auVar32,auVar31);
    auVar63 = vpermi2ps_avx512vl(auVar63,auVar36,auVar31);
    auVar63 = vpermt2ps_avx512vl(auVar63,auVar10,auVar62);
    *pauVar13 = auVar63;
    auVar33 = vpermt2ps_avx512vl(auVar62,auVar33,auVar36);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 0xc) = auVar33;
    auVar33 = vpermt2ps_avx512vl(auVar31,auVar34,auVar36);
    auVar32 = vpermt2ps_avx512vl(auVar33,auVar37,auVar32);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar12 * 0xc) = auVar32;
  }
  else {
    vscatterdps_avx512vl(ZEXT832(pauVar2) + auVar31,uVar18,auVar75);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar18,
               auVar41);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar18,
               auVar38);
    vscatterdps_avx512vl(ZEXT832(pauVar13) + auVar31,uVar18,auVar36);
    vscatterdps_avx512vl
              (ZEXT832(pauVar13) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar18,
               auVar31);
    vscatterdps_avx512vl
              (ZEXT832(pauVar13) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar18,
               auVar32);
  }
  auVar24 = vmovdqu8_avx512vl(___xmm_01010101010101010101010101010101);
  auVar30[1] = (bVar16 >> 1 & 1) * auVar24[1];
  auVar30[0] = (bVar16 & 1) * auVar24[0];
  auVar30[2] = (bVar16 >> 2 & 1) * auVar24[2];
  auVar30[3] = (bVar16 >> 3 & 1) * auVar24[3];
  auVar30[4] = (bVar16 >> 4 & 1) * auVar24[4];
  auVar30[5] = (bVar16 >> 5 & 1) * auVar24[5];
  auVar30[6] = (bVar16 >> 6 & 1) * auVar24[6];
  auVar30[7] = -((char)bVar16 >> 7) * auVar24[7];
  auVar30._8_8_ = 0;
LAB_140d1c870:
  auVar24 = vpsllw_avx(auVar30,7);
  uVar19 = vpmovb2m_avx512vl(auVar24);
  return CONCAT71((int7)(uVar11 >> 8),(byte)((byte)uVar19 | ~(byte)uVar17) == 0xff);
}

// TransformClothSimulData_avx512skx @ 140d1c8f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformClothSimulData_avx512skx
               (longlong param_1,longlong param_2,undefined1 (*param_3) [32],undefined8 param_4,
               uint param_5)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  ulonglong uVar9;
  longlong unaff_RBX;
  uint uVar10;
  undefined1 (*pauVar11) [32];
  uint uVar12;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  longlong lVar13;
  byte bVar14;
  ulonglong uVar15;
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
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [16];
  undefined1 in_ZMM3 [64];
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar65 [32];
  double dVar69;
  double dVar73;
  double dVar74;
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  double dVar75;
  undefined1 auVar72 [32];
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
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined8 local_108;
  double local_e8;
  
  auVar56 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
  auVar22 = in_ZMM22._0_16_;
  auVar21 = in_ZMM21._0_16_;
  auVar23 = vmulpd_avx512vl(*param_3,
                            ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000)
  ;
  uVar3 = *(ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)(param_3[1] + 8);
  uVar5 = *(ulonglong *)(param_3[1] + 0x10);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar5;
  auVar27._24_8_ = 0;
  auVar27._0_24_ = *(undefined1 (*) [24])param_3[2];
  auVar24._8_8_ = __real_7fffffffffffffff;
  auVar24._0_8_ = __real_7fffffffffffffff;
  auVar24._16_8_ = __real_7fffffffffffffff;
  auVar24._24_8_ = __real_7fffffffffffffff;
  auVar24 = vandpd_avx512vl(auVar27,auVar24);
  auVar25._8_8_ = __real_3e45798ee2308c3a;
  auVar25._0_8_ = __real_3e45798ee2308c3a;
  auVar25._16_8_ = __real_3e45798ee2308c3a;
  auVar25._24_8_ = __real_3e45798ee2308c3a;
  uVar15 = vcmppd_avx512vl(auVar24,auVar25,6);
  uVar15 = uVar15 & 0xf;
  auVar24 = vrcp14pd_avx512vl(auVar27);
  auVar26._8_8_ = __real_4000000000000000;
  auVar26._0_8_ = __real_4000000000000000;
  auVar26._16_8_ = __real_4000000000000000;
  auVar26._24_8_ = __real_4000000000000000;
  auVar25 = vfnmadd213pd_avx512vl(auVar27,auVar24,auVar26);
  auVar24 = vmulpd_avx512vl(auVar24,auVar25);
  uVar1 = (ulonglong)((byte)uVar15 & 1) * auVar24._0_8_;
  auVar16._8_8_ = (ulonglong)((byte)(uVar15 >> 1) & 1) * auVar24._8_8_;
  auVar16._0_8_ = uVar1;
  auVar29._16_8_ = (ulonglong)((byte)(uVar15 >> 2) & 1) * auVar24._16_8_;
  auVar29._0_16_ = auVar16;
  auVar29._24_8_ = (uVar15 >> 3) * auVar24._24_8_;
  uVar10 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar10 = param_5;
  }
  auVar26 = vpermpd_avx512vl(auVar23,0x55);
  auVar27 = vpermpd_avx512vl(auVar23,0xaa);
  auVar28 = vpermpd_avx512vl(auVar23,0xff);
  auVar24 = vpermpd_avx2(auVar29,0x55);
  auVar25 = vpermpd_avx2(auVar29,0xaa);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar5;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  dVar60 = auVar27._0_8_;
  dVar61 = auVar27._8_8_;
  dVar62 = auVar27._16_8_;
  dVar63 = auVar27._24_8_;
  if ((int)(uVar10 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    auVar29 = vbroadcastsd_avx512vl(in_ZMM3._0_16_);
    auVar21 = auVar29._0_16_;
    auVar30 = vbroadcastsd_avx512vl(auVar20);
    auVar22 = auVar30._0_16_;
    auVar31 = vbroadcastsd_avx512vl(auVar19);
    auVar32 = vbroadcastsd_avx512vl(auVar18);
    auVar33 = vbroadcastsd_avx512vl(auVar23._0_16_);
    auVar34 = vbroadcastsd_avx512vl(auVar16);
    lVar13 = 0x40;
    uVar12 = 0;
    auVar35 = vbroadcastss_avx512vl(ZEXT416(__real_80000000));
    do {
      auVar58 = ___ymm_00000008000000020000000c00000007000000010000000b0000000600000000;
      auVar57 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
      auVar39 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar13);
      auVar41 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar13);
      auVar40 = vblendps_avx(auVar41,auVar39,0x24);
      auVar36 = vpermt2ps_avx512vl(auVar39,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar41);
      auVar37 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(param_1 + lVar13));
      auVar38 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar13),
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar41);
      auVar39 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar13);
      auVar41 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar13);
      auVar40 = vblendps_avx(auVar41,auVar39,0x24);
      auVar39 = vpermt2ps_avx512vl(auVar39,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar41);
      auVar40 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(param_2 + lVar13));
      auVar41 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar13),
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar41);
      auVar42 = vinsertf32x4_avx512vl(auVar39,auVar41._0_16_,1);
      auVar43 = vshuff64x2_avx512vl(auVar39,auVar41,3);
      auVar44 = vcvtps2pd_avx512vl(auVar36._0_16_);
      auVar45 = vcvtps2pd_avx512vl(auVar38._0_16_);
      auVar39 = vcvtps2pd_avx(auVar36._16_16_);
      auVar16 = vextractf32x4_avx512vl(auVar38,1);
      auVar46 = vcvtps2pd_avx512vl(auVar16);
      auVar47 = vcvtps2pd_avx512vl(auVar37._0_16_);
      auVar41 = vcvtps2pd_avx(auVar37._16_16_);
      auVar36 = vxorps_avx512vl(auVar42,auVar35);
      auVar38 = vxorpd_avx512vl(auVar43,auVar35);
      auVar43 = vxorps_avx512vl(auVar40,auVar35);
      auVar40 = vcvtps2pd_avx(auVar36._16_16_);
      auVar36 = vcvtps2pd_avx(auVar36._0_16_);
      auVar37 = vcvtps2pd_avx(auVar38._16_16_);
      auVar38 = vcvtps2pd_avx(auVar38._0_16_);
      auVar42 = vcvtps2pd_avx(auVar43._16_16_);
      auVar43 = vcvtps2pd_avx(auVar43._0_16_);
      auVar45 = vfmsub213pd_avx512vl(auVar45,auVar29,auVar30);
      auVar44 = vfmsub213pd_avx512vl(auVar44,auVar29,auVar30);
      auVar46 = vfmsub213pd_avx512vl(auVar46,auVar29,auVar31);
      auVar39 = vfmsub213pd_avx512vl(auVar39,auVar29,auVar31);
      auVar41 = vfmsub213pd_avx512vl(auVar41,auVar29,auVar32);
      auVar47 = vfmsub213pd_avx512vl(auVar47,auVar29,auVar32);
      auVar48 = vmulpd_avx512vl(auVar26,auVar44);
      auVar49 = vmulpd_avx512vl(auVar26,auVar45);
      auVar50 = vmulpd_avx512vl(auVar27,auVar39);
      auVar51 = vmulpd_avx512vl(auVar27,auVar46);
      auVar52 = vmulpd_avx512vl(auVar33,auVar47);
      auVar53 = vmulpd_avx512vl(auVar33,auVar41);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar33,auVar46);
      auVar48 = vfmsub231pd_avx512vl(auVar48,auVar33,auVar39);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar26,auVar41);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar26,auVar47);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar27,auVar45);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar27,auVar44);
      auVar50 = vaddpd_avx512vl(auVar50,auVar50);
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar54._0_8_ = auVar52._0_8_ + auVar52._0_8_;
      auVar54._8_8_ = auVar52._8_8_ + auVar52._8_8_;
      auVar54._16_8_ = auVar52._16_8_ + auVar52._16_8_;
      auVar54._24_8_ = auVar52._24_8_ + auVar52._24_8_;
      auVar70._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar70._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar70._16_8_ = auVar53._16_8_ + auVar53._16_8_;
      auVar70._24_8_ = auVar53._24_8_ + auVar53._24_8_;
      auVar48 = vaddpd_avx512vl(auVar48,auVar48);
      auVar49 = vaddpd_avx512vl(auVar49,auVar49);
      auVar45 = vfmadd231pd_avx512vl(auVar45,auVar28,auVar51);
      auVar44 = vfmadd231pd_avx512vl(auVar44,auVar28,auVar50);
      auVar46 = vfmadd231pd_avx512vl(auVar46,auVar28,auVar70);
      auVar39 = vfmadd231pd_avx512vl(auVar39,auVar28,auVar54);
      auVar41 = vfmadd231pd_avx512vl(auVar41,auVar28,auVar49);
      auVar47 = vfmadd231pd_avx512vl(auVar47,auVar28,auVar48);
      auVar52 = vmulpd_avx512vl(auVar26,auVar51);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar33,auVar70);
      auVar53 = vmulpd_avx512vl(auVar26,auVar50);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar33,auVar54);
      auVar55._0_8_ = dVar60 * auVar54._0_8_;
      auVar55._8_8_ = dVar61 * auVar54._8_8_;
      auVar55._16_8_ = dVar62 * auVar54._16_8_;
      auVar55._24_8_ = dVar63 * auVar54._24_8_;
      auVar71._0_8_ = dVar60 * auVar70._0_8_;
      auVar71._8_8_ = dVar61 * auVar70._8_8_;
      auVar71._16_8_ = dVar62 * auVar70._16_8_;
      auVar71._24_8_ = dVar63 * auVar70._24_8_;
      auVar47 = vaddpd_avx512vl(auVar47,auVar53);
      auVar53 = vmulpd_avx512vl(auVar33,auVar48);
      auVar54 = vfmsub231pd_avx512vl(auVar71,auVar26,auVar49);
      auVar49 = vmulpd_avx512vl(auVar33,auVar49);
      auVar45 = vaddpd_avx512vl(auVar45,auVar54);
      auVar48 = vfmsub231pd_avx512vl(auVar55,auVar26,auVar48);
      auVar44 = vaddpd_avx512vl(auVar44,auVar48);
      auVar48 = vfmsub231pd_avx512vl(auVar49,auVar27,auVar51);
      auVar46 = vaddpd_avx512vl(auVar46,auVar48);
      auVar48 = vfmsub231pd_avx512vl(auVar53,auVar27,auVar50);
      auVar49 = vmulpd_avx512vl(auVar26,auVar36);
      auVar50 = vmulpd_avx512vl(auVar26,auVar40);
      auVar51 = vmulpd_avx512vl(auVar27,auVar38);
      auVar53 = vmulpd_avx512vl(auVar27,auVar37);
      auVar54 = vmulpd_avx512vl(auVar33,auVar43);
      auVar55 = vmulpd_avx512vl(auVar33,auVar42);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar33,auVar37);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar33,auVar38);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar26,auVar42);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar26,auVar43);
      dVar69 = dVar60 * auVar40._0_8_ - auVar55._0_8_;
      dVar73 = dVar61 * auVar40._8_8_ - auVar55._8_8_;
      dVar74 = dVar62 * auVar40._16_8_ - auVar55._16_8_;
      dVar75 = dVar63 * auVar40._24_8_ - auVar55._24_8_;
      dVar64 = dVar60 * auVar36._0_8_ - auVar54._0_8_;
      dVar66 = dVar61 * auVar36._8_8_ - auVar54._8_8_;
      dVar67 = dVar62 * auVar36._16_8_ - auVar54._16_8_;
      dVar68 = dVar63 * auVar36._24_8_ - auVar54._24_8_;
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar53 = vaddpd_avx512vl(auVar53,auVar53);
      auVar65._0_8_ = dVar64 + dVar64;
      auVar65._8_8_ = dVar66 + dVar66;
      auVar65._16_8_ = dVar67 + dVar67;
      auVar65._24_8_ = dVar68 + dVar68;
      auVar72._0_8_ = dVar69 + dVar69;
      auVar72._8_8_ = dVar73 + dVar73;
      auVar72._16_8_ = dVar74 + dVar74;
      auVar72._24_8_ = dVar75 + dVar75;
      auVar49 = vaddpd_avx512vl(auVar49,auVar49);
      auVar50 = vaddpd_avx512vl(auVar50,auVar50);
      auVar42 = vfmadd231pd_avx512vl(auVar42,auVar28,auVar50);
      auVar43 = vfmadd231pd_avx512vl(auVar43,auVar28,auVar49);
      auVar54 = vmulpd_avx512vl(auVar26,auVar53);
      auVar54 = vfmsub231pd_avx512vl(auVar54,auVar33,auVar72);
      auVar76._0_8_ = auVar42._0_8_ + auVar54._0_8_;
      auVar76._8_8_ = auVar42._8_8_ + auVar54._8_8_;
      auVar76._16_8_ = auVar42._16_8_ + auVar54._16_8_;
      auVar76._24_8_ = auVar42._24_8_ + auVar54._24_8_;
      auVar42 = vmulpd_avx512vl(auVar26,auVar51);
      auVar42 = vfmsub231pd_avx512vl(auVar42,auVar33,auVar65);
      auVar85._0_8_ = auVar43._0_8_ + auVar42._0_8_;
      auVar85._8_8_ = auVar43._8_8_ + auVar42._8_8_;
      auVar85._16_8_ = auVar43._16_8_ + auVar42._16_8_;
      auVar85._24_8_ = auVar43._24_8_ + auVar42._24_8_;
      auVar40 = vfmadd231pd_avx512vl(auVar40,auVar28,auVar53);
      auVar37 = vfmadd231pd_avx512vl(auVar37,auVar28,auVar72);
      auVar42._0_8_ = dVar60 * auVar72._0_8_;
      auVar42._8_8_ = dVar61 * auVar72._8_8_;
      auVar42._16_8_ = dVar62 * auVar72._16_8_;
      auVar42._24_8_ = dVar63 * auVar72._24_8_;
      auVar42 = vfmsub231pd_avx512vl(auVar42,auVar26,auVar50);
      auVar84._0_8_ = auVar40._0_8_ + auVar42._0_8_;
      auVar84._8_8_ = auVar40._8_8_ + auVar42._8_8_;
      auVar84._16_8_ = auVar40._16_8_ + auVar42._16_8_;
      auVar84._24_8_ = auVar40._24_8_ + auVar42._24_8_;
      auVar40 = vfmadd231pd_avx512vl(auVar36,auVar28,auVar51);
      auVar36 = vfmadd231pd_avx512vl(auVar38,auVar28,auVar65);
      auVar38._0_8_ = dVar60 * auVar65._0_8_;
      auVar38._8_8_ = dVar61 * auVar65._8_8_;
      auVar38._16_8_ = dVar62 * auVar65._16_8_;
      auVar38._24_8_ = dVar63 * auVar65._24_8_;
      auVar38 = vfmsub231pd_avx512vl(auVar38,auVar26,auVar49);
      auVar83._0_8_ = auVar40._0_8_ + auVar38._0_8_;
      auVar83._8_8_ = auVar40._8_8_ + auVar38._8_8_;
      auVar83._16_8_ = auVar40._16_8_ + auVar38._16_8_;
      auVar83._24_8_ = auVar40._24_8_ + auVar38._24_8_;
      auVar40 = vmulpd_avx512vl(auVar33,auVar50);
      auVar40 = vfmsub231pd_avx512vl(auVar40,auVar27,auVar53);
      auVar37 = vaddpd_avx512vl(auVar37,auVar40);
      auVar40 = vmulpd_avx512vl(auVar33,auVar49);
      auVar40 = vfmsub231pd_avx512vl(auVar40,auVar27,auVar51);
      auVar36 = vaddpd_avx512vl(auVar36,auVar40);
      auVar40._0_8_ = auVar25._0_8_ * (auVar52._0_8_ + auVar41._0_8_);
      auVar40._8_8_ = auVar25._8_8_ * (auVar52._8_8_ + auVar41._8_8_);
      auVar40._16_8_ = auVar25._16_8_ * (auVar52._16_8_ + auVar41._16_8_);
      auVar40._24_8_ = auVar25._24_8_ * (auVar52._24_8_ + auVar41._24_8_);
      auVar41 = vmulpd_avx512vl(auVar25,auVar47);
      auVar17 = vcvtpd2ps_avx512vl(auVar41);
      auVar16 = vcvtpd2ps_avx(auVar40);
      auVar38 = vinsertf32x4_avx512vl(ZEXT1632(auVar17),auVar16,1);
      auVar41 = vmulpd_avx512vl(auVar34,auVar45);
      auVar40 = vmulpd_avx512vl(auVar34,auVar44);
      auVar42 = vmulpd_avx512vl(auVar24,auVar46);
      auVar44._0_8_ = auVar24._0_8_ * (auVar48._0_8_ + auVar39._0_8_);
      auVar44._8_8_ = auVar24._8_8_ * (auVar48._8_8_ + auVar39._8_8_);
      auVar44._16_8_ = auVar24._16_8_ * (auVar48._16_8_ + auVar39._16_8_);
      auVar44._24_8_ = auVar24._24_8_ * (auVar48._24_8_ + auVar39._24_8_);
      auVar39 = vmulpd_avx512vl(auVar25,auVar76);
      auVar17 = vcvtpd2ps_avx512vl(auVar40);
      auVar40 = vmulpd_avx512vl(auVar25,auVar85);
      auVar16 = vcvtpd2ps_avx512vl(auVar41);
      auVar43 = vinsertf32x4_avx512vl(ZEXT1632(auVar17),auVar16,1);
      auVar16 = vcvtpd2ps_avx(auVar44);
      auVar18 = vcvtpd2ps_avx512vl(auVar42);
      auVar19 = vcvtpd2ps_avx512vl(auVar40);
      auVar20 = vcvtpd2ps_avx512vl(auVar39);
      auVar39 = vinsertf32x4_avx512vl(ZEXT1632(auVar16),auVar18,1);
      auVar42 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar20,1);
      auVar41 = vinsertf32x4_avx512vl(ZEXT1632(auVar17),auVar16,1);
      auVar40 = vshufpd_avx512vl(auVar43,auVar41,2);
      auVar44 = vpermt2ps_avx512vl(auVar38,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar39);
      auVar41 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_00000008000000020000000c00000007000000010000000b0000000600000000
                                   ,auVar44);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar13) = auVar41;
      auVar41 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar40 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar40);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar13) = auVar40;
      auVar40 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar39 = vpermt2ps_avx512vl(auVar39,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar43);
      auVar39 = vpermt2ps_avx512vl(auVar39,auVar56,auVar38);
      auVar38 = vmulpd_avx512vl(auVar34,auVar84);
      auVar43 = vmulpd_avx512vl(auVar34,auVar83);
      auVar37 = vmulpd_avx512vl(auVar24,auVar37);
      auVar16 = vcvtpd2ps_avx(auVar43);
      auVar36 = vmulpd_avx512vl(auVar24,auVar36);
      auVar17 = vcvtpd2ps_avx(auVar38);
      auVar43._16_16_ = auVar17;
      auVar43._0_16_ = auVar16;
      auVar17 = vcvtpd2ps_avx512vl(auVar36);
      auVar18 = vcvtpd2ps_avx512vl(auVar37);
      auVar36 = vinsertf32x4_avx512vl(ZEXT1632(auVar17),auVar18,1);
      *(undefined1 (*) [32])(param_1 + lVar13) = auVar39;
      auVar39 = vinsertf32x4_avx512vl(ZEXT1632(auVar16),auVar17,1);
      auVar39 = vshufpd_avx(auVar43,auVar39,2);
      auVar37 = vpermt2ps_avx512vl(auVar42,auVar57,auVar36);
      auVar38 = vpermt2ps_avx512vl(auVar39,auVar58,auVar37);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar13) = auVar38;
      auVar39 = vpermt2ps_avx512vl(auVar37,auVar41,auVar39);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar13) = auVar39;
      auVar39 = vpermt2ps_avx512vl(auVar36,auVar40,auVar43);
      auVar39 = vpermt2ps_avx512vl(auVar39,auVar56,auVar42);
      auVar17 = auVar39._0_16_;
      *(undefined1 (*) [32])(param_2 + lVar13) = auVar39;
      lVar13 = lVar13 + 0x60;
      uVar12 = uVar12 + 8;
    } while ((int)uVar12 < (int)(uVar10 & 0xfffffff8));
    if ((int)param_5 <= (int)uVar12) {
      return;
    }
  }
  auVar31 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar30 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar29 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar56 = vpbroadcastd_avx512vl();
  auVar56 = vpor_avx2(auVar56,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar32 = vpbroadcastd_avx512vl();
  uVar15 = vpcmpgtd_avx512vl(auVar32,auVar56);
  uVar9 = (ulonglong)uVar12;
  pauVar2 = (undefined1 (*) [32])(param_1 + uVar9 * 0xc);
  bVar14 = (byte)uVar15;
  if (bVar14 == 0xff) {
    auVar56 = pauVar2[1];
    auVar32 = vblendps_avx(auVar56,*pauVar2,0x24);
    auVar33 = vpermt2ps_avx512vl(*pauVar2,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar56);
    auVar36 = vpermt2ps_avx512vl(auVar32,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar2[2]);
    auVar56 = vpermt2ps_avx512vl(pauVar2[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar56);
    auVar41 = vinsertf32x4_avx512vl(auVar33,auVar56._0_16_,1);
    auVar37 = vshuff64x2_avx512vl(auVar33,auVar56,3);
    pauVar11 = (undefined1 (*) [32])(param_2 + uVar9 * 0xc);
    auVar56 = *(undefined1 (*) [32])(param_2 + uVar9 * 0xc);
    auVar32 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar9 * 0xc);
    auVar33 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar9 * 0xc);
    auVar34 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar56,auVar32);
    auVar35 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar33,auVar32);
    auVar39 = vinsertf32x4_avx512vl(auVar34,auVar35._0_16_,1);
    auVar34 = vshuff64x2_avx512vl(auVar34,auVar35,3);
    auVar56 = vblendps_avx(auVar32,auVar56,0x24);
    auVar56 = vpermt2ps_avx512vl(auVar56,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar33);
  }
  else {
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_2));
    auVar41._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * auVar56._4_4_;
    auVar41._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_;
    auVar41._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * auVar56._8_4_;
    auVar41._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * auVar56._12_4_;
    auVar41._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar41._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar41._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar41._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    auVar16 = vxorpd_avx512vl(auVar17,auVar17);
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
    auVar37._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_ | (uint)!(bool)(bVar14 & 1) * auVar16._0_4_;
    bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
    auVar37._4_4_ = (uint)bVar8 * auVar56._4_4_ | (uint)!bVar8 * auVar16._4_4_;
    bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
    auVar37._8_4_ = (uint)bVar8 * auVar56._8_4_ | (uint)!bVar8 * auVar16._8_4_;
    bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
    auVar37._12_4_ = (uint)bVar8 * auVar56._12_4_ | (uint)!bVar8 * auVar16._12_4_;
    auVar37._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar37._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar37._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar37._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
    auVar36._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * auVar56._4_4_;
    auVar36._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_;
    auVar36._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * auVar56._8_4_;
    auVar36._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * auVar56._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    pauVar11 = (undefined1 (*) [32])(param_2 + uVar9 * 0xc);
    auVar16 = vxorpd_avx512vl(auVar21,auVar21);
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar11 + param_2));
    auVar39._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_ | (uint)!(bool)(bVar14 & 1) * auVar16._0_4_;
    bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
    auVar39._4_4_ = (uint)bVar8 * auVar56._4_4_ | (uint)!bVar8 * auVar16._4_4_;
    bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
    auVar39._8_4_ = (uint)bVar8 * auVar56._8_4_ | (uint)!bVar8 * auVar16._8_4_;
    bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
    auVar39._12_4_ = (uint)bVar8 * auVar56._12_4_ | (uint)!bVar8 * auVar16._12_4_;
    auVar39._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar39._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar39._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar39._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    auVar16 = vxorpd_avx512vl(auVar22,auVar22);
    auVar56 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar11 + unaff_RBX));
    auVar34._0_4_ = (uint)(bVar14 & 1) * auVar56._0_4_ | (uint)!(bool)(bVar14 & 1) * auVar16._0_4_;
    bVar8 = (bool)((byte)(uVar15 >> 1) & 1);
    auVar34._4_4_ = (uint)bVar8 * auVar56._4_4_ | (uint)!bVar8 * auVar16._4_4_;
    bVar8 = (bool)((byte)(uVar15 >> 2) & 1);
    auVar34._8_4_ = (uint)bVar8 * auVar56._8_4_ | (uint)!bVar8 * auVar16._8_4_;
    bVar8 = (bool)((byte)(uVar15 >> 3) & 1);
    auVar34._12_4_ = (uint)bVar8 * auVar56._12_4_ | (uint)!bVar8 * auVar16._12_4_;
    auVar34._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar56._16_4_;
    auVar34._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar56._20_4_;
    auVar34._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar56._24_4_;
    auVar34._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar56._28_4_;
    auVar32 = vgatherdps_avx512vl(*(undefined4 *)*pauVar11);
    auVar56._4_4_ = (uint)((byte)(uVar15 >> 1) & 1) * auVar32._4_4_;
    auVar56._0_4_ = (uint)(bVar14 & 1) * auVar32._0_4_;
    auVar56._8_4_ = (uint)((byte)(uVar15 >> 2) & 1) * auVar32._8_4_;
    auVar56._12_4_ = (uint)((byte)(uVar15 >> 3) & 1) * auVar32._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar15 >> 4) & 1) * auVar32._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar15 >> 5) & 1) * auVar32._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar15 >> 6) & 1) * auVar32._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar15 >> 7) * auVar32._28_4_;
  }
  auVar33 = vcvtps2pd_avx512vl(auVar41._0_16_);
  auVar32 = vcvtps2pd_avx(auVar41._16_16_);
  auVar35 = vcvtps2pd_avx512vl(auVar37._0_16_);
  auVar16 = vextractf32x4_avx512vl(auVar37,1);
  auVar41 = vcvtps2pd_avx512vl(auVar16);
  auVar40 = vcvtps2pd_avx512vl(auVar36._0_16_);
  auVar36 = vcvtps2pd_avx512vl(auVar36._16_16_);
  auVar58._4_4_ = __real_80000000;
  auVar58._0_4_ = __real_80000000;
  auVar58._8_4_ = __real_80000000;
  auVar58._12_4_ = __real_80000000;
  auVar58._16_4_ = __real_80000000;
  auVar58._20_4_ = __real_80000000;
  auVar58._24_4_ = __real_80000000;
  auVar58._28_4_ = __real_80000000;
  auVar39 = vxorps_avx512vl(auVar39,auVar58);
  auVar34 = vxorps_avx512vl(auVar34,auVar58);
  auVar16 = vextractf32x4_avx512vl(auVar39,1);
  auVar37 = vcvtps2pd_avx512vl(auVar16);
  auVar39 = vcvtps2pd_avx512vl(auVar39._0_16_);
  auVar59._0_4_ = auVar56._0_4_ ^ __real_80000000;
  auVar59._4_4_ = auVar56._4_4_ ^ __real_80000000;
  auVar59._8_4_ = auVar56._8_4_ ^ __real_80000000;
  auVar59._12_4_ = auVar56._12_4_ ^ __real_80000000;
  auVar45._16_4_ = auVar56._16_4_ ^ __real_80000000;
  auVar45._0_16_ = auVar59;
  auVar45._20_4_ = auVar56._20_4_ ^ __real_80000000;
  auVar45._24_4_ = auVar56._24_4_ ^ __real_80000000;
  auVar45._28_4_ = auVar56._28_4_ ^ __real_80000000;
  auVar16 = vextractf32x4_avx512vl(auVar34,1);
  auVar56 = vcvtps2pd_avx512vl(auVar16);
  auVar34 = vcvtps2pd_avx512vl(auVar34._0_16_);
  auVar16 = vextractf32x4_avx512vl(auVar45,1);
  auVar38 = vcvtps2pd_avx512vl(auVar16);
  auVar42 = vcvtps2pd_avx512vl(auVar59);
  local_108 = in_ZMM3._0_8_;
  auVar46._8_8_ = local_108;
  auVar46._0_8_ = local_108;
  auVar46._16_8_ = local_108;
  auVar46._24_8_ = local_108;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar3;
  auVar43 = vbroadcastsd_avx512vl(auVar21);
  auVar32 = vfmsub213pd_avx512vl(auVar32,auVar46,auVar43);
  auVar33 = vfmsub213pd_avx512vl(auVar33,auVar46,auVar43);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  auVar43 = vbroadcastsd_avx512vl(auVar22);
  auVar41 = vfmsub213pd_avx512vl(auVar41,auVar46,auVar43);
  auVar35 = vfmsub213pd_avx512vl(auVar35,auVar46,auVar43);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar5;
  auVar43 = vbroadcastsd_avx512vl(auVar6);
  auVar36 = vfmsub213pd_avx512vl(auVar36,auVar46,auVar43);
  auVar40 = vfmsub213pd_avx512vl(auVar40,auVar46,auVar43);
  local_e8 = auVar23._0_8_;
  auVar49._8_8_ = local_e8;
  auVar49._0_8_ = local_e8;
  auVar49._16_8_ = local_e8;
  auVar49._24_8_ = local_e8;
  auVar23 = vmulpd_avx512vl(auVar26,auVar33);
  auVar43 = vmulpd_avx512vl(auVar26,auVar32);
  auVar57 = vmulpd_avx512vl(auVar27,auVar35);
  auVar58 = vmulpd_avx512vl(auVar27,auVar41);
  auVar44 = vmulpd_avx512vl(auVar49,auVar40);
  auVar45 = vmulpd_avx512vl(auVar49,auVar36);
  auVar43 = vfmsub231pd_avx512vl(auVar43,auVar49,auVar41);
  auVar23 = vfmsub231pd_avx512vl(auVar23,auVar49,auVar35);
  auVar58 = vfmsub231pd_avx512vl(auVar58,auVar26,auVar36);
  auVar57 = vfmsub231pd_avx512vl(auVar57,auVar26,auVar40);
  dVar64 = dVar60 * auVar32._0_8_ - auVar45._0_8_;
  dVar66 = dVar61 * auVar32._8_8_ - auVar45._8_8_;
  dVar67 = dVar62 * auVar32._16_8_ - auVar45._16_8_;
  dVar68 = dVar63 * auVar32._24_8_ - auVar45._24_8_;
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar27,auVar33);
  auVar57 = vaddpd_avx512vl(auVar57,auVar57);
  auVar58 = vaddpd_avx512vl(auVar58,auVar58);
  auVar50._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar50._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar50._16_8_ = auVar44._16_8_ + auVar44._16_8_;
  auVar50._24_8_ = auVar44._24_8_ + auVar44._24_8_;
  auVar51._0_8_ = dVar64 + dVar64;
  auVar51._8_8_ = dVar66 + dVar66;
  auVar51._16_8_ = dVar67 + dVar67;
  auVar51._24_8_ = dVar68 + dVar68;
  auVar23 = vaddpd_avx512vl(auVar23,auVar23);
  auVar43 = vaddpd_avx512vl(auVar43,auVar43);
  auVar32 = vfmadd231pd_avx512vl(auVar32,auVar28,auVar58);
  auVar33 = vfmadd231pd_avx512vl(auVar33,auVar28,auVar57);
  auVar41 = vfmadd231pd_avx512vl(auVar41,auVar28,auVar51);
  auVar35 = vfmadd231pd_avx512vl(auVar35,auVar28,auVar50);
  auVar36 = vfmadd231pd_avx512vl(auVar36,auVar28,auVar43);
  auVar40 = vfmadd231pd_avx512vl(auVar40,auVar28,auVar23);
  auVar44 = vmulpd_avx512vl(auVar26,auVar57);
  auVar45 = vmulpd_avx512vl(auVar26,auVar58);
  auVar80._0_8_ = dVar60 * auVar50._0_8_;
  auVar80._8_8_ = dVar61 * auVar50._8_8_;
  auVar80._16_8_ = dVar62 * auVar50._16_8_;
  auVar80._24_8_ = dVar63 * auVar50._24_8_;
  auVar82._0_8_ = dVar60 * auVar51._0_8_;
  auVar82._8_8_ = dVar61 * auVar51._8_8_;
  auVar82._16_8_ = dVar62 * auVar51._16_8_;
  auVar82._24_8_ = dVar63 * auVar51._24_8_;
  auVar46 = vmulpd_avx512vl(auVar49,auVar23);
  auVar47 = vmulpd_avx512vl(auVar49,auVar43);
  auVar78._0_8_ = local_e8 * auVar51._0_8_ - auVar45._0_8_;
  auVar78._8_8_ = local_e8 * auVar51._8_8_ - auVar45._8_8_;
  auVar78._16_8_ = local_e8 * auVar51._16_8_ - auVar45._16_8_;
  auVar78._24_8_ = local_e8 * auVar51._24_8_ - auVar45._24_8_;
  auVar36 = vaddpd_avx512vl(auVar36,auVar78);
  auVar53._0_8_ = local_e8 * auVar50._0_8_ - auVar44._0_8_;
  auVar53._8_8_ = local_e8 * auVar50._8_8_ - auVar44._8_8_;
  auVar53._16_8_ = local_e8 * auVar50._16_8_ - auVar44._16_8_;
  auVar53._24_8_ = local_e8 * auVar50._24_8_ - auVar44._24_8_;
  auVar40 = vaddpd_avx512vl(auVar40,auVar53);
  auVar43 = vfmsub231pd_avx512vl(auVar82,auVar26,auVar43);
  auVar48._0_8_ = auVar43._0_8_ + auVar32._0_8_;
  auVar48._8_8_ = auVar43._8_8_ + auVar32._8_8_;
  auVar48._16_8_ = auVar43._16_8_ + auVar32._16_8_;
  auVar48._24_8_ = auVar43._24_8_ + auVar32._24_8_;
  auVar23 = vfmsub231pd_avx512vl(auVar80,auVar26,auVar23);
  auVar23 = vaddpd_avx512vl(auVar33,auVar23);
  auVar32 = vfmsub231pd_avx512vl(auVar47,auVar27,auVar58);
  auVar32 = vaddpd_avx512vl(auVar41,auVar32);
  auVar33 = vfmsub231pd_avx512vl(auVar46,auVar27,auVar57);
  auVar33 = vaddpd_avx512vl(auVar35,auVar33);
  auVar35 = vmulpd_avx512vl(auVar26,auVar39);
  auVar41 = vmulpd_avx512vl(auVar26,auVar37);
  auVar43 = vmulpd_avx512vl(auVar27,auVar34);
  auVar57 = vmulpd_avx512vl(auVar27,auVar56);
  auVar58 = vmulpd_avx512vl(auVar49,auVar42);
  auVar44 = vmulpd_avx512vl(auVar49,auVar38);
  auVar41 = vfmsub231pd_avx512vl(auVar41,auVar49,auVar56);
  auVar35 = vfmsub231pd_avx512vl(auVar35,auVar49,auVar34);
  auVar57 = vfmsub231pd_avx512vl(auVar57,auVar26,auVar38);
  auVar43 = vfmsub231pd_avx512vl(auVar43,auVar26,auVar42);
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar27,auVar37);
  auVar58 = vfmsub231pd_avx512vl(auVar58,auVar27,auVar39);
  auVar43 = vaddpd_avx512vl(auVar43,auVar43);
  auVar57 = vaddpd_avx512vl(auVar57,auVar57);
  auVar47._0_8_ = auVar58._0_8_ + auVar58._0_8_;
  auVar47._8_8_ = auVar58._8_8_ + auVar58._8_8_;
  auVar47._16_8_ = auVar58._16_8_ + auVar58._16_8_;
  auVar47._24_8_ = auVar58._24_8_ + auVar58._24_8_;
  auVar52._0_8_ = auVar44._0_8_ + auVar44._0_8_;
  auVar52._8_8_ = auVar44._8_8_ + auVar44._8_8_;
  auVar52._16_8_ = auVar44._16_8_ + auVar44._16_8_;
  auVar52._24_8_ = auVar44._24_8_ + auVar44._24_8_;
  auVar35 = vaddpd_avx512vl(auVar35,auVar35);
  auVar41 = vaddpd_avx512vl(auVar41,auVar41);
  auVar37 = vfmadd231pd_avx512vl(auVar37,auVar28,auVar57);
  auVar39 = vfmadd231pd_avx512vl(auVar39,auVar28,auVar43);
  auVar56 = vfmadd231pd_avx512vl(auVar56,auVar28,auVar52);
  auVar34 = vfmadd231pd_avx512vl(auVar34,auVar28,auVar47);
  auVar38 = vfmadd231pd_avx512vl(auVar38,auVar28,auVar41);
  auVar28 = vfmadd213pd_avx512vl(auVar28,auVar35,auVar42);
  auVar42 = vmulpd_avx512vl(auVar26,auVar43);
  auVar58 = vmulpd_avx512vl(auVar26,auVar57);
  auVar79._0_8_ = dVar60 * auVar47._0_8_;
  auVar79._8_8_ = dVar61 * auVar47._8_8_;
  auVar79._16_8_ = dVar62 * auVar47._16_8_;
  auVar79._24_8_ = dVar63 * auVar47._24_8_;
  auVar81._0_8_ = dVar60 * auVar52._0_8_;
  auVar81._8_8_ = dVar61 * auVar52._8_8_;
  auVar81._16_8_ = dVar62 * auVar52._16_8_;
  auVar81._24_8_ = dVar63 * auVar52._24_8_;
  auVar44 = vmulpd_avx512vl(auVar49,auVar35);
  auVar45 = vmulpd_avx512vl(auVar49,auVar41);
  auVar77._0_8_ = local_e8 * auVar52._0_8_ - auVar58._0_8_;
  auVar77._8_8_ = local_e8 * auVar52._8_8_ - auVar58._8_8_;
  auVar77._16_8_ = local_e8 * auVar52._16_8_ - auVar58._16_8_;
  auVar77._24_8_ = local_e8 * auVar52._24_8_ - auVar58._24_8_;
  auVar38 = vaddpd_avx512vl(auVar38,auVar77);
  auVar42 = vfmsub231pd_avx512vl(auVar42,auVar49,auVar47);
  auVar28 = vaddpd_avx512vl(auVar28,auVar42);
  auVar41 = vfmsub231pd_avx512vl(auVar81,auVar26,auVar41);
  auVar41 = vaddpd_avx512vl(auVar37,auVar41);
  auVar26 = vfmsub231pd_avx512vl(auVar79,auVar26,auVar35);
  auVar26 = vaddpd_avx512vl(auVar39,auVar26);
  auVar35 = vfmsub231pd_avx512vl(auVar45,auVar27,auVar57);
  auVar56 = vaddpd_avx512vl(auVar56,auVar35);
  auVar27 = vfmsub231pd_avx512vl(auVar44,auVar27,auVar43);
  auVar27 = vaddpd_avx512vl(auVar34,auVar27);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar1;
  auVar34 = vbroadcastsd_avx512vl(auVar7);
  auVar35 = vmulpd_avx512vl(auVar34,auVar48);
  auVar23 = vmulpd_avx512vl(auVar34,auVar23);
  auVar32 = vmulpd_avx512vl(auVar24,auVar32);
  auVar33 = vmulpd_avx512vl(auVar24,auVar33);
  auVar39 = vmulpd_avx512vl(auVar25,auVar36);
  auVar40 = vmulpd_avx512vl(auVar25,auVar40);
  auVar41 = vmulpd_avx512vl(auVar34,auVar41);
  auVar26 = vmulpd_avx512vl(auVar34,auVar26);
  auVar56 = vmulpd_avx512vl(auVar24,auVar56);
  auVar57._0_8_ = auVar24._0_8_ * auVar27._0_8_;
  auVar57._8_8_ = auVar24._8_8_ * auVar27._8_8_;
  auVar57._16_8_ = auVar24._16_8_ * auVar27._16_8_;
  auVar57._24_8_ = auVar24._24_8_ * auVar27._24_8_;
  auVar24 = vmulpd_avx512vl(auVar25,auVar38);
  auVar17 = vcvtpd2ps_avx512vl(auVar23);
  auVar25 = vmulpd_avx512vl(auVar25,auVar28);
  auVar16 = vcvtpd2ps_avx(auVar35);
  auVar35._16_16_ = auVar16;
  auVar35._0_16_ = auVar17;
  auVar16 = vcvtpd2ps_avx512vl(auVar33);
  auVar17 = vcvtpd2ps_avx512vl(auVar32);
  auVar21 = vcvtpd2ps_avx512vl(auVar40);
  auVar22 = vcvtpd2ps_avx512vl(auVar39);
  auVar33._16_16_ = auVar17;
  auVar33._0_16_ = auVar16;
  auVar23 = vinsertf32x4_avx512vl(ZEXT1632(auVar21),auVar22,1);
  auVar16 = vcvtpd2ps_avx512vl(auVar26);
  auVar17 = vcvtpd2ps_avx512vl(auVar41);
  auVar28._16_16_ = auVar17;
  auVar28._0_16_ = auVar16;
  auVar16 = vcvtpd2ps_avx(auVar57);
  auVar17 = vcvtpd2ps_avx512vl(auVar56);
  auVar32._16_16_ = auVar17;
  auVar32._0_16_ = auVar16;
  auVar16 = vcvtpd2ps_avx512vl(auVar25);
  auVar17 = vcvtpd2ps_avx512vl(auVar24);
  auVar24 = vinsertf32x4_avx512vl(ZEXT1632(auVar16),auVar17,1);
  if (bVar14 == 0xff) {
    auVar26 = vpermt2ps_avx512vl(auVar23,
                                 ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar33);
    auVar25 = vpermt2ps_avx512vl(auVar35,
                                 ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar33);
    auVar25 = vpermt2ps_avx512vl(auVar25,
                                 ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar26);
    *pauVar2 = auVar25;
    auVar25 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
    auVar26 = vpermt2ps_avx512vl(auVar26,
                                 ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar35);
    pauVar2[1] = auVar26;
    auVar56 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
    auVar26 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
    auVar27 = vpermt2ps_avx512vl(auVar33,
                                 ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                 ,auVar35);
    auVar23 = vpermt2ps_avx512vl(auVar27,
                                 ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar23);
    pauVar2[2] = auVar23;
    auVar23 = vpermi2ps_avx512vl(auVar29,auVar24,auVar32);
    auVar29 = vpermi2ps_avx512vl(auVar30,auVar28,auVar32);
    auVar29 = vpermt2ps_avx512vl(auVar29,auVar31,auVar23);
    *pauVar11 = auVar29;
    auVar25 = vpermt2ps_avx512vl(auVar23,auVar25,auVar28);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar9 * 0xc) = auVar25;
    auVar25 = vpermt2ps_avx512vl(auVar32,auVar26,auVar28);
    auVar24 = vpermt2ps_avx512vl(auVar25,auVar56,auVar24);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar9 * 0xc) = auVar24;
  }
  else {
    vscatterdps_avx512vl(ZEXT832(pauVar2) + auVar28,uVar15,auVar35);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar15,
               auVar33);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar15,
               auVar23);
    vscatterdps_avx512vl(ZEXT832(pauVar11) + auVar28,uVar15,auVar28);
    vscatterdps_avx512vl
              (ZEXT832(pauVar11) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar15,
               auVar32);
    vscatterdps_avx512vl
              (ZEXT832(pauVar11) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar15,
               auVar24);
  }
  return;
}

// TransformClothSimulDataAndCheckFinite_avx512skx @ 140d1d550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
TransformClothSimulDataAndCheckFinite_avx512skx
          (longlong param_1,longlong param_2,undefined1 (*param_3) [32],undefined8 param_4,
          uint param_5)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  ulonglong uVar10;
  longlong unaff_RBX;
  longlong unaff_RDI;
  uint uVar11;
  undefined1 (*pauVar12) [32];
  uint uVar13;
  longlong lVar14;
  byte bVar15;
  byte bVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
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
  undefined1 auVar23 [16];
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
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 in_ZMM3 [64];
  double dVar70;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 auVar71 [32];
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  double dVar83;
  double dVar86;
  double dVar87;
  double dVar88;
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar89 [32];
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
  undefined1 in_ZMM14 [64];
  double dVar101;
  double dVar105;
  double dVar106;
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  double dVar107;
  undefined1 auVar104 [32];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 in_ZMM26 [64];
  undefined8 local_1a8;
  double local_188;
  double dStack_180;
  double dStack_178;
  double dStack_170;
  double local_148;
  
  auVar9 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar60 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar59 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar111 = in_ZMM26._0_16_;
  auVar27 = in_ZMM14._0_16_;
  auVar28 = vmulpd_avx512vl(*param_3,
                            ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000)
  ;
  auVar26 = auVar28._0_16_;
  uVar3 = *(ulonglong *)param_3[1];
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar3;
  uVar4 = *(ulonglong *)(param_3[1] + 8);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar4;
  uVar5 = *(ulonglong *)(param_3[1] + 0x10);
  auVar32._24_8_ = 0;
  auVar32._0_24_ = *(undefined1 (*) [24])param_3[2];
  auVar29._8_4_ = (int)__real_7fffffffffffffff;
  auVar29._0_8_ = __real_7fffffffffffffff;
  auVar29._12_4_ = (int)((ulonglong)__real_7fffffffffffffff >> 0x20);
  auVar29._16_8_ = __real_7fffffffffffffff;
  auVar29._24_8_ = __real_7fffffffffffffff;
  auVar29 = vandpd_avx512vl(auVar32,auVar29);
  auVar30._8_4_ = (int)__real_3e45798ee2308c3a;
  auVar30._0_8_ = __real_3e45798ee2308c3a;
  auVar30._12_4_ = (int)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
  auVar30._16_8_ = __real_3e45798ee2308c3a;
  auVar30._24_8_ = __real_3e45798ee2308c3a;
  uVar17 = vcmppd_avx512vl(auVar29,auVar30,6);
  uVar17 = uVar17 & 0xf;
  auVar29 = vrcp14pd_avx512vl(auVar32);
  auVar31._8_4_ = (int)__real_4000000000000000;
  auVar31._0_8_ = __real_4000000000000000;
  auVar31._12_4_ = (int)((ulonglong)__real_4000000000000000 >> 0x20);
  auVar31._16_8_ = __real_4000000000000000;
  auVar31._24_8_ = __real_4000000000000000;
  auVar30 = vfnmadd213pd_avx512vl(auVar32,auVar29,auVar31);
  auVar29 = vmulpd_avx512vl(auVar29,auVar30);
  uVar1 = (ulonglong)((byte)uVar17 & 1) * auVar29._0_8_;
  auVar23._8_8_ = (ulonglong)((byte)(uVar17 >> 1) & 1) * auVar29._8_8_;
  auVar23._0_8_ = uVar1;
  auVar33._16_8_ = (ulonglong)((byte)(uVar17 >> 2) & 1) * auVar29._16_8_;
  auVar33._0_16_ = auVar23;
  auVar33._24_8_ = (uVar17 >> 3) * auVar29._24_8_;
  uVar11 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar11 = param_5;
  }
  auVar30 = vpermpd_avx512vl(auVar28,0x55);
  auVar31 = vpermpd_avx512vl(auVar28,0xaa);
  auVar32 = vpermpd_avx512vl(auVar28,0xff);
  auVar29 = vpermpd_avx2(auVar33,0x55);
  auVar33 = vpermpd_avx512vl(auVar33,0xaa);
  auVar108._8_8_ = 0;
  auVar108._0_8_ = uVar5;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = uVar4;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = uVar3;
  dVar75 = auVar31._0_8_;
  dVar76 = auVar31._8_8_;
  dVar77 = auVar31._16_8_;
  dVar78 = auVar31._24_8_;
  dVar70 = auVar32._0_8_;
  dVar72 = auVar32._8_8_;
  dVar73 = auVar32._16_8_;
  dVar74 = auVar32._24_8_;
  if ((int)(uVar11 & 0xfffffff8) < 1) {
    auVar27 = vpcmpeqd_avx(auVar27,auVar27);
    uVar13 = 0;
  }
  else {
    auVar34 = vbroadcastsd_avx512vl(in_ZMM3._0_16_);
    auVar35 = vbroadcastsd_avx512vl(auVar110);
    auVar36 = vbroadcastsd_avx512vl(auVar109);
    auVar37 = vbroadcastsd_avx512vl(auVar108);
    auVar38 = vbroadcastsd_avx512vl(auVar26);
    auVar39 = vbroadcastsd_avx512vl(auVar23);
    auVar111 = auVar39._0_16_;
    auVar27 = vpcmpeqd_avx(auVar27,auVar27);
    lVar14 = 0x40;
    uVar13 = 0;
    auVar40 = vbroadcastss_avx512vl(ZEXT416(__real_80000000));
    auVar23 = vpbroadcastb_avx512vl(ZEXT116(DAT_152cac6b1));
    do {
      auVar58 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
      auVar57 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
      auVar56 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
      auVar41 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar14);
      auVar43 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar14);
      auVar42 = vblendps_avx(auVar43,auVar41,0x24);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar59,auVar43);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar9,*(undefined1 (*) [32])(param_1 + lVar14));
      auVar43 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar14),auVar60,auVar43);
      auVar44 = vcvtps2pd_avx512vl(auVar41._0_16_);
      auVar45 = vcvtps2pd_avx512vl(auVar43._0_16_);
      auVar46 = vcvtps2pd_avx512vl(auVar41._16_16_);
      auVar41 = vcvtps2pd_avx(auVar43._16_16_);
      auVar43 = vcvtps2pd_avx(auVar42._0_16_);
      auVar42 = vcvtps2pd_avx(auVar42._16_16_);
      auVar45 = vfmsub213pd_avx512vl(auVar45,auVar34,auVar35);
      auVar44 = vfmsub213pd_avx512vl(auVar44,auVar34,auVar35);
      auVar41 = vfmsub213pd_avx512vl(auVar41,auVar34,auVar36);
      auVar46 = vfmsub213pd_avx512vl(auVar46,auVar34,auVar36);
      auVar42 = vfmsub213pd_avx512vl(auVar42,auVar34,auVar37);
      auVar43 = vfmsub213pd_avx512vl(auVar43,auVar34,auVar37);
      auVar47 = vmulpd_avx512vl(auVar30,auVar44);
      auVar48 = vmulpd_avx512vl(auVar30,auVar45);
      auVar49 = vmulpd_avx512vl(auVar31,auVar46);
      auVar50 = vmulpd_avx512vl(auVar31,auVar41);
      auVar51 = vmulpd_avx512vl(auVar38,auVar43);
      auVar52 = vmulpd_avx512vl(auVar38,auVar42);
      auVar48 = vfmsub231pd_avx512vl(auVar48,auVar38,auVar41);
      auVar47 = vfmsub231pd_avx512vl(auVar47,auVar38,auVar46);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar30,auVar42);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar30,auVar43);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar31,auVar45);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar31,auVar44);
      auVar64._0_8_ = auVar49._0_8_ + auVar49._0_8_;
      auVar64._8_8_ = auVar49._8_8_ + auVar49._8_8_;
      auVar64._16_8_ = auVar49._16_8_ + auVar49._16_8_;
      auVar64._24_8_ = auVar49._24_8_ + auVar49._24_8_;
      auVar49 = vaddpd_avx512vl(auVar50,auVar50);
      auVar50 = vaddpd_avx512vl(auVar51,auVar51);
      auVar51 = vaddpd_avx512vl(auVar52,auVar52);
      auVar102._0_8_ = auVar47._0_8_ + auVar47._0_8_;
      auVar102._8_8_ = auVar47._8_8_ + auVar47._8_8_;
      auVar102._16_8_ = auVar47._16_8_ + auVar47._16_8_;
      auVar102._24_8_ = auVar47._24_8_ + auVar47._24_8_;
      auVar47 = vaddpd_avx512vl(auVar48,auVar48);
      auVar45 = vfmadd231pd_avx512vl(auVar45,auVar32,auVar49);
      auVar44 = vfmadd231pd_avx512vl(auVar44,auVar32,auVar64);
      auVar41 = vfmadd231pd_avx512vl(auVar41,auVar32,auVar51);
      auVar46 = vfmadd231pd_avx512vl(auVar46,auVar32,auVar50);
      auVar42 = vfmadd231pd_avx512vl(auVar42,auVar32,auVar47);
      auVar92._0_8_ = dVar70 * auVar102._0_8_ + auVar43._0_8_;
      auVar92._8_8_ = dVar72 * auVar102._8_8_ + auVar43._8_8_;
      auVar92._16_8_ = dVar73 * auVar102._16_8_ + auVar43._16_8_;
      auVar92._24_8_ = dVar74 * auVar102._24_8_ + auVar43._24_8_;
      auVar43 = vmulpd_avx512vl(auVar30,auVar64);
      auVar48 = vmulpd_avx512vl(auVar30,auVar49);
      auVar52 = vmulpd_avx512vl(auVar31,auVar50);
      auVar53 = vmulpd_avx512vl(auVar31,auVar51);
      auVar54 = vmulpd_avx512vl(auVar38,auVar102);
      auVar55 = vmulpd_avx512vl(auVar38,auVar47);
      auVar48 = vfmsub231pd_avx512vl(auVar48,auVar38,auVar51);
      auVar42 = vaddpd_avx512vl(auVar42,auVar48);
      auVar43 = vfmsub231pd_avx512vl(auVar43,auVar38,auVar50);
      auVar43 = vaddpd_avx512vl(auVar92,auVar43);
      auVar47 = vfmsub231pd_avx512vl(auVar53,auVar30,auVar47);
      auVar45 = vaddpd_avx512vl(auVar45,auVar47);
      auVar47 = vfmsub231pd_avx512vl(auVar52,auVar30,auVar102);
      auVar44 = vaddpd_avx512vl(auVar44,auVar47);
      auVar47 = vfmsub231pd_avx512vl(auVar55,auVar31,auVar49);
      auVar49._0_8_ = dVar75 * auVar64._0_8_ - auVar54._0_8_;
      auVar49._8_8_ = dVar76 * auVar64._8_8_ - auVar54._8_8_;
      auVar49._16_8_ = dVar77 * auVar64._16_8_ - auVar54._16_8_;
      auVar49._24_8_ = dVar78 * auVar64._24_8_ - auVar54._24_8_;
      auVar46 = vaddpd_avx512vl(auVar46,auVar49);
      auVar45 = vmulpd_avx512vl(auVar39,auVar45);
      auVar44 = vmulpd_avx512vl(auVar39,auVar44);
      local_188 = auVar29._0_8_;
      dStack_180 = auVar29._8_8_;
      dStack_178 = auVar29._16_8_;
      dStack_170 = auVar29._24_8_;
      auVar48._0_8_ = local_188 * (auVar47._0_8_ + auVar41._0_8_);
      auVar48._8_8_ = dStack_180 * (auVar47._8_8_ + auVar41._8_8_);
      auVar48._16_8_ = dStack_178 * (auVar47._16_8_ + auVar41._16_8_);
      auVar48._24_8_ = dStack_170 * (auVar47._24_8_ + auVar41._24_8_);
      auVar47._0_8_ = local_188 * auVar46._0_8_;
      auVar47._8_8_ = dStack_180 * auVar46._8_8_;
      auVar47._16_8_ = dStack_178 * auVar46._16_8_;
      auVar47._24_8_ = dStack_170 * auVar46._24_8_;
      auVar41 = vmulpd_avx512vl(auVar33,auVar42);
      auVar43 = vmulpd_avx512vl(auVar33,auVar43);
      auVar24 = vcvtpd2ps_avx512vl(auVar44);
      auVar25 = vcvtpd2ps_avx512vl(auVar45);
      auVar26 = vcvtpd2ps_avx(auVar47);
      auVar42 = vinserti32x4_avx512vl(ZEXT1632(auVar24),auVar25,1);
      auVar24 = vcvtpd2ps_avx(auVar48);
      auVar44._16_16_ = ZEXT116(1) * auVar24;
      auVar44._0_16_ = ZEXT116(0) * auVar24 | ZEXT116(1) * auVar26;
      auVar26 = vcvtpd2ps_avx512vl(auVar43);
      auVar24 = vcvtpd2ps_avx512vl(auVar41);
      auVar41._16_16_ = ZEXT116(1) * auVar24;
      auVar41._0_16_ = ZEXT116(0) * auVar24 | ZEXT116(1) * auVar26;
      auVar26 = vpandq_avx512vl(auVar27,auVar23);
      if (auVar26._0_8_ != 0) {
        auVar23 = vpsllw_avx(auVar27,7);
        auVar45._4_4_ = __real_7f800000;
        auVar45._0_4_ = __real_7f800000;
        auVar45._8_4_ = __real_7f800000;
        auVar45._12_4_ = __real_7f800000;
        auVar45._16_4_ = __real_7f800000;
        auVar45._20_4_ = __real_7f800000;
        auVar45._24_4_ = __real_7f800000;
        auVar45._28_4_ = __real_7f800000;
        uVar18 = vpmovb2m_avx512vl(auVar23);
        auVar43 = vpand_avx2(auVar42,auVar45);
        uVar19 = vpcmpd_avx512vl(auVar43,auVar45,4);
        bVar21 = (byte)uVar18;
        bVar15 = 0xff;
        bVar20 = 0xff;
        if (((byte)uVar19 & bVar21) != 0) {
          auVar43 = vpand_avx2(auVar44,auVar45);
          uVar18 = vpcmpd_avx512vl(auVar43,auVar45,4);
          bVar20 = bVar21 & (byte)uVar18;
        }
        bVar20 = bVar20 & (byte)uVar19;
        if ((bVar20 & bVar21) != 0) {
          auVar43 = vpand_avx2(auVar41,auVar45);
          uVar19 = vpcmpd_avx512vl(auVar43,auVar45,4);
          bVar15 = (byte)uVar19;
        }
        bVar20 = bVar15 & bVar21 & bVar20;
        auVar23 = vmovdqu8_avx512vl(___xmm_01010101010101010101010101010101);
        auVar26[1] = (bVar20 >> 1 & 1) * auVar23[1];
        auVar26[0] = (bVar20 & 1) * auVar23[0];
        auVar26[2] = (bVar20 >> 2 & 1) * auVar23[2];
        auVar26[3] = (bVar20 >> 3 & 1) * auVar23[3];
        auVar26[4] = (bVar20 >> 4 & 1) * auVar23[4];
        auVar26[5] = (bVar20 >> 5 & 1) * auVar23[5];
        auVar26[6] = (bVar20 >> 6 & 1) * auVar23[6];
        auVar26[7] = -((char)bVar20 >> 7) * auVar23[7];
        auVar26._8_8_ = 0;
      }
      auVar43 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar14);
      auVar45 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar14);
      auVar46 = vblendps_avx(auVar45,auVar43,0x24);
      auVar43 = vpermt2ps_avx512vl(auVar43,auVar59,auVar45);
      auVar46 = vpermt2ps_avx512vl(auVar46,auVar9,*(undefined1 (*) [32])(param_2 + lVar14));
      auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar14),auVar60,auVar45);
      auVar47 = vinsertf32x4_avx512vl(auVar43,auVar45._0_16_,1);
      auVar45 = vshuff64x2_avx512vl(auVar43,auVar45,3);
      auVar43 = vxorps_avx512vl(auVar47,auVar40);
      auVar23 = vextractf32x4_avx512vl(auVar43,1);
      auVar47 = vcvtps2pd_avx512vl(auVar23);
      auVar43 = vcvtps2pd_avx(auVar43._0_16_);
      auVar45 = vxorpd_avx512vl(auVar45,auVar40);
      auVar23 = vextractf32x4_avx512vl(auVar45,1);
      auVar48 = vcvtps2pd_avx512vl(auVar23);
      auVar45 = vcvtps2pd_avx(auVar45._0_16_);
      auVar46 = vxorps_avx512vl(auVar46,auVar40);
      auVar23 = vextractf32x4_avx512vl(auVar46,1);
      auVar49 = vcvtps2pd_avx512vl(auVar23);
      auVar46 = vcvtps2pd_avx512vl(auVar46._0_16_);
      auVar50 = vmulpd_avx512vl(auVar30,auVar43);
      auVar51 = vmulpd_avx512vl(auVar30,auVar47);
      auVar55._0_8_ = dVar75 * auVar45._0_8_;
      auVar55._8_8_ = dVar76 * auVar45._8_8_;
      auVar55._16_8_ = dVar77 * auVar45._16_8_;
      auVar55._24_8_ = dVar78 * auVar45._24_8_;
      auVar52 = vmulpd_avx512vl(auVar31,auVar48);
      auVar53 = vmulpd_avx512vl(auVar38,auVar46);
      auVar54 = vmulpd_avx512vl(auVar38,auVar49);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar38,auVar48);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar38,auVar45);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar30,auVar49);
      auVar55 = vfmsub231pd_avx512vl(auVar55,auVar30,auVar46);
      auVar54 = vfmsub231pd_avx512vl(auVar54,auVar31,auVar47);
      dVar83 = dVar75 * auVar43._0_8_ - auVar53._0_8_;
      dVar86 = dVar76 * auVar43._8_8_ - auVar53._8_8_;
      dVar87 = dVar77 * auVar43._16_8_ - auVar53._16_8_;
      dVar88 = dVar78 * auVar43._24_8_ - auVar53._24_8_;
      auVar79._0_8_ = auVar55._0_8_ + auVar55._0_8_;
      auVar79._8_8_ = auVar55._8_8_ + auVar55._8_8_;
      auVar79._16_8_ = auVar55._16_8_ + auVar55._16_8_;
      auVar79._24_8_ = auVar55._24_8_ + auVar55._24_8_;
      auVar81._0_8_ = auVar52._0_8_ + auVar52._0_8_;
      auVar81._8_8_ = auVar52._8_8_ + auVar52._8_8_;
      auVar81._16_8_ = auVar52._16_8_ + auVar52._16_8_;
      auVar81._24_8_ = auVar52._24_8_ + auVar52._24_8_;
      auVar84._0_8_ = dVar83 + dVar83;
      auVar84._8_8_ = dVar86 + dVar86;
      auVar84._16_8_ = dVar87 + dVar87;
      auVar84._24_8_ = dVar88 + dVar88;
      auVar89._0_8_ = auVar54._0_8_ + auVar54._0_8_;
      auVar89._8_8_ = auVar54._8_8_ + auVar54._8_8_;
      auVar89._16_8_ = auVar54._16_8_ + auVar54._16_8_;
      auVar89._24_8_ = auVar54._24_8_ + auVar54._24_8_;
      auVar50 = vaddpd_avx512vl(auVar50,auVar50);
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar47 = vfmadd231pd_avx512vl(auVar47,auVar32,auVar81);
      auVar48 = vfmadd231pd_avx512vl(auVar48,auVar32,auVar89);
      auVar62._0_8_ = dVar70 * auVar84._0_8_ + auVar45._0_8_;
      auVar62._8_8_ = dVar72 * auVar84._8_8_ + auVar45._8_8_;
      auVar62._16_8_ = dVar73 * auVar84._16_8_ + auVar45._16_8_;
      auVar62._24_8_ = dVar74 * auVar84._24_8_ + auVar45._24_8_;
      auVar45 = vfmadd231pd_avx512vl(auVar49,auVar32,auVar51);
      auVar46 = vfmadd231pd_avx512vl(auVar46,auVar32,auVar50);
      auVar49 = vmulpd_avx512vl(auVar30,auVar79);
      auVar52 = vmulpd_avx512vl(auVar30,auVar81);
      auVar96._0_8_ = auVar84._0_8_ * dVar75;
      auVar96._8_8_ = auVar84._8_8_ * dVar76;
      auVar96._16_8_ = auVar84._16_8_ * dVar77;
      auVar96._24_8_ = auVar84._24_8_ * dVar78;
      auVar53 = vmulpd_avx512vl(auVar31,auVar89);
      auVar54 = vmulpd_avx512vl(auVar38,auVar50);
      auVar55 = vmulpd_avx512vl(auVar38,auVar51);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar38,auVar89);
      auVar45 = vaddpd_avx512vl(auVar45,auVar52);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar38,auVar84);
      auVar46 = vaddpd_avx512vl(auVar46,auVar49);
      auVar49 = vfmsub231pd_avx512vl(auVar53,auVar30,auVar51);
      auVar47 = vaddpd_avx512vl(auVar47,auVar49);
      auVar49 = vfmsub231pd_avx512vl(auVar96,auVar30,auVar50);
      auVar50._0_8_ = auVar49._0_8_ + dVar70 * auVar79._0_8_ + auVar43._0_8_;
      auVar50._8_8_ = auVar49._8_8_ + dVar72 * auVar79._8_8_ + auVar43._8_8_;
      auVar50._16_8_ = auVar49._16_8_ + dVar73 * auVar79._16_8_ + auVar43._16_8_;
      auVar50._24_8_ = auVar49._24_8_ + dVar74 * auVar79._24_8_ + auVar43._24_8_;
      auVar43 = vfmsub231pd_avx512vl(auVar55,auVar31,auVar81);
      auVar43 = vaddpd_avx512vl(auVar48,auVar43);
      auVar48 = vfmsub231pd_avx512vl(auVar54,auVar31,auVar79);
      auVar48 = vaddpd_avx512vl(auVar62,auVar48);
      auVar47 = vmulpd_avx512vl(auVar39,auVar47);
      auVar49 = vmulpd_avx512vl(auVar39,auVar50);
      auVar43 = vmulpd_avx512vl(auVar29,auVar43);
      auVar48 = vmulpd_avx512vl(auVar29,auVar48);
      auVar45 = vmulpd_avx512vl(auVar33,auVar45);
      auVar46 = vmulpd_avx512vl(auVar33,auVar46);
      auVar23 = vcvtpd2ps_avx(auVar49);
      auVar24 = vcvtpd2ps_avx512vl(auVar47);
      auVar27 = vcvtpd2ps_avx(auVar48);
      auVar47 = vinserti32x4_avx512vl(ZEXT1632(auVar23),auVar24,1);
      auVar24 = auVar47._0_16_;
      auVar23 = vcvtpd2ps_avx512vl(auVar43);
      auVar43 = vinserti32x4_avx512vl(ZEXT1632(auVar27),auVar23,1);
      auVar23 = vcvtpd2ps_avx512vl(auVar46);
      auVar27 = vcvtpd2ps_avx512vl(auVar45);
      auVar46._16_16_ = ZEXT116(1) * auVar27;
      auVar46._0_16_ = ZEXT116(0) * auVar27 | ZEXT116(1) * auVar23;
      auVar7._4_4_ = __real_01010101;
      auVar7._0_4_ = __real_01010101;
      auVar7._8_4_ = __real_01010101;
      auVar7._12_4_ = __real_01010101;
      auVar23 = vpandd_avx512vl(auVar26,auVar7);
      if (auVar23._0_8_ != 0) {
        auVar23 = vpsllw_avx512vl(auVar26,7);
        auVar45 = vpbroadcastd_avx512vl(ZEXT416(__real_7f800000));
        uVar18 = vpmovb2m_avx512vl(auVar23);
        auVar48 = vpandd_avx512vl(auVar47,auVar45);
        uVar19 = vpcmpd_avx512vl(auVar48,auVar45,4);
        bVar21 = (byte)uVar18;
        bVar15 = 0xff;
        bVar20 = 0xff;
        if (((byte)uVar19 & bVar21) != 0) {
          auVar48 = vpandd_avx512vl(auVar43,auVar45);
          uVar18 = vpcmpd_avx512vl(auVar48,auVar45,4);
          bVar20 = bVar21 & (byte)uVar18;
        }
        bVar20 = bVar20 & (byte)uVar19;
        if ((bVar20 & bVar21) != 0) {
          auVar48 = vpandd_avx512vl(auVar46,auVar45);
          uVar19 = vpcmpd_avx512vl(auVar48,auVar45,4);
          bVar15 = (byte)uVar19;
        }
        bVar20 = bVar15 & bVar21 & bVar20;
        auVar23 = vmovdqu8_avx512vl(___xmm_01010101010101010101010101010101);
        auVar26[1] = (bVar20 >> 1 & 1) * auVar23[1];
        auVar26[0] = (bVar20 & 1) * auVar23[0];
        auVar26[2] = (bVar20 >> 2 & 1) * auVar23[2];
        auVar26[3] = (bVar20 >> 3 & 1) * auVar23[3];
        auVar26[4] = (bVar20 >> 4 & 1) * auVar23[4];
        auVar26[5] = (bVar20 >> 5 & 1) * auVar23[5];
        auVar26[6] = (bVar20 >> 6 & 1) * auVar23[6];
        auVar26[7] = -((char)bVar20 >> 7) * auVar23[7];
        auVar26._8_8_ = 0;
      }
      auVar23 = vpbroadcastb_avx512vl(ZEXT116(DAT_152cac6b1));
      auVar27 = vpandq_avx512vl(auVar26,auVar23);
      auVar48 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar44);
      auVar45 = vmovdqa64_avx512vl(auVar42);
      auVar26 = __ymm_0000000000000002000000000000000900000001000000000000000800000000._0_16_;
      auVar45 = vpermt2ps_avx512vl(auVar45,
                                   ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                   ,auVar44);
      auVar45 = vpermt2ps_avx512vl(auVar45,
                                   ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                   ,auVar48);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar14) = auVar45;
      auVar45 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar48 = vpermt2ps_avx512vl(auVar48,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar42);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar14) = auVar48;
      auVar49 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
      auVar48 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar42 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar41);
      *(undefined1 (*) [32])(param_1 + lVar14) = auVar41;
      auVar41 = vpermt2ps_avx512vl(auVar46,auVar56,auVar43);
      auVar42 = vmovdqa64_avx512vl(auVar47);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar57,auVar43);
      auVar42 = vpermt2ps_avx512vl(auVar42,auVar58,auVar41);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar14) = auVar42;
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar45,auVar47);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar14) = auVar41;
      auVar41 = vpermt2ps_avx512vl(auVar43,auVar48,auVar47);
      auVar41 = vpermt2ps_avx512vl(auVar41,auVar49,auVar46);
      auVar25 = auVar41._0_16_;
      *(undefined1 (*) [32])(param_2 + lVar14) = auVar41;
      lVar14 = lVar14 + 0x60;
      uVar13 = uVar13 + 8;
    } while ((int)uVar13 < (int)(uVar11 & 0xfffffff8));
  }
  auVar9 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar60 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar59 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  if ((int)param_5 <= (int)uVar13) goto LAB_140d1e3ca;
  auVar34 = vpbroadcastd_avx512vl();
  auVar34 = vpor_avx2(auVar34,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar35 = vpbroadcastd_avx512vl();
  uVar17 = vpcmpgtd_avx512vl(auVar35,auVar34);
  auVar23 = vpsllw_avx(auVar27,7);
  uVar19 = vpmovb2m_avx512vl(auVar23);
  bVar15 = (byte)uVar19;
  uVar10 = (ulonglong)uVar13;
  pauVar2 = (undefined1 (*) [32])(param_1 + uVar10 * 0xc);
  bVar20 = (byte)uVar17;
  if (bVar20 == 0xff) {
    auVar36 = pauVar2[1];
    auVar37 = vblendps_avx(auVar36,*pauVar2,0x24);
    auVar38 = vpermt2ps_avx512vl(*pauVar2,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar36);
    auVar43 = vpermt2ps_avx512vl(auVar37,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar2[2]);
    auVar36 = vpermt2ps_avx512vl(pauVar2[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar36);
    auVar56 = vinsertf32x4_avx512vl(auVar38,auVar36._0_16_,1);
    auVar57 = vshuff64x2_avx512vl(auVar38,auVar36,3);
    pauVar12 = (undefined1 (*) [32])(param_2 + uVar10 * 0xc);
    auVar36 = *(undefined1 (*) [32])(param_2 + uVar10 * 0xc);
    auVar37 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar10 * 0xc);
    auVar38 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar10 * 0xc);
    auVar39 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar36,auVar37);
    auVar40 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar38,auVar37);
    auVar42 = vinsertf32x4_avx512vl(auVar39,auVar40._0_16_,1);
    auVar39 = vshuff64x2_avx512vl(auVar39,auVar40,3);
    auVar36 = vblendps_avx(auVar37,auVar36,0x24);
    auVar36 = vpermt2ps_avx512vl(auVar36,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar38);
  }
  else {
    auVar23 = vxorpd_avx512vl(auVar26,auVar26);
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
    auVar56._0_4_ = (uint)(bVar20 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar20 & 1) * auVar23._0_4_;
    bVar6 = (bool)((byte)(uVar17 >> 1) & 1);
    auVar56._4_4_ = (uint)bVar6 * auVar36._4_4_ | (uint)!bVar6 * auVar23._4_4_;
    bVar6 = (bool)((byte)(uVar17 >> 2) & 1);
    auVar56._8_4_ = (uint)bVar6 * auVar36._8_4_ | (uint)!bVar6 * auVar23._8_4_;
    bVar6 = (bool)((byte)(uVar17 >> 3) & 1);
    auVar56._12_4_ = (uint)bVar6 * auVar36._12_4_ | (uint)!bVar6 * auVar23._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar17 >> 4) & 1) * auVar36._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar17 >> 5) & 1) * auVar36._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar17 >> 6) & 1) * auVar36._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar17 >> 7) * auVar36._28_4_;
    auVar23 = vxorpd_avx512vl(auVar111,auVar111);
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar2 * 2));
    auVar57._0_4_ = (uint)(bVar20 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar20 & 1) * auVar23._0_4_;
    bVar6 = (bool)((byte)(uVar17 >> 1) & 1);
    auVar57._4_4_ = (uint)bVar6 * auVar36._4_4_ | (uint)!bVar6 * auVar23._4_4_;
    bVar6 = (bool)((byte)(uVar17 >> 2) & 1);
    auVar57._8_4_ = (uint)bVar6 * auVar36._8_4_ | (uint)!bVar6 * auVar23._8_4_;
    bVar6 = (bool)((byte)(uVar17 >> 3) & 1);
    auVar57._12_4_ = (uint)bVar6 * auVar36._12_4_ | (uint)!bVar6 * auVar23._12_4_;
    auVar57._16_4_ = (uint)((byte)(uVar17 >> 4) & 1) * auVar36._16_4_;
    auVar57._20_4_ = (uint)((byte)(uVar17 >> 5) & 1) * auVar36._20_4_;
    auVar57._24_4_ = (uint)((byte)(uVar17 >> 6) & 1) * auVar36._24_4_;
    auVar57._28_4_ = (uint)(byte)(uVar17 >> 7) * auVar36._28_4_;
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RDI));
    auVar43._4_4_ = (uint)((byte)(uVar17 >> 1) & 1) * auVar36._4_4_;
    auVar43._0_4_ = (uint)(bVar20 & 1) * auVar36._0_4_;
    auVar43._8_4_ = (uint)((byte)(uVar17 >> 2) & 1) * auVar36._8_4_;
    auVar43._12_4_ = (uint)((byte)(uVar17 >> 3) & 1) * auVar36._12_4_;
    auVar43._16_4_ = (uint)((byte)(uVar17 >> 4) & 1) * auVar36._16_4_;
    auVar43._20_4_ = (uint)((byte)(uVar17 >> 5) & 1) * auVar36._20_4_;
    auVar43._24_4_ = (uint)((byte)(uVar17 >> 6) & 1) * auVar36._24_4_;
    auVar43._28_4_ = (uint)(byte)(uVar17 >> 7) * auVar36._28_4_;
    pauVar12 = (undefined1 (*) [32])(param_2 + uVar10 * 0xc);
    auVar23 = vxorps_avx512vl(auVar24,auVar24);
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar12 + unaff_RBX));
    auVar42._0_4_ = (uint)(bVar20 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar20 & 1) * auVar23._0_4_;
    bVar6 = (bool)((byte)(uVar17 >> 1) & 1);
    auVar42._4_4_ = (uint)bVar6 * auVar36._4_4_ | (uint)!bVar6 * auVar23._4_4_;
    bVar6 = (bool)((byte)(uVar17 >> 2) & 1);
    auVar42._8_4_ = (uint)bVar6 * auVar36._8_4_ | (uint)!bVar6 * auVar23._8_4_;
    bVar6 = (bool)((byte)(uVar17 >> 3) & 1);
    auVar42._12_4_ = (uint)bVar6 * auVar36._12_4_ | (uint)!bVar6 * auVar23._12_4_;
    auVar42._16_4_ = (uint)((byte)(uVar17 >> 4) & 1) * auVar36._16_4_;
    auVar42._20_4_ = (uint)((byte)(uVar17 >> 5) & 1) * auVar36._20_4_;
    auVar42._24_4_ = (uint)((byte)(uVar17 >> 6) & 1) * auVar36._24_4_;
    auVar42._28_4_ = (uint)(byte)(uVar17 >> 7) * auVar36._28_4_;
    auVar23 = vxorps_avx512vl(auVar25,auVar25);
    auVar36 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + (longlong)*pauVar12));
    auVar39._0_4_ = (uint)(bVar20 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar20 & 1) * auVar23._0_4_;
    bVar6 = (bool)((byte)(uVar17 >> 1) & 1);
    auVar39._4_4_ = (uint)bVar6 * auVar36._4_4_ | (uint)!bVar6 * auVar23._4_4_;
    bVar6 = (bool)((byte)(uVar17 >> 2) & 1);
    auVar39._8_4_ = (uint)bVar6 * auVar36._8_4_ | (uint)!bVar6 * auVar23._8_4_;
    bVar6 = (bool)((byte)(uVar17 >> 3) & 1);
    auVar39._12_4_ = (uint)bVar6 * auVar36._12_4_ | (uint)!bVar6 * auVar23._12_4_;
    auVar39._16_4_ = (uint)((byte)(uVar17 >> 4) & 1) * auVar36._16_4_;
    auVar39._20_4_ = (uint)((byte)(uVar17 >> 5) & 1) * auVar36._20_4_;
    auVar39._24_4_ = (uint)((byte)(uVar17 >> 6) & 1) * auVar36._24_4_;
    auVar39._28_4_ = (uint)(byte)(uVar17 >> 7) * auVar36._28_4_;
    auVar37 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar12 + unaff_RDI));
    auVar36._4_4_ = (uint)((byte)(uVar17 >> 1) & 1) * auVar37._4_4_;
    auVar36._0_4_ = (uint)(bVar20 & 1) * auVar37._0_4_;
    auVar36._8_4_ = (uint)((byte)(uVar17 >> 2) & 1) * auVar37._8_4_;
    auVar36._12_4_ = (uint)((byte)(uVar17 >> 3) & 1) * auVar37._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar17 >> 4) & 1) * auVar37._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar17 >> 5) & 1) * auVar37._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar17 >> 6) & 1) * auVar37._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar17 >> 7) * auVar37._28_4_;
  }
  auVar38 = vcvtps2pd_avx512vl(auVar56._0_16_);
  auVar23 = vextractf32x4_avx512vl(auVar56,1);
  auVar40 = vcvtps2pd_avx512vl(auVar23);
  auVar41 = vcvtps2pd_avx512vl(auVar57._0_16_);
  auVar23 = vextractf32x4_avx512vl(auVar57,1);
  auVar56 = vcvtps2pd_avx512vl(auVar23);
  auVar57 = vcvtps2pd_avx512vl(auVar43._0_16_);
  auVar43 = vcvtps2pd_avx512vl(auVar43._16_16_);
  auVar58._4_4_ = __real_80000000;
  auVar58._0_4_ = __real_80000000;
  auVar58._8_4_ = __real_80000000;
  auVar58._12_4_ = __real_80000000;
  auVar58._16_4_ = __real_80000000;
  auVar58._20_4_ = __real_80000000;
  auVar58._24_4_ = __real_80000000;
  auVar58._28_4_ = __real_80000000;
  auVar37 = vxorps_avx512vl(auVar42,auVar58);
  auVar39 = vxorps_avx512vl(auVar39,auVar58);
  auVar61._0_4_ = auVar36._0_4_ ^ __real_80000000;
  auVar61._4_4_ = auVar36._4_4_ ^ __real_80000000;
  auVar61._8_4_ = auVar36._8_4_ ^ __real_80000000;
  auVar61._12_4_ = auVar36._12_4_ ^ __real_80000000;
  auVar51._16_4_ = auVar36._16_4_ ^ __real_80000000;
  auVar51._0_16_ = auVar61;
  auVar51._20_4_ = auVar36._20_4_ ^ __real_80000000;
  auVar51._24_4_ = auVar36._24_4_ ^ __real_80000000;
  auVar51._28_4_ = auVar36._28_4_ ^ __real_80000000;
  auVar23 = vextractf32x4_avx512vl(auVar37,1);
  auVar42 = vcvtps2pd_avx512vl(auVar23);
  auVar58 = vcvtps2pd_avx512vl(auVar37._0_16_);
  auVar23 = vextractf32x4_avx512vl(auVar39,1);
  auVar44 = vcvtps2pd_avx512vl(auVar23);
  auVar39 = vcvtps2pd_avx512vl(auVar39._0_16_);
  auVar36 = vcvtps2pd_avx(auVar51._16_16_);
  auVar37 = vcvtps2pd_avx(auVar61);
  local_1a8 = in_ZMM3._0_8_;
  auVar52._8_8_ = local_1a8;
  auVar52._0_8_ = local_1a8;
  auVar52._16_8_ = local_1a8;
  auVar52._24_8_ = local_1a8;
  auVar65._8_8_ = uVar3;
  auVar65._0_8_ = uVar3;
  auVar65._16_8_ = uVar3;
  auVar65._24_8_ = uVar3;
  auVar40 = vfmsub213pd_avx512vl(auVar40,auVar52,auVar65);
  auVar38 = vfmsub213pd_avx512vl(auVar38,auVar52,auVar65);
  auVar66._8_8_ = uVar4;
  auVar66._0_8_ = uVar4;
  auVar66._16_8_ = uVar4;
  auVar66._24_8_ = uVar4;
  auVar56 = vfmsub213pd_avx512vl(auVar56,auVar52,auVar66);
  auVar41 = vfmsub213pd_avx512vl(auVar41,auVar52,auVar66);
  auVar67._8_8_ = uVar5;
  auVar67._0_8_ = uVar5;
  auVar67._16_8_ = uVar5;
  auVar67._24_8_ = uVar5;
  auVar43 = vfmsub213pd_avx512vl(auVar43,auVar52,auVar67);
  auVar57 = vfmsub213pd_avx512vl(auVar57,auVar52,auVar67);
  local_148 = auVar28._0_8_;
  auVar90._8_8_ = local_148;
  auVar90._0_8_ = local_148;
  auVar90._16_8_ = local_148;
  auVar90._24_8_ = local_148;
  auVar28 = vmulpd_avx512vl(auVar30,auVar38);
  auVar45 = vmulpd_avx512vl(auVar30,auVar40);
  auVar46 = vmulpd_avx512vl(auVar31,auVar41);
  auVar47 = vmulpd_avx512vl(auVar31,auVar56);
  auVar48 = vmulpd_avx512vl(auVar90,auVar57);
  auVar49 = vmulpd_avx512vl(auVar90,auVar43);
  auVar45 = vfmsub231pd_avx512vl(auVar45,auVar90,auVar56);
  auVar28 = vfmsub231pd_avx512vl(auVar28,auVar90,auVar41);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar30,auVar43);
  auVar46 = vfmsub231pd_avx512vl(auVar46,auVar30,auVar57);
  auVar49 = vfmsub231pd_avx512vl(auVar49,auVar31,auVar40);
  auVar48 = vfmsub231pd_avx512vl(auVar48,auVar31,auVar38);
  auVar46 = vaddpd_avx512vl(auVar46,auVar46);
  auVar47 = vaddpd_avx512vl(auVar47,auVar47);
  auVar48 = vaddpd_avx512vl(auVar48,auVar48);
  auVar49 = vaddpd_avx512vl(auVar49,auVar49);
  auVar53._0_8_ = auVar28._0_8_ + auVar28._0_8_;
  auVar53._8_8_ = auVar28._8_8_ + auVar28._8_8_;
  auVar53._16_8_ = auVar28._16_8_ + auVar28._16_8_;
  auVar53._24_8_ = auVar28._24_8_ + auVar28._24_8_;
  auVar97._0_8_ = auVar45._0_8_ + auVar45._0_8_;
  auVar97._8_8_ = auVar45._8_8_ + auVar45._8_8_;
  auVar97._16_8_ = auVar45._16_8_ + auVar45._16_8_;
  auVar97._24_8_ = auVar45._24_8_ + auVar45._24_8_;
  auVar28 = vfmadd231pd_avx512vl(auVar40,auVar32,auVar47);
  auVar38 = vfmadd231pd_avx512vl(auVar38,auVar32,auVar46);
  auVar40 = vfmadd231pd_avx512vl(auVar56,auVar32,auVar49);
  auVar41 = vfmadd231pd_avx512vl(auVar41,auVar32,auVar48);
  auVar43 = vfmadd231pd_avx512vl(auVar43,auVar32,auVar97);
  auVar56 = vfmadd231pd_avx512vl(auVar57,auVar32,auVar53);
  auVar57 = vmulpd_avx512vl(auVar30,auVar46);
  auVar45 = vmulpd_avx512vl(auVar30,auVar47);
  auVar50 = vmulpd_avx512vl(auVar31,auVar48);
  auVar51 = vmulpd_avx512vl(auVar31,auVar49);
  auVar52 = vmulpd_avx512vl(auVar90,auVar53);
  auVar45 = vfmsub231pd_avx512vl(auVar45,auVar90,auVar49);
  auVar68._0_8_ = local_148 * auVar48._0_8_ - auVar57._0_8_;
  auVar68._8_8_ = local_148 * auVar48._8_8_ - auVar57._8_8_;
  auVar68._16_8_ = local_148 * auVar48._16_8_ - auVar57._16_8_;
  auVar68._24_8_ = local_148 * auVar48._24_8_ - auVar57._24_8_;
  auVar57 = vfmsub231pd_avx512vl(auVar51,auVar30,auVar97);
  auVar48 = vfmsub231pd_avx512vl(auVar50,auVar30,auVar53);
  auVar85._0_8_ = dVar75 * auVar47._0_8_ - local_148 * auVar97._0_8_;
  auVar85._8_8_ = dVar76 * auVar47._8_8_ - local_148 * auVar97._8_8_;
  auVar85._16_8_ = dVar77 * auVar47._16_8_ - local_148 * auVar97._16_8_;
  auVar85._24_8_ = dVar78 * auVar47._24_8_ - local_148 * auVar97._24_8_;
  auVar46 = vfmsub231pd_avx512vl(auVar52,auVar31,auVar46);
  auVar47 = vmulpd_avx512vl(auVar30,auVar58);
  auVar49 = vmulpd_avx512vl(auVar30,auVar42);
  dVar83 = auVar39._0_8_;
  auVar93._0_8_ = dVar75 * dVar83;
  dVar86 = auVar39._8_8_;
  auVar93._8_8_ = dVar76 * dVar86;
  dVar87 = auVar39._16_8_;
  auVar93._16_8_ = dVar77 * dVar87;
  dVar88 = auVar39._24_8_;
  auVar93._24_8_ = dVar78 * dVar88;
  auVar39 = vmulpd_avx512vl(auVar31,auVar44);
  auVar98._0_8_ = local_148 * auVar36._0_8_;
  auVar98._8_8_ = local_148 * auVar36._8_8_;
  auVar98._16_8_ = local_148 * auVar36._16_8_;
  auVar98._24_8_ = local_148 * auVar36._24_8_;
  auVar49 = vfmsub231pd_avx512vl(auVar49,auVar90,auVar44);
  auVar54._0_8_ = local_148 * dVar83 - auVar47._0_8_;
  auVar54._8_8_ = local_148 * dVar86 - auVar47._8_8_;
  auVar54._16_8_ = local_148 * dVar87 - auVar47._16_8_;
  auVar54._24_8_ = local_148 * dVar88 - auVar47._24_8_;
  auVar39 = vfmsub231pd_avx512vl(auVar39,auVar30,auVar36);
  auVar47 = vfmsub231pd_avx512vl(auVar93,auVar30,auVar37);
  auVar50 = vfmsub231pd_avx512vl(auVar98,auVar31,auVar42);
  auVar103._0_8_ = local_148 * auVar37._0_8_;
  auVar103._8_8_ = local_148 * auVar37._8_8_;
  auVar103._16_8_ = local_148 * auVar37._16_8_;
  auVar103._24_8_ = local_148 * auVar37._24_8_;
  auVar51 = vfmsub231pd_avx512vl(auVar103,auVar31,auVar58);
  auVar94._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar94._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  auVar94._16_8_ = auVar47._16_8_ + auVar47._16_8_;
  auVar94._24_8_ = auVar47._24_8_ + auVar47._24_8_;
  auVar95._0_8_ = auVar39._0_8_ + auVar39._0_8_;
  auVar95._8_8_ = auVar39._8_8_ + auVar39._8_8_;
  auVar95._16_8_ = auVar39._16_8_ + auVar39._16_8_;
  auVar95._24_8_ = auVar39._24_8_ + auVar39._24_8_;
  dVar101 = auVar51._0_8_ + auVar51._0_8_;
  dVar105 = auVar51._8_8_ + auVar51._8_8_;
  dVar106 = auVar51._16_8_ + auVar51._16_8_;
  dVar107 = auVar51._24_8_ + auVar51._24_8_;
  auVar99._0_8_ = auVar50._0_8_ + auVar50._0_8_;
  auVar99._8_8_ = auVar50._8_8_ + auVar50._8_8_;
  auVar99._16_8_ = auVar50._16_8_ + auVar50._16_8_;
  auVar99._24_8_ = auVar50._24_8_ + auVar50._24_8_;
  auVar39 = vaddpd_avx512vl(auVar54,auVar54);
  auVar91._0_8_ = auVar49._0_8_ + auVar49._0_8_;
  auVar91._8_8_ = auVar49._8_8_ + auVar49._8_8_;
  auVar91._16_8_ = auVar49._16_8_ + auVar49._16_8_;
  auVar91._24_8_ = auVar49._24_8_ + auVar49._24_8_;
  auVar42 = vfmadd231pd_avx512vl(auVar42,auVar32,auVar95);
  auVar58 = vfmadd231pd_avx512vl(auVar58,auVar32,auVar94);
  auVar44 = vfmadd231pd_avx512vl(auVar44,auVar32,auVar99);
  auVar80._0_8_ = dVar70 * dVar101 + dVar83;
  auVar80._8_8_ = dVar72 * dVar105 + dVar86;
  auVar80._16_8_ = dVar73 * dVar106 + dVar87;
  auVar80._24_8_ = dVar74 * dVar107 + dVar88;
  auVar82._0_8_ = dVar70 * auVar91._0_8_ + auVar36._0_8_;
  auVar82._8_8_ = dVar72 * auVar91._8_8_ + auVar36._8_8_;
  auVar82._16_8_ = dVar73 * auVar91._16_8_ + auVar36._16_8_;
  auVar82._24_8_ = dVar74 * auVar91._24_8_ + auVar36._24_8_;
  auVar32 = vfmadd213pd_avx512vl(auVar32,auVar39,auVar37);
  auVar36 = vmulpd_avx512vl(auVar30,auVar94);
  auVar63._0_8_ = dVar101 * dVar75;
  auVar63._8_8_ = dVar105 * dVar76;
  auVar63._16_8_ = dVar106 * dVar77;
  auVar63._24_8_ = dVar107 * dVar78;
  auVar37 = vmulpd_avx512vl(auVar30,auVar95);
  auVar104._0_8_ = local_148 * auVar99._0_8_ - auVar37._0_8_;
  auVar104._8_8_ = local_148 * auVar99._8_8_ - auVar37._8_8_;
  auVar104._16_8_ = local_148 * auVar99._16_8_ - auVar37._16_8_;
  auVar104._24_8_ = local_148 * auVar99._24_8_ - auVar37._24_8_;
  auVar100._0_8_ = auVar99._0_8_ * dVar75;
  auVar100._8_8_ = auVar99._8_8_ * dVar76;
  auVar100._16_8_ = auVar99._16_8_ * dVar77;
  auVar100._24_8_ = auVar99._24_8_ * dVar78;
  auVar37 = vfmsub231pd_avx512vl(auVar100,auVar30,auVar91);
  auVar30 = vfmsub231pd_avx512vl(auVar63,auVar30,auVar39);
  auVar39 = vmulpd_avx512vl(auVar90,auVar39);
  auVar47 = vmulpd_avx512vl(auVar90,auVar91);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar31,auVar95);
  auVar31 = vfmsub231pd_avx512vl(auVar39,auVar31,auVar94);
  uVar19 = vpcmpgtd_avx512vl(auVar35,auVar34);
  bVar21 = bVar15 & (byte)uVar19;
  auVar34 = vaddpd_avx512vl(auVar43,auVar45);
  auVar35 = vaddpd_avx512vl(auVar56,auVar68);
  auVar28 = vaddpd_avx512vl(auVar28,auVar57);
  auVar38 = vaddpd_avx512vl(auVar38,auVar48);
  auVar39 = vaddpd_avx512vl(auVar40,auVar85);
  auVar40 = vaddpd_avx512vl(auVar41,auVar46);
  auVar41 = vaddpd_avx512vl(auVar82,auVar104);
  auVar71._0_8_ = (local_148 * dVar101 - auVar36._0_8_) + auVar32._0_8_;
  auVar71._8_8_ = (local_148 * dVar105 - auVar36._8_8_) + auVar32._8_8_;
  auVar71._16_8_ = (local_148 * dVar106 - auVar36._16_8_) + auVar32._16_8_;
  auVar71._24_8_ = (local_148 * dVar107 - auVar36._24_8_) + auVar32._24_8_;
  auVar32 = vaddpd_avx512vl(auVar42,auVar37);
  auVar30 = vaddpd_avx512vl(auVar58,auVar30);
  auVar36 = vaddpd_avx512vl(auVar44,auVar47);
  auVar31 = vaddpd_avx512vl(auVar80,auVar31);
  auVar111._8_8_ = 0;
  auVar111._0_8_ = uVar1;
  auVar37 = vbroadcastsd_avx512vl(auVar111);
  auVar28 = vmulpd_avx512vl(auVar37,auVar28);
  auVar38 = vmulpd_avx512vl(auVar37,auVar38);
  auVar32 = vmulpd_avx512vl(auVar37,auVar32);
  auVar30 = vmulpd_avx512vl(auVar37,auVar30);
  auVar37 = vmulpd_avx512vl(auVar29,auVar39);
  auVar39 = vmulpd_avx512vl(auVar29,auVar40);
  auVar36 = vmulpd_avx512vl(auVar29,auVar36);
  auVar29 = vmulpd_avx512vl(auVar29,auVar31);
  auVar40._0_8_ = auVar33._0_8_ * auVar34._0_8_;
  auVar40._8_8_ = auVar33._8_8_ * auVar34._8_8_;
  auVar40._16_8_ = auVar33._16_8_ * auVar34._16_8_;
  auVar40._24_8_ = auVar33._24_8_ * auVar34._24_8_;
  auVar69._0_8_ = auVar33._0_8_ * auVar35._0_8_;
  auVar69._8_8_ = auVar33._8_8_ * auVar35._8_8_;
  auVar69._16_8_ = auVar33._16_8_ * auVar35._16_8_;
  auVar69._24_8_ = auVar33._24_8_ * auVar35._24_8_;
  auVar31 = vmulpd_avx512vl(auVar33,auVar41);
  auVar23 = vcvtpd2ps_avx512vl(auVar38);
  auVar33 = vmulpd_avx512vl(auVar33,auVar71);
  auVar26 = vcvtpd2ps_avx512vl(auVar28);
  auVar38._16_16_ = ZEXT116(1) * auVar26;
  auVar38._0_16_ = ZEXT116(0) * auVar26 | ZEXT116(1) * auVar23;
  auVar27 = vcvtpd2ps_avx512vl(auVar39);
  auVar24 = vcvtpd2ps_avx512vl(auVar37);
  auVar23 = vcvtpd2ps_avx(auVar69);
  auVar26 = vcvtpd2ps_avx(auVar40);
  auVar37._16_16_ = ZEXT116(1) * auVar24;
  auVar37._0_16_ = ZEXT116(0) * auVar24 | ZEXT116(1) * auVar27;
  auVar35._16_16_ = ZEXT116(1) * auVar26;
  auVar35._0_16_ = ZEXT116(0) * auVar26 | ZEXT116(1) * auVar23;
  auVar23 = vcvtpd2ps_avx(auVar30);
  auVar26 = vcvtpd2ps_avx512vl(auVar32);
  auVar34._16_16_ = ZEXT116(1) * auVar26;
  auVar34._0_16_ = ZEXT116(0) * auVar26 | ZEXT116(1) * auVar23;
  auVar23 = vcvtpd2ps_avx512vl(auVar29);
  auVar26 = vcvtpd2ps_avx512vl(auVar36);
  auVar28._16_16_ = ZEXT116(1) * auVar26;
  auVar28._0_16_ = ZEXT116(0) * auVar26 | ZEXT116(1) * auVar23;
  auVar23 = vcvtpd2ps_avx512vl(auVar33);
  auVar26 = vcvtpd2ps_avx512vl(auVar31);
  auVar29 = vinserti32x4_avx512vl(ZEXT1632(auVar23),auVar26,1);
  bVar22 = bVar15;
  if (bVar21 != 0) {
    auVar30 = vpbroadcastd_avx512vl(ZEXT416(__real_7f800000));
    auVar31 = vpandd_avx512vl(auVar38,auVar30);
    uVar19 = vpcmpd_avx512vl(auVar31,auVar30,4);
    bVar22 = (byte)uVar19;
    if ((bVar22 & bVar21) == 0) {
      if ((bVar22 & bVar21) == 0) goto LAB_140d1e1fc;
LAB_140d1e22d:
      auVar31 = vpandd_avx512vl(auVar35,auVar30);
      uVar19 = vpcmpd_avx512vl(auVar31,auVar30,4);
      bVar21 = bVar21 & (byte)uVar19 & bVar22;
      bVar22 = 0;
      if (bVar21 == 0) goto LAB_140d1e28f;
    }
    else {
      auVar31 = vpandd_avx512vl(auVar37,auVar30);
      uVar19 = vpcmpd_avx512vl(auVar31,auVar30,4);
      bVar22 = bVar21 & (byte)uVar19 & bVar22;
      if ((bVar22 & bVar21) != 0) goto LAB_140d1e22d;
LAB_140d1e1fc:
      bVar21 = bVar21 & bVar22;
      if (bVar21 == 0) {
        bVar22 = 0;
        goto LAB_140d1e28f;
      }
    }
    auVar31 = vpandd_avx512vl(auVar34,auVar30);
    uVar19 = vpcmpd_avx512vl(auVar31,auVar30,4);
    bVar16 = 0xff;
    bVar22 = 0xff;
    if ((bVar21 & (byte)uVar19) != 0) {
      auVar31 = vpandd_avx512vl(auVar28,auVar30);
      uVar18 = vpcmpd_avx512vl(auVar31,auVar30,4);
      bVar22 = bVar21 & (byte)uVar18;
    }
    bVar22 = bVar22 & (byte)uVar19;
    if ((bVar22 & bVar21) != 0) {
      auVar31 = vpandd_avx512vl(auVar29,auVar30);
      uVar19 = vpcmpd_avx512vl(auVar31,auVar30,4);
      bVar16 = (byte)uVar19;
    }
    bVar22 = bVar21 & bVar16 & bVar22;
  }
LAB_140d1e28f:
  bVar15 = bVar22 & bVar20 | ~bVar20 & bVar15;
  if (bVar20 == 0xff) {
    auVar31 = vpermt2ps_avx512vl(auVar35,
                                 ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar37);
    auVar30 = vpermt2ps_avx512vl(auVar38,
                                 ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar37);
    auVar30 = vpermt2ps_avx512vl(auVar30,
                                 ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar31);
    *pauVar2 = auVar30;
    auVar30 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
    auVar31 = vpermt2ps_avx512vl(auVar31,
                                 ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar38);
    pauVar2[1] = auVar31;
    auVar33 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
    auVar31 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
    auVar32 = vpermt2ps_avx512vl(auVar37,
                                 ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                 ,auVar38);
    auVar32 = vpermt2ps_avx512vl(auVar32,
                                 ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar35);
    pauVar2[2] = auVar32;
    auVar59 = vpermi2ps_avx512vl(auVar59,auVar29,auVar28);
    auVar60 = vpermi2ps_avx512vl(auVar60,auVar34,auVar28);
    auVar60 = vpermt2ps_avx512vl(auVar60,auVar9,auVar59);
    *pauVar12 = auVar60;
    auVar30 = vpermt2ps_avx512vl(auVar59,auVar30,auVar34);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar10 * 0xc) = auVar30;
    auVar30 = vpermt2ps_avx512vl(auVar28,auVar31,auVar34);
    auVar29 = vpermt2ps_avx512vl(auVar30,auVar33,auVar29);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar10 * 0xc) = auVar29;
  }
  else {
    vscatterdps_avx512vl(ZEXT832(pauVar2) + auVar28,uVar17,auVar38);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar17,
               auVar37);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar17,
               auVar35);
    vscatterdps_avx512vl(ZEXT832(pauVar12) + auVar28,uVar17,auVar34);
    vscatterdps_avx512vl
              (ZEXT832(pauVar12) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar17,
               auVar28);
    vscatterdps_avx512vl
              (ZEXT832(pauVar12) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar17,
               auVar29);
  }
  auVar23 = vmovdqu8_avx512vl(___xmm_01010101010101010101010101010101);
  auVar27[1] = (bVar15 >> 1 & 1) * auVar23[1];
  auVar27[0] = (bVar15 & 1) * auVar23[0];
  auVar27[2] = (bVar15 >> 2 & 1) * auVar23[2];
  auVar27[3] = (bVar15 >> 3 & 1) * auVar23[3];
  auVar27[4] = (bVar15 >> 4 & 1) * auVar23[4];
  auVar27[5] = (bVar15 >> 5 & 1) * auVar23[5];
  auVar27[6] = (bVar15 >> 6 & 1) * auVar23[6];
  auVar27[7] = -((char)bVar15 >> 7) * auVar23[7];
  auVar27._8_8_ = 0;
LAB_140d1e3ca:
  auVar8._4_4_ = __real_01010101;
  auVar8._0_4_ = __real_01010101;
  auVar8._8_4_ = __real_01010101;
  auVar8._12_4_ = __real_01010101;
  auVar23 = vpandd_avx512vl(auVar27,auVar8);
  return CONCAT71(auVar23._1_7_,auVar23._0_8_ == 0x101010101010101);
}

