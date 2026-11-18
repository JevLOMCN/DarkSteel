// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// GetClothingSimulationData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_REFs_5B__c_unFVector_5D_CundCuni_avx512skx @ 140cb7b10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetClothingSimulationData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_REFs_5B__c_unFVector_5D_CundCuni_avx512skx
               (longlong param_1,longlong param_2,undefined1 (*param_3) [32],ulonglong *param_4,
               ulonglong param_5,uint param_6)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  ulonglong uVar12;
  longlong unaff_RBP;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar65;
  double dVar66;
  undefined1 auVar62 [32];
  double dVar67;
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  double dVar68;
  double dVar74;
  double dVar75;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  double dVar76;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
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
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ulonglong local_e8;
  
  auVar24 = vmulpd_avx512vl(*param_3,
                            ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000)
  ;
  uVar3 = *(ulonglong *)param_3[1];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar3;
  uVar4 = *(ulonglong *)(param_3[1] + 8);
  uVar5 = *(ulonglong *)(param_3[1] + 0x10);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  auVar28._24_8_ = 0;
  auVar28._0_24_ = *(undefined1 (*) [24])param_3[2];
  auVar25._8_8_ = __real_7fffffffffffffff;
  auVar25._0_8_ = __real_7fffffffffffffff;
  auVar25._16_8_ = __real_7fffffffffffffff;
  auVar25._24_8_ = __real_7fffffffffffffff;
  auVar25 = vandpd_avx512vl(auVar28,auVar25);
  auVar26._8_8_ = __real_3e45798ee2308c3a;
  auVar26._0_8_ = __real_3e45798ee2308c3a;
  auVar26._16_8_ = __real_3e45798ee2308c3a;
  auVar26._24_8_ = __real_3e45798ee2308c3a;
  uVar18 = vcmppd_avx512vl(auVar25,auVar26,6);
  uVar18 = uVar18 & 0xf;
  auVar25 = vrcp14pd_avx512vl(auVar28);
  auVar27._8_8_ = __real_4000000000000000;
  auVar27._0_8_ = __real_4000000000000000;
  auVar27._16_8_ = __real_4000000000000000;
  auVar27._24_8_ = __real_4000000000000000;
  auVar26 = vfnmadd213pd_avx512vl(auVar28,auVar25,auVar27);
  auVar25 = vmulpd_avx512vl(auVar25,auVar26);
  uVar1 = (ulonglong)((byte)uVar18 & 1) * auVar25._0_8_;
  auVar19._8_8_ = (ulonglong)((byte)(uVar18 >> 1) & 1) * auVar25._8_8_;
  auVar19._0_8_ = uVar1;
  auVar30._16_8_ = (ulonglong)((byte)(uVar18 >> 2) & 1) * auVar25._16_8_;
  auVar30._0_16_ = auVar19;
  auVar30._24_8_ = (uVar18 >> 3) * auVar25._24_8_;
  uVar13 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar13 = param_6;
  }
  auVar27 = vpermpd_avx512vl(auVar24,0x55);
  auVar28 = vpermpd_avx512vl(auVar24,0xaa);
  auVar29 = vpermpd_avx512vl(auVar24,0xff);
  auVar25 = vpermpd_avx2(auVar30,0x55);
  auVar26 = vpermpd_avx2(auVar30,0xaa);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar5;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar4;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = uVar3;
  dVar57 = auVar28._0_8_;
  dVar58 = auVar28._8_8_;
  dVar59 = auVar28._16_8_;
  dVar60 = auVar28._24_8_;
  if ((int)(uVar13 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    auVar89._8_8_ = 0;
    auVar89._0_8_ = param_5;
    auVar30 = vbroadcastsd_avx512vl(auVar89);
    auVar31 = vbroadcastsd_avx512vl(auVar88);
    auVar32 = vbroadcastsd_avx512vl(auVar23);
    auVar33 = vbroadcastsd_avx512vl(auVar22);
    auVar34 = vbroadcastsd_avx512vl(auVar24._0_16_);
    auVar35 = vbroadcastsd_avx512vl(auVar19);
    lVar16 = 0x40;
    uVar15 = 0;
    auVar36 = vbroadcastss_avx512vl(ZEXT416(__real_80000000));
    do {
      auVar56 = ___ymm_00000008000000020000000c00000007000000010000000b0000000600000000;
      auVar55 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
      auVar40 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar16);
      auVar42 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar16);
      auVar41 = vblendps_avx(auVar42,auVar40,0x24);
      auVar37 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar42);
      auVar38 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(param_1 + lVar16));
      auVar39 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar16),
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar42);
      auVar40 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar16);
      auVar42 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar16);
      auVar41 = vblendps_avx(auVar42,auVar40,0x24);
      auVar40 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(param_2 + lVar16));
      auVar42 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar16),
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar42);
      auVar43 = vinsertf32x4_avx512vl(auVar40,auVar42._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar40,auVar42,3);
      auVar44 = vcvtps2pd_avx512vl(auVar39._0_16_);
      auVar45 = vcvtps2pd_avx512vl(auVar37._0_16_);
      auVar19 = vextractf32x4_avx512vl(auVar39,1);
      auVar39 = vcvtps2pd_avx512vl(auVar19);
      auVar19 = vextractf32x4_avx512vl(auVar37,1);
      auVar37 = vcvtps2pd_avx512vl(auVar19);
      auVar46 = vcvtps2pd_avx512vl(auVar38._16_16_);
      auVar40 = vcvtps2pd_avx(auVar38._0_16_);
      uVar18 = *param_4;
      auVar48._8_8_ = uVar18;
      auVar48._0_8_ = uVar18;
      auVar48._16_8_ = uVar18;
      auVar48._24_8_ = uVar18;
      auVar38 = vfmadd213pd_avx512vl(auVar45,auVar30,auVar48);
      auVar44 = vfmadd213pd_avx512vl(auVar44,auVar30,auVar48);
      uVar18 = param_4[1];
      auVar45._8_8_ = uVar18;
      auVar45._0_8_ = uVar18;
      auVar45._16_8_ = uVar18;
      auVar45._24_8_ = uVar18;
      auVar37 = vfmadd213pd_avx512vl(auVar37,auVar30,auVar45);
      auVar39 = vfmadd213pd_avx512vl(auVar39,auVar30,auVar45);
      uVar18 = param_4[2];
      auVar50._8_8_ = uVar18;
      auVar50._0_8_ = uVar18;
      auVar50._16_8_ = uVar18;
      auVar50._24_8_ = uVar18;
      auVar45 = vfmadd213pd_avx512vl(auVar40,auVar30,auVar50);
      auVar46 = vfmadd213pd_avx512vl(auVar46,auVar30,auVar50);
      auVar43 = vxorps_avx512vl(auVar43,auVar36);
      auVar42 = vxorpd_avx512vl(auVar42,auVar36);
      auVar41 = vxorps_avx512vl(auVar41,auVar36);
      auVar19 = vextractf32x4_avx512vl(auVar43,1);
      auVar40 = vcvtps2pd_avx(auVar19);
      auVar43 = vcvtps2pd_avx512vl(auVar43._0_16_);
      auVar19 = vextractf32x4_avx512vl(auVar42,1);
      auVar47 = vcvtps2pd_avx512vl(auVar19);
      auVar48 = vcvtps2pd_avx512vl(auVar42._0_16_);
      auVar19 = vextractf32x4_avx512vl(auVar41,1);
      auVar49 = vcvtps2pd_avx512vl(auVar19);
      auVar42 = vcvtps2pd_avx(auVar41._0_16_);
      auVar41 = vsubpd_avx512vl(auVar44,auVar31);
      auVar38 = vsubpd_avx512vl(auVar38,auVar31);
      auVar39 = vsubpd_avx512vl(auVar39,auVar32);
      auVar37 = vsubpd_avx512vl(auVar37,auVar32);
      auVar44 = vsubpd_avx512vl(auVar46,auVar33);
      auVar45 = vsubpd_avx512vl(auVar45,auVar33);
      auVar46 = vmulpd_avx512vl(auVar27,auVar38);
      auVar50 = vmulpd_avx512vl(auVar27,auVar41);
      auVar51 = vmulpd_avx512vl(auVar28,auVar37);
      auVar52 = vmulpd_avx512vl(auVar28,auVar39);
      auVar53 = vmulpd_avx512vl(auVar34,auVar45);
      auVar54 = vmulpd_avx512vl(auVar34,auVar44);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar39);
      auVar46 = vfmsub231pd_avx512vl(auVar46,auVar34,auVar37);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar27,auVar44);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar27,auVar45);
      auVar54 = vfmsub231pd_avx512vl(auVar54,auVar28,auVar41);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar28,auVar38);
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar52 = vaddpd_avx512vl(auVar52,auVar52);
      auVar62._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar62._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar62._16_8_ = auVar53._16_8_ + auVar53._16_8_;
      auVar62._24_8_ = auVar53._24_8_ + auVar53._24_8_;
      auVar69._0_8_ = auVar54._0_8_ + auVar54._0_8_;
      auVar69._8_8_ = auVar54._8_8_ + auVar54._8_8_;
      auVar69._16_8_ = auVar54._16_8_ + auVar54._16_8_;
      auVar69._24_8_ = auVar54._24_8_ + auVar54._24_8_;
      auVar77._0_8_ = auVar46._0_8_ + auVar46._0_8_;
      auVar77._8_8_ = auVar46._8_8_ + auVar46._8_8_;
      auVar77._16_8_ = auVar46._16_8_ + auVar46._16_8_;
      auVar77._24_8_ = auVar46._24_8_ + auVar46._24_8_;
      auVar46 = vaddpd_avx512vl(auVar50,auVar50);
      auVar41 = vfmadd231pd_avx512vl(auVar41,auVar29,auVar52);
      auVar38 = vfmadd231pd_avx512vl(auVar38,auVar29,auVar51);
      auVar39 = vfmadd231pd_avx512vl(auVar39,auVar29,auVar69);
      auVar37 = vfmadd231pd_avx512vl(auVar37,auVar29,auVar62);
      auVar44 = vfmadd231pd_avx512vl(auVar44,auVar29,auVar46);
      auVar45 = vfmadd231pd_avx512vl(auVar45,auVar29,auVar77);
      auVar50 = vmulpd_avx512vl(auVar27,auVar52);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar69);
      auVar44 = vaddpd_avx512vl(auVar44,auVar50);
      auVar50 = vmulpd_avx512vl(auVar27,auVar51);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar62);
      auVar70._0_8_ = dVar57 * auVar69._0_8_;
      auVar70._8_8_ = dVar58 * auVar69._8_8_;
      auVar70._16_8_ = dVar59 * auVar69._16_8_;
      auVar70._24_8_ = dVar60 * auVar69._24_8_;
      auVar45 = vaddpd_avx512vl(auVar45,auVar50);
      auVar50 = vmulpd_avx512vl(auVar34,auVar77);
      auVar53 = vfmsub231pd_avx512vl(auVar70,auVar27,auVar46);
      auVar46 = vmulpd_avx512vl(auVar34,auVar46);
      auVar41 = vaddpd_avx512vl(auVar41,auVar53);
      auVar53._0_8_ = auVar27._0_8_ * auVar77._0_8_ - dVar57 * auVar62._0_8_;
      auVar53._8_8_ = auVar27._8_8_ * auVar77._8_8_ - dVar58 * auVar62._8_8_;
      auVar53._16_8_ = auVar27._16_8_ * auVar77._16_8_ - dVar59 * auVar62._16_8_;
      auVar53._24_8_ = auVar27._24_8_ * auVar77._24_8_ - dVar60 * auVar62._24_8_;
      auVar38 = vaddpd_avx512vl(auVar38,auVar53);
      auVar46 = vfmsub231pd_avx512vl(auVar46,auVar28,auVar52);
      auVar39 = vaddpd_avx512vl(auVar39,auVar46);
      auVar46 = vfmsub231pd_avx512vl(auVar50,auVar28,auVar51);
      auVar37 = vaddpd_avx512vl(auVar37,auVar46);
      auVar46 = vmulpd_avx512vl(auVar27,auVar43);
      auVar50 = vmulpd_avx512vl(auVar27,auVar40);
      auVar51 = vmulpd_avx512vl(auVar28,auVar48);
      auVar52 = vmulpd_avx512vl(auVar28,auVar47);
      auVar53 = vmulpd_avx512vl(auVar34,auVar42);
      auVar54 = vmulpd_avx512vl(auVar34,auVar49);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar47);
      auVar46 = vfmsub231pd_avx512vl(auVar46,auVar34,auVar48);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar27,auVar49);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar27,auVar42);
      dVar68 = dVar57 * auVar40._0_8_ - auVar54._0_8_;
      dVar74 = dVar58 * auVar40._8_8_ - auVar54._8_8_;
      dVar75 = dVar59 * auVar40._16_8_ - auVar54._16_8_;
      dVar76 = dVar60 * auVar40._24_8_ - auVar54._24_8_;
      dVar61 = dVar57 * auVar43._0_8_ - auVar53._0_8_;
      dVar65 = dVar58 * auVar43._8_8_ - auVar53._8_8_;
      dVar66 = dVar59 * auVar43._16_8_ - auVar53._16_8_;
      dVar67 = dVar60 * auVar43._24_8_ - auVar53._24_8_;
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar52 = vaddpd_avx512vl(auVar52,auVar52);
      auVar54._0_8_ = dVar61 + dVar61;
      auVar54._8_8_ = dVar65 + dVar65;
      auVar54._16_8_ = dVar66 + dVar66;
      auVar54._24_8_ = dVar67 + dVar67;
      auVar71._0_8_ = dVar68 + dVar68;
      auVar71._8_8_ = dVar74 + dVar74;
      auVar71._16_8_ = dVar75 + dVar75;
      auVar71._24_8_ = dVar76 + dVar76;
      auVar46 = vaddpd_avx512vl(auVar46,auVar46);
      auVar50 = vaddpd_avx512vl(auVar50,auVar50);
      auVar49 = vfmadd231pd_avx512vl(auVar49,auVar29,auVar50);
      auVar42 = vfmadd231pd_avx512vl(auVar42,auVar29,auVar46);
      auVar53 = vmulpd_avx512vl(auVar27,auVar52);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar34,auVar71);
      auVar78._0_8_ = auVar49._0_8_ + auVar53._0_8_;
      auVar78._8_8_ = auVar49._8_8_ + auVar53._8_8_;
      auVar78._16_8_ = auVar49._16_8_ + auVar53._16_8_;
      auVar78._24_8_ = auVar49._24_8_ + auVar53._24_8_;
      auVar49 = vmulpd_avx512vl(auVar27,auVar51);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar34,auVar54);
      auVar80._0_8_ = auVar42._0_8_ + auVar49._0_8_;
      auVar80._8_8_ = auVar42._8_8_ + auVar49._8_8_;
      auVar80._16_8_ = auVar42._16_8_ + auVar49._16_8_;
      auVar80._24_8_ = auVar42._24_8_ + auVar49._24_8_;
      auVar40 = vfmadd231pd_avx512vl(auVar40,auVar29,auVar52);
      auVar84._0_8_ = auVar29._0_8_ * auVar71._0_8_ + auVar47._0_8_;
      auVar84._8_8_ = auVar29._8_8_ * auVar71._8_8_ + auVar47._8_8_;
      auVar84._16_8_ = auVar29._16_8_ * auVar71._16_8_ + auVar47._16_8_;
      auVar84._24_8_ = auVar29._24_8_ * auVar71._24_8_ + auVar47._24_8_;
      auVar47._0_8_ = dVar57 * auVar71._0_8_;
      auVar47._8_8_ = dVar58 * auVar71._8_8_;
      auVar47._16_8_ = dVar59 * auVar71._16_8_;
      auVar47._24_8_ = dVar60 * auVar71._24_8_;
      auVar42 = vfmsub231pd_avx512vl(auVar47,auVar27,auVar50);
      auVar87._0_8_ = auVar40._0_8_ + auVar42._0_8_;
      auVar87._8_8_ = auVar40._8_8_ + auVar42._8_8_;
      auVar87._16_8_ = auVar40._16_8_ + auVar42._16_8_;
      auVar87._24_8_ = auVar40._24_8_ + auVar42._24_8_;
      auVar40 = vfmadd231pd_avx512vl(auVar43,auVar29,auVar51);
      auVar49._0_8_ = auVar29._0_8_ * auVar54._0_8_ + auVar48._0_8_;
      auVar49._8_8_ = auVar29._8_8_ * auVar54._8_8_ + auVar48._8_8_;
      auVar49._16_8_ = auVar29._16_8_ * auVar54._16_8_ + auVar48._16_8_;
      auVar49._24_8_ = auVar29._24_8_ * auVar54._24_8_ + auVar48._24_8_;
      auVar43._0_8_ = dVar57 * auVar54._0_8_;
      auVar43._8_8_ = dVar58 * auVar54._8_8_;
      auVar43._16_8_ = dVar59 * auVar54._16_8_;
      auVar43._24_8_ = dVar60 * auVar54._24_8_;
      auVar42 = vfmsub231pd_avx512vl(auVar43,auVar27,auVar46);
      auVar86._0_8_ = auVar40._0_8_ + auVar42._0_8_;
      auVar86._8_8_ = auVar40._8_8_ + auVar42._8_8_;
      auVar86._16_8_ = auVar40._16_8_ + auVar42._16_8_;
      auVar86._24_8_ = auVar40._24_8_ + auVar42._24_8_;
      auVar40 = vmulpd_avx512vl(auVar34,auVar50);
      auVar40 = vfmsub231pd_avx512vl(auVar40,auVar28,auVar52);
      auVar43 = vaddpd_avx512vl(auVar84,auVar40);
      auVar40 = vmulpd_avx512vl(auVar34,auVar46);
      auVar40 = vfmsub231pd_avx512vl(auVar40,auVar28,auVar51);
      auVar46 = vaddpd_avx512vl(auVar49,auVar40);
      auVar42._0_8_ = auVar26._0_8_ * auVar44._0_8_;
      auVar42._8_8_ = auVar26._8_8_ * auVar44._8_8_;
      auVar42._16_8_ = auVar26._16_8_ * auVar44._16_8_;
      auVar42._24_8_ = auVar26._24_8_ * auVar44._24_8_;
      auVar40 = vmulpd_avx512vl(auVar26,auVar45);
      auVar20 = vcvtpd2ps_avx512vl(auVar40);
      auVar19 = vcvtpd2ps_avx(auVar42);
      auVar44 = vinsertf32x4_avx512vl(ZEXT1632(auVar20),auVar19,1);
      auVar40 = vmulpd_avx512vl(auVar35,auVar41);
      auVar42 = vmulpd_avx512vl(auVar35,auVar38);
      auVar41 = vmulpd_avx512vl(auVar25,auVar39);
      auVar37 = vmulpd_avx512vl(auVar25,auVar37);
      auVar38 = vmulpd_avx512vl(auVar26,auVar78);
      auVar19 = vcvtpd2ps_avx512vl(auVar42);
      auVar42 = vmulpd_avx512vl(auVar26,auVar80);
      auVar20 = vcvtpd2ps_avx512vl(auVar40);
      auVar39 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar20,1);
      auVar20 = vcvtpd2ps_avx512vl(auVar37);
      auVar21 = vcvtpd2ps_avx512vl(auVar41);
      auVar22 = vcvtpd2ps_avx512vl(auVar42);
      auVar23 = vcvtpd2ps_avx512vl(auVar38);
      auVar37 = vinsertf32x4_avx512vl(ZEXT1632(auVar20),auVar21,1);
      auVar38 = vinsertf32x4_avx512vl(ZEXT1632(auVar22),auVar23,1);
      auVar40 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar20,1);
      auVar42 = vshufpd_avx512vl(auVar39,auVar40,2);
      auVar41 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar37);
      auVar40 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_00000008000000020000000c00000007000000010000000b0000000600000000
                                   ,auVar41);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar16) = auVar40;
      auVar40 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar42 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar42);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar16) = auVar42;
      auVar41 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
      auVar42 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar37 = vpermt2ps_avx512vl(auVar37,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar39);
      auVar37 = vpermt2ps_avx512vl(auVar37,
                                   ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar44);
      auVar39 = vmulpd_avx512vl(auVar35,auVar87);
      auVar44 = vmulpd_avx512vl(auVar35,auVar86);
      auVar43 = vmulpd_avx512vl(auVar25,auVar43);
      auVar20 = vcvtpd2ps_avx512vl(auVar44);
      auVar44 = vmulpd_avx512vl(auVar25,auVar46);
      auVar19 = vcvtpd2ps_avx(auVar39);
      auVar39 = vinsertf32x4_avx512vl(ZEXT1632(auVar20),auVar19,1);
      auVar19 = vcvtpd2ps_avx512vl(auVar44);
      auVar21 = vcvtpd2ps_avx512vl(auVar43);
      auVar43 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar21,1);
      *(undefined1 (*) [32])(param_1 + lVar16) = auVar37;
      auVar37 = vinsertf32x4_avx512vl(ZEXT1632(auVar20),auVar19,1);
      auVar37 = vshufpd_avx512vl(auVar39,auVar37,2);
      auVar55 = vpermt2ps_avx512vl(auVar38,auVar55,auVar43);
      auVar56 = vpermt2ps_avx512vl(auVar37,auVar56,auVar55);
      auVar21 = auVar56._0_16_;
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar16) = auVar56;
      auVar40 = vpermt2ps_avx512vl(auVar55,auVar40,auVar37);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar16) = auVar40;
      auVar40 = vpermt2ps_avx512vl(auVar43,auVar42,auVar39);
      auVar40 = vpermt2ps_avx512vl(auVar40,auVar41,auVar38);
      auVar20 = auVar40._0_16_;
      *(undefined1 (*) [32])(param_2 + lVar16) = auVar40;
      lVar16 = lVar16 + 0x60;
      uVar15 = uVar15 + 8;
    } while ((int)uVar15 < (int)(uVar13 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar15) {
      return;
    }
  }
  auVar33 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar32 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar31 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar30 = vpbroadcastd_avx512vl();
  auVar30 = vpor_avx2(auVar30,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar34 = vpbroadcastd_avx512vl();
  uVar18 = vpcmpgtd_avx512vl(auVar34,auVar30);
  uVar12 = (ulonglong)uVar15;
  pauVar2 = (undefined1 (*) [32])(param_1 + uVar12 * 0xc);
  bVar17 = (byte)uVar18;
  if (bVar17 == 0xff) {
    auVar30 = pauVar2[1];
    auVar34 = vblendps_avx(auVar30,*pauVar2,0x24);
    auVar35 = vpermt2ps_avx512vl(*pauVar2,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar30);
    auVar56 = vpermt2ps_avx512vl(auVar34,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar2[2]);
    auVar30 = vpermt2ps_avx512vl(pauVar2[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar30);
    auVar41 = vinsertf32x4_avx512vl(auVar35,auVar30._0_16_,1);
    auVar55 = vshuff64x2_avx512vl(auVar35,auVar30,3);
    pauVar14 = (undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar30 = *(undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar34 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 0xc);
    auVar35 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar12 * 0xc);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar30,auVar34);
    auVar40 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar35,auVar34);
    auVar37 = vinsertf32x4_avx512vl(auVar36,auVar40._0_16_,1);
    auVar36 = vshuff64x2_avx512vl(auVar36,auVar40,3);
    auVar30 = vblendps_avx(auVar34,auVar30,0x24);
    auVar34 = vpermt2ps_avx512vl(auVar30,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar35);
  }
  else {
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_2));
    auVar41._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar30._4_4_;
    auVar41._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_;
    auVar41._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar30._8_4_;
    auVar41._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar30._12_4_;
    auVar41._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar41._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar41._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar41._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    auVar19 = vxorpd_avx512vl(auVar20,auVar20);
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
    auVar55._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_;
    bVar11 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar55._4_4_ = (uint)bVar11 * auVar30._4_4_ | (uint)!bVar11 * auVar19._4_4_;
    bVar11 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar55._8_4_ = (uint)bVar11 * auVar30._8_4_ | (uint)!bVar11 * auVar19._8_4_;
    bVar11 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar55._12_4_ = (uint)bVar11 * auVar30._12_4_ | (uint)!bVar11 * auVar19._12_4_;
    auVar55._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar55._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar55._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar55._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBP));
    auVar56._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar30._4_4_;
    auVar56._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_;
    auVar56._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar30._8_4_;
    auVar56._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar30._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    pauVar14 = (undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar19 = vxorpd_avx512vl(auVar21,auVar21);
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + param_2));
    auVar37._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_;
    bVar11 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar37._4_4_ = (uint)bVar11 * auVar30._4_4_ | (uint)!bVar11 * auVar19._4_4_;
    bVar11 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar37._8_4_ = (uint)bVar11 * auVar30._8_4_ | (uint)!bVar11 * auVar19._8_4_;
    bVar11 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar37._12_4_ = (uint)bVar11 * auVar30._12_4_ | (uint)!bVar11 * auVar19._12_4_;
    auVar37._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar37._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar37._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar37._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    auVar19 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                              ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                      ._0_16_);
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)*pauVar14);
    auVar36._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_;
    bVar11 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar36._4_4_ = (uint)bVar11 * auVar30._4_4_ | (uint)!bVar11 * auVar19._4_4_;
    bVar11 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar36._8_4_ = (uint)bVar11 * auVar30._8_4_ | (uint)!bVar11 * auVar19._8_4_;
    bVar11 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar36._12_4_ = (uint)bVar11 * auVar30._12_4_ | (uint)!bVar11 * auVar19._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + unaff_RBP));
    auVar34._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar30._4_4_;
    auVar34._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_;
    auVar34._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar30._8_4_;
    auVar34._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar30._12_4_;
    auVar34._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar34._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar34._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar34._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
  }
  auVar19 = vextractf32x4_avx512vl(auVar41,1);
  auVar30 = vcvtps2pd_avx512vl(auVar19);
  auVar35 = vcvtps2pd_avx512vl(auVar41._0_16_);
  auVar19 = vextractf32x4_avx512vl(auVar55,1);
  auVar40 = vcvtps2pd_avx512vl(auVar19);
  auVar42 = vcvtps2pd_avx512vl(auVar55._0_16_);
  auVar19 = vextractf32x4_avx512vl(auVar56,1);
  auVar41 = vcvtps2pd_avx512vl(auVar19);
  auVar55 = vcvtps2pd_avx512vl(auVar56._0_16_);
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_5;
  auVar56 = vbroadcastsd_avx512vl(auVar90);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_4;
  auVar38 = vbroadcastsd_avx512vl(auVar6);
  auVar35 = vfmadd213pd_avx512vl(auVar35,auVar56,auVar38);
  auVar30 = vfmadd213pd_avx512vl(auVar30,auVar56,auVar38);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_4[1];
  auVar38 = vbroadcastsd_avx512vl(auVar7);
  auVar42 = vfmadd213pd_avx512vl(auVar42,auVar56,auVar38);
  auVar40 = vfmadd213pd_avx512vl(auVar40,auVar56,auVar38);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_4[2];
  auVar38 = vbroadcastsd_avx512vl(auVar8);
  auVar55 = vfmadd213pd_avx512vl(auVar55,auVar56,auVar38);
  auVar41 = vfmadd213pd_avx512vl(auVar41,auVar56,auVar38);
  auVar56 = vbroadcastss_avx512vl(ZEXT416(__real_80000000));
  auVar37 = vxorps_avx512vl(auVar37,auVar56);
  auVar19 = vextractf32x4_avx512vl(auVar37,1);
  auVar38 = vcvtps2pd_avx512vl(auVar19);
  auVar37 = vcvtps2pd_avx512vl(auVar37._0_16_);
  auVar36 = vxorps_avx512vl(auVar36,auVar56);
  auVar19 = vextractf32x4_avx512vl(auVar36,1);
  auVar39 = vcvtps2pd_avx512vl(auVar19);
  auVar36 = vcvtps2pd_avx512vl(auVar36._0_16_);
  auVar34 = vxorps_avx512vl(auVar34,auVar56);
  auVar19 = vextractf32x4_avx512vl(auVar34,1);
  auVar56 = vcvtps2pd_avx512vl(auVar19);
  auVar34 = vcvtps2pd_avx512vl(auVar34._0_16_);
  auVar44._8_8_ = uVar3;
  auVar44._0_8_ = uVar3;
  auVar44._16_8_ = uVar3;
  auVar44._24_8_ = uVar3;
  auVar30 = vsubpd_avx512vl(auVar30,auVar44);
  auVar35 = vsubpd_avx512vl(auVar35,auVar44);
  auVar46._8_8_ = uVar4;
  auVar46._0_8_ = uVar4;
  auVar46._16_8_ = uVar4;
  auVar46._24_8_ = uVar4;
  auVar40 = vsubpd_avx512vl(auVar40,auVar46);
  auVar42 = vsubpd_avx512vl(auVar42,auVar46);
  auVar51._8_8_ = uVar5;
  auVar51._0_8_ = uVar5;
  auVar51._16_8_ = uVar5;
  auVar51._24_8_ = uVar5;
  auVar41 = vsubpd_avx512vl(auVar41,auVar51);
  auVar55 = vsubpd_avx512vl(auVar55,auVar51);
  local_e8 = auVar24._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_e8;
  auVar24 = vbroadcastsd_avx512vl(auVar9);
  auVar43 = vmulpd_avx512vl(auVar27,auVar35);
  auVar44 = vmulpd_avx512vl(auVar27,auVar30);
  auVar45 = vmulpd_avx512vl(auVar28,auVar42);
  auVar46 = vmulpd_avx512vl(auVar28,auVar40);
  auVar47 = vmulpd_avx512vl(auVar24,auVar55);
  auVar48 = vmulpd_avx512vl(auVar24,auVar41);
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar24,auVar40);
  auVar43 = vfmsub231pd_avx512vl(auVar43,auVar24,auVar42);
  auVar46 = vfmsub231pd_avx512vl(auVar46,auVar27,auVar41);
  auVar45 = vfmsub231pd_avx512vl(auVar45,auVar27,auVar55);
  auVar48 = vfmsub231pd_avx512vl(auVar48,auVar28,auVar30);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar28,auVar35);
  auVar45 = vaddpd_avx512vl(auVar45,auVar45);
  auVar46 = vaddpd_avx512vl(auVar46,auVar46);
  auVar63._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar63._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  auVar63._16_8_ = auVar47._16_8_ + auVar47._16_8_;
  auVar63._24_8_ = auVar47._24_8_ + auVar47._24_8_;
  auVar72._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar72._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar72._16_8_ = auVar48._16_8_ + auVar48._16_8_;
  auVar72._24_8_ = auVar48._24_8_ + auVar48._24_8_;
  auVar79._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar79._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  auVar79._16_8_ = auVar43._16_8_ + auVar43._16_8_;
  auVar79._24_8_ = auVar43._24_8_ + auVar43._24_8_;
  auVar43 = vaddpd_avx512vl(auVar44,auVar44);
  auVar30 = vfmadd231pd_avx512vl(auVar30,auVar29,auVar46);
  auVar35 = vfmadd231pd_avx512vl(auVar35,auVar29,auVar45);
  auVar40 = vfmadd231pd_avx512vl(auVar40,auVar29,auVar72);
  auVar42 = vfmadd231pd_avx512vl(auVar42,auVar29,auVar63);
  auVar41 = vfmadd231pd_avx512vl(auVar41,auVar29,auVar43);
  auVar55 = vfmadd231pd_avx512vl(auVar55,auVar29,auVar79);
  auVar44 = vmulpd_avx512vl(auVar27,auVar45);
  auVar47 = vmulpd_avx512vl(auVar27,auVar46);
  auVar85._0_8_ = dVar57 * auVar72._0_8_;
  auVar85._8_8_ = dVar58 * auVar72._8_8_;
  auVar85._16_8_ = dVar59 * auVar72._16_8_;
  auVar85._24_8_ = dVar60 * auVar72._24_8_;
  auVar48 = vmulpd_avx512vl(auVar24,auVar79);
  auVar49 = vmulpd_avx512vl(auVar24,auVar43);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar24,auVar72);
  auVar41 = vaddpd_avx512vl(auVar41,auVar47);
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar24,auVar63);
  auVar55 = vaddpd_avx512vl(auVar55,auVar44);
  auVar43 = vfmsub231pd_avx512vl(auVar85,auVar27,auVar43);
  auVar30 = vaddpd_avx512vl(auVar30,auVar43);
  auVar82._0_8_ = auVar27._0_8_ * auVar79._0_8_ - dVar57 * auVar63._0_8_;
  auVar82._8_8_ = auVar27._8_8_ * auVar79._8_8_ - dVar58 * auVar63._8_8_;
  auVar82._16_8_ = auVar27._16_8_ * auVar79._16_8_ - dVar59 * auVar63._16_8_;
  auVar82._24_8_ = auVar27._24_8_ * auVar79._24_8_ - dVar60 * auVar63._24_8_;
  auVar35 = vaddpd_avx512vl(auVar35,auVar82);
  auVar43 = vfmsub231pd_avx512vl(auVar49,auVar28,auVar46);
  auVar40 = vaddpd_avx512vl(auVar40,auVar43);
  auVar43 = vfmsub231pd_avx512vl(auVar48,auVar28,auVar45);
  auVar42 = vaddpd_avx512vl(auVar42,auVar43);
  auVar43 = vmulpd_avx512vl(auVar27,auVar37);
  auVar44 = vmulpd_avx512vl(auVar27,auVar38);
  auVar45 = vmulpd_avx512vl(auVar28,auVar36);
  auVar46 = vmulpd_avx512vl(auVar28,auVar39);
  auVar47 = vmulpd_avx512vl(auVar24,auVar34);
  auVar48 = vmulpd_avx512vl(auVar24,auVar56);
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar24,auVar39);
  auVar43 = vfmsub231pd_avx512vl(auVar43,auVar24,auVar36);
  auVar46 = vfmsub231pd_avx512vl(auVar46,auVar27,auVar56);
  auVar45 = vfmsub231pd_avx512vl(auVar45,auVar27,auVar34);
  auVar48 = vfmsub231pd_avx512vl(auVar48,auVar28,auVar38);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar28,auVar37);
  auVar45 = vaddpd_avx512vl(auVar45,auVar45);
  auVar46 = vaddpd_avx512vl(auVar46,auVar46);
  auVar64._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar64._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  auVar64._16_8_ = auVar47._16_8_ + auVar47._16_8_;
  auVar64._24_8_ = auVar47._24_8_ + auVar47._24_8_;
  auVar73._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar73._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar73._16_8_ = auVar48._16_8_ + auVar48._16_8_;
  auVar73._24_8_ = auVar48._24_8_ + auVar48._24_8_;
  auVar43 = vaddpd_avx512vl(auVar43,auVar43);
  auVar44 = vaddpd_avx512vl(auVar44,auVar44);
  auVar38 = vfmadd231pd_avx512vl(auVar38,auVar29,auVar46);
  auVar37 = vfmadd231pd_avx512vl(auVar37,auVar29,auVar45);
  auVar39 = vfmadd231pd_avx512vl(auVar39,auVar29,auVar73);
  auVar36 = vfmadd231pd_avx512vl(auVar36,auVar29,auVar64);
  auVar56 = vfmadd231pd_avx512vl(auVar56,auVar29,auVar44);
  auVar29 = vfmadd213pd_avx512vl(auVar29,auVar43,auVar34);
  auVar34 = vmulpd_avx512vl(auVar27,auVar45);
  auVar47 = vmulpd_avx512vl(auVar27,auVar46);
  auVar81._0_8_ = dVar57 * auVar64._0_8_;
  auVar81._8_8_ = dVar58 * auVar64._8_8_;
  auVar81._16_8_ = dVar59 * auVar64._16_8_;
  auVar81._24_8_ = dVar60 * auVar64._24_8_;
  auVar83._0_8_ = dVar57 * auVar73._0_8_;
  auVar83._8_8_ = dVar58 * auVar73._8_8_;
  auVar83._16_8_ = dVar59 * auVar73._16_8_;
  auVar83._24_8_ = dVar60 * auVar73._24_8_;
  auVar48 = vmulpd_avx512vl(auVar24,auVar43);
  auVar49 = vmulpd_avx512vl(auVar24,auVar44);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar24,auVar73);
  auVar56 = vaddpd_avx512vl(auVar56,auVar47);
  auVar24 = vfmsub231pd_avx512vl(auVar34,auVar24,auVar64);
  auVar24 = vaddpd_avx512vl(auVar29,auVar24);
  auVar29 = vfmsub231pd_avx512vl(auVar83,auVar27,auVar44);
  auVar29 = vaddpd_avx512vl(auVar38,auVar29);
  auVar27 = vfmsub231pd_avx512vl(auVar81,auVar27,auVar43);
  auVar27 = vaddpd_avx512vl(auVar37,auVar27);
  auVar34 = vfmsub231pd_avx512vl(auVar49,auVar28,auVar46);
  auVar34 = vaddpd_avx512vl(auVar39,auVar34);
  auVar28 = vfmsub231pd_avx512vl(auVar48,auVar28,auVar45);
  auVar28 = vaddpd_avx512vl(auVar36,auVar28);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar36 = vbroadcastsd_avx512vl(auVar10);
  auVar30 = vmulpd_avx512vl(auVar36,auVar30);
  auVar35 = vmulpd_avx512vl(auVar36,auVar35);
  auVar40 = vmulpd_avx512vl(auVar25,auVar40);
  auVar42 = vmulpd_avx512vl(auVar25,auVar42);
  auVar38._0_8_ = auVar26._0_8_ * auVar41._0_8_;
  auVar38._8_8_ = auVar26._8_8_ * auVar41._8_8_;
  auVar38._16_8_ = auVar26._16_8_ * auVar41._16_8_;
  auVar38._24_8_ = auVar26._24_8_ * auVar41._24_8_;
  auVar41 = vmulpd_avx512vl(auVar26,auVar55);
  auVar29 = vmulpd_avx512vl(auVar36,auVar29);
  auVar27 = vmulpd_avx512vl(auVar36,auVar27);
  auVar34 = vmulpd_avx512vl(auVar25,auVar34);
  auVar39._0_8_ = auVar25._0_8_ * auVar28._0_8_;
  auVar39._8_8_ = auVar25._8_8_ * auVar28._8_8_;
  auVar39._16_8_ = auVar25._16_8_ * auVar28._16_8_;
  auVar39._24_8_ = auVar25._24_8_ * auVar28._24_8_;
  auVar25 = vmulpd_avx512vl(auVar26,auVar56);
  auVar19 = vcvtpd2ps_avx512vl(auVar35);
  auVar26 = vmulpd_avx512vl(auVar26,auVar24);
  auVar20 = vcvtpd2ps_avx512vl(auVar30);
  auVar52._16_16_ = auVar20;
  auVar52._0_16_ = auVar19;
  auVar20 = vcvtpd2ps_avx512vl(auVar42);
  auVar21 = vcvtpd2ps_avx512vl(auVar40);
  auVar22 = vcvtpd2ps_avx512vl(auVar41);
  auVar19 = vcvtpd2ps_avx(auVar38);
  auVar40._16_16_ = auVar21;
  auVar40._0_16_ = auVar20;
  auVar24 = vinsertf32x4_avx512vl(ZEXT1632(auVar22),auVar19,1);
  auVar19 = vcvtpd2ps_avx512vl(auVar27);
  auVar20 = vcvtpd2ps_avx512vl(auVar29);
  auVar29._16_16_ = auVar20;
  auVar29._0_16_ = auVar19;
  auVar19 = vcvtpd2ps_avx(auVar39);
  auVar20 = vcvtpd2ps_avx512vl(auVar34);
  auVar35._16_16_ = auVar20;
  auVar35._0_16_ = auVar19;
  auVar19 = vcvtpd2ps_avx512vl(auVar26);
  auVar20 = vcvtpd2ps_avx512vl(auVar25);
  auVar25 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar20,1);
  if (bVar17 == 0xff) {
    auVar27 = vpermt2ps_avx512vl(auVar24,
                                 ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar40);
    auVar26 = vpermt2ps_avx512vl(auVar52,
                                 ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar40);
    auVar26 = vpermt2ps_avx512vl(auVar26,
                                 ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar27);
    *pauVar2 = auVar26;
    auVar26 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
    auVar27 = vpermt2ps_avx512vl(auVar27,
                                 ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar52);
    pauVar2[1] = auVar27;
    auVar30 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
    auVar27 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
    auVar28 = vpermt2ps_avx512vl(auVar40,
                                 ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                 ,auVar52);
    auVar24 = vpermt2ps_avx512vl(auVar28,
                                 ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar24);
    pauVar2[2] = auVar24;
    auVar24 = vpermi2ps_avx512vl(auVar31,auVar25,auVar35);
    auVar28 = vpermi2ps_avx512vl(auVar32,auVar29,auVar35);
    auVar28 = vpermt2ps_avx512vl(auVar28,auVar33,auVar24);
    *pauVar14 = auVar28;
    auVar26 = vpermt2ps_avx512vl(auVar24,auVar26,auVar29);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 0xc) = auVar26;
    auVar26 = vpermt2ps_avx512vl(auVar35,auVar27,auVar29);
    auVar25 = vpermt2ps_avx512vl(auVar26,auVar30,auVar25);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar12 * 0xc) = auVar25;
  }
  else {
    vscatterdps_avx512vl(ZEXT832(pauVar2) + auVar29,uVar18,auVar52);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar18,
               auVar40);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar18,
               auVar24);
    vscatterdps_avx512vl(ZEXT832(pauVar14) + auVar29,uVar18,auVar29);
    vscatterdps_avx512vl
              (ZEXT832(pauVar14) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar18,
               auVar35);
    vscatterdps_avx512vl
              (ZEXT832(pauVar14) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar18,
               auVar25);
  }
  return;
}

