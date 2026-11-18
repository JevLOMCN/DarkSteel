// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 2

// SetDynamicData_RenderThread___un_3C_s_5B_unFVector3f_5D__3E_CunuCunuun_3C_CunS_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E__avx @ 140a94cf0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetDynamicData_RenderThread___un_3C_s_5B_unFVector3f_5D__3E_CunuCunuun_3C_CunS_3E_un_3C_s_5B__c_unFMatrix44f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E__avx
               (longlong param_1,uint param_2,undefined8 param_3,longlong param_4,longlong param_5,
               longlong param_6)

{
  undefined4 uVar1;
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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  ulonglong uVar34;
  uint uVar35;
  ushort *puVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
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
  float fVar58;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  float fVar69;
  undefined1 auVar70 [16];
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
  undefined1 auStack_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_170 [16];
  undefined1 local_160 [16];
  undefined1 auStack_150 [16];
  undefined1 local_120 [32];
  undefined1 local_100 [6] [32];
  
  auVar49 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
  auVar46 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  auVar81 = ___ymm_0000000600000007000000040000000000000001000000020000000000000000;
  auVar44 = ___ymm_0000000000000007000000040000000500000000000000020000000300000000;
  uVar35 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar35 = param_2;
  }
  if ((int)(uVar35 & 0xfffffff8) < 1) {
    uVar37 = 0;
    uVar34 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar37 = 0;
    do {
      auVar70 = *(undefined1 (*) [16])(param_6 + uVar37 * 0xc);
      auVar12 = *(undefined1 (*) [16])(param_6 + 0x10 + uVar37 * 0xc);
      auVar41 = *(undefined1 (*) [16])(param_6 + 0x30 + uVar37 * 0xc);
      auVar59._16_16_ = auVar12;
      auVar59._0_16_ = auVar70;
      auVar71._16_16_ = auVar41;
      auVar71._0_16_ = *(undefined1 (*) [16])(param_6 + 0x20 + uVar37 * 0xc);
      auVar43 = *(undefined1 (*) [16])(param_6 + 0x50 + uVar37 * 0xc);
      auVar13 = *(undefined1 (*) [16])(param_6 + 0x40 + uVar37 * 0xc);
      auVar77._16_16_ = auVar43;
      auVar77._0_16_ = auVar13;
      auVar48._16_16_ = auVar70;
      auVar48._0_16_ = auVar12;
      auVar48 = vblendps_avx(auVar59,auVar48,0x24);
      auVar48 = vpermilps_avx(auVar48,auVar44);
      uVar1 = *(undefined4 *)(param_6 + 0x28 + uVar37 * 0xc);
      auVar80._20_4_ = uVar1;
      auVar80._16_4_ = uVar1;
      auVar80._24_4_ = uVar1;
      auVar80._28_4_ = uVar1;
      uVar1 = *(undefined4 *)(param_6 + 0x24 + uVar37 * 0xc);
      auVar80._4_4_ = uVar1;
      auVar80._0_4_ = uVar1;
      auVar80._8_4_ = uVar1;
      auVar80._12_4_ = uVar1;
      auVar48 = vblendps_avx(auVar48,auVar80,0x88);
      auVar75._16_16_ = auVar13;
      auVar75._0_16_ = auVar43;
      auVar80 = vblendps_avx(auVar75,auVar77,0x44);
      auVar80 = vpermilps_avx(auVar80,auVar81);
      uVar1 = *(undefined4 *)(param_6 + 0x34 + uVar37 * 0xc);
      auVar51._20_4_ = uVar1;
      auVar51._16_4_ = uVar1;
      auVar51._24_4_ = uVar1;
      auVar51._28_4_ = uVar1;
      auVar70 = vshufps_avx(auVar41,auVar41,0xec);
      auVar51._0_16_ = auVar70;
      auVar80 = vblendps_avx(auVar80,auVar51,0x13);
      auVar52 = vperm2f128_avx(auVar48,auVar80,0x31);
      auVar51 = vblendps_avx(auVar71,auVar59,0x24);
      auVar51 = vshufps_avx(ZEXT1632(auVar12),auVar51,0x21);
      auVar51 = vshufps_avx(auVar51,auVar71,0xc2);
      auVar59 = vshufps_avx(auVar75,auVar77,0xc4);
      auVar51 = vblendps_avx(auVar51,auVar59,0xe0);
      auVar70._8_8_ = 0;
      auVar70._0_8_ = *(ulonglong *)(param_4 + 8 + uVar37 * 2);
      auVar70 = vpmovzxwd_avx(auVar70);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(param_4 + uVar37 * 2);
      auVar12 = vpmovzxwd_avx(auVar12);
      local_100[0]._16_16_ = auVar70;
      local_100[0]._0_16_ = auVar12;
      uVar34 = 0xff;
      do {
        uVar39 = 0;
        for (uVar40 = uVar34; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
          uVar39 = uVar39 + 1;
        }
        auVar43 = vpshufd_avx(ZEXT416(*(uint *)(local_100[0] + (ulonglong)(uVar39 & 7) * 4)),0);
        auVar41 = vpcmpeqd_avx(auVar43,auVar70);
        auVar43 = vpcmpeqd_avx(auVar43,auVar12);
        auVar60._16_16_ = auVar41;
        auVar60._0_16_ = auVar43;
        uVar40 = (ulonglong)(*(uint *)(local_100[0] + (ulonglong)(uVar39 & 7) * 4) << 6);
        fVar2 = *(float *)(param_5 + uVar40);
        fVar14 = auVar48._0_4_;
        fVar17 = auVar48._4_4_;
        fVar20 = auVar48._8_4_;
        fVar23 = auVar48._12_4_;
        fVar26 = auVar80._0_4_;
        fVar29 = auVar80._4_4_;
        fVar64 = auVar80._8_4_;
        fVar67 = auVar80._12_4_;
        fVar3 = *(float *)(param_5 + 4 + uVar40);
        fVar4 = *(float *)(param_5 + 8 + uVar40);
        fVar5 = *(float *)(param_5 + 0x10 + uVar40);
        fVar15 = auVar52._0_4_;
        fVar18 = auVar52._4_4_;
        fVar21 = auVar52._8_4_;
        fVar24 = auVar52._12_4_;
        fVar27 = auVar52._16_4_;
        fVar58 = auVar52._20_4_;
        fVar65 = auVar52._24_4_;
        fVar68 = auVar52._28_4_;
        fVar6 = *(float *)(param_5 + 0x14 + uVar40);
        fVar7 = *(float *)(param_5 + 0x18 + uVar40);
        fVar8 = *(float *)(param_5 + 0x20 + uVar40);
        fVar16 = auVar51._0_4_;
        fVar19 = auVar51._4_4_;
        fVar22 = auVar51._8_4_;
        fVar25 = auVar51._12_4_;
        fVar28 = auVar51._16_4_;
        fVar63 = auVar51._20_4_;
        fVar66 = auVar51._24_4_;
        fVar69 = auVar51._28_4_;
        fVar9 = *(float *)(param_5 + 0x24 + uVar40);
        fVar10 = *(float *)(param_5 + 0x28 + uVar40);
        fVar11 = *(float *)(param_5 + 0x30 + uVar40);
        auVar72._0_4_ = fVar2 * fVar14 + fVar5 * fVar15 + fVar8 * fVar16 + fVar11;
        auVar72._4_4_ = fVar2 * fVar17 + fVar5 * fVar18 + fVar8 * fVar19 + fVar11;
        auVar72._8_4_ = fVar2 * fVar20 + fVar5 * fVar21 + fVar8 * fVar22 + fVar11;
        auVar72._12_4_ = fVar2 * fVar23 + fVar5 * fVar24 + fVar8 * fVar25 + fVar11;
        auVar72._16_4_ = fVar2 * fVar26 + fVar5 * fVar27 + fVar8 * fVar28 + fVar11;
        auVar72._20_4_ = fVar2 * fVar29 + fVar5 * fVar58 + fVar8 * fVar63 + fVar11;
        auVar72._24_4_ = fVar2 * fVar64 + fVar5 * fVar65 + fVar8 * fVar66 + fVar11;
        auVar72._28_4_ = fVar2 * fVar67 + fVar5 * fVar68 + fVar8 * fVar69 + fVar11;
        fVar2 = *(float *)(param_5 + 0x34 + uVar40);
        auVar76._0_4_ = fVar3 * fVar14 + fVar6 * fVar15 + fVar9 * fVar16 + fVar2;
        auVar76._4_4_ = fVar3 * fVar17 + fVar6 * fVar18 + fVar9 * fVar19 + fVar2;
        auVar76._8_4_ = fVar3 * fVar20 + fVar6 * fVar21 + fVar9 * fVar22 + fVar2;
        auVar76._12_4_ = fVar3 * fVar23 + fVar6 * fVar24 + fVar9 * fVar25 + fVar2;
        auVar76._16_4_ = fVar3 * fVar26 + fVar6 * fVar27 + fVar9 * fVar28 + fVar2;
        auVar76._20_4_ = fVar3 * fVar29 + fVar6 * fVar58 + fVar9 * fVar63 + fVar2;
        auVar76._24_4_ = fVar3 * fVar64 + fVar6 * fVar65 + fVar9 * fVar66 + fVar2;
        auVar76._28_4_ = fVar3 * fVar67 + fVar6 * fVar68 + fVar9 * fVar69 + fVar2;
        fVar2 = *(float *)(param_5 + 0x38 + uVar40);
        auVar78._0_4_ = fVar4 * fVar14 + fVar7 * fVar15 + fVar10 * fVar16 + fVar2;
        auVar78._4_4_ = fVar4 * fVar17 + fVar7 * fVar18 + fVar10 * fVar19 + fVar2;
        auVar78._8_4_ = fVar4 * fVar20 + fVar7 * fVar21 + fVar10 * fVar22 + fVar2;
        auVar78._12_4_ = fVar4 * fVar23 + fVar7 * fVar24 + fVar10 * fVar25 + fVar2;
        auVar78._16_4_ = fVar4 * fVar26 + fVar7 * fVar27 + fVar10 * fVar28 + fVar2;
        auVar78._20_4_ = fVar4 * fVar29 + fVar7 * fVar58 + fVar10 * fVar63 + fVar2;
        auVar78._24_4_ = fVar4 * fVar64 + fVar7 * fVar65 + fVar10 * fVar66 + fVar2;
        auVar78._28_4_ = fVar4 * fVar67 + fVar7 * fVar68 + fVar10 * fVar69 + fVar2;
        auVar59 = vmaskmovps_avx(auVar60,auVar72);
        auVar71 = vmaskmovps_avx(auVar60,auVar76);
        auVar75 = vmaskmovps_avx(auVar60,auVar78);
        uVar39 = vmovmskps_avx(auVar60);
        uVar34 = uVar34 & ~(ulonglong)uVar39;
      } while (uVar34 != 0);
      local_160 = auVar71._0_16_;
      auVar55._16_16_ = local_160;
      auVar55._0_16_ = auVar59._0_16_;
      auVar51 = vshufpd_avx(auVar59,auVar55,2);
      auVar52 = vperm2f128_avx(auVar75,auVar75,1);
      auVar48 = vshufps_avx(auVar75,auVar52,0x30);
      auVar48 = vshufps_avx(auVar52,auVar48,0x29);
      auStack_150 = auVar71._16_16_;
      auVar12 = auStack_150;
      auVar70 = vshufpd_avx(local_160,auStack_150,1);
      auVar48 = vblendps_avx(auVar48,ZEXT1632(auVar70),7);
      auVar77 = vperm2f128_avx(auVar48,auVar48,1);
      auVar80 = vunpcklpd_avx(auVar77,auVar75);
      auVar52 = vshufps_avx(auVar52,auVar80,0x24);
      auVar80 = vperm2f128_avx(auVar51,auVar51,1);
      auVar80 = vblendps_avx(auVar51,auVar80,0x44);
      auVar80 = vpermilps_avx(auVar80,auVar46);
      auVar80 = vblendps_avx(auVar80,auVar52,0xa4);
      auStack_150._12_4_ = auVar71._28_4_;
      auVar52._20_4_ = auStack_150._12_4_;
      auVar52._16_4_ = auStack_150._12_4_;
      auVar52._24_4_ = auStack_150._12_4_;
      auVar52._28_4_ = auStack_150._12_4_;
      auStack_170 = auVar59._16_16_;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar37 * 0xc) = auVar80._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar37 * 0xc) = auVar80._0_16_;
      auVar80 = vpermilps_avx(auVar48,auVar49);
      auVar48 = vshufps_avx(auVar77,auVar77,0xa9);
      auVar48 = vblendps_avx(auVar48,auVar80,0x44);
      auVar80 = vshufpd_avx(auVar51,auVar51,1);
      auVar48 = vblendps_avx(auVar48,auVar80,0x92);
      *(undefined1 (*) [16])(param_1 + 0x30 + uVar37 * 0xc) = auVar48._16_16_;
      *(undefined1 (*) [16])(param_1 + 0x20 + uVar37 * 0xc) = auVar48._0_16_;
      auVar70 = vshufps_avx(auStack_170,auVar12,0x9e);
      auVar52._0_16_ = auVar70;
      auVar80 = vperm2f128_avx(auVar75,ZEXT1632(auVar70),0x21);
      auVar48 = vblendps_avx(auVar52,auVar75,0xe0);
      auVar80 = vshufps_avx(auVar80,auVar48,0x21);
      auVar48 = vshufps_avx(auVar80,auVar48,0xc2);
      *(undefined1 (*) [16])(param_1 + 0x50 + uVar37 * 0xc) = auVar48._16_16_;
      *(undefined1 (*) [16])(param_1 + 0x40 + uVar37 * 0xc) = auVar48._0_16_;
      uVar37 = uVar37 + 8;
    } while (uVar37 < (uVar35 & 0xfffffff8));
    uVar34 = uVar37 & 0xffffffff;
    if ((int)param_2 <= (int)uVar37) {
      return;
    }
  }
  auVar70 = vpshufd_avx(ZEXT416((uint)uVar37),0);
  auVar42._16_16_ = auVar70;
  auVar42._0_16_ = auVar70;
  auVar30 = vpshufd_avx(ZEXT416(param_2),0);
  lVar32 = uVar34 * 0xc;
  auVar70 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar32);
  auVar12 = *(undefined1 (*) [16])(param_6 + 0x20 + lVar32);
  auVar41 = *(undefined1 (*) [16])(param_6 + 0x30 + lVar32);
  auVar53._16_16_ = auVar70;
  auVar53._0_16_ = *(undefined1 (*) [16])(param_6 + lVar32);
  auVar61._16_16_ = auVar41;
  auVar61._0_16_ = auVar12;
  auVar43 = *(undefined1 (*) [16])(param_6 + 0x50 + lVar32);
  auVar13 = *(undefined1 (*) [16])(param_6 + 0x40 + lVar32);
  auVar79._16_16_ = auVar43;
  auVar79._0_16_ = auVar13;
  auVar44._16_16_ = *(undefined1 (*) [16])(param_6 + lVar32);
  auVar44._0_16_ = auVar70;
  auVar44 = vblendps_avx(auVar53,auVar44,0x24);
  auVar44 = vpermilps_avx(auVar44,
                          ___ymm_0000000000000007000000040000000500000000000000020000000300000000);
  uVar1 = *(undefined4 *)(param_6 + 0x28 + lVar32);
  auVar81._20_4_ = uVar1;
  auVar81._16_4_ = uVar1;
  auVar81._24_4_ = uVar1;
  auVar81._28_4_ = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 0x24 + lVar32);
  auVar81._4_4_ = uVar1;
  auVar81._0_4_ = uVar1;
  auVar81._8_4_ = uVar1;
  auVar81._12_4_ = uVar1;
  auVar44 = vblendps_avx(auVar44,auVar81,0x88);
  auVar73._16_16_ = auVar13;
  auVar73._0_16_ = auVar43;
  auVar81 = vblendps_avx(auVar73,auVar79,0x44);
  auVar81 = vpermilps_avx(auVar81,
                          ___ymm_0000000600000007000000040000000000000001000000020000000000000000);
  uVar1 = *(undefined4 *)(param_6 + 0x34 + lVar32);
  auVar46._20_4_ = uVar1;
  auVar46._16_4_ = uVar1;
  auVar46._24_4_ = uVar1;
  auVar46._28_4_ = uVar1;
  auVar41 = vshufps_avx(auVar41,auVar41,0xec);
  auVar46._0_16_ = auVar41;
  auVar81 = vblendps_avx(auVar81,auVar46,0x13);
  auVar46 = vblendps_avx(auVar61,auVar53,0x24);
  auVar49._16_16_ = auVar12;
  auVar49._0_16_ = auVar70;
  auVar46 = vshufps_avx(auVar49,auVar46,0x21);
  auVar46 = vshufps_avx(auVar46,auVar61,0xc2);
  auVar49 = vshufps_avx(auVar73,auVar79,0xc4);
  lVar38 = (longlong)(int)((uint)uVar37 * 2);
  auVar41 = SUB3216(auVar42 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar43 = SUB3216(auVar42 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar70 = vpcmpgtd_avx(auVar30,auVar43);
  auVar12 = vpcmpgtd_avx(auVar30,auVar41);
  auVar56._16_16_ = auVar70;
  auVar56._0_16_ = auVar12;
  uVar35 = vmovmskps_avx(auVar56);
  if ((~(byte)uVar35 & 0x81) == 0) {
    auVar70 = *(undefined1 (*) [16])(param_4 + lVar38);
  }
  else {
    puVar36 = (ushort *)(param_4 + lVar38);
    auVar12 = vpcmpgtd_avx(auVar30,auVar43);
    auVar70 = vpcmpgtd_avx(auVar30,auVar41);
    auVar62._16_16_ = auVar12;
    auVar62._0_16_ = auVar70;
    uVar39 = vmovmskps_avx(auVar62);
    if ((uVar39 & 1) != 0) {
      auVar70 = ZEXT216(*puVar36);
    }
    if ((uVar39 & 2) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[1],1);
    }
    if ((uVar39 & 4) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[2],2);
    }
    if ((uVar39 & 8) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[3],3);
    }
    if ((uVar39 & 0x10) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[4],4);
    }
    if ((uVar39 & 0x20) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[5],5);
    }
    if ((uVar39 & 0x40) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[6],6);
    }
    if ((uVar39 & 0x80) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[7],7);
    }
  }
  pauVar33 = (undefined1 (*) [16])(param_1 + lVar32);
  auVar48 = vperm2f128_avx(auVar44,auVar81,0x31);
  auVar46 = vblendps_avx(auVar46,auVar49,0xe0);
  auVar31 = vpunpckhwd_avx(auVar70,ZEXT816(0) << 0x20);
  auVar13 = vpmovzxwd_avx(auVar70);
  local_120._16_16_ = auVar31;
  local_120._0_16_ = auVar13;
  uVar37 = (ulonglong)(uVar35 & 0xff);
  auVar70 = vpcmpgtd_avx(auVar30,auVar43);
  auVar12 = vpcmpgtd_avx(auVar30,auVar41);
  do {
    if (uVar37 == 0) {
      uVar35 = 0;
    }
    else {
      uVar35 = 0;
      for (uVar34 = uVar37; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
        uVar35 = uVar35 + 1;
      }
    }
    auVar43 = vpshufd_avx(ZEXT416(*(uint *)(local_120 + (ulonglong)(uVar35 & 7) * 4)),0);
    auVar41 = vpcmpeqd_avx(auVar43,auVar31);
    auVar43 = vpcmpeqd_avx(auVar43,auVar13);
    auVar50._0_4_ = auVar43._0_4_ & auVar12._0_4_;
    auVar50._4_4_ = auVar43._4_4_ & auVar12._4_4_;
    auVar50._8_4_ = auVar43._8_4_ & auVar12._8_4_;
    auVar50._12_4_ = auVar43._12_4_ & auVar12._12_4_;
    auVar50._16_4_ = auVar41._0_4_ & auVar70._0_4_;
    auVar50._20_4_ = auVar41._4_4_ & auVar70._4_4_;
    auVar50._24_4_ = auVar41._8_4_ & auVar70._8_4_;
    auVar50._28_4_ = auVar41._12_4_ & auVar70._12_4_;
    uVar34 = (ulonglong)(*(uint *)(local_120 + (ulonglong)(uVar35 & 7) * 4) << 6);
    fVar2 = *(float *)(param_5 + uVar34);
    fVar58 = auVar44._0_4_;
    fVar63 = auVar44._4_4_;
    fVar64 = auVar44._8_4_;
    fVar65 = auVar44._12_4_;
    fVar66 = auVar81._0_4_;
    fVar67 = auVar81._4_4_;
    fVar68 = auVar81._8_4_;
    fVar69 = auVar81._12_4_;
    fVar3 = *(float *)(param_5 + 4 + uVar34);
    fVar4 = *(float *)(param_5 + 8 + uVar34);
    fVar5 = *(float *)(param_5 + 0x10 + uVar34);
    fVar14 = auVar48._0_4_;
    fVar16 = auVar48._4_4_;
    fVar18 = auVar48._8_4_;
    fVar20 = auVar48._12_4_;
    fVar22 = auVar48._16_4_;
    fVar24 = auVar48._20_4_;
    fVar26 = auVar48._24_4_;
    fVar28 = auVar48._28_4_;
    fVar6 = *(float *)(param_5 + 0x14 + uVar34);
    fVar7 = *(float *)(param_5 + 0x18 + uVar34);
    fVar8 = *(float *)(param_5 + 0x20 + uVar34);
    fVar15 = auVar46._0_4_;
    fVar17 = auVar46._4_4_;
    fVar19 = auVar46._8_4_;
    fVar21 = auVar46._12_4_;
    fVar23 = auVar46._16_4_;
    fVar25 = auVar46._20_4_;
    fVar27 = auVar46._24_4_;
    fVar29 = auVar46._28_4_;
    fVar9 = *(float *)(param_5 + 0x24 + uVar34);
    fVar10 = *(float *)(param_5 + 0x28 + uVar34);
    fVar11 = *(float *)(param_5 + 0x30 + uVar34);
    auVar54._0_4_ = fVar8 * fVar15 + fVar11 + fVar5 * fVar14 + fVar58 * fVar2;
    auVar54._4_4_ = fVar8 * fVar17 + fVar11 + fVar5 * fVar16 + fVar63 * fVar2;
    auVar54._8_4_ = fVar8 * fVar19 + fVar11 + fVar5 * fVar18 + fVar64 * fVar2;
    auVar54._12_4_ = fVar8 * fVar21 + fVar11 + fVar5 * fVar20 + fVar65 * fVar2;
    auVar54._16_4_ = fVar8 * fVar23 + fVar11 + fVar5 * fVar22 + fVar66 * fVar2;
    auVar54._20_4_ = fVar8 * fVar25 + fVar11 + fVar5 * fVar24 + fVar67 * fVar2;
    auVar54._24_4_ = fVar8 * fVar27 + fVar11 + fVar5 * fVar26 + fVar68 * fVar2;
    auVar54._28_4_ = fVar8 * fVar29 + fVar11 + fVar5 * fVar28 + fVar69 * fVar2;
    fVar2 = *(float *)(param_5 + 0x34 + uVar34);
    auVar57._0_4_ = fVar9 * fVar15 + fVar2 + fVar6 * fVar14 + fVar58 * fVar3;
    auVar57._4_4_ = fVar9 * fVar17 + fVar2 + fVar6 * fVar16 + fVar63 * fVar3;
    auVar57._8_4_ = fVar9 * fVar19 + fVar2 + fVar6 * fVar18 + fVar64 * fVar3;
    auVar57._12_4_ = fVar9 * fVar21 + fVar2 + fVar6 * fVar20 + fVar65 * fVar3;
    auVar57._16_4_ = fVar9 * fVar23 + fVar2 + fVar6 * fVar22 + fVar66 * fVar3;
    auVar57._20_4_ = fVar9 * fVar25 + fVar2 + fVar6 * fVar24 + fVar67 * fVar3;
    auVar57._24_4_ = fVar9 * fVar27 + fVar2 + fVar6 * fVar26 + fVar68 * fVar3;
    auVar57._28_4_ = fVar9 * fVar29 + fVar2 + fVar6 * fVar28 + fVar69 * fVar3;
    fVar2 = *(float *)(param_5 + 0x38 + uVar34);
    auVar74._0_4_ = fVar58 * fVar4 + fVar7 * fVar14 + fVar10 * fVar15 + fVar2;
    auVar74._4_4_ = fVar63 * fVar4 + fVar7 * fVar16 + fVar10 * fVar17 + fVar2;
    auVar74._8_4_ = fVar64 * fVar4 + fVar7 * fVar18 + fVar10 * fVar19 + fVar2;
    auVar74._12_4_ = fVar65 * fVar4 + fVar7 * fVar20 + fVar10 * fVar21 + fVar2;
    auVar74._16_4_ = fVar66 * fVar4 + fVar7 * fVar22 + fVar10 * fVar23 + fVar2;
    auVar74._20_4_ = fVar67 * fVar4 + fVar7 * fVar24 + fVar10 * fVar25 + fVar2;
    auVar74._24_4_ = fVar68 * fVar4 + fVar7 * fVar26 + fVar10 * fVar27 + fVar2;
    auVar74._28_4_ = fVar69 * fVar4 + fVar7 * fVar28 + fVar10 * fVar29 + fVar2;
    auVar49 = vmaskmovps_avx(auVar50,auVar54);
    auVar80 = vmaskmovps_avx(auVar50,auVar57);
    auVar51 = vmaskmovps_avx(auVar50,auVar74);
    uVar35 = vmovmskps_avx(auVar50);
    uVar37 = uVar37 & ~(ulonglong)uVar35;
  } while (uVar37 != 0);
  local_1c0 = auVar80._0_16_;
  auVar47._16_16_ = local_1c0;
  auVar47._0_16_ = auVar49._0_16_;
  auVar46 = vshufpd_avx(auVar49,auVar47,2);
  auVar48 = vperm2f128_avx(auVar51,auVar51,1);
  auVar44 = vshufps_avx(auVar51,auVar48,0x30);
  auVar44 = vshufps_avx(auVar48,auVar44,0x29);
  auStack_1b0 = auVar80._16_16_;
  auVar12 = auStack_1b0;
  auVar70 = vshufpd_avx(local_1c0,auStack_1b0,1);
  auVar44 = vblendps_avx(auVar44,ZEXT1632(auVar70),7);
  auVar59 = vperm2f128_avx(auVar44,auVar44,1);
  auVar81 = vunpcklpd_avx(auVar59,auVar51);
  auVar48 = vshufps_avx(auVar48,auVar81,0x24);
  auVar81 = vperm2f128_avx(auVar46,auVar46,1);
  auVar81 = vblendps_avx(auVar46,auVar81,0x44);
  auVar81 = vpermilps_avx(auVar81,
                          ___ymm_0000000000000006000000000000000700000001000000000000000200000000);
  auVar81 = vblendps_avx(auVar81,auVar48,0xa4);
  auStack_1b0._12_4_ = auVar80._28_4_;
  auVar45._20_4_ = auStack_1b0._12_4_;
  auVar45._16_4_ = auStack_1b0._12_4_;
  auVar45._24_4_ = auStack_1b0._12_4_;
  auVar45._28_4_ = auStack_1b0._12_4_;
  auStack_1d0 = auVar49._16_16_;
  pauVar33[1] = auVar81._16_16_;
  *pauVar33 = auVar81._0_16_;
  auVar81 = vpermilps_avx(auVar44,
                          ___ymm_0000000000000007000000000000000000000000000000010000000000000000);
  auVar44 = vshufps_avx(auVar59,auVar59,0xa9);
  auVar44 = vblendps_avx(auVar44,auVar81,0x44);
  auVar81 = vshufpd_avx(auVar46,auVar46,1);
  auVar44 = vblendps_avx(auVar44,auVar81,0x92);
  pauVar33[3] = auVar44._16_16_;
  pauVar33[2] = auVar44._0_16_;
  auVar70 = vshufps_avx(auStack_1d0,auVar12,0x9e);
  auVar45._0_16_ = auVar70;
  auVar81 = vperm2f128_avx(auVar51,ZEXT1632(auVar70),0x21);
  auVar44 = vblendps_avx(auVar45,auVar51,0xe0);
  auVar81 = vshufps_avx(auVar81,auVar44,0x21);
  auVar44 = vshufps_avx(auVar81,auVar44,0xc2);
  pauVar33[5] = auVar44._16_16_;
  pauVar33[4] = auVar44._0_16_;
  return;
}

