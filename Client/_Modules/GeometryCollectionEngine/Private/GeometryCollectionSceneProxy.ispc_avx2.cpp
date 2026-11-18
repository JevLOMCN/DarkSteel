// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// SetDynamicData_RenderThread___un_3C_s_5B_unFVector3f_5D__3E_CunuCunuun_3C_CunS_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E__avx2 @ 140a93fb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetDynamicData_RenderThread___un_3C_s_5B_unFVector3f_5D__3E_CunuCunuun_3C_CunS_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E__avx2
               (longlong param_1,uint param_2,undefined8 param_3,longlong param_4,longlong param_5,
               longlong param_6)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [32];
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar28 [32];
  float fVar35;
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  
  auVar22 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
  uVar16 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar16 = param_2;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar17 = 0;
    uVar14 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar17 = 0;
    auVar55._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar55._0_16_ = ___xmm_00000006000000050000000000000007;
    do {
      auVar26 = *(undefined1 (*) [32])(param_6 + uVar17 * 0xc);
      auVar24 = *(undefined1 (*) [32])(param_6 + 0x20 + uVar17 * 0xc);
      auVar21 = *(undefined1 (*) [32])(param_6 + 0x40 + uVar17 * 0xc);
      auVar40 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar24);
      auVar41 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar26);
      auVar40 = vblendps_avx(auVar41,auVar40,0x88);
      auVar41 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar24);
      auVar37 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar21);
      auVar41 = vblendps_avx(auVar37,auVar41,0x13);
      auVar37 = vperm2f128_avx(auVar40,auVar41,0x31);
      auVar26 = vblendps_avx(auVar24,auVar26,0x24);
      auVar26 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar26);
      auVar24._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar24._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar24 = vpermps_avx2(auVar24,auVar21);
      auVar26 = vblendps_avx(auVar26,auVar24,0xe0);
      local_1c0 = vpmovzxwd_avx2(*(undefined1 (*) [16])(param_4 + uVar17 * 2));
      uVar14 = 0xff;
      do {
        uVar20 = 0;
        for (uVar19 = uVar14; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
          uVar20 = uVar20 + 1;
        }
        iVar15 = *(int *)(local_1c0 + (ulonglong)(uVar20 & 7) * 4);
        auVar21._4_4_ = iVar15;
        auVar21._0_4_ = iVar15;
        auVar21._8_4_ = iVar15;
        auVar21._12_4_ = iVar15;
        auVar21._16_4_ = iVar15;
        auVar21._20_4_ = iVar15;
        auVar21._24_4_ = iVar15;
        auVar21._28_4_ = iVar15;
        auVar24 = vpcmpeqd_avx2(local_1c0,auVar21);
        uVar20 = vmovmskps_avx(auVar24);
        uVar19 = (ulonglong)(uint)(iVar15 << 6);
        uVar14 = ~(ulonglong)uVar20 & uVar14;
        fVar2 = *(float *)(param_5 + uVar19);
        fVar3 = *(float *)(param_5 + 4 + uVar19);
        fVar4 = *(float *)(param_5 + 8 + uVar19);
        fVar5 = *(float *)(param_5 + 0x10 + uVar19);
        fVar27 = auVar37._0_4_;
        fVar29 = auVar37._4_4_;
        fVar30 = auVar37._8_4_;
        fVar31 = auVar37._12_4_;
        fVar32 = auVar37._16_4_;
        fVar33 = auVar37._20_4_;
        fVar34 = auVar37._24_4_;
        fVar35 = auVar37._28_4_;
        fVar6 = *(float *)(param_5 + 0x14 + uVar19);
        fVar7 = *(float *)(param_5 + 0x18 + uVar19);
        fVar8 = *(float *)(param_5 + 0x20 + uVar19);
        fVar9 = *(float *)(param_5 + 0x24 + uVar19);
        fVar10 = *(float *)(param_5 + 0x28 + uVar19);
        fVar56 = auVar40._0_4_;
        fVar57 = auVar40._4_4_;
        fVar58 = auVar40._8_4_;
        fVar59 = auVar40._12_4_;
        fVar60 = auVar41._0_4_;
        fVar61 = auVar41._4_4_;
        fVar62 = auVar41._8_4_;
        fVar63 = auVar41._12_4_;
        fVar11 = *(float *)(param_5 + 0x30 + uVar19);
        fVar45 = auVar26._0_4_;
        fVar46 = auVar26._4_4_;
        fVar47 = auVar26._8_4_;
        fVar48 = auVar26._12_4_;
        fVar49 = auVar26._16_4_;
        fVar50 = auVar26._20_4_;
        fVar51 = auVar26._24_4_;
        fVar52 = auVar26._28_4_;
        auVar25._0_4_ = fVar56 * fVar2 + fVar27 * fVar5 + fVar45 * fVar8 + fVar11;
        auVar25._4_4_ = fVar57 * fVar2 + fVar29 * fVar5 + fVar46 * fVar8 + fVar11;
        auVar25._8_4_ = fVar58 * fVar2 + fVar30 * fVar5 + fVar47 * fVar8 + fVar11;
        auVar25._12_4_ = fVar59 * fVar2 + fVar31 * fVar5 + fVar48 * fVar8 + fVar11;
        auVar25._16_4_ = fVar60 * fVar2 + fVar32 * fVar5 + fVar49 * fVar8 + fVar11;
        auVar25._20_4_ = fVar61 * fVar2 + fVar33 * fVar5 + fVar50 * fVar8 + fVar11;
        auVar25._24_4_ = fVar62 * fVar2 + fVar34 * fVar5 + fVar51 * fVar8 + fVar11;
        auVar25._28_4_ = fVar63 * fVar2 + fVar35 * fVar5 + fVar52 * fVar8 + fVar11;
        fVar2 = *(float *)(param_5 + 0x34 + uVar19);
        auVar28._0_4_ = fVar56 * fVar3 + fVar27 * fVar6 + fVar45 * fVar9 + fVar2;
        auVar28._4_4_ = fVar57 * fVar3 + fVar29 * fVar6 + fVar46 * fVar9 + fVar2;
        auVar28._8_4_ = fVar58 * fVar3 + fVar30 * fVar6 + fVar47 * fVar9 + fVar2;
        auVar28._12_4_ = fVar59 * fVar3 + fVar31 * fVar6 + fVar48 * fVar9 + fVar2;
        auVar28._16_4_ = fVar60 * fVar3 + fVar32 * fVar6 + fVar49 * fVar9 + fVar2;
        auVar28._20_4_ = fVar61 * fVar3 + fVar33 * fVar6 + fVar50 * fVar9 + fVar2;
        auVar28._24_4_ = fVar62 * fVar3 + fVar34 * fVar6 + fVar51 * fVar9 + fVar2;
        auVar28._28_4_ = fVar63 * fVar3 + fVar35 * fVar6 + fVar52 * fVar9 + fVar2;
        fVar2 = *(float *)(param_5 + 0x38 + uVar19);
        auVar36._0_4_ = fVar56 * fVar4 + fVar27 * fVar7 + fVar45 * fVar10 + fVar2;
        auVar36._4_4_ = fVar57 * fVar4 + fVar29 * fVar7 + fVar46 * fVar10 + fVar2;
        auVar36._8_4_ = fVar58 * fVar4 + fVar30 * fVar7 + fVar47 * fVar10 + fVar2;
        auVar36._12_4_ = fVar59 * fVar4 + fVar31 * fVar7 + fVar48 * fVar10 + fVar2;
        auVar36._16_4_ = fVar60 * fVar4 + fVar32 * fVar7 + fVar49 * fVar10 + fVar2;
        auVar36._20_4_ = fVar61 * fVar4 + fVar33 * fVar7 + fVar50 * fVar10 + fVar2;
        auVar36._24_4_ = fVar62 * fVar4 + fVar34 * fVar7 + fVar51 * fVar10 + fVar2;
        auVar36._28_4_ = fVar63 * fVar4 + fVar35 * fVar7 + fVar52 * fVar10 + fVar2;
        local_140 = vmaskmovps_avx(auVar24,auVar25);
        local_120 = vmaskmovps_avx(auVar24,auVar28);
        local_100 = vmaskmovps_avx(auVar24,auVar36);
      } while (uVar14 != 0);
      auVar26 = vperm2f128_avx(local_140,local_120,0x20);
      auVar26 = vshufpd_avx(local_140,auVar26,2);
      auVar24 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar26);
      auVar21 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,local_100);
      auVar26 = vpermpd_avx2(local_120,0xe9);
      auVar26 = vblendps_avx(auVar21,auVar26,7);
      auVar40._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar40._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar21 = vpermps_avx2(auVar40,auVar26);
      auVar24 = vblendps_avx(auVar24,auVar21,0xa4);
      auVar41._8_8_ = local_140._24_8_;
      auVar41._0_8_ = local_140._24_8_;
      auVar41._16_8_ = local_140._24_8_;
      auVar41._24_8_ = local_140._24_8_;
      *(undefined1 (*) [32])(param_1 + uVar17 * 0xc) = auVar24;
      auVar24 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar26);
      auVar26 = vshufpd_avx(local_140,local_140,1);
      auVar26 = vblendps_avx(auVar24,auVar26,0x92);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar17 * 0xc) = auVar26;
      auVar26 = vpermps_avx2(auVar55,local_120);
      auVar26 = vblendpd_avx(auVar26,auVar41,1);
      auVar26 = vblendps_avx(auVar26,local_100,0xe0);
      auVar26 = vpermps_avx2(auVar22,auVar26);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar17 * 0xc) = auVar26;
      uVar17 = uVar17 + 8;
    } while (uVar17 < (uVar16 & 0xfffffff8));
    uVar14 = uVar17 & 0xffffffff;
    if ((int)param_2 <= (int)uVar17) {
      return;
    }
  }
  iVar15 = (int)uVar17;
  auVar22._4_4_ = iVar15;
  auVar22._0_4_ = iVar15;
  auVar22._8_4_ = iVar15;
  auVar22._12_4_ = iVar15;
  auVar22._16_4_ = iVar15;
  auVar22._20_4_ = iVar15;
  auVar22._24_4_ = iVar15;
  auVar22._28_4_ = iVar15;
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_2;
  auVar26._0_4_ = param_2;
  auVar26._8_4_ = param_2;
  auVar26._12_4_ = param_2;
  auVar26._16_4_ = param_2;
  auVar26._20_4_ = param_2;
  auVar26._24_4_ = param_2;
  auVar26._28_4_ = param_2;
  auVar21 = vpcmpgtd_avx2(auVar26,auVar22);
  lVar12 = uVar14 * 0xc;
  auVar22 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar12);
  auVar55 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar12);
  auVar39 = auVar55._0_16_;
  auVar26 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                         auVar22);
  auVar24 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                         *(undefined1 (*) [32])(param_6 + lVar12));
  auVar26 = vblendps_avx(auVar24,auVar26,0x88);
  auVar24 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                         auVar22);
  auVar40 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                         auVar55);
  auVar24 = vblendps_avx(auVar40,auVar24,0x13);
  auVar22 = vblendps_avx(auVar22,*(undefined1 (*) [32])(param_6 + lVar12),0x24);
  auVar22 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                         auVar22);
  auVar37._16_16_ = ___xmm_00000007000000040000000100000000;
  auVar37._0_16_ = ___xmm_00000007000000040000000100000000;
  auVar55 = vpermps_avx2(auVar37,auVar55);
  uVar16 = vmovmskps_avx(auVar21);
  if ((~(byte)uVar16 & 0x81) == 0) {
    auVar39 = *(undefined1 (*) [16])(param_4 + iVar15 * 2);
  }
  else {
    puVar18 = (undefined2 *)(param_4 + iVar15 * 2);
    if ((uVar16 & 1) != 0) {
      uVar1 = *puVar18;
      auVar39._2_2_ = uVar1;
      auVar39._0_2_ = uVar1;
      auVar39._4_2_ = uVar1;
      auVar39._6_2_ = uVar1;
      auVar39._8_2_ = uVar1;
      auVar39._10_2_ = uVar1;
      auVar39._12_2_ = uVar1;
      auVar39._14_2_ = uVar1;
    }
    if ((uVar16 & 2) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[1],1);
    }
    if ((uVar16 & 4) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[2],2);
    }
    if ((uVar16 & 8) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[3],3);
    }
    if ((uVar16 & 0x10) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[4],4);
    }
    if ((uVar16 & 0x20) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[5],5);
    }
    if ((uVar16 & 0x40) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[6],6);
    }
    if ((uVar16 & 0x80) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[7],7);
    }
  }
  pauVar13 = (undefined1 (*) [32])(param_1 + lVar12);
  auVar40 = vperm2f128_avx(auVar26,auVar24,0x31);
  auVar22 = vblendps_avx(auVar22,auVar55,0xe0);
  local_1e0 = vpmovzxwd_avx2(auVar39);
  uVar17 = (ulonglong)(uVar16 & 0xff);
  do {
    uVar16 = 0;
    for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
      uVar16 = uVar16 + 1;
    }
    iVar15 = *(int *)(local_1e0 + (ulonglong)(uVar16 & 7) * 4);
    auVar38._4_4_ = iVar15;
    auVar38._0_4_ = iVar15;
    auVar38._8_4_ = iVar15;
    auVar38._12_4_ = iVar15;
    auVar38._16_4_ = iVar15;
    auVar38._20_4_ = iVar15;
    auVar38._24_4_ = iVar15;
    auVar38._28_4_ = iVar15;
    auVar55 = vpcmpeqd_avx2(auVar38,local_1e0);
    auVar55 = vpand_avx2(auVar55,auVar21);
    uVar16 = vmovmskps_avx(auVar55);
    uVar14 = (ulonglong)(uint)(iVar15 << 6);
    uVar17 = ~(ulonglong)uVar16 & uVar17;
    fVar2 = *(float *)(param_5 + uVar14);
    fVar3 = *(float *)(param_5 + 4 + uVar14);
    fVar4 = *(float *)(param_5 + 8 + uVar14);
    fVar5 = *(float *)(param_5 + 0x10 + uVar14);
    fVar56 = auVar40._0_4_;
    fVar57 = auVar40._4_4_;
    fVar58 = auVar40._8_4_;
    fVar59 = auVar40._12_4_;
    fVar60 = auVar40._16_4_;
    fVar61 = auVar40._20_4_;
    fVar62 = auVar40._24_4_;
    fVar63 = auVar40._28_4_;
    fVar6 = *(float *)(param_5 + 0x14 + uVar14);
    fVar7 = *(float *)(param_5 + 0x18 + uVar14);
    fVar8 = *(float *)(param_5 + 0x20 + uVar14);
    fVar9 = *(float *)(param_5 + 0x24 + uVar14);
    fVar10 = *(float *)(param_5 + 0x28 + uVar14);
    fVar45 = auVar26._0_4_;
    fVar46 = auVar26._4_4_;
    fVar47 = auVar26._8_4_;
    fVar48 = auVar26._12_4_;
    fVar49 = auVar24._0_4_;
    fVar50 = auVar24._4_4_;
    fVar51 = auVar24._8_4_;
    fVar52 = auVar24._12_4_;
    fVar11 = *(float *)(param_5 + 0x30 + uVar14);
    fVar27 = auVar22._0_4_;
    fVar29 = auVar22._4_4_;
    fVar30 = auVar22._8_4_;
    fVar31 = auVar22._12_4_;
    fVar32 = auVar22._16_4_;
    fVar33 = auVar22._20_4_;
    fVar34 = auVar22._24_4_;
    fVar35 = auVar22._28_4_;
    auVar42._0_4_ = fVar45 * fVar2 + fVar5 * fVar56 + fVar27 * fVar8 + fVar11;
    auVar42._4_4_ = fVar46 * fVar2 + fVar5 * fVar57 + fVar29 * fVar8 + fVar11;
    auVar42._8_4_ = fVar47 * fVar2 + fVar5 * fVar58 + fVar30 * fVar8 + fVar11;
    auVar42._12_4_ = fVar48 * fVar2 + fVar5 * fVar59 + fVar31 * fVar8 + fVar11;
    auVar42._16_4_ = fVar49 * fVar2 + fVar5 * fVar60 + fVar32 * fVar8 + fVar11;
    auVar42._20_4_ = fVar50 * fVar2 + fVar5 * fVar61 + fVar33 * fVar8 + fVar11;
    auVar42._24_4_ = fVar51 * fVar2 + fVar5 * fVar62 + fVar34 * fVar8 + fVar11;
    auVar42._28_4_ = fVar52 * fVar2 + fVar5 * fVar63 + fVar35 * fVar8 + fVar11;
    fVar2 = *(float *)(param_5 + 0x34 + uVar14);
    auVar53._0_4_ = fVar45 * fVar3 + fVar6 * fVar56 + fVar27 * fVar9 + fVar2;
    auVar53._4_4_ = fVar46 * fVar3 + fVar6 * fVar57 + fVar29 * fVar9 + fVar2;
    auVar53._8_4_ = fVar47 * fVar3 + fVar6 * fVar58 + fVar30 * fVar9 + fVar2;
    auVar53._12_4_ = fVar48 * fVar3 + fVar6 * fVar59 + fVar31 * fVar9 + fVar2;
    auVar53._16_4_ = fVar49 * fVar3 + fVar6 * fVar60 + fVar32 * fVar9 + fVar2;
    auVar53._20_4_ = fVar50 * fVar3 + fVar6 * fVar61 + fVar33 * fVar9 + fVar2;
    auVar53._24_4_ = fVar51 * fVar3 + fVar6 * fVar62 + fVar34 * fVar9 + fVar2;
    auVar53._28_4_ = fVar52 * fVar3 + fVar6 * fVar63 + fVar35 * fVar9 + fVar2;
    fVar2 = *(float *)(param_5 + 0x38 + uVar14);
    auVar54._0_4_ = fVar45 * fVar4 + fVar7 * fVar56 + fVar27 * fVar10 + fVar2;
    auVar54._4_4_ = fVar46 * fVar4 + fVar7 * fVar57 + fVar29 * fVar10 + fVar2;
    auVar54._8_4_ = fVar47 * fVar4 + fVar7 * fVar58 + fVar30 * fVar10 + fVar2;
    auVar54._12_4_ = fVar48 * fVar4 + fVar7 * fVar59 + fVar31 * fVar10 + fVar2;
    auVar54._16_4_ = fVar49 * fVar4 + fVar7 * fVar60 + fVar32 * fVar10 + fVar2;
    auVar54._20_4_ = fVar50 * fVar4 + fVar7 * fVar61 + fVar33 * fVar10 + fVar2;
    auVar54._24_4_ = fVar51 * fVar4 + fVar7 * fVar62 + fVar34 * fVar10 + fVar2;
    auVar54._28_4_ = fVar52 * fVar4 + fVar7 * fVar63 + fVar35 * fVar10 + fVar2;
    local_1a0 = vmaskmovps_avx(auVar55,auVar42);
    local_180 = vmaskmovps_avx(auVar55,auVar53);
    local_160 = vmaskmovps_avx(auVar55,auVar54);
  } while (uVar17 != 0);
  auVar22 = vperm2f128_avx(local_1a0,local_180,0x20);
  auVar55 = vshufpd_avx(local_1a0,auVar22,2);
  auVar26 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                         local_160);
  auVar22 = vpermpd_avx2(local_180,0xe9);
  auVar22 = vblendps_avx(auVar26,auVar22,7);
  auVar43._16_16_ = ___xmm_00000000000000030000000400000000;
  auVar43._0_16_ = ___xmm_00000000000000030000000400000000;
  auVar26 = vpermps_avx2(auVar43,auVar22);
  auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                         auVar55);
  auVar55 = vblendps_avx(auVar55,auVar26,0xa4);
  auVar44._8_8_ = local_1a0._24_8_;
  auVar44._0_8_ = local_1a0._24_8_;
  auVar44._16_8_ = local_1a0._24_8_;
  auVar44._24_8_ = local_1a0._24_8_;
  *pauVar13 = auVar55;
  auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                         auVar22);
  auVar22 = vshufpd_avx(local_1a0,local_1a0,1);
  auVar22 = vblendps_avx(auVar55,auVar22,0x92);
  pauVar13[1] = auVar22;
  auVar23._16_16_ = ___xmm_00000006000000050000000000000007;
  auVar23._0_16_ = ___xmm_00000006000000050000000000000007;
  auVar22 = vpermps_avx2(auVar23,local_180);
  auVar22 = vblendpd_avx(auVar22,auVar44,1);
  auVar22 = vblendps_avx(auVar22,local_160,0xe0);
  auVar22 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                         auVar22);
  pauVar13[2] = auVar22;
  return;
}