// GetClothingSimulationData_avx512skx @ 140cb8800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetClothingSimulationData_avx512skx
               (longlong param_1,longlong param_2,undefined1 (*param_3) [32],ulonglong *param_4,
               ulonglong param_5,uint param_6)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [32];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  bool bVar11;
  ulonglong uVar12;
  longlong unaff_RBP;
  uint uVar13;
  undefined1 (*pauVar14) [32];
  uint uVar15;
  longlong lVar16;
  byte bVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
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
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar65;
  double dVar66;
  undefined1 auVar62 [32];
  double dVar67;
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  double dVar68;
  double dVar74;
  double dVar75;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  double dVar76;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
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
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ulonglong local_e8;
  
  auVar24 = vmulpd_avx512vl(*param_3,
                            ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000)
  ;
  uVar3 = *(ulonglong *)param_3[1];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar3;
  uVar4 = *(ulonglong *)(param_3[1] + 8);
  uVar5 = *(ulonglong *)(param_3[1] + 0x10);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar5;
  auVar28._24_8_ = 0;
  auVar28._0_24_ = *(undefined1 (*) [24])param_3[2];
  auVar25._8_8_ = __real_7fffffffffffffff;
  auVar25._0_8_ = __real_7fffffffffffffff;
  auVar25._16_8_ = __real_7fffffffffffffff;
  auVar25._24_8_ = __real_7fffffffffffffff;
  auVar25 = vandpd_avx512vl(auVar28,auVar25);
  auVar26._8_8_ = __real_3e45798ee2308c3a;
  auVar26._0_8_ = __real_3e45798ee2308c3a;
  auVar26._16_8_ = __real_3e45798ee2308c3a;
  auVar26._24_8_ = __real_3e45798ee2308c3a;
  uVar18 = vcmppd_avx512vl(auVar25,auVar26,6);
  uVar18 = uVar18 & 0xf;
  auVar25 = vrcp14pd_avx512vl(auVar28);
  auVar27._8_8_ = __real_4000000000000000;
  auVar27._0_8_ = __real_4000000000000000;
  auVar27._16_8_ = __real_4000000000000000;
  auVar27._24_8_ = __real_4000000000000000;
  auVar26 = vfnmadd213pd_avx512vl(auVar28,auVar25,auVar27);
  auVar25 = vmulpd_avx512vl(auVar25,auVar26);
  uVar1 = (ulonglong)((byte)uVar18 & 1) * auVar25._0_8_;
  auVar19._8_8_ = (ulonglong)((byte)(uVar18 >> 1) & 1) * auVar25._8_8_;
  auVar19._0_8_ = uVar1;
  auVar30._16_8_ = (ulonglong)((byte)(uVar18 >> 2) & 1) * auVar25._16_8_;
  auVar30._0_16_ = auVar19;
  auVar30._24_8_ = (uVar18 >> 3) * auVar25._24_8_;
  uVar13 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar13 = param_6;
  }
  auVar27 = vpermpd_avx512vl(auVar24,0x55);
  auVar28 = vpermpd_avx512vl(auVar24,0xaa);
  auVar29 = vpermpd_avx512vl(auVar24,0xff);
  auVar25 = vpermpd_avx2(auVar30,0x55);
  auVar26 = vpermpd_avx2(auVar30,0xaa);
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar5;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar4;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = uVar3;
  dVar57 = auVar28._0_8_;
  dVar58 = auVar28._8_8_;
  dVar59 = auVar28._16_8_;
  dVar60 = auVar28._24_8_;
  if ((int)(uVar13 & 0xfffffff8) < 1) {
    uVar15 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    auVar89._8_8_ = 0;
    auVar89._0_8_ = param_5;
    auVar30 = vbroadcastsd_avx512vl(auVar89);
    auVar31 = vbroadcastsd_avx512vl(auVar88);
    auVar32 = vbroadcastsd_avx512vl(auVar23);
    auVar33 = vbroadcastsd_avx512vl(auVar22);
    auVar34 = vbroadcastsd_avx512vl(auVar24._0_16_);
    auVar35 = vbroadcastsd_avx512vl(auVar19);
    lVar16 = 0x40;
    uVar15 = 0;
    auVar36 = vbroadcastss_avx512vl(ZEXT416(__real_80000000));
    do {
      auVar56 = ___ymm_00000008000000020000000c00000007000000010000000b0000000600000000;
      auVar55 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
      auVar40 = *(undefined1 (*) [32])(param_1 + -0x40 + lVar16);
      auVar42 = *(undefined1 (*) [32])(param_1 + -0x20 + lVar16);
      auVar41 = vblendps_avx(auVar42,auVar40,0x24);
      auVar37 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar42);
      auVar38 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(param_1 + lVar16));
      auVar39 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_1 + lVar16),
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar42);
      auVar40 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar16);
      auVar42 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar16);
      auVar41 = vblendps_avx(auVar42,auVar40,0x24);
      auVar40 = vpermt2ps_avx512vl(auVar40,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar42);
      auVar41 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,*(undefined1 (*) [32])(param_2 + lVar16));
      auVar42 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar16),
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar42);
      auVar43 = vinsertf32x4_avx512vl(auVar40,auVar42._0_16_,1);
      auVar42 = vshuff64x2_avx512vl(auVar40,auVar42,3);
      auVar44 = vcvtps2pd_avx512vl(auVar39._0_16_);
      auVar45 = vcvtps2pd_avx512vl(auVar37._0_16_);
      auVar19 = vextractf32x4_avx512vl(auVar39,1);
      auVar39 = vcvtps2pd_avx512vl(auVar19);
      auVar19 = vextractf32x4_avx512vl(auVar37,1);
      auVar37 = vcvtps2pd_avx512vl(auVar19);
      auVar46 = vcvtps2pd_avx512vl(auVar38._16_16_);
      auVar40 = vcvtps2pd_avx(auVar38._0_16_);
      uVar18 = *param_4;
      auVar48._8_8_ = uVar18;
      auVar48._0_8_ = uVar18;
      auVar48._16_8_ = uVar18;
      auVar48._24_8_ = uVar18;
      auVar38 = vfmadd213pd_avx512vl(auVar45,auVar30,auVar48);
      auVar44 = vfmadd213pd_avx512vl(auVar44,auVar30,auVar48);
      uVar18 = param_4[1];
      auVar45._8_8_ = uVar18;
      auVar45._0_8_ = uVar18;
      auVar45._16_8_ = uVar18;
      auVar45._24_8_ = uVar18;
      auVar37 = vfmadd213pd_avx512vl(auVar37,auVar30,auVar45);
      auVar39 = vfmadd213pd_avx512vl(auVar39,auVar30,auVar45);
      uVar18 = param_4[2];
      auVar50._8_8_ = uVar18;
      auVar50._0_8_ = uVar18;
      auVar50._16_8_ = uVar18;
      auVar50._24_8_ = uVar18;
      auVar45 = vfmadd213pd_avx512vl(auVar40,auVar30,auVar50);
      auVar46 = vfmadd213pd_avx512vl(auVar46,auVar30,auVar50);
      auVar43 = vxorps_avx512vl(auVar43,auVar36);
      auVar42 = vxorpd_avx512vl(auVar42,auVar36);
      auVar41 = vxorps_avx512vl(auVar41,auVar36);
      auVar19 = vextractf32x4_avx512vl(auVar43,1);
      auVar40 = vcvtps2pd_avx(auVar19);
      auVar43 = vcvtps2pd_avx512vl(auVar43._0_16_);
      auVar19 = vextractf32x4_avx512vl(auVar42,1);
      auVar47 = vcvtps2pd_avx512vl(auVar19);
      auVar48 = vcvtps2pd_avx512vl(auVar42._0_16_);
      auVar19 = vextractf32x4_avx512vl(auVar41,1);
      auVar49 = vcvtps2pd_avx512vl(auVar19);
      auVar42 = vcvtps2pd_avx(auVar41._0_16_);
      auVar41 = vsubpd_avx512vl(auVar44,auVar31);
      auVar38 = vsubpd_avx512vl(auVar38,auVar31);
      auVar39 = vsubpd_avx512vl(auVar39,auVar32);
      auVar37 = vsubpd_avx512vl(auVar37,auVar32);
      auVar44 = vsubpd_avx512vl(auVar46,auVar33);
      auVar45 = vsubpd_avx512vl(auVar45,auVar33);
      auVar46 = vmulpd_avx512vl(auVar27,auVar38);
      auVar50 = vmulpd_avx512vl(auVar27,auVar41);
      auVar51 = vmulpd_avx512vl(auVar28,auVar37);
      auVar52 = vmulpd_avx512vl(auVar28,auVar39);
      auVar53 = vmulpd_avx512vl(auVar34,auVar45);
      auVar54 = vmulpd_avx512vl(auVar34,auVar44);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar39);
      auVar46 = vfmsub231pd_avx512vl(auVar46,auVar34,auVar37);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar27,auVar44);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar27,auVar45);
      auVar54 = vfmsub231pd_avx512vl(auVar54,auVar28,auVar41);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar28,auVar38);
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar52 = vaddpd_avx512vl(auVar52,auVar52);
      auVar62._0_8_ = auVar53._0_8_ + auVar53._0_8_;
      auVar62._8_8_ = auVar53._8_8_ + auVar53._8_8_;
      auVar62._16_8_ = auVar53._16_8_ + auVar53._16_8_;
      auVar62._24_8_ = auVar53._24_8_ + auVar53._24_8_;
      auVar69._0_8_ = auVar54._0_8_ + auVar54._0_8_;
      auVar69._8_8_ = auVar54._8_8_ + auVar54._8_8_;
      auVar69._16_8_ = auVar54._16_8_ + auVar54._16_8_;
      auVar69._24_8_ = auVar54._24_8_ + auVar54._24_8_;
      auVar77._0_8_ = auVar46._0_8_ + auVar46._0_8_;
      auVar77._8_8_ = auVar46._8_8_ + auVar46._8_8_;
      auVar77._16_8_ = auVar46._16_8_ + auVar46._16_8_;
      auVar77._24_8_ = auVar46._24_8_ + auVar46._24_8_;
      auVar46 = vaddpd_avx512vl(auVar50,auVar50);
      auVar41 = vfmadd231pd_avx512vl(auVar41,auVar29,auVar52);
      auVar38 = vfmadd231pd_avx512vl(auVar38,auVar29,auVar51);
      auVar39 = vfmadd231pd_avx512vl(auVar39,auVar29,auVar69);
      auVar37 = vfmadd231pd_avx512vl(auVar37,auVar29,auVar62);
      auVar44 = vfmadd231pd_avx512vl(auVar44,auVar29,auVar46);
      auVar45 = vfmadd231pd_avx512vl(auVar45,auVar29,auVar77);
      auVar50 = vmulpd_avx512vl(auVar27,auVar52);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar69);
      auVar44 = vaddpd_avx512vl(auVar44,auVar50);
      auVar50 = vmulpd_avx512vl(auVar27,auVar51);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar62);
      auVar70._0_8_ = dVar57 * auVar69._0_8_;
      auVar70._8_8_ = dVar58 * auVar69._8_8_;
      auVar70._16_8_ = dVar59 * auVar69._16_8_;
      auVar70._24_8_ = dVar60 * auVar69._24_8_;
      auVar45 = vaddpd_avx512vl(auVar45,auVar50);
      auVar50 = vmulpd_avx512vl(auVar34,auVar77);
      auVar53 = vfmsub231pd_avx512vl(auVar70,auVar27,auVar46);
      auVar46 = vmulpd_avx512vl(auVar34,auVar46);
      auVar41 = vaddpd_avx512vl(auVar41,auVar53);
      auVar53._0_8_ = auVar27._0_8_ * auVar77._0_8_ - dVar57 * auVar62._0_8_;
      auVar53._8_8_ = auVar27._8_8_ * auVar77._8_8_ - dVar58 * auVar62._8_8_;
      auVar53._16_8_ = auVar27._16_8_ * auVar77._16_8_ - dVar59 * auVar62._16_8_;
      auVar53._24_8_ = auVar27._24_8_ * auVar77._24_8_ - dVar60 * auVar62._24_8_;
      auVar38 = vaddpd_avx512vl(auVar38,auVar53);
      auVar46 = vfmsub231pd_avx512vl(auVar46,auVar28,auVar52);
      auVar39 = vaddpd_avx512vl(auVar39,auVar46);
      auVar46 = vfmsub231pd_avx512vl(auVar50,auVar28,auVar51);
      auVar37 = vaddpd_avx512vl(auVar37,auVar46);
      auVar46 = vmulpd_avx512vl(auVar27,auVar43);
      auVar50 = vmulpd_avx512vl(auVar27,auVar40);
      auVar51 = vmulpd_avx512vl(auVar28,auVar48);
      auVar52 = vmulpd_avx512vl(auVar28,auVar47);
      auVar53 = vmulpd_avx512vl(auVar34,auVar42);
      auVar54 = vmulpd_avx512vl(auVar34,auVar49);
      auVar50 = vfmsub231pd_avx512vl(auVar50,auVar34,auVar47);
      auVar46 = vfmsub231pd_avx512vl(auVar46,auVar34,auVar48);
      auVar52 = vfmsub231pd_avx512vl(auVar52,auVar27,auVar49);
      auVar51 = vfmsub231pd_avx512vl(auVar51,auVar27,auVar42);
      dVar68 = dVar57 * auVar40._0_8_ - auVar54._0_8_;
      dVar74 = dVar58 * auVar40._8_8_ - auVar54._8_8_;
      dVar75 = dVar59 * auVar40._16_8_ - auVar54._16_8_;
      dVar76 = dVar60 * auVar40._24_8_ - auVar54._24_8_;
      dVar61 = dVar57 * auVar43._0_8_ - auVar53._0_8_;
      dVar65 = dVar58 * auVar43._8_8_ - auVar53._8_8_;
      dVar66 = dVar59 * auVar43._16_8_ - auVar53._16_8_;
      dVar67 = dVar60 * auVar43._24_8_ - auVar53._24_8_;
      auVar51 = vaddpd_avx512vl(auVar51,auVar51);
      auVar52 = vaddpd_avx512vl(auVar52,auVar52);
      auVar54._0_8_ = dVar61 + dVar61;
      auVar54._8_8_ = dVar65 + dVar65;
      auVar54._16_8_ = dVar66 + dVar66;
      auVar54._24_8_ = dVar67 + dVar67;
      auVar71._0_8_ = dVar68 + dVar68;
      auVar71._8_8_ = dVar74 + dVar74;
      auVar71._16_8_ = dVar75 + dVar75;
      auVar71._24_8_ = dVar76 + dVar76;
      auVar46 = vaddpd_avx512vl(auVar46,auVar46);
      auVar50 = vaddpd_avx512vl(auVar50,auVar50);
      auVar49 = vfmadd231pd_avx512vl(auVar49,auVar29,auVar50);
      auVar42 = vfmadd231pd_avx512vl(auVar42,auVar29,auVar46);
      auVar53 = vmulpd_avx512vl(auVar27,auVar52);
      auVar53 = vfmsub231pd_avx512vl(auVar53,auVar34,auVar71);
      auVar78._0_8_ = auVar49._0_8_ + auVar53._0_8_;
      auVar78._8_8_ = auVar49._8_8_ + auVar53._8_8_;
      auVar78._16_8_ = auVar49._16_8_ + auVar53._16_8_;
      auVar78._24_8_ = auVar49._24_8_ + auVar53._24_8_;
      auVar49 = vmulpd_avx512vl(auVar27,auVar51);
      auVar49 = vfmsub231pd_avx512vl(auVar49,auVar34,auVar54);
      auVar80._0_8_ = auVar42._0_8_ + auVar49._0_8_;
      auVar80._8_8_ = auVar42._8_8_ + auVar49._8_8_;
      auVar80._16_8_ = auVar42._16_8_ + auVar49._16_8_;
      auVar80._24_8_ = auVar42._24_8_ + auVar49._24_8_;
      auVar40 = vfmadd231pd_avx512vl(auVar40,auVar29,auVar52);
      auVar84._0_8_ = auVar29._0_8_ * auVar71._0_8_ + auVar47._0_8_;
      auVar84._8_8_ = auVar29._8_8_ * auVar71._8_8_ + auVar47._8_8_;
      auVar84._16_8_ = auVar29._16_8_ * auVar71._16_8_ + auVar47._16_8_;
      auVar84._24_8_ = auVar29._24_8_ * auVar71._24_8_ + auVar47._24_8_;
      auVar47._0_8_ = dVar57 * auVar71._0_8_;
      auVar47._8_8_ = dVar58 * auVar71._8_8_;
      auVar47._16_8_ = dVar59 * auVar71._16_8_;
      auVar47._24_8_ = dVar60 * auVar71._24_8_;
      auVar42 = vfmsub231pd_avx512vl(auVar47,auVar27,auVar50);
      auVar87._0_8_ = auVar40._0_8_ + auVar42._0_8_;
      auVar87._8_8_ = auVar40._8_8_ + auVar42._8_8_;
      auVar87._16_8_ = auVar40._16_8_ + auVar42._16_8_;
      auVar87._24_8_ = auVar40._24_8_ + auVar42._24_8_;
      auVar40 = vfmadd231pd_avx512vl(auVar43,auVar29,auVar51);
      auVar49._0_8_ = auVar29._0_8_ * auVar54._0_8_ + auVar48._0_8_;
      auVar49._8_8_ = auVar29._8_8_ * auVar54._8_8_ + auVar48._8_8_;
      auVar49._16_8_ = auVar29._16_8_ * auVar54._16_8_ + auVar48._16_8_;
      auVar49._24_8_ = auVar29._24_8_ * auVar54._24_8_ + auVar48._24_8_;
      auVar43._0_8_ = dVar57 * auVar54._0_8_;
      auVar43._8_8_ = dVar58 * auVar54._8_8_;
      auVar43._16_8_ = dVar59 * auVar54._16_8_;
      auVar43._24_8_ = dVar60 * auVar54._24_8_;
      auVar42 = vfmsub231pd_avx512vl(auVar43,auVar27,auVar46);
      auVar86._0_8_ = auVar40._0_8_ + auVar42._0_8_;
      auVar86._8_8_ = auVar40._8_8_ + auVar42._8_8_;
      auVar86._16_8_ = auVar40._16_8_ + auVar42._16_8_;
      auVar86._24_8_ = auVar40._24_8_ + auVar42._24_8_;
      auVar40 = vmulpd_avx512vl(auVar34,auVar50);
      auVar40 = vfmsub231pd_avx512vl(auVar40,auVar28,auVar52);
      auVar43 = vaddpd_avx512vl(auVar84,auVar40);
      auVar40 = vmulpd_avx512vl(auVar34,auVar46);
      auVar40 = vfmsub231pd_avx512vl(auVar40,auVar28,auVar51);
      auVar46 = vaddpd_avx512vl(auVar49,auVar40);
      auVar42._0_8_ = auVar26._0_8_ * auVar44._0_8_;
      auVar42._8_8_ = auVar26._8_8_ * auVar44._8_8_;
      auVar42._16_8_ = auVar26._16_8_ * auVar44._16_8_;
      auVar42._24_8_ = auVar26._24_8_ * auVar44._24_8_;
      auVar40 = vmulpd_avx512vl(auVar26,auVar45);
      auVar20 = vcvtpd2ps_avx512vl(auVar40);
      auVar19 = vcvtpd2ps_avx(auVar42);
      auVar44 = vinsertf32x4_avx512vl(ZEXT1632(auVar20),auVar19,1);
      auVar40 = vmulpd_avx512vl(auVar35,auVar41);
      auVar42 = vmulpd_avx512vl(auVar35,auVar38);
      auVar41 = vmulpd_avx512vl(auVar25,auVar39);
      auVar37 = vmulpd_avx512vl(auVar25,auVar37);
      auVar38 = vmulpd_avx512vl(auVar26,auVar78);
      auVar19 = vcvtpd2ps_avx512vl(auVar42);
      auVar42 = vmulpd_avx512vl(auVar26,auVar80);
      auVar20 = vcvtpd2ps_avx512vl(auVar40);
      auVar39 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar20,1);
      auVar20 = vcvtpd2ps_avx512vl(auVar37);
      auVar21 = vcvtpd2ps_avx512vl(auVar41);
      auVar22 = vcvtpd2ps_avx512vl(auVar42);
      auVar23 = vcvtpd2ps_avx512vl(auVar38);
      auVar37 = vinsertf32x4_avx512vl(ZEXT1632(auVar20),auVar21,1);
      auVar38 = vinsertf32x4_avx512vl(ZEXT1632(auVar22),auVar23,1);
      auVar40 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar20,1);
      auVar42 = vshufpd_avx512vl(auVar39,auVar40,2);
      auVar41 = vpermt2ps_avx512vl(auVar44,
                                   ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                   ,auVar37);
      auVar40 = vpermt2ps_avx512vl(auVar42,
                                   ___ymm_00000008000000020000000c00000007000000010000000b0000000600000000
                                   ,auVar41);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar16) = auVar40;
      auVar40 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
      auVar42 = vpermt2ps_avx512vl(auVar41,
                                   ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                   ,auVar42);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar16) = auVar42;
      auVar41 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
      auVar42 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
      auVar37 = vpermt2ps_avx512vl(auVar37,
                                   ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                   ,auVar39);
      auVar37 = vpermt2ps_avx512vl(auVar37,
                                   ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                   ,auVar44);
      auVar39 = vmulpd_avx512vl(auVar35,auVar87);
      auVar44 = vmulpd_avx512vl(auVar35,auVar86);
      auVar43 = vmulpd_avx512vl(auVar25,auVar43);
      auVar20 = vcvtpd2ps_avx512vl(auVar44);
      auVar44 = vmulpd_avx512vl(auVar25,auVar46);
      auVar19 = vcvtpd2ps_avx(auVar39);
      auVar39 = vinsertf32x4_avx512vl(ZEXT1632(auVar20),auVar19,1);
      auVar19 = vcvtpd2ps_avx512vl(auVar44);
      auVar21 = vcvtpd2ps_avx512vl(auVar43);
      auVar43 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar21,1);
      *(undefined1 (*) [32])(param_1 + lVar16) = auVar37;
      auVar37 = vinsertf32x4_avx512vl(ZEXT1632(auVar20),auVar19,1);
      auVar37 = vshufpd_avx512vl(auVar39,auVar37,2);
      auVar55 = vpermt2ps_avx512vl(auVar38,auVar55,auVar43);
      auVar56 = vpermt2ps_avx512vl(auVar37,auVar56,auVar55);
      auVar21 = auVar56._0_16_;
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar16) = auVar56;
      auVar40 = vpermt2ps_avx512vl(auVar55,auVar40,auVar37);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar16) = auVar40;
      auVar40 = vpermt2ps_avx512vl(auVar43,auVar42,auVar39);
      auVar40 = vpermt2ps_avx512vl(auVar40,auVar41,auVar38);
      auVar20 = auVar40._0_16_;
      *(undefined1 (*) [32])(param_2 + lVar16) = auVar40;
      lVar16 = lVar16 + 0x60;
      uVar15 = uVar15 + 8;
    } while ((int)uVar15 < (int)(uVar13 & 0xfffffff8));
    if ((int)param_6 <= (int)uVar15) {
      return;
    }
  }
  auVar33 = ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000;
  auVar32 = ___ymm_0000000000000002000000000000000900000001000000000000000800000000;
  auVar31 = ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a;
  auVar30 = vpbroadcastd_avx512vl();
  auVar30 = vpor_avx2(auVar30,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar34 = vpbroadcastd_avx512vl();
  uVar18 = vpcmpgtd_avx512vl(auVar34,auVar30);
  uVar12 = (ulonglong)uVar15;
  pauVar2 = (undefined1 (*) [32])(param_1 + uVar12 * 0xc);
  bVar17 = (byte)uVar18;
  if (bVar17 == 0xff) {
    auVar30 = pauVar2[1];
    auVar34 = vblendps_avx(auVar30,*pauVar2,0x24);
    auVar35 = vpermt2ps_avx512vl(*pauVar2,
                                 ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar30);
    auVar56 = vpermt2ps_avx512vl(auVar34,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,pauVar2[2]);
    auVar30 = vpermt2ps_avx512vl(pauVar2[2],
                                 ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar30);
    auVar41 = vinsertf32x4_avx512vl(auVar35,auVar30._0_16_,1);
    auVar55 = vshuff64x2_avx512vl(auVar35,auVar30,3);
    pauVar14 = (undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar30 = *(undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar34 = *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 0xc);
    auVar35 = *(undefined1 (*) [32])(param_2 + 0x40 + uVar12 * 0xc);
    auVar36 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                 ,auVar30,auVar34);
    auVar40 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                 ,auVar35,auVar34);
    auVar37 = vinsertf32x4_avx512vl(auVar36,auVar40._0_16_,1);
    auVar36 = vshuff64x2_avx512vl(auVar36,auVar40,3);
    auVar30 = vblendps_avx(auVar34,auVar30,0x24);
    auVar34 = vpermt2ps_avx512vl(auVar30,
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 ,auVar35);
  }
  else {
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_2));
    auVar41._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar30._4_4_;
    auVar41._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_;
    auVar41._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar30._8_4_;
    auVar41._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar30._12_4_;
    auVar41._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar41._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar41._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar41._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    auVar19 = vxorpd_avx512vl(auVar20,auVar20);
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
    auVar55._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_;
    bVar11 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar55._4_4_ = (uint)bVar11 * auVar30._4_4_ | (uint)!bVar11 * auVar19._4_4_;
    bVar11 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar55._8_4_ = (uint)bVar11 * auVar30._8_4_ | (uint)!bVar11 * auVar19._8_4_;
    bVar11 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar55._12_4_ = (uint)bVar11 * auVar30._12_4_ | (uint)!bVar11 * auVar19._12_4_;
    auVar55._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar55._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar55._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar55._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBP));
    auVar56._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar30._4_4_;
    auVar56._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_;
    auVar56._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar30._8_4_;
    auVar56._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar30._12_4_;
    auVar56._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar56._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar56._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar56._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    pauVar14 = (undefined1 (*) [32])(param_2 + uVar12 * 0xc);
    auVar19 = vxorpd_avx512vl(auVar21,auVar21);
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + param_2));
    auVar37._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_;
    bVar11 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar37._4_4_ = (uint)bVar11 * auVar30._4_4_ | (uint)!bVar11 * auVar19._4_4_;
    bVar11 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar37._8_4_ = (uint)bVar11 * auVar30._8_4_ | (uint)!bVar11 * auVar19._8_4_;
    bVar11 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar37._12_4_ = (uint)bVar11 * auVar30._12_4_ | (uint)!bVar11 * auVar19._12_4_;
    auVar37._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar37._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar37._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar37._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    auVar19 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                              ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                      ._0_16_);
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)*pauVar14);
    auVar36._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_ | (uint)!(bool)(bVar17 & 1) * auVar19._0_4_;
    bVar11 = (bool)((byte)(uVar18 >> 1) & 1);
    auVar36._4_4_ = (uint)bVar11 * auVar30._4_4_ | (uint)!bVar11 * auVar19._4_4_;
    bVar11 = (bool)((byte)(uVar18 >> 2) & 1);
    auVar36._8_4_ = (uint)bVar11 * auVar30._8_4_ | (uint)!bVar11 * auVar19._8_4_;
    bVar11 = (bool)((byte)(uVar18 >> 3) & 1);
    auVar36._12_4_ = (uint)bVar11 * auVar30._12_4_ | (uint)!bVar11 * auVar19._12_4_;
    auVar36._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar36._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar36._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar36._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
    auVar30 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar14 + unaff_RBP));
    auVar34._4_4_ = (uint)((byte)(uVar18 >> 1) & 1) * auVar30._4_4_;
    auVar34._0_4_ = (uint)(bVar17 & 1) * auVar30._0_4_;
    auVar34._8_4_ = (uint)((byte)(uVar18 >> 2) & 1) * auVar30._8_4_;
    auVar34._12_4_ = (uint)((byte)(uVar18 >> 3) & 1) * auVar30._12_4_;
    auVar34._16_4_ = (uint)((byte)(uVar18 >> 4) & 1) * auVar30._16_4_;
    auVar34._20_4_ = (uint)((byte)(uVar18 >> 5) & 1) * auVar30._20_4_;
    auVar34._24_4_ = (uint)((byte)(uVar18 >> 6) & 1) * auVar30._24_4_;
    auVar34._28_4_ = (uint)(byte)(uVar18 >> 7) * auVar30._28_4_;
  }
  auVar19 = vextractf32x4_avx512vl(auVar41,1);
  auVar30 = vcvtps2pd_avx512vl(auVar19);
  auVar35 = vcvtps2pd_avx512vl(auVar41._0_16_);
  auVar19 = vextractf32x4_avx512vl(auVar55,1);
  auVar40 = vcvtps2pd_avx512vl(auVar19);
  auVar42 = vcvtps2pd_avx512vl(auVar55._0_16_);
  auVar19 = vextractf32x4_avx512vl(auVar56,1);
  auVar41 = vcvtps2pd_avx512vl(auVar19);
  auVar55 = vcvtps2pd_avx512vl(auVar56._0_16_);
  auVar90._8_8_ = 0;
  auVar90._0_8_ = param_5;
  auVar56 = vbroadcastsd_avx512vl(auVar90);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = *param_4;
  auVar38 = vbroadcastsd_avx512vl(auVar6);
  auVar35 = vfmadd213pd_avx512vl(auVar35,auVar56,auVar38);
  auVar30 = vfmadd213pd_avx512vl(auVar30,auVar56,auVar38);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_4[1];
  auVar38 = vbroadcastsd_avx512vl(auVar7);
  auVar42 = vfmadd213pd_avx512vl(auVar42,auVar56,auVar38);
  auVar40 = vfmadd213pd_avx512vl(auVar40,auVar56,auVar38);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_4[2];
  auVar38 = vbroadcastsd_avx512vl(auVar8);
  auVar55 = vfmadd213pd_avx512vl(auVar55,auVar56,auVar38);
  auVar41 = vfmadd213pd_avx512vl(auVar41,auVar56,auVar38);
  auVar56 = vbroadcastss_avx512vl(ZEXT416(__real_80000000));
  auVar37 = vxorps_avx512vl(auVar37,auVar56);
  auVar19 = vextractf32x4_avx512vl(auVar37,1);
  auVar38 = vcvtps2pd_avx512vl(auVar19);
  auVar37 = vcvtps2pd_avx512vl(auVar37._0_16_);
  auVar36 = vxorps_avx512vl(auVar36,auVar56);
  auVar19 = vextractf32x4_avx512vl(auVar36,1);
  auVar39 = vcvtps2pd_avx512vl(auVar19);
  auVar36 = vcvtps2pd_avx512vl(auVar36._0_16_);
  auVar34 = vxorps_avx512vl(auVar34,auVar56);
  auVar19 = vextractf32x4_avx512vl(auVar34,1);
  auVar56 = vcvtps2pd_avx512vl(auVar19);
  auVar34 = vcvtps2pd_avx512vl(auVar34._0_16_);
  auVar44._8_8_ = uVar3;
  auVar44._0_8_ = uVar3;
  auVar44._16_8_ = uVar3;
  auVar44._24_8_ = uVar3;
  auVar30 = vsubpd_avx512vl(auVar30,auVar44);
  auVar35 = vsubpd_avx512vl(auVar35,auVar44);
  auVar46._8_8_ = uVar4;
  auVar46._0_8_ = uVar4;
  auVar46._16_8_ = uVar4;
  auVar46._24_8_ = uVar4;
  auVar40 = vsubpd_avx512vl(auVar40,auVar46);
  auVar42 = vsubpd_avx512vl(auVar42,auVar46);
  auVar51._8_8_ = uVar5;
  auVar51._0_8_ = uVar5;
  auVar51._16_8_ = uVar5;
  auVar51._24_8_ = uVar5;
  auVar41 = vsubpd_avx512vl(auVar41,auVar51);
  auVar55 = vsubpd_avx512vl(auVar55,auVar51);
  local_e8 = auVar24._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_e8;
  auVar24 = vbroadcastsd_avx512vl(auVar9);
  auVar43 = vmulpd_avx512vl(auVar27,auVar35);
  auVar44 = vmulpd_avx512vl(auVar27,auVar30);
  auVar45 = vmulpd_avx512vl(auVar28,auVar42);
  auVar46 = vmulpd_avx512vl(auVar28,auVar40);
  auVar47 = vmulpd_avx512vl(auVar24,auVar55);
  auVar48 = vmulpd_avx512vl(auVar24,auVar41);
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar24,auVar40);
  auVar43 = vfmsub231pd_avx512vl(auVar43,auVar24,auVar42);
  auVar46 = vfmsub231pd_avx512vl(auVar46,auVar27,auVar41);
  auVar45 = vfmsub231pd_avx512vl(auVar45,auVar27,auVar55);
  auVar48 = vfmsub231pd_avx512vl(auVar48,auVar28,auVar30);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar28,auVar35);
  auVar45 = vaddpd_avx512vl(auVar45,auVar45);
  auVar46 = vaddpd_avx512vl(auVar46,auVar46);
  auVar63._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar63._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  auVar63._16_8_ = auVar47._16_8_ + auVar47._16_8_;
  auVar63._24_8_ = auVar47._24_8_ + auVar47._24_8_;
  auVar72._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar72._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar72._16_8_ = auVar48._16_8_ + auVar48._16_8_;
  auVar72._24_8_ = auVar48._24_8_ + auVar48._24_8_;
  auVar79._0_8_ = auVar43._0_8_ + auVar43._0_8_;
  auVar79._8_8_ = auVar43._8_8_ + auVar43._8_8_;
  auVar79._16_8_ = auVar43._16_8_ + auVar43._16_8_;
  auVar79._24_8_ = auVar43._24_8_ + auVar43._24_8_;
  auVar43 = vaddpd_avx512vl(auVar44,auVar44);
  auVar30 = vfmadd231pd_avx512vl(auVar30,auVar29,auVar46);
  auVar35 = vfmadd231pd_avx512vl(auVar35,auVar29,auVar45);
  auVar40 = vfmadd231pd_avx512vl(auVar40,auVar29,auVar72);
  auVar42 = vfmadd231pd_avx512vl(auVar42,auVar29,auVar63);
  auVar41 = vfmadd231pd_avx512vl(auVar41,auVar29,auVar43);
  auVar55 = vfmadd231pd_avx512vl(auVar55,auVar29,auVar79);
  auVar44 = vmulpd_avx512vl(auVar27,auVar45);
  auVar47 = vmulpd_avx512vl(auVar27,auVar46);
  auVar85._0_8_ = dVar57 * auVar72._0_8_;
  auVar85._8_8_ = dVar58 * auVar72._8_8_;
  auVar85._16_8_ = dVar59 * auVar72._16_8_;
  auVar85._24_8_ = dVar60 * auVar72._24_8_;
  auVar48 = vmulpd_avx512vl(auVar24,auVar79);
  auVar49 = vmulpd_avx512vl(auVar24,auVar43);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar24,auVar72);
  auVar41 = vaddpd_avx512vl(auVar41,auVar47);
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar24,auVar63);
  auVar55 = vaddpd_avx512vl(auVar55,auVar44);
  auVar43 = vfmsub231pd_avx512vl(auVar85,auVar27,auVar43);
  auVar30 = vaddpd_avx512vl(auVar30,auVar43);
  auVar82._0_8_ = auVar27._0_8_ * auVar79._0_8_ - dVar57 * auVar63._0_8_;
  auVar82._8_8_ = auVar27._8_8_ * auVar79._8_8_ - dVar58 * auVar63._8_8_;
  auVar82._16_8_ = auVar27._16_8_ * auVar79._16_8_ - dVar59 * auVar63._16_8_;
  auVar82._24_8_ = auVar27._24_8_ * auVar79._24_8_ - dVar60 * auVar63._24_8_;
  auVar35 = vaddpd_avx512vl(auVar35,auVar82);
  auVar43 = vfmsub231pd_avx512vl(auVar49,auVar28,auVar46);
  auVar40 = vaddpd_avx512vl(auVar40,auVar43);
  auVar43 = vfmsub231pd_avx512vl(auVar48,auVar28,auVar45);
  auVar42 = vaddpd_avx512vl(auVar42,auVar43);
  auVar43 = vmulpd_avx512vl(auVar27,auVar37);
  auVar44 = vmulpd_avx512vl(auVar27,auVar38);
  auVar45 = vmulpd_avx512vl(auVar28,auVar36);
  auVar46 = vmulpd_avx512vl(auVar28,auVar39);
  auVar47 = vmulpd_avx512vl(auVar24,auVar34);
  auVar48 = vmulpd_avx512vl(auVar24,auVar56);
  auVar44 = vfmsub231pd_avx512vl(auVar44,auVar24,auVar39);
  auVar43 = vfmsub231pd_avx512vl(auVar43,auVar24,auVar36);
  auVar46 = vfmsub231pd_avx512vl(auVar46,auVar27,auVar56);
  auVar45 = vfmsub231pd_avx512vl(auVar45,auVar27,auVar34);
  auVar48 = vfmsub231pd_avx512vl(auVar48,auVar28,auVar38);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar28,auVar37);
  auVar45 = vaddpd_avx512vl(auVar45,auVar45);
  auVar46 = vaddpd_avx512vl(auVar46,auVar46);
  auVar64._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar64._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  auVar64._16_8_ = auVar47._16_8_ + auVar47._16_8_;
  auVar64._24_8_ = auVar47._24_8_ + auVar47._24_8_;
  auVar73._0_8_ = auVar48._0_8_ + auVar48._0_8_;
  auVar73._8_8_ = auVar48._8_8_ + auVar48._8_8_;
  auVar73._16_8_ = auVar48._16_8_ + auVar48._16_8_;
  auVar73._24_8_ = auVar48._24_8_ + auVar48._24_8_;
  auVar43 = vaddpd_avx512vl(auVar43,auVar43);
  auVar44 = vaddpd_avx512vl(auVar44,auVar44);
  auVar38 = vfmadd231pd_avx512vl(auVar38,auVar29,auVar46);
  auVar37 = vfmadd231pd_avx512vl(auVar37,auVar29,auVar45);
  auVar39 = vfmadd231pd_avx512vl(auVar39,auVar29,auVar73);
  auVar36 = vfmadd231pd_avx512vl(auVar36,auVar29,auVar64);
  auVar56 = vfmadd231pd_avx512vl(auVar56,auVar29,auVar44);
  auVar29 = vfmadd213pd_avx512vl(auVar29,auVar43,auVar34);
  auVar34 = vmulpd_avx512vl(auVar27,auVar45);
  auVar47 = vmulpd_avx512vl(auVar27,auVar46);
  auVar81._0_8_ = dVar57 * auVar64._0_8_;
  auVar81._8_8_ = dVar58 * auVar64._8_8_;
  auVar81._16_8_ = dVar59 * auVar64._16_8_;
  auVar81._24_8_ = dVar60 * auVar64._24_8_;
  auVar83._0_8_ = dVar57 * auVar73._0_8_;
  auVar83._8_8_ = dVar58 * auVar73._8_8_;
  auVar83._16_8_ = dVar59 * auVar73._16_8_;
  auVar83._24_8_ = dVar60 * auVar73._24_8_;
  auVar48 = vmulpd_avx512vl(auVar24,auVar43);
  auVar49 = vmulpd_avx512vl(auVar24,auVar44);
  auVar47 = vfmsub231pd_avx512vl(auVar47,auVar24,auVar73);
  auVar56 = vaddpd_avx512vl(auVar56,auVar47);
  auVar24 = vfmsub231pd_avx512vl(auVar34,auVar24,auVar64);
  auVar24 = vaddpd_avx512vl(auVar29,auVar24);
  auVar29 = vfmsub231pd_avx512vl(auVar83,auVar27,auVar44);
  auVar29 = vaddpd_avx512vl(auVar38,auVar29);
  auVar27 = vfmsub231pd_avx512vl(auVar81,auVar27,auVar43);
  auVar27 = vaddpd_avx512vl(auVar37,auVar27);
  auVar34 = vfmsub231pd_avx512vl(auVar49,auVar28,auVar46);
  auVar34 = vaddpd_avx512vl(auVar39,auVar34);
  auVar28 = vfmsub231pd_avx512vl(auVar48,auVar28,auVar45);
  auVar28 = vaddpd_avx512vl(auVar36,auVar28);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar36 = vbroadcastsd_avx512vl(auVar10);
  auVar30 = vmulpd_avx512vl(auVar36,auVar30);
  auVar35 = vmulpd_avx512vl(auVar36,auVar35);
  auVar40 = vmulpd_avx512vl(auVar25,auVar40);
  auVar42 = vmulpd_avx512vl(auVar25,auVar42);
  auVar38._0_8_ = auVar26._0_8_ * auVar41._0_8_;
  auVar38._8_8_ = auVar26._8_8_ * auVar41._8_8_;
  auVar38._16_8_ = auVar26._16_8_ * auVar41._16_8_;
  auVar38._24_8_ = auVar26._24_8_ * auVar41._24_8_;
  auVar41 = vmulpd_avx512vl(auVar26,auVar55);
  auVar29 = vmulpd_avx512vl(auVar36,auVar29);
  auVar27 = vmulpd_avx512vl(auVar36,auVar27);
  auVar34 = vmulpd_avx512vl(auVar25,auVar34);
  auVar39._0_8_ = auVar25._0_8_ * auVar28._0_8_;
  auVar39._8_8_ = auVar25._8_8_ * auVar28._8_8_;
  auVar39._16_8_ = auVar25._16_8_ * auVar28._16_8_;
  auVar39._24_8_ = auVar25._24_8_ * auVar28._24_8_;
  auVar25 = vmulpd_avx512vl(auVar26,auVar56);
  auVar19 = vcvtpd2ps_avx512vl(auVar35);
  auVar26 = vmulpd_avx512vl(auVar26,auVar24);
  auVar20 = vcvtpd2ps_avx512vl(auVar30);
  auVar52._16_16_ = auVar20;
  auVar52._0_16_ = auVar19;
  auVar20 = vcvtpd2ps_avx512vl(auVar42);
  auVar21 = vcvtpd2ps_avx512vl(auVar40);
  auVar22 = vcvtpd2ps_avx512vl(auVar41);
  auVar19 = vcvtpd2ps_avx(auVar38);
  auVar40._16_16_ = auVar21;
  auVar40._0_16_ = auVar20;
  auVar24 = vinsertf32x4_avx512vl(ZEXT1632(auVar22),auVar19,1);
  auVar19 = vcvtpd2ps_avx512vl(auVar27);
  auVar20 = vcvtpd2ps_avx512vl(auVar29);
  auVar29._16_16_ = auVar20;
  auVar29._0_16_ = auVar19;
  auVar19 = vcvtpd2ps_avx(auVar39);
  auVar20 = vcvtpd2ps_avx512vl(auVar34);
  auVar35._16_16_ = auVar20;
  auVar35._0_16_ = auVar19;
  auVar19 = vcvtpd2ps_avx512vl(auVar26);
  auVar20 = vcvtpd2ps_avx512vl(auVar25);
  auVar25 = vinsertf32x4_avx512vl(ZEXT1632(auVar19),auVar20,1);
  if (bVar17 == 0xff) {
    auVar27 = vpermt2ps_avx512vl(auVar24,
                                 ___ymm_00000004000000030000000200000001000000000000000c0000000b0000000a
                                 ,auVar40);
    auVar26 = vpermt2ps_avx512vl(auVar52,
                                 ___ymm_0000000000000002000000000000000900000001000000000000000800000000
                                 ,auVar40);
    auVar26 = vpermt2ps_avx512vl(auVar26,
                                 ___ymm_00000008000000060000000c00000004000000030000000b0000000100000000
                                 ,auVar27);
    *pauVar2 = auVar26;
    auVar26 = ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005;
    auVar27 = vpermt2ps_avx512vl(auVar27,
                                 ___ymm_0000000d00000007000000020000000c00000006000000010000000b00000005
                                 ,auVar52);
    pauVar2[1] = auVar27;
    auVar30 = ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002;
    auVar27 = ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e;
    auVar28 = vpermt2ps_avx512vl(auVar40,
                                 ___ymm_0000000700000007000000070000000700000006000000050000000f0000000e
                                 ,auVar52);
    auVar24 = vpermt2ps_avx512vl(auVar28,
                                 ___ymm_0000000f00000004000000010000000e00000003000000000000000d00000002
                                 ,auVar24);
    pauVar2[2] = auVar24;
    auVar24 = vpermi2ps_avx512vl(auVar31,auVar25,auVar35);
    auVar28 = vpermi2ps_avx512vl(auVar32,auVar29,auVar35);
    auVar28 = vpermt2ps_avx512vl(auVar28,auVar33,auVar24);
    *pauVar14 = auVar28;
    auVar26 = vpermt2ps_avx512vl(auVar24,auVar26,auVar29);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar12 * 0xc) = auVar26;
    auVar26 = vpermt2ps_avx512vl(auVar35,auVar27,auVar29);
    auVar25 = vpermt2ps_avx512vl(auVar26,auVar30,auVar25);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar12 * 0xc) = auVar25;
  }
  else {
    vscatterdps_avx512vl(ZEXT832(pauVar2) + auVar29,uVar18,auVar52);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar18,
               auVar40);
    vscatterdps_avx512vl
              (ZEXT832(pauVar2) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar18,
               auVar24);
    vscatterdps_avx512vl(ZEXT832(pauVar14) + auVar29,uVar18,auVar29);
    vscatterdps_avx512vl
              (ZEXT832(pauVar14) +
               ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004,uVar18,
               auVar35);
    vscatterdps_avx512vl
              (ZEXT832(pauVar14) +
               ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008,uVar18,
               auVar25);
  }
  return;
}