// SetDynamicData_RenderThread_avx @ 140a95550

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SetDynamicData_RenderThread_avx
               (longlong param_1,uint param_2,undefined8 param_3,longlong param_4,longlong param_5,
               longlong param_6)

{
  undefined4 uVar1;
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
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  longlong lVar32;
  undefined1 (*pauVar33) [16];
  ulonglong uVar34;
  uint uVar35;
  ushort *puVar36;
  ulonglong uVar37;
  longlong lVar38;
  uint uVar39;
  ulonglong uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
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
  float fVar58;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  float fVar69;
  undefined1 auVar70 [16];
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
  undefined1 auStack_1d0 [16];
  undefined1 local_1c0 [16];
  undefined1 auStack_1b0 [16];
  undefined1 auStack_170 [16];
  undefined1 local_160 [16];
  undefined1 auStack_150 [16];
  undefined1 local_120 [32];
  undefined1 local_100 [6] [32];
  
  auVar49 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
  auVar46 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  auVar81 = ___ymm_0000000600000007000000040000000000000001000000020000000000000000;
  auVar44 = ___ymm_0000000000000007000000040000000500000000000000020000000300000000;
  uVar35 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar35 = param_2;
  }
  if ((int)(uVar35 & 0xfffffff8) < 1) {
    uVar37 = 0;
    uVar34 = 0;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar37 = 0;
    do {
      auVar70 = *(undefined1 (*) [16])(param_6 + uVar37 * 0xc);
      auVar12 = *(undefined1 (*) [16])(param_6 + 0x10 + uVar37 * 0xc);
      auVar41 = *(undefined1 (*) [16])(param_6 + 0x30 + uVar37 * 0xc);
      auVar59._16_16_ = auVar12;
      auVar59._0_16_ = auVar70;
      auVar71._16_16_ = auVar41;
      auVar71._0_16_ = *(undefined1 (*) [16])(param_6 + 0x20 + uVar37 * 0xc);
      auVar43 = *(undefined1 (*) [16])(param_6 + 0x50 + uVar37 * 0xc);
      auVar13 = *(undefined1 (*) [16])(param_6 + 0x40 + uVar37 * 0xc);
      auVar77._16_16_ = auVar43;
      auVar77._0_16_ = auVar13;
      auVar48._16_16_ = auVar70;
      auVar48._0_16_ = auVar12;
      auVar48 = vblendps_avx(auVar59,auVar48,0x24);
      auVar48 = vpermilps_avx(auVar48,auVar44);
      uVar1 = *(undefined4 *)(param_6 + 0x28 + uVar37 * 0xc);
      auVar80._20_4_ = uVar1;
      auVar80._16_4_ = uVar1;
      auVar80._24_4_ = uVar1;
      auVar80._28_4_ = uVar1;
      uVar1 = *(undefined4 *)(param_6 + 0x24 + uVar37 * 0xc);
      auVar80._4_4_ = uVar1;
      auVar80._0_4_ = uVar1;
      auVar80._8_4_ = uVar1;
      auVar80._12_4_ = uVar1;
      auVar48 = vblendps_avx(auVar48,auVar80,0x88);
      auVar75._16_16_ = auVar13;
      auVar75._0_16_ = auVar43;
      auVar80 = vblendps_avx(auVar75,auVar77,0x44);
      auVar80 = vpermilps_avx(auVar80,auVar81);
      uVar1 = *(undefined4 *)(param_6 + 0x34 + uVar37 * 0xc);
      auVar51._20_4_ = uVar1;
      auVar51._16_4_ = uVar1;
      auVar51._24_4_ = uVar1;
      auVar51._28_4_ = uVar1;
      auVar70 = vshufps_avx(auVar41,auVar41,0xec);
      auVar51._0_16_ = auVar70;
      auVar80 = vblendps_avx(auVar80,auVar51,0x13);
      auVar52 = vperm2f128_avx(auVar48,auVar80,0x31);
      auVar51 = vblendps_avx(auVar71,auVar59,0x24);
      auVar51 = vshufps_avx(ZEXT1632(auVar12),auVar51,0x21);
      auVar51 = vshufps_avx(auVar51,auVar71,0xc2);
      auVar59 = vshufps_avx(auVar75,auVar77,0xc4);
      auVar51 = vblendps_avx(auVar51,auVar59,0xe0);
      auVar70._8_8_ = 0;
      auVar70._0_8_ = *(ulonglong *)(param_4 + 8 + uVar37 * 2);
      auVar70 = vpmovzxwd_avx(auVar70);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(ulonglong *)(param_4 + uVar37 * 2);
      auVar12 = vpmovzxwd_avx(auVar12);
      local_100[0]._16_16_ = auVar70;
      local_100[0]._0_16_ = auVar12;
      uVar34 = 0xff;
      do {
        uVar39 = 0;
        for (uVar40 = uVar34; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x8000000000000000) {
          uVar39 = uVar39 + 1;
        }
        auVar43 = vpshufd_avx(ZEXT416(*(uint *)(local_100[0] + (ulonglong)(uVar39 & 7) * 4)),0);
        auVar41 = vpcmpeqd_avx(auVar43,auVar70);
        auVar43 = vpcmpeqd_avx(auVar43,auVar12);
        auVar60._16_16_ = auVar41;
        auVar60._0_16_ = auVar43;
        uVar40 = (ulonglong)(*(uint *)(local_100[0] + (ulonglong)(uVar39 & 7) * 4) << 6);
        fVar2 = *(float *)(param_5 + uVar40);
        fVar14 = auVar48._0_4_;
        fVar17 = auVar48._4_4_;
        fVar20 = auVar48._8_4_;
        fVar23 = auVar48._12_4_;
        fVar26 = auVar80._0_4_;
        fVar29 = auVar80._4_4_;
        fVar64 = auVar80._8_4_;
        fVar67 = auVar80._12_4_;
        fVar3 = *(float *)(param_5 + 4 + uVar40);
        fVar4 = *(float *)(param_5 + 8 + uVar40);
        fVar5 = *(float *)(param_5 + 0x10 + uVar40);
        fVar15 = auVar52._0_4_;
        fVar18 = auVar52._4_4_;
        fVar21 = auVar52._8_4_;
        fVar24 = auVar52._12_4_;
        fVar27 = auVar52._16_4_;
        fVar58 = auVar52._20_4_;
        fVar65 = auVar52._24_4_;
        fVar68 = auVar52._28_4_;
        fVar6 = *(float *)(param_5 + 0x14 + uVar40);
        fVar7 = *(float *)(param_5 + 0x18 + uVar40);
        fVar8 = *(float *)(param_5 + 0x20 + uVar40);
        fVar16 = auVar51._0_4_;
        fVar19 = auVar51._4_4_;
        fVar22 = auVar51._8_4_;
        fVar25 = auVar51._12_4_;
        fVar28 = auVar51._16_4_;
        fVar63 = auVar51._20_4_;
        fVar66 = auVar51._24_4_;
        fVar69 = auVar51._28_4_;
        fVar9 = *(float *)(param_5 + 0x24 + uVar40);
        fVar10 = *(float *)(param_5 + 0x28 + uVar40);
        fVar11 = *(float *)(param_5 + 0x30 + uVar40);
        auVar72._0_4_ = fVar2 * fVar14 + fVar5 * fVar15 + fVar8 * fVar16 + fVar11;
        auVar72._4_4_ = fVar2 * fVar17 + fVar5 * fVar18 + fVar8 * fVar19 + fVar11;
        auVar72._8_4_ = fVar2 * fVar20 + fVar5 * fVar21 + fVar8 * fVar22 + fVar11;
        auVar72._12_4_ = fVar2 * fVar23 + fVar5 * fVar24 + fVar8 * fVar25 + fVar11;
        auVar72._16_4_ = fVar2 * fVar26 + fVar5 * fVar27 + fVar8 * fVar28 + fVar11;
        auVar72._20_4_ = fVar2 * fVar29 + fVar5 * fVar58 + fVar8 * fVar63 + fVar11;
        auVar72._24_4_ = fVar2 * fVar64 + fVar5 * fVar65 + fVar8 * fVar66 + fVar11;
        auVar72._28_4_ = fVar2 * fVar67 + fVar5 * fVar68 + fVar8 * fVar69 + fVar11;
        fVar2 = *(float *)(param_5 + 0x34 + uVar40);
        auVar76._0_4_ = fVar3 * fVar14 + fVar6 * fVar15 + fVar9 * fVar16 + fVar2;
        auVar76._4_4_ = fVar3 * fVar17 + fVar6 * fVar18 + fVar9 * fVar19 + fVar2;
        auVar76._8_4_ = fVar3 * fVar20 + fVar6 * fVar21 + fVar9 * fVar22 + fVar2;
        auVar76._12_4_ = fVar3 * fVar23 + fVar6 * fVar24 + fVar9 * fVar25 + fVar2;
        auVar76._16_4_ = fVar3 * fVar26 + fVar6 * fVar27 + fVar9 * fVar28 + fVar2;
        auVar76._20_4_ = fVar3 * fVar29 + fVar6 * fVar58 + fVar9 * fVar63 + fVar2;
        auVar76._24_4_ = fVar3 * fVar64 + fVar6 * fVar65 + fVar9 * fVar66 + fVar2;
        auVar76._28_4_ = fVar3 * fVar67 + fVar6 * fVar68 + fVar9 * fVar69 + fVar2;
        fVar2 = *(float *)(param_5 + 0x38 + uVar40);
        auVar78._0_4_ = fVar4 * fVar14 + fVar7 * fVar15 + fVar10 * fVar16 + fVar2;
        auVar78._4_4_ = fVar4 * fVar17 + fVar7 * fVar18 + fVar10 * fVar19 + fVar2;
        auVar78._8_4_ = fVar4 * fVar20 + fVar7 * fVar21 + fVar10 * fVar22 + fVar2;
        auVar78._12_4_ = fVar4 * fVar23 + fVar7 * fVar24 + fVar10 * fVar25 + fVar2;
        auVar78._16_4_ = fVar4 * fVar26 + fVar7 * fVar27 + fVar10 * fVar28 + fVar2;
        auVar78._20_4_ = fVar4 * fVar29 + fVar7 * fVar58 + fVar10 * fVar63 + fVar2;
        auVar78._24_4_ = fVar4 * fVar64 + fVar7 * fVar65 + fVar10 * fVar66 + fVar2;
        auVar78._28_4_ = fVar4 * fVar67 + fVar7 * fVar68 + fVar10 * fVar69 + fVar2;
        auVar59 = vmaskmovps_avx(auVar60,auVar72);
        auVar71 = vmaskmovps_avx(auVar60,auVar76);
        auVar75 = vmaskmovps_avx(auVar60,auVar78);
        uVar39 = vmovmskps_avx(auVar60);
        uVar34 = uVar34 & ~(ulonglong)uVar39;
      } while (uVar34 != 0);
      local_160 = auVar71._0_16_;
      auVar55._16_16_ = local_160;
      auVar55._0_16_ = auVar59._0_16_;
      auVar51 = vshufpd_avx(auVar59,auVar55,2);
      auVar52 = vperm2f128_avx(auVar75,auVar75,1);
      auVar48 = vshufps_avx(auVar75,auVar52,0x30);
      auVar48 = vshufps_avx(auVar52,auVar48,0x29);
      auStack_150 = auVar71._16_16_;
      auVar12 = auStack_150;
      auVar70 = vshufpd_avx(local_160,auStack_150,1);
      auVar48 = vblendps_avx(auVar48,ZEXT1632(auVar70),7);
      auVar77 = vperm2f128_avx(auVar48,auVar48,1);
      auVar80 = vunpcklpd_avx(auVar77,auVar75);
      auVar52 = vshufps_avx(auVar52,auVar80,0x24);
      auVar80 = vperm2f128_avx(auVar51,auVar51,1);
      auVar80 = vblendps_avx(auVar51,auVar80,0x44);
      auVar80 = vpermilps_avx(auVar80,auVar46);
      auVar80 = vblendps_avx(auVar80,auVar52,0xa4);
      auStack_150._12_4_ = auVar71._28_4_;
      auVar52._20_4_ = auStack_150._12_4_;
      auVar52._16_4_ = auStack_150._12_4_;
      auVar52._24_4_ = auStack_150._12_4_;
      auVar52._28_4_ = auStack_150._12_4_;
      auStack_170 = auVar59._16_16_;
      *(undefined1 (*) [16])(param_1 + 0x10 + uVar37 * 0xc) = auVar80._16_16_;
      *(undefined1 (*) [16])(param_1 + uVar37 * 0xc) = auVar80._0_16_;
      auVar80 = vpermilps_avx(auVar48,auVar49);
      auVar48 = vshufps_avx(auVar77,auVar77,0xa9);
      auVar48 = vblendps_avx(auVar48,auVar80,0x44);
      auVar80 = vshufpd_avx(auVar51,auVar51,1);
      auVar48 = vblendps_avx(auVar48,auVar80,0x92);
      *(undefined1 (*) [16])(param_1 + 0x30 + uVar37 * 0xc) = auVar48._16_16_;
      *(undefined1 (*) [16])(param_1 + 0x20 + uVar37 * 0xc) = auVar48._0_16_;
      auVar70 = vshufps_avx(auStack_170,auVar12,0x9e);
      auVar52._0_16_ = auVar70;
      auVar80 = vperm2f128_avx(auVar75,ZEXT1632(auVar70),0x21);
      auVar48 = vblendps_avx(auVar52,auVar75,0xe0);
      auVar80 = vshufps_avx(auVar80,auVar48,0x21);
      auVar48 = vshufps_avx(auVar80,auVar48,0xc2);
      *(undefined1 (*) [16])(param_1 + 0x50 + uVar37 * 0xc) = auVar48._16_16_;
      *(undefined1 (*) [16])(param_1 + 0x40 + uVar37 * 0xc) = auVar48._0_16_;
      uVar37 = uVar37 + 8;
    } while (uVar37 < (uVar35 & 0xfffffff8));
    uVar34 = uVar37 & 0xffffffff;
    if ((int)param_2 <= (int)uVar37) {
      return;
    }
  }
  auVar70 = vpshufd_avx(ZEXT416((uint)uVar37),0);
  auVar42._16_16_ = auVar70;
  auVar42._0_16_ = auVar70;
  auVar30 = vpshufd_avx(ZEXT416(param_2),0);
  lVar32 = uVar34 * 0xc;
  auVar70 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar32);
  auVar12 = *(undefined1 (*) [16])(param_6 + 0x20 + lVar32);
  auVar41 = *(undefined1 (*) [16])(param_6 + 0x30 + lVar32);
  auVar53._16_16_ = auVar70;
  auVar53._0_16_ = *(undefined1 (*) [16])(param_6 + lVar32);
  auVar61._16_16_ = auVar41;
  auVar61._0_16_ = auVar12;
  auVar43 = *(undefined1 (*) [16])(param_6 + 0x50 + lVar32);
  auVar13 = *(undefined1 (*) [16])(param_6 + 0x40 + lVar32);
  auVar79._16_16_ = auVar43;
  auVar79._0_16_ = auVar13;
  auVar44._16_16_ = *(undefined1 (*) [16])(param_6 + lVar32);
  auVar44._0_16_ = auVar70;
  auVar44 = vblendps_avx(auVar53,auVar44,0x24);
  auVar44 = vpermilps_avx(auVar44,
                          ___ymm_0000000000000007000000040000000500000000000000020000000300000000);
  uVar1 = *(undefined4 *)(param_6 + 0x28 + lVar32);
  auVar81._20_4_ = uVar1;
  auVar81._16_4_ = uVar1;
  auVar81._24_4_ = uVar1;
  auVar81._28_4_ = uVar1;
  uVar1 = *(undefined4 *)(param_6 + 0x24 + lVar32);
  auVar81._4_4_ = uVar1;
  auVar81._0_4_ = uVar1;
  auVar81._8_4_ = uVar1;
  auVar81._12_4_ = uVar1;
  auVar44 = vblendps_avx(auVar44,auVar81,0x88);
  auVar73._16_16_ = auVar13;
  auVar73._0_16_ = auVar43;
  auVar81 = vblendps_avx(auVar73,auVar79,0x44);
  auVar81 = vpermilps_avx(auVar81,
                          ___ymm_0000000600000007000000040000000000000001000000020000000000000000);
  uVar1 = *(undefined4 *)(param_6 + 0x34 + lVar32);
  auVar46._20_4_ = uVar1;
  auVar46._16_4_ = uVar1;
  auVar46._24_4_ = uVar1;
  auVar46._28_4_ = uVar1;
  auVar41 = vshufps_avx(auVar41,auVar41,0xec);
  auVar46._0_16_ = auVar41;
  auVar81 = vblendps_avx(auVar81,auVar46,0x13);
  auVar46 = vblendps_avx(auVar61,auVar53,0x24);
  auVar49._16_16_ = auVar12;
  auVar49._0_16_ = auVar70;
  auVar46 = vshufps_avx(auVar49,auVar46,0x21);
  auVar46 = vshufps_avx(auVar46,auVar61,0xc2);
  auVar49 = vshufps_avx(auVar73,auVar79,0xc4);
  lVar38 = (longlong)(int)((uint)uVar37 * 2);
  auVar41 = SUB3216(auVar42 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar43 = SUB3216(auVar42 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar70 = vpcmpgtd_avx(auVar30,auVar43);
  auVar12 = vpcmpgtd_avx(auVar30,auVar41);
  auVar56._16_16_ = auVar70;
  auVar56._0_16_ = auVar12;
  uVar35 = vmovmskps_avx(auVar56);
  if ((~(byte)uVar35 & 0x81) == 0) {
    auVar70 = *(undefined1 (*) [16])(param_4 + lVar38);
  }
  else {
    puVar36 = (ushort *)(param_4 + lVar38);
    auVar12 = vpcmpgtd_avx(auVar30,auVar43);
    auVar70 = vpcmpgtd_avx(auVar30,auVar41);
    auVar62._16_16_ = auVar12;
    auVar62._0_16_ = auVar70;
    uVar39 = vmovmskps_avx(auVar62);
    if ((uVar39 & 1) != 0) {
      auVar70 = ZEXT216(*puVar36);
    }
    if ((uVar39 & 2) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[1],1);
    }
    if ((uVar39 & 4) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[2],2);
    }
    if ((uVar39 & 8) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[3],3);
    }
    if ((uVar39 & 0x10) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[4],4);
    }
    if ((uVar39 & 0x20) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[5],5);
    }
    if ((uVar39 & 0x40) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[6],6);
    }
    if ((uVar39 & 0x80) != 0) {
      auVar70 = vpinsrw_avx(auVar70,(uint)puVar36[7],7);
    }
  }
  pauVar33 = (undefined1 (*) [16])(param_1 + lVar32);
  auVar48 = vperm2f128_avx(auVar44,auVar81,0x31);
  auVar46 = vblendps_avx(auVar46,auVar49,0xe0);
  auVar31 = vpunpckhwd_avx(auVar70,ZEXT816(0) << 0x20);
  auVar13 = vpmovzxwd_avx(auVar70);
  local_120._16_16_ = auVar31;
  local_120._0_16_ = auVar13;
  uVar37 = (ulonglong)(uVar35 & 0xff);
  auVar70 = vpcmpgtd_avx(auVar30,auVar43);
  auVar12 = vpcmpgtd_avx(auVar30,auVar41);
  do {
    if (uVar37 == 0) {
      uVar35 = 0;
    }
    else {
      uVar35 = 0;
      for (uVar34 = uVar37; (uVar34 & 1) == 0; uVar34 = uVar34 >> 1 | 0x8000000000000000) {
        uVar35 = uVar35 + 1;
      }
    }
    auVar43 = vpshufd_avx(ZEXT416(*(uint *)(local_120 + (ulonglong)(uVar35 & 7) * 4)),0);
    auVar41 = vpcmpeqd_avx(auVar43,auVar31);
    auVar43 = vpcmpeqd_avx(auVar43,auVar13);
    auVar50._0_4_ = auVar43._0_4_ & auVar12._0_4_;
    auVar50._4_4_ = auVar43._4_4_ & auVar12._4_4_;
    auVar50._8_4_ = auVar43._8_4_ & auVar12._8_4_;
    auVar50._12_4_ = auVar43._12_4_ & auVar12._12_4_;
    auVar50._16_4_ = auVar41._0_4_ & auVar70._0_4_;
    auVar50._20_4_ = auVar41._4_4_ & auVar70._4_4_;
    auVar50._24_4_ = auVar41._8_4_ & auVar70._8_4_;
    auVar50._28_4_ = auVar41._12_4_ & auVar70._12_4_;
    uVar34 = (ulonglong)(*(uint *)(local_120 + (ulonglong)(uVar35 & 7) * 4) << 6);
    fVar2 = *(float *)(param_5 + uVar34);
    fVar58 = auVar44._0_4_;
    fVar63 = auVar44._4_4_;
    fVar64 = auVar44._8_4_;
    fVar65 = auVar44._12_4_;
    fVar66 = auVar81._0_4_;
    fVar67 = auVar81._4_4_;
    fVar68 = auVar81._8_4_;
    fVar69 = auVar81._12_4_;
    fVar3 = *(float *)(param_5 + 4 + uVar34);
    fVar4 = *(float *)(param_5 + 8 + uVar34);
    fVar5 = *(float *)(param_5 + 0x10 + uVar34);
    fVar14 = auVar48._0_4_;
    fVar16 = auVar48._4_4_;
    fVar18 = auVar48._8_4_;
    fVar20 = auVar48._12_4_;
    fVar22 = auVar48._16_4_;
    fVar24 = auVar48._20_4_;
    fVar26 = auVar48._24_4_;
    fVar28 = auVar48._28_4_;
    fVar6 = *(float *)(param_5 + 0x14 + uVar34);
    fVar7 = *(float *)(param_5 + 0x18 + uVar34);
    fVar8 = *(float *)(param_5 + 0x20 + uVar34);
    fVar15 = auVar46._0_4_;
    fVar17 = auVar46._4_4_;
    fVar19 = auVar46._8_4_;
    fVar21 = auVar46._12_4_;
    fVar23 = auVar46._16_4_;
    fVar25 = auVar46._20_4_;
    fVar27 = auVar46._24_4_;
    fVar29 = auVar46._28_4_;
    fVar9 = *(float *)(param_5 + 0x24 + uVar34);
    fVar10 = *(float *)(param_5 + 0x28 + uVar34);
    fVar11 = *(float *)(param_5 + 0x30 + uVar34);
    auVar54._0_4_ = fVar8 * fVar15 + fVar11 + fVar5 * fVar14 + fVar58 * fVar2;
    auVar54._4_4_ = fVar8 * fVar17 + fVar11 + fVar5 * fVar16 + fVar63 * fVar2;
    auVar54._8_4_ = fVar8 * fVar19 + fVar11 + fVar5 * fVar18 + fVar64 * fVar2;
    auVar54._12_4_ = fVar8 * fVar21 + fVar11 + fVar5 * fVar20 + fVar65 * fVar2;
    auVar54._16_4_ = fVar8 * fVar23 + fVar11 + fVar5 * fVar22 + fVar66 * fVar2;
    auVar54._20_4_ = fVar8 * fVar25 + fVar11 + fVar5 * fVar24 + fVar67 * fVar2;
    auVar54._24_4_ = fVar8 * fVar27 + fVar11 + fVar5 * fVar26 + fVar68 * fVar2;
    auVar54._28_4_ = fVar8 * fVar29 + fVar11 + fVar5 * fVar28 + fVar69 * fVar2;
    fVar2 = *(float *)(param_5 + 0x34 + uVar34);
    auVar57._0_4_ = fVar9 * fVar15 + fVar2 + fVar6 * fVar14 + fVar58 * fVar3;
    auVar57._4_4_ = fVar9 * fVar17 + fVar2 + fVar6 * fVar16 + fVar63 * fVar3;
    auVar57._8_4_ = fVar9 * fVar19 + fVar2 + fVar6 * fVar18 + fVar64 * fVar3;
    auVar57._12_4_ = fVar9 * fVar21 + fVar2 + fVar6 * fVar20 + fVar65 * fVar3;
    auVar57._16_4_ = fVar9 * fVar23 + fVar2 + fVar6 * fVar22 + fVar66 * fVar3;
    auVar57._20_4_ = fVar9 * fVar25 + fVar2 + fVar6 * fVar24 + fVar67 * fVar3;
    auVar57._24_4_ = fVar9 * fVar27 + fVar2 + fVar6 * fVar26 + fVar68 * fVar3;
    auVar57._28_4_ = fVar9 * fVar29 + fVar2 + fVar6 * fVar28 + fVar69 * fVar3;
    fVar2 = *(float *)(param_5 + 0x38 + uVar34);
    auVar74._0_4_ = fVar58 * fVar4 + fVar7 * fVar14 + fVar10 * fVar15 + fVar2;
    auVar74._4_4_ = fVar63 * fVar4 + fVar7 * fVar16 + fVar10 * fVar17 + fVar2;
    auVar74._8_4_ = fVar64 * fVar4 + fVar7 * fVar18 + fVar10 * fVar19 + fVar2;
    auVar74._12_4_ = fVar65 * fVar4 + fVar7 * fVar20 + fVar10 * fVar21 + fVar2;
    auVar74._16_4_ = fVar66 * fVar4 + fVar7 * fVar22 + fVar10 * fVar23 + fVar2;
    auVar74._20_4_ = fVar67 * fVar4 + fVar7 * fVar24 + fVar10 * fVar25 + fVar2;
    auVar74._24_4_ = fVar68 * fVar4 + fVar7 * fVar26 + fVar10 * fVar27 + fVar2;
    auVar74._28_4_ = fVar69 * fVar4 + fVar7 * fVar28 + fVar10 * fVar29 + fVar2;
    auVar49 = vmaskmovps_avx(auVar50,auVar54);
    auVar80 = vmaskmovps_avx(auVar50,auVar57);
    auVar51 = vmaskmovps_avx(auVar50,auVar74);
    uVar35 = vmovmskps_avx(auVar50);
    uVar37 = uVar37 & ~(ulonglong)uVar35;
  } while (uVar37 != 0);
  local_1c0 = auVar80._0_16_;
  auVar47._16_16_ = local_1c0;
  auVar47._0_16_ = auVar49._0_16_;
  auVar46 = vshufpd_avx(auVar49,auVar47,2);
  auVar48 = vperm2f128_avx(auVar51,auVar51,1);
  auVar44 = vshufps_avx(auVar51,auVar48,0x30);
  auVar44 = vshufps_avx(auVar48,auVar44,0x29);
  auStack_1b0 = auVar80._16_16_;
  auVar12 = auStack_1b0;
  auVar70 = vshufpd_avx(local_1c0,auStack_1b0,1);
  auVar44 = vblendps_avx(auVar44,ZEXT1632(auVar70),7);
  auVar59 = vperm2f128_avx(auVar44,auVar44,1);
  auVar81 = vunpcklpd_avx(auVar59,auVar51);
  auVar48 = vshufps_avx(auVar48,auVar81,0x24);
  auVar81 = vperm2f128_avx(auVar46,auVar46,1);
  auVar81 = vblendps_avx(auVar46,auVar81,0x44);
  auVar81 = vpermilps_avx(auVar81,
                          ___ymm_0000000000000006000000000000000700000001000000000000000200000000);
  auVar81 = vblendps_avx(auVar81,auVar48,0xa4);
  auStack_1b0._12_4_ = auVar80._28_4_;
  auVar45._20_4_ = auStack_1b0._12_4_;
  auVar45._16_4_ = auStack_1b0._12_4_;
  auVar45._24_4_ = auStack_1b0._12_4_;
  auVar45._28_4_ = auStack_1b0._12_4_;
  auStack_1d0 = auVar49._16_16_;
  pauVar33[1] = auVar81._16_16_;
  *pauVar33 = auVar81._0_16_;
  auVar81 = vpermilps_avx(auVar44,
                          ___ymm_0000000000000007000000000000000000000000000000010000000000000000);
  auVar44 = vshufps_avx(auVar59,auVar59,0xa9);
  auVar44 = vblendps_avx(auVar44,auVar81,0x44);
  auVar81 = vshufpd_avx(auVar46,auVar46,1);
  auVar44 = vblendps_avx(auVar44,auVar81,0x92);
  pauVar33[3] = auVar44._16_16_;
  pauVar33[2] = auVar44._0_16_;
  auVar70 = vshufps_avx(auStack_1d0,auVar12,0x9e);
  auVar45._0_16_ = auVar70;
  auVar81 = vperm2f128_avx(auVar51,ZEXT1632(auVar70),0x21);
  auVar44 = vblendps_avx(auVar45,auVar51,0xe0);
  auVar81 = vshufps_avx(auVar81,auVar44,0x21);
  auVar44 = vshufps_avx(auVar81,auVar44,0xc2);
  pauVar33[5] = auVar44._16_16_;
  pauVar33[4] = auVar44._0_16_;
  return;
}

