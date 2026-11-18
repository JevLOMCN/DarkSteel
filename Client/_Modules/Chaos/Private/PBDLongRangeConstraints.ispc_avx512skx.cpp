// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// ApplyLongRangeConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_CunfCunfCuniCuni_avx512skx @ 1402e1000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_CunfCunfCuniCuni_avx512skx
               (undefined4 *param_1,undefined1 (*param_2) [32],float param_3,float param_4,
               uint param_5,undefined8 param_6,undefined1 (*param_7) [16])

{
  byte bVar1;
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
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  ulonglong uVar50;
  uint uVar51;
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  undefined1 (*pauVar66) [32];
  longlong unaff_RBX;
  longlong unaff_RSI;
  uint uVar67;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  int iVar100;
  undefined1 auVar72 [16];
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
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM15 [64];
  undefined1 in_ZMM16 [64];
  undefined1 auVar108 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM21 [64];
  undefined1 auVar109 [16];
  undefined1 in_ZMM22 [64];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  int local_180;
  int iStack_17c;
  int aiStack_178 [4];
  int iStack_168;
  int iStack_164;
  int local_160 [4];
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
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
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  int iVar71;
  int iVar99;
  int iVar101;
  
  auVar74 = in_ZMM16._0_16_;
  auVar108 = in_ZMM18._0_16_;
  auVar109 = in_ZMM22._0_16_;
  auVar73 = in_ZMM21._0_16_;
  local_18 = in_ZMM15._0_16_;
  local_28 = in_ZMM14._0_16_;
  auVar72 = vpsllw_avx512vl(*param_7,0xf);
  uVar69 = vpmovw2m_avx512vl(auVar72);
  auVar75 = vpbroadcastd_avx512vl();
  uVar70 = vpcmpgtd_avx512vl(auVar75,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
  uVar70 = uVar69 & 0xff & uVar70;
  bVar68 = (byte)uVar70;
  if (bVar68 != 0) {
    if (bVar68 == 0xff) {
      auVar76 = param_2[1];
      auVar77 = vmovdqu64_avx512vl(param_2[2]);
      auVar74 = auVar77._0_16_;
      auVar78 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,*param_2,auVar76);
      auVar79 = vmovdqa64_avx512vl(
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  );
      auVar79 = vpermi2d_avx512vl(auVar79,auVar77,auVar76);
      auVar80 = vinserti32x4_avx512vl(auVar78,auVar79._0_16_,1);
      auVar78 = vshufi64x2_avx512vl(auVar78,auVar79,3);
      auVar76 = vpblendd_avx2(auVar76,*param_2,0x24);
      auVar76 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,auVar76,auVar77);
    }
    else {
      auVar76 = vpgatherdd_avx512vl(*(undefined4 *)*param_2);
      auVar80._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar76._4_4_;
      auVar80._0_4_ = (uint)(bVar68 & 1) * auVar76._0_4_;
      auVar80._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar76._8_4_;
      auVar80._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar76._12_4_;
      auVar80._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar76._16_4_;
      auVar80._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar76._20_4_;
      auVar80._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar76._24_4_;
      auVar80._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar76._28_4_;
      auVar76 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + (longlong)aiStack_178));
      auVar78._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar76._4_4_;
      auVar78._0_4_ = (uint)(bVar68 & 1) * auVar76._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar76._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar76._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar76._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar76._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar76._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar76._28_4_;
      auVar76 = vmovdqa64_avx512vl(
                                  ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                  );
      auVar74 = auVar76._0_16_;
      auVar77 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + param_5));
      auVar76._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar77._4_4_;
      auVar76._0_4_ = (uint)(bVar68 & 1) * auVar77._0_4_;
      auVar76._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar77._8_4_;
      auVar76._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar77._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar77._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar77._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar77._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar77._28_4_;
    }
    uVar70 = vpcmpgtd_avx512vl(auVar75,
                               ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                              );
    local_1e0 = vmovdqu32_avx512vl(auVar80);
    local_1c0 = vmovdqu32_avx512vl(auVar78);
    bVar2 = (bool)((byte)uVar70 & 1);
    local_1a0 = (float)((uint)bVar2 * auVar76._0_4_ | (uint)!bVar2 * (int)local_1a0);
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    fStack_19c = (float)((uint)bVar2 * auVar76._4_4_ | (uint)!bVar2 * (int)fStack_19c);
    bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
    fStack_198 = (float)((uint)bVar2 * auVar76._8_4_ | (uint)!bVar2 * (int)fStack_198);
    bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
    fStack_194 = (float)((uint)bVar2 * auVar76._12_4_ | (uint)!bVar2 * (int)fStack_194);
    bVar2 = (bool)((byte)(uVar70 >> 4) & 1);
    fStack_190 = (float)((uint)bVar2 * auVar76._16_4_ | (uint)!bVar2 * (int)fStack_190);
    bVar2 = (bool)((byte)(uVar70 >> 5) & 1);
    fStack_18c = (float)((uint)bVar2 * auVar76._20_4_ | (uint)!bVar2 * (int)fStack_18c);
    bVar2 = (bool)((byte)(uVar70 >> 6) & 1);
    fStack_188 = (float)((uint)bVar2 * auVar76._24_4_ | (uint)!bVar2 * (int)fStack_188);
    bVar2 = SUB81(uVar70 >> 7,0);
    fStack_184 = (float)((uint)bVar2 * auVar76._28_4_ | (uint)!bVar2 * (int)fStack_184);
  }
  uVar51 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar51 = param_5;
  }
  auVar76 = vpbroadcastd_avx512vl();
  if ((int)(uVar51 & 0xfffffff8) < 1) {
    uVar67 = 0;
  }
  else {
    uVar67 = 0;
    auVar77 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar74 = auVar77._0_16_;
    auVar77 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar108 = auVar77._0_16_;
    vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar77._4_4_ = _UNK_150b51904;
    auVar77._0_4_ = ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
    auVar77._8_4_ = _UNK_150b51908;
    auVar77._12_4_ = _UNK_150b5190c;
    auVar77._16_4_ = _UNK_150b51910;
    auVar77._20_4_ = _UNK_150b51914;
    auVar77._24_4_ = _UNK_150b51918;
    auVar77._28_4_ = _UNK_150b5191c;
    auVar77 = vmovdqa64_avx512vl(auVar77);
    auVar78 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar73 = auVar78._0_16_;
    auVar79 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar80 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                );
    vmovdqa64_avx512vl(___ymm_00000054000000480000003c0000003000000024000000180000000c00000000);
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    do {
      fVar65 = fStack_184;
      fVar64 = fStack_188;
      fVar63 = fStack_18c;
      fVar62 = fStack_190;
      fVar61 = fStack_194;
      fVar60 = fStack_198;
      fVar59 = fStack_19c;
      fVar58 = local_1a0;
      pauVar66 = param_2 + 3;
      auVar81 = vpaddd_avx512vl(auVar76,local_1e0);
      vpslld_avx512vl(auVar81,4);
      auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      auVar82 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      auVar84 = vpaddd_avx512vl(auVar76,local_1c0);
      vpslld_avx512vl(auVar84,4);
      auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      auVar88 = vpbroadcastd_avx512vl();
      auVar88 = vpaddd_avx512vl(auVar88,auVar77);
      uVar70 = vpcmpgtd_avx512vl(auVar75,auVar88);
      bVar68 = (byte)uVar70;
      if (bVar68 != 0) {
        if (bVar68 == 0xff) {
          auVar88 = param_2[4];
          auVar89 = vmovdqu64_avx512vl(param_2[5]);
          auVar92 = vpblendd_avx2(auVar88,*pauVar66,0x24);
          auVar90 = vpermt2d_avx512vl(*pauVar66,
                                      ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                      ,auVar88);
          auVar91 = vpermt2d_avx512vl(auVar92,auVar80,auVar89);
          auVar88 = vpermt2d_avx512vl(auVar89,auVar79,auVar88);
          auVar89 = vinserti32x4_avx512vl(auVar90,auVar88._0_16_,1);
          auVar92 = vshufi64x2_avx512vl(auVar90,auVar88,3);
        }
        else {
          auVar88 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar66 + uVar67));
          auVar89._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar88._4_4_;
          auVar89._0_4_ = (uint)(bVar68 & 1) * auVar88._0_4_;
          auVar89._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar88._8_4_;
          auVar89._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar88._12_4_;
          auVar89._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar88._16_4_;
          auVar89._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar88._20_4_;
          auVar89._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar88._24_4_;
          auVar89._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar88._28_4_;
          auVar88 = vpgatherdd_avx512vl(*(undefined4 *)(local_1c0 + (longlong)*pauVar66));
          auVar92._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar88._4_4_;
          auVar92._0_4_ = (uint)(bVar68 & 1) * auVar88._0_4_;
          auVar92._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar88._8_4_;
          auVar92._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar88._12_4_;
          auVar92._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar88._16_4_;
          auVar92._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar88._20_4_;
          auVar92._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar88._24_4_;
          auVar92._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar88._28_4_;
          auVar88 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar66 + uVar70));
          auVar91._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar88._4_4_;
          auVar91._0_4_ = (uint)(bVar68 & 1) * auVar88._0_4_;
          auVar91._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar88._8_4_;
          auVar91._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar88._12_4_;
          auVar91._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar88._16_4_;
          auVar91._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar88._20_4_;
          auVar91._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar88._24_4_;
          auVar91._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar88._28_4_;
        }
        in_ZMM15 = ZEXT3264(auVar89);
        in_ZMM14 = ZEXT3264(auVar91);
        local_1e0 = vmovdqu32_avx512vl(auVar89);
        local_1c0 = vmovdqu32_avx512vl(auVar92);
        local_1a0 = (float)((uint)(bVar68 & 1) * auVar91._0_4_ |
                           (uint)!(bool)(bVar68 & 1) * (int)local_1a0);
        bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
        fStack_19c = (float)((uint)bVar2 * auVar91._4_4_ | (uint)!bVar2 * (int)fStack_19c);
        bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
        fStack_198 = (float)((uint)bVar2 * auVar91._8_4_ | (uint)!bVar2 * (int)fStack_198);
        bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
        fStack_194 = (float)((uint)bVar2 * auVar91._12_4_ | (uint)!bVar2 * (int)fStack_194);
        bVar2 = (bool)((byte)(uVar70 >> 4) & 1);
        fStack_190 = (float)((uint)bVar2 * auVar91._16_4_ | (uint)!bVar2 * (int)fStack_190);
        bVar2 = (bool)((byte)(uVar70 >> 5) & 1);
        fStack_18c = (float)((uint)bVar2 * auVar91._20_4_ | (uint)!bVar2 * (int)fStack_18c);
        bVar2 = (bool)((byte)(uVar70 >> 6) & 1);
        fStack_188 = (float)((uint)bVar2 * auVar91._24_4_ | (uint)!bVar2 * (int)fStack_188);
        bVar2 = SUB81(uVar70 >> 7,0);
        fStack_184 = (float)((uint)bVar2 * auVar91._28_4_ | (uint)!bVar2 * (int)fStack_184);
      }
      auVar88 = vsubps_avx512vl(auVar81,auVar84);
      auVar81 = vsubps_avx(auVar82,auVar85);
      auVar82 = vsubps_avx(auVar83,auVar86);
      auVar105._0_4_ = auVar81._0_4_ * auVar81._0_4_;
      auVar105._4_4_ = auVar81._4_4_ * auVar81._4_4_;
      auVar105._8_4_ = auVar81._8_4_ * auVar81._8_4_;
      auVar105._12_4_ = auVar81._12_4_ * auVar81._12_4_;
      auVar105._16_4_ = auVar81._16_4_ * auVar81._16_4_;
      auVar105._20_4_ = auVar81._20_4_ * auVar81._20_4_;
      auVar105._24_4_ = auVar81._24_4_ * auVar81._24_4_;
      auVar105._28_4_ = auVar81._28_4_ * auVar81._28_4_;
      auVar83 = vfmadd231ps_avx512vl(auVar105,auVar88,auVar88);
      auVar106._0_4_ = auVar82._0_4_ * auVar82._0_4_ + auVar83._0_4_;
      auVar106._4_4_ = auVar82._4_4_ * auVar82._4_4_ + auVar83._4_4_;
      auVar106._8_4_ = auVar82._8_4_ * auVar82._8_4_ + auVar83._8_4_;
      auVar106._12_4_ = auVar82._12_4_ * auVar82._12_4_ + auVar83._12_4_;
      auVar106._16_4_ = auVar82._16_4_ * auVar82._16_4_ + auVar83._16_4_;
      auVar106._20_4_ = auVar82._20_4_ * auVar82._20_4_ + auVar83._20_4_;
      auVar106._24_4_ = auVar82._24_4_ * auVar82._24_4_ + auVar83._24_4_;
      auVar106._28_4_ = auVar82._28_4_ * auVar82._28_4_ + auVar83._28_4_;
      auVar83 = vsqrtps_avx(auVar106);
      uVar70 = vcmpps_avx512vl(auVar83,auVar78,1);
      auVar88 = vdivps_avx512vl(auVar88,auVar83);
      auVar81 = vdivps_avx(auVar81,auVar83);
      auVar82 = vdivps_avx(auVar82,auVar83);
      bVar68 = (byte)uVar70;
      auVar90._4_4_ = (uint)!(bool)((byte)(uVar70 >> 1) & 1) * auVar81._4_4_;
      auVar90._0_4_ = (uint)!(bool)(bVar68 & 1) * auVar81._0_4_;
      auVar90._8_4_ = (uint)!(bool)((byte)(uVar70 >> 2) & 1) * auVar81._8_4_;
      auVar90._12_4_ = (uint)!(bool)((byte)(uVar70 >> 3) & 1) * auVar81._12_4_;
      auVar90._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar81._16_4_;
      auVar90._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar81._20_4_;
      iVar100 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
      auVar90._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar81._24_4_;
      bVar2 = SUB81(uVar70 >> 7,0);
      auVar90._28_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar81._28_4_;
      auVar81._4_4_ = (uint)!(bool)((byte)(uVar70 >> 1) & 1) * auVar82._4_4_;
      auVar81._0_4_ = (uint)!(bool)(bVar68 & 1) * auVar82._0_4_;
      auVar81._8_4_ = (uint)!(bool)((byte)(uVar70 >> 2) & 1) * auVar82._8_4_;
      auVar81._12_4_ = (uint)!(bool)((byte)(uVar70 >> 3) & 1) * auVar82._12_4_;
      auVar81._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar82._16_4_;
      auVar81._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar82._20_4_;
      auVar81._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar82._24_4_;
      bVar2 = SUB81(uVar70 >> 7,0);
      auVar81._28_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar82._28_4_;
      auVar104._0_4_ = -(param_4 * fVar58) + auVar83._0_4_;
      auVar104._4_4_ = -(param_4 * fVar59) + auVar83._4_4_;
      auVar104._8_4_ = -(param_4 * fVar60) + auVar83._8_4_;
      auVar104._12_4_ = -(param_4 * fVar61) + auVar83._12_4_;
      auVar104._16_4_ = -(param_4 * fVar62) + auVar83._16_4_;
      auVar104._20_4_ = -(param_4 * fVar63) + auVar83._20_4_;
      auVar104._24_4_ = -(param_4 * fVar64) + auVar83._24_4_;
      auVar104._28_4_ = -(param_4 * fVar65) + auVar83._28_4_;
      auVar107._0_4_ = auVar104._0_4_ * param_3;
      auVar107._4_4_ = auVar104._4_4_ * param_3;
      auVar107._8_4_ = auVar104._8_4_ * param_3;
      auVar107._12_4_ = auVar104._12_4_ * param_3;
      auVar107._16_4_ = auVar104._16_4_ * param_3;
      auVar107._20_4_ = auVar104._20_4_ * param_3;
      auVar107._24_4_ = auVar104._24_4_ * param_3;
      auVar107._28_4_ = auVar104._28_4_ * param_3;
      auVar82 = vmulps_avx512vl(auVar107,auVar88);
      bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
      bVar13 = (bool)((byte)(uVar70 >> 3) & 1);
      bVar22 = (bool)((byte)(uVar70 >> 4) & 1);
      bVar29 = (bool)((byte)(uVar70 >> 5) & 1);
      bVar36 = (bool)((byte)(uVar70 >> 6) & 1);
      bVar43 = SUB81(uVar70 >> 7,0);
      auVar88 = ZEXT1632((undefined1  [16])0x0);
      uVar70 = vcmpps_avx512vl(auVar104,auVar88,1);
      bVar1 = (byte)uVar70;
      auVar83._4_4_ =
           (uint)!(bool)((byte)(uVar70 >> 1) & 1) *
           ((uint)bVar2 * (int)auVar107._4_4_ | (uint)!bVar2 * auVar82._4_4_);
      auVar83._0_4_ =
           (uint)!(bool)(bVar1 & 1) *
           ((uint)(bVar68 & 1) * (int)auVar107._0_4_ | (uint)!(bool)(bVar68 & 1) * auVar82._0_4_);
      bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
      iVar100 = auVar88._8_4_;
      auVar83._8_4_ =
           (uint)bVar2 * iVar100 |
           (uint)!bVar2 * ((uint)bVar4 * (int)auVar107._8_4_ | (uint)!bVar4 * auVar82._8_4_);
      bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
      iVar71 = auVar88._12_4_;
      auVar83._12_4_ =
           (uint)bVar2 * iVar71 |
           (uint)!bVar2 * ((uint)bVar13 * (int)auVar107._12_4_ | (uint)!bVar13 * auVar82._12_4_);
      auVar83._16_4_ =
           (uint)!(bool)((byte)(uVar70 >> 4) & 1) *
           ((uint)bVar22 * (int)auVar107._16_4_ | (uint)!bVar22 * auVar82._16_4_);
      auVar83._20_4_ =
           (uint)!(bool)((byte)(uVar70 >> 5) & 1) *
           ((uint)bVar29 * (int)auVar107._20_4_ | (uint)!bVar29 * auVar82._20_4_);
      iVar99 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
      auVar83._24_4_ =
           (uint)!(bool)((byte)(uVar70 >> 6) & 1) *
           ((uint)bVar36 * (int)auVar107._24_4_ | (uint)!bVar36 * auVar82._24_4_);
      bVar2 = SUB81(uVar70 >> 7,0);
      auVar83._28_4_ =
           (uint)bVar2 * iVar99 |
           (uint)!bVar2 * ((uint)bVar43 * (int)auVar107._28_4_ | (uint)!bVar43 * auVar82._28_4_);
      auVar82 = vaddps_avx512vl(auVar84,auVar83);
      vscatterdps_avx512vl(ZEXT832(param_1) + in_ZMM14._0_32_,0xffff,auVar82);
      auVar82 = vmulps_avx512vl(auVar90,auVar107);
      auVar84._4_4_ = (uint)!(bool)((byte)(uVar70 >> 1) & 1) * auVar82._4_4_;
      auVar84._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar82._0_4_;
      bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar84._8_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar82._8_4_;
      bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar84._12_4_ = (uint)bVar2 * iVar71 | (uint)!bVar2 * auVar82._12_4_;
      auVar84._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar82._16_4_;
      auVar84._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar82._20_4_;
      auVar84._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar82._24_4_;
      bVar2 = SUB81(uVar70 >> 7,0);
      auVar84._28_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar82._28_4_;
      auVar82 = vaddps_avx512vl(auVar85,auVar84);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar107,0xffff,auVar82);
      auVar81 = vmulps_avx512vl(auVar81,auVar107);
      auVar82._4_4_ = (uint)!(bool)((byte)(uVar70 >> 1) & 1) * auVar81._4_4_;
      auVar82._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar81._0_4_;
      bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
      auVar82._8_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar81._8_4_;
      bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
      auVar82._12_4_ = (uint)bVar2 * iVar71 | (uint)!bVar2 * auVar81._12_4_;
      auVar82._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar81._16_4_;
      auVar82._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar81._20_4_;
      auVar82._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar81._24_4_;
      bVar2 = SUB81(uVar70 >> 7,0);
      auVar82._28_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar81._28_4_;
      auVar81 = vaddps_avx512vl(auVar86,auVar82);
      auVar109 = auVar81._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar104,0xffff,auVar81);
      vscatterdps_avx512vl(ZEXT832(param_1) + in_ZMM15._0_32_,0xffff,auVar87);
      uVar67 = uVar67 + 8;
      param_2 = pauVar66;
    } while ((int)uVar67 < (int)(uVar51 & 0xfffffff8));
  }
  if ((int)uVar67 < (int)param_5) {
    auVar78 = vpbroadcastd_avx512vl();
    auVar77 = vpor_avx2(auVar78,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    uVar50 = vpcmpgtd_avx512vl(auVar75,auVar77);
    auVar79._0_4_ = auVar76._0_4_ + local_1e0._0_4_;
    auVar79._4_4_ = auVar76._4_4_ + local_1e0._4_4_;
    auVar79._8_4_ = auVar76._8_4_ + local_1e0._8_4_;
    auVar79._12_4_ = auVar76._12_4_ + local_1e0._12_4_;
    auVar79._16_4_ = auVar76._16_4_ + local_1e0._16_4_;
    auVar79._20_4_ = auVar76._20_4_ + local_1e0._20_4_;
    auVar79._24_4_ = auVar76._24_4_ + local_1e0._24_4_;
    auVar79._28_4_ = auVar76._28_4_ + local_1e0._28_4_;
    vpslld_avx2(auVar79,4);
    auVar102._4_4_ = __real_00000004;
    auVar102._0_4_ = __real_00000004;
    auVar102._8_4_ = __real_00000004;
    auVar102._12_4_ = __real_00000004;
    auVar102._16_4_ = __real_00000004;
    auVar102._20_4_ = __real_00000004;
    auVar102._24_4_ = __real_00000004;
    auVar102._28_4_ = __real_00000004;
    auVar77 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    bVar68 = (byte)uVar50;
    auVar72 = vxorps_avx512vl(auVar73,auVar73);
    auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
    bVar2 = (bool)((byte)(uVar50 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar50 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar50 >> 3) & 1);
    auVar85._0_4_ = auVar76._0_4_ + local_1c0._0_4_;
    auVar85._4_4_ = auVar76._4_4_ + local_1c0._4_4_;
    auVar85._8_4_ = auVar76._8_4_ + local_1c0._8_4_;
    auVar85._12_4_ = auVar76._12_4_ + local_1c0._12_4_;
    auVar85._16_4_ = auVar76._16_4_ + local_1c0._16_4_;
    auVar85._20_4_ = auVar76._20_4_ + local_1c0._20_4_;
    auVar85._24_4_ = auVar76._24_4_ + local_1c0._24_4_;
    auVar85._28_4_ = auVar76._28_4_ + local_1c0._28_4_;
    auVar103._4_4_ = __real_00000008;
    auVar103._0_4_ = __real_00000008;
    auVar103._8_4_ = __real_00000008;
    auVar103._12_4_ = __real_00000008;
    auVar103._16_4_ = __real_00000008;
    auVar103._20_4_ = __real_00000008;
    auVar103._24_4_ = __real_00000008;
    auVar103._28_4_ = __real_00000008;
    auVar73 = vxorps_avx512vl(auVar109,auVar109);
    auVar76 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    bVar4 = (bool)((byte)(uVar50 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar50 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar50 >> 3) & 1);
    auVar80 = vpslld_avx512vl(auVar85,4);
    auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    auVar82 = vgatherdps_avx512vl(*param_1);
    auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    auVar88._4_4_ = fStack_19c;
    auVar88._0_4_ = local_1a0;
    auVar88._8_4_ = fStack_198;
    auVar88._12_4_ = fStack_194;
    auVar88._16_4_ = fStack_190;
    auVar88._20_4_ = fStack_18c;
    auVar88._24_4_ = fStack_188;
    auVar88._28_4_ = fStack_184;
    auVar87._4_4_ = __real_0000000c;
    auVar87._0_4_ = __real_0000000c;
    auVar87._8_4_ = __real_0000000c;
    auVar87._12_4_ = __real_0000000c;
    auVar87._16_4_ = __real_0000000c;
    auVar87._20_4_ = __real_0000000c;
    auVar87._24_4_ = __real_0000000c;
    auVar87._28_4_ = __real_0000000c;
    auVar74 = vxorps_avx512vl(auVar74,auVar74);
    auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
    auVar93._0_4_ = (uint)(bVar68 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar68 & 1) * auVar74._0_4_;
    bVar13 = (bool)((byte)(uVar50 >> 1) & 1);
    auVar93._4_4_ = (uint)bVar13 * auVar84._4_4_ | (uint)!bVar13 * auVar74._4_4_;
    bVar13 = (bool)((byte)(uVar50 >> 2) & 1);
    auVar93._8_4_ = (uint)bVar13 * auVar84._8_4_ | (uint)!bVar13 * auVar74._8_4_;
    bVar13 = (bool)((byte)(uVar50 >> 3) & 1);
    auVar93._12_4_ = (uint)bVar13 * auVar84._12_4_ | (uint)!bVar13 * auVar74._12_4_;
    auVar93._16_4_ = (uint)((byte)(uVar50 >> 4) & 1) * auVar84._16_4_;
    auVar93._20_4_ = (uint)((byte)(uVar50 >> 5) & 1) * auVar84._20_4_;
    auVar93._24_4_ = (uint)((byte)(uVar50 >> 6) & 1) * auVar84._24_4_;
    auVar93._28_4_ = (uint)(byte)(uVar50 >> 7) * auVar84._28_4_;
    auVar74 = vxorps_avx512vl(auVar108,auVar108);
    bVar13 = (bool)((byte)(uVar50 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar50 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar50 >> 3) & 1);
    bVar23 = (bool)((byte)(uVar50 >> 4) & 1);
    bVar30 = (bool)((byte)(uVar50 >> 5) & 1);
    bVar37 = (bool)((byte)(uVar50 >> 6) & 1);
    bVar44 = SUB81(uVar50 >> 7,0);
    bVar22 = (bool)((byte)(uVar50 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar50 >> 2) & 1);
    bVar17 = (bool)((byte)(uVar50 >> 3) & 1);
    bVar24 = (bool)((byte)(uVar50 >> 4) & 1);
    bVar31 = (bool)((byte)(uVar50 >> 5) & 1);
    bVar38 = (bool)((byte)(uVar50 >> 6) & 1);
    bVar45 = SUB81(uVar50 >> 7,0);
    bVar29 = (bool)((byte)(uVar50 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar50 >> 2) & 1);
    bVar18 = (bool)((byte)(uVar50 >> 3) & 1);
    bVar25 = (bool)((byte)(uVar50 >> 4) & 1);
    bVar32 = (bool)((byte)(uVar50 >> 5) & 1);
    bVar39 = (bool)((byte)(uVar50 >> 6) & 1);
    bVar46 = SUB81(uVar50 >> 7,0);
    bVar36 = (bool)((byte)(uVar50 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar50 >> 2) & 1);
    bVar19 = (bool)((byte)(uVar50 >> 3) & 1);
    bVar26 = (bool)((byte)(uVar50 >> 4) & 1);
    bVar33 = (bool)((byte)(uVar50 >> 5) & 1);
    bVar40 = (bool)((byte)(uVar50 >> 6) & 1);
    bVar47 = SUB81(uVar50 >> 7,0);
    bVar43 = (bool)((byte)(uVar50 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar50 >> 2) & 1);
    bVar20 = (bool)((byte)(uVar50 >> 3) & 1);
    bVar27 = (bool)((byte)(uVar50 >> 4) & 1);
    bVar34 = (bool)((byte)(uVar50 >> 5) & 1);
    bVar41 = (bool)((byte)(uVar50 >> 6) & 1);
    bVar48 = SUB81(uVar50 >> 7,0);
    bVar3 = (bool)((byte)(uVar50 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar50 >> 2) & 1);
    bVar21 = (bool)((byte)(uVar50 >> 3) & 1);
    bVar28 = (bool)((byte)(uVar50 >> 4) & 1);
    bVar35 = (bool)((byte)(uVar50 >> 5) & 1);
    bVar42 = (bool)((byte)(uVar50 >> 6) & 1);
    bVar49 = SUB81(uVar50 >> 7,0);
    auVar86._0_4_ =
         auVar78._0_4_ + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
    auVar86._4_4_ = auVar78._4_4_ + _UNK_150b51904;
    auVar86._8_4_ = auVar78._8_4_ + _UNK_150b51908;
    auVar86._12_4_ = auVar78._12_4_ + _UNK_150b5190c;
    auVar86._16_4_ = auVar78._16_4_ + _UNK_150b51910;
    auVar86._20_4_ = auVar78._20_4_ + _UNK_150b51914;
    auVar86._24_4_ = auVar78._24_4_ + _UNK_150b51918;
    auVar86._28_4_ = auVar78._28_4_ + _UNK_150b5191c;
    vpcmpgtd_avx512vl(auVar75,auVar86);
    auVar55._4_4_ =
         (uint)bVar13 * (uint)((byte)(uVar50 >> 1) & 1) * auVar77._4_4_ | (uint)!bVar13 * iStack_11c
    ;
    auVar55._0_4_ =
         (uint)(bVar68 & 1) * (uint)(bVar68 & 1) * auVar77._0_4_ |
         (uint)!(bool)(bVar68 & 1) * local_120;
    auVar55._8_4_ =
         (uint)bVar7 * (uint)((byte)(uVar50 >> 2) & 1) * auVar77._8_4_ | (uint)!bVar7 * iStack_118;
    auVar55._12_4_ =
         (uint)bVar16 * (uint)((byte)(uVar50 >> 3) & 1) * auVar77._12_4_ |
         (uint)!bVar16 * iStack_114;
    auVar55._16_4_ =
         (uint)bVar23 * (uint)((byte)(uVar50 >> 4) & 1) * auVar77._16_4_ |
         (uint)!bVar23 * iStack_110;
    auVar55._20_4_ =
         (uint)bVar30 * (uint)((byte)(uVar50 >> 5) & 1) * auVar77._20_4_ |
         (uint)!bVar30 * iStack_10c;
    auVar55._24_4_ =
         (uint)bVar37 * (uint)((byte)(uVar50 >> 6) & 1) * auVar77._24_4_ |
         (uint)!bVar37 * iStack_108;
    auVar55._28_4_ =
         (uint)bVar44 * (uint)(byte)(uVar50 >> 7) * auVar77._28_4_ | (uint)!bVar44 * iStack_104;
    auVar56._4_4_ =
         (uint)bVar22 * ((uint)bVar2 * auVar79._4_4_ | (uint)!bVar2 * auVar72._4_4_) |
         (uint)!bVar22 * iStack_fc;
    auVar56._0_4_ =
         (uint)(bVar68 & 1) *
         ((uint)(bVar68 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar68 & 1) * auVar72._0_4_) |
         (uint)!(bool)(bVar68 & 1) * local_100;
    auVar56._8_4_ =
         (uint)bVar8 * ((uint)bVar5 * auVar79._8_4_ | (uint)!bVar5 * auVar72._8_4_) |
         (uint)!bVar8 * iStack_f8;
    auVar56._12_4_ =
         (uint)bVar17 * ((uint)bVar14 * auVar79._12_4_ | (uint)!bVar14 * auVar72._12_4_) |
         (uint)!bVar17 * iStack_f4;
    auVar56._16_4_ =
         (uint)bVar24 * (uint)((byte)(uVar50 >> 4) & 1) * auVar79._16_4_ | (uint)!bVar24 * iStack_f0
    ;
    auVar56._20_4_ =
         (uint)bVar31 * (uint)((byte)(uVar50 >> 5) & 1) * auVar79._20_4_ | (uint)!bVar31 * iStack_ec
    ;
    auVar56._24_4_ =
         (uint)bVar38 * (uint)((byte)(uVar50 >> 6) & 1) * auVar79._24_4_ | (uint)!bVar38 * iStack_e8
    ;
    auVar56._28_4_ =
         (uint)bVar45 * (uint)(byte)(uVar50 >> 7) * auVar79._28_4_ | (uint)!bVar45 * iStack_e4;
    auVar57._4_4_ =
         (uint)bVar29 * ((uint)bVar4 * auVar76._4_4_ | (uint)!bVar4 * auVar73._4_4_) |
         (uint)!bVar29 * iStack_dc;
    auVar57._0_4_ =
         (uint)(bVar68 & 1) *
         ((uint)(bVar68 & 1) * auVar76._0_4_ | (uint)!(bool)(bVar68 & 1) * auVar73._0_4_) |
         (uint)!(bool)(bVar68 & 1) * local_e0;
    auVar57._8_4_ =
         (uint)bVar9 * ((uint)bVar6 * auVar76._8_4_ | (uint)!bVar6 * auVar73._8_4_) |
         (uint)!bVar9 * iStack_d8;
    auVar57._12_4_ =
         (uint)bVar18 * ((uint)bVar15 * auVar76._12_4_ | (uint)!bVar15 * auVar73._12_4_) |
         (uint)!bVar18 * iStack_d4;
    auVar57._16_4_ =
         (uint)bVar25 * (uint)((byte)(uVar50 >> 4) & 1) * auVar76._16_4_ | (uint)!bVar25 * iStack_d0
    ;
    auVar57._20_4_ =
         (uint)bVar32 * (uint)((byte)(uVar50 >> 5) & 1) * auVar76._20_4_ | (uint)!bVar32 * iStack_cc
    ;
    auVar57._24_4_ =
         (uint)bVar39 * (uint)((byte)(uVar50 >> 6) & 1) * auVar76._24_4_ | (uint)!bVar39 * iStack_c8
    ;
    auVar57._28_4_ =
         (uint)bVar46 * (uint)(byte)(uVar50 >> 7) * auVar76._28_4_ | (uint)!bVar46 * iStack_c4;
    auVar52._4_4_ =
         (uint)bVar36 * (uint)((byte)(uVar50 >> 1) & 1) * auVar81._4_4_ | (uint)!bVar36 * iStack_17c
    ;
    auVar52._0_4_ =
         (uint)(bVar68 & 1) * (uint)(bVar68 & 1) * auVar81._0_4_ |
         (uint)!(bool)(bVar68 & 1) * local_180;
    auVar52._8_4_ =
         (uint)bVar10 * (uint)((byte)(uVar50 >> 2) & 1) * auVar81._8_4_ |
         (uint)!bVar10 * aiStack_178[0];
    auVar52._12_4_ =
         (uint)bVar19 * (uint)((byte)(uVar50 >> 3) & 1) * auVar81._12_4_ |
         (uint)!bVar19 * aiStack_178[1];
    auVar52._16_4_ =
         (uint)bVar26 * (uint)((byte)(uVar50 >> 4) & 1) * auVar81._16_4_ |
         (uint)!bVar26 * aiStack_178[2];
    auVar52._20_4_ =
         (uint)bVar33 * (uint)((byte)(uVar50 >> 5) & 1) * auVar81._20_4_ |
         (uint)!bVar33 * aiStack_178[3];
    auVar52._24_4_ =
         (uint)bVar40 * (uint)((byte)(uVar50 >> 6) & 1) * auVar81._24_4_ |
         (uint)!bVar40 * iStack_168;
    auVar52._28_4_ =
         (uint)bVar47 * (uint)(byte)(uVar50 >> 7) * auVar81._28_4_ | (uint)!bVar47 * iStack_164;
    auVar53._4_4_ =
         (uint)bVar43 * (uint)((byte)(uVar50 >> 1) & 1) * auVar82._4_4_ |
         (uint)!bVar43 * local_160[1];
    auVar53._0_4_ =
         (uint)(bVar68 & 1) * (uint)(bVar68 & 1) * auVar82._0_4_ |
         (uint)!(bool)(bVar68 & 1) * local_160[0];
    auVar53._8_4_ =
         (uint)bVar11 * (uint)((byte)(uVar50 >> 2) & 1) * auVar82._8_4_ |
         (uint)!bVar11 * local_160[2];
    auVar53._12_4_ =
         (uint)bVar20 * (uint)((byte)(uVar50 >> 3) & 1) * auVar82._12_4_ |
         (uint)!bVar20 * local_160[3];
    auVar53._16_4_ =
         (uint)bVar27 * (uint)((byte)(uVar50 >> 4) & 1) * auVar82._16_4_ |
         (uint)!bVar27 * iStack_150;
    auVar53._20_4_ =
         (uint)bVar34 * (uint)((byte)(uVar50 >> 5) & 1) * auVar82._20_4_ |
         (uint)!bVar34 * iStack_14c;
    auVar53._24_4_ =
         (uint)bVar41 * (uint)((byte)(uVar50 >> 6) & 1) * auVar82._24_4_ |
         (uint)!bVar41 * iStack_148;
    auVar53._28_4_ =
         (uint)bVar48 * (uint)(byte)(uVar50 >> 7) * auVar82._28_4_ | (uint)!bVar48 * iStack_144;
    auVar54._4_4_ =
         (uint)bVar3 * (uint)((byte)(uVar50 >> 1) & 1) * auVar83._4_4_ | (uint)!bVar3 * iStack_13c;
    auVar54._0_4_ =
         (uint)(bVar68 & 1) * (uint)(bVar68 & 1) * auVar83._0_4_ |
         (uint)!(bool)(bVar68 & 1) * local_140;
    auVar54._8_4_ =
         (uint)bVar12 * (uint)((byte)(uVar50 >> 2) & 1) * auVar83._8_4_ | (uint)!bVar12 * iStack_138
    ;
    auVar54._12_4_ =
         (uint)bVar21 * (uint)((byte)(uVar50 >> 3) & 1) * auVar83._12_4_ |
         (uint)!bVar21 * iStack_134;
    auVar54._16_4_ =
         (uint)bVar28 * (uint)((byte)(uVar50 >> 4) & 1) * auVar83._16_4_ |
         (uint)!bVar28 * iStack_130;
    auVar54._20_4_ =
         (uint)bVar35 * (uint)((byte)(uVar50 >> 5) & 1) * auVar83._20_4_ |
         (uint)!bVar35 * iStack_12c;
    auVar54._24_4_ =
         (uint)bVar42 * (uint)((byte)(uVar50 >> 6) & 1) * auVar83._24_4_ |
         (uint)!bVar42 * iStack_128;
    auVar54._28_4_ =
         (uint)bVar49 * (uint)(byte)(uVar50 >> 7) * auVar83._28_4_ | (uint)!bVar49 * iStack_124;
    auVar76 = vsubps_avx512vl(auVar55,auVar52);
    auVar77 = vsubps_avx512vl(auVar56,auVar53);
    auVar78 = vsubps_avx512vl(auVar57,auVar54);
    auVar75 = vmulps_avx512vl(auVar77,auVar77);
    auVar75 = vfmadd231ps_avx512vl(auVar75,auVar76,auVar76);
    auVar75 = vfmadd231ps_avx512vl(auVar75,auVar78,auVar78);
    auVar79 = vsqrtps_avx512vl(auVar75);
    auVar75._4_4_ = __real_38d1b717;
    auVar75._0_4_ = __real_38d1b717;
    auVar75._8_4_ = __real_38d1b717;
    auVar75._12_4_ = __real_38d1b717;
    auVar75._16_4_ = __real_38d1b717;
    auVar75._20_4_ = __real_38d1b717;
    auVar75._24_4_ = __real_38d1b717;
    auVar75._28_4_ = __real_38d1b717;
    uVar70 = vcmpps_avx512vl(auVar79,auVar75,1);
    auVar75 = vdivps_avx512vl(auVar76,auVar79);
    auVar76 = vdivps_avx512vl(auVar77,auVar79);
    auVar77 = vbroadcastss_avx512vl(ZEXT416((uint)param_4));
    auVar77 = vfnmadd213ps_avx512vl(auVar88,auVar77,auVar79);
    auVar81 = vbroadcastss_avx512vl(ZEXT416((uint)param_3));
    auVar81 = vmulps_avx512vl(auVar81,auVar77);
    auVar75 = vmulps_avx512vl(auVar81,auVar75);
    bVar68 = (byte)uVar70;
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar70 >> 2) & 1);
    bVar22 = (bool)((byte)(uVar70 >> 3) & 1);
    bVar29 = (bool)((byte)(uVar70 >> 4) & 1);
    bVar36 = (bool)((byte)(uVar70 >> 5) & 1);
    bVar43 = (bool)((byte)(uVar70 >> 6) & 1);
    bVar3 = SUB81(uVar70 >> 7,0);
    uVar69 = vcmpps_avx512vl(auVar77,ZEXT1632(auVar74),1);
    bVar1 = (byte)uVar69;
    iVar71 = auVar74._0_4_;
    auVar94._0_4_ =
         (uint)(bVar1 & 1) * iVar71 |
         (uint)!(bool)(bVar1 & 1) *
         ((uint)(bVar68 & 1) * auVar81._0_4_ | (uint)!(bool)(bVar68 & 1) * auVar75._0_4_);
    bVar4 = (bool)((byte)(uVar69 >> 1) & 1);
    iVar99 = auVar74._4_4_;
    auVar94._4_4_ =
         (uint)bVar4 * iVar99 |
         (uint)!bVar4 * ((uint)bVar2 * auVar81._4_4_ | (uint)!bVar2 * auVar75._4_4_);
    bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
    iVar101 = auVar74._8_4_;
    iVar100 = auVar74._12_4_;
    auVar94._8_4_ =
         (uint)bVar2 * iVar101 |
         (uint)!bVar2 * ((uint)bVar13 * auVar81._8_4_ | (uint)!bVar13 * auVar75._8_4_);
    bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
    auVar94._12_4_ =
         (uint)bVar2 * iVar100 |
         (uint)!bVar2 * ((uint)bVar22 * auVar81._12_4_ | (uint)!bVar22 * auVar75._12_4_);
    auVar94._16_4_ =
         (uint)!(bool)((byte)(uVar69 >> 4) & 1) *
         ((uint)bVar29 * auVar81._16_4_ | (uint)!bVar29 * auVar75._16_4_);
    auVar94._20_4_ =
         (uint)!(bool)((byte)(uVar69 >> 5) & 1) *
         ((uint)bVar36 * auVar81._20_4_ | (uint)!bVar36 * auVar75._20_4_);
    auVar94._24_4_ =
         (uint)!(bool)((byte)(uVar69 >> 6) & 1) *
         ((uint)bVar43 * auVar81._24_4_ | (uint)!bVar43 * auVar75._24_4_);
    auVar94._28_4_ =
         (uint)!SUB81(uVar69 >> 7,0) *
         ((uint)bVar3 * auVar81._28_4_ | (uint)!bVar3 * auVar75._28_4_);
    auVar75 = vaddps_avx512vl(auVar52,auVar94);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar80 | auVar103),uVar50,auVar75);
    auVar95._0_4_ = (uint)(bVar68 & 1) * iVar71 | (uint)!(bool)(bVar68 & 1) * auVar76._0_4_;
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    auVar95._4_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar76._4_4_;
    bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
    auVar95._8_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar76._8_4_;
    bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
    auVar95._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar76._12_4_;
    auVar95._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar76._16_4_;
    auVar95._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar76._20_4_;
    auVar95._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar76._24_4_;
    bVar2 = SUB81(uVar70 >> 7,0);
    auVar95._28_4_ =
         (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar76._28_4_;
    auVar75 = vmulps_avx512vl(auVar95,auVar81);
    auVar96._0_4_ = (uint)(bVar1 & 1) * iVar71 | (uint)!(bool)(bVar1 & 1) * auVar75._0_4_;
    bVar2 = (bool)((byte)(uVar69 >> 1) & 1);
    auVar96._4_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._4_4_;
    bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
    auVar96._8_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar75._8_4_;
    bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
    auVar96._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar75._12_4_;
    auVar96._16_4_ = (uint)!(bool)((byte)(uVar69 >> 4) & 1) * auVar75._16_4_;
    auVar96._20_4_ = (uint)!(bool)((byte)(uVar69 >> 5) & 1) * auVar75._20_4_;
    auVar96._24_4_ = (uint)!(bool)((byte)(uVar69 >> 6) & 1) * auVar75._24_4_;
    auVar96._28_4_ = (uint)!SUB81(uVar69 >> 7,0) * auVar75._28_4_;
    auVar75 = vaddps_avx512vl(auVar53,auVar96);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar80 | auVar102),uVar50,auVar75);
    auVar75 = vdivps_avx512vl(auVar78,auVar79);
    auVar97._0_4_ = (uint)(bVar68 & 1) * iVar71 | (uint)!(bool)(bVar68 & 1) * auVar75._0_4_;
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    auVar97._4_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._4_4_;
    bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
    auVar97._8_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar75._8_4_;
    bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
    auVar97._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar75._12_4_;
    auVar97._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar75._16_4_;
    auVar97._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar75._20_4_;
    auVar97._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar75._24_4_;
    auVar97._28_4_ = (uint)!SUB81(uVar70 >> 7,0) * auVar75._28_4_;
    auVar75 = vmulps_avx512vl(auVar97,auVar81);
    auVar98._0_4_ = (uint)(bVar1 & 1) * iVar71 | (uint)!(bool)(bVar1 & 1) * auVar75._0_4_;
    bVar2 = (bool)((byte)(uVar69 >> 1) & 1);
    auVar98._4_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._4_4_;
    bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
    auVar98._8_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar75._8_4_;
    bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
    auVar98._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar75._12_4_;
    auVar98._16_4_ = (uint)!(bool)((byte)(uVar69 >> 4) & 1) * auVar75._16_4_;
    auVar98._20_4_ = (uint)!(bool)((byte)(uVar69 >> 5) & 1) * auVar75._20_4_;
    auVar98._24_4_ = (uint)!(bool)((byte)(uVar69 >> 6) & 1) * auVar75._24_4_;
    auVar98._28_4_ = (uint)!SUB81(uVar69 >> 7,0) * auVar75._28_4_;
    auVar75 = vaddps_avx512vl(auVar54,auVar98);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar80 | auVar103),uVar50,auVar75);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar80 | auVar87),uVar50,auVar93);
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_CunfCuniCuni_avx512skx @ 1402e16f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_CunfCuniCuni_avx512skx
               (undefined4 *param_1,undefined1 (*param_2) [32],longlong param_3,longlong param_4,
               float param_5,uint param_6,undefined8 param_7,undefined1 (*param_8) [16])

{
  byte bVar1;
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
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  ulonglong uVar45;
  undefined1 auVar46 [32];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  longlong lVar55;
  undefined1 (*pauVar56) [32];
  longlong unaff_RBX;
  longlong lVar57;
  longlong unaff_RSI;
  longlong lVar58;
  uint uVar59;
  undefined1 *puVar60;
  uint uVar61;
  longlong unaff_R12;
  longlong lVar62;
  longlong lVar63;
  longlong lVar64;
  byte bVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  undefined1 auVar70 [16];
  int iVar96;
  undefined1 auVar68 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar69 [16];
  int iVar97;
  int iVar98;
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
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [64];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int aiStack_1b8 [4];
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
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
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
  
  auVar68 = vpsllw_avx512vl(*param_8,0xf);
  uVar66 = vpmovw2m_avx512vl(auVar68);
  puVar60 = (undefined1 *)(ulonglong)param_6;
  auVar71 = vpbroadcastd_avx512vl();
  uVar67 = vpcmpgtd_avx512vl(auVar71,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
  uVar67 = uVar66 & 0xff & uVar67;
  bVar65 = (byte)uVar67;
  if (bVar65 != 0) {
    if (bVar65 == 0xff) {
      auVar72 = param_2[1];
      auVar74 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,*param_2,auVar72);
      auVar73 = vmovdqa64_avx512vl(
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  );
      auVar73 = vpermi2d_avx512vl(auVar73,param_2[2],auVar72);
      auVar75 = vinserti32x4_avx512vl(auVar74,auVar73._0_16_,1);
      auVar74 = vshufi64x2_avx512vl(auVar74,auVar73,3);
      auVar72 = vpblendd_avx2(auVar72,*param_2,0x24);
      auVar72 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,auVar72,param_2[2]);
    }
    else {
      auVar72 = vpgatherdd_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
      auVar75._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar72._4_4_;
      auVar75._0_4_ = (uint)(bVar65 & 1) * auVar72._0_4_;
      auVar75._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar72._8_4_;
      auVar75._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar72._12_4_;
      auVar75._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar72._16_4_;
      auVar75._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar72._20_4_;
      auVar75._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar72._24_4_;
      auVar75._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar72._28_4_;
      auVar72 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + unaff_RBX));
      auVar74._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar72._4_4_;
      auVar74._0_4_ = (uint)(bVar65 & 1) * auVar72._0_4_;
      auVar74._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar72._8_4_;
      auVar74._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar72._12_4_;
      auVar74._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar72._16_4_;
      auVar74._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar72._20_4_;
      auVar74._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar72._24_4_;
      auVar74._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar72._28_4_;
      auVar73 = vpgatherdd_avx512vl(*(undefined4 *)*param_2);
      auVar72._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar73._4_4_;
      auVar72._0_4_ = (uint)(bVar65 & 1) * auVar73._0_4_;
      auVar72._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar73._8_4_;
      auVar72._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar73._12_4_;
      auVar72._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar73._16_4_;
      auVar72._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar73._20_4_;
      auVar72._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar73._24_4_;
      auVar72._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar73._28_4_;
    }
    uVar67 = vpcmpgtd_avx512vl(auVar71,
                               ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                              );
    local_220 = vmovdqu32_avx512vl(auVar75);
    local_200 = vmovdqu32_avx512vl(auVar74);
    bVar2 = (bool)((byte)uVar67 & 1);
    bVar3 = (bool)((byte)(uVar67 >> 1) & 1);
    bVar4 = (bool)((byte)(uVar67 >> 2) & 1);
    bVar10 = (bool)((byte)(uVar67 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar67 >> 4) & 1);
    bVar24 = (bool)((byte)(uVar67 >> 5) & 1);
    bVar31 = (bool)((byte)(uVar67 >> 6) & 1);
    bVar38 = SUB81(uVar67 >> 7,0);
    local_1e0 = (float)((uint)bVar2 * auVar72._0_4_ | (uint)!bVar2 * (int)local_1e0);
    fStack_1dc = (float)((uint)bVar3 * auVar72._4_4_ | (uint)!bVar3 * (int)fStack_1dc);
    fStack_1d8 = (float)((uint)bVar4 * auVar72._8_4_ | (uint)!bVar4 * (int)fStack_1d8);
    fStack_1d4 = (float)((uint)bVar10 * auVar72._12_4_ | (uint)!bVar10 * (int)fStack_1d4);
    fStack_1d0 = (float)((uint)bVar17 * auVar72._16_4_ | (uint)!bVar17 * (int)fStack_1d0);
    fStack_1cc = (float)((uint)bVar24 * auVar72._20_4_ | (uint)!bVar24 * (int)fStack_1cc);
    fStack_1c8 = (float)((uint)bVar31 * auVar72._24_4_ | (uint)!bVar31 * (int)fStack_1c8);
    fStack_1c4 = (float)((uint)bVar38 * auVar72._28_4_ | (uint)!bVar38 * (int)fStack_1c4);
  }
  uVar59 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar59 = param_6;
  }
  auVar72 = vpbroadcastd_avx512vl();
  uVar59 = uVar59 & 0xfffffff8;
  if ((int)uVar59 < 1) {
    uVar61 = 0;
  }
  else {
    uVar61 = 0;
    auVar101 = ZEXT1664((undefined1  [16])0x0);
    vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar74 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar73 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                                );
    auVar75 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar76 = vmovdqa64_avx512vl(
                                ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                );
    auVar77 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar78 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                );
    vmovdqa64_avx512vl(___ymm_00000054000000480000003c0000003000000024000000180000000c00000000);
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    do {
      fVar54 = fStack_1c4;
      fVar53 = fStack_1c8;
      fVar52 = fStack_1cc;
      fVar51 = fStack_1d0;
      fVar50 = fStack_1d4;
      fVar49 = fStack_1d8;
      fVar48 = fStack_1dc;
      fVar47 = local_1e0;
      pauVar56 = param_2 + 3;
      auVar80 = vpaddd_avx512vl(auVar72,local_220);
      vpslld_avx512vl(auVar80,4);
      auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)puVar60));
      auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar61));
      auVar82 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)puVar60));
      auVar83 = vpaddd_avx512vl(auVar72,local_200);
      auVar83 = vpslld_avx512vl(auVar83,4);
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar61));
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)puVar60));
      in_ZMM29 = ZEXT3264(auVar85);
      auVar86 = vpbroadcastd_avx512vl();
      auVar86 = vpaddd_avx512vl(auVar86,auVar73);
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      in_ZMM30 = ZEXT3264(auVar87);
      lVar58 = (longlong)(int)local_200._12_4_;
      lVar57 = (longlong)(int)local_200._8_4_;
      lVar63 = (longlong)(int)local_200._4_4_;
      lVar62 = (longlong)(int)local_200._0_4_;
      auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      lVar64 = (longlong)(int)local_200._28_4_;
      unaff_R12 = (longlong)(int)local_200._24_4_;
      lVar55 = (longlong)(int)local_200._20_4_;
      unaff_RSI = (longlong)(int)local_200._16_4_;
      uVar67 = vpcmpgtd_avx512vl(auVar71,auVar86);
      bVar65 = (byte)uVar67;
      if (bVar65 != 0) {
        if (bVar65 == 0xff) {
          auVar86 = param_2[4];
          auVar79 = vpblendd_avx2(auVar86,*pauVar56,0x24);
          auVar89 = vpermt2d_avx512vl(*pauVar56,auVar76,auVar86);
          auVar90 = vpermt2d_avx512vl(auVar79,auVar78,param_2[5]);
          auVar86 = vpermt2d_avx512vl(param_2[5],auVar77,auVar86);
          auVar79._16_16_ = ZEXT116(0) * auVar89._16_16_ | ZEXT116(1) * auVar86._0_16_;
          auVar79._0_16_ = ZEXT116(0) * auVar86._0_16_ | ZEXT116(1) * auVar89._0_16_;
          auVar86 = vperm2i128_avx2(auVar89,auVar86,0x31);
        }
        else {
          auVar86 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar56 + lVar58));
          auVar79._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar86._4_4_;
          auVar79._0_4_ = (uint)(bVar65 & 1) * auVar86._0_4_;
          auVar79._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar86._8_4_;
          auVar79._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar86._12_4_;
          auVar79._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar86._16_4_;
          auVar79._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar86._20_4_;
          auVar79._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar86._24_4_;
          auVar79._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar86._28_4_;
          auVar89 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar56 + param_3));
          auVar86._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar89._4_4_;
          auVar86._0_4_ = (uint)(bVar65 & 1) * auVar89._0_4_;
          auVar86._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar89._8_4_;
          auVar86._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar89._12_4_;
          auVar86._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar89._16_4_;
          auVar86._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar89._20_4_;
          auVar86._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar89._24_4_;
          auVar86._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar89._28_4_;
          auVar89 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar56 + uVar59));
          auVar90._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar89._4_4_;
          auVar90._0_4_ = (uint)(bVar65 & 1) * auVar89._0_4_;
          auVar90._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar89._8_4_;
          auVar90._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar89._12_4_;
          auVar90._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar89._16_4_;
          auVar90._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar89._20_4_;
          auVar90._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar89._24_4_;
          auVar90._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar89._28_4_;
        }
        local_220 = vmovdqu32_avx512vl(auVar79);
        puVar60 = local_200;
        local_200 = vmovdqu32_avx512vl(auVar86);
        bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar67 >> 2) & 1);
        bVar4 = (bool)((byte)(uVar67 >> 3) & 1);
        bVar10 = (bool)((byte)(uVar67 >> 4) & 1);
        bVar17 = (bool)((byte)(uVar67 >> 5) & 1);
        bVar24 = (bool)((byte)(uVar67 >> 6) & 1);
        bVar31 = SUB81(uVar67 >> 7,0);
        local_1e0 = (float)((uint)(bVar65 & 1) * auVar90._0_4_ |
                           (uint)!(bool)(bVar65 & 1) * (int)local_1e0);
        fStack_1dc = (float)((uint)bVar2 * auVar90._4_4_ | (uint)!bVar2 * (int)fStack_1dc);
        fStack_1d8 = (float)((uint)bVar3 * auVar90._8_4_ | (uint)!bVar3 * (int)fStack_1d8);
        fStack_1d4 = (float)((uint)bVar4 * auVar90._12_4_ | (uint)!bVar4 * (int)fStack_1d4);
        fStack_1d0 = (float)((uint)bVar10 * auVar90._16_4_ | (uint)!bVar10 * (int)fStack_1d0);
        fStack_1cc = (float)((uint)bVar17 * auVar90._20_4_ | (uint)!bVar17 * (int)fStack_1cc);
        fStack_1c8 = (float)((uint)bVar24 * auVar90._24_4_ | (uint)!bVar24 * (int)fStack_1c8);
        fStack_1c4 = (float)((uint)bVar31 * auVar90._28_4_ | (uint)!bVar31 * (int)fStack_1c4);
      }
      auVar68 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar62)),(uint)*(byte *)(param_3 + lVar63),1
                           );
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar57),2);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar58),3);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + unaff_RSI),4);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar55),5);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + unaff_R12),6);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar64),7);
      auVar86 = vpmovzxbd_avx2(auVar68);
      auVar86 = vpslld_avx2(auVar86,2);
      vpmovzxdq_avx2(auVar86._16_16_);
      vpmovzxdq_avx2(auVar86._0_16_);
      auVar68 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + unaff_R12));
      auVar69 = vgatherqps_avx512vl(*(undefined8 *)
                                     (param_4 + (ulonglong)*(byte *)(param_3 + lVar62)));
      auVar80 = vsubps_avx512vl(auVar80,auVar84);
      auVar81 = vsubps_avx512vl(auVar81,auVar85);
      auVar82 = vsubps_avx512vl(auVar82,auVar87);
      auVar104._0_4_ =
           auVar82._0_4_ * auVar82._0_4_ +
           auVar80._0_4_ * auVar80._0_4_ + auVar81._0_4_ * auVar81._0_4_;
      auVar104._4_4_ =
           auVar82._4_4_ * auVar82._4_4_ +
           auVar80._4_4_ * auVar80._4_4_ + auVar81._4_4_ * auVar81._4_4_;
      auVar104._8_4_ =
           auVar82._8_4_ * auVar82._8_4_ +
           auVar80._8_4_ * auVar80._8_4_ + auVar81._8_4_ * auVar81._8_4_;
      auVar104._12_4_ =
           auVar82._12_4_ * auVar82._12_4_ +
           auVar80._12_4_ * auVar80._12_4_ + auVar81._12_4_ * auVar81._12_4_;
      auVar104._16_4_ =
           auVar82._16_4_ * auVar82._16_4_ +
           auVar80._16_4_ * auVar80._16_4_ + auVar81._16_4_ * auVar81._16_4_;
      auVar104._20_4_ =
           auVar82._20_4_ * auVar82._20_4_ +
           auVar80._20_4_ * auVar80._20_4_ + auVar81._20_4_ * auVar81._20_4_;
      auVar104._24_4_ =
           auVar82._24_4_ * auVar82._24_4_ +
           auVar80._24_4_ * auVar80._24_4_ + auVar81._24_4_ * auVar81._24_4_;
      auVar104._28_4_ =
           auVar82._28_4_ * auVar82._28_4_ +
           auVar80._28_4_ * auVar80._28_4_ + auVar81._28_4_ * auVar81._28_4_;
      auVar86 = vsqrtps_avx(auVar104);
      uVar67 = vcmpps_avx512vl(auVar86,auVar75,1);
      auVar80 = vdivps_avx(auVar80,auVar86);
      auVar81 = vdivps_avx(auVar81,auVar86);
      auVar82 = vdivps_avx(auVar82,auVar86);
      bVar65 = (byte)uVar67;
      auVar89._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar81._4_4_;
      auVar89._0_4_ = (uint)!(bool)(bVar65 & 1) * auVar81._0_4_;
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      iVar96 = auVar101._8_4_;
      auVar89._8_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar81._8_4_;
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      iVar97 = auVar101._12_4_;
      auVar89._12_4_ = (uint)bVar2 * iVar97 | (uint)!bVar2 * auVar81._12_4_;
      auVar89._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar81._16_4_;
      auVar89._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar81._20_4_;
      iVar98 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
      auVar89._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar81._24_4_;
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar89._28_4_ = (uint)bVar2 * iVar98 | (uint)!bVar2 * auVar81._28_4_;
      auVar81._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar82._4_4_;
      auVar81._0_4_ = (uint)!(bool)(bVar65 & 1) * auVar82._0_4_;
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar81._8_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar82._8_4_;
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar81._12_4_ = (uint)bVar2 * iVar97 | (uint)!bVar2 * auVar82._12_4_;
      auVar81._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar82._16_4_;
      auVar81._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar82._20_4_;
      auVar81._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar82._24_4_;
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar81._28_4_ = (uint)bVar2 * iVar98 | (uint)!bVar2 * auVar82._28_4_;
      auVar102._0_4_ = -(param_5 * fVar47) + auVar86._0_4_;
      auVar102._4_4_ = -(param_5 * fVar48) + auVar86._4_4_;
      auVar102._8_4_ = -(param_5 * fVar49) + auVar86._8_4_;
      auVar102._12_4_ = -(param_5 * fVar50) + auVar86._12_4_;
      auVar102._16_4_ = -(param_5 * fVar51) + auVar86._16_4_;
      auVar102._20_4_ = -(param_5 * fVar52) + auVar86._20_4_;
      auVar102._24_4_ = -(param_5 * fVar53) + auVar86._24_4_;
      auVar102._28_4_ = -(param_5 * fVar54) + auVar86._28_4_;
      auVar103._0_4_ = auVar102._0_4_ * auVar68._0_4_;
      auVar103._4_4_ = auVar102._4_4_ * auVar68._4_4_;
      auVar103._8_4_ = auVar102._8_4_ * auVar68._8_4_;
      auVar103._12_4_ = auVar102._12_4_ * auVar68._12_4_;
      auVar103._16_4_ = auVar102._16_4_ * auVar69._0_4_;
      auVar103._20_4_ = auVar102._20_4_ * auVar69._4_4_;
      auVar103._24_4_ = auVar102._24_4_ * auVar69._8_4_;
      auVar103._28_4_ = auVar102._28_4_ * auVar69._12_4_;
      bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
      bVar3 = (bool)((byte)(uVar67 >> 2) & 1);
      bVar4 = (bool)((byte)(uVar67 >> 3) & 1);
      bVar10 = (bool)((byte)(uVar67 >> 4) & 1);
      bVar17 = (bool)((byte)(uVar67 >> 5) & 1);
      bVar24 = (bool)((byte)(uVar67 >> 6) & 1);
      bVar31 = SUB81(uVar67 >> 7,0);
      uVar67 = vcmpps_avx512vl(auVar102,auVar101._0_32_,1);
      bVar1 = (byte)uVar67;
      auVar82._4_4_ =
           (uint)!(bool)((byte)(uVar67 >> 1) & 1) *
           ((uint)bVar2 * (int)auVar103._4_4_ | (uint)!bVar2 * (int)(auVar103._4_4_ * auVar80._4_4_)
           );
      auVar82._0_4_ =
           (uint)!(bool)(bVar1 & 1) *
           ((uint)(bVar65 & 1) * (int)auVar103._0_4_ |
           (uint)!(bool)(bVar65 & 1) * (int)(auVar103._0_4_ * auVar80._0_4_));
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar82._8_4_ =
           (uint)bVar2 * iVar96 |
           (uint)!bVar2 *
           ((uint)bVar3 * (int)auVar103._8_4_ | (uint)!bVar3 * (int)(auVar103._8_4_ * auVar80._8_4_)
           );
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar82._12_4_ =
           (uint)bVar2 * iVar97 |
           (uint)!bVar2 *
           ((uint)bVar4 * (int)auVar103._12_4_ |
           (uint)!bVar4 * (int)(auVar103._12_4_ * auVar80._12_4_));
      auVar82._16_4_ =
           (uint)!(bool)((byte)(uVar67 >> 4) & 1) *
           ((uint)bVar10 * (int)auVar103._16_4_ |
           (uint)!bVar10 * (int)(auVar103._16_4_ * auVar80._16_4_));
      auVar82._20_4_ =
           (uint)!(bool)((byte)(uVar67 >> 5) & 1) *
           ((uint)bVar17 * (int)auVar103._20_4_ |
           (uint)!bVar17 * (int)(auVar103._20_4_ * auVar80._20_4_));
      auVar82._24_4_ =
           (uint)!(bool)((byte)(uVar67 >> 6) & 1) *
           ((uint)bVar24 * (int)auVar103._24_4_ |
           (uint)!bVar24 * (int)(auVar103._24_4_ * auVar80._24_4_));
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar82._28_4_ =
           (uint)bVar2 * iVar98 |
           (uint)!bVar2 *
           ((uint)bVar31 * (int)auVar103._28_4_ |
           (uint)!bVar31 * (int)(auVar103._28_4_ * auVar80._28_4_));
      auVar80 = vaddps_avx512vl(auVar84,auVar82);
      in_ZMM31 = ZEXT3264(auVar80);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar81,0xffff,auVar80);
      auVar80 = vmulps_avx512vl(auVar89,auVar103);
      auVar84._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar80._4_4_;
      auVar84._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar80._0_4_;
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar84._8_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar80._8_4_;
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar84._12_4_ = (uint)bVar2 * iVar97 | (uint)!bVar2 * auVar80._12_4_;
      auVar84._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar80._16_4_;
      auVar84._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar80._20_4_;
      auVar84._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar80._24_4_;
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar84._28_4_ =
           (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar80._28_4_;
      auVar80 = vaddps_avx512vl(auVar85,auVar84);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar89,0xffff,auVar80);
      auVar80 = vmulps_avx512vl(auVar81,auVar103);
      auVar85._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar80._4_4_;
      auVar85._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar80._0_4_;
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar85._8_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar80._8_4_;
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar85._12_4_ = (uint)bVar2 * iVar97 | (uint)!bVar2 * auVar80._12_4_;
      auVar85._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar80._16_4_;
      auVar85._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar80._20_4_;
      auVar85._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar80._24_4_;
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar85._28_4_ =
           (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar80._28_4_;
      auVar80 = vaddps_avx512vl(auVar87,auVar85);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar103,0xffff,auVar80);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar83 | auVar74),0xffff,auVar88);
      uVar61 = uVar61 + 8;
      param_2 = pauVar56;
    } while ((int)uVar61 < (int)uVar59);
  }
  if ((int)uVar61 < (int)param_6) {
    auVar74 = vpbroadcastd_avx512vl();
    auVar73 = vpord_avx512vl(auVar74,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    uVar45 = vpcmpgtd_avx512vl(auVar71,auVar73);
    auVar77._4_4_ = fStack_1dc;
    auVar77._0_4_ = local_1e0;
    auVar77._8_4_ = fStack_1d8;
    auVar77._12_4_ = fStack_1d4;
    auVar77._16_4_ = fStack_1d0;
    auVar77._20_4_ = fStack_1cc;
    auVar77._24_4_ = fStack_1c8;
    auVar77._28_4_ = fStack_1c4;
    auVar75 = vmovdqa32_avx512vl(local_200);
    bVar65 = (byte)uVar45;
    lVar57 = (longlong)(int)((uint)((byte)(uVar45 >> 4) & 1) * auVar75._16_4_);
    lVar55 = (longlong)(int)((uint)((byte)(uVar45 >> 6) & 1) * auVar75._24_4_);
    auVar68 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)((uint)(bVar65 & 1) * auVar75._0_4_))),
                          (uint)*(byte *)(param_3 +
                                         (int)((uint)((byte)(uVar45 >> 1) & 1) * auVar75._4_4_)),1);
    auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 +
                                                 (int)((uint)((byte)(uVar45 >> 2) & 1) *
                                                      auVar75._8_4_)),2);
    auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 +
                                                 (int)((uint)((byte)(uVar45 >> 3) & 1) *
                                                      auVar75._12_4_)),3);
    auVar73._0_4_ = auVar72._0_4_ + local_220._0_4_;
    auVar73._4_4_ = auVar72._4_4_ + local_220._4_4_;
    auVar73._8_4_ = auVar72._8_4_ + local_220._8_4_;
    auVar73._12_4_ = auVar72._12_4_ + local_220._12_4_;
    auVar73._16_4_ = auVar72._16_4_ + local_220._16_4_;
    auVar73._20_4_ = auVar72._20_4_ + local_220._20_4_;
    auVar73._24_4_ = auVar72._24_4_ + local_220._24_4_;
    auVar73._28_4_ = auVar72._28_4_ + local_220._28_4_;
    vpslld_avx2(auVar73,4);
    auVar73 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar78 = vgatherdps_avx512vl(*param_1);
    auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    auVar76._0_4_ = local_200._0_4_ + auVar72._0_4_;
    auVar76._4_4_ = local_200._4_4_ + auVar72._4_4_;
    auVar76._8_4_ = local_200._8_4_ + auVar72._8_4_;
    auVar76._12_4_ = local_200._12_4_ + auVar72._12_4_;
    auVar76._16_4_ = local_200._16_4_ + auVar72._16_4_;
    auVar76._20_4_ = local_200._20_4_ + auVar72._20_4_;
    auVar76._24_4_ = local_200._24_4_ + auVar72._24_4_;
    auVar76._28_4_ = local_200._28_4_ + auVar72._28_4_;
    auVar100._4_4_ = __real_00000008;
    auVar100._0_4_ = __real_00000008;
    auVar100._8_4_ = __real_00000008;
    auVar100._12_4_ = __real_00000008;
    auVar100._16_4_ = __real_00000008;
    auVar100._20_4_ = __real_00000008;
    auVar100._24_4_ = __real_00000008;
    auVar100._28_4_ = __real_00000008;
    auVar72 = vgatherdps_avx512vl(*param_1);
    auVar84 = vpslld_avx2(auVar76,4);
    auVar76 = vgatherdps_avx512vl(*param_1);
    auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar57),4);
    auVar68 = vpinsrb_avx512bw(auVar68,(uint)*(byte *)(param_3 +
                                                      (int)((uint)((byte)(uVar45 >> 5) & 1) *
                                                           auVar75._20_4_)),5);
    auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_1b8));
    auVar82 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar57));
    auVar68 = vpinsrb_avx512bw(auVar68,(uint)*(byte *)(param_3 + lVar55),6);
    auVar68 = vpinsrb_avx512bw(auVar68,(uint)*(byte *)(param_3 +
                                                      (int)((uint)(byte)(uVar45 >> 7) *
                                                           auVar75._28_4_)),7);
    auVar75 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar55));
    auVar91._4_4_ = (uint)((byte)(uVar45 >> 1) & 1) * auVar75._4_4_;
    auVar91._0_4_ = (uint)(bVar65 & 1) * auVar75._0_4_;
    auVar91._8_4_ = (uint)((byte)(uVar45 >> 2) & 1) * auVar75._8_4_;
    auVar91._12_4_ = (uint)((byte)(uVar45 >> 3) & 1) * auVar75._12_4_;
    auVar91._16_4_ = (uint)((byte)(uVar45 >> 4) & 1) * auVar75._16_4_;
    auVar91._20_4_ = (uint)((byte)(uVar45 >> 5) & 1) * auVar75._20_4_;
    auVar91._24_4_ = (uint)((byte)(uVar45 >> 6) & 1) * auVar75._24_4_;
    auVar91._28_4_ = (uint)(byte)(uVar45 >> 7) * auVar75._28_4_;
    bVar3 = (bool)((byte)(uVar45 >> 1) & 1);
    bVar38 = (bool)((byte)(uVar45 >> 2) & 1);
    bVar11 = (bool)((byte)(uVar45 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar45 >> 4) & 1);
    bVar25 = (bool)((byte)(uVar45 >> 5) & 1);
    bVar32 = (bool)((byte)(uVar45 >> 6) & 1);
    bVar39 = SUB81(uVar45 >> 7,0);
    bVar4 = (bool)((byte)(uVar45 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar45 >> 2) & 1);
    bVar12 = (bool)((byte)(uVar45 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar45 >> 4) & 1);
    bVar26 = (bool)((byte)(uVar45 >> 5) & 1);
    bVar33 = (bool)((byte)(uVar45 >> 6) & 1);
    bVar40 = SUB81(uVar45 >> 7,0);
    bVar10 = (bool)((byte)(uVar45 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar45 >> 2) & 1);
    bVar13 = (bool)((byte)(uVar45 >> 3) & 1);
    bVar20 = (bool)((byte)(uVar45 >> 4) & 1);
    bVar27 = (bool)((byte)(uVar45 >> 5) & 1);
    bVar34 = (bool)((byte)(uVar45 >> 6) & 1);
    bVar41 = SUB81(uVar45 >> 7,0);
    bVar17 = (bool)((byte)(uVar45 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar45 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar45 >> 3) & 1);
    bVar21 = (bool)((byte)(uVar45 >> 4) & 1);
    bVar28 = (bool)((byte)(uVar45 >> 5) & 1);
    bVar35 = (bool)((byte)(uVar45 >> 6) & 1);
    bVar42 = SUB81(uVar45 >> 7,0);
    bVar24 = (bool)((byte)(uVar45 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar45 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar45 >> 3) & 1);
    bVar22 = (bool)((byte)(uVar45 >> 4) & 1);
    bVar29 = (bool)((byte)(uVar45 >> 5) & 1);
    bVar36 = (bool)((byte)(uVar45 >> 6) & 1);
    bVar43 = SUB81(uVar45 >> 7,0);
    bVar31 = (bool)((byte)(uVar45 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar45 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar45 >> 3) & 1);
    bVar23 = (bool)((byte)(uVar45 >> 4) & 1);
    bVar30 = (bool)((byte)(uVar45 >> 5) & 1);
    bVar37 = (bool)((byte)(uVar45 >> 6) & 1);
    bVar44 = SUB81(uVar45 >> 7,0);
    auVar74 = vpaddd_avx512vl(auVar74,
                              ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                             );
    vpcmpgtd_avx512vl(auVar71,auVar74);
    auVar71 = vpmovzxbd_avx512vl(auVar68);
    auVar71 = vpslld_avx2(auVar71,2);
    vpmovzxdq_avx2(auVar71._16_16_);
    vpmovzxdq_avx2(auVar71._0_16_);
    uVar67 = uVar45 >> 4 & 0xf;
    auVar68 = vgatherqps_avx512vl(*(undefined8 *)(param_4 * 2));
    auVar69 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + (longlong)param_1));
    bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
    auVar70._8_8_ = (ulonglong)bVar2 * auVar69._8_8_ | (ulonglong)!bVar2 * SUB168(ZEXT816(0),4);
    auVar70._0_8_ = (ulonglong)((byte)uVar67 & 1) * auVar69._0_8_;
    auVar87._4_4_ =
         (uint)bVar3 * (uint)((byte)(uVar45 >> 1) & 1) * auVar78._4_4_ | (uint)!bVar3 * iStack_15c;
    auVar87._0_4_ =
         (uint)(bVar65 & 1) * (uint)(bVar65 & 1) * auVar78._0_4_ |
         (uint)!(bool)(bVar65 & 1) * local_160;
    auVar87._8_4_ =
         (uint)bVar38 * (uint)((byte)(uVar45 >> 2) & 1) * auVar78._8_4_ | (uint)!bVar38 * iStack_158
    ;
    auVar87._12_4_ =
         (uint)bVar11 * (uint)((byte)(uVar45 >> 3) & 1) * auVar78._12_4_ |
         (uint)!bVar11 * iStack_154;
    auVar87._16_4_ =
         (uint)bVar18 * (uint)((byte)(uVar45 >> 4) & 1) * auVar78._16_4_ |
         (uint)!bVar18 * iStack_150;
    auVar87._20_4_ =
         (uint)bVar25 * (uint)((byte)(uVar45 >> 5) & 1) * auVar78._20_4_ |
         (uint)!bVar25 * iStack_14c;
    auVar87._24_4_ =
         (uint)bVar32 * (uint)((byte)(uVar45 >> 6) & 1) * auVar78._24_4_ |
         (uint)!bVar32 * iStack_148;
    auVar87._28_4_ =
         (uint)bVar39 * (uint)(byte)(uVar45 >> 7) * auVar78._28_4_ | (uint)!bVar39 * iStack_144;
    auVar88._4_4_ =
         (uint)bVar4 * (uint)((byte)(uVar45 >> 1) & 1) * auVar80._4_4_ | (uint)!bVar4 * iStack_13c;
    auVar88._0_4_ =
         (uint)(bVar65 & 1) * (uint)(bVar65 & 1) * auVar80._0_4_ |
         (uint)!(bool)(bVar65 & 1) * local_140;
    auVar88._8_4_ =
         (uint)bVar5 * (uint)((byte)(uVar45 >> 2) & 1) * auVar80._8_4_ | (uint)!bVar5 * iStack_138;
    auVar88._12_4_ =
         (uint)bVar12 * (uint)((byte)(uVar45 >> 3) & 1) * auVar80._12_4_ |
         (uint)!bVar12 * iStack_134;
    auVar88._16_4_ =
         (uint)bVar19 * (uint)((byte)(uVar45 >> 4) & 1) * auVar80._16_4_ |
         (uint)!bVar19 * iStack_130;
    auVar88._20_4_ =
         (uint)bVar26 * (uint)((byte)(uVar45 >> 5) & 1) * auVar80._20_4_ |
         (uint)!bVar26 * iStack_12c;
    auVar88._24_4_ =
         (uint)bVar33 * (uint)((byte)(uVar45 >> 6) & 1) * auVar80._24_4_ |
         (uint)!bVar33 * iStack_128;
    auVar88._28_4_ =
         (uint)bVar40 * (uint)(byte)(uVar45 >> 7) * auVar80._28_4_ | (uint)!bVar40 * iStack_124;
    auVar46._4_4_ =
         (uint)bVar10 * (uint)((byte)(uVar45 >> 1) & 1) * auVar72._4_4_ | (uint)!bVar10 * iStack_11c
    ;
    auVar46._0_4_ =
         (uint)(bVar65 & 1) * (uint)(bVar65 & 1) * auVar72._0_4_ |
         (uint)!(bool)(bVar65 & 1) * local_120;
    auVar46._8_4_ =
         (uint)bVar6 * (uint)((byte)(uVar45 >> 2) & 1) * auVar72._8_4_ | (uint)!bVar6 * iStack_118;
    auVar46._12_4_ =
         (uint)bVar13 * (uint)((byte)(uVar45 >> 3) & 1) * auVar72._12_4_ |
         (uint)!bVar13 * iStack_114;
    auVar46._16_4_ =
         (uint)bVar20 * (uint)((byte)(uVar45 >> 4) & 1) * auVar72._16_4_ |
         (uint)!bVar20 * iStack_110;
    auVar46._20_4_ =
         (uint)bVar27 * (uint)((byte)(uVar45 >> 5) & 1) * auVar72._20_4_ |
         (uint)!bVar27 * iStack_10c;
    auVar46._24_4_ =
         (uint)bVar34 * (uint)((byte)(uVar45 >> 6) & 1) * auVar72._24_4_ |
         (uint)!bVar34 * iStack_108;
    auVar46._28_4_ =
         (uint)bVar41 * (uint)(byte)(uVar45 >> 7) * auVar72._28_4_ | (uint)!bVar41 * iStack_104;
    auVar78._4_4_ =
         (uint)bVar17 * (uint)((byte)(uVar45 >> 1) & 1) * auVar76._4_4_ | (uint)!bVar17 * iStack_1bc
    ;
    auVar78._0_4_ =
         (uint)(bVar65 & 1) * (uint)(bVar65 & 1) * auVar76._0_4_ |
         (uint)!(bool)(bVar65 & 1) * local_1c0;
    auVar78._8_4_ =
         (uint)bVar7 * (uint)((byte)(uVar45 >> 2) & 1) * auVar76._8_4_ |
         (uint)!bVar7 * aiStack_1b8[0];
    auVar78._12_4_ =
         (uint)bVar14 * (uint)((byte)(uVar45 >> 3) & 1) * auVar76._12_4_ |
         (uint)!bVar14 * aiStack_1b8[1];
    auVar78._16_4_ =
         (uint)bVar21 * (uint)((byte)(uVar45 >> 4) & 1) * auVar76._16_4_ |
         (uint)!bVar21 * aiStack_1b8[2];
    auVar78._20_4_ =
         (uint)bVar28 * (uint)((byte)(uVar45 >> 5) & 1) * auVar76._20_4_ |
         (uint)!bVar28 * aiStack_1b8[3];
    auVar78._24_4_ =
         (uint)bVar35 * (uint)((byte)(uVar45 >> 6) & 1) * auVar76._24_4_ |
         (uint)!bVar35 * iStack_1a8;
    auVar78._28_4_ =
         (uint)bVar42 * (uint)(byte)(uVar45 >> 7) * auVar76._28_4_ | (uint)!bVar42 * iStack_1a4;
    auVar80._4_4_ =
         (uint)bVar24 * (uint)((byte)(uVar45 >> 1) & 1) * auVar81._4_4_ | (uint)!bVar24 * iStack_19c
    ;
    auVar80._0_4_ =
         (uint)(bVar65 & 1) * (uint)(bVar65 & 1) * auVar81._0_4_ |
         (uint)!(bool)(bVar65 & 1) * local_1a0;
    auVar80._8_4_ =
         (uint)bVar8 * (uint)((byte)(uVar45 >> 2) & 1) * auVar81._8_4_ | (uint)!bVar8 * iStack_198;
    auVar80._12_4_ =
         (uint)bVar15 * (uint)((byte)(uVar45 >> 3) & 1) * auVar81._12_4_ |
         (uint)!bVar15 * iStack_194;
    auVar80._16_4_ =
         (uint)bVar22 * (uint)((byte)(uVar45 >> 4) & 1) * auVar81._16_4_ |
         (uint)!bVar22 * iStack_190;
    auVar80._20_4_ =
         (uint)bVar29 * (uint)((byte)(uVar45 >> 5) & 1) * auVar81._20_4_ |
         (uint)!bVar29 * iStack_18c;
    auVar80._24_4_ =
         (uint)bVar36 * (uint)((byte)(uVar45 >> 6) & 1) * auVar81._24_4_ |
         (uint)!bVar36 * iStack_188;
    auVar80._28_4_ =
         (uint)bVar43 * (uint)(byte)(uVar45 >> 7) * auVar81._28_4_ | (uint)!bVar43 * iStack_184;
    auVar72 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)((byte)(uVar45 >> 1) & 1) * auVar68._8_8_,
                                           (ulonglong)(bVar65 & 1) * auVar68._0_8_)),auVar70,1);
    auVar83._4_4_ =
         (uint)bVar31 * (uint)((byte)(uVar45 >> 1) & 1) * auVar82._4_4_ | (uint)!bVar31 * iStack_17c
    ;
    auVar83._0_4_ =
         (uint)(bVar65 & 1) * (uint)(bVar65 & 1) * auVar82._0_4_ |
         (uint)!(bool)(bVar65 & 1) * local_180;
    auVar83._8_4_ =
         (uint)bVar9 * (uint)((byte)(uVar45 >> 2) & 1) * auVar82._8_4_ | (uint)!bVar9 * iStack_178;
    auVar83._12_4_ =
         (uint)bVar16 * (uint)((byte)(uVar45 >> 3) & 1) * auVar82._12_4_ |
         (uint)!bVar16 * iStack_174;
    auVar83._16_4_ =
         (uint)bVar23 * (uint)((byte)(uVar45 >> 4) & 1) * auVar82._16_4_ |
         (uint)!bVar23 * iStack_170;
    auVar83._20_4_ =
         (uint)bVar30 * (uint)((byte)(uVar45 >> 5) & 1) * auVar82._20_4_ |
         (uint)!bVar30 * iStack_16c;
    auVar83._24_4_ =
         (uint)bVar37 * (uint)((byte)(uVar45 >> 6) & 1) * auVar82._24_4_ |
         (uint)!bVar37 * iStack_168;
    auVar83._28_4_ =
         (uint)bVar44 * (uint)(byte)(uVar45 >> 7) * auVar82._28_4_ | (uint)!bVar44 * iStack_164;
    auVar74 = vsubps_avx512vl(auVar87,auVar78);
    auVar75 = vsubps_avx512vl(auVar88,auVar80);
    auVar76 = vsubps_avx512vl(auVar46,auVar83);
    auVar71 = vmulps_avx512vl(auVar75,auVar75);
    auVar71 = vfmadd231ps_avx512vl(auVar71,auVar74,auVar74);
    auVar71 = vfmadd231ps_avx512vl(auVar71,auVar76,auVar76);
    auVar81 = vsqrtps_avx512vl(auVar71);
    auVar71._4_4_ = __real_38d1b717;
    auVar71._0_4_ = __real_38d1b717;
    auVar71._8_4_ = __real_38d1b717;
    auVar71._12_4_ = __real_38d1b717;
    auVar71._16_4_ = __real_38d1b717;
    auVar71._20_4_ = __real_38d1b717;
    auVar71._24_4_ = __real_38d1b717;
    auVar71._28_4_ = __real_38d1b717;
    uVar67 = vcmpps_avx512vl(auVar81,auVar71,1);
    auVar71 = vdivps_avx512vl(auVar74,auVar81);
    auVar74 = vdivps_avx512vl(auVar75,auVar81);
    auVar75 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
    auVar75 = vfnmadd213ps_avx512vl(auVar77,auVar75,auVar81);
    auVar99._0_4_ = auVar72._0_4_ * auVar75._0_4_;
    auVar99._4_4_ = auVar72._4_4_ * auVar75._4_4_;
    auVar99._8_4_ = auVar72._8_4_ * auVar75._8_4_;
    auVar99._12_4_ = auVar72._12_4_ * auVar75._12_4_;
    auVar99._16_4_ = auVar72._16_4_ * auVar75._16_4_;
    auVar99._20_4_ = auVar72._20_4_ * auVar75._20_4_;
    auVar99._24_4_ = auVar72._24_4_ * auVar75._24_4_;
    auVar99._28_4_ = auVar72._28_4_ * auVar75._28_4_;
    bVar65 = (byte)uVar67;
    bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar67 >> 2) & 1);
    bVar4 = (bool)((byte)(uVar67 >> 3) & 1);
    bVar10 = (bool)((byte)(uVar67 >> 4) & 1);
    bVar17 = (bool)((byte)(uVar67 >> 5) & 1);
    bVar24 = (bool)((byte)(uVar67 >> 6) & 1);
    bVar31 = SUB81(uVar67 >> 7,0);
    auVar72 = ZEXT1632((undefined1  [16])0x0);
    uVar66 = vcmpps_avx512vl(auVar75,auVar72,1);
    bVar1 = (byte)uVar66;
    auVar92._4_4_ =
         (uint)!(bool)((byte)(uVar66 >> 1) & 1) *
         ((uint)bVar2 * (int)auVar99._4_4_ | (uint)!bVar2 * (int)(auVar99._4_4_ * auVar71._4_4_));
    auVar92._0_4_ =
         (uint)!(bool)(bVar1 & 1) *
         ((uint)(bVar65 & 1) * (int)auVar99._0_4_ |
         (uint)!(bool)(bVar65 & 1) * (int)(auVar99._0_4_ * auVar71._0_4_));
    bVar2 = (bool)((byte)(uVar66 >> 2) & 1);
    auVar92._8_4_ =
         (uint)bVar2 * auVar72._8_4_ |
         (uint)!bVar2 *
         ((uint)bVar3 * (int)auVar99._8_4_ | (uint)!bVar3 * (int)(auVar99._8_4_ * auVar71._8_4_));
    bVar2 = (bool)((byte)(uVar66 >> 3) & 1);
    auVar92._12_4_ =
         (uint)bVar2 * auVar72._12_4_ |
         (uint)!bVar2 *
         ((uint)bVar4 * (int)auVar99._12_4_ | (uint)!bVar4 * (int)(auVar99._12_4_ * auVar71._12_4_))
    ;
    auVar92._16_4_ =
         (uint)!(bool)((byte)(uVar66 >> 4) & 1) *
         ((uint)bVar10 * (int)auVar99._16_4_ |
         (uint)!bVar10 * (int)(auVar99._16_4_ * auVar71._16_4_));
    auVar92._20_4_ =
         (uint)!(bool)((byte)(uVar66 >> 5) & 1) *
         ((uint)bVar17 * (int)auVar99._20_4_ |
         (uint)!bVar17 * (int)(auVar99._20_4_ * auVar71._20_4_));
    auVar92._24_4_ =
         (uint)!(bool)((byte)(uVar66 >> 6) & 1) *
         ((uint)bVar24 * (int)auVar99._24_4_ |
         (uint)!bVar24 * (int)(auVar99._24_4_ * auVar71._24_4_));
    bVar2 = SUB81(uVar66 >> 7,0);
    auVar92._28_4_ =
         (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar2 *
         ((uint)bVar31 * (int)auVar99._28_4_ |
         (uint)!bVar31 * (int)(auVar99._28_4_ * auVar71._28_4_));
    auVar71 = vaddps_avx512vl(auVar78,auVar92);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar84,uVar45,auVar71);
    auVar93._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar74._4_4_;
    auVar93._0_4_ = (uint)!(bool)(bVar65 & 1) * auVar74._0_4_;
    auVar93._8_4_ = (uint)!(bool)((byte)(uVar67 >> 2) & 1) * auVar74._8_4_;
    auVar93._12_4_ = (uint)!(bool)((byte)(uVar67 >> 3) & 1) * auVar74._12_4_;
    auVar93._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar74._16_4_;
    auVar93._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar74._20_4_;
    iVar96 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
    auVar93._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar74._24_4_;
    bVar2 = SUB81(uVar67 >> 7,0);
    auVar93._28_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar74._28_4_;
    auVar71 = vmulps_avx512vl(auVar93,auVar99);
    auVar94._4_4_ = (uint)!(bool)((byte)(uVar66 >> 1) & 1) * auVar71._4_4_;
    auVar94._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar71._0_4_;
    auVar94._8_4_ = (uint)!(bool)((byte)(uVar66 >> 2) & 1) * auVar71._8_4_;
    auVar94._12_4_ = (uint)!(bool)((byte)(uVar66 >> 3) & 1) * auVar71._12_4_;
    auVar94._16_4_ = (uint)!(bool)((byte)(uVar66 >> 4) & 1) * auVar71._16_4_;
    auVar94._20_4_ = (uint)!(bool)((byte)(uVar66 >> 5) & 1) * auVar71._20_4_;
    auVar94._24_4_ = (uint)!(bool)((byte)(uVar66 >> 6) & 1) * auVar71._24_4_;
    bVar2 = SUB81(uVar66 >> 7,0);
    auVar94._28_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar71._28_4_;
    auVar71 = vaddps_avx512vl(auVar80,auVar94);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar84 | auVar73),uVar45,auVar71);
    auVar71 = vdivps_avx512vl(auVar76,auVar81);
    bVar2 = SUB81(uVar67 >> 7,0);
    auVar95._4_4_ =
         (uint)!(bool)((byte)(uVar66 >> 1) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar71._4_4_) * auVar99._4_4_);
    auVar95._0_4_ =
         (uint)!(bool)(bVar1 & 1) *
         (int)((float)((uint)!(bool)(bVar65 & 1) * auVar71._0_4_) * auVar99._0_4_);
    auVar95._8_4_ =
         (uint)!(bool)((byte)(uVar66 >> 2) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 2) & 1) * auVar71._8_4_) * auVar99._8_4_);
    auVar95._12_4_ =
         (uint)!(bool)((byte)(uVar66 >> 3) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 3) & 1) * auVar71._12_4_) * auVar99._12_4_);
    auVar95._16_4_ =
         (uint)!(bool)((byte)(uVar66 >> 4) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar71._16_4_) * auVar99._16_4_);
    auVar95._20_4_ =
         (uint)!(bool)((byte)(uVar66 >> 5) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar71._20_4_) * auVar99._20_4_);
    auVar95._24_4_ =
         (uint)!(bool)((byte)(uVar66 >> 6) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar71._24_4_) * auVar99._24_4_);
    bVar3 = SUB81(uVar66 >> 7,0);
    auVar95._28_4_ =
         (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar3 *
         (int)((float)((uint)bVar2 * iVar96 | (uint)!bVar2 * auVar71._28_4_) * auVar99._28_4_);
    auVar71 = vaddps_avx512vl(auVar83,auVar95);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar84 | auVar100),uVar45,auVar71);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar71,uVar45,auVar91);
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx512skx @ 1402e1f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsScaleWeightmap___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_Cunfun_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx512skx
               (undefined4 *param_1,undefined1 (*param_2) [32],float param_3,longlong param_4,
               longlong param_5,uint param_6,undefined8 param_7,undefined1 (*param_8) [16])

{
  byte bVar1;
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
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  ulonglong uVar48;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 (*pauVar59) [32];
  longlong unaff_RBX;
  longlong lVar60;
  longlong unaff_RSI;
  longlong lVar61;
  longlong lVar62;
  uint uVar63;
  uint uVar64;
  longlong unaff_R12;
  longlong lVar65;
  longlong lVar66;
  longlong lVar67;
  byte bVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  undefined1 auVar74 [16];
  int iVar99;
  undefined1 auVar71 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar72 [16];
  int iVar100;
  int iVar101;
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
  undefined1 auVar93 [32];
  undefined1 auVar73 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [64];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  int local_1c0;
  int iStack_1bc;
  int aiStack_1b8 [4];
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
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
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
  
  auVar73 = in_ZMM17._0_16_;
  auVar72 = in_ZMM26._0_16_;
  auVar71 = vpsllw_avx512vl(*param_8,0xf);
  uVar69 = vpmovw2m_avx512vl(auVar71);
  auVar75 = vpbroadcastd_avx512vl();
  uVar70 = vpcmpgtd_avx512vl(auVar75,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
  uVar70 = uVar69 & 0xff & uVar70;
  bVar68 = (byte)uVar70;
  if (bVar68 != 0) {
    if (bVar68 == 0xff) {
      auVar76 = param_2[1];
      auVar77 = vmovdqu64_avx512vl(param_2[2]);
      auVar78 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,*param_2,auVar76);
      auVar79 = vmovdqa64_avx512vl(
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  );
      auVar79 = vpermi2d_avx512vl(auVar79,auVar77,auVar76);
      auVar73 = auVar79._0_16_;
      auVar80 = vinserti32x4_avx512vl(auVar78,auVar73,1);
      auVar78 = vshufi64x2_avx512vl(auVar78,auVar79,3);
      auVar76 = vpblendd_avx2(auVar76,*param_2,0x24);
      auVar76 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,auVar76,auVar77);
    }
    else {
      auVar76 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + unaff_RBX));
      auVar80._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar76._4_4_;
      auVar80._0_4_ = (uint)(bVar68 & 1) * auVar76._0_4_;
      auVar80._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar76._8_4_;
      auVar80._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar76._12_4_;
      auVar80._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar76._16_4_;
      auVar80._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar76._20_4_;
      auVar80._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar76._24_4_;
      auVar80._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar76._28_4_;
      auVar76 = vpgatherdd_avx512vl(*(undefined4 *)*param_2);
      auVar78._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar76._4_4_;
      auVar78._0_4_ = (uint)(bVar68 & 1) * auVar76._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar76._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar76._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar76._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar76._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar76._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar76._28_4_;
      auVar77 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + (longlong)aiStack_1b8));
      auVar76._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar77._4_4_;
      auVar76._0_4_ = (uint)(bVar68 & 1) * auVar77._0_4_;
      auVar76._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar77._8_4_;
      auVar76._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar77._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar77._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar77._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar77._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar77._28_4_;
    }
    uVar70 = vpcmpgtd_avx512vl(auVar75,
                               ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                              );
    local_240 = vmovdqu32_avx512vl(auVar80);
    local_220 = vmovdqu32_avx512vl(auVar78);
    bVar2 = (bool)((byte)uVar70 & 1);
    local_200 = (float)((uint)bVar2 * auVar76._0_4_ | (uint)!bVar2 * (int)local_200);
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    fStack_1fc = (float)((uint)bVar2 * auVar76._4_4_ | (uint)!bVar2 * (int)fStack_1fc);
    bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
    fStack_1f8 = (float)((uint)bVar2 * auVar76._8_4_ | (uint)!bVar2 * (int)fStack_1f8);
    bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
    fStack_1f4 = (float)((uint)bVar2 * auVar76._12_4_ | (uint)!bVar2 * (int)fStack_1f4);
    bVar2 = (bool)((byte)(uVar70 >> 4) & 1);
    fStack_1f0 = (float)((uint)bVar2 * auVar76._16_4_ | (uint)!bVar2 * (int)fStack_1f0);
    bVar2 = (bool)((byte)(uVar70 >> 5) & 1);
    fStack_1ec = (float)((uint)bVar2 * auVar76._20_4_ | (uint)!bVar2 * (int)fStack_1ec);
    bVar2 = (bool)((byte)(uVar70 >> 6) & 1);
    fStack_1e8 = (float)((uint)bVar2 * auVar76._24_4_ | (uint)!bVar2 * (int)fStack_1e8);
    bVar2 = SUB81(uVar70 >> 7,0);
    fStack_1e4 = (float)((uint)bVar2 * auVar76._28_4_ | (uint)!bVar2 * (int)fStack_1e4);
  }
  uVar63 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar63 = param_6;
  }
  auVar76 = vpbroadcastd_avx512vl();
  uVar63 = uVar63 & 0xfffffff8;
  uVar70 = (ulonglong)uVar63;
  if ((int)uVar63 < 1) {
    uVar64 = 0;
  }
  else {
    uVar64 = 0;
    auVar105 = ZEXT1664((undefined1  [16])0x0);
    vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar77 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar73 = auVar77._0_16_;
    auVar78 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                                );
    auVar79 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar80 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar81 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                );
    vmovdqa64_avx512vl(___ymm_00000054000000480000003c0000003000000024000000180000000c00000000);
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    do {
      fVar58 = fStack_1e4;
      fVar57 = fStack_1e8;
      fVar56 = fStack_1ec;
      fVar55 = fStack_1f0;
      fVar54 = fStack_1f4;
      fVar53 = fStack_1f8;
      fVar52 = fStack_1fc;
      fVar51 = local_200;
      pauVar59 = param_2 + 3;
      auVar83 = vpaddd_avx512vl(auVar76,local_240);
      vpslld_avx512vl(auVar83,4);
      auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar70));
      auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar64));
      auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar70));
      auVar86 = vpaddd_avx512vl(auVar76,local_220);
      auVar86 = vpslld_avx512vl(auVar86,4);
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar64));
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar70));
      in_ZMM29 = ZEXT3264(auVar88);
      auVar89 = vpbroadcastd_avx512vl();
      auVar89 = vpaddd_avx512vl(auVar89,auVar78);
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      in_ZMM30 = ZEXT3264(auVar90);
      lVar61 = (longlong)(int)local_220._12_4_;
      lVar60 = (longlong)(int)local_220._8_4_;
      lVar66 = (longlong)(int)local_220._4_4_;
      lVar65 = (longlong)(int)local_220._0_4_;
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      lVar67 = (longlong)(int)local_220._28_4_;
      unaff_R12 = (longlong)(int)local_220._24_4_;
      lVar62 = (longlong)(int)local_220._20_4_;
      unaff_RSI = (longlong)(int)local_220._16_4_;
      uVar69 = vpcmpgtd_avx512vl(auVar75,auVar89);
      bVar68 = (byte)uVar69;
      if (bVar68 != 0) {
        if (bVar68 == 0xff) {
          auVar89 = param_2[4];
          auVar82 = vpblendd_avx2(auVar89,*pauVar59,0x24);
          auVar92 = vpermt2d_avx512vl(*pauVar59,
                                      ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                      ,auVar89);
          auVar93 = vpermt2d_avx512vl(auVar82,auVar81,param_2[5]);
          auVar89 = vpermt2d_avx512vl(param_2[5],auVar80,auVar89);
          auVar82._16_16_ = ZEXT116(0) * auVar92._16_16_ | ZEXT116(1) * auVar89._0_16_;
          auVar82._0_16_ = ZEXT116(0) * auVar89._0_16_ | ZEXT116(1) * auVar92._0_16_;
          auVar89 = vperm2i128_avx2(auVar92,auVar89,0x31);
        }
        else {
          auVar89 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar59 + lVar61));
          auVar82._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar89._4_4_;
          auVar82._0_4_ = (uint)(bVar68 & 1) * auVar89._0_4_;
          auVar82._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar89._8_4_;
          auVar82._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar89._12_4_;
          auVar82._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar89._16_4_;
          auVar82._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar89._20_4_;
          auVar82._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar89._24_4_;
          auVar82._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar89._28_4_;
          auVar92 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar59 + lVar62));
          auVar89._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar92._4_4_;
          auVar89._0_4_ = (uint)(bVar68 & 1) * auVar92._0_4_;
          auVar89._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar92._8_4_;
          auVar89._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar92._12_4_;
          auVar89._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar92._16_4_;
          auVar89._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar92._20_4_;
          auVar89._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar92._24_4_;
          auVar89._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar92._28_4_;
          auVar92 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar59 + param_4));
          auVar93._4_4_ = (uint)((byte)(uVar69 >> 1) & 1) * auVar92._4_4_;
          auVar93._0_4_ = (uint)(bVar68 & 1) * auVar92._0_4_;
          auVar93._8_4_ = (uint)((byte)(uVar69 >> 2) & 1) * auVar92._8_4_;
          auVar93._12_4_ = (uint)((byte)(uVar69 >> 3) & 1) * auVar92._12_4_;
          auVar93._16_4_ = (uint)((byte)(uVar69 >> 4) & 1) * auVar92._16_4_;
          auVar93._20_4_ = (uint)((byte)(uVar69 >> 5) & 1) * auVar92._20_4_;
          auVar93._24_4_ = (uint)((byte)(uVar69 >> 6) & 1) * auVar92._24_4_;
          auVar93._28_4_ = (uint)(byte)(uVar69 >> 7) * auVar92._28_4_;
        }
        local_240 = vmovdqu32_avx512vl(auVar82);
        local_220 = vmovdqu32_avx512vl(auVar89);
        local_200 = (float)((uint)(bVar68 & 1) * auVar93._0_4_ |
                           (uint)!(bool)(bVar68 & 1) * (int)local_200);
        bVar2 = (bool)((byte)(uVar69 >> 1) & 1);
        fStack_1fc = (float)((uint)bVar2 * auVar93._4_4_ | (uint)!bVar2 * (int)fStack_1fc);
        bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
        fStack_1f8 = (float)((uint)bVar2 * auVar93._8_4_ | (uint)!bVar2 * (int)fStack_1f8);
        bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
        fStack_1f4 = (float)((uint)bVar2 * auVar93._12_4_ | (uint)!bVar2 * (int)fStack_1f4);
        bVar2 = (bool)((byte)(uVar69 >> 4) & 1);
        fStack_1f0 = (float)((uint)bVar2 * auVar93._16_4_ | (uint)!bVar2 * (int)fStack_1f0);
        bVar2 = (bool)((byte)(uVar69 >> 5) & 1);
        fStack_1ec = (float)((uint)bVar2 * auVar93._20_4_ | (uint)!bVar2 * (int)fStack_1ec);
        bVar2 = (bool)((byte)(uVar69 >> 6) & 1);
        fStack_1e8 = (float)((uint)bVar2 * auVar93._24_4_ | (uint)!bVar2 * (int)fStack_1e8);
        bVar2 = SUB81(uVar69 >> 7,0);
        fStack_1e4 = (float)((uint)bVar2 * auVar93._28_4_ | (uint)!bVar2 * (int)fStack_1e4);
      }
      auVar71 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + lVar65)),(uint)*(byte *)(param_4 + lVar66),1
                           );
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar60),2);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar61),3);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + unaff_RSI),4);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar62),5);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + unaff_R12),6);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar67),7);
      auVar89 = vpmovzxbd_avx2(auVar71);
      auVar89 = vpslld_avx2(auVar89,2);
      vpmovzxdq_avx2(auVar89._16_16_);
      vpmovzxdq_avx2(auVar89._0_16_);
      auVar71 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + unaff_R12));
      auVar72 = vgatherqps_avx512vl(*(undefined8 *)
                                     (param_5 + (ulonglong)*(byte *)(param_4 + lVar65)));
      auVar83 = vsubps_avx512vl(auVar83,auVar87);
      auVar84 = vsubps_avx512vl(auVar84,auVar88);
      auVar85 = vsubps_avx512vl(auVar85,auVar90);
      auVar108._0_4_ =
           auVar85._0_4_ * auVar85._0_4_ +
           auVar83._0_4_ * auVar83._0_4_ + auVar84._0_4_ * auVar84._0_4_;
      auVar108._4_4_ =
           auVar85._4_4_ * auVar85._4_4_ +
           auVar83._4_4_ * auVar83._4_4_ + auVar84._4_4_ * auVar84._4_4_;
      auVar108._8_4_ =
           auVar85._8_4_ * auVar85._8_4_ +
           auVar83._8_4_ * auVar83._8_4_ + auVar84._8_4_ * auVar84._8_4_;
      auVar108._12_4_ =
           auVar85._12_4_ * auVar85._12_4_ +
           auVar83._12_4_ * auVar83._12_4_ + auVar84._12_4_ * auVar84._12_4_;
      auVar108._16_4_ =
           auVar85._16_4_ * auVar85._16_4_ +
           auVar83._16_4_ * auVar83._16_4_ + auVar84._16_4_ * auVar84._16_4_;
      auVar108._20_4_ =
           auVar85._20_4_ * auVar85._20_4_ +
           auVar83._20_4_ * auVar83._20_4_ + auVar84._20_4_ * auVar84._20_4_;
      auVar108._24_4_ =
           auVar85._24_4_ * auVar85._24_4_ +
           auVar83._24_4_ * auVar83._24_4_ + auVar84._24_4_ * auVar84._24_4_;
      auVar108._28_4_ =
           auVar85._28_4_ * auVar85._28_4_ +
           auVar83._28_4_ * auVar83._28_4_ + auVar84._28_4_ * auVar84._28_4_;
      auVar89 = vsqrtps_avx(auVar108);
      uVar69 = vcmpps_avx512vl(auVar89,auVar79,1);
      auVar83 = vdivps_avx(auVar83,auVar89);
      auVar84 = vdivps_avx(auVar84,auVar89);
      auVar85 = vdivps_avx(auVar85,auVar89);
      bVar68 = (byte)uVar69;
      auVar92._4_4_ = (uint)!(bool)((byte)(uVar69 >> 1) & 1) * auVar84._4_4_;
      auVar92._0_4_ = (uint)!(bool)(bVar68 & 1) * auVar84._0_4_;
      bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
      iVar99 = auVar105._8_4_;
      auVar92._8_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar84._8_4_;
      bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
      iVar100 = auVar105._12_4_;
      auVar92._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar84._12_4_;
      auVar92._16_4_ = (uint)!(bool)((byte)(uVar69 >> 4) & 1) * auVar84._16_4_;
      auVar92._20_4_ = (uint)!(bool)((byte)(uVar69 >> 5) & 1) * auVar84._20_4_;
      iVar101 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
      auVar92._24_4_ = (uint)!(bool)((byte)(uVar69 >> 6) & 1) * auVar84._24_4_;
      bVar2 = SUB81(uVar69 >> 7,0);
      auVar92._28_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar84._28_4_;
      auVar84._4_4_ = (uint)!(bool)((byte)(uVar69 >> 1) & 1) * auVar85._4_4_;
      auVar84._0_4_ = (uint)!(bool)(bVar68 & 1) * auVar85._0_4_;
      bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
      auVar84._8_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar85._8_4_;
      bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
      auVar84._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar85._12_4_;
      auVar84._16_4_ = (uint)!(bool)((byte)(uVar69 >> 4) & 1) * auVar85._16_4_;
      auVar84._20_4_ = (uint)!(bool)((byte)(uVar69 >> 5) & 1) * auVar85._20_4_;
      auVar84._24_4_ = (uint)!(bool)((byte)(uVar69 >> 6) & 1) * auVar85._24_4_;
      bVar2 = SUB81(uVar69 >> 7,0);
      auVar84._28_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar85._28_4_;
      auVar107._0_4_ = -(fVar51 * auVar71._0_4_) + auVar89._0_4_;
      auVar107._4_4_ = -(fVar52 * auVar71._4_4_) + auVar89._4_4_;
      auVar107._8_4_ = -(fVar53 * auVar71._8_4_) + auVar89._8_4_;
      auVar107._12_4_ = -(fVar54 * auVar71._12_4_) + auVar89._12_4_;
      auVar107._16_4_ = -(fVar55 * auVar72._0_4_) + auVar89._16_4_;
      auVar107._20_4_ = -(fVar56 * auVar72._4_4_) + auVar89._20_4_;
      auVar107._24_4_ = -(fVar57 * auVar72._8_4_) + auVar89._24_4_;
      auVar107._28_4_ = -(fVar58 * auVar72._12_4_) + auVar89._28_4_;
      auVar106._0_4_ = auVar107._0_4_ * param_3;
      auVar106._4_4_ = auVar107._4_4_ * param_3;
      auVar106._8_4_ = auVar107._8_4_ * param_3;
      auVar106._12_4_ = auVar107._12_4_ * param_3;
      auVar106._16_4_ = auVar107._16_4_ * param_3;
      auVar106._20_4_ = auVar107._20_4_ * param_3;
      auVar106._24_4_ = auVar107._24_4_ * param_3;
      auVar106._28_4_ = auVar107._28_4_ * param_3;
      bVar2 = (bool)((byte)(uVar69 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar69 >> 2) & 1);
      bVar12 = (bool)((byte)(uVar69 >> 3) & 1);
      bVar20 = (bool)((byte)(uVar69 >> 4) & 1);
      bVar27 = (bool)((byte)(uVar69 >> 5) & 1);
      bVar34 = (bool)((byte)(uVar69 >> 6) & 1);
      bVar41 = SUB81(uVar69 >> 7,0);
      uVar69 = vcmpps_avx512vl(auVar107,auVar105._0_32_,1);
      bVar1 = (byte)uVar69;
      auVar85._4_4_ =
           (uint)!(bool)((byte)(uVar69 >> 1) & 1) *
           ((uint)bVar2 * (int)auVar106._4_4_ | (uint)!bVar2 * (int)(auVar106._4_4_ * auVar83._4_4_)
           );
      auVar85._0_4_ =
           (uint)!(bool)(bVar1 & 1) *
           ((uint)(bVar68 & 1) * (int)auVar106._0_4_ |
           (uint)!(bool)(bVar68 & 1) * (int)(auVar106._0_4_ * auVar83._0_4_));
      bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
      auVar85._8_4_ =
           (uint)bVar2 * iVar99 |
           (uint)!bVar2 *
           ((uint)bVar4 * (int)auVar106._8_4_ | (uint)!bVar4 * (int)(auVar106._8_4_ * auVar83._8_4_)
           );
      bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
      auVar85._12_4_ =
           (uint)bVar2 * iVar100 |
           (uint)!bVar2 *
           ((uint)bVar12 * (int)auVar106._12_4_ |
           (uint)!bVar12 * (int)(auVar106._12_4_ * auVar83._12_4_));
      auVar85._16_4_ =
           (uint)!(bool)((byte)(uVar69 >> 4) & 1) *
           ((uint)bVar20 * (int)auVar106._16_4_ |
           (uint)!bVar20 * (int)(auVar106._16_4_ * auVar83._16_4_));
      auVar85._20_4_ =
           (uint)!(bool)((byte)(uVar69 >> 5) & 1) *
           ((uint)bVar27 * (int)auVar106._20_4_ |
           (uint)!bVar27 * (int)(auVar106._20_4_ * auVar83._20_4_));
      auVar85._24_4_ =
           (uint)!(bool)((byte)(uVar69 >> 6) & 1) *
           ((uint)bVar34 * (int)auVar106._24_4_ |
           (uint)!bVar34 * (int)(auVar106._24_4_ * auVar83._24_4_));
      bVar2 = SUB81(uVar69 >> 7,0);
      auVar85._28_4_ =
           (uint)bVar2 * iVar101 |
           (uint)!bVar2 *
           ((uint)bVar41 * (int)auVar106._28_4_ |
           (uint)!bVar41 * (int)(auVar106._28_4_ * auVar83._28_4_));
      auVar83 = vaddps_avx512vl(auVar87,auVar85);
      in_ZMM31 = ZEXT3264(auVar83);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar84,0xffff,auVar83);
      auVar83 = vmulps_avx512vl(auVar92,auVar106);
      auVar87._4_4_ = (uint)!(bool)((byte)(uVar69 >> 1) & 1) * auVar83._4_4_;
      auVar87._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar83._0_4_;
      bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
      auVar87._8_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar83._8_4_;
      bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
      auVar87._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar83._12_4_;
      auVar87._16_4_ = (uint)!(bool)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
      auVar87._20_4_ = (uint)!(bool)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
      auVar87._24_4_ = (uint)!(bool)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
      bVar2 = SUB81(uVar69 >> 7,0);
      auVar87._28_4_ =
           (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar83._28_4_;
      auVar83 = vaddps_avx512vl(auVar88,auVar87);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar106,0xffff,auVar83);
      auVar83 = vmulps_avx512vl(auVar84,auVar106);
      auVar88._4_4_ = (uint)!(bool)((byte)(uVar69 >> 1) & 1) * auVar83._4_4_;
      auVar88._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar83._0_4_;
      bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
      auVar88._8_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar83._8_4_;
      bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
      auVar88._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar83._12_4_;
      auVar88._16_4_ = (uint)!(bool)((byte)(uVar69 >> 4) & 1) * auVar83._16_4_;
      auVar88._20_4_ = (uint)!(bool)((byte)(uVar69 >> 5) & 1) * auVar83._20_4_;
      auVar88._24_4_ = (uint)!(bool)((byte)(uVar69 >> 6) & 1) * auVar83._24_4_;
      bVar2 = SUB81(uVar69 >> 7,0);
      auVar88._28_4_ =
           (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar83._28_4_;
      auVar83 = vaddps_avx512vl(auVar90,auVar88);
      auVar72 = auVar83._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar107,0xffff,auVar83);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar86 | auVar77),0xffff,auVar91);
      uVar64 = uVar64 + 8;
      param_2 = pauVar59;
    } while ((int)uVar64 < (int)uVar63);
  }
  if ((int)uVar64 < (int)param_6) {
    auVar78 = vpbroadcastd_avx512vl();
    auVar77 = vpord_avx512vl(auVar78,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    uVar48 = vpcmpgtd_avx512vl(auVar75,auVar77);
    auVar81._4_4_ = fStack_1fc;
    auVar81._0_4_ = local_200;
    auVar81._8_4_ = fStack_1f8;
    auVar81._12_4_ = fStack_1f4;
    auVar81._16_4_ = fStack_1f0;
    auVar81._20_4_ = fStack_1ec;
    auVar81._24_4_ = fStack_1e8;
    auVar81._28_4_ = fStack_1e4;
    auVar80 = vmovdqa32_avx512vl(local_220);
    bVar1 = (byte)uVar48;
    lVar61 = (longlong)(int)((uint)((byte)(uVar48 >> 6) & 1) * auVar80._24_4_);
    bVar68 = *(byte *)(param_4 + (int)((uint)(bVar1 & 1) * auVar80._0_4_));
    auVar71 = vpinsrb_avx(ZEXT116(bVar68),
                          (uint)*(byte *)(param_4 +
                                         (int)((uint)((byte)(uVar48 >> 1) & 1) * auVar80._4_4_)),1);
    auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 +
                                                 (int)((uint)((byte)(uVar48 >> 2) & 1) *
                                                      auVar80._8_4_)),2);
    auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 +
                                                 (int)((uint)((byte)(uVar48 >> 3) & 1) *
                                                      auVar80._12_4_)),3);
    auVar77._0_4_ = auVar76._0_4_ + local_240._0_4_;
    auVar77._4_4_ = auVar76._4_4_ + local_240._4_4_;
    auVar77._8_4_ = auVar76._8_4_ + local_240._8_4_;
    auVar77._12_4_ = auVar76._12_4_ + local_240._12_4_;
    auVar77._16_4_ = auVar76._16_4_ + local_240._16_4_;
    auVar77._20_4_ = auVar76._20_4_ + local_240._20_4_;
    auVar77._24_4_ = auVar76._24_4_ + local_240._24_4_;
    auVar77._28_4_ = auVar76._28_4_ + local_240._28_4_;
    vpslld_avx2(auVar77,4);
    auVar104._4_4_ = __real_00000004;
    auVar104._0_4_ = __real_00000004;
    auVar104._8_4_ = __real_00000004;
    auVar104._12_4_ = __real_00000004;
    auVar104._16_4_ = __real_00000004;
    auVar104._20_4_ = __real_00000004;
    auVar104._24_4_ = __real_00000004;
    auVar104._28_4_ = __real_00000004;
    auVar77 = vgatherdps_avx512vl(*param_1);
    auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)bVar68));
    lVar60 = (longlong)(int)((uint)(byte)(uVar48 >> 7) * auVar80._28_4_);
    auVar79._0_4_ = local_220._0_4_ + auVar76._0_4_;
    auVar79._4_4_ = local_220._4_4_ + auVar76._4_4_;
    auVar79._8_4_ = local_220._8_4_ + auVar76._8_4_;
    auVar79._12_4_ = local_220._12_4_ + auVar76._12_4_;
    auVar79._16_4_ = local_220._16_4_ + auVar76._16_4_;
    auVar79._20_4_ = local_220._20_4_ + auVar76._20_4_;
    auVar79._24_4_ = local_220._24_4_ + auVar76._24_4_;
    auVar79._28_4_ = local_220._28_4_ + auVar76._28_4_;
    auVar102._4_4_ = __real_00000008;
    auVar102._0_4_ = __real_00000008;
    auVar102._8_4_ = __real_00000008;
    auVar102._12_4_ = __real_00000008;
    auVar102._16_4_ = __real_00000008;
    auVar102._20_4_ = __real_00000008;
    auVar102._24_4_ = __real_00000008;
    auVar102._28_4_ = __real_00000008;
    auVar76 = vgatherdps_avx512vl(*param_1);
    auVar87 = vpslld_avx2(auVar79,4);
    auVar79 = vgatherdps_avx512vl(*param_1);
    auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 +
                                                 (int)((uint)((byte)(uVar48 >> 4) & 1) *
                                                      auVar80._16_4_)),4);
    auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 +
                                                 (int)((uint)((byte)(uVar48 >> 5) & 1) *
                                                      auVar80._20_4_)),5);
    auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_1b8));
    auVar72 = vxorps_avx512vl(auVar72,auVar72);
    auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar4 = (bool)((byte)(uVar48 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar48 >> 2) & 1);
    bVar13 = (bool)((byte)(uVar48 >> 3) & 1);
    auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar61),6);
    auVar71 = vpinsrb_avx512bw(auVar71,(uint)*(byte *)(param_4 + lVar60),7);
    auVar73 = vxorps_avx512vl(auVar73,auVar73);
    auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar60));
    auVar94._0_4_ = (uint)(bVar1 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar1 & 1) * auVar73._0_4_;
    bVar2 = (bool)((byte)(uVar48 >> 1) & 1);
    auVar94._4_4_ = (uint)bVar2 * auVar85._4_4_ | (uint)!bVar2 * auVar73._4_4_;
    bVar2 = (bool)((byte)(uVar48 >> 2) & 1);
    auVar94._8_4_ = (uint)bVar2 * auVar85._8_4_ | (uint)!bVar2 * auVar73._8_4_;
    bVar2 = (bool)((byte)(uVar48 >> 3) & 1);
    auVar94._12_4_ = (uint)bVar2 * auVar85._12_4_ | (uint)!bVar2 * auVar73._12_4_;
    auVar94._16_4_ = (uint)((byte)(uVar48 >> 4) & 1) * auVar85._16_4_;
    auVar94._20_4_ = (uint)((byte)(uVar48 >> 5) & 1) * auVar85._20_4_;
    auVar94._24_4_ = (uint)((byte)(uVar48 >> 6) & 1) * auVar85._24_4_;
    auVar94._28_4_ = (uint)(byte)(uVar48 >> 7) * auVar85._28_4_;
    bVar12 = (bool)((byte)(uVar48 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar48 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar48 >> 3) & 1);
    bVar21 = (bool)((byte)(uVar48 >> 4) & 1);
    bVar28 = (bool)((byte)(uVar48 >> 5) & 1);
    bVar35 = (bool)((byte)(uVar48 >> 6) & 1);
    bVar42 = SUB81(uVar48 >> 7,0);
    bVar20 = (bool)((byte)(uVar48 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar48 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar48 >> 3) & 1);
    bVar22 = (bool)((byte)(uVar48 >> 4) & 1);
    bVar29 = (bool)((byte)(uVar48 >> 5) & 1);
    bVar36 = (bool)((byte)(uVar48 >> 6) & 1);
    bVar43 = SUB81(uVar48 >> 7,0);
    bVar27 = (bool)((byte)(uVar48 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar48 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar48 >> 3) & 1);
    bVar23 = (bool)((byte)(uVar48 >> 4) & 1);
    bVar30 = (bool)((byte)(uVar48 >> 5) & 1);
    bVar37 = (bool)((byte)(uVar48 >> 6) & 1);
    bVar44 = SUB81(uVar48 >> 7,0);
    bVar34 = (bool)((byte)(uVar48 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar48 >> 2) & 1);
    bVar17 = (bool)((byte)(uVar48 >> 3) & 1);
    bVar24 = (bool)((byte)(uVar48 >> 4) & 1);
    bVar31 = (bool)((byte)(uVar48 >> 5) & 1);
    bVar38 = (bool)((byte)(uVar48 >> 6) & 1);
    bVar45 = SUB81(uVar48 >> 7,0);
    bVar41 = (bool)((byte)(uVar48 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar48 >> 2) & 1);
    bVar18 = (bool)((byte)(uVar48 >> 3) & 1);
    bVar25 = (bool)((byte)(uVar48 >> 4) & 1);
    bVar32 = (bool)((byte)(uVar48 >> 5) & 1);
    bVar39 = (bool)((byte)(uVar48 >> 6) & 1);
    bVar46 = SUB81(uVar48 >> 7,0);
    bVar3 = (bool)((byte)(uVar48 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar48 >> 2) & 1);
    bVar19 = (bool)((byte)(uVar48 >> 3) & 1);
    bVar26 = (bool)((byte)(uVar48 >> 4) & 1);
    bVar33 = (bool)((byte)(uVar48 >> 5) & 1);
    bVar40 = (bool)((byte)(uVar48 >> 6) & 1);
    bVar47 = SUB81(uVar48 >> 7,0);
    auVar78 = vpaddd_avx512vl(auVar78,
                              ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                             );
    vpcmpgtd_avx512vl(auVar75,auVar78);
    auVar75 = vpmovzxbd_avx512vl(auVar71);
    auVar75 = vpslld_avx2(auVar75,2);
    vpmovzxdq_avx2(auVar75._16_16_);
    vpmovzxdq_avx2(auVar75._0_16_);
    uVar70 = uVar48 >> 4 & 0xf;
    auVar71 = vgatherqps_avx512vl(*(undefined8 *)(param_5 * 2));
    auVar73 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + lVar61));
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    auVar74._8_8_ = (ulonglong)bVar2 * auVar73._8_8_ | (ulonglong)!bVar2 * SUB168(ZEXT816(0),4);
    auVar74._0_8_ = (ulonglong)((byte)uVar70 & 1) * auVar73._0_8_;
    auVar91._4_4_ =
         (uint)bVar12 * (uint)((byte)(uVar48 >> 1) & 1) * auVar77._4_4_ | (uint)!bVar12 * iStack_15c
    ;
    auVar91._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar77._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_160;
    auVar91._8_4_ =
         (uint)bVar6 * (uint)((byte)(uVar48 >> 2) & 1) * auVar77._8_4_ | (uint)!bVar6 * iStack_158;
    auVar91._12_4_ =
         (uint)bVar14 * (uint)((byte)(uVar48 >> 3) & 1) * auVar77._12_4_ |
         (uint)!bVar14 * iStack_154;
    auVar91._16_4_ =
         (uint)bVar21 * (uint)((byte)(uVar48 >> 4) & 1) * auVar77._16_4_ |
         (uint)!bVar21 * iStack_150;
    auVar91._20_4_ =
         (uint)bVar28 * (uint)((byte)(uVar48 >> 5) & 1) * auVar77._20_4_ |
         (uint)!bVar28 * iStack_14c;
    auVar91._24_4_ =
         (uint)bVar35 * (uint)((byte)(uVar48 >> 6) & 1) * auVar77._24_4_ |
         (uint)!bVar35 * iStack_148;
    auVar91._28_4_ =
         (uint)bVar42 * (uint)(byte)(uVar48 >> 7) * auVar77._28_4_ | (uint)!bVar42 * iStack_144;
    auVar49._4_4_ =
         (uint)bVar20 * (uint)((byte)(uVar48 >> 1) & 1) * auVar83._4_4_ | (uint)!bVar20 * iStack_13c
    ;
    auVar49._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar83._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_140;
    auVar49._8_4_ =
         (uint)bVar7 * (uint)((byte)(uVar48 >> 2) & 1) * auVar83._8_4_ | (uint)!bVar7 * iStack_138;
    auVar49._12_4_ =
         (uint)bVar15 * (uint)((byte)(uVar48 >> 3) & 1) * auVar83._12_4_ |
         (uint)!bVar15 * iStack_134;
    auVar49._16_4_ =
         (uint)bVar22 * (uint)((byte)(uVar48 >> 4) & 1) * auVar83._16_4_ |
         (uint)!bVar22 * iStack_130;
    auVar49._20_4_ =
         (uint)bVar29 * (uint)((byte)(uVar48 >> 5) & 1) * auVar83._20_4_ |
         (uint)!bVar29 * iStack_12c;
    auVar49._24_4_ =
         (uint)bVar36 * (uint)((byte)(uVar48 >> 6) & 1) * auVar83._24_4_ |
         (uint)!bVar36 * iStack_128;
    auVar49._28_4_ =
         (uint)bVar43 * (uint)(byte)(uVar48 >> 7) * auVar83._28_4_ | (uint)!bVar43 * iStack_124;
    auVar50._4_4_ =
         (uint)bVar27 * (uint)((byte)(uVar48 >> 1) & 1) * auVar76._4_4_ | (uint)!bVar27 * iStack_11c
    ;
    auVar50._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar76._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_120;
    auVar50._8_4_ =
         (uint)bVar8 * (uint)((byte)(uVar48 >> 2) & 1) * auVar76._8_4_ | (uint)!bVar8 * iStack_118;
    auVar50._12_4_ =
         (uint)bVar16 * (uint)((byte)(uVar48 >> 3) & 1) * auVar76._12_4_ |
         (uint)!bVar16 * iStack_114;
    auVar50._16_4_ =
         (uint)bVar23 * (uint)((byte)(uVar48 >> 4) & 1) * auVar76._16_4_ |
         (uint)!bVar23 * iStack_110;
    auVar50._20_4_ =
         (uint)bVar30 * (uint)((byte)(uVar48 >> 5) & 1) * auVar76._20_4_ |
         (uint)!bVar30 * iStack_10c;
    auVar50._24_4_ =
         (uint)bVar37 * (uint)((byte)(uVar48 >> 6) & 1) * auVar76._24_4_ |
         (uint)!bVar37 * iStack_108;
    auVar50._28_4_ =
         (uint)bVar44 * (uint)(byte)(uVar48 >> 7) * auVar76._28_4_ | (uint)!bVar44 * iStack_104;
    auVar83._4_4_ =
         (uint)bVar34 * (uint)((byte)(uVar48 >> 1) & 1) * auVar79._4_4_ | (uint)!bVar34 * iStack_1bc
    ;
    auVar83._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar79._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_1c0;
    auVar83._8_4_ =
         (uint)bVar9 * (uint)((byte)(uVar48 >> 2) & 1) * auVar79._8_4_ |
         (uint)!bVar9 * aiStack_1b8[0];
    auVar83._12_4_ =
         (uint)bVar17 * (uint)((byte)(uVar48 >> 3) & 1) * auVar79._12_4_ |
         (uint)!bVar17 * aiStack_1b8[1];
    auVar83._16_4_ =
         (uint)bVar24 * (uint)((byte)(uVar48 >> 4) & 1) * auVar79._16_4_ |
         (uint)!bVar24 * aiStack_1b8[2];
    auVar83._20_4_ =
         (uint)bVar31 * (uint)((byte)(uVar48 >> 5) & 1) * auVar79._20_4_ |
         (uint)!bVar31 * aiStack_1b8[3];
    auVar83._24_4_ =
         (uint)bVar38 * (uint)((byte)(uVar48 >> 6) & 1) * auVar79._24_4_ |
         (uint)!bVar38 * iStack_1a8;
    auVar83._28_4_ =
         (uint)bVar45 * (uint)(byte)(uVar48 >> 7) * auVar79._28_4_ | (uint)!bVar45 * iStack_1a4;
    auVar86._4_4_ =
         (uint)bVar41 * (uint)((byte)(uVar48 >> 1) & 1) * auVar80._4_4_ | (uint)!bVar41 * iStack_19c
    ;
    auVar86._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar80._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_1a0;
    auVar86._8_4_ =
         (uint)bVar10 * (uint)((byte)(uVar48 >> 2) & 1) * auVar80._8_4_ | (uint)!bVar10 * iStack_198
    ;
    auVar86._12_4_ =
         (uint)bVar18 * (uint)((byte)(uVar48 >> 3) & 1) * auVar80._12_4_ |
         (uint)!bVar18 * iStack_194;
    auVar86._16_4_ =
         (uint)bVar25 * (uint)((byte)(uVar48 >> 4) & 1) * auVar80._16_4_ |
         (uint)!bVar25 * iStack_190;
    auVar86._20_4_ =
         (uint)bVar32 * (uint)((byte)(uVar48 >> 5) & 1) * auVar80._20_4_ |
         (uint)!bVar32 * iStack_18c;
    auVar86._24_4_ =
         (uint)bVar39 * (uint)((byte)(uVar48 >> 6) & 1) * auVar80._24_4_ |
         (uint)!bVar39 * iStack_188;
    auVar86._28_4_ =
         (uint)bVar46 * (uint)(byte)(uVar48 >> 7) * auVar80._28_4_ | (uint)!bVar46 * iStack_184;
    auVar76 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)((byte)(uVar48 >> 1) & 1) * auVar71._8_8_,
                                           (ulonglong)(bVar1 & 1) * auVar71._0_8_)),auVar74,1);
    auVar90._4_4_ =
         (uint)bVar3 * ((uint)bVar4 * auVar84._4_4_ | (uint)!bVar4 * auVar72._4_4_) |
         (uint)!bVar3 * iStack_17c;
    auVar90._0_4_ =
         (uint)(bVar1 & 1) *
         ((uint)(bVar1 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar1 & 1) * auVar72._0_4_) |
         (uint)!(bool)(bVar1 & 1) * local_180;
    auVar90._8_4_ =
         (uint)bVar11 * ((uint)bVar5 * auVar84._8_4_ | (uint)!bVar5 * auVar72._8_4_) |
         (uint)!bVar11 * iStack_178;
    auVar90._12_4_ =
         (uint)bVar19 * ((uint)bVar13 * auVar84._12_4_ | (uint)!bVar13 * auVar72._12_4_) |
         (uint)!bVar19 * iStack_174;
    auVar90._16_4_ =
         (uint)bVar26 * (uint)((byte)(uVar48 >> 4) & 1) * auVar84._16_4_ |
         (uint)!bVar26 * iStack_170;
    auVar90._20_4_ =
         (uint)bVar33 * (uint)((byte)(uVar48 >> 5) & 1) * auVar84._20_4_ |
         (uint)!bVar33 * iStack_16c;
    auVar90._24_4_ =
         (uint)bVar40 * (uint)((byte)(uVar48 >> 6) & 1) * auVar84._24_4_ |
         (uint)!bVar40 * iStack_168;
    auVar90._28_4_ =
         (uint)bVar47 * (uint)(byte)(uVar48 >> 7) * auVar84._28_4_ | (uint)!bVar47 * iStack_164;
    auVar77 = vsubps_avx512vl(auVar91,auVar83);
    auVar78 = vsubps_avx512vl(auVar49,auVar86);
    auVar79 = vsubps_avx512vl(auVar50,auVar90);
    auVar75 = vmulps_avx512vl(auVar78,auVar78);
    auVar75 = vfmadd231ps_avx512vl(auVar75,auVar77,auVar77);
    auVar75 = vfmadd231ps_avx512vl(auVar75,auVar79,auVar79);
    auVar80 = vsqrtps_avx512vl(auVar75);
    auVar75._4_4_ = __real_38d1b717;
    auVar75._0_4_ = __real_38d1b717;
    auVar75._8_4_ = __real_38d1b717;
    auVar75._12_4_ = __real_38d1b717;
    auVar75._16_4_ = __real_38d1b717;
    auVar75._20_4_ = __real_38d1b717;
    auVar75._24_4_ = __real_38d1b717;
    auVar75._28_4_ = __real_38d1b717;
    uVar70 = vcmpps_avx512vl(auVar80,auVar75,1);
    auVar75 = vdivps_avx512vl(auVar77,auVar80);
    auVar77 = vdivps_avx512vl(auVar78,auVar80);
    auVar76 = vfnmadd213ps_avx512vl(auVar76,auVar81,auVar80);
    auVar103._0_4_ = param_3 * auVar76._0_4_;
    auVar103._4_4_ = param_3 * auVar76._4_4_;
    auVar103._8_4_ = param_3 * auVar76._8_4_;
    auVar103._12_4_ = param_3 * auVar76._12_4_;
    auVar103._16_4_ = param_3 * auVar76._16_4_;
    auVar103._20_4_ = param_3 * auVar76._20_4_;
    auVar103._24_4_ = param_3 * auVar76._24_4_;
    auVar103._28_4_ = param_3 * auVar76._28_4_;
    bVar68 = (byte)uVar70;
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
    bVar12 = (bool)((byte)(uVar70 >> 3) & 1);
    bVar20 = (bool)((byte)(uVar70 >> 4) & 1);
    bVar27 = (bool)((byte)(uVar70 >> 5) & 1);
    bVar34 = (bool)((byte)(uVar70 >> 6) & 1);
    bVar41 = SUB81(uVar70 >> 7,0);
    auVar78 = ZEXT1632((undefined1  [16])0x0);
    uVar69 = vcmpps_avx512vl(auVar76,auVar78,1);
    bVar1 = (byte)uVar69;
    auVar95._4_4_ =
         (uint)!(bool)((byte)(uVar69 >> 1) & 1) *
         ((uint)bVar2 * (int)auVar103._4_4_ | (uint)!bVar2 * (int)(auVar103._4_4_ * auVar75._4_4_));
    auVar95._0_4_ =
         (uint)!(bool)(bVar1 & 1) *
         ((uint)(bVar68 & 1) * (int)auVar103._0_4_ |
         (uint)!(bool)(bVar68 & 1) * (int)(auVar103._0_4_ * auVar75._0_4_));
    bVar2 = (bool)((byte)(uVar69 >> 2) & 1);
    auVar95._8_4_ =
         (uint)bVar2 * auVar78._8_4_ |
         (uint)!bVar2 *
         ((uint)bVar4 * (int)auVar103._8_4_ | (uint)!bVar4 * (int)(auVar103._8_4_ * auVar75._8_4_));
    bVar2 = (bool)((byte)(uVar69 >> 3) & 1);
    auVar95._12_4_ =
         (uint)bVar2 * auVar78._12_4_ |
         (uint)!bVar2 *
         ((uint)bVar12 * (int)auVar103._12_4_ |
         (uint)!bVar12 * (int)(auVar103._12_4_ * auVar75._12_4_));
    auVar95._16_4_ =
         (uint)!(bool)((byte)(uVar69 >> 4) & 1) *
         ((uint)bVar20 * (int)auVar103._16_4_ |
         (uint)!bVar20 * (int)(auVar103._16_4_ * auVar75._16_4_));
    auVar95._20_4_ =
         (uint)!(bool)((byte)(uVar69 >> 5) & 1) *
         ((uint)bVar27 * (int)auVar103._20_4_ |
         (uint)!bVar27 * (int)(auVar103._20_4_ * auVar75._20_4_));
    auVar95._24_4_ =
         (uint)!(bool)((byte)(uVar69 >> 6) & 1) *
         ((uint)bVar34 * (int)auVar103._24_4_ |
         (uint)!bVar34 * (int)(auVar103._24_4_ * auVar75._24_4_));
    bVar2 = SUB81(uVar69 >> 7,0);
    auVar95._28_4_ =
         (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar2 *
         ((uint)bVar41 * (int)auVar103._28_4_ |
         (uint)!bVar41 * (int)(auVar103._28_4_ * auVar75._28_4_));
    auVar75 = vaddps_avx512vl(auVar83,auVar95);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar87,uVar48,auVar75);
    auVar96._4_4_ = (uint)!(bool)((byte)(uVar70 >> 1) & 1) * auVar77._4_4_;
    auVar96._0_4_ = (uint)!(bool)(bVar68 & 1) * auVar77._0_4_;
    auVar96._8_4_ = (uint)!(bool)((byte)(uVar70 >> 2) & 1) * auVar77._8_4_;
    auVar96._12_4_ = (uint)!(bool)((byte)(uVar70 >> 3) & 1) * auVar77._12_4_;
    auVar96._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar77._16_4_;
    auVar96._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar77._20_4_;
    iVar99 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
    auVar96._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar77._24_4_;
    bVar2 = SUB81(uVar70 >> 7,0);
    auVar96._28_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar77._28_4_;
    auVar75 = vmulps_avx512vl(auVar96,auVar103);
    auVar97._4_4_ = (uint)!(bool)((byte)(uVar69 >> 1) & 1) * auVar75._4_4_;
    auVar97._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar75._0_4_;
    auVar97._8_4_ = (uint)!(bool)((byte)(uVar69 >> 2) & 1) * auVar75._8_4_;
    auVar97._12_4_ = (uint)!(bool)((byte)(uVar69 >> 3) & 1) * auVar75._12_4_;
    auVar97._16_4_ = (uint)!(bool)((byte)(uVar69 >> 4) & 1) * auVar75._16_4_;
    auVar97._20_4_ = (uint)!(bool)((byte)(uVar69 >> 5) & 1) * auVar75._20_4_;
    auVar97._24_4_ = (uint)!(bool)((byte)(uVar69 >> 6) & 1) * auVar75._24_4_;
    bVar2 = SUB81(uVar69 >> 7,0);
    auVar97._28_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._28_4_;
    auVar75 = vaddps_avx512vl(auVar86,auVar97);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar104),uVar48,auVar75);
    auVar75 = vdivps_avx512vl(auVar79,auVar80);
    bVar2 = SUB81(uVar70 >> 7,0);
    auVar98._4_4_ =
         (uint)!(bool)((byte)(uVar69 >> 1) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 1) & 1) * auVar75._4_4_) * auVar103._4_4_);
    auVar98._0_4_ =
         (uint)!(bool)(bVar1 & 1) *
         (int)((float)((uint)!(bool)(bVar68 & 1) * auVar75._0_4_) * auVar103._0_4_);
    auVar98._8_4_ =
         (uint)!(bool)((byte)(uVar69 >> 2) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 2) & 1) * auVar75._8_4_) * auVar103._8_4_);
    auVar98._12_4_ =
         (uint)!(bool)((byte)(uVar69 >> 3) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 3) & 1) * auVar75._12_4_) * auVar103._12_4_);
    auVar98._16_4_ =
         (uint)!(bool)((byte)(uVar69 >> 4) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar75._16_4_) * auVar103._16_4_);
    auVar98._20_4_ =
         (uint)!(bool)((byte)(uVar69 >> 5) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar75._20_4_) * auVar103._20_4_);
    auVar98._24_4_ =
         (uint)!(bool)((byte)(uVar69 >> 6) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar75._24_4_) * auVar103._24_4_);
    bVar4 = SUB81(uVar69 >> 7,0);
    auVar98._28_4_ =
         (uint)bVar4 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar4 *
         (int)((float)((uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._28_4_) * auVar103._28_4_);
    auVar75 = vaddps_avx512vl(auVar90,auVar98);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar102),uVar48,auVar75);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar75,uVar48,auVar94);
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx512skx @ 1402e27d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFTether_5D__3E_un_3C_CunT_3E_un_3C_Cunf_3E_un_3C_CunT_3E_un_3C_Cunf_3E_CuniCuni_avx512skx
               (undefined4 *param_1,undefined1 (*param_2) [32],longlong param_3,longlong param_4,
               longlong param_5,undefined8 *param_6,uint param_7,undefined8 param_8,
               undefined1 (*param_9) [16])

{
  int iVar1;
  byte bVar2;
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
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  ulonglong uVar56;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  longlong lVar69;
  undefined1 (*pauVar70) [32];
  longlong unaff_RBX;
  longlong lVar71;
  longlong lVar72;
  uint uVar73;
  uint uVar74;
  longlong lVar75;
  longlong lVar76;
  longlong lVar77;
  longlong unaff_R14;
  longlong lVar78;
  longlong lVar79;
  byte bVar80;
  ulonglong uVar81;
  ulonglong uVar82;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar84 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
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
  undefined1 auVar89 [16];
  undefined1 auVar112 [32];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 auVar123 [16];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  int local_1a0;
  int iStack_19c;
  int aiStack_198 [4];
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
  int local_140;
  int iStack_13c;
  int aiStack_138 [4];
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
  undefined1 local_58 [16];
  int iVar83;
  undefined1 auVar90 [16];
  int iVar117;
  int iVar118;
  
  auVar123 = in_ZMM26._0_16_;
  auVar88 = in_ZMM25._0_16_;
  auVar87 = in_ZMM24._0_16_;
  local_58 = in_ZMM14._0_16_;
  auVar84 = vpsllw_avx512vl(*param_9,0xf);
  uVar81 = vpmovw2m_avx512vl(auVar84);
  auVar94 = vpbroadcastd_avx512vl();
  uVar82 = vpcmpgtd_avx512vl(auVar94,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
  uVar82 = uVar81 & 0xff & uVar82;
  bVar80 = (byte)uVar82;
  if (bVar80 != 0) {
    if (bVar80 == 0xff) {
      auVar95 = param_2[1];
      auVar97 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,*param_2,auVar95);
      auVar96 = vmovdqa64_avx512vl(
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  );
      auVar96 = vpermi2d_avx512vl(auVar96,param_2[2],auVar95);
      auVar98 = vinserti32x4_avx512vl(auVar97,auVar96._0_16_,1);
      auVar97 = vshufi64x2_avx512vl(auVar97,auVar96,3);
      auVar95 = vpblendd_avx2(auVar95,*param_2,0x24);
      auVar95 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,auVar95,param_2[2]);
    }
    else {
      auVar95 = vpgatherdd_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
      auVar98._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar95._4_4_;
      auVar98._0_4_ = (uint)(bVar80 & 1) * auVar95._0_4_;
      auVar98._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar95._8_4_;
      auVar98._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar95._12_4_;
      auVar98._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar95._16_4_;
      auVar98._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar95._20_4_;
      auVar98._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar95._24_4_;
      auVar98._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar95._28_4_;
      auVar95 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + unaff_RBX));
      auVar97._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar95._4_4_;
      auVar97._0_4_ = (uint)(bVar80 & 1) * auVar95._0_4_;
      auVar97._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar95._8_4_;
      auVar97._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar95._12_4_;
      auVar97._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar95._16_4_;
      auVar97._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar95._20_4_;
      auVar97._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar95._24_4_;
      auVar97._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar95._28_4_;
      auVar96 = vpgatherdd_avx512vl(*(undefined4 *)*param_2);
      auVar95._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar96._4_4_;
      auVar95._0_4_ = (uint)(bVar80 & 1) * auVar96._0_4_;
      auVar95._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar96._8_4_;
      auVar95._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar96._12_4_;
      auVar95._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar96._16_4_;
      auVar95._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar96._20_4_;
      auVar95._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar96._24_4_;
      auVar95._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar96._28_4_;
    }
    uVar82 = vpcmpgtd_avx512vl(auVar94,
                               ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                              );
    local_200 = vmovdqu32_avx512vl(auVar98);
    local_1e0 = vmovdqu32_avx512vl(auVar97);
    bVar3 = (bool)((byte)uVar82 & 1);
    local_1c0 = (float)((uint)bVar3 * auVar95._0_4_ | (uint)!bVar3 * (int)local_1c0);
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    fStack_1bc = (float)((uint)bVar3 * auVar95._4_4_ | (uint)!bVar3 * (int)fStack_1bc);
    bVar3 = (bool)((byte)(uVar82 >> 2) & 1);
    fStack_1b8 = (float)((uint)bVar3 * auVar95._8_4_ | (uint)!bVar3 * (int)fStack_1b8);
    bVar3 = (bool)((byte)(uVar82 >> 3) & 1);
    fStack_1b4 = (float)((uint)bVar3 * auVar95._12_4_ | (uint)!bVar3 * (int)fStack_1b4);
    bVar3 = (bool)((byte)(uVar82 >> 4) & 1);
    fStack_1b0 = (float)((uint)bVar3 * auVar95._16_4_ | (uint)!bVar3 * (int)fStack_1b0);
    bVar3 = (bool)((byte)(uVar82 >> 5) & 1);
    fStack_1ac = (float)((uint)bVar3 * auVar95._20_4_ | (uint)!bVar3 * (int)fStack_1ac);
    bVar3 = (bool)((byte)(uVar82 >> 6) & 1);
    fStack_1a8 = (float)((uint)bVar3 * auVar95._24_4_ | (uint)!bVar3 * (int)fStack_1a8);
    bVar3 = SUB81(uVar82 >> 7,0);
    fStack_1a4 = (float)((uint)bVar3 * auVar95._28_4_ | (uint)!bVar3 * (int)fStack_1a4);
  }
  uVar74 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar74 = param_7;
  }
  auVar95 = vpbroadcastd_avx512vl();
  uVar74 = uVar74 & 0xfffffff8;
  uVar82 = (ulonglong)uVar74;
  if ((int)uVar74 < 1) {
    uVar73 = 0;
  }
  else {
    uVar81 = 0;
    auVar84._4_4_ = __real_00000008;
    auVar84._0_4_ = __real_00000008;
    auVar84._8_4_ = __real_00000008;
    auVar84._12_4_ = __real_00000008;
    auVar97 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                                );
    auVar96 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar98 = vmovdqa64_avx512vl(
                                ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                );
    auVar99 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar100 = vmovdqa64_avx512vl(
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 );
    vmovdqa64_avx512vl(___ymm_00000054000000480000003c0000003000000024000000180000000c00000000);
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    do {
      fVar68 = fStack_1a4;
      fVar67 = fStack_1a8;
      fVar66 = fStack_1ac;
      fVar65 = fStack_1b0;
      fVar64 = fStack_1b4;
      fVar63 = fStack_1b8;
      fVar62 = fStack_1bc;
      fVar61 = local_1c0;
      pauVar70 = param_2 + 3;
      auVar102 = vpaddd_avx512vl(auVar95,local_200);
      vpslld_avx512vl(auVar102,4);
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar103 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      auVar104 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar105 = vpaddd_avx512vl(auVar95,local_1e0);
      auVar105 = vpslld_avx512vl(auVar105,4);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar106 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar107 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      in_ZMM27 = ZEXT3264(auVar107);
      auVar108 = vpbroadcastd_avx512vl();
      auVar108 = vpaddd_avx512vl(auVar108,auVar97);
      auVar123 = auVar105._0_16_ | auVar84;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar105 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar82));
      in_ZMM28 = ZEXT3264(auVar105);
      lVar76 = (longlong)(int)local_1e0._12_4_;
      lVar77 = (longlong)(int)local_1e0._8_4_;
      lVar75 = (longlong)(int)local_1e0._4_4_;
      lVar72 = (longlong)(int)local_1e0._0_4_;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar109 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      in_ZMM31 = ZEXT3264(auVar109);
      unaff_R14 = (longlong)(int)local_1e0._28_4_;
      lVar79 = (longlong)(int)local_1e0._24_4_;
      lVar71 = (longlong)(int)local_1e0._20_4_;
      lVar69 = (longlong)(int)local_1e0._16_4_;
      uVar82 = vpcmpgtd_avx512vl(auVar94,auVar108);
      bVar80 = (byte)uVar82;
      if (bVar80 != 0) {
        if (bVar80 == 0xff) {
          auVar108 = param_2[4];
          auVar101 = vpblendd_avx2(auVar108,*pauVar70,0x24);
          auVar110 = vpermt2d_avx512vl(*pauVar70,auVar98,auVar108);
          in_ZMM14 = ZEXT3264(auVar110);
          auVar111 = vpermt2d_avx512vl(auVar101,auVar100,param_2[5]);
          auVar108 = vpermt2d_avx512vl(param_2[5],auVar99,auVar108);
          auVar101._16_16_ = ZEXT116(0) * auVar110._16_16_ | ZEXT116(1) * auVar108._0_16_;
          auVar101._0_16_ = ZEXT116(0) * auVar108._0_16_ | ZEXT116(1) * auVar110._0_16_;
          auVar108 = vperm2i128_avx2(auVar110,auVar108,0x31);
        }
        else {
          auVar108 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar70 + (longlong)aiStack_198));
          auVar101._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar108._4_4_;
          auVar101._0_4_ = (uint)(bVar80 & 1) * auVar108._0_4_;
          auVar101._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar108._8_4_;
          auVar101._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar108._12_4_;
          auVar101._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar108._16_4_;
          auVar101._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar108._20_4_;
          auVar101._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar108._24_4_;
          auVar101._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar108._28_4_;
          auVar110 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar70 + lVar72));
          auVar108._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar110._4_4_;
          auVar108._0_4_ = (uint)(bVar80 & 1) * auVar110._0_4_;
          auVar108._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar110._8_4_;
          auVar108._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar110._12_4_;
          auVar108._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar110._16_4_;
          auVar108._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar110._20_4_;
          auVar108._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar110._24_4_;
          auVar108._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar110._28_4_;
          auVar110 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar70 + uVar81));
          auVar111._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar110._4_4_;
          auVar111._0_4_ = (uint)(bVar80 & 1) * auVar110._0_4_;
          auVar111._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar110._8_4_;
          auVar111._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar110._12_4_;
          auVar111._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar110._16_4_;
          auVar111._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar110._20_4_;
          auVar111._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar110._24_4_;
          auVar111._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar110._28_4_;
        }
        local_200 = vmovdqu32_avx512vl(auVar101);
        local_1e0 = vmovdqu32_avx512vl(auVar108);
        local_1c0 = (float)((uint)(bVar80 & 1) * auVar111._0_4_ |
                           (uint)!(bool)(bVar80 & 1) * (int)local_1c0);
        bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
        fStack_1bc = (float)((uint)bVar3 * auVar111._4_4_ | (uint)!bVar3 * (int)fStack_1bc);
        bVar3 = (bool)((byte)(uVar82 >> 2) & 1);
        fStack_1b8 = (float)((uint)bVar3 * auVar111._8_4_ | (uint)!bVar3 * (int)fStack_1b8);
        bVar3 = (bool)((byte)(uVar82 >> 3) & 1);
        fStack_1b4 = (float)((uint)bVar3 * auVar111._12_4_ | (uint)!bVar3 * (int)fStack_1b4);
        bVar3 = (bool)((byte)(uVar82 >> 4) & 1);
        fStack_1b0 = (float)((uint)bVar3 * auVar111._16_4_ | (uint)!bVar3 * (int)fStack_1b0);
        bVar3 = (bool)((byte)(uVar82 >> 5) & 1);
        fStack_1ac = (float)((uint)bVar3 * auVar111._20_4_ | (uint)!bVar3 * (int)fStack_1ac);
        bVar3 = (bool)((byte)(uVar82 >> 6) & 1);
        fStack_1a8 = (float)((uint)bVar3 * auVar111._24_4_ | (uint)!bVar3 * (int)fStack_1a8);
        bVar3 = SUB81(uVar82 >> 7,0);
        fStack_1a4 = (float)((uint)bVar3 * auVar111._28_4_ | (uint)!bVar3 * (int)fStack_1a4);
      }
      uVar82 = (ulonglong)*(byte *)(param_5 + lVar72);
      auVar87 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar72)),(uint)*(byte *)(param_3 + lVar75),1
                           );
      auVar88 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + lVar72)),(uint)*(byte *)(param_5 + lVar75),1
                           );
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_3 + lVar77),2);
      auVar88 = vpinsrb_avx(auVar88,(uint)*(byte *)(param_5 + lVar77),2);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_3 + lVar76),3);
      auVar88 = vpinsrb_avx(auVar88,(uint)*(byte *)(param_5 + lVar76),3);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_3 + lVar69),4);
      auVar88 = vpinsrb_avx(auVar88,(uint)*(byte *)(param_5 + lVar69),4);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_3 + lVar71),5);
      auVar88 = vpinsrb_avx(auVar88,(uint)*(byte *)(param_5 + lVar71),5);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_3 + lVar79),6);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_3 + unaff_R14),7);
      auVar108 = vpmovzxbd_avx2(auVar87);
      auVar108 = vpslld_avx2(auVar108,2);
      vpmovzxdq_avx2(auVar108._16_16_);
      vpmovzxdq_avx2(auVar108._0_16_);
      auVar85 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + uVar82));
      auVar86 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + lVar76));
      auVar87 = vpinsrb_avx(auVar88,(uint)*(byte *)(param_5 + lVar79),6);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_5 + unaff_R14),7);
      auVar120._16_16_ = auVar86;
      auVar120._0_16_ = auVar85;
      auVar108 = vpmovzxbd_avx2(auVar87);
      auVar108 = vpslld_avx2(auVar108,2);
      vpmovzxdq_avx2(auVar108._16_16_);
      vpmovzxdq_avx2(auVar108._0_16_);
      auVar87 = vgatherqps_avx512vl(*(undefined8 *)((longlong)param_6 + lVar75));
      auVar88 = vgatherqps_avx512vl(*(undefined8 *)((longlong)param_6 + lVar76));
      auVar102 = vsubps_avx512vl(auVar102,auVar106);
      auVar103 = vsubps_avx512vl(auVar103,auVar107);
      auVar104 = vsubps_avx512vl(auVar104,auVar105);
      auVar122._0_4_ =
           auVar104._0_4_ * auVar104._0_4_ +
           auVar102._0_4_ * auVar102._0_4_ + auVar103._0_4_ * auVar103._0_4_;
      auVar122._4_4_ =
           auVar104._4_4_ * auVar104._4_4_ +
           auVar102._4_4_ * auVar102._4_4_ + auVar103._4_4_ * auVar103._4_4_;
      auVar122._8_4_ =
           auVar104._8_4_ * auVar104._8_4_ +
           auVar102._8_4_ * auVar102._8_4_ + auVar103._8_4_ * auVar103._8_4_;
      auVar122._12_4_ =
           auVar104._12_4_ * auVar104._12_4_ +
           auVar102._12_4_ * auVar102._12_4_ + auVar103._12_4_ * auVar103._12_4_;
      auVar122._16_4_ =
           auVar104._16_4_ * auVar104._16_4_ +
           auVar102._16_4_ * auVar102._16_4_ + auVar103._16_4_ * auVar103._16_4_;
      auVar122._20_4_ =
           auVar104._20_4_ * auVar104._20_4_ +
           auVar102._20_4_ * auVar102._20_4_ + auVar103._20_4_ * auVar103._20_4_;
      auVar122._24_4_ =
           auVar104._24_4_ * auVar104._24_4_ +
           auVar102._24_4_ * auVar102._24_4_ + auVar103._24_4_ * auVar103._24_4_;
      auVar122._28_4_ =
           auVar104._28_4_ * auVar104._28_4_ +
           auVar102._28_4_ * auVar102._28_4_ + auVar103._28_4_ * auVar103._28_4_;
      auVar108 = vsqrtps_avx(auVar122);
      uVar56 = vcmpps_avx512vl(auVar108,auVar96,1);
      auVar102 = vdivps_avx(auVar102,auVar108);
      auVar103 = vdivps_avx(auVar103,auVar108);
      auVar104 = vdivps_avx(auVar104,auVar108);
      bVar80 = (byte)uVar56;
      auVar110._4_4_ = (uint)!(bool)((byte)(uVar56 >> 1) & 1) * auVar103._4_4_;
      auVar110._0_4_ = (uint)!(bool)(bVar80 & 1) * auVar103._0_4_;
      auVar110._8_4_ = (uint)!(bool)((byte)(uVar56 >> 2) & 1) * auVar103._8_4_;
      auVar110._12_4_ = (uint)!(bool)((byte)(uVar56 >> 3) & 1) * auVar103._12_4_;
      auVar110._16_4_ = (uint)!(bool)((byte)(uVar56 >> 4) & 1) * auVar103._16_4_;
      auVar110._20_4_ = (uint)!(bool)((byte)(uVar56 >> 5) & 1) * auVar103._20_4_;
      auVar110._24_4_ = (uint)!(bool)((byte)(uVar56 >> 6) & 1) * auVar103._24_4_;
      bVar3 = SUB81(uVar56 >> 7,0);
      auVar110._28_4_ =
           (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar103._28_4_
      ;
      auVar103._4_4_ = (uint)!(bool)((byte)(uVar56 >> 1) & 1) * auVar104._4_4_;
      auVar103._0_4_ = (uint)!(bool)(bVar80 & 1) * auVar104._0_4_;
      auVar103._8_4_ = (uint)!(bool)((byte)(uVar56 >> 2) & 1) * auVar104._8_4_;
      auVar103._12_4_ = (uint)!(bool)((byte)(uVar56 >> 3) & 1) * auVar104._12_4_;
      auVar103._16_4_ = (uint)!(bool)((byte)(uVar56 >> 4) & 1) * auVar104._16_4_;
      auVar103._20_4_ = (uint)!(bool)((byte)(uVar56 >> 5) & 1) * auVar104._20_4_;
      auVar103._24_4_ = (uint)!(bool)((byte)(uVar56 >> 6) & 1) * auVar104._24_4_;
      auVar103._28_4_ = (uint)!SUB81(uVar56 >> 7,0) * auVar104._28_4_;
      auVar121._0_4_ = -(fVar61 * auVar87._0_4_) + auVar108._0_4_;
      auVar121._4_4_ = -(fVar62 * auVar87._4_4_) + auVar108._4_4_;
      auVar121._8_4_ = -(fVar63 * auVar87._8_4_) + auVar108._8_4_;
      auVar121._12_4_ = -(fVar64 * auVar87._12_4_) + auVar108._12_4_;
      auVar121._16_4_ = -(fVar65 * auVar88._0_4_) + auVar108._16_4_;
      auVar121._20_4_ = -(fVar66 * auVar88._4_4_) + auVar108._20_4_;
      auVar121._24_4_ = -(fVar67 * auVar88._8_4_) + auVar108._24_4_;
      auVar121._28_4_ = -(fVar68 * auVar88._12_4_) + auVar108._28_4_;
      auVar119._0_4_ = auVar85._0_4_ * auVar121._0_4_;
      auVar119._4_4_ = auVar85._4_4_ * auVar121._4_4_;
      auVar119._8_4_ = auVar85._8_4_ * auVar121._8_4_;
      auVar119._12_4_ = auVar85._12_4_ * auVar121._12_4_;
      auVar119._16_4_ = auVar86._0_4_ * auVar121._16_4_;
      auVar119._20_4_ = auVar86._4_4_ * auVar121._20_4_;
      auVar119._24_4_ = auVar86._8_4_ * auVar121._24_4_;
      auVar119._28_4_ = auVar86._12_4_ * auVar121._28_4_;
      bVar3 = (bool)((byte)(uVar56 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar56 >> 2) & 1);
      bVar18 = (bool)((byte)(uVar56 >> 3) & 1);
      bVar28 = (bool)((byte)(uVar56 >> 4) & 1);
      bVar35 = (bool)((byte)(uVar56 >> 5) & 1);
      bVar42 = (bool)((byte)(uVar56 >> 6) & 1);
      bVar49 = SUB81(uVar56 >> 7,0);
      uVar56 = vcmpps_avx512vl(auVar121,ZEXT1232(ZEXT812(0)),1);
      bVar2 = (byte)uVar56;
      auVar104._4_4_ =
           (uint)!(bool)((byte)(uVar56 >> 1) & 1) *
           ((uint)bVar3 * (int)auVar119._4_4_ |
           (uint)!bVar3 * (int)(auVar119._4_4_ * auVar102._4_4_));
      auVar104._0_4_ =
           (uint)!(bool)(bVar2 & 1) *
           ((uint)(bVar80 & 1) * (int)auVar119._0_4_ |
           (uint)!(bool)(bVar80 & 1) * (int)(auVar119._0_4_ * auVar102._0_4_));
      auVar104._8_4_ =
           (uint)!(bool)((byte)(uVar56 >> 2) & 1) *
           ((uint)bVar8 * (int)auVar119._8_4_ |
           (uint)!bVar8 * (int)(auVar119._8_4_ * auVar102._8_4_));
      auVar104._12_4_ =
           (uint)!(bool)((byte)(uVar56 >> 3) & 1) *
           ((uint)bVar18 * (int)auVar119._12_4_ |
           (uint)!bVar18 * (int)(auVar119._12_4_ * auVar102._12_4_));
      auVar104._16_4_ =
           (uint)!(bool)((byte)(uVar56 >> 4) & 1) *
           ((uint)bVar28 * (int)auVar119._16_4_ |
           (uint)!bVar28 * (int)(auVar119._16_4_ * auVar102._16_4_));
      auVar104._20_4_ =
           (uint)!(bool)((byte)(uVar56 >> 5) & 1) *
           ((uint)bVar35 * (int)auVar119._20_4_ |
           (uint)!bVar35 * (int)(auVar119._20_4_ * auVar102._20_4_));
      auVar104._24_4_ =
           (uint)!(bool)((byte)(uVar56 >> 6) & 1) *
           ((uint)bVar42 * (int)auVar119._24_4_ |
           (uint)!bVar42 * (int)(auVar119._24_4_ * auVar102._24_4_));
      auVar104._28_4_ =
           (uint)!SUB81(uVar56 >> 7,0) *
           ((uint)bVar49 * (int)auVar119._28_4_ |
           (uint)!bVar49 * (int)(auVar119._28_4_ * auVar102._28_4_));
      auVar102 = vaddps_avx512vl(auVar106,auVar104);
      in_ZMM29 = ZEXT3264(auVar102);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar103,0xffff,auVar102);
      auVar102 = vmulps_avx512vl(auVar110,auVar119);
      auVar106._4_4_ = (uint)!(bool)((byte)(uVar56 >> 1) & 1) * auVar102._4_4_;
      auVar106._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar102._0_4_;
      auVar106._8_4_ = (uint)!(bool)((byte)(uVar56 >> 2) & 1) * auVar102._8_4_;
      auVar106._12_4_ = (uint)!(bool)((byte)(uVar56 >> 3) & 1) * auVar102._12_4_;
      auVar106._16_4_ = (uint)!(bool)((byte)(uVar56 >> 4) & 1) * auVar102._16_4_;
      auVar106._20_4_ = (uint)!(bool)((byte)(uVar56 >> 5) & 1) * auVar102._20_4_;
      auVar106._24_4_ = (uint)!(bool)((byte)(uVar56 >> 6) & 1) * auVar102._24_4_;
      auVar106._28_4_ = (uint)!SUB81(uVar56 >> 7,0) * auVar102._28_4_;
      auVar102 = vaddps_avx512vl(auVar107,auVar106);
      auVar88 = auVar102._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar110,0xffff,auVar102);
      auVar102 = vmulps_avx512vl(auVar103,auVar119);
      auVar107._4_4_ = (uint)!(bool)((byte)(uVar56 >> 1) & 1) * auVar102._4_4_;
      auVar107._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar102._0_4_;
      auVar107._8_4_ = (uint)!(bool)((byte)(uVar56 >> 2) & 1) * auVar102._8_4_;
      auVar107._12_4_ = (uint)!(bool)((byte)(uVar56 >> 3) & 1) * auVar102._12_4_;
      auVar107._16_4_ = (uint)!(bool)((byte)(uVar56 >> 4) & 1) * auVar102._16_4_;
      auVar107._20_4_ = (uint)!(bool)((byte)(uVar56 >> 5) & 1) * auVar102._20_4_;
      auVar107._24_4_ = (uint)!(bool)((byte)(uVar56 >> 6) & 1) * auVar102._24_4_;
      auVar107._28_4_ = (uint)!SUB81(uVar56 >> 7,0) * auVar102._28_4_;
      auVar102 = vaddps_avx512vl(auVar105,auVar107);
      auVar87 = auVar102._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar120,0xffff,auVar102);
      vscatterdps_avx512vl(ZEXT832(param_1) + in_ZMM14._0_32_,0xffff,auVar109);
      uVar73 = (int)uVar81 + 8;
      uVar81 = (ulonglong)uVar73;
      param_2 = pauVar70;
    } while ((int)uVar73 < (int)uVar74);
  }
  if ((int)uVar73 < (int)param_7) {
    auVar97 = vpbroadcastd_avx512vl();
    auVar96 = vpord_avx512vl(auVar97,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    uVar56 = vpcmpgtd_avx512vl(auVar94,auVar96);
    auVar102._4_4_ = fStack_1bc;
    auVar102._0_4_ = local_1c0;
    auVar102._8_4_ = fStack_1b8;
    auVar102._12_4_ = fStack_1b4;
    auVar102._16_4_ = fStack_1b0;
    auVar102._20_4_ = fStack_1ac;
    auVar102._24_4_ = fStack_1a8;
    auVar102._28_4_ = fStack_1a4;
    auVar96 = vmovdqa32_avx512vl(local_1e0);
    bVar80 = (byte)uVar56;
    lVar77 = (longlong)(int)((uint)(bVar80 & 1) * auVar96._0_4_);
    lVar76 = (longlong)(int)((uint)((byte)(uVar56 >> 1) & 1) * auVar96._4_4_);
    lVar72 = (longlong)(int)((uint)((byte)(uVar56 >> 2) & 1) * auVar96._8_4_);
    lVar78 = (longlong)(int)((uint)((byte)(uVar56 >> 3) & 1) * auVar96._12_4_);
    lVar79 = (longlong)(int)((uint)((byte)(uVar56 >> 4) & 1) * auVar96._16_4_);
    lVar75 = (longlong)(int)((uint)((byte)(uVar56 >> 5) & 1) * auVar96._20_4_);
    lVar69 = (longlong)(int)((uint)((byte)(uVar56 >> 6) & 1) * auVar96._24_4_);
    lVar71 = (longlong)(int)((uint)(byte)(uVar56 >> 7) * auVar96._28_4_);
    auVar84 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar77)),(uint)*(byte *)(param_3 + lVar76),1);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_3 + lVar72),2);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_3 + lVar78),3);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_3 + lVar79),4);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_3 + lVar75),5);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_3 + lVar69),6);
    auVar85 = vpinsrb_avx512bw(auVar84,(uint)*(byte *)(param_3 + lVar71),7);
    auVar84 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + lVar77)),(uint)*(byte *)(param_5 + lVar76),1);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_5 + lVar72),2);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_5 + lVar78),3);
    auVar96._0_4_ = auVar95._0_4_ + local_200._0_4_;
    auVar96._4_4_ = auVar95._4_4_ + local_200._4_4_;
    auVar96._8_4_ = auVar95._8_4_ + local_200._8_4_;
    auVar96._12_4_ = auVar95._12_4_ + local_200._12_4_;
    auVar96._16_4_ = auVar95._16_4_ + local_200._16_4_;
    auVar96._20_4_ = auVar95._20_4_ + local_200._20_4_;
    auVar96._24_4_ = auVar95._24_4_ + local_200._24_4_;
    auVar96._28_4_ = auVar95._28_4_ + local_200._28_4_;
    vpslld_avx2(auVar96,4);
    auVar96 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar98 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_198));
    auVar103 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    iVar118 = (uint)(bVar80 & 1) * auVar103._0_4_;
    iVar83 = (uint)((byte)(uVar56 >> 1) & 1) * auVar103._4_4_;
    auVar86._4_4_ = iVar83;
    auVar86._0_4_ = iVar118;
    iVar1 = (uint)((byte)(uVar56 >> 2) & 1) * auVar103._8_4_;
    auVar86._8_4_ = iVar1;
    iVar117 = (uint)((byte)(uVar56 >> 3) & 1) * auVar103._12_4_;
    auVar86._12_4_ = iVar117;
    auVar99._0_4_ = local_1e0._0_4_ + auVar95._0_4_;
    auVar99._4_4_ = local_1e0._4_4_ + auVar95._4_4_;
    auVar99._8_4_ = local_1e0._8_4_ + auVar95._8_4_;
    auVar99._12_4_ = local_1e0._12_4_ + auVar95._12_4_;
    auVar99._16_4_ = local_1e0._16_4_ + auVar95._16_4_;
    auVar99._20_4_ = local_1e0._20_4_ + auVar95._20_4_;
    auVar99._24_4_ = local_1e0._24_4_ + auVar95._24_4_;
    auVar99._28_4_ = local_1e0._28_4_ + auVar95._28_4_;
    auVar95 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar104 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar72));
    auVar108 = vpslld_avx2(auVar99,4);
    auVar87 = vxorps_avx512vl(auVar87,auVar87);
    auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar72));
    bVar18 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar19 = (bool)((byte)(uVar56 >> 3) & 1);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_5 + lVar79),4);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_5 + lVar75),5);
    auVar88 = vxorps_avx512vl(auVar88,auVar88);
    auVar106 = vgatherdps_avx512vl(*param_1);
    bVar28 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar20 = (bool)((byte)(uVar56 >> 3) & 1);
    auVar123 = vxorps_avx512vl(auVar123,auVar123);
    auVar107 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar35 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar21 = (bool)((byte)(uVar56 >> 3) & 1);
    auVar84 = vpinsrb_avx(auVar84,(uint)*(byte *)(param_5 + lVar69),6);
    auVar84 = vpinsrb_avx512bw(auVar84,(uint)*(byte *)(param_5 + lVar71),7);
    auVar100._4_4_ = __real_0000000c;
    auVar100._0_4_ = __real_0000000c;
    auVar100._8_4_ = __real_0000000c;
    auVar100._12_4_ = __real_0000000c;
    auVar100._16_4_ = __real_0000000c;
    auVar100._20_4_ = __real_0000000c;
    auVar100._24_4_ = __real_0000000c;
    auVar100._28_4_ = __real_0000000c;
    auVar89 = vxorps_avx512vl(auVar96._0_16_,auVar96._0_16_);
    auVar105 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_198));
    auVar112._0_4_ = (uint)(bVar80 & 1) * auVar105._0_4_ | (uint)!(bool)(bVar80 & 1) * auVar89._0_4_
    ;
    bVar3 = (bool)((byte)(uVar56 >> 1) & 1);
    auVar112._4_4_ = (uint)bVar3 * auVar105._4_4_ | (uint)!bVar3 * auVar89._4_4_;
    bVar3 = (bool)((byte)(uVar56 >> 2) & 1);
    auVar112._8_4_ = (uint)bVar3 * auVar105._8_4_ | (uint)!bVar3 * auVar89._8_4_;
    bVar3 = (bool)((byte)(uVar56 >> 3) & 1);
    auVar112._12_4_ = (uint)bVar3 * auVar105._12_4_ | (uint)!bVar3 * auVar89._12_4_;
    auVar112._16_4_ = (uint)((byte)(uVar56 >> 4) & 1) * auVar105._16_4_;
    auVar112._20_4_ = (uint)((byte)(uVar56 >> 5) & 1) * auVar105._20_4_;
    auVar112._24_4_ = (uint)((byte)(uVar56 >> 6) & 1) * auVar105._24_4_;
    auVar112._28_4_ = (uint)(byte)(uVar56 >> 7) * auVar105._28_4_;
    auVar89 = vxorps_avx512vl(auVar95._0_16_,auVar95._0_16_);
    bVar42 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar22 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar29 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar36 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar43 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar50 = SUB81(uVar56 >> 7,0);
    bVar49 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar23 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar30 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar37 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar44 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar51 = SUB81(uVar56 >> 7,0);
    bVar4 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar14 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar24 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar31 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar38 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar45 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar52 = SUB81(uVar56 >> 7,0);
    bVar5 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar15 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar25 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar32 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar39 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar46 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar53 = SUB81(uVar56 >> 7,0);
    bVar6 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar16 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar26 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar33 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar40 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar47 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar54 = SUB81(uVar56 >> 7,0);
    bVar7 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar17 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar27 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar34 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar41 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar48 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar55 = SUB81(uVar56 >> 7,0);
    auVar97 = vpaddd_avx512vl(auVar97,
                              ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                             );
    vpcmpgtd_avx512vl(auVar94,auVar97);
    auVar94 = vpmovzxbd_avx512vl(auVar85);
    auVar97 = vpslld_avx2(auVar94,2);
    auVar85 = vextracti32x4_avx512vl(auVar97,1);
    auVar94 = vpmovzxdq_avx512vl(auVar85);
    vpmovzxdq_avx2(auVar97._0_16_);
    uVar82 = uVar56 >> 4 & 0xf;
    auVar85 = vgatherqps_avx512vl(*(undefined8 *)(param_4 * 2));
    auVar90 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + lVar71));
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    auVar91._8_8_ = (ulonglong)bVar3 * auVar90._8_8_ | (ulonglong)!bVar3 * SUB168(ZEXT816(0),4);
    auVar91._0_8_ = (ulonglong)((byte)uVar82 & 1) * auVar90._0_8_;
    auVar90 = vxorps_avx512vl(auVar94._0_16_,auVar94._0_16_);
    auVar94 = vpmovzxbd_avx512vl(auVar84);
    auVar94 = vpslld_avx512vl(auVar94,2);
    auVar84 = vextracti32x4_avx512vl(auVar94,1);
    vpmovzxdq_avx512vl(auVar94._0_16_);
    auVar86 = vxorps_avx512vl(auVar86,auVar86);
    auVar92 = vgatherqps_avx512vl(*param_6);
    bVar8 = (bool)((byte)(uVar56 >> 1) & 1);
    vpmovzxdq_avx512vl(auVar84);
    auVar84 = vgatherqps_avx512vl(*param_6);
    bVar3 = (bool)((byte)uVar82 & 1);
    auVar93._0_8_ = (ulonglong)bVar3 * auVar84._0_8_ | (ulonglong)!bVar3 * auVar90._0_8_;
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    auVar93._8_8_ = (ulonglong)bVar3 * auVar84._8_8_ | (ulonglong)!bVar3 * auVar90._8_8_;
    auVar58._4_4_ =
         (uint)bVar42 * (uint)((byte)(uVar56 >> 1) & 1) * auVar98._4_4_ | (uint)!bVar42 * iStack_13c
    ;
    auVar58._0_4_ =
         (uint)(bVar80 & 1) * (uint)(bVar80 & 1) * auVar98._0_4_ |
         (uint)!(bool)(bVar80 & 1) * local_140;
    auVar58._8_4_ =
         (uint)bVar12 * (uint)((byte)(uVar56 >> 2) & 1) * auVar98._8_4_ |
         (uint)!bVar12 * aiStack_138[0];
    auVar58._12_4_ =
         (uint)bVar22 * (uint)((byte)(uVar56 >> 3) & 1) * auVar98._12_4_ |
         (uint)!bVar22 * aiStack_138[1];
    auVar58._16_4_ =
         (uint)bVar29 * (uint)((byte)(uVar56 >> 4) & 1) * auVar98._16_4_ |
         (uint)!bVar29 * aiStack_138[2];
    auVar58._20_4_ =
         (uint)bVar36 * (uint)((byte)(uVar56 >> 5) & 1) * auVar98._20_4_ |
         (uint)!bVar36 * aiStack_138[3];
    auVar58._24_4_ =
         (uint)bVar43 * (uint)((byte)(uVar56 >> 6) & 1) * auVar98._24_4_ |
         (uint)!bVar43 * iStack_128;
    auVar58._28_4_ =
         (uint)bVar50 * (uint)(byte)(uVar56 >> 7) * auVar98._28_4_ | (uint)!bVar50 * iStack_124;
    auVar59._4_4_ = (uint)bVar49 * iVar83 | (uint)!bVar49 * iStack_11c;
    auVar59._0_4_ = (uint)(bVar80 & 1) * iVar118 | (uint)!(bool)(bVar80 & 1) * local_120;
    auVar59._8_4_ = (uint)bVar13 * iVar1 | (uint)!bVar13 * iStack_118;
    auVar59._12_4_ = (uint)bVar23 * iVar117 | (uint)!bVar23 * iStack_114;
    auVar59._16_4_ =
         (uint)bVar30 * (uint)((byte)(uVar56 >> 4) & 1) * auVar103._16_4_ |
         (uint)!bVar30 * iStack_110;
    auVar59._20_4_ =
         (uint)bVar37 * (uint)((byte)(uVar56 >> 5) & 1) * auVar103._20_4_ |
         (uint)!bVar37 * iStack_10c;
    auVar59._24_4_ =
         (uint)bVar44 * (uint)((byte)(uVar56 >> 6) & 1) * auVar103._24_4_ |
         (uint)!bVar44 * iStack_108;
    auVar59._28_4_ =
         (uint)bVar51 * (uint)(byte)(uVar56 >> 7) * auVar103._28_4_ | (uint)!bVar51 * iStack_104;
    auVar60._4_4_ =
         (uint)bVar4 * (uint)((byte)(uVar56 >> 1) & 1) * auVar104._4_4_ | (uint)!bVar4 * iStack_fc;
    auVar60._0_4_ =
         (uint)(bVar80 & 1) * (uint)(bVar80 & 1) * auVar104._0_4_ |
         (uint)!(bool)(bVar80 & 1) * local_100;
    auVar60._8_4_ =
         (uint)bVar14 * (uint)((byte)(uVar56 >> 2) & 1) * auVar104._8_4_ | (uint)!bVar14 * iStack_f8
    ;
    auVar60._12_4_ =
         (uint)bVar24 * (uint)((byte)(uVar56 >> 3) & 1) * auVar104._12_4_ |
         (uint)!bVar24 * iStack_f4;
    auVar60._16_4_ =
         (uint)bVar31 * (uint)((byte)(uVar56 >> 4) & 1) * auVar104._16_4_ |
         (uint)!bVar31 * iStack_f0;
    auVar60._20_4_ =
         (uint)bVar38 * (uint)((byte)(uVar56 >> 5) & 1) * auVar104._20_4_ |
         (uint)!bVar38 * iStack_ec;
    auVar60._24_4_ =
         (uint)bVar45 * (uint)((byte)(uVar56 >> 6) & 1) * auVar104._24_4_ |
         (uint)!bVar45 * iStack_e8;
    auVar60._28_4_ =
         (uint)bVar52 * (uint)(byte)(uVar56 >> 7) * auVar104._28_4_ | (uint)!bVar52 * iStack_e4;
    auVar105._4_4_ =
         (uint)bVar5 * ((uint)bVar18 * auVar99._4_4_ | (uint)!bVar18 * auVar87._4_4_) |
         (uint)!bVar5 * iStack_19c;
    auVar105._0_4_ =
         (uint)(bVar80 & 1) *
         ((uint)(bVar80 & 1) * auVar99._0_4_ | (uint)!(bool)(bVar80 & 1) * auVar87._0_4_) |
         (uint)!(bool)(bVar80 & 1) * local_1a0;
    auVar105._8_4_ =
         (uint)bVar15 * ((uint)bVar9 * auVar99._8_4_ | (uint)!bVar9 * auVar87._8_4_) |
         (uint)!bVar15 * aiStack_198[0];
    auVar105._12_4_ =
         (uint)bVar25 * ((uint)bVar19 * auVar99._12_4_ | (uint)!bVar19 * auVar87._12_4_) |
         (uint)!bVar25 * aiStack_198[1];
    auVar105._16_4_ =
         (uint)bVar32 * (uint)((byte)(uVar56 >> 4) & 1) * auVar99._16_4_ |
         (uint)!bVar32 * aiStack_198[2];
    auVar105._20_4_ =
         (uint)bVar39 * (uint)((byte)(uVar56 >> 5) & 1) * auVar99._20_4_ |
         (uint)!bVar39 * aiStack_198[3];
    auVar105._24_4_ =
         (uint)bVar46 * (uint)((byte)(uVar56 >> 6) & 1) * auVar99._24_4_ |
         (uint)!bVar46 * iStack_188;
    auVar105._28_4_ =
         (uint)bVar53 * (uint)(byte)(uVar56 >> 7) * auVar99._28_4_ | (uint)!bVar53 * iStack_184;
    auVar109._4_4_ =
         (uint)bVar6 * ((uint)bVar28 * auVar106._4_4_ | (uint)!bVar28 * auVar88._4_4_) |
         (uint)!bVar6 * iStack_17c;
    auVar109._0_4_ =
         (uint)(bVar80 & 1) *
         ((uint)(bVar80 & 1) * auVar106._0_4_ | (uint)!(bool)(bVar80 & 1) * auVar88._0_4_) |
         (uint)!(bool)(bVar80 & 1) * local_180;
    auVar109._8_4_ =
         (uint)bVar16 * ((uint)bVar10 * auVar106._8_4_ | (uint)!bVar10 * auVar88._8_4_) |
         (uint)!bVar16 * iStack_178;
    auVar109._12_4_ =
         (uint)bVar26 * ((uint)bVar20 * auVar106._12_4_ | (uint)!bVar20 * auVar88._12_4_) |
         (uint)!bVar26 * iStack_174;
    auVar109._16_4_ =
         (uint)bVar33 * (uint)((byte)(uVar56 >> 4) & 1) * auVar106._16_4_ |
         (uint)!bVar33 * iStack_170;
    auVar109._20_4_ =
         (uint)bVar40 * (uint)((byte)(uVar56 >> 5) & 1) * auVar106._20_4_ |
         (uint)!bVar40 * iStack_16c;
    auVar109._24_4_ =
         (uint)bVar47 * (uint)((byte)(uVar56 >> 6) & 1) * auVar106._24_4_ |
         (uint)!bVar47 * iStack_168;
    auVar109._28_4_ =
         (uint)bVar54 * (uint)(byte)(uVar56 >> 7) * auVar106._28_4_ | (uint)!bVar54 * iStack_164;
    auVar97 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)((byte)(uVar56 >> 1) & 1) * auVar85._8_8_,
                                           (ulonglong)(bVar80 & 1) * auVar85._0_8_)),auVar91,1);
    auVar57._4_4_ =
         (uint)bVar7 * ((uint)bVar35 * auVar107._4_4_ | (uint)!bVar35 * auVar123._4_4_) |
         (uint)!bVar7 * iStack_15c;
    auVar57._0_4_ =
         (uint)(bVar80 & 1) *
         ((uint)(bVar80 & 1) * auVar107._0_4_ | (uint)!(bool)(bVar80 & 1) * auVar123._0_4_) |
         (uint)!(bool)(bVar80 & 1) * local_160;
    auVar57._8_4_ =
         (uint)bVar17 * ((uint)bVar11 * auVar107._8_4_ | (uint)!bVar11 * auVar123._8_4_) |
         (uint)!bVar17 * iStack_158;
    auVar57._12_4_ =
         (uint)bVar27 * ((uint)bVar21 * auVar107._12_4_ | (uint)!bVar21 * auVar123._12_4_) |
         (uint)!bVar27 * iStack_154;
    auVar57._16_4_ =
         (uint)bVar34 * (uint)((byte)(uVar56 >> 4) & 1) * auVar107._16_4_ |
         (uint)!bVar34 * iStack_150;
    auVar57._20_4_ =
         (uint)bVar41 * (uint)((byte)(uVar56 >> 5) & 1) * auVar107._20_4_ |
         (uint)!bVar41 * iStack_14c;
    auVar57._24_4_ =
         (uint)bVar48 * (uint)((byte)(uVar56 >> 6) & 1) * auVar107._24_4_ |
         (uint)!bVar48 * iStack_148;
    auVar57._28_4_ =
         (uint)bVar55 * (uint)(byte)(uVar56 >> 7) * auVar107._28_4_ | (uint)!bVar55 * iStack_144;
    auVar98 = vsubps_avx512vl(auVar58,auVar105);
    auVar99 = vsubps_avx512vl(auVar59,auVar109);
    auVar103 = vsubps_avx512vl(auVar60,auVar57);
    auVar94 = vmulps_avx512vl(auVar99,auVar99);
    auVar94 = vfmadd231ps_avx512vl(auVar94,auVar98,auVar98);
    auVar94 = vfmadd231ps_avx512vl(auVar94,auVar103,auVar103);
    auVar104 = vsqrtps_avx512vl(auVar94);
    auVar94._4_4_ = __real_38d1b717;
    auVar94._0_4_ = __real_38d1b717;
    auVar94._8_4_ = __real_38d1b717;
    auVar94._12_4_ = __real_38d1b717;
    auVar94._16_4_ = __real_38d1b717;
    auVar94._20_4_ = __real_38d1b717;
    auVar94._24_4_ = __real_38d1b717;
    auVar94._28_4_ = __real_38d1b717;
    uVar82 = vcmpps_avx512vl(auVar104,auVar94,1);
    auVar94 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)bVar8 * auVar92._8_8_ |
                                           (ulonglong)!bVar8 * auVar86._8_8_,
                                           (ulonglong)(bVar80 & 1) * auVar92._0_8_ |
                                           (ulonglong)!(bool)(bVar80 & 1) * auVar86._0_8_)),auVar93,
                         1);
    auVar98 = vdivps_avx512vl(auVar98,auVar104);
    auVar99 = vdivps_avx512vl(auVar99,auVar104);
    auVar94 = vfnmadd213ps_avx512vl(auVar94,auVar102,auVar104);
    auVar97 = vmulps_avx512vl(auVar97,auVar94);
    auVar98 = vmulps_avx512vl(auVar97,auVar98);
    bVar80 = (byte)uVar82;
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    bVar18 = (bool)((byte)(uVar82 >> 2) & 1);
    bVar28 = (bool)((byte)(uVar82 >> 3) & 1);
    bVar35 = (bool)((byte)(uVar82 >> 4) & 1);
    bVar42 = (bool)((byte)(uVar82 >> 5) & 1);
    bVar49 = (bool)((byte)(uVar82 >> 6) & 1);
    bVar4 = SUB81(uVar82 >> 7,0);
    uVar81 = vcmpps_avx512vl(auVar94,ZEXT1632(auVar89),1);
    bVar2 = (byte)uVar81;
    iVar83 = auVar89._0_4_;
    auVar113._0_4_ =
         (uint)(bVar2 & 1) * iVar83 |
         (uint)!(bool)(bVar2 & 1) *
         ((uint)(bVar80 & 1) * (int)auVar97._0_4_ | (uint)!(bool)(bVar80 & 1) * auVar98._0_4_);
    bVar8 = (bool)((byte)(uVar81 >> 1) & 1);
    iVar117 = auVar89._4_4_;
    auVar113._4_4_ =
         (uint)bVar8 * iVar117 |
         (uint)!bVar8 * ((uint)bVar3 * (int)auVar97._4_4_ | (uint)!bVar3 * auVar98._4_4_);
    bVar3 = (bool)((byte)(uVar81 >> 2) & 1);
    iVar118 = auVar89._8_4_;
    iVar1 = auVar89._12_4_;
    auVar113._8_4_ =
         (uint)bVar3 * iVar118 |
         (uint)!bVar3 * ((uint)bVar18 * (int)auVar97._8_4_ | (uint)!bVar18 * auVar98._8_4_);
    bVar3 = (bool)((byte)(uVar81 >> 3) & 1);
    auVar113._12_4_ =
         (uint)bVar3 * iVar1 |
         (uint)!bVar3 * ((uint)bVar28 * (int)auVar97._12_4_ | (uint)!bVar28 * auVar98._12_4_);
    auVar113._16_4_ =
         (uint)!(bool)((byte)(uVar81 >> 4) & 1) *
         ((uint)bVar35 * (int)auVar97._16_4_ | (uint)!bVar35 * auVar98._16_4_);
    auVar113._20_4_ =
         (uint)!(bool)((byte)(uVar81 >> 5) & 1) *
         ((uint)bVar42 * (int)auVar97._20_4_ | (uint)!bVar42 * auVar98._20_4_);
    auVar113._24_4_ =
         (uint)!(bool)((byte)(uVar81 >> 6) & 1) *
         ((uint)bVar49 * (int)auVar97._24_4_ | (uint)!bVar49 * auVar98._24_4_);
    auVar113._28_4_ =
         (uint)!SUB81(uVar81 >> 7,0) *
         ((uint)bVar4 * (int)auVar97._28_4_ | (uint)!bVar4 * auVar98._28_4_);
    auVar94 = vaddps_avx512vl(auVar105,auVar113);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar108,uVar56,auVar94);
    auVar114._0_4_ = (uint)(bVar80 & 1) * iVar83 | (uint)!(bool)(bVar80 & 1) * auVar99._0_4_;
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    auVar114._4_4_ = (uint)bVar3 * iVar117 | (uint)!bVar3 * auVar99._4_4_;
    bVar3 = (bool)((byte)(uVar82 >> 2) & 1);
    auVar114._8_4_ = (uint)bVar3 * iVar118 | (uint)!bVar3 * auVar99._8_4_;
    bVar3 = (bool)((byte)(uVar82 >> 3) & 1);
    auVar114._12_4_ = (uint)bVar3 * iVar1 | (uint)!bVar3 * auVar99._12_4_;
    auVar114._16_4_ = (uint)!(bool)((byte)(uVar82 >> 4) & 1) * auVar99._16_4_;
    auVar114._20_4_ = (uint)!(bool)((byte)(uVar82 >> 5) & 1) * auVar99._20_4_;
    auVar114._24_4_ = (uint)!(bool)((byte)(uVar82 >> 6) & 1) * auVar99._24_4_;
    bVar3 = SUB81(uVar82 >> 7,0);
    auVar114._28_4_ =
         (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar99._28_4_;
    auVar94 = vmulps_avx512vl(auVar114,auVar97);
    auVar115._0_4_ = (uint)(bVar2 & 1) * iVar83 | (uint)!(bool)(bVar2 & 1) * auVar94._0_4_;
    bVar3 = (bool)((byte)(uVar81 >> 1) & 1);
    auVar115._4_4_ = (uint)bVar3 * iVar117 | (uint)!bVar3 * auVar94._4_4_;
    bVar3 = (bool)((byte)(uVar81 >> 2) & 1);
    auVar115._8_4_ = (uint)bVar3 * iVar118 | (uint)!bVar3 * auVar94._8_4_;
    bVar3 = (bool)((byte)(uVar81 >> 3) & 1);
    auVar115._12_4_ = (uint)bVar3 * iVar1 | (uint)!bVar3 * auVar94._12_4_;
    auVar115._16_4_ = (uint)!(bool)((byte)(uVar81 >> 4) & 1) * auVar94._16_4_;
    auVar115._20_4_ = (uint)!(bool)((byte)(uVar81 >> 5) & 1) * auVar94._20_4_;
    auVar115._24_4_ = (uint)!(bool)((byte)(uVar81 >> 6) & 1) * auVar94._24_4_;
    auVar115._28_4_ = (uint)!SUB81(uVar81 >> 7,0) * auVar94._28_4_;
    auVar94 = vaddps_avx512vl(auVar109,auVar115);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar96),uVar56,auVar94);
    auVar94 = vdivps_avx512vl(auVar103,auVar104);
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    bVar18 = (bool)((byte)(uVar82 >> 2) & 1);
    bVar28 = (bool)((byte)(uVar82 >> 3) & 1);
    auVar116._0_4_ =
         (uint)(bVar2 & 1) * iVar83 |
         (uint)!(bool)(bVar2 & 1) *
         (int)((float)((uint)(bVar80 & 1) * iVar83 | (uint)!(bool)(bVar80 & 1) * auVar94._0_4_) *
              auVar97._0_4_);
    bVar8 = (bool)((byte)(uVar81 >> 1) & 1);
    auVar116._4_4_ =
         (uint)bVar8 * iVar117 |
         (uint)!bVar8 *
         (int)((float)((uint)bVar3 * iVar117 | (uint)!bVar3 * auVar94._4_4_) * auVar97._4_4_);
    bVar3 = (bool)((byte)(uVar81 >> 2) & 1);
    auVar116._8_4_ =
         (uint)bVar3 * iVar118 |
         (uint)!bVar3 *
         (int)((float)((uint)bVar18 * iVar118 | (uint)!bVar18 * auVar94._8_4_) * auVar97._8_4_);
    bVar3 = (bool)((byte)(uVar81 >> 3) & 1);
    auVar116._12_4_ =
         (uint)bVar3 * iVar1 |
         (uint)!bVar3 *
         (int)((float)((uint)bVar28 * iVar1 | (uint)!bVar28 * auVar94._12_4_) * auVar97._12_4_);
    auVar116._16_4_ =
         (uint)!(bool)((byte)(uVar81 >> 4) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar82 >> 4) & 1) * auVar94._16_4_) * auVar97._16_4_);
    auVar116._20_4_ =
         (uint)!(bool)((byte)(uVar81 >> 5) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar82 >> 5) & 1) * auVar94._20_4_) * auVar97._20_4_);
    auVar116._24_4_ =
         (uint)!(bool)((byte)(uVar81 >> 6) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar82 >> 6) & 1) * auVar94._24_4_) * auVar97._24_4_);
    auVar116._28_4_ =
         (uint)!SUB81(uVar81 >> 7,0) *
         (int)((float)((uint)!SUB81(uVar82 >> 7,0) * auVar94._28_4_) * auVar97._28_4_);
    auVar94 = vaddps_avx512vl(auVar57,auVar116);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar95),uVar56,auVar94);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar100),uVar56,auVar112);
  }
  return;
}

// ApplyLongRangeConstraints_avx512skx @ 1402e3150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraints_avx512skx
               (undefined4 *param_1,undefined1 (*param_2) [32],float param_3,float param_4,
               uint param_5)

{
  byte bVar1;
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
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  uint uVar53;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 (*pauVar68) [32];
  longlong unaff_RBX;
  longlong unaff_RSI;
  uint uVar69;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  byte bVar70;
  undefined1 auVar72 [16];
  int iVar100;
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
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM15 [64];
  undefined1 in_ZMM17 [64];
  undefined1 auVar108 [16];
  undefined1 in_ZMM18 [64];
  undefined1 in_ZMM21 [64];
  undefined1 in_ZMM22 [64];
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  int local_180;
  int iStack_17c;
  int aiStack_178 [4];
  int iStack_168;
  int iStack_164;
  int local_160 [4];
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
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
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  int iVar71;
  int iVar99;
  int iVar101;
  
  auVar74 = in_ZMM17._0_16_;
  auVar108 = in_ZMM18._0_16_;
  auVar73 = in_ZMM22._0_16_;
  auVar72 = in_ZMM21._0_16_;
  local_18 = in_ZMM15._0_16_;
  local_28 = in_ZMM14._0_16_;
  auVar75 = vpbroadcastd_avx512vl();
  uVar51 = vpcmpgtd_avx512vl(auVar75,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
  bVar70 = (byte)uVar51;
  if (bVar70 != 0) {
    if (bVar70 == 0xff) {
      auVar76 = param_2[1];
      auVar77 = vmovdqu64_avx512vl(param_2[2]);
      auVar79 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,*param_2,auVar76);
      auVar78 = vmovdqa64_avx512vl(
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  );
      auVar80 = vpermi2d_avx512vl(auVar78,auVar77,auVar76);
      auVar74 = auVar80._0_16_;
      auVar78 = vinserti32x4_avx512vl(auVar79,auVar74,1);
      auVar79 = vshufi64x2_avx512vl(auVar79,auVar80,3);
      auVar76 = vpblendd_avx2(auVar76,*param_2,0x24);
      auVar76 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,auVar76,auVar77);
    }
    else {
      auVar76 = vpgatherdd_avx512vl(*(undefined4 *)*param_2);
      auVar78._4_4_ = (uint)((byte)(uVar51 >> 1) & 1) * auVar76._4_4_;
      auVar78._0_4_ = (uint)(bVar70 & 1) * auVar76._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar51 >> 2) & 1) * auVar76._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar51 >> 3) & 1) * auVar76._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar51 >> 4) & 1) * auVar76._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar51 >> 5) & 1) * auVar76._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar51 >> 6) & 1) * auVar76._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar51 >> 7) * auVar76._28_4_;
      auVar76 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + (longlong)aiStack_178));
      auVar79._4_4_ = (uint)((byte)(uVar51 >> 1) & 1) * auVar76._4_4_;
      auVar79._0_4_ = (uint)(bVar70 & 1) * auVar76._0_4_;
      auVar79._8_4_ = (uint)((byte)(uVar51 >> 2) & 1) * auVar76._8_4_;
      auVar79._12_4_ = (uint)((byte)(uVar51 >> 3) & 1) * auVar76._12_4_;
      auVar79._16_4_ = (uint)((byte)(uVar51 >> 4) & 1) * auVar76._16_4_;
      auVar79._20_4_ = (uint)((byte)(uVar51 >> 5) & 1) * auVar76._20_4_;
      auVar79._24_4_ = (uint)((byte)(uVar51 >> 6) & 1) * auVar76._24_4_;
      auVar79._28_4_ = (uint)(byte)(uVar51 >> 7) * auVar76._28_4_;
      vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
      auVar77 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + param_5));
      auVar76._4_4_ = (uint)((byte)(uVar51 >> 1) & 1) * auVar77._4_4_;
      auVar76._0_4_ = (uint)(bVar70 & 1) * auVar77._0_4_;
      auVar76._8_4_ = (uint)((byte)(uVar51 >> 2) & 1) * auVar77._8_4_;
      auVar76._12_4_ = (uint)((byte)(uVar51 >> 3) & 1) * auVar77._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar51 >> 4) & 1) * auVar77._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar51 >> 5) & 1) * auVar77._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar51 >> 6) & 1) * auVar77._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar51 >> 7) * auVar77._28_4_;
    }
    local_1e0 = vmovdqu32_avx512vl(auVar78);
    local_1c0 = vmovdqu32_avx512vl(auVar79);
    local_1a0 = (float)((uint)(bVar70 & 1) * auVar76._0_4_ |
                       (uint)!(bool)(bVar70 & 1) * (int)local_1a0);
    bVar2 = (bool)((byte)(uVar51 >> 1) & 1);
    fStack_19c = (float)((uint)bVar2 * auVar76._4_4_ | (uint)!bVar2 * (int)fStack_19c);
    bVar2 = (bool)((byte)(uVar51 >> 2) & 1);
    fStack_198 = (float)((uint)bVar2 * auVar76._8_4_ | (uint)!bVar2 * (int)fStack_198);
    bVar2 = (bool)((byte)(uVar51 >> 3) & 1);
    fStack_194 = (float)((uint)bVar2 * auVar76._12_4_ | (uint)!bVar2 * (int)fStack_194);
    bVar2 = (bool)((byte)(uVar51 >> 4) & 1);
    fStack_190 = (float)((uint)bVar2 * auVar76._16_4_ | (uint)!bVar2 * (int)fStack_190);
    bVar2 = (bool)((byte)(uVar51 >> 5) & 1);
    fStack_18c = (float)((uint)bVar2 * auVar76._20_4_ | (uint)!bVar2 * (int)fStack_18c);
    bVar2 = (bool)((byte)(uVar51 >> 6) & 1);
    fStack_188 = (float)((uint)bVar2 * auVar76._24_4_ | (uint)!bVar2 * (int)fStack_188);
    bVar2 = SUB81(uVar51 >> 7,0);
    fStack_184 = (float)((uint)bVar2 * auVar76._28_4_ | (uint)!bVar2 * (int)fStack_184);
  }
  uVar53 = param_5 + 7;
  if (-1 < (int)param_5) {
    uVar53 = param_5;
  }
  auVar76 = vpbroadcastd_avx512vl();
  if ((int)(uVar53 & 0xfffffff8) < 1) {
    uVar69 = 0;
  }
  else {
    uVar69 = 0;
    vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar74 = (undefined1  [16])0x0;
    auVar78 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar108 = auVar78._0_16_;
    vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar77._4_4_ = _UNK_150b51904;
    auVar77._0_4_ = ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
    auVar77._8_4_ = _UNK_150b51908;
    auVar77._12_4_ = _UNK_150b5190c;
    auVar77._16_4_ = _UNK_150b51910;
    auVar77._20_4_ = _UNK_150b51914;
    auVar77._24_4_ = _UNK_150b51918;
    auVar77._28_4_ = _UNK_150b5191c;
    auVar78 = vmovdqa64_avx512vl(auVar77);
    auVar77 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar72 = auVar77._0_16_;
    auVar79 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar80 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                );
    vmovdqa64_avx512vl(___ymm_00000054000000480000003c0000003000000024000000180000000c00000000);
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    do {
      fVar67 = fStack_184;
      fVar66 = fStack_188;
      fVar65 = fStack_18c;
      fVar64 = fStack_190;
      fVar63 = fStack_194;
      fVar62 = fStack_198;
      fVar61 = fStack_19c;
      fVar60 = local_1a0;
      pauVar68 = param_2 + 3;
      auVar81 = vpaddd_avx512vl(auVar76,local_1e0);
      vpslld_avx512vl(auVar81,4);
      auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      auVar82 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      auVar84 = vpaddd_avx512vl(auVar76,local_1c0);
      vpslld_avx512vl(auVar84,4);
      auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R13));
      auVar86 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R15));
      auVar88 = vpbroadcastd_avx512vl();
      auVar88 = vpaddd_avx512vl(auVar88,auVar78);
      uVar51 = vpcmpgtd_avx512vl(auVar75,auVar88);
      bVar70 = (byte)uVar51;
      if (bVar70 != 0) {
        if (bVar70 == 0xff) {
          auVar88 = param_2[4];
          auVar89 = vmovdqu64_avx512vl(param_2[5]);
          auVar92 = vpblendd_avx2(auVar88,*pauVar68,0x24);
          auVar90 = vpermt2d_avx512vl(*pauVar68,
                                      ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                      ,auVar88);
          auVar91 = vpermt2d_avx512vl(auVar92,auVar80,auVar89);
          auVar88 = vpermt2d_avx512vl(auVar89,auVar79,auVar88);
          auVar89 = vinserti32x4_avx512vl(auVar90,auVar88._0_16_,1);
          auVar92 = vshufi64x2_avx512vl(auVar90,auVar88,3);
        }
        else {
          auVar88 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar68 + uVar69));
          auVar89._4_4_ = (uint)((byte)(uVar51 >> 1) & 1) * auVar88._4_4_;
          auVar89._0_4_ = (uint)(bVar70 & 1) * auVar88._0_4_;
          auVar89._8_4_ = (uint)((byte)(uVar51 >> 2) & 1) * auVar88._8_4_;
          auVar89._12_4_ = (uint)((byte)(uVar51 >> 3) & 1) * auVar88._12_4_;
          auVar89._16_4_ = (uint)((byte)(uVar51 >> 4) & 1) * auVar88._16_4_;
          auVar89._20_4_ = (uint)((byte)(uVar51 >> 5) & 1) * auVar88._20_4_;
          auVar89._24_4_ = (uint)((byte)(uVar51 >> 6) & 1) * auVar88._24_4_;
          auVar89._28_4_ = (uint)(byte)(uVar51 >> 7) * auVar88._28_4_;
          auVar88 = vpgatherdd_avx512vl(*(undefined4 *)(local_1c0 + (longlong)*pauVar68));
          auVar92._4_4_ = (uint)((byte)(uVar51 >> 1) & 1) * auVar88._4_4_;
          auVar92._0_4_ = (uint)(bVar70 & 1) * auVar88._0_4_;
          auVar92._8_4_ = (uint)((byte)(uVar51 >> 2) & 1) * auVar88._8_4_;
          auVar92._12_4_ = (uint)((byte)(uVar51 >> 3) & 1) * auVar88._12_4_;
          auVar92._16_4_ = (uint)((byte)(uVar51 >> 4) & 1) * auVar88._16_4_;
          auVar92._20_4_ = (uint)((byte)(uVar51 >> 5) & 1) * auVar88._20_4_;
          auVar92._24_4_ = (uint)((byte)(uVar51 >> 6) & 1) * auVar88._24_4_;
          auVar92._28_4_ = (uint)(byte)(uVar51 >> 7) * auVar88._28_4_;
          auVar88 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar68 + uVar51));
          auVar91._4_4_ = (uint)((byte)(uVar51 >> 1) & 1) * auVar88._4_4_;
          auVar91._0_4_ = (uint)(bVar70 & 1) * auVar88._0_4_;
          auVar91._8_4_ = (uint)((byte)(uVar51 >> 2) & 1) * auVar88._8_4_;
          auVar91._12_4_ = (uint)((byte)(uVar51 >> 3) & 1) * auVar88._12_4_;
          auVar91._16_4_ = (uint)((byte)(uVar51 >> 4) & 1) * auVar88._16_4_;
          auVar91._20_4_ = (uint)((byte)(uVar51 >> 5) & 1) * auVar88._20_4_;
          auVar91._24_4_ = (uint)((byte)(uVar51 >> 6) & 1) * auVar88._24_4_;
          auVar91._28_4_ = (uint)(byte)(uVar51 >> 7) * auVar88._28_4_;
        }
        in_ZMM15 = ZEXT3264(auVar89);
        in_ZMM14 = ZEXT3264(auVar91);
        local_1e0 = vmovdqu32_avx512vl(auVar89);
        local_1c0 = vmovdqu32_avx512vl(auVar92);
        local_1a0 = (float)((uint)(bVar70 & 1) * auVar91._0_4_ |
                           (uint)!(bool)(bVar70 & 1) * (int)local_1a0);
        bVar2 = (bool)((byte)(uVar51 >> 1) & 1);
        fStack_19c = (float)((uint)bVar2 * auVar91._4_4_ | (uint)!bVar2 * (int)fStack_19c);
        bVar2 = (bool)((byte)(uVar51 >> 2) & 1);
        fStack_198 = (float)((uint)bVar2 * auVar91._8_4_ | (uint)!bVar2 * (int)fStack_198);
        bVar2 = (bool)((byte)(uVar51 >> 3) & 1);
        fStack_194 = (float)((uint)bVar2 * auVar91._12_4_ | (uint)!bVar2 * (int)fStack_194);
        bVar2 = (bool)((byte)(uVar51 >> 4) & 1);
        fStack_190 = (float)((uint)bVar2 * auVar91._16_4_ | (uint)!bVar2 * (int)fStack_190);
        bVar2 = (bool)((byte)(uVar51 >> 5) & 1);
        fStack_18c = (float)((uint)bVar2 * auVar91._20_4_ | (uint)!bVar2 * (int)fStack_18c);
        bVar2 = (bool)((byte)(uVar51 >> 6) & 1);
        fStack_188 = (float)((uint)bVar2 * auVar91._24_4_ | (uint)!bVar2 * (int)fStack_188);
        bVar2 = SUB81(uVar51 >> 7,0);
        fStack_184 = (float)((uint)bVar2 * auVar91._28_4_ | (uint)!bVar2 * (int)fStack_184);
      }
      auVar88 = vsubps_avx512vl(auVar81,auVar84);
      auVar81 = vsubps_avx(auVar82,auVar85);
      auVar82 = vsubps_avx(auVar83,auVar86);
      auVar105._0_4_ = auVar81._0_4_ * auVar81._0_4_;
      auVar105._4_4_ = auVar81._4_4_ * auVar81._4_4_;
      auVar105._8_4_ = auVar81._8_4_ * auVar81._8_4_;
      auVar105._12_4_ = auVar81._12_4_ * auVar81._12_4_;
      auVar105._16_4_ = auVar81._16_4_ * auVar81._16_4_;
      auVar105._20_4_ = auVar81._20_4_ * auVar81._20_4_;
      auVar105._24_4_ = auVar81._24_4_ * auVar81._24_4_;
      auVar105._28_4_ = auVar81._28_4_ * auVar81._28_4_;
      auVar83 = vfmadd231ps_avx512vl(auVar105,auVar88,auVar88);
      auVar106._0_4_ = auVar82._0_4_ * auVar82._0_4_ + auVar83._0_4_;
      auVar106._4_4_ = auVar82._4_4_ * auVar82._4_4_ + auVar83._4_4_;
      auVar106._8_4_ = auVar82._8_4_ * auVar82._8_4_ + auVar83._8_4_;
      auVar106._12_4_ = auVar82._12_4_ * auVar82._12_4_ + auVar83._12_4_;
      auVar106._16_4_ = auVar82._16_4_ * auVar82._16_4_ + auVar83._16_4_;
      auVar106._20_4_ = auVar82._20_4_ * auVar82._20_4_ + auVar83._20_4_;
      auVar106._24_4_ = auVar82._24_4_ * auVar82._24_4_ + auVar83._24_4_;
      auVar106._28_4_ = auVar82._28_4_ * auVar82._28_4_ + auVar83._28_4_;
      auVar83 = vsqrtps_avx(auVar106);
      uVar51 = vcmpps_avx512vl(auVar83,auVar77,1);
      auVar88 = vdivps_avx512vl(auVar88,auVar83);
      auVar81 = vdivps_avx(auVar81,auVar83);
      auVar82 = vdivps_avx(auVar82,auVar83);
      bVar70 = (byte)uVar51;
      auVar90._4_4_ = (uint)!(bool)((byte)(uVar51 >> 1) & 1) * auVar81._4_4_;
      auVar90._0_4_ = (uint)!(bool)(bVar70 & 1) * auVar81._0_4_;
      auVar90._8_4_ = (uint)!(bool)((byte)(uVar51 >> 2) & 1) * auVar81._8_4_;
      auVar90._12_4_ = (uint)!(bool)((byte)(uVar51 >> 3) & 1) * auVar81._12_4_;
      auVar90._16_4_ = (uint)!(bool)((byte)(uVar51 >> 4) & 1) * auVar81._16_4_;
      auVar90._20_4_ = (uint)!(bool)((byte)(uVar51 >> 5) & 1) * auVar81._20_4_;
      iVar100 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
      auVar90._24_4_ = (uint)!(bool)((byte)(uVar51 >> 6) & 1) * auVar81._24_4_;
      bVar2 = SUB81(uVar51 >> 7,0);
      auVar90._28_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar81._28_4_;
      auVar81._4_4_ = (uint)!(bool)((byte)(uVar51 >> 1) & 1) * auVar82._4_4_;
      auVar81._0_4_ = (uint)!(bool)(bVar70 & 1) * auVar82._0_4_;
      auVar81._8_4_ = (uint)!(bool)((byte)(uVar51 >> 2) & 1) * auVar82._8_4_;
      auVar81._12_4_ = (uint)!(bool)((byte)(uVar51 >> 3) & 1) * auVar82._12_4_;
      auVar81._16_4_ = (uint)!(bool)((byte)(uVar51 >> 4) & 1) * auVar82._16_4_;
      auVar81._20_4_ = (uint)!(bool)((byte)(uVar51 >> 5) & 1) * auVar82._20_4_;
      auVar81._24_4_ = (uint)!(bool)((byte)(uVar51 >> 6) & 1) * auVar82._24_4_;
      bVar2 = SUB81(uVar51 >> 7,0);
      auVar81._28_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar82._28_4_;
      auVar104._0_4_ = -(param_4 * fVar60) + auVar83._0_4_;
      auVar104._4_4_ = -(param_4 * fVar61) + auVar83._4_4_;
      auVar104._8_4_ = -(param_4 * fVar62) + auVar83._8_4_;
      auVar104._12_4_ = -(param_4 * fVar63) + auVar83._12_4_;
      auVar104._16_4_ = -(param_4 * fVar64) + auVar83._16_4_;
      auVar104._20_4_ = -(param_4 * fVar65) + auVar83._20_4_;
      auVar104._24_4_ = -(param_4 * fVar66) + auVar83._24_4_;
      auVar104._28_4_ = -(param_4 * fVar67) + auVar83._28_4_;
      auVar107._0_4_ = auVar104._0_4_ * param_3;
      auVar107._4_4_ = auVar104._4_4_ * param_3;
      auVar107._8_4_ = auVar104._8_4_ * param_3;
      auVar107._12_4_ = auVar104._12_4_ * param_3;
      auVar107._16_4_ = auVar104._16_4_ * param_3;
      auVar107._20_4_ = auVar104._20_4_ * param_3;
      auVar107._24_4_ = auVar104._24_4_ * param_3;
      auVar107._28_4_ = auVar104._28_4_ * param_3;
      auVar82 = vmulps_avx512vl(auVar107,auVar88);
      bVar2 = (bool)((byte)(uVar51 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar51 >> 2) & 1);
      bVar13 = (bool)((byte)(uVar51 >> 3) & 1);
      bVar22 = (bool)((byte)(uVar51 >> 4) & 1);
      bVar29 = (bool)((byte)(uVar51 >> 5) & 1);
      bVar36 = (bool)((byte)(uVar51 >> 6) & 1);
      bVar43 = SUB81(uVar51 >> 7,0);
      auVar88 = ZEXT1632((undefined1  [16])0x0);
      uVar51 = vcmpps_avx512vl(auVar104,auVar88,1);
      bVar1 = (byte)uVar51;
      auVar83._4_4_ =
           (uint)!(bool)((byte)(uVar51 >> 1) & 1) *
           ((uint)bVar2 * (int)auVar107._4_4_ | (uint)!bVar2 * auVar82._4_4_);
      auVar83._0_4_ =
           (uint)!(bool)(bVar1 & 1) *
           ((uint)(bVar70 & 1) * (int)auVar107._0_4_ | (uint)!(bool)(bVar70 & 1) * auVar82._0_4_);
      bVar2 = (bool)((byte)(uVar51 >> 2) & 1);
      iVar100 = auVar88._8_4_;
      auVar83._8_4_ =
           (uint)bVar2 * iVar100 |
           (uint)!bVar2 * ((uint)bVar4 * (int)auVar107._8_4_ | (uint)!bVar4 * auVar82._8_4_);
      bVar2 = (bool)((byte)(uVar51 >> 3) & 1);
      iVar71 = auVar88._12_4_;
      auVar83._12_4_ =
           (uint)bVar2 * iVar71 |
           (uint)!bVar2 * ((uint)bVar13 * (int)auVar107._12_4_ | (uint)!bVar13 * auVar82._12_4_);
      auVar83._16_4_ =
           (uint)!(bool)((byte)(uVar51 >> 4) & 1) *
           ((uint)bVar22 * (int)auVar107._16_4_ | (uint)!bVar22 * auVar82._16_4_);
      auVar83._20_4_ =
           (uint)!(bool)((byte)(uVar51 >> 5) & 1) *
           ((uint)bVar29 * (int)auVar107._20_4_ | (uint)!bVar29 * auVar82._20_4_);
      iVar99 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
      auVar83._24_4_ =
           (uint)!(bool)((byte)(uVar51 >> 6) & 1) *
           ((uint)bVar36 * (int)auVar107._24_4_ | (uint)!bVar36 * auVar82._24_4_);
      bVar2 = SUB81(uVar51 >> 7,0);
      auVar83._28_4_ =
           (uint)bVar2 * iVar99 |
           (uint)!bVar2 * ((uint)bVar43 * (int)auVar107._28_4_ | (uint)!bVar43 * auVar82._28_4_);
      auVar82 = vaddps_avx512vl(auVar84,auVar83);
      vscatterdps_avx512vl(ZEXT832(param_1) + in_ZMM14._0_32_,0xffff,auVar82);
      auVar82 = vmulps_avx512vl(auVar90,auVar107);
      auVar84._4_4_ = (uint)!(bool)((byte)(uVar51 >> 1) & 1) * auVar82._4_4_;
      auVar84._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar82._0_4_;
      bVar2 = (bool)((byte)(uVar51 >> 2) & 1);
      auVar84._8_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar82._8_4_;
      bVar2 = (bool)((byte)(uVar51 >> 3) & 1);
      auVar84._12_4_ = (uint)bVar2 * iVar71 | (uint)!bVar2 * auVar82._12_4_;
      auVar84._16_4_ = (uint)!(bool)((byte)(uVar51 >> 4) & 1) * auVar82._16_4_;
      auVar84._20_4_ = (uint)!(bool)((byte)(uVar51 >> 5) & 1) * auVar82._20_4_;
      auVar84._24_4_ = (uint)!(bool)((byte)(uVar51 >> 6) & 1) * auVar82._24_4_;
      bVar2 = SUB81(uVar51 >> 7,0);
      auVar84._28_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar82._28_4_;
      auVar82 = vaddps_avx512vl(auVar85,auVar84);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar107,0xffff,auVar82);
      auVar81 = vmulps_avx512vl(auVar81,auVar107);
      auVar82._4_4_ = (uint)!(bool)((byte)(uVar51 >> 1) & 1) * auVar81._4_4_;
      auVar82._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar81._0_4_;
      bVar2 = (bool)((byte)(uVar51 >> 2) & 1);
      auVar82._8_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar81._8_4_;
      bVar2 = (bool)((byte)(uVar51 >> 3) & 1);
      auVar82._12_4_ = (uint)bVar2 * iVar71 | (uint)!bVar2 * auVar81._12_4_;
      auVar82._16_4_ = (uint)!(bool)((byte)(uVar51 >> 4) & 1) * auVar81._16_4_;
      auVar82._20_4_ = (uint)!(bool)((byte)(uVar51 >> 5) & 1) * auVar81._20_4_;
      auVar82._24_4_ = (uint)!(bool)((byte)(uVar51 >> 6) & 1) * auVar81._24_4_;
      bVar2 = SUB81(uVar51 >> 7,0);
      auVar82._28_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar81._28_4_;
      auVar81 = vaddps_avx512vl(auVar86,auVar82);
      auVar73 = auVar81._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar104,0xffff,auVar81);
      vscatterdps_avx512vl(ZEXT832(param_1) + in_ZMM15._0_32_,0xffff,auVar87);
      uVar69 = uVar69 + 8;
      param_2 = pauVar68;
    } while ((int)uVar69 < (int)(uVar53 & 0xfffffff8));
  }
  if ((int)uVar69 < (int)param_5) {
    auVar77 = vpbroadcastd_avx512vl();
    auVar78 = vpor_avx2(auVar77,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    uVar52 = vpcmpgtd_avx512vl(auVar75,auVar78);
    auVar80._0_4_ = auVar76._0_4_ + local_1e0._0_4_;
    auVar80._4_4_ = auVar76._4_4_ + local_1e0._4_4_;
    auVar80._8_4_ = auVar76._8_4_ + local_1e0._8_4_;
    auVar80._12_4_ = auVar76._12_4_ + local_1e0._12_4_;
    auVar80._16_4_ = auVar76._16_4_ + local_1e0._16_4_;
    auVar80._20_4_ = auVar76._20_4_ + local_1e0._20_4_;
    auVar80._24_4_ = auVar76._24_4_ + local_1e0._24_4_;
    auVar80._28_4_ = auVar76._28_4_ + local_1e0._28_4_;
    vpslld_avx2(auVar80,4);
    auVar102._4_4_ = __real_00000004;
    auVar102._0_4_ = __real_00000004;
    auVar102._8_4_ = __real_00000004;
    auVar102._12_4_ = __real_00000004;
    auVar102._16_4_ = __real_00000004;
    auVar102._20_4_ = __real_00000004;
    auVar102._24_4_ = __real_00000004;
    auVar102._28_4_ = __real_00000004;
    auVar78 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    bVar70 = (byte)uVar52;
    auVar72 = vxorps_avx512vl(auVar72,auVar72);
    auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
    bVar2 = (bool)((byte)(uVar52 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar52 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar52 >> 3) & 1);
    auVar85._0_4_ = auVar76._0_4_ + local_1c0._0_4_;
    auVar85._4_4_ = auVar76._4_4_ + local_1c0._4_4_;
    auVar85._8_4_ = auVar76._8_4_ + local_1c0._8_4_;
    auVar85._12_4_ = auVar76._12_4_ + local_1c0._12_4_;
    auVar85._16_4_ = auVar76._16_4_ + local_1c0._16_4_;
    auVar85._20_4_ = auVar76._20_4_ + local_1c0._20_4_;
    auVar85._24_4_ = auVar76._24_4_ + local_1c0._24_4_;
    auVar85._28_4_ = auVar76._28_4_ + local_1c0._28_4_;
    auVar103._4_4_ = __real_00000008;
    auVar103._0_4_ = __real_00000008;
    auVar103._8_4_ = __real_00000008;
    auVar103._12_4_ = __real_00000008;
    auVar103._16_4_ = __real_00000008;
    auVar103._20_4_ = __real_00000008;
    auVar103._24_4_ = __real_00000008;
    auVar103._28_4_ = __real_00000008;
    auVar73 = vxorps_avx512vl(auVar73,auVar73);
    auVar76 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RBX));
    bVar4 = (bool)((byte)(uVar52 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar52 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar52 >> 3) & 1);
    auVar80 = vpslld_avx512vl(auVar85,4);
    auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)param_5));
    auVar82 = vgatherdps_avx512vl(*param_1);
    auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    auVar88._4_4_ = fStack_19c;
    auVar88._0_4_ = local_1a0;
    auVar88._8_4_ = fStack_198;
    auVar88._12_4_ = fStack_194;
    auVar88._16_4_ = fStack_190;
    auVar88._20_4_ = fStack_18c;
    auVar88._24_4_ = fStack_188;
    auVar88._28_4_ = fStack_184;
    auVar87._4_4_ = __real_0000000c;
    auVar87._0_4_ = __real_0000000c;
    auVar87._8_4_ = __real_0000000c;
    auVar87._12_4_ = __real_0000000c;
    auVar87._16_4_ = __real_0000000c;
    auVar87._20_4_ = __real_0000000c;
    auVar87._24_4_ = __real_0000000c;
    auVar87._28_4_ = __real_0000000c;
    auVar74 = vxorps_avx512vl(auVar74,auVar74);
    auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_178));
    auVar93._0_4_ = (uint)(bVar70 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar70 & 1) * auVar74._0_4_;
    bVar13 = (bool)((byte)(uVar52 >> 1) & 1);
    auVar93._4_4_ = (uint)bVar13 * auVar84._4_4_ | (uint)!bVar13 * auVar74._4_4_;
    bVar13 = (bool)((byte)(uVar52 >> 2) & 1);
    auVar93._8_4_ = (uint)bVar13 * auVar84._8_4_ | (uint)!bVar13 * auVar74._8_4_;
    bVar13 = (bool)((byte)(uVar52 >> 3) & 1);
    auVar93._12_4_ = (uint)bVar13 * auVar84._12_4_ | (uint)!bVar13 * auVar74._12_4_;
    auVar93._16_4_ = (uint)((byte)(uVar52 >> 4) & 1) * auVar84._16_4_;
    auVar93._20_4_ = (uint)((byte)(uVar52 >> 5) & 1) * auVar84._20_4_;
    auVar93._24_4_ = (uint)((byte)(uVar52 >> 6) & 1) * auVar84._24_4_;
    auVar93._28_4_ = (uint)(byte)(uVar52 >> 7) * auVar84._28_4_;
    auVar74 = vxorps_avx512vl(auVar108,auVar108);
    bVar13 = (bool)((byte)(uVar52 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar52 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar52 >> 3) & 1);
    bVar23 = (bool)((byte)(uVar52 >> 4) & 1);
    bVar30 = (bool)((byte)(uVar52 >> 5) & 1);
    bVar37 = (bool)((byte)(uVar52 >> 6) & 1);
    bVar44 = SUB81(uVar52 >> 7,0);
    bVar22 = (bool)((byte)(uVar52 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar52 >> 2) & 1);
    bVar17 = (bool)((byte)(uVar52 >> 3) & 1);
    bVar24 = (bool)((byte)(uVar52 >> 4) & 1);
    bVar31 = (bool)((byte)(uVar52 >> 5) & 1);
    bVar38 = (bool)((byte)(uVar52 >> 6) & 1);
    bVar45 = SUB81(uVar52 >> 7,0);
    bVar29 = (bool)((byte)(uVar52 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar52 >> 2) & 1);
    bVar18 = (bool)((byte)(uVar52 >> 3) & 1);
    bVar25 = (bool)((byte)(uVar52 >> 4) & 1);
    bVar32 = (bool)((byte)(uVar52 >> 5) & 1);
    bVar39 = (bool)((byte)(uVar52 >> 6) & 1);
    bVar46 = SUB81(uVar52 >> 7,0);
    bVar36 = (bool)((byte)(uVar52 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar52 >> 2) & 1);
    bVar19 = (bool)((byte)(uVar52 >> 3) & 1);
    bVar26 = (bool)((byte)(uVar52 >> 4) & 1);
    bVar33 = (bool)((byte)(uVar52 >> 5) & 1);
    bVar40 = (bool)((byte)(uVar52 >> 6) & 1);
    bVar47 = SUB81(uVar52 >> 7,0);
    bVar43 = (bool)((byte)(uVar52 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar52 >> 2) & 1);
    bVar20 = (bool)((byte)(uVar52 >> 3) & 1);
    bVar27 = (bool)((byte)(uVar52 >> 4) & 1);
    bVar34 = (bool)((byte)(uVar52 >> 5) & 1);
    bVar41 = (bool)((byte)(uVar52 >> 6) & 1);
    bVar48 = SUB81(uVar52 >> 7,0);
    bVar3 = (bool)((byte)(uVar52 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar52 >> 2) & 1);
    bVar21 = (bool)((byte)(uVar52 >> 3) & 1);
    bVar28 = (bool)((byte)(uVar52 >> 4) & 1);
    bVar35 = (bool)((byte)(uVar52 >> 5) & 1);
    bVar42 = (bool)((byte)(uVar52 >> 6) & 1);
    bVar49 = SUB81(uVar52 >> 7,0);
    auVar86._0_4_ =
         auVar77._0_4_ + ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008;
    auVar86._4_4_ = auVar77._4_4_ + _UNK_150b51904;
    auVar86._8_4_ = auVar77._8_4_ + _UNK_150b51908;
    auVar86._12_4_ = auVar77._12_4_ + _UNK_150b5190c;
    auVar86._16_4_ = auVar77._16_4_ + _UNK_150b51910;
    auVar86._20_4_ = auVar77._20_4_ + _UNK_150b51914;
    auVar86._24_4_ = auVar77._24_4_ + _UNK_150b51918;
    auVar86._28_4_ = auVar77._28_4_ + _UNK_150b5191c;
    vpcmpgtd_avx512vl(auVar75,auVar86);
    auVar57._4_4_ =
         (uint)bVar13 * (uint)((byte)(uVar52 >> 1) & 1) * auVar78._4_4_ | (uint)!bVar13 * iStack_11c
    ;
    auVar57._0_4_ =
         (uint)(bVar70 & 1) * (uint)(bVar70 & 1) * auVar78._0_4_ |
         (uint)!(bool)(bVar70 & 1) * local_120;
    auVar57._8_4_ =
         (uint)bVar7 * (uint)((byte)(uVar52 >> 2) & 1) * auVar78._8_4_ | (uint)!bVar7 * iStack_118;
    auVar57._12_4_ =
         (uint)bVar16 * (uint)((byte)(uVar52 >> 3) & 1) * auVar78._12_4_ |
         (uint)!bVar16 * iStack_114;
    auVar57._16_4_ =
         (uint)bVar23 * (uint)((byte)(uVar52 >> 4) & 1) * auVar78._16_4_ |
         (uint)!bVar23 * iStack_110;
    auVar57._20_4_ =
         (uint)bVar30 * (uint)((byte)(uVar52 >> 5) & 1) * auVar78._20_4_ |
         (uint)!bVar30 * iStack_10c;
    auVar57._24_4_ =
         (uint)bVar37 * (uint)((byte)(uVar52 >> 6) & 1) * auVar78._24_4_ |
         (uint)!bVar37 * iStack_108;
    auVar57._28_4_ =
         (uint)bVar44 * (uint)(byte)(uVar52 >> 7) * auVar78._28_4_ | (uint)!bVar44 * iStack_104;
    auVar58._4_4_ =
         (uint)bVar22 * ((uint)bVar2 * auVar79._4_4_ | (uint)!bVar2 * auVar72._4_4_) |
         (uint)!bVar22 * iStack_fc;
    auVar58._0_4_ =
         (uint)(bVar70 & 1) *
         ((uint)(bVar70 & 1) * auVar79._0_4_ | (uint)!(bool)(bVar70 & 1) * auVar72._0_4_) |
         (uint)!(bool)(bVar70 & 1) * local_100;
    auVar58._8_4_ =
         (uint)bVar8 * ((uint)bVar5 * auVar79._8_4_ | (uint)!bVar5 * auVar72._8_4_) |
         (uint)!bVar8 * iStack_f8;
    auVar58._12_4_ =
         (uint)bVar17 * ((uint)bVar14 * auVar79._12_4_ | (uint)!bVar14 * auVar72._12_4_) |
         (uint)!bVar17 * iStack_f4;
    auVar58._16_4_ =
         (uint)bVar24 * (uint)((byte)(uVar52 >> 4) & 1) * auVar79._16_4_ | (uint)!bVar24 * iStack_f0
    ;
    auVar58._20_4_ =
         (uint)bVar31 * (uint)((byte)(uVar52 >> 5) & 1) * auVar79._20_4_ | (uint)!bVar31 * iStack_ec
    ;
    auVar58._24_4_ =
         (uint)bVar38 * (uint)((byte)(uVar52 >> 6) & 1) * auVar79._24_4_ | (uint)!bVar38 * iStack_e8
    ;
    auVar58._28_4_ =
         (uint)bVar45 * (uint)(byte)(uVar52 >> 7) * auVar79._28_4_ | (uint)!bVar45 * iStack_e4;
    auVar59._4_4_ =
         (uint)bVar29 * ((uint)bVar4 * auVar76._4_4_ | (uint)!bVar4 * auVar73._4_4_) |
         (uint)!bVar29 * iStack_dc;
    auVar59._0_4_ =
         (uint)(bVar70 & 1) *
         ((uint)(bVar70 & 1) * auVar76._0_4_ | (uint)!(bool)(bVar70 & 1) * auVar73._0_4_) |
         (uint)!(bool)(bVar70 & 1) * local_e0;
    auVar59._8_4_ =
         (uint)bVar9 * ((uint)bVar6 * auVar76._8_4_ | (uint)!bVar6 * auVar73._8_4_) |
         (uint)!bVar9 * iStack_d8;
    auVar59._12_4_ =
         (uint)bVar18 * ((uint)bVar15 * auVar76._12_4_ | (uint)!bVar15 * auVar73._12_4_) |
         (uint)!bVar18 * iStack_d4;
    auVar59._16_4_ =
         (uint)bVar25 * (uint)((byte)(uVar52 >> 4) & 1) * auVar76._16_4_ | (uint)!bVar25 * iStack_d0
    ;
    auVar59._20_4_ =
         (uint)bVar32 * (uint)((byte)(uVar52 >> 5) & 1) * auVar76._20_4_ | (uint)!bVar32 * iStack_cc
    ;
    auVar59._24_4_ =
         (uint)bVar39 * (uint)((byte)(uVar52 >> 6) & 1) * auVar76._24_4_ | (uint)!bVar39 * iStack_c8
    ;
    auVar59._28_4_ =
         (uint)bVar46 * (uint)(byte)(uVar52 >> 7) * auVar76._28_4_ | (uint)!bVar46 * iStack_c4;
    auVar54._4_4_ =
         (uint)bVar36 * (uint)((byte)(uVar52 >> 1) & 1) * auVar81._4_4_ | (uint)!bVar36 * iStack_17c
    ;
    auVar54._0_4_ =
         (uint)(bVar70 & 1) * (uint)(bVar70 & 1) * auVar81._0_4_ |
         (uint)!(bool)(bVar70 & 1) * local_180;
    auVar54._8_4_ =
         (uint)bVar10 * (uint)((byte)(uVar52 >> 2) & 1) * auVar81._8_4_ |
         (uint)!bVar10 * aiStack_178[0];
    auVar54._12_4_ =
         (uint)bVar19 * (uint)((byte)(uVar52 >> 3) & 1) * auVar81._12_4_ |
         (uint)!bVar19 * aiStack_178[1];
    auVar54._16_4_ =
         (uint)bVar26 * (uint)((byte)(uVar52 >> 4) & 1) * auVar81._16_4_ |
         (uint)!bVar26 * aiStack_178[2];
    auVar54._20_4_ =
         (uint)bVar33 * (uint)((byte)(uVar52 >> 5) & 1) * auVar81._20_4_ |
         (uint)!bVar33 * aiStack_178[3];
    auVar54._24_4_ =
         (uint)bVar40 * (uint)((byte)(uVar52 >> 6) & 1) * auVar81._24_4_ |
         (uint)!bVar40 * iStack_168;
    auVar54._28_4_ =
         (uint)bVar47 * (uint)(byte)(uVar52 >> 7) * auVar81._28_4_ | (uint)!bVar47 * iStack_164;
    auVar55._4_4_ =
         (uint)bVar43 * (uint)((byte)(uVar52 >> 1) & 1) * auVar82._4_4_ |
         (uint)!bVar43 * local_160[1];
    auVar55._0_4_ =
         (uint)(bVar70 & 1) * (uint)(bVar70 & 1) * auVar82._0_4_ |
         (uint)!(bool)(bVar70 & 1) * local_160[0];
    auVar55._8_4_ =
         (uint)bVar11 * (uint)((byte)(uVar52 >> 2) & 1) * auVar82._8_4_ |
         (uint)!bVar11 * local_160[2];
    auVar55._12_4_ =
         (uint)bVar20 * (uint)((byte)(uVar52 >> 3) & 1) * auVar82._12_4_ |
         (uint)!bVar20 * local_160[3];
    auVar55._16_4_ =
         (uint)bVar27 * (uint)((byte)(uVar52 >> 4) & 1) * auVar82._16_4_ |
         (uint)!bVar27 * iStack_150;
    auVar55._20_4_ =
         (uint)bVar34 * (uint)((byte)(uVar52 >> 5) & 1) * auVar82._20_4_ |
         (uint)!bVar34 * iStack_14c;
    auVar55._24_4_ =
         (uint)bVar41 * (uint)((byte)(uVar52 >> 6) & 1) * auVar82._24_4_ |
         (uint)!bVar41 * iStack_148;
    auVar55._28_4_ =
         (uint)bVar48 * (uint)(byte)(uVar52 >> 7) * auVar82._28_4_ | (uint)!bVar48 * iStack_144;
    auVar56._4_4_ =
         (uint)bVar3 * (uint)((byte)(uVar52 >> 1) & 1) * auVar83._4_4_ | (uint)!bVar3 * iStack_13c;
    auVar56._0_4_ =
         (uint)(bVar70 & 1) * (uint)(bVar70 & 1) * auVar83._0_4_ |
         (uint)!(bool)(bVar70 & 1) * local_140;
    auVar56._8_4_ =
         (uint)bVar12 * (uint)((byte)(uVar52 >> 2) & 1) * auVar83._8_4_ | (uint)!bVar12 * iStack_138
    ;
    auVar56._12_4_ =
         (uint)bVar21 * (uint)((byte)(uVar52 >> 3) & 1) * auVar83._12_4_ |
         (uint)!bVar21 * iStack_134;
    auVar56._16_4_ =
         (uint)bVar28 * (uint)((byte)(uVar52 >> 4) & 1) * auVar83._16_4_ |
         (uint)!bVar28 * iStack_130;
    auVar56._20_4_ =
         (uint)bVar35 * (uint)((byte)(uVar52 >> 5) & 1) * auVar83._20_4_ |
         (uint)!bVar35 * iStack_12c;
    auVar56._24_4_ =
         (uint)bVar42 * (uint)((byte)(uVar52 >> 6) & 1) * auVar83._24_4_ |
         (uint)!bVar42 * iStack_128;
    auVar56._28_4_ =
         (uint)bVar49 * (uint)(byte)(uVar52 >> 7) * auVar83._28_4_ | (uint)!bVar49 * iStack_124;
    auVar76 = vsubps_avx512vl(auVar57,auVar54);
    auVar78 = vsubps_avx512vl(auVar58,auVar55);
    auVar77 = vsubps_avx512vl(auVar59,auVar56);
    auVar75 = vmulps_avx512vl(auVar78,auVar78);
    auVar75 = vfmadd231ps_avx512vl(auVar75,auVar76,auVar76);
    auVar75 = vfmadd231ps_avx512vl(auVar75,auVar77,auVar77);
    auVar79 = vsqrtps_avx512vl(auVar75);
    auVar75._4_4_ = __real_38d1b717;
    auVar75._0_4_ = __real_38d1b717;
    auVar75._8_4_ = __real_38d1b717;
    auVar75._12_4_ = __real_38d1b717;
    auVar75._16_4_ = __real_38d1b717;
    auVar75._20_4_ = __real_38d1b717;
    auVar75._24_4_ = __real_38d1b717;
    auVar75._28_4_ = __real_38d1b717;
    uVar51 = vcmpps_avx512vl(auVar79,auVar75,1);
    auVar75 = vdivps_avx512vl(auVar76,auVar79);
    auVar76 = vdivps_avx512vl(auVar78,auVar79);
    auVar78 = vbroadcastss_avx512vl(ZEXT416((uint)param_4));
    auVar78 = vfnmadd213ps_avx512vl(auVar88,auVar78,auVar79);
    auVar81 = vbroadcastss_avx512vl(ZEXT416((uint)param_3));
    auVar81 = vmulps_avx512vl(auVar81,auVar78);
    auVar75 = vmulps_avx512vl(auVar81,auVar75);
    bVar70 = (byte)uVar51;
    bVar2 = (bool)((byte)(uVar51 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar51 >> 2) & 1);
    bVar22 = (bool)((byte)(uVar51 >> 3) & 1);
    bVar29 = (bool)((byte)(uVar51 >> 4) & 1);
    bVar36 = (bool)((byte)(uVar51 >> 5) & 1);
    bVar43 = (bool)((byte)(uVar51 >> 6) & 1);
    bVar3 = SUB81(uVar51 >> 7,0);
    uVar50 = vcmpps_avx512vl(auVar78,ZEXT1632(auVar74),1);
    bVar1 = (byte)uVar50;
    iVar71 = auVar74._0_4_;
    auVar94._0_4_ =
         (uint)(bVar1 & 1) * iVar71 |
         (uint)!(bool)(bVar1 & 1) *
         ((uint)(bVar70 & 1) * auVar81._0_4_ | (uint)!(bool)(bVar70 & 1) * auVar75._0_4_);
    bVar4 = (bool)((byte)(uVar50 >> 1) & 1);
    iVar99 = auVar74._4_4_;
    auVar94._4_4_ =
         (uint)bVar4 * iVar99 |
         (uint)!bVar4 * ((uint)bVar2 * auVar81._4_4_ | (uint)!bVar2 * auVar75._4_4_);
    bVar2 = (bool)((byte)(uVar50 >> 2) & 1);
    iVar101 = auVar74._8_4_;
    iVar100 = auVar74._12_4_;
    auVar94._8_4_ =
         (uint)bVar2 * iVar101 |
         (uint)!bVar2 * ((uint)bVar13 * auVar81._8_4_ | (uint)!bVar13 * auVar75._8_4_);
    bVar2 = (bool)((byte)(uVar50 >> 3) & 1);
    auVar94._12_4_ =
         (uint)bVar2 * iVar100 |
         (uint)!bVar2 * ((uint)bVar22 * auVar81._12_4_ | (uint)!bVar22 * auVar75._12_4_);
    auVar94._16_4_ =
         (uint)!(bool)((byte)(uVar50 >> 4) & 1) *
         ((uint)bVar29 * auVar81._16_4_ | (uint)!bVar29 * auVar75._16_4_);
    auVar94._20_4_ =
         (uint)!(bool)((byte)(uVar50 >> 5) & 1) *
         ((uint)bVar36 * auVar81._20_4_ | (uint)!bVar36 * auVar75._20_4_);
    auVar94._24_4_ =
         (uint)!(bool)((byte)(uVar50 >> 6) & 1) *
         ((uint)bVar43 * auVar81._24_4_ | (uint)!bVar43 * auVar75._24_4_);
    auVar94._28_4_ =
         (uint)!SUB81(uVar50 >> 7,0) *
         ((uint)bVar3 * auVar81._28_4_ | (uint)!bVar3 * auVar75._28_4_);
    auVar75 = vaddps_avx512vl(auVar54,auVar94);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar75,uVar52,auVar75);
    auVar95._0_4_ = (uint)(bVar70 & 1) * iVar71 | (uint)!(bool)(bVar70 & 1) * auVar76._0_4_;
    bVar2 = (bool)((byte)(uVar51 >> 1) & 1);
    auVar95._4_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar76._4_4_;
    bVar2 = (bool)((byte)(uVar51 >> 2) & 1);
    auVar95._8_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar76._8_4_;
    bVar2 = (bool)((byte)(uVar51 >> 3) & 1);
    auVar95._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar76._12_4_;
    auVar95._16_4_ = (uint)!(bool)((byte)(uVar51 >> 4) & 1) * auVar76._16_4_;
    auVar95._20_4_ = (uint)!(bool)((byte)(uVar51 >> 5) & 1) * auVar76._20_4_;
    auVar95._24_4_ = (uint)!(bool)((byte)(uVar51 >> 6) & 1) * auVar76._24_4_;
    bVar2 = SUB81(uVar51 >> 7,0);
    auVar95._28_4_ =
         (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar76._28_4_;
    auVar75 = vmulps_avx512vl(auVar95,auVar81);
    auVar96._0_4_ = (uint)(bVar1 & 1) * iVar71 | (uint)!(bool)(bVar1 & 1) * auVar75._0_4_;
    bVar2 = (bool)((byte)(uVar50 >> 1) & 1);
    auVar96._4_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._4_4_;
    bVar2 = (bool)((byte)(uVar50 >> 2) & 1);
    auVar96._8_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar75._8_4_;
    bVar2 = (bool)((byte)(uVar50 >> 3) & 1);
    auVar96._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar75._12_4_;
    auVar96._16_4_ = (uint)!(bool)((byte)(uVar50 >> 4) & 1) * auVar75._16_4_;
    auVar96._20_4_ = (uint)!(bool)((byte)(uVar50 >> 5) & 1) * auVar75._20_4_;
    auVar96._24_4_ = (uint)!(bool)((byte)(uVar50 >> 6) & 1) * auVar75._24_4_;
    auVar96._28_4_ = (uint)!SUB81(uVar50 >> 7,0) * auVar75._28_4_;
    auVar75 = vaddps_avx512vl(auVar55,auVar96);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar80 | auVar102),uVar52,auVar75);
    auVar75 = vdivps_avx512vl(auVar77,auVar79);
    auVar97._0_4_ = (uint)(bVar70 & 1) * iVar71 | (uint)!(bool)(bVar70 & 1) * auVar75._0_4_;
    bVar2 = (bool)((byte)(uVar51 >> 1) & 1);
    auVar97._4_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._4_4_;
    bVar2 = (bool)((byte)(uVar51 >> 2) & 1);
    auVar97._8_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar75._8_4_;
    bVar2 = (bool)((byte)(uVar51 >> 3) & 1);
    auVar97._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar75._12_4_;
    auVar97._16_4_ = (uint)!(bool)((byte)(uVar51 >> 4) & 1) * auVar75._16_4_;
    auVar97._20_4_ = (uint)!(bool)((byte)(uVar51 >> 5) & 1) * auVar75._20_4_;
    auVar97._24_4_ = (uint)!(bool)((byte)(uVar51 >> 6) & 1) * auVar75._24_4_;
    auVar97._28_4_ = (uint)!SUB81(uVar51 >> 7,0) * auVar75._28_4_;
    auVar75 = vmulps_avx512vl(auVar97,auVar81);
    auVar98._0_4_ = (uint)(bVar1 & 1) * iVar71 | (uint)!(bool)(bVar1 & 1) * auVar75._0_4_;
    bVar2 = (bool)((byte)(uVar50 >> 1) & 1);
    auVar98._4_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._4_4_;
    bVar2 = (bool)((byte)(uVar50 >> 2) & 1);
    auVar98._8_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar75._8_4_;
    bVar2 = (bool)((byte)(uVar50 >> 3) & 1);
    auVar98._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar75._12_4_;
    auVar98._16_4_ = (uint)!(bool)((byte)(uVar50 >> 4) & 1) * auVar75._16_4_;
    auVar98._20_4_ = (uint)!(bool)((byte)(uVar50 >> 5) & 1) * auVar75._20_4_;
    auVar98._24_4_ = (uint)!(bool)((byte)(uVar50 >> 6) & 1) * auVar75._24_4_;
    auVar98._28_4_ = (uint)!SUB81(uVar50 >> 7,0) * auVar75._28_4_;
    auVar75 = vaddps_avx512vl(auVar56,auVar98);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar80 | auVar103),uVar52,auVar75);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar80 | auVar87),uVar52,auVar93);
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap_avx512skx @ 1402e3830

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessWeightmap_avx512skx
               (undefined4 *param_1,undefined1 (*param_2) [32],longlong param_3,longlong param_4,
               float param_5,uint param_6)

{
  byte bVar1;
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
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 auVar47 [32];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  longlong lVar56;
  undefined1 (*pauVar57) [32];
  longlong unaff_RBX;
  longlong lVar58;
  longlong unaff_RSI;
  longlong lVar59;
  uint uVar60;
  undefined1 *puVar61;
  uint uVar62;
  longlong unaff_R12;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  byte bVar66;
  ulonglong uVar67;
  undefined1 auVar70 [16];
  int iVar96;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  int iVar97;
  int iVar98;
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
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [64];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_220 [32];
  undefined1 local_200 [32];
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  int local_1c0;
  int iStack_1bc;
  int aiStack_1b8 [4];
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
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
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
  
  puVar61 = (undefined1 *)(ulonglong)param_6;
  auVar71 = vpbroadcastd_avx512vl();
  uVar67 = vpcmpgtd_avx512vl(auVar71,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
  bVar66 = (byte)uVar67;
  if (bVar66 != 0) {
    if (bVar66 == 0xff) {
      auVar72 = param_2[1];
      auVar75 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,*param_2,auVar72);
      auVar74 = vmovdqa64_avx512vl(
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  );
      auVar73 = vpermi2d_avx512vl(auVar74,param_2[2],auVar72);
      auVar74 = vinserti32x4_avx512vl(auVar75,auVar73._0_16_,1);
      auVar75 = vshufi64x2_avx512vl(auVar75,auVar73,3);
      auVar72 = vpblendd_avx2(auVar72,*param_2,0x24);
      auVar72 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,auVar72,param_2[2]);
    }
    else {
      auVar72 = vpgatherdd_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
      auVar74._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar72._4_4_;
      auVar74._0_4_ = (uint)(bVar66 & 1) * auVar72._0_4_;
      auVar74._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar72._8_4_;
      auVar74._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar72._12_4_;
      auVar74._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar72._16_4_;
      auVar74._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar72._20_4_;
      auVar74._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar72._24_4_;
      auVar74._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar72._28_4_;
      auVar72 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + unaff_RBX));
      auVar75._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar72._4_4_;
      auVar75._0_4_ = (uint)(bVar66 & 1) * auVar72._0_4_;
      auVar75._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar72._8_4_;
      auVar75._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar72._12_4_;
      auVar75._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar72._16_4_;
      auVar75._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar72._20_4_;
      auVar75._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar72._24_4_;
      auVar75._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar72._28_4_;
      auVar73 = vpgatherdd_avx512vl(*(undefined4 *)*param_2);
      auVar72._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar73._4_4_;
      auVar72._0_4_ = (uint)(bVar66 & 1) * auVar73._0_4_;
      auVar72._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar73._8_4_;
      auVar72._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar73._12_4_;
      auVar72._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar73._16_4_;
      auVar72._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar73._20_4_;
      auVar72._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar73._24_4_;
      auVar72._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar73._28_4_;
    }
    local_220 = vmovdqu32_avx512vl(auVar74);
    local_200 = vmovdqu32_avx512vl(auVar75);
    bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar67 >> 2) & 1);
    bVar10 = (bool)((byte)(uVar67 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar67 >> 4) & 1);
    bVar24 = (bool)((byte)(uVar67 >> 5) & 1);
    bVar31 = (bool)((byte)(uVar67 >> 6) & 1);
    bVar38 = SUB81(uVar67 >> 7,0);
    local_1e0 = (float)((uint)(bVar66 & 1) * auVar72._0_4_ |
                       (uint)!(bool)(bVar66 & 1) * (int)local_1e0);
    fStack_1dc = (float)((uint)bVar2 * auVar72._4_4_ | (uint)!bVar2 * (int)fStack_1dc);
    fStack_1d8 = (float)((uint)bVar3 * auVar72._8_4_ | (uint)!bVar3 * (int)fStack_1d8);
    fStack_1d4 = (float)((uint)bVar10 * auVar72._12_4_ | (uint)!bVar10 * (int)fStack_1d4);
    fStack_1d0 = (float)((uint)bVar17 * auVar72._16_4_ | (uint)!bVar17 * (int)fStack_1d0);
    fStack_1cc = (float)((uint)bVar24 * auVar72._20_4_ | (uint)!bVar24 * (int)fStack_1cc);
    fStack_1c8 = (float)((uint)bVar31 * auVar72._24_4_ | (uint)!bVar31 * (int)fStack_1c8);
    fStack_1c4 = (float)((uint)bVar38 * auVar72._28_4_ | (uint)!bVar38 * (int)fStack_1c4);
  }
  uVar60 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar60 = param_6;
  }
  auVar72 = vpbroadcastd_avx512vl();
  uVar60 = uVar60 & 0xfffffff8;
  if ((int)uVar60 < 1) {
    uVar62 = 0;
  }
  else {
    uVar62 = 0;
    auVar101 = ZEXT1664((undefined1  [16])0x0);
    vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar74 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar75 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                                );
    auVar73 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar76 = vmovdqa64_avx512vl(
                                ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                );
    auVar77 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar78 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                );
    vmovdqa64_avx512vl(___ymm_00000054000000480000003c0000003000000024000000180000000c00000000);
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    do {
      fVar55 = fStack_1c4;
      fVar54 = fStack_1c8;
      fVar53 = fStack_1cc;
      fVar52 = fStack_1d0;
      fVar51 = fStack_1d4;
      fVar50 = fStack_1d8;
      fVar49 = fStack_1dc;
      fVar48 = local_1e0;
      pauVar57 = param_2 + 3;
      auVar80 = vpaddd_avx512vl(auVar72,local_220);
      vpslld_avx512vl(auVar80,4);
      auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)puVar61));
      auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar62));
      auVar82 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)puVar61));
      auVar83 = vpaddd_avx512vl(auVar72,local_200);
      auVar83 = vpslld_avx512vl(auVar83,4);
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar62));
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)puVar61));
      in_ZMM29 = ZEXT3264(auVar85);
      auVar86 = vpbroadcastd_avx512vl();
      auVar86 = vpaddd_avx512vl(auVar86,auVar75);
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      in_ZMM30 = ZEXT3264(auVar87);
      lVar59 = (longlong)(int)local_200._12_4_;
      lVar58 = (longlong)(int)local_200._8_4_;
      lVar64 = (longlong)(int)local_200._4_4_;
      lVar63 = (longlong)(int)local_200._0_4_;
      auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      lVar65 = (longlong)(int)local_200._28_4_;
      unaff_R12 = (longlong)(int)local_200._24_4_;
      lVar56 = (longlong)(int)local_200._20_4_;
      unaff_RSI = (longlong)(int)local_200._16_4_;
      uVar67 = vpcmpgtd_avx512vl(auVar71,auVar86);
      bVar66 = (byte)uVar67;
      if (bVar66 != 0) {
        if (bVar66 == 0xff) {
          auVar86 = param_2[4];
          auVar79 = vpblendd_avx2(auVar86,*pauVar57,0x24);
          auVar89 = vpermt2d_avx512vl(*pauVar57,auVar76,auVar86);
          auVar90 = vpermt2d_avx512vl(auVar79,auVar78,param_2[5]);
          auVar86 = vpermt2d_avx512vl(param_2[5],auVar77,auVar86);
          auVar79._16_16_ = ZEXT116(0) * auVar89._16_16_ | ZEXT116(1) * auVar86._0_16_;
          auVar79._0_16_ = ZEXT116(0) * auVar86._0_16_ | ZEXT116(1) * auVar89._0_16_;
          auVar86 = vperm2i128_avx2(auVar89,auVar86,0x31);
        }
        else {
          auVar86 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar57 + lVar59));
          auVar79._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar86._4_4_;
          auVar79._0_4_ = (uint)(bVar66 & 1) * auVar86._0_4_;
          auVar79._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar86._8_4_;
          auVar79._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar86._12_4_;
          auVar79._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar86._16_4_;
          auVar79._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar86._20_4_;
          auVar79._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar86._24_4_;
          auVar79._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar86._28_4_;
          auVar89 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar57 + param_3));
          auVar86._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar89._4_4_;
          auVar86._0_4_ = (uint)(bVar66 & 1) * auVar89._0_4_;
          auVar86._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar89._8_4_;
          auVar86._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar89._12_4_;
          auVar86._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar89._16_4_;
          auVar86._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar89._20_4_;
          auVar86._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar89._24_4_;
          auVar86._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar89._28_4_;
          auVar89 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar57 + uVar60));
          auVar90._4_4_ = (uint)((byte)(uVar67 >> 1) & 1) * auVar89._4_4_;
          auVar90._0_4_ = (uint)(bVar66 & 1) * auVar89._0_4_;
          auVar90._8_4_ = (uint)((byte)(uVar67 >> 2) & 1) * auVar89._8_4_;
          auVar90._12_4_ = (uint)((byte)(uVar67 >> 3) & 1) * auVar89._12_4_;
          auVar90._16_4_ = (uint)((byte)(uVar67 >> 4) & 1) * auVar89._16_4_;
          auVar90._20_4_ = (uint)((byte)(uVar67 >> 5) & 1) * auVar89._20_4_;
          auVar90._24_4_ = (uint)((byte)(uVar67 >> 6) & 1) * auVar89._24_4_;
          auVar90._28_4_ = (uint)(byte)(uVar67 >> 7) * auVar89._28_4_;
        }
        local_220 = vmovdqu32_avx512vl(auVar79);
        puVar61 = local_200;
        local_200 = vmovdqu32_avx512vl(auVar86);
        bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
        bVar3 = (bool)((byte)(uVar67 >> 2) & 1);
        bVar10 = (bool)((byte)(uVar67 >> 3) & 1);
        bVar17 = (bool)((byte)(uVar67 >> 4) & 1);
        bVar24 = (bool)((byte)(uVar67 >> 5) & 1);
        bVar31 = (bool)((byte)(uVar67 >> 6) & 1);
        bVar38 = SUB81(uVar67 >> 7,0);
        local_1e0 = (float)((uint)(bVar66 & 1) * auVar90._0_4_ |
                           (uint)!(bool)(bVar66 & 1) * (int)local_1e0);
        fStack_1dc = (float)((uint)bVar2 * auVar90._4_4_ | (uint)!bVar2 * (int)fStack_1dc);
        fStack_1d8 = (float)((uint)bVar3 * auVar90._8_4_ | (uint)!bVar3 * (int)fStack_1d8);
        fStack_1d4 = (float)((uint)bVar10 * auVar90._12_4_ | (uint)!bVar10 * (int)fStack_1d4);
        fStack_1d0 = (float)((uint)bVar17 * auVar90._16_4_ | (uint)!bVar17 * (int)fStack_1d0);
        fStack_1cc = (float)((uint)bVar24 * auVar90._20_4_ | (uint)!bVar24 * (int)fStack_1cc);
        fStack_1c8 = (float)((uint)bVar31 * auVar90._24_4_ | (uint)!bVar31 * (int)fStack_1c8);
        fStack_1c4 = (float)((uint)bVar38 * auVar90._28_4_ | (uint)!bVar38 * (int)fStack_1c4);
      }
      auVar68 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar63)),(uint)*(byte *)(param_3 + lVar64),1
                           );
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar58),2);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar59),3);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + unaff_RSI),4);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar56),5);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + unaff_R12),6);
      auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar65),7);
      auVar86 = vpmovzxbd_avx2(auVar68);
      auVar86 = vpslld_avx2(auVar86,2);
      vpmovzxdq_avx2(auVar86._16_16_);
      vpmovzxdq_avx2(auVar86._0_16_);
      auVar68 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + unaff_R12));
      auVar69 = vgatherqps_avx512vl(*(undefined8 *)
                                     (param_4 + (ulonglong)*(byte *)(param_3 + lVar63)));
      auVar80 = vsubps_avx512vl(auVar80,auVar84);
      auVar81 = vsubps_avx512vl(auVar81,auVar85);
      auVar82 = vsubps_avx512vl(auVar82,auVar87);
      auVar104._0_4_ =
           auVar82._0_4_ * auVar82._0_4_ +
           auVar80._0_4_ * auVar80._0_4_ + auVar81._0_4_ * auVar81._0_4_;
      auVar104._4_4_ =
           auVar82._4_4_ * auVar82._4_4_ +
           auVar80._4_4_ * auVar80._4_4_ + auVar81._4_4_ * auVar81._4_4_;
      auVar104._8_4_ =
           auVar82._8_4_ * auVar82._8_4_ +
           auVar80._8_4_ * auVar80._8_4_ + auVar81._8_4_ * auVar81._8_4_;
      auVar104._12_4_ =
           auVar82._12_4_ * auVar82._12_4_ +
           auVar80._12_4_ * auVar80._12_4_ + auVar81._12_4_ * auVar81._12_4_;
      auVar104._16_4_ =
           auVar82._16_4_ * auVar82._16_4_ +
           auVar80._16_4_ * auVar80._16_4_ + auVar81._16_4_ * auVar81._16_4_;
      auVar104._20_4_ =
           auVar82._20_4_ * auVar82._20_4_ +
           auVar80._20_4_ * auVar80._20_4_ + auVar81._20_4_ * auVar81._20_4_;
      auVar104._24_4_ =
           auVar82._24_4_ * auVar82._24_4_ +
           auVar80._24_4_ * auVar80._24_4_ + auVar81._24_4_ * auVar81._24_4_;
      auVar104._28_4_ =
           auVar82._28_4_ * auVar82._28_4_ +
           auVar80._28_4_ * auVar80._28_4_ + auVar81._28_4_ * auVar81._28_4_;
      auVar86 = vsqrtps_avx(auVar104);
      uVar67 = vcmpps_avx512vl(auVar86,auVar73,1);
      auVar80 = vdivps_avx(auVar80,auVar86);
      auVar81 = vdivps_avx(auVar81,auVar86);
      auVar82 = vdivps_avx(auVar82,auVar86);
      bVar66 = (byte)uVar67;
      auVar89._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar81._4_4_;
      auVar89._0_4_ = (uint)!(bool)(bVar66 & 1) * auVar81._0_4_;
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      iVar96 = auVar101._8_4_;
      auVar89._8_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar81._8_4_;
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      iVar97 = auVar101._12_4_;
      auVar89._12_4_ = (uint)bVar2 * iVar97 | (uint)!bVar2 * auVar81._12_4_;
      auVar89._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar81._16_4_;
      auVar89._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar81._20_4_;
      iVar98 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
      auVar89._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar81._24_4_;
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar89._28_4_ = (uint)bVar2 * iVar98 | (uint)!bVar2 * auVar81._28_4_;
      auVar81._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar82._4_4_;
      auVar81._0_4_ = (uint)!(bool)(bVar66 & 1) * auVar82._0_4_;
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar81._8_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar82._8_4_;
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar81._12_4_ = (uint)bVar2 * iVar97 | (uint)!bVar2 * auVar82._12_4_;
      auVar81._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar82._16_4_;
      auVar81._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar82._20_4_;
      auVar81._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar82._24_4_;
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar81._28_4_ = (uint)bVar2 * iVar98 | (uint)!bVar2 * auVar82._28_4_;
      auVar102._0_4_ = -(param_5 * fVar48) + auVar86._0_4_;
      auVar102._4_4_ = -(param_5 * fVar49) + auVar86._4_4_;
      auVar102._8_4_ = -(param_5 * fVar50) + auVar86._8_4_;
      auVar102._12_4_ = -(param_5 * fVar51) + auVar86._12_4_;
      auVar102._16_4_ = -(param_5 * fVar52) + auVar86._16_4_;
      auVar102._20_4_ = -(param_5 * fVar53) + auVar86._20_4_;
      auVar102._24_4_ = -(param_5 * fVar54) + auVar86._24_4_;
      auVar102._28_4_ = -(param_5 * fVar55) + auVar86._28_4_;
      auVar103._0_4_ = auVar102._0_4_ * auVar68._0_4_;
      auVar103._4_4_ = auVar102._4_4_ * auVar68._4_4_;
      auVar103._8_4_ = auVar102._8_4_ * auVar68._8_4_;
      auVar103._12_4_ = auVar102._12_4_ * auVar68._12_4_;
      auVar103._16_4_ = auVar102._16_4_ * auVar69._0_4_;
      auVar103._20_4_ = auVar102._20_4_ * auVar69._4_4_;
      auVar103._24_4_ = auVar102._24_4_ * auVar69._8_4_;
      auVar103._28_4_ = auVar102._28_4_ * auVar69._12_4_;
      bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
      bVar3 = (bool)((byte)(uVar67 >> 2) & 1);
      bVar10 = (bool)((byte)(uVar67 >> 3) & 1);
      bVar17 = (bool)((byte)(uVar67 >> 4) & 1);
      bVar24 = (bool)((byte)(uVar67 >> 5) & 1);
      bVar31 = (bool)((byte)(uVar67 >> 6) & 1);
      bVar38 = SUB81(uVar67 >> 7,0);
      uVar67 = vcmpps_avx512vl(auVar102,auVar101._0_32_,1);
      bVar1 = (byte)uVar67;
      auVar82._4_4_ =
           (uint)!(bool)((byte)(uVar67 >> 1) & 1) *
           ((uint)bVar2 * (int)auVar103._4_4_ | (uint)!bVar2 * (int)(auVar103._4_4_ * auVar80._4_4_)
           );
      auVar82._0_4_ =
           (uint)!(bool)(bVar1 & 1) *
           ((uint)(bVar66 & 1) * (int)auVar103._0_4_ |
           (uint)!(bool)(bVar66 & 1) * (int)(auVar103._0_4_ * auVar80._0_4_));
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar82._8_4_ =
           (uint)bVar2 * iVar96 |
           (uint)!bVar2 *
           ((uint)bVar3 * (int)auVar103._8_4_ | (uint)!bVar3 * (int)(auVar103._8_4_ * auVar80._8_4_)
           );
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar82._12_4_ =
           (uint)bVar2 * iVar97 |
           (uint)!bVar2 *
           ((uint)bVar10 * (int)auVar103._12_4_ |
           (uint)!bVar10 * (int)(auVar103._12_4_ * auVar80._12_4_));
      auVar82._16_4_ =
           (uint)!(bool)((byte)(uVar67 >> 4) & 1) *
           ((uint)bVar17 * (int)auVar103._16_4_ |
           (uint)!bVar17 * (int)(auVar103._16_4_ * auVar80._16_4_));
      auVar82._20_4_ =
           (uint)!(bool)((byte)(uVar67 >> 5) & 1) *
           ((uint)bVar24 * (int)auVar103._20_4_ |
           (uint)!bVar24 * (int)(auVar103._20_4_ * auVar80._20_4_));
      auVar82._24_4_ =
           (uint)!(bool)((byte)(uVar67 >> 6) & 1) *
           ((uint)bVar31 * (int)auVar103._24_4_ |
           (uint)!bVar31 * (int)(auVar103._24_4_ * auVar80._24_4_));
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar82._28_4_ =
           (uint)bVar2 * iVar98 |
           (uint)!bVar2 *
           ((uint)bVar38 * (int)auVar103._28_4_ |
           (uint)!bVar38 * (int)(auVar103._28_4_ * auVar80._28_4_));
      auVar80 = vaddps_avx512vl(auVar84,auVar82);
      in_ZMM31 = ZEXT3264(auVar80);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar81,0xffff,auVar80);
      auVar80 = vmulps_avx512vl(auVar89,auVar103);
      auVar84._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar80._4_4_;
      auVar84._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar80._0_4_;
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar84._8_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar80._8_4_;
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar84._12_4_ = (uint)bVar2 * iVar97 | (uint)!bVar2 * auVar80._12_4_;
      auVar84._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar80._16_4_;
      auVar84._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar80._20_4_;
      auVar84._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar80._24_4_;
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar84._28_4_ =
           (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar80._28_4_;
      auVar80 = vaddps_avx512vl(auVar85,auVar84);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar89,0xffff,auVar80);
      auVar80 = vmulps_avx512vl(auVar81,auVar103);
      auVar85._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar80._4_4_;
      auVar85._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar80._0_4_;
      bVar2 = (bool)((byte)(uVar67 >> 2) & 1);
      auVar85._8_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar80._8_4_;
      bVar2 = (bool)((byte)(uVar67 >> 3) & 1);
      auVar85._12_4_ = (uint)bVar2 * iVar97 | (uint)!bVar2 * auVar80._12_4_;
      auVar85._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar80._16_4_;
      auVar85._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar80._20_4_;
      auVar85._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar80._24_4_;
      bVar2 = SUB81(uVar67 >> 7,0);
      auVar85._28_4_ =
           (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar80._28_4_;
      auVar80 = vaddps_avx512vl(auVar87,auVar85);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar103,0xffff,auVar80);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar83 | auVar74),0xffff,auVar88);
      uVar62 = uVar62 + 8;
      param_2 = pauVar57;
    } while ((int)uVar62 < (int)uVar60);
  }
  if ((int)uVar62 < (int)param_6) {
    auVar74 = vpbroadcastd_avx512vl();
    auVar75 = vpord_avx512vl(auVar74,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    uVar46 = vpcmpgtd_avx512vl(auVar71,auVar75);
    auVar77._4_4_ = fStack_1dc;
    auVar77._0_4_ = local_1e0;
    auVar77._8_4_ = fStack_1d8;
    auVar77._12_4_ = fStack_1d4;
    auVar77._16_4_ = fStack_1d0;
    auVar77._20_4_ = fStack_1cc;
    auVar77._24_4_ = fStack_1c8;
    auVar77._28_4_ = fStack_1c4;
    auVar75 = vmovdqa32_avx512vl(local_200);
    bVar66 = (byte)uVar46;
    lVar58 = (longlong)(int)((uint)((byte)(uVar46 >> 4) & 1) * auVar75._16_4_);
    lVar56 = (longlong)(int)((uint)((byte)(uVar46 >> 6) & 1) * auVar75._24_4_);
    auVar68 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + (int)((uint)(bVar66 & 1) * auVar75._0_4_))),
                          (uint)*(byte *)(param_3 +
                                         (int)((uint)((byte)(uVar46 >> 1) & 1) * auVar75._4_4_)),1);
    auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 +
                                                 (int)((uint)((byte)(uVar46 >> 2) & 1) *
                                                      auVar75._8_4_)),2);
    auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 +
                                                 (int)((uint)((byte)(uVar46 >> 3) & 1) *
                                                      auVar75._12_4_)),3);
    auVar73._0_4_ = auVar72._0_4_ + local_220._0_4_;
    auVar73._4_4_ = auVar72._4_4_ + local_220._4_4_;
    auVar73._8_4_ = auVar72._8_4_ + local_220._8_4_;
    auVar73._12_4_ = auVar72._12_4_ + local_220._12_4_;
    auVar73._16_4_ = auVar72._16_4_ + local_220._16_4_;
    auVar73._20_4_ = auVar72._20_4_ + local_220._20_4_;
    auVar73._24_4_ = auVar72._24_4_ + local_220._24_4_;
    auVar73._28_4_ = auVar72._28_4_ + local_220._28_4_;
    vpslld_avx2(auVar73,4);
    auVar73 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar78 = vgatherdps_avx512vl(*param_1);
    auVar80 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    auVar76._0_4_ = local_200._0_4_ + auVar72._0_4_;
    auVar76._4_4_ = local_200._4_4_ + auVar72._4_4_;
    auVar76._8_4_ = local_200._8_4_ + auVar72._8_4_;
    auVar76._12_4_ = local_200._12_4_ + auVar72._12_4_;
    auVar76._16_4_ = local_200._16_4_ + auVar72._16_4_;
    auVar76._20_4_ = local_200._20_4_ + auVar72._20_4_;
    auVar76._24_4_ = local_200._24_4_ + auVar72._24_4_;
    auVar76._28_4_ = local_200._28_4_ + auVar72._28_4_;
    auVar100._4_4_ = __real_00000008;
    auVar100._0_4_ = __real_00000008;
    auVar100._8_4_ = __real_00000008;
    auVar100._12_4_ = __real_00000008;
    auVar100._16_4_ = __real_00000008;
    auVar100._20_4_ = __real_00000008;
    auVar100._24_4_ = __real_00000008;
    auVar100._28_4_ = __real_00000008;
    auVar72 = vgatherdps_avx512vl(*param_1);
    auVar84 = vpslld_avx2(auVar76,4);
    auVar76 = vgatherdps_avx512vl(*param_1);
    auVar68 = vpinsrb_avx(auVar68,(uint)*(byte *)(param_3 + lVar58),4);
    auVar68 = vpinsrb_avx512bw(auVar68,(uint)*(byte *)(param_3 +
                                                      (int)((uint)((byte)(uVar46 >> 5) & 1) *
                                                           auVar75._20_4_)),5);
    auVar81 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_1b8));
    auVar82 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar58));
    auVar68 = vpinsrb_avx512bw(auVar68,(uint)*(byte *)(param_3 + lVar56),6);
    auVar68 = vpinsrb_avx512bw(auVar68,(uint)*(byte *)(param_3 +
                                                      (int)((uint)(byte)(uVar46 >> 7) *
                                                           auVar75._28_4_)),7);
    auVar75 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar56));
    auVar91._4_4_ = (uint)((byte)(uVar46 >> 1) & 1) * auVar75._4_4_;
    auVar91._0_4_ = (uint)(bVar66 & 1) * auVar75._0_4_;
    auVar91._8_4_ = (uint)((byte)(uVar46 >> 2) & 1) * auVar75._8_4_;
    auVar91._12_4_ = (uint)((byte)(uVar46 >> 3) & 1) * auVar75._12_4_;
    auVar91._16_4_ = (uint)((byte)(uVar46 >> 4) & 1) * auVar75._16_4_;
    auVar91._20_4_ = (uint)((byte)(uVar46 >> 5) & 1) * auVar75._20_4_;
    auVar91._24_4_ = (uint)((byte)(uVar46 >> 6) & 1) * auVar75._24_4_;
    auVar91._28_4_ = (uint)(byte)(uVar46 >> 7) * auVar75._28_4_;
    bVar3 = (bool)((byte)(uVar46 >> 1) & 1);
    bVar4 = (bool)((byte)(uVar46 >> 2) & 1);
    bVar11 = (bool)((byte)(uVar46 >> 3) & 1);
    bVar18 = (bool)((byte)(uVar46 >> 4) & 1);
    bVar25 = (bool)((byte)(uVar46 >> 5) & 1);
    bVar32 = (bool)((byte)(uVar46 >> 6) & 1);
    bVar39 = SUB81(uVar46 >> 7,0);
    bVar10 = (bool)((byte)(uVar46 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar46 >> 2) & 1);
    bVar12 = (bool)((byte)(uVar46 >> 3) & 1);
    bVar19 = (bool)((byte)(uVar46 >> 4) & 1);
    bVar26 = (bool)((byte)(uVar46 >> 5) & 1);
    bVar33 = (bool)((byte)(uVar46 >> 6) & 1);
    bVar40 = SUB81(uVar46 >> 7,0);
    bVar17 = (bool)((byte)(uVar46 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar46 >> 2) & 1);
    bVar13 = (bool)((byte)(uVar46 >> 3) & 1);
    bVar20 = (bool)((byte)(uVar46 >> 4) & 1);
    bVar27 = (bool)((byte)(uVar46 >> 5) & 1);
    bVar34 = (bool)((byte)(uVar46 >> 6) & 1);
    bVar41 = SUB81(uVar46 >> 7,0);
    bVar24 = (bool)((byte)(uVar46 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar46 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar46 >> 3) & 1);
    bVar21 = (bool)((byte)(uVar46 >> 4) & 1);
    bVar28 = (bool)((byte)(uVar46 >> 5) & 1);
    bVar35 = (bool)((byte)(uVar46 >> 6) & 1);
    bVar42 = SUB81(uVar46 >> 7,0);
    bVar31 = (bool)((byte)(uVar46 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar46 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar46 >> 3) & 1);
    bVar22 = (bool)((byte)(uVar46 >> 4) & 1);
    bVar29 = (bool)((byte)(uVar46 >> 5) & 1);
    bVar36 = (bool)((byte)(uVar46 >> 6) & 1);
    bVar43 = SUB81(uVar46 >> 7,0);
    bVar38 = (bool)((byte)(uVar46 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar46 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar46 >> 3) & 1);
    bVar23 = (bool)((byte)(uVar46 >> 4) & 1);
    bVar30 = (bool)((byte)(uVar46 >> 5) & 1);
    bVar37 = (bool)((byte)(uVar46 >> 6) & 1);
    bVar44 = SUB81(uVar46 >> 7,0);
    auVar74 = vpaddd_avx512vl(auVar74,
                              ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                             );
    vpcmpgtd_avx512vl(auVar71,auVar74);
    auVar71 = vpmovzxbd_avx512vl(auVar68);
    auVar71 = vpslld_avx2(auVar71,2);
    vpmovzxdq_avx2(auVar71._16_16_);
    vpmovzxdq_avx2(auVar71._0_16_);
    uVar67 = uVar46 >> 4 & 0xf;
    auVar68 = vgatherqps_avx512vl(*(undefined8 *)(param_4 * 2));
    auVar69 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + (longlong)param_1));
    bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
    auVar70._8_8_ = (ulonglong)bVar2 * auVar69._8_8_ | (ulonglong)!bVar2 * SUB168(ZEXT816(0),4);
    auVar70._0_8_ = (ulonglong)((byte)uVar67 & 1) * auVar69._0_8_;
    auVar87._4_4_ =
         (uint)bVar3 * (uint)((byte)(uVar46 >> 1) & 1) * auVar78._4_4_ | (uint)!bVar3 * iStack_15c;
    auVar87._0_4_ =
         (uint)(bVar66 & 1) * (uint)(bVar66 & 1) * auVar78._0_4_ |
         (uint)!(bool)(bVar66 & 1) * local_160;
    auVar87._8_4_ =
         (uint)bVar4 * (uint)((byte)(uVar46 >> 2) & 1) * auVar78._8_4_ | (uint)!bVar4 * iStack_158;
    auVar87._12_4_ =
         (uint)bVar11 * (uint)((byte)(uVar46 >> 3) & 1) * auVar78._12_4_ |
         (uint)!bVar11 * iStack_154;
    auVar87._16_4_ =
         (uint)bVar18 * (uint)((byte)(uVar46 >> 4) & 1) * auVar78._16_4_ |
         (uint)!bVar18 * iStack_150;
    auVar87._20_4_ =
         (uint)bVar25 * (uint)((byte)(uVar46 >> 5) & 1) * auVar78._20_4_ |
         (uint)!bVar25 * iStack_14c;
    auVar87._24_4_ =
         (uint)bVar32 * (uint)((byte)(uVar46 >> 6) & 1) * auVar78._24_4_ |
         (uint)!bVar32 * iStack_148;
    auVar87._28_4_ =
         (uint)bVar39 * (uint)(byte)(uVar46 >> 7) * auVar78._28_4_ | (uint)!bVar39 * iStack_144;
    auVar88._4_4_ =
         (uint)bVar10 * (uint)((byte)(uVar46 >> 1) & 1) * auVar80._4_4_ | (uint)!bVar10 * iStack_13c
    ;
    auVar88._0_4_ =
         (uint)(bVar66 & 1) * (uint)(bVar66 & 1) * auVar80._0_4_ |
         (uint)!(bool)(bVar66 & 1) * local_140;
    auVar88._8_4_ =
         (uint)bVar5 * (uint)((byte)(uVar46 >> 2) & 1) * auVar80._8_4_ | (uint)!bVar5 * iStack_138;
    auVar88._12_4_ =
         (uint)bVar12 * (uint)((byte)(uVar46 >> 3) & 1) * auVar80._12_4_ |
         (uint)!bVar12 * iStack_134;
    auVar88._16_4_ =
         (uint)bVar19 * (uint)((byte)(uVar46 >> 4) & 1) * auVar80._16_4_ |
         (uint)!bVar19 * iStack_130;
    auVar88._20_4_ =
         (uint)bVar26 * (uint)((byte)(uVar46 >> 5) & 1) * auVar80._20_4_ |
         (uint)!bVar26 * iStack_12c;
    auVar88._24_4_ =
         (uint)bVar33 * (uint)((byte)(uVar46 >> 6) & 1) * auVar80._24_4_ |
         (uint)!bVar33 * iStack_128;
    auVar88._28_4_ =
         (uint)bVar40 * (uint)(byte)(uVar46 >> 7) * auVar80._28_4_ | (uint)!bVar40 * iStack_124;
    auVar47._4_4_ =
         (uint)bVar17 * (uint)((byte)(uVar46 >> 1) & 1) * auVar72._4_4_ | (uint)!bVar17 * iStack_11c
    ;
    auVar47._0_4_ =
         (uint)(bVar66 & 1) * (uint)(bVar66 & 1) * auVar72._0_4_ |
         (uint)!(bool)(bVar66 & 1) * local_120;
    auVar47._8_4_ =
         (uint)bVar6 * (uint)((byte)(uVar46 >> 2) & 1) * auVar72._8_4_ | (uint)!bVar6 * iStack_118;
    auVar47._12_4_ =
         (uint)bVar13 * (uint)((byte)(uVar46 >> 3) & 1) * auVar72._12_4_ |
         (uint)!bVar13 * iStack_114;
    auVar47._16_4_ =
         (uint)bVar20 * (uint)((byte)(uVar46 >> 4) & 1) * auVar72._16_4_ |
         (uint)!bVar20 * iStack_110;
    auVar47._20_4_ =
         (uint)bVar27 * (uint)((byte)(uVar46 >> 5) & 1) * auVar72._20_4_ |
         (uint)!bVar27 * iStack_10c;
    auVar47._24_4_ =
         (uint)bVar34 * (uint)((byte)(uVar46 >> 6) & 1) * auVar72._24_4_ |
         (uint)!bVar34 * iStack_108;
    auVar47._28_4_ =
         (uint)bVar41 * (uint)(byte)(uVar46 >> 7) * auVar72._28_4_ | (uint)!bVar41 * iStack_104;
    auVar78._4_4_ =
         (uint)bVar24 * (uint)((byte)(uVar46 >> 1) & 1) * auVar76._4_4_ | (uint)!bVar24 * iStack_1bc
    ;
    auVar78._0_4_ =
         (uint)(bVar66 & 1) * (uint)(bVar66 & 1) * auVar76._0_4_ |
         (uint)!(bool)(bVar66 & 1) * local_1c0;
    auVar78._8_4_ =
         (uint)bVar7 * (uint)((byte)(uVar46 >> 2) & 1) * auVar76._8_4_ |
         (uint)!bVar7 * aiStack_1b8[0];
    auVar78._12_4_ =
         (uint)bVar14 * (uint)((byte)(uVar46 >> 3) & 1) * auVar76._12_4_ |
         (uint)!bVar14 * aiStack_1b8[1];
    auVar78._16_4_ =
         (uint)bVar21 * (uint)((byte)(uVar46 >> 4) & 1) * auVar76._16_4_ |
         (uint)!bVar21 * aiStack_1b8[2];
    auVar78._20_4_ =
         (uint)bVar28 * (uint)((byte)(uVar46 >> 5) & 1) * auVar76._20_4_ |
         (uint)!bVar28 * aiStack_1b8[3];
    auVar78._24_4_ =
         (uint)bVar35 * (uint)((byte)(uVar46 >> 6) & 1) * auVar76._24_4_ |
         (uint)!bVar35 * iStack_1a8;
    auVar78._28_4_ =
         (uint)bVar42 * (uint)(byte)(uVar46 >> 7) * auVar76._28_4_ | (uint)!bVar42 * iStack_1a4;
    auVar80._4_4_ =
         (uint)bVar31 * (uint)((byte)(uVar46 >> 1) & 1) * auVar81._4_4_ | (uint)!bVar31 * iStack_19c
    ;
    auVar80._0_4_ =
         (uint)(bVar66 & 1) * (uint)(bVar66 & 1) * auVar81._0_4_ |
         (uint)!(bool)(bVar66 & 1) * local_1a0;
    auVar80._8_4_ =
         (uint)bVar8 * (uint)((byte)(uVar46 >> 2) & 1) * auVar81._8_4_ | (uint)!bVar8 * iStack_198;
    auVar80._12_4_ =
         (uint)bVar15 * (uint)((byte)(uVar46 >> 3) & 1) * auVar81._12_4_ |
         (uint)!bVar15 * iStack_194;
    auVar80._16_4_ =
         (uint)bVar22 * (uint)((byte)(uVar46 >> 4) & 1) * auVar81._16_4_ |
         (uint)!bVar22 * iStack_190;
    auVar80._20_4_ =
         (uint)bVar29 * (uint)((byte)(uVar46 >> 5) & 1) * auVar81._20_4_ |
         (uint)!bVar29 * iStack_18c;
    auVar80._24_4_ =
         (uint)bVar36 * (uint)((byte)(uVar46 >> 6) & 1) * auVar81._24_4_ |
         (uint)!bVar36 * iStack_188;
    auVar80._28_4_ =
         (uint)bVar43 * (uint)(byte)(uVar46 >> 7) * auVar81._28_4_ | (uint)!bVar43 * iStack_184;
    auVar72 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)((byte)(uVar46 >> 1) & 1) * auVar68._8_8_,
                                           (ulonglong)(bVar66 & 1) * auVar68._0_8_)),auVar70,1);
    auVar83._4_4_ =
         (uint)bVar38 * (uint)((byte)(uVar46 >> 1) & 1) * auVar82._4_4_ | (uint)!bVar38 * iStack_17c
    ;
    auVar83._0_4_ =
         (uint)(bVar66 & 1) * (uint)(bVar66 & 1) * auVar82._0_4_ |
         (uint)!(bool)(bVar66 & 1) * local_180;
    auVar83._8_4_ =
         (uint)bVar9 * (uint)((byte)(uVar46 >> 2) & 1) * auVar82._8_4_ | (uint)!bVar9 * iStack_178;
    auVar83._12_4_ =
         (uint)bVar16 * (uint)((byte)(uVar46 >> 3) & 1) * auVar82._12_4_ |
         (uint)!bVar16 * iStack_174;
    auVar83._16_4_ =
         (uint)bVar23 * (uint)((byte)(uVar46 >> 4) & 1) * auVar82._16_4_ |
         (uint)!bVar23 * iStack_170;
    auVar83._20_4_ =
         (uint)bVar30 * (uint)((byte)(uVar46 >> 5) & 1) * auVar82._20_4_ |
         (uint)!bVar30 * iStack_16c;
    auVar83._24_4_ =
         (uint)bVar37 * (uint)((byte)(uVar46 >> 6) & 1) * auVar82._24_4_ |
         (uint)!bVar37 * iStack_168;
    auVar83._28_4_ =
         (uint)bVar44 * (uint)(byte)(uVar46 >> 7) * auVar82._28_4_ | (uint)!bVar44 * iStack_164;
    auVar74 = vsubps_avx512vl(auVar87,auVar78);
    auVar75 = vsubps_avx512vl(auVar88,auVar80);
    auVar76 = vsubps_avx512vl(auVar47,auVar83);
    auVar71 = vmulps_avx512vl(auVar75,auVar75);
    auVar71 = vfmadd231ps_avx512vl(auVar71,auVar74,auVar74);
    auVar71 = vfmadd231ps_avx512vl(auVar71,auVar76,auVar76);
    auVar81 = vsqrtps_avx512vl(auVar71);
    auVar71._4_4_ = __real_38d1b717;
    auVar71._0_4_ = __real_38d1b717;
    auVar71._8_4_ = __real_38d1b717;
    auVar71._12_4_ = __real_38d1b717;
    auVar71._16_4_ = __real_38d1b717;
    auVar71._20_4_ = __real_38d1b717;
    auVar71._24_4_ = __real_38d1b717;
    auVar71._28_4_ = __real_38d1b717;
    uVar67 = vcmpps_avx512vl(auVar81,auVar71,1);
    auVar71 = vdivps_avx512vl(auVar74,auVar81);
    auVar74 = vdivps_avx512vl(auVar75,auVar81);
    auVar75 = vbroadcastss_avx512vl(ZEXT416((uint)param_5));
    auVar75 = vfnmadd213ps_avx512vl(auVar77,auVar75,auVar81);
    auVar99._0_4_ = auVar72._0_4_ * auVar75._0_4_;
    auVar99._4_4_ = auVar72._4_4_ * auVar75._4_4_;
    auVar99._8_4_ = auVar72._8_4_ * auVar75._8_4_;
    auVar99._12_4_ = auVar72._12_4_ * auVar75._12_4_;
    auVar99._16_4_ = auVar72._16_4_ * auVar75._16_4_;
    auVar99._20_4_ = auVar72._20_4_ * auVar75._20_4_;
    auVar99._24_4_ = auVar72._24_4_ * auVar75._24_4_;
    auVar99._28_4_ = auVar72._28_4_ * auVar75._28_4_;
    bVar66 = (byte)uVar67;
    bVar2 = (bool)((byte)(uVar67 >> 1) & 1);
    bVar3 = (bool)((byte)(uVar67 >> 2) & 1);
    bVar10 = (bool)((byte)(uVar67 >> 3) & 1);
    bVar17 = (bool)((byte)(uVar67 >> 4) & 1);
    bVar24 = (bool)((byte)(uVar67 >> 5) & 1);
    bVar31 = (bool)((byte)(uVar67 >> 6) & 1);
    bVar38 = SUB81(uVar67 >> 7,0);
    auVar72 = ZEXT1632((undefined1  [16])0x0);
    uVar45 = vcmpps_avx512vl(auVar75,auVar72,1);
    bVar1 = (byte)uVar45;
    auVar92._4_4_ =
         (uint)!(bool)((byte)(uVar45 >> 1) & 1) *
         ((uint)bVar2 * (int)auVar99._4_4_ | (uint)!bVar2 * (int)(auVar99._4_4_ * auVar71._4_4_));
    auVar92._0_4_ =
         (uint)!(bool)(bVar1 & 1) *
         ((uint)(bVar66 & 1) * (int)auVar99._0_4_ |
         (uint)!(bool)(bVar66 & 1) * (int)(auVar99._0_4_ * auVar71._0_4_));
    bVar2 = (bool)((byte)(uVar45 >> 2) & 1);
    auVar92._8_4_ =
         (uint)bVar2 * auVar72._8_4_ |
         (uint)!bVar2 *
         ((uint)bVar3 * (int)auVar99._8_4_ | (uint)!bVar3 * (int)(auVar99._8_4_ * auVar71._8_4_));
    bVar2 = (bool)((byte)(uVar45 >> 3) & 1);
    auVar92._12_4_ =
         (uint)bVar2 * auVar72._12_4_ |
         (uint)!bVar2 *
         ((uint)bVar10 * (int)auVar99._12_4_ |
         (uint)!bVar10 * (int)(auVar99._12_4_ * auVar71._12_4_));
    auVar92._16_4_ =
         (uint)!(bool)((byte)(uVar45 >> 4) & 1) *
         ((uint)bVar17 * (int)auVar99._16_4_ |
         (uint)!bVar17 * (int)(auVar99._16_4_ * auVar71._16_4_));
    auVar92._20_4_ =
         (uint)!(bool)((byte)(uVar45 >> 5) & 1) *
         ((uint)bVar24 * (int)auVar99._20_4_ |
         (uint)!bVar24 * (int)(auVar99._20_4_ * auVar71._20_4_));
    auVar92._24_4_ =
         (uint)!(bool)((byte)(uVar45 >> 6) & 1) *
         ((uint)bVar31 * (int)auVar99._24_4_ |
         (uint)!bVar31 * (int)(auVar99._24_4_ * auVar71._24_4_));
    bVar2 = SUB81(uVar45 >> 7,0);
    auVar92._28_4_ =
         (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar2 *
         ((uint)bVar38 * (int)auVar99._28_4_ |
         (uint)!bVar38 * (int)(auVar99._28_4_ * auVar71._28_4_));
    auVar71 = vaddps_avx512vl(auVar78,auVar92);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar84,uVar46,auVar71);
    auVar93._4_4_ = (uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar74._4_4_;
    auVar93._0_4_ = (uint)!(bool)(bVar66 & 1) * auVar74._0_4_;
    auVar93._8_4_ = (uint)!(bool)((byte)(uVar67 >> 2) & 1) * auVar74._8_4_;
    auVar93._12_4_ = (uint)!(bool)((byte)(uVar67 >> 3) & 1) * auVar74._12_4_;
    auVar93._16_4_ = (uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar74._16_4_;
    auVar93._20_4_ = (uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar74._20_4_;
    iVar96 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
    auVar93._24_4_ = (uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar74._24_4_;
    bVar2 = SUB81(uVar67 >> 7,0);
    auVar93._28_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar74._28_4_;
    auVar71 = vmulps_avx512vl(auVar93,auVar99);
    auVar94._4_4_ = (uint)!(bool)((byte)(uVar45 >> 1) & 1) * auVar71._4_4_;
    auVar94._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar71._0_4_;
    auVar94._8_4_ = (uint)!(bool)((byte)(uVar45 >> 2) & 1) * auVar71._8_4_;
    auVar94._12_4_ = (uint)!(bool)((byte)(uVar45 >> 3) & 1) * auVar71._12_4_;
    auVar94._16_4_ = (uint)!(bool)((byte)(uVar45 >> 4) & 1) * auVar71._16_4_;
    auVar94._20_4_ = (uint)!(bool)((byte)(uVar45 >> 5) & 1) * auVar71._20_4_;
    auVar94._24_4_ = (uint)!(bool)((byte)(uVar45 >> 6) & 1) * auVar71._24_4_;
    bVar2 = SUB81(uVar45 >> 7,0);
    auVar94._28_4_ = (uint)bVar2 * iVar96 | (uint)!bVar2 * auVar71._28_4_;
    auVar71 = vaddps_avx512vl(auVar80,auVar94);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar84 | auVar73),uVar46,auVar71);
    auVar71 = vdivps_avx512vl(auVar76,auVar81);
    bVar2 = SUB81(uVar67 >> 7,0);
    auVar95._4_4_ =
         (uint)!(bool)((byte)(uVar45 >> 1) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 1) & 1) * auVar71._4_4_) * auVar99._4_4_);
    auVar95._0_4_ =
         (uint)!(bool)(bVar1 & 1) *
         (int)((float)((uint)!(bool)(bVar66 & 1) * auVar71._0_4_) * auVar99._0_4_);
    auVar95._8_4_ =
         (uint)!(bool)((byte)(uVar45 >> 2) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 2) & 1) * auVar71._8_4_) * auVar99._8_4_);
    auVar95._12_4_ =
         (uint)!(bool)((byte)(uVar45 >> 3) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 3) & 1) * auVar71._12_4_) * auVar99._12_4_);
    auVar95._16_4_ =
         (uint)!(bool)((byte)(uVar45 >> 4) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 4) & 1) * auVar71._16_4_) * auVar99._16_4_);
    auVar95._20_4_ =
         (uint)!(bool)((byte)(uVar45 >> 5) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 5) & 1) * auVar71._20_4_) * auVar99._20_4_);
    auVar95._24_4_ =
         (uint)!(bool)((byte)(uVar45 >> 6) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar67 >> 6) & 1) * auVar71._24_4_) * auVar99._24_4_);
    bVar3 = SUB81(uVar45 >> 7,0);
    auVar95._28_4_ =
         (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar3 *
         (int)((float)((uint)bVar2 * iVar96 | (uint)!bVar2 * auVar71._28_4_) * auVar99._28_4_);
    auVar71 = vaddps_avx512vl(auVar83,auVar95);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar84 | auVar100),uVar46,auVar71);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar71,uVar46,auVar91);
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap_avx512skx @ 1402e4090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsScaleWeightmap_avx512skx
               (undefined4 *param_1,undefined1 (*param_2) [32],float param_3,longlong param_4,
               longlong param_5,uint param_6)

{
  byte bVar1;
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
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 (*pauVar60) [32];
  longlong unaff_RBX;
  longlong lVar61;
  longlong unaff_RSI;
  longlong lVar62;
  longlong lVar63;
  uint uVar64;
  uint uVar65;
  longlong unaff_R12;
  longlong lVar66;
  longlong lVar67;
  longlong lVar68;
  byte bVar69;
  ulonglong uVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  int iVar99;
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  int iVar100;
  int iVar101;
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
  undefined1 auVar93 [32];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [64];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 in_ZMM17 [64];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM30 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_240 [32];
  undefined1 local_220 [32];
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  int local_1c0;
  int iStack_1bc;
  int aiStack_1b8 [4];
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
  int local_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
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
  
  auVar74 = in_ZMM17._0_16_;
  auVar71 = in_ZMM26._0_16_;
  auVar75 = vpbroadcastd_avx512vl();
  uVar70 = vpcmpgtd_avx512vl(auVar75,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
  bVar69 = (byte)uVar70;
  if (bVar69 != 0) {
    if (bVar69 == 0xff) {
      auVar76 = param_2[1];
      auVar77 = vmovdqu64_avx512vl(param_2[2]);
      auVar79 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,*param_2,auVar76);
      auVar78 = vmovdqa64_avx512vl(
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  );
      auVar80 = vpermi2d_avx512vl(auVar78,auVar77,auVar76);
      auVar74 = auVar80._0_16_;
      auVar78 = vinserti32x4_avx512vl(auVar79,auVar74,1);
      auVar79 = vshufi64x2_avx512vl(auVar79,auVar80,3);
      auVar76 = vpblendd_avx2(auVar76,*param_2,0x24);
      auVar76 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,auVar76,auVar77);
    }
    else {
      auVar76 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + unaff_RBX));
      auVar78._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar76._4_4_;
      auVar78._0_4_ = (uint)(bVar69 & 1) * auVar76._0_4_;
      auVar78._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar76._8_4_;
      auVar78._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar76._12_4_;
      auVar78._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar76._16_4_;
      auVar78._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar76._20_4_;
      auVar78._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar76._24_4_;
      auVar78._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar76._28_4_;
      auVar76 = vpgatherdd_avx512vl(*(undefined4 *)*param_2);
      auVar79._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar76._4_4_;
      auVar79._0_4_ = (uint)(bVar69 & 1) * auVar76._0_4_;
      auVar79._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar76._8_4_;
      auVar79._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar76._12_4_;
      auVar79._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar76._16_4_;
      auVar79._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar76._20_4_;
      auVar79._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar76._24_4_;
      auVar79._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar76._28_4_;
      auVar77 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + (longlong)aiStack_1b8));
      auVar76._4_4_ = (uint)((byte)(uVar70 >> 1) & 1) * auVar77._4_4_;
      auVar76._0_4_ = (uint)(bVar69 & 1) * auVar77._0_4_;
      auVar76._8_4_ = (uint)((byte)(uVar70 >> 2) & 1) * auVar77._8_4_;
      auVar76._12_4_ = (uint)((byte)(uVar70 >> 3) & 1) * auVar77._12_4_;
      auVar76._16_4_ = (uint)((byte)(uVar70 >> 4) & 1) * auVar77._16_4_;
      auVar76._20_4_ = (uint)((byte)(uVar70 >> 5) & 1) * auVar77._20_4_;
      auVar76._24_4_ = (uint)((byte)(uVar70 >> 6) & 1) * auVar77._24_4_;
      auVar76._28_4_ = (uint)(byte)(uVar70 >> 7) * auVar77._28_4_;
    }
    local_240 = vmovdqu32_avx512vl(auVar78);
    local_220 = vmovdqu32_avx512vl(auVar79);
    local_200 = (float)((uint)(bVar69 & 1) * auVar76._0_4_ |
                       (uint)!(bool)(bVar69 & 1) * (int)local_200);
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    fStack_1fc = (float)((uint)bVar2 * auVar76._4_4_ | (uint)!bVar2 * (int)fStack_1fc);
    bVar2 = (bool)((byte)(uVar70 >> 2) & 1);
    fStack_1f8 = (float)((uint)bVar2 * auVar76._8_4_ | (uint)!bVar2 * (int)fStack_1f8);
    bVar2 = (bool)((byte)(uVar70 >> 3) & 1);
    fStack_1f4 = (float)((uint)bVar2 * auVar76._12_4_ | (uint)!bVar2 * (int)fStack_1f4);
    bVar2 = (bool)((byte)(uVar70 >> 4) & 1);
    fStack_1f0 = (float)((uint)bVar2 * auVar76._16_4_ | (uint)!bVar2 * (int)fStack_1f0);
    bVar2 = (bool)((byte)(uVar70 >> 5) & 1);
    fStack_1ec = (float)((uint)bVar2 * auVar76._20_4_ | (uint)!bVar2 * (int)fStack_1ec);
    bVar2 = (bool)((byte)(uVar70 >> 6) & 1);
    fStack_1e8 = (float)((uint)bVar2 * auVar76._24_4_ | (uint)!bVar2 * (int)fStack_1e8);
    bVar2 = SUB81(uVar70 >> 7,0);
    fStack_1e4 = (float)((uint)bVar2 * auVar76._28_4_ | (uint)!bVar2 * (int)fStack_1e4);
  }
  uVar64 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar64 = param_6;
  }
  auVar76 = vpbroadcastd_avx512vl();
  uVar64 = uVar64 & 0xfffffff8;
  uVar70 = (ulonglong)uVar64;
  if ((int)uVar64 < 1) {
    uVar65 = 0;
  }
  else {
    uVar65 = 0;
    auVar105 = ZEXT1664((undefined1  [16])0x0);
    vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar78 = vbroadcastss_avx512vl(ZEXT416(__real_0000000c));
    auVar74 = auVar78._0_16_;
    auVar77 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                                );
    auVar79 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar80 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar81 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                );
    vmovdqa64_avx512vl(___ymm_00000054000000480000003c0000003000000024000000180000000c00000000);
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    do {
      fVar59 = fStack_1e4;
      fVar58 = fStack_1e8;
      fVar57 = fStack_1ec;
      fVar56 = fStack_1f0;
      fVar55 = fStack_1f4;
      fVar54 = fStack_1f8;
      fVar53 = fStack_1fc;
      fVar52 = local_200;
      pauVar60 = param_2 + 3;
      auVar83 = vpaddd_avx512vl(auVar76,local_240);
      vpslld_avx512vl(auVar83,4);
      auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar70));
      auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar65));
      auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar70));
      auVar86 = vpaddd_avx512vl(auVar76,local_220);
      auVar86 = vpslld_avx512vl(auVar86,4);
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar87 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)uVar65));
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar88 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar70));
      in_ZMM29 = ZEXT3264(auVar88);
      auVar89 = vpbroadcastd_avx512vl();
      auVar89 = vpaddd_avx512vl(auVar89,auVar77);
      vxorps_avx512vl(in_ZMM30._0_16_,in_ZMM30._0_16_);
      auVar90 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R12));
      in_ZMM30 = ZEXT3264(auVar90);
      lVar62 = (longlong)(int)local_220._12_4_;
      lVar61 = (longlong)(int)local_220._8_4_;
      lVar67 = (longlong)(int)local_220._4_4_;
      lVar66 = (longlong)(int)local_220._0_4_;
      auVar91 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_RSI));
      lVar68 = (longlong)(int)local_220._28_4_;
      unaff_R12 = (longlong)(int)local_220._24_4_;
      lVar63 = (longlong)(int)local_220._20_4_;
      unaff_RSI = (longlong)(int)local_220._16_4_;
      uVar48 = vpcmpgtd_avx512vl(auVar75,auVar89);
      bVar69 = (byte)uVar48;
      if (bVar69 != 0) {
        if (bVar69 == 0xff) {
          auVar89 = param_2[4];
          auVar82 = vpblendd_avx2(auVar89,*pauVar60,0x24);
          auVar92 = vpermt2d_avx512vl(*pauVar60,
                                      ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                      ,auVar89);
          auVar93 = vpermt2d_avx512vl(auVar82,auVar81,param_2[5]);
          auVar89 = vpermt2d_avx512vl(param_2[5],auVar80,auVar89);
          auVar82._16_16_ = ZEXT116(0) * auVar92._16_16_ | ZEXT116(1) * auVar89._0_16_;
          auVar82._0_16_ = ZEXT116(0) * auVar89._0_16_ | ZEXT116(1) * auVar92._0_16_;
          auVar89 = vperm2i128_avx2(auVar92,auVar89,0x31);
        }
        else {
          auVar89 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar60 + lVar62));
          auVar82._4_4_ = (uint)((byte)(uVar48 >> 1) & 1) * auVar89._4_4_;
          auVar82._0_4_ = (uint)(bVar69 & 1) * auVar89._0_4_;
          auVar82._8_4_ = (uint)((byte)(uVar48 >> 2) & 1) * auVar89._8_4_;
          auVar82._12_4_ = (uint)((byte)(uVar48 >> 3) & 1) * auVar89._12_4_;
          auVar82._16_4_ = (uint)((byte)(uVar48 >> 4) & 1) * auVar89._16_4_;
          auVar82._20_4_ = (uint)((byte)(uVar48 >> 5) & 1) * auVar89._20_4_;
          auVar82._24_4_ = (uint)((byte)(uVar48 >> 6) & 1) * auVar89._24_4_;
          auVar82._28_4_ = (uint)(byte)(uVar48 >> 7) * auVar89._28_4_;
          auVar92 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar60 + lVar63));
          auVar89._4_4_ = (uint)((byte)(uVar48 >> 1) & 1) * auVar92._4_4_;
          auVar89._0_4_ = (uint)(bVar69 & 1) * auVar92._0_4_;
          auVar89._8_4_ = (uint)((byte)(uVar48 >> 2) & 1) * auVar92._8_4_;
          auVar89._12_4_ = (uint)((byte)(uVar48 >> 3) & 1) * auVar92._12_4_;
          auVar89._16_4_ = (uint)((byte)(uVar48 >> 4) & 1) * auVar92._16_4_;
          auVar89._20_4_ = (uint)((byte)(uVar48 >> 5) & 1) * auVar92._20_4_;
          auVar89._24_4_ = (uint)((byte)(uVar48 >> 6) & 1) * auVar92._24_4_;
          auVar89._28_4_ = (uint)(byte)(uVar48 >> 7) * auVar92._28_4_;
          auVar92 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar60 + param_4));
          auVar93._4_4_ = (uint)((byte)(uVar48 >> 1) & 1) * auVar92._4_4_;
          auVar93._0_4_ = (uint)(bVar69 & 1) * auVar92._0_4_;
          auVar93._8_4_ = (uint)((byte)(uVar48 >> 2) & 1) * auVar92._8_4_;
          auVar93._12_4_ = (uint)((byte)(uVar48 >> 3) & 1) * auVar92._12_4_;
          auVar93._16_4_ = (uint)((byte)(uVar48 >> 4) & 1) * auVar92._16_4_;
          auVar93._20_4_ = (uint)((byte)(uVar48 >> 5) & 1) * auVar92._20_4_;
          auVar93._24_4_ = (uint)((byte)(uVar48 >> 6) & 1) * auVar92._24_4_;
          auVar93._28_4_ = (uint)(byte)(uVar48 >> 7) * auVar92._28_4_;
        }
        local_240 = vmovdqu32_avx512vl(auVar82);
        local_220 = vmovdqu32_avx512vl(auVar89);
        local_200 = (float)((uint)(bVar69 & 1) * auVar93._0_4_ |
                           (uint)!(bool)(bVar69 & 1) * (int)local_200);
        bVar2 = (bool)((byte)(uVar48 >> 1) & 1);
        fStack_1fc = (float)((uint)bVar2 * auVar93._4_4_ | (uint)!bVar2 * (int)fStack_1fc);
        bVar2 = (bool)((byte)(uVar48 >> 2) & 1);
        fStack_1f8 = (float)((uint)bVar2 * auVar93._8_4_ | (uint)!bVar2 * (int)fStack_1f8);
        bVar2 = (bool)((byte)(uVar48 >> 3) & 1);
        fStack_1f4 = (float)((uint)bVar2 * auVar93._12_4_ | (uint)!bVar2 * (int)fStack_1f4);
        bVar2 = (bool)((byte)(uVar48 >> 4) & 1);
        fStack_1f0 = (float)((uint)bVar2 * auVar93._16_4_ | (uint)!bVar2 * (int)fStack_1f0);
        bVar2 = (bool)((byte)(uVar48 >> 5) & 1);
        fStack_1ec = (float)((uint)bVar2 * auVar93._20_4_ | (uint)!bVar2 * (int)fStack_1ec);
        bVar2 = (bool)((byte)(uVar48 >> 6) & 1);
        fStack_1e8 = (float)((uint)bVar2 * auVar93._24_4_ | (uint)!bVar2 * (int)fStack_1e8);
        bVar2 = SUB81(uVar48 >> 7,0);
        fStack_1e4 = (float)((uint)bVar2 * auVar93._28_4_ | (uint)!bVar2 * (int)fStack_1e4);
      }
      auVar71 = vpinsrb_avx(ZEXT116(*(byte *)(param_4 + lVar66)),(uint)*(byte *)(param_4 + lVar67),1
                           );
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar61),2);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar62),3);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + unaff_RSI),4);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar63),5);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + unaff_R12),6);
      auVar71 = vpinsrb_avx(auVar71,(uint)*(byte *)(param_4 + lVar68),7);
      auVar89 = vpmovzxbd_avx2(auVar71);
      auVar89 = vpslld_avx2(auVar89,2);
      vpmovzxdq_avx2(auVar89._16_16_);
      vpmovzxdq_avx2(auVar89._0_16_);
      auVar71 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + unaff_R12));
      auVar72 = vgatherqps_avx512vl(*(undefined8 *)
                                     (param_5 + (ulonglong)*(byte *)(param_4 + lVar66)));
      auVar83 = vsubps_avx512vl(auVar83,auVar87);
      auVar84 = vsubps_avx512vl(auVar84,auVar88);
      auVar85 = vsubps_avx512vl(auVar85,auVar90);
      auVar108._0_4_ =
           auVar85._0_4_ * auVar85._0_4_ +
           auVar83._0_4_ * auVar83._0_4_ + auVar84._0_4_ * auVar84._0_4_;
      auVar108._4_4_ =
           auVar85._4_4_ * auVar85._4_4_ +
           auVar83._4_4_ * auVar83._4_4_ + auVar84._4_4_ * auVar84._4_4_;
      auVar108._8_4_ =
           auVar85._8_4_ * auVar85._8_4_ +
           auVar83._8_4_ * auVar83._8_4_ + auVar84._8_4_ * auVar84._8_4_;
      auVar108._12_4_ =
           auVar85._12_4_ * auVar85._12_4_ +
           auVar83._12_4_ * auVar83._12_4_ + auVar84._12_4_ * auVar84._12_4_;
      auVar108._16_4_ =
           auVar85._16_4_ * auVar85._16_4_ +
           auVar83._16_4_ * auVar83._16_4_ + auVar84._16_4_ * auVar84._16_4_;
      auVar108._20_4_ =
           auVar85._20_4_ * auVar85._20_4_ +
           auVar83._20_4_ * auVar83._20_4_ + auVar84._20_4_ * auVar84._20_4_;
      auVar108._24_4_ =
           auVar85._24_4_ * auVar85._24_4_ +
           auVar83._24_4_ * auVar83._24_4_ + auVar84._24_4_ * auVar84._24_4_;
      auVar108._28_4_ =
           auVar85._28_4_ * auVar85._28_4_ +
           auVar83._28_4_ * auVar83._28_4_ + auVar84._28_4_ * auVar84._28_4_;
      auVar89 = vsqrtps_avx(auVar108);
      uVar48 = vcmpps_avx512vl(auVar89,auVar79,1);
      auVar83 = vdivps_avx(auVar83,auVar89);
      auVar84 = vdivps_avx(auVar84,auVar89);
      auVar85 = vdivps_avx(auVar85,auVar89);
      bVar69 = (byte)uVar48;
      auVar92._4_4_ = (uint)!(bool)((byte)(uVar48 >> 1) & 1) * auVar84._4_4_;
      auVar92._0_4_ = (uint)!(bool)(bVar69 & 1) * auVar84._0_4_;
      bVar2 = (bool)((byte)(uVar48 >> 2) & 1);
      iVar99 = auVar105._8_4_;
      auVar92._8_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar84._8_4_;
      bVar2 = (bool)((byte)(uVar48 >> 3) & 1);
      iVar100 = auVar105._12_4_;
      auVar92._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar84._12_4_;
      auVar92._16_4_ = (uint)!(bool)((byte)(uVar48 >> 4) & 1) * auVar84._16_4_;
      auVar92._20_4_ = (uint)!(bool)((byte)(uVar48 >> 5) & 1) * auVar84._20_4_;
      iVar101 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
      auVar92._24_4_ = (uint)!(bool)((byte)(uVar48 >> 6) & 1) * auVar84._24_4_;
      bVar2 = SUB81(uVar48 >> 7,0);
      auVar92._28_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar84._28_4_;
      auVar84._4_4_ = (uint)!(bool)((byte)(uVar48 >> 1) & 1) * auVar85._4_4_;
      auVar84._0_4_ = (uint)!(bool)(bVar69 & 1) * auVar85._0_4_;
      bVar2 = (bool)((byte)(uVar48 >> 2) & 1);
      auVar84._8_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar85._8_4_;
      bVar2 = (bool)((byte)(uVar48 >> 3) & 1);
      auVar84._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar85._12_4_;
      auVar84._16_4_ = (uint)!(bool)((byte)(uVar48 >> 4) & 1) * auVar85._16_4_;
      auVar84._20_4_ = (uint)!(bool)((byte)(uVar48 >> 5) & 1) * auVar85._20_4_;
      auVar84._24_4_ = (uint)!(bool)((byte)(uVar48 >> 6) & 1) * auVar85._24_4_;
      bVar2 = SUB81(uVar48 >> 7,0);
      auVar84._28_4_ = (uint)bVar2 * iVar101 | (uint)!bVar2 * auVar85._28_4_;
      auVar107._0_4_ = -(fVar52 * auVar71._0_4_) + auVar89._0_4_;
      auVar107._4_4_ = -(fVar53 * auVar71._4_4_) + auVar89._4_4_;
      auVar107._8_4_ = -(fVar54 * auVar71._8_4_) + auVar89._8_4_;
      auVar107._12_4_ = -(fVar55 * auVar71._12_4_) + auVar89._12_4_;
      auVar107._16_4_ = -(fVar56 * auVar72._0_4_) + auVar89._16_4_;
      auVar107._20_4_ = -(fVar57 * auVar72._4_4_) + auVar89._20_4_;
      auVar107._24_4_ = -(fVar58 * auVar72._8_4_) + auVar89._24_4_;
      auVar107._28_4_ = -(fVar59 * auVar72._12_4_) + auVar89._28_4_;
      auVar106._0_4_ = auVar107._0_4_ * param_3;
      auVar106._4_4_ = auVar107._4_4_ * param_3;
      auVar106._8_4_ = auVar107._8_4_ * param_3;
      auVar106._12_4_ = auVar107._12_4_ * param_3;
      auVar106._16_4_ = auVar107._16_4_ * param_3;
      auVar106._20_4_ = auVar107._20_4_ * param_3;
      auVar106._24_4_ = auVar107._24_4_ * param_3;
      auVar106._28_4_ = auVar107._28_4_ * param_3;
      bVar2 = (bool)((byte)(uVar48 >> 1) & 1);
      bVar4 = (bool)((byte)(uVar48 >> 2) & 1);
      bVar12 = (bool)((byte)(uVar48 >> 3) & 1);
      bVar20 = (bool)((byte)(uVar48 >> 4) & 1);
      bVar27 = (bool)((byte)(uVar48 >> 5) & 1);
      bVar34 = (bool)((byte)(uVar48 >> 6) & 1);
      bVar41 = SUB81(uVar48 >> 7,0);
      uVar48 = vcmpps_avx512vl(auVar107,auVar105._0_32_,1);
      bVar1 = (byte)uVar48;
      auVar85._4_4_ =
           (uint)!(bool)((byte)(uVar48 >> 1) & 1) *
           ((uint)bVar2 * (int)auVar106._4_4_ | (uint)!bVar2 * (int)(auVar106._4_4_ * auVar83._4_4_)
           );
      auVar85._0_4_ =
           (uint)!(bool)(bVar1 & 1) *
           ((uint)(bVar69 & 1) * (int)auVar106._0_4_ |
           (uint)!(bool)(bVar69 & 1) * (int)(auVar106._0_4_ * auVar83._0_4_));
      bVar2 = (bool)((byte)(uVar48 >> 2) & 1);
      auVar85._8_4_ =
           (uint)bVar2 * iVar99 |
           (uint)!bVar2 *
           ((uint)bVar4 * (int)auVar106._8_4_ | (uint)!bVar4 * (int)(auVar106._8_4_ * auVar83._8_4_)
           );
      bVar2 = (bool)((byte)(uVar48 >> 3) & 1);
      auVar85._12_4_ =
           (uint)bVar2 * iVar100 |
           (uint)!bVar2 *
           ((uint)bVar12 * (int)auVar106._12_4_ |
           (uint)!bVar12 * (int)(auVar106._12_4_ * auVar83._12_4_));
      auVar85._16_4_ =
           (uint)!(bool)((byte)(uVar48 >> 4) & 1) *
           ((uint)bVar20 * (int)auVar106._16_4_ |
           (uint)!bVar20 * (int)(auVar106._16_4_ * auVar83._16_4_));
      auVar85._20_4_ =
           (uint)!(bool)((byte)(uVar48 >> 5) & 1) *
           ((uint)bVar27 * (int)auVar106._20_4_ |
           (uint)!bVar27 * (int)(auVar106._20_4_ * auVar83._20_4_));
      auVar85._24_4_ =
           (uint)!(bool)((byte)(uVar48 >> 6) & 1) *
           ((uint)bVar34 * (int)auVar106._24_4_ |
           (uint)!bVar34 * (int)(auVar106._24_4_ * auVar83._24_4_));
      bVar2 = SUB81(uVar48 >> 7,0);
      auVar85._28_4_ =
           (uint)bVar2 * iVar101 |
           (uint)!bVar2 *
           ((uint)bVar41 * (int)auVar106._28_4_ |
           (uint)!bVar41 * (int)(auVar106._28_4_ * auVar83._28_4_));
      auVar83 = vaddps_avx512vl(auVar87,auVar85);
      in_ZMM31 = ZEXT3264(auVar83);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar84,0xffff,auVar83);
      auVar83 = vmulps_avx512vl(auVar92,auVar106);
      auVar87._4_4_ = (uint)!(bool)((byte)(uVar48 >> 1) & 1) * auVar83._4_4_;
      auVar87._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar83._0_4_;
      bVar2 = (bool)((byte)(uVar48 >> 2) & 1);
      auVar87._8_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar83._8_4_;
      bVar2 = (bool)((byte)(uVar48 >> 3) & 1);
      auVar87._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar83._12_4_;
      auVar87._16_4_ = (uint)!(bool)((byte)(uVar48 >> 4) & 1) * auVar83._16_4_;
      auVar87._20_4_ = (uint)!(bool)((byte)(uVar48 >> 5) & 1) * auVar83._20_4_;
      auVar87._24_4_ = (uint)!(bool)((byte)(uVar48 >> 6) & 1) * auVar83._24_4_;
      bVar2 = SUB81(uVar48 >> 7,0);
      auVar87._28_4_ =
           (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar83._28_4_;
      auVar83 = vaddps_avx512vl(auVar88,auVar87);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar92,0xffff,auVar83);
      auVar83 = vmulps_avx512vl(auVar84,auVar106);
      auVar88._4_4_ = (uint)!(bool)((byte)(uVar48 >> 1) & 1) * auVar83._4_4_;
      auVar88._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar83._0_4_;
      bVar2 = (bool)((byte)(uVar48 >> 2) & 1);
      auVar88._8_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar83._8_4_;
      bVar2 = (bool)((byte)(uVar48 >> 3) & 1);
      auVar88._12_4_ = (uint)bVar2 * iVar100 | (uint)!bVar2 * auVar83._12_4_;
      auVar88._16_4_ = (uint)!(bool)((byte)(uVar48 >> 4) & 1) * auVar83._16_4_;
      auVar88._20_4_ = (uint)!(bool)((byte)(uVar48 >> 5) & 1) * auVar83._20_4_;
      auVar88._24_4_ = (uint)!(bool)((byte)(uVar48 >> 6) & 1) * auVar83._24_4_;
      bVar2 = SUB81(uVar48 >> 7,0);
      auVar88._28_4_ =
           (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar2 * auVar83._28_4_;
      auVar83 = vaddps_avx512vl(auVar90,auVar88);
      auVar71 = auVar83._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar107,0xffff,auVar83);
      vscatterdps_avx512vl(ZEXT832(param_1) + (auVar86 | auVar78),0xffff,auVar91);
      uVar65 = uVar65 + 8;
      param_2 = pauVar60;
    } while ((int)uVar65 < (int)uVar64);
  }
  if ((int)uVar65 < (int)param_6) {
    auVar78 = vpbroadcastd_avx512vl();
    auVar77 = vpord_avx512vl(auVar78,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    uVar49 = vpcmpgtd_avx512vl(auVar75,auVar77);
    auVar81._4_4_ = fStack_1fc;
    auVar81._0_4_ = local_200;
    auVar81._8_4_ = fStack_1f8;
    auVar81._12_4_ = fStack_1f4;
    auVar81._16_4_ = fStack_1f0;
    auVar81._20_4_ = fStack_1ec;
    auVar81._24_4_ = fStack_1e8;
    auVar81._28_4_ = fStack_1e4;
    auVar79 = vmovdqa32_avx512vl(local_220);
    bVar1 = (byte)uVar49;
    lVar62 = (longlong)(int)((uint)((byte)(uVar49 >> 6) & 1) * auVar79._24_4_);
    bVar69 = *(byte *)(param_4 + (int)((uint)(bVar1 & 1) * auVar79._0_4_));
    auVar72 = vpinsrb_avx(ZEXT116(bVar69),
                          (uint)*(byte *)(param_4 +
                                         (int)((uint)((byte)(uVar49 >> 1) & 1) * auVar79._4_4_)),1);
    auVar72 = vpinsrb_avx(auVar72,(uint)*(byte *)(param_4 +
                                                 (int)((uint)((byte)(uVar49 >> 2) & 1) *
                                                      auVar79._8_4_)),2);
    auVar72 = vpinsrb_avx(auVar72,(uint)*(byte *)(param_4 +
                                                 (int)((uint)((byte)(uVar49 >> 3) & 1) *
                                                      auVar79._12_4_)),3);
    auVar77._0_4_ = auVar76._0_4_ + local_240._0_4_;
    auVar77._4_4_ = auVar76._4_4_ + local_240._4_4_;
    auVar77._8_4_ = auVar76._8_4_ + local_240._8_4_;
    auVar77._12_4_ = auVar76._12_4_ + local_240._12_4_;
    auVar77._16_4_ = auVar76._16_4_ + local_240._16_4_;
    auVar77._20_4_ = auVar76._20_4_ + local_240._20_4_;
    auVar77._24_4_ = auVar76._24_4_ + local_240._24_4_;
    auVar77._28_4_ = auVar76._28_4_ + local_240._28_4_;
    vpslld_avx2(auVar77,4);
    auVar104._4_4_ = __real_00000004;
    auVar104._0_4_ = __real_00000004;
    auVar104._8_4_ = __real_00000004;
    auVar104._12_4_ = __real_00000004;
    auVar104._16_4_ = __real_00000004;
    auVar104._20_4_ = __real_00000004;
    auVar104._24_4_ = __real_00000004;
    auVar104._28_4_ = __real_00000004;
    auVar77 = vgatherdps_avx512vl(*param_1);
    auVar83 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (ulonglong)bVar69));
    lVar61 = (longlong)(int)((uint)(byte)(uVar49 >> 7) * auVar79._28_4_);
    auVar80._0_4_ = local_220._0_4_ + auVar76._0_4_;
    auVar80._4_4_ = local_220._4_4_ + auVar76._4_4_;
    auVar80._8_4_ = local_220._8_4_ + auVar76._8_4_;
    auVar80._12_4_ = local_220._12_4_ + auVar76._12_4_;
    auVar80._16_4_ = local_220._16_4_ + auVar76._16_4_;
    auVar80._20_4_ = local_220._20_4_ + auVar76._20_4_;
    auVar80._24_4_ = local_220._24_4_ + auVar76._24_4_;
    auVar80._28_4_ = local_220._28_4_ + auVar76._28_4_;
    auVar102._4_4_ = __real_00000008;
    auVar102._0_4_ = __real_00000008;
    auVar102._8_4_ = __real_00000008;
    auVar102._12_4_ = __real_00000008;
    auVar102._16_4_ = __real_00000008;
    auVar102._20_4_ = __real_00000008;
    auVar102._24_4_ = __real_00000008;
    auVar102._28_4_ = __real_00000008;
    auVar76 = vgatherdps_avx512vl(*param_1);
    auVar87 = vpslld_avx2(auVar80,4);
    auVar80 = vgatherdps_avx512vl(*param_1);
    auVar72 = vpinsrb_avx(auVar72,(uint)*(byte *)(param_4 +
                                                 (int)((uint)((byte)(uVar49 >> 4) & 1) *
                                                      auVar79._16_4_)),4);
    auVar72 = vpinsrb_avx(auVar72,(uint)*(byte *)(param_4 +
                                                 (int)((uint)((byte)(uVar49 >> 5) & 1) *
                                                      auVar79._20_4_)),5);
    auVar79 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_1b8));
    auVar73 = vxorps_avx512vl(auVar71,auVar71);
    auVar84 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar4 = (bool)((byte)(uVar49 >> 1) & 1);
    bVar5 = (bool)((byte)(uVar49 >> 2) & 1);
    bVar13 = (bool)((byte)(uVar49 >> 3) & 1);
    auVar71 = vpinsrb_avx(auVar72,(uint)*(byte *)(param_4 + lVar62),6);
    auVar71 = vpinsrb_avx512bw(auVar71,(uint)*(byte *)(param_4 + lVar61),7);
    auVar74 = vxorps_avx512vl(auVar74,auVar74);
    auVar85 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar61));
    auVar94._0_4_ = (uint)(bVar1 & 1) * auVar85._0_4_ | (uint)!(bool)(bVar1 & 1) * auVar74._0_4_;
    bVar2 = (bool)((byte)(uVar49 >> 1) & 1);
    auVar94._4_4_ = (uint)bVar2 * auVar85._4_4_ | (uint)!bVar2 * auVar74._4_4_;
    bVar2 = (bool)((byte)(uVar49 >> 2) & 1);
    auVar94._8_4_ = (uint)bVar2 * auVar85._8_4_ | (uint)!bVar2 * auVar74._8_4_;
    bVar2 = (bool)((byte)(uVar49 >> 3) & 1);
    auVar94._12_4_ = (uint)bVar2 * auVar85._12_4_ | (uint)!bVar2 * auVar74._12_4_;
    auVar94._16_4_ = (uint)((byte)(uVar49 >> 4) & 1) * auVar85._16_4_;
    auVar94._20_4_ = (uint)((byte)(uVar49 >> 5) & 1) * auVar85._20_4_;
    auVar94._24_4_ = (uint)((byte)(uVar49 >> 6) & 1) * auVar85._24_4_;
    auVar94._28_4_ = (uint)(byte)(uVar49 >> 7) * auVar85._28_4_;
    bVar12 = (bool)((byte)(uVar49 >> 1) & 1);
    bVar6 = (bool)((byte)(uVar49 >> 2) & 1);
    bVar14 = (bool)((byte)(uVar49 >> 3) & 1);
    bVar21 = (bool)((byte)(uVar49 >> 4) & 1);
    bVar28 = (bool)((byte)(uVar49 >> 5) & 1);
    bVar35 = (bool)((byte)(uVar49 >> 6) & 1);
    bVar42 = SUB81(uVar49 >> 7,0);
    bVar20 = (bool)((byte)(uVar49 >> 1) & 1);
    bVar7 = (bool)((byte)(uVar49 >> 2) & 1);
    bVar15 = (bool)((byte)(uVar49 >> 3) & 1);
    bVar22 = (bool)((byte)(uVar49 >> 4) & 1);
    bVar29 = (bool)((byte)(uVar49 >> 5) & 1);
    bVar36 = (bool)((byte)(uVar49 >> 6) & 1);
    bVar43 = SUB81(uVar49 >> 7,0);
    bVar27 = (bool)((byte)(uVar49 >> 1) & 1);
    bVar8 = (bool)((byte)(uVar49 >> 2) & 1);
    bVar16 = (bool)((byte)(uVar49 >> 3) & 1);
    bVar23 = (bool)((byte)(uVar49 >> 4) & 1);
    bVar30 = (bool)((byte)(uVar49 >> 5) & 1);
    bVar37 = (bool)((byte)(uVar49 >> 6) & 1);
    bVar44 = SUB81(uVar49 >> 7,0);
    bVar34 = (bool)((byte)(uVar49 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar49 >> 2) & 1);
    bVar17 = (bool)((byte)(uVar49 >> 3) & 1);
    bVar24 = (bool)((byte)(uVar49 >> 4) & 1);
    bVar31 = (bool)((byte)(uVar49 >> 5) & 1);
    bVar38 = (bool)((byte)(uVar49 >> 6) & 1);
    bVar45 = SUB81(uVar49 >> 7,0);
    bVar41 = (bool)((byte)(uVar49 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar49 >> 2) & 1);
    bVar18 = (bool)((byte)(uVar49 >> 3) & 1);
    bVar25 = (bool)((byte)(uVar49 >> 4) & 1);
    bVar32 = (bool)((byte)(uVar49 >> 5) & 1);
    bVar39 = (bool)((byte)(uVar49 >> 6) & 1);
    bVar46 = SUB81(uVar49 >> 7,0);
    bVar3 = (bool)((byte)(uVar49 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar49 >> 2) & 1);
    bVar19 = (bool)((byte)(uVar49 >> 3) & 1);
    bVar26 = (bool)((byte)(uVar49 >> 4) & 1);
    bVar33 = (bool)((byte)(uVar49 >> 5) & 1);
    bVar40 = (bool)((byte)(uVar49 >> 6) & 1);
    bVar47 = SUB81(uVar49 >> 7,0);
    auVar78 = vpaddd_avx512vl(auVar78,
                              ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                             );
    vpcmpgtd_avx512vl(auVar75,auVar78);
    auVar75 = vpmovzxbd_avx512vl(auVar71);
    auVar75 = vpslld_avx2(auVar75,2);
    vpmovzxdq_avx2(auVar75._16_16_);
    vpmovzxdq_avx2(auVar75._0_16_);
    uVar70 = uVar49 >> 4 & 0xf;
    auVar74 = vgatherqps_avx512vl(*(undefined8 *)(param_5 * 2));
    auVar71 = vgatherqps_avx512vl(*(undefined8 *)(param_5 + lVar62));
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    auVar72._8_8_ = (ulonglong)bVar2 * auVar71._8_8_ | (ulonglong)!bVar2 * SUB168(ZEXT816(0),4);
    auVar72._0_8_ = (ulonglong)((byte)uVar70 & 1) * auVar71._0_8_;
    auVar91._4_4_ =
         (uint)bVar12 * (uint)((byte)(uVar49 >> 1) & 1) * auVar77._4_4_ | (uint)!bVar12 * iStack_15c
    ;
    auVar91._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar77._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_160;
    auVar91._8_4_ =
         (uint)bVar6 * (uint)((byte)(uVar49 >> 2) & 1) * auVar77._8_4_ | (uint)!bVar6 * iStack_158;
    auVar91._12_4_ =
         (uint)bVar14 * (uint)((byte)(uVar49 >> 3) & 1) * auVar77._12_4_ |
         (uint)!bVar14 * iStack_154;
    auVar91._16_4_ =
         (uint)bVar21 * (uint)((byte)(uVar49 >> 4) & 1) * auVar77._16_4_ |
         (uint)!bVar21 * iStack_150;
    auVar91._20_4_ =
         (uint)bVar28 * (uint)((byte)(uVar49 >> 5) & 1) * auVar77._20_4_ |
         (uint)!bVar28 * iStack_14c;
    auVar91._24_4_ =
         (uint)bVar35 * (uint)((byte)(uVar49 >> 6) & 1) * auVar77._24_4_ |
         (uint)!bVar35 * iStack_148;
    auVar91._28_4_ =
         (uint)bVar42 * (uint)(byte)(uVar49 >> 7) * auVar77._28_4_ | (uint)!bVar42 * iStack_144;
    auVar50._4_4_ =
         (uint)bVar20 * (uint)((byte)(uVar49 >> 1) & 1) * auVar83._4_4_ | (uint)!bVar20 * iStack_13c
    ;
    auVar50._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar83._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_140;
    auVar50._8_4_ =
         (uint)bVar7 * (uint)((byte)(uVar49 >> 2) & 1) * auVar83._8_4_ | (uint)!bVar7 * iStack_138;
    auVar50._12_4_ =
         (uint)bVar15 * (uint)((byte)(uVar49 >> 3) & 1) * auVar83._12_4_ |
         (uint)!bVar15 * iStack_134;
    auVar50._16_4_ =
         (uint)bVar22 * (uint)((byte)(uVar49 >> 4) & 1) * auVar83._16_4_ |
         (uint)!bVar22 * iStack_130;
    auVar50._20_4_ =
         (uint)bVar29 * (uint)((byte)(uVar49 >> 5) & 1) * auVar83._20_4_ |
         (uint)!bVar29 * iStack_12c;
    auVar50._24_4_ =
         (uint)bVar36 * (uint)((byte)(uVar49 >> 6) & 1) * auVar83._24_4_ |
         (uint)!bVar36 * iStack_128;
    auVar50._28_4_ =
         (uint)bVar43 * (uint)(byte)(uVar49 >> 7) * auVar83._28_4_ | (uint)!bVar43 * iStack_124;
    auVar51._4_4_ =
         (uint)bVar27 * (uint)((byte)(uVar49 >> 1) & 1) * auVar76._4_4_ | (uint)!bVar27 * iStack_11c
    ;
    auVar51._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar76._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_120;
    auVar51._8_4_ =
         (uint)bVar8 * (uint)((byte)(uVar49 >> 2) & 1) * auVar76._8_4_ | (uint)!bVar8 * iStack_118;
    auVar51._12_4_ =
         (uint)bVar16 * (uint)((byte)(uVar49 >> 3) & 1) * auVar76._12_4_ |
         (uint)!bVar16 * iStack_114;
    auVar51._16_4_ =
         (uint)bVar23 * (uint)((byte)(uVar49 >> 4) & 1) * auVar76._16_4_ |
         (uint)!bVar23 * iStack_110;
    auVar51._20_4_ =
         (uint)bVar30 * (uint)((byte)(uVar49 >> 5) & 1) * auVar76._20_4_ |
         (uint)!bVar30 * iStack_10c;
    auVar51._24_4_ =
         (uint)bVar37 * (uint)((byte)(uVar49 >> 6) & 1) * auVar76._24_4_ |
         (uint)!bVar37 * iStack_108;
    auVar51._28_4_ =
         (uint)bVar44 * (uint)(byte)(uVar49 >> 7) * auVar76._28_4_ | (uint)!bVar44 * iStack_104;
    auVar83._4_4_ =
         (uint)bVar34 * (uint)((byte)(uVar49 >> 1) & 1) * auVar80._4_4_ | (uint)!bVar34 * iStack_1bc
    ;
    auVar83._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar80._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_1c0;
    auVar83._8_4_ =
         (uint)bVar9 * (uint)((byte)(uVar49 >> 2) & 1) * auVar80._8_4_ |
         (uint)!bVar9 * aiStack_1b8[0];
    auVar83._12_4_ =
         (uint)bVar17 * (uint)((byte)(uVar49 >> 3) & 1) * auVar80._12_4_ |
         (uint)!bVar17 * aiStack_1b8[1];
    auVar83._16_4_ =
         (uint)bVar24 * (uint)((byte)(uVar49 >> 4) & 1) * auVar80._16_4_ |
         (uint)!bVar24 * aiStack_1b8[2];
    auVar83._20_4_ =
         (uint)bVar31 * (uint)((byte)(uVar49 >> 5) & 1) * auVar80._20_4_ |
         (uint)!bVar31 * aiStack_1b8[3];
    auVar83._24_4_ =
         (uint)bVar38 * (uint)((byte)(uVar49 >> 6) & 1) * auVar80._24_4_ |
         (uint)!bVar38 * iStack_1a8;
    auVar83._28_4_ =
         (uint)bVar45 * (uint)(byte)(uVar49 >> 7) * auVar80._28_4_ | (uint)!bVar45 * iStack_1a4;
    auVar86._4_4_ =
         (uint)bVar41 * (uint)((byte)(uVar49 >> 1) & 1) * auVar79._4_4_ | (uint)!bVar41 * iStack_19c
    ;
    auVar86._0_4_ =
         (uint)(bVar1 & 1) * (uint)(bVar1 & 1) * auVar79._0_4_ |
         (uint)!(bool)(bVar1 & 1) * local_1a0;
    auVar86._8_4_ =
         (uint)bVar10 * (uint)((byte)(uVar49 >> 2) & 1) * auVar79._8_4_ | (uint)!bVar10 * iStack_198
    ;
    auVar86._12_4_ =
         (uint)bVar18 * (uint)((byte)(uVar49 >> 3) & 1) * auVar79._12_4_ |
         (uint)!bVar18 * iStack_194;
    auVar86._16_4_ =
         (uint)bVar25 * (uint)((byte)(uVar49 >> 4) & 1) * auVar79._16_4_ |
         (uint)!bVar25 * iStack_190;
    auVar86._20_4_ =
         (uint)bVar32 * (uint)((byte)(uVar49 >> 5) & 1) * auVar79._20_4_ |
         (uint)!bVar32 * iStack_18c;
    auVar86._24_4_ =
         (uint)bVar39 * (uint)((byte)(uVar49 >> 6) & 1) * auVar79._24_4_ |
         (uint)!bVar39 * iStack_188;
    auVar86._28_4_ =
         (uint)bVar46 * (uint)(byte)(uVar49 >> 7) * auVar79._28_4_ | (uint)!bVar46 * iStack_184;
    auVar76 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)((byte)(uVar49 >> 1) & 1) * auVar74._8_8_,
                                           (ulonglong)(bVar1 & 1) * auVar74._0_8_)),auVar72,1);
    auVar90._4_4_ =
         (uint)bVar3 * ((uint)bVar4 * auVar84._4_4_ | (uint)!bVar4 * auVar73._4_4_) |
         (uint)!bVar3 * iStack_17c;
    auVar90._0_4_ =
         (uint)(bVar1 & 1) *
         ((uint)(bVar1 & 1) * auVar84._0_4_ | (uint)!(bool)(bVar1 & 1) * auVar73._0_4_) |
         (uint)!(bool)(bVar1 & 1) * local_180;
    auVar90._8_4_ =
         (uint)bVar11 * ((uint)bVar5 * auVar84._8_4_ | (uint)!bVar5 * auVar73._8_4_) |
         (uint)!bVar11 * iStack_178;
    auVar90._12_4_ =
         (uint)bVar19 * ((uint)bVar13 * auVar84._12_4_ | (uint)!bVar13 * auVar73._12_4_) |
         (uint)!bVar19 * iStack_174;
    auVar90._16_4_ =
         (uint)bVar26 * (uint)((byte)(uVar49 >> 4) & 1) * auVar84._16_4_ |
         (uint)!bVar26 * iStack_170;
    auVar90._20_4_ =
         (uint)bVar33 * (uint)((byte)(uVar49 >> 5) & 1) * auVar84._20_4_ |
         (uint)!bVar33 * iStack_16c;
    auVar90._24_4_ =
         (uint)bVar40 * (uint)((byte)(uVar49 >> 6) & 1) * auVar84._24_4_ |
         (uint)!bVar40 * iStack_168;
    auVar90._28_4_ =
         (uint)bVar47 * (uint)(byte)(uVar49 >> 7) * auVar84._28_4_ | (uint)!bVar47 * iStack_164;
    auVar78 = vsubps_avx512vl(auVar91,auVar83);
    auVar77 = vsubps_avx512vl(auVar50,auVar86);
    auVar79 = vsubps_avx512vl(auVar51,auVar90);
    auVar75 = vmulps_avx512vl(auVar77,auVar77);
    auVar75 = vfmadd231ps_avx512vl(auVar75,auVar78,auVar78);
    auVar75 = vfmadd231ps_avx512vl(auVar75,auVar79,auVar79);
    auVar80 = vsqrtps_avx512vl(auVar75);
    auVar75._4_4_ = __real_38d1b717;
    auVar75._0_4_ = __real_38d1b717;
    auVar75._8_4_ = __real_38d1b717;
    auVar75._12_4_ = __real_38d1b717;
    auVar75._16_4_ = __real_38d1b717;
    auVar75._20_4_ = __real_38d1b717;
    auVar75._24_4_ = __real_38d1b717;
    auVar75._28_4_ = __real_38d1b717;
    uVar70 = vcmpps_avx512vl(auVar80,auVar75,1);
    auVar75 = vdivps_avx512vl(auVar78,auVar80);
    auVar78 = vdivps_avx512vl(auVar77,auVar80);
    auVar76 = vfnmadd213ps_avx512vl(auVar76,auVar81,auVar80);
    auVar103._0_4_ = param_3 * auVar76._0_4_;
    auVar103._4_4_ = param_3 * auVar76._4_4_;
    auVar103._8_4_ = param_3 * auVar76._8_4_;
    auVar103._12_4_ = param_3 * auVar76._12_4_;
    auVar103._16_4_ = param_3 * auVar76._16_4_;
    auVar103._20_4_ = param_3 * auVar76._20_4_;
    auVar103._24_4_ = param_3 * auVar76._24_4_;
    auVar103._28_4_ = param_3 * auVar76._28_4_;
    bVar69 = (byte)uVar70;
    bVar2 = (bool)((byte)(uVar70 >> 1) & 1);
    bVar4 = (bool)((byte)(uVar70 >> 2) & 1);
    bVar12 = (bool)((byte)(uVar70 >> 3) & 1);
    bVar20 = (bool)((byte)(uVar70 >> 4) & 1);
    bVar27 = (bool)((byte)(uVar70 >> 5) & 1);
    bVar34 = (bool)((byte)(uVar70 >> 6) & 1);
    bVar41 = SUB81(uVar70 >> 7,0);
    auVar77 = ZEXT1632((undefined1  [16])0x0);
    uVar48 = vcmpps_avx512vl(auVar76,auVar77,1);
    bVar1 = (byte)uVar48;
    auVar95._4_4_ =
         (uint)!(bool)((byte)(uVar48 >> 1) & 1) *
         ((uint)bVar2 * (int)auVar103._4_4_ | (uint)!bVar2 * (int)(auVar103._4_4_ * auVar75._4_4_));
    auVar95._0_4_ =
         (uint)!(bool)(bVar1 & 1) *
         ((uint)(bVar69 & 1) * (int)auVar103._0_4_ |
         (uint)!(bool)(bVar69 & 1) * (int)(auVar103._0_4_ * auVar75._0_4_));
    bVar2 = (bool)((byte)(uVar48 >> 2) & 1);
    auVar95._8_4_ =
         (uint)bVar2 * auVar77._8_4_ |
         (uint)!bVar2 *
         ((uint)bVar4 * (int)auVar103._8_4_ | (uint)!bVar4 * (int)(auVar103._8_4_ * auVar75._8_4_));
    bVar2 = (bool)((byte)(uVar48 >> 3) & 1);
    auVar95._12_4_ =
         (uint)bVar2 * auVar77._12_4_ |
         (uint)!bVar2 *
         ((uint)bVar12 * (int)auVar103._12_4_ |
         (uint)!bVar12 * (int)(auVar103._12_4_ * auVar75._12_4_));
    auVar95._16_4_ =
         (uint)!(bool)((byte)(uVar48 >> 4) & 1) *
         ((uint)bVar20 * (int)auVar103._16_4_ |
         (uint)!bVar20 * (int)(auVar103._16_4_ * auVar75._16_4_));
    auVar95._20_4_ =
         (uint)!(bool)((byte)(uVar48 >> 5) & 1) *
         ((uint)bVar27 * (int)auVar103._20_4_ |
         (uint)!bVar27 * (int)(auVar103._20_4_ * auVar75._20_4_));
    auVar95._24_4_ =
         (uint)!(bool)((byte)(uVar48 >> 6) & 1) *
         ((uint)bVar34 * (int)auVar103._24_4_ |
         (uint)!bVar34 * (int)(auVar103._24_4_ * auVar75._24_4_));
    bVar2 = SUB81(uVar48 >> 7,0);
    auVar95._28_4_ =
         (uint)bVar2 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar2 *
         ((uint)bVar41 * (int)auVar103._28_4_ |
         (uint)!bVar41 * (int)(auVar103._28_4_ * auVar75._28_4_));
    auVar75 = vaddps_avx512vl(auVar83,auVar95);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar87,uVar49,auVar75);
    auVar96._4_4_ = (uint)!(bool)((byte)(uVar70 >> 1) & 1) * auVar78._4_4_;
    auVar96._0_4_ = (uint)!(bool)(bVar69 & 1) * auVar78._0_4_;
    auVar96._8_4_ = (uint)!(bool)((byte)(uVar70 >> 2) & 1) * auVar78._8_4_;
    auVar96._12_4_ = (uint)!(bool)((byte)(uVar70 >> 3) & 1) * auVar78._12_4_;
    auVar96._16_4_ = (uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar78._16_4_;
    auVar96._20_4_ = (uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar78._20_4_;
    iVar99 = SUB124(SUB1612((undefined1  [16])0x0,4),8);
    auVar96._24_4_ = (uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar78._24_4_;
    bVar2 = SUB81(uVar70 >> 7,0);
    auVar96._28_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar78._28_4_;
    auVar75 = vmulps_avx512vl(auVar96,auVar103);
    auVar97._4_4_ = (uint)!(bool)((byte)(uVar48 >> 1) & 1) * auVar75._4_4_;
    auVar97._0_4_ = (uint)!(bool)(bVar1 & 1) * auVar75._0_4_;
    auVar97._8_4_ = (uint)!(bool)((byte)(uVar48 >> 2) & 1) * auVar75._8_4_;
    auVar97._12_4_ = (uint)!(bool)((byte)(uVar48 >> 3) & 1) * auVar75._12_4_;
    auVar97._16_4_ = (uint)!(bool)((byte)(uVar48 >> 4) & 1) * auVar75._16_4_;
    auVar97._20_4_ = (uint)!(bool)((byte)(uVar48 >> 5) & 1) * auVar75._20_4_;
    auVar97._24_4_ = (uint)!(bool)((byte)(uVar48 >> 6) & 1) * auVar75._24_4_;
    bVar2 = SUB81(uVar48 >> 7,0);
    auVar97._28_4_ = (uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._28_4_;
    auVar75 = vaddps_avx512vl(auVar86,auVar97);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar104),uVar49,auVar75);
    auVar75 = vdivps_avx512vl(auVar79,auVar80);
    bVar2 = SUB81(uVar70 >> 7,0);
    auVar98._4_4_ =
         (uint)!(bool)((byte)(uVar48 >> 1) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 1) & 1) * auVar75._4_4_) * auVar103._4_4_);
    auVar98._0_4_ =
         (uint)!(bool)(bVar1 & 1) *
         (int)((float)((uint)!(bool)(bVar69 & 1) * auVar75._0_4_) * auVar103._0_4_);
    auVar98._8_4_ =
         (uint)!(bool)((byte)(uVar48 >> 2) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 2) & 1) * auVar75._8_4_) * auVar103._8_4_);
    auVar98._12_4_ =
         (uint)!(bool)((byte)(uVar48 >> 3) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 3) & 1) * auVar75._12_4_) * auVar103._12_4_);
    auVar98._16_4_ =
         (uint)!(bool)((byte)(uVar48 >> 4) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 4) & 1) * auVar75._16_4_) * auVar103._16_4_);
    auVar98._20_4_ =
         (uint)!(bool)((byte)(uVar48 >> 5) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 5) & 1) * auVar75._20_4_) * auVar103._20_4_);
    auVar98._24_4_ =
         (uint)!(bool)((byte)(uVar48 >> 6) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar70 >> 6) & 1) * auVar75._24_4_) * auVar103._24_4_);
    bVar4 = SUB81(uVar48 >> 7,0);
    auVar98._28_4_ =
         (uint)bVar4 * SUB124(SUB1612((undefined1  [16])0x0,4),8) |
         (uint)!bVar4 *
         (int)((float)((uint)bVar2 * iVar99 | (uint)!bVar2 * auVar75._28_4_) * auVar103._28_4_);
    auVar75 = vaddps_avx512vl(auVar90,auVar98);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar87 | auVar102),uVar49,auVar75);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar75,uVar49,auVar94);
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx512skx @ 1402e48e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx512skx
               (undefined4 *param_1,undefined1 (*param_2) [32],longlong param_3,longlong param_4,
               longlong param_5,undefined8 *param_6,uint param_7)

{
  int iVar1;
  byte bVar2;
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
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  bool bVar41;
  bool bVar42;
  bool bVar43;
  bool bVar44;
  bool bVar45;
  bool bVar46;
  bool bVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  ulonglong uVar56;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  longlong lVar69;
  undefined1 (*pauVar70) [32];
  longlong unaff_RBX;
  longlong lVar71;
  longlong lVar72;
  uint uVar73;
  ulonglong uVar74;
  uint uVar75;
  longlong lVar76;
  longlong lVar77;
  longlong lVar78;
  longlong unaff_R14;
  longlong lVar79;
  longlong lVar80;
  byte bVar81;
  ulonglong uVar82;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
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
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar112 [32];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 in_ZMM14 [64];
  undefined1 in_ZMM24 [64];
  undefined1 in_ZMM25 [64];
  undefined1 auVar123 [16];
  undefined1 in_ZMM26 [64];
  undefined1 in_ZMM27 [64];
  undefined1 in_ZMM28 [64];
  undefined1 in_ZMM29 [64];
  undefined1 in_ZMM31 [64];
  undefined1 local_200 [32];
  undefined1 local_1e0 [32];
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  int local_1a0;
  int iStack_19c;
  int aiStack_198 [4];
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
  int local_140;
  int iStack_13c;
  int aiStack_138 [4];
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
  undefined1 local_58 [16];
  int iVar83;
  undefined1 auVar90 [16];
  int iVar117;
  int iVar118;
  
  auVar123 = in_ZMM26._0_16_;
  auVar87 = in_ZMM25._0_16_;
  auVar86 = in_ZMM24._0_16_;
  local_58 = in_ZMM14._0_16_;
  auVar94 = vpbroadcastd_avx512vl();
  uVar82 = vpcmpgtd_avx512vl(auVar94,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
  bVar81 = (byte)uVar82;
  if (bVar81 != 0) {
    if (bVar81 == 0xff) {
      auVar95 = param_2[1];
      auVar98 = vpermi2d_avx512vl(___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                  ,*param_2,auVar95);
      auVar97 = vmovdqa64_avx512vl(
                                  ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                  );
      auVar96 = vpermi2d_avx512vl(auVar97,param_2[2],auVar95);
      auVar97 = vinserti32x4_avx512vl(auVar98,auVar96._0_16_,1);
      auVar98 = vshufi64x2_avx512vl(auVar98,auVar96,3);
      auVar95 = vpblendd_avx2(auVar95,*param_2,0x24);
      auVar95 = vpermi2d_avx512vl(___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                  ,auVar95,param_2[2]);
    }
    else {
      auVar95 = vpgatherdd_avx512vl(*(undefined4 *)((longlong)param_2 * 2));
      auVar97._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar95._4_4_;
      auVar97._0_4_ = (uint)(bVar81 & 1) * auVar95._0_4_;
      auVar97._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar95._8_4_;
      auVar97._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar95._12_4_;
      auVar97._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar95._16_4_;
      auVar97._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar95._20_4_;
      auVar97._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar95._24_4_;
      auVar97._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar95._28_4_;
      auVar95 = vpgatherdd_avx512vl(*(undefined4 *)(*param_2 + unaff_RBX));
      auVar98._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar95._4_4_;
      auVar98._0_4_ = (uint)(bVar81 & 1) * auVar95._0_4_;
      auVar98._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar95._8_4_;
      auVar98._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar95._12_4_;
      auVar98._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar95._16_4_;
      auVar98._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar95._20_4_;
      auVar98._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar95._24_4_;
      auVar98._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar95._28_4_;
      auVar96 = vpgatherdd_avx512vl(*(undefined4 *)*param_2);
      auVar95._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar96._4_4_;
      auVar95._0_4_ = (uint)(bVar81 & 1) * auVar96._0_4_;
      auVar95._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar96._8_4_;
      auVar95._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar96._12_4_;
      auVar95._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar96._16_4_;
      auVar95._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar96._20_4_;
      auVar95._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar96._24_4_;
      auVar95._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar96._28_4_;
    }
    local_200 = vmovdqu32_avx512vl(auVar97);
    local_1e0 = vmovdqu32_avx512vl(auVar98);
    local_1c0 = (float)((uint)(bVar81 & 1) * auVar95._0_4_ |
                       (uint)!(bool)(bVar81 & 1) * (int)local_1c0);
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    fStack_1bc = (float)((uint)bVar3 * auVar95._4_4_ | (uint)!bVar3 * (int)fStack_1bc);
    bVar3 = (bool)((byte)(uVar82 >> 2) & 1);
    fStack_1b8 = (float)((uint)bVar3 * auVar95._8_4_ | (uint)!bVar3 * (int)fStack_1b8);
    bVar3 = (bool)((byte)(uVar82 >> 3) & 1);
    fStack_1b4 = (float)((uint)bVar3 * auVar95._12_4_ | (uint)!bVar3 * (int)fStack_1b4);
    bVar3 = (bool)((byte)(uVar82 >> 4) & 1);
    fStack_1b0 = (float)((uint)bVar3 * auVar95._16_4_ | (uint)!bVar3 * (int)fStack_1b0);
    bVar3 = (bool)((byte)(uVar82 >> 5) & 1);
    fStack_1ac = (float)((uint)bVar3 * auVar95._20_4_ | (uint)!bVar3 * (int)fStack_1ac);
    bVar3 = (bool)((byte)(uVar82 >> 6) & 1);
    fStack_1a8 = (float)((uint)bVar3 * auVar95._24_4_ | (uint)!bVar3 * (int)fStack_1a8);
    bVar3 = SUB81(uVar82 >> 7,0);
    fStack_1a4 = (float)((uint)bVar3 * auVar95._28_4_ | (uint)!bVar3 * (int)fStack_1a4);
  }
  uVar75 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar75 = param_7;
  }
  auVar95 = vpbroadcastd_avx512vl();
  uVar75 = uVar75 & 0xfffffff8;
  uVar82 = (ulonglong)uVar75;
  if ((int)uVar75 < 1) {
    uVar73 = 0;
  }
  else {
    uVar74 = 0;
    auVar89._4_4_ = __real_00000008;
    auVar89._0_4_ = __real_00000008;
    auVar89._8_4_ = __real_00000008;
    auVar89._12_4_ = __real_00000008;
    auVar97 = vmovdqa64_avx512vl(
                                ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                                );
    auVar98 = vbroadcastss_avx512vl(ZEXT416(__real_38d1b717));
    auVar96 = vmovdqa64_avx512vl(
                                ___ymm_0000000a00000007000000040000000100000009000000060000000300000000
                                );
    auVar99 = vmovdqa64_avx512vl(
                                ___ymm_0000000600000003000000000000000d00000005000000020000000f0000000c
                                );
    auVar100 = vmovdqa64_avx512vl(
                                 ___ymm_0000000f0000000c000000090000000600000003000000000000000500000002
                                 );
    vmovdqa64_avx512vl(___ymm_00000054000000480000003c0000003000000024000000180000000c00000000);
    vmovdqa64_avx512vl(___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
    vmovdqa64_avx512vl(___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
    do {
      fVar68 = fStack_1a4;
      fVar67 = fStack_1a8;
      fVar66 = fStack_1ac;
      fVar65 = fStack_1b0;
      fVar64 = fStack_1b4;
      fVar63 = fStack_1b8;
      fVar62 = fStack_1bc;
      fVar61 = local_1c0;
      pauVar70 = param_2 + 3;
      auVar102 = vpaddd_avx512vl(auVar95,local_200);
      vpslld_avx512vl(auVar102,4);
      auVar102 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar103 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      auVar104 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      auVar105 = vpaddd_avx512vl(auVar95,local_1e0);
      auVar105 = vpslld_avx512vl(auVar105,4);
      vxorps_avx512vl(in_ZMM29._0_16_,in_ZMM29._0_16_);
      auVar106 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_5));
      vxorps_avx512vl(in_ZMM27._0_16_,in_ZMM27._0_16_);
      auVar107 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + param_3));
      in_ZMM27 = ZEXT3264(auVar107);
      auVar108 = vpbroadcastd_avx512vl();
      auVar108 = vpaddd_avx512vl(auVar108,auVar97);
      auVar123 = auVar105._0_16_ | auVar89;
      vxorps_avx512vl(in_ZMM28._0_16_,in_ZMM28._0_16_);
      auVar105 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + uVar82));
      in_ZMM28 = ZEXT3264(auVar105);
      lVar77 = (longlong)(int)local_1e0._12_4_;
      lVar78 = (longlong)(int)local_1e0._8_4_;
      lVar76 = (longlong)(int)local_1e0._4_4_;
      lVar72 = (longlong)(int)local_1e0._0_4_;
      vxorps_avx512vl(in_ZMM31._0_16_,in_ZMM31._0_16_);
      auVar109 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + unaff_R14));
      in_ZMM31 = ZEXT3264(auVar109);
      unaff_R14 = (longlong)(int)local_1e0._28_4_;
      lVar80 = (longlong)(int)local_1e0._24_4_;
      lVar71 = (longlong)(int)local_1e0._20_4_;
      lVar69 = (longlong)(int)local_1e0._16_4_;
      uVar82 = vpcmpgtd_avx512vl(auVar94,auVar108);
      bVar81 = (byte)uVar82;
      if (bVar81 != 0) {
        if (bVar81 == 0xff) {
          auVar108 = param_2[4];
          auVar101 = vpblendd_avx2(auVar108,*pauVar70,0x24);
          auVar110 = vpermt2d_avx512vl(*pauVar70,auVar96,auVar108);
          in_ZMM14 = ZEXT3264(auVar110);
          auVar111 = vpermt2d_avx512vl(auVar101,auVar100,param_2[5]);
          auVar108 = vpermt2d_avx512vl(param_2[5],auVar99,auVar108);
          auVar101._16_16_ = ZEXT116(0) * auVar110._16_16_ | ZEXT116(1) * auVar108._0_16_;
          auVar101._0_16_ = ZEXT116(0) * auVar108._0_16_ | ZEXT116(1) * auVar110._0_16_;
          auVar108 = vperm2i128_avx2(auVar110,auVar108,0x31);
        }
        else {
          auVar108 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar70 + (longlong)aiStack_198));
          auVar101._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar108._4_4_;
          auVar101._0_4_ = (uint)(bVar81 & 1) * auVar108._0_4_;
          auVar101._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar108._8_4_;
          auVar101._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar108._12_4_;
          auVar101._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar108._16_4_;
          auVar101._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar108._20_4_;
          auVar101._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar108._24_4_;
          auVar101._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar108._28_4_;
          auVar110 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar70 + lVar72));
          auVar108._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar110._4_4_;
          auVar108._0_4_ = (uint)(bVar81 & 1) * auVar110._0_4_;
          auVar108._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar110._8_4_;
          auVar108._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar110._12_4_;
          auVar108._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar110._16_4_;
          auVar108._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar110._20_4_;
          auVar108._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar110._24_4_;
          auVar108._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar110._28_4_;
          auVar110 = vpgatherdd_avx512vl(*(undefined4 *)(*pauVar70 + uVar74));
          auVar111._4_4_ = (uint)((byte)(uVar82 >> 1) & 1) * auVar110._4_4_;
          auVar111._0_4_ = (uint)(bVar81 & 1) * auVar110._0_4_;
          auVar111._8_4_ = (uint)((byte)(uVar82 >> 2) & 1) * auVar110._8_4_;
          auVar111._12_4_ = (uint)((byte)(uVar82 >> 3) & 1) * auVar110._12_4_;
          auVar111._16_4_ = (uint)((byte)(uVar82 >> 4) & 1) * auVar110._16_4_;
          auVar111._20_4_ = (uint)((byte)(uVar82 >> 5) & 1) * auVar110._20_4_;
          auVar111._24_4_ = (uint)((byte)(uVar82 >> 6) & 1) * auVar110._24_4_;
          auVar111._28_4_ = (uint)(byte)(uVar82 >> 7) * auVar110._28_4_;
        }
        local_200 = vmovdqu32_avx512vl(auVar101);
        local_1e0 = vmovdqu32_avx512vl(auVar108);
        local_1c0 = (float)((uint)(bVar81 & 1) * auVar111._0_4_ |
                           (uint)!(bool)(bVar81 & 1) * (int)local_1c0);
        bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
        fStack_1bc = (float)((uint)bVar3 * auVar111._4_4_ | (uint)!bVar3 * (int)fStack_1bc);
        bVar3 = (bool)((byte)(uVar82 >> 2) & 1);
        fStack_1b8 = (float)((uint)bVar3 * auVar111._8_4_ | (uint)!bVar3 * (int)fStack_1b8);
        bVar3 = (bool)((byte)(uVar82 >> 3) & 1);
        fStack_1b4 = (float)((uint)bVar3 * auVar111._12_4_ | (uint)!bVar3 * (int)fStack_1b4);
        bVar3 = (bool)((byte)(uVar82 >> 4) & 1);
        fStack_1b0 = (float)((uint)bVar3 * auVar111._16_4_ | (uint)!bVar3 * (int)fStack_1b0);
        bVar3 = (bool)((byte)(uVar82 >> 5) & 1);
        fStack_1ac = (float)((uint)bVar3 * auVar111._20_4_ | (uint)!bVar3 * (int)fStack_1ac);
        bVar3 = (bool)((byte)(uVar82 >> 6) & 1);
        fStack_1a8 = (float)((uint)bVar3 * auVar111._24_4_ | (uint)!bVar3 * (int)fStack_1a8);
        bVar3 = SUB81(uVar82 >> 7,0);
        fStack_1a4 = (float)((uint)bVar3 * auVar111._28_4_ | (uint)!bVar3 * (int)fStack_1a4);
      }
      uVar82 = (ulonglong)*(byte *)(param_5 + lVar72);
      auVar86 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar72)),(uint)*(byte *)(param_3 + lVar76),1
                           );
      auVar87 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + lVar72)),(uint)*(byte *)(param_5 + lVar76),1
                           );
      auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_3 + lVar78),2);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_5 + lVar78),2);
      auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_3 + lVar77),3);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_5 + lVar77),3);
      auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_3 + lVar69),4);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_5 + lVar69),4);
      auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_3 + lVar71),5);
      auVar87 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_5 + lVar71),5);
      auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_3 + lVar80),6);
      auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_3 + unaff_R14),7);
      auVar108 = vpmovzxbd_avx2(auVar86);
      auVar108 = vpslld_avx2(auVar108,2);
      vpmovzxdq_avx2(auVar108._16_16_);
      vpmovzxdq_avx2(auVar108._0_16_);
      auVar84 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + uVar82));
      auVar85 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + lVar77));
      auVar86 = vpinsrb_avx(auVar87,(uint)*(byte *)(param_5 + lVar80),6);
      auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_5 + unaff_R14),7);
      auVar120._16_16_ = auVar85;
      auVar120._0_16_ = auVar84;
      auVar108 = vpmovzxbd_avx2(auVar86);
      auVar108 = vpslld_avx2(auVar108,2);
      vpmovzxdq_avx2(auVar108._16_16_);
      vpmovzxdq_avx2(auVar108._0_16_);
      auVar86 = vgatherqps_avx512vl(*(undefined8 *)((longlong)param_6 + lVar76));
      auVar87 = vgatherqps_avx512vl(*(undefined8 *)((longlong)param_6 + lVar77));
      auVar102 = vsubps_avx512vl(auVar102,auVar106);
      auVar103 = vsubps_avx512vl(auVar103,auVar107);
      auVar104 = vsubps_avx512vl(auVar104,auVar105);
      auVar122._0_4_ =
           auVar104._0_4_ * auVar104._0_4_ +
           auVar102._0_4_ * auVar102._0_4_ + auVar103._0_4_ * auVar103._0_4_;
      auVar122._4_4_ =
           auVar104._4_4_ * auVar104._4_4_ +
           auVar102._4_4_ * auVar102._4_4_ + auVar103._4_4_ * auVar103._4_4_;
      auVar122._8_4_ =
           auVar104._8_4_ * auVar104._8_4_ +
           auVar102._8_4_ * auVar102._8_4_ + auVar103._8_4_ * auVar103._8_4_;
      auVar122._12_4_ =
           auVar104._12_4_ * auVar104._12_4_ +
           auVar102._12_4_ * auVar102._12_4_ + auVar103._12_4_ * auVar103._12_4_;
      auVar122._16_4_ =
           auVar104._16_4_ * auVar104._16_4_ +
           auVar102._16_4_ * auVar102._16_4_ + auVar103._16_4_ * auVar103._16_4_;
      auVar122._20_4_ =
           auVar104._20_4_ * auVar104._20_4_ +
           auVar102._20_4_ * auVar102._20_4_ + auVar103._20_4_ * auVar103._20_4_;
      auVar122._24_4_ =
           auVar104._24_4_ * auVar104._24_4_ +
           auVar102._24_4_ * auVar102._24_4_ + auVar103._24_4_ * auVar103._24_4_;
      auVar122._28_4_ =
           auVar104._28_4_ * auVar104._28_4_ +
           auVar102._28_4_ * auVar102._28_4_ + auVar103._28_4_ * auVar103._28_4_;
      auVar108 = vsqrtps_avx(auVar122);
      uVar56 = vcmpps_avx512vl(auVar108,auVar98,1);
      auVar102 = vdivps_avx(auVar102,auVar108);
      auVar103 = vdivps_avx(auVar103,auVar108);
      auVar104 = vdivps_avx(auVar104,auVar108);
      bVar81 = (byte)uVar56;
      auVar110._4_4_ = (uint)!(bool)((byte)(uVar56 >> 1) & 1) * auVar103._4_4_;
      auVar110._0_4_ = (uint)!(bool)(bVar81 & 1) * auVar103._0_4_;
      auVar110._8_4_ = (uint)!(bool)((byte)(uVar56 >> 2) & 1) * auVar103._8_4_;
      auVar110._12_4_ = (uint)!(bool)((byte)(uVar56 >> 3) & 1) * auVar103._12_4_;
      auVar110._16_4_ = (uint)!(bool)((byte)(uVar56 >> 4) & 1) * auVar103._16_4_;
      auVar110._20_4_ = (uint)!(bool)((byte)(uVar56 >> 5) & 1) * auVar103._20_4_;
      auVar110._24_4_ = (uint)!(bool)((byte)(uVar56 >> 6) & 1) * auVar103._24_4_;
      bVar3 = SUB81(uVar56 >> 7,0);
      auVar110._28_4_ =
           (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar103._28_4_
      ;
      auVar103._4_4_ = (uint)!(bool)((byte)(uVar56 >> 1) & 1) * auVar104._4_4_;
      auVar103._0_4_ = (uint)!(bool)(bVar81 & 1) * auVar104._0_4_;
      auVar103._8_4_ = (uint)!(bool)((byte)(uVar56 >> 2) & 1) * auVar104._8_4_;
      auVar103._12_4_ = (uint)!(bool)((byte)(uVar56 >> 3) & 1) * auVar104._12_4_;
      auVar103._16_4_ = (uint)!(bool)((byte)(uVar56 >> 4) & 1) * auVar104._16_4_;
      auVar103._20_4_ = (uint)!(bool)((byte)(uVar56 >> 5) & 1) * auVar104._20_4_;
      auVar103._24_4_ = (uint)!(bool)((byte)(uVar56 >> 6) & 1) * auVar104._24_4_;
      auVar103._28_4_ = (uint)!SUB81(uVar56 >> 7,0) * auVar104._28_4_;
      auVar121._0_4_ = -(fVar61 * auVar86._0_4_) + auVar108._0_4_;
      auVar121._4_4_ = -(fVar62 * auVar86._4_4_) + auVar108._4_4_;
      auVar121._8_4_ = -(fVar63 * auVar86._8_4_) + auVar108._8_4_;
      auVar121._12_4_ = -(fVar64 * auVar86._12_4_) + auVar108._12_4_;
      auVar121._16_4_ = -(fVar65 * auVar87._0_4_) + auVar108._16_4_;
      auVar121._20_4_ = -(fVar66 * auVar87._4_4_) + auVar108._20_4_;
      auVar121._24_4_ = -(fVar67 * auVar87._8_4_) + auVar108._24_4_;
      auVar121._28_4_ = -(fVar68 * auVar87._12_4_) + auVar108._28_4_;
      auVar119._0_4_ = auVar84._0_4_ * auVar121._0_4_;
      auVar119._4_4_ = auVar84._4_4_ * auVar121._4_4_;
      auVar119._8_4_ = auVar84._8_4_ * auVar121._8_4_;
      auVar119._12_4_ = auVar84._12_4_ * auVar121._12_4_;
      auVar119._16_4_ = auVar85._0_4_ * auVar121._16_4_;
      auVar119._20_4_ = auVar85._4_4_ * auVar121._20_4_;
      auVar119._24_4_ = auVar85._8_4_ * auVar121._24_4_;
      auVar119._28_4_ = auVar85._12_4_ * auVar121._28_4_;
      bVar3 = (bool)((byte)(uVar56 >> 1) & 1);
      bVar8 = (bool)((byte)(uVar56 >> 2) & 1);
      bVar18 = (bool)((byte)(uVar56 >> 3) & 1);
      bVar28 = (bool)((byte)(uVar56 >> 4) & 1);
      bVar35 = (bool)((byte)(uVar56 >> 5) & 1);
      bVar42 = (bool)((byte)(uVar56 >> 6) & 1);
      bVar49 = SUB81(uVar56 >> 7,0);
      uVar56 = vcmpps_avx512vl(auVar121,ZEXT1232(ZEXT812(0)),1);
      bVar2 = (byte)uVar56;
      auVar104._4_4_ =
           (uint)!(bool)((byte)(uVar56 >> 1) & 1) *
           ((uint)bVar3 * (int)auVar119._4_4_ |
           (uint)!bVar3 * (int)(auVar119._4_4_ * auVar102._4_4_));
      auVar104._0_4_ =
           (uint)!(bool)(bVar2 & 1) *
           ((uint)(bVar81 & 1) * (int)auVar119._0_4_ |
           (uint)!(bool)(bVar81 & 1) * (int)(auVar119._0_4_ * auVar102._0_4_));
      auVar104._8_4_ =
           (uint)!(bool)((byte)(uVar56 >> 2) & 1) *
           ((uint)bVar8 * (int)auVar119._8_4_ |
           (uint)!bVar8 * (int)(auVar119._8_4_ * auVar102._8_4_));
      auVar104._12_4_ =
           (uint)!(bool)((byte)(uVar56 >> 3) & 1) *
           ((uint)bVar18 * (int)auVar119._12_4_ |
           (uint)!bVar18 * (int)(auVar119._12_4_ * auVar102._12_4_));
      auVar104._16_4_ =
           (uint)!(bool)((byte)(uVar56 >> 4) & 1) *
           ((uint)bVar28 * (int)auVar119._16_4_ |
           (uint)!bVar28 * (int)(auVar119._16_4_ * auVar102._16_4_));
      auVar104._20_4_ =
           (uint)!(bool)((byte)(uVar56 >> 5) & 1) *
           ((uint)bVar35 * (int)auVar119._20_4_ |
           (uint)!bVar35 * (int)(auVar119._20_4_ * auVar102._20_4_));
      auVar104._24_4_ =
           (uint)!(bool)((byte)(uVar56 >> 6) & 1) *
           ((uint)bVar42 * (int)auVar119._24_4_ |
           (uint)!bVar42 * (int)(auVar119._24_4_ * auVar102._24_4_));
      auVar104._28_4_ =
           (uint)!SUB81(uVar56 >> 7,0) *
           ((uint)bVar49 * (int)auVar119._28_4_ |
           (uint)!bVar49 * (int)(auVar119._28_4_ * auVar102._28_4_));
      auVar102 = vaddps_avx512vl(auVar106,auVar104);
      in_ZMM29 = ZEXT3264(auVar102);
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar103,0xffff,auVar102);
      auVar102 = vmulps_avx512vl(auVar110,auVar119);
      auVar106._4_4_ = (uint)!(bool)((byte)(uVar56 >> 1) & 1) * auVar102._4_4_;
      auVar106._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar102._0_4_;
      auVar106._8_4_ = (uint)!(bool)((byte)(uVar56 >> 2) & 1) * auVar102._8_4_;
      auVar106._12_4_ = (uint)!(bool)((byte)(uVar56 >> 3) & 1) * auVar102._12_4_;
      auVar106._16_4_ = (uint)!(bool)((byte)(uVar56 >> 4) & 1) * auVar102._16_4_;
      auVar106._20_4_ = (uint)!(bool)((byte)(uVar56 >> 5) & 1) * auVar102._20_4_;
      auVar106._24_4_ = (uint)!(bool)((byte)(uVar56 >> 6) & 1) * auVar102._24_4_;
      auVar106._28_4_ = (uint)!SUB81(uVar56 >> 7,0) * auVar102._28_4_;
      auVar102 = vaddps_avx512vl(auVar107,auVar106);
      auVar87 = auVar102._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar110,0xffff,auVar102);
      auVar102 = vmulps_avx512vl(auVar103,auVar119);
      auVar107._4_4_ = (uint)!(bool)((byte)(uVar56 >> 1) & 1) * auVar102._4_4_;
      auVar107._0_4_ = (uint)!(bool)(bVar2 & 1) * auVar102._0_4_;
      auVar107._8_4_ = (uint)!(bool)((byte)(uVar56 >> 2) & 1) * auVar102._8_4_;
      auVar107._12_4_ = (uint)!(bool)((byte)(uVar56 >> 3) & 1) * auVar102._12_4_;
      auVar107._16_4_ = (uint)!(bool)((byte)(uVar56 >> 4) & 1) * auVar102._16_4_;
      auVar107._20_4_ = (uint)!(bool)((byte)(uVar56 >> 5) & 1) * auVar102._20_4_;
      auVar107._24_4_ = (uint)!(bool)((byte)(uVar56 >> 6) & 1) * auVar102._24_4_;
      auVar107._28_4_ = (uint)!SUB81(uVar56 >> 7,0) * auVar102._28_4_;
      auVar102 = vaddps_avx512vl(auVar105,auVar107);
      auVar86 = auVar102._0_16_;
      vscatterdps_avx512vl(ZEXT832(param_1) + auVar120,0xffff,auVar102);
      vscatterdps_avx512vl(ZEXT832(param_1) + in_ZMM14._0_32_,0xffff,auVar109);
      uVar73 = (int)uVar74 + 8;
      uVar74 = (ulonglong)uVar73;
      param_2 = pauVar70;
    } while ((int)uVar73 < (int)uVar75);
  }
  if ((int)uVar73 < (int)param_7) {
    auVar97 = vpbroadcastd_avx512vl();
    auVar98 = vpord_avx512vl(auVar97,
                             ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                            );
    uVar56 = vpcmpgtd_avx512vl(auVar94,auVar98);
    auVar102._4_4_ = fStack_1bc;
    auVar102._0_4_ = local_1c0;
    auVar102._8_4_ = fStack_1b8;
    auVar102._12_4_ = fStack_1b4;
    auVar102._16_4_ = fStack_1b0;
    auVar102._20_4_ = fStack_1ac;
    auVar102._24_4_ = fStack_1a8;
    auVar102._28_4_ = fStack_1a4;
    auVar98 = vmovdqa32_avx512vl(local_1e0);
    bVar81 = (byte)uVar56;
    lVar78 = (longlong)(int)((uint)(bVar81 & 1) * auVar98._0_4_);
    lVar77 = (longlong)(int)((uint)((byte)(uVar56 >> 1) & 1) * auVar98._4_4_);
    lVar72 = (longlong)(int)((uint)((byte)(uVar56 >> 2) & 1) * auVar98._8_4_);
    lVar79 = (longlong)(int)((uint)((byte)(uVar56 >> 3) & 1) * auVar98._12_4_);
    lVar80 = (longlong)(int)((uint)((byte)(uVar56 >> 4) & 1) * auVar98._16_4_);
    lVar76 = (longlong)(int)((uint)((byte)(uVar56 >> 5) & 1) * auVar98._20_4_);
    lVar69 = (longlong)(int)((uint)((byte)(uVar56 >> 6) & 1) * auVar98._24_4_);
    lVar71 = (longlong)(int)((uint)(byte)(uVar56 >> 7) * auVar98._28_4_);
    auVar89 = vpinsrb_avx(ZEXT116(*(byte *)(param_3 + lVar78)),(uint)*(byte *)(param_3 + lVar77),1);
    auVar89 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_3 + lVar72),2);
    auVar89 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_3 + lVar79),3);
    auVar89 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_3 + lVar80),4);
    auVar89 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_3 + lVar76),5);
    auVar89 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_3 + lVar69),6);
    auVar84 = vpinsrb_avx512bw(auVar89,(uint)*(byte *)(param_3 + lVar71),7);
    auVar89 = vpinsrb_avx(ZEXT116(*(byte *)(param_5 + lVar78)),(uint)*(byte *)(param_5 + lVar77),1);
    auVar89 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_5 + lVar72),2);
    auVar89 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_5 + lVar79),3);
    auVar96._0_4_ = auVar95._0_4_ + local_200._0_4_;
    auVar96._4_4_ = auVar95._4_4_ + local_200._4_4_;
    auVar96._8_4_ = auVar95._8_4_ + local_200._8_4_;
    auVar96._12_4_ = auVar95._12_4_ + local_200._12_4_;
    auVar96._16_4_ = auVar95._16_4_ + local_200._16_4_;
    auVar96._20_4_ = auVar95._20_4_ + local_200._20_4_;
    auVar96._24_4_ = auVar95._24_4_ + local_200._24_4_;
    auVar96._28_4_ = auVar95._28_4_ + local_200._28_4_;
    vpslld_avx2(auVar96,4);
    auVar98 = vbroadcastss_avx512vl(ZEXT416(__real_00000004));
    auVar96 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_198));
    auVar103 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    iVar118 = (uint)(bVar81 & 1) * auVar103._0_4_;
    iVar83 = (uint)((byte)(uVar56 >> 1) & 1) * auVar103._4_4_;
    auVar85._4_4_ = iVar83;
    auVar85._0_4_ = iVar118;
    iVar1 = (uint)((byte)(uVar56 >> 2) & 1) * auVar103._8_4_;
    auVar85._8_4_ = iVar1;
    iVar117 = (uint)((byte)(uVar56 >> 3) & 1) * auVar103._12_4_;
    auVar85._12_4_ = iVar117;
    auVar99._0_4_ = local_1e0._0_4_ + auVar95._0_4_;
    auVar99._4_4_ = local_1e0._4_4_ + auVar95._4_4_;
    auVar99._8_4_ = local_1e0._8_4_ + auVar95._8_4_;
    auVar99._12_4_ = local_1e0._12_4_ + auVar95._12_4_;
    auVar99._16_4_ = local_1e0._16_4_ + auVar95._16_4_;
    auVar99._20_4_ = local_1e0._20_4_ + auVar95._20_4_;
    auVar99._24_4_ = local_1e0._24_4_ + auVar95._24_4_;
    auVar99._28_4_ = local_1e0._28_4_ + auVar95._28_4_;
    auVar95 = vbroadcastss_avx512vl(ZEXT416(__real_00000008));
    auVar104 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar72));
    auVar108 = vpslld_avx2(auVar99,4);
    auVar88 = vxorps_avx512vl(auVar86,auVar86);
    auVar99 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + lVar72));
    bVar18 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar9 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar19 = (bool)((byte)(uVar56 >> 3) & 1);
    auVar86 = vpinsrb_avx(auVar89,(uint)*(byte *)(param_5 + lVar80),4);
    auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_5 + lVar76),5);
    auVar87 = vxorps_avx512vl(auVar87,auVar87);
    auVar106 = vgatherdps_avx512vl(*param_1);
    bVar28 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar10 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar20 = (bool)((byte)(uVar56 >> 3) & 1);
    auVar123 = vxorps_avx512vl(auVar123,auVar123);
    auVar107 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 * 2));
    bVar35 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar11 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar21 = (bool)((byte)(uVar56 >> 3) & 1);
    auVar86 = vpinsrb_avx(auVar86,(uint)*(byte *)(param_5 + lVar69),6);
    auVar86 = vpinsrb_avx512bw(auVar86,(uint)*(byte *)(param_5 + lVar71),7);
    auVar100._4_4_ = __real_0000000c;
    auVar100._0_4_ = __real_0000000c;
    auVar100._8_4_ = __real_0000000c;
    auVar100._12_4_ = __real_0000000c;
    auVar100._16_4_ = __real_0000000c;
    auVar100._20_4_ = __real_0000000c;
    auVar100._24_4_ = __real_0000000c;
    auVar100._28_4_ = __real_0000000c;
    auVar89 = vxorps_avx512vl(auVar98._0_16_,auVar98._0_16_);
    auVar105 = vgatherdps_avx512vl(*(undefined4 *)((longlong)param_1 + (longlong)aiStack_198));
    auVar112._0_4_ = (uint)(bVar81 & 1) * auVar105._0_4_ | (uint)!(bool)(bVar81 & 1) * auVar89._0_4_
    ;
    bVar3 = (bool)((byte)(uVar56 >> 1) & 1);
    auVar112._4_4_ = (uint)bVar3 * auVar105._4_4_ | (uint)!bVar3 * auVar89._4_4_;
    bVar3 = (bool)((byte)(uVar56 >> 2) & 1);
    auVar112._8_4_ = (uint)bVar3 * auVar105._8_4_ | (uint)!bVar3 * auVar89._8_4_;
    bVar3 = (bool)((byte)(uVar56 >> 3) & 1);
    auVar112._12_4_ = (uint)bVar3 * auVar105._12_4_ | (uint)!bVar3 * auVar89._12_4_;
    auVar112._16_4_ = (uint)((byte)(uVar56 >> 4) & 1) * auVar105._16_4_;
    auVar112._20_4_ = (uint)((byte)(uVar56 >> 5) & 1) * auVar105._20_4_;
    auVar112._24_4_ = (uint)((byte)(uVar56 >> 6) & 1) * auVar105._24_4_;
    auVar112._28_4_ = (uint)(byte)(uVar56 >> 7) * auVar105._28_4_;
    auVar89 = vxorps_avx512vl(auVar95._0_16_,auVar95._0_16_);
    bVar42 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar12 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar22 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar29 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar36 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar43 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar50 = SUB81(uVar56 >> 7,0);
    bVar49 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar13 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar23 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar30 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar37 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar44 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar51 = SUB81(uVar56 >> 7,0);
    bVar4 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar14 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar24 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar31 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar38 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar45 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar52 = SUB81(uVar56 >> 7,0);
    bVar5 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar15 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar25 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar32 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar39 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar46 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar53 = SUB81(uVar56 >> 7,0);
    bVar6 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar16 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar26 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar33 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar40 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar47 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar54 = SUB81(uVar56 >> 7,0);
    bVar7 = (bool)((byte)(uVar56 >> 1) & 1);
    bVar17 = (bool)((byte)(uVar56 >> 2) & 1);
    bVar27 = (bool)((byte)(uVar56 >> 3) & 1);
    bVar34 = (bool)((byte)(uVar56 >> 4) & 1);
    bVar41 = (bool)((byte)(uVar56 >> 5) & 1);
    bVar48 = (bool)((byte)(uVar56 >> 6) & 1);
    bVar55 = SUB81(uVar56 >> 7,0);
    auVar97 = vpaddd_avx512vl(auVar97,
                              ___ymm_0000000f0000000e0000000d0000000c0000000b0000000a0000000900000008
                             );
    vpcmpgtd_avx512vl(auVar94,auVar97);
    auVar94 = vpmovzxbd_avx512vl(auVar84);
    auVar97 = vpslld_avx2(auVar94,2);
    auVar84 = vextracti32x4_avx512vl(auVar97,1);
    auVar94 = vpmovzxdq_avx512vl(auVar84);
    vpmovzxdq_avx2(auVar97._0_16_);
    uVar82 = uVar56 >> 4 & 0xf;
    auVar84 = vgatherqps_avx512vl(*(undefined8 *)(param_4 * 2));
    auVar90 = vgatherqps_avx512vl(*(undefined8 *)(param_4 + lVar71));
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    auVar91._8_8_ = (ulonglong)bVar3 * auVar90._8_8_ | (ulonglong)!bVar3 * SUB168(ZEXT816(0),4);
    auVar91._0_8_ = (ulonglong)((byte)uVar82 & 1) * auVar90._0_8_;
    auVar90 = vxorps_avx512vl(auVar94._0_16_,auVar94._0_16_);
    auVar94 = vpmovzxbd_avx512vl(auVar86);
    auVar94 = vpslld_avx512vl(auVar94,2);
    auVar86 = vextracti32x4_avx512vl(auVar94,1);
    vpmovzxdq_avx512vl(auVar94._0_16_);
    auVar85 = vxorps_avx512vl(auVar85,auVar85);
    auVar92 = vgatherqps_avx512vl(*param_6);
    bVar8 = (bool)((byte)(uVar56 >> 1) & 1);
    vpmovzxdq_avx512vl(auVar86);
    auVar93 = vgatherqps_avx512vl(*param_6);
    bVar3 = (bool)((byte)uVar82 & 1);
    auVar86._0_8_ = (ulonglong)bVar3 * auVar93._0_8_ | (ulonglong)!bVar3 * auVar90._0_8_;
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    auVar86._8_8_ = (ulonglong)bVar3 * auVar93._8_8_ | (ulonglong)!bVar3 * auVar90._8_8_;
    auVar58._4_4_ =
         (uint)bVar42 * (uint)((byte)(uVar56 >> 1) & 1) * auVar96._4_4_ | (uint)!bVar42 * iStack_13c
    ;
    auVar58._0_4_ =
         (uint)(bVar81 & 1) * (uint)(bVar81 & 1) * auVar96._0_4_ |
         (uint)!(bool)(bVar81 & 1) * local_140;
    auVar58._8_4_ =
         (uint)bVar12 * (uint)((byte)(uVar56 >> 2) & 1) * auVar96._8_4_ |
         (uint)!bVar12 * aiStack_138[0];
    auVar58._12_4_ =
         (uint)bVar22 * (uint)((byte)(uVar56 >> 3) & 1) * auVar96._12_4_ |
         (uint)!bVar22 * aiStack_138[1];
    auVar58._16_4_ =
         (uint)bVar29 * (uint)((byte)(uVar56 >> 4) & 1) * auVar96._16_4_ |
         (uint)!bVar29 * aiStack_138[2];
    auVar58._20_4_ =
         (uint)bVar36 * (uint)((byte)(uVar56 >> 5) & 1) * auVar96._20_4_ |
         (uint)!bVar36 * aiStack_138[3];
    auVar58._24_4_ =
         (uint)bVar43 * (uint)((byte)(uVar56 >> 6) & 1) * auVar96._24_4_ |
         (uint)!bVar43 * iStack_128;
    auVar58._28_4_ =
         (uint)bVar50 * (uint)(byte)(uVar56 >> 7) * auVar96._28_4_ | (uint)!bVar50 * iStack_124;
    auVar59._4_4_ = (uint)bVar49 * iVar83 | (uint)!bVar49 * iStack_11c;
    auVar59._0_4_ = (uint)(bVar81 & 1) * iVar118 | (uint)!(bool)(bVar81 & 1) * local_120;
    auVar59._8_4_ = (uint)bVar13 * iVar1 | (uint)!bVar13 * iStack_118;
    auVar59._12_4_ = (uint)bVar23 * iVar117 | (uint)!bVar23 * iStack_114;
    auVar59._16_4_ =
         (uint)bVar30 * (uint)((byte)(uVar56 >> 4) & 1) * auVar103._16_4_ |
         (uint)!bVar30 * iStack_110;
    auVar59._20_4_ =
         (uint)bVar37 * (uint)((byte)(uVar56 >> 5) & 1) * auVar103._20_4_ |
         (uint)!bVar37 * iStack_10c;
    auVar59._24_4_ =
         (uint)bVar44 * (uint)((byte)(uVar56 >> 6) & 1) * auVar103._24_4_ |
         (uint)!bVar44 * iStack_108;
    auVar59._28_4_ =
         (uint)bVar51 * (uint)(byte)(uVar56 >> 7) * auVar103._28_4_ | (uint)!bVar51 * iStack_104;
    auVar60._4_4_ =
         (uint)bVar4 * (uint)((byte)(uVar56 >> 1) & 1) * auVar104._4_4_ | (uint)!bVar4 * iStack_fc;
    auVar60._0_4_ =
         (uint)(bVar81 & 1) * (uint)(bVar81 & 1) * auVar104._0_4_ |
         (uint)!(bool)(bVar81 & 1) * local_100;
    auVar60._8_4_ =
         (uint)bVar14 * (uint)((byte)(uVar56 >> 2) & 1) * auVar104._8_4_ | (uint)!bVar14 * iStack_f8
    ;
    auVar60._12_4_ =
         (uint)bVar24 * (uint)((byte)(uVar56 >> 3) & 1) * auVar104._12_4_ |
         (uint)!bVar24 * iStack_f4;
    auVar60._16_4_ =
         (uint)bVar31 * (uint)((byte)(uVar56 >> 4) & 1) * auVar104._16_4_ |
         (uint)!bVar31 * iStack_f0;
    auVar60._20_4_ =
         (uint)bVar38 * (uint)((byte)(uVar56 >> 5) & 1) * auVar104._20_4_ |
         (uint)!bVar38 * iStack_ec;
    auVar60._24_4_ =
         (uint)bVar45 * (uint)((byte)(uVar56 >> 6) & 1) * auVar104._24_4_ |
         (uint)!bVar45 * iStack_e8;
    auVar60._28_4_ =
         (uint)bVar52 * (uint)(byte)(uVar56 >> 7) * auVar104._28_4_ | (uint)!bVar52 * iStack_e4;
    auVar105._4_4_ =
         (uint)bVar5 * ((uint)bVar18 * auVar99._4_4_ | (uint)!bVar18 * auVar88._4_4_) |
         (uint)!bVar5 * iStack_19c;
    auVar105._0_4_ =
         (uint)(bVar81 & 1) *
         ((uint)(bVar81 & 1) * auVar99._0_4_ | (uint)!(bool)(bVar81 & 1) * auVar88._0_4_) |
         (uint)!(bool)(bVar81 & 1) * local_1a0;
    auVar105._8_4_ =
         (uint)bVar15 * ((uint)bVar9 * auVar99._8_4_ | (uint)!bVar9 * auVar88._8_4_) |
         (uint)!bVar15 * aiStack_198[0];
    auVar105._12_4_ =
         (uint)bVar25 * ((uint)bVar19 * auVar99._12_4_ | (uint)!bVar19 * auVar88._12_4_) |
         (uint)!bVar25 * aiStack_198[1];
    auVar105._16_4_ =
         (uint)bVar32 * (uint)((byte)(uVar56 >> 4) & 1) * auVar99._16_4_ |
         (uint)!bVar32 * aiStack_198[2];
    auVar105._20_4_ =
         (uint)bVar39 * (uint)((byte)(uVar56 >> 5) & 1) * auVar99._20_4_ |
         (uint)!bVar39 * aiStack_198[3];
    auVar105._24_4_ =
         (uint)bVar46 * (uint)((byte)(uVar56 >> 6) & 1) * auVar99._24_4_ |
         (uint)!bVar46 * iStack_188;
    auVar105._28_4_ =
         (uint)bVar53 * (uint)(byte)(uVar56 >> 7) * auVar99._28_4_ | (uint)!bVar53 * iStack_184;
    auVar109._4_4_ =
         (uint)bVar6 * ((uint)bVar28 * auVar106._4_4_ | (uint)!bVar28 * auVar87._4_4_) |
         (uint)!bVar6 * iStack_17c;
    auVar109._0_4_ =
         (uint)(bVar81 & 1) *
         ((uint)(bVar81 & 1) * auVar106._0_4_ | (uint)!(bool)(bVar81 & 1) * auVar87._0_4_) |
         (uint)!(bool)(bVar81 & 1) * local_180;
    auVar109._8_4_ =
         (uint)bVar16 * ((uint)bVar10 * auVar106._8_4_ | (uint)!bVar10 * auVar87._8_4_) |
         (uint)!bVar16 * iStack_178;
    auVar109._12_4_ =
         (uint)bVar26 * ((uint)bVar20 * auVar106._12_4_ | (uint)!bVar20 * auVar87._12_4_) |
         (uint)!bVar26 * iStack_174;
    auVar109._16_4_ =
         (uint)bVar33 * (uint)((byte)(uVar56 >> 4) & 1) * auVar106._16_4_ |
         (uint)!bVar33 * iStack_170;
    auVar109._20_4_ =
         (uint)bVar40 * (uint)((byte)(uVar56 >> 5) & 1) * auVar106._20_4_ |
         (uint)!bVar40 * iStack_16c;
    auVar109._24_4_ =
         (uint)bVar47 * (uint)((byte)(uVar56 >> 6) & 1) * auVar106._24_4_ |
         (uint)!bVar47 * iStack_168;
    auVar109._28_4_ =
         (uint)bVar54 * (uint)(byte)(uVar56 >> 7) * auVar106._28_4_ | (uint)!bVar54 * iStack_164;
    auVar97 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)((byte)(uVar56 >> 1) & 1) * auVar84._8_8_,
                                           (ulonglong)(bVar81 & 1) * auVar84._0_8_)),auVar91,1);
    auVar57._4_4_ =
         (uint)bVar7 * ((uint)bVar35 * auVar107._4_4_ | (uint)!bVar35 * auVar123._4_4_) |
         (uint)!bVar7 * iStack_15c;
    auVar57._0_4_ =
         (uint)(bVar81 & 1) *
         ((uint)(bVar81 & 1) * auVar107._0_4_ | (uint)!(bool)(bVar81 & 1) * auVar123._0_4_) |
         (uint)!(bool)(bVar81 & 1) * local_160;
    auVar57._8_4_ =
         (uint)bVar17 * ((uint)bVar11 * auVar107._8_4_ | (uint)!bVar11 * auVar123._8_4_) |
         (uint)!bVar17 * iStack_158;
    auVar57._12_4_ =
         (uint)bVar27 * ((uint)bVar21 * auVar107._12_4_ | (uint)!bVar21 * auVar123._12_4_) |
         (uint)!bVar27 * iStack_154;
    auVar57._16_4_ =
         (uint)bVar34 * (uint)((byte)(uVar56 >> 4) & 1) * auVar107._16_4_ |
         (uint)!bVar34 * iStack_150;
    auVar57._20_4_ =
         (uint)bVar41 * (uint)((byte)(uVar56 >> 5) & 1) * auVar107._20_4_ |
         (uint)!bVar41 * iStack_14c;
    auVar57._24_4_ =
         (uint)bVar48 * (uint)((byte)(uVar56 >> 6) & 1) * auVar107._24_4_ |
         (uint)!bVar48 * iStack_148;
    auVar57._28_4_ =
         (uint)bVar55 * (uint)(byte)(uVar56 >> 7) * auVar107._28_4_ | (uint)!bVar55 * iStack_144;
    auVar96 = vsubps_avx512vl(auVar58,auVar105);
    auVar99 = vsubps_avx512vl(auVar59,auVar109);
    auVar103 = vsubps_avx512vl(auVar60,auVar57);
    auVar94 = vmulps_avx512vl(auVar99,auVar99);
    auVar94 = vfmadd231ps_avx512vl(auVar94,auVar96,auVar96);
    auVar94 = vfmadd231ps_avx512vl(auVar94,auVar103,auVar103);
    auVar104 = vsqrtps_avx512vl(auVar94);
    auVar94._4_4_ = __real_38d1b717;
    auVar94._0_4_ = __real_38d1b717;
    auVar94._8_4_ = __real_38d1b717;
    auVar94._12_4_ = __real_38d1b717;
    auVar94._16_4_ = __real_38d1b717;
    auVar94._20_4_ = __real_38d1b717;
    auVar94._24_4_ = __real_38d1b717;
    auVar94._28_4_ = __real_38d1b717;
    uVar82 = vcmpps_avx512vl(auVar104,auVar94,1);
    auVar94 = vinsertf32x4_avx512vl
                        (ZEXT1632(CONCAT88((ulonglong)bVar8 * auVar92._8_8_ |
                                           (ulonglong)!bVar8 * auVar85._8_8_,
                                           (ulonglong)(bVar81 & 1) * auVar92._0_8_ |
                                           (ulonglong)!(bool)(bVar81 & 1) * auVar85._0_8_)),auVar86,
                         1);
    auVar96 = vdivps_avx512vl(auVar96,auVar104);
    auVar99 = vdivps_avx512vl(auVar99,auVar104);
    auVar94 = vfnmadd213ps_avx512vl(auVar94,auVar102,auVar104);
    auVar97 = vmulps_avx512vl(auVar97,auVar94);
    auVar96 = vmulps_avx512vl(auVar97,auVar96);
    bVar81 = (byte)uVar82;
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    bVar18 = (bool)((byte)(uVar82 >> 2) & 1);
    bVar28 = (bool)((byte)(uVar82 >> 3) & 1);
    bVar35 = (bool)((byte)(uVar82 >> 4) & 1);
    bVar42 = (bool)((byte)(uVar82 >> 5) & 1);
    bVar49 = (bool)((byte)(uVar82 >> 6) & 1);
    bVar4 = SUB81(uVar82 >> 7,0);
    uVar74 = vcmpps_avx512vl(auVar94,ZEXT1632(auVar89),1);
    bVar2 = (byte)uVar74;
    iVar83 = auVar89._0_4_;
    auVar113._0_4_ =
         (uint)(bVar2 & 1) * iVar83 |
         (uint)!(bool)(bVar2 & 1) *
         ((uint)(bVar81 & 1) * (int)auVar97._0_4_ | (uint)!(bool)(bVar81 & 1) * auVar96._0_4_);
    bVar8 = (bool)((byte)(uVar74 >> 1) & 1);
    iVar117 = auVar89._4_4_;
    auVar113._4_4_ =
         (uint)bVar8 * iVar117 |
         (uint)!bVar8 * ((uint)bVar3 * (int)auVar97._4_4_ | (uint)!bVar3 * auVar96._4_4_);
    bVar3 = (bool)((byte)(uVar74 >> 2) & 1);
    iVar118 = auVar89._8_4_;
    iVar1 = auVar89._12_4_;
    auVar113._8_4_ =
         (uint)bVar3 * iVar118 |
         (uint)!bVar3 * ((uint)bVar18 * (int)auVar97._8_4_ | (uint)!bVar18 * auVar96._8_4_);
    bVar3 = (bool)((byte)(uVar74 >> 3) & 1);
    auVar113._12_4_ =
         (uint)bVar3 * iVar1 |
         (uint)!bVar3 * ((uint)bVar28 * (int)auVar97._12_4_ | (uint)!bVar28 * auVar96._12_4_);
    auVar113._16_4_ =
         (uint)!(bool)((byte)(uVar74 >> 4) & 1) *
         ((uint)bVar35 * (int)auVar97._16_4_ | (uint)!bVar35 * auVar96._16_4_);
    auVar113._20_4_ =
         (uint)!(bool)((byte)(uVar74 >> 5) & 1) *
         ((uint)bVar42 * (int)auVar97._20_4_ | (uint)!bVar42 * auVar96._20_4_);
    auVar113._24_4_ =
         (uint)!(bool)((byte)(uVar74 >> 6) & 1) *
         ((uint)bVar49 * (int)auVar97._24_4_ | (uint)!bVar49 * auVar96._24_4_);
    auVar113._28_4_ =
         (uint)!SUB81(uVar74 >> 7,0) *
         ((uint)bVar4 * (int)auVar97._28_4_ | (uint)!bVar4 * auVar96._28_4_);
    auVar94 = vaddps_avx512vl(auVar105,auVar113);
    vscatterdps_avx512vl(ZEXT832(param_1) + auVar108,uVar56,auVar94);
    auVar114._0_4_ = (uint)(bVar81 & 1) * iVar83 | (uint)!(bool)(bVar81 & 1) * auVar99._0_4_;
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    auVar114._4_4_ = (uint)bVar3 * iVar117 | (uint)!bVar3 * auVar99._4_4_;
    bVar3 = (bool)((byte)(uVar82 >> 2) & 1);
    auVar114._8_4_ = (uint)bVar3 * iVar118 | (uint)!bVar3 * auVar99._8_4_;
    bVar3 = (bool)((byte)(uVar82 >> 3) & 1);
    auVar114._12_4_ = (uint)bVar3 * iVar1 | (uint)!bVar3 * auVar99._12_4_;
    auVar114._16_4_ = (uint)!(bool)((byte)(uVar82 >> 4) & 1) * auVar99._16_4_;
    auVar114._20_4_ = (uint)!(bool)((byte)(uVar82 >> 5) & 1) * auVar99._20_4_;
    auVar114._24_4_ = (uint)!(bool)((byte)(uVar82 >> 6) & 1) * auVar99._24_4_;
    bVar3 = SUB81(uVar82 >> 7,0);
    auVar114._28_4_ =
         (uint)bVar3 * SUB124(SUB1612((undefined1  [16])0x0,4),8) | (uint)!bVar3 * auVar99._28_4_;
    auVar94 = vmulps_avx512vl(auVar114,auVar97);
    auVar115._0_4_ = (uint)(bVar2 & 1) * iVar83 | (uint)!(bool)(bVar2 & 1) * auVar94._0_4_;
    bVar3 = (bool)((byte)(uVar74 >> 1) & 1);
    auVar115._4_4_ = (uint)bVar3 * iVar117 | (uint)!bVar3 * auVar94._4_4_;
    bVar3 = (bool)((byte)(uVar74 >> 2) & 1);
    auVar115._8_4_ = (uint)bVar3 * iVar118 | (uint)!bVar3 * auVar94._8_4_;
    bVar3 = (bool)((byte)(uVar74 >> 3) & 1);
    auVar115._12_4_ = (uint)bVar3 * iVar1 | (uint)!bVar3 * auVar94._12_4_;
    auVar115._16_4_ = (uint)!(bool)((byte)(uVar74 >> 4) & 1) * auVar94._16_4_;
    auVar115._20_4_ = (uint)!(bool)((byte)(uVar74 >> 5) & 1) * auVar94._20_4_;
    auVar115._24_4_ = (uint)!(bool)((byte)(uVar74 >> 6) & 1) * auVar94._24_4_;
    auVar115._28_4_ = (uint)!SUB81(uVar74 >> 7,0) * auVar94._28_4_;
    auVar94 = vaddps_avx512vl(auVar109,auVar115);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar98),uVar56,auVar94);
    auVar94 = vdivps_avx512vl(auVar103,auVar104);
    bVar3 = (bool)((byte)(uVar82 >> 1) & 1);
    bVar18 = (bool)((byte)(uVar82 >> 2) & 1);
    bVar28 = (bool)((byte)(uVar82 >> 3) & 1);
    auVar116._0_4_ =
         (uint)(bVar2 & 1) * iVar83 |
         (uint)!(bool)(bVar2 & 1) *
         (int)((float)((uint)(bVar81 & 1) * iVar83 | (uint)!(bool)(bVar81 & 1) * auVar94._0_4_) *
              auVar97._0_4_);
    bVar8 = (bool)((byte)(uVar74 >> 1) & 1);
    auVar116._4_4_ =
         (uint)bVar8 * iVar117 |
         (uint)!bVar8 *
         (int)((float)((uint)bVar3 * iVar117 | (uint)!bVar3 * auVar94._4_4_) * auVar97._4_4_);
    bVar3 = (bool)((byte)(uVar74 >> 2) & 1);
    auVar116._8_4_ =
         (uint)bVar3 * iVar118 |
         (uint)!bVar3 *
         (int)((float)((uint)bVar18 * iVar118 | (uint)!bVar18 * auVar94._8_4_) * auVar97._8_4_);
    bVar3 = (bool)((byte)(uVar74 >> 3) & 1);
    auVar116._12_4_ =
         (uint)bVar3 * iVar1 |
         (uint)!bVar3 *
         (int)((float)((uint)bVar28 * iVar1 | (uint)!bVar28 * auVar94._12_4_) * auVar97._12_4_);
    auVar116._16_4_ =
         (uint)!(bool)((byte)(uVar74 >> 4) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar82 >> 4) & 1) * auVar94._16_4_) * auVar97._16_4_);
    auVar116._20_4_ =
         (uint)!(bool)((byte)(uVar74 >> 5) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar82 >> 5) & 1) * auVar94._20_4_) * auVar97._20_4_);
    auVar116._24_4_ =
         (uint)!(bool)((byte)(uVar74 >> 6) & 1) *
         (int)((float)((uint)!(bool)((byte)(uVar82 >> 6) & 1) * auVar94._24_4_) * auVar97._24_4_);
    auVar116._28_4_ =
         (uint)!SUB81(uVar74 >> 7,0) *
         (int)((float)((uint)!SUB81(uVar82 >> 7,0) * auVar94._28_4_) * auVar97._28_4_);
    auVar94 = vaddps_avx512vl(auVar57,auVar116);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar95),uVar56,auVar94);
    vscatterdps_avx512vl(ZEXT832(param_1) + (auVar108 | auVar100),uVar56,auVar112);
  }
  return;
}

