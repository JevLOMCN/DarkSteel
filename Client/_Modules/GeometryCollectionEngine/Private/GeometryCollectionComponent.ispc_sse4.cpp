// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 4

// BoxCalcBoundsFromGeometryGroup___un_3C_Cuni_3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_sse4 @ 140a77ec0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromGeometryGroup___un_3C_Cuni_3E_un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,double *param_5,
               undefined1 (*param_6) [16],uint param_7,undefined1 (*param_8) [16])

{
  longlong lVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
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
  undefined1 uVar43;
  uint uVar44;
  undefined4 uVar45;
  uint uVar46;
  longlong lVar47;
  longlong lVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  char cVar51;
  byte bVar52;
  uint uVar53;
  longlong lVar54;
  longlong lVar55;
  uint uVar56;
  char cVar57;
  longlong lVar58;
  byte bVar59;
  longlong lVar60;
  int iVar61;
  bool bVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar92;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar93;
  undefined8 uVar94;
  uint uVar106;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar107;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  uint uVar105;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  double dVar108;
  int iVar113;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar112;
  undefined1 auVar111 [16];
  double dVar114;
  double dVar116;
  undefined1 auVar115 [16];
  double dVar117;
  double dVar118;
  undefined1 auVar119 [16];
  double dVar121;
  double dVar122;
  undefined1 auVar120 [16];
  double dVar123;
  double dVar124;
  double dVar128;
  double dVar129;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  double dVar130;
  double dVar132;
  undefined1 auVar131 [16];
  double dVar133;
  undefined1 auVar134 [16];
  double dVar138;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  double dVar139;
  undefined1 auVar140 [16];
  double dVar143;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  double dVar144;
  double dVar147;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  double dVar148;
  double dVar149;
  double dVar151;
  double dVar152;
  undefined1 auVar150 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  double dVar155;
  double dVar156;
  double dVar163;
  double dVar164;
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  double dVar165;
  double dVar172;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  double dVar173;
  double dVar174;
  double dVar175;
  double dVar176;
  double dVar177;
  double dVar178;
  double dVar182;
  double dVar183;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  double dVar184;
  undefined1 auVar181 [16];
  undefined1 local_11f0 [16];
  undefined1 local_11e0 [16];
  undefined1 local_11d0 [16];
  undefined1 local_11c0 [16];
  undefined1 local_11b0 [16];
  undefined1 local_11a0 [16];
  undefined1 local_1190 [16];
  undefined1 local_1180 [16];
  undefined1 local_1170 [16];
  undefined1 local_1160 [16];
  undefined1 local_1150 [16];
  undefined1 local_1140 [16];
  undefined1 local_1130 [16];
  undefined1 local_1120 [16];
  undefined1 local_1110 [16];
  undefined1 local_1100 [16];
  undefined1 local_10f0 [16];
  undefined1 local_10e0 [16];
  undefined1 local_10d0 [16];
  undefined1 local_10c0 [16];
  undefined1 local_10b0 [16];
  undefined1 local_10a0 [16];
  undefined1 local_1090 [16];
  undefined1 local_1080 [32];
  undefined1 local_1060 [16];
  undefined1 local_1050 [16];
  undefined1 local_1040 [16];
  undefined1 local_1030 [16];
  undefined1 local_1020 [16];
  undefined1 local_1010 [32];
  undefined1 local_ff0 [16];
  undefined1 local_fd0 [16];
  undefined1 local_fc0 [16];
  undefined1 local_fa0 [16];
  undefined1 local_f90 [16];
  undefined1 local_f80 [16];
  undefined1 local_f10 [16];
  undefined1 local_f00 [16];
  undefined1 local_ef0 [16];
  undefined1 local_ec0 [16];
  undefined1 local_df0 [16];
  undefined1 local_de0 [16];
  undefined1 local_dd0 [16];
  undefined1 local_dc0 [16];
  double local_d40 [19];
  double dStack_ca8;
  double local_ca0;
  double dStack_c98;
  double local_c90;
  double dStack_c88;
  double local_c60;
  double dStack_c58;
  double local_c50;
  double dStack_c48;
  double local_c40;
  double dStack_c38;
  double local_c30;
  double dStack_c28;
  double local_c20;
  double dStack_c18;
  double local_c10;
  double dStack_c08;
  double local_be0;
  double dStack_bd8;
  double local_bd0;
  double dStack_bc8;
  double local_bc0;
  double dStack_bb8;
  double local_bb0;
  double dStack_ba8;
  double local_ba0;
  double dStack_b98;
  double local_b90;
  double dStack_b88;
  double local_b60;
  double dStack_b58;
  double local_b50;
  double dStack_b48;
  double local_b40;
  double dStack_b38;
  double local_b30;
  double dStack_b28;
  double local_b20;
  double dStack_b18;
  double local_b10;
  double dStack_b08;
  undefined8 local_ad0;
  double local_ac8 [2];
  double local_ab8 [3];
  char local_aa0 [8];
  undefined8 local_a98;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined1 local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined1 local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined1 local_9f8;
  undefined8 local_9f0;
  double adStack_9e8 [2];
  double local_9d8 [3];
  char local_9c0 [8];
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 local_990;
  undefined1 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  double adStack_960 [2];
  undefined1 local_950 [8];
  double local_948 [6];
  undefined1 local_918 [8];
  undefined1 local_910 [16];
  double local_900 [7];
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  double local_760 [19];
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  double local_560 [19];
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  double local_360 [19];
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  
  uVar44 = movmskps((int)param_8,*param_8);
  uVar56 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar56 = param_7;
  }
  uVar56 = uVar56 & 0xfffffffc;
  if (uVar44 == 0xf) {
    if ((int)uVar56 < 1) {
      local_10d0 = ZEXT816(0);
      uVar44 = 0;
      auVar119 = (undefined1  [16])0x0;
      local_1040 = ZEXT816(0);
      local_10f0 = ZEXT816(0);
      local_1050 = ZEXT816(0);
      local_1100 = ZEXT816(0);
      local_1060 = ZEXT816(0);
      local_1110 = ZEXT816(0);
      local_f80 = ZEXT816(0);
      local_1120 = ZEXT816(0);
      local_f90 = ZEXT816(0);
      local_10c0 = ZEXT816(0);
      local_fa0 = ZEXT816(0);
      uVar49 = 0xf;
    }
    else {
      uVar44 = 0;
      local_10c0 = ZEXT816(0);
      local_fa0 = ZEXT816(0);
      local_1120 = ZEXT816(0);
      local_f90 = ZEXT816(0);
      local_1110 = ZEXT816(0);
      local_f80 = ZEXT816(0);
      local_1100 = ZEXT816(0);
      local_1060 = ZEXT816(0);
      local_10f0 = ZEXT816(0);
      local_1050 = ZEXT816(0);
      auVar119 = (undefined1  [16])0x0;
      local_1040 = ZEXT816(0);
      local_10d0 = ZEXT816(0);
      do {
        piVar2 = (int *)(param_2 + (ulonglong)(uVar44 * 4));
        uVar49 = (ulonglong)(uVar44 * 7);
        iVar113 = piVar2[3] << 2;
        auVar135._8_4_ = 0xffffffff;
        auVar135._0_8_ = 0xffffffffffffffff;
        auVar135._12_4_ = 0xffffffff;
        auVar140._0_4_ = -(uint)(*(int *)(param_1 + (*piVar2 << 2)) == -1);
        auVar140._4_4_ = -(uint)(*(int *)(param_1 + piVar2[1] * 4) == -1);
        auVar140._8_4_ = -(uint)(*(int *)(param_1 + (piVar2[2] << 2)) == -1);
        auVar140._12_4_ = -(uint)(*(int *)(param_1 + iVar113) == -1);
        auVar111[0] = -(*(char *)(param_4 + 0x30 + uVar49 * 8) == '\0');
        auVar111[1] = -(*(char *)(param_4 + 0x68 + uVar49 * 8) == '\0');
        auVar111[2] = -(*(char *)(param_4 + 0xa0 + uVar49 * 8) == '\0');
        auVar111[3] = -(*(char *)(param_4 + 0xd8 + uVar49 * 8) == '\0');
        auVar111[4] = 0xff;
        auVar111[5] = 0xff;
        auVar111[6] = 0xff;
        auVar111[7] = 0xff;
        auVar111[8] = 0xff;
        auVar111[9] = 0xff;
        auVar111[10] = 0xff;
        auVar111[0xb] = 0xff;
        auVar111[0xc] = 0xff;
        auVar111[0xd] = 0xff;
        auVar111[0xe] = 0xff;
        auVar111[0xf] = 0xff;
        auVar111 = pmovsxbd(auVar111 ^ auVar135,auVar111 ^ auVar135);
        auVar111 = ~auVar140 & auVar111;
        iVar113 = movmskps(iVar113,auVar111);
        if (iVar113 != 0) {
          dVar108 = *(double *)(param_4 + 0x70 + uVar49 * 8);
          dVar112 = *(double *)(param_4 + 0xa8 + uVar49 * 8);
          dVar114 = *(double *)(param_4 + uVar49 * 8);
          dVar116 = *(double *)(param_4 + 8 + uVar49 * 8);
          dVar118 = *(double *)(param_4 + 0x38 + uVar49 * 8);
          dVar122 = *(double *)(param_4 + 0x78 + uVar49 * 8);
          dVar124 = *(double *)(param_4 + 0xb0 + uVar49 * 8);
          dVar129 = *(double *)(param_4 + 0x40 + uVar49 * 8);
          dVar133 = *(double *)(param_4 + 0x10 + uVar49 * 8);
          dVar138 = *(double *)(param_4 + 0x80 + uVar49 * 8);
          dVar143 = *(double *)(param_4 + 0xb8 + uVar49 * 8);
          dVar130 = *(double *)(param_4 + 0x18 + uVar49 * 8);
          dVar144 = *(double *)(param_4 + 0x48 + uVar49 * 8);
          dVar132 = *(double *)(param_4 + 0x88 + uVar49 * 8);
          dVar139 = *(double *)(param_4 + 0xc0 + uVar49 * 8);
          dVar147 = *(double *)(param_4 + 0x50 + uVar49 * 8);
          dVar149 = *(double *)(param_4 + 0x90 + uVar49 * 8);
          dVar152 = *(double *)(param_4 + 200 + uVar49 * 8);
          dVar156 = *(double *)(param_4 + 0x20 + uVar49 * 8);
          dVar164 = *(double *)(param_4 + 0x58 + uVar49 * 8);
          dVar174 = *(double *)(param_4 + 0x98 + uVar49 * 8);
          dVar176 = *(double *)(param_4 + 0xd0 + uVar49 * 8);
          dVar178 = *(double *)(param_4 + 0x28 + uVar49 * 8);
          dVar183 = *(double *)(param_4 + 0x60 + uVar49 * 8);
          auVar153._0_4_ = *piVar2 << 7;
          auVar153._4_4_ = piVar2[1] << 7;
          auVar153._8_4_ = piVar2[2] << 7;
          auVar153._12_4_ = piVar2[3] << 7;
          auVar153 = auVar153 & auVar111;
          lVar48 = param_3 + auVar153._0_4_;
          lVar47 = param_3 + auVar153._4_4_;
          lVar1 = param_3 + auVar153._8_4_;
          auVar135 = auVar111 & ___xmm_00000008000000080000000800000008;
          auVar140 = auVar111 & ___xmm_00000010000000100000001000000010;
          auVar96 = auVar111 & ___xmm_00000018000000180000001800000018;
          auVar66 = auVar111 & ___xmm_00000020000000200000002000000020;
          auVar67 = auVar111 & ___xmm_00000028000000280000002800000028;
          auVar68 = auVar111 & ___xmm_00000030000000300000003000000030;
          auVar69 = auVar111 & ___xmm_00000038000000380000003800000038;
          auVar70 = auVar111 & ___xmm_00000040000000400000004000000040;
          auVar71 = auVar111 & ___xmm_00000048000000480000004800000048;
          auVar72 = auVar111 & ___xmm_00000050000000500000005000000050;
          auVar73 = auVar111 & ___xmm_00000058000000580000005800000058;
          auVar74 = auVar111 & ___xmm_00000060000000600000006000000060;
          auVar75 = auVar111 & ___xmm_00000068000000680000006800000068;
          auVar76 = auVar111 & ___xmm_00000070000000700000007000000070;
          lVar55 = param_3 + auVar153._12_4_;
          auVar77 = auVar111 & ___xmm_00000078000000780000007800000078;
          local_360[0xe] = (double)*(undefined8 *)(param_3 + auVar153._8_4_);
          local_360[0xf] = (double)*(undefined8 *)(param_3 + auVar153._12_4_);
          local_360[0xc] = (double)*(undefined8 *)(param_3 + auVar153._0_4_);
          local_360[0xd] = (double)*(undefined8 *)(param_3 + auVar153._4_4_);
          local_360[0x12] = (double)*(undefined8 *)((ulonglong)auVar135._8_4_ + lVar1);
          uStack_2c8 = *(undefined8 *)((ulonglong)auVar135._12_4_ + lVar55);
          local_360[0x10] = (double)*(undefined8 *)((ulonglong)auVar135._0_4_ + lVar48);
          local_360[0x11] = (double)*(undefined8 *)((ulonglong)auVar135._4_4_ + lVar47);
          local_2b0 = *(undefined8 *)((ulonglong)auVar140._8_4_ + lVar1);
          uStack_2a8 = *(undefined8 *)((ulonglong)auVar140._12_4_ + lVar55);
          local_2c0 = *(undefined8 *)((ulonglong)auVar140._0_4_ + lVar48);
          uStack_2b8 = *(undefined8 *)((ulonglong)auVar140._4_4_ + lVar47);
          local_290 = *(undefined8 *)((ulonglong)auVar96._8_4_ + lVar1);
          uStack_288 = *(undefined8 *)((ulonglong)auVar96._12_4_ + lVar55);
          local_2a0 = *(undefined8 *)((ulonglong)auVar96._0_4_ + lVar48);
          uStack_298 = *(undefined8 *)((ulonglong)auVar96._4_4_ + lVar47);
          local_270 = *(undefined8 *)((ulonglong)auVar66._8_4_ + lVar1);
          uStack_268 = *(undefined8 *)((ulonglong)auVar66._12_4_ + lVar55);
          local_280 = *(undefined8 *)((ulonglong)auVar66._0_4_ + lVar48);
          uStack_278 = *(undefined8 *)((ulonglong)auVar66._4_4_ + lVar47);
          local_250 = *(undefined8 *)((ulonglong)auVar67._8_4_ + lVar1);
          uStack_248 = *(undefined8 *)((ulonglong)auVar67._12_4_ + lVar55);
          local_260 = *(undefined8 *)((ulonglong)auVar67._0_4_ + lVar48);
          uStack_258 = *(undefined8 *)((ulonglong)auVar67._4_4_ + lVar47);
          local_230 = *(undefined8 *)((ulonglong)auVar68._8_4_ + lVar1);
          uStack_228 = *(undefined8 *)((ulonglong)auVar68._12_4_ + lVar55);
          local_240 = *(undefined8 *)((ulonglong)auVar68._0_4_ + lVar48);
          uStack_238 = *(undefined8 *)((ulonglong)auVar68._4_4_ + lVar47);
          local_210 = *(undefined8 *)((ulonglong)auVar69._8_4_ + lVar1);
          uStack_208 = *(undefined8 *)((ulonglong)auVar69._12_4_ + lVar55);
          local_220 = *(undefined8 *)((ulonglong)auVar69._0_4_ + lVar48);
          uStack_218 = *(undefined8 *)((ulonglong)auVar69._4_4_ + lVar47);
          local_1f0 = *(undefined8 *)((ulonglong)auVar70._8_4_ + lVar1);
          uStack_1e8 = *(undefined8 *)((ulonglong)auVar70._12_4_ + lVar55);
          local_200 = *(undefined8 *)((ulonglong)auVar70._0_4_ + lVar48);
          uStack_1f8 = *(undefined8 *)((ulonglong)auVar70._4_4_ + lVar47);
          local_1d0 = *(undefined8 *)((ulonglong)auVar71._8_4_ + lVar1);
          uStack_1c8 = *(undefined8 *)((ulonglong)auVar71._12_4_ + lVar55);
          local_1e0 = *(undefined8 *)((ulonglong)auVar71._0_4_ + lVar48);
          uStack_1d8 = *(undefined8 *)((ulonglong)auVar71._4_4_ + lVar47);
          local_1b0 = *(undefined8 *)((ulonglong)auVar72._8_4_ + lVar1);
          uStack_1a8 = *(undefined8 *)((ulonglong)auVar72._12_4_ + lVar55);
          local_1c0 = *(undefined8 *)((ulonglong)auVar72._0_4_ + lVar48);
          uStack_1b8 = *(undefined8 *)((ulonglong)auVar72._4_4_ + lVar47);
          local_190 = *(undefined8 *)((ulonglong)auVar73._8_4_ + lVar1);
          uStack_188 = *(undefined8 *)((ulonglong)auVar73._12_4_ + lVar55);
          local_1a0 = *(undefined8 *)((ulonglong)auVar73._0_4_ + lVar48);
          uStack_198 = *(undefined8 *)((ulonglong)auVar73._4_4_ + lVar47);
          local_170 = *(undefined8 *)((ulonglong)auVar74._8_4_ + lVar1);
          uStack_168 = *(undefined8 *)((ulonglong)auVar74._12_4_ + lVar55);
          local_180 = *(undefined8 *)((ulonglong)auVar74._0_4_ + lVar48);
          uStack_178 = *(undefined8 *)((ulonglong)auVar74._4_4_ + lVar47);
          bVar59 = (char)((char)iVar113 << 4) >> 4;
          uVar49 = (ulonglong)CONCAT31((int3)((uint)iVar113 >> 8),bVar59);
          local_150 = *(undefined8 *)((ulonglong)auVar75._8_4_ + lVar1);
          uStack_148 = *(undefined8 *)((ulonglong)auVar75._12_4_ + lVar55);
          local_160 = *(undefined8 *)((ulonglong)auVar75._0_4_ + lVar48);
          uStack_158 = *(undefined8 *)((ulonglong)auVar75._4_4_ + lVar47);
          local_130 = *(undefined8 *)((ulonglong)auVar76._8_4_ + lVar1);
          uStack_128 = *(undefined8 *)((ulonglong)auVar76._12_4_ + lVar55);
          local_140 = *(undefined8 *)((ulonglong)auVar76._0_4_ + lVar48);
          uStack_138 = *(undefined8 *)((ulonglong)auVar76._4_4_ + lVar47);
          local_110 = *(undefined8 *)((ulonglong)auVar77._8_4_ + lVar1);
          uStack_108 = *(undefined8 *)((ulonglong)auVar77._12_4_ + lVar55);
          local_120 = *(undefined8 *)((ulonglong)auVar77._0_4_ + lVar48);
          uStack_118 = *(undefined8 *)((ulonglong)auVar77._4_4_ + lVar47);
          dVar63 = *param_5;
          dVar92 = *param_5;
          dVar107 = param_5[4];
          dVar93 = param_5[4];
          dVar121 = param_5[8];
          dVar117 = param_5[8];
          dVar128 = param_5[0xc];
          dVar123 = param_5[0xc];
          lVar47 = 0x60;
          dVar148 = param_5[1];
          dVar151 = param_5[1];
          dVar155 = param_5[5];
          dVar163 = param_5[5];
          dVar165 = param_5[9];
          dVar172 = param_5[9];
          dVar173 = param_5[0xd];
          dVar175 = param_5[0xd];
          dVar177 = param_5[2];
          dVar182 = param_5[2];
          dVar184 = param_5[6];
          dVar3 = param_5[6];
          dVar4 = param_5[10];
          dVar5 = param_5[10];
          dVar6 = param_5[0xe];
          dVar7 = param_5[0xe];
          dVar8 = param_5[3];
          dVar9 = param_5[3];
          dVar11 = param_5[7];
          dVar10 = param_5[7];
          dVar12 = param_5[0xb];
          dVar13 = param_5[0xb];
          dVar15 = param_5[0xf];
          dVar14 = param_5[0xf];
          do {
            dVar27 = *(double *)((longlong)local_360 + lVar47);
            dVar28 = *(double *)((longlong)local_360 + lVar47 + 8);
            dVar29 = *(double *)((longlong)local_360 + lVar47 + 0x10);
            dVar30 = *(double *)((longlong)local_360 + lVar47 + 0x18);
            dVar31 = *(double *)((longlong)local_360 + lVar47 + 0x20);
            dVar32 = *(double *)((longlong)local_360 + lVar47 + 0x28);
            dVar33 = *(double *)((longlong)local_360 + lVar47 + 0x30);
            dVar34 = *(double *)((longlong)local_360 + lVar47 + 0x38);
            dVar35 = *(double *)((longlong)local_360 + lVar47 + 0x50);
            dVar36 = *(double *)((longlong)local_360 + lVar47 + 0x58);
            dVar37 = *(double *)((longlong)local_360 + lVar47 + 0x40);
            dVar38 = *(double *)((longlong)local_360 + lVar47 + 0x48);
            dVar39 = *(double *)((longlong)local_360 + lVar47 + 0x60);
            dVar40 = *(double *)((longlong)local_360 + lVar47 + 0x68);
            dVar41 = *(double *)((longlong)local_360 + lVar47 + 0x70);
            dVar42 = *(double *)((longlong)local_360 + lVar47 + 0x78);
            *(double *)((longlong)local_d40 + lVar47 + 0x10) =
                 dVar41 * dVar128 + dVar35 * dVar121 + dVar33 * dVar107 + dVar29 * dVar63 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x18) =
                 dVar42 * dVar123 + dVar36 * dVar117 + dVar34 * dVar93 + dVar30 * dVar92 + 0.0;
            *(double *)((longlong)local_d40 + lVar47) =
                 dVar39 * dVar128 + dVar37 * dVar121 + dVar31 * dVar107 + dVar27 * dVar63 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 8) =
                 dVar40 * dVar123 + dVar38 * dVar117 + dVar32 * dVar93 + dVar28 * dVar92 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x30) =
                 dVar41 * dVar173 + dVar35 * dVar165 + dVar33 * dVar155 + dVar29 * dVar148 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x38) =
                 dVar42 * dVar175 + dVar36 * dVar172 + dVar34 * dVar163 + dVar30 * dVar151 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x20) =
                 dVar39 * dVar173 + dVar37 * dVar165 + dVar31 * dVar155 + dVar27 * dVar148 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x28) =
                 dVar40 * dVar175 + dVar38 * dVar172 + dVar32 * dVar163 + dVar28 * dVar151 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x50) =
                 dVar41 * dVar6 + dVar35 * dVar4 + dVar33 * dVar184 + dVar29 * dVar177 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x58) =
                 dVar42 * dVar7 + dVar36 * dVar5 + dVar34 * dVar3 + dVar30 * dVar182 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x40) =
                 dVar39 * dVar6 + dVar37 * dVar4 + dVar31 * dVar184 + dVar27 * dVar177 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x48) =
                 dVar40 * dVar7 + dVar38 * dVar5 + dVar32 * dVar3 + dVar28 * dVar182 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x70) =
                 dVar41 * dVar15 + dVar35 * dVar12 + dVar33 * dVar11 + dVar29 * dVar8 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x78) =
                 dVar42 * dVar14 + dVar36 * dVar13 + dVar34 * dVar10 + dVar30 * dVar9 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x60) =
                 dVar39 * dVar15 + dVar37 * dVar12 + dVar31 * dVar11 + dVar27 * dVar8 + 0.0;
            *(double *)((longlong)local_d40 + lVar47 + 0x68) =
                 dVar40 * dVar14 + dVar38 * dVar13 + dVar32 * dVar10 + dVar28 * dVar9 + 0.0;
            lVar47 = lVar47 + 0x80;
          } while (lVar47 != 0x260);
          dVar93 = (dVar114 + dVar130) * ___xmm_3fe00000000000003fe0000000000000;
          dVar107 = (dVar118 + dVar147) * _UNK_150689678;
          dVar128 = (dVar116 + dVar156) * ___xmm_3fe00000000000003fe0000000000000;
          dVar148 = (dVar129 + dVar164) * _UNK_150689678;
          dVar117 = (dVar108 + dVar132) * ___xmm_3fe00000000000003fe0000000000000;
          dVar121 = (dVar112 + dVar139) * _UNK_150689678;
          dVar63 = (dVar122 + dVar149) * ___xmm_3fe00000000000003fe0000000000000;
          dVar92 = (dVar124 + dVar152) * _UNK_150689678;
          dVar163 = (dVar138 + dVar174) * ___xmm_3fe00000000000003fe0000000000000;
          dVar165 = (dVar143 + dVar176) * _UNK_150689678;
          dVar151 = (dVar133 + dVar178) * ___xmm_3fe00000000000003fe0000000000000;
          dVar155 = (dVar144 + dVar183) * _UNK_150689678;
          dVar130 = (dVar130 - dVar114) * ___xmm_3fe00000000000003fe0000000000000;
          dVar147 = (dVar147 - dVar118) * _UNK_150689678;
          dVar132 = (dVar132 - dVar108) * ___xmm_3fe00000000000003fe0000000000000;
          dVar123 = (dVar139 - dVar112) * _UNK_150689678;
          dVar108 = (dVar156 - dVar116) * ___xmm_3fe00000000000003fe0000000000000;
          dVar116 = (dVar164 - dVar129) * _UNK_150689678;
          dVar175 = (dVar149 - dVar122) * ___xmm_3fe00000000000003fe0000000000000;
          dVar182 = (dVar152 - dVar124) * _UNK_150689678;
          dVar112 = dVar163 * local_bd0 + dVar63 * local_c50 + dVar117 * local_d40[0xe] + local_b50;
          dVar118 = dVar165 * dStack_bc8 + dVar92 * dStack_c48 + dVar121 * local_d40[0xf] +
                    dStack_b48;
          dVar114 = dVar151 * local_be0 + dVar128 * local_c60 + dVar93 * local_d40[0xc] + local_b60;
          dVar122 = dVar155 * dStack_bd8 + dVar148 * dStack_c58 + dVar107 * local_d40[0xd] +
                    dStack_b58;
          dVar164 = (dVar174 - dVar138) * ___xmm_3fe00000000000003fe0000000000000;
          dVar174 = (dVar176 - dVar143) * _UNK_150689678;
          dVar172 = (dVar178 - dVar133) * ___xmm_3fe00000000000003fe0000000000000;
          dVar173 = (dVar183 - dVar144) * _UNK_150689678;
          dVar177 = dVar163 * local_bb0 + dVar63 * local_c30 + dVar117 * local_d40[0x12] + local_b30
          ;
          dVar184 = dVar165 * dStack_ba8 + dVar92 * dStack_c28 + dVar121 * dStack_ca8 + dStack_b28;
          dVar143 = (double)((ulonglong)(local_be0 * dVar172) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_c60 * dVar108) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_d40[0xc] * dVar130) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar144 = (double)((ulonglong)(dStack_bd8 * dVar173) & _UNK_15061cc88) +
                    (double)((ulonglong)(dStack_c58 * dVar116) & _UNK_15061cc88) +
                    (double)((ulonglong)(local_d40[0xd] * dVar147) & _UNK_15061cc88);
          dVar152 = dVar151 * local_bc0 + dVar128 * local_c40 + dVar93 * local_d40[0x10] + local_b40
          ;
          dVar156 = dVar155 * dStack_bb8 + dVar148 * dStack_c38 + dVar107 * local_d40[0x11] +
                    dStack_b38;
          dVar124 = (double)((ulonglong)(local_bd0 * dVar164) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_c50 * dVar175) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_d40[0xe] * dVar132) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar129 = (double)((ulonglong)(dStack_bc8 * dVar174) & _UNK_15061cc88) +
                    (double)((ulonglong)(dStack_c48 * dVar182) & _UNK_15061cc88) +
                    (double)((ulonglong)(local_d40[0xf] * dVar123) & _UNK_15061cc88);
          dVar183 = dVar163 * local_b90 + dVar63 * local_c10 + dVar117 * local_c90 + local_b10;
          dVar63 = dVar165 * dStack_b88 + dVar92 * dStack_c08 + dVar121 * dStack_c88 + dStack_b08;
          dVar133 = (double)((ulonglong)(local_bc0 * dVar172) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_c40 * dVar108) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_d40[0x10] * dVar130) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar138 = (double)((ulonglong)(dStack_bb8 * dVar173) & _UNK_15061cc88) +
                    (double)((ulonglong)(dStack_c38 * dVar116) & _UNK_15061cc88) +
                    (double)((ulonglong)(local_d40[0x11] * dVar147) & _UNK_15061cc88);
          dVar176 = dVar151 * local_ba0 + dVar128 * local_c20 + dVar93 * local_ca0 + local_b20;
          dVar178 = dVar155 * dStack_b98 + dVar148 * dStack_c18 + dVar107 * dStack_c98 + dStack_b18;
          dVar139 = (double)((ulonglong)(local_bb0 * dVar164) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_c30 * dVar175) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_d40[0x12] * dVar132) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar149 = (double)((ulonglong)(dStack_ba8 * dVar174) & _UNK_15061cc88) +
                    (double)((ulonglong)(dStack_c28 * dVar182) & _UNK_15061cc88) +
                    (double)((ulonglong)(dStack_ca8 * dVar123) & _UNK_15061cc88);
          dVar130 = (double)((ulonglong)(dVar172 * local_ba0) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(dVar108 * local_c20) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(dVar130 * local_ca0) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar147 = (double)((ulonglong)(dVar173 * dStack_b98) & _UNK_15061cc88) +
                    (double)((ulonglong)(dVar116 * dStack_c18) & _UNK_15061cc88) +
                    (double)((ulonglong)(dVar147 * dStack_c98) & _UNK_15061cc88);
          dVar108 = (double)((ulonglong)(dVar164 * local_b90) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(dVar175 * local_c10) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(dVar132 * local_c90) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar116 = (double)((ulonglong)(dVar174 * dStack_b88) & _UNK_15061cc88) +
                    (double)((ulonglong)(dVar182 * dStack_c08) & _UNK_15061cc88) +
                    (double)((ulonglong)(dVar123 * dStack_c88) & _UNK_15061cc88);
          auVar96._0_8_ = dVar114 - dVar143;
          auVar96._8_8_ = dVar122 - dVar144;
          local_1150._0_8_ = dVar112 - dVar124;
          local_1150._8_8_ = dVar118 - dVar129;
          local_1160._0_8_ = dVar152 - dVar133;
          local_1160._8_8_ = dVar156 - dVar138;
          local_11b0._8_8_ = dVar144 + dVar122;
          local_11b0._0_8_ = dVar143 + dVar114;
          auVar66._0_8_ = dVar177 - dVar139;
          auVar66._8_8_ = dVar184 - dVar149;
          local_11f0._8_8_ = dVar129 + dVar118;
          local_11f0._0_8_ = dVar124 + dVar112;
          local_11e0._8_8_ = dVar178 - dVar147;
          local_11e0._0_8_ = dVar176 - dVar130;
          local_11d0._8_8_ = dVar138 + dVar156;
          local_11d0._0_8_ = dVar133 + dVar152;
          local_11a0._8_8_ = dVar63 - dVar116;
          local_11a0._0_8_ = dVar183 - dVar108;
          local_11c0._8_8_ = dVar149 + dVar184;
          local_11c0._0_8_ = dVar139 + dVar177;
          local_10a0._8_8_ = dVar147 + dVar178;
          local_10a0._0_8_ = dVar130 + dVar176;
          local_10e0._8_8_ = dVar116 + dVar63;
          local_10e0._0_8_ = dVar108 + dVar183;
          auVar67[0] = -(local_10d0[0] == '\0');
          auVar67[1] = -(local_10d0[1] == '\0');
          auVar67[2] = -(local_10d0[2] == '\0');
          auVar67[3] = -(local_10d0[3] == '\0');
          auVar67[4] = -(local_10d0[4] == '\0');
          auVar67[5] = -(local_10d0[5] == '\0');
          auVar67[6] = -(local_10d0[6] == '\0');
          auVar67[7] = -(local_10d0[7] == '\0');
          auVar67[8] = -(local_10d0[8] == '\0');
          auVar67[9] = -(local_10d0[9] == '\0');
          auVar67[10] = -(local_10d0[10] == '\0');
          auVar67[0xb] = -(local_10d0[0xb] == '\0');
          auVar67[0xc] = -(local_10d0[0xc] == '\0');
          auVar67[0xd] = -(local_10d0[0xd] == '\0');
          auVar67[0xe] = -(local_10d0[0xe] == '\0');
          auVar67[0xf] = -(local_10d0[0xf] == '\0');
          auVar135 = pmovsxbd(auVar67 ^ ___xmm_ffffffffffffffffffffffffffffffff,
                              auVar67 ^ ___xmm_ffffffffffffffffffffffffffffffff);
          iVar113 = movmskps((int)lVar48,auVar111 & auVar135);
          if (iVar113 == 0) {
            uVar45 = 0x260;
LAB_140a7bc6f:
            auVar135 = pmovsxbd(auVar135,auVar67);
            iVar113 = movmskps(uVar45,auVar111 & auVar135);
            if ((iVar113 != 0) && ((char)iVar113 != '\0')) {
              auVar111 = pmovzxbd(auVar135,auVar67);
              auVar70._0_4_ = auVar111._0_4_ << 0x1f;
              auVar70._4_4_ = auVar111._4_4_ << 0x1f;
              auVar70._8_4_ = auVar111._8_4_ << 0x1f;
              auVar70._12_4_ = auVar111._12_4_ << 0x1f;
              uVar53 = movmskps((int)param_5,auVar70);
              if ((uVar53 & 1) == 0) {
                auVar135 = local_ec0;
                auVar140 = local_dc0;
                auVar153 = local_f10;
                auVar67 = local_dd0;
                auVar68 = local_de0;
                auVar111 = local_df0;
                if ((uVar53 & 2) != 0) goto LAB_140a7bcea;
LAB_140a7c4aa:
                auVar96 = blendpd(local_df0,auVar111,1);
                local_1160 = blendpd(local_de0,auVar68,1);
                local_11e0 = blendpd(local_dd0,auVar67,1);
                local_11b0 = blendpd(local_f10,auVar153,1);
                local_11d0 = blendpd(local_dc0,auVar140,1);
                local_10a0 = blendpd(local_ec0,auVar135,1);
              }
              else {
                local_fd0._0_8_ = local_fd0._0_8_ & 0xffffffffffffff00 | 1;
                auVar135 = local_10a0;
                auVar140 = local_11d0;
                auVar153 = local_11b0;
                auVar67 = local_11e0;
                auVar68 = local_1160;
                auVar111 = auVar96;
                if ((uVar53 & 2) == 0) goto LAB_140a7c4aa;
LAB_140a7bcea:
                local_fd0._0_8_ = local_fd0._0_8_ & 0xffffffffffff00ff | 0x100;
              }
              bVar62 = (uVar53 & 4) != 0;
              auVar69 = local_1030;
              if (bVar62) {
                auVar69 = local_1150;
              }
              cVar57 = (char)((char)uVar53 << 4) >> 4;
              auVar70 = local_fc0;
              auVar71 = local_1020;
              auVar72 = local_1090;
              auVar73 = local_ff0;
              auVar74 = local_10b0;
              if (bVar62) {
                local_fd0._0_8_ = local_fd0._0_8_ & 0xffffffffff00ffff | 0x10000;
                auVar70 = auVar66;
                auVar71 = local_11f0;
                auVar72 = local_11c0;
                auVar73 = local_11a0;
                auVar74 = local_10e0;
              }
              if (-1 < cVar57) {
                local_1150 = blendpd(local_1030,auVar69,1);
                auVar66 = blendpd(local_fc0,auVar70,1);
                local_11a0 = blendpd(local_ff0,auVar73,1);
                local_11f0 = blendpd(local_1020,auVar71,1);
                local_11c0 = blendpd(local_1090,auVar72,1);
                local_10e0 = blendpd(local_10b0,auVar74,1);
              }
              if (cVar57 < '\0') {
                local_fd0._0_8_ = local_fd0._0_8_ & 0xffffffff00ffffff | 0x1000000;
              }
              local_df0 = blendpd(auVar96,auVar111,1);
              local_1030 = blendpd(local_1150,auVar69,1);
              local_de0 = blendpd(local_1160,auVar68,1);
              local_fc0 = blendpd(auVar66,auVar70,1);
              local_dd0 = blendpd(local_11e0,auVar67,1);
              local_ff0 = blendpd(local_11a0,auVar73,1);
              local_f10 = blendpd(local_11b0,auVar153,1);
              local_1020 = blendpd(local_11f0,auVar71,1);
              local_dc0 = blendpd(local_11d0,auVar140,1);
              local_1090 = blendpd(local_11c0,auVar72,1);
              local_ec0 = blendpd(local_10a0,auVar135,1);
              local_10b0 = blendpd(local_10e0,auVar74,1);
            }
          }
          else {
            auVar68._8_8_ = local_1150._8_8_;
            auVar68._0_8_ = local_1150._0_8_;
            auVar69._8_8_ = local_1160._8_8_;
            auVar69._0_8_ = local_1160._0_8_;
            uVar53 = movmskps((int)lVar1,auVar135);
            auVar140 = minpd(local_10c0,auVar96);
            auVar135 = local_df0;
            if ((uVar53 & 1) != 0) {
              auVar135 = auVar140;
            }
            if ((uVar53 & 2) == 0) {
              auVar140 = blendpd(local_df0,auVar135,1);
            }
            auVar153 = minpd(local_fa0,auVar68);
            if ((uVar53 & 4) != 0) {
              local_1030 = blendpd(local_1030,auVar153,1);
            }
            bVar52 = (char)((char)uVar53 << 4) >> 4;
            if ((char)bVar52 < '\0') {
              local_1030 = blendpd(local_1030,auVar153,2);
            }
            auVar153 = minpd(local_1120,auVar69);
            if ((bVar52 & 1) == 0) {
              local_1140 = local_de0;
              if ((bVar52 & 2) != 0) goto LAB_140a7b8fa;
LAB_140a7c32d:
              auVar153 = blendpd(local_de0,local_1140,1);
              auVar68 = minpd(local_f90,auVar66);
            }
            else {
              local_1140 = auVar153;
              if ((bVar52 & 2) == 0) goto LAB_140a7c32d;
LAB_140a7b8fa:
              auVar68 = minpd(local_f90,auVar66);
            }
            if ((bVar52 & 4) != 0) {
              local_fc0 = blendpd(local_fc0,auVar68,1);
            }
            if ((char)bVar52 < '\0') {
              local_fc0 = blendpd(local_fc0,auVar68,2);
            }
            auVar68 = minpd(local_1110,local_11e0);
            if ((bVar52 & 1) == 0) {
              auVar69 = local_dd0;
              if ((bVar52 & 2) != 0) goto LAB_140a7b96a;
LAB_140a7c363:
              auVar68 = blendpd(local_dd0,auVar69,1);
              auVar70 = minpd(local_f80,local_11a0);
            }
            else {
              auVar69 = auVar68;
              if ((bVar52 & 2) == 0) goto LAB_140a7c363;
LAB_140a7b96a:
              auVar70 = minpd(local_f80,local_11a0);
            }
            if ((bVar52 & 4) != 0) {
              local_ff0 = blendpd(local_ff0,auVar70,1);
            }
            if ((char)bVar52 < '\0') {
              local_ff0 = blendpd(local_ff0,auVar70,2);
            }
            auVar70 = maxpd(local_1100,local_11b0);
            if ((bVar52 & 1) == 0) {
              auVar71 = local_f10;
              if ((bVar52 & 2) != 0) goto LAB_140a7b9e2;
LAB_140a7c39b:
              auVar70 = blendpd(local_f10,auVar71,1);
              auVar72 = maxpd(local_1060,local_11f0);
            }
            else {
              auVar71 = auVar70;
              if ((bVar52 & 2) == 0) goto LAB_140a7c39b;
LAB_140a7b9e2:
              auVar72 = maxpd(local_1060,local_11f0);
            }
            if ((bVar52 & 4) != 0) {
              local_1020 = blendpd(local_1020,auVar72,1);
            }
            if ((char)bVar52 < '\0') {
              local_1020 = blendpd(local_1020,auVar72,2);
            }
            auVar72 = maxpd(local_10f0,local_11d0);
            if ((bVar52 & 1) == 0) {
              auVar73 = local_dc0;
              if ((bVar52 & 2) != 0) goto LAB_140a7ba53;
LAB_140a7c3d8:
              auVar72 = blendpd(local_dc0,auVar73,1);
              auVar74 = maxpd(local_1050,local_11c0);
            }
            else {
              auVar73 = auVar72;
              if ((bVar52 & 2) == 0) goto LAB_140a7c3d8;
LAB_140a7ba53:
              auVar74 = maxpd(local_1050,local_11c0);
            }
            if ((bVar52 & 4) != 0) {
              local_1090 = blendpd(local_1090,auVar74,1);
            }
            if ((char)bVar52 < '\0') {
              local_1090 = blendpd(local_1090,auVar74,2);
            }
            auVar74 = maxpd(auVar119,local_10a0);
            if ((bVar52 & 1) == 0) {
              auVar75 = local_ec0;
              if ((bVar52 & 2) != 0) goto LAB_140a7bac8;
LAB_140a7c40f:
              auVar74 = blendpd(local_ec0,auVar75,1);
              auVar76 = maxpd(local_1040,local_10e0);
            }
            else {
              auVar75 = auVar74;
              if ((bVar52 & 2) == 0) goto LAB_140a7c40f;
LAB_140a7bac8:
              auVar76 = maxpd(local_1040,local_10e0);
            }
            if ((bVar52 & 4) != 0) {
              local_10b0 = blendpd(local_10b0,auVar76,1);
            }
            if ((char)bVar52 < '\0') {
              local_10b0 = blendpd(local_10b0,auVar76,2);
            }
            auVar76 = local_fd0;
            if ((bVar52 & 1) != 0) {
              auVar76 = local_10d0;
            }
            auVar77 = pblendvb(auVar76,local_fd0,___xmm_000000000000000000000000ffffff00);
            auVar76 = auVar77;
            if ((bVar52 & 2) != 0) {
              auVar76 = local_10d0;
            }
            auVar77 = pblendvb(auVar76,auVar77,___xmm_000000000000000000000000ffff00ff);
            auVar76 = auVar77;
            if ((bVar52 & 4) != 0) {
              auVar76 = local_10d0;
            }
            auVar77 = pblendvb(auVar76,auVar77,___xmm_000000000000000000000000ff00ffff);
            auVar76 = local_10d0;
            if (-1 < (char)bVar52) {
              auVar76 = auVar77;
            }
            local_df0 = blendpd(auVar140,auVar135,1);
            local_de0 = blendpd(auVar153,local_1140,1);
            local_dd0 = blendpd(auVar68,auVar69,1);
            local_f10 = blendpd(auVar70,auVar71,1);
            local_dc0 = blendpd(auVar72,auVar73,1);
            local_ec0 = blendpd(auVar74,auVar75,1);
            local_fd0 = pblendvb(auVar76,auVar77,___xmm_00000000000000000000000000ffffff);
            uVar50 = uVar49 & 0xffffffffffffff0f;
            uVar45 = (undefined4)uVar50;
            auVar135 = ___xmm_00000000000000000000000000ffffff;
            if ((char)uVar50 != (char)iVar113) goto LAB_140a7bc6f;
          }
          uVar49 = uVar49 & 0xff;
          auVar135 = local_10d0;
          auVar140 = local_1120;
          auVar153 = local_1110;
          auVar96 = local_1100;
          auVar66 = local_10f0;
          local_11f0 = auVar119;
          auVar111 = local_10c0;
          if ((bVar59 & 1) != 0) {
            local_11f0 = local_ec0;
            auVar135 = local_fd0;
            auVar140 = local_de0;
            auVar153 = local_dd0;
            auVar96 = local_f10;
            auVar66 = local_dc0;
            auVar111 = local_df0;
          }
          if ((bVar59 & 2) == 0) {
            local_10c0 = blendpd(local_10c0,auVar111,1);
            local_1120 = blendpd(local_1120,auVar140,1);
            local_1110 = blendpd(local_1110,auVar153,1);
            local_1100 = blendpd(local_1100,auVar96,1);
            local_10f0 = blendpd(local_10f0,auVar66,1);
            auVar67 = blendps(auVar119,local_11f0,3);
            auVar135 = pblendvb(auVar135,local_10d0,___xmm_000000000000000000000000ffffff00);
            auVar119 = auVar135;
          }
          else {
            auVar135 = pblendvb(auVar135,local_10d0,___xmm_000000000000000000000000ffffff00);
            auVar119 = local_fd0;
            auVar67 = local_ec0;
            local_1120 = local_de0;
            local_1110 = local_dd0;
            local_1100 = local_f10;
            local_10f0 = local_dc0;
            local_10c0 = local_df0;
          }
          if ((bVar59 & 4) == 0) {
            auVar73 = pblendvb(auVar119,auVar135,___xmm_000000000000000000000000ffff00ff);
            auVar72 = auVar73;
            auVar135 = local_f90;
            auVar68 = local_f80;
            auVar69 = local_1060;
            auVar70 = local_1050;
            auVar71 = local_1040;
            auVar119 = local_fa0;
            if ((char)bVar59 < '\0') goto LAB_140a7c112;
LAB_140a7c21e:
            auVar74 = pblendw(local_fa0,auVar119,0xf);
            if (-1 < (char)bVar59) goto LAB_140a7c24a;
LAB_140a7c12f:
            auVar75 = local_fc0;
            if ((char)bVar59 < '\0') goto LAB_140a7c149;
LAB_140a7c275:
            auVar76 = blendpd(local_f80,auVar68,1);
            if (-1 < (char)bVar59) goto LAB_140a7c298;
LAB_140a7c15b:
            auVar77 = local_1020;
            if ((char)bVar59 < '\0') goto LAB_140a7c173;
LAB_140a7c2bf:
            auVar78 = blendpd(local_1050,auVar70,1);
            if (-1 < (char)bVar59) goto LAB_140a7c2de;
LAB_140a7c182:
            auVar72 = pblendvb(auVar72,auVar73,___xmm_000000000000000000000000ff00ffff);
            auVar79 = local_10b0;
          }
          else {
            auVar73 = pblendvb(auVar119,auVar135,___xmm_000000000000000000000000ffff00ff);
            auVar72 = local_fd0;
            auVar135 = local_fc0;
            auVar68 = local_ff0;
            auVar69 = local_1020;
            auVar70 = local_1090;
            auVar71 = local_10b0;
            auVar119 = local_1030;
            if (-1 < (char)bVar59) goto LAB_140a7c21e;
LAB_140a7c112:
            auVar74 = local_1030;
            if ((char)bVar59 < '\0') goto LAB_140a7c12f;
LAB_140a7c24a:
            auVar75 = blendpd(local_f90,auVar135,1);
            if (-1 < (char)bVar59) goto LAB_140a7c275;
LAB_140a7c149:
            auVar76 = local_ff0;
            if ((char)bVar59 < '\0') goto LAB_140a7c15b;
LAB_140a7c298:
            auVar77 = blendps(local_1060,auVar69,3);
            if (-1 < (char)bVar59) goto LAB_140a7c2bf;
LAB_140a7c173:
            auVar78 = local_1090;
            if ((char)bVar59 < '\0') goto LAB_140a7c182;
LAB_140a7c2de:
            auVar79 = blendpd(local_1040,auVar71,1);
            auVar72 = pblendvb(auVar72,auVar73,___xmm_000000000000000000000000ff00ffff);
          }
          auVar73 = local_fd0;
          if (-1 < (char)bVar59) {
            auVar73 = auVar72;
          }
          local_10d0 = pblendvb(auVar73,auVar72,___xmm_00000000000000000000000000ffffff);
          local_10c0 = blendpd(local_10c0,auVar111,1);
          local_fa0 = pblendw(auVar74,auVar119,0xf);
          local_1120 = blendpd(local_1120,auVar140,1);
          local_f90 = blendpd(auVar75,auVar135,1);
          local_1110 = blendps(local_1110,auVar153,3);
          local_f80 = blendpd(auVar76,auVar68,1);
          local_1100 = blendps(local_1100,auVar96,3);
          local_1060 = blendps(auVar77,auVar69,3);
          local_10f0 = pblendw(local_10f0,auVar66,0xf);
          local_1050 = blendpd(auVar78,auVar70,1);
          auVar119 = pblendw(auVar67,local_11f0,0xf);
          local_1040 = blendpd(auVar79,auVar71,1);
        }
        uVar44 = uVar44 + 4;
      } while ((int)uVar44 < (int)uVar56);
    }
    if ((int)param_7 <= (int)uVar44) goto LAB_140a808b8;
    uVar53 = (uint)__xmm_00000003000000020000000100000000 | uVar44;
    uVar105 = __xmm_00000003000000020000000100000000._4_4_ | uVar44;
    uVar106 = _UNK_150631e08 | uVar44;
    uVar56 = _UNK_150631e0c | uVar44;
    auVar71._0_4_ = -(uint)((int)uVar53 < (int)param_7);
    auVar71._4_4_ = -(uint)((int)uVar105 < (int)param_7);
    auVar71._8_4_ = -(uint)((int)uVar106 < (int)param_7);
    auVar71._12_4_ = -(uint)((int)uVar56 < (int)param_7);
    uVar46 = movmskps((int)uVar49,auVar71);
    if ((~(byte)uVar46 & 9) == 0) {
      puVar16 = (uint *)(param_2 + (int)(uVar44 << 2));
      uVar53 = *puVar16;
      uVar105 = puVar16[1];
      uVar106 = puVar16[2];
      uVar56 = puVar16[3];
    }
    else {
      puVar16 = (uint *)(param_2 + (int)(uVar44 << 2));
      if ((uVar46 & 1) != 0) {
        uVar53 = *puVar16;
        uVar105 = 0;
        uVar106 = 0;
        uVar56 = 0;
      }
      if ((uVar46 & 2) != 0) {
        uVar105 = puVar16[1];
      }
      if ((uVar46 & 4) != 0) {
        uVar106 = puVar16[2];
      }
      if ((uVar46 & 8) != 0) {
        uVar56 = puVar16[3];
      }
    }
    auVar73._4_4_ = uVar44 * 7;
    auVar73._0_4_ = uVar44 * 7;
    auVar73._8_4_ = uVar44 * 7;
    auVar73._12_4_ = uVar44 * 7;
    auVar73 = auVar73 & auVar71;
    uVar49 = param_4 + (longlong)auVar73._0_4_ * 8;
    lVar48 = param_4 + (longlong)auVar73._4_4_ * 8;
    lVar47 = param_4 + (longlong)auVar73._8_4_ * 8;
    lVar1 = param_4 + (longlong)auVar73._12_4_ * 8;
    auVar111 = ___xmm_000000d8000000a00000006800000030 & auVar71;
    auVar74._0_4_ = uVar53 << 2;
    auVar74._4_4_ = uVar105 << 2;
    auVar74._8_4_ = uVar106 << 2;
    auVar74._12_4_ = uVar56 << 2;
    auVar74 = auVar74 & auVar71;
    auVar75._8_4_ = 0xffffffff;
    auVar75._0_8_ = 0xffffffffffffffff;
    auVar75._12_4_ = 0xffffffff;
    auVar76._0_4_ = -(uint)(*(int *)(param_1 + auVar74._0_4_) == -1);
    auVar76._4_4_ = -(uint)(*(int *)(param_1 + auVar74._4_4_) == -1);
    auVar76._8_4_ = -(uint)(*(int *)(param_1 + auVar74._8_4_) == -1);
    auVar76._12_4_ = -(uint)(*(int *)(param_1 + auVar74._12_4_) == -1);
    auVar72[0] = -(*(char *)(auVar111._0_4_ + uVar49) == '\0');
    auVar72[1] = -(*(char *)((ulonglong)auVar111._4_4_ + lVar48) == '\0');
    auVar72[2] = -(*(char *)((ulonglong)auVar111._8_4_ + lVar47) == '\0');
    auVar72[3] = -(*(char *)((ulonglong)auVar111._12_4_ + lVar1) == '\0');
    auVar72[4] = 0xff;
    auVar72[5] = 0xff;
    auVar72[6] = 0xff;
    auVar72[7] = 0xff;
    auVar72[8] = 0xff;
    auVar72[9] = 0xff;
    auVar72[10] = 0xff;
    auVar72[0xb] = 0xff;
    auVar72[0xc] = 0xff;
    auVar72[0xd] = 0xff;
    auVar72[0xe] = 0xff;
    auVar72[0xf] = 0xff;
    auVar111 = pmovsxbd(auVar72 ^ auVar75,auVar72 ^ auVar75);
    auVar111 = ~auVar76 & auVar111 & auVar71;
    iVar113 = movmskps(auVar74._12_4_,auVar111);
    if (iVar113 == 0) goto LAB_140a808b8;
    auVar77._0_4_ = ___xmm_000000a8000000700000003800000000 & auVar71._0_4_;
    auVar77._4_4_ = _UNK_151287264 & auVar71._4_4_;
    auVar77._8_4_ = _UNK_151287268 & auVar71._8_4_;
    auVar77._12_4_ = _UNK_15128726c & auVar71._12_4_;
    lVar54 = extractps(auVar77,1);
    lVar58 = extractps(auVar77,2);
    lVar55 = extractps(auVar77,3);
    dVar108 = *(double *)(param_4 + (longlong)auVar73._0_4_ * 8);
    dVar112 = *(double *)(lVar54 + lVar48);
    dVar114 = *(double *)(lVar58 + lVar47);
    dVar116 = *(double *)(lVar55 + lVar1);
    auVar135 = ___xmm_000000b0000000780000004000000008 & auVar71;
    dVar118 = *(double *)((ulonglong)auVar135._8_4_ + lVar47);
    dVar122 = *(double *)((ulonglong)auVar135._12_4_ + lVar1);
    dVar124 = *(double *)(auVar135._0_4_ + uVar49);
    dVar129 = *(double *)((ulonglong)auVar135._4_4_ + lVar48);
    auVar135 = ___xmm_000000b8000000800000004800000010 & auVar71;
    dVar133 = *(double *)((ulonglong)auVar135._8_4_ + lVar47);
    dVar138 = *(double *)((ulonglong)auVar135._12_4_ + lVar1);
    dVar143 = *(double *)(auVar135._0_4_ + uVar49);
    dVar130 = *(double *)((ulonglong)auVar135._4_4_ + lVar48);
    auVar135 = ___xmm_000000c0000000880000005000000018 & auVar71;
    dVar144 = *(double *)((ulonglong)auVar135._8_4_ + lVar47);
    dVar132 = *(double *)((ulonglong)auVar135._12_4_ + lVar1);
    dVar139 = *(double *)(auVar135._0_4_ + uVar49);
    dVar147 = *(double *)((ulonglong)auVar135._4_4_ + lVar48);
    auVar135 = ___xmm_000000c8000000900000005800000020 & auVar71;
    dVar149 = *(double *)((ulonglong)auVar135._8_4_ + lVar47);
    dVar152 = *(double *)((ulonglong)auVar135._12_4_ + lVar1);
    dVar156 = *(double *)(auVar135._0_4_ + uVar49);
    dVar164 = *(double *)((ulonglong)auVar135._4_4_ + lVar48);
    auVar71 = auVar71 & ___xmm_000000d0000000980000006000000028;
    dVar174 = *(double *)((ulonglong)auVar71._8_4_ + lVar47);
    dVar176 = *(double *)((ulonglong)auVar71._12_4_ + lVar1);
    dVar178 = *(double *)(auVar71._0_4_ + uVar49);
    dVar183 = *(double *)((ulonglong)auVar71._4_4_ + lVar48);
    auVar78._0_4_ = uVar53 << 7;
    auVar78._4_4_ = uVar105 << 7;
    auVar78._8_4_ = uVar106 << 7;
    auVar78._12_4_ = uVar56 << 7;
    auVar78 = auVar78 & auVar111;
    uVar49 = param_3 + auVar78._0_4_;
    lVar48 = param_3 + auVar78._4_4_;
    lVar47 = param_3 + auVar78._8_4_;
    lVar1 = param_3 + auVar78._12_4_;
    auVar135 = ___xmm_00000008000000080000000800000008 & auVar111;
    auVar140 = ___xmm_00000010000000100000001000000010 & auVar111;
    auVar153 = ___xmm_00000018000000180000001800000018 & auVar111;
    auVar96 = ___xmm_00000020000000200000002000000020 & auVar111;
    auVar66 = ___xmm_00000028000000280000002800000028 & auVar111;
    auVar67 = ___xmm_00000030000000300000003000000030 & auVar111;
    auVar68 = ___xmm_00000038000000380000003800000038 & auVar111;
    auVar69 = ___xmm_00000040000000400000004000000040 & auVar111;
    auVar70 = ___xmm_00000048000000480000004800000048 & auVar111;
    auVar71 = ___xmm_00000050000000500000005000000050 & auVar111;
    auVar72 = ___xmm_00000058000000580000005800000058 & auVar111;
    auVar73 = ___xmm_00000060000000600000006000000060 & auVar111;
    auVar74 = ___xmm_00000068000000680000006800000068 & auVar111;
    auVar75 = ___xmm_00000070000000700000007000000070 & auVar111;
    auVar76 = ___xmm_00000078000000780000007800000078 & auVar111;
    local_560[0xe] = (double)*(undefined8 *)(param_3 + auVar78._8_4_);
    local_560[0xf] = (double)*(undefined8 *)(param_3 + auVar78._12_4_);
    local_560[0xc] = (double)*(undefined8 *)(param_3 + auVar78._0_4_);
    local_560[0xd] = (double)*(undefined8 *)(param_3 + auVar78._4_4_);
    local_560[0x12] = (double)*(undefined8 *)((ulonglong)auVar135._8_4_ + lVar47);
    uStack_4c8 = *(undefined8 *)((ulonglong)auVar135._12_4_ + lVar1);
    local_560[0x10] = (double)*(undefined8 *)(auVar135._0_4_ + uVar49);
    local_560[0x11] = (double)*(undefined8 *)((ulonglong)auVar135._4_4_ + lVar48);
    local_4b0 = *(undefined8 *)((ulonglong)auVar140._8_4_ + lVar47);
    uStack_4a8 = *(undefined8 *)((ulonglong)auVar140._12_4_ + lVar1);
    local_4c0 = *(undefined8 *)(auVar140._0_4_ + uVar49);
    uStack_4b8 = *(undefined8 *)((ulonglong)auVar140._4_4_ + lVar48);
    local_490 = *(undefined8 *)((ulonglong)auVar153._8_4_ + lVar47);
    uStack_488 = *(undefined8 *)((ulonglong)auVar153._12_4_ + lVar1);
    local_4a0 = *(undefined8 *)(auVar153._0_4_ + uVar49);
    uStack_498 = *(undefined8 *)((ulonglong)auVar153._4_4_ + lVar48);
    local_470 = *(undefined8 *)((ulonglong)auVar96._8_4_ + lVar47);
    uStack_468 = *(undefined8 *)((ulonglong)auVar96._12_4_ + lVar1);
    local_480 = *(undefined8 *)(auVar96._0_4_ + uVar49);
    uStack_478 = *(undefined8 *)((ulonglong)auVar96._4_4_ + lVar48);
    local_450 = *(undefined8 *)((ulonglong)auVar66._8_4_ + lVar47);
    uStack_448 = *(undefined8 *)((ulonglong)auVar66._12_4_ + lVar1);
    local_460 = *(undefined8 *)(auVar66._0_4_ + uVar49);
    uStack_458 = *(undefined8 *)((ulonglong)auVar66._4_4_ + lVar48);
    local_430 = *(undefined8 *)((ulonglong)auVar67._8_4_ + lVar47);
    uStack_428 = *(undefined8 *)((ulonglong)auVar67._12_4_ + lVar1);
    local_440 = *(undefined8 *)(auVar67._0_4_ + uVar49);
    uStack_438 = *(undefined8 *)((ulonglong)auVar67._4_4_ + lVar48);
    local_410 = *(undefined8 *)((ulonglong)auVar68._8_4_ + lVar47);
    uStack_408 = *(undefined8 *)((ulonglong)auVar68._12_4_ + lVar1);
    local_420 = *(undefined8 *)(auVar68._0_4_ + uVar49);
    uStack_418 = *(undefined8 *)((ulonglong)auVar68._4_4_ + lVar48);
    local_3f0 = *(undefined8 *)((ulonglong)auVar69._8_4_ + lVar47);
    uStack_3e8 = *(undefined8 *)((ulonglong)auVar69._12_4_ + lVar1);
    local_400 = *(undefined8 *)(auVar69._0_4_ + uVar49);
    uStack_3f8 = *(undefined8 *)((ulonglong)auVar69._4_4_ + lVar48);
    local_3d0 = *(undefined8 *)((ulonglong)auVar70._8_4_ + lVar47);
    uStack_3c8 = *(undefined8 *)((ulonglong)auVar70._12_4_ + lVar1);
    local_3e0 = *(undefined8 *)(auVar70._0_4_ + uVar49);
    uStack_3d8 = *(undefined8 *)((ulonglong)auVar70._4_4_ + lVar48);
    local_3b0 = *(undefined8 *)((ulonglong)auVar71._8_4_ + lVar47);
    uStack_3a8 = *(undefined8 *)((ulonglong)auVar71._12_4_ + lVar1);
    local_3c0 = *(undefined8 *)(auVar71._0_4_ + uVar49);
    uStack_3b8 = *(undefined8 *)((ulonglong)auVar71._4_4_ + lVar48);
    local_390 = *(undefined8 *)((ulonglong)auVar72._8_4_ + lVar47);
    uStack_388 = *(undefined8 *)((ulonglong)auVar72._12_4_ + lVar1);
    local_3a0 = *(undefined8 *)(auVar72._0_4_ + uVar49);
    uStack_398 = *(undefined8 *)((ulonglong)auVar72._4_4_ + lVar48);
    local_370 = *(undefined8 *)((ulonglong)auVar73._8_4_ + lVar47);
    uStack_368 = *(undefined8 *)((ulonglong)auVar73._12_4_ + lVar1);
    bVar59 = (char)((char)iVar113 << 4) >> 4;
    local_380 = *(undefined8 *)(auVar73._0_4_ + uVar49);
    uStack_378 = *(undefined8 *)((ulonglong)auVar73._4_4_ + lVar48);
    local_360[2] = (double)*(undefined8 *)((ulonglong)auVar74._8_4_ + lVar47);
    local_360[3] = (double)*(undefined8 *)((ulonglong)auVar74._12_4_ + lVar1);
    local_360[0] = *(double *)(auVar74._0_4_ + uVar49);
    local_360[1] = (double)*(undefined8 *)((ulonglong)auVar74._4_4_ + lVar48);
    local_360[6] = (double)*(undefined8 *)((ulonglong)auVar75._8_4_ + lVar47);
    local_360[7] = (double)*(undefined8 *)((ulonglong)auVar75._12_4_ + lVar1);
    local_360[4] = (double)*(undefined8 *)(auVar75._0_4_ + uVar49);
    local_360[5] = (double)*(undefined8 *)((ulonglong)auVar75._4_4_ + lVar48);
    local_360[10] = (double)*(undefined8 *)((ulonglong)auVar76._8_4_ + lVar47);
    local_360[0xb] = (double)*(undefined8 *)((ulonglong)auVar76._12_4_ + lVar1);
    local_360[8] = (double)*(undefined8 *)(auVar76._0_4_ + uVar49);
    local_360[9] = (double)*(undefined8 *)((ulonglong)auVar76._4_4_ + lVar48);
    dVar63 = *param_5;
    dVar92 = *param_5;
    dVar107 = param_5[4];
    dVar93 = param_5[4];
    dVar117 = param_5[8];
    dVar121 = param_5[8];
    dVar123 = param_5[0xc];
    dVar128 = param_5[0xc];
    lVar48 = 0x60;
    dVar148 = param_5[1];
    dVar151 = param_5[1];
    dVar163 = param_5[5];
    dVar155 = param_5[5];
    dVar172 = param_5[9];
    dVar165 = param_5[9];
    dVar175 = param_5[0xd];
    dVar173 = param_5[0xd];
    dVar182 = param_5[2];
    dVar177 = param_5[2];
    dVar184 = param_5[6];
    dVar3 = param_5[6];
    dVar5 = param_5[10];
    dVar4 = param_5[10];
    dVar7 = param_5[0xe];
    dVar6 = param_5[0xe];
    dVar9 = param_5[3];
    dVar8 = param_5[3];
    dVar10 = param_5[7];
    dVar11 = param_5[7];
    dVar12 = param_5[0xb];
    dVar13 = param_5[0xb];
    dVar15 = param_5[0xf];
    dVar14 = param_5[0xf];
    do {
      dVar27 = *(double *)((longlong)local_560 + lVar48);
      dVar28 = *(double *)((longlong)local_560 + lVar48 + 8);
      dVar29 = *(double *)((longlong)local_560 + lVar48 + 0x10);
      dVar30 = *(double *)((longlong)local_560 + lVar48 + 0x18);
      dVar31 = *(double *)((longlong)local_560 + lVar48 + 0x20);
      dVar32 = *(double *)((longlong)local_560 + lVar48 + 0x28);
      dVar33 = *(double *)((longlong)local_560 + lVar48 + 0x30);
      dVar34 = *(double *)((longlong)local_560 + lVar48 + 0x38);
      dVar35 = *(double *)((longlong)local_560 + lVar48 + 0x50);
      dVar36 = *(double *)((longlong)local_560 + lVar48 + 0x58);
      dVar37 = *(double *)((longlong)local_560 + lVar48 + 0x40);
      dVar38 = *(double *)((longlong)local_560 + lVar48 + 0x48);
      dVar39 = *(double *)((longlong)local_560 + lVar48 + 0x60);
      dVar40 = *(double *)((longlong)local_560 + lVar48 + 0x68);
      dVar41 = *(double *)((longlong)local_560 + lVar48 + 0x70);
      dVar42 = *(double *)((longlong)local_560 + lVar48 + 0x78);
      *(double *)((longlong)local_d40 + lVar48 + 0x10) =
           dVar41 * dVar123 + dVar35 * dVar117 + dVar33 * dVar107 + dVar29 * dVar63 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x18) =
           dVar42 * dVar128 + dVar36 * dVar121 + dVar34 * dVar93 + dVar30 * dVar92 + 0.0;
      *(double *)((longlong)local_d40 + lVar48) =
           dVar39 * dVar123 + dVar37 * dVar117 + dVar31 * dVar107 + dVar27 * dVar63 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 8) =
           dVar40 * dVar128 + dVar38 * dVar121 + dVar32 * dVar93 + dVar28 * dVar92 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x30) =
           dVar41 * dVar175 + dVar35 * dVar172 + dVar33 * dVar163 + dVar29 * dVar148 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x38) =
           dVar42 * dVar173 + dVar36 * dVar165 + dVar34 * dVar155 + dVar30 * dVar151 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x20) =
           dVar39 * dVar175 + dVar37 * dVar172 + dVar31 * dVar163 + dVar27 * dVar148 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x28) =
           dVar40 * dVar173 + dVar38 * dVar165 + dVar32 * dVar155 + dVar28 * dVar151 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x50) =
           dVar41 * dVar7 + dVar35 * dVar5 + dVar33 * dVar184 + dVar29 * dVar182 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x58) =
           dVar42 * dVar6 + dVar36 * dVar4 + dVar34 * dVar3 + dVar30 * dVar177 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x40) =
           dVar39 * dVar7 + dVar37 * dVar5 + dVar31 * dVar184 + dVar27 * dVar182 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x48) =
           dVar40 * dVar6 + dVar38 * dVar4 + dVar32 * dVar3 + dVar28 * dVar177 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x70) =
           dVar41 * dVar15 + dVar35 * dVar12 + dVar33 * dVar10 + dVar29 * dVar9 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x78) =
           dVar42 * dVar14 + dVar36 * dVar13 + dVar34 * dVar11 + dVar30 * dVar8 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x60) =
           dVar39 * dVar15 + dVar37 * dVar12 + dVar31 * dVar10 + dVar27 * dVar9 + 0.0;
      *(double *)((longlong)local_d40 + lVar48 + 0x68) =
           dVar40 * dVar14 + dVar38 * dVar13 + dVar32 * dVar11 + dVar28 * dVar8 + 0.0;
      lVar48 = lVar48 + 0x80;
    } while (lVar48 != 0x260);
    local_1190._8_8_ = dStack_c58;
    local_1190._0_8_ = local_c60;
    dVar93 = (dVar108 + dVar139) * ___xmm_3fe00000000000003fe0000000000000;
    dVar107 = (dVar112 + dVar147) * _UNK_150689678;
    dVar117 = (dVar124 + dVar156) * ___xmm_3fe00000000000003fe0000000000000;
    dVar121 = (dVar129 + dVar164) * _UNK_150689678;
    dVar123 = (dVar114 + dVar144) * ___xmm_3fe00000000000003fe0000000000000;
    dVar148 = (dVar116 + dVar132) * _UNK_150689678;
    dVar63 = (dVar118 + dVar149) * ___xmm_3fe00000000000003fe0000000000000;
    dVar92 = (dVar122 + dVar152) * _UNK_150689678;
    dVar128 = (dVar133 + dVar174) * ___xmm_3fe00000000000003fe0000000000000;
    dVar151 = (dVar138 + dVar176) * _UNK_150689678;
    local_11a0._0_8_ = dVar128 * local_bd0 + dVar63 * local_c50 + dVar123 * local_d40[0xe];
    local_11a0._8_8_ = dVar151 * dStack_bc8 + dVar92 * dStack_c48 + dVar148 * local_d40[0xf];
    dVar155 = (dVar143 + dVar178) * ___xmm_3fe00000000000003fe0000000000000;
    dVar163 = (dVar130 + dVar183) * _UNK_150689678;
    dVar144 = (dVar144 - dVar114) * ___xmm_3fe00000000000003fe0000000000000;
    dVar132 = (dVar132 - dVar116) * _UNK_150689678;
    dVar165 = (dVar139 - dVar108) * ___xmm_3fe00000000000003fe0000000000000;
    dVar173 = (dVar147 - dVar112) * _UNK_150689678;
    dVar139 = (dVar149 - dVar118) * ___xmm_3fe00000000000003fe0000000000000;
    dVar147 = (dVar152 - dVar122) * _UNK_150689678;
    dVar108 = (dVar156 - dVar124) * ___xmm_3fe00000000000003fe0000000000000;
    dVar112 = (dVar164 - dVar129) * _UNK_150689678;
    dVar178 = (dVar178 - dVar143) * ___xmm_3fe00000000000003fe0000000000000;
    dVar183 = (dVar183 - dVar130) * _UNK_150689678;
    dVar149 = (dVar174 - dVar133) * ___xmm_3fe00000000000003fe0000000000000;
    dVar152 = (dVar176 - dVar138) * _UNK_150689678;
    local_11f0._8_8_ = local_d40[0xd] * dVar173;
    local_11f0._0_8_ = local_d40[0xc] * dVar165;
    local_11b0._8_8_ = dStack_ca8 * dVar132;
    local_11b0._0_8_ = local_d40[0x12] * dVar144;
    local_11c0._0_8_ =
         (double)((ulonglong)(local_c50 * dVar139) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)((ulonglong)(local_d40[0xe] * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff);
    local_11c0._8_8_ =
         (double)((ulonglong)(dStack_c48 * dVar147) & _UNK_15061cc88) +
         (double)((ulonglong)(local_d40[0xf] * dVar132) & _UNK_15061cc88);
    local_11e0._0_8_ =
         (double)((ulonglong)(local_c30 * dVar139) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)((ulonglong)(local_d40[0x12] * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff);
    local_11e0._8_8_ =
         (double)((ulonglong)(dStack_c28 * dVar147) & _UNK_15061cc88) +
         (double)((ulonglong)(dStack_ca8 * dVar132) & _UNK_15061cc88);
    local_11d0._0_8_ =
         (double)((ulonglong)(local_c40 * dVar108) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)((ulonglong)(local_d40[0x10] * dVar165) & __xmm_7fffffffffffffff7fffffffffffffff);
    local_11d0._8_8_ =
         (double)((ulonglong)(dStack_c38 * dVar112) & _UNK_15061cc88) +
         (double)((ulonglong)(local_d40[0x11] * dVar173) & _UNK_15061cc88);
    auVar101._0_8_ = (double)local_11a0._0_8_ + local_b50;
    auVar101._8_8_ = (double)local_11a0._8_8_ + dStack_b48;
    dVar114 = dVar155 * local_be0 + dVar117 * local_c60 + dVar93 * local_d40[0xc] + local_b60;
    dVar116 = dVar163 * dStack_bd8 + dVar121 * dStack_c58 + dVar107 * local_d40[0xd] + dStack_b58;
    auVar136._0_8_ =
         dVar128 * local_bb0 + dVar63 * local_c30 + dVar123 * local_d40[0x12] + local_b30;
    auVar136._8_8_ = dVar151 * dStack_ba8 + dVar92 * dStack_c28 + dVar148 * dStack_ca8 + dStack_b28;
    dVar143 = (double)((ulonglong)(local_be0 * dVar178) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(local_c60 * dVar108) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(local_d40[0xc] * dVar165) &
                      __xmm_7fffffffffffffff7fffffffffffffff);
    dVar130 = (double)((ulonglong)(dStack_bd8 * dVar183) & _UNK_15061cc88) +
              (double)((ulonglong)(dStack_c58 * dVar112) & _UNK_15061cc88) +
              (double)((ulonglong)(local_d40[0xd] * dVar173) & _UNK_15061cc88);
    dVar172 = dVar155 * local_bc0 + dVar117 * local_c40 + dVar93 * local_d40[0x10] + local_b40;
    dVar175 = dVar163 * dStack_bb8 + dVar121 * dStack_c38 + dVar107 * local_d40[0x11] + dStack_b38;
    dVar118 = (double)((ulonglong)(local_bd0 * dVar149) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)local_11c0._0_8_;
    dVar122 = (double)((ulonglong)(dStack_bc8 * dVar152) & _UNK_15061cc88) +
              (double)local_11c0._8_8_;
    dVar156 = dVar128 * local_b90 + dVar63 * local_c10 + dVar123 * local_c90 + local_b10;
    dVar164 = dVar151 * dStack_b88 + dVar92 * dStack_c08 + dVar148 * dStack_c88 + dStack_b08;
    dVar133 = (double)((ulonglong)(local_bc0 * dVar178) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)local_11d0._0_8_;
    dVar138 = (double)((ulonglong)(dStack_bb8 * dVar183) & _UNK_15061cc88) +
              (double)local_11d0._8_8_;
    auVar167._0_8_ = dVar155 * local_ba0 + dVar117 * local_c20 + dVar93 * local_ca0 + local_b20;
    auVar167._8_8_ = dVar163 * dStack_b98 + dVar121 * dStack_c18 + dVar107 * dStack_c98 + dStack_b18
    ;
    dVar124 = (double)((ulonglong)(local_bb0 * dVar149) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)local_11e0._0_8_;
    dVar129 = (double)((ulonglong)(dStack_ba8 * dVar152) & _UNK_15061cc88) +
              (double)local_11e0._8_8_;
    dVar174 = (double)((ulonglong)(dVar178 * local_ba0) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(dVar108 * local_c20) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(dVar165 * local_ca0) & __xmm_7fffffffffffffff7fffffffffffffff);
    dVar176 = (double)((ulonglong)(dVar183 * dStack_b98) & _UNK_15061cc88) +
              (double)((ulonglong)(dVar112 * dStack_c18) & _UNK_15061cc88) +
              (double)((ulonglong)(dVar173 * dStack_c98) & _UNK_15061cc88);
    dVar108 = (double)((ulonglong)(dVar149 * local_b90) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(dVar139 * local_c10) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(dVar144 * local_c90) & __xmm_7fffffffffffffff7fffffffffffffff);
    dVar112 = (double)((ulonglong)(dVar152 * dStack_b88) & _UNK_15061cc88) +
              (double)((ulonglong)(dVar147 * dStack_c08) & _UNK_15061cc88) +
              (double)((ulonglong)(dVar132 * dStack_c88) & _UNK_15061cc88);
    local_1160._8_8_ = dVar116 - dVar130;
    local_1160._0_8_ = dVar114 - dVar143;
    auVar168._0_8_ = auVar101._0_8_ - dVar118;
    auVar168._8_8_ = auVar101._8_8_ - dVar122;
    local_1170._8_8_ = dVar175 - dVar138;
    local_1170._0_8_ = dVar172 - dVar133;
    auVar127._8_8_ = dVar130 + dVar116;
    auVar127._0_8_ = dVar143 + dVar114;
    auVar169._0_8_ = auVar136._0_8_ - dVar124;
    auVar169._8_8_ = auVar136._8_8_ - dVar129;
    auVar171._0_8_ = dVar118 + auVar101._0_8_;
    auVar171._8_8_ = dVar122 + auVar101._8_8_;
    local_1140._8_8_ = auVar167._8_8_ - dVar176;
    local_1140._0_8_ = auVar167._0_8_ - dVar174;
    local_1150._8_8_ = dVar138 + dVar175;
    local_1150._0_8_ = dVar133 + dVar172;
    auVar170._0_8_ = dVar156 - dVar108;
    auVar170._8_8_ = dVar164 - dVar112;
    auVar131._0_8_ = dVar124 + auVar136._0_8_;
    auVar131._8_8_ = dVar129 + auVar136._8_8_;
    auVar110._8_8_ = auVar131._8_8_;
    auVar110._0_8_ = auVar131._0_8_;
    auVar103._0_8_ = dVar174 + auVar167._0_8_;
    auVar103._8_8_ = dVar176 + auVar167._8_8_;
    auVar79._0_8_ = dVar108 + dVar156;
    auVar79._8_8_ = dVar112 + dVar164;
    auVar150[0] = -(local_10d0[0] == '\0');
    auVar150[1] = -(local_10d0[1] == '\0');
    auVar150[2] = -(local_10d0[2] == '\0');
    auVar150[3] = -(local_10d0[3] == '\0');
    auVar150[4] = -(local_10d0[4] == '\0');
    auVar150[5] = -(local_10d0[5] == '\0');
    auVar150[6] = -(local_10d0[6] == '\0');
    auVar150[7] = -(local_10d0[7] == '\0');
    auVar150[8] = -(local_10d0[8] == '\0');
    auVar150[9] = -(local_10d0[9] == '\0');
    auVar150[10] = -(local_10d0[10] == '\0');
    auVar150[0xb] = -(local_10d0[0xb] == '\0');
    auVar150[0xc] = -(local_10d0[0xc] == '\0');
    auVar150[0xd] = -(local_10d0[0xd] == '\0');
    auVar150[0xe] = -(local_10d0[0xe] == '\0');
    auVar150[0xf] = -(local_10d0[0xf] == '\0');
    auVar85._8_4_ = 0xffffffff;
    auVar85._0_8_ = 0xffffffffffffffff;
    auVar85._12_4_ = 0xffffffff;
    auVar135 = pmovsxbd(auVar101,auVar85 ^ auVar150);
    auVar66 = auVar111 & auVar135;
    iVar113 = movmskps(0x260,auVar66);
    auVar140 = auVar171;
    auVar153 = auVar168;
    auVar96 = auVar131;
    if (iVar113 == 0) {
LAB_140a803d9:
      auVar66 = pmovsxbd(auVar66,auVar150);
      iVar113 = movmskps(iVar113,auVar111 & auVar66);
      if ((iVar113 != 0) && ((char)iVar113 != '\0')) {
        auVar111 = pmovzxbd(auVar66,auVar150);
        auVar90._0_4_ = auVar111._0_4_ << 0x1f;
        auVar90._4_4_ = auVar111._4_4_ << 0x1f;
        auVar90._8_4_ = auVar111._8_4_ << 0x1f;
        auVar90._12_4_ = auVar111._12_4_ << 0x1f;
        uVar56 = movmskps((int)uVar49,auVar90);
        if ((uVar56 & 1) == 0) {
          auVar91 = auVar135;
          auVar66 = auVar96;
          auVar67 = auVar140;
          local_10b0 = auVar167;
          local_10e0 = auVar153;
          auVar111 = auVar136;
          if ((uVar56 & 2) != 0) goto LAB_140a80457;
LAB_140a80dd0:
          local_1160 = blendpd(auVar136,auVar111,1);
          local_1170 = blendpd(auVar96,auVar66,1);
          local_1140 = blendpd(auVar167,local_10b0,1);
          auVar127 = blendpd(auVar153,local_10e0,1);
          local_1150 = blendpd(auVar140,auVar67,1);
          auVar103 = blendpd(auVar135,auVar91,1);
        }
        else {
          auVar91._8_8_ = auVar103._8_8_;
          auVar91._0_8_ = auVar103._0_8_;
          local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffffffff00 | 1;
          auVar66 = local_1170;
          auVar67 = local_1150;
          local_10b0 = local_1140;
          local_10e0 = auVar127;
          auVar111 = local_1160;
          if ((uVar56 & 2) == 0) goto LAB_140a80dd0;
LAB_140a80457:
          local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffffff00ff | 0x100;
        }
        bVar62 = (uVar56 & 4) != 0;
        auVar135 = local_11b0;
        if (bVar62) {
          auVar135 = auVar168;
        }
        cVar57 = (char)((char)uVar56 << 4) >> 4;
        auVar104 = local_1190;
        auVar140 = local_11c0;
        auVar68 = local_11e0;
        auVar137 = local_11a0;
        auVar153 = local_11d0;
        if (bVar62) {
          auVar137._8_8_ = auVar131._8_8_;
          auVar137._0_8_ = auVar131._0_8_;
          auVar104._8_8_ = auVar79._8_8_;
          auVar104._0_8_ = auVar79._0_8_;
          local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffff00ffff | 0x10000;
          auVar140 = auVar169;
          auVar68 = auVar171;
          auVar153 = auVar170;
        }
        if (-1 < cVar57) {
          auVar168 = blendpd(local_11b0,auVar135,1);
          auVar169 = blendpd(local_11c0,auVar140,1);
          auVar170 = blendpd(local_11d0,auVar153,1);
          auVar171 = blendpd(local_11e0,auVar68,1);
          auVar110 = blendpd(local_11a0,auVar137,1);
          auVar79 = blendpd(local_1190,auVar104,1);
        }
        if (cVar57 < '\0') {
          local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffff00ffffff | 0x1000000;
        }
        auVar136 = blendpd(local_1160,auVar111,1);
        local_11b0 = blendpd(auVar168,auVar135,1);
        auVar96 = blendpd(local_1170,auVar66,1);
        local_11c0 = blendpd(auVar169,auVar140,1);
        auVar167 = blendpd(local_1140,local_10b0,1);
        local_11d0 = blendpd(auVar170,auVar153,1);
        auVar153 = blendpd(auVar127,local_10e0,1);
        local_11e0 = blendpd(auVar171,auVar68,1);
        auVar140 = blendpd(local_1150,auVar67,1);
        local_11a0 = blendpd(auVar110,auVar137,1);
        auVar135 = blendpd(auVar103,auVar91,1);
        local_1190 = blendpd(auVar79,auVar104,1);
      }
    }
    else {
      auVar140 = minpd(local_fa0,auVar168);
      uVar56 = movmskps((int)uVar49,auVar135);
      bVar52 = (char)((char)uVar56 << 4) >> 4;
      if ((uVar56 & 4) != 0) {
        auVar135 = blendpd(auVar135,auVar140,1);
        local_11b0 = auVar135;
      }
      if ((char)bVar52 < '\0') {
        auVar135 = blendpd(local_11b0,auVar140,2);
        local_11b0 = auVar135;
      }
      uVar49 = (ulonglong)bVar52;
      auVar140 = minpd(local_f90,auVar169);
      if ((bVar52 & 4) != 0) {
        auVar135 = blendpd(auVar135,auVar140,1);
        local_11c0 = auVar135;
      }
      if ((char)bVar52 < '\0') {
        auVar135 = blendpd(local_11c0,auVar140,2);
        local_11c0 = auVar135;
      }
      auVar140 = minpd(local_f80,auVar170);
      if ((bVar52 & 4) != 0) {
        auVar135 = blendpd(auVar135,auVar140,1);
        local_11d0 = auVar135;
      }
      if ((char)bVar52 < '\0') {
        auVar135 = blendpd(local_11d0,auVar140,2);
        local_11d0 = auVar135;
      }
      auVar140 = maxpd(local_1060,auVar171);
      if ((bVar52 & 4) != 0) {
        auVar135 = blendpd(auVar135,auVar140,1);
        local_11e0 = auVar135;
      }
      if ((char)bVar52 < '\0') {
        auVar135 = blendpd(local_11e0,auVar140,2);
        local_11e0 = auVar135;
      }
      auVar140 = maxpd(local_1050,auVar110);
      if ((bVar52 & 4) != 0) {
        auVar135 = blendpd(auVar135,auVar140,1);
        local_11a0 = auVar135;
      }
      if ((char)bVar52 < '\0') {
        auVar135 = blendpd(local_11a0,auVar140,2);
        local_11a0 = auVar135;
      }
      auVar66 = maxpd(local_1040,auVar79);
      if ((bVar52 & 4) != 0) {
        local_1190 = blendpd(auVar135,auVar66,1);
      }
      auVar96 = minpd(local_1120,local_1170);
      auVar67 = minpd(local_1110,local_1140);
      auVar153 = maxpd(local_1100,auVar127);
      auVar140 = maxpd(local_10f0,local_1150);
      auVar135 = maxpd(auVar119,auVar103);
      if ((char)bVar52 < '\0') {
        local_1190 = blendpd(local_1190,auVar66,2);
      }
      auVar136 = minpd(local_10c0,local_1160);
      auVar96 = blendpd(auVar96,auVar96,1);
      auVar167 = blendpd(auVar67,auVar67,1);
      auVar153 = blendpd(auVar153,auVar153,1);
      auVar140 = blendpd(auVar140,auVar140,1);
      auVar135 = blendpd(auVar135,auVar135,1);
      local_11f0 = local_10d0;
      if ((bVar59 & 0xf) != (byte)iVar113) goto LAB_140a803d9;
    }
    uVar49 = (ulonglong)bVar59;
    if ((bVar59 & 1) == 0) {
      bVar62 = (bVar59 & 2) == 0;
      auVar66 = local_1120;
      auVar67 = local_1110;
      auVar68 = local_1100;
      auVar69 = local_10f0;
      auVar70 = local_10d0;
      auVar71 = auVar119;
      auVar111 = local_10c0;
      if (!bVar62) goto LAB_140a80676;
LAB_140a80bce:
      auVar136 = blendpd(local_10c0,auVar111,1);
      if (bVar62) goto LAB_140a80be3;
LAB_140a8067c:
      if (!bVar62) goto LAB_140a80682;
LAB_140a80bf8:
      auVar167 = blendpd(local_1110,auVar67,1);
      if (bVar62) goto LAB_140a80c0f;
LAB_140a80688:
      if (bVar62) {
LAB_140a8068a:
        auVar140 = blendpd(local_10f0,auVar69,1);
      }
    }
    else {
      bVar62 = (bVar59 & 2) == 0;
      auVar66 = auVar96;
      auVar67 = auVar167;
      auVar68 = auVar153;
      auVar69 = auVar140;
      auVar70 = local_11f0;
      auVar71 = auVar135;
      auVar111 = auVar136;
      if (bVar62) goto LAB_140a80bce;
LAB_140a80676:
      if (!bVar62) goto LAB_140a8067c;
LAB_140a80be3:
      auVar96 = blendpd(local_1120,auVar66,1);
      if (bVar62) goto LAB_140a80bf8;
LAB_140a80682:
      if (!bVar62) goto LAB_140a80688;
LAB_140a80c0f:
      auVar153 = blendpd(local_1100,auVar68,1);
      if (bVar62) goto LAB_140a8068a;
    }
    if (bVar62) {
      auVar135 = blendpd(auVar119,auVar71,1);
      auVar119 = pblendvb(auVar70,local_10d0,___xmm_000000000000000000000000ffffff00);
      auVar70 = auVar119;
    }
    else {
      auVar119 = pblendvb(auVar70,local_10d0,___xmm_000000000000000000000000ffffff00);
      auVar70 = local_11f0;
    }
    if ((bVar59 & 4) == 0) {
      auVar77 = pblendvb(auVar70,auVar119,___xmm_000000000000000000000000ffff00ff);
      auVar119 = local_1060;
      auVar70 = local_1050;
      auVar72 = local_1040;
      auVar76 = auVar77;
      auVar73 = local_f80;
      auVar74 = local_f90;
      auVar75 = local_fa0;
      if ((char)bVar59 < '\0') goto LAB_140a8075e;
LAB_140a80cc4:
      local_11b0 = pblendw(local_fa0,auVar75,0xf);
      if (-1 < (char)bVar59) goto LAB_140a80ce0;
LAB_140a80764:
      if ((char)bVar59 < '\0') goto LAB_140a8076a;
LAB_140a80cfc:
      local_11d0 = pblendw(local_f80,auVar73,0xf);
      if (-1 < (char)bVar59) goto LAB_140a80d18;
LAB_140a80770:
      if ((char)bVar59 < '\0') goto LAB_140a80776;
LAB_140a80d33:
      local_11a0 = pblendw(local_1050,auVar70,0xf);
      if (-1 < (char)bVar59) goto LAB_140a80d4e;
LAB_140a8077c:
      auVar76 = pblendvb(auVar76,auVar77,___xmm_000000000000000000000000ff00ffff);
    }
    else {
      auVar77 = pblendvb(auVar70,auVar119,___xmm_000000000000000000000000ffff00ff);
      auVar119 = local_11e0;
      auVar70 = local_11a0;
      auVar72 = local_1190;
      auVar76 = local_11f0;
      auVar73 = local_11d0;
      auVar74 = local_11c0;
      auVar75 = local_11b0;
      if (-1 < (char)bVar59) goto LAB_140a80cc4;
LAB_140a8075e:
      if ((char)bVar59 < '\0') goto LAB_140a80764;
LAB_140a80ce0:
      local_11c0 = pblendw(local_f90,auVar74,0xf);
      if (-1 < (char)bVar59) goto LAB_140a80cfc;
LAB_140a8076a:
      if ((char)bVar59 < '\0') goto LAB_140a80770;
LAB_140a80d18:
      local_11e0 = pblendw(local_1060,auVar119,0xf);
      if (-1 < (char)bVar59) goto LAB_140a80d33;
LAB_140a80776:
      if ((char)bVar59 < '\0') goto LAB_140a8077c;
LAB_140a80d4e:
      local_1190 = pblendw(local_1040,auVar72,0xf);
      auVar76 = pblendvb(auVar76,auVar77,___xmm_000000000000000000000000ff00ffff);
    }
    if (-1 < (char)bVar59) {
      local_11f0 = auVar76;
    }
    local_10d0 = pblendvb(local_11f0,auVar76,___xmm_00000000000000000000000000ffffff);
    local_10c0 = blendpd(auVar136,auVar111,1);
    local_fa0 = pblendw(local_11b0,auVar75,0xf);
    local_1120 = blendpd(auVar96,auVar66,1);
    local_f90 = pblendw(local_11c0,auVar74,0xf);
    local_1110 = blendpd(auVar167,auVar67,1);
    local_f80 = pblendw(local_11d0,auVar73,0xf);
    local_1100 = blendpd(auVar153,auVar68,1);
    local_1060 = pblendw(local_11e0,auVar119,0xf);
    local_10f0 = blendpd(auVar140,auVar69,1);
    local_1050 = pblendw(local_11a0,auVar70,0xf);
    auVar119 = blendpd(auVar135,auVar71,1);
    local_1040 = pblendw(local_1190,auVar72,0xf);
LAB_140a808b8:
    local_9f0 = local_10c0._0_8_;
    adStack_9e8[0] = (double)local_1120._0_8_;
    local_9b8 = local_10c0._8_8_;
    local_980 = local_fa0._0_8_;
    local_948[0] = (double)local_fa0._8_8_;
    local_9b0 = local_1120._8_8_;
    uStack_9a8 = local_1110._8_8_;
    local_978 = local_f90._0_8_;
    uStack_970 = local_f80._0_8_;
    local_948[1] = (double)local_f90._8_8_;
    local_948[2] = (double)local_f80._8_8_;
    adStack_9e8[1] = (double)local_1110._0_8_;
    local_9d8[0] = (double)local_1100._0_8_;
    local_9d8[1] = (double)local_10f0._0_8_;
    local_9a0 = local_1100._8_8_;
    uStack_998 = local_10f0._8_8_;
    local_968 = local_1060._0_8_;
    adStack_960[0] = (double)local_1050._0_8_;
    local_948[3] = (double)local_1060._8_8_;
    local_948[4] = (double)local_1050._8_8_;
    local_9d8[2] = (double)auVar119._0_8_;
    local_990 = auVar119._8_8_;
    adStack_960[1] = (double)local_1040._0_8_;
    local_948[5] = (double)local_1040._8_8_;
    local_9c0[0] = local_10d0[0];
    local_988 = local_10d0[1];
    local_950[0] = local_10d0[2];
    local_918[0] = local_10d0[3];
    auVar119._0_4_ = -(uint)((int)(uint)__xmm_00000003000000020000000100000000 < (int)param_7);
    auVar119._4_4_ = -(uint)((int)__xmm_00000003000000020000000100000000._4_4_ < (int)param_7);
    auVar119._8_4_ = -(uint)((int)_UNK_150631e08 < (int)param_7);
    auVar119._12_4_ = -(uint)((int)_UNK_150631e0c < (int)param_7);
    uVar56 = movmskps((int)uVar49,auVar119);
    if (uVar56 == 0) {
      return;
    }
    uVar49 = (ulonglong)(uVar56 & 0xff);
    do {
      if (uVar49 == 0) {
        uVar50 = 0x40;
      }
      else {
        uVar50 = 0;
        for (uVar17 = uVar49; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
          uVar50 = uVar50 + 1;
        }
      }
      lVar48 = uVar50 * 0x38;
      cVar51 = param_6[3][0];
      cVar57 = local_9c0[lVar48];
      if ((cVar51 == '\0') || (cVar57 == '\0')) {
        if (cVar57 == '\0') {
          cVar51 = param_6[3][0];
          dVar116 = *(double *)param_6[2];
          dVar114 = *(double *)(param_6[1] + 8);
          dVar112 = *(double *)param_6[1];
          uVar94 = *(undefined8 *)*param_6;
          dVar108 = *(double *)(*param_6 + 8);
          dVar118 = *(double *)(param_6[2] + 8);
        }
        else {
          uVar94 = *(undefined8 *)*(undefined1 (*) [16])(&local_9f0 + uVar50 * 7);
          dVar108 = adStack_9e8[uVar50 * 7];
          dVar112 = adStack_9e8[uVar50 * 7 + 1];
          dVar114 = local_9d8[uVar50 * 7];
          dVar116 = local_9d8[uVar50 * 7 + 1];
          cVar51 = cVar57;
          dVar118 = *(double *)(local_9c0 + lVar48 + -8);
        }
      }
      else {
        auVar119 = minpd(*param_6,*(undefined1 (*) [16])(&local_9f0 + uVar50 * 7));
        uVar94 = auVar119._0_8_;
        dVar108 = auVar119._8_8_;
        dVar112 = *(double *)param_6[1];
        if (adStack_9e8[uVar50 * 7 + 1] <= *(double *)param_6[1]) {
          dVar112 = adStack_9e8[uVar50 * 7 + 1];
        }
        auVar119 = maxpd(*(undefined1 (*) [16])(param_6[1] + 8),
                         *(undefined1 (*) [16])(local_9d8 + uVar50 * 7));
        dVar114 = auVar119._0_8_;
        dVar116 = auVar119._8_8_;
        dVar118 = *(double *)(param_6[2] + 8);
        if (*(double *)(param_6[2] + 8) <= *(double *)(local_9c0 + lVar48 + -8)) {
          dVar118 = *(double *)(local_9c0 + lVar48 + -8);
        }
      }
      uVar49 = uVar49 & ~(1L << (uVar50 & 0x3f));
      *(undefined8 *)*param_6 = uVar94;
      *(double *)(*param_6 + 8) = dVar108;
      *(double *)param_6[1] = dVar112;
      *(double *)(param_6[1] + 8) = dVar114;
      *(double *)param_6[2] = dVar116;
      *(double *)(param_6[2] + 8) = dVar118;
      param_6[3][0] = cVar51;
    } while (uVar49 != 0);
    return;
  }
  local_910 = *param_8;
  if ((int)uVar56 < 1) {
    auVar140 = (undefined1  [16])0x0;
    uVar105 = 0;
    auVar111 = ZEXT816(0);
    auVar64 = ZEXT816(0);
    auVar135 = ZEXT816(0);
    auVar119 = (undefined1  [16])0x0;
    uVar53 = uVar44;
    local_1120 = auVar64;
    local_1110 = auVar64;
    local_1100 = auVar64;
    local_10f0 = auVar64;
    local_1060 = auVar64;
    local_1050 = auVar64;
    local_1040 = auVar64;
    local_1030 = auVar64;
    local_fd0 = auVar64;
  }
  else {
    auVar153 = (undefined1  [16])0x0;
    uVar105 = 0;
    local_1120 = ZEXT816(0);
    auVar119 = (undefined1  [16])0x0;
    local_1110 = ZEXT816(0);
    local_1060 = ZEXT816(0);
    local_1100 = ZEXT816(0);
    local_1050 = ZEXT816(0);
    local_10f0 = ZEXT816(0);
    local_1040 = ZEXT816(0);
    auVar135 = ZEXT816(0);
    local_fd0 = ZEXT816(0);
    auVar111 = ZEXT816(0);
    local_1030 = ZEXT816(0);
    auVar140 = (undefined1  [16])0x0;
    do {
      auVar64 = *(undefined1 (*) [16])(param_2 + (ulonglong)(uVar105 * 4));
      uVar53 = uVar105 * 7;
      uVar49 = (ulonglong)uVar53;
      iVar113 = auVar64._12_4_ << 2;
      auVar109._8_4_ = 0xffffffff;
      auVar109._0_8_ = 0xffffffffffffffff;
      auVar109._12_4_ = 0xffffffff;
      auVar134._0_4_ = -(uint)(*(int *)(param_1 + (auVar64._0_4_ << 2)) == -1);
      auVar134._4_4_ = -(uint)(*(int *)(param_1 + auVar64._4_4_ * 4) == -1);
      auVar134._8_4_ = -(uint)(*(int *)(param_1 + (auVar64._8_4_ << 2)) == -1);
      auVar134._12_4_ = -(uint)(*(int *)(param_1 + iVar113) == -1);
      auVar95[0] = -(*(char *)(param_4 + 0x30 + uVar49 * 8) == '\0');
      auVar95[1] = -(*(char *)(param_4 + 0x68 + uVar49 * 8) == '\0');
      auVar95[2] = -(*(char *)(param_4 + 0xa0 + uVar49 * 8) == '\0');
      auVar95[3] = -(*(char *)(param_4 + 0xd8 + uVar49 * 8) == '\0');
      auVar95[4] = 0xff;
      auVar95[5] = 0xff;
      auVar95[6] = 0xff;
      auVar95[7] = 0xff;
      auVar95[8] = -(auVar153[8] == '\0');
      auVar95[9] = -(auVar153[9] == '\0');
      auVar95[10] = -(auVar153[10] == '\0');
      auVar95[0xb] = -(auVar153[0xb] == '\0');
      auVar95[0xc] = -(auVar153[0xc] == '\0');
      auVar95[0xd] = -(auVar153[0xd] == '\0');
      auVar95[0xe] = -(auVar153[0xe] == '\0');
      auVar95[0xf] = -(auVar153[0xf] == '\0');
      auVar96 = pmovsxbd(auVar95 ^ auVar109,auVar95 ^ auVar109);
      auVar96 = ~auVar134 & auVar96;
      iVar113 = movmskps(iVar113,auVar96);
      if (iVar113 != 0) {
        dVar108 = *(double *)(param_4 + 0x70 + uVar49 * 8);
        dVar112 = *(double *)(param_4 + 0xa8 + uVar49 * 8);
        dVar114 = *(double *)(param_4 + uVar49 * 8);
        dVar116 = *(double *)(param_4 + 8 + uVar49 * 8);
        dVar118 = *(double *)(param_4 + 0x38 + uVar49 * 8);
        dVar122 = *(double *)(param_4 + 0x78 + uVar49 * 8);
        dVar124 = *(double *)(param_4 + 0xb0 + uVar49 * 8);
        dVar129 = *(double *)(param_4 + 0x40 + uVar49 * 8);
        dVar133 = *(double *)(param_4 + 0x10 + uVar49 * 8);
        dVar138 = *(double *)(param_4 + 0x80 + uVar49 * 8);
        dVar143 = *(double *)(param_4 + 0xb8 + uVar49 * 8);
        dVar130 = *(double *)(param_4 + 0x18 + uVar49 * 8);
        dVar144 = *(double *)(param_4 + 0x48 + uVar49 * 8);
        dVar132 = *(double *)(param_4 + 0x88 + uVar49 * 8);
        dVar139 = *(double *)(param_4 + 0xc0 + uVar49 * 8);
        dVar147 = *(double *)(param_4 + 0x50 + uVar49 * 8);
        dVar149 = *(double *)(param_4 + 0x90 + uVar49 * 8);
        dVar152 = *(double *)(param_4 + 200 + uVar49 * 8);
        dVar156 = *(double *)(param_4 + 0x20 + uVar49 * 8);
        dVar164 = *(double *)(param_4 + 0x58 + uVar49 * 8);
        dVar174 = *(double *)(param_4 + 0x98 + uVar49 * 8);
        dVar176 = *(double *)(param_4 + 0xd0 + uVar49 * 8);
        dVar178 = *(double *)(param_4 + 0x28 + uVar49 * 8);
        dVar183 = *(double *)(param_4 + 0x60 + uVar49 * 8);
        auVar65._0_4_ = auVar64._0_4_ << 7;
        auVar65._4_4_ = auVar64._4_4_ << 7;
        auVar65._8_4_ = auVar64._8_4_ << 7;
        auVar65._12_4_ = auVar64._12_4_ << 7;
        auVar65 = auVar65 & auVar96;
        lVar48 = param_3 + auVar65._0_4_;
        lVar47 = param_3 + auVar65._4_4_;
        lVar1 = param_3 + auVar65._8_4_;
        auVar66 = auVar96 & ___xmm_00000008000000080000000800000008;
        auVar67 = auVar96 & ___xmm_00000010000000100000001000000010;
        auVar68 = auVar96 & ___xmm_00000018000000180000001800000018;
        auVar69 = auVar96 & ___xmm_00000020000000200000002000000020;
        auVar70 = auVar96 & ___xmm_00000028000000280000002800000028;
        auVar71 = auVar96 & ___xmm_00000030000000300000003000000030;
        auVar72 = auVar96 & ___xmm_00000038000000380000003800000038;
        auVar73 = auVar96 & ___xmm_00000040000000400000004000000040;
        auVar74 = auVar96 & ___xmm_00000048000000480000004800000048;
        auVar75 = auVar96 & ___xmm_00000050000000500000005000000050;
        auVar76 = auVar96 & ___xmm_00000058000000580000005800000058;
        auVar77 = auVar96 & ___xmm_00000060000000600000006000000060;
        auVar78 = auVar96 & ___xmm_00000068000000680000006800000068;
        auVar79 = auVar96 & ___xmm_00000070000000700000007000000070;
        lVar55 = param_3 + auVar65._12_4_;
        auVar110 = auVar96 & ___xmm_00000078000000780000007800000078;
        local_760[0xe] = (double)*(undefined8 *)(param_3 + auVar65._8_4_);
        local_760[0xf] = (double)*(undefined8 *)(param_3 + auVar65._12_4_);
        local_760[0xc] = (double)*(undefined8 *)(param_3 + auVar65._0_4_);
        local_760[0xd] = (double)*(undefined8 *)(param_3 + auVar65._4_4_);
        local_760[0x12] = (double)*(undefined8 *)((ulonglong)auVar66._8_4_ + lVar1);
        uStack_6c8 = *(undefined8 *)((ulonglong)auVar66._12_4_ + lVar55);
        local_760[0x10] = (double)*(undefined8 *)((ulonglong)auVar66._0_4_ + lVar48);
        local_760[0x11] = (double)*(undefined8 *)((ulonglong)auVar66._4_4_ + lVar47);
        local_6b0 = *(undefined8 *)((ulonglong)auVar67._8_4_ + lVar1);
        uStack_6a8 = *(undefined8 *)((ulonglong)auVar67._12_4_ + lVar55);
        local_6c0 = *(undefined8 *)((ulonglong)auVar67._0_4_ + lVar48);
        uStack_6b8 = *(undefined8 *)((ulonglong)auVar67._4_4_ + lVar47);
        local_690 = *(undefined8 *)((ulonglong)auVar68._8_4_ + lVar1);
        uStack_688 = *(undefined8 *)((ulonglong)auVar68._12_4_ + lVar55);
        local_6a0 = *(undefined8 *)((ulonglong)auVar68._0_4_ + lVar48);
        uStack_698 = *(undefined8 *)((ulonglong)auVar68._4_4_ + lVar47);
        local_670 = *(undefined8 *)((ulonglong)auVar69._8_4_ + lVar1);
        uStack_668 = *(undefined8 *)((ulonglong)auVar69._12_4_ + lVar55);
        local_680 = *(undefined8 *)((ulonglong)auVar69._0_4_ + lVar48);
        uStack_678 = *(undefined8 *)((ulonglong)auVar69._4_4_ + lVar47);
        local_650 = *(undefined8 *)((ulonglong)auVar70._8_4_ + lVar1);
        uStack_648 = *(undefined8 *)((ulonglong)auVar70._12_4_ + lVar55);
        local_660 = *(undefined8 *)((ulonglong)auVar70._0_4_ + lVar48);
        uStack_658 = *(undefined8 *)((ulonglong)auVar70._4_4_ + lVar47);
        local_630 = *(undefined8 *)((ulonglong)auVar71._8_4_ + lVar1);
        uStack_628 = *(undefined8 *)((ulonglong)auVar71._12_4_ + lVar55);
        local_640 = *(undefined8 *)((ulonglong)auVar71._0_4_ + lVar48);
        uStack_638 = *(undefined8 *)((ulonglong)auVar71._4_4_ + lVar47);
        local_610 = *(undefined8 *)((ulonglong)auVar72._8_4_ + lVar1);
        uStack_608 = *(undefined8 *)((ulonglong)auVar72._12_4_ + lVar55);
        local_620 = *(undefined8 *)((ulonglong)auVar72._0_4_ + lVar48);
        uStack_618 = *(undefined8 *)((ulonglong)auVar72._4_4_ + lVar47);
        local_5f0 = *(undefined8 *)((ulonglong)auVar73._8_4_ + lVar1);
        uStack_5e8 = *(undefined8 *)((ulonglong)auVar73._12_4_ + lVar55);
        local_600 = *(undefined8 *)((ulonglong)auVar73._0_4_ + lVar48);
        uStack_5f8 = *(undefined8 *)((ulonglong)auVar73._4_4_ + lVar47);
        local_5d0 = *(undefined8 *)((ulonglong)auVar74._8_4_ + lVar1);
        uStack_5c8 = *(undefined8 *)((ulonglong)auVar74._12_4_ + lVar55);
        local_5e0 = *(undefined8 *)((ulonglong)auVar74._0_4_ + lVar48);
        uStack_5d8 = *(undefined8 *)((ulonglong)auVar74._4_4_ + lVar47);
        local_5b0 = *(undefined8 *)((ulonglong)auVar75._8_4_ + lVar1);
        uStack_5a8 = *(undefined8 *)((ulonglong)auVar75._12_4_ + lVar55);
        local_5c0 = *(undefined8 *)((ulonglong)auVar75._0_4_ + lVar48);
        uStack_5b8 = *(undefined8 *)((ulonglong)auVar75._4_4_ + lVar47);
        local_590 = *(undefined8 *)((ulonglong)auVar76._8_4_ + lVar1);
        uStack_588 = *(undefined8 *)((ulonglong)auVar76._12_4_ + lVar55);
        local_5a0 = *(undefined8 *)((ulonglong)auVar76._0_4_ + lVar48);
        uStack_598 = *(undefined8 *)((ulonglong)auVar76._4_4_ + lVar47);
        local_570 = *(undefined8 *)((ulonglong)auVar77._8_4_ + lVar1);
        uStack_568 = *(undefined8 *)((ulonglong)auVar77._12_4_ + lVar55);
        local_580 = *(undefined8 *)((ulonglong)auVar77._0_4_ + lVar48);
        uStack_578 = *(undefined8 *)((ulonglong)auVar77._4_4_ + lVar47);
        bVar59 = (char)((char)iVar113 << 4) >> 4;
        local_560[2] = (double)*(undefined8 *)((ulonglong)auVar78._8_4_ + lVar1);
        local_560[3] = (double)*(undefined8 *)((ulonglong)auVar78._12_4_ + lVar55);
        local_560[0] = *(double *)((ulonglong)auVar78._0_4_ + lVar48);
        local_560[1] = (double)*(undefined8 *)((ulonglong)auVar78._4_4_ + lVar47);
        local_560[6] = (double)*(undefined8 *)((ulonglong)auVar79._8_4_ + lVar1);
        local_560[7] = (double)*(undefined8 *)((ulonglong)auVar79._12_4_ + lVar55);
        local_560[4] = (double)*(undefined8 *)((ulonglong)auVar79._0_4_ + lVar48);
        local_560[5] = (double)*(undefined8 *)((ulonglong)auVar79._4_4_ + lVar47);
        local_560[10] = (double)*(undefined8 *)((ulonglong)auVar110._8_4_ + lVar1);
        local_560[0xb] = (double)*(undefined8 *)((ulonglong)auVar110._12_4_ + lVar55);
        local_560[8] = (double)*(undefined8 *)((ulonglong)auVar110._0_4_ + lVar48);
        local_560[9] = (double)*(undefined8 *)((ulonglong)auVar110._4_4_ + lVar47);
        dVar63 = *param_5;
        dVar92 = *param_5;
        dVar93 = param_5[4];
        dVar107 = param_5[4];
        dVar117 = param_5[8];
        dVar121 = param_5[8];
        dVar123 = param_5[0xc];
        dVar128 = param_5[0xc];
        lVar47 = 0x60;
        dVar148 = param_5[1];
        dVar151 = param_5[1];
        dVar163 = param_5[5];
        dVar155 = param_5[5];
        dVar172 = param_5[9];
        dVar165 = param_5[9];
        dVar173 = param_5[0xd];
        dVar175 = param_5[0xd];
        dVar177 = param_5[2];
        dVar182 = param_5[2];
        dVar184 = param_5[6];
        dVar3 = param_5[6];
        dVar4 = param_5[10];
        dVar5 = param_5[10];
        dVar6 = param_5[0xe];
        dVar7 = param_5[0xe];
        dVar8 = param_5[3];
        dVar9 = param_5[3];
        dVar10 = param_5[7];
        dVar11 = param_5[7];
        dVar12 = param_5[0xb];
        dVar13 = param_5[0xb];
        dVar14 = param_5[0xf];
        dVar15 = param_5[0xf];
        do {
          dVar27 = *(double *)((longlong)local_760 + lVar47);
          dVar28 = *(double *)((longlong)local_760 + lVar47 + 8);
          dVar29 = *(double *)((longlong)local_760 + lVar47 + 0x10);
          dVar30 = *(double *)((longlong)local_760 + lVar47 + 0x18);
          dVar31 = *(double *)((longlong)local_760 + lVar47 + 0x20);
          dVar32 = *(double *)((longlong)local_760 + lVar47 + 0x28);
          dVar33 = *(double *)((longlong)local_760 + lVar47 + 0x30);
          dVar34 = *(double *)((longlong)local_760 + lVar47 + 0x38);
          dVar35 = *(double *)((longlong)local_760 + lVar47 + 0x50);
          dVar36 = *(double *)((longlong)local_760 + lVar47 + 0x58);
          dVar37 = *(double *)((longlong)local_760 + lVar47 + 0x40);
          dVar38 = *(double *)((longlong)local_760 + lVar47 + 0x48);
          dVar39 = *(double *)((longlong)local_760 + lVar47 + 0x60);
          dVar40 = *(double *)((longlong)local_760 + lVar47 + 0x68);
          dVar41 = *(double *)((longlong)local_760 + lVar47 + 0x70);
          dVar42 = *(double *)((longlong)local_760 + lVar47 + 0x78);
          *(double *)((longlong)local_d40 + lVar47 + 0x10) =
               dVar41 * dVar123 + dVar35 * dVar117 + dVar33 * dVar93 + dVar29 * dVar63 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x18) =
               dVar42 * dVar128 +
               dVar36 * dVar121 + dVar34 * dVar107 + dVar30 * dVar92 + auVar153._8_8_;
          *(double *)((longlong)local_d40 + lVar47) =
               dVar39 * dVar123 + dVar37 * dVar117 + dVar31 * dVar93 + dVar27 * dVar63 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 8) =
               dVar40 * dVar128 +
               dVar38 * dVar121 + dVar32 * dVar107 + dVar28 * dVar92 + auVar153._8_8_;
          *(double *)((longlong)local_d40 + lVar47 + 0x30) =
               dVar41 * dVar173 + dVar35 * dVar172 + dVar33 * dVar163 + dVar29 * dVar148 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x38) =
               dVar42 * dVar175 + dVar36 * dVar165 + dVar34 * dVar155 + dVar30 * dVar151 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x20) =
               dVar39 * dVar173 + dVar37 * dVar172 + dVar31 * dVar163 + dVar27 * dVar148 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x28) =
               dVar40 * dVar175 + dVar38 * dVar165 + dVar32 * dVar155 + dVar28 * dVar151 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x50) =
               dVar41 * dVar6 + dVar35 * dVar4 + dVar33 * dVar184 + dVar29 * dVar177 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x58) =
               dVar42 * dVar7 + dVar36 * dVar5 + dVar34 * dVar3 + dVar30 * dVar182 + 0.0;
          auVar153 = ZEXT816(0);
          *(double *)((longlong)local_d40 + lVar47 + 0x40) =
               dVar39 * dVar6 + dVar37 * dVar4 + dVar31 * dVar184 + dVar27 * dVar177 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x48) =
               dVar40 * dVar7 + dVar38 * dVar5 + dVar32 * dVar3 + dVar28 * dVar182 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x70) =
               dVar41 * dVar14 + dVar35 * dVar12 + dVar33 * dVar10 + dVar29 * dVar8 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x78) =
               dVar42 * dVar15 + dVar36 * dVar13 + dVar34 * dVar11 + dVar30 * dVar9 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x60) =
               dVar39 * dVar14 + dVar37 * dVar12 + dVar31 * dVar10 + dVar27 * dVar8 + 0.0;
          *(double *)((longlong)local_d40 + lVar47 + 0x68) =
               dVar40 * dVar15 + dVar38 * dVar13 + dVar32 * dVar11 + dVar28 * dVar9 + 0.0;
          lVar47 = lVar47 + 0x80;
        } while (lVar47 != 0x260);
        dVar93 = (dVar114 + dVar130) * ___xmm_3fe00000000000003fe0000000000000;
        dVar107 = (dVar118 + dVar147) * _UNK_150689678;
        dVar117 = (dVar116 + dVar156) * ___xmm_3fe00000000000003fe0000000000000;
        dVar121 = (dVar129 + dVar164) * _UNK_150689678;
        dVar123 = (dVar108 + dVar132) * ___xmm_3fe00000000000003fe0000000000000;
        dVar128 = (dVar112 + dVar139) * _UNK_150689678;
        dVar63 = (dVar122 + dVar149) * ___xmm_3fe00000000000003fe0000000000000;
        dVar92 = (dVar124 + dVar152) * _UNK_150689678;
        dVar177 = (dVar138 + dVar174) * ___xmm_3fe00000000000003fe0000000000000;
        dVar182 = (dVar143 + dVar176) * _UNK_150689678;
        dVar173 = (dVar133 + dVar178) * ___xmm_3fe00000000000003fe0000000000000;
        dVar175 = (dVar144 + dVar183) * _UNK_150689678;
        dVar155 = (dVar130 - dVar114) * ___xmm_3fe00000000000003fe0000000000000;
        dVar163 = (dVar147 - dVar118) * _UNK_150689678;
        dVar148 = (dVar132 - dVar108) * ___xmm_3fe00000000000003fe0000000000000;
        dVar151 = (dVar139 - dVar112) * _UNK_150689678;
        dVar108 = (dVar156 - dVar116) * ___xmm_3fe00000000000003fe0000000000000;
        dVar112 = (dVar164 - dVar129) * _UNK_150689678;
        dVar165 = (dVar149 - dVar122) * ___xmm_3fe00000000000003fe0000000000000;
        dVar172 = (dVar152 - dVar124) * _UNK_150689678;
        dVar130 = dVar177 * local_bd0 + dVar63 * local_c50 + dVar123 * local_d40[0xe] + local_b50;
        dVar132 = dVar182 * dStack_bc8 + dVar92 * dStack_c48 + dVar128 * local_d40[0xf] + dStack_b48
        ;
        dVar114 = dVar173 * local_be0 + dVar117 * local_c60 + dVar93 * local_d40[0xc] + local_b60;
        dVar116 = dVar175 * dStack_bd8 + dVar121 * dStack_c58 + dVar107 * local_d40[0xd] +
                  dStack_b58;
        dVar139 = (dVar174 - dVar138) * ___xmm_3fe00000000000003fe0000000000000;
        dVar143 = (dVar176 - dVar143) * _UNK_150689678;
        dVar133 = (dVar178 - dVar133) * ___xmm_3fe00000000000003fe0000000000000;
        dVar138 = (dVar183 - dVar144) * _UNK_150689678;
        dVar118 = dVar177 * local_bb0 + dVar63 * local_c30 + dVar123 * local_d40[0x12] + local_b30;
        dVar122 = dVar182 * dStack_ba8 + dVar92 * dStack_c28 + dVar128 * dStack_ca8 + dStack_b28;
        dVar149 = (double)((ulonglong)(local_be0 * dVar133) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_c60 * dVar108) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_d40[0xc] * dVar155) &
                          __xmm_7fffffffffffffff7fffffffffffffff);
        dVar152 = (double)((ulonglong)(dStack_bd8 * dVar138) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_c58 * dVar112) & _UNK_15061cc88) +
                  (double)((ulonglong)(local_d40[0xd] * dVar163) & _UNK_15061cc88);
        dVar156 = dVar173 * local_bc0 + dVar117 * local_c40 + dVar93 * local_d40[0x10] + local_b40;
        dVar164 = dVar175 * dStack_bb8 + dVar121 * dStack_c38 + dVar107 * local_d40[0x11] +
                  dStack_b38;
        dVar124 = (double)((ulonglong)(local_bd0 * dVar139) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_c50 * dVar165) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_d40[0xe] * dVar148) &
                          __xmm_7fffffffffffffff7fffffffffffffff);
        dVar129 = (double)((ulonglong)(dStack_bc8 * dVar143) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_c48 * dVar172) & _UNK_15061cc88) +
                  (double)((ulonglong)(local_d40[0xf] * dVar151) & _UNK_15061cc88);
        dVar178 = dVar177 * local_b90 + dVar63 * local_c10 + dVar123 * local_c90 + local_b10;
        dVar183 = dVar182 * dStack_b88 + dVar92 * dStack_c08 + dVar128 * dStack_c88 + dStack_b08;
        local_11d0._0_8_ =
             (double)((ulonglong)(local_bc0 * dVar133) & __xmm_7fffffffffffffff7fffffffffffffff) +
             (double)((ulonglong)(local_c40 * dVar108) & __xmm_7fffffffffffffff7fffffffffffffff) +
             (double)((ulonglong)(local_d40[0x10] * dVar155) &
                     __xmm_7fffffffffffffff7fffffffffffffff);
        local_11d0._8_8_ =
             (double)((ulonglong)(dStack_bb8 * dVar138) & _UNK_15061cc88) +
             (double)((ulonglong)(dStack_c38 * dVar112) & _UNK_15061cc88) +
             (double)((ulonglong)(local_d40[0x11] * dVar163) & _UNK_15061cc88);
        dVar174 = dVar173 * local_ba0 + dVar117 * local_c20 + dVar93 * local_ca0 + local_b20;
        dVar176 = dVar175 * dStack_b98 + dVar121 * dStack_c18 + dVar107 * dStack_c98 + dStack_b18;
        dVar144 = (double)((ulonglong)(local_bb0 * dVar139) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_c30 * dVar165) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_d40[0x12] * dVar148) &
                          __xmm_7fffffffffffffff7fffffffffffffff);
        dVar147 = (double)((ulonglong)(dStack_ba8 * dVar143) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_c28 * dVar172) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_ca8 * dVar151) & _UNK_15061cc88);
        dVar108 = (double)((ulonglong)(dVar133 * local_ba0) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(dVar108 * local_c20) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(dVar155 * local_ca0) & __xmm_7fffffffffffffff7fffffffffffffff
                          );
        dVar112 = (double)((ulonglong)(dVar138 * dStack_b98) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar112 * dStack_c18) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar163 * dStack_c98) & _UNK_15061cc88);
        dVar133 = (double)((ulonglong)(dVar139 * local_b90) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(dVar165 * local_c10) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(dVar148 * local_c90) & __xmm_7fffffffffffffff7fffffffffffffff
                          );
        dVar138 = (double)((ulonglong)(dVar143 * dStack_b88) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar172 * dStack_c08) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar151 * dStack_c88) & _UNK_15061cc88);
        local_1190._8_8_ = dVar116 - dVar152;
        local_1190._0_8_ = dVar114 - dVar149;
        auVar81._0_8_ = dVar130 - dVar124;
        auVar81._8_8_ = dVar132 - dVar129;
        local_11e0._8_8_ = dVar164 - (double)local_11d0._8_8_;
        local_11e0._0_8_ = dVar156 - (double)local_11d0._0_8_;
        local_11b0._8_8_ = dVar152 + dVar116;
        local_11b0._0_8_ = dVar149 + dVar114;
        auVar180._0_8_ = dVar118 - dVar144;
        auVar180._8_8_ = dVar122 - dVar147;
        local_11f0._8_8_ = dVar129 + dVar132;
        local_11f0._0_8_ = dVar124 + dVar130;
        auVar157._0_8_ = dVar174 - dVar108;
        auVar157._8_8_ = dVar176 - dVar112;
        local_11d0._0_8_ = (double)local_11d0._0_8_ + dVar156;
        local_11d0._8_8_ = (double)local_11d0._8_8_ + dVar164;
        local_11a0._8_8_ = dVar183 - dVar138;
        local_11a0._0_8_ = dVar178 - dVar133;
        local_11c0._8_8_ = dVar147 + dVar122;
        local_11c0._0_8_ = dVar144 + dVar118;
        local_1010._8_8_ = dVar112 + dVar176;
        local_1010._0_8_ = dVar108 + dVar174;
        local_10d0._8_8_ = dVar138 + dVar183;
        local_10d0._0_8_ = dVar133 + dVar178;
        auVar179[0] = -(auVar140[0] == (char)__xmm_00000000000000000000000000000000);
        auVar179[1] = -(auVar140[1] == __xmm_00000000000000000000000000000000._1_1_);
        auVar179[2] = -(auVar140[2] == __xmm_00000000000000000000000000000000._2_1_);
        auVar179[3] = -(auVar140[3] == __xmm_00000000000000000000000000000000._3_1_);
        auVar179[4] = -(auVar140[4] == UNK_150aa8f64);
        auVar179[5] = -(auVar140[5] == UNK_150aa8f65);
        auVar179[6] = -(auVar140[6] == UNK_150aa8f66);
        auVar179[7] = -(auVar140[7] == UNK_150aa8f67);
        auVar179[8] = -(auVar140[8] == (char)DAT_150aa8f68);
        auVar179[9] = -(auVar140[9] == DAT_150aa8f68._1_1_);
        auVar179[10] = -(auVar140[10] == DAT_150aa8f68._2_1_);
        auVar179[0xb] = -(auVar140[0xb] == DAT_150aa8f68._3_1_);
        auVar179[0xc] = -(auVar140[0xc] == DAT_150aa8f68._4_1_);
        auVar179[0xd] = -(auVar140[0xd] == DAT_150aa8f68._5_1_);
        auVar179[0xe] = -(auVar140[0xe] == DAT_150aa8f68._6_1_);
        auVar179[0xf] = -(auVar140[0xf] == DAT_150aa8f68._7_1_);
        auVar153 = pmovsxbd(auVar179 ^ ___xmm_ffffffffffffffffffffffffffffffff,
                            auVar179 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        iVar61 = movmskps((int)lVar48,auVar96 & auVar153);
        if (iVar61 == 0) {
          uVar53 = 0x260;
LAB_140a798c8:
          auVar153 = pmovsxbd(auVar153,auVar179);
          iVar113 = movmskps(uVar53,auVar96 & auVar153);
          if ((iVar113 != 0) && ((char)iVar113 != '\0')) {
            auVar153 = pmovzxbd(auVar153,auVar179);
            auVar80._0_4_ = auVar153._0_4_ << 0x1f;
            auVar80._4_4_ = auVar153._4_4_ << 0x1f;
            auVar80._8_4_ = auVar153._8_4_ << 0x1f;
            auVar80._12_4_ = auVar153._12_4_ << 0x1f;
            uVar53 = movmskps((int)param_5,auVar80);
            if ((uVar53 & 1) == 0) {
              auVar96 = local_dc0;
              auVar66 = local_f00;
              auVar67 = local_ef0;
              auVar68 = local_de0;
              local_1170 = local_dd0;
              auVar153 = local_df0;
              if ((uVar53 & 2) != 0) goto LAB_140a7993c;
LAB_140a7a0d9:
              local_1190 = blendpd(local_df0,auVar153,1);
              local_11e0 = blendpd(local_de0,auVar68,1);
              auVar157 = blendpd(local_f00,auVar66,1);
              local_11b0 = blendpd(local_ef0,auVar67,1);
              local_11d0 = blendpd(local_dd0,local_1170,1);
              local_1010._0_16_ = blendpd(local_dc0,auVar96,1);
            }
            else {
              local_1170._8_8_ = local_11d0._8_8_;
              local_1170._0_8_ = local_11d0._0_8_;
              local_fc0._0_8_ = local_fc0._0_8_ & 0xffffffffffffff00 | 1;
              auVar96 = local_1010._0_16_;
              auVar66 = auVar157;
              auVar67 = local_11b0;
              auVar68 = local_11e0;
              auVar153 = local_1190;
              if ((uVar53 & 2) == 0) goto LAB_140a7a0d9;
LAB_140a7993c:
              local_fc0._0_8_ = local_fc0._0_8_ & 0xffffffffffff00ff | 0x100;
            }
            bVar62 = (uVar53 & 4) != 0;
            auVar69 = local_ff0;
            if (bVar62) {
              auVar69 = auVar81;
            }
            cVar57 = (char)((char)uVar53 << 4) >> 4;
            auVar70 = local_1020;
            auVar71 = local_10b0;
            auVar72 = local_10a0;
            auVar73 = local_1090;
            auVar74 = local_10e0;
            if (bVar62) {
              local_fc0._0_8_ = local_fc0._0_8_ & 0xffffffffff00ffff | 0x10000;
              auVar70 = auVar180;
              auVar71 = local_11f0;
              auVar72 = local_11c0;
              auVar73 = local_11a0;
              auVar74 = local_10d0;
            }
            if (-1 < cVar57) {
              auVar81 = pblendw(local_ff0,auVar69,0xf);
              auVar180 = pblendw(local_1020,auVar70,0xf);
              local_11a0 = pblendw(local_1090,auVar73,0xf);
              local_11f0 = pblendw(local_10b0,auVar71,0xf);
              local_11c0 = pblendw(local_10a0,auVar72,0xf);
              local_10d0 = pblendw(local_10e0,auVar74,0xf);
            }
            if (cVar57 < '\0') {
              local_fc0._0_8_ = local_fc0._0_8_ & 0xffffffff00ffffff | 0x1000000;
            }
            local_df0 = blendpd(local_1190,auVar153,1);
            local_ff0 = pblendw(auVar81,auVar69,0xf);
            local_de0 = blendpd(local_11e0,auVar68,1);
            local_1020 = pblendw(auVar180,auVar70,0xf);
            local_f00 = blendpd(auVar157,auVar66,1);
            local_1090 = pblendw(local_11a0,auVar73,0xf);
            local_ef0 = blendpd(local_11b0,auVar67,1);
            local_10b0 = pblendw(local_11f0,auVar71,0xf);
            local_dd0 = blendpd(local_11d0,local_1170,1);
            local_10a0 = pblendw(local_11c0,auVar72,0xf);
            local_dc0 = blendpd(local_1010._0_16_,auVar96,1);
            local_10e0 = pblendw(local_10d0,auVar74,0xf);
          }
        }
        else {
          uVar53 = movmskps((int)lVar1,auVar153);
          auVar66 = minpd(local_1120,local_1190);
          auVar153 = local_df0;
          if ((uVar53 & 1) != 0) {
            auVar153 = auVar66;
          }
          if ((uVar53 & 2) == 0) {
            auVar66 = blendpd(local_df0,auVar153,1);
          }
          auVar67 = minpd(auVar119,auVar81);
          if ((uVar53 & 4) != 0) {
            local_ff0 = blendpd(local_ff0,auVar67,1);
          }
          bVar52 = (char)((char)uVar53 << 4) >> 4;
          if ((char)bVar52 < '\0') {
            local_ff0 = blendpd(local_ff0,auVar67,2);
          }
          auVar67 = minpd(local_1110,local_11e0);
          if ((bVar52 & 1) == 0) {
            local_1170 = local_de0;
            if ((bVar52 & 2) != 0) goto LAB_140a79575;
LAB_140a79f50:
            auVar67 = blendpd(local_de0,local_1170,1);
            auVar68 = minpd(local_1060,auVar180);
          }
          else {
            local_1170 = auVar67;
            if ((bVar52 & 2) == 0) goto LAB_140a79f50;
LAB_140a79575:
            auVar68 = minpd(local_1060,auVar180);
          }
          if ((bVar52 & 4) != 0) {
            local_1020 = blendpd(local_1020,auVar68,1);
          }
          if ((char)bVar52 < '\0') {
            local_1020 = blendpd(local_1020,auVar68,2);
          }
          auVar68 = minpd(local_1100,auVar157);
          if ((bVar52 & 1) == 0) {
            auVar69 = local_f00;
            if ((bVar52 & 2) != 0) goto LAB_140a795ea;
LAB_140a79f86:
            auVar68 = blendpd(local_f00,auVar69,1);
            auVar70 = minpd(local_1050,local_11a0);
          }
          else {
            auVar69 = auVar68;
            if ((bVar52 & 2) == 0) goto LAB_140a79f86;
LAB_140a795ea:
            auVar70 = minpd(local_1050,local_11a0);
          }
          if ((bVar52 & 4) != 0) {
            local_1090 = blendpd(local_1090,auVar70,1);
          }
          if ((char)bVar52 < '\0') {
            local_1090 = blendpd(local_1090,auVar70,2);
          }
          auVar70 = maxpd(local_10f0,local_11b0);
          if ((bVar52 & 1) == 0) {
            auVar71 = local_ef0;
            if ((bVar52 & 2) != 0) goto LAB_140a79662;
LAB_140a79fc3:
            auVar70 = blendpd(local_ef0,auVar71,1);
            auVar72 = maxpd(local_1040,local_11f0);
          }
          else {
            auVar71 = auVar70;
            if ((bVar52 & 2) == 0) goto LAB_140a79fc3;
LAB_140a79662:
            auVar72 = maxpd(local_1040,local_11f0);
          }
          if ((bVar52 & 4) != 0) {
            local_10b0 = blendpd(local_10b0,auVar72,1);
          }
          if ((char)bVar52 < '\0') {
            local_10b0 = blendpd(local_10b0,auVar72,2);
          }
          auVar72 = maxpd(auVar135,local_11d0);
          if ((bVar52 & 1) == 0) {
            auVar73 = local_dd0;
            if ((bVar52 & 2) != 0) goto LAB_140a796d3;
LAB_140a7a000:
            auVar72 = blendpd(local_dd0,auVar73,1);
            auVar74 = maxpd(local_fd0,local_11c0);
          }
          else {
            auVar73 = auVar72;
            if ((bVar52 & 2) == 0) goto LAB_140a7a000;
LAB_140a796d3:
            auVar74 = maxpd(local_fd0,local_11c0);
          }
          if ((bVar52 & 4) != 0) {
            local_10a0 = blendpd(local_10a0,auVar74,1);
          }
          if ((char)bVar52 < '\0') {
            local_10a0 = blendpd(local_10a0,auVar74,2);
          }
          auVar74 = maxpd(auVar111,local_1010._0_16_);
          if ((bVar52 & 1) == 0) {
            auVar75 = local_dc0;
            if ((bVar52 & 2) != 0) goto LAB_140a79748;
LAB_140a7a037:
            auVar74 = blendpd(local_dc0,auVar75,1);
            auVar76 = maxpd(local_1030,local_10d0);
          }
          else {
            auVar75 = auVar74;
            if ((bVar52 & 2) == 0) goto LAB_140a7a037;
LAB_140a79748:
            auVar76 = maxpd(local_1030,local_10d0);
          }
          if ((bVar52 & 4) != 0) {
            local_10e0 = blendpd(local_10e0,auVar76,1);
          }
          if ((char)bVar52 < '\0') {
            local_10e0 = blendpd(local_10e0,auVar76,2);
          }
          auVar76 = local_fc0;
          if ((bVar52 & 1) != 0) {
            auVar76 = auVar140;
          }
          auVar77 = pblendvb(auVar76,local_fc0,___xmm_000000000000000000000000ffffff00);
          auVar76 = auVar77;
          if ((bVar52 & 2) != 0) {
            auVar76 = auVar140;
          }
          auVar77 = pblendvb(auVar76,auVar77,___xmm_000000000000000000000000ffff00ff);
          auVar76 = auVar77;
          if ((bVar52 & 4) != 0) {
            auVar76 = auVar140;
          }
          auVar77 = pblendvb(auVar76,auVar77,___xmm_000000000000000000000000ff00ffff);
          auVar76 = auVar140;
          if (-1 < (char)bVar52) {
            auVar76 = auVar77;
          }
          local_df0 = blendpd(auVar66,auVar153,1);
          local_de0 = blendpd(auVar67,local_1170,1);
          local_f00 = blendpd(auVar68,auVar69,1);
          local_ef0 = blendpd(auVar70,auVar71,1);
          local_dd0 = blendpd(auVar72,auVar73,1);
          local_dc0 = blendpd(auVar74,auVar75,1);
          local_fc0 = pblendvb(auVar76,auVar77,___xmm_00000000000000000000000000ffffff);
          uVar53 = CONCAT31((int3)((uint)iVar113 >> 8),bVar59) & 0xffffff0f;
          auVar153 = ___xmm_00000000000000000000000000ffffff;
          if ((char)uVar53 != (char)iVar61) goto LAB_140a798c8;
        }
        uVar53 = (uint)bVar59;
        bVar62 = (bVar59 & 1) != 0;
        auVar153 = local_1120;
        if (bVar62) {
          auVar153 = local_df0;
        }
        local_11f0 = local_10f0;
        auVar96 = auVar140;
        auVar66 = local_1110;
        auVar67 = local_1100;
        local_11c0 = auVar111;
        local_11b0 = auVar135;
        if (bVar62) {
          auVar96 = local_fc0;
          auVar66 = local_de0;
          auVar67 = local_f00;
          local_11f0 = local_ef0;
          local_11c0 = local_dc0;
          local_11b0 = local_dd0;
        }
        if ((bVar59 & 2) == 0) {
          local_1120 = blendpd(local_1120,auVar153,1);
          local_1110 = blendpd(local_1110,auVar66,1);
          local_1100 = blendpd(local_1100,auVar67,1);
          local_10f0 = blendpd(local_10f0,local_11f0,1);
          auVar135 = blendpd(auVar135,local_11b0,1);
          auVar111 = blendpd(auVar111,local_11c0,1);
          auVar96 = pblendvb(auVar96,auVar140,___xmm_000000000000000000000000ffffff00);
          auVar140 = auVar96;
        }
        else {
          auVar96 = pblendvb(auVar96,auVar140,___xmm_000000000000000000000000ffffff00);
          auVar111 = local_dc0;
          auVar135 = local_dd0;
          auVar140 = local_fc0;
          local_1120 = local_df0;
          local_1110 = local_de0;
          local_1100 = local_f00;
          local_10f0 = local_ef0;
        }
        if ((bVar59 & 4) == 0) {
          auVar73 = pblendvb(auVar140,auVar96,___xmm_000000000000000000000000ffff00ff);
          auVar140 = auVar73;
          auVar68 = local_1060;
          auVar69 = local_1050;
          auVar70 = local_1040;
          auVar71 = local_fd0;
          auVar72 = local_1030;
          auVar96 = auVar119;
          if ((char)bVar59 < '\0') goto LAB_140a79d6d;
LAB_140a79e55:
          auVar119 = pblendw(auVar119,auVar96,0xf);
          if (-1 < (char)bVar59) goto LAB_140a79e76;
LAB_140a79d84:
          auVar74 = local_1020;
          if ((char)bVar59 < '\0') goto LAB_140a79d94;
LAB_140a79e97:
          auVar75 = blendpd(local_1050,auVar69,1);
          if (-1 < (char)bVar59) goto LAB_140a79ec0;
LAB_140a79dac:
          auVar76 = local_10b0;
          if ((char)bVar59 < '\0') goto LAB_140a79dbf;
LAB_140a79ee3:
          auVar77 = blendpd(local_fd0,auVar71,1);
          if (-1 < (char)bVar59) goto LAB_140a79f02;
LAB_140a79dce:
          auVar140 = pblendvb(auVar140,auVar73,___xmm_000000000000000000000000ff00ffff);
          auVar78 = local_10e0;
        }
        else {
          auVar73 = pblendvb(auVar140,auVar96,___xmm_000000000000000000000000ffff00ff);
          auVar140 = local_fc0;
          auVar68 = local_1020;
          auVar69 = local_1090;
          auVar70 = local_10b0;
          auVar71 = local_10a0;
          auVar72 = local_10e0;
          auVar96 = local_ff0;
          if (-1 < (char)bVar59) goto LAB_140a79e55;
LAB_140a79d6d:
          auVar119 = local_ff0;
          if ((char)bVar59 < '\0') goto LAB_140a79d84;
LAB_140a79e76:
          auVar74 = blendpd(local_1060,auVar68,1);
          if (-1 < (char)bVar59) goto LAB_140a79e97;
LAB_140a79d94:
          auVar75 = local_1090;
          if ((char)bVar59 < '\0') goto LAB_140a79dac;
LAB_140a79ec0:
          auVar76 = blendpd(local_1040,auVar70,1);
          if (-1 < (char)bVar59) goto LAB_140a79ee3;
LAB_140a79dbf:
          auVar77 = local_10a0;
          if ((char)bVar59 < '\0') goto LAB_140a79dce;
LAB_140a79f02:
          auVar78 = blendpd(local_1030,auVar72,1);
          auVar140 = pblendvb(auVar140,auVar73,___xmm_000000000000000000000000ff00ffff);
        }
        auVar73 = local_fc0;
        if (-1 < (char)bVar59) {
          auVar73 = auVar140;
        }
        auVar140 = pblendvb(auVar73,auVar140,___xmm_00000000000000000000000000ffffff);
        local_1120 = blendpd(local_1120,auVar153,1);
        auVar119 = pblendw(auVar119,auVar96,0xf);
        local_1110 = blendps(local_1110,auVar66,3);
        local_1060 = blendpd(auVar74,auVar68,1);
        local_1100 = blendps(local_1100,auVar67,3);
        local_1050 = blendpd(auVar75,auVar69,1);
        auVar64 = pblendw(local_10f0,local_11f0,0xf);
        local_1040 = blendpd(auVar76,auVar70,1);
        auVar135 = blendpd(auVar135,local_11b0,1);
        local_fd0 = blendpd(auVar77,auVar71,1);
        auVar111 = blendpd(auVar111,local_11c0,1);
        local_1030 = blendpd(auVar78,auVar72,1);
        auVar153 = ZEXT816(0);
        local_10f0 = auVar64;
      }
      uVar105 = uVar105 + 4;
    } while ((int)uVar105 < (int)uVar56);
  }
  if ((int)param_7 <= (int)uVar105) goto LAB_140a7fa1c;
  auVar145._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar105) < (int)param_7);
  auVar145._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar105) < (int)param_7);
  auVar145._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar105) < (int)param_7);
  auVar145._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar105) < (int)param_7);
  uVar56 = movmskps(uVar53,auVar145);
  if ((~(byte)uVar56 & 9) == 0) {
    auVar141 = *(undefined1 (*) [16])(param_2 + (int)(uVar105 << 2));
  }
  else {
    puVar16 = (uint *)(param_2 + (int)(uVar105 << 2));
    auVar141 = auVar140;
    if ((uVar56 & 1) != 0) {
      auVar141 = ZEXT416(*puVar16);
    }
    if ((uVar56 & 2) != 0) {
      auVar141._0_8_ = auVar141._0_8_ & 0xffffffff | (ulonglong)puVar16[1] << 0x20;
    }
    if ((uVar56 & 4) != 0) {
      auVar141._8_8_ = auVar141._8_8_ & 0xffffffff00000000 | (ulonglong)puVar16[2];
    }
    if ((uVar56 & 8) != 0) {
      auVar141._8_8_ = auVar141._8_8_ & 0xffffffff | (ulonglong)puVar16[3] << 0x20;
    }
  }
  auVar97._4_4_ = uVar105 * 7;
  auVar97._0_4_ = uVar105 * 7;
  auVar97._8_4_ = uVar105 * 7;
  auVar97._12_4_ = uVar105 * 7;
  auVar97 = auVar97 & auVar145;
  lVar48 = param_4 + (longlong)auVar97._0_4_ * 8;
  lVar47 = param_4 + (longlong)auVar97._4_4_ * 8;
  lVar1 = param_4 + (longlong)auVar97._8_4_ * 8;
  lVar55 = param_4 + (longlong)auVar97._12_4_ * 8;
  auVar153 = ___xmm_000000d8000000a00000006800000030 & auVar145;
  auVar98._0_4_ = auVar141._0_4_ << 2;
  auVar98._4_4_ = auVar141._4_4_ << 2;
  auVar98._8_4_ = auVar141._8_4_ << 2;
  auVar98._12_4_ = auVar141._12_4_ << 2;
  auVar98 = auVar98 & auVar145;
  auVar99._8_4_ = 0xffffffff;
  auVar99._0_8_ = 0xffffffffffffffff;
  auVar99._12_4_ = 0xffffffff;
  auVar125._0_4_ = -(uint)(*(int *)(param_1 + auVar98._0_4_) == -1);
  auVar125._4_4_ = -(uint)(*(int *)(param_1 + auVar98._4_4_) == -1);
  auVar125._8_4_ = -(uint)(*(int *)(param_1 + auVar98._8_4_) == -1);
  auVar125._12_4_ = -(uint)(*(int *)(param_1 + auVar98._12_4_) == -1);
  auVar82[0] = -(*(char *)((ulonglong)auVar153._0_4_ + lVar48) == '\0');
  auVar82[1] = -(*(char *)((ulonglong)auVar153._4_4_ + lVar47) == '\0');
  auVar82[2] = -(*(char *)((ulonglong)auVar153._8_4_ + lVar1) == '\0');
  auVar82[3] = -(*(char *)((ulonglong)auVar153._12_4_ + lVar55) == '\0');
  auVar82[4] = 0xff;
  auVar82[5] = 0xff;
  auVar82[6] = 0xff;
  auVar82[7] = 0xff;
  auVar82[8] = 0xff;
  auVar82[9] = 0xff;
  auVar82[10] = 0xff;
  auVar82[0xb] = 0xff;
  auVar82[0xc] = 0xff;
  auVar82[0xd] = 0xff;
  auVar82[0xe] = 0xff;
  auVar82[0xf] = 0xff;
  auVar64 = pmovsxbd(auVar82 ^ auVar99,auVar82 ^ auVar99);
  auVar153 = ~auVar125 & auVar64 & auVar145;
  iVar113 = movmskps(auVar98._4_4_,auVar153);
  if (iVar113 == 0) goto LAB_140a7fa1c;
  auVar83._0_4_ = ___xmm_000000a8000000700000003800000000 & auVar145._0_4_;
  auVar83._4_4_ = _UNK_151287264 & auVar145._4_4_;
  auVar83._8_4_ = _UNK_151287268 & auVar145._8_4_;
  auVar83._12_4_ = _UNK_15128726c & auVar145._12_4_;
  lVar58 = extractps(auVar83,1);
  lVar60 = extractps(auVar83,2);
  lVar54 = extractps(auVar83,3);
  dVar108 = *(double *)(param_4 + (longlong)auVar97._0_4_ * 8);
  dVar112 = *(double *)(lVar58 + lVar47);
  dVar114 = *(double *)(lVar60 + lVar1);
  dVar116 = *(double *)(lVar54 + lVar55);
  auVar96 = ___xmm_000000b0000000780000004000000008 & auVar145;
  dVar118 = *(double *)((ulonglong)auVar96._8_4_ + lVar1);
  dVar122 = *(double *)((ulonglong)auVar96._12_4_ + lVar55);
  dVar124 = *(double *)((ulonglong)auVar96._0_4_ + lVar48);
  dVar129 = *(double *)((ulonglong)auVar96._4_4_ + lVar47);
  auVar96 = ___xmm_000000b8000000800000004800000010 & auVar145;
  dVar133 = *(double *)((ulonglong)auVar96._8_4_ + lVar1);
  dVar138 = *(double *)((ulonglong)auVar96._12_4_ + lVar55);
  dVar143 = *(double *)((ulonglong)auVar96._0_4_ + lVar48);
  dVar130 = *(double *)((ulonglong)auVar96._4_4_ + lVar47);
  auVar96 = ___xmm_000000c0000000880000005000000018 & auVar145;
  dVar144 = *(double *)((ulonglong)auVar96._8_4_ + lVar1);
  dVar132 = *(double *)((ulonglong)auVar96._12_4_ + lVar55);
  dVar139 = *(double *)((ulonglong)auVar96._0_4_ + lVar48);
  dVar147 = *(double *)((ulonglong)auVar96._4_4_ + lVar47);
  auVar96 = ___xmm_000000c8000000900000005800000020 & auVar145;
  dVar149 = *(double *)((ulonglong)auVar96._8_4_ + lVar1);
  dVar152 = *(double *)((ulonglong)auVar96._12_4_ + lVar55);
  dVar156 = *(double *)((ulonglong)auVar96._0_4_ + lVar48);
  dVar164 = *(double *)((ulonglong)auVar96._4_4_ + lVar47);
  auVar145 = auVar145 & ___xmm_000000d0000000980000006000000028;
  dVar174 = *(double *)((ulonglong)auVar145._8_4_ + lVar1);
  dVar176 = *(double *)((ulonglong)auVar145._12_4_ + lVar55);
  dVar178 = *(double *)((ulonglong)auVar145._0_4_ + lVar48);
  dVar183 = *(double *)((ulonglong)auVar145._4_4_ + lVar47);
  auVar142._0_4_ = auVar141._0_4_ << 7;
  auVar142._4_4_ = auVar141._4_4_ << 7;
  auVar142._8_4_ = auVar141._8_4_ << 7;
  auVar142._12_4_ = auVar141._12_4_ << 7;
  auVar142 = auVar142 & auVar153;
  uVar49 = param_3 + auVar142._0_4_;
  lVar48 = param_3 + auVar142._4_4_;
  lVar47 = param_3 + auVar142._8_4_;
  lVar1 = param_3 + auVar142._12_4_;
  auVar96 = ___xmm_00000008000000080000000800000008 & auVar153;
  auVar66 = ___xmm_00000010000000100000001000000010 & auVar153;
  auVar67 = ___xmm_00000018000000180000001800000018 & auVar153;
  auVar68 = ___xmm_00000020000000200000002000000020 & auVar153;
  auVar69 = ___xmm_00000028000000280000002800000028 & auVar153;
  auVar70 = ___xmm_00000030000000300000003000000030 & auVar153;
  auVar71 = ___xmm_00000038000000380000003800000038 & auVar153;
  auVar72 = ___xmm_00000040000000400000004000000040 & auVar153;
  auVar73 = ___xmm_00000048000000480000004800000048 & auVar153;
  auVar74 = ___xmm_00000050000000500000005000000050 & auVar153;
  auVar75 = ___xmm_00000058000000580000005800000058 & auVar153;
  auVar76 = ___xmm_00000060000000600000006000000060 & auVar153;
  auVar77 = ___xmm_00000068000000680000006800000068 & auVar153;
  auVar78 = ___xmm_00000070000000700000007000000070 & auVar153;
  auVar79 = ___xmm_00000078000000780000007800000078 & auVar153;
  local_900[2] = (double)*(undefined8 *)(param_3 + auVar142._8_4_);
  local_900[3] = (double)*(undefined8 *)(param_3 + auVar142._12_4_);
  local_900[0] = *(double *)(param_3 + auVar142._0_4_);
  local_900[1] = (double)*(undefined8 *)(param_3 + auVar142._4_4_);
  local_900[6] = (double)*(undefined8 *)((ulonglong)auVar96._8_4_ + lVar47);
  uStack_8c8 = *(undefined8 *)((ulonglong)auVar96._12_4_ + lVar1);
  local_900[4] = (double)*(undefined8 *)(auVar96._0_4_ + uVar49);
  local_900[5] = (double)*(undefined8 *)((ulonglong)auVar96._4_4_ + lVar48);
  local_8b0 = *(undefined8 *)((ulonglong)auVar66._8_4_ + lVar47);
  uStack_8a8 = *(undefined8 *)((ulonglong)auVar66._12_4_ + lVar1);
  local_8c0 = *(undefined8 *)(auVar66._0_4_ + uVar49);
  uStack_8b8 = *(undefined8 *)((ulonglong)auVar66._4_4_ + lVar48);
  local_890 = *(undefined8 *)((ulonglong)auVar67._8_4_ + lVar47);
  uStack_888 = *(undefined8 *)((ulonglong)auVar67._12_4_ + lVar1);
  local_8a0 = *(undefined8 *)(auVar67._0_4_ + uVar49);
  uStack_898 = *(undefined8 *)((ulonglong)auVar67._4_4_ + lVar48);
  local_870 = *(undefined8 *)((ulonglong)auVar68._8_4_ + lVar47);
  uStack_868 = *(undefined8 *)((ulonglong)auVar68._12_4_ + lVar1);
  local_880 = *(undefined8 *)(auVar68._0_4_ + uVar49);
  uStack_878 = *(undefined8 *)((ulonglong)auVar68._4_4_ + lVar48);
  local_850 = *(undefined8 *)((ulonglong)auVar69._8_4_ + lVar47);
  uStack_848 = *(undefined8 *)((ulonglong)auVar69._12_4_ + lVar1);
  local_860 = *(undefined8 *)(auVar69._0_4_ + uVar49);
  uStack_858 = *(undefined8 *)((ulonglong)auVar69._4_4_ + lVar48);
  local_830 = *(undefined8 *)((ulonglong)auVar70._8_4_ + lVar47);
  uStack_828 = *(undefined8 *)((ulonglong)auVar70._12_4_ + lVar1);
  local_840 = *(undefined8 *)(auVar70._0_4_ + uVar49);
  uStack_838 = *(undefined8 *)((ulonglong)auVar70._4_4_ + lVar48);
  local_810 = *(undefined8 *)((ulonglong)auVar71._8_4_ + lVar47);
  uStack_808 = *(undefined8 *)((ulonglong)auVar71._12_4_ + lVar1);
  local_820 = *(undefined8 *)(auVar71._0_4_ + uVar49);
  uStack_818 = *(undefined8 *)((ulonglong)auVar71._4_4_ + lVar48);
  local_7f0 = *(undefined8 *)((ulonglong)auVar72._8_4_ + lVar47);
  uStack_7e8 = *(undefined8 *)((ulonglong)auVar72._12_4_ + lVar1);
  local_800 = *(undefined8 *)(auVar72._0_4_ + uVar49);
  uStack_7f8 = *(undefined8 *)((ulonglong)auVar72._4_4_ + lVar48);
  local_7d0 = *(undefined8 *)((ulonglong)auVar73._8_4_ + lVar47);
  uStack_7c8 = *(undefined8 *)((ulonglong)auVar73._12_4_ + lVar1);
  local_7e0 = *(undefined8 *)(auVar73._0_4_ + uVar49);
  uStack_7d8 = *(undefined8 *)((ulonglong)auVar73._4_4_ + lVar48);
  local_7b0 = *(undefined8 *)((ulonglong)auVar74._8_4_ + lVar47);
  uStack_7a8 = *(undefined8 *)((ulonglong)auVar74._12_4_ + lVar1);
  local_7c0 = *(undefined8 *)(auVar74._0_4_ + uVar49);
  uStack_7b8 = *(undefined8 *)((ulonglong)auVar74._4_4_ + lVar48);
  local_790 = *(undefined8 *)((ulonglong)auVar75._8_4_ + lVar47);
  uStack_788 = *(undefined8 *)((ulonglong)auVar75._12_4_ + lVar1);
  local_7a0 = *(undefined8 *)(auVar75._0_4_ + uVar49);
  uStack_798 = *(undefined8 *)((ulonglong)auVar75._4_4_ + lVar48);
  local_770 = *(undefined8 *)((ulonglong)auVar76._8_4_ + lVar47);
  uStack_768 = *(undefined8 *)((ulonglong)auVar76._12_4_ + lVar1);
  bVar59 = (char)((char)iVar113 << 4) >> 4;
  local_780 = *(undefined8 *)(auVar76._0_4_ + uVar49);
  uStack_778 = *(undefined8 *)((ulonglong)auVar76._4_4_ + lVar48);
  local_760[2] = (double)*(undefined8 *)((ulonglong)auVar77._8_4_ + lVar47);
  local_760[3] = (double)*(undefined8 *)((ulonglong)auVar77._12_4_ + lVar1);
  local_760[0] = *(double *)(auVar77._0_4_ + uVar49);
  local_760[1] = (double)*(undefined8 *)((ulonglong)auVar77._4_4_ + lVar48);
  local_760[6] = (double)*(undefined8 *)((ulonglong)auVar78._8_4_ + lVar47);
  local_760[7] = (double)*(undefined8 *)((ulonglong)auVar78._12_4_ + lVar1);
  local_760[4] = (double)*(undefined8 *)(auVar78._0_4_ + uVar49);
  local_760[5] = (double)*(undefined8 *)((ulonglong)auVar78._4_4_ + lVar48);
  local_760[10] = (double)*(undefined8 *)((ulonglong)auVar79._8_4_ + lVar47);
  local_760[0xb] = (double)*(undefined8 *)((ulonglong)auVar79._12_4_ + lVar1);
  local_760[8] = (double)*(undefined8 *)(auVar79._0_4_ + uVar49);
  local_760[9] = (double)*(undefined8 *)((ulonglong)auVar79._4_4_ + lVar48);
  dVar63 = *param_5;
  dVar92 = *param_5;
  dVar93 = param_5[4];
  dVar107 = param_5[4];
  dVar117 = param_5[8];
  dVar121 = param_5[8];
  dVar123 = param_5[0xc];
  dVar128 = param_5[0xc];
  lVar48 = 0x60;
  dVar151 = param_5[1];
  dVar148 = param_5[1];
  dVar163 = param_5[5];
  dVar155 = param_5[5];
  dVar172 = param_5[9];
  dVar165 = param_5[9];
  dVar175 = param_5[0xd];
  dVar173 = param_5[0xd];
  dVar182 = param_5[2];
  dVar177 = param_5[2];
  dVar184 = param_5[6];
  dVar3 = param_5[6];
  dVar5 = param_5[10];
  dVar4 = param_5[10];
  dVar6 = param_5[0xe];
  dVar7 = param_5[0xe];
  dVar8 = param_5[3];
  dVar9 = param_5[3];
  dVar10 = param_5[7];
  dVar11 = param_5[7];
  dVar12 = param_5[0xb];
  dVar13 = param_5[0xb];
  dVar15 = param_5[0xf];
  dVar14 = param_5[0xf];
  do {
    dVar27 = *(double *)((longlong)adStack_960 + lVar48);
    dVar28 = *(double *)(local_950 + lVar48 + -8);
    dVar29 = *(double *)(local_950 + lVar48);
    dVar30 = *(double *)((longlong)local_948 + lVar48);
    dVar31 = *(double *)((longlong)local_948 + lVar48 + 8);
    dVar32 = *(double *)((longlong)local_948 + lVar48 + 0x10);
    dVar33 = *(double *)((longlong)local_948 + lVar48 + 0x18);
    dVar34 = *(double *)((longlong)local_948 + lVar48 + 0x20);
    dVar35 = *(double *)(local_910 + lVar48);
    dVar36 = *(double *)(local_910 + lVar48 + 8);
    dVar37 = *(double *)(local_918 + lVar48 + -8);
    dVar38 = *(double *)(local_918 + lVar48);
    dVar39 = *(double *)((longlong)local_900 + lVar48);
    dVar40 = *(double *)((longlong)local_900 + lVar48 + 8);
    dVar41 = *(double *)((longlong)local_900 + lVar48 + 0x10);
    dVar42 = *(double *)((longlong)local_900 + lVar48 + 0x18);
    *(double *)((longlong)local_d40 + lVar48 + 0x10) =
         dVar41 * dVar123 + dVar35 * dVar117 + dVar33 * dVar93 + dVar29 * dVar63 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x18) =
         dVar42 * dVar128 + dVar36 * dVar121 + dVar34 * dVar107 + dVar30 * dVar92 + 0.0;
    *(double *)((longlong)local_d40 + lVar48) =
         dVar39 * dVar123 + dVar37 * dVar117 + dVar31 * dVar93 + dVar27 * dVar63 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 8) =
         dVar40 * dVar128 + dVar38 * dVar121 + dVar32 * dVar107 + dVar28 * dVar92 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x30) =
         dVar41 * dVar175 + dVar35 * dVar172 + dVar33 * dVar163 + dVar29 * dVar151 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x38) =
         dVar42 * dVar173 + dVar36 * dVar165 + dVar34 * dVar155 + dVar30 * dVar148 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x20) =
         dVar39 * dVar175 + dVar37 * dVar172 + dVar31 * dVar163 + dVar27 * dVar151 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x28) =
         dVar40 * dVar173 + dVar38 * dVar165 + dVar32 * dVar155 + dVar28 * dVar148 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x50) =
         dVar41 * dVar6 + dVar35 * dVar5 + dVar33 * dVar184 + dVar29 * dVar182 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x58) =
         dVar42 * dVar7 + dVar36 * dVar4 + dVar34 * dVar3 + dVar30 * dVar177 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x40) =
         dVar39 * dVar6 + dVar37 * dVar5 + dVar31 * dVar184 + dVar27 * dVar182 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x48) =
         dVar40 * dVar7 + dVar38 * dVar4 + dVar32 * dVar3 + dVar28 * dVar177 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x70) =
         dVar41 * dVar15 + dVar35 * dVar12 + dVar33 * dVar10 + dVar29 * dVar8 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x78) =
         dVar42 * dVar14 + dVar36 * dVar13 + dVar34 * dVar11 + dVar30 * dVar9 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x60) =
         dVar39 * dVar15 + dVar37 * dVar12 + dVar31 * dVar10 + dVar27 * dVar8 + 0.0;
    *(double *)((longlong)local_d40 + lVar48 + 0x68) =
         dVar40 * dVar14 + dVar38 * dVar13 + dVar32 * dVar11 + dVar28 * dVar9 + 0.0;
    lVar48 = lVar48 + 0x80;
  } while (lVar48 != 0x260);
  dVar93 = (dVar108 + dVar139) * ___xmm_3fe00000000000003fe0000000000000;
  dVar107 = (dVar112 + dVar147) * _UNK_150689678;
  dVar117 = (dVar124 + dVar156) * ___xmm_3fe00000000000003fe0000000000000;
  dVar121 = (dVar129 + dVar164) * _UNK_150689678;
  dVar123 = (dVar114 + dVar144) * ___xmm_3fe00000000000003fe0000000000000;
  dVar128 = (dVar116 + dVar132) * _UNK_150689678;
  dVar63 = (dVar118 + dVar149) * ___xmm_3fe00000000000003fe0000000000000;
  dVar92 = (dVar122 + dVar152) * _UNK_150689678;
  dVar155 = (dVar133 + dVar174) * ___xmm_3fe00000000000003fe0000000000000;
  dVar163 = (dVar138 + dVar176) * _UNK_150689678;
  local_11a0._0_8_ = dVar155 * local_bd0 + dVar63 * local_c50 + dVar123 * local_d40[0xe];
  local_11a0._8_8_ = dVar163 * dStack_bc8 + dVar92 * dStack_c48 + dVar128 * local_d40[0xf];
  dVar148 = (dVar143 + dVar178) * ___xmm_3fe00000000000003fe0000000000000;
  dVar151 = (dVar130 + dVar183) * _UNK_150689678;
  local_1180._0_8_ = dVar148 * local_be0 + dVar117 * local_c60 + dVar93 * local_d40[0xc];
  local_1180._8_8_ = dVar151 * dStack_bd8 + dVar121 * dStack_c58 + dVar107 * local_d40[0xd];
  local_1190._0_8_ = dVar148 * local_bc0 + dVar117 * local_c40 + dVar93 * local_d40[0x10];
  local_1190._8_8_ = dVar151 * dStack_bb8 + dVar121 * dStack_c38 + dVar107 * local_d40[0x11];
  dVar144 = (dVar144 - dVar114) * ___xmm_3fe00000000000003fe0000000000000;
  dVar132 = (dVar132 - dVar116) * _UNK_150689678;
  dVar108 = (dVar139 - dVar108) * ___xmm_3fe00000000000003fe0000000000000;
  dVar112 = (dVar147 - dVar112) * _UNK_150689678;
  dVar139 = (dVar149 - dVar118) * ___xmm_3fe00000000000003fe0000000000000;
  dVar147 = (dVar152 - dVar122) * _UNK_150689678;
  dVar118 = (dVar156 - dVar124) * ___xmm_3fe00000000000003fe0000000000000;
  dVar122 = (dVar164 - dVar129) * _UNK_150689678;
  dVar156 = (dVar178 - dVar143) * ___xmm_3fe00000000000003fe0000000000000;
  dVar164 = (dVar183 - dVar130) * _UNK_150689678;
  dVar149 = (dVar174 - dVar133) * ___xmm_3fe00000000000003fe0000000000000;
  dVar152 = (dVar176 - dVar138) * _UNK_150689678;
  local_11d0._8_8_ = dStack_ca8 * dVar132;
  local_11d0._0_8_ = local_d40[0x12] * dVar144;
  local_11e0._0_8_ =
       (double)((ulonglong)(local_c50 * dVar139) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_d40[0xe] * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_11e0._8_8_ =
       (double)((ulonglong)(dStack_c48 * dVar147) & _UNK_15061cc88) +
       (double)((ulonglong)(local_d40[0xf] * dVar132) & _UNK_15061cc88);
  local_11c0._0_8_ =
       (double)((ulonglong)(local_c60 * dVar118) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_d40[0xc] * dVar108) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_11c0._8_8_ =
       (double)((ulonglong)(dStack_c58 * dVar122) & _UNK_15061cc88) +
       (double)((ulonglong)(local_d40[0xd] * dVar112) & _UNK_15061cc88);
  auVar100._0_8_ = (double)local_11a0._0_8_ + local_b50;
  auVar100._8_8_ = (double)local_11a0._8_8_ + dStack_b48;
  dVar114 = (double)local_1180._0_8_ + local_b60;
  dVar116 = (double)local_1180._8_8_ + dStack_b58;
  local_11f0._0_8_ =
       dVar155 * local_bb0 + dVar63 * local_c30 + dVar123 * local_d40[0x12] + local_b30;
  local_11f0._8_8_ = dVar163 * dStack_ba8 + dVar92 * dStack_c28 + dVar128 * dStack_ca8 + dStack_b28;
  local_1160._0_8_ =
       (double)((ulonglong)(local_be0 * dVar156) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)local_11c0._0_8_;
  local_1160._8_8_ =
       (double)((ulonglong)(dStack_bd8 * dVar164) & _UNK_15061cc88) + (double)local_11c0._8_8_;
  dVar174 = (double)local_1190._0_8_ + local_b40;
  dVar176 = (double)local_1190._8_8_ + dStack_b38;
  auVar126._0_8_ =
       (double)((ulonglong)(local_bd0 * dVar149) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)local_11e0._0_8_;
  auVar126._8_8_ =
       (double)((ulonglong)(dStack_bc8 * dVar152) & _UNK_15061cc88) + (double)local_11e0._8_8_;
  auVar158._0_8_ = dVar155 * local_b90 + dVar63 * local_c10 + dVar123 * local_c90 + local_b10;
  auVar158._8_8_ = dVar163 * dStack_b88 + dVar92 * dStack_c08 + dVar128 * dStack_c88 + dStack_b08;
  dVar143 = (double)((ulonglong)(local_bc0 * dVar156) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(local_c40 * dVar118) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(local_d40[0x10] * dVar108) & __xmm_7fffffffffffffff7fffffffffffffff
                    );
  dVar130 = (double)((ulonglong)(dStack_bb8 * dVar164) & _UNK_15061cc88) +
            (double)((ulonglong)(dStack_c38 * dVar122) & _UNK_15061cc88) +
            (double)((ulonglong)(local_d40[0x11] * dVar112) & _UNK_15061cc88);
  dVar133 = dVar148 * local_ba0 + dVar117 * local_c20 + dVar93 * local_ca0 + local_b20;
  dVar138 = dVar151 * dStack_b98 + dVar121 * dStack_c18 + dVar107 * dStack_c98 + dStack_b18;
  dVar124 = (double)((ulonglong)(local_bb0 * dVar149) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(local_c30 * dVar139) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(local_d40[0x12] * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff
                    );
  dVar129 = (double)((ulonglong)(dStack_ba8 * dVar152) & _UNK_15061cc88) +
            (double)((ulonglong)(dStack_c28 * dVar147) & _UNK_15061cc88) +
            (double)((ulonglong)(dStack_ca8 * dVar132) & _UNK_15061cc88);
  dVar118 = (double)((ulonglong)(dVar156 * local_ba0) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(dVar118 * local_c20) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(dVar108 * local_ca0) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar122 = (double)((ulonglong)(dVar164 * dStack_b98) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar122 * dStack_c18) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar112 * dStack_c98) & _UNK_15061cc88);
  dVar108 = (double)((ulonglong)(dVar149 * local_b90) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(dVar139 * local_c10) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(dVar144 * local_c90) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar112 = (double)((ulonglong)(dVar152 * dStack_b88) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar147 * dStack_c08) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar132 * dStack_c88) & _UNK_15061cc88);
  local_1170._8_8_ = dVar116 - (double)local_1160._8_8_;
  local_1170._0_8_ = dVar114 - (double)local_1160._0_8_;
  auVar159._0_8_ = auVar100._0_8_ - auVar126._0_8_;
  auVar159._8_8_ = auVar100._8_8_ - auVar126._8_8_;
  local_1140._8_8_ = dVar176 - dVar130;
  local_1140._0_8_ = dVar174 - dVar143;
  local_1160._0_8_ = (double)local_1160._0_8_ + dVar114;
  local_1160._8_8_ = (double)local_1160._8_8_ + dVar116;
  auVar160._0_8_ = (double)local_11f0._0_8_ - dVar124;
  auVar160._8_8_ = (double)local_11f0._8_8_ - dVar129;
  auVar166._0_8_ = auVar126._0_8_ + auVar100._0_8_;
  auVar166._8_8_ = auVar126._8_8_ + auVar100._8_8_;
  local_1130._8_8_ = dVar138 - dVar122;
  local_1130._0_8_ = dVar133 - dVar118;
  local_11b0._8_8_ = dVar130 + dVar176;
  local_11b0._0_8_ = dVar143 + dVar174;
  auVar161._0_8_ = auVar158._0_8_ - dVar108;
  auVar161._8_8_ = auVar158._8_8_ - dVar112;
  auVar162._0_8_ = dVar124 + (double)local_11f0._0_8_;
  auVar162._8_8_ = dVar129 + (double)local_11f0._8_8_;
  auVar102._0_8_ = dVar118 + dVar133;
  auVar102._8_8_ = dVar122 + dVar138;
  auVar154._0_8_ = dVar108 + auVar158._0_8_;
  auVar154._8_8_ = dVar112 + auVar158._8_8_;
  local_f10[0] = auVar140[0];
  local_f10[1] = auVar140[1];
  local_f10[2] = auVar140[2];
  local_f10[3] = auVar140[3];
  local_f10[4] = auVar140[4];
  local_f10[5] = auVar140[5];
  local_f10[6] = auVar140[6];
  local_f10[7] = auVar140[7];
  local_f10[8] = auVar140[8];
  local_f10[9] = auVar140[9];
  local_f10[10] = auVar140[10];
  local_f10[0xb] = auVar140[0xb];
  local_f10[0xc] = auVar140[0xc];
  local_f10[0xd] = auVar140[0xd];
  local_f10[0xe] = auVar140[0xe];
  local_f10[0xf] = auVar140[0xf];
  auVar146[0] = -(local_f10[0] == '\0');
  auVar146[1] = -(local_f10[1] == '\0');
  auVar146[2] = -(local_f10[2] == '\0');
  auVar146[3] = -(local_f10[3] == '\0');
  auVar146[4] = -(local_f10[4] == '\0');
  auVar146[5] = -(local_f10[5] == '\0');
  auVar146[6] = -(local_f10[6] == '\0');
  auVar146[7] = -(local_f10[7] == '\0');
  auVar146[8] = -(local_f10[8] == '\0');
  auVar146[9] = -(local_f10[9] == '\0');
  auVar146[10] = -(local_f10[10] == '\0');
  auVar146[0xb] = -(local_f10[0xb] == '\0');
  auVar146[0xc] = -(local_f10[0xc] == '\0');
  auVar146[0xd] = -(local_f10[0xd] == '\0');
  auVar146[0xe] = -(local_f10[0xe] == '\0');
  auVar146[0xf] = -(local_f10[0xf] == '\0');
  auVar84._8_4_ = 0xffffffff;
  auVar84._0_8_ = 0xffffffffffffffff;
  auVar84._12_4_ = 0xffffffff;
  auVar96 = pmovsxbd(auVar100,auVar84 ^ auVar146);
  auVar69 = auVar153 & auVar96;
  iVar113 = movmskps(0x260,auVar69);
  auVar66 = auVar160;
  auVar67 = auVar159;
  auVar68 = auVar161;
  if (iVar113 == 0) {
LAB_140a7f555:
    auVar69 = pmovsxbd(auVar69,auVar146);
    iVar113 = movmskps(iVar113,auVar153 & auVar69);
    if ((iVar113 != 0) && ((char)iVar113 != '\0')) {
      auVar181._8_8_ = auVar166._8_8_;
      auVar181._0_8_ = auVar166._0_8_;
      auVar153 = pmovzxbd(auVar69,auVar146);
      auVar86._0_4_ = auVar153._0_4_ << 0x1f;
      auVar86._4_4_ = auVar153._4_4_ << 0x1f;
      auVar86._8_4_ = auVar153._8_4_ << 0x1f;
      auVar86._12_4_ = auVar153._12_4_ << 0x1f;
      uVar56 = movmskps((int)uVar49,auVar86);
      if ((uVar56 & 1) == 0) {
        auVar89 = auVar96;
        auVar69 = auVar126;
        auVar70 = auVar158;
        auVar71 = auVar67;
        local_1080._0_16_ = auVar66;
        auVar153 = auVar68;
        if ((uVar56 & 2) != 0) goto LAB_140a7f5e0;
LAB_140a80182:
        local_1170 = blendpd(auVar68,auVar153,1);
        local_1140 = blendpd(auVar67,auVar71,1);
        local_1130 = blendpd(auVar158,auVar70,1);
        local_1160 = blendpd(auVar66,local_1080._0_16_,1);
        local_11b0 = blendpd(auVar126,auVar69,1);
        auVar102 = blendpd(auVar96,auVar89,1);
      }
      else {
        local_1080._8_8_ = local_1160._8_8_;
        local_1080._0_8_ = local_1160._0_8_;
        auVar89._8_8_ = auVar102._8_8_;
        auVar89._0_8_ = auVar102._0_8_;
        local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffffffff00 | 1;
        auVar69 = local_11b0;
        auVar70 = local_1130;
        auVar71 = local_1140;
        auVar153 = local_1170;
        if ((uVar56 & 2) == 0) goto LAB_140a80182;
LAB_140a7f5e0:
        local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffffff00ff | 0x100;
      }
      bVar62 = (uVar56 & 4) != 0;
      auVar96 = local_11c0;
      if (bVar62) {
        auVar96 = auVar159;
      }
      cVar57 = (char)((char)uVar56 << 4) >> 4;
      auVar115 = local_1180;
      auVar66 = local_11d0;
      auVar120 = local_11a0;
      auVar72 = local_11e0;
      auVar73 = local_1190;
      if (bVar62) {
        auVar120._8_8_ = auVar166._8_8_;
        auVar120._0_8_ = auVar166._0_8_;
        auVar115._8_8_ = auVar154._8_8_;
        auVar115._0_8_ = auVar154._0_8_;
        local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffff00ffff | 0x10000;
        auVar66 = auVar160;
        auVar72 = auVar161;
        auVar73 = auVar162;
      }
      if (-1 < cVar57) {
        auVar159 = blendpd(local_11c0,auVar96,1);
        auVar160 = blendpd(local_11d0,auVar66,1);
        auVar161 = blendpd(local_11e0,auVar72,1);
        auVar181 = blendpd(local_11a0,auVar120,1);
        auVar162 = blendpd(local_1190,auVar73,1);
        auVar154 = blendpd(local_1180,auVar115,1);
      }
      if (cVar57 < '\0') {
        local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffff00ffffff | 0x1000000;
      }
      auVar68 = blendpd(local_1170,auVar153,1);
      local_11c0 = blendpd(auVar159,auVar96,1);
      auVar67 = blendpd(local_1140,auVar71,1);
      local_11d0 = blendpd(auVar160,auVar66,1);
      auVar158 = blendpd(local_1130,auVar70,1);
      local_11e0 = blendpd(auVar161,auVar72,1);
      auVar66 = blendpd(local_1160,local_1080._0_16_,1);
      local_11a0 = blendpd(auVar181,auVar120,1);
      auVar126 = blendpd(local_11b0,auVar69,1);
      local_1190 = blendpd(auVar162,auVar73,1);
      auVar96 = blendpd(auVar102,auVar89,1);
      local_1180 = blendpd(auVar154,auVar115,1);
    }
  }
  else {
    auVar66 = minpd(auVar119,auVar159);
    uVar56 = movmskps((int)uVar49,auVar96);
    bVar52 = (char)((char)uVar56 << 4) >> 4;
    if ((uVar56 & 4) != 0) {
      auVar96 = blendpd(auVar96,auVar66,1);
      local_11c0 = auVar96;
    }
    if ((char)bVar52 < '\0') {
      auVar96 = blendpd(local_11c0,auVar66,2);
      local_11c0 = auVar96;
    }
    uVar49 = (ulonglong)bVar52;
    auVar66 = minpd(local_1060,auVar160);
    if ((bVar52 & 4) != 0) {
      auVar96 = blendpd(auVar96,auVar66,1);
      local_11d0 = auVar96;
    }
    if ((char)bVar52 < '\0') {
      auVar96 = blendpd(local_11d0,auVar66,2);
      local_11d0 = auVar96;
    }
    auVar66 = minpd(local_1050,auVar161);
    if ((bVar52 & 4) != 0) {
      auVar96 = blendpd(auVar96,auVar66,1);
      local_11e0 = auVar96;
    }
    if ((char)bVar52 < '\0') {
      auVar96 = blendpd(local_11e0,auVar66,2);
      local_11e0 = auVar96;
    }
    auVar66 = maxpd(local_1040,auVar166);
    if ((bVar52 & 4) != 0) {
      auVar96 = blendpd(auVar96,auVar66,1);
      local_11a0 = auVar96;
    }
    if ((char)bVar52 < '\0') {
      auVar96 = blendpd(local_11a0,auVar66,2);
      local_11a0 = auVar96;
    }
    auVar66 = maxpd(local_fd0,auVar162);
    if ((bVar52 & 4) != 0) {
      auVar96 = blendpd(auVar96,auVar66,1);
      local_1190 = auVar96;
    }
    if ((char)bVar52 < '\0') {
      auVar96 = blendpd(local_1190,auVar66,2);
      local_1190 = auVar96;
    }
    auVar69 = maxpd(local_1030,auVar154);
    if ((bVar52 & 4) != 0) {
      local_1180 = blendpd(auVar96,auVar69,1);
    }
    auVar67 = minpd(local_1110,local_1140);
    auVar71 = minpd(local_1100,local_1130);
    auVar66 = maxpd(local_10f0,local_1160);
    auVar70 = maxpd(auVar135,local_11b0);
    auVar96 = maxpd(auVar111,auVar102);
    if ((char)bVar52 < '\0') {
      local_1180 = blendpd(local_1180,auVar69,2);
    }
    auVar68 = minpd(local_1120,local_1170);
    auVar67 = blendpd(auVar67,auVar67,1);
    auVar158 = blendpd(auVar71,auVar71,1);
    auVar66 = blendpd(auVar66,auVar66,1);
    auVar126 = blendpd(auVar70,auVar70,1);
    auVar96 = blendpd(auVar96,auVar96,1);
    local_11f0 = auVar140;
    if ((bVar59 & 0xf) != (byte)iVar113) goto LAB_140a7f555;
  }
  if ((bVar59 & 1) == 0) {
    bVar62 = (bVar59 & 2) == 0;
    auVar69 = local_1110;
    local_1160 = local_1100;
    auVar70 = local_10f0;
    auVar71 = auVar140;
    auVar72 = auVar135;
    auVar73 = auVar111;
    auVar153 = local_1120;
    if (!bVar62) goto LAB_140a7f7eb;
LAB_140a7ff9b:
    auVar68 = blendpd(local_1120,auVar153,1);
    if (bVar62) goto LAB_140a7ffb0;
LAB_140a7f7f1:
    if (!bVar62) goto LAB_140a7f7f7;
LAB_140a7ffc5:
    auVar158 = blendpd(local_1100,local_1160,1);
    if (bVar62) goto LAB_140a7ffdc;
LAB_140a7f7fd:
    if (!bVar62) goto LAB_140a7f803;
LAB_140a7fff2:
    auVar126 = blendpd(auVar135,auVar72,1);
    if (bVar62) goto LAB_140a7f815;
  }
  else {
    bVar62 = (bVar59 & 2) == 0;
    auVar69 = auVar67;
    local_1160 = auVar158;
    auVar70 = auVar66;
    auVar71 = local_11f0;
    auVar72 = auVar126;
    auVar73 = auVar96;
    auVar153 = auVar68;
    if (bVar62) goto LAB_140a7ff9b;
LAB_140a7f7eb:
    if (!bVar62) goto LAB_140a7f7f1;
LAB_140a7ffb0:
    auVar67 = blendpd(local_1110,auVar69,1);
    if (bVar62) goto LAB_140a7ffc5;
LAB_140a7f7f7:
    if (!bVar62) goto LAB_140a7f7fd;
LAB_140a7ffdc:
    auVar66 = blendpd(local_10f0,auVar70,1);
    if (bVar62) goto LAB_140a7fff2;
LAB_140a7f803:
    if (bVar62) {
LAB_140a7f815:
      auVar96 = blendpd(auVar111,auVar73,1);
    }
  }
  auVar135 = pblendvb(auVar71,auVar140,___xmm_000000000000000000000000ffffff00);
  auVar111 = auVar135;
  if (!bVar62) {
    auVar111 = local_11f0;
  }
  if ((bVar59 & 4) == 0) {
    auVar77 = pblendvb(auVar111,auVar135,___xmm_000000000000000000000000ffff00ff);
    auVar135 = local_1040;
    auVar71 = local_fd0;
    auVar74 = local_1060;
    auVar75 = local_1050;
    auVar140 = auVar77;
    auVar76 = local_1030;
    auVar111 = auVar119;
    if ((char)bVar59 < '\0') goto LAB_140a7f8d4;
LAB_140a80066:
    local_11c0 = pblendw(auVar119,auVar111,0xf);
    if (-1 < (char)bVar59) goto LAB_140a80082;
LAB_140a7f8da:
    if ((char)bVar59 < '\0') goto LAB_140a7f8e0;
LAB_140a8009e:
    local_11e0 = pblendw(local_1050,auVar75,0xf);
    if (-1 < (char)bVar59) goto LAB_140a800ba;
LAB_140a7f8e6:
    if ((char)bVar59 < '\0') goto LAB_140a7f8ec;
LAB_140a800d5:
    local_1190 = pblendw(local_fd0,auVar71,0xf);
    if (-1 < (char)bVar59) goto LAB_140a800f0;
LAB_140a7f8f2:
    auVar119 = pblendvb(auVar140,auVar77,___xmm_000000000000000000000000ff00ffff);
  }
  else {
    auVar77 = pblendvb(auVar111,auVar135,___xmm_000000000000000000000000ffff00ff);
    auVar135 = local_11a0;
    auVar71 = local_1190;
    auVar74 = local_11d0;
    auVar75 = local_11e0;
    auVar140 = local_11f0;
    auVar76 = local_1180;
    auVar111 = local_11c0;
    if (-1 < (char)bVar59) goto LAB_140a80066;
LAB_140a7f8d4:
    if ((char)bVar59 < '\0') goto LAB_140a7f8da;
LAB_140a80082:
    local_11d0 = pblendw(local_1060,auVar74,0xf);
    if (-1 < (char)bVar59) goto LAB_140a8009e;
LAB_140a7f8e0:
    if ((char)bVar59 < '\0') goto LAB_140a7f8e6;
LAB_140a800ba:
    local_11a0 = pblendw(local_1040,auVar135,0xf);
    if (-1 < (char)bVar59) goto LAB_140a800d5;
LAB_140a7f8ec:
    if ((char)bVar59 < '\0') goto LAB_140a7f8f2;
LAB_140a800f0:
    local_1180 = blendpd(local_1030,auVar76,1);
    auVar119 = pblendvb(auVar140,auVar77,___xmm_000000000000000000000000ff00ffff);
  }
  if (-1 < (char)bVar59) {
    local_11f0 = auVar119;
  }
  auVar140 = pblendvb(local_11f0,auVar119,___xmm_00000000000000000000000000ffffff);
  local_1120 = blendpd(auVar68,auVar153,1);
  auVar64 = pblendw(local_11c0,auVar111,0xf);
  local_1110 = blendpd(auVar67,auVar69,1);
  local_1060 = pblendw(local_11d0,auVar74,0xf);
  local_1100 = blendpd(auVar158,local_1160,1);
  local_1050 = pblendw(local_11e0,auVar75,0xf);
  local_10f0 = blendpd(auVar66,auVar70,1);
  local_1040 = pblendw(local_11a0,auVar135,0xf);
  auVar135 = blendpd(auVar126,auVar72,1);
  local_fd0 = pblendw(local_1190,auVar71,0xf);
  auVar111 = blendpd(auVar96,auVar73,1);
  local_1030 = blendpd(local_1180,auVar76,1);
  auVar119 = auVar64;
LAB_140a7fa1c:
  cVar57 = (char)uVar44;
  if ((uVar44 & 1) != 0) {
    local_ad0 = local_1120._0_8_;
    auVar64 = local_1120;
  }
  if ((uVar44 & 2) != 0) {
    auVar18._4_8_ = auVar64._8_8_;
    auVar18._0_4_ = local_1120._4_4_;
    auVar64._0_8_ = auVar18._0_8_ << 0x20;
    auVar64._8_4_ = local_1120._8_4_;
    auVar64._12_4_ = local_1120._12_4_;
    local_a98 = auVar64._8_8_;
  }
  if ((uVar44 & 4) != 0) {
    local_a60 = auVar119._0_8_;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    local_a28 = auVar119._8_8_;
  }
  if ((uVar44 & 1) != 0) {
    local_ac8[0] = local_1110._0_8_;
    auVar64 = local_1110;
  }
  if ((uVar44 & 2) != 0) {
    auVar19._4_8_ = auVar64._8_8_;
    auVar19._0_4_ = local_1110._4_4_;
    auVar64._0_8_ = auVar19._0_8_ << 0x20;
    auVar64._8_4_ = local_1110._8_4_;
    auVar64._12_4_ = local_1110._12_4_;
    local_a90 = auVar64._8_8_;
  }
  if ((uVar44 & 4) != 0) {
    local_a58 = local_1060._0_8_;
    auVar64 = local_1060;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    auVar20._4_8_ = auVar64._8_8_;
    auVar20._0_4_ = local_1060._4_4_;
    auVar64._0_8_ = auVar20._0_8_ << 0x20;
    auVar64._8_4_ = local_1060._8_4_;
    auVar64._12_4_ = local_1060._12_4_;
    local_a20 = auVar64._8_8_;
  }
  if ((uVar44 & 1) != 0) {
    local_ac8[1] = (double)local_1100._0_8_;
    auVar64 = local_1100;
  }
  if ((uVar44 & 2) != 0) {
    auVar21._4_8_ = auVar64._8_8_;
    auVar21._0_4_ = local_1100._4_4_;
    auVar64._0_8_ = auVar21._0_8_ << 0x20;
    auVar64._8_4_ = local_1100._8_4_;
    auVar64._12_4_ = local_1100._12_4_;
    local_a88 = auVar64._8_8_;
  }
  if ((uVar44 & 4) != 0) {
    local_a50 = local_1050._0_8_;
    auVar64 = local_1050;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    auVar22._4_8_ = auVar64._8_8_;
    auVar22._0_4_ = local_1050._4_4_;
    auVar64._0_8_ = auVar22._0_8_ << 0x20;
    auVar64._8_4_ = local_1050._8_4_;
    auVar64._12_4_ = local_1050._12_4_;
    local_a18 = auVar64._8_8_;
  }
  if ((uVar44 & 1) != 0) {
    local_ab8[0] = local_10f0._0_8_;
    auVar64 = local_10f0;
  }
  if ((uVar44 & 2) != 0) {
    auVar23._4_8_ = auVar64._8_8_;
    auVar23._0_4_ = local_10f0._4_4_;
    auVar64._0_8_ = auVar23._0_8_ << 0x20;
    auVar64._8_4_ = local_10f0._8_4_;
    auVar64._12_4_ = local_10f0._12_4_;
    local_a80 = auVar64._8_8_;
  }
  if ((uVar44 & 4) != 0) {
    local_a48 = local_1040._0_8_;
    auVar64 = local_1040;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    auVar24._4_8_ = auVar64._8_8_;
    auVar24._0_4_ = local_1040._4_4_;
    auVar64._0_8_ = auVar24._0_8_ << 0x20;
    auVar64._8_4_ = local_1040._8_4_;
    auVar64._12_4_ = local_1040._12_4_;
    local_a10 = auVar64._8_8_;
  }
  if ((uVar44 & 1) != 0) {
    local_ab8[1] = (double)auVar135._0_8_;
  }
  if ((uVar44 & 2) != 0) {
    local_a78 = auVar135._8_8_;
  }
  if ((uVar44 & 4) != 0) {
    local_a40 = local_fd0._0_8_;
    auVar64 = local_fd0;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    auVar25._4_8_ = auVar64._8_8_;
    auVar25._0_4_ = local_fd0._4_4_;
    auVar64._0_8_ = auVar25._0_8_ << 0x20;
    auVar64._8_4_ = local_fd0._8_4_;
    auVar64._12_4_ = local_fd0._12_4_;
    local_a08 = auVar64._8_8_;
  }
  if ((uVar44 & 1) != 0) {
    local_ab8[2] = (double)auVar111._0_8_;
  }
  if ((uVar44 & 2) != 0) {
    local_a70 = auVar111._8_8_;
  }
  if ((uVar44 & 4) != 0) {
    local_a38 = local_1030._0_8_;
    auVar64 = local_1030;
  }
  uVar43 = (char)(cVar57 << 4) >> 4;
  if ((char)uVar43 < '\0') {
    auVar26._4_8_ = auVar64._8_8_;
    auVar26._0_4_ = local_1030._4_4_;
    auVar88._0_8_ = auVar26._0_8_ << 0x20;
    auVar88._8_4_ = local_1030._8_4_;
    auVar88._12_4_ = local_1030._12_4_;
    local_a00 = auVar88._8_8_;
  }
  if ((uVar44 & 1) != 0) {
    local_aa0[0] = auVar140[0];
  }
  if ((uVar44 & 2) != 0) {
    local_a68 = auVar140[1];
  }
  if ((uVar44 & 4) != 0) {
    local_a30 = auVar140[2];
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    local_9f8 = auVar140[3];
  }
  auVar87._0_4_ = -(uint)((int)(uint)__xmm_00000003000000020000000100000000 < (int)param_7);
  auVar87._4_4_ = -(uint)((int)__xmm_00000003000000020000000100000000._4_4_ < (int)param_7);
  auVar87._8_4_ = -(uint)((int)_UNK_150631e08 < (int)param_7);
  auVar87._12_4_ = -(uint)((int)_UNK_150631e0c < (int)param_7);
  uVar56 = movmskps(CONCAT31((int3)(uVar44 >> 8),uVar43),auVar87 & local_910);
  if (uVar56 != 0) {
    uVar49 = (ulonglong)(uVar56 & 0xff);
    do {
      if (uVar49 == 0) {
        uVar50 = 0x40;
      }
      else {
        uVar50 = 0;
        for (uVar17 = uVar49; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
          uVar50 = uVar50 + 1;
        }
      }
      lVar48 = uVar50 * 0x38;
      cVar51 = param_6[3][0];
      cVar57 = local_aa0[lVar48];
      if ((cVar51 == '\0') || (cVar57 == '\0')) {
        if (cVar57 == '\0') {
          cVar51 = param_6[3][0];
          dVar116 = *(double *)param_6[2];
          dVar114 = *(double *)(param_6[1] + 8);
          dVar112 = *(double *)param_6[1];
          uVar94 = *(undefined8 *)*param_6;
          dVar108 = *(double *)(*param_6 + 8);
          dVar118 = *(double *)(param_6[2] + 8);
        }
        else {
          uVar94 = *(undefined8 *)*(undefined1 (*) [16])(&local_ad0 + uVar50 * 7);
          dVar108 = local_ac8[uVar50 * 7];
          dVar112 = local_ac8[uVar50 * 7 + 1];
          dVar114 = local_ab8[uVar50 * 7];
          dVar116 = local_ab8[uVar50 * 7 + 1];
          cVar51 = cVar57;
          dVar118 = *(double *)(local_aa0 + lVar48 + -8);
        }
      }
      else {
        auVar119 = minpd(*param_6,*(undefined1 (*) [16])(&local_ad0 + uVar50 * 7));
        uVar94 = auVar119._0_8_;
        dVar108 = auVar119._8_8_;
        dVar112 = *(double *)param_6[1];
        if (local_ac8[uVar50 * 7 + 1] <= *(double *)param_6[1]) {
          dVar112 = local_ac8[uVar50 * 7 + 1];
        }
        auVar119 = maxpd(*(undefined1 (*) [16])(param_6[1] + 8),
                         *(undefined1 (*) [16])(local_ab8 + uVar50 * 7));
        dVar114 = auVar119._0_8_;
        dVar116 = auVar119._8_8_;
        dVar118 = *(double *)(param_6[2] + 8);
        if (*(double *)(param_6[2] + 8) <= *(double *)(local_aa0 + lVar48 + -8)) {
          dVar118 = *(double *)(local_aa0 + lVar48 + -8);
        }
      }
      uVar49 = uVar49 & ~(1L << (uVar50 & 0x3f));
      *(undefined8 *)*param_6 = uVar94;
      *(double *)(*param_6 + 8) = dVar108;
      *(double *)param_6[1] = dVar112;
      *(double *)(param_6[1] + 8) = dVar114;
      *(double *)param_6[2] = dVar116;
      *(double *)(param_6[2] + 8) = dVar118;
      param_6[3][0] = cVar51;
    } while (uVar49 != 0);
  }
  return;
}

// BoxCalcBoundsFromTransformGroup___un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_sse4 @ 140a80f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromTransformGroup___un_3C_Cuni_3E_un_3C_s_5B__c_unFMatrix_5D__3E_un_3C_s_5B__c_unFBox_5D__3E_REFs_5B__c_unFMatrix_5D_REFs_5B_unFBox_5D_Cuni_sse4
               (uint *param_1,longlong param_2,longlong param_3,double *param_4,
               undefined1 (*param_5) [16],uint param_6,undefined1 (*param_7) [16])

{
  int *piVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  uint *puVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [12];
  undefined1 auVar21 [12];
  undefined1 auVar22 [12];
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  undefined1 auVar25 [12];
  undefined1 auVar26 [12];
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
  byte bVar43;
  undefined1 uVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  uint uVar48;
  undefined4 uVar49;
  ulonglong uVar50;
  int iVar51;
  ulonglong uVar52;
  ulonglong uVar53;
  char cVar54;
  longlong lVar55;
  ulonglong uVar56;
  char cVar57;
  longlong lVar58;
  uint uVar59;
  longlong lVar60;
  byte bVar61;
  ulonglong uVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  bool bVar67;
  double dVar68;
  undefined1 auVar70 [16];
  double dVar69;
  undefined1 auVar71 [16];
  double dVar80;
  double dVar81;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  double dVar82;
  undefined8 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar94;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar95;
  double dVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  double dVar102;
  double dVar103;
  undefined1 auVar101 [16];
  double dVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  double dVar110;
  undefined1 auVar109 [16];
  double dVar111;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  double dVar118;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar119;
  double dVar120;
  undefined1 in_XMM5 [16];
  undefined1 auVar121 [16];
  double dVar124;
  double dVar125;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar126;
  double dVar127;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  double dVar131;
  double dVar132;
  double dVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  double dVar139;
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  double dVar140;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  double dVar143;
  double dVar144;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  double dVar149;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  double dVar150;
  double dVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  double dVar155;
  double dVar156;
  undefined1 auVar154 [16];
  double dVar157;
  double dVar158;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  double dVar161;
  double dVar162;
  double dVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  double dVar174;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  double dVar178;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  double dVar181;
  double dVar182;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  double dVar186;
  undefined1 auVar185 [16];
  undefined1 local_11f0 [16];
  undefined1 local_11e0 [16];
  undefined1 local_11d0 [16];
  undefined1 local_11c0 [16];
  undefined1 local_11b0 [16];
  undefined1 local_11a0 [16];
  undefined1 local_1190 [16];
  undefined1 local_1180 [16];
  undefined1 local_1170 [16];
  undefined1 local_1160 [16];
  undefined1 local_1150 [16];
  undefined1 local_1140 [16];
  undefined1 local_1130 [16];
  undefined1 local_1120 [16];
  undefined1 local_1110 [16];
  undefined1 local_1100 [16];
  undefined1 local_10f0 [16];
  undefined1 local_10e0 [16];
  undefined1 local_10d0 [16];
  undefined1 local_10c0 [16];
  undefined1 local_10b0 [16];
  undefined1 local_10a0 [16];
  undefined1 local_1090 [9];
  char cStack_1087;
  char cStack_1086;
  char cStack_1085;
  char cStack_1084;
  char cStack_1083;
  char cStack_1082;
  char cStack_1081;
  undefined1 local_1080 [16];
  undefined1 local_1070 [16];
  undefined1 local_1060 [16];
  undefined1 local_1050 [16];
  undefined1 local_1030 [16];
  undefined1 local_1020 [16];
  undefined1 local_1010 [16];
  undefined1 local_1000 [16];
  undefined1 local_ff0 [16];
  undefined1 local_fe0 [16];
  undefined1 local_fd0 [16];
  undefined1 local_fb0 [16];
  undefined1 local_fa0 [16];
  undefined1 local_f90 [16];
  undefined1 local_f10 [16];
  undefined1 local_f00 [16];
  undefined1 local_e30 [16];
  longlong local_e20;
  longlong lStack_e18;
  undefined1 local_e00 [16];
  undefined1 local_df0 [16];
  undefined1 local_db0 [16];
  double local_d40 [19];
  double dStack_ca8;
  double local_ca0;
  double dStack_c98;
  double local_c90;
  double dStack_c88;
  double local_c60;
  double dStack_c58;
  double local_c50;
  double dStack_c48;
  double local_c40;
  double dStack_c38;
  double local_c30;
  double dStack_c28;
  double local_c20;
  double dStack_c18;
  double local_c10;
  double dStack_c08;
  double local_be0;
  double dStack_bd8;
  double local_bd0;
  double dStack_bc8;
  double local_bc0;
  double dStack_bb8;
  double local_bb0;
  double dStack_ba8;
  double local_ba0;
  double dStack_b98;
  double local_b90;
  double dStack_b88;
  double local_b60;
  double dStack_b58;
  double local_b50;
  double dStack_b48;
  double local_b40;
  double dStack_b38;
  double local_b30;
  double dStack_b28;
  double local_b20;
  double dStack_b18;
  double local_b10;
  double dStack_b08;
  undefined1 local_ad0 [16];
  undefined8 local_ac0;
  double local_ab8 [2];
  double local_aa8 [3];
  char local_a90 [8];
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined1 local_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined1 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined1 local_9e8;
  undefined8 local_9e0;
  double adStack_9d8 [2];
  double local_9c8 [3];
  char local_9b0 [8];
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 local_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined1 local_978;
  undefined8 local_970;
  undefined8 local_968;
  double adStack_960 [4];
  undefined1 local_940 [8];
  double local_938 [6];
  undefined1 local_908 [8];
  double local_900 [7];
  undefined8 uStack_8c8;
  undefined8 local_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  double local_760 [19];
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  double local_560 [19];
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  double local_360 [19];
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  
  local_ad0 = *param_7;
  uVar45 = movmskps((int)param_7,local_ad0);
  uVar59 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar59 = param_6;
  }
  uVar59 = uVar59 & 0xfffffffc;
  if (uVar45 == 0xf) {
    if ((int)uVar59 < 1) {
      auVar97 = ZEXT816(0);
      uVar45 = 0;
      auVar71 = ZEXT816(0);
      local_ff0 = ZEXT816(0);
      local_10c0 = ZEXT816(0);
      local_1000 = ZEXT816(0);
      local_10d0 = ZEXT816(0);
      local_fd0 = ZEXT816(0);
      local_10e0 = ZEXT816(0);
      local_1020 = ZEXT816(0);
      local_10f0 = ZEXT816(0);
      local_1030 = ZEXT816(0);
      local_1110 = ZEXT816(0);
      auVar84 = ZEXT816(0);
      uVar50 = 0xf;
    }
    else {
      uVar45 = 0;
      local_1110 = ZEXT816(0);
      auVar84 = ZEXT816(0);
      local_10f0 = ZEXT816(0);
      local_1030 = ZEXT816(0);
      local_10e0 = ZEXT816(0);
      local_1020 = ZEXT816(0);
      local_10d0 = ZEXT816(0);
      local_fd0 = ZEXT816(0);
      local_10c0 = ZEXT816(0);
      local_1000 = ZEXT816(0);
      auVar71 = ZEXT816(0);
      local_ff0 = ZEXT816(0);
      auVar97 = ZEXT816(0);
      do {
        uVar53 = (ulonglong)(uVar45 * 7);
        uVar52 = (ulonglong)(uVar45 * 7);
        uVar56 = (ulonglong)(uVar45 * 7);
        uVar62 = (ulonglong)(uVar45 * 7);
        uVar50 = (ulonglong)(uVar45 * 4);
        piVar1 = (int *)((longlong)param_1 + uVar50);
        auVar129._8_4_ = 0xffffffff;
        auVar129._0_8_ = 0xffffffffffffffff;
        auVar129._12_4_ = 0xffffffff;
        auVar87._0_4_ = -(uint)(*piVar1 == -1);
        auVar87._4_4_ = -(uint)(piVar1[1] == -1);
        auVar87._8_4_ = -(uint)(piVar1[2] == -1);
        auVar87._12_4_ = -(uint)(piVar1[3] == -1);
        auVar89[0] = -(*(char *)(param_3 + 0x30 + uVar53 * 8) == '\0');
        auVar89[1] = -(*(char *)(param_3 + 0x68 + uVar52 * 8) == '\0');
        auVar89[2] = -(*(char *)(param_3 + 0xa0 + uVar56 * 8) == '\0');
        auVar89[3] = -(*(char *)(param_3 + 0xd8 + uVar62 * 8) == '\0');
        auVar89[4] = 0xff;
        auVar89[5] = 0xff;
        auVar89[6] = 0xff;
        auVar89[7] = 0xff;
        auVar89[8] = 0xff;
        auVar89[9] = 0xff;
        auVar89[10] = 0xff;
        auVar89[0xb] = 0xff;
        auVar89[0xc] = 0xff;
        auVar89[0xd] = 0xff;
        auVar89[0xe] = 0xff;
        auVar89[0xf] = 0xff;
        auVar89 = pmovsxbd(auVar89 ^ auVar129,auVar89 ^ auVar129);
        unaff_XMM6 = ~auVar87 & auVar89;
        iVar46 = movmskps((int)param_1,unaff_XMM6);
        if (iVar46 != 0) {
          auVar88._0_4_ = uVar45 << 7;
          auVar88._4_4_ = uVar45 << 7;
          auVar88._8_4_ = uVar45 << 7;
          auVar88._12_4_ = uVar45 << 7;
          auVar89 = pmovzxdq(auVar129,auVar88);
          auVar98._4_4_ = 0;
          auVar98._0_4_ = auVar88._8_4_;
          auVar98._8_4_ = auVar88._12_4_;
          auVar98._12_4_ = 0;
          auVar115 = pmovsxdq(in_XMM5,unaff_XMM6);
          auVar100 = blendvps(ZEXT816(0),auVar89,auVar115);
          auVar121._12_4_ = unaff_XMM6._12_4_;
          auVar121._4_4_ = unaff_XMM6._8_4_;
          auVar121._0_4_ = unaff_XMM6._8_4_;
          auVar121._8_4_ = auVar121._12_4_;
          auVar88 = blendvps(ZEXT816(0),auVar98,auVar121);
          auVar89 = blendvps(ZEXT816(0),___xmm_00000000000000800000000000000000,auVar115);
          auVar113 = blendvps((undefined1  [16])0x0,___xmm_00000000000001800000000000000100,auVar121
                             );
          auVar105 = blendvps(ZEXT816(0),___xmm_00000000000000880000000000000008,auVar115);
          auVar141 = blendvps(ZEXT816(0),___xmm_00000000000001880000000000000108,auVar121);
          auVar179 = blendvps(ZEXT816(0),___xmm_00000000000000900000000000000010,auVar115);
          auVar145 = blendvps(ZEXT816(0),___xmm_00000000000001900000000000000110,auVar121);
          auVar129 = blendvps(ZEXT816(0),___xmm_00000000000000980000000000000018,auVar115);
          auVar152 = blendvps(ZEXT816(0),___xmm_00000000000001980000000000000118,auVar121);
          auVar98 = blendvps(ZEXT816(0),___xmm_00000000000000a00000000000000020,auVar115);
          auVar159 = blendvps(ZEXT816(0),___xmm_00000000000001a00000000000000120,auVar121);
          auVar183 = blendvps(ZEXT816(0),___xmm_00000000000000a80000000000000028,auVar115);
          auVar108 = blendvps(ZEXT816(0),___xmm_00000000000001a80000000000000128,auVar121);
          auVar175 = blendvps(ZEXT816(0),___xmm_00000000000000b00000000000000030,auVar115);
          auVar134 = blendvps(ZEXT816(0),___xmm_00000000000001b00000000000000130,auVar121);
          auVar164 = blendvps(ZEXT816(0),___xmm_00000000000000b80000000000000038,auVar115);
          auVar112 = blendvps(ZEXT816(0),___xmm_00000000000001b80000000000000138,auVar121);
          auVar106 = blendvps(ZEXT816(0),___xmm_00000000000000c00000000000000040,auVar115);
          auVar107 = blendvps(ZEXT816(0),___xmm_00000000000001c00000000000000140,auVar121);
          auVar142 = blendvps(ZEXT816(0),___xmm_00000000000000c80000000000000048,auVar115);
          auVar146 = blendvps(ZEXT816(0),___xmm_00000000000001c80000000000000148,auVar121);
          auVar87 = blendvps(ZEXT816(0),___xmm_00000000000000d00000000000000050,auVar115);
          auVar180 = blendvps(ZEXT816(0),___xmm_00000000000001d00000000000000150,auVar121);
          auVar99 = blendvps(ZEXT816(0),___xmm_00000000000000d80000000000000058,auVar115);
          auVar153 = blendvps(ZEXT816(0),___xmm_00000000000001d80000000000000158,auVar121);
          auVar184 = blendvps(ZEXT816(0),___xmm_00000000000000e00000000000000060,auVar115);
          auVar160 = blendvps(ZEXT816(0),___xmm_00000000000001e00000000000000160,auVar121);
          local_fb0._0_8_ = auVar108._0_8_;
          local_fb0._8_8_ = auVar108._8_8_;
          auVar114 = blendvps(ZEXT816(0),___xmm_00000000000000e80000000000000068,auVar115);
          auVar135 = blendvps(ZEXT816(0),___xmm_00000000000001e80000000000000168,auVar121);
          auVar176 = blendvps(ZEXT816(0),___xmm_00000000000000f00000000000000070,auVar115);
          auVar165 = blendvps(ZEXT816(0),___xmm_00000000000001f00000000000000170,auVar121);
          auVar108 = blendvps(ZEXT816(0),___xmm_00000000000000f80000000000000078,auVar115);
          auVar115 = blendvps((undefined1  [16])0x0,___xmm_00000000000001f80000000000000178,auVar121
                             );
          local_1070._0_8_ = auVar112._0_8_;
          local_1070._8_8_ = auVar112._8_8_;
          local_1090._0_8_ = auVar106._0_8_;
          stack0xffffffffffffef78 = auVar106._8_8_;
          dVar69 = *(double *)(param_3 + 0x70 + uVar56 * 8);
          dVar81 = *(double *)(param_3 + 0xa8 + uVar62 * 8);
          dVar82 = *(double *)(param_3 + 0x78 + uVar56 * 8);
          dVar94 = *(double *)(param_3 + 0xb0 + uVar62 * 8);
          local_1120._0_8_ = auVar107._0_8_;
          local_1120._8_8_ = auVar107._8_8_;
          dVar104 = *(double *)(param_3 + 0x80 + uVar56 * 8);
          dVar110 = *(double *)(param_3 + 0xb8 + uVar62 * 8);
          dVar96 = *(double *)(param_3 + 0x88 + uVar56 * 8);
          dVar103 = *(double *)(param_3 + 0xc0 + uVar62 * 8);
          dVar120 = *(double *)(param_3 + 0x90 + uVar56 * 8);
          dVar125 = *(double *)(param_3 + 200 + uVar62 * 8);
          dVar133 = *(double *)(param_3 + 0x98 + uVar56 * 8);
          dVar139 = *(double *)(param_3 + 0xd0 + uVar62 * 8);
          dVar95 = *(double *)(param_3 + uVar53 * 8);
          dVar102 = *(double *)(param_3 + 0x38 + uVar52 * 8);
          dVar127 = *(double *)(param_3 + 8 + uVar53 * 8);
          dVar132 = *(double *)(param_3 + 0x40 + uVar52 * 8);
          dVar140 = *(double *)(param_3 + 0x10 + uVar53 * 8);
          dVar143 = *(double *)(param_3 + 0x48 + uVar52 * 8);
          dVar144 = *(double *)(param_3 + 0x18 + uVar53 * 8);
          dVar149 = *(double *)(param_3 + 0x50 + uVar52 * 8);
          dVar151 = *(double *)(param_3 + 0x20 + uVar53 * 8);
          dVar156 = *(double *)(param_3 + 0x58 + uVar52 * 8);
          dVar158 = *(double *)(param_3 + 0x28 + uVar53 * 8);
          dVar162 = *(double *)(param_3 + 0x60 + uVar52 * 8);
          lVar65 = auVar100._0_8_ + param_2;
          lVar66 = auVar100._8_8_ + param_2;
          lVar64 = auVar88._0_8_ + param_2;
          lVar60 = auVar88._8_8_ + param_2;
          local_360[0xe] = (double)*(undefined8 *)(auVar113._0_8_ + lVar64);
          local_360[0xf] = (double)*(undefined8 *)(auVar113._8_8_ + lVar60);
          local_360[0xc] = (double)*(undefined8 *)(auVar89._0_8_ + lVar65);
          local_360[0xd] = (double)*(undefined8 *)(auVar89._8_8_ + lVar66);
          local_360[0x12] = (double)*(undefined8 *)(auVar141._0_8_ + lVar64);
          uStack_2c8 = *(undefined8 *)(auVar141._8_8_ + lVar60);
          local_360[0x10] = (double)*(undefined8 *)(auVar105._0_8_ + lVar65);
          local_360[0x11] = (double)*(undefined8 *)(auVar105._8_8_ + lVar66);
          local_2b0 = *(undefined8 *)(auVar145._0_8_ + lVar64);
          uStack_2a8 = *(undefined8 *)(auVar145._8_8_ + lVar60);
          local_2c0 = *(undefined8 *)(auVar179._0_8_ + lVar65);
          uStack_2b8 = *(undefined8 *)(auVar179._8_8_ + lVar66);
          local_290 = *(undefined8 *)(auVar152._0_8_ + lVar64);
          uStack_288 = *(undefined8 *)(auVar152._8_8_ + lVar60);
          local_2a0 = *(undefined8 *)(auVar129._0_8_ + lVar65);
          uStack_298 = *(undefined8 *)(auVar129._8_8_ + lVar66);
          local_270 = *(undefined8 *)(auVar159._0_8_ + lVar64);
          uStack_268 = *(undefined8 *)(auVar159._8_8_ + lVar60);
          local_280 = *(undefined8 *)(auVar98._0_8_ + lVar65);
          uStack_278 = *(undefined8 *)(auVar98._8_8_ + lVar66);
          local_250 = *(undefined8 *)(local_fb0._0_8_ + lVar64);
          uStack_248 = *(undefined8 *)(local_fb0._8_8_ + lVar60);
          local_260 = *(undefined8 *)(auVar183._0_8_ + lVar65);
          uStack_258 = *(undefined8 *)(auVar183._8_8_ + lVar66);
          local_230 = *(undefined8 *)(auVar134._0_8_ + lVar64);
          uStack_228 = *(undefined8 *)(auVar134._8_8_ + lVar60);
          local_240 = *(undefined8 *)(auVar175._0_8_ + lVar65);
          uStack_238 = *(undefined8 *)(auVar175._8_8_ + lVar66);
          local_210 = *(undefined8 *)(local_1070._0_8_ + lVar64);
          uStack_208 = *(undefined8 *)(local_1070._8_8_ + lVar60);
          local_220 = *(undefined8 *)(auVar164._0_8_ + lVar65);
          uStack_218 = *(undefined8 *)(auVar164._8_8_ + lVar66);
          local_1f0 = *(undefined8 *)(local_1120._0_8_ + lVar64);
          uStack_1e8 = *(undefined8 *)(local_1120._8_8_ + lVar60);
          local_200 = *(undefined8 *)(local_1090._0_8_ + lVar65);
          uStack_1f8 = *(undefined8 *)(stack0xffffffffffffef78 + lVar66);
          local_1d0 = *(undefined8 *)(auVar146._0_8_ + lVar64);
          uStack_1c8 = *(undefined8 *)(auVar146._8_8_ + lVar60);
          local_1e0 = *(undefined8 *)(auVar142._0_8_ + lVar65);
          uStack_1d8 = *(undefined8 *)(auVar142._8_8_ + lVar66);
          local_1b0 = *(undefined8 *)(auVar180._0_8_ + lVar64);
          uStack_1a8 = *(undefined8 *)(auVar180._8_8_ + lVar60);
          local_1c0 = *(undefined8 *)(auVar87._0_8_ + lVar65);
          uStack_1b8 = *(undefined8 *)(auVar87._8_8_ + lVar66);
          local_190 = *(undefined8 *)(auVar153._0_8_ + lVar64);
          uStack_188 = *(undefined8 *)(auVar153._8_8_ + lVar60);
          local_1a0 = *(undefined8 *)(auVar99._0_8_ + lVar65);
          uStack_198 = *(undefined8 *)(auVar99._8_8_ + lVar66);
          local_170 = *(undefined8 *)(auVar160._0_8_ + lVar64);
          uStack_168 = *(undefined8 *)(auVar160._8_8_ + lVar60);
          local_180 = *(undefined8 *)(auVar184._0_8_ + lVar65);
          uStack_178 = *(undefined8 *)(auVar184._8_8_ + lVar66);
          bVar61 = (char)((char)iVar46 << 4) >> 4;
          uVar50 = (ulonglong)CONCAT31((int3)((uint)iVar46 >> 8),bVar61);
          local_150 = *(undefined8 *)(auVar135._0_8_ + lVar64);
          uStack_148 = *(undefined8 *)(auVar135._8_8_ + lVar60);
          local_160 = *(undefined8 *)(auVar114._0_8_ + lVar65);
          uStack_158 = *(undefined8 *)(auVar114._8_8_ + lVar66);
          local_130 = *(undefined8 *)(auVar165._0_8_ + lVar64);
          uStack_128 = *(undefined8 *)(auVar165._8_8_ + lVar60);
          local_140 = *(undefined8 *)(auVar176._0_8_ + lVar65);
          uStack_138 = *(undefined8 *)(auVar176._8_8_ + lVar66);
          local_110 = *(undefined8 *)(auVar115._0_8_ + lVar64);
          uStack_108 = *(undefined8 *)(auVar115._8_8_ + lVar60);
          local_120 = *(undefined8 *)(auVar108._0_8_ + lVar65);
          uStack_118 = *(undefined8 *)(auVar108._8_8_ + lVar66);
          dVar68 = *param_4;
          dVar80 = *param_4;
          dVar111 = param_4[4];
          dVar118 = param_4[4];
          dVar119 = param_4[8];
          dVar124 = param_4[8];
          dVar126 = param_4[0xc];
          dVar131 = param_4[0xc];
          lVar60 = 0x60;
          dVar155 = param_4[1];
          dVar150 = param_4[1];
          dVar157 = param_4[5];
          dVar161 = param_4[5];
          dVar163 = param_4[9];
          dVar174 = param_4[9];
          dVar181 = param_4[0xd];
          dVar178 = param_4[0xd];
          dVar182 = param_4[2];
          dVar186 = param_4[2];
          dVar3 = param_4[6];
          dVar2 = param_4[6];
          dVar4 = param_4[10];
          dVar5 = param_4[10];
          dVar6 = param_4[0xe];
          dVar7 = param_4[0xe];
          dVar8 = param_4[3];
          dVar9 = param_4[3];
          dVar10 = param_4[7];
          dVar11 = param_4[7];
          dVar12 = param_4[0xb];
          dVar13 = param_4[0xb];
          dVar15 = param_4[0xf];
          dVar14 = param_4[0xf];
          do {
            dVar27 = *(double *)((longlong)local_360 + lVar60);
            dVar28 = *(double *)((longlong)local_360 + lVar60 + 8);
            dVar29 = *(double *)((longlong)local_360 + lVar60 + 0x10);
            dVar30 = *(double *)((longlong)local_360 + lVar60 + 0x18);
            dVar31 = *(double *)((longlong)local_360 + lVar60 + 0x20);
            dVar32 = *(double *)((longlong)local_360 + lVar60 + 0x28);
            dVar33 = *(double *)((longlong)local_360 + lVar60 + 0x30);
            dVar34 = *(double *)((longlong)local_360 + lVar60 + 0x38);
            dVar35 = *(double *)((longlong)local_360 + lVar60 + 0x50);
            dVar36 = *(double *)((longlong)local_360 + lVar60 + 0x58);
            dVar37 = *(double *)((longlong)local_360 + lVar60 + 0x40);
            dVar38 = *(double *)((longlong)local_360 + lVar60 + 0x48);
            dVar39 = *(double *)((longlong)local_360 + lVar60 + 0x60);
            dVar40 = *(double *)((longlong)local_360 + lVar60 + 0x68);
            dVar41 = *(double *)((longlong)local_360 + lVar60 + 0x70);
            dVar42 = *(double *)((longlong)local_360 + lVar60 + 0x78);
            *(double *)((longlong)local_d40 + lVar60 + 0x10) =
                 dVar41 * dVar126 + dVar35 * dVar119 + dVar33 * dVar111 + dVar29 * dVar68 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x18) =
                 dVar42 * dVar131 + dVar36 * dVar124 + dVar34 * dVar118 + dVar30 * dVar80 + 0.0;
            *(double *)((longlong)local_d40 + lVar60) =
                 dVar39 * dVar126 + dVar37 * dVar119 + dVar31 * dVar111 + dVar27 * dVar68 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 8) =
                 dVar40 * dVar131 + dVar38 * dVar124 + dVar32 * dVar118 + dVar28 * dVar80 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x30) =
                 dVar41 * dVar181 + dVar35 * dVar163 + dVar33 * dVar157 + dVar29 * dVar155 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x38) =
                 dVar42 * dVar178 + dVar36 * dVar174 + dVar34 * dVar161 + dVar30 * dVar150 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x20) =
                 dVar39 * dVar181 + dVar37 * dVar163 + dVar31 * dVar157 + dVar27 * dVar155 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x28) =
                 dVar40 * dVar178 + dVar38 * dVar174 + dVar32 * dVar161 + dVar28 * dVar150 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x50) =
                 dVar41 * dVar6 + dVar35 * dVar4 + dVar33 * dVar3 + dVar29 * dVar182 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x58) =
                 dVar42 * dVar7 + dVar36 * dVar5 + dVar34 * dVar2 + dVar30 * dVar186 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x40) =
                 dVar39 * dVar6 + dVar37 * dVar4 + dVar31 * dVar3 + dVar27 * dVar182 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x48) =
                 dVar40 * dVar7 + dVar38 * dVar5 + dVar32 * dVar2 + dVar28 * dVar186 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x70) =
                 dVar41 * dVar15 + dVar35 * dVar12 + dVar33 * dVar10 + dVar29 * dVar8 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x78) =
                 dVar42 * dVar14 + dVar36 * dVar13 + dVar34 * dVar11 + dVar30 * dVar9 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x60) =
                 dVar39 * dVar15 + dVar37 * dVar12 + dVar31 * dVar10 + dVar27 * dVar8 + 0.0;
            *(double *)((longlong)local_d40 + lVar60 + 0x68) =
                 dVar40 * dVar14 + dVar38 * dVar13 + dVar32 * dVar11 + dVar28 * dVar9 + 0.0;
            lVar60 = lVar60 + 0x80;
          } while (lVar60 != 0x260);
          dVar111 = (dVar95 + dVar144) * ___xmm_3fe00000000000003fe0000000000000;
          dVar118 = (dVar102 + dVar149) * _UNK_150689678;
          dVar126 = (dVar127 + dVar151) * ___xmm_3fe00000000000003fe0000000000000;
          dVar131 = (dVar132 + dVar156) * _UNK_150689678;
          dVar119 = (dVar69 + dVar96) * ___xmm_3fe00000000000003fe0000000000000;
          dVar124 = (dVar81 + dVar103) * _UNK_150689678;
          dVar68 = (dVar82 + dVar120) * ___xmm_3fe00000000000003fe0000000000000;
          dVar80 = (dVar94 + dVar125) * _UNK_150689678;
          dVar178 = (dVar104 + dVar133) * ___xmm_3fe00000000000003fe0000000000000;
          dVar181 = (dVar110 + dVar139) * _UNK_150689678;
          dVar163 = (dVar140 + dVar158) * ___xmm_3fe00000000000003fe0000000000000;
          dVar174 = (dVar143 + dVar162) * _UNK_150689678;
          dVar95 = (dVar144 - dVar95) * ___xmm_3fe00000000000003fe0000000000000;
          dVar102 = (dVar149 - dVar102) * _UNK_150689678;
          dVar144 = (dVar96 - dVar69) * ___xmm_3fe00000000000003fe0000000000000;
          dVar149 = (dVar103 - dVar81) * _UNK_150689678;
          dVar151 = (dVar151 - dVar127) * ___xmm_3fe00000000000003fe0000000000000;
          dVar156 = (dVar156 - dVar132) * _UNK_150689678;
          dVar150 = (dVar120 - dVar82) * ___xmm_3fe00000000000003fe0000000000000;
          dVar155 = (dVar125 - dVar94) * _UNK_150689678;
          dVar82 = dVar178 * local_bd0 + dVar68 * local_c50 + dVar119 * local_d40[0xe] + local_b50;
          dVar94 = dVar181 * dStack_bc8 + dVar80 * dStack_c48 + dVar124 * local_d40[0xf] +
                   dStack_b48;
          dVar120 = dVar163 * local_be0 + dVar126 * local_c60 + dVar111 * local_d40[0xc] + local_b60
          ;
          dVar125 = dVar174 * dStack_bd8 + dVar131 * dStack_c58 + dVar118 * local_d40[0xd] +
                    dStack_b58;
          dVar157 = (dVar133 - dVar104) * ___xmm_3fe00000000000003fe0000000000000;
          dVar161 = (dVar139 - dVar110) * _UNK_150689678;
          dVar133 = (dVar158 - dVar140) * ___xmm_3fe00000000000003fe0000000000000;
          dVar139 = (dVar162 - dVar143) * _UNK_150689678;
          dVar127 = dVar178 * local_bb0 + dVar68 * local_c30 + dVar119 * local_d40[0x12] + local_b30
          ;
          dVar140 = dVar181 * dStack_ba8 + dVar80 * dStack_c28 + dVar124 * dStack_ca8 + dStack_b28;
          dVar96 = (double)((ulonglong)(local_be0 * dVar133) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_c60 * dVar151) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_d40[0xc] * dVar95) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
          dVar103 = (double)((ulonglong)(dStack_bd8 * dVar139) & _UNK_15061cc88) +
                    (double)((ulonglong)(dStack_c58 * dVar156) & _UNK_15061cc88) +
                    (double)((ulonglong)(local_d40[0xd] * dVar102) & _UNK_15061cc88);
          dVar132 = dVar163 * local_bc0 + dVar126 * local_c40 + dVar111 * local_d40[0x10] +
                    local_b40;
          dVar143 = dVar174 * dStack_bb8 + dVar131 * dStack_c38 + dVar118 * local_d40[0x11] +
                    dStack_b38;
          dVar104 = (double)((ulonglong)(local_bd0 * dVar157) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_c50 * dVar150) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_d40[0xe] * dVar144) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar110 = (double)((ulonglong)(dStack_bc8 * dVar161) & _UNK_15061cc88) +
                    (double)((ulonglong)(dStack_c48 * dVar155) & _UNK_15061cc88) +
                    (double)((ulonglong)(local_d40[0xf] * dVar149) & _UNK_15061cc88);
          dVar68 = dVar178 * local_b90 + dVar68 * local_c10 + dVar119 * local_c90 + local_b10;
          dVar80 = dVar181 * dStack_b88 + dVar80 * dStack_c08 + dVar124 * dStack_c88 + dStack_b08;
          dVar119 = (double)((ulonglong)(local_bc0 * dVar133) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_c40 * dVar151) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(local_d40[0x10] * dVar95) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar124 = (double)((ulonglong)(dStack_bb8 * dVar139) & _UNK_15061cc88) +
                    (double)((ulonglong)(dStack_c38 * dVar156) & _UNK_15061cc88) +
                    (double)((ulonglong)(local_d40[0x11] * dVar102) & _UNK_15061cc88);
          dVar158 = dVar163 * local_ba0 + dVar126 * local_c20 + dVar111 * local_ca0 + local_b20;
          dVar162 = dVar174 * dStack_b98 + dVar131 * dStack_c18 + dVar118 * dStack_c98 + dStack_b18;
          dVar69 = (double)((ulonglong)(local_bb0 * dVar157) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_c30 * dVar150) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_d40[0x12] * dVar144) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
          dVar81 = (double)((ulonglong)(dStack_ba8 * dVar161) & _UNK_15061cc88) +
                   (double)((ulonglong)(dStack_c28 * dVar155) & _UNK_15061cc88) +
                   (double)((ulonglong)(dStack_ca8 * dVar149) & _UNK_15061cc88);
          dVar133 = (double)((ulonglong)(dVar133 * local_ba0) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(dVar151 * local_c20) &
                            __xmm_7fffffffffffffff7fffffffffffffff) +
                    (double)((ulonglong)(dVar95 * local_ca0) &
                            __xmm_7fffffffffffffff7fffffffffffffff);
          dVar139 = (double)((ulonglong)(dVar139 * dStack_b98) & _UNK_15061cc88) +
                    (double)((ulonglong)(dVar156 * dStack_c18) & _UNK_15061cc88) +
                    (double)((ulonglong)(dVar102 * dStack_c98) & _UNK_15061cc88);
          dVar95 = (double)((ulonglong)(dVar157 * local_b90) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(dVar150 * local_c10) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(dVar144 * local_c90) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
          dVar102 = (double)((ulonglong)(dVar161 * dStack_b88) & _UNK_15061cc88) +
                    (double)((ulonglong)(dVar155 * dStack_c08) & _UNK_15061cc88) +
                    (double)((ulonglong)(dVar149 * dStack_c88) & _UNK_15061cc88);
          auVar100._0_8_ = dVar120 - dVar96;
          auVar100._8_8_ = dVar125 - dVar103;
          auVar106._0_8_ = dVar82 - dVar104;
          auVar106._8_8_ = dVar94 - dVar110;
          local_11c0._8_8_ = dVar143 - dVar124;
          local_11c0._0_8_ = dVar132 - dVar119;
          local_11d0._8_8_ = dVar103 + dVar125;
          local_11d0._0_8_ = dVar96 + dVar120;
          auVar105._0_8_ = dVar127 - dVar69;
          auVar105._8_8_ = dVar140 - dVar81;
          local_11f0._8_8_ = dVar110 + dVar94;
          local_11f0._0_8_ = dVar104 + dVar82;
          auVar99._0_8_ = dVar158 - dVar133;
          auVar99._8_8_ = dVar162 - dVar139;
          local_11e0._8_8_ = dVar124 + dVar143;
          local_11e0._0_8_ = dVar119 + dVar132;
          local_1190._8_8_ = dVar80 - dVar102;
          local_1190._0_8_ = dVar68 - dVar95;
          local_11a0._8_8_ = dVar81 + dVar140;
          local_11a0._0_8_ = dVar69 + dVar127;
          stack0xffffffffffffef78 = (longlong)(dVar139 + dVar162);
          local_1090._0_8_ = dVar133 + dVar158;
          local_1120._8_8_ = dVar102 + dVar80;
          local_1120._0_8_ = dVar95 + dVar68;
          local_1060[0] = auVar97[0];
          local_1060[1] = auVar97[1];
          local_1060[2] = auVar97[2];
          local_1060[3] = auVar97[3];
          local_1060[4] = auVar97[4];
          local_1060[5] = auVar97[5];
          local_1060[6] = auVar97[6];
          local_1060[7] = auVar97[7];
          local_1060[8] = auVar97[8];
          local_1060[9] = auVar97[9];
          local_1060[10] = auVar97[10];
          local_1060[0xb] = auVar97[0xb];
          local_1060[0xc] = auVar97[0xc];
          local_1060[0xd] = auVar97[0xd];
          local_1060[0xe] = auVar97[0xe];
          local_1060[0xf] = auVar97[0xf];
          auVar107[0] = -(local_1060[0] == '\0');
          auVar107[1] = -(local_1060[1] == '\0');
          auVar107[2] = -(local_1060[2] == '\0');
          auVar107[3] = -(local_1060[3] == '\0');
          auVar107[4] = -(local_1060[4] == '\0');
          auVar107[5] = -(local_1060[5] == '\0');
          auVar107[6] = -(local_1060[6] == '\0');
          auVar107[7] = -(local_1060[7] == '\0');
          auVar107[8] = -(local_1060[8] == '\0');
          auVar107[9] = -(local_1060[9] == '\0');
          auVar107[10] = -(local_1060[10] == '\0');
          auVar107[0xb] = -(local_1060[0xb] == '\0');
          auVar107[0xc] = -(local_1060[0xc] == '\0');
          auVar107[0xd] = -(local_1060[0xd] == '\0');
          auVar107[0xe] = -(local_1060[0xe] == '\0');
          auVar107[0xf] = -(local_1060[0xf] == '\0');
          auVar89 = pmovsxbd(auVar107 ^ ___xmm_ffffffffffffffffffffffffffffffff,
                             auVar107 ^ ___xmm_ffffffffffffffffffffffffffffffff);
          iVar46 = movmskps((int)param_4,unaff_XMM6 & auVar89);
          if (iVar46 == 0) {
            uVar49 = 0x260;
LAB_140a84fb3:
            auVar89 = pmovsxbd(auVar89,auVar107);
            iVar51 = movmskps(uVar49,unaff_XMM6 & auVar89);
            if ((iVar51 != 0) && ((char)iVar51 != '\0')) {
              auVar89 = pmovzxbd(auVar89,auVar107);
              auVar108._0_4_ = auVar89._0_4_ << 0x1f;
              auVar108._4_4_ = auVar89._4_4_ << 0x1f;
              auVar108._8_4_ = auVar89._8_4_ << 0x1f;
              auVar108._12_4_ = auVar89._12_4_ << 0x1f;
              uVar48 = movmskps(iVar46,auVar108);
              if ((uVar48 & 1) == 0) {
                auVar129 = local_db0;
                auVar87 = local_df0;
                auVar88 = local_f10;
                auVar98 = local_e00;
                auVar107 = local_e30;
                auVar89 = local_f90;
                if ((uVar48 & 2) == 0) goto LAB_140a857b6;
LAB_140a8503e:
                local_f00._0_8_ = local_f00._0_8_ & 0xffffffffffff00ff | 0x100;
              }
              else {
                local_f00._0_8_ = local_f00._0_8_ & 0xffffffffffffff00 | 1;
                auVar129 = local_11c0;
                auVar87 = local_11d0;
                auVar88 = _local_1090;
                auVar98 = auVar99;
                auVar107 = local_11e0;
                auVar89 = auVar100;
                if ((uVar48 & 2) != 0) goto LAB_140a8503e;
LAB_140a857b6:
                auVar100 = blendpd(local_f90,auVar89,1);
                local_11c0 = blendpd(local_db0,auVar129,1);
                auVar99 = blendpd(local_e00,auVar98,1);
                local_11d0 = blendpd(local_df0,auVar87,1);
                local_11e0 = blendpd(local_e30,auVar107,1);
                _local_1090 = blendpd(local_f10,auVar88,1);
              }
              bVar67 = (uVar48 & 4) != 0;
              auVar108 = local_1010;
              if (bVar67) {
                auVar108 = auVar106;
              }
              cVar57 = (char)((char)uVar48 << 4) >> 4;
              auVar113 = local_1050;
              auVar112 = local_10b0;
              auVar114 = local_1100;
              auVar115 = local_fe0;
              auVar121 = local_10a0;
              if (bVar67) {
                local_f00._0_8_ = local_f00._0_8_ & 0xffffffffff00ffff | 0x10000;
                auVar113 = auVar105;
                auVar112 = local_11f0;
                auVar114 = local_11a0;
                auVar115 = local_1190;
                auVar121 = local_1120;
              }
              if (-1 < cVar57) {
                auVar106 = blendpd(local_1010,auVar108,1);
                auVar105 = blendpd(local_1050,auVar113,1);
                local_1190 = blendpd(local_fe0,auVar115,1);
                local_11f0 = blendpd(local_10b0,auVar112,1);
                local_11a0 = blendpd(local_1100,auVar114,1);
                local_1120 = blendpd(local_10a0,auVar121,1);
              }
              if (cVar57 < '\0') {
                local_f00._0_8_ = local_f00._0_8_ & 0xffffffff00ffffff | 0x1000000;
              }
              local_f90 = blendpd(auVar100,auVar89,1);
              local_1010 = blendpd(auVar106,auVar108,1);
              local_db0 = blendpd(local_11c0,auVar129,1);
              local_1050 = blendpd(auVar105,auVar113,1);
              local_e00 = blendpd(auVar99,auVar98,1);
              local_fe0 = blendpd(local_1190,auVar115,1);
              local_df0 = blendpd(local_11d0,auVar87,1);
              local_10b0 = blendpd(local_11f0,auVar112,1);
              local_e30 = blendpd(local_11e0,auVar107,1);
              local_1100 = blendpd(local_11a0,auVar114,1);
              local_f10 = blendpd(_local_1090,auVar88,1);
              local_10a0 = blendpd(local_1120,auVar121,1);
            }
          }
          else {
            uVar48 = movmskps(0x260,auVar89);
            auVar89 = minpd(local_1110,auVar100);
            if ((uVar48 & 1) == 0) {
              auVar129 = local_f90;
              if ((uVar48 & 2) == 0) goto LAB_140a85608;
LAB_140a84be9:
              auVar87 = minpd(auVar84,auVar106);
            }
            else {
              auVar129 = auVar89;
              if ((uVar48 & 2) != 0) goto LAB_140a84be9;
LAB_140a85608:
              auVar89 = blendpd(local_f90,auVar129,1);
              auVar87 = minpd(auVar84,auVar106);
            }
            if ((uVar48 & 4) != 0) {
              local_1010 = blendpd(local_1010,auVar87,1);
            }
            bVar43 = (char)((char)uVar48 << 4) >> 4;
            if ((char)bVar43 < '\0') {
              local_1010 = blendpd(local_1010,auVar87,2);
            }
            auVar87 = minpd(local_10f0,local_11c0);
            if ((bVar43 & 1) == 0) {
              local_1140 = local_db0;
              if ((bVar43 & 2) == 0) goto LAB_140a85648;
LAB_140a84c63:
              auVar88 = minpd(local_1030,auVar105);
            }
            else {
              local_1140 = auVar87;
              if ((bVar43 & 2) != 0) goto LAB_140a84c63;
LAB_140a85648:
              auVar87 = blendpd(local_db0,local_1140,1);
              auVar88 = minpd(local_1030,auVar105);
            }
            if ((bVar43 & 4) != 0) {
              local_1050 = blendpd(local_1050,auVar88,1);
            }
            if ((char)bVar43 < '\0') {
              local_1050 = blendpd(local_1050,auVar88,2);
            }
            auVar88 = minpd(local_10e0,auVar99);
            if ((bVar43 & 1) == 0) {
              auVar98 = local_e00;
              if ((bVar43 & 2) == 0) goto LAB_140a8567c;
LAB_140a84cce:
              auVar108 = minpd(local_1020,local_1190);
            }
            else {
              auVar98 = auVar88;
              if ((bVar43 & 2) != 0) goto LAB_140a84cce;
LAB_140a8567c:
              auVar88 = blendpd(local_e00,auVar98,1);
              auVar108 = minpd(local_1020,local_1190);
            }
            if ((bVar43 & 4) != 0) {
              local_fe0 = blendpd(local_fe0,auVar108,1);
            }
            if ((char)bVar43 < '\0') {
              local_fe0 = blendpd(local_fe0,auVar108,2);
            }
            auVar108 = maxpd(local_10d0,local_11d0);
            if ((bVar43 & 1) == 0) {
              auVar113 = local_df0;
              if ((bVar43 & 2) == 0) goto LAB_140a856b1;
LAB_140a84d3b:
              auVar112 = maxpd(local_fd0,local_11f0);
            }
            else {
              auVar113 = auVar108;
              if ((bVar43 & 2) != 0) goto LAB_140a84d3b;
LAB_140a856b1:
              auVar108 = blendpd(local_df0,auVar113,1);
              auVar112 = maxpd(local_fd0,local_11f0);
            }
            if ((bVar43 & 4) != 0) {
              local_10b0 = blendpd(local_10b0,auVar112,1);
            }
            if ((char)bVar43 < '\0') {
              local_10b0 = blendpd(local_10b0,auVar112,2);
            }
            auVar112 = maxpd(local_10c0,local_11e0);
            if ((bVar43 & 1) == 0) {
              auVar114 = local_e30;
              if ((bVar43 & 2) == 0) goto LAB_140a856e5;
LAB_140a84da8:
              auVar115 = maxpd(local_1000,local_11a0);
            }
            else {
              auVar114 = auVar112;
              if ((bVar43 & 2) != 0) goto LAB_140a84da8;
LAB_140a856e5:
              auVar112 = blendpd(local_e30,auVar114,1);
              auVar115 = maxpd(local_1000,local_11a0);
            }
            if ((bVar43 & 4) != 0) {
              local_1100 = blendpd(local_1100,auVar115,1);
            }
            if ((char)bVar43 < '\0') {
              local_1100 = blendpd(local_1100,auVar115,2);
            }
            auVar115 = maxpd(auVar71,_local_1090);
            if ((bVar43 & 1) == 0) {
              auVar121 = local_f10;
              if ((bVar43 & 2) == 0) goto LAB_140a85719;
LAB_140a84e1d:
              auVar134 = maxpd(local_ff0,local_1120);
            }
            else {
              auVar121 = auVar115;
              if ((bVar43 & 2) != 0) goto LAB_140a84e1d;
LAB_140a85719:
              auVar115 = blendpd(local_f10,auVar121,1);
              auVar134 = maxpd(local_ff0,local_1120);
            }
            if ((bVar43 & 4) != 0) {
              local_10a0 = blendpd(local_10a0,auVar134,1);
            }
            if ((char)bVar43 < '\0') {
              local_10a0 = blendpd(local_10a0,auVar134,2);
            }
            auVar134 = local_f00;
            if ((bVar43 & 1) != 0) {
              auVar134 = auVar97;
            }
            auVar135 = pblendvb(auVar134,local_f00,___xmm_000000000000000000000000ffffff00);
            auVar134 = auVar135;
            if ((bVar43 & 2) != 0) {
              auVar134 = auVar97;
            }
            auVar135 = pblendvb(auVar134,auVar135,___xmm_000000000000000000000000ffff00ff);
            auVar134 = auVar135;
            if ((bVar43 & 4) != 0) {
              auVar134 = auVar97;
            }
            auVar135 = pblendvb(auVar134,auVar135,___xmm_000000000000000000000000ff00ffff);
            auVar134 = auVar97;
            if (-1 < (char)bVar43) {
              auVar134 = auVar135;
            }
            local_f90 = blendpd(auVar89,auVar129,1);
            local_db0 = blendpd(auVar87,local_1140,1);
            local_e00 = blendpd(auVar88,auVar98,1);
            local_df0 = blendpd(auVar108,auVar113,1);
            local_e30 = blendpd(auVar112,auVar114,1);
            local_f10 = blendpd(auVar115,auVar121,1);
            local_f00 = pblendvb(auVar134,auVar135,___xmm_00000000000000000000000000ffffff);
            uVar53 = uVar50 & 0xffffffffffffff0f;
            uVar49 = (undefined4)uVar53;
            auVar89 = ___xmm_00000000000000000000000000ffffff;
            if ((char)uVar53 != (char)iVar46) goto LAB_140a84fb3;
          }
          uVar50 = uVar50 & 0xff;
          bVar67 = (bVar61 & 1) != 0;
          auVar89 = local_1110;
          if (bVar67) {
            auVar89 = local_f90;
          }
          local_11f0 = local_10c0;
          auVar129 = local_10d0;
          auVar87 = auVar97;
          auVar88 = local_10f0;
          auVar98 = local_10e0;
          local_11d0 = auVar71;
          if (bVar67) {
            auVar129 = local_df0;
            auVar87 = local_f00;
            auVar88 = local_db0;
            auVar98 = local_e00;
            local_11f0 = local_e30;
            local_11d0 = local_f10;
          }
          bVar67 = (bVar61 & 2) == 0;
          auVar99 = local_f10;
          auVar100 = local_f90;
          auVar105 = local_db0;
          auVar106 = local_e00;
          auVar107 = local_df0;
          auVar108 = local_e30;
          if (bVar67) {
            auVar100 = blendpd(local_1110,auVar89,1);
            auVar105 = blendpd(local_10f0,auVar88,1);
            auVar106 = blendpd(local_10e0,auVar98,1);
            auVar107 = blendpd(local_10d0,auVar129,1);
            auVar108 = blendpd(local_10c0,local_11f0,1);
            auVar99 = blendpd(auVar71,local_11d0,1);
          }
          local_10c0 = auVar108;
          local_10d0 = auVar107;
          local_10e0 = auVar106;
          local_10f0 = auVar105;
          local_1110 = auVar100;
          auVar97 = pblendvb(auVar87,auVar97,___xmm_000000000000000000000000ffffff00);
          auVar71 = auVar97;
          if (!bVar67) {
            auVar71 = local_f00;
          }
          if ((bVar61 & 4) == 0) {
            auVar106 = pblendvb(auVar71,auVar97,___xmm_000000000000000000000000ffff00ff);
            local_11a0 = local_1000;
            auVar97 = auVar106;
            auVar71 = local_1020;
            auVar87 = local_1030;
            auVar100 = local_fd0;
            auVar105 = local_ff0;
            unaff_XMM6 = auVar84;
            if (-1 < (char)bVar61) goto LAB_140a8552c;
LAB_140a8545c:
            auVar84 = local_1010;
            if (-1 < (char)bVar61) goto LAB_140a85545;
LAB_140a8546b:
            auVar107 = local_1050;
            if (-1 < (char)bVar61) goto LAB_140a85565;
LAB_140a8547b:
            auVar108 = local_fe0;
            if (-1 < (char)bVar61) goto LAB_140a85588;
LAB_140a8548d:
            auVar113 = local_10b0;
            if (-1 < (char)bVar61) goto LAB_140a855a6;
LAB_140a8549c:
            auVar112 = local_1100;
            if (-1 < (char)bVar61) goto LAB_140a855c5;
LAB_140a854aa:
            auVar97 = pblendvb(auVar97,auVar106,___xmm_000000000000000000000000ff00ffff);
            auVar114 = local_10a0;
          }
          else {
            local_11a0 = local_1100;
            auVar106 = pblendvb(auVar71,auVar97,___xmm_000000000000000000000000ffff00ff);
            local_11a0 = local_1100;
            auVar97 = local_f00;
            auVar71 = local_fe0;
            auVar87 = local_1050;
            auVar100 = local_10b0;
            auVar105 = local_10a0;
            unaff_XMM6 = local_1010;
            if ((char)bVar61 < '\0') goto LAB_140a8545c;
LAB_140a8552c:
            auVar84 = pblendw(auVar84,unaff_XMM6,0xf);
            if ((char)bVar61 < '\0') goto LAB_140a8546b;
LAB_140a85545:
            auVar107 = blendps(local_1030,auVar87,3);
            if ((char)bVar61 < '\0') goto LAB_140a8547b;
LAB_140a85565:
            auVar108 = blendpd(local_1020,auVar71,1);
            if ((char)bVar61 < '\0') goto LAB_140a8548d;
LAB_140a85588:
            auVar113 = blendps(local_fd0,auVar100,3);
            if ((char)bVar61 < '\0') goto LAB_140a8549c;
LAB_140a855a6:
            auVar112 = pblendw(local_1000,local_11a0,0xf);
            if ((char)bVar61 < '\0') goto LAB_140a854aa;
LAB_140a855c5:
            auVar114 = blendps(local_ff0,auVar105,3);
            auVar97 = pblendvb(auVar97,auVar106,___xmm_000000000000000000000000ff00ffff);
          }
          auVar106 = local_f00;
          if (-1 < (char)bVar61) {
            auVar106 = auVar97;
          }
          auVar97 = pblendvb(auVar106,auVar97,___xmm_00000000000000000000000000ffffff);
          local_1110 = blendpd(local_1110,auVar89,1);
          auVar84 = pblendw(auVar84,unaff_XMM6,0xf);
          local_10f0 = blendps(local_10f0,auVar88,3);
          local_1030 = blendps(auVar107,auVar87,3);
          local_10e0 = blendps(local_10e0,auVar98,3);
          local_1020 = blendpd(auVar108,auVar71,1);
          local_10d0 = blendps(local_10d0,auVar129,3);
          local_fd0 = blendps(auVar113,auVar100,3);
          local_10c0 = pblendw(local_10c0,local_11f0,0xf);
          local_1000 = pblendw(auVar112,local_11a0,0xf);
          auVar71 = blendps(auVar99,local_11d0,3);
          in_XMM5 = blendps(auVar114,auVar105,3);
          local_ff0 = in_XMM5;
        }
        uVar45 = uVar45 + 4;
      } while ((int)uVar45 < (int)uVar59);
    }
    if ((int)param_6 <= (int)uVar45) goto LAB_140a89c48;
    auVar113._4_4_ = uVar45 * 7;
    auVar113._0_4_ = uVar45 * 7;
    auVar113._8_4_ = uVar45 * 7;
    auVar113._12_4_ = uVar45 * 7;
    auVar112._0_4_ =
         -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar45) < (int)param_6);
    auVar112._4_4_ =
         -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar45) < (int)param_6);
    auVar112._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar45) < (int)param_6);
    auVar112._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar45) < (int)param_6);
    auVar113 = auVar113 & auVar112;
    lVar60 = param_3 + (longlong)auVar113._0_4_ * 8;
    uVar50 = param_3 + (longlong)auVar113._4_4_ * 8;
    lVar64 = param_3 + (longlong)auVar113._8_4_ * 8;
    lVar65 = param_3 + (longlong)auVar113._12_4_ * 8;
    auVar89 = ___xmm_000000d8000000a00000006800000030 & auVar112;
    bVar61 = *(byte *)((ulonglong)auVar89._0_4_ + lVar60);
    uVar59 = movmskps((uint)bVar61,auVar112);
    if ((~(byte)uVar59 & 9) == 0) {
      unaff_XMM6 = *(undefined1 (*) [16])((longlong)param_1 + (longlong)(int)(uVar45 << 2));
    }
    else {
      puVar16 = (uint *)((longlong)param_1 + (longlong)(int)(uVar45 << 2));
      if ((uVar59 & 1) != 0) {
        unaff_XMM6 = ZEXT416(*puVar16);
      }
      if ((uVar59 & 2) != 0) {
        unaff_XMM6._0_8_ = unaff_XMM6._0_8_ & 0xffffffff | (ulonglong)puVar16[1] << 0x20;
      }
      if ((uVar59 & 4) != 0) {
        unaff_XMM6._8_8_ = unaff_XMM6._8_8_ & 0xffffffff00000000 | (ulonglong)puVar16[2];
      }
      param_1 = (uint *)(ulonglong)uVar59;
      if ((uVar59 & 8) != 0) {
        unaff_XMM6._8_8_ = unaff_XMM6._8_8_ & 0xffffffff | (ulonglong)puVar16[3] << 0x20;
        param_1 = puVar16;
      }
    }
    auVar115._8_4_ = 0xffffffff;
    auVar115._0_8_ = 0xffffffffffffffff;
    auVar115._12_4_ = 0xffffffff;
    auVar134._0_4_ = -(uint)(unaff_XMM6._0_4_ == -1);
    auVar134._4_4_ = -(uint)(unaff_XMM6._4_4_ == -1);
    auVar134._8_4_ = -(uint)(unaff_XMM6._8_4_ == -1);
    auVar134._12_4_ = -(uint)(unaff_XMM6._12_4_ == -1);
    auVar114[0] = -(bVar61 == 0);
    auVar114[1] = -(*(char *)(auVar89._4_4_ + uVar50) == '\0');
    auVar114[2] = -(*(char *)((ulonglong)auVar89._8_4_ + lVar64) == '\0');
    auVar114[3] = -(*(char *)((ulonglong)auVar89._12_4_ + lVar65) == '\0');
    auVar114[4] = 0xff;
    auVar114[5] = 0xff;
    auVar114[6] = 0xff;
    auVar114[7] = 0xff;
    auVar114[8] = 0xff;
    auVar114[9] = 0xff;
    auVar114[10] = 0xff;
    auVar114[0xb] = 0xff;
    auVar114[0xc] = 0xff;
    auVar114[0xd] = 0xff;
    auVar114[0xe] = 0xff;
    auVar114[0xf] = 0xff;
    auVar89 = pmovsxbd(auVar114 ^ auVar115,auVar114 ^ auVar115);
    auVar89 = ~auVar134 & auVar89 & auVar112;
    iVar46 = movmskps((int)param_1,auVar89);
    if (iVar46 == 0) goto LAB_140a89c48;
    auVar142._0_4_ = ___xmm_000000a8000000700000003800000000 & auVar112._0_4_;
    auVar142._4_4_ = _UNK_151287264 & auVar112._4_4_;
    auVar142._8_4_ = _UNK_151287268 & auVar112._8_4_;
    auVar142._12_4_ = _UNK_15128726c & auVar112._12_4_;
    auVar98 = ___xmm_000000b0000000780000004000000008 & auVar112;
    auVar88 = ___xmm_000000b8000000800000004800000010 & auVar112;
    auVar87 = ___xmm_000000c0000000880000005000000018 & auVar112;
    auVar129 = ___xmm_000000c8000000900000005800000020 & auVar112;
    auVar112 = auVar112 & ___xmm_000000d0000000980000006000000028;
    lVar66 = extractps(auVar142,2);
    dVar69 = *(double *)(param_3 + (longlong)auVar113._0_4_ * 8);
    dVar81 = *(double *)(lVar66 + lVar64);
    lVar55 = extractps(auVar142,1);
    dVar82 = *(double *)((ulonglong)auVar98._8_4_ + lVar64);
    lVar66 = extractps(auVar142,3);
    dVar94 = *(double *)((ulonglong)auVar88._8_4_ + lVar64);
    dVar104 = *(double *)((ulonglong)auVar87._8_4_ + lVar64);
    dVar110 = *(double *)((ulonglong)auVar129._8_4_ + lVar64);
    dVar96 = *(double *)((ulonglong)auVar112._8_4_ + lVar64);
    dVar103 = *(double *)((ulonglong)auVar98._0_4_ + lVar60);
    dVar120 = *(double *)((ulonglong)auVar88._0_4_ + lVar60);
    dVar125 = *(double *)((ulonglong)auVar87._0_4_ + lVar60);
    dVar133 = *(double *)((ulonglong)auVar129._0_4_ + lVar60);
    dVar139 = *(double *)((ulonglong)auVar112._0_4_ + lVar60);
    dVar95 = *(double *)(lVar55 + uVar50);
    dVar102 = *(double *)(lVar66 + lVar65);
    dVar127 = *(double *)((ulonglong)auVar98._12_4_ + lVar65);
    dVar132 = *(double *)(auVar98._4_4_ + uVar50);
    dVar140 = *(double *)((ulonglong)auVar88._12_4_ + lVar65);
    dVar143 = *(double *)(auVar88._4_4_ + uVar50);
    dVar144 = *(double *)((ulonglong)auVar87._12_4_ + lVar65);
    dVar149 = *(double *)(auVar87._4_4_ + uVar50);
    dVar151 = *(double *)((ulonglong)auVar129._12_4_ + lVar65);
    dVar156 = *(double *)(auVar129._4_4_ + uVar50);
    dVar158 = *(double *)((ulonglong)auVar112._12_4_ + lVar65);
    dVar162 = *(double *)(auVar112._4_4_ + uVar50);
    auVar141._0_4_ = uVar45 << 7;
    auVar141._4_4_ = uVar45 << 7;
    auVar141._8_4_ = uVar45 << 7;
    auVar141._12_4_ = uVar45 << 7;
    auVar141 = auVar141 & auVar89;
    auVar135._0_4_ = ___xmm_00000180000001000000008000000000 & auVar89._0_4_;
    auVar135._4_4_ = _UNK_151287ed4 & auVar89._4_4_;
    auVar135._8_4_ = _UNK_151287ed8 & auVar89._8_4_;
    auVar135._12_4_ = _UNK_151287edc & auVar89._12_4_;
    lVar60 = param_2 + auVar141._0_4_;
    lVar63 = auVar141._4_4_ + param_2;
    lVar64 = extractps(auVar135,1);
    lVar58 = auVar141._8_4_ + param_2;
    lVar65 = extractps(auVar135,2);
    lVar55 = extractps(auVar135,3);
    lVar66 = auVar141._12_4_ + param_2;
    auVar129 = ___xmm_00000188000001080000008800000008 & auVar89;
    auVar87 = ___xmm_00000190000001100000009000000010 & auVar89;
    auVar88 = ___xmm_00000198000001180000009800000018 & auVar89;
    auVar98 = ___xmm_000001a000000120000000a000000020 & auVar89;
    auVar99 = ___xmm_000001a800000128000000a800000028 & auVar89;
    auVar100 = ___xmm_000001b000000130000000b000000030 & auVar89;
    auVar105 = ___xmm_000001b800000138000000b800000038 & auVar89;
    auVar106 = ___xmm_000001c000000140000000c000000040 & auVar89;
    auVar107 = ___xmm_000001c800000148000000c800000048 & auVar89;
    auVar108 = ___xmm_000001d000000150000000d000000050 & auVar89;
    auVar113 = ___xmm_000001d800000158000000d800000058 & auVar89;
    auVar112 = ___xmm_000001e000000160000000e000000060 & auVar89;
    auVar114 = ___xmm_000001e800000168000000e800000068 & auVar89;
    auVar115 = ___xmm_000001f000000170000000f000000070 & auVar89;
    auVar121 = ___xmm_000001f800000178000000f800000078 & auVar89;
    uVar59 = auVar121._12_4_;
    local_560[0xe] = (double)*(undefined8 *)(lVar65 + lVar58);
    local_560[0xf] = (double)*(undefined8 *)(lVar55 + lVar66);
    local_560[0xc] = (double)*(undefined8 *)(param_2 + auVar141._0_4_);
    local_560[0xd] = (double)*(undefined8 *)(lVar64 + lVar63);
    local_560[0x12] = (double)*(undefined8 *)((ulonglong)auVar129._8_4_ + lVar58);
    uStack_4c8 = *(undefined8 *)((ulonglong)auVar129._12_4_ + lVar66);
    local_560[0x10] = (double)*(undefined8 *)((ulonglong)auVar129._0_4_ + lVar60);
    local_560[0x11] = (double)*(undefined8 *)((ulonglong)auVar129._4_4_ + lVar63);
    local_4b0 = *(undefined8 *)((ulonglong)auVar87._8_4_ + lVar58);
    uStack_4a8 = *(undefined8 *)((ulonglong)auVar87._12_4_ + lVar66);
    local_4c0 = *(undefined8 *)((ulonglong)auVar87._0_4_ + lVar60);
    uStack_4b8 = *(undefined8 *)((ulonglong)auVar87._4_4_ + lVar63);
    local_490 = *(undefined8 *)((ulonglong)auVar88._8_4_ + lVar58);
    uStack_488 = *(undefined8 *)((ulonglong)auVar88._12_4_ + lVar66);
    local_4a0 = *(undefined8 *)((ulonglong)auVar88._0_4_ + lVar60);
    uStack_498 = *(undefined8 *)((ulonglong)auVar88._4_4_ + lVar63);
    local_470 = *(undefined8 *)((ulonglong)auVar98._8_4_ + lVar58);
    uStack_468 = *(undefined8 *)((ulonglong)auVar98._12_4_ + lVar66);
    local_480 = *(undefined8 *)((ulonglong)auVar98._0_4_ + lVar60);
    uStack_478 = *(undefined8 *)((ulonglong)auVar98._4_4_ + lVar63);
    local_450 = *(undefined8 *)((ulonglong)auVar99._8_4_ + lVar58);
    uStack_448 = *(undefined8 *)((ulonglong)auVar99._12_4_ + lVar66);
    local_460 = *(undefined8 *)((ulonglong)auVar99._0_4_ + lVar60);
    uStack_458 = *(undefined8 *)((ulonglong)auVar99._4_4_ + lVar63);
    local_430 = *(undefined8 *)((ulonglong)auVar100._8_4_ + lVar58);
    uStack_428 = *(undefined8 *)((ulonglong)auVar100._12_4_ + lVar66);
    local_440 = *(undefined8 *)((ulonglong)auVar100._0_4_ + lVar60);
    uStack_438 = *(undefined8 *)((ulonglong)auVar100._4_4_ + lVar63);
    local_410 = *(undefined8 *)((ulonglong)auVar105._8_4_ + lVar58);
    uStack_408 = *(undefined8 *)((ulonglong)auVar105._12_4_ + lVar66);
    local_420 = *(undefined8 *)((ulonglong)auVar105._0_4_ + lVar60);
    uStack_418 = *(undefined8 *)((ulonglong)auVar105._4_4_ + lVar63);
    local_3f0 = *(undefined8 *)((ulonglong)auVar106._8_4_ + lVar58);
    uStack_3e8 = *(undefined8 *)((ulonglong)auVar106._12_4_ + lVar66);
    local_400 = *(undefined8 *)((ulonglong)auVar106._0_4_ + lVar60);
    uStack_3f8 = *(undefined8 *)((ulonglong)auVar106._4_4_ + lVar63);
    local_3d0 = *(undefined8 *)((ulonglong)auVar107._8_4_ + lVar58);
    uStack_3c8 = *(undefined8 *)((ulonglong)auVar107._12_4_ + lVar66);
    local_3e0 = *(undefined8 *)((ulonglong)auVar107._0_4_ + lVar60);
    uStack_3d8 = *(undefined8 *)((ulonglong)auVar107._4_4_ + lVar63);
    local_3b0 = *(undefined8 *)((ulonglong)auVar108._8_4_ + lVar58);
    uStack_3a8 = *(undefined8 *)((ulonglong)auVar108._12_4_ + lVar66);
    local_3c0 = *(undefined8 *)((ulonglong)auVar108._0_4_ + lVar60);
    uStack_3b8 = *(undefined8 *)((ulonglong)auVar108._4_4_ + lVar63);
    local_390 = *(undefined8 *)((ulonglong)auVar113._8_4_ + lVar58);
    uStack_388 = *(undefined8 *)((ulonglong)auVar113._12_4_ + lVar66);
    local_3a0 = *(undefined8 *)((ulonglong)auVar113._0_4_ + lVar60);
    uStack_398 = *(undefined8 *)((ulonglong)auVar113._4_4_ + lVar63);
    local_370 = *(undefined8 *)((ulonglong)auVar112._8_4_ + lVar58);
    uStack_368 = *(undefined8 *)((ulonglong)auVar112._12_4_ + lVar66);
    local_380 = *(undefined8 *)((ulonglong)auVar112._0_4_ + lVar60);
    uStack_378 = *(undefined8 *)((ulonglong)auVar112._4_4_ + lVar63);
    local_360[2] = (double)*(undefined8 *)((ulonglong)auVar114._8_4_ + lVar58);
    local_360[3] = (double)*(undefined8 *)((ulonglong)auVar114._12_4_ + lVar66);
    local_360[0] = *(double *)((ulonglong)auVar114._0_4_ + lVar60);
    local_360[1] = (double)*(undefined8 *)((ulonglong)auVar114._4_4_ + lVar63);
    bVar61 = (char)((char)iVar46 << 4) >> 4;
    local_360[6] = (double)*(undefined8 *)((ulonglong)auVar115._8_4_ + lVar58);
    local_360[7] = (double)*(undefined8 *)((ulonglong)auVar115._12_4_ + lVar66);
    local_360[4] = (double)*(undefined8 *)((ulonglong)auVar115._0_4_ + lVar60);
    local_360[5] = (double)*(undefined8 *)((ulonglong)auVar115._4_4_ + lVar63);
    local_360[10] = (double)*(undefined8 *)((ulonglong)auVar121._8_4_ + lVar58);
    local_360[0xb] = (double)*(undefined8 *)((ulonglong)uVar59 + lVar66);
    local_360[8] = (double)*(undefined8 *)((ulonglong)auVar121._0_4_ + lVar60);
    local_360[9] = (double)*(undefined8 *)((ulonglong)auVar121._4_4_ + lVar63);
    dVar80 = *param_4;
    dVar68 = *param_4;
    dVar111 = param_4[4];
    dVar118 = param_4[4];
    dVar119 = param_4[8];
    dVar124 = param_4[8];
    dVar126 = param_4[0xc];
    dVar131 = param_4[0xc];
    lVar60 = 0x60;
    dVar155 = param_4[1];
    dVar150 = param_4[1];
    dVar157 = param_4[5];
    dVar161 = param_4[5];
    dVar174 = param_4[9];
    dVar163 = param_4[9];
    dVar178 = param_4[0xd];
    dVar181 = param_4[0xd];
    dVar182 = param_4[2];
    dVar186 = param_4[2];
    dVar3 = param_4[6];
    dVar2 = param_4[6];
    dVar5 = param_4[10];
    dVar4 = param_4[10];
    dVar6 = param_4[0xe];
    dVar7 = param_4[0xe];
    dVar8 = param_4[3];
    dVar9 = param_4[3];
    dVar10 = param_4[7];
    dVar11 = param_4[7];
    dVar13 = param_4[0xb];
    dVar12 = param_4[0xb];
    dVar15 = param_4[0xf];
    dVar14 = param_4[0xf];
    do {
      dVar27 = *(double *)((longlong)local_560 + lVar60);
      dVar28 = *(double *)((longlong)local_560 + lVar60 + 8);
      dVar29 = *(double *)((longlong)local_560 + lVar60 + 0x10);
      dVar30 = *(double *)((longlong)local_560 + lVar60 + 0x18);
      dVar31 = *(double *)((longlong)local_560 + lVar60 + 0x20);
      dVar32 = *(double *)((longlong)local_560 + lVar60 + 0x28);
      dVar33 = *(double *)((longlong)local_560 + lVar60 + 0x30);
      dVar34 = *(double *)((longlong)local_560 + lVar60 + 0x38);
      dVar35 = *(double *)((longlong)local_560 + lVar60 + 0x50);
      dVar36 = *(double *)((longlong)local_560 + lVar60 + 0x58);
      dVar37 = *(double *)((longlong)local_560 + lVar60 + 0x40);
      dVar38 = *(double *)((longlong)local_560 + lVar60 + 0x48);
      dVar39 = *(double *)((longlong)local_560 + lVar60 + 0x60);
      dVar40 = *(double *)((longlong)local_560 + lVar60 + 0x68);
      dVar41 = *(double *)((longlong)local_560 + lVar60 + 0x70);
      dVar42 = *(double *)((longlong)local_560 + lVar60 + 0x78);
      *(double *)((longlong)local_d40 + lVar60 + 0x10) =
           dVar41 * dVar126 + dVar35 * dVar119 + dVar33 * dVar111 + dVar29 * dVar80 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x18) =
           dVar42 * dVar131 + dVar36 * dVar124 + dVar34 * dVar118 + dVar30 * dVar68 + 0.0;
      *(double *)((longlong)local_d40 + lVar60) =
           dVar39 * dVar126 + dVar37 * dVar119 + dVar31 * dVar111 + dVar27 * dVar80 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 8) =
           dVar40 * dVar131 + dVar38 * dVar124 + dVar32 * dVar118 + dVar28 * dVar68 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x30) =
           dVar41 * dVar178 + dVar35 * dVar174 + dVar33 * dVar157 + dVar29 * dVar155 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x38) =
           dVar42 * dVar181 + dVar36 * dVar163 + dVar34 * dVar161 + dVar30 * dVar150 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x20) =
           dVar39 * dVar178 + dVar37 * dVar174 + dVar31 * dVar157 + dVar27 * dVar155 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x28) =
           dVar40 * dVar181 + dVar38 * dVar163 + dVar32 * dVar161 + dVar28 * dVar150 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x50) =
           dVar41 * dVar6 + dVar35 * dVar5 + dVar33 * dVar3 + dVar29 * dVar182 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x58) =
           dVar42 * dVar7 + dVar36 * dVar4 + dVar34 * dVar2 + dVar30 * dVar186 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x40) =
           dVar39 * dVar6 + dVar37 * dVar5 + dVar31 * dVar3 + dVar27 * dVar182 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x48) =
           dVar40 * dVar7 + dVar38 * dVar4 + dVar32 * dVar2 + dVar28 * dVar186 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x70) =
           dVar41 * dVar15 + dVar35 * dVar13 + dVar33 * dVar10 + dVar29 * dVar8 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x78) =
           dVar42 * dVar14 + dVar36 * dVar12 + dVar34 * dVar11 + dVar30 * dVar9 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x60) =
           dVar39 * dVar15 + dVar37 * dVar13 + dVar31 * dVar10 + dVar27 * dVar8 + 0.0;
      *(double *)((longlong)local_d40 + lVar60 + 0x68) =
           dVar40 * dVar14 + dVar38 * dVar12 + dVar32 * dVar11 + dVar28 * dVar9 + 0.0;
      lVar60 = lVar60 + 0x80;
    } while (lVar60 != 0x260);
    local_1180._8_8_ = dStack_c58;
    local_1180._0_8_ = local_c60;
    dVar111 = (dVar69 + dVar125) * ___xmm_3fe00000000000003fe0000000000000;
    dVar118 = (dVar95 + dVar149) * _UNK_150689678;
    dVar119 = (dVar103 + dVar133) * ___xmm_3fe00000000000003fe0000000000000;
    dVar124 = (dVar132 + dVar156) * _UNK_150689678;
    dVar155 = (dVar81 + dVar104) * ___xmm_3fe00000000000003fe0000000000000;
    dVar157 = (dVar102 + dVar144) * _UNK_150689678;
    dVar68 = (dVar82 + dVar110) * ___xmm_3fe00000000000003fe0000000000000;
    dVar80 = (dVar127 + dVar151) * _UNK_150689678;
    dVar126 = (dVar94 + dVar96) * ___xmm_3fe00000000000003fe0000000000000;
    dVar131 = (dVar140 + dVar158) * _UNK_150689678;
    local_1190._0_8_ = dVar126 * local_bd0 + dVar68 * local_c50 + dVar155 * local_d40[0xe];
    local_1190._8_8_ = dVar131 * dStack_bc8 + dVar80 * dStack_c48 + dVar157 * local_d40[0xf];
    dVar161 = (dVar120 + dVar139) * ___xmm_3fe00000000000003fe0000000000000;
    dVar163 = (dVar143 + dVar162) * _UNK_150689678;
    local_1170._0_8_ = dVar161 * local_bc0 + dVar119 * local_c40 + dVar111 * local_d40[0x10];
    local_1170._8_8_ = dVar163 * dStack_bb8 + dVar124 * dStack_c38 + dVar118 * local_d40[0x11];
    dVar150 = (dVar104 - dVar81) * ___xmm_3fe00000000000003fe0000000000000;
    dVar102 = (dVar144 - dVar102) * _UNK_150689678;
    dVar144 = (dVar125 - dVar69) * ___xmm_3fe00000000000003fe0000000000000;
    dVar149 = (dVar149 - dVar95) * _UNK_150689678;
    dVar95 = (dVar110 - dVar82) * ___xmm_3fe00000000000003fe0000000000000;
    dVar127 = (dVar151 - dVar127) * _UNK_150689678;
    dVar103 = (dVar133 - dVar103) * ___xmm_3fe00000000000003fe0000000000000;
    dVar125 = (dVar156 - dVar132) * _UNK_150689678;
    dVar132 = (dVar139 - dVar120) * ___xmm_3fe00000000000003fe0000000000000;
    dVar143 = (dVar162 - dVar143) * _UNK_150689678;
    dVar133 = (dVar96 - dVar94) * ___xmm_3fe00000000000003fe0000000000000;
    dVar139 = (dVar158 - dVar140) * _UNK_150689678;
    local_11f0._8_8_ = local_d40[0x11] * dVar149;
    local_11f0._0_8_ = local_d40[0x10] * dVar144;
    local_11b0._8_8_ = dStack_ca8 * dVar102;
    local_11b0._0_8_ = local_d40[0x12] * dVar150;
    local_11e0._0_8_ =
         (double)((ulonglong)(local_c50 * dVar95) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)((ulonglong)(local_d40[0xe] * dVar150) & __xmm_7fffffffffffffff7fffffffffffffff);
    local_11e0._8_8_ =
         (double)((ulonglong)(dStack_c48 * dVar127) & _UNK_15061cc88) +
         (double)((ulonglong)(local_d40[0xf] * dVar102) & _UNK_15061cc88);
    local_11c0._0_8_ =
         (double)((ulonglong)(local_c30 * dVar95) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)((ulonglong)(local_d40[0x12] * dVar150) & __xmm_7fffffffffffffff7fffffffffffffff);
    local_11c0._8_8_ =
         (double)((ulonglong)(dStack_c28 * dVar127) & _UNK_15061cc88) +
         (double)((ulonglong)(dStack_ca8 * dVar102) & _UNK_15061cc88);
    auVar176._0_8_ =
         (double)((ulonglong)(dVar103 * local_c20) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)((ulonglong)(dVar144 * local_ca0) & __xmm_7fffffffffffffff7fffffffffffffff);
    auVar176._8_8_ =
         (double)((ulonglong)(dVar125 * dStack_c18) & _UNK_15061cc88) +
         (double)((ulonglong)(dVar149 * dStack_c98) & _UNK_15061cc88);
    dVar104 = (double)local_1190._0_8_ + local_b50;
    dVar110 = (double)local_1190._8_8_ + dStack_b48;
    dVar69 = dVar161 * local_be0 + dVar119 * local_c60 + dVar111 * local_d40[0xc] + local_b60;
    dVar81 = dVar163 * dStack_bd8 + dVar124 * dStack_c58 + dVar118 * local_d40[0xd] + dStack_b58;
    dVar158 = dVar126 * local_bb0 + dVar68 * local_c30 + dVar155 * local_d40[0x12] + local_b30;
    dVar162 = dVar131 * dStack_ba8 + dVar80 * dStack_c28 + dVar157 * dStack_ca8 + dStack_b28;
    local_11d0._0_8_ =
         (double)((ulonglong)(local_be0 * dVar132) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)((ulonglong)(local_c60 * dVar103) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)((ulonglong)(local_d40[0xc] * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff);
    local_11d0._8_8_ =
         (double)((ulonglong)(dStack_bd8 * dVar143) & _UNK_15061cc88) +
         (double)((ulonglong)(dStack_c58 * dVar125) & _UNK_15061cc88) +
         (double)((ulonglong)(local_d40[0xd] * dVar149) & _UNK_15061cc88);
    dVar82 = (double)local_1170._0_8_ + local_b40;
    dVar94 = (double)local_1170._8_8_ + dStack_b38;
    local_1160._0_8_ =
         (double)((ulonglong)(local_bd0 * dVar133) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)local_11e0._0_8_;
    local_1160._8_8_ =
         (double)((ulonglong)(dStack_bc8 * dVar139) & _UNK_15061cc88) + (double)local_11e0._8_8_;
    dVar96 = dVar126 * local_b90 + dVar68 * local_c10 + dVar155 * local_c90 + local_b10;
    dVar120 = dVar131 * dStack_b88 + dVar80 * dStack_c08 + dVar157 * dStack_c88 + dStack_b08;
    dVar144 = (double)((ulonglong)(local_bc0 * dVar132) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(local_c40 * dVar103) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(local_d40[0x10] * dVar144) &
                      __xmm_7fffffffffffffff7fffffffffffffff);
    dVar149 = (double)((ulonglong)(dStack_bb8 * dVar143) & _UNK_15061cc88) +
              (double)((ulonglong)(dStack_c38 * dVar125) & _UNK_15061cc88) +
              (double)((ulonglong)(local_d40[0x11] * dVar149) & _UNK_15061cc88);
    dVar151 = dVar161 * local_ba0 + dVar119 * local_c20 + dVar111 * local_ca0 + local_b20;
    dVar156 = dVar163 * dStack_b98 + dVar124 * dStack_c18 + dVar118 * dStack_c98 + dStack_b18;
    auVar175._0_8_ =
         (double)((ulonglong)(local_bb0 * dVar133) & __xmm_7fffffffffffffff7fffffffffffffff) +
         (double)local_11c0._0_8_;
    auVar175._8_8_ =
         (double)((ulonglong)(dStack_ba8 * dVar139) & _UNK_15061cc88) + (double)local_11c0._8_8_;
    dVar132 = (double)((ulonglong)(dVar132 * local_ba0) & __xmm_7fffffffffffffff7fffffffffffffff) +
              auVar176._0_8_;
    dVar140 = (double)((ulonglong)(dVar143 * dStack_b98) & _UNK_15061cc88) + auVar176._8_8_;
    dVar103 = (double)((ulonglong)(dVar133 * local_b90) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(dVar95 * local_c10) & __xmm_7fffffffffffffff7fffffffffffffff) +
              (double)((ulonglong)(dVar150 * local_c90) & __xmm_7fffffffffffffff7fffffffffffffff);
    dVar125 = (double)((ulonglong)(dVar139 * dStack_b88) & _UNK_15061cc88) +
              (double)((ulonglong)(dVar127 * dStack_c08) & _UNK_15061cc88) +
              (double)((ulonglong)(dVar102 * dStack_c88) & _UNK_15061cc88);
    local_1140._8_8_ = dVar81 - (double)local_11d0._8_8_;
    local_1140._0_8_ = dVar69 - (double)local_11d0._0_8_;
    auVar160._0_8_ = dVar104 - (double)local_1160._0_8_;
    auVar160._8_8_ = dVar110 - (double)local_1160._8_8_;
    auVar146._0_8_ = dVar82 - dVar144;
    auVar146._8_8_ = dVar94 - dVar149;
    local_11d0._0_8_ = (double)local_11d0._0_8_ + dVar69;
    local_11d0._8_8_ = (double)local_11d0._8_8_ + dVar81;
    auVar165._8_8_ = dVar162;
    auVar165._0_8_ = dVar158;
    auVar159._0_8_ = dVar158 - auVar175._0_8_;
    auVar159._8_8_ = dVar162 - auVar175._8_8_;
    local_1160._0_8_ = (double)local_1160._0_8_ + dVar104;
    local_1160._8_8_ = (double)local_1160._8_8_ + dVar110;
    local_1130._8_8_ = dVar156 - dVar140;
    local_1130._0_8_ = dVar151 - dVar132;
    auVar145._0_8_ = dVar144 + dVar82;
    auVar145._8_8_ = dVar149 + dVar94;
    auVar153._0_8_ = dVar96 - dVar103;
    auVar153._8_8_ = dVar120 - dVar125;
    local_11a0._8_8_ = auVar175._8_8_ + dVar162;
    local_11a0._0_8_ = auVar175._0_8_ + dVar158;
    auVar180._0_8_ = dVar132 + dVar151;
    auVar180._8_8_ = dVar140 + dVar156;
    auVar152._0_8_ = dVar103 + dVar96;
    auVar152._8_8_ = dVar125 + dVar120;
    local_1060[0] = auVar97[0];
    local_1060[1] = auVar97[1];
    local_1060[2] = auVar97[2];
    local_1060[3] = auVar97[3];
    local_1060[4] = auVar97[4];
    local_1060[5] = auVar97[5];
    local_1060[6] = auVar97[6];
    local_1060[7] = auVar97[7];
    local_1060[8] = auVar97[8];
    local_1060[9] = auVar97[9];
    local_1060[10] = auVar97[10];
    local_1060[0xb] = auVar97[0xb];
    local_1060[0xc] = auVar97[0xc];
    local_1060[0xd] = auVar97[0xd];
    local_1060[0xe] = auVar97[0xe];
    local_1060[0xf] = auVar97[0xf];
    auVar179[0] = -(local_1060[0] == '\0');
    auVar179[1] = -(local_1060[1] == '\0');
    auVar179[2] = -(local_1060[2] == '\0');
    auVar179[3] = -(local_1060[3] == '\0');
    auVar179[4] = -(local_1060[4] == '\0');
    auVar179[5] = -(local_1060[5] == '\0');
    auVar179[6] = -(local_1060[6] == '\0');
    auVar179[7] = -(local_1060[7] == '\0');
    auVar179[8] = -(local_1060[8] == '\0');
    auVar179[9] = -(local_1060[9] == '\0');
    auVar179[10] = -(local_1060[10] == '\0');
    auVar179[0xb] = -(local_1060[0xb] == '\0');
    auVar179[0xc] = -(local_1060[0xc] == '\0');
    auVar179[0xd] = -(local_1060[0xd] == '\0');
    auVar179[0xe] = -(local_1060[0xe] == '\0');
    auVar179[0xf] = -(local_1060[0xf] == '\0');
    auVar164._8_4_ = 0xffffffff;
    auVar164._0_8_ = 0xffffffffffffffff;
    auVar164._12_4_ = 0xffffffff;
    auVar129 = pmovsxbd(auVar165,auVar164 ^ auVar179);
    auVar99 = auVar89 & auVar129;
    iVar46 = movmskps(0x260,auVar99);
    auVar87 = auVar146;
    auVar88 = auVar160;
    auVar98 = auVar145;
    if (iVar46 == 0) {
LAB_140a89787:
      auVar184._8_8_ = auVar180._8_8_;
      auVar184._0_8_ = auVar180._0_8_;
      auVar99 = pmovsxbd(auVar99,auVar179);
      iVar46 = movmskps(iVar46,auVar89 & auVar99);
      if ((iVar46 != 0) && ((char)iVar46 != '\0')) {
        auVar89 = pmovzxbd(auVar99,auVar179);
        auVar79._0_4_ = auVar89._0_4_ << 0x1f;
        auVar79._4_4_ = auVar89._4_4_ << 0x1f;
        auVar79._8_4_ = auVar89._8_4_ << 0x1f;
        auVar79._12_4_ = auVar89._12_4_ << 0x1f;
        uVar59 = movmskps(uVar59,auVar79);
        if ((uVar59 & 1) == 0) {
          auVar99 = auVar98;
          auVar100 = auVar175;
          auVar173 = auVar129;
          local_1100 = auVar87;
          local_10b0 = auVar88;
          auVar89 = auVar176;
          if ((uVar59 & 2) == 0) goto LAB_140a8a16f;
LAB_140a8981e:
          local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffffff00ff | 0x100;
        }
        else {
          local_10b0._8_8_ = local_11d0._8_8_;
          local_10b0._0_8_ = local_11d0._0_8_;
          local_1100._8_8_ = auVar145._8_8_;
          local_1100._0_8_ = auVar145._0_8_;
          auVar173._8_8_ = auVar180._8_8_;
          auVar173._0_8_ = auVar180._0_8_;
          local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffffffff00 | 1;
          auVar99 = local_1130;
          auVar100 = auVar146;
          auVar89 = local_1140;
          if ((uVar59 & 2) != 0) goto LAB_140a8981e;
LAB_140a8a16f:
          local_1140 = blendpd(auVar176,auVar89,1);
          auVar146 = blendpd(auVar175,auVar100,1);
          local_1130 = blendpd(auVar98,auVar99,1);
          local_11d0 = blendpd(auVar88,local_10b0,1);
          auVar145 = blendpd(auVar87,local_1100,1);
          auVar184 = blendpd(auVar129,auVar173,1);
        }
        bVar67 = (uVar59 & 4) != 0;
        auVar129 = local_11b0;
        if (bVar67) {
          auVar129 = auVar160;
        }
        cVar57 = (char)((char)uVar59 << 4) >> 4;
        auVar93 = local_1180;
        auVar87 = local_11e0;
        auVar88 = local_11c0;
        auVar105 = local_1190;
        auVar106 = local_1170;
        if (bVar67) {
          auVar93._8_8_ = auVar152._8_8_;
          auVar93._0_8_ = auVar152._0_8_;
          local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffff00ffff | 0x10000;
          auVar87 = auVar159;
          auVar88 = auVar153;
          auVar105 = local_11a0;
          auVar106 = local_1160;
        }
        if (-1 < cVar57) {
          auVar160 = blendpd(local_11b0,auVar129,1);
          auVar159 = blendpd(local_11e0,auVar87,1);
          auVar153 = blendpd(local_11c0,auVar88,1);
          local_1160 = blendpd(local_1170,auVar106,1);
          local_11a0 = blendpd(local_1190,auVar105,1);
          auVar152 = blendpd(local_1180,auVar93,1);
        }
        if (cVar57 < '\0') {
          local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffff00ffffff | 0x1000000;
        }
        auVar176 = blendpd(local_1140,auVar89,1);
        local_11b0 = blendpd(auVar160,auVar129,1);
        auVar175 = blendpd(auVar146,auVar100,1);
        local_11e0 = blendpd(auVar159,auVar87,1);
        auVar98 = blendpd(local_1130,auVar99,1);
        local_11c0 = blendpd(auVar153,auVar88,1);
        auVar88 = blendpd(local_11d0,local_10b0,1);
        local_1170 = blendpd(local_1160,auVar106,1);
        auVar87 = blendpd(auVar145,local_1100,1);
        local_1190 = blendpd(local_11a0,auVar105,1);
        auVar129 = blendpd(auVar184,auVar173,1);
        local_1180 = blendpd(auVar152,auVar93,1);
      }
    }
    else {
      auVar87 = minpd(auVar84,auVar160);
      uVar59 = movmskps(uVar59,auVar129);
      bVar43 = (char)((char)uVar59 << 4) >> 4;
      if ((uVar59 & 4) != 0) {
        auVar129 = blendpd(auVar129,auVar87,1);
        local_11b0 = auVar129;
      }
      auVar183._8_8_ = local_1160._8_8_;
      auVar183._0_8_ = local_1160._0_8_;
      if ((char)bVar43 < '\0') {
        auVar129 = blendpd(local_11b0,auVar87,2);
        local_11b0 = auVar129;
      }
      uVar59 = (uint)bVar43;
      auVar87 = minpd(local_1030,auVar159);
      if ((bVar43 & 4) != 0) {
        auVar129 = blendpd(auVar129,auVar87,1);
        local_11e0 = auVar129;
      }
      if ((char)bVar43 < '\0') {
        auVar129 = blendpd(local_11e0,auVar87,2);
        local_11e0 = auVar129;
      }
      auVar87 = minpd(local_1020,auVar153);
      if ((bVar43 & 4) != 0) {
        auVar129 = blendpd(auVar129,auVar87,1);
        local_11c0 = auVar129;
      }
      if ((char)bVar43 < '\0') {
        auVar129 = blendpd(local_11c0,auVar87,2);
        local_11c0 = auVar129;
      }
      auVar87 = maxpd(local_fd0,auVar183);
      if ((bVar43 & 4) != 0) {
        auVar129 = blendpd(auVar129,auVar87,1);
        local_1170 = auVar129;
      }
      if ((char)bVar43 < '\0') {
        auVar129 = blendpd(local_1170,auVar87,2);
        local_1170 = auVar129;
      }
      auVar87 = maxpd(local_1000,local_11a0);
      if ((bVar43 & 4) != 0) {
        auVar129 = blendpd(auVar129,auVar87,1);
        local_1190 = auVar129;
      }
      if ((char)bVar43 < '\0') {
        auVar129 = blendpd(local_1190,auVar87,2);
        local_1190 = auVar129;
      }
      auVar99 = maxpd(local_ff0,auVar152);
      if ((bVar43 & 4) != 0) {
        local_1180 = blendpd(auVar129,auVar99,1);
      }
      auVar98 = minpd(local_10f0,auVar146);
      auVar100 = minpd(local_10e0,local_1130);
      auVar88 = maxpd(local_10d0,local_11d0);
      auVar87 = maxpd(local_10c0,auVar145);
      auVar129 = maxpd(auVar71,auVar180);
      if ((char)bVar43 < '\0') {
        local_1180 = blendpd(local_1180,auVar99,2);
      }
      auVar176 = minpd(local_1110,local_1140);
      auVar175 = blendpd(auVar98,auVar98,1);
      auVar98 = blendpd(auVar100,auVar100,1);
      auVar88 = blendpd(auVar88,auVar88,1);
      auVar87 = blendpd(auVar87,auVar87,1);
      auVar129 = blendpd(auVar129,auVar129,1);
      local_11f0 = auVar97;
      if ((bVar61 & 0xf) != (byte)iVar46) goto LAB_140a89787;
    }
    uVar50 = (ulonglong)bVar61;
    if ((bVar61 & 1) == 0) {
      auVar99 = local_10f0;
      auVar100 = local_10e0;
      auVar105 = auVar97;
      auVar106 = local_10d0;
      auVar107 = local_10c0;
      auVar108 = auVar71;
      auVar89 = local_1110;
      if ((bVar61 & 2) == 0) goto LAB_140a89f56;
LAB_140a89a26:
      auVar97 = pblendvb(auVar105,auVar97,___xmm_000000000000000000000000ffffff00);
      auVar71 = local_11f0;
    }
    else {
      auVar99 = auVar175;
      auVar100 = auVar98;
      auVar105 = local_11f0;
      auVar106 = auVar88;
      auVar107 = auVar87;
      auVar108 = auVar129;
      auVar89 = auVar176;
      if ((bVar61 & 2) != 0) goto LAB_140a89a26;
LAB_140a89f56:
      auVar176 = blendpd(local_1110,auVar89,1);
      auVar175 = blendpd(local_10f0,auVar99,1);
      auVar98 = blendpd(local_10e0,auVar100,1);
      auVar88 = blendpd(local_10d0,auVar106,1);
      auVar87 = blendpd(local_10c0,auVar107,1);
      auVar129 = blendpd(auVar71,auVar108,1);
      auVar71 = pblendvb(auVar105,auVar97,___xmm_000000000000000000000000ffffff00);
      auVar97 = auVar71;
    }
    if ((bVar61 & 4) == 0) {
      auVar121 = pblendvb(auVar71,auVar97,___xmm_000000000000000000000000ffff00ff);
      auVar105 = local_fd0;
      auVar113 = local_1000;
      auVar112 = local_ff0;
      auVar114 = local_1020;
      auVar115 = local_1030;
      auVar97 = auVar121;
      auVar71 = auVar84;
      if (-1 < (char)bVar61) goto LAB_140a8a04a;
LAB_140a89aff:
      if (-1 < (char)bVar61) goto LAB_140a8a066;
LAB_140a89b05:
      if (-1 < (char)bVar61) goto LAB_140a8a082;
LAB_140a89b0b:
      if (-1 < (char)bVar61) goto LAB_140a8a09e;
LAB_140a89b11:
      if (-1 < (char)bVar61) goto LAB_140a8a0bc;
LAB_140a89b17:
      if (-1 < (char)bVar61) goto LAB_140a8a0d7;
LAB_140a89b1d:
      auVar84 = pblendvb(auVar97,auVar121,___xmm_000000000000000000000000ff00ffff);
    }
    else {
      auVar121 = pblendvb(auVar71,auVar97,___xmm_000000000000000000000000ffff00ff);
      auVar105 = local_1170;
      auVar113 = local_1190;
      auVar112 = local_1180;
      auVar114 = local_11c0;
      auVar115 = local_11e0;
      auVar97 = local_11f0;
      auVar71 = local_11b0;
      if ((char)bVar61 < '\0') goto LAB_140a89aff;
LAB_140a8a04a:
      local_11b0 = pblendw(auVar84,auVar71,0xf);
      if ((char)bVar61 < '\0') goto LAB_140a89b05;
LAB_140a8a066:
      local_11e0 = pblendw(local_1030,auVar115,0xf);
      if ((char)bVar61 < '\0') goto LAB_140a89b0b;
LAB_140a8a082:
      local_11c0 = pblendw(local_1020,auVar114,0xf);
      if ((char)bVar61 < '\0') goto LAB_140a89b11;
LAB_140a8a09e:
      local_1170 = pblendw(local_fd0,auVar105,0xf);
      if ((char)bVar61 < '\0') goto LAB_140a89b17;
LAB_140a8a0bc:
      local_1190 = pblendw(local_1000,auVar113,0xf);
      if ((char)bVar61 < '\0') goto LAB_140a89b1d;
LAB_140a8a0d7:
      local_1180 = blendps(local_ff0,auVar112,3);
      auVar84 = pblendvb(auVar97,auVar121,___xmm_000000000000000000000000ff00ffff);
    }
    if (-1 < (char)bVar61) {
      local_11f0 = auVar84;
    }
    auVar97 = pblendvb(local_11f0,auVar84,___xmm_00000000000000000000000000ffffff);
    local_1110 = blendpd(auVar176,auVar89,1);
    auVar84 = pblendw(local_11b0,auVar71,0xf);
    local_10f0 = blendpd(auVar175,auVar99,1);
    local_1030 = pblendw(local_11e0,auVar115,0xf);
    local_10e0 = blendpd(auVar98,auVar100,1);
    local_1020 = pblendw(local_11c0,auVar114,0xf);
    local_10d0 = blendpd(auVar88,auVar106,1);
    local_fd0 = pblendw(local_1170,auVar105,0xf);
    local_10c0 = blendpd(auVar87,auVar107,1);
    local_1000 = pblendw(local_1190,auVar113,0xf);
    auVar71 = blendpd(auVar129,auVar108,1);
    local_ff0 = blendps(local_1180,auVar112,3);
LAB_140a89c48:
    local_9e0 = local_1110._0_8_;
    adStack_9d8[0] = (double)local_10f0._0_8_;
    local_9a8 = local_1110._8_8_;
    local_970 = auVar84._0_8_;
    local_938[0] = auVar84._8_8_;
    local_9a0 = local_10f0._8_8_;
    uStack_998 = local_10e0._8_8_;
    local_968 = local_1030._0_8_;
    adStack_960[0] = (double)local_1020._0_8_;
    local_938[1] = (double)local_1030._8_8_;
    local_938[2] = (double)local_1020._8_8_;
    adStack_9d8[1] = (double)local_10e0._0_8_;
    local_9c8[0] = (double)local_10d0._0_8_;
    local_9c8[1] = (double)local_10c0._0_8_;
    local_990 = local_10d0._8_8_;
    uStack_988 = local_10c0._8_8_;
    adStack_960[1] = (double)local_fd0._0_8_;
    adStack_960[2] = (double)local_1000._0_8_;
    local_938[3] = (double)local_fd0._8_8_;
    local_938[4] = (double)local_1000._8_8_;
    local_9c8[2] = (double)auVar71._0_8_;
    local_980 = auVar71._8_8_;
    adStack_960[3] = (double)local_ff0._0_8_;
    local_938[5] = (double)local_ff0._8_8_;
    local_9b0[0] = auVar97[0];
    local_978 = auVar97[1];
    local_940[0] = auVar97[2];
    local_908[0] = auVar97[3];
    auVar84._0_4_ = -(uint)((int)(uint)__xmm_00000003000000020000000100000000 < (int)param_6);
    auVar84._4_4_ = -(uint)((int)__xmm_00000003000000020000000100000000._4_4_ < (int)param_6);
    auVar84._8_4_ = -(uint)((int)_UNK_150631e08 < (int)param_6);
    auVar84._12_4_ = -(uint)((int)_UNK_150631e0c < (int)param_6);
    uVar59 = movmskps((int)uVar50,auVar84);
    if (uVar59 == 0) {
      return;
    }
    uVar50 = (ulonglong)(uVar59 & 0xff);
    do {
      if (uVar50 == 0) {
        uVar53 = 0x40;
      }
      else {
        uVar53 = 0;
        for (uVar52 = uVar50; (uVar52 & 1) == 0; uVar52 = uVar52 >> 1 | 0x8000000000000000) {
          uVar53 = uVar53 + 1;
        }
      }
      lVar60 = uVar53 * 0x38;
      cVar54 = param_5[3][0];
      cVar57 = local_9b0[lVar60];
      if ((cVar54 == '\0') || (cVar57 == '\0')) {
        if (cVar57 == '\0') {
          cVar54 = param_5[3][0];
          dVar94 = *(double *)param_5[2];
          dVar82 = *(double *)(param_5[1] + 8);
          dVar81 = *(double *)param_5[1];
          uVar83 = *(undefined8 *)*param_5;
          dVar69 = *(double *)(*param_5 + 8);
          dVar104 = *(double *)(param_5[2] + 8);
        }
        else {
          uVar83 = *(undefined8 *)*(undefined1 (*) [16])(&local_9e0 + uVar53 * 7);
          dVar69 = adStack_9d8[uVar53 * 7];
          dVar81 = adStack_9d8[uVar53 * 7 + 1];
          dVar82 = local_9c8[uVar53 * 7];
          dVar94 = local_9c8[uVar53 * 7 + 1];
          cVar54 = cVar57;
          dVar104 = *(double *)(local_9b0 + lVar60 + -8);
        }
      }
      else {
        auVar84 = minpd(*param_5,*(undefined1 (*) [16])(&local_9e0 + uVar53 * 7));
        uVar83 = auVar84._0_8_;
        dVar69 = auVar84._8_8_;
        dVar81 = *(double *)param_5[1];
        if (adStack_9d8[uVar53 * 7 + 1] <= *(double *)param_5[1]) {
          dVar81 = adStack_9d8[uVar53 * 7 + 1];
        }
        auVar84 = maxpd(*(undefined1 (*) [16])(param_5[1] + 8),
                        *(undefined1 (*) [16])(local_9c8 + uVar53 * 7));
        dVar82 = auVar84._0_8_;
        dVar94 = auVar84._8_8_;
        dVar104 = *(double *)(param_5[2] + 8);
        if (*(double *)(param_5[2] + 8) <= *(double *)(local_9b0 + lVar60 + -8)) {
          dVar104 = *(double *)(local_9b0 + lVar60 + -8);
        }
      }
      uVar50 = uVar50 & ~(1L << (uVar53 & 0x3f));
      *(undefined8 *)*param_5 = uVar83;
      *(double *)(*param_5 + 8) = dVar69;
      *(double *)param_5[1] = dVar81;
      *(double *)(param_5[1] + 8) = dVar82;
      *(double *)param_5[2] = dVar94;
      *(double *)(param_5[2] + 8) = dVar104;
      param_5[3][0] = cVar54;
    } while (uVar50 != 0);
    return;
  }
  if ((int)uVar59 < 1) {
    auVar89 = ZEXT816(0);
    uVar48 = 0;
    auVar97 = ZEXT816(0);
    auVar71 = ZEXT816(0);
    auVar84 = ZEXT816(0);
    local_10f0 = auVar71;
    local_10e0 = auVar71;
    local_10d0 = auVar71;
    local_10c0 = auVar71;
    local_1060 = auVar71;
    local_1030 = auVar71;
    local_1020 = auVar71;
    local_fe0 = auVar71;
    local_fb0 = auVar71;
    local_fa0 = auVar71;
  }
  else {
    uVar48 = 0;
    local_10f0 = ZEXT816(0);
    auVar84 = ZEXT816(0);
    local_10e0 = ZEXT816(0);
    local_fa0 = ZEXT816(0);
    local_10d0 = ZEXT816(0);
    local_fb0 = ZEXT816(0);
    local_10c0 = ZEXT816(0);
    local_fe0 = ZEXT816(0);
    local_1060 = ZEXT816(0);
    local_1030 = ZEXT816(0);
    auVar97 = ZEXT816(0);
    local_1020 = ZEXT816(0);
    auVar89 = ZEXT816(0);
    do {
      uVar50 = (ulonglong)(uVar48 * 7);
      uVar52 = (ulonglong)(uVar48 * 7);
      uVar53 = (ulonglong)(uVar48 * 7);
      uVar56 = (ulonglong)(uVar48 * 7);
      piVar1 = (int *)((longlong)param_1 + (ulonglong)(uVar48 * 4));
      in_XMM5._8_4_ = 0xffffffff;
      in_XMM5._0_8_ = 0xffffffffffffffff;
      in_XMM5._12_4_ = 0xffffffff;
      auVar128._0_4_ = -(uint)(*piVar1 == -1);
      auVar128._4_4_ = -(uint)(piVar1[1] == -1);
      auVar128._8_4_ = -(uint)(piVar1[2] == -1);
      auVar128._12_4_ = -(uint)(piVar1[3] == -1);
      auVar70[0] = -(*(char *)(param_3 + 0x30 + uVar50 * 8) == '\0');
      auVar70[1] = -(*(char *)(param_3 + 0x68 + uVar52 * 8) == '\0');
      auVar70[2] = -(*(char *)(param_3 + 0xa0 + uVar53 * 8) == '\0');
      auVar70[3] = -(*(char *)(param_3 + 0xd8 + uVar56 * 8) == '\0');
      auVar70[4] = 0xff;
      auVar70[5] = 0xff;
      auVar70[6] = 0xff;
      auVar70[7] = 0xff;
      auVar70[8] = 0xff;
      auVar70[9] = 0xff;
      auVar70[10] = 0xff;
      auVar70[0xb] = 0xff;
      auVar70[0xc] = 0xff;
      auVar70[0xd] = 0xff;
      auVar70[0xe] = 0xff;
      auVar70[0xf] = 0xff;
      auVar71 = pmovsxbd(auVar70 ^ in_XMM5,auVar70 ^ in_XMM5);
      auVar129 = ~auVar128 & auVar71;
      iVar46 = movmskps(uVar48 * 4,auVar129);
      if (iVar46 != 0) {
        auVar85._0_4_ = uVar48 << 7;
        auVar85._4_4_ = uVar48 << 7;
        auVar85._8_4_ = uVar48 << 7;
        auVar85._12_4_ = uVar48 << 7;
        auVar71 = pmovzxdq(auVar97,auVar85);
        auVar86._4_4_ = 0;
        auVar86._0_4_ = auVar85._8_4_;
        auVar86._8_4_ = auVar85._12_4_;
        auVar86._12_4_ = 0;
        auVar121 = pmovsxdq(in_XMM5,auVar129);
        auVar105 = blendvps(ZEXT816(0),auVar71,auVar121);
        auVar130._12_4_ = auVar129._12_4_;
        auVar130._4_4_ = auVar129._8_4_;
        auVar130._0_4_ = auVar129._8_4_;
        auVar130._8_4_ = auVar130._12_4_;
        auVar98 = blendvps(ZEXT816(0),auVar86,auVar130);
        auVar71 = blendvps(ZEXT816(0),___xmm_00000000000000800000000000000000,auVar121);
        auVar112 = blendvps((undefined1  [16])0x0,___xmm_00000000000001800000000000000100,auVar130);
        auVar106 = blendvps(ZEXT816(0),___xmm_00000000000000880000000000000008,auVar121);
        auVar141 = blendvps(ZEXT816(0),___xmm_00000000000001880000000000000108,auVar130);
        auVar179 = blendvps(ZEXT816(0),___xmm_00000000000000900000000000000010,auVar121);
        auVar145 = blendvps(ZEXT816(0),___xmm_00000000000001900000000000000110,auVar130);
        auVar87 = blendvps(ZEXT816(0),___xmm_00000000000000980000000000000018,auVar121);
        auVar152 = blendvps(ZEXT816(0),___xmm_00000000000001980000000000000118,auVar130);
        auVar99 = blendvps(ZEXT816(0),___xmm_00000000000000a00000000000000020,auVar121);
        auVar159 = blendvps(ZEXT816(0),___xmm_00000000000001a00000000000000120,auVar130);
        auVar183 = blendvps(ZEXT816(0),___xmm_00000000000000a80000000000000028,auVar121);
        auVar113 = blendvps(ZEXT816(0),___xmm_00000000000001a80000000000000128,auVar130);
        auVar175 = blendvps(ZEXT816(0),___xmm_00000000000000b00000000000000030,auVar121);
        auVar134 = blendvps(ZEXT816(0),___xmm_00000000000001b00000000000000130,auVar130);
        auVar164 = blendvps(ZEXT816(0),___xmm_00000000000000b80000000000000038,auVar121);
        auVar114 = blendvps(ZEXT816(0),___xmm_00000000000001b80000000000000138,auVar130);
        auVar107 = blendvps(ZEXT816(0),___xmm_00000000000000c00000000000000040,auVar121);
        auVar108 = blendvps(ZEXT816(0),___xmm_00000000000001c00000000000000140,auVar130);
        auVar142 = blendvps(ZEXT816(0),___xmm_00000000000000c80000000000000048,auVar121);
        auVar146 = blendvps(ZEXT816(0),___xmm_00000000000001c80000000000000148,auVar130);
        auVar88 = blendvps(ZEXT816(0),___xmm_00000000000000d00000000000000050,auVar121);
        auVar180 = blendvps(ZEXT816(0),___xmm_00000000000001d00000000000000150,auVar130);
        auVar100 = blendvps(ZEXT816(0),___xmm_00000000000000d80000000000000058,auVar121);
        auVar153 = blendvps(ZEXT816(0),___xmm_00000000000001d80000000000000158,auVar130);
        auVar184 = blendvps(ZEXT816(0),___xmm_00000000000000e00000000000000060,auVar121);
        auVar160 = blendvps(ZEXT816(0),___xmm_00000000000001e00000000000000160,auVar130);
        local_e20 = auVar113._0_8_;
        lStack_e18 = auVar113._8_8_;
        auVar115 = blendvps(ZEXT816(0),___xmm_00000000000000e80000000000000068,auVar121);
        auVar135 = blendvps(ZEXT816(0),___xmm_00000000000001e80000000000000168,auVar130);
        auVar176 = blendvps(ZEXT816(0),___xmm_00000000000000f00000000000000070,auVar121);
        auVar165 = blendvps(ZEXT816(0),___xmm_00000000000001f00000000000000170,auVar130);
        auVar113 = blendvps(ZEXT816(0),___xmm_00000000000000f80000000000000078,auVar121);
        auVar121 = blendvps((undefined1  [16])0x0,___xmm_00000000000001f80000000000000178,auVar130);
        local_1110._0_8_ = auVar114._0_8_;
        local_1110._8_8_ = auVar114._8_8_;
        local_1120._0_8_ = auVar107._0_8_;
        local_1120._8_8_ = auVar107._8_8_;
        dVar69 = *(double *)(param_3 + 0x70 + uVar53 * 8);
        dVar81 = *(double *)(param_3 + 0xa8 + uVar56 * 8);
        dVar82 = *(double *)(param_3 + 0x78 + uVar53 * 8);
        dVar94 = *(double *)(param_3 + 0xb0 + uVar56 * 8);
        local_1080._0_8_ = auVar108._0_8_;
        local_1080._8_8_ = auVar108._8_8_;
        dVar104 = *(double *)(param_3 + 0x80 + uVar53 * 8);
        dVar110 = *(double *)(param_3 + 0xb8 + uVar56 * 8);
        dVar96 = *(double *)(param_3 + 0x88 + uVar53 * 8);
        dVar103 = *(double *)(param_3 + 0xc0 + uVar56 * 8);
        dVar120 = *(double *)(param_3 + 0x90 + uVar53 * 8);
        dVar125 = *(double *)(param_3 + 200 + uVar56 * 8);
        dVar133 = *(double *)(param_3 + 0x98 + uVar53 * 8);
        dVar139 = *(double *)(param_3 + 0xd0 + uVar56 * 8);
        dVar95 = *(double *)(param_3 + uVar50 * 8);
        dVar102 = *(double *)(param_3 + 0x38 + uVar52 * 8);
        dVar127 = *(double *)(param_3 + 8 + uVar50 * 8);
        dVar132 = *(double *)(param_3 + 0x40 + uVar52 * 8);
        dVar140 = *(double *)(param_3 + 0x10 + uVar50 * 8);
        dVar143 = *(double *)(param_3 + 0x48 + uVar52 * 8);
        dVar144 = *(double *)(param_3 + 0x18 + uVar50 * 8);
        dVar149 = *(double *)(param_3 + 0x50 + uVar52 * 8);
        dVar151 = *(double *)(param_3 + 0x20 + uVar50 * 8);
        dVar156 = *(double *)(param_3 + 0x58 + uVar52 * 8);
        dVar158 = *(double *)(param_3 + 0x28 + uVar50 * 8);
        dVar162 = *(double *)(param_3 + 0x60 + uVar52 * 8);
        lVar66 = auVar105._0_8_ + param_2;
        lVar64 = auVar105._8_8_ + param_2;
        lVar65 = auVar98._0_8_ + param_2;
        lVar60 = auVar98._8_8_ + param_2;
        local_760[0xe] = (double)*(undefined8 *)(auVar112._0_8_ + lVar65);
        local_760[0xf] = (double)*(undefined8 *)(auVar112._8_8_ + lVar60);
        local_760[0xc] = (double)*(undefined8 *)(auVar71._0_8_ + lVar66);
        local_760[0xd] = (double)*(undefined8 *)(auVar71._8_8_ + lVar64);
        local_760[0x12] = (double)*(undefined8 *)(auVar141._0_8_ + lVar65);
        uStack_6c8 = *(undefined8 *)(auVar141._8_8_ + lVar60);
        local_760[0x10] = (double)*(undefined8 *)(auVar106._0_8_ + lVar66);
        local_760[0x11] = (double)*(undefined8 *)(auVar106._8_8_ + lVar64);
        local_6b0 = *(undefined8 *)(auVar145._0_8_ + lVar65);
        uStack_6a8 = *(undefined8 *)(auVar145._8_8_ + lVar60);
        local_6c0 = *(undefined8 *)(auVar179._0_8_ + lVar66);
        uStack_6b8 = *(undefined8 *)(auVar179._8_8_ + lVar64);
        local_690 = *(undefined8 *)(auVar152._0_8_ + lVar65);
        uStack_688 = *(undefined8 *)(auVar152._8_8_ + lVar60);
        local_6a0 = *(undefined8 *)(auVar87._0_8_ + lVar66);
        uStack_698 = *(undefined8 *)(auVar87._8_8_ + lVar64);
        local_670 = *(undefined8 *)(auVar159._0_8_ + lVar65);
        uStack_668 = *(undefined8 *)(auVar159._8_8_ + lVar60);
        local_680 = *(undefined8 *)(auVar99._0_8_ + lVar66);
        uStack_678 = *(undefined8 *)(auVar99._8_8_ + lVar64);
        local_650 = *(undefined8 *)(local_e20 + lVar65);
        uStack_648 = *(undefined8 *)(lStack_e18 + lVar60);
        local_660 = *(undefined8 *)(auVar183._0_8_ + lVar66);
        uStack_658 = *(undefined8 *)(auVar183._8_8_ + lVar64);
        local_630 = *(undefined8 *)(auVar134._0_8_ + lVar65);
        uStack_628 = *(undefined8 *)(auVar134._8_8_ + lVar60);
        local_640 = *(undefined8 *)(auVar175._0_8_ + lVar66);
        uStack_638 = *(undefined8 *)(auVar175._8_8_ + lVar64);
        local_610 = *(undefined8 *)(local_1110._0_8_ + lVar65);
        uStack_608 = *(undefined8 *)(local_1110._8_8_ + lVar60);
        local_620 = *(undefined8 *)(auVar164._0_8_ + lVar66);
        uStack_618 = *(undefined8 *)(auVar164._8_8_ + lVar64);
        local_5f0 = *(undefined8 *)(local_1080._0_8_ + lVar65);
        uStack_5e8 = *(undefined8 *)(local_1080._8_8_ + lVar60);
        local_600 = *(undefined8 *)(local_1120._0_8_ + lVar66);
        uStack_5f8 = *(undefined8 *)(local_1120._8_8_ + lVar64);
        local_5d0 = *(undefined8 *)(auVar146._0_8_ + lVar65);
        uStack_5c8 = *(undefined8 *)(auVar146._8_8_ + lVar60);
        local_5e0 = *(undefined8 *)(auVar142._0_8_ + lVar66);
        uStack_5d8 = *(undefined8 *)(auVar142._8_8_ + lVar64);
        local_5b0 = *(undefined8 *)(auVar180._0_8_ + lVar65);
        uStack_5a8 = *(undefined8 *)(auVar180._8_8_ + lVar60);
        local_5c0 = *(undefined8 *)(auVar88._0_8_ + lVar66);
        uStack_5b8 = *(undefined8 *)(auVar88._8_8_ + lVar64);
        local_590 = *(undefined8 *)(auVar153._0_8_ + lVar65);
        uStack_588 = *(undefined8 *)(auVar153._8_8_ + lVar60);
        local_5a0 = *(undefined8 *)(auVar100._0_8_ + lVar66);
        uStack_598 = *(undefined8 *)(auVar100._8_8_ + lVar64);
        local_570 = *(undefined8 *)(auVar160._0_8_ + lVar65);
        uStack_568 = *(undefined8 *)(auVar160._8_8_ + lVar60);
        local_580 = *(undefined8 *)(auVar184._0_8_ + lVar66);
        uStack_578 = *(undefined8 *)(auVar184._8_8_ + lVar64);
        bVar61 = (char)((char)iVar46 << 4) >> 4;
        local_560[2] = (double)*(undefined8 *)(auVar135._0_8_ + lVar65);
        local_560[3] = (double)*(undefined8 *)(auVar135._8_8_ + lVar60);
        local_560[0] = *(double *)(auVar115._0_8_ + lVar66);
        local_560[1] = (double)*(undefined8 *)(auVar115._8_8_ + lVar64);
        local_560[6] = (double)*(undefined8 *)(auVar165._0_8_ + lVar65);
        local_560[7] = (double)*(undefined8 *)(auVar165._8_8_ + lVar60);
        local_560[4] = (double)*(undefined8 *)(auVar176._0_8_ + lVar66);
        local_560[5] = (double)*(undefined8 *)(auVar176._8_8_ + lVar64);
        local_560[10] = (double)*(undefined8 *)(auVar121._0_8_ + lVar65);
        local_560[0xb] = (double)*(undefined8 *)(auVar121._8_8_ + lVar60);
        local_560[8] = (double)*(undefined8 *)(auVar113._0_8_ + lVar66);
        local_560[9] = (double)*(undefined8 *)(auVar113._8_8_ + lVar64);
        dVar68 = *param_4;
        dVar80 = *param_4;
        dVar111 = param_4[4];
        dVar118 = param_4[4];
        dVar119 = param_4[8];
        dVar124 = param_4[8];
        dVar131 = param_4[0xc];
        dVar126 = param_4[0xc];
        lVar60 = 0x60;
        dVar150 = param_4[1];
        dVar155 = param_4[1];
        dVar161 = param_4[5];
        dVar157 = param_4[5];
        dVar163 = param_4[9];
        dVar174 = param_4[9];
        dVar181 = param_4[0xd];
        dVar178 = param_4[0xd];
        dVar186 = param_4[2];
        dVar182 = param_4[2];
        dVar2 = param_4[6];
        dVar3 = param_4[6];
        dVar4 = param_4[10];
        dVar5 = param_4[10];
        dVar6 = param_4[0xe];
        dVar7 = param_4[0xe];
        dVar8 = param_4[3];
        dVar9 = param_4[3];
        dVar10 = param_4[7];
        dVar11 = param_4[7];
        dVar12 = param_4[0xb];
        dVar13 = param_4[0xb];
        dVar14 = param_4[0xf];
        dVar15 = param_4[0xf];
        do {
          dVar27 = *(double *)((longlong)local_760 + lVar60);
          dVar28 = *(double *)((longlong)local_760 + lVar60 + 8);
          dVar29 = *(double *)((longlong)local_760 + lVar60 + 0x10);
          dVar30 = *(double *)((longlong)local_760 + lVar60 + 0x18);
          dVar31 = *(double *)((longlong)local_760 + lVar60 + 0x20);
          dVar32 = *(double *)((longlong)local_760 + lVar60 + 0x28);
          dVar33 = *(double *)((longlong)local_760 + lVar60 + 0x30);
          dVar34 = *(double *)((longlong)local_760 + lVar60 + 0x38);
          dVar35 = *(double *)((longlong)local_760 + lVar60 + 0x50);
          dVar36 = *(double *)((longlong)local_760 + lVar60 + 0x58);
          dVar37 = *(double *)((longlong)local_760 + lVar60 + 0x40);
          dVar38 = *(double *)((longlong)local_760 + lVar60 + 0x48);
          dVar39 = *(double *)((longlong)local_760 + lVar60 + 0x60);
          dVar40 = *(double *)((longlong)local_760 + lVar60 + 0x68);
          dVar41 = *(double *)((longlong)local_760 + lVar60 + 0x70);
          dVar42 = *(double *)((longlong)local_760 + lVar60 + 0x78);
          *(double *)((longlong)local_d40 + lVar60 + 0x10) =
               dVar41 * dVar131 + dVar35 * dVar119 + dVar33 * dVar111 + dVar29 * dVar68 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x18) =
               dVar42 * dVar126 + dVar36 * dVar124 + dVar34 * dVar118 + dVar30 * dVar80 + 0.0;
          *(double *)((longlong)local_d40 + lVar60) =
               dVar39 * dVar131 + dVar37 * dVar119 + dVar31 * dVar111 + dVar27 * dVar68 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 8) =
               dVar40 * dVar126 + dVar38 * dVar124 + dVar32 * dVar118 + dVar28 * dVar80 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x30) =
               dVar41 * dVar181 + dVar35 * dVar163 + dVar33 * dVar161 + dVar29 * dVar150 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x38) =
               dVar42 * dVar178 + dVar36 * dVar174 + dVar34 * dVar157 + dVar30 * dVar155 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x20) =
               dVar39 * dVar181 + dVar37 * dVar163 + dVar31 * dVar161 + dVar27 * dVar150 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x28) =
               dVar40 * dVar178 + dVar38 * dVar174 + dVar32 * dVar157 + dVar28 * dVar155 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x50) =
               dVar41 * dVar6 + dVar35 * dVar4 + dVar33 * dVar2 + dVar29 * dVar186 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x58) =
               dVar42 * dVar7 + dVar36 * dVar5 + dVar34 * dVar3 + dVar30 * dVar182 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x40) =
               dVar39 * dVar6 + dVar37 * dVar4 + dVar31 * dVar2 + dVar27 * dVar186 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x48) =
               dVar40 * dVar7 + dVar38 * dVar5 + dVar32 * dVar3 + dVar28 * dVar182 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x70) =
               dVar41 * dVar14 + dVar35 * dVar12 + dVar33 * dVar10 + dVar29 * dVar8 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x78) =
               dVar42 * dVar15 + dVar36 * dVar13 + dVar34 * dVar11 + dVar30 * dVar9 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x60) =
               dVar39 * dVar14 + dVar37 * dVar12 + dVar31 * dVar10 + dVar27 * dVar8 + 0.0;
          *(double *)((longlong)local_d40 + lVar60 + 0x68) =
               dVar40 * dVar15 + dVar38 * dVar13 + dVar32 * dVar11 + dVar28 * dVar9 + 0.0;
          lVar60 = lVar60 + 0x80;
        } while (lVar60 != 0x260);
        dVar111 = (dVar95 + dVar144) * ___xmm_3fe00000000000003fe0000000000000;
        dVar118 = (dVar102 + dVar149) * _UNK_150689678;
        dVar126 = (dVar127 + dVar151) * ___xmm_3fe00000000000003fe0000000000000;
        dVar131 = (dVar132 + dVar156) * _UNK_150689678;
        dVar119 = (dVar69 + dVar96) * ___xmm_3fe00000000000003fe0000000000000;
        dVar124 = (dVar81 + dVar103) * _UNK_150689678;
        dVar68 = (dVar82 + dVar120) * ___xmm_3fe00000000000003fe0000000000000;
        dVar80 = (dVar94 + dVar125) * _UNK_150689678;
        dVar182 = (dVar104 + dVar133) * ___xmm_3fe00000000000003fe0000000000000;
        dVar186 = (dVar110 + dVar139) * _UNK_150689678;
        dVar150 = (dVar140 + dVar158) * ___xmm_3fe00000000000003fe0000000000000;
        dVar155 = (dVar143 + dVar162) * _UNK_150689678;
        dVar95 = (dVar144 - dVar95) * ___xmm_3fe00000000000003fe0000000000000;
        dVar102 = (dVar149 - dVar102) * _UNK_150689678;
        dVar157 = (dVar96 - dVar69) * ___xmm_3fe00000000000003fe0000000000000;
        dVar161 = (dVar103 - dVar81) * _UNK_150689678;
        dVar144 = (dVar151 - dVar127) * ___xmm_3fe00000000000003fe0000000000000;
        dVar149 = (dVar156 - dVar132) * _UNK_150689678;
        dVar127 = (dVar120 - dVar82) * ___xmm_3fe00000000000003fe0000000000000;
        dVar132 = (dVar125 - dVar94) * _UNK_150689678;
        dVar82 = dVar182 * local_bd0 + dVar68 * local_c50 + dVar119 * local_d40[0xe] + local_b50;
        dVar94 = dVar186 * dStack_bc8 + dVar80 * dStack_c48 + dVar124 * local_d40[0xf] + dStack_b48;
        dVar96 = dVar150 * local_be0 + dVar126 * local_c60 + dVar111 * local_d40[0xc] + local_b60;
        dVar103 = dVar155 * dStack_bd8 + dVar131 * dStack_c58 + dVar118 * local_d40[0xd] +
                  dStack_b58;
        dVar178 = (dVar133 - dVar104) * ___xmm_3fe00000000000003fe0000000000000;
        dVar181 = (dVar139 - dVar110) * _UNK_150689678;
        dVar140 = (dVar158 - dVar140) * ___xmm_3fe00000000000003fe0000000000000;
        dVar143 = (dVar162 - dVar143) * _UNK_150689678;
        dVar104 = dVar182 * local_bb0 + dVar68 * local_c30 + dVar119 * local_d40[0x12] + local_b30;
        dVar110 = dVar186 * dStack_ba8 + dVar80 * dStack_c28 + dVar124 * dStack_ca8 + dStack_b28;
        dVar158 = (double)((ulonglong)(local_be0 * dVar140) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_c60 * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_d40[0xc] * dVar95) &
                          __xmm_7fffffffffffffff7fffffffffffffff);
        dVar162 = (double)((ulonglong)(dStack_bd8 * dVar143) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_c58 * dVar149) & _UNK_15061cc88) +
                  (double)((ulonglong)(local_d40[0xd] * dVar102) & _UNK_15061cc88);
        dVar163 = dVar150 * local_bc0 + dVar126 * local_c40 + dVar111 * local_d40[0x10] + local_b40;
        dVar174 = dVar155 * dStack_bb8 + dVar131 * dStack_c38 + dVar118 * local_d40[0x11] +
                  dStack_b38;
        dVar133 = (double)((ulonglong)(local_bd0 * dVar178) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_c50 * dVar127) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_d40[0xe] * dVar157) &
                          __xmm_7fffffffffffffff7fffffffffffffff);
        dVar139 = (double)((ulonglong)(dStack_bc8 * dVar181) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_c48 * dVar132) & _UNK_15061cc88) +
                  (double)((ulonglong)(local_d40[0xf] * dVar161) & _UNK_15061cc88);
        dVar68 = dVar182 * local_b90 + dVar68 * local_c10 + dVar119 * local_c90 + local_b10;
        dVar80 = dVar186 * dStack_b88 + dVar80 * dStack_c08 + dVar124 * dStack_c88 + dStack_b08;
        dVar120 = (double)((ulonglong)(local_bc0 * dVar140) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_c40 * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_d40[0x10] * dVar95) &
                          __xmm_7fffffffffffffff7fffffffffffffff);
        dVar125 = (double)((ulonglong)(dStack_bb8 * dVar143) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_c38 * dVar149) & _UNK_15061cc88) +
                  (double)((ulonglong)(local_d40[0x11] * dVar102) & _UNK_15061cc88);
        dVar151 = dVar150 * local_ba0 + dVar126 * local_c20 + dVar111 * local_ca0 + local_b20;
        dVar156 = dVar155 * dStack_b98 + dVar131 * dStack_c18 + dVar118 * dStack_c98 + dStack_b18;
        dVar69 = (double)((ulonglong)(local_bb0 * dVar178) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(local_c30 * dVar127) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_d40[0x12] * dVar157) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar81 = (double)((ulonglong)(dStack_ba8 * dVar181) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_c28 * dVar132) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_ca8 * dVar161) & _UNK_15061cc88);
        dVar95 = (double)((ulonglong)(dVar140 * local_ba0) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(dVar144 * local_c20) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(dVar95 * local_ca0) & __xmm_7fffffffffffffff7fffffffffffffff
                           );
        dVar102 = (double)((ulonglong)(dVar143 * dStack_b98) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar149 * dStack_c18) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar102 * dStack_c98) & _UNK_15061cc88);
        dVar127 = (double)((ulonglong)(dVar178 * local_b90) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(dVar127 * local_c10) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(dVar157 * local_c90) & __xmm_7fffffffffffffff7fffffffffffffff
                          );
        dVar132 = (double)((ulonglong)(dVar181 * dStack_b88) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar132 * dStack_c08) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar161 * dStack_c88) & _UNK_15061cc88);
        auVar177._0_8_ = dVar96 - dVar158;
        auVar177._8_8_ = dVar103 - dVar162;
        auVar166._0_8_ = dVar82 - dVar133;
        auVar166._8_8_ = dVar94 - dVar139;
        local_11e0._8_8_ = dVar174 - dVar125;
        local_11e0._0_8_ = dVar163 - dVar120;
        local_11d0._8_8_ = dVar162 + dVar103;
        local_11d0._0_8_ = dVar158 + dVar96;
        local_11c0._8_8_ = dVar110 - dVar81;
        local_11c0._0_8_ = dVar104 - dVar69;
        local_11f0._8_8_ = dVar139 + dVar94;
        local_11f0._0_8_ = dVar133 + dVar82;
        local_1190._8_8_ = dVar156 - dVar102;
        local_1190._0_8_ = dVar151 - dVar95;
        local_11b0._8_8_ = dVar125 + dVar174;
        local_11b0._0_8_ = dVar120 + dVar163;
        local_1180._8_8_ = dVar80 - dVar132;
        local_1180._0_8_ = dVar68 - dVar127;
        local_11a0._8_8_ = dVar81 + dVar110;
        local_11a0._0_8_ = dVar69 + dVar104;
        local_1120._8_8_ = dVar102 + dVar156;
        local_1120._0_8_ = dVar95 + dVar151;
        local_1080._8_8_ = dVar132 + dVar80;
        local_1080._0_8_ = dVar127 + dVar68;
        auVar136[0] = -(auVar89[0] == '\0');
        auVar136[1] = -(auVar89[1] == '\0');
        auVar136[2] = -(auVar89[2] == '\0');
        auVar136[3] = -(auVar89[3] == '\0');
        auVar136[4] = -(auVar89[4] == '\0');
        auVar136[5] = -(auVar89[5] == '\0');
        auVar136[6] = -(auVar89[6] == '\0');
        auVar136[7] = -(auVar89[7] == '\0');
        auVar136[8] = -(auVar89[8] == '\0');
        auVar136[9] = -(auVar89[9] == '\0');
        auVar136[10] = -(auVar89[10] == '\0');
        auVar136[0xb] = -(auVar89[0xb] == '\0');
        auVar136[0xc] = -(auVar89[0xc] == '\0');
        auVar136[0xd] = -(auVar89[0xd] == '\0');
        auVar136[0xe] = -(auVar89[0xe] == '\0');
        auVar136[0xf] = -(auVar89[0xf] == '\0');
        auVar71 = pmovsxbd(auVar136 ^ ___xmm_ffffffffffffffffffffffffffffffff,
                           auVar136 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        iVar51 = movmskps((int)param_4,auVar129 & auVar71);
        if (iVar51 == 0) {
          uVar47 = 0x260;
LAB_140a82b0a:
          auVar71 = pmovsxbd(auVar71,auVar136);
          iVar46 = movmskps(uVar47,auVar129 & auVar71);
          if ((iVar46 != 0) && ((char)iVar46 != '\0')) {
            auVar71 = pmovzxbd(auVar71,auVar136);
            auVar72._0_4_ = auVar71._0_4_ << 0x1f;
            auVar72._4_4_ = auVar71._4_4_ << 0x1f;
            auVar72._8_4_ = auVar71._8_4_ << 0x1f;
            auVar72._12_4_ = auVar71._12_4_ << 0x1f;
            uVar47 = movmskps(iVar51,auVar72);
            if ((uVar47 & 1) == 0) {
              auVar129 = local_f00;
              auVar87 = local_fd0;
              auVar88 = local_e30;
              auVar98 = local_f90;
              auVar99 = local_df0;
              auVar71 = local_e00;
              if ((uVar47 & 2) == 0) goto LAB_140a83342;
LAB_140a82b8f:
              local_10a0._0_8_ = local_10a0._0_8_ & 0xffffffffffff00ff | 0x100;
            }
            else {
              local_10a0._8_8_ = local_10a0._8_8_;
              local_10a0._0_8_ = local_10a0._0_8_ & 0xffffffffffffff00 | 1;
              auVar129 = local_11b0;
              auVar87 = local_1120;
              auVar88 = local_1190;
              auVar98 = local_11d0;
              auVar99 = local_11e0;
              auVar71 = auVar177;
              if ((uVar47 & 2) != 0) goto LAB_140a82b8f;
LAB_140a83342:
              auVar177 = blendpd(local_e00,auVar71,1);
              local_11e0 = blendpd(local_df0,auVar99,1);
              local_1190 = blendpd(local_e30,auVar88,1);
              local_11d0 = blendpd(local_f90,auVar98,1);
              local_11b0 = blendpd(local_f00,auVar129,1);
              local_1120 = blendpd(local_fd0,auVar87,1);
            }
            bVar67 = (uVar47 & 4) != 0;
            auVar100 = local_1000;
            if (bVar67) {
              auVar100 = auVar166;
            }
            cVar57 = (char)((char)uVar47 << 4) >> 4;
            auVar105 = local_1050;
            auVar106 = local_ff0;
            auVar107 = local_10b0;
            auVar108 = local_1010;
            auVar113 = local_1100;
            if (bVar67) {
              local_10a0._0_8_ = local_10a0._0_8_ & 0xffffffffff00ffff | 0x10000;
              auVar105 = local_11f0;
              auVar106 = local_11c0;
              auVar107 = local_11a0;
              auVar108 = local_1180;
              auVar113 = local_1080;
            }
            if (-1 < cVar57) {
              auVar166 = blendpd(local_1000,auVar100,1);
              local_11c0 = blendpd(local_ff0,auVar106,1);
              local_1180 = blendpd(local_1010,auVar108,1);
              local_11f0 = blendpd(local_1050,auVar105,1);
              local_11a0 = blendpd(local_10b0,auVar107,1);
              local_1080 = blendpd(local_1100,auVar113,1);
            }
            if (cVar57 < '\0') {
              local_10a0._0_8_ = local_10a0._0_8_ & 0xffffffff00ffffff | 0x1000000;
            }
            local_e00 = blendpd(auVar177,auVar71,1);
            local_1000 = blendpd(auVar166,auVar100,1);
            local_df0 = blendpd(local_11e0,auVar99,1);
            local_ff0 = blendpd(local_11c0,auVar106,1);
            local_e30 = blendpd(local_1190,auVar88,1);
            local_1010 = blendpd(local_1180,auVar108,1);
            local_f90 = blendpd(local_11d0,auVar98,1);
            local_1050 = blendpd(local_11f0,auVar105,1);
            local_f00 = blendpd(local_11b0,auVar129,1);
            local_10b0 = blendpd(local_11a0,auVar107,1);
            local_fd0 = blendpd(local_1120,auVar87,1);
            local_1100 = blendpd(local_1080,auVar113,1);
          }
        }
        else {
          uVar47 = movmskps(0x260,auVar71);
          auVar71 = minpd(local_10f0,auVar177);
          if ((uVar47 & 1) == 0) {
            auVar87 = local_e00;
            if ((uVar47 & 2) == 0) goto LAB_140a8318f;
LAB_140a8271d:
            auVar88 = minpd(auVar84,auVar166);
          }
          else {
            auVar87 = auVar71;
            if ((uVar47 & 2) != 0) goto LAB_140a8271d;
LAB_140a8318f:
            auVar71 = blendpd(local_e00,auVar87,1);
            auVar88 = minpd(auVar84,auVar166);
          }
          if ((uVar47 & 4) != 0) {
            local_1000 = blendpd(local_1000,auVar88,1);
          }
          bVar43 = (char)((char)uVar47 << 4) >> 4;
          if ((char)bVar43 < '\0') {
            local_1000 = blendpd(local_1000,auVar88,2);
          }
          auVar88 = minpd(local_10e0,local_11e0);
          if ((bVar43 & 1) == 0) {
            local_1140 = local_df0;
            if ((bVar43 & 2) == 0) goto LAB_140a831c1;
LAB_140a82798:
            auVar98 = minpd(local_fa0,local_11c0);
          }
          else {
            local_1140 = auVar88;
            if ((bVar43 & 2) != 0) goto LAB_140a82798;
LAB_140a831c1:
            auVar88 = blendpd(local_df0,local_1140,1);
            auVar98 = minpd(local_fa0,local_11c0);
          }
          if ((bVar43 & 4) != 0) {
            local_ff0 = blendpd(local_ff0,auVar98,1);
          }
          if ((char)bVar43 < '\0') {
            local_ff0 = blendpd(local_ff0,auVar98,2);
          }
          auVar98 = minpd(local_10d0,local_1190);
          if ((bVar43 & 1) == 0) {
            local_1130 = local_e30;
            if ((bVar43 & 2) == 0) goto LAB_140a83201;
LAB_140a82810:
            auVar99 = minpd(local_fb0,local_1180);
          }
          else {
            local_1130 = auVar98;
            if ((bVar43 & 2) != 0) goto LAB_140a82810;
LAB_140a83201:
            auVar98 = blendpd(local_e30,local_1130,1);
            auVar99 = minpd(local_fb0,local_1180);
          }
          if ((bVar43 & 4) != 0) {
            local_1010 = blendpd(local_1010,auVar99,1);
          }
          if ((char)bVar43 < '\0') {
            local_1010 = blendpd(local_1010,auVar99,2);
          }
          auVar99 = maxpd(local_10c0,local_11d0);
          if ((bVar43 & 1) == 0) {
            auVar100 = local_f90;
            if ((bVar43 & 2) == 0) goto LAB_140a8323a;
LAB_140a82887:
            auVar105 = maxpd(local_fe0,local_11f0);
          }
          else {
            auVar100 = auVar99;
            if ((bVar43 & 2) != 0) goto LAB_140a82887;
LAB_140a8323a:
            auVar99 = blendpd(local_f90,auVar100,1);
            auVar105 = maxpd(local_fe0,local_11f0);
          }
          if ((bVar43 & 4) != 0) {
            local_1050 = blendpd(local_1050,auVar105,1);
          }
          if ((char)bVar43 < '\0') {
            local_1050 = blendpd(local_1050,auVar105,2);
          }
          auVar105 = maxpd(local_1060,local_11b0);
          if ((bVar43 & 1) == 0) {
            auVar106 = local_f00;
            if ((bVar43 & 2) == 0) goto LAB_140a83275;
LAB_140a828f4:
            auVar107 = maxpd(local_1030,local_11a0);
          }
          else {
            auVar106 = auVar105;
            if ((bVar43 & 2) != 0) goto LAB_140a828f4;
LAB_140a83275:
            auVar105 = blendpd(local_f00,auVar106,1);
            auVar107 = maxpd(local_1030,local_11a0);
          }
          if ((bVar43 & 4) != 0) {
            local_10b0 = blendpd(local_10b0,auVar107,1);
          }
          if ((char)bVar43 < '\0') {
            local_10b0 = blendpd(local_10b0,auVar107,2);
          }
          auVar107 = maxpd(auVar97,local_1120);
          if ((bVar43 & 1) == 0) {
            auVar108 = local_fd0;
            if ((bVar43 & 2) == 0) goto LAB_140a832a9;
LAB_140a82965:
            auVar113 = maxpd(local_1020,local_1080);
          }
          else {
            auVar108 = auVar107;
            if ((bVar43 & 2) != 0) goto LAB_140a82965;
LAB_140a832a9:
            auVar107 = blendpd(local_fd0,auVar108,1);
            auVar113 = maxpd(local_1020,local_1080);
          }
          if ((bVar43 & 4) != 0) {
            local_1100 = blendpd(local_1100,auVar113,1);
          }
          if ((char)bVar43 < '\0') {
            local_1100 = blendpd(local_1100,auVar113,2);
          }
          auVar113 = local_10a0;
          if ((bVar43 & 1) != 0) {
            auVar113 = auVar89;
          }
          auVar112 = pblendvb(auVar113,local_10a0,___xmm_000000000000000000000000ffffff00);
          auVar113 = auVar112;
          if ((bVar43 & 2) != 0) {
            auVar113 = auVar89;
          }
          auVar112 = pblendvb(auVar113,auVar112,___xmm_000000000000000000000000ffff00ff);
          auVar113 = auVar112;
          if ((bVar43 & 4) != 0) {
            auVar113 = auVar89;
          }
          auVar112 = pblendvb(auVar113,auVar112,___xmm_000000000000000000000000ff00ffff);
          auVar113 = auVar89;
          if (-1 < (char)bVar43) {
            auVar113 = auVar112;
          }
          local_e00 = blendpd(auVar71,auVar87,1);
          local_df0 = blendpd(auVar88,local_1140,1);
          local_e30 = blendpd(auVar98,local_1130,1);
          local_f90 = blendpd(auVar99,auVar100,1);
          local_f00 = blendpd(auVar105,auVar106,1);
          local_fd0 = blendpd(auVar107,auVar108,1);
          local_10a0 = pblendvb(auVar113,auVar112,___xmm_00000000000000000000000000ffffff);
          uVar47 = CONCAT31((int3)((uint)iVar46 >> 8),bVar61) & 0xffffff0f;
          auVar71 = ___xmm_00000000000000000000000000ffffff;
          if ((char)uVar47 != (char)iVar51) goto LAB_140a82b0a;
        }
        bVar67 = (bVar61 & 1) != 0;
        auVar71 = local_10f0;
        if (bVar67) {
          auVar71 = local_e00;
        }
        local_11f0 = local_1060;
        auVar129 = auVar89;
        auVar87 = local_10e0;
        auVar88 = local_10d0;
        auVar98 = local_10c0;
        local_11d0 = auVar97;
        if (bVar67) {
          local_11d0 = local_fd0;
          auVar129 = local_10a0;
          auVar87 = local_df0;
          auVar88 = local_e30;
          auVar98 = local_f90;
          local_11f0 = local_f00;
        }
        bVar67 = (bVar61 & 2) == 0;
        auVar99 = local_fd0;
        auVar100 = local_e00;
        auVar105 = local_df0;
        auVar106 = local_e30;
        auVar107 = local_f90;
        auVar108 = local_f00;
        if (bVar67) {
          auVar100 = blendpd(local_10f0,auVar71,1);
          auVar105 = blendpd(local_10e0,auVar87,1);
          auVar106 = blendpd(local_10d0,auVar88,1);
          auVar107 = blendpd(local_10c0,auVar98,1);
          auVar108 = blendpd(local_1060,local_11f0,1);
          auVar99 = blendpd(auVar97,local_11d0,1);
        }
        local_1060 = auVar108;
        local_10c0 = auVar107;
        local_10d0 = auVar106;
        local_10e0 = auVar105;
        local_10f0 = auVar100;
        auVar89 = pblendvb(auVar129,auVar89,___xmm_000000000000000000000000ffffff00);
        auVar97 = auVar89;
        if (!bVar67) {
          auVar97 = local_10a0;
        }
        if ((bVar61 & 4) == 0) {
          auVar108 = pblendvb(auVar97,auVar89,___xmm_000000000000000000000000ffff00ff);
          auVar89 = auVar108;
          auVar129 = local_fa0;
          auVar100 = local_fb0;
          auVar105 = local_fe0;
          auVar106 = local_1030;
          auVar107 = local_1020;
          auVar97 = auVar84;
          if (-1 < (char)bVar61) goto LAB_140a830ae;
LAB_140a82fcc:
          auVar84 = local_1000;
          if (-1 < (char)bVar61) goto LAB_140a830d1;
LAB_140a82fe5:
          auVar113 = local_ff0;
          if (-1 < (char)bVar61) goto LAB_140a830f0;
LAB_140a82ff4:
          auVar112 = local_1010;
          if (-1 < (char)bVar61) goto LAB_140a8310e;
LAB_140a83002:
          auVar114 = local_1050;
          if (-1 < (char)bVar61) goto LAB_140a8312c;
LAB_140a83011:
          auVar115 = local_10b0;
          if (-1 < (char)bVar61) goto LAB_140a8314b;
LAB_140a83020:
          auVar89 = pblendvb(auVar89,auVar108,___xmm_000000000000000000000000ff00ffff);
          auVar121 = local_1100;
        }
        else {
          auVar108 = pblendvb(auVar97,auVar89,___xmm_000000000000000000000000ffff00ff);
          auVar89 = local_10a0;
          auVar129 = local_ff0;
          auVar100 = local_1010;
          auVar105 = local_1050;
          auVar106 = local_10b0;
          auVar107 = local_1100;
          auVar97 = local_1000;
          if ((char)bVar61 < '\0') goto LAB_140a82fcc;
LAB_140a830ae:
          auVar84 = pblendw(auVar84,auVar97,0xf);
          if ((char)bVar61 < '\0') goto LAB_140a82fe5;
LAB_140a830d1:
          auVar113 = blendps(local_fa0,auVar129,3);
          if ((char)bVar61 < '\0') goto LAB_140a82ff4;
LAB_140a830f0:
          auVar112 = blendps(local_fb0,auVar100,3);
          if ((char)bVar61 < '\0') goto LAB_140a83002;
LAB_140a8310e:
          auVar114 = blendps(local_fe0,auVar105,3);
          if ((char)bVar61 < '\0') goto LAB_140a83011;
LAB_140a8312c:
          auVar115 = pblendw(local_1030,auVar106,0xf);
          if ((char)bVar61 < '\0') goto LAB_140a83020;
LAB_140a8314b:
          auVar121 = pblendw(local_1020,auVar107,0xf);
          auVar89 = pblendvb(auVar89,auVar108,___xmm_000000000000000000000000ff00ffff);
        }
        auVar108 = local_10a0;
        if (-1 < (char)bVar61) {
          auVar108 = auVar89;
        }
        auVar89 = pblendvb(auVar108,auVar89,___xmm_00000000000000000000000000ffffff);
        local_10f0 = blendpd(local_10f0,auVar71,1);
        auVar84 = pblendw(auVar84,auVar97,0xf);
        local_10e0 = blendps(local_10e0,auVar87,3);
        local_fa0 = blendps(auVar113,auVar129,3);
        local_10d0 = blendps(local_10d0,auVar88,3);
        local_fb0 = blendps(auVar112,auVar100,3);
        local_10c0 = blendps(local_10c0,auVar98,3);
        local_fe0 = blendps(auVar114,auVar105,3);
        auVar71 = pblendw(local_1060,local_11f0,0xf);
        local_1030 = pblendw(auVar115,auVar106,0xf);
        auVar97 = blendpd(auVar99,local_11d0,1);
        in_XMM5 = pblendw(auVar121,auVar107,0xf);
        local_1060 = auVar71;
        local_1020 = in_XMM5;
      }
      uVar48 = uVar48 + 4;
    } while ((int)uVar48 < (int)uVar59);
  }
  if ((int)param_6 <= (int)uVar48) goto LAB_140a88d11;
  auVar147._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar48) < (int)param_6);
  auVar147._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar48) < (int)param_6);
  auVar147._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar48) < (int)param_6);
  auVar147._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar48) < (int)param_6);
  auVar73._4_4_ = uVar48 * 7;
  auVar73._0_4_ = uVar48 * 7;
  auVar73._8_4_ = uVar48 * 7;
  auVar73._12_4_ = uVar48 * 7;
  auVar73 = auVar73 & auVar147;
  lVar60 = param_3 + (longlong)auVar73._0_4_ * 8;
  lVar64 = param_3 + (longlong)auVar73._4_4_ * 8;
  lVar65 = param_3 + (longlong)auVar73._8_4_ * 8;
  lVar66 = param_3 + (longlong)auVar73._12_4_ * 8;
  auVar71 = ___xmm_000000d8000000a00000006800000030 & auVar147;
  bVar61 = *(byte *)((ulonglong)auVar71._0_4_ + lVar60);
  uVar59 = movmskps((uint)bVar61,auVar147);
  if ((~(byte)uVar59 & 9) == 0) {
    in_XMM5 = *(undefined1 (*) [16])((longlong)param_1 + (longlong)(int)(uVar48 << 2));
  }
  else {
    puVar16 = (uint *)((longlong)param_1 + (longlong)(int)(uVar48 << 2));
    if ((uVar59 & 1) != 0) {
      in_XMM5 = ZEXT416(*puVar16);
    }
    if ((uVar59 & 2) != 0) {
      in_XMM5._0_8_ = in_XMM5._0_8_ & 0xffffffff | (ulonglong)puVar16[1] << 0x20;
    }
    if ((uVar59 & 4) != 0) {
      in_XMM5._8_8_ = in_XMM5._8_8_ & 0xffffffff00000000 | (ulonglong)puVar16[2];
    }
    param_1 = (uint *)(ulonglong)uVar59;
    if ((uVar59 & 8) != 0) {
      in_XMM5._8_8_ = in_XMM5._8_8_ & 0xffffffff | (ulonglong)puVar16[3] << 0x20;
      param_1 = puVar16;
    }
  }
  auVar90._8_4_ = 0xffffffff;
  auVar90._0_8_ = 0xffffffffffffffff;
  auVar90._12_4_ = 0xffffffff;
  auVar122._0_4_ = -(uint)(in_XMM5._0_4_ == -1);
  auVar122._4_4_ = -(uint)(in_XMM5._4_4_ == -1);
  auVar122._8_4_ = -(uint)(in_XMM5._8_4_ == -1);
  auVar122._12_4_ = -(uint)(in_XMM5._12_4_ == -1);
  auVar74[0] = -(bVar61 == 0);
  auVar74[1] = -(*(char *)((ulonglong)auVar71._4_4_ + lVar64) == '\0');
  auVar74[2] = -(*(char *)((ulonglong)auVar71._8_4_ + lVar65) == '\0');
  auVar74[3] = -(*(char *)((ulonglong)auVar71._12_4_ + lVar66) == '\0');
  auVar74[4] = 0xff;
  auVar74[5] = 0xff;
  auVar74[6] = 0xff;
  auVar74[7] = 0xff;
  auVar74[8] = 0xff;
  auVar74[9] = 0xff;
  auVar74[10] = 0xff;
  auVar74[0xb] = 0xff;
  auVar74[0xc] = 0xff;
  auVar74[0xd] = 0xff;
  auVar74[0xe] = 0xff;
  auVar74[0xf] = 0xff;
  auVar71 = pmovsxbd(auVar74 ^ auVar90,auVar74 ^ auVar90);
  auVar129 = ~auVar122 & auVar71 & auVar147;
  iVar46 = movmskps((int)param_1,auVar129);
  if (iVar46 == 0) goto LAB_140a88d11;
  auVar116._0_4_ = ___xmm_000000a8000000700000003800000000 & auVar147._0_4_;
  auVar116._4_4_ = _UNK_151287264 & auVar147._4_4_;
  auVar116._8_4_ = _UNK_151287268 & auVar147._8_4_;
  auVar116._12_4_ = _UNK_15128726c & auVar147._12_4_;
  auVar98 = ___xmm_000000b0000000780000004000000008 & auVar147;
  auVar88 = ___xmm_000000b8000000800000004800000010 & auVar147;
  auVar87 = ___xmm_000000c0000000880000005000000018 & auVar147;
  auVar71 = ___xmm_000000c8000000900000005800000020 & auVar147;
  auVar147 = auVar147 & ___xmm_000000d0000000980000006000000028;
  lVar55 = extractps(auVar116,2);
  dVar69 = *(double *)(param_3 + (longlong)auVar73._0_4_ * 8);
  dVar81 = *(double *)(lVar55 + lVar65);
  lVar58 = extractps(auVar116,1);
  dVar82 = *(double *)((ulonglong)auVar98._8_4_ + lVar65);
  lVar55 = extractps(auVar116,3);
  dVar94 = *(double *)((ulonglong)auVar88._8_4_ + lVar65);
  dVar104 = *(double *)((ulonglong)auVar87._8_4_ + lVar65);
  dVar110 = *(double *)((ulonglong)auVar71._8_4_ + lVar65);
  dVar96 = *(double *)((ulonglong)auVar147._8_4_ + lVar65);
  dVar103 = *(double *)((ulonglong)auVar98._0_4_ + lVar60);
  dVar120 = *(double *)((ulonglong)auVar88._0_4_ + lVar60);
  dVar125 = *(double *)((ulonglong)auVar87._0_4_ + lVar60);
  dVar133 = *(double *)((ulonglong)auVar71._0_4_ + lVar60);
  dVar139 = *(double *)((ulonglong)auVar147._0_4_ + lVar60);
  dVar95 = *(double *)(lVar58 + lVar64);
  dVar102 = *(double *)(lVar55 + lVar66);
  dVar127 = *(double *)((ulonglong)auVar98._12_4_ + lVar66);
  dVar132 = *(double *)((ulonglong)auVar98._4_4_ + lVar64);
  dVar140 = *(double *)((ulonglong)auVar88._12_4_ + lVar66);
  dVar143 = *(double *)((ulonglong)auVar88._4_4_ + lVar64);
  dVar144 = *(double *)((ulonglong)auVar87._12_4_ + lVar66);
  dVar149 = *(double *)((ulonglong)auVar87._4_4_ + lVar64);
  dVar151 = *(double *)((ulonglong)auVar71._12_4_ + lVar66);
  dVar156 = *(double *)((ulonglong)auVar71._4_4_ + lVar64);
  dVar158 = *(double *)((ulonglong)auVar147._12_4_ + lVar66);
  dVar162 = *(double *)((ulonglong)auVar147._4_4_ + lVar64);
  auVar137._0_4_ = uVar48 << 7;
  auVar137._4_4_ = uVar48 << 7;
  auVar137._8_4_ = uVar48 << 7;
  auVar137._12_4_ = uVar48 << 7;
  auVar137 = auVar137 & auVar129;
  auVar75._0_4_ = ___xmm_00000180000001000000008000000000 & auVar129._0_4_;
  auVar75._4_4_ = _UNK_151287ed4 & auVar129._4_4_;
  auVar75._8_4_ = _UNK_151287ed8 & auVar129._8_4_;
  auVar75._12_4_ = _UNK_151287edc & auVar129._12_4_;
  lVar60 = param_2 + auVar137._0_4_;
  lVar63 = auVar137._4_4_ + param_2;
  lVar65 = extractps(auVar75,1);
  lVar64 = auVar137._8_4_ + param_2;
  lVar58 = extractps(auVar75,2);
  lVar55 = extractps(auVar75,3);
  lVar66 = auVar137._12_4_ + param_2;
  auVar71 = ___xmm_00000188000001080000008800000008 & auVar129;
  auVar87 = ___xmm_00000190000001100000009000000010 & auVar129;
  auVar88 = ___xmm_00000198000001180000009800000018 & auVar129;
  auVar98 = ___xmm_000001a000000120000000a000000020 & auVar129;
  auVar99 = ___xmm_000001a800000128000000a800000028 & auVar129;
  auVar100 = ___xmm_000001b000000130000000b000000030 & auVar129;
  auVar105 = ___xmm_000001b800000138000000b800000038 & auVar129;
  auVar106 = ___xmm_000001c000000140000000c000000040 & auVar129;
  auVar107 = ___xmm_000001c800000148000000c800000048 & auVar129;
  auVar108 = ___xmm_000001d000000150000000d000000050 & auVar129;
  auVar113 = ___xmm_000001d800000158000000d800000058 & auVar129;
  auVar112 = ___xmm_000001e000000160000000e000000060 & auVar129;
  auVar114 = ___xmm_000001e800000168000000e800000068 & auVar129;
  auVar115 = ___xmm_000001f000000170000000f000000070 & auVar129;
  auVar121 = ___xmm_000001f800000178000000f800000078 & auVar129;
  uVar59 = auVar121._4_4_;
  local_900[2] = (double)*(undefined8 *)(lVar58 + lVar64);
  local_900[3] = (double)*(undefined8 *)(lVar55 + lVar66);
  local_900[0] = *(double *)(param_2 + auVar137._0_4_);
  local_900[1] = (double)*(undefined8 *)(lVar65 + lVar63);
  local_900[6] = (double)*(undefined8 *)((ulonglong)auVar71._8_4_ + lVar64);
  uStack_8c8 = *(undefined8 *)((ulonglong)auVar71._12_4_ + lVar66);
  local_900[4] = (double)*(undefined8 *)((ulonglong)auVar71._0_4_ + lVar60);
  local_900[5] = (double)*(undefined8 *)((ulonglong)auVar71._4_4_ + lVar63);
  local_8b0 = *(undefined8 *)((ulonglong)auVar87._8_4_ + lVar64);
  uStack_8a8 = *(undefined8 *)((ulonglong)auVar87._12_4_ + lVar66);
  local_8c0 = *(undefined8 *)((ulonglong)auVar87._0_4_ + lVar60);
  uStack_8b8 = *(undefined8 *)((ulonglong)auVar87._4_4_ + lVar63);
  local_890 = *(undefined8 *)((ulonglong)auVar88._8_4_ + lVar64);
  uStack_888 = *(undefined8 *)((ulonglong)auVar88._12_4_ + lVar66);
  local_8a0 = *(undefined8 *)((ulonglong)auVar88._0_4_ + lVar60);
  uStack_898 = *(undefined8 *)((ulonglong)auVar88._4_4_ + lVar63);
  local_870 = *(undefined8 *)((ulonglong)auVar98._8_4_ + lVar64);
  uStack_868 = *(undefined8 *)((ulonglong)auVar98._12_4_ + lVar66);
  local_880 = *(undefined8 *)((ulonglong)auVar98._0_4_ + lVar60);
  uStack_878 = *(undefined8 *)((ulonglong)auVar98._4_4_ + lVar63);
  local_850 = *(undefined8 *)((ulonglong)auVar99._8_4_ + lVar64);
  uStack_848 = *(undefined8 *)((ulonglong)auVar99._12_4_ + lVar66);
  local_860 = *(undefined8 *)((ulonglong)auVar99._0_4_ + lVar60);
  uStack_858 = *(undefined8 *)((ulonglong)auVar99._4_4_ + lVar63);
  local_830 = *(undefined8 *)((ulonglong)auVar100._8_4_ + lVar64);
  uStack_828 = *(undefined8 *)((ulonglong)auVar100._12_4_ + lVar66);
  local_840 = *(undefined8 *)((ulonglong)auVar100._0_4_ + lVar60);
  uStack_838 = *(undefined8 *)((ulonglong)auVar100._4_4_ + lVar63);
  local_810 = *(undefined8 *)((ulonglong)auVar105._8_4_ + lVar64);
  uStack_808 = *(undefined8 *)((ulonglong)auVar105._12_4_ + lVar66);
  local_820 = *(undefined8 *)((ulonglong)auVar105._0_4_ + lVar60);
  uStack_818 = *(undefined8 *)((ulonglong)auVar105._4_4_ + lVar63);
  local_7f0 = *(undefined8 *)((ulonglong)auVar106._8_4_ + lVar64);
  uStack_7e8 = *(undefined8 *)((ulonglong)auVar106._12_4_ + lVar66);
  local_800 = *(undefined8 *)((ulonglong)auVar106._0_4_ + lVar60);
  uStack_7f8 = *(undefined8 *)((ulonglong)auVar106._4_4_ + lVar63);
  local_7d0 = *(undefined8 *)((ulonglong)auVar107._8_4_ + lVar64);
  uStack_7c8 = *(undefined8 *)((ulonglong)auVar107._12_4_ + lVar66);
  local_7e0 = *(undefined8 *)((ulonglong)auVar107._0_4_ + lVar60);
  uStack_7d8 = *(undefined8 *)((ulonglong)auVar107._4_4_ + lVar63);
  local_7b0 = *(undefined8 *)((ulonglong)auVar108._8_4_ + lVar64);
  uStack_7a8 = *(undefined8 *)((ulonglong)auVar108._12_4_ + lVar66);
  local_7c0 = *(undefined8 *)((ulonglong)auVar108._0_4_ + lVar60);
  uStack_7b8 = *(undefined8 *)((ulonglong)auVar108._4_4_ + lVar63);
  local_790 = *(undefined8 *)((ulonglong)auVar113._8_4_ + lVar64);
  uStack_788 = *(undefined8 *)((ulonglong)auVar113._12_4_ + lVar66);
  local_7a0 = *(undefined8 *)((ulonglong)auVar113._0_4_ + lVar60);
  uStack_798 = *(undefined8 *)((ulonglong)auVar113._4_4_ + lVar63);
  local_770 = *(undefined8 *)((ulonglong)auVar112._8_4_ + lVar64);
  uStack_768 = *(undefined8 *)((ulonglong)auVar112._12_4_ + lVar66);
  local_780 = *(undefined8 *)((ulonglong)auVar112._0_4_ + lVar60);
  uStack_778 = *(undefined8 *)((ulonglong)auVar112._4_4_ + lVar63);
  local_760[2] = (double)*(undefined8 *)((ulonglong)auVar114._8_4_ + lVar64);
  local_760[3] = (double)*(undefined8 *)((ulonglong)auVar114._12_4_ + lVar66);
  local_760[0] = *(double *)((ulonglong)auVar114._0_4_ + lVar60);
  local_760[1] = (double)*(undefined8 *)((ulonglong)auVar114._4_4_ + lVar63);
  bVar61 = (char)((char)iVar46 << 4) >> 4;
  local_760[6] = (double)*(undefined8 *)((ulonglong)auVar115._8_4_ + lVar64);
  local_760[7] = (double)*(undefined8 *)((ulonglong)auVar115._12_4_ + lVar66);
  local_760[4] = (double)*(undefined8 *)((ulonglong)auVar115._0_4_ + lVar60);
  local_760[5] = (double)*(undefined8 *)((ulonglong)auVar115._4_4_ + lVar63);
  local_760[10] = (double)*(undefined8 *)((ulonglong)auVar121._8_4_ + lVar64);
  local_760[0xb] = (double)*(undefined8 *)((ulonglong)auVar121._12_4_ + lVar66);
  local_760[8] = (double)*(undefined8 *)((ulonglong)auVar121._0_4_ + lVar60);
  local_760[9] = (double)*(undefined8 *)((ulonglong)uVar59 + lVar63);
  dVar68 = *param_4;
  dVar80 = *param_4;
  dVar111 = param_4[4];
  dVar118 = param_4[4];
  dVar119 = param_4[8];
  dVar124 = param_4[8];
  dVar126 = param_4[0xc];
  dVar131 = param_4[0xc];
  lVar60 = 0x60;
  dVar155 = param_4[1];
  dVar150 = param_4[1];
  dVar157 = param_4[5];
  dVar161 = param_4[5];
  dVar163 = param_4[9];
  dVar174 = param_4[9];
  dVar181 = param_4[0xd];
  dVar178 = param_4[0xd];
  dVar182 = param_4[2];
  dVar186 = param_4[2];
  dVar3 = param_4[6];
  dVar2 = param_4[6];
  dVar5 = param_4[10];
  dVar4 = param_4[10];
  dVar6 = param_4[0xe];
  dVar7 = param_4[0xe];
  dVar8 = param_4[3];
  dVar9 = param_4[3];
  dVar11 = param_4[7];
  dVar10 = param_4[7];
  dVar12 = param_4[0xb];
  dVar13 = param_4[0xb];
  dVar15 = param_4[0xf];
  dVar14 = param_4[0xf];
  do {
    dVar27 = *(double *)((longlong)adStack_960 + lVar60);
    dVar28 = *(double *)((longlong)adStack_960 + lVar60 + 8);
    dVar29 = *(double *)((longlong)adStack_960 + lVar60 + 0x10);
    dVar30 = *(double *)(local_940 + lVar60 + -8);
    dVar31 = *(double *)(local_940 + lVar60);
    dVar32 = *(double *)((longlong)local_938 + lVar60);
    dVar33 = *(double *)((longlong)local_938 + lVar60 + 8);
    dVar34 = *(double *)((longlong)local_938 + lVar60 + 0x10);
    dVar35 = *(double *)(local_908 + lVar60 + -8);
    dVar36 = *(double *)(local_908 + lVar60);
    dVar37 = *(double *)((longlong)local_938 + lVar60 + 0x18);
    dVar38 = *(double *)((longlong)local_938 + lVar60 + 0x20);
    dVar39 = *(double *)((longlong)local_900 + lVar60);
    dVar40 = *(double *)((longlong)local_900 + lVar60 + 8);
    dVar41 = *(double *)((longlong)local_900 + lVar60 + 0x10);
    dVar42 = *(double *)((longlong)local_900 + lVar60 + 0x18);
    *(double *)((longlong)local_d40 + lVar60 + 0x10) =
         dVar41 * dVar126 + dVar35 * dVar119 + dVar33 * dVar111 + dVar29 * dVar68 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x18) =
         dVar42 * dVar131 + dVar36 * dVar124 + dVar34 * dVar118 + dVar30 * dVar80 + 0.0;
    *(double *)((longlong)local_d40 + lVar60) =
         dVar39 * dVar126 + dVar37 * dVar119 + dVar31 * dVar111 + dVar27 * dVar68 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 8) =
         dVar40 * dVar131 + dVar38 * dVar124 + dVar32 * dVar118 + dVar28 * dVar80 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x30) =
         dVar41 * dVar181 + dVar35 * dVar163 + dVar33 * dVar157 + dVar29 * dVar155 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x38) =
         dVar42 * dVar178 + dVar36 * dVar174 + dVar34 * dVar161 + dVar30 * dVar150 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x20) =
         dVar39 * dVar181 + dVar37 * dVar163 + dVar31 * dVar157 + dVar27 * dVar155 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x28) =
         dVar40 * dVar178 + dVar38 * dVar174 + dVar32 * dVar161 + dVar28 * dVar150 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x50) =
         dVar41 * dVar6 + dVar35 * dVar5 + dVar33 * dVar3 + dVar29 * dVar182 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x58) =
         dVar42 * dVar7 + dVar36 * dVar4 + dVar34 * dVar2 + dVar30 * dVar186 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x40) =
         dVar39 * dVar6 + dVar37 * dVar5 + dVar31 * dVar3 + dVar27 * dVar182 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x48) =
         dVar40 * dVar7 + dVar38 * dVar4 + dVar32 * dVar2 + dVar28 * dVar186 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x70) =
         dVar41 * dVar15 + dVar35 * dVar12 + dVar33 * dVar11 + dVar29 * dVar8 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x78) =
         dVar42 * dVar14 + dVar36 * dVar13 + dVar34 * dVar10 + dVar30 * dVar9 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x60) =
         dVar39 * dVar15 + dVar37 * dVar12 + dVar31 * dVar11 + dVar27 * dVar8 + 0.0;
    *(double *)((longlong)local_d40 + lVar60 + 0x68) =
         dVar40 * dVar14 + dVar38 * dVar13 + dVar32 * dVar10 + dVar28 * dVar9 + 0.0;
    lVar60 = lVar60 + 0x80;
  } while (lVar60 != 0x260);
  local_11e0._8_8_ = dStack_c58;
  local_11e0._0_8_ = local_c60;
  dVar111 = (dVar69 + dVar125) * ___xmm_3fe00000000000003fe0000000000000;
  dVar118 = (dVar95 + dVar149) * _UNK_150689678;
  dVar119 = (dVar103 + dVar133) * ___xmm_3fe00000000000003fe0000000000000;
  dVar124 = (dVar132 + dVar156) * _UNK_150689678;
  dVar131 = (dVar81 + dVar104) * ___xmm_3fe00000000000003fe0000000000000;
  dVar155 = (dVar102 + dVar144) * _UNK_150689678;
  dVar68 = (dVar82 + dVar110) * ___xmm_3fe00000000000003fe0000000000000;
  dVar80 = (dVar127 + dVar151) * _UNK_150689678;
  dVar150 = (dVar94 + dVar96) * ___xmm_3fe00000000000003fe0000000000000;
  dVar157 = (dVar140 + dVar158) * _UNK_150689678;
  local_11b0._0_8_ = dVar150 * local_bd0 + dVar68 * local_c50 + dVar131 * local_d40[0xe];
  local_11b0._8_8_ = dVar157 * dStack_bc8 + dVar80 * dStack_c48 + dVar155 * local_d40[0xf];
  dVar161 = (dVar120 + dVar139) * ___xmm_3fe00000000000003fe0000000000000;
  dVar163 = (dVar143 + dVar162) * _UNK_150689678;
  local_1190._0_8_ = dVar161 * local_be0 + dVar119 * local_c60 + dVar111 * local_d40[0xc];
  local_1190._8_8_ = dVar163 * dStack_bd8 + dVar124 * dStack_c58 + dVar118 * local_d40[0xd];
  local_11c0._0_8_ = dVar150 * local_bb0 + dVar68 * local_c30 + dVar131 * local_d40[0x12];
  local_11c0._8_8_ = dVar157 * dStack_ba8 + dVar80 * dStack_c28 + dVar155 * dStack_ca8;
  dVar126 = (dVar104 - dVar81) * ___xmm_3fe00000000000003fe0000000000000;
  dVar102 = (dVar144 - dVar102) * _UNK_150689678;
  dVar69 = (dVar125 - dVar69) * ___xmm_3fe00000000000003fe0000000000000;
  dVar81 = (dVar149 - dVar95) * _UNK_150689678;
  dVar144 = (dVar110 - dVar82) * ___xmm_3fe00000000000003fe0000000000000;
  dVar149 = (dVar151 - dVar127) * _UNK_150689678;
  dVar82 = (dVar133 - dVar103) * ___xmm_3fe00000000000003fe0000000000000;
  dVar104 = (dVar156 - dVar132) * _UNK_150689678;
  dVar151 = (dVar139 - dVar120) * ___xmm_3fe00000000000003fe0000000000000;
  dVar143 = (dVar162 - dVar143) * _UNK_150689678;
  dVar120 = (dVar96 - dVar94) * ___xmm_3fe00000000000003fe0000000000000;
  dVar133 = (dVar158 - dVar140) * _UNK_150689678;
  local_11f0._8_8_ = dStack_ca8 * dVar102;
  local_11f0._0_8_ = local_d40[0x12] * dVar126;
  auVar117._8_8_ = _UNK_15061cc88;
  auVar117._0_8_ = __xmm_7fffffffffffffff7fffffffffffffff;
  local_11d0._0_8_ =
       (double)((ulonglong)(local_c50 * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_d40[0xe] * dVar126) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_11d0._8_8_ =
       (double)((ulonglong)(dStack_c48 * dVar149) & _UNK_15061cc88) +
       (double)((ulonglong)(local_d40[0xf] * dVar102) & _UNK_15061cc88);
  local_11a0._0_8_ =
       (double)((ulonglong)(local_c30 * dVar144) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_d40[0x12] * dVar126) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_11a0._8_8_ =
       (double)((ulonglong)(dStack_c28 * dVar149) & _UNK_15061cc88) +
       (double)((ulonglong)(dStack_ca8 * dVar102) & _UNK_15061cc88);
  auVar91._0_8_ = (double)local_11b0._0_8_ + local_b50;
  auVar91._8_8_ = (double)local_11b0._8_8_ + dStack_b48;
  dVar95 = (double)local_1190._0_8_ + local_b60;
  dVar127 = (double)local_1190._8_8_ + dStack_b58;
  dVar94 = (double)local_11c0._0_8_ + local_b30;
  dVar110 = (double)local_11c0._8_8_ + dStack_b28;
  local_10a0._0_8_ =
       (double)((ulonglong)(local_be0 * dVar151) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_c60 * dVar82) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_d40[0xc] * dVar69) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_10a0._8_8_ =
       (double)((ulonglong)(dStack_bd8 * dVar143) & _UNK_15061cc88) +
       (double)((ulonglong)(dStack_c58 * dVar104) & _UNK_15061cc88) +
       (double)((ulonglong)(local_d40[0xd] * dVar81) & _UNK_15061cc88);
  dVar125 = dVar161 * local_bc0 + dVar119 * local_c40 + dVar111 * local_d40[0x10] + local_b40;
  dVar139 = dVar163 * dStack_bb8 + dVar124 * dStack_c38 + dVar118 * local_d40[0x11] + dStack_b38;
  dVar96 = (double)((ulonglong)(local_bd0 * dVar120) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)local_11d0._0_8_;
  dVar103 = (double)((ulonglong)(dStack_bc8 * dVar133) & _UNK_15061cc88) + (double)local_11d0._8_8_;
  dVar132 = dVar150 * local_b90 + dVar68 * local_c10 + dVar131 * local_c90 + local_b10;
  dVar140 = dVar157 * dStack_b88 + dVar80 * dStack_c08 + dVar155 * dStack_c88 + dStack_b08;
  local_1160._0_8_ =
       (double)((ulonglong)(local_bc0 * dVar151) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_c40 * dVar82) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_d40[0x10] * dVar69) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_1160._8_8_ =
       (double)((ulonglong)(dStack_bb8 * dVar143) & _UNK_15061cc88) +
       (double)((ulonglong)(dStack_c38 * dVar104) & _UNK_15061cc88) +
       (double)((ulonglong)(local_d40[0x11] * dVar81) & _UNK_15061cc88);
  auVar167._0_8_ = dVar161 * local_ba0 + dVar119 * local_c20 + dVar111 * local_ca0 + local_b20;
  auVar167._8_8_ = dVar163 * dStack_b98 + dVar124 * dStack_c18 + dVar118 * dStack_c98 + dStack_b18;
  dVar156 = (double)((ulonglong)(local_bb0 * dVar120) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)local_11a0._0_8_;
  dVar158 = (double)((ulonglong)(dStack_ba8 * dVar133) & _UNK_15061cc88) + (double)local_11a0._8_8_;
  dVar82 = (double)((ulonglong)(dVar151 * local_ba0) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(dVar82 * local_c20) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(dVar69 * local_ca0) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar104 = (double)((ulonglong)(dVar143 * dStack_b98) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar104 * dStack_c18) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar81 * dStack_c98) & _UNK_15061cc88);
  dVar69 = (double)((ulonglong)(dVar120 * local_b90) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(dVar144 * local_c10) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(dVar126 * local_c90) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar81 = (double)((ulonglong)(dVar133 * dStack_b88) & _UNK_15061cc88) +
           (double)((ulonglong)(dVar149 * dStack_c08) & _UNK_15061cc88) +
           (double)((ulonglong)(dVar102 * dStack_c88) & _UNK_15061cc88);
  local_1150._8_8_ = dVar127 - (double)local_10a0._8_8_;
  local_1150._0_8_ = dVar95 - (double)local_10a0._0_8_;
  auVar169._0_8_ = auVar91._0_8_ - dVar96;
  auVar169._8_8_ = auVar91._8_8_ - dVar103;
  local_1140._8_8_ = dVar139 - (double)local_1160._8_8_;
  local_1140._0_8_ = dVar125 - (double)local_1160._0_8_;
  local_10a0._0_8_ = (double)local_10a0._0_8_ + dVar95;
  local_10a0._8_8_ = (double)local_10a0._8_8_ + dVar127;
  auVar109._8_8_ = local_10a0._8_8_;
  auVar109._0_8_ = local_10a0._0_8_;
  auVar170._0_8_ = dVar94 - dVar156;
  auVar170._8_8_ = dVar110 - dVar158;
  dVar96 = dVar96 + auVar91._0_8_;
  dVar103 = dVar103 + auVar91._8_8_;
  auVar123._8_8_ = dVar103;
  auVar123._0_8_ = dVar96;
  auVar168._0_8_ = auVar167._0_8_ - dVar82;
  auVar168._8_8_ = auVar167._8_8_ - dVar104;
  local_1160._0_8_ = (double)local_1160._0_8_ + dVar125;
  local_1160._8_8_ = (double)local_1160._8_8_ + dVar139;
  auVar138._0_8_ = dVar132 - dVar69;
  auVar138._8_8_ = dVar140 - dVar81;
  auVar172._0_8_ = dVar156 + dVar94;
  auVar172._8_8_ = dVar158 + dVar110;
  auVar92._0_8_ = dVar82 + auVar167._0_8_;
  auVar92._8_8_ = dVar104 + auVar167._8_8_;
  auVar154._0_8_ = dVar69 + dVar132;
  auVar154._8_8_ = dVar81 + dVar140;
  local_1090[0] = auVar89[0];
  local_1090[1] = auVar89[1];
  local_1090[2] = auVar89[2];
  local_1090[3] = auVar89[3];
  local_1090[4] = auVar89[4];
  local_1090[5] = auVar89[5];
  local_1090[6] = auVar89[6];
  local_1090[7] = auVar89[7];
  local_1090[8] = auVar89[8];
  cStack_1087 = auVar89[9];
  cStack_1086 = auVar89[10];
  cStack_1085 = auVar89[0xb];
  cStack_1084 = auVar89[0xc];
  cStack_1083 = auVar89[0xd];
  cStack_1082 = auVar89[0xe];
  cStack_1081 = auVar89[0xf];
  auVar148[0] = -(local_1090[0] == '\0');
  auVar148[1] = -(local_1090[1] == '\0');
  auVar148[2] = -(local_1090[2] == '\0');
  auVar148[3] = -(local_1090[3] == '\0');
  auVar148[4] = -(local_1090[4] == '\0');
  auVar148[5] = -(local_1090[5] == '\0');
  auVar148[6] = -(local_1090[6] == '\0');
  auVar148[7] = -(local_1090[7] == '\0');
  auVar148[8] = -(local_1090[8] == '\0');
  auVar148[9] = -(cStack_1087 == '\0');
  auVar148[10] = -(cStack_1086 == '\0');
  auVar148[0xb] = -(cStack_1085 == '\0');
  auVar148[0xc] = -(cStack_1084 == '\0');
  auVar148[0xd] = -(cStack_1083 == '\0');
  auVar148[0xe] = -(cStack_1082 == '\0');
  auVar148[0xf] = -(cStack_1081 == '\0');
  auVar76._8_4_ = 0xffffffff;
  auVar76._0_8_ = 0xffffffffffffffff;
  auVar76._12_4_ = 0xffffffff;
  auVar87 = pmovsxbd(auVar91,auVar76 ^ auVar148);
  auVar71 = auVar129 & auVar87;
  iVar46 = movmskps(0x260,auVar71);
  auVar88 = auVar154;
  auVar98 = auVar170;
  auVar99 = auVar138;
  if (iVar46 == 0) {
LAB_140a8884a:
    auVar171._8_8_ = auVar138._8_8_;
    auVar171._0_8_ = auVar138._0_8_;
    auVar101._8_8_ = dVar103;
    auVar101._0_8_ = dVar96;
    auVar71 = pmovsxbd(auVar71,auVar148);
    iVar46 = movmskps(iVar46,auVar129 & auVar71);
    if ((iVar46 != 0) && ((char)iVar46 != '\0')) {
      auVar71 = pmovzxbd(auVar71,auVar148);
      auVar77._0_4_ = auVar71._0_4_ << 0x1f;
      auVar77._4_4_ = auVar71._4_4_ << 0x1f;
      auVar77._8_4_ = auVar71._8_4_ << 0x1f;
      auVar77._12_4_ = auVar71._12_4_ << 0x1f;
      uVar59 = movmskps(uVar59,auVar77);
      if ((uVar59 & 1) == 0) {
        auVar129 = auVar167;
        auVar100 = auVar98;
        auVar185 = auVar87;
        local_10a0 = auVar88;
        local_1070 = auVar117;
        auVar71 = auVar99;
        if ((uVar59 & 2) == 0) goto LAB_140a894e2;
LAB_140a888e4:
        local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffffff00ff | 0x100;
      }
      else {
        local_1070._8_8_ = local_1160._8_8_;
        local_1070._0_8_ = local_1160._0_8_;
        auVar185._8_8_ = auVar92._8_8_;
        auVar185._0_8_ = auVar92._0_8_;
        local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffffffff00 | 1;
        auVar129 = auVar168;
        auVar100 = local_1140;
        auVar71 = local_1150;
        if ((uVar59 & 2) != 0) goto LAB_140a888e4;
LAB_140a894e2:
        local_1150 = blendpd(auVar99,auVar71,1);
        local_1140 = blendpd(auVar98,auVar100,1);
        auVar168 = blendpd(auVar167,auVar129,1);
        auVar109 = blendpd(auVar88,local_10a0,1);
        local_1160 = blendpd(auVar117,local_1070,1);
        auVar92 = blendpd(auVar87,auVar185,1);
      }
      bVar67 = (uVar59 & 4) != 0;
      auVar87 = local_11d0;
      if (bVar67) {
        auVar87 = auVar169;
      }
      cVar57 = (char)((char)uVar59 << 4) >> 4;
      auVar105 = local_1190;
      auVar106 = local_11e0;
      auVar88 = local_11a0;
      auVar107 = local_11b0;
      auVar108 = local_11c0;
      if (bVar67) {
        local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffffff00ffff | 0x10000;
        auVar105 = auVar154;
        auVar106 = auVar101;
        auVar88 = auVar170;
        auVar107 = auVar171;
        auVar108 = auVar172;
      }
      if (-1 < cVar57) {
        auVar169 = blendpd(local_11d0,auVar87,1);
        auVar170 = blendpd(local_11a0,auVar88,1);
        auVar171 = blendpd(local_11b0,auVar107,1);
        auVar101 = blendpd(local_11e0,auVar106,1);
        auVar172 = blendpd(local_11c0,auVar108,1);
        auVar154 = blendpd(local_1190,auVar105,1);
      }
      if (cVar57 < '\0') {
        local_11f0._0_8_ = local_11f0._0_8_ & 0xffffffff00ffffff | 0x1000000;
      }
      auVar99 = blendpd(local_1150,auVar71,1);
      local_11d0 = blendpd(auVar169,auVar87,1);
      auVar98 = blendpd(local_1140,auVar100,1);
      local_11a0 = blendpd(auVar170,auVar88,1);
      auVar167 = blendpd(auVar168,auVar129,1);
      local_11b0 = blendpd(auVar171,auVar107,1);
      auVar88 = blendpd(auVar109,local_10a0,1);
      local_11e0 = blendpd(auVar101,auVar106,1);
      auVar117 = blendpd(local_1160,local_1070,1);
      local_11c0 = blendpd(auVar172,auVar108,1);
      auVar87 = blendpd(auVar92,auVar185,1);
      local_1190 = blendpd(auVar154,auVar105,1);
    }
  }
  else {
    auVar71 = minpd(auVar84,auVar169);
    uVar59 = movmskps(uVar59,auVar87);
    bVar43 = (char)((char)uVar59 << 4) >> 4;
    if ((uVar59 & 4) != 0) {
      auVar87 = blendpd(auVar87,auVar71,1);
      local_11d0 = auVar87;
    }
    if ((char)bVar43 < '\0') {
      auVar87 = blendpd(local_11d0,auVar71,2);
      local_11d0 = auVar87;
    }
    uVar59 = (uint)bVar43;
    auVar71 = minpd(local_fa0,auVar170);
    if ((bVar43 & 4) != 0) {
      auVar87 = blendpd(auVar87,auVar71,1);
      local_11a0 = auVar87;
    }
    if ((char)bVar43 < '\0') {
      auVar87 = blendpd(local_11a0,auVar71,2);
      local_11a0 = auVar87;
    }
    auVar71 = minpd(local_fb0,auVar138);
    if ((bVar43 & 4) != 0) {
      auVar87 = blendpd(auVar87,auVar71,1);
      local_11b0 = auVar87;
    }
    if ((char)bVar43 < '\0') {
      auVar87 = blendpd(local_11b0,auVar71,2);
      local_11b0 = auVar87;
    }
    auVar71 = maxpd(local_fe0,auVar123);
    if ((bVar43 & 4) != 0) {
      auVar87 = blendpd(auVar87,auVar71,1);
      local_11e0 = auVar87;
    }
    if ((char)bVar43 < '\0') {
      auVar87 = blendpd(local_11e0,auVar71,2);
      local_11e0 = auVar87;
    }
    auVar71 = maxpd(local_1030,auVar172);
    if ((bVar43 & 4) != 0) {
      auVar87 = blendpd(auVar87,auVar71,1);
      local_11c0 = auVar87;
    }
    if ((char)bVar43 < '\0') {
      auVar87 = blendpd(local_11c0,auVar71,2);
      local_11c0 = auVar87;
    }
    auVar71 = maxpd(local_1020,auVar154);
    if ((bVar43 & 4) != 0) {
      local_1190 = blendpd(auVar87,auVar71,1);
    }
    auVar98 = minpd(local_10e0,local_1140);
    auVar105 = minpd(local_10d0,auVar168);
    auVar88 = maxpd(local_10c0,auVar109);
    auVar100 = maxpd(local_1060,local_1160);
    auVar87 = maxpd(auVar97,auVar92);
    if ((char)bVar43 < '\0') {
      local_1190 = blendpd(local_1190,auVar71,2);
    }
    auVar99 = minpd(local_10f0,local_1150);
    auVar98 = blendpd(auVar98,auVar98,1);
    auVar167 = blendpd(auVar105,auVar105,1);
    auVar88 = blendpd(auVar88,auVar88,1);
    auVar117 = blendpd(auVar100,auVar100,1);
    auVar87 = blendpd(auVar87,auVar87,1);
    auVar71 = auVar89;
    local_11f0 = auVar89;
    if ((bVar61 & 0xf) != (byte)iVar46) goto LAB_140a8884a;
  }
  if ((bVar61 & 1) == 0) {
    auVar129 = local_10e0;
    auVar100 = local_10d0;
    local_1150 = local_10c0;
    auVar105 = local_1060;
    auVar106 = auVar97;
    auVar107 = auVar89;
    auVar71 = local_10f0;
    if ((bVar61 & 2) == 0) goto LAB_140a892b1;
LAB_140a88ae0:
    auVar89 = pblendvb(auVar107,auVar89,___xmm_000000000000000000000000ffffff00);
    auVar97 = local_11f0;
  }
  else {
    auVar129 = auVar98;
    auVar100 = auVar167;
    local_1150 = auVar88;
    auVar105 = auVar117;
    auVar106 = auVar87;
    auVar107 = local_11f0;
    auVar71 = auVar99;
    if ((bVar61 & 2) != 0) goto LAB_140a88ae0;
LAB_140a892b1:
    auVar99 = blendpd(local_10f0,auVar71,1);
    auVar98 = blendpd(local_10e0,auVar129,1);
    auVar167 = blendpd(local_10d0,auVar100,1);
    auVar88 = blendpd(local_10c0,local_1150,1);
    auVar117 = blendpd(local_1060,auVar105,1);
    auVar87 = blendpd(auVar97,auVar106,1);
    auVar97 = pblendvb(auVar107,auVar89,___xmm_000000000000000000000000ffffff00);
    auVar89 = auVar97;
  }
  if ((bVar61 & 4) == 0) {
    auVar115 = pblendvb(auVar97,auVar89,___xmm_000000000000000000000000ffff00ff);
    auVar107 = local_fe0;
    auVar108 = local_1030;
    auVar113 = local_fa0;
    auVar112 = local_fb0;
    auVar89 = auVar115;
    auVar114 = local_1020;
    auVar97 = auVar84;
    if (-1 < (char)bVar61) goto LAB_140a893a9;
LAB_140a88bc4:
    if (-1 < (char)bVar61) goto LAB_140a893c5;
LAB_140a88bca:
    if (-1 < (char)bVar61) goto LAB_140a893e1;
LAB_140a88bd0:
    if (-1 < (char)bVar61) goto LAB_140a893fd;
LAB_140a88bd6:
    if (-1 < (char)bVar61) goto LAB_140a89418;
LAB_140a88bdc:
    if (-1 < (char)bVar61) goto LAB_140a89433;
LAB_140a88be2:
    auVar84 = pblendvb(auVar89,auVar115,___xmm_000000000000000000000000ff00ffff);
  }
  else {
    auVar115 = pblendvb(auVar97,auVar89,___xmm_000000000000000000000000ffff00ff);
    auVar107 = local_11e0;
    auVar108 = local_11c0;
    auVar113 = local_11a0;
    auVar112 = local_11b0;
    auVar89 = local_11f0;
    auVar114 = local_1190;
    auVar97 = local_11d0;
    if ((char)bVar61 < '\0') goto LAB_140a88bc4;
LAB_140a893a9:
    local_11d0 = pblendw(auVar84,auVar97,0xf);
    if ((char)bVar61 < '\0') goto LAB_140a88bca;
LAB_140a893c5:
    local_11a0 = pblendw(local_fa0,auVar113,0xf);
    if ((char)bVar61 < '\0') goto LAB_140a88bd0;
LAB_140a893e1:
    local_11b0 = pblendw(local_fb0,auVar112,0xf);
    if ((char)bVar61 < '\0') goto LAB_140a88bd6;
LAB_140a893fd:
    local_11e0 = pblendw(local_fe0,auVar107,0xf);
    if ((char)bVar61 < '\0') goto LAB_140a88bdc;
LAB_140a89418:
    local_11c0 = pblendw(local_1030,auVar108,0xf);
    if ((char)bVar61 < '\0') goto LAB_140a88be2;
LAB_140a89433:
    local_1190 = pblendw(local_1020,auVar114,0xf);
    auVar84 = pblendvb(auVar89,auVar115,___xmm_000000000000000000000000ff00ffff);
  }
  if (-1 < (char)bVar61) {
    local_11f0 = auVar84;
  }
  auVar89 = pblendvb(local_11f0,auVar84,___xmm_00000000000000000000000000ffffff);
  local_10f0 = blendpd(auVar99,auVar71,1);
  auVar71 = pblendw(local_11d0,auVar97,0xf);
  local_10e0 = blendpd(auVar98,auVar129,1);
  local_fa0 = pblendw(local_11a0,auVar113,0xf);
  local_10d0 = blendpd(auVar167,auVar100,1);
  local_fb0 = pblendw(local_11b0,auVar112,0xf);
  local_10c0 = blendpd(auVar88,local_1150,1);
  local_fe0 = pblendw(local_11e0,auVar107,0xf);
  local_1060 = blendpd(auVar117,auVar105,1);
  local_1030 = pblendw(local_11c0,auVar108,0xf);
  auVar97 = blendpd(auVar87,auVar106,1);
  local_1020 = pblendw(local_1190,auVar114,0xf);
  auVar84 = auVar71;
LAB_140a88d11:
  cVar57 = (char)uVar45;
  if ((uVar45 & 1) != 0) {
    local_ac0 = local_10f0._0_8_;
    auVar71 = local_10f0;
  }
  if ((uVar45 & 2) != 0) {
    auVar17._4_8_ = auVar71._8_8_;
    auVar17._0_4_ = local_10f0._4_4_;
    auVar71._0_8_ = auVar17._0_8_ << 0x20;
    auVar71._8_4_ = local_10f0._8_4_;
    auVar71._12_4_ = local_10f0._12_4_;
    local_a88 = auVar71._8_8_;
  }
  if ((uVar45 & 4) != 0) {
    local_a50 = auVar84._0_8_;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    local_a18 = auVar84._8_8_;
  }
  if ((uVar45 & 1) != 0) {
    local_ab8[0] = local_10e0._0_8_;
    auVar71 = local_10e0;
  }
  if ((uVar45 & 2) != 0) {
    auVar18._4_8_ = auVar71._8_8_;
    auVar18._0_4_ = local_10e0._4_4_;
    auVar71._0_8_ = auVar18._0_8_ << 0x20;
    auVar71._8_4_ = local_10e0._8_4_;
    auVar71._12_4_ = local_10e0._12_4_;
    local_a80 = auVar71._8_8_;
  }
  if ((uVar45 & 4) != 0) {
    local_a48 = local_fa0._0_8_;
    auVar71 = local_fa0;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    auVar19._4_8_ = auVar71._8_8_;
    auVar19._0_4_ = local_fa0._4_4_;
    auVar71._0_8_ = auVar19._0_8_ << 0x20;
    auVar71._8_4_ = local_fa0._8_4_;
    auVar71._12_4_ = local_fa0._12_4_;
    local_a10 = auVar71._8_8_;
  }
  if ((uVar45 & 1) != 0) {
    local_ab8[1] = (double)local_10d0._0_8_;
    auVar71 = local_10d0;
  }
  if ((uVar45 & 2) != 0) {
    auVar20._4_8_ = auVar71._8_8_;
    auVar20._0_4_ = local_10d0._4_4_;
    auVar71._0_8_ = auVar20._0_8_ << 0x20;
    auVar71._8_4_ = local_10d0._8_4_;
    auVar71._12_4_ = local_10d0._12_4_;
    local_a78 = auVar71._8_8_;
  }
  if ((uVar45 & 4) != 0) {
    local_a40 = local_fb0._0_8_;
    auVar71 = local_fb0;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    auVar21._4_8_ = auVar71._8_8_;
    auVar21._0_4_ = local_fb0._4_4_;
    auVar71._0_8_ = auVar21._0_8_ << 0x20;
    auVar71._8_4_ = local_fb0._8_4_;
    auVar71._12_4_ = local_fb0._12_4_;
    local_a08 = auVar71._8_8_;
  }
  if ((uVar45 & 1) != 0) {
    local_aa8[0] = local_10c0._0_8_;
    auVar71 = local_10c0;
  }
  if ((uVar45 & 2) != 0) {
    auVar22._4_8_ = auVar71._8_8_;
    auVar22._0_4_ = local_10c0._4_4_;
    auVar71._0_8_ = auVar22._0_8_ << 0x20;
    auVar71._8_4_ = local_10c0._8_4_;
    auVar71._12_4_ = local_10c0._12_4_;
    local_a70 = auVar71._8_8_;
  }
  if ((uVar45 & 4) != 0) {
    local_a38 = local_fe0._0_8_;
    auVar71 = local_fe0;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    auVar23._4_8_ = auVar71._8_8_;
    auVar23._0_4_ = local_fe0._4_4_;
    auVar71._0_8_ = auVar23._0_8_ << 0x20;
    auVar71._8_4_ = local_fe0._8_4_;
    auVar71._12_4_ = local_fe0._12_4_;
    local_a00 = auVar71._8_8_;
  }
  if ((uVar45 & 1) != 0) {
    local_aa8[1] = (double)local_1060._0_8_;
    auVar71 = local_1060;
  }
  if ((uVar45 & 2) != 0) {
    auVar24._4_8_ = auVar71._8_8_;
    auVar24._0_4_ = local_1060._4_4_;
    auVar71._0_8_ = auVar24._0_8_ << 0x20;
    auVar71._8_4_ = local_1060._8_4_;
    auVar71._12_4_ = local_1060._12_4_;
    local_a68 = auVar71._8_8_;
  }
  if ((uVar45 & 4) != 0) {
    local_a30 = local_1030._0_8_;
    auVar71 = local_1030;
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    auVar25._4_8_ = auVar71._8_8_;
    auVar25._0_4_ = local_1030._4_4_;
    auVar71._0_8_ = auVar25._0_8_ << 0x20;
    auVar71._8_4_ = local_1030._8_4_;
    auVar71._12_4_ = local_1030._12_4_;
    local_9f8 = auVar71._8_8_;
  }
  if ((uVar45 & 1) != 0) {
    local_aa8[2] = (double)auVar97._0_8_;
  }
  if ((uVar45 & 2) != 0) {
    local_a60 = auVar97._8_8_;
  }
  if ((uVar45 & 4) != 0) {
    local_a28 = local_1020._0_8_;
    auVar71 = local_1020;
  }
  uVar44 = (char)(cVar57 << 4) >> 4;
  if ((char)uVar44 < '\0') {
    auVar26._4_8_ = auVar71._8_8_;
    auVar26._0_4_ = local_1020._4_4_;
    auVar97._0_8_ = auVar26._0_8_ << 0x20;
    auVar97._8_4_ = local_1020._8_4_;
    auVar97._12_4_ = local_1020._12_4_;
    local_9f0 = auVar97._8_8_;
  }
  if ((uVar45 & 1) != 0) {
    local_a90[0] = auVar89[0];
  }
  if ((uVar45 & 2) != 0) {
    local_a58 = auVar89[1];
  }
  if ((uVar45 & 4) != 0) {
    local_a20 = auVar89[2];
  }
  if ((char)(cVar57 << 4) >> 4 < '\0') {
    local_9e8 = auVar89[3];
  }
  auVar78._0_4_ = -(uint)((int)(uint)__xmm_00000003000000020000000100000000 < (int)param_6);
  auVar78._4_4_ = -(uint)((int)__xmm_00000003000000020000000100000000._4_4_ < (int)param_6);
  auVar78._8_4_ = -(uint)((int)_UNK_150631e08 < (int)param_6);
  auVar78._12_4_ = -(uint)((int)_UNK_150631e0c < (int)param_6);
  uVar59 = movmskps(CONCAT31((int3)(uVar45 >> 8),uVar44),auVar78 & local_ad0);
  if (uVar59 != 0) {
    uVar50 = (ulonglong)(uVar59 & 0xff);
    do {
      if (uVar50 == 0) {
        uVar53 = 0x40;
      }
      else {
        uVar53 = 0;
        for (uVar52 = uVar50; (uVar52 & 1) == 0; uVar52 = uVar52 >> 1 | 0x8000000000000000) {
          uVar53 = uVar53 + 1;
        }
      }
      lVar60 = uVar53 * 0x38;
      cVar54 = param_5[3][0];
      cVar57 = local_a90[lVar60];
      if ((cVar54 == '\0') || (cVar57 == '\0')) {
        if (cVar57 == '\0') {
          cVar54 = param_5[3][0];
          dVar94 = *(double *)param_5[2];
          dVar82 = *(double *)(param_5[1] + 8);
          dVar81 = *(double *)param_5[1];
          uVar83 = *(undefined8 *)*param_5;
          dVar69 = *(double *)(*param_5 + 8);
          dVar104 = *(double *)(param_5[2] + 8);
        }
        else {
          uVar83 = *(undefined8 *)*(undefined1 (*) [16])(&local_ac0 + uVar53 * 7);
          dVar69 = local_ab8[uVar53 * 7];
          dVar81 = local_ab8[uVar53 * 7 + 1];
          dVar82 = local_aa8[uVar53 * 7];
          dVar94 = local_aa8[uVar53 * 7 + 1];
          cVar54 = cVar57;
          dVar104 = *(double *)(local_a90 + lVar60 + -8);
        }
      }
      else {
        auVar84 = minpd(*param_5,*(undefined1 (*) [16])(&local_ac0 + uVar53 * 7));
        uVar83 = auVar84._0_8_;
        dVar69 = auVar84._8_8_;
        dVar81 = *(double *)param_5[1];
        if (local_ab8[uVar53 * 7 + 1] <= *(double *)param_5[1]) {
          dVar81 = local_ab8[uVar53 * 7 + 1];
        }
        auVar84 = maxpd(*(undefined1 (*) [16])(param_5[1] + 8),
                        *(undefined1 (*) [16])(local_aa8 + uVar53 * 7));
        dVar82 = auVar84._0_8_;
        dVar94 = auVar84._8_8_;
        dVar104 = *(double *)(param_5[2] + 8);
        if (*(double *)(param_5[2] + 8) <= *(double *)(local_a90 + lVar60 + -8)) {
          dVar104 = *(double *)(local_a90 + lVar60 + -8);
        }
      }
      uVar50 = uVar50 & ~(1L << (uVar53 & 0x3f));
      *(undefined8 *)*param_5 = uVar83;
      *(double *)(*param_5 + 8) = dVar69;
      *(double *)param_5[1] = dVar81;
      *(double *)(param_5[1] + 8) = dVar82;
      *(double *)param_5[2] = dVar94;
      *(double *)(param_5[2] + 8) = dVar104;
      param_5[3][0] = cVar54;
    } while (uVar50 != 0);
  }
  return;
}

// BoxCalcBoundsFromGeometryGroup_sse4 @ 140a8a320

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromGeometryGroup_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,double *param_5,
               undefined1 (*param_6) [16],uint param_7)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  double dVar4;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  ulonglong uVar17;
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
  bool bVar34;
  longlong lVar35;
  longlong lVar36;
  char cVar37;
  uint uVar38;
  double *pdVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  uint uVar42;
  longlong lVar43;
  char cVar44;
  byte bVar45;
  longlong lVar46;
  longlong lVar47;
  int iVar48;
  byte bVar49;
  uint uVar50;
  double dVar51;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar77;
  undefined8 uVar79;
  uint uVar86;
  undefined1 auVar80 [16];
  double dVar78;
  uint uVar85;
  double dVar87;
  double dVar88;
  uint uVar89;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  int iVar91;
  undefined1 auVar90 [16];
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  double dVar98;
  double dVar101;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  double dVar102;
  double dVar103;
  double dVar105;
  double dVar106;
  undefined1 auVar104 [16];
  double dVar107;
  double dVar110;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  double dVar111;
  undefined1 auVar112 [16];
  double dVar113;
  double dVar114;
  double dVar116;
  undefined1 auVar115 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  double dVar123;
  double dVar124;
  double dVar130;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  double dVar131;
  double dVar132;
  double dVar133;
  double dVar134;
  double dVar135;
  double dVar136;
  undefined1 local_cd0 [16];
  undefined1 local_cc0 [16];
  undefined1 local_cb0 [16];
  undefined1 local_ca0 [16];
  undefined1 local_c90 [16];
  undefined1 local_c80 [16];
  undefined1 local_c70 [16];
  undefined1 local_c60 [16];
  undefined1 local_c50 [16];
  undefined1 local_c40 [32];
  undefined1 local_c20 [48];
  undefined1 local_bf0 [16];
  undefined1 local_be0 [16];
  undefined1 local_bd0 [16];
  undefined1 local_bb0 [16];
  undefined1 local_ba0 [16];
  undefined1 local_b90 [16];
  undefined1 local_b80 [16];
  undefined1 local_b70 [16];
  undefined1 local_b60 [16];
  undefined1 local_b50 [16];
  undefined1 local_b40 [32];
  undefined1 local_b20 [16];
  undefined1 local_b10 [16];
  undefined1 local_b00 [16];
  undefined1 local_af0 [16];
  undefined1 local_ae0 [16];
  undefined1 local_ad0 [16];
  undefined1 local_ac0 [16];
  undefined1 local_ab0 [16];
  undefined1 local_aa0 [16];
  undefined1 local_a80 [16];
  undefined1 local_a70 [16];
  undefined1 local_9f0 [16];
  undefined1 local_990 [16];
  undefined1 local_8d0 [16];
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [16];
  undefined8 local_7e0;
  double adStack_7d8 [2];
  double local_7c8 [3];
  char local_7b0 [8];
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined1 local_778;
  undefined8 local_770;
  undefined8 local_768;
  double adStack_760 [4];
  undefined1 local_740 [8];
  double local_738 [6];
  undefined1 local_708 [8];
  double local_700 [7];
  double dStack_6c8;
  double local_6c0;
  double dStack_6b8;
  double local_6b0;
  double dStack_6a8;
  double local_680;
  double dStack_678;
  double local_670;
  double dStack_668;
  double local_660;
  double dStack_658;
  double local_650;
  double dStack_648;
  double local_640;
  double dStack_638;
  double local_630;
  double dStack_628;
  double local_600;
  double dStack_5f8;
  double local_5f0;
  double dStack_5e8;
  double local_5e0;
  double dStack_5d8;
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  double dStack_5b8;
  double local_5b0;
  double dStack_5a8;
  double local_580;
  double dStack_578;
  double local_570;
  double dStack_568;
  double local_560 [19];
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  double local_360 [19];
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  double dVar16;
  
  uVar38 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar38 = param_7;
  }
  uVar38 = uVar38 & 0xfffffffc;
  pdVar39 = (double *)(ulonglong)uVar38;
  if ((int)uVar38 < 1) {
    local_bd0 = (undefined1  [16])0x0;
    uVar42 = 0;
    auVar112 = ZEXT816(0);
    local_ad0 = (undefined1  [16])0x0;
    local_b70 = (undefined1  [16])0x0;
    local_ae0 = (undefined1  [16])0x0;
    local_b80 = (undefined1  [16])0x0;
    local_af0 = (undefined1  [16])0x0;
    local_b90 = (undefined1  [16])0x0;
    local_b00 = (undefined1  [16])0x0;
    local_ba0 = (undefined1  [16])0x0;
    local_b10 = (undefined1  [16])0x0;
    local_bb0 = (undefined1  [16])0x0;
    local_b20 = (undefined1  [16])0x0;
  }
  else {
    uVar42 = 0;
    local_bb0 = ZEXT816(0);
    local_b20 = ZEXT816(0);
    local_ba0 = ZEXT816(0);
    local_b10 = ZEXT816(0);
    local_b90 = ZEXT816(0);
    local_b00 = ZEXT816(0);
    local_b80 = ZEXT816(0);
    local_af0 = ZEXT816(0);
    local_b70 = ZEXT816(0);
    local_ae0 = ZEXT816(0);
    auVar112 = ZEXT816(0);
    local_ad0 = ZEXT816(0);
    local_bd0 = ZEXT816(0);
    do {
      piVar1 = (int *)(param_2 + (ulonglong)(uVar42 * 4));
      uVar40 = (ulonglong)(uVar42 * 7);
      iVar91 = piVar1[3] << 2;
      pdVar39 = (double *)(longlong)(*piVar1 << 2);
      auVar56._8_4_ = 0xffffffff;
      auVar56._0_8_ = 0xffffffffffffffff;
      auVar56._12_4_ = 0xffffffff;
      auVar57._0_4_ = -(uint)(*(int *)(param_1 + (longlong)pdVar39) == -1);
      auVar57._4_4_ = -(uint)(*(int *)(param_1 + piVar1[1] * 4) == -1);
      auVar57._8_4_ = -(uint)(*(int *)(param_1 + (piVar1[2] << 2)) == -1);
      auVar57._12_4_ = -(uint)(*(int *)(param_1 + iVar91) == -1);
      auVar80[0] = -(*(char *)(param_4 + 0x30 + uVar40 * 8) == '\0');
      auVar80[1] = -(*(char *)(param_4 + 0x68 + uVar40 * 8) == '\0');
      auVar80[2] = -(*(char *)(param_4 + 0xa0 + uVar40 * 8) == '\0');
      auVar80[3] = -(*(char *)(param_4 + 0xd8 + uVar40 * 8) == '\0');
      auVar80[4] = 0xff;
      auVar80[5] = 0xff;
      auVar80[6] = 0xff;
      auVar80[7] = 0xff;
      auVar80[8] = 0xff;
      auVar80[9] = 0xff;
      auVar80[10] = 0xff;
      auVar80[0xb] = 0xff;
      auVar80[0xc] = 0xff;
      auVar80[0xd] = 0xff;
      auVar80[0xe] = 0xff;
      auVar80[0xf] = 0xff;
      auVar80 = pmovsxbd(auVar80 ^ auVar56,auVar80 ^ auVar56);
      auVar80 = ~auVar57 & auVar80;
      iVar91 = movmskps(iVar91,auVar80);
      if (iVar91 != 0) {
        dVar52 = *(double *)(param_4 + 0x70 + uVar40 * 8);
        dVar53 = *(double *)(param_4 + 0xa8 + uVar40 * 8);
        dVar54 = *(double *)(param_4 + uVar40 * 8);
        dVar74 = *(double *)(param_4 + 8 + uVar40 * 8);
        dVar75 = *(double *)(param_4 + 0x38 + uVar40 * 8);
        dVar76 = *(double *)(param_4 + 0x78 + uVar40 * 8);
        dVar92 = *(double *)(param_4 + 0xb0 + uVar40 * 8);
        dVar93 = *(double *)(param_4 + 0x40 + uVar40 * 8);
        dVar95 = *(double *)(param_4 + 0x10 + uVar40 * 8);
        dVar97 = *(double *)(param_4 + 0x80 + uVar40 * 8);
        dVar98 = *(double *)(param_4 + 0xb8 + uVar40 * 8);
        dVar78 = *(double *)(param_4 + 0x18 + uVar40 * 8);
        dVar101 = *(double *)(param_4 + 0x48 + uVar40 * 8);
        dVar102 = *(double *)(param_4 + 0x88 + uVar40 * 8);
        dVar103 = *(double *)(param_4 + 0xc0 + uVar40 * 8);
        dVar88 = *(double *)(param_4 + 0x50 + uVar40 * 8);
        dVar106 = *(double *)(param_4 + 0x90 + uVar40 * 8);
        dVar107 = *(double *)(param_4 + 200 + uVar40 * 8);
        dVar110 = *(double *)(param_4 + 0x20 + uVar40 * 8);
        dVar114 = *(double *)(param_4 + 0x58 + uVar40 * 8);
        dVar116 = *(double *)(param_4 + 0x98 + uVar40 * 8);
        dVar120 = *(double *)(param_4 + 0xd0 + uVar40 * 8);
        dVar122 = *(double *)(param_4 + 0x28 + uVar40 * 8);
        dVar124 = *(double *)(param_4 + 0x60 + uVar40 * 8);
        auVar55._0_4_ = *piVar1 << 7;
        auVar55._4_4_ = piVar1[1] << 7;
        auVar55._8_4_ = piVar1[2] << 7;
        auVar55._12_4_ = piVar1[3] << 7;
        auVar55 = auVar55 & auVar80;
        lVar36 = param_3 + auVar55._0_4_;
        lVar2 = param_3 + auVar55._4_4_;
        lVar35 = param_3 + auVar55._8_4_;
        auVar56 = auVar80 & ___xmm_00000008000000080000000800000008;
        auVar57 = auVar80 & ___xmm_00000010000000100000001000000010;
        auVar58 = auVar80 & ___xmm_00000018000000180000001800000018;
        auVar59 = auVar80 & ___xmm_00000020000000200000002000000020;
        auVar60 = auVar80 & ___xmm_00000028000000280000002800000028;
        auVar61 = auVar80 & ___xmm_00000030000000300000003000000030;
        auVar62 = auVar80 & ___xmm_00000038000000380000003800000038;
        auVar63 = auVar80 & ___xmm_00000040000000400000004000000040;
        auVar64 = auVar80 & ___xmm_00000048000000480000004800000048;
        auVar65 = auVar80 & ___xmm_00000050000000500000005000000050;
        auVar66 = auVar80 & ___xmm_00000058000000580000005800000058;
        auVar67 = auVar80 & ___xmm_00000060000000600000006000000060;
        auVar68 = auVar80 & ___xmm_00000068000000680000006800000068;
        auVar69 = auVar80 & ___xmm_00000070000000700000007000000070;
        lVar43 = param_3 + auVar55._12_4_;
        auVar90 = auVar80 & ___xmm_00000078000000780000007800000078;
        local_360[0xe] = (double)*(undefined8 *)(param_3 + auVar55._8_4_);
        local_360[0xf] = (double)*(undefined8 *)(param_3 + auVar55._12_4_);
        local_360[0xc] = (double)*(undefined8 *)(param_3 + auVar55._0_4_);
        local_360[0xd] = (double)*(undefined8 *)(param_3 + auVar55._4_4_);
        local_360[0x12] = (double)*(undefined8 *)((ulonglong)auVar56._8_4_ + lVar35);
        uStack_2c8 = *(undefined8 *)((ulonglong)auVar56._12_4_ + lVar43);
        local_360[0x10] = (double)*(undefined8 *)((ulonglong)auVar56._0_4_ + lVar36);
        local_360[0x11] = (double)*(undefined8 *)((ulonglong)auVar56._4_4_ + lVar2);
        local_2b0 = *(undefined8 *)((ulonglong)auVar57._8_4_ + lVar35);
        uStack_2a8 = *(undefined8 *)((ulonglong)auVar57._12_4_ + lVar43);
        local_2c0 = *(undefined8 *)((ulonglong)auVar57._0_4_ + lVar36);
        uStack_2b8 = *(undefined8 *)((ulonglong)auVar57._4_4_ + lVar2);
        local_290 = *(undefined8 *)((ulonglong)auVar58._8_4_ + lVar35);
        uStack_288 = *(undefined8 *)((ulonglong)auVar58._12_4_ + lVar43);
        local_2a0 = *(undefined8 *)((ulonglong)auVar58._0_4_ + lVar36);
        uStack_298 = *(undefined8 *)((ulonglong)auVar58._4_4_ + lVar2);
        local_270 = *(undefined8 *)((ulonglong)auVar59._8_4_ + lVar35);
        uStack_268 = *(undefined8 *)((ulonglong)auVar59._12_4_ + lVar43);
        local_280 = *(undefined8 *)((ulonglong)auVar59._0_4_ + lVar36);
        uStack_278 = *(undefined8 *)((ulonglong)auVar59._4_4_ + lVar2);
        local_250 = *(undefined8 *)((ulonglong)auVar60._8_4_ + lVar35);
        uStack_248 = *(undefined8 *)((ulonglong)auVar60._12_4_ + lVar43);
        local_260 = *(undefined8 *)((ulonglong)auVar60._0_4_ + lVar36);
        uStack_258 = *(undefined8 *)((ulonglong)auVar60._4_4_ + lVar2);
        local_230 = *(undefined8 *)((ulonglong)auVar61._8_4_ + lVar35);
        uStack_228 = *(undefined8 *)((ulonglong)auVar61._12_4_ + lVar43);
        local_240 = *(undefined8 *)((ulonglong)auVar61._0_4_ + lVar36);
        uStack_238 = *(undefined8 *)((ulonglong)auVar61._4_4_ + lVar2);
        local_210 = *(undefined8 *)((ulonglong)auVar62._8_4_ + lVar35);
        uStack_208 = *(undefined8 *)((ulonglong)auVar62._12_4_ + lVar43);
        local_220 = *(undefined8 *)((ulonglong)auVar62._0_4_ + lVar36);
        uStack_218 = *(undefined8 *)((ulonglong)auVar62._4_4_ + lVar2);
        local_1f0 = *(undefined8 *)((ulonglong)auVar63._8_4_ + lVar35);
        uStack_1e8 = *(undefined8 *)((ulonglong)auVar63._12_4_ + lVar43);
        local_200 = *(undefined8 *)((ulonglong)auVar63._0_4_ + lVar36);
        uStack_1f8 = *(undefined8 *)((ulonglong)auVar63._4_4_ + lVar2);
        local_1d0 = *(undefined8 *)((ulonglong)auVar64._8_4_ + lVar35);
        uStack_1c8 = *(undefined8 *)((ulonglong)auVar64._12_4_ + lVar43);
        local_1e0 = *(undefined8 *)((ulonglong)auVar64._0_4_ + lVar36);
        uStack_1d8 = *(undefined8 *)((ulonglong)auVar64._4_4_ + lVar2);
        local_1b0 = *(undefined8 *)((ulonglong)auVar65._8_4_ + lVar35);
        uStack_1a8 = *(undefined8 *)((ulonglong)auVar65._12_4_ + lVar43);
        local_1c0 = *(undefined8 *)((ulonglong)auVar65._0_4_ + lVar36);
        uStack_1b8 = *(undefined8 *)((ulonglong)auVar65._4_4_ + lVar2);
        local_190 = *(undefined8 *)((ulonglong)auVar66._8_4_ + lVar35);
        uStack_188 = *(undefined8 *)((ulonglong)auVar66._12_4_ + lVar43);
        local_1a0 = *(undefined8 *)((ulonglong)auVar66._0_4_ + lVar36);
        uStack_198 = *(undefined8 *)((ulonglong)auVar66._4_4_ + lVar2);
        local_170 = *(undefined8 *)((ulonglong)auVar67._8_4_ + lVar35);
        uStack_168 = *(undefined8 *)((ulonglong)auVar67._12_4_ + lVar43);
        local_180 = *(undefined8 *)((ulonglong)auVar67._0_4_ + lVar36);
        uStack_178 = *(undefined8 *)((ulonglong)auVar67._4_4_ + lVar2);
        bVar45 = (char)((char)iVar91 << 4) >> 4;
        local_150 = *(undefined8 *)((ulonglong)auVar68._8_4_ + lVar35);
        uStack_148 = *(undefined8 *)((ulonglong)auVar68._12_4_ + lVar43);
        local_160 = *(undefined8 *)((ulonglong)auVar68._0_4_ + lVar36);
        uStack_158 = *(undefined8 *)((ulonglong)auVar68._4_4_ + lVar2);
        local_130 = *(undefined8 *)((ulonglong)auVar69._8_4_ + lVar35);
        uStack_128 = *(undefined8 *)((ulonglong)auVar69._12_4_ + lVar43);
        local_140 = *(undefined8 *)((ulonglong)auVar69._0_4_ + lVar36);
        uStack_138 = *(undefined8 *)((ulonglong)auVar69._4_4_ + lVar2);
        local_110 = *(undefined8 *)((ulonglong)auVar90._8_4_ + lVar35);
        uStack_108 = *(undefined8 *)((ulonglong)auVar90._12_4_ + lVar43);
        local_120 = *(undefined8 *)((ulonglong)auVar90._0_4_ + lVar36);
        uStack_118 = *(undefined8 *)((ulonglong)auVar90._4_4_ + lVar2);
        dVar51 = *param_5;
        dVar73 = *param_5;
        dVar77 = param_5[4];
        dVar87 = param_5[4];
        dVar94 = param_5[8];
        dVar96 = param_5[8];
        dVar111 = param_5[0xc];
        dVar105 = param_5[0xc];
        lVar35 = 0x60;
        dVar113 = param_5[1];
        dVar119 = param_5[1];
        dVar121 = param_5[5];
        dVar123 = param_5[5];
        dVar130 = param_5[9];
        dVar131 = param_5[9];
        dVar133 = param_5[0xd];
        dVar132 = param_5[0xd];
        dVar135 = param_5[2];
        dVar134 = param_5[2];
        dVar4 = param_5[6];
        dVar136 = param_5[6];
        dVar5 = param_5[10];
        dVar6 = param_5[10];
        dVar7 = param_5[0xe];
        dVar8 = param_5[0xe];
        dVar9 = param_5[3];
        dVar10 = param_5[3];
        dVar11 = param_5[7];
        dVar12 = param_5[7];
        dVar13 = param_5[0xb];
        dVar14 = param_5[0xb];
        dVar15 = param_5[0xf];
        dVar16 = param_5[0xf];
        do {
          dVar18 = *(double *)((longlong)local_360 + lVar35);
          dVar19 = *(double *)((longlong)local_360 + lVar35 + 8);
          dVar20 = *(double *)((longlong)local_360 + lVar35 + 0x10);
          dVar21 = *(double *)((longlong)local_360 + lVar35 + 0x18);
          dVar22 = *(double *)((longlong)local_360 + lVar35 + 0x20);
          dVar23 = *(double *)((longlong)local_360 + lVar35 + 0x28);
          dVar24 = *(double *)((longlong)local_360 + lVar35 + 0x30);
          dVar25 = *(double *)((longlong)local_360 + lVar35 + 0x38);
          dVar26 = *(double *)((longlong)local_360 + lVar35 + 0x50);
          dVar27 = *(double *)((longlong)local_360 + lVar35 + 0x58);
          dVar28 = *(double *)((longlong)local_360 + lVar35 + 0x40);
          dVar29 = *(double *)((longlong)local_360 + lVar35 + 0x48);
          dVar30 = *(double *)((longlong)local_360 + lVar35 + 0x60);
          dVar31 = *(double *)((longlong)local_360 + lVar35 + 0x68);
          dVar32 = *(double *)((longlong)local_360 + lVar35 + 0x70);
          dVar33 = *(double *)((longlong)local_360 + lVar35 + 0x78);
          *(double *)((longlong)adStack_760 + lVar35 + 0x10) =
               dVar32 * dVar111 + dVar26 * dVar94 + dVar24 * dVar77 + dVar20 * dVar51 + 0.0;
          *(double *)(local_740 + lVar35 + -8) =
               dVar33 * dVar105 + dVar27 * dVar96 + dVar25 * dVar87 + dVar21 * dVar73 + 0.0;
          *(double *)((longlong)adStack_760 + lVar35) =
               dVar30 * dVar111 + dVar28 * dVar94 + dVar22 * dVar77 + dVar18 * dVar51 + 0.0;
          *(double *)((longlong)adStack_760 + lVar35 + 8) =
               dVar31 * dVar105 + dVar29 * dVar96 + dVar23 * dVar87 + dVar19 * dVar73 + 0.0;
          *(double *)((longlong)local_738 + lVar35 + 8) =
               dVar32 * dVar133 + dVar26 * dVar130 + dVar24 * dVar121 + dVar20 * dVar113 + 0.0;
          *(double *)((longlong)local_738 + lVar35 + 0x10) =
               dVar33 * dVar132 + dVar27 * dVar131 + dVar25 * dVar123 + dVar21 * dVar119 + 0.0;
          *(double *)(local_740 + lVar35) =
               dVar30 * dVar133 + dVar28 * dVar130 + dVar22 * dVar121 + dVar18 * dVar113 + 0.0;
          *(double *)((longlong)local_738 + lVar35) =
               dVar31 * dVar132 + dVar29 * dVar131 + dVar23 * dVar123 + dVar19 * dVar119 + 0.0;
          *(double *)(local_708 + lVar35 + -8) =
               dVar32 * dVar7 + dVar26 * dVar5 + dVar24 * dVar4 + dVar20 * dVar135 + 0.0;
          *(double *)(local_708 + lVar35) =
               dVar33 * dVar8 + dVar27 * dVar6 + dVar25 * dVar136 + dVar21 * dVar134 + 0.0;
          *(double *)((longlong)local_738 + lVar35 + 0x18) =
               dVar30 * dVar7 + dVar28 * dVar5 + dVar22 * dVar4 + dVar18 * dVar135 + 0.0;
          *(double *)((longlong)local_738 + lVar35 + 0x20) =
               dVar31 * dVar8 + dVar29 * dVar6 + dVar23 * dVar136 + dVar19 * dVar134 + 0.0;
          *(double *)((longlong)local_700 + lVar35 + 0x10) =
               dVar32 * dVar15 + dVar26 * dVar13 + dVar24 * dVar11 + dVar20 * dVar9 + 0.0;
          *(double *)((longlong)local_700 + lVar35 + 0x18) =
               dVar33 * dVar16 + dVar27 * dVar14 + dVar25 * dVar12 + dVar21 * dVar10 + 0.0;
          *(double *)((longlong)local_700 + lVar35) =
               dVar30 * dVar15 + dVar28 * dVar13 + dVar22 * dVar11 + dVar18 * dVar9 + 0.0;
          *(double *)((longlong)local_700 + lVar35 + 8) =
               dVar31 * dVar16 + dVar29 * dVar14 + dVar23 * dVar12 + dVar19 * dVar10 + 0.0;
          lVar35 = lVar35 + 0x80;
        } while (lVar35 != 0x260);
        dVar77 = (dVar54 + dVar78) * ___xmm_3fe00000000000003fe0000000000000;
        dVar87 = (dVar75 + dVar88) * _UNK_150689678;
        dVar111 = (dVar74 + dVar110) * ___xmm_3fe00000000000003fe0000000000000;
        dVar113 = (dVar93 + dVar114) * _UNK_150689678;
        dVar94 = (dVar52 + dVar102) * ___xmm_3fe00000000000003fe0000000000000;
        dVar96 = (dVar53 + dVar103) * _UNK_150689678;
        dVar51 = (dVar76 + dVar106) * ___xmm_3fe00000000000003fe0000000000000;
        dVar73 = (dVar92 + dVar107) * _UNK_150689678;
        dVar123 = (dVar97 + dVar116) * ___xmm_3fe00000000000003fe0000000000000;
        dVar130 = (dVar98 + dVar120) * _UNK_150689678;
        dVar119 = (dVar95 + dVar122) * ___xmm_3fe00000000000003fe0000000000000;
        dVar121 = (dVar101 + dVar124) * _UNK_150689678;
        dVar78 = (dVar78 - dVar54) * ___xmm_3fe00000000000003fe0000000000000;
        dVar88 = (dVar88 - dVar75) * _UNK_150689678;
        dVar102 = (dVar102 - dVar52) * ___xmm_3fe00000000000003fe0000000000000;
        dVar105 = (dVar103 - dVar53) * _UNK_150689678;
        dVar52 = (dVar110 - dVar74) * ___xmm_3fe00000000000003fe0000000000000;
        dVar74 = (dVar114 - dVar93) * _UNK_150689678;
        dVar133 = (dVar106 - dVar76) * ___xmm_3fe00000000000003fe0000000000000;
        dVar135 = (dVar107 - dVar92) * _UNK_150689678;
        dVar53 = dVar123 * local_5f0 + dVar51 * local_670 + dVar94 * local_700[2] + local_570;
        dVar75 = dVar130 * dStack_5e8 + dVar73 * dStack_668 + dVar96 * local_700[3] + dStack_568;
        dVar54 = dVar119 * local_600 + dVar111 * local_680 + dVar77 * local_700[0] + local_580;
        dVar76 = dVar121 * dStack_5f8 + dVar113 * dStack_678 + dVar87 * local_700[1] + dStack_578;
        dVar114 = (dVar116 - dVar97) * ___xmm_3fe00000000000003fe0000000000000;
        dVar116 = (dVar120 - dVar98) * _UNK_150689678;
        dVar131 = (dVar122 - dVar95) * ___xmm_3fe00000000000003fe0000000000000;
        dVar132 = (dVar124 - dVar101) * _UNK_150689678;
        dVar134 = dVar123 * local_5d0 + dVar51 * local_650 + dVar94 * local_700[6] + local_560[2];
        dVar136 = dVar130 * dStack_5c8 + dVar73 * dStack_648 + dVar96 * dStack_6c8 + local_560[3];
        dVar98 = (double)((ulonglong)(local_600 * dVar131) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(local_680 * dVar52) & __xmm_7fffffffffffffff7fffffffffffffff
                           ) +
                   (double)((ulonglong)(local_700[0] * dVar78) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar101 = (double)((ulonglong)(dStack_5f8 * dVar132) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_678 * dVar74) & _UNK_15061cc88) +
                  (double)((ulonglong)(local_700[1] * dVar88) & _UNK_15061cc88);
        dVar107 = dVar119 * local_5e0 + dVar111 * local_660 + dVar77 * local_700[4] + local_560[0];
        dVar110 = dVar121 * dStack_5d8 + dVar113 * dStack_658 + dVar87 * local_700[5] + local_560[1]
        ;
        dVar92 = (double)((ulonglong)(local_5f0 * dVar114) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(local_670 * dVar133) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_700[2] * dVar102) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar93 = (double)((ulonglong)(dStack_5e8 * dVar116) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_668 * dVar135) & _UNK_15061cc88) +
                 (double)((ulonglong)(local_700[3] * dVar105) & _UNK_15061cc88);
        dVar124 = dVar123 * local_5b0 + dVar51 * local_630 + dVar94 * local_6b0 + local_560[6];
        dVar51 = dVar130 * dStack_5a8 + dVar73 * dStack_628 + dVar96 * dStack_6a8 + local_560[7];
        dVar95 = (double)((ulonglong)(local_5e0 * dVar131) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(local_660 * dVar52) & __xmm_7fffffffffffffff7fffffffffffffff
                           ) +
                   (double)((ulonglong)(local_700[4] * dVar78) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar97 = (double)((ulonglong)(dStack_5d8 * dVar132) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_658 * dVar74) & _UNK_15061cc88) +
                 (double)((ulonglong)(local_700[5] * dVar88) & _UNK_15061cc88);
        dVar120 = dVar119 * local_5c0 + dVar111 * local_640 + dVar77 * local_6c0 + local_560[4];
        dVar122 = dVar121 * dStack_5b8 + dVar113 * dStack_638 + dVar87 * dStack_6b8 + local_560[5];
        dVar103 = (double)((ulonglong)(local_5d0 * dVar114) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_650 * dVar133) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(local_700[6] * dVar102) &
                          __xmm_7fffffffffffffff7fffffffffffffff);
        dVar106 = (double)((ulonglong)(dStack_5c8 * dVar116) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_648 * dVar135) & _UNK_15061cc88) +
                  (double)((ulonglong)(dStack_6c8 * dVar105) & _UNK_15061cc88);
        dVar78 = (double)((ulonglong)(dVar131 * local_5c0) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(dVar52 * local_640) & __xmm_7fffffffffffffff7fffffffffffffff
                           ) +
                   (double)((ulonglong)(dVar78 * local_6c0) & __xmm_7fffffffffffffff7fffffffffffffff
                           );
        dVar88 = (double)((ulonglong)(dVar132 * dStack_5b8) & _UNK_15061cc88) +
                 (double)((ulonglong)(dVar74 * dStack_638) & _UNK_15061cc88) +
                 (double)((ulonglong)(dVar88 * dStack_6b8) & _UNK_15061cc88);
        dVar52 = (double)((ulonglong)(dVar114 * local_5b0) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(dVar133 * local_630) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(dVar102 * local_6b0) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar74 = (double)((ulonglong)(dVar116 * dStack_5a8) & _UNK_15061cc88) +
                 (double)((ulonglong)(dVar135 * dStack_628) & _UNK_15061cc88) +
                 (double)((ulonglong)(dVar105 * dStack_6a8) & _UNK_15061cc88);
        auVar58._0_8_ = dVar54 - dVar98;
        auVar58._8_8_ = dVar76 - dVar101;
        local_c50._0_8_ = dVar53 - dVar92;
        local_c50._8_8_ = dVar75 - dVar93;
        local_c60._0_8_ = dVar107 - dVar95;
        local_c60._8_8_ = dVar110 - dVar97;
        local_c90._8_8_ = dVar101 + dVar76;
        local_c90._0_8_ = dVar98 + dVar54;
        auVar59._0_8_ = dVar134 - dVar103;
        auVar59._8_8_ = dVar136 - dVar106;
        local_cd0._8_8_ = dVar93 + dVar75;
        local_cd0._0_8_ = dVar92 + dVar53;
        local_cc0._8_8_ = dVar122 - dVar88;
        local_cc0._0_8_ = dVar120 - dVar78;
        local_cb0._8_8_ = dVar97 + dVar110;
        local_cb0._0_8_ = dVar95 + dVar107;
        local_c80._8_8_ = dVar51 - dVar74;
        local_c80._0_8_ = dVar124 - dVar52;
        local_ca0._8_8_ = dVar106 + dVar136;
        local_ca0._0_8_ = dVar103 + dVar134;
        local_b40._8_8_ = dVar88 + dVar122;
        local_b40._0_8_ = dVar78 + dVar120;
        local_be0._8_8_ = dVar74 + dVar51;
        local_be0._0_8_ = dVar52 + dVar124;
        auVar60[0] = -(local_bd0[0] == '\0');
        auVar60[1] = -(local_bd0[1] == '\0');
        auVar60[2] = -(local_bd0[2] == '\0');
        auVar60[3] = -(local_bd0[3] == '\0');
        auVar60[4] = -(local_bd0[4] == '\0');
        auVar60[5] = -(local_bd0[5] == '\0');
        auVar60[6] = -(local_bd0[6] == '\0');
        auVar60[7] = -(local_bd0[7] == '\0');
        auVar60[8] = -(local_bd0[8] == '\0');
        auVar60[9] = -(local_bd0[9] == '\0');
        auVar60[10] = -(local_bd0[10] == '\0');
        auVar60[0xb] = -(local_bd0[0xb] == '\0');
        auVar60[0xc] = -(local_bd0[0xc] == '\0');
        auVar60[0xd] = -(local_bd0[0xd] == '\0');
        auVar60[0xe] = -(local_bd0[0xe] == '\0');
        auVar60[0xf] = -(local_bd0[0xf] == '\0');
        auVar56 = pmovsxbd(auVar60 ^ ___xmm_ffffffffffffffffffffffffffffffff,
                           auVar60 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        iVar48 = movmskps((int)lVar36,auVar80 & auVar56);
        pdVar39 = param_5;
        if (iVar48 == 0) {
          uVar50 = 0x260;
LAB_140a8bd8b:
          auVar56 = pmovsxbd(auVar56,auVar60);
          iVar91 = movmskps(uVar50,auVar80 & auVar56);
          if ((iVar91 != 0) && ((char)iVar91 != '\0')) {
            auVar80 = pmovzxbd(auVar56,auVar60);
            auVar63._0_4_ = auVar80._0_4_ << 0x1f;
            auVar63._4_4_ = auVar80._4_4_ << 0x1f;
            auVar63._8_4_ = auVar80._8_4_ << 0x1f;
            auVar63._12_4_ = auVar80._12_4_ << 0x1f;
            uVar50 = movmskps((int)param_5,auVar63);
            pdVar39 = (double *)(ulonglong)uVar50;
            if ((uVar50 & 1) == 0) {
              auVar56 = local_a70;
              auVar57 = local_9f0;
              auVar55 = local_a80;
              auVar60 = local_8b0;
              auVar61 = local_8c0;
              auVar80 = local_8d0;
              if ((uVar50 & 2) != 0) goto LAB_140a8be06;
LAB_140a8c5ba:
              auVar58 = blendpd(local_8d0,auVar80,1);
              local_c60 = blendpd(local_8c0,auVar61,1);
              local_cc0 = blendpd(local_8b0,auVar60,1);
              local_c90 = blendpd(local_a80,auVar55,1);
              local_cb0 = blendpd(local_9f0,auVar57,1);
              local_b40._0_16_ = blendpd(local_a70,auVar56,1);
            }
            else {
              local_990._0_8_ = local_990._0_8_ & 0xffffffffffffff00 | 1;
              auVar56 = local_b40._0_16_;
              auVar57 = local_cb0;
              auVar55 = local_c90;
              auVar60 = local_cc0;
              auVar61 = local_c60;
              auVar80 = auVar58;
              if ((uVar50 & 2) == 0) goto LAB_140a8c5ba;
LAB_140a8be06:
              local_990._0_8_ = local_990._0_8_ & 0xffffffffffff00ff | 0x100;
            }
            bVar34 = (uVar50 & 4) != 0;
            auVar62 = local_ac0;
            if (bVar34) {
              auVar62 = local_c50;
            }
            cVar37 = (char)((char)uVar50 << 4) >> 4;
            auVar63 = local_ab0;
            auVar64 = local_b60;
            auVar65 = local_b50;
            auVar66 = local_aa0;
            auVar67 = local_bf0;
            if (bVar34) {
              pdVar39 = (double *)&DAT_00000001;
              local_990._0_8_ = local_990._0_8_ & 0xffffffffff00ffff | 0x10000;
              auVar63 = auVar59;
              auVar64 = local_cd0;
              auVar65 = local_ca0;
              auVar66 = local_c80;
              auVar67 = local_be0;
            }
            if (-1 < cVar37) {
              local_c50 = blendpd(local_ac0,auVar62,1);
              auVar59 = blendpd(local_ab0,auVar63,1);
              local_c80 = blendpd(local_aa0,auVar66,1);
              local_cd0 = blendpd(local_b60,auVar64,1);
              local_ca0 = blendpd(local_b50,auVar65,1);
              local_be0 = blendpd(local_bf0,auVar67,1);
            }
            if (cVar37 < '\0') {
              local_990._0_8_ = local_990._0_8_ & 0xffffffff00ffffff | 0x1000000;
            }
            local_8d0 = blendpd(auVar58,auVar80,1);
            local_ac0 = blendpd(local_c50,auVar62,1);
            local_8c0 = blendpd(local_c60,auVar61,1);
            local_ab0 = blendpd(auVar59,auVar63,1);
            local_8b0 = blendpd(local_cc0,auVar60,1);
            local_aa0 = blendpd(local_c80,auVar66,1);
            local_a80 = blendpd(local_c90,auVar55,1);
            local_b60 = blendpd(local_cd0,auVar64,1);
            local_9f0 = blendpd(local_cb0,auVar57,1);
            local_b50 = blendpd(local_ca0,auVar65,1);
            local_a70 = blendpd(local_b40._0_16_,auVar56,1);
            local_bf0 = blendpd(local_be0,auVar67,1);
          }
        }
        else {
          auVar61._8_8_ = local_c50._8_8_;
          auVar61._0_8_ = local_c50._0_8_;
          auVar62._8_8_ = local_c60._8_8_;
          auVar62._0_8_ = local_c60._0_8_;
          uVar50 = movmskps((int)lVar2,auVar56);
          auVar57 = minpd(local_bb0,auVar58);
          auVar56 = local_8d0;
          if ((uVar50 & 1) != 0) {
            auVar56 = auVar57;
          }
          if ((uVar50 & 2) == 0) {
            auVar57 = blendpd(local_8d0,auVar56,1);
          }
          auVar55 = minpd(local_b20,auVar61);
          if ((uVar50 & 4) != 0) {
            local_ac0 = blendpd(local_ac0,auVar55,1);
          }
          bVar49 = (char)((char)uVar50 << 4) >> 4;
          if ((char)bVar49 < '\0') {
            local_ac0 = blendpd(local_ac0,auVar55,2);
          }
          auVar55 = minpd(local_ba0,auVar62);
          if ((bVar49 & 1) == 0) {
            local_c20._0_16_ = local_8c0;
            if ((bVar49 & 2) != 0) goto LAB_140a8ba2d;
LAB_140a8c43d:
            auVar55 = blendpd(local_8c0,local_c20._0_16_,1);
            auVar61 = minpd(local_b10,auVar59);
          }
          else {
            local_c20._0_16_ = auVar55;
            if ((bVar49 & 2) == 0) goto LAB_140a8c43d;
LAB_140a8ba2d:
            auVar61 = minpd(local_b10,auVar59);
          }
          if ((bVar49 & 4) != 0) {
            local_ab0 = blendpd(local_ab0,auVar61,1);
          }
          if ((char)bVar49 < '\0') {
            local_ab0 = blendpd(local_ab0,auVar61,2);
          }
          auVar61 = minpd(local_b90,local_cc0);
          if ((bVar49 & 1) == 0) {
            auVar62 = local_8b0;
            if ((bVar49 & 2) != 0) goto LAB_140a8ba9d;
LAB_140a8c473:
            auVar61 = blendpd(local_8b0,auVar62,1);
            auVar63 = minpd(local_b00,local_c80);
          }
          else {
            auVar62 = auVar61;
            if ((bVar49 & 2) == 0) goto LAB_140a8c473;
LAB_140a8ba9d:
            auVar63 = minpd(local_b00,local_c80);
          }
          if ((bVar49 & 4) != 0) {
            local_aa0 = blendpd(local_aa0,auVar63,1);
          }
          if ((char)bVar49 < '\0') {
            local_aa0 = blendpd(local_aa0,auVar63,2);
          }
          auVar63 = maxpd(local_b80,local_c90);
          if ((bVar49 & 1) == 0) {
            auVar64 = local_a80;
            if ((bVar49 & 2) != 0) goto LAB_140a8bb15;
LAB_140a8c4ab:
            auVar63 = blendpd(local_a80,auVar64,1);
            auVar65 = maxpd(local_af0,local_cd0);
          }
          else {
            auVar64 = auVar63;
            if ((bVar49 & 2) == 0) goto LAB_140a8c4ab;
LAB_140a8bb15:
            auVar65 = maxpd(local_af0,local_cd0);
          }
          if ((bVar49 & 4) != 0) {
            local_b60 = blendpd(local_b60,auVar65,1);
          }
          if ((char)bVar49 < '\0') {
            local_b60 = blendpd(local_b60,auVar65,2);
          }
          auVar65 = maxpd(local_b70,local_cb0);
          if ((bVar49 & 1) == 0) {
            auVar66 = local_9f0;
            if ((bVar49 & 2) != 0) goto LAB_140a8bb86;
LAB_140a8c4e8:
            auVar65 = blendpd(local_9f0,auVar66,1);
            auVar67 = maxpd(local_ae0,local_ca0);
          }
          else {
            auVar66 = auVar65;
            if ((bVar49 & 2) == 0) goto LAB_140a8c4e8;
LAB_140a8bb86:
            auVar67 = maxpd(local_ae0,local_ca0);
          }
          if ((bVar49 & 4) != 0) {
            local_b50 = blendpd(local_b50,auVar67,1);
          }
          if ((char)bVar49 < '\0') {
            local_b50 = blendpd(local_b50,auVar67,2);
          }
          auVar67 = maxpd(auVar112,local_b40._0_16_);
          if ((bVar49 & 1) == 0) {
            auVar68 = local_a70;
            if ((bVar49 & 2) != 0) goto LAB_140a8bbfb;
LAB_140a8c51f:
            auVar67 = blendpd(local_a70,auVar68,1);
            auVar69 = maxpd(local_ad0,local_be0);
          }
          else {
            auVar68 = auVar67;
            if ((bVar49 & 2) == 0) goto LAB_140a8c51f;
LAB_140a8bbfb:
            auVar69 = maxpd(local_ad0,local_be0);
          }
          if ((bVar49 & 4) != 0) {
            local_bf0 = blendpd(local_bf0,auVar69,1);
          }
          if ((char)bVar49 < '\0') {
            local_bf0 = blendpd(local_bf0,auVar69,2);
          }
          auVar69 = local_990;
          if ((bVar49 & 1) != 0) {
            auVar69 = local_bd0;
          }
          auVar90 = pblendvb(auVar69,local_990,___xmm_000000000000000000000000ffffff00);
          auVar69 = auVar90;
          if ((bVar49 & 2) != 0) {
            auVar69 = local_bd0;
          }
          auVar90 = pblendvb(auVar69,auVar90,___xmm_000000000000000000000000ffff00ff);
          auVar69 = auVar90;
          if ((bVar49 & 4) != 0) {
            auVar69 = local_bd0;
          }
          auVar90 = pblendvb(auVar69,auVar90,___xmm_000000000000000000000000ff00ffff);
          auVar69 = local_bd0;
          if (-1 < (char)bVar49) {
            auVar69 = auVar90;
          }
          local_8d0 = blendpd(auVar57,auVar56,1);
          local_8c0 = blendpd(auVar55,local_c20._0_16_,1);
          local_8b0 = blendpd(auVar61,auVar62,1);
          local_a80 = blendpd(auVar63,auVar64,1);
          local_9f0 = blendpd(auVar65,auVar66,1);
          local_a70 = blendpd(auVar67,auVar68,1);
          local_990 = pblendvb(auVar69,auVar90,___xmm_00000000000000000000000000ffffff);
          uVar50 = CONCAT31((int3)((uint)iVar91 >> 8),bVar45) & 0xffffff0f;
          auVar56 = ___xmm_00000000000000000000000000ffffff;
          if ((char)uVar50 != (char)iVar48) goto LAB_140a8bd8b;
        }
        auVar56 = local_bd0;
        auVar57 = local_ba0;
        auVar55 = local_b90;
        auVar58 = local_b80;
        auVar59 = local_b70;
        local_cd0 = auVar112;
        auVar80 = local_bb0;
        if ((bVar45 & 1) != 0) {
          local_cd0 = local_a70;
          auVar56 = local_990;
          auVar57 = local_8c0;
          auVar55 = local_8b0;
          auVar58 = local_a80;
          auVar59 = local_9f0;
          auVar80 = local_8d0;
        }
        if ((bVar45 & 2) == 0) {
          local_bb0 = blendpd(local_bb0,auVar80,1);
          local_ba0 = blendpd(local_ba0,auVar57,1);
          local_b90 = blendpd(local_b90,auVar55,1);
          local_b80 = blendpd(local_b80,auVar58,1);
          local_b70 = blendpd(local_b70,auVar59,1);
          auVar60 = blendps(auVar112,local_cd0,3);
          auVar56 = pblendvb(auVar56,local_bd0,___xmm_000000000000000000000000ffffff00);
          auVar112 = auVar56;
        }
        else {
          auVar56 = pblendvb(auVar56,local_bd0,___xmm_000000000000000000000000ffffff00);
          auVar112 = local_990;
          auVar60 = local_a70;
          local_bb0 = local_8d0;
          local_ba0 = local_8c0;
          local_b90 = local_8b0;
          local_b80 = local_a80;
          local_b70 = local_9f0;
        }
        if ((bVar45 & 4) == 0) {
          auVar66 = pblendvb(auVar112,auVar56,___xmm_000000000000000000000000ffff00ff);
          auVar65 = auVar66;
          auVar56 = local_b10;
          auVar61 = local_b00;
          auVar62 = local_af0;
          auVar63 = local_ae0;
          auVar64 = local_ad0;
          auVar112 = local_b20;
          if ((char)bVar45 < '\0') goto LAB_140a8c222;
LAB_140a8c32e:
          auVar67 = pblendw(local_b20,auVar112,0xf);
          if (-1 < (char)bVar45) goto LAB_140a8c35a;
LAB_140a8c23f:
          auVar68 = local_ab0;
          if ((char)bVar45 < '\0') goto LAB_140a8c259;
LAB_140a8c385:
          auVar69 = blendpd(local_b00,auVar61,1);
          if (-1 < (char)bVar45) goto LAB_140a8c3a8;
LAB_140a8c26b:
          auVar90 = local_b60;
          if ((char)bVar45 < '\0') goto LAB_140a8c283;
LAB_140a8c3cf:
          auVar99 = blendpd(local_ae0,auVar63,1);
          if (-1 < (char)bVar45) goto LAB_140a8c3ee;
LAB_140a8c292:
          auVar65 = pblendvb(auVar65,auVar66,___xmm_000000000000000000000000ff00ffff);
          auVar81 = local_bf0;
        }
        else {
          auVar66 = pblendvb(auVar112,auVar56,___xmm_000000000000000000000000ffff00ff);
          auVar65 = local_990;
          auVar56 = local_ab0;
          auVar61 = local_aa0;
          auVar62 = local_b60;
          auVar63 = local_b50;
          auVar64 = local_bf0;
          auVar112 = local_ac0;
          if (-1 < (char)bVar45) goto LAB_140a8c32e;
LAB_140a8c222:
          auVar67 = local_ac0;
          if ((char)bVar45 < '\0') goto LAB_140a8c23f;
LAB_140a8c35a:
          auVar68 = blendpd(local_b10,auVar56,1);
          if (-1 < (char)bVar45) goto LAB_140a8c385;
LAB_140a8c259:
          auVar69 = local_aa0;
          if ((char)bVar45 < '\0') goto LAB_140a8c26b;
LAB_140a8c3a8:
          auVar90 = blendps(local_af0,auVar62,3);
          if (-1 < (char)bVar45) goto LAB_140a8c3cf;
LAB_140a8c283:
          auVar99 = local_b50;
          if ((char)bVar45 < '\0') goto LAB_140a8c292;
LAB_140a8c3ee:
          auVar81 = blendpd(local_ad0,auVar64,1);
          auVar65 = pblendvb(auVar65,auVar66,___xmm_000000000000000000000000ff00ffff);
        }
        auVar66 = local_990;
        if (-1 < (char)bVar45) {
          auVar66 = auVar65;
        }
        local_bd0 = pblendvb(auVar66,auVar65,___xmm_00000000000000000000000000ffffff);
        local_bb0 = blendpd(local_bb0,auVar80,1);
        local_b20 = pblendw(auVar67,auVar112,0xf);
        local_ba0 = blendpd(local_ba0,auVar57,1);
        local_b10 = blendpd(auVar68,auVar56,1);
        local_b90 = blendps(local_b90,auVar55,3);
        local_b00 = blendpd(auVar69,auVar61,1);
        local_b80 = blendps(local_b80,auVar58,3);
        local_af0 = blendps(auVar90,auVar62,3);
        local_b70 = pblendw(local_b70,auVar59,0xf);
        local_ae0 = blendpd(auVar99,auVar63,1);
        auVar112 = blendpd(auVar60,local_cd0,1);
        local_ad0 = blendpd(auVar81,auVar64,1);
      }
      uVar42 = uVar42 + 4;
    } while ((int)uVar42 < (int)uVar38);
  }
  if ((int)param_7 <= (int)uVar42) goto LAB_140a8e3e2;
  auVar64._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar42) < (int)param_7);
  auVar64._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar42) < (int)param_7);
  auVar64._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar42) < (int)param_7);
  auVar64._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar42) < (int)param_7);
  uVar38 = movmskps(param_7,auVar64);
  if ((~(byte)uVar38 & 9) == 0) {
    puVar3 = (uint *)(param_2 + (int)(uVar42 << 2));
    uVar50 = *puVar3;
    uVar85 = puVar3[1];
    uVar86 = puVar3[2];
    uVar89 = puVar3[3];
  }
  else {
    puVar3 = (uint *)(param_2 + (int)(uVar42 << 2));
    if ((uVar38 & 1) == 0) {
      uVar50 = param_7;
      if ((uVar38 & 2) == 0) goto LAB_140a8c850;
LAB_140a8ddef:
      uVar85 = puVar3[1];
      if ((uVar38 & 4) != 0) goto LAB_140a8de06;
LAB_140a8c858:
      uVar86 = 0;
    }
    else {
      uVar50 = *puVar3;
      if ((uVar38 & 2) != 0) goto LAB_140a8ddef;
LAB_140a8c850:
      uVar85 = 0;
      if ((uVar38 & 4) == 0) goto LAB_140a8c858;
LAB_140a8de06:
      uVar86 = puVar3[2];
    }
    uVar89 = 0;
    if ((uVar38 & 8) != 0) {
      uVar89 = puVar3[3];
    }
  }
  auVar66._4_4_ = uVar42 * 7;
  auVar66._0_4_ = uVar42 * 7;
  auVar66._8_4_ = uVar42 * 7;
  auVar66._12_4_ = uVar42 * 7;
  auVar66 = auVar66 & auVar64;
  lVar36 = param_4 + (longlong)auVar66._0_4_ * 8;
  pdVar39 = (double *)(param_4 + (longlong)auVar66._4_4_ * 8);
  lVar2 = param_4 + (longlong)auVar66._8_4_ * 8;
  lVar35 = param_4 + (longlong)auVar66._12_4_ * 8;
  auVar80 = ___xmm_000000d8000000a00000006800000030 & auVar64;
  auVar67._0_4_ = uVar50 << 2;
  auVar67._4_4_ = uVar85 << 2;
  auVar67._8_4_ = uVar86 << 2;
  auVar67._12_4_ = uVar89 << 2;
  auVar67 = auVar67 & auVar64;
  auVar68._8_4_ = 0xffffffff;
  auVar68._0_8_ = 0xffffffffffffffff;
  auVar68._12_4_ = 0xffffffff;
  auVar69._0_4_ = -(uint)(*(int *)(param_1 + auVar67._0_4_) == -1);
  auVar69._4_4_ = -(uint)(*(int *)(param_1 + auVar67._4_4_) == -1);
  auVar69._8_4_ = -(uint)(*(int *)(param_1 + auVar67._8_4_) == -1);
  auVar69._12_4_ = -(uint)(*(int *)(param_1 + auVar67._12_4_) == -1);
  auVar90._0_12_ = ZEXT812(0);
  auVar90._12_4_ = 0;
  auVar65[0] = -(*(char *)((ulonglong)auVar80._0_4_ + lVar36) == '\0');
  auVar65[1] = -(*(char *)((ulonglong)auVar80._4_4_ + (longlong)pdVar39) == '\0');
  auVar65[2] = -(*(char *)((ulonglong)auVar80._8_4_ + lVar2) == '\0');
  auVar65[3] = -(*(char *)((ulonglong)auVar80._12_4_ + lVar35) == '\0');
  auVar65[4] = 0xff;
  auVar65[5] = 0xff;
  auVar65[6] = 0xff;
  auVar65[7] = 0xff;
  auVar65[8] = 0xff;
  auVar65[9] = 0xff;
  auVar65[10] = 0xff;
  auVar65[0xb] = 0xff;
  auVar65[0xc] = 0xff;
  auVar65[0xd] = 0xff;
  auVar65[0xe] = 0xff;
  auVar65[0xf] = 0xff;
  auVar80 = pmovsxbd(auVar65 ^ auVar68,auVar65 ^ auVar68);
  auVar80 = ~auVar69 & auVar80 & auVar64;
  iVar91 = movmskps(auVar67._12_4_,auVar80);
  if (iVar91 == 0) goto LAB_140a8e3e2;
  auVar99._0_4_ = ___xmm_000000a8000000700000003800000000 & auVar64._0_4_;
  auVar99._4_4_ = _UNK_151287264 & auVar64._4_4_;
  auVar99._8_4_ = _UNK_151287268 & auVar64._8_4_;
  auVar99._12_4_ = _UNK_15128726c & auVar64._12_4_;
  lVar46 = extractps(auVar99,1);
  lVar47 = extractps(auVar99,2);
  lVar43 = extractps(auVar99,3);
  dVar52 = *(double *)(param_4 + (longlong)auVar66._0_4_ * 8);
  dVar53 = *(double *)(lVar46 + (longlong)pdVar39);
  dVar54 = *(double *)(lVar47 + lVar2);
  dVar74 = *(double *)(lVar43 + lVar35);
  auVar56 = ___xmm_000000b0000000780000004000000008 & auVar64;
  dVar75 = *(double *)((ulonglong)auVar56._8_4_ + lVar2);
  dVar76 = *(double *)((ulonglong)auVar56._12_4_ + lVar35);
  dVar92 = *(double *)((ulonglong)auVar56._0_4_ + lVar36);
  dVar93 = *(double *)((ulonglong)auVar56._4_4_ + (longlong)pdVar39);
  auVar56 = ___xmm_000000b8000000800000004800000010 & auVar64;
  dVar95 = *(double *)((ulonglong)auVar56._8_4_ + lVar2);
  dVar97 = *(double *)((ulonglong)auVar56._12_4_ + lVar35);
  dVar98 = *(double *)((ulonglong)auVar56._0_4_ + lVar36);
  dVar78 = *(double *)((ulonglong)auVar56._4_4_ + (longlong)pdVar39);
  auVar56 = ___xmm_000000c0000000880000005000000018 & auVar64;
  dVar101 = *(double *)((ulonglong)auVar56._8_4_ + lVar2);
  dVar102 = *(double *)((ulonglong)auVar56._12_4_ + lVar35);
  dVar103 = *(double *)((ulonglong)auVar56._0_4_ + lVar36);
  dVar88 = *(double *)((ulonglong)auVar56._4_4_ + (longlong)pdVar39);
  auVar56 = ___xmm_000000c8000000900000005800000020 & auVar64;
  dVar106 = *(double *)((ulonglong)auVar56._8_4_ + lVar2);
  dVar107 = *(double *)((ulonglong)auVar56._12_4_ + lVar35);
  dVar110 = *(double *)((ulonglong)auVar56._0_4_ + lVar36);
  dVar114 = *(double *)((ulonglong)auVar56._4_4_ + (longlong)pdVar39);
  auVar64 = auVar64 & ___xmm_000000d0000000980000006000000028;
  dVar116 = *(double *)((ulonglong)auVar64._8_4_ + lVar2);
  dVar120 = *(double *)((ulonglong)auVar64._12_4_ + lVar35);
  dVar122 = *(double *)((ulonglong)auVar64._0_4_ + lVar36);
  dVar124 = *(double *)((ulonglong)auVar64._4_4_ + (longlong)pdVar39);
  auVar81._0_4_ = uVar50 << 7;
  auVar81._4_4_ = uVar85 << 7;
  auVar81._8_4_ = uVar86 << 7;
  auVar81._12_4_ = uVar89 << 7;
  auVar81 = auVar81 & auVar80;
  uVar40 = param_3 + auVar81._0_4_;
  lVar36 = param_3 + auVar81._4_4_;
  lVar2 = param_3 + auVar81._8_4_;
  lVar35 = param_3 + auVar81._12_4_;
  auVar56 = ___xmm_00000008000000080000000800000008 & auVar80;
  auVar57 = ___xmm_00000010000000100000001000000010 & auVar80;
  auVar55 = ___xmm_00000018000000180000001800000018 & auVar80;
  auVar58 = ___xmm_00000020000000200000002000000020 & auVar80;
  auVar59 = ___xmm_00000028000000280000002800000028 & auVar80;
  auVar60 = ___xmm_00000030000000300000003000000030 & auVar80;
  auVar61 = ___xmm_00000038000000380000003800000038 & auVar80;
  auVar62 = ___xmm_00000040000000400000004000000040 & auVar80;
  auVar63 = ___xmm_00000048000000480000004800000048 & auVar80;
  auVar64 = ___xmm_00000050000000500000005000000050 & auVar80;
  auVar65 = ___xmm_00000058000000580000005800000058 & auVar80;
  auVar66 = ___xmm_00000060000000600000006000000060 & auVar80;
  auVar67 = ___xmm_00000068000000680000006800000068 & auVar80;
  auVar68 = ___xmm_00000070000000700000007000000070 & auVar80;
  auVar69 = ___xmm_00000078000000780000007800000078 & auVar80;
  local_560[0xe] = (double)*(undefined8 *)(param_3 + auVar81._8_4_);
  local_560[0xf] = (double)*(undefined8 *)(param_3 + auVar81._12_4_);
  local_560[0xc] = (double)*(undefined8 *)(param_3 + auVar81._0_4_);
  local_560[0xd] = (double)*(undefined8 *)(param_3 + auVar81._4_4_);
  local_560[0x12] = (double)*(undefined8 *)((ulonglong)auVar56._8_4_ + lVar2);
  uStack_4c8 = *(undefined8 *)((ulonglong)auVar56._12_4_ + lVar35);
  local_560[0x10] = (double)*(undefined8 *)(auVar56._0_4_ + uVar40);
  local_560[0x11] = (double)*(undefined8 *)((ulonglong)auVar56._4_4_ + lVar36);
  local_4b0 = *(undefined8 *)((ulonglong)auVar57._8_4_ + lVar2);
  uStack_4a8 = *(undefined8 *)((ulonglong)auVar57._12_4_ + lVar35);
  local_4c0 = *(undefined8 *)(auVar57._0_4_ + uVar40);
  uStack_4b8 = *(undefined8 *)((ulonglong)auVar57._4_4_ + lVar36);
  local_490 = *(undefined8 *)((ulonglong)auVar55._8_4_ + lVar2);
  uStack_488 = *(undefined8 *)((ulonglong)auVar55._12_4_ + lVar35);
  local_4a0 = *(undefined8 *)(auVar55._0_4_ + uVar40);
  uStack_498 = *(undefined8 *)((ulonglong)auVar55._4_4_ + lVar36);
  local_470 = *(undefined8 *)((ulonglong)auVar58._8_4_ + lVar2);
  uStack_468 = *(undefined8 *)((ulonglong)auVar58._12_4_ + lVar35);
  local_480 = *(undefined8 *)(auVar58._0_4_ + uVar40);
  uStack_478 = *(undefined8 *)((ulonglong)auVar58._4_4_ + lVar36);
  local_450 = *(undefined8 *)((ulonglong)auVar59._8_4_ + lVar2);
  uStack_448 = *(undefined8 *)((ulonglong)auVar59._12_4_ + lVar35);
  local_460 = *(undefined8 *)(auVar59._0_4_ + uVar40);
  uStack_458 = *(undefined8 *)((ulonglong)auVar59._4_4_ + lVar36);
  local_430 = *(undefined8 *)((ulonglong)auVar60._8_4_ + lVar2);
  uStack_428 = *(undefined8 *)((ulonglong)auVar60._12_4_ + lVar35);
  local_440 = *(undefined8 *)(auVar60._0_4_ + uVar40);
  uStack_438 = *(undefined8 *)((ulonglong)auVar60._4_4_ + lVar36);
  local_410 = *(undefined8 *)((ulonglong)auVar61._8_4_ + lVar2);
  uStack_408 = *(undefined8 *)((ulonglong)auVar61._12_4_ + lVar35);
  local_420 = *(undefined8 *)(auVar61._0_4_ + uVar40);
  uStack_418 = *(undefined8 *)((ulonglong)auVar61._4_4_ + lVar36);
  local_3f0 = *(undefined8 *)((ulonglong)auVar62._8_4_ + lVar2);
  uStack_3e8 = *(undefined8 *)((ulonglong)auVar62._12_4_ + lVar35);
  local_400 = *(undefined8 *)(auVar62._0_4_ + uVar40);
  uStack_3f8 = *(undefined8 *)((ulonglong)auVar62._4_4_ + lVar36);
  local_3d0 = *(undefined8 *)((ulonglong)auVar63._8_4_ + lVar2);
  uStack_3c8 = *(undefined8 *)((ulonglong)auVar63._12_4_ + lVar35);
  local_3e0 = *(undefined8 *)(auVar63._0_4_ + uVar40);
  uStack_3d8 = *(undefined8 *)((ulonglong)auVar63._4_4_ + lVar36);
  local_3b0 = *(undefined8 *)((ulonglong)auVar64._8_4_ + lVar2);
  uStack_3a8 = *(undefined8 *)((ulonglong)auVar64._12_4_ + lVar35);
  local_3c0 = *(undefined8 *)(auVar64._0_4_ + uVar40);
  uStack_3b8 = *(undefined8 *)((ulonglong)auVar64._4_4_ + lVar36);
  local_390 = *(undefined8 *)((ulonglong)auVar65._8_4_ + lVar2);
  uStack_388 = *(undefined8 *)((ulonglong)auVar65._12_4_ + lVar35);
  local_3a0 = *(undefined8 *)(auVar65._0_4_ + uVar40);
  uStack_398 = *(undefined8 *)((ulonglong)auVar65._4_4_ + lVar36);
  local_370 = *(undefined8 *)((ulonglong)auVar66._8_4_ + lVar2);
  uStack_368 = *(undefined8 *)((ulonglong)auVar66._12_4_ + lVar35);
  bVar45 = (char)((char)iVar91 << 4) >> 4;
  local_380 = *(undefined8 *)(auVar66._0_4_ + uVar40);
  uStack_378 = *(undefined8 *)((ulonglong)auVar66._4_4_ + lVar36);
  local_360[2] = (double)*(undefined8 *)((ulonglong)auVar67._8_4_ + lVar2);
  local_360[3] = (double)*(undefined8 *)((ulonglong)auVar67._12_4_ + lVar35);
  local_360[0] = *(double *)(auVar67._0_4_ + uVar40);
  local_360[1] = (double)*(undefined8 *)((ulonglong)auVar67._4_4_ + lVar36);
  local_360[6] = (double)*(undefined8 *)((ulonglong)auVar68._8_4_ + lVar2);
  local_360[7] = (double)*(undefined8 *)((ulonglong)auVar68._12_4_ + lVar35);
  local_360[4] = (double)*(undefined8 *)(auVar68._0_4_ + uVar40);
  local_360[5] = (double)*(undefined8 *)((ulonglong)auVar68._4_4_ + lVar36);
  local_360[10] = (double)*(undefined8 *)((ulonglong)auVar69._8_4_ + lVar2);
  local_360[0xb] = (double)*(undefined8 *)((ulonglong)auVar69._12_4_ + lVar35);
  local_360[8] = (double)*(undefined8 *)(auVar69._0_4_ + uVar40);
  local_360[9] = (double)*(undefined8 *)((ulonglong)auVar69._4_4_ + lVar36);
  dVar73 = *param_5;
  dVar51 = *param_5;
  dVar87 = param_5[4];
  dVar77 = param_5[4];
  dVar96 = param_5[8];
  dVar94 = param_5[8];
  dVar105 = param_5[0xc];
  dVar111 = param_5[0xc];
  lVar36 = 0x60;
  dVar113 = param_5[1];
  dVar119 = param_5[1];
  dVar121 = param_5[5];
  dVar123 = param_5[5];
  dVar130 = param_5[9];
  dVar131 = param_5[9];
  dVar132 = param_5[0xd];
  dVar133 = param_5[0xd];
  dVar134 = param_5[2];
  dVar135 = param_5[2];
  dVar136 = param_5[6];
  dVar4 = param_5[6];
  dVar6 = param_5[10];
  dVar5 = param_5[10];
  dVar8 = param_5[0xe];
  dVar7 = param_5[0xe];
  dVar9 = param_5[3];
  dVar10 = param_5[3];
  dVar12 = param_5[7];
  dVar11 = param_5[7];
  dVar14 = param_5[0xb];
  dVar13 = param_5[0xb];
  dVar16 = param_5[0xf];
  dVar15 = param_5[0xf];
  do {
    dVar18 = *(double *)((longlong)local_560 + lVar36);
    dVar19 = *(double *)((longlong)local_560 + lVar36 + 8);
    dVar20 = *(double *)((longlong)local_560 + lVar36 + 0x10);
    dVar21 = *(double *)((longlong)local_560 + lVar36 + 0x18);
    dVar22 = *(double *)((longlong)local_560 + lVar36 + 0x20);
    dVar23 = *(double *)((longlong)local_560 + lVar36 + 0x28);
    dVar24 = *(double *)((longlong)local_560 + lVar36 + 0x30);
    dVar25 = *(double *)((longlong)local_560 + lVar36 + 0x38);
    dVar26 = *(double *)((longlong)local_560 + lVar36 + 0x50);
    dVar27 = *(double *)((longlong)local_560 + lVar36 + 0x58);
    dVar28 = *(double *)((longlong)local_560 + lVar36 + 0x40);
    dVar29 = *(double *)((longlong)local_560 + lVar36 + 0x48);
    dVar30 = *(double *)((longlong)local_560 + lVar36 + 0x60);
    dVar31 = *(double *)((longlong)local_560 + lVar36 + 0x68);
    dVar32 = *(double *)((longlong)local_560 + lVar36 + 0x70);
    dVar33 = *(double *)((longlong)local_560 + lVar36 + 0x78);
    *(double *)((longlong)adStack_760 + lVar36 + 0x10) =
         dVar32 * dVar105 + dVar26 * dVar96 + dVar24 * dVar87 + dVar20 * dVar73 + 0.0;
    *(double *)(local_740 + lVar36 + -8) =
         dVar33 * dVar111 + dVar27 * dVar94 + dVar25 * dVar77 + dVar21 * dVar51 + auVar90._8_8_;
    *(double *)((longlong)adStack_760 + lVar36) =
         dVar30 * dVar105 + dVar28 * dVar96 + dVar22 * dVar87 + dVar18 * dVar73 + 0.0;
    *(double *)((longlong)adStack_760 + lVar36 + 8) =
         dVar31 * dVar111 + dVar29 * dVar94 + dVar23 * dVar77 + dVar19 * dVar51 + auVar90._8_8_;
    *(double *)((longlong)local_738 + lVar36 + 8) =
         dVar32 * dVar132 + dVar26 * dVar130 + dVar24 * dVar121 + dVar20 * dVar113 + 0.0;
    *(double *)((longlong)local_738 + lVar36 + 0x10) =
         dVar33 * dVar133 + dVar27 * dVar131 + dVar25 * dVar123 + dVar21 * dVar119 + 0.0;
    *(double *)(local_740 + lVar36) =
         dVar30 * dVar132 + dVar28 * dVar130 + dVar22 * dVar121 + dVar18 * dVar113 + 0.0;
    *(double *)((longlong)local_738 + lVar36) =
         dVar31 * dVar133 + dVar29 * dVar131 + dVar23 * dVar123 + dVar19 * dVar119 + 0.0;
    *(double *)(local_708 + lVar36 + -8) =
         dVar32 * dVar8 + dVar26 * dVar6 + dVar24 * dVar136 + dVar20 * dVar134 + 0.0;
    *(double *)(local_708 + lVar36) =
         dVar33 * dVar7 + dVar27 * dVar5 + dVar25 * dVar4 + dVar21 * dVar135 + 0.0;
    auVar90 = ZEXT816(0);
    *(double *)((longlong)local_738 + lVar36 + 0x18) =
         dVar30 * dVar8 + dVar28 * dVar6 + dVar22 * dVar136 + dVar18 * dVar134 + 0.0;
    *(double *)((longlong)local_738 + lVar36 + 0x20) =
         dVar31 * dVar7 + dVar29 * dVar5 + dVar23 * dVar4 + dVar19 * dVar135 + 0.0;
    *(double *)((longlong)local_700 + lVar36 + 0x10) =
         dVar32 * dVar16 + dVar26 * dVar14 + dVar24 * dVar12 + dVar20 * dVar9 + 0.0;
    *(double *)((longlong)local_700 + lVar36 + 0x18) =
         dVar33 * dVar15 + dVar27 * dVar13 + dVar25 * dVar11 + dVar21 * dVar10 + 0.0;
    *(double *)((longlong)local_700 + lVar36) =
         dVar30 * dVar16 + dVar28 * dVar14 + dVar22 * dVar12 + dVar18 * dVar9 + 0.0;
    *(double *)((longlong)local_700 + lVar36 + 8) =
         dVar31 * dVar15 + dVar29 * dVar13 + dVar23 * dVar11 + dVar19 * dVar10 + 0.0;
    lVar36 = lVar36 + 0x80;
  } while (lVar36 != 0x260);
  local_c40._8_8_ = dStack_678;
  local_c40._0_8_ = local_680;
  dVar77 = (dVar52 + dVar103) * ___xmm_3fe00000000000003fe0000000000000;
  dVar87 = (dVar53 + dVar88) * _UNK_150689678;
  dVar94 = (dVar92 + dVar110) * ___xmm_3fe00000000000003fe0000000000000;
  dVar96 = (dVar93 + dVar114) * _UNK_150689678;
  dVar105 = (dVar54 + dVar101) * ___xmm_3fe00000000000003fe0000000000000;
  dVar113 = (dVar74 + dVar102) * _UNK_150689678;
  dVar51 = (dVar75 + dVar106) * ___xmm_3fe00000000000003fe0000000000000;
  dVar73 = (dVar76 + dVar107) * _UNK_150689678;
  dVar111 = (dVar95 + dVar116) * ___xmm_3fe00000000000003fe0000000000000;
  dVar119 = (dVar97 + dVar120) * _UNK_150689678;
  local_c80._0_8_ = dVar111 * local_5f0 + dVar51 * local_670 + dVar105 * local_700[2];
  local_c80._8_8_ = dVar119 * dStack_5e8 + dVar73 * dStack_668 + dVar113 * local_700[3];
  dVar121 = (dVar98 + dVar122) * ___xmm_3fe00000000000003fe0000000000000;
  dVar123 = (dVar78 + dVar124) * _UNK_150689678;
  dVar101 = (dVar101 - dVar54) * ___xmm_3fe00000000000003fe0000000000000;
  dVar102 = (dVar102 - dVar74) * _UNK_150689678;
  dVar130 = (dVar103 - dVar52) * ___xmm_3fe00000000000003fe0000000000000;
  dVar132 = (dVar88 - dVar53) * _UNK_150689678;
  dVar103 = (dVar106 - dVar75) * ___xmm_3fe00000000000003fe0000000000000;
  dVar88 = (dVar107 - dVar76) * _UNK_150689678;
  dVar52 = (dVar110 - dVar92) * ___xmm_3fe00000000000003fe0000000000000;
  dVar53 = (dVar114 - dVar93) * _UNK_150689678;
  dVar122 = (dVar122 - dVar98) * ___xmm_3fe00000000000003fe0000000000000;
  dVar124 = (dVar124 - dVar78) * _UNK_150689678;
  dVar106 = (dVar116 - dVar95) * ___xmm_3fe00000000000003fe0000000000000;
  dVar107 = (dVar120 - dVar97) * _UNK_150689678;
  local_cd0._8_8_ = local_700[1] * dVar132;
  local_cd0._0_8_ = local_700[0] * dVar130;
  local_c90._8_8_ = dStack_6c8 * dVar102;
  local_c90._0_8_ = local_700[6] * dVar101;
  local_ca0._0_8_ =
       (double)((ulonglong)(local_670 * dVar103) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_700[2] * dVar101) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_ca0._8_8_ =
       (double)((ulonglong)(dStack_668 * dVar88) & _UNK_15061cc88) +
       (double)((ulonglong)(local_700[3] * dVar102) & _UNK_15061cc88);
  local_cc0._0_8_ =
       (double)((ulonglong)(local_650 * dVar103) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_700[6] * dVar101) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_cc0._8_8_ =
       (double)((ulonglong)(dStack_648 * dVar88) & _UNK_15061cc88) +
       (double)((ulonglong)(dStack_6c8 * dVar102) & _UNK_15061cc88);
  local_cb0._0_8_ =
       (double)((ulonglong)(local_660 * dVar52) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_700[4] * dVar130) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_cb0._8_8_ =
       (double)((ulonglong)(dStack_658 * dVar53) & _UNK_15061cc88) +
       (double)((ulonglong)(local_700[5] * dVar132) & _UNK_15061cc88);
  auVar82._0_8_ = (double)local_c80._0_8_ + local_570;
  auVar82._8_8_ = (double)local_c80._8_8_ + dStack_568;
  dVar54 = dVar121 * local_600 + dVar94 * local_680 + dVar77 * local_700[0] + local_580;
  dVar74 = dVar123 * dStack_5f8 + dVar96 * dStack_678 + dVar87 * local_700[1] + dStack_578;
  auVar108._0_8_ = dVar111 * local_5d0 + dVar51 * local_650 + dVar105 * local_700[6] + local_560[2];
  auVar108._8_8_ = dVar119 * dStack_5c8 + dVar73 * dStack_648 + dVar113 * dStack_6c8 + local_560[3];
  dVar98 = (double)((ulonglong)(local_600 * dVar122) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(local_680 * dVar52) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(local_700[0] * dVar130) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar78 = (double)((ulonglong)(dStack_5f8 * dVar124) & _UNK_15061cc88) +
           (double)((ulonglong)(dStack_678 * dVar53) & _UNK_15061cc88) +
           (double)((ulonglong)(local_700[1] * dVar132) & _UNK_15061cc88);
  dVar131 = dVar121 * local_5e0 + dVar94 * local_660 + dVar77 * local_700[4] + local_560[0];
  dVar133 = dVar123 * dStack_5d8 + dVar96 * dStack_658 + dVar87 * local_700[5] + local_560[1];
  dVar75 = (double)((ulonglong)(local_5f0 * dVar106) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)local_ca0._0_8_;
  dVar76 = (double)((ulonglong)(dStack_5e8 * dVar107) & _UNK_15061cc88) + (double)local_ca0._8_8_;
  dVar110 = dVar111 * local_5b0 + dVar51 * local_630 + dVar105 * local_6b0 + local_560[6];
  dVar114 = dVar119 * dStack_5a8 + dVar73 * dStack_628 + dVar113 * dStack_6a8 + local_560[7];
  dVar95 = (double)((ulonglong)(local_5e0 * dVar122) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)local_cb0._0_8_;
  dVar97 = (double)((ulonglong)(dStack_5d8 * dVar124) & _UNK_15061cc88) + (double)local_cb0._8_8_;
  auVar125._0_8_ = dVar121 * local_5c0 + dVar94 * local_640 + dVar77 * local_6c0 + local_560[4];
  auVar125._8_8_ = dVar123 * dStack_5b8 + dVar96 * dStack_638 + dVar87 * dStack_6b8 + local_560[5];
  dVar92 = (double)((ulonglong)(local_5d0 * dVar106) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)local_cc0._0_8_;
  dVar93 = (double)((ulonglong)(dStack_5c8 * dVar107) & _UNK_15061cc88) + (double)local_cc0._8_8_;
  dVar116 = (double)((ulonglong)(dVar122 * local_5c0) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(dVar52 * local_640) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(dVar130 * local_6c0) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar120 = (double)((ulonglong)(dVar124 * dStack_5b8) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar53 * dStack_638) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar132 * dStack_6b8) & _UNK_15061cc88);
  dVar52 = (double)((ulonglong)(dVar106 * local_5b0) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(dVar103 * local_630) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(dVar101 * local_6b0) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar53 = (double)((ulonglong)(dVar107 * dStack_5a8) & _UNK_15061cc88) +
           (double)((ulonglong)(dVar88 * dStack_628) & _UNK_15061cc88) +
           (double)((ulonglong)(dVar102 * dStack_6a8) & _UNK_15061cc88);
  local_c60._8_8_ = dVar74 - dVar78;
  local_c60._0_8_ = dVar54 - dVar98;
  auVar126._0_8_ = auVar82._0_8_ - dVar75;
  auVar126._8_8_ = auVar82._8_8_ - dVar76;
  local_c70._8_8_ = dVar133 - dVar97;
  local_c70._0_8_ = dVar131 - dVar95;
  auVar100._8_8_ = dVar78 + dVar74;
  auVar100._0_8_ = dVar98 + dVar54;
  auVar127._0_8_ = auVar108._0_8_ - dVar92;
  auVar127._8_8_ = auVar108._8_8_ - dVar93;
  auVar129._0_8_ = dVar75 + auVar82._0_8_;
  auVar129._8_8_ = dVar76 + auVar82._8_8_;
  local_c20._8_8_ = auVar125._8_8_ - dVar120;
  local_c20._0_8_ = auVar125._0_8_ - dVar116;
  local_c50._8_8_ = dVar97 + dVar133;
  local_c50._0_8_ = dVar95 + dVar131;
  auVar128._0_8_ = dVar110 - dVar52;
  auVar128._8_8_ = dVar114 - dVar53;
  auVar104._0_8_ = dVar92 + auVar108._0_8_;
  auVar104._8_8_ = dVar93 + auVar108._8_8_;
  auVar115._8_8_ = auVar104._8_8_;
  auVar115._0_8_ = auVar104._0_8_;
  auVar83._0_8_ = dVar116 + auVar125._0_8_;
  auVar83._8_8_ = dVar120 + auVar125._8_8_;
  auVar118._0_8_ = dVar52 + dVar110;
  auVar118._8_8_ = dVar53 + dVar114;
  auVar117[0] = -(local_bd0[0] == '\0');
  auVar117[1] = -(local_bd0[1] == '\0');
  auVar117[2] = -(local_bd0[2] == '\0');
  auVar117[3] = -(local_bd0[3] == '\0');
  auVar117[4] = -(local_bd0[4] == '\0');
  auVar117[5] = -(local_bd0[5] == '\0');
  auVar117[6] = -(local_bd0[6] == '\0');
  auVar117[7] = -(local_bd0[7] == '\0');
  auVar117[8] = -(local_bd0[8] == '\0');
  auVar117[9] = -(local_bd0[9] == '\0');
  auVar117[10] = -(local_bd0[10] == '\0');
  auVar117[0xb] = -(local_bd0[0xb] == '\0');
  auVar117[0xc] = -(local_bd0[0xc] == '\0');
  auVar117[0xd] = -(local_bd0[0xd] == '\0');
  auVar117[0xe] = -(local_bd0[0xe] == '\0');
  auVar117[0xf] = -(local_bd0[0xf] == '\0');
  auVar70._8_4_ = 0xffffffff;
  auVar70._0_8_ = 0xffffffffffffffff;
  auVar70._12_4_ = 0xffffffff;
  auVar56 = pmovsxbd(auVar82,auVar70 ^ auVar117);
  auVar59 = auVar80 & auVar56;
  iVar48 = movmskps(0x260,auVar59);
  auVar57 = auVar129;
  auVar55 = auVar126;
  auVar58 = auVar104;
  if (iVar48 == 0) {
LAB_140a8df0c:
    auVar59 = pmovsxbd(auVar59,auVar117);
    iVar91 = movmskps(iVar48,auVar80 & auVar59);
    if ((iVar91 != 0) && ((char)iVar91 != '\0')) {
      auVar80 = pmovzxbd(auVar59,auVar117);
      auVar71._0_4_ = auVar80._0_4_ << 0x1f;
      auVar71._4_4_ = auVar80._4_4_ << 0x1f;
      auVar71._8_4_ = auVar80._8_4_ << 0x1f;
      auVar71._12_4_ = auVar80._12_4_ << 0x1f;
      uVar38 = movmskps((int)uVar40,auVar71);
      cVar37 = (char)((char)uVar38 << 4) >> 4;
      param_5 = (double *)(ulonglong)CONCAT31((int3)(uVar38 >> 8),cVar37);
      if ((uVar38 & 1) == 0) {
        auVar72 = auVar56;
        auVar59 = auVar58;
        auVar60 = auVar57;
        local_bf0 = auVar125;
        local_be0 = auVar55;
        auVar80 = auVar108;
        if ((uVar38 & 2) != 0) goto LAB_140a8df8a;
LAB_140a8e907:
        local_c60 = blendpd(auVar108,auVar80,1);
        local_c70 = blendpd(auVar58,auVar59,1);
        local_c20._0_16_ = blendpd(auVar125,local_bf0,1);
        auVar100 = blendpd(auVar55,local_be0,1);
        local_c50 = blendpd(auVar57,auVar60,1);
        auVar83 = blendpd(auVar56,auVar72,1);
      }
      else {
        auVar72._8_8_ = auVar83._8_8_;
        auVar72._0_8_ = auVar83._0_8_;
        local_cd0._0_8_ = local_cd0._0_8_ & 0xffffffffffffff00 | 1;
        auVar59 = local_c70;
        auVar60 = local_c50;
        local_bf0 = local_c20._0_16_;
        local_be0 = auVar100;
        auVar80 = local_c60;
        if ((uVar38 & 2) == 0) goto LAB_140a8e907;
LAB_140a8df8a:
        local_cd0._0_8_ = local_cd0._0_8_ & 0xffffffffffff00ff | 0x100;
      }
      auVar84 = local_c40._0_16_;
      auVar56 = local_ca0;
      auVar57 = local_cc0;
      auVar55 = local_c90;
      auVar109 = local_c80;
      auVar61 = local_cb0;
      if ((uVar38 & 4) != 0) {
        auVar109._8_8_ = auVar104._8_8_;
        auVar109._0_8_ = auVar104._0_8_;
        auVar84._8_8_ = auVar118._8_8_;
        auVar84._0_8_ = auVar118._0_8_;
        local_cd0._0_8_ = local_cd0._0_8_ & 0xffffffffff00ffff | 0x10000;
        auVar56 = auVar127;
        auVar57 = auVar129;
        auVar55 = auVar126;
        auVar61 = auVar128;
      }
      if (-1 < cVar37) {
        auVar126 = blendpd(local_c90,auVar55,1);
        auVar127 = blendpd(local_ca0,auVar56,1);
        auVar128 = blendpd(local_cb0,auVar61,1);
        auVar129 = blendpd(local_cc0,auVar57,1);
        auVar115 = blendpd(local_c80,auVar109,1);
        auVar118 = blendpd(local_c40._0_16_,auVar84,1);
      }
      if (cVar37 < '\0') {
        local_cd0._0_8_ = local_cd0._0_8_ & 0xffffffff00ffffff | 0x1000000;
      }
      auVar108 = blendpd(local_c60,auVar80,1);
      local_c90 = blendpd(auVar126,auVar55,1);
      auVar58 = blendpd(local_c70,auVar59,1);
      local_ca0 = blendpd(auVar127,auVar56,1);
      auVar125 = blendpd(local_c20._0_16_,local_bf0,1);
      local_cb0 = blendpd(auVar128,auVar61,1);
      auVar55 = blendpd(auVar100,local_be0,1);
      local_cc0 = blendpd(auVar129,auVar57,1);
      auVar57 = blendpd(local_c50,auVar60,1);
      local_c80 = blendpd(auVar115,auVar109,1);
      auVar56 = blendpd(auVar83,auVar72,1);
      local_c40._0_16_ = blendpd(auVar118,auVar84,1);
    }
  }
  else {
    auVar57 = minpd(local_b20,auVar126);
    uVar38 = movmskps((int)uVar40,auVar56);
    bVar49 = (char)((char)uVar38 << 4) >> 4;
    if ((uVar38 & 4) != 0) {
      auVar56 = blendpd(auVar56,auVar57,1);
      local_c90 = auVar56;
    }
    if ((char)bVar49 < '\0') {
      auVar56 = blendpd(local_c90,auVar57,2);
      local_c90 = auVar56;
    }
    uVar40 = (ulonglong)bVar49;
    auVar57 = minpd(local_b10,auVar127);
    if ((bVar49 & 4) != 0) {
      auVar56 = blendpd(auVar56,auVar57,1);
      local_ca0 = auVar56;
    }
    if ((char)bVar49 < '\0') {
      auVar56 = blendpd(local_ca0,auVar57,2);
      local_ca0 = auVar56;
    }
    auVar57 = minpd(local_b00,auVar128);
    if ((bVar49 & 4) != 0) {
      auVar56 = blendpd(auVar56,auVar57,1);
      local_cb0 = auVar56;
    }
    if ((char)bVar49 < '\0') {
      auVar56 = blendpd(local_cb0,auVar57,2);
      local_cb0 = auVar56;
    }
    auVar57 = maxpd(local_af0,auVar129);
    if ((bVar49 & 4) != 0) {
      auVar56 = blendpd(auVar56,auVar57,1);
      local_cc0 = auVar56;
    }
    if ((char)bVar49 < '\0') {
      auVar56 = blendpd(local_cc0,auVar57,2);
      local_cc0 = auVar56;
    }
    auVar57 = maxpd(local_ae0,auVar115);
    if ((bVar49 & 4) != 0) {
      auVar56 = blendpd(auVar56,auVar57,1);
      local_c80 = auVar56;
    }
    if ((char)bVar49 < '\0') {
      auVar56 = blendpd(local_c80,auVar57,2);
      local_c80 = auVar56;
    }
    auVar59 = maxpd(local_ad0,auVar118);
    if ((bVar49 & 4) != 0) {
      local_c40._0_16_ = blendpd(auVar56,auVar59,1);
    }
    auVar58 = minpd(local_ba0,local_c70);
    auVar60 = minpd(local_b90,local_c20._0_16_);
    auVar55 = maxpd(local_b80,auVar100);
    auVar57 = maxpd(local_b70,local_c50);
    auVar56 = maxpd(auVar112,auVar83);
    if ((char)bVar49 < '\0') {
      local_c40._0_16_ = blendpd(local_c40._0_16_,auVar59,2);
    }
    auVar108 = minpd(local_bb0,local_c60);
    auVar58 = blendpd(auVar58,auVar58,1);
    auVar125 = blendpd(auVar60,auVar60,1);
    auVar55 = blendpd(auVar55,auVar55,1);
    auVar57 = blendpd(auVar57,auVar57,1);
    auVar56 = blendpd(auVar56,auVar56,1);
    param_5 = (double *)((ulonglong)CONCAT31((int3)((uint)iVar91 >> 8),bVar45) & 0xffffffffffffff0f)
    ;
    local_cd0 = local_bd0;
    if ((char)param_5 != (char)iVar48) goto LAB_140a8df0c;
  }
  if ((bVar45 & 1) == 0) {
    auVar59 = local_ba0;
    auVar60 = local_b90;
    auVar61 = local_b80;
    local_c20._0_16_ = local_b70;
    auVar62 = local_bd0;
    auVar63 = auVar112;
    auVar80 = local_bb0;
    if ((bVar45 & 2) != 0) goto LAB_140a8e1ac;
LAB_140a8e701:
    auVar108 = blendpd(local_bb0,auVar80,1);
    auVar58 = blendpd(local_ba0,auVar59,1);
    auVar125 = blendpd(local_b90,auVar60,1);
    auVar55 = blendpd(local_b80,auVar61,1);
    auVar57 = blendpd(local_b70,local_c20._0_16_,1);
    auVar56 = blendpd(auVar112,auVar63,1);
    auVar112 = pblendvb(auVar62,local_bd0,___xmm_000000000000000000000000ffffff00);
    auVar62 = auVar112;
  }
  else {
    auVar59 = auVar58;
    auVar60 = auVar125;
    auVar61 = auVar55;
    local_c20._0_16_ = auVar57;
    auVar62 = local_cd0;
    auVar63 = auVar56;
    auVar80 = auVar108;
    if ((bVar45 & 2) == 0) goto LAB_140a8e701;
LAB_140a8e1ac:
    auVar62 = pblendvb(auVar62,local_bd0,___xmm_000000000000000000000000ffffff00);
    auVar112 = local_cd0;
  }
  if ((bVar45 & 4) == 0) {
    auVar69 = pblendvb(auVar112,auVar62,___xmm_000000000000000000000000ffff00ff);
    auVar62 = local_af0;
    auVar64 = local_ae0;
    auVar65 = local_ad0;
    auVar68 = auVar69;
    auVar66 = local_b10;
    auVar67 = local_b00;
    auVar112 = local_b20;
    if ((char)bVar45 < '\0') goto LAB_140a8e288;
LAB_140a8e7fb:
    local_c90 = pblendw(local_b20,auVar112,0xf);
    if (-1 < (char)bVar45) goto LAB_140a8e817;
LAB_140a8e28e:
    if ((char)bVar45 < '\0') goto LAB_140a8e294;
LAB_140a8e833:
    local_cb0 = pblendw(local_b00,auVar67,0xf);
    if (-1 < (char)bVar45) goto LAB_140a8e84f;
LAB_140a8e29a:
    if ((char)bVar45 < '\0') goto LAB_140a8e2a0;
LAB_140a8e86a:
    local_c80 = pblendw(local_ae0,auVar64,0xf);
    if (-1 < (char)bVar45) goto LAB_140a8e885;
LAB_140a8e2a6:
    auVar68 = pblendvb(auVar68,auVar69,___xmm_000000000000000000000000ff00ffff);
  }
  else {
    auVar69 = pblendvb(auVar112,auVar62,___xmm_000000000000000000000000ffff00ff);
    auVar62 = local_cc0;
    auVar64 = local_c80;
    auVar65 = local_c40._0_16_;
    auVar68 = local_cd0;
    auVar66 = local_ca0;
    auVar67 = local_cb0;
    auVar112 = local_c90;
    if (-1 < (char)bVar45) goto LAB_140a8e7fb;
LAB_140a8e288:
    if ((char)bVar45 < '\0') goto LAB_140a8e28e;
LAB_140a8e817:
    local_ca0 = pblendw(local_b10,auVar66,0xf);
    if (-1 < (char)bVar45) goto LAB_140a8e833;
LAB_140a8e294:
    if ((char)bVar45 < '\0') goto LAB_140a8e29a;
LAB_140a8e84f:
    local_cc0 = pblendw(local_af0,auVar62,0xf);
    if (-1 < (char)bVar45) goto LAB_140a8e86a;
LAB_140a8e2a0:
    if ((char)bVar45 < '\0') goto LAB_140a8e2a6;
LAB_140a8e885:
    local_c40._0_16_ = pblendw(local_ad0,auVar65,0xf);
    auVar68 = pblendvb(auVar68,auVar69,___xmm_000000000000000000000000ff00ffff);
  }
  if (-1 < (char)bVar45) {
    local_cd0 = auVar68;
  }
  local_bd0 = pblendvb(local_cd0,auVar68,___xmm_00000000000000000000000000ffffff);
  local_bb0 = blendpd(auVar108,auVar80,1);
  local_b20 = pblendw(local_c90,auVar112,0xf);
  local_ba0 = blendpd(auVar58,auVar59,1);
  local_b10 = pblendw(local_ca0,auVar66,0xf);
  local_b90 = blendpd(auVar125,auVar60,1);
  local_b00 = pblendw(local_cb0,auVar67,0xf);
  local_b80 = blendpd(auVar55,auVar61,1);
  local_af0 = pblendw(local_cc0,auVar62,0xf);
  local_b70 = blendpd(auVar57,local_c20._0_16_,1);
  local_ae0 = pblendw(local_c80,auVar64,0xf);
  auVar112 = blendpd(auVar56,auVar63,1);
  local_ad0 = pblendw(local_c40._0_16_,auVar65,0xf);
  pdVar39 = param_5;
LAB_140a8e3e2:
  local_7e0 = local_bb0._0_8_;
  adStack_7d8[0] = (double)local_ba0._0_8_;
  local_7a8 = local_bb0._8_8_;
  local_770 = local_b20._0_8_;
  local_738[0] = (double)local_b20._8_8_;
  local_7a0 = local_ba0._8_8_;
  uStack_798 = local_b90._8_8_;
  local_768 = local_b10._0_8_;
  adStack_760[0] = (double)local_b00._0_8_;
  local_738[1] = (double)local_b10._8_8_;
  local_738[2] = (double)local_b00._8_8_;
  adStack_7d8[1] = (double)local_b90._0_8_;
  local_7c8[0] = (double)local_b80._0_8_;
  local_7c8[1] = (double)local_b70._0_8_;
  local_790 = local_b80._8_8_;
  uStack_788 = local_b70._8_8_;
  adStack_760[1] = (double)local_af0._0_8_;
  adStack_760[2] = (double)local_ae0._0_8_;
  local_738[3] = (double)local_af0._8_8_;
  local_738[4] = (double)local_ae0._8_8_;
  local_7c8[2] = (double)auVar112._0_8_;
  local_780 = auVar112._8_8_;
  adStack_760[3] = (double)local_ad0._0_8_;
  local_738[5] = (double)local_ad0._8_8_;
  local_7b0[0] = local_bd0[0];
  local_778 = local_bd0[1];
  local_740[0] = local_bd0[2];
  local_708[0] = local_bd0[3];
  auVar112._0_4_ = -(uint)((int)(uint)__xmm_00000003000000020000000100000000 < (int)param_7);
  auVar112._4_4_ = -(uint)((int)__xmm_00000003000000020000000100000000._4_4_ < (int)param_7);
  auVar112._8_4_ = -(uint)((int)_UNK_150631e08 < (int)param_7);
  auVar112._12_4_ = -(uint)((int)_UNK_150631e0c < (int)param_7);
  uVar38 = movmskps((int)pdVar39,auVar112);
  if (uVar38 != 0) {
    uVar40 = (ulonglong)(uVar38 & 0xff);
    do {
      if (uVar40 == 0) {
        uVar41 = 0x40;
      }
      else {
        uVar41 = 0;
        for (uVar17 = uVar40; (uVar17 & 1) == 0; uVar17 = uVar17 >> 1 | 0x8000000000000000) {
          uVar41 = uVar41 + 1;
        }
      }
      lVar36 = uVar41 * 0x38;
      cVar44 = param_6[3][0];
      cVar37 = local_7b0[lVar36];
      if ((cVar44 == '\0') || (cVar37 == '\0')) {
        if (cVar37 == '\0') {
          cVar44 = param_6[3][0];
          dVar74 = *(double *)param_6[2];
          dVar54 = *(double *)(param_6[1] + 8);
          dVar53 = *(double *)param_6[1];
          uVar79 = *(undefined8 *)*param_6;
          dVar52 = *(double *)(*param_6 + 8);
          dVar75 = *(double *)(param_6[2] + 8);
        }
        else {
          uVar79 = *(undefined8 *)*(undefined1 (*) [16])(&local_7e0 + uVar41 * 7);
          dVar52 = adStack_7d8[uVar41 * 7];
          dVar53 = adStack_7d8[uVar41 * 7 + 1];
          dVar54 = local_7c8[uVar41 * 7];
          dVar74 = local_7c8[uVar41 * 7 + 1];
          cVar44 = cVar37;
          dVar75 = *(double *)(local_7b0 + lVar36 + -8);
        }
      }
      else {
        auVar112 = minpd(*param_6,*(undefined1 (*) [16])(&local_7e0 + uVar41 * 7));
        uVar79 = auVar112._0_8_;
        dVar52 = auVar112._8_8_;
        dVar53 = *(double *)param_6[1];
        if (adStack_7d8[uVar41 * 7 + 1] <= *(double *)param_6[1]) {
          dVar53 = adStack_7d8[uVar41 * 7 + 1];
        }
        auVar112 = maxpd(*(undefined1 (*) [16])(param_6[1] + 8),
                         *(undefined1 (*) [16])(local_7c8 + uVar41 * 7));
        dVar54 = auVar112._0_8_;
        dVar74 = auVar112._8_8_;
        dVar75 = *(double *)(param_6[2] + 8);
        if (*(double *)(param_6[2] + 8) <= *(double *)(local_7b0 + lVar36 + -8)) {
          dVar75 = *(double *)(local_7b0 + lVar36 + -8);
        }
      }
      uVar40 = uVar40 & ~(1L << (uVar41 & 0x3f));
      *(undefined8 *)*param_6 = uVar79;
      *(double *)(*param_6 + 8) = dVar52;
      *(double *)param_6[1] = dVar53;
      *(double *)(param_6[1] + 8) = dVar54;
      *(double *)param_6[2] = dVar74;
      *(double *)(param_6[2] + 8) = dVar75;
      param_6[3][0] = cVar44;
    } while (uVar40 != 0);
  }
  return;
}

// BoxCalcBoundsFromTransformGroup_sse4 @ 140a8ea90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void BoxCalcBoundsFromTransformGroup_sse4
               (uint *param_1,longlong param_2,uint *param_3,double *param_4,
               undefined1 (*param_5) [16],uint param_6)

{
  int *piVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  double dVar10;
  double dVar12;
  double dVar14;
  double dVar16;
  uint *puVar18;
  int iVar19;
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
  byte bVar36;
  char cVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  double *pdVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  uint uVar44;
  longlong lVar45;
  char cVar46;
  int iVar47;
  byte bVar48;
  longlong lVar49;
  int iVar50;
  ulonglong uVar51;
  longlong lVar52;
  ulonglong uVar53;
  longlong lVar54;
  longlong lVar55;
  longlong lVar56;
  longlong lVar57;
  bool bVar58;
  double dVar59;
  undefined1 auVar61 [16];
  double dVar60;
  double dVar63;
  double dVar64;
  undefined1 auVar62 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  undefined8 uVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar74;
  double dVar75;
  double dVar76;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  double dVar82;
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar92;
  double dVar93;
  undefined1 in_XMM5 [16];
  undefined1 auVar94 [16];
  double dVar95;
  undefined1 unaff_XMM6 [16];
  double dVar96;
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar100;
  double dVar101;
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  double dVar106;
  double dVar107;
  double dVar108;
  double dVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  double dVar112;
  double dVar113;
  double dVar114;
  double dVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar118;
  double dVar119;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  double dVar122;
  double dVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  double dVar127;
  undefined1 auVar126 [16];
  double dVar128;
  double dVar129;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  double dVar132;
  double dVar133;
  double dVar134;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  double dVar137;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 local_cf0 [16];
  undefined1 local_ce0 [16];
  undefined1 local_cd0 [16];
  undefined1 local_cc0 [16];
  undefined1 local_cb0 [16];
  undefined1 local_ca0 [16];
  undefined1 local_c90 [16];
  undefined1 local_c80 [16];
  undefined1 local_c70 [16];
  undefined1 local_c60 [16];
  undefined1 local_c50 [32];
  undefined1 local_c30 [16];
  undefined1 local_c20 [16];
  undefined1 local_c10 [16];
  undefined1 local_c00 [16];
  undefined1 local_bf0 [16];
  undefined1 local_be0 [32];
  longlong local_bc0;
  longlong lStack_bb8;
  undefined1 local_bb0 [16];
  undefined1 local_ba0 [16];
  undefined1 local_b90 [16];
  undefined1 local_b80 [16];
  undefined1 local_b70 [16];
  undefined1 local_b60 [16];
  char local_b50;
  char cStack_b4f;
  char cStack_b4e;
  char cStack_b4d;
  char cStack_b4c;
  char cStack_b4b;
  char cStack_b4a;
  char cStack_b49;
  char cStack_b48;
  char cStack_b47;
  char cStack_b46;
  char cStack_b45;
  char cStack_b44;
  char cStack_b43;
  char cStack_b42;
  char cStack_b41;
  undefined1 local_b40 [16];
  undefined1 local_b30 [16];
  undefined1 local_b20 [16];
  undefined1 local_b10 [16];
  undefined1 local_b00 [16];
  undefined1 local_af0 [16];
  undefined1 local_ad0 [16];
  undefined1 local_ab0 [16];
  undefined1 local_aa0 [16];
  undefined1 local_a10 [16];
  undefined1 local_a00 [16];
  undefined1 local_9f0 [16];
  longlong local_9b0;
  longlong lStack_9a8;
  undefined1 local_900 [16];
  undefined1 local_8f0 [16];
  undefined8 local_7e0;
  double adStack_7d8 [2];
  double local_7c8 [3];
  char local_7b0 [8];
  undefined8 local_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined1 local_778;
  undefined8 local_770;
  undefined8 local_768;
  double adStack_760 [4];
  undefined1 local_740 [8];
  double local_738 [6];
  undefined1 local_708 [8];
  double local_700 [7];
  double dStack_6c8;
  double local_6c0;
  double dStack_6b8;
  double local_6b0;
  double dStack_6a8;
  double local_680;
  double dStack_678;
  double local_670;
  double dStack_668;
  double local_660;
  double dStack_658;
  double local_650;
  double dStack_648;
  double local_640;
  double dStack_638;
  double local_630;
  double dStack_628;
  double local_600;
  double dStack_5f8;
  double local_5f0;
  double dStack_5e8;
  double local_5e0;
  double dStack_5d8;
  double local_5d0;
  double dStack_5c8;
  double local_5c0;
  double dStack_5b8;
  double local_5b0;
  double dStack_5a8;
  double local_580;
  double dStack_578;
  double local_570;
  double dStack_568;
  double local_560 [19];
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  double local_360 [19];
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar11;
  double dVar13;
  double dVar15;
  double dVar17;
  
  uVar38 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar38 = param_6;
  }
  uVar38 = uVar38 & 0xfffffffc;
  pdVar41 = (double *)(ulonglong)uVar38;
  if ((int)uVar38 < 1) {
    auVar72 = ZEXT816(0);
    uVar44 = 0;
    auVar103 = ZEXT816(0);
    local_b00 = (undefined1  [16])0x0;
    local_b70 = (undefined1  [16])0x0;
    local_b10 = (undefined1  [16])0x0;
    local_b80 = (undefined1  [16])0x0;
    local_b20 = (undefined1  [16])0x0;
    local_b90 = (undefined1  [16])0x0;
    local_b30 = (undefined1  [16])0x0;
    local_ba0 = (undefined1  [16])0x0;
    local_b40 = (undefined1  [16])0x0;
    local_bb0 = (undefined1  [16])0x0;
    auVar69 = ZEXT816(0);
  }
  else {
    uVar44 = 0;
    local_bb0 = ZEXT816(0);
    auVar69 = ZEXT816(0);
    local_ba0 = ZEXT816(0);
    local_b40 = ZEXT816(0);
    local_b90 = ZEXT816(0);
    local_b30 = ZEXT816(0);
    local_b80 = ZEXT816(0);
    local_b20 = ZEXT816(0);
    local_b70 = ZEXT816(0);
    local_b10 = ZEXT816(0);
    auVar103 = ZEXT816(0);
    local_b00 = ZEXT816(0);
    auVar72 = ZEXT816(0);
    do {
      uVar42 = (ulonglong)(uVar44 * 7);
      uVar51 = (ulonglong)(uVar44 * 7);
      uVar43 = (ulonglong)(uVar44 * 7);
      uVar53 = (ulonglong)(uVar44 * 7);
      piVar1 = (int *)((longlong)param_1 + (ulonglong)(uVar44 * 4));
      auVar70._8_4_ = 0xffffffff;
      auVar70._0_8_ = 0xffffffffffffffff;
      auVar70._12_4_ = 0xffffffff;
      auVar71._0_4_ = -(uint)(*piVar1 == -1);
      auVar71._4_4_ = -(uint)(piVar1[1] == -1);
      auVar71._8_4_ = -(uint)(piVar1[2] == -1);
      auVar71._12_4_ = -(uint)(piVar1[3] == -1);
      auVar61[0] = -((char)param_3[uVar42 * 2 + 0xc] == '\0');
      auVar61[1] = -((char)param_3[uVar51 * 2 + 0x1a] == '\0');
      auVar61[2] = -((char)param_3[uVar43 * 2 + 0x28] == '\0');
      auVar61[3] = -((char)param_3[uVar53 * 2 + 0x36] == '\0');
      auVar61[4] = 0xff;
      auVar61[5] = 0xff;
      auVar61[6] = 0xff;
      auVar61[7] = 0xff;
      auVar61[8] = 0xff;
      auVar61[9] = 0xff;
      auVar61[10] = 0xff;
      auVar61[0xb] = 0xff;
      auVar61[0xc] = 0xff;
      auVar61[0xd] = 0xff;
      auVar61[0xe] = 0xff;
      auVar61[0xf] = 0xff;
      auVar61 = pmovsxbd(auVar61 ^ auVar70,auVar61 ^ auVar70);
      unaff_XMM6 = ~auVar71 & auVar61;
      uVar39 = movmskps((int)param_1,unaff_XMM6);
      pdVar41 = (double *)(ulonglong)uVar39;
      if (uVar39 != 0) {
        auVar78._0_4_ = uVar44 << 7;
        auVar78._4_4_ = uVar44 << 7;
        auVar78._8_4_ = uVar44 << 7;
        auVar78._12_4_ = uVar44 << 7;
        auVar61 = pmovzxdq(auVar70,auVar78);
        auVar79._4_4_ = 0;
        auVar79._0_4_ = auVar78._8_4_;
        auVar79._8_4_ = auVar78._12_4_;
        auVar79._12_4_ = 0;
        auVar94 = pmovsxdq(in_XMM5,unaff_XMM6);
        auVar83 = blendvps(ZEXT816(0),auVar61,auVar94);
        auVar81._12_4_ = unaff_XMM6._12_4_;
        auVar81._4_4_ = unaff_XMM6._8_4_;
        auVar81._0_4_ = unaff_XMM6._8_4_;
        auVar81._8_4_ = auVar81._12_4_;
        auVar78 = blendvps(ZEXT816(0),auVar79,auVar81);
        auVar61 = blendvps(ZEXT816(0),___xmm_00000000000000800000000000000000,auVar94);
        auVar88 = blendvps((undefined1  [16])0x0,___xmm_00000000000001800000000000000100,auVar81);
        auVar84 = blendvps(ZEXT816(0),___xmm_00000000000000880000000000000008,auVar94);
        auVar104 = blendvps(ZEXT816(0),___xmm_00000000000001880000000000000108,auVar81);
        auVar135 = blendvps(ZEXT816(0),___xmm_00000000000000900000000000000010,auVar94);
        auVar110 = blendvps(ZEXT816(0),___xmm_00000000000001900000000000000110,auVar81);
        auVar70 = blendvps(ZEXT816(0),___xmm_00000000000000980000000000000018,auVar94);
        auVar116 = blendvps(ZEXT816(0),___xmm_00000000000001980000000000000118,auVar81);
        auVar79 = blendvps(ZEXT816(0),___xmm_00000000000000a00000000000000020,auVar94);
        auVar120 = blendvps(ZEXT816(0),___xmm_00000000000001a00000000000000120,auVar81);
        auVar138 = blendvps(ZEXT816(0),___xmm_00000000000000a80000000000000028,auVar94);
        auVar89 = blendvps(ZEXT816(0),___xmm_00000000000001a80000000000000128,auVar81);
        auVar130 = blendvps(ZEXT816(0),___xmm_00000000000000b00000000000000030,auVar94);
        auVar98 = blendvps(ZEXT816(0),___xmm_00000000000001b00000000000000130,auVar81);
        auVar124 = blendvps(ZEXT816(0),___xmm_00000000000000b80000000000000038,auVar94);
        auVar90 = blendvps(ZEXT816(0),___xmm_00000000000001b80000000000000138,auVar81);
        auVar85 = blendvps(ZEXT816(0),___xmm_00000000000000c00000000000000040,auVar94);
        auVar86 = blendvps(ZEXT816(0),___xmm_00000000000001c00000000000000140,auVar81);
        auVar105 = blendvps(ZEXT816(0),___xmm_00000000000000c80000000000000048,auVar94);
        auVar111 = blendvps(ZEXT816(0),___xmm_00000000000001c80000000000000148,auVar81);
        auVar71 = blendvps(ZEXT816(0),___xmm_00000000000000d00000000000000050,auVar94);
        auVar136 = blendvps(ZEXT816(0),___xmm_00000000000001d00000000000000150,auVar81);
        auVar80 = blendvps(ZEXT816(0),___xmm_00000000000000d80000000000000058,auVar94);
        auVar117 = blendvps(ZEXT816(0),___xmm_00000000000001d80000000000000158,auVar81);
        auVar139 = blendvps(ZEXT816(0),___xmm_00000000000000e00000000000000060,auVar94);
        auVar121 = blendvps(ZEXT816(0),___xmm_00000000000001e00000000000000160,auVar81);
        local_9b0 = auVar89._0_8_;
        lStack_9a8 = auVar89._8_8_;
        auVar91 = blendvps(ZEXT816(0),___xmm_00000000000000e80000000000000068,auVar94);
        auVar99 = blendvps(ZEXT816(0),___xmm_00000000000001e80000000000000168,auVar81);
        auVar131 = blendvps(ZEXT816(0),___xmm_00000000000000f00000000000000070,auVar94);
        auVar125 = blendvps(ZEXT816(0),___xmm_00000000000001f00000000000000170,auVar81);
        auVar89 = blendvps(ZEXT816(0),___xmm_00000000000000f80000000000000078,auVar94);
        auVar94 = blendvps((undefined1  [16])0x0,___xmm_00000000000001f80000000000000178,auVar81);
        local_bc0 = auVar90._0_8_;
        lStack_bb8 = auVar90._8_8_;
        local_bf0._0_8_ = auVar85._0_8_;
        local_bf0._8_8_ = auVar85._8_8_;
        dVar60 = *(double *)(param_3 + uVar43 * 2 + 0x1c);
        dVar64 = *(double *)(param_3 + uVar53 * 2 + 0x2a);
        dVar67 = *(double *)(param_3 + uVar43 * 2 + 0x1e);
        dVar76 = *(double *)(param_3 + uVar53 * 2 + 0x2c);
        local_be0._0_8_ = auVar86._0_8_;
        local_be0._8_8_ = auVar86._8_8_;
        dVar77 = *(double *)(param_3 + uVar43 * 2 + 0x20);
        dVar82 = *(double *)(param_3 + uVar53 * 2 + 0x2e);
        dVar93 = *(double *)(param_3 + uVar43 * 2 + 0x22);
        dVar95 = *(double *)(param_3 + uVar53 * 2 + 0x30);
        dVar97 = *(double *)(param_3 + uVar43 * 2 + 0x24);
        dVar101 = *(double *)(param_3 + uVar53 * 2 + 0x32);
        dVar102 = *(double *)(param_3 + uVar43 * 2 + 0x26);
        dVar106 = *(double *)(param_3 + uVar53 * 2 + 0x34);
        dVar66 = *(double *)(param_3 + uVar42 * 2);
        dVar75 = *(double *)(param_3 + uVar51 * 2 + 0xe);
        dVar108 = *(double *)(param_3 + uVar42 * 2 + 2);
        dVar109 = *(double *)(param_3 + uVar51 * 2 + 0x10);
        dVar113 = *(double *)(param_3 + uVar42 * 2 + 4);
        dVar114 = *(double *)(param_3 + uVar51 * 2 + 0x12);
        dVar107 = *(double *)(param_3 + uVar42 * 2 + 6);
        dVar112 = *(double *)(param_3 + uVar51 * 2 + 0x14);
        dVar115 = *(double *)(param_3 + uVar42 * 2 + 8);
        dVar118 = *(double *)(param_3 + uVar51 * 2 + 0x16);
        dVar129 = *(double *)(param_3 + uVar42 * 2 + 10);
        dVar133 = *(double *)(param_3 + uVar51 * 2 + 0x18);
        lVar45 = auVar83._0_8_ + param_2;
        lVar56 = auVar83._8_8_ + param_2;
        lVar57 = auVar78._0_8_ + param_2;
        lVar55 = auVar78._8_8_ + param_2;
        local_360[0xe] = (double)*(undefined8 *)(auVar88._0_8_ + lVar57);
        local_360[0xf] = (double)*(undefined8 *)(auVar88._8_8_ + lVar55);
        local_360[0xc] = (double)*(undefined8 *)(auVar61._0_8_ + lVar45);
        local_360[0xd] = (double)*(undefined8 *)(auVar61._8_8_ + lVar56);
        local_360[0x12] = (double)*(undefined8 *)(auVar104._0_8_ + lVar57);
        uStack_2c8 = *(undefined8 *)(auVar104._8_8_ + lVar55);
        local_360[0x10] = (double)*(undefined8 *)(auVar84._0_8_ + lVar45);
        local_360[0x11] = (double)*(undefined8 *)(auVar84._8_8_ + lVar56);
        local_2b0 = *(undefined8 *)(auVar110._0_8_ + lVar57);
        uStack_2a8 = *(undefined8 *)(auVar110._8_8_ + lVar55);
        local_2c0 = *(undefined8 *)(auVar135._0_8_ + lVar45);
        uStack_2b8 = *(undefined8 *)(auVar135._8_8_ + lVar56);
        local_290 = *(undefined8 *)(auVar116._0_8_ + lVar57);
        uStack_288 = *(undefined8 *)(auVar116._8_8_ + lVar55);
        local_2a0 = *(undefined8 *)(auVar70._0_8_ + lVar45);
        uStack_298 = *(undefined8 *)(auVar70._8_8_ + lVar56);
        local_270 = *(undefined8 *)(auVar120._0_8_ + lVar57);
        uStack_268 = *(undefined8 *)(auVar120._8_8_ + lVar55);
        local_280 = *(undefined8 *)(auVar79._0_8_ + lVar45);
        uStack_278 = *(undefined8 *)(auVar79._8_8_ + lVar56);
        local_250 = *(undefined8 *)(local_9b0 + lVar57);
        uStack_248 = *(undefined8 *)(lStack_9a8 + lVar55);
        local_260 = *(undefined8 *)(auVar138._0_8_ + lVar45);
        uStack_258 = *(undefined8 *)(auVar138._8_8_ + lVar56);
        local_230 = *(undefined8 *)(auVar98._0_8_ + lVar57);
        uStack_228 = *(undefined8 *)(auVar98._8_8_ + lVar55);
        local_240 = *(undefined8 *)(auVar130._0_8_ + lVar45);
        uStack_238 = *(undefined8 *)(auVar130._8_8_ + lVar56);
        local_210 = *(undefined8 *)(local_bc0 + lVar57);
        uStack_208 = *(undefined8 *)(lStack_bb8 + lVar55);
        local_220 = *(undefined8 *)(auVar124._0_8_ + lVar45);
        uStack_218 = *(undefined8 *)(auVar124._8_8_ + lVar56);
        local_1f0 = *(undefined8 *)(local_be0._0_8_ + lVar57);
        uStack_1e8 = *(undefined8 *)(local_be0._8_8_ + lVar55);
        local_200 = *(undefined8 *)(local_bf0._0_8_ + lVar45);
        uStack_1f8 = *(undefined8 *)(local_bf0._8_8_ + lVar56);
        local_1d0 = *(undefined8 *)(auVar111._0_8_ + lVar57);
        uStack_1c8 = *(undefined8 *)(auVar111._8_8_ + lVar55);
        local_1e0 = *(undefined8 *)(auVar105._0_8_ + lVar45);
        uStack_1d8 = *(undefined8 *)(auVar105._8_8_ + lVar56);
        local_1b0 = *(undefined8 *)(auVar136._0_8_ + lVar57);
        uStack_1a8 = *(undefined8 *)(auVar136._8_8_ + lVar55);
        local_1c0 = *(undefined8 *)(auVar71._0_8_ + lVar45);
        uStack_1b8 = *(undefined8 *)(auVar71._8_8_ + lVar56);
        local_190 = *(undefined8 *)(auVar117._0_8_ + lVar57);
        uStack_188 = *(undefined8 *)(auVar117._8_8_ + lVar55);
        local_1a0 = *(undefined8 *)(auVar80._0_8_ + lVar45);
        uStack_198 = *(undefined8 *)(auVar80._8_8_ + lVar56);
        local_170 = *(undefined8 *)(auVar121._0_8_ + lVar57);
        uStack_168 = *(undefined8 *)(auVar121._8_8_ + lVar55);
        local_180 = *(undefined8 *)(auVar139._0_8_ + lVar45);
        uStack_178 = *(undefined8 *)(auVar139._8_8_ + lVar56);
        bVar48 = (char)((char)uVar39 << 4) >> 4;
        local_150 = *(undefined8 *)(auVar99._0_8_ + lVar57);
        uStack_148 = *(undefined8 *)(auVar99._8_8_ + lVar55);
        local_160 = *(undefined8 *)(auVar91._0_8_ + lVar45);
        uStack_158 = *(undefined8 *)(auVar91._8_8_ + lVar56);
        local_130 = *(undefined8 *)(auVar125._0_8_ + lVar57);
        uStack_128 = *(undefined8 *)(auVar125._8_8_ + lVar55);
        local_140 = *(undefined8 *)(auVar131._0_8_ + lVar45);
        uStack_138 = *(undefined8 *)(auVar131._8_8_ + lVar56);
        local_110 = *(undefined8 *)(auVar94._0_8_ + lVar57);
        uStack_108 = *(undefined8 *)(auVar94._8_8_ + lVar55);
        local_120 = *(undefined8 *)(auVar89._0_8_ + lVar45);
        uStack_118 = *(undefined8 *)(auVar89._8_8_ + lVar56);
        dVar59 = *param_4;
        dVar63 = *param_4;
        dVar65 = param_4[4];
        dVar74 = param_4[4];
        dVar87 = param_4[8];
        dVar92 = param_4[8];
        dVar100 = param_4[0xc];
        dVar96 = param_4[0xc];
        lVar45 = 0x60;
        dVar119 = param_4[1];
        dVar122 = param_4[1];
        dVar123 = param_4[5];
        dVar127 = param_4[5];
        dVar128 = param_4[9];
        dVar132 = param_4[9];
        dVar137 = param_4[0xd];
        dVar134 = param_4[0xd];
        dVar2 = param_4[2];
        dVar3 = param_4[2];
        dVar4 = param_4[6];
        dVar5 = param_4[6];
        dVar6 = param_4[10];
        dVar7 = param_4[10];
        dVar8 = param_4[0xe];
        dVar9 = param_4[0xe];
        dVar10 = param_4[3];
        dVar11 = param_4[3];
        dVar12 = param_4[7];
        dVar13 = param_4[7];
        dVar14 = param_4[0xb];
        dVar15 = param_4[0xb];
        dVar16 = param_4[0xf];
        dVar17 = param_4[0xf];
        do {
          dVar20 = *(double *)((longlong)local_360 + lVar45);
          dVar21 = *(double *)((longlong)local_360 + lVar45 + 8);
          dVar22 = *(double *)((longlong)local_360 + lVar45 + 0x10);
          dVar23 = *(double *)((longlong)local_360 + lVar45 + 0x18);
          dVar24 = *(double *)((longlong)local_360 + lVar45 + 0x20);
          dVar25 = *(double *)((longlong)local_360 + lVar45 + 0x28);
          dVar26 = *(double *)((longlong)local_360 + lVar45 + 0x30);
          dVar27 = *(double *)((longlong)local_360 + lVar45 + 0x38);
          dVar28 = *(double *)((longlong)local_360 + lVar45 + 0x50);
          dVar29 = *(double *)((longlong)local_360 + lVar45 + 0x58);
          dVar30 = *(double *)((longlong)local_360 + lVar45 + 0x40);
          dVar31 = *(double *)((longlong)local_360 + lVar45 + 0x48);
          dVar32 = *(double *)((longlong)local_360 + lVar45 + 0x60);
          dVar33 = *(double *)((longlong)local_360 + lVar45 + 0x68);
          dVar34 = *(double *)((longlong)local_360 + lVar45 + 0x70);
          dVar35 = *(double *)((longlong)local_360 + lVar45 + 0x78);
          *(double *)((longlong)adStack_760 + lVar45 + 0x10) =
               dVar34 * dVar100 + dVar28 * dVar87 + dVar26 * dVar65 + dVar22 * dVar59 + 0.0;
          *(double *)(local_740 + lVar45 + -8) =
               dVar35 * dVar96 + dVar29 * dVar92 + dVar27 * dVar74 + dVar23 * dVar63 + 0.0;
          *(double *)((longlong)adStack_760 + lVar45) =
               dVar32 * dVar100 + dVar30 * dVar87 + dVar24 * dVar65 + dVar20 * dVar59 + 0.0;
          *(double *)((longlong)adStack_760 + lVar45 + 8) =
               dVar33 * dVar96 + dVar31 * dVar92 + dVar25 * dVar74 + dVar21 * dVar63 + 0.0;
          *(double *)((longlong)local_738 + lVar45 + 8) =
               dVar34 * dVar137 + dVar28 * dVar128 + dVar26 * dVar123 + dVar22 * dVar119 + 0.0;
          *(double *)((longlong)local_738 + lVar45 + 0x10) =
               dVar35 * dVar134 + dVar29 * dVar132 + dVar27 * dVar127 + dVar23 * dVar122 + 0.0;
          *(double *)(local_740 + lVar45) =
               dVar32 * dVar137 + dVar30 * dVar128 + dVar24 * dVar123 + dVar20 * dVar119 + 0.0;
          *(double *)((longlong)local_738 + lVar45) =
               dVar33 * dVar134 + dVar31 * dVar132 + dVar25 * dVar127 + dVar21 * dVar122 + 0.0;
          *(double *)(local_708 + lVar45 + -8) =
               dVar34 * dVar8 + dVar28 * dVar6 + dVar26 * dVar4 + dVar22 * dVar2 + 0.0;
          *(double *)(local_708 + lVar45) =
               dVar35 * dVar9 + dVar29 * dVar7 + dVar27 * dVar5 + dVar23 * dVar3 + 0.0;
          *(double *)((longlong)local_738 + lVar45 + 0x18) =
               dVar32 * dVar8 + dVar30 * dVar6 + dVar24 * dVar4 + dVar20 * dVar2 + 0.0;
          *(double *)((longlong)local_738 + lVar45 + 0x20) =
               dVar33 * dVar9 + dVar31 * dVar7 + dVar25 * dVar5 + dVar21 * dVar3 + 0.0;
          *(double *)((longlong)local_700 + lVar45 + 0x10) =
               dVar34 * dVar16 + dVar28 * dVar14 + dVar26 * dVar12 + dVar22 * dVar10 + 0.0;
          *(double *)((longlong)local_700 + lVar45 + 0x18) =
               dVar35 * dVar17 + dVar29 * dVar15 + dVar27 * dVar13 + dVar23 * dVar11 + 0.0;
          *(double *)((longlong)local_700 + lVar45) =
               dVar32 * dVar16 + dVar30 * dVar14 + dVar24 * dVar12 + dVar20 * dVar10 + 0.0;
          *(double *)((longlong)local_700 + lVar45 + 8) =
               dVar33 * dVar17 + dVar31 * dVar15 + dVar25 * dVar13 + dVar21 * dVar11 + 0.0;
          lVar45 = lVar45 + 0x80;
        } while (lVar45 != 0x260);
        dVar65 = (dVar66 + dVar107) * ___xmm_3fe00000000000003fe0000000000000;
        dVar74 = (dVar75 + dVar112) * _UNK_150689678;
        dVar96 = (dVar108 + dVar115) * ___xmm_3fe00000000000003fe0000000000000;
        dVar100 = (dVar109 + dVar118) * _UNK_150689678;
        dVar87 = (dVar60 + dVar93) * ___xmm_3fe00000000000003fe0000000000000;
        dVar92 = (dVar64 + dVar95) * _UNK_150689678;
        dVar59 = (dVar67 + dVar97) * ___xmm_3fe00000000000003fe0000000000000;
        dVar63 = (dVar76 + dVar101) * _UNK_150689678;
        dVar134 = (dVar77 + dVar102) * ___xmm_3fe00000000000003fe0000000000000;
        dVar137 = (dVar82 + dVar106) * _UNK_150689678;
        dVar128 = (dVar113 + dVar129) * ___xmm_3fe00000000000003fe0000000000000;
        dVar132 = (dVar114 + dVar133) * _UNK_150689678;
        dVar66 = (dVar107 - dVar66) * ___xmm_3fe00000000000003fe0000000000000;
        dVar75 = (dVar112 - dVar75) * _UNK_150689678;
        dVar107 = (dVar93 - dVar60) * ___xmm_3fe00000000000003fe0000000000000;
        dVar112 = (dVar95 - dVar64) * _UNK_150689678;
        dVar115 = (dVar115 - dVar108) * ___xmm_3fe00000000000003fe0000000000000;
        dVar118 = (dVar118 - dVar109) * _UNK_150689678;
        dVar119 = (dVar97 - dVar67) * ___xmm_3fe00000000000003fe0000000000000;
        dVar122 = (dVar101 - dVar76) * _UNK_150689678;
        dVar67 = dVar134 * local_5f0 + dVar59 * local_670 + dVar87 * local_700[2] + local_570;
        dVar76 = dVar137 * dStack_5e8 + dVar63 * dStack_668 + dVar92 * local_700[3] + dStack_568;
        dVar97 = dVar128 * local_600 + dVar96 * local_680 + dVar65 * local_700[0] + local_580;
        dVar101 = dVar132 * dStack_5f8 + dVar100 * dStack_678 + dVar74 * local_700[1] + dStack_578;
        dVar123 = (dVar102 - dVar77) * ___xmm_3fe00000000000003fe0000000000000;
        dVar127 = (dVar106 - dVar82) * _UNK_150689678;
        dVar102 = (dVar129 - dVar113) * ___xmm_3fe00000000000003fe0000000000000;
        dVar106 = (dVar133 - dVar114) * _UNK_150689678;
        dVar108 = dVar134 * local_5d0 + dVar59 * local_650 + dVar87 * local_700[6] + local_560[2];
        dVar113 = dVar137 * dStack_5c8 + dVar63 * dStack_648 + dVar92 * dStack_6c8 + local_560[3];
        dVar93 = (double)((ulonglong)(local_600 * dVar102) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(local_680 * dVar115) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_700[0] * dVar66) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar95 = (double)((ulonglong)(dStack_5f8 * dVar106) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_678 * dVar118) & _UNK_15061cc88) +
                 (double)((ulonglong)(local_700[1] * dVar75) & _UNK_15061cc88);
        dVar109 = dVar128 * local_5e0 + dVar96 * local_660 + dVar65 * local_700[4] + local_560[0];
        dVar114 = dVar132 * dStack_5d8 + dVar100 * dStack_658 + dVar74 * local_700[5] + local_560[1]
        ;
        dVar77 = (double)((ulonglong)(local_5f0 * dVar123) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(local_670 * dVar119) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_700[2] * dVar107) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar82 = (double)((ulonglong)(dStack_5e8 * dVar127) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_668 * dVar122) & _UNK_15061cc88) +
                 (double)((ulonglong)(local_700[3] * dVar112) & _UNK_15061cc88);
        dVar59 = dVar134 * local_5b0 + dVar59 * local_630 + dVar87 * local_6b0 + local_560[6];
        dVar63 = dVar137 * dStack_5a8 + dVar63 * dStack_628 + dVar92 * dStack_6a8 + local_560[7];
        dVar87 = (double)((ulonglong)(local_5e0 * dVar102) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(local_660 * dVar115) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_700[4] * dVar66) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar92 = (double)((ulonglong)(dStack_5d8 * dVar106) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_658 * dVar118) & _UNK_15061cc88) +
                 (double)((ulonglong)(local_700[5] * dVar75) & _UNK_15061cc88);
        dVar129 = dVar128 * local_5c0 + dVar96 * local_640 + dVar65 * local_6c0 + local_560[4];
        dVar133 = dVar132 * dStack_5b8 + dVar100 * dStack_638 + dVar74 * dStack_6b8 + local_560[5];
        dVar60 = (double)((ulonglong)(local_5d0 * dVar123) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(local_650 * dVar119) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(local_700[6] * dVar107) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar64 = (double)((ulonglong)(dStack_5c8 * dVar127) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_648 * dVar122) & _UNK_15061cc88) +
                 (double)((ulonglong)(dStack_6c8 * dVar112) & _UNK_15061cc88);
        dVar102 = (double)((ulonglong)(dVar102 * local_5c0) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(dVar115 * local_640) & __xmm_7fffffffffffffff7fffffffffffffff
                          ) +
                  (double)((ulonglong)(dVar66 * local_6c0) & __xmm_7fffffffffffffff7fffffffffffffff)
        ;
        dVar106 = (double)((ulonglong)(dVar106 * dStack_5b8) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar118 * dStack_638) & _UNK_15061cc88) +
                  (double)((ulonglong)(dVar75 * dStack_6b8) & _UNK_15061cc88);
        dVar66 = (double)((ulonglong)(dVar123 * local_5b0) & __xmm_7fffffffffffffff7fffffffffffffff)
                 + (double)((ulonglong)(dVar119 * local_630) &
                           __xmm_7fffffffffffffff7fffffffffffffff) +
                   (double)((ulonglong)(dVar107 * local_6b0) &
                           __xmm_7fffffffffffffff7fffffffffffffff);
        dVar75 = (double)((ulonglong)(dVar127 * dStack_5a8) & _UNK_15061cc88) +
                 (double)((ulonglong)(dVar122 * dStack_628) & _UNK_15061cc88) +
                 (double)((ulonglong)(dVar112 * dStack_6a8) & _UNK_15061cc88);
        auVar83._0_8_ = dVar97 - dVar93;
        auVar83._8_8_ = dVar101 - dVar95;
        auVar85._0_8_ = dVar67 - dVar77;
        auVar85._8_8_ = dVar76 - dVar82;
        local_cd0._8_8_ = dVar114 - dVar92;
        local_cd0._0_8_ = dVar109 - dVar87;
        local_cb0._8_8_ = dVar95 + dVar101;
        local_cb0._0_8_ = dVar93 + dVar97;
        auVar84._0_8_ = dVar108 - dVar60;
        auVar84._8_8_ = dVar113 - dVar64;
        local_cf0._8_8_ = dVar82 + dVar76;
        local_cf0._0_8_ = dVar77 + dVar67;
        auVar80._0_8_ = dVar129 - dVar102;
        auVar80._8_8_ = dVar133 - dVar106;
        local_cc0._8_8_ = dVar92 + dVar114;
        local_cc0._0_8_ = dVar87 + dVar109;
        local_c90._8_8_ = dVar63 - dVar75;
        local_c90._0_8_ = dVar59 - dVar66;
        local_c80._8_8_ = dVar64 + dVar113;
        local_c80._0_8_ = dVar60 + dVar108;
        local_bf0._8_8_ = dVar106 + dVar133;
        local_bf0._0_8_ = dVar102 + dVar129;
        local_be0._8_8_ = dVar75 + dVar63;
        local_be0._0_8_ = dVar66 + dVar59;
        local_b50 = auVar72[0];
        cStack_b4f = auVar72[1];
        cStack_b4e = auVar72[2];
        cStack_b4d = auVar72[3];
        cStack_b4c = auVar72[4];
        cStack_b4b = auVar72[5];
        cStack_b4a = auVar72[6];
        cStack_b49 = auVar72[7];
        cStack_b48 = auVar72[8];
        cStack_b47 = auVar72[9];
        cStack_b46 = auVar72[10];
        cStack_b45 = auVar72[0xb];
        cStack_b44 = auVar72[0xc];
        cStack_b43 = auVar72[0xd];
        cStack_b42 = auVar72[0xe];
        cStack_b41 = auVar72[0xf];
        auVar86[0] = -(local_b50 == '\0');
        auVar86[1] = -(cStack_b4f == '\0');
        auVar86[2] = -(cStack_b4e == '\0');
        auVar86[3] = -(cStack_b4d == '\0');
        auVar86[4] = -(cStack_b4c == '\0');
        auVar86[5] = -(cStack_b4b == '\0');
        auVar86[6] = -(cStack_b4a == '\0');
        auVar86[7] = -(cStack_b49 == '\0');
        auVar86[8] = -(cStack_b48 == '\0');
        auVar86[9] = -(cStack_b47 == '\0');
        auVar86[10] = -(cStack_b46 == '\0');
        auVar86[0xb] = -(cStack_b45 == '\0');
        auVar86[0xc] = -(cStack_b44 == '\0');
        auVar86[0xd] = -(cStack_b43 == '\0');
        auVar86[0xe] = -(cStack_b42 == '\0');
        auVar86[0xf] = -(cStack_b41 == '\0');
        auVar61 = pmovsxbd(auVar86 ^ ___xmm_ffffffffffffffffffffffffffffffff,
                           auVar86 ^ ___xmm_ffffffffffffffffffffffffffffffff);
        iVar50 = movmskps(auVar131._0_4_,unaff_XMM6 & auVar61);
        if (iVar50 == 0) {
          uVar39 = 0x260;
          pdVar41 = param_4;
LAB_140a905bd:
          auVar61 = pmovsxbd(auVar61,auVar86);
          iVar50 = movmskps(uVar39,unaff_XMM6 & auVar61);
          if ((iVar50 != 0) && ((char)iVar50 != '\0')) {
            auVar61 = pmovzxbd(auVar61,auVar86);
            auVar89._0_4_ = auVar61._0_4_ << 0x1f;
            auVar89._4_4_ = auVar61._4_4_ << 0x1f;
            auVar89._8_4_ = auVar61._8_4_ << 0x1f;
            auVar89._12_4_ = auVar61._12_4_ << 0x1f;
            uVar39 = movmskps((int)pdVar41,auVar89);
            pdVar41 = (double *)(ulonglong)uVar39;
            if ((uVar39 & 1) == 0) {
              auVar70 = local_8f0;
              auVar71 = local_aa0;
              auVar78 = local_900;
              auVar79 = local_a00;
              auVar86 = local_a10;
              auVar61 = local_ab0;
              if ((uVar39 & 2) == 0) goto LAB_140a90ddc;
LAB_140a90648:
              local_9f0._0_8_ = local_9f0._0_8_ & 0xffffffffffff00ff | 0x100;
            }
            else {
              local_9f0._0_8_ = local_9f0._0_8_ & 0xffffffffffffff00 | 1;
              auVar70 = auVar80;
              auVar71 = local_bf0;
              auVar78 = local_cd0;
              auVar79 = local_cc0;
              auVar86 = local_cb0;
              auVar61 = auVar83;
              if ((uVar39 & 2) != 0) goto LAB_140a90648;
LAB_140a90ddc:
              auVar83 = blendpd(local_ab0,auVar61,1);
              local_cd0 = blendpd(local_900,auVar78,1);
              auVar80 = blendpd(local_8f0,auVar70,1);
              local_cb0 = blendpd(local_a10,auVar86,1);
              local_cc0 = blendpd(local_a00,auVar79,1);
              local_bf0 = blendpd(local_aa0,auVar71,1);
            }
            bVar58 = (uVar39 & 4) != 0;
            auVar89 = local_af0;
            if (bVar58) {
              auVar89 = auVar85;
            }
            cVar37 = (char)((char)uVar39 << 4) >> 4;
            auVar88 = local_b60;
            auVar90 = local_c20;
            auVar91 = local_ad0;
            auVar94 = local_c10;
            auVar81 = local_c00;
            if (bVar58) {
              pdVar41 = (double *)&DAT_00000001;
              local_9f0._0_8_ = local_9f0._0_8_ & 0xffffffffff00ffff | 0x10000;
              auVar88 = auVar84;
              auVar90 = local_cf0;
              auVar91 = local_c90;
              auVar94 = local_c80;
              auVar81 = local_be0._0_16_;
            }
            if (-1 < cVar37) {
              auVar85 = blendpd(local_af0,auVar89,1);
              auVar84 = blendpd(local_b60,auVar88,1);
              local_c90 = blendpd(local_ad0,auVar91,1);
              local_cf0 = blendpd(local_c20,auVar90,1);
              local_c80 = blendpd(local_c10,auVar94,1);
              local_be0._0_16_ = blendpd(local_c00,auVar81,1);
            }
            if (cVar37 < '\0') {
              local_9f0._0_8_ = local_9f0._0_8_ & 0xffffffff00ffffff | 0x1000000;
            }
            local_ab0 = blendpd(auVar83,auVar61,1);
            local_af0 = blendpd(auVar85,auVar89,1);
            local_900 = blendpd(local_cd0,auVar78,1);
            local_b60 = blendpd(auVar84,auVar88,1);
            local_8f0 = blendpd(auVar80,auVar70,1);
            local_ad0 = blendpd(local_c90,auVar91,1);
            local_a10 = blendpd(local_cb0,auVar86,1);
            local_c20 = blendpd(local_cf0,auVar90,1);
            local_a00 = blendpd(local_cc0,auVar79,1);
            local_c10 = blendpd(local_c80,auVar94,1);
            local_aa0 = blendpd(local_bf0,auVar71,1);
            local_c00 = blendpd(local_be0._0_16_,auVar81,1);
          }
        }
        else {
          uVar40 = movmskps((int)param_4,auVar61);
          auVar61 = minpd(local_bb0,auVar83);
          if ((uVar40 & 1) == 0) {
            auVar70 = local_ab0;
            if ((uVar40 & 2) == 0) goto LAB_140a90c29;
LAB_140a90211:
            auVar71 = minpd(auVar69,auVar85);
          }
          else {
            auVar70 = auVar61;
            if ((uVar40 & 2) != 0) goto LAB_140a90211;
LAB_140a90c29:
            auVar61 = blendpd(local_ab0,auVar70,1);
            auVar71 = minpd(auVar69,auVar85);
          }
          if ((uVar40 & 4) != 0) {
            local_af0 = blendpd(local_af0,auVar71,1);
          }
          bVar36 = (char)((char)uVar40 << 4) >> 4;
          pdVar41 = (double *)(ulonglong)CONCAT31((int3)(uVar40 >> 8),bVar36);
          if ((char)bVar36 < '\0') {
            local_af0 = blendpd(local_af0,auVar71,2);
          }
          auVar71 = minpd(local_ba0,local_cd0);
          if ((bVar36 & 1) == 0) {
            local_c50._0_16_ = local_900;
            if ((bVar36 & 2) == 0) goto LAB_140a90c6a;
LAB_140a9028c:
            auVar78 = minpd(local_b40,auVar84);
          }
          else {
            local_c50._0_16_ = auVar71;
            if ((bVar36 & 2) != 0) goto LAB_140a9028c;
LAB_140a90c6a:
            auVar71 = blendpd(local_900,local_c50._0_16_,1);
            auVar78 = minpd(local_b40,auVar84);
          }
          if ((bVar36 & 4) != 0) {
            local_b60 = blendpd(local_b60,auVar78,1);
          }
          if ((char)bVar36 < '\0') {
            local_b60 = blendpd(local_b60,auVar78,2);
          }
          auVar78 = minpd(local_b90,auVar80);
          if ((bVar36 & 1) == 0) {
            auVar79 = local_8f0;
            if ((bVar36 & 2) == 0) goto LAB_140a90c9e;
LAB_140a902f7:
            auVar89 = minpd(local_b30,local_c90);
          }
          else {
            auVar79 = auVar78;
            if ((bVar36 & 2) != 0) goto LAB_140a902f7;
LAB_140a90c9e:
            auVar78 = blendpd(local_8f0,auVar79,1);
            auVar89 = minpd(local_b30,local_c90);
          }
          if ((bVar36 & 4) != 0) {
            local_ad0 = blendpd(local_ad0,auVar89,1);
          }
          if ((char)bVar36 < '\0') {
            local_ad0 = blendpd(local_ad0,auVar89,2);
          }
          auVar89 = maxpd(local_b80,local_cb0);
          if ((bVar36 & 1) == 0) {
            auVar88 = local_a10;
            if ((bVar36 & 2) == 0) goto LAB_140a90cd3;
LAB_140a90364:
            auVar90 = maxpd(local_b20,local_cf0);
          }
          else {
            auVar88 = auVar89;
            if ((bVar36 & 2) != 0) goto LAB_140a90364;
LAB_140a90cd3:
            auVar89 = blendpd(local_a10,auVar88,1);
            auVar90 = maxpd(local_b20,local_cf0);
          }
          if ((bVar36 & 4) != 0) {
            local_c20 = blendpd(local_c20,auVar90,1);
          }
          if ((char)bVar36 < '\0') {
            local_c20 = blendpd(local_c20,auVar90,2);
          }
          auVar90 = maxpd(local_b70,local_cc0);
          if ((bVar36 & 1) == 0) {
            auVar91 = local_a00;
            if ((bVar36 & 2) == 0) goto LAB_140a90d07;
LAB_140a903d1:
            auVar94 = maxpd(local_b10,local_c80);
          }
          else {
            auVar91 = auVar90;
            if ((bVar36 & 2) != 0) goto LAB_140a903d1;
LAB_140a90d07:
            auVar90 = blendpd(local_a00,auVar91,1);
            auVar94 = maxpd(local_b10,local_c80);
          }
          if ((bVar36 & 4) != 0) {
            local_c10 = blendpd(local_c10,auVar94,1);
          }
          if ((char)bVar36 < '\0') {
            local_c10 = blendpd(local_c10,auVar94,2);
          }
          auVar94 = maxpd(auVar103,local_bf0);
          if ((bVar36 & 1) == 0) {
            auVar81 = local_aa0;
            if ((bVar36 & 2) == 0) goto LAB_140a90d3e;
LAB_140a90449:
            auVar98 = maxpd(local_b00,local_be0._0_16_);
          }
          else {
            auVar81 = auVar94;
            if ((bVar36 & 2) != 0) goto LAB_140a90449;
LAB_140a90d3e:
            auVar94 = blendpd(local_aa0,auVar81,1);
            auVar98 = maxpd(local_b00,local_be0._0_16_);
          }
          if ((bVar36 & 4) != 0) {
            local_c00 = blendpd(local_c00,auVar98,1);
          }
          if ((char)bVar36 < '\0') {
            local_c00 = blendpd(local_c00,auVar98,2);
          }
          auVar98 = local_9f0;
          if ((bVar36 & 1) != 0) {
            auVar98 = auVar72;
          }
          auVar99 = pblendvb(auVar98,local_9f0,___xmm_000000000000000000000000ffffff00);
          auVar98 = auVar99;
          if ((bVar36 & 2) != 0) {
            auVar98 = auVar72;
          }
          auVar99 = pblendvb(auVar98,auVar99,___xmm_000000000000000000000000ffff00ff);
          auVar98 = auVar99;
          if ((bVar36 & 4) != 0) {
            auVar98 = auVar72;
          }
          auVar99 = pblendvb(auVar98,auVar99,___xmm_000000000000000000000000ff00ffff);
          auVar98 = auVar72;
          if (-1 < (char)bVar36) {
            auVar98 = auVar99;
          }
          local_ab0 = blendpd(auVar61,auVar70,1);
          local_900 = blendpd(auVar71,local_c50._0_16_,1);
          local_8f0 = blendpd(auVar78,auVar79,1);
          local_a10 = blendpd(auVar89,auVar88,1);
          local_a00 = blendpd(auVar90,auVar91,1);
          local_aa0 = blendpd(auVar94,auVar81,1);
          local_9f0 = pblendvb(auVar98,auVar99,___xmm_00000000000000000000000000ffffff);
          uVar39 = CONCAT31((int3)(uVar39 >> 8),bVar48) & 0xffffff0f;
          auVar61 = ___xmm_00000000000000000000000000ffffff;
          if ((char)uVar39 != (char)iVar50) goto LAB_140a905bd;
        }
        bVar58 = (bVar48 & 1) != 0;
        auVar61 = local_bb0;
        if (bVar58) {
          auVar61 = local_ab0;
        }
        local_cf0 = local_b80;
        local_cb0 = local_b70;
        auVar70 = auVar72;
        auVar71 = local_ba0;
        auVar78 = local_b90;
        local_c80 = auVar103;
        if (bVar58) {
          auVar70 = local_9f0;
          auVar71 = local_900;
          auVar78 = local_8f0;
          local_cf0 = local_a10;
          local_cb0 = local_a00;
          local_c80 = local_aa0;
        }
        bVar58 = (bVar48 & 2) == 0;
        auVar79 = local_aa0;
        auVar80 = local_ab0;
        auVar83 = local_900;
        auVar84 = local_8f0;
        auVar85 = local_a10;
        auVar86 = local_a00;
        if (bVar58) {
          auVar80 = blendpd(local_bb0,auVar61,1);
          auVar83 = blendpd(local_ba0,auVar71,1);
          auVar84 = blendpd(local_b90,auVar78,1);
          auVar85 = blendpd(local_b80,local_cf0,1);
          auVar86 = blendpd(local_b70,local_cb0,1);
          auVar79 = blendpd(auVar103,local_c80,1);
        }
        local_b70 = auVar86;
        local_b80 = auVar85;
        local_b90 = auVar84;
        local_ba0 = auVar83;
        local_bb0 = auVar80;
        auVar72 = pblendvb(auVar70,auVar72,___xmm_000000000000000000000000ffffff00);
        auVar103 = auVar72;
        if (!bVar58) {
          auVar103 = local_9f0;
        }
        if ((bVar48 & 4) == 0) {
          auVar84 = pblendvb(auVar103,auVar72,___xmm_000000000000000000000000ffff00ff);
          local_ce0 = local_b10;
          auVar72 = auVar84;
          auVar103 = local_b30;
          auVar70 = local_b40;
          auVar80 = local_b20;
          auVar83 = local_b00;
          unaff_XMM6 = auVar69;
          if (-1 < (char)bVar48) goto LAB_140a90b4c;
LAB_140a90a7c:
          auVar69 = local_af0;
          if (-1 < (char)bVar48) goto LAB_140a90b65;
LAB_140a90a8b:
          auVar85 = local_b60;
          if (-1 < (char)bVar48) goto LAB_140a90b85;
LAB_140a90a9b:
          auVar86 = local_ad0;
          if (-1 < (char)bVar48) goto LAB_140a90ba8;
LAB_140a90aad:
          auVar89 = local_c20;
          if (-1 < (char)bVar48) goto LAB_140a90bc6;
LAB_140a90abc:
          auVar88 = local_c10;
          if (-1 < (char)bVar48) goto LAB_140a90be5;
LAB_140a90aca:
          auVar72 = pblendvb(auVar72,auVar84,___xmm_000000000000000000000000ff00ffff);
          auVar90 = local_c00;
        }
        else {
          local_ce0 = local_c10;
          auVar84 = pblendvb(auVar103,auVar72,___xmm_000000000000000000000000ffff00ff);
          local_ce0 = local_c10;
          auVar72 = local_9f0;
          auVar103 = local_ad0;
          auVar70 = local_b60;
          auVar80 = local_c20;
          auVar83 = local_c00;
          unaff_XMM6 = local_af0;
          if ((char)bVar48 < '\0') goto LAB_140a90a7c;
LAB_140a90b4c:
          auVar69 = pblendw(auVar69,unaff_XMM6,0xf);
          if ((char)bVar48 < '\0') goto LAB_140a90a8b;
LAB_140a90b65:
          auVar85 = blendps(local_b40,auVar70,3);
          if ((char)bVar48 < '\0') goto LAB_140a90a9b;
LAB_140a90b85:
          auVar86 = blendpd(local_b30,auVar103,1);
          if ((char)bVar48 < '\0') goto LAB_140a90aad;
LAB_140a90ba8:
          auVar89 = blendps(local_b20,auVar80,3);
          if ((char)bVar48 < '\0') goto LAB_140a90abc;
LAB_140a90bc6:
          auVar88 = pblendw(local_b10,local_ce0,0xf);
          if ((char)bVar48 < '\0') goto LAB_140a90aca;
LAB_140a90be5:
          auVar90 = blendps(local_b00,auVar83,3);
          auVar72 = pblendvb(auVar72,auVar84,___xmm_000000000000000000000000ff00ffff);
        }
        auVar84 = local_9f0;
        if (-1 < (char)bVar48) {
          auVar84 = auVar72;
        }
        auVar72 = pblendvb(auVar84,auVar72,___xmm_00000000000000000000000000ffffff);
        local_bb0 = blendpd(local_bb0,auVar61,1);
        auVar69 = pblendw(auVar69,unaff_XMM6,0xf);
        local_ba0 = blendps(local_ba0,auVar71,3);
        local_b40 = blendps(auVar85,auVar70,3);
        local_b90 = blendps(local_b90,auVar78,3);
        local_b30 = blendpd(auVar86,auVar103,1);
        local_b80 = blendps(local_b80,local_cf0,3);
        local_b20 = blendps(auVar89,auVar80,3);
        local_b70 = pblendw(local_b70,local_cb0,0xf);
        local_b10 = pblendw(auVar88,local_ce0,0xf);
        auVar103 = blendps(auVar79,local_c80,3);
        in_XMM5 = blendps(auVar90,auVar83,3);
        local_b00 = in_XMM5;
      }
      uVar44 = uVar44 + 4;
    } while ((int)uVar44 < (int)uVar38);
  }
  if ((int)param_6 <= (int)uVar44) goto LAB_140a92c18;
  auVar88._4_4_ = uVar44 * 7;
  auVar88._0_4_ = uVar44 * 7;
  auVar88._8_4_ = uVar44 * 7;
  auVar88._12_4_ = uVar44 * 7;
  auVar90._0_4_ =
       -(uint)((int)((uint)__xmm_00000003000000020000000100000000 | uVar44) < (int)param_6);
  auVar90._4_4_ =
       -(uint)((int)(__xmm_00000003000000020000000100000000._4_4_ | uVar44) < (int)param_6);
  auVar90._8_4_ = -(uint)((int)(_UNK_150631e08 | uVar44) < (int)param_6);
  auVar90._12_4_ = -(uint)((int)(_UNK_150631e0c | uVar44) < (int)param_6);
  auVar88 = auVar88 & auVar90;
  lVar45 = (longlong)auVar88._0_4_;
  iVar50 = auVar88._4_4_;
  iVar19 = auVar88._8_4_;
  pdVar41 = (double *)(param_3 + (longlong)auVar88._12_4_ * 2);
  auVar61 = ___xmm_000000d8000000a00000006800000030 & auVar90;
  bVar48 = *(byte *)((longlong)param_3 + (ulonglong)auVar61._0_4_ + lVar45 * 8);
  uVar38 = movmskps((uint)bVar48,auVar90);
  if ((~(byte)uVar38 & 9) == 0) {
    unaff_XMM6 = *(undefined1 (*) [16])((longlong)param_1 + (longlong)(int)(uVar44 << 2));
  }
  else {
    puVar18 = (uint *)((longlong)param_1 + (longlong)(int)(uVar44 << 2));
    param_1 = param_3;
    if ((uVar38 & 1) != 0) {
      unaff_XMM6 = ZEXT416(*puVar18);
      param_1 = puVar18;
    }
    if ((uVar38 & 2) != 0) {
      unaff_XMM6._0_8_ = unaff_XMM6._0_8_ & 0xffffffff | (ulonglong)puVar18[1] << 0x20;
      param_1 = puVar18;
    }
    if ((uVar38 & 4) != 0) {
      unaff_XMM6._8_8_ = unaff_XMM6._8_8_ & 0xffffffff00000000 | (ulonglong)puVar18[2];
      param_1 = puVar18;
    }
    if ((uVar38 & 8) != 0) {
      unaff_XMM6._8_8_ = unaff_XMM6._8_8_ & 0xffffffff | (ulonglong)puVar18[3] << 0x20;
      param_1 = puVar18;
    }
  }
  auVar94._8_4_ = 0xffffffff;
  auVar94._0_8_ = 0xffffffffffffffff;
  auVar94._12_4_ = 0xffffffff;
  auVar98._0_4_ = -(uint)(unaff_XMM6._0_4_ == -1);
  auVar98._4_4_ = -(uint)(unaff_XMM6._4_4_ == -1);
  auVar98._8_4_ = -(uint)(unaff_XMM6._8_4_ == -1);
  auVar98._12_4_ = -(uint)(unaff_XMM6._12_4_ == -1);
  auVar91[0] = -(bVar48 == 0);
  auVar91[1] = -(*(char *)((longlong)param_3 + (ulonglong)auVar61._4_4_ + (longlong)iVar50 * 8) ==
                '\0');
  auVar91[2] = -(*(char *)((longlong)param_3 + (ulonglong)auVar61._8_4_ + (longlong)iVar19 * 8) ==
                '\0');
  auVar91[3] = -(*(char *)((ulonglong)auVar61._12_4_ + (longlong)pdVar41) == '\0');
  auVar91[4] = 0xff;
  auVar91[5] = 0xff;
  auVar91[6] = 0xff;
  auVar91[7] = 0xff;
  auVar91[8] = 0xff;
  auVar91[9] = 0xff;
  auVar91[10] = 0xff;
  auVar91[0xb] = 0xff;
  auVar91[0xc] = 0xff;
  auVar91[0xd] = 0xff;
  auVar91[0xe] = 0xff;
  auVar91[0xf] = 0xff;
  auVar61 = pmovsxbd(auVar91 ^ auVar94,auVar91 ^ auVar94);
  auVar61 = ~auVar98 & auVar61 & auVar90;
  iVar47 = movmskps((int)param_1,auVar61);
  if (iVar47 == 0) goto LAB_140a92c18;
  auVar105._0_4_ = ___xmm_000000a8000000700000003800000000 & auVar90._0_4_;
  auVar105._4_4_ = _UNK_151287264 & auVar90._4_4_;
  auVar105._8_4_ = _UNK_151287268 & auVar90._8_4_;
  auVar105._12_4_ = _UNK_15128726c & auVar90._12_4_;
  auVar79 = ___xmm_000000b0000000780000004000000008 & auVar90;
  auVar78 = ___xmm_000000b8000000800000004800000010 & auVar90;
  auVar71 = ___xmm_000000c0000000880000005000000018 & auVar90;
  auVar70 = ___xmm_000000c8000000900000005800000020 & auVar90;
  auVar90 = auVar90 & ___xmm_000000d0000000980000006000000028;
  lVar55 = extractps(auVar105,2);
  dVar60 = *(double *)(param_3 + lVar45 * 2);
  dVar64 = *(double *)((longlong)param_3 + lVar55 + (longlong)iVar19 * 8);
  lVar56 = extractps(auVar105,1);
  dVar67 = *(double *)((longlong)param_3 + (ulonglong)auVar79._8_4_ + (longlong)iVar19 * 8);
  lVar55 = extractps(auVar105,3);
  dVar76 = *(double *)((longlong)param_3 + (ulonglong)auVar78._8_4_ + (longlong)iVar19 * 8);
  dVar77 = *(double *)((longlong)param_3 + (ulonglong)auVar71._8_4_ + (longlong)iVar19 * 8);
  dVar82 = *(double *)((longlong)param_3 + (ulonglong)auVar70._8_4_ + (longlong)iVar19 * 8);
  dVar93 = *(double *)((longlong)param_3 + (ulonglong)auVar90._8_4_ + (longlong)iVar19 * 8);
  dVar95 = *(double *)((longlong)param_3 + (ulonglong)auVar79._0_4_ + lVar45 * 8);
  dVar97 = *(double *)((longlong)param_3 + (ulonglong)auVar78._0_4_ + lVar45 * 8);
  dVar101 = *(double *)((longlong)param_3 + (ulonglong)auVar71._0_4_ + lVar45 * 8);
  dVar102 = *(double *)((longlong)param_3 + (ulonglong)auVar70._0_4_ + lVar45 * 8);
  dVar106 = *(double *)((longlong)param_3 + (ulonglong)auVar90._0_4_ + lVar45 * 8);
  dVar66 = *(double *)((longlong)param_3 + lVar56 + (longlong)iVar50 * 8);
  dVar75 = *(double *)(lVar55 + (longlong)pdVar41);
  dVar108 = *(double *)((ulonglong)auVar79._12_4_ + (longlong)pdVar41);
  dVar109 = *(double *)((longlong)param_3 + (ulonglong)auVar79._4_4_ + (longlong)iVar50 * 8);
  dVar113 = *(double *)((ulonglong)auVar78._12_4_ + (longlong)pdVar41);
  dVar114 = *(double *)((longlong)param_3 + (ulonglong)auVar78._4_4_ + (longlong)iVar50 * 8);
  dVar107 = *(double *)((ulonglong)auVar71._12_4_ + (longlong)pdVar41);
  dVar112 = *(double *)((longlong)param_3 + (ulonglong)auVar71._4_4_ + (longlong)iVar50 * 8);
  dVar115 = *(double *)((ulonglong)auVar70._12_4_ + (longlong)pdVar41);
  dVar118 = *(double *)((longlong)param_3 + (ulonglong)auVar70._4_4_ + (longlong)iVar50 * 8);
  dVar129 = *(double *)((ulonglong)auVar90._12_4_ + (longlong)pdVar41);
  dVar133 = *(double *)((longlong)param_3 + (ulonglong)auVar90._4_4_ + (longlong)iVar50 * 8);
  auVar104._0_4_ = uVar44 << 7;
  auVar104._4_4_ = uVar44 << 7;
  auVar104._8_4_ = uVar44 << 7;
  auVar104._12_4_ = uVar44 << 7;
  auVar104 = auVar104 & auVar61;
  auVar99._0_4_ = ___xmm_00000180000001000000008000000000 & auVar61._0_4_;
  auVar99._4_4_ = _UNK_151287ed4 & auVar61._4_4_;
  auVar99._8_4_ = _UNK_151287ed8 & auVar61._8_4_;
  auVar99._12_4_ = _UNK_151287edc & auVar61._12_4_;
  lVar45 = param_2 + auVar104._0_4_;
  lVar52 = auVar104._4_4_ + param_2;
  lVar56 = extractps(auVar99,1);
  lVar55 = auVar104._8_4_ + param_2;
  lVar49 = extractps(auVar99,2);
  lVar57 = extractps(auVar99,3);
  lVar54 = auVar104._12_4_ + param_2;
  auVar70 = ___xmm_00000188000001080000008800000008 & auVar61;
  auVar71 = ___xmm_00000190000001100000009000000010 & auVar61;
  auVar78 = ___xmm_00000198000001180000009800000018 & auVar61;
  auVar79 = ___xmm_000001a000000120000000a000000020 & auVar61;
  auVar80 = ___xmm_000001a800000128000000a800000028 & auVar61;
  auVar83 = ___xmm_000001b000000130000000b000000030 & auVar61;
  auVar84 = ___xmm_000001b800000138000000b800000038 & auVar61;
  auVar85 = ___xmm_000001c000000140000000c000000040 & auVar61;
  auVar86 = ___xmm_000001c800000148000000c800000048 & auVar61;
  auVar89 = ___xmm_000001d000000150000000d000000050 & auVar61;
  auVar88 = ___xmm_000001d800000158000000d800000058 & auVar61;
  auVar90 = ___xmm_000001e000000160000000e000000060 & auVar61;
  auVar91 = ___xmm_000001e800000168000000e800000068 & auVar61;
  auVar94 = ___xmm_000001f000000170000000f000000070 & auVar61;
  auVar81 = ___xmm_000001f800000178000000f800000078 & auVar61;
  uVar38 = auVar81._4_4_;
  local_560[0xe] = (double)*(undefined8 *)(lVar49 + lVar55);
  local_560[0xf] = (double)*(undefined8 *)(lVar57 + lVar54);
  local_560[0xc] = (double)*(undefined8 *)(param_2 + auVar104._0_4_);
  local_560[0xd] = (double)*(undefined8 *)(lVar56 + lVar52);
  local_560[0x12] = (double)*(undefined8 *)((ulonglong)auVar70._8_4_ + lVar55);
  uStack_4c8 = *(undefined8 *)((ulonglong)auVar70._12_4_ + lVar54);
  local_560[0x10] = (double)*(undefined8 *)((ulonglong)auVar70._0_4_ + lVar45);
  local_560[0x11] = (double)*(undefined8 *)((ulonglong)auVar70._4_4_ + lVar52);
  local_4b0 = *(undefined8 *)((ulonglong)auVar71._8_4_ + lVar55);
  uStack_4a8 = *(undefined8 *)((ulonglong)auVar71._12_4_ + lVar54);
  local_4c0 = *(undefined8 *)((ulonglong)auVar71._0_4_ + lVar45);
  uStack_4b8 = *(undefined8 *)((ulonglong)auVar71._4_4_ + lVar52);
  local_490 = *(undefined8 *)((ulonglong)auVar78._8_4_ + lVar55);
  uStack_488 = *(undefined8 *)((ulonglong)auVar78._12_4_ + lVar54);
  local_4a0 = *(undefined8 *)((ulonglong)auVar78._0_4_ + lVar45);
  uStack_498 = *(undefined8 *)((ulonglong)auVar78._4_4_ + lVar52);
  local_470 = *(undefined8 *)((ulonglong)auVar79._8_4_ + lVar55);
  uStack_468 = *(undefined8 *)((ulonglong)auVar79._12_4_ + lVar54);
  local_480 = *(undefined8 *)((ulonglong)auVar79._0_4_ + lVar45);
  uStack_478 = *(undefined8 *)((ulonglong)auVar79._4_4_ + lVar52);
  local_450 = *(undefined8 *)((ulonglong)auVar80._8_4_ + lVar55);
  uStack_448 = *(undefined8 *)((ulonglong)auVar80._12_4_ + lVar54);
  local_460 = *(undefined8 *)((ulonglong)auVar80._0_4_ + lVar45);
  uStack_458 = *(undefined8 *)((ulonglong)auVar80._4_4_ + lVar52);
  local_430 = *(undefined8 *)((ulonglong)auVar83._8_4_ + lVar55);
  uStack_428 = *(undefined8 *)((ulonglong)auVar83._12_4_ + lVar54);
  local_440 = *(undefined8 *)((ulonglong)auVar83._0_4_ + lVar45);
  uStack_438 = *(undefined8 *)((ulonglong)auVar83._4_4_ + lVar52);
  local_410 = *(undefined8 *)((ulonglong)auVar84._8_4_ + lVar55);
  uStack_408 = *(undefined8 *)((ulonglong)auVar84._12_4_ + lVar54);
  local_420 = *(undefined8 *)((ulonglong)auVar84._0_4_ + lVar45);
  uStack_418 = *(undefined8 *)((ulonglong)auVar84._4_4_ + lVar52);
  local_3f0 = *(undefined8 *)((ulonglong)auVar85._8_4_ + lVar55);
  uStack_3e8 = *(undefined8 *)((ulonglong)auVar85._12_4_ + lVar54);
  local_400 = *(undefined8 *)((ulonglong)auVar85._0_4_ + lVar45);
  uStack_3f8 = *(undefined8 *)((ulonglong)auVar85._4_4_ + lVar52);
  local_3d0 = *(undefined8 *)((ulonglong)auVar86._8_4_ + lVar55);
  uStack_3c8 = *(undefined8 *)((ulonglong)auVar86._12_4_ + lVar54);
  local_3e0 = *(undefined8 *)((ulonglong)auVar86._0_4_ + lVar45);
  uStack_3d8 = *(undefined8 *)((ulonglong)auVar86._4_4_ + lVar52);
  local_3b0 = *(undefined8 *)((ulonglong)auVar89._8_4_ + lVar55);
  uStack_3a8 = *(undefined8 *)((ulonglong)auVar89._12_4_ + lVar54);
  local_3c0 = *(undefined8 *)((ulonglong)auVar89._0_4_ + lVar45);
  uStack_3b8 = *(undefined8 *)((ulonglong)auVar89._4_4_ + lVar52);
  local_390 = *(undefined8 *)((ulonglong)auVar88._8_4_ + lVar55);
  uStack_388 = *(undefined8 *)((ulonglong)auVar88._12_4_ + lVar54);
  local_3a0 = *(undefined8 *)((ulonglong)auVar88._0_4_ + lVar45);
  uStack_398 = *(undefined8 *)((ulonglong)auVar88._4_4_ + lVar52);
  local_370 = *(undefined8 *)((ulonglong)auVar90._8_4_ + lVar55);
  uStack_368 = *(undefined8 *)((ulonglong)auVar90._12_4_ + lVar54);
  local_380 = *(undefined8 *)((ulonglong)auVar90._0_4_ + lVar45);
  uStack_378 = *(undefined8 *)((ulonglong)auVar90._4_4_ + lVar52);
  local_360[2] = (double)*(undefined8 *)((ulonglong)auVar91._8_4_ + lVar55);
  local_360[3] = (double)*(undefined8 *)((ulonglong)auVar91._12_4_ + lVar54);
  local_360[0] = *(double *)((ulonglong)auVar91._0_4_ + lVar45);
  local_360[1] = (double)*(undefined8 *)((ulonglong)auVar91._4_4_ + lVar52);
  bVar48 = (char)((char)iVar47 << 4) >> 4;
  local_360[6] = (double)*(undefined8 *)((ulonglong)auVar94._8_4_ + lVar55);
  local_360[7] = (double)*(undefined8 *)((ulonglong)auVar94._12_4_ + lVar54);
  local_360[4] = (double)*(undefined8 *)((ulonglong)auVar94._0_4_ + lVar45);
  local_360[5] = (double)*(undefined8 *)((ulonglong)auVar94._4_4_ + lVar52);
  local_360[10] = (double)*(undefined8 *)((ulonglong)auVar81._8_4_ + lVar55);
  local_360[0xb] = (double)*(undefined8 *)((ulonglong)auVar81._12_4_ + lVar54);
  local_360[8] = (double)*(undefined8 *)((ulonglong)auVar81._0_4_ + lVar45);
  local_360[9] = (double)*(undefined8 *)((ulonglong)uVar38 + lVar52);
  dVar63 = *param_4;
  dVar59 = *param_4;
  dVar65 = param_4[4];
  dVar74 = param_4[4];
  dVar92 = param_4[8];
  dVar87 = param_4[8];
  dVar96 = param_4[0xc];
  dVar100 = param_4[0xc];
  lVar45 = 0x60;
  dVar119 = param_4[1];
  dVar122 = param_4[1];
  dVar123 = param_4[5];
  dVar127 = param_4[5];
  dVar128 = param_4[9];
  dVar132 = param_4[9];
  dVar134 = param_4[0xd];
  dVar137 = param_4[0xd];
  dVar3 = param_4[2];
  dVar2 = param_4[2];
  dVar5 = param_4[6];
  dVar4 = param_4[6];
  dVar7 = param_4[10];
  dVar6 = param_4[10];
  dVar8 = param_4[0xe];
  dVar9 = param_4[0xe];
  dVar10 = param_4[3];
  dVar11 = param_4[3];
  dVar12 = param_4[7];
  dVar13 = param_4[7];
  dVar14 = param_4[0xb];
  dVar15 = param_4[0xb];
  dVar16 = param_4[0xf];
  dVar17 = param_4[0xf];
  do {
    dVar20 = *(double *)((longlong)local_560 + lVar45);
    dVar21 = *(double *)((longlong)local_560 + lVar45 + 8);
    dVar22 = *(double *)((longlong)local_560 + lVar45 + 0x10);
    dVar23 = *(double *)((longlong)local_560 + lVar45 + 0x18);
    dVar24 = *(double *)((longlong)local_560 + lVar45 + 0x20);
    dVar25 = *(double *)((longlong)local_560 + lVar45 + 0x28);
    dVar26 = *(double *)((longlong)local_560 + lVar45 + 0x30);
    dVar27 = *(double *)((longlong)local_560 + lVar45 + 0x38);
    dVar28 = *(double *)((longlong)local_560 + lVar45 + 0x50);
    dVar29 = *(double *)((longlong)local_560 + lVar45 + 0x58);
    dVar30 = *(double *)((longlong)local_560 + lVar45 + 0x40);
    dVar31 = *(double *)((longlong)local_560 + lVar45 + 0x48);
    dVar32 = *(double *)((longlong)local_560 + lVar45 + 0x60);
    dVar33 = *(double *)((longlong)local_560 + lVar45 + 0x68);
    dVar34 = *(double *)((longlong)local_560 + lVar45 + 0x70);
    dVar35 = *(double *)((longlong)local_560 + lVar45 + 0x78);
    *(double *)((longlong)adStack_760 + lVar45 + 0x10) =
         dVar34 * dVar96 + dVar28 * dVar92 + dVar26 * dVar65 + dVar22 * dVar63 + 0.0;
    *(double *)(local_740 + lVar45 + -8) =
         dVar35 * dVar100 + dVar29 * dVar87 + dVar27 * dVar74 + dVar23 * dVar59 + 0.0;
    *(double *)((longlong)adStack_760 + lVar45) =
         dVar32 * dVar96 + dVar30 * dVar92 + dVar24 * dVar65 + dVar20 * dVar63 + 0.0;
    *(double *)((longlong)adStack_760 + lVar45 + 8) =
         dVar33 * dVar100 + dVar31 * dVar87 + dVar25 * dVar74 + dVar21 * dVar59 + 0.0;
    *(double *)((longlong)local_738 + lVar45 + 8) =
         dVar34 * dVar134 + dVar28 * dVar128 + dVar26 * dVar123 + dVar22 * dVar119 + 0.0;
    *(double *)((longlong)local_738 + lVar45 + 0x10) =
         dVar35 * dVar137 + dVar29 * dVar132 + dVar27 * dVar127 + dVar23 * dVar122 + 0.0;
    *(double *)(local_740 + lVar45) =
         dVar32 * dVar134 + dVar30 * dVar128 + dVar24 * dVar123 + dVar20 * dVar119 + 0.0;
    *(double *)((longlong)local_738 + lVar45) =
         dVar33 * dVar137 + dVar31 * dVar132 + dVar25 * dVar127 + dVar21 * dVar122 + 0.0;
    *(double *)(local_708 + lVar45 + -8) =
         dVar34 * dVar8 + dVar28 * dVar7 + dVar26 * dVar5 + dVar22 * dVar3 + 0.0;
    *(double *)(local_708 + lVar45) =
         dVar35 * dVar9 + dVar29 * dVar6 + dVar27 * dVar4 + dVar23 * dVar2 + 0.0;
    *(double *)((longlong)local_738 + lVar45 + 0x18) =
         dVar32 * dVar8 + dVar30 * dVar7 + dVar24 * dVar5 + dVar20 * dVar3 + 0.0;
    *(double *)((longlong)local_738 + lVar45 + 0x20) =
         dVar33 * dVar9 + dVar31 * dVar6 + dVar25 * dVar4 + dVar21 * dVar2 + 0.0;
    *(double *)((longlong)local_700 + lVar45 + 0x10) =
         dVar34 * dVar16 + dVar28 * dVar14 + dVar26 * dVar12 + dVar22 * dVar10 + 0.0;
    *(double *)((longlong)local_700 + lVar45 + 0x18) =
         dVar35 * dVar17 + dVar29 * dVar15 + dVar27 * dVar13 + dVar23 * dVar11 + 0.0;
    *(double *)((longlong)local_700 + lVar45) =
         dVar32 * dVar16 + dVar30 * dVar14 + dVar24 * dVar12 + dVar20 * dVar10 + 0.0;
    *(double *)((longlong)local_700 + lVar45 + 8) =
         dVar33 * dVar17 + dVar31 * dVar15 + dVar25 * dVar13 + dVar21 * dVar11 + 0.0;
    lVar45 = lVar45 + 0x80;
  } while (lVar45 != 0x260);
  local_ca0._8_8_ = dStack_678;
  local_ca0._0_8_ = local_680;
  dVar65 = (dVar60 + dVar101) * ___xmm_3fe00000000000003fe0000000000000;
  dVar74 = (dVar66 + dVar112) * _UNK_150689678;
  dVar87 = (dVar95 + dVar102) * ___xmm_3fe00000000000003fe0000000000000;
  dVar92 = (dVar109 + dVar118) * _UNK_150689678;
  dVar122 = (dVar64 + dVar77) * ___xmm_3fe00000000000003fe0000000000000;
  dVar123 = (dVar75 + dVar107) * _UNK_150689678;
  dVar59 = (dVar67 + dVar82) * ___xmm_3fe00000000000003fe0000000000000;
  dVar63 = (dVar108 + dVar115) * _UNK_150689678;
  dVar96 = (dVar76 + dVar93) * ___xmm_3fe00000000000003fe0000000000000;
  dVar100 = (dVar113 + dVar129) * _UNK_150689678;
  local_c90._0_8_ = dVar96 * local_5f0 + dVar59 * local_670 + dVar122 * local_700[2];
  local_c90._8_8_ = dVar100 * dStack_5e8 + dVar63 * dStack_668 + dVar123 * local_700[3];
  dVar127 = (dVar97 + dVar106) * ___xmm_3fe00000000000003fe0000000000000;
  dVar128 = (dVar114 + dVar133) * _UNK_150689678;
  local_c70._0_8_ = dVar127 * local_5e0 + dVar87 * local_660 + dVar65 * local_700[4];
  local_c70._8_8_ = dVar128 * dStack_5d8 + dVar92 * dStack_658 + dVar74 * local_700[5];
  dVar119 = (dVar77 - dVar64) * ___xmm_3fe00000000000003fe0000000000000;
  dVar75 = (dVar107 - dVar75) * _UNK_150689678;
  dVar107 = (dVar101 - dVar60) * ___xmm_3fe00000000000003fe0000000000000;
  dVar112 = (dVar112 - dVar66) * _UNK_150689678;
  dVar66 = (dVar82 - dVar67) * ___xmm_3fe00000000000003fe0000000000000;
  dVar108 = (dVar115 - dVar108) * _UNK_150689678;
  dVar95 = (dVar102 - dVar95) * ___xmm_3fe00000000000003fe0000000000000;
  dVar101 = (dVar118 - dVar109) * _UNK_150689678;
  dVar109 = (dVar106 - dVar97) * ___xmm_3fe00000000000003fe0000000000000;
  dVar114 = (dVar133 - dVar114) * _UNK_150689678;
  dVar102 = (dVar93 - dVar76) * ___xmm_3fe00000000000003fe0000000000000;
  dVar106 = (dVar129 - dVar113) * _UNK_150689678;
  local_cf0._8_8_ = local_700[5] * dVar112;
  local_cf0._0_8_ = local_700[4] * dVar107;
  local_ce0._8_8_ = dStack_6c8 * dVar75;
  local_ce0._0_8_ = local_700[6] * dVar119;
  local_cc0._0_8_ =
       (double)((ulonglong)(local_670 * dVar66) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_700[2] * dVar119) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_cc0._8_8_ =
       (double)((ulonglong)(dStack_668 * dVar108) & _UNK_15061cc88) +
       (double)((ulonglong)(local_700[3] * dVar75) & _UNK_15061cc88);
  local_cd0._0_8_ =
       (double)((ulonglong)(local_650 * dVar66) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_700[6] * dVar119) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_cd0._8_8_ =
       (double)((ulonglong)(dStack_648 * dVar108) & _UNK_15061cc88) +
       (double)((ulonglong)(dStack_6c8 * dVar75) & _UNK_15061cc88);
  auVar131._0_8_ =
       (double)((ulonglong)(dVar95 * local_640) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(dVar107 * local_6c0) & __xmm_7fffffffffffffff7fffffffffffffff);
  auVar131._8_8_ =
       (double)((ulonglong)(dVar101 * dStack_638) & _UNK_15061cc88) +
       (double)((ulonglong)(dVar112 * dStack_6b8) & _UNK_15061cc88);
  dVar77 = (double)local_c90._0_8_ + local_570;
  dVar82 = (double)local_c90._8_8_ + dStack_568;
  dVar60 = dVar127 * local_600 + dVar87 * local_680 + dVar65 * local_700[0] + local_580;
  dVar64 = dVar128 * dStack_5f8 + dVar92 * dStack_678 + dVar74 * local_700[1] + dStack_578;
  dVar129 = dVar96 * local_5d0 + dVar59 * local_650 + dVar122 * local_700[6] + local_560[2];
  dVar133 = dVar100 * dStack_5c8 + dVar63 * dStack_648 + dVar123 * dStack_6c8 + local_560[3];
  local_cb0._0_8_ =
       (double)((ulonglong)(local_600 * dVar109) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_680 * dVar95) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)((ulonglong)(local_700[0] * dVar107) & __xmm_7fffffffffffffff7fffffffffffffff);
  local_cb0._8_8_ =
       (double)((ulonglong)(dStack_5f8 * dVar114) & _UNK_15061cc88) +
       (double)((ulonglong)(dStack_678 * dVar101) & _UNK_15061cc88) +
       (double)((ulonglong)(local_700[1] * dVar112) & _UNK_15061cc88);
  dVar67 = (double)local_c70._0_8_ + local_560[0];
  dVar76 = (double)local_c70._8_8_ + local_560[1];
  local_c60._0_8_ =
       (double)((ulonglong)(local_5f0 * dVar102) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)local_cc0._0_8_;
  local_c60._8_8_ =
       (double)((ulonglong)(dStack_5e8 * dVar106) & _UNK_15061cc88) + (double)local_cc0._8_8_;
  dVar93 = dVar96 * local_5b0 + dVar59 * local_630 + dVar122 * local_6b0 + local_560[6];
  dVar97 = dVar100 * dStack_5a8 + dVar63 * dStack_628 + dVar123 * dStack_6a8 + local_560[7];
  dVar107 = (double)((ulonglong)(local_5e0 * dVar109) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(local_660 * dVar95) & __xmm_7fffffffffffffff7fffffffffffffff) +
            (double)((ulonglong)(local_700[4] * dVar107) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar112 = (double)((ulonglong)(dStack_5d8 * dVar114) & _UNK_15061cc88) +
            (double)((ulonglong)(dStack_658 * dVar101) & _UNK_15061cc88) +
            (double)((ulonglong)(local_700[5] * dVar112) & _UNK_15061cc88);
  dVar115 = dVar127 * local_5c0 + dVar87 * local_640 + dVar65 * local_6c0 + local_560[4];
  dVar118 = dVar128 * dStack_5b8 + dVar92 * dStack_638 + dVar74 * dStack_6b8 + local_560[5];
  auVar130._0_8_ =
       (double)((ulonglong)(local_5d0 * dVar102) & __xmm_7fffffffffffffff7fffffffffffffff) +
       (double)local_cd0._0_8_;
  auVar130._8_8_ =
       (double)((ulonglong)(dStack_5c8 * dVar106) & _UNK_15061cc88) + (double)local_cd0._8_8_;
  dVar109 = (double)((ulonglong)(dVar109 * local_5c0) & __xmm_7fffffffffffffff7fffffffffffffff) +
            auVar131._0_8_;
  dVar113 = (double)((ulonglong)(dVar114 * dStack_5b8) & _UNK_15061cc88) + auVar131._8_8_;
  dVar95 = (double)((ulonglong)(dVar102 * local_5b0) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(dVar66 * local_630) & __xmm_7fffffffffffffff7fffffffffffffff) +
           (double)((ulonglong)(dVar119 * local_6b0) & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar101 = (double)((ulonglong)(dVar106 * dStack_5a8) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar108 * dStack_628) & _UNK_15061cc88) +
            (double)((ulonglong)(dVar75 * dStack_6a8) & _UNK_15061cc88);
  local_c50._8_8_ = dVar64 - (double)local_cb0._8_8_;
  local_c50._0_8_ = dVar60 - (double)local_cb0._0_8_;
  auVar121._0_8_ = dVar77 - (double)local_c60._0_8_;
  auVar121._8_8_ = dVar82 - (double)local_c60._8_8_;
  auVar111._0_8_ = dVar67 - dVar107;
  auVar111._8_8_ = dVar76 - dVar112;
  local_cb0._0_8_ = (double)local_cb0._0_8_ + dVar60;
  local_cb0._8_8_ = (double)local_cb0._8_8_ + dVar64;
  auVar125._8_8_ = dVar133;
  auVar125._0_8_ = dVar129;
  auVar120._0_8_ = dVar129 - auVar130._0_8_;
  auVar120._8_8_ = dVar133 - auVar130._8_8_;
  local_c60._0_8_ = (double)local_c60._0_8_ + dVar77;
  local_c60._8_8_ = (double)local_c60._8_8_ + dVar82;
  local_c30._8_8_ = dVar118 - dVar113;
  local_c30._0_8_ = dVar115 - dVar109;
  auVar110._0_8_ = dVar107 + dVar67;
  auVar110._8_8_ = dVar112 + dVar76;
  auVar117._0_8_ = dVar93 - dVar95;
  auVar117._8_8_ = dVar97 - dVar101;
  local_c80._8_8_ = auVar130._8_8_ + dVar133;
  local_c80._0_8_ = auVar130._0_8_ + dVar129;
  auVar136._0_8_ = dVar109 + dVar115;
  auVar136._8_8_ = dVar113 + dVar118;
  auVar116._0_8_ = dVar95 + dVar93;
  auVar116._8_8_ = dVar101 + dVar97;
  local_b50 = auVar72[0];
  cStack_b4f = auVar72[1];
  cStack_b4e = auVar72[2];
  cStack_b4d = auVar72[3];
  cStack_b4c = auVar72[4];
  cStack_b4b = auVar72[5];
  cStack_b4a = auVar72[6];
  cStack_b49 = auVar72[7];
  cStack_b48 = auVar72[8];
  cStack_b47 = auVar72[9];
  cStack_b46 = auVar72[10];
  cStack_b45 = auVar72[0xb];
  cStack_b44 = auVar72[0xc];
  cStack_b43 = auVar72[0xd];
  cStack_b42 = auVar72[0xe];
  cStack_b41 = auVar72[0xf];
  auVar135[0] = -(local_b50 == '\0');
  auVar135[1] = -(cStack_b4f == '\0');
  auVar135[2] = -(cStack_b4e == '\0');
  auVar135[3] = -(cStack_b4d == '\0');
  auVar135[4] = -(cStack_b4c == '\0');
  auVar135[5] = -(cStack_b4b == '\0');
  auVar135[6] = -(cStack_b4a == '\0');
  auVar135[7] = -(cStack_b49 == '\0');
  auVar135[8] = -(cStack_b48 == '\0');
  auVar135[9] = -(cStack_b47 == '\0');
  auVar135[10] = -(cStack_b46 == '\0');
  auVar135[0xb] = -(cStack_b45 == '\0');
  auVar135[0xc] = -(cStack_b44 == '\0');
  auVar135[0xd] = -(cStack_b43 == '\0');
  auVar135[0xe] = -(cStack_b42 == '\0');
  auVar135[0xf] = -(cStack_b41 == '\0');
  auVar124._8_4_ = 0xffffffff;
  auVar124._0_8_ = 0xffffffffffffffff;
  auVar124._12_4_ = 0xffffffff;
  auVar70 = pmovsxbd(auVar125,auVar124 ^ auVar135);
  auVar80 = auVar61 & auVar70;
  iVar50 = movmskps(0x260,auVar80);
  auVar71 = auVar111;
  auVar78 = auVar121;
  auVar79 = auVar110;
  if (iVar50 == 0) {
LAB_140a92757:
    auVar139._8_8_ = auVar136._8_8_;
    auVar139._0_8_ = auVar136._0_8_;
    auVar80 = pmovsxbd(auVar80,auVar135);
    iVar50 = movmskps(iVar50,auVar61 & auVar80);
    if ((iVar50 != 0) && ((char)iVar50 != '\0')) {
      auVar61 = pmovzxbd(auVar80,auVar135);
      auVar62._0_4_ = auVar61._0_4_ << 0x1f;
      auVar62._4_4_ = auVar61._4_4_ << 0x1f;
      auVar62._8_4_ = auVar61._8_4_ << 0x1f;
      auVar62._12_4_ = auVar61._12_4_ << 0x1f;
      uVar38 = movmskps(uVar38,auVar62);
      cVar37 = (char)((char)uVar38 << 4) >> 4;
      param_4 = (double *)(ulonglong)CONCAT31((int3)(uVar38 >> 8),cVar37);
      if ((uVar38 & 1) == 0) {
        auVar80 = auVar79;
        auVar83 = auVar130;
        auVar126 = auVar70;
        local_c20 = auVar78;
        local_c10 = auVar71;
        auVar61 = auVar131;
        if ((uVar38 & 2) == 0) goto LAB_140a93144;
LAB_140a927ee:
        local_cf0._0_8_ = local_cf0._0_8_ & 0xffffffffffff00ff | 0x100;
      }
      else {
        local_c20._8_8_ = local_cb0._8_8_;
        local_c20._0_8_ = local_cb0._0_8_;
        local_c10._8_8_ = auVar110._8_8_;
        local_c10._0_8_ = auVar110._0_8_;
        auVar126._8_8_ = auVar136._8_8_;
        auVar126._0_8_ = auVar136._0_8_;
        local_cf0._0_8_ = local_cf0._0_8_ & 0xffffffffffffff00 | 1;
        auVar80 = local_c30;
        auVar83 = auVar111;
        auVar61 = local_c50._0_16_;
        if ((uVar38 & 2) != 0) goto LAB_140a927ee;
LAB_140a93144:
        local_c50._0_16_ = blendpd(auVar131,auVar61,1);
        auVar111 = blendpd(auVar130,auVar83,1);
        local_c30 = blendpd(auVar79,auVar80,1);
        local_cb0 = blendpd(auVar78,local_c20,1);
        auVar110 = blendpd(auVar71,local_c10,1);
        auVar139 = blendpd(auVar70,auVar126,1);
      }
      bVar58 = (uVar38 & 4) != 0;
      auVar70 = local_ce0;
      if (bVar58) {
        auVar70 = auVar121;
      }
      auVar73 = local_ca0;
      auVar71 = local_cc0;
      auVar78 = local_cd0;
      auVar84 = local_c90;
      auVar85 = local_c70;
      if (bVar58) {
        auVar73._8_8_ = auVar116._8_8_;
        auVar73._0_8_ = auVar116._0_8_;
        local_cf0._0_8_ = local_cf0._0_8_ & 0xffffffffff00ffff | 0x10000;
        auVar71 = auVar120;
        auVar78 = auVar117;
        auVar84 = local_c80;
        auVar85 = local_c60;
      }
      if (-1 < cVar37) {
        auVar121 = blendpd(local_ce0,auVar70,1);
        auVar120 = blendpd(local_cc0,auVar71,1);
        auVar117 = blendpd(local_cd0,auVar78,1);
        local_c60 = blendpd(local_c70,auVar85,1);
        local_c80 = blendpd(local_c90,auVar84,1);
        auVar116 = blendpd(local_ca0,auVar73,1);
      }
      if (cVar37 < '\0') {
        local_cf0._0_8_ = local_cf0._0_8_ & 0xffffffff00ffffff | 0x1000000;
      }
      auVar131 = blendpd(local_c50._0_16_,auVar61,1);
      local_ce0 = blendpd(auVar121,auVar70,1);
      auVar130 = blendpd(auVar111,auVar83,1);
      local_cc0 = blendpd(auVar120,auVar71,1);
      auVar79 = blendpd(local_c30,auVar80,1);
      local_cd0 = blendpd(auVar117,auVar78,1);
      auVar78 = blendpd(local_cb0,local_c20,1);
      local_c70 = blendpd(local_c60,auVar85,1);
      auVar71 = blendpd(auVar110,local_c10,1);
      local_c90 = blendpd(local_c80,auVar84,1);
      auVar70 = blendpd(auVar139,auVar126,1);
      local_ca0 = blendpd(auVar116,auVar73,1);
    }
  }
  else {
    auVar71 = minpd(auVar69,auVar121);
    uVar38 = movmskps(uVar38,auVar70);
    bVar36 = (char)((char)uVar38 << 4) >> 4;
    if ((uVar38 & 4) != 0) {
      auVar70 = blendpd(auVar70,auVar71,1);
      local_ce0 = auVar70;
    }
    auVar138._8_8_ = local_c60._8_8_;
    auVar138._0_8_ = local_c60._0_8_;
    if ((char)bVar36 < '\0') {
      auVar70 = blendpd(local_ce0,auVar71,2);
      local_ce0 = auVar70;
    }
    uVar38 = (uint)bVar36;
    auVar71 = minpd(local_b40,auVar120);
    if ((bVar36 & 4) != 0) {
      auVar70 = blendpd(auVar70,auVar71,1);
      local_cc0 = auVar70;
    }
    if ((char)bVar36 < '\0') {
      auVar70 = blendpd(local_cc0,auVar71,2);
      local_cc0 = auVar70;
    }
    auVar71 = minpd(local_b30,auVar117);
    if ((bVar36 & 4) != 0) {
      auVar70 = blendpd(auVar70,auVar71,1);
      local_cd0 = auVar70;
    }
    if ((char)bVar36 < '\0') {
      auVar70 = blendpd(local_cd0,auVar71,2);
      local_cd0 = auVar70;
    }
    auVar71 = maxpd(local_b20,auVar138);
    if ((bVar36 & 4) != 0) {
      auVar70 = blendpd(auVar70,auVar71,1);
      local_c70 = auVar70;
    }
    if ((char)bVar36 < '\0') {
      auVar70 = blendpd(local_c70,auVar71,2);
      local_c70 = auVar70;
    }
    auVar71 = maxpd(local_b10,local_c80);
    if ((bVar36 & 4) != 0) {
      auVar70 = blendpd(auVar70,auVar71,1);
      local_c90 = auVar70;
    }
    if ((char)bVar36 < '\0') {
      auVar70 = blendpd(local_c90,auVar71,2);
      local_c90 = auVar70;
    }
    auVar80 = maxpd(local_b00,auVar116);
    if ((bVar36 & 4) != 0) {
      local_ca0 = blendpd(auVar70,auVar80,1);
    }
    auVar79 = minpd(local_ba0,auVar111);
    auVar83 = minpd(local_b90,local_c30);
    auVar78 = maxpd(local_b80,local_cb0);
    auVar71 = maxpd(local_b70,auVar110);
    auVar70 = maxpd(auVar103,auVar136);
    if ((char)bVar36 < '\0') {
      local_ca0 = blendpd(local_ca0,auVar80,2);
    }
    auVar131 = minpd(local_bb0,local_c50._0_16_);
    auVar130 = blendpd(auVar79,auVar79,1);
    auVar79 = blendpd(auVar83,auVar83,1);
    auVar78 = blendpd(auVar78,auVar78,1);
    auVar71 = blendpd(auVar71,auVar71,1);
    auVar70 = blendpd(auVar70,auVar70,1);
    param_4 = (double *)((ulonglong)CONCAT31((int3)((uint)iVar47 >> 8),bVar48) & 0xffffffffffffff0f)
    ;
    local_cf0 = auVar72;
    if ((char)param_4 != (char)iVar50) goto LAB_140a92757;
  }
  if ((bVar48 & 1) == 0) {
    auVar80 = local_ba0;
    auVar83 = local_b90;
    auVar84 = auVar72;
    auVar85 = local_b80;
    auVar86 = local_b70;
    auVar89 = auVar103;
    auVar61 = local_bb0;
    if ((bVar48 & 2) == 0) goto LAB_140a92f31;
LAB_140a929f3:
    auVar72 = pblendvb(auVar84,auVar72,___xmm_000000000000000000000000ffffff00);
    auVar103 = local_cf0;
  }
  else {
    auVar80 = auVar130;
    auVar83 = auVar79;
    auVar84 = local_cf0;
    auVar85 = auVar78;
    auVar86 = auVar71;
    auVar89 = auVar70;
    auVar61 = auVar131;
    if ((bVar48 & 2) != 0) goto LAB_140a929f3;
LAB_140a92f31:
    auVar131 = blendpd(local_bb0,auVar61,1);
    auVar130 = blendpd(local_ba0,auVar80,1);
    auVar79 = blendpd(local_b90,auVar83,1);
    auVar78 = blendpd(local_b80,auVar85,1);
    auVar71 = blendpd(local_b70,auVar86,1);
    auVar70 = blendpd(auVar103,auVar89,1);
    auVar103 = pblendvb(auVar84,auVar72,___xmm_000000000000000000000000ffffff00);
    auVar72 = auVar103;
  }
  if ((bVar48 & 4) == 0) {
    auVar81 = pblendvb(auVar103,auVar72,___xmm_000000000000000000000000ffff00ff);
    auVar84 = local_b20;
    auVar88 = local_b10;
    auVar90 = local_b00;
    auVar91 = local_b40;
    auVar94 = local_b30;
    auVar72 = auVar81;
    auVar103 = auVar69;
    if (-1 < (char)bVar48) goto LAB_140a93022;
LAB_140a92acf:
    if (-1 < (char)bVar48) goto LAB_140a9303e;
LAB_140a92ad5:
    if (-1 < (char)bVar48) goto LAB_140a9305a;
LAB_140a92adb:
    if (-1 < (char)bVar48) goto LAB_140a93076;
LAB_140a92ae1:
    if (-1 < (char)bVar48) goto LAB_140a93094;
LAB_140a92ae7:
    if (-1 < (char)bVar48) goto LAB_140a930af;
LAB_140a92aed:
    auVar69 = pblendvb(auVar72,auVar81,___xmm_000000000000000000000000ff00ffff);
  }
  else {
    auVar81 = pblendvb(auVar103,auVar72,___xmm_000000000000000000000000ffff00ff);
    auVar84 = local_c70;
    auVar88 = local_c90;
    auVar90 = local_ca0;
    auVar91 = local_cc0;
    auVar94 = local_cd0;
    auVar72 = local_cf0;
    auVar103 = local_ce0;
    if ((char)bVar48 < '\0') goto LAB_140a92acf;
LAB_140a93022:
    local_ce0 = pblendw(auVar69,auVar103,0xf);
    if ((char)bVar48 < '\0') goto LAB_140a92ad5;
LAB_140a9303e:
    local_cc0 = pblendw(local_b40,auVar91,0xf);
    if ((char)bVar48 < '\0') goto LAB_140a92adb;
LAB_140a9305a:
    local_cd0 = pblendw(local_b30,auVar94,0xf);
    if ((char)bVar48 < '\0') goto LAB_140a92ae1;
LAB_140a93076:
    local_c70 = pblendw(local_b20,auVar84,0xf);
    if ((char)bVar48 < '\0') goto LAB_140a92ae7;
LAB_140a93094:
    local_c90 = pblendw(local_b10,auVar88,0xf);
    if ((char)bVar48 < '\0') goto LAB_140a92aed;
LAB_140a930af:
    local_ca0 = blendps(local_b00,auVar90,3);
    auVar69 = pblendvb(auVar72,auVar81,___xmm_000000000000000000000000ff00ffff);
  }
  if (-1 < (char)bVar48) {
    local_cf0 = auVar69;
  }
  auVar72 = pblendvb(local_cf0,auVar69,___xmm_00000000000000000000000000ffffff);
  local_bb0 = blendpd(auVar131,auVar61,1);
  auVar69 = pblendw(local_ce0,auVar103,0xf);
  local_ba0 = blendpd(auVar130,auVar80,1);
  local_b40 = pblendw(local_cc0,auVar91,0xf);
  local_b90 = blendpd(auVar79,auVar83,1);
  local_b30 = pblendw(local_cd0,auVar94,0xf);
  local_b80 = blendpd(auVar78,auVar85,1);
  local_b20 = pblendw(local_c70,auVar84,0xf);
  local_b70 = blendpd(auVar71,auVar86,1);
  local_b10 = pblendw(local_c90,auVar88,0xf);
  auVar103 = blendpd(auVar70,auVar89,1);
  local_b00 = blendps(local_ca0,auVar90,3);
  pdVar41 = param_4;
LAB_140a92c18:
  local_7e0 = local_bb0._0_8_;
  adStack_7d8[0] = (double)local_ba0._0_8_;
  local_7a8 = local_bb0._8_8_;
  local_770 = auVar69._0_8_;
  local_738[0] = auVar69._8_8_;
  local_7a0 = local_ba0._8_8_;
  uStack_798 = local_b90._8_8_;
  local_768 = local_b40._0_8_;
  adStack_760[0] = (double)local_b30._0_8_;
  local_738[1] = (double)local_b40._8_8_;
  local_738[2] = (double)local_b30._8_8_;
  adStack_7d8[1] = (double)local_b90._0_8_;
  local_7c8[0] = (double)local_b80._0_8_;
  local_7c8[1] = (double)local_b70._0_8_;
  local_790 = local_b80._8_8_;
  uStack_788 = local_b70._8_8_;
  adStack_760[1] = (double)local_b20._0_8_;
  adStack_760[2] = (double)local_b10._0_8_;
  local_738[3] = (double)local_b20._8_8_;
  local_738[4] = (double)local_b10._8_8_;
  local_7c8[2] = (double)auVar103._0_8_;
  local_780 = auVar103._8_8_;
  adStack_760[3] = (double)local_b00._0_8_;
  local_738[5] = (double)local_b00._8_8_;
  local_7b0[0] = auVar72[0];
  local_778 = auVar72[1];
  local_740[0] = auVar72[2];
  local_708[0] = auVar72[3];
  auVar69._0_4_ = -(uint)((int)(uint)__xmm_00000003000000020000000100000000 < (int)param_6);
  auVar69._4_4_ = -(uint)((int)__xmm_00000003000000020000000100000000._4_4_ < (int)param_6);
  auVar69._8_4_ = -(uint)((int)_UNK_150631e08 < (int)param_6);
  auVar69._12_4_ = -(uint)((int)_UNK_150631e0c < (int)param_6);
  uVar38 = movmskps((int)pdVar41,auVar69);
  if (uVar38 != 0) {
    uVar42 = (ulonglong)(uVar38 & 0xff);
    do {
      if (uVar42 == 0) {
        uVar43 = 0x40;
      }
      else {
        uVar43 = 0;
        for (uVar51 = uVar42; (uVar51 & 1) == 0; uVar51 = uVar51 >> 1 | 0x8000000000000000) {
          uVar43 = uVar43 + 1;
        }
      }
      lVar45 = uVar43 * 0x38;
      cVar46 = param_5[3][0];
      cVar37 = local_7b0[lVar45];
      if ((cVar46 == '\0') || (cVar37 == '\0')) {
        if (cVar37 == '\0') {
          cVar46 = param_5[3][0];
          dVar76 = *(double *)param_5[2];
          dVar67 = *(double *)(param_5[1] + 8);
          dVar64 = *(double *)param_5[1];
          uVar68 = *(undefined8 *)*param_5;
          dVar60 = *(double *)(*param_5 + 8);
          dVar77 = *(double *)(param_5[2] + 8);
        }
        else {
          uVar68 = *(undefined8 *)*(undefined1 (*) [16])(&local_7e0 + uVar43 * 7);
          dVar60 = adStack_7d8[uVar43 * 7];
          dVar64 = adStack_7d8[uVar43 * 7 + 1];
          dVar67 = local_7c8[uVar43 * 7];
          dVar76 = local_7c8[uVar43 * 7 + 1];
          cVar46 = cVar37;
          dVar77 = *(double *)(local_7b0 + lVar45 + -8);
        }
      }
      else {
        auVar69 = minpd(*param_5,*(undefined1 (*) [16])(&local_7e0 + uVar43 * 7));
        uVar68 = auVar69._0_8_;
        dVar60 = auVar69._8_8_;
        dVar64 = *(double *)param_5[1];
        if (adStack_7d8[uVar43 * 7 + 1] <= *(double *)param_5[1]) {
          dVar64 = adStack_7d8[uVar43 * 7 + 1];
        }
        auVar69 = maxpd(*(undefined1 (*) [16])(param_5[1] + 8),
                        *(undefined1 (*) [16])(local_7c8 + uVar43 * 7));
        dVar67 = auVar69._0_8_;
        dVar76 = auVar69._8_8_;
        dVar77 = *(double *)(param_5[2] + 8);
        if (*(double *)(param_5[2] + 8) <= *(double *)(local_7b0 + lVar45 + -8)) {
          dVar77 = *(double *)(local_7b0 + lVar45 + -8);
        }
      }
      uVar42 = uVar42 & ~(1L << (uVar43 & 0x3f));
      *(undefined8 *)*param_5 = uVar68;
      *(double *)(*param_5 + 8) = dVar60;
      *(double *)param_5[1] = dVar64;
      *(double *)(param_5[1] + 8) = dVar67;
      *(double *)param_5[2] = dVar76;
      *(double *)(param_5[2] + 8) = dVar77;
      param_5[3][0] = cVar46;
    } while (uVar42 != 0);
  }
  return;
}

