// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 26

// ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_avx512skx @ 140311ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5,
               int param_6,uint param_7)

{
  int *piVar1;
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
  bool bVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined1 (*pauVar31) [32];
  undefined1 (*pauVar32) [32];
  byte bVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
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
  undefined1 auVar54 [64];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar55 [16];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM20 [64];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 local_38 [16];
  
  auVar50 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar49 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar48 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar55 = in_ZMM17._0_16_;
  auVar36 = in_ZMM16._0_16_;
  local_38 = in_ZMM8._0_16_;
  uVar27 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar27 = param_7;
  }
  auVar53._0_4_ = in_ZMM3._0_4_;
  if ((int)(uVar27 & 0xfffffff8) < 1) {
    uVar29 = 0;
  }
  else {
    auVar51._4_4_ = auVar53._0_4_;
    auVar51._0_4_ = auVar53._0_4_;
    auVar51._8_4_ = auVar53._0_4_;
    auVar51._12_4_ = auVar53._0_4_;
    auVar51._16_4_ = auVar53._0_4_;
    auVar51._20_4_ = auVar53._0_4_;
    auVar51._24_4_ = auVar53._0_4_;
    auVar51._28_4_ = auVar53._0_4_;
    auVar52._4_4_ = param_5;
    auVar52._0_4_ = param_5;
    auVar52._8_4_ = param_5;
    auVar52._12_4_ = param_5;
    auVar52._16_4_ = param_5;
    auVar52._20_4_ = param_5;
    auVar52._24_4_ = param_5;
    auVar52._28_4_ = param_5;
    pauVar32 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    pauVar31 = (undefined1 (*) [32])(param_2 + (longlong)param_6 * 0xc + 0x40);
    uVar30 = 0;
    auVar36 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar37 = vbroadcastss_avx512vl(ZEXT416((uint)__real_322bcc77));
    auVar55 = auVar37._0_16_;
    auVar35 = vxorps_avx512vl(in_ZMM20._0_16_,in_ZMM20._0_16_);
    uVar29 = 0;
    do {
      auVar38 = vshuff64x2_avx512vl(*pauVar32,pauVar32[2],0);
      auVar39 = vshuff64x2_avx512vl(*pauVar32,pauVar32[2],3);
      auVar40 = vshuff64x2_avx512vl(pauVar32[1],pauVar32[3],0);
      auVar41 = vshuff64x2_avx512vl(pauVar32[1],pauVar32[3],3);
      auVar42 = vunpckhps_avx512vl(auVar38,auVar39);
      auVar43 = vunpckhps_avx512vl(auVar40,auVar41);
      auVar44 = vunpckhpd_avx512vl(auVar42,auVar43);
      uVar24 = vcmpps_avx512vl(auVar44,ZEXT1632(auVar35),4);
      if ((char)uVar24 != '\0') {
        auVar42 = vunpcklpd_avx512vl(auVar42,auVar43);
        auVar38 = vunpcklps_avx512vl(auVar38,auVar39);
        auVar39 = vunpcklps_avx512vl(auVar40,auVar41);
        auVar40 = vunpckhpd_avx512vl(auVar38,auVar39);
        auVar41 = vunpcklpd_avx512vl(auVar38,auVar39);
        auVar38 = pauVar31[-1];
        auVar39 = vblendps_avx(auVar38,pauVar31[-2],0x24);
        auVar43 = vpermt2ps_avx512vl(pauVar31[-2],auVar48,auVar38);
        auVar39 = vpermt2ps_avx512vl(auVar39,auVar50,*pauVar31);
        auVar38 = vpermt2ps_avx512vl(*pauVar31,auVar49,auVar38);
        auVar45 = vinsertf32x4_avx512vl(auVar43,auVar38._0_16_,1);
        auVar38 = vshuff64x2_avx512vl(auVar43,auVar38,3);
        auVar41 = vsubps_avx512vl(auVar41,auVar45);
        auVar40 = vsubps_avx512vl(auVar40,auVar38);
        auVar42 = vsubps_avx512vl(auVar42,auVar39);
        auVar43 = vmulps_avx512vl(auVar40,auVar40);
        auVar43 = vfmadd231ps_avx512vl(auVar43,auVar41,auVar41);
        auVar43 = vfmadd231ps_avx512vl(auVar43,auVar42,auVar42);
        auVar46 = vfmadd213ps_avx512vl
                            (*(undefined1 (*) [32])(param_3 + (ulonglong)uVar30),auVar52,auVar51);
        auVar47 = vfmadd213ps_avx512vl(auVar46,auVar46,auVar37);
        uVar34 = vcmpps_avx512vl(auVar47,auVar43,1);
        uVar25 = vcmpps_avx512vl(auVar44,ZEXT1632(auVar35),4);
        uVar34 = uVar34 & uVar25;
        if ((char)uVar34 != '\0') {
          auVar43 = vsqrtps_avx512vl(auVar43);
          auVar43 = vdivps_avx512vl(auVar46,auVar43);
          auVar41 = vfmadd213ps_avx512vl(auVar41,auVar43,auVar45);
          auVar38 = vfmadd213ps_avx512vl(auVar40,auVar43,auVar38);
          auVar40 = vfmadd213ps_avx512vl(auVar42,auVar43,auVar39);
          if ((char)uVar34 == -1) {
            auVar39 = vunpcklps_avx512vl(auVar41,auVar38);
            auVar42 = vunpcklps_avx512vl(auVar40,auVar44);
            auVar43 = vunpcklpd_avx512vl(auVar39,auVar42);
            auVar39 = vunpckhpd_avx512vl(auVar39,auVar42);
            auVar38 = vunpckhps_avx512vl(auVar41,auVar38);
            auVar40 = vunpckhps_avx512vl(auVar40,auVar44);
            auVar41 = vunpcklpd_avx512vl(auVar38,auVar40);
            auVar38 = vunpckhpd_avx512vl(auVar38,auVar40);
            auVar40 = vinsertf32x4_avx512vl(auVar43,auVar39._0_16_,1);
            *pauVar32 = auVar40;
            auVar40 = vinsertf32x4_avx512vl(auVar41,auVar38._0_16_,1);
            pauVar32[1] = auVar40;
            auVar39 = vshuff64x2_avx512vl(auVar43,auVar39,3);
            pauVar32[2] = auVar39;
            auVar38 = vshuff64x2_avx512vl(auVar41,auVar38,3);
            pauVar32[3] = auVar38;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar32) + auVar52,uVar34,auVar41);
            vscatterdps_avx512vl(ZEXT832(pauVar32) + in_ZMM3._0_32_,uVar34,auVar38);
            vscatterdps_avx512vl(ZEXT832(pauVar32) + auVar49,uVar34,auVar40);
            vscatterdps_avx512vl(ZEXT832(pauVar32) + auVar39,uVar34,auVar44);
          }
        }
      }
      uVar29 = uVar29 + 8;
      uVar30 = uVar30 + 0x20;
      pauVar32 = pauVar32 + 4;
      pauVar31 = pauVar31 + 3;
    } while (uVar29 < (uVar27 & 0xfffffff8));
  }
  iVar28 = (int)uVar29;
  if (iVar28 < (int)param_7) {
    auVar48 = vpbroadcastd_avx512vl();
    auVar48 = vpor_avx2(auVar48,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar49 = vpbroadcastd_avx512vl();
    uVar29 = vpcmpgtd_avx512vl(auVar49,auVar48);
    pauVar31 = (undefined1 (*) [32])(param_1 + (longlong)(param_6 + iVar28) * 0x10);
    bVar33 = (byte)uVar29;
    if (bVar33 == 0xff) {
      auVar50 = vshuff64x2_avx512vl(*pauVar31,pauVar31[2],0);
      auVar37 = vshuff64x2_avx512vl(*pauVar31,pauVar31[2],3);
      auVar51 = vshuff64x2_avx512vl(pauVar31[1],pauVar31[3],0);
      auVar52 = vshuff64x2_avx512vl(pauVar31[1],pauVar31[3],3);
      auVar38 = vunpcklps_avx512vl(auVar50,auVar37);
      auVar50 = vunpckhps_avx512vl(auVar50,auVar37);
      auVar37 = vunpcklps_avx512vl(auVar51,auVar52);
      auVar51 = vunpckhps_avx512vl(auVar51,auVar52);
      auVar39 = vunpcklpd_avx512vl(auVar38,auVar37);
      auVar38 = vunpckhpd_avx512vl(auVar38,auVar37);
      auVar37 = vunpcklpd_avx512vl(auVar50,auVar51);
      auVar50 = vunpckhpd_avx512vl(auVar50,auVar51);
    }
    else {
      auVar50 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar31 * 2));
      auVar39._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar50._4_4_;
      auVar39._0_4_ = (uint)(bVar33 & 1) * auVar50._0_4_;
      auVar39._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar50._8_4_;
      auVar39._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar50._12_4_;
      auVar39._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar50._16_4_;
      auVar39._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar50._20_4_;
      auVar39._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar50._24_4_;
      auVar39._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar50._28_4_;
      auVar36 = vxorps_avx512vl(auVar36,auVar36);
      auVar50 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar31 * 2));
      auVar38._0_4_ = (uint)(bVar33 & 1) * auVar50._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar36._0_4_
      ;
      bVar2 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar38._4_4_ = (uint)bVar2 * auVar50._4_4_ | (uint)!bVar2 * auVar36._4_4_;
      bVar2 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar38._8_4_ = (uint)bVar2 * auVar50._8_4_ | (uint)!bVar2 * auVar36._8_4_;
      bVar2 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar38._12_4_ = (uint)bVar2 * auVar50._12_4_ | (uint)!bVar2 * auVar36._12_4_;
      auVar38._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar50._16_4_;
      auVar38._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar50._20_4_;
      auVar38._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar50._24_4_;
      auVar38._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar50._28_4_;
      auVar36 = vxorps_avx512vl(auVar55,auVar55);
      auVar50 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar31 * 2));
      auVar37._0_4_ = (uint)(bVar33 & 1) * auVar50._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar36._0_4_
      ;
      bVar2 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar37._4_4_ = (uint)bVar2 * auVar50._4_4_ | (uint)!bVar2 * auVar36._4_4_;
      bVar2 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar37._8_4_ = (uint)bVar2 * auVar50._8_4_ | (uint)!bVar2 * auVar36._8_4_;
      bVar2 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar37._12_4_ = (uint)bVar2 * auVar50._12_4_ | (uint)!bVar2 * auVar36._12_4_;
      auVar37._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar50._16_4_;
      auVar37._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar50._20_4_;
      auVar37._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar50._24_4_;
      auVar37._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar50._28_4_;
      auVar51 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar31 + param_2));
      auVar50._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar51._4_4_;
      auVar50._0_4_ = (uint)(bVar33 & 1) * auVar51._0_4_;
      auVar50._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar51._8_4_;
      auVar50._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar51._12_4_;
      auVar50._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar51._16_4_;
      auVar50._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar51._20_4_;
      auVar50._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar51._24_4_;
      auVar50._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar51._28_4_;
    }
    uVar26 = vpcmpd_avx512vl(auVar48,auVar49,5);
    bVar2 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar9 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar12 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar15 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar18 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar21 = SUB81(uVar29 >> 7,0);
    bVar3 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar10 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar13 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar16 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar19 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar22 = SUB81(uVar29 >> 7,0);
    bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar11 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar14 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar17 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar20 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar23 = SUB81(uVar29 >> 7,0);
    auVar54 = ZEXT1664((undefined1  [16])0x0);
    uVar24 = vcmpps_avx512vl(auVar50,auVar54._0_32_,0);
    if ((byte)((byte)uVar24 | (byte)uVar26) != 0xff) {
      pauVar32 = (undefined1 (*) [32])(param_2 + (longlong)(param_6 + iVar28) * 0xc);
      if (bVar33 == 0xff) {
        auVar48 = pauVar32[1];
        auVar49 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,*pauVar32,auVar48);
        auVar51 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,pauVar32[2],auVar48);
        auVar40 = vinsertf32x4_avx512vl(auVar49,auVar51._0_16_,1);
        auVar49 = vshuff64x2_avx512vl(auVar49,auVar51,3);
        auVar48 = vblendps_avx(auVar48,*pauVar32,0x24);
        auVar48 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar48,pauVar32[2]);
      }
      else {
        auVar48 = vgatherdps_avx512vl(*(undefined4 *)*pauVar32);
        auVar40._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar48._4_4_;
        auVar40._0_4_ = (uint)(bVar33 & 1) * auVar48._0_4_;
        bVar8 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar40._8_4_ = (uint)bVar8 * auVar48._8_4_ | (uint)!bVar8 * auVar54._8_4_;
        bVar8 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar40._12_4_ = (uint)bVar8 * auVar48._12_4_ | (uint)!bVar8 * auVar54._12_4_;
        auVar40._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar48._16_4_;
        auVar40._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar48._20_4_;
        auVar40._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar48._24_4_;
        auVar40._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar48._28_4_;
        auVar48 = vgatherdps_avx512vl(*(undefined4 *)(local_38 + (longlong)*pauVar32));
        auVar49._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar48._4_4_;
        auVar49._0_4_ = (uint)(bVar33 & 1) * auVar48._0_4_;
        auVar49._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar48._8_4_;
        auVar49._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar48._12_4_;
        auVar49._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar48._16_4_;
        auVar49._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar48._20_4_;
        auVar49._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar48._24_4_;
        auVar49._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar48._28_4_;
        auVar36 = vxorps_avx512vl(auVar38._0_16_,auVar38._0_16_);
        auVar51 = vgatherdps_avx512vl(*(undefined4 *)(local_38 + (longlong)*pauVar32));
        auVar48._0_4_ =
             (uint)(bVar33 & 1) * auVar51._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar36._0_4_;
        bVar8 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar48._4_4_ = (uint)bVar8 * auVar51._4_4_ | (uint)!bVar8 * auVar36._4_4_;
        bVar8 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar48._8_4_ = (uint)bVar8 * auVar51._8_4_ | (uint)!bVar8 * auVar36._8_4_;
        bVar8 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar48._12_4_ = (uint)bVar8 * auVar51._12_4_ | (uint)!bVar8 * auVar36._12_4_;
        auVar48._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar51._16_4_;
        auVar48._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar51._20_4_;
        auVar48._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar51._24_4_;
        auVar48._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar51._28_4_;
      }
      auVar41._4_4_ = (uint)bVar2 * auVar39._4_4_ | (uint)!bVar2 * iStack_bc;
      auVar41._0_4_ = (uint)(bVar33 & 1) * auVar39._0_4_ | (uint)!(bool)(bVar33 & 1) * local_c0;
      auVar41._8_4_ = (uint)bVar5 * auVar39._8_4_ | (uint)!bVar5 * iStack_b8;
      auVar41._12_4_ = (uint)bVar9 * auVar39._12_4_ | (uint)!bVar9 * iStack_b4;
      auVar41._16_4_ = (uint)bVar12 * auVar39._16_4_ | (uint)!bVar12 * iStack_b0;
      auVar41._20_4_ = (uint)bVar15 * auVar39._20_4_ | (uint)!bVar15 * iStack_ac;
      auVar41._24_4_ = (uint)bVar18 * auVar39._24_4_ | (uint)!bVar18 * iStack_a8;
      auVar41._28_4_ = (uint)bVar21 * auVar39._28_4_ | (uint)!bVar21 * iStack_a4;
      auVar42._4_4_ = (uint)bVar3 * auVar38._4_4_ | (uint)!bVar3 * iStack_9c;
      auVar42._0_4_ = (uint)(bVar33 & 1) * auVar38._0_4_ | (uint)!(bool)(bVar33 & 1) * local_a0;
      auVar42._8_4_ = (uint)bVar6 * auVar38._8_4_ | (uint)!bVar6 * iStack_98;
      auVar42._12_4_ = (uint)bVar10 * auVar38._12_4_ | (uint)!bVar10 * iStack_94;
      auVar42._16_4_ = (uint)bVar13 * auVar38._16_4_ | (uint)!bVar13 * iStack_90;
      auVar42._20_4_ = (uint)bVar16 * auVar38._20_4_ | (uint)!bVar16 * iStack_8c;
      auVar42._24_4_ = (uint)bVar19 * auVar38._24_4_ | (uint)!bVar19 * iStack_88;
      auVar42._28_4_ = (uint)bVar22 * auVar38._28_4_ | (uint)!bVar22 * iStack_84;
      auVar43._4_4_ = (uint)bVar4 * auVar37._4_4_ | (uint)!bVar4 * iStack_7c;
      auVar43._0_4_ = (uint)(bVar33 & 1) * auVar37._0_4_ | (uint)!(bool)(bVar33 & 1) * local_80;
      auVar43._8_4_ = (uint)bVar7 * auVar37._8_4_ | (uint)!bVar7 * iStack_78;
      auVar43._12_4_ = (uint)bVar11 * auVar37._12_4_ | (uint)!bVar11 * iStack_74;
      auVar43._16_4_ = (uint)bVar14 * auVar37._16_4_ | (uint)!bVar14 * iStack_70;
      auVar43._20_4_ = (uint)bVar17 * auVar37._20_4_ | (uint)!bVar17 * iStack_6c;
      auVar43._24_4_ = (uint)bVar20 * auVar37._24_4_ | (uint)!bVar20 * iStack_68;
      auVar43._28_4_ = (uint)bVar23 * auVar37._28_4_ | (uint)!bVar23 * iStack_64;
      auVar37 = vsubps_avx512vl(auVar41,auVar40);
      auVar51 = vsubps_avx512vl(auVar42,auVar49);
      auVar52 = vsubps_avx512vl(auVar43,auVar48);
      auVar38 = vmulps_avx512vl(auVar51,auVar51);
      auVar38 = vfmadd231ps_avx512vl(auVar38,auVar37,auVar37);
      auVar38 = vfmadd231ps_avx512vl(auVar38,auVar52,auVar52);
      auVar53._4_4_ = auVar53._0_4_;
      auVar53._8_4_ = auVar53._0_4_;
      auVar53._12_4_ = auVar53._0_4_;
      auVar53._16_4_ = auVar53._0_4_;
      auVar53._20_4_ = auVar53._0_4_;
      auVar53._24_4_ = auVar53._0_4_;
      auVar53._28_4_ = auVar53._0_4_;
      auVar39 = vbroadcastss_avx512vl(ZEXT416(param_5));
      piVar1 = (int *)(param_3 + (iVar28 << 2));
      auVar44._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * piVar1[1];
      auVar44._0_4_ = (uint)(bVar33 & 1) * *piVar1;
      auVar44._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * piVar1[2];
      auVar44._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * piVar1[3];
      auVar44._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * piVar1[4];
      auVar44._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * piVar1[5];
      auVar44._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * piVar1[6];
      auVar44._28_4_ = (uint)(byte)(uVar29 >> 7) * piVar1[7];
      auVar53 = vfmadd213ps_avx512vl(auVar44,auVar39,auVar53);
      uVar24 = vcmpps_avx512vl(auVar50,ZEXT432(0) << 0x20,4);
      auVar45._0_4_ = auVar53._0_4_ * auVar53._0_4_ + __real_322bcc77;
      auVar45._4_4_ = auVar53._4_4_ * auVar53._4_4_ + __real_322bcc77;
      auVar45._8_4_ = auVar53._8_4_ * auVar53._8_4_ + __real_322bcc77;
      auVar45._12_4_ = auVar53._12_4_ * auVar53._12_4_ + __real_322bcc77;
      auVar45._16_4_ = auVar53._16_4_ * auVar53._16_4_ + __real_322bcc77;
      auVar45._20_4_ = auVar53._20_4_ * auVar53._20_4_ + __real_322bcc77;
      auVar45._24_4_ = auVar53._24_4_ * auVar53._24_4_ + __real_322bcc77;
      auVar45._28_4_ = auVar53._28_4_ * auVar53._28_4_ + __real_322bcc77;
      uVar26 = vcmpps_avx512vl(auVar45,auVar38,1);
      bVar33 = (byte)uVar24 & (byte)uVar26 & bVar33;
      uVar29 = (ulonglong)bVar33;
      if (bVar33 != 0) {
        auVar38 = vsqrtps_avx512vl(auVar38);
        auVar53 = vdivps_avx(auVar53,auVar38);
        auVar37 = vfmadd213ps_avx512vl(auVar37,auVar53,auVar40);
        auVar49 = vfmadd213ps_avx512vl(auVar51,auVar53,auVar49);
        auVar48 = vfmadd213ps_avx512vl(auVar52,auVar53,auVar48);
        if (bVar33 == 0xff) {
          auVar52 = vunpcklps_avx512vl(auVar37,auVar49);
          auVar53 = vunpcklps_avx(auVar48,auVar50);
          auVar51 = vunpcklpd_avx(auVar52,auVar53);
          auVar53 = vunpckhpd_avx(auVar52,auVar53);
          auVar37 = vunpckhps_avx512vl(auVar37,auVar49);
          auVar48 = vunpckhps_avx(auVar48,auVar50);
          auVar49 = vunpcklpd_avx(auVar37,auVar48);
          auVar48 = vunpckhpd_avx(auVar37,auVar48);
          auVar46._16_16_ = auVar53._0_16_;
          auVar46._0_16_ = auVar51._0_16_;
          *pauVar31 = auVar46;
          auVar47._16_16_ = auVar48._0_16_;
          auVar47._0_16_ = auVar49._0_16_;
          pauVar31[1] = auVar47;
          auVar50 = vperm2f128_avx(auVar51,auVar53,0x31);
          pauVar31[2] = auVar50;
          auVar48 = vperm2f128_avx(auVar49,auVar48,0x31);
          pauVar31[3] = auVar48;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar31) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar29,
                     auVar37);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar31) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar29,
                     auVar49);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar31) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar29,
                     auVar48);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar31) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar29,
                     auVar50);
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraintsWithoutMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_avx512skx @ 1403120d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithoutMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,undefined8 param_3,int param_4,uint param_5)

{
  bool bVar1;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [32];
  longlong lVar26;
  longlong unaff_RBX;
  undefined1 (*pauVar27) [32];
  uint uVar28;
  ulonglong uVar29;
  undefined1 (*pauVar30) [32];
  byte bVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar48;
  undefined1 in_ZMM2 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar52 [16];
  undefined1 in_ZMM21 [64];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  auVar45 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar44 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar43 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar52 = in_ZMM21._0_16_;
  auVar34 = in_ZMM16._0_16_;
  local_28 = in_ZMM8._0_16_;
  local_38 = in_ZMM7._0_16_;
  uVar28 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar28 = param_5;
  }
  fVar48 = in_ZMM2._0_4_;
  if ((int)(uVar28 & 0xfffffff8) < 1) {
    uVar29 = 0;
  }
  else {
    auVar46._4_4_ = fVar48;
    auVar46._0_4_ = fVar48;
    auVar46._8_4_ = fVar48;
    auVar46._12_4_ = fVar48;
    auVar46._16_4_ = fVar48;
    auVar46._20_4_ = fVar48;
    auVar46._24_4_ = fVar48;
    auVar46._28_4_ = fVar48;
    auVar47._0_4_ = fVar48 * fVar48 + __real_322bcc77;
    auVar47._4_4_ = auVar47._0_4_;
    auVar47._8_4_ = auVar47._0_4_;
    auVar47._12_4_ = auVar47._0_4_;
    auVar47._16_4_ = auVar47._0_4_;
    auVar47._20_4_ = auVar47._0_4_;
    auVar47._24_4_ = auVar47._0_4_;
    auVar47._28_4_ = auVar47._0_4_;
    pauVar30 = (undefined1 (*) [32])((longlong)param_4 * 0x10 + param_1);
    pauVar27 = (undefined1 (*) [32])(param_2 + (longlong)param_4 * 0xc + 0x40);
    uVar29 = 0;
    auVar49._0_12_ = ZEXT812(0);
    auVar49._12_4_ = 0;
    auVar34 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    do {
      auVar35 = vshuff64x2_avx512vl(*pauVar30,pauVar30[2],0);
      auVar36 = vshuff64x2_avx512vl(*pauVar30,pauVar30[2],3);
      auVar37 = vshuff64x2_avx512vl(pauVar30[1],pauVar30[3],0);
      auVar38 = vshuff64x2_avx512vl(pauVar30[1],pauVar30[3],3);
      auVar39 = vunpckhps_avx512vl(auVar35,auVar36);
      auVar40 = vunpckhps_avx512vl(auVar37,auVar38);
      auVar41 = vunpckhpd_avx512vl(auVar39,auVar40);
      auVar52 = auVar41._0_16_;
      uVar23 = vcmpps_avx512vl(auVar41,ZEXT1632(auVar49),4);
      if ((char)uVar23 != '\0') {
        auVar39 = vunpcklpd_avx512vl(auVar39,auVar40);
        auVar36 = vunpcklps_avx512vl(auVar35,auVar36);
        auVar37 = vunpcklps_avx512vl(auVar37,auVar38);
        auVar38 = vunpckhpd_avx512vl(auVar36,auVar37);
        auVar35 = pauVar27[-1];
        auVar37 = vunpcklpd_avx512vl(auVar36,auVar37);
        auVar36 = vblendps_avx(auVar35,pauVar27[-2],0x24);
        auVar40 = vpermt2ps_avx512vl(pauVar27[-2],auVar43,auVar35);
        auVar36 = vpermt2ps_avx512vl(auVar36,auVar45,*pauVar27);
        auVar35 = vpermt2ps_avx512vl(*pauVar27,auVar44,auVar35);
        auVar42 = vinsertf32x4_avx512vl(auVar40,auVar35._0_16_,1);
        auVar35 = vshuff64x2_avx512vl(auVar40,auVar35,3);
        auVar37 = vsubps_avx512vl(auVar37,auVar42);
        auVar38 = vsubps_avx512vl(auVar38,auVar35);
        auVar39 = vsubps_avx512vl(auVar39,auVar36);
        auVar40 = vmulps_avx512vl(auVar38,auVar38);
        auVar40 = vfmadd231ps_avx512vl(auVar40,auVar37,auVar37);
        auVar40 = vfmadd231ps_avx512vl(auVar40,auVar39,auVar39);
        uVar32 = vcmpps_avx512vl(auVar47,auVar40,1);
        uVar33 = vcmpps_avx512vl(auVar41,ZEXT1632(auVar49),4);
        uVar32 = uVar32 & uVar33;
        if ((char)uVar32 != '\0') {
          auVar40 = vsqrtps_avx512vl(auVar40);
          auVar40 = vdivps_avx512vl(auVar46,auVar40);
          auVar37 = vfmadd213ps_avx512vl(auVar37,auVar40,auVar42);
          auVar35 = vfmadd213ps_avx512vl(auVar38,auVar40,auVar35);
          auVar36 = vfmadd213ps_avx512vl(auVar39,auVar40,auVar36);
          if ((char)uVar32 == -1) {
            auVar38 = vunpcklps_avx512vl(auVar37,auVar35);
            auVar39 = vunpcklps_avx512vl(auVar36,auVar41);
            auVar40 = vunpcklpd_avx512vl(auVar38,auVar39);
            auVar38 = vunpckhpd_avx512vl(auVar38,auVar39);
            auVar35 = vunpckhps_avx512vl(auVar37,auVar35);
            auVar36 = vunpckhps_avx512vl(auVar36,auVar41);
            auVar37 = vunpcklpd_avx512vl(auVar35,auVar36);
            auVar35 = vunpckhpd_avx512vl(auVar35,auVar36);
            auVar36 = vinsertf32x4_avx512vl(auVar40,auVar38._0_16_,1);
            *pauVar30 = auVar36;
            auVar36 = vinsertf32x4_avx512vl(auVar37,auVar35._0_16_,1);
            pauVar30[1] = auVar36;
            auVar36 = vshuff64x2_avx512vl(auVar40,auVar38,3);
            pauVar30[2] = auVar36;
            auVar35 = vshuff64x2_avx512vl(auVar37,auVar35,3);
            auVar52 = auVar35._0_16_;
            pauVar30[3] = auVar35;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar30) + auVar47,uVar32,auVar37);
            vscatterdps_avx512vl(ZEXT832(pauVar30) + in_ZMM2._0_32_,uVar32,auVar35);
            vscatterdps_avx512vl(ZEXT832(pauVar30) + ZEXT1632(auVar49),uVar32,auVar36);
            vscatterdps_avx512vl(ZEXT832(pauVar30) + auVar43,uVar32,auVar41);
          }
        }
      }
      uVar29 = uVar29 + 8;
      pauVar30 = pauVar30 + 4;
      pauVar27 = pauVar27 + 3;
    } while (uVar29 < (uVar28 & 0xfffffff8));
  }
  if ((int)uVar29 < (int)param_5) {
    auVar43 = vpbroadcastd_avx512vl();
    auVar43 = vpor_avx2(auVar43,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar44 = vpbroadcastd_avx512vl();
    uVar32 = vpcmpgtd_avx512vl(auVar44,auVar43);
    lVar26 = (longlong)(param_4 + (int)uVar29);
    pauVar27 = (undefined1 (*) [32])(param_1 + lVar26 * 0x10);
    bVar31 = (byte)uVar32;
    if (bVar31 == 0xff) {
      auVar46 = vshuff64x2_avx512vl(*pauVar27,pauVar27[2],0);
      auVar45 = vperm2f128_avx(*pauVar27,pauVar27[2],0x31);
      auVar47 = vshuff64x2_avx512vl(pauVar27[1],pauVar27[3],0);
      auVar35 = vshuff64x2_avx512vl(pauVar27[1],pauVar27[3],3);
      auVar36 = vunpcklps_avx512vl(auVar46,auVar45);
      auVar45 = vunpckhps_avx512vl(auVar46,auVar45);
      auVar46 = vunpcklps_avx512vl(auVar47,auVar35);
      auVar34 = auVar46._0_16_;
      auVar47 = vunpckhps_avx512vl(auVar47,auVar35);
      auVar37 = vunpcklpd_avx512vl(auVar36,auVar46);
      auVar36 = vunpckhpd_avx512vl(auVar36,auVar46);
      auVar35 = vunpcklpd_avx512vl(auVar45,auVar47);
      auVar45 = vunpckhpd_avx512vl(auVar45,auVar47);
    }
    else {
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + unaff_RBX));
      auVar37._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar45._4_4_;
      auVar37._0_4_ = (uint)(bVar31 & 1) * auVar45._0_4_;
      auVar37._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar45._8_4_;
      auVar37._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar45._12_4_;
      auVar37._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar45._16_4_;
      auVar37._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar45._20_4_;
      auVar37._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar45._24_4_;
      auVar37._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar45._28_4_;
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + unaff_RBX));
      auVar36._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar45._4_4_;
      auVar36._0_4_ = (uint)(bVar31 & 1) * auVar45._0_4_;
      auVar36._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar45._8_4_;
      auVar36._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar45._12_4_;
      auVar36._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar45._16_4_;
      auVar36._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar45._20_4_;
      auVar36._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar45._24_4_;
      auVar36._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar45._28_4_;
      auVar34 = vxorps_avx512vl(auVar34,auVar34);
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + unaff_RBX));
      auVar35._0_4_ = (uint)(bVar31 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar31 & 1) * auVar34._0_4_
      ;
      bVar1 = (bool)((byte)(uVar32 >> 1) & 1);
      auVar35._4_4_ = (uint)bVar1 * auVar45._4_4_ | (uint)!bVar1 * auVar34._4_4_;
      bVar1 = (bool)((byte)(uVar32 >> 2) & 1);
      auVar35._8_4_ = (uint)bVar1 * auVar45._8_4_ | (uint)!bVar1 * auVar34._8_4_;
      bVar1 = (bool)((byte)(uVar32 >> 3) & 1);
      auVar35._12_4_ = (uint)bVar1 * auVar45._12_4_ | (uint)!bVar1 * auVar34._12_4_;
      auVar35._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar45._16_4_;
      auVar35._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar45._20_4_;
      auVar35._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar45._24_4_;
      auVar35._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar45._28_4_;
      auVar34 = __ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c._0_16_;
      auVar46 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar27 * 2));
      auVar45._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar46._4_4_;
      auVar45._0_4_ = (uint)(bVar31 & 1) * auVar46._0_4_;
      auVar45._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar46._8_4_;
      auVar45._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar46._12_4_;
      auVar45._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar46._16_4_;
      auVar45._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar46._20_4_;
      auVar45._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar46._24_4_;
      auVar45._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar46._28_4_;
    }
    uVar24 = vpcmpd_avx512vl(auVar43,auVar44,5);
    bVar1 = (bool)((byte)(uVar32 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar32 >> 2) & 1);
    bVar8 = (bool)((byte)(uVar32 >> 3) & 1);
    bVar11 = (bool)((byte)(uVar32 >> 4) & 1);
    bVar14 = (bool)((byte)(uVar32 >> 5) & 1);
    bVar17 = (bool)((byte)(uVar32 >> 6) & 1);
    bVar20 = SUB81(uVar32 >> 7,0);
    bVar2 = (bool)((byte)(uVar32 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar32 >> 2) & 1);
    bVar9 = (bool)((byte)(uVar32 >> 3) & 1);
    bVar12 = (bool)((byte)(uVar32 >> 4) & 1);
    bVar15 = (bool)((byte)(uVar32 >> 5) & 1);
    bVar18 = (bool)((byte)(uVar32 >> 6) & 1);
    bVar21 = SUB81(uVar32 >> 7,0);
    bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar32 >> 2) & 1);
    bVar10 = (bool)((byte)(uVar32 >> 3) & 1);
    bVar13 = (bool)((byte)(uVar32 >> 4) & 1);
    bVar16 = (bool)((byte)(uVar32 >> 5) & 1);
    bVar19 = (bool)((byte)(uVar32 >> 6) & 1);
    bVar22 = SUB81(uVar32 >> 7,0);
    uVar23 = vcmpps_avx512vl(auVar45,ZEXT832(0) << 0x20,0);
    if ((byte)((byte)uVar23 | (byte)uVar24) != 0xff) {
      pauVar30 = (undefined1 (*) [32])(param_2 + lVar26 * 0xc);
      if (bVar31 == 0xff) {
        auVar46 = pauVar30[1];
        auVar47 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,*pauVar30,auVar46);
        auVar38 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,pauVar30[2],auVar46);
        auVar39 = vinsertf32x4_avx512vl(auVar47,auVar38._0_16_,1);
        auVar40 = vshuff64x2_avx512vl(auVar47,auVar38,3);
        auVar46 = vblendps_avx(auVar46,*pauVar30,0x24);
        auVar38 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar46,pauVar30[2]);
      }
      else {
        auVar46 = vgatherdps_avx512vl(*(undefined4 *)(local_38 + (longlong)*pauVar30));
        auVar39._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar46._4_4_;
        auVar39._0_4_ = (uint)(bVar31 & 1) * auVar46._0_4_;
        auVar39._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar46._8_4_;
        auVar39._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar46._12_4_;
        auVar39._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar46._16_4_;
        auVar39._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar46._20_4_;
        auVar39._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar46._24_4_;
        auVar39._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar46._28_4_;
        auVar46 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar30 * 2));
        auVar40._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar46._4_4_;
        auVar40._0_4_ = (uint)(bVar31 & 1) * auVar46._0_4_;
        auVar40._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar46._8_4_;
        auVar40._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar46._12_4_;
        auVar40._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar46._16_4_;
        auVar40._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar46._20_4_;
        auVar40._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar46._24_4_;
        auVar40._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar46._28_4_;
        auVar34 = vxorps_avx512vl(auVar34,auVar34);
        auVar46 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar30 * 2));
        auVar38._0_4_ =
             (uint)(bVar31 & 1) * auVar46._0_4_ | (uint)!(bool)(bVar31 & 1) * auVar34._0_4_;
        bVar4 = (bool)((byte)(uVar32 >> 1) & 1);
        auVar38._4_4_ = (uint)bVar4 * auVar46._4_4_ | (uint)!bVar4 * auVar34._4_4_;
        bVar4 = (bool)((byte)(uVar32 >> 2) & 1);
        auVar38._8_4_ = (uint)bVar4 * auVar46._8_4_ | (uint)!bVar4 * auVar34._8_4_;
        bVar4 = (bool)((byte)(uVar32 >> 3) & 1);
        auVar38._12_4_ = (uint)bVar4 * auVar46._12_4_ | (uint)!bVar4 * auVar34._12_4_;
        auVar38._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar46._16_4_;
        auVar38._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar46._20_4_;
        auVar38._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar46._24_4_;
        auVar38._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar46._28_4_;
      }
      auVar41._4_4_ = (uint)bVar1 * auVar37._4_4_ | (uint)!bVar1 * iStack_bc;
      auVar41._0_4_ = (uint)(bVar31 & 1) * auVar37._0_4_ | (uint)!(bool)(bVar31 & 1) * local_c0;
      auVar41._8_4_ = (uint)bVar5 * auVar37._8_4_ | (uint)!bVar5 * iStack_b8;
      auVar41._12_4_ = (uint)bVar8 * auVar37._12_4_ | (uint)!bVar8 * iStack_b4;
      auVar41._16_4_ = (uint)bVar11 * auVar37._16_4_ | (uint)!bVar11 * iStack_b0;
      auVar41._20_4_ = (uint)bVar14 * auVar37._20_4_ | (uint)!bVar14 * iStack_ac;
      auVar41._24_4_ = (uint)bVar17 * auVar37._24_4_ | (uint)!bVar17 * iStack_a8;
      auVar41._28_4_ = (uint)bVar20 * auVar37._28_4_ | (uint)!bVar20 * iStack_a4;
      auVar42._4_4_ = (uint)bVar2 * auVar36._4_4_ | (uint)!bVar2 * iStack_9c;
      auVar42._0_4_ = (uint)(bVar31 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar31 & 1) * local_a0;
      auVar42._8_4_ = (uint)bVar6 * auVar36._8_4_ | (uint)!bVar6 * iStack_98;
      auVar42._12_4_ = (uint)bVar9 * auVar36._12_4_ | (uint)!bVar9 * iStack_94;
      auVar42._16_4_ = (uint)bVar12 * auVar36._16_4_ | (uint)!bVar12 * iStack_90;
      auVar42._20_4_ = (uint)bVar15 * auVar36._20_4_ | (uint)!bVar15 * iStack_8c;
      auVar42._24_4_ = (uint)bVar18 * auVar36._24_4_ | (uint)!bVar18 * iStack_88;
      auVar42._28_4_ = (uint)bVar21 * auVar36._28_4_ | (uint)!bVar21 * iStack_84;
      auVar25._4_4_ = (uint)bVar3 * auVar35._4_4_ | (uint)!bVar3 * iStack_7c;
      auVar25._0_4_ = (uint)(bVar31 & 1) * auVar35._0_4_ | (uint)!(bool)(bVar31 & 1) * local_80;
      auVar25._8_4_ = (uint)bVar7 * auVar35._8_4_ | (uint)!bVar7 * iStack_78;
      auVar25._12_4_ = (uint)bVar10 * auVar35._12_4_ | (uint)!bVar10 * iStack_74;
      auVar25._16_4_ = (uint)bVar13 * auVar35._16_4_ | (uint)!bVar13 * iStack_70;
      auVar25._20_4_ = (uint)bVar16 * auVar35._20_4_ | (uint)!bVar16 * iStack_6c;
      auVar25._24_4_ = (uint)bVar19 * auVar35._24_4_ | (uint)!bVar19 * iStack_68;
      auVar25._28_4_ = (uint)bVar22 * auVar35._28_4_ | (uint)!bVar22 * iStack_64;
      auVar46 = vsubps_avx512vl(auVar41,auVar39);
      auVar47 = vsubps_avx512vl(auVar42,auVar40);
      auVar35 = vsubps_avx512vl(auVar25,auVar38);
      auVar36 = vmulps_avx512vl(auVar47,auVar47);
      auVar36 = vfmadd231ps_avx512vl(auVar36,auVar46,auVar46);
      auVar34 = vxorps_avx512vl(auVar52,auVar52);
      uVar29 = vcmpps_avx512vl(auVar45,ZEXT1632(auVar34),4);
      auVar36 = vfmadd231ps_avx512vl(auVar36,auVar35,auVar35);
      auVar34 = vfmadd231ss_avx512f(ZEXT416((uint)__real_322bcc77),in_ZMM2._0_16_,in_ZMM2._0_16_);
      auVar37 = vbroadcastss_avx512vl(auVar34);
      uVar32 = vcmpps_avx512vl(auVar37,auVar36,1);
      uVar33 = vpcmpgtd_avx512vl(auVar44,auVar43);
      uVar33 = uVar29 & uVar32 & uVar33;
      if ((char)uVar33 != '\0') {
        auVar43 = vsqrtps_avx512vl(auVar36);
        auVar44._4_4_ = fVar48;
        auVar44._0_4_ = fVar48;
        auVar44._8_4_ = fVar48;
        auVar44._12_4_ = fVar48;
        auVar44._16_4_ = fVar48;
        auVar44._20_4_ = fVar48;
        auVar44._24_4_ = fVar48;
        auVar44._28_4_ = fVar48;
        auVar43 = vdivps_avx(auVar44,auVar43);
        auVar44 = vfmadd213ps_avx512vl(auVar46,auVar43,auVar39);
        auVar46 = vfmadd213ps_avx512vl(auVar47,auVar43,auVar40);
        auVar43 = vfmadd213ps_avx512vl(auVar35,auVar43,auVar38);
        if ((char)uVar33 == -1) {
          auVar47 = vunpcklps_avx512vl(auVar44,auVar46);
          auVar36 = vunpcklps_avx512vl(auVar43,auVar45);
          auVar35 = vunpcklpd_avx(auVar47,auVar36);
          auVar47 = vunpckhpd_avx(auVar47,auVar36);
          auVar46 = vunpckhps_avx512vl(auVar44,auVar46);
          auVar43 = vunpckhps_avx512vl(auVar43,auVar45);
          auVar44 = vunpcklpd_avx(auVar46,auVar43);
          auVar43 = vunpckhpd_avx(auVar46,auVar43);
          auVar50._16_16_ = auVar47._0_16_;
          auVar50._0_16_ = auVar35._0_16_;
          *pauVar27 = auVar50;
          auVar51._16_16_ = auVar43._0_16_;
          auVar51._0_16_ = auVar44._0_16_;
          pauVar27[1] = auVar51;
          auVar45 = vperm2f128_avx(auVar35,auVar47,0x31);
          pauVar27[2] = auVar45;
          auVar43 = vperm2f128_avx(auVar44,auVar43,0x31);
          pauVar27[3] = auVar43;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar27) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar33,
                     auVar44);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar27) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar33,
                     auVar46);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar27) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar33,
                     auVar43);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar27) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar33,
                     auVar45);
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCuniCuni_avx512skx @ 140312680

void ApplySphericalConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCuniCuni_avx512skx
               (void)

{
  ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_avx512skx
            ();
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx512skx @ 1403126c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,uint param_8,uint param_9,int param_10,uint param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined1 (*pauVar33) [32];
  uint uVar34;
  ulonglong uVar35;
  longlong lVar36;
  uint uVar37;
  byte bVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 in_ZMM17 [64];
  undefined1 auVar71 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar72 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar73 [16];
  undefined1 in_ZMM23 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar64 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar63 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar62 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar73 = in_ZMM23._0_16_;
  auVar72 = in_ZMM19._0_16_;
  auVar71 = in_ZMM18._0_16_;
  auVar42 = in_ZMM17._0_16_;
  uVar34 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar34 = param_11;
  }
  if ((int)(uVar34 & 0xfffffff8) < 1) {
    uVar35 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    auVar43 = vbroadcastss_avx512vl(ZEXT416(param_8));
    auVar44 = vbroadcastss_avx512vl(ZEXT416(param_9));
    auVar42 = auVar44._0_16_;
    lVar36 = (longlong)param_10 * 3 + 0x10;
    pauVar33 = (undefined1 (*) [32])((longlong)param_10 * 0x10 + param_1);
    uVar37 = 0;
    auVar71 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar72 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar45 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar73 = __ymm_0000007400000064000000540000004400000034000000240000001400000004._0_16_;
    auVar41 = vxorps_avx512vl(ZEXT416(param_9),ZEXT416(param_9));
    uVar35 = 0;
    do {
      auVar46 = vshuff64x2_avx512vl(*pauVar33,pauVar33[2],0);
      auVar47 = vshuff64x2_avx512vl(*pauVar33,pauVar33[2],3);
      auVar48 = vshuff64x2_avx512vl(pauVar33[1],pauVar33[3],0);
      auVar49 = vshuff64x2_avx512vl(pauVar33[1],pauVar33[3],3);
      auVar50 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar51 = vunpckhps_avx512vl(auVar48,auVar49);
      auVar52 = vunpckhpd_avx512vl(auVar50,auVar51);
      uVar29 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar41),4);
      if ((char)uVar29 != '\0') {
        auVar50 = vunpcklpd_avx(auVar50,auVar51);
        auVar46 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpcklps_avx512vl(auVar48,auVar49);
        auVar51 = vunpckhpd_avx512vl(auVar46,auVar47);
        auVar53 = vunpcklpd_avx512vl(auVar46,auVar47);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar36 * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar36 * 4);
        auVar48 = *(undefined1 (*) [32])(param_2 + lVar36 * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar62,auVar47);
        auVar54 = vpermt2ps_avx512vl(auVar49,auVar64,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar63,auVar47);
        auVar55 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar56 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar36 * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar36 * 4);
        auVar48 = *(undefined1 (*) [32])(param_3 + lVar36 * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar62,auVar47);
        auVar49 = vpermt2ps_avx512vl(auVar49,auVar64,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar63,auVar47);
        auVar48 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar57 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar37);
        auVar61._0_4_ = param_7 * *pfVar1 + param_6;
        auVar61._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar61._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar61._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar61._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar61._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar61._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar61._28_4_ = param_7 * pfVar1[7] + param_6;
        auVar58 = vfmadd213ps_avx512vl
                            (*(undefined1 (*) [32])(param_5 + (ulonglong)uVar37),auVar44,auVar43);
        auVar59 = vfnmadd213ps_avx512vl(auVar61,auVar48,auVar55);
        auVar60 = vfnmadd213ps_avx512vl(auVar61,auVar57,auVar56);
        auVar47 = vsubps_avx(auVar61,auVar58);
        auVar69._0_4_ = -(auVar49._0_4_ * auVar61._0_4_) + auVar54._0_4_;
        auVar69._4_4_ = -(auVar49._4_4_ * auVar61._4_4_) + auVar54._4_4_;
        auVar69._8_4_ = -(auVar49._8_4_ * auVar61._8_4_) + auVar54._8_4_;
        auVar69._12_4_ = -(auVar49._12_4_ * auVar61._12_4_) + auVar54._12_4_;
        auVar69._16_4_ = -(auVar49._16_4_ * auVar61._16_4_) + auVar54._16_4_;
        auVar69._20_4_ = -(auVar49._20_4_ * auVar61._20_4_) + auVar54._20_4_;
        auVar69._24_4_ = -(auVar49._24_4_ * auVar61._24_4_) + auVar54._24_4_;
        auVar69._28_4_ = -(auVar49._28_4_ * auVar61._28_4_) + auVar54._28_4_;
        auVar53 = vsubps_avx512vl(auVar53,auVar59);
        auVar51 = vsubps_avx512vl(auVar51,auVar60);
        auVar50 = vsubps_avx512vl(auVar50,auVar69);
        auVar46._0_4_ = auVar53._0_4_ * auVar53._0_4_ + auVar51._0_4_ * auVar51._0_4_;
        auVar46._4_4_ = auVar53._4_4_ * auVar53._4_4_ + auVar51._4_4_ * auVar51._4_4_;
        auVar46._8_4_ = auVar53._8_4_ * auVar53._8_4_ + auVar51._8_4_ * auVar51._8_4_;
        auVar46._12_4_ = auVar53._12_4_ * auVar53._12_4_ + auVar51._12_4_ * auVar51._12_4_;
        auVar46._16_4_ = auVar53._16_4_ * auVar53._16_4_ + auVar51._16_4_ * auVar51._16_4_;
        auVar46._20_4_ = auVar53._20_4_ * auVar53._20_4_ + auVar51._20_4_ * auVar51._20_4_;
        auVar46._24_4_ = auVar53._24_4_ * auVar53._24_4_ + auVar51._24_4_ * auVar51._24_4_;
        auVar46._28_4_ = auVar53._28_4_ * auVar53._28_4_ + auVar51._28_4_ * auVar51._28_4_;
        auVar61 = vfmadd231ps_avx512vl(auVar46,auVar50,auVar50);
        auVar46 = vsqrtps_avx(auVar61);
        auVar46 = vdivps_avx(auVar58,auVar46);
        auVar70._0_4_ = auVar58._0_4_ * auVar58._0_4_;
        auVar70._4_4_ = auVar58._4_4_ * auVar58._4_4_;
        auVar70._8_4_ = auVar58._8_4_ * auVar58._8_4_;
        auVar70._12_4_ = auVar58._12_4_ * auVar58._12_4_;
        auVar70._16_4_ = auVar58._16_4_ * auVar58._16_4_;
        auVar70._20_4_ = auVar58._20_4_ * auVar58._20_4_;
        auVar70._24_4_ = auVar58._24_4_ * auVar58._24_4_;
        auVar70._28_4_ = auVar58._28_4_ * auVar58._28_4_;
        uVar30 = vcmpps_avx512vl(auVar61,auVar70,1);
        auVar53 = vfmadd231ps_avx512vl(auVar59,auVar46,auVar53);
        bVar38 = (byte)uVar30;
        uVar40 = vcmpps_avx512vl(auVar61,auVar45,1);
        bVar5 = (byte)uVar40;
        auVar58._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar47._0_4_ * auVar48._0_4_) + auVar55._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar38 & 1) * auVar53._0_4_;
        bVar7 = (bool)((byte)(uVar40 >> 1) & 1);
        auVar58._4_4_ =
             (uint)bVar7 * (int)(-(auVar47._4_4_ * auVar48._4_4_) + auVar55._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar53._4_4_;
        bVar7 = (bool)((byte)(uVar40 >> 2) & 1);
        auVar58._8_4_ =
             (uint)bVar7 * (int)(-(auVar47._8_4_ * auVar48._8_4_) + auVar55._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar53._8_4_;
        bVar7 = (bool)((byte)(uVar40 >> 3) & 1);
        auVar58._12_4_ =
             (uint)bVar7 * (int)(-(auVar47._12_4_ * auVar48._12_4_) + auVar55._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar53._12_4_;
        bVar7 = (bool)((byte)(uVar40 >> 4) & 1);
        auVar58._16_4_ =
             (uint)bVar7 * (int)(-(auVar47._16_4_ * auVar48._16_4_) + auVar55._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar53._16_4_;
        bVar7 = (bool)((byte)(uVar40 >> 5) & 1);
        auVar58._20_4_ =
             (uint)bVar7 * (int)(-(auVar47._20_4_ * auVar48._20_4_) + auVar55._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar53._20_4_;
        bVar7 = (bool)((byte)(uVar40 >> 6) & 1);
        auVar58._24_4_ =
             (uint)bVar7 * (int)(-(auVar47._24_4_ * auVar48._24_4_) + auVar55._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar53._24_4_;
        bVar7 = SUB81(uVar40 >> 7,0);
        auVar58._28_4_ =
             (uint)bVar7 * (int)(-(auVar47._28_4_ * auVar48._28_4_) + auVar55._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar53._28_4_;
        uVar39 = vcmpps_avx512vl(auVar58,ZEXT1632(auVar41),4);
        uVar31 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar41),4);
        uVar39 = uVar39 & uVar31;
        if ((char)uVar39 != '\0') {
          auVar48 = vfnmadd213ps_avx512vl(auVar57,auVar47,auVar56);
          auVar53._0_4_ = -(auVar47._0_4_ * auVar49._0_4_) + auVar54._0_4_;
          auVar53._4_4_ = -(auVar47._4_4_ * auVar49._4_4_) + auVar54._4_4_;
          auVar53._8_4_ = -(auVar47._8_4_ * auVar49._8_4_) + auVar54._8_4_;
          auVar53._12_4_ = -(auVar47._12_4_ * auVar49._12_4_) + auVar54._12_4_;
          auVar53._16_4_ = -(auVar47._16_4_ * auVar49._16_4_) + auVar54._16_4_;
          auVar53._20_4_ = -(auVar47._20_4_ * auVar49._20_4_) + auVar54._20_4_;
          auVar53._24_4_ = -(auVar47._24_4_ * auVar49._24_4_) + auVar54._24_4_;
          auVar53._28_4_ = -(auVar47._28_4_ * auVar49._28_4_) + auVar54._28_4_;
          auVar47 = vfmadd213ps_avx512vl(auVar51,auVar46,auVar60);
          auVar46 = vfmadd213ps_avx512vl(auVar50,auVar46,auVar69);
          auVar49._0_4_ =
               (uint)(bVar5 & 1) * auVar48._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar38 & 1) * auVar47._0_4_;
          bVar7 = (bool)((byte)(uVar40 >> 1) & 1);
          auVar49._4_4_ =
               (uint)bVar7 * auVar48._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar47._4_4_;
          bVar7 = (bool)((byte)(uVar40 >> 2) & 1);
          auVar49._8_4_ =
               (uint)bVar7 * auVar48._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar47._8_4_;
          bVar7 = (bool)((byte)(uVar40 >> 3) & 1);
          auVar49._12_4_ =
               (uint)bVar7 * auVar48._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar47._12_4_;
          bVar7 = (bool)((byte)(uVar40 >> 4) & 1);
          auVar49._16_4_ =
               (uint)bVar7 * auVar48._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar47._16_4_;
          bVar7 = (bool)((byte)(uVar40 >> 5) & 1);
          auVar49._20_4_ =
               (uint)bVar7 * auVar48._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar47._20_4_;
          bVar7 = (bool)((byte)(uVar40 >> 6) & 1);
          auVar49._24_4_ =
               (uint)bVar7 * auVar48._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar47._24_4_;
          bVar7 = SUB81(uVar40 >> 7,0);
          auVar49._28_4_ =
               (uint)bVar7 * auVar48._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar47._28_4_;
          auVar47._0_4_ =
               (uint)(bVar5 & 1) * (int)auVar53._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar38 & 1) * auVar46._0_4_;
          bVar7 = (bool)((byte)(uVar40 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar7 * (int)auVar53._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar46._4_4_;
          bVar7 = (bool)((byte)(uVar40 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar7 * (int)auVar53._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar46._8_4_;
          bVar7 = (bool)((byte)(uVar40 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar7 * (int)auVar53._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar46._12_4_;
          bVar7 = (bool)((byte)(uVar40 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar7 * (int)auVar53._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar46._16_4_;
          bVar7 = (bool)((byte)(uVar40 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar7 * (int)auVar53._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar46._20_4_;
          bVar7 = (bool)((byte)(uVar40 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar7 * (int)auVar53._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar46._24_4_;
          bVar7 = SUB81(uVar40 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar7 * (int)auVar53._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar46._28_4_;
          if ((char)uVar39 == -1) {
            auVar46 = vunpcklps_avx512vl(auVar58,auVar49);
            auVar48 = vunpcklps_avx512vl(auVar47,auVar52);
            auVar50 = vunpcklpd_avx512vl(auVar46,auVar48);
            auVar46 = vunpckhpd_avx(auVar46,auVar48);
            auVar48 = vunpckhps_avx512vl(auVar58,auVar49);
            auVar47 = vunpckhps_avx512vl(auVar47,auVar52);
            auVar49 = vunpcklpd_avx512vl(auVar48,auVar47);
            auVar47 = vunpckhpd_avx512vl(auVar48,auVar47);
            auVar48 = vinsertf32x4_avx512vl(auVar50,auVar46._0_16_,1);
            *pauVar33 = auVar48;
            auVar48 = vinsertf32x4_avx512vl(auVar49,auVar47._0_16_,1);
            pauVar33[1] = auVar48;
            auVar46 = vshuff64x2_avx512vl(auVar50,auVar46,3);
            pauVar33[2] = auVar46;
            auVar46 = vshuff64x2_avx512vl(auVar49,auVar47,3);
            pauVar33[3] = auVar46;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar33) + auVar54,uVar39,auVar58);
            vscatterdps_avx512vl(ZEXT832(pauVar33) + auVar53,uVar39,auVar49);
            vscatterdps_avx512vl(ZEXT832(pauVar33) + auVar69,uVar39,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar33) + auVar60,uVar39,auVar52);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar37 = uVar37 + 0x20;
      pauVar33 = pauVar33 + 4;
      lVar36 = lVar36 + 0x18;
    } while (uVar35 < (uVar34 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar35) {
      return;
    }
  }
  auVar62 = vpbroadcastd_avx512vl();
  auVar62 = vpor_avx2(auVar62,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar63 = vpbroadcastd_avx512vl();
  uVar30 = vpcmpgtd_avx512vl(auVar63,auVar62);
  lVar36 = (longlong)(param_10 + (int)uVar35);
  pauVar33 = (undefined1 (*) [32])(param_1 + lVar36 * 0x10);
  bVar38 = (byte)uVar30;
  if (bVar38 == 0xff) {
    auVar43 = vshuff64x2_avx512vl(*pauVar33,pauVar33[2],0);
    auVar64 = vperm2f128_avx(*pauVar33,pauVar33[2],0x31);
    auVar44 = vshuff64x2_avx512vl(pauVar33[1],pauVar33[3],0);
    auVar45 = vshuff64x2_avx512vl(pauVar33[1],pauVar33[3],3);
    auVar46 = vunpcklps_avx512vl(auVar43,auVar64);
    auVar43 = vunpckhps_avx512vl(auVar43,auVar64);
    auVar47 = vunpcklps_avx512vl(auVar44,auVar45);
    auVar64 = vunpckhps_avx(auVar44,auVar45);
    auVar48 = vunpcklpd_avx512vl(auVar46,auVar47);
    auVar45 = vunpckhpd_avx512vl(auVar46,auVar47);
    auVar44 = vunpcklpd_avx512vl(auVar43,auVar64);
    auVar64 = vunpckhpd_avx(auVar43,auVar64);
  }
  else {
    auVar42 = vxorps_avx512vl(auVar42,auVar42);
    auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + param_5));
    auVar48._0_4_ = (uint)(bVar38 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_;
    bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
    auVar48._4_4_ = (uint)bVar7 * auVar64._4_4_ | (uint)!bVar7 * auVar42._4_4_;
    bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
    auVar48._8_4_ = (uint)bVar7 * auVar64._8_4_ | (uint)!bVar7 * auVar42._8_4_;
    bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
    auVar48._12_4_ = (uint)bVar7 * auVar64._12_4_ | (uint)!bVar7 * auVar42._12_4_;
    auVar48._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
    auVar48._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
    auVar48._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
    auVar48._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
    auVar42 = vxorps_avx512vl(auVar71,auVar71);
    auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + param_5));
    auVar45._0_4_ = (uint)(bVar38 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_;
    bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
    auVar45._4_4_ = (uint)bVar7 * auVar64._4_4_ | (uint)!bVar7 * auVar42._4_4_;
    bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
    auVar45._8_4_ = (uint)bVar7 * auVar64._8_4_ | (uint)!bVar7 * auVar42._8_4_;
    bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
    auVar45._12_4_ = (uint)bVar7 * auVar64._12_4_ | (uint)!bVar7 * auVar42._12_4_;
    auVar45._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
    auVar45._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
    auVar45._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
    auVar45._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
    auVar42 = vxorps_avx512vl(auVar72,auVar72);
    auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + param_5));
    auVar44._0_4_ = (uint)(bVar38 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_;
    bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
    auVar44._4_4_ = (uint)bVar7 * auVar64._4_4_ | (uint)!bVar7 * auVar42._4_4_;
    bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
    auVar44._8_4_ = (uint)bVar7 * auVar64._8_4_ | (uint)!bVar7 * auVar42._8_4_;
    bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
    auVar44._12_4_ = (uint)bVar7 * auVar64._12_4_ | (uint)!bVar7 * auVar42._12_4_;
    auVar44._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
    auVar44._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
    auVar44._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
    auVar44._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
    auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + param_5));
    auVar64._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar43._4_4_;
    auVar64._0_4_ = (uint)(bVar38 & 1) * auVar43._0_4_;
    auVar64._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar43._8_4_;
    auVar64._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar43._12_4_;
    auVar64._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar43._16_4_;
    auVar64._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar43._20_4_;
    auVar64._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar43._24_4_;
    auVar64._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar43._28_4_;
  }
  uVar32 = vpcmpd_avx512vl(auVar62,auVar63,5);
  bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
  bVar11 = (bool)((byte)(uVar30 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar30 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar30 >> 4) & 1);
  bVar20 = (bool)((byte)(uVar30 >> 5) & 1);
  bVar23 = (bool)((byte)(uVar30 >> 6) & 1);
  bVar26 = SUB81(uVar30 >> 7,0);
  bVar8 = (bool)((byte)(uVar30 >> 1) & 1);
  bVar12 = (bool)((byte)(uVar30 >> 2) & 1);
  bVar15 = (bool)((byte)(uVar30 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar30 >> 4) & 1);
  bVar21 = (bool)((byte)(uVar30 >> 5) & 1);
  bVar24 = (bool)((byte)(uVar30 >> 6) & 1);
  bVar27 = SUB81(uVar30 >> 7,0);
  bVar9 = (bool)((byte)(uVar30 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar30 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar30 >> 3) & 1);
  bVar19 = (bool)((byte)(uVar30 >> 4) & 1);
  bVar22 = (bool)((byte)(uVar30 >> 5) & 1);
  bVar25 = (bool)((byte)(uVar30 >> 6) & 1);
  bVar28 = SUB81(uVar30 >> 7,0);
  uVar29 = vcmpps_avx512vl(auVar64,ZEXT1232(ZEXT812(0)),0);
  if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar36 * 0xc);
    if (bVar38 == 0xff) {
      auVar62 = pauVar2[1];
      auVar63 = vblendps_avx(auVar62,*pauVar2,0x24);
      auVar43 = vpermt2ps_avx512vl(*pauVar2,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar62);
      auVar52 = vpermt2ps_avx512vl(auVar63,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,pauVar2[2]);
      auVar62 = vpermt2ps_avx512vl(pauVar2[2],
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar62);
      auVar51 = vinsertf32x4_avx512vl(auVar43,auVar62._0_16_,1);
      auVar50 = vshuff64x2_avx512vl(auVar43,auVar62,3);
      auVar62 = *(undefined1 (*) [32])(param_3 + lVar36 * 0xc);
      auVar63 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar36 * 0xc);
      auVar43 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar36 * 0xc);
      auVar46 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar62,auVar63);
      auVar47 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar43,auVar63);
      auVar54 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
      auVar55 = vshuff64x2_avx512vl(auVar46,auVar47,3);
      auVar62 = vblendps_avx(auVar63,auVar62,0x24);
      auVar62 = vpermt2ps_avx512vl(auVar62,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar43);
    }
    else {
      auVar42 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_5));
      auVar51._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_
      ;
      bVar10 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar51._4_4_ = (uint)bVar10 * auVar62._4_4_ | (uint)!bVar10 * auVar42._4_4_;
      bVar10 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar51._8_4_ = (uint)bVar10 * auVar62._8_4_ | (uint)!bVar10 * auVar42._8_4_;
      bVar10 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar51._12_4_ = (uint)bVar10 * auVar62._12_4_ | (uint)!bVar10 * auVar42._12_4_;
      auVar51._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar51._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar51._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar51._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + (longlong)*pauVar2));
      auVar50._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar62._4_4_;
      auVar50._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_;
      auVar50._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar62._8_4_;
      auVar50._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar62._12_4_;
      auVar50._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar50._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar50._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar50._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
      auVar52._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar62._4_4_;
      auVar52._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_;
      auVar52._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar62._8_4_;
      auVar52._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar62._12_4_;
      auVar52._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar52._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar52._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar52._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      puVar3 = (undefined4 *)(param_3 + lVar36 * 0xc);
      auVar42 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + param_5));
      auVar54._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_
      ;
      bVar10 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar54._4_4_ = (uint)bVar10 * auVar62._4_4_ | (uint)!bVar10 * auVar42._4_4_;
      bVar10 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar54._8_4_ = (uint)bVar10 * auVar62._8_4_ | (uint)!bVar10 * auVar42._8_4_;
      bVar10 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar54._12_4_ = (uint)bVar10 * auVar62._12_4_ | (uint)!bVar10 * auVar42._12_4_;
      auVar54._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar54._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar54._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar54._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      auVar42 = vxorps_avx512vl(auVar45._0_16_,auVar45._0_16_);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar33));
      auVar55._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_
      ;
      bVar10 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar55._4_4_ = (uint)bVar10 * auVar62._4_4_ | (uint)!bVar10 * auVar42._4_4_;
      bVar10 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar55._8_4_ = (uint)bVar10 * auVar62._8_4_ | (uint)!bVar10 * auVar42._8_4_;
      bVar10 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar55._12_4_ = (uint)bVar10 * auVar62._12_4_ | (uint)!bVar10 * auVar42._12_4_;
      auVar55._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar55._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar55._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar55._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      auVar63 = vgatherdps_avx512vl(*puVar3);
      auVar62._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar63._4_4_;
      auVar62._0_4_ = (uint)(bVar38 & 1) * auVar63._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar63._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar63._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar63._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar63._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar63._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar63._28_4_;
    }
    lVar36 = (longlong)((int)uVar35 << 2);
    piVar4 = (int *)(param_4 + lVar36);
    auVar68._0_4_ = param_7 * (float)((uint)(bVar38 & 1) * *piVar4) + param_6;
    auVar68._4_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 1) & 1) * piVar4[1]) + param_6;
    auVar68._8_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 2) & 1) * piVar4[2]) + param_6;
    auVar68._12_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 3) & 1) * piVar4[3]) + param_6;
    auVar68._16_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 4) & 1) * piVar4[4]) + param_6;
    auVar68._20_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 5) & 1) * piVar4[5]) + param_6;
    auVar68._24_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 6) & 1) * piVar4[6]) + param_6;
    auVar68._28_4_ = param_7 * (float)((uint)(byte)(uVar30 >> 7) * piVar4[7]) + param_6;
    auVar42 = vxorps_avx512vl(auVar73,auVar73);
    auVar63 = vbroadcastss_avx512vl(ZEXT416(param_8));
    auVar43 = vbroadcastss_avx512vl(ZEXT416(param_9));
    piVar4 = (int *)(param_5 + lVar36);
    auVar59._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * piVar4[1];
    auVar59._0_4_ = (uint)(bVar38 & 1) * *piVar4;
    auVar59._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * piVar4[2];
    auVar59._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * piVar4[3];
    auVar59._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * piVar4[4];
    auVar59._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * piVar4[5];
    auVar59._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * piVar4[6];
    auVar59._28_4_ = (uint)(byte)(uVar30 >> 7) * piVar4[7];
    auVar43 = vfmadd213ps_avx512vl(auVar59,auVar43,auVar63);
    auVar46 = vsubps_avx512vl(auVar68,auVar43);
    auVar47 = vfnmadd213ps_avx512vl(auVar68,auVar54,auVar51);
    auVar49 = vfnmadd213ps_avx512vl(auVar68,auVar55,auVar50);
    auVar63._4_4_ = (uint)bVar7 * auVar48._4_4_ | (uint)!bVar7 * iStack_13c;
    auVar63._0_4_ = (uint)(bVar38 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar38 & 1) * local_140;
    auVar63._8_4_ = (uint)bVar11 * auVar48._8_4_ | (uint)!bVar11 * iStack_138;
    auVar63._12_4_ = (uint)bVar14 * auVar48._12_4_ | (uint)!bVar14 * iStack_134;
    auVar63._16_4_ = (uint)bVar17 * auVar48._16_4_ | (uint)!bVar17 * iStack_130;
    auVar63._20_4_ = (uint)bVar20 * auVar48._20_4_ | (uint)!bVar20 * iStack_12c;
    auVar63._24_4_ = (uint)bVar23 * auVar48._24_4_ | (uint)!bVar23 * iStack_128;
    auVar63._28_4_ = (uint)bVar26 * auVar48._28_4_ | (uint)!bVar26 * iStack_124;
    auVar48 = vfnmadd213ps_avx512vl(auVar68,auVar62,auVar52);
    auVar56._4_4_ = (uint)bVar8 * auVar45._4_4_ | (uint)!bVar8 * iStack_11c;
    auVar56._0_4_ = (uint)(bVar38 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar38 & 1) * local_120;
    auVar56._8_4_ = (uint)bVar12 * auVar45._8_4_ | (uint)!bVar12 * iStack_118;
    auVar56._12_4_ = (uint)bVar15 * auVar45._12_4_ | (uint)!bVar15 * iStack_114;
    auVar56._16_4_ = (uint)bVar18 * auVar45._16_4_ | (uint)!bVar18 * iStack_110;
    auVar56._20_4_ = (uint)bVar21 * auVar45._20_4_ | (uint)!bVar21 * iStack_10c;
    auVar56._24_4_ = (uint)bVar24 * auVar45._24_4_ | (uint)!bVar24 * iStack_108;
    auVar56._28_4_ = (uint)bVar27 * auVar45._28_4_ | (uint)!bVar27 * iStack_104;
    auVar57._4_4_ = (uint)bVar9 * auVar44._4_4_ | (uint)!bVar9 * iStack_fc;
    auVar57._0_4_ = (uint)(bVar38 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar38 & 1) * local_100;
    auVar57._8_4_ = (uint)bVar13 * auVar44._8_4_ | (uint)!bVar13 * iStack_f8;
    auVar57._12_4_ = (uint)bVar16 * auVar44._12_4_ | (uint)!bVar16 * iStack_f4;
    auVar57._16_4_ = (uint)bVar19 * auVar44._16_4_ | (uint)!bVar19 * iStack_f0;
    auVar57._20_4_ = (uint)bVar22 * auVar44._20_4_ | (uint)!bVar22 * iStack_ec;
    auVar57._24_4_ = (uint)bVar25 * auVar44._24_4_ | (uint)!bVar25 * iStack_e8;
    auVar57._28_4_ = (uint)bVar28 * auVar44._28_4_ | (uint)!bVar28 * iStack_e4;
    auVar44 = vsubps_avx512vl(auVar63,auVar47);
    auVar63 = vsubps_avx(auVar56,auVar49);
    auVar45 = vsubps_avx512vl(auVar57,auVar48);
    auVar53 = vmulps_avx512vl(auVar63,auVar63);
    auVar53 = vfmadd231ps_avx512vl(auVar53,auVar44,auVar44);
    auVar53 = vfmadd231ps_avx512vl(auVar53,auVar45,auVar45);
    auVar56 = vsqrtps_avx512vl(auVar53);
    auVar56 = vdivps_avx512vl(auVar43,auVar56);
    auVar51 = vfnmadd213ps_avx512vl(auVar54,auVar46,auVar51);
    auVar43 = vmulps_avx512vl(auVar43,auVar43);
    uVar35 = vcmpps_avx512vl(auVar53,auVar43,1);
    auVar43._4_4_ = __real_322bcc77;
    auVar43._0_4_ = __real_322bcc77;
    auVar43._8_4_ = __real_322bcc77;
    auVar43._12_4_ = __real_322bcc77;
    auVar43._16_4_ = __real_322bcc77;
    auVar43._20_4_ = __real_322bcc77;
    auVar43._24_4_ = __real_322bcc77;
    auVar43._28_4_ = __real_322bcc77;
    uVar30 = vcmpps_avx512vl(auVar53,auVar43,1);
    auVar43 = vfmadd231ps_avx512vl(auVar47,auVar56,auVar44);
    bVar5 = (byte)uVar35;
    bVar6 = (byte)uVar30;
    auVar60._0_4_ =
         (uint)(bVar6 & 1) * auVar51._0_4_ |
         (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar43._0_4_;
    bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
    auVar60._4_4_ =
         (uint)bVar7 * auVar51._4_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar43._4_4_;
    bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
    auVar60._8_4_ =
         (uint)bVar7 * auVar51._8_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar43._8_4_;
    bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
    auVar60._12_4_ =
         (uint)bVar7 * auVar51._12_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar43._12_4_;
    bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
    auVar60._16_4_ =
         (uint)bVar7 * auVar51._16_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar43._16_4_;
    bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
    auVar60._20_4_ =
         (uint)bVar7 * auVar51._20_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar43._20_4_;
    bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
    auVar60._24_4_ =
         (uint)bVar7 * auVar51._24_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar43._24_4_;
    bVar7 = SUB81(uVar30 >> 7,0);
    auVar60._28_4_ =
         (uint)bVar7 * auVar51._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar43._28_4_;
    uVar29 = vcmpps_avx512vl(auVar64,ZEXT1632(auVar42),4);
    uVar32 = vcmpps_avx512vl(auVar60,ZEXT1632(auVar42),4);
    bVar38 = (byte)uVar29 & (byte)uVar32 & bVar38;
    uVar40 = (ulonglong)bVar38;
    if (bVar38 != 0) {
      auVar43 = vfnmadd213ps_avx512vl(auVar55,auVar46,auVar50);
      auVar62 = vfnmadd213ps_avx512vl(auVar62,auVar46,auVar52);
      auVar63 = vfmadd213ps_avx512vl(auVar63,auVar56,auVar49);
      auVar44 = vfmadd213ps_avx512vl(auVar45,auVar56,auVar48);
      auVar65._0_4_ =
           (uint)(bVar6 & 1) * auVar43._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar63._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar7 * auVar43._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar7 * auVar43._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar7 * auVar43._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar7 * auVar43._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar7 * auVar43._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar7 * auVar43._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar7 * auVar43._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
      auVar66._0_4_ =
           (uint)(bVar6 & 1) * auVar62._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar66._4_4_ =
           (uint)bVar7 * auVar62._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar66._8_4_ =
           (uint)bVar7 * auVar62._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar66._12_4_ =
           (uint)bVar7 * auVar62._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar66._16_4_ =
           (uint)bVar7 * auVar62._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar66._20_4_ =
           (uint)bVar7 * auVar62._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar66._24_4_ =
           (uint)bVar7 * auVar62._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar66._28_4_ =
           (uint)bVar7 * auVar62._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
      if (bVar38 == 0xff) {
        auVar62 = vunpcklps_avx(auVar60,auVar65);
        auVar63 = vunpcklps_avx(auVar66,auVar64);
        auVar44 = vunpcklpd_avx512vl(auVar62,auVar63);
        auVar62 = vunpckhpd_avx(auVar62,auVar63);
        auVar63 = vunpckhps_avx(auVar60,auVar65);
        auVar64 = vunpckhps_avx(auVar66,auVar64);
        auVar43 = vunpcklpd_avx(auVar63,auVar64);
        auVar63 = vunpckhpd_avx(auVar63,auVar64);
        auVar64 = vinsertf32x4_avx512vl(auVar44,auVar62._0_16_,1);
        *pauVar33 = auVar64;
        auVar67._16_16_ = auVar63._0_16_;
        auVar67._0_16_ = auVar43._0_16_;
        pauVar33[1] = auVar67;
        auVar62 = vshuff64x2_avx512vl(auVar44,auVar62,3);
        pauVar33[2] = auVar62;
        auVar62 = vperm2f128_avx(auVar43,auVar63,0x31);
        pauVar33[3] = auVar62;
      }
      else {
        vscatterdps_avx512vl
                  (ZEXT832(pauVar33) +
                   ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar40,
                   auVar60);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar33) +
                   ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar40,
                   auVar65);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar33) +
                   ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar40,
                   auVar66);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar33) +
                   ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar40,
                   auVar64);
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx512skx @ 140312ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  undefined1 (*pauVar36) [32];
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar43 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [64];
  undefined1 auVar75 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar76 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar78 [16];
  undefined1 in_ZMM24 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar63 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar62 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar61 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar78 = in_ZMM24._0_16_;
  auVar77 = in_ZMM18._0_16_;
  auVar76 = in_ZMM17._0_16_;
  auVar42 = in_ZMM16._0_16_;
  uVar33 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar33 = param_9;
  }
  auVar68 = ZEXT416((uint)param_7);
  if ((int)(uVar33 & 0xfffffff8) < 1) {
    uVar35 = 0;
  }
  else {
    auVar64._4_4_ = param_7;
    auVar64._0_4_ = param_7;
    auVar64._8_4_ = param_7;
    auVar64._12_4_ = param_7;
    auVar64._16_4_ = param_7;
    auVar64._20_4_ = param_7;
    auVar64._24_4_ = param_7;
    auVar64._28_4_ = param_7;
    auVar42 = vmulss_avx512f(auVar68,auVar68);
    auVar44 = vbroadcastss_avx512vl(auVar42);
    auVar42 = auVar44._0_16_;
    unaff_RBX = (longlong)param_8 * 3 + 0x10;
    pauVar36 = (undefined1 (*) [32])((longlong)param_8 * 0x10 + param_1);
    uVar38 = 0;
    auVar76 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar77 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar45 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar43 = vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
    auVar78 = __ymm_0000007800000068000000580000004800000038000000280000001800000008._0_16_;
    uVar35 = 0;
    do {
      auVar46 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar47 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar48 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar49 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar50 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar51 = vunpckhps_avx512vl(auVar48,auVar49);
      auVar52 = vunpckhpd_avx512vl(auVar50,auVar51);
      uVar29 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar43),4);
      if ((char)uVar29 != '\0') {
        auVar50 = vunpcklpd_avx512vl(auVar50,auVar51);
        auVar46 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpcklps_avx512vl(auVar48,auVar49);
        auVar51 = vunpckhpd_avx512vl(auVar46,auVar47);
        auVar53 = vunpcklpd_avx512vl(auVar46,auVar47);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x40 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + -0x20 + unaff_RBX * 4);
        auVar48 = *(undefined1 (*) [32])(param_2 + unaff_RBX * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar61,auVar47);
        auVar54 = vpermt2ps_avx512vl(auVar49,auVar63,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar55 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar56 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x40 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + -0x20 + unaff_RBX * 4);
        auVar48 = *(undefined1 (*) [32])(param_3 + unaff_RBX * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar61,auVar47);
        auVar49 = vpermt2ps_avx512vl(auVar49,auVar63,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar48 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar57 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar38);
        auVar46._0_4_ = param_6 * *pfVar1 + param_5;
        auVar46._4_4_ = param_6 * pfVar1[1] + param_5;
        auVar46._8_4_ = param_6 * pfVar1[2] + param_5;
        auVar46._12_4_ = param_6 * pfVar1[3] + param_5;
        auVar46._16_4_ = param_6 * pfVar1[4] + param_5;
        auVar46._20_4_ = param_6 * pfVar1[5] + param_5;
        auVar46._24_4_ = param_6 * pfVar1[6] + param_5;
        auVar46._28_4_ = param_6 * pfVar1[7] + param_5;
        auVar58 = vfnmadd213ps_avx512vl(auVar46,auVar48,auVar55);
        auVar59 = vfnmadd213ps_avx512vl(auVar46,auVar57,auVar56);
        auVar47 = vsubps_avx(auVar46,auVar64);
        auVar75._0_4_ = -(auVar49._0_4_ * auVar46._0_4_) + auVar54._0_4_;
        auVar75._4_4_ = -(auVar49._4_4_ * auVar46._4_4_) + auVar54._4_4_;
        auVar75._8_4_ = -(auVar49._8_4_ * auVar46._8_4_) + auVar54._8_4_;
        auVar75._12_4_ = -(auVar49._12_4_ * auVar46._12_4_) + auVar54._12_4_;
        auVar75._16_4_ = -(auVar49._16_4_ * auVar46._16_4_) + auVar54._16_4_;
        auVar75._20_4_ = -(auVar49._20_4_ * auVar46._20_4_) + auVar54._20_4_;
        auVar75._24_4_ = -(auVar49._24_4_ * auVar46._24_4_) + auVar54._24_4_;
        auVar75._28_4_ = -(auVar49._28_4_ * auVar46._28_4_) + auVar54._28_4_;
        auVar53 = vsubps_avx512vl(auVar53,auVar58);
        auVar51 = vsubps_avx512vl(auVar51,auVar59);
        auVar50 = vsubps_avx512vl(auVar50,auVar75);
        auVar46 = vmulps_avx512vl(auVar51,auVar51);
        auVar60._0_4_ = auVar53._0_4_ * auVar53._0_4_ + auVar46._0_4_;
        auVar60._4_4_ = auVar53._4_4_ * auVar53._4_4_ + auVar46._4_4_;
        auVar60._8_4_ = auVar53._8_4_ * auVar53._8_4_ + auVar46._8_4_;
        auVar60._12_4_ = auVar53._12_4_ * auVar53._12_4_ + auVar46._12_4_;
        auVar60._16_4_ = auVar53._16_4_ * auVar53._16_4_ + auVar46._16_4_;
        auVar60._20_4_ = auVar53._20_4_ * auVar53._20_4_ + auVar46._20_4_;
        auVar60._24_4_ = auVar53._24_4_ * auVar53._24_4_ + auVar46._24_4_;
        auVar60._28_4_ = auVar53._28_4_ * auVar53._28_4_ + auVar46._28_4_;
        auVar60 = vfmadd231ps_avx512vl(auVar60,auVar50,auVar50);
        auVar46 = vsqrtps_avx(auVar60);
        auVar46 = vdivps_avx(auVar64,auVar46);
        uVar30 = vcmpps_avx512vl(auVar60,auVar44,1);
        auVar53 = vfmadd231ps_avx512vl(auVar58,auVar46,auVar53);
        bVar39 = (byte)uVar30;
        uVar41 = vcmpps_avx512vl(auVar60,auVar45,1);
        bVar5 = (byte)uVar41;
        auVar58._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar47._0_4_ * auVar48._0_4_) + auVar55._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar53._0_4_;
        bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar58._4_4_ =
             (uint)bVar7 * (int)(-(auVar47._4_4_ * auVar48._4_4_) + auVar55._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar53._4_4_;
        bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar58._8_4_ =
             (uint)bVar7 * (int)(-(auVar47._8_4_ * auVar48._8_4_) + auVar55._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar53._8_4_;
        bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar58._12_4_ =
             (uint)bVar7 * (int)(-(auVar47._12_4_ * auVar48._12_4_) + auVar55._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar53._12_4_;
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        auVar58._16_4_ =
             (uint)bVar7 * (int)(-(auVar47._16_4_ * auVar48._16_4_) + auVar55._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar53._16_4_;
        bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
        auVar58._20_4_ =
             (uint)bVar7 * (int)(-(auVar47._20_4_ * auVar48._20_4_) + auVar55._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar53._20_4_;
        bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
        auVar58._24_4_ =
             (uint)bVar7 * (int)(-(auVar47._24_4_ * auVar48._24_4_) + auVar55._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar53._24_4_;
        bVar7 = SUB81(uVar41 >> 7,0);
        auVar58._28_4_ =
             (uint)bVar7 * (int)(-(auVar47._28_4_ * auVar48._28_4_) + auVar55._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar53._28_4_;
        uVar40 = vcmpps_avx512vl(auVar58,ZEXT1632(auVar43),4);
        uVar31 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar43),4);
        uVar40 = uVar40 & uVar31;
        if ((char)uVar40 != '\0') {
          auVar48 = vfnmadd213ps_avx512vl(auVar57,auVar47,auVar56);
          auVar51 = vfmadd213ps_avx512vl(auVar51,auVar46,auVar59);
          auVar46 = vfmadd213ps_avx512vl(auVar50,auVar46,auVar75);
          auVar50._0_4_ =
               (uint)(bVar5 & 1) * auVar48._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar51._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar50._4_4_ =
               (uint)bVar7 * auVar48._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar51._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar50._8_4_ =
               (uint)bVar7 * auVar48._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar51._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar50._12_4_ =
               (uint)bVar7 * auVar48._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar51._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar50._16_4_ =
               (uint)bVar7 * auVar48._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar51._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar50._20_4_ =
               (uint)bVar7 * auVar48._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar51._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar50._24_4_ =
               (uint)bVar7 * auVar48._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar51._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar50._28_4_ =
               (uint)bVar7 * auVar48._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar51._28_4_;
          auVar48._0_4_ =
               (uint)(bVar5 & 1) * (int)(-(auVar47._0_4_ * auVar49._0_4_) + auVar54._0_4_) |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar48._4_4_ =
               (uint)bVar7 * (int)(-(auVar47._4_4_ * auVar49._4_4_) + auVar54._4_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar46._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar48._8_4_ =
               (uint)bVar7 * (int)(-(auVar47._8_4_ * auVar49._8_4_) + auVar54._8_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar46._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar48._12_4_ =
               (uint)bVar7 * (int)(-(auVar47._12_4_ * auVar49._12_4_) + auVar54._12_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar46._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar48._16_4_ =
               (uint)bVar7 * (int)(-(auVar47._16_4_ * auVar49._16_4_) + auVar54._16_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar46._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar48._20_4_ =
               (uint)bVar7 * (int)(-(auVar47._20_4_ * auVar49._20_4_) + auVar54._20_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar46._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar48._24_4_ =
               (uint)bVar7 * (int)(-(auVar47._24_4_ * auVar49._24_4_) + auVar54._24_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar46._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar48._28_4_ =
               (uint)bVar7 * (int)(-(auVar47._28_4_ * auVar49._28_4_) + auVar54._28_4_) |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar46._28_4_;
          if ((char)uVar40 == -1) {
            auVar46 = vunpcklps_avx512vl(auVar58,auVar50);
            auVar47 = vunpcklps_avx512vl(auVar48,auVar52);
            auVar49 = vunpcklpd_avx512vl(auVar46,auVar47);
            auVar46 = vunpckhpd_avx512vl(auVar46,auVar47);
            auVar47 = vunpckhps_avx512vl(auVar58,auVar50);
            auVar48 = vunpckhps_avx512vl(auVar48,auVar52);
            auVar50 = vunpcklpd_avx512vl(auVar47,auVar48);
            auVar47 = vunpckhpd_avx512vl(auVar47,auVar48);
            auVar48 = vinsertf32x4_avx512vl(auVar49,auVar46._0_16_,1);
            *pauVar36 = auVar48;
            auVar48 = vinsertf32x4_avx512vl(auVar50,auVar47._0_16_,1);
            pauVar36[1] = auVar48;
            auVar46 = vshuff64x2_avx512vl(auVar49,auVar46,3);
            pauVar36[2] = auVar46;
            auVar46 = vshuff64x2_avx512vl(auVar50,auVar47,3);
            pauVar36[3] = auVar46;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar64,uVar40,auVar58);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar54,uVar40,auVar50);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar75,uVar40,auVar48);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar59,uVar40,auVar52);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar38 = uVar38 + 0x20;
      pauVar36 = pauVar36 + 4;
      unaff_RBX = unaff_RBX + 0x18;
    } while (uVar35 < (uVar33 & 0xfffffff8));
  }
  iVar34 = (int)uVar35;
  if (iVar34 < (int)param_9) {
    auVar61 = vpbroadcastd_avx512vl();
    auVar61 = vpor_avx2(auVar61,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar62 = vpbroadcastd_avx512vl();
    uVar35 = vpcmpgtd_avx512vl(auVar62,auVar61);
    lVar37 = (longlong)(param_8 + iVar34);
    pauVar36 = (undefined1 (*) [32])(param_1 + lVar37 * 0x10);
    bVar39 = (byte)uVar35;
    if (bVar39 == 0xff) {
      auVar63 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar44 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar45 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar64 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar46 = vunpcklps_avx512vl(auVar63,auVar44);
      auVar63 = vunpckhps_avx512vl(auVar63,auVar44);
      auVar44 = vunpcklps_avx512vl(auVar45,auVar64);
      auVar45 = vunpckhps_avx512vl(auVar45,auVar64);
      auVar47 = vunpcklpd_avx512vl(auVar46,auVar44);
      auVar49 = vunpckhpd_avx512vl(auVar46,auVar44);
      auVar44 = vunpcklpd_avx512vl(auVar63,auVar45);
      auVar63 = vunpckhpd_avx512vl(auVar63,auVar45);
    }
    else {
      auVar42 = vxorps_avx512vl(auVar42,auVar42);
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar47._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar47._4_4_ = (uint)bVar7 * auVar63._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar47._8_4_ = (uint)bVar7 * auVar63._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar47._12_4_ = (uint)bVar7 * auVar63._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar47._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar47._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar47._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar47._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
      auVar42 = vxorps_avx512vl(auVar76,auVar76);
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar49._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar49._4_4_ = (uint)bVar7 * auVar63._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar49._8_4_ = (uint)bVar7 * auVar63._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar49._12_4_ = (uint)bVar7 * auVar63._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar49._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
      auVar42 = vxorps_avx512vl(auVar77,auVar77);
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar44._4_4_ = (uint)bVar7 * auVar63._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar44._8_4_ = (uint)bVar7 * auVar63._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar44._12_4_ = (uint)bVar7 * auVar63._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar63._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_;
      auVar63._0_4_ = (uint)(bVar39 & 1) * auVar45._0_4_;
      auVar63._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_;
      auVar63._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_;
      auVar63._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_;
      auVar63._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_;
      auVar63._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_;
      auVar63._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar45._28_4_;
    }
    uVar32 = vpcmpd_avx512vl(auVar61,auVar62,5);
    bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar20 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar23 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar26 = SUB81(uVar35 >> 7,0);
    bVar8 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar21 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar27 = SUB81(uVar35 >> 7,0);
    bVar9 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar25 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar28 = SUB81(uVar35 >> 7,0);
    auVar74 = ZEXT1664((undefined1  [16])0x0);
    uVar29 = vcmpps_avx512vl(auVar63,auVar74._0_32_,0);
    if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
      pauVar2 = (undefined1 (*) [32])(param_2 + lVar37 * 0xc);
      if (bVar39 == 0xff) {
        auVar61 = pauVar2[1];
        auVar62 = vblendps_avx(auVar61,*pauVar2,0x24);
        auVar45 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar51 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar61 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar54 = vinsertf32x4_avx512vl(auVar45,auVar61._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar45,auVar61,3);
        auVar61 = *(undefined1 (*) [32])(param_3 + lVar37 * 0xc);
        auVar62 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar37 * 0xc);
        auVar45 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar37 * 0xc);
        auVar64 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61,auVar62);
        auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45,auVar62);
        auVar52 = vinsertf32x4_avx512vl(auVar64,auVar46._0_16_,1);
        auVar53 = vshuff64x2_avx512vl(auVar64,auVar46,3);
        auVar61 = vblendps_avx(auVar62,auVar61,0x24);
        auVar61 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar45);
      }
      else {
        auVar42 = vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + (longlong)*pauVar2));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar10 * auVar61._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar10 * auVar61._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar10 * auVar61._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
        auVar55._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar55._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar55._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
        auVar55._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
        auVar55._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar55._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar55._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar55._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
        auVar51._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar51._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar10 * auVar61._8_4_ | (uint)!bVar10 * auVar74._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar10 * auVar61._12_4_ | (uint)!bVar10 * auVar74._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        puVar3 = (undefined4 *)(param_3 + lVar37 * 0xc);
        auVar42 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar36));
        auVar52._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar52._4_4_ = (uint)bVar10 * auVar61._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar52._8_4_ = (uint)bVar10 * auVar61._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar52._12_4_ = (uint)bVar10 * auVar61._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + unaff_RBX));
        auVar53._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar53._4_4_ = (uint)bVar10 * auVar61._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar53._8_4_ = (uint)bVar10 * auVar61._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar53._12_4_ = (uint)bVar10 * auVar61._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        auVar62 = vgatherdps_avx512vl(*puVar3);
        auVar61._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar62._4_4_;
        auVar61._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_;
        auVar61._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar62._8_4_;
        auVar61._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar62._12_4_;
        auVar61._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
        auVar61._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
        auVar61._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
        auVar61._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      }
      auVar71._4_4_ = param_5;
      auVar71._0_4_ = param_5;
      auVar71._8_4_ = param_5;
      auVar71._12_4_ = param_5;
      auVar71._16_4_ = param_5;
      auVar71._20_4_ = param_5;
      auVar71._24_4_ = param_5;
      auVar71._28_4_ = param_5;
      auVar70._4_4_ = param_6;
      auVar70._0_4_ = param_6;
      auVar70._8_4_ = param_6;
      auVar70._12_4_ = param_6;
      auVar70._16_4_ = param_6;
      auVar70._20_4_ = param_6;
      auVar70._24_4_ = param_6;
      auVar70._28_4_ = param_6;
      piVar4 = (int *)(param_4 + (iVar34 << 2));
      auVar59._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar4[1];
      auVar59._0_4_ = (uint)(bVar39 & 1) * *piVar4;
      auVar59._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar4[2];
      auVar59._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar4[3];
      auVar59._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar4[4];
      auVar59._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar4[5];
      auVar59._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar4[6];
      auVar59._28_4_ = (uint)(byte)(uVar35 >> 7) * piVar4[7];
      auVar62 = vfmadd213ps_avx512vl(auVar59,auVar70,auVar71);
      auVar42 = vxorps_avx512vl(auVar78,auVar78);
      auVar64 = vbroadcastss_avx512vl(auVar68);
      auVar46 = vsubps_avx512vl(auVar62,auVar64);
      auVar48 = vfnmadd213ps_avx512vl(auVar62,auVar52,auVar54);
      auVar50 = vfnmadd213ps_avx512vl(auVar62,auVar53,auVar55);
      auVar58 = vfnmadd213ps_avx512vl(auVar62,auVar61,auVar51);
      auVar45._4_4_ = (uint)bVar7 * auVar47._4_4_ | (uint)!bVar7 * iStack_13c;
      auVar45._0_4_ = (uint)(bVar39 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar39 & 1) * local_140;
      auVar45._8_4_ = (uint)bVar11 * auVar47._8_4_ | (uint)!bVar11 * iStack_138;
      auVar45._12_4_ = (uint)bVar14 * auVar47._12_4_ | (uint)!bVar14 * iStack_134;
      auVar45._16_4_ = (uint)bVar17 * auVar47._16_4_ | (uint)!bVar17 * iStack_130;
      auVar45._20_4_ = (uint)bVar20 * auVar47._20_4_ | (uint)!bVar20 * iStack_12c;
      auVar45._24_4_ = (uint)bVar23 * auVar47._24_4_ | (uint)!bVar23 * iStack_128;
      auVar45._28_4_ = (uint)bVar26 * auVar47._28_4_ | (uint)!bVar26 * iStack_124;
      auVar56._4_4_ = (uint)bVar8 * auVar49._4_4_ | (uint)!bVar8 * iStack_11c;
      auVar56._0_4_ = (uint)(bVar39 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar56._8_4_ = (uint)bVar12 * auVar49._8_4_ | (uint)!bVar12 * iStack_118;
      auVar56._12_4_ = (uint)bVar15 * auVar49._12_4_ | (uint)!bVar15 * iStack_114;
      auVar56._16_4_ = (uint)bVar18 * auVar49._16_4_ | (uint)!bVar18 * iStack_110;
      auVar56._20_4_ = (uint)bVar21 * auVar49._20_4_ | (uint)!bVar21 * iStack_10c;
      auVar56._24_4_ = (uint)bVar24 * auVar49._24_4_ | (uint)!bVar24 * iStack_108;
      auVar56._28_4_ = (uint)bVar27 * auVar49._28_4_ | (uint)!bVar27 * iStack_104;
      auVar57._4_4_ = (uint)bVar9 * auVar44._4_4_ | (uint)!bVar9 * iStack_fc;
      auVar57._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar57._8_4_ = (uint)bVar13 * auVar44._8_4_ | (uint)!bVar13 * iStack_f8;
      auVar57._12_4_ = (uint)bVar16 * auVar44._12_4_ | (uint)!bVar16 * iStack_f4;
      auVar57._16_4_ = (uint)bVar19 * auVar44._16_4_ | (uint)!bVar19 * iStack_f0;
      auVar57._20_4_ = (uint)bVar22 * auVar44._20_4_ | (uint)!bVar22 * iStack_ec;
      auVar57._24_4_ = (uint)bVar25 * auVar44._24_4_ | (uint)!bVar25 * iStack_e8;
      auVar57._28_4_ = (uint)bVar28 * auVar44._28_4_ | (uint)!bVar28 * iStack_e4;
      auVar44 = vsubps_avx512vl(auVar45,auVar48);
      auVar45 = vsubps_avx512vl(auVar56,auVar50);
      auVar47 = vsubps_avx512vl(auVar57,auVar58);
      auVar62 = vmulps_avx512vl(auVar45,auVar45);
      auVar62 = vfmadd231ps_avx512vl(auVar62,auVar44,auVar44);
      auVar49 = vfmadd231ps_avx512vl(auVar62,auVar47,auVar47);
      auVar62 = vsqrtps_avx512vl(auVar49);
      auVar64 = vdivps_avx512vl(auVar64,auVar62);
      auVar52 = vfnmadd213ps_avx512vl(auVar52,auVar46,auVar54);
      param_7 = param_7 * param_7;
      auVar69._4_4_ = param_7;
      auVar69._0_4_ = param_7;
      auVar69._8_4_ = param_7;
      auVar69._12_4_ = param_7;
      auVar69._16_4_ = param_7;
      auVar69._20_4_ = param_7;
      auVar69._24_4_ = param_7;
      auVar69._28_4_ = param_7;
      uVar35 = vcmpps_avx512vl(auVar49,auVar69,1);
      auVar62._4_4_ = __real_322bcc77;
      auVar62._0_4_ = __real_322bcc77;
      auVar62._8_4_ = __real_322bcc77;
      auVar62._12_4_ = __real_322bcc77;
      auVar62._16_4_ = __real_322bcc77;
      auVar62._20_4_ = __real_322bcc77;
      auVar62._24_4_ = __real_322bcc77;
      auVar62._28_4_ = __real_322bcc77;
      uVar30 = vcmpps_avx512vl(auVar49,auVar62,1);
      auVar62 = vfmadd231ps_avx512vl(auVar48,auVar64,auVar44);
      bVar5 = (byte)uVar35;
      bVar6 = (byte)uVar30;
      auVar65._0_4_ =
           (uint)(bVar6 & 1) * auVar52._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar62._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar7 * auVar52._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar62._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar7 * auVar52._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar62._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar7 * auVar52._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar62._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar7 * auVar52._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar7 * auVar52._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar7 * auVar52._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar7 * auVar52._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      uVar29 = vcmpps_avx512vl(auVar63,ZEXT1632(auVar42),4);
      uVar32 = vcmpps_avx512vl(auVar65,ZEXT1632(auVar42),4);
      bVar39 = (byte)uVar29 & (byte)uVar32 & bVar39;
      uVar41 = (ulonglong)bVar39;
      if (bVar39 != 0) {
        auVar62 = vfnmadd213ps_avx512vl(auVar53,auVar46,auVar55);
        auVar61 = vfnmadd213ps_avx512vl(auVar61,auVar46,auVar51);
        auVar44 = vfmadd213ps_avx512vl(auVar45,auVar64,auVar50);
        auVar45 = vfmadd213ps_avx512vl(auVar47,auVar64,auVar58);
        auVar66._0_4_ =
             (uint)(bVar6 & 1) * auVar62._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar66._4_4_ =
             (uint)bVar7 * auVar62._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar66._8_4_ =
             (uint)bVar7 * auVar62._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar66._12_4_ =
             (uint)bVar7 * auVar62._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar66._16_4_ =
             (uint)bVar7 * auVar62._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar66._20_4_ =
             (uint)bVar7 * auVar62._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar66._24_4_ =
             (uint)bVar7 * auVar62._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar66._28_4_ =
             (uint)bVar7 * auVar62._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
        auVar67._0_4_ =
             (uint)(bVar6 & 1) * auVar61._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar45._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * auVar61._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * auVar61._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * auVar61._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * auVar61._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * auVar61._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * auVar61._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * auVar61._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar45._28_4_;
        if (bVar39 == 0xff) {
          auVar62 = vunpcklps_avx512vl(auVar65,auVar66);
          auVar61 = vunpcklps_avx(auVar67,auVar63);
          auVar44 = vunpcklpd_avx(auVar62,auVar61);
          auVar61 = vunpckhpd_avx(auVar62,auVar61);
          auVar45 = vunpckhps_avx512vl(auVar65,auVar66);
          auVar62 = vunpckhps_avx(auVar67,auVar63);
          auVar63 = vunpcklpd_avx(auVar45,auVar62);
          auVar62 = vunpckhpd_avx(auVar45,auVar62);
          auVar72._16_16_ = auVar61._0_16_;
          auVar72._0_16_ = auVar44._0_16_;
          *pauVar36 = auVar72;
          auVar73._16_16_ = auVar62._0_16_;
          auVar73._0_16_ = auVar63._0_16_;
          pauVar36[1] = auVar73;
          auVar61 = vperm2f128_avx(auVar44,auVar61,0x31);
          pauVar36[2] = auVar61;
          auVar61 = vperm2f128_avx(auVar63,auVar62,0x31);
          pauVar36[3] = auVar61;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar65);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar67);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar63);
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx512skx @ 1403136c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  undefined1 (*pauVar36) [32];
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [64];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar76 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM22 [64];
  undefined1 auVar78 [16];
  undefined1 in_ZMM24 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar62 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar61 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar60 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar78 = in_ZMM24._0_16_;
  auVar77 = in_ZMM18._0_16_;
  auVar76 = in_ZMM17._0_16_;
  auVar43 = in_ZMM16._0_16_;
  uVar33 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar33 = param_9;
  }
  if ((int)(uVar33 & 0xfffffff8) < 1) {
    uVar35 = 0;
  }
  else {
    auVar63._4_4_ = param_7;
    auVar63._0_4_ = param_7;
    auVar63._8_4_ = param_7;
    auVar63._12_4_ = param_7;
    auVar63._16_4_ = param_7;
    auVar63._20_4_ = param_7;
    auVar63._24_4_ = param_7;
    auVar63._28_4_ = param_7;
    auVar65._4_4_ = param_5;
    auVar65._0_4_ = param_5;
    auVar65._8_4_ = param_5;
    auVar65._12_4_ = param_5;
    auVar65._16_4_ = param_5;
    auVar65._20_4_ = param_5;
    auVar65._24_4_ = param_5;
    auVar65._28_4_ = param_5;
    unaff_RBX = (longlong)param_8 * 3 + 0x10;
    pauVar36 = (undefined1 (*) [32])((longlong)param_8 * 0x10 + param_1);
    uVar38 = 0;
    auVar43 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar76 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar77 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar44 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar42 = vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
    auVar78 = __ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c._0_16_;
    uVar35 = 0;
    do {
      auVar45 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar46 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar47 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar48 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar49 = vunpckhps_avx512vl(auVar45,auVar46);
      auVar50 = vunpckhps_avx512vl(auVar47,auVar48);
      auVar51 = vunpckhpd_avx512vl(auVar49,auVar50);
      uVar29 = vcmpps_avx512vl(auVar51,ZEXT1632(auVar42),4);
      if ((char)uVar29 != '\0') {
        auVar49 = vunpcklpd_avx512vl(auVar49,auVar50);
        auVar45 = vunpcklps_avx512vl(auVar45,auVar46);
        auVar46 = vunpcklps_avx512vl(auVar47,auVar48);
        auVar50 = vunpckhpd_avx512vl(auVar45,auVar46);
        auVar52 = vunpcklpd_avx512vl(auVar45,auVar46);
        auVar45 = *(undefined1 (*) [32])(param_2 + -0x40 + unaff_RBX * 4);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x20 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + unaff_RBX * 4);
        auVar48 = vblendps_avx(auVar46,auVar45,0x24);
        auVar45 = vpermt2ps_avx512vl(auVar45,auVar60,auVar46);
        auVar53 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar46 = vpermt2ps_avx512vl(auVar47,auVar61,auVar46);
        auVar54 = vinsertf32x4_avx512vl(auVar45,auVar46._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar45,auVar46,3);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x40 + unaff_RBX * 4);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x20 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + unaff_RBX * 4);
        auVar48 = vblendps_avx(auVar46,auVar45,0x24);
        auVar45 = vpermt2ps_avx512vl(auVar45,auVar60,auVar46);
        auVar48 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar46 = vpermt2ps_avx512vl(auVar47,auVar61,auVar46);
        auVar47 = vinsertf32x4_avx512vl(auVar45,auVar46._0_16_,1);
        auVar56 = vshuff64x2_avx512vl(auVar45,auVar46,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar38);
        auVar75._0_4_ = param_7 * *pfVar1 + param_6;
        auVar75._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar75._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar75._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar75._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar75._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar75._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar75._28_4_ = param_7 * pfVar1[7] + param_6;
        auVar57 = vfnmadd213ps_avx512vl(auVar47,auVar65,auVar54);
        auVar58 = vfnmadd213ps_avx512vl(auVar56,auVar65,auVar55);
        auVar73._0_4_ = -(param_5 * auVar48._0_4_) + auVar53._0_4_;
        auVar73._4_4_ = -(param_5 * auVar48._4_4_) + auVar53._4_4_;
        auVar73._8_4_ = -(param_5 * auVar48._8_4_) + auVar53._8_4_;
        auVar73._12_4_ = -(param_5 * auVar48._12_4_) + auVar53._12_4_;
        auVar73._16_4_ = -(param_5 * auVar48._16_4_) + auVar53._16_4_;
        auVar73._20_4_ = -(param_5 * auVar48._20_4_) + auVar53._20_4_;
        auVar73._24_4_ = -(param_5 * auVar48._24_4_) + auVar53._24_4_;
        auVar73._28_4_ = -(param_5 * auVar48._28_4_) + auVar53._28_4_;
        auVar52 = vsubps_avx512vl(auVar52,auVar57);
        auVar50 = vsubps_avx512vl(auVar50,auVar58);
        auVar49 = vsubps_avx512vl(auVar49,auVar73);
        auVar45 = vmulps_avx512vl(auVar50,auVar50);
        auVar46._0_4_ = auVar52._0_4_ * auVar52._0_4_ + auVar45._0_4_;
        auVar46._4_4_ = auVar52._4_4_ * auVar52._4_4_ + auVar45._4_4_;
        auVar46._8_4_ = auVar52._8_4_ * auVar52._8_4_ + auVar45._8_4_;
        auVar46._12_4_ = auVar52._12_4_ * auVar52._12_4_ + auVar45._12_4_;
        auVar46._16_4_ = auVar52._16_4_ * auVar52._16_4_ + auVar45._16_4_;
        auVar46._20_4_ = auVar52._20_4_ * auVar52._20_4_ + auVar45._20_4_;
        auVar46._24_4_ = auVar52._24_4_ * auVar52._24_4_ + auVar45._24_4_;
        auVar46._28_4_ = auVar52._28_4_ * auVar52._28_4_ + auVar45._28_4_;
        auVar59 = vfmadd231ps_avx512vl(auVar46,auVar49,auVar49);
        auVar45 = vsqrtps_avx(auVar59);
        auVar45 = vdivps_avx(auVar75,auVar45);
        auVar46 = vsubps_avx(auVar65,auVar75);
        auVar74._0_4_ = auVar75._0_4_ * auVar75._0_4_;
        auVar74._4_4_ = auVar75._4_4_ * auVar75._4_4_;
        auVar74._8_4_ = auVar75._8_4_ * auVar75._8_4_;
        auVar74._12_4_ = auVar75._12_4_ * auVar75._12_4_;
        auVar74._16_4_ = auVar75._16_4_ * auVar75._16_4_;
        auVar74._20_4_ = auVar75._20_4_ * auVar75._20_4_;
        auVar74._24_4_ = auVar75._24_4_ * auVar75._24_4_;
        auVar74._28_4_ = auVar75._28_4_ * auVar75._28_4_;
        uVar30 = vcmpps_avx512vl(auVar59,auVar74,1);
        auVar52 = vfmadd231ps_avx512vl(auVar57,auVar45,auVar52);
        bVar39 = (byte)uVar30;
        uVar41 = vcmpps_avx512vl(auVar59,auVar44,1);
        bVar5 = (byte)uVar41;
        auVar57._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar46._0_4_ * auVar47._0_4_) + auVar54._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar52._0_4_;
        bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar57._4_4_ =
             (uint)bVar7 * (int)(-(auVar46._4_4_ * auVar47._4_4_) + auVar54._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar52._4_4_;
        bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar57._8_4_ =
             (uint)bVar7 * (int)(-(auVar46._8_4_ * auVar47._8_4_) + auVar54._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar52._8_4_;
        bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar57._12_4_ =
             (uint)bVar7 * (int)(-(auVar46._12_4_ * auVar47._12_4_) + auVar54._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar52._12_4_;
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        auVar57._16_4_ =
             (uint)bVar7 * (int)(-(auVar46._16_4_ * auVar47._16_4_) + auVar54._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar52._16_4_;
        bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
        auVar57._20_4_ =
             (uint)bVar7 * (int)(-(auVar46._20_4_ * auVar47._20_4_) + auVar54._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar52._20_4_;
        bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
        auVar57._24_4_ =
             (uint)bVar7 * (int)(-(auVar46._24_4_ * auVar47._24_4_) + auVar54._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar52._24_4_;
        bVar7 = SUB81(uVar41 >> 7,0);
        auVar57._28_4_ =
             (uint)bVar7 * (int)(-(auVar46._28_4_ * auVar47._28_4_) + auVar54._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar52._28_4_;
        uVar40 = vcmpps_avx512vl(auVar57,ZEXT1632(auVar42),4);
        uVar31 = vcmpps_avx512vl(auVar51,ZEXT1632(auVar42),4);
        uVar40 = uVar40 & uVar31;
        if ((char)uVar40 != '\0') {
          auVar47 = vfnmadd213ps_avx512vl(auVar56,auVar46,auVar55);
          auVar52._0_4_ = -(auVar46._0_4_ * auVar48._0_4_) + auVar53._0_4_;
          auVar52._4_4_ = -(auVar46._4_4_ * auVar48._4_4_) + auVar53._4_4_;
          auVar52._8_4_ = -(auVar46._8_4_ * auVar48._8_4_) + auVar53._8_4_;
          auVar52._12_4_ = -(auVar46._12_4_ * auVar48._12_4_) + auVar53._12_4_;
          auVar52._16_4_ = -(auVar46._16_4_ * auVar48._16_4_) + auVar53._16_4_;
          auVar52._20_4_ = -(auVar46._20_4_ * auVar48._20_4_) + auVar53._20_4_;
          auVar52._24_4_ = -(auVar46._24_4_ * auVar48._24_4_) + auVar53._24_4_;
          auVar52._28_4_ = -(auVar46._28_4_ * auVar48._28_4_) + auVar53._28_4_;
          auVar46 = vfmadd213ps_avx512vl(auVar50,auVar45,auVar58);
          auVar45 = vfmadd213ps_avx512vl(auVar49,auVar45,auVar73);
          auVar48._0_4_ =
               (uint)(bVar5 & 1) * auVar47._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar48._4_4_ =
               (uint)bVar7 * auVar47._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar46._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar48._8_4_ =
               (uint)bVar7 * auVar47._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar46._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar48._12_4_ =
               (uint)bVar7 * auVar47._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar46._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar48._16_4_ =
               (uint)bVar7 * auVar47._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar46._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar48._20_4_ =
               (uint)bVar7 * auVar47._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar46._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar48._24_4_ =
               (uint)bVar7 * auVar47._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar46._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar48._28_4_ =
               (uint)bVar7 * auVar47._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar46._28_4_;
          auVar47._0_4_ =
               (uint)(bVar5 & 1) * (int)auVar52._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar45._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar7 * (int)auVar52._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar45._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar7 * (int)auVar52._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar45._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar7 * (int)auVar52._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar45._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar7 * (int)auVar52._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar45._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar7 * (int)auVar52._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar45._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar7 * (int)auVar52._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar45._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar7 * (int)auVar52._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar45._28_4_;
          if ((char)uVar40 == -1) {
            auVar45 = vunpcklps_avx512vl(auVar57,auVar48);
            auVar46 = vunpcklps_avx512vl(auVar47,auVar51);
            auVar49 = vunpcklpd_avx512vl(auVar45,auVar46);
            auVar45 = vunpckhpd_avx512vl(auVar45,auVar46);
            auVar46 = vunpckhps_avx512vl(auVar57,auVar48);
            auVar47 = vunpckhps_avx512vl(auVar47,auVar51);
            auVar48 = vunpcklpd_avx512vl(auVar46,auVar47);
            auVar46 = vunpckhpd_avx512vl(auVar46,auVar47);
            auVar47 = vinsertf32x4_avx512vl(auVar49,auVar45._0_16_,1);
            *pauVar36 = auVar47;
            auVar47 = vinsertf32x4_avx512vl(auVar48,auVar46._0_16_,1);
            pauVar36[1] = auVar47;
            auVar45 = vshuff64x2_avx512vl(auVar49,auVar45,3);
            pauVar36[2] = auVar45;
            auVar45 = vshuff64x2_avx512vl(auVar48,auVar46,3);
            pauVar36[3] = auVar45;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar63,uVar40,auVar57);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar65,uVar40,auVar48);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar52,uVar40,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar73,uVar40,auVar51);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar38 = uVar38 + 0x20;
      pauVar36 = pauVar36 + 4;
      unaff_RBX = unaff_RBX + 0x18;
    } while (uVar35 < (uVar33 & 0xfffffff8));
  }
  iVar34 = (int)uVar35;
  if (iVar34 < (int)param_9) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar60 = vpor_avx2(auVar60,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar61 = vpbroadcastd_avx512vl();
    uVar35 = vpcmpgtd_avx512vl(auVar61,auVar60);
    lVar37 = (longlong)(param_8 + iVar34);
    pauVar36 = (undefined1 (*) [32])(param_1 + lVar37 * 0x10);
    bVar39 = (byte)uVar35;
    if (bVar39 == 0xff) {
      auVar62 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar44 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar63 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar65 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar45 = vunpcklps_avx512vl(auVar62,auVar44);
      auVar62 = vunpckhps_avx512vl(auVar62,auVar44);
      auVar44 = vunpcklps_avx512vl(auVar63,auVar65);
      auVar63 = vunpckhps_avx512vl(auVar63,auVar65);
      auVar49 = vunpcklpd_avx512vl(auVar45,auVar44);
      auVar44 = vunpckhpd_avx512vl(auVar45,auVar44);
      auVar45 = vunpcklpd_avx512vl(auVar62,auVar63);
      auVar62 = vunpckhpd_avx512vl(auVar62,auVar63);
    }
    else {
      auVar43 = vxorps_avx512vl(auVar43,auVar43);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar49._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar49._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar49._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar49._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar49._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar43 = vxorps_avx512vl(auVar76,auVar76);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar44._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar44._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar44._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar43 = vxorps_avx512vl(auVar77,auVar77);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar45._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar45._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar45._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar45._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar45._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar45._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar45._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar45._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar62._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
      auVar62._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
    }
    uVar32 = vpcmpd_avx512vl(auVar60,auVar61,5);
    bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar20 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar23 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar26 = SUB81(uVar35 >> 7,0);
    bVar8 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar21 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar27 = SUB81(uVar35 >> 7,0);
    bVar9 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar25 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar28 = SUB81(uVar35 >> 7,0);
    auVar72 = ZEXT1664((undefined1  [16])0x0);
    uVar29 = vcmpps_avx512vl(auVar62,auVar72._0_32_,0);
    if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
      pauVar2 = (undefined1 (*) [32])(param_2 + lVar37 * 0xc);
      if (bVar39 == 0xff) {
        auVar60 = pauVar2[1];
        auVar61 = vblendps_avx(auVar60,*pauVar2,0x24);
        auVar63 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60);
        auVar53 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar60 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar60);
        auVar51 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
        auVar50 = vshuff64x2_avx512vl(auVar63,auVar60,3);
        auVar60 = *(undefined1 (*) [32])(param_3 + lVar37 * 0xc);
        auVar61 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar37 * 0xc);
        auVar63 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar37 * 0xc);
        auVar65 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60,auVar61);
        auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar63,auVar61);
        auVar54 = vinsertf32x4_avx512vl(auVar65,auVar46._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar65,auVar46,3);
        auVar60 = vblendps_avx(auVar61,auVar60,0x24);
        auVar60 = vpermt2ps_avx512vl(auVar60,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar63);
      }
      else {
        auVar43 = vxorps_avx512vl(auVar49._0_16_,auVar49._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + (longlong)*pauVar2));
        auVar51._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar51._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
        auVar50._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar50._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        auVar50._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar60._8_4_;
        auVar50._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar60._12_4_;
        auVar50._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar50._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar50._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar50._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
        auVar53._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar53._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar53._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar72._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar53._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar72._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        puVar3 = (undefined4 *)(param_3 + lVar37 * 0xc);
        auVar43 = vxorps_avx512vl(auVar45._0_16_,auVar45._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar36));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar43 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + unaff_RBX));
        auVar55._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar55._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar55._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar55._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar55._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar55._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar55._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar55._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar61 = vgatherdps_avx512vl(*puVar3);
        auVar60._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar60._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
        auVar60._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
        auVar60._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar60._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar60._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar60._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      }
      auVar71._4_4_ = param_6;
      auVar71._0_4_ = param_6;
      auVar71._8_4_ = param_6;
      auVar71._12_4_ = param_6;
      auVar71._16_4_ = param_6;
      auVar71._20_4_ = param_6;
      auVar71._24_4_ = param_6;
      auVar71._28_4_ = param_6;
      auVar69._4_4_ = param_7;
      auVar69._0_4_ = param_7;
      auVar69._8_4_ = param_7;
      auVar69._12_4_ = param_7;
      auVar69._16_4_ = param_7;
      auVar69._20_4_ = param_7;
      auVar69._24_4_ = param_7;
      auVar69._28_4_ = param_7;
      piVar4 = (int *)(param_4 + (iVar34 << 2));
      auVar64._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar4[1];
      auVar64._0_4_ = (uint)(bVar39 & 1) * *piVar4;
      auVar64._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar4[2];
      auVar64._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar4[3];
      auVar64._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar4[4];
      auVar64._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar4[5];
      auVar64._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar4[6];
      auVar64._28_4_ = (uint)(byte)(uVar35 >> 7) * piVar4[7];
      auVar61 = vfmadd213ps_avx512vl(auVar64,auVar69,auVar71);
      auVar43 = vxorps_avx512vl(auVar78,auVar78);
      auVar63 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
      auVar65 = vfnmadd213ps_avx512vl(auVar54,auVar63,auVar51);
      auVar46 = vfnmadd213ps_avx512vl(auVar55,auVar63,auVar50);
      auVar47 = vfnmadd213ps_avx512vl(auVar60,auVar63,auVar53);
      auVar56._4_4_ = (uint)bVar7 * auVar49._4_4_ | (uint)!bVar7 * iStack_13c;
      auVar56._0_4_ = (uint)(bVar39 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar39 & 1) * local_140;
      auVar56._8_4_ = (uint)bVar11 * auVar49._8_4_ | (uint)!bVar11 * iStack_138;
      auVar56._12_4_ = (uint)bVar14 * auVar49._12_4_ | (uint)!bVar14 * iStack_134;
      auVar56._16_4_ = (uint)bVar17 * auVar49._16_4_ | (uint)!bVar17 * iStack_130;
      auVar56._20_4_ = (uint)bVar20 * auVar49._20_4_ | (uint)!bVar20 * iStack_12c;
      auVar56._24_4_ = (uint)bVar23 * auVar49._24_4_ | (uint)!bVar23 * iStack_128;
      auVar56._28_4_ = (uint)bVar26 * auVar49._28_4_ | (uint)!bVar26 * iStack_124;
      auVar58._4_4_ = (uint)bVar8 * auVar44._4_4_ | (uint)!bVar8 * iStack_11c;
      auVar58._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar58._8_4_ = (uint)bVar12 * auVar44._8_4_ | (uint)!bVar12 * iStack_118;
      auVar58._12_4_ = (uint)bVar15 * auVar44._12_4_ | (uint)!bVar15 * iStack_114;
      auVar58._16_4_ = (uint)bVar18 * auVar44._16_4_ | (uint)!bVar18 * iStack_110;
      auVar58._20_4_ = (uint)bVar21 * auVar44._20_4_ | (uint)!bVar21 * iStack_10c;
      auVar58._24_4_ = (uint)bVar24 * auVar44._24_4_ | (uint)!bVar24 * iStack_108;
      auVar58._28_4_ = (uint)bVar27 * auVar44._28_4_ | (uint)!bVar27 * iStack_104;
      auVar59._4_4_ = (uint)bVar9 * auVar45._4_4_ | (uint)!bVar9 * iStack_fc;
      auVar59._0_4_ = (uint)(bVar39 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar59._8_4_ = (uint)bVar13 * auVar45._8_4_ | (uint)!bVar13 * iStack_f8;
      auVar59._12_4_ = (uint)bVar16 * auVar45._12_4_ | (uint)!bVar16 * iStack_f4;
      auVar59._16_4_ = (uint)bVar19 * auVar45._16_4_ | (uint)!bVar19 * iStack_f0;
      auVar59._20_4_ = (uint)bVar22 * auVar45._20_4_ | (uint)!bVar22 * iStack_ec;
      auVar59._24_4_ = (uint)bVar25 * auVar45._24_4_ | (uint)!bVar25 * iStack_e8;
      auVar59._28_4_ = (uint)bVar28 * auVar45._28_4_ | (uint)!bVar28 * iStack_e4;
      auVar44 = vsubps_avx512vl(auVar56,auVar65);
      auVar45 = vsubps_avx512vl(auVar58,auVar46);
      auVar48 = vsubps_avx512vl(auVar59,auVar47);
      auVar49 = vmulps_avx512vl(auVar45,auVar45);
      auVar49 = vfmadd231ps_avx512vl(auVar49,auVar44,auVar44);
      auVar49 = vfmadd231ps_avx512vl(auVar49,auVar48,auVar48);
      auVar52 = vsqrtps_avx512vl(auVar49);
      auVar52 = vdivps_avx512vl(auVar61,auVar52);
      auVar63 = vsubps_avx512vl(auVar63,auVar61);
      auVar51 = vfnmadd213ps_avx512vl(auVar54,auVar63,auVar51);
      auVar61 = vmulps_avx512vl(auVar61,auVar61);
      uVar35 = vcmpps_avx512vl(auVar49,auVar61,1);
      auVar61._4_4_ = __real_322bcc77;
      auVar61._0_4_ = __real_322bcc77;
      auVar61._8_4_ = __real_322bcc77;
      auVar61._12_4_ = __real_322bcc77;
      auVar61._16_4_ = __real_322bcc77;
      auVar61._20_4_ = __real_322bcc77;
      auVar61._24_4_ = __real_322bcc77;
      auVar61._28_4_ = __real_322bcc77;
      uVar30 = vcmpps_avx512vl(auVar49,auVar61,1);
      auVar61 = vfmadd231ps_avx512vl(auVar65,auVar52,auVar44);
      bVar5 = (byte)uVar35;
      bVar6 = (byte)uVar30;
      auVar66._0_4_ =
           (uint)(bVar6 & 1) * auVar51._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar61._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar66._4_4_ =
           (uint)bVar7 * auVar51._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar66._8_4_ =
           (uint)bVar7 * auVar51._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar66._12_4_ =
           (uint)bVar7 * auVar51._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar66._16_4_ =
           (uint)bVar7 * auVar51._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar66._20_4_ =
           (uint)bVar7 * auVar51._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar66._24_4_ =
           (uint)bVar7 * auVar51._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar66._28_4_ =
           (uint)bVar7 * auVar51._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      uVar29 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar43),4);
      uVar32 = vcmpps_avx512vl(auVar66,ZEXT1632(auVar43),4);
      bVar39 = (byte)uVar29 & (byte)uVar32 & bVar39;
      uVar41 = (ulonglong)bVar39;
      if (bVar39 != 0) {
        auVar61 = vfnmadd213ps_avx512vl(auVar55,auVar63,auVar50);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar63,auVar53);
        auVar44 = vfmadd213ps_avx512vl(auVar45,auVar52,auVar46);
        auVar63 = vfmadd213ps_avx512vl(auVar48,auVar52,auVar47);
        auVar67._0_4_ =
             (uint)(bVar6 & 1) * auVar61._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * auVar61._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * auVar61._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * auVar61._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * auVar61._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * auVar61._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * auVar61._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * auVar61._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
        auVar68._0_4_ =
             (uint)(bVar6 & 1) * auVar60._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar63._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar68._4_4_ =
             (uint)bVar7 * auVar60._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar68._8_4_ =
             (uint)bVar7 * auVar60._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar68._12_4_ =
             (uint)bVar7 * auVar60._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar68._16_4_ =
             (uint)bVar7 * auVar60._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar68._20_4_ =
             (uint)bVar7 * auVar60._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar68._24_4_ =
             (uint)bVar7 * auVar60._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar68._28_4_ =
             (uint)bVar7 * auVar60._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
        if (bVar39 == 0xff) {
          auVar60 = vunpcklps_avx(auVar66,auVar67);
          auVar61 = vunpcklps_avx(auVar68,auVar62);
          auVar63 = vunpcklpd_avx512vl(auVar60,auVar61);
          auVar60 = vunpckhpd_avx(auVar60,auVar61);
          auVar61 = vunpckhps_avx(auVar66,auVar67);
          auVar62 = vunpckhps_avx(auVar68,auVar62);
          auVar44 = vunpcklpd_avx(auVar61,auVar62);
          auVar61 = vunpckhpd_avx(auVar61,auVar62);
          auVar62 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
          *pauVar36 = auVar62;
          auVar70._16_16_ = auVar61._0_16_;
          auVar70._0_16_ = auVar44._0_16_;
          pauVar36[1] = auVar70;
          auVar60 = vshuff64x2_avx512vl(auVar63,auVar60,3);
          pauVar36[2] = auVar60;
          auVar60 = vperm2f128_avx(auVar44,auVar61,0x31);
          pauVar36[3] = auVar60;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar67);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar68);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar62);
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_avx512skx @ 140313eb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,float param_5,
               int param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 *puVar2;
  byte bVar3;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [32];
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  float fVar68;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar72 [32];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar73 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar74 [16];
  undefined1 in_ZMM19 [64];
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_58 [16];
  
  auVar60 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar59 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar58 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar74 = in_ZMM19._0_16_;
  auVar73 = in_ZMM17._0_16_;
  auVar42 = in_ZMM16._0_16_;
  local_58 = in_ZMM11._0_16_;
  local_88 = in_ZMM8._0_16_;
  local_98 = in_ZMM7._0_16_;
  uVar36 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar36 = param_7;
  }
  fVar68 = in_ZMM3._0_4_;
  if ((int)(uVar36 & 0xfffffff8) < 1) {
    uVar37 = 0;
  }
  else {
    auVar61._4_4_ = fVar68;
    auVar61._0_4_ = fVar68;
    auVar61._8_4_ = fVar68;
    auVar61._12_4_ = fVar68;
    auVar61._16_4_ = fVar68;
    auVar61._20_4_ = fVar68;
    auVar61._24_4_ = fVar68;
    auVar61._28_4_ = fVar68;
    auVar62._4_4_ = param_5;
    auVar62._0_4_ = param_5;
    auVar62._8_4_ = param_5;
    auVar62._12_4_ = param_5;
    auVar62._16_4_ = param_5;
    auVar62._20_4_ = param_5;
    auVar62._24_4_ = param_5;
    auVar62._28_4_ = param_5;
    fVar27 = fVar68 - param_5;
    auVar63._4_4_ = fVar27;
    auVar63._0_4_ = fVar27;
    auVar63._8_4_ = fVar27;
    auVar63._12_4_ = fVar27;
    auVar63._16_4_ = fVar27;
    auVar63._20_4_ = fVar27;
    auVar63._24_4_ = fVar27;
    auVar63._28_4_ = fVar27;
    fVar26 = param_5 * param_5;
    auVar64._4_4_ = fVar26;
    auVar64._0_4_ = fVar26;
    auVar64._8_4_ = fVar26;
    auVar64._12_4_ = fVar26;
    auVar64._16_4_ = fVar26;
    auVar64._20_4_ = fVar26;
    auVar64._24_4_ = fVar26;
    auVar64._28_4_ = fVar26;
    pauVar38 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    lVar35 = (longlong)param_6 * 0xc + 0x40;
    uVar37 = 0;
    auVar42 = vxorps_avx512vl(auVar42,auVar42);
    auVar73 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar74 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar43 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    do {
      auVar44 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],0);
      auVar45 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],3);
      auVar46 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],0);
      auVar47 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],3);
      auVar48 = vunpckhps_avx512vl(auVar44,auVar45);
      auVar49 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar50 = vunpckhpd_avx512vl(auVar48,auVar49);
      uVar28 = vcmpps_avx512vl(auVar50,ZEXT1632(auVar42),4);
      if ((char)uVar28 != '\0') {
        auVar48 = vunpcklpd_avx512vl(auVar48,auVar49);
        auVar44 = vunpcklps_avx512vl(auVar44,auVar45);
        auVar45 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpckhpd_avx512vl(auVar44,auVar45);
        auVar49 = vunpcklpd_avx512vl(auVar44,auVar45);
        auVar44 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar35);
        auVar45 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar35);
        auVar46 = vblendps_avx(auVar45,auVar44,0x24);
        auVar44 = vpermt2ps_avx512vl(auVar44,auVar58,auVar45);
        auVar51 = vpermt2ps_avx512vl(auVar46,auVar60,*(undefined1 (*) [32])(param_2 + lVar35));
        auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar35),auVar59,auVar45);
        auVar52 = vinsertf32x4_avx512vl(auVar44,auVar45._0_16_,1);
        auVar53 = vshuff64x2_avx512vl(auVar44,auVar45,3);
        auVar44 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar35);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar35);
        auVar46 = vblendps_avx(auVar45,auVar44,0x24);
        auVar44 = vpermt2ps_avx512vl(auVar44,auVar58,auVar45);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,*(undefined1 (*) [32])(param_3 + lVar35));
        auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar35),auVar59,auVar45);
        auVar54 = vinsertf32x4_avx512vl(auVar44,auVar45._0_16_,1);
        auVar45 = vshuff64x2_avx512vl(auVar44,auVar45,3);
        auVar55 = vfnmadd213ps_avx512vl(auVar54,auVar61,auVar52);
        auVar56 = vfnmadd213ps_avx512vl(auVar45,auVar61,auVar53);
        auVar72._0_4_ = -(fVar68 * auVar46._0_4_) + auVar51._0_4_;
        auVar72._4_4_ = -(fVar68 * auVar46._4_4_) + auVar51._4_4_;
        auVar72._8_4_ = -(fVar68 * auVar46._8_4_) + auVar51._8_4_;
        auVar72._12_4_ = -(fVar68 * auVar46._12_4_) + auVar51._12_4_;
        auVar72._16_4_ = -(fVar68 * auVar46._16_4_) + auVar51._16_4_;
        auVar72._20_4_ = -(fVar68 * auVar46._20_4_) + auVar51._20_4_;
        auVar72._24_4_ = -(fVar68 * auVar46._24_4_) + auVar51._24_4_;
        auVar72._28_4_ = -(fVar68 * auVar46._28_4_) + auVar51._28_4_;
        auVar49 = vsubps_avx512vl(auVar49,auVar55);
        auVar47 = vsubps_avx512vl(auVar47,auVar56);
        auVar48 = vsubps_avx512vl(auVar48,auVar72);
        auVar44 = vmulps_avx512vl(auVar47,auVar47);
        auVar57._0_4_ = auVar49._0_4_ * auVar49._0_4_ + auVar44._0_4_;
        auVar57._4_4_ = auVar49._4_4_ * auVar49._4_4_ + auVar44._4_4_;
        auVar57._8_4_ = auVar49._8_4_ * auVar49._8_4_ + auVar44._8_4_;
        auVar57._12_4_ = auVar49._12_4_ * auVar49._12_4_ + auVar44._12_4_;
        auVar57._16_4_ = auVar49._16_4_ * auVar49._16_4_ + auVar44._16_4_;
        auVar57._20_4_ = auVar49._20_4_ * auVar49._20_4_ + auVar44._20_4_;
        auVar57._24_4_ = auVar49._24_4_ * auVar49._24_4_ + auVar44._24_4_;
        auVar57._28_4_ = auVar49._28_4_ * auVar49._28_4_ + auVar44._28_4_;
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar48,auVar48);
        auVar44 = vsqrtps_avx(auVar57);
        auVar44 = vdivps_avx(auVar62,auVar44);
        uVar29 = vcmpps_avx512vl(auVar57,auVar64,1);
        auVar49 = vfmadd231ps_avx512vl(auVar55,auVar44,auVar49);
        bVar39 = (byte)uVar29;
        uVar30 = vcmpps_avx512vl(auVar57,auVar43,1);
        bVar3 = (byte)uVar30;
        auVar55._0_4_ =
             (uint)(bVar3 & 1) * (int)(-(fVar27 * auVar54._0_4_) + auVar52._0_4_) |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar49._0_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar55._4_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._4_4_) + auVar52._4_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar49._4_4_;
        bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar55._8_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._8_4_) + auVar52._8_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar49._8_4_;
        bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar55._12_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._12_4_) + auVar52._12_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar49._12_4_;
        bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar55._16_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._16_4_) + auVar52._16_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar49._16_4_;
        bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar55._20_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._20_4_) + auVar52._20_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar49._20_4_;
        bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar55._24_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._24_4_) + auVar52._24_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar49._24_4_;
        bVar4 = SUB81(uVar30 >> 7,0);
        auVar55._28_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._28_4_) + auVar52._28_4_) |
             (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar49._28_4_;
        uVar40 = vcmpps_avx512vl(auVar55,ZEXT1632(auVar42),4);
        uVar41 = vcmpps_avx512vl(auVar50,ZEXT1632(auVar42),4);
        uVar40 = uVar40 & uVar41;
        if ((char)uVar40 != '\0') {
          auVar45 = vfnmadd213ps_avx512vl(auVar45,auVar63,auVar53);
          auVar49._0_4_ = -(fVar27 * auVar46._0_4_) + auVar51._0_4_;
          auVar49._4_4_ = -(fVar27 * auVar46._4_4_) + auVar51._4_4_;
          auVar49._8_4_ = -(fVar27 * auVar46._8_4_) + auVar51._8_4_;
          auVar49._12_4_ = -(fVar27 * auVar46._12_4_) + auVar51._12_4_;
          auVar49._16_4_ = -(fVar27 * auVar46._16_4_) + auVar51._16_4_;
          auVar49._20_4_ = -(fVar27 * auVar46._20_4_) + auVar51._20_4_;
          auVar49._24_4_ = -(fVar27 * auVar46._24_4_) + auVar51._24_4_;
          auVar49._28_4_ = -(fVar27 * auVar46._28_4_) + auVar51._28_4_;
          auVar46 = vfmadd213ps_avx512vl(auVar47,auVar44,auVar56);
          auVar44 = vfmadd213ps_avx512vl(auVar48,auVar44,auVar72);
          auVar47._0_4_ =
               (uint)(bVar3 & 1) * auVar45._0_4_ |
               (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar4 * auVar45._4_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar46._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar4 * auVar45._8_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar46._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar4 * auVar45._12_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar46._12_4_;
          bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar4 * auVar45._16_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar46._16_4_;
          bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar4 * auVar45._20_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar46._20_4_;
          bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar4 * auVar45._24_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar46._24_4_;
          bVar4 = SUB81(uVar30 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar4 * auVar45._28_4_ |
               (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar46._28_4_;
          auVar45._0_4_ =
               (uint)(bVar3 & 1) * (int)auVar49._0_4_ |
               (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar44._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar45._4_4_ =
               (uint)bVar4 * (int)auVar49._4_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar44._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar45._8_4_ =
               (uint)bVar4 * (int)auVar49._8_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar44._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar45._12_4_ =
               (uint)bVar4 * (int)auVar49._12_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar44._12_4_;
          bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
          auVar45._16_4_ =
               (uint)bVar4 * (int)auVar49._16_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar44._16_4_;
          bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
          auVar45._20_4_ =
               (uint)bVar4 * (int)auVar49._20_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar44._20_4_;
          bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
          auVar45._24_4_ =
               (uint)bVar4 * (int)auVar49._24_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar44._24_4_;
          bVar4 = SUB81(uVar30 >> 7,0);
          auVar45._28_4_ =
               (uint)bVar4 * (int)auVar49._28_4_ |
               (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar44._28_4_;
          if ((char)uVar40 == -1) {
            auVar44 = vunpcklps_avx512vl(auVar55,auVar47);
            auVar46 = vunpcklps_avx512vl(auVar45,auVar50);
            auVar48 = vunpcklpd_avx512vl(auVar44,auVar46);
            auVar44 = vunpckhpd_avx512vl(auVar44,auVar46);
            auVar46 = vunpckhps_avx512vl(auVar55,auVar47);
            auVar45 = vunpckhps_avx512vl(auVar45,auVar50);
            auVar47 = vunpcklpd_avx512vl(auVar46,auVar45);
            auVar45 = vunpckhpd_avx512vl(auVar46,auVar45);
            auVar46 = vinsertf32x4_avx512vl(auVar48,auVar44._0_16_,1);
            *pauVar38 = auVar46;
            auVar46 = vinsertf32x4_avx512vl(auVar47,auVar45._0_16_,1);
            pauVar38[1] = auVar46;
            auVar44 = vshuff64x2_avx512vl(auVar48,auVar44,3);
            pauVar38[2] = auVar44;
            auVar44 = vshuff64x2_avx512vl(auVar47,auVar45,3);
            pauVar38[3] = auVar44;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar64,uVar40,auVar55);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar51,uVar40,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar49,uVar40,auVar45);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar72,uVar40,auVar50);
          }
        }
      }
      uVar37 = uVar37 + 8;
      pauVar38 = pauVar38 + 4;
      lVar35 = lVar35 + 0x60;
    } while (uVar37 < (uVar36 & 0xfffffff8));
  }
  if ((int)uVar37 < (int)param_7) {
    auVar58 = vpbroadcastd_avx512vl();
    auVar58 = vpor_avx2(auVar58,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar59 = vpbroadcastd_avx512vl();
    uVar29 = vpcmpgtd_avx512vl(auVar59,auVar58);
    lVar35 = (longlong)(param_6 + (int)uVar37);
    pauVar38 = (undefined1 (*) [32])(param_1 + lVar35 * 0x10);
    bVar39 = (byte)uVar29;
    if (bVar39 == 0xff) {
      auVar60 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],0);
      auVar43 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],3);
      auVar61 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],0);
      auVar62 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],3);
      auVar63 = vunpcklps_avx512vl(auVar60,auVar43);
      auVar60 = vunpckhps_avx512vl(auVar60,auVar43);
      auVar43 = vunpcklps_avx512vl(auVar61,auVar62);
      auVar61 = vunpckhps_avx512vl(auVar61,auVar62);
      auVar74 = auVar61._0_16_;
      auVar44 = vunpcklpd_avx512vl(auVar63,auVar43);
      auVar46 = vunpckhpd_avx512vl(auVar63,auVar43);
      auVar43 = vunpcklpd_avx512vl(auVar60,auVar61);
      auVar60 = vunpckhpd_avx512vl(auVar60,auVar61);
    }
    else {
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar44._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar60._4_4_;
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
      auVar44._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar60._8_4_;
      auVar44._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar60._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar42 = vxorps_avx512vl(auVar42,auVar42);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar46._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar46._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar46._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar46._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
      auVar46._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar46._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar46._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar46._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar42 = vxorps_avx512vl(auVar73,auVar73);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar43._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar43._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar43._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar43._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
      auVar43._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar43._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar43._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar43._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar38 + param_2));
      auVar60._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
      auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
      auVar60._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
      auVar60._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
    }
    uVar31 = vpcmpd_avx512vl(auVar58,auVar59,5);
    bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar11 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar14 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar17 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar20 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar23 = SUB81(uVar29 >> 7,0);
    bVar5 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar12 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar15 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar18 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar21 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar24 = SUB81(uVar29 >> 7,0);
    bVar6 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar13 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar16 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar19 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar22 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar25 = SUB81(uVar29 >> 7,0);
    uVar28 = vcmpps_avx512vl(auVar60,ZEXT832(0) << 0x20,0);
    if ((byte)((byte)uVar28 | (byte)uVar31) != 0xff) {
      pauVar1 = (undefined1 (*) [32])(param_2 + lVar35 * 0xc);
      if (bVar39 == 0xff) {
        auVar61 = pauVar1[1];
        auVar62 = vblendps_avx(auVar61,*pauVar1,0x24);
        auVar63 = vpermt2ps_avx512vl(*pauVar1,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar53 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar1[2]);
        auVar61 = vpermt2ps_avx512vl(pauVar1[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar52 = vinsertf32x4_avx512vl(auVar63,auVar61._0_16_,1);
        auVar54 = vshuff64x2_avx512vl(auVar63,auVar61,3);
        auVar61 = *(undefined1 (*) [32])(param_3 + lVar35 * 0xc);
        auVar62 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar35 * 0xc);
        auVar63 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar35 * 0xc);
        auVar64 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61,auVar62);
        auVar45 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar63,auVar62);
        auVar48 = vinsertf32x4_avx512vl(auVar64,auVar45._0_16_,1);
        auVar50 = vshuff64x2_avx512vl(auVar64,auVar45,3);
        auVar61 = vblendps_avx(auVar62,auVar61,0x24);
        auVar51 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar63);
      }
      else {
        auVar42 = vxorps_avx512vl(auVar43._0_16_,auVar43._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar1 * 2));
        auVar52._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar52._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar52._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar52._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(auVar46._0_16_,auVar46._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)*pauVar1);
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(local_98 + (longlong)*pauVar1));
        auVar53._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
        auVar53._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar53._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
        auVar53._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        puVar2 = (undefined4 *)(param_3 + lVar35 * 0xc);
        auVar42 = vxorps_avx512vl(auVar74,auVar74);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)pauVar1));
        auVar48._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar48._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar48._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar48._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar48._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar48._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar48._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar48._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar61 = vgatherdps_avx512vl(*puVar2);
        auVar50._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar50._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar50._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar50._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar50._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar50._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar50._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar50._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)local_98));
        auVar51._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
        auVar51._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar51._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
        auVar51._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
      }
      auVar61 = vbroadcastss_avx512vl(in_ZMM3._0_16_);
      auVar62 = vfnmadd213ps_avx512vl(auVar48,auVar61,auVar52);
      auVar63 = vfnmadd213ps_avx512vl(auVar50,auVar61,auVar54);
      auVar61 = vfnmadd213ps_avx512vl(auVar61,auVar51,auVar53);
      auVar32._4_4_ = (uint)bVar4 * auVar44._4_4_ | (uint)!bVar4 * iStack_11c;
      auVar32._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar32._8_4_ = (uint)bVar8 * auVar44._8_4_ | (uint)!bVar8 * iStack_118;
      auVar32._12_4_ = (uint)bVar11 * auVar44._12_4_ | (uint)!bVar11 * iStack_114;
      auVar32._16_4_ = (uint)bVar14 * auVar44._16_4_ | (uint)!bVar14 * iStack_110;
      auVar32._20_4_ = (uint)bVar17 * auVar44._20_4_ | (uint)!bVar17 * iStack_10c;
      auVar32._24_4_ = (uint)bVar20 * auVar44._24_4_ | (uint)!bVar20 * iStack_108;
      auVar32._28_4_ = (uint)bVar23 * auVar44._28_4_ | (uint)!bVar23 * iStack_104;
      auVar33._4_4_ = (uint)bVar5 * auVar46._4_4_ | (uint)!bVar5 * iStack_fc;
      auVar33._0_4_ = (uint)(bVar39 & 1) * auVar46._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar33._8_4_ = (uint)bVar9 * auVar46._8_4_ | (uint)!bVar9 * iStack_f8;
      auVar33._12_4_ = (uint)bVar12 * auVar46._12_4_ | (uint)!bVar12 * iStack_f4;
      auVar33._16_4_ = (uint)bVar15 * auVar46._16_4_ | (uint)!bVar15 * iStack_f0;
      auVar33._20_4_ = (uint)bVar18 * auVar46._20_4_ | (uint)!bVar18 * iStack_ec;
      auVar33._24_4_ = (uint)bVar21 * auVar46._24_4_ | (uint)!bVar21 * iStack_e8;
      auVar33._28_4_ = (uint)bVar24 * auVar46._28_4_ | (uint)!bVar24 * iStack_e4;
      auVar34._4_4_ = (uint)bVar6 * auVar43._4_4_ | (uint)!bVar6 * iStack_dc;
      auVar34._0_4_ = (uint)(bVar39 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar39 & 1) * local_e0;
      auVar34._8_4_ = (uint)bVar10 * auVar43._8_4_ | (uint)!bVar10 * iStack_d8;
      auVar34._12_4_ = (uint)bVar13 * auVar43._12_4_ | (uint)!bVar13 * iStack_d4;
      auVar34._16_4_ = (uint)bVar16 * auVar43._16_4_ | (uint)!bVar16 * iStack_d0;
      auVar34._20_4_ = (uint)bVar19 * auVar43._20_4_ | (uint)!bVar19 * iStack_cc;
      auVar34._24_4_ = (uint)bVar22 * auVar43._24_4_ | (uint)!bVar22 * iStack_c8;
      auVar34._28_4_ = (uint)bVar25 * auVar43._28_4_ | (uint)!bVar25 * iStack_c4;
      auVar43 = vsubps_avx512vl(auVar32,auVar62);
      auVar64 = vsubps_avx512vl(auVar33,auVar63);
      auVar44 = vsubps_avx512vl(auVar34,auVar61);
      auVar45 = vmulps_avx512vl(auVar64,auVar64);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar43,auVar43);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar44,auVar44);
      auVar46 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
      auVar47 = vsqrtps_avx512vl(auVar45);
      auVar46 = vdivps_avx512vl(auVar46,auVar47);
      fVar68 = fVar68 - param_5;
      auVar69._4_4_ = fVar68;
      auVar69._0_4_ = fVar68;
      auVar69._8_4_ = fVar68;
      auVar69._12_4_ = fVar68;
      auVar69._16_4_ = fVar68;
      auVar69._20_4_ = fVar68;
      auVar69._24_4_ = fVar68;
      auVar69._28_4_ = fVar68;
      auVar47 = vfnmadd213ps_avx512vl(auVar48,auVar69,auVar52);
      param_5 = param_5 * param_5;
      auVar67._4_4_ = param_5;
      auVar67._0_4_ = param_5;
      auVar67._8_4_ = param_5;
      auVar67._12_4_ = param_5;
      auVar67._16_4_ = param_5;
      auVar67._20_4_ = param_5;
      auVar67._24_4_ = param_5;
      auVar67._28_4_ = param_5;
      uVar37 = vcmpps_avx512vl(auVar45,auVar67,1);
      auVar43 = vfmadd231ps_avx512vl(auVar62,auVar46,auVar43);
      bVar39 = (byte)uVar37;
      auVar56._4_4_ = __real_322bcc77;
      auVar56._0_4_ = __real_322bcc77;
      auVar56._8_4_ = __real_322bcc77;
      auVar56._12_4_ = __real_322bcc77;
      auVar56._16_4_ = __real_322bcc77;
      auVar56._20_4_ = __real_322bcc77;
      auVar56._24_4_ = __real_322bcc77;
      auVar56._28_4_ = __real_322bcc77;
      uVar29 = vcmpps_avx512vl(auVar45,auVar56,1);
      bVar3 = (byte)uVar29;
      auVar65._0_4_ =
           (uint)(bVar3 & 1) * auVar47._0_4_ |
           (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar43._0_4_;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar4 * auVar47._4_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar43._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar4 * auVar47._8_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar43._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar4 * auVar47._12_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar43._12_4_;
      bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar4 * auVar47._16_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar43._16_4_;
      bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar4 * auVar47._20_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar43._20_4_;
      bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar4 * auVar47._24_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar43._24_4_;
      bVar4 = SUB81(uVar29 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar4 * auVar47._28_4_ | (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar43._28_4_;
      uVar30 = vcmpps_avx512vl(auVar60,ZEXT432(0) << 0x20,4);
      uVar40 = vcmpps_avx512vl(auVar65,ZEXT432(0) << 0x20,4);
      uVar41 = vpcmpgtd_avx512vl(auVar59,auVar58);
      uVar41 = uVar30 & uVar40 & uVar41;
      if ((char)uVar41 != '\0') {
        auVar58 = vfnmadd213ps_avx512vl(auVar50,auVar69,auVar54);
        auVar59 = vfmadd213ps_avx512vl(auVar64,auVar46,auVar63);
        auVar43 = vfmadd213ps_avx512vl(auVar44,auVar46,auVar61);
        auVar66._0_4_ =
             (uint)(bVar3 & 1) * auVar58._0_4_ |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar59._0_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar66._4_4_ =
             (uint)bVar4 * auVar58._4_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar59._4_4_;
        bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar66._8_4_ =
             (uint)bVar4 * auVar58._8_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar59._8_4_;
        bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar66._12_4_ =
             (uint)bVar4 * auVar58._12_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar59._12_4_;
        bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
        auVar66._16_4_ =
             (uint)bVar4 * auVar58._16_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar59._16_4_;
        bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
        auVar66._20_4_ =
             (uint)bVar4 * auVar58._20_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar59._20_4_;
        bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
        auVar66._24_4_ =
             (uint)bVar4 * auVar58._24_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar59._24_4_;
        bVar4 = SUB81(uVar29 >> 7,0);
        auVar66._28_4_ =
             (uint)bVar4 * auVar58._28_4_ |
             (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar59._28_4_;
        auVar58._0_4_ =
             (uint)(bVar3 & 1) * (int)(-(fVar68 * auVar51._0_4_) + auVar53._0_4_) |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar43._0_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar58._4_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._4_4_) + auVar53._4_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar43._4_4_;
        bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar58._8_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._8_4_) + auVar53._8_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar43._8_4_;
        bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar58._12_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._12_4_) + auVar53._12_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar43._12_4_;
        bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
        auVar58._16_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._16_4_) + auVar53._16_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar43._16_4_;
        bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
        auVar58._20_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._20_4_) + auVar53._20_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar43._20_4_;
        bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
        auVar58._24_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._24_4_) + auVar53._24_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar43._24_4_;
        bVar4 = SUB81(uVar29 >> 7,0);
        auVar58._28_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._28_4_) + auVar53._28_4_) |
             (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar43._28_4_;
        if ((char)uVar41 == -1) {
          auVar59 = vunpcklps_avx512vl(auVar65,auVar66);
          auVar61 = vunpcklps_avx512vl(auVar58,auVar60);
          auVar43 = vunpcklpd_avx(auVar59,auVar61);
          auVar59 = vunpckhpd_avx(auVar59,auVar61);
          auVar61 = vunpckhps_avx512vl(auVar65,auVar66);
          auVar58 = vunpckhps_avx512vl(auVar58,auVar60);
          auVar60 = vunpcklpd_avx(auVar61,auVar58);
          auVar58 = vunpckhpd_avx(auVar61,auVar58);
          auVar70._16_16_ = auVar59._0_16_;
          auVar70._0_16_ = auVar43._0_16_;
          *pauVar38 = auVar70;
          auVar71._16_16_ = auVar58._0_16_;
          auVar71._0_16_ = auVar60._0_16_;
          pauVar38[1] = auVar71;
          auVar59 = vperm2f128_avx(auVar43,auVar59,0x31);
          pauVar38[2] = auVar59;
          auVar58 = vperm2f128_avx(auVar60,auVar58,0x31);
          pauVar38[3] = auVar58;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar65);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar58);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar60);
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_avx512skx @ 140314630

void ApplyLegacySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_avx512skx
               (void)

{
  ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx512skx
            ();
  return;
}

// ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx512skx @ 1403146a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6,float param_7,uint param_8,uint param_9,int param_10,uint param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [32];
  undefined1 (*pauVar42) [32];
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  byte bVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  undefined1 auVar50 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar51 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 in_ZMM17 [64];
  undefined1 auVar82 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar83 [16];
  undefined1 in_ZMM19 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar73 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar72 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar71 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar83 = in_ZMM19._0_16_;
  auVar82 = in_ZMM18._0_16_;
  auVar51 = in_ZMM17._0_16_;
  uVar43 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar43 = param_11;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    auVar52 = vbroadcastss_avx512vl(ZEXT416(param_6));
    auVar53 = vbroadcastss_avx512vl(ZEXT416(param_8));
    auVar54 = vbroadcastss_avx512vl(ZEXT416(param_9));
    auVar51 = auVar54._0_16_;
    lVar45 = (longlong)param_10 * 3 + 0x10;
    pauVar42 = (undefined1 (*) [32])((longlong)param_10 * 0x10 + param_1);
    uVar46 = 0;
    auVar82 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar83 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar55 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar50 = vxorps_avx512vl(ZEXT416(param_9),ZEXT416(param_9));
    uVar44 = 0;
    do {
      auVar56 = vshuff64x2_avx512vl(*pauVar42,pauVar42[2],0);
      auVar57 = vshuff64x2_avx512vl(*pauVar42,pauVar42[2],3);
      auVar58 = vshuff64x2_avx512vl(pauVar42[1],pauVar42[3],0);
      auVar59 = vshuff64x2_avx512vl(pauVar42[1],pauVar42[3],3);
      auVar60 = vunpckhps_avx512vl(auVar56,auVar57);
      auVar61 = vunpckhps_avx512vl(auVar58,auVar59);
      auVar62 = vunpckhpd_avx512vl(auVar60,auVar61);
      uVar37 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar50),4);
      if ((char)uVar37 != '\0') {
        auVar60 = vunpcklpd_avx(auVar60,auVar61);
        auVar56 = vunpcklps_avx512vl(auVar56,auVar57);
        auVar57 = vunpcklps_avx512vl(auVar58,auVar59);
        auVar61 = vunpckhpd_avx512vl(auVar56,auVar57);
        auVar63 = vunpcklpd_avx512vl(auVar56,auVar57);
        auVar56 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar45 * 4);
        auVar57 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar45 * 4);
        auVar58 = *(undefined1 (*) [32])(param_2 + lVar45 * 4);
        auVar59 = vblendps_avx(auVar57,auVar56,0x24);
        auVar56 = vpermt2ps_avx512vl(auVar56,auVar71,auVar57);
        auVar64 = vpermt2ps_avx512vl(auVar59,auVar73,auVar58);
        auVar57 = vpermt2ps_avx512vl(auVar58,auVar72,auVar57);
        auVar65 = vinsertf32x4_avx512vl(auVar56,auVar57._0_16_,1);
        auVar66 = vshuff64x2_avx512vl(auVar56,auVar57,3);
        auVar56 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar45 * 4);
        auVar57 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar45 * 4);
        auVar58 = *(undefined1 (*) [32])(param_3 + lVar45 * 4);
        auVar59 = vblendps_avx(auVar57,auVar56,0x24);
        auVar56 = vpermt2ps_avx512vl(auVar56,auVar71,auVar57);
        auVar59 = vpermt2ps_avx512vl(auVar59,auVar73,auVar58);
        auVar57 = vpermt2ps_avx512vl(auVar58,auVar72,auVar57);
        auVar58 = vinsertf32x4_avx512vl(auVar56,auVar57._0_16_,1);
        auVar57 = vshuff64x2_avx512vl(auVar56,auVar57,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar46);
        auVar79._0_4_ = param_7 * *pfVar1 + auVar52._0_4_;
        auVar79._4_4_ = param_7 * pfVar1[1] + auVar52._4_4_;
        auVar79._8_4_ = param_7 * pfVar1[2] + auVar52._8_4_;
        auVar79._12_4_ = param_7 * pfVar1[3] + auVar52._12_4_;
        auVar79._16_4_ = param_7 * pfVar1[4] + auVar52._16_4_;
        auVar79._20_4_ = param_7 * pfVar1[5] + auVar52._20_4_;
        auVar79._24_4_ = param_7 * pfVar1[6] + auVar52._24_4_;
        auVar79._28_4_ = param_7 * pfVar1[7] + auVar52._28_4_;
        auVar67 = vfmadd213ps_avx512vl
                            (*(undefined1 (*) [32])(param_5 + (ulonglong)uVar46),auVar54,auVar53);
        fVar29 = auVar67._0_4_;
        auVar70._0_4_ = auVar79._0_4_ + fVar29;
        fVar30 = auVar67._4_4_;
        auVar70._4_4_ = auVar79._4_4_ + fVar30;
        fVar31 = auVar67._8_4_;
        auVar70._8_4_ = auVar79._8_4_ + fVar31;
        fVar32 = auVar67._12_4_;
        auVar70._12_4_ = auVar79._12_4_ + fVar32;
        fVar33 = auVar67._16_4_;
        auVar70._16_4_ = auVar79._16_4_ + fVar33;
        fVar34 = auVar67._20_4_;
        auVar70._20_4_ = auVar79._20_4_ + fVar34;
        fVar35 = auVar67._24_4_;
        auVar70._24_4_ = auVar79._24_4_ + fVar35;
        fVar36 = auVar67._28_4_;
        auVar70._28_4_ = auVar79._28_4_ + fVar36;
        auVar68 = vfnmadd213ps_avx512vl(auVar70,auVar58,auVar65);
        auVar69 = vfnmadd213ps_avx512vl(auVar70,auVar57,auVar66);
        auVar80._0_4_ = -(auVar59._0_4_ * auVar70._0_4_) + auVar64._0_4_;
        auVar80._4_4_ = -(auVar59._4_4_ * auVar70._4_4_) + auVar64._4_4_;
        auVar80._8_4_ = -(auVar59._8_4_ * auVar70._8_4_) + auVar64._8_4_;
        auVar80._12_4_ = -(auVar59._12_4_ * auVar70._12_4_) + auVar64._12_4_;
        auVar80._16_4_ = -(auVar59._16_4_ * auVar70._16_4_) + auVar64._16_4_;
        auVar80._20_4_ = -(auVar59._20_4_ * auVar70._20_4_) + auVar64._20_4_;
        auVar80._24_4_ = -(auVar59._24_4_ * auVar70._24_4_) + auVar64._24_4_;
        auVar80._28_4_ = -(auVar59._28_4_ * auVar70._28_4_) + auVar64._28_4_;
        auVar63 = vsubps_avx512vl(auVar63,auVar68);
        auVar61 = vsubps_avx512vl(auVar61,auVar69);
        auVar60 = vsubps_avx512vl(auVar60,auVar80);
        auVar56._0_4_ = auVar63._0_4_ * auVar63._0_4_ + auVar61._0_4_ * auVar61._0_4_;
        auVar56._4_4_ = auVar63._4_4_ * auVar63._4_4_ + auVar61._4_4_ * auVar61._4_4_;
        auVar56._8_4_ = auVar63._8_4_ * auVar63._8_4_ + auVar61._8_4_ * auVar61._8_4_;
        auVar56._12_4_ = auVar63._12_4_ * auVar63._12_4_ + auVar61._12_4_ * auVar61._12_4_;
        auVar56._16_4_ = auVar63._16_4_ * auVar63._16_4_ + auVar61._16_4_ * auVar61._16_4_;
        auVar56._20_4_ = auVar63._20_4_ * auVar63._20_4_ + auVar61._20_4_ * auVar61._20_4_;
        auVar56._24_4_ = auVar63._24_4_ * auVar63._24_4_ + auVar61._24_4_ * auVar61._24_4_;
        auVar56._28_4_ = auVar63._28_4_ * auVar63._28_4_ + auVar61._28_4_ * auVar61._28_4_;
        auVar70 = vfmadd231ps_avx512vl(auVar56,auVar60,auVar60);
        auVar56 = vsqrtps_avx(auVar70);
        auVar56 = vdivps_avx(auVar67,auVar56);
        auVar81._0_4_ = fVar29 * fVar29;
        auVar81._4_4_ = fVar30 * fVar30;
        auVar81._8_4_ = fVar31 * fVar31;
        auVar81._12_4_ = fVar32 * fVar32;
        auVar81._16_4_ = fVar33 * fVar33;
        auVar81._20_4_ = fVar34 * fVar34;
        auVar81._24_4_ = fVar35 * fVar35;
        auVar81._28_4_ = fVar36 * fVar36;
        uVar38 = vcmpps_avx512vl(auVar70,auVar81,1);
        auVar63 = vfmadd231ps_avx512vl(auVar68,auVar56,auVar63);
        bVar47 = (byte)uVar38;
        uVar49 = vcmpps_avx512vl(auVar70,auVar55,1);
        bVar5 = (byte)uVar49;
        auVar67._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar79._0_4_ * auVar58._0_4_) + auVar65._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar47 & 1) * auVar63._0_4_;
        bVar7 = (bool)((byte)(uVar49 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * (int)(-(auVar79._4_4_ * auVar58._4_4_) + auVar65._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 1) & 1) * auVar63._4_4_;
        bVar7 = (bool)((byte)(uVar49 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * (int)(-(auVar79._8_4_ * auVar58._8_4_) + auVar65._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 2) & 1) * auVar63._8_4_;
        bVar7 = (bool)((byte)(uVar49 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * (int)(-(auVar79._12_4_ * auVar58._12_4_) + auVar65._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 3) & 1) * auVar63._12_4_;
        bVar7 = (bool)((byte)(uVar49 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * (int)(-(auVar79._16_4_ * auVar58._16_4_) + auVar65._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 4) & 1) * auVar63._16_4_;
        bVar7 = (bool)((byte)(uVar49 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * (int)(-(auVar79._20_4_ * auVar58._20_4_) + auVar65._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar63._20_4_;
        bVar7 = (bool)((byte)(uVar49 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * (int)(-(auVar79._24_4_ * auVar58._24_4_) + auVar65._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 6) & 1) * auVar63._24_4_;
        bVar7 = SUB81(uVar49 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * (int)(-(auVar79._28_4_ * auVar58._28_4_) + auVar65._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar38 >> 7) * auVar63._28_4_;
        uVar48 = vcmpps_avx512vl(auVar67,ZEXT1632(auVar50),4);
        uVar39 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar50),4);
        uVar48 = uVar48 & uVar39;
        if ((char)uVar48 != '\0') {
          auVar57 = vfnmadd213ps_avx512vl(auVar57,auVar79,auVar66);
          auVar63._0_4_ = -(auVar79._0_4_ * auVar59._0_4_) + auVar64._0_4_;
          auVar63._4_4_ = -(auVar79._4_4_ * auVar59._4_4_) + auVar64._4_4_;
          auVar63._8_4_ = -(auVar79._8_4_ * auVar59._8_4_) + auVar64._8_4_;
          auVar63._12_4_ = -(auVar79._12_4_ * auVar59._12_4_) + auVar64._12_4_;
          auVar63._16_4_ = -(auVar79._16_4_ * auVar59._16_4_) + auVar64._16_4_;
          auVar63._20_4_ = -(auVar79._20_4_ * auVar59._20_4_) + auVar64._20_4_;
          auVar63._24_4_ = -(auVar79._24_4_ * auVar59._24_4_) + auVar64._24_4_;
          auVar63._28_4_ = -(auVar79._28_4_ * auVar59._28_4_) + auVar64._28_4_;
          auVar58 = vfmadd213ps_avx512vl(auVar61,auVar56,auVar69);
          auVar56 = vfmadd213ps_avx512vl(auVar60,auVar56,auVar80);
          auVar59._0_4_ =
               (uint)(bVar5 & 1) * auVar57._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar47 & 1) * auVar58._0_4_;
          bVar7 = (bool)((byte)(uVar49 >> 1) & 1);
          auVar59._4_4_ =
               (uint)bVar7 * auVar57._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 1) & 1) * auVar58._4_4_;
          bVar7 = (bool)((byte)(uVar49 >> 2) & 1);
          auVar59._8_4_ =
               (uint)bVar7 * auVar57._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 2) & 1) * auVar58._8_4_;
          bVar7 = (bool)((byte)(uVar49 >> 3) & 1);
          auVar59._12_4_ =
               (uint)bVar7 * auVar57._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 3) & 1) * auVar58._12_4_;
          bVar7 = (bool)((byte)(uVar49 >> 4) & 1);
          auVar59._16_4_ =
               (uint)bVar7 * auVar57._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 4) & 1) * auVar58._16_4_;
          bVar7 = (bool)((byte)(uVar49 >> 5) & 1);
          auVar59._20_4_ =
               (uint)bVar7 * auVar57._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar58._20_4_;
          bVar7 = (bool)((byte)(uVar49 >> 6) & 1);
          auVar59._24_4_ =
               (uint)bVar7 * auVar57._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 6) & 1) * auVar58._24_4_;
          bVar7 = SUB81(uVar49 >> 7,0);
          auVar59._28_4_ =
               (uint)bVar7 * auVar57._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar38 >> 7) * auVar58._28_4_;
          auVar57._0_4_ =
               (uint)(bVar5 & 1) * (int)auVar63._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar47 & 1) * auVar56._0_4_;
          bVar7 = (bool)((byte)(uVar49 >> 1) & 1);
          auVar57._4_4_ =
               (uint)bVar7 * (int)auVar63._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 1) & 1) * auVar56._4_4_;
          bVar7 = (bool)((byte)(uVar49 >> 2) & 1);
          auVar57._8_4_ =
               (uint)bVar7 * (int)auVar63._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 2) & 1) * auVar56._8_4_;
          bVar7 = (bool)((byte)(uVar49 >> 3) & 1);
          auVar57._12_4_ =
               (uint)bVar7 * (int)auVar63._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 3) & 1) * auVar56._12_4_;
          bVar7 = (bool)((byte)(uVar49 >> 4) & 1);
          auVar57._16_4_ =
               (uint)bVar7 * (int)auVar63._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 4) & 1) * auVar56._16_4_;
          bVar7 = (bool)((byte)(uVar49 >> 5) & 1);
          auVar57._20_4_ =
               (uint)bVar7 * (int)auVar63._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar56._20_4_;
          bVar7 = (bool)((byte)(uVar49 >> 6) & 1);
          auVar57._24_4_ =
               (uint)bVar7 * (int)auVar63._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 6) & 1) * auVar56._24_4_;
          bVar7 = SUB81(uVar49 >> 7,0);
          auVar57._28_4_ =
               (uint)bVar7 * (int)auVar63._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar38 >> 7) * auVar56._28_4_;
          if ((char)uVar48 == -1) {
            auVar56 = vunpcklps_avx512vl(auVar67,auVar59);
            auVar58 = vunpcklps_avx512vl(auVar57,auVar62);
            auVar60 = vunpcklpd_avx512vl(auVar56,auVar58);
            auVar56 = vunpckhpd_avx(auVar56,auVar58);
            auVar58 = vunpckhps_avx512vl(auVar67,auVar59);
            auVar57 = vunpckhps_avx512vl(auVar57,auVar62);
            auVar59 = vunpcklpd_avx512vl(auVar58,auVar57);
            auVar57 = vunpckhpd_avx512vl(auVar58,auVar57);
            auVar58 = vinsertf32x4_avx512vl(auVar60,auVar56._0_16_,1);
            *pauVar42 = auVar58;
            auVar58 = vinsertf32x4_avx512vl(auVar59,auVar57._0_16_,1);
            pauVar42[1] = auVar58;
            auVar56 = vshuff64x2_avx512vl(auVar60,auVar56,3);
            pauVar42[2] = auVar56;
            auVar56 = vshuff64x2_avx512vl(auVar59,auVar57,3);
            pauVar42[3] = auVar56;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar64,uVar48,auVar67);
            vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar63,uVar48,auVar59);
            vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar79,uVar48,auVar57);
            vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar80,uVar48,auVar62);
          }
        }
      }
      uVar44 = uVar44 + 8;
      uVar46 = uVar46 + 0x20;
      pauVar42 = pauVar42 + 4;
      lVar45 = lVar45 + 0x18;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar44) {
      return;
    }
  }
  auVar71 = vpbroadcastd_avx512vl();
  auVar71 = vpor_avx2(auVar71,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar72 = vpbroadcastd_avx512vl();
  uVar38 = vpcmpgtd_avx512vl(auVar72,auVar71);
  lVar45 = (longlong)(param_10 + (int)uVar44);
  pauVar42 = (undefined1 (*) [32])(param_1 + lVar45 * 0x10);
  bVar47 = (byte)uVar38;
  if (bVar47 == 0xff) {
    auVar52 = vshuff64x2_avx512vl(*pauVar42,pauVar42[2],0);
    auVar73 = vperm2f128_avx(*pauVar42,pauVar42[2],0x31);
    auVar53 = vshuff64x2_avx512vl(pauVar42[1],pauVar42[3],0);
    auVar54 = vshuff64x2_avx512vl(pauVar42[1],pauVar42[3],3);
    auVar55 = vunpcklps_avx512vl(auVar52,auVar73);
    auVar52 = vunpckhps_avx512vl(auVar52,auVar73);
    auVar56 = vunpcklps_avx512vl(auVar53,auVar54);
    auVar73 = vunpckhps_avx(auVar53,auVar54);
    auVar53 = vunpcklpd_avx512vl(auVar55,auVar56);
    auVar54 = vunpckhpd_avx512vl(auVar55,auVar56);
    auVar55 = vunpcklpd_avx512vl(auVar52,auVar73);
    auVar73 = vunpckhpd_avx(auVar52,auVar73);
  }
  else {
    auVar51 = vxorps_avx512vl(auVar51,auVar51);
    auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + param_5));
    auVar53._0_4_ = (uint)(bVar47 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_;
    bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
    auVar53._4_4_ = (uint)bVar7 * auVar73._4_4_ | (uint)!bVar7 * auVar51._4_4_;
    bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
    auVar53._8_4_ = (uint)bVar7 * auVar73._8_4_ | (uint)!bVar7 * auVar51._8_4_;
    bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
    auVar53._12_4_ = (uint)bVar7 * auVar73._12_4_ | (uint)!bVar7 * auVar51._12_4_;
    auVar53._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar73._16_4_;
    auVar53._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar73._20_4_;
    auVar53._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar73._24_4_;
    auVar53._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar73._28_4_;
    auVar51 = vxorps_avx512vl(auVar82,auVar82);
    auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + param_5));
    auVar54._0_4_ = (uint)(bVar47 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_;
    bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
    auVar54._4_4_ = (uint)bVar7 * auVar73._4_4_ | (uint)!bVar7 * auVar51._4_4_;
    bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
    auVar54._8_4_ = (uint)bVar7 * auVar73._8_4_ | (uint)!bVar7 * auVar51._8_4_;
    bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
    auVar54._12_4_ = (uint)bVar7 * auVar73._12_4_ | (uint)!bVar7 * auVar51._12_4_;
    auVar54._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar73._16_4_;
    auVar54._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar73._20_4_;
    auVar54._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar73._24_4_;
    auVar54._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar73._28_4_;
    auVar51 = vxorps_avx512vl(auVar83,auVar83);
    auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + param_5));
    auVar55._0_4_ = (uint)(bVar47 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_;
    bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
    auVar55._4_4_ = (uint)bVar7 * auVar73._4_4_ | (uint)!bVar7 * auVar51._4_4_;
    bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
    auVar55._8_4_ = (uint)bVar7 * auVar73._8_4_ | (uint)!bVar7 * auVar51._8_4_;
    bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
    auVar55._12_4_ = (uint)bVar7 * auVar73._12_4_ | (uint)!bVar7 * auVar51._12_4_;
    auVar55._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar73._16_4_;
    auVar55._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar73._20_4_;
    auVar55._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar73._24_4_;
    auVar55._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar73._28_4_;
    auVar52 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + param_5));
    auVar73._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar52._4_4_;
    auVar73._0_4_ = (uint)(bVar47 & 1) * auVar52._0_4_;
    auVar73._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar52._8_4_;
    auVar73._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar52._12_4_;
    auVar73._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar52._16_4_;
    auVar73._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar52._20_4_;
    auVar73._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar52._24_4_;
    auVar73._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar52._28_4_;
  }
  uVar40 = vpcmpd_avx512vl(auVar71,auVar72,5);
  bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
  bVar11 = (bool)((byte)(uVar38 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar38 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar38 >> 4) & 1);
  bVar20 = (bool)((byte)(uVar38 >> 5) & 1);
  bVar23 = (bool)((byte)(uVar38 >> 6) & 1);
  bVar26 = SUB81(uVar38 >> 7,0);
  bVar8 = (bool)((byte)(uVar38 >> 1) & 1);
  bVar12 = (bool)((byte)(uVar38 >> 2) & 1);
  bVar15 = (bool)((byte)(uVar38 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar38 >> 4) & 1);
  bVar21 = (bool)((byte)(uVar38 >> 5) & 1);
  bVar24 = (bool)((byte)(uVar38 >> 6) & 1);
  bVar27 = SUB81(uVar38 >> 7,0);
  bVar9 = (bool)((byte)(uVar38 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar38 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar38 >> 3) & 1);
  bVar19 = (bool)((byte)(uVar38 >> 4) & 1);
  bVar22 = (bool)((byte)(uVar38 >> 5) & 1);
  bVar25 = (bool)((byte)(uVar38 >> 6) & 1);
  bVar28 = SUB81(uVar38 >> 7,0);
  uVar37 = vcmpps_avx512vl(auVar73,ZEXT1232(ZEXT812(0)),0);
  if ((byte)((byte)uVar37 | (byte)uVar40) != 0xff) {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar45 * 0xc);
    if (bVar47 == 0xff) {
      auVar71 = pauVar2[1];
      auVar72 = vblendps_avx(auVar71,*pauVar2,0x24);
      auVar52 = vpermt2ps_avx512vl(*pauVar2,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar71);
      auVar64 = vpermt2ps_avx512vl(auVar72,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,pauVar2[2]);
      auVar71 = vpermt2ps_avx512vl(pauVar2[2],
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar71);
      auVar60 = vinsertf32x4_avx512vl(auVar52,auVar71._0_16_,1);
      auVar61 = vshuff64x2_avx512vl(auVar52,auVar71,3);
      auVar71 = *(undefined1 (*) [32])(param_3 + lVar45 * 0xc);
      auVar72 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar45 * 0xc);
      auVar52 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar45 * 0xc);
      auVar56 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar71,auVar72);
      auVar57 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar52,auVar72);
      auVar62 = vinsertf32x4_avx512vl(auVar56,auVar57._0_16_,1);
      auVar58 = vshuff64x2_avx512vl(auVar56,auVar57,3);
      auVar71 = vblendps_avx(auVar72,auVar71,0x24);
      auVar71 = vpermt2ps_avx512vl(auVar71,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar52);
    }
    else {
      auVar51 = vxorps_avx512vl(auVar53._0_16_,auVar53._0_16_);
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_5));
      auVar60._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_
      ;
      bVar10 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar60._4_4_ = (uint)bVar10 * auVar71._4_4_ | (uint)!bVar10 * auVar51._4_4_;
      bVar10 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar60._8_4_ = (uint)bVar10 * auVar71._8_4_ | (uint)!bVar10 * auVar51._8_4_;
      bVar10 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar60._12_4_ = (uint)bVar10 * auVar71._12_4_ | (uint)!bVar10 * auVar51._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + (longlong)*pauVar2));
      auVar61._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar71._4_4_;
      auVar61._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_;
      auVar61._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar71._8_4_;
      auVar61._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar71._12_4_;
      auVar61._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar61._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar61._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar61._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
      auVar64._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar71._4_4_;
      auVar64._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_;
      auVar64._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar71._8_4_;
      auVar64._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar71._12_4_;
      auVar64._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar64._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar64._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar64._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      puVar3 = (undefined4 *)(param_3 + lVar45 * 0xc);
      auVar51 = vxorps_avx512vl(auVar55._0_16_,auVar55._0_16_);
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + param_5));
      auVar62._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_
      ;
      bVar10 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar62._4_4_ = (uint)bVar10 * auVar71._4_4_ | (uint)!bVar10 * auVar51._4_4_;
      bVar10 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar62._8_4_ = (uint)bVar10 * auVar71._8_4_ | (uint)!bVar10 * auVar51._8_4_;
      bVar10 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar62._12_4_ = (uint)bVar10 * auVar71._12_4_ | (uint)!bVar10 * auVar51._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      auVar51 = vxorps_avx512vl(auVar54._0_16_,auVar54._0_16_);
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar42));
      auVar58._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_
      ;
      bVar10 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar58._4_4_ = (uint)bVar10 * auVar71._4_4_ | (uint)!bVar10 * auVar51._4_4_;
      bVar10 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar58._8_4_ = (uint)bVar10 * auVar71._8_4_ | (uint)!bVar10 * auVar51._8_4_;
      bVar10 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar58._12_4_ = (uint)bVar10 * auVar71._12_4_ | (uint)!bVar10 * auVar51._12_4_;
      auVar58._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar58._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar58._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar58._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      auVar72 = vgatherdps_avx512vl(*puVar3);
      auVar71._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar72._4_4_;
      auVar71._0_4_ = (uint)(bVar47 & 1) * auVar72._0_4_;
      auVar71._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar72._8_4_;
      auVar71._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar72._12_4_;
      auVar71._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar72._16_4_;
      auVar71._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar72._20_4_;
      auVar71._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar72._24_4_;
      auVar71._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar72._28_4_;
    }
    auVar72 = vbroadcastss_avx512vl(ZEXT416(param_6));
    lVar45 = (longlong)((int)uVar44 << 2);
    piVar4 = (int *)(param_4 + lVar45);
    auVar78._0_4_ = param_7 * (float)((uint)(bVar47 & 1) * *piVar4) + auVar72._0_4_;
    auVar78._4_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 1) & 1) * piVar4[1]) + auVar72._4_4_;
    auVar78._8_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 2) & 1) * piVar4[2]) + auVar72._8_4_;
    auVar78._12_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 3) & 1) * piVar4[3]) + auVar72._12_4_
    ;
    auVar78._16_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 4) & 1) * piVar4[4]) + auVar72._16_4_
    ;
    auVar78._20_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 5) & 1) * piVar4[5]) + auVar72._20_4_
    ;
    auVar78._24_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 6) & 1) * piVar4[6]) + auVar72._24_4_
    ;
    auVar78._28_4_ = param_7 * (float)((uint)(byte)(uVar38 >> 7) * piVar4[7]) + auVar72._28_4_;
    auVar51 = vxorps_avx512vl(ZEXT416(param_6),ZEXT416(param_6));
    auVar76._4_4_ = param_8;
    auVar76._0_4_ = param_8;
    auVar76._8_4_ = param_8;
    auVar76._12_4_ = param_8;
    auVar76._16_4_ = param_8;
    auVar76._20_4_ = param_8;
    auVar76._24_4_ = param_8;
    auVar76._28_4_ = param_8;
    auVar72 = vbroadcastss_avx512vl(ZEXT416(param_9));
    piVar4 = (int *)(param_5 + lVar45);
    auVar68._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar4[1];
    auVar68._0_4_ = (uint)(bVar47 & 1) * *piVar4;
    auVar68._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar4[2];
    auVar68._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar4[3];
    auVar68._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar4[4];
    auVar68._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar4[5];
    auVar68._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar4[6];
    auVar68._28_4_ = (uint)(byte)(uVar38 >> 7) * piVar4[7];
    auVar72 = vfmadd213ps_avx512vl(auVar68,auVar72,auVar76);
    auVar56 = vaddps_avx512vl(auVar78,auVar72);
    auVar57 = vfnmadd213ps_avx512vl(auVar56,auVar62,auVar60);
    auVar59 = vfnmadd213ps_avx512vl(auVar56,auVar58,auVar61);
    auVar52._4_4_ = (uint)bVar7 * auVar53._4_4_ | (uint)!bVar7 * iStack_13c;
    auVar52._0_4_ = (uint)(bVar47 & 1) * auVar53._0_4_ | (uint)!(bool)(bVar47 & 1) * local_140;
    auVar52._8_4_ = (uint)bVar11 * auVar53._8_4_ | (uint)!bVar11 * iStack_138;
    auVar52._12_4_ = (uint)bVar14 * auVar53._12_4_ | (uint)!bVar14 * iStack_134;
    auVar52._16_4_ = (uint)bVar17 * auVar53._16_4_ | (uint)!bVar17 * iStack_130;
    auVar52._20_4_ = (uint)bVar20 * auVar53._20_4_ | (uint)!bVar20 * iStack_12c;
    auVar52._24_4_ = (uint)bVar23 * auVar53._24_4_ | (uint)!bVar23 * iStack_128;
    auVar52._28_4_ = (uint)bVar26 * auVar53._28_4_ | (uint)!bVar26 * iStack_124;
    auVar53 = vfnmadd213ps_avx512vl(auVar56,auVar71,auVar64);
    auVar65._4_4_ = (uint)bVar8 * auVar54._4_4_ | (uint)!bVar8 * iStack_11c;
    auVar65._0_4_ = (uint)(bVar47 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar47 & 1) * local_120;
    auVar65._8_4_ = (uint)bVar12 * auVar54._8_4_ | (uint)!bVar12 * iStack_118;
    auVar65._12_4_ = (uint)bVar15 * auVar54._12_4_ | (uint)!bVar15 * iStack_114;
    auVar65._16_4_ = (uint)bVar18 * auVar54._16_4_ | (uint)!bVar18 * iStack_110;
    auVar65._20_4_ = (uint)bVar21 * auVar54._20_4_ | (uint)!bVar21 * iStack_10c;
    auVar65._24_4_ = (uint)bVar24 * auVar54._24_4_ | (uint)!bVar24 * iStack_108;
    auVar65._28_4_ = (uint)bVar27 * auVar54._28_4_ | (uint)!bVar27 * iStack_104;
    auVar66._4_4_ = (uint)bVar9 * auVar55._4_4_ | (uint)!bVar9 * iStack_fc;
    auVar66._0_4_ = (uint)(bVar47 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar47 & 1) * local_100;
    auVar66._8_4_ = (uint)bVar13 * auVar55._8_4_ | (uint)!bVar13 * iStack_f8;
    auVar66._12_4_ = (uint)bVar16 * auVar55._12_4_ | (uint)!bVar16 * iStack_f4;
    auVar66._16_4_ = (uint)bVar19 * auVar55._16_4_ | (uint)!bVar19 * iStack_f0;
    auVar66._20_4_ = (uint)bVar22 * auVar55._20_4_ | (uint)!bVar22 * iStack_ec;
    auVar66._24_4_ = (uint)bVar25 * auVar55._24_4_ | (uint)!bVar25 * iStack_e8;
    auVar66._28_4_ = (uint)bVar28 * auVar55._28_4_ | (uint)!bVar28 * iStack_e4;
    auVar52 = vsubps_avx512vl(auVar52,auVar57);
    auVar54 = vsubps_avx512vl(auVar65,auVar59);
    auVar55 = vsubps_avx512vl(auVar66,auVar53);
    auVar56 = vmulps_avx512vl(auVar54,auVar54);
    auVar56 = vfmadd231ps_avx512vl(auVar56,auVar52,auVar52);
    auVar56 = vfmadd231ps_avx512vl(auVar56,auVar55,auVar55);
    auVar63 = vsqrtps_avx512vl(auVar56);
    auVar63 = vdivps_avx512vl(auVar72,auVar63);
    auVar60 = vfnmadd213ps_avx512vl(auVar62,auVar78,auVar60);
    auVar72 = vmulps_avx512vl(auVar72,auVar72);
    uVar44 = vcmpps_avx512vl(auVar56,auVar72,1);
    auVar72._4_4_ = __real_322bcc77;
    auVar72._0_4_ = __real_322bcc77;
    auVar72._8_4_ = __real_322bcc77;
    auVar72._12_4_ = __real_322bcc77;
    auVar72._16_4_ = __real_322bcc77;
    auVar72._20_4_ = __real_322bcc77;
    auVar72._24_4_ = __real_322bcc77;
    auVar72._28_4_ = __real_322bcc77;
    uVar38 = vcmpps_avx512vl(auVar56,auVar72,1);
    auVar72 = vfmadd231ps_avx512vl(auVar57,auVar63,auVar52);
    bVar5 = (byte)uVar44;
    bVar6 = (byte)uVar38;
    auVar69._0_4_ =
         (uint)(bVar6 & 1) * auVar60._0_4_ |
         (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar72._0_4_;
    bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
    auVar69._4_4_ =
         (uint)bVar7 * auVar60._4_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 1) & 1) * auVar72._4_4_;
    bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
    auVar69._8_4_ =
         (uint)bVar7 * auVar60._8_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 2) & 1) * auVar72._8_4_;
    bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
    auVar69._12_4_ =
         (uint)bVar7 * auVar60._12_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 3) & 1) * auVar72._12_4_;
    bVar7 = (bool)((byte)(uVar38 >> 4) & 1);
    auVar69._16_4_ =
         (uint)bVar7 * auVar60._16_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 4) & 1) * auVar72._16_4_;
    bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
    auVar69._20_4_ =
         (uint)bVar7 * auVar60._20_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 5) & 1) * auVar72._20_4_;
    bVar7 = (bool)((byte)(uVar38 >> 6) & 1);
    auVar69._24_4_ =
         (uint)bVar7 * auVar60._24_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 6) & 1) * auVar72._24_4_;
    bVar7 = SUB81(uVar38 >> 7,0);
    auVar69._28_4_ =
         (uint)bVar7 * auVar60._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar44 >> 7) * auVar72._28_4_;
    uVar37 = vcmpps_avx512vl(auVar73,ZEXT1632(auVar51),4);
    uVar40 = vcmpps_avx512vl(auVar69,ZEXT1632(auVar51),4);
    bVar47 = (byte)uVar37 & (byte)uVar40 & bVar47;
    uVar49 = (ulonglong)bVar47;
    if (bVar47 != 0) {
      auVar72 = vfnmadd213ps_avx512vl(auVar58,auVar78,auVar61);
      auVar52 = vfmadd213ps_avx512vl(auVar54,auVar63,auVar59);
      auVar53 = vfmadd213ps_avx512vl(auVar55,auVar63,auVar53);
      auVar74._0_4_ =
           (uint)(bVar6 & 1) * auVar72._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar52._0_4_;
      bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar74._4_4_ =
           (uint)bVar7 * auVar72._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 1) & 1) * auVar52._4_4_;
      bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar74._8_4_ =
           (uint)bVar7 * auVar72._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 2) & 1) * auVar52._8_4_;
      bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar74._12_4_ =
           (uint)bVar7 * auVar72._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 3) & 1) * auVar52._12_4_;
      bVar7 = (bool)((byte)(uVar38 >> 4) & 1);
      auVar74._16_4_ =
           (uint)bVar7 * auVar72._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 4) & 1) * auVar52._16_4_;
      bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
      auVar74._20_4_ =
           (uint)bVar7 * auVar72._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 5) & 1) * auVar52._20_4_;
      bVar7 = (bool)((byte)(uVar38 >> 6) & 1);
      auVar74._24_4_ =
           (uint)bVar7 * auVar72._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 6) & 1) * auVar52._24_4_;
      bVar7 = SUB81(uVar38 >> 7,0);
      auVar74._28_4_ =
           (uint)bVar7 * auVar72._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar44 >> 7) * auVar52._28_4_;
      auVar75._0_4_ =
           (uint)(bVar6 & 1) * (int)(-(auVar78._0_4_ * auVar71._0_4_) + auVar64._0_4_) |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar53._0_4_;
      bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar75._4_4_ =
           (uint)bVar7 * (int)(-(auVar78._4_4_ * auVar71._4_4_) + auVar64._4_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 1) & 1) * auVar53._4_4_;
      bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar75._8_4_ =
           (uint)bVar7 * (int)(-(auVar78._8_4_ * auVar71._8_4_) + auVar64._8_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 2) & 1) * auVar53._8_4_;
      bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar75._12_4_ =
           (uint)bVar7 * (int)(-(auVar78._12_4_ * auVar71._12_4_) + auVar64._12_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 3) & 1) * auVar53._12_4_;
      bVar7 = (bool)((byte)(uVar38 >> 4) & 1);
      auVar75._16_4_ =
           (uint)bVar7 * (int)(-(auVar78._16_4_ * auVar71._16_4_) + auVar64._16_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 4) & 1) * auVar53._16_4_;
      bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
      auVar75._20_4_ =
           (uint)bVar7 * (int)(-(auVar78._20_4_ * auVar71._20_4_) + auVar64._20_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 5) & 1) * auVar53._20_4_;
      bVar7 = (bool)((byte)(uVar38 >> 6) & 1);
      auVar75._24_4_ =
           (uint)bVar7 * (int)(-(auVar78._24_4_ * auVar71._24_4_) + auVar64._24_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 6) & 1) * auVar53._24_4_;
      bVar7 = SUB81(uVar38 >> 7,0);
      auVar75._28_4_ =
           (uint)bVar7 * (int)(-(auVar78._28_4_ * auVar71._28_4_) + auVar64._28_4_) |
           (uint)!bVar7 * (uint)(byte)(uVar44 >> 7) * auVar53._28_4_;
      if (bVar47 == 0xff) {
        auVar71 = vunpcklps_avx(auVar69,auVar74);
        auVar72 = vunpcklps_avx(auVar75,auVar73);
        auVar53 = vunpcklpd_avx512vl(auVar71,auVar72);
        auVar71 = vunpckhpd_avx(auVar71,auVar72);
        auVar72 = vunpckhps_avx(auVar69,auVar74);
        auVar73 = vunpckhps_avx(auVar75,auVar73);
        auVar52 = vunpcklpd_avx(auVar72,auVar73);
        auVar72 = vunpckhpd_avx(auVar72,auVar73);
        auVar73 = vinsertf32x4_avx512vl(auVar53,auVar71._0_16_,1);
        *pauVar42 = auVar73;
        auVar77._16_16_ = auVar72._0_16_;
        auVar77._0_16_ = auVar52._0_16_;
        pauVar42[1] = auVar77;
        auVar71 = vshuff64x2_avx512vl(auVar53,auVar71,3);
        pauVar42[2] = auVar71;
        auVar71 = vperm2f128_avx(auVar52,auVar72,0x31);
        pauVar42[3] = auVar71;
      }
      else {
        vscatterdps_avx512vl
                  (ZEXT832(pauVar42) +
                   ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar49,
                   auVar69);
        auVar41._4_28_ = _UNK_150b50e64;
        auVar41._0_4_ = ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
        vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar41,uVar49,auVar74);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar42) +
                   ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar49,
                   auVar75);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar42) +
                   ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar49,
                   auVar73);
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx512skx @ 140314ec0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithDistanceMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  undefined1 (*pauVar36) [32];
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar43 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [64];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar78 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar79 [16];
  undefined1 in_ZMM24 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar62 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar61 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar60 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar79 = in_ZMM24._0_16_;
  auVar78 = in_ZMM18._0_16_;
  auVar77 = in_ZMM17._0_16_;
  auVar42 = in_ZMM16._0_16_;
  uVar33 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar33 = param_9;
  }
  auVar68 = ZEXT416((uint)param_7);
  if ((int)(uVar33 & 0xfffffff8) < 1) {
    uVar35 = 0;
  }
  else {
    auVar64._4_4_ = param_7;
    auVar64._0_4_ = param_7;
    auVar64._8_4_ = param_7;
    auVar64._12_4_ = param_7;
    auVar64._16_4_ = param_7;
    auVar64._20_4_ = param_7;
    auVar64._24_4_ = param_7;
    auVar64._28_4_ = param_7;
    auVar42 = vmulss_avx512f(auVar68,auVar68);
    auVar44 = vbroadcastss_avx512vl(auVar42);
    auVar42 = auVar44._0_16_;
    unaff_RBX = (longlong)param_8 * 3 + 0x10;
    pauVar36 = (undefined1 (*) [32])((longlong)param_8 * 0x10 + param_1);
    uVar38 = 0;
    auVar77 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar78 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar45 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar43 = vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
    auVar79 = __ymm_0000007800000068000000580000004800000038000000280000001800000008._0_16_;
    uVar35 = 0;
    do {
      auVar46 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar47 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar48 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar49 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar50 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar51 = vunpckhps_avx512vl(auVar48,auVar49);
      auVar52 = vunpckhpd_avx512vl(auVar50,auVar51);
      uVar29 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar43),4);
      if ((char)uVar29 != '\0') {
        auVar50 = vunpcklpd_avx512vl(auVar50,auVar51);
        auVar46 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpcklps_avx512vl(auVar48,auVar49);
        auVar51 = vunpckhpd_avx512vl(auVar46,auVar47);
        auVar53 = vunpcklpd_avx512vl(auVar46,auVar47);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x40 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + -0x20 + unaff_RBX * 4);
        auVar48 = *(undefined1 (*) [32])(param_2 + unaff_RBX * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,auVar47);
        auVar54 = vpermt2ps_avx512vl(auVar49,auVar62,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar61,auVar47);
        auVar55 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar56 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x40 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + -0x20 + unaff_RBX * 4);
        auVar48 = *(undefined1 (*) [32])(param_3 + unaff_RBX * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,auVar47);
        auVar49 = vpermt2ps_avx512vl(auVar49,auVar62,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar61,auVar47);
        auVar48 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar47 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar38);
        auVar76._0_4_ = param_6 * *pfVar1 + param_5;
        auVar76._4_4_ = param_6 * pfVar1[1] + param_5;
        auVar76._8_4_ = param_6 * pfVar1[2] + param_5;
        auVar76._12_4_ = param_6 * pfVar1[3] + param_5;
        auVar76._16_4_ = param_6 * pfVar1[4] + param_5;
        auVar76._20_4_ = param_6 * pfVar1[5] + param_5;
        auVar76._24_4_ = param_6 * pfVar1[6] + param_5;
        auVar76._28_4_ = param_6 * pfVar1[7] + param_5;
        auVar46._0_4_ = auVar76._0_4_ + param_7;
        auVar46._4_4_ = auVar76._4_4_ + param_7;
        auVar46._8_4_ = auVar76._8_4_ + param_7;
        auVar46._12_4_ = auVar76._12_4_ + param_7;
        auVar46._16_4_ = auVar76._16_4_ + param_7;
        auVar46._20_4_ = auVar76._20_4_ + param_7;
        auVar46._24_4_ = auVar76._24_4_ + param_7;
        auVar46._28_4_ = auVar76._28_4_ + param_7;
        auVar57 = vfnmadd213ps_avx512vl(auVar46,auVar48,auVar55);
        auVar58 = vfnmadd213ps_avx512vl(auVar46,auVar47,auVar56);
        auVar75._0_4_ = -(auVar49._0_4_ * auVar46._0_4_) + auVar54._0_4_;
        auVar75._4_4_ = -(auVar49._4_4_ * auVar46._4_4_) + auVar54._4_4_;
        auVar75._8_4_ = -(auVar49._8_4_ * auVar46._8_4_) + auVar54._8_4_;
        auVar75._12_4_ = -(auVar49._12_4_ * auVar46._12_4_) + auVar54._12_4_;
        auVar75._16_4_ = -(auVar49._16_4_ * auVar46._16_4_) + auVar54._16_4_;
        auVar75._20_4_ = -(auVar49._20_4_ * auVar46._20_4_) + auVar54._20_4_;
        auVar75._24_4_ = -(auVar49._24_4_ * auVar46._24_4_) + auVar54._24_4_;
        auVar75._28_4_ = -(auVar49._28_4_ * auVar46._28_4_) + auVar54._28_4_;
        auVar53 = vsubps_avx512vl(auVar53,auVar57);
        auVar51 = vsubps_avx512vl(auVar51,auVar58);
        auVar50 = vsubps_avx512vl(auVar50,auVar75);
        auVar46 = vmulps_avx512vl(auVar51,auVar51);
        auVar59._0_4_ = auVar53._0_4_ * auVar53._0_4_ + auVar46._0_4_;
        auVar59._4_4_ = auVar53._4_4_ * auVar53._4_4_ + auVar46._4_4_;
        auVar59._8_4_ = auVar53._8_4_ * auVar53._8_4_ + auVar46._8_4_;
        auVar59._12_4_ = auVar53._12_4_ * auVar53._12_4_ + auVar46._12_4_;
        auVar59._16_4_ = auVar53._16_4_ * auVar53._16_4_ + auVar46._16_4_;
        auVar59._20_4_ = auVar53._20_4_ * auVar53._20_4_ + auVar46._20_4_;
        auVar59._24_4_ = auVar53._24_4_ * auVar53._24_4_ + auVar46._24_4_;
        auVar59._28_4_ = auVar53._28_4_ * auVar53._28_4_ + auVar46._28_4_;
        auVar59 = vfmadd231ps_avx512vl(auVar59,auVar50,auVar50);
        auVar46 = vsqrtps_avx(auVar59);
        auVar46 = vdivps_avx(auVar64,auVar46);
        uVar30 = vcmpps_avx512vl(auVar59,auVar44,1);
        auVar53 = vfmadd231ps_avx512vl(auVar57,auVar46,auVar53);
        bVar39 = (byte)uVar30;
        uVar41 = vcmpps_avx512vl(auVar59,auVar45,1);
        bVar5 = (byte)uVar41;
        auVar57._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar76._0_4_ * auVar48._0_4_) + auVar55._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar53._0_4_;
        bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar57._4_4_ =
             (uint)bVar7 * (int)(-(auVar76._4_4_ * auVar48._4_4_) + auVar55._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar53._4_4_;
        bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar57._8_4_ =
             (uint)bVar7 * (int)(-(auVar76._8_4_ * auVar48._8_4_) + auVar55._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar53._8_4_;
        bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar57._12_4_ =
             (uint)bVar7 * (int)(-(auVar76._12_4_ * auVar48._12_4_) + auVar55._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar53._12_4_;
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        auVar57._16_4_ =
             (uint)bVar7 * (int)(-(auVar76._16_4_ * auVar48._16_4_) + auVar55._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar53._16_4_;
        bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
        auVar57._20_4_ =
             (uint)bVar7 * (int)(-(auVar76._20_4_ * auVar48._20_4_) + auVar55._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar53._20_4_;
        bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
        auVar57._24_4_ =
             (uint)bVar7 * (int)(-(auVar76._24_4_ * auVar48._24_4_) + auVar55._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar53._24_4_;
        bVar7 = SUB81(uVar41 >> 7,0);
        auVar57._28_4_ =
             (uint)bVar7 * (int)(-(auVar76._28_4_ * auVar48._28_4_) + auVar55._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar53._28_4_;
        uVar40 = vcmpps_avx512vl(auVar57,ZEXT1632(auVar43),4);
        uVar31 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar43),4);
        uVar40 = uVar40 & uVar31;
        if ((char)uVar40 != '\0') {
          auVar47 = vfnmadd213ps_avx512vl(auVar47,auVar76,auVar56);
          auVar48 = vfmadd213ps_avx512vl(auVar51,auVar46,auVar58);
          auVar46 = vfmadd213ps_avx512vl(auVar50,auVar46,auVar75);
          auVar50._0_4_ =
               (uint)(bVar5 & 1) * auVar47._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar48._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar50._4_4_ =
               (uint)bVar7 * auVar47._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar48._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar50._8_4_ =
               (uint)bVar7 * auVar47._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar48._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar50._12_4_ =
               (uint)bVar7 * auVar47._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar48._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar50._16_4_ =
               (uint)bVar7 * auVar47._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar48._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar50._20_4_ =
               (uint)bVar7 * auVar47._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar48._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar50._24_4_ =
               (uint)bVar7 * auVar47._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar48._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar50._28_4_ =
               (uint)bVar7 * auVar47._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar48._28_4_;
          auVar47._0_4_ =
               (uint)(bVar5 & 1) * (int)(-(auVar76._0_4_ * auVar49._0_4_) + auVar54._0_4_) |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar7 * (int)(-(auVar76._4_4_ * auVar49._4_4_) + auVar54._4_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar46._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar7 * (int)(-(auVar76._8_4_ * auVar49._8_4_) + auVar54._8_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar46._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar7 * (int)(-(auVar76._12_4_ * auVar49._12_4_) + auVar54._12_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar46._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar7 * (int)(-(auVar76._16_4_ * auVar49._16_4_) + auVar54._16_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar46._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar7 * (int)(-(auVar76._20_4_ * auVar49._20_4_) + auVar54._20_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar46._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar7 * (int)(-(auVar76._24_4_ * auVar49._24_4_) + auVar54._24_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar46._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar7 * (int)(-(auVar76._28_4_ * auVar49._28_4_) + auVar54._28_4_) |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar46._28_4_;
          if ((char)uVar40 == -1) {
            auVar46 = vunpcklps_avx512vl(auVar57,auVar50);
            auVar48 = vunpcklps_avx512vl(auVar47,auVar52);
            auVar49 = vunpcklpd_avx512vl(auVar46,auVar48);
            auVar46 = vunpckhpd_avx512vl(auVar46,auVar48);
            auVar48 = vunpckhps_avx512vl(auVar57,auVar50);
            auVar47 = vunpckhps_avx512vl(auVar47,auVar52);
            auVar50 = vunpcklpd_avx512vl(auVar48,auVar47);
            auVar47 = vunpckhpd_avx512vl(auVar48,auVar47);
            auVar48 = vinsertf32x4_avx512vl(auVar49,auVar46._0_16_,1);
            *pauVar36 = auVar48;
            auVar48 = vinsertf32x4_avx512vl(auVar50,auVar47._0_16_,1);
            pauVar36[1] = auVar48;
            auVar46 = vshuff64x2_avx512vl(auVar49,auVar46,3);
            pauVar36[2] = auVar46;
            auVar46 = vshuff64x2_avx512vl(auVar50,auVar47,3);
            pauVar36[3] = auVar46;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar64,uVar40,auVar57);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar54,uVar40,auVar50);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar75,uVar40,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar76,uVar40,auVar52);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar38 = uVar38 + 0x20;
      pauVar36 = pauVar36 + 4;
      unaff_RBX = unaff_RBX + 0x18;
    } while (uVar35 < (uVar33 & 0xfffffff8));
  }
  iVar34 = (int)uVar35;
  if (iVar34 < (int)param_9) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar60 = vpor_avx2(auVar60,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar61 = vpbroadcastd_avx512vl();
    uVar35 = vpcmpgtd_avx512vl(auVar61,auVar60);
    lVar37 = (longlong)(param_8 + iVar34);
    pauVar36 = (undefined1 (*) [32])(param_1 + lVar37 * 0x10);
    bVar39 = (byte)uVar35;
    if (bVar39 == 0xff) {
      auVar62 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar44 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar45 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar64 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar46 = vunpcklps_avx512vl(auVar62,auVar44);
      auVar62 = vunpckhps_avx512vl(auVar62,auVar44);
      auVar44 = vunpcklps_avx512vl(auVar45,auVar64);
      auVar45 = vunpckhps_avx512vl(auVar45,auVar64);
      auVar49 = vunpcklpd_avx512vl(auVar46,auVar44);
      auVar48 = vunpckhpd_avx512vl(auVar46,auVar44);
      auVar44 = vunpcklpd_avx512vl(auVar62,auVar45);
      auVar62 = vunpckhpd_avx512vl(auVar62,auVar45);
    }
    else {
      auVar42 = vxorps_avx512vl(auVar42,auVar42);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar49._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar49._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar49._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar49._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar49._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar42 = vxorps_avx512vl(auVar77,auVar77);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar48._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar48._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar48._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar48._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar48._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar48._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar48._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar48._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar42 = vxorps_avx512vl(auVar78,auVar78);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar44._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar44._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar44._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar62._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_;
      auVar62._0_4_ = (uint)(bVar39 & 1) * auVar45._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar45._28_4_;
    }
    uVar32 = vpcmpd_avx512vl(auVar60,auVar61,5);
    bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar20 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar23 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar26 = SUB81(uVar35 >> 7,0);
    bVar8 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar21 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar27 = SUB81(uVar35 >> 7,0);
    bVar9 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar25 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar28 = SUB81(uVar35 >> 7,0);
    auVar74 = ZEXT1664((undefined1  [16])0x0);
    uVar29 = vcmpps_avx512vl(auVar62,auVar74._0_32_,0);
    if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
      pauVar2 = (undefined1 (*) [32])(param_2 + lVar37 * 0xc);
      if (bVar39 == 0xff) {
        auVar60 = pauVar2[1];
        auVar61 = vblendps_avx(auVar60,*pauVar2,0x24);
        auVar45 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60);
        auVar53 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar60 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar60);
        auVar51 = vinsertf32x4_avx512vl(auVar45,auVar60._0_16_,1);
        auVar52 = vshuff64x2_avx512vl(auVar45,auVar60,3);
        auVar60 = *(undefined1 (*) [32])(param_3 + lVar37 * 0xc);
        auVar61 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar37 * 0xc);
        auVar45 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar37 * 0xc);
        auVar64 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60,auVar61);
        auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45,auVar61);
        auVar54 = vinsertf32x4_avx512vl(auVar64,auVar46._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar64,auVar46,3);
        auVar60 = vblendps_avx(auVar61,auVar60,0x24);
        auVar60 = vpermt2ps_avx512vl(auVar60,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar45);
      }
      else {
        auVar42 = vxorps_avx512vl(auVar49._0_16_,auVar49._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + (longlong)*pauVar2));
        auVar51._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar51._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
        auVar52._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar52._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        auVar52._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar60._8_4_;
        auVar52._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar60._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
        auVar53._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar53._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar53._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar74._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar53._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar74._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        puVar3 = (undefined4 *)(param_3 + lVar37 * 0xc);
        auVar42 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar36));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar42 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + unaff_RBX));
        auVar55._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar55._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar55._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar55._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar55._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar55._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar55._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar55._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar61 = vgatherdps_avx512vl(*puVar3);
        auVar60._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar60._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
        auVar60._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
        auVar60._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar60._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar60._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar60._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      }
      auVar71._4_4_ = param_5;
      auVar71._0_4_ = param_5;
      auVar71._8_4_ = param_5;
      auVar71._12_4_ = param_5;
      auVar71._16_4_ = param_5;
      auVar71._20_4_ = param_5;
      auVar71._24_4_ = param_5;
      auVar71._28_4_ = param_5;
      auVar70._4_4_ = param_6;
      auVar70._0_4_ = param_6;
      auVar70._8_4_ = param_6;
      auVar70._12_4_ = param_6;
      auVar70._16_4_ = param_6;
      auVar70._20_4_ = param_6;
      auVar70._24_4_ = param_6;
      auVar70._28_4_ = param_6;
      piVar4 = (int *)(param_4 + (iVar34 << 2));
      auVar63._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar4[1];
      auVar63._0_4_ = (uint)(bVar39 & 1) * *piVar4;
      auVar63._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar4[2];
      auVar63._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar4[3];
      auVar63._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar4[4];
      auVar63._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar4[5];
      auVar63._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar4[6];
      auVar63._28_4_ = (uint)(byte)(uVar35 >> 7) * piVar4[7];
      auVar64 = vfmadd213ps_avx512vl(auVar63,auVar70,auVar71);
      auVar42 = vxorps_avx512vl(auVar79,auVar79);
      auVar61 = vbroadcastss_avx512vl(auVar68);
      auVar45 = vaddps_avx512vl(auVar61,auVar64);
      auVar46 = vfnmadd213ps_avx512vl(auVar45,auVar54,auVar51);
      auVar47 = vfnmadd213ps_avx512vl(auVar45,auVar55,auVar52);
      auVar50 = vfnmadd213ps_avx512vl(auVar45,auVar60,auVar53);
      auVar45._4_4_ = (uint)bVar7 * auVar49._4_4_ | (uint)!bVar7 * iStack_13c;
      auVar45._0_4_ = (uint)(bVar39 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar39 & 1) * local_140;
      auVar45._8_4_ = (uint)bVar11 * auVar49._8_4_ | (uint)!bVar11 * iStack_138;
      auVar45._12_4_ = (uint)bVar14 * auVar49._12_4_ | (uint)!bVar14 * iStack_134;
      auVar45._16_4_ = (uint)bVar17 * auVar49._16_4_ | (uint)!bVar17 * iStack_130;
      auVar45._20_4_ = (uint)bVar20 * auVar49._20_4_ | (uint)!bVar20 * iStack_12c;
      auVar45._24_4_ = (uint)bVar23 * auVar49._24_4_ | (uint)!bVar23 * iStack_128;
      auVar45._28_4_ = (uint)bVar26 * auVar49._28_4_ | (uint)!bVar26 * iStack_124;
      auVar56._4_4_ = (uint)bVar8 * auVar48._4_4_ | (uint)!bVar8 * iStack_11c;
      auVar56._0_4_ = (uint)(bVar39 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar56._8_4_ = (uint)bVar12 * auVar48._8_4_ | (uint)!bVar12 * iStack_118;
      auVar56._12_4_ = (uint)bVar15 * auVar48._12_4_ | (uint)!bVar15 * iStack_114;
      auVar56._16_4_ = (uint)bVar18 * auVar48._16_4_ | (uint)!bVar18 * iStack_110;
      auVar56._20_4_ = (uint)bVar21 * auVar48._20_4_ | (uint)!bVar21 * iStack_10c;
      auVar56._24_4_ = (uint)bVar24 * auVar48._24_4_ | (uint)!bVar24 * iStack_108;
      auVar56._28_4_ = (uint)bVar27 * auVar48._28_4_ | (uint)!bVar27 * iStack_104;
      auVar58._4_4_ = (uint)bVar9 * auVar44._4_4_ | (uint)!bVar9 * iStack_fc;
      auVar58._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar58._8_4_ = (uint)bVar13 * auVar44._8_4_ | (uint)!bVar13 * iStack_f8;
      auVar58._12_4_ = (uint)bVar16 * auVar44._12_4_ | (uint)!bVar16 * iStack_f4;
      auVar58._16_4_ = (uint)bVar19 * auVar44._16_4_ | (uint)!bVar19 * iStack_f0;
      auVar58._20_4_ = (uint)bVar22 * auVar44._20_4_ | (uint)!bVar22 * iStack_ec;
      auVar58._24_4_ = (uint)bVar25 * auVar44._24_4_ | (uint)!bVar25 * iStack_e8;
      auVar58._28_4_ = (uint)bVar28 * auVar44._28_4_ | (uint)!bVar28 * iStack_e4;
      auVar44 = vsubps_avx512vl(auVar45,auVar46);
      auVar45 = vsubps_avx512vl(auVar56,auVar47);
      auVar48 = vsubps_avx512vl(auVar58,auVar50);
      auVar49 = vmulps_avx512vl(auVar45,auVar45);
      auVar49 = vfmadd231ps_avx512vl(auVar49,auVar44,auVar44);
      auVar49 = vfmadd231ps_avx512vl(auVar49,auVar48,auVar48);
      auVar56 = vsqrtps_avx512vl(auVar49);
      auVar56 = vdivps_avx512vl(auVar61,auVar56);
      auVar51 = vfnmadd213ps_avx512vl(auVar54,auVar64,auVar51);
      param_7 = param_7 * param_7;
      auVar69._4_4_ = param_7;
      auVar69._0_4_ = param_7;
      auVar69._8_4_ = param_7;
      auVar69._12_4_ = param_7;
      auVar69._16_4_ = param_7;
      auVar69._20_4_ = param_7;
      auVar69._24_4_ = param_7;
      auVar69._28_4_ = param_7;
      uVar35 = vcmpps_avx512vl(auVar49,auVar69,1);
      auVar61._4_4_ = __real_322bcc77;
      auVar61._0_4_ = __real_322bcc77;
      auVar61._8_4_ = __real_322bcc77;
      auVar61._12_4_ = __real_322bcc77;
      auVar61._16_4_ = __real_322bcc77;
      auVar61._20_4_ = __real_322bcc77;
      auVar61._24_4_ = __real_322bcc77;
      auVar61._28_4_ = __real_322bcc77;
      uVar30 = vcmpps_avx512vl(auVar49,auVar61,1);
      auVar61 = vfmadd231ps_avx512vl(auVar46,auVar56,auVar44);
      bVar5 = (byte)uVar35;
      bVar6 = (byte)uVar30;
      auVar65._0_4_ =
           (uint)(bVar6 & 1) * auVar51._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar61._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar7 * auVar51._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar7 * auVar51._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar7 * auVar51._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar7 * auVar51._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar7 * auVar51._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar7 * auVar51._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar7 * auVar51._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      uVar29 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar42),4);
      uVar32 = vcmpps_avx512vl(auVar65,ZEXT1632(auVar42),4);
      bVar39 = (byte)uVar29 & (byte)uVar32 & bVar39;
      uVar41 = (ulonglong)bVar39;
      if (bVar39 != 0) {
        auVar61 = vfnmadd213ps_avx512vl(auVar55,auVar64,auVar52);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar64,auVar53);
        auVar44 = vfmadd213ps_avx512vl(auVar45,auVar56,auVar47);
        auVar45 = vfmadd213ps_avx512vl(auVar48,auVar56,auVar50);
        auVar66._0_4_ =
             (uint)(bVar6 & 1) * auVar61._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar66._4_4_ =
             (uint)bVar7 * auVar61._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar66._8_4_ =
             (uint)bVar7 * auVar61._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar66._12_4_ =
             (uint)bVar7 * auVar61._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar66._16_4_ =
             (uint)bVar7 * auVar61._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar66._20_4_ =
             (uint)bVar7 * auVar61._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar66._24_4_ =
             (uint)bVar7 * auVar61._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar66._28_4_ =
             (uint)bVar7 * auVar61._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
        auVar67._0_4_ =
             (uint)(bVar6 & 1) * auVar60._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar45._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * auVar60._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * auVar60._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * auVar60._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * auVar60._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * auVar60._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * auVar60._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * auVar60._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar45._28_4_;
        if (bVar39 == 0xff) {
          auVar61 = vunpcklps_avx512vl(auVar65,auVar66);
          auVar60 = vunpcklps_avx(auVar67,auVar62);
          auVar44 = vunpcklpd_avx(auVar61,auVar60);
          auVar60 = vunpckhpd_avx(auVar61,auVar60);
          auVar45 = vunpckhps_avx512vl(auVar65,auVar66);
          auVar61 = vunpckhps_avx(auVar67,auVar62);
          auVar62 = vunpcklpd_avx(auVar45,auVar61);
          auVar61 = vunpckhpd_avx(auVar45,auVar61);
          auVar72._16_16_ = auVar60._0_16_;
          auVar72._0_16_ = auVar44._0_16_;
          *pauVar36 = auVar72;
          auVar73._16_16_ = auVar61._0_16_;
          auVar73._0_16_ = auVar62._0_16_;
          pauVar36[1] = auVar73;
          auVar60 = vperm2f128_avx(auVar44,auVar60,0x31);
          pauVar36[2] = auVar60;
          auVar60 = vperm2f128_avx(auVar62,auVar61,0x31);
          pauVar36[3] = auVar60;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar65);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar67);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar62);
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx512skx @ 1403156a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithRadiusMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  undefined1 (*pauVar36) [32];
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [64];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar75 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar76 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM22 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM24 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar62 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar61 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar60 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar77 = in_ZMM24._0_16_;
  auVar76 = in_ZMM18._0_16_;
  auVar75 = in_ZMM17._0_16_;
  auVar43 = in_ZMM16._0_16_;
  uVar33 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar33 = param_9;
  }
  if ((int)(uVar33 & 0xfffffff8) < 1) {
    uVar35 = 0;
  }
  else {
    auVar63._4_4_ = param_7;
    auVar63._0_4_ = param_7;
    auVar63._8_4_ = param_7;
    auVar63._12_4_ = param_7;
    auVar63._16_4_ = param_7;
    auVar63._20_4_ = param_7;
    auVar63._24_4_ = param_7;
    auVar63._28_4_ = param_7;
    auVar65._4_4_ = param_5;
    auVar65._0_4_ = param_5;
    auVar65._8_4_ = param_5;
    auVar65._12_4_ = param_5;
    auVar65._16_4_ = param_5;
    auVar65._20_4_ = param_5;
    auVar65._24_4_ = param_5;
    auVar65._28_4_ = param_5;
    unaff_RBX = (longlong)param_8 * 3 + 0x10;
    pauVar36 = (undefined1 (*) [32])((longlong)param_8 * 0x10 + param_1);
    uVar38 = 0;
    auVar43 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar75 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar76 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar44 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar42 = vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
    auVar77 = __ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c._0_16_;
    uVar35 = 0;
    do {
      auVar45 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar46 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar47 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar48 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar49 = vunpckhps_avx512vl(auVar45,auVar46);
      auVar50 = vunpckhps_avx512vl(auVar47,auVar48);
      auVar51 = vunpckhpd_avx512vl(auVar49,auVar50);
      uVar29 = vcmpps_avx512vl(auVar51,ZEXT1632(auVar42),4);
      if ((char)uVar29 != '\0') {
        auVar49 = vunpcklpd_avx512vl(auVar49,auVar50);
        auVar45 = vunpcklps_avx512vl(auVar45,auVar46);
        auVar46 = vunpcklps_avx512vl(auVar47,auVar48);
        auVar50 = vunpckhpd_avx512vl(auVar45,auVar46);
        auVar52 = vunpcklpd_avx512vl(auVar45,auVar46);
        auVar45 = *(undefined1 (*) [32])(param_2 + -0x40 + unaff_RBX * 4);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x20 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + unaff_RBX * 4);
        auVar48 = vblendps_avx(auVar46,auVar45,0x24);
        auVar45 = vpermt2ps_avx512vl(auVar45,auVar60,auVar46);
        auVar53 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar46 = vpermt2ps_avx512vl(auVar47,auVar61,auVar46);
        auVar54 = vinsertf32x4_avx512vl(auVar45,auVar46._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar45,auVar46,3);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x40 + unaff_RBX * 4);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x20 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + unaff_RBX * 4);
        auVar48 = vblendps_avx(auVar46,auVar45,0x24);
        auVar45 = vpermt2ps_avx512vl(auVar45,auVar60,auVar46);
        auVar48 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar46 = vpermt2ps_avx512vl(auVar47,auVar61,auVar46);
        auVar47 = vinsertf32x4_avx512vl(auVar45,auVar46._0_16_,1);
        auVar46 = vshuff64x2_avx512vl(auVar45,auVar46,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar38);
        auVar74._0_4_ = param_7 * *pfVar1 + param_6;
        auVar74._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar74._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar74._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar74._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar74._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar74._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar74._28_4_ = param_7 * pfVar1[7] + param_6;
        auVar45 = vaddps_avx512vl(auVar65,auVar74);
        auVar56 = vfnmadd213ps_avx512vl(auVar45,auVar47,auVar54);
        auVar57 = vfnmadd213ps_avx512vl(auVar45,auVar46,auVar55);
        auVar58 = vfnmadd213ps_avx512vl(auVar45,auVar48,auVar53);
        auVar52 = vsubps_avx512vl(auVar52,auVar56);
        auVar50 = vsubps_avx512vl(auVar50,auVar57);
        auVar49 = vsubps_avx512vl(auVar49,auVar58);
        auVar45 = vmulps_avx512vl(auVar50,auVar50);
        auVar59._0_4_ = auVar52._0_4_ * auVar52._0_4_ + auVar45._0_4_;
        auVar59._4_4_ = auVar52._4_4_ * auVar52._4_4_ + auVar45._4_4_;
        auVar59._8_4_ = auVar52._8_4_ * auVar52._8_4_ + auVar45._8_4_;
        auVar59._12_4_ = auVar52._12_4_ * auVar52._12_4_ + auVar45._12_4_;
        auVar59._16_4_ = auVar52._16_4_ * auVar52._16_4_ + auVar45._16_4_;
        auVar59._20_4_ = auVar52._20_4_ * auVar52._20_4_ + auVar45._20_4_;
        auVar59._24_4_ = auVar52._24_4_ * auVar52._24_4_ + auVar45._24_4_;
        auVar59._28_4_ = auVar52._28_4_ * auVar52._28_4_ + auVar45._28_4_;
        auVar59 = vfmadd231ps_avx512vl(auVar59,auVar49,auVar49);
        auVar45 = vsqrtps_avx(auVar59);
        auVar45 = vdivps_avx(auVar74,auVar45);
        auVar73._0_4_ = auVar74._0_4_ * auVar74._0_4_;
        auVar73._4_4_ = auVar74._4_4_ * auVar74._4_4_;
        auVar73._8_4_ = auVar74._8_4_ * auVar74._8_4_;
        auVar73._12_4_ = auVar74._12_4_ * auVar74._12_4_;
        auVar73._16_4_ = auVar74._16_4_ * auVar74._16_4_;
        auVar73._20_4_ = auVar74._20_4_ * auVar74._20_4_;
        auVar73._24_4_ = auVar74._24_4_ * auVar74._24_4_;
        auVar73._28_4_ = auVar74._28_4_ * auVar74._28_4_;
        uVar30 = vcmpps_avx512vl(auVar59,auVar73,1);
        auVar52 = vfmadd231ps_avx512vl(auVar56,auVar45,auVar52);
        bVar39 = (byte)uVar30;
        uVar41 = vcmpps_avx512vl(auVar59,auVar44,1);
        bVar5 = (byte)uVar41;
        auVar56._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(param_5 * auVar47._0_4_) + auVar54._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar52._0_4_;
        bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar56._4_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._4_4_) + auVar54._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar52._4_4_;
        bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar56._8_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._8_4_) + auVar54._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar52._8_4_;
        bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar56._12_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._12_4_) + auVar54._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar52._12_4_;
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        auVar56._16_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._16_4_) + auVar54._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar52._16_4_;
        bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
        auVar56._20_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._20_4_) + auVar54._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar52._20_4_;
        bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
        auVar56._24_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._24_4_) + auVar54._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar52._24_4_;
        bVar7 = SUB81(uVar41 >> 7,0);
        auVar56._28_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._28_4_) + auVar54._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar52._28_4_;
        uVar40 = vcmpps_avx512vl(auVar56,ZEXT1632(auVar42),4);
        uVar31 = vcmpps_avx512vl(auVar51,ZEXT1632(auVar42),4);
        uVar40 = uVar40 & uVar31;
        if ((char)uVar40 != '\0') {
          auVar46 = vfnmadd213ps_avx512vl(auVar46,auVar65,auVar55);
          auVar52._0_4_ = -(param_5 * auVar48._0_4_) + auVar53._0_4_;
          auVar52._4_4_ = -(param_5 * auVar48._4_4_) + auVar53._4_4_;
          auVar52._8_4_ = -(param_5 * auVar48._8_4_) + auVar53._8_4_;
          auVar52._12_4_ = -(param_5 * auVar48._12_4_) + auVar53._12_4_;
          auVar52._16_4_ = -(param_5 * auVar48._16_4_) + auVar53._16_4_;
          auVar52._20_4_ = -(param_5 * auVar48._20_4_) + auVar53._20_4_;
          auVar52._24_4_ = -(param_5 * auVar48._24_4_) + auVar53._24_4_;
          auVar52._28_4_ = -(param_5 * auVar48._28_4_) + auVar53._28_4_;
          auVar47 = vfmadd213ps_avx512vl(auVar50,auVar45,auVar57);
          auVar45 = vfmadd213ps_avx512vl(auVar49,auVar45,auVar58);
          auVar48._0_4_ =
               (uint)(bVar5 & 1) * auVar46._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar47._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar48._4_4_ =
               (uint)bVar7 * auVar46._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar47._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar48._8_4_ =
               (uint)bVar7 * auVar46._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar47._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar48._12_4_ =
               (uint)bVar7 * auVar46._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar47._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar48._16_4_ =
               (uint)bVar7 * auVar46._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar47._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar48._20_4_ =
               (uint)bVar7 * auVar46._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar47._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar48._24_4_ =
               (uint)bVar7 * auVar46._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar47._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar48._28_4_ =
               (uint)bVar7 * auVar46._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar47._28_4_;
          auVar46._0_4_ =
               (uint)(bVar5 & 1) * (int)auVar52._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar45._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar46._4_4_ =
               (uint)bVar7 * (int)auVar52._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar45._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar46._8_4_ =
               (uint)bVar7 * (int)auVar52._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar45._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar46._12_4_ =
               (uint)bVar7 * (int)auVar52._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar45._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar46._16_4_ =
               (uint)bVar7 * (int)auVar52._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar45._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar46._20_4_ =
               (uint)bVar7 * (int)auVar52._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar45._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar46._24_4_ =
               (uint)bVar7 * (int)auVar52._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar45._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar46._28_4_ =
               (uint)bVar7 * (int)auVar52._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar45._28_4_;
          if ((char)uVar40 == -1) {
            auVar45 = vunpcklps_avx512vl(auVar56,auVar48);
            auVar47 = vunpcklps_avx512vl(auVar46,auVar51);
            auVar49 = vunpcklpd_avx512vl(auVar45,auVar47);
            auVar45 = vunpckhpd_avx512vl(auVar45,auVar47);
            auVar47 = vunpckhps_avx512vl(auVar56,auVar48);
            auVar46 = vunpckhps_avx512vl(auVar46,auVar51);
            auVar48 = vunpcklpd_avx512vl(auVar47,auVar46);
            auVar46 = vunpckhpd_avx512vl(auVar47,auVar46);
            auVar47 = vinsertf32x4_avx512vl(auVar49,auVar45._0_16_,1);
            *pauVar36 = auVar47;
            auVar47 = vinsertf32x4_avx512vl(auVar48,auVar46._0_16_,1);
            pauVar36[1] = auVar47;
            auVar45 = vshuff64x2_avx512vl(auVar49,auVar45,3);
            pauVar36[2] = auVar45;
            auVar45 = vshuff64x2_avx512vl(auVar48,auVar46,3);
            pauVar36[3] = auVar45;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar63,uVar40,auVar56);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar65,uVar40,auVar48);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar52,uVar40,auVar46);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar57,uVar40,auVar51);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar38 = uVar38 + 0x20;
      pauVar36 = pauVar36 + 4;
      unaff_RBX = unaff_RBX + 0x18;
    } while (uVar35 < (uVar33 & 0xfffffff8));
  }
  iVar34 = (int)uVar35;
  if (iVar34 < (int)param_9) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar60 = vpor_avx2(auVar60,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar61 = vpbroadcastd_avx512vl();
    uVar35 = vpcmpgtd_avx512vl(auVar61,auVar60);
    lVar37 = (longlong)(param_8 + iVar34);
    pauVar36 = (undefined1 (*) [32])(param_1 + lVar37 * 0x10);
    bVar39 = (byte)uVar35;
    if (bVar39 == 0xff) {
      auVar62 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar44 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar63 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar65 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar45 = vunpcklps_avx512vl(auVar62,auVar44);
      auVar62 = vunpckhps_avx512vl(auVar62,auVar44);
      auVar44 = vunpcklps_avx512vl(auVar63,auVar65);
      auVar63 = vunpckhps_avx512vl(auVar63,auVar65);
      auVar47 = vunpcklpd_avx512vl(auVar45,auVar44);
      auVar45 = vunpckhpd_avx512vl(auVar45,auVar44);
      auVar44 = vunpcklpd_avx512vl(auVar62,auVar63);
      auVar62 = vunpckhpd_avx512vl(auVar62,auVar63);
    }
    else {
      auVar43 = vxorps_avx512vl(auVar43,auVar43);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar47._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar47._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar47._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar47._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar47._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar47._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar47._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar47._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar43 = vxorps_avx512vl(auVar75,auVar75);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar45._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar45._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar45._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar45._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar45._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar45._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar45._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar45._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar43 = vxorps_avx512vl(auVar76,auVar76);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar44._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar44._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar44._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar62._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
      auVar62._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
    }
    uVar32 = vpcmpd_avx512vl(auVar60,auVar61,5);
    bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar20 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar23 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar26 = SUB81(uVar35 >> 7,0);
    bVar8 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar21 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar27 = SUB81(uVar35 >> 7,0);
    bVar9 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar25 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar28 = SUB81(uVar35 >> 7,0);
    auVar72 = ZEXT1664((undefined1  [16])0x0);
    uVar29 = vcmpps_avx512vl(auVar62,auVar72._0_32_,0);
    if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
      pauVar2 = (undefined1 (*) [32])(param_2 + lVar37 * 0xc);
      if (bVar39 == 0xff) {
        auVar60 = pauVar2[1];
        auVar61 = vblendps_avx(auVar60,*pauVar2,0x24);
        auVar63 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60);
        auVar51 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar60 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar60);
        auVar49 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
        auVar50 = vshuff64x2_avx512vl(auVar63,auVar60,3);
        auVar60 = *(undefined1 (*) [32])(param_3 + lVar37 * 0xc);
        auVar61 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar37 * 0xc);
        auVar63 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar37 * 0xc);
        auVar65 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60,auVar61);
        auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar63,auVar61);
        auVar53 = vinsertf32x4_avx512vl(auVar65,auVar46._0_16_,1);
        auVar54 = vshuff64x2_avx512vl(auVar65,auVar46,3);
        auVar60 = vblendps_avx(auVar61,auVar60,0x24);
        auVar60 = vpermt2ps_avx512vl(auVar60,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar63);
      }
      else {
        auVar43 = vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + (longlong)*pauVar2));
        auVar49._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar49._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar49._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar49._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar49._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
        auVar50._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar50._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        auVar50._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar60._8_4_;
        auVar50._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar60._12_4_;
        auVar50._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar50._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar50._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar50._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
        auVar51._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar51._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar72._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar72._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        puVar3 = (undefined4 *)(param_3 + lVar37 * 0xc);
        auVar43 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar36));
        auVar53._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar53._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar53._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar53._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar43 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + unaff_RBX));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar61 = vgatherdps_avx512vl(*puVar3);
        auVar60._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar60._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
        auVar60._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
        auVar60._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar60._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar60._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar60._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      }
      auVar71._4_4_ = param_6;
      auVar71._0_4_ = param_6;
      auVar71._8_4_ = param_6;
      auVar71._12_4_ = param_6;
      auVar71._16_4_ = param_6;
      auVar71._20_4_ = param_6;
      auVar71._24_4_ = param_6;
      auVar71._28_4_ = param_6;
      auVar69._4_4_ = param_7;
      auVar69._0_4_ = param_7;
      auVar69._8_4_ = param_7;
      auVar69._12_4_ = param_7;
      auVar69._16_4_ = param_7;
      auVar69._20_4_ = param_7;
      auVar69._24_4_ = param_7;
      auVar69._28_4_ = param_7;
      piVar4 = (int *)(param_4 + (iVar34 << 2));
      auVar64._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar4[1];
      auVar64._0_4_ = (uint)(bVar39 & 1) * *piVar4;
      auVar64._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar4[2];
      auVar64._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar4[3];
      auVar64._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar4[4];
      auVar64._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar4[5];
      auVar64._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar4[6];
      auVar64._28_4_ = (uint)(byte)(uVar35 >> 7) * piVar4[7];
      auVar61 = vfmadd213ps_avx512vl(auVar64,auVar69,auVar71);
      auVar43 = vxorps_avx512vl(auVar77,auVar77);
      auVar63 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
      auVar65 = vaddps_avx512vl(auVar63,auVar61);
      auVar46 = vfnmadd213ps_avx512vl(auVar65,auVar53,auVar49);
      auVar48 = vfnmadd213ps_avx512vl(auVar65,auVar54,auVar50);
      auVar55._4_4_ = (uint)bVar7 * auVar47._4_4_ | (uint)!bVar7 * iStack_13c;
      auVar55._0_4_ = (uint)(bVar39 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar39 & 1) * local_140;
      auVar55._8_4_ = (uint)bVar11 * auVar47._8_4_ | (uint)!bVar11 * iStack_138;
      auVar55._12_4_ = (uint)bVar14 * auVar47._12_4_ | (uint)!bVar14 * iStack_134;
      auVar55._16_4_ = (uint)bVar17 * auVar47._16_4_ | (uint)!bVar17 * iStack_130;
      auVar55._20_4_ = (uint)bVar20 * auVar47._20_4_ | (uint)!bVar20 * iStack_12c;
      auVar55._24_4_ = (uint)bVar23 * auVar47._24_4_ | (uint)!bVar23 * iStack_128;
      auVar55._28_4_ = (uint)bVar26 * auVar47._28_4_ | (uint)!bVar26 * iStack_124;
      auVar65 = vfnmadd213ps_avx512vl(auVar65,auVar60,auVar51);
      auVar57._4_4_ = (uint)bVar8 * auVar45._4_4_ | (uint)!bVar8 * iStack_11c;
      auVar57._0_4_ = (uint)(bVar39 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar57._8_4_ = (uint)bVar12 * auVar45._8_4_ | (uint)!bVar12 * iStack_118;
      auVar57._12_4_ = (uint)bVar15 * auVar45._12_4_ | (uint)!bVar15 * iStack_114;
      auVar57._16_4_ = (uint)bVar18 * auVar45._16_4_ | (uint)!bVar18 * iStack_110;
      auVar57._20_4_ = (uint)bVar21 * auVar45._20_4_ | (uint)!bVar21 * iStack_10c;
      auVar57._24_4_ = (uint)bVar24 * auVar45._24_4_ | (uint)!bVar24 * iStack_108;
      auVar57._28_4_ = (uint)bVar27 * auVar45._28_4_ | (uint)!bVar27 * iStack_104;
      auVar58._4_4_ = (uint)bVar9 * auVar44._4_4_ | (uint)!bVar9 * iStack_fc;
      auVar58._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar58._8_4_ = (uint)bVar13 * auVar44._8_4_ | (uint)!bVar13 * iStack_f8;
      auVar58._12_4_ = (uint)bVar16 * auVar44._12_4_ | (uint)!bVar16 * iStack_f4;
      auVar58._16_4_ = (uint)bVar19 * auVar44._16_4_ | (uint)!bVar19 * iStack_f0;
      auVar58._20_4_ = (uint)bVar22 * auVar44._20_4_ | (uint)!bVar22 * iStack_ec;
      auVar58._24_4_ = (uint)bVar25 * auVar44._24_4_ | (uint)!bVar25 * iStack_e8;
      auVar58._28_4_ = (uint)bVar28 * auVar44._28_4_ | (uint)!bVar28 * iStack_e4;
      auVar44 = vsubps_avx512vl(auVar55,auVar46);
      auVar45 = vsubps_avx512vl(auVar57,auVar48);
      auVar47 = vsubps_avx512vl(auVar58,auVar65);
      auVar52 = vmulps_avx512vl(auVar45,auVar45);
      auVar52 = vfmadd231ps_avx512vl(auVar52,auVar44,auVar44);
      auVar52 = vfmadd231ps_avx512vl(auVar52,auVar47,auVar47);
      auVar55 = vsqrtps_avx512vl(auVar52);
      auVar55 = vdivps_avx512vl(auVar61,auVar55);
      auVar49 = vfnmadd213ps_avx512vl(auVar53,auVar63,auVar49);
      auVar61 = vmulps_avx512vl(auVar61,auVar61);
      uVar35 = vcmpps_avx512vl(auVar52,auVar61,1);
      auVar61._4_4_ = __real_322bcc77;
      auVar61._0_4_ = __real_322bcc77;
      auVar61._8_4_ = __real_322bcc77;
      auVar61._12_4_ = __real_322bcc77;
      auVar61._16_4_ = __real_322bcc77;
      auVar61._20_4_ = __real_322bcc77;
      auVar61._24_4_ = __real_322bcc77;
      auVar61._28_4_ = __real_322bcc77;
      uVar30 = vcmpps_avx512vl(auVar52,auVar61,1);
      auVar61 = vfmadd231ps_avx512vl(auVar46,auVar55,auVar44);
      bVar5 = (byte)uVar35;
      bVar6 = (byte)uVar30;
      auVar66._0_4_ =
           (uint)(bVar6 & 1) * auVar49._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar61._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar66._4_4_ =
           (uint)bVar7 * auVar49._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar66._8_4_ =
           (uint)bVar7 * auVar49._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar66._12_4_ =
           (uint)bVar7 * auVar49._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar66._16_4_ =
           (uint)bVar7 * auVar49._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar66._20_4_ =
           (uint)bVar7 * auVar49._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar66._24_4_ =
           (uint)bVar7 * auVar49._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar66._28_4_ =
           (uint)bVar7 * auVar49._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      uVar29 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar43),4);
      uVar32 = vcmpps_avx512vl(auVar66,ZEXT1632(auVar43),4);
      bVar39 = (byte)uVar29 & (byte)uVar32 & bVar39;
      uVar41 = (ulonglong)bVar39;
      if (bVar39 != 0) {
        auVar61 = vfnmadd213ps_avx512vl(auVar54,auVar63,auVar50);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar63,auVar51);
        auVar44 = vfmadd213ps_avx512vl(auVar45,auVar55,auVar48);
        auVar63 = vfmadd213ps_avx512vl(auVar47,auVar55,auVar65);
        auVar67._0_4_ =
             (uint)(bVar6 & 1) * auVar61._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * auVar61._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * auVar61._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * auVar61._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * auVar61._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * auVar61._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * auVar61._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * auVar61._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
        auVar68._0_4_ =
             (uint)(bVar6 & 1) * auVar60._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar63._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar68._4_4_ =
             (uint)bVar7 * auVar60._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar68._8_4_ =
             (uint)bVar7 * auVar60._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar68._12_4_ =
             (uint)bVar7 * auVar60._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar68._16_4_ =
             (uint)bVar7 * auVar60._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar68._20_4_ =
             (uint)bVar7 * auVar60._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar68._24_4_ =
             (uint)bVar7 * auVar60._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar68._28_4_ =
             (uint)bVar7 * auVar60._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
        if (bVar39 == 0xff) {
          auVar60 = vunpcklps_avx(auVar66,auVar67);
          auVar61 = vunpcklps_avx(auVar68,auVar62);
          auVar63 = vunpcklpd_avx512vl(auVar60,auVar61);
          auVar60 = vunpckhpd_avx(auVar60,auVar61);
          auVar61 = vunpckhps_avx(auVar66,auVar67);
          auVar62 = vunpckhps_avx(auVar68,auVar62);
          auVar44 = vunpcklpd_avx(auVar61,auVar62);
          auVar61 = vunpckhpd_avx(auVar61,auVar62);
          auVar62 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
          *pauVar36 = auVar62;
          auVar70._16_16_ = auVar61._0_16_;
          auVar70._0_16_ = auVar44._0_16_;
          pauVar36[1] = auVar70;
          auVar60 = vshuff64x2_avx512vl(auVar63,auVar60,3);
          pauVar36[2] = auVar60;
          auVar60 = vperm2f128_avx(auVar44,auVar61,0x31);
          pauVar36[3] = auVar60;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar67);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar68);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar62);
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_avx512skx @ 140315e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithoutMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCuniCuni_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,float param_5,
               int param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 *puVar2;
  byte bVar3;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [32];
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar71 [32];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar72 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar73 [16];
  undefined1 in_ZMM19 [64];
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_58 [16];
  
  auVar60 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar59 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar58 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar73 = in_ZMM19._0_16_;
  auVar72 = in_ZMM17._0_16_;
  auVar42 = in_ZMM16._0_16_;
  local_58 = in_ZMM11._0_16_;
  local_88 = in_ZMM8._0_16_;
  local_98 = in_ZMM7._0_16_;
  uVar36 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar36 = param_7;
  }
  auVar68._0_4_ = in_ZMM3._0_4_;
  if ((int)(uVar36 & 0xfffffff8) < 1) {
    uVar37 = 0;
  }
  else {
    fVar26 = auVar68._0_4_ + param_5;
    auVar61._4_4_ = fVar26;
    auVar61._0_4_ = fVar26;
    auVar61._8_4_ = fVar26;
    auVar61._12_4_ = fVar26;
    auVar61._16_4_ = fVar26;
    auVar61._20_4_ = fVar26;
    auVar61._24_4_ = fVar26;
    auVar61._28_4_ = fVar26;
    auVar62._4_4_ = param_5;
    auVar62._0_4_ = param_5;
    auVar62._8_4_ = param_5;
    auVar62._12_4_ = param_5;
    auVar62._16_4_ = param_5;
    auVar62._20_4_ = param_5;
    auVar62._24_4_ = param_5;
    auVar62._28_4_ = param_5;
    auVar63._4_4_ = auVar68._0_4_;
    auVar63._0_4_ = auVar68._0_4_;
    auVar63._8_4_ = auVar68._0_4_;
    auVar63._12_4_ = auVar68._0_4_;
    auVar63._16_4_ = auVar68._0_4_;
    auVar63._20_4_ = auVar68._0_4_;
    auVar63._24_4_ = auVar68._0_4_;
    auVar63._28_4_ = auVar68._0_4_;
    fVar27 = param_5 * param_5;
    auVar64._4_4_ = fVar27;
    auVar64._0_4_ = fVar27;
    auVar64._8_4_ = fVar27;
    auVar64._12_4_ = fVar27;
    auVar64._16_4_ = fVar27;
    auVar64._20_4_ = fVar27;
    auVar64._24_4_ = fVar27;
    auVar64._28_4_ = fVar27;
    pauVar38 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    lVar35 = (longlong)param_6 * 0xc + 0x40;
    uVar37 = 0;
    auVar42 = vxorps_avx512vl(auVar42,auVar42);
    auVar72 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar73 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar43 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    do {
      auVar44 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],0);
      auVar45 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],3);
      auVar46 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],0);
      auVar47 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],3);
      auVar48 = vunpckhps_avx512vl(auVar44,auVar45);
      auVar49 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar50 = vunpckhpd_avx512vl(auVar48,auVar49);
      uVar28 = vcmpps_avx512vl(auVar50,ZEXT1632(auVar42),4);
      if ((char)uVar28 != '\0') {
        auVar48 = vunpcklpd_avx512vl(auVar48,auVar49);
        auVar44 = vunpcklps_avx512vl(auVar44,auVar45);
        auVar45 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpckhpd_avx512vl(auVar44,auVar45);
        auVar49 = vunpcklpd_avx512vl(auVar44,auVar45);
        auVar44 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar35);
        auVar45 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar35);
        auVar46 = vblendps_avx(auVar45,auVar44,0x24);
        auVar44 = vpermt2ps_avx512vl(auVar44,auVar58,auVar45);
        auVar51 = vpermt2ps_avx512vl(auVar46,auVar60,*(undefined1 (*) [32])(param_2 + lVar35));
        auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar35),auVar59,auVar45);
        auVar52 = vinsertf32x4_avx512vl(auVar44,auVar45._0_16_,1);
        auVar53 = vshuff64x2_avx512vl(auVar44,auVar45,3);
        auVar44 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar35);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar35);
        auVar46 = vblendps_avx(auVar45,auVar44,0x24);
        auVar44 = vpermt2ps_avx512vl(auVar44,auVar58,auVar45);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,*(undefined1 (*) [32])(param_3 + lVar35));
        auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar35),auVar59,auVar45);
        auVar54 = vinsertf32x4_avx512vl(auVar44,auVar45._0_16_,1);
        auVar45 = vshuff64x2_avx512vl(auVar44,auVar45,3);
        auVar55 = vfnmadd213ps_avx512vl(auVar54,auVar61,auVar52);
        auVar56 = vfnmadd213ps_avx512vl(auVar45,auVar61,auVar53);
        auVar71._0_4_ = -(fVar26 * auVar46._0_4_) + auVar51._0_4_;
        auVar71._4_4_ = -(fVar26 * auVar46._4_4_) + auVar51._4_4_;
        auVar71._8_4_ = -(fVar26 * auVar46._8_4_) + auVar51._8_4_;
        auVar71._12_4_ = -(fVar26 * auVar46._12_4_) + auVar51._12_4_;
        auVar71._16_4_ = -(fVar26 * auVar46._16_4_) + auVar51._16_4_;
        auVar71._20_4_ = -(fVar26 * auVar46._20_4_) + auVar51._20_4_;
        auVar71._24_4_ = -(fVar26 * auVar46._24_4_) + auVar51._24_4_;
        auVar71._28_4_ = -(fVar26 * auVar46._28_4_) + auVar51._28_4_;
        auVar49 = vsubps_avx512vl(auVar49,auVar55);
        auVar47 = vsubps_avx512vl(auVar47,auVar56);
        auVar48 = vsubps_avx512vl(auVar48,auVar71);
        auVar44 = vmulps_avx512vl(auVar47,auVar47);
        auVar57._0_4_ = auVar49._0_4_ * auVar49._0_4_ + auVar44._0_4_;
        auVar57._4_4_ = auVar49._4_4_ * auVar49._4_4_ + auVar44._4_4_;
        auVar57._8_4_ = auVar49._8_4_ * auVar49._8_4_ + auVar44._8_4_;
        auVar57._12_4_ = auVar49._12_4_ * auVar49._12_4_ + auVar44._12_4_;
        auVar57._16_4_ = auVar49._16_4_ * auVar49._16_4_ + auVar44._16_4_;
        auVar57._20_4_ = auVar49._20_4_ * auVar49._20_4_ + auVar44._20_4_;
        auVar57._24_4_ = auVar49._24_4_ * auVar49._24_4_ + auVar44._24_4_;
        auVar57._28_4_ = auVar49._28_4_ * auVar49._28_4_ + auVar44._28_4_;
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar48,auVar48);
        auVar44 = vsqrtps_avx(auVar57);
        auVar44 = vdivps_avx(auVar62,auVar44);
        uVar29 = vcmpps_avx512vl(auVar57,auVar64,1);
        auVar49 = vfmadd231ps_avx512vl(auVar55,auVar44,auVar49);
        bVar39 = (byte)uVar29;
        uVar30 = vcmpps_avx512vl(auVar57,auVar43,1);
        bVar3 = (byte)uVar30;
        auVar55._0_4_ =
             (uint)(bVar3 & 1) * (int)(-(auVar68._0_4_ * auVar54._0_4_) + auVar52._0_4_) |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar49._0_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar55._4_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._4_4_) + auVar52._4_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar49._4_4_;
        bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar55._8_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._8_4_) + auVar52._8_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar49._8_4_;
        bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar55._12_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._12_4_) + auVar52._12_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar49._12_4_;
        bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar55._16_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._16_4_) + auVar52._16_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar49._16_4_;
        bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar55._20_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._20_4_) + auVar52._20_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar49._20_4_;
        bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar55._24_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._24_4_) + auVar52._24_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar49._24_4_;
        bVar4 = SUB81(uVar30 >> 7,0);
        auVar55._28_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._28_4_) + auVar52._28_4_) |
             (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar49._28_4_;
        uVar40 = vcmpps_avx512vl(auVar55,ZEXT1632(auVar42),4);
        uVar41 = vcmpps_avx512vl(auVar50,ZEXT1632(auVar42),4);
        uVar40 = uVar40 & uVar41;
        if ((char)uVar40 != '\0') {
          auVar45 = vfnmadd213ps_avx512vl(auVar45,auVar63,auVar53);
          auVar49._0_4_ = -(auVar68._0_4_ * auVar46._0_4_) + auVar51._0_4_;
          auVar49._4_4_ = -(auVar68._0_4_ * auVar46._4_4_) + auVar51._4_4_;
          auVar49._8_4_ = -(auVar68._0_4_ * auVar46._8_4_) + auVar51._8_4_;
          auVar49._12_4_ = -(auVar68._0_4_ * auVar46._12_4_) + auVar51._12_4_;
          auVar49._16_4_ = -(auVar68._0_4_ * auVar46._16_4_) + auVar51._16_4_;
          auVar49._20_4_ = -(auVar68._0_4_ * auVar46._20_4_) + auVar51._20_4_;
          auVar49._24_4_ = -(auVar68._0_4_ * auVar46._24_4_) + auVar51._24_4_;
          auVar49._28_4_ = -(auVar68._0_4_ * auVar46._28_4_) + auVar51._28_4_;
          auVar46 = vfmadd213ps_avx512vl(auVar47,auVar44,auVar56);
          auVar44 = vfmadd213ps_avx512vl(auVar48,auVar44,auVar71);
          auVar47._0_4_ =
               (uint)(bVar3 & 1) * auVar45._0_4_ |
               (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar4 * auVar45._4_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar46._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar4 * auVar45._8_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar46._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar4 * auVar45._12_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar46._12_4_;
          bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar4 * auVar45._16_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar46._16_4_;
          bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar4 * auVar45._20_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar46._20_4_;
          bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar4 * auVar45._24_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar46._24_4_;
          bVar4 = SUB81(uVar30 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar4 * auVar45._28_4_ |
               (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar46._28_4_;
          auVar45._0_4_ =
               (uint)(bVar3 & 1) * (int)auVar49._0_4_ |
               (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar44._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar45._4_4_ =
               (uint)bVar4 * (int)auVar49._4_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar44._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar45._8_4_ =
               (uint)bVar4 * (int)auVar49._8_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar44._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar45._12_4_ =
               (uint)bVar4 * (int)auVar49._12_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar44._12_4_;
          bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
          auVar45._16_4_ =
               (uint)bVar4 * (int)auVar49._16_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar44._16_4_;
          bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
          auVar45._20_4_ =
               (uint)bVar4 * (int)auVar49._20_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar44._20_4_;
          bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
          auVar45._24_4_ =
               (uint)bVar4 * (int)auVar49._24_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar44._24_4_;
          bVar4 = SUB81(uVar30 >> 7,0);
          auVar45._28_4_ =
               (uint)bVar4 * (int)auVar49._28_4_ |
               (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar44._28_4_;
          if ((char)uVar40 == -1) {
            auVar44 = vunpcklps_avx512vl(auVar55,auVar47);
            auVar46 = vunpcklps_avx512vl(auVar45,auVar50);
            auVar48 = vunpcklpd_avx512vl(auVar44,auVar46);
            auVar44 = vunpckhpd_avx512vl(auVar44,auVar46);
            auVar46 = vunpckhps_avx512vl(auVar55,auVar47);
            auVar45 = vunpckhps_avx512vl(auVar45,auVar50);
            auVar47 = vunpcklpd_avx512vl(auVar46,auVar45);
            auVar45 = vunpckhpd_avx512vl(auVar46,auVar45);
            auVar46 = vinsertf32x4_avx512vl(auVar48,auVar44._0_16_,1);
            *pauVar38 = auVar46;
            auVar46 = vinsertf32x4_avx512vl(auVar47,auVar45._0_16_,1);
            pauVar38[1] = auVar46;
            auVar44 = vshuff64x2_avx512vl(auVar48,auVar44,3);
            pauVar38[2] = auVar44;
            auVar44 = vshuff64x2_avx512vl(auVar47,auVar45,3);
            pauVar38[3] = auVar44;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar64,uVar40,auVar55);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar51,uVar40,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar49,uVar40,auVar45);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar71,uVar40,auVar50);
          }
        }
      }
      uVar37 = uVar37 + 8;
      pauVar38 = pauVar38 + 4;
      lVar35 = lVar35 + 0x60;
    } while (uVar37 < (uVar36 & 0xfffffff8));
  }
  if ((int)uVar37 < (int)param_7) {
    auVar58 = vpbroadcastd_avx512vl();
    auVar58 = vpor_avx2(auVar58,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar59 = vpbroadcastd_avx512vl();
    uVar29 = vpcmpgtd_avx512vl(auVar59,auVar58);
    lVar35 = (longlong)(param_6 + (int)uVar37);
    pauVar38 = (undefined1 (*) [32])(param_1 + lVar35 * 0x10);
    bVar39 = (byte)uVar29;
    if (bVar39 == 0xff) {
      auVar60 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],0);
      auVar43 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],3);
      auVar61 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],0);
      auVar62 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],3);
      auVar63 = vunpcklps_avx512vl(auVar60,auVar43);
      auVar60 = vunpckhps_avx512vl(auVar60,auVar43);
      auVar43 = vunpcklps_avx512vl(auVar61,auVar62);
      auVar61 = vunpckhps_avx512vl(auVar61,auVar62);
      auVar73 = auVar61._0_16_;
      auVar44 = vunpcklpd_avx512vl(auVar63,auVar43);
      auVar43 = vunpckhpd_avx512vl(auVar63,auVar43);
      auVar46 = vunpcklpd_avx512vl(auVar60,auVar61);
      auVar60 = vunpckhpd_avx512vl(auVar60,auVar61);
    }
    else {
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar44._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar60._4_4_;
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
      auVar44._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar60._8_4_;
      auVar44._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar60._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar42 = vxorps_avx512vl(auVar42,auVar42);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar43._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar43._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar43._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar43._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
      auVar43._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar43._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar43._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar43._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar42 = vxorps_avx512vl(auVar72,auVar72);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar46._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar46._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar46._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar46._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
      auVar46._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar46._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar46._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar46._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar38 + param_2));
      auVar60._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
      auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
      auVar60._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
      auVar60._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
    }
    uVar31 = vpcmpd_avx512vl(auVar58,auVar59,5);
    bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar11 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar14 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar17 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar20 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar23 = SUB81(uVar29 >> 7,0);
    bVar5 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar12 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar15 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar18 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar21 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar24 = SUB81(uVar29 >> 7,0);
    bVar6 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar13 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar16 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar19 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar22 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar25 = SUB81(uVar29 >> 7,0);
    uVar28 = vcmpps_avx512vl(auVar60,ZEXT832(0) << 0x20,0);
    if ((byte)((byte)uVar28 | (byte)uVar31) != 0xff) {
      pauVar1 = (undefined1 (*) [32])(param_2 + lVar35 * 0xc);
      if (bVar39 == 0xff) {
        auVar61 = pauVar1[1];
        auVar62 = vblendps_avx(auVar61,*pauVar1,0x24);
        auVar63 = vpermt2ps_avx512vl(*pauVar1,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar53 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar1[2]);
        auVar61 = vpermt2ps_avx512vl(pauVar1[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar51 = vinsertf32x4_avx512vl(auVar63,auVar61._0_16_,1);
        auVar52 = vshuff64x2_avx512vl(auVar63,auVar61,3);
        auVar61 = *(undefined1 (*) [32])(param_3 + lVar35 * 0xc);
        auVar62 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar35 * 0xc);
        auVar63 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar35 * 0xc);
        auVar64 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61,auVar62);
        auVar45 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar63,auVar62);
        auVar54 = vinsertf32x4_avx512vl(auVar64,auVar45._0_16_,1);
        auVar48 = vshuff64x2_avx512vl(auVar64,auVar45,3);
        auVar61 = vblendps_avx(auVar62,auVar61,0x24);
        auVar50 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar63);
      }
      else {
        auVar42 = vxorps_avx512vl(auVar46._0_16_,auVar46._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar1 * 2));
        auVar51._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar51._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(auVar43._0_16_,auVar43._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)*pauVar1);
        auVar52._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar52._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar52._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar52._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(local_98 + (longlong)*pauVar1));
        auVar53._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
        auVar53._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar53._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
        auVar53._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        puVar2 = (undefined4 *)(param_3 + lVar35 * 0xc);
        auVar42 = vxorps_avx512vl(auVar73,auVar73);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)pauVar1));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar61 = vgatherdps_avx512vl(*puVar2);
        auVar48._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar48._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar48._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar48._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar48._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar48._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar48._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar48._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)local_98));
        auVar50._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
        auVar50._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar50._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
        auVar50._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
        auVar50._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar50._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar50._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar50._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
      }
      auVar42 = vaddss_avx512f(in_ZMM3._0_16_,ZEXT416((uint)param_5));
      auVar61 = vbroadcastss_avx512vl(auVar42);
      auVar62 = vfnmadd213ps_avx512vl(auVar54,auVar61,auVar51);
      auVar63 = vfnmadd213ps_avx512vl(auVar48,auVar61,auVar52);
      auVar32._4_4_ = (uint)bVar4 * auVar44._4_4_ | (uint)!bVar4 * iStack_11c;
      auVar32._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar32._8_4_ = (uint)bVar8 * auVar44._8_4_ | (uint)!bVar8 * iStack_118;
      auVar32._12_4_ = (uint)bVar11 * auVar44._12_4_ | (uint)!bVar11 * iStack_114;
      auVar32._16_4_ = (uint)bVar14 * auVar44._16_4_ | (uint)!bVar14 * iStack_110;
      auVar32._20_4_ = (uint)bVar17 * auVar44._20_4_ | (uint)!bVar17 * iStack_10c;
      auVar32._24_4_ = (uint)bVar20 * auVar44._24_4_ | (uint)!bVar20 * iStack_108;
      auVar32._28_4_ = (uint)bVar23 * auVar44._28_4_ | (uint)!bVar23 * iStack_104;
      auVar33._4_4_ = (uint)bVar5 * auVar43._4_4_ | (uint)!bVar5 * iStack_fc;
      auVar33._0_4_ = (uint)(bVar39 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar33._8_4_ = (uint)bVar9 * auVar43._8_4_ | (uint)!bVar9 * iStack_f8;
      auVar33._12_4_ = (uint)bVar12 * auVar43._12_4_ | (uint)!bVar12 * iStack_f4;
      auVar33._16_4_ = (uint)bVar15 * auVar43._16_4_ | (uint)!bVar15 * iStack_f0;
      auVar33._20_4_ = (uint)bVar18 * auVar43._20_4_ | (uint)!bVar18 * iStack_ec;
      auVar33._24_4_ = (uint)bVar21 * auVar43._24_4_ | (uint)!bVar21 * iStack_e8;
      auVar33._28_4_ = (uint)bVar24 * auVar43._28_4_ | (uint)!bVar24 * iStack_e4;
      auVar34._4_4_ = (uint)bVar6 * auVar46._4_4_ | (uint)!bVar6 * iStack_dc;
      auVar34._0_4_ = (uint)(bVar39 & 1) * auVar46._0_4_ | (uint)!(bool)(bVar39 & 1) * local_e0;
      auVar34._8_4_ = (uint)bVar10 * auVar46._8_4_ | (uint)!bVar10 * iStack_d8;
      auVar34._12_4_ = (uint)bVar13 * auVar46._12_4_ | (uint)!bVar13 * iStack_d4;
      auVar34._16_4_ = (uint)bVar16 * auVar46._16_4_ | (uint)!bVar16 * iStack_d0;
      auVar34._20_4_ = (uint)bVar19 * auVar46._20_4_ | (uint)!bVar19 * iStack_cc;
      auVar34._24_4_ = (uint)bVar22 * auVar46._24_4_ | (uint)!bVar22 * iStack_c8;
      auVar34._28_4_ = (uint)bVar25 * auVar46._28_4_ | (uint)!bVar25 * iStack_c4;
      auVar43 = vfnmadd213ps_avx512vl(auVar61,auVar50,auVar53);
      auVar61 = vsubps_avx512vl(auVar32,auVar62);
      auVar64 = vsubps_avx512vl(auVar33,auVar63);
      auVar44 = vsubps_avx512vl(auVar34,auVar43);
      auVar45 = vmulps_avx512vl(auVar64,auVar64);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar61,auVar61);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar44,auVar44);
      auVar46 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
      auVar47 = vsqrtps_avx512vl(auVar45);
      auVar46 = vdivps_avx512vl(auVar46,auVar47);
      auVar68._4_4_ = auVar68._0_4_;
      auVar68._8_4_ = auVar68._0_4_;
      auVar68._12_4_ = auVar68._0_4_;
      auVar68._16_4_ = auVar68._0_4_;
      auVar68._20_4_ = auVar68._0_4_;
      auVar68._24_4_ = auVar68._0_4_;
      auVar68._28_4_ = auVar68._0_4_;
      auVar47 = vfnmadd213ps_avx512vl(auVar54,auVar68,auVar51);
      param_5 = param_5 * param_5;
      auVar67._4_4_ = param_5;
      auVar67._0_4_ = param_5;
      auVar67._8_4_ = param_5;
      auVar67._12_4_ = param_5;
      auVar67._16_4_ = param_5;
      auVar67._20_4_ = param_5;
      auVar67._24_4_ = param_5;
      auVar67._28_4_ = param_5;
      uVar37 = vcmpps_avx512vl(auVar45,auVar67,1);
      auVar61 = vfmadd231ps_avx512vl(auVar62,auVar46,auVar61);
      bVar39 = (byte)uVar37;
      auVar56._4_4_ = __real_322bcc77;
      auVar56._0_4_ = __real_322bcc77;
      auVar56._8_4_ = __real_322bcc77;
      auVar56._12_4_ = __real_322bcc77;
      auVar56._16_4_ = __real_322bcc77;
      auVar56._20_4_ = __real_322bcc77;
      auVar56._24_4_ = __real_322bcc77;
      auVar56._28_4_ = __real_322bcc77;
      uVar29 = vcmpps_avx512vl(auVar45,auVar56,1);
      bVar3 = (byte)uVar29;
      auVar65._0_4_ =
           (uint)(bVar3 & 1) * auVar47._0_4_ |
           (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar61._0_4_;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar4 * auVar47._4_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar61._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar4 * auVar47._8_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar61._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar4 * auVar47._12_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar61._12_4_;
      bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar4 * auVar47._16_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar61._16_4_;
      bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar4 * auVar47._20_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar61._20_4_;
      bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar4 * auVar47._24_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar61._24_4_;
      bVar4 = SUB81(uVar29 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar4 * auVar47._28_4_ | (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar61._28_4_;
      uVar30 = vcmpps_avx512vl(auVar60,ZEXT432(0) << 0x20,4);
      uVar40 = vcmpps_avx512vl(auVar65,ZEXT432(0) << 0x20,4);
      uVar41 = vpcmpgtd_avx512vl(auVar59,auVar58);
      uVar41 = uVar30 & uVar40 & uVar41;
      if ((char)uVar41 != '\0') {
        auVar58 = vfnmadd213ps_avx512vl(auVar48,auVar68,auVar52);
        auVar59 = vfmadd213ps_avx512vl(auVar64,auVar46,auVar63);
        auVar43 = vfmadd213ps_avx512vl(auVar44,auVar46,auVar43);
        auVar66._0_4_ =
             (uint)(bVar3 & 1) * auVar58._0_4_ |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar59._0_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar66._4_4_ =
             (uint)bVar4 * auVar58._4_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar59._4_4_;
        bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar66._8_4_ =
             (uint)bVar4 * auVar58._8_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar59._8_4_;
        bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar66._12_4_ =
             (uint)bVar4 * auVar58._12_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar59._12_4_;
        bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
        auVar66._16_4_ =
             (uint)bVar4 * auVar58._16_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar59._16_4_;
        bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
        auVar66._20_4_ =
             (uint)bVar4 * auVar58._20_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar59._20_4_;
        bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
        auVar66._24_4_ =
             (uint)bVar4 * auVar58._24_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar59._24_4_;
        bVar4 = SUB81(uVar29 >> 7,0);
        auVar66._28_4_ =
             (uint)bVar4 * auVar58._28_4_ |
             (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar59._28_4_;
        auVar58._0_4_ =
             (uint)(bVar3 & 1) * (int)(-(auVar68._0_4_ * auVar50._0_4_) + auVar53._0_4_) |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar43._0_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar58._4_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._4_4_) + auVar53._4_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar43._4_4_;
        bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar58._8_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._8_4_) + auVar53._8_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar43._8_4_;
        bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar58._12_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._12_4_) + auVar53._12_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar43._12_4_;
        bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
        auVar58._16_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._16_4_) + auVar53._16_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar43._16_4_;
        bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
        auVar58._20_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._20_4_) + auVar53._20_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar43._20_4_;
        bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
        auVar58._24_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._24_4_) + auVar53._24_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar43._24_4_;
        bVar4 = SUB81(uVar29 >> 7,0);
        auVar58._28_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._28_4_) + auVar53._28_4_) |
             (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar43._28_4_;
        if ((char)uVar41 == -1) {
          auVar59 = vunpcklps_avx512vl(auVar65,auVar66);
          auVar43 = vunpcklps_avx512vl(auVar58,auVar60);
          auVar68 = vunpcklpd_avx(auVar59,auVar43);
          auVar59 = vunpckhpd_avx(auVar59,auVar43);
          auVar43 = vunpckhps_avx512vl(auVar65,auVar66);
          auVar58 = vunpckhps_avx512vl(auVar58,auVar60);
          auVar60 = vunpcklpd_avx(auVar43,auVar58);
          auVar58 = vunpckhpd_avx(auVar43,auVar58);
          auVar69._16_16_ = auVar59._0_16_;
          auVar69._0_16_ = auVar68._0_16_;
          *pauVar38 = auVar69;
          auVar70._16_16_ = auVar58._0_16_;
          auVar70._0_16_ = auVar60._0_16_;
          pauVar38[1] = auVar70;
          auVar59 = vperm2f128_avx(auVar68,auVar59,0x31);
          pauVar38[2] = auVar59;
          auVar58 = vperm2f128_avx(auVar60,auVar58,0x31);
          pauVar38[3] = auVar58;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar65);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar58);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar60);
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_avx512skx @ 1403165f0

void ApplySphericalBackstopConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCuniCuni_avx512skx
               (void)

{
  ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx512skx
            ();
  return;
}

// ApplySphericalConstraintsWithMap_avx512skx @ 140316660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithMap_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5,
               int param_6,uint param_7)

{
  int *piVar1;
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
  bool bVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined1 (*pauVar31) [32];
  undefined1 (*pauVar32) [32];
  byte bVar33;
  ulonglong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
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
  undefined1 auVar54 [64];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar55 [16];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM20 [64];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 local_38 [16];
  
  auVar50 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar49 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar48 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar55 = in_ZMM17._0_16_;
  auVar36 = in_ZMM16._0_16_;
  local_38 = in_ZMM8._0_16_;
  uVar27 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar27 = param_7;
  }
  auVar53._0_4_ = in_ZMM3._0_4_;
  if ((int)(uVar27 & 0xfffffff8) < 1) {
    uVar29 = 0;
  }
  else {
    auVar51._4_4_ = auVar53._0_4_;
    auVar51._0_4_ = auVar53._0_4_;
    auVar51._8_4_ = auVar53._0_4_;
    auVar51._12_4_ = auVar53._0_4_;
    auVar51._16_4_ = auVar53._0_4_;
    auVar51._20_4_ = auVar53._0_4_;
    auVar51._24_4_ = auVar53._0_4_;
    auVar51._28_4_ = auVar53._0_4_;
    auVar52._4_4_ = param_5;
    auVar52._0_4_ = param_5;
    auVar52._8_4_ = param_5;
    auVar52._12_4_ = param_5;
    auVar52._16_4_ = param_5;
    auVar52._20_4_ = param_5;
    auVar52._24_4_ = param_5;
    auVar52._28_4_ = param_5;
    pauVar32 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    pauVar31 = (undefined1 (*) [32])(param_2 + (longlong)param_6 * 0xc + 0x40);
    uVar30 = 0;
    auVar36 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar37 = vbroadcastss_avx512vl(ZEXT416((uint)__real_322bcc77));
    auVar55 = auVar37._0_16_;
    auVar35 = vxorps_avx512vl(in_ZMM20._0_16_,in_ZMM20._0_16_);
    uVar29 = 0;
    do {
      auVar38 = vshuff64x2_avx512vl(*pauVar32,pauVar32[2],0);
      auVar39 = vshuff64x2_avx512vl(*pauVar32,pauVar32[2],3);
      auVar40 = vshuff64x2_avx512vl(pauVar32[1],pauVar32[3],0);
      auVar41 = vshuff64x2_avx512vl(pauVar32[1],pauVar32[3],3);
      auVar42 = vunpckhps_avx512vl(auVar38,auVar39);
      auVar43 = vunpckhps_avx512vl(auVar40,auVar41);
      auVar44 = vunpckhpd_avx512vl(auVar42,auVar43);
      uVar24 = vcmpps_avx512vl(auVar44,ZEXT1632(auVar35),4);
      if ((char)uVar24 != '\0') {
        auVar42 = vunpcklpd_avx512vl(auVar42,auVar43);
        auVar38 = vunpcklps_avx512vl(auVar38,auVar39);
        auVar39 = vunpcklps_avx512vl(auVar40,auVar41);
        auVar40 = vunpckhpd_avx512vl(auVar38,auVar39);
        auVar41 = vunpcklpd_avx512vl(auVar38,auVar39);
        auVar38 = pauVar31[-1];
        auVar39 = vblendps_avx(auVar38,pauVar31[-2],0x24);
        auVar43 = vpermt2ps_avx512vl(pauVar31[-2],auVar48,auVar38);
        auVar39 = vpermt2ps_avx512vl(auVar39,auVar50,*pauVar31);
        auVar38 = vpermt2ps_avx512vl(*pauVar31,auVar49,auVar38);
        auVar45 = vinsertf32x4_avx512vl(auVar43,auVar38._0_16_,1);
        auVar38 = vshuff64x2_avx512vl(auVar43,auVar38,3);
        auVar41 = vsubps_avx512vl(auVar41,auVar45);
        auVar40 = vsubps_avx512vl(auVar40,auVar38);
        auVar42 = vsubps_avx512vl(auVar42,auVar39);
        auVar43 = vmulps_avx512vl(auVar40,auVar40);
        auVar43 = vfmadd231ps_avx512vl(auVar43,auVar41,auVar41);
        auVar43 = vfmadd231ps_avx512vl(auVar43,auVar42,auVar42);
        auVar46 = vfmadd213ps_avx512vl
                            (*(undefined1 (*) [32])(param_3 + (ulonglong)uVar30),auVar52,auVar51);
        auVar47 = vfmadd213ps_avx512vl(auVar46,auVar46,auVar37);
        uVar34 = vcmpps_avx512vl(auVar47,auVar43,1);
        uVar25 = vcmpps_avx512vl(auVar44,ZEXT1632(auVar35),4);
        uVar34 = uVar34 & uVar25;
        if ((char)uVar34 != '\0') {
          auVar43 = vsqrtps_avx512vl(auVar43);
          auVar43 = vdivps_avx512vl(auVar46,auVar43);
          auVar41 = vfmadd213ps_avx512vl(auVar41,auVar43,auVar45);
          auVar38 = vfmadd213ps_avx512vl(auVar40,auVar43,auVar38);
          auVar40 = vfmadd213ps_avx512vl(auVar42,auVar43,auVar39);
          if ((char)uVar34 == -1) {
            auVar39 = vunpcklps_avx512vl(auVar41,auVar38);
            auVar42 = vunpcklps_avx512vl(auVar40,auVar44);
            auVar43 = vunpcklpd_avx512vl(auVar39,auVar42);
            auVar39 = vunpckhpd_avx512vl(auVar39,auVar42);
            auVar38 = vunpckhps_avx512vl(auVar41,auVar38);
            auVar40 = vunpckhps_avx512vl(auVar40,auVar44);
            auVar41 = vunpcklpd_avx512vl(auVar38,auVar40);
            auVar38 = vunpckhpd_avx512vl(auVar38,auVar40);
            auVar40 = vinsertf32x4_avx512vl(auVar43,auVar39._0_16_,1);
            *pauVar32 = auVar40;
            auVar40 = vinsertf32x4_avx512vl(auVar41,auVar38._0_16_,1);
            pauVar32[1] = auVar40;
            auVar39 = vshuff64x2_avx512vl(auVar43,auVar39,3);
            pauVar32[2] = auVar39;
            auVar38 = vshuff64x2_avx512vl(auVar41,auVar38,3);
            pauVar32[3] = auVar38;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar32) + auVar52,uVar34,auVar41);
            vscatterdps_avx512vl(ZEXT832(pauVar32) + in_ZMM3._0_32_,uVar34,auVar38);
            vscatterdps_avx512vl(ZEXT832(pauVar32) + auVar49,uVar34,auVar40);
            vscatterdps_avx512vl(ZEXT832(pauVar32) + auVar39,uVar34,auVar44);
          }
        }
      }
      uVar29 = uVar29 + 8;
      uVar30 = uVar30 + 0x20;
      pauVar32 = pauVar32 + 4;
      pauVar31 = pauVar31 + 3;
    } while (uVar29 < (uVar27 & 0xfffffff8));
  }
  iVar28 = (int)uVar29;
  if (iVar28 < (int)param_7) {
    auVar48 = vpbroadcastd_avx512vl();
    auVar48 = vpor_avx2(auVar48,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar49 = vpbroadcastd_avx512vl();
    uVar29 = vpcmpgtd_avx512vl(auVar49,auVar48);
    pauVar31 = (undefined1 (*) [32])(param_1 + (longlong)(param_6 + iVar28) * 0x10);
    bVar33 = (byte)uVar29;
    if (bVar33 == 0xff) {
      auVar50 = vshuff64x2_avx512vl(*pauVar31,pauVar31[2],0);
      auVar37 = vshuff64x2_avx512vl(*pauVar31,pauVar31[2],3);
      auVar51 = vshuff64x2_avx512vl(pauVar31[1],pauVar31[3],0);
      auVar52 = vshuff64x2_avx512vl(pauVar31[1],pauVar31[3],3);
      auVar38 = vunpcklps_avx512vl(auVar50,auVar37);
      auVar50 = vunpckhps_avx512vl(auVar50,auVar37);
      auVar37 = vunpcklps_avx512vl(auVar51,auVar52);
      auVar51 = vunpckhps_avx512vl(auVar51,auVar52);
      auVar39 = vunpcklpd_avx512vl(auVar38,auVar37);
      auVar38 = vunpckhpd_avx512vl(auVar38,auVar37);
      auVar37 = vunpcklpd_avx512vl(auVar50,auVar51);
      auVar50 = vunpckhpd_avx512vl(auVar50,auVar51);
    }
    else {
      auVar50 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar31 * 2));
      auVar39._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar50._4_4_;
      auVar39._0_4_ = (uint)(bVar33 & 1) * auVar50._0_4_;
      auVar39._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar50._8_4_;
      auVar39._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar50._12_4_;
      auVar39._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar50._16_4_;
      auVar39._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar50._20_4_;
      auVar39._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar50._24_4_;
      auVar39._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar50._28_4_;
      auVar36 = vxorps_avx512vl(auVar36,auVar36);
      auVar50 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar31 * 2));
      auVar38._0_4_ = (uint)(bVar33 & 1) * auVar50._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar36._0_4_
      ;
      bVar2 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar38._4_4_ = (uint)bVar2 * auVar50._4_4_ | (uint)!bVar2 * auVar36._4_4_;
      bVar2 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar38._8_4_ = (uint)bVar2 * auVar50._8_4_ | (uint)!bVar2 * auVar36._8_4_;
      bVar2 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar38._12_4_ = (uint)bVar2 * auVar50._12_4_ | (uint)!bVar2 * auVar36._12_4_;
      auVar38._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar50._16_4_;
      auVar38._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar50._20_4_;
      auVar38._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar50._24_4_;
      auVar38._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar50._28_4_;
      auVar36 = vxorps_avx512vl(auVar55,auVar55);
      auVar50 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar31 * 2));
      auVar37._0_4_ = (uint)(bVar33 & 1) * auVar50._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar36._0_4_
      ;
      bVar2 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar37._4_4_ = (uint)bVar2 * auVar50._4_4_ | (uint)!bVar2 * auVar36._4_4_;
      bVar2 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar37._8_4_ = (uint)bVar2 * auVar50._8_4_ | (uint)!bVar2 * auVar36._8_4_;
      bVar2 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar37._12_4_ = (uint)bVar2 * auVar50._12_4_ | (uint)!bVar2 * auVar36._12_4_;
      auVar37._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar50._16_4_;
      auVar37._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar50._20_4_;
      auVar37._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar50._24_4_;
      auVar37._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar50._28_4_;
      auVar51 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar31 + param_2));
      auVar50._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar51._4_4_;
      auVar50._0_4_ = (uint)(bVar33 & 1) * auVar51._0_4_;
      auVar50._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar51._8_4_;
      auVar50._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar51._12_4_;
      auVar50._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar51._16_4_;
      auVar50._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar51._20_4_;
      auVar50._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar51._24_4_;
      auVar50._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar51._28_4_;
    }
    uVar26 = vpcmpd_avx512vl(auVar48,auVar49,5);
    bVar2 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar9 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar12 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar15 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar18 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar21 = SUB81(uVar29 >> 7,0);
    bVar3 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar10 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar13 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar16 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar19 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar22 = SUB81(uVar29 >> 7,0);
    bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar11 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar14 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar17 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar20 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar23 = SUB81(uVar29 >> 7,0);
    auVar54 = ZEXT1664((undefined1  [16])0x0);
    uVar24 = vcmpps_avx512vl(auVar50,auVar54._0_32_,0);
    if ((byte)((byte)uVar24 | (byte)uVar26) != 0xff) {
      pauVar32 = (undefined1 (*) [32])(param_2 + (longlong)(param_6 + iVar28) * 0xc);
      if (bVar33 == 0xff) {
        auVar48 = pauVar32[1];
        auVar49 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,*pauVar32,auVar48);
        auVar51 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,pauVar32[2],auVar48);
        auVar40 = vinsertf32x4_avx512vl(auVar49,auVar51._0_16_,1);
        auVar49 = vshuff64x2_avx512vl(auVar49,auVar51,3);
        auVar48 = vblendps_avx(auVar48,*pauVar32,0x24);
        auVar48 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar48,pauVar32[2]);
      }
      else {
        auVar48 = vgatherdps_avx512vl(*(undefined4 *)*pauVar32);
        auVar40._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar48._4_4_;
        auVar40._0_4_ = (uint)(bVar33 & 1) * auVar48._0_4_;
        bVar8 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar40._8_4_ = (uint)bVar8 * auVar48._8_4_ | (uint)!bVar8 * auVar54._8_4_;
        bVar8 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar40._12_4_ = (uint)bVar8 * auVar48._12_4_ | (uint)!bVar8 * auVar54._12_4_;
        auVar40._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar48._16_4_;
        auVar40._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar48._20_4_;
        auVar40._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar48._24_4_;
        auVar40._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar48._28_4_;
        auVar48 = vgatherdps_avx512vl(*(undefined4 *)(local_38 + (longlong)*pauVar32));
        auVar49._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar48._4_4_;
        auVar49._0_4_ = (uint)(bVar33 & 1) * auVar48._0_4_;
        auVar49._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar48._8_4_;
        auVar49._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar48._12_4_;
        auVar49._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar48._16_4_;
        auVar49._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar48._20_4_;
        auVar49._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar48._24_4_;
        auVar49._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar48._28_4_;
        auVar36 = vxorps_avx512vl(auVar38._0_16_,auVar38._0_16_);
        auVar51 = vgatherdps_avx512vl(*(undefined4 *)(local_38 + (longlong)*pauVar32));
        auVar48._0_4_ =
             (uint)(bVar33 & 1) * auVar51._0_4_ | (uint)!(bool)(bVar33 & 1) * auVar36._0_4_;
        bVar8 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar48._4_4_ = (uint)bVar8 * auVar51._4_4_ | (uint)!bVar8 * auVar36._4_4_;
        bVar8 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar48._8_4_ = (uint)bVar8 * auVar51._8_4_ | (uint)!bVar8 * auVar36._8_4_;
        bVar8 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar48._12_4_ = (uint)bVar8 * auVar51._12_4_ | (uint)!bVar8 * auVar36._12_4_;
        auVar48._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar51._16_4_;
        auVar48._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar51._20_4_;
        auVar48._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar51._24_4_;
        auVar48._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar51._28_4_;
      }
      auVar41._4_4_ = (uint)bVar2 * auVar39._4_4_ | (uint)!bVar2 * iStack_bc;
      auVar41._0_4_ = (uint)(bVar33 & 1) * auVar39._0_4_ | (uint)!(bool)(bVar33 & 1) * local_c0;
      auVar41._8_4_ = (uint)bVar5 * auVar39._8_4_ | (uint)!bVar5 * iStack_b8;
      auVar41._12_4_ = (uint)bVar9 * auVar39._12_4_ | (uint)!bVar9 * iStack_b4;
      auVar41._16_4_ = (uint)bVar12 * auVar39._16_4_ | (uint)!bVar12 * iStack_b0;
      auVar41._20_4_ = (uint)bVar15 * auVar39._20_4_ | (uint)!bVar15 * iStack_ac;
      auVar41._24_4_ = (uint)bVar18 * auVar39._24_4_ | (uint)!bVar18 * iStack_a8;
      auVar41._28_4_ = (uint)bVar21 * auVar39._28_4_ | (uint)!bVar21 * iStack_a4;
      auVar42._4_4_ = (uint)bVar3 * auVar38._4_4_ | (uint)!bVar3 * iStack_9c;
      auVar42._0_4_ = (uint)(bVar33 & 1) * auVar38._0_4_ | (uint)!(bool)(bVar33 & 1) * local_a0;
      auVar42._8_4_ = (uint)bVar6 * auVar38._8_4_ | (uint)!bVar6 * iStack_98;
      auVar42._12_4_ = (uint)bVar10 * auVar38._12_4_ | (uint)!bVar10 * iStack_94;
      auVar42._16_4_ = (uint)bVar13 * auVar38._16_4_ | (uint)!bVar13 * iStack_90;
      auVar42._20_4_ = (uint)bVar16 * auVar38._20_4_ | (uint)!bVar16 * iStack_8c;
      auVar42._24_4_ = (uint)bVar19 * auVar38._24_4_ | (uint)!bVar19 * iStack_88;
      auVar42._28_4_ = (uint)bVar22 * auVar38._28_4_ | (uint)!bVar22 * iStack_84;
      auVar43._4_4_ = (uint)bVar4 * auVar37._4_4_ | (uint)!bVar4 * iStack_7c;
      auVar43._0_4_ = (uint)(bVar33 & 1) * auVar37._0_4_ | (uint)!(bool)(bVar33 & 1) * local_80;
      auVar43._8_4_ = (uint)bVar7 * auVar37._8_4_ | (uint)!bVar7 * iStack_78;
      auVar43._12_4_ = (uint)bVar11 * auVar37._12_4_ | (uint)!bVar11 * iStack_74;
      auVar43._16_4_ = (uint)bVar14 * auVar37._16_4_ | (uint)!bVar14 * iStack_70;
      auVar43._20_4_ = (uint)bVar17 * auVar37._20_4_ | (uint)!bVar17 * iStack_6c;
      auVar43._24_4_ = (uint)bVar20 * auVar37._24_4_ | (uint)!bVar20 * iStack_68;
      auVar43._28_4_ = (uint)bVar23 * auVar37._28_4_ | (uint)!bVar23 * iStack_64;
      auVar37 = vsubps_avx512vl(auVar41,auVar40);
      auVar51 = vsubps_avx512vl(auVar42,auVar49);
      auVar52 = vsubps_avx512vl(auVar43,auVar48);
      auVar38 = vmulps_avx512vl(auVar51,auVar51);
      auVar38 = vfmadd231ps_avx512vl(auVar38,auVar37,auVar37);
      auVar38 = vfmadd231ps_avx512vl(auVar38,auVar52,auVar52);
      auVar53._4_4_ = auVar53._0_4_;
      auVar53._8_4_ = auVar53._0_4_;
      auVar53._12_4_ = auVar53._0_4_;
      auVar53._16_4_ = auVar53._0_4_;
      auVar53._20_4_ = auVar53._0_4_;
      auVar53._24_4_ = auVar53._0_4_;
      auVar53._28_4_ = auVar53._0_4_;
      auVar39 = vbroadcastss_avx512vl(ZEXT416(param_5));
      piVar1 = (int *)(param_3 + (iVar28 << 2));
      auVar44._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * piVar1[1];
      auVar44._0_4_ = (uint)(bVar33 & 1) * *piVar1;
      auVar44._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * piVar1[2];
      auVar44._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * piVar1[3];
      auVar44._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * piVar1[4];
      auVar44._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * piVar1[5];
      auVar44._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * piVar1[6];
      auVar44._28_4_ = (uint)(byte)(uVar29 >> 7) * piVar1[7];
      auVar53 = vfmadd213ps_avx512vl(auVar44,auVar39,auVar53);
      uVar24 = vcmpps_avx512vl(auVar50,ZEXT432(0) << 0x20,4);
      auVar45._0_4_ = auVar53._0_4_ * auVar53._0_4_ + __real_322bcc77;
      auVar45._4_4_ = auVar53._4_4_ * auVar53._4_4_ + __real_322bcc77;
      auVar45._8_4_ = auVar53._8_4_ * auVar53._8_4_ + __real_322bcc77;
      auVar45._12_4_ = auVar53._12_4_ * auVar53._12_4_ + __real_322bcc77;
      auVar45._16_4_ = auVar53._16_4_ * auVar53._16_4_ + __real_322bcc77;
      auVar45._20_4_ = auVar53._20_4_ * auVar53._20_4_ + __real_322bcc77;
      auVar45._24_4_ = auVar53._24_4_ * auVar53._24_4_ + __real_322bcc77;
      auVar45._28_4_ = auVar53._28_4_ * auVar53._28_4_ + __real_322bcc77;
      uVar26 = vcmpps_avx512vl(auVar45,auVar38,1);
      bVar33 = (byte)uVar24 & (byte)uVar26 & bVar33;
      uVar29 = (ulonglong)bVar33;
      if (bVar33 != 0) {
        auVar38 = vsqrtps_avx512vl(auVar38);
        auVar53 = vdivps_avx(auVar53,auVar38);
        auVar37 = vfmadd213ps_avx512vl(auVar37,auVar53,auVar40);
        auVar49 = vfmadd213ps_avx512vl(auVar51,auVar53,auVar49);
        auVar48 = vfmadd213ps_avx512vl(auVar52,auVar53,auVar48);
        if (bVar33 == 0xff) {
          auVar52 = vunpcklps_avx512vl(auVar37,auVar49);
          auVar53 = vunpcklps_avx(auVar48,auVar50);
          auVar51 = vunpcklpd_avx(auVar52,auVar53);
          auVar53 = vunpckhpd_avx(auVar52,auVar53);
          auVar37 = vunpckhps_avx512vl(auVar37,auVar49);
          auVar48 = vunpckhps_avx(auVar48,auVar50);
          auVar49 = vunpcklpd_avx(auVar37,auVar48);
          auVar48 = vunpckhpd_avx(auVar37,auVar48);
          auVar46._16_16_ = auVar53._0_16_;
          auVar46._0_16_ = auVar51._0_16_;
          *pauVar31 = auVar46;
          auVar47._16_16_ = auVar48._0_16_;
          auVar47._0_16_ = auVar49._0_16_;
          pauVar31[1] = auVar47;
          auVar50 = vperm2f128_avx(auVar51,auVar53,0x31);
          pauVar31[2] = auVar50;
          auVar48 = vperm2f128_avx(auVar49,auVar48,0x31);
          pauVar31[3] = auVar48;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar31) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar29,
                     auVar37);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar31) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar29,
                     auVar49);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar31) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar29,
                     auVar48);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar31) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar29,
                     auVar50);
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraintsWithoutMap_avx512skx @ 140316c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalConstraintsWithoutMap_avx512skx
               (longlong param_1,longlong param_2,undefined8 param_3,int param_4,uint param_5)

{
  bool bVar1;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [32];
  longlong lVar26;
  longlong unaff_RBX;
  undefined1 (*pauVar27) [32];
  uint uVar28;
  ulonglong uVar29;
  undefined1 (*pauVar30) [32];
  byte bVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  float fVar48;
  undefined1 in_ZMM2 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 in_ZMM7 [64];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar52 [16];
  undefined1 in_ZMM21 [64];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  auVar45 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar44 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar43 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar52 = in_ZMM21._0_16_;
  auVar34 = in_ZMM16._0_16_;
  local_28 = in_ZMM8._0_16_;
  local_38 = in_ZMM7._0_16_;
  uVar28 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar28 = param_5;
  }
  fVar48 = in_ZMM2._0_4_;
  if ((int)(uVar28 & 0xfffffff8) < 1) {
    uVar29 = 0;
  }
  else {
    auVar46._4_4_ = fVar48;
    auVar46._0_4_ = fVar48;
    auVar46._8_4_ = fVar48;
    auVar46._12_4_ = fVar48;
    auVar46._16_4_ = fVar48;
    auVar46._20_4_ = fVar48;
    auVar46._24_4_ = fVar48;
    auVar46._28_4_ = fVar48;
    auVar47._0_4_ = fVar48 * fVar48 + __real_322bcc77;
    auVar47._4_4_ = auVar47._0_4_;
    auVar47._8_4_ = auVar47._0_4_;
    auVar47._12_4_ = auVar47._0_4_;
    auVar47._16_4_ = auVar47._0_4_;
    auVar47._20_4_ = auVar47._0_4_;
    auVar47._24_4_ = auVar47._0_4_;
    auVar47._28_4_ = auVar47._0_4_;
    pauVar30 = (undefined1 (*) [32])((longlong)param_4 * 0x10 + param_1);
    pauVar27 = (undefined1 (*) [32])(param_2 + (longlong)param_4 * 0xc + 0x40);
    uVar29 = 0;
    auVar49._0_12_ = ZEXT812(0);
    auVar49._12_4_ = 0;
    auVar34 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    do {
      auVar35 = vshuff64x2_avx512vl(*pauVar30,pauVar30[2],0);
      auVar36 = vshuff64x2_avx512vl(*pauVar30,pauVar30[2],3);
      auVar37 = vshuff64x2_avx512vl(pauVar30[1],pauVar30[3],0);
      auVar38 = vshuff64x2_avx512vl(pauVar30[1],pauVar30[3],3);
      auVar39 = vunpckhps_avx512vl(auVar35,auVar36);
      auVar40 = vunpckhps_avx512vl(auVar37,auVar38);
      auVar41 = vunpckhpd_avx512vl(auVar39,auVar40);
      auVar52 = auVar41._0_16_;
      uVar23 = vcmpps_avx512vl(auVar41,ZEXT1632(auVar49),4);
      if ((char)uVar23 != '\0') {
        auVar39 = vunpcklpd_avx512vl(auVar39,auVar40);
        auVar36 = vunpcklps_avx512vl(auVar35,auVar36);
        auVar37 = vunpcklps_avx512vl(auVar37,auVar38);
        auVar38 = vunpckhpd_avx512vl(auVar36,auVar37);
        auVar35 = pauVar27[-1];
        auVar37 = vunpcklpd_avx512vl(auVar36,auVar37);
        auVar36 = vblendps_avx(auVar35,pauVar27[-2],0x24);
        auVar40 = vpermt2ps_avx512vl(pauVar27[-2],auVar43,auVar35);
        auVar36 = vpermt2ps_avx512vl(auVar36,auVar45,*pauVar27);
        auVar35 = vpermt2ps_avx512vl(*pauVar27,auVar44,auVar35);
        auVar42 = vinsertf32x4_avx512vl(auVar40,auVar35._0_16_,1);
        auVar35 = vshuff64x2_avx512vl(auVar40,auVar35,3);
        auVar37 = vsubps_avx512vl(auVar37,auVar42);
        auVar38 = vsubps_avx512vl(auVar38,auVar35);
        auVar39 = vsubps_avx512vl(auVar39,auVar36);
        auVar40 = vmulps_avx512vl(auVar38,auVar38);
        auVar40 = vfmadd231ps_avx512vl(auVar40,auVar37,auVar37);
        auVar40 = vfmadd231ps_avx512vl(auVar40,auVar39,auVar39);
        uVar32 = vcmpps_avx512vl(auVar47,auVar40,1);
        uVar33 = vcmpps_avx512vl(auVar41,ZEXT1632(auVar49),4);
        uVar32 = uVar32 & uVar33;
        if ((char)uVar32 != '\0') {
          auVar40 = vsqrtps_avx512vl(auVar40);
          auVar40 = vdivps_avx512vl(auVar46,auVar40);
          auVar37 = vfmadd213ps_avx512vl(auVar37,auVar40,auVar42);
          auVar35 = vfmadd213ps_avx512vl(auVar38,auVar40,auVar35);
          auVar36 = vfmadd213ps_avx512vl(auVar39,auVar40,auVar36);
          if ((char)uVar32 == -1) {
            auVar38 = vunpcklps_avx512vl(auVar37,auVar35);
            auVar39 = vunpcklps_avx512vl(auVar36,auVar41);
            auVar40 = vunpcklpd_avx512vl(auVar38,auVar39);
            auVar38 = vunpckhpd_avx512vl(auVar38,auVar39);
            auVar35 = vunpckhps_avx512vl(auVar37,auVar35);
            auVar36 = vunpckhps_avx512vl(auVar36,auVar41);
            auVar37 = vunpcklpd_avx512vl(auVar35,auVar36);
            auVar35 = vunpckhpd_avx512vl(auVar35,auVar36);
            auVar36 = vinsertf32x4_avx512vl(auVar40,auVar38._0_16_,1);
            *pauVar30 = auVar36;
            auVar36 = vinsertf32x4_avx512vl(auVar37,auVar35._0_16_,1);
            pauVar30[1] = auVar36;
            auVar36 = vshuff64x2_avx512vl(auVar40,auVar38,3);
            pauVar30[2] = auVar36;
            auVar35 = vshuff64x2_avx512vl(auVar37,auVar35,3);
            auVar52 = auVar35._0_16_;
            pauVar30[3] = auVar35;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar30) + auVar47,uVar32,auVar37);
            vscatterdps_avx512vl(ZEXT832(pauVar30) + in_ZMM2._0_32_,uVar32,auVar35);
            vscatterdps_avx512vl(ZEXT832(pauVar30) + ZEXT1632(auVar49),uVar32,auVar36);
            vscatterdps_avx512vl(ZEXT832(pauVar30) + auVar43,uVar32,auVar41);
          }
        }
      }
      uVar29 = uVar29 + 8;
      pauVar30 = pauVar30 + 4;
      pauVar27 = pauVar27 + 3;
    } while (uVar29 < (uVar28 & 0xfffffff8));
  }
  if ((int)uVar29 < (int)param_5) {
    auVar43 = vpbroadcastd_avx512vl();
    auVar43 = vpor_avx2(auVar43,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar44 = vpbroadcastd_avx512vl();
    uVar32 = vpcmpgtd_avx512vl(auVar44,auVar43);
    lVar26 = (longlong)(param_4 + (int)uVar29);
    pauVar27 = (undefined1 (*) [32])(param_1 + lVar26 * 0x10);
    bVar31 = (byte)uVar32;
    if (bVar31 == 0xff) {
      auVar46 = vshuff64x2_avx512vl(*pauVar27,pauVar27[2],0);
      auVar45 = vperm2f128_avx(*pauVar27,pauVar27[2],0x31);
      auVar47 = vshuff64x2_avx512vl(pauVar27[1],pauVar27[3],0);
      auVar35 = vshuff64x2_avx512vl(pauVar27[1],pauVar27[3],3);
      auVar36 = vunpcklps_avx512vl(auVar46,auVar45);
      auVar45 = vunpckhps_avx512vl(auVar46,auVar45);
      auVar46 = vunpcklps_avx512vl(auVar47,auVar35);
      auVar34 = auVar46._0_16_;
      auVar47 = vunpckhps_avx512vl(auVar47,auVar35);
      auVar37 = vunpcklpd_avx512vl(auVar36,auVar46);
      auVar36 = vunpckhpd_avx512vl(auVar36,auVar46);
      auVar35 = vunpcklpd_avx512vl(auVar45,auVar47);
      auVar45 = vunpckhpd_avx512vl(auVar45,auVar47);
    }
    else {
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + unaff_RBX));
      auVar37._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar45._4_4_;
      auVar37._0_4_ = (uint)(bVar31 & 1) * auVar45._0_4_;
      auVar37._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar45._8_4_;
      auVar37._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar45._12_4_;
      auVar37._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar45._16_4_;
      auVar37._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar45._20_4_;
      auVar37._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar45._24_4_;
      auVar37._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar45._28_4_;
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + unaff_RBX));
      auVar36._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar45._4_4_;
      auVar36._0_4_ = (uint)(bVar31 & 1) * auVar45._0_4_;
      auVar36._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar45._8_4_;
      auVar36._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar45._12_4_;
      auVar36._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar45._16_4_;
      auVar36._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar45._20_4_;
      auVar36._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar45._24_4_;
      auVar36._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar45._28_4_;
      auVar34 = vxorps_avx512vl(auVar34,auVar34);
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar27 + unaff_RBX));
      auVar35._0_4_ = (uint)(bVar31 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar31 & 1) * auVar34._0_4_
      ;
      bVar1 = (bool)((byte)(uVar32 >> 1) & 1);
      auVar35._4_4_ = (uint)bVar1 * auVar45._4_4_ | (uint)!bVar1 * auVar34._4_4_;
      bVar1 = (bool)((byte)(uVar32 >> 2) & 1);
      auVar35._8_4_ = (uint)bVar1 * auVar45._8_4_ | (uint)!bVar1 * auVar34._8_4_;
      bVar1 = (bool)((byte)(uVar32 >> 3) & 1);
      auVar35._12_4_ = (uint)bVar1 * auVar45._12_4_ | (uint)!bVar1 * auVar34._12_4_;
      auVar35._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar45._16_4_;
      auVar35._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar45._20_4_;
      auVar35._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar45._24_4_;
      auVar35._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar45._28_4_;
      auVar34 = __ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c._0_16_;
      auVar46 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar27 * 2));
      auVar45._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar46._4_4_;
      auVar45._0_4_ = (uint)(bVar31 & 1) * auVar46._0_4_;
      auVar45._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar46._8_4_;
      auVar45._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar46._12_4_;
      auVar45._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar46._16_4_;
      auVar45._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar46._20_4_;
      auVar45._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar46._24_4_;
      auVar45._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar46._28_4_;
    }
    uVar24 = vpcmpd_avx512vl(auVar43,auVar44,5);
    bVar1 = (bool)((byte)(uVar32 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar32 >> 2) & 1);
    bVar8 = (bool)((byte)(uVar32 >> 3) & 1);
    bVar11 = (bool)((byte)(uVar32 >> 4) & 1);
    bVar14 = (bool)((byte)(uVar32 >> 5) & 1);
    bVar17 = (bool)((byte)(uVar32 >> 6) & 1);
    bVar20 = SUB81(uVar32 >> 7,0);
    bVar2 = (bool)((byte)(uVar32 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar32 >> 2) & 1);
    bVar9 = (bool)((byte)(uVar32 >> 3) & 1);
    bVar12 = (bool)((byte)(uVar32 >> 4) & 1);
    bVar15 = (bool)((byte)(uVar32 >> 5) & 1);
    bVar18 = (bool)((byte)(uVar32 >> 6) & 1);
    bVar21 = SUB81(uVar32 >> 7,0);
    bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar32 >> 2) & 1);
    bVar10 = (bool)((byte)(uVar32 >> 3) & 1);
    bVar13 = (bool)((byte)(uVar32 >> 4) & 1);
    bVar16 = (bool)((byte)(uVar32 >> 5) & 1);
    bVar19 = (bool)((byte)(uVar32 >> 6) & 1);
    bVar22 = SUB81(uVar32 >> 7,0);
    uVar23 = vcmpps_avx512vl(auVar45,ZEXT832(0) << 0x20,0);
    if ((byte)((byte)uVar23 | (byte)uVar24) != 0xff) {
      pauVar30 = (undefined1 (*) [32])(param_2 + lVar26 * 0xc);
      if (bVar31 == 0xff) {
        auVar46 = pauVar30[1];
        auVar47 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,*pauVar30,auVar46);
        auVar38 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,pauVar30[2],auVar46);
        auVar39 = vinsertf32x4_avx512vl(auVar47,auVar38._0_16_,1);
        auVar40 = vshuff64x2_avx512vl(auVar47,auVar38,3);
        auVar46 = vblendps_avx(auVar46,*pauVar30,0x24);
        auVar38 = vpermi2ps_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar46,pauVar30[2]);
      }
      else {
        auVar46 = vgatherdps_avx512vl(*(undefined4 *)(local_38 + (longlong)*pauVar30));
        auVar39._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar46._4_4_;
        auVar39._0_4_ = (uint)(bVar31 & 1) * auVar46._0_4_;
        auVar39._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar46._8_4_;
        auVar39._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar46._12_4_;
        auVar39._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar46._16_4_;
        auVar39._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar46._20_4_;
        auVar39._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar46._24_4_;
        auVar39._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar46._28_4_;
        auVar46 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar30 * 2));
        auVar40._4_4_ = (uint)((byte)(uVar32 >> 1) & 1) * auVar46._4_4_;
        auVar40._0_4_ = (uint)(bVar31 & 1) * auVar46._0_4_;
        auVar40._8_4_ = (uint)((byte)(uVar32 >> 2) & 1) * auVar46._8_4_;
        auVar40._12_4_ = (uint)((byte)(uVar32 >> 3) & 1) * auVar46._12_4_;
        auVar40._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar46._16_4_;
        auVar40._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar46._20_4_;
        auVar40._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar46._24_4_;
        auVar40._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar46._28_4_;
        auVar34 = vxorps_avx512vl(auVar34,auVar34);
        auVar46 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar30 * 2));
        auVar38._0_4_ =
             (uint)(bVar31 & 1) * auVar46._0_4_ | (uint)!(bool)(bVar31 & 1) * auVar34._0_4_;
        bVar4 = (bool)((byte)(uVar32 >> 1) & 1);
        auVar38._4_4_ = (uint)bVar4 * auVar46._4_4_ | (uint)!bVar4 * auVar34._4_4_;
        bVar4 = (bool)((byte)(uVar32 >> 2) & 1);
        auVar38._8_4_ = (uint)bVar4 * auVar46._8_4_ | (uint)!bVar4 * auVar34._8_4_;
        bVar4 = (bool)((byte)(uVar32 >> 3) & 1);
        auVar38._12_4_ = (uint)bVar4 * auVar46._12_4_ | (uint)!bVar4 * auVar34._12_4_;
        auVar38._16_4_ = (uint)((byte)(uVar32 >> 4) & 1) * auVar46._16_4_;
        auVar38._20_4_ = (uint)((byte)(uVar32 >> 5) & 1) * auVar46._20_4_;
        auVar38._24_4_ = (uint)((byte)(uVar32 >> 6) & 1) * auVar46._24_4_;
        auVar38._28_4_ = (uint)(byte)(uVar32 >> 7) * auVar46._28_4_;
      }
      auVar41._4_4_ = (uint)bVar1 * auVar37._4_4_ | (uint)!bVar1 * iStack_bc;
      auVar41._0_4_ = (uint)(bVar31 & 1) * auVar37._0_4_ | (uint)!(bool)(bVar31 & 1) * local_c0;
      auVar41._8_4_ = (uint)bVar5 * auVar37._8_4_ | (uint)!bVar5 * iStack_b8;
      auVar41._12_4_ = (uint)bVar8 * auVar37._12_4_ | (uint)!bVar8 * iStack_b4;
      auVar41._16_4_ = (uint)bVar11 * auVar37._16_4_ | (uint)!bVar11 * iStack_b0;
      auVar41._20_4_ = (uint)bVar14 * auVar37._20_4_ | (uint)!bVar14 * iStack_ac;
      auVar41._24_4_ = (uint)bVar17 * auVar37._24_4_ | (uint)!bVar17 * iStack_a8;
      auVar41._28_4_ = (uint)bVar20 * auVar37._28_4_ | (uint)!bVar20 * iStack_a4;
      auVar42._4_4_ = (uint)bVar2 * auVar36._4_4_ | (uint)!bVar2 * iStack_9c;
      auVar42._0_4_ = (uint)(bVar31 & 1) * auVar36._0_4_ | (uint)!(bool)(bVar31 & 1) * local_a0;
      auVar42._8_4_ = (uint)bVar6 * auVar36._8_4_ | (uint)!bVar6 * iStack_98;
      auVar42._12_4_ = (uint)bVar9 * auVar36._12_4_ | (uint)!bVar9 * iStack_94;
      auVar42._16_4_ = (uint)bVar12 * auVar36._16_4_ | (uint)!bVar12 * iStack_90;
      auVar42._20_4_ = (uint)bVar15 * auVar36._20_4_ | (uint)!bVar15 * iStack_8c;
      auVar42._24_4_ = (uint)bVar18 * auVar36._24_4_ | (uint)!bVar18 * iStack_88;
      auVar42._28_4_ = (uint)bVar21 * auVar36._28_4_ | (uint)!bVar21 * iStack_84;
      auVar25._4_4_ = (uint)bVar3 * auVar35._4_4_ | (uint)!bVar3 * iStack_7c;
      auVar25._0_4_ = (uint)(bVar31 & 1) * auVar35._0_4_ | (uint)!(bool)(bVar31 & 1) * local_80;
      auVar25._8_4_ = (uint)bVar7 * auVar35._8_4_ | (uint)!bVar7 * iStack_78;
      auVar25._12_4_ = (uint)bVar10 * auVar35._12_4_ | (uint)!bVar10 * iStack_74;
      auVar25._16_4_ = (uint)bVar13 * auVar35._16_4_ | (uint)!bVar13 * iStack_70;
      auVar25._20_4_ = (uint)bVar16 * auVar35._20_4_ | (uint)!bVar16 * iStack_6c;
      auVar25._24_4_ = (uint)bVar19 * auVar35._24_4_ | (uint)!bVar19 * iStack_68;
      auVar25._28_4_ = (uint)bVar22 * auVar35._28_4_ | (uint)!bVar22 * iStack_64;
      auVar46 = vsubps_avx512vl(auVar41,auVar39);
      auVar47 = vsubps_avx512vl(auVar42,auVar40);
      auVar35 = vsubps_avx512vl(auVar25,auVar38);
      auVar36 = vmulps_avx512vl(auVar47,auVar47);
      auVar36 = vfmadd231ps_avx512vl(auVar36,auVar46,auVar46);
      auVar34 = vxorps_avx512vl(auVar52,auVar52);
      uVar29 = vcmpps_avx512vl(auVar45,ZEXT1632(auVar34),4);
      auVar36 = vfmadd231ps_avx512vl(auVar36,auVar35,auVar35);
      auVar34 = vfmadd231ss_avx512f(ZEXT416((uint)__real_322bcc77),in_ZMM2._0_16_,in_ZMM2._0_16_);
      auVar37 = vbroadcastss_avx512vl(auVar34);
      uVar32 = vcmpps_avx512vl(auVar37,auVar36,1);
      uVar33 = vpcmpgtd_avx512vl(auVar44,auVar43);
      uVar33 = uVar29 & uVar32 & uVar33;
      if ((char)uVar33 != '\0') {
        auVar43 = vsqrtps_avx512vl(auVar36);
        auVar44._4_4_ = fVar48;
        auVar44._0_4_ = fVar48;
        auVar44._8_4_ = fVar48;
        auVar44._12_4_ = fVar48;
        auVar44._16_4_ = fVar48;
        auVar44._20_4_ = fVar48;
        auVar44._24_4_ = fVar48;
        auVar44._28_4_ = fVar48;
        auVar43 = vdivps_avx(auVar44,auVar43);
        auVar44 = vfmadd213ps_avx512vl(auVar46,auVar43,auVar39);
        auVar46 = vfmadd213ps_avx512vl(auVar47,auVar43,auVar40);
        auVar43 = vfmadd213ps_avx512vl(auVar35,auVar43,auVar38);
        if ((char)uVar33 == -1) {
          auVar47 = vunpcklps_avx512vl(auVar44,auVar46);
          auVar36 = vunpcklps_avx512vl(auVar43,auVar45);
          auVar35 = vunpcklpd_avx(auVar47,auVar36);
          auVar47 = vunpckhpd_avx(auVar47,auVar36);
          auVar46 = vunpckhps_avx512vl(auVar44,auVar46);
          auVar43 = vunpckhps_avx512vl(auVar43,auVar45);
          auVar44 = vunpcklpd_avx(auVar46,auVar43);
          auVar43 = vunpckhpd_avx(auVar46,auVar43);
          auVar50._16_16_ = auVar47._0_16_;
          auVar50._0_16_ = auVar35._0_16_;
          *pauVar27 = auVar50;
          auVar51._16_16_ = auVar43._0_16_;
          auVar51._0_16_ = auVar44._0_16_;
          pauVar27[1] = auVar51;
          auVar45 = vperm2f128_avx(auVar35,auVar47,0x31);
          pauVar27[2] = auVar45;
          auVar43 = vperm2f128_avx(auVar44,auVar43,0x31);
          pauVar27[3] = auVar43;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar27) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar33,
                     auVar44);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar27) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar33,
                     auVar46);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar27) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar33,
                     auVar43);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar27) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar33,
                     auVar45);
        }
      }
    }
  }
  return;
}

// ApplySphericalConstraints_avx512skx @ 140317210

void ApplySphericalConstraints_avx512skx(void)

{
  ApplySphericalConstraintsWithMap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_CunfCunfCuniCuni_avx512skx
            ();
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithMaps_avx512skx @ 140317250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithMaps_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,float param_6,float param_7,uint param_8,uint param_9,int param_10,uint param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined1 (*pauVar33) [32];
  uint uVar34;
  ulonglong uVar35;
  longlong lVar36;
  uint uVar37;
  byte bVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
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
  undefined1 auVar42 [16];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 in_ZMM17 [64];
  undefined1 auVar71 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar72 [16];
  undefined1 in_ZMM19 [64];
  undefined1 auVar73 [16];
  undefined1 in_ZMM23 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar64 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar63 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar62 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar73 = in_ZMM23._0_16_;
  auVar72 = in_ZMM19._0_16_;
  auVar71 = in_ZMM18._0_16_;
  auVar42 = in_ZMM17._0_16_;
  uVar34 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar34 = param_11;
  }
  if ((int)(uVar34 & 0xfffffff8) < 1) {
    uVar35 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    auVar43 = vbroadcastss_avx512vl(ZEXT416(param_8));
    auVar44 = vbroadcastss_avx512vl(ZEXT416(param_9));
    auVar42 = auVar44._0_16_;
    lVar36 = (longlong)param_10 * 3 + 0x10;
    pauVar33 = (undefined1 (*) [32])((longlong)param_10 * 0x10 + param_1);
    uVar37 = 0;
    auVar71 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar72 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar45 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar73 = __ymm_0000007400000064000000540000004400000034000000240000001400000004._0_16_;
    auVar41 = vxorps_avx512vl(ZEXT416(param_9),ZEXT416(param_9));
    uVar35 = 0;
    do {
      auVar46 = vshuff64x2_avx512vl(*pauVar33,pauVar33[2],0);
      auVar47 = vshuff64x2_avx512vl(*pauVar33,pauVar33[2],3);
      auVar48 = vshuff64x2_avx512vl(pauVar33[1],pauVar33[3],0);
      auVar49 = vshuff64x2_avx512vl(pauVar33[1],pauVar33[3],3);
      auVar50 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar51 = vunpckhps_avx512vl(auVar48,auVar49);
      auVar52 = vunpckhpd_avx512vl(auVar50,auVar51);
      uVar29 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar41),4);
      if ((char)uVar29 != '\0') {
        auVar50 = vunpcklpd_avx(auVar50,auVar51);
        auVar46 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpcklps_avx512vl(auVar48,auVar49);
        auVar51 = vunpckhpd_avx512vl(auVar46,auVar47);
        auVar53 = vunpcklpd_avx512vl(auVar46,auVar47);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar36 * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar36 * 4);
        auVar48 = *(undefined1 (*) [32])(param_2 + lVar36 * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar62,auVar47);
        auVar54 = vpermt2ps_avx512vl(auVar49,auVar64,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar63,auVar47);
        auVar55 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar56 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar36 * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar36 * 4);
        auVar48 = *(undefined1 (*) [32])(param_3 + lVar36 * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar62,auVar47);
        auVar49 = vpermt2ps_avx512vl(auVar49,auVar64,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar63,auVar47);
        auVar48 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar57 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar37);
        auVar61._0_4_ = param_7 * *pfVar1 + param_6;
        auVar61._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar61._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar61._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar61._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar61._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar61._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar61._28_4_ = param_7 * pfVar1[7] + param_6;
        auVar58 = vfmadd213ps_avx512vl
                            (*(undefined1 (*) [32])(param_5 + (ulonglong)uVar37),auVar44,auVar43);
        auVar59 = vfnmadd213ps_avx512vl(auVar61,auVar48,auVar55);
        auVar60 = vfnmadd213ps_avx512vl(auVar61,auVar57,auVar56);
        auVar47 = vsubps_avx(auVar61,auVar58);
        auVar69._0_4_ = -(auVar49._0_4_ * auVar61._0_4_) + auVar54._0_4_;
        auVar69._4_4_ = -(auVar49._4_4_ * auVar61._4_4_) + auVar54._4_4_;
        auVar69._8_4_ = -(auVar49._8_4_ * auVar61._8_4_) + auVar54._8_4_;
        auVar69._12_4_ = -(auVar49._12_4_ * auVar61._12_4_) + auVar54._12_4_;
        auVar69._16_4_ = -(auVar49._16_4_ * auVar61._16_4_) + auVar54._16_4_;
        auVar69._20_4_ = -(auVar49._20_4_ * auVar61._20_4_) + auVar54._20_4_;
        auVar69._24_4_ = -(auVar49._24_4_ * auVar61._24_4_) + auVar54._24_4_;
        auVar69._28_4_ = -(auVar49._28_4_ * auVar61._28_4_) + auVar54._28_4_;
        auVar53 = vsubps_avx512vl(auVar53,auVar59);
        auVar51 = vsubps_avx512vl(auVar51,auVar60);
        auVar50 = vsubps_avx512vl(auVar50,auVar69);
        auVar46._0_4_ = auVar53._0_4_ * auVar53._0_4_ + auVar51._0_4_ * auVar51._0_4_;
        auVar46._4_4_ = auVar53._4_4_ * auVar53._4_4_ + auVar51._4_4_ * auVar51._4_4_;
        auVar46._8_4_ = auVar53._8_4_ * auVar53._8_4_ + auVar51._8_4_ * auVar51._8_4_;
        auVar46._12_4_ = auVar53._12_4_ * auVar53._12_4_ + auVar51._12_4_ * auVar51._12_4_;
        auVar46._16_4_ = auVar53._16_4_ * auVar53._16_4_ + auVar51._16_4_ * auVar51._16_4_;
        auVar46._20_4_ = auVar53._20_4_ * auVar53._20_4_ + auVar51._20_4_ * auVar51._20_4_;
        auVar46._24_4_ = auVar53._24_4_ * auVar53._24_4_ + auVar51._24_4_ * auVar51._24_4_;
        auVar46._28_4_ = auVar53._28_4_ * auVar53._28_4_ + auVar51._28_4_ * auVar51._28_4_;
        auVar61 = vfmadd231ps_avx512vl(auVar46,auVar50,auVar50);
        auVar46 = vsqrtps_avx(auVar61);
        auVar46 = vdivps_avx(auVar58,auVar46);
        auVar70._0_4_ = auVar58._0_4_ * auVar58._0_4_;
        auVar70._4_4_ = auVar58._4_4_ * auVar58._4_4_;
        auVar70._8_4_ = auVar58._8_4_ * auVar58._8_4_;
        auVar70._12_4_ = auVar58._12_4_ * auVar58._12_4_;
        auVar70._16_4_ = auVar58._16_4_ * auVar58._16_4_;
        auVar70._20_4_ = auVar58._20_4_ * auVar58._20_4_;
        auVar70._24_4_ = auVar58._24_4_ * auVar58._24_4_;
        auVar70._28_4_ = auVar58._28_4_ * auVar58._28_4_;
        uVar30 = vcmpps_avx512vl(auVar61,auVar70,1);
        auVar53 = vfmadd231ps_avx512vl(auVar59,auVar46,auVar53);
        bVar38 = (byte)uVar30;
        uVar40 = vcmpps_avx512vl(auVar61,auVar45,1);
        bVar5 = (byte)uVar40;
        auVar58._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar47._0_4_ * auVar48._0_4_) + auVar55._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar38 & 1) * auVar53._0_4_;
        bVar7 = (bool)((byte)(uVar40 >> 1) & 1);
        auVar58._4_4_ =
             (uint)bVar7 * (int)(-(auVar47._4_4_ * auVar48._4_4_) + auVar55._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar53._4_4_;
        bVar7 = (bool)((byte)(uVar40 >> 2) & 1);
        auVar58._8_4_ =
             (uint)bVar7 * (int)(-(auVar47._8_4_ * auVar48._8_4_) + auVar55._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar53._8_4_;
        bVar7 = (bool)((byte)(uVar40 >> 3) & 1);
        auVar58._12_4_ =
             (uint)bVar7 * (int)(-(auVar47._12_4_ * auVar48._12_4_) + auVar55._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar53._12_4_;
        bVar7 = (bool)((byte)(uVar40 >> 4) & 1);
        auVar58._16_4_ =
             (uint)bVar7 * (int)(-(auVar47._16_4_ * auVar48._16_4_) + auVar55._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar53._16_4_;
        bVar7 = (bool)((byte)(uVar40 >> 5) & 1);
        auVar58._20_4_ =
             (uint)bVar7 * (int)(-(auVar47._20_4_ * auVar48._20_4_) + auVar55._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar53._20_4_;
        bVar7 = (bool)((byte)(uVar40 >> 6) & 1);
        auVar58._24_4_ =
             (uint)bVar7 * (int)(-(auVar47._24_4_ * auVar48._24_4_) + auVar55._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar53._24_4_;
        bVar7 = SUB81(uVar40 >> 7,0);
        auVar58._28_4_ =
             (uint)bVar7 * (int)(-(auVar47._28_4_ * auVar48._28_4_) + auVar55._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar53._28_4_;
        uVar39 = vcmpps_avx512vl(auVar58,ZEXT1632(auVar41),4);
        uVar31 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar41),4);
        uVar39 = uVar39 & uVar31;
        if ((char)uVar39 != '\0') {
          auVar48 = vfnmadd213ps_avx512vl(auVar57,auVar47,auVar56);
          auVar53._0_4_ = -(auVar47._0_4_ * auVar49._0_4_) + auVar54._0_4_;
          auVar53._4_4_ = -(auVar47._4_4_ * auVar49._4_4_) + auVar54._4_4_;
          auVar53._8_4_ = -(auVar47._8_4_ * auVar49._8_4_) + auVar54._8_4_;
          auVar53._12_4_ = -(auVar47._12_4_ * auVar49._12_4_) + auVar54._12_4_;
          auVar53._16_4_ = -(auVar47._16_4_ * auVar49._16_4_) + auVar54._16_4_;
          auVar53._20_4_ = -(auVar47._20_4_ * auVar49._20_4_) + auVar54._20_4_;
          auVar53._24_4_ = -(auVar47._24_4_ * auVar49._24_4_) + auVar54._24_4_;
          auVar53._28_4_ = -(auVar47._28_4_ * auVar49._28_4_) + auVar54._28_4_;
          auVar47 = vfmadd213ps_avx512vl(auVar51,auVar46,auVar60);
          auVar46 = vfmadd213ps_avx512vl(auVar50,auVar46,auVar69);
          auVar49._0_4_ =
               (uint)(bVar5 & 1) * auVar48._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar38 & 1) * auVar47._0_4_;
          bVar7 = (bool)((byte)(uVar40 >> 1) & 1);
          auVar49._4_4_ =
               (uint)bVar7 * auVar48._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar47._4_4_;
          bVar7 = (bool)((byte)(uVar40 >> 2) & 1);
          auVar49._8_4_ =
               (uint)bVar7 * auVar48._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar47._8_4_;
          bVar7 = (bool)((byte)(uVar40 >> 3) & 1);
          auVar49._12_4_ =
               (uint)bVar7 * auVar48._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar47._12_4_;
          bVar7 = (bool)((byte)(uVar40 >> 4) & 1);
          auVar49._16_4_ =
               (uint)bVar7 * auVar48._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar47._16_4_;
          bVar7 = (bool)((byte)(uVar40 >> 5) & 1);
          auVar49._20_4_ =
               (uint)bVar7 * auVar48._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar47._20_4_;
          bVar7 = (bool)((byte)(uVar40 >> 6) & 1);
          auVar49._24_4_ =
               (uint)bVar7 * auVar48._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar47._24_4_;
          bVar7 = SUB81(uVar40 >> 7,0);
          auVar49._28_4_ =
               (uint)bVar7 * auVar48._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar47._28_4_;
          auVar47._0_4_ =
               (uint)(bVar5 & 1) * (int)auVar53._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar38 & 1) * auVar46._0_4_;
          bVar7 = (bool)((byte)(uVar40 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar7 * (int)auVar53._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar46._4_4_;
          bVar7 = (bool)((byte)(uVar40 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar7 * (int)auVar53._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar46._8_4_;
          bVar7 = (bool)((byte)(uVar40 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar7 * (int)auVar53._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar46._12_4_;
          bVar7 = (bool)((byte)(uVar40 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar7 * (int)auVar53._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar46._16_4_;
          bVar7 = (bool)((byte)(uVar40 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar7 * (int)auVar53._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar46._20_4_;
          bVar7 = (bool)((byte)(uVar40 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar7 * (int)auVar53._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar46._24_4_;
          bVar7 = SUB81(uVar40 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar7 * (int)auVar53._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar46._28_4_;
          if ((char)uVar39 == -1) {
            auVar46 = vunpcklps_avx512vl(auVar58,auVar49);
            auVar48 = vunpcklps_avx512vl(auVar47,auVar52);
            auVar50 = vunpcklpd_avx512vl(auVar46,auVar48);
            auVar46 = vunpckhpd_avx(auVar46,auVar48);
            auVar48 = vunpckhps_avx512vl(auVar58,auVar49);
            auVar47 = vunpckhps_avx512vl(auVar47,auVar52);
            auVar49 = vunpcklpd_avx512vl(auVar48,auVar47);
            auVar47 = vunpckhpd_avx512vl(auVar48,auVar47);
            auVar48 = vinsertf32x4_avx512vl(auVar50,auVar46._0_16_,1);
            *pauVar33 = auVar48;
            auVar48 = vinsertf32x4_avx512vl(auVar49,auVar47._0_16_,1);
            pauVar33[1] = auVar48;
            auVar46 = vshuff64x2_avx512vl(auVar50,auVar46,3);
            pauVar33[2] = auVar46;
            auVar46 = vshuff64x2_avx512vl(auVar49,auVar47,3);
            pauVar33[3] = auVar46;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar33) + auVar54,uVar39,auVar58);
            vscatterdps_avx512vl(ZEXT832(pauVar33) + auVar53,uVar39,auVar49);
            vscatterdps_avx512vl(ZEXT832(pauVar33) + auVar69,uVar39,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar33) + auVar60,uVar39,auVar52);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar37 = uVar37 + 0x20;
      pauVar33 = pauVar33 + 4;
      lVar36 = lVar36 + 0x18;
    } while (uVar35 < (uVar34 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar35) {
      return;
    }
  }
  auVar62 = vpbroadcastd_avx512vl();
  auVar62 = vpor_avx2(auVar62,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar63 = vpbroadcastd_avx512vl();
  uVar30 = vpcmpgtd_avx512vl(auVar63,auVar62);
  lVar36 = (longlong)(param_10 + (int)uVar35);
  pauVar33 = (undefined1 (*) [32])(param_1 + lVar36 * 0x10);
  bVar38 = (byte)uVar30;
  if (bVar38 == 0xff) {
    auVar43 = vshuff64x2_avx512vl(*pauVar33,pauVar33[2],0);
    auVar64 = vperm2f128_avx(*pauVar33,pauVar33[2],0x31);
    auVar44 = vshuff64x2_avx512vl(pauVar33[1],pauVar33[3],0);
    auVar45 = vshuff64x2_avx512vl(pauVar33[1],pauVar33[3],3);
    auVar46 = vunpcklps_avx512vl(auVar43,auVar64);
    auVar43 = vunpckhps_avx512vl(auVar43,auVar64);
    auVar47 = vunpcklps_avx512vl(auVar44,auVar45);
    auVar64 = vunpckhps_avx(auVar44,auVar45);
    auVar48 = vunpcklpd_avx512vl(auVar46,auVar47);
    auVar45 = vunpckhpd_avx512vl(auVar46,auVar47);
    auVar44 = vunpcklpd_avx512vl(auVar43,auVar64);
    auVar64 = vunpckhpd_avx(auVar43,auVar64);
  }
  else {
    auVar42 = vxorps_avx512vl(auVar42,auVar42);
    auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + param_5));
    auVar48._0_4_ = (uint)(bVar38 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_;
    bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
    auVar48._4_4_ = (uint)bVar7 * auVar64._4_4_ | (uint)!bVar7 * auVar42._4_4_;
    bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
    auVar48._8_4_ = (uint)bVar7 * auVar64._8_4_ | (uint)!bVar7 * auVar42._8_4_;
    bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
    auVar48._12_4_ = (uint)bVar7 * auVar64._12_4_ | (uint)!bVar7 * auVar42._12_4_;
    auVar48._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
    auVar48._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
    auVar48._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
    auVar48._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
    auVar42 = vxorps_avx512vl(auVar71,auVar71);
    auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + param_5));
    auVar45._0_4_ = (uint)(bVar38 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_;
    bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
    auVar45._4_4_ = (uint)bVar7 * auVar64._4_4_ | (uint)!bVar7 * auVar42._4_4_;
    bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
    auVar45._8_4_ = (uint)bVar7 * auVar64._8_4_ | (uint)!bVar7 * auVar42._8_4_;
    bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
    auVar45._12_4_ = (uint)bVar7 * auVar64._12_4_ | (uint)!bVar7 * auVar42._12_4_;
    auVar45._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
    auVar45._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
    auVar45._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
    auVar45._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
    auVar42 = vxorps_avx512vl(auVar72,auVar72);
    auVar64 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + param_5));
    auVar44._0_4_ = (uint)(bVar38 & 1) * auVar64._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_;
    bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
    auVar44._4_4_ = (uint)bVar7 * auVar64._4_4_ | (uint)!bVar7 * auVar42._4_4_;
    bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
    auVar44._8_4_ = (uint)bVar7 * auVar64._8_4_ | (uint)!bVar7 * auVar42._8_4_;
    bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
    auVar44._12_4_ = (uint)bVar7 * auVar64._12_4_ | (uint)!bVar7 * auVar42._12_4_;
    auVar44._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar64._16_4_;
    auVar44._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar64._20_4_;
    auVar44._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar64._24_4_;
    auVar44._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar64._28_4_;
    auVar43 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + param_5));
    auVar64._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar43._4_4_;
    auVar64._0_4_ = (uint)(bVar38 & 1) * auVar43._0_4_;
    auVar64._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar43._8_4_;
    auVar64._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar43._12_4_;
    auVar64._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar43._16_4_;
    auVar64._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar43._20_4_;
    auVar64._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar43._24_4_;
    auVar64._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar43._28_4_;
  }
  uVar32 = vpcmpd_avx512vl(auVar62,auVar63,5);
  bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
  bVar11 = (bool)((byte)(uVar30 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar30 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar30 >> 4) & 1);
  bVar20 = (bool)((byte)(uVar30 >> 5) & 1);
  bVar23 = (bool)((byte)(uVar30 >> 6) & 1);
  bVar26 = SUB81(uVar30 >> 7,0);
  bVar8 = (bool)((byte)(uVar30 >> 1) & 1);
  bVar12 = (bool)((byte)(uVar30 >> 2) & 1);
  bVar15 = (bool)((byte)(uVar30 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar30 >> 4) & 1);
  bVar21 = (bool)((byte)(uVar30 >> 5) & 1);
  bVar24 = (bool)((byte)(uVar30 >> 6) & 1);
  bVar27 = SUB81(uVar30 >> 7,0);
  bVar9 = (bool)((byte)(uVar30 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar30 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar30 >> 3) & 1);
  bVar19 = (bool)((byte)(uVar30 >> 4) & 1);
  bVar22 = (bool)((byte)(uVar30 >> 5) & 1);
  bVar25 = (bool)((byte)(uVar30 >> 6) & 1);
  bVar28 = SUB81(uVar30 >> 7,0);
  uVar29 = vcmpps_avx512vl(auVar64,ZEXT1232(ZEXT812(0)),0);
  if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar36 * 0xc);
    if (bVar38 == 0xff) {
      auVar62 = pauVar2[1];
      auVar63 = vblendps_avx(auVar62,*pauVar2,0x24);
      auVar43 = vpermt2ps_avx512vl(*pauVar2,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar62);
      auVar52 = vpermt2ps_avx512vl(auVar63,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,pauVar2[2]);
      auVar62 = vpermt2ps_avx512vl(pauVar2[2],
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar62);
      auVar51 = vinsertf32x4_avx512vl(auVar43,auVar62._0_16_,1);
      auVar50 = vshuff64x2_avx512vl(auVar43,auVar62,3);
      auVar62 = *(undefined1 (*) [32])(param_3 + lVar36 * 0xc);
      auVar63 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar36 * 0xc);
      auVar43 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar36 * 0xc);
      auVar46 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar62,auVar63);
      auVar47 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar43,auVar63);
      auVar54 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
      auVar55 = vshuff64x2_avx512vl(auVar46,auVar47,3);
      auVar62 = vblendps_avx(auVar63,auVar62,0x24);
      auVar62 = vpermt2ps_avx512vl(auVar62,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar43);
    }
    else {
      auVar42 = vxorps_avx512vl(auVar48._0_16_,auVar48._0_16_);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_5));
      auVar51._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_
      ;
      bVar10 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar51._4_4_ = (uint)bVar10 * auVar62._4_4_ | (uint)!bVar10 * auVar42._4_4_;
      bVar10 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar51._8_4_ = (uint)bVar10 * auVar62._8_4_ | (uint)!bVar10 * auVar42._8_4_;
      bVar10 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar51._12_4_ = (uint)bVar10 * auVar62._12_4_ | (uint)!bVar10 * auVar42._12_4_;
      auVar51._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar51._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar51._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar51._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar33 + (longlong)*pauVar2));
      auVar50._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar62._4_4_;
      auVar50._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_;
      auVar50._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar62._8_4_;
      auVar50._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar62._12_4_;
      auVar50._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar50._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar50._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar50._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
      auVar52._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar62._4_4_;
      auVar52._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_;
      auVar52._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar62._8_4_;
      auVar52._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar62._12_4_;
      auVar52._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar52._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar52._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar52._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      puVar3 = (undefined4 *)(param_3 + lVar36 * 0xc);
      auVar42 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + param_5));
      auVar54._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_
      ;
      bVar10 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar54._4_4_ = (uint)bVar10 * auVar62._4_4_ | (uint)!bVar10 * auVar42._4_4_;
      bVar10 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar54._8_4_ = (uint)bVar10 * auVar62._8_4_ | (uint)!bVar10 * auVar42._8_4_;
      bVar10 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar54._12_4_ = (uint)bVar10 * auVar62._12_4_ | (uint)!bVar10 * auVar42._12_4_;
      auVar54._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar54._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar54._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar54._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      auVar42 = vxorps_avx512vl(auVar45._0_16_,auVar45._0_16_);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar33));
      auVar55._0_4_ = (uint)(bVar38 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar38 & 1) * auVar42._0_4_
      ;
      bVar10 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar55._4_4_ = (uint)bVar10 * auVar62._4_4_ | (uint)!bVar10 * auVar42._4_4_;
      bVar10 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar55._8_4_ = (uint)bVar10 * auVar62._8_4_ | (uint)!bVar10 * auVar42._8_4_;
      bVar10 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar55._12_4_ = (uint)bVar10 * auVar62._12_4_ | (uint)!bVar10 * auVar42._12_4_;
      auVar55._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar62._16_4_;
      auVar55._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar62._20_4_;
      auVar55._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar62._24_4_;
      auVar55._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar62._28_4_;
      auVar63 = vgatherdps_avx512vl(*puVar3);
      auVar62._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * auVar63._4_4_;
      auVar62._0_4_ = (uint)(bVar38 & 1) * auVar63._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * auVar63._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * auVar63._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * auVar63._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * auVar63._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * auVar63._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar30 >> 7) * auVar63._28_4_;
    }
    lVar36 = (longlong)((int)uVar35 << 2);
    piVar4 = (int *)(param_4 + lVar36);
    auVar68._0_4_ = param_7 * (float)((uint)(bVar38 & 1) * *piVar4) + param_6;
    auVar68._4_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 1) & 1) * piVar4[1]) + param_6;
    auVar68._8_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 2) & 1) * piVar4[2]) + param_6;
    auVar68._12_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 3) & 1) * piVar4[3]) + param_6;
    auVar68._16_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 4) & 1) * piVar4[4]) + param_6;
    auVar68._20_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 5) & 1) * piVar4[5]) + param_6;
    auVar68._24_4_ = param_7 * (float)((uint)((byte)(uVar30 >> 6) & 1) * piVar4[6]) + param_6;
    auVar68._28_4_ = param_7 * (float)((uint)(byte)(uVar30 >> 7) * piVar4[7]) + param_6;
    auVar42 = vxorps_avx512vl(auVar73,auVar73);
    auVar63 = vbroadcastss_avx512vl(ZEXT416(param_8));
    auVar43 = vbroadcastss_avx512vl(ZEXT416(param_9));
    piVar4 = (int *)(param_5 + lVar36);
    auVar59._4_4_ = (uint)((byte)(uVar30 >> 1) & 1) * piVar4[1];
    auVar59._0_4_ = (uint)(bVar38 & 1) * *piVar4;
    auVar59._8_4_ = (uint)((byte)(uVar30 >> 2) & 1) * piVar4[2];
    auVar59._12_4_ = (uint)((byte)(uVar30 >> 3) & 1) * piVar4[3];
    auVar59._16_4_ = (uint)((byte)(uVar30 >> 4) & 1) * piVar4[4];
    auVar59._20_4_ = (uint)((byte)(uVar30 >> 5) & 1) * piVar4[5];
    auVar59._24_4_ = (uint)((byte)(uVar30 >> 6) & 1) * piVar4[6];
    auVar59._28_4_ = (uint)(byte)(uVar30 >> 7) * piVar4[7];
    auVar43 = vfmadd213ps_avx512vl(auVar59,auVar43,auVar63);
    auVar46 = vsubps_avx512vl(auVar68,auVar43);
    auVar47 = vfnmadd213ps_avx512vl(auVar68,auVar54,auVar51);
    auVar49 = vfnmadd213ps_avx512vl(auVar68,auVar55,auVar50);
    auVar63._4_4_ = (uint)bVar7 * auVar48._4_4_ | (uint)!bVar7 * iStack_13c;
    auVar63._0_4_ = (uint)(bVar38 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar38 & 1) * local_140;
    auVar63._8_4_ = (uint)bVar11 * auVar48._8_4_ | (uint)!bVar11 * iStack_138;
    auVar63._12_4_ = (uint)bVar14 * auVar48._12_4_ | (uint)!bVar14 * iStack_134;
    auVar63._16_4_ = (uint)bVar17 * auVar48._16_4_ | (uint)!bVar17 * iStack_130;
    auVar63._20_4_ = (uint)bVar20 * auVar48._20_4_ | (uint)!bVar20 * iStack_12c;
    auVar63._24_4_ = (uint)bVar23 * auVar48._24_4_ | (uint)!bVar23 * iStack_128;
    auVar63._28_4_ = (uint)bVar26 * auVar48._28_4_ | (uint)!bVar26 * iStack_124;
    auVar48 = vfnmadd213ps_avx512vl(auVar68,auVar62,auVar52);
    auVar56._4_4_ = (uint)bVar8 * auVar45._4_4_ | (uint)!bVar8 * iStack_11c;
    auVar56._0_4_ = (uint)(bVar38 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar38 & 1) * local_120;
    auVar56._8_4_ = (uint)bVar12 * auVar45._8_4_ | (uint)!bVar12 * iStack_118;
    auVar56._12_4_ = (uint)bVar15 * auVar45._12_4_ | (uint)!bVar15 * iStack_114;
    auVar56._16_4_ = (uint)bVar18 * auVar45._16_4_ | (uint)!bVar18 * iStack_110;
    auVar56._20_4_ = (uint)bVar21 * auVar45._20_4_ | (uint)!bVar21 * iStack_10c;
    auVar56._24_4_ = (uint)bVar24 * auVar45._24_4_ | (uint)!bVar24 * iStack_108;
    auVar56._28_4_ = (uint)bVar27 * auVar45._28_4_ | (uint)!bVar27 * iStack_104;
    auVar57._4_4_ = (uint)bVar9 * auVar44._4_4_ | (uint)!bVar9 * iStack_fc;
    auVar57._0_4_ = (uint)(bVar38 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar38 & 1) * local_100;
    auVar57._8_4_ = (uint)bVar13 * auVar44._8_4_ | (uint)!bVar13 * iStack_f8;
    auVar57._12_4_ = (uint)bVar16 * auVar44._12_4_ | (uint)!bVar16 * iStack_f4;
    auVar57._16_4_ = (uint)bVar19 * auVar44._16_4_ | (uint)!bVar19 * iStack_f0;
    auVar57._20_4_ = (uint)bVar22 * auVar44._20_4_ | (uint)!bVar22 * iStack_ec;
    auVar57._24_4_ = (uint)bVar25 * auVar44._24_4_ | (uint)!bVar25 * iStack_e8;
    auVar57._28_4_ = (uint)bVar28 * auVar44._28_4_ | (uint)!bVar28 * iStack_e4;
    auVar44 = vsubps_avx512vl(auVar63,auVar47);
    auVar63 = vsubps_avx(auVar56,auVar49);
    auVar45 = vsubps_avx512vl(auVar57,auVar48);
    auVar53 = vmulps_avx512vl(auVar63,auVar63);
    auVar53 = vfmadd231ps_avx512vl(auVar53,auVar44,auVar44);
    auVar53 = vfmadd231ps_avx512vl(auVar53,auVar45,auVar45);
    auVar56 = vsqrtps_avx512vl(auVar53);
    auVar56 = vdivps_avx512vl(auVar43,auVar56);
    auVar51 = vfnmadd213ps_avx512vl(auVar54,auVar46,auVar51);
    auVar43 = vmulps_avx512vl(auVar43,auVar43);
    uVar35 = vcmpps_avx512vl(auVar53,auVar43,1);
    auVar43._4_4_ = __real_322bcc77;
    auVar43._0_4_ = __real_322bcc77;
    auVar43._8_4_ = __real_322bcc77;
    auVar43._12_4_ = __real_322bcc77;
    auVar43._16_4_ = __real_322bcc77;
    auVar43._20_4_ = __real_322bcc77;
    auVar43._24_4_ = __real_322bcc77;
    auVar43._28_4_ = __real_322bcc77;
    uVar30 = vcmpps_avx512vl(auVar53,auVar43,1);
    auVar43 = vfmadd231ps_avx512vl(auVar47,auVar56,auVar44);
    bVar5 = (byte)uVar35;
    bVar6 = (byte)uVar30;
    auVar60._0_4_ =
         (uint)(bVar6 & 1) * auVar51._0_4_ |
         (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar43._0_4_;
    bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
    auVar60._4_4_ =
         (uint)bVar7 * auVar51._4_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar43._4_4_;
    bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
    auVar60._8_4_ =
         (uint)bVar7 * auVar51._8_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar43._8_4_;
    bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
    auVar60._12_4_ =
         (uint)bVar7 * auVar51._12_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar43._12_4_;
    bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
    auVar60._16_4_ =
         (uint)bVar7 * auVar51._16_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar43._16_4_;
    bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
    auVar60._20_4_ =
         (uint)bVar7 * auVar51._20_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar43._20_4_;
    bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
    auVar60._24_4_ =
         (uint)bVar7 * auVar51._24_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar43._24_4_;
    bVar7 = SUB81(uVar30 >> 7,0);
    auVar60._28_4_ =
         (uint)bVar7 * auVar51._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar43._28_4_;
    uVar29 = vcmpps_avx512vl(auVar64,ZEXT1632(auVar42),4);
    uVar32 = vcmpps_avx512vl(auVar60,ZEXT1632(auVar42),4);
    bVar38 = (byte)uVar29 & (byte)uVar32 & bVar38;
    uVar40 = (ulonglong)bVar38;
    if (bVar38 != 0) {
      auVar43 = vfnmadd213ps_avx512vl(auVar55,auVar46,auVar50);
      auVar62 = vfnmadd213ps_avx512vl(auVar62,auVar46,auVar52);
      auVar63 = vfmadd213ps_avx512vl(auVar63,auVar56,auVar49);
      auVar44 = vfmadd213ps_avx512vl(auVar45,auVar56,auVar48);
      auVar65._0_4_ =
           (uint)(bVar6 & 1) * auVar43._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar63._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar7 * auVar43._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar7 * auVar43._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar7 * auVar43._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar7 * auVar43._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar7 * auVar43._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar7 * auVar43._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar7 * auVar43._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
      auVar66._0_4_ =
           (uint)(bVar6 & 1) * auVar62._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar66._4_4_ =
           (uint)bVar7 * auVar62._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar66._8_4_ =
           (uint)bVar7 * auVar62._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar66._12_4_ =
           (uint)bVar7 * auVar62._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar66._16_4_ =
           (uint)bVar7 * auVar62._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar66._20_4_ =
           (uint)bVar7 * auVar62._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar66._24_4_ =
           (uint)bVar7 * auVar62._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar66._28_4_ =
           (uint)bVar7 * auVar62._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
      if (bVar38 == 0xff) {
        auVar62 = vunpcklps_avx(auVar60,auVar65);
        auVar63 = vunpcklps_avx(auVar66,auVar64);
        auVar44 = vunpcklpd_avx512vl(auVar62,auVar63);
        auVar62 = vunpckhpd_avx(auVar62,auVar63);
        auVar63 = vunpckhps_avx(auVar60,auVar65);
        auVar64 = vunpckhps_avx(auVar66,auVar64);
        auVar43 = vunpcklpd_avx(auVar63,auVar64);
        auVar63 = vunpckhpd_avx(auVar63,auVar64);
        auVar64 = vinsertf32x4_avx512vl(auVar44,auVar62._0_16_,1);
        *pauVar33 = auVar64;
        auVar67._16_16_ = auVar63._0_16_;
        auVar67._0_16_ = auVar43._0_16_;
        pauVar33[1] = auVar67;
        auVar62 = vshuff64x2_avx512vl(auVar44,auVar62,3);
        pauVar33[2] = auVar62;
        auVar62 = vperm2f128_avx(auVar43,auVar63,0x31);
        pauVar33[3] = auVar62;
      }
      else {
        vscatterdps_avx512vl
                  (ZEXT832(pauVar33) +
                   ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar40,
                   auVar60);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar33) +
                   ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar40,
                   auVar65);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar33) +
                   ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar40,
                   auVar66);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar33) +
                   ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar40,
                   auVar64);
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithDistanceMap_avx512skx @ 140317a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithDistanceMap_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  undefined1 (*pauVar36) [32];
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar43 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [64];
  undefined1 auVar75 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar76 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar78 [16];
  undefined1 in_ZMM24 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar63 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar62 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar61 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar78 = in_ZMM24._0_16_;
  auVar77 = in_ZMM18._0_16_;
  auVar76 = in_ZMM17._0_16_;
  auVar42 = in_ZMM16._0_16_;
  uVar33 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar33 = param_9;
  }
  auVar68 = ZEXT416((uint)param_7);
  if ((int)(uVar33 & 0xfffffff8) < 1) {
    uVar35 = 0;
  }
  else {
    auVar64._4_4_ = param_7;
    auVar64._0_4_ = param_7;
    auVar64._8_4_ = param_7;
    auVar64._12_4_ = param_7;
    auVar64._16_4_ = param_7;
    auVar64._20_4_ = param_7;
    auVar64._24_4_ = param_7;
    auVar64._28_4_ = param_7;
    auVar42 = vmulss_avx512f(auVar68,auVar68);
    auVar44 = vbroadcastss_avx512vl(auVar42);
    auVar42 = auVar44._0_16_;
    unaff_RBX = (longlong)param_8 * 3 + 0x10;
    pauVar36 = (undefined1 (*) [32])((longlong)param_8 * 0x10 + param_1);
    uVar38 = 0;
    auVar76 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar77 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar45 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar43 = vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
    auVar78 = __ymm_0000007800000068000000580000004800000038000000280000001800000008._0_16_;
    uVar35 = 0;
    do {
      auVar46 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar47 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar48 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar49 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar50 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar51 = vunpckhps_avx512vl(auVar48,auVar49);
      auVar52 = vunpckhpd_avx512vl(auVar50,auVar51);
      uVar29 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar43),4);
      if ((char)uVar29 != '\0') {
        auVar50 = vunpcklpd_avx512vl(auVar50,auVar51);
        auVar46 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpcklps_avx512vl(auVar48,auVar49);
        auVar51 = vunpckhpd_avx512vl(auVar46,auVar47);
        auVar53 = vunpcklpd_avx512vl(auVar46,auVar47);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x40 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + -0x20 + unaff_RBX * 4);
        auVar48 = *(undefined1 (*) [32])(param_2 + unaff_RBX * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar61,auVar47);
        auVar54 = vpermt2ps_avx512vl(auVar49,auVar63,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar55 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar56 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x40 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + -0x20 + unaff_RBX * 4);
        auVar48 = *(undefined1 (*) [32])(param_3 + unaff_RBX * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar61,auVar47);
        auVar49 = vpermt2ps_avx512vl(auVar49,auVar63,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar48 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar57 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar38);
        auVar46._0_4_ = param_6 * *pfVar1 + param_5;
        auVar46._4_4_ = param_6 * pfVar1[1] + param_5;
        auVar46._8_4_ = param_6 * pfVar1[2] + param_5;
        auVar46._12_4_ = param_6 * pfVar1[3] + param_5;
        auVar46._16_4_ = param_6 * pfVar1[4] + param_5;
        auVar46._20_4_ = param_6 * pfVar1[5] + param_5;
        auVar46._24_4_ = param_6 * pfVar1[6] + param_5;
        auVar46._28_4_ = param_6 * pfVar1[7] + param_5;
        auVar58 = vfnmadd213ps_avx512vl(auVar46,auVar48,auVar55);
        auVar59 = vfnmadd213ps_avx512vl(auVar46,auVar57,auVar56);
        auVar47 = vsubps_avx(auVar46,auVar64);
        auVar75._0_4_ = -(auVar49._0_4_ * auVar46._0_4_) + auVar54._0_4_;
        auVar75._4_4_ = -(auVar49._4_4_ * auVar46._4_4_) + auVar54._4_4_;
        auVar75._8_4_ = -(auVar49._8_4_ * auVar46._8_4_) + auVar54._8_4_;
        auVar75._12_4_ = -(auVar49._12_4_ * auVar46._12_4_) + auVar54._12_4_;
        auVar75._16_4_ = -(auVar49._16_4_ * auVar46._16_4_) + auVar54._16_4_;
        auVar75._20_4_ = -(auVar49._20_4_ * auVar46._20_4_) + auVar54._20_4_;
        auVar75._24_4_ = -(auVar49._24_4_ * auVar46._24_4_) + auVar54._24_4_;
        auVar75._28_4_ = -(auVar49._28_4_ * auVar46._28_4_) + auVar54._28_4_;
        auVar53 = vsubps_avx512vl(auVar53,auVar58);
        auVar51 = vsubps_avx512vl(auVar51,auVar59);
        auVar50 = vsubps_avx512vl(auVar50,auVar75);
        auVar46 = vmulps_avx512vl(auVar51,auVar51);
        auVar60._0_4_ = auVar53._0_4_ * auVar53._0_4_ + auVar46._0_4_;
        auVar60._4_4_ = auVar53._4_4_ * auVar53._4_4_ + auVar46._4_4_;
        auVar60._8_4_ = auVar53._8_4_ * auVar53._8_4_ + auVar46._8_4_;
        auVar60._12_4_ = auVar53._12_4_ * auVar53._12_4_ + auVar46._12_4_;
        auVar60._16_4_ = auVar53._16_4_ * auVar53._16_4_ + auVar46._16_4_;
        auVar60._20_4_ = auVar53._20_4_ * auVar53._20_4_ + auVar46._20_4_;
        auVar60._24_4_ = auVar53._24_4_ * auVar53._24_4_ + auVar46._24_4_;
        auVar60._28_4_ = auVar53._28_4_ * auVar53._28_4_ + auVar46._28_4_;
        auVar60 = vfmadd231ps_avx512vl(auVar60,auVar50,auVar50);
        auVar46 = vsqrtps_avx(auVar60);
        auVar46 = vdivps_avx(auVar64,auVar46);
        uVar30 = vcmpps_avx512vl(auVar60,auVar44,1);
        auVar53 = vfmadd231ps_avx512vl(auVar58,auVar46,auVar53);
        bVar39 = (byte)uVar30;
        uVar41 = vcmpps_avx512vl(auVar60,auVar45,1);
        bVar5 = (byte)uVar41;
        auVar58._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar47._0_4_ * auVar48._0_4_) + auVar55._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar53._0_4_;
        bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar58._4_4_ =
             (uint)bVar7 * (int)(-(auVar47._4_4_ * auVar48._4_4_) + auVar55._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar53._4_4_;
        bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar58._8_4_ =
             (uint)bVar7 * (int)(-(auVar47._8_4_ * auVar48._8_4_) + auVar55._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar53._8_4_;
        bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar58._12_4_ =
             (uint)bVar7 * (int)(-(auVar47._12_4_ * auVar48._12_4_) + auVar55._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar53._12_4_;
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        auVar58._16_4_ =
             (uint)bVar7 * (int)(-(auVar47._16_4_ * auVar48._16_4_) + auVar55._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar53._16_4_;
        bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
        auVar58._20_4_ =
             (uint)bVar7 * (int)(-(auVar47._20_4_ * auVar48._20_4_) + auVar55._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar53._20_4_;
        bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
        auVar58._24_4_ =
             (uint)bVar7 * (int)(-(auVar47._24_4_ * auVar48._24_4_) + auVar55._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar53._24_4_;
        bVar7 = SUB81(uVar41 >> 7,0);
        auVar58._28_4_ =
             (uint)bVar7 * (int)(-(auVar47._28_4_ * auVar48._28_4_) + auVar55._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar53._28_4_;
        uVar40 = vcmpps_avx512vl(auVar58,ZEXT1632(auVar43),4);
        uVar31 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar43),4);
        uVar40 = uVar40 & uVar31;
        if ((char)uVar40 != '\0') {
          auVar48 = vfnmadd213ps_avx512vl(auVar57,auVar47,auVar56);
          auVar51 = vfmadd213ps_avx512vl(auVar51,auVar46,auVar59);
          auVar46 = vfmadd213ps_avx512vl(auVar50,auVar46,auVar75);
          auVar50._0_4_ =
               (uint)(bVar5 & 1) * auVar48._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar51._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar50._4_4_ =
               (uint)bVar7 * auVar48._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar51._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar50._8_4_ =
               (uint)bVar7 * auVar48._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar51._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar50._12_4_ =
               (uint)bVar7 * auVar48._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar51._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar50._16_4_ =
               (uint)bVar7 * auVar48._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar51._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar50._20_4_ =
               (uint)bVar7 * auVar48._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar51._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar50._24_4_ =
               (uint)bVar7 * auVar48._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar51._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar50._28_4_ =
               (uint)bVar7 * auVar48._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar51._28_4_;
          auVar48._0_4_ =
               (uint)(bVar5 & 1) * (int)(-(auVar47._0_4_ * auVar49._0_4_) + auVar54._0_4_) |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar48._4_4_ =
               (uint)bVar7 * (int)(-(auVar47._4_4_ * auVar49._4_4_) + auVar54._4_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar46._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar48._8_4_ =
               (uint)bVar7 * (int)(-(auVar47._8_4_ * auVar49._8_4_) + auVar54._8_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar46._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar48._12_4_ =
               (uint)bVar7 * (int)(-(auVar47._12_4_ * auVar49._12_4_) + auVar54._12_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar46._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar48._16_4_ =
               (uint)bVar7 * (int)(-(auVar47._16_4_ * auVar49._16_4_) + auVar54._16_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar46._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar48._20_4_ =
               (uint)bVar7 * (int)(-(auVar47._20_4_ * auVar49._20_4_) + auVar54._20_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar46._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar48._24_4_ =
               (uint)bVar7 * (int)(-(auVar47._24_4_ * auVar49._24_4_) + auVar54._24_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar46._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar48._28_4_ =
               (uint)bVar7 * (int)(-(auVar47._28_4_ * auVar49._28_4_) + auVar54._28_4_) |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar46._28_4_;
          if ((char)uVar40 == -1) {
            auVar46 = vunpcklps_avx512vl(auVar58,auVar50);
            auVar47 = vunpcklps_avx512vl(auVar48,auVar52);
            auVar49 = vunpcklpd_avx512vl(auVar46,auVar47);
            auVar46 = vunpckhpd_avx512vl(auVar46,auVar47);
            auVar47 = vunpckhps_avx512vl(auVar58,auVar50);
            auVar48 = vunpckhps_avx512vl(auVar48,auVar52);
            auVar50 = vunpcklpd_avx512vl(auVar47,auVar48);
            auVar47 = vunpckhpd_avx512vl(auVar47,auVar48);
            auVar48 = vinsertf32x4_avx512vl(auVar49,auVar46._0_16_,1);
            *pauVar36 = auVar48;
            auVar48 = vinsertf32x4_avx512vl(auVar50,auVar47._0_16_,1);
            pauVar36[1] = auVar48;
            auVar46 = vshuff64x2_avx512vl(auVar49,auVar46,3);
            pauVar36[2] = auVar46;
            auVar46 = vshuff64x2_avx512vl(auVar50,auVar47,3);
            pauVar36[3] = auVar46;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar64,uVar40,auVar58);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar54,uVar40,auVar50);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar75,uVar40,auVar48);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar59,uVar40,auVar52);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar38 = uVar38 + 0x20;
      pauVar36 = pauVar36 + 4;
      unaff_RBX = unaff_RBX + 0x18;
    } while (uVar35 < (uVar33 & 0xfffffff8));
  }
  iVar34 = (int)uVar35;
  if (iVar34 < (int)param_9) {
    auVar61 = vpbroadcastd_avx512vl();
    auVar61 = vpor_avx2(auVar61,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar62 = vpbroadcastd_avx512vl();
    uVar35 = vpcmpgtd_avx512vl(auVar62,auVar61);
    lVar37 = (longlong)(param_8 + iVar34);
    pauVar36 = (undefined1 (*) [32])(param_1 + lVar37 * 0x10);
    bVar39 = (byte)uVar35;
    if (bVar39 == 0xff) {
      auVar63 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar44 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar45 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar64 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar46 = vunpcklps_avx512vl(auVar63,auVar44);
      auVar63 = vunpckhps_avx512vl(auVar63,auVar44);
      auVar44 = vunpcklps_avx512vl(auVar45,auVar64);
      auVar45 = vunpckhps_avx512vl(auVar45,auVar64);
      auVar47 = vunpcklpd_avx512vl(auVar46,auVar44);
      auVar49 = vunpckhpd_avx512vl(auVar46,auVar44);
      auVar44 = vunpcklpd_avx512vl(auVar63,auVar45);
      auVar63 = vunpckhpd_avx512vl(auVar63,auVar45);
    }
    else {
      auVar42 = vxorps_avx512vl(auVar42,auVar42);
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar47._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar47._4_4_ = (uint)bVar7 * auVar63._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar47._8_4_ = (uint)bVar7 * auVar63._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar47._12_4_ = (uint)bVar7 * auVar63._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar47._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar47._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar47._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar47._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
      auVar42 = vxorps_avx512vl(auVar76,auVar76);
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar49._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar49._4_4_ = (uint)bVar7 * auVar63._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar49._8_4_ = (uint)bVar7 * auVar63._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar49._12_4_ = (uint)bVar7 * auVar63._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar49._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
      auVar42 = vxorps_avx512vl(auVar77,auVar77);
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar44._4_4_ = (uint)bVar7 * auVar63._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar44._8_4_ = (uint)bVar7 * auVar63._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar44._12_4_ = (uint)bVar7 * auVar63._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar63._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_;
      auVar63._0_4_ = (uint)(bVar39 & 1) * auVar45._0_4_;
      auVar63._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_;
      auVar63._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_;
      auVar63._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_;
      auVar63._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_;
      auVar63._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_;
      auVar63._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar45._28_4_;
    }
    uVar32 = vpcmpd_avx512vl(auVar61,auVar62,5);
    bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar20 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar23 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar26 = SUB81(uVar35 >> 7,0);
    bVar8 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar21 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar27 = SUB81(uVar35 >> 7,0);
    bVar9 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar25 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar28 = SUB81(uVar35 >> 7,0);
    auVar74 = ZEXT1664((undefined1  [16])0x0);
    uVar29 = vcmpps_avx512vl(auVar63,auVar74._0_32_,0);
    if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
      pauVar2 = (undefined1 (*) [32])(param_2 + lVar37 * 0xc);
      if (bVar39 == 0xff) {
        auVar61 = pauVar2[1];
        auVar62 = vblendps_avx(auVar61,*pauVar2,0x24);
        auVar45 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar51 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar61 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar54 = vinsertf32x4_avx512vl(auVar45,auVar61._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar45,auVar61,3);
        auVar61 = *(undefined1 (*) [32])(param_3 + lVar37 * 0xc);
        auVar62 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar37 * 0xc);
        auVar45 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar37 * 0xc);
        auVar64 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61,auVar62);
        auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45,auVar62);
        auVar52 = vinsertf32x4_avx512vl(auVar64,auVar46._0_16_,1);
        auVar53 = vshuff64x2_avx512vl(auVar64,auVar46,3);
        auVar61 = vblendps_avx(auVar62,auVar61,0x24);
        auVar61 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar45);
      }
      else {
        auVar42 = vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + (longlong)*pauVar2));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar10 * auVar61._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar10 * auVar61._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar10 * auVar61._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
        auVar55._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar55._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar55._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
        auVar55._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
        auVar55._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar55._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar55._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar55._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
        auVar51._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar51._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar10 * auVar61._8_4_ | (uint)!bVar10 * auVar74._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar10 * auVar61._12_4_ | (uint)!bVar10 * auVar74._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        puVar3 = (undefined4 *)(param_3 + lVar37 * 0xc);
        auVar42 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar36));
        auVar52._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar52._4_4_ = (uint)bVar10 * auVar61._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar52._8_4_ = (uint)bVar10 * auVar61._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar52._12_4_ = (uint)bVar10 * auVar61._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + unaff_RBX));
        auVar53._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar53._4_4_ = (uint)bVar10 * auVar61._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar53._8_4_ = (uint)bVar10 * auVar61._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar53._12_4_ = (uint)bVar10 * auVar61._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
        auVar62 = vgatherdps_avx512vl(*puVar3);
        auVar61._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar62._4_4_;
        auVar61._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_;
        auVar61._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar62._8_4_;
        auVar61._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar62._12_4_;
        auVar61._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
        auVar61._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
        auVar61._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
        auVar61._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      }
      auVar71._4_4_ = param_5;
      auVar71._0_4_ = param_5;
      auVar71._8_4_ = param_5;
      auVar71._12_4_ = param_5;
      auVar71._16_4_ = param_5;
      auVar71._20_4_ = param_5;
      auVar71._24_4_ = param_5;
      auVar71._28_4_ = param_5;
      auVar70._4_4_ = param_6;
      auVar70._0_4_ = param_6;
      auVar70._8_4_ = param_6;
      auVar70._12_4_ = param_6;
      auVar70._16_4_ = param_6;
      auVar70._20_4_ = param_6;
      auVar70._24_4_ = param_6;
      auVar70._28_4_ = param_6;
      piVar4 = (int *)(param_4 + (iVar34 << 2));
      auVar59._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar4[1];
      auVar59._0_4_ = (uint)(bVar39 & 1) * *piVar4;
      auVar59._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar4[2];
      auVar59._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar4[3];
      auVar59._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar4[4];
      auVar59._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar4[5];
      auVar59._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar4[6];
      auVar59._28_4_ = (uint)(byte)(uVar35 >> 7) * piVar4[7];
      auVar62 = vfmadd213ps_avx512vl(auVar59,auVar70,auVar71);
      auVar42 = vxorps_avx512vl(auVar78,auVar78);
      auVar64 = vbroadcastss_avx512vl(auVar68);
      auVar46 = vsubps_avx512vl(auVar62,auVar64);
      auVar48 = vfnmadd213ps_avx512vl(auVar62,auVar52,auVar54);
      auVar50 = vfnmadd213ps_avx512vl(auVar62,auVar53,auVar55);
      auVar58 = vfnmadd213ps_avx512vl(auVar62,auVar61,auVar51);
      auVar45._4_4_ = (uint)bVar7 * auVar47._4_4_ | (uint)!bVar7 * iStack_13c;
      auVar45._0_4_ = (uint)(bVar39 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar39 & 1) * local_140;
      auVar45._8_4_ = (uint)bVar11 * auVar47._8_4_ | (uint)!bVar11 * iStack_138;
      auVar45._12_4_ = (uint)bVar14 * auVar47._12_4_ | (uint)!bVar14 * iStack_134;
      auVar45._16_4_ = (uint)bVar17 * auVar47._16_4_ | (uint)!bVar17 * iStack_130;
      auVar45._20_4_ = (uint)bVar20 * auVar47._20_4_ | (uint)!bVar20 * iStack_12c;
      auVar45._24_4_ = (uint)bVar23 * auVar47._24_4_ | (uint)!bVar23 * iStack_128;
      auVar45._28_4_ = (uint)bVar26 * auVar47._28_4_ | (uint)!bVar26 * iStack_124;
      auVar56._4_4_ = (uint)bVar8 * auVar49._4_4_ | (uint)!bVar8 * iStack_11c;
      auVar56._0_4_ = (uint)(bVar39 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar56._8_4_ = (uint)bVar12 * auVar49._8_4_ | (uint)!bVar12 * iStack_118;
      auVar56._12_4_ = (uint)bVar15 * auVar49._12_4_ | (uint)!bVar15 * iStack_114;
      auVar56._16_4_ = (uint)bVar18 * auVar49._16_4_ | (uint)!bVar18 * iStack_110;
      auVar56._20_4_ = (uint)bVar21 * auVar49._20_4_ | (uint)!bVar21 * iStack_10c;
      auVar56._24_4_ = (uint)bVar24 * auVar49._24_4_ | (uint)!bVar24 * iStack_108;
      auVar56._28_4_ = (uint)bVar27 * auVar49._28_4_ | (uint)!bVar27 * iStack_104;
      auVar57._4_4_ = (uint)bVar9 * auVar44._4_4_ | (uint)!bVar9 * iStack_fc;
      auVar57._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar57._8_4_ = (uint)bVar13 * auVar44._8_4_ | (uint)!bVar13 * iStack_f8;
      auVar57._12_4_ = (uint)bVar16 * auVar44._12_4_ | (uint)!bVar16 * iStack_f4;
      auVar57._16_4_ = (uint)bVar19 * auVar44._16_4_ | (uint)!bVar19 * iStack_f0;
      auVar57._20_4_ = (uint)bVar22 * auVar44._20_4_ | (uint)!bVar22 * iStack_ec;
      auVar57._24_4_ = (uint)bVar25 * auVar44._24_4_ | (uint)!bVar25 * iStack_e8;
      auVar57._28_4_ = (uint)bVar28 * auVar44._28_4_ | (uint)!bVar28 * iStack_e4;
      auVar44 = vsubps_avx512vl(auVar45,auVar48);
      auVar45 = vsubps_avx512vl(auVar56,auVar50);
      auVar47 = vsubps_avx512vl(auVar57,auVar58);
      auVar62 = vmulps_avx512vl(auVar45,auVar45);
      auVar62 = vfmadd231ps_avx512vl(auVar62,auVar44,auVar44);
      auVar49 = vfmadd231ps_avx512vl(auVar62,auVar47,auVar47);
      auVar62 = vsqrtps_avx512vl(auVar49);
      auVar64 = vdivps_avx512vl(auVar64,auVar62);
      auVar52 = vfnmadd213ps_avx512vl(auVar52,auVar46,auVar54);
      param_7 = param_7 * param_7;
      auVar69._4_4_ = param_7;
      auVar69._0_4_ = param_7;
      auVar69._8_4_ = param_7;
      auVar69._12_4_ = param_7;
      auVar69._16_4_ = param_7;
      auVar69._20_4_ = param_7;
      auVar69._24_4_ = param_7;
      auVar69._28_4_ = param_7;
      uVar35 = vcmpps_avx512vl(auVar49,auVar69,1);
      auVar62._4_4_ = __real_322bcc77;
      auVar62._0_4_ = __real_322bcc77;
      auVar62._8_4_ = __real_322bcc77;
      auVar62._12_4_ = __real_322bcc77;
      auVar62._16_4_ = __real_322bcc77;
      auVar62._20_4_ = __real_322bcc77;
      auVar62._24_4_ = __real_322bcc77;
      auVar62._28_4_ = __real_322bcc77;
      uVar30 = vcmpps_avx512vl(auVar49,auVar62,1);
      auVar62 = vfmadd231ps_avx512vl(auVar48,auVar64,auVar44);
      bVar5 = (byte)uVar35;
      bVar6 = (byte)uVar30;
      auVar65._0_4_ =
           (uint)(bVar6 & 1) * auVar52._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar62._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar7 * auVar52._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar62._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar7 * auVar52._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar62._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar7 * auVar52._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar62._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar7 * auVar52._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar7 * auVar52._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar7 * auVar52._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar7 * auVar52._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      uVar29 = vcmpps_avx512vl(auVar63,ZEXT1632(auVar42),4);
      uVar32 = vcmpps_avx512vl(auVar65,ZEXT1632(auVar42),4);
      bVar39 = (byte)uVar29 & (byte)uVar32 & bVar39;
      uVar41 = (ulonglong)bVar39;
      if (bVar39 != 0) {
        auVar62 = vfnmadd213ps_avx512vl(auVar53,auVar46,auVar55);
        auVar61 = vfnmadd213ps_avx512vl(auVar61,auVar46,auVar51);
        auVar44 = vfmadd213ps_avx512vl(auVar45,auVar64,auVar50);
        auVar45 = vfmadd213ps_avx512vl(auVar47,auVar64,auVar58);
        auVar66._0_4_ =
             (uint)(bVar6 & 1) * auVar62._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar66._4_4_ =
             (uint)bVar7 * auVar62._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar66._8_4_ =
             (uint)bVar7 * auVar62._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar66._12_4_ =
             (uint)bVar7 * auVar62._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar66._16_4_ =
             (uint)bVar7 * auVar62._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar66._20_4_ =
             (uint)bVar7 * auVar62._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar66._24_4_ =
             (uint)bVar7 * auVar62._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar66._28_4_ =
             (uint)bVar7 * auVar62._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
        auVar67._0_4_ =
             (uint)(bVar6 & 1) * auVar61._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar45._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * auVar61._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * auVar61._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * auVar61._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * auVar61._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * auVar61._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * auVar61._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * auVar61._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar45._28_4_;
        if (bVar39 == 0xff) {
          auVar62 = vunpcklps_avx512vl(auVar65,auVar66);
          auVar61 = vunpcklps_avx(auVar67,auVar63);
          auVar44 = vunpcklpd_avx(auVar62,auVar61);
          auVar61 = vunpckhpd_avx(auVar62,auVar61);
          auVar45 = vunpckhps_avx512vl(auVar65,auVar66);
          auVar62 = vunpckhps_avx(auVar67,auVar63);
          auVar63 = vunpcklpd_avx(auVar45,auVar62);
          auVar62 = vunpckhpd_avx(auVar45,auVar62);
          auVar72._16_16_ = auVar61._0_16_;
          auVar72._0_16_ = auVar44._0_16_;
          *pauVar36 = auVar72;
          auVar73._16_16_ = auVar62._0_16_;
          auVar73._0_16_ = auVar63._0_16_;
          pauVar36[1] = auVar73;
          auVar61 = vperm2f128_avx(auVar44,auVar61,0x31);
          pauVar36[2] = auVar61;
          auVar61 = vperm2f128_avx(auVar63,auVar62,0x31);
          pauVar36[3] = auVar61;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar65);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar67);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar63);
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithRadiusMap_avx512skx @ 140318250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithRadiusMap_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  undefined1 (*pauVar36) [32];
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [64];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar76 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM22 [64];
  undefined1 auVar78 [16];
  undefined1 in_ZMM24 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar62 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar61 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar60 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar78 = in_ZMM24._0_16_;
  auVar77 = in_ZMM18._0_16_;
  auVar76 = in_ZMM17._0_16_;
  auVar43 = in_ZMM16._0_16_;
  uVar33 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar33 = param_9;
  }
  if ((int)(uVar33 & 0xfffffff8) < 1) {
    uVar35 = 0;
  }
  else {
    auVar63._4_4_ = param_7;
    auVar63._0_4_ = param_7;
    auVar63._8_4_ = param_7;
    auVar63._12_4_ = param_7;
    auVar63._16_4_ = param_7;
    auVar63._20_4_ = param_7;
    auVar63._24_4_ = param_7;
    auVar63._28_4_ = param_7;
    auVar65._4_4_ = param_5;
    auVar65._0_4_ = param_5;
    auVar65._8_4_ = param_5;
    auVar65._12_4_ = param_5;
    auVar65._16_4_ = param_5;
    auVar65._20_4_ = param_5;
    auVar65._24_4_ = param_5;
    auVar65._28_4_ = param_5;
    unaff_RBX = (longlong)param_8 * 3 + 0x10;
    pauVar36 = (undefined1 (*) [32])((longlong)param_8 * 0x10 + param_1);
    uVar38 = 0;
    auVar43 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar76 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar77 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar44 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar42 = vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
    auVar78 = __ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c._0_16_;
    uVar35 = 0;
    do {
      auVar45 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar46 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar47 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar48 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar49 = vunpckhps_avx512vl(auVar45,auVar46);
      auVar50 = vunpckhps_avx512vl(auVar47,auVar48);
      auVar51 = vunpckhpd_avx512vl(auVar49,auVar50);
      uVar29 = vcmpps_avx512vl(auVar51,ZEXT1632(auVar42),4);
      if ((char)uVar29 != '\0') {
        auVar49 = vunpcklpd_avx512vl(auVar49,auVar50);
        auVar45 = vunpcklps_avx512vl(auVar45,auVar46);
        auVar46 = vunpcklps_avx512vl(auVar47,auVar48);
        auVar50 = vunpckhpd_avx512vl(auVar45,auVar46);
        auVar52 = vunpcklpd_avx512vl(auVar45,auVar46);
        auVar45 = *(undefined1 (*) [32])(param_2 + -0x40 + unaff_RBX * 4);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x20 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + unaff_RBX * 4);
        auVar48 = vblendps_avx(auVar46,auVar45,0x24);
        auVar45 = vpermt2ps_avx512vl(auVar45,auVar60,auVar46);
        auVar53 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar46 = vpermt2ps_avx512vl(auVar47,auVar61,auVar46);
        auVar54 = vinsertf32x4_avx512vl(auVar45,auVar46._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar45,auVar46,3);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x40 + unaff_RBX * 4);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x20 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + unaff_RBX * 4);
        auVar48 = vblendps_avx(auVar46,auVar45,0x24);
        auVar45 = vpermt2ps_avx512vl(auVar45,auVar60,auVar46);
        auVar48 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar46 = vpermt2ps_avx512vl(auVar47,auVar61,auVar46);
        auVar47 = vinsertf32x4_avx512vl(auVar45,auVar46._0_16_,1);
        auVar56 = vshuff64x2_avx512vl(auVar45,auVar46,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar38);
        auVar75._0_4_ = param_7 * *pfVar1 + param_6;
        auVar75._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar75._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar75._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar75._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar75._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar75._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar75._28_4_ = param_7 * pfVar1[7] + param_6;
        auVar57 = vfnmadd213ps_avx512vl(auVar47,auVar65,auVar54);
        auVar58 = vfnmadd213ps_avx512vl(auVar56,auVar65,auVar55);
        auVar73._0_4_ = -(param_5 * auVar48._0_4_) + auVar53._0_4_;
        auVar73._4_4_ = -(param_5 * auVar48._4_4_) + auVar53._4_4_;
        auVar73._8_4_ = -(param_5 * auVar48._8_4_) + auVar53._8_4_;
        auVar73._12_4_ = -(param_5 * auVar48._12_4_) + auVar53._12_4_;
        auVar73._16_4_ = -(param_5 * auVar48._16_4_) + auVar53._16_4_;
        auVar73._20_4_ = -(param_5 * auVar48._20_4_) + auVar53._20_4_;
        auVar73._24_4_ = -(param_5 * auVar48._24_4_) + auVar53._24_4_;
        auVar73._28_4_ = -(param_5 * auVar48._28_4_) + auVar53._28_4_;
        auVar52 = vsubps_avx512vl(auVar52,auVar57);
        auVar50 = vsubps_avx512vl(auVar50,auVar58);
        auVar49 = vsubps_avx512vl(auVar49,auVar73);
        auVar45 = vmulps_avx512vl(auVar50,auVar50);
        auVar46._0_4_ = auVar52._0_4_ * auVar52._0_4_ + auVar45._0_4_;
        auVar46._4_4_ = auVar52._4_4_ * auVar52._4_4_ + auVar45._4_4_;
        auVar46._8_4_ = auVar52._8_4_ * auVar52._8_4_ + auVar45._8_4_;
        auVar46._12_4_ = auVar52._12_4_ * auVar52._12_4_ + auVar45._12_4_;
        auVar46._16_4_ = auVar52._16_4_ * auVar52._16_4_ + auVar45._16_4_;
        auVar46._20_4_ = auVar52._20_4_ * auVar52._20_4_ + auVar45._20_4_;
        auVar46._24_4_ = auVar52._24_4_ * auVar52._24_4_ + auVar45._24_4_;
        auVar46._28_4_ = auVar52._28_4_ * auVar52._28_4_ + auVar45._28_4_;
        auVar59 = vfmadd231ps_avx512vl(auVar46,auVar49,auVar49);
        auVar45 = vsqrtps_avx(auVar59);
        auVar45 = vdivps_avx(auVar75,auVar45);
        auVar46 = vsubps_avx(auVar65,auVar75);
        auVar74._0_4_ = auVar75._0_4_ * auVar75._0_4_;
        auVar74._4_4_ = auVar75._4_4_ * auVar75._4_4_;
        auVar74._8_4_ = auVar75._8_4_ * auVar75._8_4_;
        auVar74._12_4_ = auVar75._12_4_ * auVar75._12_4_;
        auVar74._16_4_ = auVar75._16_4_ * auVar75._16_4_;
        auVar74._20_4_ = auVar75._20_4_ * auVar75._20_4_;
        auVar74._24_4_ = auVar75._24_4_ * auVar75._24_4_;
        auVar74._28_4_ = auVar75._28_4_ * auVar75._28_4_;
        uVar30 = vcmpps_avx512vl(auVar59,auVar74,1);
        auVar52 = vfmadd231ps_avx512vl(auVar57,auVar45,auVar52);
        bVar39 = (byte)uVar30;
        uVar41 = vcmpps_avx512vl(auVar59,auVar44,1);
        bVar5 = (byte)uVar41;
        auVar57._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar46._0_4_ * auVar47._0_4_) + auVar54._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar52._0_4_;
        bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar57._4_4_ =
             (uint)bVar7 * (int)(-(auVar46._4_4_ * auVar47._4_4_) + auVar54._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar52._4_4_;
        bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar57._8_4_ =
             (uint)bVar7 * (int)(-(auVar46._8_4_ * auVar47._8_4_) + auVar54._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar52._8_4_;
        bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar57._12_4_ =
             (uint)bVar7 * (int)(-(auVar46._12_4_ * auVar47._12_4_) + auVar54._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar52._12_4_;
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        auVar57._16_4_ =
             (uint)bVar7 * (int)(-(auVar46._16_4_ * auVar47._16_4_) + auVar54._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar52._16_4_;
        bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
        auVar57._20_4_ =
             (uint)bVar7 * (int)(-(auVar46._20_4_ * auVar47._20_4_) + auVar54._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar52._20_4_;
        bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
        auVar57._24_4_ =
             (uint)bVar7 * (int)(-(auVar46._24_4_ * auVar47._24_4_) + auVar54._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar52._24_4_;
        bVar7 = SUB81(uVar41 >> 7,0);
        auVar57._28_4_ =
             (uint)bVar7 * (int)(-(auVar46._28_4_ * auVar47._28_4_) + auVar54._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar52._28_4_;
        uVar40 = vcmpps_avx512vl(auVar57,ZEXT1632(auVar42),4);
        uVar31 = vcmpps_avx512vl(auVar51,ZEXT1632(auVar42),4);
        uVar40 = uVar40 & uVar31;
        if ((char)uVar40 != '\0') {
          auVar47 = vfnmadd213ps_avx512vl(auVar56,auVar46,auVar55);
          auVar52._0_4_ = -(auVar46._0_4_ * auVar48._0_4_) + auVar53._0_4_;
          auVar52._4_4_ = -(auVar46._4_4_ * auVar48._4_4_) + auVar53._4_4_;
          auVar52._8_4_ = -(auVar46._8_4_ * auVar48._8_4_) + auVar53._8_4_;
          auVar52._12_4_ = -(auVar46._12_4_ * auVar48._12_4_) + auVar53._12_4_;
          auVar52._16_4_ = -(auVar46._16_4_ * auVar48._16_4_) + auVar53._16_4_;
          auVar52._20_4_ = -(auVar46._20_4_ * auVar48._20_4_) + auVar53._20_4_;
          auVar52._24_4_ = -(auVar46._24_4_ * auVar48._24_4_) + auVar53._24_4_;
          auVar52._28_4_ = -(auVar46._28_4_ * auVar48._28_4_) + auVar53._28_4_;
          auVar46 = vfmadd213ps_avx512vl(auVar50,auVar45,auVar58);
          auVar45 = vfmadd213ps_avx512vl(auVar49,auVar45,auVar73);
          auVar48._0_4_ =
               (uint)(bVar5 & 1) * auVar47._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar48._4_4_ =
               (uint)bVar7 * auVar47._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar46._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar48._8_4_ =
               (uint)bVar7 * auVar47._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar46._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar48._12_4_ =
               (uint)bVar7 * auVar47._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar46._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar48._16_4_ =
               (uint)bVar7 * auVar47._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar46._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar48._20_4_ =
               (uint)bVar7 * auVar47._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar46._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar48._24_4_ =
               (uint)bVar7 * auVar47._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar46._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar48._28_4_ =
               (uint)bVar7 * auVar47._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar46._28_4_;
          auVar47._0_4_ =
               (uint)(bVar5 & 1) * (int)auVar52._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar45._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar7 * (int)auVar52._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar45._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar7 * (int)auVar52._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar45._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar7 * (int)auVar52._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar45._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar7 * (int)auVar52._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar45._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar7 * (int)auVar52._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar45._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar7 * (int)auVar52._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar45._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar7 * (int)auVar52._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar45._28_4_;
          if ((char)uVar40 == -1) {
            auVar45 = vunpcklps_avx512vl(auVar57,auVar48);
            auVar46 = vunpcklps_avx512vl(auVar47,auVar51);
            auVar49 = vunpcklpd_avx512vl(auVar45,auVar46);
            auVar45 = vunpckhpd_avx512vl(auVar45,auVar46);
            auVar46 = vunpckhps_avx512vl(auVar57,auVar48);
            auVar47 = vunpckhps_avx512vl(auVar47,auVar51);
            auVar48 = vunpcklpd_avx512vl(auVar46,auVar47);
            auVar46 = vunpckhpd_avx512vl(auVar46,auVar47);
            auVar47 = vinsertf32x4_avx512vl(auVar49,auVar45._0_16_,1);
            *pauVar36 = auVar47;
            auVar47 = vinsertf32x4_avx512vl(auVar48,auVar46._0_16_,1);
            pauVar36[1] = auVar47;
            auVar45 = vshuff64x2_avx512vl(auVar49,auVar45,3);
            pauVar36[2] = auVar45;
            auVar45 = vshuff64x2_avx512vl(auVar48,auVar46,3);
            pauVar36[3] = auVar45;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar63,uVar40,auVar57);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar65,uVar40,auVar48);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar52,uVar40,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar73,uVar40,auVar51);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar38 = uVar38 + 0x20;
      pauVar36 = pauVar36 + 4;
      unaff_RBX = unaff_RBX + 0x18;
    } while (uVar35 < (uVar33 & 0xfffffff8));
  }
  iVar34 = (int)uVar35;
  if (iVar34 < (int)param_9) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar60 = vpor_avx2(auVar60,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar61 = vpbroadcastd_avx512vl();
    uVar35 = vpcmpgtd_avx512vl(auVar61,auVar60);
    lVar37 = (longlong)(param_8 + iVar34);
    pauVar36 = (undefined1 (*) [32])(param_1 + lVar37 * 0x10);
    bVar39 = (byte)uVar35;
    if (bVar39 == 0xff) {
      auVar62 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar44 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar63 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar65 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar45 = vunpcklps_avx512vl(auVar62,auVar44);
      auVar62 = vunpckhps_avx512vl(auVar62,auVar44);
      auVar44 = vunpcklps_avx512vl(auVar63,auVar65);
      auVar63 = vunpckhps_avx512vl(auVar63,auVar65);
      auVar49 = vunpcklpd_avx512vl(auVar45,auVar44);
      auVar44 = vunpckhpd_avx512vl(auVar45,auVar44);
      auVar45 = vunpcklpd_avx512vl(auVar62,auVar63);
      auVar62 = vunpckhpd_avx512vl(auVar62,auVar63);
    }
    else {
      auVar43 = vxorps_avx512vl(auVar43,auVar43);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar49._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar49._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar49._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar49._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar49._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar43 = vxorps_avx512vl(auVar76,auVar76);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar44._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar44._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar44._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar43 = vxorps_avx512vl(auVar77,auVar77);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar45._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar45._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar45._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar45._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar45._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar45._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar45._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar45._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar62._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
      auVar62._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
    }
    uVar32 = vpcmpd_avx512vl(auVar60,auVar61,5);
    bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar20 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar23 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar26 = SUB81(uVar35 >> 7,0);
    bVar8 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar21 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar27 = SUB81(uVar35 >> 7,0);
    bVar9 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar25 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar28 = SUB81(uVar35 >> 7,0);
    auVar72 = ZEXT1664((undefined1  [16])0x0);
    uVar29 = vcmpps_avx512vl(auVar62,auVar72._0_32_,0);
    if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
      pauVar2 = (undefined1 (*) [32])(param_2 + lVar37 * 0xc);
      if (bVar39 == 0xff) {
        auVar60 = pauVar2[1];
        auVar61 = vblendps_avx(auVar60,*pauVar2,0x24);
        auVar63 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60);
        auVar53 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar60 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar60);
        auVar51 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
        auVar50 = vshuff64x2_avx512vl(auVar63,auVar60,3);
        auVar60 = *(undefined1 (*) [32])(param_3 + lVar37 * 0xc);
        auVar61 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar37 * 0xc);
        auVar63 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar37 * 0xc);
        auVar65 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60,auVar61);
        auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar63,auVar61);
        auVar54 = vinsertf32x4_avx512vl(auVar65,auVar46._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar65,auVar46,3);
        auVar60 = vblendps_avx(auVar61,auVar60,0x24);
        auVar60 = vpermt2ps_avx512vl(auVar60,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar63);
      }
      else {
        auVar43 = vxorps_avx512vl(auVar49._0_16_,auVar49._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + (longlong)*pauVar2));
        auVar51._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar51._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
        auVar50._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar50._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        auVar50._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar60._8_4_;
        auVar50._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar60._12_4_;
        auVar50._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar50._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar50._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar50._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
        auVar53._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar53._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar53._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar72._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar53._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar72._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        puVar3 = (undefined4 *)(param_3 + lVar37 * 0xc);
        auVar43 = vxorps_avx512vl(auVar45._0_16_,auVar45._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar36));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar43 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + unaff_RBX));
        auVar55._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar55._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar55._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar55._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar55._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar55._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar55._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar55._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar61 = vgatherdps_avx512vl(*puVar3);
        auVar60._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar60._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
        auVar60._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
        auVar60._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar60._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar60._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar60._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      }
      auVar71._4_4_ = param_6;
      auVar71._0_4_ = param_6;
      auVar71._8_4_ = param_6;
      auVar71._12_4_ = param_6;
      auVar71._16_4_ = param_6;
      auVar71._20_4_ = param_6;
      auVar71._24_4_ = param_6;
      auVar71._28_4_ = param_6;
      auVar69._4_4_ = param_7;
      auVar69._0_4_ = param_7;
      auVar69._8_4_ = param_7;
      auVar69._12_4_ = param_7;
      auVar69._16_4_ = param_7;
      auVar69._20_4_ = param_7;
      auVar69._24_4_ = param_7;
      auVar69._28_4_ = param_7;
      piVar4 = (int *)(param_4 + (iVar34 << 2));
      auVar64._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar4[1];
      auVar64._0_4_ = (uint)(bVar39 & 1) * *piVar4;
      auVar64._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar4[2];
      auVar64._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar4[3];
      auVar64._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar4[4];
      auVar64._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar4[5];
      auVar64._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar4[6];
      auVar64._28_4_ = (uint)(byte)(uVar35 >> 7) * piVar4[7];
      auVar61 = vfmadd213ps_avx512vl(auVar64,auVar69,auVar71);
      auVar43 = vxorps_avx512vl(auVar78,auVar78);
      auVar63 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
      auVar65 = vfnmadd213ps_avx512vl(auVar54,auVar63,auVar51);
      auVar46 = vfnmadd213ps_avx512vl(auVar55,auVar63,auVar50);
      auVar47 = vfnmadd213ps_avx512vl(auVar60,auVar63,auVar53);
      auVar56._4_4_ = (uint)bVar7 * auVar49._4_4_ | (uint)!bVar7 * iStack_13c;
      auVar56._0_4_ = (uint)(bVar39 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar39 & 1) * local_140;
      auVar56._8_4_ = (uint)bVar11 * auVar49._8_4_ | (uint)!bVar11 * iStack_138;
      auVar56._12_4_ = (uint)bVar14 * auVar49._12_4_ | (uint)!bVar14 * iStack_134;
      auVar56._16_4_ = (uint)bVar17 * auVar49._16_4_ | (uint)!bVar17 * iStack_130;
      auVar56._20_4_ = (uint)bVar20 * auVar49._20_4_ | (uint)!bVar20 * iStack_12c;
      auVar56._24_4_ = (uint)bVar23 * auVar49._24_4_ | (uint)!bVar23 * iStack_128;
      auVar56._28_4_ = (uint)bVar26 * auVar49._28_4_ | (uint)!bVar26 * iStack_124;
      auVar58._4_4_ = (uint)bVar8 * auVar44._4_4_ | (uint)!bVar8 * iStack_11c;
      auVar58._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar58._8_4_ = (uint)bVar12 * auVar44._8_4_ | (uint)!bVar12 * iStack_118;
      auVar58._12_4_ = (uint)bVar15 * auVar44._12_4_ | (uint)!bVar15 * iStack_114;
      auVar58._16_4_ = (uint)bVar18 * auVar44._16_4_ | (uint)!bVar18 * iStack_110;
      auVar58._20_4_ = (uint)bVar21 * auVar44._20_4_ | (uint)!bVar21 * iStack_10c;
      auVar58._24_4_ = (uint)bVar24 * auVar44._24_4_ | (uint)!bVar24 * iStack_108;
      auVar58._28_4_ = (uint)bVar27 * auVar44._28_4_ | (uint)!bVar27 * iStack_104;
      auVar59._4_4_ = (uint)bVar9 * auVar45._4_4_ | (uint)!bVar9 * iStack_fc;
      auVar59._0_4_ = (uint)(bVar39 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar59._8_4_ = (uint)bVar13 * auVar45._8_4_ | (uint)!bVar13 * iStack_f8;
      auVar59._12_4_ = (uint)bVar16 * auVar45._12_4_ | (uint)!bVar16 * iStack_f4;
      auVar59._16_4_ = (uint)bVar19 * auVar45._16_4_ | (uint)!bVar19 * iStack_f0;
      auVar59._20_4_ = (uint)bVar22 * auVar45._20_4_ | (uint)!bVar22 * iStack_ec;
      auVar59._24_4_ = (uint)bVar25 * auVar45._24_4_ | (uint)!bVar25 * iStack_e8;
      auVar59._28_4_ = (uint)bVar28 * auVar45._28_4_ | (uint)!bVar28 * iStack_e4;
      auVar44 = vsubps_avx512vl(auVar56,auVar65);
      auVar45 = vsubps_avx512vl(auVar58,auVar46);
      auVar48 = vsubps_avx512vl(auVar59,auVar47);
      auVar49 = vmulps_avx512vl(auVar45,auVar45);
      auVar49 = vfmadd231ps_avx512vl(auVar49,auVar44,auVar44);
      auVar49 = vfmadd231ps_avx512vl(auVar49,auVar48,auVar48);
      auVar52 = vsqrtps_avx512vl(auVar49);
      auVar52 = vdivps_avx512vl(auVar61,auVar52);
      auVar63 = vsubps_avx512vl(auVar63,auVar61);
      auVar51 = vfnmadd213ps_avx512vl(auVar54,auVar63,auVar51);
      auVar61 = vmulps_avx512vl(auVar61,auVar61);
      uVar35 = vcmpps_avx512vl(auVar49,auVar61,1);
      auVar61._4_4_ = __real_322bcc77;
      auVar61._0_4_ = __real_322bcc77;
      auVar61._8_4_ = __real_322bcc77;
      auVar61._12_4_ = __real_322bcc77;
      auVar61._16_4_ = __real_322bcc77;
      auVar61._20_4_ = __real_322bcc77;
      auVar61._24_4_ = __real_322bcc77;
      auVar61._28_4_ = __real_322bcc77;
      uVar30 = vcmpps_avx512vl(auVar49,auVar61,1);
      auVar61 = vfmadd231ps_avx512vl(auVar65,auVar52,auVar44);
      bVar5 = (byte)uVar35;
      bVar6 = (byte)uVar30;
      auVar66._0_4_ =
           (uint)(bVar6 & 1) * auVar51._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar61._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar66._4_4_ =
           (uint)bVar7 * auVar51._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar66._8_4_ =
           (uint)bVar7 * auVar51._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar66._12_4_ =
           (uint)bVar7 * auVar51._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar66._16_4_ =
           (uint)bVar7 * auVar51._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar66._20_4_ =
           (uint)bVar7 * auVar51._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar66._24_4_ =
           (uint)bVar7 * auVar51._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar66._28_4_ =
           (uint)bVar7 * auVar51._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      uVar29 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar43),4);
      uVar32 = vcmpps_avx512vl(auVar66,ZEXT1632(auVar43),4);
      bVar39 = (byte)uVar29 & (byte)uVar32 & bVar39;
      uVar41 = (ulonglong)bVar39;
      if (bVar39 != 0) {
        auVar61 = vfnmadd213ps_avx512vl(auVar55,auVar63,auVar50);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar63,auVar53);
        auVar44 = vfmadd213ps_avx512vl(auVar45,auVar52,auVar46);
        auVar63 = vfmadd213ps_avx512vl(auVar48,auVar52,auVar47);
        auVar67._0_4_ =
             (uint)(bVar6 & 1) * auVar61._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * auVar61._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * auVar61._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * auVar61._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * auVar61._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * auVar61._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * auVar61._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * auVar61._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
        auVar68._0_4_ =
             (uint)(bVar6 & 1) * auVar60._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar63._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar68._4_4_ =
             (uint)bVar7 * auVar60._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar68._8_4_ =
             (uint)bVar7 * auVar60._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar68._12_4_ =
             (uint)bVar7 * auVar60._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar68._16_4_ =
             (uint)bVar7 * auVar60._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar68._20_4_ =
             (uint)bVar7 * auVar60._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar68._24_4_ =
             (uint)bVar7 * auVar60._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar68._28_4_ =
             (uint)bVar7 * auVar60._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
        if (bVar39 == 0xff) {
          auVar60 = vunpcklps_avx(auVar66,auVar67);
          auVar61 = vunpcklps_avx(auVar68,auVar62);
          auVar63 = vunpcklpd_avx512vl(auVar60,auVar61);
          auVar60 = vunpckhpd_avx(auVar60,auVar61);
          auVar61 = vunpckhps_avx(auVar66,auVar67);
          auVar62 = vunpckhps_avx(auVar68,auVar62);
          auVar44 = vunpcklpd_avx(auVar61,auVar62);
          auVar61 = vunpckhpd_avx(auVar61,auVar62);
          auVar62 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
          *pauVar36 = auVar62;
          auVar70._16_16_ = auVar61._0_16_;
          auVar70._0_16_ = auVar44._0_16_;
          pauVar36[1] = auVar70;
          auVar60 = vshuff64x2_avx512vl(auVar63,auVar60,3);
          pauVar36[2] = auVar60;
          auVar60 = vperm2f128_avx(auVar44,auVar61,0x31);
          pauVar36[3] = auVar60;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar67);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar68);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar62);
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraintsWithoutMaps_avx512skx @ 140318a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLegacySphericalBackstopConstraintsWithoutMaps_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,float param_5,
               int param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 *puVar2;
  byte bVar3;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [32];
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  float fVar68;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar72 [32];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar73 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar74 [16];
  undefined1 in_ZMM19 [64];
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_58 [16];
  
  auVar60 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar59 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar58 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar74 = in_ZMM19._0_16_;
  auVar73 = in_ZMM17._0_16_;
  auVar42 = in_ZMM16._0_16_;
  local_58 = in_ZMM11._0_16_;
  local_88 = in_ZMM8._0_16_;
  local_98 = in_ZMM7._0_16_;
  uVar36 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar36 = param_7;
  }
  fVar68 = in_ZMM3._0_4_;
  if ((int)(uVar36 & 0xfffffff8) < 1) {
    uVar37 = 0;
  }
  else {
    auVar61._4_4_ = fVar68;
    auVar61._0_4_ = fVar68;
    auVar61._8_4_ = fVar68;
    auVar61._12_4_ = fVar68;
    auVar61._16_4_ = fVar68;
    auVar61._20_4_ = fVar68;
    auVar61._24_4_ = fVar68;
    auVar61._28_4_ = fVar68;
    auVar62._4_4_ = param_5;
    auVar62._0_4_ = param_5;
    auVar62._8_4_ = param_5;
    auVar62._12_4_ = param_5;
    auVar62._16_4_ = param_5;
    auVar62._20_4_ = param_5;
    auVar62._24_4_ = param_5;
    auVar62._28_4_ = param_5;
    fVar27 = fVar68 - param_5;
    auVar63._4_4_ = fVar27;
    auVar63._0_4_ = fVar27;
    auVar63._8_4_ = fVar27;
    auVar63._12_4_ = fVar27;
    auVar63._16_4_ = fVar27;
    auVar63._20_4_ = fVar27;
    auVar63._24_4_ = fVar27;
    auVar63._28_4_ = fVar27;
    fVar26 = param_5 * param_5;
    auVar64._4_4_ = fVar26;
    auVar64._0_4_ = fVar26;
    auVar64._8_4_ = fVar26;
    auVar64._12_4_ = fVar26;
    auVar64._16_4_ = fVar26;
    auVar64._20_4_ = fVar26;
    auVar64._24_4_ = fVar26;
    auVar64._28_4_ = fVar26;
    pauVar38 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    lVar35 = (longlong)param_6 * 0xc + 0x40;
    uVar37 = 0;
    auVar42 = vxorps_avx512vl(auVar42,auVar42);
    auVar73 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar74 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar43 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    do {
      auVar44 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],0);
      auVar45 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],3);
      auVar46 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],0);
      auVar47 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],3);
      auVar48 = vunpckhps_avx512vl(auVar44,auVar45);
      auVar49 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar50 = vunpckhpd_avx512vl(auVar48,auVar49);
      uVar28 = vcmpps_avx512vl(auVar50,ZEXT1632(auVar42),4);
      if ((char)uVar28 != '\0') {
        auVar48 = vunpcklpd_avx512vl(auVar48,auVar49);
        auVar44 = vunpcklps_avx512vl(auVar44,auVar45);
        auVar45 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpckhpd_avx512vl(auVar44,auVar45);
        auVar49 = vunpcklpd_avx512vl(auVar44,auVar45);
        auVar44 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar35);
        auVar45 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar35);
        auVar46 = vblendps_avx(auVar45,auVar44,0x24);
        auVar44 = vpermt2ps_avx512vl(auVar44,auVar58,auVar45);
        auVar51 = vpermt2ps_avx512vl(auVar46,auVar60,*(undefined1 (*) [32])(param_2 + lVar35));
        auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar35),auVar59,auVar45);
        auVar52 = vinsertf32x4_avx512vl(auVar44,auVar45._0_16_,1);
        auVar53 = vshuff64x2_avx512vl(auVar44,auVar45,3);
        auVar44 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar35);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar35);
        auVar46 = vblendps_avx(auVar45,auVar44,0x24);
        auVar44 = vpermt2ps_avx512vl(auVar44,auVar58,auVar45);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,*(undefined1 (*) [32])(param_3 + lVar35));
        auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar35),auVar59,auVar45);
        auVar54 = vinsertf32x4_avx512vl(auVar44,auVar45._0_16_,1);
        auVar45 = vshuff64x2_avx512vl(auVar44,auVar45,3);
        auVar55 = vfnmadd213ps_avx512vl(auVar54,auVar61,auVar52);
        auVar56 = vfnmadd213ps_avx512vl(auVar45,auVar61,auVar53);
        auVar72._0_4_ = -(fVar68 * auVar46._0_4_) + auVar51._0_4_;
        auVar72._4_4_ = -(fVar68 * auVar46._4_4_) + auVar51._4_4_;
        auVar72._8_4_ = -(fVar68 * auVar46._8_4_) + auVar51._8_4_;
        auVar72._12_4_ = -(fVar68 * auVar46._12_4_) + auVar51._12_4_;
        auVar72._16_4_ = -(fVar68 * auVar46._16_4_) + auVar51._16_4_;
        auVar72._20_4_ = -(fVar68 * auVar46._20_4_) + auVar51._20_4_;
        auVar72._24_4_ = -(fVar68 * auVar46._24_4_) + auVar51._24_4_;
        auVar72._28_4_ = -(fVar68 * auVar46._28_4_) + auVar51._28_4_;
        auVar49 = vsubps_avx512vl(auVar49,auVar55);
        auVar47 = vsubps_avx512vl(auVar47,auVar56);
        auVar48 = vsubps_avx512vl(auVar48,auVar72);
        auVar44 = vmulps_avx512vl(auVar47,auVar47);
        auVar57._0_4_ = auVar49._0_4_ * auVar49._0_4_ + auVar44._0_4_;
        auVar57._4_4_ = auVar49._4_4_ * auVar49._4_4_ + auVar44._4_4_;
        auVar57._8_4_ = auVar49._8_4_ * auVar49._8_4_ + auVar44._8_4_;
        auVar57._12_4_ = auVar49._12_4_ * auVar49._12_4_ + auVar44._12_4_;
        auVar57._16_4_ = auVar49._16_4_ * auVar49._16_4_ + auVar44._16_4_;
        auVar57._20_4_ = auVar49._20_4_ * auVar49._20_4_ + auVar44._20_4_;
        auVar57._24_4_ = auVar49._24_4_ * auVar49._24_4_ + auVar44._24_4_;
        auVar57._28_4_ = auVar49._28_4_ * auVar49._28_4_ + auVar44._28_4_;
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar48,auVar48);
        auVar44 = vsqrtps_avx(auVar57);
        auVar44 = vdivps_avx(auVar62,auVar44);
        uVar29 = vcmpps_avx512vl(auVar57,auVar64,1);
        auVar49 = vfmadd231ps_avx512vl(auVar55,auVar44,auVar49);
        bVar39 = (byte)uVar29;
        uVar30 = vcmpps_avx512vl(auVar57,auVar43,1);
        bVar3 = (byte)uVar30;
        auVar55._0_4_ =
             (uint)(bVar3 & 1) * (int)(-(fVar27 * auVar54._0_4_) + auVar52._0_4_) |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar49._0_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar55._4_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._4_4_) + auVar52._4_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar49._4_4_;
        bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar55._8_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._8_4_) + auVar52._8_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar49._8_4_;
        bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar55._12_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._12_4_) + auVar52._12_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar49._12_4_;
        bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar55._16_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._16_4_) + auVar52._16_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar49._16_4_;
        bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar55._20_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._20_4_) + auVar52._20_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar49._20_4_;
        bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar55._24_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._24_4_) + auVar52._24_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar49._24_4_;
        bVar4 = SUB81(uVar30 >> 7,0);
        auVar55._28_4_ =
             (uint)bVar4 * (int)(-(fVar27 * auVar54._28_4_) + auVar52._28_4_) |
             (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar49._28_4_;
        uVar40 = vcmpps_avx512vl(auVar55,ZEXT1632(auVar42),4);
        uVar41 = vcmpps_avx512vl(auVar50,ZEXT1632(auVar42),4);
        uVar40 = uVar40 & uVar41;
        if ((char)uVar40 != '\0') {
          auVar45 = vfnmadd213ps_avx512vl(auVar45,auVar63,auVar53);
          auVar49._0_4_ = -(fVar27 * auVar46._0_4_) + auVar51._0_4_;
          auVar49._4_4_ = -(fVar27 * auVar46._4_4_) + auVar51._4_4_;
          auVar49._8_4_ = -(fVar27 * auVar46._8_4_) + auVar51._8_4_;
          auVar49._12_4_ = -(fVar27 * auVar46._12_4_) + auVar51._12_4_;
          auVar49._16_4_ = -(fVar27 * auVar46._16_4_) + auVar51._16_4_;
          auVar49._20_4_ = -(fVar27 * auVar46._20_4_) + auVar51._20_4_;
          auVar49._24_4_ = -(fVar27 * auVar46._24_4_) + auVar51._24_4_;
          auVar49._28_4_ = -(fVar27 * auVar46._28_4_) + auVar51._28_4_;
          auVar46 = vfmadd213ps_avx512vl(auVar47,auVar44,auVar56);
          auVar44 = vfmadd213ps_avx512vl(auVar48,auVar44,auVar72);
          auVar47._0_4_ =
               (uint)(bVar3 & 1) * auVar45._0_4_ |
               (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar4 * auVar45._4_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar46._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar4 * auVar45._8_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar46._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar4 * auVar45._12_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar46._12_4_;
          bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar4 * auVar45._16_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar46._16_4_;
          bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar4 * auVar45._20_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar46._20_4_;
          bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar4 * auVar45._24_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar46._24_4_;
          bVar4 = SUB81(uVar30 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar4 * auVar45._28_4_ |
               (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar46._28_4_;
          auVar45._0_4_ =
               (uint)(bVar3 & 1) * (int)auVar49._0_4_ |
               (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar44._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar45._4_4_ =
               (uint)bVar4 * (int)auVar49._4_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar44._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar45._8_4_ =
               (uint)bVar4 * (int)auVar49._8_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar44._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar45._12_4_ =
               (uint)bVar4 * (int)auVar49._12_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar44._12_4_;
          bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
          auVar45._16_4_ =
               (uint)bVar4 * (int)auVar49._16_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar44._16_4_;
          bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
          auVar45._20_4_ =
               (uint)bVar4 * (int)auVar49._20_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar44._20_4_;
          bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
          auVar45._24_4_ =
               (uint)bVar4 * (int)auVar49._24_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar44._24_4_;
          bVar4 = SUB81(uVar30 >> 7,0);
          auVar45._28_4_ =
               (uint)bVar4 * (int)auVar49._28_4_ |
               (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar44._28_4_;
          if ((char)uVar40 == -1) {
            auVar44 = vunpcklps_avx512vl(auVar55,auVar47);
            auVar46 = vunpcklps_avx512vl(auVar45,auVar50);
            auVar48 = vunpcklpd_avx512vl(auVar44,auVar46);
            auVar44 = vunpckhpd_avx512vl(auVar44,auVar46);
            auVar46 = vunpckhps_avx512vl(auVar55,auVar47);
            auVar45 = vunpckhps_avx512vl(auVar45,auVar50);
            auVar47 = vunpcklpd_avx512vl(auVar46,auVar45);
            auVar45 = vunpckhpd_avx512vl(auVar46,auVar45);
            auVar46 = vinsertf32x4_avx512vl(auVar48,auVar44._0_16_,1);
            *pauVar38 = auVar46;
            auVar46 = vinsertf32x4_avx512vl(auVar47,auVar45._0_16_,1);
            pauVar38[1] = auVar46;
            auVar44 = vshuff64x2_avx512vl(auVar48,auVar44,3);
            pauVar38[2] = auVar44;
            auVar44 = vshuff64x2_avx512vl(auVar47,auVar45,3);
            pauVar38[3] = auVar44;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar64,uVar40,auVar55);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar51,uVar40,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar49,uVar40,auVar45);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar72,uVar40,auVar50);
          }
        }
      }
      uVar37 = uVar37 + 8;
      pauVar38 = pauVar38 + 4;
      lVar35 = lVar35 + 0x60;
    } while (uVar37 < (uVar36 & 0xfffffff8));
  }
  if ((int)uVar37 < (int)param_7) {
    auVar58 = vpbroadcastd_avx512vl();
    auVar58 = vpor_avx2(auVar58,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar59 = vpbroadcastd_avx512vl();
    uVar29 = vpcmpgtd_avx512vl(auVar59,auVar58);
    lVar35 = (longlong)(param_6 + (int)uVar37);
    pauVar38 = (undefined1 (*) [32])(param_1 + lVar35 * 0x10);
    bVar39 = (byte)uVar29;
    if (bVar39 == 0xff) {
      auVar60 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],0);
      auVar43 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],3);
      auVar61 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],0);
      auVar62 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],3);
      auVar63 = vunpcklps_avx512vl(auVar60,auVar43);
      auVar60 = vunpckhps_avx512vl(auVar60,auVar43);
      auVar43 = vunpcklps_avx512vl(auVar61,auVar62);
      auVar61 = vunpckhps_avx512vl(auVar61,auVar62);
      auVar74 = auVar61._0_16_;
      auVar44 = vunpcklpd_avx512vl(auVar63,auVar43);
      auVar46 = vunpckhpd_avx512vl(auVar63,auVar43);
      auVar43 = vunpcklpd_avx512vl(auVar60,auVar61);
      auVar60 = vunpckhpd_avx512vl(auVar60,auVar61);
    }
    else {
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar44._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar60._4_4_;
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
      auVar44._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar60._8_4_;
      auVar44._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar60._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar42 = vxorps_avx512vl(auVar42,auVar42);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar46._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar46._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar46._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar46._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
      auVar46._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar46._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar46._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar46._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar42 = vxorps_avx512vl(auVar73,auVar73);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar43._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar43._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar43._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar43._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
      auVar43._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar43._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar43._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar43._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar38 + param_2));
      auVar60._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
      auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
      auVar60._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
      auVar60._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
    }
    uVar31 = vpcmpd_avx512vl(auVar58,auVar59,5);
    bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar11 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar14 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar17 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar20 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar23 = SUB81(uVar29 >> 7,0);
    bVar5 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar12 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar15 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar18 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar21 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar24 = SUB81(uVar29 >> 7,0);
    bVar6 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar13 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar16 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar19 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar22 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar25 = SUB81(uVar29 >> 7,0);
    uVar28 = vcmpps_avx512vl(auVar60,ZEXT832(0) << 0x20,0);
    if ((byte)((byte)uVar28 | (byte)uVar31) != 0xff) {
      pauVar1 = (undefined1 (*) [32])(param_2 + lVar35 * 0xc);
      if (bVar39 == 0xff) {
        auVar61 = pauVar1[1];
        auVar62 = vblendps_avx(auVar61,*pauVar1,0x24);
        auVar63 = vpermt2ps_avx512vl(*pauVar1,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar53 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar1[2]);
        auVar61 = vpermt2ps_avx512vl(pauVar1[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar52 = vinsertf32x4_avx512vl(auVar63,auVar61._0_16_,1);
        auVar54 = vshuff64x2_avx512vl(auVar63,auVar61,3);
        auVar61 = *(undefined1 (*) [32])(param_3 + lVar35 * 0xc);
        auVar62 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar35 * 0xc);
        auVar63 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar35 * 0xc);
        auVar64 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61,auVar62);
        auVar45 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar63,auVar62);
        auVar48 = vinsertf32x4_avx512vl(auVar64,auVar45._0_16_,1);
        auVar50 = vshuff64x2_avx512vl(auVar64,auVar45,3);
        auVar61 = vblendps_avx(auVar62,auVar61,0x24);
        auVar51 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar63);
      }
      else {
        auVar42 = vxorps_avx512vl(auVar43._0_16_,auVar43._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar1 * 2));
        auVar52._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar52._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar52._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar52._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(auVar46._0_16_,auVar46._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)*pauVar1);
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(local_98 + (longlong)*pauVar1));
        auVar53._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
        auVar53._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar53._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
        auVar53._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        puVar2 = (undefined4 *)(param_3 + lVar35 * 0xc);
        auVar42 = vxorps_avx512vl(auVar74,auVar74);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)pauVar1));
        auVar48._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar48._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar48._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar48._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar48._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar48._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar48._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar48._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar61 = vgatherdps_avx512vl(*puVar2);
        auVar50._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar50._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar50._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar50._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar50._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar50._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar50._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar50._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)local_98));
        auVar51._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
        auVar51._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar51._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
        auVar51._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
      }
      auVar61 = vbroadcastss_avx512vl(in_ZMM3._0_16_);
      auVar62 = vfnmadd213ps_avx512vl(auVar48,auVar61,auVar52);
      auVar63 = vfnmadd213ps_avx512vl(auVar50,auVar61,auVar54);
      auVar61 = vfnmadd213ps_avx512vl(auVar61,auVar51,auVar53);
      auVar32._4_4_ = (uint)bVar4 * auVar44._4_4_ | (uint)!bVar4 * iStack_11c;
      auVar32._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar32._8_4_ = (uint)bVar8 * auVar44._8_4_ | (uint)!bVar8 * iStack_118;
      auVar32._12_4_ = (uint)bVar11 * auVar44._12_4_ | (uint)!bVar11 * iStack_114;
      auVar32._16_4_ = (uint)bVar14 * auVar44._16_4_ | (uint)!bVar14 * iStack_110;
      auVar32._20_4_ = (uint)bVar17 * auVar44._20_4_ | (uint)!bVar17 * iStack_10c;
      auVar32._24_4_ = (uint)bVar20 * auVar44._24_4_ | (uint)!bVar20 * iStack_108;
      auVar32._28_4_ = (uint)bVar23 * auVar44._28_4_ | (uint)!bVar23 * iStack_104;
      auVar33._4_4_ = (uint)bVar5 * auVar46._4_4_ | (uint)!bVar5 * iStack_fc;
      auVar33._0_4_ = (uint)(bVar39 & 1) * auVar46._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar33._8_4_ = (uint)bVar9 * auVar46._8_4_ | (uint)!bVar9 * iStack_f8;
      auVar33._12_4_ = (uint)bVar12 * auVar46._12_4_ | (uint)!bVar12 * iStack_f4;
      auVar33._16_4_ = (uint)bVar15 * auVar46._16_4_ | (uint)!bVar15 * iStack_f0;
      auVar33._20_4_ = (uint)bVar18 * auVar46._20_4_ | (uint)!bVar18 * iStack_ec;
      auVar33._24_4_ = (uint)bVar21 * auVar46._24_4_ | (uint)!bVar21 * iStack_e8;
      auVar33._28_4_ = (uint)bVar24 * auVar46._28_4_ | (uint)!bVar24 * iStack_e4;
      auVar34._4_4_ = (uint)bVar6 * auVar43._4_4_ | (uint)!bVar6 * iStack_dc;
      auVar34._0_4_ = (uint)(bVar39 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar39 & 1) * local_e0;
      auVar34._8_4_ = (uint)bVar10 * auVar43._8_4_ | (uint)!bVar10 * iStack_d8;
      auVar34._12_4_ = (uint)bVar13 * auVar43._12_4_ | (uint)!bVar13 * iStack_d4;
      auVar34._16_4_ = (uint)bVar16 * auVar43._16_4_ | (uint)!bVar16 * iStack_d0;
      auVar34._20_4_ = (uint)bVar19 * auVar43._20_4_ | (uint)!bVar19 * iStack_cc;
      auVar34._24_4_ = (uint)bVar22 * auVar43._24_4_ | (uint)!bVar22 * iStack_c8;
      auVar34._28_4_ = (uint)bVar25 * auVar43._28_4_ | (uint)!bVar25 * iStack_c4;
      auVar43 = vsubps_avx512vl(auVar32,auVar62);
      auVar64 = vsubps_avx512vl(auVar33,auVar63);
      auVar44 = vsubps_avx512vl(auVar34,auVar61);
      auVar45 = vmulps_avx512vl(auVar64,auVar64);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar43,auVar43);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar44,auVar44);
      auVar46 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
      auVar47 = vsqrtps_avx512vl(auVar45);
      auVar46 = vdivps_avx512vl(auVar46,auVar47);
      fVar68 = fVar68 - param_5;
      auVar69._4_4_ = fVar68;
      auVar69._0_4_ = fVar68;
      auVar69._8_4_ = fVar68;
      auVar69._12_4_ = fVar68;
      auVar69._16_4_ = fVar68;
      auVar69._20_4_ = fVar68;
      auVar69._24_4_ = fVar68;
      auVar69._28_4_ = fVar68;
      auVar47 = vfnmadd213ps_avx512vl(auVar48,auVar69,auVar52);
      param_5 = param_5 * param_5;
      auVar67._4_4_ = param_5;
      auVar67._0_4_ = param_5;
      auVar67._8_4_ = param_5;
      auVar67._12_4_ = param_5;
      auVar67._16_4_ = param_5;
      auVar67._20_4_ = param_5;
      auVar67._24_4_ = param_5;
      auVar67._28_4_ = param_5;
      uVar37 = vcmpps_avx512vl(auVar45,auVar67,1);
      auVar43 = vfmadd231ps_avx512vl(auVar62,auVar46,auVar43);
      bVar39 = (byte)uVar37;
      auVar56._4_4_ = __real_322bcc77;
      auVar56._0_4_ = __real_322bcc77;
      auVar56._8_4_ = __real_322bcc77;
      auVar56._12_4_ = __real_322bcc77;
      auVar56._16_4_ = __real_322bcc77;
      auVar56._20_4_ = __real_322bcc77;
      auVar56._24_4_ = __real_322bcc77;
      auVar56._28_4_ = __real_322bcc77;
      uVar29 = vcmpps_avx512vl(auVar45,auVar56,1);
      bVar3 = (byte)uVar29;
      auVar65._0_4_ =
           (uint)(bVar3 & 1) * auVar47._0_4_ |
           (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar43._0_4_;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar4 * auVar47._4_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar43._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar4 * auVar47._8_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar43._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar4 * auVar47._12_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar43._12_4_;
      bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar4 * auVar47._16_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar43._16_4_;
      bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar4 * auVar47._20_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar43._20_4_;
      bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar4 * auVar47._24_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar43._24_4_;
      bVar4 = SUB81(uVar29 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar4 * auVar47._28_4_ | (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar43._28_4_;
      uVar30 = vcmpps_avx512vl(auVar60,ZEXT432(0) << 0x20,4);
      uVar40 = vcmpps_avx512vl(auVar65,ZEXT432(0) << 0x20,4);
      uVar41 = vpcmpgtd_avx512vl(auVar59,auVar58);
      uVar41 = uVar30 & uVar40 & uVar41;
      if ((char)uVar41 != '\0') {
        auVar58 = vfnmadd213ps_avx512vl(auVar50,auVar69,auVar54);
        auVar59 = vfmadd213ps_avx512vl(auVar64,auVar46,auVar63);
        auVar43 = vfmadd213ps_avx512vl(auVar44,auVar46,auVar61);
        auVar66._0_4_ =
             (uint)(bVar3 & 1) * auVar58._0_4_ |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar59._0_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar66._4_4_ =
             (uint)bVar4 * auVar58._4_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar59._4_4_;
        bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar66._8_4_ =
             (uint)bVar4 * auVar58._8_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar59._8_4_;
        bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar66._12_4_ =
             (uint)bVar4 * auVar58._12_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar59._12_4_;
        bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
        auVar66._16_4_ =
             (uint)bVar4 * auVar58._16_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar59._16_4_;
        bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
        auVar66._20_4_ =
             (uint)bVar4 * auVar58._20_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar59._20_4_;
        bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
        auVar66._24_4_ =
             (uint)bVar4 * auVar58._24_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar59._24_4_;
        bVar4 = SUB81(uVar29 >> 7,0);
        auVar66._28_4_ =
             (uint)bVar4 * auVar58._28_4_ |
             (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar59._28_4_;
        auVar58._0_4_ =
             (uint)(bVar3 & 1) * (int)(-(fVar68 * auVar51._0_4_) + auVar53._0_4_) |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar43._0_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar58._4_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._4_4_) + auVar53._4_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar43._4_4_;
        bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar58._8_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._8_4_) + auVar53._8_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar43._8_4_;
        bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar58._12_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._12_4_) + auVar53._12_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar43._12_4_;
        bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
        auVar58._16_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._16_4_) + auVar53._16_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar43._16_4_;
        bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
        auVar58._20_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._20_4_) + auVar53._20_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar43._20_4_;
        bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
        auVar58._24_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._24_4_) + auVar53._24_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar43._24_4_;
        bVar4 = SUB81(uVar29 >> 7,0);
        auVar58._28_4_ =
             (uint)bVar4 * (int)(-(fVar68 * auVar51._28_4_) + auVar53._28_4_) |
             (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar43._28_4_;
        if ((char)uVar41 == -1) {
          auVar59 = vunpcklps_avx512vl(auVar65,auVar66);
          auVar61 = vunpcklps_avx512vl(auVar58,auVar60);
          auVar43 = vunpcklpd_avx(auVar59,auVar61);
          auVar59 = vunpckhpd_avx(auVar59,auVar61);
          auVar61 = vunpckhps_avx512vl(auVar65,auVar66);
          auVar58 = vunpckhps_avx512vl(auVar58,auVar60);
          auVar60 = vunpcklpd_avx(auVar61,auVar58);
          auVar58 = vunpckhpd_avx(auVar61,auVar58);
          auVar70._16_16_ = auVar59._0_16_;
          auVar70._0_16_ = auVar43._0_16_;
          *pauVar38 = auVar70;
          auVar71._16_16_ = auVar58._0_16_;
          auVar71._0_16_ = auVar60._0_16_;
          pauVar38[1] = auVar71;
          auVar59 = vperm2f128_avx(auVar43,auVar59,0x31);
          pauVar38[2] = auVar59;
          auVar58 = vperm2f128_avx(auVar60,auVar58,0x31);
          pauVar38[3] = auVar58;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar65);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar58);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar60);
        }
      }
    }
  }
  return;
}

// ApplyLegacySphericalBackstopConstraints_avx512skx @ 1403191c0

void ApplyLegacySphericalBackstopConstraints_avx512skx(void)

{
  ApplyLegacySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx512skx
            ();
  return;
}

// ApplySphericalBackstopConstraintsWithMaps_avx512skx @ 140319230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithMaps_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,uint param_6,float param_7,uint param_8,uint param_9,int param_10,uint param_11)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  undefined1 auVar41 [32];
  undefined1 (*pauVar42) [32];
  uint uVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  byte bVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  undefined1 auVar50 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar51 [16];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 in_ZMM17 [64];
  undefined1 auVar82 [16];
  undefined1 in_ZMM18 [64];
  undefined1 auVar83 [16];
  undefined1 in_ZMM19 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar73 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar72 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar71 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar83 = in_ZMM19._0_16_;
  auVar82 = in_ZMM18._0_16_;
  auVar51 = in_ZMM17._0_16_;
  uVar43 = param_11 + 7;
  if (-1 < (int)param_11) {
    uVar43 = param_11;
  }
  if ((int)(uVar43 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    auVar52 = vbroadcastss_avx512vl(ZEXT416(param_6));
    auVar53 = vbroadcastss_avx512vl(ZEXT416(param_8));
    auVar54 = vbroadcastss_avx512vl(ZEXT416(param_9));
    auVar51 = auVar54._0_16_;
    lVar45 = (longlong)param_10 * 3 + 0x10;
    pauVar42 = (undefined1 (*) [32])((longlong)param_10 * 0x10 + param_1);
    uVar46 = 0;
    auVar82 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar83 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar55 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar50 = vxorps_avx512vl(ZEXT416(param_9),ZEXT416(param_9));
    uVar44 = 0;
    do {
      auVar56 = vshuff64x2_avx512vl(*pauVar42,pauVar42[2],0);
      auVar57 = vshuff64x2_avx512vl(*pauVar42,pauVar42[2],3);
      auVar58 = vshuff64x2_avx512vl(pauVar42[1],pauVar42[3],0);
      auVar59 = vshuff64x2_avx512vl(pauVar42[1],pauVar42[3],3);
      auVar60 = vunpckhps_avx512vl(auVar56,auVar57);
      auVar61 = vunpckhps_avx512vl(auVar58,auVar59);
      auVar62 = vunpckhpd_avx512vl(auVar60,auVar61);
      uVar37 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar50),4);
      if ((char)uVar37 != '\0') {
        auVar60 = vunpcklpd_avx(auVar60,auVar61);
        auVar56 = vunpcklps_avx512vl(auVar56,auVar57);
        auVar57 = vunpcklps_avx512vl(auVar58,auVar59);
        auVar61 = vunpckhpd_avx512vl(auVar56,auVar57);
        auVar63 = vunpcklpd_avx512vl(auVar56,auVar57);
        auVar56 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar45 * 4);
        auVar57 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar45 * 4);
        auVar58 = *(undefined1 (*) [32])(param_2 + lVar45 * 4);
        auVar59 = vblendps_avx(auVar57,auVar56,0x24);
        auVar56 = vpermt2ps_avx512vl(auVar56,auVar71,auVar57);
        auVar64 = vpermt2ps_avx512vl(auVar59,auVar73,auVar58);
        auVar57 = vpermt2ps_avx512vl(auVar58,auVar72,auVar57);
        auVar65 = vinsertf32x4_avx512vl(auVar56,auVar57._0_16_,1);
        auVar66 = vshuff64x2_avx512vl(auVar56,auVar57,3);
        auVar56 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar45 * 4);
        auVar57 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar45 * 4);
        auVar58 = *(undefined1 (*) [32])(param_3 + lVar45 * 4);
        auVar59 = vblendps_avx(auVar57,auVar56,0x24);
        auVar56 = vpermt2ps_avx512vl(auVar56,auVar71,auVar57);
        auVar59 = vpermt2ps_avx512vl(auVar59,auVar73,auVar58);
        auVar57 = vpermt2ps_avx512vl(auVar58,auVar72,auVar57);
        auVar58 = vinsertf32x4_avx512vl(auVar56,auVar57._0_16_,1);
        auVar57 = vshuff64x2_avx512vl(auVar56,auVar57,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar46);
        auVar79._0_4_ = param_7 * *pfVar1 + auVar52._0_4_;
        auVar79._4_4_ = param_7 * pfVar1[1] + auVar52._4_4_;
        auVar79._8_4_ = param_7 * pfVar1[2] + auVar52._8_4_;
        auVar79._12_4_ = param_7 * pfVar1[3] + auVar52._12_4_;
        auVar79._16_4_ = param_7 * pfVar1[4] + auVar52._16_4_;
        auVar79._20_4_ = param_7 * pfVar1[5] + auVar52._20_4_;
        auVar79._24_4_ = param_7 * pfVar1[6] + auVar52._24_4_;
        auVar79._28_4_ = param_7 * pfVar1[7] + auVar52._28_4_;
        auVar67 = vfmadd213ps_avx512vl
                            (*(undefined1 (*) [32])(param_5 + (ulonglong)uVar46),auVar54,auVar53);
        fVar29 = auVar67._0_4_;
        auVar70._0_4_ = auVar79._0_4_ + fVar29;
        fVar30 = auVar67._4_4_;
        auVar70._4_4_ = auVar79._4_4_ + fVar30;
        fVar31 = auVar67._8_4_;
        auVar70._8_4_ = auVar79._8_4_ + fVar31;
        fVar32 = auVar67._12_4_;
        auVar70._12_4_ = auVar79._12_4_ + fVar32;
        fVar33 = auVar67._16_4_;
        auVar70._16_4_ = auVar79._16_4_ + fVar33;
        fVar34 = auVar67._20_4_;
        auVar70._20_4_ = auVar79._20_4_ + fVar34;
        fVar35 = auVar67._24_4_;
        auVar70._24_4_ = auVar79._24_4_ + fVar35;
        fVar36 = auVar67._28_4_;
        auVar70._28_4_ = auVar79._28_4_ + fVar36;
        auVar68 = vfnmadd213ps_avx512vl(auVar70,auVar58,auVar65);
        auVar69 = vfnmadd213ps_avx512vl(auVar70,auVar57,auVar66);
        auVar80._0_4_ = -(auVar59._0_4_ * auVar70._0_4_) + auVar64._0_4_;
        auVar80._4_4_ = -(auVar59._4_4_ * auVar70._4_4_) + auVar64._4_4_;
        auVar80._8_4_ = -(auVar59._8_4_ * auVar70._8_4_) + auVar64._8_4_;
        auVar80._12_4_ = -(auVar59._12_4_ * auVar70._12_4_) + auVar64._12_4_;
        auVar80._16_4_ = -(auVar59._16_4_ * auVar70._16_4_) + auVar64._16_4_;
        auVar80._20_4_ = -(auVar59._20_4_ * auVar70._20_4_) + auVar64._20_4_;
        auVar80._24_4_ = -(auVar59._24_4_ * auVar70._24_4_) + auVar64._24_4_;
        auVar80._28_4_ = -(auVar59._28_4_ * auVar70._28_4_) + auVar64._28_4_;
        auVar63 = vsubps_avx512vl(auVar63,auVar68);
        auVar61 = vsubps_avx512vl(auVar61,auVar69);
        auVar60 = vsubps_avx512vl(auVar60,auVar80);
        auVar56._0_4_ = auVar63._0_4_ * auVar63._0_4_ + auVar61._0_4_ * auVar61._0_4_;
        auVar56._4_4_ = auVar63._4_4_ * auVar63._4_4_ + auVar61._4_4_ * auVar61._4_4_;
        auVar56._8_4_ = auVar63._8_4_ * auVar63._8_4_ + auVar61._8_4_ * auVar61._8_4_;
        auVar56._12_4_ = auVar63._12_4_ * auVar63._12_4_ + auVar61._12_4_ * auVar61._12_4_;
        auVar56._16_4_ = auVar63._16_4_ * auVar63._16_4_ + auVar61._16_4_ * auVar61._16_4_;
        auVar56._20_4_ = auVar63._20_4_ * auVar63._20_4_ + auVar61._20_4_ * auVar61._20_4_;
        auVar56._24_4_ = auVar63._24_4_ * auVar63._24_4_ + auVar61._24_4_ * auVar61._24_4_;
        auVar56._28_4_ = auVar63._28_4_ * auVar63._28_4_ + auVar61._28_4_ * auVar61._28_4_;
        auVar70 = vfmadd231ps_avx512vl(auVar56,auVar60,auVar60);
        auVar56 = vsqrtps_avx(auVar70);
        auVar56 = vdivps_avx(auVar67,auVar56);
        auVar81._0_4_ = fVar29 * fVar29;
        auVar81._4_4_ = fVar30 * fVar30;
        auVar81._8_4_ = fVar31 * fVar31;
        auVar81._12_4_ = fVar32 * fVar32;
        auVar81._16_4_ = fVar33 * fVar33;
        auVar81._20_4_ = fVar34 * fVar34;
        auVar81._24_4_ = fVar35 * fVar35;
        auVar81._28_4_ = fVar36 * fVar36;
        uVar38 = vcmpps_avx512vl(auVar70,auVar81,1);
        auVar63 = vfmadd231ps_avx512vl(auVar68,auVar56,auVar63);
        bVar47 = (byte)uVar38;
        uVar49 = vcmpps_avx512vl(auVar70,auVar55,1);
        bVar5 = (byte)uVar49;
        auVar67._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar79._0_4_ * auVar58._0_4_) + auVar65._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar47 & 1) * auVar63._0_4_;
        bVar7 = (bool)((byte)(uVar49 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * (int)(-(auVar79._4_4_ * auVar58._4_4_) + auVar65._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 1) & 1) * auVar63._4_4_;
        bVar7 = (bool)((byte)(uVar49 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * (int)(-(auVar79._8_4_ * auVar58._8_4_) + auVar65._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 2) & 1) * auVar63._8_4_;
        bVar7 = (bool)((byte)(uVar49 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * (int)(-(auVar79._12_4_ * auVar58._12_4_) + auVar65._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 3) & 1) * auVar63._12_4_;
        bVar7 = (bool)((byte)(uVar49 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * (int)(-(auVar79._16_4_ * auVar58._16_4_) + auVar65._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 4) & 1) * auVar63._16_4_;
        bVar7 = (bool)((byte)(uVar49 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * (int)(-(auVar79._20_4_ * auVar58._20_4_) + auVar65._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar63._20_4_;
        bVar7 = (bool)((byte)(uVar49 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * (int)(-(auVar79._24_4_ * auVar58._24_4_) + auVar65._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar38 >> 6) & 1) * auVar63._24_4_;
        bVar7 = SUB81(uVar49 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * (int)(-(auVar79._28_4_ * auVar58._28_4_) + auVar65._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar38 >> 7) * auVar63._28_4_;
        uVar48 = vcmpps_avx512vl(auVar67,ZEXT1632(auVar50),4);
        uVar39 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar50),4);
        uVar48 = uVar48 & uVar39;
        if ((char)uVar48 != '\0') {
          auVar57 = vfnmadd213ps_avx512vl(auVar57,auVar79,auVar66);
          auVar63._0_4_ = -(auVar79._0_4_ * auVar59._0_4_) + auVar64._0_4_;
          auVar63._4_4_ = -(auVar79._4_4_ * auVar59._4_4_) + auVar64._4_4_;
          auVar63._8_4_ = -(auVar79._8_4_ * auVar59._8_4_) + auVar64._8_4_;
          auVar63._12_4_ = -(auVar79._12_4_ * auVar59._12_4_) + auVar64._12_4_;
          auVar63._16_4_ = -(auVar79._16_4_ * auVar59._16_4_) + auVar64._16_4_;
          auVar63._20_4_ = -(auVar79._20_4_ * auVar59._20_4_) + auVar64._20_4_;
          auVar63._24_4_ = -(auVar79._24_4_ * auVar59._24_4_) + auVar64._24_4_;
          auVar63._28_4_ = -(auVar79._28_4_ * auVar59._28_4_) + auVar64._28_4_;
          auVar58 = vfmadd213ps_avx512vl(auVar61,auVar56,auVar69);
          auVar56 = vfmadd213ps_avx512vl(auVar60,auVar56,auVar80);
          auVar59._0_4_ =
               (uint)(bVar5 & 1) * auVar57._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar47 & 1) * auVar58._0_4_;
          bVar7 = (bool)((byte)(uVar49 >> 1) & 1);
          auVar59._4_4_ =
               (uint)bVar7 * auVar57._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 1) & 1) * auVar58._4_4_;
          bVar7 = (bool)((byte)(uVar49 >> 2) & 1);
          auVar59._8_4_ =
               (uint)bVar7 * auVar57._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 2) & 1) * auVar58._8_4_;
          bVar7 = (bool)((byte)(uVar49 >> 3) & 1);
          auVar59._12_4_ =
               (uint)bVar7 * auVar57._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 3) & 1) * auVar58._12_4_;
          bVar7 = (bool)((byte)(uVar49 >> 4) & 1);
          auVar59._16_4_ =
               (uint)bVar7 * auVar57._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 4) & 1) * auVar58._16_4_;
          bVar7 = (bool)((byte)(uVar49 >> 5) & 1);
          auVar59._20_4_ =
               (uint)bVar7 * auVar57._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar58._20_4_;
          bVar7 = (bool)((byte)(uVar49 >> 6) & 1);
          auVar59._24_4_ =
               (uint)bVar7 * auVar57._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 6) & 1) * auVar58._24_4_;
          bVar7 = SUB81(uVar49 >> 7,0);
          auVar59._28_4_ =
               (uint)bVar7 * auVar57._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar38 >> 7) * auVar58._28_4_;
          auVar57._0_4_ =
               (uint)(bVar5 & 1) * (int)auVar63._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar47 & 1) * auVar56._0_4_;
          bVar7 = (bool)((byte)(uVar49 >> 1) & 1);
          auVar57._4_4_ =
               (uint)bVar7 * (int)auVar63._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 1) & 1) * auVar56._4_4_;
          bVar7 = (bool)((byte)(uVar49 >> 2) & 1);
          auVar57._8_4_ =
               (uint)bVar7 * (int)auVar63._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 2) & 1) * auVar56._8_4_;
          bVar7 = (bool)((byte)(uVar49 >> 3) & 1);
          auVar57._12_4_ =
               (uint)bVar7 * (int)auVar63._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 3) & 1) * auVar56._12_4_;
          bVar7 = (bool)((byte)(uVar49 >> 4) & 1);
          auVar57._16_4_ =
               (uint)bVar7 * (int)auVar63._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 4) & 1) * auVar56._16_4_;
          bVar7 = (bool)((byte)(uVar49 >> 5) & 1);
          auVar57._20_4_ =
               (uint)bVar7 * (int)auVar63._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 5) & 1) * auVar56._20_4_;
          bVar7 = (bool)((byte)(uVar49 >> 6) & 1);
          auVar57._24_4_ =
               (uint)bVar7 * (int)auVar63._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar38 >> 6) & 1) * auVar56._24_4_;
          bVar7 = SUB81(uVar49 >> 7,0);
          auVar57._28_4_ =
               (uint)bVar7 * (int)auVar63._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar38 >> 7) * auVar56._28_4_;
          if ((char)uVar48 == -1) {
            auVar56 = vunpcklps_avx512vl(auVar67,auVar59);
            auVar58 = vunpcklps_avx512vl(auVar57,auVar62);
            auVar60 = vunpcklpd_avx512vl(auVar56,auVar58);
            auVar56 = vunpckhpd_avx(auVar56,auVar58);
            auVar58 = vunpckhps_avx512vl(auVar67,auVar59);
            auVar57 = vunpckhps_avx512vl(auVar57,auVar62);
            auVar59 = vunpcklpd_avx512vl(auVar58,auVar57);
            auVar57 = vunpckhpd_avx512vl(auVar58,auVar57);
            auVar58 = vinsertf32x4_avx512vl(auVar60,auVar56._0_16_,1);
            *pauVar42 = auVar58;
            auVar58 = vinsertf32x4_avx512vl(auVar59,auVar57._0_16_,1);
            pauVar42[1] = auVar58;
            auVar56 = vshuff64x2_avx512vl(auVar60,auVar56,3);
            pauVar42[2] = auVar56;
            auVar56 = vshuff64x2_avx512vl(auVar59,auVar57,3);
            pauVar42[3] = auVar56;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar64,uVar48,auVar67);
            vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar63,uVar48,auVar59);
            vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar79,uVar48,auVar57);
            vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar80,uVar48,auVar62);
          }
        }
      }
      uVar44 = uVar44 + 8;
      uVar46 = uVar46 + 0x20;
      pauVar42 = pauVar42 + 4;
      lVar45 = lVar45 + 0x18;
    } while (uVar44 < (uVar43 & 0xfffffff8));
    if ((int)param_11 <= (int)uVar44) {
      return;
    }
  }
  auVar71 = vpbroadcastd_avx512vl();
  auVar71 = vpor_avx2(auVar71,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar72 = vpbroadcastd_avx512vl();
  uVar38 = vpcmpgtd_avx512vl(auVar72,auVar71);
  lVar45 = (longlong)(param_10 + (int)uVar44);
  pauVar42 = (undefined1 (*) [32])(param_1 + lVar45 * 0x10);
  bVar47 = (byte)uVar38;
  if (bVar47 == 0xff) {
    auVar52 = vshuff64x2_avx512vl(*pauVar42,pauVar42[2],0);
    auVar73 = vperm2f128_avx(*pauVar42,pauVar42[2],0x31);
    auVar53 = vshuff64x2_avx512vl(pauVar42[1],pauVar42[3],0);
    auVar54 = vshuff64x2_avx512vl(pauVar42[1],pauVar42[3],3);
    auVar55 = vunpcklps_avx512vl(auVar52,auVar73);
    auVar52 = vunpckhps_avx512vl(auVar52,auVar73);
    auVar56 = vunpcklps_avx512vl(auVar53,auVar54);
    auVar73 = vunpckhps_avx(auVar53,auVar54);
    auVar53 = vunpcklpd_avx512vl(auVar55,auVar56);
    auVar54 = vunpckhpd_avx512vl(auVar55,auVar56);
    auVar55 = vunpcklpd_avx512vl(auVar52,auVar73);
    auVar73 = vunpckhpd_avx(auVar52,auVar73);
  }
  else {
    auVar51 = vxorps_avx512vl(auVar51,auVar51);
    auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + param_5));
    auVar53._0_4_ = (uint)(bVar47 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_;
    bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
    auVar53._4_4_ = (uint)bVar7 * auVar73._4_4_ | (uint)!bVar7 * auVar51._4_4_;
    bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
    auVar53._8_4_ = (uint)bVar7 * auVar73._8_4_ | (uint)!bVar7 * auVar51._8_4_;
    bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
    auVar53._12_4_ = (uint)bVar7 * auVar73._12_4_ | (uint)!bVar7 * auVar51._12_4_;
    auVar53._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar73._16_4_;
    auVar53._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar73._20_4_;
    auVar53._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar73._24_4_;
    auVar53._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar73._28_4_;
    auVar51 = vxorps_avx512vl(auVar82,auVar82);
    auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + param_5));
    auVar54._0_4_ = (uint)(bVar47 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_;
    bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
    auVar54._4_4_ = (uint)bVar7 * auVar73._4_4_ | (uint)!bVar7 * auVar51._4_4_;
    bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
    auVar54._8_4_ = (uint)bVar7 * auVar73._8_4_ | (uint)!bVar7 * auVar51._8_4_;
    bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
    auVar54._12_4_ = (uint)bVar7 * auVar73._12_4_ | (uint)!bVar7 * auVar51._12_4_;
    auVar54._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar73._16_4_;
    auVar54._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar73._20_4_;
    auVar54._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar73._24_4_;
    auVar54._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar73._28_4_;
    auVar51 = vxorps_avx512vl(auVar83,auVar83);
    auVar73 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + param_5));
    auVar55._0_4_ = (uint)(bVar47 & 1) * auVar73._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_;
    bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
    auVar55._4_4_ = (uint)bVar7 * auVar73._4_4_ | (uint)!bVar7 * auVar51._4_4_;
    bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
    auVar55._8_4_ = (uint)bVar7 * auVar73._8_4_ | (uint)!bVar7 * auVar51._8_4_;
    bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
    auVar55._12_4_ = (uint)bVar7 * auVar73._12_4_ | (uint)!bVar7 * auVar51._12_4_;
    auVar55._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar73._16_4_;
    auVar55._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar73._20_4_;
    auVar55._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar73._24_4_;
    auVar55._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar73._28_4_;
    auVar52 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + param_5));
    auVar73._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar52._4_4_;
    auVar73._0_4_ = (uint)(bVar47 & 1) * auVar52._0_4_;
    auVar73._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar52._8_4_;
    auVar73._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar52._12_4_;
    auVar73._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar52._16_4_;
    auVar73._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar52._20_4_;
    auVar73._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar52._24_4_;
    auVar73._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar52._28_4_;
  }
  uVar40 = vpcmpd_avx512vl(auVar71,auVar72,5);
  bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
  bVar11 = (bool)((byte)(uVar38 >> 2) & 1);
  bVar14 = (bool)((byte)(uVar38 >> 3) & 1);
  bVar17 = (bool)((byte)(uVar38 >> 4) & 1);
  bVar20 = (bool)((byte)(uVar38 >> 5) & 1);
  bVar23 = (bool)((byte)(uVar38 >> 6) & 1);
  bVar26 = SUB81(uVar38 >> 7,0);
  bVar8 = (bool)((byte)(uVar38 >> 1) & 1);
  bVar12 = (bool)((byte)(uVar38 >> 2) & 1);
  bVar15 = (bool)((byte)(uVar38 >> 3) & 1);
  bVar18 = (bool)((byte)(uVar38 >> 4) & 1);
  bVar21 = (bool)((byte)(uVar38 >> 5) & 1);
  bVar24 = (bool)((byte)(uVar38 >> 6) & 1);
  bVar27 = SUB81(uVar38 >> 7,0);
  bVar9 = (bool)((byte)(uVar38 >> 1) & 1);
  bVar13 = (bool)((byte)(uVar38 >> 2) & 1);
  bVar16 = (bool)((byte)(uVar38 >> 3) & 1);
  bVar19 = (bool)((byte)(uVar38 >> 4) & 1);
  bVar22 = (bool)((byte)(uVar38 >> 5) & 1);
  bVar25 = (bool)((byte)(uVar38 >> 6) & 1);
  bVar28 = SUB81(uVar38 >> 7,0);
  uVar37 = vcmpps_avx512vl(auVar73,ZEXT1232(ZEXT812(0)),0);
  if ((byte)((byte)uVar37 | (byte)uVar40) != 0xff) {
    pauVar2 = (undefined1 (*) [32])(param_2 + lVar45 * 0xc);
    if (bVar47 == 0xff) {
      auVar71 = pauVar2[1];
      auVar72 = vblendps_avx(auVar71,*pauVar2,0x24);
      auVar52 = vpermt2ps_avx512vl(*pauVar2,
                                   ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar71);
      auVar64 = vpermt2ps_avx512vl(auVar72,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,pauVar2[2]);
      auVar71 = vpermt2ps_avx512vl(pauVar2[2],
                                   ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar71);
      auVar60 = vinsertf32x4_avx512vl(auVar52,auVar71._0_16_,1);
      auVar61 = vshuff64x2_avx512vl(auVar52,auVar71,3);
      auVar71 = *(undefined1 (*) [32])(param_3 + lVar45 * 0xc);
      auVar72 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar45 * 0xc);
      auVar52 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar45 * 0xc);
      auVar56 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                   ,auVar71,auVar72);
      auVar57 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                   ,auVar52,auVar72);
      auVar62 = vinsertf32x4_avx512vl(auVar56,auVar57._0_16_,1);
      auVar58 = vshuff64x2_avx512vl(auVar56,auVar57,3);
      auVar71 = vblendps_avx(auVar72,auVar71,0x24);
      auVar71 = vpermt2ps_avx512vl(auVar71,
                                   ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                   ,auVar52);
    }
    else {
      auVar51 = vxorps_avx512vl(auVar53._0_16_,auVar53._0_16_);
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + param_5));
      auVar60._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_
      ;
      bVar10 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar60._4_4_ = (uint)bVar10 * auVar71._4_4_ | (uint)!bVar10 * auVar51._4_4_;
      bVar10 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar60._8_4_ = (uint)bVar10 * auVar71._8_4_ | (uint)!bVar10 * auVar51._8_4_;
      bVar10 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar60._12_4_ = (uint)bVar10 * auVar71._12_4_ | (uint)!bVar10 * auVar51._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar42 + (longlong)*pauVar2));
      auVar61._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar71._4_4_;
      auVar61._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_;
      auVar61._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar71._8_4_;
      auVar61._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar71._12_4_;
      auVar61._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar61._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar61._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar61._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
      auVar64._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar71._4_4_;
      auVar64._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_;
      auVar64._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar71._8_4_;
      auVar64._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar71._12_4_;
      auVar64._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar64._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar64._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar64._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      puVar3 = (undefined4 *)(param_3 + lVar45 * 0xc);
      auVar51 = vxorps_avx512vl(auVar55._0_16_,auVar55._0_16_);
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + param_5));
      auVar62._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_
      ;
      bVar10 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar62._4_4_ = (uint)bVar10 * auVar71._4_4_ | (uint)!bVar10 * auVar51._4_4_;
      bVar10 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar62._8_4_ = (uint)bVar10 * auVar71._8_4_ | (uint)!bVar10 * auVar51._8_4_;
      bVar10 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar62._12_4_ = (uint)bVar10 * auVar71._12_4_ | (uint)!bVar10 * auVar51._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      auVar51 = vxorps_avx512vl(auVar54._0_16_,auVar54._0_16_);
      auVar71 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar42));
      auVar58._0_4_ = (uint)(bVar47 & 1) * auVar71._0_4_ | (uint)!(bool)(bVar47 & 1) * auVar51._0_4_
      ;
      bVar10 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar58._4_4_ = (uint)bVar10 * auVar71._4_4_ | (uint)!bVar10 * auVar51._4_4_;
      bVar10 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar58._8_4_ = (uint)bVar10 * auVar71._8_4_ | (uint)!bVar10 * auVar51._8_4_;
      bVar10 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar58._12_4_ = (uint)bVar10 * auVar71._12_4_ | (uint)!bVar10 * auVar51._12_4_;
      auVar58._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar71._16_4_;
      auVar58._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar71._20_4_;
      auVar58._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar71._24_4_;
      auVar58._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar71._28_4_;
      auVar72 = vgatherdps_avx512vl(*puVar3);
      auVar71._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * auVar72._4_4_;
      auVar71._0_4_ = (uint)(bVar47 & 1) * auVar72._0_4_;
      auVar71._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * auVar72._8_4_;
      auVar71._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * auVar72._12_4_;
      auVar71._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * auVar72._16_4_;
      auVar71._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * auVar72._20_4_;
      auVar71._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * auVar72._24_4_;
      auVar71._28_4_ = (uint)(byte)(uVar38 >> 7) * auVar72._28_4_;
    }
    auVar72 = vbroadcastss_avx512vl(ZEXT416(param_6));
    lVar45 = (longlong)((int)uVar44 << 2);
    piVar4 = (int *)(param_4 + lVar45);
    auVar78._0_4_ = param_7 * (float)((uint)(bVar47 & 1) * *piVar4) + auVar72._0_4_;
    auVar78._4_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 1) & 1) * piVar4[1]) + auVar72._4_4_;
    auVar78._8_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 2) & 1) * piVar4[2]) + auVar72._8_4_;
    auVar78._12_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 3) & 1) * piVar4[3]) + auVar72._12_4_
    ;
    auVar78._16_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 4) & 1) * piVar4[4]) + auVar72._16_4_
    ;
    auVar78._20_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 5) & 1) * piVar4[5]) + auVar72._20_4_
    ;
    auVar78._24_4_ = param_7 * (float)((uint)((byte)(uVar38 >> 6) & 1) * piVar4[6]) + auVar72._24_4_
    ;
    auVar78._28_4_ = param_7 * (float)((uint)(byte)(uVar38 >> 7) * piVar4[7]) + auVar72._28_4_;
    auVar51 = vxorps_avx512vl(ZEXT416(param_6),ZEXT416(param_6));
    auVar76._4_4_ = param_8;
    auVar76._0_4_ = param_8;
    auVar76._8_4_ = param_8;
    auVar76._12_4_ = param_8;
    auVar76._16_4_ = param_8;
    auVar76._20_4_ = param_8;
    auVar76._24_4_ = param_8;
    auVar76._28_4_ = param_8;
    auVar72 = vbroadcastss_avx512vl(ZEXT416(param_9));
    piVar4 = (int *)(param_5 + lVar45);
    auVar68._4_4_ = (uint)((byte)(uVar38 >> 1) & 1) * piVar4[1];
    auVar68._0_4_ = (uint)(bVar47 & 1) * *piVar4;
    auVar68._8_4_ = (uint)((byte)(uVar38 >> 2) & 1) * piVar4[2];
    auVar68._12_4_ = (uint)((byte)(uVar38 >> 3) & 1) * piVar4[3];
    auVar68._16_4_ = (uint)((byte)(uVar38 >> 4) & 1) * piVar4[4];
    auVar68._20_4_ = (uint)((byte)(uVar38 >> 5) & 1) * piVar4[5];
    auVar68._24_4_ = (uint)((byte)(uVar38 >> 6) & 1) * piVar4[6];
    auVar68._28_4_ = (uint)(byte)(uVar38 >> 7) * piVar4[7];
    auVar72 = vfmadd213ps_avx512vl(auVar68,auVar72,auVar76);
    auVar56 = vaddps_avx512vl(auVar78,auVar72);
    auVar57 = vfnmadd213ps_avx512vl(auVar56,auVar62,auVar60);
    auVar59 = vfnmadd213ps_avx512vl(auVar56,auVar58,auVar61);
    auVar52._4_4_ = (uint)bVar7 * auVar53._4_4_ | (uint)!bVar7 * iStack_13c;
    auVar52._0_4_ = (uint)(bVar47 & 1) * auVar53._0_4_ | (uint)!(bool)(bVar47 & 1) * local_140;
    auVar52._8_4_ = (uint)bVar11 * auVar53._8_4_ | (uint)!bVar11 * iStack_138;
    auVar52._12_4_ = (uint)bVar14 * auVar53._12_4_ | (uint)!bVar14 * iStack_134;
    auVar52._16_4_ = (uint)bVar17 * auVar53._16_4_ | (uint)!bVar17 * iStack_130;
    auVar52._20_4_ = (uint)bVar20 * auVar53._20_4_ | (uint)!bVar20 * iStack_12c;
    auVar52._24_4_ = (uint)bVar23 * auVar53._24_4_ | (uint)!bVar23 * iStack_128;
    auVar52._28_4_ = (uint)bVar26 * auVar53._28_4_ | (uint)!bVar26 * iStack_124;
    auVar53 = vfnmadd213ps_avx512vl(auVar56,auVar71,auVar64);
    auVar65._4_4_ = (uint)bVar8 * auVar54._4_4_ | (uint)!bVar8 * iStack_11c;
    auVar65._0_4_ = (uint)(bVar47 & 1) * auVar54._0_4_ | (uint)!(bool)(bVar47 & 1) * local_120;
    auVar65._8_4_ = (uint)bVar12 * auVar54._8_4_ | (uint)!bVar12 * iStack_118;
    auVar65._12_4_ = (uint)bVar15 * auVar54._12_4_ | (uint)!bVar15 * iStack_114;
    auVar65._16_4_ = (uint)bVar18 * auVar54._16_4_ | (uint)!bVar18 * iStack_110;
    auVar65._20_4_ = (uint)bVar21 * auVar54._20_4_ | (uint)!bVar21 * iStack_10c;
    auVar65._24_4_ = (uint)bVar24 * auVar54._24_4_ | (uint)!bVar24 * iStack_108;
    auVar65._28_4_ = (uint)bVar27 * auVar54._28_4_ | (uint)!bVar27 * iStack_104;
    auVar66._4_4_ = (uint)bVar9 * auVar55._4_4_ | (uint)!bVar9 * iStack_fc;
    auVar66._0_4_ = (uint)(bVar47 & 1) * auVar55._0_4_ | (uint)!(bool)(bVar47 & 1) * local_100;
    auVar66._8_4_ = (uint)bVar13 * auVar55._8_4_ | (uint)!bVar13 * iStack_f8;
    auVar66._12_4_ = (uint)bVar16 * auVar55._12_4_ | (uint)!bVar16 * iStack_f4;
    auVar66._16_4_ = (uint)bVar19 * auVar55._16_4_ | (uint)!bVar19 * iStack_f0;
    auVar66._20_4_ = (uint)bVar22 * auVar55._20_4_ | (uint)!bVar22 * iStack_ec;
    auVar66._24_4_ = (uint)bVar25 * auVar55._24_4_ | (uint)!bVar25 * iStack_e8;
    auVar66._28_4_ = (uint)bVar28 * auVar55._28_4_ | (uint)!bVar28 * iStack_e4;
    auVar52 = vsubps_avx512vl(auVar52,auVar57);
    auVar54 = vsubps_avx512vl(auVar65,auVar59);
    auVar55 = vsubps_avx512vl(auVar66,auVar53);
    auVar56 = vmulps_avx512vl(auVar54,auVar54);
    auVar56 = vfmadd231ps_avx512vl(auVar56,auVar52,auVar52);
    auVar56 = vfmadd231ps_avx512vl(auVar56,auVar55,auVar55);
    auVar63 = vsqrtps_avx512vl(auVar56);
    auVar63 = vdivps_avx512vl(auVar72,auVar63);
    auVar60 = vfnmadd213ps_avx512vl(auVar62,auVar78,auVar60);
    auVar72 = vmulps_avx512vl(auVar72,auVar72);
    uVar44 = vcmpps_avx512vl(auVar56,auVar72,1);
    auVar72._4_4_ = __real_322bcc77;
    auVar72._0_4_ = __real_322bcc77;
    auVar72._8_4_ = __real_322bcc77;
    auVar72._12_4_ = __real_322bcc77;
    auVar72._16_4_ = __real_322bcc77;
    auVar72._20_4_ = __real_322bcc77;
    auVar72._24_4_ = __real_322bcc77;
    auVar72._28_4_ = __real_322bcc77;
    uVar38 = vcmpps_avx512vl(auVar56,auVar72,1);
    auVar72 = vfmadd231ps_avx512vl(auVar57,auVar63,auVar52);
    bVar5 = (byte)uVar44;
    bVar6 = (byte)uVar38;
    auVar69._0_4_ =
         (uint)(bVar6 & 1) * auVar60._0_4_ |
         (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar72._0_4_;
    bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
    auVar69._4_4_ =
         (uint)bVar7 * auVar60._4_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 1) & 1) * auVar72._4_4_;
    bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
    auVar69._8_4_ =
         (uint)bVar7 * auVar60._8_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 2) & 1) * auVar72._8_4_;
    bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
    auVar69._12_4_ =
         (uint)bVar7 * auVar60._12_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 3) & 1) * auVar72._12_4_;
    bVar7 = (bool)((byte)(uVar38 >> 4) & 1);
    auVar69._16_4_ =
         (uint)bVar7 * auVar60._16_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 4) & 1) * auVar72._16_4_;
    bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
    auVar69._20_4_ =
         (uint)bVar7 * auVar60._20_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 5) & 1) * auVar72._20_4_;
    bVar7 = (bool)((byte)(uVar38 >> 6) & 1);
    auVar69._24_4_ =
         (uint)bVar7 * auVar60._24_4_ |
         (uint)!bVar7 * (uint)((byte)(uVar44 >> 6) & 1) * auVar72._24_4_;
    bVar7 = SUB81(uVar38 >> 7,0);
    auVar69._28_4_ =
         (uint)bVar7 * auVar60._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar44 >> 7) * auVar72._28_4_;
    uVar37 = vcmpps_avx512vl(auVar73,ZEXT1632(auVar51),4);
    uVar40 = vcmpps_avx512vl(auVar69,ZEXT1632(auVar51),4);
    bVar47 = (byte)uVar37 & (byte)uVar40 & bVar47;
    uVar49 = (ulonglong)bVar47;
    if (bVar47 != 0) {
      auVar72 = vfnmadd213ps_avx512vl(auVar58,auVar78,auVar61);
      auVar52 = vfmadd213ps_avx512vl(auVar54,auVar63,auVar59);
      auVar53 = vfmadd213ps_avx512vl(auVar55,auVar63,auVar53);
      auVar74._0_4_ =
           (uint)(bVar6 & 1) * auVar72._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar52._0_4_;
      bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar74._4_4_ =
           (uint)bVar7 * auVar72._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 1) & 1) * auVar52._4_4_;
      bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar74._8_4_ =
           (uint)bVar7 * auVar72._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 2) & 1) * auVar52._8_4_;
      bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar74._12_4_ =
           (uint)bVar7 * auVar72._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 3) & 1) * auVar52._12_4_;
      bVar7 = (bool)((byte)(uVar38 >> 4) & 1);
      auVar74._16_4_ =
           (uint)bVar7 * auVar72._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 4) & 1) * auVar52._16_4_;
      bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
      auVar74._20_4_ =
           (uint)bVar7 * auVar72._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 5) & 1) * auVar52._20_4_;
      bVar7 = (bool)((byte)(uVar38 >> 6) & 1);
      auVar74._24_4_ =
           (uint)bVar7 * auVar72._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 6) & 1) * auVar52._24_4_;
      bVar7 = SUB81(uVar38 >> 7,0);
      auVar74._28_4_ =
           (uint)bVar7 * auVar72._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar44 >> 7) * auVar52._28_4_;
      auVar75._0_4_ =
           (uint)(bVar6 & 1) * (int)(-(auVar78._0_4_ * auVar71._0_4_) + auVar64._0_4_) |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar53._0_4_;
      bVar7 = (bool)((byte)(uVar38 >> 1) & 1);
      auVar75._4_4_ =
           (uint)bVar7 * (int)(-(auVar78._4_4_ * auVar71._4_4_) + auVar64._4_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 1) & 1) * auVar53._4_4_;
      bVar7 = (bool)((byte)(uVar38 >> 2) & 1);
      auVar75._8_4_ =
           (uint)bVar7 * (int)(-(auVar78._8_4_ * auVar71._8_4_) + auVar64._8_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 2) & 1) * auVar53._8_4_;
      bVar7 = (bool)((byte)(uVar38 >> 3) & 1);
      auVar75._12_4_ =
           (uint)bVar7 * (int)(-(auVar78._12_4_ * auVar71._12_4_) + auVar64._12_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 3) & 1) * auVar53._12_4_;
      bVar7 = (bool)((byte)(uVar38 >> 4) & 1);
      auVar75._16_4_ =
           (uint)bVar7 * (int)(-(auVar78._16_4_ * auVar71._16_4_) + auVar64._16_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 4) & 1) * auVar53._16_4_;
      bVar7 = (bool)((byte)(uVar38 >> 5) & 1);
      auVar75._20_4_ =
           (uint)bVar7 * (int)(-(auVar78._20_4_ * auVar71._20_4_) + auVar64._20_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 5) & 1) * auVar53._20_4_;
      bVar7 = (bool)((byte)(uVar38 >> 6) & 1);
      auVar75._24_4_ =
           (uint)bVar7 * (int)(-(auVar78._24_4_ * auVar71._24_4_) + auVar64._24_4_) |
           (uint)!bVar7 * (uint)((byte)(uVar44 >> 6) & 1) * auVar53._24_4_;
      bVar7 = SUB81(uVar38 >> 7,0);
      auVar75._28_4_ =
           (uint)bVar7 * (int)(-(auVar78._28_4_ * auVar71._28_4_) + auVar64._28_4_) |
           (uint)!bVar7 * (uint)(byte)(uVar44 >> 7) * auVar53._28_4_;
      if (bVar47 == 0xff) {
        auVar71 = vunpcklps_avx(auVar69,auVar74);
        auVar72 = vunpcklps_avx(auVar75,auVar73);
        auVar53 = vunpcklpd_avx512vl(auVar71,auVar72);
        auVar71 = vunpckhpd_avx(auVar71,auVar72);
        auVar72 = vunpckhps_avx(auVar69,auVar74);
        auVar73 = vunpckhps_avx(auVar75,auVar73);
        auVar52 = vunpcklpd_avx(auVar72,auVar73);
        auVar72 = vunpckhpd_avx(auVar72,auVar73);
        auVar73 = vinsertf32x4_avx512vl(auVar53,auVar71._0_16_,1);
        *pauVar42 = auVar73;
        auVar77._16_16_ = auVar72._0_16_;
        auVar77._0_16_ = auVar52._0_16_;
        pauVar42[1] = auVar77;
        auVar71 = vshuff64x2_avx512vl(auVar53,auVar71,3);
        pauVar42[2] = auVar71;
        auVar71 = vperm2f128_avx(auVar52,auVar72,0x31);
        pauVar42[3] = auVar71;
      }
      else {
        vscatterdps_avx512vl
                  (ZEXT832(pauVar42) +
                   ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar49,
                   auVar69);
        auVar41._4_28_ = _UNK_150b50e64;
        auVar41._0_4_ = ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
        vscatterdps_avx512vl(ZEXT832(pauVar42) + auVar41,uVar49,auVar74);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar42) +
                   ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar49,
                   auVar75);
        vscatterdps_avx512vl
                  (ZEXT832(pauVar42) +
                   ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar49,
                   auVar73);
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithDistanceMap_avx512skx @ 140319a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithDistanceMap_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  undefined1 (*pauVar36) [32];
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar43 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [64];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar78 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM23 [64];
  undefined1 auVar79 [16];
  undefined1 in_ZMM24 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar62 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar61 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar60 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar79 = in_ZMM24._0_16_;
  auVar78 = in_ZMM18._0_16_;
  auVar77 = in_ZMM17._0_16_;
  auVar42 = in_ZMM16._0_16_;
  uVar33 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar33 = param_9;
  }
  auVar68 = ZEXT416((uint)param_7);
  if ((int)(uVar33 & 0xfffffff8) < 1) {
    uVar35 = 0;
  }
  else {
    auVar64._4_4_ = param_7;
    auVar64._0_4_ = param_7;
    auVar64._8_4_ = param_7;
    auVar64._12_4_ = param_7;
    auVar64._16_4_ = param_7;
    auVar64._20_4_ = param_7;
    auVar64._24_4_ = param_7;
    auVar64._28_4_ = param_7;
    auVar42 = vmulss_avx512f(auVar68,auVar68);
    auVar44 = vbroadcastss_avx512vl(auVar42);
    auVar42 = auVar44._0_16_;
    unaff_RBX = (longlong)param_8 * 3 + 0x10;
    pauVar36 = (undefined1 (*) [32])((longlong)param_8 * 0x10 + param_1);
    uVar38 = 0;
    auVar77 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar78 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar45 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar43 = vxorps_avx512vl(in_ZMM23._0_16_,in_ZMM23._0_16_);
    auVar79 = __ymm_0000007800000068000000580000004800000038000000280000001800000008._0_16_;
    uVar35 = 0;
    do {
      auVar46 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar47 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar48 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar49 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar50 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar51 = vunpckhps_avx512vl(auVar48,auVar49);
      auVar52 = vunpckhpd_avx512vl(auVar50,auVar51);
      uVar29 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar43),4);
      if ((char)uVar29 != '\0') {
        auVar50 = vunpcklpd_avx512vl(auVar50,auVar51);
        auVar46 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpcklps_avx512vl(auVar48,auVar49);
        auVar51 = vunpckhpd_avx512vl(auVar46,auVar47);
        auVar53 = vunpcklpd_avx512vl(auVar46,auVar47);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x40 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + -0x20 + unaff_RBX * 4);
        auVar48 = *(undefined1 (*) [32])(param_2 + unaff_RBX * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,auVar47);
        auVar54 = vpermt2ps_avx512vl(auVar49,auVar62,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar61,auVar47);
        auVar55 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar56 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x40 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + -0x20 + unaff_RBX * 4);
        auVar48 = *(undefined1 (*) [32])(param_3 + unaff_RBX * 4);
        auVar49 = vblendps_avx(auVar47,auVar46,0x24);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,auVar47);
        auVar49 = vpermt2ps_avx512vl(auVar49,auVar62,auVar48);
        auVar47 = vpermt2ps_avx512vl(auVar48,auVar61,auVar47);
        auVar48 = vinsertf32x4_avx512vl(auVar46,auVar47._0_16_,1);
        auVar47 = vshuff64x2_avx512vl(auVar46,auVar47,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar38);
        auVar76._0_4_ = param_6 * *pfVar1 + param_5;
        auVar76._4_4_ = param_6 * pfVar1[1] + param_5;
        auVar76._8_4_ = param_6 * pfVar1[2] + param_5;
        auVar76._12_4_ = param_6 * pfVar1[3] + param_5;
        auVar76._16_4_ = param_6 * pfVar1[4] + param_5;
        auVar76._20_4_ = param_6 * pfVar1[5] + param_5;
        auVar76._24_4_ = param_6 * pfVar1[6] + param_5;
        auVar76._28_4_ = param_6 * pfVar1[7] + param_5;
        auVar46._0_4_ = auVar76._0_4_ + param_7;
        auVar46._4_4_ = auVar76._4_4_ + param_7;
        auVar46._8_4_ = auVar76._8_4_ + param_7;
        auVar46._12_4_ = auVar76._12_4_ + param_7;
        auVar46._16_4_ = auVar76._16_4_ + param_7;
        auVar46._20_4_ = auVar76._20_4_ + param_7;
        auVar46._24_4_ = auVar76._24_4_ + param_7;
        auVar46._28_4_ = auVar76._28_4_ + param_7;
        auVar57 = vfnmadd213ps_avx512vl(auVar46,auVar48,auVar55);
        auVar58 = vfnmadd213ps_avx512vl(auVar46,auVar47,auVar56);
        auVar75._0_4_ = -(auVar49._0_4_ * auVar46._0_4_) + auVar54._0_4_;
        auVar75._4_4_ = -(auVar49._4_4_ * auVar46._4_4_) + auVar54._4_4_;
        auVar75._8_4_ = -(auVar49._8_4_ * auVar46._8_4_) + auVar54._8_4_;
        auVar75._12_4_ = -(auVar49._12_4_ * auVar46._12_4_) + auVar54._12_4_;
        auVar75._16_4_ = -(auVar49._16_4_ * auVar46._16_4_) + auVar54._16_4_;
        auVar75._20_4_ = -(auVar49._20_4_ * auVar46._20_4_) + auVar54._20_4_;
        auVar75._24_4_ = -(auVar49._24_4_ * auVar46._24_4_) + auVar54._24_4_;
        auVar75._28_4_ = -(auVar49._28_4_ * auVar46._28_4_) + auVar54._28_4_;
        auVar53 = vsubps_avx512vl(auVar53,auVar57);
        auVar51 = vsubps_avx512vl(auVar51,auVar58);
        auVar50 = vsubps_avx512vl(auVar50,auVar75);
        auVar46 = vmulps_avx512vl(auVar51,auVar51);
        auVar59._0_4_ = auVar53._0_4_ * auVar53._0_4_ + auVar46._0_4_;
        auVar59._4_4_ = auVar53._4_4_ * auVar53._4_4_ + auVar46._4_4_;
        auVar59._8_4_ = auVar53._8_4_ * auVar53._8_4_ + auVar46._8_4_;
        auVar59._12_4_ = auVar53._12_4_ * auVar53._12_4_ + auVar46._12_4_;
        auVar59._16_4_ = auVar53._16_4_ * auVar53._16_4_ + auVar46._16_4_;
        auVar59._20_4_ = auVar53._20_4_ * auVar53._20_4_ + auVar46._20_4_;
        auVar59._24_4_ = auVar53._24_4_ * auVar53._24_4_ + auVar46._24_4_;
        auVar59._28_4_ = auVar53._28_4_ * auVar53._28_4_ + auVar46._28_4_;
        auVar59 = vfmadd231ps_avx512vl(auVar59,auVar50,auVar50);
        auVar46 = vsqrtps_avx(auVar59);
        auVar46 = vdivps_avx(auVar64,auVar46);
        uVar30 = vcmpps_avx512vl(auVar59,auVar44,1);
        auVar53 = vfmadd231ps_avx512vl(auVar57,auVar46,auVar53);
        bVar39 = (byte)uVar30;
        uVar41 = vcmpps_avx512vl(auVar59,auVar45,1);
        bVar5 = (byte)uVar41;
        auVar57._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(auVar76._0_4_ * auVar48._0_4_) + auVar55._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar53._0_4_;
        bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar57._4_4_ =
             (uint)bVar7 * (int)(-(auVar76._4_4_ * auVar48._4_4_) + auVar55._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar53._4_4_;
        bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar57._8_4_ =
             (uint)bVar7 * (int)(-(auVar76._8_4_ * auVar48._8_4_) + auVar55._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar53._8_4_;
        bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar57._12_4_ =
             (uint)bVar7 * (int)(-(auVar76._12_4_ * auVar48._12_4_) + auVar55._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar53._12_4_;
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        auVar57._16_4_ =
             (uint)bVar7 * (int)(-(auVar76._16_4_ * auVar48._16_4_) + auVar55._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar53._16_4_;
        bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
        auVar57._20_4_ =
             (uint)bVar7 * (int)(-(auVar76._20_4_ * auVar48._20_4_) + auVar55._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar53._20_4_;
        bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
        auVar57._24_4_ =
             (uint)bVar7 * (int)(-(auVar76._24_4_ * auVar48._24_4_) + auVar55._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar53._24_4_;
        bVar7 = SUB81(uVar41 >> 7,0);
        auVar57._28_4_ =
             (uint)bVar7 * (int)(-(auVar76._28_4_ * auVar48._28_4_) + auVar55._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar53._28_4_;
        uVar40 = vcmpps_avx512vl(auVar57,ZEXT1632(auVar43),4);
        uVar31 = vcmpps_avx512vl(auVar52,ZEXT1632(auVar43),4);
        uVar40 = uVar40 & uVar31;
        if ((char)uVar40 != '\0') {
          auVar47 = vfnmadd213ps_avx512vl(auVar47,auVar76,auVar56);
          auVar48 = vfmadd213ps_avx512vl(auVar51,auVar46,auVar58);
          auVar46 = vfmadd213ps_avx512vl(auVar50,auVar46,auVar75);
          auVar50._0_4_ =
               (uint)(bVar5 & 1) * auVar47._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar48._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar50._4_4_ =
               (uint)bVar7 * auVar47._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar48._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar50._8_4_ =
               (uint)bVar7 * auVar47._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar48._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar50._12_4_ =
               (uint)bVar7 * auVar47._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar48._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar50._16_4_ =
               (uint)bVar7 * auVar47._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar48._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar50._20_4_ =
               (uint)bVar7 * auVar47._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar48._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar50._24_4_ =
               (uint)bVar7 * auVar47._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar48._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar50._28_4_ =
               (uint)bVar7 * auVar47._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar48._28_4_;
          auVar47._0_4_ =
               (uint)(bVar5 & 1) * (int)(-(auVar76._0_4_ * auVar49._0_4_) + auVar54._0_4_) |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar7 * (int)(-(auVar76._4_4_ * auVar49._4_4_) + auVar54._4_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar46._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar7 * (int)(-(auVar76._8_4_ * auVar49._8_4_) + auVar54._8_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar46._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar7 * (int)(-(auVar76._12_4_ * auVar49._12_4_) + auVar54._12_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar46._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar7 * (int)(-(auVar76._16_4_ * auVar49._16_4_) + auVar54._16_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar46._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar7 * (int)(-(auVar76._20_4_ * auVar49._20_4_) + auVar54._20_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar46._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar7 * (int)(-(auVar76._24_4_ * auVar49._24_4_) + auVar54._24_4_) |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar46._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar7 * (int)(-(auVar76._28_4_ * auVar49._28_4_) + auVar54._28_4_) |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar46._28_4_;
          if ((char)uVar40 == -1) {
            auVar46 = vunpcklps_avx512vl(auVar57,auVar50);
            auVar48 = vunpcklps_avx512vl(auVar47,auVar52);
            auVar49 = vunpcklpd_avx512vl(auVar46,auVar48);
            auVar46 = vunpckhpd_avx512vl(auVar46,auVar48);
            auVar48 = vunpckhps_avx512vl(auVar57,auVar50);
            auVar47 = vunpckhps_avx512vl(auVar47,auVar52);
            auVar50 = vunpcklpd_avx512vl(auVar48,auVar47);
            auVar47 = vunpckhpd_avx512vl(auVar48,auVar47);
            auVar48 = vinsertf32x4_avx512vl(auVar49,auVar46._0_16_,1);
            *pauVar36 = auVar48;
            auVar48 = vinsertf32x4_avx512vl(auVar50,auVar47._0_16_,1);
            pauVar36[1] = auVar48;
            auVar46 = vshuff64x2_avx512vl(auVar49,auVar46,3);
            pauVar36[2] = auVar46;
            auVar46 = vshuff64x2_avx512vl(auVar50,auVar47,3);
            pauVar36[3] = auVar46;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar64,uVar40,auVar57);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar54,uVar40,auVar50);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar75,uVar40,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar76,uVar40,auVar52);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar38 = uVar38 + 0x20;
      pauVar36 = pauVar36 + 4;
      unaff_RBX = unaff_RBX + 0x18;
    } while (uVar35 < (uVar33 & 0xfffffff8));
  }
  iVar34 = (int)uVar35;
  if (iVar34 < (int)param_9) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar60 = vpor_avx2(auVar60,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar61 = vpbroadcastd_avx512vl();
    uVar35 = vpcmpgtd_avx512vl(auVar61,auVar60);
    lVar37 = (longlong)(param_8 + iVar34);
    pauVar36 = (undefined1 (*) [32])(param_1 + lVar37 * 0x10);
    bVar39 = (byte)uVar35;
    if (bVar39 == 0xff) {
      auVar62 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar44 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar45 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar64 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar46 = vunpcklps_avx512vl(auVar62,auVar44);
      auVar62 = vunpckhps_avx512vl(auVar62,auVar44);
      auVar44 = vunpcklps_avx512vl(auVar45,auVar64);
      auVar45 = vunpckhps_avx512vl(auVar45,auVar64);
      auVar49 = vunpcklpd_avx512vl(auVar46,auVar44);
      auVar48 = vunpckhpd_avx512vl(auVar46,auVar44);
      auVar44 = vunpcklpd_avx512vl(auVar62,auVar45);
      auVar62 = vunpckhpd_avx512vl(auVar62,auVar45);
    }
    else {
      auVar42 = vxorps_avx512vl(auVar42,auVar42);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar49._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar49._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar49._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar49._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar49._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar42 = vxorps_avx512vl(auVar77,auVar77);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar48._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar48._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar48._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar48._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar48._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar48._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar48._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar48._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar42 = vxorps_avx512vl(auVar78,auVar78);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar44._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar42._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar44._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar42._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar44._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar42._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar45 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar62._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_;
      auVar62._0_4_ = (uint)(bVar39 & 1) * auVar45._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar45._28_4_;
    }
    uVar32 = vpcmpd_avx512vl(auVar60,auVar61,5);
    bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar20 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar23 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar26 = SUB81(uVar35 >> 7,0);
    bVar8 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar21 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar27 = SUB81(uVar35 >> 7,0);
    bVar9 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar25 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar28 = SUB81(uVar35 >> 7,0);
    auVar74 = ZEXT1664((undefined1  [16])0x0);
    uVar29 = vcmpps_avx512vl(auVar62,auVar74._0_32_,0);
    if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
      pauVar2 = (undefined1 (*) [32])(param_2 + lVar37 * 0xc);
      if (bVar39 == 0xff) {
        auVar60 = pauVar2[1];
        auVar61 = vblendps_avx(auVar60,*pauVar2,0x24);
        auVar45 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60);
        auVar53 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar60 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar60);
        auVar51 = vinsertf32x4_avx512vl(auVar45,auVar60._0_16_,1);
        auVar52 = vshuff64x2_avx512vl(auVar45,auVar60,3);
        auVar60 = *(undefined1 (*) [32])(param_3 + lVar37 * 0xc);
        auVar61 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar37 * 0xc);
        auVar45 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar37 * 0xc);
        auVar64 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60,auVar61);
        auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar45,auVar61);
        auVar54 = vinsertf32x4_avx512vl(auVar64,auVar46._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar64,auVar46,3);
        auVar60 = vblendps_avx(auVar61,auVar60,0x24);
        auVar60 = vpermt2ps_avx512vl(auVar60,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar45);
      }
      else {
        auVar42 = vxorps_avx512vl(auVar49._0_16_,auVar49._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + (longlong)*pauVar2));
        auVar51._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar51._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
        auVar52._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar52._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        auVar52._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar60._8_4_;
        auVar52._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar60._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
        auVar53._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar53._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar53._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar74._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar53._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar74._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        puVar3 = (undefined4 *)(param_3 + lVar37 * 0xc);
        auVar42 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar36));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar42 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + unaff_RBX));
        auVar55._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar55._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar42._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar55._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar42._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar55._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar42._12_4_;
        auVar55._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar55._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar55._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar55._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar61 = vgatherdps_avx512vl(*puVar3);
        auVar60._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar60._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
        auVar60._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
        auVar60._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar60._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar60._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar60._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      }
      auVar71._4_4_ = param_5;
      auVar71._0_4_ = param_5;
      auVar71._8_4_ = param_5;
      auVar71._12_4_ = param_5;
      auVar71._16_4_ = param_5;
      auVar71._20_4_ = param_5;
      auVar71._24_4_ = param_5;
      auVar71._28_4_ = param_5;
      auVar70._4_4_ = param_6;
      auVar70._0_4_ = param_6;
      auVar70._8_4_ = param_6;
      auVar70._12_4_ = param_6;
      auVar70._16_4_ = param_6;
      auVar70._20_4_ = param_6;
      auVar70._24_4_ = param_6;
      auVar70._28_4_ = param_6;
      piVar4 = (int *)(param_4 + (iVar34 << 2));
      auVar63._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar4[1];
      auVar63._0_4_ = (uint)(bVar39 & 1) * *piVar4;
      auVar63._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar4[2];
      auVar63._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar4[3];
      auVar63._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar4[4];
      auVar63._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar4[5];
      auVar63._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar4[6];
      auVar63._28_4_ = (uint)(byte)(uVar35 >> 7) * piVar4[7];
      auVar64 = vfmadd213ps_avx512vl(auVar63,auVar70,auVar71);
      auVar42 = vxorps_avx512vl(auVar79,auVar79);
      auVar61 = vbroadcastss_avx512vl(auVar68);
      auVar45 = vaddps_avx512vl(auVar61,auVar64);
      auVar46 = vfnmadd213ps_avx512vl(auVar45,auVar54,auVar51);
      auVar47 = vfnmadd213ps_avx512vl(auVar45,auVar55,auVar52);
      auVar50 = vfnmadd213ps_avx512vl(auVar45,auVar60,auVar53);
      auVar45._4_4_ = (uint)bVar7 * auVar49._4_4_ | (uint)!bVar7 * iStack_13c;
      auVar45._0_4_ = (uint)(bVar39 & 1) * auVar49._0_4_ | (uint)!(bool)(bVar39 & 1) * local_140;
      auVar45._8_4_ = (uint)bVar11 * auVar49._8_4_ | (uint)!bVar11 * iStack_138;
      auVar45._12_4_ = (uint)bVar14 * auVar49._12_4_ | (uint)!bVar14 * iStack_134;
      auVar45._16_4_ = (uint)bVar17 * auVar49._16_4_ | (uint)!bVar17 * iStack_130;
      auVar45._20_4_ = (uint)bVar20 * auVar49._20_4_ | (uint)!bVar20 * iStack_12c;
      auVar45._24_4_ = (uint)bVar23 * auVar49._24_4_ | (uint)!bVar23 * iStack_128;
      auVar45._28_4_ = (uint)bVar26 * auVar49._28_4_ | (uint)!bVar26 * iStack_124;
      auVar56._4_4_ = (uint)bVar8 * auVar48._4_4_ | (uint)!bVar8 * iStack_11c;
      auVar56._0_4_ = (uint)(bVar39 & 1) * auVar48._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar56._8_4_ = (uint)bVar12 * auVar48._8_4_ | (uint)!bVar12 * iStack_118;
      auVar56._12_4_ = (uint)bVar15 * auVar48._12_4_ | (uint)!bVar15 * iStack_114;
      auVar56._16_4_ = (uint)bVar18 * auVar48._16_4_ | (uint)!bVar18 * iStack_110;
      auVar56._20_4_ = (uint)bVar21 * auVar48._20_4_ | (uint)!bVar21 * iStack_10c;
      auVar56._24_4_ = (uint)bVar24 * auVar48._24_4_ | (uint)!bVar24 * iStack_108;
      auVar56._28_4_ = (uint)bVar27 * auVar48._28_4_ | (uint)!bVar27 * iStack_104;
      auVar58._4_4_ = (uint)bVar9 * auVar44._4_4_ | (uint)!bVar9 * iStack_fc;
      auVar58._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar58._8_4_ = (uint)bVar13 * auVar44._8_4_ | (uint)!bVar13 * iStack_f8;
      auVar58._12_4_ = (uint)bVar16 * auVar44._12_4_ | (uint)!bVar16 * iStack_f4;
      auVar58._16_4_ = (uint)bVar19 * auVar44._16_4_ | (uint)!bVar19 * iStack_f0;
      auVar58._20_4_ = (uint)bVar22 * auVar44._20_4_ | (uint)!bVar22 * iStack_ec;
      auVar58._24_4_ = (uint)bVar25 * auVar44._24_4_ | (uint)!bVar25 * iStack_e8;
      auVar58._28_4_ = (uint)bVar28 * auVar44._28_4_ | (uint)!bVar28 * iStack_e4;
      auVar44 = vsubps_avx512vl(auVar45,auVar46);
      auVar45 = vsubps_avx512vl(auVar56,auVar47);
      auVar48 = vsubps_avx512vl(auVar58,auVar50);
      auVar49 = vmulps_avx512vl(auVar45,auVar45);
      auVar49 = vfmadd231ps_avx512vl(auVar49,auVar44,auVar44);
      auVar49 = vfmadd231ps_avx512vl(auVar49,auVar48,auVar48);
      auVar56 = vsqrtps_avx512vl(auVar49);
      auVar56 = vdivps_avx512vl(auVar61,auVar56);
      auVar51 = vfnmadd213ps_avx512vl(auVar54,auVar64,auVar51);
      param_7 = param_7 * param_7;
      auVar69._4_4_ = param_7;
      auVar69._0_4_ = param_7;
      auVar69._8_4_ = param_7;
      auVar69._12_4_ = param_7;
      auVar69._16_4_ = param_7;
      auVar69._20_4_ = param_7;
      auVar69._24_4_ = param_7;
      auVar69._28_4_ = param_7;
      uVar35 = vcmpps_avx512vl(auVar49,auVar69,1);
      auVar61._4_4_ = __real_322bcc77;
      auVar61._0_4_ = __real_322bcc77;
      auVar61._8_4_ = __real_322bcc77;
      auVar61._12_4_ = __real_322bcc77;
      auVar61._16_4_ = __real_322bcc77;
      auVar61._20_4_ = __real_322bcc77;
      auVar61._24_4_ = __real_322bcc77;
      auVar61._28_4_ = __real_322bcc77;
      uVar30 = vcmpps_avx512vl(auVar49,auVar61,1);
      auVar61 = vfmadd231ps_avx512vl(auVar46,auVar56,auVar44);
      bVar5 = (byte)uVar35;
      bVar6 = (byte)uVar30;
      auVar65._0_4_ =
           (uint)(bVar6 & 1) * auVar51._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar61._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar7 * auVar51._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar7 * auVar51._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar7 * auVar51._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar7 * auVar51._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar7 * auVar51._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar7 * auVar51._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar7 * auVar51._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      uVar29 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar42),4);
      uVar32 = vcmpps_avx512vl(auVar65,ZEXT1632(auVar42),4);
      bVar39 = (byte)uVar29 & (byte)uVar32 & bVar39;
      uVar41 = (ulonglong)bVar39;
      if (bVar39 != 0) {
        auVar61 = vfnmadd213ps_avx512vl(auVar55,auVar64,auVar52);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar64,auVar53);
        auVar44 = vfmadd213ps_avx512vl(auVar45,auVar56,auVar47);
        auVar45 = vfmadd213ps_avx512vl(auVar48,auVar56,auVar50);
        auVar66._0_4_ =
             (uint)(bVar6 & 1) * auVar61._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar66._4_4_ =
             (uint)bVar7 * auVar61._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar66._8_4_ =
             (uint)bVar7 * auVar61._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar66._12_4_ =
             (uint)bVar7 * auVar61._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar66._16_4_ =
             (uint)bVar7 * auVar61._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar66._20_4_ =
             (uint)bVar7 * auVar61._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar66._24_4_ =
             (uint)bVar7 * auVar61._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar66._28_4_ =
             (uint)bVar7 * auVar61._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
        auVar67._0_4_ =
             (uint)(bVar6 & 1) * auVar60._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar45._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * auVar60._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar45._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * auVar60._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar45._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * auVar60._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar45._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * auVar60._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar45._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * auVar60._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar45._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * auVar60._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar45._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * auVar60._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar45._28_4_;
        if (bVar39 == 0xff) {
          auVar61 = vunpcklps_avx512vl(auVar65,auVar66);
          auVar60 = vunpcklps_avx(auVar67,auVar62);
          auVar44 = vunpcklpd_avx(auVar61,auVar60);
          auVar60 = vunpckhpd_avx(auVar61,auVar60);
          auVar45 = vunpckhps_avx512vl(auVar65,auVar66);
          auVar61 = vunpckhps_avx(auVar67,auVar62);
          auVar62 = vunpcklpd_avx(auVar45,auVar61);
          auVar61 = vunpckhpd_avx(auVar45,auVar61);
          auVar72._16_16_ = auVar60._0_16_;
          auVar72._0_16_ = auVar44._0_16_;
          *pauVar36 = auVar72;
          auVar73._16_16_ = auVar61._0_16_;
          auVar73._0_16_ = auVar62._0_16_;
          pauVar36[1] = auVar73;
          auVar60 = vperm2f128_avx(auVar44,auVar60,0x31);
          pauVar36[2] = auVar60;
          auVar60 = vperm2f128_avx(auVar62,auVar61,0x31);
          pauVar36[3] = auVar60;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar65);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar67);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar62);
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithRadiusMap_avx512skx @ 14031a230

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithRadiusMap_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               float param_6,float param_7,int param_8,uint param_9)

{
  float *pfVar1;
  undefined1 (*pauVar2) [32];
  undefined4 *puVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  uint uVar33;
  int iVar34;
  ulonglong uVar35;
  longlong unaff_RBX;
  undefined1 (*pauVar36) [32];
  longlong lVar37;
  uint uVar38;
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar43 [16];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [64];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 in_ZMM16 [64];
  undefined1 auVar75 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar76 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM22 [64];
  undefined1 auVar77 [16];
  undefined1 in_ZMM24 [64];
  int local_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  
  auVar62 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar61 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar60 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar77 = in_ZMM24._0_16_;
  auVar76 = in_ZMM18._0_16_;
  auVar75 = in_ZMM17._0_16_;
  auVar43 = in_ZMM16._0_16_;
  uVar33 = param_9 + 7;
  if (-1 < (int)param_9) {
    uVar33 = param_9;
  }
  if ((int)(uVar33 & 0xfffffff8) < 1) {
    uVar35 = 0;
  }
  else {
    auVar63._4_4_ = param_7;
    auVar63._0_4_ = param_7;
    auVar63._8_4_ = param_7;
    auVar63._12_4_ = param_7;
    auVar63._16_4_ = param_7;
    auVar63._20_4_ = param_7;
    auVar63._24_4_ = param_7;
    auVar63._28_4_ = param_7;
    auVar65._4_4_ = param_5;
    auVar65._0_4_ = param_5;
    auVar65._8_4_ = param_5;
    auVar65._12_4_ = param_5;
    auVar65._16_4_ = param_5;
    auVar65._20_4_ = param_5;
    auVar65._24_4_ = param_5;
    auVar65._28_4_ = param_5;
    unaff_RBX = (longlong)param_8 * 3 + 0x10;
    pauVar36 = (undefined1 (*) [32])((longlong)param_8 * 0x10 + param_1);
    uVar38 = 0;
    auVar43 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar75 = __ymm_0000000600000003000000000000000d00000005000000020000000f0000000c._0_16_;
    auVar76 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar44 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    auVar42 = vxorps_avx512vl(in_ZMM22._0_16_,in_ZMM22._0_16_);
    auVar77 = __ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c._0_16_;
    uVar35 = 0;
    do {
      auVar45 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar46 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar47 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar48 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar49 = vunpckhps_avx512vl(auVar45,auVar46);
      auVar50 = vunpckhps_avx512vl(auVar47,auVar48);
      auVar51 = vunpckhpd_avx512vl(auVar49,auVar50);
      uVar29 = vcmpps_avx512vl(auVar51,ZEXT1632(auVar42),4);
      if ((char)uVar29 != '\0') {
        auVar49 = vunpcklpd_avx512vl(auVar49,auVar50);
        auVar45 = vunpcklps_avx512vl(auVar45,auVar46);
        auVar46 = vunpcklps_avx512vl(auVar47,auVar48);
        auVar50 = vunpckhpd_avx512vl(auVar45,auVar46);
        auVar52 = vunpcklpd_avx512vl(auVar45,auVar46);
        auVar45 = *(undefined1 (*) [32])(param_2 + -0x40 + unaff_RBX * 4);
        auVar46 = *(undefined1 (*) [32])(param_2 + -0x20 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_2 + unaff_RBX * 4);
        auVar48 = vblendps_avx(auVar46,auVar45,0x24);
        auVar45 = vpermt2ps_avx512vl(auVar45,auVar60,auVar46);
        auVar53 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar46 = vpermt2ps_avx512vl(auVar47,auVar61,auVar46);
        auVar54 = vinsertf32x4_avx512vl(auVar45,auVar46._0_16_,1);
        auVar55 = vshuff64x2_avx512vl(auVar45,auVar46,3);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x40 + unaff_RBX * 4);
        auVar46 = *(undefined1 (*) [32])(param_3 + -0x20 + unaff_RBX * 4);
        auVar47 = *(undefined1 (*) [32])(param_3 + unaff_RBX * 4);
        auVar48 = vblendps_avx(auVar46,auVar45,0x24);
        auVar45 = vpermt2ps_avx512vl(auVar45,auVar60,auVar46);
        auVar48 = vpermt2ps_avx512vl(auVar48,auVar62,auVar47);
        auVar46 = vpermt2ps_avx512vl(auVar47,auVar61,auVar46);
        auVar47 = vinsertf32x4_avx512vl(auVar45,auVar46._0_16_,1);
        auVar46 = vshuff64x2_avx512vl(auVar45,auVar46,3);
        pfVar1 = (float *)(param_4 + (ulonglong)uVar38);
        auVar74._0_4_ = param_7 * *pfVar1 + param_6;
        auVar74._4_4_ = param_7 * pfVar1[1] + param_6;
        auVar74._8_4_ = param_7 * pfVar1[2] + param_6;
        auVar74._12_4_ = param_7 * pfVar1[3] + param_6;
        auVar74._16_4_ = param_7 * pfVar1[4] + param_6;
        auVar74._20_4_ = param_7 * pfVar1[5] + param_6;
        auVar74._24_4_ = param_7 * pfVar1[6] + param_6;
        auVar74._28_4_ = param_7 * pfVar1[7] + param_6;
        auVar45 = vaddps_avx512vl(auVar65,auVar74);
        auVar56 = vfnmadd213ps_avx512vl(auVar45,auVar47,auVar54);
        auVar57 = vfnmadd213ps_avx512vl(auVar45,auVar46,auVar55);
        auVar58 = vfnmadd213ps_avx512vl(auVar45,auVar48,auVar53);
        auVar52 = vsubps_avx512vl(auVar52,auVar56);
        auVar50 = vsubps_avx512vl(auVar50,auVar57);
        auVar49 = vsubps_avx512vl(auVar49,auVar58);
        auVar45 = vmulps_avx512vl(auVar50,auVar50);
        auVar59._0_4_ = auVar52._0_4_ * auVar52._0_4_ + auVar45._0_4_;
        auVar59._4_4_ = auVar52._4_4_ * auVar52._4_4_ + auVar45._4_4_;
        auVar59._8_4_ = auVar52._8_4_ * auVar52._8_4_ + auVar45._8_4_;
        auVar59._12_4_ = auVar52._12_4_ * auVar52._12_4_ + auVar45._12_4_;
        auVar59._16_4_ = auVar52._16_4_ * auVar52._16_4_ + auVar45._16_4_;
        auVar59._20_4_ = auVar52._20_4_ * auVar52._20_4_ + auVar45._20_4_;
        auVar59._24_4_ = auVar52._24_4_ * auVar52._24_4_ + auVar45._24_4_;
        auVar59._28_4_ = auVar52._28_4_ * auVar52._28_4_ + auVar45._28_4_;
        auVar59 = vfmadd231ps_avx512vl(auVar59,auVar49,auVar49);
        auVar45 = vsqrtps_avx(auVar59);
        auVar45 = vdivps_avx(auVar74,auVar45);
        auVar73._0_4_ = auVar74._0_4_ * auVar74._0_4_;
        auVar73._4_4_ = auVar74._4_4_ * auVar74._4_4_;
        auVar73._8_4_ = auVar74._8_4_ * auVar74._8_4_;
        auVar73._12_4_ = auVar74._12_4_ * auVar74._12_4_;
        auVar73._16_4_ = auVar74._16_4_ * auVar74._16_4_;
        auVar73._20_4_ = auVar74._20_4_ * auVar74._20_4_;
        auVar73._24_4_ = auVar74._24_4_ * auVar74._24_4_;
        auVar73._28_4_ = auVar74._28_4_ * auVar74._28_4_;
        uVar30 = vcmpps_avx512vl(auVar59,auVar73,1);
        auVar52 = vfmadd231ps_avx512vl(auVar56,auVar45,auVar52);
        bVar39 = (byte)uVar30;
        uVar41 = vcmpps_avx512vl(auVar59,auVar44,1);
        bVar5 = (byte)uVar41;
        auVar56._0_4_ =
             (uint)(bVar5 & 1) * (int)(-(param_5 * auVar47._0_4_) + auVar54._0_4_) |
             (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar52._0_4_;
        bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
        auVar56._4_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._4_4_) + auVar54._4_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar52._4_4_;
        bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
        auVar56._8_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._8_4_) + auVar54._8_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar52._8_4_;
        bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
        auVar56._12_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._12_4_) + auVar54._12_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar52._12_4_;
        bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
        auVar56._16_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._16_4_) + auVar54._16_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar52._16_4_;
        bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
        auVar56._20_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._20_4_) + auVar54._20_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar52._20_4_;
        bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
        auVar56._24_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._24_4_) + auVar54._24_4_) |
             (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar52._24_4_;
        bVar7 = SUB81(uVar41 >> 7,0);
        auVar56._28_4_ =
             (uint)bVar7 * (int)(-(param_5 * auVar47._28_4_) + auVar54._28_4_) |
             (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar52._28_4_;
        uVar40 = vcmpps_avx512vl(auVar56,ZEXT1632(auVar42),4);
        uVar31 = vcmpps_avx512vl(auVar51,ZEXT1632(auVar42),4);
        uVar40 = uVar40 & uVar31;
        if ((char)uVar40 != '\0') {
          auVar46 = vfnmadd213ps_avx512vl(auVar46,auVar65,auVar55);
          auVar52._0_4_ = -(param_5 * auVar48._0_4_) + auVar53._0_4_;
          auVar52._4_4_ = -(param_5 * auVar48._4_4_) + auVar53._4_4_;
          auVar52._8_4_ = -(param_5 * auVar48._8_4_) + auVar53._8_4_;
          auVar52._12_4_ = -(param_5 * auVar48._12_4_) + auVar53._12_4_;
          auVar52._16_4_ = -(param_5 * auVar48._16_4_) + auVar53._16_4_;
          auVar52._20_4_ = -(param_5 * auVar48._20_4_) + auVar53._20_4_;
          auVar52._24_4_ = -(param_5 * auVar48._24_4_) + auVar53._24_4_;
          auVar52._28_4_ = -(param_5 * auVar48._28_4_) + auVar53._28_4_;
          auVar47 = vfmadd213ps_avx512vl(auVar50,auVar45,auVar57);
          auVar45 = vfmadd213ps_avx512vl(auVar49,auVar45,auVar58);
          auVar48._0_4_ =
               (uint)(bVar5 & 1) * auVar46._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar47._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar48._4_4_ =
               (uint)bVar7 * auVar46._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar47._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar48._8_4_ =
               (uint)bVar7 * auVar46._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar47._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar48._12_4_ =
               (uint)bVar7 * auVar46._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar47._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar48._16_4_ =
               (uint)bVar7 * auVar46._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar47._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar48._20_4_ =
               (uint)bVar7 * auVar46._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar47._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar48._24_4_ =
               (uint)bVar7 * auVar46._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar47._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar48._28_4_ =
               (uint)bVar7 * auVar46._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar47._28_4_;
          auVar46._0_4_ =
               (uint)(bVar5 & 1) * (int)auVar52._0_4_ |
               (uint)!(bool)(bVar5 & 1) * (uint)(bVar39 & 1) * auVar45._0_4_;
          bVar7 = (bool)((byte)(uVar41 >> 1) & 1);
          auVar46._4_4_ =
               (uint)bVar7 * (int)auVar52._4_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 1) & 1) * auVar45._4_4_;
          bVar7 = (bool)((byte)(uVar41 >> 2) & 1);
          auVar46._8_4_ =
               (uint)bVar7 * (int)auVar52._8_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 2) & 1) * auVar45._8_4_;
          bVar7 = (bool)((byte)(uVar41 >> 3) & 1);
          auVar46._12_4_ =
               (uint)bVar7 * (int)auVar52._12_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 3) & 1) * auVar45._12_4_;
          bVar7 = (bool)((byte)(uVar41 >> 4) & 1);
          auVar46._16_4_ =
               (uint)bVar7 * (int)auVar52._16_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 4) & 1) * auVar45._16_4_;
          bVar7 = (bool)((byte)(uVar41 >> 5) & 1);
          auVar46._20_4_ =
               (uint)bVar7 * (int)auVar52._20_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 5) & 1) * auVar45._20_4_;
          bVar7 = (bool)((byte)(uVar41 >> 6) & 1);
          auVar46._24_4_ =
               (uint)bVar7 * (int)auVar52._24_4_ |
               (uint)!bVar7 * (uint)((byte)(uVar30 >> 6) & 1) * auVar45._24_4_;
          bVar7 = SUB81(uVar41 >> 7,0);
          auVar46._28_4_ =
               (uint)bVar7 * (int)auVar52._28_4_ |
               (uint)!bVar7 * (uint)(byte)(uVar30 >> 7) * auVar45._28_4_;
          if ((char)uVar40 == -1) {
            auVar45 = vunpcklps_avx512vl(auVar56,auVar48);
            auVar47 = vunpcklps_avx512vl(auVar46,auVar51);
            auVar49 = vunpcklpd_avx512vl(auVar45,auVar47);
            auVar45 = vunpckhpd_avx512vl(auVar45,auVar47);
            auVar47 = vunpckhps_avx512vl(auVar56,auVar48);
            auVar46 = vunpckhps_avx512vl(auVar46,auVar51);
            auVar48 = vunpcklpd_avx512vl(auVar47,auVar46);
            auVar46 = vunpckhpd_avx512vl(auVar47,auVar46);
            auVar47 = vinsertf32x4_avx512vl(auVar49,auVar45._0_16_,1);
            *pauVar36 = auVar47;
            auVar47 = vinsertf32x4_avx512vl(auVar48,auVar46._0_16_,1);
            pauVar36[1] = auVar47;
            auVar45 = vshuff64x2_avx512vl(auVar49,auVar45,3);
            pauVar36[2] = auVar45;
            auVar45 = vshuff64x2_avx512vl(auVar48,auVar46,3);
            pauVar36[3] = auVar45;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar63,uVar40,auVar56);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar65,uVar40,auVar48);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar52,uVar40,auVar46);
            vscatterdps_avx512vl(ZEXT832(pauVar36) + auVar57,uVar40,auVar51);
          }
        }
      }
      uVar35 = uVar35 + 8;
      uVar38 = uVar38 + 0x20;
      pauVar36 = pauVar36 + 4;
      unaff_RBX = unaff_RBX + 0x18;
    } while (uVar35 < (uVar33 & 0xfffffff8));
  }
  iVar34 = (int)uVar35;
  if (iVar34 < (int)param_9) {
    auVar60 = vpbroadcastd_avx512vl();
    auVar60 = vpor_avx2(auVar60,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar61 = vpbroadcastd_avx512vl();
    uVar35 = vpcmpgtd_avx512vl(auVar61,auVar60);
    lVar37 = (longlong)(param_8 + iVar34);
    pauVar36 = (undefined1 (*) [32])(param_1 + lVar37 * 0x10);
    bVar39 = (byte)uVar35;
    if (bVar39 == 0xff) {
      auVar62 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],0);
      auVar44 = vshuff64x2_avx512vl(*pauVar36,pauVar36[2],3);
      auVar63 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],0);
      auVar65 = vshuff64x2_avx512vl(pauVar36[1],pauVar36[3],3);
      auVar45 = vunpcklps_avx512vl(auVar62,auVar44);
      auVar62 = vunpckhps_avx512vl(auVar62,auVar44);
      auVar44 = vunpcklps_avx512vl(auVar63,auVar65);
      auVar63 = vunpckhps_avx512vl(auVar63,auVar65);
      auVar47 = vunpcklpd_avx512vl(auVar45,auVar44);
      auVar45 = vunpckhpd_avx512vl(auVar45,auVar44);
      auVar44 = vunpcklpd_avx512vl(auVar62,auVar63);
      auVar62 = vunpckhpd_avx512vl(auVar62,auVar63);
    }
    else {
      auVar43 = vxorps_avx512vl(auVar43,auVar43);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar47._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar47._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar47._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar47._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar47._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar47._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar47._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar47._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar43 = vxorps_avx512vl(auVar75,auVar75);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar45._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar45._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar45._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar45._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar45._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar45._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar45._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar45._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar43 = vxorps_avx512vl(auVar76,auVar76);
      auVar62 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar62._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_
      ;
      bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
      auVar44._4_4_ = (uint)bVar7 * auVar62._4_4_ | (uint)!bVar7 * auVar43._4_4_;
      bVar7 = (bool)((byte)(uVar35 >> 2) & 1);
      auVar44._8_4_ = (uint)bVar7 * auVar62._8_4_ | (uint)!bVar7 * auVar43._8_4_;
      bVar7 = (bool)((byte)(uVar35 >> 3) & 1);
      auVar44._12_4_ = (uint)bVar7 * auVar62._12_4_ | (uint)!bVar7 * auVar43._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar62._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar62._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar62._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar62._28_4_;
      auVar63 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + unaff_RBX));
      auVar62._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
      auVar62._0_4_ = (uint)(bVar39 & 1) * auVar63._0_4_;
      auVar62._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
      auVar62._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
      auVar62._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
      auVar62._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
      auVar62._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
      auVar62._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
    }
    uVar32 = vpcmpd_avx512vl(auVar60,auVar61,5);
    bVar7 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar20 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar23 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar26 = SUB81(uVar35 >> 7,0);
    bVar8 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar21 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar27 = SUB81(uVar35 >> 7,0);
    bVar9 = (bool)((byte)(uVar35 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar35 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar35 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar35 >> 4) & 1);
    bVar22 = (bool)((byte)(uVar35 >> 5) & 1);
    bVar25 = (bool)((byte)(uVar35 >> 6) & 1);
    bVar28 = SUB81(uVar35 >> 7,0);
    auVar72 = ZEXT1664((undefined1  [16])0x0);
    uVar29 = vcmpps_avx512vl(auVar62,auVar72._0_32_,0);
    if ((byte)((byte)uVar29 | (byte)uVar32) != 0xff) {
      pauVar2 = (undefined1 (*) [32])(param_2 + lVar37 * 0xc);
      if (bVar39 == 0xff) {
        auVar60 = pauVar2[1];
        auVar61 = vblendps_avx(auVar60,*pauVar2,0x24);
        auVar63 = vpermt2ps_avx512vl(*pauVar2,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60);
        auVar51 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar2[2]);
        auVar60 = vpermt2ps_avx512vl(pauVar2[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar60);
        auVar49 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
        auVar50 = vshuff64x2_avx512vl(auVar63,auVar60,3);
        auVar60 = *(undefined1 (*) [32])(param_3 + lVar37 * 0xc);
        auVar61 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar37 * 0xc);
        auVar63 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar37 * 0xc);
        auVar65 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar60,auVar61);
        auVar46 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar63,auVar61);
        auVar53 = vinsertf32x4_avx512vl(auVar65,auVar46._0_16_,1);
        auVar54 = vshuff64x2_avx512vl(auVar65,auVar46,3);
        auVar60 = vblendps_avx(auVar61,auVar60,0x24);
        auVar60 = vpermt2ps_avx512vl(auVar60,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar63);
      }
      else {
        auVar43 = vxorps_avx512vl(auVar47._0_16_,auVar47._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar36 + (longlong)*pauVar2));
        auVar49._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar49._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar49._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar49._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar49._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar49._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar49._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar49._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar2 + unaff_RBX));
        auVar50._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar50._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        auVar50._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar60._8_4_;
        auVar50._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar60._12_4_;
        auVar50._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar50._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar50._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar50._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar2);
        auVar51._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar60._4_4_;
        auVar51._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar72._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar72._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        puVar3 = (undefined4 *)(param_3 + lVar37 * 0xc);
        auVar43 = vxorps_avx512vl(auVar44._0_16_,auVar44._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + (longlong)pauVar36));
        auVar53._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar53._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar53._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar53._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar43 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar60 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar3 + unaff_RBX));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar43._0_4_;
        bVar10 = (bool)((byte)(uVar35 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar10 * auVar60._4_4_ | (uint)!bVar10 * auVar43._4_4_;
        bVar10 = (bool)((byte)(uVar35 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar10 * auVar60._8_4_ | (uint)!bVar10 * auVar43._8_4_;
        bVar10 = (bool)((byte)(uVar35 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar10 * auVar60._12_4_ | (uint)!bVar10 * auVar43._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar60._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar60._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar60._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar60._28_4_;
        auVar61 = vgatherdps_avx512vl(*puVar3);
        auVar60._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
        auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar60._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
        auVar60._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
        auVar60._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
        auVar60._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
        auVar60._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
        auVar60._28_4_ = (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      }
      auVar71._4_4_ = param_6;
      auVar71._0_4_ = param_6;
      auVar71._8_4_ = param_6;
      auVar71._12_4_ = param_6;
      auVar71._16_4_ = param_6;
      auVar71._20_4_ = param_6;
      auVar71._24_4_ = param_6;
      auVar71._28_4_ = param_6;
      auVar69._4_4_ = param_7;
      auVar69._0_4_ = param_7;
      auVar69._8_4_ = param_7;
      auVar69._12_4_ = param_7;
      auVar69._16_4_ = param_7;
      auVar69._20_4_ = param_7;
      auVar69._24_4_ = param_7;
      auVar69._28_4_ = param_7;
      piVar4 = (int *)(param_4 + (iVar34 << 2));
      auVar64._4_4_ = (uint)((byte)(uVar35 >> 1) & 1) * piVar4[1];
      auVar64._0_4_ = (uint)(bVar39 & 1) * *piVar4;
      auVar64._8_4_ = (uint)((byte)(uVar35 >> 2) & 1) * piVar4[2];
      auVar64._12_4_ = (uint)((byte)(uVar35 >> 3) & 1) * piVar4[3];
      auVar64._16_4_ = (uint)((byte)(uVar35 >> 4) & 1) * piVar4[4];
      auVar64._20_4_ = (uint)((byte)(uVar35 >> 5) & 1) * piVar4[5];
      auVar64._24_4_ = (uint)((byte)(uVar35 >> 6) & 1) * piVar4[6];
      auVar64._28_4_ = (uint)(byte)(uVar35 >> 7) * piVar4[7];
      auVar61 = vfmadd213ps_avx512vl(auVar64,auVar69,auVar71);
      auVar43 = vxorps_avx512vl(auVar77,auVar77);
      auVar63 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
      auVar65 = vaddps_avx512vl(auVar63,auVar61);
      auVar46 = vfnmadd213ps_avx512vl(auVar65,auVar53,auVar49);
      auVar48 = vfnmadd213ps_avx512vl(auVar65,auVar54,auVar50);
      auVar55._4_4_ = (uint)bVar7 * auVar47._4_4_ | (uint)!bVar7 * iStack_13c;
      auVar55._0_4_ = (uint)(bVar39 & 1) * auVar47._0_4_ | (uint)!(bool)(bVar39 & 1) * local_140;
      auVar55._8_4_ = (uint)bVar11 * auVar47._8_4_ | (uint)!bVar11 * iStack_138;
      auVar55._12_4_ = (uint)bVar14 * auVar47._12_4_ | (uint)!bVar14 * iStack_134;
      auVar55._16_4_ = (uint)bVar17 * auVar47._16_4_ | (uint)!bVar17 * iStack_130;
      auVar55._20_4_ = (uint)bVar20 * auVar47._20_4_ | (uint)!bVar20 * iStack_12c;
      auVar55._24_4_ = (uint)bVar23 * auVar47._24_4_ | (uint)!bVar23 * iStack_128;
      auVar55._28_4_ = (uint)bVar26 * auVar47._28_4_ | (uint)!bVar26 * iStack_124;
      auVar65 = vfnmadd213ps_avx512vl(auVar65,auVar60,auVar51);
      auVar57._4_4_ = (uint)bVar8 * auVar45._4_4_ | (uint)!bVar8 * iStack_11c;
      auVar57._0_4_ = (uint)(bVar39 & 1) * auVar45._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar57._8_4_ = (uint)bVar12 * auVar45._8_4_ | (uint)!bVar12 * iStack_118;
      auVar57._12_4_ = (uint)bVar15 * auVar45._12_4_ | (uint)!bVar15 * iStack_114;
      auVar57._16_4_ = (uint)bVar18 * auVar45._16_4_ | (uint)!bVar18 * iStack_110;
      auVar57._20_4_ = (uint)bVar21 * auVar45._20_4_ | (uint)!bVar21 * iStack_10c;
      auVar57._24_4_ = (uint)bVar24 * auVar45._24_4_ | (uint)!bVar24 * iStack_108;
      auVar57._28_4_ = (uint)bVar27 * auVar45._28_4_ | (uint)!bVar27 * iStack_104;
      auVar58._4_4_ = (uint)bVar9 * auVar44._4_4_ | (uint)!bVar9 * iStack_fc;
      auVar58._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar58._8_4_ = (uint)bVar13 * auVar44._8_4_ | (uint)!bVar13 * iStack_f8;
      auVar58._12_4_ = (uint)bVar16 * auVar44._12_4_ | (uint)!bVar16 * iStack_f4;
      auVar58._16_4_ = (uint)bVar19 * auVar44._16_4_ | (uint)!bVar19 * iStack_f0;
      auVar58._20_4_ = (uint)bVar22 * auVar44._20_4_ | (uint)!bVar22 * iStack_ec;
      auVar58._24_4_ = (uint)bVar25 * auVar44._24_4_ | (uint)!bVar25 * iStack_e8;
      auVar58._28_4_ = (uint)bVar28 * auVar44._28_4_ | (uint)!bVar28 * iStack_e4;
      auVar44 = vsubps_avx512vl(auVar55,auVar46);
      auVar45 = vsubps_avx512vl(auVar57,auVar48);
      auVar47 = vsubps_avx512vl(auVar58,auVar65);
      auVar52 = vmulps_avx512vl(auVar45,auVar45);
      auVar52 = vfmadd231ps_avx512vl(auVar52,auVar44,auVar44);
      auVar52 = vfmadd231ps_avx512vl(auVar52,auVar47,auVar47);
      auVar55 = vsqrtps_avx512vl(auVar52);
      auVar55 = vdivps_avx512vl(auVar61,auVar55);
      auVar49 = vfnmadd213ps_avx512vl(auVar53,auVar63,auVar49);
      auVar61 = vmulps_avx512vl(auVar61,auVar61);
      uVar35 = vcmpps_avx512vl(auVar52,auVar61,1);
      auVar61._4_4_ = __real_322bcc77;
      auVar61._0_4_ = __real_322bcc77;
      auVar61._8_4_ = __real_322bcc77;
      auVar61._12_4_ = __real_322bcc77;
      auVar61._16_4_ = __real_322bcc77;
      auVar61._20_4_ = __real_322bcc77;
      auVar61._24_4_ = __real_322bcc77;
      auVar61._28_4_ = __real_322bcc77;
      uVar30 = vcmpps_avx512vl(auVar52,auVar61,1);
      auVar61 = vfmadd231ps_avx512vl(auVar46,auVar55,auVar44);
      bVar5 = (byte)uVar35;
      bVar6 = (byte)uVar30;
      auVar66._0_4_ =
           (uint)(bVar6 & 1) * auVar49._0_4_ |
           (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar61._0_4_;
      bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
      auVar66._4_4_ =
           (uint)bVar7 * auVar49._4_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar61._4_4_;
      bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
      auVar66._8_4_ =
           (uint)bVar7 * auVar49._8_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar61._8_4_;
      bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
      auVar66._12_4_ =
           (uint)bVar7 * auVar49._12_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar61._12_4_;
      bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
      auVar66._16_4_ =
           (uint)bVar7 * auVar49._16_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar61._16_4_;
      bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
      auVar66._20_4_ =
           (uint)bVar7 * auVar49._20_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar61._20_4_;
      bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
      auVar66._24_4_ =
           (uint)bVar7 * auVar49._24_4_ |
           (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar61._24_4_;
      bVar7 = SUB81(uVar30 >> 7,0);
      auVar66._28_4_ =
           (uint)bVar7 * auVar49._28_4_ | (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar61._28_4_;
      uVar29 = vcmpps_avx512vl(auVar62,ZEXT1632(auVar43),4);
      uVar32 = vcmpps_avx512vl(auVar66,ZEXT1632(auVar43),4);
      bVar39 = (byte)uVar29 & (byte)uVar32 & bVar39;
      uVar41 = (ulonglong)bVar39;
      if (bVar39 != 0) {
        auVar61 = vfnmadd213ps_avx512vl(auVar54,auVar63,auVar50);
        auVar60 = vfnmadd213ps_avx512vl(auVar60,auVar63,auVar51);
        auVar44 = vfmadd213ps_avx512vl(auVar45,auVar55,auVar48);
        auVar63 = vfmadd213ps_avx512vl(auVar47,auVar55,auVar65);
        auVar67._0_4_ =
             (uint)(bVar6 & 1) * auVar61._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar44._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar67._4_4_ =
             (uint)bVar7 * auVar61._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar44._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar67._8_4_ =
             (uint)bVar7 * auVar61._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar44._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar67._12_4_ =
             (uint)bVar7 * auVar61._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar44._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar67._16_4_ =
             (uint)bVar7 * auVar61._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar44._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar67._20_4_ =
             (uint)bVar7 * auVar61._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar44._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar67._24_4_ =
             (uint)bVar7 * auVar61._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar44._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar67._28_4_ =
             (uint)bVar7 * auVar61._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar44._28_4_;
        auVar68._0_4_ =
             (uint)(bVar6 & 1) * auVar60._0_4_ |
             (uint)!(bool)(bVar6 & 1) * (uint)(bVar5 & 1) * auVar63._0_4_;
        bVar7 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar68._4_4_ =
             (uint)bVar7 * auVar60._4_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 1) & 1) * auVar63._4_4_;
        bVar7 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar68._8_4_ =
             (uint)bVar7 * auVar60._8_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 2) & 1) * auVar63._8_4_;
        bVar7 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar68._12_4_ =
             (uint)bVar7 * auVar60._12_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 3) & 1) * auVar63._12_4_;
        bVar7 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar68._16_4_ =
             (uint)bVar7 * auVar60._16_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 4) & 1) * auVar63._16_4_;
        bVar7 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar68._20_4_ =
             (uint)bVar7 * auVar60._20_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 5) & 1) * auVar63._20_4_;
        bVar7 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar68._24_4_ =
             (uint)bVar7 * auVar60._24_4_ |
             (uint)!bVar7 * (uint)((byte)(uVar35 >> 6) & 1) * auVar63._24_4_;
        bVar7 = SUB81(uVar30 >> 7,0);
        auVar68._28_4_ =
             (uint)bVar7 * auVar60._28_4_ |
             (uint)!bVar7 * (uint)(byte)(uVar35 >> 7) * auVar63._28_4_;
        if (bVar39 == 0xff) {
          auVar60 = vunpcklps_avx(auVar66,auVar67);
          auVar61 = vunpcklps_avx(auVar68,auVar62);
          auVar63 = vunpcklpd_avx512vl(auVar60,auVar61);
          auVar60 = vunpckhpd_avx(auVar60,auVar61);
          auVar61 = vunpckhps_avx(auVar66,auVar67);
          auVar62 = vunpckhps_avx(auVar68,auVar62);
          auVar44 = vunpcklpd_avx(auVar61,auVar62);
          auVar61 = vunpckhpd_avx(auVar61,auVar62);
          auVar62 = vinsertf32x4_avx512vl(auVar63,auVar60._0_16_,1);
          *pauVar36 = auVar62;
          auVar70._16_16_ = auVar61._0_16_;
          auVar70._0_16_ = auVar44._0_16_;
          pauVar36[1] = auVar70;
          auVar60 = vshuff64x2_avx512vl(auVar63,auVar60,3);
          pauVar36[2] = auVar60;
          auVar60 = vperm2f128_avx(auVar44,auVar61,0x31);
          pauVar36[3] = auVar60;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar67);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar68);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar36) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar62);
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraintsWithoutMaps_avx512skx @ 14031aa00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplySphericalBackstopConstraintsWithoutMaps_avx512skx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,float param_5,
               int param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  undefined4 *puVar2;
  byte bVar3;
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
  bool bVar23;
  bool bVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  longlong lVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined1 (*pauVar38) [32];
  byte bVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
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
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 in_ZMM3 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar71 [32];
  undefined1 in_ZMM8 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar72 [16];
  undefined1 in_ZMM17 [64];
  undefined1 auVar73 [16];
  undefined1 in_ZMM19 [64];
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_58 [16];
  
  auVar60 = ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002;
  auVar59 = ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c;
  auVar58 = ___ymm_0000000a00000007000000040000000100000009000000060000000300000000;
  auVar73 = in_ZMM19._0_16_;
  auVar72 = in_ZMM17._0_16_;
  auVar42 = in_ZMM16._0_16_;
  local_58 = in_ZMM11._0_16_;
  local_88 = in_ZMM8._0_16_;
  local_98 = in_ZMM7._0_16_;
  uVar36 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar36 = param_7;
  }
  auVar68._0_4_ = in_ZMM3._0_4_;
  if ((int)(uVar36 & 0xfffffff8) < 1) {
    uVar37 = 0;
  }
  else {
    fVar26 = auVar68._0_4_ + param_5;
    auVar61._4_4_ = fVar26;
    auVar61._0_4_ = fVar26;
    auVar61._8_4_ = fVar26;
    auVar61._12_4_ = fVar26;
    auVar61._16_4_ = fVar26;
    auVar61._20_4_ = fVar26;
    auVar61._24_4_ = fVar26;
    auVar61._28_4_ = fVar26;
    auVar62._4_4_ = param_5;
    auVar62._0_4_ = param_5;
    auVar62._8_4_ = param_5;
    auVar62._12_4_ = param_5;
    auVar62._16_4_ = param_5;
    auVar62._20_4_ = param_5;
    auVar62._24_4_ = param_5;
    auVar62._28_4_ = param_5;
    auVar63._4_4_ = auVar68._0_4_;
    auVar63._0_4_ = auVar68._0_4_;
    auVar63._8_4_ = auVar68._0_4_;
    auVar63._12_4_ = auVar68._0_4_;
    auVar63._16_4_ = auVar68._0_4_;
    auVar63._20_4_ = auVar68._0_4_;
    auVar63._24_4_ = auVar68._0_4_;
    auVar63._28_4_ = auVar68._0_4_;
    fVar27 = param_5 * param_5;
    auVar64._4_4_ = fVar27;
    auVar64._0_4_ = fVar27;
    auVar64._8_4_ = fVar27;
    auVar64._12_4_ = fVar27;
    auVar64._16_4_ = fVar27;
    auVar64._20_4_ = fVar27;
    auVar64._24_4_ = fVar27;
    auVar64._28_4_ = fVar27;
    pauVar38 = (undefined1 (*) [32])((longlong)param_6 * 0x10 + param_1);
    lVar35 = (longlong)param_6 * 0xc + 0x40;
    uVar37 = 0;
    auVar42 = vxorps_avx512vl(auVar42,auVar42);
    auVar72 = __ymm_0000000a00000007000000040000000100000009000000060000000300000000._0_16_;
    auVar73 = __ymm_0000000f0000000c000000090000000600000003000000000000000500000002._0_16_;
    auVar43 = vbroadcastss_avx512vl(ZEXT416(__real_322bcc77));
    do {
      auVar44 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],0);
      auVar45 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],3);
      auVar46 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],0);
      auVar47 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],3);
      auVar48 = vunpckhps_avx512vl(auVar44,auVar45);
      auVar49 = vunpckhps_avx512vl(auVar46,auVar47);
      auVar50 = vunpckhpd_avx512vl(auVar48,auVar49);
      uVar28 = vcmpps_avx512vl(auVar50,ZEXT1632(auVar42),4);
      if ((char)uVar28 != '\0') {
        auVar48 = vunpcklpd_avx512vl(auVar48,auVar49);
        auVar44 = vunpcklps_avx512vl(auVar44,auVar45);
        auVar45 = vunpcklps_avx512vl(auVar46,auVar47);
        auVar47 = vunpckhpd_avx512vl(auVar44,auVar45);
        auVar49 = vunpcklpd_avx512vl(auVar44,auVar45);
        auVar44 = *(undefined1 (*) [32])(param_2 + -0x40 + lVar35);
        auVar45 = *(undefined1 (*) [32])(param_2 + -0x20 + lVar35);
        auVar46 = vblendps_avx(auVar45,auVar44,0x24);
        auVar44 = vpermt2ps_avx512vl(auVar44,auVar58,auVar45);
        auVar51 = vpermt2ps_avx512vl(auVar46,auVar60,*(undefined1 (*) [32])(param_2 + lVar35));
        auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_2 + lVar35),auVar59,auVar45);
        auVar52 = vinsertf32x4_avx512vl(auVar44,auVar45._0_16_,1);
        auVar53 = vshuff64x2_avx512vl(auVar44,auVar45,3);
        auVar44 = *(undefined1 (*) [32])(param_3 + -0x40 + lVar35);
        auVar45 = *(undefined1 (*) [32])(param_3 + -0x20 + lVar35);
        auVar46 = vblendps_avx(auVar45,auVar44,0x24);
        auVar44 = vpermt2ps_avx512vl(auVar44,auVar58,auVar45);
        auVar46 = vpermt2ps_avx512vl(auVar46,auVar60,*(undefined1 (*) [32])(param_3 + lVar35));
        auVar45 = vpermt2ps_avx512vl(*(undefined1 (*) [32])(param_3 + lVar35),auVar59,auVar45);
        auVar54 = vinsertf32x4_avx512vl(auVar44,auVar45._0_16_,1);
        auVar45 = vshuff64x2_avx512vl(auVar44,auVar45,3);
        auVar55 = vfnmadd213ps_avx512vl(auVar54,auVar61,auVar52);
        auVar56 = vfnmadd213ps_avx512vl(auVar45,auVar61,auVar53);
        auVar71._0_4_ = -(fVar26 * auVar46._0_4_) + auVar51._0_4_;
        auVar71._4_4_ = -(fVar26 * auVar46._4_4_) + auVar51._4_4_;
        auVar71._8_4_ = -(fVar26 * auVar46._8_4_) + auVar51._8_4_;
        auVar71._12_4_ = -(fVar26 * auVar46._12_4_) + auVar51._12_4_;
        auVar71._16_4_ = -(fVar26 * auVar46._16_4_) + auVar51._16_4_;
        auVar71._20_4_ = -(fVar26 * auVar46._20_4_) + auVar51._20_4_;
        auVar71._24_4_ = -(fVar26 * auVar46._24_4_) + auVar51._24_4_;
        auVar71._28_4_ = -(fVar26 * auVar46._28_4_) + auVar51._28_4_;
        auVar49 = vsubps_avx512vl(auVar49,auVar55);
        auVar47 = vsubps_avx512vl(auVar47,auVar56);
        auVar48 = vsubps_avx512vl(auVar48,auVar71);
        auVar44 = vmulps_avx512vl(auVar47,auVar47);
        auVar57._0_4_ = auVar49._0_4_ * auVar49._0_4_ + auVar44._0_4_;
        auVar57._4_4_ = auVar49._4_4_ * auVar49._4_4_ + auVar44._4_4_;
        auVar57._8_4_ = auVar49._8_4_ * auVar49._8_4_ + auVar44._8_4_;
        auVar57._12_4_ = auVar49._12_4_ * auVar49._12_4_ + auVar44._12_4_;
        auVar57._16_4_ = auVar49._16_4_ * auVar49._16_4_ + auVar44._16_4_;
        auVar57._20_4_ = auVar49._20_4_ * auVar49._20_4_ + auVar44._20_4_;
        auVar57._24_4_ = auVar49._24_4_ * auVar49._24_4_ + auVar44._24_4_;
        auVar57._28_4_ = auVar49._28_4_ * auVar49._28_4_ + auVar44._28_4_;
        auVar57 = vfmadd231ps_avx512vl(auVar57,auVar48,auVar48);
        auVar44 = vsqrtps_avx(auVar57);
        auVar44 = vdivps_avx(auVar62,auVar44);
        uVar29 = vcmpps_avx512vl(auVar57,auVar64,1);
        auVar49 = vfmadd231ps_avx512vl(auVar55,auVar44,auVar49);
        bVar39 = (byte)uVar29;
        uVar30 = vcmpps_avx512vl(auVar57,auVar43,1);
        bVar3 = (byte)uVar30;
        auVar55._0_4_ =
             (uint)(bVar3 & 1) * (int)(-(auVar68._0_4_ * auVar54._0_4_) + auVar52._0_4_) |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar49._0_4_;
        bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
        auVar55._4_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._4_4_) + auVar52._4_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar49._4_4_;
        bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
        auVar55._8_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._8_4_) + auVar52._8_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar49._8_4_;
        bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
        auVar55._12_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._12_4_) + auVar52._12_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar49._12_4_;
        bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
        auVar55._16_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._16_4_) + auVar52._16_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar49._16_4_;
        bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
        auVar55._20_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._20_4_) + auVar52._20_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar49._20_4_;
        bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
        auVar55._24_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._24_4_) + auVar52._24_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar49._24_4_;
        bVar4 = SUB81(uVar30 >> 7,0);
        auVar55._28_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar54._28_4_) + auVar52._28_4_) |
             (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar49._28_4_;
        uVar40 = vcmpps_avx512vl(auVar55,ZEXT1632(auVar42),4);
        uVar41 = vcmpps_avx512vl(auVar50,ZEXT1632(auVar42),4);
        uVar40 = uVar40 & uVar41;
        if ((char)uVar40 != '\0') {
          auVar45 = vfnmadd213ps_avx512vl(auVar45,auVar63,auVar53);
          auVar49._0_4_ = -(auVar68._0_4_ * auVar46._0_4_) + auVar51._0_4_;
          auVar49._4_4_ = -(auVar68._0_4_ * auVar46._4_4_) + auVar51._4_4_;
          auVar49._8_4_ = -(auVar68._0_4_ * auVar46._8_4_) + auVar51._8_4_;
          auVar49._12_4_ = -(auVar68._0_4_ * auVar46._12_4_) + auVar51._12_4_;
          auVar49._16_4_ = -(auVar68._0_4_ * auVar46._16_4_) + auVar51._16_4_;
          auVar49._20_4_ = -(auVar68._0_4_ * auVar46._20_4_) + auVar51._20_4_;
          auVar49._24_4_ = -(auVar68._0_4_ * auVar46._24_4_) + auVar51._24_4_;
          auVar49._28_4_ = -(auVar68._0_4_ * auVar46._28_4_) + auVar51._28_4_;
          auVar46 = vfmadd213ps_avx512vl(auVar47,auVar44,auVar56);
          auVar44 = vfmadd213ps_avx512vl(auVar48,auVar44,auVar71);
          auVar47._0_4_ =
               (uint)(bVar3 & 1) * auVar45._0_4_ |
               (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar46._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar47._4_4_ =
               (uint)bVar4 * auVar45._4_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar46._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar47._8_4_ =
               (uint)bVar4 * auVar45._8_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar46._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar47._12_4_ =
               (uint)bVar4 * auVar45._12_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar46._12_4_;
          bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
          auVar47._16_4_ =
               (uint)bVar4 * auVar45._16_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar46._16_4_;
          bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
          auVar47._20_4_ =
               (uint)bVar4 * auVar45._20_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar46._20_4_;
          bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
          auVar47._24_4_ =
               (uint)bVar4 * auVar45._24_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar46._24_4_;
          bVar4 = SUB81(uVar30 >> 7,0);
          auVar47._28_4_ =
               (uint)bVar4 * auVar45._28_4_ |
               (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar46._28_4_;
          auVar45._0_4_ =
               (uint)(bVar3 & 1) * (int)auVar49._0_4_ |
               (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar44._0_4_;
          bVar4 = (bool)((byte)(uVar30 >> 1) & 1);
          auVar45._4_4_ =
               (uint)bVar4 * (int)auVar49._4_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 1) & 1) * auVar44._4_4_;
          bVar4 = (bool)((byte)(uVar30 >> 2) & 1);
          auVar45._8_4_ =
               (uint)bVar4 * (int)auVar49._8_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 2) & 1) * auVar44._8_4_;
          bVar4 = (bool)((byte)(uVar30 >> 3) & 1);
          auVar45._12_4_ =
               (uint)bVar4 * (int)auVar49._12_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 3) & 1) * auVar44._12_4_;
          bVar4 = (bool)((byte)(uVar30 >> 4) & 1);
          auVar45._16_4_ =
               (uint)bVar4 * (int)auVar49._16_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 4) & 1) * auVar44._16_4_;
          bVar4 = (bool)((byte)(uVar30 >> 5) & 1);
          auVar45._20_4_ =
               (uint)bVar4 * (int)auVar49._20_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 5) & 1) * auVar44._20_4_;
          bVar4 = (bool)((byte)(uVar30 >> 6) & 1);
          auVar45._24_4_ =
               (uint)bVar4 * (int)auVar49._24_4_ |
               (uint)!bVar4 * (uint)((byte)(uVar29 >> 6) & 1) * auVar44._24_4_;
          bVar4 = SUB81(uVar30 >> 7,0);
          auVar45._28_4_ =
               (uint)bVar4 * (int)auVar49._28_4_ |
               (uint)!bVar4 * (uint)(byte)(uVar29 >> 7) * auVar44._28_4_;
          if ((char)uVar40 == -1) {
            auVar44 = vunpcklps_avx512vl(auVar55,auVar47);
            auVar46 = vunpcklps_avx512vl(auVar45,auVar50);
            auVar48 = vunpcklpd_avx512vl(auVar44,auVar46);
            auVar44 = vunpckhpd_avx512vl(auVar44,auVar46);
            auVar46 = vunpckhps_avx512vl(auVar55,auVar47);
            auVar45 = vunpckhps_avx512vl(auVar45,auVar50);
            auVar47 = vunpcklpd_avx512vl(auVar46,auVar45);
            auVar45 = vunpckhpd_avx512vl(auVar46,auVar45);
            auVar46 = vinsertf32x4_avx512vl(auVar48,auVar44._0_16_,1);
            *pauVar38 = auVar46;
            auVar46 = vinsertf32x4_avx512vl(auVar47,auVar45._0_16_,1);
            pauVar38[1] = auVar46;
            auVar44 = vshuff64x2_avx512vl(auVar48,auVar44,3);
            pauVar38[2] = auVar44;
            auVar44 = vshuff64x2_avx512vl(auVar47,auVar45,3);
            pauVar38[3] = auVar44;
          }
          else {
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar64,uVar40,auVar55);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar51,uVar40,auVar47);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar49,uVar40,auVar45);
            vscatterdps_avx512vl(ZEXT832(pauVar38) + auVar71,uVar40,auVar50);
          }
        }
      }
      uVar37 = uVar37 + 8;
      pauVar38 = pauVar38 + 4;
      lVar35 = lVar35 + 0x60;
    } while (uVar37 < (uVar36 & 0xfffffff8));
  }
  if ((int)uVar37 < (int)param_7) {
    auVar58 = vpbroadcastd_avx512vl();
    auVar58 = vpor_avx2(auVar58,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar59 = vpbroadcastd_avx512vl();
    uVar29 = vpcmpgtd_avx512vl(auVar59,auVar58);
    lVar35 = (longlong)(param_6 + (int)uVar37);
    pauVar38 = (undefined1 (*) [32])(param_1 + lVar35 * 0x10);
    bVar39 = (byte)uVar29;
    if (bVar39 == 0xff) {
      auVar60 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],0);
      auVar43 = vshuff64x2_avx512vl(*pauVar38,pauVar38[2],3);
      auVar61 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],0);
      auVar62 = vshuff64x2_avx512vl(pauVar38[1],pauVar38[3],3);
      auVar63 = vunpcklps_avx512vl(auVar60,auVar43);
      auVar60 = vunpckhps_avx512vl(auVar60,auVar43);
      auVar43 = vunpcklps_avx512vl(auVar61,auVar62);
      auVar61 = vunpckhps_avx512vl(auVar61,auVar62);
      auVar73 = auVar61._0_16_;
      auVar44 = vunpcklpd_avx512vl(auVar63,auVar43);
      auVar43 = vunpckhpd_avx512vl(auVar63,auVar43);
      auVar46 = vunpcklpd_avx512vl(auVar60,auVar61);
      auVar60 = vunpckhpd_avx512vl(auVar60,auVar61);
    }
    else {
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar44._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar60._4_4_;
      auVar44._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_;
      auVar44._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar60._8_4_;
      auVar44._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar60._12_4_;
      auVar44._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar44._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar44._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar44._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar42 = vxorps_avx512vl(auVar42,auVar42);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar43._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar43._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar43._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar43._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
      auVar43._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar43._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar43._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar43._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar42 = vxorps_avx512vl(auVar72,auVar72);
      auVar60 = vgatherdps_avx512vl(*(undefined4 *)*pauVar38);
      auVar46._0_4_ = (uint)(bVar39 & 1) * auVar60._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_
      ;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar46._4_4_ = (uint)bVar4 * auVar60._4_4_ | (uint)!bVar4 * auVar42._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar46._8_4_ = (uint)bVar4 * auVar60._8_4_ | (uint)!bVar4 * auVar42._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar46._12_4_ = (uint)bVar4 * auVar60._12_4_ | (uint)!bVar4 * auVar42._12_4_;
      auVar46._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar60._16_4_;
      auVar46._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar60._20_4_;
      auVar46._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar60._24_4_;
      auVar46._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar60._28_4_;
      auVar61 = vgatherdps_avx512vl(*(undefined4 *)(*pauVar38 + param_2));
      auVar60._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
      auVar60._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
      auVar60._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
      auVar60._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
      auVar60._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
      auVar60._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
      auVar60._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
      auVar60._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
    }
    uVar31 = vpcmpd_avx512vl(auVar58,auVar59,5);
    bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar11 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar14 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar17 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar20 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar23 = SUB81(uVar29 >> 7,0);
    bVar5 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar12 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar15 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar18 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar21 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar24 = SUB81(uVar29 >> 7,0);
    bVar6 = (bool)((byte)(uVar29 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar29 >> 2) & 1);
    bVar13 = (bool)((byte)(uVar29 >> 3) & 1);
    bVar16 = (bool)((byte)(uVar29 >> 4) & 1);
    bVar19 = (bool)((byte)(uVar29 >> 5) & 1);
    bVar22 = (bool)((byte)(uVar29 >> 6) & 1);
    bVar25 = SUB81(uVar29 >> 7,0);
    uVar28 = vcmpps_avx512vl(auVar60,ZEXT832(0) << 0x20,0);
    if ((byte)((byte)uVar28 | (byte)uVar31) != 0xff) {
      pauVar1 = (undefined1 (*) [32])(param_2 + lVar35 * 0xc);
      if (bVar39 == 0xff) {
        auVar61 = pauVar1[1];
        auVar62 = vblendps_avx(auVar61,*pauVar1,0x24);
        auVar63 = vpermt2ps_avx512vl(*pauVar1,
                                     ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61);
        auVar53 = vpermt2ps_avx512vl(auVar62,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,pauVar1[2]);
        auVar61 = vpermt2ps_avx512vl(pauVar1[2],
                                     ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar61);
        auVar51 = vinsertf32x4_avx512vl(auVar63,auVar61._0_16_,1);
        auVar52 = vshuff64x2_avx512vl(auVar63,auVar61,3);
        auVar61 = *(undefined1 (*) [32])(param_3 + lVar35 * 0xc);
        auVar62 = *(undefined1 (*) [32])(param_3 + 0x20 + lVar35 * 0xc);
        auVar63 = *(undefined1 (*) [32])(param_3 + 0x40 + lVar35 * 0xc);
        auVar64 = vpermi2ps_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                     ,auVar61,auVar62);
        auVar45 = vpermi2ps_avx512vl(___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                     ,auVar63,auVar62);
        auVar54 = vinsertf32x4_avx512vl(auVar64,auVar45._0_16_,1);
        auVar48 = vshuff64x2_avx512vl(auVar64,auVar45,3);
        auVar61 = vblendps_avx(auVar62,auVar61,0x24);
        auVar50 = vpermt2ps_avx512vl(auVar61,
                                     ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                     ,auVar63);
      }
      else {
        auVar42 = vxorps_avx512vl(auVar46._0_16_,auVar46._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)pauVar1 * 2));
        auVar51._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar51._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar51._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar51._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar51._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar51._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar51._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar51._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(auVar43._0_16_,auVar43._0_16_);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)*pauVar1);
        auVar52._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar52._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar52._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar52._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar52._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar52._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar52._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar52._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)(local_98 + (longlong)*pauVar1));
        auVar53._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
        auVar53._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar53._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
        auVar53._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
        auVar53._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar53._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar53._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar53._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        puVar2 = (undefined4 *)(param_3 + lVar35 * 0xc);
        auVar42 = vxorps_avx512vl(auVar73,auVar73);
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)pauVar1));
        auVar54._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar54._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar54._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar54._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar54._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar54._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar54._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar54._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar42 = vxorps_avx512vl(__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                  ._0_16_,__ymm_00000054000000480000003c0000003000000024000000180000000c00000000
                                          ._0_16_);
        auVar61 = vgatherdps_avx512vl(*puVar2);
        auVar48._0_4_ =
             (uint)(bVar39 & 1) * auVar61._0_4_ | (uint)!(bool)(bVar39 & 1) * auVar42._0_4_;
        bVar7 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar48._4_4_ = (uint)bVar7 * auVar61._4_4_ | (uint)!bVar7 * auVar42._4_4_;
        bVar7 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar48._8_4_ = (uint)bVar7 * auVar61._8_4_ | (uint)!bVar7 * auVar42._8_4_;
        bVar7 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar48._12_4_ = (uint)bVar7 * auVar61._12_4_ | (uint)!bVar7 * auVar42._12_4_;
        auVar48._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar48._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar48._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar48._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
        auVar61 = vgatherdps_avx512vl(*(undefined4 *)((longlong)puVar2 + (longlong)local_98));
        auVar50._4_4_ = (uint)((byte)(uVar29 >> 1) & 1) * auVar61._4_4_;
        auVar50._0_4_ = (uint)(bVar39 & 1) * auVar61._0_4_;
        auVar50._8_4_ = (uint)((byte)(uVar29 >> 2) & 1) * auVar61._8_4_;
        auVar50._12_4_ = (uint)((byte)(uVar29 >> 3) & 1) * auVar61._12_4_;
        auVar50._16_4_ = (uint)((byte)(uVar29 >> 4) & 1) * auVar61._16_4_;
        auVar50._20_4_ = (uint)((byte)(uVar29 >> 5) & 1) * auVar61._20_4_;
        auVar50._24_4_ = (uint)((byte)(uVar29 >> 6) & 1) * auVar61._24_4_;
        auVar50._28_4_ = (uint)(byte)(uVar29 >> 7) * auVar61._28_4_;
      }
      auVar42 = vaddss_avx512f(in_ZMM3._0_16_,ZEXT416((uint)param_5));
      auVar61 = vbroadcastss_avx512vl(auVar42);
      auVar62 = vfnmadd213ps_avx512vl(auVar54,auVar61,auVar51);
      auVar63 = vfnmadd213ps_avx512vl(auVar48,auVar61,auVar52);
      auVar32._4_4_ = (uint)bVar4 * auVar44._4_4_ | (uint)!bVar4 * iStack_11c;
      auVar32._0_4_ = (uint)(bVar39 & 1) * auVar44._0_4_ | (uint)!(bool)(bVar39 & 1) * local_120;
      auVar32._8_4_ = (uint)bVar8 * auVar44._8_4_ | (uint)!bVar8 * iStack_118;
      auVar32._12_4_ = (uint)bVar11 * auVar44._12_4_ | (uint)!bVar11 * iStack_114;
      auVar32._16_4_ = (uint)bVar14 * auVar44._16_4_ | (uint)!bVar14 * iStack_110;
      auVar32._20_4_ = (uint)bVar17 * auVar44._20_4_ | (uint)!bVar17 * iStack_10c;
      auVar32._24_4_ = (uint)bVar20 * auVar44._24_4_ | (uint)!bVar20 * iStack_108;
      auVar32._28_4_ = (uint)bVar23 * auVar44._28_4_ | (uint)!bVar23 * iStack_104;
      auVar33._4_4_ = (uint)bVar5 * auVar43._4_4_ | (uint)!bVar5 * iStack_fc;
      auVar33._0_4_ = (uint)(bVar39 & 1) * auVar43._0_4_ | (uint)!(bool)(bVar39 & 1) * local_100;
      auVar33._8_4_ = (uint)bVar9 * auVar43._8_4_ | (uint)!bVar9 * iStack_f8;
      auVar33._12_4_ = (uint)bVar12 * auVar43._12_4_ | (uint)!bVar12 * iStack_f4;
      auVar33._16_4_ = (uint)bVar15 * auVar43._16_4_ | (uint)!bVar15 * iStack_f0;
      auVar33._20_4_ = (uint)bVar18 * auVar43._20_4_ | (uint)!bVar18 * iStack_ec;
      auVar33._24_4_ = (uint)bVar21 * auVar43._24_4_ | (uint)!bVar21 * iStack_e8;
      auVar33._28_4_ = (uint)bVar24 * auVar43._28_4_ | (uint)!bVar24 * iStack_e4;
      auVar34._4_4_ = (uint)bVar6 * auVar46._4_4_ | (uint)!bVar6 * iStack_dc;
      auVar34._0_4_ = (uint)(bVar39 & 1) * auVar46._0_4_ | (uint)!(bool)(bVar39 & 1) * local_e0;
      auVar34._8_4_ = (uint)bVar10 * auVar46._8_4_ | (uint)!bVar10 * iStack_d8;
      auVar34._12_4_ = (uint)bVar13 * auVar46._12_4_ | (uint)!bVar13 * iStack_d4;
      auVar34._16_4_ = (uint)bVar16 * auVar46._16_4_ | (uint)!bVar16 * iStack_d0;
      auVar34._20_4_ = (uint)bVar19 * auVar46._20_4_ | (uint)!bVar19 * iStack_cc;
      auVar34._24_4_ = (uint)bVar22 * auVar46._24_4_ | (uint)!bVar22 * iStack_c8;
      auVar34._28_4_ = (uint)bVar25 * auVar46._28_4_ | (uint)!bVar25 * iStack_c4;
      auVar43 = vfnmadd213ps_avx512vl(auVar61,auVar50,auVar53);
      auVar61 = vsubps_avx512vl(auVar32,auVar62);
      auVar64 = vsubps_avx512vl(auVar33,auVar63);
      auVar44 = vsubps_avx512vl(auVar34,auVar43);
      auVar45 = vmulps_avx512vl(auVar64,auVar64);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar61,auVar61);
      auVar45 = vfmadd231ps_avx512vl(auVar45,auVar44,auVar44);
      auVar46 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
      auVar47 = vsqrtps_avx512vl(auVar45);
      auVar46 = vdivps_avx512vl(auVar46,auVar47);
      auVar68._4_4_ = auVar68._0_4_;
      auVar68._8_4_ = auVar68._0_4_;
      auVar68._12_4_ = auVar68._0_4_;
      auVar68._16_4_ = auVar68._0_4_;
      auVar68._20_4_ = auVar68._0_4_;
      auVar68._24_4_ = auVar68._0_4_;
      auVar68._28_4_ = auVar68._0_4_;
      auVar47 = vfnmadd213ps_avx512vl(auVar54,auVar68,auVar51);
      param_5 = param_5 * param_5;
      auVar67._4_4_ = param_5;
      auVar67._0_4_ = param_5;
      auVar67._8_4_ = param_5;
      auVar67._12_4_ = param_5;
      auVar67._16_4_ = param_5;
      auVar67._20_4_ = param_5;
      auVar67._24_4_ = param_5;
      auVar67._28_4_ = param_5;
      uVar37 = vcmpps_avx512vl(auVar45,auVar67,1);
      auVar61 = vfmadd231ps_avx512vl(auVar62,auVar46,auVar61);
      bVar39 = (byte)uVar37;
      auVar56._4_4_ = __real_322bcc77;
      auVar56._0_4_ = __real_322bcc77;
      auVar56._8_4_ = __real_322bcc77;
      auVar56._12_4_ = __real_322bcc77;
      auVar56._16_4_ = __real_322bcc77;
      auVar56._20_4_ = __real_322bcc77;
      auVar56._24_4_ = __real_322bcc77;
      auVar56._28_4_ = __real_322bcc77;
      uVar29 = vcmpps_avx512vl(auVar45,auVar56,1);
      bVar3 = (byte)uVar29;
      auVar65._0_4_ =
           (uint)(bVar3 & 1) * auVar47._0_4_ |
           (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar61._0_4_;
      bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
      auVar65._4_4_ =
           (uint)bVar4 * auVar47._4_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar61._4_4_;
      bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
      auVar65._8_4_ =
           (uint)bVar4 * auVar47._8_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar61._8_4_;
      bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
      auVar65._12_4_ =
           (uint)bVar4 * auVar47._12_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar61._12_4_;
      bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
      auVar65._16_4_ =
           (uint)bVar4 * auVar47._16_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar61._16_4_;
      bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
      auVar65._20_4_ =
           (uint)bVar4 * auVar47._20_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar61._20_4_;
      bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
      auVar65._24_4_ =
           (uint)bVar4 * auVar47._24_4_ |
           (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar61._24_4_;
      bVar4 = SUB81(uVar29 >> 7,0);
      auVar65._28_4_ =
           (uint)bVar4 * auVar47._28_4_ | (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar61._28_4_;
      uVar30 = vcmpps_avx512vl(auVar60,ZEXT432(0) << 0x20,4);
      uVar40 = vcmpps_avx512vl(auVar65,ZEXT432(0) << 0x20,4);
      uVar41 = vpcmpgtd_avx512vl(auVar59,auVar58);
      uVar41 = uVar30 & uVar40 & uVar41;
      if ((char)uVar41 != '\0') {
        auVar58 = vfnmadd213ps_avx512vl(auVar48,auVar68,auVar52);
        auVar59 = vfmadd213ps_avx512vl(auVar64,auVar46,auVar63);
        auVar43 = vfmadd213ps_avx512vl(auVar44,auVar46,auVar43);
        auVar66._0_4_ =
             (uint)(bVar3 & 1) * auVar58._0_4_ |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar59._0_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar66._4_4_ =
             (uint)bVar4 * auVar58._4_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar59._4_4_;
        bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar66._8_4_ =
             (uint)bVar4 * auVar58._8_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar59._8_4_;
        bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar66._12_4_ =
             (uint)bVar4 * auVar58._12_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar59._12_4_;
        bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
        auVar66._16_4_ =
             (uint)bVar4 * auVar58._16_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar59._16_4_;
        bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
        auVar66._20_4_ =
             (uint)bVar4 * auVar58._20_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar59._20_4_;
        bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
        auVar66._24_4_ =
             (uint)bVar4 * auVar58._24_4_ |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar59._24_4_;
        bVar4 = SUB81(uVar29 >> 7,0);
        auVar66._28_4_ =
             (uint)bVar4 * auVar58._28_4_ |
             (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar59._28_4_;
        auVar58._0_4_ =
             (uint)(bVar3 & 1) * (int)(-(auVar68._0_4_ * auVar50._0_4_) + auVar53._0_4_) |
             (uint)!(bool)(bVar3 & 1) * (uint)(bVar39 & 1) * auVar43._0_4_;
        bVar4 = (bool)((byte)(uVar29 >> 1) & 1);
        auVar58._4_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._4_4_) + auVar53._4_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 1) & 1) * auVar43._4_4_;
        bVar4 = (bool)((byte)(uVar29 >> 2) & 1);
        auVar58._8_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._8_4_) + auVar53._8_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 2) & 1) * auVar43._8_4_;
        bVar4 = (bool)((byte)(uVar29 >> 3) & 1);
        auVar58._12_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._12_4_) + auVar53._12_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 3) & 1) * auVar43._12_4_;
        bVar4 = (bool)((byte)(uVar29 >> 4) & 1);
        auVar58._16_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._16_4_) + auVar53._16_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 4) & 1) * auVar43._16_4_;
        bVar4 = (bool)((byte)(uVar29 >> 5) & 1);
        auVar58._20_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._20_4_) + auVar53._20_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 5) & 1) * auVar43._20_4_;
        bVar4 = (bool)((byte)(uVar29 >> 6) & 1);
        auVar58._24_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._24_4_) + auVar53._24_4_) |
             (uint)!bVar4 * (uint)((byte)(uVar37 >> 6) & 1) * auVar43._24_4_;
        bVar4 = SUB81(uVar29 >> 7,0);
        auVar58._28_4_ =
             (uint)bVar4 * (int)(-(auVar68._0_4_ * auVar50._28_4_) + auVar53._28_4_) |
             (uint)!bVar4 * (uint)(byte)(uVar37 >> 7) * auVar43._28_4_;
        if ((char)uVar41 == -1) {
          auVar59 = vunpcklps_avx512vl(auVar65,auVar66);
          auVar43 = vunpcklps_avx512vl(auVar58,auVar60);
          auVar68 = vunpcklpd_avx(auVar59,auVar43);
          auVar59 = vunpckhpd_avx(auVar59,auVar43);
          auVar43 = vunpckhps_avx512vl(auVar65,auVar66);
          auVar58 = vunpckhps_avx512vl(auVar58,auVar60);
          auVar60 = vunpcklpd_avx(auVar43,auVar58);
          auVar58 = vunpckhpd_avx(auVar43,auVar58);
          auVar69._16_16_ = auVar59._0_16_;
          auVar69._0_16_ = auVar68._0_16_;
          *pauVar38 = auVar69;
          auVar70._16_16_ = auVar58._0_16_;
          auVar70._0_16_ = auVar60._0_16_;
          pauVar38[1] = auVar70;
          auVar59 = vperm2f128_avx(auVar68,auVar59,0x31);
          pauVar38[2] = auVar59;
          auVar58 = vperm2f128_avx(auVar60,auVar58,0x31);
          pauVar38[3] = auVar58;
        }
        else {
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007000000060000000500000004000000030000000200000001000000000,uVar41,
                     auVar65);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007400000064000000540000004400000034000000240000001400000004,uVar41,
                     auVar66);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007800000068000000580000004800000038000000280000001800000008,uVar41,
                     auVar58);
          vscatterdps_avx512vl
                    (ZEXT832(pauVar38) +
                     ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c,uVar41,
                     auVar60);
        }
      }
    }
  }
  return;
}

// ApplySphericalBackstopConstraints_avx512skx @ 14031b180

void ApplySphericalBackstopConstraints_avx512skx(void)

{
  ApplySphericalBackstopConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_Cunf_3E_CunfCunfCunfCunfCuniCuni_avx512skx
            ();
  return;
}