// SetDynamicData_RenderThread_avx2 @ 140a94650

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetDynamicData_RenderThread_avx2
               (longlong param_1,uint param_2,undefined8 param_3,longlong param_4,longlong param_5,
               longlong param_6)

{
  undefined2 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  undefined1 (*pauVar13) [32];
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  float fVar27;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar28 [32];
  float fVar35;
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 local_1e0 [32];
  undefined1 local_1c0 [32];
  undefined1 local_1a0 [32];
  undefined1 local_180 [32];
  undefined1 local_160 [32];
  undefined1 local_140 [32];
  undefined1 local_120 [32];
  undefined1 local_100 [32];
  
  auVar22 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
  uVar16 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar16 = param_2;
  }
  if ((int)(uVar16 & 0xfffffff8) < 1) {
    uVar17 = 0;
    uVar14 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar17 = 0;
    auVar55._16_16_ = ___xmm_00000006000000050000000000000007;
    auVar55._0_16_ = ___xmm_00000006000000050000000000000007;
    do {
      auVar26 = *(undefined1 (*) [32])(param_6 + uVar17 * 0xc);
      auVar24 = *(undefined1 (*) [32])(param_6 + 0x20 + uVar17 * 0xc);
      auVar21 = *(undefined1 (*) [32])(param_6 + 0x40 + uVar17 * 0xc);
      auVar40 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000
                             ,auVar24);
      auVar41 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,auVar26);
      auVar40 = vblendps_avx(auVar41,auVar40,0x88);
      auVar41 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004
                             ,auVar24);
      auVar37 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,auVar21);
      auVar41 = vblendps_avx(auVar37,auVar41,0x13);
      auVar37 = vperm2f128_avx(auVar40,auVar41,0x31);
      auVar26 = vblendps_avx(auVar24,auVar26,0x24);
      auVar26 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar26);
      auVar24._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar24._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar24 = vpermps_avx2(auVar24,auVar21);
      auVar26 = vblendps_avx(auVar26,auVar24,0xe0);
      local_1c0 = vpmovzxwd_avx2(*(undefined1 (*) [16])(param_4 + uVar17 * 2));
      uVar14 = 0xff;
      do {
        uVar20 = 0;
        for (uVar19 = uVar14; (uVar19 & 1) == 0; uVar19 = uVar19 >> 1 | 0x8000000000000000) {
          uVar20 = uVar20 + 1;
        }
        iVar15 = *(int *)(local_1c0 + (ulonglong)(uVar20 & 7) * 4);
        auVar21._4_4_ = iVar15;
        auVar21._0_4_ = iVar15;
        auVar21._8_4_ = iVar15;
        auVar21._12_4_ = iVar15;
        auVar21._16_4_ = iVar15;
        auVar21._20_4_ = iVar15;
        auVar21._24_4_ = iVar15;
        auVar21._28_4_ = iVar15;
        auVar24 = vpcmpeqd_avx2(local_1c0,auVar21);
        uVar20 = vmovmskps_avx(auVar24);
        uVar19 = (ulonglong)(uint)(iVar15 << 6);
        uVar14 = ~(ulonglong)uVar20 & uVar14;
        fVar2 = *(float *)(param_5 + uVar19);
        fVar3 = *(float *)(param_5 + 4 + uVar19);
        fVar4 = *(float *)(param_5 + 8 + uVar19);
        fVar5 = *(float *)(param_5 + 0x10 + uVar19);
        fVar27 = auVar37._0_4_;
        fVar29 = auVar37._4_4_;
        fVar30 = auVar37._8_4_;
        fVar31 = auVar37._12_4_;
        fVar32 = auVar37._16_4_;
        fVar33 = auVar37._20_4_;
        fVar34 = auVar37._24_4_;
        fVar35 = auVar37._28_4_;
        fVar6 = *(float *)(param_5 + 0x14 + uVar19);
        fVar7 = *(float *)(param_5 + 0x18 + uVar19);
        fVar8 = *(float *)(param_5 + 0x20 + uVar19);
        fVar9 = *(float *)(param_5 + 0x24 + uVar19);
        fVar10 = *(float *)(param_5 + 0x28 + uVar19);
        fVar56 = auVar40._0_4_;
        fVar57 = auVar40._4_4_;
        fVar58 = auVar40._8_4_;
        fVar59 = auVar40._12_4_;
        fVar60 = auVar41._0_4_;
        fVar61 = auVar41._4_4_;
        fVar62 = auVar41._8_4_;
        fVar63 = auVar41._12_4_;
        fVar11 = *(float *)(param_5 + 0x30 + uVar19);
        fVar45 = auVar26._0_4_;
        fVar46 = auVar26._4_4_;
        fVar47 = auVar26._8_4_;
        fVar48 = auVar26._12_4_;
        fVar49 = auVar26._16_4_;
        fVar50 = auVar26._20_4_;
        fVar51 = auVar26._24_4_;
        fVar52 = auVar26._28_4_;
        auVar25._0_4_ = fVar56 * fVar2 + fVar27 * fVar5 + fVar45 * fVar8 + fVar11;
        auVar25._4_4_ = fVar57 * fVar2 + fVar29 * fVar5 + fVar46 * fVar8 + fVar11;
        auVar25._8_4_ = fVar58 * fVar2 + fVar30 * fVar5 + fVar47 * fVar8 + fVar11;
        auVar25._12_4_ = fVar59 * fVar2 + fVar31 * fVar5 + fVar48 * fVar8 + fVar11;
        auVar25._16_4_ = fVar60 * fVar2 + fVar32 * fVar5 + fVar49 * fVar8 + fVar11;
        auVar25._20_4_ = fVar61 * fVar2 + fVar33 * fVar5 + fVar50 * fVar8 + fVar11;
        auVar25._24_4_ = fVar62 * fVar2 + fVar34 * fVar5 + fVar51 * fVar8 + fVar11;
        auVar25._28_4_ = fVar63 * fVar2 + fVar35 * fVar5 + fVar52 * fVar8 + fVar11;
        fVar2 = *(float *)(param_5 + 0x34 + uVar19);
        auVar28._0_4_ = fVar56 * fVar3 + fVar27 * fVar6 + fVar45 * fVar9 + fVar2;
        auVar28._4_4_ = fVar57 * fVar3 + fVar29 * fVar6 + fVar46 * fVar9 + fVar2;
        auVar28._8_4_ = fVar58 * fVar3 + fVar30 * fVar6 + fVar47 * fVar9 + fVar2;
        auVar28._12_4_ = fVar59 * fVar3 + fVar31 * fVar6 + fVar48 * fVar9 + fVar2;
        auVar28._16_4_ = fVar60 * fVar3 + fVar32 * fVar6 + fVar49 * fVar9 + fVar2;
        auVar28._20_4_ = fVar61 * fVar3 + fVar33 * fVar6 + fVar50 * fVar9 + fVar2;
        auVar28._24_4_ = fVar62 * fVar3 + fVar34 * fVar6 + fVar51 * fVar9 + fVar2;
        auVar28._28_4_ = fVar63 * fVar3 + fVar35 * fVar6 + fVar52 * fVar9 + fVar2;
        fVar2 = *(float *)(param_5 + 0x38 + uVar19);
        auVar36._0_4_ = fVar56 * fVar4 + fVar27 * fVar7 + fVar45 * fVar10 + fVar2;
        auVar36._4_4_ = fVar57 * fVar4 + fVar29 * fVar7 + fVar46 * fVar10 + fVar2;
        auVar36._8_4_ = fVar58 * fVar4 + fVar30 * fVar7 + fVar47 * fVar10 + fVar2;
        auVar36._12_4_ = fVar59 * fVar4 + fVar31 * fVar7 + fVar48 * fVar10 + fVar2;
        auVar36._16_4_ = fVar60 * fVar4 + fVar32 * fVar7 + fVar49 * fVar10 + fVar2;
        auVar36._20_4_ = fVar61 * fVar4 + fVar33 * fVar7 + fVar50 * fVar10 + fVar2;
        auVar36._24_4_ = fVar62 * fVar4 + fVar34 * fVar7 + fVar51 * fVar10 + fVar2;
        auVar36._28_4_ = fVar63 * fVar4 + fVar35 * fVar7 + fVar52 * fVar10 + fVar2;
        local_140 = vmaskmovps_avx(auVar24,auVar25);
        local_120 = vmaskmovps_avx(auVar24,auVar28);
        local_100 = vmaskmovps_avx(auVar24,auVar36);
      } while (uVar14 != 0);
      auVar26 = vperm2f128_avx(local_140,local_120,0x20);
      auVar26 = vshufpd_avx(local_140,auVar26,2);
      auVar24 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar26);
      auVar21 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,local_100);
      auVar26 = vpermpd_avx2(local_120,0xe9);
      auVar26 = vblendps_avx(auVar21,auVar26,7);
      auVar40._16_16_ = ___xmm_00000000000000030000000400000000;
      auVar40._0_16_ = ___xmm_00000000000000030000000400000000;
      auVar21 = vpermps_avx2(auVar40,auVar26);
      auVar24 = vblendps_avx(auVar24,auVar21,0xa4);
      auVar41._8_8_ = local_140._24_8_;
      auVar41._0_8_ = local_140._24_8_;
      auVar41._16_8_ = local_140._24_8_;
      auVar41._24_8_ = local_140._24_8_;
      *(undefined1 (*) [32])(param_1 + uVar17 * 0xc) = auVar24;
      auVar24 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar26);
      auVar26 = vshufpd_avx(local_140,local_140,1);
      auVar26 = vblendps_avx(auVar24,auVar26,0x92);
      *(undefined1 (*) [32])(param_1 + 0x20 + uVar17 * 0xc) = auVar26;
      auVar26 = vpermps_avx2(auVar55,local_120);
      auVar26 = vblendpd_avx(auVar26,auVar41,1);
      auVar26 = vblendps_avx(auVar26,local_100,0xe0);
      auVar26 = vpermps_avx2(auVar22,auVar26);
      *(undefined1 (*) [32])(param_1 + 0x40 + uVar17 * 0xc) = auVar26;
      uVar17 = uVar17 + 8;
    } while (uVar17 < (uVar16 & 0xfffffff8));
    uVar14 = uVar17 & 0xffffffff;
    if ((int)param_2 <= (int)uVar17) {
      return;
    }
  }
  iVar15 = (int)uVar17;
  auVar22._4_4_ = iVar15;
  auVar22._0_4_ = iVar15;
  auVar22._8_4_ = iVar15;
  auVar22._12_4_ = iVar15;
  auVar22._16_4_ = iVar15;
  auVar22._20_4_ = iVar15;
  auVar22._24_4_ = iVar15;
  auVar22._28_4_ = iVar15;
  auVar22 = vpor_avx2(auVar22,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar26._4_4_ = param_2;
  auVar26._0_4_ = param_2;
  auVar26._8_4_ = param_2;
  auVar26._12_4_ = param_2;
  auVar26._16_4_ = param_2;
  auVar26._20_4_ = param_2;
  auVar26._24_4_ = param_2;
  auVar26._28_4_ = param_2;
  auVar21 = vpcmpgtd_avx2(auVar26,auVar22);
  lVar12 = uVar14 * 0xc;
  auVar22 = *(undefined1 (*) [32])(param_6 + 0x20 + lVar12);
  auVar55 = *(undefined1 (*) [32])(param_6 + 0x40 + lVar12);
  auVar39 = auVar55._0_16_;
  auVar26 = vpermps_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                         auVar22);
  auVar24 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                         *(undefined1 (*) [32])(param_6 + lVar12));
  auVar26 = vblendps_avx(auVar24,auVar26,0x88);
  auVar24 = vpermps_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                         auVar22);
  auVar40 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                         auVar55);
  auVar24 = vblendps_avx(auVar40,auVar24,0x13);
  auVar22 = vblendps_avx(auVar22,*(undefined1 (*) [32])(param_6 + lVar12),0x24);
  auVar22 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                         auVar22);
  auVar37._16_16_ = ___xmm_00000007000000040000000100000000;
  auVar37._0_16_ = ___xmm_00000007000000040000000100000000;
  auVar55 = vpermps_avx2(auVar37,auVar55);
  uVar16 = vmovmskps_avx(auVar21);
  if ((~(byte)uVar16 & 0x81) == 0) {
    auVar39 = *(undefined1 (*) [16])(param_4 + iVar15 * 2);
  }
  else {
    puVar18 = (undefined2 *)(param_4 + iVar15 * 2);
    if ((uVar16 & 1) != 0) {
      uVar1 = *puVar18;
      auVar39._2_2_ = uVar1;
      auVar39._0_2_ = uVar1;
      auVar39._4_2_ = uVar1;
      auVar39._6_2_ = uVar1;
      auVar39._8_2_ = uVar1;
      auVar39._10_2_ = uVar1;
      auVar39._12_2_ = uVar1;
      auVar39._14_2_ = uVar1;
    }
    if ((uVar16 & 2) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[1],1);
    }
    if ((uVar16 & 4) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[2],2);
    }
    if ((uVar16 & 8) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[3],3);
    }
    if ((uVar16 & 0x10) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[4],4);
    }
    if ((uVar16 & 0x20) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[5],5);
    }
    if ((uVar16 & 0x40) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[6],6);
    }
    if ((uVar16 & 0x80) != 0) {
      auVar39 = vpinsrw_avx(auVar39,(uint)(ushort)puVar18[7],7);
    }
  }
  pauVar13 = (undefined1 (*) [32])(param_1 + lVar12);
  auVar40 = vperm2f128_avx(auVar26,auVar24,0x31);
  auVar22 = vblendps_avx(auVar22,auVar55,0xe0);
  local_1e0 = vpmovzxwd_avx2(auVar39);
  uVar17 = (ulonglong)(uVar16 & 0xff);
  do {
    uVar16 = 0;
    for (uVar14 = uVar17; (uVar14 & 1) == 0; uVar14 = uVar14 >> 1 | 0x8000000000000000) {
      uVar16 = uVar16 + 1;
    }
    iVar15 = *(int *)(local_1e0 + (ulonglong)(uVar16 & 7) * 4);
    auVar38._4_4_ = iVar15;
    auVar38._0_4_ = iVar15;
    auVar38._8_4_ = iVar15;
    auVar38._12_4_ = iVar15;
    auVar38._16_4_ = iVar15;
    auVar38._20_4_ = iVar15;
    auVar38._24_4_ = iVar15;
    auVar38._28_4_ = iVar15;
    auVar55 = vpcmpeqd_avx2(auVar38,local_1e0);
    auVar55 = vpand_avx2(auVar55,auVar21);
    uVar16 = vmovmskps_avx(auVar55);
    uVar14 = (ulonglong)(uint)(iVar15 << 6);
    uVar17 = ~(ulonglong)uVar16 & uVar17;
    fVar2 = *(float *)(param_5 + uVar14);
    fVar3 = *(float *)(param_5 + 4 + uVar14);
    fVar4 = *(float *)(param_5 + 8 + uVar14);
    fVar5 = *(float *)(param_5 + 0x10 + uVar14);
    fVar56 = auVar40._0_4_;
    fVar57 = auVar40._4_4_;
    fVar58 = auVar40._8_4_;
    fVar59 = auVar40._12_4_;
    fVar60 = auVar40._16_4_;
    fVar61 = auVar40._20_4_;
    fVar62 = auVar40._24_4_;
    fVar63 = auVar40._28_4_;
    fVar6 = *(float *)(param_5 + 0x14 + uVar14);
    fVar7 = *(float *)(param_5 + 0x18 + uVar14);
    fVar8 = *(float *)(param_5 + 0x20 + uVar14);
    fVar9 = *(float *)(param_5 + 0x24 + uVar14);
    fVar10 = *(float *)(param_5 + 0x28 + uVar14);
    fVar45 = auVar26._0_4_;
    fVar46 = auVar26._4_4_;
    fVar47 = auVar26._8_4_;
    fVar48 = auVar26._12_4_;
    fVar49 = auVar24._0_4_;
    fVar50 = auVar24._4_4_;
    fVar51 = auVar24._8_4_;
    fVar52 = auVar24._12_4_;
    fVar11 = *(float *)(param_5 + 0x30 + uVar14);
    fVar27 = auVar22._0_4_;
    fVar29 = auVar22._4_4_;
    fVar30 = auVar22._8_4_;
    fVar31 = auVar22._12_4_;
    fVar32 = auVar22._16_4_;
    fVar33 = auVar22._20_4_;
    fVar34 = auVar22._24_4_;
    fVar35 = auVar22._28_4_;
    auVar42._0_4_ = fVar45 * fVar2 + fVar5 * fVar56 + fVar27 * fVar8 + fVar11;
    auVar42._4_4_ = fVar46 * fVar2 + fVar5 * fVar57 + fVar29 * fVar8 + fVar11;
    auVar42._8_4_ = fVar47 * fVar2 + fVar5 * fVar58 + fVar30 * fVar8 + fVar11;
    auVar42._12_4_ = fVar48 * fVar2 + fVar5 * fVar59 + fVar31 * fVar8 + fVar11;
    auVar42._16_4_ = fVar49 * fVar2 + fVar5 * fVar60 + fVar32 * fVar8 + fVar11;
    auVar42._20_4_ = fVar50 * fVar2 + fVar5 * fVar61 + fVar33 * fVar8 + fVar11;
    auVar42._24_4_ = fVar51 * fVar2 + fVar5 * fVar62 + fVar34 * fVar8 + fVar11;
    auVar42._28_4_ = fVar52 * fVar2 + fVar5 * fVar63 + fVar35 * fVar8 + fVar11;
    fVar2 = *(float *)(param_5 + 0x34 + uVar14);
    auVar53._0_4_ = fVar45 * fVar3 + fVar6 * fVar56 + fVar27 * fVar9 + fVar2;
    auVar53._4_4_ = fVar46 * fVar3 + fVar6 * fVar57 + fVar29 * fVar9 + fVar2;
    auVar53._8_4_ = fVar47 * fVar3 + fVar6 * fVar58 + fVar30 * fVar9 + fVar2;
    auVar53._12_4_ = fVar48 * fVar3 + fVar6 * fVar59 + fVar31 * fVar9 + fVar2;
    auVar53._16_4_ = fVar49 * fVar3 + fVar6 * fVar60 + fVar32 * fVar9 + fVar2;
    auVar53._20_4_ = fVar50 * fVar3 + fVar6 * fVar61 + fVar33 * fVar9 + fVar2;
    auVar53._24_4_ = fVar51 * fVar3 + fVar6 * fVar62 + fVar34 * fVar9 + fVar2;
    auVar53._28_4_ = fVar52 * fVar3 + fVar6 * fVar63 + fVar35 * fVar9 + fVar2;
    fVar2 = *(float *)(param_5 + 0x38 + uVar14);
    auVar54._0_4_ = fVar45 * fVar4 + fVar7 * fVar56 + fVar27 * fVar10 + fVar2;
    auVar54._4_4_ = fVar46 * fVar4 + fVar7 * fVar57 + fVar29 * fVar10 + fVar2;
    auVar54._8_4_ = fVar47 * fVar4 + fVar7 * fVar58 + fVar30 * fVar10 + fVar2;
    auVar54._12_4_ = fVar48 * fVar4 + fVar7 * fVar59 + fVar31 * fVar10 + fVar2;
    auVar54._16_4_ = fVar49 * fVar4 + fVar7 * fVar60 + fVar32 * fVar10 + fVar2;
    auVar54._20_4_ = fVar50 * fVar4 + fVar7 * fVar61 + fVar33 * fVar10 + fVar2;
    auVar54._24_4_ = fVar51 * fVar4 + fVar7 * fVar62 + fVar34 * fVar10 + fVar2;
    auVar54._28_4_ = fVar52 * fVar4 + fVar7 * fVar63 + fVar35 * fVar10 + fVar2;
    local_1a0 = vmaskmovps_avx(auVar55,auVar42);
    local_180 = vmaskmovps_avx(auVar55,auVar53);
    local_160 = vmaskmovps_avx(auVar55,auVar54);
  } while (uVar17 != 0);
  auVar22 = vperm2f128_avx(local_1a0,local_180,0x20);
  auVar55 = vshufpd_avx(local_1a0,auVar22,2);
  auVar26 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                         local_160);
  auVar22 = vpermpd_avx2(local_180,0xe9);
  auVar22 = vblendps_avx(auVar26,auVar22,7);
  auVar43._16_16_ = ___xmm_00000000000000030000000400000000;
  auVar43._0_16_ = ___xmm_00000000000000030000000400000000;
  auVar26 = vpermps_avx2(auVar43,auVar22);
  auVar55 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                         auVar55);
  auVar55 = vblendps_avx(auVar55,auVar26,0xa4);
  auVar44._8_8_ = local_1a0._24_8_;
  auVar44._0_8_ = local_1a0._24_8_;
  auVar44._16_8_ = local_1a0._24_8_;
  auVar44._24_8_ = local_1a0._24_8_;
  *pauVar13 = auVar55;
  auVar55 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                         auVar22);
  auVar22 = vshufpd_avx(local_1a0,local_1a0,1);
  auVar22 = vblendps_avx(auVar55,auVar22,0x92);
  pauVar13[1] = auVar22;
  auVar23._16_16_ = ___xmm_00000006000000050000000000000007;
  auVar23._0_16_ = ___xmm_00000006000000050000000000000007;
  auVar22 = vpermps_avx2(auVar23,local_180);
  auVar22 = vblendpd_avx(auVar22,auVar44,1);
  auVar22 = vblendps_avx(auVar22,local_160,0xe0);
  auVar22 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                         auVar22);
  pauVar13[2] = auVar22;
  return;
}

